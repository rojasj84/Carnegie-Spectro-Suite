/* ================================================================
 * Function: FUN_10001000
 * Address:  10001000
 * ================================================================ */

undefined1 FUN_10001000(int param_1,undefined4 param_2)

{
  HMODULE hModule;
  FARPROC pFVar1;
  undefined4 uVar2;
  undefined1 local_c;
  
  local_c = 0;
  hModule = LoadLibraryA(s_PISCC32_DLL_10023040);
  *(undefined4 *)(param_1 + 0x11c) = 0;
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,s_PISCC_CreateCommunicationObject_1002304c);
    *(FARPROC *)(param_1 + 0x120) = pFVar1;
    if (*(int *)(param_1 + 0x120) != 0) {
      pFVar1 = GetProcAddress(hModule,s_PISCC_Communicate_1002306c);
      *(FARPROC *)(param_1 + 0x124) = pFVar1;
      if (*(int *)(param_1 + 0x124) != 0) {
        pFVar1 = GetProcAddress(hModule,s_PISCC_DestroyCommunicationObject_10023080);
        *(FARPROC *)(param_1 + 0x128) = pFVar1;
        if (*(int *)(param_1 + 0x128) != 0) {
          uVar2 = (**(code **)(param_1 + 0x120))(param_2);
          *(undefined4 *)(param_1 + 0x11c) = uVar2;
          if (*(int *)(param_1 + 0x11c) != 0) {
            local_c = 1;
          }
        }
      }
    }
  }
  return local_c;
}



/* ================================================================
 * Function: FUN_100010ca
 * Address:  100010ca
 * ================================================================ */

undefined1 FUN_100010ca(int param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = LoadLibraryA(s_PIER_DLL_100230a4);
  if (hModule == (HMODULE)0x0) {
    *(undefined4 *)(param_1 + 0x3a8) = 0;
  }
  else {
    pFVar1 = GetProcAddress(hModule,s_PIER_RecordError_100230b0);
    *(FARPROC *)(param_1 + 0x3a8) = pFVar1;
  }
  return 1;
}



/* ================================================================
 * Function: FUN_10001118
 * Address:  10001118
 * ================================================================ */

uint FUN_10001118(LPCSTR param_1,LPSTR param_2,UINT param_3,int param_4)

{
  HMODULE hInstance;
  uint uVar1;
  
  hInstance = GetModuleHandleA(param_1);
  uVar1 = LoadStringA(hInstance,param_3,param_2,param_4);
  return uVar1;
}



/* ================================================================
 * Function: FUN_10001145
 * Address:  10001145
 * ================================================================ */

void FUN_10001145(DWORD param_1)

{
  Sleep(param_1);
  return;
}



/* ================================================================
 * Function: FUN_10001156
 * Address:  10001156
 * ================================================================ */

int FUN_10001156(int *param_1)

{
  FUN_1001568e(param_1);
  return *param_1;
}



/* ================================================================
 * Function: FUN_10001170
 * Address:  10001170
 * ================================================================ */

undefined4 * __fastcall FUN_10001170(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *local_2c;
  undefined4 *local_28;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002078f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10011fb0(param_1);
  local_8 = 0;
  *param_1 = &PTR_FUN_10021160;
  FUN_100014c4((int)param_1);
  puVar1 = operator_new(0x11c);
  local_8._0_1_ = 1;
  if (puVar1 == (undefined4 *)0x0) {
    local_28 = (undefined4 *)0x0;
  }
  else {
    local_28 = FUN_10010b40(puVar1);
  }
  local_8._0_1_ = 0;
  param_1[0x10] = local_28;
  if (param_1[0x10] != 0) {
    FUN_100030a0((void *)param_1[0x10],param_1);
  }
  puVar1 = operator_new(0x270);
  local_8._0_1_ = 2;
  if (puVar1 == (undefined4 *)0x0) {
    local_2c = (undefined4 *)0x0;
  }
  else {
    local_2c = FUN_1000fa04(puVar1);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  param_1[0x12] = local_2c;
  if (param_1[0x12] != 0) {
    FUN_100030c0((void *)param_1[0x12],param_1);
    *(undefined2 *)(param_1 + 0x13) = 0;
  }
  ExceptionList = local_10;
  return param_1;
}



/* ================================================================
 * Function: FUN_10001281
 * Address:  10001281
 * ================================================================ */

undefined4 * __thiscall FUN_10001281(void *this,undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *local_2c;
  undefined4 *local_28;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_100207b8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10011fb0(this);
  local_8 = 0;
  *(undefined ***)this = &PTR_FUN_10021160;
  FUN_100014c4((int)this);
  puVar2 = operator_new(0x11c);
  local_8._0_1_ = 1;
  if (puVar2 == (undefined4 *)0x0) {
    local_28 = (undefined4 *)0x0;
  }
  else {
    local_28 = FUN_10010b40(puVar2);
  }
  local_8._0_1_ = 0;
  *(undefined4 **)((int)this + 0x40) = local_28;
  if (*(int *)((int)this + 0x40) != 0) {
    FUN_100030a0(*(void **)((int)this + 0x40),this);
    (**(code **)(**(int **)((int)this + 0x40) + 0x24))(0x7d1,param_1,0);
    (**(code **)(**(int **)((int)this + 0x40) + 0x24))(0x7d4,param_2,0);
    cVar1 = (**(code **)(**(int **)((int)this + 0x40) + 4))();
    if (cVar1 != '\0') {
      (**(code **)(**(int **)((int)this + 0x40) + 0x38))(0x7d3,s_gpib0_100230c4,0);
      FUN_1000160a(this);
    }
  }
  puVar2 = operator_new(0x270);
  local_8._0_1_ = 2;
  if (puVar2 == (undefined4 *)0x0) {
    local_2c = (undefined4 *)0x0;
  }
  else {
    local_2c = FUN_1000fa04(puVar2);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  *(undefined4 **)((int)this + 0x48) = local_2c;
  if (*(int *)((int)this + 0x48) != 0) {
    FUN_100030c0(*(void **)((int)this + 0x48),this);
    *(undefined2 *)((int)this + 0x4c) = 0;
  }
  ExceptionList = local_10;
  return this;
}



/* ================================================================
 * Function: FUN_1000140d
 * Address:  1000140d
 * ================================================================ */

void __fastcall FUN_1000140d(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_100207cb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_10021160;
  local_8 = 0;
  if ((param_1[0x10] != 0) && ((undefined4 *)param_1[0x10] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[0x10])(1);
  }
  if ((param_1[0x12] != 0) && ((undefined4 *)param_1[0x12] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[0x12])(1);
  }
  local_8 = 0xffffffff;
  FUN_100123d4(param_1);
  ExceptionList = local_10;
  return;
}



/* ================================================================
 * Function: FUN_100014c4
 * Address:  100014c4
 * ================================================================ */

void __fastcall FUN_100014c4(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 3;
  *(undefined1 *)(param_1 + 0x45) = 1;
  *(undefined2 *)(param_1 + 0x3b0) = 0;
  *(undefined4 *)(param_1 + 0x270) = 0;
  *(undefined4 *)(param_1 + 0x274) = 0;
  *(undefined2 *)(param_1 + 0x278) = 7;
  *(undefined4 *)(param_1 + 0x280) = 0;
  *(undefined4 *)(param_1 + 0x284) = 0;
  *(undefined2 *)(param_1 + 0x288) = 7;
  *(undefined2 *)(param_1 + 0x24e) = 2;
  *(undefined4 *)(param_1 + 0x250) = 0;
  *(undefined4 *)(param_1 + 0x254) = 0x408f4000;
  *(undefined2 *)(param_1 + 600) = 1;
  *(undefined2 *)(param_1 + 0x25a) = 1;
  *(undefined4 *)(param_1 + 0x260) = 0;
  *(undefined4 *)(param_1 + 0x264) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x290) = 0;
  *(undefined4 *)(param_1 + 0x294) = 0x40590000;
  *(undefined2 *)(param_1 + 0x298) = 7;
  *(undefined2 *)(param_1 + 0x2ca) = 2;
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  *(undefined4 *)(param_1 + 0x2b4) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x2b8) = 0;
  *(undefined2 *)(param_1 + 700) = 0;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  *(undefined1 *)(param_1 + 0x14e) = 0;
  *(undefined2 *)(param_1 + 0x370) = 3;
  *(undefined1 *)(param_1 + 0x3b2) = 0;
  return;
}



/* ================================================================
 * Function: FUN_1000160a
 * Address:  1000160a
 * ================================================================ */

undefined4 __fastcall FUN_1000160a(void *param_1)

{
  undefined2 uVar1;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar2;
  size_t local_14;
  char local_10;
  undefined1 local_c;
  char *local_8;
  
  local_10 = 1;
  uVar1 = *(undefined2 *)((int)param_1 + 0x3a0);
  local_c = *(undefined1 *)((int)param_1 + 0x3b2);
  *(undefined2 *)((int)param_1 + 0x3a0) = 0;
  *(undefined1 *)((int)param_1 + 0x3b2) = 0;
  local_8 = s_OM_2_3_OM_3_3_OM_7_3_OM_6_0_100230cc;
  local_14 = _strlen(s_OM_2_3_OM_3_3_OM_7_3_OM_6_0_100230cc);
  local_10 = FUN_100017af(param_1,local_8,&local_14);
  if (local_10 != '\0') {
    local_8 = s_OA_2_4_0_OA_3_4_0_OA_7_4_0_100230e8;
    local_14 = _strlen(s_OA_2_4_0_OA_3_4_0_OA_7_4_0_100230e8);
    local_10 = FUN_100017af(param_1,local_8,&local_14);
  }
  if (local_10 != '\0') {
    local_8 = s_OO_2_0_OO_3_0_OO_7_0_10023104;
    local_14 = _strlen(s_OO_2_0_OO_3_0_OO_7_0_10023104);
    local_10 = FUN_100017af(param_1,local_8,&local_14);
  }
  uVar2 = 0;
  if (local_10 != '\0') {
    local_8 = s_TZ_2_1_TZ_3_1_TZ_7_1_1002311c;
    local_14 = _strlen(s_TZ_2_1_TZ_3_1_TZ_7_1_1002311c);
    local_10 = FUN_100017af(param_1,local_8,&local_14);
    uVar2 = extraout_var;
  }
  if (local_10 != '\0') {
    local_8 = &DAT_10023134;
    local_14 = _strlen(&DAT_10023134);
    local_10 = FUN_100017af(param_1,local_8,&local_14);
    uVar2 = extraout_var_00;
  }
  *(undefined2 *)((int)param_1 + 0x3a0) = uVar1;
  *(undefined1 *)((int)param_1 + 0x3b2) = local_c;
  return CONCAT31((int3)(CONCAT22(uVar2,uVar1) >> 8),local_10);
}



/* ================================================================
 * Function: FUN_1000175d
 * Address:  1000175d
 * ================================================================ */

undefined1 __fastcall FUN_1000175d(int param_1)

{
  undefined1 local_8;
  
  local_8 = 1;
  if (*(short *)(param_1 + 0x24e) == 2) {
    local_8 = (**(code **)(**(int **)(param_1 + 0x40) + 0x10))(&DAT_1002313c,2);
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_1000179b
 * Address:  1000179b
 * ================================================================ */

undefined1 FUN_1000179b(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_100017af
 * Address:  100017af
 * ================================================================ */

char __thiscall FUN_100017af(void *this,undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  size_t local_114;
  uint local_110 [64];
  char local_10;
  short local_c;
  short local_8;
  
  local_10 = '\0';
  local_c = *(short *)((int)this + 0x3b0) + 1;
  local_8 = 0;
  while ((local_8 < local_c && (local_10 == '\0'))) {
    local_10 = (**(code **)(**(int **)((int)this + 0x40) + 0x10))(param_1,*param_2);
    if ((local_10 != '\0') && (*(short *)((int)this + 0x3a0) == 0x217)) {
      local_10 = (**(code **)(**(int **)((int)this + 0x40) + 0x10))(&DAT_10023140,2);
      if (local_10 != '\0') {
        uVar1 = FUN_100018e6(this,local_110,&local_114);
        local_10 = (char)uVar1;
        if (local_10 != '\0') {
          uVar2 = FUN_10015c2b(local_110,(byte *)local_110);
          FUN_100155fe(this,2,uVar2 | 0x5c0,s_Error_from_DG535_10023144);
        }
      }
    }
    local_8 = local_8 + 1;
  }
  *param_2 = 0;
  return local_10;
}



/* ================================================================
 * Function: FUN_100018e6
 * Address:  100018e6
 * ================================================================ */

undefined4 __thiscall FUN_100018e6(void *this,uint *param_1,size_t *param_2)

{
  size_t sVar1;
  short local_118;
  undefined4 local_114;
  uint local_110 [64];
  char local_10;
  short local_c;
  short local_8;
  
  local_10 = '\0';
  local_c = *(short *)((int)this + 0x3b0) + 1;
  local_8 = 0;
  while ((local_8 < local_c && (local_10 == '\0'))) {
    local_114 = 0;
    local_10 = (**(code **)(**(int **)((int)this + 0x40) + 0x14))(local_110,&local_114);
    if (local_10 != '\0') {
      for (local_118 = 0;
          ((local_118 < 0xff && (*(char *)((int)local_110 + (int)local_118) != '\n')) &&
          (*(char *)((int)local_110 + (int)local_118) != '\r')); local_118 = local_118 + 1) {
      }
      *(undefined1 *)((int)local_110 + (int)local_118) = 0;
      sVar1 = _strlen((char *)local_110);
      *param_2 = sVar1;
      FUN_10015cc0(param_1,local_110);
    }
    local_8 = local_8 + 1;
  }
  return CONCAT31((int3)(char)((ushort)local_8 >> 8),local_10);
}



/* ================================================================
 * Function: FUN_10001a16
 * Address:  10001a16
 * ================================================================ */

char __fastcall FUN_10001a16(void *param_1)

{
  int local_10c;
  undefined1 local_108 [256];
  char local_8;
  
  local_8 = '\x01';
  if (*(char *)((int)param_1 + 0x3b2) != '\0') {
    local_10c = FUN_10015db0(local_108,(byte *)s_DL__d__d__d_10023158);
    local_8 = FUN_100017af(param_1,local_108,&local_10c);
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_10001a88
 * Address:  10001a88
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char __thiscall FUN_10001a88(void *this,int param_1)

{
  char cVar1;
  float10 fVar2;
  int local_11c;
  int local_118;
  double local_114;
  int local_10c;
  char local_108;
  undefined1 local_104 [256];
  
  local_108 = '\x01';
  local_10c = 0;
  if ((param_1 == 0x17) || (param_1 == 0x19)) {
    fVar2 = (float10)(**(code **)(**(int **)((int)this + 0x48) + 0x20))(3,2);
    local_114 = (double)fVar2;
    local_10c = FUN_10015db0(local_104 + local_10c,(byte *)s_DT__d__d__15_12f_10023164);
    local_108 = FUN_100017af(this,local_104,&local_10c);
    local_108 = FUN_10001a16(this);
    fVar2 = (float10)(**(code **)(**(int **)((int)this + 0x48) + 0x20))(3,3);
    local_114 = (double)fVar2;
    local_10c = FUN_10015db0(local_104 + local_10c,(byte *)s_DT__d__d__15_12f_10023178);
    local_108 = FUN_100017af(this,local_104,&local_10c);
    local_108 = FUN_10001a16(this);
  }
  else if (param_1 != 0x3d) {
    return '\x01';
  }
  (**(code **)(**(int **)((int)this + 0x48) + 8))(0x2395,&local_118,0);
  (**(code **)(**(int **)((int)this + 0x48) + 8))(0x2394,&local_11c,0);
  if (local_118 == 0) {
    local_114 = 0.0;
  }
  else {
    fVar2 = (float10)(**(code **)(**(int **)((int)this + 0x48) + 0x20))(3,4);
    local_114 = (double)fVar2;
    if (local_114 < _DAT_100211b0) {
      FUN_100155fe(this,2,0x238d,&DAT_10026700);
      local_114 = 0.0;
    }
  }
  local_10c = FUN_10015db0(local_104 + local_10c,(byte *)s_DT__d__d__15_12f_1002318c);
  local_108 = FUN_100017af(this,local_104,&local_10c);
  local_108 = FUN_10001a16(this);
  if (local_11c == 1) {
    fVar2 = FUN_100123e8((double)CONCAT26((short)((uint)*(undefined4 *)((int)this + 0x274) >> 0x10),
                                          *(undefined6 *)((int)this + 0x270)),
                         *(short *)((int)this + 0x278),3);
    local_114 = (double)fVar2;
    local_10c = FUN_10015db0(local_104 + local_10c,(byte *)s_DT__d__d__15_12f_100231a0);
  }
  else {
    fVar2 = FUN_100123e8((double)CONCAT26((short)((uint)*(undefined4 *)((int)this + 0x294) >> 0x10),
                                          *(undefined6 *)((int)this + 0x290)),
                         *(short *)((int)this + 0x298),3);
    local_114 = (double)fVar2;
    local_10c = FUN_10015db0(local_104 + local_10c,(byte *)s_DT__d__d__15_12f_100231b4);
  }
  local_108 = FUN_100017af(this,local_104,&local_10c);
  cVar1 = FUN_10001a16(this);
  return cVar1;
}



/* ================================================================
 * Function: FUN_10001e37
 * Address:  10001e37
 * ================================================================ */

undefined4 __thiscall FUN_10001e37(void *this,int param_1)

{
  int iVar1;
  undefined3 extraout_var;
  int local_110;
  char local_10c;
  undefined1 local_108 [256];
  undefined2 local_8;
  
  local_10c = '\x01';
  local_110 = 0;
  if ((param_1 == 0xb) || (param_1 == 0x11)) {
    if (*(short *)((int)this + 0x24e) == 0) {
      local_8 = 0;
    }
    else if (*(short *)((int)this + 0x24e) == 1) {
      local_8 = 1;
    }
    else {
      local_8 = 2;
    }
    local_110 = FUN_10015db0(local_108,(byte *)s_TM__d_100231c8);
    local_10c = FUN_100017af(this,local_108,&local_110);
    local_10c = FUN_10001a16(this);
  }
  if ((local_10c != '\0') && ((param_1 == 0xc || (param_1 == 0x11)))) {
    local_110 = FUN_10015db0(local_108 + local_110,(byte *)s_TR_0__8_4f_100231d0);
    local_10c = FUN_100017af(this,local_108,&local_110);
    local_10c = FUN_10001a16(this);
  }
  if ((local_10c != '\0') && ((param_1 == 0xd || (param_1 == 0x11)))) {
    local_110 = FUN_10015db0(local_108 + local_110,(byte *)s_TL__15_12f_100231dc);
    local_10c = FUN_100017af(this,local_108,&local_110);
    local_10c = FUN_10001a16(this);
  }
  if ((local_10c != '\0') && ((param_1 == 0xe || (param_1 == 0x11)))) {
    if (*(short *)((int)this + 600) == 1) {
      local_110 = FUN_10015db0(local_108 + local_110,(byte *)s_TS__d_100231e8);
    }
    else {
      local_110 = FUN_10015db0(local_108 + local_110,(byte *)s_TS__d_100231f0);
    }
    local_10c = FUN_100017af(this,local_108,&local_110);
    local_10c = FUN_10001a16(this);
  }
  iVar1 = (int)local_10c;
  if ((iVar1 != 0) && ((param_1 == 0xf || (param_1 == 0x11)))) {
    if (*(short *)((int)this + 0x25a) == 0) {
      local_110 = FUN_10015db0(local_108 + local_110,(byte *)s_TZ_0__d_100231f8);
    }
    else {
      local_110 = FUN_10015db0(local_108 + local_110,(byte *)s_TZ_0__d_10023200);
    }
    local_10c = FUN_100017af(this,local_108,&local_110);
    local_10c = FUN_10001a16(this);
    iVar1 = CONCAT31(extraout_var,local_10c);
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),local_10c);
}



/* ================================================================
 * Function: FUN_1000217c
 * Address:  1000217c
 * ================================================================ */

char __thiscall FUN_1000217c(void *this,int param_1)

{
  int local_10c;
  char local_108;
  undefined1 local_104 [256];
  
  local_108 = '\x01';
  local_10c = 0;
  if (*(short *)((int)this + 700) == 1) {
    if ((param_1 == 0x22) || (param_1 == 0x1f)) {
      if (param_1 == 0x22) {
        local_10c = FUN_10015db0(local_104,(byte *)s_TM_3__TR_1__8_4f_10023208);
      }
      else {
        local_10c = FUN_10015db0(local_104,(byte *)s_TR_1__8_4f_1002321c);
      }
      local_108 = FUN_100017af(this,local_104,&local_10c);
      local_108 = FUN_10001a16(this);
    }
    if ((param_1 == 0x22) || (param_1 == 0x20)) {
      local_10c = FUN_10015db0(local_104 + local_10c,(byte *)s_BC__d__BP__d_10023228);
      local_108 = FUN_100017af(this,local_104,&local_10c);
      local_108 = FUN_10001a16(this);
    }
  }
  return local_108;
}



/* ================================================================
 * Function: FUN_100022f6
 * Address:  100022f6
 * ================================================================ */

char __thiscall FUN_100022f6(void *this,int param_1)

{
  char cVar1;
  undefined4 uVar2;
  size_t local_c [2];
  
  local_c[0] = 0;
  if (param_1 < 0x21) {
    if (0x1e < param_1) {
LAB_10002396:
      cVar1 = (**(code **)(*(int *)this + 0x20))(param_1);
      return cVar1;
    }
    switch(param_1) {
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x11:
      cVar1 = (**(code **)(*(int *)this + 0x1c))(param_1);
      return cVar1;
    case 0x17:
    case 0x19:
switchD_10002336_caseD_17:
      cVar1 = (**(code **)(*(int *)this + 0x18))(param_1);
      return cVar1;
    }
  }
  else if (param_1 < 0xfa2) {
    if (param_1 == 0xfa1) {
      local_c[0] = _strlen((char *)((int)this + 0x4e));
      cVar1 = FUN_100017af(this,(int)this + 0x4e,local_c);
      return cVar1;
    }
    if (param_1 == 0x22) goto LAB_10002396;
    if (param_1 == 0x3d) goto switchD_10002336_caseD_17;
  }
  else if (param_1 == 0xfa2) {
    uVar2 = FUN_100018e6(this,(uint *)((int)this + 0x14e),local_c);
    return (char)uVar2;
  }
  cVar1 = FUN_10013381(this,param_1);
  return cVar1;
}



/* ================================================================
 * Function: FUN_10002422
 * Address:  10002422
 * ================================================================ */

char __thiscall
FUN_10002422(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int local_10c;
  undefined1 local_108 [260];
  
  FUN_100123e8((double)CONCAT44(param_2,param_1),*(short *)((int)this + 0x370),3);
  FUN_100123e8((double)CONCAT44(param_4,param_3),*(short *)((int)this + 0x370),3);
  local_10c = FUN_10015db0(local_108,(byte *)s_DT__d__d__15_12f_DT__d__d__15_12_10023238);
  cVar1 = FUN_100017af(this,local_108,&local_10c);
  if (cVar1 != '\0') {
    *(undefined4 *)((int)this + 0x270) = param_1;
    *(undefined4 *)((int)this + 0x274) = param_2;
    *(undefined2 *)((int)this + 0x278) = *(undefined2 *)((int)this + 0x370);
    *(undefined4 *)((int)this + 0x280) = param_3;
    *(undefined4 *)((int)this + 0x284) = param_4;
    *(undefined2 *)((int)this + 0x288) = *(undefined2 *)((int)this + 0x370);
  }
  return cVar1;
}



/* ================================================================
 * Function: FUN_10002536
 * Address:  10002536
 * ================================================================ */

undefined1 __thiscall FUN_10002536(void *this,short param_1,undefined4 param_2,undefined2 param_3)

{
  undefined1 local_8;
  
  local_8 = 1;
  if (param_1 == 0xe) {
    *(undefined2 *)((int)this + 600) = (undefined2)param_2;
  }
  else if (param_1 == 0x515) {
    *(undefined2 *)((int)this + 0x3b0) = (undefined2)param_2;
  }
  else if (param_1 == 0x516) {
    *(undefined1 *)((int)this + 0x3b2) = (undefined1)param_2;
  }
  else {
    local_8 = FUN_10013499(this,param_1,param_2,param_3);
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_100025b4
 * Address:  100025b4
 * ================================================================ */

undefined1 __thiscall FUN_100025b4(void *this,short param_1,int *param_2,undefined2 param_3)

{
  undefined1 local_8;
  
  local_8 = 1;
  if (param_1 == 0xe) {
    *param_2 = (int)*(short *)((int)this + 600);
  }
  else if (param_1 == 0x515) {
    *param_2 = (int)*(short *)((int)this + 0x3b0);
  }
  else if (param_1 == 0x516) {
    *param_2 = (int)*(char *)((int)this + 0x3b2);
  }
  else {
    local_8 = FUN_10013a70(this,param_1,param_2,param_3);
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_10002637
 * Address:  10002637
 * ================================================================ */

undefined1 __thiscall
FUN_10002637(void *this,short param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4)

{
  undefined1 uVar1;
  
  uVar1 = FUN_10013f8f(this,param_1,(double)CONCAT44(param_3,param_2),param_4);
  return uVar1;
}



/* ================================================================
 * Function: FUN_10002666
 * Address:  10002666
 * ================================================================ */

undefined1 __thiscall FUN_10002666(void *this,short param_1,undefined4 *param_2,undefined2 param_3)

{
  undefined1 uVar1;
  
  uVar1 = FUN_100143fc(this,param_1,param_2,param_3);
  return uVar1;
}



/* ================================================================
 * Function: FUN_10002691
 * Address:  10002691
 * ================================================================ */

undefined1 __thiscall FUN_10002691(void *this,short param_1,undefined4 *param_2,undefined2 param_3)

{
  undefined1 uVar1;
  
  uVar1 = FUN_10014827(this,param_1,param_2,param_3);
  return uVar1;
}



/* ================================================================
 * Function: FUN_100026bc
 * Address:  100026bc
 * ================================================================ */

undefined1 __thiscall FUN_100026bc(void *this,short param_1,char *param_2,short param_3)

{
  undefined1 uVar1;
  
  uVar1 = FUN_100148f3(this,param_1,param_2,param_3);
  return uVar1;
}



/* ================================================================
 * Function: FUN_100026e7
 * Address:  100026e7
 * ================================================================ */

undefined1 __thiscall FUN_100026e7(void *this,int param_1,int *param_2)

{
  undefined1 uVar1;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  short local_14 [2];
  uint local_10;
  short local_c;
  undefined1 local_8;
  
  local_8 = 1;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 2;
  if (0x6b < param_1) {
    if (0x7d1 < param_1) {
      if (param_1 == 0x2395) {
        (**(code **)(**(int **)((int)this + 0x48) + 8))(0x2395,local_14,0);
        *param_2 = 1;
        param_2[1] = 1;
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[4] = 0;
        param_2[5] = 0x3ff00000;
        param_2[6] = 0;
        param_2[7] = 0;
        param_2[10] = 0;
        param_2[0xb] = 0x3ff00000;
        *(double *)(param_2 + 8) = (double)(int)local_14[0];
        return local_8;
      }
switchD_1000279a_caseD_d:
      uVar1 = FUN_100149d3(this,param_1,param_2);
      return uVar1;
    }
    if (param_1 == 0x7d1) {
      local_c = 1;
      if (*(char *)((int)this + 0x45) != '\0') {
        local_c = 2;
      }
      if (*(char *)((int)this + 0x44) != '\0') {
        local_c = local_c + 1;
      }
      *param_2 = (int)local_c;
      param_2[1] = 9;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0x40140000;
      param_2[10] = 0;
      param_2[0xb] = 0;
      (**(code **)(**(int **)((int)this + 0x40) + 0x28))(0x7d1,&local_10,0);
      *(double *)(param_2 + 8) = (double)local_10;
      return local_8;
    }
    switch(param_1) {
    case 0x6c:
      goto switchD_1000279a_caseD_17;
    case 0x6d:
    case 0x6f:
    case 0x71:
    case 0x73:
      goto switchD_1000279a_caseD_16;
    case 0x6e:
      *param_2 = 1;
      param_2[1] = 4;
      param_2[2] = 0;
      param_2[3] = 0x40554000;
      param_2[4] = 0x48c00000;
      param_2[5] = 0x426d1321;
      param_2[6] = 0;
      param_2[7] = 0x40f86a00;
      param_2[10] = 0;
      param_2[0xb] = 0x3ff00000;
      param_2[8] = *(int *)((int)this + 0x2e0);
      param_2[9] = *(int *)((int)this + 0x2e4);
      return 1;
    default:
      goto switchD_1000279a_caseD_d;
    }
  }
  if (param_1 == 0x6b) {
switchD_1000279a_caseD_16:
    *param_2 = 3;
    param_2[1] = 9;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0x401c0000;
    param_2[10] = 0;
    param_2[0xb] = 0;
    if (param_1 - 0x16U < 0x5e) {
                    /* WARNING: Could not recover jumptable at 0x1000291f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(&switchD_1000291f::switchdataD_10002e33)
                        [*(byte *)((int)&PTR_caseD_6b_10002e3f + param_1 + 2)])();
      return uVar1;
    }
  }
  else {
    switch(param_1) {
    case 0xc:
      *param_2 = 1;
      param_2[1] = 4;
      param_2[2] = 0;
      param_2[3] = 0x40000000;
      param_2[4] = 0;
      param_2[5] = 0x40c38780;
      param_2[6] = 0;
      param_2[7] = 0x408f4000;
      param_2[10] = 0;
      param_2[0xb] = 0x3ff00000;
      param_2[8] = *(int *)((int)this + 0x250);
      param_2[9] = *(int *)((int)this + 0x254);
      break;
    default:
      goto switchD_1000279a_caseD_d;
    case 0xe:
      *param_2 = 1;
      param_2[1] = 1;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0x3ff00000;
      param_2[6] = 0;
      param_2[7] = 0;
      param_2[10] = 0;
      param_2[0xb] = 0x3ff00000;
      *(double *)(param_2 + 8) = (double)(int)*(short *)((int)this + 600);
      break;
    case 0x15:
    case 0x68:
      *param_2 = 1;
      param_2[1] = 4;
      param_2[2] = -0x66666666;
      param_2[3] = 0x3fb99999;
      param_2[4] = 0x48c00000;
      param_2[5] = 0x426d1321;
      param_2[6] = 0;
      param_2[7] = 0x407f4000;
      param_2[10] = 0;
      param_2[0xb] = 0x3ff00000;
      if (param_1 == 0x15) {
        local_54 = *(int *)((int)this + 0x270);
        local_50 = *(int *)((int)this + 0x274);
      }
      else {
        local_54 = *(int *)((int)this + 0x2f0);
        local_50 = *(int *)((int)this + 0x2f4);
      }
      param_2[8] = local_54;
      param_2[9] = local_50;
      break;
    case 0x16:
    case 0x18:
    case 0x69:
      goto switchD_1000279a_caseD_16;
    case 0x17:
switchD_1000279a_caseD_17:
      *param_2 = 1;
      param_2[1] = 4;
      param_2[2] = 0;
      param_2[3] = 0x40554000;
      param_2[4] = 0x48c00000;
      param_2[5] = 0x426d1321;
      param_2[6] = 0;
      param_2[7] = 0x408f4000;
      param_2[10] = 0;
      param_2[0xb] = 0x3ff00000;
      if (param_1 == 0x17) {
        local_5c = *(int *)((int)this + 0x280);
        local_58 = *(int *)((int)this + 0x284);
      }
      else {
        local_5c = *(int *)((int)this + 0x2d0);
        local_58 = *(int *)((int)this + 0x2d4);
      }
      param_2[8] = local_5c;
      param_2[9] = local_58;
      break;
    case 0x6a:
      *param_2 = 1;
      param_2[1] = 4;
      param_2[2] = -0x66666666;
      param_2[3] = 0x3fb99999;
      param_2[4] = 0x48c00000;
      param_2[5] = 0x426d1321;
      param_2[6] = 0;
      param_2[7] = 0x40c38800;
      param_2[10] = 0;
      param_2[0xb] = 0x3ff00000;
      param_2[8] = *(int *)((int)this + 0x300);
      param_2[9] = *(int *)((int)this + 0x304);
    }
  }
  return 1;
}



/* ================================================================
 * Function: FUN_10002eb5
 * Address:  10002eb5
 * ================================================================ */

undefined1 __thiscall FUN_10002eb5(void *this,int param_1,int param_2,undefined4 *param_3)

{
  undefined1 local_8;
  
  local_8 = 1;
  if (param_1 < 0x74) {
    if (param_1 != 0x73) {
      switch(param_1) {
      case 0x16:
      case 0x18:
      case 0x69:
      case 0x6b:
      case 0x6d:
      case 0x6f:
      case 0x71:
        break;
      default:
        goto switchD_10002ef6_caseD_17;
      }
    }
switchD_10002ef6_caseD_16:
    if (param_2 == 0) {
      *param_3 = 2;
    }
    else if (param_2 == 1) {
      *param_3 = 1;
    }
    else if (param_2 == 2) {
      *param_3 = 7;
    }
    else {
      local_8 = 0;
    }
  }
  else {
    if (param_1 < 0x7d2) {
      if (param_1 == 0x7d1) {
        if (param_2 == 0) {
          *param_3 = 0xf;
          return 1;
        }
        if (param_2 == 1) {
          if (*(char *)((int)this + 0x45) != '\0') {
            *param_3 = 5;
            return 1;
          }
          *param_3 = 6;
          return 1;
        }
        if (param_2 == 2) {
          *param_3 = 6;
          return 1;
        }
        return 0;
      }
      switch(param_1) {
      case 0x3ec:
      case 0x3ee:
      case 0x3f0:
      case 0x3f2:
      case 0x3f6:
      case 0x3f8:
        goto switchD_10002ef6_caseD_16;
      }
    }
switchD_10002ef6_caseD_17:
    local_8 = FUN_100154b7(param_1,param_2,param_3);
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_10003070
 * Address:  10003070
 * ================================================================ */

undefined4 * __thiscall FUN_10003070(void *this,uint param_1)

{
  FUN_1000140d(this);
  if ((param_1 & 1) != 0) {
    FUN_1001576a(this);
  }
  return this;
}



/* ================================================================
 * Function: FUN_100030a0
 * Address:  100030a0
 * ================================================================ */

void __thiscall FUN_100030a0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x110) = param_1;
  return;
}



/* ================================================================
 * Function: FUN_100030c0
 * Address:  100030c0
 * ================================================================ */

void __thiscall FUN_100030c0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 4) = param_1;
  return;
}



/* ================================================================
 * Function: FUN_100030e0
 * Address:  100030e0
 * ================================================================ */

void FUN_100030e0(void)

{
  return;
}



/* ================================================================
 * Function: FUN_100030f0
 * Address:  100030f0
 * ================================================================ */

undefined1 FUN_100030f0(void)

{
  return 0;
}



/* ================================================================
 * Function: FUN_10003100
 * Address:  10003100
 * ================================================================ */

undefined4 * __fastcall FUN_10003100(undefined4 *param_1)

{
  void *this;
  undefined4 *puVar1;
  undefined4 *local_2c;
  undefined4 *local_28;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_100207ff;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10011fb0(param_1);
  local_8 = 0;
  *param_1 = &PTR_FUN_100211b8;
  FUN_10003512((int)param_1);
  this = operator_new(0x138);
  local_8._0_1_ = 1;
  if (this == (void *)0x0) {
    local_28 = (undefined4 *)0x0;
  }
  else {
    local_28 = FUN_10011630(this,3);
  }
  local_8._0_1_ = 0;
  param_1[0x10] = local_28;
  if (param_1[0x10] != 0) {
    FUN_100030a0((void *)param_1[0x10],param_1);
  }
  puVar1 = operator_new(0xc);
  local_8._0_1_ = 2;
  if (puVar1 == (undefined4 *)0x0) {
    local_2c = (undefined4 *)0x0;
  }
  else {
    local_2c = FUN_1000f710(puVar1);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  param_1[0x12] = local_2c;
  if (param_1[0x12] != 0) {
    FUN_100030c0((void *)param_1[0x12],param_1);
    *(undefined2 *)(param_1 + 0x13) = 0;
    (**(code **)(*(int *)param_1[0x10] + 0x24))(0xfa3,0x88,0);
    (**(code **)(*(int *)param_1[0x10] + 0x24))(0xfa4,0xa0,0);
    (**(code **)(*(int *)param_1[0x10] + 0x24))(0xfa5,0x88,0);
    (**(code **)(*(int *)param_1[0x10] + 0x24))(0xfa6,0xa0,0);
  }
  ExceptionList = local_10;
  return param_1;
}



/* ================================================================
 * Function: FUN_10003288
 * Address:  10003288
 * ================================================================ */

undefined4 * __thiscall FUN_10003288(void *this,undefined4 param_1,undefined4 param_2)

{
  void *this_00;
  undefined4 *puVar1;
  undefined4 *local_2c;
  undefined4 *local_28;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10020828;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10011fb0(this);
  local_8 = 0;
  *(undefined ***)this = &PTR_FUN_100211b8;
  FUN_10003512((int)this);
  this_00 = operator_new(0x138);
  local_8._0_1_ = 1;
  if (this_00 == (void *)0x0) {
    local_28 = (undefined4 *)0x0;
  }
  else {
    local_28 = FUN_10011630(this_00,3);
  }
  local_8._0_1_ = 0;
  *(undefined4 **)((int)this + 0x40) = local_28;
  if (*(int *)((int)this + 0x40) != 0) {
    FUN_100030a0(*(void **)((int)this + 0x40),this);
    (**(code **)(**(int **)((int)this + 0x40) + 0x24))(0x7d1,param_1,0);
    (**(code **)(**(int **)((int)this + 0x40) + 0x24))(0x7d4,param_2,0);
    (**(code **)(**(int **)((int)this + 0x40) + 4))();
    (**(code **)(**(int **)((int)this + 0x40) + 0x24))(0xfa3,0x88,0);
    (**(code **)(**(int **)((int)this + 0x40) + 0x24))(0xfa4,0xa0,0);
    (**(code **)(**(int **)((int)this + 0x40) + 0x24))(0xfa5,0x88,0);
    (**(code **)(**(int **)((int)this + 0x40) + 0x24))(0xfa6,0xa0,0);
  }
  puVar1 = operator_new(0xc);
  local_8._0_1_ = 2;
  if (puVar1 == (undefined4 *)0x0) {
    local_2c = (undefined4 *)0x0;
  }
  else {
    local_2c = FUN_1000f710(puVar1);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  *(undefined4 **)((int)this + 0x48) = local_2c;
  if (*(int *)((int)this + 0x48) != 0) {
    FUN_100030c0(*(void **)((int)this + 0x48),this);
    *(undefined2 *)((int)this + 0x4c) = 0;
  }
  ExceptionList = local_10;
  return this;
}



/* ================================================================
 * Function: FUN_1000345b
 * Address:  1000345b
 * ================================================================ */

void __fastcall FUN_1000345b(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1002083b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_100211b8;
  local_8 = 0;
  if ((param_1[0x10] != 0) && ((undefined4 *)param_1[0x10] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[0x10])(1);
  }
  if ((param_1[0x12] != 0) && ((undefined4 *)param_1[0x12] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[0x12])(1);
  }
  local_8 = 0xffffffff;
  FUN_100123d4(param_1);
  ExceptionList = local_10;
  return;
}



/* ================================================================
 * Function: FUN_10003512
 * Address:  10003512
 * ================================================================ */

void __fastcall FUN_10003512(int param_1)

{
  short sVar1;
  
  *(undefined4 *)(param_1 + 8) = 4;
  *(undefined1 *)(param_1 + 0x46) = 1;
  *(undefined2 *)(param_1 + 0x3b0) = 0;
  while (*(short *)(param_1 + 0x3b0) < 2) {
    *(undefined2 *)(param_1 + 0x3b6 + *(short *)(param_1 + 0x3b0) * 2) = 0;
    *(undefined2 *)(param_1 + 0x3ba + *(short *)(param_1 + 0x3b0) * 2) = 1;
    sVar1 = *(short *)(param_1 + 0x3b0);
    *(undefined4 *)(param_1 + 0x3c0 + sVar1 * 8) = 0;
    *(undefined4 *)(param_1 + 0x3c4 + sVar1 * 8) = 0x40080000;
    *(undefined2 *)(param_1 + 0x3d0 + *(short *)(param_1 + 0x3b0) * 2) = 1;
    *(short *)(param_1 + 0x3b0) = *(short *)(param_1 + 0x3b0) + 1;
  }
  *(undefined2 *)(param_1 + 0x3b0) = 2;
  *(undefined1 *)(param_1 + 0x3b2) = 1;
  *(undefined2 *)(param_1 + 0x3b4) = 1;
  *(undefined1 *)(param_1 + 0x3d4) = 0;
  *(undefined1 *)(param_1 + 0x424) = 0;
  *(undefined2 *)(param_1 + 0x288) = 1;
  *(undefined2 *)(param_1 + 0x278) = 1;
  *(undefined2 *)(param_1 + 0x3d6) = 0;
  while (*(short *)(param_1 + 0x3d6) < 4) {
    sVar1 = *(short *)(param_1 + 0x3d6);
    *(undefined4 *)(param_1 + 0x3d8 + sVar1 * 8) = 0;
    *(undefined4 *)(param_1 + 0x3dc + sVar1 * 8) = 0x3ff00000;
    sVar1 = *(short *)(param_1 + 0x3d6);
    *(undefined4 *)(param_1 + 0x3f8 + sVar1 * 8) = 0;
    *(undefined4 *)(param_1 + 0x3fc + sVar1 * 8) = 0x3ff00000;
    *(undefined1 *)(param_1 + 0x418 + (int)*(short *)(param_1 + 0x3d6)) = 1;
    *(undefined1 *)(param_1 + 0x41c + (int)*(short *)(param_1 + 0x3d6)) = 1;
    *(undefined1 *)(param_1 + 0x420 + (int)*(short *)(param_1 + 0x3d6)) = 1;
    *(short *)(param_1 + 0x3d6) = *(short *)(param_1 + 0x3d6) + 1;
  }
  *(undefined2 *)(param_1 + 0x3d6) = 4;
  *(undefined4 *)(param_1 + 0x428) = 0;
  *(undefined4 *)(param_1 + 0x42c) = 0;
  *(undefined2 *)(param_1 + 0x430) = 1;
  *(undefined4 *)(param_1 + 0x434) = 0;
  return;
}



/* ================================================================
 * Function: FUN_1000371d
 * Address:  1000371d
 * ================================================================ */

undefined1 FUN_1000371d(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_10003731
 * Address:  10003731
 * ================================================================ */

undefined4 __fastcall FUN_10003731(void *param_1)

{
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 uVar1;
  undefined1 local_8;
  
  local_8 = FUN_100059b4(param_1,0x8a,0);
  uVar1 = extraout_var;
  if (local_8 != 0) {
    local_8 = FUN_100059b4(param_1,0x80,*(undefined1 *)((int)param_1 + 0x424));
    uVar1 = extraout_var_00;
  }
  return CONCAT31(uVar1,local_8);
}



/* ================================================================
 * Function: FUN_10003781
 * Address:  10003781
 * ================================================================ */

undefined1 __fastcall FUN_10003781(void *param_1)

{
  FUN_100059b4(param_1,0x80,0);
  return 1;
}



/* ================================================================
 * Function: FUN_100037a4
 * Address:  100037a4
 * ================================================================ */

char __fastcall FUN_100037a4(void *param_1)

{
  char local_c;
  short local_8;
  
  local_c = '\x01';
  local_8 = 0;
  while ((local_8 < 4 && (local_c != '\0'))) {
    if (*(char *)((int)param_1 + local_8 + 0x418) == '\x01') {
      if (*(char *)((int)param_1 + local_8 + 0x420) == '\x01') {
        FUN_1000563d(param_1,*(undefined4 *)((int)param_1 + local_8 * 8 + 0x3f8),
                     *(undefined4 *)((int)param_1 + local_8 * 8 + 0x3fc),
                     *(short *)((int)param_1 + 0x288));
        if (local_c != '\0') {
          local_c = FUN_10005955(param_1,local_8 << 4,*(undefined1 *)((int)param_1 + 0x117));
        }
        if (local_c != '\0') {
          local_c = FUN_10005955(param_1,local_8 * 0x10 + 1,*(undefined1 *)((int)param_1 + 0x118));
        }
        if (local_c != '\0') {
          local_c = FUN_10005955(param_1,local_8 * 0x10 + 2,*(undefined1 *)((int)param_1 + 0x119));
        }
        if (local_c != '\0') {
          local_c = FUN_10005955(param_1,local_8 * 0x10 + 3,*(undefined1 *)((int)param_1 + 0x11a));
        }
        if (local_c != '\0') {
          local_c = FUN_10005955(param_1,local_8 * 0x10 + 4,*(undefined1 *)((int)param_1 + 0x11c));
        }
      }
      if (*(char *)((int)param_1 + local_8 + 0x41c) == '\x01') {
        FUN_1000563d(param_1,*(undefined4 *)((int)param_1 + local_8 * 8 + 0x3d8),
                     *(undefined4 *)((int)param_1 + local_8 * 8 + 0x3dc),
                     *(short *)((int)param_1 + 0x278));
        if (local_c != '\0') {
          local_c = FUN_10005955(param_1,local_8 * 0x10 + 8,*(undefined1 *)((int)param_1 + 0x117));
        }
        if (local_c != '\0') {
          local_c = FUN_10005955(param_1,local_8 * 0x10 + 9,*(undefined1 *)((int)param_1 + 0x118));
        }
        if (local_c != '\0') {
          local_c = FUN_10005955(param_1,local_8 * 0x10 + 10,*(undefined1 *)((int)param_1 + 0x119));
        }
        if (local_c != '\0') {
          local_c = FUN_10005955(param_1,local_8 * 0x10 + 0xb,*(undefined1 *)((int)param_1 + 0x11a))
          ;
        }
        if (local_c != '\0') {
          local_c = FUN_10005955(param_1,local_8 * 0x10 + 0xc,*(undefined1 *)((int)param_1 + 0x11b))
          ;
        }
        if (local_c != '\0') {
          local_c = FUN_10005955(param_1,local_8 * 0x10 + 0xd,*(undefined1 *)((int)param_1 + 0x11c))
          ;
        }
      }
    }
    local_8 = local_8 + 1;
  }
  return local_c;
}



/* ================================================================
 * Function: FUN_10003a3d
 * Address:  10003a3d
 * ================================================================ */

undefined1 FUN_10003a3d(void)

{
  return 0;
}



/* ================================================================
 * Function: FUN_10003a53
 * Address:  10003a53
 * ================================================================ */

byte __thiscall FUN_10003a53(void *this,int param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int local_20;
  undefined1 local_1c [4];
  undefined1 local_18;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined4 local_10;
  byte local_c;
  byte local_8;
  
  local_c = 0 < param_1;
  local_8 = 0;
  if (((bool)local_c) && ((param_1 == 0x11 || (param_1 == 0xc)))) {
    uVar1 = FUN_10012584(this,*(int *)((int)this + 0x250),*(int *)((int)this + 0x250),
                         *(undefined4 *)((int)this + 0x254),-1,5e-08,&local_10);
    local_c = (byte)uVar1;
    if (local_c != 0) {
      local_c = FUN_10005955(this,0x40,(char)local_10);
    }
    if (local_c != 0) {
      local_c = FUN_10005955(this,0x41,(char)((uint)local_10 >> 8));
    }
    if (local_c != 0) {
      local_c = FUN_10005955(this,0x42,(char)((uint)local_10 >> 0x10));
    }
    if (local_c != 0) {
      local_c = FUN_10005955(this,0x43,(char)((uint)local_10 >> 0x18));
    }
  }
  if ((local_c != 0) &&
     ((((param_1 == 0x11 || (param_1 == 0xb)) || (param_1 == 0xf)) || (param_1 == 0x10)))) {
    local_8 = local_8 | 1U - (*(short *)((int)this + 0x3b6) != 0) |
              (-(*(short *)((int)this + 0x3b8) != 0) & 0xf8U) + 8 |
              (-(*(short *)((int)this + 0x3d0) != 0) & 0xfeU) + 2 |
              (-(*(short *)((int)this + 0x3d2) != 0) & 0xf0U) + 0x10 |
              (-(*(short *)((int)this + 0x3ba) != 0) & 0xfcU) + 4 |
              (-(*(short *)((int)this + 0x3bc) != 0) & 0xe0U) + 0x20;
  }
  local_8 = local_8 | -(*(char *)((int)this + 0x3b2) != '\0') & 0x40U |
            (-(*(short *)((int)this + 0x3b4) != 1) & 0x80U) + 0x80;
  if (local_c != 0) {
    local_c = FUN_100059b4(this,0x86,local_8);
  }
  if ((local_c != 0) && ((param_1 == 0xd || (param_1 == 0x11)))) {
    if ((*(char *)((int)this + 0x3d4) == '\0') || (*(char *)((int)this + 0x3d4) == '\x01')) {
      lVar2 = __ftol();
      local_18 = (undefined1)lVar2;
      if (*(short *)((int)this + 0x3b6) == 0) {
        *(byte *)((int)this + 0x424) = *(byte *)((int)this + 0x424) | 0x20;
        *(byte *)((int)this + 0x424) = *(byte *)((int)this + 0x424) & 0x7f;
      }
      else {
        *(byte *)((int)this + 0x424) = *(byte *)((int)this + 0x424) & 0xdf;
        *(byte *)((int)this + 0x424) = *(byte *)((int)this + 0x424) | 0x80;
      }
      local_c = (**(code **)(**(int **)((int)this + 0x40) + 0x18))
                          (0x80,*(undefined1 *)((int)this + 0x424));
      for (local_20 = 0; local_20 < 2; local_20 = local_20 + 1) {
        if (*(short *)((int)this + local_20 * 2 + 0x3b6) != 0) {
          local_14 = 0x58;
          local_13 = (undefined1)local_20;
          local_12 = local_18;
          local_c = (**(code **)(**(int **)((int)this + 0x40) + 0x20))
                              (6,0x88,1,&local_14,3,local_1c);
        }
      }
    }
    else {
      local_c = 0;
    }
  }
  return local_c;
}



/* ================================================================
 * Function: FUN_10003dce
 * Address:  10003dce
 * ================================================================ */

char __thiscall FUN_10003dce(void *this,int param_1)

{
  char cVar1;
  bool bVar2;
  uint local_10;
  undefined1 local_c [4];
  char local_8;
  
  local_8 = 1;
  if (param_1 < 0xc1f) {
    if (param_1 == 0xc1e) {
      if (*(int *)((int)this + 0x434) != 0) {
        bVar2 = FUN_10005805(this,(double *)((int)this + 0x428),*(short *)((int)this + 0x430));
        return bVar2;
      }
      return '\0';
    }
    if (param_1 < 0x1a) {
      if (param_1 == 0x19) {
        cVar1 = (**(code **)(*(int *)this + 0x18))(0x19);
        return cVar1;
      }
      switch(param_1) {
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xf:
      case 0x10:
      case 0x11:
        cVar1 = (**(code **)(*(int *)this + 0x1c))(param_1);
        return cVar1;
      }
    }
    else {
      if (param_1 == 0x7d1) {
        cVar1 = (**(code **)(**(int **)((int)this + 0x40) + 4))();
        return cVar1;
      }
      if (param_1 == 0xc1d) {
        cVar1 = FUN_1000563d(this,*(undefined4 *)((int)this + 0x428),
                             *(undefined4 *)((int)this + 0x42c),*(short *)((int)this + 0x430));
        if (cVar1 == '\0') {
          return '\0';
        }
        if (*(int *)((int)this + 0x434) == 0) {
          return cVar1;
        }
        **(undefined1 **)((int)this + 0x434) = *(undefined1 *)((int)this + 0x117);
        *(undefined1 *)(*(int *)((int)this + 0x434) + 1) = *(undefined1 *)((int)this + 0x118);
        *(undefined1 *)(*(int *)((int)this + 0x434) + 2) = *(undefined1 *)((int)this + 0x119);
        *(undefined1 *)(*(int *)((int)this + 0x434) + 3) = *(undefined1 *)((int)this + 0x11a);
        *(undefined1 *)(*(int *)((int)this + 0x434) + 4) = *(undefined1 *)((int)this + 0x11b);
        *(char *)(*(int *)((int)this + 0x434) + 5) =
             (char)((int)(*(byte *)((int)this + 0x11c) & 6) >> 1);
        *(bool *)(*(int *)((int)this + 0x434) + 6) = (*(byte *)((int)this + 0x11c) & 1) != 0;
        return cVar1;
      }
    }
switchD_10003e21_caseD_e:
    local_8 = FUN_10013381(this,param_1);
  }
  else {
    switch(param_1) {
    case 0xfa1:
      local_10 = (uint)*(byte *)((int)this + 0x43a);
      local_8 = (**(code **)(**(int **)((int)this + 0x40) + 0x18))
                          (*(undefined2 *)((int)this + 0x438),local_10);
      break;
    case 0xfa2:
      local_8 = (**(code **)(**(int **)((int)this + 0x40) + 0x1c))
                          (*(undefined2 *)((int)this + 0x438),&local_10);
      *(undefined1 *)((int)this + 0x43a) = (undefined1)local_10;
      break;
    case 0xfa3:
      if (*(int *)((int)this + 0x40) == 0) {
        local_8 = '\0';
      }
      else {
        local_8 = (**(code **)(**(int **)((int)this + 0x40) + 0x20))
                            (6,CONCAT22((short)((uint)local_c >> 0x10),
                                        *(undefined2 *)((int)this + 0x43c)),1,(int)this + 0x43e,1,
                             local_c);
      }
      break;
    case 0xfa4:
      if (*(int *)((int)this + 0x40) == 0) {
        local_8 = '\0';
      }
      else {
        local_8 = (**(code **)(**(int **)((int)this + 0x40) + 0x20))
                            (6,CONCAT22((short)((uint)local_c >> 0x10),
                                        *(undefined2 *)((int)this + 0x43c)),2,(int)this + 0x43e,1,
                             local_c);
      }
      break;
    default:
      goto switchD_10003e21_caseD_e;
    }
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_10004101
 * Address:  10004101
 * ================================================================ */

undefined1 __thiscall FUN_10004101(void *this,short param_1,uint param_2,undefined2 param_3)

{
  undefined2 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined2 uVar4;
  short local_20;
  short local_1c;
  short local_18;
  short local_14;
  short local_10;
  short local_c;
  bool local_8;
  
  iVar3 = (int)param_1;
  uVar1 = (undefined2)param_2;
  if (iVar3 < 0xc1f) {
    if (iVar3 == 0xc1e) {
      *(undefined2 *)((int)this + 0x430) = (undefined2)param_2;
      return 1;
    }
    if (iVar3 < 0x450) {
      if (iVar3 == 0x44f) {
        *(undefined2 *)((int)this + 0x3b4) = (undefined2)param_2;
        return 1;
      }
      if (iVar3 < 0x11) {
        if (iVar3 == 0x10) {
          if (*(short *)((int)this + 0x3b0) < 2) {
            *(undefined2 *)((int)this + *(short *)((int)this + 0x3b0) * 2 + 0x3d0) =
                 (undefined2)param_2;
            return 1;
          }
          for (local_14 = 0; local_14 < 2; local_14 = local_14 + 1) {
            *(undefined2 *)((int)this + local_14 * 2 + 0x3d0) = (undefined2)param_2;
          }
          return 1;
        }
        if (iVar3 == 0xb) {
          if (*(short *)((int)this + 0x3b0) < 2) {
            *(undefined2 *)((int)this + *(short *)((int)this + 0x3b0) * 2 + 0x3b6) =
                 (undefined2)param_2;
            return 1;
          }
          for (local_c = 0; local_c < 2; local_c = local_c + 1) {
            *(undefined2 *)((int)this + local_c * 2 + 0x3b6) = (undefined2)param_2;
          }
          return 1;
        }
        if (iVar3 == 0xf) {
          if (*(short *)((int)this + 0x3b0) < 2) {
            *(undefined2 *)((int)this + *(short *)((int)this + 0x3b0) * 2 + 0x3ba) =
                 (undefined2)param_2;
            return 1;
          }
          for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
            *(undefined2 *)((int)this + local_10 * 2 + 0x3ba) = (undefined2)param_2;
          }
          return 1;
        }
      }
      else {
        if (iVar3 == 0x44d) {
          if (2 < param_2) {
            FUN_100155fe(this,8,2,&DAT_10026704);
          }
          else {
            *(undefined2 *)((int)this + 0x3b0) = (undefined2)param_2;
          }
          local_8 = 2 >= param_2;
          return local_8;
        }
        if (iVar3 == 0x44e) {
          *(bool *)((int)this + 0x3b2) = param_2 != 0;
          return 1;
        }
      }
    }
    else {
      switch(iVar3) {
      case 0x461:
        if (4 < param_2) {
          FUN_100155fe(this,8,2,&DAT_10026708);
        }
        else {
          *(undefined2 *)((int)this + 0x3d6) = (undefined2)param_2;
        }
        local_8 = 4 >= param_2;
        return local_8;
      case 0x462:
        if (*(short *)((int)this + 0x3d6) < 4) {
          switch(*(undefined2 *)((int)this + 0x3d6)) {
          case 0:
            if (param_2 == 0) {
              *(byte *)((int)this + 0x424) = *(byte *)((int)this + 0x424) & 0xfe;
            }
            else {
              *(byte *)((int)this + 0x424) = *(byte *)((int)this + 0x424) | 1;
            }
            break;
          case 1:
            if (param_2 == 0) {
              *(byte *)((int)this + 0x424) = *(byte *)((int)this + 0x424) & 0xfd;
            }
            else {
              *(byte *)((int)this + 0x424) = *(byte *)((int)this + 0x424) | 2;
            }
            break;
          case 2:
            if (param_2 == 0) {
              *(byte *)((int)this + 0x424) = *(byte *)((int)this + 0x424) & 0xfb;
            }
            else {
              *(byte *)((int)this + 0x424) = *(byte *)((int)this + 0x424) | 4;
            }
            break;
          case 3:
            if (param_2 == 0) {
              *(byte *)((int)this + 0x424) = *(byte *)((int)this + 0x424) & 0xf7;
            }
            else {
              *(byte *)((int)this + 0x424) = *(byte *)((int)this + 0x424) | 8;
            }
          }
          *(bool *)((int)this + *(short *)((int)this + 0x3d6) + 0x418) = param_2 != 0;
          return 1;
        }
        for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
          *(bool *)((int)this + local_18 + 0x418) = param_2 != 0;
        }
        return 1;
      case 0x463:
        if (*(short *)((int)this + 0x3d6) < 4) {
          *(bool *)((int)this + *(short *)((int)this + 0x3d6) + 0x420) = param_2 != 0;
          return 1;
        }
        for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
          *(bool *)((int)this + local_1c + 0x420) = param_2 != 0;
        }
        return 1;
      case 0x464:
        if (*(short *)((int)this + 0x3d6) < 4) {
          *(bool *)((int)this + *(short *)((int)this + 0x3d6) + 0x41c) = param_2 != 0;
          return 1;
        }
        for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
          *(bool *)((int)this + local_20 + 0x41c) = param_2 != 0;
        }
        return 1;
      }
    }
  }
  else if (iVar3 < 0xfa5) {
    if (iVar3 == 0xfa4) {
      if (*(int *)((int)this + 0x40) == 0) {
        return 0;
      }
      (**(code **)(**(int **)((int)this + 0x40) + 0x24))(0xfa4,param_2,param_3);
      return 1;
    }
    if (iVar3 < 0xfa3) {
      if (iVar3 == 0xfa2) {
        *(undefined1 *)((int)this + 0x43a) = (undefined1)param_2;
        return 1;
      }
      if (iVar3 == 0xc1f) {
        *(uint *)((int)this + 0x434) = param_2;
        return 1;
      }
      if (iVar3 == 0xfa1) {
        *(undefined2 *)((int)this + 0x438) = uVar1;
        return 1;
      }
    }
    else if (iVar3 == 0xfa3) {
      if (*(int *)((int)this + 0x40) == 0) {
        return 0;
      }
      (**(code **)(**(int **)((int)this + 0x40) + 0x24))(0xfa3,param_2,param_3);
      return 1;
    }
  }
  else {
    uVar4 = (undefined2)((uint)(iVar3 + -0xfa5) >> 0x10);
    switch(iVar3 + -0xfa5) {
    case 0:
      if (*(int *)((int)this + 0x40) == 0) {
        return 0;
      }
      (**(code **)(**(int **)((int)this + 0x40) + 0x24))(0xfa5,param_2,CONCAT22(uVar4,param_3));
      return 1;
    case 1:
      if (*(int *)((int)this + 0x40) == 0) {
        return 0;
      }
      (**(code **)(**(int **)((int)this + 0x40) + 0x24))(0xfa6,param_2,CONCAT22(uVar4,param_3));
      return 1;
    case 2:
      *(undefined2 *)((int)this + 0x43c) = uVar1;
      return 1;
    case 3:
      *(undefined1 *)((int)this + 0x43e) = (undefined1)param_2;
      return 1;
    }
  }
  uVar2 = FUN_10013499(this,param_1,param_2,param_3);
  return uVar2;
}



/* ================================================================
 * Function: FUN_10004785
 * Address:  10004785
 * ================================================================ */

undefined1 __thiscall FUN_10004785(void *this,short param_1,uint *param_2,undefined2 param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined1 local_8 [4];
  
  iVar2 = (int)param_1;
  if (iVar2 < 0xc1f) {
    if (iVar2 == 0xc1e) {
      *param_2 = (int)*(short *)((int)this + 0x430);
      return 1;
    }
    if (iVar2 < 0x450) {
      if (iVar2 == 0x44f) {
        *param_2 = (int)*(short *)((int)this + 0x3b4);
        return 1;
      }
      if (iVar2 < 0x11) {
        if (iVar2 == 0x10) {
          uVar4 = (int)*(short *)((int)this + 0x3b0) & 0x80000001;
          if ((int)uVar4 < 0) {
            uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
          }
          *param_2 = (int)*(short *)((int)this + uVar4 * 2 + 0x3d0);
          return 1;
        }
        if (iVar2 == 0xb) {
          uVar4 = (int)*(short *)((int)this + 0x3b0) & 0x80000001;
          if ((int)uVar4 < 0) {
            uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
          }
          *param_2 = (int)*(short *)((int)this + uVar4 * 2 + 0x3b6);
          return 1;
        }
        if (iVar2 == 0xf) {
          uVar4 = (int)*(short *)((int)this + 0x3b0) & 0x80000001;
          if ((int)uVar4 < 0) {
            uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
          }
          *param_2 = (int)*(short *)((int)this + uVar4 * 2 + 0x3ba);
          return 1;
        }
      }
      else {
        if (iVar2 == 0x44d) {
          *param_2 = (int)*(short *)((int)this + 0x3b0);
          return 1;
        }
        if (iVar2 == 0x44e) {
          *param_2 = (int)*(char *)((int)this + 0x3b2);
          return 1;
        }
      }
    }
    else {
      switch(iVar2) {
      case 0x461:
        *param_2 = (int)*(short *)((int)this + 0x3d6);
        return 1;
      case 0x462:
        uVar4 = (int)*(short *)((int)this + 0x3d6) & 0x80000003;
        if ((int)uVar4 < 0) {
          uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
        }
        *param_2 = (int)*(char *)((int)this + uVar4 + 0x418);
        return 1;
      case 0x463:
        uVar4 = (int)*(short *)((int)this + 0x3d6) & 0x80000003;
        if ((int)uVar4 < 0) {
          uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
        }
        *param_2 = (int)*(char *)((int)this + uVar4 + 0x420);
        return 1;
      case 0x464:
        uVar4 = (int)*(short *)((int)this + 0x3d6) & 0x80000003;
        if ((int)uVar4 < 0) {
          uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
        }
        *param_2 = (int)*(char *)((int)this + uVar4 + 0x41c);
        return 1;
      }
    }
  }
  else if (iVar2 < 0xfa5) {
    if (iVar2 == 0xfa4) {
      if (*(int *)((int)this + 0x40) == 0) {
        return 0;
      }
      (**(code **)(**(int **)((int)this + 0x40) + 0x28))(0xfa4,param_2,param_3);
      return 1;
    }
    if (iVar2 < 0xfa3) {
      if (iVar2 == 0xfa2) {
        *param_2 = (uint)*(byte *)((int)this + 0x43a);
        return 1;
      }
      if (iVar2 == 0xc1f) {
        *param_2 = *(uint *)((int)this + 0x434);
        return 1;
      }
      if (iVar2 == 0xfa1) {
        *param_2 = (uint)*(ushort *)((int)this + 0x438);
        return 1;
      }
    }
    else if (iVar2 == 0xfa3) {
      if (*(int *)((int)this + 0x40) == 0) {
        return 0;
      }
      (**(code **)(**(int **)((int)this + 0x40) + 0x28))
                (0xfa3,local_8,CONCAT22(param_1 >> 0xf,param_3));
      return 1;
    }
  }
  else {
    uVar3 = (undefined2)((uint)(iVar2 + -0xfa5) >> 0x10);
    switch(iVar2 + -0xfa5) {
    case 0:
      if (*(int *)((int)this + 0x40) == 0) {
        return 0;
      }
      (**(code **)(**(int **)((int)this + 0x40) + 0x28))(0xfa5,local_8,CONCAT22(uVar3,param_3));
      return 1;
    case 1:
      if (*(int *)((int)this + 0x40) == 0) {
        return 0;
      }
      (**(code **)(**(int **)((int)this + 0x40) + 0x28))(0xfa6,param_2,CONCAT22(uVar3,param_3));
      return 1;
    case 2:
      *param_2 = (uint)*(ushort *)((int)this + 0x43c);
      return 1;
    case 3:
      *param_2 = (uint)*(byte *)((int)this + 0x43e);
      return 1;
    }
  }
  uVar1 = FUN_10013a70(this,param_1,(int *)param_2,param_3);
  return uVar1;
}



/* ================================================================
 * Function: FUN_10004b82
 * Address:  10004b82
 * ================================================================ */

undefined1 __thiscall
FUN_10004b82(void *this,short param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4)

{
  short sVar1;
  undefined1 uVar2;
  short local_14;
  short local_10;
  short local_c;
  
  if (param_1 < 0x18) {
    if (param_1 == 0x17) {
      if (*(short *)((int)this + 0x3d6) < 4) {
        sVar1 = *(short *)((int)this + 0x3d6);
        *(undefined4 *)((int)this + sVar1 * 8 + 0x3f8) = param_2;
        *(undefined4 *)((int)this + sVar1 * 8 + 0x3fc) = param_3;
        return 1;
      }
      for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
        *(undefined4 *)((int)this + local_14 * 8 + 0x3f8) = param_2;
        *(undefined4 *)((int)this + local_14 * 8 + 0x3fc) = param_3;
      }
      return 1;
    }
    if (param_1 == 0xd) {
      if (*(short *)((int)this + 0x3b0) < 2) {
        sVar1 = *(short *)((int)this + 0x3b0);
        *(undefined4 *)((int)this + sVar1 * 8 + 0x3c0) = param_2;
        *(undefined4 *)((int)this + sVar1 * 8 + 0x3c4) = param_3;
        return 1;
      }
      for (local_c = 0; local_c < 2; local_c = local_c + 1) {
        *(undefined4 *)((int)this + local_c * 8 + 0x3c0) = param_2;
        *(undefined4 *)((int)this + local_c * 8 + 0x3c4) = param_3;
      }
      return 1;
    }
    if (param_1 == 0x15) {
      if (*(short *)((int)this + 0x3d6) < 4) {
        sVar1 = *(short *)((int)this + 0x3d6);
        *(undefined4 *)((int)this + sVar1 * 8 + 0x3d8) = param_2;
        *(undefined4 *)((int)this + sVar1 * 8 + 0x3dc) = param_3;
        return 1;
      }
      for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
        *(undefined4 *)((int)this + local_10 * 8 + 0x3d8) = param_2;
        *(undefined4 *)((int)this + local_10 * 8 + 0x3dc) = param_3;
      }
      return 1;
    }
  }
  else if (param_1 == 0xc1d) {
    *(undefined4 *)((int)this + 0x428) = param_2;
    *(undefined4 *)((int)this + 0x42c) = param_3;
    return 1;
  }
  uVar2 = FUN_10013f8f(this,param_1,(double)CONCAT44(param_3,param_2),param_4);
  return uVar2;
}



/* ================================================================
 * Function: FUN_10004d5a
 * Address:  10004d5a
 * ================================================================ */

undefined1 __thiscall FUN_10004d5a(void *this,short param_1,undefined4 *param_2,undefined2 param_3)

{
  undefined1 uVar1;
  uint uVar2;
  
  if (param_1 < 0x18) {
    if (param_1 == 0x17) {
      uVar2 = (int)*(short *)((int)this + 0x3d6) & 0x80000003;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
      }
      *param_2 = *(undefined4 *)((int)this + uVar2 * 8 + 0x3f8);
      param_2[1] = *(undefined4 *)((int)this + uVar2 * 8 + 0x3fc);
      return 1;
    }
    if (param_1 == 0xd) {
      uVar2 = (int)*(short *)((int)this + 0x3b0) & 0x80000001;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
      }
      *param_2 = *(undefined4 *)((int)this + uVar2 * 8 + 0x3c0);
      param_2[1] = *(undefined4 *)((int)this + uVar2 * 8 + 0x3c4);
      return 1;
    }
    if (param_1 == 0x15) {
      uVar2 = (int)*(short *)((int)this + 0x3d6) & 0x80000003;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
      }
      *param_2 = *(undefined4 *)((int)this + uVar2 * 8 + 0x3d8);
      param_2[1] = *(undefined4 *)((int)this + uVar2 * 8 + 0x3dc);
      return 1;
    }
  }
  else if (param_1 == 0xc1d) {
    *param_2 = *(undefined4 *)((int)this + 0x428);
    param_2[1] = *(undefined4 *)((int)this + 0x42c);
    return 1;
  }
  uVar1 = FUN_100143fc(this,param_1,param_2,param_3);
  return uVar1;
}



/* ================================================================
 * Function: FUN_10004e76
 * Address:  10004e76
 * ================================================================ */

undefined4 __thiscall FUN_10004e76(void *this,short param_1,undefined4 *param_2,short param_3)

{
  undefined1 extraout_AL;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 uVar1;
  undefined1 local_c [4];
  undefined1 local_8;
  
  local_8 = 1;
  if (param_1 == 0x650) {
    (**(code **)(**(int **)((int)this + 0x40) + 0x20))(6,0,4,param_2,(int)param_3,local_c);
    uVar1 = extraout_var;
    local_8 = extraout_AL;
  }
  else {
    local_8 = FUN_10014827(this,param_1,param_2,param_3);
    uVar1 = extraout_var_00;
  }
  return CONCAT31(uVar1,local_8);
}



/* ================================================================
 * Function: FUN_10004ee0
 * Address:  10004ee0
 * ================================================================ */

undefined4 __thiscall FUN_10004ee0(void *this,short param_1,char *param_2,short param_3)

{
  undefined1 extraout_AL;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 uVar1;
  undefined1 local_c [4];
  undefined1 local_8;
  
  local_8 = 1;
  if (param_1 == 0x650) {
    (**(code **)(**(int **)((int)this + 0x40) + 0x20))(6,0,2,param_2,(int)param_3,local_c);
    uVar1 = extraout_var;
    local_8 = extraout_AL;
  }
  else {
    local_8 = FUN_100148f3(this,param_1,param_2,param_3);
    uVar1 = extraout_var_00;
  }
  return CONCAT31(uVar1,local_8);
}



/* ================================================================
 * Function: FUN_10004f4a
 * Address:  10004f4a
 * ================================================================ */

undefined1 __thiscall FUN_10004f4a(void *this,int param_1,undefined4 *param_2)

{
  uint local_c;
  undefined1 local_8;
  
  local_8 = 1;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 2;
  if (param_1 < 0x64f) {
    if (param_1 == 0x64e) {
      *param_2 = 1;
      param_2[1] = 7;
      param_2[2] = 0;
      param_2[3] = 0x3ff00000;
      param_2[4] = 0;
      param_2[5] = 0x406fe000;
      param_2[6] = 0;
      param_2[7] = 0x3ff00000;
      param_2[10] = 0;
      param_2[0xb] = 0x3ff00000;
      param_2[8] = 0;
      param_2[9] = 0x3ff00000;
      return 1;
    }
    switch(param_1) {
    case 0xc:
      *param_2 = 1;
      param_2[1] = 4;
      param_2[2] = 0;
      param_2[3] = 0x3ff00000;
      param_2[4] = 0;
      param_2[5] = 0x40c38800;
      param_2[6] = 0;
      param_2[7] = 0x408f4000;
      param_2[10] = 0xd2f1a9fc;
      param_2[0xb] = 0x3f50624d;
      param_2[8] = *(undefined4 *)((int)this + 0x250);
      param_2[9] = *(undefined4 *)((int)this + 0x254);
      break;
    case 0xd:
      *param_2 = 1;
      param_2[1] = 4;
      param_2[2] = 0;
      param_2[3] = 0xc0240000;
      param_2[4] = 0;
      param_2[5] = 0x40240000;
      param_2[6] = 0;
      param_2[7] = 0x40080000;
      param_2[10] = 0x23a29c78;
      param_2[0xb] = 0x3fb7fcb9;
      param_2[8] = *(undefined4 *)((int)this + 0x3c0);
      param_2[9] = *(undefined4 *)((int)this + 0x3c4);
      break;
    default:
      goto switchD_10004ffb_caseD_e;
    case 0xf:
      *param_2 = 1;
      param_2[1] = 1;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0x3ff00000;
      param_2[6] = 0;
      param_2[7] = 0;
      param_2[10] = 0;
      param_2[0xb] = 0x3ff00000;
      *(double *)(param_2 + 8) = (double)(int)*(short *)((int)this + 0x25a);
      break;
    case 0x10:
      *param_2 = 2;
      param_2[1] = 9;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0x3ff00000;
      param_2[6] = 0;
      param_2[7] = 0x3ff00000;
      param_2[10] = 0;
      param_2[0xb] = 0;
      *(double *)(param_2 + 8) = (double)(int)*(short *)((int)this + 0x268);
      break;
    case 0x15:
      *param_2 = 6;
      param_2[1] = 4;
      param_2[2] = 0x9999999a;
      param_2[3] = 0x3fa99999;
      param_2[4] = 0x53c00000;
      param_2[5] = 0x42c3a524;
      param_2[6] = 0x9999999a;
      param_2[7] = 0x3fb99999;
      param_2[10] = 0;
      param_2[0xb] = 0x3ff00000;
      param_2[8] = 0;
      param_2[9] = 0;
      break;
    case 0x16:
      *param_2 = 6;
      param_2[1] = 9;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0x3ff00000;
      param_2[10] = 0;
      param_2[0xb] = 0;
      *(double *)(param_2 + 8) = (double)(int)*(short *)((int)this + 0x278);
      break;
    case 0x17:
      *param_2 = 6;
      param_2[1] = 4;
      param_2[2] = 0x47ae147b;
      param_2[3] = 0x3fb47ae1;
      param_2[4] = 0x77000000;
      param_2[5] = 0x4243e832;
      param_2[6] = 0x9999999a;
      param_2[7] = 0x3fb99999;
      param_2[10] = 0xd2f1a9fc;
      param_2[0xb] = 0x3f50624d;
      param_2[8] = 0;
      param_2[9] = 0;
      break;
    case 0x18:
      *param_2 = 6;
      param_2[1] = 9;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0x3ff00000;
      param_2[10] = 0;
      param_2[0xb] = 0;
      *(double *)(param_2 + 8) = (double)(int)*(short *)((int)this + 0x288);
    }
  }
  else {
    if (param_1 == 0x7d1) {
      *param_2 = 3;
      param_2[1] = 9;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0x40330000;
      param_2[10] = 0;
      param_2[0xb] = 0;
      if (*(int *)((int)this + 0x40) == 0) {
        local_c = 0x13;
      }
      else {
        (**(code **)(**(int **)((int)this + 0x40) + 0x28))(0x7d1,&local_c,0);
      }
      *(double *)(param_2 + 8) = (double)local_c;
      return local_8;
    }
switchD_10004ffb_caseD_e:
    local_8 = FUN_100149d3(this,param_1,param_2);
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_100054f1
 * Address:  100054f1
 * ================================================================ */

undefined1 FUN_100054f1(int param_1,int param_2,undefined4 *param_3)

{
  undefined1 local_8;
  
  local_8 = 1;
  if (param_1 < 0x19) {
    if (param_1 != 0x18) {
      if (param_1 == 0x10) {
        if (param_2 == 0) {
          *param_3 = 0;
          return 1;
        }
        if (param_2 != 1) {
          return 0;
        }
        *param_3 = 1;
        return 1;
      }
      if (param_1 != 0x16) goto LAB_10005605;
    }
    switch(param_2) {
    case 0:
      *param_3 = 5;
      break;
    case 1:
      *param_3 = 4;
      break;
    case 2:
      *param_3 = 3;
      break;
    case 3:
      *param_3 = 2;
      break;
    case 4:
      *param_3 = 1;
      break;
    case 5:
      *param_3 = 7;
      break;
    default:
      local_8 = 0;
    }
  }
  else {
    if (param_1 == 0x7d1) {
      if (param_2 == 0) {
        *param_3 = 0xf;
        return 1;
      }
      if (param_2 != 1) {
        if (param_2 != 2) {
          return 0;
        }
        *param_3 = 0x13;
        return 1;
      }
      *param_3 = 0xb;
      return 1;
    }
LAB_10005605:
    local_8 = FUN_100154b7(param_1,param_2,param_3);
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_1000563d
 * Address:  1000563d
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 __thiscall FUN_1000563d(void *this,undefined4 param_1,undefined4 param_2,short param_3)

{
  bool bVar1;
  double dVar2;
  float10 fVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 local_1c;
  undefined1 local_10;
  double local_c;
  
  local_10 = 1;
  fVar3 = FUN_100123e8((double)CONCAT44(param_2,param_1),param_3,7);
  local_c = (double)fVar3;
  if (local_c < _DAT_100211b0) {
    local_10 = 0;
  }
  else {
    dVar2 = local_c / _DAT_10021238;
    uVar4 = __ftol();
    if ((uVar4 & 0xff) == 0) {
      *(undefined1 *)((int)this + 0x11b) = 0;
    }
    else {
      local_1c = (undefined1)uVar4;
      *(undefined1 *)((int)this + 0x11b) = local_1c;
      local_c = (dVar2 - (double)((uint)uVar4 & 0xff) * _DAT_10021218 * _DAT_10021218 *
                         _DAT_10021218 * _DAT_10021218) * _DAT_10021238;
    }
    uVar4 = __ftol();
    uVar5 = __ftol();
    bVar1 = _DAT_10021208 <=
            local_c - ((double)(uVar5 & 0xffffffff) * _DAT_10021230 +
                      (double)(uVar4 & 0xffffffff) * _DAT_10021238);
    *(char *)((int)this + 0x117) = (char)uVar4;
    *(char *)((int)this + 0x118) = (char)(uVar4 >> 8);
    *(char *)((int)this + 0x119) = (char)(uVar4 >> 0x10);
    *(char *)((int)this + 0x11a) = (char)(uVar4 >> 0x18);
    *(byte *)((int)this + 0x11c) = (byte)(((uint)uVar5 & 3) << 1) | bVar1;
  }
  return local_10;
}



/* ================================================================
 * Function: FUN_10005805
 * Address:  10005805
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FUN_10005805(void *this,double *param_1,short param_2)

{
  bool bVar1;
  float10 fVar2;
  
  bVar1 = *(int *)((int)this + 0x434) != 0;
  if (bVar1) {
    fVar2 = FUN_100123e8((double)(*(char *)(*(int *)((int)this + 0x434) + 6) != '\0') *
                         _DAT_10021208 +
                         (double)((int)(*(byte *)(*(int *)((int)this + 0x434) + 5) & 6) >> 1) *
                         _DAT_10021230 +
                         ((double)*(byte *)(*(int *)((int)this + 0x434) + 4) * _DAT_10021218 *
                          _DAT_10021218 * _DAT_10021218 * _DAT_10021218 +
                         (double)((((uint)*(byte *)(*(int *)((int)this + 0x434) + 3) * 0x100 +
                                   (uint)*(byte *)(*(int *)((int)this + 0x434) + 2)) * 0x100 +
                                  (uint)*(byte *)(*(int *)((int)this + 0x434) + 1)) * 0x100 +
                                 (uint)**(byte **)((int)this + 0x434))) * _DAT_10021238,7,param_2);
    *param_1 = (double)fVar2;
  }
  else {
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)((int)param_1 + 4) = 0;
  }
  return bVar1;
}



/* ================================================================
 * Function: FUN_10005955
 * Address:  10005955
 * ================================================================ */

char __thiscall FUN_10005955(void *this,undefined2 param_1,undefined1 param_2)

{
  undefined1 local_8;
  
  local_8 = (**(code **)(**(int **)((int)this + 0x40) + 0x18))(0x82,param_1);
  if (local_8 != '\0') {
    local_8 = (**(code **)(**(int **)((int)this + 0x40) + 0x18))(0x84,param_2);
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_100059b4
 * Address:  100059b4
 * ================================================================ */

byte __thiscall FUN_100059b4(void *this,undefined2 param_1,undefined1 param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  
  bVar1 = (**(code **)(*(int *)this + 0x24))(0xfa1,param_1,0);
  bVar2 = (**(code **)(*(int *)this + 0x24))(0xfa2,param_2,0);
  bVar3 = (**(code **)(*(int *)this + 0x14))(0xfa1);
  return bVar1 & bVar2 & bVar3;
}



/* ================================================================
 * Function: FUN_10005a20
 * Address:  10005a20
 * ================================================================ */

undefined4 * __thiscall FUN_10005a20(void *this,uint param_1)

{
  FUN_1000345b(this);
  if ((param_1 & 1) != 0) {
    FUN_1001576a(this);
  }
  return this;
}



/* ================================================================
 * Function: FUN_10005a50
 * Address:  10005a50
 * ================================================================ */

undefined1 FUN_10005a50(void)

{
  return 0;
}



/* ================================================================
 * Function: FUN_10005a60
 * Address:  10005a60
 * ================================================================ */

undefined4 * __fastcall FUN_10005a60(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *local_2c;
  undefined4 *local_28;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002086f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10011fb0(param_1);
  local_8 = 0;
  *param_1 = &PTR_FUN_10021240;
  FUN_10005d9b((int)param_1);
  puVar1 = operator_new(0x11c);
  local_8._0_1_ = 1;
  if (puVar1 == (undefined4 *)0x0) {
    local_28 = (undefined4 *)0x0;
  }
  else {
    local_28 = FUN_10010e10(puVar1);
  }
  local_8._0_1_ = 0;
  param_1[0x10] = local_28;
  if (param_1[0x10] != 0) {
    FUN_100030a0((void *)param_1[0x10],param_1);
  }
  puVar1 = operator_new(0xc);
  local_8._0_1_ = 2;
  if (puVar1 == (undefined4 *)0x0) {
    local_2c = (undefined4 *)0x0;
  }
  else {
    local_2c = FUN_1000f710(puVar1);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  param_1[0x12] = local_2c;
  if (param_1[0x12] != 0) {
    FUN_100030c0((void *)param_1[0x12],param_1);
    *(undefined2 *)(param_1 + 0x13) = 0;
  }
  ExceptionList = local_10;
  return param_1;
}



/* ================================================================
 * Function: FUN_10005b6e
 * Address:  10005b6e
 * ================================================================ */

undefined4 * __thiscall FUN_10005b6e(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *local_2c;
  undefined4 *local_28;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10020898;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10011fb0(this);
  local_8 = 0;
  *(undefined ***)this = &PTR_FUN_10021240;
  FUN_10005d9b((int)this);
  puVar1 = operator_new(0x11c);
  local_8._0_1_ = 1;
  if (puVar1 == (undefined4 *)0x0) {
    local_28 = (undefined4 *)0x0;
  }
  else {
    local_28 = FUN_10010e10(puVar1);
  }
  local_8._0_1_ = 0;
  *(undefined4 **)((int)this + 0x40) = local_28;
  if (*(int *)((int)this + 0x40) != 0) {
    FUN_100030a0(*(void **)((int)this + 0x40),this);
    (**(code **)(**(int **)((int)this + 0x40) + 0x24))(0x7d1,param_1,0);
    (**(code **)(**(int **)((int)this + 0x40) + 0x24))(0x7d4,param_2,0);
    (**(code **)(**(int **)((int)this + 0x40) + 4))();
    (**(code **)(**(int **)((int)this + 0x40) + 0x38))(0x7d3,&DAT_1002325c,0);
  }
  puVar1 = operator_new(0xc);
  local_8._0_1_ = 2;
  if (puVar1 == (undefined4 *)0x0) {
    local_2c = (undefined4 *)0x0;
  }
  else {
    local_2c = FUN_1000f710(puVar1);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  *(undefined4 **)((int)this + 0x48) = local_2c;
  if (*(int *)((int)this + 0x48) != 0) {
    FUN_100030c0(*(void **)((int)this + 0x48),this);
    *(undefined2 *)((int)this + 0x4c) = 0;
  }
  ExceptionList = local_10;
  return this;
}



/* ================================================================
 * Function: FUN_10005ce4
 * Address:  10005ce4
 * ================================================================ */

void __fastcall FUN_10005ce4(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_100208ab;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_10021240;
  local_8 = 0;
  if ((param_1[0x10] != 0) && ((undefined4 *)param_1[0x10] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[0x10])(1);
  }
  if ((param_1[0x12] != 0) && ((undefined4 *)param_1[0x12] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[0x12])(1);
  }
  local_8 = 0xffffffff;
  FUN_100123d4(param_1);
  ExceptionList = local_10;
  return;
}



/* ================================================================
 * Function: FUN_10005d9b
 * Address:  10005d9b
 * ================================================================ */

void __fastcall FUN_10005d9b(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 1;
  *(undefined1 *)(param_1 + 0x44) = 1;
  *(undefined4 *)(param_1 + 0x270) = 0;
  *(undefined4 *)(param_1 + 0x274) = 0x40590000;
  *(undefined2 *)(param_1 + 0x278) = 7;
  *(undefined4 *)(param_1 + 0x3b0) = 0;
  *(undefined4 *)(param_1 + 0x3b4) = 0x408f4000;
  *(undefined2 *)(param_1 + 0x3b8) = 2;
  *(undefined4 *)(param_1 + 0x280) = 0;
  *(undefined4 *)(param_1 + 0x284) = 0x40590000;
  *(undefined2 *)(param_1 + 0x288) = 7;
  *(undefined2 *)(param_1 + 0x3ba) = 1;
  *(undefined4 *)(param_1 + 0x250) = 0;
  *(undefined4 *)(param_1 + 0x254) = 0x408f4000;
  *(undefined2 *)(param_1 + 0x24e) = 0;
  *(undefined4 *)(param_1 + 0x3e0) = 0;
  *(undefined4 *)(param_1 + 0x3e4) = 0;
  *(undefined4 *)(param_1 + 0x3c0) = 0;
  *(undefined4 *)(param_1 + 0x3c4) = 0;
  *(undefined2 *)(param_1 + 1000) = 1;
  *(undefined2 *)(param_1 + 0x3c8) = 1;
  *(undefined4 *)(param_1 + 0x3f0) = 0;
  *(undefined4 *)(param_1 + 0x3f4) = 0x40340000;
  *(undefined4 *)(param_1 + 0x3d0) = 0;
  *(undefined4 *)(param_1 + 0x3d4) = 0x40340000;
  *(undefined2 *)(param_1 + 0x3f8) = 1;
  *(undefined2 *)(param_1 + 0x3d8) = 1;
  *(undefined2 *)(param_1 + 0x3fa) = 1;
  *(undefined2 *)(param_1 + 0x3da) = 1;
  *(undefined4 *)(param_1 + 0x410) = 0;
  *(undefined4 *)(param_1 + 0x414) = 0;
  *(undefined4 *)(param_1 + 0x400) = 0;
  *(undefined4 *)(param_1 + 0x404) = 0;
  *(undefined2 *)(param_1 + 0x418) = 7;
  *(undefined2 *)(param_1 + 0x408) = 7;
  *(undefined2 *)(param_1 + 0x41a) = 0;
  *(undefined4 *)(param_1 + 0x420) = 0;
  *(undefined4 *)(param_1 + 0x424) = 0x3ff80000;
  *(undefined2 *)(param_1 + 0x2ca) = 2;
  return;
}



/* ================================================================
 * Function: FUN_10005f68
 * Address:  10005f68
 * ================================================================ */

undefined1 __fastcall FUN_10005f68(void *param_1)

{
  int local_14;
  undefined1 local_10;
  undefined1 uStack_f;
  undefined1 local_8;
  
  local_10 = 0x46;
  uStack_f = 0x39;
  local_14 = 2;
  local_8 = FUN_10006062(param_1,(int)&local_10,&local_14,0);
  FUN_10005d9b((int)param_1);
  return local_8;
}



/* ================================================================
 * Function: FUN_10005fbe
 * Address:  10005fbe
 * ================================================================ */

undefined1 __fastcall FUN_10005fbe(void *param_1)

{
  undefined1 uVar1;
  int local_10c;
  uint local_108 [65];
  
  local_10c = 4;
  FUN_10015cc0(local_108,(uint *)&DAT_10023264);
  uVar1 = FUN_10006062(param_1,(int)local_108,&local_10c,0);
  return uVar1;
}



/* ================================================================
 * Function: FUN_10006010
 * Address:  10006010
 * ================================================================ */

undefined1 __fastcall FUN_10006010(void *param_1)

{
  undefined1 uVar1;
  int local_10c;
  uint local_108 [65];
  
  local_10c = 4;
  FUN_10015cc0(local_108,(uint *)&DAT_1002326c);
  uVar1 = FUN_10006062(param_1,(int)local_108,&local_10c,0);
  return uVar1;
}



/* ================================================================
 * Function: FUN_10006062
 * Address:  10006062
 * ================================================================ */

undefined1 __thiscall FUN_10006062(void *this,int param_1,int *param_2,DWORD param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = *param_2;
  *(undefined1 *)(param_1 + iVar2) = 0xd;
  iVar2 = iVar2 + 1;
  *(undefined1 *)(param_1 + iVar2) = 0;
  uVar1 = (**(code **)(**(int **)((int)this + 0x40) + 0x10))(param_1,iVar2);
  if (param_3 != 0) {
    FUN_10001145(param_3);
  }
  *param_2 = 0;
  return uVar1;
}



/* ================================================================
 * Function: FUN_100060cb
 * Address:  100060cb
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_100060cb(undefined4 param_1,undefined4 param_2,short param_3)

{
  float10 fVar1;
  undefined2 local_8;
  
  fVar1 = FUN_100123e8((double)CONCAT44(param_2,param_1),param_3,7);
  if (_DAT_10021298 <= (double)fVar1) {
    if (_DAT_10021290 <= (double)fVar1) {
      local_8 = 3;
    }
    else {
      local_8 = 2;
    }
  }
  else {
    local_8 = 1;
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_1000612e
 * Address:  1000612e
 * ================================================================ */

bool __fastcall FUN_1000612e(int param_1)

{
  short sVar1;
  short sVar2;
  
  sVar1 = FUN_100060cb(*(undefined4 *)(param_1 + 0x270),*(undefined4 *)(param_1 + 0x274),
                       *(short *)(param_1 + 0x278));
  sVar2 = FUN_100060cb(*(undefined4 *)(param_1 + 0x3b0),*(undefined4 *)(param_1 + 0x3b4),
                       *(short *)(param_1 + 0x3b8));
  return sVar1 != sVar2;
}



/* ================================================================
 * Function: FUN_1000619a
 * Address:  1000619a
 * ================================================================ */

void __fastcall FUN_1000619a(int param_1)

{
  bool bVar1;
  
  bVar1 = FUN_1000612e(param_1);
  if (bVar1) {
    FUN_10001145(8000);
  }
  *(undefined4 *)(param_1 + 0x3b0) = *(undefined4 *)(param_1 + 0x270);
  *(undefined4 *)(param_1 + 0x3b4) = *(undefined4 *)(param_1 + 0x274);
  *(undefined2 *)(param_1 + 0x3b8) = *(undefined2 *)(param_1 + 0x278);
  return;
}



/* ================================================================
 * Function: FUN_100061f0
 * Address:  100061f0
 * ================================================================ */

char __thiscall FUN_100061f0(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_10c;
  char local_108;
  undefined1 local_104 [256];
  
  local_108 = '\x01';
  local_10c = 0;
  if (((param_1 == 0x15) || (param_1 == 0x17)) || (param_1 == 0x19)) {
    local_104[0] = 0x57;
    local_10c = 1;
    iVar1 = FUN_10015db0(local_104 + 1,&DAT_10023274);
    local_10c = local_10c + iVar1;
    uVar2 = FUN_10006bac(*(short *)((int)this + 0x278));
    local_104[local_10c] = (char)uVar2;
    local_10c = local_10c + 1;
    local_108 = FUN_10006062(this,(int)local_104,&local_10c,0);
    FUN_1000619a((int)this);
  }
  if ((local_108 != '\0') && (((param_1 == 0x16 || (param_1 == 0x17)) || (param_1 == 0x19)))) {
    local_104[local_10c] = 0x44;
    iVar1 = local_10c + 1;
    local_10c = local_10c + 1;
    iVar1 = FUN_10015db0(local_104 + iVar1,&DAT_10023278);
    local_10c = local_10c + iVar1;
    uVar2 = FUN_10006bac(*(short *)((int)this + 0x288));
    local_104[local_10c] = (char)uVar2;
    local_10c = local_10c + 1;
    local_108 = FUN_10006062(this,(int)local_104,&local_10c,0);
  }
  if ((local_108 != '\0') && (((param_1 == 0x18 || (param_1 == 0x17)) || (param_1 == 0x19)))) {
    local_104[local_10c] = 0x46;
    local_104[local_10c + 1] = 0x32;
    local_104[local_10c + 2] = 0x31;
    if (*(short *)((int)this + 0x3ba) == 0) {
      local_104[local_10c + 3] = 0x35;
    }
    else {
      local_104[local_10c + 3] = 0x34;
    }
    local_10c = local_10c + 4;
    local_108 = FUN_10006062(this,(int)local_104,&local_10c,0x9c4);
  }
  if ((local_108 != '\0') && ((param_1 == 0x3f0 || (param_1 == 0x19)))) {
    local_104[local_10c] = 0x46;
    local_104[local_10c + 1] = 0x31;
    local_104[local_10c + 2] = 0x35;
    local_10c = local_10c + 3;
    local_108 = FUN_10006062(this,(int)local_104,&local_10c,0x9c4);
    if (local_108 != '\0') {
      local_104[local_10c] = 0x31;
      local_10c = local_10c + 1;
      local_108 = FUN_10006062(this,(int)local_104,&local_10c,0);
      if (local_108 != '\0') {
        iVar1 = FUN_10015db0(local_104 + local_10c,&DAT_1002327c);
        local_10c = local_10c + iVar1;
        uVar2 = FUN_10006bac(*(short *)((int)this + 0x3d8));
        local_104[local_10c] = (char)uVar2;
        local_10c = local_10c + 1;
        local_108 = FUN_10006062(this,(int)local_104,&local_10c,0x9c4);
      }
      if ((local_108 != '\0') &&
         (local_108 = FUN_10006062(this,(int)local_104,&local_10c,0),
         *(short *)((int)this + 0x3fa) == 1)) {
        local_108 = FUN_10006062(this,(int)local_104,&local_10c,1000);
      }
    }
  }
  if ((local_108 != '\0') && ((param_1 == 0x3ef || (param_1 == 0x19)))) {
    local_104[local_10c] = 0x46;
    local_104[local_10c + 1] = 0x32;
    local_104[local_10c + 2] = 0x30;
    local_104[local_10c + 3] = 0x37;
    local_10c = local_10c + 4;
    local_108 = FUN_10006062(this,(int)local_104,&local_10c,0);
    local_104[local_10c] = 0x4f;
    iVar1 = local_10c + 1;
    local_10c = local_10c + 1;
    iVar1 = FUN_10015db0(local_104 + iVar1,&DAT_10023280);
    local_10c = local_10c + iVar1;
    uVar2 = FUN_10006bac(*(short *)((int)this + 0x3c8));
    local_104[local_10c] = (char)uVar2;
    local_10c = local_10c + 1;
    local_108 = FUN_10006062(this,(int)local_104,&local_10c,0);
  }
  if ((local_108 != '\0') && ((param_1 == 0x3f2 || (param_1 == 0x19)))) {
    local_104[local_10c] = 0x46;
    local_104[local_10c + 1] = 0x31;
    local_104[local_10c + 2] = 0x35;
    local_10c = local_10c + 3;
    local_108 = FUN_10006062(this,(int)local_104,&local_10c,0x9c4);
    if (local_108 != '\0') {
      local_108 = FUN_10006062(this,(int)local_104,&local_10c,0);
      if (*(short *)((int)this + 0x3da) == 1) {
        local_108 = FUN_10006062(this,(int)local_104,&local_10c,1000);
      }
      local_104[local_10c] = 0x31;
      local_10c = local_10c + 1;
      local_108 = FUN_10006062(this,(int)local_104,&local_10c,0);
      if (local_108 != '\0') {
        iVar1 = FUN_10015db0(local_104 + local_10c,&DAT_10023284);
        local_10c = local_10c + iVar1;
        uVar2 = FUN_10006bac(*(short *)((int)this + 0x3f8));
        local_104[local_10c] = (char)uVar2;
        local_10c = local_10c + 1;
        local_108 = FUN_10006062(this,(int)local_104,&local_10c,0x9c4);
      }
    }
  }
  if ((local_108 != '\0') && ((param_1 == 0x3f1 || (param_1 == 0x19)))) {
    local_104[local_10c] = 0x46;
    local_104[local_10c + 1] = 0x32;
    local_104[local_10c + 2] = 0x31;
    local_104[local_10c + 3] = 0x31;
    local_10c = local_10c + 4;
    local_108 = FUN_10006062(this,(int)local_104,&local_10c,500);
    local_104[local_10c] = 0x46;
    local_104[local_10c + 1] = 0x31;
    local_104[local_10c + 2] = 0x36;
    local_10c = local_10c + 3;
    local_108 = FUN_10006062(this,(int)local_104,&local_10c,0);
    if (local_108 != '\0') {
      iVar1 = FUN_10015db0(local_104 + local_10c,&DAT_10023288);
      local_10c = local_10c + iVar1;
      uVar2 = FUN_10006bac(*(short *)((int)this + 1000));
      local_104[local_10c] = (char)uVar2;
      local_10c = local_10c + 1;
      local_108 = FUN_10006062(this,(int)local_104,&local_10c,0);
    }
  }
  return local_108;
}



/* ================================================================
 * Function: FUN_10006bac
 * Address:  10006bac
 * ================================================================ */

undefined4 FUN_10006bac(short param_1)

{
  undefined1 local_8;
  
  local_8 = 0;
  if (param_1 == 1) {
    local_8 = 0x55;
  }
  else if (param_1 == 2) {
    local_8 = 0x4d;
  }
  else if (param_1 == 7) {
    local_8 = 0x4e;
  }
  return CONCAT31((int3)(char)((ushort)param_1 >> 8),local_8);
}



/* ================================================================
 * Function: FUN_10006bea
 * Address:  10006bea
 * ================================================================ */

undefined4 __thiscall FUN_10006bea(void *this,int param_1)

{
  undefined3 uVar1;
  int iVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int local_10c;
  char local_108;
  undefined1 local_104 [256];
  
  local_108 = '\x01';
  local_10c = 0;
  uVar1 = 0;
  if (((param_1 == 0xc) || (param_1 == 0x11)) && (*(short *)((int)this + 0x24e) != 1)) {
    local_104[0] = 0x46;
    local_104[1] = 0x32;
    local_10c = 2;
    local_108 = FUN_10006062(this,(int)local_104,&local_10c,0);
    uVar1 = 0;
    if (local_108 != '\0') {
      __ftol();
      iVar2 = FUN_10015db0(local_104 + local_10c,&DAT_1002328c);
      local_10c = local_10c + iVar2;
      local_108 = FUN_10006062(this,(int)local_104,&local_10c,0);
      uVar1 = extraout_var;
    }
  }
  if ((local_108 != '\0') && ((param_1 == 0xb || (param_1 == 0x11)))) {
    local_104[local_10c] = 0x46;
    local_104[local_10c + 1] = 0x32;
    local_104[local_10c + 2] = 0x30;
    if (*(short *)((int)this + 0x24e) == 1) {
      local_104[local_10c + 3] = 0x33;
    }
    else {
      local_104[local_10c + 3] = 0x32;
    }
    local_10c = local_10c + 4;
    local_108 = FUN_10006062(this,(int)local_104,&local_10c,0);
    uVar1 = extraout_var_00;
  }
  return CONCAT31(uVar1,local_108);
}



/* ================================================================
 * Function: FUN_10006df5
 * Address:  10006df5
 * ================================================================ */

char __thiscall FUN_10006df5(void *this,int param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  short local_110;
  size_t local_10c;
  undefined1 local_108 [256];
  char local_8;
  
  local_10c = 0;
  if (param_1 < 0x3ec) {
    if (param_1 == 0x3eb) {
      local_108[0] = 0x46;
      local_108[1] = 0x31;
      local_108[2] = 0x30;
      local_108[3] = 0x30;
      local_10c = 4;
      cVar1 = FUN_10006062(this,(int)local_108,(int *)&local_10c,0);
      return cVar1;
    }
    if (param_1 < 0x66) {
      if (param_1 == 0x65) {
        if (*(short *)((int)this + 0x2cc) == 2) {
          local_8 = FUN_100128fb((int)this);
        }
        else {
          local_8 = FUN_100126a8((int)this);
        }
        if (local_8 == '\0') {
          return '\0';
        }
        if (*(int *)((int)this + 0x374) == 0) {
          return local_8;
        }
        for (local_110 = 0; local_110 < *(short *)((int)this + 0x2ce); local_110 = local_110 + 1) {
          uVar2 = FUN_100060cb(*(undefined4 *)(*(int *)((int)this + 0x368) + local_110 * 8),
                               *(undefined4 *)(*(int *)((int)this + 0x368) + 4 + local_110 * 8),
                               *(short *)((int)this + 0x370));
          *(undefined2 *)(*(int *)((int)this + 0x374) + local_110 * 2) = uVar2;
        }
        return local_8;
      }
      switch(param_1) {
      case 0xb:
      case 0xc:
      case 0x11:
        cVar1 = (**(code **)(*(int *)this + 0x1c))(param_1);
        return cVar1;
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x19:
switchD_10006e77_caseD_15:
        cVar1 = (**(code **)(*(int *)this + 0x18))(param_1);
        return cVar1;
      }
    }
    else {
      if (param_1 == 0x66) {
        cVar1 = (**(code **)(*(int *)this + 0x4c))();
        return cVar1;
      }
      if (param_1 == 0x3e9) {
        local_108[0] = 0x46;
        local_108[1] = 0x31;
        local_108[2] = 0x32;
        local_10c = 3;
        local_8 = FUN_10006062(this,(int)local_108,(int *)&local_10c,0);
        if (local_8 != '\0') {
          iVar4 = FUN_10015db0(local_108 + local_10c,&DAT_1002329c);
          local_10c = local_10c + iVar4;
          local_8 = FUN_10006062(this,(int)local_108,(int *)&local_10c,0);
        }
        FUN_10001145(3000);
        return local_8;
      }
      if (param_1 == 0x3ea) {
        local_108[0] = 0x46;
        local_108[1] = 0x31;
        local_108[2] = 0x30;
        local_108[3] = 0x31;
        local_10c = 4;
        cVar1 = FUN_10006062(this,(int)local_108,(int *)&local_10c,0);
        return cVar1;
      }
    }
  }
  else if (param_1 < 0x3f3) {
    if (0x3ee < param_1) goto switchD_10006e77_caseD_15;
    if (param_1 == 0x3ec) {
      local_108[0] = 0x46;
      local_108[1] = 0x31;
      local_108[2] = 0x30;
      local_108[3] = 0x35;
      local_10c = 4;
      cVar1 = FUN_10006062(this,(int)local_108,(int *)&local_10c,0);
      return cVar1;
    }
    if (param_1 == 0x3ed) {
      local_108[0] = 0x46;
      local_108[1] = 0x31;
      local_108[2] = 0x30;
      local_108[3] = 0x32;
      local_10c = 4;
      cVar1 = FUN_10006062(this,(int)local_108,(int *)&local_10c,0);
      return cVar1;
    }
    if (param_1 == 0x3ee) {
      local_108[0] = 0x46;
      local_108[1] = 0x31;
      local_108[2] = 0x30;
      local_108[3] = 0x33;
      local_10c = 4;
      cVar1 = FUN_10006062(this,(int)local_108,(int *)&local_10c,0);
      return cVar1;
    }
  }
  else {
    if (param_1 == 0x3f3) {
      local_108[0] = 0x46;
      local_108[1] = 0x31;
      local_10c = 2;
      local_8 = FUN_10006062(this,(int)local_108,(int *)&local_10c,0);
      if (local_8 == '\0') {
        return '\0';
      }
      iVar4 = FUN_10015db0(local_108 + local_10c,&DAT_10023290);
      local_10c = local_10c + iVar4;
      uVar3 = FUN_10006bac(*(short *)((int)this + 0x408));
      local_108[local_10c] = (char)uVar3;
      local_10c = local_10c + 1;
      local_8 = FUN_10006062(this,(int)local_108,(int *)&local_10c,0);
      if (local_8 == '\0') {
        return '\0';
      }
      iVar4 = FUN_10015db0(local_108 + local_10c,&DAT_10023294);
      local_10c = local_10c + iVar4;
      uVar3 = FUN_10006bac(*(short *)((int)this + 0x418));
      local_108[local_10c] = (char)uVar3;
      local_10c = local_10c + 1;
      local_8 = FUN_10006062(this,(int)local_108,(int *)&local_10c,0);
      if (local_8 == '\0') {
        return '\0';
      }
      iVar4 = FUN_10015db0(local_108 + local_10c,&DAT_10023298);
      local_10c = local_10c + iVar4;
      cVar1 = FUN_10006062(this,(int)local_108,(int *)&local_10c,0);
      return cVar1;
    }
    if (param_1 == 0xfa1) {
      local_10c = _strlen((char *)((int)this + 0x4e));
      cVar1 = FUN_10006062(this,(int)this + 0x4e,(int *)&local_10c,0);
      return cVar1;
    }
  }
  cVar1 = FUN_10013381(this,param_1);
  return cVar1;
}



/* ================================================================
 * Function: FUN_10007677
 * Address:  10007677
 * ================================================================ */

char __thiscall
FUN_10007677(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int local_10c;
  undefined1 local_108 [256];
  char local_8;
  
  local_108[0] = 0x57;
  local_10c = 1;
  iVar1 = FUN_10015db0(local_108 + 1,&DAT_100232a0);
  local_10c = local_10c + iVar1;
  uVar2 = FUN_10006bac(*(short *)((int)this + 0x370));
  local_108[local_10c] = (char)uVar2;
  local_10c = local_10c + 1;
  local_8 = FUN_10006062(this,(int)local_108,&local_10c,0);
  if (local_8 != '\0') {
    *(undefined4 *)((int)this + 0x270) = param_1;
    *(undefined4 *)((int)this + 0x274) = param_2;
    *(undefined2 *)((int)this + 0x278) = *(undefined2 *)((int)this + 0x370);
    FUN_1000619a((int)this);
    local_108[local_10c] = 0x44;
    iVar1 = local_10c + 1;
    local_10c = local_10c + 1;
    iVar1 = FUN_10015db0(local_108 + iVar1,&DAT_100232a4);
    local_10c = local_10c + iVar1;
    uVar2 = FUN_10006bac(*(short *)((int)this + 0x370));
    local_108[local_10c] = (char)uVar2;
    local_10c = local_10c + 1;
    local_8 = FUN_10006062(this,(int)local_108,&local_10c,0);
    if (local_8 != '\0') {
      *(undefined4 *)((int)this + 0x280) = param_3;
      *(undefined4 *)((int)this + 0x284) = param_4;
      *(undefined2 *)((int)this + 0x288) = *(undefined2 *)((int)this + 0x370);
    }
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_10007852
 * Address:  10007852
 * ================================================================ */

char __fastcall FUN_10007852(int *param_1)

{
  int local_110;
  uint local_10c;
  uint local_106 [62];
  char local_c;
  short local_8;
  
  local_110 = 0;
  FUN_10015cc0(&local_10c,(uint *)&DAT_100232a8);
  FUN_10015cc0(local_106,(uint *)&DAT_100232b0);
  local_110 = 4;
  local_c = FUN_10006062(param_1,(int)&local_10c,&local_110,0);
  local_8 = 0;
  while ((local_8 < *(short *)((int)param_1 + 0x2ce) && (local_c != '\0'))) {
    local_c = (**(code **)(*param_1 + 0x48))
                        (*(undefined4 *)(param_1[0xda] + local_8 * 8),
                         *(undefined4 *)(param_1[0xda] + 4 + local_8 * 8),
                         *(undefined4 *)(param_1[0xd9] + local_8 * 8),
                         *(undefined4 *)(param_1[0xd9] + 4 + local_8 * 8));
    if (local_c != '\0') {
      local_110 = 4;
      local_c = FUN_10006062(param_1,(int)local_106,&local_110,0);
    }
    local_8 = local_8 + 1;
  }
  return local_c;
}



/* ================================================================
 * Function: FUN_10007972
 * Address:  10007972
 * ================================================================ */

undefined1 __thiscall FUN_10007972(void *this,short param_1,undefined4 param_2,undefined2 param_3)

{
  undefined1 local_8;
  
  local_8 = 1;
  switch(param_1) {
  case 0x3ea:
    *(undefined2 *)((int)this + 0x3ba) = (undefined2)param_2;
    break;
  default:
    local_8 = FUN_10013499(this,param_1,param_2,param_3);
    break;
  case 0x3ec:
    *(undefined2 *)((int)this + 0x3c8) = (undefined2)param_2;
    break;
  case 0x3ee:
    *(undefined2 *)((int)this + 0x3d8) = (undefined2)param_2;
    break;
  case 0x3f0:
    *(undefined2 *)((int)this + 1000) = (undefined2)param_2;
    break;
  case 0x3f2:
    *(undefined2 *)((int)this + 0x3f8) = (undefined2)param_2;
    break;
  case 0x3f3:
    *(undefined2 *)((int)this + 0x3fa) = (undefined2)param_2;
    break;
  case 0x3f4:
    *(undefined2 *)((int)this + 0x3da) = (undefined2)param_2;
    break;
  case 0x3f6:
    *(undefined2 *)((int)this + 0x408) = (undefined2)param_2;
    break;
  case 0x3f8:
    *(undefined2 *)((int)this + 0x418) = (undefined2)param_2;
    break;
  case 0x3f9:
    *(undefined2 *)((int)this + 0x41a) = (undefined2)param_2;
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_10007ab1
 * Address:  10007ab1
 * ================================================================ */

undefined1 __thiscall FUN_10007ab1(void *this,short param_1,int *param_2,undefined2 param_3)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  undefined1 local_8;
  
  local_8 = 1;
  iVar3 = (int)param_1;
  if (iVar3 < 0xbbb) {
    if (iVar3 == 0xbba) {
      if (*(short *)((int)this + 0x3a0) != 0xd0) {
        if (*(short *)((int)this + 0x3a0) == 1) {
          *param_2 = *(int *)((int)this + 0x3a4);
          return 1;
        }
        *param_2 = 0;
        return 1;
      }
      bVar1 = FUN_1000612e((int)this);
      if (bVar1) {
        *param_2 = 0x3e9;
        return 1;
      }
      *param_2 = 0;
      return 1;
    }
    switch(iVar3) {
    case 0x3ea:
      *param_2 = (int)*(short *)((int)this + 0x3ba);
      break;
    default:
      goto switchD_10007af4_caseD_3eb;
    case 0x3ec:
      *param_2 = (int)*(short *)((int)this + 0x3c8);
      break;
    case 0x3ee:
      *param_2 = (int)*(short *)((int)this + 0x3d8);
      break;
    case 0x3f0:
      *param_2 = (int)*(short *)((int)this + 1000);
      break;
    case 0x3f2:
      *param_2 = (int)*(short *)((int)this + 0x3f8);
      break;
    case 0x3f3:
      *param_2 = (int)*(short *)((int)this + 0x3fa);
      break;
    case 0x3f4:
      *param_2 = (int)*(short *)((int)this + 0x3da);
      break;
    case 0x3f6:
      *param_2 = (int)*(short *)((int)this + 0x408);
      break;
    case 0x3f8:
      *param_2 = (int)*(short *)((int)this + 0x418);
      break;
    case 0x3f9:
      *param_2 = (int)*(short *)((int)this + 0x41a);
      break;
    case 0x3fa:
      sVar2 = FUN_100060cb(*(undefined4 *)((int)this + 0x270),*(undefined4 *)((int)this + 0x274),
                           *(short *)((int)this + 0x278));
      *param_2 = (int)sVar2;
    }
  }
  else {
switchD_10007af4_caseD_3eb:
    local_8 = FUN_10013a70(this,param_1,param_2,param_3);
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_10007cbd
 * Address:  10007cbd
 * ================================================================ */

undefined1 __thiscall
FUN_10007cbd(void *this,short param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4)

{
  undefined1 local_8;
  
  local_8 = 1;
  switch(param_1) {
  case 0x3e9:
    *(undefined4 *)((int)this + 0x420) = param_2;
    *(undefined4 *)((int)this + 0x424) = param_3;
    break;
  default:
    local_8 = FUN_10013f8f(this,param_1,(double)CONCAT44(param_3,param_2),param_4);
    break;
  case 0x3eb:
    *(undefined4 *)((int)this + 0x3c0) = param_2;
    *(undefined4 *)((int)this + 0x3c4) = param_3;
    break;
  case 0x3ed:
    *(undefined4 *)((int)this + 0x3d0) = param_2;
    *(undefined4 *)((int)this + 0x3d4) = param_3;
    break;
  case 0x3ef:
    *(undefined4 *)((int)this + 0x3e0) = param_2;
    *(undefined4 *)((int)this + 0x3e4) = param_3;
    break;
  case 0x3f1:
    *(undefined4 *)((int)this + 0x3f0) = param_2;
    *(undefined4 *)((int)this + 0x3f4) = param_3;
    break;
  case 0x3f5:
    *(undefined4 *)((int)this + 0x400) = param_2;
    *(undefined4 *)((int)this + 0x404) = param_3;
    break;
  case 0x3f7:
    *(undefined4 *)((int)this + 0x410) = param_2;
    *(undefined4 *)((int)this + 0x414) = param_3;
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_10007df5
 * Address:  10007df5
 * ================================================================ */

undefined1 __thiscall FUN_10007df5(void *this,short param_1,undefined4 *param_2,undefined2 param_3)

{
  undefined1 local_8;
  
  local_8 = 1;
  switch(param_1) {
  case 0x3e9:
    *param_2 = *(undefined4 *)((int)this + 0x420);
    param_2[1] = *(undefined4 *)((int)this + 0x424);
    break;
  default:
    local_8 = FUN_100143fc(this,param_1,param_2,param_3);
    break;
  case 0x3eb:
    *param_2 = *(undefined4 *)((int)this + 0x3c0);
    param_2[1] = *(undefined4 *)((int)this + 0x3c4);
    break;
  case 0x3ed:
    *param_2 = *(undefined4 *)((int)this + 0x3d0);
    param_2[1] = *(undefined4 *)((int)this + 0x3d4);
    break;
  case 0x3ef:
    *param_2 = *(undefined4 *)((int)this + 0x3e0);
    param_2[1] = *(undefined4 *)((int)this + 0x3e4);
    break;
  case 0x3f1:
    *param_2 = *(undefined4 *)((int)this + 0x3f0);
    param_2[1] = *(undefined4 *)((int)this + 0x3f4);
    break;
  case 0x3f5:
    *param_2 = *(undefined4 *)((int)this + 0x400);
    param_2[1] = *(undefined4 *)((int)this + 0x404);
    break;
  case 0x3f7:
    *param_2 = *(undefined4 *)((int)this + 0x410);
    param_2[1] = *(undefined4 *)((int)this + 0x414);
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_10007f37
 * Address:  10007f37
 * ================================================================ */

undefined1 __thiscall FUN_10007f37(void *this,short param_1,undefined4 *param_2,undefined2 param_3)

{
  undefined1 uVar1;
  
  uVar1 = FUN_10014827(this,param_1,param_2,param_3);
  return uVar1;
}



/* ================================================================
 * Function: FUN_10007f62
 * Address:  10007f62
 * ================================================================ */

undefined1 __thiscall FUN_10007f62(void *this,short param_1,char *param_2,short param_3)

{
  undefined1 uVar1;
  
  uVar1 = FUN_100148f3(this,param_1,param_2,param_3);
  return uVar1;
}



/* ================================================================
 * Function: FUN_10007f8d
 * Address:  10007f8d
 * ================================================================ */

undefined1 __thiscall FUN_10007f8d(void *this,int param_1,int *param_2)

{
  undefined1 uVar1;
  uint local_10;
  short local_c;
  undefined1 local_8;
  
  local_8 = 1;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 2;
  if (param_1 < 0x3eb) {
    if (param_1 == 0x3ea) {
      *param_2 = 1;
      param_2[1] = 1;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0x3ff00000;
      param_2[10] = 0;
      param_2[0xb] = 0;
      *(double *)(param_2 + 8) = (double)(int)*(short *)((int)this + 0x3ba);
      return 1;
    }
    if (param_1 < 0x6b) {
      if (param_1 == 0x6a) {
        *param_2 = 1;
        param_2[1] = 4;
        param_2[2] = 0;
        param_2[3] = 0x40100000;
        param_2[4] = 0;
        param_2[5] = 0x419312d0;
        param_2[6] = 0;
        param_2[7] = 0x40c38800;
        param_2[10] = 0;
        param_2[0xb] = 0x3ff00000;
        param_2[8] = *(int *)((int)this + 0x300);
        param_2[9] = *(int *)((int)this + 0x304);
        return 1;
      }
      switch(param_1) {
      case 0xb:
        *param_2 = 1;
        param_2[1] = 1;
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[4] = 0;
        param_2[5] = 0;
        param_2[6] = 0;
        param_2[7] = 0;
        param_2[10] = 0;
        param_2[0xb] = 0;
        *(double *)(param_2 + 8) = (double)(int)*(short *)((int)this + 0x24e);
        return 1;
      case 0xc:
        *param_2 = 1;
        param_2[1] = 4;
        param_2[2] = 0;
        param_2[3] = 0x40000000;
        param_2[4] = 0;
        param_2[5] = 0x40c38780;
        param_2[6] = 0;
        param_2[7] = 0x408f4000;
        param_2[10] = 0;
        param_2[0xb] = 0x3ff00000;
        param_2[8] = *(int *)((int)this + 0x250);
        param_2[9] = *(int *)((int)this + 0x254);
        return 1;
      case 0x15:
        *param_2 = 1;
        param_2[1] = 4;
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[4] = 0;
        param_2[5] = 0x40f86a00;
        param_2[6] = 0;
        param_2[7] = 0x40590000;
        param_2[10] = 0;
        param_2[0xb] = 0x3ff00000;
        param_2[8] = *(int *)((int)this + 0x270);
        param_2[9] = *(int *)((int)this + 0x274);
        return 1;
      case 0x16:
        *param_2 = 3;
        param_2[1] = 9;
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[4] = 0;
        param_2[5] = 0;
        param_2[6] = 0;
        param_2[7] = 0x401c0000;
        param_2[10] = 0;
        param_2[0xb] = 0;
        *(double *)(param_2 + 8) = (double)(int)*(short *)((int)this + 0x278);
        return 1;
      case 0x17:
        *param_2 = 1;
        param_2[1] = 4;
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[4] = 0;
        param_2[5] = 0x40f86a00;
        param_2[6] = 0;
        param_2[7] = 0x40590000;
        param_2[10] = 0;
        param_2[0xb] = 0x3ff00000;
        param_2[8] = *(int *)((int)this + 0x280);
        param_2[9] = *(int *)((int)this + 0x284);
        return 1;
      case 0x18:
        *param_2 = 3;
        param_2[1] = 9;
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[4] = 0;
        param_2[5] = 0;
        param_2[6] = 0;
        param_2[7] = 0x401c0000;
        param_2[10] = 0;
        param_2[0xb] = 0;
        *(double *)(param_2 + 8) = (double)(int)*(short *)((int)this + 0x288);
        return 1;
      case 0x68:
        *param_2 = 1;
        param_2[1] = 4;
        param_2[2] = 0;
        param_2[3] = 0x40100000;
        param_2[4] = 0;
        param_2[5] = 0x419312d0;
        param_2[6] = 0;
        param_2[7] = 0x40c38800;
        param_2[10] = 0;
        param_2[0xb] = 0x3ff00000;
        param_2[8] = *(int *)((int)this + 0x2f0);
        param_2[9] = *(int *)((int)this + 0x2f4);
        return 1;
      case 0x69:
        *param_2 = 3;
        param_2[1] = 9;
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[4] = 0;
        param_2[5] = 0;
        param_2[6] = 0;
        param_2[7] = 0x401c0000;
        param_2[10] = 0;
        param_2[0xb] = 0;
        *(double *)(param_2 + 8) = (double)(int)*(short *)((int)this + 0x2f8);
        return 1;
      }
    }
    else if (param_1 < 0x3ea) {
      if (param_1 == 0x3e9) {
        *param_2 = 1;
        param_2[1] = 4;
        param_2[2] = 0;
        param_2[3] = 0x3fe00000;
        param_2[4] = 0;
        param_2[5] = 0x40080000;
        param_2[6] = 0;
        param_2[7] = 0x3ff80000;
        param_2[10] = 0;
        param_2[0xb] = 0x3fe00000;
        param_2[8] = 0;
        param_2[9] = 0;
        return 1;
      }
      switch(param_1) {
      case 0x6b:
        *param_2 = 3;
        param_2[1] = 9;
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[4] = 0;
        param_2[5] = 0;
        param_2[6] = 0;
        param_2[7] = 0x401c0000;
        param_2[10] = 0;
        param_2[0xb] = 0;
        *(double *)(param_2 + 8) = (double)(int)*(short *)((int)this + 0x308);
        return 1;
      case 0x6c:
        *param_2 = 1;
        param_2[1] = 4;
        param_2[2] = 0;
        param_2[3] = 0x40350000;
        param_2[4] = 0;
        param_2[5] = 0x419312d0;
        param_2[6] = 0;
        param_2[7] = 0x40350000;
        param_2[10] = 0;
        param_2[0xb] = 0x3ff00000;
        param_2[8] = *(int *)((int)this + 0x2d0);
        param_2[9] = *(int *)((int)this + 0x2d4);
        return 1;
      case 0x6d:
        *param_2 = 3;
        param_2[1] = 9;
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[4] = 0;
        param_2[5] = 0;
        param_2[6] = 0;
        param_2[7] = 0x401c0000;
        param_2[10] = 0;
        param_2[0xb] = 0;
        *(double *)(param_2 + 8) = (double)(int)*(short *)((int)this + 0x2d8);
        return 1;
      case 0x6e:
        *param_2 = 1;
        param_2[1] = 4;
        param_2[2] = 0;
        param_2[3] = 0x40350000;
        param_2[4] = 0;
        param_2[5] = 0x419312d0;
        param_2[6] = 0;
        param_2[7] = 0x40350000;
        param_2[10] = 0;
        param_2[0xb] = 0x3ff00000;
        param_2[8] = *(int *)((int)this + 0x2e0);
        param_2[9] = *(int *)((int)this + 0x2e4);
        return 1;
      case 0x6f:
        *param_2 = 3;
        param_2[1] = 9;
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[4] = 0;
        param_2[5] = 0;
        param_2[6] = 0;
        param_2[7] = 0x401c0000;
        param_2[10] = 0;
        param_2[0xb] = 0;
        *(double *)(param_2 + 8) = (double)(int)*(short *)((int)this + 0x2e8);
        return 1;
      case 0x71:
        *param_2 = 3;
        param_2[1] = 9;
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[4] = 0;
        param_2[5] = 0;
        param_2[6] = 0;
        param_2[7] = 0x401c0000;
        param_2[10] = 0;
        param_2[0xb] = 0;
        *(double *)(param_2 + 8) = (double)(int)*(short *)((int)this + 0x328);
        return 1;
      case 0x73:
        *param_2 = 3;
        param_2[1] = 9;
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[4] = 0;
        param_2[5] = 0;
        param_2[6] = 0;
        param_2[7] = 0x401c0000;
        param_2[10] = 0;
        param_2[0xb] = 0;
        *(double *)(param_2 + 8) = (double)(int)*(short *)((int)this + 0x318);
        return 1;
      }
    }
  }
  else if (param_1 < 0x7d2) {
    if (param_1 == 0x7d1) {
      local_c = 1;
      if (*(char *)((int)this + 0x45) != '\0') {
        local_c = 2;
      }
      if (*(char *)((int)this + 0x44) != '\0') {
        local_c = local_c + 1;
      }
      *param_2 = (int)local_c;
      param_2[1] = 9;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0x40180000;
      param_2[10] = 0;
      param_2[0xb] = 0;
      (**(code **)(**(int **)((int)this + 0x40) + 0x28))(0x7d1,&local_10,0);
      *(double *)(param_2 + 8) = (double)local_10;
      return local_8;
    }
    switch(param_1) {
    case 0x3eb:
      *param_2 = 1;
      param_2[1] = 4;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0x40f86a00;
      param_2[6] = 0;
      param_2[7] = 0x40340000;
      param_2[10] = -0x66666666;
      param_2[0xb] = 0x3fb99999;
      param_2[8] = *(int *)((int)this + 0x3c0);
      param_2[9] = *(int *)((int)this + 0x3c4);
      return 1;
    case 0x3ec:
      *param_2 = 3;
      param_2[1] = 9;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0x3ff00000;
      param_2[10] = 0;
      param_2[0xb] = 0;
      *(double *)(param_2 + 8) = (double)(int)*(short *)((int)this + 0x3c8);
      return 1;
    case 0x3ed:
      *param_2 = 1;
      param_2[1] = 4;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0x40f86a00;
      param_2[6] = 0;
      param_2[7] = 0x40340000;
      param_2[10] = -0x66666666;
      param_2[0xb] = 0x3fb99999;
      param_2[8] = *(int *)((int)this + 0x3d0);
      param_2[9] = *(int *)((int)this + 0x3d4);
      return 1;
    case 0x3ee:
      *param_2 = 3;
      param_2[1] = 9;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0x3ff00000;
      param_2[10] = 0;
      param_2[0xb] = 0;
      *(double *)(param_2 + 8) = (double)(int)*(short *)((int)this + 0x3d8);
      return 1;
    case 0x3ef:
      *param_2 = 1;
      param_2[1] = 4;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0x40f86a00;
      param_2[6] = 0;
      param_2[7] = 0x40340000;
      param_2[10] = -0x66666666;
      param_2[0xb] = 0x3fb99999;
      param_2[8] = *(int *)((int)this + 0x3e0);
      param_2[9] = *(int *)((int)this + 0x3e4);
      return 1;
    case 0x3f0:
      *param_2 = 3;
      param_2[1] = 9;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0x3ff00000;
      param_2[10] = 0;
      param_2[0xb] = 0;
      *(double *)(param_2 + 8) = (double)(int)*(short *)((int)this + 1000);
      return 1;
    case 0x3f1:
      *param_2 = 1;
      param_2[1] = 4;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0x40f86a00;
      param_2[6] = 0;
      param_2[7] = 0x40340000;
      param_2[10] = -0x66666666;
      param_2[0xb] = 0x3fb99999;
      param_2[8] = *(int *)((int)this + 0x3f0);
      param_2[9] = *(int *)((int)this + 0x3f4);
      return 1;
    case 0x3f2:
      *param_2 = 3;
      param_2[1] = 9;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0x3ff00000;
      param_2[10] = 0;
      param_2[0xb] = 0;
      *(double *)(param_2 + 8) = (double)(int)*(short *)((int)this + 0x3f8);
      return 1;
    case 0x3f3:
      *param_2 = 1;
      param_2[1] = 1;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0x3ff00000;
      param_2[10] = 0;
      param_2[0xb] = 0;
      *(double *)(param_2 + 8) = (double)(int)*(short *)((int)this + 0x3fa);
      return 1;
    case 0x3f4:
      *param_2 = 1;
      param_2[1] = 1;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0x3ff00000;
      param_2[10] = 0;
      param_2[0xb] = 0;
      *(double *)(param_2 + 8) = (double)(int)*(short *)((int)this + 0x3da);
      return 1;
    case 0x3f5:
      *param_2 = 1;
      param_2[1] = 4;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0x40c38800;
      param_2[6] = 0;
      param_2[7] = 0x3ff00000;
      param_2[10] = 0;
      param_2[0xb] = 0x3ff00000;
      param_2[8] = *(int *)((int)this + 0x400);
      param_2[9] = *(int *)((int)this + 0x404);
      return 1;
    case 0x3f6:
      *param_2 = 3;
      param_2[1] = 9;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0x401c0000;
      param_2[10] = 0;
      param_2[0xb] = 0;
      *(double *)(param_2 + 8) = (double)(int)*(short *)((int)this + 0x408);
      return 1;
    case 0x3f7:
      *param_2 = 1;
      param_2[1] = 4;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0x40c38800;
      param_2[6] = 0;
      param_2[7] = 0x3ff00000;
      param_2[10] = 0;
      param_2[0xb] = 0x3ff00000;
      param_2[8] = *(int *)((int)this + 0x410);
      param_2[9] = *(int *)((int)this + 0x414);
      return 1;
    case 0x3f8:
      *param_2 = 3;
      param_2[1] = 9;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0x401c0000;
      param_2[10] = 0;
      param_2[0xb] = 0;
      *(double *)(param_2 + 8) = (double)(int)*(short *)((int)this + 0x418);
      return 1;
    case 0x3f9:
      *param_2 = 1;
      param_2[1] = 1;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0x40cf4000;
      param_2[6] = 0;
      param_2[7] = 0x3ff00000;
      param_2[10] = 0;
      param_2[0xb] = 0x3ff00000;
      *(double *)(param_2 + 8) = (double)(int)*(short *)((int)this + 0x41a);
      return 1;
    }
  }
  uVar1 = FUN_100149d3(this,param_1,param_2);
  return uVar1;
}



/* ================================================================
 * Function: FUN_10009151
 * Address:  10009151
 * ================================================================ */

undefined1 __thiscall FUN_10009151(void *this,int param_1,int param_2,undefined4 *param_3)

{
  undefined1 local_8;
  
  local_8 = 1;
  if (param_1 < 0x74) {
    if (param_1 != 0x73) {
      switch(param_1) {
      case 0x16:
      case 0x18:
      case 0x69:
      case 0x6b:
      case 0x6d:
      case 0x6f:
      case 0x71:
        break;
      default:
        goto switchD_10009192_caseD_17;
      }
    }
switchD_10009192_caseD_16:
    if (param_2 == 0) {
      *param_3 = 2;
    }
    else if (param_2 == 1) {
      *param_3 = 1;
    }
    else if (param_2 == 2) {
      *param_3 = 7;
    }
    else {
      local_8 = 0;
    }
  }
  else {
    if (param_1 < 0x7d2) {
      if (param_1 == 0x7d1) {
        if (param_2 == 0) {
          *param_3 = 0xf;
          return 1;
        }
        if (param_2 == 1) {
          if (*(char *)((int)this + 0x45) != '\0') {
            *param_3 = 5;
            return 1;
          }
          *param_3 = 6;
          return 1;
        }
        if (param_2 == 2) {
          *param_3 = 6;
          return 1;
        }
        return 0;
      }
      switch(param_1) {
      case 0x3ec:
      case 0x3ee:
      case 0x3f0:
      case 0x3f2:
      case 0x3f6:
      case 0x3f8:
        goto switchD_10009192_caseD_16;
      }
    }
switchD_10009192_caseD_17:
    local_8 = FUN_100154b7(param_1,param_2,param_3);
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_10009310
 * Address:  10009310
 * ================================================================ */

undefined4 * __thiscall FUN_10009310(void *this,uint param_1)

{
  FUN_10005ce4(this);
  if ((param_1 & 1) != 0) {
    FUN_1001576a(this);
  }
  return this;
}



/* ================================================================
 * Function: FUN_10009340
 * Address:  10009340
 * ================================================================ */

undefined4 * __fastcall FUN_10009340(undefined4 *param_1)

{
  void *this;
  undefined4 *puVar1;
  undefined4 *local_2c;
  undefined4 *local_28;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_100208df;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10011fb0(param_1);
  local_8 = 0;
  *param_1 = &PTR_FUN_100212a0;
  FUN_10009852((int)param_1);
  this = operator_new(0x138);
  local_8._0_1_ = 1;
  if (this == (void *)0x0) {
    local_28 = (undefined4 *)0x0;
  }
  else {
    local_28 = FUN_10011630(this,1);
  }
  local_8._0_1_ = 0;
  param_1[0x10] = local_28;
  if (param_1[0x10] != 0) {
    FUN_100030a0((void *)param_1[0x10],param_1);
  }
  puVar1 = operator_new(0x270);
  local_8._0_1_ = 2;
  if (puVar1 == (undefined4 *)0x0) {
    local_2c = (undefined4 *)0x0;
  }
  else {
    local_2c = FUN_1000fa04(puVar1);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  param_1[0x12] = local_2c;
  if (param_1[0x12] != 0) {
    FUN_100030c0((void *)param_1[0x12],param_1);
    *(undefined2 *)(param_1 + 0x13) = 1;
    (**(code **)(*(int *)param_1[0x10] + 0x24))(0xfa5,0xa0,0);
    (**(code **)(*(int *)param_1[0x10] + 0x24))(0xfa6,0xa2,0);
    (**(code **)(*(int *)param_1[0x10] + 0x24))(0xfa3,0xa0,0);
    (**(code **)(*(int *)param_1[0x10] + 0x24))(0xfa4,0xa2,0);
  }
  ExceptionList = local_10;
  return param_1;
}



/* ================================================================
 * Function: FUN_100094cb
 * Address:  100094cb
 * ================================================================ */

undefined4 * __thiscall FUN_100094cb(void *this,undefined4 param_1,undefined4 param_2)

{
  void *this_00;
  undefined4 *puVar1;
  undefined4 *local_2c;
  undefined4 *local_28;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10020908;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10011fb0(this);
  local_8 = 0;
  *(undefined ***)this = &PTR_FUN_100212a0;
  FUN_10009852((int)this);
  this_00 = operator_new(0x138);
  local_8._0_1_ = 1;
  if (this_00 == (void *)0x0) {
    local_28 = (undefined4 *)0x0;
  }
  else {
    local_28 = FUN_10011630(this_00,1);
  }
  local_8._0_1_ = 0;
  *(undefined4 **)((int)this + 0x40) = local_28;
  if (*(int *)((int)this + 0x40) != 0) {
    FUN_100030a0(*(void **)((int)this + 0x40),this);
    (**(code **)(**(int **)((int)this + 0x40) + 0x24))(0x7d1,param_1,0);
    (**(code **)(**(int **)((int)this + 0x40) + 0x24))(0x7d4,param_2,0);
    (**(code **)(**(int **)((int)this + 0x40) + 4))();
    (**(code **)(**(int **)((int)this + 0x40) + 0x24))(0xfa5,0xa0,0);
    (**(code **)(**(int **)((int)this + 0x40) + 0x24))(0xfa6,0xa2,0);
    (**(code **)(**(int **)((int)this + 0x40) + 0x24))(0xfa3,0xa0,0);
    (**(code **)(**(int **)((int)this + 0x40) + 0x24))(0xfa4,0xa2,0);
  }
  puVar1 = operator_new(0x270);
  local_8._0_1_ = 2;
  if (puVar1 == (undefined4 *)0x0) {
    local_2c = (undefined4 *)0x0;
  }
  else {
    local_2c = FUN_1000fa04(puVar1);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  *(undefined4 **)((int)this + 0x48) = local_2c;
  if (*(int *)((int)this + 0x48) != 0) {
    FUN_100030c0(*(void **)((int)this + 0x48),this);
    *(undefined2 *)((int)this + 0x4c) = 1;
  }
  ExceptionList = local_10;
  return this;
}



/* ================================================================
 * Function: FUN_100096a1
 * Address:  100096a1
 * ================================================================ */

void __fastcall FUN_100096a1(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1002091b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_100212a0;
  local_8 = 0;
  if ((param_1[0x10] != 0) && ((undefined4 *)param_1[0x10] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[0x10])(1);
  }
  if ((param_1[0x12] != 0) && ((undefined4 *)param_1[0x12] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[0x12])(1);
  }
  local_8 = 0xffffffff;
  FUN_100123d4(param_1);
  ExceptionList = local_10;
  return;
}



/* ================================================================
 * Function: FUN_10009758
 * Address:  10009758
 * ================================================================ */

void __fastcall FUN_10009758(int param_1)

{
  undefined2 local_20 [12];
  undefined4 local_8;
  
  local_20[0] = 0;
  local_20[1] = 0;
  local_20[2] = 0;
  local_20[3] = 0;
  local_20[4] = 0;
  local_20[5] = 0;
  local_20[6] = 0;
  local_20[7] = 0;
  local_20[8] = 0;
  local_20[9] = 0;
  local_20[10] = 1;
  (**(code **)(**(int **)(param_1 + 0x40) + 0x18))(0x90,0);
  (**(code **)(**(int **)(param_1 + 0x40) + 0x18))(0x80,1);
  local_8 = (uint)local_8._2_2_ << 0x10;
  while ((local_8 & 0xffff) < 0xb) {
    (**(code **)(**(int **)(param_1 + 0x40) + 0x18))(0x82,local_20[local_8 & 0xffff]);
    local_8 = CONCAT22(local_8._2_2_,(short)local_8 + 1);
  }
  (**(code **)(**(int **)(param_1 + 0x40) + 0x18))(0x80,1);
  (**(code **)(**(int **)(param_1 + 0x40) + 0x18))(0x80,0x10);
  return;
}



/* ================================================================
 * Function: FUN_10009852
 * Address:  10009852
 * ================================================================ */

void __fastcall FUN_10009852(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 2;
  *(undefined1 *)(param_1 + 0x46) = 1;
  *(undefined2 *)(param_1 + 0x3fc) = 1;
  *(undefined4 *)(param_1 + 0x400) = 0;
  *(undefined2 *)(param_1 + 0x3f8) = 2;
  *(undefined2 *)(param_1 + 0x3fa) = 1;
  *(undefined4 *)(param_1 + 0x3f0) = 1;
  *(undefined2 *)(param_1 + 0x3f4) = 1;
  *(undefined2 *)(param_1 + 0x3f6) = 2;
  *(undefined4 *)(param_1 + 0x408) = 0;
  *(undefined4 *)(param_1 + 0x40c) = 0x3ff00000;
  *(undefined2 *)(param_1 + 0x410) = 0;
  *(undefined2 *)(param_1 + 0x412) = 0;
  *(undefined2 *)(param_1 + 0x414) = 0;
  *(undefined2 *)(param_1 + 0x418) = 1;
  *(undefined2 *)(param_1 + 0x416) = 1;
  *(undefined2 *)(param_1 + 0x41a) = 1;
  *(undefined2 *)(param_1 + 0x41c) = 0;
  *(undefined2 *)(param_1 + 0x2ca) = 1;
  *(undefined4 *)(param_1 + 0x3b0) = 0;
  *(undefined4 *)(param_1 + 0x3b4) = 0x408f4000;
  *(undefined2 *)(param_1 + 0x3b8) = 7;
  *(undefined4 *)(param_1 + 0x3c0) = 0;
  *(undefined4 *)(param_1 + 0x3c4) = 0x40140000;
  *(undefined2 *)(param_1 + 0x3c8) = 2;
  *(undefined4 *)(param_1 + 0x3d0) = 0;
  *(undefined4 *)(param_1 + 0x3d4) = 0;
  *(undefined2 *)(param_1 + 0x3d8) = 1;
  *(undefined4 *)(param_1 + 0x3e0) = 0;
  *(undefined4 *)(param_1 + 0x3e4) = 0;
  *(undefined2 *)(param_1 + 1000) = 7;
  *(undefined2 *)(param_1 + 0x3ec) = 1;
  *(undefined2 *)(param_1 + 0x3ea) = 1;
  *(undefined2 *)(param_1 + 0x438) = 0x80;
  *(undefined4 *)(param_1 + 0x43c) = 0;
  *(undefined4 *)(param_1 + 0x430) = 0x47ae147b;
  *(undefined4 *)(param_1 + 0x434) = 0x3fa47ae1;
  *(undefined4 *)(param_1 + 0x428) = 0x47ae147b;
  *(undefined4 *)(param_1 + 0x42c) = 0x3fa47ae1;
  *(undefined4 *)(param_1 + 0x420) = 0x47ae147b;
  *(undefined4 *)(param_1 + 0x424) = 0x3fa47ae1;
  return;
}



/* ================================================================
 * Function: FUN_10009a3d
 * Address:  10009a3d
 * ================================================================ */

char __fastcall FUN_10009a3d(int param_1)

{
  uint local_c;
  char local_8;
  
  local_8 = 1;
  local_8 = (**(code **)(**(int **)(param_1 + 0x40) + 0x1c))(0x90,&local_c);
  if (local_8 != '\0') {
    local_8 = (**(code **)(**(int **)(param_1 + 0x40) + 0x18))(0x90,0);
  }
  if (local_8 != '\0') {
    local_8 = (**(code **)(**(int **)(param_1 + 0x40) + 0x18))(0x80,1);
  }
  if (local_8 != '\0') {
    local_8 = (**(code **)(**(int **)(param_1 + 0x40) + 0x18))(0x80,0x10);
  }
  if (local_8 != '\0') {
    local_8 = (**(code **)(**(int **)(param_1 + 0x40) + 0x18))(0x80,2);
  }
  if (local_8 != '\0') {
    local_c = local_c & 0xfffffffd;
    local_8 = (**(code **)(**(int **)(param_1 + 0x40) + 0x18))(0x90,local_c);
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_10009b28
 * Address:  10009b28
 * ================================================================ */

char __fastcall FUN_10009b28(int param_1)

{
  uint local_c;
  char local_8;
  
  local_8 = 1;
  local_8 = (**(code **)(**(int **)(param_1 + 0x40) + 0x1c))(0x90,&local_c);
  if (local_8 != '\0') {
    local_c = local_c | 2;
    local_8 = (**(code **)(**(int **)(param_1 + 0x40) + 0x18))(0x90,local_c);
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_10009b87
 * Address:  10009b87
 * ================================================================ */

char __fastcall FUN_10009b87(int param_1)

{
  uint local_c;
  char local_8;
  
  local_8 = 1;
  local_8 = (**(code **)(**(int **)(param_1 + 0x40) + 0x1c))(0x90,&local_c);
  if (local_8 != '\0') {
    local_c = local_c & 0xfffffffd;
    local_8 = (**(code **)(**(int **)(param_1 + 0x40) + 0x18))(0x90,local_c);
    if ((local_8 != '\0') &&
       ((*(short *)(param_1 + 0x24e) == 2 || (*(short *)(param_1 + 0x24e) == 3)))) {
      local_8 = (**(code **)(**(int **)(param_1 + 0x40) + 0x18))(0x80,1);
      if (local_8 != '\0') {
        local_8 = (**(code **)(**(int **)(param_1 + 0x40) + 0x18))(0x80,0x10);
      }
    }
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_10009c4e
 * Address:  10009c4e
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009c4e(void)

{
  int iVar1;
  longlong lVar2;
  int *in_stack_00000014;
  int *in_stack_00000018;
  int *in_stack_0000001c;
  undefined4 *in_stack_00000020;
  char *in_stack_00000024;
  char local_30;
  int local_20;
  int local_14;
  int local_8;
  
  lVar2 = __ftol();
  iVar1 = (int)lVar2;
  lVar2 = __ftol();
  if (iVar1 < 0x100) {
    local_8 = iVar1 + 1;
    local_14 = 0;
    local_20 = 0;
  }
  else {
    local_8 = 0x103;
    do {
      local_8 = local_8 + -4;
      local_20 = iVar1 / local_8;
      local_14 = iVar1 % local_8;
      if (iVar1 % local_8 == 0) {
        local_20 = local_20 + -1;
        local_14 = local_8;
      }
    } while ((local_14 < 0x50) || (local_20 < 2));
    local_14 = local_14 + 1;
  }
  if (in_stack_00000014 != (int *)0x0) {
    *in_stack_00000014 = 0x100 - local_8;
  }
  if (in_stack_00000018 != (int *)0x0) {
    *in_stack_00000018 = local_20;
  }
  if (in_stack_0000001c != (int *)0x0) {
    *in_stack_0000001c = 0x100 - local_14;
  }
  if (in_stack_00000020 != (undefined4 *)0x0) {
    *in_stack_00000020 = (int)lVar2;
  }
  if (in_stack_00000024 != (char *)0x0) {
    *in_stack_00000024 = -(char)local_8;
    in_stack_00000024[1] = -(char)local_14;
    local_30 = (char)lVar2;
    in_stack_00000024[2] = local_30;
    in_stack_00000024[3] = (char)local_20;
    in_stack_00000024[4] = (char)((uint)local_20 >> 8);
  }
  return;
}



/* ================================================================
 * Function: FUN_10009db4
 * Address:  10009db4
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009db4(void)

{
  return;
}



/* ================================================================
 * Function: FUN_10009eba
 * Address:  10009eba
 * ================================================================ */

void FUN_10009eba(void)

{
  FUN_10009db4();
  return;
}



/* ================================================================
 * Function: FUN_1000a010
 * Address:  1000a010
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char __thiscall FUN_1000a010(void *this,int param_1)

{
  short sVar1;
  float10 fVar2;
  int local_50;
  int local_4c;
  undefined8 local_48;
  undefined4 local_40;
  uint local_3c;
  int local_38;
  char local_34;
  char local_30;
  uint local_2c;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined1 local_24;
  undefined4 local_20;
  char local_1c;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 local_14;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined1 local_c;
  uint local_8;
  
  local_30 = '\x01';
  local_38 = (int)this + 0x14e;
  local_1c = '\0';
  local_34 = '\x01';
  if (((((param_1 == 0xe11) || (param_1 == 0x19)) || (param_1 == 0x17)) ||
      (((param_1 == 0x3d || (param_1 == 0x3e)) || (param_1 == 0x3f)))) &&
     (local_30 = (**(code **)(**(int **)((int)this + 0x40) + 0x1c))(0x96,&local_3c),
     local_30 != '\0')) {
    if ((local_3c & 2) == 0) {
      if (param_1 == 0xe11) {
        fVar2 = FUN_100123e8((double)CONCAT26((short)((uint)*(undefined4 *)((int)this + 0x3b4) >>
                                                     0x10),*(undefined6 *)((int)this + 0x3b0)),
                             *(short *)((int)this + 0x3b8),7);
        local_48 = (double)fVar2;
        FUN_10009c4e();
        fVar2 = FUN_100123e8((double)CONCAT26((short)((uint)*(undefined4 *)((int)this + 0x3c4) >>
                                                     0x10),*(undefined6 *)((int)this + 0x3c0)),
                             *(short *)((int)this + 0x3c8),7);
        local_48 = (double)fVar2;
        FUN_10009c4e();
        fVar2 = FUN_100123e8((double)CONCAT26((short)((uint)*(undefined4 *)((int)this + 0x3d4) >>
                                                     0x10),*(undefined6 *)((int)this + 0x3d0)),
                             *(short *)((int)this + 0x3d8),7);
        local_48 = (double)fVar2;
        FUN_10009c4e();
        FUN_10012584(this,*(int *)((int)this + 0x3e0),*(int *)((int)this + 0x3e0),
                     *(undefined4 *)((int)this + 0x3e4),*(short *)((int)this + 1000),5e-08,&local_40
                    );
        local_20 = CONCAT22(local_20._2_2_,*(undefined2 *)((int)this + 0x3ea));
        local_8 = (uint)*(ushort *)((int)this + 0x3ec);
      }
      else {
        (**(code **)(**(int **)((int)this + 0x48) + 8))(0x2395,(short)&local_4c,0);
        (**(code **)(**(int **)((int)this + 0x48) + 8))(0x2394,&local_50,0);
        fVar2 = (float10)(**(code **)(**(int **)((int)this + 0x48) + 0x20))(7,0);
        local_48 = (double)fVar2;
        FUN_10009c4e();
        fVar2 = (float10)(**(code **)(**(int **)((int)this + 0x48) + 0x20))(7,1);
        local_48 = (double)fVar2;
        FUN_10009c4e();
        fVar2 = (float10)(**(code **)(**(int **)((int)this + 0x48) + 0x20))(7,5);
        local_48 = (double)fVar2;
        FUN_10009c4e();
        if (local_4c == 0) {
          local_48 = 0.0;
          local_1c = '\x01';
        }
        else {
          if ((local_50 == -1) ||
             (((*(short *)((int)this + 0x3f8) != 0 && (*(short *)((int)this + 0x3f8) != 3)) &&
              (*(short *)((int)this + 0x3f8) != 4)))) {
            fVar2 = (float10)(**(code **)(**(int **)((int)this + 0x48) + 0x20))(7,4);
            local_48 = (double)fVar2;
          }
          else {
            local_48 = 0.0;
          }
          if (local_48 < _DAT_100211b0) {
            local_48 = 0.0;
            local_1c = '\x01';
          }
        }
        FUN_10012584(this,(int)local_48,(int)local_48,local_48._4_4_,7,5e-08,&local_40);
        if ((*(short *)((int)this + 0x24e) == 2) || (*(short *)((int)this + 0x24e) == 3)) {
          local_20 = CONCAT22(local_20._2_2_,2);
        }
        else {
          sVar1 = *(short *)((int)this + 0x3f6);
          if (sVar1 == 1) {
            local_20 = (uint)local_20._2_2_ << 0x10;
          }
          else if (sVar1 == 3) {
            local_20 = CONCAT22(local_20._2_2_,2);
          }
          else if (sVar1 == 4) {
            local_20 = CONCAT22(local_20._2_2_,3);
          }
          else {
            local_20 = CONCAT22(local_20._2_2_,1);
          }
        }
        if (*(short *)((int)this + 0x41a) != 0) {
          local_20 = local_20 | 0x80;
        }
        local_8 = *(uint *)((int)this + 0x3f0);
      }
      local_30 = (**(code **)(**(int **)((int)this + 0x40) + 0x1c))(0x90,&local_3c);
      if (param_1 == 0xe11) {
        local_34 = '\x01' - ((local_3c & 2) != 0);
      }
      else if (local_30 == '\0') {
        local_34 = '\0';
      }
      else {
        local_30 = (**(code **)(**(int **)((int)this + 0x40) + 0x18))(0x90,0);
      }
      if (local_34 == '\0') {
        FUN_100155fe(this,8,0x643,&DAT_10026710);
        local_30 = '\0';
      }
      else {
        *(undefined1 *)((int)this + 0x14e) = 0;
        *(undefined1 *)((int)this + 0x14f) = local_10;
        *(undefined1 *)((int)this + 0x151) = local_f;
        *(undefined1 *)((int)this + 0x153) = local_e;
        *(undefined1 *)((int)this + 0x155) = local_d;
        *(undefined1 *)((int)this + 0x157) = local_c;
        *(undefined1 *)((int)this + 0x150) = local_28;
        *(undefined1 *)((int)this + 0x152) = local_27;
        *(undefined1 *)((int)this + 0x154) = local_26;
        *(undefined1 *)((int)this + 0x156) = local_25;
        *(undefined1 *)((int)this + 0x158) = local_24;
        *(undefined1 *)((int)this + 0x15a) = local_18;
        *(undefined1 *)((int)this + 0x15c) = local_17;
        *(undefined1 *)((int)this + 0x15e) = local_16;
        *(undefined1 *)((int)this + 0x160) = local_15;
        *(undefined1 *)((int)this + 0x162) = local_14;
        *(char *)((int)this + 0x159) = (char)local_40;
        *(char *)((int)this + 0x15b) = (char)((uint)local_40 >> 8);
        *(char *)((int)this + 0x15d) = (char)((uint)local_40 >> 0x10);
        if (0xffff < local_8) {
          while (0xffff < local_8) {
            local_8 = local_8 - 0xffff;
            *(undefined1 *)((int)this + 0x15f) = 0;
            *(undefined1 *)((int)this + 0x161) = 0xff;
            *(undefined1 *)((int)this + 0x163) = 0xff;
            local_2c = local_2c & 0xffff0000;
            while (((local_2c & 0xffff) < 0xb && (local_30 != '\0'))) {
              local_30 = (**(code **)(**(int **)((int)this + 0x40) + 0x18))
                                   (0x82,*(undefined2 *)(local_38 + (local_2c & 0xffff) * 2));
              local_2c = CONCAT22(local_2c._2_2_,(short)local_2c + 1);
            }
          }
          if ((local_20 & 3) == 1) {
            local_20 = local_20 & 0xfffffffc;
            local_20 = local_20 | 3;
          }
        }
        *(char *)((int)this + 0x15f) = (char)local_20;
        *(char *)((int)this + 0x161) = (char)local_8;
        *(char *)((int)this + 0x163) = (char)(local_8 >> 8);
        local_2c = local_2c & 0xffff0000;
        while (((local_2c & 0xffff) < 0xb && (local_30 != '\0'))) {
          local_30 = (**(code **)(**(int **)((int)this + 0x40) + 0x18))
                               (0x82,*(undefined2 *)(local_38 + (local_2c & 0xffff) * 2));
          local_2c = CONCAT22(local_2c._2_2_,(short)local_2c + 1);
        }
        if ((param_1 != 0xe11) && (local_30 != '\0')) {
          local_30 = (**(code **)(**(int **)((int)this + 0x40) + 0x18))(0x90,local_3c);
        }
      }
    }
    else {
      FUN_100155fe(this,8,0x641,&DAT_1002670c);
      local_30 = '\0';
    }
  }
  if (((local_30 != '\0') && (param_1 != 0xe11)) &&
     (local_30 = (**(code **)(**(int **)((int)this + 0x40) + 0x1c))(0x9a,&local_3c),
     local_30 != '\0')) {
    local_3c = local_3c & 0xffffff07;
    if (local_1c == '\0') {
      switch(*(undefined2 *)((int)this + 0x3f8)) {
      case 0:
        break;
      case 1:
        local_3c = local_3c | 8;
        break;
      default:
        local_3c = local_3c | 0x10;
        break;
      case 3:
        local_3c = local_3c | 0x18;
        break;
      case 4:
        local_3c = local_3c | 0x20;
      }
      sVar1 = *(short *)((int)this + 0x3fa);
      if (sVar1 != 0) {
        if (sVar1 == 2) {
          local_3c = local_3c | 0x80;
        }
        else if (sVar1 == 3) {
          local_3c = local_3c | 0xc0;
        }
        else {
          local_3c = local_3c | 0x40;
        }
      }
    }
    local_3c = local_3c & 0xffffefff;
    if (*(short *)((int)this + 0x3f4) == 2) {
      local_3c = local_3c | 0x1000;
    }
    local_30 = (**(code **)(**(int **)((int)this + 0x40) + 0x18))(0x9a,(short)local_3c);
    if (local_1c != '\0') {
      local_30 = (**(code **)(**(int **)((int)this + 0x40) + 0x18))(0x80,0x20);
    }
  }
  return local_30;
}



/* ================================================================
 * Function: FUN_1000a8c2
 * Address:  1000a8c2
 * ================================================================ */

char __thiscall FUN_1000a8c2(void *this,int param_1,int param_2,int param_3,int param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_c;
  char local_8;
  
  local_8 = (**(code **)(**(int **)((int)this + 0x40) + 0x1c))(0x90,&local_c);
  if (((local_8 != '\0') &&
      (local_8 = (**(code **)(**(int **)((int)this + 0x40) + 0x18))(0x90,0), local_8 != '\0')) &&
     (local_8 = (**(code **)(**(int **)((int)this + 0x40) + 0x18))(0x80,1), local_8 != '\0')) {
    uVar3 = *(undefined4 *)((int)this + 0x270);
    uVar4 = *(undefined4 *)((int)this + 0x274);
    uVar1 = *(undefined2 *)((int)this + 0x278);
    uVar5 = *(undefined4 *)((int)this + 0x280);
    uVar6 = *(undefined4 *)((int)this + 0x284);
    uVar2 = *(undefined2 *)((int)this + 0x288);
    *(int *)((int)this + 0x270) = param_1;
    *(int *)((int)this + 0x274) = param_2;
    *(int *)((int)this + 0x280) = param_3;
    *(int *)((int)this + 0x284) = param_4;
    *(undefined2 *)((int)this + 0x288) = *(undefined2 *)((int)this + 0x370);
    *(undefined2 *)((int)this + 0x278) = *(undefined2 *)((int)this + 0x288);
    local_8 = (**(code **)(*(int *)this + 0x18))(0x17);
    if (local_8 == '\0') {
      *(undefined4 *)((int)this + 0x270) = uVar3;
      *(undefined4 *)((int)this + 0x274) = uVar4;
      *(undefined2 *)((int)this + 0x278) = uVar1;
      *(undefined4 *)((int)this + 0x280) = uVar5;
      *(undefined4 *)((int)this + 0x284) = uVar6;
      *(undefined2 *)((int)this + 0x288) = uVar2;
      local_8 = '\0';
    }
    else {
      local_8 = (**(code **)(**(int **)((int)this + 0x40) + 0x18))(0x80,1);
      if ((local_8 != '\0') &&
         (local_8 = (**(code **)(**(int **)((int)this + 0x40) + 0x18))(0x80,0x10), local_8 != '\0'))
      {
        local_8 = (**(code **)(**(int **)((int)this + 0x40) + 0x18))(0x90,local_c);
      }
    }
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_1000aaa6
 * Address:  1000aaa6
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char __fastcall FUN_1000aaa6(int *param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  undefined2 local_7a;
  double local_74;
  undefined4 local_6c;
  undefined4 uStack_68;
  int local_58;
  int local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined2 local_34;
  int local_30;
  undefined2 local_2c;
  int local_28;
  undefined2 local_24;
  short local_20;
  undefined2 local_1c;
  undefined2 local_18;
  short local_14;
  char local_10;
  undefined4 local_c;
  char local_8;
  
  if ((param_1[0xd9] == 0) || (param_1[0xda] == 0)) {
    FUN_100155fe(param_1,8,3,&DAT_10026714);
    local_8 = '\0';
  }
  else {
    local_8 = (**(code **)(*(int *)param_1[0x10] + 0x1c))(0x90,&local_c);
    if (((local_8 != '\0') &&
        (local_8 = (**(code **)(*(int *)param_1[0x10] + 0x18))(0x90,0), local_8 != '\0')) &&
       (local_8 = (**(code **)(*(int *)param_1[0x10] + 0x18))(0x80,1), local_8 != '\0')) {
      local_3c = param_1[0x9c];
      local_38 = param_1[0x9d];
      iVar1 = param_1[0x9e];
      local_44 = param_1[0xa0];
      local_40 = param_1[0xa1];
      local_18 = (undefined2)param_1[0xa2];
      local_54 = param_1[0xa8];
      local_50 = param_1[0xa9];
      local_34 = (undefined2)param_1[0xaa];
      local_1c = *(undefined2 *)((int)param_1 + 0x3f6);
      local_30 = param_1[0xfc];
      local_2c = (undefined2)param_1[0xfe];
      local_24 = *(undefined2 *)((int)param_1 + 0x3fa);
      local_10 = '\0';
      (**(code **)(*(int *)param_1[0x12] + 8))(0x2395,&local_28,0);
      (**(code **)(*(int *)param_1[0x12] + 8))(0x2394,&local_58,0);
      (**(code **)(*(int *)param_1[0x12] + 0x10))(0x2396,&local_4c,0);
      if ((local_28 != 0) && (local_58 == 0)) {
        local_6c = 0;
        uStack_68 = 0xbff00000;
        fVar2 = (float10)(**(code **)(*(int *)param_1[0x12] + 0x20))(7,6);
        if (((short)param_1[0xfe] == 0) ||
           (((short)param_1[0xfe] == 3 || ((short)param_1[0xfe] == 4)))) {
          local_74 = 0.0;
        }
        else {
          for (local_14 = 0; local_14 < *(short *)((int)param_1 + 0x2ce); local_14 = local_14 + 1) {
            if (((double)CONCAT44(uStack_68,local_6c) <= _DAT_10021308) ||
               (*(double *)(param_1[0xd9] + local_14 * 8) < (double)CONCAT44(uStack_68,local_6c))) {
              local_6c = *(undefined4 *)(param_1[0xd9] + local_14 * 8);
              uStack_68 = *(undefined4 *)(param_1[0xd9] + 4 + local_14 * 8);
            }
          }
          fVar3 = FUN_100123e8((double)CONCAT44(uStack_68,local_6c),(short)param_1[0xdc],7);
          local_74 = (double)(fVar3 - (float10)(double)fVar2);
        }
        if (local_74 < _DAT_100211b0) {
          (**(code **)(*(int *)param_1[0x12] + 4))(0x2394,0xffffffff,0);
          (**(code **)(*(int *)param_1[0x12] + 0xc))(0x2396,0,0,0);
          *(undefined2 *)(param_1 + 0xfe) = 0;
          *(undefined2 *)((int)param_1 + 0x3fa) = 0;
          local_10 = '\x01';
        }
      }
      *(short *)(param_1 + 0xa2) = (short)param_1[0xdc];
      *(short *)(param_1 + 0x9e) = (short)param_1[0xa2];
      if (param_1[0xdb] == 0) {
        local_7a = (undefined2)param_1[0xaa];
      }
      else {
        local_7a = (undefined2)param_1[0xdc];
      }
      *(undefined2 *)(param_1 + 0xaa) = local_7a;
      *(undefined2 *)((int)param_1 + 0x3f6) = 1;
      local_14 = 0;
      while (((int)local_14 < *(short *)((int)param_1 + 0x2ce) + -1 && (local_8 != '\0'))) {
        param_1[0x9c] = *(int *)(param_1[0xda] + local_14 * 8);
        param_1[0x9d] = *(int *)(param_1[0xda] + 4 + local_14 * 8);
        param_1[0xa0] = *(int *)(param_1[0xd9] + local_14 * 8);
        param_1[0xa1] = *(int *)(param_1[0xd9] + 4 + local_14 * 8);
        if (param_1[0xdb] == 0) {
          local_84 = param_1[0xa8];
          local_80 = param_1[0xa9];
        }
        else {
          local_84 = *(int *)(param_1[0xdb] + local_14 * 8);
          local_80 = *(int *)(param_1[0xdb] + 4 + local_14 * 8);
        }
        param_1[0xa8] = local_84;
        param_1[0xa9] = local_80;
        if (param_1[0xde] == 0) {
          local_88 = param_1[0xfc];
        }
        else {
          local_88 = *(int *)(param_1[0xde] + local_14 * 4);
        }
        param_1[0xfc] = local_88;
        for (local_20 = 0; local_20 < (short)param_1[0xd8]; local_20 = local_20 + 1) {
          local_8 = (**(code **)(*param_1 + 0x18))(0x17);
        }
        local_14 = local_14 + 1;
      }
      if (local_8 != '\0') {
        param_1[0x9c] = *(int *)(param_1[0xda] + -8 + *(short *)((int)param_1 + 0x2ce) * 8);
        param_1[0x9d] = *(int *)(param_1[0xda] + -4 + *(short *)((int)param_1 + 0x2ce) * 8);
        param_1[0xa0] = *(int *)(param_1[0xd9] + -8 + *(short *)((int)param_1 + 0x2ce) * 8);
        param_1[0xa1] = *(int *)(param_1[0xd9] + -4 + *(short *)((int)param_1 + 0x2ce) * 8);
        if (param_1[0xdb] == 0) {
          local_90 = param_1[0xa8];
          local_8c = param_1[0xa9];
        }
        else {
          local_90 = *(int *)(param_1[0xdb] + -8 + *(short *)((int)param_1 + 0x2ce) * 8);
          local_8c = *(int *)(param_1[0xdb] + -4 + *(short *)((int)param_1 + 0x2ce) * 8);
        }
        param_1[0xa8] = local_90;
        param_1[0xa9] = local_8c;
        if (param_1[0xde] == 0) {
          local_94 = param_1[0xfc];
        }
        else {
          local_94 = *(int *)(param_1[0xde] + -4 + *(short *)((int)param_1 + 0x2ce) * 4);
        }
        param_1[0xfc] = local_94;
        for (local_20 = 0; (int)local_20 < (short)param_1[0xd8] + -1; local_20 = local_20 + 1) {
          local_8 = (**(code **)(*param_1 + 0x18))(0x17);
        }
        *(undefined2 *)((int)param_1 + 0x3f6) = 4;
        local_8 = (**(code **)(*param_1 + 0x18))(0x17);
      }
      if (((local_8 != '\0') &&
          (local_8 = (**(code **)(*(int *)param_1[0x10] + 0x18))(0x80,1), local_8 != '\0')) &&
         (local_8 = (**(code **)(*(int *)param_1[0x10] + 0x18))(0x80,0x10), local_8 != '\0')) {
        local_8 = (**(code **)(*(int *)param_1[0x10] + 0x18))(0x90,local_c);
      }
      param_1[0x9c] = local_3c;
      param_1[0x9d] = local_38;
      *(short *)(param_1 + 0x9e) = (short)iVar1;
      param_1[0xa0] = local_44;
      param_1[0xa1] = local_40;
      *(undefined2 *)(param_1 + 0xa2) = local_18;
      param_1[0xa8] = local_54;
      param_1[0xa9] = local_50;
      *(undefined2 *)(param_1 + 0xaa) = local_34;
      *(undefined2 *)((int)param_1 + 0x3f6) = local_1c;
      param_1[0xfc] = local_30;
      if (local_10 != '\0') {
        local_8 = (**(code **)(*(int *)param_1[0x10] + 0x18))(0x80,0x20);
        *(undefined2 *)(param_1 + 0xfe) = local_2c;
        *(undefined2 *)((int)param_1 + 0x3fa) = local_24;
        (**(code **)(*(int *)param_1[0x12] + 4))(0x2394,local_58,0);
        (**(code **)(*(int *)param_1[0x12] + 0xc))(0x2396,local_4c,local_48,0);
      }
    }
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_1000b25a
 * Address:  1000b25a
 * ================================================================ */

char __thiscall FUN_1000b25a(void *this,int param_1)

{
  longlong lVar1;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  uint local_10;
  char local_c;
  uint local_8;
  
  local_c = (**(code **)(**(int **)((int)this + 0x40) + 0x1c))(0x90,&local_8);
  if (local_c != '\0') {
    local_c = (**(code **)(**(int **)((int)this + 0x40) + 0x18))(0x90,0);
  }
  if ((local_c != '\0') && (((param_1 == 0xb || (param_1 == 0xe)) || (param_1 == 0x11)))) {
    local_c = (**(code **)(**(int **)((int)this + 0x40) + 0x1c))(0x9a,&local_10);
    if (local_c != '\0') {
      if ((*(short *)((int)this + 0x24e) == 1) || (*(short *)((int)this + 0x24e) == 2)) {
        local_10 = local_10 & 0xfffffffc | (uint)(*(short *)((int)this + 600) != 1);
      }
      else {
        local_10 = local_10 & 0xfffffffc | 2;
      }
      local_c = (**(code **)(**(int **)((int)this + 0x40) + 0x18))(0x9a,local_10);
    }
  }
  if ((local_c != '\0') && ((param_1 == 0xc || (param_1 == 0x11)))) {
    FUN_10012584(this,(int)this,*(undefined4 *)((int)this + 0x250),
                 *(undefined4 *)((int)this + 0x254),-1,1.25e-08,&local_10);
    local_c = (**(code **)(**(int **)((int)this + 0x40) + 0x18))(0x8c,local_10);
    if (local_c != '\0') {
      local_c = (**(code **)(**(int **)((int)this + 0x40) + 0x18))(0x8e,local_10 >> 0x10 & 0x3fff);
    }
  }
  if ((local_c != '\0') && ((param_1 == 0xd || (param_1 == 0x11)))) {
    lVar1 = __ftol();
    local_14[0] = (undefined1)lVar1;
    local_c = (**(code **)(**(int **)((int)this + 0x40) + 0x20))(3,0,1,local_14,1,local_18);
  }
  if ((local_c != '\0') && (((param_1 == 0xf || (param_1 == 0x10)) || (param_1 == 0x11)))) {
    local_c = (**(code **)(**(int **)((int)this + 0x40) + 0x1c))(0x9c,&local_10);
    if (local_c != '\0') {
      if (*(short *)((int)this + 0x268) == 1) {
        local_10 = local_10 | 1;
      }
      else {
        local_10 = local_10 & 0xfffffffe;
      }
      if (*(short *)((int)this + 0x25a) == 0) {
        local_10 = local_10 | 2;
      }
      else {
        local_10 = local_10 & 0xfffffffd;
      }
      local_c = (**(code **)(**(int **)((int)this + 0x40) + 0x18))(0x9c,local_10);
    }
  }
  if (local_c != '\0') {
    if (*(short *)((int)this + 0x414) == 0) {
      local_8 = local_8 & 0xfffffffd;
    }
    else {
      local_8 = local_8 | 2;
    }
    if ((*(short *)((int)this + 0x24e) == 0) || (*(short *)((int)this + 0x24e) == 3)) {
      local_8 = local_8 | 8;
    }
    else {
      local_8 = local_8 & 0xfffffff7;
    }
    if (*(short *)((int)this + 0x416) == 0) {
      local_8 = local_8 & 0xffffffdf;
    }
    else {
      local_8 = local_8 | 0x20;
    }
    if (*(short *)((int)this + 0x41c) == 1) {
      local_8 = local_8 | 0x100;
    }
    else {
      local_8 = local_8 & 0xfffffeff;
    }
    if (*(short *)((int)this + 0x418) == 0) {
      local_8 = local_8 & 0xffffff7f;
    }
    else {
      local_8 = local_8 | 0x80;
    }
  }
  (**(code **)(**(int **)((int)this + 0x40) + 0x18))(0x90,local_8);
  return local_c;
}



/* ================================================================
 * Function: FUN_1000b5c9
 * Address:  1000b5c9
 * ================================================================ */

char __thiscall FUN_1000b5c9(void *this,int param_1)

{
  uint local_c;
  char local_8;
  
  local_8 = '\x01';
  if ((param_1 == 0x22) || (param_1 == 0x1f)) {
    FUN_10012584(this,(int)this,*(undefined4 *)((int)this + 0x2b0),
                 *(undefined4 *)((int)this + 0x2b4),-1,1.25e-08,&local_c);
    local_8 = (**(code **)(**(int **)((int)this + 0x40) + 0x18))(0x84,local_c);
    if (local_8 != '\0') {
      local_8 = (**(code **)(**(int **)((int)this + 0x40) + 0x18))(0x86,local_c >> 0x10 & 0x3fff);
    }
  }
  if (((local_8 != '\0') && (((param_1 == 0x22 || (param_1 == 0x20)) || (param_1 == 0x21)))) &&
     (local_8 = (**(code **)(**(int **)((int)this + 0x40) + 0x1c))(0x90,&local_c), local_8 != '\0'))
  {
    if ((*(int *)((int)this + 0x2b8) < 1) || (*(short *)((int)this + 700) != 1)) {
      local_c = local_c & 0xfffffffb;
    }
    else {
      local_c = local_c | 4;
      if (param_1 != 0x21) {
        local_8 = (**(code **)(**(int **)((int)this + 0x40) + 0x18))
                            (0x88,*(uint *)((int)this + 0x2b8) & 0x1fff);
      }
    }
    local_8 = (**(code **)(**(int **)((int)this + 0x40) + 0x18))(0x90,local_c);
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_1000b72b
 * Address:  1000b72b
 * ================================================================ */

char __fastcall FUN_1000b72b(int param_1)

{
  uint local_c;
  char local_8;
  
  local_8 = 1;
  FUN_10012584(param_1,*(int *)(param_1 + 0x40c),*(undefined4 *)(param_1 + 0x408),
               *(int *)(param_1 + 0x40c),1,1.25e-08,&local_c);
  local_8 = (**(code **)(**(int **)(param_1 + 0x40) + 0x18))(0x8a,local_c & 0x3ff);
  if (local_8 != '\0') {
    local_8 = (**(code **)(**(int **)(param_1 + 0x40) + 0x1c))(0x90,&local_c);
    if (local_8 != '\0') {
      if (*(short *)(param_1 + 0x410) == 0) {
        local_c = local_c & 0xffffffef;
      }
      else {
        local_c = local_c | 0x10;
      }
      if (*(short *)(param_1 + 0x412) == 0) {
        local_c = local_c & 0xffffffbf;
      }
      else {
        local_c = local_c | 0x40;
      }
      local_8 = (**(code **)(**(int **)(param_1 + 0x40) + 0x18))(0x90,local_c);
    }
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_1000b81c
 * Address:  1000b81c
 * ================================================================ */

char __thiscall FUN_1000b81c(void *this,int param_1)

{
  char cVar1;
  ushort uVar2;
  uint local_10;
  undefined1 local_c [4];
  char local_8;
  
  local_8 = '\x01';
  if (param_1 < 0xe13) {
    if (param_1 == 0xe12) {
      local_8 = (**(code **)(**(int **)((int)this + 0x40) + 0x1c))(0x96,&local_10);
      if (local_8 == '\0') {
        return '\0';
      }
      if ((local_10 & 2) != 0) {
        FUN_100155fe(this,8,0x641,&DAT_1002671c);
        return '\0';
      }
      local_8 = (**(code **)(**(int **)((int)this + 0x40) + 0x1c))(0x90,&local_10);
      if (local_8 == '\0') {
        return '\0';
      }
      if ((local_10 & 2) == 0) {
        for (uVar2 = 0; uVar2 < 0x16; uVar2 = uVar2 + 1) {
          *(undefined1 *)((int)this + uVar2 + 0x14e) = 0;
        }
        uVar2 = 0;
        while( true ) {
          if (10 < uVar2) {
            return local_8;
          }
          if (local_8 == '\0') break;
          local_8 = (**(code **)(**(int **)((int)this + 0x40) + 0x1c))(0x82,&local_10);
          if (local_8 != '\0') {
            *(char *)((int)this + (uint)uVar2 * 2 + 0x14e) = (char)local_10;
            *(char *)((int)this + (uint)uVar2 * 2 + 0x14f) = (char)(local_10 >> 8);
          }
          uVar2 = uVar2 + 1;
        }
        return '\0';
      }
      FUN_100155fe(this,8,0x642,&DAT_10026718);
      return '\0';
    }
    if (param_1 < 0x642) {
      if (param_1 == 0x641) {
        local_8 = (**(code **)(**(int **)((int)this + 0x40) + 0x1c))(0x9a,&local_10);
        if (local_8 != '\0') {
          if (*(short *)((int)this + 0x3fc) == 2) {
            local_10 = local_10 | 0x4000;
          }
          else {
            local_10 = local_10 & 0xffffbfff;
          }
          local_8 = (**(code **)(**(int **)((int)this + 0x40) + 0x18))(0x9a,local_10);
          if (local_8 != '\0') {
            local_8 = (**(code **)(**(int **)((int)this + 0x40) + 0x18))(0x80,2);
          }
        }
        *(undefined4 *)((int)this + 0x400) = 0;
        return local_8;
      }
      switch(param_1) {
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
      case 0x10:
      case 0x11:
        cVar1 = (**(code **)(*(int *)this + 0x1c))(param_1);
        return cVar1;
      case 0x17:
      case 0x19:
      case 0x3d:
      case 0x3e:
switchD_1000b87d_caseD_17:
        cVar1 = (**(code **)(*(int *)this + 0x18))(param_1);
        return cVar1;
      case 0x1f:
      case 0x20:
      case 0x21:
      case 0x22:
        cVar1 = (**(code **)(*(int *)this + 0x20))(param_1);
        return cVar1;
      case 0x66:
        cVar1 = (**(code **)(*(int *)this + 0x4c))();
        return cVar1;
      }
    }
    else if (param_1 < 0x645) {
      if (param_1 == 0x644) {
        cVar1 = (**(code **)(**(int **)((int)this + 0x40) + 0x18))(0x80,0x40);
        return cVar1;
      }
      if (param_1 == 0x642) {
        cVar1 = (**(code **)(*(int *)this + 0x18))(0x642);
        return cVar1;
      }
      if (param_1 == 0x643) {
        cVar1 = (**(code **)(**(int **)((int)this + 0x40) + 0x18))(0x80,0x20);
        return cVar1;
      }
    }
    else {
      if (param_1 == 0x645) {
        cVar1 = FUN_1000b72b((int)this);
        return cVar1;
      }
      if (param_1 == 0xe11) goto switchD_1000b87d_caseD_17;
    }
  }
  else if (param_1 < 0xfa2) {
    if (param_1 == 0xfa1) {
      cVar1 = (**(code **)(**(int **)((int)this + 0x40) + 0x18))
                        (*(undefined2 *)((int)this + 0x438),*(undefined4 *)((int)this + 0x43c));
      return cVar1;
    }
    switch(param_1) {
    case 0xe13:
      cVar1 = (**(code **)(**(int **)((int)this + 0x40) + 0x18))(0x80,1);
      return cVar1;
    case 0xe14:
      local_8 = (**(code **)(**(int **)((int)this + 0x40) + 0x1c))(0x90,&local_10);
      if (local_8 == '\0') {
        return '\0';
      }
      if ((local_10 & 2) == 0) {
        cVar1 = (**(code **)(**(int **)((int)this + 0x40) + 0x18))(0x80,0x10);
        return cVar1;
      }
      FUN_100155fe(this,8,0x644,&DAT_10026720);
      return '\0';
    case 0xe15:
      return '\x01';
    case 0xe16:
      return '\x01';
    case 0xe17:
      return '\x01';
    case 0xe18:
      return '\x01';
    case 0xe19:
      FUN_10015e30((undefined4 *)((int)this + 0x14e),(undefined4 *)((int)this + 0x12a),0x16);
      uVar2 = 0;
      while( true ) {
        if (10 < uVar2) {
          return local_8;
        }
        if (local_8 == '\0') break;
        local_8 = (**(code **)(**(int **)((int)this + 0x40) + 0x18))
                            (0x82,*(undefined2 *)((int)this + (uint)uVar2 * 2 + 0x14e));
        uVar2 = uVar2 + 1;
      }
      return '\0';
    }
  }
  else {
    if (param_1 == 0xfa2) {
      cVar1 = (**(code **)(**(int **)((int)this + 0x40) + 0x1c))
                        (*(undefined2 *)((int)this + 0x438),(int)this + 0x43c);
      return cVar1;
    }
    if (param_1 == 0xfa3) {
      if (*(int *)((int)this + 0x40) != 0) {
        cVar1 = (**(code **)(**(int **)((int)this + 0x40) + 0x20))
                          (6,CONCAT22((short)((uint)local_c >> 0x10),
                                      *(undefined2 *)((int)this + 0x440)),1,(int)this + 0x442,1,
                           local_c);
        return cVar1;
      }
      return '\0';
    }
    if (param_1 == 0xfa4) {
      if (*(int *)((int)this + 0x40) != 0) {
        cVar1 = (**(code **)(**(int **)((int)this + 0x40) + 0x20))
                          (6,CONCAT22((short)((uint)local_c >> 0x10),
                                      *(undefined2 *)((int)this + 0x440)),2,(int)this + 0x442,1,
                           local_c);
        return cVar1;
      }
      return '\0';
    }
  }
  cVar1 = FUN_10013381(this,param_1);
  return cVar1;
}



/* ================================================================
 * Function: FUN_1000bea8
 * Address:  1000bea8
 * ================================================================ */

undefined1 __thiscall FUN_1000bea8(void *this,short param_1,uint param_2,undefined2 param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined2 uVar3;
  bool local_8;
  
  iVar2 = (int)param_1;
  if (iVar2 < 0x64f) {
    if (iVar2 == 0x64e) {
switchD_1000bf72_caseD_648:
      *(uint *)((int)this + 0x3f0) = param_2;
      return 1;
    }
    if (iVar2 < 0x647) {
      if (iVar2 == 0x646) {
        *(undefined2 *)((int)this + 0x410) = (undefined2)param_2;
        return 1;
      }
      if (iVar2 < 0xca) {
        if (iVar2 == 0xc9) {
          *(undefined2 *)((int)this + 0x37c) = (undefined2)param_2;
          return 1;
        }
        switch(iVar2) {
        case 0xe:
          *(undefined2 *)((int)this + 600) = (undefined2)param_2;
          return 1;
        case 0x11:
          *(undefined2 *)((int)this + 0x414) = (undefined2)param_2;
          return 1;
        case 0x66:
          local_8 = 0x1745 < (int)*(short *)((int)this + 0x360) * param_2;
          if (local_8) {
            FUN_100155fe(this,8,2,&DAT_10026724);
          }
          else {
            *(undefined2 *)((int)this + 0x2ce) = (undefined2)param_2;
          }
          local_8 = !local_8;
          return local_8;
        case 0x74:
          local_8 = 0x1745 < (int)*(short *)((int)this + 0x2ce) * param_2;
          if (local_8) {
            FUN_100155fe(this,8,2,&DAT_10026728);
          }
          else {
            *(undefined2 *)((int)this + 0x360) = (undefined2)param_2;
          }
          local_8 = !local_8;
          return local_8;
        }
      }
      else {
        if (iVar2 == 0x642) {
          *(undefined2 *)((int)this + 0x3fc) = (undefined2)param_2;
          return 1;
        }
        if (iVar2 == 0x643) {
          *(undefined2 *)((int)this + 0x3f8) = (undefined2)param_2;
          *(ushort *)((int)this + 0x410) = (ushort)(*(short *)((int)this + 0x3f8) == 4);
          return 1;
        }
        if (iVar2 == 0x644) {
          *(undefined2 *)((int)this + 0x3fa) = (undefined2)param_2;
          return 1;
        }
      }
    }
    else {
      switch(iVar2) {
      case 0x647:
        *(undefined2 *)((int)this + 0x412) = (undefined2)param_2;
        return 1;
      case 0x648:
        goto switchD_1000bf72_caseD_648;
      case 0x649:
        *(undefined2 *)((int)this + 0x3f4) = (undefined2)param_2;
        return 1;
      case 0x64a:
        *(undefined2 *)((int)this + 0x3f6) = (undefined2)param_2;
        return 1;
      case 0x64b:
        *(undefined2 *)((int)this + 0x416) = (undefined2)param_2;
        return 1;
      case 0x64c:
        *(undefined2 *)((int)this + 0x418) = (undefined2)param_2;
        return 1;
      case 0x64d:
        *(undefined2 *)((int)this + 0x41a) = (undefined2)param_2;
        return 1;
      }
    }
  }
  else if (iVar2 < 0xfa2) {
    if (iVar2 == 0xfa1) {
      *(undefined2 *)((int)this + 0x438) = (undefined2)param_2;
      return 1;
    }
    if (iVar2 < 0xe19) {
      if (iVar2 == 0xe18) {
        *(undefined2 *)((int)this + 0x3d8) = (undefined2)param_2;
        return 1;
      }
      if (iVar2 == 0x654) {
        *(undefined2 *)((int)this + 0x41c) = (undefined2)param_2;
        return 1;
      }
      if (iVar2 == 0xe12) {
        *(undefined2 *)((int)this + 0x3b8) = (undefined2)param_2;
        return 1;
      }
      if (iVar2 == 0xe15) {
        *(undefined2 *)((int)this + 0x3c8) = (undefined2)param_2;
        return 1;
      }
    }
    else {
      if (iVar2 == 0xe1b) {
        *(undefined2 *)((int)this + 1000) = (undefined2)param_2;
        return 1;
      }
      if (iVar2 == 0xe1d) {
        *(undefined2 *)((int)this + 0x3ea) = (undefined2)param_2;
        return 1;
      }
      if (iVar2 == 0xe1e) {
        *(undefined2 *)((int)this + 0x3ec) = (undefined2)param_2;
        return 1;
      }
    }
  }
  else {
    iVar2 = iVar2 + -0xfa2;
    uVar3 = (undefined2)((uint)iVar2 >> 0x10);
    switch(iVar2) {
    case 0:
      *(uint *)((int)this + 0x43c) = param_2 & 0xffff;
      return 1;
    case 1:
      if (*(int *)((int)this + 0x40) == 0) {
        return 0;
      }
      (**(code **)(**(int **)((int)this + 0x40) + 0x24))(0xfa3,param_2,CONCAT22(uVar3,param_3));
      return 1;
    case 2:
      if (*(int *)((int)this + 0x40) == 0) {
        return 0;
      }
      (**(code **)(**(int **)((int)this + 0x40) + 0x24))(0xfa4,param_2,CONCAT22(uVar3,param_3));
      return 1;
    case 3:
      if (*(int *)((int)this + 0x40) == 0) {
        return 0;
      }
      (**(code **)(**(int **)((int)this + 0x40) + 0x24))(0xfa5,param_2,param_3);
      return 1;
    case 4:
      if (*(int *)((int)this + 0x40) == 0) {
        return 0;
      }
      (**(code **)(**(int **)((int)this + 0x40) + 0x24))
                (0xfa6,param_2,CONCAT22(uVar3,param_3),iVar2,this,param_2);
      return 1;
    case 5:
      *(undefined2 *)((int)this + 0x440) = (undefined2)param_2;
      return 1;
    case 6:
      *(undefined1 *)((int)this + 0x442) = (undefined1)param_2;
      return 1;
    }
  }
  uVar1 = FUN_10013499(this,param_1,param_2,param_3);
  return uVar1;
}



/* ================================================================
 * Function: FUN_1000c424
 * Address:  1000c424
 * ================================================================ */

char __thiscall FUN_1000c424(void *this,short param_1,uint *param_2,undefined2 param_3)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  uint local_18;
  uint local_14;
  uint *local_10;
  char local_c;
  undefined1 local_8 [4];
  
  local_c = '\x01';
  local_10 = param_2;
  iVar2 = (int)param_1;
  if (iVar2 < 0x655) {
    if (iVar2 == 0x654) {
      *param_2 = (int)*(short *)((int)this + 0x41c);
      return '\x01';
    }
    if (iVar2 < 0x648) {
      if (iVar2 == 0x647) {
        *param_2 = (int)*(short *)((int)this + 0x412);
        return '\x01';
      }
      if (iVar2 < 0x643) {
        if (iVar2 == 0x642) {
          *param_2 = (int)*(short *)((int)this + 0x3fc);
          return '\x01';
        }
        if (iVar2 == 0xe) {
          *param_2 = (int)*(short *)((int)this + 600);
          return '\x01';
        }
        if (iVar2 == 0x11) {
          *param_2 = (int)*(short *)((int)this + 0x414);
          return '\x01';
        }
        if (iVar2 == 0x641) {
          local_18 = 0;
          local_c = (**(code **)(**(int **)((int)this + 0x40) + 0x1c))(0x94,&local_14);
          if (local_c != '\0') {
            if ((local_14 & 0x10) == 0) {
              local_18 = (local_14 & 0xf) * 0x10000;
              local_c = (**(code **)(**(int **)((int)this + 0x40) + 0x1c))(0x92,&local_14);
              if (local_c != '\0') {
                local_14 = local_14 & 0xffff;
                local_18 = local_18 + local_14;
                if (0xfffff < local_18) {
                  FUN_100155fe(this,8,2,&DAT_10026730);
                  local_c = '\0';
                }
              }
            }
            else {
              FUN_100155fe(this,8,0x645,&DAT_1002672c);
              local_c = '\0';
            }
          }
          if (local_c == '\0') {
            return '\0';
          }
          *(uint *)((int)this + 0x400) = local_18;
          *param_2 = local_18;
          return local_c;
        }
      }
      else {
        if (iVar2 == 0x643) {
          *param_2 = (int)*(short *)((int)this + 0x3f8);
          return '\x01';
        }
        if (iVar2 == 0x644) {
          *param_2 = (int)*(short *)((int)this + 0x3fa);
          return '\x01';
        }
        if (iVar2 == 0x646) {
          *param_2 = (int)*(short *)((int)this + 0x410);
          return '\x01';
        }
      }
    }
    else {
      switch(iVar2) {
      case 0x648:
      case 0x64e:
        *param_2 = *(uint *)((int)this + 0x3f0);
        return '\x01';
      case 0x649:
        *param_2 = (int)*(short *)((int)this + 0x3f4);
        return '\x01';
      case 0x64a:
        *param_2 = (int)*(short *)((int)this + 0x3f6);
        return '\x01';
      case 0x64b:
        *param_2 = (int)*(short *)((int)this + 0x416);
        return '\x01';
      case 0x64c:
        *param_2 = (int)*(short *)((int)this + 0x418);
        return '\x01';
      case 0x64d:
        *param_2 = (int)*(short *)((int)this + 0x41a);
        return '\x01';
      }
    }
  }
  else if (iVar2 < 0xfa3) {
    if (iVar2 == 0xfa2) {
      *param_2 = *(uint *)((int)this + 0x43c);
      return '\x01';
    }
    if (iVar2 < 0xe1c) {
      if (iVar2 == 0xe1b) {
        *param_2 = (int)*(short *)((int)this + 1000);
        return '\x01';
      }
      if (iVar2 == 0xe12) {
        *param_2 = (int)*(short *)((int)this + 0x3b8);
        return '\x01';
      }
      if (iVar2 == 0xe15) {
        *param_2 = (int)*(short *)((int)this + 0x3c8);
        return '\x01';
      }
      if (iVar2 == 0xe18) {
        *param_2 = (int)*(short *)((int)this + 0x3d8);
        return '\x01';
      }
    }
    else {
      if (iVar2 == 0xe1d) {
        *param_2 = (uint)*(ushort *)((int)this + 0x3ea);
        return '\x01';
      }
      if (iVar2 == 0xe1e) {
        *param_2 = (uint)*(ushort *)((int)this + 0x3ec);
        return '\x01';
      }
      if (iVar2 == 0xfa1) {
        *param_2 = (uint)*(ushort *)((int)this + 0x438);
        return '\x01';
      }
    }
  }
  else {
    uVar3 = (undefined2)((uint)(iVar2 + -0xfa3) >> 0x10);
    switch(iVar2 + -0xfa3) {
    case 0:
      if (*(int *)((int)this + 0x40) != 0) {
        (**(code **)(**(int **)((int)this + 0x40) + 0x28))(0xfa3,local_8,param_3);
        return local_c;
      }
      return '\0';
    case 1:
      if (*(int *)((int)this + 0x40) != 0) {
        (**(code **)(**(int **)((int)this + 0x40) + 0x28))(0xfa4,param_2,CONCAT22(uVar3,param_3));
        return local_c;
      }
      return '\0';
    case 2:
      if (*(int *)((int)this + 0x40) != 0) {
        (**(code **)(**(int **)((int)this + 0x40) + 0x28))(0xfa5,local_8,CONCAT22(uVar3,param_3));
        return local_c;
      }
      return '\0';
    case 3:
      if (*(int *)((int)this + 0x40) != 0) {
        (**(code **)(**(int **)((int)this + 0x40) + 0x28))(0xfa6,param_2,CONCAT22(uVar3,param_3));
        return local_c;
      }
      return '\0';
    case 4:
      *param_2 = (uint)*(ushort *)((int)this + 0x440);
      return '\x01';
    case 5:
      *param_2 = (uint)*(byte *)((int)this + 0x442);
      return '\x01';
    }
  }
  cVar1 = FUN_10013a70(this,param_1,(int *)param_2,param_3);
  return cVar1;
}



/* ================================================================
 * Function: FUN_1000c973
 * Address:  1000c973
 * ================================================================ */

undefined1 __thiscall
FUN_1000c973(void *this,short param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4)

{
  int iVar1;
  undefined1 local_8;
  
  local_8 = 1;
  iVar1 = (int)param_1;
  if (iVar1 < 0xe12) {
    if (iVar1 == 0xe11) {
      *(undefined4 *)((int)this + 0x3b0) = param_2;
      *(undefined4 *)((int)this + 0x3b4) = param_3;
      return 1;
    }
    switch(iVar1) {
    case 0x645:
      *(undefined4 *)((int)this + 0x408) = param_2;
      *(undefined4 *)((int)this + 0x40c) = param_3;
      break;
    default:
      goto switchD_1000c9ba_caseD_646;
    case 0x651:
      *(undefined4 *)((int)this + 0x420) = param_2;
      *(undefined4 *)((int)this + 0x424) = param_3;
      break;
    case 0x652:
      *(undefined4 *)((int)this + 0x428) = param_2;
      *(undefined4 *)((int)this + 0x42c) = param_3;
      break;
    case 0x653:
      *(undefined4 *)((int)this + 0x430) = param_2;
      *(undefined4 *)((int)this + 0x434) = param_3;
    }
  }
  else {
    if (iVar1 == 0xe14) {
      *(undefined4 *)((int)this + 0x3c0) = param_2;
      *(undefined4 *)((int)this + 0x3c4) = param_3;
      return 1;
    }
    if (iVar1 == 0xe17) {
      *(undefined4 *)((int)this + 0x3d0) = param_2;
      *(undefined4 *)((int)this + 0x3d4) = param_3;
      return 1;
    }
    if (iVar1 == 0xe1a) {
      *(undefined4 *)((int)this + 0x3e0) = param_2;
      *(undefined4 *)((int)this + 0x3e4) = param_3;
      return 1;
    }
switchD_1000c9ba_caseD_646:
    local_8 = FUN_10013f8f(this,param_1,(double)CONCAT44(param_3,param_2),param_4);
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_1000caeb
 * Address:  1000caeb
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char __thiscall FUN_1000caeb(void *this,short param_1,double *param_2,undefined2 param_3)

{
  char cVar1;
  int iVar2;
  float10 fVar3;
  uint uStack_34;
  uint uStack_28;
  undefined1 local_18 [4];
  uint local_14;
  double local_10;
  char local_8;
  
  local_8 = '\x01';
  iVar2 = (int)param_1;
  if (iVar2 < 0xe15) {
    if (iVar2 == 0xe14) {
      *(undefined4 *)param_2 = *(undefined4 *)((int)this + 0x3c0);
      *(undefined4 *)((int)param_2 + 4) = *(undefined4 *)((int)this + 0x3c4);
      return '\x01';
    }
    if (iVar2 < 0x653) {
      if (iVar2 == 0x652) {
        *(undefined4 *)param_2 = *(undefined4 *)((int)this + 0x428);
        *(undefined4 *)((int)param_2 + 4) = *(undefined4 *)((int)this + 0x42c);
        return '\x01';
      }
      if (iVar2 == 0x645) {
        *(undefined4 *)param_2 = *(undefined4 *)((int)this + 0x408);
        *(undefined4 *)((int)param_2 + 4) = *(undefined4 *)((int)this + 0x40c);
        return '\x01';
      }
      if (iVar2 == 0x64f) {
        cVar1 = (**(code **)(**(int **)((int)this + 0x40) + 0x20))
                          (6,0x90,2,(short)&local_14,2,local_18);
        if (cVar1 == '\0') {
          return '\0';
        }
        if ((local_14 & 0x80) != 0) {
          if ((local_14 >> 8 & 0x80) == 0) {
            uStack_28 = 0;
          }
          else {
            uStack_28 = 0xbfe00000;
          }
          *param_2 = -((double)(local_14 & 0xff ^ 0xff) + (double)((ulonglong)uStack_28 << 0x20) +
                      _DAT_10021300);
          return cVar1;
        }
        if ((local_14 >> 8 & 0x80) == 0) {
          uStack_34 = 0;
        }
        else {
          uStack_34 = 0x3fe00000;
        }
        *param_2 = (double)(local_14 & 0xff) + (double)((ulonglong)uStack_34 << 0x20);
        return cVar1;
      }
      if (iVar2 == 0x651) {
        *(undefined4 *)param_2 = *(undefined4 *)((int)this + 0x420);
        *(undefined4 *)((int)param_2 + 4) = *(undefined4 *)((int)this + 0x424);
        return '\x01';
      }
    }
    else {
      if (iVar2 == 0x653) {
        *(undefined4 *)param_2 = *(undefined4 *)((int)this + 0x430);
        *(undefined4 *)((int)param_2 + 4) = *(undefined4 *)((int)this + 0x434);
        return '\x01';
      }
      if (iVar2 == 0xe11) {
        *(undefined4 *)param_2 = *(undefined4 *)((int)this + 0x3b0);
        *(undefined4 *)((int)param_2 + 4) = *(undefined4 *)((int)this + 0x3b4);
        return '\x01';
      }
    }
switchD_1000cb93_caseD_e18:
    local_8 = FUN_100143fc(this,param_1,(undefined4 *)param_2,param_3);
  }
  else {
    switch(iVar2) {
    case 0xe17:
      *(undefined4 *)param_2 = *(undefined4 *)((int)this + 0x3d0);
      *(undefined4 *)((int)param_2 + 4) = *(undefined4 *)((int)this + 0x3d4);
      break;
    default:
      goto switchD_1000cb93_caseD_e18;
    case 0xe1a:
      *(undefined4 *)param_2 = *(undefined4 *)((int)this + 0x3e0);
      *(undefined4 *)((int)param_2 + 4) = *(undefined4 *)((int)this + 0x3e4);
      break;
    case 0xe20:
      fVar3 = (float10)FUN_10009eba();
      local_10 = (double)fVar3;
      fVar3 = FUN_100123e8(local_10,7,*(short *)((int)this + 0x3b8));
      *param_2 = (double)fVar3;
      break;
    case 0xe21:
      fVar3 = (float10)FUN_10009eba();
      local_10 = (double)fVar3;
      fVar3 = FUN_100123e8(local_10,7,*(short *)((int)this + 0x3c8));
      *param_2 = (double)fVar3;
      break;
    case 0xe22:
      fVar3 = (float10)FUN_10009eba();
      local_10 = (double)fVar3;
      fVar3 = FUN_100123e8(local_10,7,*(short *)((int)this + 0x3d8));
      *param_2 = (double)fVar3;
      break;
    case 0xe23:
      local_10 = (double)(((uint)*(byte *)((int)this + 0x15d) * 0x100 +
                          (uint)*(byte *)((int)this + 0x15b)) * 0x100 +
                         (uint)*(byte *)((int)this + 0x159)) * _DAT_10021330 * _DAT_10021328;
      fVar3 = FUN_100123e8(local_10,7,*(short *)((int)this + 1000));
      *param_2 = (double)fVar3;
    }
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_1000ceb5
 * Address:  1000ceb5
 * ================================================================ */

undefined1 __thiscall FUN_1000ceb5(void *this,short param_1,undefined4 *param_2,short param_3)

{
  undefined1 uVar1;
  undefined1 local_c [4];
  undefined1 local_8;
  
  local_8 = 1;
  if (param_1 < 0xe1a) {
    if (param_1 == 0xe19) {
      FUN_10015e30((undefined4 *)((int)this + 0x121),param_2,5);
      return local_8;
    }
    if (param_1 == 0x650) {
      uVar1 = (**(code **)(**(int **)((int)this + 0x40) + 0x20))
                        (6,0xa000,8,param_2,(int)param_3,local_c);
      return uVar1;
    }
    if (param_1 == 0xe13) {
      FUN_10015e30((undefined4 *)((int)this + 0x117),param_2,5);
      return local_8;
    }
    if (param_1 == 0xe16) {
      FUN_10015e30((undefined4 *)((int)this + 0x11c),param_2,5);
      return local_8;
    }
  }
  else {
    if (param_1 == 0xe1c) {
      FUN_10015e30((undefined4 *)((int)this + 0x126),param_2,3);
      return local_8;
    }
    if (param_1 == 0xe1f) {
      FUN_10015e30((undefined4 *)((int)this + 0x12a),param_2,0x16);
      return local_8;
    }
  }
  uVar1 = FUN_10014827(this,param_1,param_2,param_3);
  return uVar1;
}



/* ================================================================
 * Function: FUN_1000cfef
 * Address:  1000cfef
 * ================================================================ */

undefined1 __thiscall FUN_1000cfef(void *this,short param_1,char *param_2,short param_3)

{
  undefined1 uVar1;
  float10 fVar2;
  short local_1c;
  undefined1 local_18 [4];
  double local_14;
  undefined4 local_c;
  undefined1 local_8;
  
  local_8 = 1;
  if (param_1 < 0xe1a) {
    if (param_1 == 0xe19) {
      if (param_3 < 5) {
        return 0;
      }
      fVar2 = FUN_100123e8((double)CONCAT26((short)((uint)*(undefined4 *)((int)this + 0x3d4) >> 0x10
                                                   ),*(undefined6 *)((int)this + 0x3d0)),
                           *(short *)((int)this + 0x3d8),7);
      local_14 = (double)fVar2;
      FUN_10009c4e();
      return local_8;
    }
    if (param_1 == 0x650) {
      uVar1 = (**(code **)(**(int **)((int)this + 0x40) + 0x20))
                        (6,0xa000,7,(short)param_2,param_3,local_18);
      return uVar1;
    }
    if (param_1 == 0xe13) {
      if (param_3 < 5) {
        return 0;
      }
      fVar2 = FUN_100123e8((double)CONCAT26((short)((uint)*(undefined4 *)((int)this + 0x3b4) >> 0x10
                                                   ),*(undefined6 *)((int)this + 0x3b0)),
                           *(short *)((int)this + 0x3b8),7);
      local_14 = (double)fVar2;
      FUN_10009c4e();
      return local_8;
    }
    if (param_1 == 0xe16) {
      if (param_3 < 5) {
        return 0;
      }
      fVar2 = FUN_100123e8((double)CONCAT26((short)((uint)*(undefined4 *)((int)this + 0x3c4) >> 0x10
                                                   ),*(undefined6 *)((int)this + 0x3c0)),
                           *(short *)((int)this + 0x3c8),7);
      local_14 = (double)fVar2;
      FUN_10009c4e();
      return local_8;
    }
  }
  else {
    if (param_1 == 0xe1c) {
      if (param_3 < 3) {
        return 0;
      }
      FUN_10012584(this,*(int *)((int)this + 0x3e4),*(undefined4 *)((int)this + 0x3e0),
                   *(int *)((int)this + 0x3e4),*(short *)((int)this + 1000),5e-08,&local_c);
      if (param_2 == (char *)0x0) {
        return local_8;
      }
      *param_2 = (char)local_c;
      param_2[1] = (char)((uint)local_c >> 8);
      param_2[2] = (char)((uint)local_c >> 0x10);
      return local_8;
    }
    if (param_1 == 0xe1f) {
      if (param_3 < 0x16) {
        return 0;
      }
      for (local_1c = 0; local_1c < 0x16; local_1c = local_1c + 1) {
        param_2[local_1c] = *(char *)((int)this + local_1c + 0x14e);
      }
      return 1;
    }
  }
  uVar1 = FUN_100148f3(this,param_1,param_2,param_3);
  return uVar1;
}



/* ================================================================
 * Function: FUN_1000d2af
 * Address:  1000d2af
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 __thiscall FUN_1000d2af(void *this,int param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_24;
  undefined4 uStack_20;
  short local_1c [2];
  undefined4 local_18;
  undefined4 local_14;
  short local_10 [2];
  uint local_c;
  undefined1 local_8;
  
  local_8 = 1;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 2;
  if (param_1 < 0x46) {
    if (param_1 == 0x45) {
      *param_2 = 1;
      param_2[1] = 4;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0x417312d0;
      param_2[6] = 0;
      param_2[7] = 0;
      param_2[10] = 0;
      param_2[0xb] = 0x3ff00000;
      param_2[8] = *(undefined4 *)((int)this + 0x2a0);
      param_2[9] = *(undefined4 *)((int)this + 0x2a4);
      return 1;
    }
    switch(param_1) {
    case 0xb:
      *param_2 = 4;
      param_2[1] = 9;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
      param_2[10] = 0;
      param_2[0xb] = 0;
      *(double *)(param_2 + 8) = (double)(int)*(short *)((int)this + 0x24e);
      return 1;
    case 0xc:
      *param_2 = 1;
      param_2[1] = 4;
      param_2[2] = 0;
      param_2[3] = 0x40000000;
      param_2[4] = 0;
      param_2[5] = 0x40c38780;
      param_2[6] = 0;
      param_2[7] = 0x408f4000;
      param_2[10] = 0;
      param_2[0xb] = 0x3ff00000;
      param_2[8] = *(undefined4 *)((int)this + 0x250);
      param_2[9] = *(undefined4 *)((int)this + 0x254);
      return 1;
    case 0xd:
      *param_2 = 1;
      param_2[1] = 4;
      param_2[2] = 0;
      param_2[3] = 0xc0180000;
      param_2[4] = 0;
      param_2[5] = 0x40180000;
      param_2[6] = 0;
      param_2[7] = 0x40100000;
      param_2[10] = 0x9999999a;
      param_2[0xb] = 0x3fa99999;
      param_2[8] = *(undefined4 *)((int)this + 0x260);
      param_2[9] = *(undefined4 *)((int)this + 0x264);
      return 1;
    case 0xe:
      *param_2 = 2;
      param_2[1] = 9;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0x3ff00000;
      param_2[6] = 0;
      param_2[7] = 0;
      param_2[10] = 0;
      param_2[0xb] = 0x3ff00000;
      *(double *)(param_2 + 8) = (double)(int)*(short *)((int)this + 600);
      return 1;
    case 0xf:
      *param_2 = 2;
      param_2[1] = 9;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0x3ff00000;
      param_2[6] = 0;
      param_2[7] = 0;
      param_2[10] = 0;
      param_2[0xb] = 0x3ff00000;
      *(double *)(param_2 + 8) = (double)(int)*(short *)((int)this + 0x25a);
      return 1;
    case 0x10:
      *param_2 = 2;
      param_2[1] = 9;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0x3ff00000;
      param_2[6] = 0;
      param_2[7] = 0x3ff00000;
      param_2[10] = 0;
      param_2[0xb] = 0;
      *(double *)(param_2 + 8) = (double)(int)*(short *)((int)this + 0x268);
      return 1;
    default:
      goto switchD_1000d35d_caseD_11;
    case 0x15:
      *param_2 = 1;
      param_2[1] = 4;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0x8a333333;
      param_2[5] = 0x4178e700;
      param_2[6] = 0;
      param_2[7] = 0x40c38800;
      param_2[10] = 0;
      param_2[0xb] = 0x3ff00000;
      param_2[8] = *(undefined4 *)((int)this + 0x270);
      param_2[9] = *(undefined4 *)((int)this + 0x274);
      return 1;
    case 0x16:
      *param_2 = 3;
      param_2[1] = 9;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0x401c0000;
      param_2[10] = 0;
      param_2[0xb] = 0;
      *(double *)(param_2 + 8) = (double)(int)*(short *)((int)this + 0x278);
      return 1;
    case 0x17:
      goto switchD_1000d35d_caseD_17;
    case 0x18:
      *param_2 = 3;
      param_2[1] = 9;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0x401c0000;
      param_2[10] = 0;
      param_2[0xb] = 0;
      *(double *)(param_2 + 8) = (double)(int)*(short *)((int)this + 0x288);
      return 1;
    case 0x19:
      *param_2 = 2;
      param_2[1] = 9;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0x3ff00000;
      param_2[6] = 0;
      param_2[7] = 0x40990800;
      param_2[10] = 0;
      param_2[0xb] = 0;
      *(double *)(param_2 + 8) = (double)(int)*(short *)((int)this + 0x28a);
      return 1;
    case 0x1f:
      *param_2 = 1;
      param_2[1] = 4;
      param_2[2] = 0x33333333;
      param_2[3] = 0x3fb33333;
      param_2[4] = 0;
      param_2[5] = 0x40f38800;
      param_2[6] = 0;
      param_2[7] = 0x40c38800;
      param_2[10] = 0;
      param_2[0xb] = 0x3ff00000;
      param_2[8] = *(undefined4 *)((int)this + 0x2b0);
      param_2[9] = *(undefined4 *)((int)this + 0x2b4);
      return 1;
    case 0x20:
      *param_2 = 1;
      param_2[1] = 2;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0x40bfff00;
      param_2[6] = 0;
      param_2[7] = 0;
      param_2[10] = 0;
      param_2[0xb] = 0x3ff00000;
      *(double *)(param_2 + 8) = (double)*(int *)((int)this + 0x2b8);
      return 1;
    case 0x21:
      *param_2 = 1;
      param_2[1] = 1;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
      param_2[10] = 0;
      param_2[0xb] = 0;
      *(double *)(param_2 + 8) = (double)(int)*(short *)((int)this + 700);
      return 1;
    case 0x22:
      *param_2 = 1;
      param_2[1] = 4;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0x9947ae14;
      param_2[5] = 0x41699999;
      param_2[6] = 0;
      param_2[7] = 0x412e8480;
      param_2[10] = 0x9999999a;
      param_2[0xb] = 0x3f899999;
      param_2[8] = *(undefined4 *)((int)this + 0x2c0);
      param_2[9] = *(undefined4 *)((int)this + 0x2c4);
      return 1;
    case 0x23:
      *param_2 = 3;
      param_2[1] = 9;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0x3ff00000;
      param_2[10] = 0;
      param_2[0xb] = 0;
      *(double *)(param_2 + 8) = (double)(int)*(short *)((int)this + 0x2c8);
      return 1;
    }
  }
  if (0x646 < param_1) {
    if (param_1 < 0xe13) {
      if (param_1 == 0xe12) {
        *param_2 = 3;
        param_2[1] = 9;
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[4] = 0;
        param_2[5] = 0;
        param_2[6] = 0;
        param_2[7] = 0x3ff00000;
        param_2[10] = 0;
        param_2[0xb] = 0;
        *(double *)(param_2 + 8) = (double)(int)*(short *)((int)this + 0x3b8);
        return 1;
      }
      if (param_1 < 0x652) {
        if (param_1 == 0x651) {
          *param_2 = 1;
          param_2[1] = 4;
          param_2[2] = 0;
          param_2[3] = 0;
          param_2[4] = 0;
          param_2[5] = 0;
          param_2[6] = 0x47ae147b;
          param_2[7] = 0x3fa47ae1;
          param_2[10] = 0x9999999a;
          param_2[0xb] = 0x3fb99999;
          param_2[8] = *(undefined4 *)((int)this + 0x420);
          param_2[9] = *(undefined4 *)((int)this + 0x424);
          return 1;
        }
        if (param_1 == 0x647) {
          *param_2 = 1;
          param_2[1] = 1;
          param_2[2] = 0;
          param_2[3] = 0;
          param_2[4] = 0;
          param_2[5] = 0;
          param_2[6] = 0;
          param_2[7] = 0;
          param_2[10] = 0;
          param_2[0xb] = 0;
          *(double *)(param_2 + 8) = (double)(int)*(short *)((int)this + 0x412);
          return 1;
        }
        if (param_1 == 0x64e) {
          *param_2 = 1;
          param_2[1] = 7;
          param_2[2] = 0;
          param_2[3] = 0x3ff00000;
          param_2[4] = 0xbb000000;
          param_2[5] = 0x41b744e8;
          param_2[6] = 0;
          param_2[7] = 0x3ff00000;
          param_2[10] = 0;
          param_2[0xb] = 0x3ff00000;
          *(double *)(param_2 + 8) = (double)*(uint *)((int)this + 0x3f0);
          return 1;
        }
        if (param_1 == 0x64f) {
          *param_2 = 1;
          param_2[1] = 4;
          param_2[2] = 0;
          param_2[3] = 0;
          param_2[4] = 0xffffffff;
          param_2[5] = 0x7fefffff;
          param_2[6] = 0;
          param_2[7] = 0;
          param_2[10] = 0;
          param_2[0xb] = 0;
          (**(code **)(*(int *)this + 0x30))(0x64f,param_2 + 8,0);
          param_2[0xc] = 1;
          return local_8;
        }
      }
      else {
        if (param_1 == 0x652) {
          *param_2 = 1;
          param_2[1] = 4;
          param_2[2] = 0;
          param_2[3] = 0;
          param_2[4] = 0;
          param_2[5] = 0;
          param_2[6] = 0x47ae147b;
          param_2[7] = 0x3fa47ae1;
          param_2[10] = 0x9999999a;
          param_2[0xb] = 0x3fb99999;
          param_2[8] = *(undefined4 *)((int)this + 0x428);
          param_2[9] = *(undefined4 *)((int)this + 0x42c);
          return 1;
        }
        if (param_1 == 0x653) {
          *param_2 = 1;
          param_2[1] = 4;
          param_2[2] = 0;
          param_2[3] = 0;
          param_2[4] = 0;
          param_2[5] = 0;
          param_2[6] = 0x47ae147b;
          param_2[7] = 0x3fa47ae1;
          param_2[10] = 0x9999999a;
          param_2[0xb] = 0x3fb99999;
          param_2[8] = *(undefined4 *)((int)this + 0x430);
          param_2[9] = *(undefined4 *)((int)this + 0x434);
          return 1;
        }
        if (param_1 == 0x7d1) {
          *param_2 = 4;
          param_2[1] = 9;
          param_2[2] = 0;
          param_2[3] = 0;
          param_2[4] = 0;
          param_2[5] = 0;
          param_2[10] = 0;
          param_2[0xb] = 0;
          if (*(int *)((int)this + 0x40) == 0) {
            local_c = 0x13;
          }
          else {
            (**(code **)(**(int **)((int)this + 0x40) + 0x28))(0x7d1,&local_c,0);
          }
          *(double *)(param_2 + 8) = (double)local_c;
          param_2[6] = param_2[8];
          param_2[7] = param_2[9];
          return local_8;
        }
      }
    }
    else if (param_1 < 0x2396) {
      if (param_1 == 0x2395) {
        (**(code **)(**(int **)((int)this + 0x48) + 8))(0x2395,local_10,0);
        *param_2 = 1;
        param_2[1] = 1;
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[4] = 0;
        param_2[5] = 0x3ff00000;
        param_2[6] = 0;
        param_2[7] = 0;
        param_2[10] = 0;
        param_2[0xb] = 0x3ff00000;
        *(double *)(param_2 + 8) = (double)(int)local_10[0];
        return local_8;
      }
      if (param_1 == 0xe15) {
        *param_2 = 3;
        param_2[1] = 9;
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[4] = 0;
        param_2[5] = 0;
        param_2[6] = 0;
        param_2[7] = 0x3ff00000;
        param_2[10] = 0;
        param_2[0xb] = 0;
        *(double *)(param_2 + 8) = (double)(int)*(short *)((int)this + 0x3c8);
        return 1;
      }
      if (param_1 == 0xe18) {
        *param_2 = 3;
        param_2[1] = 9;
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[4] = 0;
        param_2[5] = 0;
        param_2[6] = 0;
        param_2[7] = 0x401c0000;
        param_2[10] = 0;
        param_2[0xb] = 0;
        *(double *)(param_2 + 8) = (double)(int)*(short *)((int)this + 0x3d8);
        return 1;
      }
      if (param_1 == 0xe1b) {
        *param_2 = 3;
        param_2[1] = 9;
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[4] = 0;
        param_2[5] = 0;
        param_2[6] = 0;
        param_2[7] = 0x3ff00000;
        param_2[10] = 0;
        param_2[0xb] = 0;
        *(double *)(param_2 + 8) = (double)(int)*(short *)((int)this + 1000);
        return 1;
      }
    }
    else {
      if (param_1 == 0x2396) {
        (**(code **)(**(int **)((int)this + 0x48) + 0x10))(0x2396,&local_18,0);
        *param_2 = 1;
        param_2[1] = 1;
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[4] = 0xeb1c432d;
        param_2[5] = 0x408a36e2;
        param_2[6] = 0;
        param_2[7] = 0;
        param_2[10] = 0xeb1c432d;
        param_2[0xb] = 0x3f0a36e2;
        param_2[8] = local_18;
        param_2[9] = local_14;
        return local_8;
      }
      if (param_1 == 0x2397) {
        (**(code **)(**(int **)((int)this + 0x48) + 8))(0x2396,local_1c,0);
        *param_2 = 3;
        param_2[1] = 9;
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[4] = 0;
        param_2[5] = 0;
        param_2[6] = 0;
        param_2[7] = 0x40000000;
        param_2[10] = 0;
        param_2[0xb] = 0;
        *(double *)(param_2 + 8) = (double)(int)local_1c[0];
        return local_8;
      }
    }
switchD_1000d35d_caseD_11:
    uVar1 = FUN_100149d3(this,param_1,param_2);
    return uVar1;
  }
  if (param_1 == 0x646) {
    *param_2 = 1;
    param_2[1] = 1;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    *(double *)(param_2 + 8) = (double)(int)*(short *)((int)this + 0x410);
    return 1;
  }
  if (0x6e < param_1) {
    if (param_1 < 0x644) {
      if (param_1 == 0x643) {
        *param_2 = 5;
        param_2[1] = 9;
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[4] = 0;
        param_2[5] = 0;
        param_2[6] = 0;
        param_2[7] = 0x40000000;
        param_2[10] = 0;
        param_2[0xb] = 0;
        *(double *)(param_2 + 8) = (double)(int)*(short *)((int)this + 0x3f8);
        return 1;
      }
      if (param_1 == 0x6f) {
        *param_2 = 3;
        param_2[1] = 9;
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[4] = 0;
        param_2[5] = 0;
        param_2[6] = 0;
        param_2[7] = 0x401c0000;
        param_2[10] = 0;
        param_2[0xb] = 0;
        *(double *)(param_2 + 8) = (double)(int)*(short *)((int)this + 0x2e8);
        return 1;
      }
      if (param_1 == 0x641) {
        *param_2 = 1;
        param_2[1] = 2;
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[4] = 0;
        param_2[5] = 0;
        param_2[6] = 0;
        param_2[7] = 0;
        param_2[10] = 0;
        param_2[0xb] = 0;
        *(double *)(param_2 + 8) = (double)*(int *)((int)this + 0x400);
        param_2[0xc] = 1;
        return 1;
      }
      if (param_1 == 0x642) {
        *param_2 = 2;
        param_2[1] = 9;
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[4] = 0;
        param_2[5] = 0;
        param_2[6] = 0;
        param_2[7] = 0x3ff00000;
        param_2[10] = 0;
        param_2[0xb] = 0;
        *(double *)(param_2 + 8) = (double)(int)*(short *)((int)this + 0x3fc);
        return 1;
      }
    }
    else {
      if (param_1 == 0x644) {
        *param_2 = 4;
        param_2[1] = 9;
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[4] = 0;
        param_2[5] = 0;
        param_2[6] = 0;
        param_2[7] = 0x40000000;
        param_2[10] = 0;
        param_2[0xb] = 0;
        *(double *)(param_2 + 8) = (double)(int)*(short *)((int)this + 0x3fa);
        return 1;
      }
      if (param_1 == 0x645) {
        *param_2 = 1;
        param_2[1] = 4;
        param_2[2] = 0x9999999a;
        param_2[3] = 0x3fb99999;
        param_2[4] = 0;
        param_2[5] = 0x40240000;
        param_2[6] = 0x9999999a;
        param_2[7] = 0x3fb99999;
        param_2[10] = 0x9999999a;
        param_2[0xb] = 0x3fb99999;
        param_2[8] = *(undefined4 *)((int)this + 0x408);
        param_2[9] = *(undefined4 *)((int)this + 0x40c);
        return 1;
      }
    }
    goto switchD_1000d35d_caseD_11;
  }
  if (param_1 == 0x6e) goto switchD_1000d35d_caseD_17;
  switch(param_1) {
  case 0x46:
    *param_2 = 3;
    param_2[1] = 9;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0x401c0000;
    param_2[10] = 0;
    param_2[0xb] = 0;
    *(double *)(param_2 + 8) = (double)(int)*(short *)((int)this + 0x2a8);
    break;
  default:
    goto switchD_1000d35d_caseD_11;
  case 0x68:
    *param_2 = 1;
    param_2[1] = 4;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0x8a333333;
    param_2[5] = 0x4178e700;
    param_2[6] = 0;
    param_2[7] = 0x40c38800;
    param_2[10] = 0;
    param_2[0xb] = 0x3ff00000;
    param_2[8] = *(undefined4 *)((int)this + 0x2f0);
    param_2[9] = *(undefined4 *)((int)this + 0x2f4);
    break;
  case 0x69:
    *param_2 = 3;
    param_2[1] = 9;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0x401c0000;
    param_2[10] = 0;
    param_2[0xb] = 0;
    *(double *)(param_2 + 8) = (double)(int)*(short *)((int)this + 0x2f8);
    break;
  case 0x6a:
    *param_2 = 1;
    param_2[1] = 4;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0x8a333333;
    param_2[5] = 0x4178e700;
    param_2[6] = 0;
    param_2[7] = 0x40c38800;
    param_2[10] = 0;
    param_2[0xb] = 0x3ff00000;
    param_2[8] = *(undefined4 *)((int)this + 0x300);
    param_2[9] = *(undefined4 *)((int)this + 0x304);
    break;
  case 0x6b:
    *param_2 = 3;
    param_2[1] = 9;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0x401c0000;
    param_2[10] = 0;
    param_2[0xb] = 0;
    *(double *)(param_2 + 8) = (double)(int)*(short *)((int)this + 0x308);
    break;
  case 0x6c:
switchD_1000d35d_caseD_17:
    if (*(short *)((int)this + 0x37c) == 0) {
      param_2[2] = 0;
      param_2[3] = 0x3ff90000;
    }
    else {
      if ((*(short *)((int)this + 0x24e) == 0) || (*(short *)((int)this + 0x24e) == 3)) {
        local_24 = *(undefined4 *)((int)this + 0x380);
        uStack_20 = *(undefined4 *)((int)this + 900);
      }
      else {
        if (*(short *)((int)this + 0x28a) == 0x642) {
          local_9c = *(undefined4 *)((int)this + 0x380);
          local_98 = *(undefined4 *)((int)this + 900);
        }
        else {
          local_9c = 0;
          local_98 = 0;
        }
        local_24 = local_9c;
        uStack_20 = local_98;
      }
      *(double *)(param_2 + 2) =
           *(double *)((int)this + 0x388) - (double)CONCAT44(uStack_20,local_24);
      if (*(double *)(param_2 + 2) < _DAT_100212f8) {
        param_2[2] = 0;
        param_2[3] = 0x3ff90000;
      }
    }
    *param_2 = 1;
    param_2[1] = 4;
    param_2[4] = 0xa3333333;
    param_2[5] = 0x4178e700;
    param_2[6] = param_2[2];
    param_2[7] = param_2[3];
    param_2[10] = 0;
    param_2[0xb] = 0x3ff00000;
    if (param_1 == 0x17) {
      param_2[8] = *(undefined4 *)((int)this + 0x280);
      param_2[9] = *(undefined4 *)((int)this + 0x284);
    }
    else if (param_1 == 0x6c) {
      param_2[8] = *(undefined4 *)((int)this + 0x2d0);
      param_2[9] = *(undefined4 *)((int)this + 0x2d4);
    }
    else {
      param_2[8] = *(undefined4 *)((int)this + 0x2e0);
      param_2[9] = *(undefined4 *)((int)this + 0x2e4);
    }
    break;
  case 0x6d:
    *param_2 = 3;
    param_2[1] = 9;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0x401c0000;
    param_2[10] = 0;
    param_2[0xb] = 0;
    *(double *)(param_2 + 8) = (double)(int)*(short *)((int)this + 0x2d8);
  }
  return 1;
}



/* ================================================================
 * Function: FUN_1000eb27
 * Address:  1000eb27
 * ================================================================ */

undefined1 FUN_1000eb27(int param_1,int param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  undefined1 local_8;
  
  local_8 = 1;
  if (param_1 < 0x70) {
    if (param_1 != 0x6f) {
      switch(param_1) {
      case 0xb:
        switch(param_2) {
        case 0:
          *param_3 = 0;
          return 1;
        case 1:
          *param_3 = 1;
          return 1;
        case 2:
          *param_3 = 2;
          return 1;
        case 3:
          *param_3 = 3;
          return 1;
        default:
          return 0;
        }
      default:
        goto switchD_1000eb68_caseD_c;
      case 0xe:
        if (param_2 == 0) {
          *param_3 = 0;
          return 1;
        }
        if (param_2 != 1) {
          return 0;
        }
        *param_3 = 1;
        return 1;
      case 0xf:
        if (param_2 == 0) {
          *param_3 = 0;
          return 1;
        }
        if (param_2 != 1) {
          return 0;
        }
        *param_3 = 1;
        return 1;
      case 0x10:
        if (param_2 == 0) {
          *param_3 = 0;
          return 1;
        }
        if (param_2 != 1) {
          return 0;
        }
        *param_3 = 1;
        return 1;
      case 0x16:
      case 0x18:
      case 0x46:
      case 0x69:
      case 0x6b:
      case 0x6d:
        break;
      case 0x19:
        if (param_2 == 0) {
          *param_3 = 0x641;
          return 1;
        }
        if (param_2 != 1) {
          return 0;
        }
        *param_3 = 0x642;
        return 1;
      }
    }
    goto switchD_1000eb68_caseD_16;
  }
  if (param_1 < 0x7d2) {
    if (param_1 == 0x7d1) {
      switch(param_2) {
      case 0:
        *param_3 = 0xf;
        return 1;
      case 1:
        *param_3 = 0xb;
        return 1;
      case 2:
        *param_3 = 0x13;
        return 1;
      case 3:
        *param_3 = 0x15;
        return 1;
      default:
        return 0;
      }
    }
    if (param_1 < 0x643) {
      if (param_1 == 0x642) {
        if (param_2 == 0) {
          *param_3 = 1;
          return 1;
        }
        if (param_2 == 1) {
          *param_3 = 2;
          return 1;
        }
        return 0;
      }
      if ((param_1 == 0x3f6) || (param_1 == 0x3f8)) goto switchD_1000eb68_caseD_16;
    }
    else {
      if (param_1 == 0x643) {
        switch(param_2) {
        case 0:
          *param_3 = 0;
          return 1;
        case 1:
          *param_3 = 1;
          return 1;
        case 2:
          *param_3 = 2;
          return 1;
        case 3:
          *param_3 = 3;
          return 1;
        case 4:
          *param_3 = 4;
          return 1;
        default:
          return 0;
        }
      }
      if (param_1 == 0x644) {
        switch(param_2) {
        case 0:
          *param_3 = 0;
          return 1;
        case 1:
          *param_3 = 1;
          return 1;
        case 2:
          *param_3 = 2;
          return 1;
        case 3:
          *param_3 = 3;
          return 1;
        default:
          return 0;
        }
      }
    }
switchD_1000eb68_caseD_c:
    uVar1 = FUN_100154b7(param_1,param_2,param_3);
    return uVar1;
  }
  if (param_1 < 0xe19) {
    if ((param_1 != 0xe18) && ((param_1 != 0xe12 && (param_1 != 0xe15))))
    goto switchD_1000eb68_caseD_c;
  }
  else if ((param_1 != 0xe1b) && (param_1 != 0x2397)) goto switchD_1000eb68_caseD_c;
switchD_1000eb68_caseD_16:
  if (param_2 == 0) {
    *param_3 = 2;
  }
  else if (param_2 == 1) {
    *param_3 = 1;
  }
  else if (param_2 == 2) {
    *param_3 = 7;
  }
  else {
    local_8 = 0;
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_1000ef90
 * Address:  1000ef90
 * ================================================================ */

undefined4 * __thiscall FUN_1000ef90(void *this,uint param_1)

{
  FUN_100096a1(this);
  if ((param_1 & 1) != 0) {
    FUN_1001576a(this);
  }
  return this;
}



/* ================================================================
 * Function: PITG_CreateTimingGenerator
 * Address:  1000efc0
 * ================================================================ */

undefined4 * PITG_CreateTimingGenerator(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xefc0  1  PITG_CreateTimingGenerator */
  local_8 = 0xffffffff;
  puStack_c = &LAB_1002095c;
  local_10 = ExceptionList;
  local_14 = (undefined4 *)0x0;
  switch(param_1) {
  case 1:
    ExceptionList = &local_10;
    puVar1 = operator_new(0x428);
    local_8 = 0;
    if (puVar1 == (undefined4 *)0x0) {
      local_3c = (undefined4 *)0x0;
    }
    else {
      local_3c = FUN_10005a60(puVar1);
    }
    local_14 = local_3c;
    break;
  case 2:
    ExceptionList = &local_10;
    puVar1 = operator_new(0x448);
    local_8 = 1;
    if (puVar1 == (undefined4 *)0x0) {
      local_40 = (undefined4 *)0x0;
    }
    else {
      local_40 = FUN_10009340(puVar1);
    }
    local_14 = local_40;
    break;
  case 3:
    ExceptionList = &local_10;
    puVar1 = operator_new(0x3b8);
    local_8 = 2;
    if (puVar1 == (undefined4 *)0x0) {
      local_44 = (undefined4 *)0x0;
    }
    else {
      local_44 = FUN_10001170(puVar1);
    }
    local_14 = local_44;
    break;
  case 4:
    ExceptionList = &local_10;
    puVar1 = operator_new(0x440);
    local_8 = 3;
    if (puVar1 == (undefined4 *)0x0) {
      local_48 = (undefined4 *)0x0;
    }
    else {
      local_48 = FUN_10003100(puVar1);
    }
    local_14 = local_48;
  }
  ExceptionList = local_10;
  return local_14;
}



/* ================================================================
 * Function: PITG_CreateTimingGeneratorAndPort
 * Address:  1000f144
 * ================================================================ */

undefined4 *
PITG_CreateTimingGeneratorAndPort(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  void *pvVar1;
  undefined4 *local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xf144  22  PITG_CreateTimingGeneratorAndPort */
  local_8 = 0xffffffff;
  puStack_c = &LAB_10020992;
  local_10 = ExceptionList;
  local_14 = (undefined4 *)0x0;
  switch(param_1) {
  case 1:
    ExceptionList = &local_10;
    pvVar1 = operator_new(0x428);
    local_8 = 0;
    if (pvVar1 == (void *)0x0) {
      local_3c = (undefined4 *)0x0;
    }
    else {
      local_3c = FUN_10005b6e(pvVar1,param_2,param_3);
    }
    local_14 = local_3c;
    break;
  case 2:
    ExceptionList = &local_10;
    pvVar1 = operator_new(0x448);
    local_8 = 1;
    if (pvVar1 == (void *)0x0) {
      local_40 = (undefined4 *)0x0;
    }
    else {
      local_40 = FUN_100094cb(pvVar1,param_2,param_3);
    }
    local_14 = local_40;
    break;
  case 3:
    ExceptionList = &local_10;
    pvVar1 = operator_new(0x3b8);
    local_8 = 2;
    if (pvVar1 == (void *)0x0) {
      local_44 = (undefined4 *)0x0;
    }
    else {
      local_44 = FUN_10001281(pvVar1,param_2,param_3);
    }
    local_14 = local_44;
    break;
  case 4:
    ExceptionList = &local_10;
    pvVar1 = operator_new(0x440);
    local_8 = 3;
    if (pvVar1 == (void *)0x0) {
      local_48 = (undefined4 *)0x0;
    }
    else {
      local_48 = FUN_10003288(pvVar1,param_2,param_3);
    }
    local_14 = local_48;
  }
  ExceptionList = local_10;
  return local_14;
}



/* ================================================================
 * Function: PITG_DestroyTimingGenerator
 * Address:  1000f2e8
 * ================================================================ */

undefined1 PITG_DestroyTimingGenerator(undefined4 *param_1)

{
  undefined1 local_8;
  
                    /* 0xf2e8  2  PITG_DestroyTimingGenerator */
  local_8 = 1;
  if (param_1 == (undefined4 *)0x0) {
    local_8 = 0;
  }
  else if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(1);
  }
  return local_8;
}



/* ================================================================
 * Function: PITG_Reset
 * Address:  1000f331
 * ================================================================ */

undefined1 PITG_Reset(int *param_1)

{
  undefined1 uVar1;
  
                    /* 0xf331  17  PITG_Reset */
  uVar1 = 0;
  if (param_1 != (int *)0x0) {
    uVar1 = (**(code **)(*param_1 + 8))();
  }
  return uVar1;
}



/* ================================================================
 * Function: PITG_Start
 * Address:  1000f356
 * ================================================================ */

undefined1 PITG_Start(int *param_1)

{
  undefined1 uVar1;
  
                    /* 0xf356  20  PITG_Start */
  uVar1 = 0;
  if (param_1 != (int *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0xc))();
  }
  return uVar1;
}



/* ================================================================
 * Function: PITG_Stop
 * Address:  1000f37b
 * ================================================================ */

undefined1 PITG_Stop(int *param_1)

{
  undefined1 uVar1;
  
                    /* 0xf37b  21  PITG_Stop */
  uVar1 = 0;
  if (param_1 != (int *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x10))();
  }
  return uVar1;
}



/* ================================================================
 * Function: PITG_GetType
 * Address:  1000f3a0
 * ================================================================ */

uint PITG_GetType(int param_1)

{
  undefined4 local_8;
  
                    /* 0xf3a0  18  PITG_GetType */
  if (param_1 == 0) {
    local_8 = 0;
  }
  else {
    local_8 = FUN_1000f6f0(param_1);
    local_8 = local_8 & 0xffff;
  }
  return local_8;
}



/* ================================================================
 * Function: PITG_Process
 * Address:  1000f3cc
 * ================================================================ */

undefined1 PITG_Process(int *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  
                    /* 0xf3cc  3  PITG_Process */
  uVar1 = 0;
  if (param_1 != (int *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x14))(param_2);
  }
  return uVar1;
}



/* ================================================================
 * Function: PITG_SetGateLive
 * Address:  1000f3f5
 * ================================================================ */

undefined1
PITG_SetGateLive(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  undefined1 uVar1;
  
                    /* 0xf3f5  19  PITG_SetGateLive */
  uVar1 = 0;
  if (param_1 != (int *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x48))(param_2,param_3,param_4,param_5);
  }
  return uVar1;
}



/* ================================================================
 * Function: PITG_GetULongParam
 * Address:  1000f42a
 * ================================================================ */

undefined1 PITG_GetULongParam(int *param_1,undefined2 param_2,undefined4 param_3,undefined2 param_4)

{
  undefined1 uVar1;
  
                    /* 0xf42a  4  PITG_GetULongParam */
  uVar1 = 0;
  if (param_1 != (int *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x28))(param_2,param_3,param_4);
  }
  return uVar1;
}



/* ================================================================
 * Function: PITG_SetULongParam
 * Address:  1000f45d
 * ================================================================ */

undefined1 PITG_SetULongParam(int *param_1,undefined2 param_2,undefined4 param_3,undefined2 param_4)

{
  undefined1 uVar1;
  
                    /* 0xf45d  5  PITG_SetULongParam */
  uVar1 = 0;
  if (param_1 != (int *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x24))(param_2,param_3,param_4);
  }
  return uVar1;
}



/* ================================================================
 * Function: PITG_GetDoubleParam
 * Address:  1000f490
 * ================================================================ */

undefined1
PITG_GetDoubleParam(int *param_1,undefined2 param_2,undefined4 param_3,undefined2 param_4)

{
  undefined1 uVar1;
  
                    /* 0xf490  6  PITG_GetDoubleParam */
  uVar1 = 0;
  if (param_1 != (int *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x30))(param_2,param_3,param_4);
  }
  return uVar1;
}



/* ================================================================
 * Function: PITG_SetDoubleParam
 * Address:  1000f4c3
 * ================================================================ */

undefined1
PITG_SetDoubleParam(int *param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4,
                   undefined2 param_5)

{
  undefined1 uVar1;
  
                    /* 0xf4c3  7  PITG_SetDoubleParam */
  uVar1 = 0;
  if (param_1 != (int *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x2c))(param_2,param_3,param_4,param_5);
  }
  return uVar1;
}



/* ================================================================
 * Function: PITG_SetStrParam
 * Address:  1000f4fa
 * ================================================================ */

undefined1 PITG_SetStrParam(int *param_1,undefined2 param_2,undefined4 param_3,undefined2 param_4)

{
  undefined1 uVar1;
  
                    /* 0xf4fa  8  PITG_SetStrParam */
  uVar1 = 0;
  if (param_1 != (int *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x38))(param_2,param_3,param_4);
  }
  return uVar1;
}



/* ================================================================
 * Function: PITG_GetStrParam
 * Address:  1000f52d
 * ================================================================ */

undefined1 PITG_GetStrParam(int *param_1,undefined2 param_2,undefined4 param_3,undefined2 param_4)

{
  undefined1 uVar1;
  
                    /* 0xf52d  9  PITG_GetStrParam */
  uVar1 = 0;
  if (param_1 != (int *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x34))(param_2,param_3,param_4);
  }
  return uVar1;
}



/* ================================================================
 * Function: PITG_IsAvail
 * Address:  1000f560
 * ================================================================ */

undefined1 PITG_IsAvail(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  
                    /* 0xf560  10  PITG_IsAvail */
  uVar1 = 0;
  if (param_1 != (int *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x44))(param_2,param_3);
  }
  return uVar1;
}



/* ================================================================
 * Function: PITG_GetEnumParam
 * Address:  1000f58d
 * ================================================================ */

undefined1 PITG_GetEnumParam(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  
                    /* 0xf58d  11  PITG_GetEnumParam */
  uVar1 = 0;
  if (param_1 != (int *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x40))(param_2,param_3,param_4);
  }
  return uVar1;
}



/* ================================================================
 * Function: PITG_GetEnumString
 * Address:  1000f5be
 * ================================================================ */

undefined1
PITG_GetEnumString(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined2 param_5)

{
  undefined1 uVar1;
  
                    /* 0xf5be  12  PITG_GetEnumString */
  uVar1 = 0;
  if (param_1 != (int *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x3c))(param_2,param_3,param_4,param_5);
  }
  return uVar1;
}



/* ================================================================
 * Function: PITG_GetResource
 * Address:  1000f5f4
 * ================================================================ */

void PITG_GetResource(LPSTR param_1,UINT param_2,int param_3)

{
                    /* 0xf5f4  14  PITG_GetResource */
  FUN_10001118(&DAT_100232bc,param_1,param_2,param_3);
  return;
}



/* ================================================================
 * Function: PITG_Get_DLLVersionString
 * Address:  1000f611
 * ================================================================ */

int PITG_Get_DLLVersionString(int param_1,LPSTR param_2,short param_3)

{
  char cVar1;
  undefined4 local_8;
  
                    /* 0xf611  15  PITG_Get_DLLVersionString */
  if (param_1 == 0x13) {
    cVar1 = PITG_GetResource(param_2,0x30,(int)param_3);
    local_8 = (int)cVar1;
  }
  else if (param_1 == 0x14) {
    cVar1 = PITG_GetResource(param_2,0x31,(int)param_3);
    local_8 = (int)cVar1;
  }
  else {
    local_8 = 0;
  }
  return local_8;
}



/* ================================================================
 * Function: PITG_Get_DLLVersion
 * Address:  1000f672
 * ================================================================ */

int PITG_Get_DLLVersion(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte local_20 [24];
  byte *local_8;
  
                    /* 0xf672  16  PITG_Get_DLLVersion */
  *param_2 = 0;
  iVar2 = PITG_Get_DLLVersionString(param_1,(LPSTR)local_20,0x16);
  if (iVar2 != 0) {
    local_8 = (byte *)FUN_10016165(local_20,&DAT_100232b8);
    while (local_8 != (byte *)0x0) {
      iVar1 = *param_2;
      iVar3 = FUN_10015c2b(param_2,local_8);
      *param_2 = iVar1 * 100 + iVar3;
      local_8 = (byte *)FUN_10016165((byte *)0x0,&DAT_100232b8);
    }
  }
  return iVar2;
}



/* ================================================================
 * Function: FUN_1000f6f0
 * Address:  1000f6f0
 * ================================================================ */

undefined4 __fastcall FUN_1000f6f0(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* ================================================================
 * Function: FUN_1000f710
 * Address:  1000f710
 * ================================================================ */

undefined4 * __fastcall FUN_1000f710(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_10021338;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  return param_1;
}



/* ================================================================
 * Function: FUN_1000f73a
 * Address:  1000f73a
 * ================================================================ */

void __fastcall FUN_1000f73a(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_10021338;
  return;
}



/* ================================================================
 * Function: FUN_1000f74e
 * Address:  1000f74e
 * ================================================================ */

undefined1 __thiscall FUN_1000f74e(void *this,short param_1,undefined2 param_2)

{
  uint uVar1;
  undefined1 local_8;
  
  local_8 = 1;
  if (param_1 == 0x232a) {
    *(undefined2 *)((int)this + 8) = param_2;
  }
  else {
    uVar1 = FUN_1000f7cf((int)this);
    local_8 = (undefined1)uVar1;
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_1000f78e
 * Address:  1000f78e
 * ================================================================ */

undefined1 __thiscall FUN_1000f78e(void *this,short param_1,int *param_2)

{
  uint uVar1;
  undefined1 local_8;
  
  local_8 = 1;
  if (param_1 == 0x232a) {
    *param_2 = (int)*(short *)((int)this + 8);
  }
  else {
    uVar1 = FUN_1000f7cf((int)this);
    local_8 = (undefined1)uVar1;
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_1000f7cf
 * Address:  1000f7cf
 * ================================================================ */

uint __fastcall FUN_1000f7cf(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_100155fe(*(void **)(param_1 + 4),2,1,&DAT_10026734);
  return uVar1 & 0xffffff00;
}



/* ================================================================
 * Function: FUN_1000f7f7
 * Address:  1000f7f7
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_1000f7f7(int param_1,short param_2,short param_3)

{
  float10 fVar1;
  float10 fVar2;
  undefined8 local_1c;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined8 local_c;
  
  if (param_3 == 0) {
    fVar2 = FUN_100123e8(*(double *)(*(int *)(param_1 + 4) + 0x280),
                         *(short *)(*(int *)(param_1 + 4) + 0x288),7);
    local_1c = (double)fVar2;
    local_14 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x388);
    uStack_10 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x38c);
  }
  else if (param_3 == 1) {
    fVar2 = FUN_100123e8(*(double *)(*(int *)(param_1 + 4) + 0x270),
                         *(short *)(*(int *)(param_1 + 4) + 0x278),7);
    fVar1 = FUN_100123e8(*(double *)(*(int *)(param_1 + 4) + 0x280),
                         *(short *)(*(int *)(param_1 + 4) + 0x288),7);
    local_1c = (double)(fVar1 + (float10)(double)fVar2);
    local_14 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x390);
    uStack_10 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x394);
  }
  else if (param_3 == 5) {
    fVar2 = FUN_100123e8(*(double *)(*(int *)(param_1 + 4) + 0x2a0),
                         *(short *)(*(int *)(param_1 + 4) + 0x2a8),7);
    local_1c = (double)fVar2;
    local_14 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x398);
    uStack_10 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x39c);
  }
  else {
    local_1c = 0.0;
    local_14 = 0;
    uStack_10 = 0;
  }
  if ((*(short *)(*(int *)(param_1 + 4) + 0x37c) != 0) &&
     (_DAT_100211b0 < *(double *)(*(int *)(param_1 + 4) + 0x380))) {
    local_1c = local_1c -
               ((double)CONCAT44(uStack_10,local_14) - *(double *)(*(int *)(param_1 + 4) + 0x380));
    if (local_1c < _DAT_100211b0) {
      local_1c = 0.0;
    }
  }
  if ((local_1c <= _DAT_100211b0) || (param_2 == 7)) {
    local_c = local_1c;
  }
  else {
    fVar2 = FUN_100123e8(local_1c,7,param_2);
    local_c = (double)fVar2;
  }
  return (float10)local_c;
}



/* ================================================================
 * Function: FUN_1000fa04
 * Address:  1000fa04
 * ================================================================ */

undefined4 * __fastcall FUN_1000fa04(undefined4 *param_1)

{
  FUN_1000f710(param_1);
  *param_1 = &PTR_FUN_1002135c;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined2 *)(param_1 + 0x8e) = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  *(undefined2 *)(param_1 + 0x92) = 1;
  *(undefined2 *)((int)param_1 + 0x24a) = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  *(undefined2 *)(param_1 + 0x96) = 2;
  param_1[0x98] = 0;
  param_1[0x99] = 0x407f4000;
  *(undefined2 *)(param_1 + 0x9a) = 7;
  return param_1;
}



/* ================================================================
 * Function: FUN_1000faad
 * Address:  1000faad
 * ================================================================ */

void __fastcall FUN_1000faad(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_1002135c;
  FUN_1000f73a(param_1);
  return;
}



/* ================================================================
 * Function: FUN_1000fac9
 * Address:  1000fac9
 * ================================================================ */

undefined1 __thiscall FUN_1000fac9(void *this,short param_1,undefined4 *param_2)

{
  undefined1 local_8;
  
  local_8 = 1;
  switch(param_1) {
  case 0x238d:
    *(undefined2 *)((int)this + 0xc) = param_2._0_2_;
    break;
  case 0x238e:
    FUN_10015e30((undefined4 *)((int)this + 0x10),param_2,0xb8);
    break;
  case 0x238f:
    FUN_10015e30((undefined4 *)((int)this + 200),param_2,0xb8);
    break;
  case 0x2390:
    FUN_10015e30((undefined4 *)((int)this + 0x180),param_2,0xb8);
    break;
  case 0x2391:
    *(undefined2 *)((int)this + 0x238) = param_2._0_2_;
    break;
  default:
    local_8 = FUN_1000f74e(this,param_1,param_2._0_2_);
    break;
  case 0x2394:
    *(undefined2 *)((int)this + 0x24a) = param_2._0_2_;
    break;
  case 0x2395:
    *(undefined2 *)((int)this + 0x248) = param_2._0_2_;
    break;
  case 0x2397:
    *(undefined2 *)((int)this + 600) = param_2._0_2_;
    break;
  case 0x2399:
    *(undefined2 *)((int)this + 0x268) = param_2._0_2_;
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_1000fc09
 * Address:  1000fc09
 * ================================================================ */

undefined1 __thiscall FUN_1000fc09(void *this,short param_1,int *param_2)

{
  undefined1 local_8;
  
  local_8 = 1;
  switch(param_1) {
  case 0x238d:
    *param_2 = (int)*(short *)((int)this + 0xc);
    break;
  case 0x238e:
    FUN_10015e30(param_2,(undefined4 *)((int)this + 0x10),0xb8);
    break;
  case 0x238f:
    FUN_10015e30(param_2,(undefined4 *)((int)this + 200),0xb8);
    break;
  case 0x2390:
    FUN_10015e30(param_2,(undefined4 *)((int)this + 0x180),0xb8);
    break;
  case 0x2391:
    *param_2 = (int)*(short *)((int)this + 0x238);
    break;
  case 0x2392:
    *param_2 = 0x17;
    break;
  default:
    local_8 = FUN_1000f78e(this,param_1,param_2);
    break;
  case 0x2394:
    *param_2 = (int)*(short *)((int)this + 0x24a);
    break;
  case 0x2395:
    *param_2 = (int)*(short *)((int)this + 0x248);
    break;
  case 0x2397:
    *param_2 = (int)*(short *)((int)this + 600);
    break;
  case 0x2399:
    *param_2 = (int)*(short *)((int)this + 0x268);
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_1000fd5e
 * Address:  1000fd5e
 * ================================================================ */

undefined1 __thiscall FUN_1000fd5e(void *this,short param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_8;
  
  local_8 = 1;
  if (param_1 == 0x2393) {
    *(undefined4 *)((int)this + 0x240) = param_2;
    *(undefined4 *)((int)this + 0x244) = param_3;
  }
  else if (param_1 == 0x2396) {
    *(undefined4 *)((int)this + 0x250) = param_2;
    *(undefined4 *)((int)this + 0x254) = param_3;
  }
  else if (param_1 == 0x2398) {
    *(undefined4 *)((int)this + 0x260) = param_2;
    *(undefined4 *)((int)this + 0x264) = param_3;
  }
  else {
    local_8 = FUN_10010570((int)this);
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_1000fdfa
 * Address:  1000fdfa
 * ================================================================ */

undefined1 __thiscall FUN_1000fdfa(void *this,short param_1,undefined4 *param_2)

{
  undefined1 local_8;
  
  local_8 = 1;
  if (param_1 == 0x2393) {
    *param_2 = *(undefined4 *)((int)this + 0x240);
    param_2[1] = *(undefined4 *)((int)this + 0x244);
  }
  else if (param_1 == 0x2396) {
    *param_2 = *(undefined4 *)((int)this + 0x250);
    param_2[1] = *(undefined4 *)((int)this + 0x254);
  }
  else if (param_1 == 0x2398) {
    *param_2 = *(undefined4 *)((int)this + 0x260);
    param_2[1] = *(undefined4 *)((int)this + 0x264);
  }
  else {
    local_8 = FUN_10010590((int)this);
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_1000fe98
 * Address:  1000fe98
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_1000fe98(void *param_1,short param_2,short param_3)

{
  float10 fVar1;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  short local_50;
  short local_48;
  undefined8 local_44;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined8 local_34;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  double local_1c;
  double local_14;
  short local_c;
  short local_8;
  
  local_14 = 0.0;
  local_24 = 0;
  uStack_20 = 0;
  fVar1 = FUN_100123e8(*(double *)(*(int *)((int)param_1 + 4) + 0x270),
                       *(short *)(*(int *)((int)param_1 + 4) + 0x278),7);
  local_1c = (double)fVar1;
  fVar1 = FUN_100123e8(*(double *)(*(int *)((int)param_1 + 4) + 0x280),
                       *(short *)(*(int *)((int)param_1 + 4) + 0x288),7);
  local_34 = (double)fVar1;
  local_8 = *(short *)(*(int *)((int)param_1 + 4) + 0x37c);
  if ((*(short *)((int)param_1 + 8) == 0) || (*(short *)((int)param_1 + 0x238) < 1)) {
    local_50 = 0;
  }
  else {
    local_50 = 1;
  }
  local_c = local_50;
  local_2c = SUB84(local_34,0);
  uStack_28 = (undefined4)((ulonglong)local_34 >> 0x20);
  switch(param_3) {
  case 0:
  case 2:
    local_24 = *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x388);
    uStack_20 = *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x38c);
    break;
  case 1:
  case 3:
    if (*(short *)((int)param_1 + 0xc) == 0) {
      FUN_100103f4(param_1,&local_1c);
    }
    else {
      local_1c = 50.0;
    }
    local_24 = *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x390);
    uStack_20 = *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x394);
    if (param_3 == 1) {
      local_5c = local_2c;
      local_58 = uStack_28;
    }
    else {
      local_5c = 0;
      local_58 = 0;
    }
    local_34 = (double)CONCAT44(local_58,local_5c);
    break;
  case 4:
    local_c = 0;
    local_8 = 0;
    if (*(short *)((int)param_1 + 0x24a) == -1) {
      fVar1 = FUN_100123e8(*(double *)((int)param_1 + 0x250),*(short *)((int)param_1 + 600),7);
      local_34 = (double)fVar1;
    }
    else if (*(short *)((int)param_1 + 0x24a) != 1) {
      fVar1 = FUN_100123e8(*(double *)((int)param_1 + 0x260),*(short *)((int)param_1 + 0x268),7);
      local_34 = (double)((float10)local_34 - fVar1);
    }
    break;
  case 5:
    local_c = 0;
    fVar1 = FUN_100123e8(*(double *)(*(int *)((int)param_1 + 4) + 0x2a0),
                         *(short *)(*(int *)((int)param_1 + 4) + 0x2a8),7);
    local_34 = (double)fVar1;
    local_24 = *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x398);
    uStack_20 = *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x39c);
    break;
  case 6:
    local_c = 0;
    local_8 = 0;
    fVar1 = FUN_100123e8(*(double *)((int)param_1 + 0x260),*(short *)((int)param_1 + 0x268),7);
    local_34 = (double)fVar1;
    break;
  default:
    local_34 = 0.0;
    local_24 = 0;
    uStack_20 = 0;
  }
  if (local_8 != 0) {
    if ((*(short *)(*(int *)((int)param_1 + 4) + 0x24e) == 0) ||
       (*(short *)(*(int *)((int)param_1 + 4) + 0x24e) == 3)) {
      local_3c = *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x380);
      uStack_38 = *(undefined4 *)(*(int *)((int)param_1 + 4) + 900);
    }
    else {
      if (*(short *)(*(int *)((int)param_1 + 4) + 0x28a) == 0x642) {
        local_64 = *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x380);
        local_60 = *(undefined4 *)(*(int *)((int)param_1 + 4) + 900);
      }
      else {
        local_64 = 0;
        local_60 = 0;
      }
      local_3c = local_64;
      uStack_38 = local_60;
    }
    local_34 = local_34 -
               ((double)CONCAT44(uStack_20,local_24) - (double)CONCAT44(uStack_38,local_3c));
    if (local_34 < _DAT_100211b0) {
      local_34 = 0.0;
    }
  }
  if ((_DAT_100211b0 < local_34) && (local_c != 0)) {
    if (*(short *)((int)param_1 + 0xc) == 0) {
      if (*(double *)((int)param_1 + 0x10) <= local_1c) {
        if (local_1c < *(double *)((int)param_1 + *(short *)((int)param_1 + 0x238) * 8 + 8)) {
          local_48 = 0;
          while (*(double *)((int)param_1 + local_48 * 8 + 0x10) < local_1c) {
            local_48 = local_48 + 1;
          }
          local_44 = ((local_1c - *(double *)((int)param_1 + local_48 * 8 + 8)) *
                     (*(double *)((int)param_1 + local_48 * 8 + 0x180) -
                     *(double *)((int)param_1 + local_48 * 8 + 0x178))) /
                     (*(double *)((int)param_1 + local_48 * 8 + 0x10) -
                     *(double *)((int)param_1 + local_48 * 8 + 8)) +
                     *(double *)((int)param_1 + local_48 * 8 + 0x178);
        }
        else {
          local_44 = (double)CONCAT44(*(undefined4 *)
                                       ((int)param_1 + *(short *)((int)param_1 + 0x238) * 8 + 0x17c)
                                      ,*(undefined4 *)
                                        ((int)param_1 + *(short *)((int)param_1 + 0x238) * 8 + 0x178
                                        ));
        }
      }
      else {
        local_44 = *(double *)((int)param_1 + 0x180);
      }
    }
    else {
      local_44 = *(double *)((int)param_1 + 0x240);
    }
    local_34 = local_34 - local_44;
    if (local_34 < _DAT_100211b0) {
      local_34 = 0.0;
    }
  }
  if ((param_3 == 1) || (param_3 == 3)) {
    local_34 = local_34 + local_1c;
  }
  if (param_2 == 7) {
    local_14 = local_34;
  }
  else {
    fVar1 = FUN_100123e8(local_34,7,param_2);
    local_14 = (double)fVar1;
  }
  return (float10)local_14;
}



/* ================================================================
 * Function: FUN_100103f4
 * Address:  100103f4
 * ================================================================ */

void __thiscall FUN_100103f4(void *this,double *param_1)

{
  short local_10;
  undefined8 local_c;
  
  local_c = *param_1;
  if ((*(short *)((int)this + 8) != 0) && (0 < *(short *)((int)this + 0x238))) {
    if (*(double *)((int)this + 200) <= local_c) {
      if (local_c < *(double *)((int)this + *(short *)((int)this + 0x238) * 8 + 0xc0)) {
        local_10 = 0;
        while (*(double *)((int)this + local_10 * 8 + 200) < local_c) {
          local_10 = local_10 + 1;
        }
        local_c = ((local_c - *(double *)((int)this + local_10 * 8 + 0xc0)) *
                  (*(double *)((int)this + local_10 * 8 + 0x10) -
                  *(double *)((int)this + local_10 * 8 + 8))) /
                  (*(double *)((int)this + local_10 * 8 + 200) -
                  *(double *)((int)this + local_10 * 8 + 0xc0)) +
                  *(double *)((int)this + local_10 * 8 + 8);
      }
    }
    else {
      local_c = *(double *)((int)this + 0x10);
    }
    *(undefined4 *)param_1 = (undefined4)local_c;
    *(undefined4 *)((int)param_1 + 4) = local_c._4_4_;
  }
  return;
}



/* ================================================================
 * Function: FUN_10010510
 * Address:  10010510
 * ================================================================ */

undefined4 * __thiscall FUN_10010510(void *this,uint param_1)

{
  FUN_1000f73a(this);
  if ((param_1 & 1) != 0) {
    FUN_1001576a(this);
  }
  return this;
}



/* ================================================================
 * Function: FUN_10010540
 * Address:  10010540
 * ================================================================ */

undefined4 * __thiscall FUN_10010540(void *this,uint param_1)

{
  FUN_1000faad(this);
  if ((param_1 & 1) != 0) {
    FUN_1001576a(this);
  }
  return this;
}



/* ================================================================
 * Function: FUN_10010570
 * Address:  10010570
 * ================================================================ */

void __fastcall FUN_10010570(int param_1)

{
  FUN_1000f7cf(param_1);
  return;
}



/* ================================================================
 * Function: FUN_10010590
 * Address:  10010590
 * ================================================================ */

void __fastcall FUN_10010590(int param_1)

{
  FUN_1000f7cf(param_1);
  return;
}



/* ================================================================
 * Function: FUN_100105b0
 * Address:  100105b0
 * ================================================================ */

undefined4 * __fastcall FUN_100105b0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_10021380;
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  return param_1;
}



/* ================================================================
 * Function: FUN_100105fe
 * Address:  100105fe
 * ================================================================ */

void __fastcall FUN_100105fe(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_10021380;
  return;
}



/* ================================================================
 * Function: FUN_10010612
 * Address:  10010612
 * ================================================================ */

undefined1 __fastcall FUN_10010612(int param_1)

{
  undefined1 local_8;
  
  local_8 = 1;
  if (*(char *)(param_1 + 0x114) != '\0') {
    if (*(int *)(param_1 + 8) == 0) {
      FUN_100155fe(*(void **)(param_1 + 0x110),2,0x7d1,&DAT_10026738);
      local_8 = 0;
    }
    else if (*(int *)(param_1 + 0x10c) == 1) {
      PIPP_Destroy(*(undefined4 *)(param_1 + 8));
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0x10c) = 0;
    }
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_1001068d
 * Address:  1001068d
 * ================================================================ */

bool __fastcall FUN_1001068d(int param_1)

{
  bool local_8;
  
  local_8 = *(int *)(param_1 + 8) == 0;
  if (local_8) {
    FUN_100155fe(*(void **)(param_1 + 0x110),0x10,0x7d1,&DAT_1002673c);
  }
  else {
    PIPP_Initialize(*(undefined4 *)(param_1 + 8));
    PIPP_Reset_Interface(*(undefined4 *)(param_1 + 8));
  }
  local_8 = !local_8;
  return local_8;
}



/* ================================================================
 * Function: FUN_100106e4
 * Address:  100106e4
 * ================================================================ */

char __thiscall FUN_100106e4(void *this,undefined4 param_1,undefined4 param_2)

{
  char local_8;
  
  if (*(int *)((int)this + 8) == 0) {
    FUN_100155fe(*(void **)((int)this + 0x110),0x10,0x7d1,&DAT_10026744);
    local_8 = '\0';
  }
  else {
    local_8 = PIPP_Output_Multiple(*(undefined4 *)((int)this + 8),0,param_1,param_2);
    if (local_8 == '\0') {
      FUN_100155fe(*(void **)((int)this + 0x110),0x10,0x7d3,&DAT_10026740);
    }
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_1001075f
 * Address:  1001075f
 * ================================================================ */

char __thiscall FUN_1001075f(void *this,char *param_1,size_t *param_2)

{
  size_t sVar1;
  char local_8;
  
  if (*(int *)((int)this + 8) == 0) {
    FUN_100155fe(*(void **)((int)this + 0x110),0x10,0x7d1,&DAT_1002674c);
    local_8 = '\0';
  }
  else {
    local_8 = PIPP_Input_Multiple(*(undefined4 *)((int)this + 8),0,param_1,0xff);
    if (local_8 == '\0') {
      FUN_100155fe(*(void **)((int)this + 0x110),0x10,0x7d3,&DAT_10026748);
    }
    else {
      sVar1 = _strlen(param_1);
      *param_2 = sVar1;
    }
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_100107ee
 * Address:  100107ee
 * ================================================================ */

char __thiscall FUN_100107ee(void *this,undefined4 param_1,undefined2 param_2)

{
  char local_8;
  
  if (*(int *)((int)this + 8) == 0) {
    FUN_100155fe(*(void **)((int)this + 0x110),0x10,0x7d1,&DAT_10026754);
    local_8 = '\0';
  }
  else {
    local_8 = PIPP_Output(*(undefined4 *)((int)this + 8),param_1,param_2);
    if (local_8 == '\0') {
      FUN_100155fe(*(void **)((int)this + 0x110),0x10,0x7d3,&DAT_10026750);
    }
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_1001086d
 * Address:  1001086d
 * ================================================================ */

bool __thiscall FUN_1001086d(void *this,undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  bool local_8;
  
  local_8 = *(int *)((int)this + 8) == 0;
  if (local_8) {
    FUN_100155fe(*(void **)((int)this + 0x110),0x10,0x7d1,&DAT_10026758);
  }
  else {
    uVar1 = PIPP_Input(*(undefined4 *)((int)this + 8),param_1);
    *param_2 = uVar1;
  }
  local_8 = !local_8;
  return local_8;
}



/* ================================================================
 * Function: FUN_100108c2
 * Address:  100108c2
 * ================================================================ */

undefined1 __thiscall FUN_100108c2(void *this,short param_1,undefined4 param_2)

{
  undefined1 local_8;
  
  local_8 = 1;
  if (param_1 == 0x7d1) {
    *(undefined2 *)((int)this + 4) = (undefined2)param_2;
  }
  else if (param_1 == 0x7d2) {
    if (*(int *)((int)this + 0x10c) != 1) {
      *(undefined4 *)((int)this + 8) = param_2;
      *(undefined4 *)((int)this + 0x10c) = 2;
    }
  }
  else if (param_1 == 0x7d4) {
    *(undefined4 *)((int)this + 0x118) = param_2;
  }
  else {
    FUN_100155fe(*(void **)((int)this + 0x110),2,1,&DAT_1002675c);
    local_8 = 0;
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_10010956
 * Address:  10010956
 * ================================================================ */

undefined1 __thiscall FUN_10010956(void *this,short param_1,int *param_2)

{
  undefined1 local_8;
  
  local_8 = 1;
  if (param_1 == 0x7d1) {
    *param_2 = (int)*(short *)((int)this + 4);
  }
  else if (param_1 == 0x7d2) {
    *param_2 = *(int *)((int)this + 8);
  }
  else if (param_1 == 0x7d4) {
    *param_2 = *(int *)((int)this + 0x118);
  }
  else {
    FUN_100155fe(*(void **)((int)this + 0x110),2,1,&DAT_10026760);
    local_8 = 0;
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_100109d6
 * Address:  100109d6
 * ================================================================ */

uint __fastcall FUN_100109d6(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_100155fe(*(void **)(param_1 + 0x110),2,1,&DAT_10026764);
  return uVar1 & 0xffffff00;
}



/* ================================================================
 * Function: FUN_10010a03
 * Address:  10010a03
 * ================================================================ */

uint __fastcall FUN_10010a03(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_100155fe(*(void **)(param_1 + 0x110),2,1,&DAT_10026768);
  return uVar1 & 0xffffff00;
}



/* ================================================================
 * Function: FUN_10010a30
 * Address:  10010a30
 * ================================================================ */

bool __thiscall FUN_10010a30(void *this,short param_1,uint *param_2)

{
  if (param_1 == 0x7d3) {
    FUN_10015cc0((uint *)((int)this + 0xc),param_2);
  }
  else {
    FUN_100155fe(*(void **)((int)this + 0x110),2,1,&DAT_1002676c);
  }
  return param_1 == 0x7d3;
}



/* ================================================================
 * Function: FUN_10010a88
 * Address:  10010a88
 * ================================================================ */

bool __thiscall FUN_10010a88(void *this,short param_1,char *param_2,short param_3)

{
  if (param_1 == 0x7d3) {
    _strncpy(param_2,(char *)((int)this + 0xc),(int)param_3);
  }
  else {
    FUN_100155fe(*(void **)((int)this + 0x110),2,1,&DAT_10026770);
  }
  return param_1 == 0x7d3;
}



/* ================================================================
 * Function: FUN_10010af0
 * Address:  10010af0
 * ================================================================ */

undefined4 * __thiscall FUN_10010af0(void *this,uint param_1)

{
  FUN_100105fe(this);
  if ((param_1 & 1) != 0) {
    FUN_1001576a(this);
  }
  return this;
}



/* ================================================================
 * Function: FUN_10010b20
 * Address:  10010b20
 * ================================================================ */

undefined1 FUN_10010b20(void)

{
  return 0;
}



/* ================================================================
 * Function: FUN_10010b30
 * Address:  10010b30
 * ================================================================ */

undefined1 FUN_10010b30(void)

{
  return 0;
}



/* ================================================================
 * Function: FUN_10010b40
 * Address:  10010b40
 * ================================================================ */

undefined4 * __fastcall FUN_10010b40(undefined4 *param_1)

{
  FUN_100105b0(param_1);
  *param_1 = &PTR_FUN_100213c0;
  *(undefined2 *)(param_1 + 1) = 5;
  param_1[0x46] = 0xf;
  param_1[2] = 0;
  return param_1;
}



/* ================================================================
 * Function: FUN_10010b7f
 * Address:  10010b7f
 * ================================================================ */

bool __fastcall FUN_10010b7f(int param_1)

{
  undefined4 uVar1;
  bool local_8;
  
  uVar1 = PIPP_Create_physical_port_ex((int)*(short *)(param_1 + 4),0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  local_8 = *(int *)(param_1 + 8) == 0;
  if (local_8) {
    FUN_100155fe(*(void **)(param_1 + 0x110),0x10,0x7d1,&DAT_10026774);
  }
  else {
    PIPP_SetLongParam(*(undefined4 *)(param_1 + 8),0x66,*(undefined4 *)(param_1 + 0x118));
    PIPP_Initialize(*(undefined4 *)(param_1 + 8));
    *(undefined1 *)(param_1 + 0x114) = 1;
    *(undefined4 *)(param_1 + 0x10c) = 1;
  }
  local_8 = !local_8;
  return local_8;
}



/* ================================================================
 * Function: FUN_10010c0f
 * Address:  10010c0f
 * ================================================================ */

void __fastcall FUN_10010c0f(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_100209a9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_100213c0;
  local_8 = 0;
  FUN_10010612((int)param_1);
  local_8 = 0xffffffff;
  FUN_100105fe(param_1);
  ExceptionList = local_10;
  return;
}



/* ================================================================
 * Function: FUN_10010c60
 * Address:  10010c60
 * ================================================================ */

bool __thiscall FUN_10010c60(void *this,undefined4 param_1,undefined4 param_2)

{
  bool local_8;
  
  local_8 = *(int *)((int)this + 8) == 0;
  if (local_8) {
    FUN_100155fe(*(void **)((int)this + 0x110),0x10,0x7d1,&DAT_10026778);
  }
  else {
    PIPP_Output_Multiple(*(undefined4 *)((int)this + 8),0,param_1,param_2);
  }
  local_8 = !local_8;
  return local_8;
}



/* ================================================================
 * Function: FUN_10010cb6
 * Address:  10010cb6
 * ================================================================ */

bool __thiscall FUN_10010cb6(void *this,char *param_1,size_t *param_2)

{
  size_t sVar1;
  bool local_8;
  
  local_8 = *(int *)((int)this + 8) == 0;
  if (local_8) {
    FUN_100155fe(*(void **)((int)this + 0x110),0x10,0x7d1,&DAT_1002677c);
  }
  else {
    PIPP_Input_Multiple(*(undefined4 *)((int)this + 8),0,param_1,0xff);
    sVar1 = _strlen(param_1);
    *param_2 = sVar1;
  }
  local_8 = !local_8;
  return local_8;
}



/* ================================================================
 * Function: FUN_10010d1e
 * Address:  10010d1e
 * ================================================================ */

undefined4 __thiscall FUN_10010d1e(void *this,short param_1,undefined4 param_2)

{
  undefined1 extraout_AL;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 uVar1;
  undefined1 local_8;
  
  if (param_1 == 0x7d4) {
    if (*(int *)((int)this + 8) == 0) {
      FUN_100155fe(*(void **)((int)this + 0x110),0x10,0x7d1,&DAT_10026780);
      local_8 = 0;
      uVar1 = extraout_var_00;
    }
    else {
      *(undefined4 *)((int)this + 0x118) = param_2;
      PIPP_SetLongParam(*(undefined4 *)((int)this + 8),0x66,*(undefined4 *)((int)this + 0x118));
      uVar1 = extraout_var;
      local_8 = extraout_AL;
    }
  }
  else {
    local_8 = FUN_100108c2(this,param_1,param_2);
    uVar1 = extraout_var_01;
  }
  return CONCAT31(uVar1,local_8);
}



/* ================================================================
 * Function: FUN_10010db2
 * Address:  10010db2
 * ================================================================ */

undefined1 __thiscall FUN_10010db2(void *this,short param_1,int *param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_10010956(this,param_1,param_2);
  return uVar1;
}



/* ================================================================
 * Function: FUN_10010de0
 * Address:  10010de0
 * ================================================================ */

undefined4 * __thiscall FUN_10010de0(void *this,uint param_1)

{
  FUN_10010c0f(this);
  if ((param_1 & 1) != 0) {
    FUN_1001576a(this);
  }
  return this;
}



/* ================================================================
 * Function: FUN_10010e10
 * Address:  10010e10
 * ================================================================ */

undefined4 * __fastcall FUN_10010e10(undefined4 *param_1)

{
  FUN_100105b0(param_1);
  *param_1 = &PTR_FUN_10021400;
  *(undefined2 *)(param_1 + 1) = 6;
  param_1[0x46] = 2;
  return param_1;
}



/* ================================================================
 * Function: FUN_10010e45
 * Address:  10010e45
 * ================================================================ */

void __fastcall FUN_10010e45(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_100209c9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_10021400;
  local_8 = 0;
  FUN_10010612((int)param_1);
  local_8 = 0xffffffff;
  FUN_100105fe(param_1);
  ExceptionList = local_10;
  return;
}



/* ================================================================
 * Function: FUN_10010e96
 * Address:  10010e96
 * ================================================================ */

bool __fastcall FUN_10010e96(int param_1)

{
  undefined4 uVar1;
  bool local_8;
  
  uVar1 = PIPP_Create_physical_port_ex
                    ((int)*(short *)(param_1 + 4),*(undefined4 *)(param_1 + 0x118));
  *(undefined4 *)(param_1 + 8) = uVar1;
  local_8 = *(int *)(param_1 + 8) == 0;
  if (local_8) {
    FUN_100155fe(*(void **)(param_1 + 0x110),0x10,0x7d1,&DAT_10026784);
  }
  else {
    PIPP_SetLongParam(*(undefined4 *)(param_1 + 8),8,*(undefined4 *)(param_1 + 0x118));
    PIPP_SetLongParam(*(undefined4 *)(param_1 + 8),2,0x2580);
    PIPP_SetLongParam(*(undefined4 *)(param_1 + 8),3,8);
    PIPP_SetLongParam(*(undefined4 *)(param_1 + 8),0x14,0);
    PIPP_SetLongParam(*(undefined4 *)(param_1 + 8),0x1b,0);
    PIPP_SetLongParam(*(undefined4 *)(param_1 + 8),6,0);
    PIPP_Set_UseWinDefaults(*(undefined4 *)(param_1 + 8),0);
    PIPP_Initialize(*(undefined4 *)(param_1 + 8));
    PIPP_Reset_Interface(*(undefined4 *)(param_1 + 8));
    *(undefined1 *)(param_1 + 0x114) = 1;
    *(undefined4 *)(param_1 + 0x10c) = 1;
  }
  local_8 = !local_8;
  return local_8;
}



/* ================================================================
 * Function: FUN_10010fa6
 * Address:  10010fa6
 * ================================================================ */

char __thiscall FUN_10010fa6(void *this,char *param_1,int param_2)

{
  int iVar1;
  uint local_6c;
  char local_68;
  short local_64;
  uint local_60;
  char local_5c [80];
  int local_c;
  char local_8;
  
  local_8 = '\x01';
  if (*(int *)((int)this + 8) == 0) {
    FUN_100155fe(*(void **)((int)this + 0x110),0x10,0x7d1,&DAT_1002678c);
    local_8 = '\0';
  }
  else {
    _strncpy(local_5c,param_1,0x4f);
    PIPP_Flush_Buffer(*(undefined4 *)((int)this + 8),3);
    local_c = 0;
    while ((local_c < param_2 && (local_8 == '\x01'))) {
      local_64 = 0;
      local_68 = *(short *)((int)this + 4) == 0xf;
      local_6c = CONCAT31(local_6c._1_3_,local_5c[local_c]);
      iVar1 = PIPP_Output_Multiple(*(undefined4 *)((int)this + 8),0,&local_6c,1);
      if (iVar1 != 0) {
        while ((local_68 == '\0' && (local_64 < 100))) {
          iVar1 = PIPP_Input_Multiple(*(undefined4 *)((int)this + 8),0,&local_60,1);
          if ((iVar1 != 0) &&
             (((local_60 & 0xff) == (local_6c & 0xff) ||
              (((local_6c & 0xff) == 0xd && ((local_60 & 0xff) == 0x20)))))) {
            local_68 = '\x01';
          }
          if (local_68 == '\0') {
            FUN_10001145(0x14);
            local_64 = local_64 + 1;
          }
        }
      }
      if (local_68 == '\0') {
        local_8 = '\0';
      }
      local_c = local_c + 1;
    }
    PIPP_SetUserData(*(undefined4 *)((int)this + 8),(-(uint)(local_8 != '\0') & 0xfffffba7) + 0xa79)
    ;
    if (local_8 == '\0') {
      FUN_100155fe(*(void **)((int)this + 0x110),0x10,0x7d3,&DAT_10026788);
    }
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_10011140
 * Address:  10011140
 * ================================================================ */

undefined4 __fastcall FUN_10011140(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 extraout_var;
  int local_18;
  undefined2 local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_14 = 0;
  bVar1 = false;
  if (*(int *)(param_1 + 8) == 0) {
    FUN_100155fe(*(void **)(param_1 + 0x110),0x10,0x7d1,&DAT_10026790);
    uVar3 = extraout_var;
  }
  else {
    iVar2 = FUN_10001156(&local_c);
    while (uVar3 = (undefined2)((uint)iVar2 >> 0x10), !bVar1) {
      PIPP_GetUIParam(*(undefined4 *)(param_1 + 8),0xc,&local_10);
      if (local_10 == 0) {
        FUN_10001145(10);
        FUN_10001156(&local_18);
        iVar2 = local_18 - local_c;
        local_8 = iVar2;
        if (2 < iVar2) {
          bVar1 = true;
        }
      }
      else {
        iVar2 = PIPP_Input(*(undefined4 *)(param_1 + 8),0);
        local_14 = (undefined2)iVar2;
        bVar1 = true;
      }
    }
  }
  return CONCAT22(uVar3,local_14);
}



/* ================================================================
 * Function: FUN_100111e8
 * Address:  100111e8
 * ================================================================ */

undefined1 __thiscall FUN_100111e8(void *this,undefined1 *param_1,int *param_2)

{
  undefined4 uVar1;
  short sVar2;
  undefined1 local_10;
  short local_c;
  short local_8;
  
  local_10 = 0;
  local_c = 0;
  sVar2 = (-(ushort)(*(short *)((int)this + 4) != 0xf) & 0x4e) + 1;
  if (*(int *)((int)this + 8) == 0) {
    FUN_100155fe(*(void **)((int)this + 0x110),0x10,0x7d1,&DAT_10026794);
  }
  else {
    uVar1 = FUN_10011140((int)this);
    local_8 = (short)uVar1;
    while( true ) {
      if ((local_8 == 0) || (sVar2 <= local_c)) goto LAB_10011280;
      *param_1 = (undefined1)local_8;
      param_1 = param_1 + 1;
      local_c = local_c + 1;
      if (local_8 == 10) break;
      uVar1 = FUN_10011140((int)this);
      local_8 = (short)uVar1;
    }
    *param_1 = 0;
    local_10 = 1;
LAB_10011280:
    if (local_c == sVar2) {
      *param_1 = 0;
    }
    if (local_c == 0) {
      PIPP_SetUserData(*(undefined4 *)((int)this + 8),0xa77);
    }
    *param_2 = (int)local_c;
  }
  return local_10;
}



/* ================================================================
 * Function: FUN_100112da
 * Address:  100112da
 * ================================================================ */

undefined1 __thiscall FUN_100112da(void *this,short param_1,undefined4 param_2)

{
  undefined1 local_8;
  
  switch(param_1) {
  case 0x7d4:
    if (*(int *)((int)this + 8) == 0) {
      local_8 = 0;
    }
    else {
      *(undefined4 *)((int)this + 0x118) = param_2;
      local_8 = PIPP_SetLongParam(*(undefined4 *)((int)this + 8),8,
                                  *(undefined4 *)((int)this + 0x118));
    }
    break;
  default:
    local_8 = FUN_100108c2(this,param_1,param_2);
    break;
  case 0x834:
    if (*(int *)((int)this + 8) == 0) {
      local_8 = 0;
    }
    else {
      local_8 = PIPP_SetLongParam(*(undefined4 *)((int)this + 8),2,(int)(short)param_2);
    }
    break;
  case 0x835:
    if (*(int *)((int)this + 8) == 0) {
      local_8 = 0;
    }
    else {
      local_8 = PIPP_SetLongParam(*(undefined4 *)((int)this + 8),3,(int)(short)param_2);
    }
    break;
  case 0x836:
    if (*(int *)((int)this + 8) == 0) {
      local_8 = 0;
    }
    else {
      local_8 = PIPP_SetLongParam(*(undefined4 *)((int)this + 8),0x14,(int)(short)param_2);
    }
    break;
  case 0x837:
    if (*(int *)((int)this + 8) == 0) {
      local_8 = 0;
    }
    else {
      local_8 = PIPP_SetLongParam(*(undefined4 *)((int)this + 8),0x1b,(int)(short)param_2);
    }
    break;
  case 0x838:
    if (*(int *)((int)this + 8) == 0) {
      local_8 = 0;
    }
    else {
      local_8 = PIPP_SetLongParam(*(undefined4 *)((int)this + 8),6,(int)(short)param_2);
    }
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_100114c3
 * Address:  100114c3
 * ================================================================ */

undefined1 __thiscall FUN_100114c3(void *this,short param_1,int *param_2)

{
  undefined1 local_8;
  
  switch(param_1) {
  case 0x834:
    if (*(int *)((int)this + 8) == 0) {
      local_8 = 0;
    }
    else {
      local_8 = PIPP_GetLongParam(*(undefined4 *)((int)this + 8),2,param_2);
    }
    break;
  case 0x835:
    if (*(int *)((int)this + 8) == 0) {
      local_8 = 0;
    }
    else {
      local_8 = PIPP_GetLongParam(*(undefined4 *)((int)this + 8),3,param_2);
    }
    break;
  case 0x836:
    if (*(int *)((int)this + 8) == 0) {
      local_8 = 0;
    }
    else {
      local_8 = PIPP_GetLongParam(*(undefined4 *)((int)this + 8),0x14,param_2);
    }
    break;
  case 0x837:
    if (*(int *)((int)this + 8) == 0) {
      local_8 = 0;
    }
    else {
      local_8 = PIPP_GetLongParam(*(undefined4 *)((int)this + 8),0x1b,param_2);
    }
    break;
  case 0x838:
    if (*(int *)((int)this + 8) == 0) {
      local_8 = 0;
    }
    else {
      local_8 = PIPP_GetLongParam(*(undefined4 *)((int)this + 8),6,param_2);
    }
    break;
  default:
    local_8 = FUN_10010956(this,param_1,param_2);
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_10011600
 * Address:  10011600
 * ================================================================ */

undefined4 * __thiscall FUN_10011600(void *this,uint param_1)

{
  FUN_10010e45(this);
  if ((param_1 & 1) != 0) {
    FUN_1001576a(this);
  }
  return this;
}



/* ================================================================
 * Function: FUN_10011630
 * Address:  10011630
 * ================================================================ */

undefined4 * __thiscall FUN_10011630(void *this,undefined4 param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_100209e9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_100105b0(this);
  local_8 = 0;
  *(undefined ***)this = &PTR_FUN_10021440;
  *(undefined2 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  FUN_10011777(this,param_1);
  ExceptionList = local_10;
  return this;
}



/* ================================================================
 * Function: FUN_100116aa
 * Address:  100116aa
 * ================================================================ */

bool __fastcall FUN_100116aa(int param_1)

{
  undefined4 uVar1;
  bool local_8;
  
  local_8 = *(short *)(param_1 + 4) != 0;
  if (local_8) {
    uVar1 = PIPP_Create_physical_port_ex
                      ((int)*(short *)(param_1 + 4),*(undefined4 *)(param_1 + 0x118));
    *(undefined4 *)(param_1 + 8) = uVar1;
    if (*(int *)(param_1 + 8) == 0) {
      local_8 = false;
    }
    else {
      PIPP_SetUIParam(*(undefined4 *)(param_1 + 8),0x1e,*(undefined4 *)(param_1 + 0x118));
      PIPP_Initialize(*(undefined4 *)(param_1 + 8));
      *(undefined1 *)(param_1 + 0x114) = 1;
      *(undefined4 *)(param_1 + 0x10c) = 1;
    }
  }
  if (local_8 == false) {
    FUN_100155fe(*(void **)(param_1 + 0x110),0x10,0x7d1,&DAT_10026798);
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x110) + 4))();
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_10011777
 * Address:  10011777
 * ================================================================ */

undefined4 __thiscall FUN_10011777(void *this,undefined4 param_1)

{
  char cVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 uVar2;
  
  cVar1 = FUN_10001000((int)this,param_1);
  uVar2 = extraout_var;
  if (cVar1 == '\0') {
    FUN_100155fe(*(void **)((int)this + 0x110),0x10,0x7d2,&DAT_1002679c);
    uVar2 = extraout_var_00;
  }
  return CONCAT31(uVar2,cVar1);
}



/* ================================================================
 * Function: FUN_100117bb
 * Address:  100117bb
 * ================================================================ */

void __fastcall FUN_100117bb(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_100209fc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_10021440;
  local_8 = 0;
  FUN_10010612((int)param_1);
  if (param_1[0x47] != 0) {
    (*(code *)param_1[0x4a])(param_1[0x47]);
    param_1[0x47] = 0;
  }
  local_8 = 0xffffffff;
  FUN_100105fe(param_1);
  ExceptionList = local_10;
  return;
}



/* ================================================================
 * Function: FUN_10011838
 * Address:  10011838
 * ================================================================ */

undefined1 __thiscall FUN_10011838(void *this,short param_1,undefined4 param_2)

{
  undefined1 local_8;
  
  local_8 = 1;
  switch(param_1) {
  case 0xfa3:
    *(undefined2 *)((int)this + 300) = (undefined2)param_2;
    break;
  case 0xfa4:
    *(undefined2 *)((int)this + 0x12e) = (undefined2)param_2;
    break;
  case 0xfa5:
    *(undefined2 *)((int)this + 0x130) = (undefined2)param_2;
    break;
  case 0xfa6:
    *(undefined2 *)((int)this + 0x132) = (undefined2)param_2;
    break;
  case 0xfa7:
    *(undefined2 *)((int)this + 0x134) = (undefined2)param_2;
    break;
  case 0xfa8:
    *(undefined1 *)((int)this + 0x136) = (undefined1)param_2;
    break;
  default:
    local_8 = FUN_100108c2(this,param_1,param_2);
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_10011900
 * Address:  10011900
 * ================================================================ */

undefined1 __thiscall FUN_10011900(void *this,short param_1,uint *param_2)

{
  undefined1 local_8;
  
  local_8 = 1;
  switch(param_1) {
  case 0xfa3:
    *param_2 = (uint)*(ushort *)((int)this + 300);
    break;
  case 0xfa4:
    *param_2 = (uint)*(ushort *)((int)this + 0x12e);
    break;
  case 0xfa5:
    *param_2 = (uint)*(ushort *)((int)this + 0x130);
    break;
  case 0xfa6:
    *param_2 = (uint)*(ushort *)((int)this + 0x132);
    break;
  case 0xfa7:
    *param_2 = (uint)*(ushort *)((int)this + 0x134);
    break;
  case 0xfa8:
    *param_2 = (uint)*(byte *)((int)this + 0x136);
    break;
  default:
    local_8 = FUN_10010956(this,param_1,(int *)param_2);
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_100119db
 * Address:  100119db
 * ================================================================ */

/* WARNING: Removing unreachable block (ram,0x10011a98) */
/* WARNING: Removing unreachable block (ram,0x10011ab0) */

char __thiscall
FUN_100119db(void *this,undefined4 param_1,ushort param_2,int param_3,int param_4,uint param_5,
            int *param_6)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  uint local_1c;
  int local_14;
  char local_8;
  
  local_8 = '\0';
  if ((*(int *)((int)this + 0x11c) == 0) || (*(int *)((int)this + 8) == 0)) {
    FUN_100155fe(*(void **)((int)this + 0x110),0x10,0x7d1,&DAT_100267a4);
  }
  else {
    if (param_3 == 8) {
      local_1c = 0;
      local_8 = '\x01';
      while ((local_1c < param_5 && (local_8 != '\0'))) {
        if ((param_2 & 0xf) == 0) {
          uVar3 = 0x10;
        }
        else {
          uVar3 = 0x10 - (param_2 & 0xf);
        }
        uVar4 = (short)param_5 - (short)local_1c;
        if (uVar3 < uVar4) {
          uVar4 = uVar3;
        }
        local_14 = 0;
        do {
          local_8 = (**(code **)((int)this + 0x124))
                              (*(undefined4 *)((int)this + 0x11c),*(undefined4 *)((int)this + 8),
                               param_1,*(undefined2 *)((int)this + 0x130),
                               *(undefined2 *)((int)this + 0x132),param_2,8,param_4,uVar4,param_6);
          if (*param_6 != 0) {
            FUN_10001145(10);
          }
        } while ((*param_6 != 0) &&
                (iVar2 = local_14 + 1, bVar1 = local_14 < 5, local_14 = iVar2, bVar1));
        param_4 = param_4 + (uint)uVar4;
        local_1c = local_1c + uVar4;
        param_2 = param_2 + uVar4;
        if (5 < local_14) {
          local_8 = '\0';
        }
      }
    }
    else {
      local_8 = (**(code **)((int)this + 0x124))
                          (*(undefined4 *)((int)this + 0x11c),*(undefined4 *)((int)this + 8),param_1
                           ,*(undefined2 *)((int)this + 300),*(undefined2 *)((int)this + 0x12e),
                           param_2,param_3,param_4,param_5,param_6);
    }
    if (local_8 == '\0') {
      FUN_100155fe(*(void **)((int)this + 0x110),0x10,*param_6,&DAT_100267a0);
    }
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_10011c00
 * Address:  10011c00
 * ================================================================ */

undefined4 * __thiscall FUN_10011c00(void *this,uint param_1)

{
  FUN_100117bb(this);
  if ((param_1 & 1) != 0) {
    FUN_1001576a(this);
  }
  return this;
}



/* ================================================================
 * Function: FUN_10011c30
 * Address:  10011c30
 * ================================================================ */

undefined1 FUN_10011c30(uint param_1,int param_2,LPSTR param_3,short param_4)

{
  char cVar1;
  uint uVar2;
  undefined1 local_c;
  UINT local_8;
  
  local_c = 0;
  uVar2 = FUN_10011c89(param_1);
  if ((char)uVar2 == '\0') {
    cVar1 = FUN_10011ca6(param_1,param_2,&local_8);
    if (cVar1 != '\0') {
      PITG_GetResource(param_3,local_8,(int)param_4);
      local_c = 1;
    }
  }
  return local_c;
}



/* ================================================================
 * Function: FUN_10011c89
 * Address:  10011c89
 * ================================================================ */

uint FUN_10011c89(uint param_1)

{
  return param_1 & 0xffffff00;
}



/* ================================================================
 * Function: FUN_10011ca6
 * Address:  10011ca6
 * ================================================================ */

char FUN_10011ca6(int param_1,int param_2,undefined4 *param_3)

{
  ushort uVar1;
  ushort uVar2;
  char local_10;
  undefined *local_8;
  
  local_10 = '\x01';
  local_8 = (undefined *)0x0;
  if (param_1 < 0x78) {
    if (param_1 != 0x77) {
      switch(param_1) {
      case 0xb:
        local_8 = &DAT_10023418;
        uVar1 = DAT_10023438;
        break;
      default:
        goto switchD_10011cf1_caseD_c;
      case 0xe:
        local_8 = &DAT_10023400;
        uVar1 = DAT_10023410;
        break;
      case 0xf:
        local_8 = &DAT_100233e8;
        uVar1 = DAT_100233f8;
        break;
      case 0x10:
        local_8 = &DAT_100233b8;
        uVar1 = DAT_100233c8;
        break;
      case 0x16:
      case 0x18:
      case 0x46:
      case 0x69:
      case 0x6b:
      case 0x6d:
      case 0x6f:
      case 0x71:
      case 0x73:
        goto switchD_10011cf1_caseD_16;
      case 0x19:
        local_8 = &DAT_100233d0;
        uVar1 = DAT_100233e0;
      }
      goto LAB_10011eba;
    }
  }
  else if (param_1 < 0x644) {
    if (param_1 == 0x643) {
      uVar1 = 1;
      local_8 = &DAT_10023348;
      goto LAB_10011eba;
    }
    if (param_1 < 0x3ef) {
      if ((param_1 != 0x3ee) && (param_1 != 0x7a)) {
        if (param_1 == 0x385) {
          local_8 = &DAT_100232c8;
          uVar1 = DAT_100232d8;
          goto LAB_10011eba;
        }
        if (param_1 != 0x3ec) goto switchD_10011cf1_caseD_c;
      }
    }
    else if ((param_1 != 0x3f0) && (param_1 != 0x3f2)) {
      if (param_1 == 0x642) {
        local_8 = &DAT_100233a0;
        uVar1 = DAT_100233b0;
        goto LAB_10011eba;
      }
switchD_10011cf1_caseD_c:
      local_10 = '\0';
      uVar1 = 0;
      goto LAB_10011eba;
    }
  }
  else if (param_1 < 0xe16) {
    if (param_1 != 0xe15) {
      if (param_1 == 0x644) {
        local_8 = &DAT_10023378;
        uVar1 = DAT_10023398;
        goto LAB_10011eba;
      }
      if (param_1 == 0x7d1) {
        local_8 = &DAT_10023318;
        uVar1 = DAT_10023340;
        goto LAB_10011eba;
      }
      if (param_1 != 0xe12) goto switchD_10011cf1_caseD_c;
    }
  }
  else if ((param_1 != 0xe18) && (param_1 != 0xe1b)) goto switchD_10011cf1_caseD_c;
switchD_10011cf1_caseD_16:
  local_8 = &DAT_100232e0;
  uVar1 = DAT_10023310;
LAB_10011eba:
  if (local_10 == '\x01') {
    local_10 = '\0';
    for (uVar2 = 0; uVar2 < uVar1; uVar2 = uVar2 + 1) {
      if (*(int *)(local_8 + (uint)uVar2 * 8) == param_2) {
        *param_3 = *(undefined4 *)(local_8 + (uint)uVar2 * 8 + 4);
        return '\x01';
      }
    }
  }
  return local_10;
}



/* ================================================================
 * Function: FUN_10011fb0
 * Address:  10011fb0
 * ================================================================ */

undefined4 * __fastcall FUN_10011fb0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_10021480;
  param_1[2] = 0;
  _memset(param_1 + 3,0,0x33);
  param_1[0x10] = 0;
  *(undefined1 *)((int)param_1 + 0x46) = 0;
  *(undefined1 *)((int)param_1 + 0x45) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  *(undefined2 *)(param_1 + 0x13) = 0;
  *(undefined1 *)((int)param_1 + 0x4e) = 0;
  *(undefined1 *)((int)param_1 + 0x14e) = 0;
  *(undefined2 *)((int)param_1 + 0x24e) = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0x40240000;
  *(undefined2 *)(param_1 + 0x96) = 1;
  *(undefined2 *)((int)param_1 + 0x25a) = 1;
  param_1[0x98] = 0x66666666;
  param_1[0x99] = 0x3ff66666;
  *(undefined2 *)(param_1 + 0x9a) = 1;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0x408f4000;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0x408f4000;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  *(undefined2 *)((int)param_1 + 0x28a) = 0x642;
  *(undefined2 *)(param_1 + 0xaa) = 7;
  *(undefined2 *)(param_1 + 0xa2) = 7;
  *(undefined2 *)(param_1 + 0x9e) = 7;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0x412e8480;
  *(undefined2 *)(param_1 + 0xb2) = 1;
  param_1[0xac] = 0;
  param_1[0xad] = 0x3ff00000;
  param_1[0xae] = 0;
  *(undefined2 *)(param_1 + 0xaf) = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0x40590000;
  *(undefined2 *)(param_1 + 0xa6) = 7;
  *(undefined2 *)(param_1 + 0xb3) = 1;
  *(undefined2 *)((int)param_1 + 0x2ce) = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  *(undefined2 *)(param_1 + 0xdc) = 2;
  *(undefined2 *)(param_1 + 0xd2) = 2;
  *(undefined2 *)(param_1 + 0xce) = 2;
  *(undefined2 *)(param_1 + 0xc6) = 2;
  *(undefined2 *)(param_1 + 0xca) = 2;
  *(undefined2 *)(param_1 + 0xc2) = 2;
  *(undefined2 *)(param_1 + 0xbe) = 2;
  *(undefined2 *)(param_1 + 0xba) = 2;
  *(undefined2 *)(param_1 + 0xb6) = 2;
  *(undefined2 *)((int)param_1 + 0x362) = 1;
  *(undefined2 *)(param_1 + 0xd8) = 1;
  *(undefined2 *)((int)param_1 + 0x2ca) = 0;
  *(undefined2 *)(param_1 + 0xdf) = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  *(undefined2 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)((int)param_1 + 0x3a2) = 2;
  param_1[0xe9] = 0;
  FUN_100155ea((int)param_1);
  return param_1;
}



/* ================================================================
 * Function: FUN_100123d4
 * Address:  100123d4
 * ================================================================ */

void __fastcall FUN_100123d4(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_10021480;
  return;
}



/* ================================================================
 * Function: FUN_100123e8
 * Address:  100123e8
 * ================================================================ */

float10 FUN_100123e8(double param_1,short param_2,short param_3)

{
  undefined4 local_c;
  undefined4 uStack_8;
  
  if (param_2 == param_3) {
    local_c = 0;
    uStack_8 = 0x3ff00000;
  }
  else {
    switch(param_3) {
    case 1:
      if (param_2 == 2) {
        local_c = 0;
        uStack_8 = 0x408f4000;
      }
      else if (param_2 == 7) {
        local_c = 0xd2f1a9fc;
        uStack_8 = 0x3f50624d;
      }
      else {
        local_c = 0;
        uStack_8 = 0x412e8480;
      }
      break;
    case 2:
      if (param_2 == 1) {
        local_c = 0xd2f1a9fc;
        uStack_8 = 0x3f50624d;
      }
      else if (param_2 == 7) {
        local_c = 0xa0b5ed8d;
        uStack_8 = 0x3eb0c6f7;
      }
      else {
        local_c = 0;
        uStack_8 = 0x408f4000;
      }
      break;
    case 3:
      if (param_2 == 1) {
        local_c = 0xa0b5ed8d;
        uStack_8 = 0x3eb0c6f7;
      }
      else if (param_2 == 7) {
        local_c = 0xe826d695;
        uStack_8 = 0x3e112e0b;
      }
      else {
        local_c = 0xd2f1a9fc;
        uStack_8 = 0x3f50624d;
      }
      break;
    default:
      local_c = 0;
      uStack_8 = 0x3ff00000;
      break;
    case 7:
      if (param_2 == 1) {
        uStack_8 = 0x408f4000;
      }
      else if (param_2 == 2) {
        uStack_8 = 0x412e8480;
      }
      else {
        uStack_8 = 0x41cdcd65;
      }
      local_c = 0;
    }
  }
  return (float10)param_1 * (float10)(double)CONCAT44(uStack_8,local_c);
}



/* ================================================================
 * Function: FUN_10012584
 * Address:  10012584
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 __fastcall
FUN_10012584(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,short param_5,
            double param_6,undefined4 *param_7)

{
  ushort uVar1;
  ushort uVar2;
  double dVar3;
  undefined4 in_EAX;
  undefined2 uVar5;
  undefined4 uVar4;
  longlong lVar6;
  bool local_8;
  
  uVar5 = (undefined2)((uint)in_EAX >> 0x10);
  local_8 = param_6 < _DAT_100211b0 == 0 && (param_6 == _DAT_100211b0) == 0;
  uVar4 = CONCAT31((int3)(CONCAT22(uVar5,(ushort)(param_6 < _DAT_100211b0) << 8 |
                                         (ushort)(NAN(param_6) || NAN(_DAT_100211b0)) << 10 |
                                         (ushort)(param_6 == _DAT_100211b0) << 0xe) >> 8),local_8);
  if (local_8) {
    param_2 = (int)param_5;
    if (param_2 == -1) {
      dVar3 = (double)CONCAT44(param_4,param_3);
      uVar1 = (ushort)(dVar3 < _DAT_100211b0);
      uVar2 = (ushort)(dVar3 == _DAT_100211b0);
      lVar6 = CONCAT44(0xffffffff,
                       CONCAT22(uVar5,uVar1 << 8 | (ushort)(NAN(dVar3) || NAN(_DAT_100211b0)) << 10
                                      | uVar2 << 0xe));
      if (uVar1 == 0 && uVar2 == 0) {
        lVar6 = __ftol();
        *param_7 = (int)lVar6;
      }
      local_8 = uVar1 == 0 && uVar2 == 0;
      param_2 = (int)((ulonglong)lVar6 >> 0x20);
      uVar4 = (undefined4)lVar6;
    }
    else {
      dVar3 = (double)CONCAT44(param_4,param_3);
      uVar4 = CONCAT22(uVar5,(ushort)(dVar3 < _DAT_100211b0) << 8 |
                             (ushort)(NAN(dVar3) || NAN(_DAT_100211b0)) << 10 |
                             (ushort)(dVar3 == _DAT_100211b0) << 0xe);
      if (dVar3 < _DAT_100211b0 == 0) {
        if (param_5 != 3) {
          FUN_100123e8((double)CONCAT44(param_4,param_3),param_5,3);
        }
        lVar6 = __ftol();
        param_2 = (int)((ulonglong)lVar6 >> 0x20);
        uVar4 = (undefined4)lVar6;
        *param_7 = uVar4;
      }
    }
  }
  return CONCAT44(param_2,CONCAT31((int3)((uint)uVar4 >> 8),local_8));
}



/* ================================================================
 * Function: FUN_1001265c
 * Address:  1001265c
 * ================================================================ */

undefined1 __fastcall FUN_1001265c(int param_1)

{
  undefined1 local_10;
  
  if (((*(short *)(param_1 + 0x2ce) < 1) || (*(int *)(param_1 + 0x364) == 0)) ||
     (*(int *)(param_1 + 0x368) == 0)) {
    local_10 = 0;
  }
  else {
    local_10 = 1;
  }
  return local_10;
}



/* ================================================================
 * Function: FUN_100126a8
 * Address:  100126a8
 * ================================================================ */

char __fastcall FUN_100126a8(int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float10 fVar5;
  float10 fVar6;
  undefined1 local_44;
  undefined2 local_34;
  
  if (((*(short *)(param_1 + 0x2ce) < 1) || (*(int *)(param_1 + 0x364) == 0)) ||
     (*(int *)(param_1 + 0x368) == 0)) {
    local_44 = '\0';
  }
  else {
    local_44 = '\x01';
  }
  if (local_44 != '\0') {
    fVar5 = FUN_100123e8(*(double *)(param_1 + 0x2d0),*(short *)(param_1 + 0x2d8),
                         *(short *)(param_1 + 0x370));
    dVar1 = (double)fVar5;
    fVar5 = FUN_100123e8(*(double *)(param_1 + 0x2e0),*(short *)(param_1 + 0x2e8),
                         *(short *)(param_1 + 0x370));
    fVar6 = FUN_100123e8(*(double *)(param_1 + 0x2f0),*(short *)(param_1 + 0x2f8),
                         *(short *)(param_1 + 0x370));
    dVar2 = (double)fVar6;
    fVar6 = FUN_100123e8(*(double *)(param_1 + 0x300),*(short *)(param_1 + 0x308),
                         *(short *)(param_1 + 0x370));
    if (*(short *)(param_1 + 0x2ce) < 2) {
      **(double **)(param_1 + 0x364) = dVar1;
      **(double **)(param_1 + 0x368) = dVar2;
    }
    else {
      dVar3 = ((double)fVar5 - dVar1) / (double)(*(short *)(param_1 + 0x2ce) + -1);
      dVar4 = ((double)fVar6 - dVar2) / (double)(*(short *)(param_1 + 0x2ce) + -1);
      for (local_34 = 0; local_34 < *(short *)(param_1 + 0x2ce); local_34 = local_34 + 1) {
        *(double *)(*(int *)(param_1 + 0x364) + local_34 * 8) =
             (double)(int)local_34 * dVar3 + dVar1;
        *(double *)(*(int *)(param_1 + 0x368) + local_34 * 8) =
             (double)(int)local_34 * dVar4 + dVar2;
      }
      *(double *)(param_1 + 800) = dVar4;
      *(double *)(param_1 + 0x310) = dVar3;
      *(undefined2 *)(param_1 + 0x318) = *(undefined2 *)(param_1 + 0x370);
      *(undefined2 *)(param_1 + 0x328) = *(undefined2 *)(param_1 + 0x318);
    }
  }
  return local_44;
}



/* ================================================================
 * Function: FUN_100128fb
 * Address:  100128fb
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 __fastcall FUN_100128fb(int param_1)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 *puVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  int iVar24;
  ushort uVar25;
  int iVar26;
  int iVar27;
  float10 fVar28;
  float10 fVar29;
  float10 fVar30;
  float10 fVar31;
  float10 fVar32;
  float10 fVar33;
  float10 fVar34;
  double dVar35;
  undefined4 uVar36;
  undefined2 uVar37;
  undefined2 uVar38;
  undefined2 uVar39;
  undefined2 uVar40;
  undefined4 uVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double local_9c;
  int local_8c;
  undefined4 uStack_88;
  double local_7c;
  short local_74;
  int local_68;
  undefined8 local_44;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined1 local_8;
  
  local_8 = 1;
  fVar28 = FUN_100123e8(*(double *)(param_1 + 0x2d0),*(short *)(param_1 + 0x2d8),
                        *(short *)(param_1 + 0x338));
  dVar3 = (double)fVar28;
  fVar28 = FUN_100123e8(*(double *)(param_1 + 0x2e0),*(short *)(param_1 + 0x2e8),
                        *(short *)(param_1 + 0x338));
  dVar4 = (double)fVar28;
  fVar28 = FUN_100123e8(*(double *)(param_1 + 0x300),*(short *)(param_1 + 0x308),
                        *(short *)(param_1 + 0x338));
  dVar5 = (double)fVar28;
  pdVar1 = (double *)(param_1 + 0x330);
  dVar23 = *pdVar1;
  dVar21 = *pdVar1;
  dVar20 = *pdVar1;
  dVar9 = *pdVar1;
  dVar35 = *pdVar1;
  dVar18 = *pdVar1;
  dVar16 = *pdVar1;
  dVar15 = *pdVar1;
  dVar12 = *pdVar1;
  dVar10 = *pdVar1;
  fVar28 = FUN_100123e8(*(double *)(param_1 + 0x340),*(short *)(param_1 + 0x348),
                        *(short *)(param_1 + 0x338));
  dVar6 = (double)fVar28;
  pdVar1 = (double *)(param_1 + 0x350);
  dVar19 = *pdVar1;
  dVar43 = *pdVar1;
  dVar14 = *pdVar1;
  dVar11 = *pdVar1;
  pdVar2 = (double *)(param_1 + 0x358);
  dVar22 = *pdVar2;
  dVar42 = *pdVar2;
  dVar17 = *pdVar2;
  dVar13 = *pdVar2;
  local_44 = dVar3;
  local_30 = dVar4;
  if (dVar4 < dVar3) {
    local_44 = dVar4;
    local_30 = dVar3;
  }
  if ((((((*(short *)(param_1 + 0x2ce) < 2) || (local_30 <= _DAT_100211b0)) ||
        (local_44 <= _DAT_100211b0)) || ((dVar5 <= _DAT_100211b0 || (local_30 <= local_44)))) ||
      (((dVar10 <= _DAT_100211b0 || (dVar6 <= _DAT_100211b0)) ||
       (((*pdVar1 <= _DAT_100211b0 && (*pdVar2 <= _DAT_100211b0)) ||
        (*(int *)(param_1 + 0x364) == 0)))))) || (*(int *)(param_1 + 0x368) == 0)) {
    local_8 = 0;
  }
  else {
    local_7c = local_30 / (double)(int)*(short *)(param_1 + 0x2ce);
    dVar10 = local_44 * _DAT_100214d8;
    iVar26 = *(short *)(param_1 + 0x2ce) + -1;
    uVar25 = 0;
    puVar7 = *(undefined4 **)(param_1 + 0x364);
    *puVar7 = (undefined4)local_44;
    puVar7[1] = local_44._4_4_;
    do {
      for (local_74 = 1; local_74 < *(short *)(param_1 + 0x2ce); local_74 = local_74 + 1) {
        dVar44 = -*(double *)(*(int *)(param_1 + 0x364) + -8 + local_74 * 8) / dVar16;
        fVar28 = (float10)FUN_10016430(SUB84(dVar44,0),(int)((ulonglong)dVar44 >> 0x20));
        dVar44 = dVar17 / dVar6;
        dVar8 = -*(double *)(*(int *)(param_1 + 0x364) + -8 + local_74 * 8) / dVar6;
        fVar29 = (float10)FUN_10016430(SUB84(dVar8,0),(int)((ulonglong)dVar8 >> 0x20));
        dVar44 = (double)(fVar29 * (float10)dVar44 +
                         (float10)(double)(fVar28 * (float10)(dVar14 / dVar15)));
        fVar28 = FUN_10016378(SUB84(dVar44,0),(int)((ulonglong)dVar44 >> 0x20));
        local_9c = (double)fVar28;
        if (local_9c == _DAT_100211b0) {
          local_9c = 1e+20;
        }
        *(double *)(*(int *)(param_1 + 0x364) + local_74 * 8) =
             ((dVar13 * dVar6 + dVar11 * dVar12) / local_9c + _DAT_10021300) * local_7c +
             *(double *)(*(int *)(param_1 + 0x364) + -8 + local_74 * 8);
        if (_DAT_100212f0 * local_30 < *(double *)(*(int *)(param_1 + 0x364) + local_74 * 8)) {
          *(double *)(*(int *)(param_1 + 0x364) + local_74 * 8) = _DAT_100212f0 * local_30;
        }
      }
      dVar44 = (*(double *)(*(int *)(param_1 + 0x364) + iVar26 * 8) - local_30) / local_30;
      local_7c = (_DAT_10021300 - dVar44 / _DAT_100214d0) * local_7c;
      uVar25 = uVar25 + 1;
      if (1000 < uVar25) break;
      local_68 = SUB84(dVar44,0);
      fVar28 = FUN_10016378(local_68,(int)((ulonglong)dVar44 >> 0x20));
    } while ((float10)dVar10 < fVar28);
    iVar24 = *(int *)(param_1 + 0x368);
    local_38 = SUB84(dVar5,0);
    *(undefined4 *)(iVar24 + iVar26 * 8) = local_38;
    uStack_34 = (undefined4)((ulonglong)dVar5 >> 0x20);
    *(undefined4 *)(iVar24 + 4 + iVar26 * 8) = uStack_34;
    dVar43 = dVar43 * dVar18;
    dVar35 = -*(double *)(*(int *)(param_1 + 0x364) + iVar26 * 8) / dVar35;
    fVar28 = (float10)FUN_10016430(SUB84(dVar35,0),(int)((ulonglong)dVar35 >> 0x20));
    dVar42 = dVar42 * dVar6;
    dVar35 = -*(double *)(*(int *)(param_1 + 0x364) + iVar26 * 8) / dVar6;
    fVar29 = (float10)FUN_10016430(SUB84(dVar35,0),(int)((ulonglong)dVar35 >> 0x20));
    dVar9 = -*(double *)(*(int *)(param_1 + 0x368) + iVar26 * 8) / dVar9;
    fVar30 = (float10)FUN_10016430(SUB84(dVar9,0),(int)((ulonglong)dVar9 >> 0x20));
    dVar43 = (double)(((float10)_DAT_10021300 - fVar30) *
                     (float10)(double)(fVar28 * (float10)dVar43));
    dVar35 = -*(double *)(*(int *)(param_1 + 0x368) + iVar26 * 8) / dVar6;
    fVar30 = (float10)FUN_10016430(SUB84(dVar35,0),(int)((ulonglong)dVar35 >> 0x20));
    fVar28 = (float10)_DAT_10021300;
    for (local_74 = 0; local_74 < *(short *)(param_1 + 0x2ce); local_74 = local_74 + 1) {
      uVar41 = (undefined4)((ulonglong)(dVar19 * dVar20) >> 0x20);
      dVar35 = -*(double *)(*(int *)(param_1 + 0x364) + local_74 * 8) / dVar21;
      uVar39 = (undefined2)((ulonglong)dVar35 >> 0x20);
      uVar40 = (undefined2)((ulonglong)dVar35 >> 0x30);
      fVar31 = (float10)FUN_10016430(SUB84(dVar35,0),(int)((ulonglong)dVar35 >> 0x20));
      dVar35 = dVar22 * dVar6;
      uVar36 = SUB84(dVar35,0);
      uVar37 = (undefined2)((ulonglong)dVar35 >> 0x20);
      uVar38 = (undefined2)((ulonglong)dVar35 >> 0x30);
      dVar35 = -*(double *)(*(int *)(param_1 + 0x364) + local_74 * 8) / dVar6;
      fVar32 = (float10)FUN_10016430(SUB84(dVar35,0),(int)((ulonglong)dVar35 >> 0x20));
      *(double *)(*(int *)(param_1 + 0x368) + local_74 * 8) =
           dVar5 / (double)(int)*(short *)(param_1 + 0x2ce);
      uVar25 = 0;
      do {
        dVar35 = -*(double *)(*(int *)(param_1 + 0x368) + local_74 * 8) / dVar23;
        fVar33 = (float10)FUN_10016430(SUB84(dVar35,0),(int)((ulonglong)dVar35 >> 0x20));
        dVar35 = (double)(((float10)_DAT_10021300 - fVar33) *
                         (float10)(double)(fVar31 * (float10)(double)CONCAT44(uVar41,CONCAT22(uVar40
                                                  ,uVar39))));
        dVar9 = -*(double *)(*(int *)(param_1 + 0x368) + local_74 * 8) / dVar6;
        fVar33 = (float10)FUN_10016430(SUB84(dVar9,0),(int)((ulonglong)dVar9 >> 0x20));
        fVar33 = ((float10)_DAT_10021300 - fVar33) *
                 (float10)(double)(fVar32 * (float10)(double)CONCAT26(uVar38,CONCAT24(uVar37,uVar36)
                                                                     )) + (float10)dVar35;
        dVar35 = (double)(fVar33 - (float10)(double)((fVar28 - fVar30) *
                                                     (float10)(double)(fVar29 * (float10)dVar42) +
                                                    (float10)dVar43));
        uStack_88 = (undefined4)((ulonglong)dVar35 >> 0x20);
        local_8c = SUB84(dVar35,0);
        fVar34 = FUN_10016378(local_8c,uStack_88);
        if ((float10)dVar10 < fVar34) {
          *(double *)(*(int *)(param_1 + 0x368) + local_74 * 8) =
               (_DAT_10021300 - dVar35 / (double)fVar33) *
               *(double *)(*(int *)(param_1 + 0x368) + local_74 * 8);
        }
        uVar25 = uVar25 + 1;
      } while ((uVar25 < 0x3e9) &&
              (fVar33 = FUN_10016378(local_8c,uStack_88), (float10)dVar10 < fVar33));
    }
    if (dVar4 < dVar3) {
      for (local_74 = 0; (int)local_74 < (int)*(short *)(param_1 + 0x2ce) / 2;
          local_74 = local_74 + 1) {
        uVar36 = *(undefined4 *)(*(int *)(param_1 + 0x368) + local_74 * 8);
        uVar41 = *(undefined4 *)(*(int *)(param_1 + 0x368) + 4 + local_74 * 8);
        iVar27 = (int)*(short *)(param_1 + 0x2ce) - (int)local_74;
        iVar26 = *(int *)(param_1 + 0x368);
        iVar24 = *(int *)(param_1 + 0x368);
        *(undefined4 *)(iVar24 + local_74 * 8) = *(undefined4 *)(iVar26 + -8 + iVar27 * 8);
        *(undefined4 *)(iVar24 + 4 + local_74 * 8) = *(undefined4 *)(iVar26 + -4 + iVar27 * 8);
        iVar24 = (int)*(short *)(param_1 + 0x2ce) - (int)local_74;
        iVar26 = *(int *)(param_1 + 0x368);
        *(undefined4 *)(iVar26 + -8 + iVar24 * 8) = uVar36;
        *(undefined4 *)(iVar26 + -4 + iVar24 * 8) = uVar41;
        uVar36 = *(undefined4 *)(*(int *)(param_1 + 0x364) + local_74 * 8);
        uVar41 = *(undefined4 *)(*(int *)(param_1 + 0x364) + 4 + local_74 * 8);
        iVar27 = (int)*(short *)(param_1 + 0x2ce) - (int)local_74;
        iVar26 = *(int *)(param_1 + 0x364);
        iVar24 = *(int *)(param_1 + 0x364);
        *(undefined4 *)(iVar24 + local_74 * 8) = *(undefined4 *)(iVar26 + -8 + iVar27 * 8);
        *(undefined4 *)(iVar24 + 4 + local_74 * 8) = *(undefined4 *)(iVar26 + -4 + iVar27 * 8);
        iVar24 = (int)*(short *)(param_1 + 0x2ce) - (int)local_74;
        iVar26 = *(int *)(param_1 + 0x364);
        *(undefined4 *)(iVar26 + -8 + iVar24 * 8) = uVar36;
        *(undefined4 *)(iVar26 + -4 + iVar24 * 8) = uVar41;
      }
    }
    if (*(short *)(param_1 + 0x338) != *(short *)(param_1 + 0x370)) {
      for (local_74 = 0; local_74 < *(short *)(param_1 + 0x2ce); local_74 = local_74 + 1) {
        uVar36 = *(undefined4 *)(*(int *)(param_1 + 0x364) + local_74 * 8);
        uVar41 = *(undefined4 *)(*(int *)(param_1 + 0x364) + 4 + local_74 * 8);
        fVar28 = FUN_100123e8((double)CONCAT44(*(undefined4 *)
                                                (*(int *)(param_1 + 0x368) + 4 + local_74 * 8),
                                               *(undefined4 *)
                                                (*(int *)(param_1 + 0x368) + local_74 * 8)),
                              *(short *)(param_1 + 0x338),*(short *)(param_1 + 0x370));
        fVar29 = FUN_100123e8((double)CONCAT44(uVar41,uVar36),*(short *)(param_1 + 0x338),
                              *(short *)(param_1 + 0x370));
        iVar26 = *(int *)(param_1 + 0x368);
        local_38 = SUB84((double)fVar28,0);
        *(undefined4 *)(iVar26 + local_74 * 8) = local_38;
        uStack_34 = (undefined4)((ulonglong)(double)fVar28 >> 0x20);
        *(undefined4 *)(iVar26 + 4 + local_74 * 8) = uStack_34;
        iVar26 = *(int *)(param_1 + 0x364);
        local_30._0_4_ = SUB84((double)fVar29,0);
        *(undefined4 *)(iVar26 + local_74 * 8) = (undefined4)local_30;
        local_30._4_4_ = (undefined4)((ulonglong)(double)fVar29 >> 0x20);
        *(undefined4 *)(iVar26 + 4 + local_74 * 8) = local_30._4_4_;
      }
    }
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_10013381
 * Address:  10013381
 * ================================================================ */

char __thiscall FUN_10013381(void *this,int param_1)

{
  char cVar1;
  
  if (param_1 < 0x7d2) {
    if (param_1 == 0x7d1) {
      cVar1 = (**(code **)(**(int **)((int)this + 0x40) + 4))();
      return cVar1;
    }
    if (param_1 == 1) {
      cVar1 = (**(code **)(*(int *)this + 8))();
      return cVar1;
    }
    if (param_1 == 0x65) {
      if (*(short *)((int)this + 0x2cc) == 2) {
        cVar1 = FUN_100128fb((int)this);
        return cVar1;
      }
      if (*(short *)((int)this + 0x2cc) == 1) {
        cVar1 = FUN_100126a8((int)this);
        return cVar1;
      }
      if (*(short *)((int)this + 0x2cc) == 0) {
        cVar1 = FUN_1001265c((int)this);
        return cVar1;
      }
      return '\0';
    }
  }
  else {
    if (param_1 == 0x7d2) {
      cVar1 = (**(code **)(**(int **)((int)this + 0x40) + 8))();
      return cVar1;
    }
    if (param_1 == 0x7d3) {
      cVar1 = (**(code **)(**(int **)((int)this + 0x40) + 0xc))();
      return cVar1;
    }
  }
  FUN_100155fe(this,8,1,&DAT_100267a8);
  return '\0';
}



/* ================================================================
 * Function: FUN_10013499
 * Address:  10013499
 * ================================================================ */

undefined1 __thiscall FUN_10013499(void *this,short param_1,undefined4 param_2,undefined2 param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *local_48;
  undefined4 *local_44;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10020a26;
  local_10 = ExceptionList;
  if ((1999 < param_1) && (param_1 < 3000)) {
    ExceptionList = &local_10;
    uVar1 = (**(code **)(**(int **)((int)this + 0x40) + 0x24))((int)param_1,param_2,param_3);
    ExceptionList = local_10;
    return uVar1;
  }
  if ((8999 < param_1) && (param_1 < 10000)) {
    ExceptionList = &local_10;
    uVar1 = (**(code **)(**(int **)((int)this + 0x48) + 4))
                      ((int)param_1,param_2,CONCAT22(param_1 >> 0xf,param_3));
    ExceptionList = local_10;
    return uVar1;
  }
  iVar2 = (int)param_1;
  if (iVar2 < 0x70) {
    if (iVar2 == 0x6f) {
      *(short *)((int)this + 0x2e8) = (short)param_2;
      return 1;
    }
    switch(iVar2) {
    case 0xb:
      *(short *)((int)this + 0x24e) = (short)param_2;
      return 1;
    case 0xf:
      *(short *)((int)this + 0x25a) = (short)param_2;
      return 1;
    case 0x10:
      *(short *)((int)this + 0x268) = (short)param_2;
      return 1;
    case 0x16:
      *(short *)((int)this + 0x278) = (short)param_2;
      return 1;
    case 0x18:
      *(short *)((int)this + 0x288) = (short)param_2;
      return 1;
    case 0x19:
      *(short *)((int)this + 0x28a) = (short)param_2;
      return 1;
    case 0x20:
      *(undefined4 *)((int)this + 0x2b8) = param_2;
      return 1;
    case 0x21:
      *(short *)((int)this + 700) = (short)param_2;
      return 1;
    case 0x23:
      *(short *)((int)this + 0x2c8) = (short)param_2;
      return 1;
    case 0x46:
      *(short *)((int)this + 0x2a8) = (short)param_2;
      return 1;
    case 0x65:
      *(short *)((int)this + 0x2ca) = (short)param_2;
      return 1;
    case 0x66:
      *(short *)((int)this + 0x2ce) = (short)param_2;
      return 1;
    case 0x67:
      *(short *)((int)this + 0x2cc) = (short)param_2;
      return 1;
    case 0x69:
      *(short *)((int)this + 0x2f8) = (short)param_2;
      return 1;
    case 0x6b:
      *(short *)((int)this + 0x308) = (short)param_2;
      return 1;
    case 0x6d:
      *(short *)((int)this + 0x2d8) = (short)param_2;
      return 1;
    }
  }
  else if (iVar2 < 0xbf) {
    if (iVar2 == 0xbe) {
      *(undefined4 *)((int)this + 0x374) = param_2;
      return 1;
    }
    switch(iVar2) {
    case 0x71:
      *(short *)((int)this + 0x328) = (short)param_2;
      return 1;
    case 0x73:
      *(short *)((int)this + 0x318) = (short)param_2;
      return 1;
    case 0x74:
      *(short *)((int)this + 0x360) = (short)param_2;
      return 1;
    case 0x75:
      *(short *)((int)this + 0x362) = (short)param_2;
      return 1;
    case 0x77:
      *(short *)((int)this + 0x348) = (short)param_2;
      return 1;
    case 0x7a:
      *(short *)((int)this + 0x338) = (short)param_2;
      return 1;
    case 0x7c:
      *(undefined4 *)((int)this + 0x364) = param_2;
      return 1;
    case 0x7d:
      *(undefined4 *)((int)this + 0x368) = param_2;
      return 1;
    case 0x7e:
      *(undefined4 *)((int)this + 0x36c) = param_2;
      return 1;
    case 0x7f:
      *(short *)((int)this + 0x370) = (short)param_2;
      return 1;
    case 0x80:
      *(undefined4 *)((int)this + 0x378) = param_2;
      return 1;
    }
  }
  else {
    if (iVar2 == 0x385) {
      *(short *)((int)this + 0x28c) = (short)param_2;
      return 1;
    }
    if (iVar2 == 0xbb9) {
      *(short *)((int)this + 0x3a0) = (short)param_2;
      return 1;
    }
    if (iVar2 == 0x2329) {
      if ((((short)param_2 != 0) && ((short)param_2 != 1)) && ((short)param_2 != 9999)) {
        ExceptionList = &local_10;
        FUN_100155fe(this,2,2,&DAT_100267b0);
        ExceptionList = local_10;
        return 0;
      }
      if ((short)param_2 == *(short *)((int)this + 0x4c)) {
        return 1;
      }
      ExceptionList = &local_10;
      *(short *)((int)this + 0x4c) = (short)param_2;
      if ((*(int *)((int)this + 0x48) != 0) &&
         (*(undefined4 **)((int)this + 0x48) != (undefined4 *)0x0)) {
        (**(code **)**(undefined4 **)((int)this + 0x48))(1);
      }
      if (*(short *)((int)this + 0x4c) == 1) {
        puVar3 = operator_new(0x270);
        local_8 = 0;
        if (puVar3 == (undefined4 *)0x0) {
          local_44 = (undefined4 *)0x0;
        }
        else {
          local_44 = FUN_1000fa04(puVar3);
        }
        *(undefined4 **)((int)this + 0x48) = local_44;
      }
      else {
        puVar3 = operator_new(0xc);
        local_8 = 1;
        if (puVar3 == (undefined4 *)0x0) {
          local_48 = (undefined4 *)0x0;
        }
        else {
          local_48 = FUN_1000f710(puVar3);
        }
        *(undefined4 **)((int)this + 0x48) = local_48;
      }
      local_8 = 0xffffffff;
      if (*(int *)((int)this + 0x48) == 0) {
        FUN_100155fe(this,8,0xbadc0de,&DAT_100267ac);
        ExceptionList = local_10;
        return 0;
      }
      FUN_100030c0(*(void **)((int)this + 0x48),this);
      ExceptionList = local_10;
      return 1;
    }
  }
  ExceptionList = &local_10;
  FUN_100155fe(this,8,1,&DAT_100267b4);
  ExceptionList = local_10;
  return 0;
}



/* ================================================================
 * Function: FUN_10013a70
 * Address:  10013a70
 * ================================================================ */

undefined1 __thiscall FUN_10013a70(void *this,short param_1,int *param_2,undefined2 param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  if ((1999 < param_1) && (param_1 < 3000)) {
    if (*(int *)((int)this + 0x40) != 0) {
      uVar1 = (**(code **)(**(int **)((int)this + 0x40) + 0x28))
                        (param_1,param_2,CONCAT22(param_1 >> 0xf,param_3));
      return uVar1;
    }
    return 1;
  }
  if ((8999 < param_1) && (param_1 < 10000)) {
    uVar1 = (**(code **)(**(int **)((int)this + 0x48) + 8))((int)param_1,param_2,param_3);
    return uVar1;
  }
  iVar2 = (int)param_1;
  if (iVar2 < 0x70) {
    if (iVar2 == 0x6f) {
      *param_2 = (int)*(short *)((int)this + 0x2e8);
      return 1;
    }
    switch(iVar2) {
    case 0xb:
      *param_2 = (int)*(short *)((int)this + 0x24e);
      return 1;
    case 0xf:
      *param_2 = (int)*(short *)((int)this + 0x25a);
      return 1;
    case 0x10:
      *param_2 = (int)*(short *)((int)this + 0x268);
      return 1;
    case 0x16:
      *param_2 = (int)*(short *)((int)this + 0x278);
      return 1;
    case 0x18:
      *param_2 = (int)*(short *)((int)this + 0x288);
      return 1;
    case 0x19:
      *param_2 = (int)*(short *)((int)this + 0x28a);
      return 1;
    case 0x20:
      *param_2 = *(int *)((int)this + 0x2b8);
      return 1;
    case 0x21:
      *param_2 = (int)*(short *)((int)this + 700);
      return 1;
    case 0x23:
      *param_2 = (int)*(short *)((int)this + 0x2c8);
      return 1;
    case 0x44:
      *param_2 = (int)*(short *)((int)this + 0x298);
      return 1;
    case 0x46:
      *param_2 = (int)*(short *)((int)this + 0x2a8);
      return 1;
    case 0x65:
      *param_2 = (int)*(short *)((int)this + 0x2ca);
      return 1;
    case 0x66:
      *param_2 = (int)*(short *)((int)this + 0x2ce);
      return 1;
    case 0x67:
      *param_2 = (int)*(short *)((int)this + 0x2cc);
      return 1;
    case 0x69:
      *param_2 = (int)*(short *)((int)this + 0x2f8);
      return 1;
    case 0x6b:
      *param_2 = (int)*(short *)((int)this + 0x308);
      return 1;
    case 0x6d:
      *param_2 = (int)*(short *)((int)this + 0x2d8);
      return 1;
    }
  }
  else if (iVar2 < 0xbf) {
    if (iVar2 == 0xbe) {
      *param_2 = *(int *)((int)this + 0x374);
      return 1;
    }
    switch(iVar2) {
    case 0x71:
      *param_2 = (int)*(short *)((int)this + 0x328);
      return 1;
    case 0x73:
      *param_2 = (int)*(short *)((int)this + 0x318);
      return 1;
    case 0x74:
      *param_2 = (int)*(short *)((int)this + 0x360);
      return 1;
    case 0x75:
      *param_2 = (int)*(short *)((int)this + 0x362);
      return 1;
    case 0x77:
      *param_2 = (int)*(short *)((int)this + 0x348);
      return 1;
    case 0x7a:
      *param_2 = (int)*(short *)((int)this + 0x338);
      return 1;
    case 0x7c:
      *param_2 = *(int *)((int)this + 0x364);
      return 1;
    case 0x7d:
      *param_2 = *(int *)((int)this + 0x368);
      return 1;
    case 0x7e:
      *param_2 = *(int *)((int)this + 0x36c);
      return 1;
    case 0x7f:
      *param_2 = (int)*(short *)((int)this + 0x370);
      return 1;
    case 0x80:
      *param_2 = *(int *)((int)this + 0x378);
      return 1;
    }
  }
  else if (iVar2 < 0xbba) {
    if (iVar2 == 0xbb9) {
      *param_2 = (int)*(short *)((int)this + 0x3a0);
      return 1;
    }
    if (iVar2 == 0xc9) {
      *param_2 = (int)*(short *)((int)this + 0x37c);
      return 1;
    }
    if (iVar2 == 0x385) {
      *param_2 = (int)*(short *)((int)this + 0x28c);
      return 1;
    }
  }
  else {
    if (iVar2 == 0xbba) {
      if (*(short *)((int)this + 0x3a0) == 0) {
        *param_2 = 0;
        return 1;
      }
      *param_2 = *(int *)((int)this + 0x3a4);
      *(undefined4 *)((int)this + 0x3a4) = 0;
      return 1;
    }
    if (iVar2 == 0x2329) {
      *param_2 = (int)*(short *)((int)this + 0x4c);
      return 1;
    }
  }
  FUN_100155fe(this,8,1,&DAT_100267b8);
  return 0;
}



/* ================================================================
 * Function: FUN_10013f8f
 * Address:  10013f8f
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 __thiscall FUN_10013f8f(void *param_1,short param_2,double param_3,undefined2 param_4)

{
  float10 fVar1;
  undefined1 local_8;
  
  local_8 = 1;
  if ((param_2 < 2000) || (2999 < param_2)) {
    if ((param_2 < 9000) || (9999 < param_2)) {
      switch(param_2) {
      case 0xc:
        *(double *)((int)param_1 + 0x250) = param_3;
        break;
      case 0xd:
        *(double *)((int)param_1 + 0x260) = param_3;
        break;
      default:
        local_8 = 0;
        FUN_100155fe(param_1,8,1,&DAT_100267bc);
        break;
      case 0x15:
        *(double *)((int)param_1 + 0x270) = param_3;
        break;
      case 0x17:
        *(double *)((int)param_1 + 0x280) = param_3;
        break;
      case 0x1f:
        *(double *)((int)param_1 + 0x2b0) = param_3;
        fVar1 = FUN_100123e8(_DAT_10021300 / *(double *)((int)param_1 + 0x2b0),3,
                             *(short *)((int)param_1 + 0x2c8));
        *(double *)((int)param_1 + 0x2c0) = (double)fVar1;
        break;
      case 0x22:
        *(double *)((int)param_1 + 0x2c0) = param_3;
        fVar1 = FUN_100123e8(param_3,*(short *)((int)param_1 + 0x2c8),3);
        *(double *)((int)param_1 + 0x2b0) = _DAT_10021300 / (double)fVar1;
        break;
      case 0x43:
        *(double *)((int)param_1 + 0x290) = param_3;
        break;
      case 0x45:
        *(double *)((int)param_1 + 0x2a0) = param_3;
        break;
      case 0x68:
        *(double *)((int)param_1 + 0x2f0) = param_3;
        break;
      case 0x6a:
        *(double *)((int)param_1 + 0x300) = param_3;
        break;
      case 0x6c:
        *(double *)((int)param_1 + 0x2d0) = param_3;
        break;
      case 0x6e:
        *(double *)((int)param_1 + 0x2e0) = param_3;
        break;
      case 0x70:
        *(double *)((int)param_1 + 800) = param_3;
        break;
      case 0x72:
        *(double *)((int)param_1 + 0x310) = param_3;
        break;
      case 0x76:
        *(double *)((int)param_1 + 0x340) = param_3;
        break;
      case 0x78:
        *(double *)((int)param_1 + 0x358) = param_3;
        break;
      case 0x79:
        *(double *)((int)param_1 + 0x330) = param_3;
        break;
      case 0x7b:
        *(double *)((int)param_1 + 0x350) = param_3;
        break;
      case 0xca:
        *(double *)((int)param_1 + 0x380) = param_3;
        break;
      case 0xcb:
        *(double *)((int)param_1 + 0x388) = param_3;
        break;
      case 0xcc:
        *(double *)((int)param_1 + 0x390) = param_3;
        break;
      case 0xcd:
        *(double *)((int)param_1 + 0x398) = param_3;
      }
    }
    else {
      local_8 = (**(code **)(**(int **)((int)param_1 + 0x48) + 0xc))
                          (param_2,SUB82(param_3,0),param_3._4_4_,param_4);
    }
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_100143fc
 * Address:  100143fc
 * ================================================================ */

undefined1 __thiscall FUN_100143fc(void *this,short param_1,undefined4 *param_2,undefined2 param_3)

{
  undefined1 local_8;
  
  local_8 = 1;
  if ((param_1 < 2000) || (2999 < param_1)) {
    if ((param_1 < 9000) || (9999 < param_1)) {
      switch(param_1) {
      case 0xc:
        *param_2 = *(undefined4 *)((int)this + 0x250);
        param_2[1] = *(undefined4 *)((int)this + 0x254);
        break;
      case 0xd:
        *param_2 = *(undefined4 *)((int)this + 0x260);
        param_2[1] = *(undefined4 *)((int)this + 0x264);
        break;
      default:
        local_8 = 0;
        FUN_100155fe(this,8,1,&DAT_100267c0);
        break;
      case 0x15:
        *param_2 = *(undefined4 *)((int)this + 0x270);
        param_2[1] = *(undefined4 *)((int)this + 0x274);
        break;
      case 0x17:
        *param_2 = *(undefined4 *)((int)this + 0x280);
        param_2[1] = *(undefined4 *)((int)this + 0x284);
        break;
      case 0x1f:
        *param_2 = *(undefined4 *)((int)this + 0x2b0);
        param_2[1] = *(undefined4 *)((int)this + 0x2b4);
        break;
      case 0x22:
        *param_2 = *(undefined4 *)((int)this + 0x2c0);
        param_2[1] = *(undefined4 *)((int)this + 0x2c4);
        break;
      case 0x43:
        *param_2 = *(undefined4 *)((int)this + 0x290);
        param_2[1] = *(undefined4 *)((int)this + 0x294);
        break;
      case 0x45:
        *param_2 = *(undefined4 *)((int)this + 0x2a0);
        param_2[1] = *(undefined4 *)((int)this + 0x2a4);
        break;
      case 0x68:
        *param_2 = *(undefined4 *)((int)this + 0x2f0);
        param_2[1] = *(undefined4 *)((int)this + 0x2f4);
        break;
      case 0x6a:
        *param_2 = *(undefined4 *)((int)this + 0x300);
        param_2[1] = *(undefined4 *)((int)this + 0x304);
        break;
      case 0x6c:
        *param_2 = *(undefined4 *)((int)this + 0x2d0);
        param_2[1] = *(undefined4 *)((int)this + 0x2d4);
        break;
      case 0x6e:
        *param_2 = *(undefined4 *)((int)this + 0x2e0);
        param_2[1] = *(undefined4 *)((int)this + 0x2e4);
        break;
      case 0x70:
        *param_2 = *(undefined4 *)((int)this + 800);
        param_2[1] = *(undefined4 *)((int)this + 0x324);
        break;
      case 0x72:
        *param_2 = *(undefined4 *)((int)this + 0x310);
        param_2[1] = *(undefined4 *)((int)this + 0x314);
        break;
      case 0x76:
        *param_2 = *(undefined4 *)((int)this + 0x340);
        param_2[1] = *(undefined4 *)((int)this + 0x344);
        break;
      case 0x78:
        *param_2 = *(undefined4 *)((int)this + 0x358);
        param_2[1] = *(undefined4 *)((int)this + 0x35c);
        break;
      case 0x79:
        *param_2 = *(undefined4 *)((int)this + 0x330);
        param_2[1] = *(undefined4 *)((int)this + 0x334);
        break;
      case 0x7b:
        *param_2 = *(undefined4 *)((int)this + 0x350);
        param_2[1] = *(undefined4 *)((int)this + 0x354);
        break;
      case 0xca:
        *param_2 = *(undefined4 *)((int)this + 0x380);
        param_2[1] = *(undefined4 *)((int)this + 900);
        break;
      case 0xcb:
        *param_2 = *(undefined4 *)((int)this + 0x388);
        param_2[1] = *(undefined4 *)((int)this + 0x38c);
        break;
      case 0xcc:
        *param_2 = *(undefined4 *)((int)this + 0x390);
        param_2[1] = *(undefined4 *)((int)this + 0x394);
        break;
      case 0xcd:
        *param_2 = *(undefined4 *)((int)this + 0x398);
        param_2[1] = *(undefined4 *)((int)this + 0x39c);
      }
    }
    else {
      local_8 = (**(code **)(**(int **)((int)this + 0x48) + 0x10))((int)param_1,param_2,param_3);
    }
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_10014827
 * Address:  10014827
 * ================================================================ */

undefined1 __thiscall FUN_10014827(void *this,short param_1,undefined4 *param_2,undefined2 param_3)

{
  undefined1 local_8;
  
  local_8 = 1;
  if ((param_1 < 2000) || (2999 < param_1)) {
    if ((param_1 < 9000) || (9999 < param_1)) {
      if (param_1 == 0x386) {
        FUN_10015e30((undefined4 *)((int)this + 0xc),param_2,0x33);
      }
      else if (param_1 == 0xfa9) {
        FUN_10015e30((undefined4 *)((int)this + 0x4e),param_2,0xff);
      }
      else {
        local_8 = 0;
        FUN_100155fe(this,8,1,&DAT_100267c4);
      }
    }
  }
  else {
    local_8 = (**(code **)(**(int **)((int)this + 0x40) + 0x38))((int)param_1,param_2,param_3);
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_100148f3
 * Address:  100148f3
 * ================================================================ */

undefined1 __thiscall FUN_100148f3(void *this,short param_1,char *param_2,short param_3)

{
  undefined1 local_8;
  
  local_8 = 1;
  if ((param_1 < 2000) || (2999 < param_1)) {
    if ((param_1 < 9000) || (9999 < param_1)) {
      if (param_1 == 0x386) {
        _strncpy(param_2,(char *)((int)this + 0xc),(int)param_3);
      }
      else if (param_1 != 0x7d3) {
        if (param_1 == 0xfa9) {
          _strncpy(param_2,(char *)((int)this + 0x14e),(int)param_3);
        }
        else {
          local_8 = 0;
          FUN_100155fe(this,8,1,&DAT_100267c8);
        }
      }
    }
  }
  else {
    local_8 = (**(code **)(**(int **)((int)this + 0x40) + 0x34))((int)param_1,param_2,param_3);
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_100149d3
 * Address:  100149d3
 * ================================================================ */

undefined1 __thiscall FUN_100149d3(void *this,int param_1,undefined4 *param_2)

{
  short local_2a;
  uint local_14;
  int local_10;
  int local_c;
  undefined1 local_8;
  
  local_8 = 1;
  param_2[0xc] = 2;
  if (param_1 < 0x7a) {
    if (param_1 == 0x79) {
      *param_2 = 1;
      param_2[1] = 4;
      param_2[2] = 0;
      param_2[3] = 0x3ff00000;
      param_2[4] = 0;
      param_2[5] = 0x409f4000;
      param_2[6] = 0;
      param_2[7] = 0x40240000;
      param_2[10] = 0;
      param_2[0xb] = 0x3ff00000;
      param_2[8] = *(undefined4 *)((int)this + 0x330);
      param_2[9] = *(undefined4 *)((int)this + 0x334);
      return 1;
    }
    switch(param_1) {
    case 0xd:
      *param_2 = 1;
      param_2[1] = 4;
      param_2[2] = 0;
      param_2[3] = 0x3ff00000;
      param_2[4] = 0;
      param_2[5] = 0x40590000;
      param_2[6] = 0;
      param_2[7] = 0x3ff00000;
      param_2[10] = 0;
      param_2[0xb] = 0x3fe00000;
      param_2[8] = *(undefined4 *)((int)this + 0x260);
      param_2[9] = *(undefined4 *)((int)this + 0x264);
      return 1;
    case 0xf:
      *param_2 = 1;
      param_2[1] = 1;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0x3ff00000;
      param_2[6] = 0;
      param_2[7] = 0;
      param_2[10] = 0;
      param_2[0xb] = 0x3ff00000;
      *(double *)(param_2 + 8) = (double)(int)*(short *)((int)this + 0x25a);
      return 1;
    case 0x66:
      *param_2 = 1;
      param_2[1] = 2;
      param_2[2] = 0;
      param_2[3] = 0x3ff00000;
      param_2[4] = 0xffc00000;
      param_2[5] = 0x41dfffff;
      param_2[6] = 0;
      param_2[7] = 0x3ff00000;
      param_2[10] = 0;
      param_2[0xb] = 0x3ff00000;
      *(double *)(param_2 + 8) = (double)(int)*(short *)((int)this + 0x2ce);
      return 1;
    case 0x67:
      *param_2 = 3;
      param_2[1] = 9;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0x40000000;
      param_2[6] = 0;
      param_2[7] = 0x3ff00000;
      param_2[10] = 0;
      param_2[0xb] = 0x3ff00000;
      *(double *)(param_2 + 8) = (double)(int)*(short *)((int)this + 0x2cc);
      return 1;
    case 0x74:
      *param_2 = 1;
      param_2[1] = 2;
      param_2[2] = 0;
      param_2[3] = 0x3ff00000;
      param_2[4] = 0xffc00000;
      param_2[5] = 0x41dfffff;
      param_2[6] = 0;
      param_2[7] = 0x3ff00000;
      param_2[10] = 0;
      param_2[0xb] = 0x3ff00000;
      *(double *)(param_2 + 8) = (double)(int)*(short *)((int)this + 0x360);
      return 1;
    case 0x75:
      *param_2 = 1;
      param_2[1] = 2;
      param_2[2] = 0;
      param_2[3] = 0x3ff00000;
      param_2[4] = 0xffc00000;
      param_2[5] = 0x41dfffff;
      param_2[6] = 0;
      param_2[7] = 0x3ff00000;
      param_2[10] = 0;
      param_2[0xb] = 0x3ff00000;
      *(double *)(param_2 + 8) = (double)(int)*(short *)((int)this + 0x362);
      return 1;
    case 0x76:
      *param_2 = 1;
      param_2[1] = 4;
      param_2[2] = 0;
      param_2[3] = 0x3ff00000;
      param_2[4] = 0;
      param_2[5] = 0x409f4000;
      param_2[6] = 0;
      param_2[7] = 0x3ff00000;
      param_2[10] = 0;
      param_2[0xb] = 0x3ff00000;
      param_2[8] = *(undefined4 *)((int)this + 0x340);
      param_2[9] = *(undefined4 *)((int)this + 0x344);
      return 1;
    case 0x77:
switchD_10014a1e_caseD_77:
      *param_2 = 3;
      param_2[1] = 9;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0x3ff00000;
      param_2[10] = 0;
      param_2[0xb] = 0;
      if (param_1 == 0x7a) {
        local_2a = *(short *)((int)this + 0x338);
      }
      else {
        local_2a = *(short *)((int)this + 0x348);
      }
      *(double *)(param_2 + 8) = (double)(int)local_2a;
      return 1;
    case 0x78:
      *param_2 = 1;
      param_2[1] = 4;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0x40c38800;
      param_2[6] = 0;
      param_2[7] = 0;
      param_2[10] = 0;
      param_2[0xb] = 0x3ff00000;
      param_2[8] = *(undefined4 *)((int)this + 0x358);
      param_2[9] = *(undefined4 *)((int)this + 0x35c);
      return 1;
    }
  }
  else if (param_1 < 0xcd) {
    if (param_1 == 0xcc) {
      *param_2 = 1;
      param_2[1] = 4;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
      param_2[10] = 0x9999999a;
      param_2[0xb] = 0x3fb99999;
      param_2[8] = *(undefined4 *)((int)this + 0x390);
      param_2[9] = *(undefined4 *)((int)this + 0x394);
      return 1;
    }
    switch(param_1) {
    case 0x7a:
      goto switchD_10014a1e_caseD_77;
    case 0x7b:
      *param_2 = 1;
      param_2[1] = 4;
      param_2[2] = 0;
      param_2[3] = 0x3ff00000;
      param_2[4] = 0;
      param_2[5] = 0x40c38800;
      param_2[6] = 0;
      param_2[7] = 0x40240000;
      param_2[10] = 0;
      param_2[0xb] = 0x3ff00000;
      param_2[8] = *(undefined4 *)((int)this + 0x350);
      param_2[9] = *(undefined4 *)((int)this + 0x354);
      return 1;
    case 0xca:
      *param_2 = 1;
      param_2[1] = 4;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
      param_2[10] = 0x9999999a;
      param_2[0xb] = 0x3fb99999;
      param_2[8] = *(undefined4 *)((int)this + 0x380);
      param_2[9] = *(undefined4 *)((int)this + 900);
      return 1;
    case 0xcb:
      *param_2 = 1;
      param_2[1] = 4;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
      param_2[10] = 0x9999999a;
      param_2[0xb] = 0x3fb99999;
      param_2[8] = *(undefined4 *)((int)this + 0x388);
      param_2[9] = *(undefined4 *)((int)this + 0x38c);
      return 1;
    }
  }
  else if (param_1 < 0x7d5) {
    if (param_1 == 0x7d4) {
      local_10 = 6;
      local_14 = 1;
      if (*(int *)((int)this + 0x40) != 0) {
        (**(code **)(**(int **)((int)this + 0x40) + 0x28))(0x7d1,&local_10,0);
        (**(code **)(**(int **)((int)this + 0x40) + 0x28))(0x7d4,&local_14,0);
      }
      *param_2 = 1;
      param_2[1] = 1;
      if (local_10 == 5) {
        param_2[2] = 0;
        param_2[3] = 0x3ff00000;
        param_2[4] = 0;
        param_2[5] = 0x403e0000;
        param_2[6] = 0;
        param_2[7] = 0x402e0000;
      }
      else if (local_10 == 6) {
        param_2[2] = 0;
        param_2[3] = 0x3ff00000;
        param_2[4] = 0;
        param_2[5] = 0x40200000;
        param_2[6] = 0;
        param_2[7] = 0x40000000;
      }
      else {
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[4] = 0;
        param_2[5] = 0x3ff00000;
        param_2[6] = 0;
        param_2[7] = 0;
      }
      param_2[10] = 0;
      param_2[0xb] = 0x3ff00000;
      *(double *)(param_2 + 8) = (double)local_14;
      return local_8;
    }
    if (param_1 == 0xcd) {
      *param_2 = 1;
      param_2[1] = 4;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
      param_2[10] = 0x9999999a;
      param_2[0xb] = 0x3fb99999;
      param_2[8] = *(undefined4 *)((int)this + 0x398);
      param_2[9] = *(undefined4 *)((int)this + 0x39c);
      return 1;
    }
    if (param_1 == 0x385) {
      *param_2 = 2;
      param_2[1] = 9;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0x3ff00000;
      param_2[6] = 0;
      param_2[7] = 0;
      param_2[10] = 0;
      param_2[0xb] = 0x3ff00000;
      *(double *)(param_2 + 8) = (double)(int)*(short *)((int)this + 0x28c);
      return 1;
    }
  }
  else if (param_1 == 0x2394) {
    local_c = 0;
    (**(code **)(**(int **)((int)this + 0x48) + 8))(0x2394,&local_c,0);
    *param_2 = 1;
    param_2[1] = 1;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0x3ff00000;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0x3ff00000;
    *(double *)(param_2 + 8) = (double)local_c;
    return local_8;
  }
  return 0;
}



/* ================================================================
 * Function: FUN_100154b7
 * Address:  100154b7
 * ================================================================ */

undefined1 FUN_100154b7(int param_1,int param_2,undefined4 *param_3)

{
  undefined1 local_8;
  
  local_8 = 1;
  if (param_1 < 0x7b) {
    if (param_1 != 0x7a) {
      if (param_1 == 0x67) {
        if (param_2 == 0) {
          *param_3 = 1;
          return 1;
        }
        if (param_2 != 1) {
          if (param_2 != 2) {
            return 0;
          }
          *param_3 = 0;
          return 1;
        }
        *param_3 = 2;
        return 1;
      }
      if (param_1 != 0x77) goto LAB_100155b2;
    }
    if (param_2 == 0) {
      *param_3 = 2;
    }
    else if (param_2 == 1) {
      *param_3 = 1;
    }
    else if (param_2 == 2) {
      *param_3 = 7;
    }
    else {
      local_8 = 0;
    }
  }
  else {
    if (param_1 == 0x385) {
      if (param_2 == 0) {
        *param_3 = 0;
        return 1;
      }
      if (param_2 != 1) {
        return 0;
      }
      *param_3 = 1;
      return 1;
    }
LAB_100155b2:
    local_8 = 0;
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_100155bf
 * Address:  100155bf
 * ================================================================ */

undefined1 FUN_100155bf(uint param_1,int param_2,LPSTR param_3,short param_4)

{
  undefined1 uVar1;
  
  uVar1 = FUN_10011c30(param_1,param_2,param_3,param_4);
  return uVar1;
}



/* ================================================================
 * Function: FUN_100155ea
 * Address:  100155ea
 * ================================================================ */

void __fastcall FUN_100155ea(int param_1)

{
  FUN_100010ca(param_1);
  return;
}



/* ================================================================
 * Function: FUN_100155fe
 * Address:  100155fe
 * ================================================================ */

void __thiscall FUN_100155fe(void *this,short param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 != 0) {
    *(short *)((int)this + 0x3a2) = param_1;
  }
  *(undefined4 *)((int)this + 0x3a4) = param_2;
  if (*(int *)((int)this + 0x3a8) != 0) {
    (**(code **)((int)this + 0x3a8))(0x200,param_1,param_2,param_3);
  }
  return;
}



/* ================================================================
 * Function: FUN_10015660
 * Address:  10015660
 * ================================================================ */

undefined4 * __thiscall FUN_10015660(void *this,uint param_1)

{
  FUN_100123d4(this);
  if ((param_1 & 1) != 0) {
    FUN_1001576a(this);
  }
  return this;
}



/* ================================================================
 * Function: FUN_1001568e
 * Address:  1001568e
 * ================================================================ */

void __cdecl FUN_1001568e(int *param_1)

{
  DWORD DVar1;
  int iVar2;
  _TIME_ZONE_INFORMATION local_d0;
  _SYSTEMTIME local_24;
  _SYSTEMTIME local_14;
  
  GetLocalTime(&local_14);
  GetSystemTime(&local_24);
  if (local_24.wMinute == DAT_100267e0._2_2_) {
    if (local_24.wHour == (WORD)DAT_100267e0) {
      if (local_24.wDay == DAT_100267dc._2_2_) {
        if (local_24.wMonth == DAT_100267d8._2_2_) {
          if (local_24.wYear == (WORD)DAT_100267d8) goto LAB_10015738;
        }
      }
    }
  }
  DVar1 = GetTimeZoneInformation(&local_d0);
  if (DVar1 == 0xffffffff) {
    DAT_100267d0 = -1;
  }
  else if (((DVar1 == 2) && (local_d0.DaylightDate.wMonth != 0)) && (local_d0.DaylightBias != 0)) {
    DAT_100267d0 = 1;
  }
  else {
    DAT_100267d0 = 0;
  }
  DAT_100267d8._0_2_ = local_24.wYear;
  DAT_100267d8._2_2_ = local_24.wMonth;
  DAT_100267dc._0_2_ = local_24.wDayOfWeek;
  DAT_100267dc._2_2_ = local_24.wDay;
  DAT_100267e0._0_2_ = local_24.wHour;
  DAT_100267e0._2_2_ = local_24.wMinute;
  DAT_100267e4._0_2_ = local_24.wSecond;
  DAT_100267e4._2_2_ = local_24.wMilliseconds;
LAB_10015738:
  iVar2 = FUN_100165ed((uint)local_14.wYear,(uint)local_14.wMonth,(uint)local_14.wDay,
                       (uint)local_14.wHour,(uint)local_14.wMinute,(uint)local_14.wSecond,
                       DAT_100267d0);
  if (param_1 != (int *)0x0) {
    *param_1 = iVar2;
  }
  return;
}



/* ================================================================
 * Function: FUN_1001576a
 * Address:  1001576a
 * ================================================================ */

void __cdecl FUN_1001576a(undefined *param_1)

{
  FUN_100166af(param_1);
  return;
}



/* ================================================================
 * Function: operator_new
 * Address:  10015775
 * ================================================================ */

/* Library Function - Single Match
    void * __cdecl operator new(unsigned int)
   
   Library: Visual Studio 2003 Release */

void * __cdecl operator_new(uint param_1)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(param_1,1);
  return pvVar1;
}



/* ================================================================
 * Function: FUN_10015783
 * Address:  10015783
 * ================================================================ */

void FUN_10015783(undefined *UNRECOVERED_JUMPTABLE)

{
  ExceptionList = *(void **)ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x100157ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* ================================================================
 * Function: FUN_100157b7
 * Address:  100157b7
 * ================================================================ */

void FUN_100157b7(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x100157bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* ================================================================
 * Function: FUN_100157be
 * Address:  100157be
 * ================================================================ */

void FUN_100157be(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x100157c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* ================================================================
 * Function: FUN_100157c5
 * Address:  100157c5
 * ================================================================ */

void FUN_100157c5(PVOID param_1,PEXCEPTION_RECORD param_2)

{
  void *pvVar1;
  
  pvVar1 = ExceptionList;
  RtlUnwind(param_1,(PVOID)0x100157ed,param_2,(PVOID)0x0);
  param_2->ExceptionFlags = param_2->ExceptionFlags & 0xfffffffd;
  *(void **)pvVar1 = ExceptionList;
  ExceptionList = pvVar1;
  return;
}



/* ================================================================
 * Function: FUN_10015814
 * Address:  10015814
 * ================================================================ */

undefined4 __cdecl
FUN_10015814(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  int *in_EAX;
  undefined4 uVar1;
  
  uVar1 = FUN_100168d2(param_1,param_2,param_3,param_4,in_EAX,0,(PVOID)0x0,'\0');
  return uVar1;
}



/* ================================================================
 * Function: FUN_1001584a
 * Address:  1001584a
 * ================================================================ */

undefined4 __cdecl
FUN_1001584a(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  void *local_18;
  code *local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_10 = param_2;
  local_14 = FUN_1001589e;
  local_8 = param_4 + 1;
  local_c = param_1;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  uVar1 = __CallSettingFrame_12(param_3,param_1,param_5);
  ExceptionList = local_18;
  return uVar1;
}



/* ================================================================
 * Function: FUN_1001589e
 * Address:  1001589e
 * ================================================================ */

void __cdecl FUN_1001589e(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3)

{
  FUN_100168d2(param_1,*(PVOID *)((int)param_2 + 0xc),param_3,0,*(int **)((int)param_2 + 8),
               *(int *)((int)param_2 + 0x10),param_2,'\0');
  return;
}



/* ================================================================
 * Function: FUN_100158c3
 * Address:  100158c3
 * ================================================================ */

undefined4 __cdecl
FUN_100158c3(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  DWORD *pDVar1;
  undefined4 uVar2;
  undefined4 **ppuVar3;
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  code *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  int local_8;
  
  local_c = &stack0xfffffffc;
  local_10 = &stack0xffffffbc;
  local_28 = FUN_10015979;
  local_24 = param_5;
  local_20 = param_2;
  local_1c = param_6;
  local_18 = param_7;
  local_8 = 0;
  local_14 = 0x1001594b;
  local_2c = ExceptionList;
  ExceptionList = &local_2c;
  local_34 = param_1;
  local_30 = param_3;
  ppuVar3 = &local_34;
  uVar2 = *param_1;
  pDVar1 = FUN_100171c1();
  (*(code *)pDVar1[0x1a])(uVar2,ppuVar3);
  if (local_8 != 0) {
    *local_2c = *(undefined4 *)ExceptionList;
  }
  ExceptionList = local_2c;
  return 0;
}



/* ================================================================
 * Function: FUN_10015979
 * Address:  10015979
 * ================================================================ */

undefined4 __cdecl FUN_10015979(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3)

{
  undefined4 uVar1;
  
  if ((param_1->ExceptionFlags & 0x66) != 0) {
    *(undefined4 *)((int)param_2 + 0x24) = 1;
    return 1;
  }
  FUN_100168d2(param_1,*(PVOID *)((int)param_2 + 0xc),param_3,0,*(int **)((int)param_2 + 8),
               *(int *)((int)param_2 + 0x10),*(PVOID *)((int)param_2 + 0x14),'\x01');
  if (*(int *)((int)param_2 + 0x24) == 0) {
    FUN_100157c5(param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x100159e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((int)param_2 + 0x18))();
  return uVar1;
}



/* ================================================================
 * Function: FUN_100159ee
 * Address:  100159ee
 * ================================================================ */

int __cdecl FUN_100159ee(int param_1,int param_2,int param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(param_1 + 0xc);
  iVar1 = *(int *)(param_1 + 0x10);
  uVar4 = uVar5;
  uVar3 = uVar5;
  while (uVar2 = uVar4, -1 < param_2) {
    if (uVar5 == 0xffffffff) {
      FUN_10017329();
    }
    uVar5 = uVar5 - 1;
    if (((*(int *)(iVar1 + 4 + uVar5 * 0x14) < param_3) &&
        (param_3 <= *(int *)(iVar1 + uVar5 * 0x14 + 8))) || (uVar4 = uVar2, uVar5 == 0xffffffff)) {
      param_2 = param_2 + -1;
      uVar4 = uVar5;
      uVar3 = uVar2;
    }
  }
  uVar5 = uVar5 + 1;
  *param_4 = uVar5;
  *param_5 = uVar3;
  if ((*(uint *)(param_1 + 0xc) < uVar3) || (uVar3 < uVar5)) {
    FUN_10017329();
  }
  return iVar1 + uVar5 * 0x14;
}



/* ================================================================
 * Function: __global_unwind2
 * Address:  10015a6c
 * ================================================================ */

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x10015a84,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



/* ================================================================
 * Function: __local_unwind2
 * Address:  10015aae
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
  puStack_18 = &LAB_10015a8c;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_10015b42();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}



/* ================================================================
 * Function: __abnormal_termination
 * Address:  10015b16
 * ================================================================ */

/* Library Function - Single Match
    __abnormal_termination
   
   Library: Visual Studio */

int __cdecl __abnormal_termination(void)

{
  int iVar1;
  
  iVar1 = 0;
  if ((*(undefined1 **)((int)ExceptionList + 4) == &LAB_10015a8c) &&
     (*(int *)((int)ExceptionList + 8) == *(int *)(*(int *)((int)ExceptionList + 0xc) + 0xc))) {
    iVar1 = 1;
  }
  return iVar1;
}



/* ================================================================
 * Function: __NLG_Notify1
 * Address:  10015b39
 * ================================================================ */

/* Library Function - Single Match
    __NLG_Notify1
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __fastcall __NLG_Notify1(undefined4 param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_10023444 = param_1;
  DAT_10023440 = in_EAX;
  DAT_10023448 = unaff_EBP;
  return;
}



/* ================================================================
 * Function: FUN_10015b42
 * Address:  10015b42
 * ================================================================ */

void FUN_10015b42(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_10023444 = *(undefined4 *)(unaff_EBP + 8);
  DAT_10023440 = in_EAX;
  DAT_10023448 = unaff_EBP;
  return;
}



/* ================================================================
 * Function: FUN_10015b5a
 * Address:  10015b5a
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10015b5a(void)

{
  void *extraout_ECX;
  
  FUN_10015b72();
  _DAT_100267ec = FUN_100173cf();
  FUN_1001737f(extraout_ECX);
  return;
}



/* ================================================================
 * Function: FUN_10015b72
 * Address:  10015b72
 * ================================================================ */

void FUN_10015b72(void)

{
  PTR___fptrap_1002347c = &LAB_10017452;
  PTR___fptrap_10023478 = __cfltcvt;
  PTR___fptrap_10023480 = __fassign;
  PTR___fptrap_10023484 = FUN_100173f8;
  PTR___fptrap_10023488 = &LAB_100174a0;
  PTR___fptrap_1002348c = __cfltcvt;
  return;
}



/* ================================================================
 * Function: _strlen
 * Address:  10015bb0
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
    if (((uint)puVar2 & 3) == 0) goto LAB_10015bd0;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_10015c03:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_10015bd0:
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
  goto LAB_10015c03;
}



/* ================================================================
 * Function: FUN_10015c2b
 * Address:  10015c2b
 * ================================================================ */

int __thiscall FUN_10015c2b(void *this,byte *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  undefined *puVar6;
  
  while( true ) {
    if (DAT_1002369c < 2) {
      uVar1 = (byte)PTR_DAT_10023490[(uint)*param_1 * 2] & 8;
      this = PTR_DAT_10023490;
    }
    else {
      puVar6 = (undefined *)0x8;
      uVar1 = FUN_1001781e(this,(uint)*param_1,8);
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
    if (DAT_1002369c < 2) {
      uVar2 = (byte)PTR_DAT_10023490[uVar4 * 2] & 4;
    }
    else {
      puVar6 = (undefined *)0x4;
      uVar2 = FUN_1001781e(this,uVar4,4);
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
 * Function: FUN_10015cc0
 * Address:  10015cc0
 * ================================================================ */

uint * __cdecl FUN_10015cc0(uint *param_1,uint *param_2)

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
    if (bVar1 == 0) goto LAB_10015da8;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_10015da8:
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
 * Function: FUN_10015cd0
 * Address:  10015cd0
 * ================================================================ */

uint * __cdecl FUN_10015cd0(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_10015cec;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_10015d1f;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x10015d3b;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_10015cec:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x10015d3b;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x10015d3b;
    }
  }
LAB_10015d1f:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x10015d3b:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_10015da8:
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
    if (bVar1 == 0) goto LAB_10015da8;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}



/* ================================================================
 * Function: FUN_10015db0
 * Address:  10015db0
 * ================================================================ */

int __cdecl FUN_10015db0(undefined1 *param_1,byte *param_2)

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
  iVar1 = FUN_100179ec((int *)&local_24,param_2,(undefined4 *)&stack0x0000000c);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_100178d4(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar1;
}



/* ================================================================
 * Function: __ftol
 * Address:  10015e04
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
 * Function: FUN_10015e30
 * Address:  10015e30
 * ================================================================ */

undefined4 * __cdecl FUN_10015e30(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10015fe7_caseD_2;
        case 3:
          goto switchD_10015fe7_caseD_3;
        }
        goto switchD_10015fe7_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10015fe7_caseD_0;
      case 1:
        goto switchD_10015fe7_caseD_1;
      case 2:
        goto switchD_10015fe7_caseD_2;
      case 3:
        goto switchD_10015fe7_caseD_3;
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
              goto switchD_10015fe7_caseD_2;
            case 3:
              goto switchD_10015fe7_caseD_3;
            }
            goto switchD_10015fe7_caseD_1;
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
              goto switchD_10015fe7_caseD_2;
            case 3:
              goto switchD_10015fe7_caseD_3;
            }
            goto switchD_10015fe7_caseD_1;
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
              goto switchD_10015fe7_caseD_2;
            case 3:
              goto switchD_10015fe7_caseD_3;
            }
            goto switchD_10015fe7_caseD_1;
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
switchD_10015fe7_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10015fe7_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10015fe7_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10015fe7_caseD_0:
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
        goto switchD_10015e65_caseD_2;
      case 3:
        goto switchD_10015e65_caseD_3;
      }
      goto switchD_10015e65_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10015e65_caseD_0;
    case 1:
      goto switchD_10015e65_caseD_1;
    case 2:
      goto switchD_10015e65_caseD_2;
    case 3:
      goto switchD_10015e65_caseD_3;
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
            goto switchD_10015e65_caseD_2;
          case 3:
            goto switchD_10015e65_caseD_3;
          }
          goto switchD_10015e65_caseD_1;
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
            goto switchD_10015e65_caseD_2;
          case 3:
            goto switchD_10015e65_caseD_3;
          }
          goto switchD_10015e65_caseD_1;
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
            goto switchD_10015e65_caseD_2;
          case 3:
            goto switchD_10015e65_caseD_3;
          }
          goto switchD_10015e65_caseD_1;
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
switchD_10015e65_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10015e65_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10015e65_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10015e65_caseD_0:
  return param_1;
}



/* ================================================================
 * Function: FUN_10016165
 * Address:  10016165
 * ================================================================ */

uint __cdecl FUN_10016165(byte *param_1,byte *param_2)

{
  byte bVar1;
  DWORD *pDVar2;
  int iVar3;
  byte *pbVar4;
  byte local_24 [32];
  
  pDVar2 = FUN_100171c1();
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
LAB_100161f4:
      pDVar2[6] = (DWORD)pbVar4;
      return -(uint)(param_1 != pbVar4) & (uint)param_1;
    }
    if ((local_24[bVar1 >> 3] & (byte)(1 << (bVar1 & 7))) != 0) {
      *pbVar4 = 0;
      pbVar4 = pbVar4 + 1;
      goto LAB_100161f4;
    }
    pbVar4 = pbVar4 + 1;
  } while( true );
}



/* ================================================================
 * Function: _strncpy
 * Address:  10016220
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
        goto joined_r0x1001625e;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_1001629b;
        goto LAB_10016309;
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
joined_r0x10016305:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_10016309:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_1001629b;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x10016305;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x10016305;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x10016305;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x1001625e:
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
LAB_1001629b:
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
 * Function: _memset
 * Address:  10016320
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
 * Function: FUN_10016378
 * Address:  10016378
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_10016378(int param_1,undefined4 param_2)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  
  uVar2 = FUN_10018a0f();
  if ((param_2._2_2_ & 0x7ff0) == 0x7ff0) {
    iVar3 = FUN_100188d7(param_1,(uint)(CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)
                                                ) >> 0x20));
    if (iVar3 == 1) {
      FUN_10018a0f();
      fVar4 = (float10)(double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
    }
    else if (iVar3 == 2) {
      FUN_10018a0f();
      fVar4 = -(float10)(double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
    }
    else {
      dVar1 = (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
      if (iVar3 == 3) {
        fVar4 = FUN_100181f6(0x15,(double)CONCAT44((int)((ulonglong)dVar1 >> 0x20),param_1));
      }
      else {
        fVar4 = FUN_1001824a(8,0x15,CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)),
                             dVar1 + _DAT_10021300,uVar2);
      }
    }
  }
  else {
    FUN_10018a0f();
    fVar4 = (float10)ABS((double)CONCAT44(param_2,param_1));
  }
  return fVar4;
}



/* ================================================================
 * Function: FUN_10016430
 * Address:  10016430
 * ================================================================ */

void FUN_10016430(uint param_1,int param_2)

{
  __ctrandisp1(param_1,param_2);
  return;
}



/* ================================================================
 * Function: FUN_10016444
 * Address:  10016444
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10016444(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_10026808 = GetVersion();
    iVar1 = FUN_100197e5(1);
    if (iVar1 != 0) {
      _DAT_10026814 = DAT_10026808 >> 8 & 0xff;
      _DAT_10026810 = DAT_10026808 & 0xff;
      DAT_10026808 = DAT_10026808 >> 0x10;
      _DAT_1002680c = _DAT_10026810 * 0x100 + _DAT_10026814;
      iVar1 = FUN_1001713c();
      if (iVar1 != 0) {
        DAT_10027ef4 = GetCommandLineA();
        DAT_100267f4 = FUN_1001953e();
        FUN_10019028();
        FUN_100192f1();
        FUN_10019238();
        FUN_10018f0a();
        DAT_100267f0 = DAT_100267f0 + 1;
        goto LAB_10016517;
      }
      FUN_10019842();
    }
LAB_100164a4:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_100267f0 < 1) goto LAB_100164a4;
      DAT_100267f0 = DAT_100267f0 + -1;
      if (DAT_10026840 == 0) {
        FUN_10018f48();
      }
      FUN_100191e4();
      FUN_10017190();
      FUN_10019842();
    }
    else if (param_2 == 3) {
      FUN_10017228((undefined *)0x0);
    }
LAB_10016517:
    uVar2 = 1;
  }
  return uVar2;
}



/* ================================================================
 * Function: entry
 * Address:  1001651d
 * ================================================================ */

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_100267f0;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_10016565;
    if ((DAT_10027ef8 != (code *)0x0) &&
       (iVar2 = (*DAT_10027ef8)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_10016444(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_10016565:
  iVar2 = FUN_100198ea();
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_10016444(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_10016444(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_10027ef8 != (code *)0x0) {
      iVar2 = (*DAT_10027ef8)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}



/* ================================================================
 * Function: __amsg_exit
 * Address:  100165ba
 * ================================================================ */

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_100267fc == 1) || ((DAT_100267fc == 0 && (DAT_10026800 == 1)))) {
    FUN_100198f0();
  }
  FUN_10019929(param_1);
  (*(code *)PTR___exit_10023460)(0xff);
  return;
}



/* ================================================================
 * Function: FUN_100165ed
 * Address:  100165ed
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl
FUN_100165ed(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_28 [2];
  int local_20;
  int local_18;
  uint local_14;
  int local_c;
  
  uVar3 = param_1 - 0x76c;
  if (((int)uVar3 < 0x46) || (0x8a < (int)uVar3)) {
    iVar2 = -1;
  }
  else {
    iVar4 = *(int *)(&DAT_100239cc + param_2 * 4) + param_3;
    if (((uVar3 & 3) == 0) && (2 < param_2)) {
      iVar4 = iVar4 + 1;
    }
    FUN_10019a7c();
    local_20 = param_4;
    local_18 = param_2 + -1;
    iVar2 = ((param_4 + (uVar3 * 0x16d + iVar4 + (param_1 + -0x76d >> 2)) * 0x18) * 0x3c + param_5)
            * 0x3c + DAT_100238e8 + 0x7c558180 + param_6;
    if ((param_7 == 1) ||
       (((param_7 == -1 && (DAT_100238ec != 0)) &&
        (local_14 = uVar3, local_c = iVar4, bVar1 = FUN_10019d31(local_28),
        CONCAT31(extraout_var,bVar1) != 0)))) {
      iVar2 = iVar2 + _DAT_100238f0;
    }
  }
  return iVar2;
}



/* ================================================================
 * Function: FUN_100166af
 * Address:  100166af
 * ================================================================ */

void __cdecl FUN_100166af(undefined *param_1)

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
  puStack_c = &DAT_100214e0;
  puStack_10 = &LAB_1001b368;
  local_14 = ExceptionList;
  if (param_1 == (undefined *)0x0) {
    return;
  }
  if (DAT_10027dc4 == 3) {
    ExceptionList = &local_14;
    FUN_1001b2e7(9);
    local_8 = 0;
    local_20 = (uint *)FUN_1001a086((int)param_1);
    if (local_20 != (uint *)0x0) {
      FUN_1001a0b1(local_20,(int)param_1);
    }
    local_8 = 0xffffffff;
    FUN_10016719();
    puVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_10027dc4 != 2) goto LAB_1001677b;
    ExceptionList = &local_14;
    FUN_1001b2e7(9);
    local_8 = 1;
    local_28 = (uint *)FUN_1001ade1(param_1,&local_2c,&local_24);
    if (local_28 != (uint *)0x0) {
      FUN_1001ae38(local_2c,local_24,(byte *)local_28);
    }
    local_8 = 0xffffffff;
    FUN_10016771();
    puVar1 = local_28;
  }
  if (puVar1 != (uint *)0x0) {
    ExceptionList = local_14;
    return;
  }
LAB_1001677b:
  HeapFree(DAT_10027dc0,0,param_1);
  ExceptionList = local_14;
  return;
}



/* ================================================================
 * Function: FUN_10016719
 * Address:  10016719
 * ================================================================ */

void FUN_10016719(void)

{
  FUN_1001b348(9);
  return;
}



/* ================================================================
 * Function: FUN_10016771
 * Address:  10016771
 * ================================================================ */

void FUN_10016771(void)

{
  FUN_1001b348(9);
  return;
}



/* ================================================================
 * Function: _malloc
 * Address:  10016798
 * ================================================================ */

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_10026a78);
  return pvVar1;
}



/* ================================================================
 * Function: __nh_malloc
 * Address:  100167aa
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
      pvVar1 = (void *)FUN_100167d6((uint *)_Size);
      if (pvVar1 != (void *)0x0) {
        return pvVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = FUN_1001b440(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}



/* ================================================================
 * Function: FUN_100167d6
 * Address:  100167d6
 * ================================================================ */

void __cdecl FUN_100167d6(uint *param_1)

{
  int *piVar1;
  uint dwBytes;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_100214f8;
  puStack_10 = &LAB_1001b368;
  local_14 = ExceptionList;
  if (DAT_10027dc4 == 3) {
    ExceptionList = &local_14;
    if (param_1 <= DAT_10027dbc) {
      ExceptionList = &local_14;
      FUN_1001b2e7(9);
      local_8 = 0;
      piVar1 = FUN_1001a3da(param_1);
      local_8 = 0xffffffff;
      FUN_1001683d();
      if (piVar1 != (int *)0x0) {
        ExceptionList = local_14;
        return;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    if (DAT_10027dc4 == 2) {
      if (param_1 == (uint *)0x0) {
        dwBytes = 0x10;
      }
      else {
        dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
      }
      ExceptionList = &local_14;
      if (dwBytes <= DAT_10025a2c) {
        ExceptionList = &local_14;
        FUN_1001b2e7(9);
        local_8 = 1;
        piVar1 = FUN_1001ae7d(dwBytes >> 4);
        local_8 = 0xffffffff;
        FUN_1001689c();
        if (piVar1 != (int *)0x0) {
          ExceptionList = local_14;
          return;
        }
      }
      goto LAB_100168b5;
    }
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
LAB_100168b5:
  HeapAlloc(DAT_10027dc0,0,dwBytes);
  ExceptionList = local_14;
  return;
}



/* ================================================================
 * Function: FUN_1001683d
 * Address:  1001683d
 * ================================================================ */

void FUN_1001683d(void)

{
  FUN_1001b348(9);
  return;
}



/* ================================================================
 * Function: FUN_1001689c
 * Address:  1001689c
 * ================================================================ */

void FUN_1001689c(void)

{
  FUN_1001b348(9);
  return;
}



/* ================================================================
 * Function: FUN_100168d2
 * Address:  100168d2
 * ================================================================ */

undefined4 __cdecl
FUN_100168d2(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int *param_5,
            int param_6,PVOID param_7,char param_8)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (*param_5 != 0x19930520) {
    FUN_10017329();
  }
  if ((param_1->ExceptionFlags & 0x66) == 0) {
    if (param_5[3] != 0) {
      if (((param_1->ExceptionCode == 0xe06d7363) && (0x19930520 < param_1->ExceptionInformation[0])
          ) && (pcVar1 = *(code **)(param_1->ExceptionInformation[2] + 8), pcVar1 != (code *)0x0)) {
        uVar2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
        return uVar2;
      }
      FUN_1001696d(param_1,param_2,param_3,param_4,(int)param_5,param_8,param_6,param_7);
    }
  }
  else if ((param_5[1] != 0) && (param_6 == 0)) {
    FUN_10016c27((int)param_2,param_4,(int)param_5,-1);
  }
  return 1;
}



/* ================================================================
 * Function: FUN_1001696d
 * Address:  1001696d
 * ================================================================ */

void __cdecl
FUN_1001696d(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int param_5,
            char param_6,int param_7,PVOID param_8)

{
  byte *pbVar1;
  bool bVar2;
  DWORD *pDVar3;
  undefined3 extraout_var;
  int *piVar4;
  int iVar5;
  int *piVar6;
  uint local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_18 = local_18 & 0xffffff00;
  local_14 = *(int *)((int)param_2 + 8);
  if ((local_14 < -1) || (*(int *)(param_5 + 4) <= local_14)) {
    FUN_10017329();
  }
  if (param_1->ExceptionCode == 0xe06d7363) {
    if (((param_1->NumberParameters == 3) && (param_1->ExceptionInformation[0] == 0x19930520)) &&
       (param_1->ExceptionInformation[2] == 0)) {
      pDVar3 = FUN_100171c1();
      if (pDVar3[0x1b] == 0) {
        return;
      }
      pDVar3 = FUN_100171c1();
      param_1 = (PEXCEPTION_RECORD)pDVar3[0x1b];
      pDVar3 = FUN_100171c1();
      param_3 = pDVar3[0x1c];
      local_18 = CONCAT31(local_18._1_3_,1);
      bVar2 = FUN_1001b4bf(param_1,1);
      if (CONCAT31(extraout_var,bVar2) == 0) {
        FUN_10017329();
      }
      if (param_1->ExceptionCode != 0xe06d7363) goto LAB_10016af5;
      if (((param_1->NumberParameters == 3) && (param_1->ExceptionInformation[0] == 0x19930520)) &&
         (param_1->ExceptionInformation[2] == 0)) {
        FUN_10017329();
      }
    }
    iVar5 = local_14;
    if (((param_1->ExceptionCode == 0xe06d7363) && (param_1->NumberParameters == 3)) &&
       (param_1->ExceptionInformation[0] == 0x19930520)) {
      piVar4 = (int *)FUN_100159ee(param_5,param_7,local_14,&local_8,&local_1c);
      do {
        if (local_1c <= local_8) {
          if (param_6 == '\0') {
            return;
          }
          FUN_1001705f((int)param_1);
          return;
        }
        if ((*piVar4 <= iVar5) && (iVar5 <= piVar4[1])) {
          pbVar1 = (byte *)piVar4[4];
          for (local_10 = piVar4[3]; iVar5 = local_14, 0 < local_10; local_10 = local_10 + -1) {
            piVar6 = *(int **)(param_1->ExceptionInformation[2] + 0xc);
            for (local_c = *piVar6; 0 < local_c; local_c = local_c + -1) {
              piVar6 = piVar6 + 1;
              iVar5 = FUN_10016bca(pbVar1,(byte *)*piVar6,(uint *)param_1->ExceptionInformation[2]);
              if (iVar5 != 0) {
                FUN_10016cdb(param_1,param_2,param_3,param_4,param_5,pbVar1,(byte *)*piVar6,piVar4,
                             param_7,param_8);
                iVar5 = local_14;
                goto LAB_10016ad5;
              }
            }
            pbVar1 = pbVar1 + 0x10;
          }
        }
LAB_10016ad5:
        local_8 = local_8 + 1;
        piVar4 = piVar4 + 5;
      } while( true );
    }
  }
LAB_10016af5:
  if (param_6 == '\0') {
    FUN_10016b20(param_1,param_2,param_3,param_4,param_5,local_14,param_7,param_8);
    return;
  }
  FUN_100172c8();
  return;
}



/* ================================================================
 * Function: FUN_10016b20
 * Address:  10016b20
 * ================================================================ */

void __cdecl
FUN_10016b20(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int param_5,
            int param_6,int param_7,PVOID param_8)

{
  DWORD *pDVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint local_c;
  uint local_8;
  
  pDVar1 = FUN_100171c1();
  if ((pDVar1[0x1a] != 0) &&
     (iVar2 = FUN_100158c3(&param_1->ExceptionCode,param_2,param_3,param_4,param_5,param_7,param_8),
     iVar2 != 0)) {
    return;
  }
  piVar3 = (int *)FUN_100159ee(param_5,param_7,param_6,&local_8,&local_c);
  for (; local_8 < local_c; local_8 = local_8 + 1) {
    if ((*piVar3 <= param_6) && (param_6 <= piVar3[1])) {
      iVar4 = piVar3[3] * 0x10 + piVar3[4];
      iVar2 = *(int *)(iVar4 + -0xc);
      if ((iVar2 == 0) || (*(char *)(iVar2 + 8) == '\0')) {
        FUN_10016cdb(param_1,param_2,param_3,param_4,param_5,(byte *)(iVar4 + -0x10),(byte *)0x0,
                     piVar3,param_7,param_8);
      }
    }
    piVar3 = piVar3 + 5;
  }
  return;
}



/* ================================================================
 * Function: FUN_10016bca
 * Address:  10016bca
 * ================================================================ */

undefined4 __cdecl FUN_10016bca(byte *param_1,byte *param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 8) == '\0')) {
LAB_10016c21:
    uVar2 = 1;
  }
  else {
    if (iVar1 == *(int *)(param_2 + 4)) {
LAB_10016bfb:
      if (((((*param_2 & 2) == 0) || ((*param_1 & 8) != 0)) &&
          (((*param_3 & 1) == 0 || ((*param_1 & 1) != 0)))) &&
         (((*param_3 & 2) == 0 || ((*param_1 & 2) != 0)))) goto LAB_10016c21;
    }
    else {
      iVar1 = _strcmp((char *)(iVar1 + 8),(char *)(*(int *)(param_2 + 4) + 8));
      if (iVar1 == 0) goto LAB_10016bfb;
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* ================================================================
 * Function: FUN_10016c27
 * Address:  10016c27
 * ================================================================ */

void __cdecl FUN_10016c27(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_10021510;
  puStack_10 = &LAB_1001b368;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  for (iVar2 = *(int *)(param_1 + 8); local_8 = 0xffffffff, iVar2 != param_4;
      iVar2 = *(int *)(*(int *)(param_3 + 8) + iVar2 * 8)) {
    if ((iVar2 < 0) || (*(int *)(param_3 + 4) <= iVar2)) {
      FUN_10017329();
    }
    local_8 = 0;
    iVar1 = *(int *)(*(int *)(param_3 + 8) + 4 + iVar2 * 8);
    if (iVar1 != 0) {
      __CallSettingFrame_12(iVar1,param_1,0x103);
    }
  }
  *(int *)(param_1 + 8) = iVar2;
  ExceptionList = local_14;
  return;
}



/* ================================================================
 * Function: FUN_10016cdb
 * Address:  10016cdb
 * ================================================================ */

void __cdecl
FUN_10016cdb(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int param_5,
            byte *param_6,byte *param_7,int *param_8,int param_9,PVOID param_10)

{
  undefined *UNRECOVERED_JUMPTABLE;
  
  if (param_7 != (byte *)0x0) {
    FUN_10016e9b((int)param_1,(int)param_2,param_6,param_7);
  }
  if (param_10 == (PVOID)0x0) {
    param_10 = param_2;
  }
  FUN_100157c5(param_10,param_1);
  FUN_10016c27((int)param_2,param_4,param_5,*param_8);
  *(int *)((int)param_2 + 8) = param_8[1] + 1;
  UNRECOVERED_JUMPTABLE =
       (undefined *)
       FUN_10016d56((DWORD)param_1,param_2,param_3,param_5,*(undefined4 *)(param_6 + 0xc),param_9,
                    0x100);
  if (UNRECOVERED_JUMPTABLE != (undefined *)0x0) {
    FUN_10015783(UNRECOVERED_JUMPTABLE);
  }
  return;
}



/* ================================================================
 * Function: FUN_10016d56
 * Address:  10016d56
 * ================================================================ */

undefined4 __cdecl
FUN_10016d56(DWORD param_1,undefined4 param_2,DWORD param_3,undefined4 param_4,undefined4 param_5,
            int param_6,int param_7)

{
  DWORD *pDVar1;
  undefined4 uVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10021520;
  puStack_10 = &LAB_1001b368;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_100171c1();
  FUN_100171c1();
  pDVar1 = FUN_100171c1();
  pDVar1[0x1b] = param_1;
  pDVar1 = FUN_100171c1();
  pDVar1[0x1c] = param_3;
  local_8 = 1;
  uVar2 = FUN_1001584a(param_2,param_4,param_5,param_6,param_7);
  local_8 = 0xffffffff;
  FUN_10016e23();
  ExceptionList = local_14;
  return uVar2;
}



/* ================================================================
 * Function: FUN_10016e23
 * Address:  10016e23
 * ================================================================ */

void FUN_10016e23(void)

{
  DWORD *pDVar1;
  int unaff_EBP;
  int unaff_ESI;
  int *unaff_EDI;
  
  *(undefined4 *)(unaff_ESI + -4) = *(undefined4 *)(unaff_EBP + -0x28);
  pDVar1 = FUN_100171c1();
  pDVar1[0x1b] = *(DWORD *)(unaff_EBP + -0x1c);
  pDVar1 = FUN_100171c1();
  pDVar1[0x1c] = *(DWORD *)(unaff_EBP + -0x20);
  if ((((*unaff_EDI == -0x1f928c9d) && (unaff_EDI[4] == 3)) && (unaff_EDI[5] == 0x19930520)) &&
     ((*(int *)(unaff_EBP + -0x24) == 0 && (*(int *)(unaff_EBP + -0x2c) != 0)))) {
    __abnormal_termination();
    FUN_1001705f((int)unaff_EDI);
  }
  return;
}



/* ================================================================
 * Function: FUN_10016e9b
 * Address:  10016e9b
 * ================================================================ */

void __cdecl FUN_10016e9b(int param_1,int param_2,byte *param_3,byte *param_4)

{
  int *piVar1;
  bool bVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar3;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined4 *puVar4;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  uint uVar5;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_10021538;
  puStack_10 = &LAB_1001b368;
  local_14 = ExceptionList;
  if (*(int *)(param_3 + 4) == 0) {
    return;
  }
  if (*(char *)(*(int *)(param_3 + 4) + 8) == '\0') {
    return;
  }
  if (*(int *)(param_3 + 8) == 0) {
    return;
  }
  piVar1 = (int *)(*(int *)(param_3 + 8) + 0xc + param_2);
  local_8 = 0;
  if ((*param_3 & 8) == 0) {
    if ((*param_4 & 1) == 0) {
      if (*(int *)(param_4 + 0x18) == 0) {
        ExceptionList = &local_14;
        bVar2 = FUN_1001b4bf(*(void **)(param_1 + 0x18),1);
        if ((CONCAT31(extraout_var_03,bVar2) != 0) &&
           (bVar2 = FUN_1001b4db(piVar1,1), CONCAT31(extraout_var_04,bVar2) != 0)) {
          uVar5 = *(uint *)(param_4 + 0x14);
          puVar4 = (undefined4 *)FUN_100170c6(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
          FUN_1001b5a0(piVar1,puVar4,uVar5);
          ExceptionList = local_14;
          return;
        }
      }
      else {
        ExceptionList = &local_14;
        bVar2 = FUN_1001b4bf(*(void **)(param_1 + 0x18),1);
        if (((CONCAT31(extraout_var_05,bVar2) != 0) &&
            (bVar2 = FUN_1001b4db(piVar1,1), CONCAT31(extraout_var_06,bVar2) != 0)) &&
           (bVar2 = FUN_1001b4f7(*(FARPROC *)(param_4 + 0x18)), CONCAT31(extraout_var_07,bVar2) != 0
           )) {
          if ((*param_4 & 4) != 0) {
            FUN_100170c6(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
            FUN_100157be(piVar1,*(undefined **)(param_4 + 0x18));
            ExceptionList = local_14;
            return;
          }
          FUN_100170c6(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
          FUN_100157b7(piVar1,*(undefined **)(param_4 + 0x18));
          ExceptionList = local_14;
          return;
        }
      }
    }
    else {
      ExceptionList = &local_14;
      bVar2 = FUN_1001b4bf(*(void **)(param_1 + 0x18),1);
      if ((CONCAT31(extraout_var_01,bVar2) != 0) &&
         (bVar2 = FUN_1001b4db(piVar1,1), CONCAT31(extraout_var_02,bVar2) != 0)) {
        FUN_1001b5a0(piVar1,*(undefined4 **)(param_1 + 0x18),*(uint *)(param_4 + 0x14));
        if (*(int *)(param_4 + 0x14) != 4) {
          ExceptionList = local_14;
          return;
        }
        iVar3 = *piVar1;
        if (iVar3 == 0) {
          ExceptionList = local_14;
          return;
        }
        goto LAB_10016f29;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    bVar2 = FUN_1001b4bf(*(void **)(param_1 + 0x18),1);
    if ((CONCAT31(extraout_var,bVar2) != 0) &&
       (bVar2 = FUN_1001b4db(piVar1,1), CONCAT31(extraout_var_00,bVar2) != 0)) {
      iVar3 = *(int *)(param_1 + 0x18);
      *piVar1 = iVar3;
LAB_10016f29:
      iVar3 = FUN_100170c6(iVar3,(int *)(param_4 + 8));
      *piVar1 = iVar3;
      ExceptionList = local_14;
      return;
    }
  }
  FUN_10017329();
  ExceptionList = local_14;
  return;
}



/* ================================================================
 * Function: FUN_1001705f
 * Address:  1001705f
 * ================================================================ */

void __cdecl FUN_1001705f(int param_1)

{
  undefined *UNRECOVERED_JUMPTABLE;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_10021548;
  puStack_10 = &LAB_1001b368;
  local_14 = ExceptionList;
  if ((param_1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(undefined **)(*(int *)(param_1 + 0x1c) + 4),
     UNRECOVERED_JUMPTABLE != (undefined *)0x0)) {
    local_8 = 0;
    ExceptionList = &local_14;
    FUN_100157b7(*(undefined4 *)(param_1 + 0x18),UNRECOVERED_JUMPTABLE);
  }
  ExceptionList = local_14;
  return;
}



/* ================================================================
 * Function: FUN_100170c6
 * Address:  100170c6
 * ================================================================ */

int __cdecl FUN_100170c6(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2[1];
  iVar2 = *param_2 + param_1;
  if (-1 < iVar1) {
    iVar2 = iVar2 + *(int *)(*(int *)(iVar1 + param_1) + param_2[2]) + iVar1;
  }
  return iVar2;
}



/* ================================================================
 * Function: __CallSettingFrame@12
 * Address:  100170f0
 * ================================================================ */

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Library Function - Single Match
    __CallSettingFrame@12
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __CallSettingFrame_12(undefined4 param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  
  pcVar1 = (code *)__NLG_Notify1(param_3);
  (*pcVar1)();
  if (param_3 == 0x100) {
    param_3 = 2;
  }
  __NLG_Notify1(param_3);
  return;
}



/* ================================================================
 * Function: FUN_1001713c
 * Address:  1001713c
 * ================================================================ */

undefined4 FUN_1001713c(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_1001b252();
  DAT_10023470 = TlsAlloc();
  if (DAT_10023470 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_1001b8d5(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_10023470,lpTlsValue);
      if (BVar1 != 0) {
        FUN_100171ae((int)lpTlsValue);
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
 * Function: FUN_10017190
 * Address:  10017190
 * ================================================================ */

void FUN_10017190(void)

{
  FUN_1001b27b();
  if (DAT_10023470 != 0xffffffff) {
    TlsFree(DAT_10023470);
    DAT_10023470 = 0xffffffff;
  }
  return;
}



/* ================================================================
 * Function: FUN_100171ae
 * Address:  100171ae
 * ================================================================ */

void __cdecl FUN_100171ae(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_10025af0;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}



/* ================================================================
 * Function: FUN_100171c1
 * Address:  100171c1
 * ================================================================ */

DWORD * FUN_100171c1(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_10023470);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_1001b8d5(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_10023470,lpTlsValue);
      if (BVar1 != 0) {
        FUN_100171ae((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        goto LAB_1001721c;
      }
    }
    __amsg_exit(0x10);
  }
LAB_1001721c:
  SetLastError(dwErrCode);
  return lpTlsValue;
}



/* ================================================================
 * Function: FUN_10017228
 * Address:  10017228
 * ================================================================ */

void __cdecl FUN_10017228(undefined *param_1)

{
  if (DAT_10023470 != 0xffffffff) {
    if ((param_1 != (undefined *)0x0) ||
       (param_1 = TlsGetValue(DAT_10023470), param_1 != (undefined *)0x0)) {
      if (*(undefined **)(param_1 + 0x24) != (undefined *)0x0) {
        FUN_100166af(*(undefined **)(param_1 + 0x24));
      }
      if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
        FUN_100166af(*(undefined **)(param_1 + 0x28));
      }
      if (*(undefined **)(param_1 + 0x30) != (undefined *)0x0) {
        FUN_100166af(*(undefined **)(param_1 + 0x30));
      }
      if (*(undefined **)(param_1 + 0x38) != (undefined *)0x0) {
        FUN_100166af(*(undefined **)(param_1 + 0x38));
      }
      if (*(undefined **)(param_1 + 0x40) != (undefined *)0x0) {
        FUN_100166af(*(undefined **)(param_1 + 0x40));
      }
      if (*(undefined **)(param_1 + 0x44) != (undefined *)0x0) {
        FUN_100166af(*(undefined **)(param_1 + 0x44));
      }
      if (*(undefined **)(param_1 + 0x50) != &DAT_10025af0) {
        FUN_100166af(*(undefined **)(param_1 + 0x50));
      }
      FUN_100166af(param_1);
    }
    TlsSetValue(DAT_10023470,(LPVOID)0x0);
    return;
  }
  return;
}



/* ================================================================
 * Function: FUN_100172c8
 * Address:  100172c8
 * ================================================================ */

void FUN_100172c8(void)

{
  DWORD *pDVar1;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_10021558;
  puStack_10 = &LAB_1001b368;
  pvStack_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_14;
  pDVar1 = FUN_100171c1();
  if (pDVar1[0x18] != 0) {
    local_8 = 1;
    pDVar1 = FUN_100171c1();
    (*(code *)pDVar1[0x18])();
  }
  local_8 = 0xffffffff;
  FUN_1001ba12();
  return;
}



/* ================================================================
 * Function: FUN_10017329
 * Address:  10017329
 * ================================================================ */

void FUN_10017329(void)

{
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_10021570;
  puStack_10 = &LAB_1001b368;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (PTR_FUN_10023474 != (undefined *)0x0) {
    local_8 = 1;
    ExceptionList = &pvStack_14;
    (*(code *)PTR_FUN_10023474)();
  }
  local_8 = 0xffffffff;
  FUN_100172c8();
  return;
}



/* ================================================================
 * Function: FUN_1001737f
 * Address:  1001737f
 * ================================================================ */

void __fastcall FUN_1001737f(void *param_1)

{
  FUN_1001ba5e(param_1,0x10000,0x30000);
  return;
}



/* ================================================================
 * Function: FUN_10017391
 * Address:  10017391
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10017391(void)

{
  if (_DAT_10021300 < _DAT_10021588 - (_DAT_10021588 / _DAT_10021590) * _DAT_10021590) {
    return 1;
  }
  return 0;
}



/* ================================================================
 * Function: FUN_100173cf
 * Address:  100173cf
 * ================================================================ */

void FUN_100173cf(void)

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
  FUN_10017391();
  return;
}



/* ================================================================
 * Function: FUN_100173f8
 * Address:  100173f8
 * ================================================================ */

void __cdecl FUN_100173f8(char *param_1)

{
  char cVar1;
  char cVar2;
  undefined *this;
  uint uVar3;
  undefined *puVar4;
  
  this = (undefined *)(int)*param_1;
  uVar3 = FUN_1001bb8f((uint)this);
  if (uVar3 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_1002369c < 2) {
        uVar3 = (byte)PTR_DAT_10023490[*param_1 * 2] & 4;
        this = PTR_DAT_10023490;
      }
      else {
        puVar4 = (undefined *)0x4;
        uVar3 = FUN_1001781e(this,(int)*param_1,4);
        this = puVar4;
      }
    } while (uVar3 != 0);
  }
  cVar2 = *param_1;
  *param_1 = DAT_100236a0;
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
 * Address:  100174b8
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
    FUN_1001c05b(in_ECX,(uint *)&local_c,(byte *)number);
    *(void **)argument = local_c;
    *(void **)(argument + 4) = local_8;
    return;
  }
  FUN_1001c088(in_ECX,(uint *)&number,(byte *)number);
  *(char **)argument = number;
  return;
}



/* ================================================================
 * Function: FUN_100174f6
 * Address:  100174f6
 * ================================================================ */

undefined1 * __cdecl FUN_100174f6(undefined8 *param_1,undefined1 *param_2,int param_3,int param_4)

{
  uint local_2c [6];
  int local_14 [4];
  
  FUN_1001c12c((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),local_14,local_2c);
  FUN_1001c0b5(param_2 + (uint)(0 < param_3) + (uint)(local_14[0] == 0x2d),param_3 + 1,(int)local_14
              );
  FUN_10017557(param_2,param_3,param_4,local_14,'\0');
  return param_2;
}



/* ================================================================
 * Function: FUN_10017557
 * Address:  10017557
 * ================================================================ */

undefined1 * __cdecl
FUN_10017557(undefined1 *param_1,int param_2,int param_3,int *param_4,char param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint *puVar3;
  int iVar4;
  
  if (param_5 != '\0') {
    FUN_100177f9(param_1 + (*param_4 == 0x2d),(uint)(0 < param_2));
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
    *puVar2 = DAT_100236a0;
  }
  puVar3 = FUN_10015cc0((uint *)(puVar2 + param_2 + (uint)(param_5 == '\0')),(uint *)"e+000");
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
 * Function: FUN_10017619
 * Address:  10017619
 * ================================================================ */

char * __cdecl FUN_10017619(undefined8 *param_1,char *param_2,size_t param_3)

{
  uint local_2c [6];
  int local_14;
  int local_10;
  
  FUN_1001c12c((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),&local_14,local_2c);
  FUN_1001c0b5(param_2 + (local_14 == 0x2d),local_10 + param_3,(int)&local_14);
  FUN_1001766e(param_2,param_3,&local_14,'\0');
  return param_2;
}



/* ================================================================
 * Function: FUN_1001766e
 * Address:  1001766e
 * ================================================================ */

char * __cdecl FUN_1001766e(char *param_1,size_t param_2,int *param_3,char param_4)

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
    FUN_100177f9(pcVar3,1);
    *pcVar3 = '0';
    pcVar3 = pcVar3 + 1;
  }
  else {
    pcVar3 = pcVar3 + param_3[1];
  }
  if (0 < (int)param_2) {
    FUN_100177f9(pcVar3,1);
    *pcVar3 = DAT_100236a0;
    iVar1 = param_3[1];
    if (iVar1 < 0) {
      if ((param_4 != '\0') || (-iVar1 <= (int)param_2)) {
        param_2 = -iVar1;
      }
      FUN_100177f9(pcVar3 + 1,param_2);
      _memset(pcVar3 + 1,0x30,param_2);
    }
  }
  return param_1;
}



/* ================================================================
 * Function: FUN_10017715
 * Address:  10017715
 * ================================================================ */

void __cdecl FUN_10017715(undefined8 *param_1,char *param_2,size_t param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  uint local_2c [6];
  int local_14;
  int local_10;
  
  FUN_1001c12c((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),&local_14,local_2c);
  iVar1 = local_10 + -1;
  FUN_1001c0b5(param_2 + (local_14 == 0x2d),param_3,(int)&local_14);
  local_10 = local_10 + -1;
  if ((local_10 < -4) || ((int)param_3 <= local_10)) {
    FUN_10017557(param_2,param_3,param_4,&local_14,'\x01');
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
    FUN_1001766e(param_2,param_3,&local_14,'\x01');
  }
  return;
}



/* ================================================================
 * Function: __cfltcvt
 * Address:  100177a8
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
    puVar2 = FUN_100174f6(arg,buffer,format,precision);
  }
  else {
    if (sizeInBytes == 0x66) {
      pcVar1 = FUN_10017619(arg,buffer,format);
      return (errno_t)pcVar1;
    }
    puVar2 = (undefined1 *)FUN_10017715(arg,buffer,format,precision);
  }
  return (errno_t)puVar2;
}



/* ================================================================
 * Function: FUN_100177f9
 * Address:  100177f9
 * ================================================================ */

void __cdecl FUN_100177f9(char *param_1,int param_2)

{
  size_t sVar1;
  
  if (param_2 != 0) {
    sVar1 = _strlen(param_1);
    FUN_1001b5a0((undefined4 *)(param_1 + param_2),(undefined4 *)param_1,sVar1 + 1);
  }
  return;
}



/* ================================================================
 * Function: FUN_1001781e
 * Address:  1001781e
 * ================================================================ */

uint __thiscall FUN_1001781e(void *this,int param_1,uint param_2)

{
  BOOL BVar1;
  int iVar2;
  undefined4 local_8;
  
  if (param_1 + 1U < 0x101) {
    param_1._2_2_ = *(ushort *)(PTR_DAT_10023490 + param_1 * 2);
  }
  else {
    if ((PTR_DAT_10023490[(param_1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      local_8 = CONCAT31((int3)((uint)this >> 8),(char)param_1) & 0xffff00ff;
      iVar2 = 1;
    }
    else {
      local_8._0_2_ = CONCAT11((char)param_1,(char)((uint)param_1 >> 8));
      local_8 = CONCAT22((short)((uint)this >> 0x10),(undefined2)local_8) & 0xff00ffff;
      iVar2 = 2;
    }
    BVar1 = FUN_1001c247(1,(LPCSTR)&local_8,iVar2,(LPWORD)((int)&param_1 + 2),0,0,1);
    if (BVar1 == 0) {
      return 0;
    }
  }
  return param_1._2_2_ & param_2;
}



/* ================================================================
 * Function: FUN_100178d4
 * Address:  100178d4
 * ================================================================ */

uint __cdecl FUN_100178d4(uint param_1,int *param_2)

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
LAB_100179e0:
    param_2[3] = uVar1 | 0x20;
  }
  else {
    if ((uVar1 & 1) != 0) {
      param_2[1] = 0;
      if ((uVar1 & 0x10) == 0) goto LAB_100179e0;
      *param_2 = param_2[2];
      param_2[3] = uVar1 & 0xfffffffe;
    }
    uVar1 = param_2[3];
    param_2[1] = 0;
    param_2 = (int *)0x0;
    piVar4[3] = uVar1 & 0xffffffef | 2;
    if (((uVar1 & 0x10c) == 0) &&
       (((piVar4 != (int *)&DAT_10025bc8 && (piVar4 != (int *)&DAT_10025be8)) ||
        (bVar5 = FUN_1001c69c(uVar2), CONCAT31(extraout_var,bVar5) == 0)))) {
      FUN_1001c658(piVar4);
    }
    if ((*(ushort *)(piVar4 + 3) & 0x108) == 0) {
      piVar7 = (int *)0x1;
      param_2 = (int *)FUN_1001c468(uVar2,(char *)&param_1,1);
    }
    else {
      pcVar3 = (char *)piVar4[2];
      piVar7 = (int *)(*piVar4 - (int)pcVar3);
      *piVar4 = (int)(pcVar3 + 1);
      piVar4[1] = piVar4[6] + -1;
      if ((int)piVar7 < 1) {
        if (uVar2 == 0xffffffff) {
          puVar6 = &DAT_10023830;
        }
        else {
          puVar6 = (undefined *)((&DAT_10027de0)[(int)uVar2 >> 5] + (uVar2 & 0x1f) * 0x24);
        }
        if ((puVar6[4] & 0x20) != 0) {
          FUN_1001c390(uVar2,0,2);
        }
      }
      else {
        param_2 = (int *)FUN_1001c468(uVar2,pcVar3,(uint)piVar7);
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
 * Function: FUN_100179ec
 * Address:  100179ec
 * ================================================================ */

int __cdecl FUN_100179ec(int *param_1,byte *param_2,undefined4 *param_3)

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
      uVar2 = (byte)"GAIsProcessorFeaturePresent"[(char)bVar9 + 0x12] & 0xf;
    }
    local_34 = (int)(char)(&DAT_100215c8)[uVar2 * 8 + local_34] >> 4;
    switch(local_34) {
    case 0:
switchD_10017a5a_caseD_0:
      local_28 = 0;
      if ((PTR_DAT_10023490[(uint)bVar9 * 2 + 1] & 0x80) != 0) {
        FUN_1001812d((int)(char)bVar9,param_1,&local_18);
        bVar9 = *param_2;
        param_2 = pbVar1 + 2;
      }
      FUN_1001812d((int)(char)bVar9,param_1,&local_18);
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
        local_24 = FUN_100181cb((int *)&param_3);
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
        local_14 = FUN_100181cb((int *)&param_3);
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
          goto switchD_10017a5a_caseD_0;
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
LAB_10017e6b:
              local_30 = 7;
LAB_10017e72:
              local_10 = (undefined1 *)0x10;
              if ((local_8 & 0x80) != 0) {
                local_1a = '0';
                local_19 = (char)local_30 + 'Q';
                local_20 = 2;
              }
              goto LAB_10017edc;
            }
            if (bVar9 != 0x43) {
              if ((bVar9 != 0x45) && (bVar9 != 0x47)) {
                if (bVar9 == 0x53) {
                  if ((local_8 & 0x830) == 0) {
                    local_8 = local_8 | 0x800;
                  }
                  goto LAB_10017c19;
                }
                goto LAB_10017ff6;
              }
              local_38 = 1;
              bVar9 = bVar9 + 0x20;
              goto LAB_10017c7a;
            }
            if ((local_8 & 0x830) == 0) {
              local_8 = local_8 | 0x800;
            }
LAB_10017ca7:
            if ((local_8 & 0x810) == 0) {
              uVar5 = FUN_100181cb((int *)&param_3);
              local_24c[0] = (char)uVar5;
              local_10 = (undefined1 *)0x1;
            }
            else {
              uVar5 = FUN_100181e8((int *)&param_3);
              local_10 = (undefined1 *)FUN_1001c825(local_24c,(WCHAR)uVar5);
              if ((int)local_10 < 0) {
                local_2c = 1;
              }
            }
            pWVar4 = (WCHAR *)local_24c;
          }
          else if (bVar9 == 0x5a) {
            psVar6 = (short *)FUN_100181cb((int *)&param_3);
            if ((psVar6 == (short *)0x0) ||
               (pWVar4 = *(WCHAR **)(psVar6 + 2), pWVar4 == (WCHAR *)0x0)) {
              local_c = (WCHAR *)PTR_DAT_100236b0;
              pWVar4 = (WCHAR *)PTR_DAT_100236b0;
              goto LAB_10017dec;
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
            if (bVar9 == 99) goto LAB_10017ca7;
            if (bVar9 == 100) goto LAB_10017ed1;
          }
        }
        else {
LAB_10017c7a:
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
          (*(code *)PTR___fptrap_10023478)(&local_4c,local_24c,(int)(char)bVar9,local_14,local_38);
          uVar2 = local_8 & 0x80;
          if ((uVar2 != 0) && (local_14 == 0)) {
            (*(code *)PTR___fptrap_10023484)(local_24c);
          }
          if ((bVar9 == 0x67) && (uVar2 == 0)) {
            (*(code *)PTR___fptrap_1002347c)(local_24c);
          }
          if (local_24c[0] == '-') {
            local_8 = local_8 | 0x100;
            pWVar4 = (WCHAR *)(local_24c + 1);
            local_c = pWVar4;
          }
LAB_10017dec:
          local_10 = (undefined1 *)_strlen((char *)pWVar4);
          pWVar4 = local_c;
        }
      }
      else {
        if (bVar9 == 0x69) {
LAB_10017ed1:
          local_8 = local_8 | 0x40;
        }
        else {
          if (bVar9 == 0x6e) {
            piVar7 = (int *)FUN_100181cb((int *)&param_3);
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
            goto LAB_10017edc;
          }
          if (bVar9 == 0x70) {
            local_14 = 8;
            goto LAB_10017e6b;
          }
          if (bVar9 == 0x73) {
LAB_10017c19:
            iVar10 = local_14;
            if (local_14 == -1) {
              iVar10 = 0x7fffffff;
            }
            pWVar3 = (WCHAR *)FUN_100181cb((int *)&param_3);
            if ((local_8 & 0x810) == 0) {
              pWVar4 = pWVar3;
              if (pWVar3 == (WCHAR *)0x0) {
                pWVar3 = (WCHAR *)PTR_DAT_100236b0;
                pWVar4 = (WCHAR *)PTR_DAT_100236b0;
              }
              for (; (iVar10 != 0 && ((char)*pWVar3 != '\0')); pWVar3 = (WCHAR *)((int)pWVar3 + 1))
              {
                iVar10 = iVar10 + -1;
              }
              local_10 = (undefined1 *)((int)pWVar3 - (int)pWVar4);
            }
            else {
              if (pWVar3 == (WCHAR *)0x0) {
                pWVar3 = (WCHAR *)PTR_DAT_100236b4;
              }
              local_28 = 1;
              for (pWVar4 = pWVar3; (iVar10 != 0 && (*pWVar4 != L'\0')); pWVar4 = pWVar4 + 1) {
                iVar10 = iVar10 + -1;
              }
              local_10 = (undefined1 *)((int)pWVar4 - (int)pWVar3 >> 1);
              pWVar4 = pWVar3;
            }
            goto LAB_10017ff6;
          }
          if (bVar9 != 0x75) {
            if (bVar9 != 0x78) goto LAB_10017ff6;
            local_30 = 0x27;
            goto LAB_10017e72;
          }
        }
        local_10 = (undefined1 *)0xa;
LAB_10017edc:
        if ((local_8 & 0x8000) == 0) {
          if ((local_8 & 0x20) == 0) {
            if ((local_8 & 0x40) == 0) {
              uVar2 = FUN_100181cb((int *)&param_3);
              uVar13 = (ulonglong)uVar2;
              goto LAB_10017f2f;
            }
            uVar2 = FUN_100181cb((int *)&param_3);
          }
          else if ((local_8 & 0x40) == 0) {
            uVar2 = FUN_100181cb((int *)&param_3);
            uVar2 = uVar2 & 0xffff;
          }
          else {
            uVar5 = FUN_100181cb((int *)&param_3);
            uVar2 = (uint)(short)uVar5;
          }
          uVar13 = (ulonglong)(int)uVar2;
        }
        else {
          uVar13 = FUN_100181d8((int *)&param_3);
        }
LAB_10017f2f:
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
LAB_10017ff6:
      local_c = pWVar4;
      uVar2 = local_8;
      if (local_2c == 0) {
        if ((local_8 & 0x40) != 0) {
          if ((local_8 & 0x100) == 0) {
            if ((local_8 & 1) == 0) {
              if ((local_8 & 2) == 0) goto LAB_1001802e;
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
LAB_1001802e:
        iVar10 = (local_24 - local_20) - (int)local_10;
        if ((local_8 & 0xc) == 0) {
          FUN_10018162(0x20,iVar10,param_1,&local_18);
        }
        FUN_10018193(&local_1a,local_20,param_1,&local_18);
        if (((uVar2 & 8) != 0) && ((uVar2 & 4) == 0)) {
          FUN_10018162(0x30,iVar10,param_1,&local_18);
        }
        if ((local_28 == 0) || (puVar12 = local_10, pWVar4 = local_c, (int)local_10 < 1)) {
          FUN_10018193((char *)local_c,(int)local_10,param_1,&local_18);
        }
        else {
          do {
            puVar12 = puVar12 + -1;
            iVar8 = FUN_1001c825(local_3c,*pWVar4);
            if (iVar8 < 1) break;
            FUN_10018193(local_3c,iVar8,param_1,&local_18);
            pWVar4 = pWVar4 + 1;
          } while (puVar12 != (undefined1 *)0x0);
        }
        if ((local_8 & 4) != 0) {
          FUN_10018162(0x20,iVar10,param_1,&local_18);
        }
      }
    }
    bVar9 = *param_2;
    pbVar1 = param_2;
  } while( true );
}



/* ================================================================
 * Function: FUN_1001812d
 * Address:  1001812d
 * ================================================================ */

void __cdecl FUN_1001812d(uint param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_2 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    uVar2 = FUN_100178d4(param_1,param_2);
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
 * Function: FUN_10018162
 * Address:  10018162
 * ================================================================ */

void __cdecl FUN_10018162(uint param_1,int param_2,int *param_3,int *param_4)

{
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    FUN_1001812d(param_1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}



/* ================================================================
 * Function: FUN_10018193
 * Address:  10018193
 * ================================================================ */

void __cdecl FUN_10018193(char *param_1,int param_2,int *param_3,int *param_4)

{
  char cVar1;
  
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    FUN_1001812d((int)cVar1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}



/* ================================================================
 * Function: FUN_100181cb
 * Address:  100181cb
 * ================================================================ */

undefined4 __cdecl FUN_100181cb(int *param_1)

{
  *param_1 = *param_1 + 4;
  return *(undefined4 *)(*param_1 + -4);
}



/* ================================================================
 * Function: FUN_100181d8
 * Address:  100181d8
 * ================================================================ */

undefined8 __cdecl FUN_100181d8(int *param_1)

{
  *param_1 = *param_1 + 8;
  return *(undefined8 *)(*param_1 + -8);
}



/* ================================================================
 * Function: FUN_100181e8
 * Address:  100181e8
 * ================================================================ */

undefined4 __cdecl FUN_100181e8(int *param_1)

{
  *param_1 = *param_1 + 4;
  return CONCAT22((short)((uint)*param_1 >> 0x10),*(undefined2 *)(*param_1 + -4));
}



/* ================================================================
 * Function: FUN_100181f6
 * Address:  100181f6
 * ================================================================ */

float10 __cdecl FUN_100181f6(int param_1,double param_2)

{
  DWORD *pDVar1;
  float10 fVar2;
  
  if (DAT_10025f98 == 0) {
    fVar2 = FUN_100187ac(1,param_1);
    return fVar2;
  }
  pDVar1 = FUN_1001ca48();
  *pDVar1 = 0x21;
  FUN_10018a0f();
  return (float10)param_2;
}



/* ================================================================
 * Function: FUN_1001824a
 * Address:  1001824a
 * ================================================================ */

float10 __cdecl
FUN_1001824a(uint param_1,uint param_2,undefined8 param_3,double param_4,uint param_5)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  float10 fVar3;
  uint local_5c [14];
  uint local_24;
  
  bVar1 = FUN_10018595(param_1,&param_4,param_5);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    local_24 = local_24 & 0xfffffffe;
    FUN_100182e2(local_5c,&param_5,param_1,param_2,&param_3,&param_4);
  }
  iVar2 = FUN_10018881((byte)param_1);
  if ((DAT_10025f98 == 0) && (iVar2 != 0)) {
    fVar3 = FUN_100187ac(iVar2,param_2);
    return fVar3;
  }
  FUN_10018834(iVar2);
  FUN_10018a0f();
  return (float10)param_4;
}



/* ================================================================
 * Function: FUN_100182e2
 * Address:  100182e2
 * ================================================================ */

void __cdecl
FUN_100182e2(uint *param_1,uint *param_2,uint param_3,uint param_4,undefined8 *param_5,
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
  uVar3 = FUN_100189f2();
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
        goto LAB_10018457;
      }
      uVar3 = *param_1 & 0xfffffffe | 2;
    }
    *param_1 = uVar3;
  }
LAB_10018457:
  uVar3 = *puVar1 & 0x300;
  if (uVar3 == 0) {
    uVar3 = *param_1 & 0xffffffeb | 8;
LAB_1001848d:
    *param_1 = uVar3;
  }
  else {
    if (uVar3 == 0x200) {
      uVar3 = *param_1 & 0xffffffe7 | 4;
      goto LAB_1001848d;
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
  FUN_10018a00();
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
        goto LAB_10018562;
      }
      uVar3 = *puVar1 & 0xfffffbff | 0x800;
    }
    *puVar1 = uVar3;
  }
LAB_10018562:
  uVar3 = *param_1 >> 2 & 7;
  if (uVar3 == 0) {
    uVar3 = *puVar1 & 0xfffff3ff | 0x300;
  }
  else {
    if (uVar3 != 1) {
      if (uVar3 == 2) {
        *puVar1 = *puVar1 & 0xfffff3ff;
      }
      goto LAB_1001858b;
    }
    uVar3 = *puVar1 & 0xfffff3ff | 0x200;
  }
  *puVar1 = uVar3;
LAB_1001858b:
  *puVar2 = *(undefined8 *)(param_1 + 0x10);
  return;
}



/* ================================================================
 * Function: FUN_10018595
 * Address:  10018595
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl FUN_10018595(uint param_1,double *param_2,uint param_3)

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
    FUN_10018a32();
    uVar3 = param_1 & 0x17;
    goto LAB_1001878a;
  }
  if (((param_1 & 4) != 0) && ((param_3 & 4) != 0)) {
    FUN_10018a32();
    uVar3 = param_1 & 0x1b;
    goto LAB_1001878a;
  }
  if (((param_1 & 1) == 0) || ((param_3 & 8) == 0)) {
    if (((param_1 & 2) != 0) && ((param_3 & 0x10) != 0)) {
      bVar4 = (param_1 & 0x10) != 0;
      dVar1 = *param_2;
      if (dVar1 != _DAT_100211b0) {
        fVar5 = FUN_10018931(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20),&local_8);
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
          if ((double)fVar5 < _DAT_100211b0) {
            local_10 = -local_10;
          }
        }
        *param_2 = local_10;
        bVar2 = bVar4;
      }
      if (bVar2) {
        FUN_10018a32();
      }
      uVar3 = param_1 & 0x1d;
    }
    goto LAB_1001878a;
  }
  FUN_10018a32();
  uVar3 = param_3 & 0xc00;
  dVar1 = _DAT_10023790;
  if (uVar3 == 0) {
    if (*param_2 <= _DAT_100211b0) {
      dVar1 = -_DAT_10023790;
    }
LAB_100186aa:
    *param_2 = dVar1;
  }
  else {
    if (uVar3 == 0x400) {
      dVar1 = _DAT_100237a0;
      if (*param_2 <= _DAT_100211b0) {
        dVar1 = -_DAT_10023790;
      }
      goto LAB_100186aa;
    }
    if (uVar3 == 0x800) {
      if (*param_2 <= _DAT_100211b0) {
        dVar1 = -_DAT_100237a0;
      }
      goto LAB_100186aa;
    }
    if (uVar3 == 0xc00) {
      dVar1 = _DAT_100237a0;
      if (*param_2 <= _DAT_100211b0) {
        dVar1 = -_DAT_100237a0;
      }
      goto LAB_100186aa;
    }
  }
  uVar3 = param_1 & 0x1e;
LAB_1001878a:
  if (((param_1 & 0x10) != 0) && ((param_3 & 0x20) != 0)) {
    FUN_10018a32();
    uVar3 = uVar3 & 0xffffffef;
  }
  return uVar3 == 0;
}



/* ================================================================
 * Function: FUN_100187ac
 * Address:  100187ac
 * ================================================================ */

float10 __cdecl FUN_100187ac(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  
  iVar1 = FUN_1001885c(param_2);
  if (iVar1 != 0) {
    FUN_10018a0f();
    iVar1 = FUN_1001ca5a();
    if (iVar1 == 0) {
      FUN_10018834(param_1);
    }
    return (float10)(double)CONCAT44(in_stack_00000020,in_stack_0000001c);
  }
  FUN_10018a0f();
  FUN_10018834(param_1);
  return (float10)(double)CONCAT44(in_stack_00000020,in_stack_0000001c);
}



/* ================================================================
 * Function: FUN_10018834
 * Address:  10018834
 * ================================================================ */

void __cdecl FUN_10018834(int param_1)

{
  DWORD *pDVar1;
  
  if (param_1 == 1) {
    pDVar1 = FUN_1001ca48();
    *pDVar1 = 0x21;
  }
  else if ((1 < param_1) && (param_1 < 4)) {
    pDVar1 = FUN_1001ca48();
    *pDVar1 = 0x22;
    return;
  }
  return;
}



/* ================================================================
 * Function: FUN_1001885c
 * Address:  1001885c
 * ================================================================ */

undefined4 __cdecl FUN_1001885c(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_100236b8;
  do {
    if (*piVar1 == param_1) {
      return *(undefined4 *)(iVar2 * 8 + 0x100236bc);
    }
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x10023790);
  return 0;
}



/* ================================================================
 * Function: FUN_10018881
 * Address:  10018881
 * ================================================================ */

int __cdecl FUN_10018881(byte param_1)

{
  undefined4 uStack_4;
  
  if ((param_1 & 0x20) == 0) {
    if ((param_1 & 8) == 0) {
      if ((param_1 & 4) == 0) {
        if ((param_1 & 1) == 0) {
          return (param_1 & 2) << 1;
        }
        uStack_4 = 3;
      }
      else {
        uStack_4 = 2;
      }
    }
    else {
      uStack_4 = 1;
    }
  }
  else {
    uStack_4 = 5;
  }
  return uStack_4;
}



/* ================================================================
 * Function: FUN_100188ae
 * Address:  100188ae
 * ================================================================ */

float10 __cdecl FUN_100188ae(undefined8 param_1,short param_2)

{
  undefined8 local_c;
  
  local_c = (double)CONCAT26((param_2 + 0x3fe) * 0x10 | param_1._6_2_ & 0x800f,(int6)param_1);
  return (float10)local_c;
}



/* ================================================================
 * Function: FUN_100188d7
 * Address:  100188d7
 * ================================================================ */

undefined4 __cdecl FUN_100188d7(int param_1,uint param_2)

{
  undefined4 uStack_8;
  
  if (param_2 == 0x7ff00000) {
    if (param_1 == 0) {
      return 1;
    }
  }
  else if ((param_2 == 0xfff00000) && (param_1 == 0)) {
    return 2;
  }
  if ((param_2._2_2_ & 0x7ff8) == 0x7ff8) {
    uStack_8 = 3;
  }
  else {
    if (((param_2._2_2_ & 0x7ff8) != 0x7ff0) || (((param_2 & 0x7ffff) == 0 && (param_1 == 0)))) {
      return 0;
    }
    uStack_8 = 4;
  }
  return uStack_8;
}



/* ================================================================
 * Function: FUN_10018931
 * Address:  10018931
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_10018931(uint param_1,uint param_2,int *param_3)

{
  ushort uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  float10 fVar5;
  undefined8 local_c;
  
  if ((double)CONCAT17(param_2._3_1_,CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1))) ==
      _DAT_100211b0) {
    iVar4 = 0;
    local_c = 0.0;
  }
  else if (((param_2 & 0x7ff00000) == 0) && (((param_2 & 0xfffff) != 0 || (param_1 != 0)))) {
    iVar4 = -0x3fd;
    if (_DAT_100211b0 <=
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
    fVar5 = FUN_100188ae(CONCAT17(param_2._3_1_,
                                  CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1))),0);
    local_c = (double)fVar5;
  }
  else {
    fVar5 = FUN_100188ae(CONCAT17(param_2._3_1_,
                                  CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1))),0);
    local_c = (double)fVar5;
    iVar4 = (short)((ushort)(param_2 >> 0x14) & 0x7ff) + -0x3fe;
  }
  *param_3 = iVar4;
  return (float10)local_c;
}



/* ================================================================
 * Function: FUN_100189f2
 * Address:  100189f2
 * ================================================================ */

int FUN_100189f2(void)

{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}



/* ================================================================
 * Function: FUN_10018a00
 * Address:  10018a00
 * ================================================================ */

int FUN_10018a00(void)

{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}



/* ================================================================
 * Function: FUN_10018a0f
 * Address:  10018a0f
 * ================================================================ */

int FUN_10018a0f(void)

{
  short in_FPUControlWord;
  
  return (int)in_FPUControlWord;
}



/* ================================================================
 * Function: FUN_10018a32
 * Address:  10018a32
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10018a32(void)

{
  return;
}



/* ================================================================
 * Function: __cintrindisp2
 * Address:  10018ca0
 * ================================================================ */

/* Library Function - Single Match
    __cintrindisp2
   
   Library: Visual Studio */

void __fastcall __cintrindisp2(undefined4 param_1,int param_2)

{
  __trandisp2(param_1,param_2);
  FUN_10018d6a();
  return;
}



/* ================================================================
 * Function: __cintrindisp1
 * Address:  10018cde
 * ================================================================ */

/* Library Function - Single Match
    __cintrindisp1
   
   Library: Visual Studio */

void __fastcall __cintrindisp1(undefined4 param_1,int param_2)

{
  __trandisp1(param_1,param_2);
  FUN_10018d6a();
  return;
}



/* ================================================================
 * Function: __ctrandisp2
 * Address:  10018d1b
 * ================================================================ */

/* Library Function - Single Match
    __ctrandisp2
   
   Libraries: Visual Studio 1998, Visual Studio 2003, Visual Studio 2005, Visual Studio 2008 */

void __cdecl __ctrandisp2(uint param_1,int param_2,uint param_3,int param_4)

{
  undefined4 extraout_ECX;
  int extraout_EDX;
  
  __fload(param_1,param_2);
  __fload(param_3,param_4);
  __trandisp2(extraout_ECX,extraout_EDX);
  FUN_10018d63();
  return;
}



/* ================================================================
 * Function: FUN_10018d63
 * Address:  10018d63
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10018d63(void)

{
  char cVar1;
  ushort uVar2;
  int unaff_EBP;
  ushort in_FPUStatusWord;
  float10 in_ST0;
  
  *(byte *)(unaff_EBP + -0x2c8) = *(byte *)(unaff_EBP + -0x2c8) & 0xfe;
  if (DAT_100267e8 != 0) {
    return;
  }
  *(double *)(unaff_EBP + -0x2d0) = (double)in_ST0;
  cVar1 = *(char *)(unaff_EBP + -0x90);
  if (cVar1 != '\0') {
    if ((cVar1 != -1) && (cVar1 != -2)) {
      if (cVar1 == '\0') {
        return;
      }
      *(int *)(unaff_EBP + -0x8e) = (int)cVar1;
      goto LAB_10018e39;
    }
    uVar2 = *(ushort *)(unaff_EBP + -0x2ca) & 0x7ff0;
    if (uVar2 == 0) {
      *(undefined4 *)(unaff_EBP + -0x8e) = 4;
      in_ST0 = (float10)fscale(in_ST0,(float10)_DAT_10021708);
      if (ABS(in_ST0) < (float10)_DAT_100216f8) {
        in_ST0 = in_ST0 * (float10)_DAT_10021718;
      }
      goto LAB_10018e39;
    }
    if (uVar2 == 0x7ff0) {
      *(undefined4 *)(unaff_EBP + -0x8e) = 3;
      in_ST0 = (float10)fscale(in_ST0,(float10)_DAT_10021700);
      if ((float10)_DAT_100216f0 < ABS(in_ST0)) {
        in_ST0 = in_ST0 * (float10)_DAT_10021710;
      }
      goto LAB_10018e39;
    }
  }
  if ((*(ushort *)(unaff_EBP + -0xa4) & 0x20) != 0) {
    return;
  }
  if ((in_FPUStatusWord & 0x20) == 0) {
    return;
  }
  *(undefined4 *)(unaff_EBP + -0x8e) = 8;
LAB_10018e39:
  *(int *)(unaff_EBP + -0x8a) = *(int *)(unaff_EBP + -0x94) + 1;
  if ((*(byte *)(unaff_EBP + -0x2c8) & 1) == 0) {
    *(undefined4 *)(unaff_EBP + -0x86) = *(undefined4 *)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -0x82) = *(undefined4 *)(unaff_EBP + 0xc);
    if (*(char *)(*(int *)(unaff_EBP + -0x94) + 0xd) != '\x01') {
      *(undefined4 *)(unaff_EBP + -0x7e) = *(undefined4 *)(unaff_EBP + 0x10);
      *(undefined4 *)(unaff_EBP + -0x7a) = *(undefined4 *)(unaff_EBP + 0x14);
    }
  }
  *(double *)(unaff_EBP + -0x76) = (double)in_ST0;
  FUN_1001db4b((int)*(char *)(*(int *)(unaff_EBP + -0x94) + 0xe),(int *)(unaff_EBP + -0x8e),
               (ushort *)(unaff_EBP + -0xa4));
  return;
}



/* ================================================================
 * Function: FUN_10018d6a
 * Address:  10018d6a
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10018d6a(void)

{
  char cVar1;
  ushort uVar2;
  int unaff_EBP;
  ushort in_FPUStatusWord;
  float10 in_ST0;
  
  if (DAT_100267e8 != 0) {
    return;
  }
  *(double *)(unaff_EBP + -0x2d0) = (double)in_ST0;
  cVar1 = *(char *)(unaff_EBP + -0x90);
  if (cVar1 != '\0') {
    if ((cVar1 != -1) && (cVar1 != -2)) {
      if (cVar1 == '\0') {
        return;
      }
      *(int *)(unaff_EBP + -0x8e) = (int)cVar1;
      goto LAB_10018e39;
    }
    uVar2 = *(ushort *)(unaff_EBP + -0x2ca) & 0x7ff0;
    if (uVar2 == 0) {
      *(undefined4 *)(unaff_EBP + -0x8e) = 4;
      in_ST0 = (float10)fscale(in_ST0,(float10)_DAT_10021708);
      if (ABS(in_ST0) < (float10)_DAT_100216f8) {
        in_ST0 = in_ST0 * (float10)_DAT_10021718;
      }
      goto LAB_10018e39;
    }
    if (uVar2 == 0x7ff0) {
      *(undefined4 *)(unaff_EBP + -0x8e) = 3;
      in_ST0 = (float10)fscale(in_ST0,(float10)_DAT_10021700);
      if ((float10)_DAT_100216f0 < ABS(in_ST0)) {
        in_ST0 = in_ST0 * (float10)_DAT_10021710;
      }
      goto LAB_10018e39;
    }
  }
  if ((*(ushort *)(unaff_EBP + -0xa4) & 0x20) != 0) {
    return;
  }
  if ((in_FPUStatusWord & 0x20) == 0) {
    return;
  }
  *(undefined4 *)(unaff_EBP + -0x8e) = 8;
LAB_10018e39:
  *(int *)(unaff_EBP + -0x8a) = *(int *)(unaff_EBP + -0x94) + 1;
  if ((*(byte *)(unaff_EBP + -0x2c8) & 1) == 0) {
    *(undefined4 *)(unaff_EBP + -0x86) = *(undefined4 *)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -0x82) = *(undefined4 *)(unaff_EBP + 0xc);
    if (*(char *)(*(int *)(unaff_EBP + -0x94) + 0xd) != '\x01') {
      *(undefined4 *)(unaff_EBP + -0x7e) = *(undefined4 *)(unaff_EBP + 0x10);
      *(undefined4 *)(unaff_EBP + -0x7a) = *(undefined4 *)(unaff_EBP + 0x14);
    }
  }
  *(double *)(unaff_EBP + -0x76) = (double)in_ST0;
  FUN_1001db4b((int)*(char *)(*(int *)(unaff_EBP + -0x94) + 0xe),(int *)(unaff_EBP + -0x8e),
               (ushort *)(unaff_EBP + -0xa4));
  return;
}



/* ================================================================
 * Function: __ctrandisp1
 * Address:  10018e9b
 * ================================================================ */

/* Library Function - Single Match
    __ctrandisp1
   
   Library: Visual Studio */

void __cdecl __ctrandisp1(uint param_1,int param_2)

{
  undefined4 extraout_ECX;
  int extraout_EDX;
  
  __fload(param_1,param_2);
  __trandisp1(extraout_ECX,extraout_EDX);
  FUN_10018d63();
  return;
}



/* ================================================================
 * Function: __fload
 * Address:  10018ece
 * ================================================================ */

/* Library Function - Single Match
    __fload
   
   Libraries: Visual Studio 1998, Visual Studio 2003, Visual Studio 2005, Visual Studio 2008 */

float10 __cdecl __fload(uint param_1,int param_2)

{
  float10 fVar1;
  
  if ((param_2._2_2_ & 0x7ff0) == 0x7ff0) {
    fVar1 = (float10)CONCAT28(param_2._2_2_ | 0x7fff,
                              CONCAT44(param_2 << 0xb | param_1 >> 0x15,param_1));
  }
  else {
    fVar1 = (float10)(double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
  }
  return fVar1;
}



/* ================================================================
 * Function: FUN_10018f0a
 * Address:  10018f0a
 * ================================================================ */

void FUN_10018f0a(void)

{
  if (PTR_FUN_10023454 != (undefined *)0x0) {
    (*(code *)PTR_FUN_10023454)();
  }
  FUN_1001900e((undefined4 *)&DAT_10023008,(undefined4 *)&DAT_10023018);
  FUN_1001900e((undefined4 *)&DAT_10023000,(undefined4 *)&DAT_10023004);
  return;
}



/* ================================================================
 * Function: __exit
 * Address:  10018f37
 * ================================================================ */

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __exit(int _Code)

{
  FUN_10018f57(_Code,1,0);
  return;
}



/* ================================================================
 * Function: FUN_10018f48
 * Address:  10018f48
 * ================================================================ */

void FUN_10018f48(void)

{
  FUN_10018f57(0,0,1);
  return;
}



/* ================================================================
 * Function: FUN_10018f57
 * Address:  10018f57
 * ================================================================ */

void __cdecl FUN_10018f57(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_10018ffc();
  if (DAT_10026844 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_10026840 = 1;
  DAT_1002683c = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_10027ef0 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_10027eec - 4), DAT_10027ef0 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_10027ef0 <= puVar1);
    }
    FUN_1001900e((undefined4 *)&DAT_1002301c,(undefined4 *)&DAT_10023024);
  }
  FUN_1001900e((undefined4 *)&DAT_10023028,(undefined4 *)&DAT_10023030);
  if (param_3 == 0) {
    DAT_10026844 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_10019005();
  return;
}



/* ================================================================
 * Function: FUN_10018ffc
 * Address:  10018ffc
 * ================================================================ */

void FUN_10018ffc(void)

{
  FUN_1001b2e7(0xd);
  return;
}



/* ================================================================
 * Function: FUN_10019005
 * Address:  10019005
 * ================================================================ */

void FUN_10019005(void)

{
  FUN_1001b348(0xd);
  return;
}



/* ================================================================
 * Function: FUN_1001900e
 * Address:  1001900e
 * ================================================================ */

void __cdecl FUN_1001900e(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}



/* ================================================================
 * Function: FUN_10019028
 * Address:  10019028
 * ================================================================ */

void FUN_10019028(void)

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
  DAT_10027ee0 = 0x20;
  DAT_10027de0 = puVar2;
  for (; puVar2 < DAT_10027de0 + 0x120; puVar2 = puVar2 + 9) {
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
    if ((int)DAT_10027ee0 < (int)UVar8) {
      puVar2 = &DAT_10027de4;
      do {
        puVar3 = _malloc(0x480);
        UVar9 = DAT_10027ee0;
        if (puVar3 == (undefined4 *)0x0) break;
        DAT_10027ee0 = DAT_10027ee0 + 0x20;
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
      } while ((int)DAT_10027ee0 < (int)UVar8);
    }
    uVar7 = 0;
    if (0 < (int)UVar9) {
      do {
        if (((*(HANDLE *)local_8 != (HANDLE)0xffffffff) && ((*pUVar5 & 1) != 0)) &&
           (((*pUVar5 & 8) != 0 || (DVar4 = GetFileType(*(HANDLE *)local_8), DVar4 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_10027de0)[(int)uVar7 >> 5] + (uVar7 & 0x1f) * 0x24);
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
    puVar2 = DAT_10027de0 + iVar6 * 9;
    if (DAT_10027de0[iVar6 * 9] == -1) {
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
          goto LAB_100191cd;
        }
      }
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x40;
    }
    else {
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x80;
    }
LAB_100191cd:
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      SetHandleCount(DAT_10027ee0);
      return;
    }
  } while( true );
}



/* ================================================================
 * Function: FUN_100191e4
 * Address:  100191e4
 * ================================================================ */

void FUN_100191e4(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  uint uVar2;
  
  puVar1 = &DAT_10027de0;
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
      FUN_100166af((undefined *)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x10027ee0);
  return;
}



/* ================================================================
 * Function: FUN_10019238
 * Address:  10019238
 * ================================================================ */

void FUN_10019238(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  
  if (DAT_10027ee8 == 0) {
    FUN_1001dff3();
  }
  iVar5 = 0;
  for (puVar6 = DAT_100267f4; (char)*puVar6 != '\0'; puVar6 = (uint *)((int)puVar6 + sVar2 + 1)) {
    if ((char)*puVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen((char *)puVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  DAT_10026824 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = (char)*DAT_100267f4;
  puVar6 = DAT_100267f4;
  while (cVar1 != '\0') {
    sVar2 = _strlen((char *)puVar6);
    if ((char)*puVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_10015cc0((uint *)*puVar3,puVar6);
      puVar3 = puVar3 + 1;
    }
    puVar6 = (uint *)((int)puVar6 + sVar2 + 1);
    cVar1 = (char)*puVar6;
  }
  FUN_100166af((undefined *)DAT_100267f4);
  DAT_100267f4 = (uint *)0x0;
  *puVar3 = 0;
  DAT_10027ee4 = 1;
  return;
}



/* ================================================================
 * Function: FUN_100192f1
 * Address:  100192f1
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100192f1(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_10027ee8 == 0) {
    FUN_1001dff3();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_10026848,0x104);
  _DAT_10026834 = &DAT_10026848;
  pbVar2 = &DAT_10026848;
  if (*DAT_10027ef4 != 0) {
    pbVar2 = DAT_10027ef4;
  }
  FUN_1001938a(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_1001938a(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_1002681c = puVar1;
  _DAT_10026818 = local_8 + -1;
  return;
}



/* ================================================================
 * Function: FUN_1001938a
 * Address:  1001938a
 * ================================================================ */

void __cdecl FUN_1001938a(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

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
      if (((*(byte *)((int)&DAT_10026c80 + bVar1 + 1) & 4) != 0) &&
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
      if ((*(byte *)((int)&DAT_10026c80 + bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        pbVar4 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_10019435;
      param_1 = pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_10019435:
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
          if ((*(byte *)((int)&DAT_10026c80 + bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if ((*(byte *)((int)&DAT_10026c80 + bVar1 + 1) & 4) != 0) {
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
 * Function: FUN_1001953e
 * Address:  1001953e
 * ================================================================ */

LPSTR FUN_1001953e(void)

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
  if (DAT_1002694c == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_1002694c = 1;
LAB_10019595:
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
        FUN_100166af(pCVar6);
        local_8 = (LPSTR)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return local_8;
    }
    pCVar9 = GetEnvironmentStrings();
    if (pCVar9 == (LPCH)0x0) {
      return (LPSTR)0x0;
    }
    DAT_1002694c = 2;
  }
  else {
    if (DAT_1002694c == 1) goto LAB_10019595;
    if (DAT_1002694c != 2) {
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
    FUN_10015e30((undefined4 *)pCVar6,(undefined4 *)pCVar9,(uint)(pcVar7 + (1 - (int)pCVar9)));
  }
  FreeEnvironmentStringsA(pCVar9);
  return pCVar6;
}



/* ================================================================
 * Function: FUN_10019670
 * Address:  10019670
 * ================================================================ */

void __cdecl FUN_10019670(undefined4 *param_1)

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
 * Function: FUN_1001969d
 * Address:  1001969d
 * ================================================================ */

int FUN_1001969d(void)

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
  
  FUN_1001e3c0();
  local_9c = 0x94;
  BVar3 = GetVersionExA((LPOSVERSIONINFOA)&local_9c);
  if (((BVar3 == 0) || (local_8c != 2)) || (local_98 < 5)) {
    aCStackY_18[0] = -9;
    aCStackY_18[1] = -0x6a;
    aCStackY_18[2] = '\x01';
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
      aCStackY_18[0] = '5';
      aCStackY_18[1] = -0x69;
      aCStackY_18[2] = '\x01';
      aCStackY_18[3] = '\x10';
      iVar5 = _strncmp("__GLOBAL_HEAP_SELECTED",local_1230,0x16);
      if (iVar5 == 0) {
        pcVar7 = local_1230;
      }
      else {
        aCStackY_18[0] = 'W';
        aCStackY_18[1] = -0x69;
        aCStackY_18[2] = '\x01';
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
        aCStackY_18[0] = -0x43;
        aCStackY_18[1] = -0x69;
        aCStackY_18[2] = '\x01';
        aCStackY_18[3] = '\x10';
        iVar5 = FUN_1001e00f(this,pbVar6,(int *)0x0,(void *)0xa);
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
    FUN_10019670((undefined4 *)&stack0xfffffff8);
    iVar5 = 3 - (uint)(unaff_BL < 6);
  }
  else {
    iVar5 = 1;
  }
  return iVar5;
}



/* ================================================================
 * Function: FUN_100197e5
 * Address:  100197e5
 * ================================================================ */

undefined4 __cdecl FUN_100197e5(int param_1)

{
  undefined **ppuVar1;
  
  DAT_10027dc0 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_10027dc0 != (HANDLE)0x0) {
    DAT_10027dc4 = FUN_1001969d();
    if (DAT_10027dc4 == 3) {
      ppuVar1 = (undefined **)FUN_1001a03e(0x3f8);
    }
    else {
      if (DAT_10027dc4 != 2) {
        return 1;
      }
      ppuVar1 = FUN_1001ab85();
    }
    if (ppuVar1 != (undefined **)0x0) {
      return 1;
    }
    HeapDestroy(DAT_10027dc0);
  }
  return 0;
}



/* ================================================================
 * Function: FUN_10019842
 * Address:  10019842
 * ================================================================ */

void FUN_10019842(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  
  if (DAT_10027dc4 == 3) {
    iVar1 = 0;
    if (0 < DAT_10027db4) {
      puVar2 = (undefined4 *)((int)DAT_10027db8 + 0xc);
      do {
        VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
        VirtualFree((LPVOID)*puVar2,0,0x8000);
        HeapFree(DAT_10027dc0,0,(LPVOID)puVar2[1]);
        puVar2 = puVar2 + 5;
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_10027db4);
    }
    HeapFree(DAT_10027dc0,0,DAT_10027db8);
  }
  else if (DAT_10027dc4 == 2) {
    ppuVar3 = &PTR_LOOP_10023a08;
    do {
      if (ppuVar3[4] != (undefined *)0x0) {
        VirtualFree(ppuVar3[4],0,0x8000);
      }
      ppuVar3 = (undefined **)*ppuVar3;
    } while (ppuVar3 != &PTR_LOOP_10023a08);
  }
  HeapDestroy(DAT_10027dc0);
  return;
}



/* ================================================================
 * Function: FUN_100198ea
 * Address:  100198ea
 * ================================================================ */

undefined4 FUN_100198ea(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_100198f0
 * Address:  100198f0
 * ================================================================ */

void FUN_100198f0(void)

{
  if ((DAT_100267fc == 1) || ((DAT_100267fc == 0 && (DAT_10026800 == 1)))) {
    FUN_10019929(0xfc);
    if (DAT_10026950 != (code *)0x0) {
      (*DAT_10026950)();
    }
    FUN_10019929(0xff);
  }
  return;
}



/* ================================================================
 * Function: FUN_10019929
 * Address:  10019929
 * ================================================================ */

void __cdecl FUN_10019929(DWORD param_1)

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
  pDVar2 = &DAT_10023858;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while ((int)pDVar2 < 0x100238e8);
  if (param_1 == (&DAT_10023858)[iVar5 * 2]) {
    if ((DAT_100267fc == 1) || ((DAT_100267fc == 0 && (DAT_10026800 == 1)))) {
      pDVar2 = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x1002385c);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar4,pDVar2,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_10015cc0(local_1a8,(uint *)"<program name unknown>");
      }
      _Dest = local_1a8;
      sVar4 = _strlen((char *)local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen((char *)local_1a8);
        _Dest = (uint *)(auStackY_1e3 + sVar4);
        _strncpy((char *)_Dest,"...",3);
      }
      FUN_10015cc0(local_a4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_10015cd0(local_a4,_Dest);
      FUN_10015cd0(local_a4,(uint *)&DAT_10021a04);
      FUN_10015cd0(local_a4,*(uint **)(iVar5 * 8 + 0x1002385c));
      auStackY_1e3._3_4_ = 0x10019a4d;
      FUN_1001e3ef(local_a4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}



/* ================================================================
 * Function: FUN_10019a7c
 * Address:  10019a7c
 * ================================================================ */

void FUN_10019a7c(void)

{
  if (DAT_10026a10 == 0) {
    FUN_1001b2e7(0xb);
    if (DAT_10026a10 == 0) {
      FUN_10019aaa();
      DAT_10026a10 = DAT_10026a10 + 1;
    }
    FUN_1001b348(0xb);
  }
  return;
}



/* ================================================================
 * Function: FUN_10019aaa
 * Address:  10019aaa
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10019aaa(void)

{
  char cVar1;
  char cVar2;
  uint *_Str1;
  DWORD DVar3;
  int iVar4;
  size_t sVar5;
  void *this;
  uint *_Source;
  int local_8;
  
  FUN_1001b2e7(0xc);
  DAT_10023990 = 0xffffffff;
  DAT_10023980 = 0xffffffff;
  DAT_10026958 = 0;
  _Str1 = (uint *)FUN_1001e478("TZ");
  if (_Str1 == (uint *)0x0) {
    FUN_1001b348(0xc);
    DVar3 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_10026960);
    if (DVar3 == 0xffffffff) {
      return;
    }
    DAT_100238e8 = (void *)(DAT_10026960 * 0x3c);
    DAT_10026958 = 1;
    if (DAT_100269a6 != 0) {
      DAT_100238e8 = (void *)((int)DAT_100238e8 + DAT_100269b4 * 0x3c);
    }
    if ((DAT_100269fa == 0) || (DAT_10026a08 == 0)) {
      DAT_100238ec = 0;
      _DAT_100238f0 = 0;
    }
    else {
      DAT_100238ec = 1;
      _DAT_100238f0 = (DAT_10026a08 - DAT_100269b4) * 0x3c;
    }
    iVar4 = WideCharToMultiByte(DAT_10026ab4,0x220,(LPCWSTR)&DAT_10026964,-1,PTR_DAT_10023974,0x3f,
                                (LPCSTR)0x0,&local_8);
    if ((iVar4 == 0) || (local_8 != 0)) {
      *PTR_DAT_10023974 = 0;
    }
    else {
      PTR_DAT_10023974[0x3f] = 0;
    }
    iVar4 = WideCharToMultiByte(DAT_10026ab4,0x220,(LPCWSTR)&DAT_100269b8,-1,PTR_DAT_10023978,0x3f,
                                (LPCSTR)0x0,&local_8);
    if ((iVar4 != 0) && (local_8 == 0)) {
      PTR_DAT_10023978[0x3f] = 0;
      return;
    }
LAB_10019d1b:
    *PTR_DAT_10023978 = 0;
  }
  else {
    if (((char)*_Str1 != '\0') &&
       ((DAT_10026a0c == (uint *)0x0 ||
        (iVar4 = _strcmp((char *)_Str1,(char *)DAT_10026a0c), iVar4 != 0)))) {
      FUN_100166af((undefined *)DAT_10026a0c);
      sVar5 = _strlen((char *)_Str1);
      DAT_10026a0c = _malloc(sVar5 + 1);
      if (DAT_10026a0c != (uint *)0x0) {
        FUN_10015cc0(DAT_10026a0c,_Str1);
        FUN_1001b348(0xc);
        _strncpy(PTR_DAT_10023974,(char *)_Str1,3);
        _Source = (uint *)((int)_Str1 + 3);
        PTR_DAT_10023974[3] = 0;
        cVar1 = *(char *)_Source;
        if (cVar1 == '-') {
          _Source = _Str1 + 1;
        }
        iVar4 = FUN_10015c2b(this,(byte *)_Source);
        DAT_100238e8 = (void *)(iVar4 * 0xe10);
        for (; (cVar2 = (char)*_Source, cVar2 == '+' || (('/' < cVar2 && (cVar2 < ':'))));
            _Source = (uint *)((int)_Source + 1)) {
        }
        if ((char)*_Source == ':') {
          _Source = (uint *)((int)_Source + 1);
          iVar4 = FUN_10015c2b(DAT_100238e8,(byte *)_Source);
          DAT_100238e8 = (void *)((int)DAT_100238e8 + iVar4 * 0x3c);
          for (; ('/' < (char)*_Source && ((char)*_Source < ':'));
              _Source = (uint *)((int)_Source + 1)) {
          }
          if ((char)*_Source == ':') {
            _Source = (uint *)((int)_Source + 1);
            iVar4 = FUN_10015c2b(DAT_100238e8,(byte *)_Source);
            DAT_100238e8 = (void *)((int)DAT_100238e8 + iVar4);
            for (; ('/' < (char)*_Source && ((char)*_Source < ':'));
                _Source = (uint *)((int)_Source + 1)) {
            }
          }
        }
        if (cVar1 == '-') {
          DAT_100238e8 = (void *)-(int)DAT_100238e8;
        }
        DAT_100238ec = (int)(char)*_Source;
        if (DAT_100238ec != 0) {
          _strncpy(PTR_DAT_10023978,(char *)_Source,3);
          PTR_DAT_10023978[3] = 0;
          return;
        }
        goto LAB_10019d1b;
      }
    }
    FUN_1001b348(0xc);
  }
  return;
}



/* ================================================================
 * Function: FUN_10019d31
 * Address:  10019d31
 * ================================================================ */

bool __cdecl FUN_10019d31(int *param_1)

{
  bool bVar1;
  
  FUN_1001b2e7(0xb);
  bVar1 = FUN_10019d52(param_1);
  FUN_1001b348(0xb);
  return bVar1;
}



/* ================================================================
 * Function: FUN_10019d52
 * Address:  10019d52
 * ================================================================ */

bool __cdecl FUN_10019d52(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (DAT_100238ec != 0) {
    uVar5 = param_1[5];
    if ((uVar5 != DAT_10023980) || (uVar5 != DAT_10023990)) {
      if (DAT_10026958 == 0) {
        FUN_10019efe(1,1,uVar5,4,1,0,0,2,0,0,0);
        FUN_10019efe(0,1,param_1[5],10,5,0,0,2,0,0,0);
      }
      else {
        if (DAT_100269f8 != 0) {
          uVar6 = (uint)DAT_100269fe;
          uVar3 = 0;
          uVar4 = 0;
        }
        else {
          uVar3 = (uint)DAT_100269fc;
          uVar6 = 0;
          uVar4 = (uint)DAT_100269fe;
        }
        FUN_10019efe(1,(uint)(DAT_100269f8 == 0),uVar5,(uint)DAT_100269fa,uVar4,uVar3,uVar6,
                     (uint)DAT_10026a00,(uint)DAT_10026a02,(uint)DAT_10026a04,(uint)DAT_10026a06);
        if (DAT_100269a4 != 0) {
          uVar6 = (uint)DAT_100269aa;
          uVar3 = 0;
          uVar4 = 0;
          uVar5 = param_1[5];
        }
        else {
          uVar3 = (uint)DAT_100269a8;
          uVar6 = 0;
          uVar4 = (uint)DAT_100269aa;
          uVar5 = param_1[5];
        }
        FUN_10019efe(0,(uint)(DAT_100269a4 == 0),uVar5,(uint)DAT_100269a6,uVar4,uVar3,uVar6,
                     (uint)DAT_100269ac,(uint)DAT_100269ae,(uint)DAT_100269b0,(uint)DAT_100269b2);
      }
    }
    iVar1 = param_1[7];
    if (DAT_10023984 < DAT_10023994) {
      if ((DAT_10023984 <= iVar1) && (iVar1 <= DAT_10023994)) {
        if ((DAT_10023984 < iVar1) && (iVar1 < DAT_10023994)) {
          return true;
        }
LAB_10019eca:
        iVar2 = ((param_1[2] * 0x3c + param_1[1]) * 0x3c + *param_1) * 1000;
        if (iVar1 == DAT_10023984) {
          return DAT_10023988 <= iVar2;
        }
        return iVar2 < DAT_10023998;
      }
    }
    else {
      if (iVar1 < DAT_10023994) {
        return true;
      }
      if (DAT_10023984 < iVar1) {
        return true;
      }
      if ((iVar1 <= DAT_10023994) || (DAT_10023984 <= iVar1)) goto LAB_10019eca;
    }
  }
  return false;
}



/* ================================================================
 * Function: FUN_10019efe
 * Address:  10019efe
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_10019efe(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,int param_10,int param_11)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 1) {
    if ((param_3 & 3) == 0) {
      iVar1 = (&DAT_10023998)[param_4];
    }
    else {
      iVar1 = *(int *)(&DAT_100239cc + param_4 * 4);
    }
    iVar2 = (int)(param_3 * 0x16d + -0x63db + iVar1 + 1 + ((int)(param_3 - 1) >> 2)) % 7;
    if (param_6 < iVar2) {
      iVar1 = iVar1 + 1 + (param_5 * 7 - iVar2) + param_6;
    }
    else {
      iVar1 = iVar1 + -6 + (param_5 * 7 - iVar2) + param_6;
    }
    if (param_5 == 5) {
      if ((param_3 & 3) == 0) {
        iVar2 = *(int *)(&DAT_1002399c + param_4 * 4);
      }
      else {
        iVar2 = *(int *)(&DAT_100239d0 + param_4 * 4);
      }
      if (iVar2 < iVar1) {
        iVar1 = iVar1 + -7;
      }
    }
  }
  else {
    if ((param_3 & 3) == 0) {
      iVar1 = (&DAT_10023998)[param_4];
    }
    else {
      iVar1 = *(int *)(&DAT_100239cc + param_4 * 4);
    }
    iVar1 = iVar1 + param_7;
  }
  if (param_1 == 1) {
    DAT_10023980 = param_3;
    DAT_10023988 = ((param_8 * 0x3c + param_9) * 0x3c + param_10) * 1000 + param_11;
    DAT_10023984 = iVar1;
  }
  else {
    DAT_10023998 = ((param_8 * 0x3c + param_9) * 0x3c + _DAT_100238f0 + param_10) * 1000 + param_11;
    if (DAT_10023998 < 0) {
      DAT_10023998 = DAT_10023998 + 86400000;
      DAT_10023994 = iVar1 + -1;
    }
    else {
      DAT_10023994 = iVar1;
      if (86399999 < DAT_10023998) {
        DAT_10023998 = DAT_10023998 + -86400000;
        DAT_10023994 = iVar1 + 1;
      }
    }
    DAT_10023990 = param_3;
  }
  return;
}



/* ================================================================
 * Function: FUN_1001a03e
 * Address:  1001a03e
 * ================================================================ */

undefined4 __cdecl FUN_1001a03e(undefined4 param_1)

{
  DAT_10027db8 = HeapAlloc(DAT_10027dc0,0,0x140);
  if (DAT_10027db8 == (LPVOID)0x0) {
    return 0;
  }
  DAT_10027db0 = 0;
  DAT_10027db4 = 0;
  DAT_10027dac = DAT_10027db8;
  DAT_10027dbc = param_1;
  DAT_10027da4 = 0x10;
  return 1;
}



/* ================================================================
 * Function: FUN_1001a086
 * Address:  1001a086
 * ================================================================ */

uint __cdecl FUN_1001a086(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_10027db8;
  while( true ) {
    if (DAT_10027db8 + DAT_10027db4 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}



/* ================================================================
 * Function: FUN_1001a0b1
 * Address:  1001a0b1
 * ================================================================ */

void __cdecl FUN_1001a0b1(uint *param_1,int param_2)

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
      if (DAT_10027db0 != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_10027da8 * 0x8000 + DAT_10027db0[3]),0x8000,0x4000);
        DAT_10027db0[2] = DAT_10027db0[2] | 0x80000000U >> ((byte)DAT_10027da8 & 0x1f);
        *(undefined4 *)(DAT_10027db0[4] + 0xc4 + DAT_10027da8 * 4) = 0;
        *(char *)(DAT_10027db0[4] + 0x43) = *(char *)(DAT_10027db0[4] + 0x43) + -1;
        if (*(char *)(DAT_10027db0[4] + 0x43) == '\0') {
          DAT_10027db0[1] = DAT_10027db0[1] & 0xfffffffe;
        }
        if (DAT_10027db0[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_10027db0[3],0,0x8000);
          HeapFree(DAT_10027dc0,0,(LPVOID)DAT_10027db0[4]);
          FUN_1001b5a0(DAT_10027db0,DAT_10027db0 + 5,
                       (DAT_10027db4 * 0x14 - (int)DAT_10027db0) + -0x14 + DAT_10027db8);
          DAT_10027db4 = DAT_10027db4 + -1;
          if (DAT_10027db0 < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_10027dac = DAT_10027db8;
        }
      }
      DAT_10027db0 = param_1;
      DAT_10027da8 = uVar14;
    }
  }
  return;
}



/* ================================================================
 * Function: FUN_1001a3da
 * Address:  1001a3da
 * ================================================================ */

int * __cdecl FUN_1001a3da(uint *param_1)

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
  
  puVar8 = DAT_10027db8 + DAT_10027db4 * 5;
  uVar6 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar7 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar5 = (byte)iVar7;
  param_1 = DAT_10027dac;
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
  puVar11 = DAT_10027db8;
  if (param_1 == puVar8) {
    for (; (puVar11 < DAT_10027dac && ((puVar11[1] & local_c) == 0 && (*puVar11 & local_10) == 0));
        puVar11 = puVar11 + 5) {
    }
    param_1 = puVar11;
    if (puVar11 == DAT_10027dac) {
      for (; (puVar11 < puVar8 && (puVar11[2] == 0)); puVar11 = puVar11 + 5) {
      }
      puVar12 = DAT_10027db8;
      param_1 = puVar11;
      if (puVar11 == puVar8) {
        for (; (puVar12 < DAT_10027dac && (puVar12[2] == 0)); puVar12 = puVar12 + 5) {
        }
        param_1 = puVar12;
        if ((puVar12 == DAT_10027dac) && (param_1 = FUN_1001a6e3(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar7 = FUN_1001a794((int)param_1);
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
  DAT_10027dac = param_1;
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
    if (iVar9 == 0) goto LAB_1001a6a0;
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
LAB_1001a6a0:
  piVar10 = (int *)((int)piVar10 + iVar9);
  *piVar10 = uVar6 + 1;
  *(uint *)((int)piVar10 + (uVar6 - 4)) = uVar6 + 1;
  iVar7 = *piVar2;
  *piVar2 = iVar7 + 1;
  if (((iVar7 == 0) && (param_1 == DAT_10027db0)) && (local_8 == DAT_10027da8)) {
    DAT_10027db0 = (uint *)0x0;
  }
  *piVar4 = local_8;
  return piVar10 + 1;
}



/* ================================================================
 * Function: FUN_1001a6e3
 * Address:  1001a6e3
 * ================================================================ */

undefined4 * FUN_1001a6e3(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_10027db4 == DAT_10027da4) {
    pvVar2 = HeapReAlloc(DAT_10027dc0,0,DAT_10027db8,(DAT_10027da4 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_10027da4 = DAT_10027da4 + 0x10;
    DAT_10027db8 = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_10027db8 + DAT_10027db4 * 0x14);
  pvVar2 = HeapAlloc(DAT_10027dc0,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_10027db4 = DAT_10027db4 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_10027dc0,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}



/* ================================================================
 * Function: FUN_1001a794
 * Address:  1001a794
 * ================================================================ */

int __cdecl FUN_1001a794(int param_1)

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
 * Function: FUN_1001a88f
 * Address:  1001a88f
 * ================================================================ */

undefined4 __cdecl FUN_1001a88f(uint *param_1,int param_2,int param_3)

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
 * Function: FUN_1001ab85
 * Address:  1001ab85
 * ================================================================ */

undefined ** FUN_1001ab85(void)

{
  bool bVar1;
  int *lpAddress;
  LPVOID pvVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined **lpMem;
  
  if (DAT_10023a18 == -1) {
    lpMem = &PTR_LOOP_10023a08;
  }
  else {
    lpMem = HeapAlloc(DAT_10027dc0,0,0x2020);
    if (lpMem == (undefined **)0x0) {
      return (undefined **)0x0;
    }
  }
  lpAddress = VirtualAlloc((LPVOID)0x0,0x400000,0x2000,4);
  if (lpAddress != (int *)0x0) {
    pvVar2 = VirtualAlloc(lpAddress,0x10000,0x1000,4);
    if (pvVar2 != (LPVOID)0x0) {
      if (lpMem == &PTR_LOOP_10023a08) {
        if (PTR_LOOP_10023a08 == (undefined *)0x0) {
          PTR_LOOP_10023a08 = (undefined *)&PTR_LOOP_10023a08;
        }
        if (PTR_LOOP_10023a0c == (undefined *)0x0) {
          PTR_LOOP_10023a0c = (undefined *)&PTR_LOOP_10023a08;
        }
      }
      else {
        *lpMem = (undefined *)&PTR_LOOP_10023a08;
        lpMem[1] = PTR_LOOP_10023a0c;
        PTR_LOOP_10023a0c = (undefined *)lpMem;
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
  if (lpMem != &PTR_LOOP_10023a08) {
    HeapFree(DAT_10027dc0,0,lpMem);
  }
  return (undefined **)0x0;
}



/* ================================================================
 * Function: FUN_1001acc9
 * Address:  1001acc9
 * ================================================================ */

void __cdecl FUN_1001acc9(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_10025a28 == param_1) {
    PTR_LOOP_10025a28 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_10023a08) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_10027dc0,0,param_1);
    return;
  }
  DAT_10023a18 = 0xffffffff;
  return;
}



/* ================================================================
 * Function: FUN_1001ad1f
 * Address:  1001ad1f
 * ================================================================ */

void __cdecl FUN_1001ad1f(int param_1)

{
  BOOL BVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  int local_8;
  
  ppuVar4 = (undefined **)PTR_LOOP_10023a0c;
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
            DAT_10026a14 = DAT_10026a14 + -1;
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
          FUN_1001acc9(ppuVar4);
        }
      }
    }
    if ((ppuVar5 == (undefined **)PTR_LOOP_10023a0c) || (ppuVar4 = ppuVar5, param_1 < 1)) {
      return;
    }
  } while( true );
}



/* ================================================================
 * Function: FUN_1001ade1
 * Address:  1001ade1
 * ================================================================ */

int __cdecl FUN_1001ade1(undefined *param_1,undefined4 *param_2,uint *param_3)

{
  undefined **ppuVar1;
  uint uVar2;
  
  ppuVar1 = &PTR_LOOP_10023a08;
  while ((param_1 <= ppuVar1[4] || (ppuVar1[5] <= param_1))) {
    ppuVar1 = (undefined **)*ppuVar1;
    if (ppuVar1 == &PTR_LOOP_10023a08) {
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
 * Function: FUN_1001ae38
 * Address:  1001ae38
 * ================================================================ */

void __cdecl FUN_1001ae38(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x18 + (param_2 - *(int *)(param_1 + 0x10) >> 0xc) * 8);
  *piVar1 = *piVar1 + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_10026a14 = DAT_10026a14 + 1, DAT_10026a14 == 0x20)) {
    FUN_1001ad1f(0x10);
  }
  return;
}



/* ================================================================
 * Function: FUN_1001ae7d
 * Address:  1001ae7d
 * ================================================================ */

/* WARNING: Type propagation algorithm not settling */

int * __cdecl FUN_1001ae7d(uint param_1)

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
  
  piVar7 = (int *)PTR_LOOP_10025a28;
  do {
    if (piVar7[4] != -1) {
      puVar8 = (uint *)piVar7[2];
      piVar4 = (int *)(((int)puVar8 + (-0x18 - (int)piVar7) >> 3) * 0x1000 + piVar7[4]);
      if (puVar8 < piVar7 + 0x806) {
        do {
          if (((int)param_1 <= (int)*puVar8) && (param_1 < puVar8[1])) {
            piVar5 = (int *)FUN_1001b085(piVar4,*puVar8,param_1);
            if (piVar5 != (int *)0x0) goto LAB_1001af48;
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
          piVar5 = (int *)FUN_1001b085(piVar4,*puVar8,param_1);
          if (piVar5 != (int *)0x0) {
LAB_1001af48:
            PTR_LOOP_10025a28 = (undefined *)piVar7;
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
    if (piVar7 == (int *)PTR_LOOP_10025a28) {
      ppuVar9 = &PTR_LOOP_10023a08;
      while ((ppuVar9[4] == (undefined *)0xffffffff || (ppuVar9[3] == (undefined *)0x0))) {
        ppuVar9 = (undefined **)*ppuVar9;
        if (ppuVar9 == &PTR_LOOP_10023a08) {
          ppuVar9 = FUN_1001ab85();
          if (ppuVar9 == (undefined **)0x0) {
            return (int *)0x0;
          }
          piVar7 = (int *)ppuVar9[4];
          *(char *)(piVar7 + 2) = (char)param_1;
          PTR_LOOP_10025a28 = (undefined *)ppuVar9;
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
      PTR_LOOP_10025a28 = (undefined *)ppuVar9;
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
 * Function: FUN_1001b085
 * Address:  1001b085
 * ================================================================ */

int __cdecl FUN_1001b085(int *param_1,uint param_2,uint param_3)

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
          goto LAB_1001b198;
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
LAB_1001b198:
  return (int)pbVar2 * 0x10 + (int)param_1 * -0xf;
}



/* ================================================================
 * Function: FUN_1001b1a9
 * Address:  1001b1a9
 * ================================================================ */

undefined4 __cdecl FUN_1001b1a9(int param_1,int *param_2,byte *param_3,uint param_4)

{
  byte *pbVar1;
  int *piVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = (uint)*param_3;
  piVar2 = (int *)(param_1 + 0x18 + ((int)param_2 - *(int *)(param_1 + 0x10) >> 0xc) * 8);
  if (param_4 < uVar6) {
    *param_3 = (byte)param_4;
    *piVar2 = *piVar2 + (uVar6 - param_4);
    piVar2[1] = 0xf1;
  }
  else {
    if (param_4 <= uVar6) {
      return 0;
    }
    pbVar1 = param_3 + param_4;
    if (param_2 + 0x3e < pbVar1) {
      return 0;
    }
    for (pbVar4 = param_3 + uVar6; (pbVar4 < pbVar1 && (*pbVar4 == 0)); pbVar4 = pbVar4 + 1) {
    }
    if (pbVar4 != pbVar1) {
      return 0;
    }
    *param_3 = (byte)param_4;
    if ((param_3 <= (byte *)*param_2) && ((byte *)*param_2 < pbVar1)) {
      if (pbVar1 < param_2 + 0x3e) {
        iVar5 = 0;
        *param_2 = (int)pbVar1;
        bVar3 = *pbVar1;
        while (bVar3 == 0) {
          iVar5 = iVar5 + 1;
          bVar3 = pbVar1[iVar5];
        }
        param_2[1] = iVar5;
      }
      else {
        param_2[1] = 0;
        *param_2 = (int)(param_2 + 2);
      }
    }
    *piVar2 = *piVar2 + (uVar6 - param_4);
  }
  return 1;
}



/* ================================================================
 * Function: FUN_1001b252
 * Address:  1001b252
 * ================================================================ */

void FUN_1001b252(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10025a74);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10025a64);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10025a54);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10025a34);
  return;
}



/* ================================================================
 * Function: FUN_1001b27b
 * Address:  1001b27b
 * ================================================================ */

void FUN_1001b27b(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_10025a30;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_10025a74)) && (ppuVar1 != &PTR_DAT_10025a64)) &&
       ((ppuVar1 != &PTR_DAT_10025a54 && (ppuVar1 != &PTR_DAT_10025a34)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_100166af(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x10025af0);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10025a54);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10025a64);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10025a74);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10025a34);
  return;
}



/* ================================================================
 * Function: FUN_1001b2e7
 * Address:  1001b2e7
 * ================================================================ */

void __cdecl FUN_1001b2e7(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_10025a30 + param_1;
  if ((&DAT_10025a30)[param_1] == 0) {
    lpCriticalSection = _malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_1001b2e7(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_100166af((undefined *)lpCriticalSection);
    }
    FUN_1001b348(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}



/* ================================================================
 * Function: FUN_1001b348
 * Address:  1001b348
 * ================================================================ */

void __cdecl FUN_1001b348(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_10025a30)[param_1]);
  return;
}



/* ================================================================
 * Function: FUN_1001b425
 * Address:  1001b425
 * ================================================================ */

void FUN_1001b425(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}



/* ================================================================
 * Function: FUN_1001b440
 * Address:  1001b440
 * ================================================================ */

undefined4 __cdecl FUN_1001b440(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_10026a7c != (code *)0x0) {
    iVar1 = (*DAT_10026a7c)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



/* ================================================================
 * Function: FUN_1001b45b
 * Address:  1001b45b
 * ================================================================ */

int FUN_1001b45b(int *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  
  piVar1 = (int *)*param_1;
  if (((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) && (piVar1[5] == 0x19930520)) {
    iVar3 = FUN_100172c8();
    return iVar3;
  }
  if ((DAT_10026a80 != (FARPROC)0x0) &&
     (bVar2 = FUN_1001b4f7(DAT_10026a80), CONCAT31(extraout_var,bVar2) != 0)) {
    iVar3 = (*DAT_10026a80)(param_1);
    return iVar3;
  }
  return 0;
}



/* ================================================================
 * Function: FUN_1001b4bf
 * Address:  1001b4bf
 * ================================================================ */

bool __cdecl FUN_1001b4bf(void *param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadReadPtr(param_1,param_2);
  return BVar1 == 0;
}



/* ================================================================
 * Function: FUN_1001b4db
 * Address:  1001b4db
 * ================================================================ */

bool __cdecl FUN_1001b4db(LPVOID param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadWritePtr(param_1,param_2);
  return BVar1 == 0;
}



/* ================================================================
 * Function: FUN_1001b4f7
 * Address:  1001b4f7
 * ================================================================ */

bool __cdecl FUN_1001b4f7(FARPROC param_1)

{
  BOOL BVar1;
  
  BVar1 = IsBadCodePtr(param_1);
  return BVar1 == 0;
}



/* ================================================================
 * Function: _strcmp
 * Address:  1001b510
 * ================================================================ */

/* Library Function - Single Match
    _strcmp
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

int __cdecl _strcmp(char *_Str1,char *_Str2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  
  if (((uint)_Str1 & 3) != 0) {
    if (((uint)_Str1 & 1) != 0) {
      bVar4 = *_Str1;
      _Str1 = _Str1 + 1;
      bVar5 = bVar4 < (byte)*_Str2;
      if (bVar4 != *_Str2) goto LAB_1001b554;
      _Str2 = _Str2 + 1;
      if (bVar4 == 0) {
        return 0;
      }
      if (((uint)_Str1 & 2) == 0) goto LAB_1001b520;
    }
    uVar1 = *(undefined2 *)_Str1;
    _Str1 = _Str1 + 2;
    bVar4 = (byte)uVar1;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) goto LAB_1001b554;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((ushort)uVar1 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) goto LAB_1001b554;
    if (bVar4 == 0) {
      return 0;
    }
    _Str2 = _Str2 + 2;
  }
LAB_1001b520:
  while( true ) {
    uVar2 = *(undefined4 *)_Str1;
    bVar4 = (byte)uVar2;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) break;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((uint)uVar2 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) break;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((uint)uVar2 >> 0x10);
    bVar5 = bVar4 < (byte)_Str2[2];
    if (bVar4 != _Str2[2]) break;
    bVar3 = (byte)((uint)uVar2 >> 0x18);
    if (bVar4 == 0) {
      return 0;
    }
    bVar5 = bVar3 < (byte)_Str2[3];
    if (bVar3 != _Str2[3]) break;
    _Str2 = _Str2 + 4;
    _Str1 = _Str1 + 4;
    if (bVar3 == 0) {
      return 0;
    }
  }
LAB_1001b554:
  return (uint)bVar5 * -2 + 1;
}



/* ================================================================
 * Function: FUN_1001b5a0
 * Address:  1001b5a0
 * ================================================================ */

undefined4 * __cdecl FUN_1001b5a0(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_1001b757_caseD_2;
        case 3:
          goto switchD_1001b757_caseD_3;
        }
        goto switchD_1001b757_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_1001b757_caseD_0;
      case 1:
        goto switchD_1001b757_caseD_1;
      case 2:
        goto switchD_1001b757_caseD_2;
      case 3:
        goto switchD_1001b757_caseD_3;
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
              goto switchD_1001b757_caseD_2;
            case 3:
              goto switchD_1001b757_caseD_3;
            }
            goto switchD_1001b757_caseD_1;
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
              goto switchD_1001b757_caseD_2;
            case 3:
              goto switchD_1001b757_caseD_3;
            }
            goto switchD_1001b757_caseD_1;
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
              goto switchD_1001b757_caseD_2;
            case 3:
              goto switchD_1001b757_caseD_3;
            }
            goto switchD_1001b757_caseD_1;
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
switchD_1001b757_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_1001b757_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_1001b757_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_1001b757_caseD_0:
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
        goto switchD_1001b5d5_caseD_2;
      case 3:
        goto switchD_1001b5d5_caseD_3;
      }
      goto switchD_1001b5d5_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_1001b5d5_caseD_0;
    case 1:
      goto switchD_1001b5d5_caseD_1;
    case 2:
      goto switchD_1001b5d5_caseD_2;
    case 3:
      goto switchD_1001b5d5_caseD_3;
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
            goto switchD_1001b5d5_caseD_2;
          case 3:
            goto switchD_1001b5d5_caseD_3;
          }
          goto switchD_1001b5d5_caseD_1;
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
            goto switchD_1001b5d5_caseD_2;
          case 3:
            goto switchD_1001b5d5_caseD_3;
          }
          goto switchD_1001b5d5_caseD_1;
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
            goto switchD_1001b5d5_caseD_2;
          case 3:
            goto switchD_1001b5d5_caseD_3;
          }
          goto switchD_1001b5d5_caseD_1;
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
switchD_1001b5d5_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_1001b5d5_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_1001b5d5_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_1001b5d5_caseD_0:
  return param_1;
}



/* ================================================================
 * Function: FUN_1001b8d5
 * Address:  1001b8d5
 * ================================================================ */

int * __cdecl FUN_1001b8d5(int param_1,int param_2)

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
  puStack_c = &DAT_10021a88;
  puStack_10 = &LAB_1001b368;
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
      if (DAT_10027dc4 == 3) {
        if (puVar2 <= DAT_10027dbc) {
          FUN_1001b2e7(9);
          local_8 = 0;
          local_24 = FUN_1001a3da(puVar2);
          local_8 = 0xffffffff;
          FUN_1001b96e();
          _Size = puVar2;
          if (local_24 == (int *)0x0) goto LAB_1001b9c2;
LAB_1001b9b1:
          _memset(local_24,0,(size_t)_Size);
        }
LAB_1001b9bd:
        if (local_24 != (int *)0x0) {
          ExceptionList = local_14;
          return local_24;
        }
      }
      else {
        if ((DAT_10027dc4 != 2) || (DAT_10025a2c < puVar3)) goto LAB_1001b9bd;
        FUN_1001b2e7(9);
        local_8 = 1;
        local_24 = FUN_1001ae7d((uint)puVar3 >> 4);
        local_8 = 0xffffffff;
        FUN_1001b9f7();
        _Size = puVar3;
        if (local_24 != (int *)0x0) goto LAB_1001b9b1;
      }
LAB_1001b9c2:
      local_24 = HeapAlloc(DAT_10027dc0,8,(SIZE_T)puVar3);
    }
    if (local_24 != (int *)0x0) {
      ExceptionList = local_14;
      return local_24;
    }
    if (DAT_10026a78 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
    iVar1 = FUN_1001b440(puVar3);
    if (iVar1 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
  } while( true );
}



/* ================================================================
 * Function: FUN_1001b96e
 * Address:  1001b96e
 * ================================================================ */

void FUN_1001b96e(void)

{
  FUN_1001b348(9);
  return;
}



/* ================================================================
 * Function: FUN_1001b9f7
 * Address:  1001b9f7
 * ================================================================ */

void FUN_1001b9f7(void)

{
  FUN_1001b348(9);
  return;
}



/* ================================================================
 * Function: FUN_1001ba12
 * Address:  1001ba12
 * ================================================================ */

void FUN_1001ba12(void)

{
  FUN_10019929(10);
  FUN_1001e4f5((DWORD *)0x16);
                    /* WARNING: Subroutine does not return */
  __exit(3);
}



/* ================================================================
 * Function: FUN_1001ba29
 * Address:  1001ba29
 * ================================================================ */

uint __thiscall FUN_1001ba29(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  undefined2 in_FPUControlWord;
  undefined4 local_8;
  
  local_8 = CONCAT22((short)((uint)this >> 0x10),in_FPUControlWord);
  uVar1 = FUN_1001ba74(local_8);
  uVar1 = uVar1 & ~param_2 | param_1 & param_2;
  FUN_1001bb06(uVar1);
  return uVar1;
}



/* ================================================================
 * Function: FUN_1001ba5e
 * Address:  1001ba5e
 * ================================================================ */

void __thiscall FUN_1001ba5e(void *this,uint param_1,uint param_2)

{
  FUN_1001ba29(this,param_1,param_2 & 0xfff7ffff);
  return;
}



/* ================================================================
 * Function: FUN_1001ba74
 * Address:  1001ba74
 * ================================================================ */

uint __cdecl FUN_1001ba74(uint param_1)

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
 * Function: FUN_1001bb06
 * Address:  1001bb06
 * ================================================================ */

uint __cdecl FUN_1001bb06(uint param_1)

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
 * Function: FUN_1001bb8f
 * Address:  1001bb8f
 * ================================================================ */

uint __cdecl FUN_1001bb8f(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_10026aa4 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      return param_1 + 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_10026b64);
    bVar1 = DAT_10026b60 != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_10026b64);
      this = (void *)0x13;
      FUN_1001b2e7(0x13);
    }
    param_1 = FUN_1001bbfe(this,param_1);
    if (bVar1) {
      FUN_1001b348(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_10026b64);
    }
  }
  return param_1;
}



/* ================================================================
 * Function: FUN_1001bbfe
 * Address:  1001bbfe
 * ================================================================ */

uint __thiscall FUN_1001bbfe(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_10026aa4 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      uVar1 = param_1 + 0x20;
    }
  }
  else {
    iVar3 = 1;
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_1002369c < 2) {
        uVar2 = (byte)PTR_DAT_10023490[param_1 * 2] & 1;
      }
      else {
        uVar2 = FUN_1001781e(this,param_1,1);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_10023490[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_1001e6b4(DAT_10026aa4,0x100,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
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
 * Function: FUN_1001bcc9
 * Address:  1001bcc9
 * ================================================================ */

undefined4 __cdecl FUN_1001bcc9(int param_1,int param_2)

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
 * Function: FUN_1001bd12
 * Address:  1001bd12
 * ================================================================ */

void __cdecl FUN_1001bd12(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  
  puVar3 = (uint *)(param_1 + (param_2 / 0x20) * 4);
  iVar1 = FUN_1001e8d8(*puVar3,1 << (0x1fU - (char)(param_2 % 0x20) & 0x1f),puVar3);
  iVar2 = param_2 / 0x20 + -1;
  if (-1 < iVar2) {
    puVar3 = (uint *)(param_1 + iVar2 * 4);
    do {
      if (iVar1 == 0) {
        return;
      }
      iVar1 = FUN_1001e8d8(*puVar3,1,puVar3);
      iVar2 = iVar2 + -1;
      puVar3 = puVar3 + -1;
    } while (-1 < iVar2);
  }
  return;
}



/* ================================================================
 * Function: FUN_1001bd68
 * Address:  1001bd68
 * ================================================================ */

undefined4 __cdecl FUN_1001bd68(int param_1,int param_2)

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
     (iVar2 = FUN_1001bcc9(param_1,param_2 + 1), iVar2 == 0)) {
    local_8 = FUN_1001bd12(param_1,param_2 + -1);
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
 * Function: FUN_1001bdf4
 * Address:  1001bdf4
 * ================================================================ */

void __cdecl FUN_1001bdf4(int param_1,undefined4 *param_2)

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
 * Function: FUN_1001be0f
 * Address:  1001be0f
 * ================================================================ */

void __cdecl FUN_1001be0f(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ================================================================
 * Function: FUN_1001be1b
 * Address:  1001be1b
 * ================================================================ */

undefined4 __cdecl FUN_1001be1b(int *param_1)

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
 * Function: FUN_1001be36
 * Address:  1001be36
 * ================================================================ */

void __cdecl FUN_1001be36(uint *param_1,uint param_2)

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
 * Function: FUN_1001bec3
 * Address:  1001bec3
 * ================================================================ */

undefined4 __cdecl FUN_1001bec3(ushort *param_1,uint *param_2,int *param_3)

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
    iVar2 = FUN_1001be1b((int *)&local_10);
    if (iVar2 != 0) {
LAB_1001bfef:
      uVar5 = 0;
      goto LAB_1001bff1;
    }
    FUN_1001be0f(&local_10);
  }
  else {
    FUN_1001bdf4((int)local_1c,&local_10);
    iVar2 = FUN_1001bd68((int)&local_10,param_3[2]);
    if (iVar2 != 0) {
      iVar4 = uVar3 - 0x3ffe;
    }
    iVar2 = param_3[1];
    if (iVar4 < iVar2 - param_3[2]) {
      FUN_1001be0f(&local_10);
    }
    else {
      if (iVar2 < iVar4) {
        if (*param_3 <= iVar4) {
          FUN_1001be0f(&local_10);
          local_10 = local_10 | 0x80000000;
          FUN_1001be36(&local_10,param_3[3]);
          iVar4 = param_3[5] + *param_3;
          uVar5 = 1;
          goto LAB_1001bff1;
        }
        local_10 = local_10 & 0x7fffffff;
        iVar4 = param_3[5] + iVar4;
        FUN_1001be36(&local_10,param_3[3]);
        goto LAB_1001bfef;
      }
      FUN_1001bdf4((int)&local_10,local_1c);
      FUN_1001be36(&local_10,iVar2 - iVar4);
      FUN_1001bd68((int)&local_10,param_3[2]);
      FUN_1001be36(&local_10,param_3[3] + 1);
    }
  }
  iVar4 = 0;
  uVar5 = 2;
LAB_1001bff1:
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
 * Function: FUN_1001c02f
 * Address:  1001c02f
 * ================================================================ */

void __cdecl FUN_1001c02f(ushort *param_1,uint *param_2)

{
  FUN_1001bec3(param_1,param_2,(int *)&DAT_10025b78);
  return;
}



/* ================================================================
 * Function: FUN_1001c045
 * Address:  1001c045
 * ================================================================ */

void __cdecl FUN_1001c045(ushort *param_1,uint *param_2)

{
  FUN_1001bec3(param_1,param_2,(int *)&DAT_10025b90);
  return;
}



/* ================================================================
 * Function: FUN_1001c05b
 * Address:  1001c05b
 * ================================================================ */

void __thiscall FUN_1001c05b(void *this,uint *param_1,byte *param_2)

{
  ushort local_10 [6];
  
  FUN_1001ea79(this,local_10,(int *)&param_2,param_2,0,0,0,0);
  FUN_1001c02f(local_10,param_1);
  return;
}



/* ================================================================
 * Function: FUN_1001c088
 * Address:  1001c088
 * ================================================================ */

void __thiscall FUN_1001c088(void *this,uint *param_1,byte *param_2)

{
  ushort local_10 [6];
  
  FUN_1001ea79(this,local_10,(int *)&param_2,param_2,0,0,0,0);
  FUN_1001c045(local_10,param_1);
  return;
}



/* ================================================================
 * Function: FUN_1001c0b5
 * Address:  1001c0b5
 * ================================================================ */

void __cdecl FUN_1001c0b5(char *param_1,int param_2,int param_3)

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
    FUN_1001b5a0((undefined4 *)pcVar1,(undefined4 *)_Str,sVar3 + 1);
  }
  return;
}



/* ================================================================
 * Function: FUN_1001c12c
 * Address:  1001c12c
 * ================================================================ */

int * __cdecl FUN_1001c12c(undefined4 param_1,undefined4 param_2,int *param_3,uint *param_4)

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
  FUN_1001c188(&local_10,&param_1);
  iVar3 = FUN_1001ef4a(local_10,uStack_c,CONCAT22(uVar4,uStack_8),0x11,0,&local_2c);
  puVar2 = param_4;
  piVar1 = param_3;
  param_3[2] = iVar3;
  *param_3 = (int)local_2a;
  param_3[1] = (int)local_2c;
  FUN_10015cc0(param_4,local_28);
  piVar1[3] = (int)puVar2;
  return piVar1;
}



/* ================================================================
 * Function: FUN_1001c188
 * Address:  1001c188
 * ================================================================ */

void __cdecl FUN_1001c188(uint *param_1,uint *param_2)

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
 * Function: __fptrap
 * Address:  1001c23e
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
 * Function: FUN_1001c247
 * Address:  1001c247
 * ================================================================ */

BOOL __cdecl
FUN_1001c247(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
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
  puStack_c = &DAT_10021aa8;
  puStack_10 = &LAB_1001b368;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc8;
  iVar3 = DAT_10026a84;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc8;
  if (DAT_10026a84 == 0) {
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
  DAT_10026a84 = iVar3;
  if (DAT_10026a84 != 2) {
    if (DAT_10026a84 == 1) {
      if (param_5 == 0) {
        param_5 = DAT_10026ab4;
      }
      iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,
                                  (LPWSTR)0x0,0);
      if (iVar3 != 0) {
        local_8 = 0;
        FUN_1001e3c0();
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
    param_6 = DAT_10026aa4;
  }
  BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return BVar2;
}



/* ================================================================
 * Function: FUN_1001c390
 * Address:  1001c390
 * ================================================================ */

DWORD __cdecl FUN_1001c390(uint param_1,LONG param_2,DWORD param_3)

{
  DWORD DVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_10027ee0) &&
     ((*(byte *)((&DAT_10027de0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1001f29e(param_1);
    DVar1 = FUN_1001c3f5(param_1,param_2,param_3);
    FUN_1001f2fd(param_1);
    return DVar1;
  }
  pDVar2 = FUN_1001ca48();
  *pDVar2 = 9;
  pDVar2 = FUN_1001ca51();
  *pDVar2 = 0;
  return 0xffffffff;
}



/* ================================================================
 * Function: FUN_1001c3f5
 * Address:  1001c3f5
 * ================================================================ */

DWORD __cdecl FUN_1001c3f5(uint param_1,LONG param_2,DWORD param_3)

{
  byte *pbVar1;
  HANDLE hFile;
  DWORD *pDVar2;
  DWORD DVar3;
  uint uVar4;
  
  hFile = (HANDLE)FUN_1001f25c(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    pDVar2 = FUN_1001ca48();
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
      pbVar1 = (byte *)((&DAT_10027de0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24);
      *pbVar1 = *pbVar1 & 0xfd;
      return DVar3;
    }
    FUN_1001c9d5(uVar4);
  }
  return 0xffffffff;
}



/* ================================================================
 * Function: FUN_1001c468
 * Address:  1001c468
 * ================================================================ */

int __cdecl FUN_1001c468(uint param_1,char *param_2,uint param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_10027ee0) &&
     ((*(byte *)((&DAT_10027de0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1001f29e(param_1);
    iVar1 = FUN_1001c4cd(param_1,param_2,param_3);
    FUN_1001f2fd(param_1);
    return iVar1;
  }
  pDVar2 = FUN_1001ca48();
  *pDVar2 = 9;
  pDVar2 = FUN_1001ca51();
  *pDVar2 = 0;
  return -1;
}



/* ================================================================
 * Function: FUN_1001c4cd
 * Address:  1001c4cd
 * ================================================================ */

int __cdecl FUN_1001c4cd(DWORD param_1,char *param_2,uint param_3)

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
LAB_1001c4e6:
    iVar4 = 0;
  }
  else {
    piVar1 = &DAT_10027de0 + ((int)param_1 >> 5);
    iVar4 = (param_1 & 0x1f) * 0x24;
    if ((*(byte *)(*piVar1 + 4 + iVar4) & 0x20) != 0) {
      FUN_1001c3f5(param_1,0,2);
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
LAB_1001c5b5:
      if (local_c != 0) {
        return local_c - local_14;
      }
      if (param_1 == 0) goto LAB_1001c627;
      if (param_1 == 5) {
        pDVar7 = FUN_1001ca48();
        *pDVar7 = 9;
        pDVar7 = FUN_1001ca51();
        *pDVar7 = 5;
      }
      else {
        FUN_1001c9d5(param_1);
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
            goto LAB_1001c5b5;
          }
          local_c = local_c + local_10;
          if (((int)local_10 < (int)pcVar5 - (int)local_418) ||
             (param_3 <= (uint)((int)local_8 - (int)param_2))) goto LAB_1001c5b5;
        } while( true );
      }
LAB_1001c627:
      if (((*(byte *)(*piVar1 + 4 + iVar4) & 0x40) != 0) && (*param_2 == '\x1a')) goto LAB_1001c4e6;
      pDVar7 = FUN_1001ca48();
      *pDVar7 = 0x1c;
      pDVar7 = FUN_1001ca51();
      *pDVar7 = 0;
    }
    iVar4 = -1;
  }
  return iVar4;
}



/* ================================================================
 * Function: FUN_1001c658
 * Address:  1001c658
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1001c658(undefined4 *param_1)

{
  void *pvVar1;
  
  _DAT_10026a88 = _DAT_10026a88 + 1;
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
 * Function: FUN_1001c69c
 * Address:  1001c69c
 * ================================================================ */

byte __cdecl FUN_1001c69c(uint param_1)

{
  if (DAT_10027ee0 <= param_1) {
    return 0;
  }
  return *(byte *)((&DAT_10027de0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0x40;
}



/* ================================================================
 * Function: FUN_1001c781
 * Address:  1001c781
 * ================================================================ */

void __cdecl FUN_1001c781(uint param_1)

{
  if ((0x10025ba7 < param_1) && (param_1 < 0x10025e09)) {
    FUN_1001b2e7(((int)(param_1 + 0xeffda458) >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



/* ================================================================
 * Function: FUN_1001c7b0
 * Address:  1001c7b0
 * ================================================================ */

void __cdecl FUN_1001c7b0(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_1001b2e7(param_1 + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



/* ================================================================
 * Function: FUN_1001c7d3
 * Address:  1001c7d3
 * ================================================================ */

void __cdecl FUN_1001c7d3(uint param_1)

{
  if ((0x10025ba7 < param_1) && (param_1 < 0x10025e09)) {
    FUN_1001b348(((int)(param_1 + 0xeffda458) >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



/* ================================================================
 * Function: FUN_1001c802
 * Address:  1001c802
 * ================================================================ */

void __cdecl FUN_1001c802(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_1001b348(param_1 + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



/* ================================================================
 * Function: FUN_1001c825
 * Address:  1001c825
 * ================================================================ */

int __cdecl FUN_1001c825(LPSTR param_1,WCHAR param_2)

{
  int iVar1;
  bool bVar2;
  
  InterlockedIncrement((LONG *)&DAT_10026b64);
  bVar2 = DAT_10026b60 != 0;
  if (bVar2) {
    InterlockedDecrement((LONG *)&DAT_10026b64);
    FUN_1001b2e7(0x13);
  }
  iVar1 = FUN_1001c87e(param_1,param_2);
  if (bVar2) {
    FUN_1001b348(0x13);
  }
  else {
    InterlockedDecrement((LONG *)&DAT_10026b64);
  }
  return iVar1;
}



/* ================================================================
 * Function: FUN_1001c87e
 * Address:  1001c87e
 * ================================================================ */

int __cdecl FUN_1001c87e(LPSTR param_1,WCHAR param_2)

{
  LPSTR lpMultiByteStr;
  int iVar1;
  DWORD *pDVar2;
  
  lpMultiByteStr = param_1;
  if (param_1 == (LPSTR)0x0) {
    return 0;
  }
  if (DAT_10026aa4 == 0) {
    if ((ushort)param_2 < 0x100) {
      *param_1 = (CHAR)param_2;
      return 1;
    }
  }
  else {
    param_1 = (LPSTR)0x0;
    iVar1 = WideCharToMultiByte(DAT_10026ab4,0x220,&param_2,1,lpMultiByteStr,DAT_1002369c,
                                (LPCSTR)0x0,(LPBOOL)&param_1);
    if ((iVar1 != 0) && (param_1 == (LPSTR)0x0)) {
      return iVar1;
    }
  }
  pDVar2 = FUN_1001ca48();
  *pDVar2 = 0x2a;
  return -1;
}



/* ================================================================
 * Function: __aulldiv
 * Address:  1001c8f0
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
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar6;
  
  uVar9 = param_1;
  uVar6 = param_4;
  uVar7 = param_2;
  uVar3 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar5 = uVar6 >> 1;
      uVar3 = (uint)(CONCAT14((uVar6 & 1) != 0,uVar3) >> 1);
      uVar8 = uVar7 >> 1;
      uVar9 = (uint)(CONCAT14((uVar7 & 1) != 0,uVar9) >> 1);
      uVar6 = uVar5;
      uVar7 = uVar8;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar8,uVar9) / (ulonglong)uVar3;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar9 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar9)) ||
       ((param_2 <= uVar9 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar3,iVar4);
}



/* ================================================================
 * Function: __aullrem
 * Address:  1001c960
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
  
  uVar4 = param_1;
  uVar9 = param_4;
  uVar10 = param_2;
  uVar3 = param_3;
  if (param_4 == 0) {
    iVar6 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) %
                 (ulonglong)param_3);
    iVar7 = 0;
  }
  else {
    do {
      uVar5 = uVar9 >> 1;
      uVar3 = (uint)(CONCAT14((uVar9 & 1) != 0,uVar3) >> 1);
      uVar8 = uVar10 >> 1;
      uVar4 = (uint)(CONCAT14((uVar10 & 1) != 0,uVar4) >> 1);
      uVar9 = uVar5;
      uVar10 = uVar8;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar8,uVar4) / (ulonglong)uVar3;
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
 * Function: FUN_1001c9d5
 * Address:  1001c9d5
 * ================================================================ */

void __cdecl FUN_1001c9d5(uint param_1)

{
  DWORD *pDVar1;
  uint *puVar2;
  int iVar3;
  
  pDVar1 = FUN_1001ca51();
  iVar3 = 0;
  *pDVar1 = param_1;
  puVar2 = &DAT_10025e30;
  do {
    if (param_1 == *puVar2) {
      pDVar1 = FUN_1001ca48();
      *pDVar1 = *(DWORD *)(iVar3 * 8 + 0x10025e34);
      return;
    }
    puVar2 = puVar2 + 2;
    iVar3 = iVar3 + 1;
  } while ((int)puVar2 < 0x10025f98);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    pDVar1 = FUN_1001ca48();
    *pDVar1 = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    pDVar1 = FUN_1001ca48();
    *pDVar1 = 8;
    return;
  }
  pDVar1 = FUN_1001ca48();
  *pDVar1 = 0x16;
  return;
}



/* ================================================================
 * Function: FUN_1001ca48
 * Address:  1001ca48
 * ================================================================ */

DWORD * FUN_1001ca48(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_100171c1();
  return pDVar1 + 2;
}



/* ================================================================
 * Function: FUN_1001ca51
 * Address:  1001ca51
 * ================================================================ */

DWORD * FUN_1001ca51(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_100171c1();
  return pDVar1 + 3;
}



/* ================================================================
 * Function: FUN_1001ca5a
 * Address:  1001ca5a
 * ================================================================ */

undefined4 FUN_1001ca5a(void)

{
  return 0;
}



/* ================================================================
 * Function: __trandisp1
 * Address:  1001ca60
 * ================================================================ */

/* Library Function - Single Match
    __trandisp1
   
   Library: Visual Studio */

void __fastcall __trandisp1(undefined4 param_1,int param_2)

{
  float10 fVar1;
  byte bVar2;
  undefined2 uVar3;
  int unaff_EBP;
  float10 in_ST0;
  
  if (*(char *)(param_2 + 0xe) == '\x05') {
    uVar3 = (undefined2)
            CONCAT31((uint3)((byte)((ushort)*(undefined2 *)(unaff_EBP + -0xa4) >> 8) & 0xfe | 2),
                     0x3f);
  }
  else {
    uVar3 = 0x133f;
  }
  *(undefined2 *)(unaff_EBP + -0xa2) = uVar3;
  fVar1 = (float10)0;
  *(int *)(unaff_EBP + -0x94) = param_2;
  *(ushort *)(unaff_EBP + -0xa0) =
       (ushort)NAN(in_ST0) << 8 | (ushort)(in_ST0 < fVar1) << 9 | (ushort)(in_ST0 != fVar1) << 10 |
       (ushort)(in_ST0 == fVar1) << 0xe;
  *(undefined1 *)(unaff_EBP + -0x90) = 0;
  bVar2 = (char)(*(char *)(unaff_EBP + -0x9f) << 1) >> 1;
                    /* WARNING: Could not recover jumptable at 0x1001cac5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + (char)(&DAT_10025fbc)[(byte)((bVar2 & 7) << 1 | (char)bVar2 < '\0')] + 0x10
              ))();
  return;
}



/* ================================================================
 * Function: __trandisp2
 * Address:  1001cac7
 * ================================================================ */

/* Library Function - Single Match
    __trandisp2
   
   Libraries: Visual Studio 1998, Visual Studio 2003, Visual Studio 2005, Visual Studio 2008 */

void __fastcall __trandisp2(undefined4 param_1,int param_2)

{
  float10 fVar1;
  char cVar2;
  byte bVar3;
  undefined2 uVar4;
  int unaff_EBP;
  float10 in_ST0;
  float10 in_ST1;
  
  if (*(char *)(param_2 + 0xe) == '\x05') {
    uVar4 = (undefined2)
            CONCAT31((uint3)((byte)((ushort)*(undefined2 *)(unaff_EBP + -0xa4) >> 8) & 0xfe | 2),
                     0x3f);
  }
  else {
    uVar4 = 0x133f;
  }
  *(undefined2 *)(unaff_EBP + -0xa2) = uVar4;
  fVar1 = (float10)0;
  *(int *)(unaff_EBP + -0x94) = param_2;
  *(ushort *)(unaff_EBP + -0xa0) =
       (ushort)NAN(in_ST0) << 8 | (ushort)(in_ST0 < fVar1) << 9 | (ushort)(in_ST0 != fVar1) << 10 |
       (ushort)(in_ST0 == fVar1) << 0xe;
  *(undefined1 *)(unaff_EBP + -0x90) = 0;
  fVar1 = (float10)0;
  *(ushort *)(unaff_EBP + -0xa0) =
       (ushort)NAN(in_ST1) << 8 | (ushort)(in_ST1 < fVar1) << 9 | (ushort)(in_ST1 != fVar1) << 10 |
       (ushort)(in_ST1 == fVar1) << 0xe;
  bVar3 = (char)(*(char *)(unaff_EBP + -0x9f) << 1) >> 1;
  cVar2 = (char)(*(char *)(unaff_EBP + -0x9f) << 1) >> 1;
                    /* WARNING: Could not recover jumptable at 0x1001cb51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + (char)((&DAT_10025fbc)[(byte)(cVar2 << 1 | cVar2 < '\0') & 0xf] |
                               (&DAT_10025fbc)[(byte)((bVar3 & 7) << 1 | (char)bVar3 < '\0')] << 2)
              + 0x10))();
  return;
}



/* ================================================================
 * Function: FUN_1001cc2a
 * Address:  1001cc2a
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1001cc2a(int param_1,int param_2,double param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  int iVar3;
  
  dVar1 = (double)CONCAT44(param_2,param_1);
  if ((double)CONCAT44(param_2,param_1) < _DAT_100211b0) {
    dVar1 = -dVar1;
  }
  dVar2 = _DAT_10023790;
  if (param_3._4_4_ == 0x7ff00000) {
    if (param_3._0_4_ != 0) {
LAB_1001ccb5:
      if (param_2 == 0x7ff00000) {
        if (param_1 != 0) {
          return 0;
        }
        if (_DAT_100211b0 < param_3) goto LAB_1001cd50;
        if (param_3 < _DAT_100211b0) goto LAB_1001cce7;
      }
      else {
        if (param_2 != -0x100000) {
          return 0;
        }
        if (param_1 != 0) {
          return 0;
        }
        iVar3 = FUN_1001cd5a(param_3);
        if (_DAT_100211b0 < param_3) {
          dVar2 = _DAT_10023790;
          if (iVar3 == 1) {
            dVar2 = -_DAT_10023790;
          }
          goto LAB_1001cd50;
        }
        if (param_3 < _DAT_100211b0) {
          dVar2 = _DAT_100237b0;
          if (iVar3 != 1) {
            dVar2 = 0.0;
          }
          goto LAB_1001cd50;
        }
      }
      dVar2 = 1.0;
      goto LAB_1001cd50;
    }
    if (_DAT_10021300 < dVar1) goto LAB_1001cd50;
    if (_DAT_10021300 <= dVar1) {
LAB_1001cc7a:
      *param_4 = _DAT_10023798;
      return 1;
    }
  }
  else {
    if (param_3 != -INFINITY) goto LAB_1001ccb5;
    if (dVar1 <= _DAT_10021300) {
      if (_DAT_10021300 <= dVar1) goto LAB_1001cc7a;
      goto LAB_1001cd50;
    }
  }
LAB_1001cce7:
  dVar2 = 0.0;
LAB_1001cd50:
  *param_4 = dVar2;
  return 0;
}



/* ================================================================
 * Function: FUN_1001cd5a
 * Address:  1001cd5a
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1001cd5a(double param_1)

{
  double dVar1;
  uint uVar2;
  float10 fVar3;
  undefined4 uVar4;
  
  uVar2 = FUN_1001f4e9(SUB84(param_1,0),(uint)((ulonglong)param_1 >> 0x20));
  if ((uVar2 & 0x90) == 0) {
    fVar3 = __frnd(param_1);
    if ((double)fVar3 == param_1) {
      dVar1 = param_1 / _DAT_100212f0;
      fVar3 = __frnd(dVar1);
      if (fVar3 == (float10)dVar1) {
        uVar4 = 2;
      }
      else {
        uVar4 = 1;
      }
      return uVar4;
    }
  }
  return 0;
}



/* ================================================================
 * Function: FUN_1001db4b
 * Address:  1001db4b
 * ================================================================ */

void __cdecl FUN_1001db4b(uint param_1,int *param_2,ushort *param_3)

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
LAB_1001db90:
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
    if (iVar2 == 5) goto LAB_1001db90;
    if (iVar2 == 7) {
      *param_2 = 1;
      goto LAB_1001dbe6;
    }
    if (iVar2 != 8) goto LAB_1001dbe6;
    uVar3 = 0x10;
  }
  bVar1 = FUN_10018595(uVar3,(double *)(param_2 + 6),(uint)param_3);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    if (((param_1 == 0x10) || (param_1 == 0x16)) || (param_1 == 0x1d)) {
      local_34 = *(undefined8 *)(param_2 + 4);
      local_24 = local_24 & 0xffffffe3 | 3;
    }
    else {
      local_24 = local_24 & 0xfffffffe;
    }
    FUN_100182e2(local_5c,(uint *)&param_3,uVar3,param_1,(undefined8 *)(param_2 + 2),
                 (undefined8 *)(param_2 + 6));
  }
LAB_1001dbe6:
  FUN_10018a0f();
  if (((*param_2 != 8) && (DAT_10025f98 == 0)) && (iVar2 = FUN_1001ca5a(), iVar2 != 0)) {
    return;
  }
  FUN_10018834(*param_2);
  return;
}



/* ================================================================
 * Function: FUN_1001dc1b
 * Address:  1001dc1b
 * ================================================================ */

undefined4 __cdecl FUN_1001dc1b(int param_1)

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
  
  FUN_1001b2e7(0x19);
  CodePage = FUN_1001ddc8(param_1);
  if (CodePage != DAT_10026b68) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_10026138;
LAB_1001dc58:
      if (*pUVar5 != CodePage) goto code_r0x1001dc5c;
      local_8 = 0;
      puVar15 = &DAT_10026c80;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x10026148);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_10026130)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_10026c80 + uVar8 + 1);
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
      DAT_10026b7c = 1;
      DAT_10026b68 = CodePage;
      DAT_10026d84 = FUN_1001de12(CodePage);
      DAT_10026b70 = *(undefined4 *)(iVar12 + 0x1002613c);
      DAT_10026b74 = *(undefined4 *)(iVar12 + 0x10026140);
      DAT_10026b78 = *(undefined4 *)(iVar12 + 0x10026144);
      goto LAB_1001ddac;
    }
    goto LAB_1001dda7;
  }
  goto LAB_1001dc42;
code_r0x1001dc5c:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if (0x10026227 < (int)pUVar5) goto code_r0x1001dc67;
  goto LAB_1001dc58;
code_r0x1001dc67:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_10026d84 = 0;
    puVar15 = &DAT_10026c80;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      DAT_10026b7c = 0;
      DAT_10026b68 = CodePage;
    }
    else {
      DAT_10026b68 = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_10026c80 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_10026c80 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_10026d84 = FUN_1001de12(CodePage);
      DAT_10026b7c = 1;
    }
    DAT_10026b70 = 0;
    DAT_10026b74 = 0;
    DAT_10026b78 = 0;
  }
  else {
    if (DAT_10026a8c == 0) {
      uVar14 = 0xffffffff;
      goto LAB_1001ddb9;
    }
LAB_1001dda7:
    FUN_1001de45();
  }
LAB_1001ddac:
  FUN_1001de6e();
LAB_1001dc42:
  uVar14 = 0;
LAB_1001ddb9:
  FUN_1001b348(0x19);
  return uVar14;
}



/* ================================================================
 * Function: FUN_1001ddc8
 * Address:  1001ddc8
 * ================================================================ */

int __cdecl FUN_1001ddc8(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_10026a8c = 1;
                    /* WARNING: Could not recover jumptable at 0x1001dde2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_10026a8c = 1;
                    /* WARNING: Could not recover jumptable at 0x1001ddf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_10026ab4;
  }
  DAT_10026a8c = (uint)bVar2;
  return param_1;
}



/* ================================================================
 * Function: FUN_1001de12
 * Address:  1001de12
 * ================================================================ */

undefined4 __cdecl FUN_1001de12(int param_1)

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
 * Function: FUN_1001de45
 * Address:  1001de45
 * ================================================================ */

void FUN_1001de45(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_10026c80;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_10026b68 = 0;
  DAT_10026b7c = 0;
  DAT_10026d84 = 0;
  DAT_10026b70 = 0;
  DAT_10026b74 = 0;
  DAT_10026b78 = 0;
  return;
}



/* ================================================================
 * Function: FUN_1001de6e
 * Address:  1001de6e
 * ================================================================ */

void FUN_1001de6e(void)

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
  
  BVar2 = GetCPInfo(DAT_10026b68,&local_18);
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
    FUN_1001c247(1,local_118,0x100,local_518,DAT_10026b68,DAT_10026d84,0);
    FUN_1001e6b4(DAT_10026d84,0x100,local_118,0x100,local_218,0x100,DAT_10026b68,0);
    FUN_1001e6b4(DAT_10026d84,0x200,local_118,0x100,local_318,0x100,DAT_10026b68,0);
    uVar3 = 0;
    puVar7 = local_518;
    do {
      if ((*puVar7 & 1) == 0) {
        if ((*puVar7 & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_10026c80 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          uVar8 = *(undefined1 *)((int)local_318 + uVar3);
          goto LAB_1001df7a;
        }
        (&DAT_10026b80)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_10026c80 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        uVar8 = *(undefined1 *)((int)local_218 + uVar3);
LAB_1001df7a:
        (&DAT_10026b80)[uVar3] = uVar8;
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
          pbVar1 = (byte *)((int)&DAT_10026c80 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar4 = (char)uVar3 + -0x20;
          goto LAB_1001dfc4;
        }
        (&DAT_10026b80)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_10026c80 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar4 = (char)uVar3 + ' ';
LAB_1001dfc4:
        (&DAT_10026b80)[uVar3] = cVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}



/* ================================================================
 * Function: FUN_1001dff3
 * Address:  1001dff3
 * ================================================================ */

void FUN_1001dff3(void)

{
  if (DAT_10027ee8 == 0) {
    FUN_1001dc1b(-3);
    DAT_10027ee8 = 1;
  }
  return;
}



/* ================================================================
 * Function: FUN_1001e00f
 * Address:  1001e00f
 * ================================================================ */

void __thiscall FUN_1001e00f(void *this,byte *param_1,int *param_2,void *param_3)

{
  FUN_1001e026(this,param_1,param_2,param_3,0);
  return;
}



/* ================================================================
 * Function: FUN_1001e026
 * Address:  1001e026
 * ================================================================ */

void * __thiscall FUN_1001e026(void *this,byte *param_1,int *param_2,void *param_3,uint param_4)

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
    if (DAT_1002369c < 2) {
      uVar3 = (byte)PTR_DAT_10023490[(uint)bVar7 * 2] & 8;
      this = PTR_DAT_10023490;
    }
    else {
      puVar8 = (undefined *)0x8;
      uVar3 = FUN_1001781e(this,(uint)bVar7,8);
      this = puVar8;
    }
    if (uVar3 == 0) break;
    bVar7 = *local_8;
    pbVar1 = local_8;
  }
  if (bVar7 == 0x2d) {
    param_4 = param_4 | 2;
LAB_1001e081:
    bVar7 = *local_8;
    local_8 = pbVar1 + 2;
  }
  else if (bVar7 == 0x2b) goto LAB_1001e081;
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
      goto LAB_1001e0eb;
    }
    if ((*local_8 != 0x78) && (*local_8 != 0x58)) {
      param_3 = (void *)0x8;
      goto LAB_1001e0eb;
    }
    param_3 = (void *)0x10;
  }
  if (((param_3 == (void *)0x10) && (bVar7 == 0x30)) && ((*local_8 == 0x78 || (*local_8 == 0x58))))
  {
    bVar7 = local_8[1];
    local_8 = local_8 + 2;
  }
LAB_1001e0eb:
  pvVar4 = (void *)(0xffffffff / ZEXT48(param_3));
  do {
    uVar3 = (uint)bVar7;
    if (DAT_1002369c < 2) {
      uVar5 = (byte)PTR_DAT_10023490[uVar3 * 2] & 4;
    }
    else {
      pvVar2 = (void *)0x4;
      uVar5 = FUN_1001781e(this_00,uVar3,4);
      this_00 = pvVar2;
    }
    if (uVar5 == 0) {
      if (DAT_1002369c < 2) {
        uVar3 = *(ushort *)(PTR_DAT_10023490 + uVar3 * 2) & 0x103;
      }
      else {
        uVar3 = FUN_1001781e(this_00,uVar3,0x103);
      }
      if (uVar3 == 0) {
LAB_1001e197:
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
          pDVar6 = FUN_1001ca48();
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
      uVar3 = FUN_1001f57b((int)(char)bVar7);
      this_00 = (void *)(uVar3 - 0x37);
    }
    else {
      this_00 = (void *)((char)bVar7 + -0x30);
    }
    if (param_3 <= this_00) goto LAB_1001e197;
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
 * Address:  1001e240
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
 * Address:  1001e300
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
LAB_1001e373:
        return _Str + -1;
      }
      if (*pcVar10 != pcVar8[2]) break;
      pcVar1 = pcVar8 + 3;
      if (*pcVar1 == '\0') goto LAB_1001e373;
      pcVar2 = pcVar10 + 1;
      pcVar8 = pcVar8 + 2;
      pcVar10 = pcVar10 + 2;
    } while (*pcVar1 == *pcVar2);
  } while( true );
}



/* ================================================================
 * Function: _strncmp
 * Address:  1001e380
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
 * Function: FUN_1001e3c0
 * Address:  1001e3c0
 * ================================================================ */

/* WARNING: Unable to track spacebase fully for stack */

void FUN_1001e3c0(void)

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
 * Function: FUN_1001e3ef
 * Address:  1001e3ef
 * ================================================================ */

int __cdecl FUN_1001e3ef(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_10026a90 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_10026a90 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_10026a90 != (FARPROC)0x0) {
        DAT_10026a94 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_10026a98 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_1001e43e;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_1001e43e:
    if (DAT_10026a94 != (FARPROC)0x0) {
      iVar1 = (*DAT_10026a94)();
      if ((iVar1 != 0) && (DAT_10026a98 != (FARPROC)0x0)) {
        iVar1 = (*DAT_10026a98)(iVar1);
      }
    }
    iVar1 = (*DAT_10026a90)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}



/* ================================================================
 * Function: FUN_1001e478
 * Address:  1001e478
 * ================================================================ */

int __cdecl FUN_1001e478(uchar *param_1)

{
  int iVar1;
  size_t _MaxCount;
  size_t sVar2;
  int *piVar3;
  
  if (((DAT_10027ee4 != 0) &&
      ((DAT_10026824 != (int *)0x0 ||
       (((DAT_1002682c != 0 && (iVar1 = FUN_1001f6f5(), iVar1 == 0)) && (DAT_10026824 != (int *)0x0)
        ))))) && (piVar3 = DAT_10026824, param_1 != (uchar *)0x0)) {
    _MaxCount = _strlen((char *)param_1);
    for (; (char *)*piVar3 != (char *)0x0; piVar3 = piVar3 + 1) {
      sVar2 = _strlen((char *)*piVar3);
      if (((_MaxCount < sVar2) && (((uchar *)*piVar3)[_MaxCount] == '=')) &&
         (iVar1 = __mbsnbicoll((uchar *)*piVar3,param_1,_MaxCount), iVar1 == 0)) {
        return *piVar3 + 1 + _MaxCount;
      }
    }
  }
  return 0;
}



/* ================================================================
 * Function: FUN_1001e4f5
 * Address:  1001e4f5
 * ================================================================ */

undefined4 __cdecl FUN_1001e4f5(DWORD *param_1)

{
  bool bVar1;
  DWORD *pDVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined4 *puVar7;
  DWORD local_10;
  DWORD local_c;
  
  bVar1 = false;
  if (param_1 == (DWORD *)0x2) {
    puVar7 = &DAT_10026abc;
    pcVar6 = DAT_10026abc;
LAB_1001e57b:
    bVar1 = true;
    FUN_1001b2e7(1);
    pDVar2 = param_1;
  }
  else {
    if (((param_1 != (DWORD *)0x4) && (param_1 != (DWORD *)0x8)) && (param_1 != (DWORD *)0xb)) {
      if (param_1 == (DWORD *)0xf) {
        puVar7 = &DAT_10026ac8;
        pcVar6 = DAT_10026ac8;
      }
      else if (param_1 == (DWORD *)0x15) {
        puVar7 = &DAT_10026ac0;
        pcVar6 = DAT_10026ac0;
      }
      else {
        if (param_1 != (DWORD *)0x16) {
          return 0xffffffff;
        }
        puVar7 = &DAT_10026ac4;
        pcVar6 = DAT_10026ac4;
      }
      goto LAB_1001e57b;
    }
    pDVar2 = FUN_100171c1();
    uVar3 = FUN_1001e677((int)param_1,pDVar2[0x14]);
    puVar7 = (undefined4 *)(uVar3 + 8);
    pcVar6 = (code *)*puVar7;
  }
  if (pcVar6 == (code *)0x1) {
    if (!bVar1) {
      return 0;
    }
    FUN_1001b348(1);
    return 0;
  }
  if (pcVar6 == (code *)0x0) {
    if (bVar1) {
      FUN_1001b348(1);
    }
                    /* WARNING: Subroutine does not return */
    __exit(3);
  }
  if (((param_1 == (DWORD *)0x8) || (param_1 == (DWORD *)0xb)) || (param_1 == (DWORD *)0x4)) {
    local_c = pDVar2[0x15];
    pDVar2[0x15] = 0;
    if (param_1 == (DWORD *)0x8) {
      local_10 = pDVar2[0x16];
      pDVar2[0x16] = 0x8c;
      goto LAB_1001e5ef;
    }
  }
  else {
LAB_1001e5ef:
    if (param_1 == (DWORD *)0x8) {
      if (DAT_10025b68 < DAT_10025b6c + DAT_10025b68) {
        iVar4 = DAT_10025b68 * 0xc;
        iVar5 = DAT_10025b68;
        do {
          iVar4 = iVar4 + 0xc;
          *(undefined4 *)((pDVar2[0x14] - 4) + iVar4) = 0;
          iVar5 = iVar5 + 1;
        } while (iVar5 < DAT_10025b6c + DAT_10025b68);
      }
      goto LAB_1001e62d;
    }
  }
  *puVar7 = 0;
LAB_1001e62d:
  if (bVar1) {
    FUN_1001b348(1);
  }
  if (param_1 == (DWORD *)0x8) {
    (*pcVar6)(8,pDVar2[0x16]);
  }
  else {
    (*pcVar6)(param_1);
    if ((param_1 != (DWORD *)0xb) && (param_1 != (DWORD *)0x4)) {
      return 0;
    }
  }
  pDVar2[0x15] = local_c;
  if (param_1 == (DWORD *)0x8) {
    pDVar2[0x16] = local_10;
  }
  return 0;
}



/* ================================================================
 * Function: FUN_1001e677
 * Address:  1001e677
 * ================================================================ */

uint __cdecl FUN_1001e677(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_2;
  if (*(int *)(param_2 + 4) != param_1) {
    uVar3 = param_2;
    do {
      uVar2 = uVar3 + 0xc;
      if (param_2 + DAT_10025b74 * 0xc <= uVar2) break;
      piVar1 = (int *)(uVar3 + 0x10);
      uVar3 = uVar2;
    } while (*piVar1 != param_1);
  }
  if ((param_2 + DAT_10025b74 * 0xc <= uVar2) || (*(int *)(uVar2 + 4) != param_1)) {
    uVar2 = 0;
  }
  return uVar2;
}



/* ================================================================
 * Function: FUN_1001e6b4
 * Address:  1001e6b4
 * ================================================================ */

int __cdecl
FUN_1001e6b4(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10021af0;
  puStack_10 = &LAB_1001b368;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_10026adc == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_10026adc = 2;
    }
    else {
      DAT_10026adc = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_1001fe13(param_3,param_4);
  }
  if (DAT_10026adc == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
    ExceptionList = local_14;
    return iVar1;
  }
  if (DAT_10026adc == 1) {
    if (param_7 == 0) {
      param_7 = DAT_10026ab4;
    }
    iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar1 != 0) {
      local_8 = 0;
      FUN_1001e3c0();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x3c) &&
         (iVar2 = MultiByteToWideChar(param_7,1,param_3,param_4,(LPWSTR)&stack0xffffffc4,iVar1),
         iVar2 != 0)) {
        iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          if ((param_2 & 0x400) == 0) {
            local_8 = 1;
            FUN_1001e3c0();
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
 * Function: FUN_1001e8d8
 * Address:  1001e8d8
 * ================================================================ */

undefined4 __cdecl FUN_1001e8d8(uint param_1,uint param_2,uint *param_3)

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
 * Address:  1001e8f9
 * ================================================================ */

/* Library Function - Single Match
    ___add_12
   
   Library: Visual Studio 2003 Release */

void __cdecl ___add_12(uint *param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = FUN_1001e8d8(*param_1,*param_2,param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_1001e8d8(param_1[1],1,param_1 + 1);
    if (iVar1 != 0) {
      param_1[2] = param_1[2] + 1;
    }
  }
  iVar1 = FUN_1001e8d8(param_1[1],param_2[1],param_1 + 1);
  if (iVar1 != 0) {
    param_1[2] = param_1[2] + 1;
  }
  FUN_1001e8d8(param_1[2],param_2[2],param_1 + 2);
  return;
}



/* ================================================================
 * Function: FUN_1001e957
 * Address:  1001e957
 * ================================================================ */

void __cdecl FUN_1001e957(uint *param_1)

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
 * Function: FUN_1001e985
 * Address:  1001e985
 * ================================================================ */

void __cdecl FUN_1001e985(uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = uVar1 >> 1 | param_1[2] << 0x1f;
  param_1[2] = param_1[2] >> 1;
  *param_1 = *param_1 >> 1 | uVar1 << 0x1f;
  return;
}



/* ================================================================
 * Function: FUN_1001e9b2
 * Address:  1001e9b2
 * ================================================================ */

void __cdecl FUN_1001e9b2(char *param_1,int param_2,uint *param_3)

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
      FUN_1001e957(puVar1);
      FUN_1001e957(puVar1);
      ___add_12(puVar1,&local_14);
      FUN_1001e957(puVar1);
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
    FUN_1001e957(puVar1);
    local_8 = local_8 + 0xffff;
  }
  *(undefined2 *)((int)puVar1 + 10) = (undefined2)local_8;
  return;
}



/* ================================================================
 * Function: FUN_1001ea79
 * Address:  1001ea79
 * ================================================================ */

undefined4 __thiscall
FUN_1001ea79(void *this,ushort *param_1,int *param_2,byte *param_3,int param_4,int param_5,
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
LAB_1001ead0:
  local_14 = iVar5;
  pbVar7 = pbVar8;
  iVar5 = 1;
  bVar6 = *pbVar7;
  pbVar8 = pbVar7 + 1;
  iVar2 = local_14;
  switch(iVar9) {
  case 0:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) {
LAB_1001eaed:
      local_14 = iVar2;
      iVar9 = 3;
      goto LAB_1001ed12;
    }
    if (bVar6 == DAT_100236a0) goto LAB_1001eafc;
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
      if (bVar6 != 0x30) goto LAB_1001edec;
    }
    goto LAB_1001ead0;
  case 1:
    local_14 = 1;
    if (('0' < (char)bVar6) && (iVar2 = iVar5, (char)bVar6 < ':')) goto LAB_1001eaed;
    iVar9 = iVar1;
    if (bVar6 != DAT_100236a0) {
      iVar9 = iVar5;
      if ((bVar6 == 0x2b) || (iVar9 = local_14, bVar6 == 0x2d)) goto LAB_1001eb81;
      iVar9 = iVar5;
      local_14 = iVar5;
      if (bVar6 != 0x30) goto LAB_1001eb5a;
    }
    goto LAB_1001ead0;
  case 2:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) goto LAB_1001eaed;
    if (bVar6 == DAT_100236a0) {
LAB_1001eafc:
      iVar9 = 5;
      iVar5 = local_14;
    }
    else {
      iVar9 = iVar5;
      pbVar7 = param_3;
      iVar5 = local_14;
      if (bVar6 != 0x30) goto LAB_1001edf1;
    }
    goto LAB_1001ead0;
  case 3:
    local_14 = iVar5;
    while( true ) {
      if (DAT_1002369c < 2) {
        uVar3 = (byte)PTR_DAT_10023490[(uint)bVar6 * 2] & 4;
        this = PTR_DAT_10023490;
      }
      else {
        pbVar7 = (byte *)0x4;
        uVar3 = FUN_1001781e(this,(uint)bVar6,4);
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
    if (bVar6 != DAT_100236a0) goto LAB_1001ec6e;
    goto LAB_1001ead0;
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
      if (DAT_1002369c < 2) {
        uVar3 = (byte)PTR_DAT_10023490[(uint)bVar6 * 2] & 4;
        this = PTR_DAT_10023490;
      }
      else {
        pbVar7 = (byte *)0x4;
        uVar3 = FUN_1001781e(this,(uint)bVar6,4);
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
LAB_1001ec6e:
    iVar9 = local_14;
    if ((bVar6 == 0x2b) || (bVar6 == 0x2d)) {
LAB_1001eb81:
      local_14 = iVar9;
      iVar9 = 0xb;
      pbVar8 = pbVar8 + -1;
      iVar5 = local_14;
    }
    else {
LAB_1001eb5a:
      if (((char)bVar6 < 'D') ||
         (('E' < (char)bVar6 && (((char)bVar6 < 'd' || ('e' < (char)bVar6)))))) goto LAB_1001edec;
      iVar9 = 6;
      iVar5 = local_14;
    }
    goto LAB_1001ead0;
  case 5:
    local_28 = iVar5;
    if (DAT_1002369c < 2) {
      uVar3 = (byte)PTR_DAT_10023490[(uint)bVar6 * 2] & 4;
      this = PTR_DAT_10023490;
    }
    else {
      pbVar7 = (byte *)0x4;
      uVar3 = FUN_1001781e(this,(uint)bVar6,4);
      this = pbVar7;
    }
    iVar9 = iVar1;
    pbVar7 = param_3;
    if (uVar3 != 0) goto LAB_1001ed12;
    goto LAB_1001edf1;
  case 6:
    pbVar7 = pbVar7 + -1;
    this = pbVar7;
    param_3 = pbVar7;
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) {
      if (bVar6 == 0x2b) goto LAB_1001ed47;
      if (bVar6 == 0x2d) goto LAB_1001ed3b;
      if (bVar6 != 0x30) goto LAB_1001edf1;
LAB_1001ece0:
      iVar9 = 8;
      iVar5 = local_14;
      goto LAB_1001ead0;
    }
    break;
  case 7:
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) {
      pbVar7 = param_3;
      if (bVar6 == 0x30) goto LAB_1001ece0;
      goto LAB_1001edf1;
    }
    break;
  case 8:
    local_24 = 1;
    while (bVar6 == 0x30) {
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    }
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) goto LAB_1001edec;
    break;
  case 9:
    local_24 = 1;
    pbVar7 = (byte *)0x0;
    goto LAB_1001ed72;
  default:
    goto switchD_1001eadc_caseD_a;
  case 0xb:
    if (param_7 != 0) {
      if (bVar6 == 0x2b) {
LAB_1001ed47:
        iVar9 = 7;
        this = pbVar7;
        param_3 = pbVar7;
        iVar5 = local_14;
      }
      else {
        param_3 = pbVar7;
        if (bVar6 != 0x2d) goto LAB_1001edf1;
LAB_1001ed3b:
        local_1c = -1;
        iVar9 = 7;
        this = pbVar7;
        param_3 = pbVar7;
        iVar5 = local_14;
      }
      goto LAB_1001ead0;
    }
    iVar9 = 10;
    pbVar8 = pbVar7;
switchD_1001eadc_caseD_a:
    pbVar7 = pbVar8;
    iVar5 = local_14;
    if (iVar9 != 10) goto LAB_1001ead0;
    goto LAB_1001edf1;
  }
  iVar9 = 9;
LAB_1001ed12:
  pbVar8 = pbVar8 + -1;
  iVar5 = local_14;
  goto LAB_1001ead0;
LAB_1001ed72:
  if (DAT_1002369c < 2) {
    uVar3 = (byte)PTR_DAT_10023490[(uint)bVar6 * 2] & 4;
    this = PTR_DAT_10023490;
  }
  else {
    pbVar10 = (byte *)0x4;
    uVar3 = FUN_1001781e(this,(uint)bVar6,4);
    this = pbVar10;
  }
  if (uVar3 == 0) goto LAB_1001edbc;
  this = (void *)(int)(char)bVar6;
  pbVar7 = (byte *)((int)this + (int)pbVar7 * 10 + -0x30);
  if (0x1450 < (int)pbVar7) goto LAB_1001edb4;
  bVar6 = *pbVar8;
  pbVar8 = pbVar8 + 1;
  goto LAB_1001ed72;
LAB_1001edb4:
  pbVar7 = (byte *)0x1451;
LAB_1001edbc:
  while( true ) {
    local_20 = pbVar7;
    if (DAT_1002369c < 2) {
      uVar3 = (byte)PTR_DAT_10023490[(uint)bVar6 * 2] & 4;
      this = PTR_DAT_10023490;
    }
    else {
      pbVar7 = (byte *)0x4;
      uVar3 = FUN_1001781e(this,(uint)bVar6,4);
      this = pbVar7;
    }
    if (uVar3 == 0) break;
    bVar6 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    pbVar7 = local_20;
  }
LAB_1001edec:
  pbVar7 = pbVar8 + -1;
LAB_1001edf1:
  *param_2 = (int)pbVar7;
  if (local_14 == 0) {
    local_44 = 0;
    local_3a = 0;
    local_3e = (byte *)0x0;
    param_3 = (byte *)0x0;
    local_18 = 4;
    goto LAB_1001eeff;
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
    FUN_1001e9b2(local_60,local_8,(uint *)&local_44);
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
        FUN_1001fa0a((int *)&local_44,(uint)pbVar8,param_4);
        param_3 = (byte *)CONCAT22(uStack_40,uStack_42);
        goto LAB_1001ee84;
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
LAB_1001ee84:
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
LAB_1001eeff:
  *(byte **)(param_1 + 3) = local_3e;
  *(byte **)(param_1 + 1) = param_3;
  param_1[5] = local_3a | (ushort)local_2c;
  *param_1 = local_44;
  return local_18;
}



/* ================================================================
 * Function: FUN_1001ef4a
 * Address:  1001ef4a
 * ================================================================ */

undefined4 __cdecl
FUN_1001ef4a(uint param_1,uint param_2,uint param_3,int param_4,byte param_5,short *param_6)

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
          if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_1001f03f;
          pcVar11 = "1#INF";
        }
        else {
          if (param_1 != 0) {
LAB_1001f03f:
            pcVar11 = "1#QNAN";
            goto LAB_1001f044;
          }
          pcVar11 = "1#IND";
        }
        FUN_10015cc0((uint *)(param_6 + 2),(uint *)pcVar11);
        *(undefined1 *)((int)psVar3 + 3) = 5;
      }
      else {
        pcVar11 = "1#SNAN";
LAB_1001f044:
        FUN_10015cc0((uint *)(param_6 + 2),(uint *)pcVar11);
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
    FUN_1001fa0a((int *)&local_14,-(int)sVar8,1);
    if (0x3ffe < CONCAT11(cStack_9,local_a)) {
      sVar8 = sVar8 + 1;
      FUN_1001f7ea((int *)&local_14,(int *)&local_20);
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
        FUN_1001e957((uint *)&local_14);
        param_6 = (short *)((int)param_6 + -1);
      } while (param_6 != (short *)0x0);
      if (iVar9 < 0) {
        param_6 = (short *)0x0;
        for (uVar5 = -iVar9 & 0xff; uVar5 != 0; uVar5 = uVar5 - 1) {
          FUN_1001e985((uint *)&local_14);
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
          FUN_1001e957((uint *)&local_14);
          FUN_1001e957((uint *)&local_14);
          ___add_12((uint *)&local_14,&param_1);
          FUN_1001e957((uint *)&local_14);
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
            if (psVar1 <= psVar7) goto LAB_1001f19c;
            break;
          }
          *(char *)psVar7 = '0';
        }
        psVar7 = (short *)((int)psVar7 + 1);
        *psVar3 = *psVar3 + 1;
LAB_1001f19c:
        *(char *)psVar7 = (char)*psVar7 + '\x01';
LAB_1001f19e:
        cVar4 = ((char)psVar7 - (char)psVar3) + -3;
        *(char *)((int)psVar3 + 3) = cVar4;
        *(undefined1 *)(cVar4 + 4 + (int)psVar3) = 0;
        return local_8;
      }
      for (; psVar1 <= psVar7; psVar7 = (short *)((int)psVar7 + -1)) {
        if ((char)*psVar7 != '0') {
          if (psVar1 <= psVar7) goto LAB_1001f19e;
          break;
        }
      }
      *psVar3 = 0;
      *(undefined1 *)(psVar3 + 1) = 0x20;
      *(undefined1 *)((int)psVar3 + 3) = 1;
      *(char *)psVar1 = '0';
      goto LAB_1001f1d4;
    }
  }
  *psVar3 = 0;
  *(undefined1 *)(psVar3 + 1) = 0x20;
  *(undefined1 *)((int)psVar3 + 3) = 1;
  *(undefined1 *)(psVar3 + 2) = 0x30;
LAB_1001f1d4:
  *(undefined1 *)((int)psVar3 + 5) = 0;
  return 1;
}



/* ================================================================
 * Function: FUN_1001f1dd
 * Address:  1001f1dd
 * ================================================================ */

undefined4 __cdecl FUN_1001f1dd(uint param_1)

{
  int *piVar1;
  DWORD *pDVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if (param_1 < DAT_10027ee0) {
    iVar3 = (param_1 & 0x1f) * 0x24;
    piVar1 = (int *)((&DAT_10027de0)[(int)param_1 >> 5] + iVar3);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_10026800 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_1001f239;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_1001f239:
      *(undefined4 *)((&DAT_10027de0)[(int)param_1 >> 5] + iVar3) = 0xffffffff;
      return 0;
    }
  }
  pDVar2 = FUN_1001ca48();
  *pDVar2 = 9;
  pDVar2 = FUN_1001ca51();
  *pDVar2 = 0;
  return 0xffffffff;
}



/* ================================================================
 * Function: FUN_1001f25c
 * Address:  1001f25c
 * ================================================================ */

undefined4 __cdecl FUN_1001f25c(uint param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 < DAT_10027ee0) &&
     ((*(byte *)((&DAT_10027de0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_10027de0)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  pDVar1 = FUN_1001ca48();
  *pDVar1 = 9;
  pDVar1 = FUN_1001ca51();
  *pDVar1 = 0;
  return 0xffffffff;
}



/* ================================================================
 * Function: FUN_1001f29e
 * Address:  1001f29e
 * ================================================================ */

void __cdecl FUN_1001f29e(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1 & 0x1f) * 0x24;
  iVar1 = (&DAT_10027de0)[(int)param_1 >> 5] + iVar2;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_1001b2e7(0x11);
    if (*(int *)(iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_1001b348(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((&DAT_10027de0)[(int)param_1 >> 5] + 0xc + iVar2));
  return;
}



/* ================================================================
 * Function: FUN_1001f2fd
 * Address:  1001f2fd
 * ================================================================ */

void __cdecl FUN_1001f2fd(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_10027de0)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}



/* ================================================================
 * Function: FUN_1001f3a0
 * Address:  1001f3a0
 * ================================================================ */

int __cdecl FUN_1001f3a0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_1001f3ce(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((*(byte *)((int)param_1 + 0xd) & 0x40) != 0) {
    iVar1 = FUN_1001fb03(param_1[4]);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}



/* ================================================================
 * Function: FUN_1001f3ce
 * Address:  1001f3ce
 * ================================================================ */

undefined4 __cdecl FUN_1001f3ce(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if ((((byte)param_1[3] & 3) == 2) && ((param_1[3] & 0x108U) != 0)) {
    uVar3 = *param_1 - param_1[2];
    if (0 < (int)uVar3) {
      uVar1 = FUN_1001c468(param_1[4],(char *)param_1[2],uVar3);
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
 * Function: FUN_1001f433
 * Address:  1001f433
 * ================================================================ */

int __cdecl FUN_1001f433(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = 0;
  FUN_1001b2e7(2);
  iVar4 = 0;
  if (0 < DAT_10027da0) {
    do {
      iVar2 = *(int *)(DAT_10026d88 + iVar4 * 4);
      if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0xc) & 0x83) != 0)) {
        FUN_1001c7b0(iVar4,iVar2);
        piVar1 = *(int **)(DAT_10026d88 + iVar4 * 4);
        if ((piVar1[3] & 0x83U) != 0) {
          if (param_1 == 1) {
            iVar2 = FUN_1001f3a0(piVar1);
            if (iVar2 != -1) {
              iVar3 = iVar3 + 1;
            }
          }
          else if ((param_1 == 0) && ((piVar1[3] & 2U) != 0)) {
            iVar2 = FUN_1001f3a0(piVar1);
            if (iVar2 == -1) {
              iVar5 = -1;
            }
          }
        }
        FUN_1001c802(iVar4,*(int *)(DAT_10026d88 + iVar4 * 4));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_10027da0);
  }
  FUN_1001b348(2);
  if (param_1 != 1) {
    iVar3 = iVar5;
  }
  return iVar3;
}



/* ================================================================
 * Function: __frnd
 * Address:  1001f4d7
 * ================================================================ */

/* Library Function - Single Match
    __frnd
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release,
   Visual Studio 2019 Release */

float10 __cdecl __frnd(double param_1)

{
  return (float10)ROUND(param_1);
}



/* ================================================================
 * Function: FUN_1001f4e9
 * Address:  1001f4e9
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_1001f4e9(int param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2._2_2_ & 0x7ff0) == 0x7ff0) {
    iVar1 = FUN_100188d7(param_1,(uint)(CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)
                                                ) >> 0x20));
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        iVar1 = 4;
      }
      else if (iVar1 == 3) {
        iVar1 = 2;
      }
      else {
        iVar1 = 1;
      }
      return iVar1;
    }
    return 0x200;
  }
  if (((param_2 & 0x7ff00000) == 0) && (((param_2 & 0xfffff) != 0 || (param_1 != 0)))) {
    return (-(uint)((param_2 & 0x80000000) != 0) & 0xffffff90) + 0x80;
  }
  if ((double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) == _DAT_100211b0) {
    return (-(uint)((param_2 & 0x80000000) != 0) & 0xffffffe0) + 0x40;
  }
  return (-(uint)((param_2 & 0x80000000) != 0) & 0xffffff08) + 0x100;
}



/* ================================================================
 * Function: FUN_1001f57b
 * Address:  1001f57b
 * ================================================================ */

uint __cdecl FUN_1001f57b(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_10026aa4 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      return param_1 - 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_10026b64);
    bVar1 = DAT_10026b60 != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_10026b64);
      this = (void *)0x13;
      FUN_1001b2e7(0x13);
    }
    param_1 = FUN_1001f5ea(this,param_1);
    if (bVar1) {
      FUN_1001b348(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_10026b64);
    }
  }
  return param_1;
}



/* ================================================================
 * Function: FUN_1001f5ea
 * Address:  1001f5ea
 * ================================================================ */

uint __thiscall FUN_1001f5ea(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_10026aa4 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      uVar1 = param_1 - 0x20;
    }
  }
  else {
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_1002369c < 2) {
        uVar2 = (byte)PTR_DAT_10023490[param_1 * 2] & 2;
      }
      else {
        uVar2 = FUN_1001781e(this,param_1,2);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_10023490[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
      iVar3 = 1;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_1001e6b4(DAT_10026aa4,0x200,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
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
 * Function: __mbsnbicoll
 * Address:  1001f6b6
 * ================================================================ */

/* Library Function - Single Match
    __mbsnbicoll
   
   Library: Visual Studio 2003 Release */

int __cdecl __mbsnbicoll(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  if (_MaxCount == 0) {
    return 0;
  }
  iVar1 = FUN_1001fb96(DAT_10026d84,1,_Str1,_MaxCount,_Str2,_MaxCount,DAT_10026b68);
  if (iVar1 == 0) {
    return 0x7fffffff;
  }
  return iVar1 + -2;
}



/* ================================================================
 * Function: FUN_1001f6f5
 * Address:  1001f6f5
 * ================================================================ */

undefined4 FUN_1001f6f5(void)

{
  LPCWSTR lpWideCharStr;
  size_t _Size;
  uint *lpMultiByteStr;
  int iVar1;
  undefined4 *puVar2;
  
  lpWideCharStr = (LPCWSTR)*DAT_1002682c;
  puVar2 = DAT_1002682c;
  while( true ) {
    if (lpWideCharStr == (LPCWSTR)0x0) {
      return 0;
    }
    _Size = WideCharToMultiByte(1,0,lpWideCharStr,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if (((_Size == 0) || (lpMultiByteStr = _malloc(_Size), lpMultiByteStr == (uint *)0x0)) ||
       (iVar1 = WideCharToMultiByte(1,0,(LPCWSTR)*puVar2,-1,(LPSTR)lpMultiByteStr,_Size,(LPCSTR)0x0,
                                    (LPBOOL)0x0), iVar1 == 0)) break;
    FUN_1001fe3e(lpMultiByteStr,0);
    lpWideCharStr = (LPCWSTR)puVar2[1];
    puVar2 = puVar2 + 1;
  }
  return 0xffffffff;
}



/* ================================================================
 * Function: FUN_1001f770
 * Address:  1001f770
 * ================================================================ */

int __cdecl FUN_1001f770(byte *param_1,byte *param_2)

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
 * Function: FUN_1001f7b0
 * Address:  1001f7b0
 * ================================================================ */

byte * __cdecl FUN_1001f7b0(byte *param_1,byte *param_2)

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
 * Function: FUN_1001f7ea
 * Address:  1001f7ea
 * ================================================================ */

void __cdecl FUN_1001f7ea(int *param_1,int *param_2)

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
LAB_1001f88d:
      piVar4[2] = 0;
      piVar4[1] = 0;
      *piVar4 = 0;
      return;
    }
    if (((uVar6 != 0) || (piVar1 = (int *)((int)piVar1 + 1), (param_1[2] & 0x7fffffffU) != 0)) ||
       ((uVar6 = 0, param_1[1] != 0 || (*param_1 != 0)))) {
      param_1 = piVar1;
      if (((uVar9 == 0) && (param_1 = (int *)((int)param_1 + 1), (param_2[2] & 0x7fffffffU) == 0))
         && ((param_2[1] == 0 && (*param_2 == 0)))) goto LAB_1001f88d;
      local_14 = 0;
      local_8 = &local_24;
      param_2 = (int *)0x5;
      do {
        if (0 < (int)param_2) {
          local_c = (ushort *)(local_14 * 2 + (int)piVar4);
          local_10 = (ushort *)(piVar5 + 2);
          local_1c = param_2;
          do {
            iVar8 = FUN_1001e8d8(*(uint *)(local_8 + -2),(uint)*local_c * (uint)*local_10,
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
LAB_1001f941:
        param_1._0_2_ = (ushort)param_1 - 1;
        if ((short)(ushort)param_1 < 0) {
          iVar8 = -(int)(short)(ushort)param_1;
          param_1._0_2_ = (ushort)param_1 + (short)iVar8;
          do {
            if ((local_28 & 1) != 0) {
              local_18 = local_18 + 1;
            }
            FUN_1001e985((uint *)&local_28);
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
          FUN_1001e957((uint *)&local_28);
          param_1 = (int *)((int)param_1 + 0xffff);
        } while (0 < (short)(ushort)param_1);
        if ((short)(ushort)param_1 < 1) goto LAB_1001f941;
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
      if (0x7ffe < (ushort)param_1) goto LAB_1001f9ea;
      uVar6 = (ushort)param_1 | uVar11;
      *(undefined2 *)piVar4 = uStack_26;
      *(uint *)((int)piVar4 + 2) = CONCAT22(uStack_22,local_24);
      *(uint *)((int)piVar4 + 6) = CONCAT13(bStack_1d,CONCAT12(uStack_1e,local_20));
    }
    *(ushort *)((int)piVar4 + 10) = uVar6;
  }
  else {
LAB_1001f9ea:
    piVar4[1] = 0;
    *piVar4 = 0;
    piVar4[2] = (-(uint)(uVar11 != 0) & 0x80000000) + 0x7fff8000;
  }
  return;
}



/* ================================================================
 * Function: FUN_1001fa0a
 * Address:  1001fa0a
 * ================================================================ */

void __cdecl FUN_1001fa0a(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined2 local_10;
  undefined4 local_e;
  undefined2 uStack_a;
  undefined *puStack_8;
  
  ppuVar3 = &PTR_DAT_100263e0;
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      ppuVar3 = (undefined **)0x10026540;
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
        FUN_1001f7ea(param_1,(int *)ppuVar4);
      }
    }
  }
  return;
}



/* ================================================================
 * Function: FUN_1001fa86
 * Address:  1001fa86
 * ================================================================ */

undefined4 __cdecl FUN_1001fa86(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((*(byte *)(param_1 + 3) & 0x40) == 0) {
    FUN_1001c781((uint)param_1);
    uVar1 = FUN_1001fab7(param_1);
    FUN_1001c7d3((uint)param_1);
  }
  else {
    param_1[3] = 0;
  }
  return uVar1;
}



/* ================================================================
 * Function: FUN_1001fab7
 * Address:  1001fab7
 * ================================================================ */

undefined4 __cdecl FUN_1001fab7(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((*(byte *)(param_1 + 3) & 0x83) != 0) {
    uVar2 = FUN_1001f3ce(param_1);
    FUN_10020341(param_1);
    iVar1 = FUN_10020261(param_1[4]);
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    else if ((undefined *)param_1[7] != (undefined *)0x0) {
      FUN_100166af((undefined *)param_1[7]);
      param_1[7] = 0;
    }
  }
  param_1[3] = 0;
  return uVar2;
}



/* ================================================================
 * Function: FUN_1001fb03
 * Address:  1001fb03
 * ================================================================ */

undefined4 __cdecl FUN_1001fb03(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (DAT_10027ee0 <= param_1) {
LAB_1001fb84:
    pDVar3 = FUN_1001ca48();
    *pDVar3 = 9;
    return 0xffffffff;
  }
  iVar4 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)((&DAT_10027de0)[(int)param_1 >> 5] + 4 + iVar4) & 1) == 0) goto LAB_1001fb84;
  FUN_1001f29e(param_1);
  if ((*(byte *)((&DAT_10027de0)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
    hFile = (HANDLE)FUN_1001f25c(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    uVar5 = 0;
    if (DVar2 == 0) goto LAB_1001fb79;
    pDVar3 = FUN_1001ca51();
    *pDVar3 = DVar2;
  }
  pDVar3 = FUN_1001ca48();
  *pDVar3 = 9;
  uVar5 = 0xffffffff;
LAB_1001fb79:
  FUN_1001f2fd(param_1);
  return uVar5;
}



/* ================================================================
 * Function: FUN_1001fb96
 * Address:  1001fb96
 * ================================================================ */

int __cdecl
FUN_1001fb96(LCID param_1,DWORD param_2,byte *param_3,int param_4,byte *param_5,int param_6,
            UINT param_7)

{
  undefined1 *puVar1;
  int iVar2;
  BOOL BVar3;
  BYTE *pBVar4;
  int iVar5;
  _cpinfo local_40;
  undefined1 *local_2c;
  PCNZWCH local_28;
  int local_24;
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10021b28;
  puStack_10 = &LAB_1001b368;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffb0;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffb0;
  if (DAT_10026b44 == 0) {
    ExceptionList = &local_14;
    iVar2 = CompareStringW(0,0,L"",1,L"",1);
    if (iVar2 == 0) {
      iVar2 = CompareStringA(0,0,"",1,"",1);
      if (iVar2 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_10026b44 = 2;
      puVar1 = local_1c;
    }
    else {
      DAT_10026b44 = 1;
      puVar1 = local_1c;
    }
  }
  local_1c = puVar1;
  if (0 < param_4) {
    param_4 = FUN_1001fe13((char *)param_3,param_4);
  }
  if (0 < param_6) {
    param_6 = FUN_1001fe13((char *)param_5,param_6);
  }
  if (DAT_10026b44 == 2) {
    iVar2 = CompareStringA(param_1,param_2,(PCNZCH)param_3,param_4,(PCNZCH)param_5,param_6);
    ExceptionList = local_14;
    return iVar2;
  }
  if (DAT_10026b44 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_10026ab4;
    }
    if ((param_4 == 0) || (param_6 == 0)) {
      if (param_4 == param_6) {
        ExceptionList = local_14;
        return 2;
      }
      if (1 < param_6) {
        ExceptionList = local_14;
        return 1;
      }
      if (1 < param_4) {
        ExceptionList = local_14;
        return 3;
      }
      BVar3 = GetCPInfo(param_7,&local_40);
      if (BVar3 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      if (0 < param_4) {
        if (local_40.MaxCharSize < 2) {
          ExceptionList = local_14;
          return 3;
        }
        pBVar4 = local_40.LeadByte;
        while( true ) {
          if (local_40.LeadByte[0] == 0) {
            ExceptionList = local_14;
            return 3;
          }
          if (pBVar4[1] == 0) break;
          if ((*pBVar4 <= *param_3) && (*param_3 <= pBVar4[1])) {
            ExceptionList = local_14;
            return 2;
          }
          pBVar4 = pBVar4 + 2;
          local_40.LeadByte[0] = *pBVar4;
        }
        ExceptionList = local_14;
        return 3;
      }
      if (0 < param_6) {
        if (local_40.MaxCharSize < 2) {
          ExceptionList = local_14;
          return 1;
        }
        pBVar4 = local_40.LeadByte;
        while( true ) {
          if (local_40.LeadByte[0] == 0) {
            ExceptionList = local_14;
            return 1;
          }
          if (pBVar4[1] == 0) break;
          if ((*pBVar4 <= *param_5) && (*param_5 <= pBVar4[1])) {
            ExceptionList = local_14;
            return 2;
          }
          pBVar4 = pBVar4 + 2;
          local_40.LeadByte[0] = *pBVar4;
        }
        ExceptionList = local_14;
        return 1;
      }
    }
    local_20 = MultiByteToWideChar(param_7,9,(LPCSTR)param_3,param_4,(LPWSTR)0x0,0);
    if (local_20 != 0) {
      local_8 = 0;
      FUN_1001e3c0();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x50) &&
         (local_28 = (PCNZWCH)&stack0xffffffb0, local_1c = &stack0xffffffb0,
         iVar2 = MultiByteToWideChar(param_7,1,(LPCSTR)param_3,param_4,(LPWSTR)&stack0xffffffb0,
                                     local_20), iVar2 != 0)) {
        iVar2 = MultiByteToWideChar(param_7,9,(LPCSTR)param_5,param_6,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          local_8 = 1;
          local_24 = iVar2;
          FUN_1001e3c0();
          local_8 = 0xffffffff;
          if ((&stack0x00000000 != (undefined1 *)0x50) &&
             (local_2c = &stack0xffffffb0, local_1c = &stack0xffffffb0,
             iVar5 = MultiByteToWideChar(param_7,1,(LPCSTR)param_5,param_6,(LPWSTR)&stack0xffffffb0,
                                         iVar2), iVar5 != 0)) {
            iVar2 = CompareStringW(param_1,param_2,local_28,local_20,(PCNZWCH)&stack0xffffffb0,iVar2
                                  );
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
 * Function: FUN_1001fe13
 * Address:  1001fe13
 * ================================================================ */

int __cdecl FUN_1001fe13(char *param_1,int param_2)

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
 * Function: FUN_1001fe3e
 * Address:  1001fe3e
 * ================================================================ */

undefined4 __cdecl FUN_1001fe3e(uint *param_1,int param_2)

{
  byte *pbVar1;
  uint *puVar2;
  int iVar3;
  byte *pbVar4;
  size_t sVar5;
  uint *lpName;
  byte *pbVar6;
  bool bVar7;
  
  if (param_1 == (uint *)0x0) {
    return 0xffffffff;
  }
  puVar2 = (uint *)FUN_1002069b((byte *)param_1,0x3d);
  if (puVar2 == (uint *)0x0) {
    return 0xffffffff;
  }
  if (param_1 == puVar2) {
    return 0xffffffff;
  }
  bVar7 = *(byte *)((int)puVar2 + 1) == 0;
  if (DAT_10026824 == DAT_10026828) {
    DAT_10026824 = (byte *)FUN_1002001d((int *)DAT_10026824);
  }
  if (DAT_10026824 == (byte *)0x0) {
    if ((param_2 == 0) || (DAT_1002682c == (undefined4 *)0x0)) {
      if (bVar7) {
        return 0;
      }
      DAT_10026824 = _malloc(4);
      if (DAT_10026824 == (byte *)0x0) {
        return 0xffffffff;
      }
      pbVar4 = DAT_10026824 + 1;
      pbVar6 = DAT_10026824 + 2;
      pbVar1 = DAT_10026824 + 3;
      DAT_10026824[0] = 0;
      *pbVar4 = 0;
      *pbVar6 = 0;
      *pbVar1 = 0;
      if (DAT_1002682c == (undefined4 *)0x0) {
        DAT_1002682c = _malloc(4);
        if (DAT_1002682c == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *DAT_1002682c = 0;
      }
    }
    else {
      iVar3 = FUN_1001f6f5();
      if (iVar3 != 0) {
        return 0xffffffff;
      }
    }
  }
  pbVar4 = DAT_10026824;
  iVar3 = FUN_1001ffc5((uchar *)param_1,(int)puVar2 - (int)param_1);
  if ((iVar3 < 0) || (*(int *)pbVar4 == 0)) {
    if (bVar7) {
      return 0;
    }
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    pbVar4 = FUN_1002036c(pbVar4,(uint *)(iVar3 * 4 + 8));
    if (pbVar4 == (byte *)0x0) {
      return 0xffffffff;
    }
    *(uint **)(pbVar4 + iVar3 * 4) = param_1;
    pbVar6 = pbVar4 + iVar3 * 4 + 4;
    pbVar6[0] = 0;
    pbVar6[1] = 0;
    pbVar6[2] = 0;
    pbVar6[3] = 0;
  }
  else {
    if (!bVar7) {
      *(uint **)(pbVar4 + iVar3 * 4) = param_1;
      goto LAB_1001ff72;
    }
    pbVar6 = pbVar4 + iVar3 * 4;
    FUN_100166af(*(undefined **)(pbVar4 + iVar3 * 4));
    for (; *(int *)pbVar6 != 0; pbVar6 = pbVar6 + 4) {
      iVar3 = iVar3 + 1;
      *(int *)pbVar6 = *(int *)(pbVar6 + 4);
    }
    pbVar4 = FUN_1002036c(pbVar4,(uint *)(iVar3 << 2));
    if (pbVar4 == (byte *)0x0) goto LAB_1001ff72;
  }
  DAT_10026824 = pbVar4;
LAB_1001ff72:
  if (param_2 != 0) {
    sVar5 = _strlen((char *)param_1);
    lpName = _malloc(sVar5 + 2);
    if (lpName != (uint *)0x0) {
      FUN_10015cc0(lpName,param_1);
      pbVar4 = (byte *)(((int)lpName - (int)param_1) + (int)puVar2);
      *pbVar4 = 0;
      SetEnvironmentVariableA((LPCSTR)lpName,(LPCSTR)(~-(uint)bVar7 & (uint)(pbVar4 + 1)));
      FUN_100166af((undefined *)lpName);
    }
  }
  return 0;
}



/* ================================================================
 * Function: FUN_1001ffc5
 * Address:  1001ffc5
 * ================================================================ */

int __cdecl FUN_1001ffc5(uchar *param_1,size_t param_2)

{
  uchar *_Str2;
  int iVar1;
  int *piVar2;
  
  _Str2 = (uchar *)*DAT_10026824;
  piVar2 = DAT_10026824;
  while( true ) {
    if (_Str2 == (uchar *)0x0) {
      return -((int)piVar2 - (int)DAT_10026824 >> 2);
    }
    iVar1 = __mbsnbicoll(param_1,_Str2,param_2);
    if ((iVar1 == 0) &&
       ((*(char *)(*piVar2 + param_2) == '=' || (*(char *)(*piVar2 + param_2) == '\0')))) break;
    _Str2 = (uchar *)piVar2[1];
    piVar2 = piVar2 + 1;
  }
  return (int)piVar2 - (int)DAT_10026824 >> 2;
}



/* ================================================================
 * Function: FUN_1002001d
 * Address:  1002001d
 * ================================================================ */

undefined4 * __cdecl FUN_1002001d(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar5 = 0;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    piVar2 = param_1;
    while (iVar1 != 0) {
      piVar2 = piVar2 + 1;
      iVar5 = iVar5 + 1;
      iVar1 = *piVar2;
    }
    puVar3 = _malloc(iVar5 * 4 + 4);
    if (puVar3 == (undefined4 *)0x0) {
      __amsg_exit(9);
    }
    puVar4 = (uint *)*param_1;
    puVar6 = puVar3;
    while (puVar4 != (uint *)0x0) {
      param_1 = param_1 + 1;
      puVar4 = FUN_10020732(puVar4);
      *puVar6 = puVar4;
      puVar6 = puVar6 + 1;
      puVar4 = (uint *)*param_1;
    }
    *puVar6 = 0;
    return puVar3;
  }
  return (undefined4 *)0x0;
}



/* ================================================================
 * Function: FUN_10020090
 * Address:  10020090
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_10020090(void *this,byte *param_1,byte *param_2)

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
  
  iVar2 = _DAT_10026b64;
  if (DAT_10026aa4 == 0) {
    bVar5 = 0xff;
    do {
      do {
        cVar6 = '\0';
        if (bVar5 == 0) goto LAB_100200de;
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
LAB_100200de:
    uVar7 = (uint)cVar6;
  }
  else {
    LOCK();
    _DAT_10026b64 = _DAT_10026b64 + 1;
    UNLOCK();
    bVar1 = 0 < DAT_10026b60;
    if (bVar1) {
      LOCK();
      UNLOCK();
      _DAT_10026b64 = iVar2;
      FUN_1001b2e7(0x13);
      this = extraout_ECX;
    }
    uVar9 = (uint)bVar1;
    uVar7 = 0xff;
    uVar8 = 0;
    do {
      do {
        if ((char)uVar7 == '\0') goto LAB_1002013f;
        bVar5 = *param_2;
        uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar5);
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        uVar8 = CONCAT31((int3)(uVar8 >> 8),bVar4);
        param_1 = param_1 + 1;
      } while (bVar5 == bVar4);
      uVar8 = FUN_1001bbfe(this,uVar8);
      uVar7 = FUN_1001bbfe(this_00,uVar7);
      this = extraout_ECX_00;
    } while ((byte)uVar8 == (byte)uVar7);
    uVar8 = (uint)((byte)uVar8 < (byte)uVar7);
    uVar7 = (1 - uVar8) - (uint)(uVar8 != 0);
LAB_1002013f:
    if (uVar9 == 0) {
      LOCK();
      _DAT_10026b64 = _DAT_10026b64 + -1;
      UNLOCK();
    }
    else {
      FUN_1001b348(0x13);
    }
  }
  return uVar7;
}



/* ================================================================
 * Function: FUN_10020160
 * Address:  10020160
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10020160(byte *param_1,char *param_2,void *param_3)

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
  
  iVar2 = _DAT_10026b64;
  uVar6 = 0;
  if (param_3 != (void *)0x0) {
    if (DAT_10026aa4 == 0) {
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
        if (bVar3 != (byte)uVar4) goto LAB_100201bf;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar3 = (byte)(uVar4 >> 8);
      bVar8 = bVar3 < (byte)uVar4;
      if (bVar3 != (byte)uVar4) {
LAB_100201bf:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
    }
    else {
      LOCK();
      _DAT_10026b64 = _DAT_10026b64 + 1;
      UNLOCK();
      bVar8 = 0 < DAT_10026b60;
      if (bVar8) {
        LOCK();
        UNLOCK();
        _DAT_10026b64 = iVar2;
        FUN_1001b2e7(0x13);
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
        uVar7 = FUN_1001bbfe(param_3,uVar7);
        uVar5 = FUN_1001bbfe(this,uVar5);
        bVar8 = uVar5 < uVar7;
        if (uVar5 != uVar7) goto LAB_10020235;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar8 = uVar5 < uVar7;
      if (uVar5 != uVar7) {
LAB_10020235:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
      if (uVar9 == 0) {
        LOCK();
        _DAT_10026b64 = _DAT_10026b64 + -1;
        UNLOCK();
      }
      else {
        FUN_1001b348(0x13);
      }
    }
  }
  return uVar6;
}



/* ================================================================
 * Function: FUN_10020261
 * Address:  10020261
 * ================================================================ */

undefined4 __cdecl FUN_10020261(uint param_1)

{
  undefined4 uVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_10027ee0) &&
     ((*(byte *)((&DAT_10027de0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1001f29e(param_1);
    uVar1 = FUN_100202be(param_1);
    FUN_1001f2fd(param_1);
    return uVar1;
  }
  pDVar2 = FUN_1001ca48();
  *pDVar2 = 9;
  pDVar2 = FUN_1001ca51();
  *pDVar2 = 0;
  return 0xffffffff;
}



/* ================================================================
 * Function: FUN_100202be
 * Address:  100202be
 * ================================================================ */

undefined4 __cdecl FUN_100202be(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_1001f25c(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_1001f25c(2);
      iVar2 = FUN_1001f25c(1);
      if (iVar2 == iVar1) goto LAB_1002030c;
    }
    hObject = (HANDLE)FUN_1001f25c(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_1002030e;
    }
  }
LAB_1002030c:
  DVar4 = 0;
LAB_1002030e:
  FUN_1001f1dd(param_1);
  *(undefined1 *)((&DAT_10027de0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_1001c9d5(DVar4);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}



/* ================================================================
 * Function: FUN_10020341
 * Address:  10020341
 * ================================================================ */

void __cdecl FUN_10020341(undefined4 *param_1)

{
  if (((param_1[3] & 0x83) != 0) && ((param_1[3] & 8) != 0)) {
    FUN_100166af((undefined *)param_1[2]);
    *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) & 0xfbf7;
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
  }
  return;
}



/* ================================================================
 * Function: FUN_1002036c
 * Address:  1002036c
 * ================================================================ */

byte * __cdecl FUN_1002036c(byte *param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  byte *pbVar3;
  int local_3c;
  uint *local_38;
  byte *local_34;
  int *local_30;
  uint *local_2c;
  byte *local_28;
  uint *local_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10021c68;
  puStack_10 = &LAB_1001b368;
  local_14 = ExceptionList;
  pbVar3 = (byte *)0x0;
  if (param_1 == (byte *)0x0) {
    ExceptionList = &local_14;
    pbVar3 = _malloc((size_t)param_2);
  }
  else {
    if (param_2 == (uint *)0x0) {
      ExceptionList = &local_14;
      FUN_100166af(param_1);
    }
    else {
      ExceptionList = &local_14;
      if (DAT_10027dc4 == 3) {
        do {
          local_28 = (byte *)0x0;
          if (param_2 < (uint *)0xffffffe1) {
            FUN_1001b2e7(9);
            local_8 = 0;
            local_2c = (uint *)FUN_1001a086((int)param_1);
            if (local_2c != (uint *)0x0) {
              if (param_2 <= DAT_10027dbc) {
                iVar1 = FUN_1001a88f(local_2c,(int)param_1,(int)param_2);
                if (iVar1 == 0) {
                  local_28 = (byte *)FUN_1001a3da(param_2);
                  if (local_28 != (byte *)0x0) {
                    local_24 = (uint *)(*(int *)(param_1 + -4) - 1);
                    puVar2 = local_24;
                    if (param_2 <= local_24) {
                      puVar2 = param_2;
                    }
                    FUN_10015e30((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                    local_2c = (uint *)FUN_1001a086((int)param_1);
                    FUN_1001a0b1(local_2c,(int)param_1);
                  }
                }
                else {
                  local_28 = param_1;
                }
              }
              if (local_28 == (byte *)0x0) {
                if (param_2 == (uint *)0x0) {
                  param_2 = (uint *)0x1;
                }
                param_2 = (uint *)((int)param_2 + 0xfU & 0xfffffff0);
                local_28 = HeapAlloc(DAT_10027dc0,0,(SIZE_T)param_2);
                if (local_28 != (byte *)0x0) {
                  local_24 = (uint *)(*(int *)(param_1 + -4) - 1);
                  puVar2 = local_24;
                  if (param_2 <= local_24) {
                    puVar2 = param_2;
                  }
                  FUN_10015e30((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                  FUN_1001a0b1(local_2c,(int)param_1);
                }
              }
            }
            local_8 = 0xffffffff;
            FUN_100204f7();
            if (local_2c == (uint *)0x0) {
              if (param_2 == (uint *)0x0) {
                param_2 = (uint *)0x1;
              }
              param_2 = (uint *)((int)param_2 + 0xfU & 0xfffffff0);
              local_28 = HeapReAlloc(DAT_10027dc0,0,param_1,(SIZE_T)param_2);
            }
          }
          if (local_28 != (byte *)0x0) {
            ExceptionList = local_14;
            return local_28;
          }
          if (DAT_10026a78 == (byte *)0x0) {
            ExceptionList = local_14;
            return (byte *)0x0;
          }
          iVar1 = FUN_1001b440(param_2);
        } while (iVar1 != 0);
      }
      else {
        ExceptionList = &local_14;
        if (DAT_10027dc4 == 2) {
          ExceptionList = &local_14;
          if (param_2 < (uint *)0xffffffe1) {
            if (param_2 == (uint *)0x0) {
              param_2 = (uint *)0x10;
              ExceptionList = &local_14;
            }
            else {
              param_2 = (uint *)((int)param_2 + 0xfU & 0xfffffff0);
              ExceptionList = &local_14;
            }
          }
          do {
            local_28 = pbVar3;
            if (param_2 < (uint *)0xffffffe1) {
              FUN_1001b2e7(9);
              local_8 = 1;
              pbVar3 = (byte *)FUN_1001ade1(param_1,&local_3c,(uint *)&local_30);
              local_34 = pbVar3;
              if (pbVar3 == (byte *)0x0) {
                local_28 = HeapReAlloc(DAT_10027dc0,0,param_1,(SIZE_T)param_2);
              }
              else {
                if (param_2 < DAT_10025a2c) {
                  iVar1 = FUN_1001b1a9(local_3c,local_30,pbVar3,(uint)param_2 >> 4);
                  if (iVar1 == 0) {
                    local_28 = (byte *)FUN_1001ae7d((uint)param_2 >> 4);
                    if (local_28 != (byte *)0x0) {
                      local_38 = (uint *)((uint)*pbVar3 << 4);
                      puVar2 = local_38;
                      if (param_2 <= local_38) {
                        puVar2 = param_2;
                      }
                      FUN_10015e30((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                      FUN_1001ae38(local_3c,(int)local_30,pbVar3);
                    }
                  }
                  else {
                    local_28 = param_1;
                  }
                }
                if ((local_28 == (byte *)0x0) &&
                   (local_28 = HeapAlloc(DAT_10027dc0,0,(SIZE_T)param_2), local_28 != (byte *)0x0))
                {
                  local_38 = (uint *)((uint)*pbVar3 << 4);
                  puVar2 = local_38;
                  if (param_2 <= local_38) {
                    puVar2 = param_2;
                  }
                  FUN_10015e30((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                  FUN_1001ae38(local_3c,(int)local_30,pbVar3);
                }
              }
              local_8 = 0xffffffff;
              FUN_10020645();
            }
            if (local_28 != pbVar3) {
              ExceptionList = local_14;
              return local_28;
            }
            if (DAT_10026a78 == pbVar3) {
              ExceptionList = local_14;
              return local_28;
            }
            iVar1 = FUN_1001b440(param_2);
          } while (iVar1 != 0);
        }
        else {
          do {
            pbVar3 = (byte *)0x0;
            if (param_2 < (uint *)0xffffffe1) {
              if (param_2 == (uint *)0x0) {
                param_2 = (uint *)0x1;
              }
              param_2 = (uint *)((int)param_2 + 0xfU & 0xfffffff0);
              pbVar3 = HeapReAlloc(DAT_10027dc0,0,param_1,(SIZE_T)param_2);
            }
            if (pbVar3 != (byte *)0x0) {
              ExceptionList = local_14;
              return pbVar3;
            }
            if (DAT_10026a78 == (byte *)0x0) {
              ExceptionList = local_14;
              return (byte *)0x0;
            }
            iVar1 = FUN_1001b440(param_2);
          } while (iVar1 != 0);
        }
      }
    }
    pbVar3 = (byte *)0x0;
  }
  ExceptionList = local_14;
  return pbVar3;
}



/* ================================================================
 * Function: FUN_100204f7
 * Address:  100204f7
 * ================================================================ */

void FUN_100204f7(void)

{
  FUN_1001b348(9);
  return;
}



/* ================================================================
 * Function: FUN_10020645
 * Address:  10020645
 * ================================================================ */

void FUN_10020645(void)

{
  FUN_1001b348(9);
  return;
}



/* ================================================================
 * Function: FUN_1002069b
 * Address:  1002069b
 * ================================================================ */

byte * __cdecl FUN_1002069b(byte *param_1,uint param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  
  if (DAT_10026b7c == 0) {
    pbVar2 = (byte *)_strchr((char *)param_1,param_2);
  }
  else {
    FUN_1001b2e7(0x19);
    while( true ) {
      bVar1 = *param_1;
      uVar3 = (uint)bVar1;
      if (bVar1 == 0) break;
      if ((*(byte *)((int)&DAT_10026c80 + uVar3 + 1) & 4) == 0) {
        pbVar2 = param_1;
        if (param_2 == uVar3) break;
      }
      else {
        pbVar2 = param_1 + 1;
        if (param_1[1] == 0) {
          FUN_1001b348(0x19);
          return (byte *)0x0;
        }
        if (param_2 == CONCAT11(bVar1,param_1[1])) {
          FUN_1001b348(0x19);
          return param_1;
        }
      }
      param_1 = pbVar2 + 1;
    }
    FUN_1001b348(0x19);
    pbVar2 = (byte *)(~-(uint)(param_2 != uVar3) & (uint)param_1);
  }
  return pbVar2;
}



/* ================================================================
 * Function: FUN_10020732
 * Address:  10020732
 * ================================================================ */

uint * __cdecl FUN_10020732(uint *param_1)

{
  size_t sVar1;
  uint *puVar2;
  
  if (param_1 != (uint *)0x0) {
    sVar1 = _strlen((char *)param_1);
    puVar2 = _malloc(sVar1 + 1);
    if (puVar2 != (uint *)0x0) {
      puVar2 = FUN_10015cc0(puVar2,param_1);
      return puVar2;
    }
  }
  return (uint *)0x0;
}



/* ================================================================
 * Function: RtlUnwind
 * Address:  1002075e
 * ================================================================ */

void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue)

{
                    /* WARNING: Could not recover jumptable at 0x1002075e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RtlUnwind(TargetFrame,TargetIp,ExceptionRecord,ReturnValue);
  return;
}



/* ================================================================
 * Function: Unwind@10020770
 * Address:  10020770
 * ================================================================ */

void Unwind_10020770(void)

{
  int unaff_EBP;
  
  FUN_100123d4(*(undefined4 **)(unaff_EBP + -0x20));
  return;
}



/* ================================================================
 * Function: Unwind@10020779
 * Address:  10020779
 * ================================================================ */

void Unwind_10020779(void)

{
  int unaff_EBP;
  
  FUN_1001576a(*(undefined **)(unaff_EBP + -0x14));
  return;
}



/* ================================================================
 * Function: Unwind@10020784
 * Address:  10020784
 * ================================================================ */

void Unwind_10020784(void)

{
  int unaff_EBP;
  
  FUN_1001576a(*(undefined **)(unaff_EBP + -0x1c));
  return;
}



/* ================================================================
 * Function: Unwind@10020799
 * Address:  10020799
 * ================================================================ */

void Unwind_10020799(void)

{
  int unaff_EBP;
  
  FUN_100123d4(*(undefined4 **)(unaff_EBP + -0x20));
  return;
}



/* ================================================================
 * Function: Unwind@100207a2
 * Address:  100207a2
 * ================================================================ */

void Unwind_100207a2(void)

{
  int unaff_EBP;
  
  FUN_1001576a(*(undefined **)(unaff_EBP + -0x14));
  return;
}



/* ================================================================
 * Function: Unwind@100207ad
 * Address:  100207ad
 * ================================================================ */

void Unwind_100207ad(void)

{
  int unaff_EBP;
  
  FUN_1001576a(*(undefined **)(unaff_EBP + -0x1c));
  return;
}



/* ================================================================
 * Function: Unwind@100207c2
 * Address:  100207c2
 * ================================================================ */

void Unwind_100207c2(void)

{
  int unaff_EBP;
  
  FUN_100123d4(*(undefined4 **)(unaff_EBP + -0x20));
  return;
}



/* ================================================================
 * Function: Unwind@100207e0
 * Address:  100207e0
 * ================================================================ */

void Unwind_100207e0(void)

{
  int unaff_EBP;
  
  FUN_100123d4(*(undefined4 **)(unaff_EBP + -0x20));
  return;
}



/* ================================================================
 * Function: Unwind@100207e9
 * Address:  100207e9
 * ================================================================ */

void Unwind_100207e9(void)

{
  int unaff_EBP;
  
  FUN_1001576a(*(undefined **)(unaff_EBP + -0x14));
  return;
}



/* ================================================================
 * Function: Unwind@100207f4
 * Address:  100207f4
 * ================================================================ */

void Unwind_100207f4(void)

{
  int unaff_EBP;
  
  FUN_1001576a(*(undefined **)(unaff_EBP + -0x1c));
  return;
}



/* ================================================================
 * Function: Unwind@10020809
 * Address:  10020809
 * ================================================================ */

void Unwind_10020809(void)

{
  int unaff_EBP;
  
  FUN_100123d4(*(undefined4 **)(unaff_EBP + -0x20));
  return;
}



/* ================================================================
 * Function: Unwind@10020812
 * Address:  10020812
 * ================================================================ */

void Unwind_10020812(void)

{
  int unaff_EBP;
  
  FUN_1001576a(*(undefined **)(unaff_EBP + -0x14));
  return;
}



/* ================================================================
 * Function: Unwind@1002081d
 * Address:  1002081d
 * ================================================================ */

void Unwind_1002081d(void)

{
  int unaff_EBP;
  
  FUN_1001576a(*(undefined **)(unaff_EBP + -0x1c));
  return;
}



/* ================================================================
 * Function: Unwind@10020832
 * Address:  10020832
 * ================================================================ */

void Unwind_10020832(void)

{
  int unaff_EBP;
  
  FUN_100123d4(*(undefined4 **)(unaff_EBP + -0x20));
  return;
}



/* ================================================================
 * Function: Unwind@10020850
 * Address:  10020850
 * ================================================================ */

void Unwind_10020850(void)

{
  int unaff_EBP;
  
  FUN_100123d4(*(undefined4 **)(unaff_EBP + -0x20));
  return;
}



/* ================================================================
 * Function: Unwind@10020859
 * Address:  10020859
 * ================================================================ */

void Unwind_10020859(void)

{
  int unaff_EBP;
  
  FUN_1001576a(*(undefined **)(unaff_EBP + -0x14));
  return;
}



/* ================================================================
 * Function: Unwind@10020864
 * Address:  10020864
 * ================================================================ */

void Unwind_10020864(void)

{
  int unaff_EBP;
  
  FUN_1001576a(*(undefined **)(unaff_EBP + -0x1c));
  return;
}



/* ================================================================
 * Function: Unwind@10020879
 * Address:  10020879
 * ================================================================ */

void Unwind_10020879(void)

{
  int unaff_EBP;
  
  FUN_100123d4(*(undefined4 **)(unaff_EBP + -0x20));
  return;
}



/* ================================================================
 * Function: Unwind@10020882
 * Address:  10020882
 * ================================================================ */

void Unwind_10020882(void)

{
  int unaff_EBP;
  
  FUN_1001576a(*(undefined **)(unaff_EBP + -0x14));
  return;
}



/* ================================================================
 * Function: Unwind@1002088d
 * Address:  1002088d
 * ================================================================ */

void Unwind_1002088d(void)

{
  int unaff_EBP;
  
  FUN_1001576a(*(undefined **)(unaff_EBP + -0x1c));
  return;
}



/* ================================================================
 * Function: Unwind@100208a2
 * Address:  100208a2
 * ================================================================ */

void Unwind_100208a2(void)

{
  int unaff_EBP;
  
  FUN_100123d4(*(undefined4 **)(unaff_EBP + -0x20));
  return;
}



/* ================================================================
 * Function: Unwind@100208c0
 * Address:  100208c0
 * ================================================================ */

void Unwind_100208c0(void)

{
  int unaff_EBP;
  
  FUN_100123d4(*(undefined4 **)(unaff_EBP + -0x20));
  return;
}



/* ================================================================
 * Function: Unwind@100208c9
 * Address:  100208c9
 * ================================================================ */

void Unwind_100208c9(void)

{
  int unaff_EBP;
  
  FUN_1001576a(*(undefined **)(unaff_EBP + -0x14));
  return;
}



/* ================================================================
 * Function: Unwind@100208d4
 * Address:  100208d4
 * ================================================================ */

void Unwind_100208d4(void)

{
  int unaff_EBP;
  
  FUN_1001576a(*(undefined **)(unaff_EBP + -0x1c));
  return;
}



/* ================================================================
 * Function: Unwind@100208e9
 * Address:  100208e9
 * ================================================================ */

void Unwind_100208e9(void)

{
  int unaff_EBP;
  
  FUN_100123d4(*(undefined4 **)(unaff_EBP + -0x20));
  return;
}



/* ================================================================
 * Function: Unwind@100208f2
 * Address:  100208f2
 * ================================================================ */

void Unwind_100208f2(void)

{
  int unaff_EBP;
  
  FUN_1001576a(*(undefined **)(unaff_EBP + -0x14));
  return;
}



/* ================================================================
 * Function: Unwind@100208fd
 * Address:  100208fd
 * ================================================================ */

void Unwind_100208fd(void)

{
  int unaff_EBP;
  
  FUN_1001576a(*(undefined **)(unaff_EBP + -0x1c));
  return;
}



/* ================================================================
 * Function: Unwind@10020912
 * Address:  10020912
 * ================================================================ */

void Unwind_10020912(void)

{
  int unaff_EBP;
  
  FUN_100123d4(*(undefined4 **)(unaff_EBP + -0x20));
  return;
}



/* ================================================================
 * Function: Unwind@10020930
 * Address:  10020930
 * ================================================================ */

void Unwind_10020930(void)

{
  int unaff_EBP;
  
  FUN_1001576a(*(undefined **)(unaff_EBP + -0x18));
  return;
}



/* ================================================================
 * Function: Unwind@1002093b
 * Address:  1002093b
 * ================================================================ */

void Unwind_1002093b(void)

{
  int unaff_EBP;
  
  FUN_1001576a(*(undefined **)(unaff_EBP + -0x20));
  return;
}



/* ================================================================
 * Function: Unwind@10020946
 * Address:  10020946
 * ================================================================ */

void Unwind_10020946(void)

{
  int unaff_EBP;
  
  FUN_1001576a(*(undefined **)(unaff_EBP + -0x28));
  return;
}



/* ================================================================
 * Function: Unwind@10020951
 * Address:  10020951
 * ================================================================ */

void Unwind_10020951(void)

{
  int unaff_EBP;
  
  FUN_1001576a(*(undefined **)(unaff_EBP + -0x30));
  return;
}



/* ================================================================
 * Function: Unwind@10020966
 * Address:  10020966
 * ================================================================ */

void Unwind_10020966(void)

{
  int unaff_EBP;
  
  FUN_1001576a(*(undefined **)(unaff_EBP + -0x18));
  return;
}



/* ================================================================
 * Function: Unwind@10020971
 * Address:  10020971
 * ================================================================ */

void Unwind_10020971(void)

{
  int unaff_EBP;
  
  FUN_1001576a(*(undefined **)(unaff_EBP + -0x20));
  return;
}



/* ================================================================
 * Function: Unwind@1002097c
 * Address:  1002097c
 * ================================================================ */

void Unwind_1002097c(void)

{
  int unaff_EBP;
  
  FUN_1001576a(*(undefined **)(unaff_EBP + -0x28));
  return;
}



/* ================================================================
 * Function: Unwind@10020987
 * Address:  10020987
 * ================================================================ */

void Unwind_10020987(void)

{
  int unaff_EBP;
  
  FUN_1001576a(*(undefined **)(unaff_EBP + -0x30));
  return;
}



/* ================================================================
 * Function: Unwind@100209a0
 * Address:  100209a0
 * ================================================================ */

void Unwind_100209a0(void)

{
  int unaff_EBP;
  
  FUN_100105fe(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



/* ================================================================
 * Function: Unwind@100209c0
 * Address:  100209c0
 * ================================================================ */

void Unwind_100209c0(void)

{
  int unaff_EBP;
  
  FUN_100105fe(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



/* ================================================================
 * Function: Unwind@100209e0
 * Address:  100209e0
 * ================================================================ */

void Unwind_100209e0(void)

{
  int unaff_EBP;
  
  FUN_100105fe(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



/* ================================================================
 * Function: Unwind@100209f3
 * Address:  100209f3
 * ================================================================ */

void Unwind_100209f3(void)

{
  int unaff_EBP;
  
  FUN_100105fe(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



/* ================================================================
 * Function: Unwind@10020a10
 * Address:  10020a10
 * ================================================================ */

void Unwind_10020a10(void)

{
  int unaff_EBP;
  
  FUN_1001576a(*(undefined **)(unaff_EBP + -0x24));
  return;
}



/* ================================================================
 * Function: Unwind@10020a1b
 * Address:  10020a1b
 * ================================================================ */

void Unwind_10020a1b(void)

{
  int unaff_EBP;
  
  FUN_1001576a(*(undefined **)(unaff_EBP + -0x2c));
  return;
}



