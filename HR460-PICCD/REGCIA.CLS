VERSION 1.0 CLASS
BEGIN
  MultiUse = 0   'False
END
Attribute VB_Name = "clsRegistryAgent"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = True
Attribute VB_PredeclaredId = False
Attribute VB_Exposed = False
'******To SET registry values*******
'Dim tTempKey            As String
'
'Set RegistryAgent = New clsRegistryAgent
'
' Use the class properties and methods to load
' some test data into the registry
'tTempKey = "\YourKey\Anotherkey"
'RegistryAgent.RegistryKey = tTempKey
'RegistryAgent.SubKey = "Data"
'RegistryAgent.KeyValue = 399
'RegistryAgent.SetValue
'******To GET Registry values*****
'Dim tTempKey            As String
'Dim TipVal As String
'Set RegistryAgent = New clsRegistryAgent
'
' Use the class properties and methods to load
' some test data into the registry
'tTempKey = "\YourKey\Anotherkey"
'RegistryAgent.RegistryKey = tTempKey
'RegistryAgent.SubKey = "Data"
'RegistryAgent.GetValue
Option Explicit

' Public properties
Dim ptRegistryKey       As String
Dim ptSubKey            As String
Dim ptKeyValue          As String
Dim plStatus            As Long

Const HKEY_CLASSES_ROOT = &H80000000
Const HKEY_CURRENT_USER = &H80000001
Const HKEY_LOCAL_MACHINE = &H80000002
Const HKEY_USERS = &H80000003
Const HKEY_DYN_DATA = &H80000004

Const REG_SZ = 1
Const REG_BINARY = 3

' Registry API prototypes
Private Declare Function RegCreateKey Lib "advapi32.dll" Alias "RegCreateKeyA" _
    (ByVal hkey As Long, _
     ByVal lpSubKey As String, _
     phkResult As Long) As Long

Private Declare Function RegDeleteKey Lib "advapi32.dll" Alias "RegDeleteKeyA" _
    (ByVal hkey As Long, _
     ByVal lpSubKey As String) As Long

Private Declare Function RegDeleteValue Lib "advapi32.dll" Alias "RegDeleteValueA" _
    (ByVal hkey As Long, _
     ByVal lpSubKey As String) As Long

Private Declare Function RegQueryValueEx Lib "advapi32.dll" Alias "RegQueryValueExA" _
    (ByVal hkey As Long, _
     ByVal lpValueName As String, _
     ByVal lpReserved As Long, _
     lpType As Long, _
     lpData As Any, _
     lpcbData As Long) As Long

Private Declare Function RegSetValueEx Lib "advapi32.dll" Alias "RegSetValueExA" _
    (ByVal hkey As Long, _
     ByVal lpValueName As String, _
     ByVal Reserved As Long, _
     ByVal dwType As Long, _
     lpData As Any, _
     ByVal cbData As Long) As Long

' Registry error constants
Const ERROR_SUCCESS = 0&
Const ERROR_BADDB = 1009&
Const ERROR_BADKEY = 1010&
Const ERROR_CANTOPEN = 1011&
Const ERROR_CANTREAD = 1012&
Const ERROR_CANTWRITE = 1013&
Const ERROR_REGISTRY_RECOVERED = 1014&
Const ERROR_REGISTRY_CORRUPT = 1015&
Const ERROR_REGISTRY_IO_FAILED = 1016&
Const ERROR_NOT_REGISTRY_FILE = 1017&
Const ERROR_KEY_DELETED = 1018&
Const ERROR_NO_LOG_SPACE = 1019&
Const ERROR_KEY_HAS_CHILDREN = 1020&
Const ERROR_CHILD_MUST_BE_VOLATILE = 1021&
Const ERROR_RXACT_INVALID_STATE = 1369&

' Private error codes
Const REGAGENT_NOKEY = -1002
Const REGAGENT_NOSUBKEY = -1003

Public Sub CreateKey()

Dim lResult         As Long

plStatus = 0            ' Assume succcess

' Make sure all required properties have been set
If Len(ptRegistryKey) = 0 Then
    ' The key property is not set, so flag an error
    plStatus = REGAGENT_NOKEY
    Exit Sub
End If

' Make the call to create the key
plStatus = RegCreateKey(HKEY_CURRENT_USER, ptRegistryKey, lResult)

End Sub

Public Sub DeleteKey()

Dim lKeyId          As Long

plStatus = 0            ' Assume succcess

' Make sure all required properties have been set
If Len(ptRegistryKey) = 0 Then
    ' The key property is not set, so flag an error
    plStatus = REGAGENT_NOKEY
    Exit Sub
End If
If Len(ptSubKey) = 0 Then
    ' The sub key property is not set, so flag an error
    plStatus = REGAGENT_NOSUBKEY
    Exit Sub
End If

' Open the key by attempting to create it. If it
' already exists we get back an ID.
plStatus = RegCreateKey(HKEY_CURRENT_USER, ptRegistryKey, lKeyId)
If plStatus = 0 Then
    ' We get a key ID so we can delete the entry
    plStatus = RegDeleteKey(lKeyId, ByVal ptSubKey)
End If

End Sub

Public Sub DeleteValue()

Dim lKeyId          As Long

plStatus = 0            ' Assume succcess

' Make sure all required properties have been set
If Len(ptRegistryKey) = 0 Then
    ' The key property is not set, so flag an error
    plStatus = REGAGENT_NOKEY
    Exit Sub
End If
If Len(ptSubKey) = 0 Then
    ' The sub key property is not set, so flag an error
    plStatus = REGAGENT_NOSUBKEY
    Exit Sub
End If

' Open the key by attempting to create it. If it
' already exists we get back an ID.
plStatus = RegCreateKey(HKEY_CURRENT_USER, ptRegistryKey, lKeyId)
If plStatus = 0 Then
    ' We got a key ID so we can delete the value
    plStatus = RegDeleteValue(lKeyId, ByVal ptSubKey)
End If

End Sub

Public Function GetErrorText() As String

' Evaluate the status property value and return the
' associated error message text.

Select Case plStatus
  Case REGAGENT_NOKEY
    GetErrorText = "You have not provided a registry key."

  Case REGAGENT_NOSUBKEY
    GetErrorText = "You have not provided a sub key."

  Case ERROR_BADDB
    GetErrorText = "The configuration registry database is corrupt."

  Case ERROR_BADKEY
    GetErrorText = "The configuration registry key is invalid."

  Case ERROR_CANTOPEN
    GetErrorText = "The configuration registry key could not be opened."

  Case ERROR_CANTREAD
    GetErrorText = "The configuration registry key could not be read."

  Case ERROR_CANTWRITE
    GetErrorText = "The configuration registry key could not be written."

  Case ERROR_REGISTRY_RECOVERED
    GetErrorText = "One of the files in the Registry database had to be recovered " & _
                   "by use of a log or alternate copy. The recovery was successful."

  Case ERROR_REGISTRY_CORRUPT
    GetErrorText = "The Registry is corrupt. The structure of one of the files that contains " & _
                   "Registry data is corrupt, or the system's image of the file in memory " & _
                   "is corrupt, or the file could not be recovered because the alternate " & _
                   "copy or log was absent or corrupt."

  Case ERROR_REGISTRY_IO_FAILED
    GetErrorText = "An I/O operation initiated by the Registry failed unrecoverably. " & _
                   "The Registry could not read in, or write out, or flush, one of the files " & _
                   "that contain the system's image of the Registry."

  Case ERROR_NOT_REGISTRY_FILE
    GetErrorText = "The system has attempted to load or restore a file into the Registry, but the " & _
                   "specified file is not in a Registry file format."

  Case ERROR_KEY_DELETED
    GetErrorText = "Illegal operation attempted on a Registry key which has been marked for deletion."

  Case ERROR_NO_LOG_SPACE
    GetErrorText = "System could not allocate the required space in a Registry log."

  Case ERROR_KEY_HAS_CHILDREN
    GetErrorText = "Cannot create a symbolic link in a Registry key that already " & _
                   "has subkeys or values."

  Case ERROR_CHILD_MUST_BE_VOLATILE
    GetErrorText = "Cannot create a stable subkey under a volatile parent key."

  Case ERROR_RXACT_INVALID_STATE
    GetErrorText = "The transaction state of a Registry subtree is incompatible with the " & _
                   "requested operation."

End Select

End Function

Public Sub GetValue()

Dim lResult             As Long
Dim lKeyId              As Long
Dim tKeyValue           As String
Dim lBufferSize         As Long

plStatus = 0            ' Assume succcess

' Make sure all required properties have been set
If Len(ptRegistryKey) = 0 Then
    ' The key property is not set, so flag an error
    plStatus = REGAGENT_NOKEY
    Exit Sub
End If
If Len(ptSubKey) = 0 Then
    ' The sub key property is not set, so flag an error
    plStatus = REGAGENT_NOSUBKEY
    Exit Sub
End If

' Open the key by attempting to create it. If it
' already exists we get back an ID.
plStatus = RegCreateKey(HKEY_CURRENT_USER, _
                ptRegistryKey, lKeyId)
                
'                plStatus = RegCreateKey(HKEY_USERS, _
 '               ptRegistryKey, lKeyId)


If plStatus <> 0 Then
    ' Call failed, can't open the key so exit
    Exit Sub
End If

' Determine the size of the data in the registry entry
plStatus = RegQueryValueEx(lKeyId, ptSubKey, _
                0&, REG_SZ, 0&, lBufferSize)

If lBufferSize < 2 Then
    ' No data value available
    ptKeyValue = Empty
    Exit Sub
End If

' Allocate the needed space for the key data
tKeyValue = String(lBufferSize + 1, " ")


' Get the value of the registry entry


plStatus = RegQueryValueEx(lKeyId, ptSubKey, _
                0&, REG_SZ, ByVal tKeyValue, lBufferSize)


' Trim the null at the end of the returned value
'ptKeyValue = Left$(tKeyValue, lBufferSize - 1)
' Return all the symbols in the registry field
ptKeyValue = tKeyValue
      
End Sub


Property Get RegistryKey() As String

' Return the value of the registry key class property
RegistryKey = ptRegistryKey

End Property



Property Let RegistryKey(tRegistryKey As String)

' Set the value of the registry key class property
ptRegistryKey = tRegistryKey

End Property


Property Let KeyValue(tKeyValue As String)

' Set the registry key value class property
ptKeyValue = tKeyValue

End Property


Property Get KeyValue() As String

' Return the registry key value class property
KeyValue = ptKeyValue

End Property



Public Sub SetValue()

Dim lKeyId          As Long

plStatus = 0            ' Assume succcess

' Make sure all required properties have been set
If Len(ptRegistryKey) = 0 Then
    ' The key property is not set, so flag an error
    plStatus = REGAGENT_NOKEY
    Exit Sub
End If
If Len(ptSubKey) = 0 Then
    ' The sub key property is not set, so flag an error
    plStatus = REGAGENT_NOSUBKEY
    Exit Sub
End If

' Open the key by attempting to create it. If it
' already exists we get back an ID.
plStatus = RegCreateKey(HKEY_CURRENT_USER, _
                ptRegistryKey, _
                lKeyId)

If plStatus <> 0 Then
    ' Call failed, can't open the key so exit
    Exit Sub
End If

'If Len(ptKeyValue) = 0 Then
'    ' No key value, so clear any existing entry
'    plStatus = RegSetValueEx(lKeyId, _
'                ptSubKey, _
'                0&, _
'                REG_SZ, _
'                0&, _
'                0&)
'  Else
    ' Set the registry entry to the value

    plStatus = RegSetValueEx(lKeyId, _
                ptSubKey, _
                0&, _
                REG_SZ, _
                ByVal ptKeyValue, _
                Len(ptKeyValue) + 1)
                
'End If


End Sub




Property Get Status() As Long

' Return the status class property value
Status = plStatus




End Property


Property Get SubKey() As String

' Return the sub key class property value
SubKey = ptSubKey

End Property

Property Let SubKey(tSubKey As String)

' Set the sub key class property
ptSubKey = tSubKey

End Property


