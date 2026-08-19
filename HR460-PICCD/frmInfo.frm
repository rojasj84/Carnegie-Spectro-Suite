VERSION 5.00
Begin VB.Form frmInfo 
   BackColor       =   &H8000000A&
   Caption         =   "Info"
   ClientHeight    =   780
   ClientLeft      =   60
   ClientTop       =   345
   ClientWidth     =   9195
   Icon            =   "frmInfo.frx":0000
   LinkTopic       =   "Form1"
   MaxButton       =   0   'False
   ScaleHeight     =   780
   ScaleWidth      =   9195
   Begin VB.Label lblPress 
      AutoSize        =   -1  'True
      BackColor       =   &H80000009&
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   12
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   300
      Left            =   6600
      TabIndex        =   12
      Top             =   240
      Width           =   75
   End
   Begin VB.Label Label1 
      BackColor       =   &H8000000D&
      BorderStyle     =   1  'Fixed Single
      Caption         =   "Offset"
      ForeColor       =   &H8000000E&
      Height          =   255
      Left            =   5880
      TabIndex        =   11
      Top             =   480
      Width           =   615
   End
   Begin VB.Label lblYdif 
      AutoSize        =   -1  'True
      Caption         =   "Offset"
      Height          =   195
      Left            =   4200
      TabIndex        =   10
      Top             =   480
      Width           =   420
   End
   Begin VB.Label lblXdif 
      AutoSize        =   -1  'True
      Caption         =   "Offset"
      Height          =   195
      Left            =   1920
      TabIndex        =   9
      Top             =   480
      Width           =   420
   End
   Begin VB.Label lblPixdif 
      AutoSize        =   -1  'True
      Caption         =   "Offset"
      Height          =   195
      Left            =   240
      TabIndex        =   8
      Top             =   480
      Width           =   420
   End
   Begin VB.Label lblYCur 
      AutoSize        =   -1  'True
      Caption         =   "Y value"
      Height          =   195
      Left            =   3960
      TabIndex        =   7
      Top             =   240
      Width           =   540
   End
   Begin VB.Label lblXCur 
      AutoSize        =   -1  'True
      Caption         =   "X nm "
      Height          =   195
      Left            =   1800
      TabIndex        =   6
      Top             =   240
      Width           =   405
   End
   Begin VB.Label lblPixCur 
      AutoSize        =   -1  'True
      Caption         =   "Pixel"
      Height          =   195
      Left            =   0
      TabIndex        =   5
      Top             =   240
      Width           =   330
   End
   Begin VB.Label lblCursor 
      BackColor       =   &H8000000D&
      BorderStyle     =   1  'Fixed Single
      Caption         =   "Cursor"
      ForeColor       =   &H8000000E&
      Height          =   255
      Left            =   5880
      TabIndex        =   4
      Top             =   240
      Width           =   615
   End
   Begin VB.Label lblMouse 
      BackColor       =   &H8000000D&
      BorderStyle     =   1  'Fixed Single
      Caption         =   "Mouse"
      ForeColor       =   &H8000000E&
      Height          =   255
      Left            =   5880
      TabIndex        =   3
      Top             =   0
      Width           =   615
   End
   Begin VB.Label lblPixel 
      AutoSize        =   -1  'True
      Caption         =   "Pixel"
      Height          =   195
      Left            =   0
      TabIndex        =   2
      Top             =   0
      Width           =   570
   End
   Begin VB.Label xvalLabel 
      AutoSize        =   -1  'True
      Caption         =   "X nm"
      Height          =   195
      Left            =   1800
      TabIndex        =   1
      Top             =   0
      Width           =   360
   End
   Begin VB.Label yvalLabel 
      AutoSize        =   -1  'True
      Caption         =   "Y value"
      Height          =   195
      Left            =   3960
      TabIndex        =   0
      Top             =   0
      Width           =   540
   End
End
Attribute VB_Name = "frmInfo"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
