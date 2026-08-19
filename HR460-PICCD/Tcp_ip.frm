VERSION 5.00
Object = "{248DD890-BB45-11CF-9ABC-0080C7E7B78D}#1.0#0"; "MSWINSCK.OCX"
Begin VB.Form frmTCPIP 
   Caption         =   "frmTCP (Server)"
   ClientHeight    =   3705
   ClientLeft      =   10035
   ClientTop       =   2070
   ClientWidth     =   5880
   LinkTopic       =   "Form1"
   ScaleHeight     =   3705
   ScaleWidth      =   5880
   Begin VB.CommandButton cmdStart 
      Caption         =   "Start"
      Height          =   255
      Left            =   2760
      TabIndex        =   3
      Top             =   600
      Width           =   1095
   End
   Begin VB.TextBox Status 
      Height          =   2055
      Left            =   120
      MultiLine       =   -1  'True
      ScrollBars      =   3  'Both
      TabIndex        =   1
      Top             =   1560
      Width           =   5535
   End
   Begin VB.TextBox txtPswd 
      Height          =   285
      IMEMode         =   3  'DISABLE
      Left            =   840
      PasswordChar    =   "*"
      TabIndex        =   0
      Top             =   600
      Width           =   1575
   End
   Begin MSWinsockLib.Winsock sktWinSpec 
      Index           =   0
      Left            =   3960
      Top             =   120
      _ExtentX        =   741
      _ExtentY        =   741
      _Version        =   393216
      RemoteHost      =   "localhost"
      RemotePort      =   1002
      LocalPort       =   1001
   End
   Begin VB.Label lblRemote 
      Height          =   255
      Left            =   240
      TabIndex        =   4
      Top             =   1200
      Width           =   5295
   End
   Begin VB.Label lblPswd 
      Caption         =   "Password :"
      Height          =   255
      Left            =   0
      TabIndex        =   2
      Top             =   600
      Width           =   975
   End
   Begin VB.Menu mnuServerStop 
      Caption         =   "Stop"
      NegotiatePosition=   1  'Left
   End
   Begin VB.Menu mnuServerExit 
      Caption         =   "Close"
   End
   Begin VB.Menu mnuServerRestart 
      Caption         =   "Restart"
      Enabled         =   0   'False
   End
   Begin VB.Menu mnuStatus 
      Caption         =   "Status"
   End
End
Attribute VB_Name = "frmTCPIP"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Public gFirstTime, ConnectRequest, Connected, GetPassword As Boolean
Public gConnectionCount, CurIndex As Integer
Public Act, ConnectTry As Integer
Public CRLF, InputString, BufferString, DPassword, Password, Command, HostCap As String




Private Sub Form_Load()
   gFirstTime = True
   gConnectionCount = 0
   sktWinSpec(gConnectionCount).LocalPort = 1001
   sktWinSpec(gConnectionCount).RemotePort = 1002
   sktWinSpec(gConnectionCount).RemoteHost = "localhost"
   mnuServerStop.Enabled = False
   mnuServerRestart.Enabled = False
   HostCap = frmTerminal.Caption
   frmTerminal.Caption = HostCap & "  SERVER"
   CRLF = Chr(13) + Chr(10)
   frmTerminal.OperationMode = ServerM
   Connected = False
End Sub
Private Sub Form_Terminate()
Dim Jndx As Integer

  For Jndx = 0 To gConnectionCount
   If sktWinSpec(Jndx).State <> sktClosed Then
    sktWinSpec(Jndx).Close
    If Jndx <> 0 Then
     Unload sktWinSpec(Jndx)
    End If
   End If
  Next
  frmTerminal.mnuServerActivate.Checked = False
  frmTCPIP.Hide
  frmTerminal.Caption = HostCap
  frmTerminal.OperationMode = OfflineM
  Connected = False
End Sub





Public Sub mnuServerExit_Click()
    Dim Jndx As Integer
   For Jndx = 0 To gConnectionCount
   If sktWinSpec(Jndx).State <> sktClosed Then
    sktWinSpec(Jndx).Close
    If Jndx <> 0 Then
     Unload sktWinSpec(Jndx)
    End If
   End If
  Next
   Status.Text = "Server Stopped"
  mnuServerRestart.Enabled = True
  mnuServerStop.Enabled = False
  gConnectionount = 0
  frmTCPIP.Hide
    frmTerminal.mnuServerActivate.Checked = False
      frmTerminal.Caption = HostCap
End Sub

Private Sub mnuServerRestart_Click()
     gConnectionCount = 0
     sktWinSpec(gConnectionCount).Listen
      Status.Text = "Restarting..."
     mnuServerRestart.Enabled = False
     mnuServerStop.Enabled = True
       frmTerminal.mnuServerActivate.Checked = True
End Sub


Private Sub mnuServerStop_Click()
Dim Jndx As Integer
   For Jndx = 0 To gConnectionCount
   If sktWinSpec(Jndx).State <> sktClosed Then
    sktWinSpec(Jndx).Close
    If Jndx <> 0 Then
     Unload sktWinSpec(Jndx)
    End If
   End If
  Next
   Status.Text = "Server Stopped"
  mnuServerRestart.Enabled = True
  mnuServerStop.Enabled = False
  gConnectionount = 0
  frmTerminal.mnuServerActivate.Checked = False
End Sub


Private Sub cmdStart_Click()
   sktWinSpec(gConnectionCount).Listen
   Status.Text = "Waiting for a connection..."
   ConnectRequest = False
   Connected = False
   frmTerminal.mnuServerActivate.Checked = True
   mnuServerStop.Enabled = True
   mnuServerRestart.Enabled = False
   cmdStart.Enabled = False
   
End Sub

Private Sub mnuStatus_Click()
Dim i, Stat
   For i = 0 To gConnectionCount
    Select Case sktWinSpec(i).State
     
     Case sckClosed
       Stat = "  Closed  "
     Case sckOpen
       Stat = "  Open  "
      Case sckListening
       Stat = "  Listening  "
      Case sckConnectionPending
       Stat = "  Connection Pending  "
      Case sckResolvingHost
       Stat = "  Resolving host  "
      Case sckHostResolved
       Stat = "  Host resolved  "
     Case sckConnecting
       Stat = "  Connecting  "
     Case sckConnected
       Stat = "  Connected  "
     Case sckClosing
       Stat = "  Peer closing  "
     Case sckError
       Stat = " Error  "
      Case Else
       Stat = "  Undefined  "
     End Select
     
     Status.Text = Status.Text & CRLF & _
     Format(i, "##") & Format(sktWinSpec(i).BytesReceived, "#######") & Stat & sktWinSpec(i).RemoteHostIP
          
   Next i
End Sub

Private Sub sktWinSpec_ConnectionRequest(Index As Integer, ByVal requestID As Long)
    gConnectionCount = gConnectionCount + 1
    Load sktWinSpec(gConnectionCount)
    sktWinSpec(gConnectionCount).Accept requestID
     Status.Text = "Connection to " + sktWinSpec(gConnectionCount).RemoteHost
     Debug.Print gConnectionCount, requestID
     ConnectRequest = True
     GetPassword = False
     Connected = False
     
     
     InputString = ""
     
End Sub
Private Sub sktWinSpec_DataArrival(Index As Integer, ByVal bytesTotal As Long)
  Dim Vbuf As String
  Dim Dget
     
    CurIndex = Index
    lblRemote.Caption = "Remote:   " + sktWinSpec(Index).RemoteHost + "    " + sktWinSpec(Index).RemoteHostIP _
    + "  Port:" + Format(sktWinSpec(Index).RemotePort, "####")
    
    
    
    sktWinSpec(Index).PeekData Dget
  
    
  
  
    sktWinSpec(Index).GetData BufferString, vbString
    
    
      InputString = BufferString
    
     
    
    If Connected Then
          Command = InputString
          InputString = ""
         
          Debug.Print "Command", Command
         
          Command_Parser Command, Index
     End If
     
   If Not Connected Then
        
    If ConnectRequest Then
      If Password = InputString Then
         Connected = True
         InputString = ""
         ConnectRequest = False
         GetPassword = True
          sktWinSpec(Index).SendData "Connect"
      Else
            sktWinSpec(Index).SendData "Wrong Password."
            sktWinSpec_Close (Index)
   
      End If
     End If
    End If
   
   Status.Text = BufferString
       
End Sub



Public Sub Command_Parser(ByVal Command As String, ByVal Index As Integer)
      
         If (InStr(Command, Chr(13)) > 0) Then
          Command = Left(Command, InStr(Command, Chr(13)) - 1)
         End If
      
      
       If Command = "ReadMono1" Then
          frmTerminal.mnuReadMono1_Click
          sktWinSpec(Index).SendData Format(frmTerminal.Wlen, "###0.000") + Chr(13) + Chr(10)
        End If
        
        If Command = "ReadMonoMax1" Then
              sktWinSpec(Index).SendData Format(frmTerminal.Wlenmax, "###0.000") + Chr(13) + Chr(10)
        End If
        
        If Command = "ReadMonoMin1" Then
            sktWinSpec(Index).SendData Format(frmTerminal.Wlenmin, "###0.000") + Chr(13) + Chr(10)
        End If
        
       If Command = "ReadSlit0" Then
           frmTerminal.mnuReadSlit0_Click
           sktWinSpec(Index).SendData Format(frmTerminal.Slit, "###0.0") + Chr(13) + Chr(10)
        End If
        
        If Command = "ReadSlitMax0" Then
             sktWinSpec(Index).SendData Format(frmTerminal.SlitMax, "###0.0") + Chr(13) + Chr(10)
        End If
        
        If Command = "ReadSlitMin0" Then
             sktWinSpec(Index).SendData Format(frmTerminal.SlitMin, "###0.0") + Chr(13) + Chr(10)
        End If
        
        If Command = "ReadGrating" Then
           frmTerminal.mnuReadGrating_Click
           sktWinSpec(Index).SendData Format(frmTerminal.GratingSp, "####") + Chr(13) + Chr(10)
        End If
        
        If InStr(Command, "MoveMono1") > 0 Then
           Wlento = Val(Trim(Right(Command, Len(Command) - InStr(Command, ","))))
           frmTerminal.MoveHR460 (Wlento)
           sktWinSpec(Index).SendData Format(frmTerminal.Wlen, "###0.000") + Chr(13) + Chr(10)
        End If
        
        If InStr(Command, "MoveSlit0") > 0 Then
           SlitTo = Val(Trim(Right(Command, Len(Command) - InStr(Command, ","))))
           frmTerminal.MoveSlit0 (SlitTo)
           sktWinSpec(Index).SendData Format(frmTerminal.Slit, "####") + Chr(13) + Chr(10)
        End If
        
        If InStr(Command, "ChangeGrating") > 0 Then
           GratingTo = Val(Trim(Right(Command, Len(Command) - InStr(Command, ","))))
           frmTerminal.ChangeGrating (GratingTo)
           sktWinSpec(Index).SendData Format(frmTerminal.GratingSp, "####") + Chr(13) + Chr(10)
        End If
        
        If InStr(Command, "StatusMono") > 0 Then
        Vbuf = "Pos: " + Format(frmTerminal.Wlen, "###0.000") + "  Slit: " + Format(frmTerminal.Slit, "###0.0") _
        + "  Grating: " + Format(frmTerminal.GratingSp, "####")
          sktWinSpec(Index).SendData Vbuf + Chr(13) + Chr(10)
        End If
        
        If InStr(Command, "Go") > 0 Then
            frmTerminal.btnGo_Click
            'sktWinSpec(Index).SendData  + Chr(13) + Chr(10)
        End If
        
        
        
         If InStr(Command, "Focus") > 0 Then
            frmTerminal.btnFocus_Click
            'sktWinSpec(Index).SendData  + Chr(13) + Chr(10)
        End If
        
        If InStr(Command, "Stop") > 0 Then
          If frmTerminal.SpFocus Then
            frmTerminal.btnStop_Click
          End If
            'sktWinSpec(Index).SendData  + Chr(13) + Chr(10)
        End If
        
        
       If InStr(Command, "GetData") > 0 Then
            frmTerminal.SendToRemote
            'sktWinSpec(Index).SendData  + Chr(13) + Chr(10)
        End If
        
        
        
     
       
       If Command = "exit" Then
         While frmTerminal.ExpRunning Or frmTerminal.SendingData
            DoEvents
         Wend
       
          Status.Text = "Connection closed on socket" + Str(Index)
          sktWinSpec(Index).Close
          Connected = False
        End If
     
End Sub




Private Sub sktWinSpec_Close(Index As Integer)
    Status.Text = "Connection closed"
    sktWinSpec(Index).Close
      mnuServerRestart.Enabled = False
     mnuServerStop.Enabled = False
       frmTerminal.mnuServerActivate.Checked = False

End Sub


Private Sub txtPswd_KeyUp(KeyCode As Integer, Shift As Integer)
   
  Password = txtPswd.Text
  Status.Text = Password + "   " + Format(KeyCode, "####0")


End Sub


Private Sub Status_KeyUp(KeyCode As Integer, Shift As Integer)
   If (KeyCode = 13) And (frmTCPIP.Connected) Then
   
   
       sktWinSpec(CurIndex).SendData Status.Text

   End If
    
End Sub
