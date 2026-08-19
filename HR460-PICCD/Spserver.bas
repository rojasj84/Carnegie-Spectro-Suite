Attribute VB_Name = "Module1"
' Public variables
Public Echo As Boolean        ' Echo On/Off flag.
Public CancelSend As Integer  ' Flag to stop sending a text file.

Public Type WizSpecData
      tLlaser       As Single
      tLCenter      As Single
      tGratingSp    As Single
      tAng          As Single
      tFocalSp      As Single
      tOMAEl        As Single
      tCorAng       As Single
      tNMtoStep     As Single
      tLspectr      As Single
      tSlit         As Single
      tExposureTime As Single
      tAccum        As Single
      tMaxPix       As Integer
      tDataY()      As Single
End Type

Public Type PlotLabel
    Caption As String
    Left As Long
    Top As Long
    Height As Long
    Width As Long
    Font As FontsConstants
End Type

Public Const NumLoadFiles As Integer = 15
Public Const CCDXsize As Integer = 1400

Public Enum FilterMethods
   ThresholdM
   MedianM
   NoFilterM
End Enum


Public DataRecord, DataStack As WizSpecData

Public Type WizSpecDataBuffer
      BinBuffer() As Byte
End Type

Public BufferB As WizSpecDataBuffer

Public BufferDatBin As Variant

'-------------------------------------------
Public DataLd(NumLoadFiles) As WizSpecData
Public CalX(CCDXsize), PlotX(CCDXsize) As Double
Public Offset(NumLoadFiles) As Single
Public FileNames(NumLoadFiles) As String
Public FileColor(NumLoadFiles) As Long

'-----------------------------------------

Declare Sub SetWindowPos Lib "user32" (ByVal hWnd As Long, ByVal hWndInsertAfter As Long, ByVal X As Long, ByVal Y As Long, ByVal cx As Long, ByVal cy As Long, ByVal wFlags As Long)

Declare Sub FloodFill Lib "GDI32" (ByVal hDC As Long, ByVal X As Long, ByVal Y As Long, ByVal crColor As Long)



