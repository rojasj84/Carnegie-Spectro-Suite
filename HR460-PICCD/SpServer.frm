VERSION 5.00
Object = "{F9043C88-F6F2-101A-A3C9-08002B2F49FB}#1.2#0"; "comdlg32.ocx"
Object = "{648A5603-2C6E-101B-82B6-000000000014}#1.1#0"; "MSCOMM32.OCX"
Object = "{6B7E6392-850A-101B-AFC0-4210102A8DA7}#1.3#0"; "comctl32.ocx"
Begin VB.Form frmTerminal 
   AutoRedraw      =   -1  'True
   BackColor       =   &H80000010&
   Caption         =   "HR460/WinSpec32"
   ClientHeight    =   8250
   ClientLeft      =   3960
   ClientTop       =   1815
   ClientWidth     =   10305
   ForeColor       =   &H00000000&
   Icon            =   "SpServer.frx":0000
   LinkMode        =   1  'Source
   LinkTopic       =   "Form1"
   ScaleHeight     =   8250
   ScaleWidth      =   10305
   Begin ComctlLib.Toolbar tbrToolBar 
      Align           =   1  'Align Top
      Height          =   390
      Left            =   0
      TabIndex        =   1
      Top             =   0
      Width           =   10305
      _ExtentX        =   18177
      _ExtentY        =   688
      ButtonWidth     =   609
      ButtonHeight    =   582
      ImageList       =   "ImageList1"
      _Version        =   327682
      BeginProperty Buttons {0713E452-850A-101B-AFC0-4210102A8DA7} 
         NumButtons      =   12
         BeginProperty Button1 {0713F354-850A-101B-AFC0-4210102A8DA7} 
            Object.Tag             =   ""
            Style           =   3
            MixedState      =   -1  'True
         EndProperty
         BeginProperty Button2 {0713F354-850A-101B-AFC0-4210102A8DA7} 
            Key             =   "OpenFile"
            Description     =   "Open  File..."
            Object.ToolTipText     =   "Open  File..."
            Object.Tag             =   ""
            ImageIndex      =   1
         EndProperty
         BeginProperty Button3 {0713F354-850A-101B-AFC0-4210102A8DA7} 
            Enabled         =   0   'False
            Key             =   "SaveFile"
            Description     =   "SaveFile"
            Object.ToolTipText     =   "Save File"
            Object.Tag             =   ""
            ImageIndex      =   2
         EndProperty
         BeginProperty Button4 {0713F354-850A-101B-AFC0-4210102A8DA7} 
            Object.Tag             =   ""
            Style           =   3
            MixedState      =   -1  'True
         EndProperty
         BeginProperty Button5 {0713F354-850A-101B-AFC0-4210102A8DA7} 
            Key             =   "Focus"
            Description     =   "Adjustment (Focus).."
            Object.ToolTipText     =   "Adjustment (Focus)..."
            Object.Tag             =   ""
            ImageIndex      =   3
         EndProperty
         BeginProperty Button6 {0713F354-850A-101B-AFC0-4210102A8DA7} 
            Key             =   "StopAccum"
            Description     =   "Stop Accumulation"
            Object.ToolTipText     =   "Stop Accumulation"
            Object.Tag             =   ""
            ImageIndex      =   4
         EndProperty
         BeginProperty Button7 {0713F354-850A-101B-AFC0-4210102A8DA7} 
            Object.Tag             =   ""
            Style           =   3
            MixedState      =   -1  'True
         EndProperty
         BeginProperty Button8 {0713F354-850A-101B-AFC0-4210102A8DA7} 
            Key             =   "Accu1"
            Description     =   "Start 1 Accumulation ..."
            Object.ToolTipText     =   "Start 1 Accumulation ..."
            Object.Tag             =   ""
            ImageIndex      =   5
         EndProperty
         BeginProperty Button9 {0713F354-850A-101B-AFC0-4210102A8DA7} 
            Object.Tag             =   ""
            Style           =   3
            MixedState      =   -1  'True
         EndProperty
         BeginProperty Button10 {0713F354-850A-101B-AFC0-4210102A8DA7} 
            Key             =   "AccuN"
            Description     =   "Start N Accumulations..."
            Object.ToolTipText     =   "Start N Accumulations ..."
            Object.Tag             =   ""
            ImageIndex      =   6
         EndProperty
         BeginProperty Button11 {0713F354-850A-101B-AFC0-4210102A8DA7} 
            Object.Tag             =   ""
            Style           =   3
            MixedState      =   -1  'True
         EndProperty
         BeginProperty Button12 {0713F354-850A-101B-AFC0-4210102A8DA7} 
            Key             =   "AutoXY"
            Description     =   "Autoscale X, Y"
            Object.ToolTipText     =   "Autoscale X, Y"
            Object.Tag             =   ""
            ImageIndex      =   7
         EndProperty
      EndProperty
      Begin VB.Frame Frame1 
         BorderStyle     =   0  'None
         Caption         =   "Frame1"
         Height          =   240
         Left            =   4000
         TabIndex        =   2
         Top             =   75
         Width           =   240
         Begin VB.Image imgConnected 
            Height          =   240
            Left            =   0
            Picture         =   "SpServer.frx":030A
            Stretch         =   -1  'True
            ToolTipText     =   "Toggles Port"
            Top             =   0
            Width           =   240
         End
         Begin VB.Image imgNotConnected 
            Height          =   240
            Left            =   0
            Picture         =   "SpServer.frx":0454
            Stretch         =   -1  'True
            ToolTipText     =   "Toggles Port"
            Top             =   0
            Width           =   240
         End
      End
   End
   Begin VB.TextBox txtTemp 
      Height          =   285
      Left            =   9600
      TabIndex        =   50
      Text            =   "300"
      Top             =   7080
      Width           =   735
   End
   Begin VB.ComboBox cmbLaser 
      Height          =   315
      Left            =   9360
      TabIndex        =   40
      Text            =   "Laser"
      Top             =   3720
      Width           =   975
   End
   Begin VB.TextBox txtTime 
      Height          =   285
      Left            =   9360
      TabIndex        =   38
      Top             =   720
      Width           =   855
   End
   Begin VB.CommandButton btnGoN 
      BackColor       =   &H00FFFF00&
      Caption         =   "Go N"
      Height          =   255
      Left            =   5280
      Style           =   1  'Graphical
      TabIndex        =   36
      Top             =   480
      Visible         =   0   'False
      Width           =   615
   End
   Begin VB.ComboBox cmbGrating 
      Height          =   315
      Left            =   9360
      TabIndex        =   21
      Text            =   "Grating"
      Top             =   2400
      Width           =   855
   End
   Begin MSComDlg.CommonDialog CommonDialog1 
      Left            =   3960
      Top             =   1200
      _ExtentX        =   847
      _ExtentY        =   847
      _Version        =   393216
   End
   Begin VB.ComboBox cmbXscale 
      Height          =   315
      Left            =   9360
      TabIndex        =   16
      Text            =   "nm"
      Top             =   3120
      Width           =   855
   End
   Begin VB.TextBox txtMaxX 
      Height          =   285
      Left            =   9360
      TabIndex        =   15
      Top             =   7560
      Width           =   735
   End
   Begin VB.TextBox txtMinX 
      Height          =   285
      Left            =   0
      TabIndex        =   14
      Top             =   5280
      Width           =   735
   End
   Begin VB.TextBox txtMaxY 
      Height          =   285
      Left            =   0
      TabIndex        =   13
      Top             =   480
      Width           =   735
   End
   Begin VB.TextBox txtMinY 
      Height          =   285
      Left            =   0
      TabIndex        =   12
      Top             =   4920
      Width           =   735
   End
   Begin VB.CommandButton btnFocus 
      BackColor       =   &H0000FFFF&
      Caption         =   "Focus"
      Height          =   255
      Left            =   3000
      Style           =   1  'Graphical
      TabIndex        =   11
      Top             =   480
      Visible         =   0   'False
      Width           =   615
   End
   Begin VB.CommandButton btnAutoXY 
      Caption         =   "AutoXY"
      Height          =   255
      Left            =   3720
      TabIndex        =   10
      Top             =   480
      Visible         =   0   'False
      Width           =   735
   End
   Begin VB.CommandButton btnStop 
      BackColor       =   &H000000FF&
      Caption         =   "STOP"
      Height          =   255
      Left            =   6000
      Style           =   1  'Graphical
      TabIndex        =   6
      Top             =   480
      Visible         =   0   'False
      Width           =   615
   End
   Begin VB.CommandButton btnGo 
      BackColor       =   &H00FFFFFF&
      Caption         =   "Go 1"
      Height          =   255
      Left            =   4560
      Style           =   1  'Graphical
      TabIndex        =   5
      Top             =   480
      UseMaskColor    =   -1  'True
      Visible         =   0   'False
      Width           =   615
   End
   Begin VB.CommandButton Command1 
      Caption         =   "CalibX"
      Height          =   375
      Left            =   4560
      TabIndex        =   4
      Top             =   0
      Width           =   735
   End
   Begin VB.TextBox txtSlit 
      Alignment       =   2  'Center
      Height          =   285
      Left            =   9360
      TabIndex        =   8
      Top             =   1920
      Width           =   855
   End
   Begin VB.TextBox posHR460 
      Alignment       =   2  'Center
      Height          =   285
      Left            =   9360
      TabIndex        =   7
      Top             =   1440
      Width           =   855
   End
   Begin VB.PictureBox Picture1 
      AutoRedraw      =   -1  'True
      AutoSize        =   -1  'True
      BackColor       =   &H80000015&
      ForeColor       =   &H80000014&
      Height          =   1935
      Left            =   1680
      MousePointer    =   2  'Cross
      ScaleHeight     =   1875
      ScaleMode       =   0  'User
      ScaleWidth      =   4755
      TabIndex        =   9
      Top             =   1920
      Width           =   4815
   End
   Begin ComctlLib.StatusBar sbrStatus 
      Align           =   2  'Align Bottom
      Height          =   315
      Left            =   0
      TabIndex        =   0
      Top             =   7935
      Width           =   10305
      _ExtentX        =   18177
      _ExtentY        =   556
      SimpleText      =   ""
      _Version        =   327682
      BeginProperty Panels {0713E89E-850A-101B-AFC0-4210102A8DA7} 
         NumPanels       =   3
         BeginProperty Panel1 {0713E89F-850A-101B-AFC0-4210102A8DA7} 
            AutoSize        =   2
            Text            =   "Status:"
            TextSave        =   "Status:"
            Key             =   "Status"
            Object.Tag             =   ""
            Object.ToolTipText     =   "Communications Port Status"
         EndProperty
         BeginProperty Panel2 {0713E89F-850A-101B-AFC0-4210102A8DA7} 
            AutoSize        =   1
            Object.Width           =   13840
            MinWidth        =   2
            Text            =   "Settings:"
            TextSave        =   "Settings:"
            Key             =   "Settings"
            Object.Tag             =   ""
            Object.ToolTipText     =   "Communications Port Settings"
         EndProperty
         BeginProperty Panel3 {0713E89F-850A-101B-AFC0-4210102A8DA7} 
            AutoSize        =   2
            Object.Width           =   1244
            MinWidth        =   1244
            Key             =   "ConnectTime"
            Object.Tag             =   ""
            Object.ToolTipText     =   "Connect Time"
         EndProperty
      EndProperty
   End
   Begin VB.Timer Timer2 
      Enabled         =   0   'False
      Interval        =   2000
      Left            =   5880
      Top             =   1320
   End
   Begin VB.TextBox txtTerm 
      Height          =   765
      Left            =   1200
      MultiLine       =   -1  'True
      ScrollBars      =   3  'Both
      TabIndex        =   3
      Top             =   480
      Width           =   1095
   End
   Begin VB.Timer Timer1 
      Enabled         =   0   'False
      Interval        =   1000
      Left            =   5280
      Top             =   1320
   End
   Begin MSCommLib.MSComm MSComm1 
      Left            =   2760
      Top             =   1200
      _ExtentX        =   1005
      _ExtentY        =   1005
      _Version        =   393216
      DTREnable       =   -1  'True
      NullDiscard     =   -1  'True
      RThreshold      =   1
      RTSEnable       =   -1  'True
      SThreshold      =   1
      InputMode       =   1
   End
   Begin MSComDlg.CommonDialog OpenLog 
      Left            =   3360
      Top             =   1200
      _ExtentX        =   847
      _ExtentY        =   847
      _Version        =   393216
      DefaultExt      =   "LOG"
      FileName        =   "Open Communications Log File"
      Filter          =   "Log File (*.log)|*.log;"
      FilterIndex     =   501
   End
   Begin VB.Label lblTemp 
      Appearance      =   0  'Flat
      BackColor       =   &H80000005&
      Caption         =   "T,K"
      ForeColor       =   &H80000008&
      Height          =   255
      Left            =   9360
      TabIndex        =   51
      Top             =   7080
      Width           =   255
   End
   Begin VB.Label lblPress 
      BackColor       =   &H80000009&
      Height          =   255
      Left            =   9360
      TabIndex        =   49
      Top             =   6600
      Width           =   975
   End
   Begin VB.Label lblCursor 
      BackColor       =   &H8000000D&
      Caption         =   "Cursor Pos."
      ForeColor       =   &H8000000E&
      Height          =   255
      Left            =   9360
      TabIndex        =   48
      Top             =   5640
      Width           =   855
   End
   Begin VB.Label lblCurPix 
      Caption         =   "Pxl:"
      Height          =   255
      Left            =   9360
      TabIndex        =   47
      Top             =   5880
      Width           =   975
   End
   Begin VB.Label lblCurX 
      Caption         =   "X: "
      Height          =   255
      Left            =   9360
      TabIndex        =   46
      Top             =   6120
      Width           =   975
   End
   Begin VB.Label lblCurY 
      Caption         =   "Y:"
      Height          =   255
      Left            =   9360
      TabIndex        =   45
      Top             =   6360
      Width           =   975
   End
   Begin VB.Label lblMsY 
      Caption         =   "Y:"
      Height          =   255
      Left            =   9360
      TabIndex        =   44
      Top             =   5040
      Width           =   1095
   End
   Begin VB.Label lblMsX 
      Caption         =   "X: "
      Height          =   255
      Left            =   9360
      TabIndex        =   43
      Top             =   4800
      Width           =   975
   End
   Begin VB.Label lblMsPix 
      Caption         =   "Pxl:"
      Height          =   255
      Left            =   9360
      TabIndex        =   42
      Top             =   4560
      Width           =   975
   End
   Begin VB.Label lblMouse 
      BackColor       =   &H80000002&
      Caption         =   "Mouse Pos."
      ForeColor       =   &H8000000E&
      Height          =   255
      Left            =   9360
      TabIndex        =   41
      Top             =   4320
      Width           =   855
   End
   Begin VB.Label lblLaser 
      BackColor       =   &H80000002&
      BorderStyle     =   1  'Fixed Single
      Caption         =   "Laser, nm"
      ForeColor       =   &H8000000E&
      Height          =   255
      Left            =   9360
      TabIndex        =   39
      Top             =   3480
      Width           =   855
   End
   Begin VB.Label lblTime 
      BackColor       =   &H80000002&
      Caption         =   "Acc. time"
      ForeColor       =   &H8000000E&
      Height          =   255
      Left            =   9360
      TabIndex        =   37
      Top             =   480
      Width           =   855
   End
   Begin VB.Label lblX7 
      AutoSize        =   -1  'True
      Height          =   195
      Left            =   6720
      TabIndex        =   35
      Top             =   4920
      Width           =   45
   End
   Begin VB.Label lblY7 
      AutoSize        =   -1  'True
      Height          =   195
      Left            =   120
      TabIndex        =   34
      Top             =   3600
      Width           =   45
   End
   Begin VB.Label lblY6 
      AutoSize        =   -1  'True
      Height          =   195
      Left            =   120
      TabIndex        =   33
      Top             =   3240
      Width           =   45
   End
   Begin VB.Label lblY5 
      AutoSize        =   -1  'True
      Height          =   195
      Left            =   120
      TabIndex        =   32
      Top             =   2880
      Width           =   45
   End
   Begin VB.Label lblY4 
      AutoSize        =   -1  'True
      Height          =   195
      Left            =   120
      TabIndex        =   31
      Top             =   2520
      Width           =   45
   End
   Begin VB.Label lblY3 
      AutoSize        =   -1  'True
      Height          =   195
      Left            =   120
      TabIndex        =   30
      Top             =   2160
      Width           =   45
   End
   Begin VB.Label lblY2 
      AutoSize        =   -1  'True
      Height          =   195
      Left            =   120
      TabIndex        =   29
      Top             =   1800
      Width           =   45
   End
   Begin VB.Label lblY1 
      AutoSize        =   -1  'True
      Height          =   195
      Left            =   120
      TabIndex        =   28
      Top             =   1440
      Width           =   45
   End
   Begin VB.Label lblX6 
      AutoSize        =   -1  'True
      Height          =   195
      Left            =   5880
      TabIndex        =   27
      Top             =   4920
      Width           =   45
   End
   Begin VB.Label lblX5 
      AutoSize        =   -1  'True
      Height          =   195
      Left            =   5040
      TabIndex        =   26
      Top             =   4920
      Width           =   45
   End
   Begin VB.Label lblX4 
      AutoSize        =   -1  'True
      Height          =   195
      Left            =   4200
      TabIndex        =   25
      Top             =   4920
      Width           =   45
   End
   Begin VB.Label lblX3 
      AutoSize        =   -1  'True
      Height          =   195
      Left            =   3360
      TabIndex        =   24
      Top             =   4920
      Width           =   45
   End
   Begin VB.Label lblX2 
      AutoSize        =   -1  'True
      Height          =   195
      Left            =   2520
      TabIndex        =   23
      Top             =   4920
      Width           =   45
   End
   Begin VB.Label lblX1 
      AutoSize        =   -1  'True
      Height          =   195
      Left            =   1680
      TabIndex        =   22
      Top             =   4920
      Width           =   45
   End
   Begin VB.Label lblXscale 
      BackColor       =   &H80000002&
      BorderStyle     =   1  'Fixed Single
      Caption         =   "Scaling"
      ForeColor       =   &H8000000E&
      Height          =   255
      Left            =   9360
      TabIndex        =   20
      Top             =   2880
      Width           =   855
   End
   Begin VB.Label lblGrating 
      BackColor       =   &H80000002&
      BorderStyle     =   1  'Fixed Single
      Caption         =   "Grating"
      ForeColor       =   &H8000000E&
      Height          =   255
      Left            =   9360
      TabIndex        =   19
      Top             =   2160
      Width           =   855
   End
   Begin VB.Label lblSlit 
      BackColor       =   &H80000002&
      BorderStyle     =   1  'Fixed Single
      Caption         =   "Slit, mkm"
      ForeColor       =   &H8000000E&
      Height          =   255
      Left            =   9360
      TabIndex        =   18
      Top             =   1680
      Width           =   855
   End
   Begin VB.Label lblPosHR460 
      BackColor       =   &H80000002&
      BorderStyle     =   1  'Fixed Single
      Caption         =   "Pos. nm"
      ForeColor       =   &H8000000E&
      Height          =   255
      Left            =   9360
      TabIndex        =   17
      Top             =   1200
      Width           =   855
   End
   Begin ComctlLib.ImageList ImageList1 
      Left            =   4560
      Top             =   1200
      _ExtentX        =   1005
      _ExtentY        =   1005
      BackColor       =   13625006
      ImageWidth      =   16
      ImageHeight     =   16
      MaskColor       =   12632256
      _Version        =   327682
      BeginProperty Images {0713E8C2-850A-101B-AFC0-4210102A8DA7} 
         NumListImages   =   7
         BeginProperty ListImage1 {0713E8C3-850A-101B-AFC0-4210102A8DA7} 
            Picture         =   "SpServer.frx":059E
            Key             =   ""
         EndProperty
         BeginProperty ListImage2 {0713E8C3-850A-101B-AFC0-4210102A8DA7} 
            Picture         =   "SpServer.frx":08B8
            Key             =   ""
         EndProperty
         BeginProperty ListImage3 {0713E8C3-850A-101B-AFC0-4210102A8DA7} 
            Picture         =   "SpServer.frx":0BD2
            Key             =   ""
         EndProperty
         BeginProperty ListImage4 {0713E8C3-850A-101B-AFC0-4210102A8DA7} 
            Picture         =   "SpServer.frx":0EEC
            Key             =   ""
         EndProperty
         BeginProperty ListImage5 {0713E8C3-850A-101B-AFC0-4210102A8DA7} 
            Picture         =   "SpServer.frx":1206
            Key             =   ""
         EndProperty
         BeginProperty ListImage6 {0713E8C3-850A-101B-AFC0-4210102A8DA7} 
            Picture         =   "SpServer.frx":1520
            Key             =   ""
         EndProperty
         BeginProperty ListImage7 {0713E8C3-850A-101B-AFC0-4210102A8DA7} 
            Picture         =   "SpServer.frx":183A
            Key             =   ""
         EndProperty
      EndProperty
   End
   Begin VB.Menu mnuFile 
      Caption         =   "&File"
      Begin VB.Menu mnuSaveFile 
         Caption         =   "&Save ASCII"
      End
      Begin VB.Menu mnuLoadFile 
         Caption         =   "&Open ASCII"
      End
      Begin VB.Menu barf 
         Caption         =   "-"
      End
      Begin VB.Menu mnuFile1 
         Caption         =   "&Close all files"
         Index           =   0
         Visible         =   0   'False
      End
      Begin VB.Menu mnuFile1 
         Caption         =   "File1"
         Index           =   1
         Visible         =   0   'False
      End
      Begin VB.Menu mnuFile1 
         Caption         =   "File2"
         Index           =   2
         Visible         =   0   'False
      End
      Begin VB.Menu mnuFile1 
         Caption         =   "File3"
         Index           =   3
         Visible         =   0   'False
      End
      Begin VB.Menu mnuFile1 
         Caption         =   "File4"
         Index           =   4
         Visible         =   0   'False
      End
      Begin VB.Menu mnuFile1 
         Caption         =   "File5"
         Index           =   5
         Visible         =   0   'False
      End
      Begin VB.Menu mnuFile1 
         Caption         =   "File6"
         Index           =   6
         Visible         =   0   'False
      End
      Begin VB.Menu mnuFile1 
         Caption         =   "File7"
         Index           =   7
         Visible         =   0   'False
      End
      Begin VB.Menu mnuFile1 
         Caption         =   "File8"
         Index           =   8
         Visible         =   0   'False
      End
      Begin VB.Menu mnuFile1 
         Caption         =   "File9"
         Index           =   9
         Visible         =   0   'False
      End
      Begin VB.Menu mnuFile1 
         Caption         =   "File10"
         Index           =   10
         Visible         =   0   'False
      End
      Begin VB.Menu bar1 
         Caption         =   "-"
      End
      Begin VB.Menu mnuSaveConfigAs 
         Caption         =   "Save Config As"
      End
      Begin VB.Menu mnuLoadConfig 
         Caption         =   "Read Config"
      End
      Begin VB.Menu Bar4 
         Caption         =   "-"
      End
      Begin VB.Menu mnuPrint 
         Caption         =   "&Print..."
      End
      Begin VB.Menu mnuPrintSetup 
         Caption         =   "Print &Setup..."
      End
      Begin VB.Menu mnuPrintPreview 
         Caption         =   "Print Pre&view"
      End
      Begin VB.Menu M3 
         Caption         =   "-"
         Visible         =   0   'False
      End
      Begin VB.Menu mnuSendText 
         Caption         =   "&Transmit Text File..."
         Enabled         =   0   'False
         Visible         =   0   'False
      End
      Begin VB.Menu Bar2 
         Caption         =   "-"
      End
      Begin VB.Menu mnuFileExit 
         Caption         =   "E&xit"
      End
   End
   Begin VB.Menu mnuView 
      Caption         =   "View"
      Begin VB.Menu mnuOffset 
         Caption         =   "Offset"
         Visible         =   0   'False
      End
      Begin VB.Menu mnuComScale 
         Caption         =   "Common Scale"
         Visible         =   0   'False
      End
      Begin VB.Menu vbar 
         Caption         =   "-"
         Visible         =   0   'False
      End
      Begin VB.Menu mnuBigCursor 
         Caption         =   "Large/Small Cursor"
      End
   End
   Begin VB.Menu mnuWinSpec 
      Caption         =   "&WinSpec"
      Begin VB.Menu mnuAdjust 
         Caption         =   "&Adjust (Focus)"
      End
      Begin VB.Menu mnuGetSpectrum 
         Caption         =   "&1 Accumulation"
      End
      Begin VB.Menu mnuGetNSpectra 
         Caption         =   "&N Accumulations"
      End
      Begin VB.Menu Bar5 
         Caption         =   "-"
      End
      Begin VB.Menu mnuTime 
         Caption         =   "Acc. &Time"
      End
      Begin VB.Menu mnuNAccum 
         Caption         =   "&Number of Acc."
      End
      Begin VB.Menu mnuRemCosm 
         Caption         =   "&Cosmic removal"
         Begin VB.Menu mnuThreshold 
            Caption         =   "Threshold Method"
         End
         Begin VB.Menu mnuMedian 
            Caption         =   "Median Method"
         End
         Begin VB.Menu mnuFilterOff 
            Caption         =   "Off"
         End
      End
      Begin VB.Menu mnuSimulation 
         Caption         =   "Simulation"
         Visible         =   0   'False
      End
   End
   Begin VB.Menu mnuCall 
      Caption         =   "H&R460"
      Begin VB.Menu mnuInit 
         Caption         =   "&Initialize"
      End
      Begin VB.Menu bar10 
         Caption         =   "-"
      End
      Begin VB.Menu mnuMoveHR460 
         Caption         =   "&Move"
      End
      Begin VB.Menu mnuSlit 
         Caption         =   "S&Lit"
      End
      Begin VB.Menu mnuGrating 
         Caption         =   "&Grating"
      End
      Begin VB.Menu mnuHangUp 
         Caption         =   "&Stop"
      End
      Begin VB.Menu bar7 
         Caption         =   "-"
         Visible         =   0   'False
      End
      Begin VB.Menu mnuReadMono1 
         Caption         =   "&ReadPosMono1"
         Enabled         =   0   'False
         Visible         =   0   'False
      End
      Begin VB.Menu mnuReadSlit0 
         Caption         =   "ReadPosSlit0"
         Enabled         =   0   'False
         Visible         =   0   'False
      End
      Begin VB.Menu mnuReadGrating 
         Caption         =   "ReadGrating"
         Enabled         =   0   'False
         Visible         =   0   'False
      End
      Begin VB.Menu Bar8 
         Caption         =   "-"
      End
      Begin VB.Menu mnuDial 
         Caption         =   "&Enter Command..."
      End
   End
   Begin VB.Menu mnuTools 
      Caption         =   "&Tools"
      Begin VB.Menu mnuToolGlue 
         Caption         =   "&Glue"
      End
      Begin VB.Menu mnuAutoCal 
         Caption         =   "&Auto Calibr."
         Enabled         =   0   'False
         Visible         =   0   'False
         Begin VB.Menu mnuAutoStepNM 
            Caption         =   "&Steps/Nm and Offset"
         End
         Begin VB.Menu mnuAutoDisp 
            Caption         =   "&Dispersion"
         End
      End
      Begin VB.Menu mnuToolNeon 
         Caption         =   "&Neon lines"
         Begin VB.Menu mnuToolNeonPositions 
            Caption         =   "&Positions"
         End
         Begin VB.Menu mnuToolNeonSpectrum 
            Caption         =   "&Spectrum"
         End
      End
      Begin VB.Menu mnuToolsPress 
         Caption         =   "&Pressure"
      End
      Begin VB.Menu mnuMatlab 
         Caption         =   "Matlab"
         Begin VB.Menu mnuTmeasure 
            Caption         =   "T measurements"
            Begin VB.Menu mnuStokesD 
               Caption         =   "Diamond Raman"
            End
            Begin VB.Menu mnuASFT 
               Caption         =   "Anti-Stokes Flourescence "
            End
            Begin VB.Menu mnuPyro 
               Caption         =   "Thermal Radiation"
            End
         End
         Begin VB.Menu mnuMatPlot 
            Caption         =   "Plot"
         End
      End
   End
   Begin VB.Menu mnuConfiguration 
      Caption         =   "&Configuration"
      Begin VB.Menu mnuLaser 
         Caption         =   "&Laser"
      End
      Begin VB.Menu mnuCCD 
         Caption         =   "&Calibration"
         Begin VB.Menu mnuScale 
            Caption         =   "&Offset"
         End
         Begin VB.Menu mnuFocLen 
            Caption         =   "&Focal Length"
         End
         Begin VB.Menu mnuStepsmm 
            Caption         =   "&Steps / Nm"
         End
      End
      Begin VB.Menu mnuSetGratings 
         Caption         =   "&Gratings"
         Begin VB.Menu mnuSetGrating1 
            Caption         =   "Grating&1"
         End
         Begin VB.Menu mnuSetGrating2 
            Caption         =   "Grating&2"
         End
      End
      Begin VB.Menu mnuPort 
         Caption         =   "Comm&Port"
         Begin VB.Menu mnuOpen 
            Caption         =   "Port &Open"
         End
         Begin VB.Menu MBar1 
            Caption         =   "-"
         End
         Begin VB.Menu mnuProperties 
            Caption         =   "Properties..."
         End
      End
      Begin VB.Menu mnuServer 
         Caption         =   "&TCP/IP"
         Enabled         =   0   'False
         Visible         =   0   'False
         Begin VB.Menu mnuServerActivate 
            Caption         =   "TCP &Server"
         End
         Begin VB.Menu mnuClientActivate 
            Caption         =   "TCP &Client"
         End
         Begin VB.Menu bar9 
            Caption         =   "-"
            Visible         =   0   'False
         End
         Begin VB.Menu mnuIPprop 
            Caption         =   "&Properties..."
            Visible         =   0   'False
         End
      End
   End
   Begin VB.Menu mnuHelp 
      Caption         =   "&Help"
      Begin VB.Menu mnubasicHelp 
         Caption         =   "&Help Topics"
      End
      Begin VB.Menu br1 
         Caption         =   "-"
      End
      Begin VB.Menu mnuAbout 
         Caption         =   "About WizSpec"
      End
   End
   Begin VB.Menu mnuMSComm 
      Caption         =   "&MSComm"
      Enabled         =   0   'False
      Visible         =   0   'False
      Begin VB.Menu mnuInputLen 
         Caption         =   "&InputLen..."
      End
      Begin VB.Menu mnuRThreshold 
         Caption         =   "&RThreshold..."
      End
      Begin VB.Menu mnuSThreshold 
         Caption         =   "&SThreshold..."
      End
      Begin VB.Menu mnuParRep 
         Caption         =   "P&arityReplace..."
      End
      Begin VB.Menu mnuDTREnable 
         Caption         =   "&DTREnable"
      End
      Begin VB.Menu Bar3 
         Caption         =   "-"
      End
      Begin VB.Menu mnuHCD 
         Caption         =   "&CDHolding..."
      End
      Begin VB.Menu mnuHCTS 
         Caption         =   "CTSH&olding..."
      End
      Begin VB.Menu mnuHDSR 
         Caption         =   "DSRHo&lding..."
      End
   End
End
Attribute VB_Name = "frmTerminal"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
'--------------------------------------------------
' SPServer - This is a demonstration program for the MSComm
' communications and Winspec32 ActiveX control.
'
' Copyright (c) 1998,
' by Viktor Struzhkin.
'
'--------------------------------------------------
Option Explicit

Public Slit, SlitMax, SlitMin, Wlen, Wlenmax, Wlenmin As Double
Public Lspectr, Ang, GratingSp, FocalSp, OMAEl, _
 Llaser, CorAng, LCenter, ExposureTime As Double
Public LlClick As Double
Public Accumulations, Accum As Integer
Public Pressure As Double
Public DrawingMode  As String
Public FormLoading, ExpRunning, SpFocus, MouseDown, MyDebug, ConnectLinux, xmgrActive As Boolean
Public SendingData, ErasePicture, PlotAxis, MultipleAccum, FirstFocus As Boolean
Public LoadFileError, ExactLimits    As Boolean
Public ReadConfigError As String
Public LoadingLogo, InitMode As Boolean

Public CalibChange, FirstCursor, BigCursor As Boolean
Public MyError, ExpFile, ConfigFile As String
Public MaxY, MinY, MaxX, MinX As Single
Public CurPix, MaxPix, MaxFile As Integer

Public StepX, StepY, StartX, StartY As Variant
Public FileIndex As Integer
Public FileLoaded As Boolean
Public SaveFileName As String
Public WinSp32On As Boolean

Public FilterMethod As FilterMethods

Public Threshold As Single

Public Enum OperationModes
   ClientM
   ServerM
   OfflineM
End Enum
Public OperationMode As OperationModes


Dim BinaryArray() As Byte

Public ConfigPushed As Boolean

Dim fLspectr(2), fAng(2), fGratingSp(2), fNMtoStep(2), fFocalSp(2), fOMAEl(2), _
 fLlaser(2), fCorAng(2), fLCenter(2), fSlit(2), fExposureTime(2), fAccumulations(2) As Double

Dim GlobalDataY(CCDXsize), DataY(CCDXsize), DataS(CCDXsize), DataZ(CCDXsize), DataNeon(CCDXsize), _
DataBuffer(CCDXsize) As Single



 Dim SendString, HR460File, GratingName, Action, Status As String

 Dim InputBuffer, InputString As String

 Dim Stepcount, Numstep, StepcountTo As Long

 Dim Wlento, NMtoStep, WlenMove, Wlensave  As Double

 Dim SlitTo, SlitMove, GratingTo, Grating1, Grating2 As Double

 Dim Counter, CounterTo, a180, Gr1200 As Double
 Dim Started As Boolean


 Dim Slaser, Scenter, Sgrating, Sang, Sfocus, Soma, Scorang, Snmtostep, Sspectr, Sslit, Sexp, Sacc As String

 Dim Fi0, Fi1, L1, Fi2, L2, Fi3, L3, Fi4, L4, Fi5, L5, _
 Fi6, L6, Fi7, L7, Fi8, L8, Fi9, L9 As Double


Dim Ret As Integer      ' Scratch integer.
Dim Temp As String      ' Scratch string.
Dim hLogFile As Integer ' Handle of open log file.
Dim StartTime As Date   ' Stores starting time for port timer

Dim frmTermW, frmTermH As Variant
Dim Xstart, Ystart, Xold, Yold As Single
Dim PicDMode As Variant
Dim SaveScale(3, 100) As Single
Dim ScaleNumber As Integer

Dim NNeon As Integer
Dim Npos(250), Nint(250)
Dim NeonFile As String
Dim MinNeon, MaxNeon As Double

Dim CrossSize
Public RubyTemp As Double

Dim Matlab As Object
Public WntoK As Double


Public Function Arcsin(ByVal x As Double) As Double

  If Abs(x) > 1 Then
    MyError = "Out of range value for Arcsin argument"
    Arcsin = 0
    Exit Function
  End If
   If Abs(x) = 1 Then
      If x > 0 Then Arcsin = Atn(1#) * 2
      If x < 0 Then Arcsin = -Atn(1#) * 2
   Else
     Arcsin = Atn(x / Sqr(-x * x + 1))
   End If
End Function



Public Function Arccos(ByVal x As Double) As Double
  If Abs(x) > 1 Then
    MyError = "Out of range value for Arcsin argument"
    Arccos = 0
    Exit Function
  End If
   If Abs(x) = 0 Then
     Arccos = Atn(1#) * 2
   Else
     Arccos = Atn(Sqr(-x * x + 1) / x)
   End If
End Function
Public Sub Delay(ByVal PauseTime As Variant)
Dim Start, Finish, TotalTime
   Start = Timer   ' Set start time.
    Do While Timer < Start + PauseTime
        DoEvents    ' Yield to other processes.
    Loop
End Sub
Public Function Median(ByVal x As Single, ByVal y As Single, ByVal Z As Single) As Single
   If x <= y Then
      If y <= Z Then
         Median = y
      Else
        If x <= Z Then
          Median = Z
        Else
          Median = x
        End If
       End If
    Else  'X > Y
      If Z <= y Then
         Median = y
       Else
         If Z >= x Then
            Median = x
          Else
            Median = Z
          End If
        End If
     End If
End Function
Public Function CheckLoadNeon(ByVal Lname As String) As Boolean

   Dim bf


       CheckLoadNeon = False

     On Error GoTo Errhandler
     Open Lname For Input As #1
       Input #1, bf
       If bf <> "Standard neon lamp lines" Then
          CheckLoadNeon = False
        Else
          CheckLoadNeon = True
        End If
Errhandler:
       Close #1
End Function
Public Sub LoadNeon(ByVal FN As String)
   Dim bufstr As String
     Open FN For Input As #1
       Input #1, bufstr
       NNeon = 0
       While (Not EOF(1)) And (NNeon < UBound(Npos))
         NNeon = NNeon + 1
         Input #1, Npos(NNeon), Nint(NNeon)
       
       Wend
       Close #1
End Sub
Public Sub NeonLines()
 Dim Ji, Ii
 Dim WW
 If CheckLoadNeon(NeonFile) Then
   LoadNeon (NeonFile)
 Else
   NNeon = 4
   Npos(1) = 692.95
   Nint(1) = 3000
   Npos(2) = 702.7
   Nint(2) = 300
   Npos(3) = 703.24
   Nint(3) = 6000
   Npos(4) = 717.38
   Nint(4) = 900
 End If

   WW = 0.025


   For Ji = 1 To MaxPix
       DataNeon(Ji) = 0
        For Ii = 1 To NNeon
           If (Npos(Ii) <= CalX(MaxPix)) And (Npos(Ii) >= CalX(1)) Then
             'DataNeon(Ji) = DataNeon(Ji) + Nint(Ii) * (WW ^ 2 / (WW ^ 2 + (CalX(Ji) - Npos(Ii)) ^ 2))
             DataNeon(Ji) = DataNeon(Ji) + Nint(Ii) * Exp(-((CalX(Ji) - Npos(Ii)) / WW) ^ 2)
           End If
         Next Ii
        If Ji = 1 Then
         MaxNeon = DataNeon(Ji)
         MinNeon = DataNeon(Ji)
        Else
         If DataNeon(Ji) > MaxNeon Then MaxNeon = DataNeon(Ji)
         If DataNeon(Ji) < MinNeon Then MinNeon = DataNeon(Ji)
        End If

    Next Ji
    If MinNeon = MaxNeon Then
      MaxNeon = MinNeon + 0.2
      MinNeon = MinNeon - 0.2
    End If

End Sub

Public Sub RubyLine(RInt As Double, RPos As Double, WW As Double)
 Dim Ji

   For Ji = 1 To MaxPix
        GlobalDataY(Ji) = GlobalDataY(Ji) + RInt * (WW ^ 2 / (WW ^ 2 + (CalX(Ji) - RPos) ^ 2))
   Next Ji
End Sub

Public Sub btnFocus_Click()
   Dim iP
  If SpFocus Or ExpRunning Then Exit Sub
      btnStop.Enabled = True
           SpFocus = True
           FirstFocus = True

           Xscale
           MaxMinX

         For iP = 1 To MaxPix
           DataS(iP) = 0
         Next iP

      While btnStop.Enabled = True


           btnGo_Click
           For iP = 1 To MaxPix
             If FirstFocus Then
              DataS(iP) = GlobalDataY(iP)
             Else
               If GlobalDataY(iP) > DataS(iP) Then
                  DataS(iP) = GlobalDataY(iP)
                End If
             End If

           Next iP


       Wend
    SpFocus = False
    FirstFocus = False


End Sub

Public Sub btnGoN_Click()
    Dim Ii
    Dim Dat0 As Variant
    Dim Threshold As Single
       If SpFocus Or ExpRunning Then Exit Sub

       mnuNAccum_Click
       MultipleAccum = True

        For Ii = 1 To MaxPix
             DataS(Ii) = 0
           Next Ii

       btnStop.Enabled = True
        Accum = 1

        While (Accum <= Accumulations) And (btnStop.Enabled = True)

          btnGo_Click
         'If Accum > 3 Then
         ' Threshold = 0
         ' For Ii = 2 To MaxPix
         '    Threshold = (Threshold * (Ii - 1) + Abs(GlobalDataY(Ii) - GlobalDataY(Ii - 1))) / Ii
         ' Next Ii
         ' Debug.Print Threshold
         'End If
           For Ii = 1 To MaxPix

            If mnuRemCosm.Checked = True Then


              If Accum > 1 Then
                  Select Case FilterMethod
                  
                      Case ThresholdM
                      
                          If Abs(GlobalDataY(Ii) - DataY(Ii)) / Threshold > 3 Then
                           GlobalDataY(Ii) = DataS(Ii)
                          End If
                          
                      Case MedianM
                          
                         If Accum = 3 Then
                           'Dat0 = 2 * DataS(Ii) - DataY(Ii)
                           DataS(Ii) = Median(Dat0, DataY(Ii), GlobalDataY(Ii))
                         End If
                         
                         If Accum > 3 Then
                              GlobalDataY(Ii) = Median(DataZ(Ii), DataY(Ii), GlobalDataY(Ii))
                         End If
                            
                      Case Else

                    End Select
                 
                 
               

               End If

            End If

             DataS(Ii) = (DataS(Ii) * (Accum - 1) + GlobalDataY(Ii)) / Accum

             If Accum > 2 Then
                DataZ(Ii) = DataY(Ii)
             End If

             DataY(Ii) = GlobalDataY(Ii)

           Next Ii

         Accum = Accum + 1

        Wend


        For Ii = 1 To MaxPix
             GlobalDataY(Ii) = DataS(Ii)
        Next Ii

        MultipleAccum = False
        sbrStatus.Panels("Settings").ToolTipText = "Communication Port Settings"

        btnAutoXY_Click
        Picture1_Redraw
End Sub

Public Sub btnStop_Click()
   btnStop.Enabled = False
   tbrToolBar.Buttons("StopAccum").Enabled = False
End Sub
Public Function MaxPresGlobY() As Double
    Dim MX, MiY, MaY
    Dim Ii As Integer
  If IsEmpty(MaxPix) Or IsEmpty(GlobalDataY) Then Exit Function

   For Ii = 1 To MaxPix
     If Ii = 1 Then
       MaY = GlobalDataY(1)
       MiY = MaY
       MX = CalX(1)

     End If
    If GlobalDataY(Ii) > MaY Then
      MaY = GlobalDataY(Ii)
      MX = CalX(Ii)
    End If
  Next Ii
    MaxPresGlobY = MX
End Function
Public Function MaxGlobDatY(ByVal N1 As Integer, ByVal N2 As Integer) As Integer
    Dim MaY
    Dim Ii, Nmax As Integer
  If IsEmpty(MaxPix) Or IsEmpty(GlobalDataY) Then Exit Function
  If N1 < 1 Then N1 = 1
  If N2 > MaxPix Then N2 = MaxPix

   For Ii = N1 To N2
     If Ii = N1 Then
       MaY = GlobalDataY(1)
       Nmax = N1
     End If

    If GlobalDataY(Ii) > MaY Then
      MaY = GlobalDataY(Ii)
      Nmax = Ii

    End If
  Next Ii
    MaxGlobDatY = Nmax
End Function
Private Sub MaxMinDatRec(DataLoad As WizSpecData)
    Dim Ii As Integer
  If IsEmpty(MaxPix) Or IsEmpty(DataLoad.tDataY) Then Exit Sub

With DataLoad
   For Ii = 1 To .tMaxPix

    If .tDataY(Ii) > MaxY Then
      MaxY = .tDataY(Ii)
    End If
    If .tDataY(Ii) < MinY Then
      MinY = .tDataY(Ii)
    End If

    If PlotX(Ii) > MaxX Then
      MaxX = PlotX(Ii)
    End If
    If PlotX(Ii) < MinX Then
      MinX = PlotX(Ii)
    End If
  Next Ii
End With
End Sub
Public Sub MaxMinX()
    Dim Ii As Integer
  If IsEmpty(MaxPix) Or IsEmpty(PlotX) Then Exit Sub

   For Ii = 1 To MaxPix

    If Ii = 1 Then
       MinX = PlotX(1)
       MaxX = PlotX(1)
     End If

    If PlotX(Ii) > MaxX Then
      MaxX = PlotX(Ii)
    End If
    If PlotX(Ii) < MinX Then
      MinX = PlotX(Ii)
    End If
  Next Ii
End Sub




Private Sub btnAutoXY_Click()

  Dim Ii As Integer
  Dim iFil As Integer
  Dim SaveMaxPix As Integer


  If IsEmpty(MaxPix) Or IsEmpty(GlobalDataY) Then Exit Sub

   For Ii = 1 To MaxPix
     If Ii = 1 Then
       MaxY = GlobalDataY(1)
       MinY = MaxY
       MinX = PlotX(1)
       MaxX = PlotX(1)
     End If

    If GlobalDataY(Ii) > MaxY Then
      MaxY = GlobalDataY(Ii)
    End If
    If GlobalDataY(Ii) < MinY Then
      MinY = GlobalDataY(Ii)
    End If

     If MultipleAccum Then
       If Accum > 1 Then
         If DataS(Ii) > MaxY Then
            MaxY = DataS(Ii)
         End If
         If DataS(Ii) < MinY Then
           MinY = DataS(Ii)
         End If
       End If
     End If


    If PlotX(Ii) > MaxX Then
      MaxX = PlotX(Ii)
    End If
    If PlotX(Ii) < MinX Then
      MinX = PlotX(Ii)
    End If
   Next Ii

 'SaveMaxPix = MaxPix
 'SaveConfig (ConfigFile)
  PushConfig
    For iFil = 1 To FileIndex

       If mnuFile1(iFil).Checked Then
        'LoadFile (iFil)
        SwapConfig (iFil)
        Recalibrate
        Xscale
        MaxMinDatRec DataLd(iFil)
       End If
    Next iFil
    
    'MaxPix = SaveMaxPix
    'ReadConfig (ConfigFile)
    PopConfig
    
    Recalibrate
    Xscale


    If mnuToolNeonSpectrum.Checked Then
    NeonLines
      For Ii = 1 To MaxPix
           DataNeon(Ii) = MinY + (MaxY - MinY) / (MaxNeon - MinNeon) * (DataNeon(Ii) - MinNeon)
      Next Ii
    End If


  Picture1_Redraw
  Cursor1 (CurPix)
    ScaleNumber = 0
       SaveScale(0, ScaleNumber) = MinX
       SaveScale(1, ScaleNumber) = MaxX
       SaveScale(2, ScaleNumber) = MinY
       SaveScale(3, ScaleNumber) = MaxY

End Sub

Private Sub cmbLaser_KeyUp(KeyCode As Integer, Shift As Integer)
Dim Llto, Llsave As Single

On Error GoTo Errhandler

   Llsave = LlClick

      If KeyCode = 13 Then
        Picture1.SetFocus
        Llto = Val(cmbLaser.Text)
        LlClick = Llto
        mnuLaser_Click
      End If
    Exit Sub

Errhandler:
  LlClick = Llsave
  cmbLaser.Text = Format(Llaser, "####.#00")
End Sub

Private Sub cmbLaser_Click()

 On Error GoTo Errhandler


   Picture1.SetFocus

   If Llaser = Val(cmbLaser.Text) Then Exit Sub


     If cmbLaser.Text = "Argon" Then
            cmbLaser.ListIndex = 2
       End If
     If cmbLaser.Text = "Krypton" Then
            cmbLaser.ListIndex = 17
       End If
     If cmbLaser.Text = "He-Ne" Then
            cmbLaser.ListIndex = 26
      End If
     If cmbLaser.Text = "He-Cd" Then
            cmbLaser.ListIndex = 28
      End If
     If cmbLaser.Text = "Nd-YAG" Then
            cmbLaser.ListIndex = 30
      End If
      If cmbLaser.Text = "User" Then
            cmbLaser.ListIndex = 35
      End If


     Llaser = Val(cmbLaser.Text)
     If Llaser = 0 Then
       Llaser = LlClick
       GoTo Errhandler
     End If
     LlClick = Llaser
       Picture1.SetFocus
     SaveConfig (ConfigFile)
     Recalibrate
     cmbXscale_Click


    Exit Sub

Errhandler:
  LlClick = Llaser

  cmbLaser.Text = Format(Llaser, "####.#00")
  cmbLaser.RemoveItem (35)
  cmbLaser.AddItem Format(Llaser, "####.#00")
   cmbLaser.ListIndex = 35
  Picture1.SetFocus

End Sub

Private Sub cmbGrating_Click()
   If GratingSp = Val(cmbGrating.Text) Then Exit Sub

      mnuGrating_Click

End Sub

Private Sub cmbGrating_KeyUp(KeyCode As Integer, Shift As Integer)
  cmbGrating.Text = Format(GratingSp, "####")
End Sub

Private Sub cmbXscale_Click()

    Dim Ii

    DrawingMode = cmbXscale.Text
    For Ii = 1 To MaxPix
     PlotX(Ii) = CalX(Ii)

         If DrawingMode = "pixel" Then
           PlotX(Ii) = Ii

        End If

        If DrawingMode = "rel cm-1" Then
           PlotX(Ii) = (1 / Llaser - 1 / CalX(Ii)) * 10000000#

        End If

        If DrawingMode = "cm-1" Then
           PlotX(Ii) = 1 / CalX(Ii) * 10000000#

        End If
        If DrawingMode = "meV" Then
           PlotX(Ii) = 1239.75 / CalX(Ii) * 1000#

        End If
        If DrawingMode = "rel meV" Then
           PlotX(Ii) = 1239.75 * (1 / Llaser - 1 / CalX(Ii)) * 1000#

        End If
    Next Ii
    If (Not CalibChange) And (Not SpFocus) Then
        btnAutoXY_Click
    End If
     If SpFocus And FirstFocus Then MaxMinX
    Picture1_Redraw

End Sub

Public Sub Xscale()

    Dim Ii

    DrawingMode = cmbXscale.Text
    For Ii = 1 To MaxPix
     PlotX(Ii) = CalX(Ii)

         If DrawingMode = "pixel" Then
           PlotX(Ii) = Ii

        End If

        If DrawingMode = "rel cm-1" Then
           PlotX(Ii) = (1 / Llaser - 1 / CalX(Ii)) * 10000000#

        End If

        If DrawingMode = "cm-1" Then
           PlotX(Ii) = 1 / CalX(Ii) * 10000000#

        End If
        If DrawingMode = "meV" Then
           PlotX(Ii) = 1239.7 / CalX(Ii) * 1000#

        End If
        If DrawingMode = "rel meV" Then
           PlotX(Ii) = 1239.7 * (1 / Llaser - 1 / CalX(Ii)) * 1000#

        End If
    Next Ii

End Sub

Private Function InitProg() As String


Dim Sres                As String
Dim RegistryAgent           As clsRegistryAgent

Set RegistryAgent = New clsRegistryAgent

  InitProg = ""

' Set the class properties using the contents
' of the text boxes.

  RegistryAgent.RegistryKey = "\Software\Princeton Instruments\WinSpec/32\HR460"
  RegistryAgent.SubKey = "Registration"


  RegistryAgent.GetValue

  InitProg = RegistryAgent.KeyValue



End Function


Private Sub RegisterSp(ByVal KeyVal As String)


Dim Sres                As String
Dim RegistryAgent           As clsRegistryAgent

Set RegistryAgent = New clsRegistryAgent



' Set the class properties using the contents
' of the text boxes.

  RegistryAgent.RegistryKey = "\Software\Princeton Instruments\WinSpec/32\HR460"
  RegistryAgent.SubKey = "Registration"

  RegistryAgent.CreateKey
  RegistryAgent.KeyValue = KeyVal
  RegistryAgent.SetValue






End Sub




Private Sub Form_Load()
    Dim CommPort As String, Handshaking As String, Settings As String
    Dim Ji, Ii As Integer
    Dim SInit As String
    Dim CurDate, ExpDate As Date
    Dim DummyExp As String
    Dim ShowTime, StartTime
    On Error Resume Next




    FormLoading = True




    ' Check registry key
    'ExpDate = #1/15/1999#
    'SInit = InitProg
    'SInit = Left(SInit, Len(SInit) - 2)

    'If SInit <> "0111-204-19376" Then
     ' CurDate = Date
     '   MsgBox ("Trial version of the software." & Chr(13) + Chr(10) & "Expires on " & ExpDate)
     '   If ExpDate < CurDate Then

      '         RegisterSp (InputBox$("", "Registartion Number"))
       '        SInit = InitProg
       '        SInit = Left(SInit, Len(SInit) - 2)
       '       If SInit <> "0011-234-19875" Then
       '           MsgBox ("Wrong registartion number. ")
       '           End
       '       End If
       ' End If

    'End If


    If Err Then Err = False
    ' Set the default color for the terminal
    txtTerm.SelLength = Len(txtTerm)
    txtTerm.SelText = ""
    txtTerm.ForeColor = vbBlue

      ' Set Title
    App.Title = "HR460/WinSpec32"


     Load frmLogo
     frmLogo.Move (Screen.Width - frmLogo.Width) / 2, (Screen.Height - frmLogo.Height) / 3
     frmLogo.Show
     LoadingLogo = True




    ' Set up status indicator light
    imgNotConnected.ZOrder

    frmTermW = frmTerminal.ScaleWidth
    frmTermH = frmTerminal.ScaleHeight

     frmTerminal.Width = Screen.Width - 500
     frmTerminal.Height = Screen.Height * 3 / 4


    ' Center Form
    frmTerminal.Move 40, (Screen.Height - Height) / 2

    ' Load Registry Settings

    Settings = GetSetting(App.Title, "Properties", "Settings", "") ' frmTerminal.MSComm1.Settings]\
    If Settings <> "" Then
        MSComm1.Settings = Settings
        If Err Then
            MsgBox Error$, 48
            Exit Sub
        End If
    End If

    CommPort = GetSetting(App.Title, "Properties", "CommPort", "") ' frmTerminal.MSComm1.CommPort
    If CommPort <> "" Then MSComm1.CommPort = CommPort

    Handshaking = GetSetting(App.Title, "Properties", "Handshaking", "") 'frmTerminal.MSComm1.Handshaking
    If Handshaking <> "" Then
        MSComm1.Handshaking = Handshaking
        If Err Then
            MsgBox Error$, 48
            Exit Sub
        End If
    End If

    Echo = GetSetting(App.Title, "Properties", "Echo", "") ' Echo
    On Error GoTo 0

    '------ Set filenames
    'ExpFile = "C:\WinSpec\q.spe"
    ExpFile = App.Path + "\q.spe"
    HR460File = App.Path + "\hr460.par"
    ConfigFile = App.Path + "\Wsp-460.cfg"
    'ConfigFile = "D:\WinSp32.Mac\HR460\Ver 1.00\Wsp-460.cfg"

    '-----Set WinSpec32 Controls and Flags
    ExpRunning = False
    btnStop.Enabled = False
    tbrToolBar.Buttons("StopAccum").Enabled = False
    
    ConfigPushed = False
    MaxPix = 1340
     
    CurPix = 1
    FirstCursor = True
    BigCursor = False

    For Ji = 1 To MaxPix
      GlobalDataY(Ji) = 0
    Next Ji
    MaxFile = 10

    For Ji = 0 To NumLoadFiles
      FileColor(Ji) = QBColor(NumLoadFiles - Ji)
      Offset(Ji) = 0
    Next Ji
    FileColor(0) = QBColor(0)


    '------- Initialize HR460 COM: port, and HR460 settings when the program is started
      Gr1200 = 1200
     
      
      ' Do not change the order of the next two operations!
      OperationMode = OfflineM
      mnuInit_Click

      txtTime = Format(ExposureTime, "###0.00")

    '----read Spectrometer parameters from the file

       MyDebug = False




       '------ Activate TCP/IP Server
          'Load frmTCPIP
          
          SendingData = False


       '---- initializing variables for Configuration File
       '----- Loading Info Form
       Load frmInfo
       'frmInfo.Top = frmTerminal.Top + frmTerminal.Height
       frmInfo.Move frmTerminal.Width - frmInfo.Width, frmTerminal.Top + frmTerminal.Height
       frmInfo.Show
       '---- Drawing modes

       cmbXscale.AddItem "nm"
       cmbXscale.AddItem "pixel"
       cmbXscale.AddItem "rel cm-1"
       cmbXscale.AddItem "cm-1"
       cmbXscale.AddItem "meV"
       cmbXscale.AddItem "rel meV"

       'cmbGrating.AddItem "1500"
       'cmbGrating.AddItem "300"

       cmbLaser.AddItem "Argon"
       cmbLaser.AddItem "528.689"
       cmbLaser.AddItem "514.532"
       cmbLaser.AddItem "501.716"
       cmbLaser.AddItem "496.507"
       cmbLaser.AddItem "487.987"
       cmbLaser.AddItem "476.486"
       cmbLaser.AddItem "472.686"
       cmbLaser.AddItem "465.794"
       cmbLaser.AddItem "457.935"
       cmbLaser.AddItem "454.505"
       cmbLaser.AddItem "Krypton"
       cmbLaser.AddItem "799.322"
       cmbLaser.AddItem "793.141"
       cmbLaser.AddItem "752.548"
       cmbLaser.AddItem "676.361"
       cmbLaser.AddItem "676.443"
       cmbLaser.AddItem "647.089"
       cmbLaser.AddItem "568.189"
       cmbLaser.AddItem "530.866"
       cmbLaser.AddItem "520.832"
       cmbLaser.AddItem "482.518"
       cmbLaser.AddItem "476.243"
       cmbLaser.AddItem "415.446"
       cmbLaser.AddItem "406.737"
       cmbLaser.AddItem "He-Ne"
       cmbLaser.AddItem "632.817"
       cmbLaser.AddItem "He-Cd"
       cmbLaser.AddItem "443"
       cmbLaser.AddItem "Nd-YAG"
       cmbLaser.AddItem "1064.2"
       cmbLaser.AddItem "532.1"
       cmbLaser.AddItem "354.73"
       cmbLaser.AddItem "266.05"
       cmbLaser.AddItem "User"
       cmbLaser.Text = Format(Llaser, "####.##0")
       cmbLaser.AddItem cmbLaser.Text
       LlClick = Llaser


       FileIndex = 0
       FileLoaded = False
       ErasePicture = True
       PlotAxis = True
       CalibChange = False
       SpFocus = False
       PicDMode = Picture1.DrawMode
       SaveFileName = ""
       FormLoading = False

       NeonFile = App.Path + "\Neon.lin"

      frmGlue.GlFrom = frmTerminal.Wlen
      frmGlue.GlTo = frmTerminal.Wlen
      frmGlue.FName = "Untitled"
      FilterMethod = MedianM
      mnuMedian.Checked = True
      Threshold = 20
      frmLogo.Hide
      WinSp32On = True
      WntoK = 1.438769
   End Sub

Private Sub Form_Resize()
   ' Resize the Term (display) control
   'txtTerm.Move 0, tbrToolBar.Height, frmTerminal.ScaleWidth, frmTerminal.ScaleHeight - sbrStatus.Height - tbrToolBar.Height
   ' Resize Picture Box and Redraw
   Picture1.Move txtMinY.Width, tbrToolBar.Height, frmTerminal.ScaleWidth - posHR460.Width - cmbGrating.Width, frmTerminal.ScaleHeight - 2 * sbrStatus.Height - tbrToolBar.Height

   Picture1_Redraw



   'Reposition Text Boxes, Buttons

    txtTime.Left = frmTerminal.ScaleWidth - frmTermW + txtTime.Left
   lblTime.Left = frmTerminal.ScaleWidth - frmTermW + lblTime.Left

   posHR460.Left = frmTerminal.ScaleWidth - frmTermW + posHR460.Left
   lblPosHR460.Left = frmTerminal.ScaleWidth - frmTermW + lblPosHR460.Left

   txtSlit.Left = frmTerminal.ScaleWidth - frmTermW + txtSlit.Left
   lblSlit.Left = frmTerminal.ScaleWidth - frmTermW + lblSlit.Left


   lblGrating.Left = frmTerminal.ScaleWidth - frmTermW + lblGrating.Left
   cmbGrating.Left = frmTerminal.ScaleWidth - frmTermW + cmbGrating.Left

   Command1.Left = frmTerminal.ScaleWidth - frmTermW + Command1.Left
   btnGo.Left = frmTerminal.ScaleWidth - frmTermW + btnGo.Left
   btnGoN.Left = frmTerminal.ScaleWidth - frmTermW + btnGoN.Left
   btnStop.Left = frmTerminal.ScaleWidth - frmTermW + btnStop.Left
   btnAutoXY.Left = frmTerminal.ScaleWidth - frmTermW + btnAutoXY.Left
   btnFocus.Left = frmTerminal.ScaleWidth - frmTermW + btnFocus.Left

   cmbXscale.Left = frmTerminal.ScaleWidth - frmTermW + cmbXscale.Left
   lblXscale.Left = frmTerminal.ScaleWidth - frmTermW + lblXscale.Left

   cmbLaser.Left = frmTerminal.ScaleWidth - frmTermW + cmbLaser.Left
   lblLaser.Left = frmTerminal.ScaleWidth - frmTermW + lblLaser.Left
   'txtMinX.Left = frmTerminal.Left - txtMinX.Left / 2
   
   lblMouse.Left = frmTerminal.ScaleWidth - frmTermW + lblMouse.Left
   lblMsPix.Left = frmTerminal.ScaleWidth - frmTermW + lblMsPix.Left
   lblMsX.Left = frmTerminal.ScaleWidth - frmTermW + lblMsX.Left
   lblMsY.Left = frmTerminal.ScaleWidth - frmTermW + lblMsY.Left
  
   lblCursor.Left = frmTerminal.ScaleWidth - frmTermW + lblCursor.Left
   lblCurPix.Left = frmTerminal.ScaleWidth - frmTermW + lblCurPix.Left
   lblCurX.Left = frmTerminal.ScaleWidth - frmTermW + lblCurX.Left
   lblCurY.Left = frmTerminal.ScaleWidth - frmTermW + lblCurY.Left
   lblPress.Left = frmTerminal.ScaleWidth - frmTermW + lblPress.Left
   lblTemp.Left = frmTerminal.ScaleWidth - frmTermW + lblTemp.Left
   txtTemp.Left = frmTerminal.ScaleWidth - frmTermW + txtTemp.Left
    
   txtMaxX.Left = frmTerminal.ScaleWidth - frmTermW + txtMaxX.Left

   txtMinX.Top = frmTerminal.ScaleHeight - 2 * sbrStatus.Height
   txtMaxX.Top = frmTerminal.ScaleHeight - 2 * sbrStatus.Height
   txtMinY.Top = frmTerminal.ScaleHeight - 3 * sbrStatus.Height
   txtMaxY.Top = tbrToolBar.Height

  lblX1.Top = frmTerminal.ScaleHeight - 2 * sbrStatus.Height
  lblX2.Top = lblX1.Top
  lblX3.Top = lblX1.Top
  lblX4.Top = lblX1.Top
  lblX5.Top = lblX1.Top
  lblX6.Top = lblX1.Top
  lblX7.Top = lblX1.Top
   frmTermW = frmTerminal.ScaleWidth
   frmTermH = frmTerminal.ScaleHeight



   ' Position the status indicator light
   Frame1.Left = ScaleWidth - Frame1.Width * 1.5

  If (LoadingLogo) And frmLogo.Visible Then frmLogo.SetFocus
End Sub


Private Sub mnuAbout_Click()
   Load frmLogo
     frmLogo.Move (Screen.Width - frmLogo.Width) / 2, (Screen.Height - frmLogo.Height) / 3
     frmLogo.Show
End Sub

Private Sub mnuAdjust_Click()
   Picture1.SetFocus
   btnFocus_Click
End Sub








Private Sub mnuAutoStepNM_Click()
  Dim Msg, Style, Title, Help, Ctxt, Response
  Dim Ii, I1max, I2max, StperNM, Lc, Offs, Lmax1, Lmin1, Lmax2, Lmin2 As Double
  Dim ReldStep, st As Single
  Dim Wlimits As Integer


   Wlimits = 400
       On Error GoTo Errhandler
        Msg = "Please make sure you have reasonable neon lamp signal at 585 nm and 724 nm, and stand by.  Continue? "   ' Define message.
        Style = vbYesNo + vbCritical + vbDefaultButton2 ' Define buttons.
        Title = "Automatic Calibration / Offset"  ' Define title.
         Help = "DEMO.HLP"   ' Define Help file.
         Ctxt = 1000 ' Define topic context.
         ' Display message.

        If Not frmTCPIP.Connected Then Response = MsgBox(Msg, Style, Title, Help, Ctxt)

          On Error GoTo Errhandler

        If Response = vbYes Then    ' User chose Yes.
           posHR460.Text = "585.249"
           If Status = "CommDown" Then
            Lspectr = 585.249
            Recalibrate
            Picture1_Redraw
           Else
             mnuMoveHR460_Click
             btnGo_Click
           End If
           I1max = MaxGlobDatY(LCenter - Wlimits, LCenter + Wlimits)
           Cursor1 (I1max)
           Lmax1 = CalX(1)
           Lmin1 = CalX(MaxPix)

          Lc = I1max

          On Error GoTo Errhandler
          I1max = Val(InputBox("Line position (pixel):", "Confirm/Change", Format(I1max, "####0.00")))
          If (I1max < 1) Or (I1max > MaxPix) Then
            I1max = Lc
          End If



          posHR460.Text = "724.517"
          If Status = "CommDown" Then
            Lspectr = 724.517
            Recalibrate
            Picture1_Redraw
           Else
             mnuMoveHR460_Click
             btnGo_Click
           End If
           I2max = MaxGlobDatY(LCenter - Wlimits, LCenter + Wlimits)
           Cursor1 (I2max)
            Lmax2 = CalX(1)
            Lmin2 = CalX(MaxPix)

          Lc = I2max
          I2max = Val(InputBox("Line position (pixel):", "Confirm/Change", Format(I2max, "####0.00")))
          If (I2max < 1) Or (I2max > MaxPix) Then
            I2max = Lc
          End If

         Offs = I2max - I1max

         ReldStep = -(Offs / MaxPix) * (Lmax2 - Lmin2) / (724.517 - 585.249)

         StperNM = NMtoStep * GratingSp / 1200

          StperNM = StperNM * (1 + ReldStep)
          st = StperNM
          StperNM = Val(InputBox("Define number of steps/nm for " + Format(GratingSp, "###0.") + " grating:", "Steps / Nm ", Format(StperNM, "####0.0000")))

           NMtoStep = StperNM / GratingSp * 1200
             Lc = LCenter
             LCenter = I1max + MaxPix / (Lmax1 - Lmin1) * 585.249 * ReldStep
          LCenter = Val(InputBox("Offset (pixel):", "Offset for CCD Calibration", Format(LCenter, "####0.00")))
           If (LCenter < 1) Or (LCenter > MaxPix) Then
              LCenter = Lc
          End If

      SaveConfig (ConfigFile)
      If Status <> "CommDown" Then
        mnuReadMono1_Click
      End If
      Lspectr = Wlen
      SaveConfig (ConfigFile)

     Recalibrate
     CalibChange = True
     cmbXscale_Click
     CalibChange = False

       End If
        Exit Sub
Errhandler:
   Exit Sub

End Sub

Private Sub mnubasicHelp_Click()
     ' Set the name of the help file
    CommonDialog1.HelpFile = "WizSpec.HLP"
    CommonDialog1.HelpCommand = cdlHelpContents
    ' Display Visual Basic Help contents topic.
    CommonDialog1.ShowHelp

End Sub

Private Sub mnuBigCursor_Click()
  mnuBigCursor.Checked = Not mnuBigCursor.Checked
   If mnuBigCursor.Checked Then
      FirstCursor = True
      Cursor1 (CurPix)
      FirstCursor = True
      BigCursor = True
       Cursor1 (CurPix)
   Else
     FirstCursor = True
     Cursor1 (CurPix)
     FirstCursor = True
     BigCursor = False
      Cursor1 (CurPix)
   End If
End Sub

Private Sub mnuClientActivate_Click()
    If mnuClientActivate.Checked Then
       DoEvents
    Else
      If frmTCPCl.Visible Then
        DoEvents
      Else
       Load frmTCPCl
       frmTCPCl.Show
      End If
    End If
End Sub

Public Sub mnuFile1_Click(Index As Integer)
   Dim Ii As Integer
  If Index = 0 Then
     For Ii = 0 To FileIndex
           mnuFile1(Ii).Visible = False
    Next Ii
    FileIndex = 0
  Else

    mnuFile1(Index).Checked = Not (mnuFile1(Index).Checked)
  End If
    Picture1_Redraw
End Sub

Private Sub mnuFilterOff_Click()
  mnuMedian.Checked = False
  mnuThreshold.Checked = False
  mnuFilterOff.Checked = True
  FilterMethod = NoFilterM
End Sub

Private Sub mnuFocLen_Click()
     Dim El
    On Error GoTo Errhandler
      Picture1.SetFocus
      El = FocalSp

       FocalSp = Val(InputBox("Focal Length  (mm):", "Focal Length / HR460", Format(FocalSp, "###0.00")))
     If (FocalSp < 400) Or (FocalSp > 500) Then
        GoTo Errhandler
     End If

     SaveConfig (ConfigFile)
     Recalibrate
     UpdateNeon
     CalibChange = True
     cmbXscale_Click
     CalibChange = False

     Exit Sub

Errhandler:
    'User pressed the Cancel button
    FocalSp = El
    Exit Sub
End Sub

Private Sub mnuGetNSpectra_Click()
 btnGoN_Click
End Sub

Private Sub mnuGetSpectrum_Click()
 Picture1.SetFocus
   btnGo_Click
End Sub

Private Sub mnuIPprop_Click()
       frmTerminal.SetFocus
End Sub




Private Sub mnuNAccum_Click()
      Picture1.SetFocus
      Accumulations = Val(InputBox("Accumulations (Integer):", " Set Accumulation Number", Format(Accumulations, "####0")))
     If Accumulations <= 1 Then
      Accumulations = 1
    End If
    fAccumulations(1) = Accumulations
    SaveConfig (ConfigFile)
End Sub

Private Sub mnuPixSize_Click()
     Dim El
    On Error GoTo Errhandler
      Picture1.SetFocus
      El = Abs(OMAEl)

     OMAEl = -Val(InputBox("Pixel size (mm):", "Pixel Size", Format(Abs(OMAEl), "#0.000000")))
     If (Abs(OMAEl) < 0.01) Or (Abs(OMAEl) > 0.05) Then
        GoTo Errhandler
     End If

     SaveConfig (ConfigFile)
     Recalibrate
     CalibChange = True
     cmbXscale_Click
     CalibChange = False

     Exit Sub

Errhandler:
    'User pressed the Cancel button
    OMAEl = -El
    Exit Sub

End Sub




Private Sub mnuPrint_Click()

   Dim BeginPage, EndPage, NumCopies, Orientation, i, FCol, BCol, frmCol, Ii
   

      With DataLd(0)
            .tLlaser = Llaser
            .tLCenter = LCenter
            .tGratingSp = GratingSp
            .tAng = Ang
            .tFocalSp = FocalSp
            .tOMAEl = OMAEl
            .tCorAng = CorAng
            .tNMtoStep = NMtoStep
            .tLspectr = Lspectr
            .tSlit = Slit
            .tExposureTime = ExposureTime
            .tAccum = Accum
            .tMaxPix = MaxPix
            ReDim .tDataY(MaxPix)
            For Ii = 1 To MaxPix
              .tDataY(Ii) = GlobalDataY(Ii)
             Next Ii
        End With

   ' Set Cancel to True.
   CommonDialog1.CancelError = True
   On Error GoTo Errhandler
   ' Display the Print dialog box.
   CommonDialog1.ShowPrinter
   ' Get user-selected values from the dialog box.
   BeginPage = CommonDialog1.FromPage
   EndPage = CommonDialog1.ToPage
   NumCopies = CommonDialog1.Copies
   Orientation = CommonDialog1.Orientation
   For i = 1 To NumCopies
   ' Put code here to send data to your printer.
     frmPrintPreview.Redraw Printer
   Next
   Exit Sub
Errhandler:        ' User pressed Cancel button.
 Exit Sub

End Sub


Private Sub UpdateNeon()
  Dim Ii
   If mnuToolNeonSpectrum.Checked Or mnuToolNeonPositions.Checked Then NeonLines
     If mnuToolNeonSpectrum.Checked Then
      For Ii = 1 To MaxPix
           DataNeon(Ii) = MinY + (MaxY - MinY) / (MaxNeon - MinNeon) * (DataNeon(Ii) - MinNeon)
      Next Ii
     End If
End Sub

Private Sub mnuPrintPreview_Click()
  Dim Ii
      With DataLd(0)
            .tLlaser = Llaser
            .tLCenter = LCenter
            .tGratingSp = GratingSp
            .tAng = Ang
            .tFocalSp = FocalSp
            .tOMAEl = OMAEl
            .tCorAng = CorAng
            .tNMtoStep = NMtoStep
            .tLspectr = Lspectr
            .tSlit = Slit
            .tExposureTime = ExposureTime
            .tAccum = Accum
            .tMaxPix = MaxPix
            ReDim .tDataY(MaxPix)
            For Ii = 1 To MaxPix
              .tDataY(Ii) = GlobalDataY(Ii)
             Next Ii
        End With

      If frmPrintPreview.Visible Then
        DoEvents
      Else
       Load frmPrintPreview
       frmPrintPreview.Show
      End If
    
End Sub

Private Sub mnuPrintSetup_Click()
 On Error GoTo Errhandler
   Dim BeginPage, EndPage, NumCopies, Orientation, i, FCol, BCol, frmCol

   ' Set Cancel to True.
   CommonDialog1.CancelError = True

   ' Display the Print dialog box.
   CommonDialog1.Orientation = cdlLandscape

   CommonDialog1.ShowPrinter
   ' Get user-selected values from the dialog box.
   BeginPage = CommonDialog1.FromPage
   EndPage = CommonDialog1.ToPage
   NumCopies = CommonDialog1.Copies
   Orientation = CommonDialog1.Orientation
   
   
 Exit Sub

Errhandler:
    'User pressed the Cancel button
 Exit Sub
End Sub



Private Sub mnuScale_Click()
    Dim Lc
    On Error GoTo Errhandler
      Picture1.SetFocus
      Lc = LCenter
     LCenter = Val(InputBox("Offset (pixel):", "Offset for CCD Calibration", Format(LCenter, "####0.00")))
     If (LCenter < 1) Or (LCenter > MaxPix) Then
       LCenter = Lc
     End If

     SaveConfig (ConfigFile)
     Recalibrate
     UpdateNeon

     CalibChange = True
     cmbXscale_Click
     CalibChange = False

     Exit Sub

Errhandler:
    'User pressed the Cancel button
    Exit Sub


End Sub
Private Sub mnuLaser_Click()
 Dim Ll, Llsave

 On Error GoTo Errhandler
     Picture1.SetFocus
     Llsave = Llaser
     Ll = LlClick
     Llaser = Val(InputBox("Laser wavelength (nm):", "Set Laser Wavelength", Format(LlClick, "####0.000")))
     If (Llaser < 200) Or (Llaser > 1100) Then
       Llaser = Llsave
     End If
      cmbLaser.Text = Format(Llaser, "####.##0")
      LlClick = Llaser

  cmbLaser.Text = Format(Llaser, "####.#00")
  cmbLaser.RemoveItem (35)
  cmbLaser.AddItem Format(Llaser, "####.#00")
  cmbLaser.ListIndex = 35
  Picture1.SetFocus

     SaveConfig (ConfigFile)
     Recalibrate
     UpdateNeon
     CalibChange = True
     cmbXscale_Click
     CalibChange = False


      Exit Sub

Errhandler:
    'User pressed the Cancel button
    Llaser = Llsave
    cmbLaser.Text = Format(Llaser, "####.##0")
    LlClick = Llaser
    Exit Sub
End Sub

Private Sub mnuLoadConfig_Click()
     Dim Cname

      Picture1.SetFocus
     CommonDialog1.FileName = ""
  ' Set CancelError is True
    CommonDialog1.CancelError = True
    On Error GoTo Errhandler
    ' Set flags
    CommonDialog1.Flags = cdlOFNHideReadOnly
    ' Set filters
    CommonDialog1.Filter = "All Files (*.*)|*.*|Config files" & _
    "(*.cfg)|*.cfg"
    ' Specify default filter
    CommonDialog1.FilterIndex = 2
    ' Display the Open dialog box
    CommonDialog1.ShowOpen
    ' Display name of selected file

    Cname = CommonDialog1.FileName

      If CheckConfig(Cname) Then ReadConfig (Cname)



      Exit Sub

Errhandler:
    'User pressed the Cancel button
    Exit Sub

End Sub

Public Sub mnuLoadFile_Click()

   Dim Ii As Integer
   Dim saveCol As Long

    Picture1.SetFocus

    CommonDialog1.FileName = ""

   ' Set CancelError is True
    CommonDialog1.CancelError = True
    On Error GoTo Errhandler
    ' Set flags
    CommonDialog1.Flags = cdlOFNHideReadOnly
    ' Set filters
    CommonDialog1.Filter = "All Files (*.*)|*.*|Data files" & _
    "(*.dat)|*.dat"
    ' Specify default filter
    CommonDialog1.FilterIndex = 2
    ' Display the Open dialog box


 If frmGlue.GlueOn Then
      CommonDialog1.FileName = frmGlue.txtFName.Text
    Else
      CommonDialog1.ShowOpen
    ' Display name of selected file
  End If

  If CheckLoadFile(CommonDialog1.FileName) Then

     FileIndex = FileIndex + 1

    FileNames(FileIndex) = CommonDialog1.FileName


    If FileNames(FileIndex) = "" Then FileIndex = FileIndex - 1

     If FileIndex > MaxFile Then
       saveCol = FileColor(1)
       For Ii = 1 To MaxFile - 1
           mnuFile1(Ii).Caption = mnuFile1(Ii + 1).Caption
           mnuFile1(Ii).Checked = mnuFile1(Ii + 1).Checked
           FileNames(Ii) = FileNames(Ii + 1)
            FileColor(Ii) = FileColor(Ii + 1)
       Next Ii
       FileNames(MaxFile) = FileNames(MaxFile + 1)
       FileColor(MaxFile) = saveCol
       FileIndex = MaxFile
     End If

    If FileIndex < 1 Then FileIndex = 1

     If FileIndex > 0 Then
       mnuFile1(0).Visible = True
       mnuFile1(FileIndex).Caption = FileNames(FileIndex)
        mnuFile1(FileIndex).Visible = True
         mnuFile1(FileIndex).Checked = True
     End If

         SaveConfig (ConfigFile)

         LoadFile (FileIndex)
         'For ii = 1 To MaxPix
          ' PlotData(ii, FileIndex) = DataY(ii)
         'Next ii
         
        ReadConfig (ConfigFile)

       Picture1_Redraw

  Else
    If Not frmTCPIP.Connected Then MsgBox ("Wrong File Format!")
  End If

      Exit Sub

Errhandler:
    'User pressed the Cancel button
End Sub

Public Function GetFName(ByVal Prompt As String) As String
Dim ss As String
    Picture1.SetFocus

    CommonDialog1.FileName = ""

   ' Set CancelError is True
    CommonDialog1.CancelError = True
    On Error GoTo Errhandler
    ' Set flags
    CommonDialog1.Flags = cdlOFNHideReadOnly
    ' Set filters
    CommonDialog1.Filter = "All Files (*.*)|*.*|Data files" & _
    "(*.dat)|*.dat"
    ' Specify default filter
    CommonDialog1.FilterIndex = 2
    ' Display the Open dialog box
     ss = CommonDialog1.DialogTitle
     CommonDialog1.DialogTitle = Prompt
     

      CommonDialog1.ShowOpen

  If CheckLoadFile(CommonDialog1.FileName) Then

    GetFName = CommonDialog1.FileName
   End If
  CommonDialog1.DialogTitle = ss
      Exit Function

Errhandler:
    'User pressed the Cancel button
    CommonDialog1.DialogTitle = ss
End Function

Public Function CheckLoadFile(ByVal Lname As String) As Boolean

   Dim bf
   Dim bf1, bf2, bf3

       CheckLoadFile = False

     On Error GoTo Errhandler
     Open Lname For Input As #1
       Input #1, bf, bf1, bf2, bf3
       If (bf3 <> 300) And (bf3 <> 1800) And (bf3 <> 1500) And (bf3 <> 2400) Then
          CheckLoadFile = False
        Else
          CheckLoadFile = True
        End If
Errhandler:
       Close #1
End Function
Public Sub PushConfig()
If ConfigPushed Then Exit Sub
   ConfigPushed = True
   With DataStack
            .tLlaser = Llaser
            .tLCenter = LCenter
            .tGratingSp = GratingSp
            .tAng = Ang
            .tFocalSp = FocalSp
            .tOMAEl = OMAEl
            .tCorAng = CorAng
            .tNMtoStep = NMtoStep
            .tLspectr = Lspectr
            .tSlit = Slit
            .tExposureTime = ExposureTime
            .tAccum = Accum
            .tMaxPix = MaxPix
    End With
 
End Sub


Public Sub PopConfig()
If ConfigPushed Then
   ConfigPushed = False
   With DataStack
            Llaser = .tLlaser
            LCenter = .tLCenter
            GratingSp = .tGratingSp
            Ang = .tAng
            FocalSp = .tFocalSp
            OMAEl = .tOMAEl
            CorAng = .tCorAng
            NMtoStep = .tNMtoStep
            Lspectr = .tLspectr
            Slit = .tSlit
            ExposureTime = .tExposureTime
            Accum = .tAccum
            MaxPix = .tMaxPix
    End With
 End If
End Sub
Public Sub SwapConfig(ByVal Index As Integer)

   With DataLd(Index)
            Llaser = .tLlaser
            LCenter = .tLCenter
            GratingSp = .tGratingSp
            Ang = .tAng
            FocalSp = .tFocalSp
            OMAEl = .tOMAEl
            CorAng = .tCorAng
            NMtoStep = .tNMtoStep
            Lspectr = .tLspectr
            Slit = .tSlit
            ExposureTime = .tExposureTime
            Accum = .tAccum
            MaxPix = .tMaxPix
    End With
End Sub


Public Sub LoadFile(ByVal Index As Integer)
   Dim bufstr As String
   Dim Ii As Integer
   
     Open FileNames(Index) For Input As #1
       Input #1, bufstr, Llaser, LCenter, GratingSp, Ang, FocalSp, OMAEl, CorAng, NMtoStep, Lspectr, Slit, ExposureTime, Accumulations
       MaxPix = 0
       While Not EOF(1)
         MaxPix = MaxPix + 1
         Input #1, PlotX(MaxPix), DataBuffer(MaxPix)
       Wend
        With DataLd(Index)
            .tLlaser = Llaser
            .tLCenter = LCenter
            .tGratingSp = GratingSp
            .tAng = Ang
            .tFocalSp = FocalSp
            .tOMAEl = OMAEl
            .tCorAng = CorAng
            .tNMtoStep = NMtoStep
            .tLspectr = Lspectr
            .tSlit = Slit
            .tExposureTime = ExposureTime
            .tAccum = Accum
            .tMaxPix = MaxPix
            ReDim .tDataY(MaxPix)
            For Ii = 1 To MaxPix
              .tDataY(Ii) = DataBuffer(Ii)
             Next Ii
        End With
       Close #1
End Sub

Public Sub LoadFileHead(ByVal Index As Integer)
   Dim bufstr As String
     Open FileNames(Index) For Input As #1
       Input #1, bufstr, Llaser, LCenter, GratingSp, Ang, FocalSp, OMAEl, CorAng, NMtoStep, Lspectr, Slit, ExposureTime, Accumulations

       Close #1
End Sub


Private Sub mnuSaveConfigAs_Click()
   Dim Cname

     Picture1.SetFocus
   CommonDialog1.FileName = ""
   ' Set CancelError is True
    CommonDialog1.CancelError = True
    On Error GoTo Errhandler
    ' Set flags
    CommonDialog1.Flags = cdlOFNHideReadOnly + cdlOFNOverwritePrompt
    ' Set filters
    CommonDialog1.Filter = "All Files (*.*)|*.*|Config files" & _
    "(*.cfg)|*.cfg"
    ' Specify default filter
    CommonDialog1.FilterIndex = 2
    ' Display the Open dialog box
    CommonDialog1.ShowSave
    ' Display name of selected file

    Cname = CommonDialog1.FileName

       SaveConfig (Cname)



      Exit Sub

Errhandler:
    'User pressed the Cancel button
    Exit Sub
End Sub

Public Sub mnuSaveFile_Click()
   Dim Ii
   Dim ss As Single


    Picture1.SetFocus

      CommonDialog1.FileName = SaveFileName
    ' Set CancelError is True
    CommonDialog1.CancelError = True
    On Error GoTo Errhandler
    ' Set flags
    CommonDialog1.Flags = cdlOFNHideReadOnly + cdlOFNOverwritePrompt
    ' Set filters
    CommonDialog1.Filter = "All Files (*.*)|*.*|Data files" & _
    "(*.dat)|*.dat"
    ' Specify default filter
    CommonDialog1.FilterIndex = 2
    ' Display the Open dialog box

    If frmGlue.GlueOn Then
      SaveFileName = frmGlue.txtFName.Text
    Else
      CommonDialog1.ShowSave
    ' Display name of selected file
      SaveFileName = CommonDialog1.FileName
    End If



     Open SaveFileName For Output As #1
       Write #1, "# ", Llaser, LCenter, GratingSp, Ang, FocalSp, OMAEl, CorAng, NMtoStep, Lspectr, Slit, ExposureTime, Accum
       For Ii = 1 To MaxPix
         ss = PlotX(Ii)
         Write #1, ss, GlobalDataY(Ii)
         Print
        Next Ii
       Close #1
       tbrToolBar.Buttons("SaveFile").Enabled = False
      Exit Sub

Errhandler:
    'User pressed the Cancel button
    Exit Sub

End Sub
 Public Sub SaveConfig(ByVal CfgFile As String)
   Dim Ii As Integer
   
     If OperationMode = ClientM Then Exit Sub
         
     Open CfgFile For Output As #1
       If GratingSp = fGratingSp(1) Then Ii = 2

       If GratingSp = fGratingSp(2) Then Ii = 1

         Print #1, Llaser; Tab; fLlaser(Ii)
         Print #1, LCenter; Tab; fLCenter(Ii)
         Print #1, GratingSp; Tab; fGratingSp(Ii)
         Print #1, Ang; Tab; fAng(Ii)
         Print #1, FocalSp; Tab; fFocalSp(Ii)
         Print #1, OMAEl; Tab; fOMAEl(Ii)
         Print #1, CorAng; Tab; fCorAng(Ii)
         Print #1, NMtoStep; Tab; fNMtoStep(Ii)
         Print #1, Lspectr; Tab; fLspectr(Ii)
         Print #1, Slit; Tab; fSlit(Ii)
         Print #1, ExposureTime; Tab; fExposureTime(Ii)
         Print #1, Accumulations; Tab; fAccumulations(Ii)
          Print #1, Slaser
          Print #1, Scenter
          Print #1, Sgrating
          Print #1, Sang
          Print #1, Sfocus
          Print #1, Soma
          Print #1, Scorang
          Print #1, Snmtostep
          Print #1, Sspectr
          Print #1, Sslit
          Print #1, Sexp
          Print #1, Sacc
       Close #1

End Sub
Public Function CheckConfig(ByVal CfgFile As String) As Boolean
   Dim ReadError As Boolean
   Dim fG1, fG2
          If OperationMode = ClientM Then Exit Function

      CheckConfig = False
      On Error GoTo Errhandler
       Open CfgFile For Input As #1

           Input #1, fG1, fG2
           Input #1, fG1, fG2
           Input #1, fG1, fG2

        If (fG1 <> 2400) And (fG1 <> 1800) And (fG1 <> 1500) And (fG1 <> 1200) And (fG1 <> 600) And (fG1 <> 300) And (fG1 <> 150) And _
        (fG2 <> 2400) And (fG2 <> 1800) And (fG2 <> 1500) And (fG2 <> 1200) And (fG2 <> 600) And (fG2 <> 300) And (fG2 <> 150) Then
            CheckConfig = False
            MsgBox ("Config file corrupted!  G1:" & Format(fG1, "####") & "    G2:" & Format(fG2, "####"))
        Else
          CheckConfig = True
          If InitMode Then
            If fG1 < fG2 Then
              Grating1 = fG2
              Grating2 = fG1
             Else
                Grating1 = fG1
                Grating2 = fG2
            End If
            cmbGrating.AddItem Format(Grating1, "###0")
            cmbGrating.AddItem Format(Grating2, "###0")
            InitMode = False
            MsgBox ("Config file OK!  G1:" & Format(fG1, "####") & "    G2:" & Format(fG2, "####"))
  
          End If
        End If



       Close #1




      Exit Function
Errhandler:
 If ReadError Then Debug.Print "Error reading configuration file"
    CheckConfig = False
    Close #1
    Exit Function
End Function



Public Sub ReadConfig(ByVal CfgFile As String)
   Dim ReadError As Boolean
   
  If OperationMode = ClientM Then Exit Sub

    On Error GoTo Errhandler
       Open CfgFile For Input As #1


         Input #1, fLlaser(1), fLlaser(2)
         Input #1, fLCenter(1), fLCenter(2)
         Input #1, fGratingSp(1), fGratingSp(2)
         Input #1, fAng(1), fAng(2)
         Input #1, fFocalSp(1), fFocalSp(2)
         Input #1, fOMAEl(1), fOMAEl(2)
         Input #1, fCorAng(1), fCorAng(2)
         Input #1, fNMtoStep(1), fNMtoStep(2)
         Input #1, fLspectr(1), fLspectr(2)
         Input #1, fSlit(1), fSlit(2)
         Input #1, fExposureTime(1), fExposureTime(2)
         Input #1, fAccumulations(1), fAccumulations(2)

    Input #1, Slaser, Scenter, Sgrating, Sang, Sfocus, Soma, Scorang, Snmtostep, Sspectr, Sslit, Sexp, Sacc


       Close #1





        Llaser = fLlaser(1)
        LCenter = fLCenter(1)
        GratingSp = fGratingSp(1)
        Ang = fAng(1)
        FocalSp = fFocalSp(1)
        OMAEl = fOMAEl(1)
        CorAng = fCorAng(1)
        NMtoStep = fNMtoStep(1)
        Lspectr = fLspectr(1)
        Slit = fSlit(1)
        ExposureTime = fExposureTime(1)
        Accumulations = fAccumulations(1)

     Exit Sub
Errhandler:
     Close #1
      If Not frmTCPIP.Connected Then MsgBox ("Your configuration file (wsp-460.cfg) is damaged. " & Chr(13) & Chr(10) & "Use backup (wsp-460.bak) or edit the file." & Chr(13) & Chr(10) & "Shutting down ...")

     ReadConfigError = Error
     End
     Exit Sub



End Sub



Public Sub CreateDefaultConfig()

          fLlaser(1) = 514.532
          fLlaser(2) = 514.532
          fLCenter(1) = 512
          fLCenter(2) = 512
          fGratingSp(1) = 1500
          fGratingSp(2) = 300
          Grating1 = 1500
          Grating2 = 300
          cmbGrating.AddItem Format(Grating1, "###0")
          cmbGrating.AddItem Format(Grating2, "###0")
              
          fAng(1) = 0.288
          fAng(2) = 0.288
          fFocalSp(1) = 460
          fFocalSp(2) = 460
          fOMAEl(1) = -0.02765
          fOMAEl(2) = -0.02765
          fCorAng(1) = 0
          fCorAng(2) = 0
          fNMtoStep(1) = 160
          fNMtoStep(2) = 160
          fLspectr(1) = 695
         fLspectr(2) = 695
          fSlit(1) = 30
          fSlit(2) = 10
          fExposureTime(1) = 1
          fExposureTime(2) = 1
          fAccumulations(1) = 1
          fAccumulations(2) = 1

         Slaser = "Laser wavelength"
         Scenter = "Central pixel"
         Sgrating = "Grating grooves/mm"
         Sang = "Inclusion angle (radians)"
         Sfocus = "Focal length"
        Soma = "OMA element size"
         Scorang = "Angle between normal to the OMA plane and the optical axis (degrees)"
         Snmtostep = "Steps/Nm for 1200 g/mm grating"
         Sspectr = "Spectrometer position in nm "
         Sslit = "Slit size"
         Sexp = "Accumulation (1) time"
         Sacc = "Number of Accumulations"








        Llaser = fLlaser(1)
        LCenter = fLCenter(1)
        GratingSp = fGratingSp(1)
        Ang = fAng(1)
        FocalSp = fFocalSp(1)
        OMAEl = fOMAEl(1)
        CorAng = fCorAng(1)
        NMtoStep = fNMtoStep(1)
        Lspectr = fLspectr(1)
        Slit = fSlit(1)
        ExposureTime = fExposureTime(1)

End Sub

Public Sub DefaultConfig(ByVal CfgFile As String)

  On Error GoTo Errhandler
     Open CfgFile For Input As #1

         Input #1, fLlaser(1), fLlaser(2)
         Input #1, fLCenter(1), fLCenter(2)
         Input #1, fGratingSp(1), fGratingSp(2)
         Input #1, fAng(1), fAng(2)
         Input #1, fFocalSp(1), fFocalSp(2)
         Input #1, fOMAEl(1), fOMAEl(2)
         Input #1, fCorAng(1), fCorAng(2)
         Input #1, fNMtoStep(1), fNMtoStep(2)
         Input #1, fLspectr(1), fLspectr(2)
         Input #1, fSlit(1), fSlit(2)
         Input #1, fExposureTime(1), fExposureTime(2)
         Input #1, fAccumulations(1), fAccumulations(2)

    Input #1, Slaser, Scenter, Sgrating, Sang, Sfocus, Soma, Scorang, Snmtostep, Sspectr, Sslit, Sexp, Sacc


       Close #1

       If fGratingSp(1) = Grating1 Then Exit Sub
       If fGratingSp(1) = Grating2 Then
        Llaser = fLlaser(2)
        LCenter = fLCenter(2)
        GratingSp = fGratingSp(2)
        Ang = fAng(2)
        FocalSp = fFocalSp(2)
        OMAEl = fOMAEl(2)
        CorAng = fCorAng(2)
        NMtoStep = fNMtoStep(2)
        Lspectr = fLspectr(2)
        Slit = fSlit(2)
        ExposureTime = fExposureTime(2)
        Accumulations = fAccumulations(2)
        SaveConfig (CfgFile)
       End If

       Exit Sub
Errhandler:
       'Debug.Print Error
       Exit Sub
End Sub






Private Sub mnuSetGrating1_Click()
    Dim GrTo, indx
     Picture1.SetFocus
      GrTo = Grating1
     Grating1 = Val(InputBox("Grating #1, g/mm", " Gratings", Format(GrTo, "###0")))
     If Grating1 <= 0 Then
      Grating1 = GrTo
    End If
    
       cmbGrating.RemoveItem (1)
       cmbGrating.RemoveItem (0)
  
      cmbGrating.AddItem Format(Grating1, "###0")
       cmbGrating.AddItem Format(Grating2, "###0")
      If fGratingSp(1) = GrTo Then
        fGratingSp(1) = Grating1
      End If
      If fGratingSp(2) = GrTo Then
        fGratingSp(2) = Grating1
      End If
     If GratingSp = GrTo Then
       cmbGrating.Text = Format(Grating1, "###0")
       GratingSp = Grating1
     End If
      SaveConfig (ConfigFile)
End Sub

Private Sub mnuSetGrating2_Click()
 Dim GrTo, indx
     Picture1.SetFocus
      GrTo = Grating2
     Grating2 = Val(InputBox("Grating #2, g/mm", " Gratings", Format(GrTo, "###0")))
     If Grating2 <= 0 Then
      Grating2 = GrTo
    End If
    
       cmbGrating.RemoveItem (1)
       cmbGrating.RemoveItem (0)
  
      cmbGrating.AddItem Format(Grating1, "###0")
       cmbGrating.AddItem Format(Grating2, "###0")
      If fGratingSp(1) = GrTo Then
        fGratingSp(1) = Grating2
      End If
      If fGratingSp(2) = GrTo Then
        fGratingSp(2) = Grating2
      End If
     If cmbGrating.Text = Format(GrTo, "###0") Then
       cmbGrating.Text = Format(Grating1, "###0")
       GratingSp = Grating2
     End If
      SaveConfig (ConfigFile)
End Sub

Private Sub mnuSimulation_Click()
  mnuSimulation.Checked = Not mnuSimulation.Checked
  If mnuSimulation.Checked Then
    WinSp32On = False
  Else
    WinSp32On = True
  End If
End Sub

Private Sub mnuStepsmm_Click()
       Dim st
    On Error GoTo Errhandler
      Picture1.SetFocus
      ReadConfig (ConfigFile)
      st = NMtoStep
     NMtoStep = 1200 / GratingSp * Val(InputBox("Define number of steps/nm for " + Format(GratingSp, "###0.") + " grating:", "Steps / Nm ", Format(NMtoStep * GratingSp / 1200, "####0.0000")))
     If (NMtoStep < 155) Or (NMtoStep > 165) Then
       GoTo Errhandler
     End If

     SaveConfig (ConfigFile)
        If Status = "CommDown" Then
           Lspectr = Lspectr * st / NMtoStep
         Else
          mnuReadMono1_Click
         End If
     Recalibrate
     UpdateNeon
     CalibChange = True
     cmbXscale_Click
     CalibChange = False

     Exit Sub

Errhandler:
    'User pressed the Cancel button
    NMtoStep = st
    Exit Sub

End Sub



Public Sub InitMatlab()
  Dim Result As String
  
  Set Matlab = CreateObject("Matlab.Application")
  Matlab.Visible = 1
  Result = Matlab.Execute("cd " + CurDir)
  Result = Matlab.Execute("addpath d:\matlab\Wizspec")

End Sub

Private Sub mnuStokesD_Click()

Dim Result As String
Dim i
Dim stc As String
Dim std As String
Dim tcal, bgd
Dim st
Dim AS_S As Double
AS_S = 0.83

InitMatlab

   std = GetFName("Data Stokes File")
   st = "Ist=dstokes('" + std + "')"
   Result = Matlab.Execute(st)
   
   
   std = GetFName("Data Anti-Stokes File")
   st = "Iast=astokes('" + std + "')"
   Result = Matlab.Execute(st)
   
   AS_S = Val(InputBox("Anti-Stokes/Stokes calibration:", "Spectral Calibration ", Format(AS_S, "##.000")))
    
   mlPutVal Matlab, "AS_S", AS_S, 0
   mlPutVal Matlab, "WntoK", WntoK, 0
   st = "Title(['T=' num2str(1./(log(Ist/Iast.*AS_S))*1332.5*WntoK) ' K'])"
   Result = Matlab.Execute(st)
   

End Sub

Private Sub mnuASFT_Click()
Dim Result As String
Dim i
Dim stc As String
Dim std As String
Dim tcal, bgd
Dim st

InitMatlab

   stc = GetFName("Calibration File")
   std = GetFName("Data File")
   tcal = Format(1100, "####")
   bgd = Format(216, "###")
   st = "Temp=asft('" + stc + "'," + tcal + ",'" + std + "'," + bgd + ")"
   Result = Matlab.Execute(st)
   st = "title(['T=' num2str(Temp)] ' K')"
   Result = Matlab.Execute(st)

End Sub

Private Sub mnuAstokesD_Click()

Dim Result As String
Dim i
Dim stc As String
Dim std As String
Dim tcal, bgd
Dim st

InitMatlab
 
   std = GetFName("Data A-Stokes File")
   st = "Iast=astokes('" + std + "')"
   Result = Matlab.Execute(st)

End Sub

Private Sub mnuPyro_Click()
Dim Result As String
Dim i
Dim stc As String
Dim std As String
Dim tcal, bgd
Dim st

  InitMatlab
  
    std = GetFName("Data File")
   st = "dataname='" + std + "';"
   Result = Matlab.Execute(st)
   
   
   std = GetFName("Calibration File")
   st = "calibname='" + std + "';"
   Result = Matlab.Execute(st)
   Result = Matlab.Execute("tfitmain")
    
End Sub
Private Sub mnuMatPlot_Click()
Dim Result As String
Dim i, Ii
Dim st As String
Dim ist As String
Dim col(15) As String
Dim ss
col(1) = "m"
col(2) = "y"
col(3) = "r"
col(4) = "c"
col(5) = "g"
col(6) = "b"
col(7) = "k--"
col(8) = ".m"
col(9) = ".y-"
col(10) = ".r"
col(11) = ".c"
col(12) = ".g"
col(13) = ".b"
col(14) = ".k-"
col(15) = ".m-"
Set Matlab = CreateObject("Matlab.Application")
Matlab.Visible = 1
Result = Matlab.Execute("cd " + CurDir)
 
Open "temp.dat" For Output As #1
       Write #1, "# ", Llaser, LCenter, GratingSp, Ang, FocalSp, OMAEl, CorAng, NMtoStep, Lspectr, Slit, ExposureTime, Accum
       For Ii = 1 To MaxPix
         ss = PlotX(Ii)
         Write #1, ss, GlobalDataY(Ii)
         Print
        Next Ii
       Close #1
       
 st = "[x,y]=readwiz(0,'temp.dat',0)"
   Result = Matlab.Execute(st)
   Result = Matlab.Execute("figure(1)")
   Result = Matlab.Execute("hold off")
   Result = Matlab.Execute("plot(x,y,'k')")
   Result = Matlab.Execute("hold on")
 
For i = 1 To FileIndex
  'CALLING M-FILE FROM VB
  ist = Format(i, "##")
   st = "[x" + ist + ",y" + ist + "]=readwiz(0,'" + FileNames(i) + "',0)"
   Result = Matlab.Execute(st)
   Result = Matlab.Execute("plot(x" + ist + ",y" + ist + ",'" + col(i) + "')")

   
Next i

  Result = Matlab.Execute("zoomrb;grid on;")
End Sub
Public Function mlGetRealVal(ML As Object, ByVal varname As String) As Double
  Dim V(0) As Double
  Dim Vi(0) As Double
  Call ML.GetFullMatrix(varname, "base", V, Vi)
  mlGetRealVal = V(0)
End Function

Public Function mlGetImagVal(ML As Object, ByVal varname As String) As Double
  Dim V(0) As Double
  Dim Vi(0) As Double
  Call ML.GetFullMatrix(varname, "base", V, Vi)
  mlGetImagVal = Vi(0)
End Function
Public Sub mlGetVal(ML As Object, ByVal varname As String, ByRef varval As Double, ByRef varvali As Double)
  Dim V(0) As Double
  Dim Vi(0) As Double
  Call ML.GetFullMatrix(varname, "base", V, Vi)
  varval = V(0)
  varvali = Vi(0)
End Sub
Public Sub mlPutVal(ML As Object, ByVal varname As String, ByVal varval As Double, ByVal varvali As Double)
  Dim V(0) As Double
  Dim Vi(0) As Double
  V(0) = varval
  Vi(0) = varvali
  Call ML.PutFullMatrix(varname, "base", V, Vi)
 
End Sub
Private Sub mnuTime_Click()
Dim ExpTo
     Picture1.SetFocus
      ExpTo = Val(txtTime.Text)
     ExposureTime = Val(InputBox("Accumulation Time, Sec:", " Set Accumulation time", Format(ExpTo, "####0.00")))
     If ExposureTime <= 0 Then
      ExposureTime = 1
    End If
      txtTime = Format(ExposureTime, "###0.00")
      fExposureTime(1) = ExposureTime
      SaveConfig (ConfigFile)
End Sub
Public Function StepVal(ByVal Xmin As Single, ByVal Xmax As Single) As Single
   Dim Ord, Mant, Logval As Single
          Logval = Log(Xmax - Xmin) / Log(10)
          Ord = Int(Logval)
          Mant = Logval - Ord
          StepVal = 2
          If Exp(Mant * Log(10)) < 7.5 Then StepVal = 1
          If Exp(Mant * Log(10)) < 3.9 Then StepVal = 0.5
          If Exp(Mant * Log(10)) < 1.7 Then StepVal = 0.2
          StepVal = StepVal * Exp(Ord * Log(10))


End Function


Private Sub Picture1_Redraw()
       Dim Xpix, iP, klbl, iFil As Integer
       Dim Yoffset, Xoffset
       Dim SaveMaxPix As Integer
       Dim LinX

     If MouseDown Then Exit Sub


  If (Not IsEmpty(MaxY)) And (Not IsEmpty(MaxX)) And (Not IsEmpty(GlobalDataY)) Then
     If Abs(MaxY - MinY) < 0.03 Then
       MaxY = MaxY + 0.05
       MinY = MinY - 0.05
     End If
     If Abs(MaxX - MinX) < 0.03 Then
       MaxX = MaxX + 0.05
       MinX = MinX - 0.05
     End If

     If ErasePicture Then
       Picture1.Cls
       FirstCursor = True
        If ExactLimits Then
          Yoffset = 0
        Else
          Yoffset = (MaxY - MinY) / 20
        End If

        Xoffset = 0
        Picture1.Scale (MinX - Xoffset, MaxY + Yoffset)-(MaxX + Xoffset, MinY - Yoffset)
       If PlotAxis Then
            StepX = StepVal(MinX, MaxX)
            StepY = StepVal(MinY, MaxY)
            StartX = (Int(MinX / StepX) + 1) * StepX
            StartY = (Int(MinY / StepY) + 1) * StepY

            klbl = 1
            While klbl < 8

               Picture1.Line (StartX, MinY - Yoffset)-(StartX, MinY - Yoffset + (MaxY - MinY) / 100)
               If klbl = 1 Then
                  lblX1.Caption = Format(StartX, "#####.000")
                  lblX1.Left = (StartX - MinX - Xoffset) / (MaxX - MinX + 2 * Xoffset) * Picture1.Width + Picture1.Left - lblX1.Width / 2
               End If

               If klbl = 2 Then
                  lblX2.Caption = Format(StartX, "#####.000")
                  lblX2.Left = (StartX - MinX - Xoffset) / (MaxX - MinX + 2 * Xoffset) * Picture1.Width + Picture1.Left - lblX2.Width / 2
               End If

                If klbl = 3 Then
                  lblX3.Caption = Format(StartX, "#####.000")
                  lblX3.Left = (StartX - MinX - Xoffset) / (MaxX - MinX + 2 * Xoffset) * Picture1.Width + Picture1.Left - lblX3.Width / 2
               End If

                If klbl = 4 Then
                  lblX4.Caption = Format(StartX, "#####.000")
                  lblX4.Left = (StartX - MinX - Xoffset) / (MaxX - MinX + 2 * Xoffset) * Picture1.Width + Picture1.Left - lblX4.Width / 2
                End If

                 If klbl = 5 Then
                  lblX5.Caption = Format(StartX, "#####.000")
                  lblX5.Left = (StartX - MinX - Xoffset) / (MaxX - MinX + 2 * Xoffset) * Picture1.Width + Picture1.Left - lblX5.Width / 2
                End If

                 If klbl = 6 Then
                  lblX6.Caption = Format(StartX, "#####.000")
                  lblX6.Left = (StartX - MinX - Xoffset) / (MaxX - MinX + 2 * Xoffset) * Picture1.Width + Picture1.Left - lblX6.Width / 2
                 End If

                If klbl = 7 Then
                  lblX7.Caption = Format(StartX, "#####.000")
                  lblX7.Left = (StartX - MinX - Xoffset) / (MaxX - MinX + 2 * Xoffset) * Picture1.Width + Picture1.Left - lblX7.Width / 2
                 End If


               klbl = klbl + 1
               StartX = StartX + StepX
            Wend

             klbl = 1

            While klbl < 8
               Picture1.Line (MinX - Xoffset, StartY)-(MinX - Xoffset + (MaxX - MinX) / 200, StartY)
               If klbl = 1 Then
                  lblY1.Caption = Format(StartY, "#####.0")
                  lblY1.Top = -(StartY - MinY + Yoffset) / (MaxY - MinY + 2 * Yoffset) * Picture1.Height + Picture1.Top + Picture1.Height - lblY1.Height / 2
               End If

               If klbl = 2 Then
                  lblY2.Caption = Format(StartY, "#####.0")
                  lblY2.Top = -(StartY - MinY + Yoffset) / (MaxY - MinY + 2 * Yoffset) * Picture1.Height + Picture1.Top + Picture1.Height - lblY2.Height / 2
               End If

               If klbl = 3 Then
                  lblY3.Caption = Format(StartY, "#####.0")
                  lblY3.Top = -(StartY - MinY + Yoffset) / (MaxY - MinY + 2 * Yoffset) * Picture1.Height + Picture1.Top + Picture1.Height - lblY3.Height / 2
               End If

                If klbl = 4 Then
                  lblY4.Caption = Format(StartY, "#####.0")
                  lblY4.Top = -(StartY - MinY + Yoffset) / (MaxY - MinY + 2 * Yoffset) * Picture1.Height + Picture1.Top + Picture1.Height - lblY4.Height / 2
               End If

                If klbl = 5 Then
                  lblY5.Caption = Format(StartY, "#####.0")
                  lblY5.Top = -(StartY - MinY + Yoffset) / (MaxY - MinY + 2 * Yoffset) * Picture1.Height + Picture1.Top + Picture1.Height - lblY5.Height / 2
               End If

                If klbl = 6 Then
                  lblY6.Caption = Format(StartY, "#####.0")
                  lblY6.Top = -(StartY - MinY + Yoffset) / (MaxY - MinY + 2 * Yoffset) * Picture1.Height + Picture1.Top + Picture1.Height - lblY6.Height / 2
               End If

                If klbl = 7 Then
                  lblY7.Caption = Format(StartY, "#####.0")
                  lblY7.Top = -(StartY - MinY + Yoffset) / (MaxY - MinY + 2 * Yoffset) * Picture1.Height + Picture1.Top + Picture1.Height - lblY7.Height / 2
               End If

                If klbl = 4 Then
                  lblY4.Caption = Format(StartY, "#####.0")
                  lblY4.Top = -(StartY - MinY + Yoffset) / (MaxY - MinY + 2 * Yoffset) * Picture1.Height + Picture1.Top + Picture1.Height - lblY4.Height / 2
               End If


               klbl = klbl + 1
               StartY = StartY + StepY
            Wend

       End If

     End If


     'SaveConfig (ConfigFile)
     'SaveMaxPix = MaxPix
      PushConfig
     For iFil = 1 To FileIndex

       If mnuFile1(iFil).Checked Then
       
        SwapConfig (iFil)
        
        Recalibrate
        Xscale
         
         For iP = 2 To DataLd(iFil).tMaxPix
            If ((PlotX(iP - 1) - MinX + Xoffset) * (PlotX(iP - 1) - MaxX - Xoffset) < 0) Or ((PlotX(iP) - MinX + Xoffset) * (PlotX(iP) - MaxX - Xoffset) < 0) Then
              Picture1.Line (PlotX(iP - 1), DataLd(iFil).tDataY(iP - 1) + Offset(iFil))-(PlotX(iP), DataLd(iFil).tDataY(iP) + Offset(iFil)), FileColor(iFil)
            End If
         Next iP
         
       End If
    Next iFil

    'MaxPix = SaveMaxPix
    'ReadConfig (ConfigFile)
    PopConfig
    Recalibrate
    Xscale





     If MultipleAccum Then
       If Accum > 1 Then
         For iP = 2 To MaxPix
           If ((PlotX(iP - 1) - MinX + Xoffset) * (PlotX(iP - 1) - MaxX - Xoffset) < 0) Or ((PlotX(iP) - MinX + Xoffset) * (PlotX(iP) - MaxX - Xoffset) < 0) Then
            Picture1.Line (PlotX(iP - 1), DataS(iP - 1))-(PlotX(iP), DataS(iP)), QBColor(11)
           End If
         Next iP
       End If
        For iP = 1 To MaxPix
          Picture1.PSet (PlotX(iP), GlobalDataY(iP)), QBColor(15)
       Next iP
     Else
       For iP = 2 To MaxPix
          If ((PlotX(iP - 1) - MinX + Xoffset) * (PlotX(iP - 1) - MaxX - Xoffset) < 0) Or ((PlotX(iP) - MinX + Xoffset) * (PlotX(iP) - MaxX - Xoffset) < 0) Then
           Picture1.Line (PlotX(iP - 1), GlobalDataY(iP - 1))-(PlotX(iP), GlobalDataY(iP))
          End If
       Next iP
     End If


     If SpFocus Then
        If Not FirstFocus Then
          For iP = 2 To MaxPix
           'Picture1.Line (PlotX(iP - 1), DataS(iP - 1))-(PlotX(iP), DataS(iP)), QBColor(14)
            Picture1.PSet (PlotX(iP), DataS(iP)), QBColor(14)
          Next iP
        End If
     End If


    If mnuToolNeonSpectrum.Checked Then
       For iP = 2 To MaxPix
          If ((PlotX(iP - 1) - MinX + Xoffset) * (PlotX(iP - 1) - MaxX - Xoffset) < 0) Or ((PlotX(iP) - MinX + Xoffset) * (PlotX(iP) - MaxX - Xoffset) < 0) Then
            Picture1.Line (PlotX(iP - 1), DataNeon(iP - 1))-(PlotX(iP), DataNeon(iP)), QBColor(12)
          End If
       Next iP

    End If



    If mnuToolNeonPositions.Checked Then

       For iP = 1 To NNeon

          LinX = Npos(iP)

         If DrawingMode = "pixel" Then
           LinX = PixelWlen(Npos(iP))
         End If

        If DrawingMode = "rel cm-1" Then
           LinX = (1 / Llaser - 1 / Npos(iP)) * 10000000#
        End If

        If DrawingMode = "cm-1" Then
           LinX = 1 / Npos(iP) * 10000000#
        End If

        If DrawingMode = "meV" Then
           LinX = 1239.75 / Npos(iP) * 1000#
        End If

        If DrawingMode = "rel meV" Then
           LinX = 1239.75 * (1 / Llaser - 1 / Npos(iP)) * 1000#
        End If

         If ((LinX - MinX + Xoffset) * (LinX - MaxX - Xoffset) < 0) Or ((LinX - MinX + Xoffset) * (LinX - MaxX - Xoffset) < 0) Then
            Picture1.Line (LinX, MinY)-(LinX, MaxY), QBColor(12)
         End If
       Next iP

    End If





    txtMaxX.Text = Format(MaxX + Xoffset, "#####0.00")
    txtMinX.Text = Format(MinX - Xoffset, "#####0.00")
    txtMinY.Text = Format(MinY - Yoffset, "#####0.00")
    txtMaxY.Text = Format(MaxY + Yoffset, "#####0.00")
    Cursor1 (CurPix)
    If (LoadingLogo) And frmLogo.Visible Then

       frmLogo.SetFocus
       LoadingLogo = False

    End If
   End If

End Sub

Private Sub mnuToolGlue_Click()
    frmGlue.Show
End Sub

Private Sub mnuToolNeonSpectrum_Click()
    NeonLines
    mnuToolNeonSpectrum.Checked = Not (mnuToolNeonSpectrum.Checked)
    btnAutoXY_Click
    Picture1_Redraw
End Sub

Private Sub mnuToolNeonPositions_Click()
    NeonLines
    mnuToolNeonPositions.Checked = Not (mnuToolNeonPositions.Checked)
    btnAutoXY_Click
    Picture1_Redraw
End Sub

Private Sub mnuToolsPress_Click()
   Dim Vbuf, Sbuf As String
   Dim pos As Double
     Picture1.SetFocus
     Vbuf = InputBox$("R1 position, nm:", "Pressure calculation", Format(MaxPresGlobY, "###0.000"))
     pos = Val(Vbuf)
       
       RubyTemp = Val(txtTemp.Text)
       
       Pressure = PressT(Abs(pos), RubyTemp)
       
       If Not frmTCPIP.Connected Then
          MsgBox ("P = " + Format(Pressure, "###0.00") + "  GPa" + ",  T=" + txtTemp.Text + " K")
       Else
          sbrStatus.Panels("Settings").Text = sbrStatus.Panels("Settings").Text & "P = " + Format(Pressure, "###0.00") + "  GPa"
       End If

End Sub

Private Sub mnuThreshold_Click()
Dim ThreshCalc, i, CRLF
     Picture1.SetFocus
     
  CRLF = Chr(13) + Chr(10)
  ThreshCalc = 0
  For i = 2 To MaxPix
   ThreshCalc = ThreshCalc + Abs(GlobalDataY(i) - GlobalDataY(i - 1)) / (MaxPix - 1)
  Next i
    Threshold = Val(InputBox("Threshold > 0,   in display units." & CRLF _
    & "Current Threshold = " & Format(Threshold, "####0.00") & CRLF _
    & "Suggested Treshold : ", " Set threshold for removing spikes.", Format(ThreshCalc, "####0.00")))
     If Threshold <= 0 Then
       Threshold = 20
     End If
     mnuThreshold.Checked = True
     mnuMedian.Checked = False
     mnuFilterOff.Checked = False
     FilterMethod = ThresholdM
     
End Sub
Private Sub mnuMedian_Click()
    mnuThreshold.Checked = False
     mnuMedian.Checked = True
     mnuFilterOff.Checked = False
     FilterMethod = MedianM
End Sub

Private Sub Picture1_MouseDown(Button As Integer, Shift As Integer, x As Single, y As Single)
    If FormLoading Then Exit Sub

    If Button <> 1 Then Exit Sub

    If MouseDown Then
      MouseDown = False
      Exit Sub
    End If
    MouseDown = True
    PicDMode = Picture1.DrawMode
    Xstart = x
    Ystart = y

    Xold = Xstart
    Yold = Ystart
    Picture1.DrawMode = vbXorPen

End Sub
Private Sub Picture1_MouseMove(Button As Integer, Shift As Integer, x As Single, y As Single)
    If FormLoading Then Exit Sub
    If Button = 1 Then
       Offset(1) = (y - Yold)
    End If
    If Button <> 1 Then
        frmInfo.xvalLabel.Caption = "x: " + Format(x, "###0.000")
        frmInfo.yvalLabel.Caption = "y: " + Format(y, "###0.000")
        frmInfo.lblXdif.Caption = Format(x - PlotX(CurPix), "###0.000")
       frmInfo.lblYdif.Caption = Format(y - GlobalDataY(CurPix), "###0.000")
   
       lblMsX.Caption = "X: " + Format(x, "###0.000")
        lblMsY.Caption = "Y: " + Format(y, "###0.000")
      
        If DrawingMode = "rel cm-1" Then
           x = 10000000# / (1 / Llaser * 10000000# - x)
        End If

        If DrawingMode = "cm-1" Then
           x = 1 / x * 10000000#
        End If
        If DrawingMode = "meV" Then
           x = 1239.7 / x * 1000#
        End If
        If DrawingMode = "rel meV" Then
           x = 1239.7 / (1239.7 / Llaser * 1000# - x) * 1000#
        End If

        If DrawingMode = "pixel" Then
           frmInfo.lblPixel.Caption = "pixel: " + Format(x, "###0.000")
            frmInfo.lblPixdif.Caption = Format(x - CurPix, "###0.000")
            lblMsPix.Caption = "Pxl: " + Format(x, "###0.00")
          
            
        Else
          frmInfo.lblPixel.Caption = "pixel: " + Format(PixelWlen(x), "###0.000")
          frmInfo.lblPixdif.Caption = Format(PixelWlen(x) - CurPix, "###0.000")
          
          lblMsPix.Caption = "Pxl: " + Format(PixelWlen(x), "###0.00")
        End If
        Exit Sub
    End If
    If Not MouseDown Then Exit Sub

        Picture1.Line (Xstart, Ystart)-(Xold, Yold), QBColor(13), B
        Picture1.Line (Xstart, Ystart)-(x, y), QBColor(13), B
        Xold = x
        Yold = y

   End Sub

Private Sub Picture1_MouseUp(Button As Integer, Shift As Integer, x As Single, y As Single)
   If FormLoading Then Exit Sub
    If Button <> 1 Then
      If Button = 2 Then
           ScaleNumber = ScaleNumber - 1
           If ScaleNumber < 0 Then ScaleNumber = 0
       MinX = SaveScale(0, ScaleNumber)
       MaxX = SaveScale(1, ScaleNumber)
       MinY = SaveScale(2, ScaleNumber)
       MaxY = SaveScale(3, ScaleNumber)
       Picture1_Redraw
      End If
      Exit Sub
    End If

     Picture1.Line (Xstart, Ystart)-(Xold, Yold), QBColor(13), B
     MouseDown = False
     Picture1.DrawMode = PicDMode
  If (Abs(Xstart - x) > Abs(MaxX - MinX) / 100) And (Abs(Ystart - y) > Abs(MaxY - MinY) / 100) Then

    If Ystart > y Then
      MaxY = Ystart
      MinY = y
    Else
      MaxY = y
      MinY = Ystart
    End If

    If Xstart > x Then
      MaxX = Xstart
      MinX = x
    Else
      MaxX = x
      MinX = Xstart
    End If

      ScaleNumber = ScaleNumber + 1
      If ScaleNumber > 100 Then ScaleNumber = 100
       SaveScale(0, ScaleNumber) = MinX
       SaveScale(1, ScaleNumber) = MaxX
       SaveScale(2, ScaleNumber) = MinY
       SaveScale(3, ScaleNumber) = MaxY
    Picture1_Redraw

  Else
   If Button = 1 Then

        If DrawingMode = "rel cm-1" Then
           x = 10000000# / (1 / Llaser * 10000000# - x)
        End If

        If DrawingMode = "cm-1" Then
           x = 1 / x * 10000000#
        End If
        If DrawingMode = "meV" Then
           x = 1239.7 / x * 1000#
        End If
        If DrawingMode = "rel meV" Then
           x = 1239.7 / (1239.7 / Llaser * 1000# - x) * 1000#
        End If

        If DrawingMode = "pixel" Then
          Cursor1 (Int(x))
        Else
          Cursor1 (Int(PixelWlen(x)))
        End If

   End If
  End If

End Sub

Public Sub Cursor1(ByVal NumPix As Integer)
  Dim PicMode
  Dim LenX, LenY
  Dim col
  Dim pos, dt, delt
     
     CrossSize = Picture1.Height / 50
  col = 13
  If NumPix < 1 Then NumPix = 1
  If NumPix > MaxPix Then NumPix = MaxPix

      PicMode = Picture1.DrawMode

      Picture1.DrawMode = vbXorPen
      
     
      LenX = CrossSize / Picture1.Width * (MaxX - MinX)
      LenY = CrossSize / Picture1.Height * (MaxY - MinY)
    
      If Not FirstCursor Then
        If Not BigCursor Then
          Picture1.Line (PlotX(CurPix) - LenX, GlobalDataY(CurPix))-(PlotX(CurPix) + LenX, GlobalDataY(CurPix)), QBColor(col)
          Picture1.Line (PlotX(CurPix), GlobalDataY(CurPix) - LenY)-(PlotX(CurPix), GlobalDataY(CurPix) + LenY), QBColor(col)
        Else
         Picture1.Line (MinX, GlobalDataY(CurPix))-(MaxX, GlobalDataY(CurPix)), QBColor(col)
         Picture1.Line (PlotX(CurPix), MinY - (MaxX - MinY))-(PlotX(CurPix), MaxY + (MaxX - MinY)), QBColor(col)

        End If
      Else
        FirstCursor = False
      End If
       If Not BigCursor Then
          Picture1.Line (PlotX(NumPix) - LenX, GlobalDataY(NumPix))-(PlotX(NumPix) + LenX, GlobalDataY(NumPix)), QBColor(col)
          Picture1.Line (PlotX(NumPix), GlobalDataY(NumPix) - LenY)-(PlotX(NumPix), GlobalDataY(NumPix) + LenY), QBColor(col)
       Else
         Picture1.Line (MinX, GlobalDataY(NumPix))-(MaxX, GlobalDataY(NumPix)), QBColor(col)
         Picture1.Line (PlotX(NumPix), MinY - (MaxX - MinY))-(PlotX(NumPix), MaxY + (MaxX - MinY)), QBColor(col)

       End If
       pos = Abs(WlenPixel(Lspectr, NumPix))
       
       RubyTemp = Val(txtTemp.Text)
       
       Pressure = PressT(Abs(pos), RubyTemp)
   
      
       frmInfo.lblXCur.Caption = "x: " + Format(PlotX(NumPix), "###0.000")
       frmInfo.lblYCur.Caption = "y: " + Format(GlobalDataY(NumPix), "###0.000")
       frmInfo.lblPixCur.Caption = "pixel: " + Format(NumPix, "###0.000")
       frmInfo.lblPress.Caption = "P = " + Format(Pressure, "###0.00") + " GPa"
       
       lblCurX.Caption = "X: " + Format(PlotX(NumPix), "###0.000")
       lblCurY.Caption = "Y: " + Format(GlobalDataY(NumPix), "###0.000")
       lblCurPix.Caption = "Pxl: " + Format(NumPix, "###0.00")
       lblPress.Caption = "P = " + Format(Pressure, "###0.00")

       
      CurPix = NumPix

      Picture1.DrawMode = PicMode

End Sub

Private Sub Picture1_KeyDown(KeyCode As Integer, Shift As Integer)

Dim bPix
Dim Refresh As Boolean
  Refresh = False
      
      If KeyCode = 37 Then
      If (DrawingMode = "cm-1") Or (DrawingMode = "meV") Then
        bPix = CurPix + 1
      Else
        bPix = CurPix - 1
      End If
        If bPix < 1 Then bPix = 1
         If bPix > MaxPix Then bPix = MaxPix
        Cursor1 (bPix)

      End If

       If KeyCode = 39 Then
        If (DrawingMode = "cm-1") Or (DrawingMode = "meV") Then
        bPix = CurPix - 1
      Else
        bPix = CurPix + 1
      End If
        If bPix < 1 Then bPix = 1
        If bPix > MaxPix Then bPix = MaxPix
        Cursor1 (bPix)

      End If
      If PlotX(CurPix) < MinX Then
        MinX = PlotX(CurPix)
        Refresh = True
      End If
      If PlotX(CurPix) > MaxX Then
        MaxX = PlotX(CurPix)
        Refresh = True
      End If
      If GlobalDataY(CurPix) < MinY Then
        MinY = GlobalDataY(CurPix)
        Refresh = True
      End If
       If GlobalDataY(CurPix) > MaxY Then
        MaxY = GlobalDataY(CurPix)
        Refresh = True
      End If

      If Refresh Then Picture1_Redraw


End Sub


Private Sub Form_Unload(Cancel As Integer)
    Dim Counter As Long
    Dim Msg, Style, Title, Response
      
    If tbrToolBar.Buttons("SaveFile").Enabled = True Then
        Msg = "Spectrum not saved. Save now? "   ' Define message.
        Style = vbYesNo + vbCritical + vbDefaultButton2 ' Define buttons.
        Title = "Save Data?"  ' Define title.


        If Not frmTCPIP.Connected Then Response = MsgBox(Msg, Style, Title) ', Help, Ctxt)

        If Response = vbYes Then    ' User chose Yes.
           mnuSaveFile_Click
        End If

    End If
    
    If MSComm1.PortOpen Then
       ' Wait 10 seconds for data to be transmitted.
       Counter = Timer + 10
       Do While MSComm1.OutBufferCount
          Ret = DoEvents()
          If Timer > Counter Then
             Select Case MsgBox("Data cannot be sent", 34)
                ' Cancel.
                Case 3
                   Cancel = True
                   Exit Sub
                ' Retry.
                Case 4
                   Counter = Timer + 10
                ' Ignore.
                Case 5
                   Exit Do
             End Select
          End If
       Loop

       MSComm1.PortOpen = 0
    End If

   
    End
End Sub

Private Sub imgConnected_Click()
    ' Call the mnuOpen_Click routine to toggle connect and disconnect
    Call mnuOpen_Click
End Sub

Private Sub imgNotConnected_Click()
    ' Call the mnuOpen_Click routine to toggle connect and disconnect
    Call mnuOpen_Click
End Sub


Private Sub mnuDial_Click()
    On Local Error Resume Next
    Dim Num1 As String
    Picture1.SetFocus
    SendString = " " ' This is init/query symbol for HR460

    ' Get a number from the user.
     SendString = InputBox$("Enter Command:", "Com", SendString)
    If SendString = "" Then Exit Sub
       Num1 = SendString + Chr$(13)
    'If SendString = "1" Then Num1 = Chr$(247) 'Set intelligent mode
    'If SendString = "2" Then Num1 = Chr$(248) + Chr$(222) ' Reboot
    'If SendString = "3" Then Num1 = "O2000" + Chr$(0)  ' Transfer to MAIN
    'If SendString = "0" Then Num1 = Chr$(13)
     'SendString = Num1
    ' Open the port if it isn't already open.
    If Not MSComm1.PortOpen Then
       mnuOpen_Click
       If Err Then Exit Sub
    End If



    ' Dial the number.
    MSComm1.Output = SendString
    ' & vbCrLf

    ' Start the port timer
    'StartTiming
End Sub

' Toggle the DTREnabled property.
Private Sub mnuDTREnable_Click()
    ' Toggle DTREnable property
    MSComm1.DTREnable = Not MSComm1.DTREnable
    mnuDTREnable.Checked = MSComm1.DTREnable
End Sub


Private Sub mnuFileExit_Click()
    ' Use Form_Unload since it has code to check for unsent data and an open log file.
     Picture1.SetFocus
    Form_Unload Ret
End Sub



' Toggle the DTREnable property to hang up the line.
Private Sub mnuHangup_Click()

    If Status = "CommDown" Then Exit Sub
     frmTerminal.SetFocus
    If Not MSComm1.PortOpen Then
       mnuOpen_Click
       If Err Then Exit Sub
    End If
    MSComm1.Output = "L"
    Action = "StopMotors"

End Sub

' Display the value of the CDHolding property.
Private Sub mnuHCD_Click()
    If MSComm1.CDHolding Then
        Temp = "True"
    Else
        Temp = "False"
    End If
    MsgBox "CDHolding = " + Temp
End Sub

' Display the value of the CTSHolding property.
Private Sub mnuHCTS_Click()
    If MSComm1.CTSHolding Then
        Temp = "True"
    Else
        Temp = "False"
    End If
    MsgBox "CTSHolding = " + Temp
End Sub

' Display the value of the DSRHolding property.
Private Sub mnuHDSR_Click()
    If MSComm1.DSRHolding Then
        Temp = "True"
    Else
        Temp = "False"
    End If
    MsgBox "DSRHolding = " + Temp
End Sub

Private Sub EnableMonoControl()

      mnuMoveHR460.Enabled = True
      mnuSlit.Enabled = True
      mnuGrating.Enabled = True
      mnuHangUp.Enabled = True
      posHR460.Enabled = True
      txtSlit.Enabled = True
      cmbGrating.Enabled = True

End Sub
Private Sub DisableMonoControl()

      mnuMoveHR460.Enabled = False
      mnuSlit.Enabled = False
      mnuGrating.Enabled = False
      posHR460.Enabled = False
      txtSlit.Enabled = False
      cmbGrating.Enabled = False

End Sub
Private Sub mnuInit_Click()
   Dim Msg, Style, Title, Help, Ctxt, Response
   Dim Ji As Integer
   Dim Now, StartT  As Single
   Dim CRLF As String
   
   CRLF = Chr(13) + Chr(10)
   
   InitMode = True
     
     On Error Resume Next
      frmTerminal.SetFocus

     If Not MSComm1.PortOpen Then
       mnuOpen_Click
       If Err Then
         Status = "CommDown"
         frmTerminal.Caption = frmTerminal.Caption + "      DEMO MODE"
         GoTo Errhandler
     
       End If
     End If
      EnableMonoControl


     InputString = ""
     SendString = " "
     MSComm1.Output = SendString
     Action = "Init_"
     StartT = Timer

    While ((Action <> "Initialized"))
       DoEvents
       Now = Timer
       


     If Now - StartT > 2 Then
        Msg = "Switch the power on  HR460 or correct the communication problem. Retry? "   ' Define message.
        Style = vbYesNo + vbCritical + vbDefaultButton2 ' Define buttons.
        Title = "Communication Problem with HR460..."  ' Define title.
         'Help = "DEMO.HLP"   ' Define Help file.
         'Ctxt = 1000 ' Define topic
         ' context.
         ' Display message.

        If Not frmTCPIP.Connected Then Response = MsgBox(Msg, Style, Title) ', Help, Ctxt)

        If Response = vbYes Then    ' User chose Yes.
             StartT = Timer
           ' Try  Reinitialize Spectrometer
            MSComm1.Output = Chr(248) + Chr(222)
            Delay (0.5)
             MSComm1.Output = SendString
        Else    ' User chose No.
        'Closing connection with serial port
        ' Use Form_Unload since it has code to check for unsent data and an open log file.
           'Form_Unload Ret
           If Not frmTCPIP.Connected Then MsgBox " Closing serial port - try to open it later"
           If MSComm1.PortOpen Then
               mnuOpen_Click
               If Err Then Exit Sub
           End If
          Action = "Initialized"
          Status = "CommDown"
          
         frmTerminal.Caption = frmTerminal.Caption + "      DEMO MODE"
        
     
 
        End If

      End If

    Wend


    If Status = "Hardinit" Then
      Title = "HR460 Power Shutdown Warning!"
      Style = vbYesNo + vbCritical + vbDefaultButton1 ' Define buttons.
      Msg = "You probably need hard initialization after power shuttdown. If not initialized, spectrometer may have wrong wavelength setting.   Initialize?"
      If Not frmTCPIP.Connected Then Response = MsgBox(Msg, Style, Title) ', Help, Ctxt)

        If Response = vbYes Then    ' User chose Yes.
             StartT = Timer
             MSComm1.Output = "A"
             Action = "InitA"
             StartT = Timer

             While Action <> "InitializedA"
               DoEvents
               Now = Timer
               If Now - Timer > 5 Then
                 If Not frmTCPIP.Connected Then MsgBox "Probable hardware problems. Quitting the program. "
                 Form_Unload Ret

               End If
             Wend
            DefaultConfig (ConfigFile)

         Else    ' User chose No.
          If CheckConfig(ConfigFile) Then
             ReadConfig (ConfigFile)
          Else
            CreateDefaultConfig
            Wlen = Lspectr

          End If

          If Status = "CommDown" Then

          Else

           Title = "Set HR460 position to disk value."
           Style = vbYesNo + vbCritical + vbDefaultButton2 ' Define buttons.
           Msg = "You may now set spectrometer position to the value saved to disk file." _
           + CRLF + "!!!! Remember, this action is not safe !!!! " _
           + CRLF + "Set spectrometer position to " + Format(Lspectr, "####0.000") + " nm?"
           If Not frmTCPIP.Connected Then Response = MsgBox(Msg, Style, Title) ', Help, Ctxt)
            If Response = vbYes Then
              Msg = "G0," + Format(Lspectr * NMtoStep * GratingSp / Gr1200, "########") + Chr(13)
              MSComm1.Output = Msg
              Action = "SetPos"
              While Action <> "PositionSet"
                DoEvents
                Now = Timer
                If Now - Timer > 30 Then
                  If Not frmTCPIP.Connected Then MsgBox "Probable hardware problems. Quitting the program. "
                  Form_Unload Ret
                End If
              Wend
              Status = "Softinit"
            End If
           End If
          End If
     End If


Errhandler:


   If Status <> "CommDown" Then
    mnuReadMono1_Click
    If Abs(Wlen - Lspectr) > 0.002 Then
      If Status = "HardinitDone" Then
   
      End If
      If Status = "SoftinitDone" Then
     
      End If
      MsgBox "Disk position " + Format(Lspectr, "###0.000") + "  not equal to HR460 position " + Format(Wlen, "###0.000")
    End If
   Else
    If CheckConfig(ConfigFile) Then
             ReadConfig (ConfigFile)
             Wlen = Lspectr
          Else
           CreateDefaultConfig
           Wlen = Lspectr
          End If
   End If
    posHR460.Text = Format(Wlen, "###0.00")

    cmbGrating.Text = Format(GratingSp, "####")
    If Status <> "CommDown" Then
          mnuReadSlit0_Click
          mnuReadSlit0_Click
    Else
'DisableMonoControl
 '     mnuHangUp.Enabled = False
 '     posHR460.Enabled = True
 '     cmbGrating.Enabled = True


    End If

    txtSlit.Text = Format(Slit, "###0.0")
    SlitMax = 4000
    SlitMin = 0
    Wlenmax = 1300 * Gr1200 / GratingSp
    Wlenmin = -10 * Gr1200 / GratingSp
    Lspectr = Wlen
     Fi0 = Ang / 2 + Arcsin(Lspectr * (0.000001) / 2 * GratingSp / Cos(Ang / 2))

       For Ji = 0 To MaxPix
        Fi1 = Fi0 + Atn((LCenter - Ji) * OMAEl / (FocalSp) _
        * (1 - (LCenter - Ji) * OMAEl / (FocalSp) * Tan(CorAng)))
        CalX(Ji) = (Sin(Fi1) + Sin(Fi0 - Ang)) / GratingSp * (1000000#)
        PlotX(Ji) = CalX(Ji)
       Next Ji


       MaxX = CalX(MaxPix)
       MinX = CalX(1)

       MinY = 0
       MaxY = 70000

       DrawingMode = "nm"

       If Status = "CommDown" Then
         NeonLines
      Randomize (100)
      For Ji = 1 To MaxPix
        GlobalDataY(Ji) = DataNeon(Ji) + 200 + Rnd * 200
       Next Ji
         RubyLine 3000, 694.34, 0.25
         RubyLine 2000, 693.34, 0.25

         btnAutoXY_Click
       End If

       txtMinY = Format(MinY, "####0.00")
       txtMaxY = Format(MaxY, "####0.00")
       txtMinX = Format(MinX, "####0.00")
       txtMaxX = Format(MaxX, "####0.00")
       ScaleNumber = 0
       SaveScale(0, 0) = MinX
       SaveScale(1, 0) = MaxX
       SaveScale(2, 0) = MinY
       SaveScale(3, 0) = MaxY

End Sub

' This procedure sets the InputLen property, which determines how
' many bytes of data are read each time Input is used
' to retreive data from the input buffer.
' Setting InputLen to 0 specifies that
' the entire contents of the buffer should be read.
Private Sub mnuInputLen_Click()
    On Error Resume Next

    Temp = InputBox$("Enter New InputLen:", "InputLen", Str$(MSComm1.InputLen))
    If Len(Temp) Then
        MSComm1.InputLen = Val(Temp)
        If Err Then MsgBox Error$, 48
    End If
End Sub

Private Sub posHR460_KeyUp(KeyCode As Integer, Shift As Integer)

      If KeyCode = 13 Then
        Picture1.SetFocus
        mnuMoveHR460_Click
      End If

End Sub


Public Sub mnuReadMono1_Click()
   Dim pos(3) As Double
   Dim iR As Integer

    
  Select Case OperationMode
   Case ClientM
         frmTCPCl.ReadAllowed = True
  
   Case Else
      If Status = "CommDown" Then
      Else
         If CheckConfig(ConfigFile) Then
           ReadConfig (ConfigFile)
         End If
        ' read current position


        For iR = 1 To 3
         InputString = ""
         SendString = "H0" + Chr$(13)
         
         If Not MSComm1.PortOpen Then
           mnuOpen_Click
           If Err Then Exit Sub
         End If
         
         MSComm1.Output = SendString
         Action = "ReadMono1"

         While Action <> "PosMono1"
          DoEvents
         Wend

         pos(iR) = Wlen
      
        Next iR

        If pos(3) = pos(2) Then
           Wlen = pos(3)
        Else
         If pos(2) = pos(1) Then
             Wlen = pos(2)
         Else
            If pos(3) = pos(1) Then
              Wlen = pos(3)
            Else
           
            End
         End If
        End If
       End If
      End If '"CommDown"
 End Select
    posHR460.Text = Format(Wlen, "###0.00")


End Sub
Public Sub mnuMoveHR460_Click()
   ' for debugging some parameters to work with
 Dim Vbuf, Sbuf As String
 Dim Ii As Integer
 Dim Msg, Style, Title, Help, Ctxt, Response
 
      Picture1.SetFocus

      If tbrToolBar.Buttons("SaveFile").Enabled = True Then
        Msg = "Spectrum not saved. Save now? "   ' Define message.
        Style = vbYesNo + vbCritical + vbDefaultButton2 ' Define buttons.
        Title = "Save Data?"  ' Define title.


        If Not frmTCPIP.Connected Then Response = MsgBox(Msg, Style, Title) ', Help, Ctxt)

        If Response = vbYes Then    ' User chose Yes.
           mnuSaveFile_Click
        End If

        tbrToolBar.Buttons("SaveFile").Enabled = False
        For Ii = 1 To MaxPix
          GlobalDataY(Ii) = 0
        Next Ii
    End If

     Wlento = Val(posHR460.Text)

     DisableMonoControl
     mnuReadMono1_Click

  If Not frmGlue.GlueOn Then
     Wlenmax = 1300 * Gr1200 / GratingSp
     Wlenmin = -20 * Gr1200 / GratingSp
     Vbuf = InputBox$("Move to (nm):", "Move", Format(Wlento, "###0.00"))
     If Len(Vbuf) > 0 Then
     Wlento = Val(Vbuf)
     End If
     Sbuf = Format(Wlenmin, "###0.00") + " <(Wavelength ?  nm):< " + Format(Wlenmax, "###0.00")
     While (Wlento > Wlenmax) Or (Wlento < Wlenmin)
      Vbuf = (InputBox$(Sbuf, "Move", Format(Wlen, "###0.00")))
      If Len(Vbuf) > 0 Then
        Wlento = Val(Vbuf)
      End If
     Wend
  End If

     If Wlento < Wlen Then
      If Wlento > 45 * Gr1200 / GratingSp Then
        MoveHR460 (Wlento - 45 * Gr1200 / GratingSp)
        Delay (0.5)
        MoveHR460 (Wlento)
      Else
         MoveHR460 (Wlento)
      End If
     Else
        MoveHR460 (Wlento)
     End If
 
   Cursor1 (CurPix)
    EnableMonoControl
    UpdateNeon
End Sub

Public Sub MoveHR460(ByVal Wlento_mv As Double)
   Dim Nstep, Ji As Long
   Dim MoveStep
   Dim STime

     If (Wlento_mv < Wlenmin) Or (Wlento_mv > Wlenmax) Then
        Error = "MonoOutofRange"
     Else
     
       StepcountTo = (Wlento_mv - Wlen) * (NMtoStep * GratingSp / Gr1200)
       
       Select Case OperationMode
       Case ClientM
         frmTCPCl.ReadAllowed = True
  
       Case Else
          
         If Status = "CommDown" Then
            MoveStep = 1 / (NMtoStep * GratingSp / Gr1200)
            Nstep = Abs(Wlento_mv - Wlen) / MoveStep
            STime = Timer
            For Ji = 1 To Int(Nstep)
              Wlen = Wlen + MoveStep * (Wlento_mv - Wlen) / Abs(Wlento_mv - Wlen)
              If Timer - STime > 0.1 Then
                 posHR460.Text = Format(Wlen, "####.#0")
                 DoEvents
                 'Delay (0.003)
                 STime = Timer
                 Action = "CanRead"
                If (frmTCPIP.Connected) Then
                   frmTCPIP.sktWinSpec(frmTCPIP.CurIndex).SendData Action & ":"
                   frmTCPIP.sktWinSpec(frmTCPIP.CurIndex).SendData Format(Wlen, "####.##0") & Chr(13) & Chr(10)
                End If
              End If
   
              
            '-----Debugging TCP
             If Ji = Int(Nstep) Then
                 Action = "Stopped"
                 posHR460.Text = Format(Wlen, "####.#0")
                 DoEvents
             End If
             
            
            Next Ji

            tbrToolBar.Buttons("SaveFile").Enabled = True
    
        Else
          SendString = "F0," + Str(StepcountTo) + Chr$(13)
          MSComm1.Output = SendString
          Action = "CanRead"

          MSComm1.Output = "E"


          While Action <> "Stopped"
            DoEvents
          Wend
          'Wlen = Wlento_mv
          'posHR460.Text = Format(Wlen, "###0.00")
           mnuReadMono1_Click
         End If
         Lspectr = Wlen
         SaveConfig (ConfigFile)
         Recalibrate
        End Select
     End If


End Sub



Public Sub Recalibrate()
     Dim Ji
       Dim Fi0, Fi1 As Double
    Fi0 = Ang / 2 + Arcsin(Lspectr * (0.000001) / 2 * GratingSp / Cos(Ang / 2))

       For Ji = 1 To MaxPix
        Fi1 = Fi0 + Atn((LCenter - Ji) * OMAEl / (FocalSp) _
        * (1 - (LCenter - Ji) * OMAEl / (FocalSp) * Tan(CorAng)))
        CalX(Ji) = (Sin(Fi1) + Sin(Fi0 - Ang)) / GratingSp * (1000000#)

       Next Ji
End Sub
Public Function WlenPixel(ByVal Ls As Double, ByVal Pix As Integer) As Double
       Dim Fi0, Fi1 As Double
    Fi0 = Ang / 2 + Arcsin(Ls * (0.000001) / 2 * GratingSp / Cos(Ang / 2))
    Fi1 = Fi0 + Atn((LCenter - Pix) * OMAEl / (FocalSp) _
        * (1 - (LCenter - Pix) * OMAEl / (FocalSp) * Tan(CorAng)))
        WlenPixel = (Sin(Fi1) + Sin(Fi0 - Ang)) / GratingSp * (1000000#)

End Function

Public Function PixelWlen(ByVal WL As Double) As Double
   Dim Fi0, Fi1 As Double
       Fi0 = Ang / 2 + Arcsin(Lspectr * (0.000001) / 2 * GratingSp / Cos(Ang / 2))

        Fi1 = Arcsin(WL * GratingSp / 1000000# - Sin(Fi0 - Ang))

         PixelWlen = (LCenter - Tan((Fi1 - Fi0)) / OMAEl * FocalSp)
         PixelWlen = (LCenter - Tan((Fi1 - Fi0) / _
         (1 - (LCenter - PixelWlen) * OMAEl / (FocalSp) * Tan(CorAng))) / OMAEl * FocalSp)

End Function
Public Function LcentPixel(ByVal WL As Double, ByVal Pix As Integer) As Double
   Dim Fi0, Fi1, delFi, sumFi As Double

       delFi = Atn((LCenter - Pix) / FocalSp * OMAEl * _
       (1 - (LCenter - Pix) * OMAEl / (FocalSp) * Tan(CorAng)))

       sumFi = Ang + 2 * Arcsin((WL * GratingSp / 1000000#) / (2 * Cos((delFi + Ang) / 2)))

       Fi0 = (sumFi - delFi) / 2


      LcentPixel = Sin(Fi0 - Ang / 2) * Cos(Ang / 2) * 2 / (0.000001 * GratingSp)
      

End Function

Private Sub mnuGrating_Click()


 Dim Vbuf, Gr1, Gr2 As String
 Dim Ii As Integer

    If Status = "CommDown" Then

       GratingSp = Val(cmbGrating.Text)


       If GratingSp = fGratingSp(1) Then Ii = 1

       If GratingSp = fGratingSp(2) Then Ii = 2

         Llaser = fLlaser(Ii)
         LCenter = fLCenter(Ii)

         Ang = fAng(Ii)
         FocalSp = fFocalSp(Ii)
         OMAEl = fOMAEl(Ii)
         CorAng = fCorAng(Ii)
         NMtoStep = fNMtoStep(Ii)
         Lspectr = fLspectr(Ii)
         Slit = fSlit(Ii)
         ExposureTime = fExposureTime(Ii)
         Accumulations = fAccumulations(Ii)


        posHR460.Text = Format(Lspectr, "###0.00")
        txtTime.Text = Format(ExposureTime, "###0.00")

       SaveConfig (ConfigFile)
        Recalibrate
        Xscale
       btnAutoXY_Click
      Exit Sub
    Else
     Picture1.SetFocus

      DisableMonoControl
     GratingTo = Val(cmbGrating.Text)
     If CheckConfig(ConfigFile) Then
       ReadConfig (ConfigFile)
     End If
     

   ' read current position



     Vbuf = InputBox$("Switch Grating to", "Grating", Format(GratingTo, "###0"))

     GratingTo = Val(Vbuf)
     Gr1 = Format(Grating1, "####")
      Gr2 = Format(Grating2, "####")
     While (GratingTo <> Grating2) And (GratingTo <> Grating1)
       Vbuf = InputBox$("Switch Grating to (only) " & Gr1 & _
       " or " & Gr2 & " g/mm:", "Grating", Format(Val(Vbuf), "###0"))
        GratingTo = Val(Vbuf)
     Wend





      If Not MSComm1.PortOpen Then
       mnuOpen_Click
       If Err Then Exit Sub
       End If



        If GratingTo = Grating2 Then
          MSComm1.Output = "a0" + Chr(13)
          Action = "ChangeGrating"

           lblGrating.Caption = "Changing.."
         End If

       If GratingTo = Grating1 Then
          MSComm1.Output = "b0" + Chr(13)
          Action = "ChangeGrating"

           lblGrating.Caption = "Changing.."
        End If

        While Action <> "GratingChanged"
          DoEvents
        Wend

         GratingSp = GratingTo


         cmbGrating.Text = Format(GratingSp, "####")
         lblGrating.Caption = "Grating"




       If GratingSp = fGratingSp(1) Then Ii = 1

       If GratingSp = fGratingSp(2) Then Ii = 2

         Llaser = fLlaser(Ii)
         LCenter = fLCenter(Ii)

         Ang = fAng(Ii)
         FocalSp = fFocalSp(Ii)
         OMAEl = fOMAEl(Ii)
         CorAng = fCorAng(Ii)
         NMtoStep = fNMtoStep(Ii)
         Lspectr = fLspectr(Ii)
         Slit = fSlit(Ii)
         ExposureTime = fExposureTime(Ii)
         Accumulations = fAccumulations(Ii)

         txtTime.Text = Format(ExposureTime, "###0.00")


        SaveConfig (ConfigFile)
        Wlento = Lspectr



      mnuReadMono1_Click

     If Wlento < Wlen Then
      If Wlento > 45 * Gr1200 / GratingSp Then
        MoveHR460 (Wlento - 45 * Gr1200 / GratingSp)
        Delay (1)
        MoveHR460 (Wlento)
      Else
         MoveHR460 (Wlento)
      End If
     Else
        MoveHR460 (Wlento)
     End If

     SaveConfig (ConfigFile)
      EnableMonoControl

   End If
     End Sub


Public Sub ChangeGrating(ByVal GratingTo_mv As Double)

  If (GratingTo_mv <> Grating2) And (GratingTo_mv <> Grating1) Then
    Error = "InvalidGrating"
  Else
  If CheckConfig(ConfigFile) Then
   ReadConfig (ConfigFile)
  End If

      If Not MSComm1.PortOpen Then
       mnuOpen_Click
       If Err Then Exit Sub
       End If



        If GratingTo_mv = Grating2 Then
          MSComm1.Output = "a0" + Chr(13)
          Action = "ChangeGrating"
          lblGrating.Caption = "Changing..."
         End If

       If GratingTo_mv = Grating1 Then
          MSComm1.Output = "b0" + Chr(13)
          Action = "ChangeGrating"
           lblGrating.Caption = "Changing..."
        End If

        While Action <> "GratingChanged"
          DoEvents
        Wend
         GratingSp = GratingTo_mv

         lblGrating.Caption = "Grating"
         cmbGrating.Text = Format(GratingSp, "####")

    Wlento = Lspectr

   SaveConfig (ConfigFile)

    mnuReadMono1_Click

    If Wlento < Wlen Then
      If Wlento > 45 * Gr1200 / GratingSp Then
        MoveHR460 (Wlento - 45 * Gr1200 / GratingSp)
        Delay (1)
        MoveHR460 (Wlento)
      Else
         MoveHR460 (Wlento)
      End If
    Else
        MoveHR460 (Wlento)
    End If


       SaveConfig (ConfigFile)

  End If
     End Sub



Private Sub mnuProperties_Click()
  ' Show the CommPort properties form

  frmProperties.Show vbModal

End Sub

' Toggles the state of the port (open or closed).
Private Sub mnuOpen_Click()
    On Error Resume Next
    Dim OpenFlag

    Status = "CommDown"
   MSComm1.PortOpen = Not MSComm1.PortOpen
    If Err Then If Not frmTCPIP.Connected Then MsgBox Error$, 48

    OpenFlag = MSComm1.PortOpen

    mnuOpen.Checked = OpenFlag
    'mnuSendText.Enabled = OpenFlag
    'tbrToolBar.Buttons("TransmitTextFile").Enabled = OpenFlag

    If MSComm1.PortOpen Then
        ' Enable dial button and menu item
        'mnuDial.Enabled = True
        'tbrToolBar.Buttons("DialPhoneNumber").Enabled = True

        ' Enable hang up button and menu item
        'mnuHangUp.Enabled = True
        'tbrToolBar.Buttons("HangUpPhone").Enabled = True

        imgConnected.ZOrder
        sbrStatus.Panels("Settings").Text = "Settings: " & MSComm1.Settings
        StartTiming
    Else
        ' Enable dial button and menu item
        mnuDial.Enabled = True
        'tbrToolBar.Buttons("DialPhoneNumber").Enabled = True

        ' Disable hang up button and menu item
        'mnuHangUp.Enabled = False
        'tbrToolBar.Buttons("HangUpPhone").Enabled = False

        imgNotConnected.ZOrder
        sbrStatus.Panels("Settings").Text = "Settings: "
        StopTiming
    End If

End Sub



' This procedure sets the ParityReplace property, which holds the
' character that will replace any incorrect characters
' that are received because of a parity error.
Private Sub mnuParRep_Click()
    On Error Resume Next

    Temp = InputBox$("Enter Replace Character", "ParityReplace", frmTerminal.MSComm1.ParityReplace)
    frmTerminal.MSComm1.ParityReplace = Left$(Temp, 1)
    If Err Then MsgBox Error$, 48
End Sub

Public Sub mnuReadGrating_Click()

   cmbGrating.Text = Format(GratingSp, "####")

End Sub



' This procedure sets the RThreshold property, which determines
' how many bytes can arrive at the receive buffer before the OnComm
' event is triggered and the CommEvent property is set to comEvReceive.
Private Sub mnuRThreshold_Click()
    On Error Resume Next

    Temp = InputBox$("Enter New RThreshold:", "RThreshold", Str$(MSComm1.RThreshold))
    If Len(Temp) Then
        MSComm1.RThreshold = Val(Temp)
        If Err Then MsgBox Error$, 48
    End If

End Sub




Private Sub mnuServerActivate_Click()

    If mnuServerActivate.Checked Then
       DoEvents
    Else
      If frmTCPIP.Visible Then
        DoEvents
      Else
       Load frmTCPIP
       frmTCPIP.Show
      End If
    End If
End Sub




Private Sub txtMaxX_KeyUp(KeyCode As Integer, Shift As Integer)
    If KeyCode = 13 Then
      Picture1.SetFocus
      MaxX = Val(txtMaxX)
      Picture1_Redraw
   End If
End Sub

Private Sub txtMinX_KeyUp(KeyCode As Integer, Shift As Integer)
  If KeyCode = 13 Then
    Picture1.SetFocus
      MinX = Val(txtMinX)
      Picture1_Redraw
   End If
End Sub

Private Sub txtSlit_KeyUp(KeyCode As Integer, Shift As Integer)

      If KeyCode = 13 Then
        Picture1.SetFocus
        mnuSlit_Click
      End If
End Sub

Public Sub mnuReadSlit0_Click()

    
  Select Case OperationMode
   Case ClientM
         frmTCPCl.ReadAllowed = True
  
   Case Else
    If Status = "CommDown" Then
    Else

      InputString = ""
      SendString = "j0,0" + Chr$(13)

      If Not MSComm1.PortOpen Then
        mnuOpen_Click
        If Err Then Exit Sub
      End If


      MSComm1.Output = SendString
      Action = "ReadSlit0"

      While Action <> "PosSlit0"
        DoEvents
      Wend
      txtSlit.Text = Format(Slit, "###0.00")
      SaveConfig (ConfigFile)
    End If
  End Select
End Sub

Private Sub mnuSlit_Click()
Dim Vbuf, Sbuf As String

 
     Picture1.SetFocus
     SlitTo = Val(txtSlit.Text)

     DisableMonoControl
    mnuReadSlit0_Click



      Vbuf = InputBox$("Set slit (mkm):", "Slit", Format(SlitTo, "###0.0"))
     If Len(Vbuf) > 0 Then
     SlitTo = Val(Vbuf)
     End If
     Sbuf = Str(SlitMin) + " <(Wavelength ?  nm):< " + Str(SlitMax)
     While (SlitTo > SlitMax) Or (SlitTo < SlitMin)
      Vbuf = (InputBox$(Sbuf, "Move", Format(Slit, "###0.0")))
      If Len(Vbuf) > 0 Then
        SlitTo = Val(Vbuf)
      End If
     Wend
      
      MoveSlit0 (SlitTo)
      
      EnableMonoControl
End Sub

Public Sub MoveSlit0(ByVal SlitTo_mv As Double)

Dim Ji, NSlit As Integer
Dim STime

     If (SlitTo_mv < SlitMin) Or (SlitTo_mv > SlitMax) Then
        Error = "SlitOutOfRange"
     Else

         
      Select Case OperationMode
      Case ClientM
         frmTCPCl.ReadAllowed = True
  
      Case Else
       If Status = "CommDown" Then
        
         
            STime = Timer
            NSlit = (Int(SlitTo_mv - Slit))
            For Ji = 1 To Abs(NSlit)
              Slit = Slit + NSlit / Abs(NSlit)
                    Delay (0.0015)
              If Timer - STime > 0.1 Then
                 txtSlit.Text = Format(Slit, "####")
              
                 
                 DoEvents
             
                 STime = Timer
                 Action = "CanReadSlit"
                If (frmTCPIP.Connected) Then
                   frmTCPIP.sktWinSpec(frmTCPIP.CurIndex).SendData Action & ":"
                   frmTCPIP.sktWinSpec(frmTCPIP.CurIndex).SendData Format(Slit, "####.##0") & Chr(13) & Chr(10)
                End If
              End If
   
              
            '-----Debugging TCP
             If Ji = Abs(NSlit) Then
                 Action = "StoppedSlit"
                 txtSlit.Text = Format(Slit, "####.#0")
                 DoEvents
             End If
             
            
            Next Ji

       
       Else
         StepcountTo = (SlitTo_mv - Slit)
         SendString = "k0,0," + Str(StepcountTo) + Chr$(13)
         MSComm1.Output = SendString
         Action = "CanReadSlit"

         MSComm1.Output = "E"

         While Action <> "StoppedSlit"
           DoEvents
         Wend
        End If
      End Select
    End If
End Sub


' The OnComm event is used for trapping communications events and errors.
Private Static Sub MSComm1_OnComm()
    Dim EVMsg$
    Dim ERMsg$
    Dim Sbuf, Vbuf
    Dim PauseTime, Start
    ' Branch according to the CommEvent property.
    Select Case MSComm1.CommEvent
        ' Event messages.
        Case comEvReceive
            Dim Buffer As Variant
            Buffer = MSComm1.Input
            InputString = StrConv(Buffer, vbUnicode)
            'Debug.Print "Receive - " & StrConv(Buffer, vbUnicode); Action
            'ShowData txtTerm, (StrConv(Buffer, vbUnicode))
            'ShowData txtTerm, (Action)

            If Action = "InitA" Then
                If InStr(1, InputString, "o") > 0 Then
                     InputString = ""
                     Action = "InitializedA"
                     Status = "HardinitDone"
                End If
            End If

             If Action = "SetPos" Then
                If InStr(1, InputString, "o") > 0 Then
                     InputString = ""
                     Action = "PositionSet"
                     Status = "SoftinitDone"
                End If
            End If


            If Action = "InitB" Then
                If Left(InputString, 1) = "*" Then
                     InputString = ""
                     MSComm1.Output = " "
                     Action = "Initialized"
                     Status = "Hardinit"
                End If
            End If

            If Action = "Init_" Then
                  If Left(InputString, 1) = "*" Then
                     InputString = ""
                     Action = "Init*"
                     MSComm1.Output = Chr$(247)
                  End If
                   If Left(InputString, 1) = "B" Then
                     InputString = ""
                     Action = "InitB"
                     SendString = "O2000" + Chr$(0)
                     MSComm1.Output = SendString
                   End If

                   If Left(InputString, 1) = "F" Then
                     InputString = ""
                     Action = "Initialized"
                     Status = "Ready"
                  End If
            End If


            If Action = "InitEq" Then
                 If Left(InputString, 1) = "B" Then
                     InputString = ""
                    Action = "InitB"
                     SendString = "O2000" + Chr$(0)
                     MSComm1.Output = SendString

                  Else
                    InputString = ""
                     Action = "Reboot"
                     MSComm1.Output = Chr$(248) + Chr$(222)
                     End If
             End If

            If Action = "Init*" Then
                 If InStr(InputString, "=") > 0 Then
                     InputString = ""
                     Action = "InitEq"
                     MSComm1.Output = " "
                 End If
            End If



            If Action = "ReadMono1" Then
                Sbuf = InputString
               If InputString <> "o" Then
                 If InStr(1, InputString, "o") = 1 Then
                     Sbuf = Right(Sbuf, Len(Sbuf) - 1)
                 End If
                 Stepcount = Val(Sbuf)
                 Wlen = Stepcount / (NMtoStep * GratingSp / Gr1200)
                 Action = "PosMono1"
               End If
            End If




            If Action = "Moving" Then
               If ((InStr(InputString, "z") = 0) And (InStr(InputString, "q") = 0) _
               And (InputString <> "o")) Then
                  Sbuf = InputString
                  If InputString <> "o" Then
                   If InStr(1, InputString, "o") = 1 Then
                    Sbuf = Right(Sbuf, Len(Sbuf) - 1)
                   End If
                  End If
                  WlenMove = Val(Sbuf) / (NMtoStep * GratingSp / Gr1200)
                  posHR460.Text = Format(WlenMove, "###0.00")
                  MSComm1.Output = "E"
                  Action = "CanRead"
               End If
               InputString = ""
            End If

            If Action = "CanRead" Then
               If InStr(InputString, "q") > 0 Then
                  MSComm1.Output = "H0" + Chr$(13)
                  Action = "Moving"
                  InputString = ""
               End If
               If (InStr(InputString, "z") > 0) Then
                   Action = "Stopped"
                   InputString = ""
               End If
            End If




             If Action = "ReadSlit0" Then
               If InputString <> "o" Then
                 Sbuf = InputString
                 If InStr(1, InputString, "o") = 1 Then
                   Sbuf = Right(Sbuf, Len(Sbuf) - 1)
                 End If
                 Slit = Val(Sbuf)

                 Action = "PosSlit0"
               End If
            End If




            If Action = "MovingSlit" Then
               If ((InStr(InputString, "z") = 0) And (InStr(InputString, "q") = 0) _
               And (InputString <> "o")) Then
                   Sbuf = InputString
                   If InStr(1, InputString, "o") = 1 Then
                     Sbuf = Right(Sbuf, Len(Sbuf) - 1)
                   End If

                  SlitMove = Val(Sbuf)
                  txtSlit.Text = Format(SlitMove, "###0.0")
                  MSComm1.Output = "E"
                  Action = "CanReadSlit"
               End If
               InputString = ""
            End If

            If Action = "CanReadSlit" Then
               If InStr(InputString, "q") > 0 Then
                  MSComm1.Output = "j0,0" + Chr$(13)
                  Action = "MovingSlit"
                  InputString = ""
               End If
               If (InStr(InputString, "z") > 0) Then
                   Action = "StoppedSlit"
                   txtSlit.Text = Format(SlitTo, "###0.0")
                   Slit = SlitTo
                   InputString = ""
               End If
            End If



             If Action = "ChangeGrating" Then
               If InStr(InputString, "z") > 0 Then

                Action = "GratingChanged"
               End If

               If (InStr(InputString, "o") > 0) And (InStr(InputString, "z") = 0) Then

                  MSComm1.Output = "l"

               End If

            End If



            '-----Debugging TCP
            If (frmTCPIP.Connected) And (Not (ConnectLinux)) Then
             frmTCPIP.sktWinSpec(frmTCPIP.CurIndex).SendData Action + ":"
             frmTCPIP.sktWinSpec(frmTCPIP.CurIndex).SendData StrConv(Buffer, vbUnicode) + Chr(13) + Chr(10)


            End If


        Case comEvSend
        Case comEvCTS
            EVMsg$ = "Change in CTS Detected"
        Case comEvDSR
            EVMsg$ = "Change in DSR Detected"
        Case comEvCD
            EVMsg$ = "Change in CD Detected"
        Case comEvRing
            EVMsg$ = "The Phone is Ringing"
        Case comEvEOF
            EVMsg$ = "End of File Detected"

        ' Error messages.
        Case comBreak
            ERMsg$ = "Break Received"
        Case comCDTO
            ERMsg$ = "Carrier Detect Timeout"
        Case comCTSTO
            ERMsg$ = "CTS Timeout"
        Case comDCB
            ERMsg$ = "Error retrieving DCB"
        Case comDSRTO
            ERMsg$ = "DSR Timeout"
        Case comFrame
            ERMsg$ = "Framing Error"
        Case comOverrun
            ERMsg$ = "Overrun Error"
        Case comRxOver
            ERMsg$ = "Receive Buffer Overflow"
        Case comRxParity
            ERMsg$ = "Parity Error"
        Case comTxFull
            ERMsg$ = "Transmit Buffer Full"
        Case Else
            ERMsg$ = "Unknown error or event"
    End Select

    If Len(EVMsg$) Then
        ' Display event messages in the status bar.
        sbrStatus.Panels("Status").Text = "Status: " & EVMsg$

        ' Enable timer so that the message in the status bar
        ' is cleared after 2 seconds
        Timer2.Enabled = True

    ElseIf Len(ERMsg$) Then
        ' Display event messages in the status bar.
        sbrStatus.Panels("Status").Text = "Status: " & ERMsg$

        ' Display error messages in an alert message box.
        Beep
        Ret = MsgBox(ERMsg$, 1, "Click Cancel to quit, OK to ignore.")

        ' If the user clicks Cancel (2)...
        If Ret = 2 Then
            MSComm1.PortOpen = False    ' Close the port and quit.
        End If

        ' Enable timer so that the message in the status bar
        ' is cleared after 2 seconds
        Timer2.Enabled = True
    End If
End Sub

Private Sub mnuSendText_Click()
   Dim hSend, BSize, LF&

   On Error Resume Next

   mnuSendText.Enabled = False
   tbrToolBar.Buttons("TransmitTextFile").Enabled = False

   ' Get the text filename from the user.
   OpenLog.DialogTitle = "Send Text File"
   OpenLog.Filter = "Text Files (*.TXT)|*.txt|All Files (*.*)|*.*"
   Do
      OpenLog.CancelError = True
      OpenLog.FileName = ""
      OpenLog.ShowOpen
      If Err = cdlCancel Then
        mnuSendText.Enabled = True
        tbrToolBar.Buttons("TransmitTextFile").Enabled = True
        Exit Sub
      End If
      Temp = OpenLog.FileName

      ' If the file doesn't exist, go back.
      Ret = Len(Dir$(Temp))
      If Err Then
         MsgBox Error$, 48
         mnuSendText.Enabled = True
         tbrToolBar.Buttons("TransmitTextFile").Enabled = True
         Exit Sub
      End If
      If Ret Then
         Exit Do
      Else
         MsgBox Temp + " not found!", 48
      End If
   Loop

   ' Open the log file.
   hSend = FreeFile
   Open Temp For Binary Access Read As hSend
   If Err Then
      MsgBox Error$, 48
   Else
      ' Display the Cancel dialog box.
      CancelSend = False
      frmCancelSend.Label1.Caption = "Transmitting Text File - " + Temp
      frmCancelSend.Show

      ' Read the file in blocks the size of the transmit buffer.
      BSize = MSComm1.OutBufferSize
      LF& = LOF(hSend)
      Do Until EOF(hSend) Or CancelSend
         ' Don't read too much at the end.
         If LF& - Loc(hSend) <= BSize Then
            BSize = LF& - Loc(hSend) + 1
         End If

         ' Read a block of data.
         Temp = Space$(BSize)
         Get hSend, , Temp

         ' Transmit the block.
         MSComm1.Output = Temp
         If Err Then
            MsgBox Error$, 48
            Exit Do
         End If

         ' Wait for all the data to be sent.
         Do
            Ret = DoEvents()
         Loop Until MSComm1.OutBufferCount = 0 Or CancelSend
      Loop
   End If

   Close hSend
   mnuSendText.Enabled = True
   tbrToolBar.Buttons("TransmitTextFile").Enabled = True
   CancelSend = True
   frmCancelSend.Hide
End Sub


' This procedure sets the SThreshold property, which determines
' how many characters (at most) have to be waiting
' in the output buffer before the CommEvent property
' is set to comEvSend and the OnComm event is triggered.
Private Sub mnuSThreshold_Click()
    On Error Resume Next

    Temp = InputBox$("Enter New SThreshold Value", "SThreshold", Str$(MSComm1.SThreshold))
    If Len(Temp) Then
        MSComm1.SThreshold = Val(Temp)
        If Err Then MsgBox Error$, 48
    End If
End Sub

' This procedure adds data to the Term control's Text property.
' It also filters control characters, such as BACKSPACE,
' carriage return, and line feeds, and writes data to
' an open log file.
' BACKSPACE characters delete the character to the left,
' either in the Text property, or the passed string.
' Line feed characters are appended to all carriage
' returns.  The size of the Term control's Text
' property is also monitored so that it never
' exceeds MAXTERMSIZE characters.
Private Static Sub ShowData(Term As Control, Data As String)
    On Error GoTo Handler
    Const MAXTERMSIZE = 16000
    Dim TermSize As Long, i

    ' Make sure the existing text doesn't get too large.
    TermSize = Len(Term.Text)
    If TermSize > MAXTERMSIZE Then
       Term.Text = Mid$(Term.Text, 4097)
       TermSize = Len(Term.Text)
    End If

    ' Point to the end of Term's data.
    Term.SelStart = TermSize

    ' Filter/handle BACKSPACE characters.
    Do
       i = InStr(Data, Chr$(8))
       If i Then
          If i = 1 Then
             Term.SelStart = TermSize - 1
             Term.SelLength = 1
             Data = Mid$(Data, i + 1)
          Else
             Data = Left$(Data, i - 2) & Mid$(Data, i + 1)
          End If
       End If
    Loop While i

    ' Eliminate line feeds.
    Do
       i = InStr(Data, Chr$(10))
       If i Then
          Data = Left$(Data, i - 1) & Mid$(Data, i + 1)
       End If
    Loop While i

    ' Make sure all carriage returns have a line feed.
    i = 1
    Do
       i = InStr(i, Data, Chr$(13))
       If i Then
          Data = Left$(Data, i) & Chr$(10) & Mid$(Data, i + 1)
          i = i + 1
       End If
    Loop While i

    ' Add the filtered data to the SelText property.
    Term.SelText = Data

    ' Log data to file if requested.

    Term.SelStart = Len(Term.Text)
Exit Sub

Handler:
    MsgBox Error$
    Resume Next
End Sub

Private Sub OLE2_Updated(Code As Integer)

End Sub




Private Sub tbrToolBar_ButtonClick(ByVal Button As ComctlLib.Button)
Select Case Button.Key
Case "OpenFile"
    Call mnuLoadFile_Click
Case "SaveFile"
    Call mnuSaveFile_Click
Case "Focus"
    Call btnFocus_Click
Case "StopAccum"
    Call btnStop_Click
Case "Accu1"
     Call btnGo_Click
Case "AccuN"
    Call btnGoN_Click
Case "AutoXY"
    Call btnAutoXY_Click
End Select
End Sub

Private Sub Timer1_Timer()
 Dim info As String
   If SaveFileName <> "" Then
     info = "     Last file saved:  " & SaveFileName
   Else
    info = ""
   End If

    ' Display the Connect Time
    sbrStatus.Panels("Settings").Text = "Settings: " & MSComm1.Settings & info
    sbrStatus.Panels("ConnectTime").Text = Format(Now - StartTime, "hh:nn:ss") & " "
    If Now - StartTime > 20 Then Unload frmLogo


End Sub
' Call this function to start the Connect Time timer
Private Sub StartTiming()
    StartTime = Now
    Timer1.Enabled = True
End Sub
' Call this function to stop timing
Private Sub StopTiming()
    Timer1.Enabled = False
    sbrStatus.Panels("ConnectTime").Text = ""
End Sub




Private Sub Command1_Click()

Dim StatusCal As String
Dim iRes As Integer
Dim bRes As Boolean


  Dim ex As New WINX32Lib.ExpSetup
  Dim dx As New WINX32Lib.DocFile

  'Dim twin As New Winx32Lib.DocWindow
  'Dim WApp As New Winx32Lib.Winx32App

  Dim cx As CalibObj

  'iRes = ex.Start(dx)
  'While (ex.GetParam(EXP_RUNNING))
  '  DoEvents
  'Wend

  'Set dx = ex.GetDocument
  'ExpFile = dx.GetParam(DM_FILETITLE)


  dx.Open (ExpFile)


  Set cx = dx.GetCalibration






Fi0 = Ang / 2 + Arcsin(Lspectr * (0.000001) / 2 * GratingSp / Cos(Ang / 2))


Fi1 = Fi0 + Atn((LCenter - 1) * OMAEl / (FocalSp) _
* (1 - (LCenter - 1) * OMAEl / (FocalSp) * Tan(CorAng)))
L1 = (Sin(Fi1) + Sin(Fi0 - Ang)) / GratingSp * (1000000#)

Fi2 = Fi0 + Atn((LCenter - 120) * OMAEl / (FocalSp) _
* (1 - (LCenter - 120) * OMAEl / (FocalSp) * Tan(CorAng)))
L2 = (Sin(Fi2) + Sin(Fi0 - Ang)) / GratingSp * (1000000#)

Fi3 = Fi0 + Atn((LCenter - 280) * OMAEl / (FocalSp) * (1 - (LCenter - 280) * OMAEl / (FocalSp) * Tan(CorAng)))
L3 = (Sin(Fi3) + Sin(Fi0 - Ang)) / GratingSp * (1000000#)

Fi4 = Fi0 + Atn((LCenter - 420) * OMAEl / (FocalSp) _
* (1 - (LCenter - 420) * OMAEl / (FocalSp) * Tan(CorAng)))
L4 = (Sin(Fi4) + Sin(Fi0 - Ang)) / GratingSp * (1000000#)

Fi5 = Fi0
L5 = (Sin(Fi5) + Sin(Fi0 - Ang)) / GratingSp * (1000000#)

Fi6 = Fi0 + Atn((LCenter - 600) * OMAEl / (FocalSp) _
* (1 - (LCenter - 600) * OMAEl / (FocalSp) * Tan(CorAng)))
L6 = (Sin(Fi6) + Sin(Fi0 - Ang)) / GratingSp * (1000000#)

Fi7 = Fi0 + Atn((LCenter - 720) * OMAEl / (FocalSp) _
* (1 - (LCenter - 720) * OMAEl / (FocalSp) * Tan(CorAng)))
L7 = (Sin(Fi7) + Sin(Fi0 - Ang)) / GratingSp * (1000000#)

Fi8 = Fi0 + Atn((LCenter - 870) * OMAEl / (FocalSp) _
* (1 - (LCenter - 870) * OMAEl / (FocalSp) * Tan(CorAng)))
L8 = (Sin(Fi8) + Sin(Fi0 - Ang)) / GratingSp * (1000000#)

Fi9 = Fi0 + Atn((LCenter - 1000) * OMAEl / (FocalSp) _
* (1 - (LCenter - 1000) * OMAEl / (FocalSp) * Tan(CorAng)))
L9 = (Sin(Fi9) + Sin(Fi0 - Ang)) / GratingSp * (1000000#)






  cx.DisplayUnit = XW_WAVELENGTH
  cx.PixelLoc(0) = 1
  cx.PixelLoc(1) = 120
  cx.PixelLoc(2) = 280
  cx.PixelLoc(3) = 420
  cx.PixelLoc(4) = LCenter
  cx.PixelLoc(5) = 600
  cx.PixelLoc(6) = 720
  cx.PixelLoc(7) = 870
  cx.PixelLoc(8) = 1000

  cx.CalibVal(0) = L1
  cx.CalibVal(1) = L2
  cx.CalibVal(2) = L3
  cx.CalibVal(3) = L4
  cx.CalibVal(4) = L5
  cx.CalibVal(5) = L6
  cx.CalibVal(6) = L7
  cx.CalibVal(7) = L8
  cx.CalibVal(8) = L9
  cx.PairCount = 9
  cx.LaserPosition = Llaser

  cx.Order = 3
  cx.InputUnit = XW_WAVELENGTH

  'StatusCal = "PairCount " + Str(cx.PairCount)
  'StatusCal = StatusCal + "  DisplUn " + Str(cx.DisplayUnit)
  'StatusCal = StatusCal + "  Laser " + Str(cx.LaserPosition)
  'StatusCal = StatusCal + "  Pix1 " + Str(cx.PixelLoc(0))
  'WApp.ShowDemoBox (StatusCal)

  'iRes = dx.SetParam(DM_xCAL_VALID, 1)

  dx.SetCalibration cx

  'iRes = dx.SetParam(DM_xCAL_CALIB_COUNT, 4)

  dx.Update

  'Set twin = dx.GetWindow
  'twin.Update

  dx.Save
  dx.Close
  dx.Open (ExpFile)



End Sub

Public Sub btnGo_Click()

  Dim Msg, Style, Title, Help, Ctxt, Response
  Dim ex As New WINX32Lib.ExpSetup
  Dim dx As WINX32Lib.DocFile

  Dim StartTimer, Now, TimeLeft As Variant
  Dim WSError, Ji, Ii, iX As Integer
  Dim iRes, Bufs As Variant
  Dim DataP As Variant
  Dim dumm As ValidRange
  If ExpRunning Then Exit Sub
  Dim tun As Integer
  Dim EmergencyStop As Boolean
  Dim ExpStat As Integer
 
  
Select Case OperationMode
 Case ClientM
    frmTCPCl.ReadAllowed = True
 Case Else
  
  EmergencyStop = False

  If (MultipleAccum And (Accum = 1)) Or (Not MultipleAccum) Then
   If (Not SpFocus) Or FirstFocus Then
    If tbrToolBar.Buttons("SaveFile").Enabled = True Then
     Msg = "Spectrum not saved. Save now? "   ' Define message.
        Style = vbYesNo + vbCritical + vbDefaultButton2 ' Define buttons.
        Title = "Save Data?"  ' Define title.


        If Not frmTCPIP.Connected Then Response = MsgBox(Msg, Style, Title) ', Help, Ctxt)

        If Response = vbYes Then    ' User chose Yes.
           mnuSaveFile_Click
        End If
    End If
   End If
  End If
  'iX = 1
  'iRes = ex.GetParam(EXP_CONTROLLER_ALIVE, iX)
  'iX = 0
  If Not WinSp32On Then
   NeonLines
   Randomize (100)
   For Ji = 1 To MaxPix
        GlobalDataY(Ji) = DataNeon(Ji) + 200
        '+ Rnd * 200
   Next Ji
   cmbXscale_Click
  Else
   'Debug.Print iRes, iX
   iRes = ex.SetParam(EXP_EXPOSURE, ExposureTime)

   ExpRunning = True

   iRes = ex.Start(dx)
   tbrToolBar.Buttons("StopAccum").Enabled = True
   btnStop.Enabled = True

   StartTimer = Timer

   TimeLeft = ExposureTime

   While (ex.GetParam(EXP_RUNNING))
    DoEvents
    If btnStop.Enabled = False Then
       ex.Stop
       EmergencyStop = True

    End If

    Now = Timer
    If MultipleAccum Then
      TimeLeft = ExposureTime * (Accumulations - Accum + 1) - Now + StartTimer
      sbrStatus.Panels("Settings").Text = "Accumulation  " & Format(Accum, "####") & "  of  " & Format(Accumulations, "####") & "    Total time left, sec: " & Format(TimeLeft, "####.0") & " "
      sbrStatus.Panels("Settings").ToolTipText = "Waiting Time, N Accumulations"

      TimeLeft = ExposureTime - Now + StartTimer
    Else
          TimeLeft = ExposureTime - Now + StartTimer
    End If

    sbrStatus.Panels("ConnectTime").Text = "Exposure ends in   " & Format(TimeLeft, "####.0") & "  sec  "
    sbrStatus.Panels("ConnectTime").ToolTipText = "Waiting Time, 1 Accumulation"
   Wend
   sbrStatus.Panels("ConnectTime").ToolTipText = "ConnectTime"



    dx.SetParam DM_FILENAME, ExpFile
    Bufs = dx.GetParam(DM_FILENAME)


    ex.SetParam EXP_DATFILENAME, ExpFile

    dx.GetFrame 1, DataP

    dx.GetParam DM_ROI_ENDY, iX
    MaxPix = dx.GetParam(DM_ROI_ENDX)

    If Not EmergencyStop Then
     For Ii = 1 To MaxPix

       GlobalDataY(Ii) = DataP(Ii - 1, 0)


       If Not SpFocus Then
        If Ii = 1 Then
          MaxY = GlobalDataY(1)
          MinY = MaxY
        End If
        If GlobalDataY(Ii) > MaxY Then
         MaxY = GlobalDataY(Ii)
        End If
        If GlobalDataY(Ii) < MinY Then
          MinY = GlobalDataY(Ii)
        End If
       End If

       tbrToolBar.Buttons("SaveFile").Enabled = True

       'If frmTCPIP.Connected Then
       ' frmTCPIP.sktWinSpec(frmTCPIP.gConnectionCount).SendData Format(CalX(Ii), "####0.000") + "   " + Format(GlobalDataY(Ii), "######0.00") + Chr(13) + Chr(10)
       'End If

      Next Ii

      '------- prepare X scaling PlotX


      cmbXscale_Click

      If frmTCPIP.Connected And (OperationMode = ServerM) Then
       'frmTCPIP.sktWinSpec(frmTCPIP.CurIndex).SendData "EndData" + Chr(13) + Chr(10)
        With DataRecord
            .tLlaser = Llaser
            .tLCenter = LCenter
            .tGratingSp = GratingSp
            .tAng = Ang
            .tFocalSp = FocalSp
            .tOMAEl = OMAEl
            .tCorAng = CorAng
            .tNMtoStep = NMtoStep
            .tLspectr = Lspectr
            .tSlit = Slit
            .tExposureTime = ExposureTime
            .tAccum = Accum
            .tMaxPix = MaxPix
            ReDim .tDataY(MaxPix)
            For Ii = 1 To MaxPix
              .tDataY(Ii) = GlobalDataY(Ii)
            Next Ii
        End With
        ReDim BufferB.BinBuffer((13 + MaxPix) * 4 + 2)
        'BufferDatBin = DataRecord
        'BufferB.BinBuffer = DataRecord
        
        Open "C:\TESTFILE1" For Binary Access Write As #1
           Put #1, , DataRecord
        Close #1
        
         Open "C:\TESTFILE1" For Binary Access Read As #1
           Get #1, , BufferB.BinBuffer
        Close #1
           
          Open "C:\TESTFILE2" For Binary Access Write As #1
           Put #1, , BufferB.BinBuffer
        Close #1
        frmTCPIP.sktWinSpec(frmTCPIP.CurIndex).SendData BufferB.BinBuffer

      End If



    End If ' EmergencyStop
    dx.Save
    dx.Close
    tbrToolBar.Buttons("StopAccum").Enabled = False
    ExpRunning = False
    FirstFocus = False
   End If 'Detect Controller (Controller_Alive)
   Picture1_Redraw
   If Not MultipleAccum Then Accum = 1

 
 End Select


End Sub
Public Sub SendToRemote()
  Dim Ii As Integer

  SendingData = True
  For Ii = 0 To MaxPix

    If frmTCPIP.Connected Then
      frmTCPIP.sktWinSpec(frmTCPIP.gConnectionCount).SendData Format(CalX(Ii), "####0.000") + "   " + Format(GlobalDataY(Ii), "######0.00") + Chr(13) + Chr(10)
     End If

  Next Ii
  SendingData = False

End Sub


Private Sub txtMaxY_KeyUp(KeyCode As Integer, Shift As Integer)
   If KeyCode = 13 Then
      Picture1.SetFocus
      MaxY = Val(txtMaxY)
      ExactLimits = True

      Picture1_Redraw
       ExactLimits = False
   End If

End Sub

Private Sub txtMinY_KeyUp(KeyCode As Integer, Shift As Integer)
 If KeyCode = 13 Then
    Picture1.SetFocus
    MinY = Val(txtMinY)
     ExactLimits = True
    Picture1_Redraw
     ExactLimits = True
 End If
End Sub
Private Function PressT(WL As Double, Temp As Double) As Double
     Dim dt, delt
     If Temp < 80 Then
          delt = 0.92
       Else
          dt = Temp - 300
          delt = -(0.0068581 * dt + 0.0000049137 * dt * dt - 0.000000033064 * dt * dt * dt)
       End If

       PressT = 1904 / 7.665 * ((WL / (694.34 - delt)) ^ 7.665 - 1)
End Function

Private Sub txtTemp_KeyUp(KeyCode As Integer, Shift As Integer)

Dim pos, dt, delt
    If KeyCode = 13 Then
       pos = Abs(WlenPixel(Lspectr, CurPix))
    
       RubyTemp = Val(txtTemp.Text)
      
       Pressure = PressT(Abs(pos), RubyTemp)
      
       frmInfo.lblPress.Caption = "P = " + Format(Pressure, "###0.00") + " GPa"
       lblPress.Caption = "P = " + Format(Pressure, "###0.00")
    End If


End Sub

Private Sub txtTime_KeyUp(KeyCode As Integer, Shift As Integer)

      If KeyCode = 13 Then
        Picture1.SetFocus
        mnuTime_Click
      End If

End Sub


