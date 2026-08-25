/* ================================================================
 * Function: FUN_000102e0
 * Address:  000102e0
 * ================================================================ */

void FUN_000102e0(uint *param_1,int *param_2)

{
  int local_18;
  uint local_14;
  uint local_c;
  int local_8;
  
  local_18 = 0x20;
  local_c = *param_1;
  local_14 = param_1[1];
  local_8 = -0x3910c8e0;
  while (local_18 != 0) {
    local_14 = local_14 -
               (local_c * 0x10 + param_2[2] ^ local_c + local_8 ^ (local_c >> 5) + param_2[3]);
    local_c = local_c - (local_14 * 0x10 + *param_2 ^ local_14 + local_8 ^
                        (local_14 >> 5) + param_2[1]);
    local_8 = local_8 + 0x61c88647;
    local_18 = local_18 + -1;
  }
  *param_1 = local_c;
  param_1[1] = local_14;
  return;
}



/* ================================================================
 * Function: FUN_000103a0
 * Address:  000103a0
 * ================================================================ */

undefined4 FUN_000103a0(int param_1)

{
  undefined4 local_38;
  undefined1 local_30 [8];
  uint *local_28;
  int local_24 [4];
  undefined2 local_14;
  undefined2 uStack_12;
  undefined1 local_10;
  uint local_c;
  uint local_8;
  
  local_28 = *(uint **)(param_1 + 0x28);
  local_38 = 0;
  local_24[0] = 0;
  local_24[1] = 0xff;
  local_24[2] = 0x1000;
  local_24[3] = 0x1e50;
  local_10 = 0;
  RtlInitUnicodeString(local_30,local_28 + 0x3f);
  local_c = *local_28;
  local_8 = local_28[1];
  FUN_000102e0(&local_c,local_24);
  _local_14 = CONCAT22(uStack_12,(undefined2)local_8);
  if (((uint)*(ushort *)(local_28[0x1e] + 8) == (local_c & 0xffff)) &&
     ((uint)*(ushort *)(local_28[0x1e] + 10) == (local_8 & 0xffff))) {
    IoSetDeviceInterfaceState(local_30,1);
  }
  else {
    IoSetDeviceInterfaceState(local_30,0);
    local_38 = 0xc000000d;
  }
  return local_38;
}



/* ================================================================
 * Function: FUN_00010512
 * Address:  00010512
 * ================================================================ */

int FUN_00010512(int param_1)

{
  short sVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  undefined4 local_144;
  undefined2 local_140;
  undefined2 local_13e;
  undefined1 *local_13c;
  undefined1 local_138 [128];
  undefined2 local_b8 [2];
  wchar_t local_b4 [8];
  undefined1 local_a4 [20];
  int local_90;
  undefined4 local_8c;
  undefined1 *local_88;
  undefined4 local_84;
  int local_80;
  undefined1 local_7c [64];
  uint local_3c;
  uint local_38;
  undefined4 *local_34;
  uint local_30;
  undefined1 local_2c [32];
  uint local_c;
  undefined1 *local_8;
  
  local_34 = *(undefined4 **)(param_1 + 0x28);
  local_90 = 0;
  if (local_34[0x1e] == 0) {
    local_90 = -0x3ffffff3;
  }
  else {
    local_38 = (uint)*(ushort *)(local_34[0x1e] + 8);
    local_30 = (uint)*(ushort *)(local_34[0x1e] + 10);
    local_c = 0x200000;
    local_8 = local_2c;
    local_8c = 0x400000;
    local_88 = local_7c;
    local_90 = RtlAppendUnicodeToString(&local_8c,L"Vid_");
    local_90 = RtlIntegerToUnicodeString(local_38,0x10,&local_c);
    if ((local_c & 0xffff) < 8) {
      local_3c = CONCAT22(local_3c._2_2_,(undefined2)local_c);
      while ((local_3c & 0xffff) < 8) {
        local_90 = RtlAppendUnicodeToString(&local_8c,&DAT_0001048c);
        local_3c = CONCAT22(local_3c._2_2_,(short)local_3c + 2);
      }
    }
    local_90 = RtlAppendUnicodeStringToString(&local_8c,&local_c);
    local_90 = RtlAppendUnicodeToString(&local_8c,L"&Pid_");
    local_90 = RtlIntegerToUnicodeString(local_30,0x10,&local_c);
    if ((local_c & 0xffff) < 8) {
      local_3c = CONCAT22(local_3c._2_2_,(undefined2)local_c);
      while ((local_3c & 0xffff) < 8) {
        local_90 = RtlAppendUnicodeToString(&local_8c,&DAT_0001049c);
        local_3c = CONCAT22(local_3c._2_2_,(short)local_3c + 2);
      }
    }
    local_90 = RtlAppendUnicodeStringToString(&local_8c,&local_c);
    local_84 = (uint)local_84._2_2_ << 0x10;
    sVar1 = DAT_000151a0 + (short)local_8c + 4;
    local_3c = CONCAT22(local_3c._2_2_,sVar1);
    local_80 = ExAllocatePoolWithTag(1,sVar1,0x4b6c7542);
    if (local_80 == 0) {
      local_90 = -0x3fffffe9;
    }
    else {
      local_84 = CONCAT22((short)local_3c,(undefined2)local_84);
      local_90 = RtlAppendUnicodeStringToString(&local_84,&DAT_000151a0);
      local_90 = RtlAppendUnicodeToString(&local_84,&DAT_000104a0);
      local_90 = RtlAppendUnicodeStringToString(&local_84,&local_8c);
      *(undefined2 *)(local_80 + (local_84 & 0xfffe)) = 0;
      local_34[7] = 0x10000;
      FUN_00010950((int)&local_84,L"MaxTransfer",local_34 + 7);
      pwVar3 = L"0000000000000000";
      pwVar4 = local_b4;
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined4 *)pwVar4 = *(undefined4 *)pwVar3;
        pwVar3 = pwVar3 + 2;
        pwVar4 = pwVar4 + 2;
      }
      *pwVar4 = *pwVar3;
      *local_34 = 0;
      local_34[1] = 0;
      iVar2 = FUN_000109c1((int)&local_84,L"AuthKey",local_b4,local_b8);
      if (-1 < iVar2) {
        local_13c = local_138;
        local_140 = 0;
        local_13e = 0x80;
        memcpy(local_13c,local_b4,0x10);
        local_140 = 0x10;
        RtlUnicodeStringToInteger(&local_140,0x10,&local_144);
        *local_34 = local_144;
        memcpy(local_13c,local_a4,0x10);
        local_140 = 0x10;
        RtlUnicodeStringToInteger(&local_140,0x10,&local_144);
        local_34[1] = local_144;
      }
      local_90 = FUN_000103a0(param_1);
      if (local_90 < 0) {
        if ((local_38 == 0x547) && (local_30 == 0x2131)) {
          *local_34 = 0x5c9bc44;
          local_34[1] = 0x75632b47;
        }
        else if ((local_38 == 0x547) && (local_30 == 0x2235)) {
          *local_34 = 0x9840cc0f;
          local_34[1] = 0xec458da7;
        }
        else if ((local_38 == 0x4b4) && (local_30 == 0x8613)) {
          *local_34 = 0x78114a14;
          local_34[1] = 0x7a36252a;
        }
        local_90 = FUN_000103a0(param_1);
      }
      local_34[2] = 0;
      FUN_00010950((int)&local_84,L"RenumOnHibernate",local_34 + 2);
      ExFreePool(local_80);
    }
  }
  return local_90;
}



/* ================================================================
 * Function: FUN_00010950
 * Address:  00010950
 * ================================================================ */

undefined4 FUN_00010950(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 local_40 [4];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  undefined4 local_28;
  undefined4 local_8;
  
  local_8 = *param_3;
  memset(local_40,0,0x38);
  local_3c = 0x20;
  local_38 = param_2;
  local_34 = param_3;
  local_30 = 4;
  local_2c = &local_8;
  local_28 = 4;
  uVar1 = RtlQueryRegistryValues(0x80000000,*(undefined4 *)(param_1 + 4),local_40,0,0);
  return uVar1;
}



/* ================================================================
 * Function: FUN_000109c1
 * Address:  000109c1
 * ================================================================ */

int FUN_000109c1(int param_1,undefined4 param_2,undefined4 param_3,undefined2 *param_4)

{
  int local_50;
  undefined1 local_4c [4];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 *local_40;
  undefined4 local_3c;
  undefined1 *local_38;
  undefined4 local_34;
  undefined4 local_14;
  undefined1 local_c [8];
  
  RtlInitUnicodeString(local_c,&DAT_000109c0);
  RtlInitUnicodeString(&local_14,param_3);
  local_14 = (uint)local_14._2_2_ << 0x10;
  memset(local_4c,0,0x38);
  local_48 = 0x20;
  local_44 = param_2;
  local_40 = &local_14;
  local_3c = 1;
  local_38 = local_c;
  local_34 = 0;
  local_50 = RtlQueryRegistryValues(0x80000000,*(undefined4 *)(param_1 + 4),local_4c,0,0);
  if (-1 < local_50) {
    *param_4 = (undefined2)local_14;
  }
  if ((local_14 & 0xffff) == 0) {
    local_50 = -0x3ffffff3;
  }
  return local_50;
}



/* ================================================================
 * Function: FUN_00010a70
 * Address:  00010a70
 * ================================================================ */

void FUN_00010a70(undefined4 param_1,int param_2,int param_3)

{
  FUN_00010ce0(param_1,param_2,param_3);
  return;
}



/* ================================================================
 * Function: FUN_00010a90
 * Address:  00010a90
 * ================================================================ */

void FUN_00010a90(undefined4 param_1,int param_2,int param_3)

{
  FUN_00010ce0(param_1,param_2,param_3);
  return;
}



/* ================================================================
 * Function: FUN_00010ab0
 * Address:  00010ab0
 * ================================================================ */

undefined4 FUN_00010ab0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00010db0(param_1,param_2,'\x01');
  return uVar1;
}



/* ================================================================
 * Function: FUN_00010ad0
 * Address:  00010ad0
 * ================================================================ */

undefined4 FUN_00010ad0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00010db0(param_1,param_2,'\0');
  return uVar1;
}



/* ================================================================
 * Function: FUN_00010af0
 * Address:  00010af0
 * ================================================================ */

undefined2 * FUN_00010af0(undefined4 param_1,int param_2,int param_3,char param_4)

{
  undefined2 *_Dst;
  size_t _Size;
  undefined4 local_8;
  
  local_8 = 0;
  if (*(int *)(param_2 + 4) != 0) {
    local_8 = *(undefined4 *)(*(int *)(param_2 + 4) + 0x14);
  }
  _Size = 0x48;
  _Dst = (undefined2 *)ExAllocatePoolWithTag(0,0x48,0x4b6c7542,0x48,0);
  if (_Dst != (undefined2 *)0x0) {
    memset(_Dst,0,_Size);
    *_Dst = (short)_Size;
    _Dst[1] = 9;
    *(undefined4 *)(_Dst + 8) = *(undefined4 *)(param_3 + 8);
    *(uint *)(_Dst + 10) = (uint)(param_4 != '\0');
    *(uint *)(_Dst + 10) = *(uint *)(_Dst + 10) | 2;
    *(undefined4 *)(_Dst + 0x12) = 0;
    *(undefined4 *)(_Dst + 0x10) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(_Dst + 0xc) = local_8;
  }
  return _Dst;
}



/* ================================================================
 * Function: FUN_00010bc0
 * Address:  00010bc0
 * ================================================================ */

int FUN_00010bc0(int param_1,ushort *param_2)

{
  int local_1c;
  int local_10;
  uint local_c;
  uint local_8;
  
  local_1c = 0;
  if (*param_2 != 0) {
    local_c = (uint)(*param_2 >> 1);
    do {
      local_c = local_c - 1;
      if ((0x2f < *(ushort *)(*(int *)(param_2 + 2) + local_c * 2)) &&
         (*(ushort *)(*(int *)(param_2 + 2) + local_c * 2) < 0x3a)) break;
    } while (local_c != 0);
    if (local_c != 0) {
      local_8 = 0;
      local_10 = 1;
      for (; ((0x2f < *(ushort *)(*(int *)(param_2 + 2) + local_c * 2) &&
              (*(ushort *)(*(int *)(param_2 + 2) + local_c * 2) < 0x3a)) && (local_c != 0));
          local_c = local_c - 1) {
        local_8 = local_8 + local_10 * (*(ushort *)(*(int *)(param_2 + 2) + local_c * 2) - 0x30);
        local_10 = local_10 * 10;
      }
    }
    if (local_8 < *(uint *)(*(int *)(param_1 + 0x28) + 0x24)) {
      local_1c = *(int *)(*(int *)(param_1 + 0x28) + 0x28) + local_8 * 0x38;
    }
  }
  return local_1c;
}



/* ================================================================
 * Function: FUN_00010cd0
 * Address:  00010cd0
 * ================================================================ */

undefined4 FUN_00010cd0(void)

{
  return 0;
}



/* ================================================================
 * Function: FUN_00010ce0
 * Address:  00010ce0
 * ================================================================ */

undefined4 FUN_00010ce0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_2 + 0x60) + 0x18) + 0xc);
  KfAcquireSpinLock();
  iVar2 = *(int *)(iVar1 + 0x24);
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  KfReleaseSpinLock();
  if (*(char *)(param_2 + 0x21) != '\0') {
    *(byte *)(*(int *)(param_2 + 0x60) + 3) = *(byte *)(*(int *)(param_2 + 0x60) + 3) | 1;
  }
  FUN_000146b0(param_3);
  if (*(int *)(param_2 + 0x18) == 0) {
    *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(iVar2 + 0x18);
  }
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  ExFreePool(iVar2);
  return uVar3;
}



/* ================================================================
 * Function: FUN_00010db0
 * Address:  00010db0
 * ================================================================ */

undefined4 FUN_00010db0(int param_1,int param_2,char param_3)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  uint local_20;
  
  local_20 = 0;
  if (*(int *)(*(int *)(param_1 + 0x28) + 0x94) == 1) {
    if (*(int *)(*(int *)(param_1 + 0x28) + 0x88) == 0) {
      *(undefined4 *)(param_2 + 0x1c) = 0;
      iVar1 = *(int *)(*(int *)(*(int *)(param_2 + 0x60) + 0x18) + 0xc);
      if (((iVar1 + 4 == 0) || (iVar1 == 0)) || (*(char *)(iVar1 + 0x2c) != param_3)) {
        *(undefined4 *)(param_2 + 0x18) = 0xc0000008;
        IofCompleteRequest();
        uVar3 = 0xc0000008;
      }
      else {
        KfAcquireSpinLock();
        if ((*(int *)(iVar1 + 0x24) == 0) && (*(int *)(iVar1 + 0x28) == 0)) {
          if (*(int *)(param_2 + 4) != 0) {
            local_20 = *(uint *)(*(int *)(param_2 + 4) + 0x14);
          }
          if (*(uint *)(iVar1 + 0x10) < local_20) {
            KfReleaseSpinLock();
            *(undefined4 *)(param_2 + 0x18) = 0xc000000d;
            IofCompleteRequest();
            uVar3 = 0xc000000d;
          }
          else {
            puVar2 = FUN_00010af0(param_1,param_2,iVar1 + 4,param_3);
            if (puVar2 == (undefined2 *)0x0) {
              KfReleaseSpinLock();
              *(undefined4 *)(param_2 + 0x18) = 0xc000009a;
              IofCompleteRequest();
              uVar3 = 0xc000009a;
            }
            else {
              *(undefined2 **)(iVar1 + 0x24) = puVar2;
              *(int *)(iVar1 + 0x28) = param_2;
              KfReleaseSpinLock();
              iVar1 = *(int *)(param_2 + 0x60);
              *(undefined2 **)(iVar1 + -0x20) = puVar2;
              *(undefined1 *)(iVar1 + -0x24) = 0xf;
              *(undefined4 *)(iVar1 + -0x18) = 0x220003;
              if (param_3 == '\0') {
                iVar1 = *(int *)(param_2 + 0x60);
                *(code **)(iVar1 + -8) = FUN_00010a90;
                *(int *)(iVar1 + -4) = param_1;
                *(undefined1 *)(iVar1 + -0x21) = 0;
                *(undefined1 *)(iVar1 + -0x21) = 0x40;
                *(byte *)(iVar1 + -0x21) = *(byte *)(iVar1 + -0x21) | 0x80;
                *(byte *)(iVar1 + -0x21) = *(byte *)(iVar1 + -0x21) | 0x20;
              }
              else {
                iVar1 = *(int *)(param_2 + 0x60);
                *(code **)(iVar1 + -8) = FUN_00010a70;
                *(int *)(iVar1 + -4) = param_1;
                *(undefined1 *)(iVar1 + -0x21) = 0;
                *(undefined1 *)(iVar1 + -0x21) = 0x40;
                *(byte *)(iVar1 + -0x21) = *(byte *)(iVar1 + -0x21) | 0x80;
                *(byte *)(iVar1 + -0x21) = *(byte *)(iVar1 + -0x21) | 0x20;
              }
              FUN_00014740(param_1);
              uVar3 = IofCallDriver();
            }
          }
        }
        else {
          KfReleaseSpinLock();
          *(undefined4 *)(param_2 + 0x18) = 0x80000011;
          IofCompleteRequest();
          uVar3 = 0x80000011;
        }
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x18) = 0xc0000120;
      IofCompleteRequest();
      uVar3 = 0xc0000120;
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x18) = 0xc0000056;
    IofCompleteRequest();
    uVar3 = 0xc0000056;
  }
  return uVar3;
}



/* ================================================================
 * Function: entry
 * Address:  000110d0
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int entry(int param_1,ushort *param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = IoIsWdmVersionAvailable(1,0,0);
  if (cVar1 == '\0') {
    iVar2 = -0x3fffffff;
  }
  else {
    *(code **)(param_1 + 0x38) = FUN_000127a0;
    *(code **)(param_1 + 0x48) = FUN_00010ad0;
    *(code **)(param_1 + 0x44) = FUN_00010ab0;
    *(code **)(param_1 + 0x30) = FUN_00010cd0;
    *(code **)(param_1 + 0x40) = FUN_00012890;
    *(code **)(param_1 + 0x34) = FUN_00013da0;
    *(code **)(param_1 + 0x70) = FUN_00011e20;
    *(code **)(param_1 + 0x94) = FUN_00013d30;
    *(code **)(param_1 + 0xa4) = FUN_00012950;
    *(code **)(param_1 + 0x90) = FUN_000138c0;
    *(code **)(*(int *)(param_1 + 0x18) + 4) = FUN_000151c0;
    USBD_GetUSBDIVersion(&DAT_000151a8);
    DAT_000151b0 = 0;
    DAT_000151a4 = (void *)ExAllocatePoolWithTag(0,*param_2 + 2,0x4b6c7542);
    iVar2 = (-(uint)(DAT_000151a4 != (void *)0x0) & 0x3fffffe9) + 0xc0000017;
    if (-1 < iVar2) {
      memset(DAT_000151a4,0,*param_2 + 2);
      memcpy(DAT_000151a4,*(void **)(param_2 + 2),(uint)*param_2);
      DAT_000151a0 = *param_2;
      _DAT_000151a2 = param_2[1];
    }
  }
  return iVar2;
}



/* ================================================================
 * Function: FUN_00011220
 * Address:  00011220
 * ================================================================ */

uint FUN_00011220(int param_1,int param_2)

{
  int iVar1;
  uint local_c;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x28) + 0x8c) +
                  *(int *)(*(int *)(param_1 + 0x28) + 0x84) * 4);
  local_c = 0;
  while( true ) {
    if (*(uint *)(iVar1 + 0xc) <= local_c) {
      return local_c & 0xffffff00;
    }
    if (*(int *)(iVar1 + 0x18 + local_c * 0x14) == *(int *)(param_2 + 8)) break;
    local_c = local_c + 1;
  }
  return CONCAT31((int3)((uint)param_2 >> 8),1);
}



/* ================================================================
 * Function: FUN_00011290
 * Address:  00011290
 * ================================================================ */

int FUN_00011290(int param_1,int param_2)

{
  uint uVar1;
  undefined2 *puVar2;
  int local_10;
  
  uVar1 = FUN_00011220(param_1,param_2);
  if ((uVar1 & 0xff) == 0) {
    local_10 = -0x3ffffff3;
  }
  else {
    puVar2 = (undefined2 *)ExAllocatePoolWithTag(0,0x18,0x4b6c7542);
    if (puVar2 == (undefined2 *)0x0) {
      local_10 = -0x3fffff66;
    }
    else {
      *puVar2 = 0x18;
      puVar2[1] = 0x1e;
      *(undefined4 *)(puVar2 + 8) = *(undefined4 *)(param_2 + 8);
      local_10 = FUN_000147d0(param_1,puVar2);
      ExFreePool(puVar2);
    }
  }
  return local_10;
}



/* ================================================================
 * Function: FUN_00011320
 * Address:  00011320
 * ================================================================ */

int FUN_00011320(int param_1,int param_2)

{
  uint uVar1;
  undefined2 *puVar2;
  int local_10;
  
  uVar1 = FUN_00011220(param_1,param_2);
  if ((uVar1 & 0xff) == 0) {
    local_10 = -0x3ffffff3;
  }
  else {
    puVar2 = (undefined2 *)ExAllocatePoolWithTag(0,0x18,0x4b6c7542);
    if (puVar2 == (undefined2 *)0x0) {
      local_10 = -0x3fffff66;
    }
    else {
      *puVar2 = 0x18;
      puVar2[1] = 2;
      *(undefined4 *)(puVar2 + 8) = *(undefined4 *)(param_2 + 8);
      local_10 = FUN_000147d0(param_1,puVar2);
      ExFreePool(puVar2);
    }
  }
  return local_10;
}



/* ================================================================
 * Function: FUN_000113b0
 * Address:  000113b0
 * ================================================================ */

int FUN_000113b0(int param_1,undefined4 *param_2)

{
  int iVar1;
  int local_2c [2];
  undefined1 local_24 [16];
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_14 = 0;
  local_c = *(int *)(param_1 + 0x28);
  *param_2 = 0;
  KeInitializeEvent(local_24,0,0);
  local_8 = IoBuildDeviceIoControlRequest
                      (0x220013,*(undefined4 *)(local_c + 0x2c),0,0,0,0,1,local_24,local_2c);
  local_10 = *(int *)(local_8 + 0x60) + -0x24;
  *(undefined4 **)(*(int *)(local_8 + 0x60) + -0x20) = param_2;
  iVar1 = IofCallDriver();
  if (iVar1 == 0x103) {
    KeWaitForSingleObject(local_24,5,0,0,0);
    iVar1 = local_2c[0];
  }
  local_2c[0] = iVar1;
  return local_2c[0];
}



/* ================================================================
 * Function: FUN_00011460
 * Address:  00011460
 * ================================================================ */

int FUN_00011460(int param_1)

{
  int iVar1;
  int local_2c [2];
  undefined1 local_24 [16];
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_14 = 0;
  local_c = *(int *)(param_1 + 0x28);
  KeInitializeEvent(local_24,0,0);
  local_8 = IoBuildDeviceIoControlRequest
                      (0x220007,*(undefined4 *)(local_c + 0x2c),0,0,0,0,1,local_24,local_2c);
  local_10 = *(int *)(local_8 + 0x60) + -0x24;
  iVar1 = IofCallDriver();
  if (iVar1 == 0x103) {
    KeWaitForSingleObject(local_24,5,0,0,0);
    iVar1 = local_2c[0];
  }
  local_2c[0] = iVar1;
  return local_2c[0];
}



/* ================================================================
 * Function: FUN_00011500
 * Address:  00011500
 * ================================================================ */

int FUN_00011500(int param_1)

{
  int iVar1;
  int local_2c [2];
  undefined1 local_24 [16];
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_14 = 0;
  local_c = *(int *)(param_1 + 0x28);
  KeInitializeEvent(local_24,0,0);
  local_8 = IoBuildDeviceIoControlRequest
                      (0x22001f,*(undefined4 *)(local_c + 0x2c),0,0,0,0,1,local_24,local_2c);
  local_10 = *(int *)(local_8 + 0x60) + -0x24;
  iVar1 = IofCallDriver();
  if (iVar1 == 0x103) {
    KeWaitForSingleObject(local_24,5,0,0,0);
    iVar1 = local_2c[0];
  }
  local_2c[0] = iVar1;
  return local_2c[0];
}



/* ================================================================
 * Function: FUN_000115a0
 * Address:  000115a0
 * ================================================================ */

undefined4 FUN_000115a0(void)

{
  return 0;
}



/* ================================================================
 * Function: FUN_000115c0
 * Address:  000115c0
 * ================================================================ */

uint FUN_000115c0(int param_1,int param_2)

{
  uint uVar1;
  int Value;
  
  Value = *(int *)(param_1 + 0x28);
  uVar1 = 0;
  if ((param_2 == 1) && (*(int *)(Value + 0xa0) != 1)) {
    InterlockedExchange((LONG *)0x0,Value);
  }
  if ((param_2 != 1) && (*(int *)(Value + 0xa0) == 1)) {
    uVar1 = FUN_00011700(param_1);
    uVar1 = uVar1 & 0xff;
  }
  return uVar1;
}



/* ================================================================
 * Function: FUN_00011630
 * Address:  00011630
 * ================================================================ */

undefined4 FUN_00011630(int param_1,undefined4 param_2,int param_3)

{
  undefined1 local_14 [8];
  undefined4 local_c;
  int local_8;
  
  local_8 = *(int *)(param_1 + 0x28);
  local_c = 0;
  if ((param_3 == 3) && (*(int *)(local_8 + 8) != 0)) {
    *(undefined4 *)(local_8 + 0xa8) = 8;
    RtlInitUnicodeString(local_14,local_8 + 0xfc);
    local_c = IoSetDeviceInterfaceState(local_14,0);
  }
  return local_c;
}



/* ================================================================
 * Function: FUN_00011690
 * Address:  00011690
 * ================================================================ */

undefined4 FUN_00011690(void)

{
  return 0;
}



/* ================================================================
 * Function: FUN_000116b0
 * Address:  000116b0
 * ================================================================ */

undefined4 FUN_000116b0(void)

{
  return 0;
}



/* ================================================================
 * Function: FUN_000116d0
 * Address:  000116d0
 * ================================================================ */

undefined4 FUN_000116d0(int param_1)

{
  FUN_00011700(param_1);
  return 0;
}



/* ================================================================
 * Function: FUN_00011700
 * Address:  00011700
 * ================================================================ */

undefined4 FUN_00011700(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  undefined1 local_8;
  
  iVar1 = *(int *)(param_1 + 0x28);
  local_8 = 0;
  InterlockedIncrement((LONG *)0x0);
  for (local_18 = 0; local_18 < *(uint *)(iVar1 + 0x24); local_18 = local_18 + 1) {
    iVar2 = *(int *)(iVar1 + 0x28) + local_18 * 0x38;
    KfAcquireSpinLock();
    if (*(int *)(iVar2 + 0x28) != 0) {
      IoCancelIrp(*(undefined4 *)(iVar2 + 0x28));
      local_8 = 1;
    }
    KfReleaseSpinLock();
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),local_8);
}



/* ================================================================
 * Function: FUN_000117a0
 * Address:  000117a0
 * ================================================================ */

int FUN_000117a0(int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined2 *_Dst;
  int iVar2;
  
  puVar1 = *(undefined1 **)(param_2 + 0xc);
  if (*(int *)(*(int *)(param_2 + 0x60) + 8) == 10) {
    _Dst = (undefined2 *)ExAllocatePoolWithTag(0,0x50,0x4b6c7542);
    if (_Dst == (undefined2 *)0x0) {
      iVar2 = -0x3fffffe9;
    }
    else {
      memset(_Dst,0,0x50);
      *_Dst = 0x50;
      _Dst[1] = 0x17;
      *(uint *)(_Dst + 0xc) = (uint)*(ushort *)(puVar1 + 6);
      *(undefined4 *)(_Dst + 0x10) = 0;
      *(undefined1 *)((int)_Dst + 0x49) = *puVar1;
      _Dst[0x25] = *(undefined2 *)(puVar1 + 2);
      _Dst[0x26] = *(undefined2 *)(puVar1 + 4);
      if (puVar1[8] == '\0') {
        *(undefined4 *)(_Dst + 10) = 0;
        *(undefined1 **)(_Dst + 0xe) = puVar1 + 9;
      }
      else {
        *(uint *)(_Dst + 10) = *(uint *)(_Dst + 10) | 1;
        *(undefined1 **)(_Dst + 0xe) = puVar1;
      }
      iVar2 = FUN_00014900(param_1,_Dst);
      if (-1 < iVar2) {
        *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(_Dst + 0xc);
      }
      ExFreePool(_Dst);
    }
  }
  else {
    iVar2 = -0x3ffffff3;
  }
  return iVar2;
}



/* ================================================================
 * Function: FUN_000118f0
 * Address:  000118f0
 * ================================================================ */

int FUN_000118f0(int param_1,int param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined2 *_Dst;
  int iVar3;
  undefined4 local_c;
  undefined2 local_8;
  
  pcVar1 = *(char **)(param_2 + 0xc);
  uVar2 = *(undefined4 *)(*(int *)(param_2 + 0x60) + 4);
  if (*(int *)(*(int *)(param_2 + 0x60) + 8) == 10) {
    _Dst = (undefined2 *)ExAllocatePoolWithTag(0,0x50,0x4b6c7542);
    if (_Dst == (undefined2 *)0x0) {
      iVar3 = -0x3fffffe9;
    }
    else {
      memset(_Dst,0,0x50);
      local_c = 2;
      if (*pcVar1 != '\0') {
        local_c = 3;
      }
      switch((uint)(byte)pcVar1[1] << 2 | (uint)(byte)pcVar1[2]) {
      case 4:
        local_8 = 0x1a;
        break;
      case 5:
        local_8 = 0x1b;
        break;
      case 6:
        local_8 = 0x1c;
        break;
      case 7:
        local_8 = 0x1f;
        break;
      case 8:
        local_8 = 0x17;
        break;
      case 9:
        local_8 = 0x18;
        break;
      case 10:
        local_8 = 0x19;
        break;
      case 0xb:
        local_8 = 0x20;
        break;
      default:
        ExFreePool(_Dst);
        return -0x3ffffff3;
      }
      *_Dst = 0x50;
      _Dst[1] = local_8;
      *(undefined4 *)(_Dst + 10) = local_c;
      *(undefined4 *)(_Dst + 0xc) = uVar2;
      *(undefined4 *)(_Dst + 0x10) = *(undefined4 *)(param_2 + 4);
      *(char *)((int)_Dst + 0x49) = pcVar1[4];
      _Dst[0x25] = *(undefined2 *)(pcVar1 + 6);
      _Dst[0x26] = *(undefined2 *)(pcVar1 + 8);
      iVar3 = FUN_00014900(param_1,_Dst);
      if (-1 < iVar3) {
        *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(_Dst + 0xc);
      }
      ExFreePool(_Dst);
    }
  }
  else {
    iVar3 = -0x3ffffff3;
  }
  return iVar3;
}



/* ================================================================
 * Function: FUN_00011ad0
 * Address:  00011ad0
 * ================================================================ */

int FUN_00011ad0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5,
                undefined4 *param_6)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  
  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x28) + 0x8c) +
                  *(int *)(*(int *)(param_1 + 0x28) + 0x84) * 4);
  if ((iVar2 == 0) || (*(uint *)(iVar2 + 0xc) < param_2 + 1U)) {
    iVar2 = -0x3fffffff;
  }
  else {
    iVar2 = iVar2 + 0x10 + param_2 * 0x14;
    if ((*(byte *)(iVar2 + 2) & 0x80) == 0) {
      if ((*(int *)(iVar2 + 4) == 2) || (*(int *)(iVar2 + 4) == 3)) {
        iVar1 = *(int *)(iVar2 + 8);
        if (iVar1 == 0) {
          iVar2 = -0x3fffffff;
        }
        else if (*(uint *)(iVar2 + 0xc) < param_5) {
          iVar2 = -0x3ffffff3;
        }
        else {
          puVar3 = (undefined2 *)ExAllocatePoolWithTag(0,0x48,0x4b6c7542);
          if (puVar3 == (undefined2 *)0x0) {
            iVar2 = -0x3fffffe9;
          }
          else {
            puVar3[1] = 9;
            *puVar3 = 0x48;
            *(int *)(puVar3 + 8) = iVar1;
            *(uint *)(puVar3 + 0xc) = param_5;
            *(undefined4 *)(puVar3 + 0x10) = param_3;
            *(undefined4 *)(puVar3 + 0xe) = param_4;
            *(undefined4 *)(puVar3 + 10) = 0;
            *(undefined4 *)(puVar3 + 0x12) = 0;
            iVar2 = FUN_000147d0(param_1,puVar3);
            if (iVar2 < 0) {
              *param_6 = 0;
            }
            else {
              *param_6 = *(undefined4 *)(puVar3 + 0xc);
            }
            ExFreePool(puVar3);
          }
        }
      }
      else {
        iVar2 = -0x3ffffff3;
      }
    }
    else {
      iVar2 = -0x3ffffff3;
    }
  }
  return iVar2;
}



/* ================================================================
 * Function: FUN_00011c70
 * Address:  00011c70
 * ================================================================ */

int FUN_00011c70(int param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5,
                undefined4 *param_6)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  
  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x28) + 0x8c) +
                  *(int *)(*(int *)(param_1 + 0x28) + 0x84) * 4);
  if ((iVar2 == 0) || (*(uint *)(iVar2 + 0xc) < param_2 + 1U)) {
    iVar2 = -0x3fffffff;
  }
  else {
    iVar2 = iVar2 + 0x10 + param_2 * 0x14;
    if ((*(byte *)(iVar2 + 2) & 0x80) == 0) {
      iVar2 = -0x3ffffff3;
    }
    else if ((*(int *)(iVar2 + 4) == 2) || (*(int *)(iVar2 + 4) == 3)) {
      iVar1 = *(int *)(iVar2 + 8);
      if (iVar1 == 0) {
        iVar2 = -0x3fffffff;
      }
      else if (*(uint *)(iVar2 + 0xc) < param_5) {
        iVar2 = -0x3ffffff3;
      }
      else {
        puVar3 = (undefined2 *)ExAllocatePoolWithTag(0,0x48,0x4b6c7542);
        if (puVar3 == (undefined2 *)0x0) {
          iVar2 = -0x3fffffe9;
        }
        else {
          puVar3[1] = 9;
          *puVar3 = 0x48;
          *(int *)(puVar3 + 8) = iVar1;
          *(uint *)(puVar3 + 0xc) = param_5;
          *(undefined4 *)(puVar3 + 0x10) = param_3;
          *(undefined4 *)(puVar3 + 0xe) = param_4;
          *(undefined4 *)(puVar3 + 10) = 3;
          *(undefined4 *)(puVar3 + 0x12) = 0;
          iVar2 = FUN_000147d0(param_1,puVar3);
          if (iVar2 < 0) {
            *param_6 = 0;
          }
          else {
            *param_6 = *(undefined4 *)(puVar3 + 0xc);
          }
          ExFreePool(puVar3);
        }
      }
    }
    else {
      iVar2 = -0x3ffffff3;
    }
  }
  return iVar2;
}



/* ================================================================
 * Function: FUN_00011e20
 * Address:  00011e20
 * ================================================================ */

int FUN_00011e20(int param_1,int param_2)

{
  int iVar1;
  LONG *lpAddend;
  undefined2 *puVar2;
  undefined1 local_6c;
  undefined2 local_6b;
  int *local_68;
  undefined2 *local_64;
  int *local_5c;
  undefined2 *local_58;
  int *local_50;
  int *local_4c;
  int *local_48;
  int local_44;
  int *local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  int *local_c;
  int *local_8;
  
  local_20 = 0;
  local_c = *(int **)(param_1 + 0x28);
  local_14 = *(int *)(param_2 + 0x60);
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  local_8 = *(int **)(param_2 + 0xc);
  local_10 = *(uint *)(local_14 + 8);
  local_1c = *(uint *)(local_14 + 4);
  local_18 = *(uint *)(local_14 + 0xc);
  FUN_00014740(param_1);
  if (local_c[0x25] != 1) {
    local_20 = -0x3fffffaa;
    *(undefined4 *)(param_2 + 0x18) = 0xc0000056;
    IofCompleteRequest();
    FUN_000146b0(param_1);
    return local_20;
  }
  if (local_c[0x22] != 0) {
    local_20 = -0x3ffffee0;
    *(undefined4 *)(param_2 + 0x18) = 0xc0000120;
    IofCompleteRequest();
    FUN_000146b0(param_1);
    return local_20;
  }
  if (local_18 < 0x22042f) {
    if (local_18 == 0x22042e) {
      local_38 = 0;
      if (local_10 < 4) {
        *(undefined4 *)(param_2 + 0x18) = 0xc000000d;
      }
      else {
        local_3c = *local_8;
        local_20 = FUN_00011ad0(param_1,local_3c,*(undefined4 *)(param_2 + 4),0,local_1c,&local_38);
        if (-1 < local_20) {
          *(undefined4 *)(param_2 + 0x1c) = local_38;
        }
        *(int *)(param_2 + 0x18) = local_20;
      }
      goto LAB_000126d0;
    }
    switch(local_18) {
    case 0x220400:
      local_4c = local_8;
      if (local_1c == 3) {
        *(undefined1 *)local_8 = 0x20;
        *(undefined1 *)((int)local_8 + 1) = 0;
        *(undefined1 *)((int)local_8 + 2) = 1;
        *(undefined4 *)(param_2 + 0x1c) = 3;
        local_20 = 0;
      }
      else {
        local_20 = -0x3ffffff3;
      }
      break;
    default:
      goto switchD_00011f44_caseD_220401;
    case 0x220408:
      local_50 = local_8;
      if ((local_8 == (int *)0x0) || (local_1c < 0x12)) {
        local_20 = -0x3ffffff3;
      }
      else {
        local_58 = (undefined2 *)ExAllocatePoolWithTag(0,0x50,0x4b6c7542);
        if (local_58 == (undefined2 *)0x0) {
          local_20 = -0x3fffffe9;
        }
        else {
          local_58[1] = 0xb;
          *local_58 = 0x50;
          *(undefined4 *)(local_58 + 0xc) = 0x12;
          *(undefined4 *)(local_58 + 0x10) = 0;
          *(int **)(local_58 + 0xe) = local_50;
          *(undefined1 *)((int)local_58 + 0x4b) = 1;
          *(undefined1 *)(local_58 + 0x25) = 0;
          local_58[0x26] = 0;
          *(undefined4 *)(local_58 + 0x12) = 0;
          local_20 = FUN_00014900(param_1,local_58);
          if (-1 < local_20) {
            *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(local_58 + 0xc);
            local_20 = 0;
          }
          ExFreePool(local_58);
        }
      }
      break;
    case 0x22040c:
      local_5c = local_8;
      if (local_8 == (int *)0x0) {
        local_20 = -0x3ffffff3;
      }
      else {
        local_64 = (undefined2 *)ExAllocatePoolWithTag(0,0x50,0x4b6c7542);
        if (local_64 == (undefined2 *)0x0) {
          local_20 = -0x3fffffe9;
        }
        else {
          local_64[1] = 0xb;
          *local_64 = 0x50;
          *(uint *)(local_64 + 0xc) = local_1c;
          *(undefined4 *)(local_64 + 0x10) = 0;
          *(int **)(local_64 + 0xe) = local_5c;
          *(undefined1 *)((int)local_64 + 0x4b) = 2;
          *(undefined1 *)(local_64 + 0x25) = 0;
          local_64[0x26] = 0;
          *(undefined4 *)(local_64 + 0x12) = 0;
          local_20 = FUN_00014900(param_1,local_64);
          if (-1 < local_20) {
            *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(local_64 + 0xc);
            local_20 = 0;
          }
          ExFreePool(local_64);
        }
      }
      break;
    case 0x220410:
      local_10 = 3;
      if (local_1c == 0) {
        local_20 = -0x3ffffff3;
      }
      else {
        local_68 = local_8;
        if (local_8 == (int *)0x0) {
          local_20 = -0x3ffffff3;
        }
        else {
          memcpy(&local_6c,local_8,3);
          puVar2 = (undefined2 *)ExAllocatePoolWithTag(0,0x50,0x4b6c7542);
          if (puVar2 == (undefined2 *)0x0) {
            local_20 = -0x3fffffe9;
          }
          else {
            puVar2[1] = 0xb;
            *puVar2 = 0x50;
            *(uint *)(puVar2 + 0xc) = local_1c;
            *(undefined4 *)(puVar2 + 0x10) = 0;
            *(int **)(puVar2 + 0xe) = local_68;
            *(undefined1 *)((int)puVar2 + 0x4b) = 3;
            *(undefined1 *)(puVar2 + 0x25) = local_6c;
            puVar2[0x26] = local_6b;
            *(undefined4 *)(puVar2 + 0x12) = 0;
            local_20 = FUN_00014900(param_1,puVar2);
            if (-1 < local_20) {
              *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(puVar2 + 0xc);
              local_20 = 0;
            }
            ExFreePool(puVar2);
          }
        }
      }
      break;
    case 0x220414:
      if (local_1c < 0x24) {
        local_20 = -0x3ffffff3;
      }
      else if (local_c[0x23] == 0) {
        local_20 = -0x3ffffff3;
      }
      else {
        memcpy(local_8,*(void **)(local_c[0x23] + local_c[0x21] * 4),local_1c);
        *(uint *)(param_2 + 0x1c) = local_1c;
      }
      break;
    case 0x220418:
      if (local_10 == 4) {
        iVar1 = *(int *)(local_c[0x23] + local_c[0x21] * 4) + 0x10 + *local_8 * 0x14;
        if (iVar1 == 0) {
          local_20 = -0x3ffffff3;
        }
        else {
          local_20 = FUN_00011290(param_1,iVar1);
        }
      }
      else {
        local_20 = -0x3ffffff3;
      }
      break;
    case 0x22041c:
      if (local_10 == 4) {
        iVar1 = *(int *)(local_c[0x23] + local_c[0x21] * 4);
        if (*(uint *)(iVar1 + 0xc) < *local_8 + 1U) {
          local_20 = -0x3ffffff3;
        }
        else {
          iVar1 = iVar1 + 0x10 + *local_8 * 0x14;
          if (iVar1 == 0) {
            local_20 = -0x3ffffff3;
          }
          else {
            local_20 = FUN_00011320(param_1,iVar1);
          }
        }
      }
      else {
        local_20 = -0x3ffffff3;
      }
      break;
    case 0x220420:
      local_20 = FUN_000117a0(param_1,param_2);
      break;
    case 0x220425:
      local_20 = FUN_000118f0(param_1,param_2);
      break;
    case 0x220429:
      local_30 = 0;
      if (local_10 < 4) {
        *(undefined4 *)(param_2 + 0x18) = 0xc000000d;
      }
      else {
        local_34 = *local_8;
        local_20 = FUN_00011c70(param_1,local_34,*(undefined4 *)(param_2 + 4),0,local_1c,&local_30);
        if (-1 < local_20) {
          *(undefined4 *)(param_2 + 0x1c) = local_30;
        }
        *(int *)(param_2 + 0x18) = local_20;
      }
    }
    goto LAB_000126d0;
  }
  if (local_18 < 0x220445) {
    if (local_18 == 0x220444) {
      local_20 = FUN_00011500(param_1);
      *(undefined4 *)(param_2 + 0x1c) = 0;
      goto LAB_000126d0;
    }
    lpAddend = (LONG *)(local_18 - 0x220430);
    switch(local_18) {
    case 0x220430:
      if (local_10 == 2) {
        FUN_00011700(param_1);
        local_2c = local_8;
        local_20 = FUN_00014200(param_1,(char)*local_8,*(undefined1 *)((int)local_8 + 1));
        InterlockedDecrement(lpAddend);
      }
      else {
        local_20 = -0x3ffffff3;
      }
      break;
    default:
      goto switchD_00011f44_caseD_220401;
    case 0x220434:
      local_40 = local_8;
      if (local_1c == 4) {
        *local_8 = local_c[0x28];
        *(undefined4 *)(param_2 + 0x1c) = 4;
      }
      else {
        local_20 = -0x3ffffff3;
      }
      break;
    case 0x220438:
      local_20 = FUN_00011460(param_1);
      *(undefined4 *)(param_2 + 0x1c) = 0;
      break;
    case 0x22043c:
      if (local_1c == 4) {
        local_20 = FUN_000113b0(param_1,&local_44);
        if (-1 < local_20) {
          *local_8 = local_44;
          *(undefined4 *)(param_2 + 0x1c) = 4;
        }
      }
      else {
        local_20 = -0x3ffffff3;
      }
      break;
    case 0x220440:
      local_48 = local_8;
      *local_8 = DAT_000151a8;
      local_20 = 0;
      *(undefined4 *)(param_2 + 0x18) = 0;
      *(undefined4 *)(param_2 + 0x18) = 4;
    }
  }
  else {
    if (local_18 < 0x22058d) {
      if (local_18 == 0x22058c) {
        local_24 = local_8;
        if (local_1c < 0x10) {
          local_20 = -0x3ffffff3;
        }
        else {
          if ((*local_c == 0x156ad158) && (local_c[1] == 0x39f389fe)) {
            local_8[2] = -1;
            local_8[3] = -1;
          }
          else {
            local_8[2] = *local_c;
            local_8[3] = local_c[1];
          }
          local_8[1] = local_c[7];
          *(char *)local_8 = (char)local_c[2];
          *(undefined4 *)(param_2 + 0x1c) = 0x10;
          local_20 = 0;
        }
        goto LAB_000126d0;
      }
      if ((local_18 == 0x220448) || (local_18 == 0x22044c)) goto LAB_000126d0;
    }
    else if (local_18 == 0x22858c) {
      local_28 = local_8;
      if (local_10 < 0x10) {
        local_20 = -0x3ffffff3;
      }
      else {
        local_20 = 0;
      }
      goto LAB_000126d0;
    }
switchD_00011f44_caseD_220401:
    local_20 = -0x3ffffff3;
  }
LAB_000126d0:
  *(int *)(param_2 + 0x18) = local_20;
  if (local_20 == 0x103) {
    *(byte *)(*(int *)(param_2 + 0x60) + 3) = *(byte *)(*(int *)(param_2 + 0x60) + 3) | 1;
  }
  else {
    IofCompleteRequest();
  }
  FUN_000146b0(param_1);
  return local_20;
}



/* ================================================================
 * Function: FUN_000127a0
 * Address:  000127a0
 * ================================================================ */

undefined4 FUN_000127a0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_c;
  
  local_c = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  FUN_00014740(param_1);
  if (*(int *)(iVar1 + 0x94) == 1) {
    iVar2 = *(int *)(*(int *)(param_2 + 0x60) + 0x18);
    *(undefined4 *)(iVar2 + 0xc) = 0;
    if (*(short *)(iVar2 + 0x30) != 0) {
      iVar3 = FUN_00010bc0(param_1,(ushort *)(iVar2 + 0x30));
      if (iVar3 == 0) {
        local_c = 0xc000000d;
      }
      else {
        *(int *)(iVar2 + 0xc) = iVar3;
        *(int *)(iVar3 + 0x20) = *(int *)(iVar3 + 0x20) + 1;
        local_c = 0;
        *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1;
      }
    }
  }
  else {
    local_c = 0xc0000056;
  }
  *(undefined4 *)(param_2 + 0x18) = local_c;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  IofCompleteRequest();
  FUN_000146b0(param_1);
  return local_c;
}



/* ================================================================
 * Function: FUN_00012890
 * Address:  00012890
 * ================================================================ */

undefined4 FUN_00012890(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar6 = *(undefined4 *)(param_1 + 0x28);
  uVar5 = 0;
  FUN_00014740(param_1);
  *(undefined4 *)(param_2 + 0x18) = uVar5;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  iVar4 = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  iVar2 = *(int *)(param_2 + 0x60);
  iVar3 = *(int *)(iVar2 + 0x18);
  if (((*(int *)(iVar3 + 0xc) != 0) && (iVar4 = *(int *)(iVar3 + 0xc), iVar4 != 0)) &&
     (*(int *)(iVar4 + 0x20) != 0)) {
    *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + -1;
    *(int *)(iVar4 + 0x20) = *(int *)(iVar4 + 0x20) + -1;
  }
  IofCompleteRequest(iVar2,iVar1,iVar4,iVar3,uVar5,uVar6);
  FUN_000146b0(param_1);
  return uVar5;
}



/* ================================================================
 * Function: FUN_00012950
 * Address:  00012950
 * ================================================================ */

int FUN_00012950(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int local_14;
  
  iVar1 = *(int *)(param_1 + 0x28);
  iVar2 = *(int *)(param_2 + 0x60);
  local_14 = 0;
  bVar3 = true;
  FUN_00014740(param_1);
  switch(*(undefined1 *)(iVar2 + 1)) {
  case 0:
    *(undefined4 *)(iVar1 + 0x94) = 1;
    iVar1 = *(int *)(param_2 + 0x60);
    memcpy((void *)(iVar1 + -0x24),*(void **)(param_2 + 0x60),0x1c);
    *(undefined1 *)(iVar1 + -0x21) = 0;
    iVar1 = *(int *)(param_2 + 0x60);
    *(code **)(iVar1 + -8) = FUN_00012f30;
    *(int *)(iVar1 + -4) = param_1;
    *(undefined1 *)(iVar1 + -0x21) = 0;
    *(undefined1 *)(iVar1 + -0x21) = 0x40;
    *(byte *)(iVar1 + -0x21) = *(byte *)(iVar1 + -0x21) | 0x80;
    *(byte *)(iVar1 + -0x21) = *(byte *)(iVar1 + -0x21) | 0x20;
    local_14 = IofCallDriver();
    bVar3 = false;
    FUN_000146b0(param_1);
    break;
  case 1:
    FUN_000146b0(param_1);
    if (*(int *)(iVar1 + 0x94) == 1) {
      KeWaitForSingleObject(iVar1 + 0x310,5,0,0,0);
      local_14 = FUN_00012cd0(param_1);
    }
    bVar3 = local_14 == 0;
    if (bVar3) {
      *(undefined4 *)(iVar1 + 0x94) = 2;
    }
    break;
  case 2:
    *(undefined4 *)(iVar1 + 0x94) = 0;
    FUN_000146b0(param_1);
    local_14 = FUN_00012d70(param_1);
    break;
  case 3:
    *(undefined4 *)(iVar1 + 0x94) = 1;
    FUN_000146b0(param_1);
    break;
  case 4:
    *(undefined4 *)(iVar1 + 0x94) = 5;
    FUN_000146b0(param_1);
    local_14 = FUN_00012cd0(param_1);
    break;
  case 5:
    *(undefined4 *)(iVar1 + 0x94) = 4;
    FUN_000146b0(param_1);
    break;
  case 6:
    *(undefined4 *)(iVar1 + 0x94) = 1;
    FUN_000146b0(param_1);
    break;
  default:
    FUN_000146b0(param_1);
    break;
  case 9:
    iVar1 = *(int *)(param_2 + 0x60);
    memcpy((void *)(iVar1 + -0x24),*(void **)(param_2 + 0x60),0x1c);
    *(undefined1 *)(iVar1 + -0x21) = 0;
    iVar1 = *(int *)(param_2 + 0x60);
    *(code **)(iVar1 + -8) = FUN_000134f0;
    *(int *)(iVar1 + -4) = param_1;
    *(undefined1 *)(iVar1 + -0x21) = 0;
    *(undefined1 *)(iVar1 + -0x21) = 0x40;
    *(byte *)(iVar1 + -0x21) = *(byte *)(iVar1 + -0x21) | 0x80;
    *(byte *)(iVar1 + -0x21) = *(byte *)(iVar1 + -0x21) | 0x20;
    local_14 = IofCallDriver();
    bVar3 = false;
    FUN_000146b0(param_1);
    break;
  case 0x17:
    *(undefined4 *)(iVar1 + 0x94) = 3;
    FUN_000146b0(param_1);
    local_14 = FUN_00012cd0(param_1);
  }
  if (bVar3) {
    *(char *)(param_2 + 0x23) = *(char *)(param_2 + 0x23) + '\x01';
    *(int *)(param_2 + 0x60) = *(int *)(param_2 + 0x60) + 0x24;
    local_14 = IofCallDriver();
  }
  return local_14;
}



/* ================================================================
 * Function: FUN_00012cd0
 * Address:  00012cd0
 * ================================================================ */

undefined4 FUN_00012cd0(int param_1)

{
  undefined2 *puVar1;
  undefined4 local_14;
  
  local_14 = FUN_000116d0(param_1);
  puVar1 = (undefined2 *)ExAllocatePoolWithTag(0,0x3c,0x4b6c7542);
  if (puVar1 == (undefined2 *)0x0) {
    local_14 = 0xc0000017;
  }
  else {
    puVar1[1] = 0;
    *puVar1 = 0x3c;
    *(undefined4 *)(puVar1 + 8) = 0;
    FUN_000147d0(param_1,puVar1);
    ExFreePool(puVar1);
  }
  FUN_00013dd0(param_1);
  return local_14;
}



/* ================================================================
 * Function: FUN_00012d70
 * Address:  00012d70
 * ================================================================ */

undefined4 FUN_00012d70(int param_1)

{
  undefined4 uVar1;
  int local_18;
  undefined1 local_10 [8];
  int local_8;
  
  local_8 = *(int *)(param_1 + 0x28);
  FUN_00011690();
  FUN_000146b0(param_1);
  KeWaitForSingleObject(local_8 + 0x300,5,0,0,0);
  if (*(int *)(local_8 + 0x90) != 0) {
    IoCancelIrp(*(undefined4 *)(local_8 + 0x90));
  }
  RtlInitUnicodeString(local_10,local_8 + 0xfc);
  uVar1 = IoSetDeviceInterfaceState(local_10,0);
  if (*(int *)(local_8 + 0x28) != 0) {
    ExFreePool(*(undefined4 *)(local_8 + 0x28));
    *(undefined4 *)(local_8 + 0x28) = 0;
  }
  if (*(int *)(local_8 + 0x8c) != 0) {
    if (**(int **)(local_8 + 0x8c) != 0) {
      ExFreePool(**(undefined4 **)(local_8 + 0x8c));
      **(undefined4 **)(local_8 + 0x8c) = 0;
    }
    ExFreePool(*(undefined4 *)(local_8 + 0x8c));
    *(undefined4 *)(local_8 + 0x8c) = 0;
  }
  if (*(int *)(local_8 + 0x7c) != 0) {
    for (local_18 = 0; local_18 < (int)(uint)*(byte *)(*(int *)(local_8 + 0x78) + 0x11);
        local_18 = local_18 + 1) {
      if (*(int *)(*(int *)(local_8 + 0x7c) + local_18 * 4) != 0) {
        ExFreePool(*(undefined4 *)(*(int *)(local_8 + 0x7c) + local_18 * 4));
        *(undefined4 *)(*(int *)(local_8 + 0x7c) + local_18 * 4) = 0;
      }
    }
    ExFreePool(*(undefined4 *)(local_8 + 0x7c));
    *(undefined4 *)(local_8 + 0x7c) = 0;
  }
  if (*(int *)(local_8 + 0x78) != 0) {
    ExFreePool(*(undefined4 *)(local_8 + 0x78));
    *(undefined4 *)(local_8 + 0x78) = 0;
  }
  IoDetachDevice(*(undefined4 *)(local_8 + 0x2c));
  IoDeleteDevice(param_1);
  return uVar1;
}



/* ================================================================
 * Function: FUN_00012f30
 * Address:  00012f30
 * ================================================================ */

int FUN_00012f30(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  KeGetCurrentIrql(0,param_3,*(undefined4 *)(param_3 + 0x28));
  if (-1 < *(int *)(param_2 + 0x18)) {
    if (*(char *)(param_2 + 0x21) != '\0') {
      *(byte *)(*(int *)(param_2 + 0x60) + 3) = *(byte *)(*(int *)(param_2 + 0x60) + 3) | 1;
    }
    iVar1 = FUN_00013050(param_3);
    *(int *)(param_2 + 0x18) = iVar1;
  }
  return iVar1;
}



/* ================================================================
 * Function: FUN_00012fa0
 * Address:  00012fa0
 * ================================================================ */

int FUN_00012fa0(int param_1,undefined1 param_2,undefined1 param_3,undefined2 param_4,
                undefined4 param_5,undefined4 param_6)

{
  undefined2 *puVar1;
  int iVar2;
  
  puVar1 = (undefined2 *)ExAllocatePoolWithTag(0,0x50,0x4b6c7542,0,0);
  if (puVar1 == (undefined2 *)0x0) {
    iVar2 = -0x3fffffe9;
  }
  else {
    puVar1[1] = 0xb;
    *puVar1 = 0x50;
    *(undefined4 *)(puVar1 + 0xc) = param_6;
    *(undefined4 *)(puVar1 + 0x10) = 0;
    *(undefined4 *)(puVar1 + 0xe) = param_5;
    *(undefined1 *)((int)puVar1 + 0x4b) = param_2;
    *(undefined1 *)(puVar1 + 0x25) = param_3;
    puVar1[0x26] = param_4;
    *(undefined4 *)(puVar1 + 0x12) = 0;
    iVar2 = FUN_000147d0(param_1,puVar1);
    ExFreePool(puVar1);
  }
  return iVar2;
}



/* ================================================================
 * Function: FUN_00013050
 * Address:  00013050
 * ================================================================ */

int FUN_00013050(int param_1)

{
  undefined4 uVar1;
  undefined1 local_24 [12];
  int local_18;
  uint local_14;
  undefined1 *local_10;
  uint local_c;
  int local_8;
  
  local_8 = *(int *)(param_1 + 0x28);
  local_10 = (undefined1 *)0x0;
  local_c = 0;
  local_14 = 0x12;
  local_10 = (undefined1 *)ExAllocatePoolWithTag(0,0x12,0x4b6c7542);
  if (local_10 == (undefined1 *)0x0) {
    local_18 = -0x3fffffe9;
  }
  else {
    local_18 = FUN_00012fa0(param_1,1,0,0,local_10,local_14);
    if (-1 < local_18) {
      *(undefined1 **)(local_8 + 0x78) = local_10;
      local_10 = (undefined1 *)0x0;
      uVar1 = ExAllocatePoolWithTag
                        (0,(uint)*(byte *)(*(int *)(local_8 + 0x78) + 0x11) << 2,0x4b6c7542);
      *(undefined4 *)(local_8 + 0x7c) = uVar1;
      if (*(int *)(local_8 + 0x7c) == 0) {
        local_18 = -0x3fffffe9;
      }
      else {
        for (local_c = 0; local_c < *(byte *)(*(int *)(local_8 + 0x78) + 0x11);
            local_c = local_c + 1) {
          local_14 = 9;
          local_10 = local_24;
          if (local_10 == (undefined1 *)0x0) {
            return -0x3fffffe9;
          }
          local_18 = FUN_00012fa0(param_1,2,(undefined1)local_c,0,local_10,9);
          if (local_18 < 0) {
            return local_18;
          }
          local_14 = (uint)*(ushort *)(local_10 + 2);
          local_10 = (undefined1 *)ExAllocatePoolWithTag(0,local_14,0x4b6c7542);
          if (local_10 == (undefined1 *)0x0) {
            return -0x3fffffe9;
          }
          local_18 = FUN_00012fa0(param_1,2,(undefined1)local_c,0,local_10,local_14);
          if (local_18 < 0) {
            return local_18;
          }
          *(undefined1 **)(*(int *)(local_8 + 0x7c) + local_c * 4) = local_10;
          local_10 = (undefined1 *)0x0;
        }
        if (-1 < local_18) {
          local_18 = FUN_00010512(param_1);
          if (-1 < local_18) {
            local_18 = FUN_00013230(param_1,0);
          }
          if (-1 < local_18) {
            local_18 = FUN_000116b0();
          }
        }
      }
    }
  }
  return local_18;
}



/* ================================================================
 * Function: FUN_00013230
 * Address:  00013230
 * ================================================================ */

int FUN_00013230(int param_1,int param_2)

{
  int iVar1;
  void *_Dst;
  undefined4 uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined1 uVar10;
  int iVar11;
  
  iVar9 = *(int *)(param_1 + 0x28);
  iVar5 = *(int *)(*(int *)(iVar9 + 0x7c) + param_2 * 4);
  iVar6 = 0;
  iVar8 = 0;
  uVar10 = 0;
  uVar3 = (ushort)*(byte *)(iVar5 + 4) * 8 + 8;
  uVar7 = (uint)uVar3;
  _Dst = (void *)ExAllocatePoolWithTag
                           (0,uVar3,0x4b6c7542,0,iVar5,0,0,0xffffffff,0xffffffff,0xffffffff,0,0,0,0,
                            0,0,iVar9,0,0,0,uVar7,0);
  if (_Dst == (void *)0x0) {
    iVar4 = -0x3fffffe9;
  }
  else {
    memset(_Dst,0,uVar7 & 0xffff);
    iVar4 = iVar5;
    for (iVar11 = 0; iVar11 < (int)(uint)*(byte *)(iVar5 + 4); iVar11 = iVar11 + 1) {
      iVar4 = _USBD_ParseConfigurationDescriptorEx_28
                        (iVar5,iVar4,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
      if (iVar4 == 0) {
        iVar4 = -0x3fffffff;
        goto LAB_0001348e;
      }
      *(int *)((int)_Dst + iVar11 * 8) = iVar4;
    }
    *(undefined4 *)((int)_Dst + (uint)*(byte *)(iVar5 + 4) * 8) = 0;
    iVar6 = _USBD_CreateConfigurationRequestEx_8(iVar5,_Dst);
    if (iVar6 == 0) {
      iVar4 = -0x3fffffe9;
    }
    else {
      iVar4 = FUN_000147d0(param_1,iVar6);
      if (-1 < iVar4) {
        *(undefined4 *)(iVar9 + 0x74) = *(undefined4 *)(iVar6 + 0x14);
        uVar2 = ExAllocatePoolWithTag(0,(uint)*(byte *)(iVar5 + 4) << 2,0x4b6c7542);
        *(undefined4 *)(iVar9 + 0x8c) = uVar2;
        if (*(int *)(iVar9 + 0x8c) == 0) {
          iVar4 = -0x3fffffe9;
        }
        else {
          for (iVar11 = 0; iVar11 < (int)(uint)*(byte *)(iVar5 + 4); iVar11 = iVar11 + 1) {
            iVar1 = *(int *)((int)_Dst + iVar11 * 8 + 4);
            uVar10 = *(undefined1 *)(iVar1 + 2);
            for (uVar7 = 0; uVar7 < *(uint *)(iVar1 + 0xc); uVar7 = uVar7 + 1) {
              *(undefined4 *)(iVar1 + 0x1c + iVar8 * 0x14) = *(undefined4 *)(iVar9 + 0x1c);
            }
            *(undefined4 *)(*(int *)(iVar9 + 0x8c) + iVar11 * 4) = 0;
          }
        }
      }
    }
  }
LAB_0001348e:
  if (iVar6 != 0) {
    ExFreePool(iVar6);
  }
  if (_Dst != (void *)0x0) {
    ExFreePool(_Dst);
  }
  if (-1 < iVar4) {
    *(int *)(iVar9 + 0x80) = param_2;
    iVar4 = FUN_00014200(param_1,uVar10,0);
  }
  return iVar4;
}



/* ================================================================
 * Function: FUN_000134f0
 * Address:  000134f0
 * ================================================================ */

undefined4 FUN_000134f0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  
  iVar1 = *(int *)(param_3 + 0x28);
  KeGetCurrentIrql();
  if (*(char *)(param_2 + 0x21) != '\0') {
    *(byte *)(*(int *)(param_2 + 0x60) + 3) = *(byte *)(*(int *)(param_2 + 0x60) + 3) | 1;
  }
  if (-1 < *(int *)(param_2 + 0x18)) {
    iVar2 = *(int *)(param_2 + 0x60);
    *(uint *)(*(int *)(iVar2 + 4) + 4) = *(uint *)(*(int *)(iVar2 + 4) + 4) | 0x200;
    memcpy((void *)(iVar1 + 0x34),*(void **)(iVar2 + 4),0x40);
    for (local_18 = 0; local_18 < 7; local_18 = local_18 + 1) {
    }
    *(undefined4 *)(param_2 + 0x18) = 0;
  }
  return 0;
}



/* ================================================================
 * Function: FUN_000135b0
 * Address:  000135b0
 * ================================================================ */

int FUN_000135b0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_3 + 0x28);
  iVar2 = *(int *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(*(int *)(param_2 + 0x60) + 0xc);
  if (*(char *)(param_2 + 0x21) != '\0') {
    *(byte *)(*(int *)(param_2 + 0x60) + 3) = *(byte *)(*(int *)(param_2 + 0x60) + 3) | 1;
  }
  if (-1 < iVar2) {
    *(undefined4 *)(iVar1 + 0xa0) = uVar3;
  }
  return iVar2;
}



/* ================================================================
 * Function: FUN_00013620
 * Address:  00013620
 * ================================================================ */

/* WARNING: Removing unreachable block (ram,0x000136b8) */

undefined4 FUN_00013620(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(param_1 + 0x28);
  iVar2 = *(int *)(param_2 + 0x60);
  iVar3 = *(int *)(iVar2 + 0xc);
  FUN_00011630(param_1,*(undefined4 *)(iVar2 + 0xc),*(int *)(iVar2 + 0x10));
  *(undefined4 *)(iVar1 + 0x9c) = *(undefined4 *)(iVar2 + 0xc);
  if (iVar3 == 1) {
    *(undefined4 *)(iVar1 + 0xa4) = 1;
    if (*(int *)(iVar1 + 0x90) != 0) {
      IoCancelIrp(*(undefined4 *)(iVar1 + 0x90));
    }
  }
  else {
    *(undefined4 *)(iVar1 + 0xa4) = 4;
  }
  if (*(int *)(iVar1 + 0xa4) == *(int *)(iVar1 + 0xa0)) {
    *(char *)(param_2 + 0x23) = *(char *)(param_2 + 0x23) + '\x01';
    *(int *)(param_2 + 0x60) = *(int *)(param_2 + 0x60) + 0x24;
  }
  else {
    iVar2 = *(int *)(param_2 + 0x60);
    memcpy((void *)(iVar2 + -0x24),*(void **)(param_2 + 0x60),0x1c);
    *(undefined1 *)(iVar2 + -0x21) = 0;
    iVar2 = *(int *)(param_2 + 0x60);
    *(code **)(iVar2 + -8) = FUN_00013ae0;
    *(int *)(iVar2 + -4) = param_1;
    *(undefined1 *)(iVar2 + -0x21) = 0;
    *(undefined1 *)(iVar2 + -0x21) = 0x40;
    *(byte *)(iVar2 + -0x21) = *(byte *)(iVar2 + -0x21) | 0x80;
    *(byte *)(iVar2 + -0x21) = *(byte *)(iVar2 + -0x21) | 0x20;
  }
  PoStartNextPowerIrp(param_2);
  uVar4 = PoCallDriver(*(undefined4 *)(iVar1 + 0x2c),param_2);
  return uVar4;
}



/* ================================================================
 * Function: FUN_000137d0
 * Address:  000137d0
 * ================================================================ */

undefined4 FUN_000137d0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x28);
  FUN_000115c0(param_1,*(int *)(*(int *)(param_2 + 0x60) + 0xc));
  iVar2 = *(int *)(param_2 + 0x60);
  memcpy((void *)(iVar2 + -0x24),*(void **)(param_2 + 0x60),0x1c);
  *(undefined1 *)(iVar2 + -0x21) = 0;
  iVar2 = *(int *)(param_2 + 0x60);
  *(code **)(iVar2 + -8) = FUN_000135b0;
  *(int *)(iVar2 + -4) = param_1;
  *(undefined1 *)(iVar2 + -0x21) = 0;
  *(undefined1 *)(iVar2 + -0x21) = 0x40;
  *(byte *)(iVar2 + -0x21) = *(byte *)(iVar2 + -0x21) | 0x80;
  *(byte *)(iVar2 + -0x21) = *(byte *)(iVar2 + -0x21) | 0x20;
  PoStartNextPowerIrp(param_2);
  uVar3 = PoCallDriver(*(undefined4 *)(iVar1 + 0x2c),param_2);
  return uVar3;
}



/* ================================================================
 * Function: FUN_000138c0
 * Address:  000138c0
 * ================================================================ */

undefined4 FUN_000138c0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 local_10;
  
  iVar2 = *(int *)(param_1 + 0x28);
  iVar3 = *(int *)(param_2 + 0x60);
  local_10 = 0;
  FUN_00014740(param_1);
  cVar1 = *(char *)(iVar3 + 1);
  if (cVar1 == '\0') {
    *(char *)(param_2 + 0x23) = *(char *)(param_2 + 0x23) + '\x01';
    *(int *)(param_2 + 0x60) = *(int *)(param_2 + 0x60) + 0x24;
    PoStartNextPowerIrp(param_2);
    local_10 = PoCallDriver(*(undefined4 *)(iVar2 + 0x2c),param_2);
  }
  else if (cVar1 == '\x02') {
    if (*(int *)(iVar3 + 8) == 0) {
      local_10 = FUN_00013620(param_1,param_2);
    }
    else if (*(int *)(iVar3 + 8) == 1) {
      local_10 = FUN_000137d0(param_1,param_2);
    }
  }
  else if (cVar1 == '\x03') {
    if (*(int *)(iVar3 + 8) == 0) {
      FUN_00013b90(param_1,param_2);
    }
    else if (*(int *)(iVar3 + 8) == 1) {
      FUN_00013cb0(param_1,param_2);
    }
  }
  else {
    iVar3 = *(int *)(param_2 + 0x60);
    memcpy((void *)(iVar3 + -0x24),*(void **)(param_2 + 0x60),0x1c);
    *(undefined1 *)(iVar3 + -0x21) = 0;
    PoStartNextPowerIrp(param_2);
    local_10 = PoCallDriver(*(undefined4 *)(iVar2 + 0x2c),param_2);
  }
  FUN_000146b0(param_1);
  return local_10;
}



/* ================================================================
 * Function: FUN_00013a20
 * Address:  00013a20
 * ================================================================ */

undefined4 FUN_00013a20(void)

{
  int iVar1;
  int in_stack_00000010;
  
  iVar1 = *(int *)(in_stack_00000010 + 0x28);
  if (*(int *)(iVar1 + 0x2fc) != 0) {
    IofCompleteRequest();
  }
  if (*(char *)(iVar1 + 0x98) != '\0') {
    KeSetEvent(iVar1 + 0xb0,0,0);
    *(undefined1 *)(iVar1 + 0x98) = 0;
  }
  return 0;
}



/* ================================================================
 * Function: FUN_00013a90
 * Address:  00013a90
 * ================================================================ */

undefined4 FUN_00013a90(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = PoRequestPowerIrp(*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x30),2,param_2,FUN_00013a20,
                            param_1,0,0);
  return uVar1;
}



/* ================================================================
 * Function: FUN_00013ae0
 * Address:  00013ae0
 * ================================================================ */

undefined4 FUN_00013ae0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_3 + 0x28);
  iVar2 = *(int *)(iVar1 + 0xa0);
  iVar3 = *(int *)(iVar1 + 0xa4);
  if (*(char *)(param_2 + 0x21) != '\0') {
    *(byte *)(*(int *)(param_2 + 0x60) + 3) = *(byte *)(*(int *)(param_2 + 0x60) + 3) | 1;
  }
  *(int *)(iVar1 + 0x2fc) = param_2;
  *(undefined1 *)(iVar1 + 0x98) = 0;
  if (iVar2 != iVar3) {
    *(undefined4 *)(iVar1 + 0x2fc) = 0;
    FUN_00013a90(param_3,iVar3);
  }
  *(undefined4 *)(param_2 + 0x18) = 0;
  return 0;
}



/* ================================================================
 * Function: FUN_00013b90
 * Address:  00013b90
 * ================================================================ */

undefined4 FUN_00013b90(int param_1,int param_2)

{
  int iVar1;
  undefined4 local_18;
  
  iVar1 = FUN_000115a0();
  if (iVar1 < 0) {
    local_18 = FUN_00013c10(param_1,param_2,'\0','\x01');
  }
  else {
    local_18 = FUN_00013c10(param_1,param_2,'\x01','\x01');
  }
  return local_18;
}



/* ================================================================
 * Function: FUN_00013c10
 * Address:  00013c10
 * ================================================================ */

undefined4 FUN_00013c10(int param_1,int param_2,char param_3,char param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  PoStartNextPowerIrp(param_2,0);
  if (param_3 == '\0') {
    *(undefined4 *)(param_2 + 0x18) = 0xc0000001;
    uVar2 = 0xc0000001;
    *(undefined4 *)(param_2 + 0x1c) = 0;
    IofCompleteRequest();
  }
  else {
    if (param_4 != '\0') {
      *(char *)(param_2 + 0x23) = *(char *)(param_2 + 0x23) + '\x01';
      *(int *)(param_2 + 0x60) = *(int *)(param_2 + 0x60) + 0x24;
    }
    uVar2 = PoCallDriver(*(undefined4 *)(iVar1 + 0x2c),param_2);
  }
  return uVar2;
}



/* ================================================================
 * Function: FUN_00013cb0
 * Address:  00013cb0
 * ================================================================ */

undefined4 FUN_00013cb0(int param_1,int param_2)

{
  int iVar1;
  undefined4 local_10;
  
  iVar1 = FUN_000115a0();
  if (iVar1 < 0) {
    local_10 = FUN_00013c10(param_1,param_2,'\0','\x01');
  }
  else {
    local_10 = FUN_00013c10(param_1,param_2,'\x01','\x01');
  }
  return local_10;
}



/* ================================================================
 * Function: FUN_00013d30
 * Address:  00013d30
 * ================================================================ */

undefined4 FUN_00013d30(int param_1,int param_2)

{
  undefined4 uVar1;
  
  FUN_00014740(param_1);
  *(char *)(param_2 + 0x23) = *(char *)(param_2 + 0x23) + '\x01';
  *(int *)(param_2 + 0x60) = *(int *)(param_2 + 0x60) + 0x24;
  uVar1 = IofCallDriver();
  FUN_000146b0(param_1);
  return uVar1;
}



/* ================================================================
 * Function: FUN_00013da0
 * Address:  00013da0
 * ================================================================ */

void FUN_00013da0(void)

{
  if (DAT_000151a4 != 0) {
    ExFreePool(DAT_000151a4);
    DAT_000151a4 = 0;
  }
  return;
}



/* ================================================================
 * Function: FUN_00013dd0
 * Address:  00013dd0
 * ================================================================ */

void FUN_00013dd0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_8;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((*(int *)(iVar1 + 0x8c) != 0) && (*(int *)(iVar1 + 0x7c) != 0)) {
    iVar2 = *(int *)(*(int *)(iVar1 + 0x7c) + *(int *)(iVar1 + 0x80) * 4);
    for (local_8 = 0; local_8 < *(byte *)(iVar2 + 4); local_8 = local_8 + 1) {
      if (*(int *)(*(int *)(iVar1 + 0x8c) + local_8 * 4) != 0) {
        ExFreePool(*(undefined4 *)(*(int *)(iVar1 + 0x8c) + local_8 * 4));
        *(undefined4 *)(*(int *)(iVar1 + 0x8c) + local_8 * 4) = 0;
      }
    }
    ExFreePool(*(undefined4 *)(iVar1 + 0x8c));
    *(undefined4 *)(iVar1 + 0x8c) = 0;
  }
  return;
}



/* ================================================================
 * Function: FUN_00013fca
 * Address:  00013fca
 * ================================================================ */

int FUN_00013fca(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined2 local_80;
  undefined2 local_7e;
  undefined4 *local_7c;
  int local_78;
  undefined4 local_74 [20];
  uint local_24;
  void *local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_78 = 0;
  puVar2 = &DAT_00013ea0;
  puVar3 = local_74;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)puVar2;
  local_8 = CONCAT22(local_8._2_2_,0x4e);
  iVar1 = FUN_000109c1(0x151a0,L"ClassGUID",local_74,(undefined2 *)&local_8);
  if (iVar1 < 0) {
    DbgPrint("ClassGUID not found in Registry!\n");
    DbgPrint("Using default ClassGUID.\n");
    local_78 = IoRegisterDeviceInterface(param_2,&DAT_00014bb8,0,&local_24);
  }
  else if ((local_8 & 0xffff) == 0) {
    DbgPrint("Invalid ClassGUID found in Registry!\n");
    DbgPrint("Using default ClassGUID.\n");
    local_78 = IoRegisterDeviceInterface(param_2,&DAT_00014bb8,0,&local_24);
  }
  else {
    local_7e = (undefined2)local_8;
    local_80 = (undefined2)local_8;
    local_7c = local_74;
    local_78 = RtlGUIDFromString(&local_80,&local_18);
    if (local_78 < 0) {
      DbgPrint("Invalid ClassGUID found in Registry!\n");
      DbgPrint("Using default ClassGUID.\n");
      local_78 = IoRegisterDeviceInterface(param_2,&DAT_00014bb8,0,&local_24);
    }
    else {
      local_78 = IoRegisterDeviceInterface(param_2,&local_18,0,&local_24);
    }
  }
  if (-1 < local_78) {
    local_78 = IoSetDeviceInterfaceState(&local_24,1);
  }
  if (-1 < local_78) {
    local_78 = IoCreateDevice(param_1,0x328,0,0x22,0x80,0,param_3);
  }
  if (-1 < local_78) {
    local_1c = *(int *)(*param_3 + 0x28);
    memcpy((void *)(local_1c + 0xfc),local_20,local_24 & 0xffff);
    *(undefined4 *)(local_1c + 0x74) = 0;
    *(undefined4 *)(local_1c + 0x78) = 0;
    *(undefined4 *)(local_1c + 0x8c) = 0;
    *(undefined4 *)(local_1c + 0xc) = local_18;
    *(undefined4 *)(local_1c + 0x10) = local_14;
    *(undefined4 *)(local_1c + 0x14) = local_10;
    *(undefined4 *)(local_1c + 0x18) = local_c;
    KeInitializeEvent(local_1c + 0x300,0,0);
    KeInitializeEvent(local_1c + 0x310,0,0);
    KeInitializeSpinLock(local_1c + 800);
  }
  RtlFreeUnicodeString(&local_24);
  return local_78;
}



/* ================================================================
 * Function: FUN_00014200
 * Address:  00014200
 * ================================================================ */

int FUN_00014200(int param_1,undefined1 param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  undefined2 *puVar5;
  int local_28;
  undefined2 local_20;
  int local_14;
  byte *local_10;
  
  iVar1 = *(int *)(param_1 + 0x28);
  uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0x7c) + *(int *)(iVar1 + 0x80) * 4);
  pbVar3 = (byte *)_USBD_ParseConfigurationDescriptorEx_28
                             (uVar2,uVar2,param_2,param_3,0xffffffff,0xffffffff,0xffffffff);
  if (pbVar3 == (byte *)0x0) {
    local_28 = -0x3fffffff;
  }
  else {
    iVar4 = (pbVar3[4] - 1) * 0x14 + 0x38;
    puVar5 = (undefined2 *)ExAllocatePoolWithTag(0,iVar4,0x4b6c7542);
    if (puVar5 == (undefined2 *)0x0) {
      local_28 = -0x3fffffe9;
    }
    else {
      puVar5[1] = 1;
      local_20 = (undefined2)iVar4;
      *puVar5 = local_20;
      *(undefined4 *)(puVar5 + 8) = *(undefined4 *)(iVar1 + 0x74);
      puVar5[10] = 0x24;
      if (1 < pbVar3[4]) {
        puVar5[10] = puVar5[10] + (pbVar3[4] - 1) * 0x14;
      }
      *(undefined1 *)(puVar5 + 0xb) = param_2;
      *(undefined1 *)((int)puVar5 + 0x17) = param_3;
      *(byte *)(puVar5 + 0xc) = pbVar3[5];
      *(byte *)((int)puVar5 + 0x19) = pbVar3[6];
      *(byte *)(puVar5 + 0xd) = pbVar3[7];
      *(uint *)(puVar5 + 0x10) = (uint)pbVar3[4];
      local_10 = pbVar3 + *pbVar3;
      for (local_14 = 0; local_14 < (int)(uint)pbVar3[4]; local_14 = local_14 + 1) {
        puVar5[local_14 * 10 + 0x12] = *(undefined2 *)(local_10 + 4);
        *(byte *)(puVar5 + local_14 * 10 + 0x13) = local_10[2];
        *(byte *)((int)puVar5 + local_14 * 0x14 + 0x27) = local_10[6];
        switch(local_10[3]) {
        case 0:
          *(undefined4 *)(puVar5 + local_14 * 10 + 0x14) = 0;
          break;
        case 1:
          *(undefined4 *)(puVar5 + local_14 * 10 + 0x14) = 1;
          break;
        case 2:
          *(undefined4 *)(puVar5 + local_14 * 10 + 0x14) = 2;
          break;
        case 3:
          *(undefined4 *)(puVar5 + local_14 * 10 + 0x14) = 3;
        }
        local_10 = local_10 + 7;
        *(undefined4 *)(puVar5 + local_14 * 10 + 0x18) = *(undefined4 *)(iVar1 + 0x1c);
        *(undefined4 *)(puVar5 + local_14 * 10 + 0x1a) = 0;
      }
      local_28 = FUN_000147d0(param_1,puVar5);
      if (-1 < local_28) {
        *(undefined4 *)(iVar1 + 0x84) = 0;
        local_28 = FUN_000144d8(param_1,CONCAT31((int3)((uint)local_28 >> 8),param_2),puVar5 + 10);
      }
      ExFreePool(puVar5);
    }
  }
  return local_28;
}



/* ================================================================
 * Function: FUN_000144d8
 * Address:  000144d8
 * ================================================================ */

undefined4 FUN_000144d8(int param_1,undefined4 param_2,ushort *param_3)

{
  ushort *_Src;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_10;
  uint local_c;
  
  local_10 = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(int *)(iVar1 + 0x28) != 0) {
    ExFreePool(*(undefined4 *)(iVar1 + 0x28));
  }
  *(undefined4 *)(iVar1 + 0x28) = 0;
  if (*(int *)(param_3 + 6) != 0) {
    uVar2 = ExAllocatePoolWithTag(0,*(int *)(param_3 + 6) * 0x38,0x4b6c7542);
    *(undefined4 *)(iVar1 + 0x28) = uVar2;
    if (*(int *)(iVar1 + 0x28) == 0) {
      return 0xc0000017;
    }
  }
  *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(param_3 + 6);
  for (local_c = 0; local_c < *(uint *)(param_3 + 6); local_c = local_c + 1) {
    iVar3 = *(int *)(iVar1 + 0x28) + local_c * 0x38;
    _Src = param_3 + local_c * 10 + 8;
    KeInitializeSpinLock(iVar3);
    memcpy((void *)(iVar3 + 4),_Src,0x14);
    *(undefined4 *)(iVar3 + 0x18) = *(undefined4 *)(_Src + 4);
    *(uint *)(iVar3 + 0x1c) = local_c;
    *(undefined4 *)(iVar3 + 0x20) = 0;
    *(undefined4 *)(iVar3 + 0x24) = 0;
    *(undefined4 *)(iVar3 + 0x28) = 0;
    if ((_Src[1] & 0x80) == 0) {
      *(undefined1 *)(iVar3 + 0x2c) = 0;
    }
    else {
      *(undefined1 *)(iVar3 + 0x2c) = 1;
    }
    strcpy((char *)(iVar3 + 0x2d),"USB_DRV");
  }
  if (**(int **)(iVar1 + 0x8c) != 0) {
    ExFreePool(**(undefined4 **)(iVar1 + 0x8c));
  }
  uVar2 = ExAllocatePoolWithTag(0,*param_3,0x4b6c7542);
  **(undefined4 **)(iVar1 + 0x8c) = uVar2;
  if (**(int **)(iVar1 + 0x8c) == 0) {
    local_10 = 0xc0000017;
  }
  else {
    memcpy((void *)**(undefined4 **)(iVar1 + 0x8c),param_3,(uint)*param_3);
  }
  return local_10;
}



/* ================================================================
 * Function: FUN_000146b0
 * Address:  000146b0
 * ================================================================ */

undefined4 FUN_000146b0(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  LONG LVar3;
  LONG *in_stack_fffffff0;
  undefined4 uVar4;
  
  iVar1 = *(int *)(param_1 + 0x28);
  uVar2 = KfAcquireSpinLock();
  LVar3 = InterlockedDecrement(in_stack_fffffff0);
  if (LVar3 == 1) {
    LVar3 = 0;
    KeSetEvent(iVar1 + 0x310,1,0,uVar2);
  }
  if (LVar3 == 0) {
    KeSetEvent(iVar1 + 0x300,1,0,uVar2);
  }
  uVar4 = 0x14728;
  KfReleaseSpinLock();
  return uVar4;
}



/* ================================================================
 * Function: FUN_00014740
 * Address:  00014740
 * ================================================================ */

void FUN_00014740(int param_1)

{
  undefined1 uVar1;
  undefined4 in_stack_fffffff4;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  uVar1 = KfAcquireSpinLock();
  InterlockedIncrement((LONG *)CONCAT31((int3)((uint)in_stack_fffffff4 >> 8),uVar1));
  KfReleaseSpinLock(uVar2);
  return;
}



/* ================================================================
 * Function: FUN_00014790
 * Address:  00014790
 * ================================================================ */

undefined4 FUN_00014790(undefined4 param_1,int param_2,undefined4 *param_3)

{
  param_3[1] = *(undefined4 *)(param_2 + 0x18);
  KeSetEvent(*param_3,0,0);
  return 0xc0000016;
}



/* ================================================================
 * Function: FUN_000147d0
 * Address:  000147d0
 * ================================================================ */

int FUN_000147d0(int param_1,undefined4 param_2)

{
  int iVar1;
  int local_30;
  undefined1 local_2c [16];
  undefined1 *local_1c;
  undefined1 local_18;
  int local_14;
  int local_10;
  undefined1 *local_c;
  int local_8;
  
  local_14 = *(int *)(param_1 + 0x28);
  KeInitializeEvent(local_2c,0,0);
  local_18 = *(undefined1 *)(*(int *)(local_14 + 0x2c) + 0x30);
  local_10 = IoAllocateIrp(local_18,0);
  if (local_10 == 0) {
    local_30 = -0x3fffff66;
  }
  else {
    iVar1 = *(int *)(local_10 + 0x60);
    local_1c = (undefined1 *)(iVar1 + -0x24);
    *local_1c = 0xf;
    *(undefined4 *)(iVar1 + -0x18) = 0x220003;
    *(undefined4 *)(iVar1 + -0x20) = param_2;
    local_c = local_2c;
    iVar1 = *(int *)(local_10 + 0x60);
    *(code **)(iVar1 + -8) = FUN_00014790;
    *(undefined1 ***)(iVar1 + -4) = &local_c;
    *(undefined1 *)(iVar1 + -0x21) = 0;
    *(undefined1 *)(iVar1 + -0x21) = 0x40;
    *(byte *)(iVar1 + -0x21) = *(byte *)(iVar1 + -0x21) | 0x80;
    *(byte *)(iVar1 + -0x21) = *(byte *)(iVar1 + -0x21) | 0x20;
    IofCallDriver();
    local_30 = KeWaitForSingleObject(local_2c,0,0,0,0);
    if (local_30 == 0) {
      local_30 = local_8;
    }
    IoFreeIrp(local_10);
  }
  return local_30;
}



/* ================================================================
 * Function: FUN_00014900
 * Address:  00014900
 * ================================================================ */

undefined4 FUN_00014900(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_3c;
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined1 *local_20;
  undefined4 local_1c;
  undefined1 local_18;
  int local_14;
  int local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_1c = 5000;
  local_14 = *(int *)(param_1 + 0x28);
  KeInitializeEvent(local_38,0,0);
  local_18 = *(undefined1 *)(*(int *)(local_14 + 0x2c) + 0x30);
  local_10 = IoAllocateIrp(local_18,0);
  if (local_10 == 0) {
    local_3c = 0xc000009a;
  }
  else {
    iVar1 = *(int *)(local_10 + 0x60);
    local_20 = (undefined1 *)(iVar1 + -0x24);
    *local_20 = 0xf;
    *(undefined4 *)(iVar1 + -0x18) = 0x220003;
    *(undefined4 *)(iVar1 + -0x20) = param_2;
    local_c = local_38;
    iVar1 = *(int *)(local_10 + 0x60);
    *(code **)(iVar1 + -8) = FUN_00014790;
    *(undefined1 ***)(iVar1 + -4) = &local_c;
    *(undefined1 *)(iVar1 + -0x21) = 0;
    *(undefined1 *)(iVar1 + -0x21) = 0x40;
    *(byte *)(iVar1 + -0x21) = *(byte *)(iVar1 + -0x21) | 0x80;
    *(byte *)(iVar1 + -0x21) = *(byte *)(iVar1 + -0x21) | 0x20;
    IofCallDriver();
    local_28 = FUN_00014a70();
    iVar1 = KeWaitForSingleObject(local_38,5,0,0,&local_28);
    if (iVar1 == 0x102) {
      local_3c = 0xc00000b5;
      IoCancelIrp(local_10);
      KeWaitForSingleObject(local_38,0,0,0,0);
    }
    else {
      local_3c = local_8;
    }
    IoFreeIrp(local_10);
  }
  return local_3c;
}



/* ================================================================
 * Function: FUN_00014a70
 * Address:  00014a70
 * ================================================================ */

void FUN_00014a70(void)

{
  return;
}



/* ================================================================
 * Function: memcpy
 * Address:  00014a82
 * ================================================================ */

void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}



/* ================================================================
 * Function: memset
 * Address:  00014a88
 * ================================================================ */

void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



/* ================================================================
 * Function: DbgPrint
 * Address:  00014a8e
 * ================================================================ */

void DbgPrint(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014a8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DbgPrint();
  return;
}



/* ================================================================
 * Function: strcpy
 * Address:  00014a94
 * ================================================================ */

char * __cdecl strcpy(char *_Dest,char *_Source)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = strcpy(_Dest,_Source);
  return pcVar1;
}



/* ================================================================
 * Function: FUN_000151c0
 * Address:  000151c0
 * ================================================================ */

int FUN_000151c0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_c;
  int local_8;
  
  local_c = 0;
  iVar1 = FUN_00013fca(param_1,param_2,&local_c);
  if (-1 < iVar1) {
    local_8 = *(int *)(local_c + 0x28);
    *(uint *)(local_c + 0x1c) = *(uint *)(local_c + 0x1c) | 0x2000;
    *(uint *)(local_c + 0x1c) = *(uint *)(local_c + 0x1c) | 0x10;
    *(uint *)(local_c + 0x1c) = *(uint *)(local_c + 0x1c) & 0xffffff7f;
    *(undefined4 *)(local_8 + 0x30) = param_2;
    uVar2 = IoAttachDeviceToDeviceStack(local_c,param_2);
    *(undefined4 *)(local_8 + 0x2c) = uVar2;
    *(undefined4 *)(local_8 + 0xa0) = 1;
    *(undefined4 *)(local_8 + 0x9c) = 1;
    *(undefined4 *)(local_8 + 0x90) = 0;
    *(undefined4 *)(local_8 + 0x94) = 0;
    *(undefined4 *)(local_8 + 0x8c) = 0;
    KeInitializeEvent(local_8 + 0xb0,1,0);
    FUN_00014740(local_c);
  }
  return iVar1;
}



