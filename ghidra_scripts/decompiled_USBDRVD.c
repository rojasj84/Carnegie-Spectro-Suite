/* ================================================================
 * Function: FUN_10001000
 * Address:  10001000
 * ================================================================ */

undefined4 FUN_10001000(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    if (DAT_1000a780 != 0) {
      DAT_1000a780 = DAT_1000a780 + -1;
    }
  }
  else if (param_2 == 1) {
    if (DAT_1000a780 != 0) {
      return 0;
    }
    DAT_1000a780 = 1;
    return 1;
  }
  return 1;
}



/* ================================================================
 * Function: FUN_10001050
 * Address:  10001050
 * ================================================================ */

undefined4 FUN_10001050(int param_1)

{
  int iVar1;
  
  iVar1 = _strncmp((char *)(param_1 + 0xc),&DAT_1000a030,2);
  if (iVar1 == 0) {
    return 1;
  }
  SetLastError(0x57);
  return 0;
}



/* ================================================================
 * Function: USBDRVD_GetDevCount
 * Address:  10001080
 * ================================================================ */

void USBDRVD_GetDevCount(void)

{
                    /* 0x1080  1  USBDRVD_GetDevCount */
  FUN_10003150();
  return;
}



/* ================================================================
 * Function: USBDRVD_GetDevicePath
 * Address:  100010b0
 * ================================================================ */

uint USBDRVD_GetDevicePath(uint param_1)

{
  DWORD DVar1;
  uint uVar2;
  
                    /* 0x10b0  38  USBDRVD_GetDevicePath */
  if (param_1 != 0) {
    DVar1 = FUN_10003150();
    if (param_1 <= DVar1) {
      uVar2 = FUN_100031e0(param_1);
      return uVar2;
    }
  }
  SetLastError(0x57);
  return 0;
}



/* ================================================================
 * Function: USBDRVD_OpenDevice
 * Address:  10001130
 * ================================================================ */

int * USBDRVD_OpenDevice(int param_1,DWORD param_2)

{
  char cVar1;
  int *piVar2;
  HANDLE pvVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  char *pcVar8;
  int *piVar9;
  
                    /* 0x1130  2  USBDRVD_OpenDevice */
  piVar2 = _malloc(0x10);
  if (piVar2 == (int *)0x0) {
    SetLastError(8);
    return (int *)0xffffffff;
  }
  *piVar2 = param_1;
  piVar2[2] = param_2;
  pvVar3 = FUN_10003040(param_1,param_2);
  piVar2[1] = (int)pvVar3;
  uVar4 = 0xffffffff;
  pcVar7 = &DAT_1000a030;
  do {
    pcVar8 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  piVar6 = (int *)(pcVar8 + -uVar4);
  piVar9 = piVar2 + 3;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *piVar9 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar9 = piVar9 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(char *)piVar9 = (char)*piVar6;
    piVar6 = (int *)((int)piVar6 + 1);
    piVar9 = (int *)((int)piVar9 + 1);
  }
  if (piVar2[1] == -1) {
    FUN_10003368(piVar2);
    return (int *)0xffffffff;
  }
  return piVar2;
}



/* ================================================================
 * Function: USBDRVD_OpenDevicePath
 * Address:  100011d0
 * ================================================================ */

undefined4 * USBDRVD_OpenDevicePath(LPCSTR param_1,DWORD param_2)

{
  char cVar1;
  undefined4 *puVar2;
  HANDLE pvVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
                    /* 0x11d0  39  USBDRVD_OpenDevicePath */
  puVar2 = _malloc(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    SetLastError(8);
    return (undefined4 *)0xffffffff;
  }
  puVar2[2] = param_2;
  *puVar2 = 0xff;
  pvVar3 = CreateFileA(param_1,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,param_2,(HANDLE)0x0);
  puVar2[1] = pvVar3;
  uVar4 = 0xffffffff;
  pcVar6 = &DAT_1000a030;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = (char *)(puVar2 + 3);
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  if (puVar2[1] == -1) {
    FUN_10003368(puVar2);
    return (undefined4 *)0xffffffff;
  }
  return puVar2;
}



/* ================================================================
 * Function: USBDRVD_CloseDevice
 * Address:  10001260
 * ================================================================ */

void USBDRVD_CloseDevice(LPVOID param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
                    /* 0x1260  3  USBDRVD_CloseDevice */
  iVar2 = FUN_10001050((int)param_1);
  if (iVar2 != 0) {
    CloseHandle(*(HANDLE *)((int)param_1 + 4));
    uVar3 = 0xffffffff;
    pcVar5 = &DAT_1000a034;
    do {
      pcVar6 = pcVar5;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar6 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar5 = pcVar6 + -uVar3;
    pcVar6 = (char *)((int)param_1 + 0xc);
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    }
    FUN_10003368(param_1);
  }
  return;
}



/* ================================================================
 * Function: USBDRVD_ResetParentPort
 * Address:  100012b0
 * ================================================================ */

void USBDRVD_ResetParentPort(DWORD param_1)

{
  DWORD DVar1;
  int iVar2;
  
                    /* 0x12b0  32  USBDRVD_ResetParentPort */
  DVar1 = param_1;
  iVar2 = FUN_10001050(param_1);
  if (iVar2 == 0) {
    return;
  }
  DeviceIoControl(*(HANDLE *)(DVar1 + 4),0x220438,(LPVOID)0x0,0,(LPVOID)0x0,0,&param_1,
                  (LPOVERLAPPED)0x0);
  return;
}



/* ================================================================
 * Function: USBDRVD_CyclePort
 * Address:  100012f0
 * ================================================================ */

void USBDRVD_CyclePort(DWORD param_1)

{
  DWORD DVar1;
  int iVar2;
  
                    /* 0x12f0  41  USBDRVD_CyclePort */
  DVar1 = param_1;
  iVar2 = FUN_10001050(param_1);
  if (iVar2 == 0) {
    return;
  }
  DeviceIoControl(*(HANDLE *)(DVar1 + 4),0x220444,(LPVOID)0x0,0,(LPVOID)0x0,0,&param_1,
                  (LPOVERLAPPED)0x0);
  return;
}



/* ================================================================
 * Function: USBDRVD_GetParentPortStatus
 * Address:  10001330
 * ================================================================ */

void USBDRVD_GetParentPortStatus(DWORD param_1,LPVOID param_2)

{
  DWORD DVar1;
  int iVar2;
  
                    /* 0x1330  35  USBDRVD_GetParentPortStatus */
  DVar1 = param_1;
  iVar2 = FUN_10001050(param_1);
  if (iVar2 == 0) {
    return;
  }
  DeviceIoControl(*(HANDLE *)(DVar1 + 4),0x22043c,(LPVOID)0x0,0,param_2,4,&param_1,(LPOVERLAPPED)0x0
                 );
  return;
}



/* ================================================================
 * Function: USBDRVD_GetPipeCount
 * Address:  10001370
 * ================================================================ */

uint USBDRVD_GetPipeCount(DWORD param_1)

{
  uint uVar1;
  DWORD DVar2;
  int iVar3;
  void *lpOutBuffer;
  BOOL BVar4;
  
                    /* 0x1370  33  USBDRVD_GetPipeCount */
  DVar2 = param_1;
  iVar3 = FUN_10001050(param_1);
  if (iVar3 == 0) {
    return 0;
  }
  lpOutBuffer = _malloc(0x24);
  if (lpOutBuffer == (void *)0x0) {
    return 0;
  }
  BVar4 = DeviceIoControl(*(HANDLE *)(DVar2 + 4),0x220414,(LPVOID)0x0,0,lpOutBuffer,0x24,&param_1,
                          (LPOVERLAPPED)0x0);
  uVar1 = *(uint *)((int)lpOutBuffer + 0xc);
  FUN_10003368(lpOutBuffer);
  return -(uint)(BVar4 != 0) & uVar1;
}



/* ================================================================
 * Function: USBDRVD_GetPipeInfo
 * Address:  100013e0
 * ================================================================ */

undefined4 USBDRVD_GetPipeInfo(DWORD param_1,int param_2,ushort *param_3)

{
  ushort uVar1;
  DWORD DVar2;
  int iVar3;
  ushort *lpOutBuffer;
  BOOL BVar4;
  
                    /* 0x13e0  34  USBDRVD_GetPipeInfo */
  DVar2 = param_1;
  iVar3 = FUN_10001050(param_1);
  if ((iVar3 != 0) && (lpOutBuffer = _malloc(0x24), lpOutBuffer != (ushort *)0x0)) {
    BVar4 = DeviceIoControl(*(HANDLE *)(DVar2 + 4),0x220414,(LPVOID)0x0,0,lpOutBuffer,0x24,&param_1,
                            (LPOVERLAPPED)0x0);
    if ((BVar4 != 0) && (param_2 + 1U <= *(uint *)(lpOutBuffer + 6))) {
      uVar1 = *lpOutBuffer;
      lpOutBuffer = (ushort *)FUN_1000343c((int *)lpOutBuffer,(uint *)(uint)uVar1);
      if (lpOutBuffer == (ushort *)0x0) {
        return 0;
      }
      BVar4 = DeviceIoControl(*(HANDLE *)(DVar2 + 4),0x220414,(LPVOID)0x0,0,lpOutBuffer,
                              (DWORD)(uint)uVar1,&param_1,(LPOVERLAPPED)0x0);
      if (BVar4 != 0) {
        *param_3 = lpOutBuffer[param_2 * 10 + 8];
        *(char *)(param_3 + 1) = (char)lpOutBuffer[param_2 * 10 + 9];
        *(undefined1 *)((int)param_3 + 3) =
             *(undefined1 *)((int)lpOutBuffer + param_2 * 0x14 + 0x13);
        *(undefined4 *)(param_3 + 2) = *(undefined4 *)(lpOutBuffer + param_2 * 10 + 10);
        *(undefined4 *)(param_3 + 4) = *(undefined4 *)(lpOutBuffer + param_2 * 10 + 0xe);
        FUN_10003368(lpOutBuffer);
        return 0xc;
      }
    }
    FUN_10003368(lpOutBuffer);
  }
  return 0;
}



/* ================================================================
 * Function: USBDRVD_AbortPipe
 * Address:  100014d0
 * ================================================================ */

void USBDRVD_AbortPipe(DWORD param_1)

{
  DWORD DVar1;
  int iVar2;
  
                    /* 0x14d0  4  USBDRVD_AbortPipe */
  DVar1 = param_1;
  iVar2 = FUN_10001050(param_1);
  if (iVar2 == 0) {
    return;
  }
  DeviceIoControl(*(HANDLE *)(DVar1 + 4),0x22041c,&stack0x00000008,4,(LPVOID)0x0,0,&param_1,
                  (LPOVERLAPPED)0x0);
  return;
}



/* ================================================================
 * Function: USBDRVD_ResetPipe
 * Address:  10001510
 * ================================================================ */

void USBDRVD_ResetPipe(DWORD param_1)

{
  DWORD DVar1;
  int iVar2;
  
                    /* 0x1510  5  USBDRVD_ResetPipe */
  DVar1 = param_1;
  iVar2 = FUN_10001050(param_1);
  if (iVar2 == 0) {
    return;
  }
  DeviceIoControl(*(HANDLE *)(DVar1 + 4),0x220418,&stack0x00000008,4,(LPVOID)0x0,0,&param_1,
                  (LPOVERLAPPED)0x0);
  return;
}



/* ================================================================
 * Function: USBDRVD_GetDeviceDescriptor
 * Address:  10001550
 * ================================================================ */

uint USBDRVD_GetDeviceDescriptor(int param_1,LPVOID param_2)

{
  int iVar1;
  BOOL BVar2;
  DWORD local_4;
  
                    /* 0x1550  6  USBDRVD_GetDeviceDescriptor */
  local_4 = 0;
  iVar1 = FUN_10001050(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  BVar2 = DeviceIoControl(*(HANDLE *)(param_1 + 4),0x220408,(LPVOID)0x0,0,param_2,0x12,&local_4,
                          (LPOVERLAPPED)0x0);
  return -(uint)(BVar2 != 0) & local_4;
}



/* ================================================================
 * Function: USBDRVD_GetConfigDescriptor
 * Address:  100015a0
 * ================================================================ */

int USBDRVD_GetConfigDescriptor(DWORD param_1,undefined4 *param_2)

{
  DWORD DVar1;
  int iVar2;
  undefined4 local_c;
  undefined4 local_8;
  undefined2 local_4;
  
                    /* 0x15a0  7  USBDRVD_GetConfigDescriptor */
  DVar1 = param_1;
  iVar2 = FUN_10001050(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  DeviceIoControl(*(HANDLE *)(DVar1 + 4),0x22040c,&local_c,9,&local_c,9,&param_1,(LPOVERLAPPED)0x0);
  *param_2 = local_c;
  param_2[1] = local_8;
  *(undefined2 *)(param_2 + 2) = local_4;
  return param_1;
}



/* ================================================================
 * Function: USBDRVD_GetInterfaceDescriptor
 * Address:  10001610
 * ================================================================ */

undefined4 USBDRVD_GetInterfaceDescriptor(DWORD param_1,undefined4 *param_2)

{
  DWORD DVar1;
  int iVar2;
  BOOL BVar3;
  void *lpInBuffer;
  undefined1 local_c [2];
  uint local_a;
  
                    /* 0x1610  8  USBDRVD_GetInterfaceDescriptor */
  DVar1 = param_1;
  iVar2 = FUN_10001050(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  BVar3 = DeviceIoControl(*(HANDLE *)(DVar1 + 4),0x22040c,local_c,9,local_c,9,&param_1,
                          (LPOVERLAPPED)0x0);
  if (BVar3 == 0) {
    return 0;
  }
  lpInBuffer = _malloc(local_a & 0xffff);
  if (lpInBuffer == (void *)0x0) {
    return 0;
  }
  BVar3 = DeviceIoControl(*(HANDLE *)(DVar1 + 4),0x22040c,lpInBuffer,local_a & 0xffff,lpInBuffer,
                          local_a & 0xffff,&param_1,(LPOVERLAPPED)0x0);
  if (BVar3 == 0) {
    FUN_10003368(lpInBuffer);
    return 0;
  }
  *param_2 = *(undefined4 *)((int)lpInBuffer + 9);
  param_2[1] = *(undefined4 *)((int)lpInBuffer + 0xd);
  *(undefined1 *)(param_2 + 2) = *(undefined1 *)((int)lpInBuffer + 0x11);
  FUN_10003368(lpInBuffer);
  return 9;
}



/* ================================================================
 * Function: USBDRVD_GetEndpointDescriptor
 * Address:  100016f0
 * ================================================================ */

undefined4 USBDRVD_GetEndpointDescriptor(DWORD param_1,uint param_2,undefined4 *param_3)

{
  DWORD DVar1;
  int iVar2;
  BOOL BVar3;
  void *lpInBuffer;
  undefined1 local_c [2];
  uint local_a;
  
                    /* 0x16f0  9  USBDRVD_GetEndpointDescriptor */
  DVar1 = param_1;
  iVar2 = FUN_10001050(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  BVar3 = DeviceIoControl(*(HANDLE *)(DVar1 + 4),0x22040c,local_c,9,local_c,9,&param_1,
                          (LPOVERLAPPED)0x0);
  if (BVar3 == 0) {
    return 0;
  }
  lpInBuffer = _malloc(local_a & 0xffff);
  if (lpInBuffer == (void *)0x0) {
    return 0;
  }
  BVar3 = DeviceIoControl(*(HANDLE *)(DVar1 + 4),0x22040c,lpInBuffer,local_a & 0xffff,lpInBuffer,
                          local_a & 0xffff,&param_1,(LPOVERLAPPED)0x0);
  if (BVar3 == 0) {
    FUN_10003368(lpInBuffer);
    return 0;
  }
  iVar2 = (param_2 & 0xff) * 7;
  *param_3 = *(undefined4 *)(iVar2 + 0x12 + (int)lpInBuffer);
  *(undefined2 *)(param_3 + 1) = *(undefined2 *)((int)lpInBuffer + iVar2 + 0x16);
  *(undefined1 *)((int)param_3 + 6) = *(undefined1 *)((int)lpInBuffer + iVar2 + 0x18);
  FUN_10003368(lpInBuffer);
  return 7;
}



/* ================================================================
 * Function: USBDRVD_GetStringDescriptorLength
 * Address:  100017e0
 * ================================================================ */

char USBDRVD_GetStringDescriptorLength(int param_1,undefined2 param_2,undefined1 param_3)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  BOOL BVar4;
  char local_8 [4];
  DWORD local_4;
  
                    /* 0x17e0  10  USBDRVD_GetStringDescriptorLength */
  iVar1 = param_1;
  iVar3 = FUN_10001050(param_1);
  if (iVar3 == 0) {
    return '\0';
  }
  param_1 = CONCAT31(CONCAT12(param_1._3_1_,param_2),param_3);
  BVar4 = DeviceIoControl(*(HANDLE *)(iVar1 + 4),0x220410,&param_1,3,local_8,4,&local_4,
                          (LPOVERLAPPED)0x0);
  if (BVar4 == 0) {
    return '\0';
  }
  bVar2 = 0;
  if ((byte)(local_8[0] - 2U) != 0) {
    bVar2 = (byte)(local_8[0] - 2U) >> 1;
  }
  return bVar2 + 1;
}



/* ================================================================
 * Function: USBDRVD_GetStringDescriptor
 * Address:  10001860
 * ================================================================ */

int USBDRVD_GetStringDescriptor
              (int param_1,undefined2 param_2,undefined1 param_3,int param_4,char *param_5)

{
  size_t _Size;
  char cVar1;
  int iVar2;
  void *lpOutBuffer;
  int iVar3;
  BOOL BVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  DWORD local_4;
  
                    /* 0x1860  11  USBDRVD_GetStringDescriptor */
  iVar2 = param_4;
  _Size = param_4 * 2 + 4;
  lpOutBuffer = _malloc(_Size);
  iVar3 = FUN_10001050(param_1);
  if (iVar3 == 0) {
    return 0;
  }
  if (lpOutBuffer == (void *)0x0) {
    return 0;
  }
  param_4 = CONCAT31(CONCAT12(param_4._3_1_,param_2),param_3);
  BVar4 = DeviceIoControl(*(HANDLE *)(param_1 + 4),0x220410,&param_4,3,lpOutBuffer,_Size,&local_4,
                          (LPOVERLAPPED)0x0);
  pcVar8 = param_5;
  if (BVar4 == 0) {
    FUN_10003368(lpOutBuffer);
    return 0;
  }
  uVar6 = 2;
  *param_5 = '\0';
  if (2 < (uint)(iVar2 * 2)) {
    do {
      uVar5 = 0xffffffff;
      pcVar7 = pcVar8;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      wsprintfA(pcVar8 + (~uVar5 - 1),&DAT_1000a038,(uint)*(byte *)(uVar6 + (int)lpOutBuffer));
      uVar6 = uVar6 + 2;
    } while (uVar6 < (uint)(iVar2 * 2));
  }
  uVar6 = 0xffffffff;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  return ~uVar6 - 1;
}



/* ================================================================
 * Function: USBDRVD_GetDriverVersion
 * Address:  10001950
 * ================================================================ */

undefined4 USBDRVD_GetDriverVersion(DWORD param_1,uint *param_2,uint *param_3)

{
  DWORD DVar1;
  int iVar2;
  BOOL BVar3;
  uint local_8 [2];
  
                    /* 0x1950  12  USBDRVD_GetDriverVersion */
  DVar1 = param_1;
  iVar2 = FUN_10001050(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  BVar3 = DeviceIoControl(*(HANDLE *)(DVar1 + 4),0x220400,(LPVOID)0x0,0,local_8,3,&param_1,
                          (LPOVERLAPPED)0x0);
  if (BVar3 == 0) {
    return 0;
  }
  *param_2 = local_8[0] & 0xff;
  *param_3 = local_8[0] >> 8 & 0xff;
  return 8;
}



/* ================================================================
 * Function: USBDRVD_SelectInterface
 * Address:  100019c0
 * ================================================================ */

void USBDRVD_SelectInterface(int param_1,undefined1 param_2,undefined1 param_3)

{
  int iVar1;
  undefined1 uStack00000009;
  
                    /* 0x19c0  13  USBDRVD_SelectInterface */
  uStack00000009 = param_3;
  iVar1 = FUN_10001050(param_1);
  if (iVar1 == 0) {
    return;
  }
  DeviceIoControl(*(HANDLE *)(param_1 + 4),0x220430,&param_2,2,(LPVOID)0x0,0,(LPDWORD)&param_3,
                  (LPOVERLAPPED)0x0);
  return;
}



/* ================================================================
 * Function: USBDRVD_InterruptRead
 * Address:  10001a10
 * ================================================================ */

void USBDRVD_InterruptRead(int param_1,undefined4 param_2,LPVOID param_3,DWORD param_4)

{
                    /* 0x1a10  14  USBDRVD_InterruptRead */
  USBDRVD_BulkRead(param_1,param_2,param_3,param_4);
  return;
}



/* ================================================================
 * Function: USBDRVD_InterruptWrite
 * Address:  10001a30
 * ================================================================ */

void USBDRVD_InterruptWrite(int param_1,undefined4 param_2,LPVOID param_3,DWORD param_4)

{
                    /* 0x1a30  15  USBDRVD_InterruptWrite */
  USBDRVD_BulkWrite(param_1,param_2,param_3,param_4);
  return;
}



/* ================================================================
 * Function: USBDRVD_ISORead
 * Address:  10001a50
 * ================================================================ */

undefined4 USBDRVD_ISORead(int param_1)

{
                    /* 0x1a50  16  USBDRVD_ISORead
                       0x1a50  17  USBDRVD_ISOWrite */
  FUN_10001050(param_1);
  return 0;
}



/* ================================================================
 * Function: USBDRVD_GetLanguageIDs
 * Address:  10001a60
 * ================================================================ */

undefined4 USBDRVD_GetLanguageIDs(int param_1)

{
                    /* 0x1a60  18  USBDRVD_GetLanguageIDs */
  FUN_10001050(param_1);
  return 0;
}



/* ================================================================
 * Function: USBDRVD_GetNumberOfLanguageIDs
 * Address:  10001a70
 * ================================================================ */

undefined4 USBDRVD_GetNumberOfLanguageIDs(int param_1)

{
                    /* 0x1a70  19  USBDRVD_GetNumberOfLanguageIDs */
  FUN_10001050(param_1);
  return 0;
}



/* ================================================================
 * Function: USBDRVD_VendorOrClassRequestOut
 * Address:  10001a80
 * ================================================================ */

uint USBDRVD_VendorOrClassRequestOut
               (int param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
               undefined2 param_5,undefined2 param_6,LPVOID param_7,DWORD param_8)

{
  int iVar1;
  BOOL BVar2;
  DWORD local_10;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined1 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
                    /* 0x1a80  20  USBDRVD_VendorOrClassRequestOut */
  local_10 = 0;
  iVar1 = FUN_10001050(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  local_b = param_2;
  local_a = param_3;
  local_6 = param_5;
  local_4 = param_6;
  local_c = 0;
  local_9 = 0;
  local_8 = param_4;
  if ((param_8 != 0) && (param_7 == (LPVOID)0x0)) {
    SetLastError(0x57);
    return 0;
  }
  BVar2 = DeviceIoControl(*(HANDLE *)(param_1 + 4),0x220425,&local_c,10,param_7,param_8,&local_10,
                          (LPOVERLAPPED)0x0);
  return -(uint)(BVar2 != 0) & local_10;
}



/* ================================================================
 * Function: USBDRVD_VendorOrClassRequestIn
 * Address:  10001b30
 * ================================================================ */

uint USBDRVD_VendorOrClassRequestIn
               (int param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
               undefined2 param_5,undefined2 param_6,LPVOID param_7,DWORD param_8)

{
  int iVar1;
  BOOL BVar2;
  DWORD local_10;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined1 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
                    /* 0x1b30  21  USBDRVD_VendorOrClassRequestIn */
  local_10 = 0;
  iVar1 = FUN_10001050(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  if ((param_8 != 0) && (param_7 == (LPVOID)0x0)) {
    SetLastError(0x57);
    return 0;
  }
  local_b = param_2;
  local_a = param_3;
  local_8 = param_4;
  local_6 = param_5;
  local_4 = param_6;
  local_c = 1;
  local_9 = 0;
  BVar2 = DeviceIoControl(*(HANDLE *)(param_1 + 4),0x220425,&local_c,10,param_7,param_8,&local_10,
                          (LPOVERLAPPED)0x0);
  return -(uint)(BVar2 != 0) & local_10;
}



/* ================================================================
 * Function: USBDRVD_BulkRead
 * Address:  10001be0
 * ================================================================ */

undefined4 USBDRVD_BulkRead(int param_1,undefined4 param_2,LPVOID param_3,DWORD param_4)

{
  int iVar1;
  DWORD local_4;
  
                    /* 0x1be0  22  USBDRVD_BulkRead */
  local_4 = 0;
  iVar1 = FUN_10001050(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  DeviceIoControl(*(HANDLE *)(param_1 + 4),0x220429,&param_2,4,param_3,param_4,&local_4,
                  (LPOVERLAPPED)0x0);
  return local_4;
}



/* ================================================================
 * Function: USBDRVD_BulkWrite
 * Address:  10001c30
 * ================================================================ */

undefined4 USBDRVD_BulkWrite(int param_1,undefined4 param_2,LPVOID param_3,DWORD param_4)

{
  int iVar1;
  DWORD local_4;
  
                    /* 0x1c30  23  USBDRVD_BulkWrite */
  local_4 = 0;
  iVar1 = FUN_10001050(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  DeviceIoControl(*(HANDLE *)(param_1 + 4),0x22042e,&param_2,4,param_3,param_4,&local_4,
                  (LPOVERLAPPED)0x0);
  return local_4;
}



/* ================================================================
 * Function: FUN_10001c80
 * Address:  10001c80
 * ================================================================ */

bool FUN_10001c80(int param_1,int param_2)

{
  undefined2 uVar1;
  uint uVar2;
  undefined1 local_1;
  
  if (param_2 == 0) {
    uVar1 = 0x7f92;
  }
  else {
    if (param_2 != 1) {
      return false;
    }
    uVar1 = 0xe600;
  }
  uVar2 = USBDRVD_VendorOrClassRequestOut(param_1,2,0,0xa0,uVar1,0,&local_1,1);
  return (bool)('\x01' - (uVar2 != 1));
}



/* ================================================================
 * Function: FUN_10001cd0
 * Address:  10001cd0
 * ================================================================ */

bool __thiscall FUN_10001cd0(uint3 param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  uint uVar2;
  undefined4 uStack_4;
  
  uStack_4 = (uint)param_1;
  if (param_3 == 0) {
    uVar1 = 0x7f92;
  }
  else {
    if (param_3 != 1) {
      return false;
    }
    uVar1 = 0xe600;
  }
  uVar2 = USBDRVD_VendorOrClassRequestOut(param_2,2,0,0xa0,uVar1,0,(LPVOID)((int)&uStack_4 + 3),1);
  return (bool)('\x01' - (uVar2 != 1));
}



/* ================================================================
 * Function: FUN_10001d20
 * Address:  10001d20
 * ================================================================ */

DWORD FUN_10001d20(int param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  DWORD DVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = param_2;
  if (param_2 < param_4 + param_2) {
    do {
      uVar4 = (param_2 - uVar3) + param_4;
      if (0x40 < uVar4) {
        uVar4 = 0x40;
      }
      uVar1 = USBDRVD_VendorOrClassRequestOut
                        (param_1,2,0,0xa0,(short)uVar3,0,(LPVOID)((uVar3 - param_2) + param_3),uVar4
                        );
      if (uVar1 != uVar4) {
        DVar2 = GetLastError();
        return DVar2;
      }
      uVar3 = uVar3 + 0x40;
    } while (uVar3 < param_2 + param_4);
  }
  return 0;
}



/* ================================================================
 * Function: FUN_10001da0
 * Address:  10001da0
 * ================================================================ */

DWORD FUN_10001da0(int param_1,int param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  DWORD DVar2;
  uint3 extraout_ECX;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  undefined1 local_4;
  undefined1 local_3;
  undefined1 local_2;
  
  local_38 = 0x90;
  local_37 = 0x7f;
  local_32 = 0x90;
  local_31 = 0x7f;
  local_29 = 0xe2;
  local_25 = 8;
  local_24 = 0xe2;
  local_21 = 8;
  local_20 = 0xe2;
  local_1d = 8;
  local_1c = 8;
  local_1b = 0xe2;
  local_36 = 0x9e;
  local_35 = 0x74;
  local_34 = 0xc0;
  local_33 = 0xf0;
  local_30 = 0x95;
  local_2f = 0xf0;
  local_2e = 0x75;
  local_2d = 0x92;
  local_2c = 0;
  local_2b = 0x78;
  local_2a = 0x24;
  local_28 = 0x60;
  local_27 = 0x10;
  local_26 = 0xff;
  local_23 = 0xf5;
  local_22 = 0x83;
  local_1f = 0xf5;
  local_1e = 0x82;
  local_1a = 0xf0;
  local_19 = 0xa3;
  local_18 = 0xdf;
  local_17 = 0xfa;
  local_16 = 0x80;
  local_15 = 0xfe;
  local_14 = 0xf;
  local_13 = 0xff;
  local_12 = 0xf0;
  local_11 = 0;
  local_10 = 0x4d;
  local_f = 0x6f;
  local_e = 0x76;
  local_d = 0x65;
  local_c = 0x72;
  local_b = 0x20;
  local_a = 0x49;
  local_9 = 0x6e;
  local_8 = 0x73;
  local_7 = 0x74;
  local_6 = 0x61;
  local_5 = 0x6c;
  local_4 = 0x6c;
  local_3 = 0x65;
  local_2 = 100;
  bVar1 = FUN_10001c80(param_1,param_2);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    DVar2 = GetLastError();
    return DVar2;
  }
  DVar2 = FUN_10001d20(param_1,0,(int)&local_38,0x37);
  if (DVar2 != 0) {
    FUN_10001cd0(extraout_ECX,param_1,param_2);
  }
  return 0;
}



/* ================================================================
 * Function: FUN_10001f00
 * Address:  10001f00
 * ================================================================ */

undefined4 FUN_10001f00(int *param_1,undefined1 *param_2)

{
  uint uVar1;
  
  *param_2 = *(undefined1 *)(*param_1 + param_1[2]);
  uVar1 = param_1[2];
  param_1[2] = uVar1 + 1;
  if (uVar1 < (uint)param_1[1]) {
    return 1;
  }
  return 0;
}



/* ================================================================
 * Function: FUN_10001f30
 * Address:  10001f30
 * ================================================================ */

undefined4 FUN_10001f30(int *param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_10001f00(param_1,param_2);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*param_2 == ':') break;
    iVar1 = FUN_10001f00(param_1,param_2);
  }
  pcVar2 = param_2 + 1;
  iVar1 = FUN_10001f00(param_1,pcVar2);
  while ((iVar1 != 0 && (*pcVar2 != '\n'))) {
    pcVar2 = pcVar2 + 1;
    iVar1 = FUN_10001f00(param_1,pcVar2);
  }
  return 1;
}



/* ================================================================
 * Function: FUN_10001f90
 * Address:  10001f90
 * ================================================================ */

uint FUN_10001f90(char param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if ((int)param_1 == (uint)(ushort)L"0123456789ABCDEF"[(short)uVar1]) {
      return uVar1;
    }
    uVar1 = uVar1 + 1;
  } while ((ushort)uVar1 < 0x22);
  return uVar1 & 0xffff0000;
}



/* ================================================================
 * Function: USBDRVD_EZUSBDownloadRam
 * Address:  10001fc0
 * ================================================================ */

DWORD USBDRVD_EZUSBDownloadRam
                (HINSTANCE param_1,HWND param_2,int param_3,int param_4,LPCSTR param_5,char param_6)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  undefined3 extraout_var;
  FILE *pFVar6;
  size_t _Size;
  char *pcVar7;
  uint uVar8;
  DWORD DVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined4 extraout_ECX;
  char *pcVar13;
  DWORD DStack_a4;
  int iStack_a0;
  HWND pHStack_98;
  char *pcStack_94;
  uint uStack_90;
  DWORD DStack_8c;
  tagRECT tStack_88;
  byte abStack_78 [40];
  char cStack_50;
  undefined4 uStack_4f;
  
                    /* 0x1fc0  24  USBDRVD_EZUSBDownloadRam */
  if ((param_1 == (HINSTANCE)0x0) || (param_2 == (HWND)0x0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    Ordinal_17();
    GetClientRect(param_2,&tStack_88);
  }
  if (param_5 == (LPCSTR)0x0) {
    return 0x57;
  }
  iVar5 = FUN_10001050(param_3);
  if (iVar5 == 0) {
    return 0x57;
  }
  bVar2 = FUN_10001c80(param_3,param_4);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    return 0x57;
  }
  pFVar6 = (FILE *)FUN_10003975(param_5,&DAT_1000a050);
  if (pFVar6 == (FILE *)0x0) {
    return 0x57;
  }
  FUN_1000388b((int *)pFVar6,0,2);
  _Size = FUN_10003708((char *)pFVar6);
  FUN_1000388b((int *)pFVar6,0,0);
  pcVar7 = _malloc(_Size);
  if (pcVar7 == (char *)0x0) {
    FUN_1000368b(pFVar6);
    return 8;
  }
  uVar8 = FUN_10003574(pcVar7,1,_Size,(int *)pFVar6);
  FUN_1000368b(pFVar6);
  if (uVar8 == 0) {
    FUN_10003368(pcVar7);
    return 5;
  }
  DVar9 = FUN_10001da0(param_3,param_4);
  if (DVar9 != 0) {
    FUN_10003368(pcVar7);
    return DVar9;
  }
  pcStack_94 = pcVar7;
  uStack_90 = uVar8;
  if (bVar1) {
    pHStack_98 = CreateWindowExA(0,s_msctls_progress32_1000a03c,(LPCSTR)0x0,0x50000000,
                                 tStack_88.left,tStack_88.bottom + -8,tStack_88.right,8,param_2,
                                 (HMENU)0x0,param_1,(LPVOID)0x0);
  }
  iVar5 = 0;
  DStack_8c = 0;
  iVar10 = FUN_10001f30((int *)&pcStack_94,&cStack_50);
  while (iVar10 != 0) {
    iVar5 = iVar5 + 1;
    iVar10 = FUN_10001f30((int *)&pcStack_94,&cStack_50);
  }
  if (bVar1) {
    SendMessageA(pHStack_98,0x401,0,iVar5 << 0x11);
    SendMessageA(pHStack_98,0x404,1,0);
  }
  iStack_a0 = 1;
  DStack_a4 = 0;
  do {
    if (DStack_a4 != 0) break;
    DStack_8c = DStack_a4;
    iVar5 = FUN_10001f30((int *)&pcStack_94,&cStack_50);
    if (iVar5 != 0) {
      while (DStack_a4 == 0) {
        uVar8 = FUN_10001f90((char)uStack_4f);
        uVar11 = FUN_10001f90((char)((uint)uStack_4f >> 8));
        abStack_78[0] = (char)uVar8 * '\x10' + (char)uVar11;
        iVar5 = 1;
        uVar8 = (uint)abStack_78[0];
        if (uVar8 != 0xfffffffc && uVar8 != 0xfffffffb) {
          pcVar13 = (char *)((int)&uStack_4f + 3);
          do {
            uVar11 = FUN_10001f90(pcVar13[-1]);
            uVar12 = FUN_10001f90(*pcVar13);
            abStack_78[iVar5] = (char)uVar11 * '\x10' + (char)uVar12;
            iVar5 = iVar5 + 1;
            pcVar13 = pcVar13 + 2;
          } while (iVar5 < (int)(uVar8 + 5));
        }
        if (iStack_a0 == 1) {
          iVar5 = 0;
          cVar3 = '\0';
          if (uVar8 != 0xfffffffc) {
            do {
              cVar3 = cVar3 + abStack_78[iVar5];
              iVar5 = iVar5 + 1;
            } while (iVar5 < (int)(uVar8 + 4));
          }
          if (-cVar3 != abStack_78[uVar8 + 4]) {
            DStack_a4 = 0x57;
            iStack_a0 = 0xff;
            break;
          }
        }
        if (bVar1) {
          SendMessageA(pHStack_98,0x405,0,0);
        }
        uVar4 = (ushort)abStack_78[1] * 0x100 + (ushort)abStack_78[2];
        if (abStack_78[3] == '\0') {
          if (iStack_a0 == 1) {
            if ((0x1fff < uVar4) &&
               (((DStack_a4 = FUN_10001d20(param_3,0x24,(int)abStack_78,uVar8 + 4), DStack_a4 != 0
                 || (bVar2 = FUN_10001cd0((uint3)extraout_ECX,param_3,param_4),
                    CONCAT31(extraout_var_00,bVar2) == 0)) ||
                (bVar2 = FUN_10001c80(param_3,param_4), CONCAT31(extraout_var_01,bVar2) == 0))))
            break;
          }
          else if (((iStack_a0 == 2) && (uVar4 + uVar8 < 0x1b3f)) &&
                  (DStack_a4 = FUN_10001d20(param_3,(uint)uVar4,(int)(abStack_78 + 4),uVar8),
                  DStack_a4 != 0)) break;
        }
        iVar5 = FUN_10001f30((int *)&pcStack_94,&cStack_50);
        if (iVar5 == 0) break;
      }
    }
    iStack_a0 = iStack_a0 + 1;
  } while (iStack_a0 < 3);
  if ((param_6 != '\0') && (DStack_a4 == 0)) {
    FUN_10001cd0((uint3)param_3,param_3,param_4);
  }
  FUN_10003368(pcVar7);
  if (bVar1) {
    DestroyWindow(pHStack_98);
  }
  return DStack_a4;
}



/* ================================================================
 * Function: USBDRVD_EZUSBDownloadRamFromBuffer
 * Address:  10002400
 * ================================================================ */

DWORD USBDRVD_EZUSBDownloadRamFromBuffer
                (HINSTANCE param_1,HWND param_2,int param_3,int param_4,int param_5,
                undefined4 param_6,char param_7)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  undefined3 extraout_var;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int iVar10;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  int extraout_ECX_07;
  char *pcVar11;
  DWORD DStack_a0;
  int iStack_9c;
  HWND pHStack_98;
  int iStack_94;
  undefined4 uStack_90;
  DWORD DStack_8c;
  tagRECT tStack_88;
  byte abStack_78 [40];
  char cStack_50;
  undefined4 uStack_4f;
  
                    /* 0x2400  100  USBDRVD_EZUSBDownloadRamFromBuffer */
  if ((param_1 == (HINSTANCE)0x0) || (param_2 == (HWND)0x0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    Ordinal_17();
    GetClientRect(param_2,&tStack_88);
  }
  if (param_5 == 0) {
    return 0x57;
  }
  iVar5 = FUN_10001050(param_3);
  if (iVar5 == 0) {
    return 0x57;
  }
  bVar2 = FUN_10001c80(param_3,param_4);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    return 0x57;
  }
  DStack_a0 = FUN_10001da0(param_3,param_4);
  if (DStack_a0 == 0) {
    iStack_94 = param_5;
    uStack_90 = param_6;
    if (bVar1) {
      pHStack_98 = CreateWindowExA(0,s_msctls_progress32_1000a03c,(LPCSTR)0x0,0x50000000,
                                   tStack_88.left,tStack_88.bottom + -8,tStack_88.right,8,param_2,
                                   (HMENU)0x0,param_1,(LPVOID)0x0);
    }
    iVar5 = 0;
    DStack_8c = 0;
    iVar6 = FUN_10001f30(&iStack_94,&cStack_50);
    iVar10 = extraout_ECX;
    while (iVar6 != 0) {
      iVar5 = iVar5 + 1;
      iVar6 = FUN_10001f30(&iStack_94,&cStack_50);
      iVar10 = extraout_ECX_00;
    }
    if (bVar1) {
      SendMessageA(pHStack_98,0x401,0,iVar5 << 0x11);
      SendMessageA(pHStack_98,0x404,1,0);
      iVar10 = extraout_ECX_01;
    }
    iStack_9c = 1;
    do {
      if (DStack_a0 != 0) break;
      DStack_8c = DStack_a0;
      iVar5 = FUN_10001f30(&iStack_94,&cStack_50);
      iVar10 = extraout_ECX_02;
      if (iVar5 != 0) {
        while (DStack_a0 == 0) {
          uVar7 = FUN_10001f90((char)uStack_4f);
          uVar8 = FUN_10001f90((char)((uint)uStack_4f >> 8));
          abStack_78[0] = (char)uVar7 * '\x10' + (char)uVar8;
          iVar5 = 1;
          uVar7 = (uint)abStack_78[0];
          if (uVar7 != 0xfffffffc && uVar7 != 0xfffffffb) {
            pcVar11 = (char *)((int)&uStack_4f + 3);
            do {
              uVar8 = FUN_10001f90(pcVar11[-1]);
              uVar9 = FUN_10001f90(*pcVar11);
              abStack_78[iVar5] = (char)uVar8 * '\x10' + (char)uVar9;
              iVar5 = iVar5 + 1;
              pcVar11 = pcVar11 + 2;
            } while (iVar5 < (int)(uVar7 + 5));
          }
          if (iStack_9c == 1) {
            iVar10 = 0;
            cVar3 = '\0';
            if (uVar7 != 0xfffffffc) {
              do {
                cVar3 = cVar3 + abStack_78[iVar10];
                iVar10 = iVar10 + 1;
              } while (iVar10 < (int)(uVar7 + 4));
            }
            if (-cVar3 != abStack_78[uVar7 + 4]) {
              DStack_a0 = 0x57;
              iStack_9c = 0xff;
              break;
            }
          }
          if (bVar1) {
            SendMessageA(pHStack_98,0x405,0,0);
          }
          uVar4 = (ushort)abStack_78[1] * 0x100 + (ushort)abStack_78[2];
          if (abStack_78[3] == '\0') {
            if (iStack_9c == 1) {
              if ((0x1fff < uVar4) &&
                 (((DStack_a0 = FUN_10001d20(param_3,0x24,(int)abStack_78,uVar7 + 4),
                   iVar10 = extraout_ECX_03, DStack_a0 != 0 ||
                   (bVar2 = FUN_10001cd0((uint3)extraout_ECX_03,param_3,param_4),
                   iVar10 = extraout_ECX_04, CONCAT31(extraout_var_00,bVar2) == 0)) ||
                  (bVar2 = FUN_10001c80(param_3,param_4), iVar10 = extraout_ECX_05,
                  CONCAT31(extraout_var_01,bVar2) == 0)))) break;
            }
            else if (((iStack_9c == 2) && (uVar4 + uVar7 < 0x1b3f)) &&
                    (DStack_a0 = FUN_10001d20(param_3,(uint)uVar4,(int)(abStack_78 + 4),uVar7),
                    iVar10 = extraout_ECX_06, DStack_a0 != 0)) break;
          }
          iVar5 = FUN_10001f30(&iStack_94,&cStack_50);
          iVar10 = extraout_ECX_07;
          if (iVar5 == 0) break;
        }
      }
      iStack_9c = iStack_9c + 1;
    } while (iStack_9c < 3);
    if ((param_7 != '\0') && (DStack_a0 == 0)) {
      FUN_10001cd0((uint3)iVar10,param_3,param_4);
    }
    if (bVar1) {
      DestroyWindow(pHStack_98);
    }
  }
  return DStack_a0;
}



/* ================================================================
 * Function: USBDRVD_EZUSBDownloadI2C
 * Address:  10002760
 * ================================================================ */

DWORD USBDRVD_EZUSBDownloadI2C(HINSTANCE param_1,HWND param_2,int param_3,LPCSTR param_4)

{
  bool bVar1;
  int iVar2;
  FILE *pFVar3;
  char *pcVar4;
  uint uVar5;
  HWND hWnd;
  uint uVar6;
  uint uVar7;
  DWORD DVar8;
  tagRECT tStack_10;
  
                    /* 0x2760  25  USBDRVD_EZUSBDownloadI2C */
  if ((param_1 == (HINSTANCE)0x0) || (param_2 == (HWND)0x0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    Ordinal_17();
    GetClientRect(param_2,&tStack_10);
  }
  iVar2 = FUN_10001050(param_3);
  if (iVar2 == 0) {
    return 0x57;
  }
  if (param_4 == (LPCSTR)0x0) {
    return 0x57;
  }
  pFVar3 = (FILE *)FUN_10003975(param_4,&DAT_1000a050);
  if (pFVar3 == (FILE *)0x0) {
    return 0x57;
  }
  pcVar4 = _malloc(0x1c00);
  if (pcVar4 == (char *)0x0) {
    FUN_1000368b(pFVar3);
    return 8;
  }
  uVar5 = FUN_10003574(pcVar4,1,0x1c00,(int *)pFVar3);
  FUN_1000368b(pFVar3);
  if (uVar5 == 0) {
    FUN_10003368(pcVar4);
    return 5;
  }
  hWnd = (HWND)param_1;
  if (bVar1) {
    hWnd = CreateWindowExA(0,s_msctls_progress32_1000a03c,(LPCSTR)0x0,0x50000000,tStack_10.left,
                           tStack_10.bottom + -8,tStack_10.right,8,param_2,(HMENU)0x0,param_1,
                           (LPVOID)0x0);
    SendMessageA(hWnd,0x401,0,(uVar5 >> 6) << 0x10);
    SendMessageA(hWnd,0x404,1,0);
  }
  uVar7 = 0;
  param_1 = (HINSTANCE)0x0;
  if (uVar5 != 0) {
    do {
      DVar8 = uVar5 - uVar7;
      if (0x40 < DVar8) {
        DVar8 = 0x40;
      }
      uVar6 = USBDRVD_VendorOrClassRequestOut(param_3,2,0,0xa2,(short)uVar7,0,pcVar4 + uVar7,DVar8);
      if (uVar6 != DVar8) {
        param_1 = (HINSTANCE)GetLastError();
        break;
      }
      if (bVar1) {
        SendMessageA(hWnd,0x405,0,0);
      }
      uVar7 = uVar7 + 0x40;
    } while (uVar7 < uVar5);
  }
  if (bVar1) {
    DestroyWindow(hWnd);
  }
  FUN_10003368(pcVar4);
  return (DWORD)param_1;
}



/* ================================================================
 * Function: USBDRVD_EZUSBDownloadI2CFromBuffer
 * Address:  10002950
 * ================================================================ */

DWORD USBDRVD_EZUSBDownloadI2CFromBuffer
                (HINSTANCE param_1,HWND param_2,int param_3,HWND param_4,uint param_5)

{
  bool bVar1;
  int iVar2;
  HWND hWnd;
  uint uVar3;
  uint uVar4;
  DWORD DVar5;
  tagRECT tStack_10;
  
                    /* 0x2950  101  USBDRVD_EZUSBDownloadI2CFromBuffer */
  if ((param_1 == (HINSTANCE)0x0) || (param_2 == (HWND)0x0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    Ordinal_17();
    GetClientRect(param_2,&tStack_10);
  }
  iVar2 = FUN_10001050(param_3);
  if (iVar2 == 0) {
    return 0x57;
  }
  if (param_4 == (HWND)0x0) {
    return 0x57;
  }
  hWnd = param_4;
  if (bVar1) {
    hWnd = CreateWindowExA(0,s_msctls_progress32_1000a03c,(LPCSTR)0x0,0x50000000,tStack_10.left,
                           tStack_10.bottom + -8,tStack_10.right,8,param_2,(HMENU)0x0,param_1,
                           (LPVOID)0x0);
    SendMessageA(hWnd,0x401,0,(param_5 >> 6) << 0x10);
    SendMessageA(hWnd,0x404,1,0);
  }
  uVar4 = 0;
  param_2 = (HWND)0x0;
  if (param_5 != 0) {
    do {
      DVar5 = param_5 - uVar4;
      if (0x40 < DVar5) {
        DVar5 = 0x40;
      }
      uVar3 = USBDRVD_VendorOrClassRequestOut
                        (param_3,2,0,0xa2,(short)uVar4,0,(LPVOID)((int)&param_4->unused + uVar4),
                         DVar5);
      if (uVar3 != DVar5) {
        param_2 = (HWND)GetLastError();
        break;
      }
      if (bVar1) {
        SendMessageA(hWnd,0x405,0,0);
      }
      uVar4 = uVar4 + 0x40;
    } while (uVar4 < param_5);
  }
  if (bVar1) {
    DestroyWindow(hWnd);
  }
  return (DWORD)param_2;
}



/* ================================================================
 * Function: FUN_10002ab0
 * Address:  10002ab0
 * ================================================================ */

undefined4 FUN_10002ab0(int param_1)

{
  int iVar1;
  
  iVar1 = _strncmp((char *)(param_1 + 0xc),&DAT_1000a054,2);
  if (iVar1 == 0) {
    return 1;
  }
  SetLastError(0x57);
  return 0;
}



/* ================================================================
 * Function: USBDRVD_PipeOpen
 * Address:  10002ae0
 * ================================================================ */

uint * USBDRVD_PipeOpen(uint param_1,uint param_2,DWORD param_3)

{
  uint uVar1;
  uint *puVar2;
  char local_104 [260];
  
                    /* 0x2ae0  26  USBDRVD_PipeOpen */
  uVar1 = USBDRVD_GetDevicePath(param_1);
  if (uVar1 == 0) {
    return (uint *)0xffffffff;
  }
  puVar2 = USBDRVD_PipeOpenPath(local_104,param_2,param_3);
  return puVar2;
}



/* ================================================================
 * Function: USBDRVD_PipeOpenPath
 * Address:  10002b40
 * ================================================================ */

uint * USBDRVD_PipeOpenPath(char *param_1,uint param_2,DWORD param_3)

{
  char cVar1;
  uint *puVar2;
  LPCSTR lpFileName;
  HANDLE pvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  uint *puVar9;
  LPCSTR pCVar10;
  uint *puVar11;
  CHAR local_c [12];
  
                    /* 0x2b40  40  USBDRVD_PipeOpenPath */
  puVar2 = _malloc(0x10);
  if ((puVar2 != (uint *)0x0) && (param_2 < 0x10)) {
    *puVar2 = param_2;
    puVar2[2] = param_3;
    wsprintfA(local_c,s_PIPE_02d_1000a05c,param_2);
    uVar4 = 0xffffffff;
    puVar2[1] = 0xffffffff;
    pcVar7 = param_1;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    lpFileName = _malloc(~uVar4 + 9);
    if (lpFileName != (LPCSTR)0x0) {
      uVar4 = 0xffffffff;
      do {
        pcVar7 = param_1;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar7 = param_1 + 1;
        cVar1 = *param_1;
        param_1 = pcVar7;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar7 = pcVar7 + -uVar4;
      pcVar8 = lpFileName;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar8 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      }
      uVar4 = 0xffffffff;
      pcVar7 = &DAT_1000a058;
      do {
        pcVar8 = pcVar7;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar8 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      iVar6 = -1;
      pCVar10 = lpFileName;
      do {
        pcVar7 = pCVar10;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar7 = pCVar10 + 1;
        cVar1 = *pCVar10;
        pCVar10 = pcVar7;
      } while (cVar1 != '\0');
      pcVar8 = pcVar8 + -uVar4;
      pcVar7 = pcVar7 + -1;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar7 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar7 = pcVar7 + 1;
      }
      uVar4 = 0xffffffff;
      pcVar7 = local_c;
      do {
        pcVar8 = pcVar7;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar8 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      iVar6 = -1;
      pCVar10 = lpFileName;
      do {
        pcVar7 = pCVar10;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar7 = pCVar10 + 1;
        cVar1 = *pCVar10;
        pCVar10 = pcVar7;
      } while (cVar1 != '\0');
      pcVar8 = pcVar8 + -uVar4;
      pcVar7 = pcVar7 + -1;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar7 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar7 = pcVar7 + 1;
      }
      pvVar3 = CreateFileA(lpFileName,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,param_3,(HANDLE)0x0)
      ;
      puVar2[1] = (uint)pvVar3;
      FUN_10003368(lpFileName);
      if (puVar2[1] == 0xffffffff) {
        FUN_10003368(puVar2);
        SetLastError(0x57);
        return (uint *)0xffffffff;
      }
      uVar4 = 0xffffffff;
      pcVar7 = &DAT_1000a054;
      do {
        pcVar8 = pcVar7;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar8 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      puVar9 = (uint *)(pcVar8 + -uVar4);
      puVar11 = puVar2 + 3;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(char *)puVar11 = (char)*puVar9;
        puVar9 = (uint *)((int)puVar9 + 1);
        puVar11 = (uint *)((int)puVar11 + 1);
      }
      return puVar2;
    }
    SetLastError(8);
  }
  return (uint *)0xffffffff;
}



/* ================================================================
 * Function: USBDRVD_PipeClose
 * Address:  10002cb0
 * ================================================================ */

void USBDRVD_PipeClose(LPVOID param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
                    /* 0x2cb0  27  USBDRVD_PipeClose */
  iVar2 = FUN_10002ab0((int)param_1);
  if (iVar2 != 0) {
    CloseHandle(*(HANDLE *)((int)param_1 + 4));
    uVar3 = 0xffffffff;
    pcVar5 = &DAT_1000a034;
    do {
      pcVar6 = pcVar5;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar6 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar5 = pcVar6 + -uVar3;
    pcVar6 = (char *)((int)param_1 + 0xc);
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    }
    FUN_10003368(param_1);
  }
  return;
}



/* ================================================================
 * Function: USBDRVD_PipeReset
 * Address:  10002d00
 * ================================================================ */

void USBDRVD_PipeReset(LPVOID param_1)

{
  LPVOID lpInBuffer;
  int iVar1;
  
                    /* 0x2d00  28  USBDRVD_PipeReset */
  lpInBuffer = param_1;
  iVar1 = FUN_10002ab0((int)param_1);
  if (iVar1 == 0) {
    return;
  }
  DeviceIoControl(*(HANDLE *)((int)lpInBuffer + 4),0x220418,lpInBuffer,4,(LPVOID)0x0,0,
                  (LPDWORD)&param_1,(LPOVERLAPPED)0x0);
  return;
}



/* ================================================================
 * Function: USBDRVD_PipeAbort
 * Address:  10002d40
 * ================================================================ */

void USBDRVD_PipeAbort(LPVOID param_1)

{
  LPVOID lpInBuffer;
  int iVar1;
  
                    /* 0x2d40  29  USBDRVD_PipeAbort */
  lpInBuffer = param_1;
  iVar1 = FUN_10002ab0((int)param_1);
  if (iVar1 == 0) {
    return;
  }
  DeviceIoControl(*(HANDLE *)((int)lpInBuffer + 4),0x22041c,lpInBuffer,4,(LPVOID)0x0,0,
                  (LPDWORD)&param_1,(LPOVERLAPPED)0x0);
  return;
}



/* ================================================================
 * Function: USBDRVD_PipeWrite
 * Address:  10002d80
 * ================================================================ */

void USBDRVD_PipeWrite(int param_1,LPCVOID param_2,DWORD param_3,LPDWORD param_4,
                      LPOVERLAPPED param_5)

{
  int iVar1;
  
                    /* 0x2d80  30  USBDRVD_PipeWrite */
  *param_4 = 0;
  iVar1 = FUN_10002ab0(param_1);
  if (iVar1 == 0) {
    return;
  }
  WriteFile(*(HANDLE *)(param_1 + 4),param_2,param_3,param_4,param_5);
  return;
}



/* ================================================================
 * Function: USBDRVD_PipeWriteTimeout
 * Address:  10002dc0
 * ================================================================ */

BOOL USBDRVD_PipeWriteTimeout
               (int param_1,LPCVOID param_2,DWORD param_3,LPDWORD param_4,DWORD param_5)

{
  int iVar1;
  HANDLE hObject;
  BOOL BVar2;
  DWORD DVar3;
  _OVERLAPPED local_14;
  
                    /* 0x2dc0  36  USBDRVD_PipeWriteTimeout */
  *param_4 = 0;
  iVar1 = FUN_10002ab0(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  local_14.Internal = 0;
  local_14.InternalHigh = 0;
  local_14.u.s.Offset = 0;
  local_14.u.s.OffsetHigh = 0;
  local_14.hEvent = (HANDLE)0x0;
  hObject = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  if (hObject == (HANDLE)0x0) {
    return 0;
  }
  local_14.hEvent = hObject;
  BVar2 = WriteFile(*(HANDLE *)(param_1 + 4),param_2,param_3,param_4,&local_14);
  if (BVar2 == 0) {
    DVar3 = GetLastError();
    if (DVar3 == 0x3e5) {
      DVar3 = WaitForSingleObject(hObject,param_5);
      CloseHandle(hObject);
      if (DVar3 == 0) {
        GetOverlappedResult(*(HANDLE *)(param_1 + 4),&local_14,param_4,0);
        return 1;
      }
      CancelIo(*(HANDLE *)(param_1 + 4));
      SetLastError(0x3e3);
      return 0;
    }
  }
  CloseHandle(hObject);
  return BVar2;
}



/* ================================================================
 * Function: USBDRVD_PipeRead
 * Address:  10002ec0
 * ================================================================ */

void USBDRVD_PipeRead(int param_1,LPVOID param_2,DWORD param_3,LPDWORD param_4,LPOVERLAPPED param_5)

{
  int iVar1;
  
                    /* 0x2ec0  31  USBDRVD_PipeRead */
  *param_4 = 0;
  iVar1 = FUN_10002ab0(param_1);
  if (iVar1 == 0) {
    return;
  }
  ReadFile(*(HANDLE *)(param_1 + 4),param_2,param_3,param_4,param_5);
  return;
}



/* ================================================================
 * Function: USBDRVD_PipeReadTimeout
 * Address:  10002f00
 * ================================================================ */

BOOL USBDRVD_PipeReadTimeout(int param_1,LPVOID param_2,DWORD param_3,LPDWORD param_4,DWORD param_5)

{
  int iVar1;
  HANDLE hObject;
  BOOL BVar2;
  DWORD DVar3;
  _OVERLAPPED local_14;
  
                    /* 0x2f00  37  USBDRVD_PipeReadTimeout */
  *param_4 = 0;
  iVar1 = FUN_10002ab0(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 8) & 0x40000000) == 0) {
    SetLastError(0x57);
    return 0;
  }
  local_14.Internal = 0;
  local_14.InternalHigh = 0;
  local_14.u.s.Offset = 0;
  local_14.u.s.OffsetHigh = 0;
  local_14.hEvent = (HANDLE)0x0;
  hObject = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  if (hObject == (HANDLE)0x0) {
    return 0;
  }
  local_14.hEvent = hObject;
  BVar2 = ReadFile(*(HANDLE *)(param_1 + 4),param_2,param_3,param_4,&local_14);
  if (BVar2 == 0) {
    DVar3 = GetLastError();
    if (DVar3 == 0x3e5) {
      DVar3 = WaitForSingleObject(hObject,param_5);
      CloseHandle(hObject);
      if (DVar3 == 0) {
        GetOverlappedResult(*(HANDLE *)(param_1 + 4),&local_14,param_4,0);
        return 1;
      }
      CancelIo(*(HANDLE *)(param_1 + 4));
      SetLastError(0x3e3);
      return 0;
    }
  }
  CloseHandle(hObject);
  return BVar2;
}



/* ================================================================
 * Function: USBDRVD_PipeGetW32Handle
 * Address:  10003020
 * ================================================================ */

undefined4 USBDRVD_PipeGetW32Handle(int param_1)

{
  int iVar1;
  
                    /* 0x3020  42  USBDRVD_PipeGetW32Handle */
  iVar1 = FUN_10002ab0(param_1);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(param_1 + 4);
}



/* ================================================================
 * Function: FUN_10003040
 * Address:  10003040
 * ================================================================ */

HANDLE FUN_10003040(int param_1,DWORD param_2)

{
  DWORD DeviceInterfaceDetailDataSize;
  HDEVINFO DeviceInfoSet;
  BOOL BVar1;
  PSP_DEVICE_INTERFACE_DETAIL_DATA_A DeviceInterfaceDetailData;
  HANDLE pvVar2;
  int iVar3;
  _SP_DEVICE_INTERFACE_DATA *p_Var4;
  DWORD local_20;
  _SP_DEVICE_INTERFACE_DATA local_1c;
  
  p_Var4 = &local_1c;
  local_1c.cbSize = 0;
  for (iVar3 = 6; p_Var4 = (_SP_DEVICE_INTERFACE_DATA *)&p_Var4->InterfaceClassGuid, iVar3 != 0;
      iVar3 = iVar3 + -1) {
    ((GUID *)p_Var4)->Data1 = 0;
  }
  local_20 = 0;
  DeviceInfoSet = SetupDiGetClassDevsA((GUID *)&stack0x0000000c,(PCSTR)0x0,(HWND)0x0,0x12);
  if (DeviceInfoSet == (HDEVINFO)0xffffffff) {
    return (HANDLE)0x0;
  }
  local_1c.cbSize = 0x1c;
  BVar1 = SetupDiEnumDeviceInterfaces
                    (DeviceInfoSet,(PSP_DEVINFO_DATA)0x0,(GUID *)&stack0x0000000c,param_1 - 1,
                     &local_1c);
  if (BVar1 == 0) {
    SetupDiDestroyDeviceInfoList(DeviceInfoSet);
    return (HANDLE)0xffffffff;
  }
  SetupDiGetDeviceInterfaceDetailA
            (DeviceInfoSet,&local_1c,(PSP_DEVICE_INTERFACE_DETAIL_DATA_A)0x0,0,&local_20,
             (PSP_DEVINFO_DATA)0x0);
  DeviceInterfaceDetailDataSize = local_20;
  DeviceInterfaceDetailData = _malloc(local_20);
  DeviceInterfaceDetailData->cbSize = 5;
  BVar1 = SetupDiGetDeviceInterfaceDetailA
                    (DeviceInfoSet,&local_1c,DeviceInterfaceDetailData,DeviceInterfaceDetailDataSize
                     ,&local_20,(PSP_DEVINFO_DATA)0x0);
  if (BVar1 == 0) {
    FUN_10003368(DeviceInterfaceDetailData);
    return (HANDLE)0xffffffff;
  }
  pvVar2 = CreateFileA(DeviceInterfaceDetailData->DevicePath,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0
                       ,3,param_2,(HANDLE)0x0);
  SetupDiDestroyDeviceInfoList(DeviceInfoSet);
  FUN_10003368(DeviceInterfaceDetailData);
  return pvVar2;
}



/* ================================================================
 * Function: FUN_10003150
 * Address:  10003150
 * ================================================================ */

DWORD FUN_10003150(void)

{
  HDEVINFO DeviceInfoSet;
  int iVar1;
  DWORD MemberIndex;
  _SP_DEVICE_INTERFACE_DATA *p_Var2;
  _SP_DEVICE_INTERFACE_DATA local_1c;
  
  p_Var2 = &local_1c;
  local_1c.cbSize = 0;
  for (iVar1 = 6; p_Var2 = (_SP_DEVICE_INTERFACE_DATA *)&p_Var2->InterfaceClassGuid, iVar1 != 0;
      iVar1 = iVar1 + -1) {
    ((GUID *)p_Var2)->Data1 = 0;
  }
  DeviceInfoSet = SetupDiGetClassDevsA((GUID *)&stack0x00000004,(PCSTR)0x0,(HWND)0x0,0x12);
  if (DeviceInfoSet != (HDEVINFO)0xffffffff) {
    MemberIndex = 0;
    local_1c.cbSize = 0x1c;
    iVar1 = SetupDiEnumDeviceInterfaces
                      (DeviceInfoSet,(PSP_DEVINFO_DATA)0x0,(GUID *)&stack0x00000004,0,&local_1c);
    while (iVar1 != 0) {
      MemberIndex = MemberIndex + 1;
      iVar1 = SetupDiEnumDeviceInterfaces
                        (DeviceInfoSet,(PSP_DEVINFO_DATA)0x0,(GUID *)&stack0x00000004,MemberIndex,
                         &local_1c);
    }
    SetupDiDestroyDeviceInfoList(DeviceInfoSet);
    return MemberIndex;
  }
  return 0;
}



/* ================================================================
 * Function: FUN_100031e0
 * Address:  100031e0
 * ================================================================ */

uint FUN_100031e0(int param_1)

{
  char cVar1;
  DWORD DeviceInterfaceDetailDataSize;
  HDEVINFO DeviceInfoSet;
  BOOL BVar2;
  PSP_DEVICE_INTERFACE_DETAIL_DATA_A DeviceInterfaceDetailData;
  int iVar3;
  uint uVar4;
  uint _Count;
  _SP_DEVICE_INTERFACE_DATA *p_Var5;
  CHAR *pCVar6;
  CHAR *_Source;
  char *in_stack_00000018;
  uint in_stack_0000001c;
  DWORD local_20;
  _SP_DEVICE_INTERFACE_DATA local_1c;
  
  p_Var5 = &local_1c;
  local_1c.cbSize = 0;
  for (iVar3 = 6; p_Var5 = (_SP_DEVICE_INTERFACE_DATA *)&p_Var5->InterfaceClassGuid, iVar3 != 0;
      iVar3 = iVar3 + -1) {
    ((GUID *)p_Var5)->Data1 = 0;
  }
  local_20 = 0;
  *in_stack_00000018 = '\0';
  DeviceInfoSet = SetupDiGetClassDevsA((GUID *)&stack0x00000008,(PCSTR)0x0,(HWND)0x0,0x12);
  if (DeviceInfoSet == (HDEVINFO)0xffffffff) {
    return 0;
  }
  local_1c.cbSize = 0x1c;
  BVar2 = SetupDiEnumDeviceInterfaces
                    (DeviceInfoSet,(PSP_DEVINFO_DATA)0x0,(GUID *)&stack0x00000008,param_1 - 1,
                     &local_1c);
  if (BVar2 == 0) {
    SetupDiDestroyDeviceInfoList(DeviceInfoSet);
    return 0;
  }
  SetupDiGetDeviceInterfaceDetailA
            (DeviceInfoSet,&local_1c,(PSP_DEVICE_INTERFACE_DETAIL_DATA_A)0x0,0,&local_20,
             (PSP_DEVINFO_DATA)0x0);
  DeviceInterfaceDetailDataSize = local_20;
  DeviceInterfaceDetailData = _malloc(local_20);
  DeviceInterfaceDetailData->cbSize = 5;
  BVar2 = SetupDiGetDeviceInterfaceDetailA
                    (DeviceInfoSet,&local_1c,DeviceInterfaceDetailData,DeviceInterfaceDetailDataSize
                     ,&local_20,(PSP_DEVINFO_DATA)0x0);
  if (BVar2 == 0) {
    FUN_10003368(DeviceInterfaceDetailData);
    return 0;
  }
  _Source = DeviceInterfaceDetailData->DevicePath;
  uVar4 = 0xffffffff;
  pCVar6 = _Source;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pCVar6;
    pCVar6 = pCVar6 + 1;
  } while (cVar1 != '\0');
  _Count = in_stack_0000001c;
  if (~uVar4 - 1 <= in_stack_0000001c) {
    uVar4 = 0xffffffff;
    pCVar6 = _Source;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pCVar6;
      pCVar6 = pCVar6 + 1;
    } while (cVar1 != '\0');
    _Count = ~uVar4 - 1;
  }
  _strncpy(in_stack_00000018,_Source,_Count);
  in_stack_00000018[_Count] = '\0';
  SetupDiDestroyDeviceInfoList(DeviceInfoSet);
  FUN_10003368(DeviceInterfaceDetailData);
  uVar4 = 0xffffffff;
  pCVar6 = _Source;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pCVar6;
    pCVar6 = pCVar6 + 1;
  } while (cVar1 != '\0');
  if (~uVar4 - 1 <= in_stack_0000001c) {
    uVar4 = 0xffffffff;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *_Source;
      _Source = _Source + 1;
    } while (cVar1 != '\0');
    in_stack_0000001c = ~uVar4 - 1;
  }
  return in_stack_0000001c;
}



/* ================================================================
 * Function: _strncmp
 * Address:  10003330
 * ================================================================ */

/* Library Function - Single Match
    _strncmp
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

int __cdecl _strncmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  char cVar1;
  char cVar2;
  size_t sVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  uVar5 = 0;
  sVar3 = _MaxCount;
  pcVar6 = _Str1;
  if (_MaxCount != 0) {
    do {
      if (sVar3 == 0) break;
      sVar3 = sVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar4 = _MaxCount - sVar3;
    do {
      pcVar6 = _Str2;
      pcVar7 = _Str1;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar7 = _Str1 + 1;
      pcVar6 = _Str2 + 1;
      cVar2 = *_Str1;
      cVar1 = *_Str2;
      _Str2 = pcVar6;
      _Str1 = pcVar7;
    } while (cVar1 == cVar2);
    uVar5 = 0;
    if ((byte)pcVar6[-1] <= (byte)pcVar7[-1]) {
      if (pcVar6[-1] == pcVar7[-1]) {
        return 0;
      }
      uVar5 = 0xfffffffe;
    }
    uVar5 = ~uVar5;
  }
  return uVar5;
}



/* ================================================================
 * Function: FUN_10003368
 * Address:  10003368
 * ================================================================ */

void __cdecl FUN_10003368(LPVOID param_1)

{
  uint *puVar1;
  
  if (param_1 != (LPVOID)0x0) {
    FUN_10003d7d(9);
    puVar1 = (uint *)FUN_10003e31((int)param_1);
    if (puVar1 != (uint *)0x0) {
      FUN_10003e5c(puVar1,(uint)param_1);
      FUN_10003dde(9);
      return;
    }
    FUN_10003dde(9);
    HeapFree(DAT_1000bd1c,0,param_1);
  }
  return;
}



/* ================================================================
 * Function: _malloc
 * Address:  100033b0
 * ================================================================ */

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_1000a7f8);
  return pvVar1;
}



/* ================================================================
 * Function: __nh_malloc
 * Address:  100033c2
 * ================================================================ */

/* Library Function - Single Match
    __nh_malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl __nh_malloc(size_t _Size,int _NhFlag)

{
  int *piVar1;
  int iVar2;
  
  if (_Size < 0xffffffe1) {
    do {
      piVar1 = FUN_100033ee((uint *)_Size);
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = FUN_10004932(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}



/* ================================================================
 * Function: FUN_100033ee
 * Address:  100033ee
 * ================================================================ */

int * __cdecl FUN_100033ee(uint *param_1)

{
  int *piVar1;
  
  if (param_1 <= DAT_1000a138) {
    FUN_10003d7d(9);
    piVar1 = FUN_10004187(param_1);
    FUN_10003dde(9);
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  piVar1 = HeapAlloc(DAT_1000bd1c,0,(int)param_1 + 0xfU & 0xfffffff0);
  return piVar1;
}



/* ================================================================
 * Function: FUN_1000343c
 * Address:  1000343c
 * ================================================================ */

int * __cdecl FUN_1000343c(int *param_1,uint *param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  
  if (param_1 == (int *)0x0) {
    piVar1 = _malloc((size_t)param_2);
  }
  else {
    if (param_2 == (uint *)0x0) {
      FUN_10003368(param_1);
    }
    else {
      do {
        if (param_2 < (uint *)0xffffffe1) {
          FUN_10003d7d(9);
          puVar2 = (uint *)FUN_10003e31((int)param_1);
          if (puVar2 == (uint *)0x0) {
            FUN_10003dde(9);
            if (param_2 == (uint *)0x0) {
              param_2 = (uint *)0x1;
            }
            param_2 = (uint *)((int)param_2 + 0xfU & 0xfffffff0);
            piVar1 = HeapReAlloc(DAT_1000bd1c,0,param_1,(SIZE_T)param_2);
          }
          else {
            if (DAT_1000a138 < param_2) {
LAB_100034db:
              if (param_2 == (uint *)0x0) {
                param_2 = (uint *)0x1;
              }
              param_2 = (uint *)((int)param_2 + 0xfU & 0xfffffff0);
              piVar1 = HeapAlloc(DAT_1000bd1c,0,(SIZE_T)param_2);
              if (piVar1 != (int *)0x0) {
                puVar4 = (uint *)(param_1[-1] - 1U);
                if (param_2 <= (uint *)(param_1[-1] - 1U)) {
                  puVar4 = param_2;
                }
                FUN_10004950(piVar1,param_1,(uint)puVar4);
                FUN_10003e5c(puVar2,(uint)param_1);
              }
            }
            else {
              iVar3 = FUN_1000463c(puVar2,(int)param_1,(int)param_2);
              piVar1 = param_1;
              if (iVar3 == 0) {
                piVar1 = FUN_10004187(param_2);
                if (piVar1 == (int *)0x0) goto LAB_100034db;
                puVar4 = (uint *)(param_1[-1] - 1U);
                if (param_2 <= (uint *)(param_1[-1] - 1U)) {
                  puVar4 = param_2;
                }
                FUN_10004950(piVar1,param_1,(uint)puVar4);
                FUN_10003e5c(puVar2,(uint)param_1);
              }
              if (piVar1 == (int *)0x0) goto LAB_100034db;
            }
            FUN_10003dde(9);
          }
          if (piVar1 != (int *)0x0) {
            return piVar1;
          }
        }
        if (DAT_1000a7f8 == 0) {
          return (int *)0x0;
        }
        iVar3 = FUN_10004932(param_2);
      } while (iVar3 != 0);
    }
    piVar1 = (int *)0x0;
  }
  return piVar1;
}



/* ================================================================
 * Function: FUN_10003574
 * Address:  10003574
 * ================================================================ */

uint __cdecl FUN_10003574(char *param_1,uint param_2,uint param_3,int *param_4)

{
  uint uVar1;
  
  FUN_10004d41((uint)param_4);
  uVar1 = FUN_100035a3(param_1,param_2,param_3,param_4);
  FUN_10004d93((uint)param_4);
  return uVar1;
}



/* ================================================================
 * Function: FUN_100035a3
 * Address:  100035a3
 * ================================================================ */

uint __cdecl FUN_100035a3(char *param_1,uint param_2,uint param_3,int *param_4)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  piVar1 = param_4;
  pcVar6 = (char *)(param_2 * param_3);
  if (pcVar6 == (char *)0x0) {
    param_3 = 0;
  }
  else {
    pcVar5 = param_1;
    param_1 = pcVar6;
    if ((*(ushort *)(param_4 + 3) & 0x10c) == 0) {
      param_4 = (int *)0x1000;
    }
    else {
      param_4 = (int *)param_4[6];
    }
    do {
      if (((*(ushort *)(piVar1 + 3) & 0x10c) == 0) ||
         (pcVar2 = (char *)piVar1[1], pcVar2 == (char *)0x0)) {
        if (param_1 < param_4) {
          uVar4 = FUN_10004de5(piVar1);
          if (uVar4 == 0xffffffff) goto LAB_1000367f;
          *pcVar5 = (char)uVar4;
          param_4 = (int *)piVar1[6];
          pcVar5 = pcVar5 + 1;
          param_1 = param_1 + -1;
        }
        else {
          pcVar2 = param_1;
          if (param_4 != (int *)0x0) {
            pcVar2 = param_1 + -((uint)param_1 % (uint)param_4);
          }
          iVar3 = FUN_10004ec1(piVar1[4],pcVar5,pcVar2);
          if (iVar3 == 0) {
            piVar1[3] = piVar1[3] | 0x10;
LAB_1000367f:
            return (uint)((int)pcVar6 - (int)param_1) / param_2;
          }
          if (iVar3 == -1) {
            piVar1[3] = piVar1[3] | 0x20;
            goto LAB_1000367f;
          }
          param_1 = param_1 + -iVar3;
          pcVar5 = pcVar5 + iVar3;
        }
      }
      else {
        pcVar7 = param_1;
        if (pcVar2 <= param_1) {
          pcVar7 = pcVar2;
        }
        FUN_10004950((undefined4 *)pcVar5,(undefined4 *)*piVar1,(uint)pcVar7);
        param_1 = param_1 + -(int)pcVar7;
        piVar1[1] = piVar1[1] - (int)pcVar7;
        *piVar1 = (int)(pcVar7 + *piVar1);
        pcVar5 = pcVar5 + (int)pcVar7;
      }
    } while (param_1 != (char *)0x0);
  }
  return param_3;
}



/* ================================================================
 * Function: FUN_1000368b
 * Address:  1000368b
 * ================================================================ */

undefined4 __cdecl FUN_1000368b(FILE *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((param_1->_flag & 0x40) == 0) {
    FUN_10004d41((uint)param_1);
    uVar1 = __fclose_lk(param_1);
    FUN_10004d93((uint)param_1);
  }
  else {
    param_1->_flag = 0;
  }
  return uVar1;
}



/* ================================================================
 * Function: __fclose_lk
 * Address:  100036bc
 * ================================================================ */

/* Library Function - Single Match
    __fclose_lk
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl __fclose_lk(FILE *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((param_1->_flag & 0x83) != 0) {
    uVar2 = FUN_10005238((int *)param_1);
    __freebuf(param_1);
    iVar1 = FUN_100050ff(param_1->_file);
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    else if (param_1->_tmpfname != (char *)0x0) {
      FUN_10003368(param_1->_tmpfname);
      param_1->_tmpfname = (char *)0x0;
    }
  }
  param_1->_flag = 0;
  return uVar2;
}



/* ================================================================
 * Function: FUN_10003708
 * Address:  10003708
 * ================================================================ */

int __cdecl FUN_10003708(char *param_1)

{
  int iVar1;
  
  FUN_10004d41((uint)param_1);
  iVar1 = FUN_1000372a(param_1);
  FUN_10004d93((uint)param_1);
  return iVar1;
}



/* ================================================================
 * Function: FUN_1000372a
 * Address:  1000372a
 * ================================================================ */

int __cdecl FUN_1000372a(char *param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  DWORD *pDVar4;
  char *pcVar5;
  DWORD DVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  int local_c;
  DWORD local_8;
  
  pcVar8 = param_1;
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(int *)(param_1 + 4) < 0) {
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
  }
  local_8 = FUN_100055d6(uVar1,0,1);
  if ((int)local_8 < 0) {
LAB_100037b8:
    local_c = -1;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0xc);
    if ((uVar2 & 0x108) == 0) {
      return local_8 - *(int *)(param_1 + 4);
    }
    pcVar5 = *(char **)param_1;
    pcVar7 = *(char **)(param_1 + 8);
    local_c = (int)pcVar5 - (int)pcVar7;
    if ((uVar2 & 3) == 0) {
      if ((uVar2 & 0x80) == 0) {
        pDVar4 = FUN_100053b4();
        *pDVar4 = 0x16;
        goto LAB_100037b8;
      }
    }
    else {
      pcVar9 = pcVar7;
      if ((*(byte *)((&DAT_1000abe0)[(int)uVar1 >> 5] + 4 + (uVar1 & 0x1f) * 0x24) & 0x80) != 0) {
        for (; pcVar9 < pcVar5; pcVar9 = pcVar9 + 1) {
          if (*pcVar9 == '\n') {
            local_c = local_c + 1;
          }
        }
      }
    }
    if (local_8 != 0) {
      if ((param_1[0xc] & 1U) != 0) {
        if (*(int *)(param_1 + 4) == 0) {
          local_c = 0;
        }
        else {
          pcVar5 = pcVar5 + (*(int *)(param_1 + 4) - (int)pcVar7);
          iVar10 = (uVar1 & 0x1f) * 0x24;
          if ((*(byte *)(iVar10 + 4 + (&DAT_1000abe0)[(int)uVar1 >> 5]) & 0x80) != 0) {
            DVar6 = FUN_100055d6(uVar1,0,2);
            if (DVar6 == local_8) {
              pcVar7 = *(char **)(param_1 + 8);
              pcVar9 = pcVar5 + (int)pcVar7;
              param_1 = pcVar5;
              for (; pcVar7 < pcVar9; pcVar7 = pcVar7 + 1) {
                if (*pcVar7 == '\n') {
                  param_1 = param_1 + 1;
                }
              }
              bVar3 = pcVar8[0xd] & 0x20;
            }
            else {
              FUN_100055d6(uVar1,local_8,0);
              pcVar8 = (char *)0x200;
              if ((((char *)0x200 < pcVar5) || ((*(uint *)(param_1 + 0xc) & 8) == 0)) ||
                 ((*(uint *)(param_1 + 0xc) & 0x400) != 0)) {
                pcVar8 = *(char **)(param_1 + 0x18);
              }
              bVar3 = *(byte *)(iVar10 + 4 + (&DAT_1000abe0)[(int)uVar1 >> 5]) & 4;
              param_1 = pcVar8;
            }
            pcVar5 = param_1;
            if (bVar3 != 0) {
              pcVar5 = param_1 + 1;
            }
          }
          param_1 = pcVar5;
          local_8 = local_8 - (int)param_1;
        }
      }
      local_c = local_c + local_8;
    }
  }
  return local_c;
}



/* ================================================================
 * Function: FUN_1000388b
 * Address:  1000388b
 * ================================================================ */

int __cdecl FUN_1000388b(int *param_1,int param_2,DWORD param_3)

{
  int iVar1;
  
  FUN_10004d41((uint)param_1);
  iVar1 = FUN_100038b7(param_1,param_2,param_3);
  FUN_10004d93((uint)param_1);
  return iVar1;
}



/* ================================================================
 * Function: FUN_100038b7
 * Address:  100038b7
 * ================================================================ */

int __cdecl FUN_100038b7(int *param_1,int param_2,DWORD param_3)

{
  uint uVar1;
  int iVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  
  if (((param_1[3] & 0x83U) == 0) || (((param_3 != 0 && (param_3 != 1)) && (param_3 != 2)))) {
    pDVar4 = FUN_100053b4();
    *pDVar4 = 0x16;
    iVar2 = -1;
  }
  else {
    param_1[3] = param_1[3] & 0xffffffef;
    if (param_3 == 1) {
      iVar2 = FUN_1000372a((char *)param_1);
      param_2 = param_2 + iVar2;
      param_3 = 0;
    }
    FUN_10005238(param_1);
    uVar1 = param_1[3];
    if ((uVar1 & 0x80) == 0) {
      if ((((uVar1 & 1) != 0) && ((uVar1 & 8) != 0)) && ((uVar1 & 0x400) == 0)) {
        param_1[6] = 0x200;
      }
    }
    else {
      param_1[3] = uVar1 & 0xfffffffc;
    }
    DVar3 = FUN_100055d6(param_1[4],param_2,param_3);
    iVar2 = (DVar3 != 0xffffffff) - 1;
  }
  return iVar2;
}



/* ================================================================
 * Function: FUN_10003944
 * Address:  10003944
 * ================================================================ */

undefined4 * __cdecl FUN_10003944(LPCSTR param_1,char *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = FUN_1000581e();
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar2 = FUN_100056ae(param_1,param_2,param_3,puVar1);
  FUN_10004d93((uint)puVar1);
  return puVar2;
}



/* ================================================================
 * Function: FUN_10003975
 * Address:  10003975
 * ================================================================ */

void __cdecl FUN_10003975(LPCSTR param_1,char *param_2)

{
  FUN_10003944(param_1,param_2,0x40);
  return;
}



/* ================================================================
 * Function: _strncpy
 * Address:  10003990
 * ================================================================ */

/* Library Function - Single Match
    _strncpy
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strncpy(char *_Dest,char *_Source,size_t _Count)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  
  if (_Count == 0) {
    return _Dest;
  }
  puVar5 = (uint *)_Dest;
  if (((uint)_Source & 3) != 0) {
    while( true ) {
      uVar4 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 1);
      *(char *)puVar5 = (char)uVar4;
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
      if (_Count == 0) {
        return _Dest;
      }
      if ((char)uVar4 == '\0') break;
      if (((uint)_Source & 3) == 0) {
        uVar4 = _Count >> 2;
        goto joined_r0x100039ce;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_10003a0b;
        goto LAB_10003a79;
      }
      *(char *)puVar5 = '\0';
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
    } while (_Count != 0);
    return _Dest;
  }
  uVar4 = _Count >> 2;
  if (uVar4 != 0) {
    do {
      uVar1 = *(uint *)_Source;
      uVar2 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 4);
      if (((uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff) & 0x81010100) != 0) {
        if ((char)uVar2 == '\0') {
          *puVar5 = 0;
joined_r0x10003a75:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_10003a79:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_10003a0b;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x10003a75;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x10003a75;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x10003a75;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x100039ce:
    } while (uVar4 != 0);
    _Count = _Count & 3;
    if (_Count == 0) {
      return _Dest;
    }
  }
  do {
    cVar3 = (char)*(uint *)_Source;
    _Source = (char *)((int)_Source + 1);
    *(char *)puVar5 = cVar3;
    puVar5 = (uint *)((int)puVar5 + 1);
    if (cVar3 == '\0') {
      while (_Count = _Count - 1, _Count != 0) {
LAB_10003a0b:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}



/* ================================================================
 * Function: FUN_10003a8e
 * Address:  10003a8e
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10003a8e(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_1000a808 = GetVersion();
    iVar1 = FUN_10003c37(1);
    if (iVar1 != 0) {
      _DAT_1000a814 = DAT_1000a808 >> 8 & 0xff;
      _DAT_1000a810 = DAT_1000a808 & 0xff;
      DAT_1000a808 = DAT_1000a808 >> 0x10;
      _DAT_1000a80c = _DAT_1000a810 * 0x100 + _DAT_1000a814;
      iVar1 = FUN_10005a04();
      if (iVar1 != 0) {
        DAT_1000bd20 = GetCommandLineA();
        DAT_1000a788 = FUN_10005e96();
        FUN_100053c6();
        FUN_10005c49();
        FUN_10005b90();
        FUN_100058e6();
        DAT_1000a784 = DAT_1000a784 + 1;
        goto LAB_10003b61;
      }
      FUN_10003c73();
    }
LAB_10003aee:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_1000a784 < 1) goto LAB_10003aee;
      DAT_1000a784 = DAT_1000a784 + -1;
      if (DAT_1000a840 == 0) {
        FUN_10005924();
      }
      FUN_10005582();
      FUN_10005a58();
      FUN_10003c73();
    }
    else if (param_2 == 3) {
      FUN_10005af0((LPVOID)0x0);
    }
LAB_10003b61:
    uVar2 = 1;
  }
  return uVar2;
}



/* ================================================================
 * Function: entry
 * Address:  10003b67
 * ================================================================ */

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_1000a784;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_10003baf;
    if ((DAT_1000bd24 != (code *)0x0) &&
       (iVar2 = (*DAT_1000bd24)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_10003a8e(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_10003baf:
  iVar2 = FUN_10001000(param_1,param_2);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_10003a8e(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_10003a8e(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_1000bd24 != (code *)0x0) {
      iVar2 = (*DAT_1000bd24)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}



/* ================================================================
 * Function: __amsg_exit
 * Address:  10003c04
 * ================================================================ */

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_1000a790 == 1) || ((DAT_1000a790 == 0 && (DAT_1000a794 == 1)))) {
    FUN_10005fc8();
  }
  FUN_10006001(param_1);
  (*(code *)PTR___exit_1000a070)(0xff);
  return;
}



/* ================================================================
 * Function: FUN_10003c37
 * Address:  10003c37
 * ================================================================ */

undefined4 __cdecl FUN_10003c37(int param_1)

{
  int iVar1;
  
  DAT_1000bd1c = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_1000bd1c != (HANDLE)0x0) {
    iVar1 = FUN_10003df3();
    if (iVar1 != 0) {
      return 1;
    }
    HeapDestroy(DAT_1000bd1c);
  }
  return 0;
}



/* ================================================================
 * Function: FUN_10003c73
 * Address:  10003c73
 * ================================================================ */

void FUN_10003c73(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  if (0 < DAT_1000bd14) {
    puVar2 = (undefined4 *)((int)DAT_1000bd18 + 0xc);
    do {
      VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
      VirtualFree((LPVOID)*puVar2,0,0x8000);
      HeapFree(DAT_1000bd1c,0,(LPVOID)puVar2[1]);
      puVar2 = puVar2 + 5;
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_1000bd14);
  }
  HeapFree(DAT_1000bd1c,0,DAT_1000bd18);
  HeapDestroy(DAT_1000bd1c);
  return;
}



/* ================================================================
 * Function: FUN_10003ce8
 * Address:  10003ce8
 * ================================================================ */

void FUN_10003ce8(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000a0bc);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000a0ac);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000a09c);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000a07c);
  return;
}



/* ================================================================
 * Function: FUN_10003d11
 * Address:  10003d11
 * ================================================================ */

void FUN_10003d11(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_1000a078;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_1000a0bc)) && (ppuVar1 != &PTR_DAT_1000a0ac)) &&
       ((ppuVar1 != &PTR_DAT_1000a09c && (ppuVar1 != &PTR_DAT_1000a07c)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_10003368(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x1000a138);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000a09c);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000a0ac);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000a0bc);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000a07c);
  return;
}



/* ================================================================
 * Function: FUN_10003d7d
 * Address:  10003d7d
 * ================================================================ */

void __cdecl FUN_10003d7d(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_1000a078 + param_1;
  if ((&DAT_1000a078)[param_1] == 0) {
    lpCriticalSection = _malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_10003d7d(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_10003368(lpCriticalSection);
    }
    FUN_10003dde(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}



/* ================================================================
 * Function: FUN_10003dde
 * Address:  10003dde
 * ================================================================ */

void __cdecl FUN_10003dde(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_1000a078)[param_1]);
  return;
}



/* ================================================================
 * Function: FUN_10003df3
 * Address:  10003df3
 * ================================================================ */

undefined4 FUN_10003df3(void)

{
  DAT_1000bd18 = HeapAlloc(DAT_1000bd1c,0,0x140);
  if (DAT_1000bd18 == (LPVOID)0x0) {
    return 0;
  }
  DAT_1000bd10 = 0;
  DAT_1000bd14 = 0;
  DAT_1000bd0c = DAT_1000bd18;
  DAT_1000bd04 = 0x10;
  return 1;
}



/* ================================================================
 * Function: FUN_10003e31
 * Address:  10003e31
 * ================================================================ */

uint __cdecl FUN_10003e31(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_1000bd18;
  while( true ) {
    if (DAT_1000bd18 + DAT_1000bd14 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}



/* ================================================================
 * Function: FUN_10003e5c
 * Address:  10003e5c
 * ================================================================ */

void __cdecl FUN_10003e5c(uint *param_1,uint param_2)

{
  char *pcVar1;
  uint *puVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int local_10;
  
  uVar5 = param_1[4];
  iVar6 = *(int *)(param_2 - 4);
  piVar9 = (int *)(param_2 - 4);
  uVar10 = param_2 - param_1[3] >> 0xf;
  uVar7 = *(uint *)(param_2 - 8);
  local_10 = iVar6 + -1;
  piVar3 = (int *)(uVar10 * 0x204 + 0x144 + uVar5);
  uVar12 = *(uint *)(local_10 + (int)piVar9);
  if ((uVar12 & 1) == 0) {
    param_2 = ((int)uVar12 >> 4) - 1;
    if (0x3f < param_2) {
      param_2 = 0x3f;
    }
    if (*(int *)(iVar6 + 3 + (int)piVar9) == *(int *)(iVar6 + 7 + (int)piVar9)) {
      if (param_2 < 0x20) {
        pcVar1 = (char *)(param_2 + 4 + uVar5);
        uVar11 = ~(0x80000000U >> ((byte)param_2 & 0x1f));
        puVar2 = (uint *)(uVar5 + 0x44 + uVar10 * 4);
        *puVar2 = *puVar2 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          *param_1 = *param_1 & uVar11;
        }
      }
      else {
        pcVar1 = (char *)(param_2 + 4 + uVar5);
        uVar11 = ~(0x80000000U >> ((byte)param_2 - 0x20 & 0x1f));
        puVar2 = (uint *)(uVar5 + 0xc4 + uVar10 * 4);
        *puVar2 = *puVar2 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          param_1[1] = param_1[1] & uVar11;
        }
      }
    }
    *(undefined4 *)(*(int *)(iVar6 + 7 + (int)piVar9) + 4) =
         *(undefined4 *)(iVar6 + 3 + (int)piVar9);
    local_10 = local_10 + uVar12;
    *(undefined4 *)(*(int *)(iVar6 + 3 + (int)piVar9) + 8) =
         *(undefined4 *)(iVar6 + 7 + (int)piVar9);
  }
  uVar12 = (local_10 >> 4) - 1;
  if (0x3f < uVar12) {
    uVar12 = 0x3f;
  }
  if ((uVar7 & 1) == 0) {
    piVar9 = (int *)((int)piVar9 - uVar7);
    param_2 = ((int)uVar7 >> 4) - 1;
    if (0x3f < param_2) {
      param_2 = 0x3f;
    }
    local_10 = local_10 + uVar7;
    uVar12 = (local_10 >> 4) - 1;
    if (0x3f < uVar12) {
      uVar12 = 0x3f;
    }
    if (param_2 != uVar12) {
      if (piVar9[1] == piVar9[2]) {
        if (param_2 < 0x20) {
          pcVar1 = (char *)(param_2 + 4 + uVar5);
          uVar11 = ~(0x80000000U >> ((byte)param_2 & 0x1f));
          puVar2 = (uint *)(uVar5 + 0x44 + uVar10 * 4);
          *puVar2 = *puVar2 & uVar11;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            *param_1 = *param_1 & uVar11;
          }
        }
        else {
          pcVar1 = (char *)(param_2 + 4 + uVar5);
          uVar11 = ~(0x80000000U >> ((byte)param_2 - 0x20 & 0x1f));
          puVar2 = (uint *)(uVar5 + 0xc4 + uVar10 * 4);
          *puVar2 = *puVar2 & uVar11;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            param_1[1] = param_1[1] & uVar11;
          }
        }
      }
      *(int *)(piVar9[2] + 4) = piVar9[1];
      *(int *)(piVar9[1] + 8) = piVar9[2];
    }
  }
  if (((uVar7 & 1) != 0) || (param_2 != uVar12)) {
    piVar9[1] = piVar3[uVar12 * 2 + 1];
    piVar9[2] = (int)(piVar3 + uVar12 * 2);
    (piVar3 + uVar12 * 2)[1] = (int)piVar9;
    *(int **)(piVar9[1] + 8) = piVar9;
    if (piVar9[1] == piVar9[2]) {
      cVar4 = *(char *)(uVar12 + 4 + uVar5);
      *(char *)(uVar12 + 4 + uVar5) = cVar4 + '\x01';
      bVar8 = (byte)uVar12;
      if (uVar12 < 0x20) {
        if (cVar4 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> (bVar8 & 0x1f);
        }
        puVar2 = (uint *)(uVar5 + 0x44 + uVar10 * 4);
        *puVar2 = *puVar2 | 0x80000000U >> (bVar8 & 0x1f);
      }
      else {
        if (cVar4 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
        }
        puVar2 = (uint *)(uVar5 + 0xc4 + uVar10 * 4);
        *puVar2 = *puVar2 | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
      }
    }
  }
  *piVar9 = local_10;
  *(int *)(local_10 + -4 + (int)piVar9) = local_10;
  *piVar3 = *piVar3 + -1;
  uVar5 = DAT_1000bd08;
  puVar2 = DAT_1000bd10;
  if ((*piVar3 == 0) && (uVar5 = uVar10, puVar2 = param_1, DAT_1000bd10 != (uint *)0x0)) {
    VirtualFree((LPVOID)(DAT_1000bd08 * 0x8000 + DAT_1000bd10[3]),0x8000,0x4000);
    DAT_1000bd10[2] = DAT_1000bd10[2] | 0x80000000U >> ((byte)DAT_1000bd08 & 0x1f);
    *(undefined4 *)(DAT_1000bd10[4] + 0xc4 + DAT_1000bd08 * 4) = 0;
    *(char *)(DAT_1000bd10[4] + 0x43) = *(char *)(DAT_1000bd10[4] + 0x43) + -1;
    if (*(char *)(DAT_1000bd10[4] + 0x43) == '\0') {
      DAT_1000bd10[1] = DAT_1000bd10[1] & 0xfffffffe;
    }
    puVar2 = param_1;
    if (DAT_1000bd10[2] == 0xffffffff) {
      VirtualFree((LPVOID)DAT_1000bd10[3],0,0x8000);
      HeapFree(DAT_1000bd1c,0,(LPVOID)DAT_1000bd10[4]);
      FUN_10006160(DAT_1000bd10,DAT_1000bd10 + 5,
                   (DAT_1000bd14 * 0x14 - (int)DAT_1000bd10) + -0x14 + DAT_1000bd18);
      DAT_1000bd14 = DAT_1000bd14 + -1;
      if (DAT_1000bd10 < param_1) {
        param_1 = param_1 + -5;
      }
      DAT_1000bd0c = DAT_1000bd18;
      puVar2 = param_1;
    }
  }
  DAT_1000bd10 = puVar2;
  DAT_1000bd08 = uVar5;
  return;
}



/* ================================================================
 * Function: FUN_10004187
 * Address:  10004187
 * ================================================================ */

int * __cdecl FUN_10004187(uint *param_1)

{
  char *pcVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  int *piVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  uint local_10;
  uint local_c;
  int local_8;
  
  puVar8 = DAT_1000bd18 + DAT_1000bd14 * 5;
  uVar6 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar7 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar5 = (byte)iVar7;
  param_1 = DAT_1000bd0c;
  if (iVar7 < 0x20) {
    local_10 = 0xffffffff >> (bVar5 & 0x1f);
    local_c = 0xffffffff;
  }
  else {
    local_c = 0xffffffff >> (bVar5 - 0x20 & 0x1f);
    local_10 = 0;
  }
  for (; (param_1 < puVar8 && ((param_1[1] & local_c) == 0 && (*param_1 & local_10) == 0));
      param_1 = param_1 + 5) {
  }
  puVar11 = DAT_1000bd18;
  if (param_1 == puVar8) {
    for (; (puVar11 < DAT_1000bd0c && ((puVar11[1] & local_c) == 0 && (*puVar11 & local_10) == 0));
        puVar11 = puVar11 + 5) {
    }
    param_1 = puVar11;
    if (puVar11 == DAT_1000bd0c) {
      for (; (puVar11 < puVar8 && (puVar11[2] == 0)); puVar11 = puVar11 + 5) {
      }
      puVar12 = DAT_1000bd18;
      param_1 = puVar11;
      if (puVar11 == puVar8) {
        for (; (puVar12 < DAT_1000bd0c && (puVar12[2] == 0)); puVar12 = puVar12 + 5) {
        }
        param_1 = puVar12;
        if ((puVar12 == DAT_1000bd0c) && (param_1 = FUN_10004490(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar7 = FUN_10004541((int)param_1);
      *(int *)param_1[4] = iVar7;
      if (*(int *)param_1[4] == -1) {
        return (int *)0x0;
      }
    }
  }
  piVar4 = (int *)param_1[4];
  local_8 = *piVar4;
  if ((local_8 == -1) ||
     ((piVar4[local_8 + 0x31] & local_c) == 0 && (piVar4[local_8 + 0x11] & local_10) == 0)) {
    local_8 = 0;
    puVar8 = (uint *)(piVar4 + 0x11);
    if ((piVar4[0x31] & local_c) == 0 && (piVar4[0x11] & local_10) == 0) {
      do {
        puVar11 = puVar8 + 0x21;
        local_8 = local_8 + 1;
        puVar8 = puVar8 + 1;
      } while ((*puVar11 & local_c) == 0 && (local_10 & *puVar8) == 0);
    }
  }
  iVar7 = 0;
  piVar2 = piVar4 + local_8 * 0x81 + 0x51;
  local_10 = piVar4[local_8 + 0x11] & local_10;
  if (local_10 == 0) {
    local_10 = piVar4[local_8 + 0x31] & local_c;
    iVar7 = 0x20;
  }
  for (; -1 < (int)local_10; local_10 = local_10 << 1) {
    iVar7 = iVar7 + 1;
  }
  piVar10 = (int *)piVar2[iVar7 * 2 + 1];
  iVar9 = *piVar10 - uVar6;
  iVar14 = (iVar9 >> 4) + -1;
  if (0x3f < iVar14) {
    iVar14 = 0x3f;
  }
  DAT_1000bd0c = param_1;
  if (iVar14 != iVar7) {
    if (piVar10[1] == piVar10[2]) {
      if (iVar7 < 0x20) {
        pcVar1 = (char *)((int)piVar4 + iVar7 + 4);
        uVar13 = ~(0x80000000U >> ((byte)iVar7 & 0x1f));
        piVar4[local_8 + 0x11] = uVar13 & piVar4[local_8 + 0x11];
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          *param_1 = *param_1 & uVar13;
        }
      }
      else {
        pcVar1 = (char *)((int)piVar4 + iVar7 + 4);
        uVar13 = ~(0x80000000U >> ((byte)iVar7 - 0x20 & 0x1f));
        piVar4[local_8 + 0x31] = piVar4[local_8 + 0x31] & uVar13;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          param_1[1] = param_1[1] & uVar13;
        }
      }
    }
    *(int *)(piVar10[2] + 4) = piVar10[1];
    *(int *)(piVar10[1] + 8) = piVar10[2];
    if (iVar9 == 0) goto LAB_1000444d;
    piVar10[1] = piVar2[iVar14 * 2 + 1];
    piVar10[2] = (int)(piVar2 + iVar14 * 2);
    (piVar2 + iVar14 * 2)[1] = (int)piVar10;
    *(int **)(piVar10[1] + 8) = piVar10;
    if (piVar10[1] == piVar10[2]) {
      cVar3 = *(char *)(iVar14 + 4 + (int)piVar4);
      bVar5 = (byte)iVar14;
      if (iVar14 < 0x20) {
        *(char *)(iVar14 + 4 + (int)piVar4) = cVar3 + '\x01';
        if (cVar3 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> (bVar5 & 0x1f);
        }
        piVar4[local_8 + 0x11] = piVar4[local_8 + 0x11] | 0x80000000U >> (bVar5 & 0x1f);
      }
      else {
        *(char *)(iVar14 + 4 + (int)piVar4) = cVar3 + '\x01';
        if (cVar3 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> (bVar5 - 0x20 & 0x1f);
        }
        piVar4[local_8 + 0x31] = piVar4[local_8 + 0x31] | 0x80000000U >> (bVar5 - 0x20 & 0x1f);
      }
    }
  }
  if (iVar9 != 0) {
    *piVar10 = iVar9;
    *(int *)(iVar9 + -4 + (int)piVar10) = iVar9;
  }
LAB_1000444d:
  piVar10 = (int *)((int)piVar10 + iVar9);
  *piVar10 = uVar6 + 1;
  *(uint *)((int)piVar10 + (uVar6 - 4)) = uVar6 + 1;
  iVar7 = *piVar2;
  *piVar2 = iVar7 + 1;
  if (((iVar7 == 0) && (param_1 == DAT_1000bd10)) && (local_8 == DAT_1000bd08)) {
    DAT_1000bd10 = (uint *)0x0;
  }
  *piVar4 = local_8;
  return piVar10 + 1;
}



/* ================================================================
 * Function: FUN_10004490
 * Address:  10004490
 * ================================================================ */

undefined4 * FUN_10004490(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_1000bd14 == DAT_1000bd04) {
    pvVar2 = HeapReAlloc(DAT_1000bd1c,0,DAT_1000bd18,(DAT_1000bd04 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_1000bd04 = DAT_1000bd04 + 0x10;
    DAT_1000bd18 = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_1000bd18 + DAT_1000bd14 * 0x14);
  pvVar2 = HeapAlloc(DAT_1000bd1c,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_1000bd14 = DAT_1000bd14 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_1000bd1c,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}



/* ================================================================
 * Function: FUN_10004541
 * Address:  10004541
 * ================================================================ */

int __cdecl FUN_10004541(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  LPVOID pvVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *lpAddress;
  
  iVar3 = *(int *)(param_1 + 0x10);
  iVar9 = 0;
  for (iVar4 = *(int *)(param_1 + 8); -1 < iVar4; iVar4 = iVar4 << 1) {
    iVar9 = iVar9 + 1;
  }
  iVar8 = 0x3f;
  iVar4 = iVar9 * 0x204 + 0x144 + iVar3;
  iVar5 = iVar4;
  do {
    *(int *)(iVar5 + 8) = iVar5;
    *(int *)(iVar5 + 4) = iVar5;
    iVar5 = iVar5 + 8;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  lpAddress = (int *)(iVar9 * 0x8000 + *(int *)(param_1 + 0xc));
  pvVar6 = VirtualAlloc(lpAddress,0x8000,0x1000,4);
  if (pvVar6 == (LPVOID)0x0) {
    iVar9 = -1;
  }
  else {
    if (lpAddress <= lpAddress + 0x1c00) {
      piVar7 = lpAddress + 4;
      do {
        piVar7[-2] = -1;
        piVar7[0x3fb] = -1;
        piVar7[-1] = 0xff0;
        *piVar7 = (int)(piVar7 + 0x3ff);
        piVar7[1] = (int)(piVar7 + -0x401);
        piVar7[0x3fa] = 0xff0;
        piVar1 = piVar7 + 0x3fc;
        piVar7 = piVar7 + 0x400;
      } while (piVar1 <= lpAddress + 0x1c00);
    }
    *(int **)(iVar4 + 0x1fc) = lpAddress + 3;
    lpAddress[5] = iVar4 + 0x1f8;
    *(int **)(iVar4 + 0x200) = lpAddress + 0x1c03;
    lpAddress[0x1c04] = iVar4 + 0x1f8;
    *(undefined4 *)(iVar3 + 0x44 + iVar9 * 4) = 0;
    *(undefined4 *)(iVar3 + 0xc4 + iVar9 * 4) = 1;
    cVar2 = *(char *)(iVar3 + 0x43);
    *(char *)(iVar3 + 0x43) = cVar2 + '\x01';
    if (cVar2 == '\0') {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & ~(0x80000000U >> ((byte)iVar9 & 0x1f));
  }
  return iVar9;
}



/* ================================================================
 * Function: FUN_1000463c
 * Address:  1000463c
 * ================================================================ */

undefined4 __cdecl FUN_1000463c(uint *param_1,int param_2,int param_3)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint local_c;
  
  uVar5 = param_1[4];
  uVar12 = param_3 + 0x17U & 0xfffffff0;
  uVar10 = param_2 - param_1[3] >> 0xf;
  iVar3 = uVar10 * 0x204 + 0x144 + uVar5;
  iVar6 = *(int *)(param_2 + -4);
  iVar9 = iVar6 + -1;
  uVar13 = *(uint *)(iVar6 + -5 + param_2);
  iVar6 = iVar6 + -5 + param_2;
  if (iVar9 < (int)uVar12) {
    if (((uVar13 & 1) != 0) || ((int)(uVar13 + iVar9) < (int)uVar12)) {
      return 0;
    }
    local_c = ((int)uVar13 >> 4) - 1;
    if (0x3f < local_c) {
      local_c = 0x3f;
    }
    if (*(int *)(iVar6 + 4) == *(int *)(iVar6 + 8)) {
      if (local_c < 0x20) {
        pcVar1 = (char *)(local_c + 4 + uVar5);
        uVar11 = ~(0x80000000U >> ((byte)local_c & 0x1f));
        puVar7 = (uint *)(uVar5 + 0x44 + uVar10 * 4);
        *puVar7 = *puVar7 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          *param_1 = *param_1 & uVar11;
        }
      }
      else {
        pcVar1 = (char *)(local_c + 4 + uVar5);
        uVar11 = ~(0x80000000U >> ((byte)local_c - 0x20 & 0x1f));
        puVar7 = (uint *)(uVar5 + 0xc4 + uVar10 * 4);
        *puVar7 = *puVar7 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          param_1[1] = param_1[1] & uVar11;
        }
      }
    }
    *(undefined4 *)(*(int *)(iVar6 + 8) + 4) = *(undefined4 *)(iVar6 + 4);
    *(undefined4 *)(*(int *)(iVar6 + 4) + 8) = *(undefined4 *)(iVar6 + 8);
    iVar6 = uVar13 + (iVar9 - uVar12);
    if (0 < iVar6) {
      uVar13 = (iVar6 >> 4) - 1;
      iVar9 = param_2 + -4 + uVar12;
      if (0x3f < uVar13) {
        uVar13 = 0x3f;
      }
      iVar3 = iVar3 + uVar13 * 8;
      *(undefined4 *)(iVar9 + 4) = *(undefined4 *)(iVar3 + 4);
      *(int *)(iVar9 + 8) = iVar3;
      *(int *)(iVar3 + 4) = iVar9;
      *(int *)(*(int *)(iVar9 + 4) + 8) = iVar9;
      if (*(int *)(iVar9 + 4) == *(int *)(iVar9 + 8)) {
        cVar4 = *(char *)(uVar13 + 4 + uVar5);
        *(char *)(uVar13 + 4 + uVar5) = cVar4 + '\x01';
        bVar8 = (byte)uVar13;
        if (uVar13 < 0x20) {
          if (cVar4 == '\0') {
            *param_1 = *param_1 | 0x80000000U >> (bVar8 & 0x1f);
          }
          puVar7 = (uint *)(uVar5 + 0x44 + uVar10 * 4);
        }
        else {
          if (cVar4 == '\0') {
            param_1[1] = param_1[1] | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
          }
          puVar7 = (uint *)(uVar5 + 0xc4 + uVar10 * 4);
          bVar8 = bVar8 - 0x20;
        }
        *puVar7 = *puVar7 | 0x80000000U >> (bVar8 & 0x1f);
      }
      piVar2 = (int *)(param_2 + -4 + uVar12);
      *piVar2 = iVar6;
      *(int *)(iVar6 + -4 + (int)piVar2) = iVar6;
    }
    *(uint *)(param_2 + -4) = uVar12 + 1;
    *(uint *)(param_2 + -8 + uVar12) = uVar12 + 1;
  }
  else if ((int)uVar12 < iVar9) {
    param_3 = iVar9 - uVar12;
    *(uint *)(param_2 + -4) = uVar12 + 1;
    piVar2 = (int *)(param_2 + -4 + uVar12);
    uVar11 = (param_3 >> 4) - 1;
    piVar2[-1] = uVar12 + 1;
    if (0x3f < uVar11) {
      uVar11 = 0x3f;
    }
    if ((uVar13 & 1) == 0) {
      uVar12 = ((int)uVar13 >> 4) - 1;
      if (0x3f < uVar12) {
        uVar12 = 0x3f;
      }
      if (*(int *)(iVar6 + 4) == *(int *)(iVar6 + 8)) {
        if (uVar12 < 0x20) {
          pcVar1 = (char *)(uVar12 + 4 + uVar5);
          uVar12 = ~(0x80000000U >> ((byte)uVar12 & 0x1f));
          puVar7 = (uint *)(uVar5 + 0x44 + uVar10 * 4);
          *puVar7 = *puVar7 & uVar12;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            *param_1 = *param_1 & uVar12;
          }
        }
        else {
          pcVar1 = (char *)(uVar12 + 4 + uVar5);
          uVar12 = ~(0x80000000U >> ((byte)uVar12 - 0x20 & 0x1f));
          puVar7 = (uint *)(uVar5 + 0xc4 + uVar10 * 4);
          *puVar7 = *puVar7 & uVar12;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            param_1[1] = param_1[1] & uVar12;
          }
        }
      }
      *(undefined4 *)(*(int *)(iVar6 + 8) + 4) = *(undefined4 *)(iVar6 + 4);
      *(undefined4 *)(*(int *)(iVar6 + 4) + 8) = *(undefined4 *)(iVar6 + 8);
      param_3 = param_3 + uVar13;
      uVar11 = (param_3 >> 4) - 1;
      if (0x3f < uVar11) {
        uVar11 = 0x3f;
      }
    }
    iVar6 = iVar3 + uVar11 * 8;
    piVar2[1] = *(int *)(iVar3 + 4 + uVar11 * 8);
    piVar2[2] = iVar6;
    *(int **)(iVar6 + 4) = piVar2;
    *(int **)(piVar2[1] + 8) = piVar2;
    if (piVar2[1] == piVar2[2]) {
      cVar4 = *(char *)(uVar11 + 4 + uVar5);
      *(char *)(uVar11 + 4 + uVar5) = cVar4 + '\x01';
      bVar8 = (byte)uVar11;
      if (uVar11 < 0x20) {
        if (cVar4 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> (bVar8 & 0x1f);
        }
        puVar7 = (uint *)(uVar5 + 0x44 + uVar10 * 4);
      }
      else {
        if (cVar4 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
        }
        puVar7 = (uint *)(uVar5 + 0xc4 + uVar10 * 4);
        bVar8 = bVar8 - 0x20;
      }
      *puVar7 = *puVar7 | 0x80000000U >> (bVar8 & 0x1f);
    }
    *piVar2 = param_3;
    *(int *)(param_3 + -4 + (int)piVar2) = param_3;
  }
  return 1;
}



/* ================================================================
 * Function: FUN_10004932
 * Address:  10004932
 * ================================================================ */

undefined4 __cdecl FUN_10004932(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_1000a7fc != (code *)0x0) {
    iVar1 = (*DAT_1000a7fc)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



/* ================================================================
 * Function: FUN_10004950
 * Address:  10004950
 * ================================================================ */

undefined4 * __cdecl FUN_10004950(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((param_2 < param_1) && (param_1 < (undefined4 *)(param_3 + (int)param_2))) {
    puVar3 = (undefined4 *)((param_3 - 4) + (int)param_2);
    puVar4 = (undefined4 *)((param_3 - 4) + (int)param_1);
    if (((uint)puVar4 & 3) == 0) {
      uVar1 = param_3 >> 2;
      uVar2 = param_3 & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar2) {
        case 0:
          return param_1;
        case 2:
          goto switchD_10004b07_caseD_2;
        case 3:
          goto switchD_10004b07_caseD_3;
        }
        goto switchD_10004b07_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10004b07_caseD_0;
      case 1:
        goto switchD_10004b07_caseD_1;
      case 2:
        goto switchD_10004b07_caseD_2;
      case 3:
        goto switchD_10004b07_caseD_3;
      default:
        uVar1 = param_3 - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          puVar3 = (undefined4 *)((int)puVar3 + -1);
          uVar1 = uVar1 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_10004b07_caseD_2;
            case 3:
              goto switchD_10004b07_caseD_3;
            }
            goto switchD_10004b07_caseD_1;
          }
          break;
        case 2:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          puVar3 = (undefined4 *)((int)puVar3 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_10004b07_caseD_2;
            case 3:
              goto switchD_10004b07_caseD_3;
            }
            goto switchD_10004b07_caseD_1;
          }
          break;
        case 3:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_10004b07_caseD_2;
            case 3:
              goto switchD_10004b07_caseD_3;
            }
            goto switchD_10004b07_caseD_1;
          }
        }
      }
    }
    switch(uVar1) {
    case 7:
      puVar4[7 - uVar1] = puVar3[7 - uVar1];
    case 6:
      puVar4[6 - uVar1] = puVar3[6 - uVar1];
    case 5:
      puVar4[5 - uVar1] = puVar3[5 - uVar1];
    case 4:
      puVar4[4 - uVar1] = puVar3[4 - uVar1];
    case 3:
      puVar4[3 - uVar1] = puVar3[3 - uVar1];
    case 2:
      puVar4[2 - uVar1] = puVar3[2 - uVar1];
    case 1:
      puVar4[1 - uVar1] = puVar3[1 - uVar1];
      puVar3 = puVar3 + -uVar1;
      puVar4 = puVar4 + -uVar1;
    }
    switch(uVar2) {
    case 1:
switchD_10004b07_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10004b07_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10004b07_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10004b07_caseD_0:
    return param_1;
  }
  puVar3 = param_1;
  if (((uint)param_1 & 3) == 0) {
    uVar1 = param_3 >> 2;
    uVar2 = param_3 & 3;
    if (7 < uVar1) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
      switch(uVar2) {
      case 0:
        return param_1;
      case 2:
        goto switchD_10004985_caseD_2;
      case 3:
        goto switchD_10004985_caseD_3;
      }
      goto switchD_10004985_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10004985_caseD_0;
    case 1:
      goto switchD_10004985_caseD_1;
    case 2:
      goto switchD_10004985_caseD_2;
    case 3:
      goto switchD_10004985_caseD_3;
    default:
      uVar1 = (param_3 - 4) + ((uint)param_1 & 3);
      switch((uint)param_1 & 3) {
      case 1:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 2) = *(undefined1 *)((int)param_2 + 2);
        param_2 = (undefined4 *)((int)param_2 + 3);
        puVar3 = (undefined4 *)((int)param_1 + 3);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_10004985_caseD_2;
          case 3:
            goto switchD_10004985_caseD_3;
          }
          goto switchD_10004985_caseD_1;
        }
        break;
      case 2:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        param_2 = (undefined4 *)((int)param_2 + 2);
        puVar3 = (undefined4 *)((int)param_1 + 2);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_10004985_caseD_2;
          case 3:
            goto switchD_10004985_caseD_3;
          }
          goto switchD_10004985_caseD_1;
        }
        break;
      case 3:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        puVar3 = (undefined4 *)((int)param_1 + 1);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_10004985_caseD_2;
          case 3:
            goto switchD_10004985_caseD_3;
          }
          goto switchD_10004985_caseD_1;
        }
      }
    }
  }
  switch(uVar1) {
  case 7:
    puVar3[uVar1 - 7] = param_2[uVar1 - 7];
  case 6:
    puVar3[uVar1 - 6] = param_2[uVar1 - 6];
  case 5:
    puVar3[uVar1 - 5] = param_2[uVar1 - 5];
  case 4:
    puVar3[uVar1 - 4] = param_2[uVar1 - 4];
  case 3:
    puVar3[uVar1 - 3] = param_2[uVar1 - 3];
  case 2:
    puVar3[uVar1 - 2] = param_2[uVar1 - 2];
  case 1:
    puVar3[uVar1 - 1] = param_2[uVar1 - 1];
    param_2 = param_2 + uVar1;
    puVar3 = puVar3 + uVar1;
  }
  switch(uVar2) {
  case 1:
switchD_10004985_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10004985_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10004985_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10004985_caseD_0:
  return param_1;
}



/* ================================================================
 * Function: FUN_10004d41
 * Address:  10004d41
 * ================================================================ */

void __cdecl FUN_10004d41(uint param_1)

{
  if ((0x1000a13f < param_1) && (param_1 < 0x1000a3a1)) {
    FUN_10003d7d(((int)(param_1 + 0xefff5ec0) >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



/* ================================================================
 * Function: FUN_10004d70
 * Address:  10004d70
 * ================================================================ */

void __cdecl FUN_10004d70(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_10003d7d(param_1 + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



/* ================================================================
 * Function: FUN_10004d93
 * Address:  10004d93
 * ================================================================ */

void __cdecl FUN_10004d93(uint param_1)

{
  if ((0x1000a13f < param_1) && (param_1 < 0x1000a3a1)) {
    FUN_10003dde(((int)(param_1 + 0xefff5ec0) >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



/* ================================================================
 * Function: FUN_10004dc2
 * Address:  10004dc2
 * ================================================================ */

void __cdecl FUN_10004dc2(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_10003dde(param_1 + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



/* ================================================================
 * Function: FUN_10004de5
 * Address:  10004de5
 * ================================================================ */

uint __cdecl FUN_10004de5(undefined4 *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  
  uVar2 = param_1[3];
  if (((uVar2 & 0x83) != 0) && ((uVar2 & 0x40) == 0)) {
    if ((uVar2 & 2) == 0) {
      param_1[3] = uVar2 | 1;
      if ((uVar2 & 0x10c) == 0) {
        FUN_100065a3(param_1);
      }
      else {
        *param_1 = param_1[2];
      }
      iVar3 = FUN_10004ec1(param_1[4],(char *)param_1[2],(char *)param_1[6]);
      param_1[1] = iVar3;
      if ((iVar3 != 0) && (iVar3 != -1)) {
        if ((param_1[3] & 0x82) == 0) {
          uVar2 = param_1[4];
          if (uVar2 == 0xffffffff) {
            puVar4 = &DAT_1000a528;
          }
          else {
            puVar4 = (undefined *)((&DAT_1000abe0)[(int)uVar2 >> 5] + (uVar2 & 0x1f) * 0x24);
          }
          if ((puVar4[4] & 0x82) == 0x82) {
            param_1[3] = param_1[3] | 0x2000;
          }
        }
        if (((param_1[6] == 0x200) && ((param_1[3] & 8) != 0)) && ((param_1[3] & 0x400) == 0)) {
          param_1[6] = 0x1000;
        }
        param_1[1] = iVar3 + -1;
        bVar1 = *(byte *)*param_1;
        *param_1 = (byte *)*param_1 + 1;
        return (uint)bVar1;
      }
      param_1[3] = param_1[3] | (-(uint)(iVar3 != 0) & 0x10) + 0x10;
      param_1[1] = 0;
    }
    else {
      param_1[3] = uVar2 | 0x20;
    }
  }
  return 0xffffffff;
}



/* ================================================================
 * Function: FUN_10004ec1
 * Address:  10004ec1
 * ================================================================ */

int __cdecl FUN_10004ec1(uint param_1,char *param_2,char *param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_1000ace0) &&
     ((*(byte *)((&DAT_1000abe0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_10006847(param_1);
    iVar1 = FUN_10004f26(param_1,param_2,param_3);
    FUN_100068a6(param_1);
    return iVar1;
  }
  pDVar2 = FUN_100053b4();
  *pDVar2 = 9;
  pDVar2 = FUN_100053bd();
  *pDVar2 = 0;
  return -1;
}



/* ================================================================
 * Function: FUN_10004f26
 * Address:  10004f26
 * ================================================================ */

int __cdecl FUN_10004f26(uint param_1,char *param_2,char *param_3)

{
  int *piVar1;
  byte *pbVar2;
  char cVar3;
  byte bVar4;
  BOOL BVar5;
  DWORD DVar6;
  DWORD *pDVar7;
  char *pcVar8;
  int iVar9;
  DWORD local_10;
  char *local_c;
  char local_5;
  
  local_c = (char *)0x0;
  if (param_3 != (char *)0x0) {
    piVar1 = &DAT_1000abe0 + ((int)param_1 >> 5);
    iVar9 = (param_1 & 0x1f) * 0x24;
    bVar4 = *(byte *)((&DAT_1000abe0)[(int)param_1 >> 5] + iVar9 + 4);
    if ((bVar4 & 2) == 0) {
      pcVar8 = param_2;
      if (((bVar4 & 0x48) != 0) &&
         (cVar3 = *(char *)((&DAT_1000abe0)[(int)param_1 >> 5] + iVar9 + 5), cVar3 != '\n')) {
        param_3 = param_3 + -1;
        *param_2 = cVar3;
        pcVar8 = param_2 + 1;
        local_c = (char *)0x1;
        *(undefined1 *)(*piVar1 + 5 + iVar9) = 10;
      }
      BVar5 = ReadFile(*(HANDLE *)(*piVar1 + iVar9),pcVar8,(DWORD)param_3,&local_10,
                       (LPOVERLAPPED)0x0);
      if (BVar5 == 0) {
        DVar6 = GetLastError();
        if (DVar6 == 5) {
          pDVar7 = FUN_100053b4();
          *pDVar7 = 9;
          pDVar7 = FUN_100053bd();
          *pDVar7 = 5;
        }
        else {
          if (DVar6 == 0x6d) {
            return 0;
          }
          FUN_10005341(DVar6);
        }
        return -1;
      }
      bVar4 = *(byte *)(*piVar1 + 4 + iVar9);
      if ((bVar4 & 0x80) == 0) {
        return (int)local_c + local_10;
      }
      if ((local_10 == 0) || (*param_2 != '\n')) {
        bVar4 = bVar4 & 0xfb;
      }
      else {
        bVar4 = bVar4 | 4;
      }
      *(byte *)(*piVar1 + 4 + iVar9) = bVar4;
      param_3 = param_2;
      local_c = param_2 + (int)local_c + local_10;
      pcVar8 = param_2;
      if (param_2 < local_c) {
        do {
          cVar3 = *param_3;
          if (cVar3 == '\x1a') {
            pbVar2 = (byte *)(*piVar1 + 4 + iVar9);
            bVar4 = *pbVar2;
            if ((bVar4 & 0x40) == 0) {
              *pbVar2 = bVar4 | 2;
            }
            break;
          }
          if (cVar3 == '\r') {
            if (param_3 < local_c + -1) {
              if (param_3[1] == '\n') {
                param_3 = param_3 + 2;
                goto LAB_100050b1;
              }
              *pcVar8 = '\r';
              pcVar8 = pcVar8 + 1;
              param_3 = param_3 + 1;
            }
            else {
              param_3 = param_3 + 1;
              BVar5 = ReadFile(*(HANDLE *)(*piVar1 + iVar9),&local_5,1,&local_10,(LPOVERLAPPED)0x0);
              if (((BVar5 == 0) && (DVar6 = GetLastError(), DVar6 != 0)) || (local_10 == 0)) {
LAB_100050cb:
                *pcVar8 = '\r';
LAB_100050ce:
                pcVar8 = pcVar8 + 1;
              }
              else if ((*(byte *)(*piVar1 + 4 + iVar9) & 0x48) == 0) {
                if ((pcVar8 == param_2) && (local_5 == '\n')) {
LAB_100050b1:
                  *pcVar8 = '\n';
                  goto LAB_100050ce;
                }
                FUN_1000563b(param_1,-1,1);
                if (local_5 != '\n') goto LAB_100050cb;
              }
              else {
                if (local_5 == '\n') goto LAB_100050b1;
                *pcVar8 = '\r';
                pcVar8 = pcVar8 + 1;
                *(char *)(*piVar1 + 5 + iVar9) = local_5;
              }
            }
          }
          else {
            *pcVar8 = cVar3;
            pcVar8 = pcVar8 + 1;
            param_3 = param_3 + 1;
          }
        } while (param_3 < local_c);
      }
      return (int)pcVar8 - (int)param_2;
    }
  }
  return 0;
}



/* ================================================================
 * Function: FUN_100050ff
 * Address:  100050ff
 * ================================================================ */

undefined4 __cdecl FUN_100050ff(uint param_1)

{
  undefined4 uVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_1000ace0) &&
     ((*(byte *)((&DAT_1000abe0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_10006847(param_1);
    uVar1 = FUN_1000515c(param_1);
    FUN_100068a6(param_1);
    return uVar1;
  }
  pDVar2 = FUN_100053b4();
  *pDVar2 = 9;
  pDVar2 = FUN_100053bd();
  *pDVar2 = 0;
  return 0xffffffff;
}



/* ================================================================
 * Function: FUN_1000515c
 * Address:  1000515c
 * ================================================================ */

undefined4 __cdecl FUN_1000515c(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_10006805(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_10006805(2);
      iVar2 = FUN_10006805(1);
      if (iVar2 == iVar1) goto LAB_100051aa;
    }
    hObject = (HANDLE)FUN_10006805(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_100051ac;
    }
  }
LAB_100051aa:
  DVar4 = 0;
LAB_100051ac:
  FUN_10006786(param_1);
  *(undefined1 *)((&DAT_1000abe0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_10005341(DVar4);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}



/* ================================================================
 * Function: __freebuf
 * Address:  100051df
 * ================================================================ */

/* Library Function - Single Match
    __freebuf
   
   Library: Visual Studio 2003 Release */

void __cdecl __freebuf(FILE *_File)

{
  if (((_File->_flag & 0x83U) != 0) && ((_File->_flag & 8U) != 0)) {
    FUN_10003368(_File->_base);
    *(ushort *)&_File->_flag = (ushort)_File->_flag & 0xfbf7;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
    _File->_cnt = 0;
  }
  return;
}



/* ================================================================
 * Function: FUN_1000520a
 * Address:  1000520a
 * ================================================================ */

int __cdecl FUN_1000520a(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10005238(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((*(byte *)((int)param_1 + 0xd) & 0x40) != 0) {
    iVar1 = FUN_100068c8(param_1[4]);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}



/* ================================================================
 * Function: FUN_10005238
 * Address:  10005238
 * ================================================================ */

undefined4 __cdecl FUN_10005238(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if ((((byte)param_1[3] & 3) == 2) && ((param_1[3] & 0x108U) != 0)) {
    uVar3 = *param_1 - param_1[2];
    if (0 < (int)uVar3) {
      uVar1 = FUN_1000695b(param_1[4],(char *)param_1[2],uVar3);
      if (uVar1 == uVar3) {
        if ((param_1[3] & 0x80U) != 0) {
          param_1[3] = param_1[3] & 0xfffffffd;
        }
      }
      else {
        param_1[3] = param_1[3] | 0x20;
        uVar2 = 0xffffffff;
      }
    }
  }
  param_1[1] = 0;
  *param_1 = param_1[2];
  return uVar2;
}



/* ================================================================
 * Function: FUN_1000529d
 * Address:  1000529d
 * ================================================================ */

int __cdecl FUN_1000529d(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = 0;
  FUN_10003d7d(2);
  iVar4 = 0;
  if (0 < DAT_1000bd00) {
    do {
      iVar2 = *(int *)(DAT_1000ace4 + iVar4 * 4);
      if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0xc) & 0x83) != 0)) {
        FUN_10004d70(iVar4,iVar2);
        piVar1 = *(int **)(DAT_1000ace4 + iVar4 * 4);
        if ((piVar1[3] & 0x83U) != 0) {
          if (param_1 == 1) {
            iVar2 = FUN_1000520a(piVar1);
            if (iVar2 != -1) {
              iVar3 = iVar3 + 1;
            }
          }
          else if ((param_1 == 0) && ((piVar1[3] & 2U) != 0)) {
            iVar2 = FUN_1000520a(piVar1);
            if (iVar2 == -1) {
              iVar5 = -1;
            }
          }
        }
        FUN_10004dc2(iVar4,*(int *)(DAT_1000ace4 + iVar4 * 4));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_1000bd00);
  }
  FUN_10003dde(2);
  if (param_1 != 1) {
    iVar3 = iVar5;
  }
  return iVar3;
}



/* ================================================================
 * Function: FUN_10005341
 * Address:  10005341
 * ================================================================ */

void __cdecl FUN_10005341(uint param_1)

{
  DWORD *pDVar1;
  uint *puVar2;
  int iVar3;
  
  pDVar1 = FUN_100053bd();
  iVar3 = 0;
  *pDVar1 = param_1;
  puVar2 = &DAT_1000a3c0;
  do {
    if (param_1 == *puVar2) {
      pDVar1 = FUN_100053b4();
      *pDVar1 = *(DWORD *)(iVar3 * 8 + 0x1000a3c4);
      return;
    }
    puVar2 = puVar2 + 2;
    iVar3 = iVar3 + 1;
  } while ((int)puVar2 < 0x1000a528);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    pDVar1 = FUN_100053b4();
    *pDVar1 = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    pDVar1 = FUN_100053b4();
    *pDVar1 = 8;
    return;
  }
  pDVar1 = FUN_100053b4();
  *pDVar1 = 0x16;
  return;
}



/* ================================================================
 * Function: FUN_100053b4
 * Address:  100053b4
 * ================================================================ */

DWORD * FUN_100053b4(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10005a89();
  return pDVar1 + 2;
}



/* ================================================================
 * Function: FUN_100053bd
 * Address:  100053bd
 * ================================================================ */

DWORD * FUN_100053bd(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10005a89();
  return pDVar1 + 3;
}



/* ================================================================
 * Function: FUN_100053c6
 * Address:  100053c6
 * ================================================================ */

void FUN_100053c6(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  DWORD DVar4;
  HANDLE hFile;
  UINT *pUVar5;
  int iVar6;
  uint uVar7;
  UINT UVar8;
  UINT UVar9;
  _STARTUPINFOA local_4c;
  byte *local_8;
  
  puVar2 = _malloc(0x480);
  if (puVar2 == (undefined4 *)0x0) {
    __amsg_exit(0x1b);
  }
  DAT_1000ace0 = 0x20;
  DAT_1000abe0 = puVar2;
  for (; puVar2 < DAT_1000abe0 + 0x120; puVar2 = puVar2 + 9) {
    *(undefined1 *)(puVar2 + 1) = 0;
    *puVar2 = 0xffffffff;
    puVar2[2] = 0;
    *(undefined1 *)((int)puVar2 + 5) = 10;
  }
  GetStartupInfoA(&local_4c);
  if ((local_4c.cbReserved2 != 0) && ((UINT *)local_4c.lpReserved2 != (UINT *)0x0)) {
    UVar8 = *(UINT *)local_4c.lpReserved2;
    pUVar5 = (UINT *)((int)local_4c.lpReserved2 + 4);
    local_8 = (byte *)((int)pUVar5 + UVar8);
    if (0x7ff < (int)UVar8) {
      UVar8 = 0x800;
    }
    UVar9 = UVar8;
    if ((int)DAT_1000ace0 < (int)UVar8) {
      puVar2 = &DAT_1000abe4;
      do {
        puVar3 = _malloc(0x480);
        UVar9 = DAT_1000ace0;
        if (puVar3 == (undefined4 *)0x0) break;
        DAT_1000ace0 = DAT_1000ace0 + 0x20;
        *puVar2 = puVar3;
        puVar1 = puVar3;
        for (; puVar3 < puVar1 + 0x120; puVar3 = puVar3 + 9) {
          *(undefined1 *)(puVar3 + 1) = 0;
          *puVar3 = 0xffffffff;
          puVar3[2] = 0;
          *(undefined1 *)((int)puVar3 + 5) = 10;
          puVar1 = (undefined4 *)*puVar2;
        }
        puVar2 = puVar2 + 1;
        UVar9 = UVar8;
      } while ((int)DAT_1000ace0 < (int)UVar8);
    }
    uVar7 = 0;
    if (0 < (int)UVar9) {
      do {
        if (((*(HANDLE *)local_8 != (HANDLE)0xffffffff) && ((*pUVar5 & 1) != 0)) &&
           (((*pUVar5 & 8) != 0 || (DVar4 = GetFileType(*(HANDLE *)local_8), DVar4 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_1000abe0)[(int)uVar7 >> 5] + (uVar7 & 0x1f) * 0x24);
          *puVar2 = *(undefined4 *)local_8;
          *(byte *)(puVar2 + 1) = (byte)*pUVar5;
        }
        local_8 = local_8 + 4;
        uVar7 = uVar7 + 1;
        pUVar5 = (UINT *)((int)pUVar5 + 1);
      } while ((int)uVar7 < (int)UVar9);
    }
  }
  iVar6 = 0;
  do {
    puVar2 = DAT_1000abe0 + iVar6 * 9;
    if (DAT_1000abe0[iVar6 * 9] == -1) {
      *(undefined1 *)(puVar2 + 1) = 0x81;
      if (iVar6 == 0) {
        DVar4 = 0xfffffff6;
      }
      else {
        DVar4 = 0xfffffff5 - (iVar6 != 1);
      }
      hFile = GetStdHandle(DVar4);
      if ((hFile != (HANDLE)0xffffffff) && (DVar4 = GetFileType(hFile), DVar4 != 0)) {
        *puVar2 = hFile;
        if ((DVar4 & 0xff) != 2) {
          if ((DVar4 & 0xff) == 3) {
            *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 8;
          }
          goto LAB_1000556b;
        }
      }
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x40;
    }
    else {
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x80;
    }
LAB_1000556b:
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      SetHandleCount(DAT_1000ace0);
      return;
    }
  } while( true );
}



/* ================================================================
 * Function: FUN_10005582
 * Address:  10005582
 * ================================================================ */

void FUN_10005582(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  uint uVar2;
  
  puVar1 = &DAT_1000abe0;
  do {
    uVar2 = *puVar1;
    if (uVar2 != 0) {
      if (uVar2 < uVar2 + 0x480) {
        lpCriticalSection = (LPCRITICAL_SECTION)(uVar2 + 0xc);
        do {
          if (lpCriticalSection[-1].SpinCount != 0) {
            DeleteCriticalSection(lpCriticalSection);
          }
          uVar2 = uVar2 + 0x24;
          lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[1].OwningThread;
        } while (uVar2 < *puVar1 + 0x480);
      }
      FUN_10003368((LPVOID)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x1000ace0);
  return;
}



/* ================================================================
 * Function: FUN_100055d6
 * Address:  100055d6
 * ================================================================ */

DWORD __cdecl FUN_100055d6(uint param_1,LONG param_2,DWORD param_3)

{
  DWORD DVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_1000ace0) &&
     ((*(byte *)((&DAT_1000abe0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_10006847(param_1);
    DVar1 = FUN_1000563b(param_1,param_2,param_3);
    FUN_100068a6(param_1);
    return DVar1;
  }
  pDVar2 = FUN_100053b4();
  *pDVar2 = 9;
  pDVar2 = FUN_100053bd();
  *pDVar2 = 0;
  return 0xffffffff;
}



/* ================================================================
 * Function: FUN_1000563b
 * Address:  1000563b
 * ================================================================ */

DWORD __cdecl FUN_1000563b(uint param_1,LONG param_2,DWORD param_3)

{
  byte *pbVar1;
  HANDLE hFile;
  DWORD *pDVar2;
  DWORD DVar3;
  uint uVar4;
  
  hFile = (HANDLE)FUN_10006805(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    pDVar2 = FUN_100053b4();
    *pDVar2 = 9;
  }
  else {
    DVar3 = SetFilePointer(hFile,param_2,(PLONG)0x0,param_3);
    if (DVar3 == 0xffffffff) {
      uVar4 = GetLastError();
    }
    else {
      uVar4 = 0;
    }
    if (uVar4 == 0) {
      pbVar1 = (byte *)((&DAT_1000abe0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24);
      *pbVar1 = *pbVar1 & 0xfd;
      return DVar3;
    }
    FUN_10005341(uVar4);
  }
  return 0xffffffff;
}



/* ================================================================
 * Function: FUN_100056ae
 * Address:  100056ae
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __cdecl FUN_100056ae(LPCSTR param_1,char *param_2,uint param_3,undefined4 *param_4)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  bVar4 = false;
  bVar3 = false;
  cVar1 = *param_2;
  if (cVar1 == 'a') {
    uVar5 = 0x109;
  }
  else {
    if (cVar1 == 'r') {
      uVar5 = 0;
      uVar6 = DAT_1000a954 | 1;
      goto LAB_100056ef;
    }
    if (cVar1 != 'w') {
      return (undefined4 *)0x0;
    }
    uVar5 = 0x301;
  }
  uVar6 = DAT_1000a954 | 2;
LAB_100056ef:
  bVar2 = true;
LAB_100056f2:
  cVar1 = param_2[1];
  param_2 = param_2 + 1;
  if ((cVar1 == '\0') || (!bVar2)) {
    uVar5 = FUN_10006b4b(param_1,uVar5,param_3,0x1a4);
    if ((int)uVar5 < 0) {
      return (undefined4 *)0x0;
    }
    _DAT_1000a800 = _DAT_1000a800 + 1;
    param_4[3] = uVar6;
    param_4[1] = 0;
    *param_4 = 0;
    param_4[2] = 0;
    param_4[7] = 0;
    param_4[4] = uVar5;
    return param_4;
  }
  if (cVar1 < 'U') {
    if (cVar1 == 'T') {
      if ((uVar5 & 0x1000) == 0) {
        uVar5 = uVar5 | 0x1000;
        goto LAB_100056f2;
      }
    }
    else if (cVar1 == '+') {
      if ((uVar5 & 2) == 0) {
        uVar5 = uVar5 & 0xfffffffe | 2;
        uVar6 = uVar6 & 0xfffffffc | 0x80;
        goto LAB_100056f2;
      }
    }
    else if (cVar1 == 'D') {
      if ((uVar5 & 0x40) == 0) {
        uVar5 = uVar5 | 0x40;
        goto LAB_100056f2;
      }
    }
    else if (cVar1 == 'R') {
      if (!bVar3) {
        bVar3 = true;
        uVar5 = uVar5 | 0x10;
        goto LAB_100056f2;
      }
    }
    else if ((cVar1 == 'S') && (!bVar3)) {
      bVar3 = true;
      uVar5 = uVar5 | 0x20;
      goto LAB_100056f2;
    }
  }
  else {
    if (cVar1 == 'b') {
      if ((uVar5 & 0xc000) != 0) goto LAB_100057d2;
      uVar5 = uVar5 | 0x8000;
      goto LAB_100056f2;
    }
    if (cVar1 == 'c') {
      if (!bVar4) {
        bVar4 = true;
        uVar6 = uVar6 | 0x4000;
        goto LAB_100056f2;
      }
    }
    else {
      if (cVar1 != 'n') {
        if ((cVar1 != 't') || ((uVar5 & 0xc000) != 0)) goto LAB_100057d2;
        uVar5 = uVar5 | 0x4000;
        goto LAB_100056f2;
      }
      if (!bVar4) {
        bVar4 = true;
        uVar6 = uVar6 & 0xffffbfff;
        goto LAB_100056f2;
      }
    }
  }
LAB_100057d2:
  bVar2 = false;
  goto LAB_100056f2;
}



/* ================================================================
 * Function: FUN_1000581e
 * Address:  1000581e
 * ================================================================ */

undefined4 * FUN_1000581e(void)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)0x0;
  FUN_10003d7d(2);
  iVar3 = 0;
  if (0 < DAT_1000bd00) {
    do {
      iVar1 = *(int *)(DAT_1000ace4 + iVar3 * 4);
      if (iVar1 == 0) {
        iVar3 = iVar3 * 4;
        pvVar2 = _malloc(0x38);
        *(void **)(iVar3 + DAT_1000ace4) = pvVar2;
        if (*(int *)(iVar3 + DAT_1000ace4) != 0) {
          InitializeCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar3 + DAT_1000ace4) + 0x20));
          EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar3 + DAT_1000ace4) + 0x20));
          puVar4 = *(undefined4 **)(iVar3 + DAT_1000ace4);
LAB_100058c2:
          if (puVar4 != (undefined4 *)0x0) {
            puVar4[4] = 0xffffffff;
            puVar4[1] = 0;
            puVar4[3] = 0;
            puVar4[2] = 0;
            *puVar4 = 0;
            puVar4[7] = 0;
          }
        }
        break;
      }
      if ((*(byte *)(iVar1 + 0xc) & 0x83) == 0) {
        FUN_10004d70(iVar3,iVar1);
        iVar1 = *(int *)(DAT_1000ace4 + iVar3 * 4);
        if ((*(byte *)(iVar1 + 0xc) & 0x83) == 0) {
          puVar4 = *(undefined4 **)(DAT_1000ace4 + iVar3 * 4);
          goto LAB_100058c2;
        }
        FUN_10004dc2(iVar3,iVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_1000bd00);
  }
  FUN_10003dde(2);
  return puVar4;
}



/* ================================================================
 * Function: FUN_100058e6
 * Address:  100058e6
 * ================================================================ */

void FUN_100058e6(void)

{
  if (DAT_1000abd8 != (code *)0x0) {
    (*DAT_1000abd8)();
  }
  FUN_100059ea((undefined4 *)&DAT_1000a008,(undefined4 *)&DAT_1000a014);
  FUN_100059ea((undefined4 *)&DAT_1000a000,(undefined4 *)&DAT_1000a004);
  return;
}



/* ================================================================
 * Function: __exit
 * Address:  10005913
 * ================================================================ */

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __exit(int _Code)

{
  FUN_10005933(_Code,1,0);
  return;
}



/* ================================================================
 * Function: FUN_10005924
 * Address:  10005924
 * ================================================================ */

void FUN_10005924(void)

{
  FUN_10005933(0,0,1);
  return;
}



/* ================================================================
 * Function: FUN_10005933
 * Address:  10005933
 * ================================================================ */

void __cdecl FUN_10005933(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_100059d8();
  if (DAT_1000a844 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_1000a840 = 1;
  DAT_1000a83c = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_1000abd4 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_1000abd0 - 4), DAT_1000abd4 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_1000abd4 <= puVar1);
    }
    FUN_100059ea((undefined4 *)&DAT_1000a018,(undefined4 *)&DAT_1000a020);
  }
  FUN_100059ea((undefined4 *)&DAT_1000a024,(undefined4 *)&DAT_1000a028);
  if (param_3 == 0) {
    DAT_1000a844 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_100059e1();
  return;
}



/* ================================================================
 * Function: FUN_100059d8
 * Address:  100059d8
 * ================================================================ */

void FUN_100059d8(void)

{
  FUN_10003d7d(0xd);
  return;
}



/* ================================================================
 * Function: FUN_100059e1
 * Address:  100059e1
 * ================================================================ */

void FUN_100059e1(void)

{
  FUN_10003dde(0xd);
  return;
}



/* ================================================================
 * Function: FUN_100059ea
 * Address:  100059ea
 * ================================================================ */

void __cdecl FUN_100059ea(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}



/* ================================================================
 * Function: FUN_10005a04
 * Address:  10005a04
 * ================================================================ */

undefined4 FUN_10005a04(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_10003ce8();
  DAT_1000a54c = TlsAlloc();
  if (DAT_1000a54c != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_10006495(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_1000a54c,lpTlsValue);
      if (BVar1 != 0) {
        FUN_10005a76((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}



/* ================================================================
 * Function: FUN_10005a58
 * Address:  10005a58
 * ================================================================ */

void FUN_10005a58(void)

{
  FUN_10003d11();
  if (DAT_1000a54c != 0xffffffff) {
    TlsFree(DAT_1000a54c);
    DAT_1000a54c = 0xffffffff;
  }
  return;
}



/* ================================================================
 * Function: FUN_10005a76
 * Address:  10005a76
 * ================================================================ */

void __cdecl FUN_10005a76(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_1000a5e0;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}



/* ================================================================
 * Function: FUN_10005a89
 * Address:  10005a89
 * ================================================================ */

DWORD * FUN_10005a89(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_1000a54c);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_10006495(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_1000a54c,lpTlsValue);
      if (BVar1 != 0) {
        FUN_10005a76((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        goto LAB_10005ae4;
      }
    }
    __amsg_exit(0x10);
  }
LAB_10005ae4:
  SetLastError(dwErrCode);
  return lpTlsValue;
}



/* ================================================================
 * Function: FUN_10005af0
 * Address:  10005af0
 * ================================================================ */

void __cdecl FUN_10005af0(LPVOID param_1)

{
  if (DAT_1000a54c != 0xffffffff) {
    if ((param_1 != (LPVOID)0x0) || (param_1 = TlsGetValue(DAT_1000a54c), param_1 != (LPVOID)0x0)) {
      if (*(LPVOID *)((int)param_1 + 0x24) != (LPVOID)0x0) {
        FUN_10003368(*(LPVOID *)((int)param_1 + 0x24));
      }
      if (*(LPVOID *)((int)param_1 + 0x28) != (LPVOID)0x0) {
        FUN_10003368(*(LPVOID *)((int)param_1 + 0x28));
      }
      if (*(LPVOID *)((int)param_1 + 0x30) != (LPVOID)0x0) {
        FUN_10003368(*(LPVOID *)((int)param_1 + 0x30));
      }
      if (*(LPVOID *)((int)param_1 + 0x38) != (LPVOID)0x0) {
        FUN_10003368(*(LPVOID *)((int)param_1 + 0x38));
      }
      if (*(LPVOID *)((int)param_1 + 0x40) != (LPVOID)0x0) {
        FUN_10003368(*(LPVOID *)((int)param_1 + 0x40));
      }
      if (*(LPVOID *)((int)param_1 + 0x44) != (LPVOID)0x0) {
        FUN_10003368(*(LPVOID *)((int)param_1 + 0x44));
      }
      if (*(undefined **)((int)param_1 + 0x50) != &DAT_1000a5e0) {
        FUN_10003368(*(undefined **)((int)param_1 + 0x50));
      }
      FUN_10003368(param_1);
    }
    TlsSetValue(DAT_1000a54c,(LPVOID)0x0);
    return;
  }
  return;
}



/* ================================================================
 * Function: FUN_10005b90
 * Address:  10005b90
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005b90(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  
  if (DAT_1000abcc == 0) {
    FUN_10007363();
  }
  iVar5 = 0;
  for (puVar6 = DAT_1000a788; (char)*puVar6 != '\0'; puVar6 = (uint *)((int)puVar6 + sVar2 + 1)) {
    if ((char)*puVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen((char *)puVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  _DAT_1000a824 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = (char)*DAT_1000a788;
  puVar6 = DAT_1000a788;
  while (cVar1 != '\0') {
    sVar2 = _strlen((char *)puVar6);
    if ((char)*puVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_10006e20((uint *)*puVar3,puVar6);
      puVar3 = puVar3 + 1;
    }
    puVar6 = (uint *)((int)puVar6 + sVar2 + 1);
    cVar1 = (char)*puVar6;
  }
  FUN_10003368(DAT_1000a788);
  DAT_1000a788 = (uint *)0x0;
  *puVar3 = 0;
  _DAT_1000abc8 = 1;
  return;
}



/* ================================================================
 * Function: FUN_10005c49
 * Address:  10005c49
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005c49(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_1000abcc == 0) {
    FUN_10007363();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_1000a848,0x104);
  _DAT_1000a834 = &DAT_1000a848;
  pbVar2 = &DAT_1000a848;
  if (*DAT_1000bd20 != 0) {
    pbVar2 = DAT_1000bd20;
  }
  FUN_10005ce2(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_10005ce2(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_1000a81c = puVar1;
  _DAT_1000a818 = local_8 + -1;
  return;
}



/* ================================================================
 * Function: FUN_10005ce2
 * Address:  10005ce2
 * ================================================================ */

void __cdecl FUN_10005ce2(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  *param_5 = 0;
  *param_4 = 1;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  if (*param_1 == 0x22) {
    while( true ) {
      bVar1 = param_1[1];
      pbVar4 = param_1 + 1;
      if ((bVar1 == 0x22) || (bVar1 == 0)) break;
      if (((*(byte *)((int)&DAT_1000aac0 + bVar1 + 1) & 4) != 0) &&
         (*param_5 = *param_5 + 1, param_3 != (byte *)0x0)) {
        *param_3 = *pbVar4;
        param_3 = param_3 + 1;
        pbVar4 = param_1 + 2;
      }
      *param_5 = *param_5 + 1;
      param_1 = pbVar4;
      if (param_3 != (byte *)0x0) {
        *param_3 = *pbVar4;
        param_3 = param_3 + 1;
      }
    }
    *param_5 = *param_5 + 1;
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    if (*pbVar4 == 0x22) {
      pbVar4 = param_1 + 2;
    }
  }
  else {
    do {
      *param_5 = *param_5 + 1;
      if (param_3 != (byte *)0x0) {
        *param_3 = *param_1;
        param_3 = param_3 + 1;
      }
      bVar1 = *param_1;
      pbVar4 = param_1 + 1;
      if ((*(byte *)((int)&DAT_1000aac0 + bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        pbVar4 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_10005d8d;
      param_1 = pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_10005d8d:
      pbVar4 = pbVar4 + -1;
    }
    else if (param_3 != (byte *)0x0) {
      param_3[-1] = 0;
    }
  }
  bVar2 = false;
  puVar7 = param_2;
  while (*pbVar4 != 0) {
    for (; (*pbVar4 == 0x20 || (*pbVar4 == 9)); pbVar4 = pbVar4 + 1) {
    }
    if (*pbVar4 == 0) break;
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = param_3;
      puVar7 = puVar7 + 1;
      param_2 = puVar7;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      bVar3 = true;
      uVar6 = 0;
      for (; *pbVar4 == 0x5c; pbVar4 = pbVar4 + 1) {
        uVar6 = uVar6 + 1;
      }
      if (*pbVar4 == 0x22) {
        pbVar5 = pbVar4;
        if ((uVar6 & 1) == 0) {
          if ((!bVar2) || (pbVar5 = pbVar4 + 1, pbVar4[1] != 0x22)) {
            bVar3 = false;
            pbVar5 = pbVar4;
          }
          bVar2 = !bVar2;
          puVar7 = param_2;
        }
        uVar6 = uVar6 >> 1;
        pbVar4 = pbVar5;
      }
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        if (param_3 != (byte *)0x0) {
          *param_3 = 0x5c;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      bVar1 = *pbVar4;
      if ((bVar1 == 0) || ((!bVar2 && ((bVar1 == 0x20 || (bVar1 == 9)))))) break;
      if (bVar3) {
        if (param_3 == (byte *)0x0) {
          if ((*(byte *)((int)&DAT_1000aac0 + bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if ((*(byte *)((int)&DAT_1000aac0 + bVar1 + 1) & 4) != 0) {
            *param_3 = bVar1;
            param_3 = param_3 + 1;
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      pbVar4 = pbVar4 + 1;
    }
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    *param_5 = *param_5 + 1;
  }
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0;
  }
  *param_4 = *param_4 + 1;
  return;
}



/* ================================================================
 * Function: FUN_10005e96
 * Address:  10005e96
 * ================================================================ */

LPSTR FUN_10005e96(void)

{
  char cVar1;
  WCHAR WVar2;
  WCHAR *pWVar3;
  WCHAR *pWVar4;
  int iVar5;
  size_t _Size;
  LPSTR pCVar6;
  char *pcVar7;
  LPWCH lpWideCharStr;
  LPCH pCVar9;
  LPSTR local_8;
  char *pcVar8;
  
  lpWideCharStr = (LPWCH)0x0;
  pCVar9 = (LPCH)0x0;
  if (DAT_1000a94c == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_1000a94c = 1;
LAB_10005eed:
      if ((lpWideCharStr == (LPWCH)0x0) &&
         (lpWideCharStr = GetEnvironmentStringsW(), lpWideCharStr == (LPWCH)0x0)) {
        return (LPSTR)0x0;
      }
      WVar2 = *lpWideCharStr;
      pWVar4 = lpWideCharStr;
      while (WVar2 != L'\0') {
        do {
          pWVar3 = pWVar4;
          pWVar4 = pWVar3 + 1;
        } while (*pWVar4 != L'\0');
        pWVar4 = pWVar3 + 2;
        WVar2 = *pWVar4;
      }
      iVar5 = ((int)pWVar4 - (int)lpWideCharStr >> 1) + 1;
      _Size = WideCharToMultiByte(0,0,lpWideCharStr,iVar5,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
      local_8 = (LPSTR)0x0;
      if (((_Size != 0) && (pCVar6 = _malloc(_Size), pCVar6 != (LPSTR)0x0)) &&
         (iVar5 = WideCharToMultiByte(0,0,lpWideCharStr,iVar5,pCVar6,_Size,(LPCSTR)0x0,(LPBOOL)0x0),
         local_8 = pCVar6, iVar5 == 0)) {
        FUN_10003368(pCVar6);
        local_8 = (LPSTR)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return local_8;
    }
    pCVar9 = GetEnvironmentStrings();
    if (pCVar9 == (LPCH)0x0) {
      return (LPSTR)0x0;
    }
    DAT_1000a94c = 2;
  }
  else {
    if (DAT_1000a94c == 1) goto LAB_10005eed;
    if (DAT_1000a94c != 2) {
      return (LPSTR)0x0;
    }
  }
  if ((pCVar9 == (LPCH)0x0) && (pCVar9 = GetEnvironmentStrings(), pCVar9 == (LPCH)0x0)) {
    return (LPSTR)0x0;
  }
  cVar1 = *pCVar9;
  pcVar7 = pCVar9;
  while (cVar1 != '\0') {
    do {
      pcVar8 = pcVar7;
      pcVar7 = pcVar8 + 1;
    } while (*pcVar7 != '\0');
    pcVar7 = pcVar8 + 2;
    cVar1 = *pcVar7;
  }
  pCVar6 = _malloc((size_t)(pcVar7 + (1 - (int)pCVar9)));
  if (pCVar6 == (LPSTR)0x0) {
    pCVar6 = (LPSTR)0x0;
  }
  else {
    FUN_10004950((undefined4 *)pCVar6,(undefined4 *)pCVar9,(uint)(pcVar7 + (1 - (int)pCVar9)));
  }
  FreeEnvironmentStringsA(pCVar9);
  return pCVar6;
}



/* ================================================================
 * Function: FUN_10005fc8
 * Address:  10005fc8
 * ================================================================ */

void FUN_10005fc8(void)

{
  if ((DAT_1000a790 == 1) || ((DAT_1000a790 == 0 && (DAT_1000a794 == 1)))) {
    FUN_10006001(0xfc);
    if (DAT_1000a950 != (code *)0x0) {
      (*DAT_1000a950)();
    }
    FUN_10006001(0xff);
  }
  return;
}



/* ================================================================
 * Function: FUN_10006001
 * Address:  10006001
 * ================================================================ */

void __cdecl FUN_10006001(DWORD param_1)

{
  undefined4 *puVar1;
  DWORD *pDVar2;
  DWORD DVar3;
  size_t sVar4;
  HANDLE hFile;
  int iVar5;
  uint *_Dest;
  undefined1 auStackY_1e3 [7];
  LPCVOID lpBuffer;
  LPOVERLAPPED lpOverlapped;
  uint local_1a8 [65];
  uint local_a4 [40];
  
  iVar5 = 0;
  pDVar2 = &DAT_1000a550;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while ((int)pDVar2 < 0x1000a5e0);
  if (param_1 == (&DAT_1000a550)[iVar5 * 2]) {
    if ((DAT_1000a790 == 1) || ((DAT_1000a790 == 0 && (DAT_1000a794 == 1)))) {
      pDVar2 = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x1000a554);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar4,pDVar2,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_10006e20(local_1a8,(uint *)"<program name unknown>");
      }
      _Dest = local_1a8;
      sVar4 = _strlen((char *)local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen((char *)local_1a8);
        _Dest = (uint *)(auStackY_1e3 + sVar4);
        _strncpy((char *)_Dest,"...",3);
      }
      FUN_10006e20(local_a4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_10006e30(local_a4,_Dest);
      FUN_10006e30(local_a4,(uint *)&DAT_10008438);
      FUN_10006e30(local_a4,*(uint **)(iVar5 * 8 + 0x1000a554));
      auStackY_1e3._3_4_ = 0x10006125;
      FUN_1000737f(local_a4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}



/* ================================================================
 * Function: FUN_10006160
 * Address:  10006160
 * ================================================================ */

undefined4 * __cdecl FUN_10006160(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((param_2 < param_1) && (param_1 < (undefined4 *)(param_3 + (int)param_2))) {
    puVar3 = (undefined4 *)((param_3 - 4) + (int)param_2);
    puVar4 = (undefined4 *)((param_3 - 4) + (int)param_1);
    if (((uint)puVar4 & 3) == 0) {
      uVar1 = param_3 >> 2;
      uVar2 = param_3 & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar2) {
        case 0:
          return param_1;
        case 2:
          goto switchD_10006317_caseD_2;
        case 3:
          goto switchD_10006317_caseD_3;
        }
        goto switchD_10006317_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10006317_caseD_0;
      case 1:
        goto switchD_10006317_caseD_1;
      case 2:
        goto switchD_10006317_caseD_2;
      case 3:
        goto switchD_10006317_caseD_3;
      default:
        uVar1 = param_3 - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          puVar3 = (undefined4 *)((int)puVar3 + -1);
          uVar1 = uVar1 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_10006317_caseD_2;
            case 3:
              goto switchD_10006317_caseD_3;
            }
            goto switchD_10006317_caseD_1;
          }
          break;
        case 2:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          puVar3 = (undefined4 *)((int)puVar3 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_10006317_caseD_2;
            case 3:
              goto switchD_10006317_caseD_3;
            }
            goto switchD_10006317_caseD_1;
          }
          break;
        case 3:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_10006317_caseD_2;
            case 3:
              goto switchD_10006317_caseD_3;
            }
            goto switchD_10006317_caseD_1;
          }
        }
      }
    }
    switch(uVar1) {
    case 7:
      puVar4[7 - uVar1] = puVar3[7 - uVar1];
    case 6:
      puVar4[6 - uVar1] = puVar3[6 - uVar1];
    case 5:
      puVar4[5 - uVar1] = puVar3[5 - uVar1];
    case 4:
      puVar4[4 - uVar1] = puVar3[4 - uVar1];
    case 3:
      puVar4[3 - uVar1] = puVar3[3 - uVar1];
    case 2:
      puVar4[2 - uVar1] = puVar3[2 - uVar1];
    case 1:
      puVar4[1 - uVar1] = puVar3[1 - uVar1];
      puVar3 = puVar3 + -uVar1;
      puVar4 = puVar4 + -uVar1;
    }
    switch(uVar2) {
    case 1:
switchD_10006317_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10006317_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10006317_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10006317_caseD_0:
    return param_1;
  }
  puVar3 = param_1;
  if (((uint)param_1 & 3) == 0) {
    uVar1 = param_3 >> 2;
    uVar2 = param_3 & 3;
    if (7 < uVar1) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
      switch(uVar2) {
      case 0:
        return param_1;
      case 2:
        goto switchD_10006195_caseD_2;
      case 3:
        goto switchD_10006195_caseD_3;
      }
      goto switchD_10006195_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10006195_caseD_0;
    case 1:
      goto switchD_10006195_caseD_1;
    case 2:
      goto switchD_10006195_caseD_2;
    case 3:
      goto switchD_10006195_caseD_3;
    default:
      uVar1 = (param_3 - 4) + ((uint)param_1 & 3);
      switch((uint)param_1 & 3) {
      case 1:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 2) = *(undefined1 *)((int)param_2 + 2);
        param_2 = (undefined4 *)((int)param_2 + 3);
        puVar3 = (undefined4 *)((int)param_1 + 3);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_10006195_caseD_2;
          case 3:
            goto switchD_10006195_caseD_3;
          }
          goto switchD_10006195_caseD_1;
        }
        break;
      case 2:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        param_2 = (undefined4 *)((int)param_2 + 2);
        puVar3 = (undefined4 *)((int)param_1 + 2);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_10006195_caseD_2;
          case 3:
            goto switchD_10006195_caseD_3;
          }
          goto switchD_10006195_caseD_1;
        }
        break;
      case 3:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        puVar3 = (undefined4 *)((int)param_1 + 1);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_10006195_caseD_2;
          case 3:
            goto switchD_10006195_caseD_3;
          }
          goto switchD_10006195_caseD_1;
        }
      }
    }
  }
  switch(uVar1) {
  case 7:
    puVar3[uVar1 - 7] = param_2[uVar1 - 7];
  case 6:
    puVar3[uVar1 - 6] = param_2[uVar1 - 6];
  case 5:
    puVar3[uVar1 - 5] = param_2[uVar1 - 5];
  case 4:
    puVar3[uVar1 - 4] = param_2[uVar1 - 4];
  case 3:
    puVar3[uVar1 - 3] = param_2[uVar1 - 3];
  case 2:
    puVar3[uVar1 - 2] = param_2[uVar1 - 2];
  case 1:
    puVar3[uVar1 - 1] = param_2[uVar1 - 1];
    param_2 = param_2 + uVar1;
    puVar3 = puVar3 + uVar1;
  }
  switch(uVar2) {
  case 1:
switchD_10006195_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10006195_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10006195_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10006195_caseD_0:
  return param_1;
}



/* ================================================================
 * Function: FUN_10006495
 * Address:  10006495
 * ================================================================ */

int * __cdecl FUN_10006495(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint *_Size;
  uint *puVar3;
  
  _Size = (uint *)(param_1 * param_2);
  puVar3 = _Size;
  if (_Size < (uint *)0xffffffe1) {
    if (_Size == (uint *)0x0) {
      puVar3 = (uint *)0x1;
    }
    puVar3 = (uint *)((int)puVar3 + 0xfU & 0xfffffff0);
  }
  do {
    if (puVar3 < (uint *)0xffffffe1) {
      if (_Size < DAT_1000a138 || (int)_Size - (int)DAT_1000a138 == 0) {
        FUN_10003d7d(9);
        piVar1 = FUN_10004187(_Size);
        FUN_10003dde(9);
        if (piVar1 != (int *)0x0) {
          _memset(piVar1,0,(size_t)_Size);
          return piVar1;
        }
      }
      piVar1 = HeapAlloc(DAT_1000bd1c,8,(SIZE_T)puVar3);
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
    }
    if (DAT_1000a7f8 == 0) {
      return (int *)0x0;
    }
    iVar2 = FUN_10004932(puVar3);
  } while (iVar2 != 0);
  return (int *)0x0;
}



/* ================================================================
 * Function: FUN_100065a3
 * Address:  100065a3
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100065a3(undefined4 *param_1)

{
  void *pvVar1;
  
  _DAT_1000a800 = _DAT_1000a800 + 1;
  pvVar1 = _malloc(0x1000);
  param_1[2] = pvVar1;
  if (pvVar1 == (void *)0x0) {
    param_1[3] = param_1[3] | 4;
    param_1[2] = param_1 + 5;
    param_1[6] = 2;
  }
  else {
    param_1[3] = param_1[3] | 8;
    param_1[6] = 0x1000;
  }
  param_1[1] = 0;
  *param_1 = param_1[2];
  return;
}



/* ================================================================
 * Function: FUN_100065e7
 * Address:  100065e7
 * ================================================================ */

uint FUN_100065e7(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  int local_8;
  int local_4;
  
  uVar4 = 0xffffffff;
  FUN_10003d7d(0x12);
  local_8 = 0;
  local_4 = 0;
  piVar3 = &DAT_1000abe0;
  while (puVar2 = (undefined4 *)*piVar3, puVar1 = puVar2, puVar2 != (undefined4 *)0x0) {
    for (; puVar2 < puVar1 + 0x120; puVar2 = puVar2 + 9) {
      if ((*(byte *)(puVar2 + 1) & 1) == 0) {
        if (puVar2[2] == 0) {
          FUN_10003d7d(0x11);
          if (puVar2[2] == 0) {
            InitializeCriticalSection((LPCRITICAL_SECTION)(puVar2 + 3));
            puVar2[2] = puVar2[2] + 1;
          }
          FUN_10003dde(0x11);
        }
        EnterCriticalSection((LPCRITICAL_SECTION)(puVar2 + 3));
        if ((*(byte *)(puVar2 + 1) & 1) == 0) {
          *puVar2 = 0xffffffff;
          uVar4 = ((int)puVar2 - *piVar3) / 0x24 + local_4;
          if (uVar4 != 0xffffffff) goto LAB_100066f9;
          break;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(puVar2 + 3));
      }
      puVar1 = (undefined4 *)*piVar3;
    }
    local_4 = local_4 + 0x20;
    piVar3 = piVar3 + 1;
    local_8 = local_8 + 1;
    if (0x1000acdf < (int)piVar3) goto LAB_100066f9;
  }
  puVar2 = _malloc(0x480);
  if (puVar2 != (undefined4 *)0x0) {
    DAT_1000ace0 = DAT_1000ace0 + 0x20;
    (&DAT_1000abe0)[local_8] = puVar2;
    puVar1 = puVar2;
    for (; puVar2 < puVar1 + 0x120; puVar2 = puVar2 + 9) {
      *(undefined1 *)(puVar2 + 1) = 0;
      *puVar2 = 0xffffffff;
      puVar2[2] = 0;
      *(undefined1 *)((int)puVar2 + 5) = 10;
      puVar1 = (undefined4 *)(&DAT_1000abe0)[local_8];
    }
    uVar4 = local_8 << 5;
    FUN_10006847(uVar4);
  }
LAB_100066f9:
  FUN_10003dde(0x12);
  return uVar4;
}



/* ================================================================
 * Function: FUN_1000670a
 * Address:  1000670a
 * ================================================================ */

undefined4 __cdecl FUN_1000670a(uint param_1,HANDLE param_2)

{
  DWORD *pDVar1;
  int iVar2;
  DWORD nStdHandle;
  
  if (param_1 < DAT_1000ace0) {
    iVar2 = (param_1 & 0x1f) * 0x24;
    if (*(int *)((&DAT_1000abe0)[(int)param_1 >> 5] + iVar2) == -1) {
      if (DAT_1000a794 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_10006763;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,param_2);
      }
LAB_10006763:
      *(HANDLE *)((&DAT_1000abe0)[(int)param_1 >> 5] + iVar2) = param_2;
      return 0;
    }
  }
  pDVar1 = FUN_100053b4();
  *pDVar1 = 9;
  pDVar1 = FUN_100053bd();
  *pDVar1 = 0;
  return 0xffffffff;
}



/* ================================================================
 * Function: FUN_10006786
 * Address:  10006786
 * ================================================================ */

undefined4 __cdecl FUN_10006786(uint param_1)

{
  int *piVar1;
  DWORD *pDVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if (param_1 < DAT_1000ace0) {
    iVar3 = (param_1 & 0x1f) * 0x24;
    piVar1 = (int *)((&DAT_1000abe0)[(int)param_1 >> 5] + iVar3);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_1000a794 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_100067e2;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_100067e2:
      *(undefined4 *)((&DAT_1000abe0)[(int)param_1 >> 5] + iVar3) = 0xffffffff;
      return 0;
    }
  }
  pDVar2 = FUN_100053b4();
  *pDVar2 = 9;
  pDVar2 = FUN_100053bd();
  *pDVar2 = 0;
  return 0xffffffff;
}



/* ================================================================
 * Function: FUN_10006805
 * Address:  10006805
 * ================================================================ */

undefined4 __cdecl FUN_10006805(uint param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 < DAT_1000ace0) &&
     ((*(byte *)((&DAT_1000abe0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_1000abe0)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  pDVar1 = FUN_100053b4();
  *pDVar1 = 9;
  pDVar1 = FUN_100053bd();
  *pDVar1 = 0;
  return 0xffffffff;
}



/* ================================================================
 * Function: FUN_10006847
 * Address:  10006847
 * ================================================================ */

void __cdecl FUN_10006847(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1 & 0x1f) * 0x24;
  iVar1 = (&DAT_1000abe0)[(int)param_1 >> 5] + iVar2;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_10003d7d(0x11);
    if (*(int *)(iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_10003dde(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((&DAT_1000abe0)[(int)param_1 >> 5] + 0xc + iVar2));
  return;
}



/* ================================================================
 * Function: FUN_100068a6
 * Address:  100068a6
 * ================================================================ */

void __cdecl FUN_100068a6(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_1000abe0)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}



/* ================================================================
 * Function: FUN_100068c8
 * Address:  100068c8
 * ================================================================ */

undefined4 __cdecl FUN_100068c8(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (DAT_1000ace0 <= param_1) {
LAB_10006949:
    pDVar3 = FUN_100053b4();
    *pDVar3 = 9;
    return 0xffffffff;
  }
  iVar4 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)((&DAT_1000abe0)[(int)param_1 >> 5] + 4 + iVar4) & 1) == 0) goto LAB_10006949;
  FUN_10006847(param_1);
  if ((*(byte *)((&DAT_1000abe0)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
    hFile = (HANDLE)FUN_10006805(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    uVar5 = 0;
    if (DVar2 == 0) goto LAB_1000693e;
    pDVar3 = FUN_100053bd();
    *pDVar3 = DVar2;
  }
  pDVar3 = FUN_100053b4();
  *pDVar3 = 9;
  uVar5 = 0xffffffff;
LAB_1000693e:
  FUN_100068a6(param_1);
  return uVar5;
}



/* ================================================================
 * Function: FUN_1000695b
 * Address:  1000695b
 * ================================================================ */

int __cdecl FUN_1000695b(uint param_1,char *param_2,uint param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_1000ace0) &&
     ((*(byte *)((&DAT_1000abe0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_10006847(param_1);
    iVar1 = FUN_100069c0(param_1,param_2,param_3);
    FUN_100068a6(param_1);
    return iVar1;
  }
  pDVar2 = FUN_100053b4();
  *pDVar2 = 9;
  pDVar2 = FUN_100053bd();
  *pDVar2 = 0;
  return -1;
}



/* ================================================================
 * Function: FUN_100069c0
 * Address:  100069c0
 * ================================================================ */

int __cdecl FUN_100069c0(DWORD param_1,char *param_2,uint param_3)

{
  int *piVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  BOOL BVar6;
  DWORD *pDVar7;
  char local_418 [1028];
  int local_14;
  DWORD local_10;
  DWORD local_c;
  char *local_8;
  
  local_c = 0;
  local_14 = 0;
  if (param_3 == 0) {
LAB_100069d9:
    iVar4 = 0;
  }
  else {
    piVar1 = &DAT_1000abe0 + ((int)param_1 >> 5);
    iVar4 = (param_1 & 0x1f) * 0x24;
    if ((*(byte *)(*piVar1 + 4 + iVar4) & 0x20) != 0) {
      FUN_1000563b(param_1,0,2);
    }
    if ((*(byte *)((undefined4 *)(*piVar1 + iVar4) + 1) & 0x80) == 0) {
      BVar6 = WriteFile(*(HANDLE *)(*piVar1 + iVar4),param_2,param_3,&local_10,(LPOVERLAPPED)0x0);
      if (BVar6 == 0) {
        param_1 = GetLastError();
      }
      else {
        local_c = local_10;
        param_1 = 0;
      }
LAB_10006aa8:
      if (local_c != 0) {
        return local_c - local_14;
      }
      if (param_1 == 0) goto LAB_10006b1a;
      if (param_1 == 5) {
        pDVar7 = FUN_100053b4();
        *pDVar7 = 9;
        pDVar7 = FUN_100053bd();
        *pDVar7 = 5;
      }
      else {
        FUN_10005341(param_1);
      }
    }
    else {
      local_8 = param_2;
      param_1 = 0;
      if (param_3 != 0) {
        do {
          pcVar5 = local_418;
          do {
            if (param_3 <= (uint)((int)local_8 - (int)param_2)) break;
            pcVar2 = local_8 + 1;
            cVar3 = *local_8;
            local_8 = pcVar2;
            if (cVar3 == '\n') {
              local_14 = local_14 + 1;
              *pcVar5 = '\r';
              pcVar5 = pcVar5 + 1;
            }
            *pcVar5 = cVar3;
            pcVar5 = pcVar5 + 1;
          } while ((int)pcVar5 - (int)local_418 < 0x400);
          BVar6 = WriteFile(*(HANDLE *)(*piVar1 + iVar4),local_418,(int)pcVar5 - (int)local_418,
                            &local_10,(LPOVERLAPPED)0x0);
          if (BVar6 == 0) {
            param_1 = GetLastError();
            goto LAB_10006aa8;
          }
          local_c = local_c + local_10;
          if (((int)local_10 < (int)pcVar5 - (int)local_418) ||
             (param_3 <= (uint)((int)local_8 - (int)param_2))) goto LAB_10006aa8;
        } while( true );
      }
LAB_10006b1a:
      if (((*(byte *)(*piVar1 + 4 + iVar4) & 0x40) != 0) && (*param_2 == '\x1a')) goto LAB_100069d9;
      pDVar7 = FUN_100053b4();
      *pDVar7 = 0x1c;
      pDVar7 = FUN_100053bd();
      *pDVar7 = 0;
    }
    iVar4 = -1;
  }
  return iVar4;
}



/* ================================================================
 * Function: FUN_10006b4b
 * Address:  10006b4b
 * ================================================================ */

uint __cdecl FUN_10006b4b(LPCSTR param_1,uint param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  DWORD *pDVar4;
  HANDLE hFile;
  DWORD DVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  _SECURITY_ATTRIBUTES local_20;
  DWORD local_14;
  DWORD local_10;
  DWORD local_c;
  byte local_5;
  
  bVar8 = (param_2 & 0x80) == 0;
  local_20.nLength = 0xc;
  local_20.lpSecurityDescriptor = (LPVOID)0x0;
  if (bVar8) {
    local_5 = 0;
  }
  else {
    local_5 = 0x10;
  }
  local_20.bInheritHandle = (BOOL)bVar8;
  if (((param_2 & 0x8000) == 0) && (((param_2 & 0x4000) != 0 || (DAT_1000a968 != 0x8000)))) {
    local_5 = local_5 | 0x80;
  }
  uVar2 = param_2 & 3;
  if (uVar2 == 0) {
    local_10 = 0x80000000;
  }
  else if (uVar2 == 1) {
    local_10 = 0x40000000;
  }
  else {
    if (uVar2 != 2) goto LAB_10006c4f;
    local_10 = 0xc0000000;
  }
  if (param_3 == 0x10) {
    local_14 = 0;
  }
  else if (param_3 == 0x20) {
    local_14 = 1;
  }
  else if (param_3 == 0x30) {
    local_14 = 2;
  }
  else {
    if (param_3 != 0x40) goto LAB_10006c4f;
    local_14 = 3;
  }
  uVar2 = param_2 & 0x700;
  if (uVar2 < 0x401) {
    if ((uVar2 == 0x400) || (uVar2 == 0)) {
      local_c = 3;
    }
    else if (uVar2 == 0x100) {
      local_c = 4;
    }
    else {
      if (uVar2 == 0x200) goto LAB_10006c69;
      if (uVar2 != 0x300) goto LAB_10006c4f;
      local_c = 2;
    }
  }
  else {
    if (uVar2 != 0x500) {
      if (uVar2 == 0x600) {
LAB_10006c69:
        local_c = 5;
        goto LAB_10006c79;
      }
      if (uVar2 != 0x700) {
LAB_10006c4f:
        pDVar4 = FUN_100053b4();
        *pDVar4 = 0x16;
        pDVar4 = FUN_100053bd();
        *pDVar4 = 0;
        return 0xffffffff;
      }
    }
    local_c = 1;
  }
LAB_10006c79:
  uVar2 = 0x80;
  if (((param_2 & 0x100) != 0) && ((~DAT_1000a804 & param_4 & 0x80) == 0)) {
    uVar2 = 1;
  }
  if ((param_2 & 0x40) != 0) {
    uVar2 = uVar2 | 0x4000000;
    local_10 = CONCAT13(local_10._3_1_,0x10000);
  }
  if ((param_2 & 0x1000) != 0) {
    uVar2 = uVar2 | 0x100;
  }
  if ((param_2 & 0x20) == 0) {
    if ((param_2 & 0x10) != 0) {
      uVar2 = uVar2 | 0x10000000;
    }
  }
  else {
    uVar2 = uVar2 | 0x8000000;
  }
  uVar3 = FUN_100065e7();
  if (uVar3 == 0xffffffff) {
    pDVar4 = FUN_100053b4();
    *pDVar4 = 0x18;
    pDVar4 = FUN_100053bd();
    *pDVar4 = 0;
    return 0xffffffff;
  }
  hFile = CreateFileA(param_1,local_10,local_14,&local_20,local_c,uVar2,(HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    DVar5 = GetFileType(hFile);
    if (DVar5 != 0) {
      if (DVar5 == 2) {
        local_5 = local_5 | 0x40;
      }
      else if (DVar5 == 3) {
        local_5 = local_5 | 8;
      }
      FUN_1000670a(uVar3,hFile);
      iVar7 = (uVar3 & 0x1f) * 0x24;
      param_1._3_1_ = local_5 & 0x48;
      *(byte *)((&DAT_1000abe0)[(int)uVar3 >> 5] + 4 + iVar7) = local_5 | 1;
      if ((((local_5 & 0x48) == 0) && ((local_5 & 0x80) != 0)) && ((param_2 & 2) != 0)) {
        local_14 = FUN_1000563b(uVar3,-1,2);
        if (local_14 == 0xffffffff) {
          pDVar4 = FUN_100053bd();
          if (*pDVar4 == 0x83) goto LAB_10006df3;
        }
        else {
          param_3 = param_3 & 0xffffff;
          iVar6 = FUN_10004f26(uVar3,(char *)((int)&param_3 + 3),(char *)0x1);
          if ((((iVar6 != 0) || (param_3._3_1_ != '\x1a')) ||
              (iVar6 = FUN_10007468(uVar3,local_14), iVar6 != -1)) &&
             (DVar5 = FUN_1000563b(uVar3,0,0), DVar5 != 0xffffffff)) goto LAB_10006df3;
        }
        FUN_100050ff(uVar3);
        uVar2 = 0xffffffff;
      }
      else {
LAB_10006df3:
        uVar2 = uVar3;
        if ((param_1._3_1_ == 0) && ((param_2 & 8) != 0)) {
          pbVar1 = (byte *)((&DAT_1000abe0)[(int)uVar3 >> 5] + 4 + iVar7);
          *pbVar1 = *pbVar1 | 0x20;
        }
      }
      goto LAB_10006e0c;
    }
    CloseHandle(hFile);
  }
  DVar5 = GetLastError();
  FUN_10005341(DVar5);
  uVar2 = 0xffffffff;
LAB_10006e0c:
  FUN_100068a6(uVar3);
  return uVar2;
}



/* ================================================================
 * Function: FUN_10006e20
 * Address:  10006e20
 * ================================================================ */

uint * __cdecl FUN_10006e20(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  puVar4 = param_1;
  while (((uint)param_2 & 3) != 0) {
    bVar1 = (byte)*param_2;
    uVar3 = (uint)bVar1;
    param_2 = (uint *)((int)param_2 + 1);
    if (bVar1 == 0) goto LAB_10006f08;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_10006f08:
        *(byte *)puVar4 = (byte)uVar3;
        return param_1;
      }
      if ((char)(uVar3 >> 8) == '\0') {
        *(short *)puVar4 = (short)uVar3;
        return param_1;
      }
      if ((uVar3 & 0xff0000) == 0) {
        *(short *)puVar4 = (short)uVar3;
        *(byte *)((int)puVar4 + 2) = 0;
        return param_1;
      }
      if ((uVar3 & 0xff000000) == 0) {
        *puVar4 = uVar3;
        return param_1;
      }
    }
    *puVar4 = uVar3;
    puVar4 = puVar4 + 1;
  } while( true );
}



/* ================================================================
 * Function: FUN_10006e30
 * Address:  10006e30
 * ================================================================ */

uint * __cdecl FUN_10006e30(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_10006e4c;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_10006e7f;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x10006e9b;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_10006e4c:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x10006e9b;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x10006e9b;
    }
  }
LAB_10006e7f:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x10006e9b:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_10006f08:
            *(byte *)puVar5 = (byte)uVar4;
            return param_1;
          }
          if ((char)(uVar4 >> 8) == '\0') {
            *(short *)puVar5 = (short)uVar4;
            return param_1;
          }
          if ((uVar4 & 0xff0000) == 0) {
            *(short *)puVar5 = (short)uVar4;
            *(byte *)((int)puVar5 + 2) = 0;
            return param_1;
          }
          if ((uVar4 & 0xff000000) == 0) {
            *puVar5 = uVar4;
            return param_1;
          }
        }
        *puVar5 = uVar4;
        puVar5 = puVar5 + 1;
      } while( true );
    }
    bVar1 = (byte)*param_2;
    uVar4 = (uint)bVar1;
    param_2 = (uint *)((int)param_2 + 1);
    if (bVar1 == 0) goto LAB_10006f08;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}



/* ================================================================
 * Function: _strlen
 * Address:  10006f10
 * ================================================================ */

/* Library Function - Single Match
    _strlen
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

size_t __cdecl _strlen(char *_Str)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar2 = (uint *)_Str;
  do {
    if (((uint)puVar2 & 3) == 0) goto LAB_10006f30;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_10006f63:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_10006f30:
  do {
    do {
      puVar3 = puVar2;
      puVar2 = puVar3 + 1;
    } while (((*puVar3 ^ 0xffffffff ^ *puVar3 + 0x7efefeff) & 0x81010100) == 0);
    uVar1 = *puVar3;
    if ((char)uVar1 == '\0') {
      return (int)puVar3 - (int)_Str;
    }
    if ((char)(uVar1 >> 8) == '\0') {
      return (size_t)((int)puVar3 + (1 - (int)_Str));
    }
    if ((uVar1 & 0xff0000) == 0) {
      return (size_t)((int)puVar3 + (2 - (int)_Str));
    }
  } while ((uVar1 & 0xff000000) != 0);
  goto LAB_10006f63;
}



/* ================================================================
 * Function: FUN_10006f8b
 * Address:  10006f8b
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10006f8b(int param_1)

{
  BYTE *pBVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  UINT CodePage;
  UINT *pUVar5;
  BOOL BVar6;
  uint uVar7;
  uint uVar8;
  BYTE *pBVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  byte *pbVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  _cpinfo local_1c;
  uint local_8;
  
  FUN_10003d7d(0x19);
  CodePage = FUN_10007138(param_1);
  if (CodePage != DAT_1000a994) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_1000a678;
LAB_10006fc8:
      if (*pUVar5 != CodePage) goto code_r0x10006fcc;
      local_8 = 0;
      puVar15 = &DAT_1000aac0;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x1000a688);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_1000a670)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_1000aac0 + uVar8 + 1);
              *pbVar2 = *pbVar2 | bVar4;
              uVar8 = uVar8 + 1;
            } while (uVar8 <= bVar3);
          }
          pbVar11 = pbVar11 + 2;
          bVar3 = *pbVar11;
        }
        local_8 = local_8 + 1;
        pbVar13 = pbVar13 + 8;
      } while (local_8 < 4);
      _DAT_1000a9ac = 1;
      DAT_1000a994 = CodePage;
      DAT_1000abc4 = FUN_10007182(CodePage);
      DAT_1000a9a0 = *(undefined4 *)(iVar12 + 0x1000a67c);
      DAT_1000a9a4 = *(undefined4 *)(iVar12 + 0x1000a680);
      DAT_1000a9a8 = *(undefined4 *)(iVar12 + 0x1000a684);
      goto LAB_1000711c;
    }
    goto LAB_10007117;
  }
  goto LAB_10006fb2;
code_r0x10006fcc:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if (0x1000a767 < (int)pUVar5) goto code_r0x10006fd7;
  goto LAB_10006fc8;
code_r0x10006fd7:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_1000abc4 = 0;
    puVar15 = &DAT_1000aac0;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      _DAT_1000a9ac = 0;
      DAT_1000a994 = CodePage;
    }
    else {
      DAT_1000a994 = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_1000aac0 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_1000aac0 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_1000abc4 = FUN_10007182(CodePage);
      _DAT_1000a9ac = 1;
    }
    DAT_1000a9a0 = 0;
    DAT_1000a9a4 = 0;
    DAT_1000a9a8 = 0;
  }
  else {
    if (DAT_1000a958 == 0) {
      uVar14 = 0xffffffff;
      goto LAB_10007129;
    }
LAB_10007117:
    FUN_100071b5();
  }
LAB_1000711c:
  FUN_100071de();
LAB_10006fb2:
  uVar14 = 0;
LAB_10007129:
  FUN_10003dde(0x19);
  return uVar14;
}



/* ================================================================
 * Function: FUN_10007138
 * Address:  10007138
 * ================================================================ */

int __cdecl FUN_10007138(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_1000a958 = 1;
                    /* WARNING: Could not recover jumptable at 0x10007152. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_1000a958 = 1;
                    /* WARNING: Could not recover jumptable at 0x10007167. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_1000a984;
  }
  DAT_1000a958 = (uint)bVar2;
  return param_1;
}



/* ================================================================
 * Function: FUN_10007182
 * Address:  10007182
 * ================================================================ */

undefined4 __cdecl FUN_10007182(int param_1)

{
  if (param_1 == 0x3a4) {
    return 0x411;
  }
  if (param_1 == 0x3a8) {
    return 0x804;
  }
  if (param_1 == 0x3b5) {
    return 0x412;
  }
  if (param_1 != 0x3b6) {
    return 0;
  }
  return 0x404;
}



/* ================================================================
 * Function: FUN_100071b5
 * Address:  100071b5
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100071b5(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_1000aac0;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_1000a994 = 0;
  _DAT_1000a9ac = 0;
  DAT_1000abc4 = 0;
  DAT_1000a9a0 = 0;
  DAT_1000a9a4 = 0;
  DAT_1000a9a8 = 0;
  return;
}



/* ================================================================
 * Function: FUN_100071de
 * Address:  100071de
 * ================================================================ */

void FUN_100071de(void)

{
  byte *pbVar1;
  BOOL BVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  undefined1 uVar8;
  BYTE *pBVar9;
  CHAR *pCVar10;
  WORD local_518 [256];
  WCHAR local_318 [128];
  WCHAR local_218 [128];
  CHAR local_118 [256];
  _cpinfo local_18;
  
  BVar2 = GetCPInfo(DAT_1000a994,&local_18);
  if (BVar2 == 1) {
    uVar3 = 0;
    do {
      local_118[uVar3] = (CHAR)uVar3;
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
    local_118[0] = ' ';
    if (local_18.LeadByte[0] != 0) {
      pBVar9 = local_18.LeadByte + 1;
      do {
        uVar3 = (uint)local_18.LeadByte[0];
        if (uVar3 <= *pBVar9) {
          uVar5 = (*pBVar9 - uVar3) + 1;
          uVar6 = uVar5 >> 2;
          pCVar10 = local_118 + uVar3;
          while (uVar6 != 0) {
            uVar6 = uVar6 - 1;
            builtin_memcpy(pCVar10,"    ",4);
            pCVar10 = pCVar10 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pCVar10 = ' ';
            pCVar10 = pCVar10 + 1;
          }
        }
        local_18.LeadByte[0] = pBVar9[1];
        pBVar9 = pBVar9 + 2;
      } while (local_18.LeadByte[0] != 0);
    }
    FUN_100077dc(1,local_118,0x100,local_518,DAT_1000a994,DAT_1000abc4,0);
    FUN_1000758d(DAT_1000abc4,0x100,local_118,0x100,local_218,0x100,DAT_1000a994,0);
    FUN_1000758d(DAT_1000abc4,0x200,local_118,0x100,local_318,0x100,DAT_1000a994,0);
    uVar3 = 0;
    puVar7 = local_518;
    do {
      if ((*puVar7 & 1) == 0) {
        if ((*puVar7 & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_1000aac0 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          uVar8 = *(undefined1 *)((int)local_318 + uVar3);
          goto LAB_100072ea;
        }
        (&DAT_1000a9c0)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_1000aac0 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        uVar8 = *(undefined1 *)((int)local_218 + uVar3);
LAB_100072ea:
        (&DAT_1000a9c0)[uVar3] = uVar8;
      }
      uVar3 = uVar3 + 1;
      puVar7 = puVar7 + 1;
    } while (uVar3 < 0x100);
  }
  else {
    uVar3 = 0;
    do {
      if ((uVar3 < 0x41) || (0x5a < uVar3)) {
        if ((0x60 < uVar3) && (uVar3 < 0x7b)) {
          pbVar1 = (byte *)((int)&DAT_1000aac0 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar4 = (char)uVar3 + -0x20;
          goto LAB_10007334;
        }
        (&DAT_1000a9c0)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_1000aac0 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar4 = (char)uVar3 + ' ';
LAB_10007334:
        (&DAT_1000a9c0)[uVar3] = cVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}



/* ================================================================
 * Function: FUN_10007363
 * Address:  10007363
 * ================================================================ */

void FUN_10007363(void)

{
  if (DAT_1000abcc == 0) {
    FUN_10006f8b(-3);
    DAT_1000abcc = 1;
  }
  return;
}



/* ================================================================
 * Function: FUN_1000737f
 * Address:  1000737f
 * ================================================================ */

int __cdecl FUN_1000737f(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_1000a95c == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_1000a95c = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_1000a95c != (FARPROC)0x0) {
        DAT_1000a960 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_1000a964 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_100073ce;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_100073ce:
    if (DAT_1000a960 != (FARPROC)0x0) {
      iVar1 = (*DAT_1000a960)();
      if ((iVar1 != 0) && (DAT_1000a964 != (FARPROC)0x0)) {
        iVar1 = (*DAT_1000a964)(iVar1);
      }
    }
    iVar1 = (*DAT_1000a95c)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}



/* ================================================================
 * Function: _memset
 * Address:  10007410
 * ================================================================ */

/* Library Function - Single Match
    _memset
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

void * __cdecl _memset(void *_Dst,int _Val,size_t _Size)

{
  uint uVar1;
  uint uVar2;
  size_t sVar3;
  uint *puVar4;
  
  if (_Size == 0) {
    return _Dst;
  }
  uVar1 = _Val & 0xff;
  puVar4 = _Dst;
  if (3 < _Size) {
    uVar2 = -(int)_Dst & 3;
    sVar3 = _Size;
    if (uVar2 != 0) {
      sVar3 = _Size - uVar2;
      do {
        *(undefined1 *)puVar4 = (undefined1)_Val;
        puVar4 = (uint *)((int)puVar4 + 1);
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    uVar1 = uVar1 * 0x1010101;
    _Size = sVar3 & 3;
    uVar2 = sVar3 >> 2;
    if (uVar2 != 0) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
      }
      if (_Size == 0) {
        return _Dst;
      }
    }
  }
  do {
    *(char *)puVar4 = (char)uVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
    _Size = _Size - 1;
  } while (_Size != 0);
  return _Dst;
}



/* ================================================================
 * Function: FUN_10007468
 * Address:  10007468
 * ================================================================ */

int __cdecl FUN_10007468(uint param_1,int param_2)

{
  DWORD DVar1;
  DWORD DVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  DWORD *pDVar6;
  HANDLE hFile;
  BOOL BVar7;
  int iVar8;
  uint uVar9;
  char local_1008 [4064];
  undefined4 uStackY_28;
  
  FUN_10007990();
  iVar8 = 0;
  DVar1 = FUN_1000563b(param_1,0,1);
  if ((DVar1 == 0xffffffff) || (DVar2 = FUN_1000563b(param_1,0,2), DVar2 == 0xffffffff)) {
    iVar8 = -1;
  }
  else {
    uVar9 = param_2 - DVar2;
    if ((int)uVar9 < 1) {
      if ((int)uVar9 < 0) {
        FUN_1000563b(param_1,param_2,0);
        hFile = (HANDLE)FUN_10006805(param_1);
        BVar7 = SetEndOfFile(hFile);
        iVar8 = (BVar7 != 0) - 1;
        if (iVar8 == -1) {
          pDVar6 = FUN_100053b4();
          *pDVar6 = 0xd;
          DVar2 = GetLastError();
          pDVar6 = FUN_100053bd();
          *pDVar6 = DVar2;
        }
      }
    }
    else {
      _memset(local_1008,0,0x1000);
      uStackY_28 = 0x100074d5;
      iVar3 = FUN_10007925(param_1,0x8000);
      do {
        uVar4 = 0x1000;
        if ((int)uVar9 < 0x1000) {
          uVar4 = uVar9;
        }
        iVar5 = FUN_100069c0(param_1,local_1008,uVar4);
        if (iVar5 == -1) {
          pDVar6 = FUN_100053bd();
          if (*pDVar6 == 5) {
            pDVar6 = FUN_100053b4();
            *pDVar6 = 0xd;
          }
          iVar8 = -1;
          break;
        }
        uVar9 = uVar9 - iVar5;
      } while (0 < (int)uVar9);
      FUN_10007925(param_1,iVar3);
    }
    FUN_1000563b(param_1,DVar1,0);
  }
  return iVar8;
}



/* ================================================================
 * Function: FUN_1000758d
 * Address:  1000758d
 * ================================================================ */

int __cdecl
FUN_1000758d(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_100084b8;
  puStack_10 = &LAB_10007ab8;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_1000a98c == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_1000a98c = 2;
    }
    else {
      DAT_1000a98c = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_100077b1(param_3,param_4);
  }
  if (DAT_1000a98c == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
    ExceptionList = local_14;
    return iVar1;
  }
  if (DAT_1000a98c == 1) {
    if (param_7 == 0) {
      param_7 = DAT_1000a984;
    }
    iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar1 != 0) {
      local_8 = 0;
      FUN_10007990();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x3c) &&
         (iVar2 = MultiByteToWideChar(param_7,1,param_3,param_4,(LPWSTR)&stack0xffffffc4,iVar1),
         iVar2 != 0)) {
        iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          if ((param_2 & 0x400) == 0) {
            local_8 = 1;
            FUN_10007990();
            local_8 = 0xffffffff;
            if (&stack0x00000000 == (undefined1 *)0x3c) {
              ExceptionList = local_14;
              return 0;
            }
            iVar1 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,
                                 (LPWSTR)&stack0xffffffc4,iVar2);
            if (iVar1 == 0) {
              ExceptionList = local_14;
              return 0;
            }
            if (param_6 == 0) {
              param_6 = 0;
              param_5 = (LPWSTR)0x0;
            }
            iVar2 = WideCharToMultiByte(param_7,0x220,(LPCWSTR)&stack0xffffffc4,iVar2,(LPSTR)param_5
                                        ,param_6,(LPCSTR)0x0,(LPBOOL)0x0);
            iVar1 = iVar2;
          }
          else {
            if (param_6 == 0) {
              ExceptionList = local_14;
              return iVar2;
            }
            if (param_6 < iVar2) {
              ExceptionList = local_14;
              return 0;
            }
            iVar1 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,param_5,param_6);
          }
          if (iVar1 != 0) {
            ExceptionList = local_14;
            return iVar2;
          }
        }
      }
    }
  }
  ExceptionList = local_14;
  return 0;
}



/* ================================================================
 * Function: FUN_100077b1
 * Address:  100077b1
 * ================================================================ */

int __cdecl FUN_100077b1(char *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = param_2;
  for (pcVar1 = param_1; (iVar2 != 0 && (iVar2 = iVar2 + -1, *pcVar1 != '\0')); pcVar1 = pcVar1 + 1)
  {
  }
  if (*pcVar1 != '\0') {
    return param_2;
  }
  return (int)pcVar1 - (int)param_1;
}



/* ================================================================
 * Function: FUN_100077dc
 * Address:  100077dc
 * ================================================================ */

BOOL __cdecl
FUN_100077dc(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
            int param_7)

{
  undefined1 *puVar1;
  BOOL BVar2;
  int iVar3;
  WORD local_20 [2];
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_100084d0;
  puStack_10 = &LAB_10007ab8;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc8;
  iVar3 = DAT_1000a990;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc8;
  if (DAT_1000a990 == 0) {
    ExceptionList = &local_14;
    BVar2 = GetStringTypeW(1,L"",1,local_20);
    iVar3 = 1;
    puVar1 = local_1c;
    if (BVar2 == 0) {
      BVar2 = GetStringTypeA(0,1,"",1,local_20);
      if (BVar2 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      iVar3 = 2;
      puVar1 = local_1c;
    }
  }
  local_1c = puVar1;
  DAT_1000a990 = iVar3;
  if (DAT_1000a990 != 2) {
    if (DAT_1000a990 == 1) {
      if (param_5 == 0) {
        param_5 = DAT_1000a984;
      }
      iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,
                                  (LPWSTR)0x0,0);
      if (iVar3 != 0) {
        local_8 = 0;
        FUN_10007990();
        local_1c = &stack0xffffffc8;
        _memset(&stack0xffffffc8,0,iVar3 * 2);
        local_8 = 0xffffffff;
        if ((&stack0x00000000 != (undefined1 *)0x38) &&
           (iVar3 = MultiByteToWideChar(param_5,1,param_2,param_3,(LPWSTR)&stack0xffffffc8,iVar3),
           iVar3 != 0)) {
          BVar2 = GetStringTypeW(param_1,(LPCWSTR)&stack0xffffffc8,iVar3,param_4);
          ExceptionList = local_14;
          return BVar2;
        }
      }
    }
    ExceptionList = local_14;
    return 0;
  }
  if (param_6 == 0) {
    param_6 = DAT_1000a974;
  }
  BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return BVar2;
}



/* ================================================================
 * Function: FUN_10007925
 * Address:  10007925
 * ================================================================ */

int __cdecl FUN_10007925(uint param_1,int param_2)

{
  byte bVar1;
  DWORD *pDVar2;
  byte bVar3;
  
  bVar1 = *(byte *)((&DAT_1000abe0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24);
  if (param_2 == 0x8000) {
    bVar3 = bVar1 & 0x7f;
  }
  else {
    if (param_2 != 0x4000) {
      pDVar2 = FUN_100053b4();
      *pDVar2 = 0x16;
      return -1;
    }
    bVar3 = bVar1 | 0x80;
  }
  *(byte *)((&DAT_1000abe0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = bVar3;
  return (-(uint)((bVar1 & 0x80) != 0) & 0xffffc000) + 0x8000;
}



/* ================================================================
 * Function: FUN_10007990
 * Address:  10007990
 * ================================================================ */

/* WARNING: Unable to track spacebase fully for stack */

void FUN_10007990(void)

{
  uint in_EAX;
  undefined1 *puVar1;
  undefined4 unaff_retaddr;
  
  puVar1 = &stack0x00000004;
  for (; 0xfff < in_EAX; in_EAX = in_EAX - 0x1000) {
    puVar1 = puVar1 + -0x1000;
  }
  *(undefined4 *)(puVar1 + (-4 - in_EAX)) = unaff_retaddr;
  return;
}



/* ================================================================
 * Function: __global_unwind2
 * Address:  100079c0
 * ================================================================ */

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x100079d8,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



/* ================================================================
 * Function: __local_unwind2
 * Address:  10007a02
 * ================================================================ */

/* Library Function - Single Match
    __local_unwind2
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release, Visual Studio 2003 Debug, Visual
   Studio 2003 Release */

void __cdecl __local_unwind2(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *pvStack_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  int iStack_10;
  
  iStack_10 = param_1;
  puStack_18 = &LAB_100079e0;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_10007a96();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}



/* ================================================================
 * Function: FUN_10007a96
 * Address:  10007a96
 * ================================================================ */

void FUN_10007a96(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_1000a778 = *(undefined4 *)(unaff_EBP + 8);
  DAT_1000a774 = in_EAX;
  DAT_1000a77c = unaff_EBP;
  return;
}



/* ================================================================
 * Function: FUN_10007b75
 * Address:  10007b75
 * ================================================================ */

void FUN_10007b75(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}



/* ================================================================
 * Function: RtlUnwind
 * Address:  10007b90
 * ================================================================ */

void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue)

{
                    /* WARNING: Could not recover jumptable at 0x10007b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RtlUnwind(TargetFrame,TargetIp,ExceptionRecord,ReturnValue);
  return;
}



