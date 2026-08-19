Attribute VB_Name = "ModuleGDI"
Option Explicit

         Public Type RECT
             Left As Long
             Top As Long
             Right As Long
             Bottom As Long
         End Type
         ' Creates a memory DC
         Public Declare Function CreateCompatibleDC Lib "gdi32" ( _
             ByVal hdc As Long _
             ) As Long
         ' Creates a bitmap in memory:
         Public Declare Function CreateCompatibleBitmap Lib "gdi32" ( _
             ByVal hdc As Long, _
             ByVal nWidth As Long, ByVal nHeight As Long _
             ) As Long
         ' Places a GDI Object into DC, returning the previous one:
         Public Declare Function SelectObject Lib "gdi32" _
             (ByVal hdc As Long, ByVal hObject As Long _
             ) As Long
         ' Deletes a GDI Object:
         Public Declare Function DeleteObject Lib "gdi32" _
             (ByVal hObject As Long _
             ) As Long
         ' Copies Bitmaps from one DC to another, can also perform
         ' raster operations during the transfer:
         Public Declare Function BitBlt Lib "gdi32" ( _
             ByVal hDestDC As Long, _
             ByVal x As Long, ByVal y As Long, _
             ByVal nWidth As Long, ByVal nHeight As Long, _
             ByVal hSrcDC As Long, _
             ByVal xSrc As Long, ByVal ySrc As Long, _
             ByVal dwRop As Long _
             ) As Long
         Private Const SRCCOPY = &HCC0020
         Private Const SRCAND = &H8800C6
         Private Const SRCPAINT = &HEE0086
         Private Const SRCINVERT = &H660046

         ' Sets the backcolour of a device context:
         Public Declare Function SetBkColor Lib "gdi32" (ByVal hdc As Long, ByVal crColor As Long) As Long
         ' Create a brush of a given colour:
         Public Declare Function CreateSolidBrush Lib "gdi32" ( _
             ByVal crColor As Long _
             ) As Long
         ' Fills a RECT in a DC with a specified brush
         Public Declare Function FillRect Lib "user32" ( _
             ByVal hdc As Long, _
             lpRect As RECT, _
             ByVal hBrush As Long _
             ) As Long
         ' reads pixel value  from hdc
         Public Declare Function GetPixel Lib "gdi32" (ByVal hdc As Long, ByVal x As Long, ByVal y As Long) As Long
         ' set pixel value
         Public Declare Function SetPixel Lib "gdi32" (ByVal hdc As Long, ByVal x As Long, ByVal y As Long, ByVal crColor As Long) As Long

         Public MaxXImg As Integer, MaxYImg As Integer

         Public Sub ReplaceColor( _
                 ByRef picThis As PictureBox, _
                 ByVal lFromColour As Long, _
                 ByVal lToColor As Long _
             )
         Dim lW As Long
         Dim lH As Long
         Dim lMaskDC As Long, lMaskBMP As Long, lMaskBMPOLd As Long
         Dim lCopyDC As Long, lCopyBMP As Long, lCopyBMPOLd As Long
         Dim tR As RECT
         Dim hBr As Long
             
             ' Cache the width & height of the picture:
             lW = picThis.ScaleWidth
             '\ Screen.TwipsPerPixelX
             lH = picThis.ScaleHeight
             '\ Screen.TwipsPerPixelY

             ' Create a Mono DC & Bitmap
             If (CreateDC(picThis, lW, lH, lMaskDC, lMaskBMP, lMaskBMPOLd, True)) Then
                 ' Create a DC & Bitmap with the same colour depth
                 ' as the picture:
                 If (CreateDC(picThis, lW, lH, lCopyDC, lCopyBMP, lCopyBMPOLd)) Then
                     ' Make a mask from the picture which is white in the
                     ' replace colour area:
                     SetBkColor picThis.hdc, lFromColour
                     BitBlt lMaskDC, 0, 0, lW, lH, picThis.hdc, 0, 0, SRCCOPY
                                 
                     ' Fill the colour DC with the colour we want to replace with
                     tR.Right = lW: tR.Bottom = lH
                     hBr = CreateSolidBrush(lToColor)
                     FillRect lCopyDC, tR, hBr
                     DeleteObject hBr
                     ' Turn the colour DC black except where the mask is white:
                     BitBlt lCopyDC, 0, 0, lW, lH, lMaskDC, 0, 0, SRCAND
                     
                     ' Create an inverted mask, so it is black where the
                     ' colour is to be replaced but white otherwise:
                     hBr = CreateSolidBrush(&HFFFFFF)
                     FillRect lMaskDC, tR, hBr
                     DeleteObject hBr
                     BitBlt lMaskDC, 0, 0, lW, lH, picThis.hdc, 0, 0, SRCINVERT

                     ' AND the inverted mask with the picture. The picture
                     ' goes black where the colour is to be replaced, but is
                     ' unaffected otherwise.
                     SetBkColor picThis.hdc, &HFFFFFF
                     BitBlt picThis.hdc, 0, 0, lW, lH, lMaskDC, 0, 0, SRCAND
                                 
                     ' Finally, OR the coloured item with the picture. Where
                     ' the picture is black and the coloured DC isn't,
                     ' the colour will be transferred:
                     BitBlt picThis.hdc, 0, 0, lW, lH, lCopyDC, 0, 0, SRCPAINT
                     picThis.Refresh
                     
                     ' Clear up the colour DC:
                     SelectObject lCopyDC, lCopyBMPOLd
                     DeleteObject lCopyBMP
                     DeleteObject lCopyDC
                     
                 End If
                 
                 ' Clear up the mask DC:
                 SelectObject lMaskDC, lMaskBMPOLd
                 DeleteObject lMaskBMP
                 DeleteObject lMaskDC
             End If
         End Sub
         
         
         Public Function CreateDC( _
                 ByRef picThis As PictureBox, _
                 ByVal lW As Long, ByVal lH As Long, _
                 ByRef lhDC As Long, ByRef lhBmp As Long, ByRef lhBmpOld As Long, _
                 Optional ByVal bMono As Boolean = False _
             ) As Boolean
             
             If (bMono) Then
                 lhDC = CreateCompatibleDC(0)
             Else
                 lhDC = CreateCompatibleDC(picThis.hdc)
             End If
             If (lhDC <> 0) Then
                 If (bMono) Then
                     lhBmp = CreateCompatibleBitmap(lhDC, lW, lH)
                 Else
                     lhBmp = CreateCompatibleBitmap(picThis.hdc, lW, lH)
                 End If
                 If (lhBmp <> 0) Then
                     lhBmpOld = SelectObject(lhDC, lhBmp)
                     CreateDC = True
                 Else
                     DeleteObject lhDC
                     lhDC = 0
                 End If
             End If
             
         End Function

