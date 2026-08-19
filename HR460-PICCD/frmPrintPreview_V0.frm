VERSION 5.00
Begin VB.Form frmPrintPreview 
   Caption         =   "Print Preview"
   ClientHeight    =   6675
   ClientLeft      =   60
   ClientTop       =   345
   ClientWidth     =   8550
   LinkTopic       =   "Form1"
   ScaleHeight     =   6675
   ScaleWidth      =   8550
   StartUpPosition =   2  'CenterScreen
   Begin VB.PictureBox Picture1 
      Appearance      =   0  'Flat
      AutoRedraw      =   -1  'True
      AutoSize        =   -1  'True
      BackColor       =   &H8000000E&
      FillColor       =   &H008080FF&
      ForeColor       =   &H80000008&
      Height          =   5535
      Left            =   600
      ScaleHeight     =   5505
      ScaleMode       =   0  'User
      ScaleWidth      =   7425
      TabIndex        =   0
      Top             =   600
      Width           =   7455
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
       Dim hBr As Long
       Dim BkColor As Long
       
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
      


  If (Not IsEmpty(MaxY)) And (Not IsEmpty(MaxX)) Then
     If Abs(MaxY - MinY) < 0.03 Then
       MaxY = MaxY + 0.05
       MinY = MinY - 0.05
     End If
     If Abs(MaxX - MinX) < 0.03 Then
       MaxX = MaxX + 0.05
       MinX = MinX - 0.05
     End If

       FirstCursor = True
       
        Yoffset = (MaxY - MinY) / 8
 
        Xoffset = (MaxX - MinX) / 8
        
       
        Dest.Scale (MinX - Xoffset, MaxY + Yoffset)-(MaxX + Xoffset, MinY - Yoffset)
   
        
     



     frmTerminal.PushConfig
     For iFil = 1 To frmTerminal.FileIndex

       If frmTerminal.mnuFile1(iFil).Checked Then
       
        frmTerminal.SwapConfig (iFil)
        
        frmTerminal.Recalibrate
        frmTerminal.Xscale
         
         For iP = 2 To DataLd(iFil).tMaxPix
            If ((PlotX(iP - 1) - MinX) * (PlotX(iP - 1) - MaxX) < 0) Or ((PlotX(iP) - MinX) * (PlotX(iP) - MaxX) < 0) Then
              If Dest Is Printer Then
                   Dest.Line (PlotX(iP - 1), MaxY - DataLd(iFil).tDataY(iP - 1) - Offset(iFil))-(PlotX(iP), MaxY - DataLd(iFil).tDataY(iP) - Offset(iFil)), FileColor(iFil)
              Else
                 Dest.Line (PlotX(iP - 1), DataLd(iFil).tDataY(iP - 1) + Offset(iFil))-(PlotX(iP), DataLd(iFil).tDataY(iP) + Offset(iFil)), FileColor(iFil)
              End If
            End If
         Next iP
         
       End If
    Next iFil

    
    frmTerminal.PopConfig
    frmTerminal.Recalibrate
    frmTerminal.Xscale

    
       For iP = 2 To frmTerminal.MaxPix
          If ((PlotX(iP - 1) - MinX) * (PlotX(iP - 1) - MaxX) < 0) Or ((PlotX(iP) - MinX) * (PlotX(iP) - MaxX) < 0) Then
        If Dest Is Printer Then
                   Dest.Line (PlotX(iP - 1), MaxY - DataLd(0).tDataY(iP - 1) - Offset(0))-(PlotX(iP), MaxY - DataLd(0).tDataY(iP) - Offset(0)), FileColor(0)
              Else
                 Dest.Line (PlotX(iP - 1), DataLd(0).tDataY(iP - 1) + Offset(0))-(PlotX(iP), DataLd(0).tDataY(iP) + Offset(0)), FileColor(0)
              End If
        End If
       Next iP

   End If
  
  
     If PlotAxis Then
            
            StepX = frmTerminal.StepVal(MinX, MaxX)
            StepY = frmTerminal.StepVal(MinY, MaxY)
            StartX = (Int(MinX / StepX) + 1) * StepX
            StartY = (Int(MinY / StepY) + 1) * StepY
           
                Dest.Line (MinX, MinY)-(MinX, MaxY)
                Dest.Line (MinX, MaxY)-(MaxX, MaxY)
                Dest.Line (MaxX, MaxY)-(MaxX, MinY)
                Dest.Line (MaxX, MinY)-(MinX, MinY)
             
               
             TopRect.Left = 0
             TopRect.Top = 0
             If Dest Is Printer Then
                 TopRect.Right = Dest.Width / Printer.TwipsPerPixelX
                 TopRect.Bottom = (Dest.Height / 10) / Printer.TwipsPerPixelY - 1
             Else
                 TopRect.Right = Dest.Width / Screen.TwipsPerPixelX
                 TopRect.Bottom = Dest.Height / 10 / Screen.TwipsPerPixelY - 1
             End If
             
             BotRect.Left = 0
             
             If Dest Is Printer Then
                 BotRect.Right = Dest.Width / Printer.TwipsPerPixelX
                 BotRect.Bottom = Dest.Height / Printer.TwipsPerPixelY
                 BotRect.Top = (Dest.Height / 10) * 9 / Printer.TwipsPerPixelY - 1
                 Debug.Print Printer.ScaleTop
                 
             Else
                 BotRect.Right = Dest.Width / Screen.TwipsPerPixelX
                 BotRect.Bottom = Dest.Height / Screen.TwipsPerPixelY
                 BotRect.Top = (Dest.Height / 10) * 9 / Screen.TwipsPerPixelY
                 
             End If
             BkColor = &HFFFFFFFF
             hBr = CreateSolidBrush(BkColor)
             FillRect Dest.hdc, TopRect, hBr
             FillRect Dest.hdc, BotRect, hBr
             DeleteObject hBr
         
         
            If Dest Is Printer Then
              Printer.FontSize = 14
            End If
            
     
            klbl = 1
            While klbl < 8
               If StartX < MaxX Then
                 lblX(klbl).Caption = Format(StartX, "#####.000")
                 
                 If Dest Is Printer Then
                    Dest.Line (StartX, MaxY)-(StartX, MaxY + (MaxY - MinY) / 50)
                    Dest.CurrentX = StartX - StepX / 3
                    Dest.CurrentY = MaxY + (MaxY - MinY) / 50
                 Else
                    Dest.Line (StartX, MinY)-(StartX, MinY - (MaxY - MinY) / 50)
                    Dest.CurrentX = StartX - StepX / 3
                    Dest.CurrentY = MinY - (MaxY - MinY) / 50
                 End If
                 Dest.Print lblX(klbl).Caption
                 
               End If
               StartX = StartX + StepX
               klbl = klbl + 1
            Wend

             klbl = 1

            While klbl < 8
               If StartY < MaxY Then
                 lblY(klbl).Caption = Format(StartY, "#####.0")
                  
                 If Dest Is Printer Then
                    Dest.Line (MinX, MaxY - StartY)-(MinX - (MaxX - MinX) / 100, MaxY - StartY)
                    Dest.CurrentX = MinX - (MaxX - MinX) / 8
                    Dest.CurrentY = MaxY - StartY
                 Else
                    Dest.Line (MinX, StartY)-(MinX - (MaxX - MinX) / 100, StartY)
                    Dest.CurrentX = MinX - (MaxX - MinX) / 8
                    Dest.CurrentY = StartY
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

Private Sub Form_Load()
  frmPrintPreview.Height = frmPrintPreview.Width / Printer.Width * Printer.Height
  Picture1.Height = Picture1.Width / Printer.Width * Printer.Height
  Redraw Picture1
  
End Sub

