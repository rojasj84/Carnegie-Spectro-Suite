VERSION 5.00
Object = "{F9043C88-F6F2-101A-A3C9-08002B2F49FB}#1.2#0"; "COMDLG32.OCX"
Object = "{6B7E6392-850A-101B-AFC0-4210102A8DA7}#1.3#0"; "comctl32.ocx"
Begin VB.Form frmGlue 
   Caption         =   "Long Spectrum (Glue)"
   ClientHeight    =   2745
   ClientLeft      =   60
   ClientTop       =   345
   ClientWidth     =   4470
   Icon            =   "frmGlue.frx":0000
   LinkTopic       =   "Form1"
   MaxButton       =   0   'False
   ScaleHeight     =   2745
   ScaleWidth      =   4470
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton cmdBrowse 
      Caption         =   "Browse..."
      Height          =   255
      Left            =   2160
      TabIndex        =   14
      Top             =   1200
      Width           =   855
   End
   Begin MSComDlg.CommonDialog CommonDialog1 
      Left            =   2520
      Top             =   600
      _ExtentX        =   847
      _ExtentY        =   847
      _Version        =   393216
   End
   Begin ComctlLib.StatusBar sbrGlue 
      Align           =   2  'Align Bottom
      Height          =   375
      Left            =   0
      TabIndex        =   11
      Top             =   2370
      Width           =   4470
      _ExtentX        =   7885
      _ExtentY        =   661
      SimpleText      =   ""
      _Version        =   327682
      BeginProperty Panels {0713E89E-850A-101B-AFC0-4210102A8DA7} 
         NumPanels       =   3
         BeginProperty Panel1 {0713E89F-850A-101B-AFC0-4210102A8DA7} 
            TextSave        =   ""
            Key             =   "Left"
            Object.Tag             =   ""
            Object.ToolTipText     =   "Left limit of the current spectrum"
         EndProperty
         BeginProperty Panel2 {0713E89F-850A-101B-AFC0-4210102A8DA7} 
            TextSave        =   ""
            Key             =   "Position"
            Object.Tag             =   ""
            Object.ToolTipText     =   "Current position of HR460"
         EndProperty
         BeginProperty Panel3 {0713E89F-850A-101B-AFC0-4210102A8DA7} 
            TextSave        =   ""
            Key             =   "Right"
            Object.Tag             =   ""
            Object.ToolTipText     =   "Right limit of the current spectrum"
         EndProperty
      EndProperty
   End
   Begin VB.TextBox txtFName 
      Height          =   285
      Left            =   120
      TabIndex        =   9
      Text            =   "untitled"
      Top             =   1200
      Width           =   1935
   End
   Begin VB.CommandButton btnCancel 
      Caption         =   "Cancel"
      Height          =   375
      Left            =   3120
      TabIndex        =   7
      Top             =   1320
      Width           =   855
   End
   Begin VB.CommandButton btnOk 
      Caption         =   "Go"
      Height          =   375
      Left            =   3240
      TabIndex        =   6
      Top             =   840
      Width           =   615
   End
   Begin VB.TextBox txtOverlap 
      Height          =   285
      Left            =   3120
      TabIndex        =   5
      Top             =   360
      Width           =   855
   End
   Begin VB.TextBox txtTo 
      Height          =   285
      Left            =   1680
      TabIndex        =   3
      Top             =   360
      Width           =   735
   End
   Begin VB.TextBox txtFrom 
      Height          =   285
      Left            =   120
      TabIndex        =   2
      Top             =   360
      Width           =   735
   End
   Begin VB.Label lblRight 
      Caption         =   "Right"
      Height          =   255
      Left            =   3360
      TabIndex        =   13
      Top             =   1920
      Width           =   735
   End
   Begin VB.Label lblLeft 
      Caption         =   "Left "
      Height          =   255
      Left            =   360
      TabIndex        =   12
      Top             =   1920
      Width           =   495
   End
   Begin VB.Label lblPos 
      Caption         =   "HR460 position"
      Height          =   255
      Left            =   1680
      TabIndex        =   10
      Top             =   1920
      Width           =   1095
   End
   Begin VB.Label lblFileName 
      Caption         =   "File Name"
      Height          =   255
      Left            =   120
      TabIndex        =   8
      Top             =   960
      Width           =   855
   End
   Begin VB.Label lblOverlap 
      Caption         =   "Overlap, pxl"
      Height          =   255
      Left            =   3120
      TabIndex        =   4
      Top             =   120
      Width           =   975
   End
   Begin VB.Label lblTo 
      Caption         =   "To, nm"
      Height          =   255
      Left            =   1800
      TabIndex        =   1
      Top             =   120
      Width           =   735
   End
   Begin VB.Label lblFrom 
      Caption         =   "From, nm"
      Height          =   255
      Left            =   120
      TabIndex        =   0
      Top             =   120
      Width           =   735
   End
End
Attribute VB_Name = "frmGlue"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Public GlFrom, GlTo As Single
Public GlOverlap As Long
Public FName As String
Public GlueOn, GlueStarted, GlueFinished As Boolean
Dim Wlefts(100), Wlengths(100), Wrights(100) As Double
Dim Intervals As Integer


Private Sub btnCancel_Click()
  GlueOn = False
  btnCancel.Enabled = False
   btnOk.Enabled = True
  While Not GlueFinished
    DoEvents
  Wend
  
  frmGlue.Hide
  
End Sub

Private Sub btnOk_Click()
   Dim dotpos
        If frmTerminal.CheckLoadFile(txtFName.Text) Then
            MsgBox ("File exists. Please, change filename" + Chr(10) + Chr(13) + " (do not use extension).")
            Exit Sub
        End If
        
        GlFrom = Val(txtFrom.Text)
        If GlFrom < 0 Then GlFrom = 0
        
         If frmTerminal.GratingSp = 1500 Then
         If GlFrom > 860 Then GlFrom = 860
        End If
        
        If frmTerminal.GratingSp = 300 Then
         If GlFrom > 860 * 6 Then GlFrom = 860 * 6
        End If
        
        txtFrom.Text = Format(GlFrom, "####.##0")
          
        GlTo = Val(txtTo.Text)
        If GlTo < 0 Then GlTo = 100
        If frmTerminal.GratingSp = 1500 Then
         If GlTo > 860 Then GlTo = 860
        End If
        
        If frmTerminal.GratingSp = 300 Then
         If GlTo > 860 * 6 Then GlTo = 860 * 6
        End If
        txtTo.Text = Format(GlTo, "####.##0")
         
         If GlTo < GlFrom Then Exit Sub
         
     
     
        GlOverlap = Val(txtOverlap.Text)
        If GlOverlap <= 0 Then GlOverlap = 1
        If GlOverlap >= frmTerminal.MaxPix Then GlOverlap = frmTerminal.MaxPix / 2
        txtOverlap.Text = Format(GlOverlap, "####")
        
       
                   
        dotpos = InStr(txtFName.Text, ".")
        
        If dotpos <> 0 Then
          FName = Left(txtFName.Text, Len(FName) - dotpos + 1)
        Else
         FName = txtFName.Text
        End If
         
        Intervals = 1
      
         txtFName.Text = FName + "." + Format(Intervals, "00#")
        
        If frmTerminal.CheckLoadFile(txtFName.Text) Then
            MsgBox ("File exists. Please, change filename" + Chr(10) + Chr(13) + " (do not use extension).")
            Exit Sub
        End If
        
        
        
        GlueOn = True
        btnCancel.Enabled = True
        btnOk.Enabled = False
      GlueFinished = False
      Wlengths(1) = frmTerminal.LcentPixel(GlFrom, GlOverlap)
      sbrGlue.Panels("Position").Text = Format(Wlengths(1), "####.000")
      

      ' Move HR460
      
      frmTerminal.posHR460.Text = Format(Wlengths(Intervals), "####.000")
      frmTerminal.mnuMoveHR460_Click
            
      ' get one spectrum
      
       frmTerminal.btnGo_Click
       
            
      ' Save-Load File
      
      frmTerminal.mnuFile1_Click (0) ' Close all files
      
      
      frmTerminal.mnuSaveFile_Click
      frmTerminal.mnuLoadFile_Click
      
      Wlefts(1) = frmTerminal.WlenPixel(Wlengths(1), 1)
      sbrGlue.Panels("Left").Text = Format(Wlefts(1), "####.000")
      
      Wrights(1) = frmTerminal.WlenPixel(Wlengths(1), frmTerminal.MaxPix)
      sbrGlue.Panels("Right").Text = Format(Wrights(1), "####.000")
      
       
           
    While (Wrights(Intervals) < GlTo) And (GlueOn)
          GlueStarted = True
        
        'frmTerminal.Delay (0.5)
        Intervals = Intervals + 1
      
        Wlengths(Intervals) = frmTerminal.LcentPixel(Wrights(Intervals - 1), GlOverlap)
      sbrGlue.Panels("Position").Text = Format(Wlengths(Intervals), "####.000")
      
      txtFName.Text = FName + "." + Format(Intervals, "00#")
      
      ' Move HR460
      frmTerminal.posHR460.Text = Format(Wlengths(Intervals), "####.000")
      frmTerminal.mnuMoveHR460_Click
      
      ' get one spectrum
      
       frmTerminal.btnGo_Click
      
      
      'Save-Load File
      
      frmTerminal.mnuSaveFile_Click
       frmTerminal.mnuLoadFile_Click
      
      
      Wlefts(Intervals) = frmTerminal.WlenPixel(Wlengths(Intervals), 1)
      sbrGlue.Panels("Left").Text = Format(Wlefts(Intervals), "####.000")
      
      Wrights(Intervals) = frmTerminal.WlenPixel(Wlengths(Intervals), frmTerminal.MaxPix)
      sbrGlue.Panels("Right").Text = Format(Wrights(Intervals), "####.000")
      
      
    Wend
      
      GlueOn = False
      GlueFinished = True
      GlueStarted = False
      btnCancel.Enabled = False
      btnOk.Enabled = True
      
End Sub

Private Sub cmdBrowse_Click()
 FName = txtFName.Text
    
  
    
       CommonDialog1.FileName = FName
      ' Set CancelError is True
      CommonDialog1.CancelError = True
      On Error GoTo Errhandler
      ' Set flags
      CommonDialog1.Flags = cdlOFNHideReadOnly + cdlOFNOverwritePrompt
      ' Set filters
      CommonDialog1.Filter = "All Files (*.*)|*.*|File group" & _
      "(*)|*"
      ' Specify default filter
      CommonDialog1.FilterIndex = 2
      ' Display the Open dialog box
   
      CommonDialog1.ShowSave
    ' Display name of selected file
      FName = CommonDialog1.FileName
      txtFName.Text = FName
      
    
  Exit Sub
      
Errhandler:
    'User pressed the Cancel button
    Exit Sub
End Sub

Private Sub Form_Load()

  
  GlOverlap = 1
  txtFrom.Text = Format(GlFrom, "####.##0")
  txtTo.Text = Format(GlTo, "####.##0")
  txtOverlap.Text = Format(GlOverlap, "###")
  
  txtFName.Text = FName
  Intervals = 1
  GlueOn = False
  GlueStarted = False
  GlueFinished = True
  btnCancel.Enabled = False
End Sub

Private Sub StatusBar1_PanelClick(ByVal Panel As ComctlLib.Panel)

End Sub


Private Sub txtFrom_KeyUp(KeyCode As Integer, Shift As Integer)
      
      If KeyCode = 13 Then
        GlFrom = Val(txtFrom.Text)
        txtFrom.Text = Format(GlFrom, "####.##0")
      End If
      
      
End Sub
Private Sub txtTo_KeyUp(KeyCode As Integer, Shift As Integer)
      
      If KeyCode = 13 Then
        GlTo = Val(txtTo.Text)
        txtTo.Text = Format(GlTo, "####.##0")
      End If
      
End Sub

Private Sub txtOverlap_KeyUp(KeyCode As Integer, Shift As Integer)
      
      If KeyCode = 13 Then
        GlOverlap = Val(txtOverlap.Text)
        If GlOverlap <= 0 Then GlOverlap = 1
        If GlOverlap >= frmTerminal.MaxPix Then GlOverlap = frmTerminal.MaxPix / 2
        txtOverlap.Text = Format(GlOverlap, "####")
      End If
      
End Sub
