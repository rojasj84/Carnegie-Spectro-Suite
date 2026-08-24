/* ================================================================
 * Function: FUN_10001000
 * Address:  10001000
 * ================================================================ */

void * FUN_10001000(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = _malloc(param_1);
  return pvVar1;
}



/* ================================================================
 * Function: FUN_1000101c
 * Address:  1000101c
 * ================================================================ */

void FUN_1000101c(undefined *param_1)

{
  FUN_10006f18(param_1);
  return;
}



/* ================================================================
 * Function: FUN_1000102f
 * Address:  1000102f
 * ================================================================ */

void * FUN_1000102f(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = _malloc(param_1);
  return pvVar1;
}



/* ================================================================
 * Function: FUN_1000104b
 * Address:  1000104b
 * ================================================================ */

void FUN_1000104b(undefined *param_1)

{
  FUN_10006f18(param_1);
  return;
}



/* ================================================================
 * Function: FUN_10001060
 * Address:  10001060
 * ================================================================ */

void FUN_10001060(void)

{
  return;
}



/* ================================================================
 * Function: FUN_10001067
 * Address:  10001067
 * ================================================================ */

undefined4 FUN_10001067(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_1000107b
 * Address:  1000107b
 * ================================================================ */

undefined4 FUN_1000107b(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_1000108f
 * Address:  1000108f
 * ================================================================ */

undefined4 FUN_1000108f(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_100010a3
 * Address:  100010a3
 * ================================================================ */

undefined4 FUN_100010a3(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_100010b7
 * Address:  100010b7
 * ================================================================ */

bool FUN_100010b7(int param_1,undefined4 param_2)

{
  bool bVar1;
  
  *(undefined4 *)(param_1 + 0x18) = param_2;
  bVar1 = *(int *)(param_1 + 0x18) != 0;
  if (bVar1) {
    PIPP_GetLongParam(*(undefined4 *)(param_1 + 0x18),0x4f,param_1 + 0x14);
  }
  return bVar1;
}



/* ================================================================
 * Function: FUN_100010fa
 * Address:  100010fa
 * ================================================================ */

/* WARNING: Type propagation algorithm not settling */

BOOL FUN_100010fa(int param_1,undefined4 param_2,int param_3)

{
  BOOL local_28;
  int local_24 [3];
  int local_18;
  DWORD local_14;
  undefined1 local_10 [12];
  
  local_28 = 1;
  switch(param_2) {
  case 4:
    *(int *)(param_1 + 0x2c) = param_3;
    break;
  case 5:
    *(int *)(param_1 + 0x30) = param_3;
    break;
  case 6:
    *(int *)(param_1 + 0x28) = param_3;
    break;
  default:
    local_28 = 0;
    break;
  case 8:
    *(int *)(param_1 + 4) = param_3;
    break;
  case 9:
    *(int *)(param_1 + 0x34) = param_3;
    break;
  case 0xb:
    *(int *)(param_1 + 0x6c) = param_3 + -1;
    break;
  case 0xe:
    *(int *)(param_1 + 0x58) = param_3;
    break;
  case 0xf:
    *(int *)(param_1 + 0x60) = param_3;
    break;
  case 0x10:
    *(int *)(param_1 + 100) = param_3;
    break;
  case 0x11:
    (**(code **)(param_1 + 0x1120))(param_1,param_3);
    break;
  case 0x12:
    (**(code **)(param_1 + 0x111c))(param_1,param_3);
    break;
  case 0x13:
    *(int *)(param_1 + 0x3c) = param_3;
    break;
  case 0x14:
    *(int *)(param_1 + 0x40) = param_3;
    break;
  case 0x15:
    *(int *)(param_1 + 0x4c) = param_3;
    break;
  case 0x16:
    *(int *)(param_1 + 0x50) = param_3;
    break;
  case 0x1a:
    *(int *)(param_1 + 0x5c) = param_3;
    break;
  case 0x1b:
    *(int *)(param_1 + 0x8c) = param_3;
    break;
  case 0x1c:
    if (*(int *)(param_1 + 0x1c) == param_3) {
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
    }
    else {
      *(int *)(param_1 + 0x90) = param_3;
    }
    break;
  case 0x1d:
    if (*(int *)(param_1 + 0x8c) != 0) {
      *(int *)(param_1 + 0x94) = param_3;
    }
    break;
  case 0x1e:
    *(int *)(param_1 + 0x98) = param_3;
    local_28 = (**(code **)(param_1 + 0x1148))(param_1,param_2,param_3);
    break;
  case 0x1f:
    *(int *)(param_1 + 0xa4) = param_3;
    local_28 = 1;
    break;
  case 0x20:
    if (*(int *)(param_1 + 0x80) == 4) {
      local_18 = param_3;
      local_24[1] = 1;
      if (*(int *)(param_1 + 0x18) != 0) {
        PIPP_GetLongParam(*(undefined4 *)(param_1 + 0x18),0x4f,param_1 + 0x14);
      }
      local_28 = DeviceIoControl(*(HANDLE *)(param_1 + 0x14),0xc350a5c8,local_24 + 1,0xc,local_10,
                                 0xc,&local_14,(LPOVERLAPPED)0x0);
    }
    break;
  case 0x21:
    if (*(int *)(param_1 + 0x80) == 4) {
      local_18 = param_3;
      local_24[1] = 1;
      if (*(int *)(param_1 + 0x18) != 0) {
        PIPP_GetLongParam(*(undefined4 *)(param_1 + 0x18),0x4f,param_1 + 0x14);
      }
      local_28 = DeviceIoControl(*(HANDLE *)(param_1 + 0x14),0xc350a5cc,local_24 + 1,0xc,local_10,
                                 0xc,&local_14,(LPOVERLAPPED)0x0);
    }
    break;
  case 0x22:
    if (*(int *)(param_1 + 0x80) == 4) {
      local_24[0] = param_3;
      if (*(int *)(param_1 + 0x18) != 0) {
        PIPP_GetLongParam(*(undefined4 *)(param_1 + 0x18),0x4f,param_1 + 0x14);
      }
      local_28 = DeviceIoControl(*(HANDLE *)(param_1 + 0x14),0xc350a5d0,local_24,4,(LPVOID)0x0,0,
                                 &local_14,(LPOVERLAPPED)0x0);
    }
    break;
  case 0x23:
    *(int *)(param_1 + 0x44) = param_3;
    break;
  case 0x24:
    *(int *)(param_1 + 0x48) = param_3;
  }
  return local_28;
}



/* ================================================================
 * Function: FUN_10001491
 * Address:  10001491
 * ================================================================ */

uint FUN_10001491(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  bool bVar2;
  int local_294;
  undefined1 local_290 [4];
  int local_28c;
  uint local_288;
  undefined1 local_284 [312];
  undefined4 local_14c;
  int local_148 [2];
  undefined1 local_140 [4];
  int local_13c;
  int local_130;
  int local_12c;
  
  local_288 = 1;
  local_148[1] = 0;
  switch(param_2) {
  case 4:
    *param_3 = *(int *)(param_1 + 0x2c) * *(int *)(param_1 + 0x28);
    break;
  case 5:
    *param_3 = *(int *)(param_1 + 0x30);
    break;
  case 6:
    *param_3 = *(int *)(param_1 + 0x28);
    break;
  default:
    local_288 = 0;
    break;
  case 9:
    *param_3 = *(int *)(param_1 + 0x34);
    break;
  case 10:
    if (*(int *)(param_1 + 0x1c) == 0) {
      if (*(int *)(param_1 + 0x80) == 1) {
        local_14c = *(undefined4 *)(param_1 + 0x6c);
        if (*(int *)(param_1 + 0x14) != -1) {
          local_288 = DeviceIoControl(*(HANDLE *)(param_1 + 0x14),0x9005,local_284,0x13c,local_140,
                                      0x13c,(LPDWORD)(local_148 + 1),(LPOVERLAPPED)0x0);
        }
        if ((((local_288 != 0) && (local_130 != 0)) && (local_12c != 0)) && (local_12c != -1)) {
          *(int *)(param_1 + 0x20) = local_12c;
          *(int *)(param_1 + 0x1c) = local_130;
          *(int *)(param_1 + 0x24) = local_13c << 0xc;
          *param_3 = *(int *)(param_1 + 0x1c);
          local_288 = 1;
        }
      }
      else {
        *param_3 = *(int *)(param_1 + 0x1c);
      }
    }
    else {
      *param_3 = *(int *)(param_1 + 0x1c);
    }
    break;
  case 0xb:
    *param_3 = *(int *)(param_1 + 0x6c);
    break;
  case 0xc:
    *param_3 = *(int *)(param_1 + 0x68);
    break;
  case 0xd:
    bVar2 = *(int *)(param_1 + 0x24) != 0;
    if (bVar2) {
      *param_3 = *(int *)(param_1 + 0x24);
    }
    local_288 = (uint)bVar2;
    break;
  case 0xe:
    *param_3 = *(int *)(param_1 + 0x58);
    break;
  case 0xf:
    *param_3 = *(int *)(param_1 + 0x60);
    break;
  case 0x10:
    *param_3 = *(int *)(param_1 + 100);
    break;
  case 0x11:
    iVar1 = (**(code **)(param_1 + 0x1128))(param_1);
    *param_3 = iVar1;
    break;
  case 0x12:
    iVar1 = (**(code **)(param_1 + 0x1124))(param_1);
    *param_3 = iVar1;
    break;
  case 0x13:
    *param_3 = *(int *)(param_1 + 0x3c);
    break;
  case 0x14:
    *param_3 = *(int *)(param_1 + 0x40);
    break;
  case 0x17:
    *param_3 = *(int *)(param_1 + 0x24);
    break;
  case 0x18:
    if (*(int *)(param_1 + 0x80) == 1) {
      if (*(int *)(param_1 + 0x14) != -1) {
        local_288 = DeviceIoControl(*(HANDLE *)(param_1 + 0x14),0xb008,local_290,4,&local_28c,4,
                                    (LPDWORD)(local_148 + 1),(LPOVERLAPPED)0x0);
      }
      if (local_288 == 0) {
        *param_3 = 0;
      }
      else {
        *param_3 = local_28c;
      }
    }
    else {
      local_294 = 0;
      if (*(int *)(param_1 + 0x14) != -1) {
        local_288 = DeviceIoControl(*(HANDLE *)(param_1 + 0x14),0xc3506544,(LPVOID)0x0,0,&local_294,
                                    4,(LPDWORD)(local_148 + 1),(LPOVERLAPPED)0x0);
      }
      if (local_288 == 0) {
        *param_3 = 0;
      }
      else {
        *param_3 = local_294;
      }
    }
    break;
  case 0x1a:
    *param_3 = *(int *)(param_1 + 0x5c);
    break;
  case 0x1b:
    *param_3 = *(int *)(param_1 + 0x8c);
    break;
  case 0x1c:
    *param_3 = *(int *)(param_1 + 0x90);
    break;
  case 0x1d:
    *param_3 = *(int *)(param_1 + 0x94);
    break;
  case 0x1e:
    local_288 = (**(code **)(param_1 + 0x114c))(param_1,param_2,local_148);
    if (local_288 != 0) {
      *param_3 = local_148[0];
    }
    break;
  case 0x1f:
    local_288 = 1;
    *param_3 = *(int *)(param_1 + 0xa4);
    break;
  case 0x23:
    *param_3 = *(int *)(param_1 + 0x44);
    break;
  case 0x24:
    *param_3 = *(int *)(param_1 + 0x48);
  }
  return local_288;
}



/* ================================================================
 * Function: FUN_100018f9
 * Address:  100018f9
 * ================================================================ */

undefined4 FUN_100018f9(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}



/* ================================================================
 * Function: FUN_1000190e
 * Address:  1000190e
 * ================================================================ */

undefined4 FUN_1000190e(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_1000191a
 * Address:  1000191a
 * ================================================================ */

undefined4 FUN_1000191a(void)

{
  return 0;
}



/* ================================================================
 * Function: FUN_10001923
 * Address:  10001923
 * ================================================================ */

undefined4 FUN_10001923(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* ================================================================
 * Function: FUN_10001930
 * Address:  10001930
 * ================================================================ */

undefined4 FUN_10001930(void)

{
  return 0;
}



/* ================================================================
 * Function: FUN_10001939
 * Address:  10001939
 * ================================================================ */

undefined4 FUN_10001939(void)

{
  return 0;
}



/* ================================================================
 * Function: FUN_10001942
 * Address:  10001942
 * ================================================================ */

undefined4 FUN_10001942(void)

{
  return 0;
}



/* ================================================================
 * Function: FUN_1000194b
 * Address:  1000194b
 * ================================================================ */

void FUN_1000194b(void)

{
  return;
}



/* ================================================================
 * Function: FUN_10001952
 * Address:  10001952
 * ================================================================ */

HANDLE FUN_10001952(int param_1,undefined4 param_2,BOOL param_3,BOOL param_4,LPCSTR param_5,
                   undefined4 param_6)

{
  HANDLE local_8;
  
  local_8 = (HANDLE)0x0;
  switch(*(undefined4 *)(param_1 + 0x80)) {
  case 1:
    local_8 = (HANDLE)FUN_100034a0(*(HANDLE *)(param_1 + 0x14),param_3,param_4,param_5,param_6);
    break;
  case 2:
  case 4:
    local_8 = FUN_10003641(*(HANDLE *)(param_1 + 0x14),param_3,param_4,param_5,param_6);
    break;
  case 3:
    local_8 = FUN_100035e1(*(HANDLE *)(param_1 + 0x14),param_3,param_4,param_5,param_6);
  }
  *(HANDLE *)(param_1 + 0x68) = local_8;
  return local_8;
}



/* ================================================================
 * Function: FUN_10001a07
 * Address:  10001a07
 * ================================================================ */

void FUN_10001a07(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x84) = param_2;
  return;
}



/* ================================================================
 * Function: FUN_10001a1a
 * Address:  10001a1a
 * ================================================================ */

void FUN_10001a1a(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x88) = param_2;
  return;
}



/* ================================================================
 * Function: FUN_10001a2d
 * Address:  10001a2d
 * ================================================================ */

undefined4 FUN_10001a2d(int param_1)

{
  return *(undefined4 *)(param_1 + 0x84);
}



/* ================================================================
 * Function: FUN_10001a3d
 * Address:  10001a3d
 * ================================================================ */

undefined4 FUN_10001a3d(int param_1)

{
  return *(undefined4 *)(param_1 + 0x88);
}



/* ================================================================
 * Function: FUN_10001a4d
 * Address:  10001a4d
 * ================================================================ */

undefined4 FUN_10001a4d(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_10001a59
 * Address:  10001a59
 * ================================================================ */

BOOL FUN_10001a59(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  DWORD local_2c;
  BOOL local_28;
  undefined1 local_24 [32];
  
  local_28 = 0;
  if (*(int *)(param_1 + 0x80) == 1) {
    local_4c = *(undefined4 *)(param_1 + 0x6c);
    local_48 = param_2;
    local_44 = param_3;
    if (*(int *)(param_1 + 0x14) != -1) {
      local_28 = DeviceIoControl(*(HANDLE *)(param_1 + 0x14),0x9008,&local_4c,0x20,local_24,0x20,
                                 &local_2c,(LPOVERLAPPED)0x0);
    }
  }
  return local_28;
}



/* ================================================================
 * Function: FUN_10001ac0
 * Address:  10001ac0
 * ================================================================ */

int FUN_10001ac0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 local_4c;
  undefined4 local_48;
  DWORD local_2c;
  int local_28;
  undefined1 local_24 [8];
  undefined4 local_1c;
  
  local_28 = 0;
  if (*(int *)(param_1 + 0x80) == 1) {
    local_4c = *(undefined4 *)(param_1 + 0x6c);
    local_48 = param_2;
    if (*(int *)(param_1 + 0x14) != -1) {
      local_28 = DeviceIoControl(*(HANDLE *)(param_1 + 0x14),0x9009,&local_4c,0x20,local_24,0x20,
                                 &local_2c,(LPOVERLAPPED)0x0);
    }
  }
  if (local_28 != 0) {
    *param_3 = local_1c;
  }
  return local_28;
}



/* ================================================================
 * Function: FUN_10001b30
 * Address:  10001b30
 * ================================================================ */

bool FUN_10001b30(int param_1)

{
  void *pvVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = *(uint *)(param_1 + 0xa8) & 0x800000ff;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xffffff00) + 1;
  }
  *(uint *)(param_1 + 0xa8) = uVar2;
  if (*(int *)(param_1 + 0xa0) != 0) {
    FUN_1000104b(*(undefined **)(param_1 + 0xa0));
  }
  pvVar1 = FUN_10001000(*(int *)(param_1 + 0x2c) * *(int *)(param_1 + 0x28));
  *(void **)(param_1 + 0xa0) = pvVar1;
  bVar3 = *(int *)(param_1 + 0xa0) != 0;
  if (bVar3) {
    *(undefined4 *)(param_1 + 0xac) = 1;
  }
  return bVar3;
}



/* ================================================================
 * Function: FUN_10001bbd
 * Address:  10001bbd
 * ================================================================ */

undefined4 FUN_10001bbd(int param_1)

{
  if (*(int *)(param_1 + 0xa0) != 0) {
    FUN_1000104b(*(undefined **)(param_1 + 0xa0));
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  *(undefined4 *)(param_1 + 0xac) = 0;
  return 0;
}



/* ================================================================
 * Function: FUN_10001c06
 * Address:  10001c06
 * ================================================================ */

undefined4 FUN_10001c06(int param_1)

{
  if ((*(int *)(param_1 + 0xa4) < 1) || (5 < *(int *)(param_1 + 0xa4))) {
    *(undefined4 *)(param_1 + 0xa4) = 1;
  }
  if ((*(int *)(param_1 + 0x28) != 1) && (*(int *)(param_1 + 0x28) != 2)) {
    *(undefined4 *)(param_1 + 0x28) = 2;
  }
  return 1;
}



/* ================================================================
 * Function: FUN_10001c5b
 * Address:  10001c5b
 * ================================================================ */

uint FUN_10001c5b(int param_1)

{
  undefined4 local_8;
  
  local_8 = 0;
  if (*(int *)(param_1 + 0xac) != 0) {
    local_8 = *(uint *)(param_1 + 0xc) | 0x10;
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_10001c87
 * Address:  10001c87
 * ================================================================ */

undefined4 FUN_10001c87(int param_1,undefined4 *param_2)

{
  undefined4 local_c;
  
  FUN_10001d2b(param_1,*(int *)(param_1 + 0xa0));
  if (*(int *)(param_1 + 0x8c) == 0) {
    *param_2 = *(undefined4 *)(param_1 + 0xa0);
  }
  else {
    local_c = *(int *)(param_1 + 0x2c) * *(int *)(param_1 + 0x28);
    if (*(uint *)(param_1 + 0x94) < local_c) {
      local_c = *(uint *)(param_1 + 0x94);
    }
    FUN_10007010(*(undefined4 **)(param_1 + 0x90),*(undefined4 **)(param_1 + 0xa0),local_c);
    *param_2 = *(undefined4 *)(param_1 + 0x90);
  }
  return 1;
}



/* ================================================================
 * Function: FUN_10001d2b
 * Address:  10001d2b
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001d2b(int param_1,int param_2)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  void *pvVar10;
  longlong lVar11;
  int local_18;
  int local_10;
  
  iVar2 = *(int *)(param_1 + 0x40);
  iVar3 = *(int *)(param_1 + 0x3c);
  iVar4 = *(int *)(param_1 + 0x50) / 2;
  iVar5 = *(int *)(param_1 + 0x4c) / 2;
  if (*(int *)(param_1 + 0xa4) == 5) {
    __ftol();
    for (local_10 = 0; local_10 < iVar2; local_10 = local_10 + 1) {
      for (local_18 = 0; local_18 < iVar3; local_18 = local_18 + 1) {
        _rand();
        lVar11 = __ftol();
        *(short *)(param_2 + local_10 * iVar3 * 2 + local_18 * 2) = (short)lVar11;
      }
    }
    uVar6 = *(int *)(param_1 + 0xa8) + 3U & 0x800000ff;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xffffff00) + 1;
    }
    *(uint *)(param_1 + 0xa8) = uVar6;
  }
  else {
    if (*(int *)(param_1 + 0x28) == 1) {
      switch(*(undefined4 *)(param_1 + 0xa4)) {
      case 1:
        for (local_10 = 0; local_10 < iVar2; local_10 = local_10 + 1) {
          iVar9 = *(int *)(param_1 + 0x48);
          for (local_18 = 0; local_18 < iVar3; local_18 = local_18 + 1) {
            iVar8 = *(int *)(param_1 + 0x44);
            iVar7 = FUN_1000740a(iVar4 - (local_10 + iVar9));
            iVar8 = FUN_1000740a(iVar5 - (local_18 + iVar8));
            uVar6 = (iVar7 * iVar8 >> 1) + *(int *)(param_1 + 0xa8) * 2 & 0x800000ff;
            if ((int)uVar6 < 0) {
              uVar6 = (uVar6 - 1 | 0xffffff00) + 1;
            }
            *(char *)(param_2 + local_10 * iVar3 + local_18) = -1 - (&DAT_1000f150)[(short)uVar6];
          }
        }
        break;
      case 2:
        for (local_10 = 0; local_10 < iVar2; local_10 = local_10 + 1) {
          iVar9 = (*(int *)(param_1 + 0x48) + local_10) - iVar4;
          for (local_18 = 0; local_18 < iVar3; local_18 = local_18 + 1) {
            iVar8 = (*(int *)(param_1 + 0x44) + local_18) - iVar5;
            uVar6 = (iVar9 * iVar9 + iVar8 * iVar8 >> 7) + *(int *)(param_1 + 0xa8) & 0x800000ff;
            if ((int)uVar6 < 0) {
              uVar6 = (uVar6 - 1 | 0xffffff00) + 1;
            }
            *(char *)(param_2 + local_10 * iVar3 + local_18) = -1 - (&DAT_1000f150)[(short)uVar6];
          }
        }
        break;
      case 3:
        for (local_10 = 0; local_10 < iVar2; local_10 = local_10 + 1) {
          iVar9 = *(int *)(param_1 + 0x48);
          for (local_18 = 0; local_18 < iVar3; local_18 = local_18 + 1) {
            iVar8 = *(int *)(param_1 + 0x44);
            iVar7 = FUN_1000740a((iVar9 + local_10) - iVar4);
            iVar8 = FUN_1000740a((iVar8 + local_18) - iVar5);
            uVar6 = iVar7 + iVar8 + *(int *)(param_1 + 0xa8) & 0x800000ff;
            if ((int)uVar6 < 0) {
              uVar6 = (uVar6 - 1 | 0xffffff00) + 1;
            }
            *(char *)(param_2 + local_10 * iVar3 + local_18) = -1 - (&DAT_1000f150)[(short)uVar6];
          }
        }
        break;
      case 4:
        __ftol();
        for (local_10 = 0; local_10 < iVar2; local_10 = local_10 + 1) {
          iVar9 = (*(int *)(param_1 + 0x48) + local_10) - iVar4;
          for (local_18 = 0; local_18 < iVar3; local_18 = local_18 + 1) {
            iVar8 = (*(int *)(param_1 + 0x44) + local_18) - iVar5;
            pvVar10 = (void *)(iVar9 * iVar9 + iVar8 * iVar8);
            dVar1 = (double)((float)(int)pvVar10 / (float)(iVar4 * iVar4 + iVar5 * iVar5));
            FUN_10007364(pvVar10,SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
            __ftol();
            _rand();
            lVar11 = __ftol();
            *(char *)(param_2 + local_10 * iVar3 + local_18) = (char)lVar11;
          }
        }
      }
    }
    else if (*(int *)(param_1 + 0x28) == 2) {
      switch(*(undefined4 *)(param_1 + 0xa4)) {
      case 1:
        for (local_10 = 0; local_10 < iVar2; local_10 = local_10 + 1) {
          iVar4 = *(int *)(param_1 + 0x48);
          for (local_18 = 0; local_18 < iVar3; local_18 = local_18 + 1) {
            uVar6 = *(int *)(param_1 + 0xa8) * 2 +
                    (local_10 + iVar4) * (local_18 + *(int *)(param_1 + 0x44)) * 2 & 0x800000ff;
            if ((int)uVar6 < 0) {
              uVar6 = (uVar6 - 1 | 0xffffff00) + 1;
            }
            *(ushort *)(param_2 + local_10 * iVar3 * 2 + local_18 * 2) =
                 (ushort)(byte)(&DAT_1000f150)[(short)uVar6] * -0x10 + 0xfff;
          }
        }
        break;
      case 2:
        for (local_10 = 0; local_10 < iVar2; local_10 = local_10 + 1) {
          iVar9 = (*(int *)(param_1 + 0x48) + local_10) - iVar4;
          for (local_18 = 0; local_18 < iVar3; local_18 = local_18 + 1) {
            iVar8 = (*(int *)(param_1 + 0x44) + local_18) - iVar5;
            uVar6 = (iVar9 * iVar9 + iVar8 * iVar8 >> 7) + *(int *)(param_1 + 0xa8) & 0x800000ff;
            if ((int)uVar6 < 0) {
              uVar6 = (uVar6 - 1 | 0xffffff00) + 1;
            }
            *(ushort *)(param_2 + local_10 * iVar3 * 2 + local_18 * 2) =
                 (ushort)(byte)(&DAT_1000f150)[(short)uVar6] * -0x10 + 0xfff;
          }
        }
        break;
      case 3:
        for (local_10 = 0; local_10 < iVar2; local_10 = local_10 + 1) {
          iVar9 = *(int *)(param_1 + 0x48);
          for (local_18 = 0; local_18 < iVar3; local_18 = local_18 + 1) {
            iVar8 = *(int *)(param_1 + 0x44);
            iVar7 = FUN_1000740a((iVar9 + local_10) - iVar4);
            iVar8 = FUN_1000740a((iVar8 + local_18) - iVar5);
            uVar6 = iVar7 + iVar8 + *(int *)(param_1 + 0xa8) & 0x800000ff;
            if ((int)uVar6 < 0) {
              uVar6 = (uVar6 - 1 | 0xffffff00) + 1;
            }
            *(ushort *)(param_2 + local_10 * iVar3 * 2 + local_18 * 2) =
                 (ushort)(byte)(&DAT_1000f150)[(short)uVar6] * -0x10 + 0xfff;
          }
        }
        break;
      case 4:
        __ftol();
        for (local_10 = 0; local_10 < iVar2; local_10 = local_10 + 1) {
          iVar9 = (*(int *)(param_1 + 0x48) + local_10) - iVar4;
          for (local_18 = 0; local_18 < iVar3; local_18 = local_18 + 1) {
            pvVar10 = (void *)((*(int *)(param_1 + 0x44) + local_18) - iVar5);
            dVar1 = (double)((float)(iVar9 * iVar9 + (int)pvVar10 * (int)pvVar10) /
                            (float)(iVar4 * iVar4 + iVar5 * iVar5));
            FUN_10007364(pvVar10,SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
            __ftol();
            _rand();
            lVar11 = __ftol();
            *(short *)(param_2 + local_10 * iVar3 * 2 + local_18 * 2) = (short)lVar11;
          }
        }
      }
    }
    uVar6 = *(int *)(param_1 + 0xa8) + 8U & 0x800000ff;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xffffff00) + 1;
    }
    *(uint *)(param_1 + 0xa8) = uVar6;
  }
  return;
}



/* ================================================================
 * Function: FUN_10002740
 * Address:  10002740
 * ================================================================ */

BOOL FUN_10002740(int param_1)

{
  BOOL BVar1;
  DWORD local_8;
  
  BVar1 = DeviceIoControl(*(HANDLE *)(param_1 + 0x14),0x8001,(LPVOID)0x0,0,(LPVOID)0x0,0,&local_8,
                          (LPOVERLAPPED)0x0);
  return BVar1;
}



/* ================================================================
 * Function: FUN_10002779
 * Address:  10002779
 * ================================================================ */

BOOL FUN_10002779(int param_1)

{
  BOOL BVar1;
  DWORD local_8;
  
  BVar1 = DeviceIoControl(*(HANDLE *)(param_1 + 0x14),0x8002,(LPVOID)0x0,0,(LPVOID)0x0,0,&local_8,
                          (LPOVERLAPPED)0x0);
  return BVar1;
}



/* ================================================================
 * Function: FUN_100027b2
 * Address:  100027b2
 * ================================================================ */

BOOL FUN_100027b2(int param_1)

{
  BOOL BVar1;
  undefined1 local_280 [24];
  int local_268;
  DWORD local_144;
  undefined1 local_140 [4];
  int local_13c;
  int local_130;
  int local_12c;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  DeviceIoControl(*(HANDLE *)(param_1 + 0x14),0x9005,local_280,0x13c,local_140,0x13c,&local_144,
                  (LPOVERLAPPED)0x0);
  if (((local_130 != 0) && (local_12c != 0)) && (local_12c != -1)) {
    *(int *)(param_1 + 0x20) = local_12c;
    *(int *)(param_1 + 0x1c) = local_130;
    *(int *)(param_1 + 0x24) = (local_13c + -1) * 0x800;
  }
  local_268 = *(int *)(param_1 + 0x2c) * *(int *)(param_1 + 0x28) * *(int *)(param_1 + 0x34);
  BVar1 = DeviceIoControl(*(HANDLE *)(param_1 + 0x14),0x9001,local_280,0x13c,local_140,0x13c,
                          &local_144,(LPOVERLAPPED)0x0);
  *(undefined4 *)(param_1 + 0xb0) = local_120;
  *(undefined4 *)(param_1 + 0xb4) = local_11c;
  *(undefined4 *)(param_1 + 0xb8) = local_118;
  *(undefined4 *)(param_1 + 0xbc) = local_114;
  *(undefined4 *)(param_1 + 0xc0) = local_110;
  return BVar1;
}



/* ================================================================
 * Function: FUN_1000293a
 * Address:  1000293a
 * ================================================================ */

undefined4 FUN_1000293a(void)

{
  return 0;
}



/* ================================================================
 * Function: FUN_1000294e
 * Address:  1000294e
 * ================================================================ */

undefined4 FUN_1000294e(void)

{
  return 0;
}



/* ================================================================
 * Function: FUN_10002957
 * Address:  10002957
 * ================================================================ */

uint FUN_10002957(int param_1)

{
  int local_64 [4];
  int local_54;
  int local_50;
  DWORD local_38;
  undefined1 local_34 [44];
  uint local_8;
  
  DeviceIoControl(*(HANDLE *)(param_1 + 0x14),0xb000,local_34,0x2c,local_64,0x2c,&local_38,
                  (LPOVERLAPPED)0x0);
  local_8 = *(uint *)(param_1 + 0xc);
  if (local_54 != 0) {
    local_8 = local_8 | 0x100;
  }
  if (local_50 != 0) {
    local_8 = local_8 | 0x80;
  }
  if (local_64[0] != 0) {
    local_8 = local_8 | 0x10;
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_100029d4
 * Address:  100029d4
 * ================================================================ */

undefined4 FUN_100029d4(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 local_c;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  uVar2 = FUN_10002ab5(param_1);
  if (*(int *)(param_1 + 0xb0) == 0) {
    local_c = uVar2 * *(int *)(param_1 + 0xb8) *
                      (*(int *)(param_1 + 0xb4) + *(int *)(param_1 + 0xbc));
  }
  else {
    local_c = (uVar2 / *(uint *)(param_1 + 0xb4)) * *(int *)(param_1 + 0xc0) +
              uVar2 * *(int *)(param_1 + 0x2c) * *(int *)(param_1 + 0x28) * *(int *)(param_1 + 0x34)
    ;
  }
  *param_2 = iVar1 + (local_c / 2) * 2;
  return 1;
}



/* ================================================================
 * Function: FUN_10002a83
 * Address:  10002a83
 * ================================================================ */

BOOL FUN_10002a83(int param_1)

{
  BOOL BVar1;
  DWORD local_8;
  
  BVar1 = DeviceIoControl(*(HANDLE *)(param_1 + 0x14),0xb006,(LPVOID)0x0,0,(LPVOID)0x0,0,&local_8,
                          (LPOVERLAPPED)0x0);
  return BVar1;
}



/* ================================================================
 * Function: FUN_10002ab5
 * Address:  10002ab5
 * ================================================================ */

undefined4 FUN_10002ab5(int param_1)

{
  DWORD local_30;
  undefined1 local_2c [8];
  undefined4 local_24;
  
  DeviceIoControl(*(HANDLE *)(param_1 + 0x14),0xb005,(LPVOID)0x0,0,local_2c,0x28,&local_30,
                  (LPOVERLAPPED)0x0);
  return local_24;
}



/* ================================================================
 * Function: FUN_10002af0
 * Address:  10002af0
 * ================================================================ */

void FUN_10002af0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  PIPP_Input_Multiple(param_1,0,param_2,param_3);
  return;
}



/* ================================================================
 * Function: FUN_10002b0b
 * Address:  10002b0b
 * ================================================================ */

undefined4 FUN_10002b0b(int param_1)

{
  void *pvVar1;
  undefined4 local_8;
  
  *(undefined4 *)(param_1 + 0x10dc) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  PIPP_GetLongParam(*(undefined4 *)(param_1 + 0x18),0x15,&local_8);
  switch(local_8) {
  case 0x14:
    pvVar1 = FUN_10001000(0x80000);
    *(void **)(param_1 + 0xa0) = pvVar1;
    break;
  case 0x15:
  case 0x18:
  case 0x19:
    pvVar1 = FUN_10001000(*(size_t *)(param_1 + 0x94));
    *(void **)(param_1 + 0xa0) = pvVar1;
  }
  if (*(int *)(param_1 + 0xa0) != 0) {
    *(undefined4 *)(param_1 + 0xac) = 1;
  }
  *(undefined4 *)(param_1 + 0x7c) = 0;
  return 0;
}



/* ================================================================
 * Function: FUN_10002bd5
 * Address:  10002bd5
 * ================================================================ */

undefined4 FUN_10002bd5(int param_1)

{
  if ((*(int *)(param_1 + 0xac) != 0) && (*(int *)(param_1 + 0xa0) != 0)) {
    FUN_1000104b(*(undefined **)(param_1 + 0xa0));
    *(undefined4 *)(param_1 + 0xa0) = 0;
    PIPP_SetLongParam(*(undefined4 *)(param_1 + 0x18),0x67,1);
  }
  return 0;
}



/* ================================================================
 * Function: FUN_10002c2e
 * Address:  10002c2e
 * ================================================================ */

undefined4 FUN_10002c2e(int param_1)

{
  undefined4 uVar1;
  int local_8;
  
  *(undefined4 *)(param_1 + 0x10e4) = 0;
  *(undefined4 *)(param_1 + 0x10dc) = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    PIPP_GetLongParam(*(undefined4 *)(param_1 + 0x18),0x15,&local_8);
    if (*(int *)(param_1 + 0x8c) != 0) {
      if (*(int *)(param_1 + 0xa0) != 0) {
        FUN_1000104b(*(undefined **)(param_1 + 0xa0));
        *(undefined4 *)(param_1 + 0xa0) = 0;
      }
      if (((local_8 == 0x15) || (local_8 == 0x18)) || (local_8 == 0x19)) {
        PIPP_SetLongParam(*(undefined4 *)(param_1 + 0x18),0x30,*(undefined4 *)(param_1 + 4));
        PIPP_SetLongParam(*(undefined4 *)(param_1 + 0x18),0x68,*(undefined4 *)(param_1 + 0x94));
        PIPP_SetLongParam(*(undefined4 *)(param_1 + 0x18),0xc,
                          *(int *)(param_1 + 0x2c) * *(int *)(param_1 + 0x28));
        PIPP_SetLongParam(*(undefined4 *)(param_1 + 0x18),0x20,*(undefined4 *)(param_1 + 0x90));
        uVar1 = FUN_100033dc(param_1);
        *(undefined4 *)(param_1 + 0x10e0) = uVar1;
        PIPP_SetLongParam(*(undefined4 *)(param_1 + 0x18),3,*(undefined4 *)(param_1 + 0x10e0));
        PIPP_Initialize(*(undefined4 *)(param_1 + 0x18));
      }
      else {
        *(undefined4 *)(param_1 + 0x10e0) = 0x80000;
      }
    }
    if (((local_8 != 0x15) && (local_8 != 0x18)) && (local_8 != 0x19)) {
      PIPP_Initialize(*(undefined4 *)(param_1 + 0x18));
    }
    *(undefined4 *)(param_1 + 0x10dc) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  return 1;
}



/* ================================================================
 * Function: FUN_10002dbe
 * Address:  10002dbe
 * ================================================================ */

undefined4 FUN_10002dbe(void)

{
  return 0;
}



/* ================================================================
 * Function: FUN_10002dd2
 * Address:  10002dd2
 * ================================================================ */

undefined4 FUN_10002dd2(void)

{
  return 0;
}



/* ================================================================
 * Function: FUN_10002ddb
 * Address:  10002ddb
 * ================================================================ */

/* WARNING: Removing unreachable block (ram,0x10003119) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10002ddb(int param_1)

{
  bool bVar1;
  HANDLE hEvent;
  DWORD DVar2;
  uint uVar3;
  int local_9c;
  int local_98;
  undefined1 local_94 [4];
  HANDLE local_90;
  HANDLE local_8c;
  HANDLE local_88;
  int local_84;
  int local_80;
  int local_7c;
  CHAR local_78 [100];
  HANDLE local_14;
  undefined4 local_10;
  uint local_c;
  undefined4 local_8;
  
  local_c = 0;
  local_84 = 0;
  local_10 = 0;
  local_9c = 0;
  local_8 = 0;
  PIPP_GetLongParam(*(undefined4 *)(param_1 + 0x18),8,local_94);
  FUN_100074af(local_78,(byte *)s_Check_Controller_Overrun_d_10011030);
  hEvent = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,local_78);
  FUN_100074af(local_78,(byte *)s_Check_USB_Errors_d_1001104c);
  local_90 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,local_78);
  bVar1 = false;
  *(int *)(param_1 + 0x10dc) =
       *(int *)(param_1 + 8) * *(int *)(param_1 + 0x2c) * *(int *)(param_1 + 0x28);
  local_8c = hEvent;
  local_88 = local_90;
  PIPP_GetLongParam(*(undefined4 *)(param_1 + 0x18),0x15,&local_7c);
  if (*(int *)(param_1 + 0x2c) * *(int *)(param_1 + 0x28) != 0) {
    if (*(int *)(param_1 + 0x8c) == 0) {
      *(uint *)(param_1 + 0x38) =
           *(uint *)(param_1 + 0x10e0) / (uint)(*(int *)(param_1 + 0x2c) * *(int *)(param_1 + 0x28))
      ;
    }
    else {
      *(uint *)(param_1 + 0x38) =
           *(uint *)(param_1 + 0x94) / (uint)(*(int *)(param_1 + 0x2c) * *(int *)(param_1 + 0x28));
    }
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    *(undefined4 *)(param_1 + 0x38) = 1;
  }
  local_98 = *(int *)(param_1 + 0x7c) * *(int *)(param_1 + 0x2c) * *(int *)(param_1 + 0x28) +
             *(int *)(param_1 + 0x10dc);
  if ((*(int *)(param_1 + 0x8c) == 0) || (*(int *)(param_1 + 0x90) == 0)) {
    local_80 = *(int *)(param_1 + 0xa0);
  }
  else {
    local_80 = *(int *)(param_1 + 0x90);
  }
  local_84 = FUN_10002af0(*(undefined4 *)(param_1 + 0x18),local_80 + local_98,
                          *(int *)(param_1 + 0x2c) * *(int *)(param_1 + 0x28) -
                          *(int *)(param_1 + 0x10dc));
  if ((local_7c != 0x15) && (local_7c != 0x18)) {
    if (local_84 == 0) {
      if (((*(int *)(param_1 + 0x10dc) != 0) &&
          (DAT_1001424c = GetTickCount(), 1000 < DAT_1001424c - _DAT_10014248)) && (local_84 == 0))
      {
        bVar1 = true;
      }
    }
    else {
      _DAT_10014248 = GetTickCount();
    }
  }
  *(int *)(param_1 + 0x10dc) = *(int *)(param_1 + 0x10dc) + local_84;
  if (*(int *)(param_1 + 0x10dc) < *(int *)(param_1 + 0x2c) * *(int *)(param_1 + 0x28)) {
    if (((local_7c == 0x15) || (local_7c == 0x18)) || (local_7c == 0x19)) {
      PIPP_GetLongParam(*(undefined4 *)(param_1 + 0x18),0x10,&local_9c);
      if (local_9c == 0) {
        local_c = local_c | 0x100;
      }
      DVar2 = WaitForMultipleObjects(2,&local_8c,0,0);
      if (DVar2 == 0) {
        ResetEvent(hEvent);
        if (local_7c == 0x18) {
          local_c = local_c | 0x80;
        }
        else {
          uVar3 = PIPP_Input(*(undefined4 *)(param_1 + 0x18),0x42);
          if ((uVar3 & 2) == 0) {
            local_c = local_c | 0x80;
          }
        }
      }
      else if (DVar2 == 1) {
        ResetEvent(local_90);
        local_c = local_c | 0x100;
      }
      if ((*(int *)(param_1 + 0x10e4) == 0) || (*(int *)(param_1 + 8) != 0)) {
        if ((*(int *)(param_1 + 0x10e4) != 0) && (*(int *)(param_1 + 8) != 0)) {
          local_c = local_c | 0x10;
        }
      }
      else {
        local_c = local_c | 0x80;
      }
    }
    else if (bVar1) {
      local_c = local_c | 0x80;
    }
  }
  else {
    local_c = local_c | 0x10;
    *(int *)(param_1 + 8) =
         *(int *)(param_1 + 0x10dc) / (*(int *)(param_1 + 0x2c) * *(int *)(param_1 + 0x28));
    *(int *)(param_1 + 0x10dc) =
         *(int *)(param_1 + 0x10dc) - *(int *)(param_1 + 0x2c) * *(int *)(param_1 + 0x28);
    if (((*(uint *)(param_1 + 0x38) < *(uint *)(param_1 + 8)) && (*(int *)(param_1 + 0x10e4) == 0))
       && (*(int *)(param_1 + 4) != 2)) {
      PIPP_SetLongParam(*(undefined4 *)(param_1 + 0x18),0x67,0);
      *(undefined4 *)(param_1 + 0x10e4) = 1;
      local_14 = GetCurrentThread();
      SetThreadPriority(local_14,0xf);
    }
  }
  CloseHandle(hEvent);
  CloseHandle(local_90);
  return local_c;
}



/* ================================================================
 * Function: FUN_10003264
 * Address:  10003264
 * ================================================================ */

/* WARNING: Removing unreachable block (ram,0x10003367) */

undefined4 FUN_10003264(int param_1,int *param_2)

{
  undefined4 local_8;
  
  if ((*(int *)(param_1 + 0x8c) == 0) || (*(int *)(param_1 + 0x90) == 0)) {
    local_8 = *(int *)(param_1 + 0xa0);
  }
  else {
    local_8 = *(int *)(param_1 + 0x90);
  }
  if (*(int *)(param_1 + 4) == 2) {
    if (*(uint *)(param_1 + 0x7c) < *(uint *)(param_1 + 0x38)) {
      *param_2 = local_8 + *(int *)(param_1 + 0x7c) * *(int *)(param_1 + 0x2c) * 2;
    }
    else {
      *param_2 = 0;
    }
    *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 0x7c);
    *(uint *)(param_1 + 0x7c) =
         (uint)(*(int *)(param_1 + 0x7c) + *(int *)(param_1 + 8)) % *(uint *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  else {
    if (*(uint *)(param_1 + 0x7c) < *(uint *)(param_1 + 0x38)) {
      *param_2 = local_8 + *(int *)(param_1 + 0x7c) * *(int *)(param_1 + 0x2c) * 2;
    }
    else {
      *param_2 = 0;
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 0x7c);
    *(uint *)(param_1 + 0x7c) = (*(int *)(param_1 + 0x7c) + 1U) % *(uint *)(param_1 + 0x38);
  }
  return 1;
}



/* ================================================================
 * Function: FUN_100033a2
 * Address:  100033a2
 * ================================================================ */

undefined4 FUN_100033a2(int param_1)

{
  PIPP_SetLongParam(*(undefined4 *)(param_1 + 0x18),0x33,*(undefined4 *)(param_1 + 0xcc));
  return 1;
}



/* ================================================================
 * Function: FUN_100033cf
 * Address:  100033cf
 * ================================================================ */

undefined4 FUN_100033cf(int param_1)

{
  return *(undefined4 *)(param_1 + 0x7c);
}



/* ================================================================
 * Function: FUN_100033dc
 * Address:  100033dc
 * ================================================================ */

undefined4 FUN_100033dc(int param_1)

{
  LSTATUS LVar1;
  DWORD local_18;
  HKEY local_14;
  undefined4 local_10;
  int local_c [2];
  
  local_18 = 4;
  local_c[1] = 4;
  PIPP_GetLongParam(*(undefined4 *)(param_1 + 0x18),0x15,local_c);
  if (local_c[0] == 0x15) {
    LVar1 = RegOpenKeyExA((HKEY)0x80000002,s_SYSTEM_CurrentControlSet_Service_10011060,0,1,&local_14
                         );
    if (LVar1 != 0) {
      local_10 = 0;
    }
  }
  else if ((local_c[0] == 0x18) &&
          (LVar1 = RegOpenKeyExA((HKEY)0x80000002,s_SYSTEM_CurrentControlSet_Service_1001109c,0,1,
                                 &local_14), LVar1 != 0)) {
    local_10 = 0;
  }
  LVar1 = RegQueryValueExA(local_14,s_MaxTransfer_100110d8,(LPDWORD)0x0,(LPDWORD)(local_c + 1),
                           (LPBYTE)&local_10,&local_18);
  if (LVar1 != 0) {
    local_10 = 0;
  }
  RegCloseKey(local_14);
  return local_10;
}



/* ================================================================
 * Function: FUN_100034a0
 * Address:  100034a0
 * ================================================================ */

int FUN_100034a0(HANDLE param_1,BOOL param_2,BOOL param_3,LPCSTR param_4,undefined4 param_5)

{
  int local_24;
  int local_20 [3];
  undefined4 local_14;
  DWORD local_10;
  undefined1 local_c [8];
  
  local_20[1] = 0;
  FUN_100034ff(&local_24,local_20,param_2,param_3,param_4);
  local_14 = param_5;
  local_20[2] = local_20[0];
  DeviceIoControl(param_1,0xb007,local_20 + 2,8,local_c,8,&local_10,(LPOVERLAPPED)0x0);
  return local_24;
}



/* ================================================================
 * Function: FUN_100034ff
 * Address:  100034ff
 * ================================================================ */

undefined4 FUN_100034ff(int *param_1,int *param_2,BOOL param_3,BOOL param_4,LPCSTR param_5)

{
  HANDLE pvVar1;
  int iVar2;
  undefined4 local_8;
  
  pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,param_3,param_4,param_5);
  *param_1 = (int)pvVar1;
  if (DAT_10014250 == (FARPROC)0x0) {
    DAT_10014250 = FUN_10003585();
  }
  if ((DAT_10014250 == (FARPROC)0x0) || (*param_1 == 0)) {
    *param_2 = 0;
  }
  else {
    iVar2 = (*DAT_10014250)(*param_1);
    *param_2 = iVar2;
  }
  if ((*param_1 == 0) || (*param_2 == 0)) {
    local_8 = 0;
  }
  else {
    local_8 = 1;
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_10003585
 * Address:  10003585
 * ================================================================ */

FARPROC FUN_10003585(void)

{
  FARPROC pFVar1;
  uint local_110 [65];
  HMODULE local_c;
  
  GetSystemDirectoryA((LPSTR)local_110,0x104);
  FUN_10007520(local_110,(uint *)s__kernel32_dll_100110e4);
  local_c = LoadLibraryA((LPCSTR)local_110);
  if (local_c == (HMODULE)0x0) {
    pFVar1 = (FARPROC)0x0;
  }
  else {
    pFVar1 = GetProcAddress(local_c,s_OpenVxDHandle_100110f4);
  }
  return pFVar1;
}



/* ================================================================
 * Function: FUN_100035e1
 * Address:  100035e1
 * ================================================================ */

HANDLE FUN_100035e1(HANDLE param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5)

{
  BOOL BVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  DWORD local_14;
  undefined1 local_10 [8];
  HANDLE local_8;
  
  local_20 = param_5;
  local_18 = 0;
  local_1c = param_4;
  BVar1 = DeviceIoControl(param_1,0xc350a508,&local_20,0xc,local_10,0xc,&local_14,(LPOVERLAPPED)0x0)
  ;
  if (BVar1 == 0) {
    local_8 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,&DAT_10011104);
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_10003641
 * Address:  10003641
 * ================================================================ */

HANDLE FUN_10003641(HANDLE param_1,BOOL param_2,BOOL param_3,LPCSTR param_4,undefined4 param_5)

{
  BOOL BVar1;
  undefined4 local_20;
  LPCSTR local_1c;
  HANDLE local_18;
  DWORD local_14;
  undefined1 local_10 [12];
  
  local_18 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,param_2,param_3,param_4);
  local_20 = param_5;
  local_1c = param_4;
  BVar1 = DeviceIoControl(param_1,0xc350a508,&local_20,0xc,local_10,0xc,&local_14,(LPOVERLAPPED)0x0)
  ;
  if (BVar1 == 0) {
    CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,&DAT_1001110c);
  }
  return local_18;
}



/* ================================================================
 * Function: FUN_100036c0
 * Address:  100036c0
 * ================================================================ */

BOOL FUN_100036c0(int param_1)

{
  BOOL local_c;
  DWORD local_8;
  
  if (*(int *)(param_1 + 0x80) == 1) {
    local_c = DeviceIoControl(*(HANDLE *)(param_1 + 0x14),0x8001,(LPVOID)0x0,0,(LPVOID)0x0,0,
                              &local_8,(LPOVERLAPPED)0x0);
    if (local_c != 0) {
      PIPP_Enable_DMA_Communication(*(undefined4 *)(param_1 + 0x18));
    }
  }
  else {
    local_c = 1;
  }
  return local_c;
}



/* ================================================================
 * Function: FUN_10003721
 * Address:  10003721
 * ================================================================ */

BOOL FUN_10003721(int param_1)

{
  BOOL local_c;
  DWORD local_8;
  
  if (*(int *)(param_1 + 0x80) == 1) {
    local_c = DeviceIoControl(*(HANDLE *)(param_1 + 0x14),0x8002,(LPVOID)0x0,0,(LPVOID)0x0,0,
                              &local_8,(LPOVERLAPPED)0x0);
  }
  else {
    local_c = 0;
  }
  return local_c;
}



/* ================================================================
 * Function: FUN_1000376f
 * Address:  1000376f
 * ================================================================ */

BOOL FUN_1000376f(int param_1)

{
  BOOL local_2bc;
  int local_2b4;
  undefined1 local_2b0 [24];
  int local_298;
  undefined4 local_27c;
  DWORD local_174;
  undefined1 local_170 [24];
  int local_158;
  int local_154;
  int local_14c;
  undefined1 local_140 [4];
  int local_13c;
  int local_130;
  int local_12c;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  local_27c = *(undefined4 *)(param_1 + 4);
  if (*(int *)(param_1 + 0x80) == 1) {
    DeviceIoControl(*(HANDLE *)(param_1 + 0x14),0x9005,local_2b0,0x13c,local_140,0x13c,&local_174,
                    (LPOVERLAPPED)0x0);
  }
  else {
    DeviceIoControl(*(HANDLE *)(param_1 + 0x14),0xc350644c,local_170,0x13c,&local_158,0x13c,
                    &local_174,(LPOVERLAPPED)0x0);
    local_130 = local_154;
    local_12c = local_158;
    local_13c = local_14c;
  }
  if (((local_130 != 0) && (local_12c != 0)) && (local_12c != -1)) {
    *(int *)(param_1 + 0x20) = local_12c;
    *(int *)(param_1 + 0x1c) = local_130;
    *(int *)(param_1 + 0x24) = (local_13c + -1) * 0x1000;
  }
  local_298 = *(int *)(param_1 + 0x2c) * *(int *)(param_1 + 0x28) * *(int *)(param_1 + 0x34);
  if (*(int *)(param_1 + 0x80) == 1) {
    local_2bc = DeviceIoControl(*(HANDLE *)(param_1 + 0x14),0x9001,local_2b0,0x13c,local_140,0x13c,
                                &local_174,(LPOVERLAPPED)0x0);
  }
  else {
    local_2bc = 1;
  }
  *(undefined4 *)(param_1 + 0xb0) = local_120;
  *(undefined4 *)(param_1 + 0xb4) = local_11c;
  *(undefined4 *)(param_1 + 0xb8) = local_118;
  *(undefined4 *)(param_1 + 0xbc) = local_114;
  *(undefined4 *)(param_1 + 0xc0) = local_110;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  if ((*(int *)(param_1 + 0x24) == 0) || (*(int *)(param_1 + 0xb8) == 0)) {
    local_2b4 = 0;
    local_2bc = 0;
  }
  else {
    local_2b4 = *(int *)(param_1 + 0x24) / *(int *)(param_1 + 0xb8);
  }
  if (*(int *)(param_1 + 0xb0) == 0) {
    *(int *)(param_1 + 0x38) = local_2b4 / (*(int *)(param_1 + 0xb4) + *(int *)(param_1 + 0xbc));
  }
  else {
    *(int *)(param_1 + 0x38) = local_2b4 * *(int *)(param_1 + 0xb4);
  }
  return local_2bc;
}



/* ================================================================
 * Function: FUN_10003a2c
 * Address:  10003a2c
 * ================================================================ */

undefined4 FUN_10003a2c(void)

{
  return 0;
}



/* ================================================================
 * Function: FUN_10003a40
 * Address:  10003a40
 * ================================================================ */

undefined4 FUN_10003a40(void)

{
  return 0;
}



/* ================================================================
 * Function: FUN_10003a49
 * Address:  10003a49
 * ================================================================ */

uint FUN_10003a49(int param_1)

{
  int local_98;
  int local_90;
  int local_8c;
  int local_88 [4];
  int local_78;
  int local_70;
  int local_64;
  DWORD local_5c;
  undefined1 local_58 [44];
  int local_2c;
  uint local_28;
  undefined1 local_24 [4];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (*(int *)(param_1 + 0x80) == 1) {
    DeviceIoControl(*(HANDLE *)(param_1 + 0x14),0xb000,local_58,0x2c,local_88,0x2c,&local_5c,
                    (LPOVERLAPPED)0x0);
    local_98 = local_88[0];
    local_90 = local_78;
    local_8c = local_70;
    local_2c = local_64;
    local_28 = *(uint *)(param_1 + 0xc);
  }
  else {
    DeviceIoControl(*(HANDLE *)(param_1 + 0x14),0xc350a504,(LPVOID)0x0,0,local_24,0x20,&local_5c,
                    (LPOVERLAPPED)0x0);
    local_98 = local_1c;
    local_90 = local_20;
    local_8c = local_18;
    local_2c = local_14;
    local_28 = *(uint *)(param_1 + 0xc);
  }
  if (local_90 != 0) {
    local_28 = local_28 | 0x100;
  }
  if (local_8c != 0) {
    local_28 = local_28 | 0x80;
  }
  if (local_98 != 0) {
    local_28 = local_28 | 0x10;
  }
  if (((*(int *)(param_1 + 4) == 3) && (0 < local_2c)) && (local_98 == 0)) {
    local_28 = local_28 | 0x10;
  }
  return local_28;
}



/* ================================================================
 * Function: FUN_10003b6b
 * Address:  10003b6b
 * ================================================================ */

undefined4 FUN_10003b6b(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_c;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 4) == 2) {
    uVar2 = FUN_10003cbf(param_1);
    *(undefined4 *)(param_1 + 0x7c) = uVar2;
  }
  if (*(int *)(param_1 + 0xb0) == 0) {
    local_c = *(int *)(param_1 + 0x7c) *
              *(int *)(param_1 + 0xb8) * (*(int *)(param_1 + 0xb4) + *(int *)(param_1 + 0xbc));
  }
  else {
    local_c = (*(uint *)(param_1 + 0x7c) / *(uint *)(param_1 + 0xb4)) * *(int *)(param_1 + 0xc0) +
              *(int *)(param_1 + 0x7c) * *(int *)(param_1 + 0x2c) * *(int *)(param_1 + 0x28) *
              *(int *)(param_1 + 0x34);
  }
  *param_2 = iVar1 + (local_c / 2) * 2;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
  return 1;
}



/* ================================================================
 * Function: FUN_10003c3e
 * Address:  10003c3e
 * ================================================================ */

BOOL FUN_10003c3e(int param_1)

{
  BOOL local_c;
  DWORD local_8;
  
  local_c = 1;
  if ((*(int *)(param_1 + 4) == 3) && (*(int *)(param_1 + 0x54) != 0)) {
    local_c = DeviceIoControl(*(HANDLE *)(param_1 + 0x14),0xb006,(LPVOID)0x0,0,(LPVOID)0x0,0,
                              &local_8,(LPOVERLAPPED)0x0);
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
    if (*(uint *)(param_1 + 0x38) <= *(uint *)(param_1 + 0x7c)) {
      *(undefined4 *)(param_1 + 0x7c) = 0;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -1;
  }
  return local_c;
}



/* ================================================================
 * Function: FUN_10003cbf
 * Address:  10003cbf
 * ================================================================ */

undefined4 FUN_10003cbf(int param_1)

{
  DWORD local_30;
  undefined1 local_2c [8];
  undefined4 local_24;
  
  DeviceIoControl(*(HANDLE *)(param_1 + 0x14),0xb005,(LPVOID)0x0,0,local_2c,0x28,&local_30,
                  (LPOVERLAPPED)0x0);
  return local_24;
}



/* ================================================================
 * Function: FUN_10003cf0
 * Address:  10003cf0
 * ================================================================ */

undefined4 FUN_10003cf0(int param_1)

{
  undefined4 local_10;
  uint local_c;
  DWORD local_8;
  
  local_c = 0;
  local_10 = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    DeviceIoControl(*(HANDLE *)(param_1 + 0x14),0xc3506544,(LPVOID)0x0,0,&local_c,4,&local_8,
                    (LPOVERLAPPED)0x0);
    if (local_c < 0x23) {
      local_10 = 0;
    }
    else {
      local_10 = 1;
    }
  }
  return local_10;
}



/* ================================================================
 * Function: FUN_10003d51
 * Address:  10003d51
 * ================================================================ */

void FUN_10003d51(undefined4 *param_1)

{
  int local_c;
  DWORD local_8;
  
  local_c = 0;
  if ((param_1[0x20] == 3) || (param_1[0x20] == 4)) {
    if (param_1[0x27] == 1) {
      local_c = DeviceIoControl((HANDLE)param_1[5],0x80002004,param_1 + 7,4,(LPVOID)0x0,0,&local_8,
                                (LPOVERLAPPED)0x0);
    }
    if (local_c != 0) {
      param_1[0x27] = 0;
    }
  }
  FUN_10004e1b(param_1);
  return;
}



/* ================================================================
 * Function: FUN_10003dcc
 * Address:  10003dcc
 * ================================================================ */

int FUN_10003dcc(int param_1)

{
  uint uVar1;
  int local_1c;
  DWORD local_18;
  undefined1 local_14 [4];
  undefined4 local_10;
  undefined1 local_c [8];
  
  local_1c = 1;
  PIPP_SetLongParam(*(undefined4 *)(param_1 + 0x18),0x25,0xff);
  PIPP_SetLongParam(*(undefined4 *)(param_1 + 0x18),0x2f,0);
  uVar1 = *(uint *)(param_1 + 0x80);
  if (uVar1 == 1) {
    local_10 = *(undefined4 *)(param_1 + 0x6c);
    local_1c = DeviceIoControl(*(HANDLE *)(param_1 + 0x14),0x8001,local_14,8,local_c,8,&local_18,
                               (LPOVERLAPPED)0x0);
  }
  else if ((1 < uVar1) && (uVar1 < 5)) {
    local_1c = DeviceIoControl(*(HANDLE *)(param_1 + 0x14),0xc3506548,(LPVOID)0x0,0,(LPVOID)0x0,0,
                               &local_18,(LPOVERLAPPED)0x0);
  }
  if (local_1c == 0) {
    MessageBoxA((HWND)0x0,s_Irq_Conflict__Try_PCI_Timer__Int_1001111c,s_Error_10011114,0);
  }
  else {
    PIPP_SetLongParam(*(undefined4 *)(param_1 + 0x18),0x36,0);
    PIPP_Enable_DMA_Communication(*(undefined4 *)(param_1 + 0x18));
  }
  return local_1c;
}



/* ================================================================
 * Function: FUN_10003eba
 * Address:  10003eba
 * ================================================================ */

BOOL FUN_10003eba(int param_1)

{
  BOOL local_1c;
  DWORD local_18;
  undefined1 local_14 [4];
  undefined4 local_10;
  undefined1 local_c [8];
  
  local_1c = 1;
  local_10 = *(undefined4 *)(param_1 + 0x6c);
  if (*(int *)(param_1 + 0x80) == 1) {
    local_1c = DeviceIoControl(*(HANDLE *)(param_1 + 0x14),0x8002,local_14,8,local_c,8,&local_18,
                               (LPOVERLAPPED)0x0);
  }
  else if (*(int *)(param_1 + 0x80) == 2) {
    local_1c = 1;
  }
  PIPP_SetLongParam(*(undefined4 *)(param_1 + 0x18),0x3a,0);
  *(undefined4 *)(param_1 + 0xac) = 0;
  return local_1c;
}



/* ================================================================
 * Function: FUN_10003f41
 * Address:  10003f41
 * ================================================================ */

void FUN_10003f41(int param_1)

{
  PIPP_GetLongParam(*(undefined4 *)(param_1 + 0x18),0x4f,param_1 + 0x14);
  (**(code **)(param_1 + 0x1150))(param_1);
  return;
}



/* ================================================================
 * Function: FUN_10003f6b
 * Address:  10003f6b
 * ================================================================ */

undefined4
FUN_10003f6b(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined1 param_5
            )

{
  PIPP_DownLoad_PhyAdd(*(undefined4 *)(param_1 + 0x18),param_2,param_3,param_4,0,param_5);
  return 0;
}



/* ================================================================
 * Function: FUN_10003f9e
 * Address:  10003f9e
 * ================================================================ */

undefined4 FUN_10003f9e(void)

{
  return 0;
}



/* ================================================================
 * Function: FUN_10003fa7
 * Address:  10003fa7
 * ================================================================ */

undefined4 FUN_10003fa7(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = PIPP_GetLongParam(*(undefined4 *)(param_1 + 0x18),0x37,param_1 + 0x7c);
  return uVar1;
}



/* ================================================================
 * Function: FUN_10003fd4
 * Address:  10003fd4
 * ================================================================ */

undefined4 FUN_10003fd4(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_8;
  
  local_8 = 0;
  if (*(int *)(param_1 + 4) != 2) {
    local_8 = PIPP_SetorClr_WP(*(undefined4 *)(param_1 + 0x18),param_2,param_3,1);
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_1000400b
 * Address:  1000400b
 * ================================================================ */

undefined4 FUN_1000400b(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_8;
  
  local_8 = 0;
  if (*(int *)(param_1 + 4) != 2) {
    local_8 = PIPP_SetorClr_WP(*(undefined4 *)(param_1 + 0x18),param_2,param_3,0);
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_10004042
 * Address:  10004042
 * ================================================================ */

void FUN_10004042(int param_1)

{
  PIPP_SetLongParam(*(undefined4 *)(param_1 + 0x18),0x30,*(undefined4 *)(param_1 + 4));
  return;
}



/* ================================================================
 * Function: FUN_1000405f
 * Address:  1000405f
 * ================================================================ */

undefined4 FUN_1000405f(int param_1,int *param_2)

{
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = *(int *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x8c) != 0) {
    local_8 = *(int *)(param_1 + 0x90);
  }
  if (*(int *)(param_1 + 4) == 3) {
    local_c = *(int *)(param_1 + 0x7c) * *(int *)(param_1 + 0x2c) * *(int *)(param_1 + 0x28) +
              *(int *)(param_1 + 0x58) * *(int *)(param_1 + 0x7c);
    if (*(int *)(param_1 + 0x5c) == 0) {
      local_c = local_c + *(int *)(param_1 + 0x58);
    }
    *param_2 = local_8 + local_c;
  }
  if (*(int *)(param_1 + 4) == 2) {
    if (*(uint *)(param_1 + 0x38) < *(uint *)(param_1 + 0x7c)) {
      *param_2 = 0;
    }
    else {
      *(undefined4 *)(param_1 + 8) = 0;
      local_c = *(int *)(param_1 + 0x7c) * *(int *)(param_1 + 0x2c) * *(int *)(param_1 + 0x28) +
                *(int *)(param_1 + 0x58) * *(int *)(param_1 + 0x7c);
      if (*(int *)(param_1 + 0x5c) == 0) {
        local_c = local_c + *(int *)(param_1 + 0x58);
      }
      *param_2 = local_8 + local_c;
    }
  }
  return 1;
}



/* ================================================================
 * Function: FUN_10004162
 * Address:  10004162
 * ================================================================ */

undefined4 FUN_10004162(undefined4 *param_1)

{
  uint local_10;
  DWORD local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)*param_1;
  if (param_1[1] == 3) {
    switch(param_1[0x20]) {
    case 1:
      DeviceIoControl((HANDLE)param_1[5],0xb006,(LPVOID)0x0,0,(LPVOID)0x0,0,&local_c,
                      (LPOVERLAPPED)0x0);
      break;
    case 2:
    case 4:
      DeviceIoControl((HANDLE)param_1[5],0xc350a50c,(LPVOID)0x0,0,(LPVOID)0x0,0,&local_c,
                      (LPOVERLAPPED)0x0);
      break;
    case 3:
      DeviceIoControl((HANDLE)param_1[5],0xc350a50c,(LPVOID)0x0,0,(LPVOID)0x0,0,&local_c,
                      (LPOVERLAPPED)0x0);
    }
  }
  if ((param_1[0x1a] != 0) && (param_1[2] != 0)) {
    SetEvent((HANDLE)param_1[0x1a]);
  }
  if (param_1[2] != 0) {
    param_1[2] = param_1[2] + -1;
  }
  if (param_1[0x23] == 0) {
    for (local_10 = 0; local_10 < (uint)param_1[0x1f] / (uint)param_1[0xd]; local_10 = local_10 + 1)
    {
      local_8 = (undefined4 *)local_8[5];
    }
    if (param_1[0xd] == 1) {
      FUN_1000400b((int)param_1,param_1[0x1f],*local_8);
    }
    else if ((param_1[0x1f] != 0) && ((param_1[0x1f] + 1) % (uint)param_1[0xd] == 0)) {
      FUN_1000400b((int)param_1,(uint)param_1[0x1f] / (uint)param_1[0xd],*local_8);
    }
  }
  else {
    for (local_10 = 0; local_10 < (uint)param_1[0x1f] / (uint)param_1[0xd]; local_10 = local_10 + 1)
    {
      local_8 = (undefined4 *)local_8[5];
    }
    if (param_1[0xd] == 1) {
      FUN_1000400b((int)param_1,local_8[1],*local_8);
    }
    else if ((param_1[0x1f] != 0) && ((param_1[0x1f] + 1) % (uint)param_1[0xd] == 0)) {
      FUN_1000400b((int)param_1,local_8[1],*local_8);
    }
  }
  param_1[0x1f] = param_1[0x1f] + 1;
  if ((uint)((param_1[0xe] + 1) * param_1[0xd]) <= (uint)param_1[0x1f]) {
    param_1[0x1f] = 0;
  }
  return 1;
}



/* ================================================================
 * Function: FUN_100043bb
 * Address:  100043bb
 * ================================================================ */

undefined4 FUN_100043bb(int param_1)

{
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined4 local_28;
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  int local_1c;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  undefined1 local_c [4];
  int local_8;
  
  local_28 = 1;
  PIPP_SetLongParam(*(undefined4 *)(param_1 + 0x18),0x52,0xff);
  for (local_1c = 0; local_1c < 10; local_1c = local_1c + 1) {
    PIPP_Diagnose_Interface
              (*(undefined4 *)(param_1 + 0x18),local_20,local_c,local_10,local_14,local_18,local_30,
               &local_8,local_24,local_2c);
    if (local_8 != -0x10000) {
      local_28 = 0;
    }
    PIPP_SetLongParam(*(undefined4 *)(param_1 + 0x18),0x52,0xff);
  }
  return local_28;
}



/* ================================================================
 * Function: FUN_10004458
 * Address:  10004458
 * ================================================================ */

/* WARNING: Type propagation algorithm not settling */

BOOL FUN_10004458(int param_1)

{
  DWORD local_24 [4];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  BOOL local_8;
  
  local_8 = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    local_24[1] = 0;
    local_24[2] = 0;
    local_14 = 0;
    local_10 = 0;
    local_c = *(undefined4 *)(param_1 + 0x24);
    local_24[3] = *(undefined4 *)(param_1 + 0x20);
    local_8 = DeviceIoControl(*(HANDLE *)(param_1 + 0x14),0x80002000,local_24 + 1,0x18,
                              (LPVOID)(param_1 + 0x1c),4,local_24,(LPOVERLAPPED)0x0);
    if (local_8 != 0) {
      *(undefined4 *)(param_1 + 0x9c) = 1;
    }
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_100044e2
 * Address:  100044e2
 * ================================================================ */

undefined4 FUN_100044e2(int *param_1)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  int local_28;
  uint local_1c;
  uint local_14;
  int local_10;
  undefined4 *local_8;
  
  local_14 = 0;
  local_1c = param_1[9];
  param_1[0xe] = 0;
  FUN_10004e1b(param_1);
  pvVar2 = FUN_10001000(0x18);
  *param_1 = (int)pvVar2;
  *(undefined4 *)*param_1 = 4;
  *(undefined4 *)(*param_1 + 0x14) = 0;
  *(undefined4 *)(*param_1 + 8) = 0;
  local_8 = (undefined4 *)*param_1;
  local_8[3] = 0;
  uVar4 = param_1[0xb] * param_1[10] * param_1[0xd];
  uVar3 = uVar4 >> 2;
  local_10 = param_1[8];
  pvVar2 = FUN_10001000(0x10);
  local_8[3] = pvVar2;
  *local_8 = 4;
  local_28 = local_8[3];
  *(undefined4 *)(local_28 + 0xc) = 0;
  while ((local_14 < 0xff && (uVar4 < local_1c))) {
    (*(code *)param_1[0x43e])(param_1,local_14,local_10,uVar3,0);
    *(int *)(local_28 + 4) = local_10;
    *(uint *)(local_28 + 8) = uVar3;
    local_10 = local_10 + uVar3;
    local_1c = local_1c + uVar3 * -4;
    pvVar2 = FUN_10001000(0x10);
    *(void **)(local_28 + 0xc) = pvVar2;
    iVar1 = *(int *)(local_28 + 0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    (*(code *)param_1[0x43e])(param_1,local_14 + 1,local_10,uVar3,0);
    *(int *)(iVar1 + 4) = local_10;
    *(uint *)(iVar1 + 8) = uVar3;
    local_10 = local_10 + uVar3;
    pvVar2 = FUN_10001000(0x10);
    *(void **)(iVar1 + 0xc) = pvVar2;
    iVar1 = *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    (*(code *)param_1[0x43e])(param_1,local_14 + 2,local_10,uVar3,0);
    *(int *)(iVar1 + 4) = local_10;
    *(uint *)(iVar1 + 8) = uVar3;
    local_10 = local_10 + uVar3;
    pvVar2 = FUN_10001000(0x10);
    *(void **)(iVar1 + 0xc) = pvVar2;
    iVar1 = *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    (*(code *)param_1[0x43e])(param_1,local_14 + 3,local_10,uVar3,6);
    *(int *)(iVar1 + 4) = local_10;
    *(uint *)(iVar1 + 8) = uVar3;
    local_10 = local_10 + uVar3;
    pvVar2 = FUN_10001000(0x10);
    *(void **)(iVar1 + 0xc) = pvVar2;
    local_28 = *(int *)(iVar1 + 0xc);
    *(undefined4 *)(local_28 + 0xc) = 0;
    param_1[param_1[0xe] + 0x37] = local_14 + 3;
    local_14 = local_14 + 4;
    if (uVar4 <= local_1c) {
      pvVar2 = FUN_10001000(0x18);
      local_8[5] = pvVar2;
      local_8 = (undefined4 *)local_8[5];
      local_8[5] = 0;
      pvVar2 = FUN_10001000(0x10);
      local_8[3] = pvVar2;
      *local_8 = 4;
      local_28 = local_8[3];
      param_1[0xe] = param_1[0xe] + 1;
    }
  }
  (*(code *)param_1[0x43e])(param_1,local_14 - 1,local_10 - uVar3,uVar3,0x86);
  return 0;
}



/* ================================================================
 * Function: FUN_1000481a
 * Address:  1000481a
 * ================================================================ */

undefined4 FUN_1000481a(int *param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  int *piVar3;
  int local_403c;
  int local_4038;
  int *local_4030;
  int local_402c;
  uint local_4028;
  uint local_4018;
  int *local_4014;
  uint auStackY_400c [4091];
  undefined4 uStackY_20;
  int *piStackY_1c;
  int iStackY_18;
  undefined4 uStackY_14;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *local_8;
  
  FUN_10007600();
  local_403c = 0;
  param_1[0x1f] = 0;
  param_1[2] = 0;
  param_1[0xe] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  local_8 = param_1;
  (*(code *)param_1[0x446])();
  param_1[0x2b] = 0;
  param_1[0x36] = 0;
  piVar3 = (int *)((param_1[0xb] * param_1[10] + param_1[0x16]) * param_1[0xd]);
  if (piVar3 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    local_4018 = 0;
    local_4014 = piVar3;
    switch(param_1[0x20]) {
    case 1:
      uStackY_14 = 0x10004983;
      FUN_100051b8((int)param_1,&local_4018);
      break;
    case 2:
    case 4:
      uStackY_14 = 0x100049c6;
      FUN_10004fba((int)param_1,(int *)&local_4018);
      break;
    case 3:
      iVar6 = FUN_10003cf0((int)param_1);
      if (iVar6 == 0) {
        uStackY_14 = 0x100049b4;
        FUN_10005392((int)param_1,&local_4018);
      }
      else {
        uStackY_14 = 0x100049a2;
        FUN_10004fba((int)param_1,(int *)&local_4018);
      }
    }
    if (0x400 < local_4018) {
      local_4018 = 0x400;
    }
    for (local_4028 = 0; local_4028 < local_4018; local_4028 = local_4028 + 1) {
      local_403c = local_403c + auStackY_400c[local_4028 * 4 + 1];
    }
    local_4028 = 0;
    FUN_10004e1b(param_1);
    pvVar2 = FUN_10001000(0x18);
    *param_1 = (int)pvVar2;
    *(undefined4 *)*param_1 = 0;
    *(undefined4 *)(*param_1 + 0x14) = 0;
    *(undefined4 *)(*param_1 + 8) = 0;
    *(undefined4 *)(*param_1 + 0xc) = 0;
    if (0xff < local_403c / (int)piVar3) {
      local_403c = (int)piVar3 * 0xff;
    }
    local_402c = 0;
    local_4030 = piVar3;
    while ((int)piVar3 <= local_403c) {
      piVar4 = (int *)0x10004acb;
      pvVar2 = FUN_10001000(0x10);
      piVar4[3] = (int)pvVar2;
      *(undefined4 *)(piVar4[3] + 0xc) = 0;
      piVar4[1] = local_402c;
      *piVar4 = 0;
      if (local_8 == (int *)0x0) {
        piVar4[2] = 0;
      }
      else {
        piVar4[2] = auStackY_400c[local_4028 * 4 + 1] - (int)local_8;
      }
      local_4038 = piVar4[3];
      while (piVar5 = local_8, local_4030 != (int *)0x0) {
        if (local_8 == (int *)0x0) {
          *(uint *)(local_4038 + 4) = auStackY_400c[local_4028 * 4];
          if ((int *)auStackY_400c[local_4028 * 4 + 1] < local_4030) {
            local_8 = (int *)0x0;
            piVar5 = (int *)auStackY_400c[local_4028 * 4 + 1];
          }
          else {
            local_8 = (int *)(auStackY_400c[local_4028 * 4 + 1] - (int)local_4030);
            piVar5 = local_4030;
          }
        }
        else {
          *(uint *)(local_4038 + 4) =
               (auStackY_400c[local_4028 * 4] + auStackY_400c[local_4028 * 4 + 1]) - (int)local_8;
          if ((int)local_8 < (int)local_4030) {
            local_8 = (int *)0x0;
          }
          else {
            local_8 = (int *)((int)local_8 - (int)local_4030);
            piVar5 = local_4030;
          }
        }
        *(int **)(local_4038 + 8) = piVar5;
        *piVar4 = *piVar4 + 1;
        iVar6 = 0;
        uStackY_14 = *(undefined4 *)(local_4038 + 4);
        iStackY_18 = local_402c;
        piStackY_1c = param_1;
        uStackY_20 = 0x10004c54;
        (*(code *)param_1[0x43e])();
        local_4030 = (int *)((int)local_4030 - iVar6);
        local_403c = local_403c - *(int *)(local_4038 + 8);
        if (local_4030 == (int *)0x0) {
          if (local_403c < (int)piVar3) {
            piVar4 = *(int **)(local_4038 + 8);
            uStackY_14 = *(undefined4 *)(local_4038 + 4);
            iStackY_18 = local_402c;
            piStackY_1c = param_1;
            uStackY_20 = 0x10004cec;
            (*(code *)param_1[0x43e])();
          }
          else {
            piVar4 = *(int **)(local_4038 + 8);
            uStackY_14 = *(undefined4 *)(local_4038 + 4);
            iStackY_18 = local_402c;
            piStackY_1c = param_1;
            uStackY_20 = 0x10004cbd;
            (*(code *)param_1[0x43e])();
          }
          param_1[param_1[0xe] + 0x37] = local_402c;
          param_1[0xe] = param_1[0xe] + 1;
        }
        else {
          piVar4 = (int *)0x10004d1a;
          pvVar2 = FUN_10001000(0x10);
          *(void **)(local_4038 + 0xc) = pvVar2;
          local_4038 = *(int *)(local_4038 + 0xc);
          *(undefined4 *)(local_4038 + 0xc) = 0;
        }
        if (local_8 == (int *)0x0) {
          local_4028 = local_4028 + 1;
        }
        local_402c = local_402c + 1;
      }
      if ((int)piVar3 <= local_403c) {
        iVar6 = 0x10004d7d;
        pvVar2 = FUN_10001000(0x18);
        *(void **)(iVar6 + 0x14) = pvVar2;
        *(undefined4 *)(*(int *)(iVar6 + 0x14) + 0x14) = 0;
      }
      local_4030 = (int *)((param_1[0xb] * param_1[10] + param_1[0x16]) * param_1[0xd]);
    }
    param_1[0xe] = param_1[0xe] + -1;
    if (((local_4030 != (int *)0x0) && (0x1000000 < (int)local_4030)) &&
       ((int)local_4030 <= param_1[9])) {
      FUN_100044e2(param_1);
    }
    uVar1 = 1;
  }
  return uVar1;
}



/* ================================================================
 * Function: FUN_10004e1b
 * Address:  10004e1b
 * ================================================================ */

undefined4 FUN_10004e1b(undefined4 *param_1)

{
  undefined *puVar1;
  undefined *local_8;
  
  local_8 = (undefined *)*param_1;
  while (local_8 != (undefined *)0x0) {
    while (*(int *)(local_8 + 0xc) != 0) {
      puVar1 = *(undefined **)(local_8 + 0xc);
      *(undefined4 *)(local_8 + 0xc) = *(undefined4 *)(*(int *)(local_8 + 0xc) + 0xc);
      FUN_1000104b(puVar1);
    }
    puVar1 = *(undefined **)(local_8 + 0x14);
    FUN_1000104b(local_8);
    local_8 = puVar1;
  }
  *param_1 = 0;
  return 1;
}



/* ================================================================
 * Function: FUN_10004e89
 * Address:  10004e89
 * ================================================================ */

uint FUN_10004e89(int param_1)

{
  int iVar1;
  undefined1 local_2c [12];
  int local_20;
  int local_1c;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = 0;
  switch(*(undefined4 *)(param_1 + 0x80)) {
  case 1:
    FUN_1000551a(param_1,(int)local_2c);
    break;
  case 2:
  case 4:
    FUN_100054ac(param_1,(int)local_2c);
    break;
  case 3:
    FUN_10005584(param_1,(int)local_2c);
  }
  if (local_10 != 0) {
    local_8 = local_8 | 0x100;
  }
  if (local_c != 0) {
    local_8 = local_8 | 0x80;
  }
  if ((((*(int *)(param_1 + 0x34) == 1) && (local_20 == 0)) && (local_1c != 0)) &&
     (*(int *)(param_1 + 8) == 0)) {
    local_20 = local_1c;
  }
  if (local_20 != 0) {
    if (*(int *)(param_1 + 4) == 3) {
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + local_20 * *(int *)(param_1 + 0x34);
    }
    if ((*(int *)(param_1 + 4) == 2) && (iVar1 = FUN_10003fa7(param_1), iVar1 != 0)) {
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + local_20 * *(int *)(param_1 + 0x34);
      local_8 = local_8 | 0x10;
    }
  }
  if ((*(int *)(param_1 + 4) == 3) && (*(int *)(param_1 + 8) != 0)) {
    local_8 = local_8 | 0x10;
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_10004fba
 * Address:  10004fba
 * ================================================================ */

BOOL FUN_10004fba(int param_1,int *param_2)

{
  BOOL BVar1;
  DWORD local_2040;
  int local_203c;
  undefined1 local_2038 [24];
  int local_2020;
  undefined4 local_201c;
  int local_2014;
  int local_2008 [2041];
  
  FUN_10007600();
  BVar1 = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    for (local_203c = 0; local_203c < 0x400; local_203c = local_203c + 1) {
      local_2008[local_203c * 2 + 1] = 0;
    }
    local_203c = 0;
    if (*(int *)(param_1 + 0x8c) == 0) {
      local_2008[0x7f8] = 0x10005146;
      BVar1 = DeviceIoControl(*(HANDLE *)(param_1 + 0x14),0xc350644c,local_2038,0x18,&local_2020,
                              0x18,&local_2040,(LPOVERLAPPED)0x0);
      if (BVar1 != 0) {
        param_2[3] = local_2020;
        param_2[4] = local_2014 << 0xc;
        *param_2 = 1;
        if (*(int *)(param_1 + 0x9c) == 0) {
          *(int *)(param_1 + 0x20) = local_2020;
          *(undefined4 *)(param_1 + 0x1c) = local_201c;
          *(int *)(param_1 + 0x24) = local_2014 << 0xc;
          FUN_10004458(param_1);
          BVar1 = param_1;
        }
      }
    }
    else {
      local_2008[0x7f8] = 0x10005069;
      DeviceIoControl(*(HANDLE *)(param_1 + 0x14),0x80002009,(LPVOID)(param_1 + 0x94),4,
                      *(LPVOID *)(param_1 + 0x90),*(DWORD *)(param_1 + 0x94),&local_2040,
                      (LPOVERLAPPED)0x0);
      local_2008[0x7f8] = 0x1000509f;
      BVar1 = DeviceIoControl(*(HANDLE *)(param_1 + 0x14),0x8000200c,local_2008,0x2000,local_2008,
                              0x2000,&local_2040,(LPOVERLAPPED)0x0);
      while ((local_2008[local_203c * 2 + 1] != 0 && (local_203c < 0x400))) {
        param_2[local_203c * 4 + 3] = local_2008[local_203c * 2];
        param_2[local_203c * 4 + 4] = local_2008[local_203c * 2 + 1];
        local_203c = local_203c + 1;
        *param_2 = local_203c;
      }
    }
  }
  return BVar1;
}



/* ================================================================
 * Function: FUN_100051b8
 * Address:  100051b8
 * ================================================================ */

BOOL FUN_100051b8(int param_1,uint *param_2)

{
  BOOL local_22b0;
  undefined1 local_22a8 [312];
  undefined4 local_2170;
  uint local_216c;
  DWORD local_2168;
  undefined1 local_2164 [4];
  uint local_2160;
  uint auStackY_214c [2048];
  undefined1 local_14c [4];
  int local_148;
  int local_13c;
  int local_138;
  undefined4 uStackY_2c;
  
  FUN_10007600();
  (**(code **)(param_1 + 0x1118))();
  if (*(int *)(param_1 + 0x8c) == 1) {
    uStackY_2c = 0x1000525a;
    local_22b0 = DeviceIoControl(*(HANDLE *)(param_1 + 0x14),0x9007,&stack0xfffffff0,0xc,local_2164,
                                 0x2018,&local_2168,(LPOVERLAPPED)0x0);
    for (local_216c = 0; local_216c < local_2160; local_216c = local_216c + 1) {
      param_2[local_216c * 4 + 3] = auStackY_214c[local_216c * 2];
      param_2[local_216c * 4 + 4] = auStackY_214c[local_216c * 2 + 1];
      *param_2 = local_2160;
    }
  }
  else {
    local_2170 = *(undefined4 *)(param_1 + 0x6c);
    uStackY_2c = 0x10005314;
    local_22b0 = DeviceIoControl(*(HANDLE *)(param_1 + 0x14),0x9005,local_22a8,0x13c,local_14c,0x13c
                                 ,&local_2168,(LPOVERLAPPED)0x0);
    if (local_22b0 != 0) {
      if (((local_13c != 0) && (local_138 != 0)) && (local_138 != -1)) {
        *(int *)(param_1 + 0x20) = local_138;
        *(int *)(param_1 + 0x1c) = local_13c;
        *(int *)(param_1 + 0x24) = local_148 << 0xc;
      }
      param_2[3] = *(uint *)(param_1 + 0x20);
      param_2[4] = *(uint *)(param_1 + 0x24);
      *param_2 = 1;
    }
  }
  return local_22b0;
}



/* ================================================================
 * Function: FUN_10005392
 * Address:  10005392
 * ================================================================ */

BOOL FUN_10005392(int param_1,undefined4 *param_2)

{
  BOOL BVar1;
  DWORD local_38;
  undefined1 local_34 [24];
  int local_1c;
  int local_18;
  int local_10;
  
  (**(code **)(param_1 + 0x1118))
            (param_1,0,
             (*(int *)(param_1 + 0x2c) * *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x58)) *
             *(int *)(param_1 + 0x34));
  BVar1 = DeviceIoControl(*(HANDLE *)(param_1 + 0x14),0xc350644c,local_34,0x18,&local_1c,0x18,
                          &local_38,(LPOVERLAPPED)0x0);
  if (*(int *)(param_1 + 0x9c) == 0) {
    if ((local_18 != 0) && (local_1c != 0)) {
      if (local_1c == -1) {
        param_2[3] = 0;
        param_2[4] = 0;
        *param_2 = 0;
        BVar1 = 0;
      }
      else {
        *(int *)(param_1 + 0x20) = local_1c;
        *(int *)(param_1 + 0x1c) = local_18;
        *(int *)(param_1 + 0x24) = local_10 << 0xc;
        FUN_10004458(param_1);
        param_2[3] = *(undefined4 *)(param_1 + 0x20);
        param_2[4] = *(undefined4 *)(param_1 + 0x24);
        *param_2 = 1;
      }
    }
  }
  else {
    param_2[3] = *(undefined4 *)(param_1 + 0x20);
    param_2[4] = *(undefined4 *)(param_1 + 0x24);
    *param_2 = 1;
  }
  return BVar1;
}



/* ================================================================
 * Function: FUN_100054ac
 * Address:  100054ac
 * ================================================================ */

BOOL FUN_100054ac(int param_1,int param_2)

{
  DWORD local_2c;
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  BOOL local_8;
  
  local_8 = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    local_8 = DeviceIoControl(*(HANDLE *)(param_1 + 0x14),0xc350a504,(LPVOID)0x0,0,local_28,0x20,
                              &local_2c,(LPOVERLAPPED)0x0);
    if (local_8 != 0) {
      *(undefined4 *)(param_2 + 0x10) = local_18;
      *(undefined4 *)(param_2 + 0xc) = local_20;
      *(undefined4 *)(param_2 + 0x20) = local_1c;
      *(undefined4 *)(param_2 + 0x1c) = local_24;
    }
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_1000551a
 * Address:  1000551a
 * ================================================================ */

BOOL FUN_1000551a(int param_1,int param_2)

{
  BOOL BVar1;
  undefined4 local_60 [4];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_3c;
  DWORD local_34;
  undefined1 local_30 [24];
  undefined4 local_18;
  undefined4 local_8;
  
  local_8 = *(undefined4 *)(param_1 + 0x6c);
  local_18 = 1;
  BVar1 = DeviceIoControl(*(HANDLE *)(param_1 + 0x14),0xb000,local_30,0x2c,local_60,0x2c,&local_34,
                          (LPOVERLAPPED)0x0);
  *(undefined4 *)(param_2 + 0x10) = local_3c;
  *(undefined4 *)(param_2 + 0xc) = local_60[0];
  *(undefined4 *)(param_2 + 0x20) = local_4c;
  *(undefined4 *)(param_2 + 0x1c) = local_50;
  return BVar1;
}



/* ================================================================
 * Function: FUN_10005584
 * Address:  10005584
 * ================================================================ */

BOOL FUN_10005584(int param_1,int param_2)

{
  BOOL BVar1;
  DWORD local_28;
  undefined1 local_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  BVar1 = DeviceIoControl(*(HANDLE *)(param_1 + 0x14),0xc350a504,(LPVOID)0x0,0,local_24,0x20,
                          &local_28,(LPOVERLAPPED)0x0);
  *(undefined4 *)(param_2 + 0x10) = local_14;
  *(undefined4 *)(param_2 + 0xc) = local_1c;
  *(undefined4 *)(param_2 + 0x20) = local_18;
  *(undefined4 *)(param_2 + 0x1c) = local_20;
  return BVar1;
}



/* ================================================================
 * Function: FUN_100055e0
 * Address:  100055e0
 * ================================================================ */

undefined4 FUN_100055e0(int param_1)

{
  *(undefined4 *)(param_1 + 0xd8) = 0;
  PIPP_SetLongParam(*(undefined4 *)(param_1 + 0x18),0x25,0xff);
  PIPP_SetLongParam(*(undefined4 *)(param_1 + 0x18),0x2f,0);
  PIPP_Enable_DMA_Communication(*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0xac) = 1;
  return 1;
}



/* ================================================================
 * Function: FUN_10005640
 * Address:  10005640
 * ================================================================ */

undefined4 FUN_10005640(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int local_48;
  undefined1 local_44 [4];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  undefined4 local_34;
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  uint local_10 [3];
  
  local_10[1] = 0;
  local_10[2] = 0;
  if (*(int *)(param_1 + 0xac) == 0) {
    uVar1 = 0;
  }
  else {
    PIPP_Diagnose_Interface
              (*(undefined4 *)(param_1 + 0x18),local_24,local_14,local_18,local_1c,local_20,local_30
               ,local_10,local_28,local_2c);
    if ((local_10[0] & 1) != 0) {
      *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 0x100;
    }
    if ((local_10[0] & 0x10) != 0) {
      *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 0x80;
      *(undefined4 *)(param_1 + 0xc4) = 1;
    }
    PIPP_SetLongParam(*(undefined4 *)(param_1 + 0x18),0x52,local_10[0]);
    if (*(int *)(param_1 + 4) == 3) {
      PIPP_UpLoad_PhyAdd(*(undefined4 *)(param_1 + 0x18),
                         *(undefined4 *)(param_1 + 0xdc + *(int *)(param_1 + 0xcc) * 4),local_3c,
                         local_44,&local_34);
      if (((*(uint *)(param_1 + 0xd8) & 0x80) == 0) && (*(int *)(param_1 + 0xc4) == 0)) {
        if ((local_34 & 1) != 0) {
          *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 0x10;
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + *(int *)(param_1 + 0x34);
          *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
          *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0xcc);
          if (*(int *)(param_1 + 0xcc) < *(int *)(param_1 + 0x38)) {
            *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 0xcc) + 1;
          }
          else {
            *(undefined4 *)(param_1 + 0xcc) = 0;
          }
        }
      }
      else {
        if (*(int *)(param_1 + 0xdc + *(int *)(param_1 + 0xcc) * 4) == *(int *)(param_1 + 0x38)) {
          local_48 = 0;
        }
        else {
          local_48 = *(int *)(param_1 + 0xcc) + 1;
        }
        PIPP_UpLoad_PhyAdd(*(undefined4 *)(param_1 + 0x18),
                           *(undefined4 *)(param_1 + 0xdc + local_48 * 4),local_38,local_40,
                           (int)&local_34 + 1);
        if (((local_34 & 1) != 0) && ((local_34 >> 8 & 1) != 0)) {
          if (*(int *)(param_1 + 0xcc) == *(int *)(param_1 + 200)) {
            *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 0x80;
            *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) & 0xffffffef;
          }
          else {
            *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 0x10;
            if (*(int *)(param_1 + 0xcc) < *(int *)(param_1 + 0x38)) {
              *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 0xcc) + 1;
            }
            else {
              *(undefined4 *)(param_1 + 0xcc) = 0;
            }
            *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + *(int *)(param_1 + 0x34);
            *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
          }
        }
      }
    }
    if ((*(int *)(param_1 + 4) == 2) && ((local_10[0] & 2) != 0)) {
      *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 0x10;
      iVar2 = FUN_10003fa7(param_1);
      if (iVar2 == 0) {
        local_10[2] = 1;
        if ((*(uint *)(param_1 + 0xd8) & 0x10) != 0) {
          *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) ^ 0x10;
        }
      }
      else {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + *(int *)(param_1 + 0x34);
      }
    }
    if ((local_10[2] == 0) && (*(int *)(param_1 + 8) != 0)) {
      *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 0x10;
    }
    uVar1 = *(undefined4 *)(param_1 + 0xd8);
  }
  return uVar1;
}



/* ================================================================
 * Function: FUN_100059c7
 * Address:  100059c7
 * ================================================================ */

undefined4 FUN_100059c7(int param_1,int *param_2)

{
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = *(int *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x8c) != 0) {
    local_8 = *(int *)(param_1 + 0x90);
  }
  if (*(int *)(param_1 + 4) == 3) {
    local_c = *(int *)(param_1 + 0x7c) * *(int *)(param_1 + 0x2c) * *(int *)(param_1 + 0x28) +
              *(int *)(param_1 + 0x58) * *(int *)(param_1 + 0x7c);
    if (*(int *)(param_1 + 0x5c) == 0) {
      local_c = local_c + *(int *)(param_1 + 0x58);
    }
    *param_2 = local_8 + local_c;
  }
  if (*(int *)(param_1 + 4) == 2) {
    if (*(uint *)(param_1 + 0x38) < *(uint *)(param_1 + 0x7c)) {
      *param_2 = 0;
    }
    else {
      *(undefined4 *)(param_1 + 8) = 0;
      local_c = *(int *)(param_1 + 0x7c) * *(int *)(param_1 + 0x2c) * *(int *)(param_1 + 0x28) +
                *(int *)(param_1 + 0x58) * *(int *)(param_1 + 0x7c);
      if (*(int *)(param_1 + 0x5c) == 0) {
        local_c = local_c + *(int *)(param_1 + 0x58);
      }
      *param_2 = local_8 + local_c;
    }
  }
  *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + -0x10;
  return 1;
}



/* ================================================================
 * Function: FUN_10005adf
 * Address:  10005adf
 * ================================================================ */

BOOL FUN_10005adf(undefined4 *param_1)

{
  uint uVar1;
  BOOL local_14;
  uint local_10;
  DWORD local_c;
  undefined4 *local_8;
  
  local_14 = 0;
  local_8 = (undefined4 *)*param_1;
  if (param_1[1] == 3) {
    uVar1 = param_1[0x20];
    if (uVar1 == 1) {
      local_14 = DeviceIoControl((HANDLE)param_1[5],0xb006,(LPVOID)0x0,0,(LPVOID)0x0,0,&local_c,
                                 (LPOVERLAPPED)0x0);
    }
    else if ((1 < uVar1) && (uVar1 < 5)) {
      local_14 = DeviceIoControl((HANDLE)param_1[5],0xc350a50c,(LPVOID)0x0,0,(LPVOID)0x0,0,&local_c,
                                 (LPOVERLAPPED)0x0);
    }
    if (param_1[2] != 0) {
      param_1[2] = param_1[2] + -1;
    }
    if (param_1[0x23] == 0) {
      for (local_10 = 0; local_10 < (uint)param_1[0x1f] / (uint)param_1[0xd];
          local_10 = local_10 + 1) {
        local_8 = (undefined4 *)local_8[5];
      }
      if (param_1[0xd] == 1) {
        FUN_1000400b((int)param_1,param_1[0x1f],*local_8);
      }
      else if ((param_1[0x1f] != 0) && ((param_1[0x1f] + 1) % (uint)param_1[0xd] == 0)) {
        FUN_1000400b((int)param_1,(uint)param_1[0x1f] / (uint)param_1[0xd],*local_8);
      }
    }
    else {
      for (local_10 = 0; local_10 < (uint)param_1[0x1f] / (uint)param_1[0xd];
          local_10 = local_10 + 1) {
        local_8 = (undefined4 *)local_8[5];
      }
      if (param_1[0xd] == 1) {
        FUN_1000400b((int)param_1,local_8[1],*local_8);
      }
      else if ((param_1[0x1f] != 0) && ((param_1[0x1f] + 1) % (uint)param_1[0xd] == 0)) {
        FUN_1000400b((int)param_1,local_8[1],*local_8);
      }
    }
    param_1[0x1f] = param_1[0x1f] + 1;
    if ((uint)((param_1[0xe] + 1) * param_1[0xd]) <= (uint)param_1[0x1f]) {
      param_1[0x1f] = 0;
    }
  }
  return local_14;
}



/* ================================================================
 * Function: FUN_10005cf0
 * Address:  10005cf0
 * ================================================================ */

undefined4 FUN_10005cf0(undefined4 param_1,int param_2)

{
  if (param_2 == 1) {
    DAT_100145d0 = param_1;
  }
  return 1;
}



/* ================================================================
 * Function: _PIDC_Destroy@4
 * Address:  10005d16
 * ================================================================ */

undefined4 _PIDC_Destroy_4(undefined *param_1)

{
                    /* 0x5d16  3  _PIDC_Destroy@4 */
  (**(code **)(param_1 + 0x10e8))(param_1);
  FUN_1000101c(param_1);
  return 0;
}



/* ================================================================
 * Function: _PIDC_Initialize@4
 * Address:  10005d35
 * ================================================================ */

void _PIDC_Initialize_4(int param_1)

{
                    /* 0x5d35  9  _PIDC_Initialize@4 */
  (**(code **)(param_1 + 0x10f4))(param_1);
  return;
}



/* ================================================================
 * Function: _PIDC_Disable@4
 * Address:  10005d49
 * ================================================================ */

undefined4 _PIDC_Disable_4(int param_1)

{
  undefined4 local_8;
  
                    /* 0x5d49  4  _PIDC_Disable@4 */
  local_8 = 0;
  if (param_1 != 0) {
    local_8 = (**(code **)(param_1 + 0x10f0))(param_1);
  }
  return local_8;
}



/* ================================================================
 * Function: _PIDC_Enable@4
 * Address:  10005d73
 * ================================================================ */

void _PIDC_Enable_4(int param_1)

{
                    /* 0x5d73  5  _PIDC_Enable@4 */
  (**(code **)(param_1 + 0x10ec))(param_1);
  return;
}



/* ================================================================
 * Function: _PIDC_SetPhysicalPort@8
 * Address:  10005d87
 * ================================================================ */

undefined4 _PIDC_SetPhysicalPort_8(int param_1)

{
  int local_400c [4093];
  undefined4 uStackY_18;
  
                    /* 0x5d87  12  _PIDC_SetPhysicalPort@8 */
  FUN_10007600();
  (**(code **)(param_1 + 0x113c))();
  if (*(int *)(param_1 + 0x80) == 4) {
    uStackY_18 = 0x10005dc1;
    FUN_10004fba(param_1,local_400c);
  }
  return 1;
}



/* ================================================================
 * Function: _PIDC_CheckData@8
 * Address:  10005dcc
 * ================================================================ */

undefined4 _PIDC_CheckData_8(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
                    /* 0x5dcc  1  _PIDC_CheckData@8 */
  uVar1 = (**(code **)(param_1 + 0x1108))(param_1,0);
  *param_2 = *(undefined4 *)(param_1 + 8);
  return uVar1;
}



/* ================================================================
 * Function: _PIDC_Create_datacollect_object@8
 * Address:  10005dfb
 * ================================================================ */

undefined4 * _PIDC_Create_datacollect_object_8(undefined4 param_1,undefined4 param_2)

{
  undefined4 *local_8;
  
                    /* 0x5dfb  2  _PIDC_Create_datacollect_object@8 */
  local_8 = FUN_10001000(0x1154);
  if (local_8 != (undefined4 *)0x0) {
    FUN_1000618f(local_8,param_2);
    switch(param_1) {
    case 2:
    case 4:
    case 8:
      FUN_100065cf((int)local_8);
      break;
    default:
      FUN_1000101c((undefined *)local_8);
      local_8 = (undefined4 *)0x0;
      break;
    case 7:
    case 0xf:
      FUN_10006056((int)local_8);
      break;
    case 0xb:
      FUN_100060c5((int)local_8);
      break;
    case 0x11:
      FUN_10006699((int)local_8);
      break;
    case 0x14:
      FUN_10006505((int)local_8);
      break;
    case 0x16:
      FUN_1000682d((int)local_8);
      break;
    case 0x17:
      FUN_10006763((int)local_8);
    }
  }
  return local_8;
}



/* ================================================================
 * Function: _PIDC_SetLongParam@12
 * Address:  10005ee8
 * ================================================================ */

void _PIDC_SetLongParam_12(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* 0x5ee8  11  _PIDC_SetLongParam@12 */
  (**(code **)(param_1 + 0x1140))(param_1,param_2,param_3);
  return;
}



/* ================================================================
 * Function: _PIDC_GetLongParam@12
 * Address:  10005f04
 * ================================================================ */

void _PIDC_GetLongParam_12(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* 0x5f04  6  _PIDC_GetLongParam@12 */
  (**(code **)(param_1 + 0x1144))(param_1,param_2,param_3);
  return;
}



/* ================================================================
 * Function: _PIDC_LockFrameData@8
 * Address:  10005f20
 * ================================================================ */

void _PIDC_LockFrameData_8(int param_1,undefined4 param_2)

{
                    /* 0x5f20  10  _PIDC_LockFrameData@8 */
  (**(code **)(param_1 + 0x10fc))(param_1,param_2);
  return;
}



/* ================================================================
 * Function: _PIDC_UnlockFrameData@8
 * Address:  10005f38
 * ================================================================ */

void _PIDC_UnlockFrameData_8(int param_1,undefined4 param_2)

{
                    /* 0x5f38  14  _PIDC_UnlockFrameData@8 */
  (**(code **)(param_1 + 0x1100))(param_1,param_2);
  return;
}



/* ================================================================
 * Function: _PIDC_SetUserEvent@24
 * Address:  10005f50
 * ================================================================ */

void _PIDC_SetUserEvent_24
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
                    /* 0x5f50  13  _PIDC_SetUserEvent@24 */
  (**(code **)(param_1 + 0x1138))(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



/* ================================================================
 * Function: _PIDC_Get_DLLVersionString@8
 * Address:  10005f78
 * ================================================================ */

int _PIDC_Get_DLLVersionString_8(int param_1,LPSTR param_2)

{
  undefined4 local_8;
  
                    /* 0x5f78  8  _PIDC_Get_DLLVersionString@8 */
  if (param_1 == 6) {
    local_8 = LoadStringA(DAT_100145d0,0x30,param_2,0x14);
  }
  else if (param_1 == 7) {
    local_8 = LoadStringA(DAT_100145d0,0x31,param_2,0x14);
  }
  else {
    local_8 = 0;
  }
  return local_8;
}



/* ================================================================
 * Function: _PIDC_Get_DLLVersion@8
 * Address:  10005fdd
 * ================================================================ */

int _PIDC_Get_DLLVersion_8(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte local_20 [24];
  byte *local_8;
  
                    /* 0x5fdd  7  _PIDC_Get_DLLVersion@8 */
  *param_2 = 0;
  iVar2 = _PIDC_Get_DLLVersionString_8(param_1,(LPSTR)local_20);
  if (iVar2 != 0) {
    local_8 = (byte *)FUN_100076ba(local_20,&DAT_10011144);
    while (local_8 != (byte *)0x0) {
      iVar1 = *param_2;
      iVar3 = FUN_1000762f(param_2,local_8);
      *param_2 = iVar1 * 100 + iVar3;
      local_8 = (byte *)FUN_100076ba((byte *)0x0,&DAT_10011144);
    }
  }
  return iVar2;
}



/* ================================================================
 * Function: FUN_10006056
 * Address:  10006056
 * ================================================================ */

void FUN_10006056(int param_1)

{
  *(code **)(param_1 + 0x10ec) = FUN_10001b30;
  *(code **)(param_1 + 0x10f0) = FUN_10001bbd;
  *(code **)(param_1 + 0x10f4) = FUN_10001c06;
  *(code **)(param_1 + 0x10fc) = FUN_10001c87;
  *(code **)(param_1 + 0x1108) = FUN_10001c5b;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 1;
  return;
}



/* ================================================================
 * Function: FUN_100060c5
 * Address:  100060c5
 * ================================================================ */

void FUN_100060c5(int param_1)

{
  *(code **)(param_1 + 0x10ec) = FUN_10003dcc;
  *(code **)(param_1 + 0x10f0) = FUN_10003eba;
  *(code **)(param_1 + 0x10f4) = FUN_10003f41;
  *(code **)(param_1 + 0x10f8) = FUN_10003f6b;
  *(code **)(param_1 + 0x1104) = FUN_10003f9e;
  *(code **)(param_1 + 0x1108) = FUN_10004e89;
  *(code **)(param_1 + 0x110c) = FUN_10003fa7;
  *(code **)(param_1 + 0x1110) = FUN_10003fd4;
  *(code **)(param_1 + 0x1114) = FUN_1000400b;
  *(code **)(param_1 + 0x1118) = FUN_10004042;
  *(code **)(param_1 + 0x10fc) = FUN_1000405f;
  *(code **)(param_1 + 0x1100) = FUN_10004162;
  *(code **)(param_1 + 0x112c) = FUN_100043bb;
  *(code **)(param_1 + 0x1150) = FUN_1000481a;
  *(code **)(param_1 + 0x10e8) = FUN_10003d51;
  return;
}



/* ================================================================
 * Function: FUN_1000618f
 * Address:  1000618f
 * ================================================================ */

void FUN_1000618f(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1000646e();
  param_1[0x20] = uVar1;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[4] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[10] = 0;
  param_1[0xd] = 1;
  param_1[0xe] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *param_1 = 0;
  param_1[0x2b] = 0;
  param_1[1] = param_2;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x43a] = FUN_10001060;
  param_1[0x43b] = FUN_10001067;
  param_1[0x43c] = FUN_1000107b;
  param_1[0x43d] = FUN_1000108f;
  param_1[0x43e] = FUN_100010a3;
  param_1[0x43f] = FUN_100018f9;
  param_1[0x440] = FUN_1000190e;
  param_1[0x441] = FUN_1000191a;
  param_1[0x442] = FUN_10001923;
  param_1[0x443] = FUN_10001930;
  param_1[0x444] = FUN_10001939;
  param_1[0x445] = FUN_10001942;
  param_1[0x446] = FUN_1000194b;
  param_1[0x447] = FUN_10001a07;
  param_1[0x448] = FUN_10001a1a;
  param_1[0x449] = FUN_10001a2d;
  param_1[1099] = FUN_10001a4d;
  param_1[0x44e] = FUN_10001952;
  param_1[0x44f] = FUN_100010b7;
  param_1[0x450] = FUN_100010fa;
  param_1[0x451] = FUN_10001491;
  param_1[0x452] = FUN_10001a59;
  param_1[0x453] = FUN_10001ac0;
  return;
}



/* ================================================================
 * Function: FUN_1000646e
 * Address:  1000646e
 * ================================================================ */

undefined4 FUN_1000646e(void)

{
  undefined4 local_9c;
  _OSVERSIONINFOA local_98;
  
  local_98.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_98);
  if ((local_98.dwPlatformId == 1) &&
     ((4 < local_98.dwMajorVersion ||
      ((local_98.dwMajorVersion == 4 && (local_98.dwMinorVersion != 0)))))) {
    local_9c = 1;
  }
  else if (local_98.dwPlatformId == 1) {
    local_9c = 1;
  }
  else if ((local_98.dwPlatformId == 2) && (local_98.dwMajorVersion == 4)) {
    local_9c = 3;
  }
  else {
    local_9c = 4;
  }
  return local_9c;
}



/* ================================================================
 * Function: FUN_10006505
 * Address:  10006505
 * ================================================================ */

void FUN_10006505(int param_1)

{
  *(code **)(param_1 + 0x10ec) = FUN_100055e0;
  *(code **)(param_1 + 0x10f0) = FUN_10003eba;
  *(code **)(param_1 + 0x10f4) = FUN_10003f41;
  *(code **)(param_1 + 0x10f8) = FUN_10003f6b;
  *(code **)(param_1 + 0x1104) = FUN_10003f9e;
  *(code **)(param_1 + 0x1108) = FUN_10005640;
  *(code **)(param_1 + 0x110c) = FUN_10003fa7;
  *(code **)(param_1 + 0x1110) = FUN_10003fd4;
  *(code **)(param_1 + 0x1114) = FUN_1000400b;
  *(code **)(param_1 + 0x1118) = FUN_10004042;
  *(code **)(param_1 + 0x10fc) = FUN_100059c7;
  *(code **)(param_1 + 0x1100) = FUN_10005adf;
  *(code **)(param_1 + 0x112c) = FUN_100043bb;
  *(code **)(param_1 + 0x1150) = FUN_1000481a;
  *(code **)(param_1 + 0x10e8) = FUN_10003d51;
  return;
}



/* ================================================================
 * Function: FUN_100065cf
 * Address:  100065cf
 * ================================================================ */

void FUN_100065cf(int param_1)

{
  *(code **)(param_1 + 0x10ec) = FUN_100036c0;
  *(code **)(param_1 + 0x10f0) = FUN_10003721;
  *(code **)(param_1 + 0x10f4) = FUN_1000376f;
  *(code **)(param_1 + 0x10f8) = FUN_10003a2c;
  *(code **)(param_1 + 0x1104) = FUN_10003a40;
  *(code **)(param_1 + 0x1108) = FUN_10003a49;
  *(code **)(param_1 + 0x110c) = FUN_10003cbf;
  *(code **)(param_1 + 0x10fc) = FUN_10003b6b;
  *(code **)(param_1 + 0x1100) = FUN_10003c3e;
  *(code **)(param_1 + 0x1150) = FUN_1000376f;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  return;
}



/* ================================================================
 * Function: FUN_10006699
 * Address:  10006699
 * ================================================================ */

void FUN_10006699(int param_1)

{
  *(code **)(param_1 + 0x10ec) = FUN_10002740;
  *(code **)(param_1 + 0x10f0) = FUN_10002779;
  *(code **)(param_1 + 0x10f4) = FUN_100027b2;
  *(code **)(param_1 + 0x10f8) = FUN_1000293a;
  *(code **)(param_1 + 0x1104) = FUN_1000294e;
  *(code **)(param_1 + 0x1108) = FUN_10002957;
  *(code **)(param_1 + 0x110c) = FUN_10002ab5;
  *(code **)(param_1 + 0x10fc) = FUN_100029d4;
  *(code **)(param_1 + 0x1100) = FUN_10002a83;
  *(code **)(param_1 + 0x1150) = FUN_100027b2;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  return;
}



/* ================================================================
 * Function: FUN_10006763
 * Address:  10006763
 * ================================================================ */

void FUN_10006763(int param_1)

{
  *(code **)(param_1 + 0x10ec) = FUN_1000691b;
  *(code **)(param_1 + 0x10f0) = FUN_10006953;
  *(code **)(param_1 + 0x10f4) = FUN_10006974;
  *(code **)(param_1 + 0x10f8) = FUN_10006a97;
  *(code **)(param_1 + 0x1104) = FUN_10006aab;
  *(code **)(param_1 + 0x1108) = FUN_10006ab4;
  *(code **)(param_1 + 0x110c) = FUN_10006dd1;
  *(code **)(param_1 + 0x10fc) = FUN_10006cd1;
  *(code **)(param_1 + 0x1100) = FUN_10006dbd;
  *(code **)(param_1 + 0x1150) = FUN_10006974;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  return;
}



/* ================================================================
 * Function: FUN_1000682d
 * Address:  1000682d
 * ================================================================ */

void FUN_1000682d(int param_1)

{
  *(code **)(param_1 + 0x10ec) = FUN_10002b0b;
  *(code **)(param_1 + 0x10f0) = FUN_10002bd5;
  *(code **)(param_1 + 0x10f4) = FUN_10002c2e;
  *(code **)(param_1 + 0x10f8) = FUN_10002dbe;
  *(code **)(param_1 + 0x1104) = FUN_10002dd2;
  *(code **)(param_1 + 0x1108) = FUN_10002ddb;
  *(code **)(param_1 + 0x110c) = FUN_100033cf;
  *(code **)(param_1 + 0x10fc) = FUN_10003264;
  *(code **)(param_1 + 0x1100) = FUN_100033a2;
  *(code **)(param_1 + 0x1150) = FUN_10002c2e;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  return;
}



/* ================================================================
 * Function: FUN_10006900
 * Address:  10006900
 * ================================================================ */

void FUN_10006900(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  PIPP_Input_Multiple(param_1,0,param_2,param_3);
  return;
}



/* ================================================================
 * Function: FUN_1000691b
 * Address:  1000691b
 * ================================================================ */

undefined4 FUN_1000691b(int param_1)

{
  *(undefined4 *)(param_1 + 0x10dc) = 0;
  *(undefined4 *)(param_1 + 0xac) = 1;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  return 0;
}



/* ================================================================
 * Function: FUN_10006953
 * Address:  10006953
 * ================================================================ */

undefined4 FUN_10006953(int param_1)

{
  *(undefined4 *)(param_1 + 0xac) = 0;
  return 0;
}



/* ================================================================
 * Function: FUN_10006974
 * Address:  10006974
 * ================================================================ */

bool FUN_10006974(int param_1)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 0x18) != 0;
  *(undefined4 *)(param_1 + 0x10e4) = 0;
  *(undefined4 *)(param_1 + 0x10dc) = 0;
  *(undefined4 *)(param_1 + 0x10dc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  if (((bVar1) && (*(int *)(param_1 + 0x8c) != 0)) && (*(int *)(param_1 + 0x2c) != 0)) {
    PIPP_SetLongParam(*(undefined4 *)(param_1 + 0x18),0x30,*(undefined4 *)(param_1 + 4));
    PIPP_SetLongParam(*(undefined4 *)(param_1 + 0x18),0x68,*(undefined4 *)(param_1 + 0x94));
    PIPP_SetLongParam(*(undefined4 *)(param_1 + 0x18),0xc,
                      *(int *)(param_1 + 0x2c) * *(int *)(param_1 + 0x28));
    PIPP_SetLongParam(*(undefined4 *)(param_1 + 0x18),0x20,*(undefined4 *)(param_1 + 0x90));
    PIPP_SetLongParam(*(undefined4 *)(param_1 + 0x18),0x6a,*(undefined4 *)(param_1 + 0x3c));
    PIPP_SetLongParam(*(undefined4 *)(param_1 + 0x18),0x6b,*(undefined4 *)(param_1 + 0x40));
    PIPP_Initialize(*(undefined4 *)(param_1 + 0x18));
    bVar1 = true;
  }
  return bVar1;
}



/* ================================================================
 * Function: FUN_10006a97
 * Address:  10006a97
 * ================================================================ */

undefined4 FUN_10006a97(void)

{
  return 0;
}



/* ================================================================
 * Function: FUN_10006aab
 * Address:  10006aab
 * ================================================================ */

undefined4 FUN_10006aab(void)

{
  return 0;
}



/* ================================================================
 * Function: FUN_10006ab4
 * Address:  10006ab4
 * ================================================================ */

/* WARNING: Removing unreachable block (ram,0x10006caf) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10006ab4(int param_1)

{
  bool bVar1;
  int local_14;
  int local_10;
  uint local_8;
  
  local_14 = 0;
  bVar1 = false;
  if (*(int *)(param_1 + 0x2c) * *(int *)(param_1 + 0x28) != 0) {
    *(uint *)(param_1 + 0x38) =
         *(uint *)(param_1 + 0x94) / (uint)(*(int *)(param_1 + 0x2c) * *(int *)(param_1 + 0x28));
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    *(undefined4 *)(param_1 + 0x38) = 1;
  }
  if ((*(int *)(param_1 + 0x8c) == 0) || (*(int *)(param_1 + 0x90) == 0)) {
    local_10 = 0;
  }
  else {
    local_10 = *(int *)(param_1 + 0x90);
  }
  if (local_10 != 0) {
    local_14 = FUN_10006900(*(undefined4 *)(param_1 + 0x18),
                            local_10 +
                            *(int *)(param_1 + 0x7c) * *(int *)(param_1 + 0x2c) *
                            *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x10dc),
                            *(int *)(param_1 + 0x2c) * *(int *)(param_1 + 0x28) -
                            *(int *)(param_1 + 0x10dc));
  }
  if (local_14 == 0) {
    if ((*(int *)(param_1 + 0x10dc) != 0) &&
       (DAT_10014258 = GetTickCount(), 20000 < DAT_10014258 - _DAT_10014254)) {
      bVar1 = true;
    }
  }
  else {
    _DAT_10014254 = GetTickCount();
  }
  *(int *)(param_1 + 0x10dc) = *(int *)(param_1 + 0x10dc) + local_14;
  if ((*(int *)(param_1 + 0x10dc) < *(int *)(param_1 + 0x2c) * *(int *)(param_1 + 0x28)) ||
     (*(int *)(param_1 + 0x10dc) == 0)) {
    local_8 = 0;
    if (bVar1) {
      local_8 = 0x80;
    }
  }
  else {
    local_8 = 0x10;
    *(int *)(param_1 + 8) =
         *(int *)(param_1 + 8) +
         *(int *)(param_1 + 0x10dc) / (*(int *)(param_1 + 0x2c) * *(int *)(param_1 + 0x28));
    *(int *)(param_1 + 0x10dc) =
         *(int *)(param_1 + 0x10dc) % (*(int *)(param_1 + 0x2c) * *(int *)(param_1 + 0x28));
    if ((*(uint *)(param_1 + 0x38) < *(uint *)(param_1 + 8)) && (*(int *)(param_1 + 0x10e4) == 0)) {
      *(undefined4 *)(param_1 + 0x10e4) = 1;
    }
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_10006cd1
 * Address:  10006cd1
 * ================================================================ */

/* WARNING: Removing unreachable block (ram,0x10006d82) */

undefined4 FUN_10006cd1(int param_1,int *param_2)

{
  if (*(int *)(param_1 + 4) == 2) {
    if (*(uint *)(param_1 + 0x7c) < *(uint *)(param_1 + 0x38)) {
      *param_2 = *(int *)(param_1 + 0x90) + *(int *)(param_1 + 0x7c) * *(int *)(param_1 + 0x2c) * 2;
    }
    else {
      *param_2 = 0;
    }
    *(undefined4 *)(param_1 + 8) = 0;
  }
  else {
    if (*(uint *)(param_1 + 0x7c) < *(uint *)(param_1 + 0x38)) {
      *param_2 = *(int *)(param_1 + 0x90) + *(int *)(param_1 + 0x7c) * *(int *)(param_1 + 0x2c) * 2;
    }
    else {
      *param_2 = 0;
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  }
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 0x7c);
  *(uint *)(param_1 + 0x7c) = (*(int *)(param_1 + 0x7c) + 1U) % *(uint *)(param_1 + 0x38);
  return 1;
}



/* ================================================================
 * Function: FUN_10006dbd
 * Address:  10006dbd
 * ================================================================ */

undefined4 FUN_10006dbd(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_10006dd1
 * Address:  10006dd1
 * ================================================================ */

undefined4 FUN_10006dd1(int param_1)

{
  return *(undefined4 *)(param_1 + 0x7c);
}



/* ================================================================
 * Function: _malloc
 * Address:  10006dde
 * ================================================================ */

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_10014278);
  return pvVar1;
}



/* ================================================================
 * Function: __nh_malloc
 * Address:  10006df0
 * ================================================================ */

/* Library Function - Single Match
    __nh_malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl __nh_malloc(size_t _Size,int _NhFlag)

{
  void *pvVar1;
  int iVar2;
  
  if (_Size < 0xffffffe1) {
    do {
      pvVar1 = (void *)FUN_10006e1c((uint *)_Size);
      if (pvVar1 != (void *)0x0) {
        return pvVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = FUN_10007907(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}



/* ================================================================
 * Function: FUN_10006e1c
 * Address:  10006e1c
 * ================================================================ */

void __cdecl FUN_10006e1c(uint *param_1)

{
  int *piVar1;
  uint dwBytes;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000fa78;
  puStack_10 = &LAB_10008c14;
  local_14 = ExceptionList;
  if (DAT_10015974 == 3) {
    ExceptionList = &local_14;
    if (param_1 <= DAT_1001596c) {
      ExceptionList = &local_14;
      FUN_10008aa6(9);
      local_8 = 0;
      piVar1 = FUN_10007f38(param_1);
      local_8 = 0xffffffff;
      FUN_10006e83();
      if (piVar1 != (int *)0x0) {
        ExceptionList = local_14;
        return;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    if (DAT_10015974 == 2) {
      if (param_1 == (uint *)0x0) {
        dwBytes = 0x10;
      }
      else {
        dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
      }
      ExceptionList = &local_14;
      if (dwBytes <= DAT_1001319c) {
        ExceptionList = &local_14;
        FUN_10008aa6(9);
        local_8 = 1;
        piVar1 = FUN_100086e5(dwBytes >> 4);
        local_8 = 0xffffffff;
        FUN_10006ee2();
        if (piVar1 != (int *)0x0) {
          ExceptionList = local_14;
          return;
        }
      }
      goto LAB_10006efb;
    }
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
LAB_10006efb:
  HeapAlloc(DAT_10015970,0,dwBytes);
  ExceptionList = local_14;
  return;
}



/* ================================================================
 * Function: FUN_10006e83
 * Address:  10006e83
 * ================================================================ */

void FUN_10006e83(void)

{
  FUN_10008b07(9);
  return;
}



/* ================================================================
 * Function: FUN_10006ee2
 * Address:  10006ee2
 * ================================================================ */

void FUN_10006ee2(void)

{
  FUN_10008b07(9);
  return;
}



/* ================================================================
 * Function: FUN_10006f18
 * Address:  10006f18
 * ================================================================ */

void __cdecl FUN_10006f18(undefined *param_1)

{
  uint *puVar1;
  int local_2c;
  uint *local_28;
  uint local_24;
  uint *local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000fa90;
  puStack_10 = &LAB_10008c14;
  local_14 = ExceptionList;
  if (param_1 == (undefined *)0x0) {
    return;
  }
  if (DAT_10015974 == 3) {
    ExceptionList = &local_14;
    FUN_10008aa6(9);
    local_8 = 0;
    local_20 = (uint *)FUN_10007be4((int)param_1);
    if (local_20 != (uint *)0x0) {
      FUN_10007c0f(local_20,(int)param_1);
    }
    local_8 = 0xffffffff;
    FUN_10006f82();
    puVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_10015974 != 2) goto LAB_10006fe4;
    ExceptionList = &local_14;
    FUN_10008aa6(9);
    local_8 = 1;
    local_28 = (uint *)FUN_10008649(param_1,&local_2c,&local_24);
    if (local_28 != (uint *)0x0) {
      FUN_100086a0(local_2c,local_24,(byte *)local_28);
    }
    local_8 = 0xffffffff;
    FUN_10006fda();
    puVar1 = local_28;
  }
  if (puVar1 != (uint *)0x0) {
    ExceptionList = local_14;
    return;
  }
LAB_10006fe4:
  HeapFree(DAT_10015970,0,param_1);
  ExceptionList = local_14;
  return;
}



/* ================================================================
 * Function: FUN_10006f82
 * Address:  10006f82
 * ================================================================ */

void FUN_10006f82(void)

{
  FUN_10008b07(9);
  return;
}



/* ================================================================
 * Function: FUN_10006fda
 * Address:  10006fda
 * ================================================================ */

void FUN_10006fda(void)

{
  FUN_10008b07(9);
  return;
}



/* ================================================================
 * Function: FUN_10007010
 * Address:  10007010
 * ================================================================ */

undefined4 * __cdecl FUN_10007010(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_100071c7_caseD_2;
        case 3:
          goto switchD_100071c7_caseD_3;
        }
        goto switchD_100071c7_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_100071c7_caseD_0;
      case 1:
        goto switchD_100071c7_caseD_1;
      case 2:
        goto switchD_100071c7_caseD_2;
      case 3:
        goto switchD_100071c7_caseD_3;
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
              goto switchD_100071c7_caseD_2;
            case 3:
              goto switchD_100071c7_caseD_3;
            }
            goto switchD_100071c7_caseD_1;
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
              goto switchD_100071c7_caseD_2;
            case 3:
              goto switchD_100071c7_caseD_3;
            }
            goto switchD_100071c7_caseD_1;
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
              goto switchD_100071c7_caseD_2;
            case 3:
              goto switchD_100071c7_caseD_3;
            }
            goto switchD_100071c7_caseD_1;
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
switchD_100071c7_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_100071c7_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_100071c7_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_100071c7_caseD_0:
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
        goto switchD_10007045_caseD_2;
      case 3:
        goto switchD_10007045_caseD_3;
      }
      goto switchD_10007045_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10007045_caseD_0;
    case 1:
      goto switchD_10007045_caseD_1;
    case 2:
      goto switchD_10007045_caseD_2;
    case 3:
      goto switchD_10007045_caseD_3;
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
            goto switchD_10007045_caseD_2;
          case 3:
            goto switchD_10007045_caseD_3;
          }
          goto switchD_10007045_caseD_1;
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
            goto switchD_10007045_caseD_2;
          case 3:
            goto switchD_10007045_caseD_3;
          }
          goto switchD_10007045_caseD_1;
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
            goto switchD_10007045_caseD_2;
          case 3:
            goto switchD_10007045_caseD_3;
          }
          goto switchD_10007045_caseD_1;
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
switchD_10007045_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10007045_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10007045_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10007045_caseD_0:
  return param_1;
}



/* ================================================================
 * Function: FUN_10007350
 * Address:  10007350
 * ================================================================ */

void FUN_10007350(void)

{
  float10 in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  FUN_10008fa8(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  FUN_1000736d(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  return;
}



/* ================================================================
 * Function: FUN_10007364
 * Address:  10007364
 * ================================================================ */

uint __thiscall FUN_10007364(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint extraout_EAX;
  undefined1 in_ZF;
  ushort in_FPUControlWord;
  undefined4 unaff_retaddr;
  
  __fload_withFB(this,(int)&param_1);
  if ((bool)in_ZF) {
    if (((param_2 & 0xfffff) != 0) || (param_1 != 0)) {
      uVar2 = FUN_10008f4c();
      goto LAB_100073eb;
    }
    uVar2 = 0;
    uVar1 = param_2 & 0x80000000;
joined_r0x100073dc:
    if (uVar1 == 0) {
LAB_1000738e:
      if (DAT_1001425c != 0) {
        return uVar2;
      }
      uVar2 = __math_exit(&DAT_10011150,5,unaff_retaddr,param_1,param_2);
      return uVar2;
    }
  }
  else {
    uVar2 = param_2;
    if (in_FPUControlWord != 0x27f) {
      uVar2 = FUN_10008f35();
    }
    if ((uVar2 & 0x80000000) == 0) goto LAB_1000738e;
    if (((uVar2 & 0x7ff00000) == 0) && (uVar1 = param_1, (uVar2 & 0xfffff) == 0))
    goto joined_r0x100073dc;
  }
  uVar2 = 1;
LAB_100073eb:
  if (DAT_1001425c != 0) {
    return uVar2;
  }
  __startOneArgErrorHandling(&DAT_10011150,5,in_FPUControlWord,unaff_retaddr,param_1,param_2);
  return extraout_EAX;
}



/* ================================================================
 * Function: FUN_1000736d
 * Address:  1000736d
 * ================================================================ */

uint __cdecl FUN_1000736d(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint extraout_EAX;
  bool in_ZF;
  ushort in_FPUControlWord;
  undefined4 unaff_retaddr;
  
  if (in_ZF) {
    if (((param_2 & 0xfffff) != 0) || (param_1 != 0)) {
      uVar2 = FUN_10008f4c();
      goto LAB_100073eb;
    }
    uVar2 = 0;
    uVar1 = param_2 & 0x80000000;
joined_r0x100073dc:
    if (uVar1 == 0) {
LAB_1000738e:
      if (DAT_1001425c != 0) {
        return uVar2;
      }
      uVar2 = __math_exit(&DAT_10011150,5,unaff_retaddr,param_1,param_2);
      return uVar2;
    }
  }
  else {
    uVar2 = param_2;
    if (in_FPUControlWord != 0x27f) {
      uVar2 = FUN_10008f35();
    }
    if ((uVar2 & 0x80000000) == 0) goto LAB_1000738e;
    if (((uVar2 & 0x7ff00000) == 0) && (uVar1 = param_1, (uVar2 & 0xfffff) == 0))
    goto joined_r0x100073dc;
  }
  uVar2 = 1;
LAB_100073eb:
  if (DAT_1001425c != 0) {
    return uVar2;
  }
  __startOneArgErrorHandling(&DAT_10011150,5,in_FPUControlWord,unaff_retaddr,param_1,param_2);
  return extraout_EAX;
}



/* ================================================================
 * Function: FUN_1000740a
 * Address:  1000740a
 * ================================================================ */

int __cdecl FUN_1000740a(int param_1)

{
  if (param_1 < 0) {
    param_1 = -param_1;
  }
  return param_1;
}



/* ================================================================
 * Function: _rand
 * Address:  10007415
 * ================================================================ */

/* Library Function - Single Match
    _rand
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release */

int __cdecl _rand(void)

{
  DWORD *pDVar1;
  uint uVar2;
  
  pDVar1 = FUN_10009131();
  uVar2 = pDVar1[5] * 0x343fd + 0x269ec3;
  pDVar1[5] = uVar2;
  return uVar2 >> 0x10 & 0x7fff;
}



/* ================================================================
 * Function: FUN_10007437
 * Address:  10007437
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007437(void)

{
  void *extraout_ECX;
  
  FUN_1000744f();
  _DAT_10014260 = FUN_10009288();
  FUN_10009238(extraout_ECX);
  return;
}



/* ================================================================
 * Function: FUN_1000744f
 * Address:  1000744f
 * ================================================================ */

void FUN_1000744f(void)

{
  PTR___fptrap_100132a8 = &LAB_1000930b;
  PTR___fptrap_100132a4 = __cfltcvt;
  PTR___fptrap_100132ac = __fassign;
  PTR___fptrap_100132b0 = FUN_100092b1;
  PTR___fptrap_100132b4 = &LAB_10009359;
  PTR___fptrap_100132b8 = __cfltcvt;
  return;
}



/* ================================================================
 * Function: __ftol
 * Address:  10007488
 * ================================================================ */

/* Library Function - Single Match
    __ftol
   
   Library: Visual Studio */

longlong __ftol(void)

{
  float10 in_ST0;
  
  return (longlong)ROUND(in_ST0);
}



/* ================================================================
 * Function: FUN_100074af
 * Address:  100074af
 * ================================================================ */

int __cdecl FUN_100074af(undefined1 *param_1,byte *param_2)

{
  int iVar1;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_1c = param_1;
  local_24 = param_1;
  local_18 = 0x42;
  local_20 = 0x7fffffff;
  iVar1 = FUN_100097ef((int *)&local_24,param_2,(undefined4 *)&stack0x0000000c);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_100096d7(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar1;
}



/* ================================================================
 * Function: FUN_10007510
 * Address:  10007510
 * ================================================================ */

uint * __cdecl FUN_10007510(uint *param_1,uint *param_2)

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
    if (bVar1 == 0) goto LAB_100075f8;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_100075f8:
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
 * Function: FUN_10007520
 * Address:  10007520
 * ================================================================ */

uint * __cdecl FUN_10007520(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_1000753c;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_1000756f;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x1000758b;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_1000753c:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x1000758b;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x1000758b;
    }
  }
LAB_1000756f:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x1000758b:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_100075f8:
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
    if (bVar1 == 0) goto LAB_100075f8;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}



/* ================================================================
 * Function: FUN_10007600
 * Address:  10007600
 * ================================================================ */

/* WARNING: Unable to track spacebase fully for stack */

void FUN_10007600(void)

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
 * Function: FUN_1000762f
 * Address:  1000762f
 * ================================================================ */

int __thiscall FUN_1000762f(void *this,byte *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  undefined *puVar6;
  
  while( true ) {
    if (DAT_100134d0 < 2) {
      uVar1 = (byte)PTR_DAT_100132c4[(uint)*param_1 * 2] & 8;
      this = PTR_DAT_100132c4;
    }
    else {
      puVar6 = (undefined *)0x8;
      uVar1 = FUN_10009ff9(this,(uint)*param_1,8);
      this = puVar6;
    }
    if (uVar1 == 0) break;
    param_1 = param_1 + 1;
  }
  uVar1 = (uint)*param_1;
  pbVar5 = param_1 + 1;
  if ((uVar1 == 0x2d) || (uVar4 = uVar1, uVar1 == 0x2b)) {
    uVar4 = (uint)*pbVar5;
    pbVar5 = param_1 + 2;
  }
  iVar3 = 0;
  while( true ) {
    if (DAT_100134d0 < 2) {
      uVar2 = (byte)PTR_DAT_100132c4[uVar4 * 2] & 4;
    }
    else {
      puVar6 = (undefined *)0x4;
      uVar2 = FUN_10009ff9(this,uVar4,4);
      this = puVar6;
    }
    if (uVar2 == 0) break;
    iVar3 = (uVar4 - 0x30) + iVar3 * 10;
    uVar4 = (uint)*pbVar5;
    pbVar5 = pbVar5 + 1;
  }
  if (uVar1 == 0x2d) {
    iVar3 = -iVar3;
  }
  return iVar3;
}



/* ================================================================
 * Function: FUN_100076ba
 * Address:  100076ba
 * ================================================================ */

uint __cdecl FUN_100076ba(byte *param_1,byte *param_2)

{
  byte bVar1;
  DWORD *pDVar2;
  int iVar3;
  byte *pbVar4;
  byte local_24 [32];
  
  pDVar2 = FUN_10009131();
  pbVar4 = local_24;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    pbVar4[0] = 0;
    pbVar4[1] = 0;
    pbVar4[2] = 0;
    pbVar4[3] = 0;
    pbVar4 = pbVar4 + 4;
  }
  do {
    bVar1 = *param_2;
    local_24[bVar1 >> 3] = local_24[bVar1 >> 3] | '\x01' << (bVar1 & 7);
    param_2 = param_2 + 1;
  } while (bVar1 != 0);
  if (param_1 == (byte *)0x0) {
    param_1 = (byte *)pDVar2[6];
  }
  for (; (bVar1 = *param_1, pbVar4 = param_1, (local_24[bVar1 >> 3] & (byte)(1 << (bVar1 & 7))) != 0
         && (bVar1 != 0)); param_1 = param_1 + 1) {
  }
  do {
    bVar1 = *pbVar4;
    if (bVar1 == 0) {
LAB_10007749:
      pDVar2[6] = (DWORD)pbVar4;
      return -(uint)(param_1 != pbVar4) & (uint)param_1;
    }
    if ((local_24[bVar1 >> 3] & (byte)(1 << (bVar1 & 7))) != 0) {
      *pbVar4 = 0;
      pbVar4 = pbVar4 + 1;
      goto LAB_10007749;
    }
    pbVar4 = pbVar4 + 1;
  } while( true );
}



/* ================================================================
 * Function: FUN_1000775e
 * Address:  1000775e
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1000775e(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_100142ec = GetVersion();
    iVar1 = FUN_10007a97(1);
    if (iVar1 != 0) {
      _DAT_100142f8 = DAT_100142ec >> 8 & 0xff;
      _DAT_100142f4 = DAT_100142ec & 0xff;
      DAT_100142ec = DAT_100142ec >> 0x10;
      _DAT_100142f0 = _DAT_100142f4 * 0x100 + _DAT_100142f8;
      iVar1 = FUN_100090ac();
      if (iVar1 != 0) {
        DAT_10015978 = GetCommandLineA();
        DAT_10014268 = FUN_1000a6d8();
        FUN_1000a1c2();
        FUN_1000a48b();
        FUN_1000a3d2();
        FUN_1000a0a4();
        DAT_10014264 = DAT_10014264 + 1;
        goto LAB_10007831;
      }
      FUN_10007af4();
    }
LAB_100077be:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_10014264 < 1) goto LAB_100077be;
      DAT_10014264 = DAT_10014264 + -1;
      if (DAT_10014324 == 0) {
        FUN_1000a0e2();
      }
      FUN_1000a37e();
      FUN_10009100();
      FUN_10007af4();
    }
    else if (param_2 == 3) {
      FUN_10009198((undefined *)0x0);
    }
LAB_10007831:
    uVar2 = 1;
  }
  return uVar2;
}



/* ================================================================
 * Function: entry
 * Address:  10007837
 * ================================================================ */

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_10014264;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_1000787f;
    if ((DAT_1001597c != (code *)0x0) &&
       (iVar2 = (*DAT_1001597c)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_1000775e(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_1000787f:
  iVar2 = FUN_10005cf0(param_1,param_2);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_1000775e(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_1000775e(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_1001597c != (code *)0x0) {
      iVar2 = (*DAT_1001597c)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}



/* ================================================================
 * Function: __amsg_exit
 * Address:  100078d4
 * ================================================================ */

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_10014270 == 1) || ((DAT_10014270 == 0 && (DAT_10014274 == 1)))) {
    FUN_1000a80a();
  }
  FUN_1000a843(param_1);
  (*(code *)PTR___exit_10011170)(0xff);
  return;
}



/* ================================================================
 * Function: FUN_10007907
 * Address:  10007907
 * ================================================================ */

undefined4 __cdecl FUN_10007907(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_1001427c != (code *)0x0) {
    iVar1 = (*DAT_1001427c)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



/* ================================================================
 * Function: FUN_10007922
 * Address:  10007922
 * ================================================================ */

void __cdecl FUN_10007922(undefined4 *param_1)

{
  int iVar1;
  HMODULE pHVar2;
  
  *param_1 = 0;
  pHVar2 = GetModuleHandleA((LPCSTR)0x0);
  if (((short)pHVar2->unused == 0x5a4d) && (iVar1 = pHVar2[0xf].unused, iVar1 != 0)) {
    *(undefined1 *)param_1 = *(undefined1 *)((int)&pHVar2[6].unused + iVar1 + 2);
    *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)&pHVar2[6].unused + iVar1 + 3);
  }
  return;
}



/* ================================================================
 * Function: FUN_1000794f
 * Address:  1000794f
 * ================================================================ */

int FUN_1000794f(void)

{
  char cVar1;
  byte bVar2;
  BOOL BVar3;
  DWORD DVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  byte *this;
  byte unaff_BL;
  char local_1230 [4240];
  char local_1a0 [260];
  DWORD local_9c;
  uint local_98;
  DWORD local_8c;
  CHAR aCStackY_18 [4];
  
  FUN_10007600();
  local_9c = 0x94;
  BVar3 = GetVersionExA((LPOSVERSIONINFOA)&local_9c);
  if (((BVar3 == 0) || (local_8c != 2)) || (local_98 < 5)) {
    aCStackY_18[0] = -0x57;
    aCStackY_18[1] = 'y';
    aCStackY_18[2] = '\0';
    aCStackY_18[3] = '\x10';
    DVar4 = GetEnvironmentVariableA("__MSVCRT_HEAP_SELECT",local_1230,0x1090);
    if (DVar4 != 0) {
      pcVar7 = local_1230;
      while (local_1230[0] != '\0') {
        cVar1 = *pcVar7;
        if (('`' < cVar1) && (cVar1 < '{')) {
          *pcVar7 = cVar1 + -0x20;
        }
        pcVar7 = pcVar7 + 1;
        local_1230[0] = *pcVar7;
      }
      aCStackY_18[0] = -0x19;
      aCStackY_18[1] = 'y';
      aCStackY_18[2] = '\0';
      aCStackY_18[3] = '\x10';
      iVar5 = _strncmp("__GLOBAL_HEAP_SELECTED",local_1230,0x16);
      if (iVar5 == 0) {
        pcVar7 = local_1230;
      }
      else {
        aCStackY_18[0] = '\t';
        aCStackY_18[1] = 'z';
        aCStackY_18[2] = '\0';
        aCStackY_18[3] = '\x10';
        GetModuleFileNameA((HMODULE)0x0,local_1a0,0x104);
        pcVar7 = local_1a0;
        while (local_1a0[0] != '\0') {
          cVar1 = *pcVar7;
          if (('`' < cVar1) && (cVar1 < '{')) {
            *pcVar7 = cVar1 + -0x20;
          }
          pcVar7 = pcVar7 + 1;
          local_1a0[0] = *pcVar7;
        }
        pcVar7 = _strstr(local_1230,local_1a0);
      }
      if ((pcVar7 != (char *)0x0) && (pcVar7 = _strchr(pcVar7,0x2c), pcVar7 != (char *)0x0)) {
        pbVar6 = (byte *)(pcVar7 + 1);
        bVar2 = *pbVar6;
        this = pbVar6;
        while (bVar2 != 0) {
          if (*this == 0x3b) {
            *this = 0;
          }
          else {
            this = this + 1;
          }
          bVar2 = *this;
        }
        aCStackY_18[0] = 'o';
        aCStackY_18[1] = 'z';
        aCStackY_18[2] = '\0';
        aCStackY_18[3] = '\x10';
        iVar5 = FUN_1000a996(this,pbVar6,(int *)0x0,(void *)0xa);
        if (iVar5 == 2) {
          return 2;
        }
        if (iVar5 == 3) {
          return 3;
        }
        if (iVar5 == 1) {
          return 1;
        }
      }
    }
    FUN_10007922((undefined4 *)&stack0xfffffff8);
    iVar5 = 3 - (uint)(unaff_BL < 6);
  }
  else {
    iVar5 = 1;
  }
  return iVar5;
}



/* ================================================================
 * Function: FUN_10007a97
 * Address:  10007a97
 * ================================================================ */

undefined4 __cdecl FUN_10007a97(int param_1)

{
  undefined **ppuVar1;
  
  DAT_10015970 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_10015970 != (HANDLE)0x0) {
    DAT_10015974 = FUN_1000794f();
    if (DAT_10015974 == 3) {
      ppuVar1 = (undefined **)FUN_10007b9c(0x3f8);
    }
    else {
      if (DAT_10015974 != 2) {
        return 1;
      }
      ppuVar1 = FUN_100083ed();
    }
    if (ppuVar1 != (undefined **)0x0) {
      return 1;
    }
    HeapDestroy(DAT_10015970);
  }
  return 0;
}



/* ================================================================
 * Function: FUN_10007af4
 * Address:  10007af4
 * ================================================================ */

void FUN_10007af4(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  
  if (DAT_10015974 == 3) {
    iVar1 = 0;
    if (0 < DAT_10015964) {
      puVar2 = (undefined4 *)((int)DAT_10015968 + 0xc);
      do {
        VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
        VirtualFree((LPVOID)*puVar2,0,0x8000);
        HeapFree(DAT_10015970,0,(LPVOID)puVar2[1]);
        puVar2 = puVar2 + 5;
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_10015964);
    }
    HeapFree(DAT_10015970,0,DAT_10015968);
  }
  else if (DAT_10015974 == 2) {
    ppuVar3 = &PTR_LOOP_10011178;
    do {
      if (ppuVar3[4] != (undefined *)0x0) {
        VirtualFree(ppuVar3[4],0,0x8000);
      }
      ppuVar3 = (undefined **)*ppuVar3;
    } while (ppuVar3 != &PTR_LOOP_10011178);
  }
  HeapDestroy(DAT_10015970);
  return;
}



/* ================================================================
 * Function: FUN_10007b9c
 * Address:  10007b9c
 * ================================================================ */

undefined4 __cdecl FUN_10007b9c(undefined4 param_1)

{
  DAT_10015968 = HeapAlloc(DAT_10015970,0,0x140);
  if (DAT_10015968 == (LPVOID)0x0) {
    return 0;
  }
  DAT_10015960 = 0;
  DAT_10015964 = 0;
  DAT_1001595c = DAT_10015968;
  DAT_1001596c = param_1;
  DAT_10015954 = 0x10;
  return 1;
}



/* ================================================================
 * Function: FUN_10007be4
 * Address:  10007be4
 * ================================================================ */

uint __cdecl FUN_10007be4(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_10015968;
  while( true ) {
    if (DAT_10015968 + DAT_10015964 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}



/* ================================================================
 * Function: FUN_10007c0f
 * Address:  10007c0f
 * ================================================================ */

void __cdecl FUN_10007c0f(uint *param_1,int param_2)

{
  char *pcVar1;
  uint *puVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint local_8;
  
  uVar5 = param_1[4];
  puVar12 = (uint *)(param_2 + -4);
  uVar14 = param_2 - param_1[3] >> 0xf;
  piVar3 = (int *)(uVar14 * 0x204 + 0x144 + uVar5);
  uVar13 = *puVar12;
  local_8 = uVar13 - 1;
  if ((local_8 & 1) == 0) {
    uVar6 = *(uint *)(local_8 + (int)puVar12);
    uVar7 = *(uint *)(param_2 + -8);
    if ((uVar6 & 1) == 0) {
      uVar9 = ((int)uVar6 >> 4) - 1;
      if (0x3f < uVar9) {
        uVar9 = 0x3f;
      }
      if (*(int *)((int)puVar12 + uVar13 + 3) == *(int *)((int)puVar12 + uVar13 + 7)) {
        if (uVar9 < 0x20) {
          pcVar1 = (char *)(uVar9 + 4 + uVar5);
          uVar9 = ~(0x80000000U >> ((byte)uVar9 & 0x1f));
          puVar10 = (uint *)(uVar5 + 0x44 + uVar14 * 4);
          *puVar10 = *puVar10 & uVar9;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            *param_1 = *param_1 & uVar9;
          }
        }
        else {
          pcVar1 = (char *)(uVar9 + 4 + uVar5);
          uVar9 = ~(0x80000000U >> ((byte)uVar9 - 0x20 & 0x1f));
          puVar10 = (uint *)(uVar5 + 0xc4 + uVar14 * 4);
          *puVar10 = *puVar10 & uVar9;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            param_1[1] = param_1[1] & uVar9;
          }
        }
      }
      local_8 = local_8 + uVar6;
      *(undefined4 *)(*(int *)((int)puVar12 + uVar13 + 7) + 4) =
           *(undefined4 *)((int)puVar12 + uVar13 + 3);
      *(undefined4 *)(*(int *)((int)puVar12 + uVar13 + 3) + 8) =
           *(undefined4 *)((int)puVar12 + uVar13 + 7);
    }
    puVar10 = (uint *)(((int)local_8 >> 4) - 1);
    if ((uint *)0x3f < puVar10) {
      puVar10 = (uint *)0x3f;
    }
    puVar11 = param_1;
    if ((uVar7 & 1) == 0) {
      puVar12 = (uint *)((int)puVar12 - uVar7);
      puVar11 = (uint *)(((int)uVar7 >> 4) - 1);
      if ((uint *)0x3f < puVar11) {
        puVar11 = (uint *)0x3f;
      }
      local_8 = local_8 + uVar7;
      puVar10 = (uint *)(((int)local_8 >> 4) - 1);
      if ((uint *)0x3f < puVar10) {
        puVar10 = (uint *)0x3f;
      }
      if (puVar11 != puVar10) {
        if (puVar12[1] == puVar12[2]) {
          if (puVar11 < (uint *)0x20) {
            uVar13 = ~(0x80000000U >> ((byte)puVar11 & 0x1f));
            puVar2 = (uint *)(uVar5 + 0x44 + uVar14 * 4);
            *puVar2 = *puVar2 & uVar13;
            pcVar1 = (char *)((int)puVar11 + uVar5 + 4);
            *pcVar1 = *pcVar1 + -1;
            if (*pcVar1 == '\0') {
              *param_1 = *param_1 & uVar13;
            }
          }
          else {
            uVar13 = ~(0x80000000U >> ((byte)puVar11 - 0x20 & 0x1f));
            puVar2 = (uint *)(uVar5 + 0xc4 + uVar14 * 4);
            *puVar2 = *puVar2 & uVar13;
            pcVar1 = (char *)((int)puVar11 + uVar5 + 4);
            *pcVar1 = *pcVar1 + -1;
            if (*pcVar1 == '\0') {
              param_1[1] = param_1[1] & uVar13;
            }
          }
        }
        *(uint *)(puVar12[2] + 4) = puVar12[1];
        *(uint *)(puVar12[1] + 8) = puVar12[2];
      }
    }
    if (((uVar7 & 1) != 0) || (puVar11 != puVar10)) {
      puVar12[1] = piVar3[(int)puVar10 * 2 + 1];
      puVar12[2] = (uint)(piVar3 + (int)puVar10 * 2);
      (piVar3 + (int)puVar10 * 2)[1] = (int)puVar12;
      *(uint **)(puVar12[1] + 8) = puVar12;
      if (puVar12[1] == puVar12[2]) {
        cVar4 = *(char *)((int)puVar10 + uVar5 + 4);
        *(char *)((int)puVar10 + uVar5 + 4) = cVar4 + '\x01';
        bVar8 = (byte)puVar10;
        if (puVar10 < (uint *)0x20) {
          if (cVar4 == '\0') {
            *param_1 = *param_1 | 0x80000000U >> (bVar8 & 0x1f);
          }
          puVar10 = (uint *)(uVar5 + 0x44 + uVar14 * 4);
          *puVar10 = *puVar10 | 0x80000000U >> (bVar8 & 0x1f);
        }
        else {
          if (cVar4 == '\0') {
            param_1[1] = param_1[1] | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
          }
          puVar10 = (uint *)(uVar5 + 0xc4 + uVar14 * 4);
          *puVar10 = *puVar10 | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
        }
      }
    }
    *puVar12 = local_8;
    *(uint *)((local_8 - 4) + (int)puVar12) = local_8;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      if (DAT_10015960 != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_10015958 * 0x8000 + DAT_10015960[3]),0x8000,0x4000);
        DAT_10015960[2] = DAT_10015960[2] | 0x80000000U >> ((byte)DAT_10015958 & 0x1f);
        *(undefined4 *)(DAT_10015960[4] + 0xc4 + DAT_10015958 * 4) = 0;
        *(char *)(DAT_10015960[4] + 0x43) = *(char *)(DAT_10015960[4] + 0x43) + -1;
        if (*(char *)(DAT_10015960[4] + 0x43) == '\0') {
          DAT_10015960[1] = DAT_10015960[1] & 0xfffffffe;
        }
        if (DAT_10015960[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_10015960[3],0,0x8000);
          HeapFree(DAT_10015970,0,(LPVOID)DAT_10015960[4]);
          FUN_1000ad50(DAT_10015960,DAT_10015960 + 5,
                       (DAT_10015964 * 0x14 - (int)DAT_10015960) + -0x14 + DAT_10015968);
          DAT_10015964 = DAT_10015964 + -1;
          if (DAT_10015960 < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_1001595c = DAT_10015968;
        }
      }
      DAT_10015960 = param_1;
      DAT_10015958 = uVar14;
    }
  }
  return;
}



/* ================================================================
 * Function: FUN_10007f38
 * Address:  10007f38
 * ================================================================ */

int * __cdecl FUN_10007f38(uint *param_1)

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
  
  puVar8 = DAT_10015968 + DAT_10015964 * 5;
  uVar6 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar7 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar5 = (byte)iVar7;
  param_1 = DAT_1001595c;
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
  puVar11 = DAT_10015968;
  if (param_1 == puVar8) {
    for (; (puVar11 < DAT_1001595c && ((puVar11[1] & local_c) == 0 && (*puVar11 & local_10) == 0));
        puVar11 = puVar11 + 5) {
    }
    param_1 = puVar11;
    if (puVar11 == DAT_1001595c) {
      for (; (puVar11 < puVar8 && (puVar11[2] == 0)); puVar11 = puVar11 + 5) {
      }
      puVar12 = DAT_10015968;
      param_1 = puVar11;
      if (puVar11 == puVar8) {
        for (; (puVar12 < DAT_1001595c && (puVar12[2] == 0)); puVar12 = puVar12 + 5) {
        }
        param_1 = puVar12;
        if ((puVar12 == DAT_1001595c) && (param_1 = FUN_10008241(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar7 = FUN_100082f2((int)param_1);
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
  DAT_1001595c = param_1;
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
    if (iVar9 == 0) goto LAB_100081fe;
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
LAB_100081fe:
  piVar10 = (int *)((int)piVar10 + iVar9);
  *piVar10 = uVar6 + 1;
  *(uint *)((int)piVar10 + (uVar6 - 4)) = uVar6 + 1;
  iVar7 = *piVar2;
  *piVar2 = iVar7 + 1;
  if (((iVar7 == 0) && (param_1 == DAT_10015960)) && (local_8 == DAT_10015958)) {
    DAT_10015960 = (uint *)0x0;
  }
  *piVar4 = local_8;
  return piVar10 + 1;
}



/* ================================================================
 * Function: FUN_10008241
 * Address:  10008241
 * ================================================================ */

undefined4 * FUN_10008241(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_10015964 == DAT_10015954) {
    pvVar2 = HeapReAlloc(DAT_10015970,0,DAT_10015968,(DAT_10015954 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_10015954 = DAT_10015954 + 0x10;
    DAT_10015968 = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_10015968 + DAT_10015964 * 0x14);
  pvVar2 = HeapAlloc(DAT_10015970,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_10015964 = DAT_10015964 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_10015970,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}



/* ================================================================
 * Function: FUN_100082f2
 * Address:  100082f2
 * ================================================================ */

int __cdecl FUN_100082f2(int param_1)

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
 * Function: FUN_100083ed
 * Address:  100083ed
 * ================================================================ */

undefined ** FUN_100083ed(void)

{
  bool bVar1;
  int *lpAddress;
  LPVOID pvVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined **lpMem;
  
  if (DAT_10011188 == -1) {
    lpMem = &PTR_LOOP_10011178;
  }
  else {
    lpMem = HeapAlloc(DAT_10015970,0,0x2020);
    if (lpMem == (undefined **)0x0) {
      return (undefined **)0x0;
    }
  }
  lpAddress = VirtualAlloc((LPVOID)0x0,0x400000,0x2000,4);
  if (lpAddress != (int *)0x0) {
    pvVar2 = VirtualAlloc(lpAddress,0x10000,0x1000,4);
    if (pvVar2 != (LPVOID)0x0) {
      if (lpMem == &PTR_LOOP_10011178) {
        if (PTR_LOOP_10011178 == (undefined *)0x0) {
          PTR_LOOP_10011178 = (undefined *)&PTR_LOOP_10011178;
        }
        if (PTR_LOOP_1001117c == (undefined *)0x0) {
          PTR_LOOP_1001117c = (undefined *)&PTR_LOOP_10011178;
        }
      }
      else {
        *lpMem = (undefined *)&PTR_LOOP_10011178;
        lpMem[1] = PTR_LOOP_1001117c;
        PTR_LOOP_1001117c = (undefined *)lpMem;
        *(undefined ***)lpMem[1] = lpMem;
      }
      lpMem[5] = (undefined *)(lpAddress + 0x100000);
      ppuVar3 = lpMem + 6;
      lpMem[3] = (undefined *)(lpMem + 0x26);
      lpMem[4] = (undefined *)lpAddress;
      lpMem[2] = (undefined *)ppuVar3;
      iVar4 = 0;
      do {
        bVar1 = 0xf < iVar4;
        iVar4 = iVar4 + 1;
        *ppuVar3 = (undefined *)((bVar1 - 1 & 0xf1) - 1);
        ppuVar3[1] = (undefined *)0xf1;
        ppuVar3 = ppuVar3 + 2;
      } while (iVar4 < 0x400);
      _memset(lpAddress,0,0x10000);
      for (; lpAddress < lpMem[4] + 0x10000; lpAddress = lpAddress + 0x400) {
        *(undefined1 *)(lpAddress + 0x3e) = 0xff;
        *lpAddress = (int)(lpAddress + 2);
        lpAddress[1] = 0xf0;
      }
      return lpMem;
    }
    VirtualFree(lpAddress,0,0x8000);
  }
  if (lpMem != &PTR_LOOP_10011178) {
    HeapFree(DAT_10015970,0,lpMem);
  }
  return (undefined **)0x0;
}



/* ================================================================
 * Function: FUN_10008531
 * Address:  10008531
 * ================================================================ */

void __cdecl FUN_10008531(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_10013198 == param_1) {
    PTR_LOOP_10013198 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_10011178) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_10015970,0,param_1);
    return;
  }
  DAT_10011188 = 0xffffffff;
  return;
}



/* ================================================================
 * Function: FUN_10008587
 * Address:  10008587
 * ================================================================ */

void __cdecl FUN_10008587(int param_1)

{
  BOOL BVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  int local_8;
  
  ppuVar4 = (undefined **)PTR_LOOP_1001117c;
  do {
    ppuVar5 = ppuVar4;
    if (ppuVar4[4] != (undefined *)0xffffffff) {
      local_8 = 0;
      ppuVar5 = ppuVar4 + 0x804;
      iVar3 = 0x3ff000;
      do {
        if (*ppuVar5 == (undefined *)0xf0) {
          BVar1 = VirtualFree(ppuVar4[4] + iVar3,0x1000,0x4000);
          if (BVar1 != 0) {
            *ppuVar5 = (undefined *)0xffffffff;
            DAT_10014280 = DAT_10014280 + -1;
            if (((undefined **)ppuVar4[3] == (undefined **)0x0) || (ppuVar5 < ppuVar4[3])) {
              ppuVar4[3] = (undefined *)ppuVar5;
            }
            local_8 = local_8 + 1;
            param_1 = param_1 + -1;
            if (param_1 == 0) break;
          }
        }
        iVar3 = iVar3 + -0x1000;
        ppuVar5 = ppuVar5 + -2;
      } while (-1 < iVar3);
      ppuVar5 = (undefined **)ppuVar4[1];
      if ((local_8 != 0) && (ppuVar4[6] == (undefined *)0xffffffff)) {
        ppuVar2 = ppuVar4 + 8;
        iVar3 = 1;
        do {
          if (*ppuVar2 != (undefined *)0xffffffff) break;
          iVar3 = iVar3 + 1;
          ppuVar2 = ppuVar2 + 2;
        } while (iVar3 < 0x400);
        if (iVar3 == 0x400) {
          FUN_10008531(ppuVar4);
        }
      }
    }
    if ((ppuVar5 == (undefined **)PTR_LOOP_1001117c) || (ppuVar4 = ppuVar5, param_1 < 1)) {
      return;
    }
  } while( true );
}



/* ================================================================
 * Function: FUN_10008649
 * Address:  10008649
 * ================================================================ */

int __cdecl FUN_10008649(undefined *param_1,undefined4 *param_2,uint *param_3)

{
  undefined **ppuVar1;
  uint uVar2;
  
  ppuVar1 = &PTR_LOOP_10011178;
  while ((param_1 <= ppuVar1[4] || (ppuVar1[5] <= param_1))) {
    ppuVar1 = (undefined **)*ppuVar1;
    if (ppuVar1 == &PTR_LOOP_10011178) {
      return 0;
    }
  }
  if (((uint)param_1 & 0xf) != 0) {
    return 0;
  }
  if (((uint)param_1 & 0xfff) < 0x100) {
    return 0;
  }
  *param_2 = ppuVar1;
  uVar2 = (uint)param_1 & 0xfffff000;
  *param_3 = uVar2;
  return ((int)(param_1 + (-0x100 - uVar2)) >> 4) + 8 + uVar2;
}



/* ================================================================
 * Function: FUN_100086a0
 * Address:  100086a0
 * ================================================================ */

void __cdecl FUN_100086a0(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x18 + (param_2 - *(int *)(param_1 + 0x10) >> 0xc) * 8);
  *piVar1 = *piVar1 + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_10014280 = DAT_10014280 + 1, DAT_10014280 == 0x20)) {
    FUN_10008587(0x10);
  }
  return;
}



/* ================================================================
 * Function: FUN_100086e5
 * Address:  100086e5
 * ================================================================ */

/* WARNING: Type propagation algorithm not settling */

int * __cdecl FUN_100086e5(uint param_1)

{
  uint *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  int *piVar4;
  int *piVar5;
  undefined **ppuVar6;
  int *piVar7;
  uint *puVar8;
  undefined **ppuVar9;
  int local_8;
  
  piVar7 = (int *)PTR_LOOP_10013198;
  do {
    if (piVar7[4] != -1) {
      puVar8 = (uint *)piVar7[2];
      piVar4 = (int *)(((int)puVar8 + (-0x18 - (int)piVar7) >> 3) * 0x1000 + piVar7[4]);
      if (puVar8 < piVar7 + 0x806) {
        do {
          if (((int)param_1 <= (int)*puVar8) && (param_1 < puVar8[1])) {
            piVar5 = (int *)FUN_100088ed(piVar4,*puVar8,param_1);
            if (piVar5 != (int *)0x0) goto LAB_100087b0;
            puVar8[1] = param_1;
          }
          puVar8 = puVar8 + 2;
          piVar4 = piVar4 + 0x400;
        } while (puVar8 < piVar7 + 0x806);
      }
      puVar1 = (uint *)piVar7[2];
      piVar4 = (int *)piVar7[4];
      for (puVar8 = (uint *)(piVar7 + 6); puVar8 < puVar1; puVar8 = puVar8 + 2) {
        if (((int)param_1 <= (int)*puVar8) && (param_1 < puVar8[1])) {
          piVar5 = (int *)FUN_100088ed(piVar4,*puVar8,param_1);
          if (piVar5 != (int *)0x0) {
LAB_100087b0:
            PTR_LOOP_10013198 = (undefined *)piVar7;
            *puVar8 = *puVar8 - param_1;
            piVar7[2] = (int)puVar8;
            return piVar5;
          }
          puVar8[1] = param_1;
        }
        piVar4 = piVar4 + 0x400;
      }
    }
    piVar7 = (int *)*piVar7;
    if (piVar7 == (int *)PTR_LOOP_10013198) {
      ppuVar9 = &PTR_LOOP_10011178;
      while ((ppuVar9[4] == (undefined *)0xffffffff || (ppuVar9[3] == (undefined *)0x0))) {
        ppuVar9 = (undefined **)*ppuVar9;
        if (ppuVar9 == &PTR_LOOP_10011178) {
          ppuVar9 = FUN_100083ed();
          if (ppuVar9 == (undefined **)0x0) {
            return (int *)0x0;
          }
          piVar7 = (int *)ppuVar9[4];
          *(char *)(piVar7 + 2) = (char)param_1;
          PTR_LOOP_10013198 = (undefined *)ppuVar9;
          *piVar7 = (int)piVar7 + param_1 + 8;
          piVar7[1] = 0xf0 - param_1;
          ppuVar9[6] = ppuVar9[6] + -(param_1 & 0xff);
          return piVar7 + 0x40;
        }
      }
      ppuVar2 = (undefined **)ppuVar9[3];
      local_8 = 0;
      piVar7 = (int *)(ppuVar9[4] + ((int)ppuVar2 + (-0x18 - (int)ppuVar9) >> 3) * 0x1000);
      puVar3 = *ppuVar2;
      ppuVar6 = ppuVar2;
      for (; (puVar3 == (undefined *)0xffffffff && (local_8 < 0x10)); local_8 = local_8 + 1) {
        ppuVar6 = ppuVar6 + 2;
        puVar3 = *ppuVar6;
      }
      piVar4 = VirtualAlloc(piVar7,local_8 << 0xc,0x1000,4);
      if (piVar4 != piVar7) {
        return (int *)0x0;
      }
      _memset(piVar7,local_8 << 0xc,0);
      ppuVar6 = ppuVar2;
      if (0 < local_8) {
        piVar4 = piVar7 + 1;
        do {
          *(undefined1 *)(piVar4 + 0x3d) = 0xff;
          piVar4[-1] = (int)(piVar4 + 1);
          *piVar4 = 0xf0;
          *ppuVar6 = (undefined *)0xf0;
          ppuVar6[1] = (undefined *)0xf1;
          piVar4 = piVar4 + 0x400;
          ppuVar6 = ppuVar6 + 2;
          local_8 = local_8 + -1;
        } while (local_8 != 0);
      }
      for (; (ppuVar6 < ppuVar9 + 0x806 && (*ppuVar6 != (undefined *)0xffffffff));
          ppuVar6 = ppuVar6 + 2) {
      }
      PTR_LOOP_10013198 = (undefined *)ppuVar9;
      ppuVar9[3] = (undefined *)(-(uint)(ppuVar6 < ppuVar9 + 0x806) & (uint)ppuVar6);
      *(char *)(piVar7 + 2) = (char)param_1;
      ppuVar9[2] = (undefined *)ppuVar2;
      *ppuVar2 = *ppuVar2 + -param_1;
      piVar7[1] = piVar7[1] - param_1;
      *piVar7 = (int)piVar7 + param_1 + 8;
      return piVar7 + 0x40;
    }
  } while( true );
}



/* ================================================================
 * Function: FUN_100088ed
 * Address:  100088ed
 * ================================================================ */

int __cdecl FUN_100088ed(int *param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  
  pbVar2 = (byte *)*param_1;
  pbVar1 = (byte *)(param_1 + 0x3e);
  bVar3 = (byte)param_3;
  if ((uint)param_1[1] < param_3) {
    pbVar6 = pbVar2;
    if (pbVar2[param_1[1]] != 0) {
      pbVar6 = pbVar2 + param_1[1];
    }
    while( true ) {
      while( true ) {
        if (pbVar1 <= pbVar6 + param_3) {
          pbVar6 = (byte *)(param_1 + 2);
          while( true ) {
            while( true ) {
              if (pbVar2 <= pbVar6) {
                return 0;
              }
              if (pbVar1 <= pbVar6 + param_3) {
                return 0;
              }
              if (*pbVar6 == 0) break;
              pbVar6 = pbVar6 + *pbVar6;
            }
            uVar5 = 1;
            pbVar4 = pbVar6;
            while (pbVar4 = pbVar4 + 1, *pbVar4 == 0) {
              uVar5 = uVar5 + 1;
            }
            if (param_3 <= uVar5) break;
            param_2 = param_2 - uVar5;
            pbVar6 = pbVar4;
            if (param_2 < param_3) {
              return 0;
            }
          }
          if (pbVar6 + param_3 < pbVar1) {
            *param_1 = (int)(pbVar6 + param_3);
            param_1[1] = uVar5 - param_3;
          }
          else {
            param_1[1] = 0;
            *param_1 = (int)(param_1 + 2);
          }
          *pbVar6 = bVar3;
          pbVar2 = pbVar6 + 8;
          goto LAB_10008a00;
        }
        if (*pbVar6 == 0) break;
        pbVar6 = pbVar6 + *pbVar6;
      }
      uVar5 = 1;
      pbVar4 = pbVar6;
      while (pbVar4 = pbVar4 + 1, *pbVar4 == 0) {
        uVar5 = uVar5 + 1;
      }
      if (param_3 <= uVar5) break;
      if (pbVar6 == pbVar2) {
        param_1[1] = uVar5;
        pbVar6 = pbVar4;
      }
      else {
        param_2 = param_2 - uVar5;
        pbVar6 = pbVar4;
        if (param_2 < param_3) {
          return 0;
        }
      }
    }
    if (pbVar6 + param_3 < pbVar1) {
      *param_1 = (int)(pbVar6 + param_3);
      param_1[1] = uVar5 - param_3;
    }
    else {
      param_1[1] = 0;
      *param_1 = (int)(param_1 + 2);
    }
    *pbVar6 = bVar3;
    pbVar2 = pbVar6 + 8;
  }
  else {
    *pbVar2 = bVar3;
    if (pbVar2 + param_3 < pbVar1) {
      *param_1 = *param_1 + param_3;
      param_1[1] = param_1[1] - param_3;
    }
    else {
      param_1[1] = 0;
      *param_1 = (int)(param_1 + 2);
    }
    pbVar2 = pbVar2 + 8;
  }
LAB_10008a00:
  return (int)pbVar2 * 0x10 + (int)param_1 * -0xf;
}



/* ================================================================
 * Function: FUN_10008a11
 * Address:  10008a11
 * ================================================================ */

void FUN_10008a11(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100131e4);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100131d4);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100131c4);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100131a4);
  return;
}



/* ================================================================
 * Function: FUN_10008a3a
 * Address:  10008a3a
 * ================================================================ */

void FUN_10008a3a(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_100131a0;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_100131e4)) && (ppuVar1 != &PTR_DAT_100131d4)) &&
       ((ppuVar1 != &PTR_DAT_100131c4 && (ppuVar1 != &PTR_DAT_100131a4)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_10006f18(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x10013260);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100131c4);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100131d4);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100131e4);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100131a4);
  return;
}



/* ================================================================
 * Function: FUN_10008aa6
 * Address:  10008aa6
 * ================================================================ */

void __cdecl FUN_10008aa6(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_100131a0 + param_1;
  if ((&DAT_100131a0)[param_1] == 0) {
    lpCriticalSection = _malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_10008aa6(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_10006f18((undefined *)lpCriticalSection);
    }
    FUN_10008b07(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}



/* ================================================================
 * Function: FUN_10008b07
 * Address:  10008b07
 * ================================================================ */

void __cdecl FUN_10008b07(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_100131a0)[param_1]);
  return;
}



/* ================================================================
 * Function: __global_unwind2
 * Address:  10008b1c
 * ================================================================ */

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x10008b34,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



/* ================================================================
 * Function: __local_unwind2
 * Address:  10008b5e
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
  puStack_18 = &LAB_10008b3c;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_10008bf2();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}



/* ================================================================
 * Function: FUN_10008bf2
 * Address:  10008bf2
 * ================================================================ */

void FUN_10008bf2(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_10013268 = *(undefined4 *)(unaff_EBP + 8);
  DAT_10013264 = in_EAX;
  DAT_1001326c = unaff_EBP;
  return;
}



/* ================================================================
 * Function: FUN_10008cd1
 * Address:  10008cd1
 * ================================================================ */

void FUN_10008cd1(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}



/* ================================================================
 * Function: FUN_10008ec0
 * Address:  10008ec0
 * ================================================================ */

float10 __fastcall
FUN_10008ec0(undefined4 param_1,uint param_2,undefined2 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  float10 in_ST0;
  int local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 local_10;
  double dStack_c;
  
  local_14 = param_7;
  local_10 = param_8;
  dStack_c = (double)in_ST0;
  uStack_1c = param_5;
  uStack_18 = param_6;
  uStack_20 = param_1;
  FUN_1000b0e8(param_2,&local_24,&param_3);
  return (float10)dStack_c;
}



/* ================================================================
 * Function: __startOneArgErrorHandling
 * Address:  10008ed7
 * ================================================================ */

/* Library Function - Single Match
    __startOneArgErrorHandling
   
   Library: Visual Studio */

float10 __fastcall
__startOneArgErrorHandling
          (undefined4 param_1,uint param_2,ushort param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6)

{
  float10 in_ST0;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  double local_c;
  
  local_c = (double)in_ST0;
  local_1c = param_5;
  local_18 = param_6;
  local_20 = param_1;
  FUN_1000b0e8(param_2,&local_24,&param_3);
  return (float10)local_c;
}



/* ================================================================
 * Function: FUN_10008f35
 * Address:  10008f35
 * ================================================================ */

void FUN_10008f35(void)

{
  return;
}



/* ================================================================
 * Function: FUN_10008f4c
 * Address:  10008f4c
 * ================================================================ */

undefined4 FUN_10008f4c(void)

{
  uint in_EAX;
  
  if ((in_EAX & 0x80000) != 0) {
    return 7;
  }
  return 1;
}



/* ================================================================
 * Function: __fload_withFB
 * Address:  10008f65
 * ================================================================ */

/* Library Function - Single Match
    __fload_withFB
   
   Library: Visual Studio */

uint __fastcall __fload_withFB(undefined4 param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 4) & 0x7ff00000;
  if (uVar1 != 0x7ff00000) {
    return uVar1;
  }
  return *(uint *)(param_2 + 4);
}



/* ================================================================
 * Function: FUN_10008fa8
 * Address:  10008fa8
 * ================================================================ */

uint __cdecl FUN_10008fa8(undefined4 param_1,uint param_2)

{
  if ((param_2 & 0x7ff00000) != 0x7ff00000) {
    return param_2 & 0x7ff00000;
  }
  return param_2;
}



/* ================================================================
 * Function: __math_exit
 * Address:  10008fcb
 * ================================================================ */

/* Library Function - Single Match
    __math_exit
   
   Library: Visual Studio */

void __fastcall
__math_exit(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
           )

{
  ushort in_FPUStatusWord;
  ushort unaff_retaddr;
  
  if (((unaff_retaddr != 0x27f) && ((unaff_retaddr & 0x20) != 0)) &&
     ((in_FPUStatusWord & 0x20) != 0)) {
    __startOneArgErrorHandling(param_1,param_2,unaff_retaddr,param_3,param_4,param_5);
    return;
  }
  return;
}



/* ================================================================
 * Function: FUN_100090ac
 * Address:  100090ac
 * ================================================================ */

undefined4 FUN_100090ac(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_10008a11();
  DAT_100132a0 = TlsAlloc();
  if (DAT_100132a0 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_1000b1b8(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_100132a0,lpTlsValue);
      if (BVar1 != 0) {
        FUN_1000911e((int)lpTlsValue);
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
 * Function: FUN_10009100
 * Address:  10009100
 * ================================================================ */

void FUN_10009100(void)

{
  FUN_10008a3a();
  if (DAT_100132a0 != 0xffffffff) {
    TlsFree(DAT_100132a0);
    DAT_100132a0 = 0xffffffff;
  }
  return;
}



/* ================================================================
 * Function: FUN_1000911e
 * Address:  1000911e
 * ================================================================ */

void __cdecl FUN_1000911e(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_100135a0;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}



/* ================================================================
 * Function: FUN_10009131
 * Address:  10009131
 * ================================================================ */

DWORD * FUN_10009131(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_100132a0);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_1000b1b8(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_100132a0,lpTlsValue);
      if (BVar1 != 0) {
        FUN_1000911e((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        goto LAB_1000918c;
      }
    }
    __amsg_exit(0x10);
  }
LAB_1000918c:
  SetLastError(dwErrCode);
  return lpTlsValue;
}



/* ================================================================
 * Function: FUN_10009198
 * Address:  10009198
 * ================================================================ */

void __cdecl FUN_10009198(undefined *param_1)

{
  if (DAT_100132a0 != 0xffffffff) {
    if ((param_1 != (undefined *)0x0) ||
       (param_1 = TlsGetValue(DAT_100132a0), param_1 != (undefined *)0x0)) {
      if (*(undefined **)(param_1 + 0x24) != (undefined *)0x0) {
        FUN_10006f18(*(undefined **)(param_1 + 0x24));
      }
      if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
        FUN_10006f18(*(undefined **)(param_1 + 0x28));
      }
      if (*(undefined **)(param_1 + 0x30) != (undefined *)0x0) {
        FUN_10006f18(*(undefined **)(param_1 + 0x30));
      }
      if (*(undefined **)(param_1 + 0x38) != (undefined *)0x0) {
        FUN_10006f18(*(undefined **)(param_1 + 0x38));
      }
      if (*(undefined **)(param_1 + 0x40) != (undefined *)0x0) {
        FUN_10006f18(*(undefined **)(param_1 + 0x40));
      }
      if (*(undefined **)(param_1 + 0x44) != (undefined *)0x0) {
        FUN_10006f18(*(undefined **)(param_1 + 0x44));
      }
      if (*(undefined **)(param_1 + 0x50) != &DAT_100135a0) {
        FUN_10006f18(*(undefined **)(param_1 + 0x50));
      }
      FUN_10006f18(param_1);
    }
    TlsSetValue(DAT_100132a0,(LPVOID)0x0);
    return;
  }
  return;
}



/* ================================================================
 * Function: FUN_10009238
 * Address:  10009238
 * ================================================================ */

void __fastcall FUN_10009238(void *param_1)

{
  FUN_1000b32a(param_1,0x10000,0x30000);
  return;
}



/* ================================================================
 * Function: FUN_1000924a
 * Address:  1000924a
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1000924a(void)

{
  if (_DAT_1000fa70 < _DAT_1000fb28 - (_DAT_1000fb28 / _DAT_1000fb30) * _DAT_1000fb30) {
    return 1;
  }
  return 0;
}



/* ================================================================
 * Function: FUN_10009288
 * Address:  10009288
 * ================================================================ */

void FUN_10009288(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("KERNEL32");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"IsProcessorFeaturePresent");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(0);
      return;
    }
  }
  FUN_1000924a();
  return;
}



/* ================================================================
 * Function: FUN_100092b1
 * Address:  100092b1
 * ================================================================ */

void __cdecl FUN_100092b1(char *param_1)

{
  char cVar1;
  char cVar2;
  undefined *this;
  uint uVar3;
  undefined *puVar4;
  
  this = (undefined *)(int)*param_1;
  uVar3 = FUN_1000b45b((uint)this);
  if (uVar3 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_100134d0 < 2) {
        uVar3 = (byte)PTR_DAT_100132c4[*param_1 * 2] & 4;
        this = PTR_DAT_100132c4;
      }
      else {
        puVar4 = (undefined *)0x4;
        uVar3 = FUN_10009ff9(this,(int)*param_1,4);
        this = puVar4;
      }
    } while (uVar3 != 0);
  }
  cVar2 = *param_1;
  *param_1 = DAT_100134d4;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = cVar2;
    cVar2 = cVar1;
  } while (*param_1 != '\0');
  return;
}



/* ================================================================
 * Function: __fassign
 * Address:  10009371
 * ================================================================ */

/* Library Function - Single Match
    __fassign
   
   Library: Visual Studio 2003 Release */

void __cdecl __fassign(int flag,char *argument,char *number)

{
  void *in_ECX;
  void *local_c;
  void *local_8;
  
  if (flag != 0) {
    local_c = in_ECX;
    local_8 = in_ECX;
    FUN_1000b927(in_ECX,(uint *)&local_c,(byte *)number);
    *(void **)argument = local_c;
    *(void **)(argument + 4) = local_8;
    return;
  }
  FUN_1000b954(in_ECX,(uint *)&number,(byte *)number);
  *(char **)argument = number;
  return;
}



/* ================================================================
 * Function: FUN_100093af
 * Address:  100093af
 * ================================================================ */

undefined1 * __cdecl FUN_100093af(undefined8 *param_1,undefined1 *param_2,int param_3,int param_4)

{
  uint local_2c [6];
  int local_14 [4];
  
  FUN_1000b9f8((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),local_14,local_2c);
  FUN_1000b981(param_2 + (uint)(0 < param_3) + (uint)(local_14[0] == 0x2d),param_3 + 1,(int)local_14
              );
  FUN_10009410(param_2,param_3,param_4,local_14,'\0');
  return param_2;
}



/* ================================================================
 * Function: FUN_10009410
 * Address:  10009410
 * ================================================================ */

undefined1 * __cdecl
FUN_10009410(undefined1 *param_1,int param_2,int param_3,int *param_4,char param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint *puVar3;
  int iVar4;
  
  if (param_5 != '\0') {
    FUN_100096b2(param_1 + (*param_4 == 0x2d),(uint)(0 < param_2));
  }
  puVar1 = param_1;
  if (*param_4 == 0x2d) {
    *param_1 = 0x2d;
    puVar1 = param_1 + 1;
  }
  puVar2 = puVar1;
  if (0 < param_2) {
    puVar2 = puVar1 + 1;
    *puVar1 = puVar1[1];
    *puVar2 = DAT_100134d4;
  }
  puVar3 = FUN_10007510((uint *)(puVar2 + param_2 + (uint)(param_5 == '\0')),(uint *)"e+000");
  if (param_3 != 0) {
    *(undefined1 *)puVar3 = 0x45;
  }
  if (*(char *)param_4[3] != '0') {
    iVar4 = param_4[1] + -1;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
      *(undefined1 *)((int)puVar3 + 1) = 0x2d;
    }
    if (99 < iVar4) {
      *(char *)((int)puVar3 + 2) = *(char *)((int)puVar3 + 2) + (char)(iVar4 / 100);
      iVar4 = iVar4 % 100;
    }
    if (9 < iVar4) {
      *(char *)((int)puVar3 + 3) = *(char *)((int)puVar3 + 3) + (char)(iVar4 / 10);
      iVar4 = iVar4 % 10;
    }
    *(char *)(puVar3 + 1) = (char)puVar3[1] + (char)iVar4;
  }
  return param_1;
}



/* ================================================================
 * Function: FUN_100094d2
 * Address:  100094d2
 * ================================================================ */

char * __cdecl FUN_100094d2(undefined8 *param_1,char *param_2,size_t param_3)

{
  uint local_2c [6];
  int local_14;
  int local_10;
  
  FUN_1000b9f8((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),&local_14,local_2c);
  FUN_1000b981(param_2 + (local_14 == 0x2d),local_10 + param_3,(int)&local_14);
  FUN_10009527(param_2,param_3,&local_14,'\0');
  return param_2;
}



/* ================================================================
 * Function: FUN_10009527
 * Address:  10009527
 * ================================================================ */

char * __cdecl FUN_10009527(char *param_1,size_t param_2,int *param_3,char param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  iVar1 = param_3[1];
  if ((param_4 != '\0') && (iVar1 - 1U == param_2)) {
    iVar2 = *param_3;
    param_1[(uint)(iVar2 == 0x2d) + (iVar1 - 1U)] = '0';
    (param_1 + (uint)(iVar2 == 0x2d) + (iVar1 - 1U))[1] = '\0';
  }
  pcVar3 = param_1;
  if (*param_3 == 0x2d) {
    *param_1 = '-';
    pcVar3 = param_1 + 1;
  }
  if (param_3[1] < 1) {
    FUN_100096b2(pcVar3,1);
    *pcVar3 = '0';
    pcVar3 = pcVar3 + 1;
  }
  else {
    pcVar3 = pcVar3 + param_3[1];
  }
  if (0 < (int)param_2) {
    FUN_100096b2(pcVar3,1);
    *pcVar3 = DAT_100134d4;
    iVar1 = param_3[1];
    if (iVar1 < 0) {
      if ((param_4 != '\0') || (-iVar1 <= (int)param_2)) {
        param_2 = -iVar1;
      }
      FUN_100096b2(pcVar3 + 1,param_2);
      _memset(pcVar3 + 1,0x30,param_2);
    }
  }
  return param_1;
}



/* ================================================================
 * Function: FUN_100095ce
 * Address:  100095ce
 * ================================================================ */

void __cdecl FUN_100095ce(undefined8 *param_1,char *param_2,size_t param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  uint local_2c [6];
  int local_14;
  int local_10;
  
  FUN_1000b9f8((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),&local_14,local_2c);
  iVar1 = local_10 + -1;
  FUN_1000b981(param_2 + (local_14 == 0x2d),param_3,(int)&local_14);
  local_10 = local_10 + -1;
  if ((local_10 < -4) || ((int)param_3 <= local_10)) {
    FUN_10009410(param_2,param_3,param_4,&local_14,'\x01');
  }
  else {
    pcVar2 = param_2 + (local_14 == 0x2d);
    if (iVar1 < local_10) {
      do {
        pcVar3 = pcVar2;
        pcVar2 = pcVar3 + 1;
      } while (*pcVar3 != '\0');
      pcVar3[-1] = '\0';
    }
    FUN_10009527(param_2,param_3,&local_14,'\x01');
  }
  return;
}



/* ================================================================
 * Function: __cfltcvt
 * Address:  10009661
 * ================================================================ */

/* Library Function - Single Match
    __cfltcvt
   
   Library: Visual Studio 2003 Release */

errno_t __cdecl
__cfltcvt(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps)

{
  char *pcVar1;
  undefined1 *puVar2;
  
  if ((sizeInBytes == 0x65) || (sizeInBytes == 0x45)) {
    puVar2 = FUN_100093af(arg,buffer,format,precision);
  }
  else {
    if (sizeInBytes == 0x66) {
      pcVar1 = FUN_100094d2(arg,buffer,format);
      return (errno_t)pcVar1;
    }
    puVar2 = (undefined1 *)FUN_100095ce(arg,buffer,format,precision);
  }
  return (errno_t)puVar2;
}



/* ================================================================
 * Function: FUN_100096b2
 * Address:  100096b2
 * ================================================================ */

void __cdecl FUN_100096b2(char *param_1,int param_2)

{
  size_t sVar1;
  
  if (param_2 != 0) {
    sVar1 = _strlen(param_1);
    FUN_1000ad50((undefined4 *)(param_1 + param_2),(undefined4 *)param_1,sVar1 + 1);
  }
  return;
}



/* ================================================================
 * Function: FUN_100096d7
 * Address:  100096d7
 * ================================================================ */

uint __cdecl FUN_100096d7(uint param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  int *piVar4;
  byte bVar5;
  undefined3 extraout_var;
  undefined *puVar6;
  int *piVar7;
  
  piVar4 = param_2;
  uVar1 = param_2[3];
  uVar2 = param_2[4];
  if (((uVar1 & 0x82) == 0) || ((uVar1 & 0x40) != 0)) {
LAB_100097e3:
    param_2[3] = uVar1 | 0x20;
  }
  else {
    if ((uVar1 & 1) != 0) {
      param_2[1] = 0;
      if ((uVar1 & 0x10) == 0) goto LAB_100097e3;
      *param_2 = param_2[2];
      param_2[3] = uVar1 & 0xfffffffe;
    }
    uVar1 = param_2[3];
    param_2[1] = 0;
    param_2 = (int *)0x0;
    piVar4[3] = uVar1 & 0xffffffef | 2;
    if (((uVar1 & 0x10c) == 0) &&
       (((piVar4 != (int *)&DAT_10013680 && (piVar4 != (int *)&DAT_100136a0)) ||
        (bVar5 = FUN_1000bea0(uVar2), CONCAT31(extraout_var,bVar5) == 0)))) {
      FUN_1000be5c(piVar4);
    }
    if ((*(ushort *)(piVar4 + 3) & 0x108) == 0) {
      piVar7 = (int *)0x1;
      param_2 = (int *)FUN_1000bc6c(uVar2,(char *)&param_1,1);
    }
    else {
      pcVar3 = (char *)piVar4[2];
      piVar7 = (int *)(*piVar4 - (int)pcVar3);
      *piVar4 = (int)(pcVar3 + 1);
      piVar4[1] = piVar4[6] + -1;
      if ((int)piVar7 < 1) {
        if (uVar2 == 0xffffffff) {
          puVar6 = &DAT_100134e0;
        }
        else {
          puVar6 = (undefined *)((&DAT_10015840)[(int)uVar2 >> 5] + (uVar2 & 0x1f) * 0x24);
        }
        if ((puVar6[4] & 0x20) != 0) {
          FUN_1000bb94(uVar2,0,2);
        }
      }
      else {
        param_2 = (int *)FUN_1000bc6c(uVar2,pcVar3,(uint)piVar7);
      }
      *(undefined1 *)piVar4[2] = (undefined1)param_1;
    }
    if (param_2 == piVar7) {
      return param_1 & 0xff;
    }
    piVar4[3] = piVar4[3] | 0x20;
  }
  return 0xffffffff;
}



/* ================================================================
 * Function: FUN_100097ef
 * Address:  100097ef
 * ================================================================ */

int __cdecl FUN_100097ef(int *param_1,byte *param_2,undefined4 *param_3)

{
  byte *pbVar1;
  uint uVar2;
  WCHAR *pWVar3;
  WCHAR *pWVar4;
  undefined4 uVar5;
  short *psVar6;
  int *piVar7;
  int iVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  undefined1 local_24c [511];
  undefined1 local_4d;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_44;
  uint local_40;
  CHAR local_3c [4];
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  char local_1a;
  char local_19;
  int local_18;
  int local_14;
  undefined1 *local_10;
  WCHAR *local_c;
  uint local_8;
  
  local_34 = 0;
  bVar9 = *param_2;
  local_10 = (undefined1 *)0x0;
  local_18 = 0;
  pbVar1 = param_2;
  do {
    if ((bVar9 == 0) || (param_2 = pbVar1 + 1, local_18 < 0)) {
      return local_18;
    }
    if (((char)bVar9 < ' ') || ('x' < (char)bVar9)) {
      uVar2 = 0;
    }
    else {
      uVar2 = (byte)"GAIsProcessorFeaturePresent"[(char)bVar9 + 0x1a] & 0xf;
    }
    local_34 = (int)(char)(&DAT_1000fb70)[uVar2 * 8 + local_34] >> 4;
    switch(local_34) {
    case 0:
switchD_1000985d_caseD_0:
      local_28 = 0;
      if ((PTR_DAT_100132c4[(uint)bVar9 * 2 + 1] & 0x80) != 0) {
        FUN_10009f30((int)(char)bVar9,param_1,&local_18);
        bVar9 = *param_2;
        param_2 = pbVar1 + 2;
      }
      FUN_10009f30((int)(char)bVar9,param_1,&local_18);
      break;
    case 1:
      local_14 = -1;
      local_38 = 0;
      local_2c = 0;
      local_24 = 0;
      local_20 = 0;
      local_8 = 0;
      local_28 = 0;
      break;
    case 2:
      if (bVar9 == 0x20) {
        local_8 = local_8 | 2;
      }
      else if (bVar9 == 0x23) {
        local_8 = local_8 | 0x80;
      }
      else if (bVar9 == 0x2b) {
        local_8 = local_8 | 1;
      }
      else if (bVar9 == 0x2d) {
        local_8 = local_8 | 4;
      }
      else if (bVar9 == 0x30) {
        local_8 = local_8 | 8;
      }
      break;
    case 3:
      if (bVar9 == 0x2a) {
        local_24 = FUN_10009fce((int *)&param_3);
        if (local_24 < 0) {
          local_8 = local_8 | 4;
          local_24 = -local_24;
        }
      }
      else {
        local_24 = (char)bVar9 + -0x30 + local_24 * 10;
      }
      break;
    case 4:
      local_14 = 0;
      break;
    case 5:
      if (bVar9 == 0x2a) {
        local_14 = FUN_10009fce((int *)&param_3);
        if (local_14 < 0) {
          local_14 = -1;
        }
      }
      else {
        local_14 = (char)bVar9 + -0x30 + local_14 * 10;
      }
      break;
    case 6:
      if (bVar9 == 0x49) {
        if ((*param_2 != 0x36) || (pbVar1[2] != 0x34)) {
          local_34 = 0;
          goto switchD_1000985d_caseD_0;
        }
        param_2 = pbVar1 + 3;
        local_8 = local_8 | 0x8000;
      }
      else if (bVar9 == 0x68) {
        local_8 = local_8 | 0x20;
      }
      else if (bVar9 == 0x6c) {
        local_8 = local_8 | 0x10;
      }
      else if (bVar9 == 0x77) {
        local_8 = local_8 | 0x800;
      }
      break;
    case 7:
      pWVar4 = local_c;
      if ((char)bVar9 < 'h') {
        if ((char)bVar9 < 'e') {
          if ((char)bVar9 < 'Y') {
            if (bVar9 == 0x58) {
LAB_10009c6e:
              local_30 = 7;
LAB_10009c75:
              local_10 = (undefined1 *)0x10;
              if ((local_8 & 0x80) != 0) {
                local_1a = '0';
                local_19 = (char)local_30 + 'Q';
                local_20 = 2;
              }
              goto LAB_10009cdf;
            }
            if (bVar9 != 0x43) {
              if ((bVar9 != 0x45) && (bVar9 != 0x47)) {
                if (bVar9 == 0x53) {
                  if ((local_8 & 0x830) == 0) {
                    local_8 = local_8 | 0x800;
                  }
                  goto LAB_10009a1c;
                }
                goto LAB_10009df9;
              }
              local_38 = 1;
              bVar9 = bVar9 + 0x20;
              goto LAB_10009a7d;
            }
            if ((local_8 & 0x830) == 0) {
              local_8 = local_8 | 0x800;
            }
LAB_10009aaa:
            if ((local_8 & 0x810) == 0) {
              uVar5 = FUN_10009fce((int *)&param_3);
              local_24c[0] = (char)uVar5;
              local_10 = (undefined1 *)0x1;
            }
            else {
              uVar5 = FUN_10009feb((int *)&param_3);
              local_10 = (undefined1 *)FUN_1000c029(local_24c,(WCHAR)uVar5);
              if ((int)local_10 < 0) {
                local_2c = 1;
              }
            }
            pWVar4 = (WCHAR *)local_24c;
          }
          else if (bVar9 == 0x5a) {
            psVar6 = (short *)FUN_10009fce((int *)&param_3);
            if ((psVar6 == (short *)0x0) ||
               (pWVar4 = *(WCHAR **)(psVar6 + 2), pWVar4 == (WCHAR *)0x0)) {
              local_c = (WCHAR *)PTR_DAT_100132bc;
              pWVar4 = (WCHAR *)PTR_DAT_100132bc;
              goto LAB_10009bef;
            }
            if ((local_8 & 0x800) == 0) {
              local_28 = 0;
              local_10 = (undefined1 *)(int)*psVar6;
            }
            else {
              local_28 = 1;
              local_10 = (undefined1 *)((uint)(int)*psVar6 >> 1);
            }
          }
          else {
            if (bVar9 == 99) goto LAB_10009aaa;
            if (bVar9 == 100) goto LAB_10009cd4;
          }
        }
        else {
LAB_10009a7d:
          local_8 = local_8 | 0x40;
          pWVar4 = (WCHAR *)local_24c;
          if (local_14 < 0) {
            local_14 = 6;
          }
          else if ((local_14 == 0) && (bVar9 == 0x67)) {
            local_14 = 1;
          }
          local_4c = *param_3;
          local_48 = param_3[1];
          param_3 = param_3 + 2;
          local_c = pWVar4;
          (*(code *)PTR___fptrap_100132a4)(&local_4c,local_24c,(int)(char)bVar9,local_14,local_38);
          uVar2 = local_8 & 0x80;
          if ((uVar2 != 0) && (local_14 == 0)) {
            (*(code *)PTR___fptrap_100132b0)(local_24c);
          }
          if ((bVar9 == 0x67) && (uVar2 == 0)) {
            (*(code *)PTR___fptrap_100132a8)(local_24c);
          }
          if (local_24c[0] == '-') {
            local_8 = local_8 | 0x100;
            pWVar4 = (WCHAR *)(local_24c + 1);
            local_c = pWVar4;
          }
LAB_10009bef:
          local_10 = (undefined1 *)_strlen((char *)pWVar4);
          pWVar4 = local_c;
        }
      }
      else {
        if (bVar9 == 0x69) {
LAB_10009cd4:
          local_8 = local_8 | 0x40;
        }
        else {
          if (bVar9 == 0x6e) {
            piVar7 = (int *)FUN_10009fce((int *)&param_3);
            if ((local_8 & 0x20) == 0) {
              *piVar7 = local_18;
            }
            else {
              *(undefined2 *)piVar7 = (undefined2)local_18;
            }
            local_2c = 1;
            break;
          }
          if (bVar9 == 0x6f) {
            local_10 = (undefined1 *)0x8;
            if ((local_8 & 0x80) != 0) {
              local_8 = local_8 | 0x200;
            }
            goto LAB_10009cdf;
          }
          if (bVar9 == 0x70) {
            local_14 = 8;
            goto LAB_10009c6e;
          }
          if (bVar9 == 0x73) {
LAB_10009a1c:
            iVar10 = local_14;
            if (local_14 == -1) {
              iVar10 = 0x7fffffff;
            }
            pWVar3 = (WCHAR *)FUN_10009fce((int *)&param_3);
            if ((local_8 & 0x810) == 0) {
              pWVar4 = pWVar3;
              if (pWVar3 == (WCHAR *)0x0) {
                pWVar3 = (WCHAR *)PTR_DAT_100132bc;
                pWVar4 = (WCHAR *)PTR_DAT_100132bc;
              }
              for (; (iVar10 != 0 && ((char)*pWVar3 != '\0')); pWVar3 = (WCHAR *)((int)pWVar3 + 1))
              {
                iVar10 = iVar10 + -1;
              }
              local_10 = (undefined1 *)((int)pWVar3 - (int)pWVar4);
            }
            else {
              if (pWVar3 == (WCHAR *)0x0) {
                pWVar3 = (WCHAR *)PTR_DAT_100132c0;
              }
              local_28 = 1;
              for (pWVar4 = pWVar3; (iVar10 != 0 && (*pWVar4 != L'\0')); pWVar4 = pWVar4 + 1) {
                iVar10 = iVar10 + -1;
              }
              local_10 = (undefined1 *)((int)pWVar4 - (int)pWVar3 >> 1);
              pWVar4 = pWVar3;
            }
            goto LAB_10009df9;
          }
          if (bVar9 != 0x75) {
            if (bVar9 != 0x78) goto LAB_10009df9;
            local_30 = 0x27;
            goto LAB_10009c75;
          }
        }
        local_10 = (undefined1 *)0xa;
LAB_10009cdf:
        if ((local_8 & 0x8000) == 0) {
          if ((local_8 & 0x20) == 0) {
            if ((local_8 & 0x40) == 0) {
              uVar2 = FUN_10009fce((int *)&param_3);
              uVar13 = (ulonglong)uVar2;
              goto LAB_10009d32;
            }
            uVar2 = FUN_10009fce((int *)&param_3);
          }
          else if ((local_8 & 0x40) == 0) {
            uVar2 = FUN_10009fce((int *)&param_3);
            uVar2 = uVar2 & 0xffff;
          }
          else {
            uVar5 = FUN_10009fce((int *)&param_3);
            uVar2 = (uint)(short)uVar5;
          }
          uVar13 = (ulonglong)(int)uVar2;
        }
        else {
          uVar13 = FUN_10009fdb((int *)&param_3);
        }
LAB_10009d32:
        iVar10 = (int)(uVar13 >> 0x20);
        if ((((local_8 & 0x40) != 0) && (iVar10 == 0 || (longlong)uVar13 < 0)) &&
           ((longlong)uVar13 < 0)) {
          local_8 = local_8 | 0x100;
          uVar13 = CONCAT44(-(iVar10 + (uint)((int)uVar13 != 0)),-(int)uVar13);
        }
        uVar2 = (uint)(uVar13 >> 0x20);
        uVar15 = uVar13 & 0xffffffff;
        if ((local_8 & 0x8000) == 0) {
          uVar2 = 0;
        }
        if (local_14 < 0) {
          local_14 = 1;
        }
        else {
          local_8 = local_8 & 0xfffffff7;
        }
        if ((int)uVar13 == 0 && uVar2 == 0) {
          local_20 = 0;
        }
        local_c = (WCHAR *)&local_4d;
        while( true ) {
          uVar11 = (uint)uVar15;
          iVar10 = local_14 + -1;
          if ((local_14 < 1) && (uVar11 == 0 && uVar2 == 0)) break;
          local_40 = (int)local_10 >> 0x1f;
          local_44 = (uint)local_10;
          local_14 = iVar10;
          uVar14 = __aullrem(uVar11,uVar2,(uint)local_10,local_40);
          iVar10 = (int)uVar14 + 0x30;
          uVar15 = __aulldiv(uVar11,uVar2,local_44,local_40);
          uVar2 = (uint)(uVar15 >> 0x20);
          if (0x39 < iVar10) {
            iVar10 = iVar10 + local_30;
          }
          pWVar4 = (WCHAR *)((int)local_c + -1);
          *(char *)local_c = (char)iVar10;
          local_c = pWVar4;
        }
        iVar8 = -(int)local_c;
        local_10 = &local_4d + iVar8;
        pWVar4 = (WCHAR *)((int)local_c + 1);
        local_14 = iVar10;
        if (((local_8 & 0x200) != 0) &&
           ((*(char *)pWVar4 != '0' || (local_10 == (undefined1 *)0x0)))) {
          *(char *)local_c = '0';
          local_10 = (undefined1 *)((int)&local_4c + iVar8);
          pWVar4 = local_c;
        }
      }
LAB_10009df9:
      local_c = pWVar4;
      uVar2 = local_8;
      if (local_2c == 0) {
        if ((local_8 & 0x40) != 0) {
          if ((local_8 & 0x100) == 0) {
            if ((local_8 & 1) == 0) {
              if ((local_8 & 2) == 0) goto LAB_10009e31;
              local_1a = ' ';
            }
            else {
              local_1a = '+';
            }
          }
          else {
            local_1a = '-';
          }
          local_20 = 1;
        }
LAB_10009e31:
        iVar10 = (local_24 - local_20) - (int)local_10;
        if ((local_8 & 0xc) == 0) {
          FUN_10009f65(0x20,iVar10,param_1,&local_18);
        }
        FUN_10009f96(&local_1a,local_20,param_1,&local_18);
        if (((uVar2 & 8) != 0) && ((uVar2 & 4) == 0)) {
          FUN_10009f65(0x30,iVar10,param_1,&local_18);
        }
        if ((local_28 == 0) || (puVar12 = local_10, pWVar4 = local_c, (int)local_10 < 1)) {
          FUN_10009f96((char *)local_c,(int)local_10,param_1,&local_18);
        }
        else {
          do {
            puVar12 = puVar12 + -1;
            iVar8 = FUN_1000c029(local_3c,*pWVar4);
            if (iVar8 < 1) break;
            FUN_10009f96(local_3c,iVar8,param_1,&local_18);
            pWVar4 = pWVar4 + 1;
          } while (puVar12 != (undefined1 *)0x0);
        }
        if ((local_8 & 4) != 0) {
          FUN_10009f65(0x20,iVar10,param_1,&local_18);
        }
      }
    }
    bVar9 = *param_2;
    pbVar1 = param_2;
  } while( true );
}



/* ================================================================
 * Function: FUN_10009f30
 * Address:  10009f30
 * ================================================================ */

void __cdecl FUN_10009f30(uint param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_2 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    uVar2 = FUN_100096d7(param_1,param_2);
  }
  else {
    *(undefined1 *)*param_2 = (undefined1)param_1;
    *param_2 = *param_2 + 1;
    uVar2 = param_1 & 0xff;
  }
  if (uVar2 == 0xffffffff) {
    *param_3 = -1;
    return;
  }
  *param_3 = *param_3 + 1;
  return;
}



/* ================================================================
 * Function: FUN_10009f65
 * Address:  10009f65
 * ================================================================ */

void __cdecl FUN_10009f65(uint param_1,int param_2,int *param_3,int *param_4)

{
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    FUN_10009f30(param_1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}



/* ================================================================
 * Function: FUN_10009f96
 * Address:  10009f96
 * ================================================================ */

void __cdecl FUN_10009f96(char *param_1,int param_2,int *param_3,int *param_4)

{
  char cVar1;
  
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    FUN_10009f30((int)cVar1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}



/* ================================================================
 * Function: FUN_10009fce
 * Address:  10009fce
 * ================================================================ */

undefined4 __cdecl FUN_10009fce(int *param_1)

{
  *param_1 = *param_1 + 4;
  return *(undefined4 *)(*param_1 + -4);
}



/* ================================================================
 * Function: FUN_10009fdb
 * Address:  10009fdb
 * ================================================================ */

undefined8 __cdecl FUN_10009fdb(int *param_1)

{
  *param_1 = *param_1 + 8;
  return *(undefined8 *)(*param_1 + -8);
}



/* ================================================================
 * Function: FUN_10009feb
 * Address:  10009feb
 * ================================================================ */

undefined4 __cdecl FUN_10009feb(int *param_1)

{
  *param_1 = *param_1 + 4;
  return CONCAT22((short)((uint)*param_1 >> 0x10),*(undefined2 *)(*param_1 + -4));
}



/* ================================================================
 * Function: FUN_10009ff9
 * Address:  10009ff9
 * ================================================================ */

uint __thiscall FUN_10009ff9(void *this,int param_1,uint param_2)

{
  BOOL BVar1;
  int iVar2;
  undefined4 local_8;
  
  if (param_1 + 1U < 0x101) {
    param_1._2_2_ = *(ushort *)(PTR_DAT_100132c4 + param_1 * 2);
  }
  else {
    if ((PTR_DAT_100132c4[(param_1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      local_8 = CONCAT31((int3)((uint)this >> 8),(char)param_1) & 0xffff00ff;
      iVar2 = 1;
    }
    else {
      local_8._0_2_ = CONCAT11((char)param_1,(char)((uint)param_1 >> 8));
      local_8 = CONCAT22((short)((uint)this >> 0x10),(undefined2)local_8) & 0xff00ffff;
      iVar2 = 2;
    }
    BVar1 = FUN_1000c1d5(1,(LPCSTR)&local_8,iVar2,(LPWORD)((int)&param_1 + 2),0,0,1);
    if (BVar1 == 0) {
      return 0;
    }
  }
  return param_1._2_2_ & param_2;
}



/* ================================================================
 * Function: FUN_1000a0a4
 * Address:  1000a0a4
 * ================================================================ */

void FUN_1000a0a4(void)

{
  if (PTR_FUN_10011160 != (undefined *)0x0) {
    (*(code *)PTR_FUN_10011160)();
  }
  FUN_1000a1a8((undefined4 *)&DAT_10011008,(undefined4 *)&DAT_10011014);
  FUN_1000a1a8((undefined4 *)&DAT_10011000,(undefined4 *)&DAT_10011004);
  return;
}



/* ================================================================
 * Function: __exit
 * Address:  1000a0d1
 * ================================================================ */

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __exit(int _Code)

{
  FUN_1000a0f1(_Code,1,0);
  return;
}



/* ================================================================
 * Function: FUN_1000a0e2
 * Address:  1000a0e2
 * ================================================================ */

void FUN_1000a0e2(void)

{
  FUN_1000a0f1(0,0,1);
  return;
}



/* ================================================================
 * Function: FUN_1000a0f1
 * Address:  1000a0f1
 * ================================================================ */

void __cdecl FUN_1000a0f1(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_1000a196();
  if (DAT_10014328 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_10014324 = 1;
  DAT_10014320 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_10015950 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_1001594c - 4), DAT_10015950 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_10015950 <= puVar1);
    }
    FUN_1000a1a8((undefined4 *)&DAT_10011018,(undefined4 *)&DAT_10011020);
  }
  FUN_1000a1a8((undefined4 *)&DAT_10011024,(undefined4 *)&DAT_10011028);
  if (param_3 == 0) {
    DAT_10014328 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_1000a19f();
  return;
}



/* ================================================================
 * Function: FUN_1000a196
 * Address:  1000a196
 * ================================================================ */

void FUN_1000a196(void)

{
  FUN_10008aa6(0xd);
  return;
}



/* ================================================================
 * Function: FUN_1000a19f
 * Address:  1000a19f
 * ================================================================ */

void FUN_1000a19f(void)

{
  FUN_10008b07(0xd);
  return;
}



/* ================================================================
 * Function: FUN_1000a1a8
 * Address:  1000a1a8
 * ================================================================ */

void __cdecl FUN_1000a1a8(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}



/* ================================================================
 * Function: FUN_1000a1c2
 * Address:  1000a1c2
 * ================================================================ */

void FUN_1000a1c2(void)

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
  DAT_10015940 = 0x20;
  DAT_10015840 = puVar2;
  for (; puVar2 < DAT_10015840 + 0x120; puVar2 = puVar2 + 9) {
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
    if ((int)DAT_10015940 < (int)UVar8) {
      puVar2 = &DAT_10015844;
      do {
        puVar3 = _malloc(0x480);
        UVar9 = DAT_10015940;
        if (puVar3 == (undefined4 *)0x0) break;
        DAT_10015940 = DAT_10015940 + 0x20;
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
      } while ((int)DAT_10015940 < (int)UVar8);
    }
    uVar7 = 0;
    if (0 < (int)UVar9) {
      do {
        if (((*(HANDLE *)local_8 != (HANDLE)0xffffffff) && ((*pUVar5 & 1) != 0)) &&
           (((*pUVar5 & 8) != 0 || (DVar4 = GetFileType(*(HANDLE *)local_8), DVar4 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_10015840)[(int)uVar7 >> 5] + (uVar7 & 0x1f) * 0x24);
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
    puVar2 = DAT_10015840 + iVar6 * 9;
    if (DAT_10015840[iVar6 * 9] == -1) {
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
          goto LAB_1000a367;
        }
      }
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x40;
    }
    else {
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x80;
    }
LAB_1000a367:
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      SetHandleCount(DAT_10015940);
      return;
    }
  } while( true );
}



/* ================================================================
 * Function: FUN_1000a37e
 * Address:  1000a37e
 * ================================================================ */

void FUN_1000a37e(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  uint uVar2;
  
  puVar1 = &DAT_10015840;
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
      FUN_10006f18((undefined *)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x10015940);
  return;
}



/* ================================================================
 * Function: FUN_1000a3d2
 * Address:  1000a3d2
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a3d2(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  
  if (DAT_10015948 == 0) {
    FUN_1000c6f6();
  }
  iVar5 = 0;
  for (puVar6 = DAT_10014268; (char)*puVar6 != '\0'; puVar6 = (uint *)((int)puVar6 + sVar2 + 1)) {
    if ((char)*puVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen((char *)puVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  _DAT_10014308 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = (char)*DAT_10014268;
  puVar6 = DAT_10014268;
  while (cVar1 != '\0') {
    sVar2 = _strlen((char *)puVar6);
    if ((char)*puVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_10007510((uint *)*puVar3,puVar6);
      puVar3 = puVar3 + 1;
    }
    puVar6 = (uint *)((int)puVar6 + sVar2 + 1);
    cVar1 = (char)*puVar6;
  }
  FUN_10006f18((undefined *)DAT_10014268);
  DAT_10014268 = (uint *)0x0;
  *puVar3 = 0;
  _DAT_10015944 = 1;
  return;
}



/* ================================================================
 * Function: FUN_1000a48b
 * Address:  1000a48b
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a48b(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_10015948 == 0) {
    FUN_1000c6f6();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_1001432c,0x104);
  _DAT_10014318 = &DAT_1001432c;
  pbVar2 = &DAT_1001432c;
  if (*DAT_10015978 != 0) {
    pbVar2 = DAT_10015978;
  }
  FUN_1000a524(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_1000a524(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_10014300 = puVar1;
  _DAT_100142fc = local_8 + -1;
  return;
}



/* ================================================================
 * Function: FUN_1000a524
 * Address:  1000a524
 * ================================================================ */

void __cdecl FUN_1000a524(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

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
      if (((*(byte *)((int)&DAT_10014700 + bVar1 + 1) & 4) != 0) &&
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
      if ((*(byte *)((int)&DAT_10014700 + bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        pbVar4 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_1000a5cf;
      param_1 = pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_1000a5cf:
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
          if ((*(byte *)((int)&DAT_10014700 + bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if ((*(byte *)((int)&DAT_10014700 + bVar1 + 1) & 4) != 0) {
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
 * Function: FUN_1000a6d8
 * Address:  1000a6d8
 * ================================================================ */

LPSTR FUN_1000a6d8(void)

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
  if (DAT_10014430 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_10014430 = 1;
LAB_1000a72f:
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
        FUN_10006f18(pCVar6);
        local_8 = (LPSTR)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return local_8;
    }
    pCVar9 = GetEnvironmentStrings();
    if (pCVar9 == (LPCH)0x0) {
      return (LPSTR)0x0;
    }
    DAT_10014430 = 2;
  }
  else {
    if (DAT_10014430 == 1) goto LAB_1000a72f;
    if (DAT_10014430 != 2) {
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
    FUN_10007010((undefined4 *)pCVar6,(undefined4 *)pCVar9,(uint)(pcVar7 + (1 - (int)pCVar9)));
  }
  FreeEnvironmentStringsA(pCVar9);
  return pCVar6;
}



/* ================================================================
 * Function: FUN_1000a80a
 * Address:  1000a80a
 * ================================================================ */

void FUN_1000a80a(void)

{
  if ((DAT_10014270 == 1) || ((DAT_10014270 == 0 && (DAT_10014274 == 1)))) {
    FUN_1000a843(0xfc);
    if (DAT_10014434 != (code *)0x0) {
      (*DAT_10014434)();
    }
    FUN_1000a843(0xff);
  }
  return;
}



/* ================================================================
 * Function: FUN_1000a843
 * Address:  1000a843
 * ================================================================ */

void __cdecl FUN_1000a843(DWORD param_1)

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
  pDVar2 = &DAT_10013508;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while ((int)pDVar2 < 0x10013598);
  if (param_1 == (&DAT_10013508)[iVar5 * 2]) {
    if ((DAT_10014270 == 1) || ((DAT_10014270 == 0 && (DAT_10014274 == 1)))) {
      pDVar2 = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x1001350c);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar4,pDVar2,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_10007510(local_1a8,(uint *)"<program name unknown>");
      }
      _Dest = local_1a8;
      sVar4 = _strlen((char *)local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen((char *)local_1a8);
        _Dest = (uint *)(auStackY_1e3 + sVar4);
        _strncpy((char *)_Dest,"...",3);
      }
      FUN_10007510(local_a4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_10007520(local_a4,_Dest);
      FUN_10007520(local_a4,(uint *)&DAT_1000fe98);
      FUN_10007520(local_a4,*(uint **)(iVar5 * 8 + 0x1001350c));
      auStackY_1e3._3_4_ = 0x1000a967;
      FUN_1000c712(local_a4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}



/* ================================================================
 * Function: FUN_1000a996
 * Address:  1000a996
 * ================================================================ */

void __thiscall FUN_1000a996(void *this,byte *param_1,int *param_2,void *param_3)

{
  FUN_1000a9ad(this,param_1,param_2,param_3,0);
  return;
}



/* ================================================================
 * Function: FUN_1000a9ad
 * Address:  1000a9ad
 * ================================================================ */

void * __thiscall FUN_1000a9ad(void *this,byte *param_1,int *param_2,void *param_3,uint param_4)

{
  byte *pbVar1;
  void *pvVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  DWORD *pDVar6;
  void *this_00;
  byte bVar7;
  undefined *puVar8;
  void *local_c;
  byte *local_8;
  
  local_c = (void *)0x0;
  bVar7 = *param_1;
  pbVar1 = param_1;
  while( true ) {
    local_8 = pbVar1 + 1;
    if (DAT_100134d0 < 2) {
      uVar3 = (byte)PTR_DAT_100132c4[(uint)bVar7 * 2] & 8;
      this = PTR_DAT_100132c4;
    }
    else {
      puVar8 = (undefined *)0x8;
      uVar3 = FUN_10009ff9(this,(uint)bVar7,8);
      this = puVar8;
    }
    if (uVar3 == 0) break;
    bVar7 = *local_8;
    pbVar1 = local_8;
  }
  if (bVar7 == 0x2d) {
    param_4 = param_4 | 2;
LAB_1000aa08:
    bVar7 = *local_8;
    local_8 = pbVar1 + 2;
  }
  else if (bVar7 == 0x2b) goto LAB_1000aa08;
  if ((((int)param_3 < 0) || (param_3 == (void *)0x1)) || (0x24 < (int)param_3)) {
    if (param_2 != (int *)0x0) {
      *param_2 = (int)param_1;
    }
    return (void *)0x0;
  }
  this_00 = (void *)0x10;
  if (param_3 == (void *)0x0) {
    if (bVar7 != 0x30) {
      param_3 = (void *)0xa;
      goto LAB_1000aa72;
    }
    if ((*local_8 != 0x78) && (*local_8 != 0x58)) {
      param_3 = (void *)0x8;
      goto LAB_1000aa72;
    }
    param_3 = (void *)0x10;
  }
  if (((param_3 == (void *)0x10) && (bVar7 == 0x30)) && ((*local_8 == 0x78 || (*local_8 == 0x58))))
  {
    bVar7 = local_8[1];
    local_8 = local_8 + 2;
  }
LAB_1000aa72:
  pvVar4 = (void *)(0xffffffff / ZEXT48(param_3));
  do {
    uVar3 = (uint)bVar7;
    if (DAT_100134d0 < 2) {
      uVar5 = (byte)PTR_DAT_100132c4[uVar3 * 2] & 4;
    }
    else {
      pvVar2 = (void *)0x4;
      uVar5 = FUN_10009ff9(this_00,uVar3,4);
      this_00 = pvVar2;
    }
    if (uVar5 == 0) {
      if (DAT_100134d0 < 2) {
        uVar3 = *(ushort *)(PTR_DAT_100132c4 + uVar3 * 2) & 0x103;
      }
      else {
        uVar3 = FUN_10009ff9(this_00,uVar3,0x103);
      }
      if (uVar3 == 0) {
LAB_1000ab1e:
        local_8 = local_8 + -1;
        if ((param_4 & 8) == 0) {
          if (param_2 != (int *)0x0) {
            local_8 = param_1;
          }
          local_c = (void *)0x0;
        }
        else if (((param_4 & 4) != 0) ||
                (((param_4 & 1) == 0 &&
                 ((((param_4 & 2) != 0 && ((void *)0x80000000 < local_c)) ||
                  (((param_4 & 2) == 0 && ((void *)0x7fffffff < local_c)))))))) {
          pDVar6 = FUN_1000c911();
          *pDVar6 = 0x22;
          if ((param_4 & 1) == 0) {
            local_c = (void *)(((param_4 & 2) != 0) + 0x7fffffff);
          }
          else {
            local_c = (void *)0xffffffff;
          }
        }
        if (param_2 != (int *)0x0) {
          *param_2 = (int)local_8;
        }
        if ((param_4 & 2) == 0) {
          return local_c;
        }
        return (void *)-(int)local_c;
      }
      uVar3 = FUN_1000c923((int)(char)bVar7);
      this_00 = (void *)(uVar3 - 0x37);
    }
    else {
      this_00 = (void *)((char)bVar7 + -0x30);
    }
    if (param_3 <= this_00) goto LAB_1000ab1e;
    if ((local_c < pvVar4) ||
       ((local_c == pvVar4 && (this_00 <= (void *)(0xffffffff % ZEXT48(param_3)))))) {
      local_c = (void *)((int)local_c * (int)param_3 + (int)this_00);
      param_4 = param_4 | 8;
    }
    else {
      param_4 = param_4 | 0xc;
    }
    bVar7 = *local_8;
    local_8 = local_8 + 1;
  } while( true );
}



/* ================================================================
 * Function: _strchr
 * Address:  1000abd0
 * ================================================================ */

/* Library Function - Single Match
    _strchr
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strchr(char *_Str,int _Val)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  while (((uint)_Str & 3) != 0) {
    uVar1 = *(uint *)_Str;
    if ((char)uVar1 == (char)_Val) {
      return (char *)(uint *)_Str;
    }
    _Str = (char *)((int)_Str + 1);
    if ((char)uVar1 == '\0') {
      return (char *)0x0;
    }
  }
  while( true ) {
    while( true ) {
      uVar1 = *(uint *)_Str;
      uVar4 = uVar1 ^ CONCAT22(CONCAT11((char)_Val,(char)_Val),CONCAT11((char)_Val,(char)_Val));
      uVar3 = uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff;
      puVar5 = (uint *)((int)_Str + 4);
      if (((uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff) & 0x81010100) != 0) break;
      _Str = (char *)puVar5;
      if ((uVar3 & 0x81010100) != 0) {
        if ((uVar3 & 0x1010100) != 0) {
          return (char *)0x0;
        }
        if ((uVar1 + 0x7efefeff & 0x80000000) == 0) {
          return (char *)0x0;
        }
      }
    }
    uVar1 = *(uint *)_Str;
    if ((char)uVar1 == (char)_Val) {
      return (char *)(uint *)_Str;
    }
    if ((char)uVar1 == '\0') {
      return (char *)0x0;
    }
    cVar2 = (char)(uVar1 >> 8);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 1);
    }
    if (cVar2 == '\0') {
      return (char *)0x0;
    }
    cVar2 = (char)(uVar1 >> 0x10);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 2);
    }
    if (cVar2 == '\0') break;
    cVar2 = (char)(uVar1 >> 0x18);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 3);
    }
    _Str = (char *)puVar5;
    if (cVar2 == '\0') {
      return (char *)0x0;
    }
  }
  return (char *)0x0;
}



/* ================================================================
 * Function: _strstr
 * Address:  1000ac90
 * ================================================================ */

/* Library Function - Single Match
    _strstr
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strstr(char *_Str,char *_SubStr)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  uint *puVar9;
  char *pcVar10;
  
  cVar3 = *_SubStr;
  if (cVar3 == '\0') {
    return _Str;
  }
  if (_SubStr[1] == '\0') {
    while (((uint)_Str & 3) != 0) {
      uVar4 = *(uint *)_Str;
      if ((char)uVar4 == cVar3) {
        return (char *)(uint *)_Str;
      }
      _Str = (char *)((int)_Str + 1);
      if ((char)uVar4 == '\0') {
        return (char *)0x0;
      }
    }
    while( true ) {
      while( true ) {
        uVar4 = *(uint *)_Str;
        uVar7 = uVar4 ^ CONCAT22(CONCAT11(cVar3,cVar3),CONCAT11(cVar3,cVar3));
        uVar6 = uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff;
        puVar9 = (uint *)((int)_Str + 4);
        if (((uVar7 ^ 0xffffffff ^ uVar7 + 0x7efefeff) & 0x81010100) != 0) break;
        _Str = (char *)puVar9;
        if ((uVar6 & 0x81010100) != 0) {
          if ((uVar6 & 0x1010100) != 0) {
            return (char *)0x0;
          }
          if ((uVar4 + 0x7efefeff & 0x80000000) == 0) {
            return (char *)0x0;
          }
        }
      }
      uVar4 = *(uint *)_Str;
      if ((char)uVar4 == cVar3) {
        return (char *)(uint *)_Str;
      }
      if ((char)uVar4 == '\0') {
        return (char *)0x0;
      }
      cVar5 = (char)(uVar4 >> 8);
      if (cVar5 == cVar3) {
        return (char *)((int)_Str + 1);
      }
      if (cVar5 == '\0') {
        return (char *)0x0;
      }
      cVar5 = (char)(uVar4 >> 0x10);
      if (cVar5 == cVar3) {
        return (char *)((int)_Str + 2);
      }
      if (cVar5 == '\0') break;
      cVar5 = (char)(uVar4 >> 0x18);
      if (cVar5 == cVar3) {
        return (char *)((int)_Str + 3);
      }
      _Str = (char *)puVar9;
      if (cVar5 == '\0') {
        return (char *)0x0;
      }
    }
    return (char *)0x0;
  }
  do {
    cVar5 = *_Str;
    do {
      while (_Str = _Str + 1, cVar5 != cVar3) {
        if (cVar5 == '\0') {
          return (char *)0x0;
        }
        cVar5 = *_Str;
      }
      cVar5 = *_Str;
      pcVar10 = _Str + 1;
      pcVar8 = _SubStr;
    } while (cVar5 != _SubStr[1]);
    do {
      if (pcVar8[2] == '\0') {
LAB_1000ad03:
        return _Str + -1;
      }
      if (*pcVar10 != pcVar8[2]) break;
      pcVar1 = pcVar8 + 3;
      if (*pcVar1 == '\0') goto LAB_1000ad03;
      pcVar2 = pcVar10 + 1;
      pcVar8 = pcVar8 + 2;
      pcVar10 = pcVar10 + 2;
    } while (*pcVar1 == *pcVar2);
  } while( true );
}



/* ================================================================
 * Function: _strncmp
 * Address:  1000ad10
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
 * Function: FUN_1000ad50
 * Address:  1000ad50
 * ================================================================ */

undefined4 * __cdecl FUN_1000ad50(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_1000af07_caseD_2;
        case 3:
          goto switchD_1000af07_caseD_3;
        }
        goto switchD_1000af07_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_1000af07_caseD_0;
      case 1:
        goto switchD_1000af07_caseD_1;
      case 2:
        goto switchD_1000af07_caseD_2;
      case 3:
        goto switchD_1000af07_caseD_3;
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
              goto switchD_1000af07_caseD_2;
            case 3:
              goto switchD_1000af07_caseD_3;
            }
            goto switchD_1000af07_caseD_1;
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
              goto switchD_1000af07_caseD_2;
            case 3:
              goto switchD_1000af07_caseD_3;
            }
            goto switchD_1000af07_caseD_1;
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
              goto switchD_1000af07_caseD_2;
            case 3:
              goto switchD_1000af07_caseD_3;
            }
            goto switchD_1000af07_caseD_1;
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
switchD_1000af07_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_1000af07_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_1000af07_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_1000af07_caseD_0:
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
        goto switchD_1000ad85_caseD_2;
      case 3:
        goto switchD_1000ad85_caseD_3;
      }
      goto switchD_1000ad85_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_1000ad85_caseD_0;
    case 1:
      goto switchD_1000ad85_caseD_1;
    case 2:
      goto switchD_1000ad85_caseD_2;
    case 3:
      goto switchD_1000ad85_caseD_3;
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
            goto switchD_1000ad85_caseD_2;
          case 3:
            goto switchD_1000ad85_caseD_3;
          }
          goto switchD_1000ad85_caseD_1;
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
            goto switchD_1000ad85_caseD_2;
          case 3:
            goto switchD_1000ad85_caseD_3;
          }
          goto switchD_1000ad85_caseD_1;
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
            goto switchD_1000ad85_caseD_2;
          case 3:
            goto switchD_1000ad85_caseD_3;
          }
          goto switchD_1000ad85_caseD_1;
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
switchD_1000ad85_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_1000ad85_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_1000ad85_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_1000ad85_caseD_0:
  return param_1;
}



/* ================================================================
 * Function: _memset
 * Address:  1000b090
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
 * Function: FUN_1000b0e8
 * Address:  1000b0e8
 * ================================================================ */

void __cdecl FUN_1000b0e8(uint param_1,int *param_2,ushort *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  uint uVar3;
  uint local_5c [10];
  undefined8 local_34;
  uint local_24;
  
  param_3 = (ushort *)(uint)*param_3;
  iVar2 = *param_2;
  if (iVar2 == 1) {
LAB_1000b12d:
    uVar3 = 8;
  }
  else if (iVar2 == 2) {
    uVar3 = 4;
  }
  else if (iVar2 == 3) {
    uVar3 = 0x11;
  }
  else if (iVar2 == 4) {
    uVar3 = 0x12;
  }
  else {
    if (iVar2 == 5) goto LAB_1000b12d;
    if (iVar2 == 7) {
      *param_2 = 1;
      goto LAB_1000b183;
    }
    if (iVar2 != 8) goto LAB_1000b183;
    uVar3 = 0x10;
  }
  bVar1 = FUN_1000cd11(uVar3,(double *)(param_2 + 6),(uint)param_3);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    if (((param_1 == 0x10) || (param_1 == 0x16)) || (param_1 == 0x1d)) {
      local_34 = *(undefined8 *)(param_2 + 4);
      local_24 = local_24 & 0xffffffe3 | 3;
    }
    else {
      local_24 = local_24 & 0xfffffffe;
    }
    FUN_1000ca5e(local_5c,(uint *)&param_3,uVar3,param_1,(undefined8 *)(param_2 + 2),
                 (undefined8 *)(param_2 + 6));
  }
LAB_1000b183:
  FUN_1000cf70();
  if (((*param_2 != 8) && (DAT_10013c20 == 0)) && (iVar2 = FUN_1000cf50(), iVar2 != 0)) {
    return;
  }
  FUN_1000cf28(*param_2);
  return;
}



/* ================================================================
 * Function: FUN_1000b1b8
 * Address:  1000b1b8
 * ================================================================ */

int * __cdecl FUN_1000b1b8(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint *_Size;
  int *local_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000fed8;
  puStack_10 = &LAB_10008c14;
  local_14 = ExceptionList;
  puVar2 = (uint *)(param_1 * param_2);
  puVar3 = puVar2;
  ExceptionList = &local_14;
  if (puVar2 < (uint *)0xffffffe1) {
    if (puVar2 == (uint *)0x0) {
      puVar3 = (uint *)0x1;
    }
    puVar3 = (uint *)((int)puVar3 + 0xfU & 0xfffffff0);
    ExceptionList = &local_14;
  }
  do {
    local_24 = (int *)0x0;
    if (puVar3 < (uint *)0xffffffe1) {
      if (DAT_10015974 == 3) {
        if (puVar2 <= DAT_1001596c) {
          FUN_10008aa6(9);
          local_8 = 0;
          local_24 = FUN_10007f38(puVar2);
          local_8 = 0xffffffff;
          FUN_1000b251();
          _Size = puVar2;
          if (local_24 == (int *)0x0) goto LAB_1000b2a5;
LAB_1000b294:
          _memset(local_24,0,(size_t)_Size);
        }
LAB_1000b2a0:
        if (local_24 != (int *)0x0) {
          ExceptionList = local_14;
          return local_24;
        }
      }
      else {
        if ((DAT_10015974 != 2) || (DAT_1001319c < puVar3)) goto LAB_1000b2a0;
        FUN_10008aa6(9);
        local_8 = 1;
        local_24 = FUN_100086e5((uint)puVar3 >> 4);
        local_8 = 0xffffffff;
        FUN_1000b2da();
        _Size = puVar3;
        if (local_24 != (int *)0x0) goto LAB_1000b294;
      }
LAB_1000b2a5:
      local_24 = HeapAlloc(DAT_10015970,8,(SIZE_T)puVar3);
    }
    if (local_24 != (int *)0x0) {
      ExceptionList = local_14;
      return local_24;
    }
    if (DAT_10014278 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
    iVar1 = FUN_10007907(puVar3);
    if (iVar1 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
  } while( true );
}



/* ================================================================
 * Function: FUN_1000b251
 * Address:  1000b251
 * ================================================================ */

void FUN_1000b251(void)

{
  FUN_10008b07(9);
  return;
}



/* ================================================================
 * Function: FUN_1000b2da
 * Address:  1000b2da
 * ================================================================ */

void FUN_1000b2da(void)

{
  FUN_10008b07(9);
  return;
}



/* ================================================================
 * Function: FUN_1000b2f5
 * Address:  1000b2f5
 * ================================================================ */

uint __thiscall FUN_1000b2f5(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  undefined2 in_FPUControlWord;
  undefined4 local_8;
  
  local_8 = CONCAT22((short)((uint)this >> 0x10),in_FPUControlWord);
  uVar1 = FUN_1000b340(local_8);
  uVar1 = uVar1 & ~param_2 | param_1 & param_2;
  FUN_1000b3d2(uVar1);
  return uVar1;
}



/* ================================================================
 * Function: FUN_1000b32a
 * Address:  1000b32a
 * ================================================================ */

void __thiscall FUN_1000b32a(void *this,uint param_1,uint param_2)

{
  FUN_1000b2f5(this,param_1,param_2 & 0xfff7ffff);
  return;
}



/* ================================================================
 * Function: FUN_1000b340
 * Address:  1000b340
 * ================================================================ */

uint __cdecl FUN_1000b340(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((param_1 & 1) != 0) {
    uVar1 = 0x10;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_1 & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((param_1 & 0x10) != 0) {
    uVar1 = uVar1 | 2;
  }
  if ((param_1 & 0x20) != 0) {
    uVar1 = uVar1 | 1;
  }
  if ((param_1 & 2) != 0) {
    uVar1 = uVar1 | 0x80000;
  }
  uVar2 = param_1 & 0xc00;
  if (uVar2 != 0) {
    if (uVar2 == 0x400) {
      uVar1 = uVar1 | 0x100;
    }
    else if (uVar2 == 0x800) {
      uVar1 = uVar1 | 0x200;
    }
    else if (uVar2 == 0xc00) {
      uVar1 = uVar1 | 0x300;
    }
  }
  if ((param_1 & 0x300) == 0) {
    uVar1 = uVar1 | 0x20000;
  }
  else if ((param_1 & 0x300) == 0x200) {
    uVar1 = uVar1 | 0x10000;
  }
  if ((param_1 & 0x1000) != 0) {
    uVar1 = uVar1 | 0x40000;
  }
  return uVar1;
}



/* ================================================================
 * Function: FUN_1000b3d2
 * Address:  1000b3d2
 * ================================================================ */

uint __cdecl FUN_1000b3d2(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)((param_1 & 0x10) != 0);
  if ((param_1 & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_1 & 2) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  if ((param_1 & 1) != 0) {
    uVar1 = uVar1 | 0x20;
  }
  if ((param_1 & 0x80000) != 0) {
    uVar1 = uVar1 | 2;
  }
  uVar2 = param_1 & 0x300;
  if (uVar2 != 0) {
    if (uVar2 == 0x100) {
      uVar1 = uVar1 | 0x400;
    }
    else if (uVar2 == 0x200) {
      uVar1 = uVar1 | 0x800;
    }
    else if (uVar2 == 0x300) {
      uVar1 = uVar1 | 0xc00;
    }
  }
  if ((param_1 & 0x30000) == 0) {
    uVar1 = uVar1 | 0x300;
  }
  else if ((param_1 & 0x30000) == 0x10000) {
    uVar1 = uVar1 | 0x200;
  }
  if ((param_1 & 0x40000) != 0) {
    uVar1 = uVar1 | 0x1000;
  }
  return uVar1;
}



/* ================================================================
 * Function: FUN_1000b45b
 * Address:  1000b45b
 * ================================================================ */

uint __cdecl FUN_1000b45b(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_10014478 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      return param_1 + 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_100145d8);
    bVar1 = DAT_100145d4 != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_100145d8);
      this = (void *)0x13;
      FUN_10008aa6(0x13);
    }
    param_1 = FUN_1000b4ca(this,param_1);
    if (bVar1) {
      FUN_10008b07(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_100145d8);
    }
  }
  return param_1;
}



/* ================================================================
 * Function: FUN_1000b4ca
 * Address:  1000b4ca
 * ================================================================ */

uint __thiscall FUN_1000b4ca(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_10014478 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      uVar1 = param_1 + 0x20;
    }
  }
  else {
    iVar3 = 1;
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_100134d0 < 2) {
        uVar2 = (byte)PTR_DAT_100132c4[param_1 * 2] & 1;
      }
      else {
        uVar2 = FUN_10009ff9(this,param_1,1);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_100132c4[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_1000cfe9(DAT_10014478,0x100,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        uVar1 = (uint)local_8 & 0xff;
      }
      else {
        uVar1 = (uint)local_8 & 0xffff;
      }
    }
  }
  return uVar1;
}



/* ================================================================
 * Function: FUN_1000b595
 * Address:  1000b595
 * ================================================================ */

undefined4 __cdecl FUN_1000b595(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if ((*(uint *)(param_1 + (param_2 / 0x20) * 4) & ~(-1 << (0x1fU - (char)(param_2 % 0x20) & 0x1f)))
      != 0) {
    return 0;
  }
  iVar2 = param_2 / 0x20 + 1;
  if (iVar2 < 3) {
    piVar1 = (int *)(param_1 + iVar2 * 4);
    do {
      if (*piVar1 != 0) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < 3);
  }
  return 1;
}



/* ================================================================
 * Function: FUN_1000b5de
 * Address:  1000b5de
 * ================================================================ */

void __cdecl FUN_1000b5de(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  
  puVar3 = (uint *)(param_1 + (param_2 / 0x20) * 4);
  iVar1 = FUN_1000d238(*puVar3,1 << (0x1fU - (char)(param_2 % 0x20) & 0x1f),puVar3);
  iVar2 = param_2 / 0x20 + -1;
  if (-1 < iVar2) {
    puVar3 = (uint *)(param_1 + iVar2 * 4);
    do {
      if (iVar1 == 0) {
        return;
      }
      iVar1 = FUN_1000d238(*puVar3,1,puVar3);
      iVar2 = iVar2 + -1;
      puVar3 = puVar3 + -1;
    } while (-1 < iVar2);
  }
  return;
}



/* ================================================================
 * Function: FUN_1000b634
 * Address:  1000b634
 * ================================================================ */

undefined4 __cdecl FUN_1000b634(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_8;
  
  local_8 = 0;
  puVar1 = (uint *)(param_1 + (param_2 / 0x20) * 4);
  bVar3 = 0x1f - (char)(param_2 % 0x20);
  if (((*puVar1 & 1 << (bVar3 & 0x1f)) != 0) &&
     (iVar2 = FUN_1000b595(param_1,param_2 + 1), iVar2 == 0)) {
    local_8 = FUN_1000b5de(param_1,param_2 + -1);
  }
  *puVar1 = *puVar1 & -1 << (bVar3 & 0x1f);
  iVar2 = param_2 / 0x20 + 1;
  if (iVar2 < 3) {
    puVar5 = (undefined4 *)(param_1 + iVar2 * 4);
    for (iVar4 = 3 - iVar2; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_1000b6c0
 * Address:  1000b6c0
 * ================================================================ */

void __cdecl FUN_1000b6c0(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 - (int)param_2;
  iVar2 = 3;
  do {
    *(undefined4 *)(iVar1 + (int)param_2) = *param_2;
    param_2 = param_2 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



/* ================================================================
 * Function: FUN_1000b6db
 * Address:  1000b6db
 * ================================================================ */

void __cdecl FUN_1000b6db(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ================================================================
 * Function: FUN_1000b6e7
 * Address:  1000b6e7
 * ================================================================ */

undefined4 __cdecl FUN_1000b6e7(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*param_1 != 0) {
      return 0;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 1;
  } while (iVar1 < 3);
  return 1;
}



/* ================================================================
 * Function: FUN_1000b702
 * Address:  1000b702
 * ================================================================ */

void __cdecl FUN_1000b702(uint *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int local_8;
  
  local_8 = 3;
  iVar2 = (int)param_2 / 0x20;
  iVar5 = (int)param_2 % 0x20;
  param_2 = 0;
  bVar3 = (byte)iVar5;
  puVar6 = param_1;
  do {
    uVar1 = *puVar6;
    *puVar6 = uVar1 >> (bVar3 & 0x1f) | param_2;
    puVar6 = puVar6 + 1;
    param_2 = (uVar1 & ~(-1 << (bVar3 & 0x1f))) << (0x20 - bVar3 & 0x1f);
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  iVar5 = 2;
  iVar4 = 8;
  do {
    if (iVar5 < iVar2) {
      *(undefined4 *)(iVar4 + (int)param_1) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + (int)param_1) = *(undefined4 *)(iVar4 + iVar2 * -4 + (int)param_1);
    }
    iVar5 = iVar5 + -1;
    iVar4 = iVar4 + -4;
  } while (-1 < iVar4);
  return;
}



/* ================================================================
 * Function: FUN_1000b78f
 * Address:  1000b78f
 * ================================================================ */

undefined4 __cdecl FUN_1000b78f(ushort *param_1,uint *param_2,int *param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_1c [3];
  uint local_10;
  uint local_c;
  int local_8;
  
  uVar1 = param_1[5];
  local_10 = *(uint *)(param_1 + 3);
  local_c = *(uint *)(param_1 + 1);
  uVar3 = uVar1 & 0x7fff;
  iVar4 = uVar3 - 0x3fff;
  local_8 = (uint)*param_1 << 0x10;
  if (iVar4 == -0x3fff) {
    iVar4 = 0;
    iVar2 = FUN_1000b6e7((int *)&local_10);
    if (iVar2 != 0) {
LAB_1000b8bb:
      uVar5 = 0;
      goto LAB_1000b8bd;
    }
    FUN_1000b6db(&local_10);
  }
  else {
    FUN_1000b6c0((int)local_1c,&local_10);
    iVar2 = FUN_1000b634((int)&local_10,param_3[2]);
    if (iVar2 != 0) {
      iVar4 = uVar3 - 0x3ffe;
    }
    iVar2 = param_3[1];
    if (iVar4 < iVar2 - param_3[2]) {
      FUN_1000b6db(&local_10);
    }
    else {
      if (iVar2 < iVar4) {
        if (*param_3 <= iVar4) {
          FUN_1000b6db(&local_10);
          local_10 = local_10 | 0x80000000;
          FUN_1000b702(&local_10,param_3[3]);
          iVar4 = param_3[5] + *param_3;
          uVar5 = 1;
          goto LAB_1000b8bd;
        }
        local_10 = local_10 & 0x7fffffff;
        iVar4 = param_3[5] + iVar4;
        FUN_1000b702(&local_10,param_3[3]);
        goto LAB_1000b8bb;
      }
      FUN_1000b6c0((int)&local_10,local_1c);
      FUN_1000b702(&local_10,iVar2 - iVar4);
      FUN_1000b634((int)&local_10,param_3[2]);
      FUN_1000b702(&local_10,param_3[3] + 1);
    }
  }
  iVar4 = 0;
  uVar5 = 2;
LAB_1000b8bd:
  local_10 = iVar4 << (0x1fU - (char)param_3[3] & 0x1f) |
             -(uint)((uVar1 & 0x8000) != 0) & 0x80000000 | local_10;
  if (param_3[4] == 0x40) {
    param_2[1] = local_10;
    *param_2 = local_c;
  }
  else if (param_3[4] == 0x20) {
    *param_2 = local_10;
  }
  return uVar5;
}



/* ================================================================
 * Function: FUN_1000b8fb
 * Address:  1000b8fb
 * ================================================================ */

void __cdecl FUN_1000b8fb(ushort *param_1,uint *param_2)

{
  FUN_1000b78f(param_1,param_2,(int *)&DAT_10013628);
  return;
}



/* ================================================================
 * Function: FUN_1000b911
 * Address:  1000b911
 * ================================================================ */

void __cdecl FUN_1000b911(ushort *param_1,uint *param_2)

{
  FUN_1000b78f(param_1,param_2,(int *)&DAT_10013640);
  return;
}



/* ================================================================
 * Function: FUN_1000b927
 * Address:  1000b927
 * ================================================================ */

void __thiscall FUN_1000b927(void *this,uint *param_1,byte *param_2)

{
  ushort local_10 [6];
  
  FUN_1000d3d9(this,local_10,(int *)&param_2,param_2,0,0,0,0);
  FUN_1000b8fb(local_10,param_1);
  return;
}



/* ================================================================
 * Function: FUN_1000b954
 * Address:  1000b954
 * ================================================================ */

void __thiscall FUN_1000b954(void *this,uint *param_1,byte *param_2)

{
  ushort local_10 [6];
  
  FUN_1000d3d9(this,local_10,(int *)&param_2,param_2,0,0,0,0);
  FUN_1000b911(local_10,param_1);
  return;
}



/* ================================================================
 * Function: FUN_1000b981
 * Address:  1000b981
 * ================================================================ */

void __cdecl FUN_1000b981(char *param_1,int param_2,int param_3)

{
  char *_Str;
  char *pcVar1;
  char *pcVar2;
  size_t sVar3;
  char *pcVar4;
  char cVar5;
  
  pcVar1 = param_1;
  pcVar4 = *(char **)(param_3 + 0xc);
  _Str = param_1 + 1;
  *param_1 = '0';
  pcVar2 = _Str;
  if (0 < param_2) {
    param_1 = (char *)param_2;
    param_2 = 0;
    do {
      cVar5 = *pcVar4;
      if (cVar5 == '\0') {
        cVar5 = '0';
      }
      else {
        pcVar4 = pcVar4 + 1;
      }
      *pcVar2 = cVar5;
      pcVar2 = pcVar2 + 1;
      param_1 = param_1 + -1;
    } while (param_1 != (char *)0x0);
  }
  *pcVar2 = '\0';
  if ((-1 < param_2) && ('4' < *pcVar4)) {
    while (pcVar2 = pcVar2 + -1, *pcVar2 == '9') {
      *pcVar2 = '0';
    }
    *pcVar2 = *pcVar2 + '\x01';
  }
  if (*pcVar1 == '1') {
    *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
  }
  else {
    sVar3 = _strlen(_Str);
    FUN_1000ad50((undefined4 *)pcVar1,(undefined4 *)_Str,sVar3 + 1);
  }
  return;
}



/* ================================================================
 * Function: FUN_1000b9f8
 * Address:  1000b9f8
 * ================================================================ */

int * __cdecl FUN_1000b9f8(undefined4 param_1,undefined4 param_2,int *param_3,uint *param_4)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  undefined4 in_stack_ffffffbc;
  undefined2 uVar4;
  short local_2c;
  char local_2a;
  uint local_28 [6];
  uint local_10;
  uint uStack_c;
  undefined2 uStack_8;
  
  uVar4 = (undefined2)((uint)in_stack_ffffffbc >> 0x10);
  FUN_1000ba54(&local_10,&param_1);
  iVar3 = FUN_1000d8aa(local_10,uStack_c,CONCAT22(uVar4,uStack_8),0x11,0,&local_2c);
  puVar2 = param_4;
  piVar1 = param_3;
  param_3[2] = iVar3;
  *param_3 = (int)local_2a;
  param_3[1] = (int)local_2c;
  FUN_10007510(param_4,local_28);
  piVar1[3] = (int)puVar2;
  return piVar1;
}



/* ================================================================
 * Function: FUN_1000ba54
 * Address:  1000ba54
 * ================================================================ */

void __cdecl FUN_1000ba54(uint *param_1,uint *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint local_8;
  
  uVar1 = *(ushort *)((int)param_2 + 6);
  uVar3 = (uVar1 & 0x7ff0) >> 4;
  uVar2 = *param_2;
  local_8 = 0x80000000;
  if (uVar3 == 0) {
    if (((param_2[1] & 0xfffff) == 0) && (uVar2 == 0)) {
      param_1[1] = 0;
      *param_1 = 0;
      *(undefined2 *)(param_1 + 2) = 0;
      return;
    }
    iVar4 = 0x3c01;
    local_8 = 0;
  }
  else if (uVar3 == 0x7ff) {
    iVar4 = 0x7fff;
  }
  else {
    iVar4 = uVar3 + 0x3c00;
  }
  local_8 = uVar2 >> 0x15 | (param_2[1] & 0xfffff) << 0xb | local_8;
  param_1[1] = local_8;
  *param_1 = uVar2 << 0xb;
  while ((local_8 & 0x80000000) == 0) {
    local_8 = *param_1 >> 0x1f | local_8 * 2;
    *param_1 = *param_1 * 2;
    param_1[1] = local_8;
    iVar4 = iVar4 + 0xffff;
  }
  *(ushort *)(param_1 + 2) = uVar1 & 0x8000 | (ushort)iVar4;
  return;
}



/* ================================================================
 * Function: _strlen
 * Address:  1000bb10
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
    if (((uint)puVar2 & 3) == 0) goto LAB_1000bb30;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_1000bb63:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_1000bb30:
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
  goto LAB_1000bb63;
}



/* ================================================================
 * Function: __fptrap
 * Address:  1000bb8b
 * ================================================================ */

/* Library Function - Single Match
    __fptrap
   
   Library: Visual Studio 2003 Release */

void __cdecl __fptrap(void)

{
  __amsg_exit(2);
  return;
}



/* ================================================================
 * Function: FUN_1000bb94
 * Address:  1000bb94
 * ================================================================ */

DWORD __cdecl FUN_1000bb94(uint param_1,LONG param_2,DWORD param_3)

{
  DWORD DVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_10015940) &&
     ((*(byte *)((&DAT_10015840)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000dbfe(param_1);
    DVar1 = FUN_1000bbf9(param_1,param_2,param_3);
    FUN_1000dc5d(param_1);
    return DVar1;
  }
  pDVar2 = FUN_1000c911();
  *pDVar2 = 9;
  pDVar2 = FUN_1000c91a();
  *pDVar2 = 0;
  return 0xffffffff;
}



/* ================================================================
 * Function: FUN_1000bbf9
 * Address:  1000bbf9
 * ================================================================ */

DWORD __cdecl FUN_1000bbf9(uint param_1,LONG param_2,DWORD param_3)

{
  byte *pbVar1;
  HANDLE hFile;
  DWORD *pDVar2;
  DWORD DVar3;
  uint uVar4;
  
  hFile = (HANDLE)FUN_1000dbbc(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    pDVar2 = FUN_1000c911();
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
      pbVar1 = (byte *)((&DAT_10015840)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24);
      *pbVar1 = *pbVar1 & 0xfd;
      return DVar3;
    }
    FUN_1000c89e(uVar4);
  }
  return 0xffffffff;
}



/* ================================================================
 * Function: FUN_1000bc6c
 * Address:  1000bc6c
 * ================================================================ */

int __cdecl FUN_1000bc6c(uint param_1,char *param_2,uint param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_10015940) &&
     ((*(byte *)((&DAT_10015840)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000dbfe(param_1);
    iVar1 = FUN_1000bcd1(param_1,param_2,param_3);
    FUN_1000dc5d(param_1);
    return iVar1;
  }
  pDVar2 = FUN_1000c911();
  *pDVar2 = 9;
  pDVar2 = FUN_1000c91a();
  *pDVar2 = 0;
  return -1;
}



/* ================================================================
 * Function: FUN_1000bcd1
 * Address:  1000bcd1
 * ================================================================ */

int __cdecl FUN_1000bcd1(DWORD param_1,char *param_2,uint param_3)

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
LAB_1000bcea:
    iVar4 = 0;
  }
  else {
    piVar1 = &DAT_10015840 + ((int)param_1 >> 5);
    iVar4 = (param_1 & 0x1f) * 0x24;
    if ((*(byte *)(*piVar1 + 4 + iVar4) & 0x20) != 0) {
      FUN_1000bbf9(param_1,0,2);
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
LAB_1000bdb9:
      if (local_c != 0) {
        return local_c - local_14;
      }
      if (param_1 == 0) goto LAB_1000be2b;
      if (param_1 == 5) {
        pDVar7 = FUN_1000c911();
        *pDVar7 = 9;
        pDVar7 = FUN_1000c91a();
        *pDVar7 = 5;
      }
      else {
        FUN_1000c89e(param_1);
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
            goto LAB_1000bdb9;
          }
          local_c = local_c + local_10;
          if (((int)local_10 < (int)pcVar5 - (int)local_418) ||
             (param_3 <= (uint)((int)local_8 - (int)param_2))) goto LAB_1000bdb9;
        } while( true );
      }
LAB_1000be2b:
      if (((*(byte *)(*piVar1 + 4 + iVar4) & 0x40) != 0) && (*param_2 == '\x1a')) goto LAB_1000bcea;
      pDVar7 = FUN_1000c911();
      *pDVar7 = 0x1c;
      pDVar7 = FUN_1000c91a();
      *pDVar7 = 0;
    }
    iVar4 = -1;
  }
  return iVar4;
}



/* ================================================================
 * Function: FUN_1000be5c
 * Address:  1000be5c
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1000be5c(undefined4 *param_1)

{
  void *pvVar1;
  
  _DAT_10014438 = _DAT_10014438 + 1;
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
 * Function: FUN_1000bea0
 * Address:  1000bea0
 * ================================================================ */

byte __cdecl FUN_1000bea0(uint param_1)

{
  if (DAT_10015940 <= param_1) {
    return 0;
  }
  return *(byte *)((&DAT_10015840)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0x40;
}



/* ================================================================
 * Function: FUN_1000bf85
 * Address:  1000bf85
 * ================================================================ */

void __cdecl FUN_1000bf85(uint param_1)

{
  if ((0x1001365f < param_1) && (param_1 < 0x100138c1)) {
    FUN_10008aa6(((int)(param_1 + 0xeffec9a0) >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



/* ================================================================
 * Function: FUN_1000bfb4
 * Address:  1000bfb4
 * ================================================================ */

void __cdecl FUN_1000bfb4(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_10008aa6(param_1 + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



/* ================================================================
 * Function: FUN_1000bfd7
 * Address:  1000bfd7
 * ================================================================ */

void __cdecl FUN_1000bfd7(uint param_1)

{
  if ((0x1001365f < param_1) && (param_1 < 0x100138c1)) {
    FUN_10008b07(((int)(param_1 + 0xeffec9a0) >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



/* ================================================================
 * Function: FUN_1000c006
 * Address:  1000c006
 * ================================================================ */

void __cdecl FUN_1000c006(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_10008b07(param_1 + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



/* ================================================================
 * Function: FUN_1000c029
 * Address:  1000c029
 * ================================================================ */

int __cdecl FUN_1000c029(LPSTR param_1,WCHAR param_2)

{
  int iVar1;
  bool bVar2;
  
  InterlockedIncrement((LONG *)&DAT_100145d8);
  bVar2 = DAT_100145d4 != 0;
  if (bVar2) {
    InterlockedDecrement((LONG *)&DAT_100145d8);
    FUN_10008aa6(0x13);
  }
  iVar1 = FUN_1000c082(param_1,param_2);
  if (bVar2) {
    FUN_10008b07(0x13);
  }
  else {
    InterlockedDecrement((LONG *)&DAT_100145d8);
  }
  return iVar1;
}



/* ================================================================
 * Function: FUN_1000c082
 * Address:  1000c082
 * ================================================================ */

int __cdecl FUN_1000c082(LPSTR param_1,WCHAR param_2)

{
  LPSTR lpMultiByteStr;
  int iVar1;
  DWORD *pDVar2;
  
  lpMultiByteStr = param_1;
  if (param_1 == (LPSTR)0x0) {
    return 0;
  }
  if (DAT_10014478 == 0) {
    if ((ushort)param_2 < 0x100) {
      *param_1 = (CHAR)param_2;
      return 1;
    }
  }
  else {
    param_1 = (LPSTR)0x0;
    iVar1 = WideCharToMultiByte(DAT_10014488,0x220,&param_2,1,lpMultiByteStr,DAT_100134d0,
                                (LPCSTR)0x0,(LPBOOL)&param_1);
    if ((iVar1 != 0) && (param_1 == (LPSTR)0x0)) {
      return iVar1;
    }
  }
  pDVar2 = FUN_1000c911();
  *pDVar2 = 0x2a;
  return -1;
}



/* ================================================================
 * Function: __aulldiv
 * Address:  1000c0f0
 * ================================================================ */

/* Library Function - Single Match
    __aulldiv
   
   Library: Visual Studio */

undefined8 __aulldiv(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar3 = param_1;
  uVar8 = param_4;
  uVar6 = param_2;
  uVar9 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar5 = uVar8 >> 1;
      uVar9 = uVar9 >> 1 | (uint)((uVar8 & 1) != 0) << 0x1f;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
      uVar8 = uVar5;
      uVar6 = uVar7;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar9;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar8 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar8)) ||
       ((param_2 <= uVar8 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar3,iVar4);
}



/* ================================================================
 * Function: __aullrem
 * Address:  1000c160
 * ================================================================ */

/* Library Function - Single Match
    __aullrem
   
   Library: Visual Studio */

undefined8 __aullrem(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar3 = param_1;
  uVar4 = param_4;
  uVar9 = param_2;
  uVar10 = param_3;
  if (param_4 == 0) {
    iVar6 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) %
                 (ulonglong)param_3);
    iVar7 = 0;
  }
  else {
    do {
      uVar5 = uVar4 >> 1;
      uVar10 = uVar10 >> 1 | (uint)((uVar4 & 1) != 0) << 0x1f;
      uVar8 = uVar9 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar9 & 1) != 0) << 0x1f;
      uVar4 = uVar5;
      uVar9 = uVar8;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar8,uVar3) / (ulonglong)uVar10;
    uVar3 = (int)uVar1 * param_4;
    lVar2 = (uVar1 & 0xffffffff) * (ulonglong)param_3;
    uVar9 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar4 = (uint)lVar2;
    uVar10 = uVar9 + uVar3;
    if (((CARRY4(uVar9,uVar3)) || (param_2 < uVar10)) || ((param_2 <= uVar10 && (param_1 < uVar4))))
    {
      bVar11 = uVar4 < param_3;
      uVar4 = uVar4 - param_3;
      uVar10 = (uVar10 - param_4) - (uint)bVar11;
    }
    iVar6 = -(uVar4 - param_1);
    iVar7 = -(uint)(uVar4 - param_1 != 0) - ((uVar10 - param_2) - (uint)(uVar4 < param_1));
  }
  return CONCAT44(iVar7,iVar6);
}



/* ================================================================
 * Function: FUN_1000c1d5
 * Address:  1000c1d5
 * ================================================================ */

BOOL __cdecl
FUN_1000c1d5(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
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
  puStack_c = &DAT_1000fef8;
  puStack_10 = &LAB_10008c14;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc8;
  iVar3 = DAT_1001443c;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc8;
  if (DAT_1001443c == 0) {
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
  DAT_1001443c = iVar3;
  if (DAT_1001443c != 2) {
    if (DAT_1001443c == 1) {
      if (param_5 == 0) {
        param_5 = DAT_10014488;
      }
      iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,
                                  (LPWSTR)0x0,0);
      if (iVar3 != 0) {
        local_8 = 0;
        FUN_10007600();
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
    param_6 = DAT_10014478;
  }
  BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return BVar2;
}



/* ================================================================
 * Function: FUN_1000c31e
 * Address:  1000c31e
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1000c31e(int param_1)

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
  
  FUN_10008aa6(0x19);
  CodePage = FUN_1000c4cb(param_1);
  if (CodePage != DAT_100145dc) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_100138e8;
LAB_1000c35b:
      if (*pUVar5 != CodePage) goto code_r0x1000c35f;
      local_8 = 0;
      puVar15 = &DAT_10014700;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x100138f8);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_100138e0)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_10014700 + uVar8 + 1);
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
      _DAT_100145ec = 1;
      DAT_100145dc = CodePage;
      DAT_10014804 = FUN_1000c515(CodePage);
      DAT_100145e0 = *(undefined4 *)(iVar12 + 0x100138ec);
      DAT_100145e4 = *(undefined4 *)(iVar12 + 0x100138f0);
      DAT_100145e8 = *(undefined4 *)(iVar12 + 0x100138f4);
      goto LAB_1000c4af;
    }
    goto LAB_1000c4aa;
  }
  goto LAB_1000c345;
code_r0x1000c35f:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if (0x100139d7 < (int)pUVar5) goto code_r0x1000c36a;
  goto LAB_1000c35b;
code_r0x1000c36a:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_10014804 = 0;
    puVar15 = &DAT_10014700;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      _DAT_100145ec = 0;
      DAT_100145dc = CodePage;
    }
    else {
      DAT_100145dc = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_10014700 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_10014700 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_10014804 = FUN_1000c515(CodePage);
      _DAT_100145ec = 1;
    }
    DAT_100145e0 = 0;
    DAT_100145e4 = 0;
    DAT_100145e8 = 0;
  }
  else {
    if (DAT_10014440 == 0) {
      uVar14 = 0xffffffff;
      goto LAB_1000c4bc;
    }
LAB_1000c4aa:
    FUN_1000c548();
  }
LAB_1000c4af:
  FUN_1000c571();
LAB_1000c345:
  uVar14 = 0;
LAB_1000c4bc:
  FUN_10008b07(0x19);
  return uVar14;
}



/* ================================================================
 * Function: FUN_1000c4cb
 * Address:  1000c4cb
 * ================================================================ */

int __cdecl FUN_1000c4cb(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_10014440 = 1;
                    /* WARNING: Could not recover jumptable at 0x1000c4e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_10014440 = 1;
                    /* WARNING: Could not recover jumptable at 0x1000c4fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_10014488;
  }
  DAT_10014440 = (uint)bVar2;
  return param_1;
}



/* ================================================================
 * Function: FUN_1000c515
 * Address:  1000c515
 * ================================================================ */

undefined4 __cdecl FUN_1000c515(int param_1)

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
 * Function: FUN_1000c548
 * Address:  1000c548
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000c548(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_10014700;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_100145dc = 0;
  _DAT_100145ec = 0;
  DAT_10014804 = 0;
  DAT_100145e0 = 0;
  DAT_100145e4 = 0;
  DAT_100145e8 = 0;
  return;
}



/* ================================================================
 * Function: FUN_1000c571
 * Address:  1000c571
 * ================================================================ */

void FUN_1000c571(void)

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
  
  BVar2 = GetCPInfo(DAT_100145dc,&local_18);
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
    FUN_1000c1d5(1,local_118,0x100,local_518,DAT_100145dc,DAT_10014804,0);
    FUN_1000cfe9(DAT_10014804,0x100,local_118,0x100,local_218,0x100,DAT_100145dc,0);
    FUN_1000cfe9(DAT_10014804,0x200,local_118,0x100,local_318,0x100,DAT_100145dc,0);
    uVar3 = 0;
    puVar7 = local_518;
    do {
      if ((*puVar7 & 1) == 0) {
        if ((*puVar7 & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_10014700 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          uVar8 = *(undefined1 *)((int)local_318 + uVar3);
          goto LAB_1000c67d;
        }
        (&DAT_10014600)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_10014700 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        uVar8 = *(undefined1 *)((int)local_218 + uVar3);
LAB_1000c67d:
        (&DAT_10014600)[uVar3] = uVar8;
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
          pbVar1 = (byte *)((int)&DAT_10014700 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar4 = (char)uVar3 + -0x20;
          goto LAB_1000c6c7;
        }
        (&DAT_10014600)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_10014700 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar4 = (char)uVar3 + ' ';
LAB_1000c6c7:
        (&DAT_10014600)[uVar3] = cVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}



/* ================================================================
 * Function: FUN_1000c6f6
 * Address:  1000c6f6
 * ================================================================ */

void FUN_1000c6f6(void)

{
  if (DAT_10015948 == 0) {
    FUN_1000c31e(-3);
    DAT_10015948 = 1;
  }
  return;
}



/* ================================================================
 * Function: FUN_1000c712
 * Address:  1000c712
 * ================================================================ */

int __cdecl FUN_1000c712(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_10014444 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_10014444 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_10014444 != (FARPROC)0x0) {
        DAT_10014448 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_1001444c = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_1000c761;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_1000c761:
    if (DAT_10014448 != (FARPROC)0x0) {
      iVar1 = (*DAT_10014448)();
      if ((iVar1 != 0) && (DAT_1001444c != (FARPROC)0x0)) {
        iVar1 = (*DAT_1001444c)(iVar1);
      }
    }
    iVar1 = (*DAT_10014444)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}



/* ================================================================
 * Function: _strncpy
 * Address:  1000c7a0
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
        goto joined_r0x1000c7de;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_1000c81b;
        goto LAB_1000c889;
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
joined_r0x1000c885:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_1000c889:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_1000c81b;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x1000c885;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x1000c885;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x1000c885;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x1000c7de:
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
LAB_1000c81b:
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
 * Function: FUN_1000c89e
 * Address:  1000c89e
 * ================================================================ */

void __cdecl FUN_1000c89e(uint param_1)

{
  DWORD *pDVar1;
  uint *puVar2;
  int iVar3;
  
  pDVar1 = FUN_1000c91a();
  iVar3 = 0;
  *pDVar1 = param_1;
  puVar2 = &DAT_100139e0;
  do {
    if (param_1 == *puVar2) {
      pDVar1 = FUN_1000c911();
      *pDVar1 = *(DWORD *)(iVar3 * 8 + 0x100139e4);
      return;
    }
    puVar2 = puVar2 + 2;
    iVar3 = iVar3 + 1;
  } while ((int)puVar2 < 0x10013b48);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    pDVar1 = FUN_1000c911();
    *pDVar1 = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    pDVar1 = FUN_1000c911();
    *pDVar1 = 8;
    return;
  }
  pDVar1 = FUN_1000c911();
  *pDVar1 = 0x16;
  return;
}



/* ================================================================
 * Function: FUN_1000c911
 * Address:  1000c911
 * ================================================================ */

DWORD * FUN_1000c911(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10009131();
  return pDVar1 + 2;
}



/* ================================================================
 * Function: FUN_1000c91a
 * Address:  1000c91a
 * ================================================================ */

DWORD * FUN_1000c91a(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10009131();
  return pDVar1 + 3;
}



/* ================================================================
 * Function: FUN_1000c923
 * Address:  1000c923
 * ================================================================ */

uint __cdecl FUN_1000c923(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_10014478 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      return param_1 - 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_100145d8);
    bVar1 = DAT_100145d4 != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_100145d8);
      this = (void *)0x13;
      FUN_10008aa6(0x13);
    }
    param_1 = FUN_1000c992(this,param_1);
    if (bVar1) {
      FUN_10008b07(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_100145d8);
    }
  }
  return param_1;
}



/* ================================================================
 * Function: FUN_1000c992
 * Address:  1000c992
 * ================================================================ */

uint __thiscall FUN_1000c992(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_10014478 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      uVar1 = param_1 - 0x20;
    }
  }
  else {
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_100134d0 < 2) {
        uVar2 = (byte)PTR_DAT_100132c4[param_1 * 2] & 2;
      }
      else {
        uVar2 = FUN_10009ff9(this,param_1,2);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_100132c4[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
      iVar3 = 1;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_1000cfe9(DAT_10014478,0x200,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        uVar1 = (uint)local_8 & 0xff;
      }
      else {
        uVar1 = (uint)local_8 & 0xffff;
      }
    }
  }
  return uVar1;
}



/* ================================================================
 * Function: FUN_1000ca5e
 * Address:  1000ca5e
 * ================================================================ */

void __cdecl
FUN_1000ca5e(uint *param_1,uint *param_2,uint param_3,uint param_4,undefined8 *param_5,
            undefined8 *param_6)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  uVar3 = param_3;
  puVar1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_3 & 0x10) != 0) {
    param_3 = 0xc000008f;
    param_1[1] = param_1[1] | 1;
  }
  if ((uVar3 & 2) != 0) {
    param_3 = 0xc0000093;
    param_1[1] = param_1[1] | 2;
  }
  if ((uVar3 & 1) != 0) {
    param_3 = 0xc0000091;
    param_1[1] = param_1[1] | 4;
  }
  if ((uVar3 & 4) != 0) {
    param_3 = 0xc000008e;
    param_1[1] = param_1[1] | 8;
  }
  if ((uVar3 & 8) != 0) {
    param_3 = 0xc0000090;
    param_1[1] = param_1[1] | 0x10;
  }
  param_1[2] = (~*param_2 & 1) << 4 | param_1[2] & 0xffffffef;
  param_1[2] = (~*param_2 & 4) << 1 | param_1[2] & 0xfffffff7;
  param_1[2] = ~*param_2 >> 1 & 4 | param_1[2] & 0xfffffffb;
  param_1[2] = ~*param_2 >> 3 & 2 | param_1[2] & 0xfffffffd;
  param_1[2] = ~*param_2 >> 5 & 1 | param_1[2] & 0xfffffffe;
  uVar3 = FUN_1000cf53();
  puVar2 = param_6;
  if ((uVar3 & 1) != 0) {
    param_1[3] = param_1[3] | 0x10;
  }
  if ((uVar3 & 4) != 0) {
    param_1[3] = param_1[3] | 8;
  }
  if ((uVar3 & 8) != 0) {
    param_1[3] = param_1[3] | 4;
  }
  if ((uVar3 & 0x10) != 0) {
    param_1[3] = param_1[3] | 2;
  }
  if ((uVar3 & 0x20) != 0) {
    param_1[3] = param_1[3] | 1;
  }
  uVar3 = *puVar1 & 0xc00;
  if (uVar3 == 0) {
    *param_1 = *param_1 & 0xfffffffc;
  }
  else {
    if (uVar3 == 0x400) {
      uVar3 = *param_1 & 0xfffffffd | 1;
    }
    else {
      if (uVar3 != 0x800) {
        if (uVar3 == 0xc00) {
          *param_1 = *param_1 | 3;
        }
        goto LAB_1000cbd3;
      }
      uVar3 = *param_1 & 0xfffffffe | 2;
    }
    *param_1 = uVar3;
  }
LAB_1000cbd3:
  uVar3 = *puVar1 & 0x300;
  if (uVar3 == 0) {
    uVar3 = *param_1 & 0xffffffeb | 8;
LAB_1000cc09:
    *param_1 = uVar3;
  }
  else {
    if (uVar3 == 0x200) {
      uVar3 = *param_1 & 0xffffffe7 | 4;
      goto LAB_1000cc09;
    }
    if (uVar3 == 0x300) {
      *param_1 = *param_1 & 0xffffffe3;
    }
  }
  *param_1 = (param_4 & 0xfff) << 5 | *param_1 & 0xfffe001f;
  param_1[8] = param_1[8] | 1;
  param_1[8] = param_1[8] & 0xffffffe3 | 2;
  *(undefined8 *)(param_1 + 4) = *param_5;
  param_1[0x14] = param_1[0x14] | 1;
  param_1[0x14] = param_1[0x14] & 0xffffffe3 | 2;
  *(undefined8 *)(param_1 + 0x10) = *param_6;
  FUN_1000cf61();
  RaiseException(param_3,0,1,(ULONG_PTR *)&param_1);
  if ((param_1[2] & 0x10) != 0) {
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  if ((param_1[2] & 8) != 0) {
    *puVar1 = *puVar1 & 0xfffffffb;
  }
  if ((param_1[2] & 4) != 0) {
    *puVar1 = *puVar1 & 0xfffffff7;
  }
  if ((param_1[2] & 2) != 0) {
    *puVar1 = *puVar1 & 0xffffffef;
  }
  if ((param_1[2] & 1) != 0) {
    *puVar1 = *puVar1 & 0xffffffdf;
  }
  uVar3 = *param_1 & 3;
  if (uVar3 == 0) {
    *puVar1 = *puVar1 & 0xfffff3ff;
  }
  else {
    if (uVar3 == 1) {
      uVar3 = *puVar1 & 0xfffff7ff | 0x400;
    }
    else {
      if (uVar3 != 2) {
        if (uVar3 == 3) {
          *(byte *)((int)puVar1 + 1) = *(byte *)((int)puVar1 + 1) | 0xc;
        }
        goto LAB_1000ccde;
      }
      uVar3 = *puVar1 & 0xfffffbff | 0x800;
    }
    *puVar1 = uVar3;
  }
LAB_1000ccde:
  uVar3 = *param_1 >> 2 & 7;
  if (uVar3 == 0) {
    uVar3 = *puVar1 & 0xfffff3ff | 0x300;
  }
  else {
    if (uVar3 != 1) {
      if (uVar3 == 2) {
        *puVar1 = *puVar1 & 0xfffff3ff;
      }
      goto LAB_1000cd07;
    }
    uVar3 = *puVar1 & 0xfffff3ff | 0x200;
  }
  *puVar1 = uVar3;
LAB_1000cd07:
  *puVar2 = *(undefined8 *)(param_1 + 0x10);
  return;
}



/* ================================================================
 * Function: FUN_1000cd11
 * Address:  1000cd11
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl FUN_1000cd11(uint param_1,double *param_2,uint param_3)

{
  double dVar1;
  bool bVar2;
  uint uVar3;
  bool bVar4;
  float10 fVar5;
  undefined8 local_10;
  int local_8;
  
  uVar3 = param_1 & 0x1f;
  bVar2 = true;
  if (((param_1 & 8) != 0) && ((param_3 & 1) != 0)) {
    FUN_1000cf93();
    uVar3 = param_1 & 0x17;
    goto LAB_1000cf06;
  }
  if (((param_1 & 4) != 0) && ((param_3 & 4) != 0)) {
    FUN_1000cf93();
    uVar3 = param_1 & 0x1b;
    goto LAB_1000cf06;
  }
  if (((param_1 & 1) == 0) || ((param_3 & 8) == 0)) {
    if (((param_1 & 2) != 0) && ((param_3 & 0x10) != 0)) {
      bVar4 = (param_1 & 0x10) != 0;
      dVar1 = *param_2;
      if (dVar1 != _DAT_1000fb60) {
        fVar5 = FUN_1000de60(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20),&local_8);
        local_8 = local_8 + -0x600;
        if (local_8 < -0x432) {
          local_10 = 0.0;
          bVar4 = bVar2;
        }
        else {
          local_10 = (double)(ulonglong)
                             (SUB87((double)fVar5,0) & 0xfffffffffffff | 0x10000000000000);
          if (local_8 < -0x3fd) {
            local_8 = -0x3fd - local_8;
            do {
              if ((((ulonglong)local_10 & 1) != 0) && (!bVar4)) {
                bVar4 = bVar2;
              }
              uVar3 = (uint)local_10 >> 1;
              if (((ulonglong)local_10 & 0x100000000) != 0) {
                local_10._3_1_ = (byte)((ulonglong)local_10 >> 0x18) >> 1;
                local_10._0_3_ = (undefined3)uVar3;
                local_10._0_4_ = CONCAT13(local_10._3_1_,(undefined3)local_10) | 0x80000000;
                uVar3 = (uint)local_10;
              }
              local_10._0_4_ = uVar3;
              local_10 = (double)CONCAT44(local_10._4_4_ >> 1,(uint)local_10);
              local_8 = local_8 + -1;
            } while (local_8 != 0);
          }
          if ((double)fVar5 < _DAT_1000fb60) {
            local_10 = -local_10;
          }
        }
        *param_2 = local_10;
        bVar2 = bVar4;
      }
      if (bVar2) {
        FUN_1000cf93();
      }
      uVar3 = param_1 & 0x1d;
    }
    goto LAB_1000cf06;
  }
  FUN_1000cf93();
  uVar3 = param_3 & 0xc00;
  dVar1 = _DAT_10013d48;
  if (uVar3 == 0) {
    if (*param_2 <= _DAT_1000fb60) {
      dVar1 = -_DAT_10013d48;
    }
LAB_1000ce26:
    *param_2 = dVar1;
  }
  else {
    if (uVar3 == 0x400) {
      dVar1 = _DAT_10013d58;
      if (*param_2 <= _DAT_1000fb60) {
        dVar1 = -_DAT_10013d48;
      }
      goto LAB_1000ce26;
    }
    if (uVar3 == 0x800) {
      if (*param_2 <= _DAT_1000fb60) {
        dVar1 = -_DAT_10013d58;
      }
      goto LAB_1000ce26;
    }
    if (uVar3 == 0xc00) {
      dVar1 = _DAT_10013d58;
      if (*param_2 <= _DAT_1000fb60) {
        dVar1 = -_DAT_10013d58;
      }
      goto LAB_1000ce26;
    }
  }
  uVar3 = param_1 & 0x1e;
LAB_1000cf06:
  if (((param_1 & 0x10) != 0) && ((param_3 & 0x20) != 0)) {
    FUN_1000cf93();
    uVar3 = uVar3 & 0xffffffef;
  }
  return uVar3 == 0;
}



/* ================================================================
 * Function: FUN_1000cf28
 * Address:  1000cf28
 * ================================================================ */

void __cdecl FUN_1000cf28(int param_1)

{
  DWORD *pDVar1;
  
  if (param_1 == 1) {
    pDVar1 = FUN_1000c911();
    *pDVar1 = 0x21;
  }
  else if ((1 < param_1) && (param_1 < 4)) {
    pDVar1 = FUN_1000c911();
    *pDVar1 = 0x22;
    return;
  }
  return;
}



/* ================================================================
 * Function: FUN_1000cf50
 * Address:  1000cf50
 * ================================================================ */

undefined4 FUN_1000cf50(void)

{
  return 0;
}



/* ================================================================
 * Function: FUN_1000cf53
 * Address:  1000cf53
 * ================================================================ */

int FUN_1000cf53(void)

{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}



/* ================================================================
 * Function: FUN_1000cf61
 * Address:  1000cf61
 * ================================================================ */

int FUN_1000cf61(void)

{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}



/* ================================================================
 * Function: FUN_1000cf70
 * Address:  1000cf70
 * ================================================================ */

int FUN_1000cf70(void)

{
  short in_FPUControlWord;
  
  return (int)in_FPUControlWord;
}



/* ================================================================
 * Function: FUN_1000cf93
 * Address:  1000cf93
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000cf93(void)

{
  return;
}



/* ================================================================
 * Function: FUN_1000cfe9
 * Address:  1000cfe9
 * ================================================================ */

int __cdecl
FUN_1000cfe9(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000fff8;
  puStack_10 = &LAB_10008c14;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_10014490 == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_10014490 = 2;
    }
    else {
      DAT_10014490 = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_1000d20d(param_3,param_4);
  }
  if (DAT_10014490 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
    ExceptionList = local_14;
    return iVar1;
  }
  if (DAT_10014490 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_10014488;
    }
    iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar1 != 0) {
      local_8 = 0;
      FUN_10007600();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x3c) &&
         (iVar2 = MultiByteToWideChar(param_7,1,param_3,param_4,(LPWSTR)&stack0xffffffc4,iVar1),
         iVar2 != 0)) {
        iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          if ((param_2 & 0x400) == 0) {
            local_8 = 1;
            FUN_10007600();
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
 * Function: FUN_1000d20d
 * Address:  1000d20d
 * ================================================================ */

int __cdecl FUN_1000d20d(char *param_1,int param_2)

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
 * Function: FUN_1000d238
 * Address:  1000d238
 * ================================================================ */

undefined4 __cdecl FUN_1000d238(uint param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = param_1 + param_2;
  if ((uVar1 < param_1) || (uVar1 < param_2)) {
    uVar2 = 1;
  }
  *param_3 = uVar1;
  return uVar2;
}



/* ================================================================
 * Function: ___add_12
 * Address:  1000d259
 * ================================================================ */

/* Library Function - Single Match
    ___add_12
   
   Library: Visual Studio 2003 Release */

void __cdecl ___add_12(uint *param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = FUN_1000d238(*param_1,*param_2,param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_1000d238(param_1[1],1,param_1 + 1);
    if (iVar1 != 0) {
      param_1[2] = param_1[2] + 1;
    }
  }
  iVar1 = FUN_1000d238(param_1[1],param_2[1],param_1 + 1);
  if (iVar1 != 0) {
    param_1[2] = param_1[2] + 1;
  }
  FUN_1000d238(param_1[2],param_2[2],param_1 + 2);
  return;
}



/* ================================================================
 * Function: FUN_1000d2b7
 * Address:  1000d2b7
 * ================================================================ */

void __cdecl FUN_1000d2b7(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1 * 2;
  param_1[1] = uVar2 * 2 | uVar1 >> 0x1f;
  param_1[2] = param_1[2] << 1 | uVar2 >> 0x1f;
  return;
}



/* ================================================================
 * Function: FUN_1000d2e5
 * Address:  1000d2e5
 * ================================================================ */

void __cdecl FUN_1000d2e5(uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = uVar1 >> 1 | param_1[2] << 0x1f;
  param_1[2] = param_1[2] >> 1;
  *param_1 = *param_1 >> 1 | uVar1 << 0x1f;
  return;
}



/* ================================================================
 * Function: FUN_1000d312
 * Address:  1000d312
 * ================================================================ */

void __cdecl FUN_1000d312(char *param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  uint local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  puVar1 = param_3;
  local_8 = 0x404e;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  if (param_2 != 0) {
    param_3 = (uint *)param_2;
    do {
      local_14 = *puVar1;
      local_10 = puVar1[1];
      local_c = puVar1[2];
      FUN_1000d2b7(puVar1);
      FUN_1000d2b7(puVar1);
      ___add_12(puVar1,&local_14);
      FUN_1000d2b7(puVar1);
      local_10 = 0;
      local_c = 0;
      local_14 = (uint)*param_1;
      ___add_12(puVar1,&local_14);
      param_1 = param_1 + 1;
      param_3 = (uint *)((int)param_3 + -1);
    } while (param_3 != (uint *)0x0);
  }
  while (puVar1[2] == 0) {
    puVar1[2] = puVar1[1] >> 0x10;
    local_8 = local_8 + 0xfff0;
    puVar1[1] = *puVar1 >> 0x10 | puVar1[1] << 0x10;
    *puVar1 = *puVar1 << 0x10;
  }
  while ((puVar1[2] & 0x8000) == 0) {
    FUN_1000d2b7(puVar1);
    local_8 = local_8 + 0xffff;
  }
  *(undefined2 *)((int)puVar1 + 10) = (undefined2)local_8;
  return;
}



/* ================================================================
 * Function: FUN_1000d3d9
 * Address:  1000d3d9
 * ================================================================ */

undefined4 __thiscall
FUN_1000d3d9(void *this,ushort *param_1,int *param_2,byte *param_3,int param_4,int param_5,
            int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  char local_60 [23];
  char local_49;
  ushort local_44;
  undefined2 uStack_42;
  undefined2 uStack_40;
  byte *local_3e;
  ushort local_3a;
  int local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  byte *local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  char *local_10;
  int local_c;
  uint local_8;
  
  local_10 = local_60;
  local_2c = 0;
  local_1c = 1;
  local_8 = 0;
  local_14 = 0;
  local_28 = 0;
  local_24 = 0;
  local_30 = 0;
  local_34 = 0;
  local_20 = (byte *)0x0;
  local_c = 0;
  local_18 = 0;
  pbVar8 = param_3;
  while( true ) {
    bVar6 = *pbVar8;
    this = (void *)CONCAT31((int3)((uint)this >> 8),bVar6);
    if ((((bVar6 != 0x20) && (bVar6 != 9)) && (bVar6 != 10)) && (bVar6 != 0xd)) break;
    pbVar8 = pbVar8 + 1;
  }
  iVar1 = 4;
  iVar9 = 0;
  iVar5 = local_14;
LAB_1000d430:
  local_14 = iVar5;
  pbVar7 = pbVar8;
  iVar5 = 1;
  bVar6 = *pbVar7;
  pbVar8 = pbVar7 + 1;
  iVar2 = local_14;
  switch(iVar9) {
  case 0:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) {
LAB_1000d44d:
      local_14 = iVar2;
      iVar9 = 3;
      goto LAB_1000d672;
    }
    if (bVar6 == DAT_100134d4) goto LAB_1000d45c;
    if (bVar6 == 0x2b) {
      local_2c = 0;
      iVar9 = 2;
      iVar5 = local_14;
    }
    else if (bVar6 == 0x2d) {
      local_2c = 0x8000;
      iVar9 = 2;
      iVar5 = local_14;
    }
    else {
      iVar9 = iVar5;
      iVar5 = local_14;
      if (bVar6 != 0x30) goto LAB_1000d74c;
    }
    goto LAB_1000d430;
  case 1:
    local_14 = 1;
    if (('0' < (char)bVar6) && (iVar2 = iVar5, (char)bVar6 < ':')) goto LAB_1000d44d;
    iVar9 = iVar1;
    if (bVar6 != DAT_100134d4) {
      iVar9 = iVar5;
      if ((bVar6 == 0x2b) || (iVar9 = local_14, bVar6 == 0x2d)) goto LAB_1000d4e1;
      iVar9 = iVar5;
      local_14 = iVar5;
      if (bVar6 != 0x30) goto LAB_1000d4ba;
    }
    goto LAB_1000d430;
  case 2:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) goto LAB_1000d44d;
    if (bVar6 == DAT_100134d4) {
LAB_1000d45c:
      iVar9 = 5;
      iVar5 = local_14;
    }
    else {
      iVar9 = iVar5;
      pbVar7 = param_3;
      iVar5 = local_14;
      if (bVar6 != 0x30) goto LAB_1000d751;
    }
    goto LAB_1000d430;
  case 3:
    local_14 = iVar5;
    while( true ) {
      if (DAT_100134d0 < 2) {
        uVar3 = (byte)PTR_DAT_100132c4[(uint)bVar6 * 2] & 4;
        this = PTR_DAT_100132c4;
      }
      else {
        pbVar7 = (byte *)0x4;
        uVar3 = FUN_10009ff9(this,(uint)bVar6,4);
        this = pbVar7;
      }
      if (uVar3 == 0) break;
      if (local_8 < 0x19) {
        local_8 = local_8 + 1;
        pcVar4 = local_10 + 1;
        *local_10 = bVar6 - 0x30;
        local_10 = pcVar4;
      }
      else {
        local_c = local_c + 1;
      }
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    }
    iVar9 = iVar1;
    iVar5 = local_14;
    if (bVar6 != DAT_100134d4) goto LAB_1000d5ce;
    goto LAB_1000d430;
  case 4:
    local_14 = 1;
    local_28 = 1;
    iVar9 = iVar5;
    if (local_8 == 0) {
      while (iVar5 = local_28, iVar9 = local_14, bVar6 == 0x30) {
        local_c = local_c + -1;
        bVar6 = *pbVar8;
        pbVar8 = pbVar8 + 1;
      }
    }
    while( true ) {
      local_14 = iVar9;
      local_28 = iVar5;
      if (DAT_100134d0 < 2) {
        uVar3 = (byte)PTR_DAT_100132c4[(uint)bVar6 * 2] & 4;
        this = PTR_DAT_100132c4;
      }
      else {
        pbVar7 = (byte *)0x4;
        uVar3 = FUN_10009ff9(this,(uint)bVar6,4);
        this = pbVar7;
      }
      if (uVar3 == 0) break;
      if (local_8 < 0x19) {
        local_8 = local_8 + 1;
        local_c = local_c + -1;
        pcVar4 = local_10 + 1;
        *local_10 = bVar6 - 0x30;
        local_10 = pcVar4;
      }
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      iVar5 = local_28;
      iVar9 = local_14;
    }
LAB_1000d5ce:
    iVar9 = local_14;
    if ((bVar6 == 0x2b) || (bVar6 == 0x2d)) {
LAB_1000d4e1:
      local_14 = iVar9;
      iVar9 = 0xb;
      pbVar8 = pbVar8 + -1;
      iVar5 = local_14;
    }
    else {
LAB_1000d4ba:
      if (((char)bVar6 < 'D') ||
         (('E' < (char)bVar6 && (((char)bVar6 < 'd' || ('e' < (char)bVar6)))))) goto LAB_1000d74c;
      iVar9 = 6;
      iVar5 = local_14;
    }
    goto LAB_1000d430;
  case 5:
    local_28 = iVar5;
    if (DAT_100134d0 < 2) {
      uVar3 = (byte)PTR_DAT_100132c4[(uint)bVar6 * 2] & 4;
      this = PTR_DAT_100132c4;
    }
    else {
      pbVar7 = (byte *)0x4;
      uVar3 = FUN_10009ff9(this,(uint)bVar6,4);
      this = pbVar7;
    }
    iVar9 = iVar1;
    pbVar7 = param_3;
    if (uVar3 != 0) goto LAB_1000d672;
    goto LAB_1000d751;
  case 6:
    pbVar7 = pbVar7 + -1;
    this = pbVar7;
    param_3 = pbVar7;
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) {
      if (bVar6 == 0x2b) goto LAB_1000d6a7;
      if (bVar6 == 0x2d) goto LAB_1000d69b;
      if (bVar6 != 0x30) goto LAB_1000d751;
LAB_1000d640:
      iVar9 = 8;
      iVar5 = local_14;
      goto LAB_1000d430;
    }
    break;
  case 7:
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) {
      pbVar7 = param_3;
      if (bVar6 == 0x30) goto LAB_1000d640;
      goto LAB_1000d751;
    }
    break;
  case 8:
    local_24 = 1;
    while (bVar6 == 0x30) {
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    }
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) goto LAB_1000d74c;
    break;
  case 9:
    local_24 = 1;
    pbVar7 = (byte *)0x0;
    goto LAB_1000d6d2;
  default:
    goto switchD_1000d43c_caseD_a;
  case 0xb:
    if (param_7 != 0) {
      if (bVar6 == 0x2b) {
LAB_1000d6a7:
        iVar9 = 7;
        this = pbVar7;
        param_3 = pbVar7;
        iVar5 = local_14;
      }
      else {
        param_3 = pbVar7;
        if (bVar6 != 0x2d) goto LAB_1000d751;
LAB_1000d69b:
        local_1c = -1;
        iVar9 = 7;
        this = pbVar7;
        param_3 = pbVar7;
        iVar5 = local_14;
      }
      goto LAB_1000d430;
    }
    iVar9 = 10;
    pbVar8 = pbVar7;
switchD_1000d43c_caseD_a:
    pbVar7 = pbVar8;
    iVar5 = local_14;
    if (iVar9 != 10) goto LAB_1000d430;
    goto LAB_1000d751;
  }
  iVar9 = 9;
LAB_1000d672:
  pbVar8 = pbVar8 + -1;
  iVar5 = local_14;
  goto LAB_1000d430;
LAB_1000d6d2:
  if (DAT_100134d0 < 2) {
    uVar3 = (byte)PTR_DAT_100132c4[(uint)bVar6 * 2] & 4;
    this = PTR_DAT_100132c4;
  }
  else {
    pbVar10 = (byte *)0x4;
    uVar3 = FUN_10009ff9(this,(uint)bVar6,4);
    this = pbVar10;
  }
  if (uVar3 == 0) goto LAB_1000d71c;
  this = (void *)(int)(char)bVar6;
  pbVar7 = (byte *)((int)this + (int)pbVar7 * 10 + -0x30);
  if (0x1450 < (int)pbVar7) goto LAB_1000d714;
  bVar6 = *pbVar8;
  pbVar8 = pbVar8 + 1;
  goto LAB_1000d6d2;
LAB_1000d714:
  pbVar7 = (byte *)0x1451;
LAB_1000d71c:
  while( true ) {
    local_20 = pbVar7;
    if (DAT_100134d0 < 2) {
      uVar3 = (byte)PTR_DAT_100132c4[(uint)bVar6 * 2] & 4;
      this = PTR_DAT_100132c4;
    }
    else {
      pbVar7 = (byte *)0x4;
      uVar3 = FUN_10009ff9(this,(uint)bVar6,4);
      this = pbVar7;
    }
    if (uVar3 == 0) break;
    bVar6 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    pbVar7 = local_20;
  }
LAB_1000d74c:
  pbVar7 = pbVar8 + -1;
LAB_1000d751:
  *param_2 = (int)pbVar7;
  if (local_14 == 0) {
    local_44 = 0;
    local_3a = 0;
    local_3e = (byte *)0x0;
    param_3 = (byte *)0x0;
    local_18 = 4;
    goto LAB_1000d85f;
  }
  pcVar4 = local_10;
  if (0x18 < local_8) {
    if ('\x04' < local_49) {
      local_49 = local_49 + '\x01';
    }
    local_8 = 0x18;
    local_c = local_c + 1;
    pcVar4 = local_10 + -1;
  }
  if (local_8 == 0) {
    local_44 = 0;
    local_3a = 0;
    local_3e = (byte *)0x0;
    param_3 = (byte *)0x0;
  }
  else {
    while (pcVar4 = pcVar4 + -1, *pcVar4 == '\0') {
      local_8 = local_8 - 1;
      local_c = local_c + 1;
    }
    FUN_1000d312(local_60,local_8,(uint *)&local_44);
    pbVar8 = local_20;
    if (local_1c < 0) {
      pbVar8 = (byte *)-(int)local_20;
    }
    pbVar8 = pbVar8 + local_c;
    if (local_24 == 0) {
      pbVar8 = pbVar8 + param_5;
    }
    if (local_28 == 0) {
      pbVar8 = pbVar8 + -param_6;
    }
    if ((int)pbVar8 < 0x1451) {
      if (-0x1451 < (int)pbVar8) {
        FUN_1000e25a((int *)&local_44,(uint)pbVar8,param_4);
        param_3 = (byte *)CONCAT22(uStack_40,uStack_42);
        goto LAB_1000d7e4;
      }
      local_34 = 1;
    }
    else {
      local_30 = 1;
    }
    local_3a = (ushort)param_3;
    local_3e = param_3;
    local_44 = local_3a;
  }
LAB_1000d7e4:
  if (local_30 == 0) {
    if (local_34 != 0) {
      local_44 = 0;
      local_3a = 0;
      local_3e = (byte *)0x0;
      param_3 = (byte *)0x0;
      local_18 = 1;
    }
  }
  else {
    param_3 = (byte *)0x0;
    local_3a = 0x7fff;
    local_3e = (byte *)0x80000000;
    local_44 = 0;
    local_18 = 2;
  }
LAB_1000d85f:
  *(byte **)(param_1 + 3) = local_3e;
  *(byte **)(param_1 + 1) = param_3;
  param_1[5] = local_3a | (ushort)local_2c;
  *param_1 = local_44;
  return local_18;
}



/* ================================================================
 * Function: FUN_1000d8aa
 * Address:  1000d8aa
 * ================================================================ */

undefined4 __cdecl
FUN_1000d8aa(uint param_1,uint param_2,uint param_3,int param_4,byte param_5,short *param_6)

{
  short *psVar1;
  uint uVar2;
  short *psVar3;
  char cVar4;
  uint uVar5;
  short *psVar6;
  short *psVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
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
  undefined2 local_14;
  undefined4 local_12;
  undefined4 local_e;
  undefined1 local_a;
  char cStack_9;
  undefined4 local_8;
  
  psVar3 = param_6;
  uVar5 = param_3 & 0x7fff;
  local_20 = 0xcc;
  local_1f = 0xcc;
  local_1e = 0xcc;
  local_1d = 0xcc;
  local_1c = 0xcc;
  local_1b = 0xcc;
  local_1a = 0xcc;
  local_19 = 0xcc;
  local_18 = 0xcc;
  local_17 = 0xcc;
  local_16 = 0xfb;
  local_15 = 0x3f;
  local_8 = 1;
  if ((param_3 & 0x8000) == 0) {
    *(undefined1 *)(param_6 + 1) = 0x20;
  }
  else {
    *(undefined1 *)(param_6 + 1) = 0x2d;
  }
  if ((((short)uVar5 != 0) || (param_2 != 0)) || (param_1 != 0)) {
    if ((short)uVar5 == 0x7fff) {
      *param_6 = 1;
      if (((param_2 == 0x80000000) && (param_1 == 0)) || ((param_2 & 0x40000000) != 0)) {
        if (((param_3 & 0x8000) == 0) || (param_2 != 0xc0000000)) {
          if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_1000d99f;
          pcVar11 = "1#INF";
        }
        else {
          if (param_1 != 0) {
LAB_1000d99f:
            pcVar11 = "1#QNAN";
            goto LAB_1000d9a4;
          }
          pcVar11 = "1#IND";
        }
        FUN_10007510((uint *)(param_6 + 2),(uint *)pcVar11);
        *(undefined1 *)((int)psVar3 + 3) = 5;
      }
      else {
        pcVar11 = "1#SNAN";
LAB_1000d9a4:
        FUN_10007510((uint *)(param_6 + 2),(uint *)pcVar11);
        *(undefined1 *)((int)psVar3 + 3) = 6;
      }
      return 0;
    }
    local_14 = 0;
    local_a = (undefined1)uVar5;
    cStack_9 = (char)(uVar5 >> 8);
    sVar8 = (short)(((uVar5 >> 8) + (param_2 >> 0x18) * 2) * 0x4d + -0x134312f4 + uVar5 * 0x4d10 >>
                   0x10);
    local_e = param_2;
    local_12 = param_1;
    FUN_1000e25a((int *)&local_14,-(int)sVar8,1);
    if (0x3ffe < CONCAT11(cStack_9,local_a)) {
      sVar8 = sVar8 + 1;
      FUN_1000e03a((int *)&local_14,(int *)&local_20);
    }
    *psVar3 = sVar8;
    iVar10 = param_4;
    if (((param_5 & 1) == 0) || (iVar10 = param_4 + sVar8, 0 < param_4 + sVar8)) {
      if (0x15 < iVar10) {
        iVar10 = 0x15;
      }
      iVar9 = CONCAT11(cStack_9,local_a) - 0x3ffe;
      local_a = 0;
      cStack_9 = '\0';
      param_6 = (short *)0x8;
      do {
        FUN_1000d2b7((uint *)&local_14);
        param_6 = (short *)((int)param_6 + -1);
      } while (param_6 != (short *)0x0);
      if (iVar9 < 0) {
        param_6 = (short *)0x0;
        for (uVar5 = -iVar9 & 0xff; uVar5 != 0; uVar5 = uVar5 - 1) {
          FUN_1000d2e5((uint *)&local_14);
        }
      }
      param_4 = iVar10 + 1;
      psVar6 = psVar3 + 2;
      param_6 = psVar6;
      uVar5 = local_12;
      uVar2 = local_e;
      if (0 < param_4) {
        do {
          local_e._2_2_ = (undefined2)(uVar2 >> 0x10);
          local_e._0_2_ = (undefined2)uVar2;
          local_12._2_2_ = (undefined2)(uVar5 >> 0x10);
          local_12._0_2_ = (undefined2)uVar5;
          param_1 = CONCAT22((undefined2)local_12,local_14);
          param_2 = CONCAT22((undefined2)local_e,local_12._2_2_);
          param_3 = CONCAT13(cStack_9,CONCAT12(local_a,local_e._2_2_));
          local_12 = uVar5;
          local_e = uVar2;
          FUN_1000d2b7((uint *)&local_14);
          FUN_1000d2b7((uint *)&local_14);
          ___add_12((uint *)&local_14,&param_1);
          FUN_1000d2b7((uint *)&local_14);
          cVar4 = cStack_9;
          cStack_9 = '\0';
          psVar6 = (short *)((int)param_6 + 1);
          param_4 = param_4 + -1;
          *(char *)param_6 = cVar4 + '0';
          param_6 = psVar6;
          uVar5 = local_12;
          uVar2 = local_e;
        } while (param_4 != 0);
      }
      psVar7 = psVar6 + -1;
      psVar1 = psVar3 + 2;
      if ('4' < *(char *)((int)psVar6 + -1)) {
        for (; psVar1 <= psVar7; psVar7 = (short *)((int)psVar7 + -1)) {
          if ((char)*psVar7 != '9') {
            if (psVar1 <= psVar7) goto LAB_1000dafc;
            break;
          }
          *(char *)psVar7 = '0';
        }
        psVar7 = (short *)((int)psVar7 + 1);
        *psVar3 = *psVar3 + 1;
LAB_1000dafc:
        *(char *)psVar7 = (char)*psVar7 + '\x01';
LAB_1000dafe:
        cVar4 = ((char)psVar7 - (char)psVar3) + -3;
        *(char *)((int)psVar3 + 3) = cVar4;
        *(undefined1 *)(cVar4 + 4 + (int)psVar3) = 0;
        return local_8;
      }
      for (; psVar1 <= psVar7; psVar7 = (short *)((int)psVar7 + -1)) {
        if ((char)*psVar7 != '0') {
          if (psVar1 <= psVar7) goto LAB_1000dafe;
          break;
        }
      }
      *psVar3 = 0;
      *(undefined1 *)(psVar3 + 1) = 0x20;
      *(undefined1 *)((int)psVar3 + 3) = 1;
      *(char *)psVar1 = '0';
      goto LAB_1000db34;
    }
  }
  *psVar3 = 0;
  *(undefined1 *)(psVar3 + 1) = 0x20;
  *(undefined1 *)((int)psVar3 + 3) = 1;
  *(undefined1 *)(psVar3 + 2) = 0x30;
LAB_1000db34:
  *(undefined1 *)((int)psVar3 + 5) = 0;
  return 1;
}



/* ================================================================
 * Function: FUN_1000db3d
 * Address:  1000db3d
 * ================================================================ */

undefined4 __cdecl FUN_1000db3d(uint param_1)

{
  int *piVar1;
  DWORD *pDVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if (param_1 < DAT_10015940) {
    iVar3 = (param_1 & 0x1f) * 0x24;
    piVar1 = (int *)((&DAT_10015840)[(int)param_1 >> 5] + iVar3);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_10014274 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_1000db99;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_1000db99:
      *(undefined4 *)((&DAT_10015840)[(int)param_1 >> 5] + iVar3) = 0xffffffff;
      return 0;
    }
  }
  pDVar2 = FUN_1000c911();
  *pDVar2 = 9;
  pDVar2 = FUN_1000c91a();
  *pDVar2 = 0;
  return 0xffffffff;
}



/* ================================================================
 * Function: FUN_1000dbbc
 * Address:  1000dbbc
 * ================================================================ */

undefined4 __cdecl FUN_1000dbbc(uint param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 < DAT_10015940) &&
     ((*(byte *)((&DAT_10015840)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_10015840)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  pDVar1 = FUN_1000c911();
  *pDVar1 = 9;
  pDVar1 = FUN_1000c91a();
  *pDVar1 = 0;
  return 0xffffffff;
}



/* ================================================================
 * Function: FUN_1000dbfe
 * Address:  1000dbfe
 * ================================================================ */

void __cdecl FUN_1000dbfe(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1 & 0x1f) * 0x24;
  iVar1 = (&DAT_10015840)[(int)param_1 >> 5] + iVar2;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_10008aa6(0x11);
    if (*(int *)(iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_10008b07(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((&DAT_10015840)[(int)param_1 >> 5] + 0xc + iVar2));
  return;
}



/* ================================================================
 * Function: FUN_1000dc5d
 * Address:  1000dc5d
 * ================================================================ */

void __cdecl FUN_1000dc5d(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_10015840)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}



/* ================================================================
 * Function: FUN_1000dd00
 * Address:  1000dd00
 * ================================================================ */

int __cdecl FUN_1000dd00(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_1000dd2e(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((*(byte *)((int)param_1 + 0xd) & 0x40) != 0) {
    iVar1 = FUN_1000e353(param_1[4]);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}



/* ================================================================
 * Function: FUN_1000dd2e
 * Address:  1000dd2e
 * ================================================================ */

undefined4 __cdecl FUN_1000dd2e(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if ((((byte)param_1[3] & 3) == 2) && ((param_1[3] & 0x108U) != 0)) {
    uVar3 = *param_1 - param_1[2];
    if (0 < (int)uVar3) {
      uVar1 = FUN_1000bc6c(param_1[4],(char *)param_1[2],uVar3);
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
 * Function: FUN_1000dd93
 * Address:  1000dd93
 * ================================================================ */

int __cdecl FUN_1000dd93(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = 0;
  FUN_10008aa6(2);
  iVar4 = 0;
  if (0 < DAT_10015820) {
    do {
      iVar2 = *(int *)(DAT_10014808 + iVar4 * 4);
      if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0xc) & 0x83) != 0)) {
        FUN_1000bfb4(iVar4,iVar2);
        piVar1 = *(int **)(DAT_10014808 + iVar4 * 4);
        if ((piVar1[3] & 0x83U) != 0) {
          if (param_1 == 1) {
            iVar2 = FUN_1000dd00(piVar1);
            if (iVar2 != -1) {
              iVar3 = iVar3 + 1;
            }
          }
          else if ((param_1 == 0) && ((piVar1[3] & 2U) != 0)) {
            iVar2 = FUN_1000dd00(piVar1);
            if (iVar2 == -1) {
              iVar5 = -1;
            }
          }
        }
        FUN_1000c006(iVar4,*(int *)(DAT_10014808 + iVar4 * 4));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_10015820);
  }
  FUN_10008b07(2);
  if (param_1 != 1) {
    iVar3 = iVar5;
  }
  return iVar3;
}



/* ================================================================
 * Function: FUN_1000de37
 * Address:  1000de37
 * ================================================================ */

float10 __cdecl FUN_1000de37(undefined8 param_1,short param_2)

{
  undefined8 local_c;
  
  local_c = (double)CONCAT26((param_2 + 0x3fe) * 0x10 | param_1._6_2_ & 0x800f,(int6)param_1);
  return (float10)local_c;
}



/* ================================================================
 * Function: FUN_1000de60
 * Address:  1000de60
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_1000de60(uint param_1,uint param_2,int *param_3)

{
  ushort uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  float10 fVar5;
  undefined8 local_c;
  
  if ((double)CONCAT17(param_2._3_1_,CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1))) ==
      _DAT_1000fb60) {
    iVar4 = 0;
    local_c = 0.0;
  }
  else if (((param_2 & 0x7ff00000) == 0) && (((param_2 & 0xfffff) != 0 || (param_1 != 0)))) {
    iVar4 = -0x3fd;
    if (_DAT_1000fb60 <=
        (double)CONCAT17(param_2._3_1_,CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1)))) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    while ((param_2._2_1_ & 0x10) == 0) {
      iVar2 = CONCAT13(param_2._3_1_,CONCAT12(param_2._2_1_,(ushort)param_2)) << 1;
      param_2._0_2_ = (ushort)iVar2;
      param_2._2_1_ = (byte)((uint)iVar2 >> 0x10);
      param_2._3_1_ = (byte)((uint)iVar2 >> 0x18);
      if ((param_1 & 0x80000000) != 0) {
        param_2._0_2_ = (ushort)param_2 | 1;
      }
      param_1 = param_1 << 1;
      iVar4 = iVar4 + -1;
    }
    uVar1 = CONCAT11(param_2._3_1_,param_2._2_1_) & 0xffef;
    param_2._2_1_ = (byte)uVar1;
    param_2._3_1_ = (byte)(uVar1 >> 8);
    if (bVar3) {
      param_2._3_1_ = param_2._3_1_ | 0x80;
    }
    fVar5 = FUN_1000de37(CONCAT17(param_2._3_1_,
                                  CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1))),0);
    local_c = (double)fVar5;
  }
  else {
    fVar5 = FUN_1000de37(CONCAT17(param_2._3_1_,
                                  CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1))),0);
    local_c = (double)fVar5;
    iVar4 = (short)((ushort)(param_2 >> 0x14) & 0x7ff) + -0x3fe;
  }
  *param_3 = iVar4;
  return (float10)local_c;
}



/* ================================================================
 * Function: FUN_1000dfc0
 * Address:  1000dfc0
 * ================================================================ */

int __cdecl FUN_1000dfc0(byte *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *param_2;
    if (bVar1 == 0) break;
    param_2 = param_2 + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  iVar2 = -1;
  do {
    iVar2 = iVar2 + 1;
    bVar1 = *param_1;
    if (bVar1 == 0) {
      return iVar2;
    }
    param_1 = param_1 + 1;
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return iVar2;
}



/* ================================================================
 * Function: FUN_1000e000
 * Address:  1000e000
 * ================================================================ */

byte * __cdecl FUN_1000e000(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *param_2;
    if (bVar1 == 0) break;
    param_2 = param_2 + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  do {
    pbVar2 = param_1;
    bVar1 = *pbVar2;
    if (bVar1 == 0) {
      return (byte *)0x0;
    }
    param_1 = pbVar2 + 1;
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return pbVar2;
}



/* ================================================================
 * Function: FUN_1000e03a
 * Address:  1000e03a
 * ================================================================ */

void __cdecl FUN_1000e03a(int *param_1,int *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  ushort uVar9;
  uint uVar10;
  ushort uVar11;
  byte local_28;
  undefined1 uStack_27;
  undefined2 uStack_26;
  short local_24;
  undefined2 uStack_22;
  undefined2 local_20;
  undefined1 uStack_1e;
  byte bStack_1d;
  int *local_1c;
  int local_18;
  int local_14;
  ushort *local_10;
  ushort *local_c;
  short *local_8;
  
  piVar5 = param_2;
  piVar4 = param_1;
  local_18 = 0;
  local_28 = 0;
  uStack_27 = 0;
  uStack_26 = 0;
  local_24 = 0;
  uStack_22 = 0;
  local_20 = 0;
  uStack_1e = 0;
  bStack_1d = 0;
  uVar7 = *(ushort *)((int)param_1 + 10) & 0x7fff;
  uVar10 = *(ushort *)((int)param_2 + 10) & 0x7fff;
  uVar11 = (*(ushort *)((int)param_2 + 10) ^ *(ushort *)((int)param_1 + 10)) & 0x8000;
  uVar6 = (ushort)uVar7;
  piVar1 = (int *)(uVar10 + uVar7);
  if (((uVar6 < 0x7fff) && (uVar9 = (ushort)uVar10, uVar9 < 0x7fff)) && ((ushort)piVar1 < 0xbffe)) {
    if ((ushort)piVar1 < 0x3fc0) {
LAB_1000e0dd:
      piVar4[2] = 0;
      piVar4[1] = 0;
      *piVar4 = 0;
      return;
    }
    if (((uVar6 != 0) || (piVar1 = (int *)((int)piVar1 + 1), (param_1[2] & 0x7fffffffU) != 0)) ||
       ((uVar6 = 0, param_1[1] != 0 || (*param_1 != 0)))) {
      param_1 = piVar1;
      if (((uVar9 == 0) && (param_1 = (int *)((int)param_1 + 1), (param_2[2] & 0x7fffffffU) == 0))
         && ((param_2[1] == 0 && (*param_2 == 0)))) goto LAB_1000e0dd;
      local_14 = 0;
      local_8 = &local_24;
      param_2 = (int *)0x5;
      do {
        if (0 < (int)param_2) {
          local_c = (ushort *)(local_14 * 2 + (int)piVar4);
          local_10 = (ushort *)(piVar5 + 2);
          local_1c = param_2;
          do {
            iVar8 = FUN_1000d238(*(uint *)(local_8 + -2),(uint)*local_c * (uint)*local_10,
                                 (uint *)(local_8 + -2));
            if (iVar8 != 0) {
              *local_8 = *local_8 + 1;
            }
            local_c = local_c + 1;
            local_10 = local_10 + -1;
            local_1c = (int *)((int)local_1c + -1);
          } while (local_1c != (int *)0x0);
        }
        local_8 = local_8 + 1;
        local_14 = local_14 + 1;
        param_2 = (int *)((int)param_2 + -1);
      } while (0 < (int)param_2);
      param_1 = (int *)((int)param_1 + 0xc002);
      if ((short)(ushort)param_1 < 1) {
LAB_1000e191:
        param_1._0_2_ = (ushort)param_1 - 1;
        if ((short)(ushort)param_1 < 0) {
          iVar8 = -(int)(short)(ushort)param_1;
          param_1._0_2_ = (ushort)param_1 + (short)iVar8;
          do {
            if ((local_28 & 1) != 0) {
              local_18 = local_18 + 1;
            }
            FUN_1000d2e5((uint *)&local_28);
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
          if (local_18 != 0) {
            local_28 = local_28 | 1;
          }
        }
      }
      else {
        do {
          if ((bStack_1d & 0x80) != 0) break;
          FUN_1000d2b7((uint *)&local_28);
          param_1 = (int *)((int)param_1 + 0xffff);
        } while (0 < (short)(ushort)param_1);
        if ((short)(ushort)param_1 < 1) goto LAB_1000e191;
      }
      if ((0x8000 < CONCAT11(uStack_27,local_28)) ||
         (sVar2 = CONCAT11(bStack_1d,uStack_1e), iVar3 = CONCAT22(local_20,uStack_22),
         iVar8 = CONCAT22(local_24,uStack_26),
         (CONCAT22(uStack_26,CONCAT11(uStack_27,local_28)) & 0x1ffff) == 0x18000)) {
        if (CONCAT22(local_24,uStack_26) == -1) {
          iVar8 = 0;
          if (CONCAT22(local_20,uStack_22) == -1) {
            if (CONCAT11(bStack_1d,uStack_1e) == -1) {
              param_1._0_2_ = (ushort)param_1 + 1;
              sVar2 = -0x8000;
              iVar3 = 0;
              iVar8 = 0;
            }
            else {
              sVar2 = CONCAT11(bStack_1d,uStack_1e) + 1;
              iVar3 = 0;
              iVar8 = 0;
            }
          }
          else {
            sVar2 = CONCAT11(bStack_1d,uStack_1e);
            iVar3 = CONCAT22(local_20,uStack_22) + 1;
          }
        }
        else {
          iVar8 = CONCAT22(local_24,uStack_26) + 1;
          sVar2 = CONCAT11(bStack_1d,uStack_1e);
          iVar3 = CONCAT22(local_20,uStack_22);
        }
      }
      local_24 = (short)((uint)iVar8 >> 0x10);
      uStack_26 = (undefined2)iVar8;
      local_20 = (undefined2)((uint)iVar3 >> 0x10);
      uStack_22 = (undefined2)iVar3;
      bStack_1d = (byte)((ushort)sVar2 >> 8);
      uStack_1e = (undefined1)sVar2;
      if (0x7ffe < (ushort)param_1) goto LAB_1000e23a;
      uVar6 = (ushort)param_1 | uVar11;
      *(undefined2 *)piVar4 = uStack_26;
      *(uint *)((int)piVar4 + 2) = CONCAT22(uStack_22,local_24);
      *(uint *)((int)piVar4 + 6) = CONCAT13(bStack_1d,CONCAT12(uStack_1e,local_20));
    }
    *(ushort *)((int)piVar4 + 10) = uVar6;
  }
  else {
LAB_1000e23a:
    piVar4[1] = 0;
    *piVar4 = 0;
    piVar4[2] = (-(uint)(uVar11 != 0) & 0x80000000) + 0x7fff8000;
  }
  return;
}



/* ================================================================
 * Function: FUN_1000e25a
 * Address:  1000e25a
 * ================================================================ */

void __cdecl FUN_1000e25a(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined2 local_10;
  undefined4 local_e;
  undefined2 uStack_a;
  undefined *puStack_8;
  
  ppuVar3 = &PTR_DAT_10013e10;
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      ppuVar3 = (undefined **)0x10013f70;
    }
    if (param_3 == 0) {
      *(undefined2 *)param_1 = 0;
    }
    while (param_2 != 0) {
      ppuVar3 = ppuVar3 + 0x15;
      uVar1 = (int)param_2 >> 3;
      uVar2 = param_2 & 7;
      param_2 = uVar1;
      if (uVar2 != 0) {
        ppuVar4 = ppuVar3 + uVar2 * 3;
        if (0x7fff < *(ushort *)(ppuVar3 + uVar2 * 3)) {
          local_10 = SUB42(*ppuVar4,0);
          local_e._0_2_ = (undefined2)((uint)*ppuVar4 >> 0x10);
          local_e._2_2_ = SUB42(ppuVar4[1],0);
          uStack_a = (undefined2)((uint)ppuVar4[1] >> 0x10);
          puStack_8 = ppuVar4[2];
          local_e = CONCAT22(local_e._2_2_,(undefined2)local_e) + -1;
          ppuVar4 = (undefined **)&local_10;
        }
        FUN_1000e03a(param_1,(int *)ppuVar4);
      }
    }
  }
  return;
}



/* ================================================================
 * Function: FUN_1000e2d6
 * Address:  1000e2d6
 * ================================================================ */

undefined4 __cdecl FUN_1000e2d6(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((*(byte *)(param_1 + 3) & 0x40) == 0) {
    FUN_1000bf85((uint)param_1);
    uVar1 = FUN_1000e307(param_1);
    FUN_1000bfd7((uint)param_1);
  }
  else {
    param_1[3] = 0;
  }
  return uVar1;
}



/* ================================================================
 * Function: FUN_1000e307
 * Address:  1000e307
 * ================================================================ */

undefined4 __cdecl FUN_1000e307(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((*(byte *)(param_1 + 3) & 0x83) != 0) {
    uVar2 = FUN_1000dd2e(param_1);
    FUN_1000e6a1(param_1);
    iVar1 = FUN_1000e5c1(param_1[4]);
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    else if ((undefined *)param_1[7] != (undefined *)0x0) {
      FUN_10006f18((undefined *)param_1[7]);
      param_1[7] = 0;
    }
  }
  param_1[3] = 0;
  return uVar2;
}



/* ================================================================
 * Function: FUN_1000e353
 * Address:  1000e353
 * ================================================================ */

undefined4 __cdecl FUN_1000e353(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (DAT_10015940 <= param_1) {
LAB_1000e3d4:
    pDVar3 = FUN_1000c911();
    *pDVar3 = 9;
    return 0xffffffff;
  }
  iVar4 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)((&DAT_10015840)[(int)param_1 >> 5] + 4 + iVar4) & 1) == 0) goto LAB_1000e3d4;
  FUN_1000dbfe(param_1);
  if ((*(byte *)((&DAT_10015840)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
    hFile = (HANDLE)FUN_1000dbbc(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    uVar5 = 0;
    if (DVar2 == 0) goto LAB_1000e3c9;
    pDVar3 = FUN_1000c91a();
    *pDVar3 = DVar2;
  }
  pDVar3 = FUN_1000c911();
  *pDVar3 = 9;
  uVar5 = 0xffffffff;
LAB_1000e3c9:
  FUN_1000dc5d(param_1);
  return uVar5;
}



/* ================================================================
 * Function: FUN_1000e3f0
 * Address:  1000e3f0
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_1000e3f0(void *this,byte *param_1,byte *param_2)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  void *extraout_ECX;
  void *this_00;
  void *extraout_ECX_00;
  uint uVar8;
  uint uVar9;
  uint uVar7;
  
  iVar2 = _DAT_100145d8;
  if (DAT_10014478 == 0) {
    bVar5 = 0xff;
    do {
      do {
        cVar6 = '\0';
        if (bVar5 == 0) goto LAB_1000e43e;
        bVar5 = *param_2;
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        param_1 = param_1 + 1;
      } while (bVar4 == bVar5);
      bVar3 = bVar5 + 0xbf + (-((byte)(bVar5 + 0xbf) < 0x1a) & 0x20U) + 0x41;
      bVar4 = bVar4 + 0xbf;
      bVar5 = bVar4 + (-(bVar4 < 0x1a) & 0x20U) + 0x41;
    } while (bVar5 == bVar3);
    cVar6 = (bVar5 < bVar3) * -2 + '\x01';
LAB_1000e43e:
    uVar7 = (uint)cVar6;
  }
  else {
    LOCK();
    _DAT_100145d8 = _DAT_100145d8 + 1;
    UNLOCK();
    bVar1 = 0 < DAT_100145d4;
    if (bVar1) {
      LOCK();
      UNLOCK();
      _DAT_100145d8 = iVar2;
      FUN_10008aa6(0x13);
      this = extraout_ECX;
    }
    uVar9 = (uint)bVar1;
    uVar7 = 0xff;
    uVar8 = 0;
    do {
      do {
        if ((char)uVar7 == '\0') goto LAB_1000e49f;
        bVar5 = *param_2;
        uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar5);
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        uVar8 = CONCAT31((int3)(uVar8 >> 8),bVar4);
        param_1 = param_1 + 1;
      } while (bVar5 == bVar4);
      uVar8 = FUN_1000b4ca(this,uVar8);
      uVar7 = FUN_1000b4ca(this_00,uVar7);
      this = extraout_ECX_00;
    } while ((byte)uVar8 == (byte)uVar7);
    uVar8 = (uint)((byte)uVar8 < (byte)uVar7);
    uVar7 = (1 - uVar8) - (uint)(uVar8 != 0);
LAB_1000e49f:
    if (uVar9 == 0) {
      LOCK();
      _DAT_100145d8 = _DAT_100145d8 + -1;
      UNLOCK();
    }
    else {
      FUN_10008b07(0x13);
    }
  }
  return uVar7;
}



/* ================================================================
 * Function: FUN_1000e4c0
 * Address:  1000e4c0
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1000e4c0(byte *param_1,char *param_2,void *param_3)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 uVar6;
  void *this;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  
  iVar2 = _DAT_100145d8;
  uVar6 = 0;
  if (param_3 != (void *)0x0) {
    if (DAT_10014478 == 0) {
      do {
        bVar3 = *param_1;
        cVar1 = *param_2;
        uVar4 = CONCAT11(bVar3,cVar1);
        if (bVar3 == 0) break;
        uVar4 = CONCAT11(bVar3,cVar1);
        uVar7 = (uint)uVar4;
        if (cVar1 == '\0') break;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        if ((0x40 < bVar3) && (bVar3 < 0x5b)) {
          uVar7 = (uint)CONCAT11(bVar3 + 0x20,cVar1);
        }
        uVar4 = (ushort)uVar7;
        bVar3 = (byte)uVar7;
        if ((0x40 < bVar3) && (bVar3 < 0x5b)) {
          uVar4 = (ushort)CONCAT31((int3)(uVar7 >> 8),bVar3 + 0x20);
        }
        bVar3 = (byte)(uVar4 >> 8);
        bVar8 = bVar3 < (byte)uVar4;
        if (bVar3 != (byte)uVar4) goto LAB_1000e51f;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar3 = (byte)(uVar4 >> 8);
      bVar8 = bVar3 < (byte)uVar4;
      if (bVar3 != (byte)uVar4) {
LAB_1000e51f:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
    }
    else {
      LOCK();
      _DAT_100145d8 = _DAT_100145d8 + 1;
      UNLOCK();
      bVar8 = 0 < DAT_100145d4;
      if (bVar8) {
        LOCK();
        UNLOCK();
        _DAT_100145d8 = iVar2;
        FUN_10008aa6(0x13);
      }
      uVar9 = (uint)bVar8;
      uVar5 = 0;
      uVar7 = 0;
      do {
        uVar5 = CONCAT31((int3)(uVar5 >> 8),*param_1);
        uVar7 = CONCAT31((int3)(uVar7 >> 8),*param_2);
        if ((uVar5 == 0) || (uVar7 == 0)) break;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        uVar7 = FUN_1000b4ca(param_3,uVar7);
        uVar5 = FUN_1000b4ca(this,uVar5);
        bVar8 = uVar5 < uVar7;
        if (uVar5 != uVar7) goto LAB_1000e595;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar8 = uVar5 < uVar7;
      if (uVar5 != uVar7) {
LAB_1000e595:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
      if (uVar9 == 0) {
        LOCK();
        _DAT_100145d8 = _DAT_100145d8 + -1;
        UNLOCK();
      }
      else {
        FUN_10008b07(0x13);
      }
    }
  }
  return uVar6;
}



/* ================================================================
 * Function: FUN_1000e5c1
 * Address:  1000e5c1
 * ================================================================ */

undefined4 __cdecl FUN_1000e5c1(uint param_1)

{
  undefined4 uVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_10015940) &&
     ((*(byte *)((&DAT_10015840)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000dbfe(param_1);
    uVar1 = FUN_1000e61e(param_1);
    FUN_1000dc5d(param_1);
    return uVar1;
  }
  pDVar2 = FUN_1000c911();
  *pDVar2 = 9;
  pDVar2 = FUN_1000c91a();
  *pDVar2 = 0;
  return 0xffffffff;
}



/* ================================================================
 * Function: FUN_1000e61e
 * Address:  1000e61e
 * ================================================================ */

undefined4 __cdecl FUN_1000e61e(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_1000dbbc(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_1000dbbc(2);
      iVar2 = FUN_1000dbbc(1);
      if (iVar2 == iVar1) goto LAB_1000e66c;
    }
    hObject = (HANDLE)FUN_1000dbbc(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_1000e66e;
    }
  }
LAB_1000e66c:
  DVar4 = 0;
LAB_1000e66e:
  FUN_1000db3d(param_1);
  *(undefined1 *)((&DAT_10015840)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_1000c89e(DVar4);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}



/* ================================================================
 * Function: FUN_1000e6a1
 * Address:  1000e6a1
 * ================================================================ */

void __cdecl FUN_1000e6a1(undefined4 *param_1)

{
  if (((param_1[3] & 0x83) != 0) && ((param_1[3] & 8) != 0)) {
    FUN_10006f18((undefined *)param_1[2]);
    *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) & 0xfbf7;
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
  }
  return;
}



/* ================================================================
 * Function: RtlUnwind
 * Address:  1000e6cc
 * ================================================================ */

void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue)

{
                    /* WARNING: Could not recover jumptable at 0x1000e6cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RtlUnwind(TargetFrame,TargetIp,ExceptionRecord,ReturnValue);
  return;
}



