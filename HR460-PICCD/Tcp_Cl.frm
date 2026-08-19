VERSION 5.00
Object = "{248DD890-BB45-11CF-9ABC-0080C7E7B78D}#1.0#0"; "MSWINSCK.OCX"
Begin VB.Form frmTCPCl 
   Caption         =   "frmTCP (client)"
   ClientHeight    =   4065
   ClientLeft      =   10035
   ClientTop       =   2070
   ClientWidth     =   5430
   LinkTopic       =   "Form1"
   ScaleHeight     =   4065
   ScaleWidth      =   5430
   Begin VB.TextBox txtLocPort 
      Height          =   285
      Left            =   4320
      TabIndex        =   9
      Top             =   600
      Width           =   855
   End
   Begin VB.TextBox txtRemPort 
      Height          =   285
      Left            =   4320
      TabIndex        =   6
      Top             =   120
      Width           =   855
   End
   Begin VB.Timer tmrTimeOut 
      Interval        =   1000
      Left            =   1800
      Top             =   960
   End
   Begin VB.TextBox txtRemHost 
      Height          =   285
      Left            =   1080
      TabIndex        =   4
      Text            =   "localhost"
      Top             =   120
      Width           =   1575
   End
   Begin MSWinsockLib.Winsock sktWinSpec 
      Left            =   2160
      Top             =   960
      _ExtentX        =   741
      _ExtentY        =   741
      _Version        =   393216
      RemotePort      =   1001
      LocalPort       =   1002
   End
   Begin VB.CommandButton cmdStart 
      Caption         =   "Start"
      Height          =   255
      Left            =   840
      TabIndex        =   3
      Top             =   1080
      Width           =   1095
   End
   Begin VB.TextBox Status 
      Height          =   2415
      Left            =   120
      MultiLine       =   -1  'True
      ScrollBars      =   3  'Both
      TabIndex        =   1
      Top             =   1560
      Width           =   5295
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
   Begin VB.Label lblLocPort 
      Caption         =   "Local Port:"
      Height          =   255
      Left            =   3240
      TabIndex        =   8
      Top             =   600
      Width           =   975
   End
   Begin VB.Label lblRemPort 
      Caption         =   "Remote Port:"
      Height          =   255
      Left            =   3240
      TabIndex        =   7
      Top             =   120
      Width           =   975
   End
   Begin VB.Label lblHost 
      Caption         =   "Remote host:"
      Height          =   255
      Left            =   0
      TabIndex        =   5
      Top             =   120
      Width           =   1095
   End
   Begin VB.Label lblPswd 
      Caption         =   "Password :"
      Height          =   255
      Left            =   0
      TabIndex        =   2
      Top             =   600
      Width           =   975
   End
   Begin VB.Menu mnuClientStop 
      Caption         =   "Stop"
      NegotiatePosition=   1  'Left
   End
   Begin VB.Menu mnuClientExit 
      Caption         =   "Close"
   End
   Begin VB.Menu mnuClientRestart 
      Caption         =   "Restart"
      Enabled         =   0   'False
   End
   Begin VB.Menu mnuProp 
      Caption         =   "Properties"
      Begin VB.Menu mnuTimeOut 
         Caption         =   "TimeOut"
      End
   End
End
Attribute VB_Name = "frmTCPCl"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Public gFirstTime, ConnectRequest, Connected, GetPassword, ReadAllowed As Boolean
Public gConnectionCount As Integer
Public Act, ConnectTry As Integer
Public CRLF, InputString, BufferString, DPassword, Password, Command, HostCap As String
Public TimeOut As Single
Dim StartConnection As Single


Private Sub Form_Load()
   mnuClientStop.Enabled = False
   mnuClientRestart.Enabled = False
   cmdStart.Enabled = True
   HostCap = frmTerminal.Caption
   TimeOut = 10
   CRLF = Chr(13) + Chr(10)
   txtLocPort = Str(sktWinSpec.LocalPort)
   txtRemPort = Str(sktWinSpec.RemotePort)
   frmTerminal.OperationMode = ClientM
   Connected = False
End Sub
Private Sub Form_Terminate()

  sktWinSpec_Close
  frmTerminal.mnuClientActivate.Checked = False
  frmTCPCl.Hide
  frmTerminal.Caption = HostCap
  frmTerminal.OperationMode = OfflineM
  Connected = False
End Sub



Private Sub mnuClientExit_Click()
  sktWinSpec_Close
  Status.Text = "Client Stopped"
  mnuClientRestart.Enabled = True
  mnuClientStop.Enabled = False
  frmTCPCl.Hide
  frmTerminal.mnuClientActivate.Checked = False
  frmTerminal.Caption = HostCap
End Sub

Private Sub mnuClientRestart_Click()
     
     sktWinSpec.Connect
     Status.Text = "Restarting..."
   ConnectRequest = True
   Connected = False
   
   StartConnection = Timer
   
   sktWinSpec.Connect
   
   While (sktWinSpec.State <> sckConnected) And ((Timer - StartConnection) / 1000 < TimeOut)
     DoEvents
     Status.Text = "Connecting...  Timer: " & Format((Timer - StartConnection), "####")
   Wend
   
   If sktWinSpec.State = sckConnected Then
     sktWinSpec.SendData Password
   End If
      
End Sub


Private Sub mnuClientStop_Click()
     sktWinSpec_Close
  Status.Text = "Client Stopped"
  mnuClientRestart.Enabled = True
  mnuClientStop.Enabled = False
  frmTerminal.mnuClientActivate.Checked = False
  frmTerminal.Caption = HostCap
End Sub




Private Sub cmdStart_Click()
 If sktWinSpec.State <> sckClosed Then Exit Sub
 
   sktWinSpec.RemoteHost = txtRemHost.Text
   sktWinSpec.RemotePort = Val(txtRemPort.Text)
   Status.Text = "Trying to connect..."
   ConnectRequest = True
   Connected = False
    
   StartConnection = Timer
   
   sktWinSpec.Connect
   
   While (sktWinSpec.State <> sckConnected) And ((Timer - StartConnection) / 1000 < TimeOut)
     DoEvents
     Status.Text = "Connecting...  Timer: " & Format((Timer - StartConnection) / 1000, "###.0")
   Wend
   
   If sckConnected Then
     sktWinSpec.SendData Password
   End If
End Sub


Private Sub mnuTimeOut_Click()
    
 
    TimeOut = Val(InputBox("TimeOut (sec).", _
    " Set timeout for connection.", Format(TimeOut, "####0.")))
     If TimeOut <= 0 Then
       TimeOut = 20
     End If
    
End Sub

Private Sub sktWinSpec_DataArrival(ByVal bytesTotal As Long)
  Dim Vbuf As String
  Dim Dget
     
    sktWinSpec.PeekData Dget
    
  
  
    sktWinSpec.GetData BufferString, vbString
    
    
      InputString = BufferString
    
     
    
    If Connected Then
          Command = InputString
          InputString = ""
         
          Debug.Print "Command", Command
         
        Command_Parser Command, Index
     End If
     
   If Not Connected Then
        
    If ConnectRequest Then
      If "Connect" = InputString Then
         Connected = True
         InputString = ""
         ConnectRequest = False
         GetPassword = True
         mnuClientStop.Enabled = True
         mnuClientRestart.Enabled = False
         cmdStart.Enabled = False
         frmTerminal.mnuServerActivate.Checked = True
         frmTerminal.Caption = HostCap + "   CLIENT"
      Else
   
       sktWinSpec_Close
    
    End If
   End If
  End If
 Status.Text = BufferString
       
End Sub



Public Sub Command_Parser(ByVal Command As String, ByVal Index As Integer)
      
        
       If Len(Command) > (13 + frmTerminal.MaxPix) * 4 Then
         
         Open "C:\TESTFILE3" For Binary Access Write As #1
          Put #1, , Command
         Close #1
       
       Else
           
         If (InStr(Command, Chr(13)) > 0) Then
          Command = Left(Command, InStr(Command, Chr(13)) - 1)
         End If
       
       End If
       
       
       If Command = "ReadMono1" Then
        End If
        
        If Command = "ReadMonoMax1" Then
        End If
        
        If Command = "ReadMonoMin1" Then
        End If
        
       If Command = "ReadSlit0" Then
        End If
        
        If Command = "ReadSlitMax0" Then
       End If
        
        If Command = "ReadSlitMin0" Then
        End If
        
        If Command = "ReadGrating" Then
        End If
        
        If InStr(Command, "MoveMono1") > 0 Then
          End If
        
        If InStr(Command, "MoveSlit0") > 0 Then
         End If
        
        If InStr(Command, "ChangeGrating") > 0 Then
          End If
        
        If InStr(Command, "StatusMono") > 0 Then
       End If
        
        If InStr(Command, "Go") > 0 Then
         End If
        
        
        
         If InStr(Command, "Focus") > 0 Then
         End If
        
        If InStr(Command, "Stop") > 0 Then
        End If
        
        
       If InStr(Command, "GetData") > 0 Then
         End If
        
        
        
    
       
       If Command = "exit" Then
       
          Status.Text = "Connection closed on socket" + Str(Index)
          sktWinSpec_Close
          Connected = False
        End If
      
End Sub




Private Sub sktWinSpec_Close()
    Status.Text = "Connection closed"
    sktWinSpec.Close
   mnuClientStop.Enabled = False
   mnuClientRestart.Enabled = False
   cmdStart.Enabled = True
    frmTerminal.mnuClientActivate.Checked = False
  
End Sub


Private Sub Status_KeyUp(KeyCode As Integer, Shift As Integer)
Dim SendStr
   If (KeyCode = 13) And (frmTCPCl.Connected) Then
       
     If sktWinSpec.State = sckConnected Then
       sktWinSpec.SendData Status.Text
     End If
      
   End If
    
End Sub


Private Sub txtPswd_KeyUp(KeyCode As Integer, Shift As Integer)
   
  Password = txtPswd.Text
  Status.Text = Password + "   " + Format(KeyCode, "####0")


End Sub


Private Sub txtRemPort_KeyUp(KeyCode As Integer, Shift As Integer)
If (KeyCode = 13) And (Not frmTCPCl.Connected) Then
  sktWinSpec.RemotePort = Val(txtRemPort.Text)
  
End If

End Sub

Private Sub txtLocPort_KeyUp(KeyCode As Integer, Shift As Integer)
If (KeyCode = 13) And (Not frmTCPCl.Connected) Then
  sktWinSpec.LocalPort = Val(txtLocPort.Text)
  
End If

End Sub


Private Sub txtRemHost_KeyUp(KeyCode As Integer, Shift As Integer)
If (KeyCode = 13) And (Not frmTCPCl.Connected) Then
  sktWinSpec.RemoteHost = txtRemHost.Text
  
End If

End Sub
