/* ================================================================
 * Function: FUN_10001000
 * Address:  10001000
 * ================================================================ */

undefined2 FUN_10001000(undefined4 param_1)

{
  undefined2 local_8;
  
  switch(param_1) {
  case 0xe005:
    local_8 = 10;
    break;
  case 0xe006:
  case 0xe074:
    local_8 = 0x15;
    break;
  default:
    local_8 = 0;
    break;
  case 0xe00a:
    local_8 = 0x191;
    break;
  case 0xe00b:
  case 0xe03a:
    local_8 = 7;
    break;
  case 0xe00d:
    local_8 = 0x1f;
    break;
  case 0xe010:
  case 0xe029:
  case 0xe02b:
  case 0xe02d:
  case 0xe02f:
  case 0xe03e:
  case 0xe040:
  case 0xe042:
  case 0xe072:
  case 0xe073:
    local_8 = 9;
    break;
  case 0xe011:
  case 0xe02a:
  case 0xe02c:
  case 0xe02e:
  case 0xe030:
  case 0xe03f:
  case 0xe041:
  case 0xe043:
    local_8 = 4;
    break;
  case 0xe025:
  case 0xe026:
  case 0xe027:
  case 0xe028:
    local_8 = 9;
    break;
  case 0xe032:
  case 0xe033:
  case 0xe034:
  case 0xe035:
  case 0xe044:
  case 0xe045:
  case 0xe046:
  case 0xe047:
  case 0xe050:
    local_8 = 0xe;
    break;
  case 0xe048:
    local_8 = 0xd;
    break;
  case 0xe051:
    local_8 = 6;
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_1000113e
 * Address:  1000113e
 * ================================================================ */

bool FUN_1000113e(int param_1,ushort *param_2,undefined4 param_3,int *param_4,ushort param_5,
                 ushort *param_6)

{
  bool bVar1;
  
  *param_6 = *param_6 + 1;
  bVar1 = *param_6 <= param_5;
  if (bVar1) {
    *(char *)(param_1 + (uint)*param_2) = (char)((uint)param_3 >> 8);
    *param_4 = *param_4 + (uint)*(byte *)(param_1 + (uint)*param_2);
    *param_2 = *param_2 + 1;
    *param_6 = *param_6 + 1;
    if (param_5 < *param_6) {
      bVar1 = false;
    }
    else {
      *(char *)(param_1 + (uint)*param_2) = (char)param_3;
      *param_4 = *param_4 + (uint)*(byte *)(param_1 + (uint)*param_2);
      *param_2 = *param_2 + 1;
    }
  }
  return bVar1;
}



/* ================================================================
 * Function: FUN_10001259
 * Address:  10001259
 * ================================================================ */

bool FUN_10001259(int param_1,ushort *param_2,undefined4 param_3,int *param_4,ushort param_5,
                 ushort *param_6)

{
  bool bVar1;
  
  *param_6 = *param_6 + 1;
  bVar1 = *param_6 <= param_5;
  if (bVar1) {
    *(char *)(param_1 + (uint)*param_2) = (char)((uint)param_3 >> 0x18);
    *param_4 = *param_4 + (uint)*(byte *)(param_1 + (uint)*param_2);
    *param_2 = *param_2 + 1;
    *param_6 = *param_6 + 1;
    if (param_5 < *param_6) {
      bVar1 = false;
    }
    else {
      *(char *)(param_1 + (uint)*param_2) = (char)((uint)param_3 >> 0x10);
      *param_4 = *param_4 + (uint)*(byte *)(param_1 + (uint)*param_2);
      *param_2 = *param_2 + 1;
    }
  }
  if (bVar1) {
    *param_6 = *param_6 + 1;
    if (param_5 < *param_6) {
      bVar1 = false;
    }
    else {
      *(char *)(param_1 + (uint)*param_2) = (char)((uint)param_3 >> 8);
      *param_4 = *param_4 + (uint)*(byte *)(param_1 + (uint)*param_2);
      *param_2 = *param_2 + 1;
    }
  }
  if (bVar1) {
    *param_6 = *param_6 + 1;
    if (param_5 < *param_6) {
      bVar1 = false;
    }
    else {
      *(char *)(param_1 + (uint)*param_2) = (char)param_3;
      *param_4 = *param_4 + (uint)*(byte *)(param_1 + (uint)*param_2);
      *param_2 = *param_2 + 1;
    }
  }
  return bVar1;
}



/* ================================================================
 * Function: FUN_1000146d
 * Address:  1000146d
 * ================================================================ */

undefined4
FUN_1000146d(int param_1,ushort *param_2,float param_3,int *param_4,ushort param_5,ushort *param_6)

{
  undefined2 extraout_var;
  undefined2 uVar1;
  undefined2 local_c [2];
  undefined2 local_8 [2];
  
  local_8[0] = 0;
  local_c[0] = 0;
  FUN_10001beb(param_3,1e-05,local_8,local_c);
  uVar1 = (undefined2)((uint)param_6 >> 0x10);
  FUN_1000113e(param_1,param_2,CONCAT22(uVar1,local_8[0]),param_4,param_5,param_6);
  FUN_1000113e(param_1,param_2,CONCAT22(uVar1,local_c[0]),param_4,param_5,param_6);
  return CONCAT22(extraout_var,1);
}



/* ================================================================
 * Function: FUN_100014e9
 * Address:  100014e9
 * ================================================================ */

bool FUN_100014e9(int param_1,ushort *param_2,undefined1 param_3,int *param_4,ushort param_5,
                 ushort *param_6)

{
  ushort uVar1;
  
  *param_6 = *param_6 + 1;
  uVar1 = *param_6;
  if (uVar1 <= param_5) {
    *(undefined1 *)(param_1 + (uint)*param_2) = param_3;
    *param_4 = *param_4 + (uint)*(byte *)(param_1 + (uint)*param_2);
    *param_2 = *param_2 + 1;
  }
  return uVar1 <= param_5;
}



/* ================================================================
 * Function: FUN_10001569
 * Address:  10001569
 * ================================================================ */

short FUN_10001569(int param_1,ushort *param_2,int param_3,ushort param_4,int *param_5,
                  ushort param_6,ushort *param_7)

{
  ushort uVar1;
  short local_c;
  
  local_c = 1;
  uVar1 = 0;
  while (((uVar1 < param_4 && (*(char *)(param_3 + (uint)uVar1) != '\0')) && (local_c == 1))) {
    *param_7 = *param_7 + 1;
    if (param_6 < *param_7) {
      local_c = 0;
    }
    if (local_c == 1) {
      *(undefined1 *)(param_1 + (uint)*param_2) = *(undefined1 *)(param_3 + (uint)uVar1);
      *param_5 = *param_5 + (uint)*(byte *)(param_1 + (uint)*param_2);
      *param_2 = *param_2 + 1;
      uVar1 = uVar1 + 1;
    }
  }
  *param_7 = *param_7 + 1;
  if (param_6 < *param_7) {
    local_c = 0;
  }
  else {
    *(undefined1 *)(param_1 + (uint)*param_2) = 0;
    *param_2 = *param_2 + 1;
  }
  return local_c;
}



/* ================================================================
 * Function: FUN_100016a3
 * Address:  100016a3
 * ================================================================ */

undefined4 FUN_100016a3(int param_1,ushort *param_2,short *param_3,int *param_4)

{
  ushort uVar1;
  undefined4 local_8;
  
  *param_3 = 0;
  local_8 = (uint)*(byte *)(param_1 + (uint)*param_2);
  *param_3 = (ushort)*(byte *)(param_1 + (uint)*param_2) << 8;
  *param_4 = *param_4 + local_8;
  *param_2 = *param_2 + 1;
  local_8 = (uint)*(byte *)(param_1 + (uint)*param_2);
  *param_3 = *param_3 + (ushort)*(byte *)(param_1 + (uint)*param_2);
  *param_4 = *param_4 + local_8;
  uVar1 = *param_2;
  *param_2 = (ushort)(uVar1 + 1);
  return CONCAT22((short)(uVar1 + 1 >> 0x10),1);
}



/* ================================================================
 * Function: FUN_1000175a
 * Address:  1000175a
 * ================================================================ */

undefined4 FUN_1000175a(int param_1,ushort *param_2,int *param_3,int *param_4)

{
  ushort uVar1;
  undefined4 local_8;
  
  *param_3 = 0;
  local_8 = (uint)*(byte *)(param_1 + (uint)*param_2);
  *param_4 = *param_4 + local_8;
  *param_3 = local_8 << 0x18;
  *param_2 = *param_2 + 1;
  local_8 = (uint)*(byte *)(param_1 + (uint)*param_2);
  *param_4 = *param_4 + local_8;
  *param_3 = *param_3 + local_8 * 0x10000;
  *param_2 = *param_2 + 1;
  local_8 = (uint)*(byte *)(param_1 + (uint)*param_2);
  *param_4 = *param_4 + local_8;
  *param_3 = *param_3 + local_8 * 0x100;
  *param_2 = *param_2 + 1;
  local_8 = (uint)*(byte *)(param_1 + (uint)*param_2);
  *param_4 = *param_4 + local_8;
  *param_3 = *param_3 + local_8;
  uVar1 = *param_2;
  *param_2 = (ushort)(uVar1 + 1);
  return CONCAT22((short)(uVar1 + 1 >> 0x10),1);
}



/* ================================================================
 * Function: FUN_100018a7
 * Address:  100018a7
 * ================================================================ */

undefined4 FUN_100018a7(int param_1,ushort *param_2,float *param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  ushort local_18;
  short local_14 [4];
  short local_c [4];
  
  local_c[0] = 0;
  local_14[0] = 0;
  FUN_100016a3(param_1,param_2,local_c,param_4);
  uVar1 = FUN_100016a3(param_1,param_2,local_14,param_4);
  iVar2 = CONCAT22((short)((uint)uVar1 >> 0x10),local_14[0]);
  if (local_14[0] == 0) {
    *param_3 = 0.0;
  }
  else {
    iVar2 = (int)local_14[0];
    *param_3 = (float)(int)local_c[0] / (float)iVar2;
  }
  local_18 = (ushort)(local_14[0] != 0);
  return CONCAT22((short)((uint)iVar2 >> 0x10),local_18);
}



/* ================================================================
 * Function: FUN_10001935
 * Address:  10001935
 * ================================================================ */

undefined4 FUN_10001935(int param_1,ushort *param_2,undefined4 *param_3,int *param_4)

{
  undefined4 local_c;
  
  *param_3 = 0;
  *param_4 = *param_4 + (uint)*(byte *)(param_1 + (uint)*param_2);
                    /* WARNING: Ignoring partial resolution of indirect */
  local_c._0_1_ = *(undefined1 *)(param_1 + (uint)*param_2);
  *param_2 = *param_2 + 1;
  *param_4 = *param_4 + (uint)*(byte *)(param_1 + (uint)*param_2);
  *param_2 = *param_2 + 1;
  *param_4 = *param_4 + (uint)*(byte *)(param_1 + (uint)*param_2);
  *param_2 = *param_2 + 1;
  *param_4 = *param_4 + (uint)*(byte *)(param_1 + (uint)*param_2);
  *param_2 = *param_2 + 1;
  *param_3 = local_c;
  return CONCAT22((short)((uint)local_c >> 0x10),1);
}



/* ================================================================
 * Function: FUN_10001a9e
 * Address:  10001a9e
 * ================================================================ */

undefined4 FUN_10001a9e(int param_1,ushort *param_2,undefined1 *param_3,int *param_4)

{
  *param_3 = *(undefined1 *)(param_1 + (uint)*param_2);
  *param_4 = *param_4 + (uint)*(byte *)(param_1 + (uint)*param_2);
  *param_2 = *param_2 + 1;
  return CONCAT22((short)((uint)param_2 >> 0x10),1);
}



/* ================================================================
 * Function: FUN_10001af2
 * Address:  10001af2
 * ================================================================ */

undefined4 FUN_10001af2(int param_1,ushort *param_2,int param_3,ushort param_4,int *param_5)

{
  ushort uVar1;
  ushort *puVar2;
  
  uVar1 = 0;
  while ((uVar1 < param_4 && (*(char *)(param_1 + (uint)*param_2) != '\0'))) {
    if (param_3 != 0) {
      *(undefined1 *)(param_3 + (uint)uVar1) = *(undefined1 *)(param_1 + (uint)*param_2);
    }
    *param_5 = *param_5 + (uint)*(byte *)(param_1 + (uint)*param_2);
    *param_2 = *param_2 + 1;
    uVar1 = uVar1 + 1;
  }
  puVar2 = (ushort *)0x0;
  if ((uVar1 < param_4) &&
     (puVar2 = (ushort *)(uint)*(byte *)(param_1 + (uint)*param_2),
     (ushort *)(uint)*(byte *)(param_1 + (uint)*param_2) == (ushort *)0x0)) {
    if (param_3 != 0) {
      *(undefined1 *)(param_3 + (uint)uVar1) = 0;
    }
    *param_2 = *param_2 + 1;
    puVar2 = param_2;
  }
  return CONCAT22((short)((uint)puVar2 >> 0x10),1);
}



/* ================================================================
 * Function: FUN_10001beb
 * Address:  10001beb
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001beb(float param_1,float param_2,undefined2 *param_3,undefined2 *param_4)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  short sVar4;
  float10 fVar5;
  longlong lVar6;
  float local_30;
  float local_2c;
  float local_20;
  float local_18;
  float local_14;
  float local_10;
  short local_c;
  
  local_30 = param_1;
  local_10 = 1.0;
  local_20 = 0.0;
  local_18 = 0.0;
  local_2c = 1.0;
  fVar5 = FUN_100055b5(SUB84((double)param_1,0),(int)((ulonglong)(double)param_1 >> 0x20));
  uVar3 = 0;
  if (fVar5 < (float10)param_2) {
    param_1 = 0.0;
  }
  while (uVar3 < 10000) {
    lVar6 = __ftol();
    sVar4 = (short)lVar6;
    fVar1 = (float)(int)sVar4 * local_2c + local_20;
    local_20 = local_2c;
    fVar2 = (float)(int)sVar4 * local_18 + local_10;
    local_10 = local_18;
    local_14 = param_1 - fVar1 / fVar2;
    if (local_14 < _DAT_1000c0e4) {
      local_14 = local_14 * _DAT_1000c0e0;
    }
    lVar6 = __ftol();
    local_c = (short)lVar6;
    while (local_c != 0) {
      local_14 = local_14 * _DAT_1000c0dc;
      lVar6 = __ftol();
      local_c = (short)lVar6;
    }
    if (((float)(int)sVar4 == local_30) || (local_14 <= param_2)) break;
    local_30 = _DAT_1000c0d8 / (local_30 - (float)(int)sVar4);
    local_2c = fVar1;
    local_18 = fVar2;
    uVar3 = uVar3 + 1;
  }
  if ((ushort)(uVar3 + 1) < 10000) {
    lVar6 = __ftol();
    *param_3 = (short)lVar6;
    lVar6 = __ftol();
    *param_4 = (short)lVar6;
  }
  else {
    *param_3 = 0xffff;
    *param_4 = 0;
  }
  return;
}



/* ================================================================
 * Function: FUN_10001db5
 * Address:  10001db5
 * ================================================================ */

undefined4 FUN_10001db5(int param_1,ushort *param_2,undefined2 param_3)

{
  *(undefined1 *)(param_1 + (uint)*param_2) = 0x4f;
  *param_2 = *param_2 + 1;
  *(undefined1 *)(param_1 + (uint)*param_2) = 0xff;
  *param_2 = *param_2 + 1;
  *(char *)(param_1 + (uint)*param_2) = (char)((ushort)param_3 >> 8);
  *param_2 = *param_2 + 1;
  *(char *)(param_1 + (uint)*param_2) = (char)param_3;
  *param_2 = *param_2 + 1;
  return CONCAT22((short)((uint)param_2 >> 0x10),1);
}



/* ================================================================
 * Function: FUN_10001e8d
 * Address:  10001e8d
 * ================================================================ */

undefined4 FUN_10001e8d(int param_1,ushort *param_2,ushort param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  undefined2 local_14;
  undefined4 local_c;
  undefined4 local_8;
  
  bVar1 = *(byte *)(param_1 + (uint)*param_2);
  *param_2 = *param_2 + 1;
  bVar2 = *(byte *)(param_1 + (uint)*param_2);
  *param_2 = *param_2 + 1;
  local_c = (uint)param_3;
  bVar3 = *(byte *)(param_1 + (uint)*param_2);
  *param_2 = *param_2 + 1;
  local_8 = (uint)(ushort)((ushort)bVar3 * 0x100 + (ushort)*(byte *)(param_1 + (uint)*param_2));
  uVar4 = *param_2;
  *param_2 = (ushort)(uVar4 + 1);
  uVar5 = uVar4 + 1;
  if (((ushort)((ushort)bVar1 * 0x100 + (ushort)bVar2) == 0x4fff) &&
     (uVar5 = local_8, local_8 == local_c)) {
    local_14 = 1;
  }
  else {
    local_14 = 0;
    local_8 = uVar5;
  }
  return CONCAT22((short)(local_8 >> 0x10),local_14);
}



/* ================================================================
 * Function: Nvram_Proto_Ver
 * Address:  10001fc0
 * ================================================================ */

undefined2 Nvram_Proto_Ver(void)

{
                    /* 0x1fc0  23  Nvram_Proto_Ver */
  return 4;
}



/* ================================================================
 * Function: Set_IDLongParam
 * Address:  10001fc9
 * ================================================================ */

undefined2
Set_IDLongParam(uint param_1,uint param_2,int param_3,ushort *param_4,short *param_5,ushort param_6,
               short *param_7)

{
  short sVar1;
  uint local_38;
  undefined2 local_30;
  uint local_28;
  uint local_24;
  undefined2 local_20;
  short local_1c [2];
  ushort local_18 [2];
  short local_14;
  int local_10;
  uint local_c;
  undefined1 local_8;
  
                    /* 0x1fc9  29  Set_IDLongParam */
  local_30 = 0;
  local_14 = 0;
  local_38 = 0;
  local_24 = 0;
  local_10 = 0;
  local_18[0] = 0;
  local_20 = 0;
  local_28 = local_28 & 0xffff0000;
  *param_7 = 0;
  if (param_1 == 0x5000) {
    local_38 = param_1;
    local_14 = 1;
    local_1c[0] = 0x5a5a;
    FUN_1000113e(param_3,(ushort *)&local_28,CONCAT22((short)((uint)local_18 >> 0x10),0x5a5a),
                 &local_10,param_6,local_18);
  }
  else {
    FUN_100016a3(param_3,(ushort *)&local_28,local_1c,&local_10);
    local_18[0] = (ushort)local_28;
  }
  if (param_1 == 0x5001) {
    local_38 = param_1;
    local_14 = 1;
    local_1c[0] = (short)param_2;
    FUN_1000113e(param_3,(ushort *)&local_28,
                 CONCAT22((short)((uint)local_18 >> 0x10),(short)param_2),&local_10,param_6,local_18
                );
  }
  else {
    FUN_100016a3(param_3,(ushort *)&local_28,local_1c,&local_10);
    local_18[0] = (ushort)local_28;
  }
  if (param_1 == 0x5002) {
    local_38 = param_1;
    local_14 = 1;
    local_1c[0] = (short)param_2;
    FUN_1000113e(param_3,(ushort *)&local_28,
                 CONCAT22((short)((uint)local_18 >> 0x10),(short)param_2),&local_10,param_6,local_18
                );
  }
  else {
    FUN_100016a3(param_3,(ushort *)&local_28,local_1c,&local_10);
    local_18[0] = (ushort)local_28;
  }
  if (param_1 == 0x5003) {
    local_38 = param_1;
    local_14 = 1;
    if (param_2 < 10) {
      param_2 = 10;
    }
    local_1c[0] = (short)param_2 + 4;
    FUN_1000113e(param_3,(ushort *)&local_28,CONCAT22((short)((uint)local_18 >> 0x10),local_1c[0]),
                 &local_10,param_6,local_18);
  }
  else {
    FUN_100016a3(param_3,(ushort *)&local_28,local_1c,&local_10);
    local_18[0] = (ushort)local_28;
  }
  if (param_1 == 0x5004) {
    local_38 = param_1;
    local_14 = 1;
    local_1c[0] = (short)param_2;
    FUN_1000113e(param_3,(ushort *)&local_28,
                 CONCAT22((short)((uint)local_18 >> 0x10),(short)param_2),&local_10,param_6,local_18
                );
  }
  else {
    FUN_100016a3(param_3,(ushort *)&local_28,local_1c,&local_10);
  }
  if ((local_14 != 0) && (param_4 == (ushort *)0x0)) {
    return 1;
  }
  if ((uint)*param_4 < (local_28 & 0xffff)) {
    *param_4 = (ushort)local_28;
  }
  local_18[0] = (ushort)local_28;
  if (local_14 == 0) {
    local_24 = param_1 & 0xe000;
    if (local_24 < 0x8001) {
      if (local_24 == 0x8000) {
        local_14 = 1;
        local_1c[0] = (short)param_1;
        FUN_1000113e(param_3,param_4,CONCAT22((short)((uint)local_18 >> 0x10),(short)param_1),
                     &local_10,param_6,local_18);
        local_c = param_2;
        FUN_10001259(param_3,param_4,param_2,&local_10,param_6,local_18);
        *param_5 = *param_5 + 1;
      }
      else {
        if ((local_24 != 0x4000) && (local_24 != 0x6000)) goto LAB_10002406;
        local_14 = 1;
        local_1c[0] = (short)param_1;
        FUN_1000113e(param_3,param_4,CONCAT22((short)((uint)local_18 >> 0x10),(short)param_1),
                     &local_10,param_6,local_18);
        local_1c[0] = (short)param_2;
        FUN_1000113e(param_3,param_4,CONCAT22((short)((uint)local_18 >> 0x10),(short)param_2),
                     &local_10,param_6,local_18);
        *param_5 = *param_5 + 1;
      }
    }
    else {
      if ((local_24 != 0xc000) && (local_24 != 0xe000)) {
LAB_10002406:
        *param_7 = 2;
        return 0;
      }
      sVar1 = FUN_10001000(param_1);
      if ((sVar1 != 0) || ((local_38 & 0x1000) != 0)) {
        *param_7 = 2;
        return 0;
      }
      local_14 = 1;
      local_1c[0] = (short)param_1;
      FUN_1000113e(param_3,param_4,CONCAT22((short)((uint)local_18 >> 0x10),(short)param_1),
                   &local_10,param_6,local_18);
      local_8 = (undefined1)param_2;
      FUN_100014e9(param_3,param_4,(undefined1)param_2,&local_10,param_6,local_18);
      *param_5 = *param_5 + 1;
    }
  }
  if ((local_14 != 0) && (*param_7 == 0)) {
    local_30 = 1;
  }
  return local_30;
}



/* ================================================================
 * Function: Get_IDLongParam
 * Address:  1000243d
 * ================================================================ */

uint Get_IDLongParam(uint param_1,uint *param_2,ushort param_3,int param_4,undefined4 param_5,
                    ushort *param_6)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  uint local_44;
  undefined2 local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  ushort *local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  short local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
                    /* 0x243d  8  Get_IDLongParam */
  local_3c = 0;
  local_14 = 0;
  local_34 = local_34 & 0xffff0000;
  local_38 = local_38 & 0xffff0000;
  local_10 = 0;
  local_44 = 0;
  local_24 = (ushort *)0x0;
  local_28 = local_28 & 0xffff0000;
  local_20 = local_20 & 0xffff0000;
  local_30 = local_30 & 0xffff0000;
  local_18 = local_18 & 0xffff0000;
  local_2c = local_2c & 0xffff0000;
  *param_2 = 0;
  *param_6 = 0;
  FUN_100016a3(param_4,(ushort *)&local_38,(short *)&local_1c,&local_10);
  if (param_1 == 0x5000) {
    *param_2 = local_1c & 0xffff;
    local_44 = param_1;
  }
  FUN_100016a3(param_4,(ushort *)&local_38,(short *)&local_1c,&local_10);
  if (param_1 == 0x5001) {
    *param_2 = local_1c & 0xffff;
    local_44 = param_1;
  }
  FUN_100016a3(param_4,(ushort *)&local_38,(short *)&local_20,&local_10);
  if (param_1 == 0x5002) {
    *param_2 = local_20 & 0xffff;
    local_44 = param_1;
  }
  FUN_100016a3(param_4,(ushort *)&local_38,(short *)&local_18,&local_10);
  if (param_1 == 0x5003) {
    *param_2 = local_18 & 0xffff;
    local_44 = param_1;
  }
  FUN_100016a3(param_4,(ushort *)&local_38,(short *)&local_30,&local_10);
  if (param_1 == 0x5004) {
    *param_2 = local_30 & 0xffff;
    local_44 = param_1;
  }
  if (local_44 == param_1) {
    local_14 = 1;
  }
  local_2c = local_2c & 0xffff0000;
  do {
    uVar3 = local_30 & 0xffff;
    if (((uVar3 <= (local_2c & 0xffff)) || ((local_18 & 0xffff) <= (local_38 & 0xffff))) ||
       (uVar3 = (uint)local_14, uVar3 != 0)) {
      if (local_14 == 0) {
        *param_6 = 3;
        uVar3 = (uint)param_6 & 0xffff0000;
      }
      else {
        if ((local_14 != 0) && (uVar3 = (uint)*param_6, uVar3 == 0)) {
          local_3c = 1;
        }
        uVar3 = CONCAT22((short)(uVar3 >> 0x10),local_3c);
      }
      return uVar3;
    }
    FUN_100016a3(param_4,(ushort *)&local_38,(short *)&local_1c,&local_10);
    uVar3 = local_1c;
    uVar4 = local_1c & 0xffff;
    local_24 = (ushort *)(local_1c & 0xe000);
    local_28 = local_28 & 0xffff0000;
    if (local_24 < (ushort *)0x8001) {
      if (local_24 == (ushort *)0x8000) {
        FUN_1000175a(param_4,(ushort *)&local_38,(int *)&local_c,&local_10);
        if (uVar4 == param_1) {
          uVar1 = (short)local_34 + 1;
          local_34 = CONCAT22(local_34._2_2_,uVar1);
          if (param_3 < uVar1) {
            *param_2 = local_c;
            local_14 = 1;
          }
        }
      }
      else if (local_24 == (ushort *)0x2000) {
        FUN_100016a3(param_4,(ushort *)&local_38,(short *)&local_1c,&local_10);
        FUN_100016a3(param_4,(ushort *)&local_38,(short *)&local_1c,&local_10);
      }
      else {
        if ((local_24 != (ushort *)0x4000) && (local_24 != (ushort *)0x6000)) goto LAB_1000288d;
        FUN_100016a3(param_4,(ushort *)&local_38,(short *)&local_1c,&local_10);
        if (uVar4 == param_1) {
          uVar1 = (short)local_34 + 1;
          local_34 = CONCAT22(local_34._2_2_,uVar1);
          if (param_3 < uVar1) {
            *param_2 = local_1c & 0xffff;
            local_14 = 1;
          }
        }
      }
    }
    else if (local_24 == (ushort *)0xc000) {
      FUN_10001a9e(param_4,(ushort *)&local_38,(undefined1 *)&local_8,&local_10);
      if (uVar4 == param_1) {
        uVar1 = (short)local_34 + 1;
        local_34 = CONCAT22(local_34._2_2_,uVar1);
        if (param_3 < uVar1) {
          *param_2 = local_8 & 0xff;
          local_14 = 1;
        }
      }
    }
    else {
      if (local_24 != (ushort *)0xe000) {
LAB_1000288d:
        if (uVar4 == param_1) {
          *param_6 = 2;
          param_6 = local_24;
        }
        else {
          *param_6 = 1;
        }
        return (uint)param_6 & 0xffff0000;
      }
      sVar2 = FUN_10001000(uVar4);
      local_28 = CONCAT22(local_28._2_2_,sVar2);
      if ((sVar2 == 0) && ((uVar3 & 0x1000) != 0)) {
        FUN_100016a3(param_4,(ushort *)&local_38,(short *)&local_28,&local_10);
      }
      if ((local_28 & 0xffff) == 0) {
        FUN_10001a9e(param_4,(ushort *)&local_38,(undefined1 *)&local_8,&local_10);
        if (uVar4 == param_1) {
          uVar1 = (short)local_34 + 1;
          local_34 = CONCAT22(local_34._2_2_,uVar1);
          if (param_3 < uVar1) {
            *param_2 = local_8 & 0xff;
            local_14 = 1;
          }
        }
      }
      else {
        FUN_10001af2(param_4,(ushort *)&local_38,0,(ushort)local_28,&local_10);
      }
    }
    local_2c = CONCAT22(local_2c._2_2_,(short)local_2c + 1);
  } while( true );
}



/* ================================================================
 * Function: Set_IDDbleParam
 * Address:  10002902
 * ================================================================ */

undefined2
Set_IDDbleParam(uint param_1,double param_2,int param_3,ushort *param_4,short *param_5,
               ushort param_6,short *param_7)

{
  undefined2 local_2c;
  uint local_20;
  uint local_1c;
  undefined2 local_18;
  short local_14 [2];
  ushort local_10 [2];
  short local_c;
  int local_8;
  
                    /* 0x2902  28  Set_IDDbleParam */
  local_2c = 0;
  local_c = 0;
  local_1c = 0;
  local_8 = 0;
  local_10[0] = 0;
  local_18 = 0;
  local_20 = local_20 & 0xffff0000;
  *param_7 = 0;
  FUN_100016a3(param_3,(ushort *)&local_20,local_14,&local_8);
  local_10[0] = (ushort)local_20;
  FUN_100016a3(param_3,(ushort *)&local_20,local_14,&local_8);
  local_10[0] = (ushort)local_20;
  FUN_100016a3(param_3,(ushort *)&local_20,local_14,&local_8);
  local_10[0] = (ushort)local_20;
  FUN_100016a3(param_3,(ushort *)&local_20,local_14,&local_8);
  local_10[0] = (ushort)local_20;
  FUN_100016a3(param_3,(ushort *)&local_20,local_14,&local_8);
  if ((uint)*param_4 < (local_20 & 0xffff)) {
    *param_4 = (ushort)local_20;
  }
  local_10[0] = (ushort)local_20;
  if (local_c == 0) {
    local_1c = param_1 & 0xe000;
    if (local_1c != 0x2000) {
      *param_7 = 2;
      return 0;
    }
    local_c = 1;
    local_14[0] = (short)param_1;
    FUN_1000113e(param_3,param_4,CONCAT22((short)((uint)local_10 >> 0x10),(short)param_1),&local_8,
                 param_6,local_10);
    FUN_1000146d(param_3,param_4,(float)param_2,&local_8,param_6,local_10);
    *param_5 = *param_5 + 1;
  }
  if ((local_c != 0) && (*param_7 == 0)) {
    local_2c = 1;
  }
  return local_2c;
}



/* ================================================================
 * Function: Get_IDDbleParam
 * Address:  10002ac5
 * ================================================================ */

uint Get_IDDbleParam(double *param_1,double *param_2,ushort param_3,int param_4,undefined4 param_5,
                    short *param_6)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  double *pdVar5;
  ushort uVar6;
  undefined2 local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  float local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  short local_14;
  int local_10;
  int local_c;
  undefined1 local_8 [4];
  undefined2 uVar4;
  
                    /* 0x2ac5  7  Get_IDDbleParam */
  local_40 = 0;
  local_14 = 0;
  local_38 = local_38 & 0xffff0000;
  local_3c = local_3c & 0xffff0000;
  local_10 = 0;
  local_24 = 0;
  local_34 = local_34 & 0xffff0000;
  local_18 = local_18 & 0xffff0000;
  local_20 = local_20 & 0xffff0000;
  local_28 = local_28 & 0xffff0000;
  local_30 = local_30 & 0xffff0000;
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)((int)param_2 + 4) = 0;
  *param_6 = 0;
  FUN_100016a3(param_4,(ushort *)&local_3c,(short *)&local_1c,&local_10);
  FUN_100016a3(param_4,(ushort *)&local_3c,(short *)&local_1c,&local_10);
  FUN_100016a3(param_4,(ushort *)&local_3c,(short *)&local_20,&local_10);
  FUN_100016a3(param_4,(ushort *)&local_3c,(short *)&local_18,&local_10);
  uVar2 = FUN_100016a3(param_4,(ushort *)&local_3c,(short *)&local_34,&local_10);
  local_30 = local_30 & 0xffff0000;
  do {
    if ((((local_34 & 0xffff) <= (local_30 & 0xffff)) ||
        (uVar2 = local_3c & 0xffff, (local_18 & 0xffff) <= uVar2)) || (local_14 != 0)) {
      if (local_14 == 0) {
        *param_6 = 3;
        uVar2 = uVar2 & 0xffff0000;
      }
      else {
        if ((local_14 != 0) && (*param_6 == 0)) {
          local_40 = 1;
        }
        uVar2 = CONCAT22(local_14 >> 0xf,local_40);
      }
      return uVar2;
    }
    FUN_100016a3(param_4,(ushort *)&local_3c,(short *)&local_1c,&local_10);
    uVar2 = local_1c;
    pdVar5 = (double *)(local_1c & 0xffff);
    local_24 = local_1c & 0xe000;
    local_28 = local_28 & 0xffff0000;
    if (local_24 < 0x8001) {
      if (local_24 == 0x8000) {
        uVar3 = FUN_1000175a(param_4,(ushort *)&local_3c,&local_c,&local_10);
        uVar4 = (undefined2)((uint)uVar3 >> 0x10);
      }
      else if (local_24 == 0x2000) {
        if ((local_20 & 0xffff) < 3) {
          FUN_10001935(param_4,(ushort *)&local_3c,&local_2c,&local_10);
        }
        else {
          FUN_100018a7(param_4,(ushort *)&local_3c,&local_2c,&local_10);
        }
        if (pdVar5 == param_1) {
          uVar6 = (short)local_38 + 1;
          local_38 = CONCAT22(local_38._2_2_,uVar6);
          if (param_3 < uVar6) {
            *param_2 = (double)local_2c;
            local_14 = 1;
            pdVar5 = param_2;
          }
        }
        uVar4 = (undefined2)((uint)pdVar5 >> 0x10);
      }
      else {
        if ((local_24 != 0x4000) && (local_24 != 0x6000)) goto LAB_10002dbb;
        uVar3 = FUN_100016a3(param_4,(ushort *)&local_3c,(short *)&local_1c,&local_10);
        uVar4 = (undefined2)((uint)uVar3 >> 0x10);
      }
    }
    else if (local_24 == 0xc000) {
      uVar3 = FUN_10001a9e(param_4,(ushort *)&local_3c,local_8,&local_10);
      uVar4 = (undefined2)((uint)uVar3 >> 0x10);
    }
    else {
      if (local_24 != 0xe000) {
LAB_10002dbb:
        if (pdVar5 == param_1) {
          *param_6 = 2;
        }
        else {
          *param_6 = 1;
        }
        return 0;
      }
      sVar1 = FUN_10001000(pdVar5);
      local_28 = CONCAT22(local_28._2_2_,sVar1);
      if ((sVar1 == 0) && ((uVar2 & 0x1000) != 0)) {
        FUN_100016a3(param_4,(ushort *)&local_3c,(short *)&local_28,&local_10);
      }
      if ((local_28 & 0xffff) == 0) {
        uVar3 = FUN_10001a9e(param_4,(ushort *)&local_3c,local_8,&local_10);
        uVar4 = (undefined2)((uint)uVar3 >> 0x10);
      }
      else {
        uVar3 = FUN_10001af2(param_4,(ushort *)&local_3c,0,(ushort)local_28,&local_10);
        uVar4 = (undefined2)((uint)uVar3 >> 0x10);
      }
    }
    uVar2 = CONCAT22(uVar4,(short)local_30 + 1);
    local_30 = CONCAT22(local_30._2_2_,(short)local_30 + 1);
  } while( true );
}



/* ================================================================
 * Function: Set_IDStrParam
 * Address:  10002e30
 * ================================================================ */

undefined2
Set_IDStrParam(uint param_1,char *param_2,int param_3,ushort *param_4,short *param_5,ushort param_6,
              short *param_7)

{
  short sVar1;
  ushort uVar2;
  size_t sVar3;
  undefined2 local_34;
  uint local_28;
  uint local_24 [2];
  uint local_1c;
  undefined2 local_18;
  short local_14 [2];
  ushort local_10 [2];
  short local_c;
  int local_8;
  
                    /* 0x2e30  30  Set_IDStrParam */
  local_34 = 0;
  local_c = 0;
  local_24[1] = 0;
  local_1c = local_1c & 0xffff0000;
  local_8 = 0;
  local_10[0] = 0;
  local_18 = 0;
  local_24[0] = local_24[0] & 0xffff0000;
  *param_7 = 0;
  FUN_100016a3(param_3,(ushort *)local_24,local_14,&local_8);
  local_10[0] = (ushort)local_24[0];
  FUN_100016a3(param_3,(ushort *)local_24,local_14,&local_8);
  local_10[0] = (ushort)local_24[0];
  FUN_100016a3(param_3,(ushort *)local_24,local_14,&local_8);
  local_10[0] = (ushort)local_24[0];
  FUN_100016a3(param_3,(ushort *)local_24,local_14,&local_8);
  local_10[0] = (ushort)local_24[0];
  FUN_100016a3(param_3,(ushort *)local_24,local_14,&local_8);
  if ((uint)*param_4 < (local_24[0] & 0xffff)) {
    *param_4 = (ushort)local_24[0];
  }
  local_10[0] = (ushort)local_24[0];
  if (local_c == 0) {
    uVar2 = FUN_10001000(param_1);
    local_28 = (uint)uVar2;
    local_14[0] = (short)param_1;
    if ((uVar2 == 0) && ((param_1 & 0x1000) != 0)) {
      sVar3 = _strlen(param_2);
      local_28 = sVar3 & 0xffff;
    }
    if (local_28 == 0) {
      if ((param_1 & 0x1000) == 0) {
        *param_7 = 2;
        return 0;
      }
      local_c = 1;
    }
    else {
      local_c = 1;
      FUN_1000113e(param_3,param_4,CONCAT22((short)((uint)local_10 >> 0x10),local_14[0]),&local_8,
                   param_6,local_10);
      sVar3 = _strlen(param_2);
      sVar1 = (short)sVar3;
      if (local_28 < (sVar3 & 0xffff)) {
        sVar1 = (short)local_28;
      }
      local_1c = CONCAT22(local_1c._2_2_,sVar1);
      if ((param_1 & 0x1000) != 0) {
        local_14[0] = sVar1 + 1;
        FUN_1000113e(param_3,param_4,CONCAT22((short)((uint)local_10 >> 0x10),local_14[0]),&local_8,
                     param_6,local_10);
      }
      FUN_10001569(param_3,param_4,(int)param_2,(ushort)local_1c,&local_8,param_6,local_10);
      *param_5 = *param_5 + 1;
    }
  }
  if ((local_c != 0) && (*param_7 == 0)) {
    local_34 = 1;
  }
  return local_34;
}



/* ================================================================
 * Function: Get_IDStrParam
 * Address:  100030be
 * ================================================================ */

uint Get_IDStrParam(uint param_1,undefined1 *param_2,uint param_3,int param_4,undefined4 param_5,
                   short *param_6)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar5;
  undefined2 local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  short local_20 [2];
  uint local_1c;
  uint local_18;
  short local_14;
  int local_10;
  int local_c;
  undefined1 local_8 [4];
  undefined2 uVar4;
  
                    /* 0x30be  9  Get_IDStrParam */
  local_3c = 0;
  local_14 = 0;
  local_34 = local_34 & 0xffff0000;
  local_38 = local_38 & 0xffff0000;
  local_10 = 0;
  local_24 = 0;
  local_28 = local_28 & 0xffff0000;
  local_20[0] = 0;
  local_30 = local_30 & 0xffff0000;
  local_18 = local_18 & 0xffff0000;
  local_2c = local_2c & 0xffff0000;
  *param_2 = 0;
  *param_6 = 0;
  FUN_100016a3(param_4,(ushort *)&local_38,(short *)&local_1c,&local_10);
  FUN_100016a3(param_4,(ushort *)&local_38,(short *)&local_1c,&local_10);
  FUN_100016a3(param_4,(ushort *)&local_38,local_20,&local_10);
  FUN_100016a3(param_4,(ushort *)&local_38,(short *)&local_18,&local_10);
  uVar2 = FUN_100016a3(param_4,(ushort *)&local_38,(short *)&local_30,&local_10);
  local_2c = local_2c & 0xffff0000;
  do {
    if ((((local_30 & 0xffff) <= (local_2c & 0xffff)) ||
        (uVar2 = local_38 & 0xffff, (local_18 & 0xffff) <= uVar2)) || (local_14 != 0)) {
      if (local_14 == 0) {
        *param_6 = 3;
        uVar2 = uVar2 & 0xffff0000;
      }
      else {
        if ((local_14 != 0) && (*param_6 == 0)) {
          local_3c = 1;
        }
        uVar2 = CONCAT22(local_14 >> 0xf,local_3c);
      }
      return uVar2;
    }
    FUN_100016a3(param_4,(ushort *)&local_38,(short *)&local_1c,&local_10);
    uVar2 = local_1c;
    uVar5 = local_1c & 0xffff;
    local_24 = local_1c & 0xe000;
    local_28 = local_28 & 0xffff0000;
    if (local_24 < 0x8001) {
      if (local_24 == 0x8000) {
        uVar3 = FUN_1000175a(param_4,(ushort *)&local_38,&local_c,&local_10);
        uVar4 = (undefined2)((uint)uVar3 >> 0x10);
      }
      else if (local_24 == 0x2000) {
        FUN_100016a3(param_4,(ushort *)&local_38,(short *)&local_1c,&local_10);
        uVar3 = FUN_100016a3(param_4,(ushort *)&local_38,(short *)&local_1c,&local_10);
        uVar4 = (undefined2)((uint)uVar3 >> 0x10);
      }
      else {
        if ((local_24 != 0x4000) && (local_24 != 0x6000)) goto LAB_100033ae;
        uVar3 = FUN_100016a3(param_4,(ushort *)&local_38,(short *)&local_1c,&local_10);
        uVar4 = (undefined2)((uint)uVar3 >> 0x10);
      }
    }
    else if (local_24 == 0xc000) {
      uVar3 = FUN_10001a9e(param_4,(ushort *)&local_38,local_8,&local_10);
      uVar4 = (undefined2)((uint)uVar3 >> 0x10);
    }
    else {
      if (local_24 != 0xe000) {
LAB_100033ae:
        if (uVar5 == param_1) {
          *param_6 = 2;
        }
        else {
          *param_6 = 1;
        }
        return 0;
      }
      sVar1 = FUN_10001000(uVar5);
      local_28 = CONCAT22(local_28._2_2_,sVar1);
      if ((sVar1 == 0) && ((uVar2 & 0x1000) != 0)) {
        FUN_100016a3(param_4,(ushort *)&local_38,(short *)&local_28,&local_10);
      }
      if ((local_28 & 0xffff) == 0) {
        uVar3 = FUN_10001a9e(param_4,(ushort *)&local_38,local_8,&local_10);
        uVar4 = (undefined2)((uint)uVar3 >> 0x10);
      }
      else {
        if (uVar5 == param_1) {
          local_34 = CONCAT22(local_34._2_2_,(short)local_34 + 1);
        }
        if ((uVar5 == param_1) && ((param_3 & 0xffff) < (local_34 & 0xffff))) {
          local_14 = 1;
          uVar3 = FUN_10001af2(param_4,(ushort *)&local_38,(int)param_2,(ushort)local_28,&local_10);
          uVar4 = (undefined2)((uint)uVar3 >> 0x10);
        }
        else {
          uVar3 = FUN_10001af2(param_4,(ushort *)&local_38,0,(ushort)local_28,&local_10);
          uVar4 = (undefined2)((uint)uVar3 >> 0x10);
        }
      }
    }
    uVar2 = CONCAT22(uVar4,(short)local_2c + 1);
    local_2c = CONCAT22(local_2c._2_2_,(short)local_2c + 1);
  } while( true );
}



/* ================================================================
 * Function: Set_CheckSum
 * Address:  10003423
 * ================================================================ */

bool Set_CheckSum(int param_1,uint param_2,undefined4 param_3,undefined2 *param_4)

{
  short sVar1;
  uint uVar2;
  bool bVar3;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  short local_18 [2];
  uint local_14;
  uint local_10 [2];
  undefined1 local_8 [4];
  
                    /* 0x3423  27  Set_CheckSum */
  local_10[1] = 0;
  local_20 = local_20 & 0xffff0000;
  local_1c = 0;
  local_24 = local_24 & 0xffff0000;
  local_18[0] = 0;
  local_2c = local_2c & 0xffff0000;
  local_10[0] = local_10[0] & 0xffff0000;
  local_28 = local_28 & 0xffff0000;
  *param_4 = 0;
  FUN_100016a3(param_1,(ushort *)&local_20,(short *)&local_14,(int *)(local_10 + 1));
  FUN_100016a3(param_1,(ushort *)&local_20,(short *)&local_14,(int *)(local_10 + 1));
  FUN_100016a3(param_1,(ushort *)&local_20,local_18,(int *)(local_10 + 1));
  FUN_100016a3(param_1,(ushort *)&local_20,(short *)local_10,(int *)(local_10 + 1));
  FUN_100016a3(param_1,(ushort *)&local_20,(short *)&local_2c,(int *)(local_10 + 1));
  local_28 = local_28 & 0xffff0000;
  do {
    if (((local_2c & 0xffff) <= (local_28 & 0xffff)) ||
       ((local_10[0] & 0xffff) <= (local_20 & 0xffff))) {
      if (((param_2 & 0xffff) == (local_20 & 0xffff)) &&
         ((param_2 & 0xffff) <= (local_10[0] & 0xffff))) {
        uVar2 = FUN_10001db5(param_1,(ushort *)&local_20,(short)local_10[1]);
        bVar3 = (uVar2 & 0xffff) != 0;
      }
      else {
        *param_4 = 5;
        bVar3 = false;
      }
      return bVar3;
    }
    FUN_100016a3(param_1,(ushort *)&local_20,(short *)&local_14,(int *)(local_10 + 1));
    uVar2 = local_14;
    local_1c = local_14 & 0xe000;
    local_24 = local_24 & 0xffff0000;
    if (local_1c < 0x8001) {
      if (local_1c == 0x8000) {
        FUN_100016a3(param_1,(ushort *)&local_20,(short *)&local_14,(int *)(local_10 + 1));
        FUN_100016a3(param_1,(ushort *)&local_20,(short *)&local_14,(int *)(local_10 + 1));
      }
      else if (local_1c == 0x2000) {
        FUN_100016a3(param_1,(ushort *)&local_20,(short *)&local_14,(int *)(local_10 + 1));
        FUN_100016a3(param_1,(ushort *)&local_20,(short *)&local_14,(int *)(local_10 + 1));
      }
      else {
        if ((local_1c != 0x4000) && (local_1c != 0x6000)) goto LAB_100036b2;
        FUN_100016a3(param_1,(ushort *)&local_20,(short *)&local_14,(int *)(local_10 + 1));
      }
    }
    else if (local_1c == 0xc000) {
      FUN_10001a9e(param_1,(ushort *)&local_20,local_8,(int *)(local_10 + 1));
    }
    else {
      if (local_1c != 0xe000) {
LAB_100036b2:
        *param_4 = 1;
        return false;
      }
      sVar1 = FUN_10001000(local_14 & 0xffff);
      local_24 = CONCAT22(local_24._2_2_,sVar1);
      if ((sVar1 == 0) && ((uVar2 & 0x1000) != 0)) {
        FUN_100016a3(param_1,(ushort *)&local_20,(short *)&local_24,(int *)(local_10 + 1));
      }
      if ((local_24 & 0xffff) == 0) {
        FUN_10001a9e(param_1,(ushort *)&local_20,local_8,(int *)(local_10 + 1));
      }
      else {
        FUN_10001af2(param_1,(ushort *)&local_20,0,(ushort)local_24,(int *)(local_10 + 1));
      }
    }
    local_28 = CONCAT22(local_28._2_2_,(short)local_28 + 1);
  } while( true );
}



/* ================================================================
 * Function: Verify_CheckSum
 * Address:  1000373f
 * ================================================================ */

bool Verify_CheckSum(int param_1)

{
  short sVar1;
  uint uVar2;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  short local_1c [2];
  uint local_18;
  uint local_14 [3];
  undefined1 local_8 [4];
  
                    /* 0x373f  32  Verify_CheckSum */
  local_14[1] = 0;
  local_24 = local_24 & 0xffff0000;
  local_20 = 0;
  local_28 = local_28 & 0xffff0000;
  local_1c[0] = 0;
  local_30 = local_30 & 0xffff0000;
  local_14[0] = local_14[0] & 0xffff0000;
  local_2c = local_2c & 0xffff0000;
  FUN_100016a3(param_1,(ushort *)&local_24,(short *)&local_18,(int *)(local_14 + 1));
  FUN_100016a3(param_1,(ushort *)&local_24,(short *)&local_18,(int *)(local_14 + 1));
  FUN_100016a3(param_1,(ushort *)&local_24,local_1c,(int *)(local_14 + 1));
  FUN_100016a3(param_1,(ushort *)&local_24,(short *)local_14,(int *)(local_14 + 1));
  FUN_100016a3(param_1,(ushort *)&local_24,(short *)&local_30,(int *)(local_14 + 1));
  local_2c = local_2c & 0xffff0000;
  do {
    if (((local_30 & 0xffff) <= (local_2c & 0xffff)) ||
       ((local_14[0] & 0xffff) <= (local_24 & 0xffff))) {
      uVar2 = FUN_10001e8d(param_1,(ushort *)&local_24,(ushort)local_14[1]);
      return (uVar2 & 0xffff) != 0;
    }
    FUN_100016a3(param_1,(ushort *)&local_24,(short *)&local_18,(int *)(local_14 + 1));
    uVar2 = local_18;
    local_20 = local_18 & 0xe000;
    local_28 = local_28 & 0xffff0000;
    if (local_20 < 0x8001) {
      if (local_20 == 0x8000) {
        FUN_1000175a(param_1,(ushort *)&local_24,(int *)(local_14 + 2),(int *)(local_14 + 1));
      }
      else if (local_20 == 0x2000) {
        FUN_100016a3(param_1,(ushort *)&local_24,(short *)&local_18,(int *)(local_14 + 1));
        FUN_100016a3(param_1,(ushort *)&local_24,(short *)&local_18,(int *)(local_14 + 1));
      }
      else {
        if ((local_20 != 0x4000) && (local_20 != 0x6000)) {
          return false;
        }
        FUN_100016a3(param_1,(ushort *)&local_24,(short *)&local_18,(int *)(local_14 + 1));
      }
    }
    else if (local_20 == 0xc000) {
      FUN_10001a9e(param_1,(ushort *)&local_24,local_8,(int *)(local_14 + 1));
    }
    else {
      if (local_20 != 0xe000) {
        return false;
      }
      sVar1 = FUN_10001000(local_18 & 0xffff);
      local_28 = CONCAT22(local_28._2_2_,sVar1);
      if ((sVar1 == 0) && ((uVar2 & 0x1000) != 0)) {
        FUN_100016a3(param_1,(ushort *)&local_24,(short *)&local_28,(int *)(local_14 + 1));
      }
      if ((local_28 & 0xffff) == 0) {
        FUN_10001a9e(param_1,(ushort *)&local_24,local_8,(int *)(local_14 + 1));
      }
      else {
        FUN_10001af2(param_1,(ushort *)&local_24,0,(ushort)local_28,(int *)(local_14 + 1));
      }
    }
    local_2c = CONCAT22(local_2c._2_2_,(short)local_2c + 1);
  } while( true );
}



/* ================================================================
 * Function: Set_ADCInfo
 * Address:  100039fe
 * ================================================================ */

bool Set_ADCInfo(short param_1,short param_2,short param_3,short param_4,undefined4 param_5,
                undefined4 param_6,int param_7,ushort *param_8,short *param_9,ushort param_10,
                undefined2 *param_11)

{
  ushort uVar1;
  uint local_1c [2];
  undefined2 local_14;
  short local_10 [2];
  ushort local_c [2];
  int local_8;
  
                    /* 0x39fe  26  Set_ADCInfo */
  local_1c[1] = 0;
  local_8 = 0;
  local_c[0] = 0;
  local_14 = 0;
  local_1c[0] = local_1c[0] & 0xffff0000;
  *param_11 = 0;
  FUN_100016a3(param_7,(ushort *)local_1c,local_10,&local_8);
  local_c[0] = (ushort)local_1c[0];
  FUN_100016a3(param_7,(ushort *)local_1c,local_10,&local_8);
  local_c[0] = (ushort)local_1c[0];
  FUN_100016a3(param_7,(ushort *)local_1c,local_10,&local_8);
  local_c[0] = (ushort)local_1c[0];
  FUN_100016a3(param_7,(ushort *)local_1c,local_10,&local_8);
  local_c[0] = (ushort)local_1c[0];
  FUN_100016a3(param_7,(ushort *)local_1c,local_10,&local_8);
  local_c[0] = (ushort)local_1c[0];
  if ((uint)*param_8 < (local_1c[0] & 0xffff)) {
    *param_8 = (ushort)local_1c[0];
  }
  local_10[0] = 0x4012;
  FUN_1000113e(param_7,param_8,CONCAT22((short)((uint)local_c >> 0x10),0x4012),&local_8,param_10,
               local_c);
  local_10[0] = param_1;
  FUN_1000113e(param_7,param_8,CONCAT22((short)((uint)local_c >> 0x10),param_1),&local_8,param_10,
               local_c);
  *param_9 = *param_9 + 1;
  local_10[0] = 0x4015;
  FUN_1000113e(param_7,param_8,CONCAT22((short)((uint)local_c >> 0x10),0x4015),&local_8,param_10,
               local_c);
  local_10[0] = param_2;
  FUN_1000113e(param_7,param_8,CONCAT22((short)((uint)local_c >> 0x10),param_2),&local_8,param_10,
               local_c);
  *param_9 = *param_9 + 1;
  local_10[0] = 0x4049;
  FUN_1000113e(param_7,param_8,CONCAT22((short)((uint)local_c >> 0x10),0x4049),&local_8,param_10,
               local_c);
  local_10[0] = param_3;
  FUN_1000113e(param_7,param_8,CONCAT22((short)((uint)local_c >> 0x10),param_3),&local_8,param_10,
               local_c);
  *param_9 = *param_9 + 1;
  local_10[0] = 0x404a;
  FUN_1000113e(param_7,param_8,CONCAT22((short)((uint)local_c >> 0x10),0x404a),&local_8,param_10,
               local_c);
  local_10[0] = param_4;
  FUN_1000113e(param_7,param_8,CONCAT22((short)((uint)local_c >> 0x10),param_4),&local_8,param_10,
               local_c);
  *param_9 = *param_9 + 1;
  uVar1 = *param_8;
  if (uVar1 >= param_10) {
    *param_11 = 6;
  }
  return uVar1 < param_10;
}



/* ================================================================
 * Function: Get_ADCInfo
 * Address:  10003c9c
 * ================================================================ */

undefined2
Get_ADCInfo(uint *param_1,short param_2,int param_3,undefined4 param_4,undefined2 *param_5)

{
  bool bVar1;
  uint uVar2;
  short sVar3;
  ushort uVar4;
  uint uVar5;
  uint local_40;
  undefined2 local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  short local_1c [2];
  uint local_18;
  uint local_14 [3];
  undefined1 local_8 [4];
  
                    /* 0x3c9c  4  Get_ADCInfo */
  local_34 = 1;
  local_14[1] = 0;
  local_24 = local_24 & 0xffff0000;
  local_20 = 0;
  local_28 = local_28 & 0xffff0000;
  local_1c[0] = 0;
  local_30 = local_30 & 0xffff0000;
  local_14[0] = local_14[0] & 0xffff0000;
  local_2c = local_2c & 0xffff0000;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined2 *)((int)param_1 + 0x12) = 0;
  *(undefined2 *)((int)param_1 + 0x16) = 0;
  FUN_100016a3(param_3,(ushort *)&local_24,(short *)&local_18,(int *)(local_14 + 1));
  FUN_100016a3(param_3,(ushort *)&local_24,(short *)&local_18,(int *)(local_14 + 1));
  FUN_100016a3(param_3,(ushort *)&local_24,local_1c,(int *)(local_14 + 1));
  FUN_100016a3(param_3,(ushort *)&local_24,(short *)local_14,(int *)(local_14 + 1));
  FUN_100016a3(param_3,(ushort *)&local_24,(short *)&local_30,(int *)(local_14 + 1));
  local_2c = local_2c & 0xffff0000;
  uVar4 = 0;
  *(undefined2 *)((int)param_1 + 0x12) = 0;
  *(undefined2 *)((int)param_1 + 0x16) = 0;
  while ((((local_2c & 0xffff) < (local_30 & 0xffff) &&
          ((local_24 & 0xffff) < (local_14[0] & 0xffff))) && (uVar4 < (ushort)(param_2 + 1U)))) {
    FUN_100016a3(param_3,(ushort *)&local_24,(short *)&local_18,(int *)(local_14 + 1));
    uVar2 = local_18;
    uVar5 = local_18 & 0xffff;
    local_20 = local_18 & 0xe000;
    local_28 = local_28 & 0xffff0000;
    if (local_20 < 0x8001) {
      if (local_20 == 0x8000) {
        FUN_1000175a(param_3,(ushort *)&local_24,(int *)(local_14 + 2),(int *)(local_14 + 1));
      }
      else if (local_20 == 0x2000) {
        FUN_100016a3(param_3,(ushort *)&local_24,(short *)&local_18,(int *)(local_14 + 1));
        FUN_100016a3(param_3,(ushort *)&local_24,(short *)&local_18,(int *)(local_14 + 1));
      }
      else {
        if ((local_20 != 0x4000) && (local_20 != 0x6000)) {
          return 0;
        }
        FUN_100016a3(param_3,(ushort *)&local_24,(short *)&local_18,(int *)(local_14 + 1));
      }
    }
    else if (local_20 == 0xc000) {
      FUN_10001a9e(param_3,(ushort *)&local_24,local_8,(int *)(local_14 + 1));
    }
    else {
      if (local_20 != 0xe000) {
        return 0;
      }
      sVar3 = FUN_10001000(uVar5);
      local_28 = CONCAT22(local_28._2_2_,sVar3);
      if ((sVar3 == 0) && ((uVar2 & 0x1000) != 0)) {
        FUN_100016a3(param_3,(ushort *)&local_24,(short *)&local_28,(int *)(local_14 + 1));
      }
      if ((local_28 & 0xffff) == 0) {
        FUN_10001a9e(param_3,(ushort *)&local_24,local_8,(int *)(local_14 + 1));
      }
      else {
        FUN_10001af2(param_3,(ushort *)&local_24,0,(ushort)local_28,(int *)(local_14 + 1));
      }
    }
    if (uVar5 == 0x2036) {
      *(short *)((int)param_1 + 0x16) = *(short *)((int)param_1 + 0x16) + 1;
    }
    else if (uVar5 == 0x4012) {
      uVar4 = uVar4 + 1;
    }
    else if (uVar5 == 0x4014) {
      *(short *)((int)param_1 + 0x12) = *(short *)((int)param_1 + 0x12) + 1;
    }
    local_2c = CONCAT22(local_2c._2_2_,(short)local_2c + 1);
  }
  if (uVar4 == (ushort)(param_2 + 1U)) {
    *param_1 = local_18 & 0xffff;
    *(undefined2 *)(param_1 + 4) = 0;
    *(undefined2 *)(param_1 + 5) = 0;
    FUN_100016a3(param_3,(ushort *)&local_24,(short *)&local_18,(int *)(local_14 + 1));
    local_40 = local_18 & 0xffff;
    bVar1 = true;
    while (bVar1) {
      if (local_40 < 0x4016) {
        if (local_40 == 0x4015) {
          FUN_100016a3(param_3,(ushort *)&local_24,(short *)&local_18,(int *)(local_14 + 1));
          param_1[1] = local_18 & 0xffff;
        }
        else if (local_40 == 0x2036) {
          FUN_100016a3(param_3,(ushort *)&local_24,(short *)&local_18,(int *)(local_14 + 1));
          FUN_100016a3(param_3,(ushort *)&local_24,(short *)&local_18,(int *)(local_14 + 1));
          *(short *)(param_1 + 5) = (short)param_1[5] + 1;
        }
        else {
          if (local_40 != 0x4014) goto LAB_100041aa;
          FUN_100016a3(param_3,(ushort *)&local_24,(short *)&local_18,(int *)(local_14 + 1));
          *(short *)(param_1 + 4) = (short)param_1[4] + 1;
        }
      }
      else if (local_40 == 0x4049) {
        FUN_100016a3(param_3,(ushort *)&local_24,(short *)&local_18,(int *)(local_14 + 1));
        param_1[2] = local_18 & 0xffff;
      }
      else if (local_40 == 0x404a) {
        FUN_100016a3(param_3,(ushort *)&local_24,(short *)&local_18,(int *)(local_14 + 1));
        param_1[3] = local_18 & 0xffff;
      }
      else {
LAB_100041aa:
        bVar1 = false;
      }
      if (bVar1) {
        FUN_100016a3(param_3,(ushort *)&local_24,(short *)&local_18,(int *)(local_14 + 1));
        local_40 = local_18 & 0xffff;
      }
    }
  }
  else {
    *param_5 = 3;
    local_34 = 0;
  }
  return local_34;
}



/* ================================================================
 * Function: Set_ADCGain
 * Address:  100041fc
 * ================================================================ */

void Set_ADCGain(uint param_1,int param_2,ushort *param_3,short *param_4,ushort param_5,
                short *param_6)

{
                    /* 0x41fc  25  Set_ADCGain */
  Set_IDLongParam(0x4014,param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



/* ================================================================
 * Function: Get_ADCGain
 * Address:  10004226
 * ================================================================ */

uint Get_ADCGain(void)

{
  ushort in_stack_00000014;
  short in_stack_00000016;
  uint *in_stack_0000001c;
  ushort in_stack_00000020;
  int in_stack_00000024;
  ushort in_stack_00000028;
  ushort *in_stack_0000002c;
  undefined2 local_8;
  
                    /* 0x4226  3  Get_ADCGain */
  if (in_stack_00000020 < in_stack_00000014) {
    in_stack_0000002c =
         (ushort *)
         Get_IDLongParam(0x4014,in_stack_0000001c,in_stack_00000016 + in_stack_00000020,
                         in_stack_00000024,(uint)in_stack_00000028,in_stack_0000002c);
    local_8 = SUB42(in_stack_0000002c,0);
  }
  else {
    *in_stack_0000001c = 0;
    *in_stack_0000002c = 3;
    local_8 = 0;
  }
  return CONCAT22((short)((uint)in_stack_0000002c >> 0x10),local_8);
}



/* ================================================================
 * Function: Set_ADCECT
 * Address:  1000429b
 * ================================================================ */

void Set_ADCECT(undefined4 param_1,undefined4 param_2,int param_3,ushort *param_4,short *param_5,
               ushort param_6,short *param_7)

{
                    /* 0x429b  24  Set_ADCECT */
  Set_IDDbleParam(0x2036,(double)CONCAT44(param_2,param_1),param_3,param_4,param_5,param_6,param_7);
  return;
}



/* ================================================================
 * Function: Get_ADCECT
 * Address:  100042c9
 * ================================================================ */

uint Get_ADCECT(void)

{
  ushort in_stack_00000018;
  short in_stack_0000001a;
  undefined2 in_stack_0000001c;
  undefined2 in_stack_0000001e;
  ushort in_stack_00000020;
  int in_stack_00000024;
  ushort in_stack_00000028;
  short *in_stack_0000002c;
  undefined2 local_8;
  
                    /* 0x42c9  2  Get_ADCECT */
  if (in_stack_00000020 < in_stack_00000018) {
    in_stack_0000002c =
         (short *)Get_IDDbleParam((double *)0x2036,
                                  (double *)CONCAT22(in_stack_0000001e,in_stack_0000001c),
                                  in_stack_0000001a + in_stack_00000020,in_stack_00000024,
                                  (uint)in_stack_00000028,in_stack_0000002c);
    local_8 = SUB42(in_stack_0000002c,0);
  }
  else {
    *(undefined4 *)CONCAT22(in_stack_0000001e,in_stack_0000001c) = 0;
    ((undefined4 *)CONCAT22(in_stack_0000001e,in_stack_0000001c))[1] = 0;
    *in_stack_0000002c = 3;
    local_8 = 0;
  }
  return CONCAT22((short)((uint)in_stack_0000002c >> 0x10),local_8);
}



/* ================================================================
 * Function: Set_InstrInfo
 * Address:  10004345
 * ================================================================ */

bool Set_InstrInfo(short param_1,undefined4 param_2,double param_3,int param_4,ushort *param_5,
                  short *param_6,ushort param_7,undefined2 *param_8)

{
  ushort uVar1;
  uint local_1c [2];
  undefined2 local_14;
  short local_10 [2];
  ushort local_c [2];
  int local_8;
  
                    /* 0x4345  31  Set_InstrInfo */
  local_1c[1] = 0;
  local_8 = 0;
  local_c[0] = 0;
  local_14 = 0;
  local_1c[0] = local_1c[0] & 0xffff0000;
  *param_8 = 0;
  FUN_100016a3(param_4,(ushort *)local_1c,local_10,&local_8);
  local_c[0] = (ushort)local_1c[0];
  FUN_100016a3(param_4,(ushort *)local_1c,local_10,&local_8);
  local_c[0] = (ushort)local_1c[0];
  FUN_100016a3(param_4,(ushort *)local_1c,local_10,&local_8);
  local_c[0] = (ushort)local_1c[0];
  FUN_100016a3(param_4,(ushort *)local_1c,local_10,&local_8);
  local_c[0] = (ushort)local_1c[0];
  FUN_100016a3(param_4,(ushort *)local_1c,local_10,&local_8);
  local_c[0] = (ushort)local_1c[0];
  if ((uint)*param_5 < (local_1c[0] & 0xffff)) {
    *param_5 = (ushort)local_1c[0];
  }
  local_10[0] = 0x401b;
  FUN_1000113e(param_4,param_5,CONCAT22((short)((uint)local_c >> 0x10),0x401b),&local_8,param_7,
               local_c);
  local_10[0] = param_1;
  FUN_1000113e(param_4,param_5,CONCAT22((short)((uint)local_c >> 0x10),param_1),&local_8,param_7,
               local_c);
  *param_6 = *param_6 + 1;
  local_10[0] = 0x201c;
  FUN_1000113e(param_4,param_5,CONCAT22((short)((uint)local_c >> 0x10),0x201c),&local_8,param_7,
               local_c);
  FUN_1000146d(param_4,param_5,(float)param_3,&local_8,param_7,local_c);
  *param_6 = *param_6 + 1;
  uVar1 = *param_5;
  if (uVar1 >= param_7) {
    *param_8 = 6;
  }
  return uVar1 < param_7;
}



/* ================================================================
 * Function: Get_InstrInfo
 * Address:  10004526
 * ================================================================ */

undefined2
Get_InstrInfo(uint *param_1,uint param_2,int param_3,undefined4 param_4,undefined2 *param_5)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  undefined2 local_3c;
  uint local_38;
  uint local_34;
  float local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  short local_1c [2];
  uint local_18;
  uint local_14 [3];
  undefined1 local_8 [4];
  
                    /* 0x4526  11  Get_InstrInfo */
  local_3c = 1;
  local_14[1] = 0;
  local_28 = local_28 & 0xffff0000;
  local_24 = 0;
  local_2c = local_2c & 0xffff0000;
  local_1c[0] = 0;
  local_38 = local_38 & 0xffff0000;
  local_14[0] = local_14[0] & 0xffff0000;
  local_34 = local_34 & 0xffff0000;
  local_20 = local_20 & 0xffff0000;
  FUN_100016a3(param_3,(ushort *)&local_28,(short *)&local_18,(int *)(local_14 + 1));
  FUN_100016a3(param_3,(ushort *)&local_28,(short *)&local_18,(int *)(local_14 + 1));
  FUN_100016a3(param_3,(ushort *)&local_28,local_1c,(int *)(local_14 + 1));
  FUN_100016a3(param_3,(ushort *)&local_28,(short *)local_14,(int *)(local_14 + 1));
  FUN_100016a3(param_3,(ushort *)&local_28,(short *)&local_38,(int *)(local_14 + 1));
  local_34 = local_34 & 0xffff0000;
  local_20 = local_20 & 0xffff0000;
  while ((((local_34 & 0xffff) < (local_38 & 0xffff) &&
          ((local_28 & 0xffff) < (local_14[0] & 0xffff))) &&
         ((local_20 & 0xffff) < (param_2 & 0xffff)))) {
    FUN_100016a3(param_3,(ushort *)&local_28,(short *)&local_18,(int *)(local_14 + 1));
    uVar1 = local_18;
    uVar3 = local_18 & 0xffff;
    local_24 = local_18 & 0xe000;
    local_2c = local_2c & 0xffff0000;
    if (local_24 < 0x8001) {
      if (local_24 == 0x8000) {
        FUN_1000175a(param_3,(ushort *)&local_28,(int *)(local_14 + 2),(int *)(local_14 + 1));
      }
      else if (local_24 == 0x2000) {
        FUN_100016a3(param_3,(ushort *)&local_28,(short *)&local_18,(int *)(local_14 + 1));
        FUN_100016a3(param_3,(ushort *)&local_28,(short *)&local_18,(int *)(local_14 + 1));
      }
      else {
        if ((local_24 != 0x4000) && (local_24 != 0x6000)) {
          return 0;
        }
        FUN_100016a3(param_3,(ushort *)&local_28,(short *)&local_18,(int *)(local_14 + 1));
      }
    }
    else if (local_24 == 0xc000) {
      FUN_10001a9e(param_3,(ushort *)&local_28,local_8,(int *)(local_14 + 1));
    }
    else {
      if (local_24 != 0xe000) {
        return 0;
      }
      sVar2 = FUN_10001000(uVar3);
      local_2c = CONCAT22(local_2c._2_2_,sVar2);
      if ((sVar2 == 0) && ((uVar1 & 0x1000) != 0)) {
        FUN_100016a3(param_3,(ushort *)&local_28,(short *)&local_2c,(int *)(local_14 + 1));
      }
      if ((local_2c & 0xffff) == 0) {
        FUN_10001a9e(param_3,(ushort *)&local_28,local_8,(int *)(local_14 + 1));
      }
      else {
        FUN_10001af2(param_3,(ushort *)&local_28,0,(ushort)local_2c,(int *)(local_14 + 1));
      }
    }
    if (uVar3 == 0x401b) {
      local_20 = CONCAT22(local_20._2_2_,(short)local_20 + 1);
    }
    local_34 = CONCAT22(local_34._2_2_,(short)local_34 + 1);
  }
  if ((local_20 & 0xffff) == (param_2 & 0xffff)) {
    *param_1 = local_18 & 0xffff;
    FUN_100016a3(param_3,(ushort *)&local_28,(short *)&local_18,(int *)(local_14 + 1));
    if ((local_18 & 0xffff) == 0x201c) {
      FUN_100018a7(param_3,(ushort *)&local_28,&local_30,(int *)(local_14 + 1));
      *(double *)(param_1 + 2) = (double)local_30;
    }
    else {
      *param_5 = 8;
      local_3c = 0;
    }
  }
  else {
    *param_5 = 3;
    local_3c = 0;
  }
  return local_3c;
}



/* ================================================================
 * Function: Get_ItemType
 * Address:  1000488c
 * ================================================================ */

ushort Get_ItemType(int param_1,uint param_2)

{
  int local_c;
  ushort local_8 [2];
  
                    /* 0x488c  13  Get_ItemType */
  local_8[0] = 0xffff;
  local_c = 0;
  if ((param_2 & 0xffff) < 10) {
    switch(param_2 & 0xffff) {
    case 0:
    case 2:
    case 4:
    case 6:
    case 8:
      local_8[0] = 0x5a5a;
      break;
    default:
      local_8[0] = 0xffff;
    }
  }
  else {
    FUN_100016a3(param_1,(ushort *)&param_2,(short *)local_8,&local_c);
    local_8[0] = local_8[0] & 0xf000;
  }
  return local_8[0];
}



/* ================================================================
 * Function: Get_ItemID
 * Address:  10004928
 * ================================================================ */

short Get_ItemID(int param_1,uint param_2)

{
  int local_c;
  short local_8 [2];
  
                    /* 0x4928  12  Get_ItemID */
  local_8[0] = -1;
  local_c = 0;
  if ((param_2 & 0xffff) < 10) {
    switch(param_2 & 0xffff) {
    case 0:
      local_8[0] = 0x5000;
      break;
    default:
      local_8[0] = -1;
      break;
    case 2:
      local_8[0] = 0x5001;
      break;
    case 4:
      local_8[0] = 0x5002;
      break;
    case 6:
      local_8[0] = 0x5003;
      break;
    case 8:
      local_8[0] = 0x5004;
    }
  }
  else {
    FUN_100016a3(param_1,(ushort *)&param_2,local_8,&local_c);
  }
  return local_8[0];
}



/* ================================================================
 * Function: Goto_Next_Loc
 * Address:  100049d7
 * ================================================================ */

uint __thiscall Goto_Next_Loc(void *this,int param_1,ushort *param_2)

{
  ushort uVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined2 extraout_var;
  bool bVar6;
  int local_2c;
  uint local_28;
  int local_24;
  undefined2 local_20;
  short local_1c [2];
  uint local_18;
  ushort local_14;
  uint local_10;
  short local_c [2];
  undefined1 local_8 [4];
  undefined2 uVar5;
  
                    /* 0x49d7  19  Goto_Next_Loc */
  local_20 = 1;
  local_1c[0] = 0;
  local_2c = 0;
  local_28 = 0;
  local_10 = 0;
  local_18 = local_18 & 0xffff0000;
  local_24 = 0;
  uVar1 = Get_ItemType(param_1,CONCAT22((short)((uint)this >> 0x10),*param_2));
  local_10 = (uint)uVar1;
  uVar1 = Get_ItemID(param_1,CONCAT22(extraout_var,*param_2));
  local_28 = (uint)uVar1;
  bVar6 = (local_10 & 0x1000) != 0;
  if (bVar6) {
    local_10 = local_10 & 0xffffefff;
  }
  local_14 = (ushort)bVar6;
  FUN_100016a3(param_1,param_2,local_1c,&local_2c);
  local_18 = local_18 & 0xffff0000;
  if (0x6000 < local_10) {
    if (local_10 < 0xc001) {
      if (local_10 == 0xc000) {
        uVar3 = FUN_10001a9e(param_1,param_2,local_8,&local_2c);
        uVar5 = (undefined2)((uint)uVar3 >> 0x10);
      }
      else {
        if ((local_10 != 0x8000) && (local_10 != 0xa000)) goto LAB_10004c43;
        FUN_100016a3(param_1,param_2,local_c,&local_2c);
        uVar3 = FUN_100016a3(param_1,param_2,local_c,&local_2c);
        uVar5 = (undefined2)((uint)uVar3 >> 0x10);
      }
    }
    else {
      if (local_10 != 0xe000) {
LAB_10004c43:
        return local_10 & 0xffff0000;
      }
      sVar2 = FUN_10001000(local_28);
      local_18 = CONCAT22(local_18._2_2_,sVar2);
      if ((sVar2 == 0) && (local_14 != 0)) {
        FUN_100016a3(param_1,param_2,(short *)&local_18,&local_2c);
      }
      if ((local_18 & 0xffff) == 0) {
        uVar3 = FUN_10001a9e(param_1,param_2,local_8,&local_2c);
        uVar5 = (undefined2)((uint)uVar3 >> 0x10);
      }
      else {
        uVar3 = FUN_10001af2(param_1,param_2,local_24,(ushort)local_18,&local_2c);
        uVar5 = (undefined2)((uint)uVar3 >> 0x10);
      }
    }
    goto LAB_10004c48;
  }
  if (local_10 != 0x6000) {
    if (0x4000 < local_10) {
      if (local_10 != 0x5a5a) goto LAB_10004c43;
      uVar5 = 0;
      goto LAB_10004c48;
    }
    if (local_10 != 0x4000) {
      if (local_10 == 0) {
        FUN_100016a3(param_1,param_2,local_c,&local_2c);
        uVar3 = FUN_100016a3(param_1,param_2,local_c,&local_2c);
        uVar5 = (undefined2)((uint)uVar3 >> 0x10);
      }
      else {
        if (local_10 != 0x2000) goto LAB_10004c43;
        FUN_100016a3(param_1,param_2,local_c,&local_2c);
        uVar3 = FUN_100016a3(param_1,param_2,local_c,&local_2c);
        uVar5 = (undefined2)((uint)uVar3 >> 0x10);
      }
      goto LAB_10004c48;
    }
  }
  uVar3 = FUN_100016a3(param_1,param_2,local_c,&local_2c);
  uVar5 = (undefined2)((uint)uVar3 >> 0x10);
LAB_10004c48:
  sVar2 = Get_ItemID(param_1,CONCAT22(uVar5,*param_2));
  if (sVar2 == -1) {
    uVar4 = 0;
  }
  else {
    sVar2 = Get_ItemID(param_1,(uint)*param_2);
    if (sVar2 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
  }
  return uVar4;
}



/* ================================================================
 * Function: Get_DOUBLE
 * Address:  10004c91
 * ================================================================ */

void Get_DOUBLE(int param_1)

{
                    /* 0x4c91  5  Get_DOUBLE */
  Get_FLOAT(param_1);
  return;
}



/* ================================================================
 * Function: Get_FLOAT
 * Address:  10004ca6
 * ================================================================ */

float10 Get_FLOAT(int param_1)

{
  ushort uVar1;
  float local_10;
  short local_c [2];
  int local_8;
  
                    /* 0x4ca6  6  Get_FLOAT */
  FUN_100016a3(param_1,(ushort *)&stack0x00000008,local_c,&local_8);
  uVar1 = Get_UNINT(param_1,4);
  if (uVar1 < 3) {
    FUN_10001935(param_1,(ushort *)&stack0x00000008,&local_10,&local_8);
  }
  else {
    FUN_100018a7(param_1,(ushort *)&stack0x00000008,&local_10,&local_8);
  }
  return (float10)local_10;
}



/* ================================================================
 * Function: Get_UNINT
 * Address:  10004d0b
 * ================================================================ */

short Get_UNINT(int param_1,uint param_2)

{
  short local_10 [2];
  int local_c;
  short local_8 [2];
  
                    /* 0x4d0b  16  Get_UNINT */
  if (9 < (param_2 & 0xffff)) {
    FUN_100016a3(param_1,(ushort *)&param_2,local_10,&local_c);
  }
  FUN_100016a3(param_1,(ushort *)&param_2,local_8,&local_c);
  return local_8[0];
}



/* ================================================================
 * Function: Get_INT
 * Address:  10004d54
 * ================================================================ */

void Get_INT(int param_1,undefined2 param_2)

{
  undefined4 in_EAX;
  
                    /* 0x4d54  10  Get_INT */
  Get_UNINT(param_1,CONCAT22((short)((uint)in_EAX >> 0x10),param_2));
  return;
}



/* ================================================================
 * Function: Get_UNLONG
 * Address:  10004d69
 * ================================================================ */

int Get_UNLONG(int param_1,uint param_2)

{
  short local_10 [2];
  int local_c;
  int local_8;
  
                    /* 0x4d69  17  Get_UNLONG */
  if (9 < (param_2 & 0xffff)) {
    FUN_100016a3(param_1,(ushort *)&param_2,local_10,&local_c);
  }
  FUN_1000175a(param_1,(ushort *)&param_2,&local_8,&local_c);
  return local_8;
}



/* ================================================================
 * Function: Get_LONG
 * Address:  10004db1
 * ================================================================ */

int Get_LONG(int param_1,uint param_2)

{
  int local_14;
  short local_10 [2];
  int local_c [2];
  
                    /* 0x4db1  14  Get_LONG */
  if (9 < (param_2 & 0xffff)) {
    FUN_100016a3(param_1,(ushort *)&param_2,local_10,&local_14);
  }
  FUN_1000175a(param_1,(ushort *)&param_2,local_c,&local_14);
  return local_c[0];
}



/* ================================================================
 * Function: Get_UNBYTE
 * Address:  10004dff
 * ================================================================ */

undefined1 Get_UNBYTE(int param_1)

{
  short local_10 [2];
  int local_c;
  undefined1 local_8 [4];
  
                    /* 0x4dff  15  Get_UNBYTE */
  FUN_100016a3(param_1,(ushort *)&stack0x00000008,local_10,&local_c);
  FUN_10001a9e(param_1,(ushort *)&stack0x00000008,local_8,&local_c);
  return local_8[0];
}



/* ================================================================
 * Function: Get_pCHAR
 * Address:  10004e38
 * ================================================================ */

int Get_pCHAR(int param_1,uint param_2,undefined2 *param_3)

{
  short sVar1;
  uint local_14;
  int local_10;
  uint local_c;
  int local_8;
  
                    /* 0x4e38  18  Get_pCHAR */
  local_10 = 0;
  local_c = local_c & 0xffff0000;
  FUN_100016a3(param_1,(ushort *)&param_2,(short *)&local_14,&local_8);
  sVar1 = FUN_10001000(local_14 & 0xffff);
  local_c = CONCAT22(local_c._2_2_,sVar1);
  if ((sVar1 == 0) && ((local_14 & 0x1000) != 0)) {
    FUN_100016a3(param_1,(ushort *)&param_2,(short *)&local_c,&local_8);
  }
  if ((local_c & 0xffff) == 0) {
    local_10 = 0;
  }
  else {
    local_10 = param_1 + (param_2 & 0xffff);
  }
  if (param_3 != (undefined2 *)0x0) {
    *param_3 = (undefined2)local_c;
  }
  return local_10;
}



/* ================================================================
 * Function: FUN_10004ef0
 * Address:  10004ef0
 * ================================================================ */

undefined4 FUN_10004ef0(undefined4 param_1,int param_2)

{
  if (param_2 == 1) {
    DAT_10010928 = param_1;
  }
  return 1;
}



/* ================================================================
 * Function: NVRAM_Get_DLLVersionString
 * Address:  10004f16
 * ================================================================ */

int NVRAM_Get_DLLVersionString(int param_1,LPSTR param_2)

{
  undefined4 local_8;
  
                    /* 0x4f16  22  NVRAM_Get_DLLVersionString */
  if (param_1 == 0x15) {
    local_8 = LoadStringA(DAT_10010928,0x30,param_2,0x14);
  }
  else if (param_1 == 0x16) {
    local_8 = LoadStringA(DAT_10010928,0x31,param_2,0x14);
  }
  else {
    local_8 = 0;
  }
  return local_8;
}



/* ================================================================
 * Function: NVRAM_Get_DLLVersion
 * Address:  10004f7b
 * ================================================================ */

int NVRAM_Get_DLLVersion(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte local_20 [24];
  byte *local_8;
  
                    /* 0x4f7b  21  NVRAM_Get_DLLVersion */
  *param_2 = 0;
  iVar2 = NVRAM_Get_DLLVersionString(param_1,(LPSTR)local_20);
  if (iVar2 != 0) {
    local_8 = (byte *)FUN_100057a6(local_20,&DAT_1000d784);
    while (local_8 != (byte *)0x0) {
      iVar1 = *param_2;
      iVar3 = FUN_1000571b(param_2,local_8);
      *param_2 = iVar1 * 100 + iVar3;
      local_8 = (byte *)FUN_100057a6((byte *)0x0,&DAT_1000d784);
    }
  }
  return iVar2;
}



/* ================================================================
 * Function: NVRAM_GetStringFromValue
 * Address:  10004ff4
 * ================================================================ */

int NVRAM_GetStringFromValue(int param_1,int param_2,LPSTR param_3,int param_4)

{
  int iVar1;
  int local_c;
  UINT local_8;
  
                    /* 0x4ff4  20  NVRAM_GetStringFromValue */
  local_c = 0;
  iVar1 = FUN_10005054();
  if (iVar1 == 0) {
    iVar1 = FUN_10005077(param_1,param_2,&local_8);
    if (iVar1 != 0) {
      local_c = LoadStringA(DAT_10010928,local_8,param_3,param_4);
    }
  }
  return local_c;
}



/* ================================================================
 * Function: FUN_10005054
 * Address:  10005054
 * ================================================================ */

undefined4 FUN_10005054(void)

{
  return 0;
}



/* ================================================================
 * Function: FUN_10005077
 * Address:  10005077
 * ================================================================ */

int FUN_10005077(int param_1,int param_2,undefined4 *param_3)

{
  int local_14;
  int local_10;
  uint local_c;
  undefined *local_8;
  
  local_10 = 1;
  if (param_1 == 1) {
    local_c = (uint)DAT_1000d730;
    local_8 = &DAT_1000d030;
  }
  else if (param_1 == 2) {
    local_c = (uint)DAT_1000d780;
    local_8 = &DAT_1000d738;
  }
  else {
    local_10 = 0;
  }
  if (local_10 == 1) {
    local_10 = 0;
    for (local_14 = 0; local_14 < (int)(local_c & 0xffff); local_14 = local_14 + 1) {
      if (*(int *)(local_8 + local_14 * 8) == param_2) {
        *param_3 = *(undefined4 *)(local_8 + local_14 * 8 + 4);
        local_10 = 1;
        break;
      }
    }
    if ((local_10 == 0) && (param_1 == 1)) {
      *param_3 = 0x65;
    }
  }
  return local_10;
}



/* ================================================================
 * Function: Delete_ID
 * Address:  1000513a
 * ================================================================ */

undefined2 Delete_ID(uint param_1,int param_2,undefined4 param_3,uint param_4,short *param_5)

{
  short sVar1;
  ushort uVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  int local_44;
  char local_40;
  int local_3c;
  short local_38;
  undefined2 local_34;
  uint local_30;
  ushort local_2c;
  undefined2 uStack_2a;
  uint local_28;
  uint local_24;
  int local_20;
  undefined1 local_1c [4];
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
                    /* 0x513a  1  Delete_ID */
  local_34 = 0;
  local_40 = 0;
  local_c = local_c & 0xffff0000;
  local_3c = 0;
  local_30 = 0;
  local_48 = local_48 & 0xffff0000;
  local_28 = local_28 & 0xffff0000;
  local_54 = local_54 & 0xffff0000;
  local_24 = local_24 & 0xffff0000;
  local_44 = 0;
  *param_5 = 0;
  FUN_100016a3(param_2,(ushort *)&local_c,(short *)&local_4c,&local_3c);
  if ((local_4c & 0xffff) == 0x5a5a) {
    FUN_100016a3(param_2,(ushort *)&local_c,(short *)&local_4c,&local_3c);
    FUN_100016a3(param_2,(ushort *)&local_c,(short *)&local_50,&local_3c);
    FUN_100016a3(param_2,(ushort *)&local_c,(short *)&local_54,&local_3c);
    FUN_100016a3(param_2,(ushort *)&local_c,(short *)&local_28,&local_3c);
    local_24 = local_24 & 0xffff0000;
    local_40 = '\0';
    local_54 = CONCAT22(local_54._2_2_,(short)local_54 + -4);
    while ((((local_24 & 0xffff) < (local_28 & 0xffff) && ((local_c & 0xffff) < (local_54 & 0xffff))
            ) && (local_40 == '\0'))) {
      FUN_100016a3(param_2,(ushort *)&local_c,(short *)&local_4c,&local_3c);
      local_14 = local_4c & 0xffff;
      if (local_14 == param_1) {
        local_18 = CONCAT22(local_18._2_2_,(short)local_c + -2);
        local_40 = '\x01';
      }
      local_30 = local_4c & 0xe000;
      if (((local_50 & 0xffff) < 3) && (local_14 == 0x400c)) {
        local_30 = 0xc000;
      }
      local_48 = local_48 & 0xffff0000;
      if (local_30 < 0x8001) {
        if (local_30 == 0x8000) {
          FUN_1000175a(param_2,(ushort *)&local_c,&local_20,&local_3c);
        }
        else if (local_30 == 0x2000) {
          FUN_100016a3(param_2,(ushort *)&local_c,(short *)&local_4c,&local_3c);
          FUN_100016a3(param_2,(ushort *)&local_c,(short *)&local_4c,&local_3c);
        }
        else if ((local_30 == 0x4000) || (local_30 == 0x6000)) {
          FUN_100016a3(param_2,(ushort *)&local_c,(short *)&local_4c,&local_3c);
        }
      }
      else if (local_30 == 0xc000) {
        FUN_10001a9e(param_2,(ushort *)&local_c,local_1c,&local_3c);
      }
      else if (local_30 == 0xe000) {
        sVar1 = FUN_10001000(local_14);
        local_48 = CONCAT22(local_48._2_2_,sVar1);
        if ((sVar1 == 0) && ((local_14 & 0x1000) != 0)) {
          FUN_100016a3(param_2,(ushort *)&local_c,(short *)&local_48,&local_3c);
        }
        if ((local_48 & 0xffff) == 0) {
          FUN_10001a9e(param_2,(ushort *)&local_c,local_1c,&local_3c);
        }
        else {
          FUN_10001af2(param_2,(ushort *)&local_c,local_44,(ushort)local_48,&local_3c);
        }
      }
      if (local_40 != '\0') {
        local_10 = CONCAT22(local_10._2_2_,(undefined2)local_c);
      }
      local_24 = CONCAT22(local_24._2_2_,(short)local_24 + 1);
    }
    if (local_40 != '\0') {
      uVar2 = (short)local_54 - (short)local_10;
      _local_2c = CONCAT22(uStack_2a,uVar2);
      FUN_10005850((undefined4 *)(param_2 + (local_18 & 0xffff)),
                   (undefined4 *)(param_2 + (local_10 & 0xffff)),(uint)uVar2);
      local_8 = CONCAT22(local_8._2_2_,(short)local_18 + (short)_local_2c);
      while ((local_8 & 0xffff) < (param_4 & 0xffff)) {
        *(undefined1 *)(param_2 + (local_8 & 0xffff)) = 0;
        local_8 = CONCAT22(local_8._2_2_,(short)local_8 + 1);
      }
      uVar2 = (short)local_28 - 1;
      local_28 = CONCAT22(local_28._2_2_,uVar2);
      Set_IDLongParam(0x5004,(uint)uVar2,param_2,(ushort *)0x0,(short *)0x0,(ushort)param_4,param_5)
      ;
      local_38 = (short)local_10 - (short)local_18;
      uVar2 = (short)local_54 - local_38;
      local_54 = CONCAT22(local_54._2_2_,uVar2);
      Set_IDLongParam(0x5003,(uint)uVar2,param_2,(ushort *)0x0,(short *)0x0,(ushort)param_4,param_5)
      ;
      Set_CheckSum(param_2,CONCAT22(extraout_var_00,(short)local_54),
                   CONCAT22(extraout_var,(ushort)param_4),param_5);
      local_34 = 1;
    }
  }
  return local_34;
}



/* ================================================================
 * Function: FUN_10005565
 * Address:  10005565
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005565(void)

{
  void *extraout_ECX;
  
  FUN_1000557d();
  _DAT_100105bc = FUN_10005d7e();
  FUN_10005d2e(extraout_ECX);
  return;
}



/* ================================================================
 * Function: FUN_1000557d
 * Address:  1000557d
 * ================================================================ */

void FUN_1000557d(void)

{
  PTR_LAB_1000d7a8 = &LAB_10005e01;
  PTR_LAB_1000d7a4 = __cfltcvt;
  PTR_LAB_1000d7ac = __fassign;
  PTR_LAB_1000d7b0 = FUN_10005da7;
  PTR_LAB_1000d7b4 = &LAB_10005e4f;
  PTR_LAB_1000d7b8 = __cfltcvt;
  return;
}



/* ================================================================
 * Function: FUN_100055b5
 * Address:  100055b5
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_100055b5(int param_1,undefined4 param_2)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  
  uVar2 = FUN_100069e6();
  if ((param_2._2_2_ & 0x7ff0) == 0x7ff0) {
    iVar3 = FUN_100068ae(param_1,(uint)(CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)
                                                ) >> 0x20));
    if (iVar3 == 1) {
      FUN_100069e6();
      fVar4 = (float10)(double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
    }
    else if (iVar3 == 2) {
      FUN_100069e6();
      fVar4 = -(float10)(double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
    }
    else {
      dVar1 = (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
      if (iVar3 == 3) {
        fVar4 = FUN_100061cd(0x15,(double)CONCAT44((int)((ulonglong)dVar1 >> 0x20),param_1));
      }
      else {
        fVar4 = FUN_10006221(8,0x15,CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)),
                             dVar1 + _DAT_1000c0e8,uVar2);
      }
    }
  }
  else {
    FUN_100069e6();
    fVar4 = (float10)ABS((double)CONCAT44(param_2,param_1));
  }
  return fVar4;
}



/* ================================================================
 * Function: __ftol
 * Address:  1000566c
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
 * Function: _strlen
 * Address:  100056a0
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
    if (((uint)puVar2 & 3) == 0) goto LAB_100056c0;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_100056f3:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_100056c0:
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
  goto LAB_100056f3;
}



/* ================================================================
 * Function: FUN_1000571b
 * Address:  1000571b
 * ================================================================ */

int __thiscall FUN_1000571b(void *this,byte *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  undefined *puVar6;
  
  while( true ) {
    if (DAT_1000dae4 < 2) {
      uVar1 = (byte)PTR_DAT_1000d8d8[(uint)*param_1 * 2] & 8;
      this = PTR_DAT_1000d8d8;
    }
    else {
      puVar6 = (undefined *)0x8;
      uVar1 = FUN_10006a5f(this,(uint)*param_1,8);
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
    if (DAT_1000dae4 < 2) {
      uVar2 = (byte)PTR_DAT_1000d8d8[uVar4 * 2] & 4;
    }
    else {
      puVar6 = (undefined *)0x4;
      uVar2 = FUN_10006a5f(this,uVar4,4);
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
 * Function: FUN_100057a6
 * Address:  100057a6
 * ================================================================ */

uint __cdecl FUN_100057a6(byte *param_1,byte *param_2)

{
  byte bVar1;
  DWORD *pDVar2;
  int iVar3;
  byte *pbVar4;
  byte local_24 [32];
  
  pDVar2 = FUN_10006b99();
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
LAB_10005835:
      pDVar2[6] = (DWORD)pbVar4;
      return -(uint)(param_1 != pbVar4) & (uint)param_1;
    }
    if ((local_24[bVar1 >> 3] & (byte)(1 << (bVar1 & 7))) != 0) {
      *pbVar4 = 0;
      pbVar4 = pbVar4 + 1;
      goto LAB_10005835;
    }
    pbVar4 = pbVar4 + 1;
  } while( true );
}



/* ================================================================
 * Function: FUN_10005850
 * Address:  10005850
 * ================================================================ */

undefined4 * __cdecl FUN_10005850(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10005a07_caseD_2;
        case 3:
          goto switchD_10005a07_caseD_3;
        }
        goto switchD_10005a07_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10005a07_caseD_0;
      case 1:
        goto switchD_10005a07_caseD_1;
      case 2:
        goto switchD_10005a07_caseD_2;
      case 3:
        goto switchD_10005a07_caseD_3;
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
              goto switchD_10005a07_caseD_2;
            case 3:
              goto switchD_10005a07_caseD_3;
            }
            goto switchD_10005a07_caseD_1;
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
              goto switchD_10005a07_caseD_2;
            case 3:
              goto switchD_10005a07_caseD_3;
            }
            goto switchD_10005a07_caseD_1;
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
              goto switchD_10005a07_caseD_2;
            case 3:
              goto switchD_10005a07_caseD_3;
            }
            goto switchD_10005a07_caseD_1;
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
switchD_10005a07_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10005a07_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10005a07_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10005a07_caseD_0:
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
        goto switchD_10005885_caseD_2;
      case 3:
        goto switchD_10005885_caseD_3;
      }
      goto switchD_10005885_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10005885_caseD_0;
    case 1:
      goto switchD_10005885_caseD_1;
    case 2:
      goto switchD_10005885_caseD_2;
    case 3:
      goto switchD_10005885_caseD_3;
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
            goto switchD_10005885_caseD_2;
          case 3:
            goto switchD_10005885_caseD_3;
          }
          goto switchD_10005885_caseD_1;
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
            goto switchD_10005885_caseD_2;
          case 3:
            goto switchD_10005885_caseD_3;
          }
          goto switchD_10005885_caseD_1;
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
            goto switchD_10005885_caseD_2;
          case 3:
            goto switchD_10005885_caseD_3;
          }
          goto switchD_10005885_caseD_1;
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
switchD_10005885_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10005885_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10005885_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10005885_caseD_0:
  return param_1;
}



/* ================================================================
 * Function: FUN_10005b85
 * Address:  10005b85
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10005b85(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_100105d8 = GetVersion();
    iVar1 = FUN_1000757b(1);
    if (iVar1 != 0) {
      _DAT_100105e4 = DAT_100105d8 >> 8 & 0xff;
      _DAT_100105e0 = DAT_100105d8 & 0xff;
      DAT_100105d8 = DAT_100105d8 >> 0x10;
      _DAT_100105dc = _DAT_100105e0 * 0x100 + _DAT_100105e4;
      iVar1 = FUN_10006b14();
      if (iVar1 != 0) {
        DAT_10010cb4 = GetCommandLineA();
        DAT_100105c4 = FUN_100072d4();
        FUN_10006dbe();
        FUN_10007087();
        FUN_10006fce();
        FUN_10006ca0();
        DAT_100105c0 = DAT_100105c0 + 1;
        goto LAB_10005c58;
      }
      FUN_100075d8();
    }
LAB_10005be5:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_100105c0 < 1) goto LAB_10005be5;
      DAT_100105c0 = DAT_100105c0 + -1;
      if (DAT_10010610 == 0) {
        FUN_10006cde();
      }
      FUN_10006f7a();
      FUN_10006b68();
      FUN_100075d8();
    }
    else if (param_2 == 3) {
      FUN_10006c00((undefined *)0x0);
    }
LAB_10005c58:
    uVar2 = 1;
  }
  return uVar2;
}



/* ================================================================
 * Function: entry
 * Address:  10005c5e
 * ================================================================ */

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_100105c0;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_10005ca6;
    if ((DAT_10010cb8 != (code *)0x0) &&
       (iVar2 = (*DAT_10010cb8)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_10005b85(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_10005ca6:
  iVar2 = FUN_10004ef0(param_1,param_2);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_10005b85(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_10005b85(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_10010cb8 != (code *)0x0) {
      iVar2 = (*DAT_10010cb8)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}



/* ================================================================
 * Function: __amsg_exit
 * Address:  10005cfb
 * ================================================================ */

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_100105cc == 1) || ((DAT_100105cc == 0 && (DAT_100105d0 == 1)))) {
    FUN_10007680();
  }
  FUN_100076b9(param_1);
  (*(code *)PTR___exit_1000d7a0)(0xff);
  return;
}



/* ================================================================
 * Function: FUN_10005d2e
 * Address:  10005d2e
 * ================================================================ */

void __fastcall FUN_10005d2e(void *param_1)

{
  FUN_10007841(param_1,0x10000,0x30000);
  return;
}



/* ================================================================
 * Function: FUN_10005d40
 * Address:  10005d40
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10005d40(void)

{
  if (_DAT_1000c0e8 < _DAT_1000c0f0 - (_DAT_1000c0f0 / _DAT_1000c0f8) * _DAT_1000c0f8) {
    return 1;
  }
  return 0;
}



/* ================================================================
 * Function: FUN_10005d7e
 * Address:  10005d7e
 * ================================================================ */

void FUN_10005d7e(void)

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
  FUN_10005d40();
  return;
}



/* ================================================================
 * Function: FUN_10005da7
 * Address:  10005da7
 * ================================================================ */

void __cdecl FUN_10005da7(char *param_1)

{
  char cVar1;
  char cVar2;
  undefined *this;
  uint uVar3;
  undefined *puVar4;
  
  this = (undefined *)(int)*param_1;
  uVar3 = FUN_10007972((uint)this);
  if (uVar3 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_1000dae4 < 2) {
        uVar3 = (byte)PTR_DAT_1000d8d8[*param_1 * 2] & 4;
        this = PTR_DAT_1000d8d8;
      }
      else {
        puVar4 = (undefined *)0x4;
        uVar3 = FUN_10006a5f(this,(int)*param_1,4);
        this = puVar4;
      }
    } while (uVar3 != 0);
  }
  cVar2 = *param_1;
  *param_1 = DAT_1000dae8;
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
 * Address:  10005e67
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
    FUN_10007e3e(in_ECX,(uint *)&local_c,(byte *)number);
    *(void **)argument = local_c;
    *(void **)(argument + 4) = local_8;
    return;
  }
  FUN_10007e6b(in_ECX,(uint *)&number,(byte *)number);
  *(char **)argument = number;
  return;
}



/* ================================================================
 * Function: FUN_10005ea5
 * Address:  10005ea5
 * ================================================================ */

undefined1 * __cdecl FUN_10005ea5(undefined8 *param_1,undefined1 *param_2,int param_3,int param_4)

{
  uint local_2c [6];
  int local_14 [4];
  
  FUN_10007f0f((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),local_14,local_2c);
  FUN_10007e98(param_2 + (uint)(0 < param_3) + (uint)(local_14[0] == 0x2d),param_3 + 1,(int)local_14
              );
  FUN_10005f06(param_2,param_3,param_4,local_14,'\0');
  return param_2;
}



/* ================================================================
 * Function: FUN_10005f06
 * Address:  10005f06
 * ================================================================ */

undefined1 * __cdecl
FUN_10005f06(undefined1 *param_1,int param_2,int param_3,int *param_4,char param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint *puVar3;
  int iVar4;
  
  if (param_5 != '\0') {
    FUN_100061a8(param_1 + (*param_4 == 0x2d),(uint)(0 < param_2));
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
    *puVar2 = DAT_1000dae8;
  }
  puVar3 = FUN_10008030((uint *)(puVar2 + param_2 + (uint)(param_5 == '\0')),(uint *)"e+000");
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
 * Function: FUN_10005fc8
 * Address:  10005fc8
 * ================================================================ */

char * __cdecl FUN_10005fc8(undefined8 *param_1,char *param_2,size_t param_3)

{
  uint local_2c [6];
  int local_14;
  int local_10;
  
  FUN_10007f0f((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),&local_14,local_2c);
  FUN_10007e98(param_2 + (local_14 == 0x2d),local_10 + param_3,(int)&local_14);
  FUN_1000601d(param_2,param_3,&local_14,'\0');
  return param_2;
}



/* ================================================================
 * Function: FUN_1000601d
 * Address:  1000601d
 * ================================================================ */

char * __cdecl FUN_1000601d(char *param_1,size_t param_2,int *param_3,char param_4)

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
    FUN_100061a8(pcVar3,1);
    *pcVar3 = '0';
    pcVar3 = pcVar3 + 1;
  }
  else {
    pcVar3 = pcVar3 + param_3[1];
  }
  if (0 < (int)param_2) {
    FUN_100061a8(pcVar3,1);
    *pcVar3 = DAT_1000dae8;
    iVar1 = param_3[1];
    if (iVar1 < 0) {
      if ((param_4 != '\0') || (-iVar1 <= (int)param_2)) {
        param_2 = -iVar1;
      }
      FUN_100061a8(pcVar3 + 1,param_2);
      _memset(pcVar3 + 1,0x30,param_2);
    }
  }
  return param_1;
}



/* ================================================================
 * Function: FUN_100060c4
 * Address:  100060c4
 * ================================================================ */

void __cdecl FUN_100060c4(undefined8 *param_1,char *param_2,size_t param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  uint local_2c [6];
  int local_14;
  int local_10;
  
  FUN_10007f0f((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),&local_14,local_2c);
  iVar1 = local_10 + -1;
  FUN_10007e98(param_2 + (local_14 == 0x2d),param_3,(int)&local_14);
  local_10 = local_10 + -1;
  if ((local_10 < -4) || ((int)param_3 <= local_10)) {
    FUN_10005f06(param_2,param_3,param_4,&local_14,'\x01');
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
    FUN_1000601d(param_2,param_3,&local_14,'\x01');
  }
  return;
}



/* ================================================================
 * Function: __cfltcvt
 * Address:  10006157
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
    puVar2 = FUN_10005ea5(arg,buffer,format,precision);
  }
  else {
    if (sizeInBytes == 0x66) {
      pcVar1 = FUN_10005fc8(arg,buffer,format);
      return (errno_t)pcVar1;
    }
    puVar2 = (undefined1 *)FUN_100060c4(arg,buffer,format,precision);
  }
  return (errno_t)puVar2;
}



/* ================================================================
 * Function: FUN_100061a8
 * Address:  100061a8
 * ================================================================ */

void __cdecl FUN_100061a8(char *param_1,int param_2)

{
  size_t sVar1;
  
  if (param_2 != 0) {
    sVar1 = _strlen(param_1);
    FUN_10008180((undefined4 *)(param_1 + param_2),(undefined4 *)param_1,sVar1 + 1);
  }
  return;
}



/* ================================================================
 * Function: FUN_100061cd
 * Address:  100061cd
 * ================================================================ */

float10 __cdecl FUN_100061cd(int param_1,double param_2)

{
  DWORD *pDVar1;
  float10 fVar2;
  
  if (DAT_1000dd48 == 0) {
    fVar2 = FUN_10006783(1,param_1);
    return fVar2;
  }
  pDVar1 = FUN_100084be();
  *pDVar1 = 0x21;
  FUN_100069e6();
  return (float10)param_2;
}



/* ================================================================
 * Function: FUN_10006221
 * Address:  10006221
 * ================================================================ */

float10 __cdecl
FUN_10006221(uint param_1,uint param_2,undefined8 param_3,double param_4,uint param_5)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  float10 fVar3;
  uint local_5c [14];
  uint local_24;
  
  bVar1 = FUN_1000656c(param_1,&param_4,param_5);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    local_24 = local_24 & 0xfffffffe;
    FUN_100062b9(local_5c,&param_5,param_1,param_2,&param_3,&param_4);
  }
  iVar2 = FUN_10006858((byte)param_1);
  if ((DAT_1000dd48 == 0) && (iVar2 != 0)) {
    fVar3 = FUN_10006783(iVar2,param_2);
    return fVar3;
  }
  FUN_1000680b(iVar2);
  FUN_100069e6();
  return (float10)param_4;
}



/* ================================================================
 * Function: FUN_100062b9
 * Address:  100062b9
 * ================================================================ */

void __cdecl
FUN_100062b9(uint *param_1,uint *param_2,uint param_3,uint param_4,undefined8 *param_5,
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
  uVar3 = FUN_100069c9();
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
        goto LAB_1000642e;
      }
      uVar3 = *param_1 & 0xfffffffe | 2;
    }
    *param_1 = uVar3;
  }
LAB_1000642e:
  uVar3 = *puVar1 & 0x300;
  if (uVar3 == 0) {
    uVar3 = *param_1 & 0xffffffeb | 8;
LAB_10006464:
    *param_1 = uVar3;
  }
  else {
    if (uVar3 == 0x200) {
      uVar3 = *param_1 & 0xffffffe7 | 4;
      goto LAB_10006464;
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
  FUN_100069d7();
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
        goto LAB_10006539;
      }
      uVar3 = *puVar1 & 0xfffffbff | 0x800;
    }
    *puVar1 = uVar3;
  }
LAB_10006539:
  uVar3 = *param_1 >> 2 & 7;
  if (uVar3 == 0) {
    uVar3 = *puVar1 & 0xfffff3ff | 0x300;
  }
  else {
    if (uVar3 != 1) {
      if (uVar3 == 2) {
        *puVar1 = *puVar1 & 0xfffff3ff;
      }
      goto LAB_10006562;
    }
    uVar3 = *puVar1 & 0xfffff3ff | 0x200;
  }
  *puVar1 = uVar3;
LAB_10006562:
  *puVar2 = *(undefined8 *)(param_1 + 0x10);
  return;
}



/* ================================================================
 * Function: FUN_1000656c
 * Address:  1000656c
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl FUN_1000656c(uint param_1,double *param_2,uint param_3)

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
    FUN_10006a09();
    uVar3 = param_1 & 0x17;
    goto LAB_10006761;
  }
  if (((param_1 & 4) != 0) && ((param_3 & 4) != 0)) {
    FUN_10006a09();
    uVar3 = param_1 & 0x1b;
    goto LAB_10006761;
  }
  if (((param_1 & 1) == 0) || ((param_3 & 8) == 0)) {
    if (((param_1 & 2) != 0) && ((param_3 & 0x10) != 0)) {
      bVar4 = (param_1 & 0x10) != 0;
      dVar1 = *param_2;
      if (dVar1 != _DAT_1000c128) {
        fVar5 = FUN_10006908(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20),&local_8);
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
          if ((double)fVar5 < _DAT_1000c128) {
            local_10 = -local_10;
          }
        }
        *param_2 = local_10;
        bVar2 = bVar4;
      }
      if (bVar2) {
        FUN_10006a09();
      }
      uVar3 = param_1 & 0x1d;
    }
    goto LAB_10006761;
  }
  FUN_10006a09();
  uVar3 = param_3 & 0xc00;
  dVar1 = _DAT_1000d898;
  if (uVar3 == 0) {
    if (*param_2 <= _DAT_1000c128) {
      dVar1 = -_DAT_1000d898;
    }
LAB_10006681:
    *param_2 = dVar1;
  }
  else {
    if (uVar3 == 0x400) {
      dVar1 = _DAT_1000d8a8;
      if (*param_2 <= _DAT_1000c128) {
        dVar1 = -_DAT_1000d898;
      }
      goto LAB_10006681;
    }
    if (uVar3 == 0x800) {
      if (*param_2 <= _DAT_1000c128) {
        dVar1 = -_DAT_1000d8a8;
      }
      goto LAB_10006681;
    }
    if (uVar3 == 0xc00) {
      dVar1 = _DAT_1000d8a8;
      if (*param_2 <= _DAT_1000c128) {
        dVar1 = -_DAT_1000d8a8;
      }
      goto LAB_10006681;
    }
  }
  uVar3 = param_1 & 0x1e;
LAB_10006761:
  if (((param_1 & 0x10) != 0) && ((param_3 & 0x20) != 0)) {
    FUN_10006a09();
    uVar3 = uVar3 & 0xffffffef;
  }
  return uVar3 == 0;
}



/* ================================================================
 * Function: FUN_10006783
 * Address:  10006783
 * ================================================================ */

float10 __cdecl FUN_10006783(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  
  iVar1 = FUN_10006833(param_2);
  if (iVar1 != 0) {
    FUN_100069e6();
    iVar1 = FUN_100084c7();
    if (iVar1 == 0) {
      FUN_1000680b(param_1);
    }
    return (float10)(double)CONCAT44(in_stack_00000020,in_stack_0000001c);
  }
  FUN_100069e6();
  FUN_1000680b(param_1);
  return (float10)(double)CONCAT44(in_stack_00000020,in_stack_0000001c);
}



/* ================================================================
 * Function: FUN_1000680b
 * Address:  1000680b
 * ================================================================ */

void __cdecl FUN_1000680b(int param_1)

{
  DWORD *pDVar1;
  
  if (param_1 == 1) {
    pDVar1 = FUN_100084be();
    *pDVar1 = 0x21;
  }
  else if ((1 < param_1) && (param_1 < 4)) {
    pDVar1 = FUN_100084be();
    *pDVar1 = 0x22;
    return;
  }
  return;
}



/* ================================================================
 * Function: FUN_10006833
 * Address:  10006833
 * ================================================================ */

undefined4 __cdecl FUN_10006833(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_1000d7c0;
  do {
    if (*piVar1 == param_1) {
      return *(undefined4 *)(iVar2 * 8 + 0x1000d7c4);
    }
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x1000d898);
  return 0;
}



/* ================================================================
 * Function: FUN_10006858
 * Address:  10006858
 * ================================================================ */

int __cdecl FUN_10006858(byte param_1)

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
 * Function: FUN_10006885
 * Address:  10006885
 * ================================================================ */

float10 __cdecl FUN_10006885(undefined8 param_1,short param_2)

{
  undefined8 local_c;
  
  local_c = (double)CONCAT26((param_2 + 0x3fe) * 0x10 | param_1._6_2_ & 0x800f,(int6)param_1);
  return (float10)local_c;
}



/* ================================================================
 * Function: FUN_100068ae
 * Address:  100068ae
 * ================================================================ */

undefined4 __cdecl FUN_100068ae(int param_1,uint param_2)

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
 * Function: FUN_10006908
 * Address:  10006908
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_10006908(uint param_1,uint param_2,int *param_3)

{
  ushort uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  float10 fVar5;
  undefined8 local_c;
  
  if ((double)CONCAT17(param_2._3_1_,CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1))) ==
      _DAT_1000c128) {
    iVar4 = 0;
    local_c = 0.0;
  }
  else if (((param_2 & 0x7ff00000) == 0) && (((param_2 & 0xfffff) != 0 || (param_1 != 0)))) {
    iVar4 = -0x3fd;
    if (_DAT_1000c128 <=
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
    fVar5 = FUN_10006885(CONCAT17(param_2._3_1_,
                                  CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1))),0);
    local_c = (double)fVar5;
  }
  else {
    fVar5 = FUN_10006885(CONCAT17(param_2._3_1_,
                                  CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1))),0);
    local_c = (double)fVar5;
    iVar4 = (short)((ushort)(param_2 >> 0x14) & 0x7ff) + -0x3fe;
  }
  *param_3 = iVar4;
  return (float10)local_c;
}



/* ================================================================
 * Function: FUN_100069c9
 * Address:  100069c9
 * ================================================================ */

int FUN_100069c9(void)

{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}



/* ================================================================
 * Function: FUN_100069d7
 * Address:  100069d7
 * ================================================================ */

int FUN_100069d7(void)

{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}



/* ================================================================
 * Function: FUN_100069e6
 * Address:  100069e6
 * ================================================================ */

int FUN_100069e6(void)

{
  short in_FPUControlWord;
  
  return (int)in_FPUControlWord;
}



/* ================================================================
 * Function: FUN_10006a09
 * Address:  10006a09
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006a09(void)

{
  return;
}



/* ================================================================
 * Function: FUN_10006a5f
 * Address:  10006a5f
 * ================================================================ */

uint __thiscall FUN_10006a5f(void *this,int param_1,uint param_2)

{
  BOOL BVar1;
  int iVar2;
  undefined4 local_8;
  
  if (param_1 + 1U < 0x101) {
    param_1._2_2_ = *(ushort *)(PTR_DAT_1000d8d8 + param_1 * 2);
  }
  else {
    if ((PTR_DAT_1000d8d8[(param_1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      local_8 = CONCAT31((int3)((uint)this >> 8),(char)param_1) & 0xffff00ff;
      iVar2 = 1;
    }
    else {
      local_8._0_2_ = CONCAT11((char)param_1,(char)((uint)param_1 >> 8));
      local_8 = CONCAT22((short)((uint)this >> 0x10),(undefined2)local_8) & 0xff00ffff;
      iVar2 = 2;
    }
    BVar1 = FUN_100084ca(1,(LPCSTR)&local_8,iVar2,(LPWORD)((int)&param_1 + 2),0,0,1);
    if (BVar1 == 0) {
      return 0;
    }
  }
  return param_1._2_2_ & param_2;
}



/* ================================================================
 * Function: FUN_10006b14
 * Address:  10006b14
 * ================================================================ */

undefined4 FUN_10006b14(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_10008750();
  DAT_1000daf0 = TlsAlloc();
  if (DAT_1000daf0 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_10008613(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_1000daf0,lpTlsValue);
      if (BVar1 != 0) {
        FUN_10006b86((int)lpTlsValue);
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
 * Function: FUN_10006b68
 * Address:  10006b68
 * ================================================================ */

void FUN_10006b68(void)

{
  FUN_10008779();
  if (DAT_1000daf0 != 0xffffffff) {
    TlsFree(DAT_1000daf0);
    DAT_1000daf0 = 0xffffffff;
  }
  return;
}



/* ================================================================
 * Function: FUN_10006b86
 * Address:  10006b86
 * ================================================================ */

void __cdecl FUN_10006b86(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_1000de10;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}



/* ================================================================
 * Function: FUN_10006b99
 * Address:  10006b99
 * ================================================================ */

DWORD * FUN_10006b99(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_1000daf0);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_10008613(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_1000daf0,lpTlsValue);
      if (BVar1 != 0) {
        FUN_10006b86((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        goto LAB_10006bf4;
      }
    }
    __amsg_exit(0x10);
  }
LAB_10006bf4:
  SetLastError(dwErrCode);
  return lpTlsValue;
}



/* ================================================================
 * Function: FUN_10006c00
 * Address:  10006c00
 * ================================================================ */

void __cdecl FUN_10006c00(undefined *param_1)

{
  if (DAT_1000daf0 != 0xffffffff) {
    if ((param_1 != (undefined *)0x0) ||
       (param_1 = TlsGetValue(DAT_1000daf0), param_1 != (undefined *)0x0)) {
      if (*(undefined **)(param_1 + 0x24) != (undefined *)0x0) {
        FUN_1000885b(*(undefined **)(param_1 + 0x24));
      }
      if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
        FUN_1000885b(*(undefined **)(param_1 + 0x28));
      }
      if (*(undefined **)(param_1 + 0x30) != (undefined *)0x0) {
        FUN_1000885b(*(undefined **)(param_1 + 0x30));
      }
      if (*(undefined **)(param_1 + 0x38) != (undefined *)0x0) {
        FUN_1000885b(*(undefined **)(param_1 + 0x38));
      }
      if (*(undefined **)(param_1 + 0x40) != (undefined *)0x0) {
        FUN_1000885b(*(undefined **)(param_1 + 0x40));
      }
      if (*(undefined **)(param_1 + 0x44) != (undefined *)0x0) {
        FUN_1000885b(*(undefined **)(param_1 + 0x44));
      }
      if (*(undefined **)(param_1 + 0x50) != &DAT_1000de10) {
        FUN_1000885b(*(undefined **)(param_1 + 0x50));
      }
      FUN_1000885b(param_1);
    }
    TlsSetValue(DAT_1000daf0,(LPVOID)0x0);
    return;
  }
  return;
}



/* ================================================================
 * Function: FUN_10006ca0
 * Address:  10006ca0
 * ================================================================ */

void FUN_10006ca0(void)

{
  if (PTR_FUN_1000d790 != (undefined *)0x0) {
    (*(code *)PTR_FUN_1000d790)();
  }
  FUN_10006da4((undefined4 *)&DAT_1000d008,(undefined4 *)&DAT_1000d010);
  FUN_10006da4((undefined4 *)&DAT_1000d000,(undefined4 *)&DAT_1000d004);
  return;
}



/* ================================================================
 * Function: __exit
 * Address:  10006ccd
 * ================================================================ */

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __exit(int _Code)

{
  FUN_10006ced(_Code,1,0);
  return;
}



/* ================================================================
 * Function: FUN_10006cde
 * Address:  10006cde
 * ================================================================ */

void FUN_10006cde(void)

{
  FUN_10006ced(0,0,1);
  return;
}



/* ================================================================
 * Function: FUN_10006ced
 * Address:  10006ced
 * ================================================================ */

void __cdecl FUN_10006ced(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_10006d92();
  if (DAT_10010614 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_10010610 = 1;
  DAT_1001060c = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_10010cb0 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_10010cac - 4), DAT_10010cb0 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_10010cb0 <= puVar1);
    }
    FUN_10006da4((undefined4 *)&DAT_1000d014,(undefined4 *)&DAT_1000d018);
  }
  FUN_10006da4((undefined4 *)&DAT_1000d01c,(undefined4 *)&DAT_1000d020);
  if (param_3 == 0) {
    DAT_10010614 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_10006d9b();
  return;
}



/* ================================================================
 * Function: FUN_10006d92
 * Address:  10006d92
 * ================================================================ */

void FUN_10006d92(void)

{
  FUN_100087e5(0xd);
  return;
}



/* ================================================================
 * Function: FUN_10006d9b
 * Address:  10006d9b
 * ================================================================ */

void FUN_10006d9b(void)

{
  FUN_10008846(0xd);
  return;
}



/* ================================================================
 * Function: FUN_10006da4
 * Address:  10006da4
 * ================================================================ */

void __cdecl FUN_10006da4(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}



/* ================================================================
 * Function: FUN_10006dbe
 * Address:  10006dbe
 * ================================================================ */

void FUN_10006dbe(void)

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
  DAT_10010ca0 = 0x20;
  DAT_10010ba0 = puVar2;
  for (; puVar2 < DAT_10010ba0 + 0x120; puVar2 = puVar2 + 9) {
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
    if ((int)DAT_10010ca0 < (int)UVar8) {
      puVar2 = &DAT_10010ba4;
      do {
        puVar3 = _malloc(0x480);
        UVar9 = DAT_10010ca0;
        if (puVar3 == (undefined4 *)0x0) break;
        DAT_10010ca0 = DAT_10010ca0 + 0x20;
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
      } while ((int)DAT_10010ca0 < (int)UVar8);
    }
    uVar7 = 0;
    if (0 < (int)UVar9) {
      do {
        if (((*(HANDLE *)local_8 != (HANDLE)0xffffffff) && ((*pUVar5 & 1) != 0)) &&
           (((*pUVar5 & 8) != 0 || (DVar4 = GetFileType(*(HANDLE *)local_8), DVar4 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_10010ba0)[(int)uVar7 >> 5] + (uVar7 & 0x1f) * 0x24);
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
    puVar2 = DAT_10010ba0 + iVar6 * 9;
    if (DAT_10010ba0[iVar6 * 9] == -1) {
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
          goto LAB_10006f63;
        }
      }
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x40;
    }
    else {
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x80;
    }
LAB_10006f63:
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      SetHandleCount(DAT_10010ca0);
      return;
    }
  } while( true );
}



/* ================================================================
 * Function: FUN_10006f7a
 * Address:  10006f7a
 * ================================================================ */

void FUN_10006f7a(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  uint uVar2;
  
  puVar1 = &DAT_10010ba0;
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
      FUN_1000885b((undefined *)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x10010ca0);
  return;
}



/* ================================================================
 * Function: FUN_10006fce
 * Address:  10006fce
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006fce(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  
  if (DAT_10010ca8 == 0) {
    FUN_10008e56();
  }
  iVar5 = 0;
  for (puVar6 = DAT_100105c4; (char)*puVar6 != '\0'; puVar6 = (uint *)((int)puVar6 + sVar2 + 1)) {
    if ((char)*puVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen((char *)puVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  _DAT_100105f4 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = (char)*DAT_100105c4;
  puVar6 = DAT_100105c4;
  while (cVar1 != '\0') {
    sVar2 = _strlen((char *)puVar6);
    if ((char)*puVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_10008030((uint *)*puVar3,puVar6);
      puVar3 = puVar3 + 1;
    }
    puVar6 = (uint *)((int)puVar6 + sVar2 + 1);
    cVar1 = (char)*puVar6;
  }
  FUN_1000885b((undefined *)DAT_100105c4);
  DAT_100105c4 = (uint *)0x0;
  *puVar3 = 0;
  _DAT_10010ca4 = 1;
  return;
}



/* ================================================================
 * Function: FUN_10007087
 * Address:  10007087
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007087(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_10010ca8 == 0) {
    FUN_10008e56();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_10010618,0x104);
  _DAT_10010604 = &DAT_10010618;
  pbVar2 = &DAT_10010618;
  if (*DAT_10010cb4 != 0) {
    pbVar2 = DAT_10010cb4;
  }
  FUN_10007120(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_10007120(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_100105ec = puVar1;
  _DAT_100105e8 = local_8 + -1;
  return;
}



/* ================================================================
 * Function: FUN_10007120
 * Address:  10007120
 * ================================================================ */

void __cdecl FUN_10007120(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

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
      if (((*(byte *)((int)&DAT_10010a80 + bVar1 + 1) & 4) != 0) &&
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
      if ((*(byte *)((int)&DAT_10010a80 + bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        pbVar4 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_100071cb;
      param_1 = pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_100071cb:
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
          if ((*(byte *)((int)&DAT_10010a80 + bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if ((*(byte *)((int)&DAT_10010a80 + bVar1 + 1) & 4) != 0) {
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
 * Function: FUN_100072d4
 * Address:  100072d4
 * ================================================================ */

LPSTR FUN_100072d4(void)

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
  if (DAT_1001071c == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_1001071c = 1;
LAB_1000732b:
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
        FUN_1000885b(pCVar6);
        local_8 = (LPSTR)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return local_8;
    }
    pCVar9 = GetEnvironmentStrings();
    if (pCVar9 == (LPCH)0x0) {
      return (LPSTR)0x0;
    }
    DAT_1001071c = 2;
  }
  else {
    if (DAT_1001071c == 1) goto LAB_1000732b;
    if (DAT_1001071c != 2) {
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
    FUN_10005850((undefined4 *)pCVar6,(undefined4 *)pCVar9,(uint)(pcVar7 + (1 - (int)pCVar9)));
  }
  FreeEnvironmentStringsA(pCVar9);
  return pCVar6;
}



/* ================================================================
 * Function: FUN_10007406
 * Address:  10007406
 * ================================================================ */

void __cdecl FUN_10007406(undefined4 *param_1)

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
 * Function: FUN_10007433
 * Address:  10007433
 * ================================================================ */

int FUN_10007433(void)

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
  
  FUN_10009220();
  local_9c = 0x94;
  BVar3 = GetVersionExA((LPOSVERSIONINFOA)&local_9c);
  if (((BVar3 == 0) || (local_8c != 2)) || (local_98 < 5)) {
    aCStackY_18[0] = -0x73;
    aCStackY_18[1] = 't';
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
      aCStackY_18[0] = -0x35;
      aCStackY_18[1] = 't';
      aCStackY_18[2] = '\0';
      aCStackY_18[3] = '\x10';
      iVar5 = _strncmp("__GLOBAL_HEAP_SELECTED",local_1230,0x16);
      if (iVar5 == 0) {
        pcVar7 = local_1230;
      }
      else {
        aCStackY_18[0] = -0x13;
        aCStackY_18[1] = 't';
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
        aCStackY_18[0] = 'S';
        aCStackY_18[1] = 'u';
        aCStackY_18[2] = '\0';
        aCStackY_18[3] = '\x10';
        iVar5 = FUN_10008e72(this,pbVar6,(int *)0x0,(void *)0xa);
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
    FUN_10007406((undefined4 *)&stack0xfffffff8);
    iVar5 = 3 - (uint)(unaff_BL < 6);
  }
  else {
    iVar5 = 1;
  }
  return iVar5;
}



/* ================================================================
 * Function: FUN_1000757b
 * Address:  1000757b
 * ================================================================ */

undefined4 __cdecl FUN_1000757b(int param_1)

{
  undefined **ppuVar1;
  
  DAT_10010b88 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_10010b88 != (HANDLE)0x0) {
    DAT_10010b8c = FUN_10007433();
    if (DAT_10010b8c == 3) {
      ppuVar1 = (undefined **)FUN_1000924f(0x3f8);
    }
    else {
      if (DAT_10010b8c != 2) {
        return 1;
      }
      ppuVar1 = FUN_10009aa0();
    }
    if (ppuVar1 != (undefined **)0x0) {
      return 1;
    }
    HeapDestroy(DAT_10010b88);
  }
  return 0;
}



/* ================================================================
 * Function: FUN_100075d8
 * Address:  100075d8
 * ================================================================ */

void FUN_100075d8(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  
  if (DAT_10010b8c == 3) {
    iVar1 = 0;
    if (0 < DAT_10010944) {
      puVar2 = (undefined4 *)((int)DAT_10010948 + 0xc);
      do {
        VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
        VirtualFree((LPVOID)*puVar2,0,0x8000);
        HeapFree(DAT_10010b88,0,(LPVOID)puVar2[1]);
        puVar2 = puVar2 + 5;
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_10010944);
    }
    HeapFree(DAT_10010b88,0,DAT_10010948);
  }
  else if (DAT_10010b8c == 2) {
    ppuVar3 = &PTR_LOOP_1000df90;
    do {
      if (ppuVar3[4] != (undefined *)0x0) {
        VirtualFree(ppuVar3[4],0,0x8000);
      }
      ppuVar3 = (undefined **)*ppuVar3;
    } while (ppuVar3 != &PTR_LOOP_1000df90);
  }
  HeapDestroy(DAT_10010b88);
  return;
}



/* ================================================================
 * Function: FUN_10007680
 * Address:  10007680
 * ================================================================ */

void FUN_10007680(void)

{
  if ((DAT_100105cc == 1) || ((DAT_100105cc == 0 && (DAT_100105d0 == 1)))) {
    FUN_100076b9(0xfc);
    if (DAT_10010720 != (code *)0x0) {
      (*DAT_10010720)();
    }
    FUN_100076b9(0xff);
  }
  return;
}



/* ================================================================
 * Function: FUN_100076b9
 * Address:  100076b9
 * ================================================================ */

void __cdecl FUN_100076b9(DWORD param_1)

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
  pDVar2 = &DAT_1000db20;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while ((int)pDVar2 < 0x1000dbb0);
  if (param_1 == (&DAT_1000db20)[iVar5 * 2]) {
    if ((DAT_100105cc == 1) || ((DAT_100105cc == 0 && (DAT_100105d0 == 1)))) {
      pDVar2 = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x1000db24);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar4,pDVar2,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_10008030(local_1a8,(uint *)"<program name unknown>");
      }
      _Dest = local_1a8;
      sVar4 = _strlen((char *)local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen((char *)local_1a8);
        _Dest = (uint *)(auStackY_1e3 + sVar4);
        _strncpy((char *)_Dest,"...",3);
      }
      FUN_10008030(local_a4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_10008040(local_a4,_Dest);
      FUN_10008040(local_a4,(uint *)&DAT_1000c4d0);
      FUN_10008040(local_a4,*(uint **)(iVar5 * 8 + 0x1000db24));
      auStackY_1e3._3_4_ = 0x100077dd;
      FUN_1000a0c4(local_a4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}



/* ================================================================
 * Function: FUN_1000780c
 * Address:  1000780c
 * ================================================================ */

uint __thiscall FUN_1000780c(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  undefined2 in_FPUControlWord;
  undefined4 local_8;
  
  local_8 = CONCAT22((short)((uint)this >> 0x10),in_FPUControlWord);
  uVar1 = FUN_10007857(local_8);
  uVar1 = uVar1 & ~param_2 | param_1 & param_2;
  FUN_100078e9(uVar1);
  return uVar1;
}



/* ================================================================
 * Function: FUN_10007841
 * Address:  10007841
 * ================================================================ */

void __thiscall FUN_10007841(void *this,uint param_1,uint param_2)

{
  FUN_1000780c(this,param_1,param_2 & 0xfff7ffff);
  return;
}



/* ================================================================
 * Function: FUN_10007857
 * Address:  10007857
 * ================================================================ */

uint __cdecl FUN_10007857(uint param_1)

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
 * Function: FUN_100078e9
 * Address:  100078e9
 * ================================================================ */

uint __cdecl FUN_100078e9(uint param_1)

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
 * Function: FUN_10007972
 * Address:  10007972
 * ================================================================ */

uint __cdecl FUN_10007972(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_100107c4 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      return param_1 + 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_10010930);
    bVar1 = DAT_1001092c != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_10010930);
      this = (void *)0x13;
      FUN_100087e5(0x13);
    }
    param_1 = FUN_100079e1(this,param_1);
    if (bVar1) {
      FUN_10008846(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_10010930);
    }
  }
  return param_1;
}



/* ================================================================
 * Function: FUN_100079e1
 * Address:  100079e1
 * ================================================================ */

uint __thiscall FUN_100079e1(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_100107c4 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      uVar1 = param_1 + 0x20;
    }
  }
  else {
    iVar3 = 1;
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_1000dae4 < 2) {
        uVar2 = (byte)PTR_DAT_1000d8d8[param_1 * 2] & 1;
      }
      else {
        uVar2 = FUN_10006a5f(this,param_1,1);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_1000d8d8[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_1000a24e(DAT_100107c4,0x100,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
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
 * Function: FUN_10007aac
 * Address:  10007aac
 * ================================================================ */

undefined4 __cdecl FUN_10007aac(int param_1,int param_2)

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
 * Function: FUN_10007af5
 * Address:  10007af5
 * ================================================================ */

void __cdecl FUN_10007af5(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  
  puVar3 = (uint *)(param_1 + (param_2 / 0x20) * 4);
  iVar1 = FUN_1000a49d(*puVar3,1 << (0x1fU - (char)(param_2 % 0x20) & 0x1f),puVar3);
  iVar2 = param_2 / 0x20 + -1;
  if (-1 < iVar2) {
    puVar3 = (uint *)(param_1 + iVar2 * 4);
    do {
      if (iVar1 == 0) {
        return;
      }
      iVar1 = FUN_1000a49d(*puVar3,1,puVar3);
      iVar2 = iVar2 + -1;
      puVar3 = puVar3 + -1;
    } while (-1 < iVar2);
  }
  return;
}



/* ================================================================
 * Function: FUN_10007b4b
 * Address:  10007b4b
 * ================================================================ */

undefined4 __cdecl FUN_10007b4b(int param_1,int param_2)

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
     (iVar2 = FUN_10007aac(param_1,param_2 + 1), iVar2 == 0)) {
    local_8 = FUN_10007af5(param_1,param_2 + -1);
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
 * Function: FUN_10007bd7
 * Address:  10007bd7
 * ================================================================ */

void __cdecl FUN_10007bd7(int param_1,undefined4 *param_2)

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
 * Function: FUN_10007bf2
 * Address:  10007bf2
 * ================================================================ */

void __cdecl FUN_10007bf2(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ================================================================
 * Function: FUN_10007bfe
 * Address:  10007bfe
 * ================================================================ */

undefined4 __cdecl FUN_10007bfe(int *param_1)

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
 * Function: FUN_10007c19
 * Address:  10007c19
 * ================================================================ */

void __cdecl FUN_10007c19(uint *param_1,uint param_2)

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
 * Function: FUN_10007ca6
 * Address:  10007ca6
 * ================================================================ */

undefined4 __cdecl FUN_10007ca6(ushort *param_1,uint *param_2,int *param_3)

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
    iVar2 = FUN_10007bfe((int *)&local_10);
    if (iVar2 != 0) {
LAB_10007dd2:
      uVar5 = 0;
      goto LAB_10007dd4;
    }
    FUN_10007bf2(&local_10);
  }
  else {
    FUN_10007bd7((int)local_1c,&local_10);
    iVar2 = FUN_10007b4b((int)&local_10,param_3[2]);
    if (iVar2 != 0) {
      iVar4 = uVar3 - 0x3ffe;
    }
    iVar2 = param_3[1];
    if (iVar4 < iVar2 - param_3[2]) {
      FUN_10007bf2(&local_10);
    }
    else {
      if (iVar2 < iVar4) {
        if (*param_3 <= iVar4) {
          FUN_10007bf2(&local_10);
          local_10 = local_10 | 0x80000000;
          FUN_10007c19(&local_10,param_3[3]);
          iVar4 = param_3[5] + *param_3;
          uVar5 = 1;
          goto LAB_10007dd4;
        }
        local_10 = local_10 & 0x7fffffff;
        iVar4 = param_3[5] + iVar4;
        FUN_10007c19(&local_10,param_3[3]);
        goto LAB_10007dd2;
      }
      FUN_10007bd7((int)&local_10,local_1c);
      FUN_10007c19(&local_10,iVar2 - iVar4);
      FUN_10007b4b((int)&local_10,param_3[2]);
      FUN_10007c19(&local_10,param_3[3] + 1);
    }
  }
  iVar4 = 0;
  uVar5 = 2;
LAB_10007dd4:
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
 * Function: FUN_10007e12
 * Address:  10007e12
 * ================================================================ */

void __cdecl FUN_10007e12(ushort *param_1,uint *param_2)

{
  FUN_10007ca6(param_1,param_2,(int *)&DAT_1000dbb0);
  return;
}



/* ================================================================
 * Function: FUN_10007e28
 * Address:  10007e28
 * ================================================================ */

void __cdecl FUN_10007e28(ushort *param_1,uint *param_2)

{
  FUN_10007ca6(param_1,param_2,(int *)&DAT_1000dbc8);
  return;
}



/* ================================================================
 * Function: FUN_10007e3e
 * Address:  10007e3e
 * ================================================================ */

void __thiscall FUN_10007e3e(void *this,uint *param_1,byte *param_2)

{
  ushort local_10 [6];
  
  FUN_1000a63e(this,local_10,(int *)&param_2,param_2,0,0,0,0);
  FUN_10007e12(local_10,param_1);
  return;
}



/* ================================================================
 * Function: FUN_10007e6b
 * Address:  10007e6b
 * ================================================================ */

void __thiscall FUN_10007e6b(void *this,uint *param_1,byte *param_2)

{
  ushort local_10 [6];
  
  FUN_1000a63e(this,local_10,(int *)&param_2,param_2,0,0,0,0);
  FUN_10007e28(local_10,param_1);
  return;
}



/* ================================================================
 * Function: FUN_10007e98
 * Address:  10007e98
 * ================================================================ */

void __cdecl FUN_10007e98(char *param_1,int param_2,int param_3)

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
    FUN_10008180((undefined4 *)pcVar1,(undefined4 *)_Str,sVar3 + 1);
  }
  return;
}



/* ================================================================
 * Function: FUN_10007f0f
 * Address:  10007f0f
 * ================================================================ */

int * __cdecl FUN_10007f0f(undefined4 param_1,undefined4 param_2,int *param_3,uint *param_4)

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
  FUN_10007f6b(&local_10,&param_1);
  iVar3 = FUN_1000ab0f(local_10,uStack_c,CONCAT22(uVar4,uStack_8),0x11,0,&local_2c);
  puVar2 = param_4;
  piVar1 = param_3;
  param_3[2] = iVar3;
  *param_3 = (int)local_2a;
  param_3[1] = (int)local_2c;
  FUN_10008030(param_4,local_28);
  piVar1[3] = (int)puVar2;
  return piVar1;
}



/* ================================================================
 * Function: FUN_10007f6b
 * Address:  10007f6b
 * ================================================================ */

void __cdecl FUN_10007f6b(uint *param_1,uint *param_2)

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
 * Function: FUN_10008030
 * Address:  10008030
 * ================================================================ */

uint * __cdecl FUN_10008030(uint *param_1,uint *param_2)

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
    if (bVar1 == 0) goto LAB_10008118;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_10008118:
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
 * Function: FUN_10008040
 * Address:  10008040
 * ================================================================ */

uint * __cdecl FUN_10008040(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_1000805c;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_1000808f;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x100080ab;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_1000805c:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x100080ab;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x100080ab;
    }
  }
LAB_1000808f:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x100080ab:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_10008118:
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
    if (bVar1 == 0) goto LAB_10008118;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}



/* ================================================================
 * Function: _memset
 * Address:  10008120
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
 * Function: FUN_10008180
 * Address:  10008180
 * ================================================================ */

undefined4 * __cdecl FUN_10008180(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10008337_caseD_2;
        case 3:
          goto switchD_10008337_caseD_3;
        }
        goto switchD_10008337_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10008337_caseD_0;
      case 1:
        goto switchD_10008337_caseD_1;
      case 2:
        goto switchD_10008337_caseD_2;
      case 3:
        goto switchD_10008337_caseD_3;
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
              goto switchD_10008337_caseD_2;
            case 3:
              goto switchD_10008337_caseD_3;
            }
            goto switchD_10008337_caseD_1;
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
              goto switchD_10008337_caseD_2;
            case 3:
              goto switchD_10008337_caseD_3;
            }
            goto switchD_10008337_caseD_1;
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
              goto switchD_10008337_caseD_2;
            case 3:
              goto switchD_10008337_caseD_3;
            }
            goto switchD_10008337_caseD_1;
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
switchD_10008337_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10008337_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10008337_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10008337_caseD_0:
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
        goto switchD_100081b5_caseD_2;
      case 3:
        goto switchD_100081b5_caseD_3;
      }
      goto switchD_100081b5_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_100081b5_caseD_0;
    case 1:
      goto switchD_100081b5_caseD_1;
    case 2:
      goto switchD_100081b5_caseD_2;
    case 3:
      goto switchD_100081b5_caseD_3;
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
            goto switchD_100081b5_caseD_2;
          case 3:
            goto switchD_100081b5_caseD_3;
          }
          goto switchD_100081b5_caseD_1;
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
            goto switchD_100081b5_caseD_2;
          case 3:
            goto switchD_100081b5_caseD_3;
          }
          goto switchD_100081b5_caseD_1;
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
            goto switchD_100081b5_caseD_2;
          case 3:
            goto switchD_100081b5_caseD_3;
          }
          goto switchD_100081b5_caseD_1;
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
switchD_100081b5_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_100081b5_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_100081b5_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_100081b5_caseD_0:
  return param_1;
}



/* ================================================================
 * Function: FUN_100084be
 * Address:  100084be
 * ================================================================ */

DWORD * FUN_100084be(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10006b99();
  return pDVar1 + 2;
}



/* ================================================================
 * Function: FUN_100084c7
 * Address:  100084c7
 * ================================================================ */

undefined4 FUN_100084c7(void)

{
  return 0;
}



/* ================================================================
 * Function: FUN_100084ca
 * Address:  100084ca
 * ================================================================ */

BOOL __cdecl
FUN_100084ca(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
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
  puStack_c = &DAT_1000c518;
  puStack_10 = &LAB_1000ae9c;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc8;
  iVar3 = DAT_10010724;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc8;
  if (DAT_10010724 == 0) {
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
  DAT_10010724 = iVar3;
  if (DAT_10010724 != 2) {
    if (DAT_10010724 == 1) {
      if (param_5 == 0) {
        param_5 = DAT_100107d4;
      }
      iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,
                                  (LPWSTR)0x0,0);
      if (iVar3 != 0) {
        local_8 = 0;
        FUN_10009220();
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
    param_6 = DAT_100107c4;
  }
  BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return BVar2;
}



/* ================================================================
 * Function: FUN_10008613
 * Address:  10008613
 * ================================================================ */

int * __cdecl FUN_10008613(int param_1,int param_2)

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
  puStack_c = &DAT_1000c528;
  puStack_10 = &LAB_1000ae9c;
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
      if (DAT_10010b8c == 3) {
        if (puVar2 <= DAT_1001094c) {
          FUN_100087e5(9);
          local_8 = 0;
          local_24 = FUN_100095eb(puVar2);
          local_8 = 0xffffffff;
          FUN_100086ac();
          _Size = puVar2;
          if (local_24 == (int *)0x0) goto LAB_10008700;
LAB_100086ef:
          _memset(local_24,0,(size_t)_Size);
        }
LAB_100086fb:
        if (local_24 != (int *)0x0) {
          ExceptionList = local_14;
          return local_24;
        }
      }
      else {
        if ((DAT_10010b8c != 2) || (DAT_1000ffb4 < puVar3)) goto LAB_100086fb;
        FUN_100087e5(9);
        local_8 = 1;
        local_24 = FUN_10009d98((uint)puVar3 >> 4);
        local_8 = 0xffffffff;
        FUN_10008735();
        _Size = puVar3;
        if (local_24 != (int *)0x0) goto LAB_100086ef;
      }
LAB_10008700:
      local_24 = HeapAlloc(DAT_10010b88,8,(SIZE_T)puVar3);
    }
    if (local_24 != (int *)0x0) {
      ExceptionList = local_14;
      return local_24;
    }
    if (DAT_100107e4 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
    iVar1 = FUN_1000af74(puVar3);
    if (iVar1 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
  } while( true );
}



/* ================================================================
 * Function: FUN_100086ac
 * Address:  100086ac
 * ================================================================ */

void FUN_100086ac(void)

{
  FUN_10008846(9);
  return;
}



/* ================================================================
 * Function: FUN_10008735
 * Address:  10008735
 * ================================================================ */

void FUN_10008735(void)

{
  FUN_10008846(9);
  return;
}



/* ================================================================
 * Function: FUN_10008750
 * Address:  10008750
 * ================================================================ */

void FUN_10008750(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000dd90);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000dd80);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000dd70);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000dd50);
  return;
}



/* ================================================================
 * Function: FUN_10008779
 * Address:  10008779
 * ================================================================ */

void FUN_10008779(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_1000dd4c;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_1000dd90)) && (ppuVar1 != &PTR_DAT_1000dd80)) &&
       ((ppuVar1 != &PTR_DAT_1000dd70 && (ppuVar1 != &PTR_DAT_1000dd50)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_1000885b(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x1000de0c);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000dd70);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000dd80);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000dd90);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000dd50);
  return;
}



/* ================================================================
 * Function: FUN_100087e5
 * Address:  100087e5
 * ================================================================ */

void __cdecl FUN_100087e5(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_1000dd4c + param_1;
  if ((&DAT_1000dd4c)[param_1] == 0) {
    lpCriticalSection = _malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_100087e5(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_1000885b((undefined *)lpCriticalSection);
    }
    FUN_10008846(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}



/* ================================================================
 * Function: FUN_10008846
 * Address:  10008846
 * ================================================================ */

void __cdecl FUN_10008846(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_1000dd4c)[param_1]);
  return;
}



/* ================================================================
 * Function: FUN_1000885b
 * Address:  1000885b
 * ================================================================ */

void __cdecl FUN_1000885b(undefined *param_1)

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
  puStack_c = &DAT_1000c540;
  puStack_10 = &LAB_1000ae9c;
  local_14 = ExceptionList;
  if (param_1 == (undefined *)0x0) {
    return;
  }
  if (DAT_10010b8c == 3) {
    ExceptionList = &local_14;
    FUN_100087e5(9);
    local_8 = 0;
    local_20 = (uint *)FUN_10009297((int)param_1);
    if (local_20 != (uint *)0x0) {
      FUN_100092c2(local_20,(int)param_1);
    }
    local_8 = 0xffffffff;
    FUN_100088c5();
    puVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_10010b8c != 2) goto LAB_10008927;
    ExceptionList = &local_14;
    FUN_100087e5(9);
    local_8 = 1;
    local_28 = (uint *)FUN_10009cfc(param_1,&local_2c,&local_24);
    if (local_28 != (uint *)0x0) {
      FUN_10009d53(local_2c,local_24,(byte *)local_28);
    }
    local_8 = 0xffffffff;
    FUN_1000891d();
    puVar1 = local_28;
  }
  if (puVar1 != (uint *)0x0) {
    ExceptionList = local_14;
    return;
  }
LAB_10008927:
  HeapFree(DAT_10010b88,0,param_1);
  ExceptionList = local_14;
  return;
}



/* ================================================================
 * Function: FUN_100088c5
 * Address:  100088c5
 * ================================================================ */

void FUN_100088c5(void)

{
  FUN_10008846(9);
  return;
}



/* ================================================================
 * Function: FUN_1000891d
 * Address:  1000891d
 * ================================================================ */

void FUN_1000891d(void)

{
  FUN_10008846(9);
  return;
}



/* ================================================================
 * Function: _malloc
 * Address:  10008944
 * ================================================================ */

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_100107e4);
  return pvVar1;
}



/* ================================================================
 * Function: __nh_malloc
 * Address:  10008956
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
      pvVar1 = (void *)FUN_10008982((uint *)_Size);
      if (pvVar1 != (void *)0x0) {
        return pvVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = FUN_1000af74(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}



/* ================================================================
 * Function: FUN_10008982
 * Address:  10008982
 * ================================================================ */

void __cdecl FUN_10008982(uint *param_1)

{
  int *piVar1;
  uint dwBytes;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000c558;
  puStack_10 = &LAB_1000ae9c;
  local_14 = ExceptionList;
  if (DAT_10010b8c == 3) {
    ExceptionList = &local_14;
    if (param_1 <= DAT_1001094c) {
      ExceptionList = &local_14;
      FUN_100087e5(9);
      local_8 = 0;
      piVar1 = FUN_100095eb(param_1);
      local_8 = 0xffffffff;
      FUN_100089e9();
      if (piVar1 != (int *)0x0) {
        ExceptionList = local_14;
        return;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    if (DAT_10010b8c == 2) {
      if (param_1 == (uint *)0x0) {
        dwBytes = 0x10;
      }
      else {
        dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
      }
      ExceptionList = &local_14;
      if (dwBytes <= DAT_1000ffb4) {
        ExceptionList = &local_14;
        FUN_100087e5(9);
        local_8 = 1;
        piVar1 = FUN_10009d98(dwBytes >> 4);
        local_8 = 0xffffffff;
        FUN_10008a48();
        if (piVar1 != (int *)0x0) {
          ExceptionList = local_14;
          return;
        }
      }
      goto LAB_10008a61;
    }
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
LAB_10008a61:
  HeapAlloc(DAT_10010b88,0,dwBytes);
  ExceptionList = local_14;
  return;
}



/* ================================================================
 * Function: FUN_100089e9
 * Address:  100089e9
 * ================================================================ */

void FUN_100089e9(void)

{
  FUN_10008846(9);
  return;
}



/* ================================================================
 * Function: FUN_10008a48
 * Address:  10008a48
 * ================================================================ */

void FUN_10008a48(void)

{
  FUN_10008846(9);
  return;
}



/* ================================================================
 * Function: FUN_10008a7e
 * Address:  10008a7e
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10008a7e(int param_1)

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
  
  FUN_100087e5(0x19);
  CodePage = FUN_10008c2b(param_1);
  if (CodePage != DAT_10010950) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_1000dea0;
LAB_10008abb:
      if (*pUVar5 != CodePage) goto code_r0x10008abf;
      local_8 = 0;
      puVar15 = &DAT_10010a80;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x1000deb0);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_1000de98)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_10010a80 + uVar8 + 1);
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
      _DAT_1001096c = 1;
      DAT_10010950 = CodePage;
      DAT_10010b84 = FUN_10008c75(CodePage);
      DAT_10010960 = *(undefined4 *)(iVar12 + 0x1000dea4);
      DAT_10010964 = *(undefined4 *)(iVar12 + 0x1000dea8);
      DAT_10010968 = *(undefined4 *)(iVar12 + 0x1000deac);
      goto LAB_10008c0f;
    }
    goto LAB_10008c0a;
  }
  goto LAB_10008aa5;
code_r0x10008abf:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if (0x1000df8f < (int)pUVar5) goto code_r0x10008aca;
  goto LAB_10008abb;
code_r0x10008aca:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_10010b84 = 0;
    puVar15 = &DAT_10010a80;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      _DAT_1001096c = 0;
      DAT_10010950 = CodePage;
    }
    else {
      DAT_10010950 = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_10010a80 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_10010a80 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_10010b84 = FUN_10008c75(CodePage);
      _DAT_1001096c = 1;
    }
    DAT_10010960 = 0;
    DAT_10010964 = 0;
    DAT_10010968 = 0;
  }
  else {
    if (DAT_10010788 == 0) {
      uVar14 = 0xffffffff;
      goto LAB_10008c1c;
    }
LAB_10008c0a:
    FUN_10008ca8();
  }
LAB_10008c0f:
  FUN_10008cd1();
LAB_10008aa5:
  uVar14 = 0;
LAB_10008c1c:
  FUN_10008846(0x19);
  return uVar14;
}



/* ================================================================
 * Function: FUN_10008c2b
 * Address:  10008c2b
 * ================================================================ */

int __cdecl FUN_10008c2b(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_10010788 = 1;
                    /* WARNING: Could not recover jumptable at 0x10008c45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_10010788 = 1;
                    /* WARNING: Could not recover jumptable at 0x10008c5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_100107d4;
  }
  DAT_10010788 = (uint)bVar2;
  return param_1;
}



/* ================================================================
 * Function: FUN_10008c75
 * Address:  10008c75
 * ================================================================ */

undefined4 __cdecl FUN_10008c75(int param_1)

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
 * Function: FUN_10008ca8
 * Address:  10008ca8
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008ca8(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_10010a80;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_10010950 = 0;
  _DAT_1001096c = 0;
  DAT_10010b84 = 0;
  DAT_10010960 = 0;
  DAT_10010964 = 0;
  DAT_10010968 = 0;
  return;
}



/* ================================================================
 * Function: FUN_10008cd1
 * Address:  10008cd1
 * ================================================================ */

void FUN_10008cd1(void)

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
  
  BVar2 = GetCPInfo(DAT_10010950,&local_18);
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
    FUN_100084ca(1,local_118,0x100,local_518,DAT_10010950,DAT_10010b84,0);
    FUN_1000a24e(DAT_10010b84,0x100,local_118,0x100,local_218,0x100,DAT_10010950,0);
    FUN_1000a24e(DAT_10010b84,0x200,local_118,0x100,local_318,0x100,DAT_10010950,0);
    uVar3 = 0;
    puVar7 = local_518;
    do {
      if ((*puVar7 & 1) == 0) {
        if ((*puVar7 & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_10010a80 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          uVar8 = *(undefined1 *)((int)local_318 + uVar3);
          goto LAB_10008ddd;
        }
        (&DAT_10010980)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_10010a80 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        uVar8 = *(undefined1 *)((int)local_218 + uVar3);
LAB_10008ddd:
        (&DAT_10010980)[uVar3] = uVar8;
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
          pbVar1 = (byte *)((int)&DAT_10010a80 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar4 = (char)uVar3 + -0x20;
          goto LAB_10008e27;
        }
        (&DAT_10010980)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_10010a80 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar4 = (char)uVar3 + ' ';
LAB_10008e27:
        (&DAT_10010980)[uVar3] = cVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}



/* ================================================================
 * Function: FUN_10008e56
 * Address:  10008e56
 * ================================================================ */

void FUN_10008e56(void)

{
  if (DAT_10010ca8 == 0) {
    FUN_10008a7e(-3);
    DAT_10010ca8 = 1;
  }
  return;
}



/* ================================================================
 * Function: FUN_10008e72
 * Address:  10008e72
 * ================================================================ */

void __thiscall FUN_10008e72(void *this,byte *param_1,int *param_2,void *param_3)

{
  FUN_10008e89(this,param_1,param_2,param_3,0);
  return;
}



/* ================================================================
 * Function: FUN_10008e89
 * Address:  10008e89
 * ================================================================ */

void * __thiscall FUN_10008e89(void *this,byte *param_1,int *param_2,void *param_3,uint param_4)

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
    if (DAT_1000dae4 < 2) {
      uVar3 = (byte)PTR_DAT_1000d8d8[(uint)bVar7 * 2] & 8;
      this = PTR_DAT_1000d8d8;
    }
    else {
      puVar8 = (undefined *)0x8;
      uVar3 = FUN_10006a5f(this,(uint)bVar7,8);
      this = puVar8;
    }
    if (uVar3 == 0) break;
    bVar7 = *local_8;
    pbVar1 = local_8;
  }
  if (bVar7 == 0x2d) {
    param_4 = param_4 | 2;
LAB_10008ee4:
    bVar7 = *local_8;
    local_8 = pbVar1 + 2;
  }
  else if (bVar7 == 0x2b) goto LAB_10008ee4;
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
      goto LAB_10008f4e;
    }
    if ((*local_8 != 0x78) && (*local_8 != 0x58)) {
      param_3 = (void *)0x8;
      goto LAB_10008f4e;
    }
    param_3 = (void *)0x10;
  }
  if (((param_3 == (void *)0x10) && (bVar7 == 0x30)) && ((*local_8 == 0x78 || (*local_8 == 0x58))))
  {
    bVar7 = local_8[1];
    local_8 = local_8 + 2;
  }
LAB_10008f4e:
  pvVar4 = (void *)(0xffffffff / ZEXT48(param_3));
  do {
    uVar3 = (uint)bVar7;
    if (DAT_1000dae4 < 2) {
      uVar5 = (byte)PTR_DAT_1000d8d8[uVar3 * 2] & 4;
    }
    else {
      pvVar2 = (void *)0x4;
      uVar5 = FUN_10006a5f(this_00,uVar3,4);
      this_00 = pvVar2;
    }
    if (uVar5 == 0) {
      if (DAT_1000dae4 < 2) {
        uVar3 = *(ushort *)(PTR_DAT_1000d8d8 + uVar3 * 2) & 0x103;
      }
      else {
        uVar3 = FUN_10006a5f(this_00,uVar3,0x103);
      }
      if (uVar3 == 0) {
LAB_10008ffa:
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
          pDVar6 = FUN_100084be();
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
      uVar3 = FUN_1000af8f((int)(char)bVar7);
      this_00 = (void *)(uVar3 - 0x37);
    }
    else {
      this_00 = (void *)((char)bVar7 + -0x30);
    }
    if (param_3 <= this_00) goto LAB_10008ffa;
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
 * Address:  100090a0
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
 * Address:  10009160
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
LAB_100091d3:
        return _Str + -1;
      }
      if (*pcVar10 != pcVar8[2]) break;
      pcVar1 = pcVar8 + 3;
      if (*pcVar1 == '\0') goto LAB_100091d3;
      pcVar2 = pcVar10 + 1;
      pcVar8 = pcVar8 + 2;
      pcVar10 = pcVar10 + 2;
    } while (*pcVar1 == *pcVar2);
  } while( true );
}



/* ================================================================
 * Function: _strncmp
 * Address:  100091e0
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
 * Function: FUN_10009220
 * Address:  10009220
 * ================================================================ */

/* WARNING: Unable to track spacebase fully for stack */

void FUN_10009220(void)

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
 * Function: FUN_1000924f
 * Address:  1000924f
 * ================================================================ */

undefined4 __cdecl FUN_1000924f(undefined4 param_1)

{
  DAT_10010948 = HeapAlloc(DAT_10010b88,0,0x140);
  if (DAT_10010948 == (LPVOID)0x0) {
    return 0;
  }
  DAT_10010940 = 0;
  DAT_10010944 = 0;
  DAT_1001093c = DAT_10010948;
  DAT_1001094c = param_1;
  DAT_10010934 = 0x10;
  return 1;
}



/* ================================================================
 * Function: FUN_10009297
 * Address:  10009297
 * ================================================================ */

uint __cdecl FUN_10009297(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_10010948;
  while( true ) {
    if (DAT_10010948 + DAT_10010944 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}



/* ================================================================
 * Function: FUN_100092c2
 * Address:  100092c2
 * ================================================================ */

void __cdecl FUN_100092c2(uint *param_1,int param_2)

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
      if (DAT_10010940 != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_10010938 * 0x8000 + DAT_10010940[3]),0x8000,0x4000);
        DAT_10010940[2] = DAT_10010940[2] | 0x80000000U >> ((byte)DAT_10010938 & 0x1f);
        *(undefined4 *)(DAT_10010940[4] + 0xc4 + DAT_10010938 * 4) = 0;
        *(char *)(DAT_10010940[4] + 0x43) = *(char *)(DAT_10010940[4] + 0x43) + -1;
        if (*(char *)(DAT_10010940[4] + 0x43) == '\0') {
          DAT_10010940[1] = DAT_10010940[1] & 0xfffffffe;
        }
        if (DAT_10010940[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_10010940[3],0,0x8000);
          HeapFree(DAT_10010b88,0,(LPVOID)DAT_10010940[4]);
          FUN_10008180(DAT_10010940,DAT_10010940 + 5,
                       (DAT_10010944 * 0x14 - (int)DAT_10010940) + -0x14 + DAT_10010948);
          DAT_10010944 = DAT_10010944 + -1;
          if (DAT_10010940 < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_1001093c = DAT_10010948;
        }
      }
      DAT_10010940 = param_1;
      DAT_10010938 = uVar14;
    }
  }
  return;
}



/* ================================================================
 * Function: FUN_100095eb
 * Address:  100095eb
 * ================================================================ */

int * __cdecl FUN_100095eb(uint *param_1)

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
  
  puVar8 = DAT_10010948 + DAT_10010944 * 5;
  uVar6 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar7 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar5 = (byte)iVar7;
  param_1 = DAT_1001093c;
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
  puVar11 = DAT_10010948;
  if (param_1 == puVar8) {
    for (; (puVar11 < DAT_1001093c && ((puVar11[1] & local_c) == 0 && (*puVar11 & local_10) == 0));
        puVar11 = puVar11 + 5) {
    }
    param_1 = puVar11;
    if (puVar11 == DAT_1001093c) {
      for (; (puVar11 < puVar8 && (puVar11[2] == 0)); puVar11 = puVar11 + 5) {
      }
      puVar12 = DAT_10010948;
      param_1 = puVar11;
      if (puVar11 == puVar8) {
        for (; (puVar12 < DAT_1001093c && (puVar12[2] == 0)); puVar12 = puVar12 + 5) {
        }
        param_1 = puVar12;
        if ((puVar12 == DAT_1001093c) && (param_1 = FUN_100098f4(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar7 = FUN_100099a5((int)param_1);
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
  DAT_1001093c = param_1;
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
    if (iVar9 == 0) goto LAB_100098b1;
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
LAB_100098b1:
  piVar10 = (int *)((int)piVar10 + iVar9);
  *piVar10 = uVar6 + 1;
  *(uint *)((int)piVar10 + (uVar6 - 4)) = uVar6 + 1;
  iVar7 = *piVar2;
  *piVar2 = iVar7 + 1;
  if (((iVar7 == 0) && (param_1 == DAT_10010940)) && (local_8 == DAT_10010938)) {
    DAT_10010940 = (uint *)0x0;
  }
  *piVar4 = local_8;
  return piVar10 + 1;
}



/* ================================================================
 * Function: FUN_100098f4
 * Address:  100098f4
 * ================================================================ */

undefined4 * FUN_100098f4(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_10010944 == DAT_10010934) {
    pvVar2 = HeapReAlloc(DAT_10010b88,0,DAT_10010948,(DAT_10010934 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_10010934 = DAT_10010934 + 0x10;
    DAT_10010948 = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_10010948 + DAT_10010944 * 0x14);
  pvVar2 = HeapAlloc(DAT_10010b88,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_10010944 = DAT_10010944 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_10010b88,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}



/* ================================================================
 * Function: FUN_100099a5
 * Address:  100099a5
 * ================================================================ */

int __cdecl FUN_100099a5(int param_1)

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
 * Function: FUN_10009aa0
 * Address:  10009aa0
 * ================================================================ */

undefined ** FUN_10009aa0(void)

{
  bool bVar1;
  int *lpAddress;
  LPVOID pvVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined **lpMem;
  
  if (DAT_1000dfa0 == -1) {
    lpMem = &PTR_LOOP_1000df90;
  }
  else {
    lpMem = HeapAlloc(DAT_10010b88,0,0x2020);
    if (lpMem == (undefined **)0x0) {
      return (undefined **)0x0;
    }
  }
  lpAddress = VirtualAlloc((LPVOID)0x0,0x400000,0x2000,4);
  if (lpAddress != (int *)0x0) {
    pvVar2 = VirtualAlloc(lpAddress,0x10000,0x1000,4);
    if (pvVar2 != (LPVOID)0x0) {
      if (lpMem == &PTR_LOOP_1000df90) {
        if (PTR_LOOP_1000df90 == (undefined *)0x0) {
          PTR_LOOP_1000df90 = (undefined *)&PTR_LOOP_1000df90;
        }
        if (PTR_LOOP_1000df94 == (undefined *)0x0) {
          PTR_LOOP_1000df94 = (undefined *)&PTR_LOOP_1000df90;
        }
      }
      else {
        *lpMem = (undefined *)&PTR_LOOP_1000df90;
        lpMem[1] = PTR_LOOP_1000df94;
        PTR_LOOP_1000df94 = (undefined *)lpMem;
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
  if (lpMem != &PTR_LOOP_1000df90) {
    HeapFree(DAT_10010b88,0,lpMem);
  }
  return (undefined **)0x0;
}



/* ================================================================
 * Function: FUN_10009be4
 * Address:  10009be4
 * ================================================================ */

void __cdecl FUN_10009be4(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_1000ffb0 == param_1) {
    PTR_LOOP_1000ffb0 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_1000df90) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_10010b88,0,param_1);
    return;
  }
  DAT_1000dfa0 = 0xffffffff;
  return;
}



/* ================================================================
 * Function: FUN_10009c3a
 * Address:  10009c3a
 * ================================================================ */

void __cdecl FUN_10009c3a(int param_1)

{
  BOOL BVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  int local_8;
  
  ppuVar4 = (undefined **)PTR_LOOP_1000df94;
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
            DAT_1001078c = DAT_1001078c + -1;
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
          FUN_10009be4(ppuVar4);
        }
      }
    }
    if ((ppuVar5 == (undefined **)PTR_LOOP_1000df94) || (ppuVar4 = ppuVar5, param_1 < 1)) {
      return;
    }
  } while( true );
}



/* ================================================================
 * Function: FUN_10009cfc
 * Address:  10009cfc
 * ================================================================ */

int __cdecl FUN_10009cfc(undefined *param_1,undefined4 *param_2,uint *param_3)

{
  undefined **ppuVar1;
  uint uVar2;
  
  ppuVar1 = &PTR_LOOP_1000df90;
  while ((param_1 <= ppuVar1[4] || (ppuVar1[5] <= param_1))) {
    ppuVar1 = (undefined **)*ppuVar1;
    if (ppuVar1 == &PTR_LOOP_1000df90) {
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
 * Function: FUN_10009d53
 * Address:  10009d53
 * ================================================================ */

void __cdecl FUN_10009d53(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x18 + (param_2 - *(int *)(param_1 + 0x10) >> 0xc) * 8);
  *piVar1 = *piVar1 + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_1001078c = DAT_1001078c + 1, DAT_1001078c == 0x20)) {
    FUN_10009c3a(0x10);
  }
  return;
}



/* ================================================================
 * Function: FUN_10009d98
 * Address:  10009d98
 * ================================================================ */

/* WARNING: Type propagation algorithm not settling */

int * __cdecl FUN_10009d98(uint param_1)

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
  
  piVar7 = (int *)PTR_LOOP_1000ffb0;
  do {
    if (piVar7[4] != -1) {
      puVar8 = (uint *)piVar7[2];
      piVar4 = (int *)(((int)puVar8 + (-0x18 - (int)piVar7) >> 3) * 0x1000 + piVar7[4]);
      if (puVar8 < piVar7 + 0x806) {
        do {
          if (((int)param_1 <= (int)*puVar8) && (param_1 < puVar8[1])) {
            piVar5 = (int *)FUN_10009fa0(piVar4,*puVar8,param_1);
            if (piVar5 != (int *)0x0) goto LAB_10009e63;
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
          piVar5 = (int *)FUN_10009fa0(piVar4,*puVar8,param_1);
          if (piVar5 != (int *)0x0) {
LAB_10009e63:
            PTR_LOOP_1000ffb0 = (undefined *)piVar7;
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
    if (piVar7 == (int *)PTR_LOOP_1000ffb0) {
      ppuVar9 = &PTR_LOOP_1000df90;
      while ((ppuVar9[4] == (undefined *)0xffffffff || (ppuVar9[3] == (undefined *)0x0))) {
        ppuVar9 = (undefined **)*ppuVar9;
        if (ppuVar9 == &PTR_LOOP_1000df90) {
          ppuVar9 = FUN_10009aa0();
          if (ppuVar9 == (undefined **)0x0) {
            return (int *)0x0;
          }
          piVar7 = (int *)ppuVar9[4];
          *(char *)(piVar7 + 2) = (char)param_1;
          PTR_LOOP_1000ffb0 = (undefined *)ppuVar9;
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
      PTR_LOOP_1000ffb0 = (undefined *)ppuVar9;
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
 * Function: FUN_10009fa0
 * Address:  10009fa0
 * ================================================================ */

int __cdecl FUN_10009fa0(int *param_1,uint param_2,uint param_3)

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
          goto LAB_1000a0b3;
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
LAB_1000a0b3:
  return (int)pbVar2 * 0x10 + (int)param_1 * -0xf;
}



/* ================================================================
 * Function: FUN_1000a0c4
 * Address:  1000a0c4
 * ================================================================ */

int __cdecl FUN_1000a0c4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_10010790 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_10010790 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_10010790 != (FARPROC)0x0) {
        DAT_10010794 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_10010798 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_1000a113;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_1000a113:
    if (DAT_10010794 != (FARPROC)0x0) {
      iVar1 = (*DAT_10010794)();
      if ((iVar1 != 0) && (DAT_10010798 != (FARPROC)0x0)) {
        iVar1 = (*DAT_10010798)(iVar1);
      }
    }
    iVar1 = (*DAT_10010790)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}



/* ================================================================
 * Function: _strncpy
 * Address:  1000a150
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
        goto joined_r0x1000a18e;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_1000a1cb;
        goto LAB_1000a239;
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
joined_r0x1000a235:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_1000a239:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_1000a1cb;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x1000a235;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x1000a235;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x1000a235;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x1000a18e:
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
LAB_1000a1cb:
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
 * Function: FUN_1000a24e
 * Address:  1000a24e
 * ================================================================ */

int __cdecl
FUN_1000a24e(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000c5b0;
  puStack_10 = &LAB_1000ae9c;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_100107dc == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_100107dc = 2;
    }
    else {
      DAT_100107dc = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_1000a472(param_3,param_4);
  }
  if (DAT_100107dc == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
    ExceptionList = local_14;
    return iVar1;
  }
  if (DAT_100107dc == 1) {
    if (param_7 == 0) {
      param_7 = DAT_100107d4;
    }
    iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar1 != 0) {
      local_8 = 0;
      FUN_10009220();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x3c) &&
         (iVar2 = MultiByteToWideChar(param_7,1,param_3,param_4,(LPWSTR)&stack0xffffffc4,iVar1),
         iVar2 != 0)) {
        iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          if ((param_2 & 0x400) == 0) {
            local_8 = 1;
            FUN_10009220();
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
 * Function: FUN_1000a472
 * Address:  1000a472
 * ================================================================ */

int __cdecl FUN_1000a472(char *param_1,int param_2)

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
 * Function: FUN_1000a49d
 * Address:  1000a49d
 * ================================================================ */

undefined4 __cdecl FUN_1000a49d(uint param_1,uint param_2,uint *param_3)

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
 * Address:  1000a4be
 * ================================================================ */

/* Library Function - Single Match
    ___add_12
   
   Library: Visual Studio 2003 Release */

void __cdecl ___add_12(uint *param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = FUN_1000a49d(*param_1,*param_2,param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_1000a49d(param_1[1],1,param_1 + 1);
    if (iVar1 != 0) {
      param_1[2] = param_1[2] + 1;
    }
  }
  iVar1 = FUN_1000a49d(param_1[1],param_2[1],param_1 + 1);
  if (iVar1 != 0) {
    param_1[2] = param_1[2] + 1;
  }
  FUN_1000a49d(param_1[2],param_2[2],param_1 + 2);
  return;
}



/* ================================================================
 * Function: FUN_1000a51c
 * Address:  1000a51c
 * ================================================================ */

void __cdecl FUN_1000a51c(uint *param_1)

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
 * Function: FUN_1000a54a
 * Address:  1000a54a
 * ================================================================ */

void __cdecl FUN_1000a54a(uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = uVar1 >> 1 | param_1[2] << 0x1f;
  param_1[2] = param_1[2] >> 1;
  *param_1 = *param_1 >> 1 | uVar1 << 0x1f;
  return;
}



/* ================================================================
 * Function: FUN_1000a577
 * Address:  1000a577
 * ================================================================ */

void __cdecl FUN_1000a577(char *param_1,int param_2,uint *param_3)

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
      FUN_1000a51c(puVar1);
      FUN_1000a51c(puVar1);
      ___add_12(puVar1,&local_14);
      FUN_1000a51c(puVar1);
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
    FUN_1000a51c(puVar1);
    local_8 = local_8 + 0xffff;
  }
  *(undefined2 *)((int)puVar1 + 10) = (undefined2)local_8;
  return;
}



/* ================================================================
 * Function: FUN_1000a63e
 * Address:  1000a63e
 * ================================================================ */

undefined4 __thiscall
FUN_1000a63e(void *this,ushort *param_1,int *param_2,byte *param_3,int param_4,int param_5,
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
LAB_1000a695:
  local_14 = iVar5;
  pbVar7 = pbVar8;
  iVar5 = 1;
  bVar6 = *pbVar7;
  pbVar8 = pbVar7 + 1;
  iVar2 = local_14;
  switch(iVar9) {
  case 0:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) {
LAB_1000a6b2:
      local_14 = iVar2;
      iVar9 = 3;
      goto LAB_1000a8d7;
    }
    if (bVar6 == DAT_1000dae8) goto LAB_1000a6c1;
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
      if (bVar6 != 0x30) goto LAB_1000a9b1;
    }
    goto LAB_1000a695;
  case 1:
    local_14 = 1;
    if (('0' < (char)bVar6) && (iVar2 = iVar5, (char)bVar6 < ':')) goto LAB_1000a6b2;
    iVar9 = iVar1;
    if (bVar6 != DAT_1000dae8) {
      iVar9 = iVar5;
      if ((bVar6 == 0x2b) || (iVar9 = local_14, bVar6 == 0x2d)) goto LAB_1000a746;
      iVar9 = iVar5;
      local_14 = iVar5;
      if (bVar6 != 0x30) goto LAB_1000a71f;
    }
    goto LAB_1000a695;
  case 2:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) goto LAB_1000a6b2;
    if (bVar6 == DAT_1000dae8) {
LAB_1000a6c1:
      iVar9 = 5;
      iVar5 = local_14;
    }
    else {
      iVar9 = iVar5;
      pbVar7 = param_3;
      iVar5 = local_14;
      if (bVar6 != 0x30) goto LAB_1000a9b6;
    }
    goto LAB_1000a695;
  case 3:
    local_14 = iVar5;
    while( true ) {
      if (DAT_1000dae4 < 2) {
        uVar3 = (byte)PTR_DAT_1000d8d8[(uint)bVar6 * 2] & 4;
        this = PTR_DAT_1000d8d8;
      }
      else {
        pbVar7 = (byte *)0x4;
        uVar3 = FUN_10006a5f(this,(uint)bVar6,4);
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
    if (bVar6 != DAT_1000dae8) goto LAB_1000a833;
    goto LAB_1000a695;
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
      if (DAT_1000dae4 < 2) {
        uVar3 = (byte)PTR_DAT_1000d8d8[(uint)bVar6 * 2] & 4;
        this = PTR_DAT_1000d8d8;
      }
      else {
        pbVar7 = (byte *)0x4;
        uVar3 = FUN_10006a5f(this,(uint)bVar6,4);
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
LAB_1000a833:
    iVar9 = local_14;
    if ((bVar6 == 0x2b) || (bVar6 == 0x2d)) {
LAB_1000a746:
      local_14 = iVar9;
      iVar9 = 0xb;
      pbVar8 = pbVar8 + -1;
      iVar5 = local_14;
    }
    else {
LAB_1000a71f:
      if (((char)bVar6 < 'D') ||
         (('E' < (char)bVar6 && (((char)bVar6 < 'd' || ('e' < (char)bVar6)))))) goto LAB_1000a9b1;
      iVar9 = 6;
      iVar5 = local_14;
    }
    goto LAB_1000a695;
  case 5:
    local_28 = iVar5;
    if (DAT_1000dae4 < 2) {
      uVar3 = (byte)PTR_DAT_1000d8d8[(uint)bVar6 * 2] & 4;
      this = PTR_DAT_1000d8d8;
    }
    else {
      pbVar7 = (byte *)0x4;
      uVar3 = FUN_10006a5f(this,(uint)bVar6,4);
      this = pbVar7;
    }
    iVar9 = iVar1;
    pbVar7 = param_3;
    if (uVar3 != 0) goto LAB_1000a8d7;
    goto LAB_1000a9b6;
  case 6:
    pbVar7 = pbVar7 + -1;
    this = pbVar7;
    param_3 = pbVar7;
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) {
      if (bVar6 == 0x2b) goto LAB_1000a90c;
      if (bVar6 == 0x2d) goto LAB_1000a900;
      if (bVar6 != 0x30) goto LAB_1000a9b6;
LAB_1000a8a5:
      iVar9 = 8;
      iVar5 = local_14;
      goto LAB_1000a695;
    }
    break;
  case 7:
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) {
      pbVar7 = param_3;
      if (bVar6 == 0x30) goto LAB_1000a8a5;
      goto LAB_1000a9b6;
    }
    break;
  case 8:
    local_24 = 1;
    while (bVar6 == 0x30) {
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    }
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) goto LAB_1000a9b1;
    break;
  case 9:
    local_24 = 1;
    pbVar7 = (byte *)0x0;
    goto LAB_1000a937;
  default:
    goto switchD_1000a6a1_caseD_a;
  case 0xb:
    if (param_7 != 0) {
      if (bVar6 == 0x2b) {
LAB_1000a90c:
        iVar9 = 7;
        this = pbVar7;
        param_3 = pbVar7;
        iVar5 = local_14;
      }
      else {
        param_3 = pbVar7;
        if (bVar6 != 0x2d) goto LAB_1000a9b6;
LAB_1000a900:
        local_1c = -1;
        iVar9 = 7;
        this = pbVar7;
        param_3 = pbVar7;
        iVar5 = local_14;
      }
      goto LAB_1000a695;
    }
    iVar9 = 10;
    pbVar8 = pbVar7;
switchD_1000a6a1_caseD_a:
    pbVar7 = pbVar8;
    iVar5 = local_14;
    if (iVar9 != 10) goto LAB_1000a695;
    goto LAB_1000a9b6;
  }
  iVar9 = 9;
LAB_1000a8d7:
  pbVar8 = pbVar8 + -1;
  iVar5 = local_14;
  goto LAB_1000a695;
LAB_1000a937:
  if (DAT_1000dae4 < 2) {
    uVar3 = (byte)PTR_DAT_1000d8d8[(uint)bVar6 * 2] & 4;
    this = PTR_DAT_1000d8d8;
  }
  else {
    pbVar10 = (byte *)0x4;
    uVar3 = FUN_10006a5f(this,(uint)bVar6,4);
    this = pbVar10;
  }
  if (uVar3 == 0) goto LAB_1000a981;
  this = (void *)(int)(char)bVar6;
  pbVar7 = (byte *)((int)this + (int)pbVar7 * 10 + -0x30);
  if (0x1450 < (int)pbVar7) goto LAB_1000a979;
  bVar6 = *pbVar8;
  pbVar8 = pbVar8 + 1;
  goto LAB_1000a937;
LAB_1000a979:
  pbVar7 = (byte *)0x1451;
LAB_1000a981:
  while( true ) {
    local_20 = pbVar7;
    if (DAT_1000dae4 < 2) {
      uVar3 = (byte)PTR_DAT_1000d8d8[(uint)bVar6 * 2] & 4;
      this = PTR_DAT_1000d8d8;
    }
    else {
      pbVar7 = (byte *)0x4;
      uVar3 = FUN_10006a5f(this,(uint)bVar6,4);
      this = pbVar7;
    }
    if (uVar3 == 0) break;
    bVar6 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    pbVar7 = local_20;
  }
LAB_1000a9b1:
  pbVar7 = pbVar8 + -1;
LAB_1000a9b6:
  *param_2 = (int)pbVar7;
  if (local_14 == 0) {
    local_44 = 0;
    local_3a = 0;
    local_3e = (byte *)0x0;
    param_3 = (byte *)0x0;
    local_18 = 4;
    goto LAB_1000aac4;
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
    FUN_1000a577(local_60,local_8,(uint *)&local_44);
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
        FUN_1000b3fa((int *)&local_44,(uint)pbVar8,param_4);
        param_3 = (byte *)CONCAT22(uStack_40,uStack_42);
        goto LAB_1000aa49;
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
LAB_1000aa49:
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
LAB_1000aac4:
  *(byte **)(param_1 + 3) = local_3e;
  *(byte **)(param_1 + 1) = param_3;
  param_1[5] = local_3a | (ushort)local_2c;
  *param_1 = local_44;
  return local_18;
}



/* ================================================================
 * Function: FUN_1000ab0f
 * Address:  1000ab0f
 * ================================================================ */

undefined4 __cdecl
FUN_1000ab0f(uint param_1,uint param_2,uint param_3,int param_4,byte param_5,short *param_6)

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
          if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_1000ac04;
          pcVar11 = "1#INF";
        }
        else {
          if (param_1 != 0) {
LAB_1000ac04:
            pcVar11 = "1#QNAN";
            goto LAB_1000ac09;
          }
          pcVar11 = "1#IND";
        }
        FUN_10008030((uint *)(param_6 + 2),(uint *)pcVar11);
        *(undefined1 *)((int)psVar3 + 3) = 5;
      }
      else {
        pcVar11 = "1#SNAN";
LAB_1000ac09:
        FUN_10008030((uint *)(param_6 + 2),(uint *)pcVar11);
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
    FUN_1000b3fa((int *)&local_14,-(int)sVar8,1);
    if (0x3ffe < CONCAT11(cStack_9,local_a)) {
      sVar8 = sVar8 + 1;
      FUN_1000b1da((int *)&local_14,(int *)&local_20);
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
        FUN_1000a51c((uint *)&local_14);
        param_6 = (short *)((int)param_6 + -1);
      } while (param_6 != (short *)0x0);
      if (iVar9 < 0) {
        param_6 = (short *)0x0;
        for (uVar5 = -iVar9 & 0xff; uVar5 != 0; uVar5 = uVar5 - 1) {
          FUN_1000a54a((uint *)&local_14);
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
          FUN_1000a51c((uint *)&local_14);
          FUN_1000a51c((uint *)&local_14);
          ___add_12((uint *)&local_14,&param_1);
          FUN_1000a51c((uint *)&local_14);
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
            if (psVar1 <= psVar7) goto LAB_1000ad61;
            break;
          }
          *(char *)psVar7 = '0';
        }
        psVar7 = (short *)((int)psVar7 + 1);
        *psVar3 = *psVar3 + 1;
LAB_1000ad61:
        *(char *)psVar7 = (char)*psVar7 + '\x01';
LAB_1000ad63:
        cVar4 = ((char)psVar7 - (char)psVar3) + -3;
        *(char *)((int)psVar3 + 3) = cVar4;
        *(undefined1 *)(cVar4 + 4 + (int)psVar3) = 0;
        return local_8;
      }
      for (; psVar1 <= psVar7; psVar7 = (short *)((int)psVar7 + -1)) {
        if ((char)*psVar7 != '0') {
          if (psVar1 <= psVar7) goto LAB_1000ad63;
          break;
        }
      }
      *psVar3 = 0;
      *(undefined1 *)(psVar3 + 1) = 0x20;
      *(undefined1 *)((int)psVar3 + 3) = 1;
      *(char *)psVar1 = '0';
      goto LAB_1000ad99;
    }
  }
  *psVar3 = 0;
  *(undefined1 *)(psVar3 + 1) = 0x20;
  *(undefined1 *)((int)psVar3 + 3) = 1;
  *(undefined1 *)(psVar3 + 2) = 0x30;
LAB_1000ad99:
  *(undefined1 *)((int)psVar3 + 5) = 0;
  return 1;
}



/* ================================================================
 * Function: __global_unwind2
 * Address:  1000ada4
 * ================================================================ */

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x1000adbc,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



/* ================================================================
 * Function: __local_unwind2
 * Address:  1000ade6
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
  puStack_18 = &LAB_1000adc4;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_1000ae7a();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}



/* ================================================================
 * Function: FUN_1000ae7a
 * Address:  1000ae7a
 * ================================================================ */

void FUN_1000ae7a(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_100100d4 = *(undefined4 *)(unaff_EBP + 8);
  DAT_100100d0 = in_EAX;
  DAT_100100d8 = unaff_EBP;
  return;
}



/* ================================================================
 * Function: FUN_1000af59
 * Address:  1000af59
 * ================================================================ */

void FUN_1000af59(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}



/* ================================================================
 * Function: FUN_1000af74
 * Address:  1000af74
 * ================================================================ */

undefined4 __cdecl FUN_1000af74(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_100107e0 != (code *)0x0) {
    iVar1 = (*DAT_100107e0)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



/* ================================================================
 * Function: FUN_1000af8f
 * Address:  1000af8f
 * ================================================================ */

uint __cdecl FUN_1000af8f(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_100107c4 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      return param_1 - 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_10010930);
    bVar1 = DAT_1001092c != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_10010930);
      this = (void *)0x13;
      FUN_100087e5(0x13);
    }
    param_1 = FUN_1000affe(this,param_1);
    if (bVar1) {
      FUN_10008846(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_10010930);
    }
  }
  return param_1;
}



/* ================================================================
 * Function: FUN_1000affe
 * Address:  1000affe
 * ================================================================ */

uint __thiscall FUN_1000affe(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_100107c4 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      uVar1 = param_1 - 0x20;
    }
  }
  else {
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_1000dae4 < 2) {
        uVar2 = (byte)PTR_DAT_1000d8d8[param_1 * 2] & 2;
      }
      else {
        uVar2 = FUN_10006a5f(this,param_1,2);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_1000d8d8[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
      iVar3 = 1;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_1000a24e(DAT_100107c4,0x200,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
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
 * Function: FUN_1000b160
 * Address:  1000b160
 * ================================================================ */

int __cdecl FUN_1000b160(byte *param_1,byte *param_2)

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
 * Function: FUN_1000b1a0
 * Address:  1000b1a0
 * ================================================================ */

byte * __cdecl FUN_1000b1a0(byte *param_1,byte *param_2)

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
 * Function: FUN_1000b1da
 * Address:  1000b1da
 * ================================================================ */

void __cdecl FUN_1000b1da(int *param_1,int *param_2)

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
LAB_1000b27d:
      piVar4[2] = 0;
      piVar4[1] = 0;
      *piVar4 = 0;
      return;
    }
    if (((uVar6 != 0) || (piVar1 = (int *)((int)piVar1 + 1), (param_1[2] & 0x7fffffffU) != 0)) ||
       ((uVar6 = 0, param_1[1] != 0 || (*param_1 != 0)))) {
      param_1 = piVar1;
      if (((uVar9 == 0) && (param_1 = (int *)((int)param_1 + 1), (param_2[2] & 0x7fffffffU) == 0))
         && ((param_2[1] == 0 && (*param_2 == 0)))) goto LAB_1000b27d;
      local_14 = 0;
      local_8 = &local_24;
      param_2 = (int *)0x5;
      do {
        if (0 < (int)param_2) {
          local_c = (ushort *)(local_14 * 2 + (int)piVar4);
          local_10 = (ushort *)(piVar5 + 2);
          local_1c = param_2;
          do {
            iVar8 = FUN_1000a49d(*(uint *)(local_8 + -2),(uint)*local_c * (uint)*local_10,
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
LAB_1000b331:
        param_1._0_2_ = (ushort)param_1 - 1;
        if ((short)(ushort)param_1 < 0) {
          iVar8 = -(int)(short)(ushort)param_1;
          param_1._0_2_ = (ushort)param_1 + (short)iVar8;
          do {
            if ((local_28 & 1) != 0) {
              local_18 = local_18 + 1;
            }
            FUN_1000a54a((uint *)&local_28);
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
          FUN_1000a51c((uint *)&local_28);
          param_1 = (int *)((int)param_1 + 0xffff);
        } while (0 < (short)(ushort)param_1);
        if ((short)(ushort)param_1 < 1) goto LAB_1000b331;
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
      if (0x7ffe < (ushort)param_1) goto LAB_1000b3da;
      uVar6 = (ushort)param_1 | uVar11;
      *(undefined2 *)piVar4 = uStack_26;
      *(uint *)((int)piVar4 + 2) = CONCAT22(uStack_22,local_24);
      *(uint *)((int)piVar4 + 6) = CONCAT13(bStack_1d,CONCAT12(uStack_1e,local_20));
    }
    *(ushort *)((int)piVar4 + 10) = uVar6;
  }
  else {
LAB_1000b3da:
    piVar4[1] = 0;
    *piVar4 = 0;
    piVar4[2] = (-(uint)(uVar11 != 0) & 0x80000000) + 0x7fff8000;
  }
  return;
}



/* ================================================================
 * Function: FUN_1000b3fa
 * Address:  1000b3fa
 * ================================================================ */

void __cdecl FUN_1000b3fa(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined2 local_10;
  undefined4 local_e;
  undefined2 uStack_a;
  undefined *puStack_8;
  
  ppuVar3 = &PTR_DAT_10010180;
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      ppuVar3 = (undefined **)0x100102e0;
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
        FUN_1000b1da(param_1,(int *)ppuVar4);
      }
    }
  }
  return;
}



/* ================================================================
 * Function: FUN_1000b480
 * Address:  1000b480
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_1000b480(void *this,byte *param_1,byte *param_2)

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
  
  iVar2 = _DAT_10010930;
  if (DAT_100107c4 == 0) {
    bVar5 = 0xff;
    do {
      do {
        cVar6 = '\0';
        if (bVar5 == 0) goto LAB_1000b4ce;
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
LAB_1000b4ce:
    uVar7 = (uint)cVar6;
  }
  else {
    LOCK();
    _DAT_10010930 = _DAT_10010930 + 1;
    UNLOCK();
    bVar1 = 0 < DAT_1001092c;
    if (bVar1) {
      LOCK();
      UNLOCK();
      _DAT_10010930 = iVar2;
      FUN_100087e5(0x13);
      this = extraout_ECX;
    }
    uVar9 = (uint)bVar1;
    uVar7 = 0xff;
    uVar8 = 0;
    do {
      do {
        if ((char)uVar7 == '\0') goto LAB_1000b52f;
        bVar5 = *param_2;
        uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar5);
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        uVar8 = CONCAT31((int3)(uVar8 >> 8),bVar4);
        param_1 = param_1 + 1;
      } while (bVar5 == bVar4);
      uVar8 = FUN_100079e1(this,uVar8);
      uVar7 = FUN_100079e1(this_00,uVar7);
      this = extraout_ECX_00;
    } while ((byte)uVar8 == (byte)uVar7);
    uVar8 = (uint)((byte)uVar8 < (byte)uVar7);
    uVar7 = (1 - uVar8) - (uint)(uVar8 != 0);
LAB_1000b52f:
    if (uVar9 == 0) {
      LOCK();
      _DAT_10010930 = _DAT_10010930 + -1;
      UNLOCK();
    }
    else {
      FUN_10008846(0x13);
    }
  }
  return uVar7;
}



/* ================================================================
 * Function: FUN_1000b550
 * Address:  1000b550
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1000b550(byte *param_1,char *param_2,void *param_3)

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
  
  iVar2 = _DAT_10010930;
  uVar6 = 0;
  if (param_3 != (void *)0x0) {
    if (DAT_100107c4 == 0) {
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
        if (bVar3 != (byte)uVar4) goto LAB_1000b5af;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar3 = (byte)(uVar4 >> 8);
      bVar8 = bVar3 < (byte)uVar4;
      if (bVar3 != (byte)uVar4) {
LAB_1000b5af:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
    }
    else {
      LOCK();
      _DAT_10010930 = _DAT_10010930 + 1;
      UNLOCK();
      bVar8 = 0 < DAT_1001092c;
      if (bVar8) {
        LOCK();
        UNLOCK();
        _DAT_10010930 = iVar2;
        FUN_100087e5(0x13);
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
        uVar7 = FUN_100079e1(param_3,uVar7);
        uVar5 = FUN_100079e1(this,uVar5);
        bVar8 = uVar5 < uVar7;
        if (uVar5 != uVar7) goto LAB_1000b625;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar8 = uVar5 < uVar7;
      if (uVar5 != uVar7) {
LAB_1000b625:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
      if (uVar9 == 0) {
        LOCK();
        _DAT_10010930 = _DAT_10010930 + -1;
        UNLOCK();
      }
      else {
        FUN_10008846(0x13);
      }
    }
  }
  return uVar6;
}



/* ================================================================
 * Function: RtlUnwind
 * Address:  1000b746
 * ================================================================ */

void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue)

{
                    /* WARNING: Could not recover jumptable at 0x1000b746. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RtlUnwind(TargetFrame,TargetIp,ExceptionRecord,ReturnValue);
  return;
}



