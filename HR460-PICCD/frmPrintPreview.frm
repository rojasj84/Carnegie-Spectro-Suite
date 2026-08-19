VERSION 5.00
Object = "{F9043C88-F6F2-101A-A3C9-08002B2F49FB}#1.2#0"; "COMDLG32.OCX"
Begin VB.Form frmPrintPreview 
   BackColor       =   &H80000016&
   Caption         =   "Print Preview"
   ClientHeight    =   6675
   ClientLeft      =   60
   ClientTop       =   345
   ClientWidth     =   8550
   LinkTopic       =   "Form1"
   ScaleHeight     =   6675
   ScaleWidth      =   8550
   StartUpPosition =   2  'CenterScreen
   Begin MSComDlg.CommonDialog CommonDialog1 
      Left            =   120
      Top             =   480
      _ExtentX        =   847
      _ExtentY        =   847
      _Version        =   393216
      FileName        =   "C:\windows\desktop"
   End
   Begin VB.CommandButton cmdFont 
      Caption         =   "Select Font"
      Height          =   255
      Left            =   120
      TabIndex        =   1
      Top             =   0
      Width           =   975
   End
   Begin VB.PictureBox Picture1 
      Appearance      =   0  'Flat
      AutoRedraw      =   -1  'True
      AutoSize        =   -1  'True
      BackColor       =   &H8000000E&
      FillColor       =   &H008080FF&
      ForeColor       =   &H80000008&
      Height          =   5535
      Left            =   840
      ScaleHeight     =   5505
      ScaleMode       =   0  'User
      ScaleWidth      =   6825
      TabIndex        =   0
      Top             =   360
      Width           =   6855
   End
End
Attribute VB_Name = "frmPrintPreview"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit


Public Sub Redraw(Dest As Object)
       Dim Xpix, iP, klbl, iFil As Integer
       Dim SaveMaxPix As Integer
       Dim LinX
       Dim MaxY, MaxX, MinY, MinX
       Dim Yoffset, Xoffset
       Dim FirstCursor, ExactLimits, PlotAxis
       Dim StepX, StepY, StartX, StartY
       Dim lblX(8) As PlotLabel
       Dim lblY(8) As PlotLabel
       Dim TopRect As RECT
       Dim BotRect As RECT
       Dim LeftRect As RECT
       Dim RightRect As RECT
       Dim hBr As Long
       Dim BkColor As Long
       Dim DbgColor As Long
       Dim PrintMode
       Dim PScaleX, PScaleY
       Dim Dumwp, Dumwt, Dumhp, Dumht
       Dim frmRatio
       Dim LineWidth
       
      ' Getting defaults from frame frmTerminal
      StepX = frmTerminal.StepX
      StepY = frmTerminal.StepY
      StartX = frmTerminal.StartX
      StartY = frmTerminal.StartY
      
      
      MaxX = frmTerminal.MaxX
      MaxY = frmTerminal.MaxY
      MinX = frmTerminal.MinX
      MinY = frmTerminal.MinY
      FirstCursor = frmTerminal.FirstCursor
      ExactLimits = frmTerminal.ExactLimits
      PlotAxis = frmTerminal.PlotAxis
      
    ' Scale modification for printer output, correcting for unprintable area
     Printer.ScaleMode = vbTwips
     PScaleX = Printer.Width / Printer.ScaleWidth
     PScaleY = Printer.Height / Printer.ScaleHeight
     'Debug.Print PScaleX, PScaleY
     
   ' Max - Min troubleshooting
  If (Not IsEmpty(MaxY)) And (Not IsEmpty(MaxX)) Then
     If Abs(MaxY - MinY) < 0.03 Then
       MaxY = MaxY + 0.05
       MinY = MinY - 0.05
     End If
     If Abs(MaxX - MinX) < 0.03 Then
       MaxX = MaxX + 0.05
       MinX = MinX - 0.05
     End If

    ' some more defaults
       FirstCursor = True
       LineWidth = 1
       Dest.DrawStyle = 0
       If Dest Is Printer Then
           Dest.DrawWidth = Round(LineWidth * Printer.ScaleWidth / Picture1.Width)
          
        Else
           Dest.DrawWidth = LineWidth
       End If
       
       
    'this needs to be changed to left,right,top, bottom offsets
        frmRatio = 9
        Yoffset = (MaxY - MinY) / frmRatio
        Xoffset = (MaxX - MinX) / frmRatio
        
        'scaling for convenient output
         If Dest Is Printer Then
              Dest.Scale (MinX - Xoffset, MaxY + Yoffset)-(MaxX + Xoffset, MinY - Yoffset)
            Else
               Dest.Scale (MinX - Xoffset, MaxY + Yoffset)-(MaxX + Xoffset, MinY - Yoffset)
               GetPrinterFont Dest
          End If
        
     


     'push parameters into stack
     frmTerminal.PushConfig
     
     'start main drawing loop through active data files
     For iFil = 1 To frmTerminal.FileIndex

       If frmTerminal.mnuFile1(iFil).Checked Then
       
       'get the file parameters
        frmTerminal.SwapConfig (iFil)
        
        'prepare scaling
        frmTerminal.Recalibrate
        frmTerminal.Xscale
         
         
         'draw data from file
         For iP = 2 To DataLd(iFil).tMaxPix
            If ((PlotX(iP - 1) - MinX) * (PlotX(iP - 1) - MaxX) < 0) Or ((PlotX(iP) - MinX) * (PlotX(iP) - MaxX) < 0) Then
                If Dest Is Printer Then
                   Dest.Line (PlotX(iP - 1), MaxY + MinY - DataLd(iFil).tDataY(iP - 1) - Offset(iFil))-(PlotX(iP), MaxY + MinY - DataLd(iFil).tDataY(iP) - Offset(iFil)), FileColor(iFil)
                Else
                   Dest.Line (PlotX(iP - 1), DataLd(iFil).tDataY(iP - 1) + Offset(iFil))-(PlotX(iP), DataLd(iFil).tDataY(iP) + Offset(iFil)), FileColor(iFil)
                End If
            End If
         Next iP
         
       End If
       
    ' go to next file
    Next iFil

    'restore scaling parameters
    frmTerminal.PopConfig
    frmTerminal.Recalibrate
    frmTerminal.Xscale

    
    'draw data in accumulation slot
       For iP = 2 To frmTerminal.MaxPix
          If ((PlotX(iP - 1) - MinX) * (PlotX(iP - 1) - MaxX) < 0) Or ((PlotX(iP) - MinX) * (PlotX(iP) - MaxX) < 0) Then
          If Dest Is Printer Then
                     Dest.Line (PlotX(iP - 1), MaxY + MinY - DataLd(0).tDataY(iP - 1) - Offset(0))-(PlotX(iP), MaxY + MinY - DataLd(0).tDataY(iP) - Offset(0)), FileColor(0)
                Else
                    Dest.Line (PlotX(iP - 1), DataLd(0).tDataY(iP - 1) + Offset(0))-(PlotX(iP), DataLd(0).tDataY(iP) + Offset(0)), FileColor(0)
                End If
          End If
       Next iP

   End If
  
  
     ' plot axis, ticks, clip the data
     If PlotAxis Then
            
            'determine frame parameters
            StepX = frmTerminal.StepVal(MinX, MaxX)
            StepY = frmTerminal.StepVal(MinY, MaxY)
            StartX = (Int(MinX / StepX) + 1) * StepX
            StartY = (Int(MinY / StepY) + 1) * StepY
        
        ' Clear the mess outside the axis frame
          
                  
             TopRect.left = 0
             TopRect.Top = 0
             If Dest Is Printer Then
                 TopRect.Right = Dest.Width / Printer.TwipsPerPixelX / PScaleX
                 TopRect.Bottom = (Dest.Height / (frmRatio + 2)) / Printer.TwipsPerPixelY / PScaleY - 1
                 'Debug.Print TopRect.Top, TopRect.Bottom
             Else
                 TopRect.Right = Dest.Width / Screen.TwipsPerPixelX
                 TopRect.Bottom = Dest.Height / (frmRatio + 2) / Screen.TwipsPerPixelY - 1
                 
             End If
             
             BotRect.left = 0
             
             If Dest Is Printer Then
                 BotRect.Right = Dest.Width / Printer.TwipsPerPixelX / PScaleX
                 BotRect.Bottom = Dest.Height / Printer.TwipsPerPixelY / PScaleY
                 BotRect.Top = (Dest.Height / (frmRatio + 2)) * (frmRatio + 1) / Printer.TwipsPerPixelY / PScaleY
                 Debug.Print BotRect.Top, BotRect.Bottom
                           
             Else
                 BotRect.Right = Dest.Width / Screen.TwipsPerPixelX
                 BotRect.Bottom = Dest.Height / Screen.TwipsPerPixelY
                 BotRect.Top = (Dest.Height / (frmRatio + 2)) * (frmRatio + 1) / Screen.TwipsPerPixelY
                 
             End If
             
             LeftRect.left = 0
             LeftRect.Top = 0
             If Dest Is Printer Then
                 
                 LeftRect.Right = (Dest.Width / (frmRatio + 2)) / Printer.TwipsPerPixelX / PScaleX - 1
                 LeftRect.Bottom = Dest.Height / Printer.TwipsPerPixelY / PScaleY
                 'Debug.Print LeftRect.left, LeftRect.Right
                
             Else
                 LeftRect.Right = (Dest.Width / (frmRatio + 2)) / Screen.TwipsPerPixelX - 1
                 LeftRect.Bottom = Dest.Height / Screen.TwipsPerPixelY
             End If
             
             
             RightRect.Top = 0
             If Dest Is Printer Then
                 RightRect.left = (Dest.Width / (frmRatio + 2)) * (frmRatio + 1) / Printer.TwipsPerPixelX / PScaleX
                 RightRect.Right = Dest.Width / Printer.TwipsPerPixelX / PScaleX
                 RightRect.Bottom = Dest.Height / Printer.TwipsPerPixelY / PScaleY
                 'Debug.Print RightRect.left, RightRect.Right
                
             Else
                 RightRect.left = (Dest.Width / (frmRatio + 2)) * (frmRatio + 1) / Screen.TwipsPerPixelX
                 RightRect.Right = Dest.Width / Screen.TwipsPerPixelX
                 RightRect.Bottom = Dest.Height / Screen.TwipsPerPixelY
             End If
             
             BkColor = &HFFFFFF
             'BkColor = &HFFFF00
             hBr = CreateSolidBrush(BkColor)
            
             FillRect Dest.hdc, TopRect, hBr
             FillRect Dest.hdc, BotRect, hBr
             FillRect Dest.hdc, LeftRect, hBr
             FillRect Dest.hdc, RightRect, hBr
   
             DeleteObject hBr
         ' cleanup finished
         
         
         
         
         ' Draw Frame
         
             
                Dest.Line (MinX, MinY)-(MinX, MaxY)
                Dest.Line (MinX, MaxY)-(MaxX, MaxY)
                Dest.Line (MaxX, MaxY)-(MaxX, MinY)
                Dest.Line (MaxX, MinY)-(MinX, MinY)
             
         
         
            'If Dest Is Printer Then
            '  Printer.Font.Size = Round(Picture1.FontSize * Printer.TwipsPerPixelX / Screen.TwipsPerPixelX)
            'End If
        ' put X Axis tick marks and labels
            klbl = 1
            While klbl < 8
               If StartX < MaxX Then
                 lblX(klbl).Caption = Format(StartX, "#####.000")
                   If Dest Is Printer Then
                   
                    Dest.Line (StartX, MaxY)-(StartX, MaxY + (MaxY - MinY) / 100)
                   Else
                    Dest.Line (StartX, MinY)-(StartX, MinY - (MaxY - MinY) / 100)
                   End If
            '---------------------------Modified!!!!
            If Dest Is Printer Then
            
                    Dest.CurrentX = StartX - Len(lblX(klbl).Caption) * Dest.Font.Size / Dest.Width * Printer.TwipsPerPixelX * Printer.ScaleWidth * 3 / 2
                    '- StepX / 3
                    Dest.CurrentY = MaxY + (MaxY - MinY) / 100
            Else
                    Dest.CurrentX = StartX - Len(lblX(klbl).Caption) * Dest.Font.Size / Dest.Width * Screen.TwipsPerPixelX * (MaxX - MinX + 2 * Xoffset) / 2
                    Dest.CurrentY = MinY - (MaxY - MinY) / 100
            End If
            
                    
                    
                
                 Dest.Print lblX(klbl).Caption
                 
               End If
               StartX = StartX + StepX
               klbl = klbl + 1
            Wend

        'Debug.Print frmPrintPreview.FontSize
        'Debug.Print Printer.FontSize
        
        ' put Y axis tick marks and labels
            klbl = 1
            While klbl < 8
               If StartY < MaxY Then
                 lblY(klbl).Caption = Format(StartY, "#####.0")
                
                    
                    If Dest Is Printer Then
                      Dest.Line (MinX, MaxY + MinY - StartY)-(MinX - (MaxX - MinX) / 100, MaxY + MinY - StartY)
                      
                      Dest.CurrentX = MinX - Len(lblY(klbl).Caption) * Dest.Font.Size / Dest.Width * Printer.TwipsPerPixelX * Printer.ScaleWidth * 6
                      Dest.CurrentY = MaxY + MinY - StartY - Dest.Font.Size / Dest.Height * Printer.TwipsPerPixelY * Printer.ScaleHeight * 6
                      
                    Else
                      Dest.Line (MinX, StartY)-(MinX - (MaxX - MinX) / 100, StartY)
                      
                      Dest.CurrentX = MinX - Len(lblY(klbl).Caption) * Dest.Font.Size / Dest.Width * Screen.TwipsPerPixelX * (MaxX - MinX + 2 * Xoffset)
                      Dest.CurrentY = StartY + Dest.Font.Size / Dest.Height * Screen.TwipsPerPixelY * (MaxY - MinY + 2 * Yoffset)
                      '- Xoffset
                      Debug.Print Len(lblY(klbl).Caption), Dest.Font.Size, Screen.Width, Screen.TwipsPerPixelX
                
                    End If
                    
                    
              
                 Dest.Print lblY(klbl).Caption
               
               End If
               
              
               StartY = StartY + StepY
               klbl = klbl + 1
            Wend

       End If

  
  
   If Dest Is Printer Then
      
      Printer.EndDoc
   End If

End Sub

Private Sub cmdFont_Click()
   ' Set Cancel to True.
   CommonDialog1.CancelError = True
   On Error GoTo Errhandler
   
   CommonDialog1.FontName = Printer.Font.Name
   CommonDialog1.FontSize = Round(Printer.Font.Size / Printer.Width * Picture1.Width)
   CommonDialog1.FontBold = Printer.Font.Bold
   CommonDialog1.FontItalic = Printer.Font.Italic
   CommonDialog1.FontUnderline = Printer.Font.Underline
   CommonDialog1.FontStrikethru = Printer.FontStrikethru
   CommonDialog1.Color = Printer.ForeColor
   ' Set the Flags property.
   CommonDialog1.Flags = cdlCFBoth Or cdlCFEffects
   ' Display the Font dialog box.
   CommonDialog1.ShowFont
   ' Set text properties according to user's
   ' selections.

   Printer.Font.Name = CommonDialog1.FontName
   Printer.Font.Size = Round(CommonDialog1.FontSize * Printer.ScaleWidth / Picture1.Width)

   Printer.Font.Bold = CommonDialog1.FontBold
   Printer.Font.Italic = CommonDialog1.FontItalic
   Printer.Font.Underline = CommonDialog1.FontUnderline
   Printer.FontStrikethru = CommonDialog1.FontStrikethru
   Printer.ForeColor = CommonDialog1.Color
   Picture1.Cls
   Redraw Picture1
   Exit Sub
Errhandler:
   ' User pressed Cancel button.
   Exit Sub
End Sub


Private Sub GetPrinterFont(PictureObj As Object)
   PictureObj.Font.Name = Printer.Font.Name
   PictureObj.Font.Size = Round(Printer.Font.Size / Printer.ScaleWidth * Picture1.Width)
   PictureObj.Font.Bold = Printer.Font.Bold
   PictureObj.Font.Italic = Printer.Font.Italic
   PictureObj.Font.Underline = Printer.Font.Underline
   PictureObj.FontStrikethru = Printer.FontStrikethru
   PictureObj.ForeColor = Printer.ForeColor
  
End Sub



Private Sub Form_Load()
  frmPrintPreview.Height = frmPrintPreview.Width / Printer.ScaleWidth * Printer.Height
  Picture1.Height = Picture1.Width / Printer.Width * Printer.Height
  Redraw Picture1
  'Printer.FontSize = 12
            
End Sub


