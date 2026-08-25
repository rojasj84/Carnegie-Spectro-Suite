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
  FUN_1001508a(param_1);
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
  FUN_1001508a(param_1);
  return;
}



/* ================================================================
 * Function: FUN_10001060
 * Address:  10001060
 * ================================================================ */

undefined2 FUN_10001060(int param_1)

{
  short sVar1;
  undefined2 local_1c;
  undefined1 local_14;
  undefined4 local_10;
  undefined1 local_c;
  undefined1 local_8;
  
  local_1c = 0;
  sVar1 = FUN_1000582e();
  if (sVar1 != 0) {
    *(undefined1 *)(param_1 + 0x25c) = local_c;
    *(undefined1 *)(param_1 + 0x25d) = local_8;
    sVar1 = FUN_10005a5d();
    if (sVar1 != 0) {
      *(uint *)(param_1 + 0x260) = local_10 & 0xfffffffe;
    }
    sVar1 = FUN_10005a5d();
    if (sVar1 != 0) {
      *(uint *)(param_1 + 0x264) = local_10 & 0xfffffffe;
    }
    sVar1 = FUN_10005a5d();
    if (sVar1 != 0) {
      *(uint *)(param_1 + 0x268) = local_10 & 0xfffffffe;
    }
    sVar1 = FUN_100059d7();
    if (sVar1 != 0) {
      *(ushort *)(param_1 + 0x1e0) = (ushort)local_14;
    }
    if ((*(int *)(param_1 + 0x264) == 0) || (*(int *)(param_1 + 0x268) == 0)) {
      local_1c = 0;
    }
    else {
      local_1c = 1;
    }
  }
  return local_1c;
}



/* ================================================================
 * Function: FUN_100011b9
 * Address:  100011b9
 * ================================================================ */

undefined2 FUN_100011b9(int param_1)

{
  undefined2 uVar1;
  uint uVar2;
  
  uVar2 = FUN_10005b4b();
  uVar1 = 0;
  if ((short)uVar2 != 0) {
    uVar2 = FUN_10005b17();
    uVar1 = (undefined2)uVar2;
  }
  FUN_1000c260(*(int *)(param_1 + 0x260) + 0x38,0,(short)*(undefined4 *)(param_1 + 0x270) + 2);
  FUN_1000c260(*(int *)(param_1 + 0x260) + 0x3c,0,(short)*(undefined4 *)(param_1 + 0x270) + 2);
  FUN_10001df5(param_1);
  FUN_100020ed(param_1);
  return uVar1;
}



/* ================================================================
 * Function: FUN_1000126e
 * Address:  1000126e
 * ================================================================ */

undefined4 FUN_1000126e(int param_1,uint param_2,uint param_3)

{
  short sVar1;
  undefined2 uVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar3;
  
  FUN_1000c260(*(int *)(param_1 + 0x260) + 0x3f,0x80,(short)*(undefined4 *)(param_1 + 0x270));
  FUN_1000c260(*(int *)(param_1 + 0x260) + 0x3e,param_3 & 0xff,
               (short)*(undefined4 *)(param_1 + 0x270));
  FUN_1000c260(*(int *)(param_1 + 0x260) + 0x3f,0xa0,(short)*(undefined4 *)(param_1 + 0x270));
  FUN_1000c260(*(int *)(param_1 + 0x260) + 0x3e,param_3 >> 8,(short)*(undefined4 *)(param_1 + 0x270)
              );
  FUN_1000c260(*(int *)(param_1 + 0x260) + 0x3f,0xe0,(short)*(undefined4 *)(param_1 + 0x270));
  sVar1 = FUN_10001498(param_1);
  uVar2 = 0;
  uVar3 = extraout_var;
  if (sVar1 != 0) {
    FUN_1000c260(*(int *)(param_1 + 0x260) + 0x3e,param_2 & 0xff,
                 (short)*(undefined4 *)(param_1 + 0x270));
    FUN_1000c260(*(int *)(param_1 + 0x260) + 0x3f,0xc0,(short)*(undefined4 *)(param_1 + 0x270));
    uVar2 = FUN_10001498(param_1);
    uVar3 = extraout_var_00;
  }
  return CONCAT22(uVar3,uVar2);
}



/* ================================================================
 * Function: FUN_10001396
 * Address:  10001396
 * ================================================================ */

undefined4 FUN_10001396(int param_1,undefined1 *param_2,uint param_3)

{
  short sVar1;
  undefined2 uVar2;
  undefined2 extraout_var;
  uint uVar3;
  undefined2 extraout_var_00;
  undefined2 uVar4;
  
  FUN_1000c260(*(int *)(param_1 + 0x260) + 0x3f,0x80,(short)*(undefined4 *)(param_1 + 0x270));
  FUN_1000c260(*(int *)(param_1 + 0x260) + 0x3e,param_3 & 0xff,
               (short)*(undefined4 *)(param_1 + 0x270));
  FUN_1000c260(*(int *)(param_1 + 0x260) + 0x3f,0xa0,(short)*(undefined4 *)(param_1 + 0x270));
  FUN_1000c260(*(int *)(param_1 + 0x260) + 0x3e,param_3 >> 8,(short)*(undefined4 *)(param_1 + 0x270)
              );
  FUN_1000c260(*(int *)(param_1 + 0x260) + 0x3f,0xe0,(short)*(undefined4 *)(param_1 + 0x270));
  sVar1 = FUN_10001498(param_1);
  uVar2 = 0;
  uVar4 = extraout_var;
  if (sVar1 != 0) {
    uVar3 = FUN_1000c2a3(*(int *)(param_1 + 0x260) + 0x3e,(short)*(undefined4 *)(param_1 + 0x270));
    *param_2 = (char)uVar3;
    uVar2 = FUN_10001498(param_1);
    uVar4 = extraout_var_00;
  }
  return CONCAT22(uVar4,uVar2);
}



/* ================================================================
 * Function: FUN_10001498
 * Address:  10001498
 * ================================================================ */

undefined2 FUN_10001498(int param_1)

{
  uint uVar1;
  undefined2 local_c;
  short local_8;
  
  local_c = 1;
  local_8 = 0;
  while (uVar1 = FUN_1000c2a3(*(int *)(param_1 + 0x260) + 0x3f,
                              (short)*(undefined4 *)(param_1 + 0x270)), (uVar1 & 0x80) != 0) {
    local_8 = local_8 + 1;
    if (1000 < local_8) {
      local_c = 0;
    }
  }
  return local_c;
}



/* ================================================================
 * Function: FUN_100014f9
 * Address:  100014f9
 * ================================================================ */

undefined4 FUN_100014f9(int param_1,short param_2,uint param_3,uint param_4,uint param_5)

{
  undefined4 uVar1;
  
  FUN_1000c260(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x276),
               (uint)(ushort)(param_2 << 3),(short)*(undefined4 *)(param_1 + 0x270) + 2);
  FUN_1000c260(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x278),param_5 & 0xff,
               (short)*(undefined4 *)(param_1 + 0x270) + 2);
  FUN_1000c260(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x278),param_3 & 0xff,
               (short)*(undefined4 *)(param_1 + 0x270) + 2);
  FUN_1000c260(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x278),param_3 >> 8,
               (short)*(undefined4 *)(param_1 + 0x270) + 2);
  FUN_1000c260(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x278),param_3 >> 0x10,
               (short)*(undefined4 *)(param_1 + 0x270) + 2);
  FUN_1000c260(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x278),param_3 >> 0x18,
               (short)*(undefined4 *)(param_1 + 0x270) + 2);
  FUN_1000c260(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x278),param_4 & 0xff,
               (short)*(undefined4 *)(param_1 + 0x270) + 2);
  FUN_1000c260(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x278),param_4 >> 8,
               (short)*(undefined4 *)(param_1 + 0x270) + 2);
  uVar1 = FUN_1000c260(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x278),
                       param_4 >> 0x10,(short)*(undefined4 *)(param_1 + 0x270) + 2);
  return CONCAT22((short)((uint)uVar1 >> 0x10),1);
}



/* ================================================================
 * Function: FUN_100016dc
 * Address:  100016dc
 * ================================================================ */

undefined4 FUN_100016dc(int param_1,short param_2,uint *param_3,uint *param_4,undefined1 *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 local_8;
  
  *(ushort *)(param_1 + 0x256) = *(ushort *)(param_1 + 0x256) & 0xfff7;
  FUN_1000c260(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x2a0),
               (uint)*(ushort *)(param_1 + 0x256),(short)*(undefined4 *)(param_1 + 0x270) + 2);
  FUN_1000c260(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x276),
               (uint)(ushort)(param_2 << 3),(short)*(undefined4 *)(param_1 + 0x270) + 2);
  uVar1 = FUN_1000c2a3(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x274),
                       (short)*(undefined4 *)(param_1 + 0x270) + 2);
  local_8 = (undefined1)uVar1;
  *param_5 = local_8;
  uVar1 = FUN_1000c2a3(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x274),
                       (short)*(undefined4 *)(param_1 + 0x270) + 2);
  *param_3 = uVar1 & 0xff;
  uVar1 = FUN_1000c2a3(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x274),
                       (short)*(undefined4 *)(param_1 + 0x270) + 2);
  *param_3 = *param_3 + (uVar1 & 0xff) * 0x100;
  uVar1 = FUN_1000c2a3(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x274),
                       (short)*(undefined4 *)(param_1 + 0x270) + 2);
  *param_3 = *param_3 + (uVar1 & 0xff) * 0x10000;
  uVar1 = FUN_1000c2a3(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x274),
                       (short)*(undefined4 *)(param_1 + 0x270) + 2);
  *param_3 = *param_3 + uVar1 * 0x1000000;
  uVar1 = FUN_1000c2a3(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x274),
                       (short)*(undefined4 *)(param_1 + 0x270) + 2);
  *param_4 = uVar1 & 0xff;
  uVar1 = FUN_1000c2a3(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x274),
                       (short)*(undefined4 *)(param_1 + 0x270) + 2);
  *param_4 = *param_4 + (uVar1 & 0xff) * 0x100;
  uVar1 = FUN_1000c2a3(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x274),
                       (short)*(undefined4 *)(param_1 + 0x270) + 2);
  *param_4 = *param_4 + (uVar1 & 0xff) * 0x10000;
  *(ushort *)(param_1 + 0x256) = *(ushort *)(param_1 + 0x256) | 8;
  uVar2 = FUN_1000c260(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x2a0),
                       (uint)*(ushort *)(param_1 + 0x256),
                       (short)*(undefined4 *)(param_1 + 0x270) + 2);
  return CONCAT22((short)((uint)uVar2 >> 0x10),1);
}



/* ================================================================
 * Function: FUN_10001a07
 * Address:  10001a07
 * ================================================================ */

void FUN_10001a07(int param_1,undefined4 param_2)

{
  FUN_1000c260(*(int *)(param_1 + 0x264) + (uint)*(ushort *)(param_1 + 0x282),param_2,
               (short)*(undefined4 *)(param_1 + 0x270));
  *(ushort *)(param_1 + 0x254) = *(ushort *)(param_1 + 0x254) | 8;
  FUN_1000c260(*(int *)(param_1 + 0x264) + (uint)*(ushort *)(param_1 + 0x2a0),
               (uint)*(ushort *)(param_1 + 0x254),(short)*(undefined4 *)(param_1 + 0x270) + 2);
  return;
}



/* ================================================================
 * Function: FUN_10001a87
 * Address:  10001a87
 * ================================================================ */

bool FUN_10001a87(int param_1,char param_2)

{
  uint uVar1;
  byte bVar2;
  
  bVar2 = param_2 * '\x04' + 0xc;
  uVar1 = FUN_1000c2a3(*(int *)(param_1 + 0x260) + 0x34,(short)*(undefined4 *)(param_1 + 0x270) + 2)
  ;
  return (uVar1 & (1 << (bVar2 & 0x1f)) * 0xf) >> (bVar2 & 0x1f) == 0xf;
}



/* ================================================================
 * Function: FUN_10001b08
 * Address:  10001b08
 * ================================================================ */

void FUN_10001b08(int param_1)

{
  uint uVar1;
  
  FUN_1000c260(*(int *)(param_1 + 0x268) + *(int *)(param_1 + 0x2a8),0xff,
               (short)*(undefined4 *)(param_1 + 0x270) + 2);
  uVar1 = FUN_1000c2a3(*(int *)(param_1 + 0x260) + 0x38,(short)*(undefined4 *)(param_1 + 0x270) + 2)
  ;
  FUN_1000c260(*(int *)(param_1 + 0x260) + 0x38,uVar1 | 0x1f00,
               (short)*(undefined4 *)(param_1 + 0x270) + 2);
  return;
}



/* ================================================================
 * Function: FUN_10001b8a
 * Address:  10001b8a
 * ================================================================ */

void FUN_10001b8a(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_1000c2a3(*(int *)(param_1 + 0x260) + 0x38,(short)*(undefined4 *)(param_1 + 0x270) + 2)
  ;
  FUN_1000c260(*(int *)(param_1 + 0x260) + 0x38,uVar1 & 0xffffe0ff,
               (short)*(undefined4 *)(param_1 + 0x270) + 2);
  return;
}



/* ================================================================
 * Function: FUN_10001be2
 * Address:  10001be2
 * ================================================================ */

void FUN_10001be2(int param_1)

{
  uint uVar1;
  
  FUN_1000c260(*(int *)(param_1 + 0x264) + (uint)*(ushort *)(param_1 + 0x27c),0,
               (short)*(undefined4 *)(param_1 + 0x270) + 2);
  FUN_10001a07(param_1,0x80);
  FUN_10002023(param_1,0x3c,0x16000000);
  FUN_10002023(param_1,0x38,0x4000);
  uVar1 = FUN_1000c2a3(*(int *)(param_1 + 0x260) + 0x3c,(short)*(undefined4 *)(param_1 + 0x270) + 2)
  ;
  FUN_1000c260(*(int *)(param_1 + 0x260) + 0x3c,uVar1 | 0x500,
               (short)*(undefined4 *)(param_1 + 0x270) + 2);
  *(ushort *)(param_1 + 0x254) = *(ushort *)(param_1 + 0x254) | 5;
  FUN_1000c260(*(int *)(param_1 + 0x264) + (uint)*(ushort *)(param_1 + 0x2a0),
               (uint)*(ushort *)(param_1 + 0x254),(short)*(undefined4 *)(param_1 + 0x270) + 2);
  return;
}



/* ================================================================
 * Function: FUN_10001ce2
 * Address:  10001ce2
 * ================================================================ */

void FUN_10001ce2(int param_1)

{
  uint uVar1;
  
  FUN_10002023(param_1,0x3c,0x6000000);
  FUN_10002023(param_1,0x38,0);
  uVar1 = FUN_1000c2a3(*(int *)(param_1 + 0x260) + 0x3c,(short)*(undefined4 *)(param_1 + 0x270) + 2)
  ;
  FUN_1000c260(*(int *)(param_1 + 0x260) + 0x3c,uVar1 & 0xfffffaff,
               (short)*(undefined4 *)(param_1 + 0x270) + 2);
  *(ushort *)(param_1 + 0x254) = *(ushort *)(param_1 + 0x254) & 0xfffa;
  FUN_1000c260(*(int *)(param_1 + 0x264) + (uint)*(ushort *)(param_1 + 0x2a0),
               (uint)*(ushort *)(param_1 + 0x254),(short)*(undefined4 *)(param_1 + 0x270) + 2);
  return;
}



/* ================================================================
 * Function: FUN_10001da7
 * Address:  10001da7
 * ================================================================ */

bool FUN_10001da7(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_1000c2a3(*(int *)(param_1 + 0x260) + 0x3c,(short)*(undefined4 *)(param_1 + 0x270) + 2)
  ;
  return (uVar1 & 0x20) != 0;
}



/* ================================================================
 * Function: FUN_10001df5
 * Address:  10001df5
 * ================================================================ */

void FUN_10001df5(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_1000c2a3(*(int *)(param_1 + 0x260) + 0x3c,(short)*(undefined4 *)(param_1 + 0x270) + 2)
  ;
  FUN_1000c260(*(int *)(param_1 + 0x260) + 0x3c,uVar1 | 0x1000000,
               (short)*(undefined4 *)(param_1 + 0x270) + 2);
  FUN_1000c260(*(int *)(param_1 + 0x260) + 0x3c,uVar1 & 0xfeffffff,
               (short)*(undefined4 *)(param_1 + 0x270) + 2);
  return;
}



/* ================================================================
 * Function: FUN_10001e7f
 * Address:  10001e7f
 * ================================================================ */

uint FUN_10001e7f(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_1000c2a3(*(int *)(param_1 + 0x260) + 0x24,(short)*(undefined4 *)(param_1 + 0x270) + 2)
  ;
  return uVar1;
}



/* ================================================================
 * Function: FUN_10001eae
 * Address:  10001eae
 * ================================================================ */

uint FUN_10001eae(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_1000c2a3(*(int *)(param_1 + 0x260) + 0x28,(short)*(undefined4 *)(param_1 + 0x270) + 2)
  ;
  return uVar1;
}



/* ================================================================
 * Function: FUN_10001edd
 * Address:  10001edd
 * ================================================================ */

short FUN_10001edd(int param_1,short param_2,uint *param_3,uint *param_4,undefined1 *param_5)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint uVar2;
  uint uVar3;
  undefined2 local_8;
  
  FUN_1000c260(*(int *)(param_1 + 0x264) + (uint)*(ushort *)(param_1 + 0x27c),
               (uint)(ushort)(param_2 << 3),(short)*(undefined4 *)(param_1 + 0x270) + 2);
  FUN_1000c260(*(int *)(param_1 + 0x264) + (uint)*(ushort *)(param_1 + 0x2a0),
               *(ushort *)(param_1 + 0x254) | 0x800,(short)*(undefined4 *)(param_1 + 0x270) + 2);
  bVar1 = FUN_10001a87(param_1,'\x01');
  local_8 = (short)CONCAT31(extraout_var,bVar1);
  if (local_8 != 0) {
    bVar1 = FUN_10001a87(param_1,'\x02');
    local_8 = (short)CONCAT31(extraout_var_00,bVar1);
  }
  if (local_8 != 0) {
    uVar2 = FUN_1000c2a3(*(int *)(param_1 + 0x260) + 0x10,
                         (short)*(undefined4 *)(param_1 + 0x270) + 2);
    uVar3 = FUN_1000c2a3(*(int *)(param_1 + 0x260) + 0x14,
                         (short)*(undefined4 *)(param_1 + 0x270) + 2);
    *param_5 = (char)uVar2;
    *param_3 = uVar2 >> 8;
    *param_3 = *param_3 + uVar3 * 0x1000000;
    *param_4 = uVar3 >> 8;
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_10002023
 * Address:  10002023
 * ================================================================ */

void FUN_10002023(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1000c260(*(int *)(param_1 + 0x264) + (uint)*(ushort *)(param_1 + 0x280),param_2,
               (short)*(undefined4 *)(param_1 + 0x270) + 2);
  FUN_1000c260(*(int *)(param_1 + 0x264) + (uint)*(ushort *)(param_1 + 0x27e),param_3,
               (short)*(undefined4 *)(param_1 + 0x270) + 2);
  *(ushort *)(param_1 + 0x254) = *(ushort *)(param_1 + 0x254) | 0x100;
  FUN_1000c260(*(int *)(param_1 + 0x264) + (uint)*(ushort *)(param_1 + 0x2a0),
               (uint)*(ushort *)(param_1 + 0x254),(short)*(undefined4 *)(param_1 + 0x270) + 2);
  *(ushort *)(param_1 + 0x254) = *(ushort *)(param_1 + 0x254) & 0xfeff;
  return;
}



/* ================================================================
 * Function: FUN_100020ed
 * Address:  100020ed
 * ================================================================ */

void FUN_100020ed(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_1000c2a3(*(int *)(param_1 + 0x260) + 0x3c,(short)*(undefined4 *)(param_1 + 0x270) + 2)
  ;
  FUN_1000c260(*(int *)(param_1 + 0x260) + 0x3c,uVar1 | 0x4000000,
               (short)*(undefined4 *)(param_1 + 0x270) + 2);
  return;
}



/* ================================================================
 * Function: FUN_10002148
 * Address:  10002148
 * ================================================================ */

void FUN_10002148(int param_1,int param_2)

{
  if (param_2 == 3) {
    *(ushort *)(param_1 + 0x254) = *(ushort *)(param_1 + 0x254) | 2;
    FUN_1000c260(*(int *)(param_1 + 0x264) + (uint)*(ushort *)(param_1 + 0x2a0),
                 (uint)*(ushort *)(param_1 + 0x254),(short)*(undefined4 *)(param_1 + 0x270) + 2);
  }
  else {
    *(ushort *)(param_1 + 0x254) = *(ushort *)(param_1 + 0x254) & 0xfffd;
    FUN_1000c260(*(int *)(param_1 + 0x264) + (uint)*(ushort *)(param_1 + 0x2a0),
                 (uint)*(ushort *)(param_1 + 0x254),(short)*(undefined4 *)(param_1 + 0x270) + 2);
  }
  return;
}



/* ================================================================
 * Function: FUN_100021f4
 * Address:  100021f4
 * ================================================================ */

void FUN_100021f4(int param_1,uint param_2,int param_3)

{
  FUN_1000c260(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x276),param_3 << 3,
               (short)*(undefined4 *)(param_1 + 0x270) + 2);
  FUN_1000c260(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x278),param_2 & 0xff,
               (short)*(undefined4 *)(param_1 + 0x270) + 2);
  return;
}



/* ================================================================
 * Function: FUN_10002266
 * Address:  10002266
 * ================================================================ */

uint FUN_10002266(int param_1,int param_2)

{
  uint uVar1;
  
  FUN_1000c260(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x276),param_2 << 3,
               (short)*(undefined4 *)(param_1 + 0x270) + 2);
  uVar1 = FUN_1000c2a3(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x274),
                       (short)*(undefined4 *)(param_1 + 0x270) + 2);
  return uVar1;
}



/* ================================================================
 * Function: FUN_100022d7
 * Address:  100022d7
 * ================================================================ */

uint FUN_100022d7(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_1000c2a3(*(int *)(param_1 + 0x260) + 0x24,(short)*(undefined4 *)(param_1 + 0x270) + 2)
  ;
  return uVar1;
}



/* ================================================================
 * Function: FUN_10002306
 * Address:  10002306
 * ================================================================ */

uint FUN_10002306(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_1000c2a3(*(int *)(param_1 + 0x260) + 0x28,(short)*(undefined4 *)(param_1 + 0x270) + 2)
  ;
  return uVar1;
}



/* ================================================================
 * Function: FUN_10002335
 * Address:  10002335
 * ================================================================ */

bool FUN_10002335(int param_1,uint *param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  uint uVar2;
  
  bVar1 = FUN_10001a87(param_1,'\x01');
  bVar1 = CONCAT31(extraout_var,bVar1) != 0;
  if (bVar1) {
    uVar2 = FUN_1000c2a3(*(int *)(param_1 + 0x260) + 0x10,
                         (short)*(undefined4 *)(param_1 + 0x270) + 2);
    *param_2 = uVar2;
  }
  return bVar1;
}



/* ================================================================
 * Function: FUN_1000238b
 * Address:  1000238b
 * ================================================================ */

void FUN_1000238b(int param_1)

{
  *(undefined2 *)(param_1 + 0x254) = 0;
  FUN_1000c260(*(undefined4 *)(param_1 + 0x264),(uint)*(ushort *)(param_1 + 0x254),
               (short)*(undefined4 *)(param_1 + 0x270) + 2);
  return;
}



/* ================================================================
 * Function: FUN_100023c7
 * Address:  100023c7
 * ================================================================ */

short FUN_100023c7(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  short local_10;
  uint local_c;
  short local_8;
  
  local_10 = 1;
  local_8 = 0;
  while ((local_8 < param_3 && (local_10 != 0))) {
    FUN_1000126e(param_1,CONCAT31((int3)((int)local_8 + 0x200U >> 8),
                                  *(undefined1 *)(param_2 + local_8)),(int)local_8 + 0x200U);
    FUN_100024cb(2);
    uVar1 = FUN_10001396(param_1,(undefined1 *)&local_c,(int)local_8 + 0x200);
    local_10 = (short)uVar1;
    if ((local_c & 0xff) != (uint)*(byte *)(param_2 + local_8)) {
      local_10 = 0;
    }
    local_8 = local_8 + 1;
  }
  return local_10;
}



/* ================================================================
 * Function: FUN_1000246d
 * Address:  1000246d
 * ================================================================ */

short FUN_1000246d(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined2 local_c;
  undefined2 local_8;
  
  local_8 = 0;
  local_c = 1;
  while ((local_8 < param_3 && (local_c != 0))) {
    uVar1 = FUN_10001396(param_1,(undefined1 *)(param_2 + local_8),(int)local_8 + 0x200);
    local_8 = local_8 + 1;
    local_c = (short)uVar1;
  }
  return local_c;
}



/* ================================================================
 * Function: FUN_100024cb
 * Address:  100024cb
 * ================================================================ */

void FUN_100024cb(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_10015173();
  do {
    uVar2 = FUN_10015173();
  } while ((int)uVar2 < param_1 + (int)uVar1);
  return;
}



/* ================================================================
 * Function: FUN_100024f0
 * Address:  100024f0
 * ================================================================ */

HMODULE FUN_100024f0(void)

{
  HMODULE hModule;
  
  hModule = LoadLibraryA(s_RSARC_dll_1001f030);
  DAT_10022f94 = (FARPROC)0x0;
  DAT_10022f88 = (FARPROC)0x0;
  DAT_10022f8c = (FARPROC)0x0;
  DAT_10022f90 = (FARPROC)0x0;
  if (hModule != (HMODULE)0x0) {
    DAT_10022f94 = GetProcAddress(hModule,s_RSARC_Search_For_Inst_1001f03c);
    DAT_10022f88 = GetProcAddress(hModule,s_RSARC_Open_Mono_1001f054);
    DAT_10022f8c = GetProcAddress(hModule,s_RSARC_Close_Enum_1001f064);
    DAT_10022f90 = GetProcAddress(hModule,s_RSARC_Send_CMD_To_Inst_1001f078);
  }
  return hModule;
}



/* ================================================================
 * Function: FUN_10002587
 * Address:  10002587
 * ================================================================ */

undefined4 * FUN_10002587(void)

{
  short sVar1;
  void *pvVar2;
  undefined4 *local_8;
  
  local_8 = FUN_1000102f(0x1508);
  FUN_100099a3(local_8);
  *local_8 = FUN_100026fc;
  local_8[1] = FUN_10002708;
  local_8[2] = FUN_1000273a;
  local_8[4] = FUN_1000274e;
  local_8[5] = FUN_100027b0;
  local_8[6] = FUN_10002810;
  local_8[0xb] = FUN_10002810;
  local_8[0xc] = FUN_10002824;
  local_8[0x11] = FUN_1000284d;
  local_8[0x12] = FUN_1000289b;
  local_8[0x31] = FUN_10002ab2;
  local_8[0x2f] = FUN_10002b0b;
  local_8[0x45] = FUN_10002b2d;
  local_8[0x46] = FUN_10002b8b;
  local_8[0x76] = 0;
  if (DAT_10022814 == 0) {
    DAT_10022810 = FUN_100024f0();
  }
  if (DAT_10022810 != (HMODULE)0x0) {
    DAT_10022814 = DAT_10022814 + 1;
    sVar1 = (*DAT_10022f94)(local_8 + 0x76);
    if (sVar1 == 0) {
      local_8[0x76] = 0;
    }
  }
  if (local_8[0x76] == 0) {
    (*(code *)local_8[4])(local_8);
    local_8 = (undefined4 *)0x0;
  }
  else {
    pvVar2 = _malloc(0x8000);
    local_8[0x84] = pvVar2;
    local_8[0x85] = local_8[0x84];
    local_8[0x86] = 0;
    local_8[0x87] = 0;
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_100026fc
 * Address:  100026fc
 * ================================================================ */

undefined * FUN_100026fc(void)

{
  return &DAT_1001f090;
}



/* ================================================================
 * Function: FUN_10002708
 * Address:  10002708
 * ================================================================ */

bool __thiscall FUN_10002708(void *this,int param_1)

{
  short sVar1;
  
  sVar1 = (*DAT_10022f88)(*(undefined4 *)(param_1 + 0x1b8),param_1 + 0x220,this);
  return sVar1 != 0;
}



/* ================================================================
 * Function: FUN_1000273a
 * Address:  1000273a
 * ================================================================ */

undefined4 FUN_1000273a(void)

{
  return 0;
}



/* ================================================================
 * Function: FUN_1000274e
 * Address:  1000274e
 * ================================================================ */

undefined4 FUN_1000274e(undefined *param_1)

{
  DAT_10022814 = DAT_10022814 + -1;
  if (((DAT_10022814 == 0) && (DAT_10022810 != 0)) && (*(int *)(param_1 + 0x1d8) != 0)) {
    (*DAT_10022f8c)(*(undefined4 *)(param_1 + 0x220));
    DAT_10022810 = 0;
  }
  FUN_1000104b(param_1);
  return 0;
}



/* ================================================================
 * Function: FUN_100027b0
 * Address:  100027b0
 * ================================================================ */

int FUN_100027b0(int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if (*(int *)(param_1 + 0x21c) != *(int *)(param_1 + 0x218)) {
    cVar1 = **(char **)(param_1 + 0x210);
    *(int *)(param_1 + 0x218) = *(int *)(param_1 + 0x218) + 1;
    *(int *)(param_1 + 0x210) = *(int *)(param_1 + 0x210) + 1;
  }
  return (int)cVar1;
}



/* ================================================================
 * Function: FUN_10002810
 * Address:  10002810
 * ================================================================ */

undefined4 FUN_10002810(void)

{
  return 0;
}



/* ================================================================
 * Function: FUN_10002824
 * Address:  10002824
 * ================================================================ */

undefined4 FUN_10002824(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1ac) = param_2;
  return 1;
}



/* ================================================================
 * Function: FUN_1000284d
 * Address:  1000284d
 * ================================================================ */

size_t FUN_1000284d(int param_1,undefined4 param_2,char *param_3,size_t param_4)

{
  _strncpy(param_3,*(char **)(param_1 + 0x210),param_4);
  *(size_t *)(param_1 + 0x210) = *(int *)(param_1 + 0x210) + param_4;
  *(size_t *)(param_1 + 0x218) = *(int *)(param_1 + 0x218) + param_4;
  return param_4;
}



/* ================================================================
 * Function: FUN_1000289b
 * Address:  1000289b
 * ================================================================ */

int FUN_1000289b(int param_1,undefined4 param_2,byte *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  uint local_3c [2];
  LPCWSTR local_34;
  uint *local_2c;
  short local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  LPWSTR local_c;
  undefined4 local_8;
  
  local_8 = 0;
  local_14 = 0;
  local_10 = 0;
  local_2c = (uint *)s_ok_ok_ok_ok_ok_ok_1001f094;
  local_c = _malloc(param_4 * 2 + 2);
  *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_1 + 0x214);
  local_24 = CONCAT22(local_24._2_2_,8);
  FUN_1001571f(local_c,param_3,param_4);
  local_c[param_4] = L'\0';
  local_1c = Ordinal_2(local_c);
  Ordinal_8(local_3c);
  local_28 = (*DAT_10022f90)(*(undefined4 *)(param_1 + 0x220),local_24,local_20,local_1c,local_18,
                             local_3c,150000);
  if ((local_3c[0] & 0xffff) == 8) {
    uVar1 = Ordinal_7(local_34);
    local_10 = FUN_100154e4(*(LPSTR *)(param_1 + 0x210),local_34,0x8000);
    iVar2 = _strcmp((char *)param_3,s_HELLO_1001f0b8);
    if (iVar2 == 0) {
      FUN_10015370((uint *)(*(int *)(param_1 + 0x210) + uVar1),local_2c);
      *(uint *)(param_1 + 0x21c) = uVar1 + 0x22;
      *(undefined1 *)(*(int *)(param_1 + 0x210) + *(int *)(param_1 + 0x21c)) = 0;
    }
    else {
      while (local_10 != uVar1) {
        sVar3 = _strlen(*(char **)(param_1 + 0x210));
        local_34[sVar3] = L' ';
        local_10 = FUN_100154e4(*(LPSTR *)(param_1 + 0x210),local_34,0x8000);
      }
      FUN_10015370((uint *)(*(int *)(param_1 + 0x210) + uVar1),(uint *)&DAT_1001f0c0);
      *(uint *)(param_1 + 0x21c) = uVar1 + 4;
      *(undefined1 *)(*(int *)(param_1 + 0x210) + *(int *)(param_1 + 0x21c)) = 0;
    }
    *(undefined4 *)(param_1 + 0x218) = 0;
  }
  else {
    local_28 = 0;
  }
  FUN_1001508a((undefined *)local_c);
  Ordinal_9(&local_24);
  Ordinal_9(local_3c);
  return (int)local_28;
}



/* ================================================================
 * Function: FUN_10002ab2
 * Address:  10002ab2
 * ================================================================ */

undefined4 FUN_10002ab2(int param_1)

{
  *(undefined4 *)(param_1 + 0x21c) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_1 + 0x214);
  _memset(*(void **)(param_1 + 0x210),0,0x8000);
  return 1;
}



/* ================================================================
 * Function: FUN_10002b0b
 * Address:  10002b0b
 * ================================================================ */

int FUN_10002b0b(int param_1)

{
  return *(int *)(param_1 + 0x21c) - *(int *)(param_1 + 0x218);
}



/* ================================================================
 * Function: FUN_10002b2d
 * Address:  10002b2d
 * ================================================================ */

undefined4 FUN_10002b2d(int param_1,int param_2)

{
  undefined4 local_8;
  
  local_8 = 1;
  if (param_2 == 0x1e) {
    if (*(int *)(param_1 + 0x1d8) == 1) {
      (**(code **)(param_1 + 0x30))(param_1,0);
    }
    else {
      (**(code **)(param_1 + 0x30))(param_1,*(int *)(param_1 + 0x1b8) + -1);
    }
  }
  else {
    local_8 = 0;
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_10002b8b
 * Address:  10002b8b
 * ================================================================ */

undefined4 FUN_10002b8b(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_8;
  
  local_8 = 1;
  if (param_2 == 0xc) {
    uVar1 = (**(code **)(param_1 + 0xbc))(param_1);
    *param_3 = uVar1;
  }
  else if (param_2 == 0x54) {
    *param_3 = *(undefined4 *)(param_1 + 0x20c);
  }
  else {
    local_8 = 0;
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_10002be0
 * Address:  10002be0
 * ================================================================ */

HANDLE FUN_10002be0(LPCSTR param_1,DWORD param_2,DWORD param_3)

{
  HANDLE hFile;
  
  hFile = CreateFileA(param_1,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    SetCommMask(hFile,1);
    SetupComm(hFile,param_2,param_3);
    PurgeComm(hFile,0xf);
  }
  return hFile;
}



/* ================================================================
 * Function: FUN_10002c43
 * Address:  10002c43
 * ================================================================ */

BOOL FUN_10002c43(HANDLE param_1)

{
  undefined4 local_8;
  
  local_8 = 0;
  if (param_1 != (HANDLE)0xffffffff) {
    SetCommMask(param_1,0);
    EscapeCommFunction(param_1,6);
    PurgeComm(param_1,0xf);
    local_8 = CloseHandle(param_1);
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_10002c8e
 * Address:  10002c8e
 * ================================================================ */

BOOL FUN_10002c8e(HANDLE param_1,int param_2)

{
  undefined4 local_8;
  
  local_8 = 0;
  if (param_1 != (HANDLE)0xffffffff) {
    if (param_2 == 0) {
      local_8 = PurgeComm(param_1,4);
    }
    else {
      local_8 = PurgeComm(param_1,8);
    }
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_10002cce
 * Address:  10002cce
 * ================================================================ */

DWORD FUN_10002cce(HANDLE param_1,LPVOID param_2,uint param_3)

{
  BOOL BVar1;
  DWORD DVar2;
  uint local_38;
  _COMSTAT local_2c;
  DWORD local_20;
  _OVERLAPPED local_1c;
  DWORD local_8;
  
  ClearCommError(param_1,&local_20,&local_2c);
  if (param_3 < local_2c.cbInQue) {
    local_38 = param_3;
  }
  else {
    local_38 = local_2c.cbInQue;
  }
  local_8 = local_38;
  if ((local_38 != 0) &&
     (BVar1 = ReadFile(param_1,param_2,local_38,&local_8,(LPOVERLAPPED)0x0), BVar1 == 0)) {
    DVar2 = GetLastError();
    if (DVar2 == 0x3e5) {
      do {
        BVar1 = GetOverlappedResult(param_1,&local_1c,&local_8,1);
        if (BVar1 != 0) {
          return local_8;
        }
        DVar2 = GetLastError();
      } while (DVar2 == 0x3e4);
      ClearCommError(param_1,&local_20,&local_2c);
    }
    else {
      local_8 = 0;
      ClearCommError(param_1,&local_20,&local_2c);
    }
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_10002d9c
 * Address:  10002d9c
 * ================================================================ */

DWORD FUN_10002d9c(HANDLE param_1,LPCVOID param_2,DWORD param_3)

{
  DWORD DVar1;
  BOOL BVar2;
  DWORD local_34;
  DWORD local_30;
  _COMSTAT local_2c;
  DWORD local_20;
  BOOL local_1c;
  _OVERLAPPED local_18;
  
  local_1c = WriteFile(param_1,param_2,param_3,&local_34,(LPOVERLAPPED)0x0);
  if (local_1c == 0) {
    DVar1 = GetLastError();
    if (DVar1 == 0x3e5) {
      while (BVar2 = GetOverlappedResult(param_1,&local_18,&local_34,1), BVar2 == 0) {
        local_30 = GetLastError();
        if (local_30 != 0x3e4) {
          ClearCommError(param_1,&local_20,&local_2c);
          return local_34;
        }
        local_30 = 0x3e4;
      }
    }
    else {
      ClearCommError(param_1,&local_20,&local_2c);
      local_34 = 0;
    }
  }
  return local_34;
}



/* ================================================================
 * Function: FUN_10002e40
 * Address:  10002e40
 * ================================================================ */

undefined4 * FUN_10002e40(void)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_1000102f(0x1508);
  FUN_100099a3(puVar1);
  *puVar1 = FUN_10002ee4;
  puVar1[1] = FUN_10002ef0;
  puVar1[2] = FUN_10002efc;
  puVar1[4] = FUN_10002f08;
  puVar1[5] = FUN_10002f1d;
  puVar1[6] = FUN_10002f29;
  puVar1[0xb] = FUN_10002f29;
  puVar1[0xc] = FUN_10002f3d;
  puVar1[0x4a] = FUN_10002f55;
  puVar1[0x4c] = FUN_10002f8a;
  puVar1[0x76] = 10;
  puVar1[0x79] = 0xffffffff;
  return puVar1;
}



/* ================================================================
 * Function: FUN_10002ee4
 * Address:  10002ee4
 * ================================================================ */

char * FUN_10002ee4(void)

{
  return s_DEMO_PORT_1001f0c8;
}



/* ================================================================
 * Function: FUN_10002ef0
 * Address:  10002ef0
 * ================================================================ */

undefined4 FUN_10002ef0(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_10002efc
 * Address:  10002efc
 * ================================================================ */

undefined4 FUN_10002efc(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_10002f08
 * Address:  10002f08
 * ================================================================ */

undefined4 FUN_10002f08(undefined *param_1)

{
  FUN_1000104b(param_1);
  return 1;
}



/* ================================================================
 * Function: FUN_10002f1d
 * Address:  10002f1d
 * ================================================================ */

undefined4 FUN_10002f1d(void)

{
  return 0x55;
}



/* ================================================================
 * Function: FUN_10002f29
 * Address:  10002f29
 * ================================================================ */

undefined4 FUN_10002f29(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_10002f3d
 * Address:  10002f3d
 * ================================================================ */

undefined4 FUN_10002f3d(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1ac) = param_2;
  return 1;
}



/* ================================================================
 * Function: FUN_10002f55
 * Address:  10002f55
 * ================================================================ */

undefined4 FUN_10002f55(void)

{
  return 0;
}



/* ================================================================
 * Function: FUN_10002f8a
 * Address:  10002f8a
 * ================================================================ */

undefined4 FUN_10002f8a(void)

{
  return 0;
}



/* ================================================================
 * Function: FUN_10002fa0
 * Address:  10002fa0
 * ================================================================ */

undefined4 * FUN_10002fa0(void)

{
  undefined4 uVar1;
  _OSVERSIONINFOA local_9c;
  undefined4 *local_8;
  
  local_9c.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_9c);
  local_8 = FUN_1000102f(0x1508);
  FUN_100099a3(local_8);
  *local_8 = FUN_100030f0;
  local_8[1] = FUN_100030fc;
  local_8[2] = FUN_10003225;
  local_8[4] = FUN_10003231;
  local_8[5] = FUN_1000328d;
  local_8[6] = FUN_10003434;
  local_8[7] = FUN_100039cf;
  local_8[8] = FUN_10003a2f;
  local_8[0xb] = FUN_10003a9b;
  local_8[0xc] = FUN_10003775;
  local_8[3] = FUN_10003651;
  local_8[0x76] = 1;
  local_8[0x5b] = FUN_10014bf1;
  local_8[0x3d] = FUN_100036a5;
  local_8[0x3e] = FUN_100036c8;
  local_8[0x45] = FUN_100036eb;
  local_8[0x46] = FUN_10003724;
  local_8[0x4a] = FUN_100037ef;
  local_8[0x4c] = FUN_1000393b;
  local_8[9] = FUN_10003d01;
  local_8[0x83] = 3;
  DAT_10022f84 = local_9c.dwPlatformId;
  uVar1 = (*(code *)local_8[0x5b])(local_8,s_____PIVXDECP_VXD_1001f0d4);
  local_8[0x79] = uVar1;
  return local_8;
}



/* ================================================================
 * Function: FUN_100030f0
 * Address:  100030f0
 * ================================================================ */

char * FUN_100030f0(void)

{
  return s_ECP_PORT_1001f0e8;
}



/* ================================================================
 * Function: FUN_100030fc
 * Address:  100030fc
 * ================================================================ */

undefined4 FUN_100030fc(int param_1)

{
  uint uVar1;
  undefined4 local_10;
  
  local_10 = 1;
  FUN_1000c2a3(*(int *)(param_1 + 0x1ac) + 0x402,0);
  FUN_1000c260(*(int *)(param_1 + 0x1ac) + 0x402,0x14,0);
  FUN_1000c260(*(int *)(param_1 + 0x1ac) + 0x402,0x34,0);
  FUN_1000c260(*(int *)(param_1 + 0x1ac) + 2,4,0);
  FUN_1000c260(*(int *)(param_1 + 0x1ac) + 0x402,0x74,0);
  FUN_1000c260(*(int *)(param_1 + 0x1ac) + 2,4,0);
  Sleep(100);
  FUN_1000c260(*(int *)(param_1 + 0x1ac) + 2,0x20,0);
  uVar1 = FUN_1000c2a3(*(int *)(param_1 + 0x1ac) + 0x402,0);
  if (((uVar1 & 2) != 0) && ((uVar1 & 1) == 1)) {
    local_10 = 0;
  }
  return local_10;
}



/* ================================================================
 * Function: FUN_10003225
 * Address:  10003225
 * ================================================================ */

undefined4 FUN_10003225(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_10003231
 * Address:  10003231
 * ================================================================ */

undefined4 FUN_10003231(undefined *param_1)

{
  FUN_1000c260(*(int *)(param_1 + 0x1ac) + 0x402,0x14,0);
  FUN_1000c260(*(int *)(param_1 + 0x1ac) + 0x402,0x34,0);
  FUN_1000c260(*(int *)(param_1 + 0x1ac) + 2,0xc,0);
  FUN_1000104b(param_1);
  return 1;
}



/* ================================================================
 * Function: FUN_1000328d
 * Address:  1000328d
 * ================================================================ */

int FUN_1000328d(int param_1,byte param_2)

{
  uint uVar1;
  DWORD DVar2;
  DWORD DVar3;
  uint local_1c;
  uint local_18;
  int local_c;
  int local_8;
  
  local_c = 0;
  local_18 = 0;
  local_1c = 0;
  uVar1 = FUN_10003ca4(param_1);
  if (uVar1 == 0) {
    FUN_10003bc3(param_1);
  }
  if (*(int *)(param_1 + 0x1ac) != 0) {
    FUN_1000c260(*(int *)(param_1 + 0x1ac) + 2,4,0);
    FUN_100158e0((short)*(undefined4 *)(param_1 + 0x1ac) + 0x400,param_2 | 0x80);
    FUN_100158e0((short)*(undefined4 *)(param_1 + 0x1ac) + 0x400,0);
    local_8 = 0;
    DVar2 = GetTickCount();
    while ((DVar3 = GetTickCount(), DVar3 - DVar2 < 1000 && (local_8 != 2))) {
      uVar1 = FUN_1000c2a3(*(int *)(param_1 + 0x1ac) + 0x402,0);
      if (((uVar1 & 1) == 1) && (local_8 == 0)) {
        FUN_1000c260(*(int *)(param_1 + 0x1ac) + 2,0x20,0);
        local_8 = 1;
      }
      if (((uVar1 & 1) == 0) && (local_8 == 1)) {
        local_18 = FUN_1000c2a3(*(int *)(param_1 + 0x1ac) + 0x400,0);
        local_18 = local_18 & 0xffff;
        local_1c = FUN_1000c2a3(*(int *)(param_1 + 0x1ac) + 0x400,0);
        local_1c = local_1c & 0xffff;
        local_8 = 2;
      }
    }
    if (local_8 == 2) {
      local_c = (local_1c & 0xff) + (local_18 & 0xff) * 0x100;
    }
    else {
      FUN_100030fc(param_1);
    }
  }
  return local_c;
}



/* ================================================================
 * Function: FUN_10003434
 * Address:  10003434
 * ================================================================ */

uint FUN_10003434(int param_1,uint param_2,undefined4 param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  DWORD DVar2;
  DWORD DVar3;
  uint uVar4;
  uint local_20;
  int local_8;
  
  local_8 = 0;
  bVar1 = FUN_10003bc3(param_1);
  local_20 = CONCAT31(extraout_var,bVar1);
  if (local_20 != 0) {
    if (0x7f < param_2) {
      param_2 = param_2 - 0x80;
    }
    if (*(int *)(param_1 + 0x1ac) != 0) {
      FUN_1000c260(*(int *)(param_1 + 0x1ac) + 2,4,0);
      FUN_100158e0((short)*(undefined4 *)(param_1 + 0x1ac) + 0x400,(byte)param_2);
      FUN_100158e0((short)*(undefined4 *)(param_1 + 0x1ac) + 0x400,(byte)((uint)param_3 >> 8));
      local_20 = FUN_10003ca4(param_1);
      FUN_100158e0((short)*(undefined4 *)(param_1 + 0x1ac) + 0x400,(byte)param_3);
      FUN_100158e0((short)*(undefined4 *)(param_1 + 0x1ac) + 0x400,0);
    }
  }
  if (local_20 != 0) {
    DVar2 = GetTickCount();
    while ((DVar3 = GetTickCount(), DVar3 - DVar2 < 1000 && (local_8 != 2))) {
      uVar4 = FUN_1000c2a3(*(int *)(param_1 + 0x1ac) + 0x402,0);
      if (((uVar4 & 1) == 1) && (local_8 == 0)) {
        FUN_1000c260(*(int *)(param_1 + 0x1ac) + 2,0x20,0);
        local_8 = 1;
      }
      if (((uVar4 & 1) == 0) && (local_8 == 1)) {
        FUN_1000c2a3(*(int *)(param_1 + 0x1ac) + 0x400,0);
        FUN_1000c2a3(*(int *)(param_1 + 0x1ac) + 0x400,0);
        local_8 = 2;
      }
    }
    if (local_8 != 2) {
      FUN_100030fc(param_1);
      if (local_8 == 0) {
        MessageBoxA((HWND)0x0,s_Write_Failed_Timeout_1001f108,s_ECP_Error_Report_1001f0f4,0);
      }
      else {
        MessageBoxA((HWND)0x0,s_Write_Failed_Stage_1_1001f134,s_ECP_Error_Report_1001f120,0);
      }
    }
    local_20 = FUN_10003ca4(param_1);
  }
  return local_20;
}



/* ================================================================
 * Function: FUN_10003651
 * Address:  10003651
 * ================================================================ */

undefined4 FUN_10003651(int param_1)

{
  FUN_1000c2a3(*(int *)(param_1 + 0x1ac) + 0x402,0);
  FUN_1000c260(*(int *)(param_1 + 0x1ac) + 0x402,0x7d,0);
  FUN_1000c260(*(int *)(param_1 + 0x1ac) + 0x402,0x78,0);
  return 1;
}



/* ================================================================
 * Function: FUN_100036a5
 * Address:  100036a5
 * ================================================================ */

undefined4 FUN_100036a5(void)

{
  return 0;
}



/* ================================================================
 * Function: FUN_100036c8
 * Address:  100036c8
 * ================================================================ */

undefined4 FUN_100036c8(void)

{
  return 0;
}



/* ================================================================
 * Function: FUN_100036eb
 * Address:  100036eb
 * ================================================================ */

bool FUN_100036eb(int param_1,int param_2,undefined4 param_3)

{
  if (param_2 == 0x54) {
    *(undefined4 *)(param_1 + 0x20c) = param_3;
  }
  return param_2 == 0x54;
}



/* ================================================================
 * Function: FUN_10003724
 * Address:  10003724
 * ================================================================ */

undefined4 FUN_10003724(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 local_8;
  
  local_8 = 1;
  if (param_2 == 0x54) {
    *param_3 = *(int *)(param_1 + 0x20c);
  }
  else if (param_2 == 0x55) {
    iVar1 = FUN_10003d27(param_1);
    *param_3 = iVar1;
  }
  else {
    local_8 = 0;
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_10003775
 * Address:  10003775
 * ================================================================ */

BOOL FUN_10003775(int param_1,undefined4 param_2)

{
  DWORD local_28;
  BOOL local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10 [12];
  
  local_24 = 0;
  *(undefined4 *)(param_1 + 0x1ac) = param_2;
  local_1c = param_2;
  local_20 = *(undefined4 *)(param_1 + 0x1fc);
  local_14 = *(undefined4 *)(param_1 + 0x20c);
  local_18 = local_20;
  local_24 = DeviceIoControl(*(HANDLE *)(param_1 + 0x1e4),0x9006,&local_1c,0xc,local_10,0xc,
                             &local_28,(LPOVERLAPPED)0x0);
  (**(code **)(param_1 + 4))(param_1);
  return local_24;
}



/* ================================================================
 * Function: FUN_100037ef
 * Address:  100037ef
 * ================================================================ */

undefined4 FUN_100037ef(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 local_8;
  
  if (param_2 == 0x1e) {
    *param_3 = 3;
    param_3[1] = 9;
    param_3[2] = 0;
    param_3[3] = 0x4083c000;
    *(double *)(param_3 + 4) = (double)*(uint *)(param_1 + 0x1ac);
    param_3[6] = 0;
    param_3[7] = 0x4083c000;
    param_3[10] = 0;
    param_3[0xb] = 0;
    local_8 = 1;
    *(double *)(param_3 + 8) = (double)*(uint *)(param_1 + 0x1ac);
    param_3[0xc] = 2;
  }
  else if (param_2 == 0x50) {
    *param_3 = 0x10;
    param_3[1] = 9;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    param_3[6] = 0;
    param_3[7] = 0x40080000;
    param_3[10] = 0;
    param_3[0xb] = 0;
    *(double *)(param_3 + 8) = (double)(int)*(short *)(param_1 + 0x1e0);
    param_3[0xc] = 2;
    local_8 = 1;
  }
  else {
    local_8 = 0;
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_1000393b
 * Address:  1000393b
 * ================================================================ */

uint FUN_1000393b(undefined4 param_1,int param_2,uint param_3,uint *param_4)

{
  uint local_8;
  
  local_8 = 1;
  if (param_2 == 0x1e) {
    if (param_3 == 0) {
      *param_4 = 0x278;
    }
    else if (param_3 == 1) {
      *param_4 = 0x378;
    }
    else if (param_3 == 2) {
      *param_4 = 0x3bc;
    }
    else {
      local_8 = 0;
    }
  }
  else if (param_2 == 0x50) {
    if (param_3 < 0x10) {
      *param_4 = param_3;
    }
    local_8 = (uint)(param_3 < 0x10);
  }
  else {
    local_8 = 0;
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_100039cf
 * Address:  100039cf
 * ================================================================ */

uint FUN_100039cf(int param_1)

{
  undefined4 local_8;
  
  local_8 = 0;
  if (*(int *)(param_1 + 0x1ac) != 0) {
    FUN_1000c260(*(int *)(param_1 + 0x1ac) + 2,0x20,0);
    local_8 = FUN_1000c2a3(*(int *)(param_1 + 0x1ac) + 0x400,0);
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_10003a2f
 * Address:  10003a2f
 * ================================================================ */

undefined4 FUN_10003a2f(int param_1,undefined4 param_2,uint param_3)

{
  if (*(int *)(param_1 + 0x1ac) != 0) {
    FUN_1000c260(*(int *)(param_1 + 0x1ac) + 2,4,0);
    FUN_1000c260(*(int *)(param_1 + 0x1ac) + 0x400,param_3 & 0xff,0);
    FUN_1000c260(*(int *)(param_1 + 0x1ac) + 2,0x20,0);
  }
  return 1;
}



/* ================================================================
 * Function: FUN_10003a9b
 * Address:  10003a9b
 * ================================================================ */

uint FUN_10003a9b(int param_1,uint param_2,undefined4 param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 local_10;
  
  bVar1 = FUN_10003bc3(param_1);
  local_10 = CONCAT31(extraout_var,bVar1);
  if (local_10 != 0) {
    if (0x7f < param_2) {
      param_2 = param_2 - 0x80;
    }
    if (*(int *)(param_1 + 0x1ac) != 0) {
      FUN_1000c260(*(int *)(param_1 + 0x1ac) + 2,4,0);
      FUN_100158e0((short)*(undefined4 *)(param_1 + 0x1ac) + 0x400,(byte)param_2);
      FUN_100158e0((short)*(undefined4 *)(param_1 + 0x1ac) + 0x400,(byte)((uint)param_3 >> 8));
      FUN_10003ca4(param_1);
      FUN_100158e0((short)*(undefined4 *)(param_1 + 0x1ac) + 0x400,(byte)param_3);
      FUN_100158e0((short)*(undefined4 *)(param_1 + 0x1ac) + 0x400,0);
      local_10 = FUN_10003ca4(param_1);
      FUN_1000c260(*(int *)(param_1 + 0x1ac) + 2,0x20,0);
    }
  }
  FUN_10003651(param_1);
  return local_10;
}



/* ================================================================
 * Function: FUN_10003bc3
 * Address:  10003bc3
 * ================================================================ */

bool FUN_10003bc3(int param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  uint local_10;
  
  local_10 = FUN_1000c2a3(*(int *)(param_1 + 0x1ac) + 0x402,0);
  DVar1 = GetTickCount();
  while( true ) {
    local_10 = local_10 & 1;
    DVar2 = GetTickCount();
    if ((999 < DVar2 - DVar1) || (local_10 != 0)) break;
    FUN_1000c2a3(*(int *)(param_1 + 0x1ac) + 0x400,0);
    local_10 = FUN_1000c2a3(*(int *)(param_1 + 0x1ac) + 0x402,0);
  }
  if (local_10 == 0) {
    FUN_1000c2a3(*(int *)(param_1 + 0x1ac) + 2,0);
    MessageBoxA((HWND)0x0,s_Failed_To_Empty_Fifos_1001f158,s_ECP_Error_1001f14c,0);
  }
  return local_10 != 0;
}



/* ================================================================
 * Function: FUN_10003ca4
 * Address:  10003ca4
 * ================================================================ */

uint FUN_10003ca4(int param_1)

{
  DWORD DVar1;
  uint uVar2;
  DWORD DVar3;
  
  DVar1 = GetTickCount();
  do {
    uVar2 = FUN_1000c2a3(*(int *)(param_1 + 0x1ac) + 0x402,0);
    uVar2 = uVar2 & 1;
    DVar3 = GetTickCount();
    if (999 < DVar3 - DVar1) {
      return uVar2;
    }
  } while (uVar2 == 0);
  return uVar2;
}



/* ================================================================
 * Function: FUN_10003d01
 * Address:  10003d01
 * ================================================================ */

void FUN_10003d01(int param_1)

{
  FUN_1000c260(*(int *)(param_1 + 0x1ac) + 2,4,0);
  FUN_100030fc(param_1);
  return;
}



/* ================================================================
 * Function: FUN_10003d27
 * Address:  10003d27
 * ================================================================ */

int FUN_10003d27(int param_1)

{
  int local_2b8;
  undefined1 local_2b4 [312];
  undefined4 local_17c;
  DWORD local_178;
  undefined1 local_174 [24];
  int local_15c;
  int local_158;
  int local_150;
  undefined1 local_144 [4];
  int local_140;
  int local_134;
  int local_130;
  int local_8;
  
  local_8 = 0;
  if (DAT_10022f84 == 1) {
    local_17c = 0;
    local_2b8 = DeviceIoControl(*(HANDLE *)(param_1 + 0x1e4),0x9005,local_2b4,0x13c,local_144,0x13c,
                                &local_178,(LPOVERLAPPED)0x0);
  }
  else {
    local_2b8 = DeviceIoControl(*(HANDLE *)(param_1 + 0x1e4),0xc350644c,local_174,0x13c,&local_15c,
                                0x13c,&local_178,(LPOVERLAPPED)0x0);
    local_134 = local_158;
    local_130 = local_15c;
    local_140 = local_150;
  }
  if ((((local_134 != 0) && (local_130 != 0)) && (local_130 != -1)) && (local_2b8 != 0)) {
    local_8 = local_140 << 0xc;
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_10003e30
 * Address:  10003e30
 * ================================================================ */

bool FUN_10003e30(int param_1)

{
  return param_1 == 0;
}



/* ================================================================
 * Function: FUN_10003e51
 * Address:  10003e51
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HMODULE FUN_10003e51(void)

{
  HMODULE hModule;
  
  hModule = LoadLibraryA(s_FTD2XX_DLl_1001f170);
  if (hModule != (HMODULE)0x0) {
    DAT_10022f74 = GetProcAddress(hModule,s_FT_Open_1001f17c);
    _DAT_10022f50 = GetProcAddress(hModule,s_FT_OpenEx_1001f184);
    DAT_10022f34 = GetProcAddress(hModule,s_FT_ListDevices_1001f190);
    DAT_10022f80 = GetProcAddress(hModule,s_FT_Close_1001f1a0);
    DAT_10022f58 = GetProcAddress(hModule,s_FT_Read_1001f1ac);
    DAT_10022f2c = GetProcAddress(hModule,s_FT_Write_1001f1b4);
    _DAT_10022f4c = GetProcAddress(hModule,s_FT_IoCtl_1001f1c0);
    _DAT_10022f48 = GetProcAddress(hModule,s_FT_SetBaudRate_1001f1cc);
    _DAT_10022f44 = GetProcAddress(hModule,s_FT_SetDivisor_1001f1dc);
    _DAT_10022f7c = GetProcAddress(hModule,s_FT_SetDataCharacteristics_1001f1ec);
    _DAT_10022f24 = GetProcAddress(hModule,s_FT_SetFlowControl_1001f208);
    DAT_10022f54 = GetProcAddress(hModule,s_FT_ResetDevice_1001f21c);
    _DAT_10022f38 = GetProcAddress(hModule,s_FT_SetDtr_1001f22c);
    _DAT_10022f68 = GetProcAddress(hModule,s_FT_ClrDtr_1001f238);
    _DAT_10022f6c = GetProcAddress(hModule,s_FT_SetRts_1001f244);
    _DAT_10022f5c = GetProcAddress(hModule,s_FT_ClrRts_1001f250);
    _DAT_10022f64 = GetProcAddress(hModule,s_FT_GetModemStatus_1001f25c);
    _DAT_10022f3c = GetProcAddress(hModule,s_FT_SetChars_1001f270);
    DAT_10022f40 = GetProcAddress(hModule,s_FT_Purge_1001f27c);
    DAT_10022f30 = GetProcAddress(hModule,s_FT_SetTimeouts_1001f288);
    DAT_10022f60 = GetProcAddress(hModule,s_FT_GetQueueStatus_1001f298);
    _DAT_10022f28 = GetProcAddress(hModule,s_FT_SetEventNotification_1001f2ac);
    _DAT_10022f70 = GetProcAddress(hModule,s_FT_GetStatus_1001f2c4);
    _DAT_10022f20 = GetProcAddress(hModule,s_FT_SetBreakOn_1001f2d4);
    _DAT_10022f78 = GetProcAddress(hModule,s_FT_SetBreakOff_1001f2e4);
  }
  return hModule;
}



/* ================================================================
 * Function: FUN_10004068
 * Address:  10004068
 * ================================================================ */

undefined4 * FUN_10004068(void)

{
  undefined4 *local_8;
  
  local_8 = FUN_1000102f(0x1508);
  FUN_100099a3(local_8);
  *local_8 = FUN_10004195;
  local_8[1] = FUN_100041a1;
  local_8[2] = FUN_100041ad;
  local_8[4] = FUN_100041e1;
  local_8[5] = FUN_1000425f;
  local_8[6] = FUN_100042a3;
  local_8[0xb] = FUN_100042a3;
  local_8[0xc] = FUN_100042e0;
  local_8[0x11] = FUN_1000436a;
  local_8[0x12] = FUN_100043f0;
  local_8[0x31] = FUN_1000442e;
  local_8[0x2f] = FUN_100044a3;
  local_8[0x45] = FUN_100044e3;
  local_8[0x46] = FUN_10004541;
  local_8[0x76] = 0;
  if (DAT_10022820 == 0) {
    DAT_1002281c = FUN_10003e51();
  }
  if ((DAT_1002281c != (HMODULE)0x0) && (DAT_10022f34 != (code *)0x0)) {
    DAT_10022820 = DAT_10022820 + 1;
    (*DAT_10022f34)(local_8 + 0x76,0,0x80000000);
  }
  if (local_8[0x76] == 0) {
    (*(code *)local_8[4])(local_8);
    local_8 = (undefined4 *)0x0;
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_10004195
 * Address:  10004195
 * ================================================================ */

char * FUN_10004195(void)

{
  return s_ftd2xx_1001f2f4;
}



/* ================================================================
 * Function: FUN_100041a1
 * Address:  100041a1
 * ================================================================ */

undefined4 FUN_100041a1(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_100041ad
 * Address:  100041ad
 * ================================================================ */

undefined1 __fastcall FUN_100041ad(undefined1 param_1)

{
  int iVar1;
  
  if ((DAT_10022818 != 0) && (DAT_10022f54 != (code *)0x0)) {
    iVar1 = (*DAT_10022f54)(DAT_10022818);
    param_1 = FUN_10003e30(iVar1);
  }
  return param_1;
}



/* ================================================================
 * Function: FUN_100041e1
 * Address:  100041e1
 * ================================================================ */

undefined1 __thiscall FUN_100041e1(undefined1 param_1,undefined *param_2)

{
  int iVar1;
  
  DAT_10022820 = DAT_10022820 + -1;
  if (DAT_10022820 == 0) {
    if ((DAT_10022818 != 0) && (DAT_10022f80 != (code *)0x0)) {
      iVar1 = (*DAT_10022f80)(DAT_10022818);
      param_1 = FUN_10003e30(iVar1);
    }
    if (DAT_1002281c != (HMODULE)0x0) {
      FreeLibrary(DAT_1002281c);
      DAT_1002281c = (HMODULE)0x0;
      DAT_10022818 = 0;
    }
  }
  FUN_1000104b(param_2);
  return param_1;
}



/* ================================================================
 * Function: FUN_1000425f
 * Address:  1000425f
 * ================================================================ */

int FUN_1000425f(void)

{
  char local_c [4];
  undefined4 local_8;
  
  local_8 = 0;
  local_c[0] = '\0';
  if ((DAT_10022818 != 0) && (DAT_10022f58 != (code *)0x0)) {
    (*DAT_10022f58)(DAT_10022818,local_c,1,&local_8);
  }
  return (int)local_c[0];
}



/* ================================================================
 * Function: FUN_100042a3
 * Address:  100042a3
 * ================================================================ */

undefined4 FUN_100042a3(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_8;
  
  local_8 = 0;
  if ((DAT_10022818 != 0) && (DAT_10022f2c != (code *)0x0)) {
    (*DAT_10022f2c)(DAT_10022818,param_3,1,&local_8);
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_100042e0
 * Address:  100042e0
 * ================================================================ */

bool FUN_100042e0(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  *(undefined4 *)(param_1 + 0x1ac) = param_2;
  if (DAT_10022818 == 0) {
    if ((DAT_1002281c != 0) && (DAT_10022f74 != (code *)0x0)) {
      iVar2 = (*DAT_10022f74)(param_2,&DAT_10022818);
      bVar1 = FUN_10003e30(iVar2);
    }
    if (((DAT_1002281c != 0) && (DAT_10022f30 != (code *)0x0)) && (DAT_10022818 != 0)) {
      (*DAT_10022f30)(DAT_10022818,0x32,0xfa);
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* ================================================================
 * Function: FUN_1000436a
 * Address:  1000436a
 * ================================================================ */

undefined4 FUN_1000436a(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 local_c;
  int local_8;
  
  local_c = 0;
  local_8 = 0;
  if (((DAT_10022818 != 0) && (DAT_10022f58 != (code *)0x0)) && (DAT_10022f60 != (code *)0x0)) {
    (*DAT_10022f60)(DAT_10022818,&local_8);
    if (local_8 < param_4) {
      param_4 = local_8;
    }
    if (0x8000 < param_4) {
      param_4 = 0x8000;
    }
    if (param_4 != 0) {
      (*DAT_10022f58)(DAT_10022818,param_3,param_4,&local_c);
    }
  }
  return local_c;
}



/* ================================================================
 * Function: FUN_100043f0
 * Address:  100043f0
 * ================================================================ */

undefined4 FUN_100043f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_8;
  
  local_8 = 0;
  if ((DAT_10022818 != 0) && (DAT_10022f2c != (code *)0x0)) {
    (*DAT_10022f2c)(DAT_10022818,param_3,param_4,&local_8);
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_1000442e
 * Address:  1000442e
 * ================================================================ */

bool FUN_1000442e(undefined4 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 local_c;
  
  bVar1 = false;
  if ((DAT_10022818 != 0) && (DAT_10022f40 != (code *)0x0)) {
    if (param_2 == 1) {
      local_c = 1;
    }
    else if (param_2 == 2) {
      local_c = 2;
    }
    else if (param_2 == 3) {
      local_c = 3;
    }
    iVar2 = (*DAT_10022f40)(DAT_10022818,local_c);
    bVar1 = FUN_10003e30(iVar2);
  }
  return bVar1;
}



/* ================================================================
 * Function: FUN_100044a3
 * Address:  100044a3
 * ================================================================ */

undefined4 FUN_100044a3(void)

{
  undefined4 local_8;
  
  local_8 = 0;
  if (((DAT_10022818 != 0) && (DAT_10022f58 != 0)) && (DAT_10022f60 != (code *)0x0)) {
    (*DAT_10022f60)(DAT_10022818,&local_8);
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_100044e3
 * Address:  100044e3
 * ================================================================ */

undefined4 FUN_100044e3(int param_1,int param_2)

{
  undefined4 local_8;
  
  local_8 = 1;
  if (param_2 == 0x1e) {
    if (*(int *)(param_1 + 0x1d8) == 1) {
      (**(code **)(param_1 + 0x30))(param_1,0);
    }
    else {
      (**(code **)(param_1 + 0x30))(param_1,*(int *)(param_1 + 0x1b8) + -1);
    }
  }
  else {
    local_8 = 0;
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_10004541
 * Address:  10004541
 * ================================================================ */

undefined4 FUN_10004541(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_8;
  
  local_8 = 1;
  if (param_2 == 0xc) {
    uVar1 = (**(code **)(param_1 + 0xbc))(param_1);
    *param_3 = uVar1;
  }
  else if (param_2 == 0x54) {
    *param_3 = *(undefined4 *)(param_1 + 0x20c);
  }
  else {
    local_8 = 0;
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_100045a0
 * Address:  100045a0
 * ================================================================ */

undefined4 FUN_100045a0(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_100045ac
 * Address:  100045ac
 * ================================================================ */

undefined4 FUN_100045ac(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_100045b8
 * Address:  100045b8
 * ================================================================ */

undefined4 FUN_100045b8(void)

{
  return 0;
}



/* ================================================================
 * Function: FUN_100045c1
 * Address:  100045c1
 * ================================================================ */

undefined4 FUN_100045c1(void)

{
  return 0;
}



/* ================================================================
 * Function: FUN_100045ca
 * Address:  100045ca
 * ================================================================ */

undefined4 FUN_100045ca(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}



/* ================================================================
 * Function: FUN_100045df
 * Address:  100045df
 * ================================================================ */

undefined4 FUN_100045df(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}



/* ================================================================
 * Function: FUN_100045f4
 * Address:  100045f4
 * ================================================================ */

undefined4 FUN_100045f4(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}



/* ================================================================
 * Function: FUN_10004609
 * Address:  10004609
 * ================================================================ */

undefined4 FUN_10004609(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_10004615
 * Address:  10004615
 * ================================================================ */

undefined4 FUN_10004615(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}



/* ================================================================
 * Function: FUN_1000462a
 * Address:  1000462a
 * ================================================================ */

undefined4 FUN_1000462a(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_10004636
 * Address:  10004636
 * ================================================================ */

undefined4 FUN_10004636(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}



/* ================================================================
 * Function: FUN_1000464b
 * Address:  1000464b
 * ================================================================ */

undefined4 FUN_1000464b(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_10004657
 * Address:  10004657
 * ================================================================ */

undefined4 FUN_10004657(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}



/* ================================================================
 * Function: FUN_1000466c
 * Address:  1000466c
 * ================================================================ */

undefined4 FUN_1000466c(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_10004678
 * Address:  10004678
 * ================================================================ */

undefined4 FUN_10004678(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}



/* ================================================================
 * Function: FUN_10004690
 * Address:  10004690
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10004690(void)

{
  bool bVar1;
  
  if (DAT_10022860 == 0) {
    DAT_1002285c = LoadLibraryA(s_gpib_32_dll_1001f2fc);
  }
  bVar1 = (HMODULE)0x1f < DAT_1002285c;
  if (bVar1) {
    DAT_10022860 = DAT_10022860 + 1;
    DAT_10022824 = GetProcAddress(DAT_1002285c,s_ibrsp_1001f308);
    _DAT_10022828 = GetProcAddress(DAT_1002285c,s_ibclr_1001f310);
    DAT_1002282c = GetProcAddress(DAT_1002285c,s_ibcmd_1001f318);
    _DAT_10022830 = GetProcAddress(DAT_1002285c,s_ibdev_1001f320);
    _DAT_10022834 = GetProcAddress(DAT_1002285c,s_ibdma_1001f328);
    DAT_10022838 = GetProcAddress(DAT_1002285c,s_ibfindA_1001f330);
    _DAT_1002283c = GetProcAddress(DAT_1002285c,&DAT_1001f338);
    DAT_10022840 = GetProcAddress(DAT_1002285c,s_ibrda_1001f340);
    DAT_10022844 = GetProcAddress(DAT_1002285c,s_ibsic_1001f348);
    DAT_10022848 = GetProcAddress(DAT_1002285c,s_ibsre_1001f350);
    _DAT_1002284c = GetProcAddress(DAT_1002285c,s_ibstop_1001f358);
    DAT_10022850 = GetProcAddress(DAT_1002285c,s_ibtmo_1001f360);
    DAT_10022854 = GetProcAddress(DAT_1002285c,s_ibwait_1001f368);
    DAT_10022858 = GetProcAddress(DAT_1002285c,s_ibwrt_1001f370);
  }
  return bVar1;
}



/* ================================================================
 * Function: FUN_1000481c
 * Address:  1000481c
 * ================================================================ */

undefined4 FUN_1000481c(void)

{
  if (((HMODULE)0x1f < DAT_1002285c) && (DAT_10022860 = DAT_10022860 + -1, DAT_10022860 == 0)) {
    FreeLibrary(DAT_1002285c);
  }
  return 1;
}



/* ================================================================
 * Function: FUN_10004860
 * Address:  10004860
 * ================================================================ */

undefined4 * FUN_10004860(void)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  bVar1 = FUN_10004690();
  if (CONCAT31(extraout_var,bVar1) != 0) {
    local_8 = FUN_1000102f(0x1508);
    FUN_100099a3(local_8);
    *local_8 = FUN_10004961;
    local_8[1] = FUN_10004a56;
    local_8[4] = FUN_1000496d;
    local_8[0x11] = FUN_10004987;
    local_8[0x12] = FUN_100049ce;
    local_8[0x17] = FUN_10004ce1;
    local_8[0x1c] = FUN_10004a02;
    local_8[0x1f] = FUN_10004a3e;
    local_8[0x3d] = FUN_10004e3d;
    local_8[0x3e] = FUN_10004e60;
    local_8[0x45] = FUN_10004e83;
    local_8[0x46] = FUN_100050d2;
    local_8[0x4a] = FUN_1000520d;
    local_8[0x4c] = FUN_10005230;
    local_8[0xf] = FUN_10004b2c;
    (*(code *)local_8[0x19])(local_8,s_gpib0_1001f378);
    FUN_10005486((int)local_8);
    local_8[0x6c] = 2;
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_10004961
 * Address:  10004961
 * ================================================================ */

char * FUN_10004961(void)

{
  return s_GPIB_PORT_1001f380;
}



/* ================================================================
 * Function: FUN_1000496d
 * Address:  1000496d
 * ================================================================ */

undefined4 FUN_1000496d(undefined *param_1)

{
  FUN_1000481c();
  FUN_1000104b(param_1);
  return 1;
}



/* ================================================================
 * Function: FUN_10004987
 * Address:  10004987
 * ================================================================ */

bool FUN_10004987(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  int local_8;
  
  bVar1 = false;
  if (param_1 != 0) {
    bVar1 = FUN_10004b3c(param_1,0,0,param_4,param_3,&local_8);
    if (local_8 != param_4) {
      bVar1 = false;
    }
  }
  return bVar1;
}



/* ================================================================
 * Function: FUN_100049ce
 * Address:  100049ce
 * ================================================================ */

bool FUN_100049ce(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_1 != 0) {
    bVar1 = FUN_10004b3c(param_1,param_4,param_3,0,0,(int *)0x0);
  }
  return bVar1;
}



/* ================================================================
 * Function: FUN_10004a02
 * Address:  10004a02
 * ================================================================ */

uint FUN_10004a02(int param_1)

{
  undefined4 uVar1;
  uint local_8;
  
  uVar1 = (*DAT_10022824)(*(undefined4 *)(param_1 + 0x354),&local_8);
  *(undefined4 *)(param_1 + 0x350) = uVar1;
  *(undefined4 *)(param_1 + 0x1b0) = 1;
  return local_8 & 0xff;
}



/* ================================================================
 * Function: FUN_10004a3e
 * Address:  10004a3e
 * ================================================================ */

undefined4 FUN_10004a3e(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1b8) = param_2;
  return 1;
}



/* ================================================================
 * Function: FUN_10004a56
 * Address:  10004a56
 * ================================================================ */

int FUN_10004a56(int param_1)

{
  undefined4 uVar1;
  undefined4 local_8;
  
  local_8 = 1;
  if ((*(int *)(param_1 + 0x300) != 0) && (param_1 != -0x1bc)) {
    uVar1 = (*DAT_10022838)(param_1 + 0x1bc);
    *(undefined4 *)(param_1 + 0x2fc) = uVar1;
    if (*(int *)(param_1 + 0x2fc) < 0) {
      local_8 = 0;
      *(undefined4 *)(param_1 + 0x300) = 0;
    }
  }
  if (local_8 == 0) {
    *(undefined4 *)(param_1 + 0x1b0) = 3;
    local_8 = 0;
  }
  else {
    uVar1 = (*DAT_10022844)(*(undefined4 *)(param_1 + 0x2fc));
    *(undefined4 *)(param_1 + 0x350) = uVar1;
    uVar1 = (*DAT_10022848)(*(undefined4 *)(param_1 + 0x2fc),1);
    *(undefined4 *)(param_1 + 0x350) = uVar1;
    FUN_10004ce1(param_1,*(int *)(param_1 + 0x1d0));
    *(undefined4 *)(param_1 + 0x1b0) = 1;
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_10004b2c
 * Address:  10004b2c
 * ================================================================ */

undefined4 FUN_10004b2c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x350);
}



/* ================================================================
 * Function: FUN_10004b3c
 * Address:  10004b3c
 * ================================================================ */

bool FUN_10004b3c(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 int *param_6)

{
  undefined4 uVar1;
  bool bVar2;
  undefined1 local_8;
  byte local_7;
  byte local_6;
  
  bVar2 = true;
  local_8 = 0x3f;
  if (param_2 != 0) {
    local_7 = *(byte *)(param_1 + 0x304) | 0x40;
    local_6 = *(byte *)(param_1 + 0x354) | 0x20;
    uVar1 = (*DAT_1002282c)(*(undefined4 *)(param_1 + 0x2fc),&local_8,3);
    *(undefined4 *)(param_1 + 0x350) = uVar1;
    uVar1 = (*DAT_10022858)(*(undefined4 *)(param_1 + 0x2fc),param_3,param_2);
    *(undefined4 *)(param_1 + 0x350) = uVar1;
    bVar2 = (*(uint *)(param_1 + 0x350) & 0x8000) == 0;
    uVar1 = (*DAT_1002282c)(*(undefined4 *)(param_1 + 0x2fc),&DAT_1001f38c,2);
    *(undefined4 *)(param_1 + 0x350) = uVar1;
  }
  if ((bVar2) && (param_4 != 0)) {
    local_7 = *(byte *)(param_1 + 0x304) | 0x20;
    local_6 = *(byte *)(param_1 + 0x354) | 0x40;
    uVar1 = (*DAT_1002282c)(*(undefined4 *)(param_1 + 0x2fc),&local_8,3);
    *(undefined4 *)(param_1 + 0x350) = uVar1;
    uVar1 = (*DAT_10022840)(*(undefined4 *)(param_1 + 0x2fc),param_5,param_4);
    *(undefined4 *)(param_1 + 0x350) = uVar1;
    uVar1 = (*DAT_10022854)(*(undefined4 *)(param_1 + 0x2fc),0x4100);
    *(undefined4 *)(param_1 + 0x350) = uVar1;
    bVar2 = (*(uint *)(param_1 + 0x350) & 0x100) != 0;
    if (bVar2) {
      *param_6 = param_4;
    }
    uVar1 = (*DAT_1002282c)(*(undefined4 *)(param_1 + 0x2fc),&DAT_1001f390,2);
    *(undefined4 *)(param_1 + 0x350) = uVar1;
  }
  return bVar2;
}



/* ================================================================
 * Function: FUN_10004ce1
 * Address:  10004ce1
 * ================================================================ */

undefined4 FUN_10004ce1(int param_1,int param_2)

{
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  if (param_1 != 0) {
    *(int *)(param_1 + 0x1d0) = param_2;
    local_8 = 1;
    if (-1 < *(int *)(param_1 + 0x2fc)) {
      if (param_2 < 1) {
        local_c = 0;
      }
      else if (param_2 == 1) {
        local_c = 5;
      }
      else if (param_2 < 4) {
        local_c = 6;
      }
      else if (param_2 < 0xb) {
        local_c = 7;
      }
      else if (param_2 < 0x1f) {
        local_c = 8;
      }
      else if (param_2 < 0x65) {
        local_c = 9;
      }
      else if (param_2 < 0x12d) {
        local_c = 10;
      }
      else if (param_2 < 0x3e9) {
        local_c = 0xb;
      }
      else if (param_2 < 0xbb9) {
        local_c = 0xc;
      }
      else if (param_2 < 0x2711) {
        local_c = 0xd;
      }
      else if (param_2 < 0x7531) {
        local_c = 0xe;
      }
      else if (param_2 < 0x186a1) {
        local_c = 0xf;
      }
      else if (param_2 < 0x493e1) {
        local_c = 0x10;
      }
      else {
        local_c = 0x11;
      }
      (*DAT_10022850)(*(undefined4 *)(param_1 + 0x2fc),local_c);
      local_8 = 1;
      *(undefined4 *)(param_1 + 0x1b0) = 1;
    }
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_10004e3d
 * Address:  10004e3d
 * ================================================================ */

undefined4 FUN_10004e3d(void)

{
  return 0;
}



/* ================================================================
 * Function: FUN_10004e60
 * Address:  10004e60
 * ================================================================ */

undefined4 FUN_10004e60(void)

{
  return 0;
}



/* ================================================================
 * Function: FUN_10004e83
 * Address:  10004e83
 * ================================================================ */

undefined4 FUN_10004e83(int param_1,undefined4 param_2,uint param_3)

{
  undefined4 local_8;
  
  local_8 = 1;
  switch(param_2) {
  case 8:
    *(uint *)(param_1 + 0x1b8) = param_3;
    break;
  default:
    local_8 = 0;
    break;
  case 0x53:
    *(uint *)(param_1 + 0x34c) = param_3;
    break;
  case 0x56:
    if (*(int *)(param_1 + 0x34c) < 0x1f) {
      *(undefined1 *)(param_1 + 0x32c + *(int *)(param_1 + 0x34c)) = (undefined1)param_3;
      *(int *)(param_1 + 0x34c) = *(int *)(param_1 + 0x34c) + 1;
    }
    break;
  case 0x57:
    FUN_1000531a(param_1);
    break;
  case 0x59:
    FUN_1000541a(param_1,param_3);
    break;
  case 0x5a:
    break;
  case 0x5b:
    FUN_1000529f(param_1);
    break;
  case 0x5c:
    FUN_10005253(param_1);
    break;
  case 0x5d:
    FUN_10005049(param_1);
    break;
  case 0x5e:
    FUN_10005069(param_1,param_3);
    break;
  case 0x5f:
    FUN_10004ce1(param_1,param_3);
    break;
  case 0x65:
    FUN_100050ae(param_1,param_3);
    break;
  case 0x66:
    if (param_3 < 0x1f) {
      *(uint *)(param_1 + 0x354) = param_3;
    }
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_10005049
 * Address:  10005049
 * ================================================================ */

void FUN_10005049(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*DAT_10022844)(*(undefined4 *)(param_1 + 0x2fc));
  *(undefined4 *)(param_1 + 0x350) = uVar1;
  return;
}



/* ================================================================
 * Function: FUN_10005069
 * Address:  10005069
 * ================================================================ */

void FUN_10005069(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 1) {
    uVar1 = (*DAT_10022848)(*(undefined4 *)(param_1 + 0x2fc),1);
    *(undefined4 *)(param_1 + 0x350) = uVar1;
  }
  else {
    uVar1 = (*DAT_10022848)(*(undefined4 *)(param_1 + 0x2fc),0);
    *(undefined4 *)(param_1 + 0x350) = uVar1;
  }
  return;
}



/* ================================================================
 * Function: FUN_100050ae
 * Address:  100050ae
 * ================================================================ */

void FUN_100050ae(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (*DAT_10022854)(*(undefined4 *)(param_1 + 0x2fc),param_2);
  *(undefined4 *)(param_1 + 0x350) = uVar1;
  return;
}



/* ================================================================
 * Function: FUN_100050d2
 * Address:  100050d2
 * ================================================================ */

undefined4 FUN_100050d2(int param_1,undefined4 param_2,int *param_3)

{
  char local_c [4];
  undefined4 local_8;
  
  local_8 = 1;
  switch(param_2) {
  case 8:
    *param_3 = *(int *)(param_1 + 0x1b8);
    break;
  default:
    local_8 = 0;
    break;
  case 0x53:
    *param_3 = *(int *)(param_1 + 0x34c);
    break;
  case 0x58:
    FUN_100053a3(param_1,*(undefined4 *)(param_1 + 0x354),local_c);
    *param_3 = (int)local_c[0];
    break;
  case 0x59:
    *param_3 = *(int *)(param_1 + 0x304);
    break;
  case 0x5a:
    break;
  case 0x5f:
    *param_3 = *(int *)(param_1 + 0x1d0);
    break;
  case 0x66:
    *param_3 = *(int *)(param_1 + 0x354);
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_1000520d
 * Address:  1000520d
 * ================================================================ */

undefined4 FUN_1000520d(void)

{
  return 0;
}



/* ================================================================
 * Function: FUN_10005230
 * Address:  10005230
 * ================================================================ */

undefined4 FUN_10005230(void)

{
  return 0;
}



/* ================================================================
 * Function: FUN_10005253
 * Address:  10005253
 * ================================================================ */

void FUN_10005253(int param_1)

{
  FUN_1000526e(param_1,param_1 + 0x315,2);
  return;
}



/* ================================================================
 * Function: FUN_1000526e
 * Address:  1000526e
 * ================================================================ */

undefined4 FUN_1000526e(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*DAT_1002282c)(*(undefined4 *)(param_1 + 0x2fc),param_2,param_3);
  *(undefined4 *)(param_1 + 0x350) = uVar1;
  return *(undefined4 *)(param_1 + 0x350);
}



/* ================================================================
 * Function: FUN_1000529f
 * Address:  1000529f
 * ================================================================ */

void FUN_1000529f(int param_1)

{
  undefined1 local_58;
  undefined1 uStack_57;
  byte bStack_56;
  undefined1 uStack_55;
  undefined4 local_8;
  
  local_58 = *(undefined1 *)(param_1 + 0x30a);
  uStack_57 = 0x3f;
  bStack_56 = (byte)*(undefined4 *)(param_1 + 0x354) | 0x20;
  uStack_55 = 4;
  local_8 = 4;
  FUN_1000526e(param_1,&local_58,4);
  return;
}



/* ================================================================
 * Function: FUN_1000531a
 * Address:  1000531a
 * ================================================================ */

void FUN_1000531a(int param_1)

{
  undefined1 local_58;
  undefined1 local_57;
  byte abStack_56 [78];
  int local_8;
  
  if (*(int *)(param_1 + 0x34c) != 0) {
    local_58 = *(undefined1 *)(param_1 + 0x30a);
    local_57 = 0x3f;
    for (local_8 = 0; local_8 < *(int *)(param_1 + 0x34c); local_8 = local_8 + 1) {
      abStack_56[local_8] = *(byte *)(param_1 + local_8 + 0x32c) | 0x20;
    }
    abStack_56[*(int *)(param_1 + 0x34c)] = 8;
    FUN_1000526e(param_1,&local_58,*(int *)(param_1 + 0x34c) + 3);
  }
  return;
}



/* ================================================================
 * Function: FUN_100053a3
 * Address:  100053a3
 * ================================================================ */

undefined4 FUN_100053a3(int param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined1 local_c [4];
  int local_8;
  
  local_c[0] = 0;
  *(byte *)(param_1 + 0x30f) = (byte)*(undefined4 *)(param_1 + 0x354) | 0x40;
  FUN_1000526e(param_1,param_1 + 0x30e,4);
  FUN_10004b3c(param_1,0,0,1,local_c,&local_8);
  FUN_1000526e(param_1,param_1 + 0x312,3);
  *param_3 = local_c[0];
  return 1;
}



/* ================================================================
 * Function: FUN_1000541a
 * Address:  1000541a
 * ================================================================ */

undefined4 FUN_1000541a(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x304) = param_2;
  *(byte *)(param_1 + 0x30a) = (byte)*(undefined4 *)(param_1 + 0x304) | 0x40;
  *(byte *)(param_1 + 0x30c) = (byte)*(undefined4 *)(param_1 + 0x304) | 0x20;
  *(undefined1 *)(param_1 + 0x310) = *(undefined1 *)(param_1 + 0x30c);
  *(undefined1 *)(param_1 + 0x315) = *(undefined1 *)(param_1 + 0x30a);
  return 0;
}



/* ================================================================
 * Function: FUN_10005486
 * Address:  10005486
 * ================================================================ */

void FUN_10005486(int param_1)

{
  *(undefined4 *)(param_1 + 0x300) = 1;
  *(undefined4 *)(param_1 + 0x34c) = 0;
  *(undefined4 *)(param_1 + 0x304) = 0;
  *(undefined4 *)(param_1 + 0x354) = 0xf;
  *(undefined4 *)(param_1 + 0x1d0) = 100;
  *(undefined1 *)(param_1 + 0x308) = 0x5f;
  *(undefined1 *)(param_1 + 0x309) = 0x3f;
  *(undefined1 *)(param_1 + 0x30a) = 0x40;
  *(undefined1 *)(param_1 + 0x30b) = 0x20;
  *(undefined1 *)(param_1 + 0x30c) = 0x20;
  *(undefined1 *)(param_1 + 0x30d) = 0x40;
  *(undefined1 *)(param_1 + 0x30e) = 0x3f;
  *(undefined1 *)(param_1 + 0x30f) = *(undefined1 *)(param_1 + 0x30d);
  *(undefined1 *)(param_1 + 0x310) = *(undefined1 *)(param_1 + 0x30c);
  *(undefined1 *)(param_1 + 0x311) = 0x18;
  *(undefined1 *)(param_1 + 0x312) = 0x19;
  *(undefined1 *)(param_1 + 0x313) = 0x3f;
  *(undefined1 *)(param_1 + 0x314) = 0x5f;
  *(undefined1 *)(param_1 + 0x315) = *(undefined1 *)(param_1 + 0x30a);
  *(undefined1 *)(param_1 + 0x316) = 0x14;
  return;
}



/* ================================================================
 * Function: FUN_10005580
 * Address:  10005580
 * ================================================================ */

undefined4 * FUN_10005580(void)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_1000102f(0x1508);
  FUN_100099a3(puVar1);
  *puVar1 = FUN_10005631;
  puVar1[1] = FUN_1000563d;
  puVar1[2] = FUN_10005665;
  puVar1[4] = FUN_10005671;
  puVar1[5] = FUN_10005686;
  puVar1[6] = FUN_100056b1;
  puVar1[0xb] = FUN_100056b1;
  puVar1[0xc] = FUN_100056ef;
  puVar1[0x53] = FUN_10005711;
  puVar1[0x54] = FUN_1000571a;
  puVar1[0x55] = FUN_10005721;
  puVar1[0x56] = FUN_10005728;
  puVar1[0x76] = 1;
  return puVar1;
}



/* ================================================================
 * Function: FUN_10005631
 * Address:  10005631
 * ================================================================ */

char * FUN_10005631(void)

{
  return s_IO_PORT_1001f394;
}



/* ================================================================
 * Function: FUN_1000563d
 * Address:  1000563d
 * ================================================================ */

undefined4 FUN_1000563d(void)

{
  FUN_1000c260(0x4d6,5,0);
  FUN_1000c260(0x4d6,6,0);
  return 1;
}



/* ================================================================
 * Function: FUN_10005665
 * Address:  10005665
 * ================================================================ */

undefined4 FUN_10005665(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_10005671
 * Address:  10005671
 * ================================================================ */

undefined4 FUN_10005671(undefined *param_1)

{
  FUN_1000104b(param_1);
  return 1;
}



/* ================================================================
 * Function: FUN_10005686
 * Address:  10005686
 * ================================================================ */

uint FUN_10005686(int param_1,int param_2)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x1ac) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1000c2a3(*(int *)(param_1 + 0x1ac) + param_2,0);
  }
  return uVar1;
}



/* ================================================================
 * Function: FUN_100056b1
 * Address:  100056b1
 * ================================================================ */

undefined4 FUN_100056b1(int param_1,int param_2,uint param_3)

{
  if (*(int *)(param_1 + 0x1ac) != 0) {
    FUN_1000c260(*(int *)(param_1 + 0x1ac) + param_2,param_3 & 0xff,0);
  }
  return 1;
}



/* ================================================================
 * Function: FUN_100056ef
 * Address:  100056ef
 * ================================================================ */

undefined4 FUN_100056ef(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1ac) = param_2;
  (**(code **)(param_1 + 4))(param_1);
  return 1;
}



/* ================================================================
 * Function: FUN_10005711
 * Address:  10005711
 * ================================================================ */

undefined4 FUN_10005711(void)

{
  return 0;
}



/* ================================================================
 * Function: FUN_1000571a
 * Address:  1000571a
 * ================================================================ */

void FUN_1000571a(void)

{
  return;
}



/* ================================================================
 * Function: FUN_10005721
 * Address:  10005721
 * ================================================================ */

void FUN_10005721(void)

{
  return;
}



/* ================================================================
 * Function: FUN_10005728
 * Address:  10005728
 * ================================================================ */

void FUN_10005728(void)

{
  return;
}



/* ================================================================
 * Function: FUN_10005730
 * Address:  10005730
 * ================================================================ */

undefined4 FUN_10005730(undefined1 *param_1,undefined2 *param_2,undefined1 *param_3)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined2 uVar4;
  undefined1 *puVar3;
  undefined1 extraout_CL;
  uint extraout_EDX;
  undefined2 unaff_BX;
  char cVar5;
  undefined2 local_18;
  
  cVar5 = &stack0xfffffffc < (undefined1 *)0x1c;
  local_18 = 0;
  pcVar1 = (code *)swi(0x1a);
  uVar2 = (*pcVar1)();
  uVar4 = 0;
  if (cVar5 == '\0') {
    if ((char)((ushort)uVar2 >> 8) == '\0') {
      if (((((extraout_EDX & 0xff) == 0x50) && ((extraout_EDX >> 8 & 0xff) == 0x43)) &&
          ((extraout_EDX >> 0x10 & 0xff) == 0x49)) && (extraout_EDX >> 0x18 == 0x20)) {
        local_18 = 1;
        puVar3 = (undefined1 *)0x0;
        if (param_1 != (undefined1 *)0x0) {
          *param_1 = (char)uVar2;
          *param_2 = unaff_BX;
          *param_3 = extraout_CL;
          puVar3 = param_3;
        }
        uVar4 = (undefined2)((uint)puVar3 >> 0x10);
      }
      else {
        uVar4 = 0;
        local_18 = 0;
      }
    }
    else {
      local_18 = 0;
    }
  }
  return CONCAT22(uVar4,local_18);
}



/* ================================================================
 * Function: FUN_1000582e
 * Address:  1000582e
 * ================================================================ */

undefined2 FUN_1000582e(void)

{
  code *pcVar1;
  ushort uVar2;
  undefined2 unaff_BX;
  char cVar3;
  undefined1 *in_stack_00000010;
  undefined1 *in_stack_00000014;
  undefined2 local_18;
  
  cVar3 = &stack0xfffffffc < (undefined1 *)0x14;
  local_18 = 0;
  pcVar1 = (code *)swi(0x1a);
  uVar2 = (*pcVar1)();
  if ((cVar3 == '\0') && (uVar2 >> 8 == 0)) {
    local_18 = 1;
    if (in_stack_00000010 != (undefined1 *)0x0) {
      *in_stack_00000010 = (char)((ushort)unaff_BX >> 8);
    }
    if (in_stack_00000014 != (undefined1 *)0x0) {
      *in_stack_00000014 = (char)unaff_BX;
    }
  }
  return local_18;
}



/* ================================================================
 * Function: FUN_100058ce
 * Address:  100058ce
 * ================================================================ */

undefined2
FUN_100058ce(undefined4 param_1,undefined4 param_2,undefined1 *param_3,undefined1 *param_4)

{
  code *pcVar1;
  char extraout_AH;
  undefined2 unaff_BX;
  char cVar2;
  undefined2 local_18;
  
  cVar2 = &stack0xfffffffc < (undefined1 *)0x14;
  local_18 = 0;
  pcVar1 = (code *)swi(0x1a);
  (*pcVar1)();
  if ((cVar2 == '\0') && (extraout_AH == '\0')) {
    local_18 = 1;
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = (char)((ushort)unaff_BX >> 8);
    }
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = (char)unaff_BX;
    }
  }
  return local_18;
}



/* ================================================================
 * Function: FUN_10005957
 * Address:  10005957
 * ================================================================ */

undefined2 FUN_10005957(void)

{
  code *pcVar1;
  ushort uVar2;
  undefined4 extraout_ECX;
  char cVar3;
  undefined4 *in_stack_00000014;
  undefined2 local_18;
  
  cVar3 = &stack0xfffffffc < (undefined1 *)0x18;
  local_18 = 0;
  pcVar1 = (code *)swi(0x1a);
  uVar2 = (*pcVar1)();
  if ((cVar3 == '\0') && (uVar2 >> 8 == 0)) {
    *in_stack_00000014 = extraout_ECX;
    local_18 = 1;
  }
  return local_18;
}



/* ================================================================
 * Function: FUN_100059d7
 * Address:  100059d7
 * ================================================================ */

short FUN_100059d7(void)

{
  short sVar1;
  undefined1 *in_stack_00000010;
  undefined1 local_8;
  
  sVar1 = FUN_10005957();
  if (sVar1 == 1) {
    *in_stack_00000010 = local_8;
  }
  return sVar1;
}



/* ================================================================
 * Function: FUN_10005a19
 * Address:  10005a19
 * ================================================================ */

short FUN_10005a19(void)

{
  short sVar1;
  undefined2 *in_stack_00000010;
  undefined2 local_8;
  
  sVar1 = FUN_10005957();
  if (sVar1 == 1) {
    *in_stack_00000010 = local_8;
  }
  return sVar1;
}



/* ================================================================
 * Function: FUN_10005a5d
 * Address:  10005a5d
 * ================================================================ */

short FUN_10005a5d(void)

{
  short sVar1;
  undefined4 *in_stack_00000010;
  undefined4 local_8;
  
  sVar1 = FUN_10005957();
  if (sVar1 == 1) {
    *in_stack_00000010 = local_8;
  }
  return sVar1;
}



/* ================================================================
 * Function: FUN_10005a9f
 * Address:  10005a9f
 * ================================================================ */

undefined4 FUN_10005a9f(void)

{
  code *pcVar1;
  ushort uVar2;
  char cVar3;
  ushort local_14;
  ushort local_10;
  
  cVar3 = &stack0xfffffffc < (undefined1 *)0x14;
  pcVar1 = (code *)swi(0x1a);
  uVar2 = (*pcVar1)();
  if (cVar3 == '\0') {
    local_10 = uVar2 >> 8;
  }
  local_14 = (ushort)(local_10 == 0);
  return CONCAT22((short)local_10 >> 0xf,local_14);
}



/* ================================================================
 * Function: FUN_10005b17
 * Address:  10005b17
 * ================================================================ */

uint FUN_10005b17(void)

{
  uint uVar1;
  
  uVar1 = FUN_10005a9f();
  return uVar1;
}



/* ================================================================
 * Function: FUN_10005b4b
 * Address:  10005b4b
 * ================================================================ */

uint FUN_10005b4b(void)

{
  uint uVar1;
  
  uVar1 = FUN_10005a9f();
  return uVar1;
}



/* ================================================================
 * Function: FUN_10005b7f
 * Address:  10005b7f
 * ================================================================ */

uint FUN_10005b7f(void)

{
  uint uVar1;
  
  uVar1 = FUN_10005a9f();
  return uVar1;
}



/* ================================================================
 * Function: FUN_10005bae
 * Address:  10005bae
 * ================================================================ */

undefined6 FUN_10005bae(undefined2 param_1,undefined4 param_2)

{
  out(param_1,param_2);
  return CONCAT24(param_1,param_2);
}



/* ================================================================
 * Function: FUN_10005bc3
 * Address:  10005bc3
 * ================================================================ */

undefined4 FUN_10005bc3(undefined2 param_1)

{
  undefined4 uVar1;
  
  uVar1 = in(param_1);
  return uVar1;
}



/* ================================================================
 * Function: FUN_10005bde
 * Address:  10005bde
 * ================================================================ */

void FUN_10005bde(int param_1,int param_2,undefined4 param_3,int param_4,uint param_5,uint *param_6,
                 uint *param_7,uint *param_8,uint *param_9,uint *param_10,uint *param_11,
                 uint *param_12,uint *param_13,uint *param_14)

{
  uint uVar1;
  
  uVar1 = FUN_1000c2a3(param_2 + 0x38,(short)*(undefined4 *)(param_1 + 0x270) + 2);
  *param_6 = uVar1;
  uVar1 = FUN_1000c2a3(param_2 + 0x3c,(short)*(undefined4 *)(param_1 + 0x270) + 2);
  *param_7 = uVar1;
  uVar1 = FUN_1000c2a3(param_2 + 0x28,(short)*(undefined4 *)(param_1 + 0x270) + 2);
  *param_8 = uVar1;
  uVar1 = FUN_1000c2a3(param_2 + 0x24,(short)*(undefined4 *)(param_1 + 0x270) + 2);
  *param_9 = uVar1;
  uVar1 = FUN_1000c2a3(param_3,(short)*(undefined4 *)(param_1 + 0x270) + 2);
  *param_10 = uVar1;
  uVar1 = FUN_1000c2a3(param_4,(short)*(undefined4 *)(param_1 + 0x270) + 2);
  *param_11 = uVar1;
  uVar1 = FUN_1000c2a3(param_4 + 4,(short)*(undefined4 *)(param_1 + 0x270) + 2);
  *param_12 = uVar1;
  if (param_5 < 8) {
    uVar1 = FUN_1000c2a3(0x21,0);
    *param_13 = uVar1;
    uVar1 = FUN_1000c2a3(0x4d0,0);
    *param_14 = uVar1;
  }
  else {
    uVar1 = FUN_1000c2a3(0xa1,0);
    *param_13 = uVar1;
    uVar1 = FUN_1000c2a3(0x4d1,0);
    *param_14 = uVar1;
  }
  return;
}



/* ================================================================
 * Function: FUN_10005d00
 * Address:  10005d00
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_10005d00(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  DAT_10022f84 = FUN_100087e4();
  _DAT_100228b8 = 1;
  puVar1 = FUN_1000102f(0x1508);
  FUN_100099a3(puVar1);
  puVar1[0x76] = 1;
  *puVar1 = FUN_100062d8;
  puVar1[1] = FUN_100062e4;
  puVar1[4] = FUN_10006392;
  puVar1[5] = FUN_10006405;
  puVar1[6] = FUN_10006462;
  puVar1[0xb] = FUN_100064be;
  puVar1[0x12] = FUN_100064ef;
  puVar1[0x3d] = FUN_10006a23;
  puVar1[0x3e] = FUN_10006a46;
  puVar1[0x45] = FUN_10006a69;
  puVar1[0x46] = FUN_10006c18;
  puVar1[0x4d] = FUN_10006ffd;
  puVar1[0x6a] = FUN_100075a8;
  puVar1[0x69] = FUN_1000757f;
  puVar1[0xc] = FUN_100065e1;
  puVar1[3] = FUN_100065ba;
  puVar1[0xe] = FUN_100065a6;
  puVar1[2] = FUN_100069ef;
  puVar1[10] = FUN_10006a0f;
  puVar1[9] = FUN_100069fb;
  puVar1[0x4e] = FUN_1000710e;
  puVar1[0x4f] = FUN_1000713c;
  puVar1[0x4a] = FUN_100076e8;
  puVar1[0x4c] = FUN_10007b4e;
  puVar1[0x68] = FUN_10007522;
  *(undefined2 *)((int)puVar1 + 0x29e) = 0;
  *(undefined2 *)((int)puVar1 + 0x2a2) = 4;
  *(undefined2 *)((int)puVar1 + 0x29a) = 0x10;
  *(undefined2 *)(puVar1 + 0xa6) = 8;
  *(undefined2 *)(puVar1 + 0x9d) = 0x18;
  *(undefined2 *)(puVar1 + 0xa9) = 0x1c;
  *(undefined2 *)(puVar1 + 0xa8) = 0;
  puVar1[0xaa] = 4;
  puVar1[0xab] = 8;
  *(undefined2 *)(puVar1 + 0xa7) = 0x10;
  *(undefined2 *)(puVar1 + 0x9f) = 4;
  *(undefined2 *)((int)puVar1 + 0x276) = 0x14;
  *(undefined2 *)(puVar1 + 0x9e) = 0x18;
  *(undefined2 *)((int)puVar1 + 0x27e) = 0x10;
  *(undefined2 *)(puVar1 + 0xa0) = 0x14;
  *(undefined2 *)((int)puVar1 + 0x282) = 0x18;
  puVar1[0xa5] = 0x17;
  puVar1[0x6c] = 2;
  puVar1[0x76] = 1;
  *(undefined2 *)((int)puVar1 + 0x28e) = 10;
  puVar1[0x7e] = 0xb;
  *(undefined2 *)(puVar1 + 0xa3) = 0;
  DAT_10022d8c = 0;
  puVar1[0x6e] = 0;
  puVar1[0x6b] = 0;
  puVar1[0x79] = 0;
  switch(DAT_10022f84) {
  case 1:
    puVar1[0x59] = FUN_10014b60;
    puVar1[0x5a] = FUN_10014ba7;
    puVar1[0x5b] = FUN_10014bf1;
    puVar1[0x5c] = FUN_10014c33;
    puVar1[0x5d] = FUN_10014c8a;
    puVar1[0x5e] = FUN_10014ce1;
    puVar1[0x5f] = FUN_10014d38;
    puVar1[0x60] = FUN_10014c2a;
    puVar1[0x61] = FUN_10014d6d;
    puVar1[0x62] = FUN_10014dc4;
    puVar1[99] = FUN_10014df9;
    puVar1[100] = FUN_10014e50;
    puVar1[0x65] = FUN_10014e85;
    puVar1[0x66] = FUN_10014edc;
    puVar1[0x67] = FUN_10014f11;
    uVar3 = (*(code *)puVar1[0x5b])(puVar1,s_____PIVXDPCI_VXD_1001f39c);
    puVar1[0x79] = uVar3;
    iVar2 = FUN_10007421();
    puVar1[0x76] = iVar2;
    break;
  case 2:
  case 4:
    puVar1[0x59] = FUN_100128d0;
    puVar1[0x5a] = FUN_100129c3;
    puVar1[0x5b] = FUN_10012ae0;
    puVar1[0x5c] = FUN_10012b1b;
    puVar1[0x5d] = FUN_10012b57;
    puVar1[0x5e] = FUN_10012b93;
    puVar1[0x5f] = FUN_10012bcf;
    puVar1[0x60] = FUN_10012b12;
    puVar1[0x61] = FUN_10012c01;
    puVar1[0x62] = FUN_10012c3d;
    puVar1[99] = FUN_10012c6f;
    puVar1[100] = FUN_10012cdc;
    puVar1[0x65] = FUN_10012d0e;
    puVar1[0x66] = FUN_10012d7b;
    puVar1[0x67] = FUN_10012dad;
    uVar3 = (*(code *)puVar1[0x5b])(puVar1,s_____pipci0_1001f3c0);
    puVar1[0x79] = uVar3;
    uVar4 = FUN_1000887b((int)puVar1,0);
    puVar1[0x76] = (int)(short)uVar4;
    CloseHandle((HANDLE)puVar1[0x79]);
    puVar1[0x79] = 0;
    break;
  case 3:
    puVar1[0x59] = FUN_100128d0;
    puVar1[0x5a] = FUN_100129c3;
    puVar1[0x5b] = FUN_10012ae0;
    puVar1[0x5c] = FUN_10012b1b;
    puVar1[0x5d] = FUN_10012b57;
    puVar1[0x5e] = FUN_10012b93;
    puVar1[0x5f] = FUN_10012bcf;
    puVar1[0x60] = FUN_10012b12;
    puVar1[0x61] = FUN_10012c01;
    puVar1[0x62] = FUN_10012c3d;
    puVar1[99] = FUN_10012c6f;
    puVar1[100] = FUN_10012cdc;
    puVar1[0x65] = FUN_10012d0e;
    puVar1[0x66] = FUN_10012d7b;
    puVar1[0x67] = FUN_10012dad;
    uVar3 = (*(code *)puVar1[0x5b])(puVar1,s_____pipcidev_1001f3b0);
    puVar1[0x79] = uVar3;
    FUN_1000762a((int)puVar1);
  }
  puVar1[0x7a] = DAT_10022f84;
  return puVar1;
}



/* ================================================================
 * Function: FUN_100062d8
 * Address:  100062d8
 * ================================================================ */

char * FUN_100062d8(void)

{
  return s_PCI_Initiator_PORT_1001f3cc;
}



/* ================================================================
 * Function: FUN_100062e4
 * Address:  100062e4
 * ================================================================ */

undefined4 FUN_100062e4(int param_1)

{
  undefined4 local_8;
  
  if (*(int *)(param_1 + 0x1ac) != 0) {
    if (DAT_10022f84 == 1) {
      FUN_100011b9(param_1);
    }
    FUN_1000238b(param_1);
    if (*(int *)(param_1 + 0x1f8) == 0x13) {
      FUN_1000922e(param_1);
    }
    else {
      FUN_10008950(param_1);
    }
    *(undefined4 *)(param_1 + 0x1b0) = 1;
    if (DAT_10022d8c == 0) {
      for (local_8 = 0; local_8 < 0x400; local_8 = local_8 + 1) {
        FUN_100014f9(param_1,(short)local_8,0x55,0,0xff);
      }
      DAT_10022d8c = 1;
    }
  }
  return 1;
}



/* ================================================================
 * Function: FUN_10006392
 * Address:  10006392
 * ================================================================ */

undefined4 FUN_10006392(undefined *param_1)

{
  if (*(int *)(param_1 + 0x1ac) != 0) {
    FUN_10008bdc((int)param_1);
  }
  if (*(int *)(param_1 + 0x1e4) != 0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x1e4));
    *(undefined4 *)(param_1 + 0x1e4) = 0;
  }
  FUN_1000104b(param_1);
  if (DAT_100228b4 != (HMODULE)0x0) {
    FreeLibrary(DAT_100228b4);
    DAT_100228b4 = (HMODULE)0x0;
  }
  return 1;
}



/* ================================================================
 * Function: FUN_10006405
 * Address:  10006405
 * ================================================================ */

uint FUN_10006405(int param_1,uint param_2)

{
  undefined4 local_c;
  uint local_8;
  
  if (*(int *)(param_1 + 0x1ac) != 0) {
    if ((*(int *)(param_1 + 0x1f8) == 0xb) || (*(int *)(param_1 + 0x1f8) == 0x14)) {
      local_8 = FUN_10008c60(param_1,param_2,&local_c);
    }
    else {
      local_8 = FUN_100095a2(param_1,param_2);
    }
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_10006462
 * Address:  10006462
 * ================================================================ */

undefined4 FUN_10006462(int param_1,uint param_2,uint param_3)

{
  if (*(int *)(param_1 + 0x1ac) != 0) {
    if ((*(int *)(param_1 + 0x1f8) == 0xb) || (*(int *)(param_1 + 0x1f8) == 0x14)) {
      FUN_10008ea9(param_1,param_2,param_3);
    }
    else {
      FUN_1000950a(param_1,param_2,param_3);
    }
  }
  return 1;
}



/* ================================================================
 * Function: FUN_100064be
 * Address:  100064be
 * ================================================================ */

undefined4 FUN_100064be(int param_1,undefined4 param_2,uint param_3)

{
  if (*(int *)(param_1 + 0x1ac) != 0) {
    FUN_10008fd8(param_1,param_2,param_3);
  }
  return 1;
}



/* ================================================================
 * Function: FUN_100064ef
 * Address:  100064ef
 * ================================================================ */

undefined4 FUN_100064ef(int param_1,uint param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  uint local_c;
  uint *local_8;
  
  if (*(int *)(param_1 + 0x1ac) != 0) {
    if (param_2 == 0) {
      local_8 = param_3;
      for (local_c = 0; local_c < param_4; local_c = local_c + 1) {
        uVar1 = *local_8;
        local_8 = local_8 + 1;
        FUN_100090ae(param_1,uVar1);
      }
    }
    else {
      FUN_10009013(param_1,param_2);
      for (local_c = 0; local_c < param_4; local_c = local_c + 1) {
        uVar1 = *param_3;
        param_3 = (uint *)((int)param_3 + 1);
        FUN_100090ae(param_1,(uint)(byte)uVar1);
      }
    }
  }
  return 1;
}



/* ================================================================
 * Function: FUN_100065a6
 * Address:  100065a6
 * ================================================================ */

undefined4 FUN_100065a6(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_100065ba
 * Address:  100065ba
 * ================================================================ */

undefined4 FUN_100065ba(int param_1)

{
  FUN_10008c26(param_1);
  FUN_1000918a(param_1);
  FUN_10001be2(param_1);
  return 1;
}



/* ================================================================
 * Function: FUN_100065e1
 * Address:  100065e1
 * ================================================================ */

undefined4 FUN_100065e1(int param_1,uint param_2)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined3 extraout_var;
  BOOL BVar4;
  DWORD local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  uint local_18;
  undefined4 local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_14 = 1;
  if (((param_2 < 0x11) && (param_2 != 0)) && (param_2 <= *(uint *)(param_1 + 0x1d8))) {
    *(uint *)(param_1 + 0x1b8) = param_2;
  }
  else {
    *(undefined4 *)(param_1 + 0x1b8) = 1;
    param_2 = 1;
  }
  if ((DAT_10022f84 == 2) || (DAT_10022f84 == 4)) {
    switch(param_2) {
    case 1:
      uVar2 = (**(code **)(param_1 + 0x16c))(param_1,s_____pipci0_1001f3e0);
      *(undefined4 *)(param_1 + 0x1e4) = uVar2;
      uVar3 = FUN_1000887b(param_1,0);
      *(int *)(param_1 + 0x1d8) = (int)(short)uVar3;
      break;
    case 2:
      uVar2 = (**(code **)(param_1 + 0x16c))(param_1,s_____pipci1_1001f3ec);
      *(undefined4 *)(param_1 + 0x1e4) = uVar2;
      uVar3 = FUN_1000887b(param_1,1);
      *(int *)(param_1 + 0x1d8) = (int)(short)uVar3;
      break;
    case 3:
      uVar2 = (**(code **)(param_1 + 0x16c))(param_1,s_____pipci2_1001f3f8);
      *(undefined4 *)(param_1 + 0x1e4) = uVar2;
      uVar3 = FUN_1000887b(param_1,2);
      *(int *)(param_1 + 0x1d8) = (int)(short)uVar3;
      break;
    case 4:
      uVar2 = (**(code **)(param_1 + 0x16c))(param_1,s_____pipci3_1001f404);
      *(undefined4 *)(param_1 + 0x1e4) = uVar2;
      uVar3 = FUN_1000887b(param_1,3);
      *(int *)(param_1 + 0x1d8) = (int)(short)uVar3;
      break;
    case 5:
      uVar2 = (**(code **)(param_1 + 0x16c))(param_1,s_____pipci4_1001f410);
      *(undefined4 *)(param_1 + 0x1e4) = uVar2;
      uVar3 = FUN_1000887b(param_1,4);
      *(int *)(param_1 + 0x1d8) = (int)(short)uVar3;
      break;
    case 6:
      uVar2 = (**(code **)(param_1 + 0x16c))(param_1,s_____pipci5_1001f41c);
      *(undefined4 *)(param_1 + 0x1e4) = uVar2;
      uVar3 = FUN_1000887b(param_1,5);
      *(int *)(param_1 + 0x1d8) = (int)(short)uVar3;
      break;
    case 7:
      uVar2 = (**(code **)(param_1 + 0x16c))(param_1,s_____pipci6_1001f428);
      *(undefined4 *)(param_1 + 0x1e4) = uVar2;
      uVar3 = FUN_1000887b(param_1,6);
      *(int *)(param_1 + 0x1d8) = (int)(short)uVar3;
      break;
    case 8:
      uVar2 = (**(code **)(param_1 + 0x16c))(param_1,s_____pipci7_1001f434);
      *(undefined4 *)(param_1 + 0x1e4) = uVar2;
      uVar3 = FUN_1000887b(param_1,7);
      *(int *)(param_1 + 0x1d8) = (int)(short)uVar3;
    }
  }
  bVar1 = FUN_100072bb(&local_18,&local_8,&local_c,(undefined1 *)&local_10,
                       (undefined4 *)(param_1 + 0x26c),(undefined1 *)(param_1 + 0x25c),
                       (undefined1 *)(param_1 + 0x25d),param_2);
  local_14 = CONCAT31(extraout_var,bVar1);
  *(ushort *)(param_1 + 0x1e0) = (ushort)(byte)local_10;
  *(uint *)(param_1 + 0x260) = local_18;
  *(uint *)(param_1 + 0x264) = local_8;
  *(uint *)(param_1 + 0x268) = local_c;
  if (DAT_10022f84 == 1) {
    if ((((local_18 & 1) == 0) || ((local_8 & 1) == 0)) || ((local_c & 1) == 0)) {
      *(undefined4 *)(param_1 + 0x270) = 3;
    }
    else {
      *(undefined4 *)(param_1 + 0x270) = 0;
    }
    if (*(int *)(param_1 + 0x270) == 0) {
      *(uint *)(param_1 + 0x260) = local_18 - 1;
      *(uint *)(param_1 + 0x264) = local_8 - 1;
      *(uint *)(param_1 + 0x268) = local_c - 1;
    }
  }
  if ((DAT_10022f84 == 1) && (*(int *)(param_1 + 0x270) != 0)) {
    local_38 = local_18;
    local_34 = local_8;
    local_30 = local_c;
    BVar4 = DeviceIoControl(*(HANDLE *)(param_1 + 0x1e4),0xb009,&local_38,0x10,&local_28,0x10,
                            &local_3c,(LPOVERLAPPED)0x0);
    if (BVar4 != 0) {
      *(undefined4 *)(param_1 + 0x260) = local_28;
      *(undefined4 *)(param_1 + 0x264) = local_24;
      *(undefined4 *)(param_1 + 0x268) = local_20;
    }
  }
  if (DAT_10022f84 == 1) {
    FUN_100075d1(*(HANDLE *)(param_1 + 0x1e4),*(undefined4 *)(param_1 + 0x260),
                 *(undefined4 *)(param_1 + 0x264),*(undefined4 *)(param_1 + 0x268),local_10 & 0xff,
                 param_2);
  }
  *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_1 + 0x268);
  return 1;
}



/* ================================================================
 * Function: FUN_100069ef
 * Address:  100069ef
 * ================================================================ */

undefined4 FUN_100069ef(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_100069fb
 * Address:  100069fb
 * ================================================================ */

undefined4 FUN_100069fb(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_10006a0f
 * Address:  10006a0f
 * ================================================================ */

undefined4 FUN_10006a0f(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_10006a23
 * Address:  10006a23
 * ================================================================ */

undefined4 FUN_10006a23(void)

{
  return 0;
}



/* ================================================================
 * Function: FUN_10006a46
 * Address:  10006a46
 * ================================================================ */

undefined4 FUN_10006a46(void)

{
  return 0;
}



/* ================================================================
 * Function: FUN_10006a69
 * Address:  10006a69
 * ================================================================ */

undefined4 FUN_10006a69(int param_1,int param_2,int param_3)

{
  undefined4 local_8;
  
  local_8 = 1;
  if (param_2 < 0x37) {
    if (param_2 == 0x36) {
      FUN_10001b08(param_1);
      return 1;
    }
    switch(param_2) {
    case 0x25:
      FUN_1000c260(*(int *)(param_1 + 0x268) + 4,param_3,(short)*(undefined4 *)(param_1 + 0x270) + 2
                  );
      break;
    default:
      goto switchD_10006aaa_caseD_26;
    case 0x27:
      FUN_10002023(param_1,0x38,0x40000);
      break;
    case 0x2e:
      break;
    case 0x2f:
      FUN_1000918a(param_1);
      break;
    case 0x30:
      FUN_10002148(param_1,param_3);
      break;
    case 0x35:
    }
  }
  else {
    if (param_2 < 0x4e) {
      if (param_2 == 0x4d) {
        (**(code **)(param_1 + 0x198))(param_1);
        return 1;
      }
      if (param_2 == 0x3a) {
        FUN_10001b8a(param_1);
        FUN_10001ce2(param_1);
        return 1;
      }
      if (param_2 == 0x41) {
        (**(code **)(param_1 + 400))(param_1);
        return 1;
      }
      if (param_2 == 0x44) {
        (**(code **)(param_1 + 0x188))(param_1);
        return 1;
      }
    }
    else {
      if (param_2 == 0x52) {
        FUN_1000c260(*(int *)(param_1 + 0x268) + 4,param_3,
                     (short)*(undefined4 *)(param_1 + 0x270) + 2);
        return 1;
      }
      if (param_2 == 3000) {
        DAT_100228b0 = 0;
        return 1;
      }
    }
switchD_10006aaa_caseD_26:
    local_8 = 0;
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_10006c18
 * Address:  10006c18
 * ================================================================ */

bool FUN_10006c18(int param_1,int param_2,uint *param_3)

{
  uint uVar1;
  bool bVar2;
  uint local_10;
  DWORD local_c [2];
  
  if (param_2 < 0x44) {
    if (param_2 == 0x43) {
      (**(code **)(param_1 + 0x184))(param_1,&local_10);
      *param_3 = local_10;
      return true;
    }
    switch(param_2) {
    case 0x31:
      return true;
    case 0x34:
      *param_3 = 1;
      return true;
    case 0x35:
      switch(*(undefined2 *)(param_1 + 0x1e0)) {
      case 0:
        *param_3 = 4;
        return true;
      case 1:
        *param_3 = 5;
        return true;
      case 2:
        *param_3 = 6;
        return true;
      case 3:
        *param_3 = 7;
        return true;
      case 4:
        *param_3 = 8;
        return true;
      case 5:
        *param_3 = 9;
        return true;
      case 6:
        *param_3 = 10;
        return true;
      case 7:
        *param_3 = 0xb;
        return true;
      case 8:
        *param_3 = 0xc;
        return true;
      case 9:
        *param_3 = 0xd;
        return true;
      case 10:
        *param_3 = 0;
        return true;
      case 0xb:
        *param_3 = 1;
        return true;
      case 0xc:
        *param_3 = 2;
        return true;
      case 0xd:
        *param_3 = 0xe;
        return true;
      case 0xe:
        *param_3 = 0xf;
        return true;
      case 0xf:
        *param_3 = 3;
        return true;
      default:
        *param_3 = 0x58;
        return true;
      }
    case 0x37:
      bVar2 = FUN_10002335(param_1,&local_10);
      *param_3 = local_10 & 0xff;
      return bVar2;
    case 0x38:
      uVar1 = FUN_1000c2a3(*(undefined4 *)(param_1 + 0x264),(short)*(undefined4 *)(param_1 + 0x270))
      ;
      *param_3 = uVar1;
      return true;
    case 0x3f:
      uVar1 = FUN_10001eae(param_1);
      *param_3 = uVar1;
      return true;
    case 0x40:
      (**(code **)(param_1 + 0x170))(param_1,&local_10);
      *param_3 = local_10;
      return true;
    case 0x42:
      (**(code **)(param_1 + 0x18c))(param_1,&local_10);
      *param_3 = local_10;
      return true;
    }
  }
  else if (param_2 < 99) {
    if (param_2 == 0x62) {
      bVar2 = DAT_10022f84 == 1;
      if (bVar2) {
        *param_3 = 0;
      }
      else {
        uVar1 = DeviceIoControl(*(HANDLE *)(param_1 + 0x1e4),0xc3506548,(LPVOID)0x0,0,(LPVOID)0x0,0,
                                local_c,(LPOVERLAPPED)0x0);
        *param_3 = uVar1;
      }
      return !bVar2;
    }
    switch(param_2) {
    case 0x4b:
      (**(code **)(param_1 + 0x178))(param_1,&local_10);
      *param_3 = local_10;
      return true;
    case 0x4c:
      (**(code **)(param_1 + 0x174))(param_1,&local_10);
      *param_3 = local_10;
      return true;
    case 0x4e:
      (**(code **)(param_1 + 0x194))(param_1,&local_10);
      *param_3 = local_10;
      return true;
    case 0x51:
      if (*(int *)(param_1 + 0x1e4) != 0) {
        (**(code **)(param_1 + 0x19c))(param_1,&local_10);
        *param_3 = local_10;
        return true;
      }
      *param_3 = 0;
      return true;
    case 0x53:
      *param_3 = DAT_10022864;
      return true;
    case 0x55:
      uVar1 = FUN_100086ba(param_1);
      *param_3 = uVar1;
      return true;
    }
  }
  else if (param_2 == 3000) {
    *param_3 = DAT_100228b0;
    return true;
  }
  return false;
}



/* ================================================================
 * Function: FUN_10006ffd
 * Address:  10006ffd
 * ================================================================ */

undefined4 FUN_10006ffd(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 local_c;
  
  iVar1 = param_3;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_10002266(param_1,param_2 + -1 + iVar1);
    uVar2 = FUN_10002266(param_1,param_2 + -1 + iVar1);
    local_c = (byte)uVar2;
    uVar2 = FUN_10002266(param_1,param_2 + -1 + iVar1);
    if (local_c != (byte)uVar2) {
      DAT_100228b0 = DAT_100228b0 + 1;
      uVar3 = FUN_10002266(param_1,param_2 + -1 + iVar1);
      if ((byte)uVar3 == (byte)uVar2) {
        local_c = (byte)uVar3;
      }
    }
    if (param_4 == 0) {
      local_c = local_c & 0xfe;
    }
    else if (param_4 == 1) {
      local_c = local_c | 1;
    }
    FUN_100021f4(param_1,CONCAT31((int3)((uint)iVar1 >> 8),local_c),param_2 + -1 + iVar1);
    param_2 = param_2 + -1;
  }
  return 1;
}



/* ================================================================
 * Function: FUN_1000710e
 * Address:  1000710e
 * ================================================================ */

undefined4
FUN_1000710e(int param_1,short param_2,uint param_3,uint param_4,undefined4 param_5,
            undefined1 param_6)

{
  undefined4 in_EAX;
  
  FUN_100014f9(param_1,param_2,param_3,param_4,CONCAT31((int3)((uint)in_EAX >> 8),param_6));
  return 1;
}



/* ================================================================
 * Function: FUN_1000713c
 * Address:  1000713c
 * ================================================================ */

int FUN_1000713c(int param_1,short param_2,uint *param_3,uint *param_4,undefined1 *param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100016dc(param_1,param_2,param_3,param_4,param_5);
  return (int)(short)uVar1;
}



/* ================================================================
 * Function: FUN_10007170
 * Address:  10007170
 * ================================================================ */

undefined4 FUN_10007170(int *param_1,int *param_2,int *param_3,char *param_4)

{
  short sVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  undefined4 local_8;
  
  local_10 = 0;
  sVar1 = FUN_1000582e();
  if (sVar1 != 0) {
    sVar1 = FUN_10005a5d();
    if (sVar1 == 0) {
      *param_1 = 0;
    }
    else {
      *param_1 = local_8;
    }
    sVar1 = FUN_10005a5d();
    if (sVar1 == 0) {
      *param_2 = 0;
    }
    else {
      *param_2 = local_8;
    }
    sVar1 = FUN_10005a5d();
    if (sVar1 == 0) {
      *param_3 = 0;
    }
    else {
      *param_3 = local_8;
    }
    sVar1 = FUN_100059d7();
    if (sVar1 == 0) {
      *param_4 = '\0';
    }
    else {
      *param_4 = local_c;
    }
    if ((((*param_3 == 0) || (*param_2 == 0)) || (*param_1 == 0)) || (*param_4 == '\0')) {
      local_14 = 0;
    }
    else {
      local_14 = 1;
    }
    local_10 = local_14;
  }
  return local_10;
}



/* ================================================================
 * Function: FUN_100072bb
 * Address:  100072bb
 * ================================================================ */

bool FUN_100072bb(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined1 *param_4,
                 undefined4 *param_5,undefined1 *param_6,undefined1 *param_7,int param_8)

{
  uint uVar1;
  bool bVar2;
  
  if (param_8 == 0) {
    param_8 = 1;
  }
  uVar1 = param_8 - 1;
  bVar2 = uVar1 < DAT_10022864;
  if (bVar2) {
    *param_1 = *(undefined4 *)(&DAT_10022da0 + uVar1 * 0x18);
    *param_2 = *(undefined4 *)(&DAT_10022da4 + uVar1 * 0x18);
    *param_3 = *(undefined4 *)(&DAT_10022da8 + uVar1 * 0x18);
    *param_4 = (&DAT_10022dac)[uVar1 * 0x18];
    *param_5 = *(undefined4 *)(&DAT_10022db0 + uVar1 * 0x18);
    *param_6 = (&DAT_10022db4)[uVar1 * 0x18];
    *param_7 = (&DAT_10022db5)[uVar1 * 0x18];
  }
  return bVar2;
}



/* ================================================================
 * Function: FUN_1000737b
 * Address:  1000737b
 * ================================================================ */

undefined4 FUN_1000737b(void)

{
  return DAT_10022864;
}



/* ================================================================
 * Function: FUN_10007385
 * Address:  10007385
 * ================================================================ */

undefined2 FUN_10007385(undefined2 param_1,ushort *param_2)

{
  undefined2 local_8;
  
  local_8 = 1;
  switch(param_1) {
  case 1:
    *param_2 = (ushort)DAT_10022864;
    break;
  case 2:
    *param_2 = (ushort)DAT_1002286a;
    break;
  case 3:
    *param_2 = DAT_10022868;
    break;
  case 4:
    *param_2 = (ushort)DAT_1002286b;
    break;
  case 5:
    *param_2 = DAT_100228ac;
    break;
  default:
    local_8 = 0;
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_10007421
 * Address:  10007421
 * ================================================================ */

int FUN_10007421(void)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  uint local_c;
  
  bVar3 = true;
  uVar1 = FUN_10005730(&DAT_1002286a,&DAT_10022868,&DAT_1002286b);
  DAT_100228ac = (short)uVar1;
  if (DAT_100228ac != 0) {
    DAT_10022864 = 0;
    local_c = 0;
    while ((local_c < 0x10 && (bVar3))) {
      iVar2 = FUN_10007170((int *)(&DAT_10022da0 + local_c * 0x18),
                           (int *)(&DAT_10022da4 + local_c * 0x18),
                           (int *)(&DAT_10022da8 + local_c * 0x18),&DAT_10022dac + local_c * 0x18);
      bVar3 = iVar2 != 0;
      if (bVar3) {
        DAT_10022864 = DAT_10022864 + 1;
      }
      local_c = local_c + 1;
    }
  }
  return DAT_10022864;
}



/* ================================================================
 * Function: FUN_10007522
 * Address:  10007522
 * ================================================================ */

void FUN_10007522(int param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6,
                 uint *param_7,uint *param_8,uint *param_9,uint *param_10)

{
  FUN_10005bde(param_1,*(int *)(param_1 + 0x260),*(undefined4 *)(param_1 + 0x264),
               *(int *)(param_1 + 0x268),(int)*(short *)(param_1 + 0x1e0),param_2,param_3,param_4,
               param_5,param_6,param_7,param_8,param_9,param_10);
  return;
}



/* ================================================================
 * Function: FUN_1000757f
 * Address:  1000757f
 * ================================================================ */

short FUN_1000757f(int param_1,int param_2,int param_3)

{
  short sVar1;
  
  sVar1 = FUN_100023c7(param_1,param_2,param_3);
  return sVar1;
}



/* ================================================================
 * Function: FUN_100075a8
 * Address:  100075a8
 * ================================================================ */

short FUN_100075a8(int param_1,int param_2,int param_3)

{
  short sVar1;
  
  sVar1 = FUN_1000246d(param_1,param_2,param_3);
  return sVar1;
}



/* ================================================================
 * Function: FUN_100075d1
 * Address:  100075d1
 * ================================================================ */

BOOL FUN_100075d1(HANDLE param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  BOOL BVar1;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  DWORD local_8;
  
  local_c = param_6 + -1;
  local_1c = param_2;
  local_18 = param_3;
  local_14 = param_4;
  local_10 = param_5;
  BVar1 = DeviceIoControl(param_1,0x9006,&local_1c,0x14,(LPVOID)0x0,0,&local_8,(LPOVERLAPPED)0x0);
  return BVar1;
}



/* ================================================================
 * Function: FUN_1000762a
 * Address:  1000762a
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_1000762a(int param_1)

{
  BOOL BVar1;
  undefined2 local_28;
  DWORD local_20 [3];
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  undefined4 local_8;
  
  local_20[1] = 0xc3506400;
  BVar1 = DeviceIoControl(*(HANDLE *)(param_1 + 0x1e4),0xc3506400,(LPVOID)0x0,0,local_20 + 2,0x14,
                          local_20,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    local_28 = 0;
  }
  else {
    if (local_20[0] == 0x14) {
      _DAT_10022da0 = local_20[2];
      _DAT_10022da4 = local_14;
      _DAT_10022da8 = local_10;
      DAT_10022dac = local_c;
      *(undefined4 *)(param_1 + 0x270) = local_8;
      if (*(int *)(param_1 + 0x270) != 0) {
        *(undefined4 *)(param_1 + 0x270) = 3;
      }
      DAT_10022864 = 1;
    }
    local_28 = 1;
  }
  return local_28;
}



/* ================================================================
 * Function: FUN_100076e8
 * Address:  100076e8
 * ================================================================ */

bool FUN_100076e8(int param_1,undefined4 param_2,undefined4 *param_3)

{
  bool local_8;
  
  switch(param_2) {
  case 0x1e:
    if (*(int *)(param_1 + 0x1d8) == 1) {
      (**(code **)(param_1 + 0x30))(param_1,1);
    }
    else {
      (**(code **)(param_1 + 0x30))(param_1,*(undefined4 *)(param_1 + 0x1b8));
    }
    *param_3 = 1;
    param_3[1] = 9;
    *(double *)(param_3 + 2) = (double)*(uint *)(param_1 + 0x260);
    *(double *)(param_3 + 4) = (double)*(uint *)(param_1 + 0x260);
    *(double *)(param_3 + 6) = (double)*(uint *)(param_1 + 0x260);
    param_3[10] = 0;
    param_3[0xb] = 0;
    *(double *)(param_3 + 8) = (double)*(uint *)(param_1 + 0x260);
    param_3[0xc] = 1;
    local_8 = true;
    break;
  case 0x1f:
    if (*(int *)(param_1 + 0x1d8) == 1) {
      (**(code **)(param_1 + 0x30))(param_1,1);
    }
    else {
      (**(code **)(param_1 + 0x30))(param_1,*(undefined4 *)(param_1 + 0x1b8));
    }
    *param_3 = 1;
    param_3[1] = 9;
    *(double *)(param_3 + 2) = (double)*(uint *)(param_1 + 0x264);
    *(double *)(param_3 + 4) = (double)*(uint *)(param_1 + 0x264);
    *(double *)(param_3 + 6) = (double)*(uint *)(param_1 + 0x264);
    param_3[10] = 0;
    param_3[0xb] = 0;
    *(double *)(param_3 + 8) = (double)*(uint *)(param_1 + 0x264);
    param_3[0xc] = 1;
    local_8 = true;
    break;
  case 0x20:
    if (*(int *)(param_1 + 0x1d8) == 1) {
      (**(code **)(param_1 + 0x30))(param_1,1);
    }
    else {
      (**(code **)(param_1 + 0x30))(param_1,*(undefined4 *)(param_1 + 0x1b8));
    }
    *param_3 = 1;
    param_3[1] = 9;
    *(double *)(param_3 + 2) = (double)*(uint *)(param_1 + 0x268);
    *(double *)(param_3 + 4) = (double)*(uint *)(param_1 + 0x268);
    *(double *)(param_3 + 6) = (double)*(uint *)(param_1 + 0x268);
    param_3[10] = 0;
    param_3[0xb] = 0;
    *(double *)(param_3 + 8) = (double)*(uint *)(param_1 + 0x268);
    param_3[0xc] = 1;
    local_8 = true;
    break;
  default:
    local_8 = false;
    break;
  case 0x50:
    if (*(int *)(param_1 + 0x1d8) == 1) {
      (**(code **)(param_1 + 0x30))(param_1,1);
    }
    else {
      (**(code **)(param_1 + 0x30))(param_1,*(undefined4 *)(param_1 + 0x1b8));
    }
    *param_3 = 1;
    param_3[1] = 9;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    param_3[5] = 0x40700000;
    *(double *)(param_3 + 6) = (double)(int)*(short *)(param_1 + 0x1e0);
    param_3[10] = 0;
    param_3[0xb] = 0x3ff00000;
    *(double *)(param_3 + 8) = (double)(int)*(short *)(param_1 + 0x1e0);
    param_3[0xc] = 1;
    local_8 = *(int *)(param_1 + 0x1f8) != 0x14;
    break;
  case 0x61:
    *param_3 = 1;
    param_3[1] = 1;
    param_3[2] = 0;
    param_3[3] = 0x3ff00000;
    *(double *)(param_3 + 4) = (double)DAT_10022864;
    param_3[6] = 0;
    param_3[7] = 0x3ff00000;
    param_3[10] = 0;
    param_3[0xb] = 0x3ff00000;
    *(double *)(param_3 + 8) = (double)*(int *)(param_1 + 0x1b8);
    param_3[0xc] = 1;
    local_8 = true;
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_10007b4e
 * Address:  10007b4e
 * ================================================================ */

undefined4 FUN_10007b4e(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined4 local_8;
  
  switch(param_2) {
  case 0x1e:
    *param_4 = *(int *)(param_1 + 0x260);
    local_8 = 1;
    break;
  case 0x1f:
    *param_4 = *(int *)(param_1 + 0x264);
    local_8 = 1;
    break;
  case 0x20:
    *param_4 = *(int *)(param_1 + 0x268);
    local_8 = 1;
    break;
  default:
    local_8 = 0;
    break;
  case 0x50:
    *param_4 = (int)*(short *)(param_1 + 0x1e0);
    local_8 = 1;
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_10007c36
 * Address:  10007c36
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_10007c36(void)

{
  undefined4 uVar1;
  int iVar2;
  _OSVERSIONINFOA local_9c;
  undefined4 *local_8;
  
  local_9c.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_9c);
  _DAT_100228b8 = 1;
  local_8 = FUN_1000102f(0x1508);
  FUN_100099a3(local_8);
  local_8[0x76] = 1;
  *local_8 = FUN_100062d8;
  local_8[1] = FUN_100062e4;
  local_8[4] = FUN_10006392;
  local_8[5] = FUN_10006405;
  local_8[6] = FUN_10006462;
  local_8[0xb] = FUN_100064be;
  local_8[0x12] = FUN_100064ef;
  local_8[0x3d] = FUN_10006a23;
  local_8[0x3e] = FUN_10006a46;
  local_8[0x45] = FUN_10006a69;
  local_8[0x46] = FUN_10006c18;
  local_8[0x4d] = FUN_10006ffd;
  local_8[0x6a] = FUN_100075a8;
  local_8[0x69] = FUN_1000757f;
  local_8[0xc] = FUN_100065e1;
  local_8[3] = FUN_100065ba;
  local_8[0xe] = FUN_100065a6;
  local_8[2] = FUN_100086a5;
  local_8[10] = FUN_10006a0f;
  local_8[9] = FUN_100069fb;
  local_8[0x4e] = FUN_1000710e;
  local_8[0x4f] = FUN_1000713c;
  local_8[0x4a] = FUN_100076e8;
  local_8[0x4c] = FUN_10007b4e;
  local_8[0x68] = FUN_10007522;
  *(undefined2 *)((int)local_8 + 0x29e) = 0;
  *(undefined2 *)((int)local_8 + 0x2a2) = 4;
  *(undefined2 *)((int)local_8 + 0x29a) = 0x10;
  *(undefined2 *)(local_8 + 0xa6) = 8;
  *(undefined2 *)(local_8 + 0x9d) = 0x18;
  *(undefined2 *)(local_8 + 0xa9) = 0x1c;
  *(undefined2 *)(local_8 + 0xa8) = 0;
  local_8[0xaa] = 4;
  local_8[0xab] = 8;
  *(undefined2 *)(local_8 + 0xa7) = 0x10;
  *(undefined2 *)(local_8 + 0x9f) = 4;
  *(undefined2 *)((int)local_8 + 0x276) = 0x14;
  *(undefined2 *)(local_8 + 0x9e) = 0x18;
  *(undefined2 *)((int)local_8 + 0x27e) = 0x10;
  *(undefined2 *)(local_8 + 0xa0) = 0x14;
  *(undefined2 *)((int)local_8 + 0x282) = 0x18;
  local_8[0xa5] = 0x17;
  local_8[0x6c] = 2;
  local_8[0x76] = 1;
  *(undefined2 *)((int)local_8 + 0x28e) = 10;
  local_8[0x7e] = 0x13;
  *(undefined2 *)(local_8 + 0xa3) = 0;
  DAT_10022d8c = 0;
  local_8[0x6e] = 1;
  if (local_9c.dwPlatformId == 1) {
    local_8[0x59] = FUN_10014b60;
    local_8[0x5a] = FUN_10014ba7;
    local_8[0x5b] = FUN_10014bf1;
    local_8[0x5c] = FUN_10014c33;
    local_8[0x5d] = FUN_10014c8a;
    local_8[0x5e] = FUN_10014ce1;
    local_8[0x5f] = FUN_10014d38;
    local_8[0x60] = FUN_10014c2a;
    local_8[0x61] = FUN_10014d6d;
    local_8[0x62] = FUN_10014dc4;
    local_8[99] = FUN_10014df9;
    local_8[100] = FUN_10014e50;
    local_8[0x65] = FUN_10014e85;
    local_8[0x66] = FUN_10014edc;
    local_8[0x67] = FUN_10014f11;
    DAT_10022f84 = local_9c.dwPlatformId;
    uVar1 = (*(code *)local_8[0x5b])(local_8,s_____PIVXDPCI_VXD_1001f440);
    local_8[0x79] = uVar1;
    iVar2 = FUN_10007421();
    local_8[0x76] = iVar2;
  }
  else {
    local_8[0x59] = FUN_100128d0;
    local_8[0x5a] = FUN_100129c3;
    local_8[0x5b] = FUN_10012ae0;
    local_8[0x5c] = FUN_10012b1b;
    local_8[0x5d] = FUN_10012b57;
    local_8[0x5e] = FUN_10012b93;
    local_8[0x5f] = FUN_10012bcf;
    local_8[0x60] = FUN_10012b12;
    local_8[0x61] = FUN_10012c01;
    local_8[0x62] = FUN_10012c3d;
    local_8[99] = FUN_10012c6f;
    local_8[100] = FUN_10012cdc;
    local_8[0x65] = FUN_10012d0e;
    local_8[0x66] = FUN_10012d7b;
    local_8[0x67] = FUN_10012dad;
    DAT_10022f84 = local_9c.dwPlatformId;
    uVar1 = (*(code *)local_8[0x5b])(local_8,s_____pipcidev_1001f454);
    local_8[0x79] = uVar1;
    FUN_1000762a((int)local_8);
  }
  local_8[0x7a] = DAT_10022f84;
  return local_8;
}



/* ================================================================
 * Function: FUN_100080db
 * Address:  100080db
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_100080db(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  DAT_10022f84 = FUN_100087e4();
  _DAT_100228b8 = 1;
  puVar1 = FUN_1000102f(0x1508);
  FUN_100099a3(puVar1);
  puVar1[0x76] = 1;
  *puVar1 = FUN_100062d8;
  puVar1[1] = FUN_100062e4;
  puVar1[4] = FUN_10006392;
  puVar1[5] = FUN_10006405;
  puVar1[6] = FUN_10006462;
  puVar1[0xb] = FUN_100064be;
  puVar1[0x12] = FUN_100064ef;
  puVar1[0x3d] = FUN_10006a23;
  puVar1[0x3e] = FUN_10006a46;
  puVar1[0x45] = FUN_10006a69;
  puVar1[0x46] = FUN_10006c18;
  puVar1[0x4d] = FUN_10006ffd;
  puVar1[0x6a] = FUN_100075a8;
  puVar1[0x69] = FUN_1000757f;
  puVar1[0xc] = FUN_100065e1;
  puVar1[3] = FUN_100065ba;
  puVar1[0xe] = FUN_100065a6;
  puVar1[2] = FUN_100069ef;
  puVar1[10] = FUN_10006a0f;
  puVar1[9] = FUN_100069fb;
  puVar1[0x4e] = FUN_1000710e;
  puVar1[0x4f] = FUN_1000713c;
  puVar1[0x4a] = FUN_100076e8;
  puVar1[0x4c] = FUN_10007b4e;
  puVar1[0x68] = FUN_10007522;
  *(undefined2 *)((int)puVar1 + 0x29e) = 0;
  *(undefined2 *)((int)puVar1 + 0x2a2) = 4;
  *(undefined2 *)((int)puVar1 + 0x29a) = 0x10;
  *(undefined2 *)(puVar1 + 0xa6) = 8;
  *(undefined2 *)(puVar1 + 0x9d) = 0x18;
  *(undefined2 *)(puVar1 + 0xa9) = 0x1c;
  *(undefined2 *)(puVar1 + 0xa8) = 0;
  puVar1[0xaa] = 4;
  puVar1[0xab] = 8;
  *(undefined2 *)(puVar1 + 0xa7) = 0x10;
  *(undefined2 *)(puVar1 + 0x9f) = 4;
  *(undefined2 *)((int)puVar1 + 0x276) = 0x14;
  *(undefined2 *)(puVar1 + 0x9e) = 0x18;
  *(undefined2 *)((int)puVar1 + 0x27e) = 0x10;
  *(undefined2 *)(puVar1 + 0xa0) = 0x14;
  *(undefined2 *)((int)puVar1 + 0x282) = 0x18;
  puVar1[0xa5] = 0x17;
  puVar1[0x6c] = 2;
  puVar1[0x76] = 1;
  *(undefined2 *)((int)puVar1 + 0x28e) = 10;
  puVar1[0x7e] = 0x14;
  *(undefined2 *)(puVar1 + 0xa3) = 0;
  DAT_10022d8c = 0;
  puVar1[0x9c] = 0;
  puVar1[0x6e] = 1;
  puVar1[0x6b] = 0;
  switch(DAT_10022f84) {
  case 1:
    puVar1[0x59] = FUN_10014b60;
    puVar1[0x5a] = FUN_10014ba7;
    puVar1[0x5b] = FUN_10014bf1;
    puVar1[0x5c] = FUN_10014c33;
    puVar1[0x5d] = FUN_10014c8a;
    puVar1[0x5e] = FUN_10014ce1;
    puVar1[0x5f] = FUN_10014d38;
    puVar1[0x60] = FUN_10014c2a;
    puVar1[0x61] = FUN_10014d6d;
    puVar1[0x62] = FUN_10014dc4;
    puVar1[99] = FUN_10014df9;
    puVar1[100] = FUN_10014e50;
    puVar1[0x65] = FUN_10014e85;
    puVar1[0x66] = FUN_10014edc;
    puVar1[0x67] = FUN_10014f11;
    uVar3 = (*(code *)puVar1[0x5b])(puVar1,s_____PIVXDPCI_VXD_1001f464);
    puVar1[0x79] = uVar3;
    iVar2 = FUN_10007421();
    puVar1[0x76] = iVar2;
    break;
  case 2:
  case 4:
    puVar1[0x59] = FUN_100128d0;
    puVar1[0x5a] = FUN_100129c3;
    puVar1[0x5b] = FUN_10012ae0;
    puVar1[0x5c] = FUN_10012b1b;
    puVar1[0x5d] = FUN_10012b57;
    puVar1[0x5e] = FUN_10012b93;
    puVar1[0x5f] = FUN_10012bcf;
    puVar1[0x60] = FUN_10012b12;
    puVar1[0x61] = FUN_10012c01;
    puVar1[0x62] = FUN_10012c3d;
    puVar1[99] = FUN_10012c6f;
    puVar1[100] = FUN_10012cdc;
    puVar1[0x65] = FUN_10012d0e;
    puVar1[0x66] = FUN_10012d7b;
    puVar1[0x67] = FUN_10012dad;
    uVar3 = (*(code *)puVar1[0x5b])(puVar1,s_____pipci0_1001f488);
    puVar1[0x79] = uVar3;
    uVar4 = FUN_1000887b((int)puVar1,0);
    puVar1[0x76] = (int)(short)uVar4;
    CloseHandle((HANDLE)puVar1[0x79]);
    puVar1[0x79] = 0;
    break;
  case 3:
    puVar1[0x59] = FUN_100128d0;
    puVar1[0x5a] = FUN_100129c3;
    puVar1[0x5b] = FUN_10012ae0;
    puVar1[0x5c] = FUN_10012b1b;
    puVar1[0x5d] = FUN_10012b57;
    puVar1[0x5e] = FUN_10012b93;
    puVar1[0x5f] = FUN_10012bcf;
    puVar1[0x60] = FUN_10012b12;
    puVar1[0x61] = FUN_10012c01;
    puVar1[0x62] = FUN_10012c3d;
    puVar1[99] = FUN_10012c6f;
    puVar1[100] = FUN_10012cdc;
    puVar1[0x65] = FUN_10012d0e;
    puVar1[0x66] = FUN_10012d7b;
    puVar1[0x67] = FUN_10012dad;
    uVar3 = (*(code *)puVar1[0x5b])(puVar1,s_____pipcidev_1001f478);
    puVar1[0x79] = uVar3;
    FUN_1000762a((int)puVar1);
  }
  return puVar1;
}



/* ================================================================
 * Function: FUN_100086a5
 * Address:  100086a5
 * ================================================================ */

undefined4 FUN_100086a5(int param_1)

{
  FUN_1000970a(param_1);
  return 1;
}



/* ================================================================
 * Function: FUN_100086ba
 * Address:  100086ba
 * ================================================================ */

int FUN_100086ba(int param_1)

{
  int local_2b8;
  undefined1 local_2b4 [312];
  undefined4 local_17c;
  DWORD local_178;
  undefined1 local_174 [24];
  int local_15c;
  int local_158;
  int local_150;
  undefined1 local_144 [4];
  int local_140;
  int local_134;
  int local_130;
  int local_8;
  
  local_2b8 = 0;
  local_8 = 0;
  if (DAT_10022f84 == 1) {
    local_17c = 0;
    local_2b8 = DeviceIoControl(*(HANDLE *)(param_1 + 0x1e4),0x9005,local_2b4,0x13c,local_144,0x13c,
                                &local_178,(LPOVERLAPPED)0x0);
  }
  else if ((1 < DAT_10022f84) && (DAT_10022f84 < 5)) {
    local_2b8 = DeviceIoControl(*(HANDLE *)(param_1 + 0x1e4),0xc350644c,local_174,0x13c,&local_15c,
                                0x13c,&local_178,(LPOVERLAPPED)0x0);
    local_134 = local_158;
    local_130 = local_15c;
    local_140 = local_150;
  }
  if ((((local_134 != 0) && (local_130 != 0)) && (local_130 != -1)) && (local_2b8 != 0)) {
    local_8 = local_140 << 0xc;
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_100087e4
 * Address:  100087e4
 * ================================================================ */

undefined4 FUN_100087e4(void)

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
 * Function: FUN_1000887b
 * Address:  1000887b
 * ================================================================ */

uint FUN_1000887b(int param_1,int param_2)

{
  BOOL BVar1;
  undefined2 uVar2;
  undefined4 local_2c;
  DWORD local_24 [3];
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_2c = 1;
  local_24[1] = 0xc3506400;
  BVar1 = DeviceIoControl(*(HANDLE *)(param_1 + 0x1e4),0xc3506400,(LPVOID)0x0,0,local_24 + 2,0x18,
                          local_24,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    local_2c = 0;
    uVar2 = 0;
  }
  else {
    if (local_24[0] == 0x18) {
      *(DWORD *)(&DAT_10022da0 + param_2 * 0x18) = local_24[2];
      *(undefined4 *)(&DAT_10022da4 + param_2 * 0x18) = local_18;
      *(undefined4 *)(&DAT_10022da8 + param_2 * 0x18) = local_14;
      (&DAT_10022dac)[param_2 * 0x18] = local_10;
      *(undefined4 *)(param_1 + 0x270) = local_c;
      if (*(int *)(param_1 + 0x270) != 0) {
        *(undefined4 *)(param_1 + 0x270) = 3;
      }
      local_2c = local_8;
      local_24[0] = param_1;
    }
    uVar2 = (undefined2)(local_24[0] >> 0x10);
  }
  DAT_10022864 = local_2c;
  return CONCAT22(uVar2,(undefined2)local_2c);
}



/* ================================================================
 * Function: FUN_10008950
 * Address:  10008950
 * ================================================================ */

void FUN_10008950(int param_1)

{
  *(undefined2 *)(param_1 + 0x28c) = 0;
  *(undefined2 *)(param_1 + 0x256) = 0;
  FUN_1000c260(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x2a0),0,
               (short)*(undefined4 *)(param_1 + 0x270) + 2);
  *(ushort *)(param_1 + 0x256) = *(ushort *)(param_1 + 0x256) & 0xfffe;
  FUN_1000c260(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x2a0),
               (uint)*(ushort *)(param_1 + 0x256),(short)*(undefined4 *)(param_1 + 0x270) + 2);
  *(ushort *)(param_1 + 0x256) = *(ushort *)(param_1 + 0x256) | 1;
  FUN_1000c260(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x2a0),
               (uint)*(ushort *)(param_1 + 0x256),(short)*(undefined4 *)(param_1 + 0x270) + 2);
  FUN_1000c260(*(int *)(param_1 + 0x268) + *(int *)(param_1 + 0x2a8),0xff,
               (short)*(undefined4 *)(param_1 + 0x270) + 2);
  *(ushort *)(param_1 + 0x256) = *(ushort *)(param_1 + 0x256) & 0xffef;
  FUN_1000c260(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x2a0),
               (uint)*(ushort *)(param_1 + 0x256),(short)*(undefined4 *)(param_1 + 0x270) + 2);
  *(ushort *)(param_1 + 0x256) = *(ushort *)(param_1 + 0x256) | 4;
  FUN_1000c260(*(undefined4 *)(param_1 + 0x268),(uint)*(ushort *)(param_1 + 0x256),
               (short)*(undefined4 *)(param_1 + 0x270) + 2);
  FUN_10009149(param_1);
  FUN_1000c260(*(int *)(param_1 + 0x268) + *(int *)(param_1 + 0x2ac),
               *(undefined4 *)(param_1 + 0x294),(short)*(undefined4 *)(param_1 + 0x270) + 2);
  *(ushort *)(param_1 + 0x256) = *(ushort *)(param_1 + 0x256) | 0x80;
  FUN_1000c260(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x2a0),
               (uint)*(ushort *)(param_1 + 0x256),(short)*(undefined4 *)(param_1 + 0x270) + 2);
  *(ushort *)(param_1 + 0x256) = *(ushort *)(param_1 + 0x256) | 0x10;
  FUN_1000c260(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x2a0),
               (uint)*(ushort *)(param_1 + 0x256),(short)*(undefined4 *)(param_1 + 0x270) + 2);
  *(undefined2 *)(param_1 + 0x288) = 0;
  *(undefined2 *)(param_1 + 0x28a) = 0;
  return;
}



/* ================================================================
 * Function: FUN_10008bdc
 * Address:  10008bdc
 * ================================================================ */

void FUN_10008bdc(int param_1)

{
  *(undefined2 *)(param_1 + 0x256) = 0;
  FUN_1000c260(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x2a0),
               (uint)*(ushort *)(param_1 + 0x256),(short)*(undefined4 *)(param_1 + 0x270) + 2);
  return;
}



/* ================================================================
 * Function: FUN_10008c26
 * Address:  10008c26
 * ================================================================ */

void FUN_10008c26(int param_1)

{
  FUN_10009149(param_1);
  FUN_1000c260(*(int *)(param_1 + 0x268) + *(int *)(param_1 + 0x2a8),0xff,
               (short)*(undefined4 *)(param_1 + 0x270) + 2);
  return;
}



/* ================================================================
 * Function: FUN_10008c60
 * Address:  10008c60
 * ================================================================ */

uint FUN_10008c60(int param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 400;
  *(undefined2 *)(param_1 + 0x288) = 0;
  *param_3 = 1;
  FUN_1000c260(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x29c),0x100,
               (short)*(undefined4 *)(param_1 + 0x270) + 2);
  FUN_1000c260(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x29c),param_2 & 0xff,
               (short)*(undefined4 *)(param_1 + 0x270) + 2);
  FUN_1000c260(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x29c),param_2 >> 8,
               (short)*(undefined4 *)(param_1 + 0x270) + 2);
  FUN_1000c260(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x29c),0x300,
               (short)*(undefined4 *)(param_1 + 0x270) + 2);
  FUN_1000c260(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x29c),0,
               (short)*(undefined4 *)(param_1 + 0x270) + 2);
  FUN_1000c260(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x29c),0,
               (short)*(undefined4 *)(param_1 + 0x270) + 2);
  while (*(short *)(param_1 + 0x288) == 0) {
    uVar1 = FUN_10008e5f(param_1);
    if ((uVar1 != 0) || (local_8 == 0)) break;
    local_8 = local_8 + -1;
  }
  if (*(short *)(param_1 + 0x288) == 0) {
    uVar1 = FUN_10008e5f(param_1);
    if (uVar1 == 0) {
      if (local_8 == 0) {
        local_c = 0;
        *param_3 = 0;
      }
    }
    else {
      uVar1 = FUN_1000c2a3(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x29a),
                           (short)*(undefined4 *)(param_1 + 0x270) + 2);
      local_c = uVar1 & 0xffff;
    }
  }
  else {
    local_c = (uint)*(ushort *)(param_1 + 0x284);
    *(undefined2 *)(param_1 + 0x288) = 0;
  }
  return local_c;
}



/* ================================================================
 * Function: FUN_10008e5f
 * Address:  10008e5f
 * ================================================================ */

uint FUN_10008e5f(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_1000c2a3(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x2a4),
                       (short)*(undefined4 *)(param_1 + 0x270) + 2);
  return uVar1 & 4;
}



/* ================================================================
 * Function: FUN_10008ea9
 * Address:  10008ea9
 * ================================================================ */

void FUN_10008ea9(int param_1,uint param_2,uint param_3)

{
  FUN_1000c260(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x29c),0x100,
               (short)*(undefined4 *)(param_1 + 0x270) + 2);
  FUN_1000c260(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x29c),param_2 & 0xff,
               (short)*(undefined4 *)(param_1 + 0x270) + 2);
  FUN_1000c260(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x29c),param_2 >> 8,
               (short)*(undefined4 *)(param_1 + 0x270) + 2);
  FUN_1000c260(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x29c),0x200,
               (short)*(undefined4 *)(param_1 + 0x270) + 2);
  FUN_1000c260(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x29c),param_3 & 0xff,
               (short)*(undefined4 *)(param_1 + 0x270) + 2);
  FUN_1000c260(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x29c),param_3 >> 8,
               (short)*(undefined4 *)(param_1 + 0x270) + 2);
  return;
}



/* ================================================================
 * Function: FUN_10008fd8
 * Address:  10008fd8
 * ================================================================ */

void FUN_10008fd8(int param_1,undefined4 param_2,uint param_3)

{
  FUN_1000c260(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x29c),param_3 & 0xff,
               (short)*(undefined4 *)(param_1 + 0x270) + 2);
  return;
}



/* ================================================================
 * Function: FUN_10009013
 * Address:  10009013
 * ================================================================ */

void FUN_10009013(int param_1,uint param_2)

{
  FUN_1000c260(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x29c),0x100,
               (short)*(undefined4 *)(param_1 + 0x270) + 2);
  FUN_1000c260(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x29c),param_2 & 0xff,
               (short)*(undefined4 *)(param_1 + 0x270) + 2);
  FUN_1000c260(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x29c),param_2 >> 8,
               (short)*(undefined4 *)(param_1 + 0x270) + 2);
  return;
}



/* ================================================================
 * Function: FUN_100090ae
 * Address:  100090ae
 * ================================================================ */

void FUN_100090ae(int param_1,uint param_2)

{
  FUN_1000c260(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x29c),0x200,
               (short)*(undefined4 *)(param_1 + 0x270) + 2);
  FUN_1000c260(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x29c),param_2 & 0xff,
               (short)*(undefined4 *)(param_1 + 0x270) + 2);
  FUN_1000c260(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x29c),param_2 >> 8,
               (short)*(undefined4 *)(param_1 + 0x270) + 2);
  return;
}



/* ================================================================
 * Function: FUN_10009149
 * Address:  10009149
 * ================================================================ */

void FUN_10009149(int param_1)

{
  FUN_1000c260(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x2a0),
               *(ushort *)(param_1 + 0x256) | 0x200,(short)*(undefined4 *)(param_1 + 0x270) + 2);
  return;
}



/* ================================================================
 * Function: FUN_1000918a
 * Address:  1000918a
 * ================================================================ */

void FUN_1000918a(int param_1)

{
  *(ushort *)(param_1 + 0x256) = *(ushort *)(param_1 + 0x256) & 0xffef;
  FUN_1000c260(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x2a0),
               (uint)*(ushort *)(param_1 + 0x256),(short)*(undefined4 *)(param_1 + 0x270) + 2);
  *(ushort *)(param_1 + 0x256) = *(ushort *)(param_1 + 0x256) | 0x10;
  FUN_1000c260(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x2a0),
               (uint)*(ushort *)(param_1 + 0x256),(short)*(undefined4 *)(param_1 + 0x270) + 2);
  return;
}



/* ================================================================
 * Function: FUN_1000922e
 * Address:  1000922e
 * ================================================================ */

void FUN_1000922e(int param_1)

{
  *(undefined2 *)(param_1 + 0x28c) = 0;
  *(undefined2 *)(param_1 + 0x256) = 0;
  FUN_1000c260(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x2a0),0,
               (short)*(undefined4 *)(param_1 + 0x270) + 2);
  *(ushort *)(param_1 + 0x256) = *(ushort *)(param_1 + 0x256) & 0xfffe;
  FUN_1000c260(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x2a0),
               (uint)*(ushort *)(param_1 + 0x256),(short)*(undefined4 *)(param_1 + 0x270) + 2);
  *(ushort *)(param_1 + 0x256) = *(ushort *)(param_1 + 0x256) | 1;
  FUN_1000c260(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x2a0),
               (uint)*(ushort *)(param_1 + 0x256),(short)*(undefined4 *)(param_1 + 0x270) + 2);
  FUN_1000c260(*(int *)(param_1 + 0x268) + *(int *)(param_1 + 0x2a8),0xff,
               (short)*(undefined4 *)(param_1 + 0x270) + 2);
  *(ushort *)(param_1 + 0x256) = *(ushort *)(param_1 + 0x256) & 0xffef;
  FUN_1000c260(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x2a0),
               (uint)*(ushort *)(param_1 + 0x256),(short)*(undefined4 *)(param_1 + 0x270) + 2);
  *(ushort *)(param_1 + 0x256) = *(ushort *)(param_1 + 0x256) | 4;
  FUN_1000c260(*(undefined4 *)(param_1 + 0x268),(uint)*(ushort *)(param_1 + 0x256),
               (short)*(undefined4 *)(param_1 + 0x270) + 2);
  FUN_10009149(param_1);
  FUN_1000c260(*(int *)(param_1 + 0x268) + *(int *)(param_1 + 0x2ac),
               *(undefined4 *)(param_1 + 0x294),(short)*(undefined4 *)(param_1 + 0x270) + 2);
  *(ushort *)(param_1 + 0x256) = *(ushort *)(param_1 + 0x256) | 0x80;
  FUN_1000c260(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x2a0),
               (uint)*(ushort *)(param_1 + 0x256),(short)*(undefined4 *)(param_1 + 0x270) + 2);
  *(ushort *)(param_1 + 0x256) = *(ushort *)(param_1 + 0x256) | 0x10;
  FUN_1000c260(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x2a0),
               (uint)*(ushort *)(param_1 + 0x256),(short)*(undefined4 *)(param_1 + 0x270) + 2);
  *(ushort *)(param_1 + 0x256) = *(ushort *)(param_1 + 0x256) | 0x4b4;
  FUN_1000c260(*(int *)(param_1 + 0x268) + (uint)*(ushort *)(param_1 + 0x2a0),
               (uint)*(ushort *)(param_1 + 0x256),(short)*(undefined4 *)(param_1 + 0x270) + 2);
  *(undefined2 *)(param_1 + 0x288) = 0;
  *(undefined2 *)(param_1 + 0x28a) = 0;
  return;
}



/* ================================================================
 * Function: FUN_1000950a
 * Address:  1000950a
 * ================================================================ */

bool FUN_1000950a(int param_1,uint param_2,uint param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = FUN_1000973e(param_1);
  bVar1 = CONCAT31(extraout_var,bVar1) == 0;
  if (bVar1) {
    MessageBoxA((HWND)0x0,s_I_O_Error_in_Fibre_Channel_Write_1001f4b8,
                s_I_O_Error_in_Fibre_Channel_Write_1001f494,0);
    FUN_1000970a(param_1);
  }
  else {
    FUN_1000c260(*(int *)(param_1 + 0x268) + 0x1c,param_2 | 0xbc010000,
                 (short)*(undefined4 *)(param_1 + 0x270) + 2);
    FUN_1000c260(*(int *)(param_1 + 0x268) + 0x1c,param_3 | 0xbc020000,
                 (short)*(undefined4 *)(param_1 + 0x270) + 2);
  }
  return !bVar1;
}



/* ================================================================
 * Function: FUN_100095a2
 * Address:  100095a2
 * ================================================================ */

uint FUN_100095a2(int param_1,uint param_2)

{
  bool bVar1;
  ushort uVar2;
  undefined3 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  uint local_c;
  int local_8;
  
  local_8 = 400;
  *(undefined2 *)(param_1 + 0x288) = 0;
  bVar1 = FUN_1000973e(param_1);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    MessageBoxA((HWND)0x0,s_I_O_Error_in_Fibre_Channel_Read_1001f4fc,
                s_I_O_Error_in_Fibre_Channel_Read_1001f4dc,0);
    FUN_1000970a(param_1);
  }
  else {
    FUN_1000c260(*(int *)(param_1 + 0x268) + 0x1c,param_2 | 0xbc010000,
                 (short)*(undefined4 *)(param_1 + 0x270) + 2);
    FUN_1000c260(*(int *)(param_1 + 0x268) + 0x1c,0xbc030000,
                 (short)*(undefined4 *)(param_1 + 0x270) + 2);
  }
  while( true ) {
    uVar2 = FUN_100096c7(param_1);
    if (((CONCAT22(extraout_var_00,uVar2) != 0) || (local_8 == 0)) ||
       (*(short *)(param_1 + 0x288) != 0)) break;
    local_8 = local_8 + -1;
  }
  if (*(short *)(param_1 + 0x288) == 0) {
    uVar2 = FUN_100096c7(param_1);
    if (CONCAT22(extraout_var_01,uVar2) != 0) {
      local_c = FUN_1000c2a3(*(int *)(param_1 + 0x268) + 0x10,
                             (short)*(undefined4 *)(param_1 + 0x270) + 1);
    }
  }
  else {
    local_c = (uint)*(ushort *)(param_1 + 0x284);
    *(undefined2 *)(param_1 + 0x288) = 0;
  }
  return local_c;
}



/* ================================================================
 * Function: FUN_100096c7
 * Address:  100096c7
 * ================================================================ */

ushort FUN_100096c7(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_1000c2a3(*(int *)(param_1 + 0x268) + 0x1c,(short)*(undefined4 *)(param_1 + 0x270) + 1)
  ;
  return (ushort)uVar1 & 2;
}



/* ================================================================
 * Function: FUN_1000970a
 * Address:  1000970a
 * ================================================================ */

void FUN_1000970a(int param_1)

{
  FUN_1000c260(*(int *)(param_1 + 0x268) + 0x1c,0xbc040000,
               (short)*(undefined4 *)(param_1 + 0x270) + 2);
  FUN_1000918a(param_1);
  return;
}



/* ================================================================
 * Function: FUN_1000973e
 * Address:  1000973e
 * ================================================================ */

bool FUN_1000973e(int param_1)

{
  DWORD DVar1;
  uint uVar2;
  DWORD DVar3;
  
  DVar1 = GetTickCount();
  do {
    uVar2 = FUN_1000c2a3(*(int *)(param_1 + 0x268) + 0x1c,
                         (short)*(undefined4 *)(param_1 + 0x270) + 1);
    if ((uVar2 & 0x80) == 0) break;
    DVar3 = GetTickCount();
  } while (DVar3 - DVar1 < 400);
  return (uVar2 & 0x80) == 0;
}



/* ================================================================
 * Function: FUN_100097d0
 * Address:  100097d0
 * ================================================================ */

/* WARNING: Removing unreachable block (ram,0x1000990b) */
/* WARNING: Removing unreachable block (ram,0x10009914) */
/* WARNING: Removing unreachable block (ram,0x10009920) */
/* WARNING: Removing unreachable block (ram,0x1000992e) */

undefined4 * FUN_100097d0(undefined4 param_1,int param_2)

{
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  switch(param_1) {
  case 1:
    local_8 = FUN_10005580();
    break;
  case 2:
    local_8 = FUN_100136b0();
    break;
  case 3:
    local_8 = FUN_10013cd9();
    break;
  case 4:
    local_8 = (undefined4 *)0x0;
    break;
  case 5:
    local_8 = FUN_10004860();
    break;
  case 6:
    local_8 = FUN_100118e0();
    break;
  case 8:
    local_8 = FUN_1001408c();
    break;
  case 0xb:
    local_8 = FUN_10005d00();
    break;
  case 0xf:
    local_8 = FUN_10002e40();
    break;
  case 0x10:
    local_8 = FUN_10002fa0();
    break;
  case 0x11:
    local_8 = FUN_100118e0();
    break;
  case 0x12:
    local_8 = FUN_10007c36();
    break;
  case 0x13:
    local_8 = FUN_100080db();
    break;
  case 0x14:
    local_8 = FUN_10004068();
    break;
  case 0x15:
    local_8 = FUN_1000c444(param_2);
    break;
  case 0x16:
    local_8 = FUN_10002587();
    break;
  case 0x17:
    local_8 = FUN_1000a970(param_2);
    break;
  case 0x18:
    local_8 = FUN_1000ddd0(param_2);
  }
  if (local_8 != (undefined4 *)0x0) {
    local_8[0x75] = param_1;
    local_8[0x7d] = 0;
  }
  DAT_10022d70 = local_8;
  return local_8;
}



/* ================================================================
 * Function: FUN_100099a3
 * Address:  100099a3
 * ================================================================ */

void FUN_100099a3(undefined4 *param_1)

{
  *param_1 = FUN_10009ea1;
  param_1[1] = FUN_10009ead;
  param_1[2] = FUN_10009e5d;
  param_1[3] = FUN_10009e51;
  param_1[4] = FUN_10009eb9;
  param_1[5] = FUN_10009ee9;
  param_1[6] = FUN_10009efd;
  param_1[7] = FUN_1000a93f;
  param_1[8] = FUN_1000a953;
  param_1[9] = FUN_10009f11;
  param_1[10] = FUN_10009f25;
  param_1[0xb] = FUN_10009e69;
  param_1[0x12] = FUN_10009e7d;
  param_1[0xc] = FUN_10009e89;
  param_1[0xd] = FUN_10009ec5;
  param_1[0xe] = FUN_10009ed5;
  param_1[0xf] = FUN_10009f39;
  param_1[0x13] = FUN_1000a041;
  param_1[0x21] = FUN_10009f59;
  param_1[0x22] = FUN_10009f65;
  param_1[0x23] = FUN_10009f71;
  param_1[0x24] = FUN_10009f7d;
  param_1[0x25] = FUN_10009f89;
  param_1[0x26] = FUN_10009f95;
  param_1[0x27] = FUN_10009fa1;
  param_1[0x28] = FUN_10009fad;
  param_1[0x29] = FUN_10009fb9;
  param_1[0x2a] = FUN_10009fc5;
  param_1[0x2b] = FUN_10009fd1;
  param_1[0x2c] = FUN_10009fdd;
  param_1[0x2d] = FUN_10009fe9;
  param_1[0x2e] = FUN_10009ff5;
  param_1[0x10] = FUN_10009f49;
  param_1[0x2f] = FUN_1000a029;
  param_1[0x30] = FUN_1000a035;
  param_1[0x1f] = FUN_1000a001;
  param_1[0x20] = FUN_1000a019;
  param_1[0x31] = FUN_1000a051;
  param_1[0x14] = FUN_10009e29;
  param_1[0x15] = FUN_10009e41;
  param_1[0x11] = FUN_1000a065;
  param_1[0x16] = FUN_1000a071;
  param_1[0x17] = FUN_1000a097;
  param_1[0x18] = FUN_1000a0c4;
  param_1[0x19] = FUN_1000a0ea;
  param_1[0x1a] = FUN_1000a15a;
  param_1[0x1c] = FUN_1000a1c6;
  param_1[0x1b] = FUN_1000a1d2;
  param_1[0x6a] = FUN_1000a87d;
  param_1[0x69] = FUN_1000a869;
  param_1[0x3d] = FUN_1000a246;
  param_1[0x3e] = FUN_1000a24f;
  param_1[0x45] = FUN_1000a762;
  param_1[0x46] = FUN_1000a785;
  param_1[0x3f] = FUN_1000a1de;
  param_1[0x40] = FUN_1000a214;
  param_1[0x47] = FUN_1000a258;
  param_1[0x48] = FUN_1000a486;
  param_1[0x53] = FUN_1000a7f0;
  param_1[0x54] = FUN_1000a7fc;
  param_1[0x55] = FUN_1000a803;
  param_1[0x56] = FUN_1000a80a;
  param_1[0x4d] = FUN_1000a7a8;
  param_1[0x68] = FUN_1000a811;
  param_1[6] = FUN_100045a0;
  param_1[5] = FUN_100045ac;
  param_1[0x5b] = FUN_100045b8;
  param_1[0x5c] = FUN_100045ca;
  param_1[0x5d] = FUN_100045df;
  param_1[0x5e] = FUN_100045f4;
  param_1[0x5f] = FUN_10004609;
  param_1[0x60] = FUN_100045c1;
  param_1[0x61] = FUN_10004615;
  param_1[0x62] = FUN_1000462a;
  param_1[99] = FUN_10004636;
  param_1[100] = FUN_1000464b;
  param_1[0x65] = FUN_10004657;
  param_1[0x66] = FUN_1000466c;
  param_1[0x67] = FUN_10004678;
  param_1[0x49] = FUN_1000a891;
  param_1[0x4a] = FUN_1000a8d2;
  param_1[0x4b] = FUN_1000a8e6;
  param_1[0x4c] = FUN_1000a92b;
  param_1[0x4e] = FUN_1000a7b4;
  param_1[0x4f] = FUN_1000a7c0;
  param_1[0x50] = FUN_1000a7cc;
  param_1[0x51] = FUN_1000a7d8;
  param_1[0x52] = FUN_1000a7e4;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  return;
}



/* ================================================================
 * Function: FUN_10009e29
 * Address:  10009e29
 * ================================================================ */

undefined4 FUN_10009e29(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1dc) = param_2;
  return 1;
}



/* ================================================================
 * Function: FUN_10009e41
 * Address:  10009e41
 * ================================================================ */

undefined4 FUN_10009e41(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1dc);
}



/* ================================================================
 * Function: FUN_10009e51
 * Address:  10009e51
 * ================================================================ */

undefined4 FUN_10009e51(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_10009e5d
 * Address:  10009e5d
 * ================================================================ */

undefined4 FUN_10009e5d(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_10009e69
 * Address:  10009e69
 * ================================================================ */

undefined4 FUN_10009e69(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_10009e7d
 * Address:  10009e7d
 * ================================================================ */

undefined4 FUN_10009e7d(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_10009e89
 * Address:  10009e89
 * ================================================================ */

undefined4 FUN_10009e89(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1ac) = param_2;
  return 1;
}



/* ================================================================
 * Function: FUN_10009ea1
 * Address:  10009ea1
 * ================================================================ */

char * FUN_10009ea1(void)

{
  return s_GENERIC_PORT_1001f51c;
}



/* ================================================================
 * Function: FUN_10009ead
 * Address:  10009ead
 * ================================================================ */

undefined4 FUN_10009ead(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_10009eb9
 * Address:  10009eb9
 * ================================================================ */

undefined4 FUN_10009eb9(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_10009ec5
 * Address:  10009ec5
 * ================================================================ */

undefined4 FUN_10009ec5(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1ac);
}



/* ================================================================
 * Function: FUN_10009ed5
 * Address:  10009ed5
 * ================================================================ */

undefined4 FUN_10009ed5(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_10009ee9
 * Address:  10009ee9
 * ================================================================ */

undefined4 FUN_10009ee9(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_10009efd
 * Address:  10009efd
 * ================================================================ */

undefined4 FUN_10009efd(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_10009f11
 * Address:  10009f11
 * ================================================================ */

undefined4 FUN_10009f11(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_10009f25
 * Address:  10009f25
 * ================================================================ */

undefined4 FUN_10009f25(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_10009f39
 * Address:  10009f39
 * ================================================================ */

undefined4 FUN_10009f39(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1b0);
}



/* ================================================================
 * Function: FUN_10009f49
 * Address:  10009f49
 * ================================================================ */

undefined4 FUN_10009f49(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1b4);
}



/* ================================================================
 * Function: FUN_10009f59
 * Address:  10009f59
 * ================================================================ */

undefined4 FUN_10009f59(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_10009f65
 * Address:  10009f65
 * ================================================================ */

undefined4 FUN_10009f65(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_10009f71
 * Address:  10009f71
 * ================================================================ */

undefined4 FUN_10009f71(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_10009f7d
 * Address:  10009f7d
 * ================================================================ */

undefined4 FUN_10009f7d(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_10009f89
 * Address:  10009f89
 * ================================================================ */

undefined4 FUN_10009f89(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_10009f95
 * Address:  10009f95
 * ================================================================ */

undefined4 FUN_10009f95(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_10009fa1
 * Address:  10009fa1
 * ================================================================ */

undefined4 FUN_10009fa1(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_10009fad
 * Address:  10009fad
 * ================================================================ */

undefined4 FUN_10009fad(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_10009fb9
 * Address:  10009fb9
 * ================================================================ */

undefined4 FUN_10009fb9(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_10009fc5
 * Address:  10009fc5
 * ================================================================ */

undefined4 FUN_10009fc5(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_10009fd1
 * Address:  10009fd1
 * ================================================================ */

undefined4 FUN_10009fd1(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_10009fdd
 * Address:  10009fdd
 * ================================================================ */

undefined4 FUN_10009fdd(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_10009fe9
 * Address:  10009fe9
 * ================================================================ */

undefined4 FUN_10009fe9(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_10009ff5
 * Address:  10009ff5
 * ================================================================ */

undefined4 FUN_10009ff5(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_1000a001
 * Address:  1000a001
 * ================================================================ */

undefined4 FUN_1000a001(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1b8) = param_2;
  return 1;
}



/* ================================================================
 * Function: FUN_1000a019
 * Address:  1000a019
 * ================================================================ */

undefined4 FUN_1000a019(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1b8);
}



/* ================================================================
 * Function: FUN_1000a029
 * Address:  1000a029
 * ================================================================ */

undefined4 FUN_1000a029(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_1000a035
 * Address:  1000a035
 * ================================================================ */

undefined4 FUN_1000a035(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_1000a041
 * Address:  1000a041
 * ================================================================ */

undefined4 FUN_1000a041(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1d8);
}



/* ================================================================
 * Function: FUN_1000a051
 * Address:  1000a051
 * ================================================================ */

undefined4 FUN_1000a051(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_1000a065
 * Address:  1000a065
 * ================================================================ */

undefined4 FUN_1000a065(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_1000a071
 * Address:  1000a071
 * ================================================================ */

undefined4 FUN_1000a071(int param_1)

{
  undefined4 local_8;
  
  local_8 = 0;
  if (param_1 != 0) {
    local_8 = *(undefined4 *)(param_1 + 0x1d4);
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_1000a097
 * Address:  1000a097
 * ================================================================ */

bool FUN_1000a097(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x1d0) = param_2;
  }
  return param_1 != 0;
}



/* ================================================================
 * Function: FUN_1000a0c4
 * Address:  1000a0c4
 * ================================================================ */

undefined4 FUN_1000a0c4(int param_1)

{
  undefined4 local_8;
  
  local_8 = 0;
  if (param_1 != 0) {
    local_8 = *(undefined4 *)(param_1 + 0x1d0);
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_1000a0ea
 * Address:  1000a0ea
 * ================================================================ */

undefined4 FUN_1000a0ea(int param_1,char *param_2)

{
  size_t sVar1;
  undefined4 local_8;
  
  local_8 = 0;
  if (param_1 != 0) {
    if (param_2 == (char *)0x0) {
      *(undefined4 *)(param_1 + 0x1b0) = 5;
    }
    else {
      sVar1 = _strlen(param_2);
      if (sVar1 < 0x14) {
        _strncpy((char *)(param_1 + 0x1bc),param_2,0x14);
        local_8 = 1;
      }
      else {
        *(undefined4 *)(param_1 + 0x1b0) = 5;
      }
    }
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_1000a15a
 * Address:  1000a15a
 * ================================================================ */

char * FUN_1000a15a(int param_1,char *param_2)

{
  undefined4 local_8;
  
  local_8 = (char *)0x0;
  if (param_1 != 0) {
    if (param_2 == (char *)0x0) {
      *(undefined4 *)(param_1 + 0x1b0) = 5;
    }
    else if (*(char *)(param_1 + 0x1bc) == '\0') {
      *(undefined4 *)(param_1 + 0x1b0) = 5;
    }
    else {
      _strncpy(param_2,(char *)(param_1 + 0x1bc),0x14);
      local_8 = param_2;
    }
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_1000a1c6
 * Address:  1000a1c6
 * ================================================================ */

undefined4 FUN_1000a1c6(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_1000a1d2
 * Address:  1000a1d2
 * ================================================================ */

undefined4 FUN_1000a1d2(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_1000a1de
 * Address:  1000a1de
 * ================================================================ */

bool __thiscall
FUN_1000a1de(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1 + 0xf4))(param_1,param_2,param_3,param_4,this);
  return iVar1 != 0;
}



/* ================================================================
 * Function: FUN_1000a214
 * Address:  1000a214
 * ================================================================ */

bool __thiscall FUN_1000a214(void *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1 + 0xf8))(param_1,param_2,param_3,this);
  return iVar1 != 0;
}



/* ================================================================
 * Function: FUN_1000a246
 * Address:  1000a246
 * ================================================================ */

undefined4 FUN_1000a246(void)

{
  return 0;
}



/* ================================================================
 * Function: FUN_1000a24f
 * Address:  1000a24f
 * ================================================================ */

undefined4 FUN_1000a24f(void)

{
  return 0;
}



/* ================================================================
 * Function: FUN_1000a258
 * Address:  1000a258
 * ================================================================ */

undefined4 FUN_1000a258(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_8;
  
  local_8 = 1;
  iVar1 = (**(code **)(param_1 + 0x114))(param_1,param_2,param_3);
  if (iVar1 == 0) {
    switch(param_2) {
    case 4:
      *(undefined2 *)(param_1 + 0x2a0) = (undefined2)param_3;
      break;
    case 5:
      *(undefined4 *)(param_1 + 0x224) = param_3;
      break;
    default:
      local_8 = 0;
      break;
    case 7:
      *(undefined2 *)(param_1 + 0x288) = (undefined2)param_3;
      break;
    case 0xb:
      local_8 = (**(code **)(param_1 + 0x84))(param_1,param_3);
      break;
    case 0xd:
      *(undefined2 *)(param_1 + 0x286) = (undefined2)param_3;
      break;
    case 0xe:
      *(undefined4 *)(param_1 + 0x2a8) = param_3;
      break;
    case 0xf:
      *(undefined2 *)(param_1 + 0x2a2) = (undefined2)param_3;
      break;
    case 0x11:
      *(undefined2 *)(param_1 + 0x28e) = (undefined2)param_3;
      break;
    case 0x12:
      local_8 = (**(code **)(param_1 + 0x8c))(param_1,param_3);
      break;
    case 0x16:
      *(undefined2 *)(param_1 + 0x29a) = (undefined2)param_3;
      break;
    case 0x17:
      *(undefined2 *)(param_1 + 0x284) = (undefined2)param_3;
      break;
    case 0x18:
      *(undefined2 *)(param_1 + 0x298) = (undefined2)param_3;
      break;
    case 0x1c:
      *(undefined2 *)(param_1 + 0x290) = (undefined2)param_3;
      break;
    case 0x1d:
      *(undefined2 *)(param_1 + 0x28c) = (undefined2)param_3;
      break;
    case 0x1e:
      (**(code **)(param_1 + 0x30))(param_1,param_3);
      break;
    case 0x35:
      *(undefined2 *)(param_1 + 0x1e0) = (undefined2)param_3;
      break;
    case 0x50:
      *(undefined4 *)(param_1 + 0x1fc) = param_3;
    }
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_1000a486
 * Address:  1000a486
 * ================================================================ */

undefined4 __thiscall FUN_1000a486(void *this,int param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (**(code **)(param_1 + 0x118))(param_1,param_2,param_3,this);
  if (iVar1 == 0) {
    switch(param_2) {
    case 4:
      *param_3 = (uint)*(ushort *)(param_1 + 0x2a0);
      break;
    case 5:
      *param_3 = *(uint *)(param_1 + 0x224);
      break;
    default:
      return 0;
    case 7:
      *param_3 = (uint)*(ushort *)(param_1 + 0x288);
      break;
    case 0xb:
      uVar2 = (**(code **)(param_1 + 0x88))(param_1);
      *param_3 = uVar2;
      break;
    case 0xc:
      uVar2 = (**(code **)(param_1 + 0xbc))(param_1);
      *param_3 = uVar2;
      break;
    case 0xe:
      *param_3 = *(uint *)(param_1 + 0x2a8);
      break;
    case 0xf:
      *param_3 = (uint)*(ushort *)(param_1 + 0x2a2);
      break;
    case 0x11:
      *param_3 = (uint)*(ushort *)(param_1 + 0x28e);
      break;
    case 0x12:
      uVar2 = (**(code **)(param_1 + 0x90))(param_1);
      *param_3 = uVar2;
      break;
    case 0x13:
      uVar2 = (**(code **)(param_1 + 0xc0))(param_1);
      *param_3 = uVar2;
      break;
    case 0x15:
      uVar2 = (**(code **)(param_1 + 0x58))(param_1);
      *param_3 = uVar2;
      break;
    case 0x16:
      *param_3 = (uint)*(ushort *)(param_1 + 0x29a);
      break;
    case 0x17:
      *param_3 = (uint)*(ushort *)(param_1 + 0x284);
      break;
    case 0x18:
      *param_3 = (uint)*(ushort *)(param_1 + 0x298);
      break;
    case 0x1a:
      uVar2 = (**(code **)(param_1 + 0x3c))(param_1);
      *param_3 = uVar2;
      break;
    case 0x1c:
      *param_3 = (uint)*(ushort *)(param_1 + 0x290);
      break;
    case 0x1d:
      *param_3 = (uint)*(ushort *)(param_1 + 0x28c);
      break;
    case 0x1e:
      uVar2 = (**(code **)(param_1 + 0x34))(param_1);
      *param_3 = uVar2;
      break;
    case 0x21:
      *param_3 = (uint)*(ushort *)(param_1 + 0x256);
      break;
    case 0x35:
      *param_3 = (int)*(short *)(param_1 + 0x1e0);
      break;
    case 0x4f:
      *param_3 = *(uint *)(param_1 + 0x1e4);
      break;
    case 0x6c:
      *param_3 = *(uint *)(param_1 + 0x1b8);
    }
  }
  return 1;
}



/* ================================================================
 * Function: FUN_1000a762
 * Address:  1000a762
 * ================================================================ */

undefined4 FUN_1000a762(void)

{
  return 0;
}



/* ================================================================
 * Function: FUN_1000a785
 * Address:  1000a785
 * ================================================================ */

undefined4 FUN_1000a785(void)

{
  return 0;
}



/* ================================================================
 * Function: FUN_1000a7a8
 * Address:  1000a7a8
 * ================================================================ */

undefined4 FUN_1000a7a8(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_1000a7b4
 * Address:  1000a7b4
 * ================================================================ */

undefined4 FUN_1000a7b4(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_1000a7c0
 * Address:  1000a7c0
 * ================================================================ */

undefined4 FUN_1000a7c0(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_1000a7cc
 * Address:  1000a7cc
 * ================================================================ */

undefined4 FUN_1000a7cc(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_1000a7d8
 * Address:  1000a7d8
 * ================================================================ */

undefined4 FUN_1000a7d8(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_1000a7e4
 * Address:  1000a7e4
 * ================================================================ */

undefined4 FUN_1000a7e4(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_1000a7f0
 * Address:  1000a7f0
 * ================================================================ */

undefined4 FUN_1000a7f0(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_1000a7fc
 * Address:  1000a7fc
 * ================================================================ */

void FUN_1000a7fc(void)

{
  return;
}



/* ================================================================
 * Function: FUN_1000a803
 * Address:  1000a803
 * ================================================================ */

void FUN_1000a803(void)

{
  return;
}



/* ================================================================
 * Function: FUN_1000a80a
 * Address:  1000a80a
 * ================================================================ */

void FUN_1000a80a(void)

{
  return;
}



/* ================================================================
 * Function: FUN_1000a811
 * Address:  1000a811
 * ================================================================ */

void FUN_1000a811(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,
                 undefined4 *param_9,undefined4 *param_10)

{
  *param_2 = 0;
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  *param_6 = 0;
  *param_7 = 0;
  *param_8 = 0;
  *param_9 = 0;
  *param_10 = 0;
  return;
}



/* ================================================================
 * Function: FUN_1000a869
 * Address:  1000a869
 * ================================================================ */

undefined2 FUN_1000a869(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_1000a87d
 * Address:  1000a87d
 * ================================================================ */

undefined2 FUN_1000a87d(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_1000a891
 * Address:  1000a891
 * ================================================================ */

int FUN_1000a891(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_8;
  
  local_8 = (**(code **)(param_1 + 0x128))(param_1,param_2,param_3);
  if (local_8 == 0) {
    local_8 = 0;
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_1000a8d2
 * Address:  1000a8d2
 * ================================================================ */

undefined4 FUN_1000a8d2(void)

{
  return 0;
}



/* ================================================================
 * Function: FUN_1000a8e6
 * Address:  1000a8e6
 * ================================================================ */

int FUN_1000a8e6(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_8;
  
  local_8 = (**(code **)(param_1 + 0x130))(param_1,param_2,param_3,param_4);
  if (local_8 == 0) {
    local_8 = 0;
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_1000a92b
 * Address:  1000a92b
 * ================================================================ */

undefined4 FUN_1000a92b(void)

{
  return 0;
}



/* ================================================================
 * Function: FUN_1000a93f
 * Address:  1000a93f
 * ================================================================ */

undefined4 FUN_1000a93f(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_1000a953
 * Address:  1000a953
 * ================================================================ */

undefined4 FUN_1000a953(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_1000a970
 * Address:  1000a970
 * ================================================================ */

undefined4 * FUN_1000a970(int param_1)

{
  int iVar1;
  HANDLE pvVar2;
  undefined4 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  DWORD local_8;
  
  local_8 = 0;
  local_18 = FUN_1000102f(0x1508);
  _memset(local_18,0,0x1508);
  FUN_100099a3(local_18);
  *local_18 = FUN_1000abaf;
  local_18[1] = FUN_1000abbb;
  local_18[2] = FUN_1000ac6d;
  local_18[4] = FUN_1000ac81;
  local_18[5] = FUN_1000ad4c;
  local_18[6] = FUN_1000ae6a;
  local_18[0xb] = FUN_1000ae6a;
  local_18[0xc] = FUN_1000aff8;
  local_18[0x11] = FUN_1000b018;
  local_18[0x12] = FUN_1000b42d;
  local_18[0x31] = FUN_1000b66f;
  local_18[0x2f] = FUN_1000b683;
  local_18[0x45] = FUN_1000b697;
  local_18[0x46] = FUN_1000b82f;
  local_18[0x76] = 0;
  local_18[0x79] = 0;
  *(undefined1 *)((int)local_18 + 0x365) = 0;
  local_18[0xdb] = 0;
  *(undefined1 *)((int)local_18 + 0x4ab) = 0;
  iVar1 = FUN_1000b973((int)local_18);
  pvVar2 = CreateFileA((LPCSTR)((int)local_18 + (param_1 + -1) * 0xff + 0x510),0xc0000000,3,
                       (LPSECURITY_ATTRIBUTES)0x0,3,0x40000000,(HANDLE)0x0);
  local_18[0x79] = pvVar2;
  if (local_18[0x79] == -1) {
    local_18[0x76] = 0;
  }
  else {
    DAT_100228bc = DAT_100228bc + 1;
    local_18[0x76] = local_18[0x76] + 1;
  }
  if (local_18[0x76] == 0) {
    (*(code *)local_18[4])(local_18,iVar1);
    local_18 = (undefined4 *)0x0;
  }
  else {
    pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
    local_18[0x540] = pvVar2;
    pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
    local_18[0x541] = pvVar2;
    local_18[0xe3] = 0;
    local_14 = local_18[0x540];
    local_10 = local_18[0x541];
    DeviceIoControl((HANDLE)local_18[0x79],0x8000201c,&local_14,0xc,(LPVOID)0x0,0,&local_8,
                    (LPOVERLAPPED)0x0);
    FUN_1000c1ca((int)local_18);
  }
  return local_18;
}



/* ================================================================
 * Function: FUN_1000abaf
 * Address:  1000abaf
 * ================================================================ */

char * FUN_1000abaf(void)

{
  return s_PI1394_1001f52c;
}



/* ================================================================
 * Function: FUN_1000abbb
 * Address:  1000abbb
 * ================================================================ */

undefined4 FUN_1000abbb(int param_1)

{
  uint uVar1;
  
  if ((((*(int *)(param_1 + 0x38c) != *(int *)(param_1 + 0x374)) && (*(int *)(param_1 + 0x374) != 0)
       ) || (*(int *)(param_1 + 0x37c) != *(int *)(param_1 + 0x390))) ||
     (*(char *)(param_1 + 0x365) == '\0')) {
    if ((*(int *)(param_1 + 0x37c) == 0) || (*(int *)(param_1 + 0x374) == 0)) {
      return 0;
    }
    uVar1 = *(uint *)(param_1 + 0x37c) / *(uint *)(param_1 + 0x374);
    if (uVar1 == 0) {
      return 0;
    }
    FUN_1000c07a(param_1,uVar1);
    FUN_1000bbf8(param_1);
    *(undefined1 *)(param_1 + 0x365) = 1;
  }
  return 1;
}



/* ================================================================
 * Function: FUN_1000ac6d
 * Address:  1000ac6d
 * ================================================================ */

undefined4 FUN_1000ac6d(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_1000ac81
 * Address:  1000ac81
 * ================================================================ */

undefined4 FUN_1000ac81(undefined *param_1)

{
  DWORD local_8;
  
  local_8 = 0;
  if (0 < DAT_100228bc) {
    DAT_100228bc = DAT_100228bc + -1;
  }
  if (param_1[0x4ab] == '\x01') {
    DeviceIoControl(*(HANDLE *)(param_1 + 0x1e4),0x80002010,(LPVOID)0x0,0,(LPVOID)0x0,0,&local_8,
                    (LPOVERLAPPED)0x0);
    param_1[0x4ab] = 0;
  }
  DeviceIoControl(*(HANDLE *)(param_1 + 0x1e4),0x80002044,(LPVOID)0x0,0,(LPVOID)0x0,0,&local_8,
                  (LPOVERLAPPED)0x0);
  CloseHandle(*(HANDLE *)(param_1 + 0x1e4));
  CloseHandle(*(HANDLE *)(param_1 + 0x1500));
  CloseHandle(*(HANDLE *)(param_1 + 0x1504));
  FUN_1000104b(param_1);
  return 1;
}



/* ================================================================
 * Function: FUN_1000ad4c
 * Address:  1000ad4c
 * ================================================================ */

uint FUN_1000ad4c(int param_1,uint param_2)

{
  DWORD DVar1;
  BOOL BVar2;
  uint local_34;
  short local_30;
  _OVERLAPPED local_2c;
  undefined4 local_18;
  undefined4 local_14;
  DWORD local_10;
  DWORD local_c;
  uint local_8;
  
  local_10 = 0;
  local_18 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  _memset(&local_2c,0,0x14);
  local_2c.hEvent = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
  local_34 = param_2;
  local_30 = (-(ushort)(param_2 < 0x90000000) & 1) - 1;
  DeviceIoControl(*(HANDLE *)(param_1 + 0x1e4),0x80006002,&local_34,8,&local_8,4,&local_10,&local_2c
                 );
  DVar1 = GetLastError();
  if (DVar1 == 0x3e5) {
    BVar2 = GetOverlappedResult(*(HANDLE *)(param_1 + 0x1e4),&local_2c,&local_10,1);
    if (BVar2 == 0) {
      local_c = GetLastError();
      CancelIo(*(HANDLE *)(param_1 + 0x1e4));
      local_10 = 0;
    }
    else {
      local_8 = FUN_1000bb9c(local_8);
    }
  }
  else {
    CancelIo(*(HANDLE *)(param_1 + 0x1e4));
    local_10 = 0;
  }
  CloseHandle(local_2c.hEvent);
  return local_8;
}



/* ================================================================
 * Function: FUN_1000ae6a
 * Address:  1000ae6a
 * ================================================================ */

DWORD FUN_1000ae6a(int param_1,uint param_2,uint param_3)

{
  DWORD DVar1;
  BOOL BVar2;
  uint local_38;
  short local_34;
  undefined2 uStack_32;
  undefined4 local_30;
  undefined4 local_2c;
  _OVERLAPPED local_28;
  DWORD local_14;
  DWORD local_10;
  int local_c;
  DWORD local_8;
  
  local_30 = 0;
  local_14 = 0;
  local_2c = 0;
  local_10 = 0;
  _memset(&local_28,0,0x14);
  local_28.hEvent = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
  local_c = FUN_1000bb9c(param_3);
  local_38 = param_2;
  _local_34 = CONCAT22(uStack_32,(-(ushort)(param_2 < 0x90000000) & 1) - 1);
  if (param_2 == 0x4c8) {
    FUN_1000bbf8(param_1);
    FUN_1000c1ca(param_1);
  }
  DeviceIoControl(*(HANDLE *)(param_1 + 0x1e4),0x8000a005,&local_38,8,&local_c,4,&local_14,&local_28
                 );
  DVar1 = GetLastError();
  if (DVar1 == 0x3e5) {
    BVar2 = GetOverlappedResult(*(HANDLE *)(param_1 + 0x1e4),&local_28,&local_8,1);
    if (BVar2 == 0) {
      local_10 = GetLastError();
      CancelIo(*(HANDLE *)(param_1 + 0x1e4));
      local_8 = 0;
    }
  }
  else {
    CancelIo(*(HANDLE *)(param_1 + 0x1e4));
    local_8 = 0;
  }
  ResetEvent(local_28.hEvent);
  if ((local_38 == 0x4c0) && (local_8 != 0)) {
    DeviceIoControl(*(HANDLE *)(param_1 + 0x1e4),0x80002038,&local_38,8,&local_38,8,&local_14,
                    &local_28);
  }
  CloseHandle(local_28.hEvent);
  return local_8;
}



/* ================================================================
 * Function: FUN_1000aff8
 * Address:  1000aff8
 * ================================================================ */

undefined4 FUN_1000aff8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1ac) = param_2;
  return 1;
}



/* ================================================================
 * Function: FUN_1000b018
 * Address:  1000b018
 * ================================================================ */

DWORD FUN_1000b018(int param_1,uint param_2,undefined4 *param_3,size_t param_4)

{
  undefined1 uVar1;
  uint uVar2;
  DWORD DVar3;
  BOOL BVar4;
  uint local_60;
  uint local_54;
  short local_50;
  undefined4 *local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  _OVERLAPPED local_38;
  undefined1 local_24;
  ULONG_PTR local_20;
  HANDLE local_1c;
  undefined4 local_18;
  DWORD local_14;
  DWORD local_10;
  DWORD local_c;
  size_t local_8;
  
  local_44 = local_44 & 0xffffff00;
  local_14 = 0;
  local_20 = 0;
  local_3c = 0;
  local_40 = 0;
  local_10 = 0;
  local_8 = param_4;
  _memset(&local_38,0,0x14);
  local_38.hEvent = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
  if (param_2 == 0) {
    local_1c = *(HANDLE *)(param_1 + 0x1500);
    local_18 = *(undefined4 *)(param_1 + 0x1504);
    local_c = WaitForMultipleObjects(2,&local_1c,0,0);
    if (local_c == 0) {
      ResetEvent(*(HANDLE *)(param_1 + 0x1500));
      local_14 = *(DWORD *)(param_1 + 0x374);
      uVar2 = *(uint *)(param_1 + 0x378);
      local_48 = uVar2 & 0xff00fffb;
      FUN_1000ae6a(param_1,0x7f8,local_48);
      local_60 = (uVar2 & 0xff0000) >> 0x10;
      for (local_3c = 0; local_3c < 8; local_3c = local_3c + 1) {
        if ((local_60 & 1) != 0) {
          local_44 = CONCAT31(local_44._1_3_,(char)local_44 + '\x01');
        }
        local_60 = local_60 >> 1;
      }
      for (local_40 = 0; local_40 < (local_44 & 0xff); local_40 = local_40 + 1) {
        for (local_3c = 0; local_3c < *(uint *)(param_1 + 0x374); local_3c = local_3c + 2) {
          local_24 = *(undefined1 *)(*(int *)(param_1 + 0x368) + local_3c);
          *(undefined1 *)(*(int *)(param_1 + 0x368) + local_3c) =
               *(undefined1 *)(*(int *)(param_1 + 0x368) + 1 + local_3c);
          *(undefined1 *)(*(int *)(param_1 + 0x368) + 1 + local_3c) = local_24;
        }
        *(int *)(param_1 + 0x368) = *(int *)(param_1 + 0x368) + *(int *)(param_1 + 0x374);
        if (*(uint *)(param_1 + 0x37c) <=
            (uint)(*(int *)(param_1 + 0x368) - *(int *)(param_1 + 0x36c))) {
          *(undefined4 *)(param_1 + 0x368) = *(undefined4 *)(param_1 + 0x36c);
        }
      }
      local_14 = *(int *)(param_1 + 0x374) * (local_44 & 0xff);
    }
    else if (local_c == 1) {
      CancelIo(*(HANDLE *)(param_1 + 0x1e4));
      ResetEvent(*(HANDLE *)(param_1 + 0x1504));
    }
    CloseHandle(local_38.hEvent);
  }
  else {
    for (; local_8 % 4 != 0; local_8 = local_8 + 1) {
    }
    local_4c = FUN_1000102f(local_8);
    _memset(param_3,0,param_4);
    local_54 = param_2;
    local_50 = (-(ushort)(param_2 < 0x90000000) & 1) - 1;
    DeviceIoControl(*(HANDLE *)(param_1 + 0x1e4),0x80006032,&local_54,8,local_4c,local_8,&local_14,
                    &local_38);
    DVar3 = GetLastError();
    if (DVar3 == 0x3e5) {
      BVar4 = GetOverlappedResult(*(HANDLE *)(param_1 + 0x1e4),&local_38,&local_14,1);
      if (BVar4 == 0) {
        local_10 = GetLastError();
        CancelIo(*(HANDLE *)(param_1 + 0x1e4));
        local_14 = 0;
      }
      else {
        for (local_3c = 0; local_3c < local_8; local_3c = local_3c + 4) {
          uVar1 = *(undefined1 *)((int)local_4c + local_3c);
          *(undefined1 *)((int)local_4c + local_3c) = *(undefined1 *)((int)local_4c + local_3c + 3);
          *(undefined1 *)((int)local_4c + local_3c + 3) = uVar1;
          local_24 = *(undefined1 *)((int)local_4c + local_3c + 1);
          *(undefined1 *)((int)local_4c + local_3c + 1) =
               *(undefined1 *)((int)local_4c + local_3c + 2);
          *(undefined1 *)((int)local_4c + local_3c + 2) = local_24;
        }
        FUN_10015960(param_3,local_4c,param_4);
        local_20 = local_38.InternalHigh;
      }
    }
    else {
      CancelIo(*(HANDLE *)(param_1 + 0x1e4));
      local_14 = 0;
    }
    CloseHandle(local_38.hEvent);
    FUN_1000104b((undefined *)local_4c);
    local_14 = (DWORD)(0 < (int)local_20);
  }
  return local_14;
}



/* ================================================================
 * Function: FUN_1000b42d
 * Address:  1000b42d
 * ================================================================ */

uint FUN_1000b42d(int param_1,uint param_2,undefined4 *param_3,uint param_4)

{
  int iVar1;
  DWORD DVar2;
  BOOL BVar3;
  DWORD local_50;
  uint local_48;
  uint local_44;
  undefined4 *local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  _OVERLAPPED local_30;
  DWORD local_1c;
  DWORD local_18;
  DWORD local_14;
  DWORD local_10;
  uint local_c;
  uint local_8;
  
  local_14 = 0;
  local_38 = 0;
  local_1c = 0;
  local_34 = 0;
  local_c = 0;
  local_40 = (undefined4 *)0x0;
  for (local_8 = param_4; local_8 % 4 != 0; local_8 = local_8 + 1) {
  }
  local_40 = FUN_1000102f(local_8 << 2);
  _memset(local_40,0,local_8 << 2);
  _memset(&local_30,0,0x14);
  local_30.hEvent = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
  local_1c = local_8;
  local_44 = CONCAT22(local_44._2_2_,(-(ushort)(param_2 < 0x90000000) & 1) - 1);
  local_48 = param_2;
  FUN_10015960(local_40,param_3,param_4);
  if (((local_48 < 0x10000) || (0x11fff < local_48)) || ((local_44 & 0xffff) != 0)) {
    for (local_3c = 0; local_3c < (int)(local_8 >> 2); local_3c = local_3c + 1) {
      iVar1 = FUN_1000bb9c(local_40[local_3c]);
      local_40[local_3c] = iVar1;
    }
  }
  local_18 = local_1c;
  while (local_18 != 0) {
    if ((int)local_18 < 0x201) {
      local_50 = local_18;
    }
    else {
      local_50 = 0x200;
    }
    DeviceIoControl(*(HANDLE *)(param_1 + 0x1e4),0x8000a029,&local_48,8,local_40 + local_34,local_50
                    ,&local_14,&local_30);
    DVar2 = GetLastError();
    if (DVar2 == 0x3e5) {
      BVar3 = GetOverlappedResult(*(HANDLE *)(param_1 + 0x1e4),&local_30,&local_14,1);
      if (BVar3 == 0) {
        local_10 = GetLastError();
        CancelIo(*(HANDLE *)(param_1 + 0x1e4));
        local_c = 0;
        local_18 = 0;
        local_14 = 0;
        local_48 = 0;
      }
      else {
        local_18 = local_18 - local_14;
        local_34 = local_34 + local_14;
        local_48 = local_48 + local_14;
      }
    }
    else {
      CancelIo(*(HANDLE *)(param_1 + 0x1e4));
      local_14 = 0;
    }
  }
  local_c = local_48;
  CloseHandle(local_30.hEvent);
  FUN_1000104b((undefined *)local_40);
  return local_c;
}



/* ================================================================
 * Function: FUN_1000b66f
 * Address:  1000b66f
 * ================================================================ */

undefined4 FUN_1000b66f(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_1000b683
 * Address:  1000b683
 * ================================================================ */

undefined4 FUN_1000b683(void)

{
  return 0;
}



/* ================================================================
 * Function: FUN_1000b697
 * Address:  1000b697
 * ================================================================ */

undefined4 FUN_1000b697(int param_1,undefined4 param_2,int param_3)

{
  undefined4 local_8;
  
  local_8 = 1;
  switch(param_2) {
  case 0xc:
    *(int *)(param_1 + 0x374) = param_3;
    break;
  default:
    local_8 = 0;
    break;
  case 0x1e:
    break;
  case 0x20:
    *(int *)(param_1 + 0x368) = param_3;
    if (*(int *)(param_1 + 0x368) != *(int *)(param_1 + 0x36c)) {
      *(undefined1 *)(param_1 + 0x365) = 0;
      *(undefined4 *)(param_1 + 0x36c) = *(undefined4 *)(param_1 + 0x368);
    }
    break;
  case 0x32:
    *(undefined4 *)(*(int *)(param_1 + 0x370) + param_3 * 4) = 1;
    break;
  case 0x33:
    *(int *)(param_1 + 0x39c) = param_3;
    *(undefined4 *)(*(int *)(param_1 + 0x370) + param_3 * 4) = 0;
    break;
  case 0x67:
    break;
  case 0x68:
    *(undefined4 *)(param_1 + 0x390) = *(undefined4 *)(param_1 + 0x37c);
    *(int *)(param_1 + 0x37c) = param_3;
    break;
  case 0x6a:
    *(int *)(param_1 + 0x4ac) = param_3;
    break;
  case 0x6b:
    *(int *)(param_1 + 0x4b0) = param_3;
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_1000b82f
 * Address:  1000b82f
 * ================================================================ */

undefined4 FUN_1000b82f(int param_1,undefined4 param_2,int *param_3)

{
  int *_Dst;
  int iVar1;
  undefined4 local_10;
  DWORD local_8;
  
  _Dst = _malloc(0xc);
  local_10 = 1;
  switch(param_2) {
  case 8:
    *param_3 = *(int *)(param_1 + 0x1ac);
    break;
  default:
    local_10 = 0;
    break;
  case 0xc:
    iVar1 = (**(code **)(param_1 + 0xbc))(param_1);
    *param_3 = iVar1;
    break;
  case 0x51:
    _memset(_Dst,0,0xc);
    DeviceIoControl(*(HANDLE *)(param_1 + 0x1e4),0x80006020,_Dst,0xc,_Dst,0xc,&local_8,
                    (LPOVERLAPPED)0x0);
    *param_3 = *_Dst * 0x100 + _Dst[1] * 0x10 + _Dst[2];
    break;
  case 0x54:
    *param_3 = *(int *)(param_1 + 0x20c);
  }
  return local_10;
}



/* ================================================================
 * Function: FUN_1000b973
 * Address:  1000b973
 * ================================================================ */

int FUN_1000b973(int param_1)

{
  int iVar1;
  DWORD DVar2;
  undefined4 *_Dst;
  int local_58;
  undefined4 local_50 [7];
  SIZE_T local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  FARPROC local_1c;
  FARPROC local_18;
  FARPROC local_14;
  FARPROC local_10;
  int local_c;
  HMODULE local_8;
  
  local_c = 0;
  local_8 = LoadLibraryA(s_SETUPAPI_DLL_1001f534);
  if (local_8 != (HMODULE)0x0) {
    local_14 = GetProcAddress(local_8,s_SetupDiGetClassDevsA_1001f544);
    local_10 = GetProcAddress(local_8,s_SetupDiEnumDeviceInterfaces_1001f55c);
    local_1c = GetProcAddress(local_8,s_SetupDiGetDeviceInterfaceDetailA_1001f578);
    local_18 = GetProcAddress(local_8,s_SetupDiDestroyDeviceInfoList_1001f59c);
    if ((((local_14 != (FARPROC)0x0) && (local_10 != (FARPROC)0x0)) && (local_1c != (FARPROC)0x0))
       && (local_18 != (FARPROC)0x0)) {
      local_30 = DAT_1001d180;
      local_2c = DAT_1001d184;
      local_28 = DAT_1001d188;
      local_24 = DAT_1001d18c;
      local_20 = (*local_14)(&local_30,0,0,0x12);
      if (local_20 != -1) {
        local_58 = 0;
        while( true ) {
          local_50[0] = 0x1c;
          iVar1 = (*local_10)(local_20,0,&local_30,local_58,local_50);
          if (iVar1 == 0) break;
          iVar1 = (*local_1c)(local_20,local_50,0,0,&local_34,0);
          if ((iVar1 == 0) && (DVar2 = GetLastError(), DVar2 != 0x7a)) {
            (*local_18)(local_20);
            local_c = 0;
            break;
          }
          _Dst = LocalAlloc(0x40,local_34);
          if (_Dst == (undefined4 *)0x0) {
            (*local_18)(local_20);
            local_c = 0;
            break;
          }
          _memset(_Dst,0,local_34);
          *_Dst = 5;
          iVar1 = (*local_1c)(local_20,local_50,_Dst,local_34,0,0);
          if (iVar1 == 0) {
            (*local_18)(local_20);
            LocalFree(_Dst);
            local_c = 0;
            break;
          }
          FUN_10015370((uint *)(param_1 + 0x510 + local_c * 0xff),_Dst + 1);
          local_c = local_c + 1;
          LocalFree(_Dst);
          local_58 = local_58 + 1;
        }
        (*local_18)(local_20);
      }
    }
    FreeLibrary(local_8);
  }
  return local_c;
}



/* ================================================================
 * Function: FUN_1000bb9c
 * Address:  1000bb9c
 * ================================================================ */

int FUN_1000bb9c(uint param_1)

{
  return param_1 * 0x1000000 + (param_1 & 0xff00) * 0x100 + ((param_1 & 0xff0000) >> 8) +
         (param_1 >> 0x18);
}



/* ================================================================
 * Function: FUN_1000bbd8
 * Address:  1000bbd8
 * ================================================================ */

uint FUN_1000bbd8(uint param_1)

{
  return (int)(param_1 & 0xffff) >> 8 | (param_1 & 0xffff) << 8;
}



/* ================================================================
 * Function: FUN_1000bbf8
 * Address:  1000bbf8
 * ================================================================ */

undefined4 FUN_1000bbf8(int param_1)

{
  char extraout_AL;
  DWORD DVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  _OVERLAPPED local_84;
  uint local_70;
  char local_6c;
  byte local_68 [32];
  uint local_48;
  undefined4 local_44;
  undefined2 local_40;
  char local_3c;
  uint local_38;
  _OVERLAPPED local_34;
  DWORD local_20 [2];
  uint local_18;
  undefined2 *local_14;
  DWORD local_10;
  uint local_c;
  undefined4 *local_8;
  BOOL BVar1;
  
  local_6c = 0;
  local_20[1] = 0;
  local_48 = local_48 & 0xffff0000;
  local_18 = 0;
  local_70 = 0;
  local_3c = '\x01';
  local_20[0] = 0;
  local_38 = 0;
  local_8 = FUN_1000102f(0x20);
  local_14 = _malloc(8);
  _memset(local_14,0,8);
  BVar1 = DeviceIoControl(*(HANDLE *)(param_1 + 0x1e4),0x80002018,local_20,4,local_14,8,local_20 + 1
                          ,(LPOVERLAPPED)0x0);
  extraout_AL = (char)BVar1;
  local_6c = extraout_AL;
  if (extraout_AL == '\0') {
    local_20[0] = GetLastError();
  }
  local_18 = *(uint *)(local_14 + 2);
  local_48 = CONCAT22(local_48._2_2_,*local_14);
  local_70 = (uint)(ushort)local_14[1];
  FUN_1001508a((undefined *)local_14);
  local_c = 0;
  local_44 = 0x10000000;
  local_40 = 0;
  local_34.hEvent = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
  DeviceIoControl(*(HANDLE *)(param_1 + 0x1e4),0x8000a005,&local_44,8,&local_c,4,local_20 + 1,
                  &local_34);
  DVar2 = GetLastError();
  if (DVar2 == 0x3e5) {
    BVar1 = GetOverlappedResult(*(HANDLE *)(param_1 + 0x1e4),&local_34,local_20 + 1,1);
    if (BVar1 == 0) {
      local_10 = GetLastError();
      BVar1 = CancelIo(*(HANDLE *)(param_1 + 0x1e4));
      local_20[1] = 0;
      local_6c = (char)BVar1;
    }
  }
  else {
    CancelIo(*(HANDLE *)(param_1 + 0x1e4));
    local_20[1] = 0;
  }
  CloseHandle(local_34.hEvent);
  _memset(local_8,0,0x20);
  *(undefined2 *)((int)local_8 + 2) = 0;
  local_8[5] = 0;
  iVar3 = FUN_1000bb9c(*(uint *)(param_1 + 0x37c) / *(uint *)(param_1 + 0x374));
  local_8[2] = iVar3;
  uVar4 = FUN_1000bbd8(1);
  *(short *)local_8 = (short)uVar4;
  uVar4 = FUN_1000bbd8(CONCAT22((short)(uVar4 >> 0x10),*(undefined2 *)(param_1 + 0x4ac)));
  *(short *)((int)local_8 + 6) = (short)uVar4;
  uVar4 = FUN_1000bbd8(CONCAT22((short)(uVar4 >> 0x10),*(undefined2 *)(param_1 + 0x4b0)));
  *(short *)(local_8 + 1) = (short)uVar4;
  iVar3 = FUN_1000bb9c(local_48 & 0xffff);
  local_8[3] = iVar3;
  iVar3 = FUN_1000bb9c(local_18);
  local_8[4] = iVar3;
  iVar3 = FUN_1000bb9c(*(uint *)(param_1 + 0x374));
  local_8[6] = iVar3;
  local_44 = 0x10000004;
  FUN_10015960((undefined4 *)local_68,local_8,0x1c);
  for (local_38 = 0; local_38 < 0x1c; local_38 = local_38 + 1) {
    local_8[7] = local_8[7] + (uint)local_68[local_38];
  }
  iVar3 = FUN_1000bb9c(local_8[7]);
  local_8[7] = iVar3;
  _memset(&local_84,0,0x14);
  local_84.hEvent = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
  DeviceIoControl(*(HANDLE *)(param_1 + 0x1e4),0x8000a025,&local_44,8,local_8,0x20,local_20 + 1,
                  &local_84);
  DVar2 = GetLastError();
  if (DVar2 == 0x3e5) {
    BVar1 = GetOverlappedResult(*(HANDLE *)(param_1 + 0x1e4),&local_84,local_20 + 1,1);
    if (BVar1 == 0) {
      local_10 = GetLastError();
      BVar1 = CancelIo(*(HANDLE *)(param_1 + 0x1e4));
      local_20[1] = 0;
      local_6c = (char)BVar1;
    }
  }
  else {
    CancelIo(*(HANDLE *)(param_1 + 0x1e4));
    local_20[1] = 0;
  }
  local_38 = 0;
  while (local_3c != '\0') {
    local_44 = 0x10000000;
    local_40 = 0;
    local_34.hEvent = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
    DeviceIoControl(*(HANDLE *)(param_1 + 0x1e4),0x80006002,&local_44,8,&local_c,4,local_20 + 1,
                    &local_34);
    DVar2 = GetLastError();
    if (DVar2 == 0x3e5) {
      BVar1 = GetOverlappedResult(*(HANDLE *)(param_1 + 0x1e4),&local_34,local_20 + 1,1);
      if (BVar1 == 0) {
        local_10 = GetLastError();
        BVar1 = CancelIo(*(HANDLE *)(param_1 + 0x1e4));
        local_20[1] = 0;
        local_6c = (char)BVar1;
      }
      else {
        local_c = FUN_1000bb9c(local_c);
        if (local_c == 0) {
          local_38 = local_38 + 1;
          if ((5 < local_38) && (local_3c != '\0')) {
            local_3c = '\x01';
          }
          Sleep(0x32);
        }
        else {
          local_3c = 1 < local_c;
        }
      }
    }
    else {
      CancelIo(*(HANDLE *)(param_1 + 0x1e4));
      local_20[1] = 0;
    }
    CloseHandle(local_34.hEvent);
  }
  CloseHandle(local_84.hEvent);
  uVar5 = FUN_1000104b((undefined *)local_8);
  return CONCAT31((int3)((uint)uVar5 >> 8),1);
}



/* ================================================================
 * Function: FUN_1000c07a
 * Address:  1000c07a
 * ================================================================ */

undefined4 FUN_1000c07a(int param_1,uint param_2)

{
  int iVar1;
  BOOL BVar2;
  uint uVar3;
  uint local_20;
  DWORD local_18;
  DWORD local_14;
  uint local_10;
  uint local_c;
  LPVOID local_8;
  
  if (*(char *)(param_1 + 0x4ab) == '\x01') {
    BVar2 = DeviceIoControl(*(HANDLE *)(param_1 + 0x1e4),0x80002010,(LPVOID)0x0,0,(LPVOID)0x0,0,
                            &local_18,(LPOVERLAPPED)0x0);
    if ((char)BVar2 == '\0') {
      GetLastError();
    }
    *(undefined1 *)(param_1 + 0x4ab) = 0;
  }
  BVar2 = DeviceIoControl(*(HANDLE *)(param_1 + 0x1e4),0x8000203c,&param_2,4,(LPVOID)0x0,0,&local_18
                          ,(LPOVERLAPPED)0x0);
  if ((char)BVar2 == '\0') {
    GetLastError();
  }
  iVar1 = *(int *)(param_1 + 0x368);
  local_20 = 0;
  while( true ) {
    if (param_2 <= local_20) {
      *(undefined4 *)(param_1 + 0x38c) = *(undefined4 *)(param_1 + 0x374);
      *(undefined4 *)(param_1 + 0x390) = *(undefined4 *)(param_1 + 0x37c);
      return CONCAT31((int3)((uint)param_1 >> 8),1);
    }
    local_14 = *(DWORD *)(param_1 + 0x374);
    local_10 = local_20;
    local_8 = (LPVOID)(iVar1 + local_14 * local_20);
    local_c = param_2;
    uVar3 = DeviceIoControl(*(HANDLE *)(param_1 + 0x1e4),0x8000200d,&local_14,0x10,local_8,local_14,
                            &local_18,(LPOVERLAPPED)0x0);
    if ((char)uVar3 == '\0') break;
    *(undefined1 *)(param_1 + 0x4ab) = 1;
    local_20 = local_20 + 1;
  }
  return uVar3 & 0xffffff00;
}



/* ================================================================
 * Function: FUN_1000c1ca
 * Address:  1000c1ca
 * ================================================================ */

void FUN_1000c1ca(int param_1)

{
  BOOL BVar1;
  DWORD local_8;
  
  local_8 = 0;
  BVar1 = DeviceIoControl(*(HANDLE *)(param_1 + 0x1e4),0x80002041,(LPVOID)0x0,0,
                          (LPVOID)(param_1 + 0x378),4,&local_8,(LPOVERLAPPED)0x0);
  if ((char)BVar1 == '\0') {
    GetLastError();
  }
  FUN_1000ae6a(param_1,0x408,0xffff);
  FUN_1000ae6a(param_1,0x40c,0xffffffe0);
  return;
}



/* ================================================================
 * Function: FUN_1000c260
 * Address:  1000c260
 * ================================================================ */

undefined4 FUN_1000c260(undefined4 param_1,undefined4 param_2,short param_3)

{
  BOOL BVar1;
  undefined2 uVar2;
  
  if (DAT_10022f84 == 1) {
    BVar1 = FUN_10014b60(param_1,param_2,(int)param_3);
    uVar2 = (undefined2)((uint)BVar1 >> 0x10);
  }
  else {
    BVar1 = FUN_100128d0(param_1,param_2,(int)param_3);
    uVar2 = (undefined2)((uint)BVar1 >> 0x10);
  }
  return CONCAT22(uVar2,1);
}



/* ================================================================
 * Function: FUN_1000c2a3
 * Address:  1000c2a3
 * ================================================================ */

uint FUN_1000c2a3(undefined4 param_1,short param_2)

{
  uint local_8;
  
  if (DAT_10022f84 == 1) {
    FUN_10014ba7(param_1,&local_8,(int)param_2);
  }
  else {
    FUN_100129c3(param_1,&local_8,(int)param_2);
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_1000c2e0
 * Address:  1000c2e0
 * ================================================================ */

HMODULE FUN_1000c2e0(void)

{
  HMODULE hModule;
  
  hModule = LoadLibraryA(s_kernel32_dll_1001f5bc);
  DAT_10022d5c = (FARPROC)0x0;
  if (hModule != (HMODULE)0x0) {
    DAT_10022d5c = GetProcAddress(hModule,s_CancelIo_1001f5cc);
  }
  return hModule;
}



/* ================================================================
 * Function: FUN_1000c31d
 * Address:  1000c31d
 * ================================================================ */

HMODULE FUN_1000c31d(void)

{
  HMODULE hModule;
  
  hModule = LoadLibraryA(s_USBDRVD_DLL_1001f5d8);
  if (hModule != (HMODULE)0x0) {
    DAT_10022d88 = GetProcAddress(hModule,s_USBDRVD_GetDevCount_1001f5e4);
    DAT_10022d6c = GetProcAddress(hModule,s_USBDRVD_OpenDevice_1001f5f8);
    DAT_10022d64 = GetProcAddress(hModule,s_USBDRVD_CloseDevice_1001f60c);
    DAT_10022d58 = GetProcAddress(hModule,s_USBDRVD_ResetParentPort_1001f620);
    DAT_10022d74 = GetProcAddress(hModule,s_USBDRVD_GetEndpointDescriptor_1001f638);
    DAT_10022d60 = GetProcAddress(hModule,s_USBDRVD_VendorOrClassRequestOut_1001f658);
    DAT_10022d7c = GetProcAddress(hModule,s_USBDRVD_VendorOrClassRequestIn_1001f678);
    DAT_10022d80 = GetProcAddress(hModule,s_USBDRVD_PipeOpen_1001f698);
    DAT_10022d84 = GetProcAddress(hModule,s_USBDRVD_PipeClose_1001f6ac);
    DAT_10022d50 = GetProcAddress(hModule,s_USBDRVD_PipeWriteTimeout_1001f6c0);
    DAT_10022d54 = GetProcAddress(hModule,s_USBDRVD_PipeRead_1001f6dc);
    DAT_10022d78 = GetProcAddress(hModule,s_USBDRVD_GetDeviceDescriptor_1001f6f0);
    DAT_10022d68 = GetProcAddress(hModule,s_USBDRVD_GetDevicePath_1001f70c);
  }
  return hModule;
}



/* ================================================================
 * Function: FUN_1000c444
 * Address:  1000c444
 * ================================================================ */

undefined4 * FUN_1000c444(undefined4 param_1)

{
  undefined4 uVar1;
  HANDLE pvVar2;
  undefined1 local_8c [4];
  uint local_88;
  undefined1 local_84 [10];
  uint local_7a;
  int local_70;
  undefined4 *local_6c;
  CHAR local_68 [100];
  
  local_70 = 0;
  local_6c = FUN_1000102f(0x1508);
  _memset(local_6c,0,0x1508);
  FUN_100099a3(local_6c);
  *local_6c = FUN_1000c8b2;
  local_6c[1] = FUN_1000c8be;
  local_6c[2] = FUN_1000cb27;
  local_6c[4] = FUN_1000cb3b;
  local_6c[5] = FUN_1000cd27;
  local_6c[6] = FUN_1000d08b;
  local_6c[0xb] = FUN_1000d08b;
  local_6c[0xc] = FUN_1000d1a9;
  local_6c[0x11] = FUN_1000d1d0;
  local_6c[0x12] = FUN_1000d222;
  local_6c[0x31] = FUN_1000d369;
  local_6c[0x2f] = FUN_1000d45e;
  local_6c[0x45] = FUN_1000d472;
  local_6c[0x46] = FUN_1000d68d;
  local_6c[0x76] = 0;
  local_6c[0x79] = 0;
  local_6c[0x143] = FUN_1000d86b;
  local_6c[0xea] = FUN_1000d424;
  local_6c[0xe9] = FUN_1000d3c5;
  if (DAT_100228d4 == 0) {
    DAT_100228d0 = FUN_1000c2e0();
  }
  if ((DAT_100228d0 != (HMODULE)0x0) && (DAT_10022d5c != 0)) {
    DAT_100228d4 = DAT_100228d4 + 1;
  }
  if (DAT_100228c8 == 0) {
    DAT_100228c4 = FUN_1000c31d();
  }
  if (DAT_100228c4 != (HMODULE)0x0) {
    uVar1 = (*DAT_10022d88)(&DAT_1001d170);
    local_6c[0x76] = uVar1;
    DAT_100228c8 = DAT_100228c8 + 1;
  }
  if (local_6c[0x76] == 0) {
    (*(code *)local_6c[4])(local_6c);
    local_6c = (undefined4 *)0x0;
  }
  else {
    local_6c[0x6e] = param_1;
    uVar1 = (*DAT_10022d6c)(local_6c[0x6e],0x40000000,&DAT_1001d170);
    local_6c[0xd6] = uVar1;
    (*DAT_10022d68)(local_6c[0x6e],&DAT_1001d170,local_6c + 0xeb,0xff);
    local_6c[0x13b] = 0;
    local_6c[0x13c] = 0;
    local_6c[0x13a] = 0;
    *(undefined1 *)((int)local_6c + 0x367) = 0;
    pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
    local_6c[0x12e] = pvVar2;
    pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
    local_6c[0x12f] = pvVar2;
    pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
    local_6c[0x131] = pvVar2;
    local_6c[0xdf] = 0;
    local_6c[0xdd] = 0;
    local_6c[0xe0] = 0;
    (*DAT_10022d78)(local_6c[0xd6],local_84);
    if ((local_7a & 0xffff) == 0xa010) {
      local_70 = 1;
    }
    else {
      (*(code *)local_6c[4])(local_6c);
      local_6c = (undefined4 *)0x0;
    }
    if (local_70 != 0) {
      (*DAT_10022d74)(local_6c[0xd6],0,local_8c);
      if ((local_88 & 0xffff) < 0x41) {
        (*(code *)local_6c[4])(local_6c);
        local_6c = (undefined4 *)0x0;
      }
      else {
        local_6c[0xe5] = local_88 & 0xffff;
        pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
        local_6c[0x132] = pvVar2;
        FUN_10015c95(local_68,(byte *)s_Check_Controller_Overrun_d_1001f724);
        pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,local_68);
        local_6c[0x133] = pvVar2;
        FUN_10015c95(local_68,(byte *)s_Check_USB_Errors_d_1001f740);
        pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,local_68);
        local_6c[0x134] = pvVar2;
        *(undefined1 *)((int)local_6c + 0x362) = 0;
        *(undefined1 *)((int)local_6c + 0x363) = 0;
        *(undefined1 *)(local_6c + 0xd9) = 0;
        *(undefined1 *)((int)local_6c + 0x365) = 1;
        local_6c[0xe2] = 0;
        *(undefined1 *)((int)local_6c + 0x35d) = 0;
        local_6c[0x130] = 0;
        *(undefined1 *)(local_6c + 0xd8) = 0;
        *(undefined1 *)((int)local_6c + 0x361) = 0;
        local_6c[0xe3] = 0;
        local_6c[0xe4] = 0;
        local_6c[0xe6] = 2;
        local_6c[0xdc] = 0;
        *(undefined1 *)((int)local_6c + 0x366) = 0;
        (*DAT_10022d64)(local_6c[0xd6]);
      }
    }
  }
  return local_6c;
}



/* ================================================================
 * Function: FUN_1000c8b2
 * Address:  1000c8b2
 * ================================================================ */

char * FUN_1000c8b2(void)

{
  return s_PIFX2_1001f754;
}



/* ================================================================
 * Function: FUN_1000c8be
 * Address:  1000c8be
 * ================================================================ */

undefined4 __thiscall FUN_1000c8be(undefined2 param_1,LPVOID param_2)

{
  uint uVar1;
  undefined4 uVar2;
  HANDLE pvVar3;
  ushort uVar4;
  
  if (*(char *)((int)param_2 + 0x367) == '\0') {
    if (*(int *)((int)param_2 + 0x1b8) == 0) {
      *(undefined4 *)((int)param_2 + 0x1b8) = 1;
    }
    uVar2 = (*DAT_10022d6c)(*(undefined4 *)((int)param_2 + 0x1b8),0x40000000,&DAT_1001d170,param_1);
    *(undefined4 *)((int)param_2 + 0x358) = uVar2;
    uVar2 = (*DAT_10022d80)(*(undefined4 *)((int)param_2 + 0x1b8),1,0x40000000,&DAT_1001d170);
    *(undefined4 *)((int)param_2 + 0x4ec) = uVar2;
    uVar2 = (*DAT_10022d80)(*(undefined4 *)((int)param_2 + 0x1b8),2,0x40000000,&DAT_1001d170);
    *(undefined4 *)((int)param_2 + 0x4f0) = uVar2;
    uVar2 = (*DAT_10022d80)(*(undefined4 *)((int)param_2 + 0x1b8),0,0x40000000,&DAT_1001d170);
    *(undefined4 *)((int)param_2 + 0x4e8) = uVar2;
    *(undefined1 *)((int)param_2 + 0x367) = 1;
  }
  if (((*(char *)((int)param_2 + 0x366) == '\0') && (*(int *)((int)param_2 + 0x374) != 0)) &&
     (*(int *)((int)param_2 + 0x37c) != 0)) {
    pvVar3 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,
                          *(LPTHREAD_START_ROUTINE *)((int)param_2 + 0x50c),param_2,0,(LPDWORD)0x0);
    *(HANDLE *)((int)param_2 + 0x4c0) = pvVar3;
    SetThreadPriority(*(HANDLE *)((int)param_2 + 0x4c0),0xf);
    do {
      Sleep(1);
    } while (*(char *)((int)param_2 + 0x366) == '\0');
  }
  if (*(int *)((int)param_2 + 0x374) != *(int *)((int)param_2 + 0x38c)) {
    *(undefined4 *)((int)param_2 + 0x38c) = *(undefined4 *)((int)param_2 + 0x374);
    *(undefined4 *)((int)param_2 + 0x390) = *(undefined4 *)((int)param_2 + 0x37c);
    uVar4 = (ushort)*(undefined4 *)((int)param_2 + 0x374);
    uVar1 = *(uint *)((int)param_2 + 0x374);
    FUN_1000d08b((int)param_2,0x14,0x100);
    FUN_1000d08b((int)param_2,0x10,(uint)uVar4);
    FUN_1000d08b((int)param_2,0x12,uVar1 >> 0x10);
    FUN_1000d08b((int)param_2,0x14,1);
    if (*(uint *)((int)param_2 + 0x374) < 0x200) {
      FUN_1000d3c5((int)param_2,*(undefined2 *)((int)param_2 + 0x374));
      FUN_1000d08b((int)param_2,0x16,0);
    }
    else {
      FUN_1000d3c5((int)param_2,*(undefined2 *)((int)param_2 + 0x394));
      if (*(uint *)((int)param_2 + 0x374) % *(uint *)((int)param_2 + 0x394) == 0) {
        FUN_1000d08b((int)param_2,0x16,0);
      }
      else {
        FUN_1000d08b((int)param_2,0x16,1);
      }
    }
  }
  return 1;
}



/* ================================================================
 * Function: FUN_1000cb27
 * Address:  1000cb27
 * ================================================================ */

undefined4 FUN_1000cb27(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_1000cb3b
 * Address:  1000cb3b
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1000cb3b(undefined *param_1)

{
  if (0 < DAT_100228c8) {
    DAT_100228c8 = DAT_100228c8 + -1;
  }
  if (0 < DAT_100228d4) {
    DAT_100228d4 = DAT_100228d4 + -1;
  }
  if (param_1[0x365] != '\0') {
    param_1[0x365] = 0;
    param_1[0x361] = 1;
    CloseHandle(*(HANDLE *)(param_1 + 0x4b8));
    if (param_1[0x367] != '\0') {
      (*DAT_10022d64)(*(undefined4 *)(param_1 + 0x358));
      (*DAT_10022d84)(*(undefined4 *)(param_1 + 0x4ec));
      (*DAT_10022d84)(*(undefined4 *)(param_1 + 0x4f0));
      (*DAT_10022d84)(*(undefined4 *)(param_1 + 0x4e8));
      param_1[0x367] = 0;
    }
    if (param_1[0x360] != '\0') {
      ResumeThread(*(HANDLE *)(param_1 + 0x4c0));
      param_1[0x362] = 1;
    }
    if (*(int *)(param_1 + 0x4c0) != 0) {
      WaitForSingleObject(*(HANDLE *)(param_1 + 0x4bc),5000);
      CloseHandle(*(HANDLE *)(param_1 + 0x4c0));
    }
    CloseHandle(*(HANDLE *)(param_1 + 0x4bc));
    CloseHandle(*(HANDLE *)(param_1 + 0x4c8));
    CloseHandle(*(HANDLE *)(param_1 + 0x4cc));
    if (*(int *)(param_1 + 0x370) != 0) {
      FUN_1000104b(*(undefined **)(param_1 + 0x370));
    }
    param_1[0x361] = 0;
  }
  if ((DAT_100228c4 != (HMODULE)0x0) && (DAT_100228c8 == 0)) {
    FreeLibrary(DAT_100228c4);
    DAT_100228c4 = (HMODULE)0x0;
    _DAT_100228c0 = 0;
  }
  if ((DAT_100228d0 != (HMODULE)0x0) && (DAT_100228c8 == 0)) {
    FreeLibrary(DAT_100228d0);
    DAT_100228d0 = (HMODULE)0x0;
    _DAT_100228cc = 0;
  }
  FUN_1000104b(param_1);
  return 1;
}



/* ================================================================
 * Function: FUN_1000cd27
 * Address:  1000cd27
 * ================================================================ */

int FUN_1000cd27(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  undefined1 uVar5;
  undefined1 local_134 [4];
  undefined1 local_130;
  undefined1 local_12f;
  undefined1 local_12e;
  undefined1 local_12d;
  undefined1 local_12c;
  undefined1 local_12b;
  undefined1 local_128 [16];
  HANDLE local_118;
  int local_114;
  undefined4 local_110;
  uint local_10c;
  char acStack_108 [256];
  undefined1 local_8 [4];
  
  local_110 = 2;
  _memset(local_128,0,0x14);
  local_118 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
  if (*(char *)(param_1 + 0x367) == '\0') {
    uVar2 = (*DAT_10022d80)(*(undefined4 *)(param_1 + 0x1b8),1,0x40000000,&DAT_1001d170);
    *(undefined4 *)(param_1 + 0x4ec) = uVar2;
    uVar2 = (*DAT_10022d80)(*(undefined4 *)(param_1 + 0x1b8),2,0x40000000,&DAT_1001d170);
    *(undefined4 *)(param_1 + 0x4f0) = uVar2;
  }
  local_130 = 1;
  uVar1 = (undefined1)param_2;
  uVar5 = (undefined1)((uint)param_2 >> 8);
  local_12d = 3;
  local_12c = 0;
  local_12b = 0;
  local_12f = uVar1;
  local_12e = uVar5;
  if (param_2 == 0x32) {
    FUN_1000d369(param_1);
    *(uint *)(param_1 + 0x380) = *(uint *)(param_1 + 0x37c) / *(uint *)(param_1 + 0x374);
    if (*(int *)(param_1 + 0x370) != 0) {
      FUN_1000104b(*(undefined **)(param_1 + 0x370));
    }
    pvVar3 = FUN_1000102f(*(int *)(param_1 + 0x380) << 2);
    *(void **)(param_1 + 0x370) = pvVar3;
    _memset(*(void **)(param_1 + 0x370),0,*(int *)(param_1 + 0x380) << 2);
    local_12f = 0x14;
    local_12e = 0;
    local_12d = 2;
    local_12c = 1;
    local_12b = 0;
    (*DAT_10022d50)(*(undefined4 *)(param_1 + 0x4f0),&local_130,6,local_8,10000);
    local_130 = 1;
    local_12d = 3;
    local_12c = 0;
    local_12b = 0;
    *(undefined1 *)(param_1 + 0x364) = 1;
    *(undefined4 *)(param_1 + 900) = 0;
    local_12f = uVar1;
    local_12e = uVar5;
    if (*(char *)(param_1 + 0x360) != '\0') {
      ResumeThread(*(HANDLE *)(param_1 + 0x4c0));
    }
    WaitForSingleObject(*(HANDLE *)(param_1 + 0x4c8),5000);
    ResetEvent(*(HANDLE *)(param_1 + 0x4c8));
    *(undefined1 *)(param_1 + 0x360) = 0;
  }
  if (param_2 == 0x30) {
    *(undefined1 *)(param_1 + 0x364) = 0;
  }
  if (param_2 == 0x40) {
    (*DAT_10022d68)(*(undefined4 *)(param_1 + 0x1b8),&DAT_1001d170,acStack_108,0xff);
    iVar4 = _strcmp(acStack_108,(char *)(param_1 + 0x3ac));
    if (iVar4 != 0) {
      return 0;
    }
  }
  (*DAT_10022d54)(*(undefined4 *)(param_1 + 0x4ec),&local_10c,local_110,local_134,local_128);
  local_110 = 6;
  (*DAT_10022d50)(*(undefined4 *)(param_1 + 0x4f0),&local_130,6,local_8,10000);
  WaitForSingleObject(local_118,10000);
  if (*(char *)(param_1 + 0x367) == '\0') {
    (*DAT_10022d84)(*(undefined4 *)(param_1 + 0x4ec));
    (*DAT_10022d84)(*(undefined4 *)(param_1 + 0x4f0));
  }
  local_114 = (local_10c >> 8 & 0xff) * 0x100 + (local_10c & 0xff);
  CloseHandle(local_118);
  return local_114;
}



/* ================================================================
 * Function: FUN_1000d08b
 * Address:  1000d08b
 * ================================================================ */

undefined4 FUN_1000d08b(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_114;
  undefined1 local_113;
  undefined1 local_112;
  undefined1 local_111;
  undefined1 local_110;
  undefined1 local_10f;
  undefined4 local_10c;
  char local_108 [256];
  undefined4 local_8;
  
  local_10c = 6;
  local_114 = 1;
  local_113 = (undefined1)param_2;
  local_112 = (undefined1)((uint)param_2 >> 8);
  local_111 = 2;
  local_110 = (undefined1)param_3;
  local_10f = (undefined1)((uint)param_3 >> 8);
  if (*(char *)(param_1 + 0x367) == '\0') {
    uVar1 = (*DAT_10022d80)(*(undefined4 *)(param_1 + 0x1b8),2,0x40000000,&DAT_1001d170);
    *(undefined4 *)(param_1 + 0x4f0) = uVar1;
  }
  if (param_2 == 0x40) {
    (*DAT_10022d68)(*(undefined4 *)(param_1 + 0x1b8),&DAT_1001d170,local_108,0xff);
    iVar2 = _strcmp(local_108,(char *)(param_1 + 0x3ac));
    if (iVar2 != 0) {
      return 0;
    }
  }
  (*DAT_10022d50)(*(undefined4 *)(param_1 + 0x4f0),&local_114,local_10c,&local_8,10000);
  if (*(char *)(param_1 + 0x367) == '\0') {
    (*DAT_10022d84)(*(undefined4 *)(param_1 + 0x4f0));
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_1000d1a9
 * Address:  1000d1a9
 * ================================================================ */

undefined4 FUN_1000d1a9(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1ac) = param_2;
  return 1;
}



/* ================================================================
 * Function: FUN_1000d1d0
 * Address:  1000d1d0
 * ================================================================ */

undefined4 FUN_1000d1d0(int param_1)

{
  DWORD DVar1;
  undefined4 local_c;
  
  local_c = 0;
  DVar1 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x4b8),0);
  if (DVar1 == 0) {
    local_c = *(undefined4 *)(param_1 + 0x388);
    *(undefined4 *)(param_1 + 0x388) = 0;
  }
  return local_c;
}



/* ================================================================
 * Function: FUN_1000d222
 * Address:  1000d222
 * ================================================================ */

undefined4 FUN_1000d222(int param_1,undefined4 param_2,undefined1 *param_3,int param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_c [4];
  undefined4 local_8;
  
  local_8 = 0;
  puVar1 = FUN_1000102f(param_4 * 3 + 3);
  uVar4 = 0;
  if (*(char *)(param_1 + 0x367) == '\0') {
    uVar2 = (*DAT_10022d80)(*(undefined4 *)(param_1 + 0x1b8),2,0x40000000,&DAT_1001d170);
    *(undefined4 *)(param_1 + 0x4f0) = uVar2;
  }
  uVar3 = param_4 * 3;
  *puVar1 = 1;
  puVar1[1] = (char)param_2;
  puVar1[2] = (char)((uint)param_2 >> 8);
  while (param_4 != 0) {
    for (uVar4 = 0; uVar4 < uVar3; uVar4 = uVar4 + 3) {
      puVar1[uVar4 + 3] = 2;
      puVar1[uVar4 + 4] = *param_3;
      puVar1[uVar4 + 5] = 0;
      param_3 = param_3 + 1;
      param_4 = param_4 + -1;
    }
  }
  (*DAT_10022d50)(*(undefined4 *)(param_1 + 0x4f0),puVar1,uVar3 + 3,local_c,0xffffffff,0,puVar1,
                  uVar4);
  if (*(char *)(param_1 + 0x367) == '\0') {
    (*DAT_10022d84)(*(undefined4 *)(param_1 + 0x4f0));
  }
  FUN_1000104b(puVar1);
  return 0;
}



/* ================================================================
 * Function: FUN_1000d369
 * Address:  1000d369
 * ================================================================ */

undefined4 FUN_1000d369(int param_1)

{
  undefined4 uVar1;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  
  local_c = 0;
  local_b = 0;
  local_a = 0;
  local_9 = 0;
  local_8 = 0;
  local_7 = 0;
  local_6 = 0;
  local_5 = 0;
  uVar1 = (*DAT_10022d60)(*(undefined4 *)(param_1 + 0x358),2,0,0xf0,0,0,&local_c,8,0);
  return uVar1;
}



/* ================================================================
 * Function: FUN_1000d3c5
 * Address:  1000d3c5
 * ================================================================ */

undefined4 FUN_1000d3c5(int param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  
  local_c = 0;
  local_b = 0;
  local_a = 0;
  local_9 = 0;
  local_8 = 0;
  local_7 = 0;
  local_6 = 0;
  local_5 = 0;
  uVar1 = (*DAT_10022d60)(*(undefined4 *)(param_1 + 0x358),2,0,0xf2,param_2,0,&local_c,8,0);
  return uVar1;
}



/* ================================================================
 * Function: FUN_1000d424
 * Address:  1000d424
 * ================================================================ */

undefined4 FUN_1000d424(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (*DAT_10022d7c)(*(undefined4 *)(param_1 + 0x358),2,0,0xf3,0,0,param_2,4,0);
  return uVar1;
}



/* ================================================================
 * Function: FUN_1000d45e
 * Address:  1000d45e
 * ================================================================ */

undefined4 FUN_1000d45e(void)

{
  return 0;
}



/* ================================================================
 * Function: FUN_1000d472
 * Address:  1000d472
 * ================================================================ */

undefined4 FUN_1000d472(int param_1,undefined4 param_2,int param_3)

{
  undefined4 local_8;
  
  local_8 = 1;
  switch(param_2) {
  case 3:
    *(int *)(param_1 + 0x378) = param_3;
    break;
  default:
    local_8 = 0;
    break;
  case 0xc:
    *(int *)(param_1 + 0x374) = param_3;
    break;
  case 0x1e:
    if (*(int *)(param_1 + 0x1d8) == 1) {
      (**(code **)(param_1 + 0x30))(param_1,0);
    }
    else {
      (**(code **)(param_1 + 0x30))(param_1,*(int *)(param_1 + 0x1b8) + -1);
    }
    break;
  case 0x20:
    if (param_3 != *(int *)(param_1 + 0x368)) {
      if (*(char *)(param_1 + 0x35d) != '\0') {
        (*DAT_10022d5c)(*(undefined4 *)(*(int *)(param_1 + 0x4e8) + 4));
        *(undefined1 *)(param_1 + 0x35d) = 0;
      }
      *(int *)(param_1 + 0x368) = param_3;
    }
    break;
  case 0x30:
    *(int *)(param_1 + 0x398) = param_3;
    break;
  case 0x32:
    *(undefined4 *)(*(int *)(param_1 + 0x370) + param_3 * 4) = 1;
    break;
  case 0x33:
    *(int *)(param_1 + 0x39c) = param_3;
    *(undefined4 *)(*(int *)(param_1 + 0x370) + param_3 * 4) = 0;
    break;
  case 0x67:
    if ((*(char *)(param_1 + 0x366) != '\0') && (*(char *)(param_1 + 0x360) == '\0')) {
      *(undefined1 *)(param_1 + 0x362) = 1;
      SetEvent(*(HANDLE *)(param_1 + 0x4c4));
      do {
        Sleep(1);
      } while (*(char *)(param_1 + 0x360) == '\0');
    }
    break;
  case 0x68:
    *(int *)(param_1 + 0x37c) = param_3;
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_1000d68d
 * Address:  1000d68d
 * ================================================================ */

undefined4 FUN_1000d68d(int param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  undefined1 local_14 [4];
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  local_c = 1;
  switch(param_2) {
  case 8:
    *param_3 = *(uint *)(param_1 + 0x1ac);
    break;
  default:
    local_c = 0;
    break;
  case 0xc:
    uVar1 = (**(code **)(param_1 + 0xbc))(param_1);
    *param_3 = uVar1;
    break;
  case 0x10:
    uVar1 = (*DAT_10022d88)(&DAT_1001d170);
    *param_3 = uVar1;
    if (*param_3 == 0) {
      (*DAT_10022d5c)(*(undefined4 *)(*(int *)(param_1 + 0x4e8) + 4));
      (*DAT_10022d58)(*(undefined4 *)(param_1 + 0x358));
      SetEvent(*(HANDLE *)(param_1 + 0x4c4));
    }
    break;
  case 0x4c:
    *param_3 = *(uint *)(param_1 + 0x3a0);
    break;
  case 0x51:
    (*DAT_10022d7c)(*(undefined4 *)(param_1 + 0x358),2,0,0xf1,0,0,&local_8,2);
    *param_3 = (local_8 & 0xff) + (local_8 >> 8 & 0xff) * 0x100;
    break;
  case 0x54:
    *param_3 = *(uint *)(param_1 + 0x20c);
    break;
  case 0x69:
    (*DAT_10022d74)(*(undefined4 *)(param_1 + 0x358),0,local_14);
    *param_3 = local_10 & 0xffff;
  }
  return local_c;
}



/* ================================================================
 * Function: FUN_1000d85a
 * Address:  1000d85a
 * ================================================================ */

void FUN_1000d85a(undefined4 param_1)

{
  (*DAT_10022d88)(param_1);
  return;
}



/* ================================================================
 * Function: FUN_1000d86b
 * Address:  1000d86b
 * ================================================================ */

undefined4 FUN_1000d86b(int param_1)

{
  BOOL BVar1;
  int iVar2;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_4c;
  _OVERLAPPED local_48;
  DWORD local_34;
  DWORD local_30;
  undefined1 local_2c;
  DWORD local_28;
  uint local_24;
  int local_20;
  HANDLE local_1c;
  undefined4 local_18;
  uint local_14;
  char local_10;
  DWORD local_c [2];
  
  local_34 = 0;
  local_c[1] = 0;
  local_30 = 0;
  local_28 = 0;
  if (*(uint *)(param_1 + 0x378) < *(uint *)(param_1 + 0x374)) {
    local_4c = *(uint *)(param_1 + 0x378);
  }
  else {
    local_4c = *(uint *)(param_1 + 0x374);
  }
  local_24 = local_4c;
  local_c[0] = 0;
  local_20 = 0;
  local_14 = *(uint *)(param_1 + 0x374);
  local_10 = '\x01';
  local_2c = 0;
  _memset(&local_48,0,0x14);
  local_48.hEvent = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
  local_18 = *(undefined4 *)(param_1 + 0x4c4);
  *(undefined1 *)(param_1 + 0x35d) = 1;
  *(undefined1 *)(param_1 + 0x366) = 1;
  *(undefined4 *)(param_1 + 0x39c) = 0;
  *(undefined4 *)(param_1 + 900) = 0;
  local_1c = local_48.hEvent;
  (*DAT_10022d54)(*(undefined4 *)(param_1 + 0x4e8),*(undefined4 *)(param_1 + 0x368),local_24,local_c
                  ,&local_48);
  *(undefined1 *)(param_1 + 0x360) = 1;
  SuspendThread(*(HANDLE *)(param_1 + 0x4c0));
  SetEvent(*(HANDLE *)(param_1 + 0x4c8));
  while (*(char *)(param_1 + 0x361) == '\0') {
    local_34 = local_24 / 2000 + 1000;
    local_30 = WaitForMultipleObjects(2,&local_1c,0,local_34);
    if (local_30 == 0) {
      ResetEvent(local_48.hEvent);
      *(ULONG_PTR *)(param_1 + 0x388) = *(int *)(param_1 + 0x388) + local_48.InternalHigh;
      if (local_48.InternalHigh == 0) {
        BVar1 = GetOverlappedResult(*(HANDLE *)(param_1 + 0x4e8),&local_48,local_c,0);
        if ((BVar1 == 0) && (local_28 = GetLastError(), local_28 == 0x1f)) {
          *(undefined1 *)(param_1 + 0x362) = 1;
          *(undefined1 *)(param_1 + 0x35d) = 0;
          (*DAT_10022d58)(*(undefined4 *)(param_1 + 0x358));
          SetEvent(*(HANDLE *)(param_1 + 0x4c4));
          local_10 = '\0';
          SetEvent(*(HANDLE *)(param_1 + 0x4d0));
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x35d) = 0;
        if (local_14 < local_48.InternalHigh) {
          local_10 = '\0';
          *(undefined1 *)(param_1 + 0x362) = 1;
          *(undefined1 *)(param_1 + 0x35d) = 0;
          SetEvent(*(HANDLE *)(param_1 + 0x4c4));
        }
        else {
          local_14 = local_14 - local_48.InternalHigh;
          if (local_14 == 0) {
            *(undefined4 *)(*(int *)(param_1 + 0x370) + *(int *)(param_1 + 900) * 4) = 1;
            *(uint *)(param_1 + 900) = (*(int *)(param_1 + 900) + 1U) % *(uint *)(param_1 + 0x380);
            local_20 = *(int *)(param_1 + 900) * *(int *)(param_1 + 0x374);
            SetEvent(*(HANDLE *)(param_1 + 0x4b8));
            if (*(uint *)(param_1 + 0x378) < *(uint *)(param_1 + 0x374)) {
              local_54 = *(uint *)(param_1 + 0x378);
            }
            else {
              local_54 = *(uint *)(param_1 + 0x374);
            }
            local_24 = local_54;
          }
          else {
            local_20 = *(int *)(param_1 + 900) * *(int *)(param_1 + 0x374) +
                       (*(int *)(param_1 + 0x374) - local_14);
            local_58 = local_14;
            if (*(uint *)(param_1 + 0x378) < local_14) {
              local_58 = *(uint *)(param_1 + 0x378);
            }
            local_24 = local_58;
          }
          if ((*(int *)(*(int *)(param_1 + 0x370) + *(int *)(param_1 + 900) * 4) == 0) ||
             (*(int *)(param_1 + 0x398) != 3)) {
            local_10 = '\x01';
          }
          else {
            local_10 = '\0';
          }
        }
      }
      if (((*(char *)(param_1 + 0x362) == '\0') && (local_10 != '\0')) &&
         (iVar2 = (*DAT_10022d54)(*(undefined4 *)(param_1 + 0x4e8),
                                  *(int *)(param_1 + 0x368) + local_20,local_24,local_c,&local_48),
         iVar2 == 0)) {
        local_28 = GetLastError();
        *(undefined1 *)(param_1 + 0x35d) = 1;
        if (local_14 == 0) {
          local_14 = *(uint *)(param_1 + 0x374);
        }
      }
    }
    else if (local_30 == 1) {
      *(undefined1 *)(param_1 + 0x362) = 0;
      local_20 = 0;
      if (*(char *)(param_1 + 0x35d) != '\0') {
        (*DAT_10022d5c)(*(undefined4 *)(*(int *)(param_1 + 0x4e8) + 4));
        *(undefined1 *)(param_1 + 0x35d) = 0;
      }
      ResetEvent(*(HANDLE *)(param_1 + 0x4c4));
      *(undefined1 *)(param_1 + 0x360) = 1;
      *(undefined4 *)(param_1 + 0x388) = 0;
      SuspendThread(*(HANDLE *)(param_1 + 0x4c0));
      if (*(char *)(param_1 + 0x361) == '\0') {
        local_48.InternalHigh = 0;
        if (*(uint *)(param_1 + 0x378) < *(uint *)(param_1 + 0x374)) {
          local_5c = *(uint *)(param_1 + 0x378);
        }
        else {
          local_5c = *(uint *)(param_1 + 0x374);
        }
        local_24 = local_5c;
        local_14 = *(uint *)(param_1 + 0x374);
        ResetEvent(local_48.hEvent);
        (*DAT_10022d54)(*(undefined4 *)(param_1 + 0x4e8),*(undefined4 *)(param_1 + 0x368),local_24,
                        local_c,&local_48);
        SetEvent(*(HANDLE *)(param_1 + 0x4c8));
        *(undefined1 *)(param_1 + 0x35d) = 1;
      }
    }
    else if (local_30 == 0x102) {
      SetEvent(*(HANDLE *)(param_1 + 0x4cc));
    }
  }
  SetEvent(*(HANDLE *)(param_1 + 0x4bc));
  CloseHandle(local_48.hEvent);
  *(undefined1 *)(param_1 + 0x366) = 0;
  *(undefined1 *)(param_1 + 0x361) = 0;
  return 0;
}



/* ================================================================
 * Function: FUN_1000ddd0
 * Address:  1000ddd0
 * ================================================================ */

undefined4 * FUN_1000ddd0(undefined4 param_1)

{
  undefined4 uVar1;
  HANDLE pvVar2;
  int local_98;
  undefined1 local_90 [4];
  uint local_8c;
  undefined1 local_88 [10];
  uint local_7e;
  int local_74;
  undefined4 *local_70;
  undefined1 local_6c [4];
  CHAR local_68 [100];
  
  local_74 = 0;
  local_70 = FUN_1000102f(0x1508);
  _memset(local_70,0,0x1508);
  FUN_100099a3(local_70);
  *local_70 = FUN_1000e3b1;
  local_70[1] = FUN_1000e3bd;
  local_70[2] = FUN_1000e70b;
  local_70[4] = FUN_1000e71f;
  local_70[5] = FUN_1000e94b;
  local_70[6] = FUN_1000ee56;
  local_70[0xb] = FUN_1000ee56;
  local_70[0xc] = FUN_1000f0c2;
  local_70[0x11] = FUN_1000f0e9;
  local_70[0x12] = FUN_1000f27b;
  local_70[0x31] = FUN_1000f5ce;
  local_70[0x2f] = FUN_1000f752;
  local_70[0x45] = FUN_1000f766;
  local_70[0x46] = FUN_1000f9ac;
  local_70[0x143] = FUN_1000fb8c;
  local_70[0x76] = 0;
  local_70[0x79] = 0;
  local_70[0x141] = FUN_1000f60e;
  local_70[0x142] = FUN_1000f68c;
  if (DAT_100228ec == 0) {
    DAT_100228e8 = FUN_1000c2e0();
  }
  if ((DAT_100228e8 != (HMODULE)0x0) && (DAT_10022d5c != 0)) {
    DAT_100228ec = DAT_100228ec + 1;
  }
  if (DAT_100228e0 == 0) {
    DAT_100228dc = FUN_1000c31d();
  }
  if (DAT_100228dc != (HMODULE)0x0) {
    uVar1 = (*DAT_10022d88)(&DAT_1001d170);
    local_70[0x76] = uVar1;
    DAT_100228e0 = DAT_100228e0 + 1;
  }
  if (local_70[0x76] == 0) {
    (*(code *)local_70[4])(local_70);
    local_70 = (undefined4 *)0x0;
  }
  else {
    local_70[0x6e] = param_1;
    uVar1 = (*DAT_10022d6c)(local_70[0x6e],0x40000000,&DAT_1001d170);
    local_70[0xd6] = uVar1;
    (*DAT_10022d68)(local_70[0x6e],&DAT_1001d170,local_70 + 0xeb,0xff);
    local_70[0x13b] = 0;
    local_70[0x13c] = 0;
    local_70[0x140] = 0;
    local_70[0x13f] = 0;
    local_70[0x13d] = 0;
    local_70[0x13e] = 0;
    *(undefined1 *)((int)local_70 + 0x367) = 0;
    pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
    local_70[0x12e] = pvVar2;
    pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
    local_70[0x12f] = pvVar2;
    pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
    local_70[0x131] = pvVar2;
    local_70[0xdf] = 0;
    local_70[0xdd] = 0;
    local_70[0xe0] = 0;
    *(undefined1 *)((int)local_70 + 0x35e) = 0;
    *(undefined1 *)((int)local_70 + 0x35f) = 0;
    (*DAT_10022d78)(local_70[0xd6],local_88);
    if ((local_7e & 0xffff) == 0xa026) {
      local_74 = 1;
    }
    else {
      (*(code *)local_70[4])(local_70);
      local_70 = (undefined4 *)0x0;
    }
    if (local_74 != 0) {
      (*DAT_10022d74)(local_70[0xd6],2,local_90);
      if ((local_8c & 0xffff) < 0x41) {
        for (local_98 = 0; local_98 < 5; local_98 = local_98 + 1) {
          (*DAT_10022d7c)(local_70[0xd6],2,0,0xa8,0,0,local_6c,1);
          (*DAT_10022d64)(local_70[0xd6]);
          uVar1 = (*DAT_10022d6c)(local_70[0x6e],0x40000000,&DAT_1001d170);
          local_70[0xd6] = uVar1;
          Sleep(3000);
          (*DAT_10022d74)(local_70[0xd6],2,local_90);
          if ((local_8c & 0xffff) == 0x200) {
            local_98 = 5;
          }
        }
        if ((local_8c & 0xffff) != 0x200) {
          (*(code *)local_70[4])(local_70);
          local_70 = (undefined4 *)0x0;
        }
      }
      if ((local_8c & 0xffff) == 0x200) {
        local_70[0xe5] = local_8c & 0xffff;
        pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
        local_70[0x132] = pvVar2;
        FUN_10015c95(local_68,(byte *)s_Check_Controller_Overrun_d_1001f75c);
        pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,local_68);
        local_70[0x133] = pvVar2;
        FUN_10015c95(local_68,(byte *)s_Check_USB_Errors_d_1001f778);
        pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,local_68);
        local_70[0x134] = pvVar2;
        *(undefined1 *)((int)local_70 + 0x362) = 0;
        *(undefined1 *)((int)local_70 + 0x363) = 0;
        *(undefined1 *)(local_70 + 0xd9) = 0;
        *(undefined1 *)((int)local_70 + 0x365) = 1;
        local_70[0xe2] = 0;
        *(undefined1 *)((int)local_70 + 0x35e) = 0;
        *(undefined1 *)((int)local_70 + 0x35f) = 0;
        local_70[0x130] = 0;
        *(undefined1 *)(local_70 + 0xd8) = 0;
        *(undefined1 *)((int)local_70 + 0x361) = 0;
        local_70[0xe3] = 0;
        local_70[0xe4] = 0;
        local_70[0xe6] = 2;
        local_70[0xdc] = 0;
        *(undefined1 *)((int)local_70 + 0x366) = 0;
        (*DAT_10022d60)(local_70[0xd6],2,0,0xaf,0,0,local_6c,2);
        (*DAT_10022d64)(local_70[0xd6]);
      }
    }
  }
  return local_70;
}



/* ================================================================
 * Function: FUN_1000e3b1
 * Address:  1000e3b1
 * ================================================================ */

char * FUN_1000e3b1(void)

{
  return s_PIXIS_1001f78c;
}



/* ================================================================
 * Function: FUN_1000e3bd
 * Address:  1000e3bd
 * ================================================================ */

undefined4 FUN_1000e3bd(LPVOID param_1)

{
  undefined4 uVar1;
  HANDLE pvVar2;
  
  if (*(char *)((int)param_1 + 0x367) == '\0') {
    if (*(int *)((int)param_1 + 0x1b8) == 0) {
      *(undefined4 *)((int)param_1 + 0x1b8) = 1;
    }
    uVar1 = (*DAT_10022d6c)(*(undefined4 *)((int)param_1 + 0x1b8),0x40000000,&DAT_1001d170);
    *(undefined4 *)((int)param_1 + 0x358) = uVar1;
    uVar1 = (*DAT_10022d80)(*(undefined4 *)((int)param_1 + 0x1b8),4,0x40000000,&DAT_1001d170);
    *(undefined4 *)((int)param_1 + 0x4ec) = uVar1;
    uVar1 = (*DAT_10022d80)(*(undefined4 *)((int)param_1 + 0x1b8),5,0x40000000,&DAT_1001d170);
    *(undefined4 *)((int)param_1 + 0x4f0) = uVar1;
    uVar1 = (*DAT_10022d80)(*(undefined4 *)((int)param_1 + 0x1b8),2,0x40000000,&DAT_1001d170);
    *(undefined4 *)((int)param_1 + 0x4fc) = uVar1;
    uVar1 = (*DAT_10022d80)(*(undefined4 *)((int)param_1 + 0x1b8),3,0x40000000,&DAT_1001d170);
    *(undefined4 *)((int)param_1 + 0x500) = uVar1;
    uVar1 = (*DAT_10022d80)(*(undefined4 *)((int)param_1 + 0x1b8),1,0x40000000,&DAT_1001d170);
    *(undefined4 *)((int)param_1 + 0x4f4) = uVar1;
    uVar1 = (*DAT_10022d80)(*(undefined4 *)((int)param_1 + 0x1b8),0,0x40000000,&DAT_1001d170);
    *(undefined4 *)((int)param_1 + 0x4f8) = uVar1;
    *(undefined1 *)((int)param_1 + 0x367) = 1;
  }
  if (((*(char *)((int)param_1 + 0x366) == '\0') && (*(int *)((int)param_1 + 0x374) != 0)) &&
     (*(int *)((int)param_1 + 0x37c) != 0)) {
    if (*(int *)((int)param_1 + 0x4c0) != 0) {
      CloseHandle(*(HANDLE *)((int)param_1 + 0x4c0));
    }
    pvVar2 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,
                          *(LPTHREAD_START_ROUTINE *)((int)param_1 + 0x50c),param_1,0,(LPDWORD)0x0);
    *(HANDLE *)((int)param_1 + 0x4c0) = pvVar2;
    SetThreadPriority(*(HANDLE *)((int)param_1 + 0x4c0),0xf);
    do {
      Sleep(1);
    } while (*(char *)((int)param_1 + 0x366) == '\0');
  }
  else if ((*(char *)((int)param_1 + 0x366) != '\0') &&
          (*(int *)((int)param_1 + 0x390) != *(int *)((int)param_1 + 0x37c))) {
    if (*(char *)((int)param_1 + 0x360) != '\0') {
      *(undefined1 *)((int)param_1 + 0x361) = 1;
      ResumeThread(*(HANDLE *)((int)param_1 + 0x4c0));
      WaitForSingleObject(*(HANDLE *)((int)param_1 + 0x4bc),5000);
      if (*(int *)((int)param_1 + 0x4c0) != 0) {
        CloseHandle(*(HANDLE *)((int)param_1 + 0x4c0));
      }
      pvVar2 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,
                            *(LPTHREAD_START_ROUTINE *)((int)param_1 + 0x50c),param_1,0,(LPDWORD)0x0
                           );
      *(HANDLE *)((int)param_1 + 0x4c0) = pvVar2;
      SetThreadPriority(*(HANDLE *)((int)param_1 + 0x4c0),0xf);
      do {
        Sleep(1);
      } while (*(char *)((int)param_1 + 0x366) == '\0');
    }
    *(undefined4 *)((int)param_1 + 0x38c) = *(undefined4 *)((int)param_1 + 0x374);
    *(undefined4 *)((int)param_1 + 0x390) = *(undefined4 *)((int)param_1 + 0x37c);
  }
  if (*(int *)((int)param_1 + 0x374) != *(int *)((int)param_1 + 0x38c)) {
    *(undefined4 *)((int)param_1 + 0x38c) = *(undefined4 *)((int)param_1 + 0x374);
    *(undefined4 *)((int)param_1 + 0x390) = *(undefined4 *)((int)param_1 + 0x37c);
    FUN_1000f60e((int)param_1,*(uint *)((int)param_1 + 0x374));
    FUN_1000f68c((int)param_1,*(uint *)((int)param_1 + 0x374));
  }
  if (*(char *)((int)param_1 + 0x367) == '\0') {
    (*DAT_10022d64)(*(undefined4 *)((int)param_1 + 0x358));
  }
  return 1;
}



/* ================================================================
 * Function: FUN_1000e70b
 * Address:  1000e70b
 * ================================================================ */

undefined4 FUN_1000e70b(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_1000e71f
 * Address:  1000e71f
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1000e71f(undefined *param_1)

{
  if (0 < DAT_100228e0) {
    DAT_100228e0 = DAT_100228e0 + -1;
  }
  if (0 < DAT_100228ec) {
    DAT_100228ec = DAT_100228ec + -1;
  }
  if (param_1[0x365] != '\0') {
    param_1[0x365] = 0;
    param_1[0x361] = 1;
    CloseHandle(*(HANDLE *)(param_1 + 0x4b8));
    if (param_1[0x367] != '\0') {
      (*DAT_10022d64)(*(undefined4 *)(param_1 + 0x358));
      (*DAT_10022d84)(*(undefined4 *)(param_1 + 0x4ec));
      (*DAT_10022d84)(*(undefined4 *)(param_1 + 0x4f0));
      (*DAT_10022d84)(*(undefined4 *)(param_1 + 0x4fc));
      (*DAT_10022d84)(*(undefined4 *)(param_1 + 0x500));
      (*DAT_10022d84)(*(undefined4 *)(param_1 + 0x4f4));
      (*DAT_10022d84)(*(undefined4 *)(param_1 + 0x4f8));
      param_1[0x367] = 0;
    }
    if (param_1[0x360] != '\0') {
      ResumeThread(*(HANDLE *)(param_1 + 0x4c0));
      param_1[0x362] = 1;
    }
    if (*(int *)(param_1 + 0x4c0) != 0) {
      WaitForSingleObject(*(HANDLE *)(param_1 + 0x4bc),5000);
      CloseHandle(*(HANDLE *)(param_1 + 0x4c0));
    }
    CloseHandle(*(HANDLE *)(param_1 + 0x4bc));
    CloseHandle(*(HANDLE *)(param_1 + 0x4c8));
    CloseHandle(*(HANDLE *)(param_1 + 0x4cc));
    CloseHandle(*(HANDLE *)(param_1 + 0x4d0));
    if (*(int *)(param_1 + 0x370) != 0) {
      FUN_1000104b(*(undefined **)(param_1 + 0x370));
    }
    param_1[0x361] = 0;
  }
  if ((DAT_100228dc != (HMODULE)0x0) && (DAT_100228e0 == 0)) {
    FreeLibrary(DAT_100228dc);
    DAT_100228dc = (HMODULE)0x0;
    _DAT_100228d8 = 0;
  }
  if ((DAT_100228e8 != (HMODULE)0x0) && (DAT_100228e0 == 0)) {
    FreeLibrary(DAT_100228e8);
    DAT_100228e8 = (HMODULE)0x0;
    _DAT_100228e4 = 0;
  }
  FUN_1000104b(param_1);
  return 1;
}



/* ================================================================
 * Function: FUN_1000e94b
 * Address:  1000e94b
 * ================================================================ */

int FUN_1000e94b(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  undefined1 local_144 [4];
  uint local_140;
  undefined1 local_13c;
  undefined1 local_13b;
  undefined1 local_13a;
  undefined1 local_139;
  undefined1 local_138;
  undefined1 local_137;
  undefined1 local_136;
  undefined1 local_135;
  undefined1 local_134 [16];
  HANDLE local_124;
  undefined2 local_120;
  undefined2 uStack_11e;
  undefined4 local_11c;
  undefined4 local_118;
  undefined1 local_114;
  undefined1 uStack_113;
  undefined1 uStack_112;
  byte bStack_111;
  char acStack_110 [256];
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined1 local_8 [4];
  
  local_10 = 0;
  local_f = 0;
  local_e = 0;
  local_d = 0;
  local_c = 0;
  local_b = 0;
  local_a = 0;
  local_9 = 0;
  local_118 = 2;
  local_11c = 0;
  local_114 = 0;
  uStack_113 = 0;
  uStack_112 = 0;
  bStack_111 = 0;
  uVar1 = (undefined1)param_2;
  local_140 = CONCAT31(local_140._1_3_,uVar1);
  _memset(local_134,0,0x14);
  local_124 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
  if (*(char *)(param_1 + 0x367) == '\0') {
    uVar2 = (*DAT_10022d80)(*(undefined4 *)(param_1 + 0x1b8),4,0x40000000,&DAT_1001d170);
    *(undefined4 *)(param_1 + 0x4ec) = uVar2;
    uVar2 = (*DAT_10022d80)(*(undefined4 *)(param_1 + 0x1b8),5,0x40000000,&DAT_1001d170);
    *(undefined4 *)(param_1 + 0x4f0) = uVar2;
    uVar2 = (*DAT_10022d80)(*(undefined4 *)(param_1 + 0x1b8),1,0x40000000,&DAT_1001d170);
    *(undefined4 *)(param_1 + 0x4f4) = uVar2;
    uVar2 = (*DAT_10022d80)(*(undefined4 *)(param_1 + 0x1b8),0,0x40000000,&DAT_1001d170);
    *(undefined4 *)(param_1 + 0x4f8) = uVar2;
  }
  local_13c = 1;
  local_13b = 0;
  local_139 = (undefined1)((uint)param_2 >> 8);
  local_138 = 3;
  local_137 = 0;
  local_136 = 0;
  local_135 = 0;
  if ((local_140 & 0xff) < 0x20) {
    _local_120 = CONCAT22(uStack_11e,(short)((uint)param_2 >> 0x10));
    local_13c = (undefined1)local_140;
    local_13b = (undefined1)((uint)param_2 >> 0x10);
    local_13a = (undefined1)((uint)param_2 >> 0x18);
    local_139 = 4;
    local_136 = 0;
    local_137 = 0;
    local_138 = 0;
    if ((local_140 & 0xff) == 0xb) {
      CloseHandle(local_124);
      return 0x10;
    }
    (*DAT_10022d54)(*(undefined4 *)(param_1 + 0x4f8),&local_114,4,local_144,local_134);
    local_118 = 7;
    (*DAT_10022d50)(*(undefined4 *)(param_1 + 0x4f4),&local_13c,7,local_8,10000);
  }
  else {
    local_13a = uVar1;
    if ((local_140 & 0xff) == 0x32) {
      FUN_1000f5ce(param_1);
      *(uint *)(param_1 + 0x380) = *(uint *)(param_1 + 0x37c) / *(uint *)(param_1 + 0x374);
      if (*(int *)(param_1 + 0x370) != 0) {
        FUN_1000104b(*(undefined **)(param_1 + 0x370));
      }
      pvVar3 = FUN_1000102f(*(int *)(param_1 + 0x380) << 2);
      *(void **)(param_1 + 0x370) = pvVar3;
      _memset(*(void **)(param_1 + 0x370),0,*(int *)(param_1 + 0x380) << 2);
      local_13a = 0x32;
      local_139 = 0;
      *(undefined1 *)(param_1 + 0x364) = 1;
      *(undefined4 *)(param_1 + 900) = 0;
      if (*(char *)(param_1 + 0x360) != '\0') {
        ResumeThread(*(HANDLE *)(param_1 + 0x4c0));
      }
      WaitForSingleObject(*(HANDLE *)(param_1 + 0x4c8),8000);
      ResetEvent(*(HANDLE *)(param_1 + 0x4c8));
      *(undefined1 *)(param_1 + 0x360) = 0;
    }
    else if ((local_140 & 0xff) == 0x30) {
      *(undefined1 *)(param_1 + 0x364) = 0;
    }
    else if (param_2 == 0x40) {
      (*DAT_10022d68)(*(undefined4 *)(param_1 + 0x1b8),&DAT_1001d170,acStack_110,0xff);
      iVar4 = _strcmp(acStack_110,(char *)(param_1 + 0x3ac));
      if (iVar4 != 0) {
        CloseHandle(local_124);
        return 0;
      }
    }
    (*DAT_10022d54)(*(undefined4 *)(param_1 + 0x4ec),&local_114,local_118,local_144,local_134);
    (*DAT_10022d50)(*(undefined4 *)(param_1 + 0x4f0),&local_13c,8,local_8,10000);
  }
  WaitForSingleObject(local_124,10000);
  if (*(char *)(param_1 + 0x367) == '\0') {
    (*DAT_10022d84)(*(undefined4 *)(param_1 + 0x4ec));
    (*DAT_10022d84)(*(undefined4 *)(param_1 + 0x4f0));
    (*DAT_10022d84)(*(undefined4 *)(param_1 + 0x4f4));
    (*DAT_10022d84)(*(undefined4 *)(param_1 + 0x4f8));
  }
  CloseHandle(local_124);
  return (uint)bStack_111 * 0x1000000 + (CONCAT11(bStack_111,uStack_112) & 0xff) * 0x10000 +
         (CONCAT12(bStack_111,CONCAT11(uStack_112,uStack_113)) & 0xff) * 0x100 +
         (CONCAT12(uStack_112,CONCAT11(uStack_113,local_114)) & 0xff);
}



/* ================================================================
 * Function: FUN_1000ee56
 * Address:  1000ee56
 * ================================================================ */

undefined4 FUN_1000ee56(int param_1,uint param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 uVar5;
  undefined1 local_120;
  undefined1 local_11f;
  undefined1 local_11e;
  undefined1 local_11d;
  undefined1 local_11c;
  undefined1 local_11b;
  undefined1 local_11a;
  undefined1 local_119;
  undefined2 local_118;
  undefined2 uStack_116;
  undefined4 local_114;
  char local_110 [256];
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined4 local_8;
  
  local_10 = 0;
  local_f = 0;
  local_e = 0;
  local_d = 0;
  local_c = 0;
  local_b = 0;
  local_a = 0;
  local_9 = 0;
  local_114 = 8;
  uVar2 = (undefined1)param_2;
  local_120 = 1;
  local_11f = 0;
  local_11d = (undefined1)(param_2 >> 8);
  local_11c = 2;
  local_11b = 0;
  uVar1 = (undefined1)param_3;
  uVar5 = (undefined1)((uint)param_3 >> 8);
  local_11e = uVar2;
  local_11a = uVar1;
  local_119 = uVar5;
  if (*(char *)(param_1 + 0x367) == '\0') {
    uVar3 = (*DAT_10022d80)(*(undefined4 *)(param_1 + 0x1b8),5,0x40000000,&DAT_1001d170);
    *(undefined4 *)(param_1 + 0x4f0) = uVar3;
    uVar3 = (*DAT_10022d80)(*(undefined4 *)(param_1 + 0x1b8),1,0x40000000,&DAT_1001d170);
    *(undefined4 *)(param_1 + 0x4f4) = uVar3;
  }
  if (param_2 < 0x20) {
    _local_118 = CONCAT22(uStack_116,(short)(param_2 >> 0x10));
    local_11f = (undefined1)(param_2 >> 0x10);
    local_11e = (undefined1)(param_2 >> 0x18);
    local_11d = 4;
    local_11b = 0;
    local_11c = 0;
    if ((param_2 & 0xff) == 10) {
      return 1;
    }
    local_120 = uVar2;
    local_11a = uVar5;
    local_119 = uVar1;
    (*DAT_10022d50)(*(undefined4 *)(param_1 + 0x4f4),&local_120,local_114,&local_8,10000);
  }
  else {
    if (param_2 == 0x40) {
      (*DAT_10022d68)(*(undefined4 *)(param_1 + 0x1b8),&DAT_1001d170,local_110,0xff);
      iVar4 = _strcmp(local_110,(char *)(param_1 + 0x3ac));
      if (iVar4 != 0) {
        return 0;
      }
    }
    (*DAT_10022d50)(*(undefined4 *)(param_1 + 0x4f0),&local_120,local_114,&local_8,10000);
  }
  if (*(char *)(param_1 + 0x367) == '\0') {
    (*DAT_10022d84)(*(undefined4 *)(param_1 + 0x4f0));
    (*DAT_10022d84)(*(undefined4 *)(param_1 + 0x4f4));
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_1000f0c2
 * Address:  1000f0c2
 * ================================================================ */

undefined4 FUN_1000f0c2(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1ac) = param_2;
  return 1;
}



/* ================================================================
 * Function: FUN_1000f0e9
 * Address:  1000f0e9
 * ================================================================ */

undefined4 FUN_1000f0e9(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  DWORD DVar1;
  undefined1 local_40 [4];
  undefined1 local_3c;
  undefined3 uStack_3b;
  undefined4 local_34;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_28 [16];
  HANDLE local_18;
  undefined2 local_14;
  undefined2 uStack_12;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined1 local_8 [4];
  
  local_10 = 0;
  local_f = 0;
  local_e = 0;
  local_d = 0;
  local_c = 0;
  local_b = 0;
  local_a = 0;
  local_9 = 0;
  _local_3c = CONCAT31(uStack_3b,(char)param_2);
  local_34 = 0;
  if (((param_2 & 0xff) == 0) || (0x1f < (param_2 & 0xff))) {
    DVar1 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x4b8),0);
    if (DVar1 == 0) {
      local_34 = *(undefined4 *)(param_1 + 0x388);
      *(undefined4 *)(param_1 + 0x388) = 0;
    }
  }
  else {
    _local_14 = CONCAT22(uStack_12,(short)(param_2 >> 0x10));
    _memset(local_28,0,0x14);
    local_18 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
    local_30 = local_3c;
    local_2f = (undefined1)_local_14;
    local_2e = (undefined1)((uint)_local_14 >> 8);
    local_2d = (undefined1)param_4;
    local_2c = (undefined1)((uint)param_4 >> 8);
    local_2b = (undefined1)((uint)param_4 >> 0x10);
    local_2a = (undefined1)((uint)param_4 >> 0x18);
    (*DAT_10022d54)(*(undefined4 *)(param_1 + 0x4f8),param_3,param_4,local_40,local_28);
    (*DAT_10022d50)(*(undefined4 *)(param_1 + 0x4f4),&local_30,7,local_8,10000);
    WaitForSingleObject(local_18,10000);
    CloseHandle(local_18);
    local_34 = 1;
  }
  return local_34;
}



/* ================================================================
 * Function: FUN_1000f27b
 * Address:  1000f27b
 * ================================================================ */

uint FUN_1000f27b(int param_1,uint param_2,undefined1 *param_3,uint param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  int local_34;
  uint local_2c;
  uint local_24;
  uint local_18;
  int local_c [2];
  
  local_c[1] = 0;
  puVar1 = FUN_1000102f(param_4 * 4 + 4);
  if (*(char *)(param_1 + 0x367) == '\0') {
    uVar2 = (*DAT_10022d80)(*(undefined4 *)(param_1 + 0x1b8),5,0x40000000,&DAT_1001d170);
    *(undefined4 *)(param_1 + 0x4f0) = uVar2;
    uVar2 = (*DAT_10022d80)(*(undefined4 *)(param_1 + 0x1b8),1,0x40000000,&DAT_1001d170);
    *(undefined4 *)(param_1 + 0x4f4) = uVar2;
  }
  local_2c = param_4;
  if ((param_2 & 0xff) < 0x20) {
    *puVar1 = (char)param_2;
    puVar1[1] = (char)(param_2 >> 0x10);
    puVar1[2] = (char)(param_2 >> 0x18);
    puVar1[3] = (char)param_4;
    puVar1[4] = (char)(param_4 >> 8);
    puVar1[5] = (char)(param_4 >> 0x10);
    puVar1[6] = (char)(param_4 >> 0x18);
    for (local_24 = 0; local_24 < param_4; local_24 = local_24 + 1) {
      puVar1[local_24 + 7] = *param_3;
      param_3 = param_3 + 1;
    }
    local_2c = param_4 + 7;
    local_34 = 0;
    if ((param_2 & 0xff) == 8) {
      (*DAT_10022d50)(*(undefined4 *)(param_1 + 0x4f4),puVar1,7,local_c,0xffffffff);
      (*DAT_10022d50)(*(undefined4 *)(param_1 + 0x4f4),puVar1 + 7,param_4,local_c,0xffffffff);
    }
    else {
      for (; local_2c != 0; local_2c = local_2c - local_c[0]) {
        if (local_2c < 0x41) {
          local_18 = local_2c;
        }
        else {
          local_18 = 0x40;
        }
        (*DAT_10022d50)(*(undefined4 *)(param_1 + 0x4f4),puVar1 + local_34,local_18,local_c,
                        0xffffffff);
        local_34 = local_34 + local_c[0];
      }
    }
  }
  else {
    *puVar1 = 1;
    puVar1[1] = 0;
    puVar1[2] = (char)param_2;
    puVar1[3] = (char)(param_2 >> 8);
    while (local_2c != 0) {
      for (local_24 = 0; local_24 < param_4 * 4; local_24 = local_24 + 4) {
        puVar1[local_24 + 4] = 2;
        puVar1[local_24 + 5] = 0;
        puVar1[local_24 + 6] = *param_3;
        puVar1[local_24 + 7] = 0;
        param_3 = param_3 + 1;
        local_2c = local_2c - 1;
      }
    }
    (*DAT_10022d50)(*(undefined4 *)(param_1 + 0x4f0),puVar1,param_4 * 4 + 4,local_c,0xffffffff);
  }
  if (*(char *)(param_1 + 0x367) == '\0') {
    (*DAT_10022d84)(*(undefined4 *)(param_1 + 0x4f0));
    (*DAT_10022d84)(*(undefined4 *)(param_1 + 0x4f4));
  }
  FUN_1000104b(puVar1);
  return param_4;
}



/* ================================================================
 * Function: FUN_1000f5ce
 * Address:  1000f5ce
 * ================================================================ */

undefined4 FUN_1000f5ce(int param_1)

{
  undefined4 uVar1;
  undefined1 local_8 [4];
  
  local_8[0] = 0;
  uVar1 = (*DAT_10022d7c)(*(undefined4 *)(param_1 + 0x358),2,0,0xf0,0,0,local_8,1,0);
  return uVar1;
}



/* ================================================================
 * Function: FUN_1000f60e
 * Address:  1000f60e
 * ================================================================ */

undefined4 FUN_1000f60e(int param_1,uint param_2)

{
  uint uVar1;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  byte local_5;
  
  uVar1 = param_2 >> 1;
  local_8 = (undefined1)uVar1;
  local_7 = (undefined1)(uVar1 >> 8);
  local_6 = (undefined1)(uVar1 >> 0x10);
  local_5 = (byte)(param_2 >> 0x19);
  FUN_1000f27b(param_1,2,&local_8,4);
  return 0;
}



/* ================================================================
 * Function: FUN_1000f68c
 * Address:  1000f68c
 * ================================================================ */

undefined4 FUN_1000f68c(int param_1,uint param_2)

{
  uint uVar1;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  byte local_5;
  
  uVar1 = param_2 >> 1;
  local_8 = (undefined1)uVar1;
  local_7 = (undefined1)(uVar1 >> 8);
  local_6 = (undefined1)(uVar1 >> 0x10);
  local_5 = (byte)(param_2 >> 0x19);
  FUN_1000f27b(param_1,6,&local_8,4);
  return 0;
}



/* ================================================================
 * Function: FUN_1000f70a
 * Address:  1000f70a
 * ================================================================ */

undefined4 FUN_1000f70a(int param_1)

{
  FUN_1000e94b(param_1,3);
  return 0;
}



/* ================================================================
 * Function: FUN_1000f72e
 * Address:  1000f72e
 * ================================================================ */

undefined4 FUN_1000f72e(int param_1)

{
  FUN_1000e94b(param_1,7);
  return 0;
}



/* ================================================================
 * Function: FUN_1000f752
 * Address:  1000f752
 * ================================================================ */

undefined4 FUN_1000f752(void)

{
  return 0;
}



/* ================================================================
 * Function: FUN_1000f766
 * Address:  1000f766
 * ================================================================ */

undefined4 FUN_1000f766(int param_1,undefined4 param_2,int param_3)

{
  undefined4 local_8;
  
  local_8 = 1;
  switch(param_2) {
  case 3:
    *(int *)(param_1 + 0x378) = param_3;
    break;
  default:
    local_8 = 0;
    break;
  case 0xc:
    *(int *)(param_1 + 0x374) = param_3;
    break;
  case 0x1e:
    if (*(int *)(param_1 + 0x1d8) == 1) {
      (**(code **)(param_1 + 0x30))(param_1,0);
    }
    else {
      (**(code **)(param_1 + 0x30))(param_1,*(int *)(param_1 + 0x1b8) + -1);
    }
    break;
  case 0x20:
    if (param_3 != *(int *)(param_1 + 0x368)) {
      if (*(char *)(param_1 + 0x35e) != '\0') {
        (*DAT_10022d5c)(*(undefined4 *)(*(int *)(param_1 + 0x4fc) + 4));
      }
      if (*(char *)(param_1 + 0x35f) != '\0') {
        (*DAT_10022d5c)(*(undefined4 *)(*(int *)(param_1 + 0x500) + 4));
      }
      *(undefined1 *)(param_1 + 0x35f) = 0;
      *(undefined1 *)(param_1 + 0x35e) = 0;
      *(int *)(param_1 + 0x368) = param_3;
    }
    break;
  case 0x30:
    *(int *)(param_1 + 0x398) = param_3;
    break;
  case 0x32:
    *(undefined4 *)(*(int *)(param_1 + 0x370) + param_3 * 4) = 1;
    break;
  case 0x33:
    *(int *)(param_1 + 0x39c) = param_3;
    *(undefined4 *)(*(int *)(param_1 + 0x370) + param_3 * 4) = 0;
    break;
  case 0x67:
    if ((*(char *)(param_1 + 0x366) != '\0') && (*(char *)(param_1 + 0x360) == '\0')) {
      *(undefined1 *)(param_1 + 0x362) = 1;
      SetEvent(*(HANDLE *)(param_1 + 0x4c4));
      do {
        Sleep(1);
      } while (*(char *)(param_1 + 0x360) == '\0');
    }
    break;
  case 0x68:
    *(int *)(param_1 + 0x37c) = param_3;
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_1000f9ac
 * Address:  1000f9ac
 * ================================================================ */

undefined4 FUN_1000f9ac(int param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  undefined1 local_14 [4];
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  local_c = 1;
  switch(param_2) {
  case 8:
    *param_3 = *(uint *)(param_1 + 0x1ac);
    break;
  default:
    local_c = 0;
    break;
  case 0xc:
    uVar1 = (**(code **)(param_1 + 0xbc))(param_1);
    *param_3 = uVar1;
    break;
  case 0x10:
    uVar1 = (*DAT_10022d88)(&DAT_1001d170);
    *param_3 = uVar1;
    if (*param_3 == 0) {
      (*DAT_10022d5c)(*(undefined4 *)(*(int *)(param_1 + 0x4fc) + 4));
      (*DAT_10022d5c)(*(undefined4 *)(*(int *)(param_1 + 0x500) + 4));
      (*DAT_10022d58)(*(undefined4 *)(param_1 + 0x358));
      SetEvent(*(HANDLE *)(param_1 + 0x4c4));
    }
    break;
  case 0x4c:
    *param_3 = *(uint *)(param_1 + 0x3a0);
    break;
  case 0x51:
    (*DAT_10022d7c)(*(undefined4 *)(param_1 + 0x358),2,0,0xf1,0,0,&local_8,2);
    *param_3 = (local_8 & 0xff) + (local_8 >> 8 & 0xff) * 0x100;
    break;
  case 0x54:
    *param_3 = *(uint *)(param_1 + 0x20c);
    break;
  case 0x69:
    (*DAT_10022d74)(*(undefined4 *)(param_1 + 0x358),2,local_14);
    *param_3 = local_10 & 0xffff;
  }
  return local_c;
}



/* ================================================================
 * Function: FUN_1000fb8c
 * Address:  1000fb8c
 * ================================================================ */

undefined4 FUN_1000fb8c(int param_1)

{
  bool bVar1;
  bool bVar2;
  DWORD DVar3;
  uint uVar4;
  BOOL BVar5;
  int iVar6;
  short sVar7;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_88;
  uint local_84;
  _OVERLAPPED local_6c;
  uint local_58;
  undefined4 local_54;
  uint local_50;
  uint local_4c;
  int local_48;
  HANDLE local_44;
  HANDLE local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_34;
  _OVERLAPPED local_30;
  uint local_1c;
  uint local_18;
  DWORD local_14;
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  local_18 = 0;
  local_c = 0;
  if (*(uint *)(param_1 + 0x378) < *(uint *)(param_1 + 0x374)) {
    local_98 = *(uint *)(param_1 + 0x378);
  }
  else {
    local_98 = *(uint *)(param_1 + 0x374);
  }
  local_58 = local_98;
  local_14 = 0;
  local_48 = 0;
  local_50 = 0;
  bVar1 = true;
  bVar2 = true;
  local_38 = 0;
  local_54 = *(undefined4 *)(param_1 + 0x368);
  sVar7 = (short)(*(uint *)(param_1 + 0x374) / *(uint *)(param_1 + 0x378));
  if (*(uint *)(param_1 + 0x374) % *(uint *)(param_1 + 0x378) != 0) {
    sVar7 = sVar7 + 1;
  }
  local_10 = CONCAT22(local_10._2_2_,sVar7);
  _memset(&local_30,0,0x14);
  _memset(&local_6c,0,0x14);
  local_30.hEvent = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
  local_6c.hEvent = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
  local_44 = local_30.hEvent;
  local_3c = *(undefined4 *)(param_1 + 0x4c4);
  *(undefined4 *)(param_1 + 0x39c) = 0;
  *(undefined4 *)(param_1 + 900) = 0;
  local_18 = *(uint *)(param_1 + 0x37c) / *(uint *)(param_1 + 0x374);
  local_1c = (uint)(1 < local_18);
  local_88 = *(uint *)(param_1 + 0x374);
  local_50 = local_88;
  local_40 = local_6c.hEvent;
  if (local_1c == 0) {
    if ((local_10 & 0xffff) < 2) {
      local_90 = *(uint *)(param_1 + 0x374);
      local_4c = 0;
      local_8 = 0;
      local_84 = 0;
      local_94 = 0;
      local_34 = local_90;
      (*DAT_10022d54)(*(undefined4 *)(param_1 + 0x4fc),*(undefined4 *)(param_1 + 0x368),local_90,
                      &local_14,&local_30);
      *(undefined1 *)(param_1 + 0x35e) = 1;
    }
    else {
      local_34 = *(uint *)(param_1 + 0x374);
      local_8 = 0;
      local_4c = 0;
      (*DAT_10022d54)(*(undefined4 *)(param_1 + 0x4fc),*(undefined4 *)(param_1 + 0x368),local_58,
                      &local_14,&local_30);
      *(undefined1 *)(param_1 + 0x35e) = 1;
    }
    *(undefined1 *)(param_1 + 0x35f) = 0;
  }
  else if (local_1c == 1) {
    local_34 = *(uint *)(param_1 + 0x374);
    local_90 = *(uint *)(param_1 + 0x374);
    local_8 = 0;
    local_94 = 1 % local_18;
    local_4c = (local_94 + 1) % local_18;
    local_84 = (local_4c + 1) % local_18;
    (*DAT_10022d54)(*(undefined4 *)(param_1 + 0x4fc),*(undefined4 *)(param_1 + 0x368),local_58,
                    &local_14,&local_30);
    (*DAT_10022d54)(*(undefined4 *)(param_1 + 0x500),
                    *(int *)(param_1 + 0x368) + *(int *)(param_1 + 0x374),local_58,&local_14,
                    &local_6c);
    *(undefined1 *)(param_1 + 0x35e) = 1;
    *(undefined1 *)(param_1 + 0x35f) = 1;
  }
  FUN_1000f60e(param_1,local_34);
  FUN_1000f68c(param_1,local_90);
  *(undefined1 *)(param_1 + 0x366) = 1;
  *(undefined1 *)(param_1 + 0x360) = 1;
  SuspendThread(*(HANDLE *)(param_1 + 0x4c0));
  SetEvent(*(HANDLE *)(param_1 + 0x4c8));
  while (*(char *)(param_1 + 0x361) == '\0') {
    DVar3 = WaitForMultipleObjects(3,&local_44,0,local_58 / 4000 + 1000);
    if (DVar3 < 3) {
      if (DVar3 == 2) {
        *(undefined1 *)(param_1 + 0x362) = 0;
        local_48 = 0;
        if (*(char *)(param_1 + 0x35e) != '\0') {
          (*DAT_10022d5c)(*(undefined4 *)(*(int *)(param_1 + 0x4fc) + 4));
          *(undefined1 *)(param_1 + 0x35e) = 0;
        }
        if (*(char *)(param_1 + 0x35f) != '\0') {
          (*DAT_10022d5c)(*(undefined4 *)(*(int *)(param_1 + 0x500) + 4));
          *(undefined1 *)(param_1 + 0x35f) = 0;
        }
        ResetEvent(*(HANDLE *)(param_1 + 0x4c4));
        *(undefined1 *)(param_1 + 0x360) = 1;
        *(undefined4 *)(param_1 + 0x388) = 0;
        SuspendThread(*(HANDLE *)(param_1 + 0x4c0));
        if (*(char *)(param_1 + 0x361) == '\0') {
          local_30.InternalHigh = 0;
          local_6c.InternalHigh = 0;
          if (*(uint *)(param_1 + 0x378) < *(uint *)(param_1 + 0x374)) {
            local_c4 = *(uint *)(param_1 + 0x378);
          }
          else {
            local_c4 = *(uint *)(param_1 + 0x374);
          }
          local_58 = local_c4;
          local_88 = *(uint *)(param_1 + 0x374);
          local_50 = local_88;
          ResetEvent(local_30.hEvent);
          ResetEvent(local_6c.hEvent);
          local_34 = *(uint *)(param_1 + 0x374);
          local_8 = 0;
          local_94 = 1 % local_18;
          local_4c = (local_94 + 1) % local_18;
          local_84 = (local_4c + 1) % local_18;
          (*DAT_10022d54)(*(undefined4 *)(param_1 + 0x4fc),*(undefined4 *)(param_1 + 0x368),local_58
                          ,&local_14,&local_30);
          local_48 = local_94 * *(int *)(param_1 + 0x374);
          local_18 = *(uint *)(param_1 + 0x37c) / *(uint *)(param_1 + 0x374);
          if (1 < local_18) {
            (*DAT_10022d54)(*(undefined4 *)(param_1 + 0x500),*(int *)(param_1 + 0x368) + local_48,
                            local_58,&local_14,&local_6c);
            *(undefined1 *)(param_1 + 0x35f) = 1;
          }
          SetEvent(*(HANDLE *)(param_1 + 0x4c8));
          *(undefined1 *)(param_1 + 0x35e) = 1;
        }
      }
      else if (DVar3 == 0) {
        ResetEvent(local_30.hEvent);
        *(ULONG_PTR *)(param_1 + 0x388) = *(int *)(param_1 + 0x388) + local_30.InternalHigh;
        if (local_30.InternalHigh == 0) {
          BVar5 = GetOverlappedResult(*(HANDLE *)(param_1 + 0x4fc),&local_30,&local_14,0);
          if ((BVar5 == 0) && ((DVar3 = GetLastError(), DVar3 == 0x1f || (DVar3 == 0xaa)))) {
            *(undefined1 *)(param_1 + 0x362) = 1;
            *(undefined1 *)(param_1 + 0x35e) = 0;
            (*DAT_10022d58)(*(undefined4 *)(param_1 + 0x358));
            SetEvent(*(HANDLE *)(param_1 + 0x4c4));
            bVar1 = false;
            SetEvent(*(HANDLE *)(param_1 + 0x4d0));
          }
        }
        else {
          *(undefined1 *)(param_1 + 0x35e) = 0;
          if (local_88 < local_30.InternalHigh) {
            bVar1 = false;
            *(undefined1 *)(param_1 + 0x362) = 1;
            *(undefined1 *)(param_1 + 0x35e) = 0;
            SetEvent(*(HANDLE *)(param_1 + 0x4c4));
          }
          else {
            local_88 = local_88 - local_30.InternalHigh;
            if (local_1c == 0) {
              if ((local_10 & 0xffff) == 1) {
                local_48 = 0;
                local_34 = *(uint *)(param_1 + 0x374);
                SetEvent(*(HANDLE *)(param_1 + 0x4b8));
                local_58 = 0;
              }
              else {
                local_48 = *(int *)(param_1 + 0x388);
                if (*(uint *)(param_1 + 0x378) <
                    (uint)(*(int *)(param_1 + 0x374) - *(int *)(param_1 + 0x388))) {
                  local_a8 = *(uint *)(param_1 + 0x378);
                }
                else {
                  local_a8 = *(int *)(param_1 + 0x374) - *(int *)(param_1 + 0x388);
                }
                local_58 = local_a8;
                if (*(int *)(param_1 + 0x388) == *(int *)(param_1 + 0x374)) {
                  local_48 = 0;
                  local_8 = local_4c;
                  local_4c = local_4c + 1;
                  *(undefined4 *)(*(int *)(param_1 + 0x370) + *(int *)(param_1 + 900) * 4) = 1;
                  SetEvent(*(HANDLE *)(param_1 + 0x4b8));
                  uVar4 = FUN_10010a6f(param_1);
                  if ((uVar4 & 0xff) != 0) {
                    SetEvent(*(HANDLE *)(param_1 + 0x4cc));
                  }
                  local_58 = 0;
                }
              }
            }
            else if (local_1c == 1) {
              if (local_88 == 0) {
                *(undefined4 *)(*(int *)(param_1 + 0x370) + *(int *)(param_1 + 900) * 4) = 1;
                *(uint *)(param_1 + 900) =
                     (*(int *)(param_1 + 900) + 1U) % *(uint *)(param_1 + 0x380);
                SetEvent(*(HANDLE *)(param_1 + 0x4b8));
                uVar4 = FUN_10010a6f(param_1);
                if ((uVar4 & 0xff) != 0) {
                  SetEvent(*(HANDLE *)(param_1 + 0x4cc));
                }
                local_8 = local_4c;
                if (*(uint *)(param_1 + 0x378) < *(uint *)(param_1 + 0x374)) {
                  local_b0 = *(uint *)(param_1 + 0x378);
                }
                else {
                  local_b0 = *(uint *)(param_1 + 0x374);
                }
                local_58 = local_b0;
                local_48 = *(int *)(param_1 + 0x374) * local_4c;
                local_4c = (local_4c + 2) % local_18;
              }
              else {
                if (*(uint *)(param_1 + 0x378) <
                    (uint)(*(int *)(param_1 + 0x374) - *(int *)(param_1 + 0x388))) {
                  local_ac = *(uint *)(param_1 + 0x378);
                }
                else {
                  local_ac = *(int *)(param_1 + 0x374) - *(int *)(param_1 + 0x388);
                }
                local_58 = local_ac;
                local_48 = *(int *)(param_1 + 0x388) + *(int *)(param_1 + 0x374) * local_8;
              }
            }
            if ((*(int *)(*(int *)(param_1 + 0x370) + *(int *)(param_1 + 900) * 4) == 0) ||
               (*(int *)(param_1 + 0x398) != 3)) {
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
          }
        }
        if (((*(char *)(param_1 + 0x362) == '\0') && (bVar1)) &&
           (iVar6 = (*DAT_10022d54)(*(undefined4 *)(param_1 + 0x4fc),
                                    *(int *)(param_1 + 0x368) + local_48,local_58,&local_14,
                                    &local_30), iVar6 == 0)) {
          GetLastError();
          *(undefined1 *)(param_1 + 0x35e) = 1;
          if (local_88 == 0) {
            local_88 = *(uint *)(param_1 + 0x374);
          }
        }
      }
      else if (DVar3 == 1) {
        ResetEvent(local_6c.hEvent);
        *(ULONG_PTR *)(param_1 + 0x388) = *(int *)(param_1 + 0x388) + local_6c.InternalHigh;
        if (local_6c.InternalHigh == 0) {
          BVar5 = GetOverlappedResult(*(HANDLE *)(param_1 + 0x500),&local_6c,&local_14,0);
          if ((BVar5 == 0) && ((DVar3 = GetLastError(), DVar3 == 0x1f || (DVar3 == 0xaa)))) {
            *(undefined1 *)(param_1 + 0x362) = 1;
            *(undefined1 *)(param_1 + 0x35f) = 0;
            (*DAT_10022d58)(*(undefined4 *)(param_1 + 0x358));
            SetEvent(*(HANDLE *)(param_1 + 0x4c4));
            bVar2 = false;
            SetEvent(*(HANDLE *)(param_1 + 0x4d0));
          }
        }
        else {
          *(undefined1 *)(param_1 + 0x35f) = 0;
          if (local_50 < local_6c.InternalHigh) {
            bVar2 = false;
            *(undefined1 *)(param_1 + 0x362) = 1;
            *(undefined1 *)(param_1 + 0x35f) = 0;
            SetEvent(*(HANDLE *)(param_1 + 0x4c4));
          }
          else {
            local_50 = local_50 - local_6c.InternalHigh;
            if (local_1c == 0) {
              if ((local_10 & 0xffff) == 1) {
                SetEvent(*(HANDLE *)(param_1 + 0x4b8));
                local_48 = 0;
                local_58 = 0;
              }
              else {
                local_48 = *(int *)(param_1 + 0x388);
                if (*(uint *)(param_1 + 0x378) <
                    (uint)(*(int *)(param_1 + 0x374) - *(int *)(param_1 + 0x388))) {
                  local_b8 = *(uint *)(param_1 + 0x378);
                }
                else {
                  local_b8 = *(int *)(param_1 + 0x374) - *(int *)(param_1 + 0x388);
                }
                local_58 = local_b8;
                if (*(int *)(param_1 + 0x388) == *(int *)(param_1 + 0x374)) {
                  local_48 = 0;
                  local_94 = local_84;
                  local_84 = local_84 + 1;
                  *(undefined4 *)(*(int *)(param_1 + 0x370) + *(int *)(param_1 + 900) * 4) = 1;
                  SetEvent(*(HANDLE *)(param_1 + 0x4b8));
                  uVar4 = FUN_10010a6f(param_1);
                  if ((uVar4 & 0xff) != 0) {
                    SetEvent(*(HANDLE *)(param_1 + 0x4cc));
                  }
                  local_58 = 0;
                }
              }
            }
            else if (local_1c == 1) {
              if (local_50 == 0) {
                *(undefined4 *)(*(int *)(param_1 + 0x370) + *(int *)(param_1 + 900) * 4) = 1;
                *(uint *)(param_1 + 900) =
                     (*(int *)(param_1 + 900) + 1U) % *(uint *)(param_1 + 0x380);
                SetEvent(*(HANDLE *)(param_1 + 0x4b8));
                uVar4 = FUN_10010a6f(param_1);
                if ((uVar4 & 0xff) != 0) {
                  SetEvent(*(HANDLE *)(param_1 + 0x4cc));
                }
                local_94 = local_84;
                local_48 = *(int *)(param_1 + 0x374) * local_84;
                if (*(uint *)(param_1 + 0x378) < *(uint *)(param_1 + 0x374)) {
                  local_c0 = *(uint *)(param_1 + 0x378);
                }
                else {
                  local_c0 = *(uint *)(param_1 + 0x374);
                }
                local_58 = local_c0;
                local_84 = (local_84 + 2) % local_18;
              }
              else {
                if (*(uint *)(param_1 + 0x378) <
                    (uint)(*(int *)(param_1 + 0x374) - *(int *)(param_1 + 0x388))) {
                  local_bc = *(uint *)(param_1 + 0x378);
                }
                else {
                  local_bc = *(int *)(param_1 + 0x374) - *(int *)(param_1 + 0x388);
                }
                local_58 = local_bc;
                local_48 = *(int *)(param_1 + 0x388) + *(int *)(param_1 + 0x374) * local_94;
              }
            }
            if ((*(int *)(*(int *)(param_1 + 0x370) + *(int *)(param_1 + 900) * 4) == 0) ||
               (*(int *)(param_1 + 0x398) != 3)) {
              bVar2 = true;
            }
            else {
              bVar2 = false;
            }
          }
        }
        if (((*(char *)(param_1 + 0x362) == '\0') && (bVar2)) &&
           (iVar6 = (*DAT_10022d54)(*(undefined4 *)(param_1 + 0x500),
                                    *(int *)(param_1 + 0x368) + local_48,local_58,&local_14,
                                    &local_6c), iVar6 == 0)) {
          GetLastError();
          *(undefined1 *)(param_1 + 0x35f) = 1;
          if (local_50 == 0) {
            local_50 = *(uint *)(param_1 + 0x374);
          }
        }
      }
    }
    else if ((DVar3 == 0x102) && (uVar4 = FUN_10010a6f(param_1), (uVar4 & 0xff) != 0)) {
      SetEvent(*(HANDLE *)(param_1 + 0x4cc));
    }
  }
  SetEvent(*(HANDLE *)(param_1 + 0x4bc));
  CloseHandle(local_30.hEvent);
  CloseHandle(local_6c.hEvent);
  *(undefined1 *)(param_1 + 0x366) = 0;
  *(undefined1 *)(param_1 + 0x361) = 0;
  return 0;
}



/* ================================================================
 * Function: FUN_10010a6f
 * Address:  10010a6f
 * ================================================================ */

uint FUN_10010a6f(int param_1)

{
  undefined4 uVar1;
  uint local_8;
  
  local_8 = 0;
  uVar1 = (*DAT_10022d7c)(*(undefined4 *)(param_1 + 0x358),2,0,0xae,0,0,&local_8,1);
  return CONCAT31((int3)((uint)uVar1 >> 8),(undefined1)local_8);
}



/* ================================================================
 * Function: FUN_10010ab0
 * Address:  10010ab0
 * ================================================================ */

undefined4 FUN_10010ab0(undefined4 param_1,int param_2)

{
  if (param_2 == 1) {
    DAT_10022d4c = param_1;
  }
  return 1;
}



/* ================================================================
 * Function: FUN_10010ad6
 * Address:  10010ad6
 * ================================================================ */

void FUN_10010ad6(void)

{
  return;
}



/* ================================================================
 * Function: FUN_10010add
 * Address:  10010add
 * ================================================================ */

undefined4 __cdecl FUN_10010add(undefined4 param_1,undefined4 param_2,LPCSTR param_3)

{
  MessageBoxA((HWND)0x0,s_Error_report_1001f798,param_3,0);
  return 0;
}



/* ================================================================
 * Function: FUN_10010af7
 * Address:  10010af7
 * ================================================================ */

void FUN_10010af7(void)

{
  char *local_8;
  
  DAT_100228f0 = 0;
  local_8 = &DAT_100228f0;
  FUN_10015370((uint *)&DAT_100228f0,(uint *)s_PIXCM_DLL_RS_INTERNAL_ERROR__1001f7a8);
  for (; *local_8 != '\0'; local_8 = local_8 + 1) {
  }
  FUN_10010ad6();
  MessageBoxA((HWND)0x0,s_Error_report_1001f7c8,&DAT_100228f0,0);
  return;
}



/* ================================================================
 * Function: PIPP_Create_physical_port
 * Address:  10010b6b
 * ================================================================ */

undefined4 * PIPP_Create_physical_port(int param_1)

{
  undefined4 *puVar1;
  
                    /* 0x10b6b  1  PIPP_Create_physical_port */
  puVar1 = PIPP_Create_physical_port_ex(param_1,1);
  return puVar1;
}



/* ================================================================
 * Function: _PIPP_HookGenericFcns@4
 * Address:  10010b86
 * ================================================================ */

void _PIPP_HookGenericFcns_4(undefined4 *param_1)

{
                    /* 0x10b86  53  _PIPP_HookGenericFcns@4 */
  FUN_100099a3(param_1);
  return;
}



/* ================================================================
 * Function: PIPP_Get_classname
 * Address:  10010b9f
 * ================================================================ */

undefined4 PIPP_Get_classname(undefined4 *param_1)

{
  undefined4 uVar1;
  
                    /* 0x10b9f  2  PIPP_Get_classname */
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)*param_1)(param_1);
  }
  return uVar1;
}



/* ================================================================
 * Function: PIPP_Enable_DMA_Communication
 * Address:  10010bc2
 * ================================================================ */

void PIPP_Enable_DMA_Communication(int param_1)

{
                    /* 0x10bc2  3  PIPP_Enable_DMA_Communication */
  (**(code **)(param_1 + 0xc))(param_1);
  return;
}



/* ================================================================
 * Function: PIPP_Reset_Interface
 * Address:  10010bdc
 * ================================================================ */

void PIPP_Reset_Interface(int param_1)

{
                    /* 0x10bdc  4  PIPP_Reset_Interface */
  (**(code **)(param_1 + 8))(param_1);
  return;
}



/* ================================================================
 * Function: PIPP_Special_Output
 * Address:  10010bf6
 * ================================================================ */

void PIPP_Special_Output(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* 0x10bf6  5  PIPP_Special_Output */
  (**(code **)(param_1 + 0x2c))(param_1,param_2,param_3);
  return;
}



/* ================================================================
 * Function: PIPP_Output_Multiple
 * Address:  10010c18
 * ================================================================ */

undefined4
PIPP_Output_Multiple(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
                    /* 0x10c18  6  PIPP_Output_Multiple */
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(param_1 + 0x48))(param_1,param_2,param_3,param_4);
  }
  return uVar1;
}



/* ================================================================
 * Function: PIPP_Initialize
 * Address:  10010c48
 * ================================================================ */

undefined4 PIPP_Initialize(int param_1)

{
  undefined4 uVar1;
  
                    /* 0x10c48  7  PIPP_Initialize */
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(param_1 + 4))(param_1);
  }
  return uVar1;
}



/* ================================================================
 * Function: PIPP_Destroy
 * Address:  10010c6c
 * ================================================================ */

undefined4 PIPP_Destroy(int param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  
                    /* 0x10c6c  8  PIPP_Destroy */
  bVar2 = false;
  DAT_100229b8 = DAT_100229bc;
  if (DAT_100229bc != (int *)0x0) {
    while (iVar1 = DAT_100229b8[1], iVar1 != 0) {
      if (((*(int *)(iVar1 + 0x1d4) == 0xb) || (*(int *)(iVar1 + 0x1d4) == 0x13)) &&
         (*(int *)(iVar1 + 0x1b8) == *(int *)(param_1 + 0x1b8))) {
        if ((*(int *)(param_1 + 0x1d4) == 0xb) || (*(int *)(param_1 + 0x1d4) == 0x13)) {
          DAT_100229b8[3] = DAT_100229b8[3] + -1;
          bVar2 = true;
        }
        else {
          DAT_100229b8 = (int *)DAT_100229b8[2];
        }
      }
      else if ((*(int *)(iVar1 + 0x1d4) == *(int *)(param_1 + 0x1d4)) &&
              (*(int *)(iVar1 + 0x1b8) == *(int *)(param_1 + 0x1b8))) {
        DAT_100229b8[3] = DAT_100229b8[3] + -1;
        bVar2 = true;
      }
      else {
        DAT_100229b8 = (int *)DAT_100229b8[2];
      }
      if ((DAT_100229b8 == (int *)0x0) || (bVar2)) break;
    }
  }
  if (DAT_100229b8 == (int *)0x0) {
    uVar3 = 0;
  }
  else if (DAT_100229b8[3] == 0) {
    FUN_10011839(DAT_100229b8);
    uVar3 = (**(code **)(param_1 + 0x10))(param_1);
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



/* ================================================================
 * Function: PIPP_Find_IOaddress
 * Address:  10010dc3
 * ================================================================ */

void PIPP_Find_IOaddress(int param_1)

{
                    /* 0x10dc3  9  PIPP_Find_IOaddress */
  (**(code **)(param_1 + 0x38))(param_1);
  return;
}



/* ================================================================
 * Function: PIPP_Set_device_secondaddress
 * Address:  10010ddd
 * ================================================================ */

void PIPP_Set_device_secondaddress(int param_1,undefined4 param_2)

{
                    /* 0x10ddd  10  PIPP_Set_device_secondaddress */
  (**(code **)(param_1 + 0x74))(param_1,param_2);
  return;
}



/* ================================================================
 * Function: PIPP_Get_device_secondaddress
 * Address:  10010dfb
 * ================================================================ */

void PIPP_Get_device_secondaddress(int param_1)

{
                    /* 0x10dfb  11  PIPP_Get_device_secondaddress */
  (**(code **)(param_1 + 0x78))(param_1);
  return;
}



/* ================================================================
 * Function: PIPP_Input
 * Address:  10010e15
 * ================================================================ */

undefined4 PIPP_Input(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
                    /* 0x10e15  12  PIPP_Input */
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(param_1 + 0x14))(param_1,param_2);
  }
  return uVar1;
}



/* ================================================================
 * Function: PIPP_Output
 * Address:  10010e3d
 * ================================================================ */

undefined4 PIPP_Output(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
                    /* 0x10e3d  13  PIPP_Output */
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(param_1 + 0x18))(param_1,param_2,param_3);
  }
  return uVar1;
}



/* ================================================================
 * Function: PIPP_Disable
 * Address:  10010e69
 * ================================================================ */

undefined4 PIPP_Disable(int param_1)

{
  undefined4 uVar1;
  
                    /* 0x10e69  14  PIPP_Disable */
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(param_1 + 0x24))(param_1);
  }
  return uVar1;
}



/* ================================================================
 * Function: PIPP_Disable_Taxi
 * Address:  10010e8d
 * ================================================================ */

undefined4 PIPP_Disable_Taxi(int param_1)

{
                    /* 0x10e8d  15  PIPP_Disable_Taxi */
  (**(code **)(param_1 + 0x24))(param_1);
  return 1;
}



/* ================================================================
 * Function: PIPP_Wait_for_response
 * Address:  10010eac
 * ================================================================ */

void PIPP_Wait_for_response(int param_1,undefined4 param_2)

{
                    /* 0x10eac  16  PIPP_Wait_for_response */
  (**(code **)(param_1 + 0x28))(param_1,param_2);
  return;
}



/* ================================================================
 * Function: PIPP_Set_UseWinDefaults
 * Address:  10010eca
 * ================================================================ */

void PIPP_Set_UseWinDefaults(int param_1,undefined4 param_2)

{
                    /* 0x10eca  17  PIPP_Set_UseWinDefaults */
  (**(code **)(param_1 + 0xb4))(param_1,param_2);
  return;
}



/* ================================================================
 * Function: PIPP_Get_UseWinDefaults
 * Address:  10010eeb
 * ================================================================ */

void PIPP_Get_UseWinDefaults(int param_1)

{
                    /* 0x10eeb  18  PIPP_Get_UseWinDefaults */
  (**(code **)(param_1 + 0xb8))(param_1);
  return;
}



/* ================================================================
 * Function: PIPP_Flush_Buffer
 * Address:  10010f08
 * ================================================================ */

void PIPP_Flush_Buffer(int param_1,undefined4 param_2)

{
                    /* 0x10f08  19  PIPP_Flush_Buffer */
  (**(code **)(param_1 + 0xc4))(param_1,param_2);
  return;
}



/* ================================================================
 * Function: PIPP_Input_Multiple
 * Address:  10010f29
 * ================================================================ */

void PIPP_Input_Multiple(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
                    /* 0x10f29  20  PIPP_Input_Multiple */
  (**(code **)(param_1 + 0x44))(param_1,param_2,param_3,param_4);
  return;
}



/* ================================================================
 * Function: PIPP_Set_timeout
 * Address:  10010f4f
 * ================================================================ */

void PIPP_Set_timeout(int param_1,undefined4 param_2)

{
                    /* 0x10f4f  21  PIPP_Set_timeout */
  (**(code **)(param_1 + 0x5c))(param_1,param_2);
  return;
}



/* ================================================================
 * Function: PIPP_Set_device_name
 * Address:  10010f6d
 * ================================================================ */

void PIPP_Set_device_name(int param_1,undefined4 param_2)

{
                    /* 0x10f6d  22  PIPP_Set_device_name */
  (**(code **)(param_1 + 100))(param_1,param_2);
  return;
}



/* ================================================================
 * Function: PIPP_Get_device_name
 * Address:  10010f8b
 * ================================================================ */

void PIPP_Get_device_name(int param_1,undefined4 param_2)

{
                    /* 0x10f8b  23  PIPP_Get_device_name */
  (**(code **)(param_1 + 0x68))(param_1,param_2);
  return;
}



/* ================================================================
 * Function: PIPP_Check_taxi_link
 * Address:  10010fa9
 * ================================================================ */

void PIPP_Check_taxi_link(int param_1)

{
                    /* 0x10fa9  24  PIPP_Check_taxi_link */
  (**(code **)(param_1 + 0x6c))(param_1);
  return;
}



/* ================================================================
 * Function: PIPP_SetUserData
 * Address:  10010fc3
 * ================================================================ */

undefined4 PIPP_SetUserData(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
                    /* 0x10fc3  25  PIPP_SetUserData */
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(param_1 + 0x50))(param_1,param_2);
  }
  return uVar1;
}



/* ================================================================
 * Function: PIPP_GetUserData
 * Address:  10010feb
 * ================================================================ */

undefined4 PIPP_GetUserData(int param_1)

{
  undefined4 uVar1;
  
                    /* 0x10feb  26  PIPP_GetUserData */
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(param_1 + 0x54))(param_1);
  }
  return uVar1;
}



/* ================================================================
 * Function: PIPP_GetUIParam
 * Address:  1001100f
 * ================================================================ */

undefined4 PIPP_GetUIParam(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
                    /* 0x1100f  27  PIPP_GetUIParam */
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(param_1 + 0x120))(param_1,param_2,param_3,param_1,1);
  }
  return uVar1;
}



/* ================================================================
 * Function: PIPP_SetUIParam
 * Address:  10011052
 * ================================================================ */

undefined4 PIPP_SetUIParam(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
                    /* 0x11052  28  PIPP_SetUIParam */
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(param_1 + 0x11c))(param_1,param_2,param_3,param_1,1);
  }
  return uVar1;
}



/* ================================================================
 * Function: PIPP_Get_Ptrs
 * Address:  10011095
 * ================================================================ */

undefined4 PIPP_Get_Ptrs(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
                    /* 0x11095  29  PIPP_Get_Ptrs */
  uVar1 = (**(code **)(param_1 + 0x140))(param_1,param_2,param_3,param_4,param_1,1);
  return uVar1;
}



/* ================================================================
 * Function: PIPP_Get_Outptr
 * Address:  100110cd
 * ================================================================ */

undefined4 PIPP_Get_Outptr(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
                    /* 0x110cd  30  PIPP_Get_Outptr */
  uVar1 = (**(code **)(param_1 + 0x144))(param_1,param_2,param_1,1);
  return uVar1;
}



/* ================================================================
 * Function: PIPP_Mail_Read
 * Address:  100110fd
 * ================================================================ */

undefined4 PIPP_Mail_Read(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
                    /* 0x110fd  31  PIPP_Mail_Read */
  uVar1 = (**(code **)(param_1 + 0x148))(param_1,param_2,param_1,1);
  return uVar1;
}



/* ================================================================
 * Function: PIPP_DownLoad_PhyAdd
 * Address:  1001112d
 * ================================================================ */

undefined4
PIPP_DownLoad_PhyAdd
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined1 param_6)

{
  undefined4 uVar1;
  
                    /* 0x1112d  32  PIPP_DownLoad_PhyAdd */
  uVar1 = (**(code **)(param_1 + 0x138))(param_1,param_2,param_3,param_4,param_5,param_6,param_1,1);
  return uVar1;
}



/* ================================================================
 * Function: PIPP_UpLoad_PhyAdd
 * Address:  1001116d
 * ================================================================ */

undefined4
PIPP_UpLoad_PhyAdd(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined4 uVar1;
  
                    /* 0x1116d  33  PIPP_UpLoad_PhyAdd */
  uVar1 = (**(code **)(param_1 + 0x13c))(param_1,param_2,param_3,param_4,param_5,param_1,1);
  return uVar1;
}



/* ================================================================
 * Function: PIPP_SetDoubleParam
 * Address:  100111a9
 * ================================================================ */

undefined4 PIPP_SetDoubleParam(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
                    /* 0x111a9  34  PIPP_SetDoubleParam */
  uVar1 = (**(code **)(param_1 + 0xfc))(param_1,param_2,param_3,param_4,param_1,0);
  return uVar1;
}



/* ================================================================
 * Function: PIPP_GetDoubleParam
 * Address:  100111e1
 * ================================================================ */

undefined4 PIPP_GetDoubleParam(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
                    /* 0x111e1  35  PIPP_GetDoubleParam */
  uVar1 = (**(code **)(param_1 + 0x100))(param_1,param_2,param_3,param_1,0);
  return uVar1;
}



/* ================================================================
 * Function: PIPP_SetLongParam
 * Address:  10011215
 * ================================================================ */

undefined4 PIPP_SetLongParam(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
                    /* 0x11215  36  PIPP_SetLongParam */
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(param_1 + 0x11c))(param_1,param_2,param_3,param_1,0);
  }
  return uVar1;
}



/* ================================================================
 * Function: PIPP_GetLongParam
 * Address:  10011258
 * ================================================================ */

undefined4 PIPP_GetLongParam(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
                    /* 0x11258  37  PIPP_GetLongParam */
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(param_1 + 0x120))(param_1,param_2,param_3,param_1,0);
  }
  return uVar1;
}



/* ================================================================
 * Function: PIPP_IsAvail
 * Address:  1001129b
 * ================================================================ */

void PIPP_IsAvail(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* 0x1129b  38  PIPP_IsAvail */
  (**(code **)(param_1 + 0x124))(param_1,param_2,param_3);
  return;
}



/* ================================================================
 * Function: PIPP_GetEnumParam
 * Address:  100112c0
 * ================================================================ */

void PIPP_GetEnumParam(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
                    /* 0x112c0  39  PIPP_GetEnumParam */
  (**(code **)(param_1 + 300))(param_1,param_2,param_3,param_4);
  return;
}



/* ================================================================
 * Function: PIPP_SetorClr_WP
 * Address:  100112e9
 * ================================================================ */

void PIPP_SetorClr_WP(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
                    /* 0x112e9  40  PIPP_SetorClr_WP */
  (**(code **)(param_1 + 0x134))(param_1,param_2,param_3,param_4);
  return;
}



/* ================================================================
 * Function: PIPP_InitializeInterrupt
 * Address:  10011312
 * ================================================================ */

undefined4 PIPP_InitializeInterrupt(int param_1,undefined4 param_2)

{
                    /* 0x11312  41  PIPP_InitializeInterrupt */
  (**(code **)(param_1 + 0x15c))(param_1,param_2);
  return 1;
}



/* ================================================================
 * Function: PIPP_RestoreInterrupt
 * Address:  1001133f
 * ================================================================ */

undefined4 PIPP_RestoreInterrupt(int param_1)

{
                    /* 0x1133f  42  PIPP_RestoreInterrupt */
  (**(code **)(param_1 + 0x160))(param_1);
  return 1;
}



/* ================================================================
 * Function: PIPP_Get_DLLVersionString
 * Address:  10011368
 * ================================================================ */

int PIPP_Get_DLLVersionString(int param_1,LPSTR param_2)

{
  undefined4 local_8;
  
                    /* 0x11368  43  PIPP_Get_DLLVersionString */
  if (param_1 == 10) {
    local_8 = LoadStringA(DAT_10022d4c,0x30,param_2,0x14);
  }
  else if (param_1 == 0xb) {
    local_8 = LoadStringA(DAT_10022d4c,0x31,param_2,0x14);
  }
  else {
    local_8 = 0;
  }
  return local_8;
}



/* ================================================================
 * Function: PIPP_Get_DLLVersion
 * Address:  100113cd
 * ================================================================ */

int PIPP_Get_DLLVersion(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte local_20 [24];
  byte *local_8;
  
                    /* 0x113cd  44  PIPP_Get_DLLVersion */
  *param_2 = 0;
  iVar2 = PIPP_Get_DLLVersionString(param_1,(LPSTR)local_20);
  if (iVar2 != 0) {
    local_8 = (byte *)FUN_10015d72(local_20,&DAT_1001f794);
    while (local_8 != (byte *)0x0) {
      iVar1 = *param_2;
      iVar3 = FUN_10015ce7(param_2,local_8);
      *param_2 = iVar1 * 100 + iVar3;
      local_8 = (byte *)FUN_10015d72((byte *)0x0,&DAT_1001f794);
    }
  }
  return iVar2;
}



/* ================================================================
 * Function: PIPP_Diagnose_Interface
 * Address:  10011446
 * ================================================================ */

void PIPP_Diagnose_Interface
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               undefined4 param_9,undefined4 param_10)

{
                    /* 0x11446  45  PIPP_Diagnose_Interface */
  (**(code **)(param_1 + 0x1a0))
            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  return;
}



/* ================================================================
 * Function: PIPP_Write_NvRamInfo
 * Address:  10011487
 * ================================================================ */

undefined4 PIPP_Write_NvRamInfo(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
                    /* 0x11487  46  PIPP_Write_NvRamInfo */
  uVar1 = (**(code **)(param_1 + 0x1a4))(param_1,param_2,param_3,param_1,1);
  return uVar1;
}



/* ================================================================
 * Function: PIPP_Read_NvRamInfo
 * Address:  100114bc
 * ================================================================ */

undefined4 PIPP_Read_NvRamInfo(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
                    /* 0x114bc  47  PIPP_Read_NvRamInfo */
  uVar1 = (**(code **)(param_1 + 0x1a8))(param_1,param_2,param_3,param_1,1);
  return uVar1;
}



/* ================================================================
 * Function: PIPP_Output_Byte
 * Address:  100114f1
 * ================================================================ */

void PIPP_Output_Byte(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* 0x114f1  48  PIPP_Output_Byte */
  (**(code **)(param_1 + 0x20))(param_1,param_2,param_3);
  return;
}



/* ================================================================
 * Function: PIPP_Input_Byte
 * Address:  10011513
 * ================================================================ */

void PIPP_Input_Byte(int param_1,undefined4 param_2)

{
                    /* 0x11513  49  PIPP_Input_Byte */
  (**(code **)(param_1 + 0x1c))(param_1,param_2);
  return;
}



/* ================================================================
 * Function: PIPP_Get_Handle
 * Address:  10011531
 * ================================================================ */

int PIPP_Get_Handle(uint param_1)

{
  int iVar1;
  uint local_8;
  
  for (; *DAT_100229b8 != 0; DAT_100229b8 = (int *)*DAT_100229b8) {
  }
  for (local_8 = 0; local_8 <= param_1; local_8 = local_8 + 1) {
    if (DAT_100229b8[2] != 0) {
      DAT_100229b8 = (int *)DAT_100229b8[2];
    }
  }
  if (DAT_100229b8 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = DAT_100229b8[1];
  }
  return iVar1;
}



/* ================================================================
 * Function: PIPP_PassThroughSerial
 * Address:  100115a1
 * ================================================================ */

undefined4 PIPP_PassThroughSerial(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 local_8;
  
                    /* 0x115a1  52  PIPP_PassThroughSerial */
  local_8 = 0;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x1d4) == 0x14)) {
    if (param_4 == 1) {
      local_8 = (**(code **)(param_1 + 0x44))(param_1,0,param_2,param_3);
    }
    else if (param_4 == 2) {
      local_8 = (**(code **)(param_1 + 0x48))(param_1,0,param_2,param_3);
    }
    else {
      local_8 = 0;
    }
  }
  return local_8;
}



/* ================================================================
 * Function: PIPP_Create_physical_port_ex
 * Address:  1001161c
 * ================================================================ */

undefined4 * PIPP_Create_physical_port_ex(int param_1,uint param_2)

{
  undefined4 *puVar1;
  
  DAT_100229b8 = DAT_100229bc;
  do {
    if ((DAT_100229b8 == 0) ||
       (puVar1 = *(undefined4 **)(DAT_100229b8 + 4), puVar1 == (undefined4 *)0x0)) {
      puVar1 = FUN_100097d0(param_1,param_2);
      if (puVar1 != (undefined4 *)0x0) {
        FUN_1001174e(puVar1);
        if (((param_1 == 0xb) || (param_1 == 0x13)) || (param_1 == 0x16)) {
          puVar1[0x6e] = param_2;
        }
        else if (param_1 == 0x19) {
          puVar1[0x6e] = param_2 & 0xffff;
        }
      }
      return puVar1;
    }
    if (((param_1 == 0xb) || (param_1 == 0x13)) && (puVar1[0x6e] == param_2)) {
      if ((puVar1[0x75] == 0xb) || (puVar1[0x75] == 0x13)) {
        *(int *)(DAT_100229b8 + 0xc) = *(int *)(DAT_100229b8 + 0xc) + 1;
        return puVar1;
      }
    }
    else if ((puVar1[0x75] == param_1) && (puVar1[0x6e] == param_2)) {
      *(int *)(DAT_100229b8 + 0xc) = *(int *)(DAT_100229b8 + 0xc) + 1;
      return puVar1;
    }
    DAT_100229b8 = *(int *)(DAT_100229b8 + 8);
  } while( true );
}



/* ================================================================
 * Function: FUN_1001174e
 * Address:  1001174e
 * ================================================================ */

void FUN_1001174e(undefined4 param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  
  DAT_100229b8 = DAT_100229bc;
  if (DAT_100229bc == (undefined4 *)0x0) {
    DAT_100229b8 = FUN_10001000(0x10);
    DAT_100229bc = DAT_100229b8;
    if (DAT_100229b8 != (undefined4 *)0x0) {
      DAT_100229b8[1] = param_1;
      *DAT_100229b8 = 0;
      DAT_100229b8[2] = 0;
      DAT_100229b8[3] = 1;
    }
  }
  else {
    for (; puVar1 = DAT_100229b8, DAT_100229b8[2] != 0; DAT_100229b8 = (undefined4 *)DAT_100229b8[2]
        ) {
    }
    pvVar2 = FUN_10001000(0x10);
    DAT_100229b8[2] = pvVar2;
    DAT_100229b8 = (undefined4 *)DAT_100229b8[2];
    *DAT_100229b8 = puVar1;
    DAT_100229b8[1] = param_1;
    DAT_100229b8[3] = 1;
    DAT_100229b8[2] = 0;
  }
  return;
}



/* ================================================================
 * Function: FUN_10011839
 * Address:  10011839
 * ================================================================ */

void FUN_10011839(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (DAT_100229b8 != (int *)0x0) {
    for (DAT_100229b8 = DAT_100229bc; DAT_100229b8 != param_1; DAT_100229b8 = (int *)DAT_100229b8[2]
        ) {
    }
    piVar1 = (int *)DAT_100229b8[2];
    iVar2 = *DAT_100229b8;
    if (iVar2 != 0) {
      *(int **)(iVar2 + 8) = piVar1;
    }
    if (piVar1 != (int *)0x0) {
      *piVar1 = iVar2;
    }
    if (DAT_100229bc == param_1) {
      DAT_100229bc = piVar1;
    }
    if (param_1 != (int *)0x0) {
      FUN_1000101c((undefined *)param_1);
    }
  }
  return;
}



/* ================================================================
 * Function: FUN_100118e0
 * Address:  100118e0
 * ================================================================ */

undefined4 * FUN_100118e0(void)

{
  undefined4 *puVar1;
  void *pvVar2;
  
  puVar1 = FUN_1000102f(0x1508);
  FUN_100099a3(puVar1);
  *puVar1 = FUN_10011b44;
  puVar1[1] = FUN_10011b50;
  puVar1[2] = FUN_10011d90;
  puVar1[4] = FUN_10011f50;
  puVar1[5] = FUN_10011f9e;
  puVar1[0x11] = FUN_1001213d;
  puVar1[6] = FUN_10012022;
  puVar1[0x12] = FUN_100120b8;
  puVar1[0x21] = FUN_100121c2;
  puVar1[0x22] = FUN_100121da;
  puVar1[0x23] = FUN_100121ea;
  puVar1[0x24] = FUN_10012202;
  puVar1[0x25] = FUN_10012212;
  puVar1[0x26] = FUN_1001222a;
  puVar1[0x27] = FUN_1001223a;
  puVar1[0x28] = FUN_10012252;
  puVar1[0x29] = FUN_10012262;
  puVar1[0x2a] = FUN_1001227a;
  puVar1[0x2b] = FUN_1001228a;
  puVar1[0x2c] = FUN_100122a2;
  puVar1[0x2d] = FUN_100122b2;
  puVar1[0x2e] = FUN_100122ca;
  puVar1[0x2f] = FUN_100122da;
  puVar1[0x30] = FUN_1001269c;
  puVar1[0x31] = FUN_10011e26;
  puVar1[0x36] = FUN_10011f00;
  puVar1[0x32] = FUN_10011f18;
  puVar1[0x37] = FUN_10011f30;
  puVar1[0x33] = FUN_10011f40;
  puVar1[0x45] = FUN_10012341;
  puVar1[0x46] = FUN_100124c7;
  pvVar2 = FUN_1000102f(0x1c);
  puVar1[0xb5] = pvVar2;
  pvVar2 = FUN_1000102f(0xc);
  puVar1[0xb6] = pvVar2;
  puVar1[0xb4] = 0xffffffff;
  puVar1[0xad] = 0x2580;
  puVar1[0xae] = 0;
  puVar1[0xaf] = 0;
  puVar1[0xb0] = 8;
  puVar1[0xb1] = 0x1000;
  puVar1[0xb2] = 0x200;
  puVar1[0x6c] = 2;
  puVar1[0xb3] = 1;
  puVar1[0x76] = 4;
  puVar1[0xb7] = 0;
  puVar1[0xb8] = 0;
  puVar1[0xbe] = 0xffffffff;
  return puVar1;
}



/* ================================================================
 * Function: FUN_10011b44
 * Address:  10011b44
 * ================================================================ */

char * FUN_10011b44(void)

{
  return s_SERIAL_PORT_1001f7dc;
}



/* ================================================================
 * Function: FUN_10011b50
 * Address:  10011b50
 * ================================================================ */

undefined4 FUN_10011b50(int param_1)

{
  HANDLE pvVar1;
  int iVar2;
  DWORD local_34;
  LPCOMSTAT local_30;
  CHAR local_2c [16];
  _COMMTIMEOUTS local_1c;
  undefined4 local_8;
  
  local_8 = 1;
  *(undefined4 *)(param_1 + 0x1b0) = 1;
  if (((DAT_100229c0 != *(int *)(param_1 + 0x2c4)) || (DAT_100229c4 != *(int *)(param_1 + 0x2c8)))
     || (*(int *)(param_1 + 0x2f8) != *(int *)(param_1 + 0x1b8))) {
    if (*(int *)(param_1 + 0x2d0) != -1) {
      FUN_10002c43(*(HANDLE *)(param_1 + 0x2d0));
    }
    *(undefined4 *)(param_1 + 0x2f8) = *(undefined4 *)(param_1 + 0x1b8);
    if ((*(int *)(param_1 + 0x1b8) < 1) || (0x20 < *(int *)(param_1 + 0x1b8))) {
      FUN_10015c95(local_2c,&DAT_1001f7f0);
    }
    else {
      FUN_10015c95(local_2c,(byte *)s_COM_i_1001f7e8);
    }
    pvVar1 = FUN_10002be0(local_2c,*(DWORD *)(param_1 + 0x2c4),*(DWORD *)(param_1 + 0x2c8));
    *(HANDLE *)(param_1 + 0x2d0) = pvVar1;
    if (*(int *)(param_1 + 0x2d0) == -1) {
      *(undefined4 *)(param_1 + 0x1b0) = 3;
    }
    else {
      local_1c.ReadIntervalTimeout = 0xffffffff;
      local_1c.ReadTotalTimeoutMultiplier = 0;
      local_1c.ReadTotalTimeoutConstant = 1000;
      local_1c.WriteTotalTimeoutMultiplier = 0;
      local_1c.WriteTotalTimeoutConstant = 1000;
      SetCommTimeouts(*(HANDLE *)(param_1 + 0x2d0),&local_1c);
      DAT_100229c0 = *(int *)(param_1 + 0x2c4);
      DAT_100229c4 = *(int *)(param_1 + 0x2c8);
      *(undefined4 *)(param_1 + 0x1d8) = 1;
    }
  }
  if (*(int *)(param_1 + 0x2d0) != -1) {
    GetCommState(*(HANDLE *)(param_1 + 0x2d0),*(LPDCB *)(param_1 + 0x2d4));
    iVar2 = (**(code **)(param_1 + 0xb8))(param_1);
    if (iVar2 == 0) {
      FUN_10012703(param_1);
    }
    FUN_10002c8e(*(HANDLE *)(param_1 + 0x2d0),0);
    FUN_10002c8e(*(HANDLE *)(param_1 + 0x2d0),1);
    local_30 = *(LPCOMSTAT *)(param_1 + 0x2d8);
    ClearCommError(*(HANDLE *)(param_1 + 0x2d0),&local_34,local_30);
    *(DWORD *)(param_1 + 0x1b4) = local_34;
    if (*(int *)(param_1 + 0x1b4) != 0) {
      *(undefined4 *)(param_1 + 0x1b0) = 0;
    }
  }
  if (*(int *)(param_1 + 0x1b0) != 1) {
    local_8 = 0;
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_10011d90
 * Address:  10011d90
 * ================================================================ */

undefined4 FUN_10011d90(int param_1)

{
  undefined4 local_10;
  DWORD local_c;
  LPCOMSTAT local_8;
  
  local_10 = 1;
  if (*(int *)(param_1 + 0x2d0) == -1) {
    local_10 = 0;
  }
  else {
    FUN_10002c8e(*(HANDLE *)(param_1 + 0x2d0),0);
    FUN_10002c8e(*(HANDLE *)(param_1 + 0x2d0),1);
    local_8 = *(LPCOMSTAT *)(param_1 + 0x2d8);
    ClearCommError(*(HANDLE *)(param_1 + 0x2d0),&local_c,local_8);
    *(DWORD *)(param_1 + 0x1b4) = local_c;
    if (*(int *)(param_1 + 0x1b4) != 0) {
      *(undefined4 *)(param_1 + 0x1b0) = 0;
    }
  }
  return local_10;
}



/* ================================================================
 * Function: FUN_10011e26
 * Address:  10011e26
 * ================================================================ */

undefined4 FUN_10011e26(int param_1,int param_2)

{
  undefined4 local_10;
  DWORD local_c;
  LPCOMSTAT local_8;
  
  local_10 = 1;
  if (*(int *)(param_1 + 0x2d0) == -1) {
    local_10 = 0;
  }
  else {
    if (param_2 == 1) {
      FUN_10002c8e(*(HANDLE *)(param_1 + 0x2d0),1);
    }
    else if (param_2 == 2) {
      FUN_10002c8e(*(HANDLE *)(param_1 + 0x2d0),0);
    }
    else if (param_2 == 3) {
      FUN_10002c8e(*(HANDLE *)(param_1 + 0x2d0),0);
      FUN_10002c8e(*(HANDLE *)(param_1 + 0x2d0),1);
    }
    local_8 = *(LPCOMSTAT *)(param_1 + 0x2d8);
    ClearCommError(*(HANDLE *)(param_1 + 0x2d0),&local_c,local_8);
    *(DWORD *)(param_1 + 0x1b4) = local_c;
    if (*(int *)(param_1 + 0x1b4) != 0) {
      *(undefined4 *)(param_1 + 0x1b0) = 0;
    }
  }
  return local_10;
}



/* ================================================================
 * Function: FUN_10011f00
 * Address:  10011f00
 * ================================================================ */

undefined4 FUN_10011f00(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2e0) = param_2;
  return 1;
}



/* ================================================================
 * Function: FUN_10011f18
 * Address:  10011f18
 * ================================================================ */

undefined4 FUN_10011f18(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2dc) = param_2;
  return 1;
}



/* ================================================================
 * Function: FUN_10011f30
 * Address:  10011f30
 * ================================================================ */

undefined4 FUN_10011f30(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2e0);
}



/* ================================================================
 * Function: FUN_10011f40
 * Address:  10011f40
 * ================================================================ */

undefined4 FUN_10011f40(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2dc);
}



/* ================================================================
 * Function: FUN_10011f50
 * Address:  10011f50
 * ================================================================ */

undefined4 FUN_10011f50(undefined *param_1)

{
  if (*(int *)(param_1 + 0x2d0) != -1) {
    FUN_10002c43(*(HANDLE *)(param_1 + 0x2d0));
  }
  FUN_1000104b(*(undefined **)(param_1 + 0x2d4));
  FUN_1000104b(*(undefined **)(param_1 + 0x2d8));
  FUN_1000104b(param_1);
  return 1;
}



/* ================================================================
 * Function: FUN_10011f9e
 * Address:  10011f9e
 * ================================================================ */

uint FUN_10011f9e(int param_1)

{
  uint local_10;
  DWORD local_c;
  LPCOMSTAT local_8;
  
  if (*(int *)(param_1 + 0x2d0) == -1) {
    local_10 = 0;
  }
  else {
    FUN_10002cce(*(HANDLE *)(param_1 + 0x2d0),&local_10,1);
    local_8 = *(LPCOMSTAT *)(param_1 + 0x2d8);
    ClearCommError(*(HANDLE *)(param_1 + 0x2d0),&local_c,local_8);
    *(DWORD *)(param_1 + 0x1b4) = local_c;
    if (*(int *)(param_1 + 0x1b4) != 0) {
      *(undefined4 *)(param_1 + 0x1b0) = 0;
    }
  }
  return local_10 & 0xff;
}



/* ================================================================
 * Function: FUN_10012022
 * Address:  10012022
 * ================================================================ */

bool FUN_10012022(int param_1,undefined4 param_2,char param_3)

{
  BOOL BVar1;
  bool bVar2;
  DWORD local_c;
  LPCOMSTAT local_8;
  
  bVar2 = false;
  if (*(int *)(param_1 + 0x2d0) != -1) {
    BVar1 = TransmitCommChar(*(HANDLE *)(param_1 + 0x2d0),param_3);
    bVar2 = BVar1 != 0;
    local_8 = *(LPCOMSTAT *)(param_1 + 0x2d8);
    ClearCommError(*(HANDLE *)(param_1 + 0x2d0),&local_c,local_8);
    *(DWORD *)(param_1 + 0x1b4) = local_c;
    if (*(int *)(param_1 + 0x1b4) != 0) {
      *(undefined4 *)(param_1 + 0x1b0) = 0;
    }
  }
  return bVar2;
}



/* ================================================================
 * Function: FUN_100120b8
 * Address:  100120b8
 * ================================================================ */

DWORD FUN_100120b8(int param_1,undefined4 param_2,LPCVOID param_3,DWORD param_4)

{
  DWORD local_10;
  LPCOMSTAT local_c;
  DWORD local_8;
  
  local_8 = 0;
  if (*(int *)(param_1 + 0x2d0) != -1) {
    local_8 = FUN_10002d9c(*(HANDLE *)(param_1 + 0x2d0),param_3,param_4);
    local_c = *(LPCOMSTAT *)(param_1 + 0x2d8);
    ClearCommError(*(HANDLE *)(param_1 + 0x2d0),&local_10,local_c);
    *(DWORD *)(param_1 + 0x1b4) = local_10;
    if (*(int *)(param_1 + 0x1b4) != 0) {
      *(undefined4 *)(param_1 + 0x1b0) = 0;
    }
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_1001213d
 * Address:  1001213d
 * ================================================================ */

DWORD FUN_1001213d(int param_1,undefined4 param_2,LPVOID param_3,uint param_4)

{
  DWORD local_10;
  DWORD local_c;
  LPCOMSTAT local_8;
  
  local_10 = 0;
  if (*(int *)(param_1 + 0x2d0) != -1) {
    local_10 = FUN_10002cce(*(HANDLE *)(param_1 + 0x2d0),param_3,param_4);
    local_8 = *(LPCOMSTAT *)(param_1 + 0x2d8);
    ClearCommError(*(HANDLE *)(param_1 + 0x2d0),&local_c,local_8);
    *(DWORD *)(param_1 + 0x1b4) = local_c;
    if (*(int *)(param_1 + 0x1b4) != 0) {
      *(undefined4 *)(param_1 + 0x1b0) = 0;
    }
  }
  return local_10;
}



/* ================================================================
 * Function: FUN_100121c2
 * Address:  100121c2
 * ================================================================ */

undefined4 FUN_100121c2(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c4) = param_2;
  return 1;
}



/* ================================================================
 * Function: FUN_100121da
 * Address:  100121da
 * ================================================================ */

undefined4 FUN_100121da(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2c4);
}



/* ================================================================
 * Function: FUN_100121ea
 * Address:  100121ea
 * ================================================================ */

undefined4 FUN_100121ea(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c8) = param_2;
  return 1;
}



/* ================================================================
 * Function: FUN_10012202
 * Address:  10012202
 * ================================================================ */

undefined4 FUN_10012202(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2c8);
}



/* ================================================================
 * Function: FUN_10012212
 * Address:  10012212
 * ================================================================ */

undefined4 FUN_10012212(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c0) = param_2;
  return 1;
}



/* ================================================================
 * Function: FUN_1001222a
 * Address:  1001222a
 * ================================================================ */

undefined4 FUN_1001222a(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2c0);
}



/* ================================================================
 * Function: FUN_1001223a
 * Address:  1001223a
 * ================================================================ */

undefined4 FUN_1001223a(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 700) = param_2;
  return 1;
}



/* ================================================================
 * Function: FUN_10012252
 * Address:  10012252
 * ================================================================ */

undefined4 FUN_10012252(int param_1)

{
  return *(undefined4 *)(param_1 + 700);
}



/* ================================================================
 * Function: FUN_10012262
 * Address:  10012262
 * ================================================================ */

undefined4 FUN_10012262(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2b8) = param_2;
  return 1;
}



/* ================================================================
 * Function: FUN_1001227a
 * Address:  1001227a
 * ================================================================ */

undefined4 FUN_1001227a(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2b8);
}



/* ================================================================
 * Function: FUN_1001228a
 * Address:  1001228a
 * ================================================================ */

undefined4 FUN_1001228a(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2b4) = param_2;
  return 1;
}



/* ================================================================
 * Function: FUN_100122a2
 * Address:  100122a2
 * ================================================================ */

undefined4 FUN_100122a2(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2b4);
}



/* ================================================================
 * Function: FUN_100122b2
 * Address:  100122b2
 * ================================================================ */

undefined4 FUN_100122b2(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2cc) = param_2;
  return 1;
}



/* ================================================================
 * Function: FUN_100122ca
 * Address:  100122ca
 * ================================================================ */

undefined4 FUN_100122ca(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2cc);
}



/* ================================================================
 * Function: FUN_100122da
 * Address:  100122da
 * ================================================================ */

DWORD FUN_100122da(int param_1)

{
  DWORD local_c;
  LPCOMSTAT local_8;
  
  local_8 = *(LPCOMSTAT *)(param_1 + 0x2d8);
  if (*(int *)(param_1 + 0x2d0) != -1) {
    ClearCommError(*(HANDLE *)(param_1 + 0x2d0),&local_c,local_8);
    *(DWORD *)(param_1 + 0x1b4) = local_c;
    if (*(int *)(param_1 + 0x1b4) != 0) {
      *(undefined4 *)(param_1 + 0x1b0) = 0;
    }
  }
  return local_8->cbInQue;
}



/* ================================================================
 * Function: FUN_10012341
 * Address:  10012341
 * ================================================================ */

undefined4 FUN_10012341(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  switch(param_2) {
  case 2:
    uVar1 = (**(code **)(param_1 + 0xac))(param_1,param_3);
    break;
  case 3:
    uVar1 = (**(code **)(param_1 + 0x94))(param_1,param_3);
    break;
  default:
    uVar1 = 0;
    break;
  case 6:
    uVar1 = (**(code **)(param_1 + 200))(param_1,param_3);
    break;
  case 8:
    uVar1 = (**(code **)(param_1 + 0x7c))(param_1,param_3);
    break;
  case 10:
    uVar1 = (**(code **)(param_1 + 0xd8))(param_1,param_3);
    break;
  case 0x14:
    uVar1 = (**(code **)(param_1 + 0xa4))(param_1,param_3);
    break;
  case 0x1b:
    uVar1 = (**(code **)(param_1 + 0x9c))(param_1,param_3);
    break;
  case 0x68:
    uVar1 = (**(code **)(param_1 + 0x84))(param_1,param_3,param_2 + -2,1);
  }
  return uVar1;
}



/* ================================================================
 * Function: FUN_100124c7
 * Address:  100124c7
 * ================================================================ */

undefined4 FUN_100124c7(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_8;
  
  local_8 = 1;
  switch(param_2) {
  case 2:
    uVar1 = (**(code **)(param_1 + 0xb0))(param_1);
    *param_3 = uVar1;
    break;
  case 3:
    uVar1 = (**(code **)(param_1 + 0x98))(param_1);
    *param_3 = uVar1;
    break;
  default:
    local_8 = 0;
    break;
  case 6:
    uVar1 = (**(code **)(param_1 + 0xcc))(param_1);
    *param_3 = uVar1;
    break;
  case 8:
    uVar1 = (**(code **)(param_1 + 0x80))(param_1);
    *param_3 = uVar1;
    break;
  case 9:
    uVar1 = (**(code **)(param_1 + 0x70))(param_1);
    *param_3 = uVar1;
    break;
  case 10:
    uVar1 = (**(code **)(param_1 + 0xdc))(param_1);
    *param_3 = uVar1;
    break;
  case 0x10:
    uVar1 = (**(code **)(param_1 + 0x4c))(param_1);
    *param_3 = uVar1;
    break;
  case 0x14:
    uVar1 = (**(code **)(param_1 + 0xa8))(param_1);
    *param_3 = uVar1;
    break;
  case 0x19:
    uVar1 = (**(code **)(param_1 + 0x40))(param_1);
    *param_3 = uVar1;
    break;
  case 0x1b:
    uVar1 = (**(code **)(param_1 + 0xa0))(param_1);
    *param_3 = uVar1;
    break;
  case 0x67:
    *param_3 = *(undefined4 *)(param_1 + 0x2d0);
    break;
  case 0x68:
    uVar1 = (**(code **)(param_1 + 0x88))(param_1);
    *param_3 = uVar1;
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_1001269c
 * Address:  1001269c
 * ================================================================ */

DWORD FUN_1001269c(int param_1)

{
  DWORD local_c;
  LPCOMSTAT local_8;
  
  local_8 = *(LPCOMSTAT *)(param_1 + 0x2d8);
  if (*(int *)(param_1 + 0x2d0) != -1) {
    ClearCommError(*(HANDLE *)(param_1 + 0x2d0),&local_c,local_8);
    *(DWORD *)(param_1 + 0x1b4) = local_c;
    if (*(int *)(param_1 + 0x1b4) != 0) {
      *(undefined4 *)(param_1 + 0x1b0) = 0;
    }
  }
  return local_8->cbOutQue;
}



/* ================================================================
 * Function: FUN_10012703
 * Address:  10012703
 * ================================================================ */

undefined4 FUN_10012703(int param_1)

{
  BOOL BVar1;
  DWORD local_10;
  LPDCB local_c;
  LPCOMSTAT local_8;
  
  if (*(int *)(param_1 + 0x2d0) == -1) {
    *(undefined4 *)(param_1 + 0x1b0) = 0;
    *(undefined4 *)(param_1 + 0x1b4) = 0;
  }
  else {
    local_c = *(LPDCB *)(param_1 + 0x2d4);
    GetCommState(*(HANDLE *)(param_1 + 0x2d0),local_c);
    local_c->BaudRate = *(DWORD *)(param_1 + 0x2b4);
    local_c->ByteSize = *(BYTE *)(param_1 + 0x2c0);
    local_c->Parity = *(BYTE *)(param_1 + 0x2b8);
    local_c->StopBits = *(BYTE *)(param_1 + 700);
    local_c->fBinary = 1;
    local_c->fParity = 0;
    local_c->fOutxCtsFlow = (uint)*(byte *)(param_1 + 0x2dc);
    local_c->fOutxDsrFlow = (uint)*(byte *)(param_1 + 0x2e0);
    local_c->fOutX = 0;
    local_c->fInX = 0;
    local_c->fNull = 0;
    BVar1 = SetCommState(*(HANDLE *)(param_1 + 0x2d0),local_c);
    *(BOOL *)(param_1 + 0x1b4) = BVar1;
    if (*(int *)(param_1 + 0x1b4) != 1) {
      *(undefined4 *)(param_1 + 0x1b0) = 0;
      local_8 = *(LPCOMSTAT *)(param_1 + 0x2d8);
      ClearCommError(*(HANDLE *)(param_1 + 0x2d0),&local_10,local_8);
      *(DWORD *)(param_1 + 0x1b4) = local_10;
      if (*(int *)(param_1 + 0x1b4) != 0) {
        *(undefined4 *)(param_1 + 0x1b0) = 0;
      }
    }
    GetCommState(*(HANDLE *)(param_1 + 0x2d0),local_c);
  }
  return *(undefined4 *)(param_1 + 0x1b0);
}



/* ================================================================
 * Function: FUN_100128d0
 * Address:  100128d0
 * ================================================================ */

BOOL FUN_100128d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  BOOL BVar3;
  DWORD local_18;
  DWORD local_14;
  undefined4 local_10;
  undefined4 local_c;
  DWORD local_8;
  
  local_10 = param_1;
  uVar1 = (undefined1)param_2;
  uVar2 = local_c._2_2_;
  switch(param_3) {
  case 0:
    local_14 = 0xc350a480;
    local_c = CONCAT31(local_c._1_3_,uVar1);
    local_18 = 5;
    break;
  case 1:
    local_14 = 0xc350a484;
    local_c = CONCAT22(uVar2,(undefined2)param_2);
    local_18 = 6;
    break;
  case 2:
    local_14 = 0xc350a488;
    local_c = param_2;
    local_18 = 8;
    break;
  case 3:
    local_14 = 0xc3508158;
    local_c = CONCAT31(local_c._1_3_,uVar1);
    local_18 = 5;
    break;
  case 4:
    local_14 = 0xc350a55c;
    local_c = CONCAT22(uVar2,(undefined2)param_2);
    local_18 = 6;
    break;
  case 5:
    local_14 = 0xc350a560;
    local_c = param_2;
    local_18 = 8;
  }
  BVar3 = DeviceIoControl(DAT_100229c8,local_14,&local_10,local_18,(LPVOID)0x0,0,&local_8,
                          (LPOVERLAPPED)0x0);
  return BVar3;
}



/* ================================================================
 * Function: FUN_100129c3
 * Address:  100129c3
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

BOOL FUN_100129c3(undefined4 param_1,uint *param_2,undefined4 param_3)

{
  BOOL local_14;
  DWORD local_10;
  DWORD local_c;
  DWORD local_8;
  
  switch(param_3) {
  case 0:
    local_c = 0xc3506440;
    local_10 = 1;
    break;
  case 1:
    local_c = 0xc3506444;
    local_10 = 2;
    break;
  case 2:
    local_c = 0xc3506448;
    local_10 = 4;
    break;
  case 3:
    local_c = 0xc350654c;
    local_10 = 1;
    break;
  case 4:
    local_c = 0xc3506550;
    local_10 = 2;
    break;
  case 5:
    local_c = 0xc3506554;
    local_10 = 4;
  }
  local_14 = DeviceIoControl(DAT_100229c8,local_c,&param_1,4,&DAT_10022d48,local_10,&local_8,
                             (LPOVERLAPPED)0x0);
  if (local_14 != 0) {
    if (local_8 == local_10) {
      if (local_8 == 1) {
        *param_2 = _DAT_10022d48 & 0xff;
      }
      else if (local_8 == 2) {
        *param_2 = _DAT_10022d48 & 0xffff;
      }
      else if (local_8 == 4) {
        *param_2 = _DAT_10022d48;
      }
    }
    else {
      local_14 = 0;
    }
  }
  return local_14;
}



/* ================================================================
 * Function: FUN_10012ae0
 * Address:  10012ae0
 * ================================================================ */

HANDLE FUN_10012ae0(undefined4 param_1,LPCSTR param_2)

{
  DAT_100229c8 = CreateFileA(param_2,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  return DAT_100229c8;
}



/* ================================================================
 * Function: FUN_10012b12
 * Address:  10012b12
 * ================================================================ */

undefined4 FUN_10012b12(void)

{
  return 0;
}



/* ================================================================
 * Function: FUN_10012b1b
 * Address:  10012b1b
 * ================================================================ */

BOOL FUN_10012b1b(undefined4 param_1,undefined4 *param_2)

{
  BOOL BVar1;
  DWORD local_28;
  undefined1 local_24 [8];
  undefined4 local_1c;
  
  BVar1 = DeviceIoControl(DAT_100229c8,0xc350a504,(LPVOID)0x0,0,local_24,0x20,&local_28,
                          (LPOVERLAPPED)0x0);
  *param_2 = local_1c;
  return BVar1;
}



/* ================================================================
 * Function: FUN_10012b57
 * Address:  10012b57
 * ================================================================ */

BOOL FUN_10012b57(undefined4 param_1,undefined4 *param_2)

{
  BOOL BVar1;
  DWORD local_28;
  undefined1 local_24 [4];
  undefined4 local_20;
  
  BVar1 = DeviceIoControl(DAT_100229c8,0xc350a504,(LPVOID)0x0,0,local_24,0x20,&local_28,
                          (LPOVERLAPPED)0x0);
  *param_2 = local_20;
  return BVar1;
}



/* ================================================================
 * Function: FUN_10012b93
 * Address:  10012b93
 * ================================================================ */

BOOL FUN_10012b93(undefined4 param_1,undefined4 *param_2)

{
  BOOL BVar1;
  DWORD local_28;
  undefined1 local_24 [12];
  undefined4 local_18;
  
  BVar1 = DeviceIoControl(DAT_100229c8,0xc350a504,(LPVOID)0x0,0,local_24,0x20,&local_28,
                          (LPOVERLAPPED)0x0);
  *param_2 = local_18;
  return BVar1;
}



/* ================================================================
 * Function: FUN_10012bcf
 * Address:  10012bcf
 * ================================================================ */

BOOL FUN_10012bcf(void)

{
  BOOL BVar1;
  DWORD local_8;
  
  BVar1 = DeviceIoControl(DAT_100229c8,0xc350a510,(LPVOID)0x0,0,(LPVOID)0x0,0,&local_8,
                          (LPOVERLAPPED)0x0);
  return BVar1;
}



/* ================================================================
 * Function: FUN_10012c01
 * Address:  10012c01
 * ================================================================ */

BOOL FUN_10012c01(undefined4 param_1,undefined4 *param_2)

{
  BOOL BVar1;
  DWORD local_28;
  undefined1 local_24 [20];
  undefined4 local_10;
  
  BVar1 = DeviceIoControl(DAT_100229c8,0xc350a504,(LPVOID)0x0,0,local_24,0x20,&local_28,
                          (LPOVERLAPPED)0x0);
  *param_2 = local_10;
  return BVar1;
}



/* ================================================================
 * Function: FUN_10012c3d
 * Address:  10012c3d
 * ================================================================ */

BOOL FUN_10012c3d(void)

{
  BOOL BVar1;
  DWORD local_8;
  
  BVar1 = DeviceIoControl(DAT_100229c8,0xc350a51c,(LPVOID)0x0,0,(LPVOID)0x0,0,&local_8,
                          (LPOVERLAPPED)0x0);
  return BVar1;
}



/* ================================================================
 * Function: FUN_10012c6f
 * Address:  10012c6f
 * ================================================================ */

BOOL FUN_10012c6f(int param_1,undefined4 *param_2)

{
  BOOL local_2c;
  DWORD local_28;
  undefined1 local_24 [24];
  undefined4 local_c;
  
  if (*(int *)(param_1 + 0x1e8) == 3) {
    local_2c = DeviceIoControl(DAT_100229c8,0xc350a504,(LPVOID)0x0,0,local_24,0x20,&local_28,
                               (LPOVERLAPPED)0x0);
  }
  else {
    local_2c = DeviceIoControl(DAT_100229c8,0xc350a564,(LPVOID)0x0,0,local_24,0x20,&local_28,
                               (LPOVERLAPPED)0x0);
  }
  *param_2 = local_c;
  return local_2c;
}



/* ================================================================
 * Function: FUN_10012cdc
 * Address:  10012cdc
 * ================================================================ */

BOOL FUN_10012cdc(void)

{
  BOOL BVar1;
  DWORD local_8;
  
  BVar1 = DeviceIoControl(DAT_100229c8,0xc350a518,(LPVOID)0x0,0,(LPVOID)0x0,0,&local_8,
                          (LPOVERLAPPED)0x0);
  return BVar1;
}



/* ================================================================
 * Function: FUN_10012d0e
 * Address:  10012d0e
 * ================================================================ */

BOOL FUN_10012d0e(int param_1,undefined4 *param_2)

{
  BOOL local_2c;
  DWORD local_28;
  undefined1 local_24 [28];
  undefined4 local_8;
  
  if (*(int *)(param_1 + 0x1e8) == 3) {
    local_2c = DeviceIoControl(DAT_100229c8,0xc350a504,(LPVOID)0x0,0,local_24,0x20,&local_28,
                               (LPOVERLAPPED)0x0);
  }
  else {
    local_2c = DeviceIoControl(DAT_100229c8,0xc350a564,(LPVOID)0x0,0,local_24,0x20,&local_28,
                               (LPOVERLAPPED)0x0);
  }
  *param_2 = local_8;
  return local_2c;
}



/* ================================================================
 * Function: FUN_10012d7b
 * Address:  10012d7b
 * ================================================================ */

BOOL FUN_10012d7b(void)

{
  BOOL BVar1;
  DWORD local_8;
  
  BVar1 = DeviceIoControl(DAT_100229c8,0xc350a514,(LPVOID)0x0,0,(LPVOID)0x0,0,&local_8,
                          (LPOVERLAPPED)0x0);
  return BVar1;
}



/* ================================================================
 * Function: FUN_10012dad
 * Address:  10012dad
 * ================================================================ */

BOOL FUN_10012dad(undefined4 param_1,undefined4 *param_2)

{
  BOOL BVar1;
  undefined4 local_10 [2];
  DWORD local_8;
  
  BVar1 = DeviceIoControl(DAT_100229c8,0xc3506544,(LPVOID)0x0,0,local_10,4,&local_8,
                          (LPOVERLAPPED)0x0);
  *param_2 = local_10[0];
  return BVar1;
}



/* ================================================================
 * Function: FUN_10012df0
 * Address:  10012df0
 * ================================================================ */

void FUN_10012df0(int param_1)

{
  *(undefined2 *)(param_1 + 0x28c) = 0;
  *(undefined4 *)(param_1 + 0x224) = 0;
  FUN_1000c260(*(int *)(param_1 + 0x1ac) + (uint)*(ushort *)(param_1 + 0x2a0),0,0);
  FUN_1000c260(*(int *)(param_1 + 0x1ac) + *(int *)(param_1 + 0x2a8),0xff,0);
  *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) & 0xfffffffe;
  FUN_1000c260(*(int *)(param_1 + 0x1ac) + (uint)*(ushort *)(param_1 + 0x2a0),
               *(undefined4 *)(param_1 + 0x224),0);
  *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) | 1;
  FUN_1000c260(*(int *)(param_1 + 0x1ac) + (uint)*(ushort *)(param_1 + 0x2a0),
               *(undefined4 *)(param_1 + 0x224),0);
  *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) & 0xffffffef;
  FUN_1000c260(*(int *)(param_1 + 0x1ac) + (uint)*(ushort *)(param_1 + 0x2a0),
               *(undefined4 *)(param_1 + 0x224),0);
  *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) & 0xfffffff7;
  FUN_1000c260(*(int *)(param_1 + 0x1ac) + (uint)*(ushort *)(param_1 + 0x2a0),
               *(undefined4 *)(param_1 + 0x224),0);
  FUN_1000c260(*(int *)(param_1 + 0x1ac) + *(int *)(param_1 + 0x2b0),0x200,0);
  *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) | 8;
  FUN_1000c260(*(int *)(param_1 + 0x1ac) + (uint)*(ushort *)(param_1 + 0x2a0),
               *(undefined4 *)(param_1 + 0x224),0);
  *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) & 0xfffffffb;
  FUN_1000c260(*(int *)(param_1 + 0x1ac) + (uint)*(ushort *)(param_1 + 0x2a0),
               *(undefined4 *)(param_1 + 0x224),0);
  *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) | 4;
  FUN_1000c260(*(int *)(param_1 + 0x1ac) + (uint)*(ushort *)(param_1 + 0x2a0),
               *(undefined4 *)(param_1 + 0x224),0);
  FUN_1000c260(*(int *)(param_1 + 0x1ac) + *(int *)(param_1 + 0x2ac),
               *(undefined4 *)(param_1 + 0x294),0);
  *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) | 0x80;
  FUN_1000c260(*(int *)(param_1 + 0x1ac) + (uint)*(ushort *)(param_1 + 0x2a0),
               *(undefined4 *)(param_1 + 0x224),0);
  *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) | 0x10;
  FUN_1000c260(*(int *)(param_1 + 0x1ac) + (uint)*(ushort *)(param_1 + 0x2a0),
               *(undefined4 *)(param_1 + 0x224),0);
  *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) | 2;
  FUN_1000c260(*(int *)(param_1 + 0x1ac) + (uint)*(ushort *)(param_1 + 0x2a0),
               *(undefined4 *)(param_1 + 0x224),0);
  *(undefined2 *)(param_1 + 0x288) = 0;
  return;
}



/* ================================================================
 * Function: FUN_10013108
 * Address:  10013108
 * ================================================================ */

void FUN_10013108(int param_1)

{
  *(undefined4 *)(param_1 + 0x224) = 0;
  FUN_1000c260(*(int *)(param_1 + 0x1ac) + (uint)*(ushort *)(param_1 + 0x2a0),
               *(undefined4 *)(param_1 + 0x224),0);
  return;
}



/* ================================================================
 * Function: FUN_10013145
 * Address:  10013145
 * ================================================================ */

void FUN_10013145(int param_1)

{
  *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) & 0xfffffff7;
  FUN_1000c260(*(int *)(param_1 + 0x1ac) + (uint)*(ushort *)(param_1 + 0x2a0),
               *(undefined4 *)(param_1 + 0x224),0);
  *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) | 8;
  FUN_1000c260(*(int *)(param_1 + 0x1ac) + (uint)*(ushort *)(param_1 + 0x2a0),
               *(undefined4 *)(param_1 + 0x224),0);
  *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) & 0xfffffffb;
  FUN_1000c260(*(int *)(param_1 + 0x1ac) + (uint)*(ushort *)(param_1 + 0x2a0),
               *(undefined4 *)(param_1 + 0x224),0);
  *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) | 4;
  FUN_1000c260(*(int *)(param_1 + 0x1ac) + (uint)*(ushort *)(param_1 + 0x2a0),
               *(undefined4 *)(param_1 + 0x224),0);
  *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) & 0xffffffef;
  FUN_1000c260(*(int *)(param_1 + 0x1ac) + (uint)*(ushort *)(param_1 + 0x2a0),
               *(undefined4 *)(param_1 + 0x224),0);
  *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) | 0x10;
  FUN_1000c260(*(int *)(param_1 + 0x1ac) + (uint)*(ushort *)(param_1 + 0x2a0),
               *(undefined4 *)(param_1 + 0x224),0);
  FUN_1000c260(*(undefined4 *)(param_1 + 0x2a8),0xff,0);
  return;
}



/* ================================================================
 * Function: FUN_100132d6
 * Address:  100132d6
 * ================================================================ */

uint FUN_100132d6(int param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  *param_3 = 1;
  FUN_1000c260(*(int *)(param_1 + 0x1ac) + (uint)*(ushort *)(param_1 + 0x29c),0x100,1);
  FUN_1000c260(*(int *)(param_1 + 0x1ac) + (uint)*(ushort *)(param_1 + 0x29c),param_2 & 0xff,1);
  FUN_1000c260(*(int *)(param_1 + 0x1ac) + (uint)*(ushort *)(param_1 + 0x29c),param_2 >> 8,1);
  FUN_1000c260(*(int *)(param_1 + 0x1ac) + (uint)*(ushort *)(param_1 + 0x29c),0x300,1);
  FUN_1000c260(*(int *)(param_1 + 0x1ac) + (uint)*(ushort *)(param_1 + 0x29c),0,1);
  FUN_1000c260(*(int *)(param_1 + 0x1ac) + (uint)*(ushort *)(param_1 + 0x29c),0,1);
  local_8 = 2000;
  while( true ) {
    uVar1 = FUN_1000c2a3(*(int *)(param_1 + 0x1ac) + *(int *)(param_1 + 0x234),0);
    if ((((uVar1 & 4) != 0) || (local_8 == 0)) || (*(short *)(param_1 + 0x288) != 0)) break;
    local_8 = local_8 + -1;
  }
  if (*(short *)(param_1 + 0x288) == 0) {
    uVar1 = FUN_1000c2a3(*(int *)(param_1 + 0x1ac) + *(int *)(param_1 + 0x234),0);
    if ((uVar1 & 4) == 0) {
      if (local_8 == 0) {
        local_c = 0;
        *param_3 = 0;
      }
    }
    else {
      local_c = FUN_1000c2a3(*(int *)(param_1 + 0x1ac) + (uint)*(ushort *)(param_1 + 0x29a),1);
    }
  }
  else {
    local_c = (uint)*(ushort *)(param_1 + 0x284);
    *(undefined2 *)(param_1 + 0x288) = 0;
  }
  return local_c;
}



/* ================================================================
 * Function: FUN_10013498
 * Address:  10013498
 * ================================================================ */

void FUN_10013498(int param_1,uint param_2,uint param_3)

{
  FUN_1000c260(*(int *)(param_1 + 0x1ac) + (uint)*(ushort *)(param_1 + 0x29c),0x100,1);
  FUN_1000c260(*(int *)(param_1 + 0x1ac) + (uint)*(ushort *)(param_1 + 0x29c),param_2 & 0xff,1);
  FUN_1000c260(*(int *)(param_1 + 0x1ac) + (uint)*(ushort *)(param_1 + 0x29c),param_2 >> 8,1);
  FUN_1000c260(*(int *)(param_1 + 0x1ac) + (uint)*(ushort *)(param_1 + 0x29c),0x200,1);
  FUN_1000c260(*(int *)(param_1 + 0x1ac) + (uint)*(ushort *)(param_1 + 0x29c),param_3 & 0xff,1);
  FUN_1000c260(*(int *)(param_1 + 0x1ac) + (uint)*(ushort *)(param_1 + 0x29c),param_3 >> 8,1);
  return;
}



/* ================================================================
 * Function: FUN_10013584
 * Address:  10013584
 * ================================================================ */

void FUN_10013584(int param_1,undefined4 param_2,uint param_3)

{
  FUN_1000c260(*(int *)(param_1 + 0x1ac) + (uint)*(ushort *)(param_1 + 0x29c),param_3 & 0xff,1);
  return;
}



/* ================================================================
 * Function: FUN_100135b3
 * Address:  100135b3
 * ================================================================ */

void FUN_100135b3(int param_1,uint param_2)

{
  FUN_1000c260(*(int *)(param_1 + 0x1ac) + (uint)*(ushort *)(param_1 + 0x29c),0x100,1);
  FUN_1000c260(*(int *)(param_1 + 0x1ac) + (uint)*(ushort *)(param_1 + 0x29c),param_2 & 0xff,1);
  FUN_1000c260(*(int *)(param_1 + 0x1ac) + (uint)*(ushort *)(param_1 + 0x29c),param_2 >> 8,1);
  return;
}



/* ================================================================
 * Function: FUN_1001362d
 * Address:  1001362d
 * ================================================================ */

void FUN_1001362d(int param_1,uint param_2)

{
  FUN_1000c260(*(int *)(param_1 + 0x1ac) + (uint)*(ushort *)(param_1 + 0x29c),0x200,1);
  FUN_1000c260(*(int *)(param_1 + 0x1ac) + (uint)*(ushort *)(param_1 + 0x29c),param_2 & 0xff,1);
  FUN_1000c260(*(int *)(param_1 + 0x1ac) + (uint)*(ushort *)(param_1 + 0x29c),param_2 >> 8,1);
  return;
}



/* ================================================================
 * Function: FUN_100136b0
 * Address:  100136b0
 * ================================================================ */

undefined4 * FUN_100136b0(void)

{
  undefined4 uVar1;
  _OSVERSIONINFOA local_9c;
  undefined4 *local_8;
  
  local_9c.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_9c);
  local_8 = FUN_1000102f(0x1508);
  FUN_100099a3(local_8);
  *local_8 = FUN_10013ae4;
  local_8[1] = FUN_10013af0;
  local_8[2] = FUN_10013b3f;
  local_8[4] = FUN_10013b4b;
  local_8[5] = FUN_10013b91;
  local_8[6] = FUN_10013bc0;
  local_8[0xb] = FUN_10013bf1;
  local_8[0x12] = FUN_10013c22;
  local_8[3] = FUN_10013b1e;
  local_8[0x53] = FUN_1001448f;
  local_8[0x54] = FUN_1001449b;
  local_8[0x55] = FUN_100144a2;
  local_8[0x56] = FUN_100144a9;
  local_8[9] = FUN_100144b0;
  local_8[0x3d] = FUN_100144cd;
  local_8[0x3e] = FUN_100144f0;
  local_8[0x45] = FUN_10014513;
  local_8[0x46] = FUN_10014670;
  local_8[0xc] = FUN_10014758;
  local_8[0x4a] = FUN_10014818;
  local_8[0x4c] = FUN_10014964;
  *(undefined2 *)(local_8 + 0xa9) = 0;
  local_8[0x8d] = 2;
  *(undefined2 *)((int)local_8 + 0x2a6) = 4;
  *(undefined2 *)((int)local_8 + 0x29a) = 6;
  *(undefined2 *)(local_8 + 0xa6) = 8;
  *(undefined2 *)((int)local_8 + 0x2a2) = 10;
  *(undefined2 *)(local_8 + 0xa8) = 0;
  local_8[0x8e] = 0;
  local_8[0xac] = 4;
  *(undefined2 *)(local_8 + 0xa7) = 6;
  local_8[0xab] = 10;
  local_8[0xaa] = 0xc;
  local_8[0x8f] = 0;
  local_8[0x90] = 0;
  local_8[0x91] = 0x10;
  local_8[0x92] = 0x10;
  local_8[0xa5] = 0xf;
  local_8[0x6c] = 2;
  local_8[0x76] = 1;
  *(undefined2 *)((int)local_8 + 0x28e) = 10;
  *(undefined2 *)(local_8 + 0xa3) = 0;
  local_8[0x7e] = 2;
  if (local_9c.dwPlatformId == 1) {
    local_8[0x59] = FUN_10014b60;
    local_8[0x5a] = FUN_10014ba7;
    local_8[0x5b] = FUN_10014bf1;
    local_8[0x5c] = FUN_10014c33;
    local_8[0x5d] = FUN_10014c8a;
    local_8[0x5e] = FUN_10014ce1;
    local_8[0x5f] = FUN_10014d38;
    local_8[0x60] = FUN_10014c2a;
    local_8[0x61] = FUN_10014d6d;
    local_8[0x62] = FUN_10014dc4;
    local_8[99] = FUN_10014df9;
    local_8[100] = FUN_10014e50;
    local_8[0x65] = FUN_10014e85;
    local_8[0x66] = FUN_10014edc;
    local_8[0x67] = FUN_10014f11;
    DAT_10022f84 = local_9c.dwPlatformId;
    local_8[0x7a] = 1;
    uVar1 = (*(code *)local_8[0x5b])(local_8,s_____pivxdisa_1001f7f8);
    local_8[0x79] = uVar1;
  }
  else {
    local_8[0x59] = FUN_100128d0;
    local_8[0x5a] = FUN_100129c3;
    local_8[0x5b] = FUN_10012ae0;
    local_8[0x5c] = FUN_10012b1b;
    local_8[0x5d] = FUN_10012b57;
    local_8[0x5e] = FUN_10012b93;
    local_8[0x5f] = FUN_10012bcf;
    local_8[0x60] = FUN_10012b12;
    local_8[0x61] = FUN_10012c01;
    local_8[0x62] = FUN_10012c3d;
    local_8[99] = FUN_10012c6f;
    local_8[100] = FUN_10012cdc;
    local_8[0x65] = FUN_10012d0e;
    local_8[0x66] = FUN_10012d7b;
    local_8[0x67] = FUN_10012dad;
    DAT_10022f84 = local_9c.dwPlatformId;
    uVar1 = (*(code *)local_8[0x5b])(local_8,s_____piisadev_1001f808);
    local_8[0x79] = uVar1;
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_10013ae4
 * Address:  10013ae4
 * ================================================================ */

char * FUN_10013ae4(void)

{
  return s_TAXI_PORT_1001f818;
}



/* ================================================================
 * Function: FUN_10013af0
 * Address:  10013af0
 * ================================================================ */

undefined4 FUN_10013af0(int param_1)

{
  if (*(int *)(param_1 + 0x1ac) != 0) {
    FUN_10012df0(param_1);
    *(undefined4 *)(param_1 + 0x1b0) = 1;
  }
  return 1;
}



/* ================================================================
 * Function: FUN_10013b1e
 * Address:  10013b1e
 * ================================================================ */

undefined4 FUN_10013b1e(int param_1)

{
  if (*(int *)(param_1 + 0x1ac) != 0) {
    FUN_10013145(param_1);
  }
  return 1;
}



/* ================================================================
 * Function: FUN_10013b3f
 * Address:  10013b3f
 * ================================================================ */

undefined4 FUN_10013b3f(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_10013b4b
 * Address:  10013b4b
 * ================================================================ */

undefined4 FUN_10013b4b(undefined *param_1)

{
  if (*(int *)(param_1 + 0x1ac) != 0) {
    FUN_10013108((int)param_1);
  }
  if (*(int *)(param_1 + 0x1e4) != 0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x1e4));
  }
  FUN_1000104b(param_1);
  return 1;
}



/* ================================================================
 * Function: FUN_10013b91
 * Address:  10013b91
 * ================================================================ */

uint FUN_10013b91(int param_1,uint param_2)

{
  undefined4 local_c;
  uint local_8;
  
  if (*(int *)(param_1 + 0x1ac) != 0) {
    local_8 = FUN_100132d6(param_1,param_2,&local_c);
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_10013bc0
 * Address:  10013bc0
 * ================================================================ */

undefined4 FUN_10013bc0(int param_1,uint param_2,uint param_3)

{
  if (*(int *)(param_1 + 0x1ac) != 0) {
    FUN_10013498(param_1,param_2,param_3);
  }
  return 1;
}



/* ================================================================
 * Function: FUN_10013bf1
 * Address:  10013bf1
 * ================================================================ */

undefined4 FUN_10013bf1(int param_1,undefined4 param_2,uint param_3)

{
  if (*(int *)(param_1 + 0x1ac) != 0) {
    FUN_10013584(param_1,param_2,param_3);
  }
  return 1;
}



/* ================================================================
 * Function: FUN_10013c22
 * Address:  10013c22
 * ================================================================ */

undefined4 FUN_10013c22(int param_1,uint param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  uint local_c;
  uint *local_8;
  
  if (*(int *)(param_1 + 0x1ac) != 0) {
    if (param_2 == 0) {
      local_8 = param_3;
      for (local_c = 0; local_c < param_4; local_c = local_c + 1) {
        uVar1 = *local_8;
        local_8 = local_8 + 1;
        FUN_1001362d(param_1,uVar1);
      }
    }
    else {
      FUN_100135b3(param_1,param_2);
      for (local_c = 0; local_c < param_4; local_c = local_c + 1) {
        uVar1 = *param_3;
        param_3 = (uint *)((int)param_3 + 1);
        FUN_1001362d(param_1,(uint)(byte)uVar1);
      }
    }
  }
  return 1;
}



/* ================================================================
 * Function: FUN_10013cd9
 * Address:  10013cd9
 * ================================================================ */

undefined4 * FUN_10013cd9(void)

{
  undefined4 uVar1;
  _OSVERSIONINFOA local_9c;
  undefined4 *local_8;
  
  local_9c.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_9c);
  local_8 = FUN_1000102f(0x1508);
  FUN_100099a3(local_8);
  *local_8 = FUN_10013fd4;
  local_8[1] = FUN_10013fe0;
  local_8[2] = FUN_10013b3f;
  local_8[4] = FUN_1001402a;
  local_8[5] = FUN_10013b91;
  local_8[6] = FUN_10013bc0;
  local_8[0xb] = FUN_10013bf1;
  local_8[0x12] = FUN_10013c22;
  local_8[3] = FUN_10013b1e;
  local_8[0x53] = FUN_1001448f;
  local_8[0x54] = FUN_1001449b;
  local_8[0x55] = FUN_100144a2;
  local_8[0x56] = FUN_100144a9;
  local_8[0xc] = FUN_10014758;
  local_8[0x4a] = FUN_10014818;
  local_8[0x4c] = FUN_10014964;
  *(undefined2 *)(local_8 + 0xa9) = 0;
  local_8[0x8d] = 2;
  *(undefined2 *)((int)local_8 + 0x2a6) = 4;
  *(undefined2 *)((int)local_8 + 0x29a) = 6;
  *(undefined2 *)(local_8 + 0xa6) = 8;
  *(undefined2 *)((int)local_8 + 0x2a2) = 10;
  *(undefined2 *)(local_8 + 0xa8) = 0;
  local_8[0x8e] = 0;
  local_8[0xac] = 4;
  *(undefined2 *)(local_8 + 0xa7) = 6;
  local_8[0xab] = 10;
  local_8[0xaa] = 0xc;
  local_8[0x8f] = 0;
  local_8[0x90] = 0;
  local_8[0x91] = 0x10;
  local_8[0x92] = 0x10;
  local_8[0xa5] = 0xf;
  local_8[0x6c] = 2;
  local_8[0x76] = 1;
  *(undefined2 *)((int)local_8 + 0x28e) = 10;
  *(undefined2 *)(local_8 + 0xa3) = 0;
  local_8[0x7e] = 4;
  local_8[0x59] = FUN_10014b60;
  local_8[0x5a] = FUN_10014ba7;
  local_8[0x5b] = FUN_10014bf1;
  local_8[0x5c] = FUN_10014c33;
  local_8[0x5d] = FUN_10014c8a;
  local_8[0x5e] = FUN_10014ce1;
  local_8[0x5f] = FUN_10014d38;
  local_8[0x60] = FUN_10014c2a;
  local_8[0x61] = FUN_10014d6d;
  local_8[0x62] = FUN_10014dc4;
  local_8[99] = FUN_10014df9;
  local_8[100] = FUN_10014e50;
  local_8[0x65] = FUN_10014e85;
  local_8[0x66] = FUN_10014edc;
  local_8[0x67] = FUN_10014f11;
  DAT_10022f84 = local_9c.dwPlatformId;
  local_8[0x7a] = local_9c.dwPlatformId;
  uVar1 = (*(code *)local_8[0x5b])(local_8,s_____pivxdisa_1001f824);
  local_8[0x79] = uVar1;
  return local_8;
}



/* ================================================================
 * Function: FUN_10013fd4
 * Address:  10013fd4
 * ================================================================ */

char * FUN_10013fd4(void)

{
  return s_TAXI_Type_B_PORT_1001f834;
}



/* ================================================================
 * Function: FUN_10013fe0
 * Address:  10013fe0
 * ================================================================ */

undefined4 FUN_10013fe0(int param_1)

{
  if (*(int *)(param_1 + 0x1ac) != 0) {
    FUN_10012df0(param_1);
    FUN_1000c260(0x4d6,0x25,0);
    FUN_1000c260(0x4d6,0x26,0);
    *(undefined4 *)(param_1 + 0x1b0) = 1;
  }
  return 1;
}



/* ================================================================
 * Function: FUN_1001402a
 * Address:  1001402a
 * ================================================================ */

undefined4 FUN_1001402a(undefined *param_1)

{
  if (*(int *)(param_1 + 0x1ac) != 0) {
    FUN_10013108((int)param_1);
  }
  FUN_1000c260(0x4d6,5,0);
  FUN_1000c260(0x4d6,6,0);
  if (*(int *)(param_1 + 0x1e4) != 0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x1e4));
  }
  FUN_1000104b(param_1);
  return 1;
}



/* ================================================================
 * Function: FUN_1001408c
 * Address:  1001408c
 * ================================================================ */

undefined4 * FUN_1001408c(void)

{
  undefined4 uVar1;
  _OSVERSIONINFOA local_9c;
  undefined4 *local_8;
  
  local_9c.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_9c);
  local_8 = FUN_1000102f(0x1508);
  FUN_100099a3(local_8);
  *local_8 = FUN_100143a1;
  local_8[1] = FUN_100143ad;
  local_8[2] = FUN_10013b3f;
  local_8[4] = FUN_10014413;
  local_8[5] = FUN_10013b91;
  local_8[6] = FUN_10013bc0;
  local_8[0xb] = FUN_10013bf1;
  local_8[0x12] = FUN_10013c22;
  local_8[3] = FUN_10013b1e;
  local_8[0x53] = FUN_1001448f;
  local_8[0x54] = FUN_1001449b;
  local_8[0x55] = FUN_100144a2;
  local_8[0x56] = FUN_100144a9;
  local_8[0xc] = FUN_10014758;
  local_8[0x4a] = FUN_10014818;
  local_8[0x4c] = FUN_10014964;
  *(undefined2 *)(local_8 + 0xa9) = 0;
  local_8[0x8d] = 2;
  *(undefined2 *)((int)local_8 + 0x2a6) = 4;
  *(undefined2 *)((int)local_8 + 0x29a) = 6;
  *(undefined2 *)(local_8 + 0xa6) = 8;
  *(undefined2 *)((int)local_8 + 0x2a2) = 10;
  *(undefined2 *)(local_8 + 0xa8) = 0;
  local_8[0x8e] = 0;
  local_8[0xac] = 4;
  *(undefined2 *)(local_8 + 0xa7) = 6;
  local_8[0xab] = 10;
  local_8[0xaa] = 0xc;
  local_8[0x8f] = 0;
  local_8[0x90] = 0;
  local_8[0x91] = 0x10;
  local_8[0x92] = 0x10;
  local_8[0x93] = 0xe;
  local_8[0x94] = 0xe;
  local_8[0xa5] = 0xf;
  local_8[0x6c] = 2;
  local_8[0x76] = 1;
  *(undefined2 *)((int)local_8 + 0x28e) = 10;
  *(undefined2 *)(local_8 + 0xa3) = 0;
  local_8[0x7e] = 8;
  local_8[0x59] = FUN_10014b60;
  local_8[0x5a] = FUN_10014ba7;
  local_8[0x5b] = FUN_10014bf1;
  local_8[0x5c] = FUN_10014c33;
  local_8[0x5d] = FUN_10014c8a;
  local_8[0x5e] = FUN_10014ce1;
  local_8[0x5f] = FUN_10014d38;
  local_8[0x60] = FUN_10014c2a;
  local_8[0x61] = FUN_10014d6d;
  local_8[0x62] = FUN_10014dc4;
  local_8[99] = FUN_10014df9;
  local_8[100] = FUN_10014e50;
  local_8[0x65] = FUN_10014e85;
  local_8[0x66] = FUN_10014edc;
  local_8[0x67] = FUN_10014f11;
  DAT_10022f84 = local_9c.dwPlatformId;
  local_8[0x7a] = local_9c.dwPlatformId;
  uVar1 = (*(code *)local_8[0x5b])(local_8,s_____pivxdisa_1001f848);
  local_8[0x79] = uVar1;
  return local_8;
}



/* ================================================================
 * Function: FUN_100143a1
 * Address:  100143a1
 * ================================================================ */

char * FUN_100143a1(void)

{
  return s_TAXI_Type_F_PORT_1001f858;
}



/* ================================================================
 * Function: FUN_100143ad
 * Address:  100143ad
 * ================================================================ */

undefined4 FUN_100143ad(int param_1)

{
  if (*(int *)(param_1 + 0x1ac) != 0) {
    FUN_10012df0(param_1);
    FUN_1000c260(*(int *)(param_1 + 0x1ac) + *(int *)(param_1 + 0x24c),0,0);
    FUN_1000c260(0x4d6,0x35,0);
    FUN_1000c260(0x4d6,0x36,0);
    *(undefined4 *)(param_1 + 0x1b0) = 1;
  }
  return 1;
}



/* ================================================================
 * Function: FUN_10014413
 * Address:  10014413
 * ================================================================ */

undefined4 FUN_10014413(undefined *param_1)

{
  if (*(int *)(param_1 + 0x1ac) != 0) {
    FUN_10013108((int)param_1);
    FUN_1000c2a3(*(int *)(param_1 + 0x1ac) + *(int *)(param_1 + 0x250),0);
  }
  FUN_1000c260(0x4d6,5,0);
  FUN_1000c260(0x4d6,6,0);
  if (*(int *)(param_1 + 0x1e4) != 0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x1e4));
  }
  FUN_1000104b(param_1);
  return 1;
}



/* ================================================================
 * Function: FUN_1001448f
 * Address:  1001448f
 * ================================================================ */

undefined4 FUN_1001448f(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_1001449b
 * Address:  1001449b
 * ================================================================ */

void FUN_1001449b(void)

{
  return;
}



/* ================================================================
 * Function: FUN_100144a2
 * Address:  100144a2
 * ================================================================ */

void FUN_100144a2(void)

{
  return;
}



/* ================================================================
 * Function: FUN_100144a9
 * Address:  100144a9
 * ================================================================ */

void FUN_100144a9(void)

{
  return;
}



/* ================================================================
 * Function: FUN_100144b0
 * Address:  100144b0
 * ================================================================ */

undefined4 FUN_100144b0(int param_1)

{
  FUN_10013108(param_1);
  return 1;
}



/* ================================================================
 * Function: FUN_100144cd
 * Address:  100144cd
 * ================================================================ */

undefined4 FUN_100144cd(void)

{
  return 0;
}



/* ================================================================
 * Function: FUN_100144f0
 * Address:  100144f0
 * ================================================================ */

undefined4 FUN_100144f0(void)

{
  return 0;
}



/* ================================================================
 * Function: FUN_10014513
 * Address:  10014513
 * ================================================================ */

undefined4 FUN_10014513(int param_1,undefined4 param_2)

{
  undefined4 local_8;
  
  local_8 = 1;
  switch(param_2) {
  case 0x2f:
    *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) & 0xffffffef;
    FUN_1000c260(*(int *)(param_1 + 0x1ac) + (uint)*(ushort *)(param_1 + 0x2a0),
                 *(undefined4 *)(param_1 + 0x224),0);
    *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) | 0x10;
    FUN_1000c260(*(int *)(param_1 + 0x1ac) + (uint)*(ushort *)(param_1 + 0x2a0),
                 *(undefined4 *)(param_1 + 0x224),0);
    break;
  default:
    local_8 = 0;
    break;
  case 0x3e:
    *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) & 0xffffff7f;
    FUN_1000c260(*(int *)(param_1 + 0x1ac) + (uint)*(ushort *)(param_1 + 0x2a0),
                 *(undefined4 *)(param_1 + 0x224),0);
    break;
  case 0x41:
    (**(code **)(param_1 + 400))(param_1);
    break;
  case 0x4d:
    (**(code **)(param_1 + 0x198))(param_1);
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_10014670
 * Address:  10014670
 * ================================================================ */

undefined4 FUN_10014670(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 local_c;
  int local_8;
  
  local_c = 1;
  switch(param_2) {
  case 0x42:
    (**(code **)(param_1 + 0x18c))(param_1,&local_8);
    *param_3 = local_8;
    break;
  default:
    local_c = 0;
    break;
  case 0x4e:
    (**(code **)(param_1 + 0x194))(param_1,&local_8);
    *param_3 = local_8;
    break;
  case 0x51:
    if (*(int *)(param_1 + 0x1e4) == 0) {
      *param_3 = 0;
    }
    else {
      (**(code **)(param_1 + 0x19c))(param_1,&local_8);
      *param_3 = local_8;
    }
    break;
  case 0x55:
    iVar1 = FUN_10014a4e(param_1);
    *param_3 = iVar1;
  }
  return local_c;
}



/* ================================================================
 * Function: FUN_10014758
 * Address:  10014758
 * ================================================================ */

BOOL FUN_10014758(int param_1,undefined4 param_2)

{
  DWORD local_30;
  BOOL local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [8];
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [8];
  
  local_2c = 0;
  if (*(int *)(param_1 + 0x1e8) == 1) {
    *(undefined4 *)(param_1 + 0x1ac) = param_2;
    local_24 = param_2;
    local_28 = *(undefined4 *)(param_1 + 0x1fc);
    local_20 = local_28;
    local_2c = DeviceIoControl(*(HANDLE *)(param_1 + 0x1e4),0x9006,&local_24,8,local_1c,8,&local_30,
                               (LPOVERLAPPED)0x0);
  }
  else {
    *(undefined4 *)(param_1 + 0x1ac) = param_2;
    local_14 = param_2;
    local_28 = *(undefined4 *)(param_1 + 0x1fc);
    local_10 = local_28;
    local_2c = DeviceIoControl(*(HANDLE *)(param_1 + 0x1e4),0xc350a520,&local_14,8,local_c,8,
                               &local_30,(LPOVERLAPPED)0x0);
  }
  return local_2c;
}



/* ================================================================
 * Function: FUN_10014818
 * Address:  10014818
 * ================================================================ */

undefined4 FUN_10014818(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 local_8;
  
  if (param_2 == 0x1e) {
    *param_3 = 4;
    param_3[1] = 9;
    param_3[2] = 0;
    param_3[3] = 0x409c0000;
    *(double *)(param_3 + 4) = (double)*(uint *)(param_1 + 0x1ac);
    param_3[6] = 0;
    param_3[7] = 0x40a60000;
    param_3[10] = 0;
    param_3[0xb] = 0;
    local_8 = 1;
    *(double *)(param_3 + 8) = (double)*(uint *)(param_1 + 0x1ac);
    param_3[0xc] = 2;
  }
  else if (param_2 == 0x50) {
    *param_3 = 4;
    param_3[1] = 9;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    param_3[6] = 0;
    param_3[7] = 0x40240000;
    param_3[10] = 0;
    param_3[0xb] = 0;
    *(double *)(param_3 + 8) = (double)(int)*(short *)(param_1 + 0x1e0);
    param_3[0xc] = 2;
    local_8 = 1;
  }
  else {
    local_8 = 0;
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_10014964
 * Address:  10014964
 * ================================================================ */

undefined4 FUN_10014964(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 local_8;
  
  local_8 = 1;
  if (param_2 == 0x1e) {
    switch(param_3) {
    case 0:
      *param_4 = 0x700;
      break;
    case 1:
      *param_4 = 0x900;
      break;
    case 2:
      *param_4 = 0xa00;
      break;
    case 3:
      *param_4 = 0xb00;
      break;
    default:
      local_8 = 0;
    }
  }
  else if (param_2 == 0x50) {
    switch(param_3) {
    case 0:
      *param_4 = 10;
      break;
    case 1:
      *param_4 = 0xb;
      break;
    case 2:
      *param_4 = 0xc;
      break;
    case 3:
      *param_4 = 0xf;
      break;
    default:
      local_8 = 0;
    }
  }
  else {
    local_8 = 0;
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_10014a4e
 * Address:  10014a4e
 * ================================================================ */

int FUN_10014a4e(int param_1)

{
  int local_2b8;
  undefined1 local_2b4 [312];
  undefined4 local_17c;
  DWORD local_178;
  undefined1 local_174 [24];
  int local_15c;
  int local_158;
  int local_150;
  undefined1 local_144 [4];
  int local_140;
  int local_134;
  int local_130;
  int local_8;
  
  local_8 = 0;
  if (DAT_10022f84 == 1) {
    local_17c = 0;
    local_2b8 = DeviceIoControl(*(HANDLE *)(param_1 + 0x1e4),0x9005,local_2b4,0x13c,local_144,0x13c,
                                &local_178,(LPOVERLAPPED)0x0);
  }
  else {
    local_2b8 = DeviceIoControl(*(HANDLE *)(param_1 + 0x1e4),0xc350644c,local_174,0x13c,&local_15c,
                                0x13c,&local_178,(LPOVERLAPPED)0x0);
    local_134 = local_158;
    local_130 = local_15c;
    local_140 = local_150;
  }
  if ((((local_134 != 0) && (local_130 != 0)) && (local_130 != -1)) && (local_2b8 != 0)) {
    local_8 = local_140 << 0xc;
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_10014b60
 * Address:  10014b60
 * ================================================================ */

BOOL FUN_10014b60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  BOOL BVar1;
  DWORD local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10 [12];
  
  local_1c = param_1;
  local_18 = param_2;
  local_14 = param_3;
  BVar1 = DeviceIoControl(DAT_100229cc,0xa001,&local_1c,0xc,local_10,0xc,&local_20,(LPOVERLAPPED)0x0
                         );
  return BVar1;
}



/* ================================================================
 * Function: FUN_10014ba7
 * Address:  10014ba7
 * ================================================================ */

BOOL FUN_10014ba7(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  BOOL BVar1;
  DWORD local_20;
  undefined4 local_1c [2];
  undefined4 local_14;
  undefined1 local_10 [4];
  undefined4 local_c;
  
  local_1c[0] = param_1;
  local_14 = param_3;
  BVar1 = DeviceIoControl(DAT_100229cc,0xa003,local_1c,0xc,local_10,0xc,&local_20,(LPOVERLAPPED)0x0)
  ;
  *param_2 = local_c;
  return BVar1;
}



/* ================================================================
 * Function: FUN_10014bf1
 * Address:  10014bf1
 * ================================================================ */

HANDLE FUN_10014bf1(undefined4 param_1,LPCSTR param_2)

{
  DAT_100229cc = CreateFileA(param_2,0,0,(LPSECURITY_ATTRIBUTES)0x0,1,0x4000000,(HANDLE)0x0);
  return DAT_100229cc;
}



/* ================================================================
 * Function: FUN_10014c2a
 * Address:  10014c2a
 * ================================================================ */

undefined4 FUN_10014c2a(void)

{
  return 0;
}



/* ================================================================
 * Function: FUN_10014c33
 * Address:  10014c33
 * ================================================================ */

BOOL FUN_10014c33(int param_1,undefined4 *param_2)

{
  BOOL BVar1;
  undefined4 local_60 [11];
  DWORD local_34;
  undefined1 local_30 [24];
  undefined4 local_18;
  int local_8;
  
  local_8 = *(int *)(param_1 + 0x1b8) + -1;
  local_18 = 0;
  BVar1 = DeviceIoControl(*(HANDLE *)(param_1 + 0x1e4),0xb000,local_30,0x2c,local_60,0x2c,&local_34,
                          (LPOVERLAPPED)0x0);
  *param_2 = local_60[0];
  return BVar1;
}



/* ================================================================
 * Function: FUN_10014c8a
 * Address:  10014c8a
 * ================================================================ */

BOOL FUN_10014c8a(int param_1,undefined4 *param_2)

{
  BOOL BVar1;
  undefined1 local_60 [16];
  undefined4 local_50;
  DWORD local_34;
  undefined1 local_30 [24];
  undefined4 local_18;
  int local_8;
  
  local_8 = *(int *)(param_1 + 0x1b8) + -1;
  local_18 = 0;
  BVar1 = DeviceIoControl(*(HANDLE *)(param_1 + 0x1e4),0xb000,local_30,0x2c,local_60,0x2c,&local_34,
                          (LPOVERLAPPED)0x0);
  *param_2 = local_50;
  return BVar1;
}



/* ================================================================
 * Function: FUN_10014ce1
 * Address:  10014ce1
 * ================================================================ */

BOOL FUN_10014ce1(int param_1,undefined4 *param_2)

{
  BOOL BVar1;
  undefined1 local_60 [20];
  undefined4 local_4c;
  DWORD local_34;
  undefined1 local_30 [24];
  undefined4 local_18;
  int local_8;
  
  local_8 = *(int *)(param_1 + 0x1b8) + -1;
  local_18 = 0;
  BVar1 = DeviceIoControl(*(HANDLE *)(param_1 + 0x1e4),0xb000,local_30,0x2c,local_60,0x2c,&local_34,
                          (LPOVERLAPPED)0x0);
  *param_2 = local_4c;
  return BVar1;
}



/* ================================================================
 * Function: FUN_10014d38
 * Address:  10014d38
 * ================================================================ */

BOOL FUN_10014d38(int param_1)

{
  BOOL BVar1;
  DWORD local_8;
  
  BVar1 = DeviceIoControl(*(HANDLE *)(param_1 + 0x1e4),0xb001,(LPVOID)0x0,0,(LPVOID)0x0,0,&local_8,
                          (LPOVERLAPPED)0x0);
  return BVar1;
}



/* ================================================================
 * Function: FUN_10014d6d
 * Address:  10014d6d
 * ================================================================ */

BOOL FUN_10014d6d(int param_1,undefined4 *param_2)

{
  BOOL BVar1;
  undefined1 local_60 [4];
  undefined4 local_5c;
  DWORD local_34;
  undefined1 local_30 [24];
  undefined4 local_18;
  int local_8;
  
  local_8 = *(int *)(param_1 + 0x1b8) + -1;
  local_18 = 0;
  BVar1 = DeviceIoControl(*(HANDLE *)(param_1 + 0x1e4),0xb000,local_30,0x2c,local_60,0x2c,&local_34,
                          (LPOVERLAPPED)0x0);
  *param_2 = local_5c;
  return BVar1;
}



/* ================================================================
 * Function: FUN_10014dc4
 * Address:  10014dc4
 * ================================================================ */

BOOL FUN_10014dc4(int param_1)

{
  BOOL BVar1;
  DWORD local_8;
  
  BVar1 = DeviceIoControl(*(HANDLE *)(param_1 + 0x1e4),0xb004,(LPVOID)0x0,0,(LPVOID)0x0,0,&local_8,
                          (LPOVERLAPPED)0x0);
  return BVar1;
}



/* ================================================================
 * Function: FUN_10014df9
 * Address:  10014df9
 * ================================================================ */

BOOL FUN_10014df9(int param_1,undefined4 *param_2)

{
  BOOL BVar1;
  undefined1 local_60 [8];
  undefined4 local_58;
  DWORD local_34;
  undefined1 local_30 [24];
  undefined4 local_18;
  int local_8;
  
  local_8 = *(int *)(param_1 + 0x1b8) + -1;
  local_18 = 0;
  BVar1 = DeviceIoControl(*(HANDLE *)(param_1 + 0x1e4),0xb000,local_30,0x2c,local_60,0x2c,&local_34,
                          (LPOVERLAPPED)0x0);
  *param_2 = local_58;
  return BVar1;
}



/* ================================================================
 * Function: FUN_10014e50
 * Address:  10014e50
 * ================================================================ */

BOOL FUN_10014e50(int param_1)

{
  BOOL BVar1;
  DWORD local_8;
  
  BVar1 = DeviceIoControl(*(HANDLE *)(param_1 + 0x1e4),0xb002,(LPVOID)0x0,0,(LPVOID)0x0,0,&local_8,
                          (LPOVERLAPPED)0x0);
  return BVar1;
}



/* ================================================================
 * Function: FUN_10014e85
 * Address:  10014e85
 * ================================================================ */

BOOL FUN_10014e85(int param_1,undefined4 *param_2)

{
  BOOL BVar1;
  undefined1 local_60 [12];
  undefined4 local_54;
  DWORD local_34;
  undefined1 local_30 [24];
  undefined4 local_18;
  int local_8;
  
  local_8 = *(int *)(param_1 + 0x1b8) + -1;
  local_18 = 0;
  BVar1 = DeviceIoControl(*(HANDLE *)(param_1 + 0x1e4),0xb000,local_30,0x2c,local_60,0x2c,&local_34,
                          (LPOVERLAPPED)0x0);
  *param_2 = local_54;
  return BVar1;
}



/* ================================================================
 * Function: FUN_10014edc
 * Address:  10014edc
 * ================================================================ */

BOOL FUN_10014edc(int param_1)

{
  BOOL BVar1;
  DWORD local_8;
  
  BVar1 = DeviceIoControl(*(HANDLE *)(param_1 + 0x1e4),0xb003,(LPVOID)0x0,0,(LPVOID)0x0,0,&local_8,
                          (LPOVERLAPPED)0x0);
  return BVar1;
}



/* ================================================================
 * Function: FUN_10014f11
 * Address:  10014f11
 * ================================================================ */

BOOL FUN_10014f11(int param_1,undefined4 *param_2)

{
  BOOL BVar1;
  undefined4 local_10 [2];
  DWORD local_8;
  
  BVar1 = DeviceIoControl(*(HANDLE *)(param_1 + 0x1e4),0xb008,(LPVOID)0x0,0,local_10,4,&local_8,
                          (LPOVERLAPPED)0x0);
  *param_2 = local_10[0];
  return BVar1;
}



/* ================================================================
 * Function: _malloc
 * Address:  10014f50
 * ================================================================ */

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_100229f4);
  return pvVar1;
}



/* ================================================================
 * Function: __nh_malloc
 * Address:  10014f62
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
      pvVar1 = (void *)FUN_10014f8e((uint *)_Size);
      if (pvVar1 != (void *)0x0) {
        return pvVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = FUN_10015fbf(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}



/* ================================================================
 * Function: FUN_10014f8e
 * Address:  10014f8e
 * ================================================================ */

void __cdecl FUN_10014f8e(uint *param_1)

{
  int *piVar1;
  uint dwBytes;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1001d190;
  puStack_10 = &LAB_100172cc;
  local_14 = ExceptionList;
  if (DAT_1002433c == 3) {
    ExceptionList = &local_14;
    if (param_1 <= DAT_10024334) {
      ExceptionList = &local_14;
      FUN_1001715e(9);
      local_8 = 0;
      piVar1 = FUN_100165f0(param_1);
      local_8 = 0xffffffff;
      FUN_10014ff5();
      if (piVar1 != (int *)0x0) {
        ExceptionList = local_14;
        return;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    if (DAT_1002433c == 2) {
      if (param_1 == (uint *)0x0) {
        dwBytes = 0x10;
      }
      else {
        dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
      }
      ExceptionList = &local_14;
      if (dwBytes <= DAT_100218bc) {
        ExceptionList = &local_14;
        FUN_1001715e(9);
        local_8 = 1;
        piVar1 = FUN_10016d9d(dwBytes >> 4);
        local_8 = 0xffffffff;
        FUN_10015054();
        if (piVar1 != (int *)0x0) {
          ExceptionList = local_14;
          return;
        }
      }
      goto LAB_1001506d;
    }
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
LAB_1001506d:
  HeapAlloc(DAT_10024338,0,dwBytes);
  ExceptionList = local_14;
  return;
}



/* ================================================================
 * Function: FUN_10014ff5
 * Address:  10014ff5
 * ================================================================ */

void FUN_10014ff5(void)

{
  FUN_100171bf(9);
  return;
}



/* ================================================================
 * Function: FUN_10015054
 * Address:  10015054
 * ================================================================ */

void FUN_10015054(void)

{
  FUN_100171bf(9);
  return;
}



/* ================================================================
 * Function: FUN_1001508a
 * Address:  1001508a
 * ================================================================ */

void __cdecl FUN_1001508a(undefined *param_1)

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
  puStack_c = &DAT_1001d1a8;
  puStack_10 = &LAB_100172cc;
  local_14 = ExceptionList;
  if (param_1 == (undefined *)0x0) {
    return;
  }
  if (DAT_1002433c == 3) {
    ExceptionList = &local_14;
    FUN_1001715e(9);
    local_8 = 0;
    local_20 = (uint *)FUN_1001629c((int)param_1);
    if (local_20 != (uint *)0x0) {
      FUN_100162c7(local_20,(int)param_1);
    }
    local_8 = 0xffffffff;
    FUN_100150f4();
    puVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_1002433c != 2) goto LAB_10015156;
    ExceptionList = &local_14;
    FUN_1001715e(9);
    local_8 = 1;
    local_28 = (uint *)FUN_10016d01(param_1,&local_2c,&local_24);
    if (local_28 != (uint *)0x0) {
      FUN_10016d58(local_2c,local_24,(byte *)local_28);
    }
    local_8 = 0xffffffff;
    FUN_1001514c();
    puVar1 = local_28;
  }
  if (puVar1 != (uint *)0x0) {
    ExceptionList = local_14;
    return;
  }
LAB_10015156:
  HeapFree(DAT_10024338,0,param_1);
  ExceptionList = local_14;
  return;
}



/* ================================================================
 * Function: FUN_100150f4
 * Address:  100150f4
 * ================================================================ */

void FUN_100150f4(void)

{
  FUN_100171bf(9);
  return;
}



/* ================================================================
 * Function: FUN_1001514c
 * Address:  1001514c
 * ================================================================ */

void FUN_1001514c(void)

{
  FUN_100171bf(9);
  return;
}



/* ================================================================
 * Function: FUN_10015173
 * Address:  10015173
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10015173(void)

{
  longlong lVar1;
  undefined8 uVar2;
  _FILETIME local_c;
  
  GetSystemTimeAsFileTime(&local_c);
  lVar1 = __allmul(local_c.dwHighDateTime,0,0,1);
  lVar1 = (lVar1 - CONCAT44(_DAT_100229d4,_DAT_100229d0)) + (ulonglong)local_c.dwLowDateTime;
  uVar2 = __aulldiv((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),10000,0);
  return uVar2;
}



/* ================================================================
 * Function: FUN_100151b6
 * Address:  100151b6
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100151b6(void)

{
  longlong lVar1;
  _FILETIME local_c;
  
  GetSystemTimeAsFileTime(&local_c);
  lVar1 = __allmul(local_c.dwHighDateTime,0,0,1);
  _DAT_100229d0 = lVar1 + (ulonglong)local_c.dwLowDateTime;
  return;
}



/* ================================================================
 * Function: _strncpy
 * Address:  100151f0
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
        goto joined_r0x1001522e;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_1001526b;
        goto LAB_100152d9;
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
joined_r0x100152d5:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_100152d9:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_1001526b;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x100152d5;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x100152d5;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x100152d5;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x1001522e:
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
LAB_1001526b:
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
 * Function: _strlen
 * Address:  100152f0
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
    if (((uint)puVar2 & 3) == 0) goto LAB_10015310;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_10015343:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_10015310:
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
  goto LAB_10015343;
}



/* ================================================================
 * Function: FUN_10015370
 * Address:  10015370
 * ================================================================ */

uint * __cdecl FUN_10015370(uint *param_1,uint *param_2)

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
    if (bVar1 == 0) goto LAB_10015458;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_10015458:
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
 * Function: FUN_10015380
 * Address:  10015380
 * ================================================================ */

uint * __cdecl FUN_10015380(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_1001539c;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_100153cf;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x100153eb;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_1001539c:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x100153eb;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x100153eb;
    }
  }
LAB_100153cf:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x100153eb:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_10015458:
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
    if (bVar1 == 0) goto LAB_10015458;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}



/* ================================================================
 * Function: _strcmp
 * Address:  10015460
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
      if (bVar4 != *_Str2) goto LAB_100154a4;
      _Str2 = _Str2 + 1;
      if (bVar4 == 0) {
        return 0;
      }
      if (((uint)_Str1 & 2) == 0) goto LAB_10015470;
    }
    uVar1 = *(undefined2 *)_Str1;
    _Str1 = _Str1 + 2;
    bVar4 = (byte)uVar1;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) goto LAB_100154a4;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((ushort)uVar1 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) goto LAB_100154a4;
    if (bVar4 == 0) {
      return 0;
    }
    _Str2 = _Str2 + 2;
  }
LAB_10015470:
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
LAB_100154a4:
  return (uint)bVar5 * -2 + 1;
}



/* ================================================================
 * Function: FUN_100154e4
 * Address:  100154e4
 * ================================================================ */

uint __cdecl FUN_100154e4(LPSTR param_1,LPCWSTR param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  
  InterlockedIncrement((LONG *)&DAT_10024318);
  bVar2 = DAT_10024314 != 0;
  if (bVar2) {
    InterlockedDecrement((LONG *)&DAT_10024318);
    FUN_1001715e(0x13);
  }
  uVar1 = FUN_10015541(param_1,param_2,param_3);
  if (bVar2) {
    FUN_100171bf(0x13);
  }
  else {
    InterlockedDecrement((LONG *)&DAT_10024318);
  }
  return uVar1;
}



/* ================================================================
 * Function: FUN_10015541
 * Address:  10015541
 * ================================================================ */

uint __cdecl FUN_10015541(LPSTR param_1,LPCWSTR param_2,uint param_3)

{
  char cVar1;
  WCHAR WVar2;
  int iVar3;
  DWORD DVar4;
  DWORD *pDVar5;
  int iVar6;
  uint uVar7;
  BOOL local_c;
  CHAR local_6 [2];
  
  uVar7 = 0;
  local_c = 0;
  if (param_1 == (LPSTR)0x0) {
    if (DAT_10022a74 == 0) {
      uVar7 = FUN_100174d9(param_2);
      return uVar7;
    }
    uVar7 = WideCharToMultiByte(DAT_10022a84,0x220,param_2,-1,(LPSTR)0x0,0,(LPCSTR)0x0,&local_c);
    if ((uVar7 != 0) && (local_c == 0)) {
LAB_100156da:
      return uVar7 - 1;
    }
  }
  else {
    if (param_3 == 0) {
      return 0;
    }
    if (DAT_10022a74 == 0) {
      if (param_3 == 0) {
        return 0;
      }
      while ((ushort)*param_2 < 0x100) {
        param_1[uVar7] = (CHAR)*param_2;
        WVar2 = *param_2;
        param_2 = param_2 + 1;
        if (WVar2 == L'\0') {
          return uVar7;
        }
        uVar7 = uVar7 + 1;
        if (param_3 <= uVar7) {
          return uVar7;
        }
      }
    }
    else if (DAT_10021c08 == 1) {
      iVar3 = 0;
      if (param_3 != 0) {
        iVar3 = FUN_100156f0(param_2,param_3);
      }
      uVar7 = WideCharToMultiByte(DAT_10022a84,0x220,param_2,iVar3,param_1,iVar3,(LPCSTR)0x0,
                                  &local_c);
      if ((uVar7 != 0) && (local_c == 0)) {
        if (param_1[uVar7 - 1] != '\0') {
          return uVar7;
        }
        goto LAB_100156da;
      }
    }
    else {
      iVar3 = WideCharToMultiByte(DAT_10022a84,0x220,param_2,-1,param_1,param_3,(LPCSTR)0x0,&local_c
                                 );
      if (iVar3 == 0) {
        if (local_c == 0) {
          DVar4 = GetLastError();
          uVar7 = 0;
          if (DVar4 == 0x7a) {
            while( true ) {
              if (param_3 <= uVar7) {
                return uVar7;
              }
              iVar3 = WideCharToMultiByte(DAT_10022a84,0,param_2,1,local_6,DAT_10021c08,(LPCSTR)0x0,
                                          &local_c);
              if ((iVar3 == 0) || (local_c != 0)) break;
              if (param_3 < iVar3 + uVar7) {
                return uVar7;
              }
              iVar6 = 0;
              if (0 < iVar3) {
                do {
                  cVar1 = local_6[iVar6];
                  param_1[uVar7] = cVar1;
                  if (cVar1 == '\0') {
                    return uVar7;
                  }
                  iVar6 = iVar6 + 1;
                  uVar7 = uVar7 + 1;
                } while (iVar6 < iVar3);
              }
              param_2 = param_2 + 1;
            }
          }
        }
      }
      else if (local_c == 0) {
        return iVar3 - 1;
      }
    }
  }
  pDVar5 = FUN_100174c7();
  *pDVar5 = 0x2a;
  return 0xffffffff;
}



/* ================================================================
 * Function: FUN_100156f0
 * Address:  100156f0
 * ================================================================ */

int __cdecl FUN_100156f0(short *param_1,int param_2)

{
  short *psVar1;
  int iVar2;
  
  psVar1 = param_1;
  iVar2 = param_2;
  if (param_2 != 0) {
    do {
      if (*psVar1 == 0) break;
      psVar1 = psVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if ((iVar2 != 0) && (*psVar1 == 0)) {
      return ((int)psVar1 - (int)param_1 >> 1) + 1;
    }
  }
  return param_2;
}



/* ================================================================
 * Function: FUN_1001571f
 * Address:  1001571f
 * ================================================================ */

uint __cdecl FUN_1001571f(LPWSTR param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  
  InterlockedIncrement((LONG *)&DAT_10024318);
  bVar2 = DAT_10024314 != 0;
  if (bVar2) {
    InterlockedDecrement((LONG *)&DAT_10024318);
    FUN_1001715e(0x13);
  }
  uVar1 = FUN_1001577c(param_1,param_2,param_3);
  if (bVar2) {
    FUN_100171bf(0x13);
  }
  else {
    InterlockedDecrement((LONG *)&DAT_10024318);
  }
  return uVar1;
}



/* ================================================================
 * Function: FUN_1001577c
 * Address:  1001577c
 * ================================================================ */

uint __cdecl FUN_1001577c(LPWSTR param_1,byte *param_2,uint param_3)

{
  byte *lpMultiByteStr;
  uint uVar1;
  int iVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  byte *pbVar5;
  size_t sVar6;
  
  lpMultiByteStr = param_2;
  uVar1 = 0;
  if (param_1 == (LPWSTR)0x0) {
    if (DAT_10022a74 == 0) {
      sVar6 = _strlen((char *)param_2);
      return sVar6;
    }
    iVar2 = MultiByteToWideChar(DAT_10022a84,9,(LPCSTR)param_2,-1,(LPWSTR)0x0,0);
    if (iVar2 != 0) goto LAB_10015876;
  }
  else {
    if (param_3 == 0) {
      return 0;
    }
    if (DAT_10022a74 == 0) {
      if (param_3 == 0) {
        return 0;
      }
      do {
        *param_1 = (ushort)param_2[uVar1];
        if (param_2[uVar1] == 0) {
          return uVar1;
        }
        uVar1 = uVar1 + 1;
        param_1 = param_1 + 1;
      } while (uVar1 < param_3);
      return uVar1;
    }
    iVar2 = MultiByteToWideChar(DAT_10022a84,9,(LPCSTR)param_2,-1,param_1,param_3);
    if (iVar2 != 0) {
LAB_10015876:
      return iVar2 - 1;
    }
    DVar3 = GetLastError();
    pbVar5 = param_2;
    param_2 = (byte *)param_3;
    if (DVar3 == 0x7a) {
      do {
        param_2 = param_2 + -1;
        if (*pbVar5 == 0) break;
        if ((PTR_DAT_10021c14[(uint)*pbVar5 * 2 + 1] & 0x80) != 0) {
          pbVar5 = pbVar5 + 1;
        }
        pbVar5 = pbVar5 + 1;
      } while (param_2 != (byte *)0x0);
      uVar1 = MultiByteToWideChar(DAT_10022a84,1,(LPCSTR)lpMultiByteStr,
                                  (int)pbVar5 - (int)lpMultiByteStr,param_1,param_3);
      if (uVar1 != 0) {
        return uVar1;
      }
    }
  }
  pDVar4 = FUN_100174c7();
  *pDVar4 = 0x2a;
  return 0xffffffff;
}



/* ================================================================
 * Function: _memset
 * Address:  10015880
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
 * Function: FUN_100158e0
 * Address:  100158e0
 * ================================================================ */

undefined6 __cdecl FUN_100158e0(undefined2 param_1,byte param_2)

{
  out(param_1,param_2);
  return CONCAT24(param_1,(uint)param_2);
}



/* ================================================================
 * Function: FUN_10015905
 * Address:  10015905
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10015905(void)

{
  void *extraout_ECX;
  
  FUN_1001591d();
  _DAT_100229dc = FUN_10017546();
  FUN_100174f6(extraout_ECX);
  return;
}



/* ================================================================
 * Function: FUN_1001591d
 * Address:  1001591d
 * ================================================================ */

void FUN_1001591d(void)

{
  PTR___fptrap_10021e24 = &LAB_100175c9;
  PTR___fptrap_10021e20 = __cfltcvt;
  PTR___fptrap_10021e28 = __fassign;
  PTR___fptrap_10021e2c = FUN_1001756f;
  PTR___fptrap_10021e30 = &LAB_10017617;
  PTR___fptrap_10021e34 = __cfltcvt;
  return;
}



/* ================================================================
 * Function: FUN_10015960
 * Address:  10015960
 * ================================================================ */

undefined4 * __cdecl FUN_10015960(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10015b17_caseD_2;
        case 3:
          goto switchD_10015b17_caseD_3;
        }
        goto switchD_10015b17_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10015b17_caseD_0;
      case 1:
        goto switchD_10015b17_caseD_1;
      case 2:
        goto switchD_10015b17_caseD_2;
      case 3:
        goto switchD_10015b17_caseD_3;
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
              goto switchD_10015b17_caseD_2;
            case 3:
              goto switchD_10015b17_caseD_3;
            }
            goto switchD_10015b17_caseD_1;
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
              goto switchD_10015b17_caseD_2;
            case 3:
              goto switchD_10015b17_caseD_3;
            }
            goto switchD_10015b17_caseD_1;
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
              goto switchD_10015b17_caseD_2;
            case 3:
              goto switchD_10015b17_caseD_3;
            }
            goto switchD_10015b17_caseD_1;
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
switchD_10015b17_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10015b17_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10015b17_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10015b17_caseD_0:
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
        goto switchD_10015995_caseD_2;
      case 3:
        goto switchD_10015995_caseD_3;
      }
      goto switchD_10015995_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10015995_caseD_0;
    case 1:
      goto switchD_10015995_caseD_1;
    case 2:
      goto switchD_10015995_caseD_2;
    case 3:
      goto switchD_10015995_caseD_3;
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
            goto switchD_10015995_caseD_2;
          case 3:
            goto switchD_10015995_caseD_3;
          }
          goto switchD_10015995_caseD_1;
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
            goto switchD_10015995_caseD_2;
          case 3:
            goto switchD_10015995_caseD_3;
          }
          goto switchD_10015995_caseD_1;
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
            goto switchD_10015995_caseD_2;
          case 3:
            goto switchD_10015995_caseD_3;
          }
          goto switchD_10015995_caseD_1;
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
switchD_10015995_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10015995_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10015995_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10015995_caseD_0:
  return param_1;
}



/* ================================================================
 * Function: FUN_10015c95
 * Address:  10015c95
 * ================================================================ */

int __cdecl FUN_10015c95(undefined1 *param_1,byte *param_2)

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
  iVar1 = FUN_10017aad((int *)&local_24,param_2,(undefined4 *)&stack0x0000000c);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_10017995(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar1;
}



/* ================================================================
 * Function: FUN_10015ce7
 * Address:  10015ce7
 * ================================================================ */

int __thiscall FUN_10015ce7(void *this,byte *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  undefined *puVar6;
  
  while( true ) {
    if (DAT_10021c08 < 2) {
      uVar1 = (byte)PTR_DAT_10021c14[(uint)*param_1 * 2] & 8;
      this = PTR_DAT_10021c14;
    }
    else {
      puVar6 = (undefined *)0x8;
      uVar1 = FUN_100182b7(this,(uint)*param_1,8);
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
    if (DAT_10021c08 < 2) {
      uVar2 = (byte)PTR_DAT_10021c14[uVar4 * 2] & 4;
    }
    else {
      puVar6 = (undefined *)0x4;
      uVar2 = FUN_100182b7(this,uVar4,4);
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
 * Function: FUN_10015d72
 * Address:  10015d72
 * ================================================================ */

uint __cdecl FUN_10015d72(byte *param_1,byte *param_2)

{
  byte bVar1;
  DWORD *pDVar2;
  int iVar3;
  byte *pbVar4;
  byte local_24 [32];
  
  pDVar2 = FUN_100183b1();
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
LAB_10015e01:
      pDVar2[6] = (DWORD)pbVar4;
      return -(uint)(param_1 != pbVar4) & (uint)param_1;
    }
    if ((local_24[bVar1 >> 3] & (byte)(1 << (bVar1 & 7))) != 0) {
      *pbVar4 = 0;
      pbVar4 = pbVar4 + 1;
      goto LAB_10015e01;
    }
    pbVar4 = pbVar4 + 1;
  } while( true );
}



/* ================================================================
 * Function: FUN_10015e16
 * Address:  10015e16
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10015e16(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_10022a90 = GetVersion();
    iVar1 = FUN_1001614f(1);
    if (iVar1 != 0) {
      _DAT_10022a9c = DAT_10022a90 >> 8 & 0xff;
      _DAT_10022a98 = DAT_10022a90 & 0xff;
      DAT_10022a90 = DAT_10022a90 >> 0x10;
      _DAT_10022a94 = _DAT_10022a98 * 0x100 + _DAT_10022a9c;
      iVar1 = FUN_1001832c();
      if (iVar1 != 0) {
        DAT_10024340 = GetCommandLineA();
        DAT_100229e4 = FUN_10018aec();
        FUN_100185d6();
        FUN_1001889f();
        FUN_100187e6();
        FUN_100184b8();
        DAT_100229e0 = DAT_100229e0 + 1;
        goto LAB_10015ee9;
      }
      FUN_100161ac();
    }
LAB_10015e76:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_100229e0 < 1) goto LAB_10015e76;
      DAT_100229e0 = DAT_100229e0 + -1;
      if (DAT_10022ac8 == 0) {
        FUN_100184f6();
      }
      FUN_10018792();
      FUN_10018380();
      FUN_100161ac();
    }
    else if (param_2 == 3) {
      FUN_10018418((undefined *)0x0);
    }
LAB_10015ee9:
    uVar2 = 1;
  }
  return uVar2;
}



/* ================================================================
 * Function: entry
 * Address:  10015eef
 * ================================================================ */

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_100229e0;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_10015f37;
    if ((DAT_10024344 != (code *)0x0) &&
       (iVar2 = (*DAT_10024344)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_10015e16(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_10015f37:
  iVar2 = FUN_10010ab0(param_1,param_2);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_10015e16(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_10015e16(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_10024344 != (code *)0x0) {
      iVar2 = (*DAT_10024344)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}



/* ================================================================
 * Function: __amsg_exit
 * Address:  10015f8c
 * ================================================================ */

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_100229ec == 1) || ((DAT_100229ec == 0 && (DAT_100229f0 == 1)))) {
    FUN_10018c1e();
  }
  FUN_10018c57(param_1);
  (*(code *)PTR___exit_1001f890)(0xff);
  return;
}



/* ================================================================
 * Function: FUN_10015fbf
 * Address:  10015fbf
 * ================================================================ */

undefined4 __cdecl FUN_10015fbf(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_100229f8 != (code *)0x0) {
    iVar1 = (*DAT_100229f8)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



/* ================================================================
 * Function: FUN_10015fda
 * Address:  10015fda
 * ================================================================ */

void __cdecl FUN_10015fda(undefined4 *param_1)

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
 * Function: FUN_10016007
 * Address:  10016007
 * ================================================================ */

int FUN_10016007(void)

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
  
  FUN_10019160();
  local_9c = 0x94;
  BVar3 = GetVersionExA((LPOSVERSIONINFOA)&local_9c);
  if (((BVar3 == 0) || (local_8c != 2)) || (local_98 < 5)) {
    builtin_memcpy(aCStackY_18,"a`\x01\x10",4);
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
      aCStackY_18[0] = -0x61;
      aCStackY_18[1] = '`';
      aCStackY_18[2] = '\x01';
      aCStackY_18[3] = '\x10';
      iVar5 = _strncmp("__GLOBAL_HEAP_SELECTED",local_1230,0x16);
      if (iVar5 == 0) {
        pcVar7 = local_1230;
      }
      else {
        aCStackY_18[0] = -0x3f;
        aCStackY_18[1] = '`';
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
        builtin_memcpy(aCStackY_18,"\'a\x01\x10",4);
        iVar5 = FUN_10018daa(this,pbVar6,(int *)0x0,(void *)0xa);
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
    FUN_10015fda((undefined4 *)&stack0xfffffff8);
    iVar5 = 3 - (uint)(unaff_BL < 6);
  }
  else {
    iVar5 = 1;
  }
  return iVar5;
}



/* ================================================================
 * Function: FUN_1001614f
 * Address:  1001614f
 * ================================================================ */

undefined4 __cdecl FUN_1001614f(int param_1)

{
  undefined **ppuVar1;
  
  DAT_10024338 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_10024338 != (HANDLE)0x0) {
    DAT_1002433c = FUN_10016007();
    if (DAT_1002433c == 3) {
      ppuVar1 = (undefined **)FUN_10016254(0x3f8);
    }
    else {
      if (DAT_1002433c != 2) {
        return 1;
      }
      ppuVar1 = FUN_10016aa5();
    }
    if (ppuVar1 != (undefined **)0x0) {
      return 1;
    }
    HeapDestroy(DAT_10024338);
  }
  return 0;
}



/* ================================================================
 * Function: FUN_100161ac
 * Address:  100161ac
 * ================================================================ */

void FUN_100161ac(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  
  if (DAT_1002433c == 3) {
    iVar1 = 0;
    if (0 < DAT_1002432c) {
      puVar2 = (undefined4 *)((int)DAT_10024330 + 0xc);
      do {
        VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
        VirtualFree((LPVOID)*puVar2,0,0x8000);
        HeapFree(DAT_10024338,0,(LPVOID)puVar2[1]);
        puVar2 = puVar2 + 5;
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_1002432c);
    }
    HeapFree(DAT_10024338,0,DAT_10024330);
  }
  else if (DAT_1002433c == 2) {
    ppuVar3 = &PTR_LOOP_1001f898;
    do {
      if (ppuVar3[4] != (undefined *)0x0) {
        VirtualFree(ppuVar3[4],0,0x8000);
      }
      ppuVar3 = (undefined **)*ppuVar3;
    } while (ppuVar3 != &PTR_LOOP_1001f898);
  }
  HeapDestroy(DAT_10024338);
  return;
}



/* ================================================================
 * Function: FUN_10016254
 * Address:  10016254
 * ================================================================ */

undefined4 __cdecl FUN_10016254(undefined4 param_1)

{
  DAT_10024330 = HeapAlloc(DAT_10024338,0,0x140);
  if (DAT_10024330 == (LPVOID)0x0) {
    return 0;
  }
  DAT_10024328 = 0;
  DAT_1002432c = 0;
  DAT_10024324 = DAT_10024330;
  DAT_10024334 = param_1;
  DAT_1002431c = 0x10;
  return 1;
}



/* ================================================================
 * Function: FUN_1001629c
 * Address:  1001629c
 * ================================================================ */

uint __cdecl FUN_1001629c(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_10024330;
  while( true ) {
    if (DAT_10024330 + DAT_1002432c * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}



/* ================================================================
 * Function: FUN_100162c7
 * Address:  100162c7
 * ================================================================ */

void __cdecl FUN_100162c7(uint *param_1,int param_2)

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
      if (DAT_10024328 != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_10024320 * 0x8000 + DAT_10024328[3]),0x8000,0x4000);
        DAT_10024328[2] = DAT_10024328[2] | 0x80000000U >> ((byte)DAT_10024320 & 0x1f);
        *(undefined4 *)(DAT_10024328[4] + 0xc4 + DAT_10024320 * 4) = 0;
        *(char *)(DAT_10024328[4] + 0x43) = *(char *)(DAT_10024328[4] + 0x43) + -1;
        if (*(char *)(DAT_10024328[4] + 0x43) == '\0') {
          DAT_10024328[1] = DAT_10024328[1] & 0xfffffffe;
        }
        if (DAT_10024328[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_10024328[3],0,0x8000);
          HeapFree(DAT_10024338,0,(LPVOID)DAT_10024328[4]);
          FUN_10019190(DAT_10024328,DAT_10024328 + 5,
                       (DAT_1002432c * 0x14 - (int)DAT_10024328) + -0x14 + DAT_10024330);
          DAT_1002432c = DAT_1002432c + -1;
          if (DAT_10024328 < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_10024324 = DAT_10024330;
        }
      }
      DAT_10024328 = param_1;
      DAT_10024320 = uVar14;
    }
  }
  return;
}



/* ================================================================
 * Function: FUN_100165f0
 * Address:  100165f0
 * ================================================================ */

int * __cdecl FUN_100165f0(uint *param_1)

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
  
  puVar8 = DAT_10024330 + DAT_1002432c * 5;
  uVar6 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar7 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar5 = (byte)iVar7;
  param_1 = DAT_10024324;
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
  puVar11 = DAT_10024330;
  if (param_1 == puVar8) {
    for (; (puVar11 < DAT_10024324 && ((puVar11[1] & local_c) == 0 && (*puVar11 & local_10) == 0));
        puVar11 = puVar11 + 5) {
    }
    param_1 = puVar11;
    if (puVar11 == DAT_10024324) {
      for (; (puVar11 < puVar8 && (puVar11[2] == 0)); puVar11 = puVar11 + 5) {
      }
      puVar12 = DAT_10024330;
      param_1 = puVar11;
      if (puVar11 == puVar8) {
        for (; (puVar12 < DAT_10024324 && (puVar12[2] == 0)); puVar12 = puVar12 + 5) {
        }
        param_1 = puVar12;
        if ((puVar12 == DAT_10024324) && (param_1 = FUN_100168f9(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar7 = FUN_100169aa((int)param_1);
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
  DAT_10024324 = param_1;
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
    if (iVar9 == 0) goto LAB_100168b6;
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
LAB_100168b6:
  piVar10 = (int *)((int)piVar10 + iVar9);
  *piVar10 = uVar6 + 1;
  *(uint *)((int)piVar10 + (uVar6 - 4)) = uVar6 + 1;
  iVar7 = *piVar2;
  *piVar2 = iVar7 + 1;
  if (((iVar7 == 0) && (param_1 == DAT_10024328)) && (local_8 == DAT_10024320)) {
    DAT_10024328 = (uint *)0x0;
  }
  *piVar4 = local_8;
  return piVar10 + 1;
}



/* ================================================================
 * Function: FUN_100168f9
 * Address:  100168f9
 * ================================================================ */

undefined4 * FUN_100168f9(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_1002432c == DAT_1002431c) {
    pvVar2 = HeapReAlloc(DAT_10024338,0,DAT_10024330,(DAT_1002431c * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_1002431c = DAT_1002431c + 0x10;
    DAT_10024330 = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_10024330 + DAT_1002432c * 0x14);
  pvVar2 = HeapAlloc(DAT_10024338,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_1002432c = DAT_1002432c + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_10024338,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}



/* ================================================================
 * Function: FUN_100169aa
 * Address:  100169aa
 * ================================================================ */

int __cdecl FUN_100169aa(int param_1)

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
 * Function: FUN_10016aa5
 * Address:  10016aa5
 * ================================================================ */

undefined ** FUN_10016aa5(void)

{
  bool bVar1;
  int *lpAddress;
  LPVOID pvVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined **lpMem;
  
  if (DAT_1001f8a8 == -1) {
    lpMem = &PTR_LOOP_1001f898;
  }
  else {
    lpMem = HeapAlloc(DAT_10024338,0,0x2020);
    if (lpMem == (undefined **)0x0) {
      return (undefined **)0x0;
    }
  }
  lpAddress = VirtualAlloc((LPVOID)0x0,0x400000,0x2000,4);
  if (lpAddress != (int *)0x0) {
    pvVar2 = VirtualAlloc(lpAddress,0x10000,0x1000,4);
    if (pvVar2 != (LPVOID)0x0) {
      if (lpMem == &PTR_LOOP_1001f898) {
        if (PTR_LOOP_1001f898 == (undefined *)0x0) {
          PTR_LOOP_1001f898 = (undefined *)&PTR_LOOP_1001f898;
        }
        if (PTR_LOOP_1001f89c == (undefined *)0x0) {
          PTR_LOOP_1001f89c = (undefined *)&PTR_LOOP_1001f898;
        }
      }
      else {
        *lpMem = (undefined *)&PTR_LOOP_1001f898;
        lpMem[1] = PTR_LOOP_1001f89c;
        PTR_LOOP_1001f89c = (undefined *)lpMem;
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
  if (lpMem != &PTR_LOOP_1001f898) {
    HeapFree(DAT_10024338,0,lpMem);
  }
  return (undefined **)0x0;
}



/* ================================================================
 * Function: FUN_10016be9
 * Address:  10016be9
 * ================================================================ */

void __cdecl FUN_10016be9(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_100218b8 == param_1) {
    PTR_LOOP_100218b8 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_1001f898) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_10024338,0,param_1);
    return;
  }
  DAT_1001f8a8 = 0xffffffff;
  return;
}



/* ================================================================
 * Function: FUN_10016c3f
 * Address:  10016c3f
 * ================================================================ */

void __cdecl FUN_10016c3f(int param_1)

{
  BOOL BVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  int local_8;
  
  ppuVar4 = (undefined **)PTR_LOOP_1001f89c;
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
            DAT_100229fc = DAT_100229fc + -1;
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
          FUN_10016be9(ppuVar4);
        }
      }
    }
    if ((ppuVar5 == (undefined **)PTR_LOOP_1001f89c) || (ppuVar4 = ppuVar5, param_1 < 1)) {
      return;
    }
  } while( true );
}



/* ================================================================
 * Function: FUN_10016d01
 * Address:  10016d01
 * ================================================================ */

int __cdecl FUN_10016d01(undefined *param_1,undefined4 *param_2,uint *param_3)

{
  undefined **ppuVar1;
  uint uVar2;
  
  ppuVar1 = &PTR_LOOP_1001f898;
  while ((param_1 <= ppuVar1[4] || (ppuVar1[5] <= param_1))) {
    ppuVar1 = (undefined **)*ppuVar1;
    if (ppuVar1 == &PTR_LOOP_1001f898) {
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
 * Function: FUN_10016d58
 * Address:  10016d58
 * ================================================================ */

void __cdecl FUN_10016d58(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x18 + (param_2 - *(int *)(param_1 + 0x10) >> 0xc) * 8);
  *piVar1 = *piVar1 + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_100229fc = DAT_100229fc + 1, DAT_100229fc == 0x20)) {
    FUN_10016c3f(0x10);
  }
  return;
}



/* ================================================================
 * Function: FUN_10016d9d
 * Address:  10016d9d
 * ================================================================ */

/* WARNING: Type propagation algorithm not settling */

int * __cdecl FUN_10016d9d(uint param_1)

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
  
  piVar7 = (int *)PTR_LOOP_100218b8;
  do {
    if (piVar7[4] != -1) {
      puVar8 = (uint *)piVar7[2];
      piVar4 = (int *)(((int)puVar8 + (-0x18 - (int)piVar7) >> 3) * 0x1000 + piVar7[4]);
      if (puVar8 < piVar7 + 0x806) {
        do {
          if (((int)param_1 <= (int)*puVar8) && (param_1 < puVar8[1])) {
            piVar5 = (int *)FUN_10016fa5(piVar4,*puVar8,param_1);
            if (piVar5 != (int *)0x0) goto LAB_10016e68;
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
          piVar5 = (int *)FUN_10016fa5(piVar4,*puVar8,param_1);
          if (piVar5 != (int *)0x0) {
LAB_10016e68:
            PTR_LOOP_100218b8 = (undefined *)piVar7;
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
    if (piVar7 == (int *)PTR_LOOP_100218b8) {
      ppuVar9 = &PTR_LOOP_1001f898;
      while ((ppuVar9[4] == (undefined *)0xffffffff || (ppuVar9[3] == (undefined *)0x0))) {
        ppuVar9 = (undefined **)*ppuVar9;
        if (ppuVar9 == &PTR_LOOP_1001f898) {
          ppuVar9 = FUN_10016aa5();
          if (ppuVar9 == (undefined **)0x0) {
            return (int *)0x0;
          }
          piVar7 = (int *)ppuVar9[4];
          *(char *)(piVar7 + 2) = (char)param_1;
          PTR_LOOP_100218b8 = (undefined *)ppuVar9;
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
      PTR_LOOP_100218b8 = (undefined *)ppuVar9;
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
 * Function: FUN_10016fa5
 * Address:  10016fa5
 * ================================================================ */

int __cdecl FUN_10016fa5(int *param_1,uint param_2,uint param_3)

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
          goto LAB_100170b8;
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
LAB_100170b8:
  return (int)pbVar2 * 0x10 + (int)param_1 * -0xf;
}



/* ================================================================
 * Function: FUN_100170c9
 * Address:  100170c9
 * ================================================================ */

void FUN_100170c9(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10021904);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100218f4);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100218e4);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100218c4);
  return;
}



/* ================================================================
 * Function: FUN_100170f2
 * Address:  100170f2
 * ================================================================ */

void FUN_100170f2(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_100218c0;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_10021904)) && (ppuVar1 != &PTR_DAT_100218f4)) &&
       ((ppuVar1 != &PTR_DAT_100218e4 && (ppuVar1 != &PTR_DAT_100218c4)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_1001508a(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x10021980);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100218e4);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100218f4);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10021904);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100218c4);
  return;
}



/* ================================================================
 * Function: FUN_1001715e
 * Address:  1001715e
 * ================================================================ */

void __cdecl FUN_1001715e(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_100218c0 + param_1;
  if ((&DAT_100218c0)[param_1] == 0) {
    lpCriticalSection = _malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_1001715e(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_1001508a((undefined *)lpCriticalSection);
    }
    FUN_100171bf(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}



/* ================================================================
 * Function: FUN_100171bf
 * Address:  100171bf
 * ================================================================ */

void __cdecl FUN_100171bf(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_100218c0)[param_1]);
  return;
}



/* ================================================================
 * Function: __global_unwind2
 * Address:  100171d4
 * ================================================================ */

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x100171ec,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



/* ================================================================
 * Function: __local_unwind2
 * Address:  10017216
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
  puStack_18 = &LAB_100171f4;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_100172aa();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}



/* ================================================================
 * Function: FUN_100172aa
 * Address:  100172aa
 * ================================================================ */

void FUN_100172aa(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_10021988 = *(undefined4 *)(unaff_EBP + 8);
  DAT_10021984 = in_EAX;
  DAT_1002198c = unaff_EBP;
  return;
}



/* ================================================================
 * Function: FUN_10017389
 * Address:  10017389
 * ================================================================ */

void FUN_10017389(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}



/* ================================================================
 * Function: __aulldiv
 * Address:  100173b0
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
 * Function: __allmul
 * Address:  10017420
 * ================================================================ */

/* Library Function - Single Match
    __allmul
   
   Library: Visual Studio */

longlong __allmul(uint param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 == 0 && param_2 == 0) {
    return (ulonglong)param_1 * (ulonglong)param_3;
  }
  return CONCAT44((int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20) +
                  param_2 * param_3 + param_1 * param_4,
                  (int)((ulonglong)param_1 * (ulonglong)param_3));
}



/* ================================================================
 * Function: FUN_10017454
 * Address:  10017454
 * ================================================================ */

void __cdecl FUN_10017454(uint param_1)

{
  DWORD *pDVar1;
  uint *puVar2;
  int iVar3;
  
  pDVar1 = FUN_100174d0();
  iVar3 = 0;
  *pDVar1 = param_1;
  puVar2 = &DAT_10021aa0;
  do {
    if (param_1 == *puVar2) {
      pDVar1 = FUN_100174c7();
      *pDVar1 = *(DWORD *)(iVar3 * 8 + 0x10021aa4);
      return;
    }
    puVar2 = puVar2 + 2;
    iVar3 = iVar3 + 1;
  } while ((int)puVar2 < 0x10021c08);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    pDVar1 = FUN_100174c7();
    *pDVar1 = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    pDVar1 = FUN_100174c7();
    *pDVar1 = 8;
    return;
  }
  pDVar1 = FUN_100174c7();
  *pDVar1 = 0x16;
  return;
}



/* ================================================================
 * Function: FUN_100174c7
 * Address:  100174c7
 * ================================================================ */

DWORD * FUN_100174c7(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_100183b1();
  return pDVar1 + 2;
}



/* ================================================================
 * Function: FUN_100174d0
 * Address:  100174d0
 * ================================================================ */

DWORD * FUN_100174d0(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_100183b1();
  return pDVar1 + 3;
}



/* ================================================================
 * Function: FUN_100174d9
 * Address:  100174d9
 * ================================================================ */

int __cdecl FUN_100174d9(short *param_1)

{
  short sVar1;
  short *psVar2;
  
  sVar1 = *param_1;
  psVar2 = param_1;
  while (psVar2 = psVar2 + 1, sVar1 != 0) {
    sVar1 = *psVar2;
  }
  return ((int)psVar2 - (int)param_1 >> 1) + -1;
}



/* ================================================================
 * Function: FUN_100174f6
 * Address:  100174f6
 * ================================================================ */

void __fastcall FUN_100174f6(void *param_1)

{
  FUN_1001957f(param_1,0x10000,0x30000);
  return;
}



/* ================================================================
 * Function: FUN_10017508
 * Address:  10017508
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10017508(void)

{
  if (_DAT_1001d1f0 < _DAT_1001d1f8 - (_DAT_1001d1f8 / _DAT_1001d200) * _DAT_1001d200) {
    return 1;
  }
  return 0;
}



/* ================================================================
 * Function: FUN_10017546
 * Address:  10017546
 * ================================================================ */

void FUN_10017546(void)

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
  FUN_10017508();
  return;
}



/* ================================================================
 * Function: FUN_1001756f
 * Address:  1001756f
 * ================================================================ */

void __cdecl FUN_1001756f(char *param_1)

{
  char cVar1;
  char cVar2;
  undefined *this;
  uint uVar3;
  undefined *puVar4;
  
  this = (undefined *)(int)*param_1;
  uVar3 = FUN_100196b0((uint)this);
  if (uVar3 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_10021c08 < 2) {
        uVar3 = (byte)PTR_DAT_10021c14[*param_1 * 2] & 4;
        this = PTR_DAT_10021c14;
      }
      else {
        puVar4 = (undefined *)0x4;
        uVar3 = FUN_100182b7(this,(int)*param_1,4);
        this = puVar4;
      }
    } while (uVar3 != 0);
  }
  cVar2 = *param_1;
  *param_1 = DAT_10021c0c;
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
 * Address:  1001762f
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
    FUN_10019b7c(in_ECX,(uint *)&local_c,(byte *)number);
    *(void **)argument = local_c;
    *(void **)(argument + 4) = local_8;
    return;
  }
  FUN_10019ba9(in_ECX,(uint *)&number,(byte *)number);
  *(char **)argument = number;
  return;
}



/* ================================================================
 * Function: FUN_1001766d
 * Address:  1001766d
 * ================================================================ */

undefined1 * __cdecl FUN_1001766d(undefined8 *param_1,undefined1 *param_2,int param_3,int param_4)

{
  uint local_2c [6];
  int local_14 [4];
  
  FUN_10019c4d((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),local_14,local_2c);
  FUN_10019bd6(param_2 + (uint)(0 < param_3) + (uint)(local_14[0] == 0x2d),param_3 + 1,(int)local_14
              );
  FUN_100176ce(param_2,param_3,param_4,local_14,'\0');
  return param_2;
}



/* ================================================================
 * Function: FUN_100176ce
 * Address:  100176ce
 * ================================================================ */

undefined1 * __cdecl
FUN_100176ce(undefined1 *param_1,int param_2,int param_3,int *param_4,char param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint *puVar3;
  int iVar4;
  
  if (param_5 != '\0') {
    FUN_10017970(param_1 + (*param_4 == 0x2d),(uint)(0 < param_2));
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
    *puVar2 = DAT_10021c0c;
  }
  puVar3 = FUN_10015370((uint *)(puVar2 + param_2 + (uint)(param_5 == '\0')),(uint *)"e+000");
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
 * Function: FUN_10017790
 * Address:  10017790
 * ================================================================ */

char * __cdecl FUN_10017790(undefined8 *param_1,char *param_2,size_t param_3)

{
  uint local_2c [6];
  int local_14;
  int local_10;
  
  FUN_10019c4d((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),&local_14,local_2c);
  FUN_10019bd6(param_2 + (local_14 == 0x2d),local_10 + param_3,(int)&local_14);
  FUN_100177e5(param_2,param_3,&local_14,'\0');
  return param_2;
}



/* ================================================================
 * Function: FUN_100177e5
 * Address:  100177e5
 * ================================================================ */

char * __cdecl FUN_100177e5(char *param_1,size_t param_2,int *param_3,char param_4)

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
    FUN_10017970(pcVar3,1);
    *pcVar3 = '0';
    pcVar3 = pcVar3 + 1;
  }
  else {
    pcVar3 = pcVar3 + param_3[1];
  }
  if (0 < (int)param_2) {
    FUN_10017970(pcVar3,1);
    *pcVar3 = DAT_10021c0c;
    iVar1 = param_3[1];
    if (iVar1 < 0) {
      if ((param_4 != '\0') || (-iVar1 <= (int)param_2)) {
        param_2 = -iVar1;
      }
      FUN_10017970(pcVar3 + 1,param_2);
      _memset(pcVar3 + 1,0x30,param_2);
    }
  }
  return param_1;
}



/* ================================================================
 * Function: FUN_1001788c
 * Address:  1001788c
 * ================================================================ */

void __cdecl FUN_1001788c(undefined8 *param_1,char *param_2,size_t param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  uint local_2c [6];
  int local_14;
  int local_10;
  
  FUN_10019c4d((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),&local_14,local_2c);
  iVar1 = local_10 + -1;
  FUN_10019bd6(param_2 + (local_14 == 0x2d),param_3,(int)&local_14);
  local_10 = local_10 + -1;
  if ((local_10 < -4) || ((int)param_3 <= local_10)) {
    FUN_100176ce(param_2,param_3,param_4,&local_14,'\x01');
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
    FUN_100177e5(param_2,param_3,&local_14,'\x01');
  }
  return;
}



/* ================================================================
 * Function: __cfltcvt
 * Address:  1001791f
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
    puVar2 = FUN_1001766d(arg,buffer,format,precision);
  }
  else {
    if (sizeInBytes == 0x66) {
      pcVar1 = FUN_10017790(arg,buffer,format);
      return (errno_t)pcVar1;
    }
    puVar2 = (undefined1 *)FUN_1001788c(arg,buffer,format,precision);
  }
  return (errno_t)puVar2;
}



/* ================================================================
 * Function: FUN_10017970
 * Address:  10017970
 * ================================================================ */

void __cdecl FUN_10017970(char *param_1,int param_2)

{
  size_t sVar1;
  
  if (param_2 != 0) {
    sVar1 = _strlen(param_1);
    FUN_10019190((undefined4 *)(param_1 + param_2),(undefined4 *)param_1,sVar1 + 1);
  }
  return;
}



/* ================================================================
 * Function: FUN_10017995
 * Address:  10017995
 * ================================================================ */

uint __cdecl FUN_10017995(uint param_1,int *param_2)

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
LAB_10017aa1:
    param_2[3] = uVar1 | 0x20;
  }
  else {
    if ((uVar1 & 1) != 0) {
      param_2[1] = 0;
      if ((uVar1 & 0x10) == 0) goto LAB_10017aa1;
      *param_2 = param_2[2];
      param_2[3] = uVar1 & 0xfffffffe;
    }
    uVar1 = param_2[3];
    param_2[1] = 0;
    param_2 = (int *)0x0;
    piVar4[3] = uVar1 & 0xffffffef | 2;
    if (((uVar1 & 0x10c) == 0) &&
       (((piVar4 != (int *)&DAT_10021f50 && (piVar4 != (int *)&DAT_10021f70)) ||
        (bVar5 = FUN_1001a074(uVar2), CONCAT31(extraout_var,bVar5) == 0)))) {
      FUN_1001a030(piVar4);
    }
    if ((*(ushort *)(piVar4 + 3) & 0x108) == 0) {
      piVar7 = (int *)0x1;
      param_2 = (int *)FUN_10019e40(uVar2,(char *)&param_1,1);
    }
    else {
      pcVar3 = (char *)piVar4[2];
      piVar7 = (int *)(*piVar4 - (int)pcVar3);
      *piVar4 = (int)(pcVar3 + 1);
      piVar4[1] = piVar4[6] + -1;
      if ((int)piVar7 < 1) {
        if (uVar2 == 0xffffffff) {
          puVar6 = &DAT_10021e48;
        }
        else {
          puVar6 = (undefined *)((&DAT_10024200)[(int)uVar2 >> 5] + (uVar2 & 0x1f) * 0x24);
        }
        if ((puVar6[4] & 0x20) != 0) {
          FUN_10019d68(uVar2,0,2);
        }
      }
      else {
        param_2 = (int *)FUN_10019e40(uVar2,pcVar3,(uint)piVar7);
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
 * Function: FUN_10017aad
 * Address:  10017aad
 * ================================================================ */

int __cdecl FUN_10017aad(int *param_1,byte *param_2,undefined4 *param_3)

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
    local_34 = (int)(char)(&DAT_1001d240)[uVar2 * 8 + local_34] >> 4;
    switch(local_34) {
    case 0:
switchD_10017b1b_caseD_0:
      local_28 = 0;
      if ((PTR_DAT_10021c14[(uint)bVar9 * 2 + 1] & 0x80) != 0) {
        FUN_100181ee((int)(char)bVar9,param_1,&local_18);
        bVar9 = *param_2;
        param_2 = pbVar1 + 2;
      }
      FUN_100181ee((int)(char)bVar9,param_1,&local_18);
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
        local_24 = FUN_1001828c((int *)&param_3);
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
        local_14 = FUN_1001828c((int *)&param_3);
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
          goto switchD_10017b1b_caseD_0;
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
LAB_10017f2c:
              local_30 = 7;
LAB_10017f33:
              local_10 = (undefined1 *)0x10;
              if ((local_8 & 0x80) != 0) {
                local_1a = '0';
                local_19 = (char)local_30 + 'Q';
                local_20 = 2;
              }
              goto LAB_10017f9d;
            }
            if (bVar9 != 0x43) {
              if ((bVar9 != 0x45) && (bVar9 != 0x47)) {
                if (bVar9 == 0x53) {
                  if ((local_8 & 0x830) == 0) {
                    local_8 = local_8 | 0x800;
                  }
                  goto LAB_10017cda;
                }
                goto LAB_100180b7;
              }
              local_38 = 1;
              bVar9 = bVar9 + 0x20;
              goto LAB_10017d3b;
            }
            if ((local_8 & 0x830) == 0) {
              local_8 = local_8 | 0x800;
            }
LAB_10017d68:
            if ((local_8 & 0x810) == 0) {
              uVar5 = FUN_1001828c((int *)&param_3);
              local_24c[0] = (char)uVar5;
              local_10 = (undefined1 *)0x1;
            }
            else {
              uVar5 = FUN_100182a9((int *)&param_3);
              local_10 = (undefined1 *)FUN_1001a1fd(local_24c,(WCHAR)uVar5);
              if ((int)local_10 < 0) {
                local_2c = 1;
              }
            }
            pWVar4 = (WCHAR *)local_24c;
          }
          else if (bVar9 == 0x5a) {
            psVar6 = (short *)FUN_1001828c((int *)&param_3);
            if ((psVar6 == (short *)0x0) ||
               (pWVar4 = *(WCHAR **)(psVar6 + 2), pWVar4 == (WCHAR *)0x0)) {
              local_c = (WCHAR *)PTR_DAT_10021e38;
              pWVar4 = (WCHAR *)PTR_DAT_10021e38;
              goto LAB_10017ead;
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
            if (bVar9 == 99) goto LAB_10017d68;
            if (bVar9 == 100) goto LAB_10017f92;
          }
        }
        else {
LAB_10017d3b:
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
          (*(code *)PTR___fptrap_10021e20)(&local_4c,local_24c,(int)(char)bVar9,local_14,local_38);
          uVar2 = local_8 & 0x80;
          if ((uVar2 != 0) && (local_14 == 0)) {
            (*(code *)PTR___fptrap_10021e2c)(local_24c);
          }
          if ((bVar9 == 0x67) && (uVar2 == 0)) {
            (*(code *)PTR___fptrap_10021e24)(local_24c);
          }
          if (local_24c[0] == '-') {
            local_8 = local_8 | 0x100;
            pWVar4 = (WCHAR *)(local_24c + 1);
            local_c = pWVar4;
          }
LAB_10017ead:
          local_10 = (undefined1 *)_strlen((char *)pWVar4);
          pWVar4 = local_c;
        }
      }
      else {
        if (bVar9 == 0x69) {
LAB_10017f92:
          local_8 = local_8 | 0x40;
        }
        else {
          if (bVar9 == 0x6e) {
            piVar7 = (int *)FUN_1001828c((int *)&param_3);
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
            goto LAB_10017f9d;
          }
          if (bVar9 == 0x70) {
            local_14 = 8;
            goto LAB_10017f2c;
          }
          if (bVar9 == 0x73) {
LAB_10017cda:
            iVar10 = local_14;
            if (local_14 == -1) {
              iVar10 = 0x7fffffff;
            }
            pWVar3 = (WCHAR *)FUN_1001828c((int *)&param_3);
            if ((local_8 & 0x810) == 0) {
              pWVar4 = pWVar3;
              if (pWVar3 == (WCHAR *)0x0) {
                pWVar3 = (WCHAR *)PTR_DAT_10021e38;
                pWVar4 = (WCHAR *)PTR_DAT_10021e38;
              }
              for (; (iVar10 != 0 && ((char)*pWVar3 != '\0')); pWVar3 = (WCHAR *)((int)pWVar3 + 1))
              {
                iVar10 = iVar10 + -1;
              }
              local_10 = (undefined1 *)((int)pWVar3 - (int)pWVar4);
            }
            else {
              if (pWVar3 == (WCHAR *)0x0) {
                pWVar3 = (WCHAR *)PTR_DAT_10021e3c;
              }
              local_28 = 1;
              for (pWVar4 = pWVar3; (iVar10 != 0 && (*pWVar4 != L'\0')); pWVar4 = pWVar4 + 1) {
                iVar10 = iVar10 + -1;
              }
              local_10 = (undefined1 *)((int)pWVar4 - (int)pWVar3 >> 1);
              pWVar4 = pWVar3;
            }
            goto LAB_100180b7;
          }
          if (bVar9 != 0x75) {
            if (bVar9 != 0x78) goto LAB_100180b7;
            local_30 = 0x27;
            goto LAB_10017f33;
          }
        }
        local_10 = (undefined1 *)0xa;
LAB_10017f9d:
        if ((local_8 & 0x8000) == 0) {
          if ((local_8 & 0x20) == 0) {
            if ((local_8 & 0x40) == 0) {
              uVar2 = FUN_1001828c((int *)&param_3);
              uVar13 = (ulonglong)uVar2;
              goto LAB_10017ff0;
            }
            uVar2 = FUN_1001828c((int *)&param_3);
          }
          else if ((local_8 & 0x40) == 0) {
            uVar2 = FUN_1001828c((int *)&param_3);
            uVar2 = uVar2 & 0xffff;
          }
          else {
            uVar5 = FUN_1001828c((int *)&param_3);
            uVar2 = (uint)(short)uVar5;
          }
          uVar13 = (ulonglong)(int)uVar2;
        }
        else {
          uVar13 = FUN_10018299((int *)&param_3);
        }
LAB_10017ff0:
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
LAB_100180b7:
      local_c = pWVar4;
      uVar2 = local_8;
      if (local_2c == 0) {
        if ((local_8 & 0x40) != 0) {
          if ((local_8 & 0x100) == 0) {
            if ((local_8 & 1) == 0) {
              if ((local_8 & 2) == 0) goto LAB_100180ef;
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
LAB_100180ef:
        iVar10 = (local_24 - local_20) - (int)local_10;
        if ((local_8 & 0xc) == 0) {
          FUN_10018223(0x20,iVar10,param_1,&local_18);
        }
        FUN_10018254(&local_1a,local_20,param_1,&local_18);
        if (((uVar2 & 8) != 0) && ((uVar2 & 4) == 0)) {
          FUN_10018223(0x30,iVar10,param_1,&local_18);
        }
        if ((local_28 == 0) || (puVar12 = local_10, pWVar4 = local_c, (int)local_10 < 1)) {
          FUN_10018254((char *)local_c,(int)local_10,param_1,&local_18);
        }
        else {
          do {
            puVar12 = puVar12 + -1;
            iVar8 = FUN_1001a1fd(local_3c,*pWVar4);
            if (iVar8 < 1) break;
            FUN_10018254(local_3c,iVar8,param_1,&local_18);
            pWVar4 = pWVar4 + 1;
          } while (puVar12 != (undefined1 *)0x0);
        }
        if ((local_8 & 4) != 0) {
          FUN_10018223(0x20,iVar10,param_1,&local_18);
        }
      }
    }
    bVar9 = *param_2;
    pbVar1 = param_2;
  } while( true );
}



/* ================================================================
 * Function: FUN_100181ee
 * Address:  100181ee
 * ================================================================ */

void __cdecl FUN_100181ee(uint param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_2 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    uVar2 = FUN_10017995(param_1,param_2);
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
 * Function: FUN_10018223
 * Address:  10018223
 * ================================================================ */

void __cdecl FUN_10018223(uint param_1,int param_2,int *param_3,int *param_4)

{
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    FUN_100181ee(param_1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}



/* ================================================================
 * Function: FUN_10018254
 * Address:  10018254
 * ================================================================ */

void __cdecl FUN_10018254(char *param_1,int param_2,int *param_3,int *param_4)

{
  char cVar1;
  
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    FUN_100181ee((int)cVar1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}



/* ================================================================
 * Function: FUN_1001828c
 * Address:  1001828c
 * ================================================================ */

undefined4 __cdecl FUN_1001828c(int *param_1)

{
  *param_1 = *param_1 + 4;
  return *(undefined4 *)(*param_1 + -4);
}



/* ================================================================
 * Function: FUN_10018299
 * Address:  10018299
 * ================================================================ */

undefined8 __cdecl FUN_10018299(int *param_1)

{
  *param_1 = *param_1 + 8;
  return *(undefined8 *)(*param_1 + -8);
}



/* ================================================================
 * Function: FUN_100182a9
 * Address:  100182a9
 * ================================================================ */

undefined4 __cdecl FUN_100182a9(int *param_1)

{
  *param_1 = *param_1 + 4;
  return CONCAT22((short)((uint)*param_1 >> 0x10),*(undefined2 *)(*param_1 + -4));
}



/* ================================================================
 * Function: FUN_100182b7
 * Address:  100182b7
 * ================================================================ */

uint __thiscall FUN_100182b7(void *this,int param_1,uint param_2)

{
  BOOL BVar1;
  int iVar2;
  undefined4 local_8;
  
  if (param_1 + 1U < 0x101) {
    param_1._2_2_ = *(ushort *)(PTR_DAT_10021c14 + param_1 * 2);
  }
  else {
    if ((PTR_DAT_10021c14[(param_1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      local_8 = CONCAT31((int3)((uint)this >> 8),(char)param_1) & 0xffff00ff;
      iVar2 = 1;
    }
    else {
      local_8._0_2_ = CONCAT11((char)param_1,(char)((uint)param_1 >> 8));
      local_8 = CONCAT22((short)((uint)this >> 0x10),(undefined2)local_8) & 0xff00ffff;
      iVar2 = 2;
    }
    BVar1 = FUN_1001a335(1,(LPCSTR)&local_8,iVar2,(LPWORD)((int)&param_1 + 2),0,0,1);
    if (BVar1 == 0) {
      return 0;
    }
  }
  return param_1._2_2_ & param_2;
}



/* ================================================================
 * Function: FUN_1001832c
 * Address:  1001832c
 * ================================================================ */

undefined4 FUN_1001832c(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_100170c9();
  DAT_10021e40 = TlsAlloc();
  if (DAT_10021e40 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_1001a47e(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_10021e40,lpTlsValue);
      if (BVar1 != 0) {
        FUN_1001839e((int)lpTlsValue);
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
 * Function: FUN_10018380
 * Address:  10018380
 * ================================================================ */

void FUN_10018380(void)

{
  FUN_100170f2();
  if (DAT_10021e40 != 0xffffffff) {
    TlsFree(DAT_10021e40);
    DAT_10021e40 = 0xffffffff;
  }
  return;
}



/* ================================================================
 * Function: FUN_1001839e
 * Address:  1001839e
 * ================================================================ */

void __cdecl FUN_1001839e(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_100221b0;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}



/* ================================================================
 * Function: FUN_100183b1
 * Address:  100183b1
 * ================================================================ */

DWORD * FUN_100183b1(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_10021e40);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_1001a47e(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_10021e40,lpTlsValue);
      if (BVar1 != 0) {
        FUN_1001839e((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        goto LAB_1001840c;
      }
    }
    __amsg_exit(0x10);
  }
LAB_1001840c:
  SetLastError(dwErrCode);
  return lpTlsValue;
}



/* ================================================================
 * Function: FUN_10018418
 * Address:  10018418
 * ================================================================ */

void __cdecl FUN_10018418(undefined *param_1)

{
  if (DAT_10021e40 != 0xffffffff) {
    if ((param_1 != (undefined *)0x0) ||
       (param_1 = TlsGetValue(DAT_10021e40), param_1 != (undefined *)0x0)) {
      if (*(undefined **)(param_1 + 0x24) != (undefined *)0x0) {
        FUN_1001508a(*(undefined **)(param_1 + 0x24));
      }
      if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
        FUN_1001508a(*(undefined **)(param_1 + 0x28));
      }
      if (*(undefined **)(param_1 + 0x30) != (undefined *)0x0) {
        FUN_1001508a(*(undefined **)(param_1 + 0x30));
      }
      if (*(undefined **)(param_1 + 0x38) != (undefined *)0x0) {
        FUN_1001508a(*(undefined **)(param_1 + 0x38));
      }
      if (*(undefined **)(param_1 + 0x40) != (undefined *)0x0) {
        FUN_1001508a(*(undefined **)(param_1 + 0x40));
      }
      if (*(undefined **)(param_1 + 0x44) != (undefined *)0x0) {
        FUN_1001508a(*(undefined **)(param_1 + 0x44));
      }
      if (*(undefined **)(param_1 + 0x50) != &DAT_100221b0) {
        FUN_1001508a(*(undefined **)(param_1 + 0x50));
      }
      FUN_1001508a(param_1);
    }
    TlsSetValue(DAT_10021e40,(LPVOID)0x0);
    return;
  }
  return;
}



/* ================================================================
 * Function: FUN_100184b8
 * Address:  100184b8
 * ================================================================ */

void FUN_100184b8(void)

{
  if (PTR_FUN_1001f878 != (undefined *)0x0) {
    (*(code *)PTR_FUN_1001f878)();
  }
  FUN_100185bc((undefined4 *)&DAT_1001f008,(undefined4 *)&DAT_1001f018);
  FUN_100185bc((undefined4 *)&DAT_1001f000,(undefined4 *)&DAT_1001f004);
  return;
}



/* ================================================================
 * Function: __exit
 * Address:  100184e5
 * ================================================================ */

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __exit(int _Code)

{
  FUN_10018505(_Code,1,0);
  return;
}



/* ================================================================
 * Function: FUN_100184f6
 * Address:  100184f6
 * ================================================================ */

void FUN_100184f6(void)

{
  FUN_10018505(0,0,1);
  return;
}



/* ================================================================
 * Function: FUN_10018505
 * Address:  10018505
 * ================================================================ */

void __cdecl FUN_10018505(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_100185aa();
  if (DAT_10022acc == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_10022ac8 = 1;
  DAT_10022ac4 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_10024310 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_1002430c - 4), DAT_10024310 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_10024310 <= puVar1);
    }
    FUN_100185bc((undefined4 *)&DAT_1001f01c,(undefined4 *)&DAT_1001f024);
  }
  FUN_100185bc((undefined4 *)&DAT_1001f028,(undefined4 *)&DAT_1001f02c);
  if (param_3 == 0) {
    DAT_10022acc = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_100185b3();
  return;
}



/* ================================================================
 * Function: FUN_100185aa
 * Address:  100185aa
 * ================================================================ */

void FUN_100185aa(void)

{
  FUN_1001715e(0xd);
  return;
}



/* ================================================================
 * Function: FUN_100185b3
 * Address:  100185b3
 * ================================================================ */

void FUN_100185b3(void)

{
  FUN_100171bf(0xd);
  return;
}



/* ================================================================
 * Function: FUN_100185bc
 * Address:  100185bc
 * ================================================================ */

void __cdecl FUN_100185bc(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}



/* ================================================================
 * Function: FUN_100185d6
 * Address:  100185d6
 * ================================================================ */

void FUN_100185d6(void)

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
  DAT_10024300 = 0x20;
  DAT_10024200 = puVar2;
  for (; puVar2 < DAT_10024200 + 0x120; puVar2 = puVar2 + 9) {
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
    if ((int)DAT_10024300 < (int)UVar8) {
      puVar2 = &DAT_10024204;
      do {
        puVar3 = _malloc(0x480);
        UVar9 = DAT_10024300;
        if (puVar3 == (undefined4 *)0x0) break;
        DAT_10024300 = DAT_10024300 + 0x20;
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
      } while ((int)DAT_10024300 < (int)UVar8);
    }
    uVar7 = 0;
    if (0 < (int)UVar9) {
      do {
        if (((*(HANDLE *)local_8 != (HANDLE)0xffffffff) && ((*pUVar5 & 1) != 0)) &&
           (((*pUVar5 & 8) != 0 || (DVar4 = GetFileType(*(HANDLE *)local_8), DVar4 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_10024200)[(int)uVar7 >> 5] + (uVar7 & 0x1f) * 0x24);
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
    puVar2 = DAT_10024200 + iVar6 * 9;
    if (DAT_10024200[iVar6 * 9] == -1) {
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
          goto LAB_1001877b;
        }
      }
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x40;
    }
    else {
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x80;
    }
LAB_1001877b:
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      SetHandleCount(DAT_10024300);
      return;
    }
  } while( true );
}



/* ================================================================
 * Function: FUN_10018792
 * Address:  10018792
 * ================================================================ */

void FUN_10018792(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  uint uVar2;
  
  puVar1 = &DAT_10024200;
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
      FUN_1001508a((undefined *)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x10024300);
  return;
}



/* ================================================================
 * Function: FUN_100187e6
 * Address:  100187e6
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100187e6(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  
  if (DAT_10024308 == 0) {
    FUN_1001a993();
  }
  iVar5 = 0;
  for (puVar6 = DAT_100229e4; (char)*puVar6 != '\0'; puVar6 = (uint *)((int)puVar6 + sVar2 + 1)) {
    if ((char)*puVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen((char *)puVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  _DAT_10022aac = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = (char)*DAT_100229e4;
  puVar6 = DAT_100229e4;
  while (cVar1 != '\0') {
    sVar2 = _strlen((char *)puVar6);
    if ((char)*puVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_10015370((uint *)*puVar3,puVar6);
      puVar3 = puVar3 + 1;
    }
    puVar6 = (uint *)((int)puVar6 + sVar2 + 1);
    cVar1 = (char)*puVar6;
  }
  FUN_1001508a((undefined *)DAT_100229e4);
  DAT_100229e4 = (uint *)0x0;
  *puVar3 = 0;
  _DAT_10024304 = 1;
  return;
}



/* ================================================================
 * Function: FUN_1001889f
 * Address:  1001889f
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001889f(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_10024308 == 0) {
    FUN_1001a993();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_10022ad0,0x104);
  _DAT_10022abc = &DAT_10022ad0;
  pbVar2 = &DAT_10022ad0;
  if (*DAT_10024340 != 0) {
    pbVar2 = DAT_10024340;
  }
  FUN_10018938(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_10018938(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_10022aa4 = puVar1;
  _DAT_10022aa0 = local_8 + -1;
  return;
}



/* ================================================================
 * Function: FUN_10018938
 * Address:  10018938
 * ================================================================ */

void __cdecl FUN_10018938(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

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
      if (((*(byte *)((int)&DAT_100230c0 + bVar1 + 1) & 4) != 0) &&
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
      if ((*(byte *)((int)&DAT_100230c0 + bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        pbVar4 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_100189e3;
      param_1 = pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_100189e3:
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
          if ((*(byte *)((int)&DAT_100230c0 + bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if ((*(byte *)((int)&DAT_100230c0 + bVar1 + 1) & 4) != 0) {
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
 * Function: FUN_10018aec
 * Address:  10018aec
 * ================================================================ */

LPSTR FUN_10018aec(void)

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
  if (DAT_10022bd4 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_10022bd4 = 1;
LAB_10018b43:
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
        FUN_1001508a(pCVar6);
        local_8 = (LPSTR)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return local_8;
    }
    pCVar9 = GetEnvironmentStrings();
    if (pCVar9 == (LPCH)0x0) {
      return (LPSTR)0x0;
    }
    DAT_10022bd4 = 2;
  }
  else {
    if (DAT_10022bd4 == 1) goto LAB_10018b43;
    if (DAT_10022bd4 != 2) {
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
    FUN_10015960((undefined4 *)pCVar6,(undefined4 *)pCVar9,(uint)(pcVar7 + (1 - (int)pCVar9)));
  }
  FreeEnvironmentStringsA(pCVar9);
  return pCVar6;
}



/* ================================================================
 * Function: FUN_10018c1e
 * Address:  10018c1e
 * ================================================================ */

void FUN_10018c1e(void)

{
  if ((DAT_100229ec == 1) || ((DAT_100229ec == 0 && (DAT_100229f0 == 1)))) {
    FUN_10018c57(0xfc);
    if (DAT_10022bd8 != (code *)0x0) {
      (*DAT_10022bd8)();
    }
    FUN_10018c57(0xff);
  }
  return;
}



/* ================================================================
 * Function: FUN_10018c57
 * Address:  10018c57
 * ================================================================ */

void __cdecl FUN_10018c57(DWORD param_1)

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
  pDVar2 = &DAT_10021e70;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while ((int)pDVar2 < 0x10021f00);
  if (param_1 == (&DAT_10021e70)[iVar5 * 2]) {
    if ((DAT_100229ec == 1) || ((DAT_100229ec == 0 && (DAT_100229f0 == 1)))) {
      pDVar2 = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x10021e74);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar4,pDVar2,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_10015370(local_1a8,(uint *)"<program name unknown>");
      }
      _Dest = local_1a8;
      sVar4 = _strlen((char *)local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen((char *)local_1a8);
        _Dest = (uint *)(auStackY_1e3 + sVar4);
        _strncpy((char *)_Dest,"...",3);
      }
      FUN_10015370(local_a4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_10015380(local_a4,_Dest);
      FUN_10015380(local_a4,(uint *)&DAT_1001d568);
      FUN_10015380(local_a4,*(uint **)(iVar5 * 8 + 0x10021e74));
      auStackY_1e3._3_4_ = 0x10018d7b;
      FUN_1001a9af(local_a4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}



/* ================================================================
 * Function: FUN_10018daa
 * Address:  10018daa
 * ================================================================ */

void __thiscall FUN_10018daa(void *this,byte *param_1,int *param_2,void *param_3)

{
  FUN_10018dc1(this,param_1,param_2,param_3,0);
  return;
}



/* ================================================================
 * Function: FUN_10018dc1
 * Address:  10018dc1
 * ================================================================ */

void * __thiscall FUN_10018dc1(void *this,byte *param_1,int *param_2,void *param_3,uint param_4)

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
    if (DAT_10021c08 < 2) {
      uVar3 = (byte)PTR_DAT_10021c14[(uint)bVar7 * 2] & 8;
      this = PTR_DAT_10021c14;
    }
    else {
      puVar8 = (undefined *)0x8;
      uVar3 = FUN_100182b7(this,(uint)bVar7,8);
      this = puVar8;
    }
    if (uVar3 == 0) break;
    bVar7 = *local_8;
    pbVar1 = local_8;
  }
  if (bVar7 == 0x2d) {
    param_4 = param_4 | 2;
LAB_10018e1c:
    bVar7 = *local_8;
    local_8 = pbVar1 + 2;
  }
  else if (bVar7 == 0x2b) goto LAB_10018e1c;
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
      goto LAB_10018e86;
    }
    if ((*local_8 != 0x78) && (*local_8 != 0x58)) {
      param_3 = (void *)0x8;
      goto LAB_10018e86;
    }
    param_3 = (void *)0x10;
  }
  if (((param_3 == (void *)0x10) && (bVar7 == 0x30)) && ((*local_8 == 0x78 || (*local_8 == 0x58))))
  {
    bVar7 = local_8[1];
    local_8 = local_8 + 2;
  }
LAB_10018e86:
  pvVar4 = (void *)(0xffffffff / ZEXT48(param_3));
  do {
    uVar3 = (uint)bVar7;
    if (DAT_10021c08 < 2) {
      uVar5 = (byte)PTR_DAT_10021c14[uVar3 * 2] & 4;
    }
    else {
      pvVar2 = (void *)0x4;
      uVar5 = FUN_100182b7(this_00,uVar3,4);
      this_00 = pvVar2;
    }
    if (uVar5 == 0) {
      if (DAT_10021c08 < 2) {
        uVar3 = *(ushort *)(PTR_DAT_10021c14 + uVar3 * 2) & 0x103;
      }
      else {
        uVar3 = FUN_100182b7(this_00,uVar3,0x103);
      }
      if (uVar3 == 0) {
LAB_10018f32:
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
          pDVar6 = FUN_100174c7();
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
      uVar3 = FUN_1001aa38((int)(char)bVar7);
      this_00 = (void *)(uVar3 - 0x37);
    }
    else {
      this_00 = (void *)((char)bVar7 + -0x30);
    }
    if (param_3 <= this_00) goto LAB_10018f32;
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
 * Address:  10018fe0
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
 * Address:  100190a0
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
LAB_10019113:
        return _Str + -1;
      }
      if (*pcVar10 != pcVar8[2]) break;
      pcVar1 = pcVar8 + 3;
      if (*pcVar1 == '\0') goto LAB_10019113;
      pcVar2 = pcVar10 + 1;
      pcVar8 = pcVar8 + 2;
      pcVar10 = pcVar10 + 2;
    } while (*pcVar1 == *pcVar2);
  } while( true );
}



/* ================================================================
 * Function: _strncmp
 * Address:  10019120
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
 * Function: FUN_10019160
 * Address:  10019160
 * ================================================================ */

/* WARNING: Unable to track spacebase fully for stack */

void FUN_10019160(void)

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
 * Function: FUN_10019190
 * Address:  10019190
 * ================================================================ */

undefined4 * __cdecl FUN_10019190(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10019347_caseD_2;
        case 3:
          goto switchD_10019347_caseD_3;
        }
        goto switchD_10019347_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10019347_caseD_0;
      case 1:
        goto switchD_10019347_caseD_1;
      case 2:
        goto switchD_10019347_caseD_2;
      case 3:
        goto switchD_10019347_caseD_3;
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
              goto switchD_10019347_caseD_2;
            case 3:
              goto switchD_10019347_caseD_3;
            }
            goto switchD_10019347_caseD_1;
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
              goto switchD_10019347_caseD_2;
            case 3:
              goto switchD_10019347_caseD_3;
            }
            goto switchD_10019347_caseD_1;
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
              goto switchD_10019347_caseD_2;
            case 3:
              goto switchD_10019347_caseD_3;
            }
            goto switchD_10019347_caseD_1;
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
switchD_10019347_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10019347_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10019347_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10019347_caseD_0:
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
        goto switchD_100191c5_caseD_2;
      case 3:
        goto switchD_100191c5_caseD_3;
      }
      goto switchD_100191c5_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_100191c5_caseD_0;
    case 1:
      goto switchD_100191c5_caseD_1;
    case 2:
      goto switchD_100191c5_caseD_2;
    case 3:
      goto switchD_100191c5_caseD_3;
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
            goto switchD_100191c5_caseD_2;
          case 3:
            goto switchD_100191c5_caseD_3;
          }
          goto switchD_100191c5_caseD_1;
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
            goto switchD_100191c5_caseD_2;
          case 3:
            goto switchD_100191c5_caseD_3;
          }
          goto switchD_100191c5_caseD_1;
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
            goto switchD_100191c5_caseD_2;
          case 3:
            goto switchD_100191c5_caseD_3;
          }
          goto switchD_100191c5_caseD_1;
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
switchD_100191c5_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_100191c5_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_100191c5_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_100191c5_caseD_0:
  return param_1;
}



/* ================================================================
 * Function: FUN_100194d0
 * Address:  100194d0
 * ================================================================ */

int __cdecl FUN_100194d0(byte *param_1,byte *param_2)

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
 * Function: FUN_10019510
 * Address:  10019510
 * ================================================================ */

byte * __cdecl FUN_10019510(byte *param_1,byte *param_2)

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
 * Function: FUN_1001954a
 * Address:  1001954a
 * ================================================================ */

uint __thiscall FUN_1001954a(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  undefined2 in_FPUControlWord;
  undefined4 local_8;
  
  local_8 = CONCAT22((short)((uint)this >> 0x10),in_FPUControlWord);
  uVar1 = FUN_10019595(local_8);
  uVar1 = uVar1 & ~param_2 | param_1 & param_2;
  FUN_10019627(uVar1);
  return uVar1;
}



/* ================================================================
 * Function: FUN_1001957f
 * Address:  1001957f
 * ================================================================ */

void __thiscall FUN_1001957f(void *this,uint param_1,uint param_2)

{
  FUN_1001954a(this,param_1,param_2 & 0xfff7ffff);
  return;
}



/* ================================================================
 * Function: FUN_10019595
 * Address:  10019595
 * ================================================================ */

uint __cdecl FUN_10019595(uint param_1)

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
 * Function: FUN_10019627
 * Address:  10019627
 * ================================================================ */

uint __cdecl FUN_10019627(uint param_1)

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
 * Function: FUN_100196b0
 * Address:  100196b0
 * ================================================================ */

uint __cdecl FUN_100196b0(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_10022a74 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      return param_1 + 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_10024318);
    bVar1 = DAT_10024314 != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_10024318);
      this = (void *)0x13;
      FUN_1001715e(0x13);
    }
    param_1 = FUN_1001971f(this,param_1);
    if (bVar1) {
      FUN_100171bf(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_10024318);
    }
  }
  return param_1;
}



/* ================================================================
 * Function: FUN_1001971f
 * Address:  1001971f
 * ================================================================ */

uint __thiscall FUN_1001971f(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_10022a74 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      uVar1 = param_1 + 0x20;
    }
  }
  else {
    iVar3 = 1;
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_10021c08 < 2) {
        uVar2 = (byte)PTR_DAT_10021c14[param_1 * 2] & 1;
      }
      else {
        uVar2 = FUN_100182b7(this,param_1,1);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_10021c14[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_1001ad51(DAT_10022a74,0x100,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
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
 * Function: FUN_100197ea
 * Address:  100197ea
 * ================================================================ */

undefined4 __cdecl FUN_100197ea(int param_1,int param_2)

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
 * Function: FUN_10019833
 * Address:  10019833
 * ================================================================ */

void __cdecl FUN_10019833(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  
  puVar3 = (uint *)(param_1 + (param_2 / 0x20) * 4);
  iVar1 = FUN_1001afa0(*puVar3,1 << (0x1fU - (char)(param_2 % 0x20) & 0x1f),puVar3);
  iVar2 = param_2 / 0x20 + -1;
  if (-1 < iVar2) {
    puVar3 = (uint *)(param_1 + iVar2 * 4);
    do {
      if (iVar1 == 0) {
        return;
      }
      iVar1 = FUN_1001afa0(*puVar3,1,puVar3);
      iVar2 = iVar2 + -1;
      puVar3 = puVar3 + -1;
    } while (-1 < iVar2);
  }
  return;
}



/* ================================================================
 * Function: FUN_10019889
 * Address:  10019889
 * ================================================================ */

undefined4 __cdecl FUN_10019889(int param_1,int param_2)

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
     (iVar2 = FUN_100197ea(param_1,param_2 + 1), iVar2 == 0)) {
    local_8 = FUN_10019833(param_1,param_2 + -1);
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
 * Function: FUN_10019915
 * Address:  10019915
 * ================================================================ */

void __cdecl FUN_10019915(int param_1,undefined4 *param_2)

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
 * Function: FUN_10019930
 * Address:  10019930
 * ================================================================ */

void __cdecl FUN_10019930(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ================================================================
 * Function: FUN_1001993c
 * Address:  1001993c
 * ================================================================ */

undefined4 __cdecl FUN_1001993c(int *param_1)

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
 * Function: FUN_10019957
 * Address:  10019957
 * ================================================================ */

void __cdecl FUN_10019957(uint *param_1,uint param_2)

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
 * Function: FUN_100199e4
 * Address:  100199e4
 * ================================================================ */

undefined4 __cdecl FUN_100199e4(ushort *param_1,uint *param_2,int *param_3)

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
    iVar2 = FUN_1001993c((int *)&local_10);
    if (iVar2 != 0) {
LAB_10019b10:
      uVar5 = 0;
      goto LAB_10019b12;
    }
    FUN_10019930(&local_10);
  }
  else {
    FUN_10019915((int)local_1c,&local_10);
    iVar2 = FUN_10019889((int)&local_10,param_3[2]);
    if (iVar2 != 0) {
      iVar4 = uVar3 - 0x3ffe;
    }
    iVar2 = param_3[1];
    if (iVar4 < iVar2 - param_3[2]) {
      FUN_10019930(&local_10);
    }
    else {
      if (iVar2 < iVar4) {
        if (*param_3 <= iVar4) {
          FUN_10019930(&local_10);
          local_10 = local_10 | 0x80000000;
          FUN_10019957(&local_10,param_3[3]);
          iVar4 = param_3[5] + *param_3;
          uVar5 = 1;
          goto LAB_10019b12;
        }
        local_10 = local_10 & 0x7fffffff;
        iVar4 = param_3[5] + iVar4;
        FUN_10019957(&local_10,param_3[3]);
        goto LAB_10019b10;
      }
      FUN_10019915((int)&local_10,local_1c);
      FUN_10019957(&local_10,iVar2 - iVar4);
      FUN_10019889((int)&local_10,param_3[2]);
      FUN_10019957(&local_10,param_3[3] + 1);
    }
  }
  iVar4 = 0;
  uVar5 = 2;
LAB_10019b12:
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
 * Function: FUN_10019b50
 * Address:  10019b50
 * ================================================================ */

void __cdecl FUN_10019b50(ushort *param_1,uint *param_2)

{
  FUN_100199e4(param_1,param_2,(int *)&DAT_10021f00);
  return;
}



/* ================================================================
 * Function: FUN_10019b66
 * Address:  10019b66
 * ================================================================ */

void __cdecl FUN_10019b66(ushort *param_1,uint *param_2)

{
  FUN_100199e4(param_1,param_2,(int *)&DAT_10021f18);
  return;
}



/* ================================================================
 * Function: FUN_10019b7c
 * Address:  10019b7c
 * ================================================================ */

void __thiscall FUN_10019b7c(void *this,uint *param_1,byte *param_2)

{
  ushort local_10 [6];
  
  FUN_1001b141(this,local_10,(int *)&param_2,param_2,0,0,0,0);
  FUN_10019b50(local_10,param_1);
  return;
}



/* ================================================================
 * Function: FUN_10019ba9
 * Address:  10019ba9
 * ================================================================ */

void __thiscall FUN_10019ba9(void *this,uint *param_1,byte *param_2)

{
  ushort local_10 [6];
  
  FUN_1001b141(this,local_10,(int *)&param_2,param_2,0,0,0,0);
  FUN_10019b66(local_10,param_1);
  return;
}



/* ================================================================
 * Function: FUN_10019bd6
 * Address:  10019bd6
 * ================================================================ */

void __cdecl FUN_10019bd6(char *param_1,int param_2,int param_3)

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
    FUN_10019190((undefined4 *)pcVar1,(undefined4 *)_Str,sVar3 + 1);
  }
  return;
}



/* ================================================================
 * Function: FUN_10019c4d
 * Address:  10019c4d
 * ================================================================ */

int * __cdecl FUN_10019c4d(undefined4 param_1,undefined4 param_2,int *param_3,uint *param_4)

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
  FUN_10019ca9(&local_10,&param_1);
  iVar3 = FUN_1001b612(local_10,uStack_c,CONCAT22(uVar4,uStack_8),0x11,0,&local_2c);
  puVar2 = param_4;
  piVar1 = param_3;
  param_3[2] = iVar3;
  *param_3 = (int)local_2a;
  param_3[1] = (int)local_2c;
  FUN_10015370(param_4,local_28);
  piVar1[3] = (int)puVar2;
  return piVar1;
}



/* ================================================================
 * Function: FUN_10019ca9
 * Address:  10019ca9
 * ================================================================ */

void __cdecl FUN_10019ca9(uint *param_1,uint *param_2)

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
 * Address:  10019d5f
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
 * Function: FUN_10019d68
 * Address:  10019d68
 * ================================================================ */

DWORD __cdecl FUN_10019d68(uint param_1,LONG param_2,DWORD param_3)

{
  DWORD DVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_10024300) &&
     ((*(byte *)((&DAT_10024200)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1001b966(param_1);
    DVar1 = FUN_10019dcd(param_1,param_2,param_3);
    FUN_1001b9c5(param_1);
    return DVar1;
  }
  pDVar2 = FUN_100174c7();
  *pDVar2 = 9;
  pDVar2 = FUN_100174d0();
  *pDVar2 = 0;
  return 0xffffffff;
}



/* ================================================================
 * Function: FUN_10019dcd
 * Address:  10019dcd
 * ================================================================ */

DWORD __cdecl FUN_10019dcd(uint param_1,LONG param_2,DWORD param_3)

{
  byte *pbVar1;
  HANDLE hFile;
  DWORD *pDVar2;
  DWORD DVar3;
  uint uVar4;
  
  hFile = (HANDLE)FUN_1001b924(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    pDVar2 = FUN_100174c7();
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
      pbVar1 = (byte *)((&DAT_10024200)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24);
      *pbVar1 = *pbVar1 & 0xfd;
      return DVar3;
    }
    FUN_10017454(uVar4);
  }
  return 0xffffffff;
}



/* ================================================================
 * Function: FUN_10019e40
 * Address:  10019e40
 * ================================================================ */

int __cdecl FUN_10019e40(uint param_1,char *param_2,uint param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_10024300) &&
     ((*(byte *)((&DAT_10024200)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1001b966(param_1);
    iVar1 = FUN_10019ea5(param_1,param_2,param_3);
    FUN_1001b9c5(param_1);
    return iVar1;
  }
  pDVar2 = FUN_100174c7();
  *pDVar2 = 9;
  pDVar2 = FUN_100174d0();
  *pDVar2 = 0;
  return -1;
}



/* ================================================================
 * Function: FUN_10019ea5
 * Address:  10019ea5
 * ================================================================ */

int __cdecl FUN_10019ea5(DWORD param_1,char *param_2,uint param_3)

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
LAB_10019ebe:
    iVar4 = 0;
  }
  else {
    piVar1 = &DAT_10024200 + ((int)param_1 >> 5);
    iVar4 = (param_1 & 0x1f) * 0x24;
    if ((*(byte *)(*piVar1 + 4 + iVar4) & 0x20) != 0) {
      FUN_10019dcd(param_1,0,2);
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
LAB_10019f8d:
      if (local_c != 0) {
        return local_c - local_14;
      }
      if (param_1 == 0) goto LAB_10019fff;
      if (param_1 == 5) {
        pDVar7 = FUN_100174c7();
        *pDVar7 = 9;
        pDVar7 = FUN_100174d0();
        *pDVar7 = 5;
      }
      else {
        FUN_10017454(param_1);
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
            goto LAB_10019f8d;
          }
          local_c = local_c + local_10;
          if (((int)local_10 < (int)pcVar5 - (int)local_418) ||
             (param_3 <= (uint)((int)local_8 - (int)param_2))) goto LAB_10019f8d;
        } while( true );
      }
LAB_10019fff:
      if (((*(byte *)(*piVar1 + 4 + iVar4) & 0x40) != 0) && (*param_2 == '\x1a')) goto LAB_10019ebe;
      pDVar7 = FUN_100174c7();
      *pDVar7 = 0x1c;
      pDVar7 = FUN_100174d0();
      *pDVar7 = 0;
    }
    iVar4 = -1;
  }
  return iVar4;
}



/* ================================================================
 * Function: FUN_1001a030
 * Address:  1001a030
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1001a030(undefined4 *param_1)

{
  void *pvVar1;
  
  _DAT_10022c40 = _DAT_10022c40 + 1;
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
 * Function: FUN_1001a074
 * Address:  1001a074
 * ================================================================ */

byte __cdecl FUN_1001a074(uint param_1)

{
  if (DAT_10024300 <= param_1) {
    return 0;
  }
  return *(byte *)((&DAT_10024200)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0x40;
}



/* ================================================================
 * Function: FUN_1001a159
 * Address:  1001a159
 * ================================================================ */

void __cdecl FUN_1001a159(uint param_1)

{
  if ((0x10021f2f < param_1) && (param_1 < 0x10022191)) {
    FUN_1001715e(((int)(param_1 + 0xeffde0d0) >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



/* ================================================================
 * Function: FUN_1001a188
 * Address:  1001a188
 * ================================================================ */

void __cdecl FUN_1001a188(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_1001715e(param_1 + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



/* ================================================================
 * Function: FUN_1001a1ab
 * Address:  1001a1ab
 * ================================================================ */

void __cdecl FUN_1001a1ab(uint param_1)

{
  if ((0x10021f2f < param_1) && (param_1 < 0x10022191)) {
    FUN_100171bf(((int)(param_1 + 0xeffde0d0) >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



/* ================================================================
 * Function: FUN_1001a1da
 * Address:  1001a1da
 * ================================================================ */

void __cdecl FUN_1001a1da(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_100171bf(param_1 + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



/* ================================================================
 * Function: FUN_1001a1fd
 * Address:  1001a1fd
 * ================================================================ */

int __cdecl FUN_1001a1fd(LPSTR param_1,WCHAR param_2)

{
  int iVar1;
  bool bVar2;
  
  InterlockedIncrement((LONG *)&DAT_10024318);
  bVar2 = DAT_10024314 != 0;
  if (bVar2) {
    InterlockedDecrement((LONG *)&DAT_10024318);
    FUN_1001715e(0x13);
  }
  iVar1 = FUN_1001a256(param_1,param_2);
  if (bVar2) {
    FUN_100171bf(0x13);
  }
  else {
    InterlockedDecrement((LONG *)&DAT_10024318);
  }
  return iVar1;
}



/* ================================================================
 * Function: FUN_1001a256
 * Address:  1001a256
 * ================================================================ */

int __cdecl FUN_1001a256(LPSTR param_1,WCHAR param_2)

{
  LPSTR lpMultiByteStr;
  int iVar1;
  DWORD *pDVar2;
  
  lpMultiByteStr = param_1;
  if (param_1 == (LPSTR)0x0) {
    return 0;
  }
  if (DAT_10022a74 == 0) {
    if ((ushort)param_2 < 0x100) {
      *param_1 = (CHAR)param_2;
      return 1;
    }
  }
  else {
    param_1 = (LPSTR)0x0;
    iVar1 = WideCharToMultiByte(DAT_10022a84,0x220,&param_2,1,lpMultiByteStr,DAT_10021c08,
                                (LPCSTR)0x0,(LPBOOL)&param_1);
    if ((iVar1 != 0) && (param_1 == (LPSTR)0x0)) {
      return iVar1;
    }
  }
  pDVar2 = FUN_100174c7();
  *pDVar2 = 0x2a;
  return -1;
}



/* ================================================================
 * Function: __aullrem
 * Address:  1001a2c0
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
 * Function: FUN_1001a335
 * Address:  1001a335
 * ================================================================ */

BOOL __cdecl
FUN_1001a335(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
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
  puStack_c = &DAT_1001d5b0;
  puStack_10 = &LAB_100172cc;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc8;
  iVar3 = DAT_10022c44;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc8;
  if (DAT_10022c44 == 0) {
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
  DAT_10022c44 = iVar3;
  if (DAT_10022c44 != 2) {
    if (DAT_10022c44 == 1) {
      if (param_5 == 0) {
        param_5 = DAT_10022a84;
      }
      iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,
                                  (LPWSTR)0x0,0);
      if (iVar3 != 0) {
        local_8 = 0;
        FUN_10019160();
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
    param_6 = DAT_10022a74;
  }
  BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return BVar2;
}



/* ================================================================
 * Function: FUN_1001a47e
 * Address:  1001a47e
 * ================================================================ */

int * __cdecl FUN_1001a47e(int param_1,int param_2)

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
  puStack_c = &DAT_1001d5c0;
  puStack_10 = &LAB_100172cc;
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
      if (DAT_1002433c == 3) {
        if (puVar2 <= DAT_10024334) {
          FUN_1001715e(9);
          local_8 = 0;
          local_24 = FUN_100165f0(puVar2);
          local_8 = 0xffffffff;
          FUN_1001a517();
          _Size = puVar2;
          if (local_24 == (int *)0x0) goto LAB_1001a56b;
LAB_1001a55a:
          _memset(local_24,0,(size_t)_Size);
        }
LAB_1001a566:
        if (local_24 != (int *)0x0) {
          ExceptionList = local_14;
          return local_24;
        }
      }
      else {
        if ((DAT_1002433c != 2) || (DAT_100218bc < puVar3)) goto LAB_1001a566;
        FUN_1001715e(9);
        local_8 = 1;
        local_24 = FUN_10016d9d((uint)puVar3 >> 4);
        local_8 = 0xffffffff;
        FUN_1001a5a0();
        _Size = puVar3;
        if (local_24 != (int *)0x0) goto LAB_1001a55a;
      }
LAB_1001a56b:
      local_24 = HeapAlloc(DAT_10024338,8,(SIZE_T)puVar3);
    }
    if (local_24 != (int *)0x0) {
      ExceptionList = local_14;
      return local_24;
    }
    if (DAT_100229f4 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
    iVar1 = FUN_10015fbf(puVar3);
    if (iVar1 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
  } while( true );
}



/* ================================================================
 * Function: FUN_1001a517
 * Address:  1001a517
 * ================================================================ */

void FUN_1001a517(void)

{
  FUN_100171bf(9);
  return;
}



/* ================================================================
 * Function: FUN_1001a5a0
 * Address:  1001a5a0
 * ================================================================ */

void FUN_1001a5a0(void)

{
  FUN_100171bf(9);
  return;
}



/* ================================================================
 * Function: FUN_1001a5bb
 * Address:  1001a5bb
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1001a5bb(int param_1)

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
  
  FUN_1001715e(0x19);
  CodePage = FUN_1001a768(param_1);
  if (CodePage != DAT_10022f98) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_10022240;
LAB_1001a5f8:
      if (*pUVar5 != CodePage) goto code_r0x1001a5fc;
      local_8 = 0;
      puVar15 = &DAT_100230c0;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x10022250);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_10022238)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_100230c0 + uVar8 + 1);
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
      _DAT_10022fac = 1;
      DAT_10022f98 = CodePage;
      DAT_100231c4 = FUN_1001a7b2(CodePage);
      DAT_10022fa0 = *(undefined4 *)(iVar12 + 0x10022244);
      DAT_10022fa4 = *(undefined4 *)(iVar12 + 0x10022248);
      DAT_10022fa8 = *(undefined4 *)(iVar12 + 0x1002224c);
      goto LAB_1001a74c;
    }
    goto LAB_1001a747;
  }
  goto LAB_1001a5e2;
code_r0x1001a5fc:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if (0x1002232f < (int)pUVar5) goto code_r0x1001a607;
  goto LAB_1001a5f8;
code_r0x1001a607:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_100231c4 = 0;
    puVar15 = &DAT_100230c0;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      _DAT_10022fac = 0;
      DAT_10022f98 = CodePage;
    }
    else {
      DAT_10022f98 = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_100230c0 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_100230c0 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_100231c4 = FUN_1001a7b2(CodePage);
      _DAT_10022fac = 1;
    }
    DAT_10022fa0 = 0;
    DAT_10022fa4 = 0;
    DAT_10022fa8 = 0;
  }
  else {
    if (DAT_10022c48 == 0) {
      uVar14 = 0xffffffff;
      goto LAB_1001a759;
    }
LAB_1001a747:
    FUN_1001a7e5();
  }
LAB_1001a74c:
  FUN_1001a80e();
LAB_1001a5e2:
  uVar14 = 0;
LAB_1001a759:
  FUN_100171bf(0x19);
  return uVar14;
}



/* ================================================================
 * Function: FUN_1001a768
 * Address:  1001a768
 * ================================================================ */

int __cdecl FUN_1001a768(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_10022c48 = 1;
                    /* WARNING: Could not recover jumptable at 0x1001a782. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_10022c48 = 1;
                    /* WARNING: Could not recover jumptable at 0x1001a797. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_10022a84;
  }
  DAT_10022c48 = (uint)bVar2;
  return param_1;
}



/* ================================================================
 * Function: FUN_1001a7b2
 * Address:  1001a7b2
 * ================================================================ */

undefined4 __cdecl FUN_1001a7b2(int param_1)

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
 * Function: FUN_1001a7e5
 * Address:  1001a7e5
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001a7e5(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_100230c0;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_10022f98 = 0;
  _DAT_10022fac = 0;
  DAT_100231c4 = 0;
  DAT_10022fa0 = 0;
  DAT_10022fa4 = 0;
  DAT_10022fa8 = 0;
  return;
}



/* ================================================================
 * Function: FUN_1001a80e
 * Address:  1001a80e
 * ================================================================ */

void FUN_1001a80e(void)

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
  
  BVar2 = GetCPInfo(DAT_10022f98,&local_18);
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
    FUN_1001a335(1,local_118,0x100,local_518,DAT_10022f98,DAT_100231c4,0);
    FUN_1001ad51(DAT_100231c4,0x100,local_118,0x100,local_218,0x100,DAT_10022f98,0);
    FUN_1001ad51(DAT_100231c4,0x200,local_118,0x100,local_318,0x100,DAT_10022f98,0);
    uVar3 = 0;
    puVar7 = local_518;
    do {
      if ((*puVar7 & 1) == 0) {
        if ((*puVar7 & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_100230c0 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          uVar8 = *(undefined1 *)((int)local_318 + uVar3);
          goto LAB_1001a91a;
        }
        (&DAT_10022fc0)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_100230c0 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        uVar8 = *(undefined1 *)((int)local_218 + uVar3);
LAB_1001a91a:
        (&DAT_10022fc0)[uVar3] = uVar8;
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
          pbVar1 = (byte *)((int)&DAT_100230c0 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar4 = (char)uVar3 + -0x20;
          goto LAB_1001a964;
        }
        (&DAT_10022fc0)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_100230c0 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar4 = (char)uVar3 + ' ';
LAB_1001a964:
        (&DAT_10022fc0)[uVar3] = cVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}



/* ================================================================
 * Function: FUN_1001a993
 * Address:  1001a993
 * ================================================================ */

void FUN_1001a993(void)

{
  if (DAT_10024308 == 0) {
    FUN_1001a5bb(-3);
    DAT_10024308 = 1;
  }
  return;
}



/* ================================================================
 * Function: FUN_1001a9af
 * Address:  1001a9af
 * ================================================================ */

int __cdecl FUN_1001a9af(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_10022c4c == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_10022c4c = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_10022c4c != (FARPROC)0x0) {
        DAT_10022c50 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_10022c54 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_1001a9fe;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_1001a9fe:
    if (DAT_10022c50 != (FARPROC)0x0) {
      iVar1 = (*DAT_10022c50)();
      if ((iVar1 != 0) && (DAT_10022c54 != (FARPROC)0x0)) {
        iVar1 = (*DAT_10022c54)(iVar1);
      }
    }
    iVar1 = (*DAT_10022c4c)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}



/* ================================================================
 * Function: FUN_1001aa38
 * Address:  1001aa38
 * ================================================================ */

uint __cdecl FUN_1001aa38(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_10022a74 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      return param_1 - 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_10024318);
    bVar1 = DAT_10024314 != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_10024318);
      this = (void *)0x13;
      FUN_1001715e(0x13);
    }
    param_1 = FUN_1001aaa7(this,param_1);
    if (bVar1) {
      FUN_100171bf(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_10024318);
    }
  }
  return param_1;
}



/* ================================================================
 * Function: FUN_1001aaa7
 * Address:  1001aaa7
 * ================================================================ */

uint __thiscall FUN_1001aaa7(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_10022a74 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      uVar1 = param_1 - 0x20;
    }
  }
  else {
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_10021c08 < 2) {
        uVar2 = (byte)PTR_DAT_10021c14[param_1 * 2] & 2;
      }
      else {
        uVar2 = FUN_100182b7(this,param_1,2);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_10021c14[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
      iVar3 = 1;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_1001ad51(DAT_10022a74,0x200,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
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
 * Function: FUN_1001ab80
 * Address:  1001ab80
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_1001ab80(void *this,byte *param_1,byte *param_2)

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
  
  iVar2 = _DAT_10024318;
  if (DAT_10022a74 == 0) {
    bVar5 = 0xff;
    do {
      do {
        cVar6 = '\0';
        if (bVar5 == 0) goto LAB_1001abce;
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
LAB_1001abce:
    uVar7 = (uint)cVar6;
  }
  else {
    LOCK();
    _DAT_10024318 = _DAT_10024318 + 1;
    UNLOCK();
    bVar1 = 0 < DAT_10024314;
    if (bVar1) {
      LOCK();
      UNLOCK();
      _DAT_10024318 = iVar2;
      FUN_1001715e(0x13);
      this = extraout_ECX;
    }
    uVar9 = (uint)bVar1;
    uVar7 = 0xff;
    uVar8 = 0;
    do {
      do {
        if ((char)uVar7 == '\0') goto LAB_1001ac2f;
        bVar5 = *param_2;
        uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar5);
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        uVar8 = CONCAT31((int3)(uVar8 >> 8),bVar4);
        param_1 = param_1 + 1;
      } while (bVar5 == bVar4);
      uVar8 = FUN_1001971f(this,uVar8);
      uVar7 = FUN_1001971f(this_00,uVar7);
      this = extraout_ECX_00;
    } while ((byte)uVar8 == (byte)uVar7);
    uVar8 = (uint)((byte)uVar8 < (byte)uVar7);
    uVar7 = (1 - uVar8) - (uint)(uVar8 != 0);
LAB_1001ac2f:
    if (uVar9 == 0) {
      LOCK();
      _DAT_10024318 = _DAT_10024318 + -1;
      UNLOCK();
    }
    else {
      FUN_100171bf(0x13);
    }
  }
  return uVar7;
}



/* ================================================================
 * Function: FUN_1001ac50
 * Address:  1001ac50
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1001ac50(byte *param_1,char *param_2,void *param_3)

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
  
  iVar2 = _DAT_10024318;
  uVar6 = 0;
  if (param_3 != (void *)0x0) {
    if (DAT_10022a74 == 0) {
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
        if (bVar3 != (byte)uVar4) goto LAB_1001acaf;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar3 = (byte)(uVar4 >> 8);
      bVar8 = bVar3 < (byte)uVar4;
      if (bVar3 != (byte)uVar4) {
LAB_1001acaf:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
    }
    else {
      LOCK();
      _DAT_10024318 = _DAT_10024318 + 1;
      UNLOCK();
      bVar8 = 0 < DAT_10024314;
      if (bVar8) {
        LOCK();
        UNLOCK();
        _DAT_10024318 = iVar2;
        FUN_1001715e(0x13);
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
        uVar7 = FUN_1001971f(param_3,uVar7);
        uVar5 = FUN_1001971f(this,uVar5);
        bVar8 = uVar5 < uVar7;
        if (uVar5 != uVar7) goto LAB_1001ad25;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar8 = uVar5 < uVar7;
      if (uVar5 != uVar7) {
LAB_1001ad25:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
      if (uVar9 == 0) {
        LOCK();
        _DAT_10024318 = _DAT_10024318 + -1;
        UNLOCK();
      }
      else {
        FUN_100171bf(0x13);
      }
    }
  }
  return uVar6;
}



/* ================================================================
 * Function: FUN_1001ad51
 * Address:  1001ad51
 * ================================================================ */

int __cdecl
FUN_1001ad51(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1001d738;
  puStack_10 = &LAB_100172cc;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_10022c7c == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_10022c7c = 2;
    }
    else {
      DAT_10022c7c = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_1001af75(param_3,param_4);
  }
  if (DAT_10022c7c == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
    ExceptionList = local_14;
    return iVar1;
  }
  if (DAT_10022c7c == 1) {
    if (param_7 == 0) {
      param_7 = DAT_10022a84;
    }
    iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar1 != 0) {
      local_8 = 0;
      FUN_10019160();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x3c) &&
         (iVar2 = MultiByteToWideChar(param_7,1,param_3,param_4,(LPWSTR)&stack0xffffffc4,iVar1),
         iVar2 != 0)) {
        iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          if ((param_2 & 0x400) == 0) {
            local_8 = 1;
            FUN_10019160();
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
 * Function: FUN_1001af75
 * Address:  1001af75
 * ================================================================ */

int __cdecl FUN_1001af75(char *param_1,int param_2)

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
 * Function: FUN_1001afa0
 * Address:  1001afa0
 * ================================================================ */

undefined4 __cdecl FUN_1001afa0(uint param_1,uint param_2,uint *param_3)

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
 * Address:  1001afc1
 * ================================================================ */

/* Library Function - Single Match
    ___add_12
   
   Library: Visual Studio 2003 Release */

void __cdecl ___add_12(uint *param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = FUN_1001afa0(*param_1,*param_2,param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_1001afa0(param_1[1],1,param_1 + 1);
    if (iVar1 != 0) {
      param_1[2] = param_1[2] + 1;
    }
  }
  iVar1 = FUN_1001afa0(param_1[1],param_2[1],param_1 + 1);
  if (iVar1 != 0) {
    param_1[2] = param_1[2] + 1;
  }
  FUN_1001afa0(param_1[2],param_2[2],param_1 + 2);
  return;
}



/* ================================================================
 * Function: FUN_1001b01f
 * Address:  1001b01f
 * ================================================================ */

void __cdecl FUN_1001b01f(uint *param_1)

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
 * Function: FUN_1001b04d
 * Address:  1001b04d
 * ================================================================ */

void __cdecl FUN_1001b04d(uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = uVar1 >> 1 | param_1[2] << 0x1f;
  param_1[2] = param_1[2] >> 1;
  *param_1 = *param_1 >> 1 | uVar1 << 0x1f;
  return;
}



/* ================================================================
 * Function: FUN_1001b07a
 * Address:  1001b07a
 * ================================================================ */

void __cdecl FUN_1001b07a(char *param_1,int param_2,uint *param_3)

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
      FUN_1001b01f(puVar1);
      FUN_1001b01f(puVar1);
      ___add_12(puVar1,&local_14);
      FUN_1001b01f(puVar1);
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
    FUN_1001b01f(puVar1);
    local_8 = local_8 + 0xffff;
  }
  *(undefined2 *)((int)puVar1 + 10) = (undefined2)local_8;
  return;
}



/* ================================================================
 * Function: FUN_1001b141
 * Address:  1001b141
 * ================================================================ */

undefined4 __thiscall
FUN_1001b141(void *this,ushort *param_1,int *param_2,byte *param_3,int param_4,int param_5,
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
LAB_1001b198:
  local_14 = iVar5;
  pbVar7 = pbVar8;
  iVar5 = 1;
  bVar6 = *pbVar7;
  pbVar8 = pbVar7 + 1;
  iVar2 = local_14;
  switch(iVar9) {
  case 0:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) {
LAB_1001b1b5:
      local_14 = iVar2;
      iVar9 = 3;
      goto LAB_1001b3da;
    }
    if (bVar6 == DAT_10021c0c) goto LAB_1001b1c4;
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
      if (bVar6 != 0x30) goto LAB_1001b4b4;
    }
    goto LAB_1001b198;
  case 1:
    local_14 = 1;
    if (('0' < (char)bVar6) && (iVar2 = iVar5, (char)bVar6 < ':')) goto LAB_1001b1b5;
    iVar9 = iVar1;
    if (bVar6 != DAT_10021c0c) {
      iVar9 = iVar5;
      if ((bVar6 == 0x2b) || (iVar9 = local_14, bVar6 == 0x2d)) goto LAB_1001b249;
      iVar9 = iVar5;
      local_14 = iVar5;
      if (bVar6 != 0x30) goto LAB_1001b222;
    }
    goto LAB_1001b198;
  case 2:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) goto LAB_1001b1b5;
    if (bVar6 == DAT_10021c0c) {
LAB_1001b1c4:
      iVar9 = 5;
      iVar5 = local_14;
    }
    else {
      iVar9 = iVar5;
      pbVar7 = param_3;
      iVar5 = local_14;
      if (bVar6 != 0x30) goto LAB_1001b4b9;
    }
    goto LAB_1001b198;
  case 3:
    local_14 = iVar5;
    while( true ) {
      if (DAT_10021c08 < 2) {
        uVar3 = (byte)PTR_DAT_10021c14[(uint)bVar6 * 2] & 4;
        this = PTR_DAT_10021c14;
      }
      else {
        pbVar7 = (byte *)0x4;
        uVar3 = FUN_100182b7(this,(uint)bVar6,4);
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
    if (bVar6 != DAT_10021c0c) goto LAB_1001b336;
    goto LAB_1001b198;
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
      if (DAT_10021c08 < 2) {
        uVar3 = (byte)PTR_DAT_10021c14[(uint)bVar6 * 2] & 4;
        this = PTR_DAT_10021c14;
      }
      else {
        pbVar7 = (byte *)0x4;
        uVar3 = FUN_100182b7(this,(uint)bVar6,4);
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
LAB_1001b336:
    iVar9 = local_14;
    if ((bVar6 == 0x2b) || (bVar6 == 0x2d)) {
LAB_1001b249:
      local_14 = iVar9;
      iVar9 = 0xb;
      pbVar8 = pbVar8 + -1;
      iVar5 = local_14;
    }
    else {
LAB_1001b222:
      if (((char)bVar6 < 'D') ||
         (('E' < (char)bVar6 && (((char)bVar6 < 'd' || ('e' < (char)bVar6)))))) goto LAB_1001b4b4;
      iVar9 = 6;
      iVar5 = local_14;
    }
    goto LAB_1001b198;
  case 5:
    local_28 = iVar5;
    if (DAT_10021c08 < 2) {
      uVar3 = (byte)PTR_DAT_10021c14[(uint)bVar6 * 2] & 4;
      this = PTR_DAT_10021c14;
    }
    else {
      pbVar7 = (byte *)0x4;
      uVar3 = FUN_100182b7(this,(uint)bVar6,4);
      this = pbVar7;
    }
    iVar9 = iVar1;
    pbVar7 = param_3;
    if (uVar3 != 0) goto LAB_1001b3da;
    goto LAB_1001b4b9;
  case 6:
    pbVar7 = pbVar7 + -1;
    this = pbVar7;
    param_3 = pbVar7;
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) {
      if (bVar6 == 0x2b) goto LAB_1001b40f;
      if (bVar6 == 0x2d) goto LAB_1001b403;
      if (bVar6 != 0x30) goto LAB_1001b4b9;
LAB_1001b3a8:
      iVar9 = 8;
      iVar5 = local_14;
      goto LAB_1001b198;
    }
    break;
  case 7:
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) {
      pbVar7 = param_3;
      if (bVar6 == 0x30) goto LAB_1001b3a8;
      goto LAB_1001b4b9;
    }
    break;
  case 8:
    local_24 = 1;
    while (bVar6 == 0x30) {
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    }
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) goto LAB_1001b4b4;
    break;
  case 9:
    local_24 = 1;
    pbVar7 = (byte *)0x0;
    goto LAB_1001b43a;
  default:
    goto switchD_1001b1a4_caseD_a;
  case 0xb:
    if (param_7 != 0) {
      if (bVar6 == 0x2b) {
LAB_1001b40f:
        iVar9 = 7;
        this = pbVar7;
        param_3 = pbVar7;
        iVar5 = local_14;
      }
      else {
        param_3 = pbVar7;
        if (bVar6 != 0x2d) goto LAB_1001b4b9;
LAB_1001b403:
        local_1c = -1;
        iVar9 = 7;
        this = pbVar7;
        param_3 = pbVar7;
        iVar5 = local_14;
      }
      goto LAB_1001b198;
    }
    iVar9 = 10;
    pbVar8 = pbVar7;
switchD_1001b1a4_caseD_a:
    pbVar7 = pbVar8;
    iVar5 = local_14;
    if (iVar9 != 10) goto LAB_1001b198;
    goto LAB_1001b4b9;
  }
  iVar9 = 9;
LAB_1001b3da:
  pbVar8 = pbVar8 + -1;
  iVar5 = local_14;
  goto LAB_1001b198;
LAB_1001b43a:
  if (DAT_10021c08 < 2) {
    uVar3 = (byte)PTR_DAT_10021c14[(uint)bVar6 * 2] & 4;
    this = PTR_DAT_10021c14;
  }
  else {
    pbVar10 = (byte *)0x4;
    uVar3 = FUN_100182b7(this,(uint)bVar6,4);
    this = pbVar10;
  }
  if (uVar3 == 0) goto LAB_1001b484;
  this = (void *)(int)(char)bVar6;
  pbVar7 = (byte *)((int)this + (int)pbVar7 * 10 + -0x30);
  if (0x1450 < (int)pbVar7) goto LAB_1001b47c;
  bVar6 = *pbVar8;
  pbVar8 = pbVar8 + 1;
  goto LAB_1001b43a;
LAB_1001b47c:
  pbVar7 = (byte *)0x1451;
LAB_1001b484:
  while( true ) {
    local_20 = pbVar7;
    if (DAT_10021c08 < 2) {
      uVar3 = (byte)PTR_DAT_10021c14[(uint)bVar6 * 2] & 4;
      this = PTR_DAT_10021c14;
    }
    else {
      pbVar7 = (byte *)0x4;
      uVar3 = FUN_100182b7(this,(uint)bVar6,4);
      this = pbVar7;
    }
    if (uVar3 == 0) break;
    bVar6 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    pbVar7 = local_20;
  }
LAB_1001b4b4:
  pbVar7 = pbVar8 + -1;
LAB_1001b4b9:
  *param_2 = (int)pbVar7;
  if (local_14 == 0) {
    local_44 = 0;
    local_3a = 0;
    local_3e = (byte *)0x0;
    param_3 = (byte *)0x0;
    local_18 = 4;
    goto LAB_1001b5c7;
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
    FUN_1001b07a(local_60,local_8,(uint *)&local_44);
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
        FUN_1001bdbf((int *)&local_44,(uint)pbVar8,param_4);
        param_3 = (byte *)CONCAT22(uStack_40,uStack_42);
        goto LAB_1001b54c;
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
LAB_1001b54c:
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
LAB_1001b5c7:
  *(byte **)(param_1 + 3) = local_3e;
  *(byte **)(param_1 + 1) = param_3;
  param_1[5] = local_3a | (ushort)local_2c;
  *param_1 = local_44;
  return local_18;
}



/* ================================================================
 * Function: FUN_1001b612
 * Address:  1001b612
 * ================================================================ */

undefined4 __cdecl
FUN_1001b612(uint param_1,uint param_2,uint param_3,int param_4,byte param_5,short *param_6)

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
          if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_1001b707;
          pcVar11 = "1#INF";
        }
        else {
          if (param_1 != 0) {
LAB_1001b707:
            pcVar11 = "1#QNAN";
            goto LAB_1001b70c;
          }
          pcVar11 = "1#IND";
        }
        FUN_10015370((uint *)(param_6 + 2),(uint *)pcVar11);
        *(undefined1 *)((int)psVar3 + 3) = 5;
      }
      else {
        pcVar11 = "1#SNAN";
LAB_1001b70c:
        FUN_10015370((uint *)(param_6 + 2),(uint *)pcVar11);
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
    FUN_1001bdbf((int *)&local_14,-(int)sVar8,1);
    if (0x3ffe < CONCAT11(cStack_9,local_a)) {
      sVar8 = sVar8 + 1;
      FUN_1001bb9f((int *)&local_14,(int *)&local_20);
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
        FUN_1001b01f((uint *)&local_14);
        param_6 = (short *)((int)param_6 + -1);
      } while (param_6 != (short *)0x0);
      if (iVar9 < 0) {
        param_6 = (short *)0x0;
        for (uVar5 = -iVar9 & 0xff; uVar5 != 0; uVar5 = uVar5 - 1) {
          FUN_1001b04d((uint *)&local_14);
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
          FUN_1001b01f((uint *)&local_14);
          FUN_1001b01f((uint *)&local_14);
          ___add_12((uint *)&local_14,&param_1);
          FUN_1001b01f((uint *)&local_14);
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
            if (psVar1 <= psVar7) goto LAB_1001b864;
            break;
          }
          *(char *)psVar7 = '0';
        }
        psVar7 = (short *)((int)psVar7 + 1);
        *psVar3 = *psVar3 + 1;
LAB_1001b864:
        *(char *)psVar7 = (char)*psVar7 + '\x01';
LAB_1001b866:
        cVar4 = ((char)psVar7 - (char)psVar3) + -3;
        *(char *)((int)psVar3 + 3) = cVar4;
        *(undefined1 *)(cVar4 + 4 + (int)psVar3) = 0;
        return local_8;
      }
      for (; psVar1 <= psVar7; psVar7 = (short *)((int)psVar7 + -1)) {
        if ((char)*psVar7 != '0') {
          if (psVar1 <= psVar7) goto LAB_1001b866;
          break;
        }
      }
      *psVar3 = 0;
      *(undefined1 *)(psVar3 + 1) = 0x20;
      *(undefined1 *)((int)psVar3 + 3) = 1;
      *(char *)psVar1 = '0';
      goto LAB_1001b89c;
    }
  }
  *psVar3 = 0;
  *(undefined1 *)(psVar3 + 1) = 0x20;
  *(undefined1 *)((int)psVar3 + 3) = 1;
  *(undefined1 *)(psVar3 + 2) = 0x30;
LAB_1001b89c:
  *(undefined1 *)((int)psVar3 + 5) = 0;
  return 1;
}



/* ================================================================
 * Function: FUN_1001b8a5
 * Address:  1001b8a5
 * ================================================================ */

undefined4 __cdecl FUN_1001b8a5(uint param_1)

{
  int *piVar1;
  DWORD *pDVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if (param_1 < DAT_10024300) {
    iVar3 = (param_1 & 0x1f) * 0x24;
    piVar1 = (int *)((&DAT_10024200)[(int)param_1 >> 5] + iVar3);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_100229f0 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_1001b901;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_1001b901:
      *(undefined4 *)((&DAT_10024200)[(int)param_1 >> 5] + iVar3) = 0xffffffff;
      return 0;
    }
  }
  pDVar2 = FUN_100174c7();
  *pDVar2 = 9;
  pDVar2 = FUN_100174d0();
  *pDVar2 = 0;
  return 0xffffffff;
}



/* ================================================================
 * Function: FUN_1001b924
 * Address:  1001b924
 * ================================================================ */

undefined4 __cdecl FUN_1001b924(uint param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 < DAT_10024300) &&
     ((*(byte *)((&DAT_10024200)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_10024200)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  pDVar1 = FUN_100174c7();
  *pDVar1 = 9;
  pDVar1 = FUN_100174d0();
  *pDVar1 = 0;
  return 0xffffffff;
}



/* ================================================================
 * Function: FUN_1001b966
 * Address:  1001b966
 * ================================================================ */

void __cdecl FUN_1001b966(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1 & 0x1f) * 0x24;
  iVar1 = (&DAT_10024200)[(int)param_1 >> 5] + iVar2;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_1001715e(0x11);
    if (*(int *)(iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_100171bf(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((&DAT_10024200)[(int)param_1 >> 5] + 0xc + iVar2));
  return;
}



/* ================================================================
 * Function: FUN_1001b9c5
 * Address:  1001b9c5
 * ================================================================ */

void __cdecl FUN_1001b9c5(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_10024200)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}



/* ================================================================
 * Function: FUN_1001ba68
 * Address:  1001ba68
 * ================================================================ */

int __cdecl FUN_1001ba68(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_1001ba96(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((*(byte *)((int)param_1 + 0xd) & 0x40) != 0) {
    iVar1 = FUN_1001beb8(param_1[4]);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}



/* ================================================================
 * Function: FUN_1001ba96
 * Address:  1001ba96
 * ================================================================ */

undefined4 __cdecl FUN_1001ba96(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if ((((byte)param_1[3] & 3) == 2) && ((param_1[3] & 0x108U) != 0)) {
    uVar3 = *param_1 - param_1[2];
    if (0 < (int)uVar3) {
      uVar1 = FUN_10019e40(param_1[4],(char *)param_1[2],uVar3);
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
 * Function: FUN_1001bafb
 * Address:  1001bafb
 * ================================================================ */

int __cdecl FUN_1001bafb(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = 0;
  FUN_1001715e(2);
  iVar4 = 0;
  if (0 < DAT_100241e0) {
    do {
      iVar2 = *(int *)(DAT_100231c8 + iVar4 * 4);
      if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0xc) & 0x83) != 0)) {
        FUN_1001a188(iVar4,iVar2);
        piVar1 = *(int **)(DAT_100231c8 + iVar4 * 4);
        if ((piVar1[3] & 0x83U) != 0) {
          if (param_1 == 1) {
            iVar2 = FUN_1001ba68(piVar1);
            if (iVar2 != -1) {
              iVar3 = iVar3 + 1;
            }
          }
          else if ((param_1 == 0) && ((piVar1[3] & 2U) != 0)) {
            iVar2 = FUN_1001ba68(piVar1);
            if (iVar2 == -1) {
              iVar5 = -1;
            }
          }
        }
        FUN_1001a1da(iVar4,*(int *)(DAT_100231c8 + iVar4 * 4));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_100241e0);
  }
  FUN_100171bf(2);
  if (param_1 != 1) {
    iVar3 = iVar5;
  }
  return iVar3;
}



/* ================================================================
 * Function: FUN_1001bb9f
 * Address:  1001bb9f
 * ================================================================ */

void __cdecl FUN_1001bb9f(int *param_1,int *param_2)

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
LAB_1001bc42:
      piVar4[2] = 0;
      piVar4[1] = 0;
      *piVar4 = 0;
      return;
    }
    if (((uVar6 != 0) || (piVar1 = (int *)((int)piVar1 + 1), (param_1[2] & 0x7fffffffU) != 0)) ||
       ((uVar6 = 0, param_1[1] != 0 || (*param_1 != 0)))) {
      param_1 = piVar1;
      if (((uVar9 == 0) && (param_1 = (int *)((int)param_1 + 1), (param_2[2] & 0x7fffffffU) == 0))
         && ((param_2[1] == 0 && (*param_2 == 0)))) goto LAB_1001bc42;
      local_14 = 0;
      local_8 = &local_24;
      param_2 = (int *)0x5;
      do {
        if (0 < (int)param_2) {
          local_c = (ushort *)(local_14 * 2 + (int)piVar4);
          local_10 = (ushort *)(piVar5 + 2);
          local_1c = param_2;
          do {
            iVar8 = FUN_1001afa0(*(uint *)(local_8 + -2),(uint)*local_c * (uint)*local_10,
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
LAB_1001bcf6:
        param_1._0_2_ = (ushort)param_1 - 1;
        if ((short)(ushort)param_1 < 0) {
          iVar8 = -(int)(short)(ushort)param_1;
          param_1._0_2_ = (ushort)param_1 + (short)iVar8;
          do {
            if ((local_28 & 1) != 0) {
              local_18 = local_18 + 1;
            }
            FUN_1001b04d((uint *)&local_28);
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
          FUN_1001b01f((uint *)&local_28);
          param_1 = (int *)((int)param_1 + 0xffff);
        } while (0 < (short)(ushort)param_1);
        if ((short)(ushort)param_1 < 1) goto LAB_1001bcf6;
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
      if (0x7ffe < (ushort)param_1) goto LAB_1001bd9f;
      uVar6 = (ushort)param_1 | uVar11;
      *(undefined2 *)piVar4 = uStack_26;
      *(uint *)((int)piVar4 + 2) = CONCAT22(uStack_22,local_24);
      *(uint *)((int)piVar4 + 6) = CONCAT13(bStack_1d,CONCAT12(uStack_1e,local_20));
    }
    *(ushort *)((int)piVar4 + 10) = uVar6;
  }
  else {
LAB_1001bd9f:
    piVar4[1] = 0;
    *piVar4 = 0;
    piVar4[2] = (-(uint)(uVar11 != 0) & 0x80000000) + 0x7fff8000;
  }
  return;
}



/* ================================================================
 * Function: FUN_1001bdbf
 * Address:  1001bdbf
 * ================================================================ */

void __cdecl FUN_1001bdbf(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined2 local_10;
  undefined4 local_e;
  undefined2 uStack_a;
  int iStack_8;
  
  iVar3 = 0x100224f0;
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      iVar3 = 0x10022650;
    }
    if (param_3 == 0) {
      *(undefined2 *)param_1 = 0;
    }
    while (param_2 != 0) {
      iVar3 = iVar3 + 0x54;
      uVar1 = (int)param_2 >> 3;
      uVar2 = param_2 & 7;
      param_2 = uVar1;
      if (uVar2 != 0) {
        piVar4 = (int *)(iVar3 + uVar2 * 0xc);
        if (0x7fff < *(ushort *)(iVar3 + uVar2 * 0xc)) {
          local_10 = (undefined2)*piVar4;
          local_e._0_2_ = (undefined2)((uint)*piVar4 >> 0x10);
          local_e._2_2_ = (undefined2)piVar4[1];
          uStack_a = (undefined2)((uint)piVar4[1] >> 0x10);
          iStack_8 = piVar4[2];
          local_e = CONCAT22(local_e._2_2_,(undefined2)local_e) + -1;
          piVar4 = (int *)&local_10;
        }
        FUN_1001bb9f(param_1,piVar4);
      }
    }
  }
  return;
}



/* ================================================================
 * Function: FUN_1001be3b
 * Address:  1001be3b
 * ================================================================ */

undefined4 __cdecl FUN_1001be3b(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((*(byte *)(param_1 + 3) & 0x40) == 0) {
    FUN_1001a159((uint)param_1);
    uVar1 = FUN_1001be6c(param_1);
    FUN_1001a1ab((uint)param_1);
  }
  else {
    param_1[3] = 0;
  }
  return uVar1;
}



/* ================================================================
 * Function: FUN_1001be6c
 * Address:  1001be6c
 * ================================================================ */

undefined4 __cdecl FUN_1001be6c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((*(byte *)(param_1 + 3) & 0x83) != 0) {
    uVar2 = FUN_1001ba96(param_1);
    FUN_1001c02b(param_1);
    iVar1 = FUN_1001bf4b(param_1[4]);
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    else if ((undefined *)param_1[7] != (undefined *)0x0) {
      FUN_1001508a((undefined *)param_1[7]);
      param_1[7] = 0;
    }
  }
  param_1[3] = 0;
  return uVar2;
}



/* ================================================================
 * Function: FUN_1001beb8
 * Address:  1001beb8
 * ================================================================ */

undefined4 __cdecl FUN_1001beb8(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (DAT_10024300 <= param_1) {
LAB_1001bf39:
    pDVar3 = FUN_100174c7();
    *pDVar3 = 9;
    return 0xffffffff;
  }
  iVar4 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)((&DAT_10024200)[(int)param_1 >> 5] + 4 + iVar4) & 1) == 0) goto LAB_1001bf39;
  FUN_1001b966(param_1);
  if ((*(byte *)((&DAT_10024200)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
    hFile = (HANDLE)FUN_1001b924(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    uVar5 = 0;
    if (DVar2 == 0) goto LAB_1001bf2e;
    pDVar3 = FUN_100174d0();
    *pDVar3 = DVar2;
  }
  pDVar3 = FUN_100174c7();
  *pDVar3 = 9;
  uVar5 = 0xffffffff;
LAB_1001bf2e:
  FUN_1001b9c5(param_1);
  return uVar5;
}



/* ================================================================
 * Function: FUN_1001bf4b
 * Address:  1001bf4b
 * ================================================================ */

undefined4 __cdecl FUN_1001bf4b(uint param_1)

{
  undefined4 uVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_10024300) &&
     ((*(byte *)((&DAT_10024200)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1001b966(param_1);
    uVar1 = FUN_1001bfa8(param_1);
    FUN_1001b9c5(param_1);
    return uVar1;
  }
  pDVar2 = FUN_100174c7();
  *pDVar2 = 9;
  pDVar2 = FUN_100174d0();
  *pDVar2 = 0;
  return 0xffffffff;
}



/* ================================================================
 * Function: FUN_1001bfa8
 * Address:  1001bfa8
 * ================================================================ */

undefined4 __cdecl FUN_1001bfa8(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_1001b924(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_1001b924(2);
      iVar2 = FUN_1001b924(1);
      if (iVar2 == iVar1) goto LAB_1001bff6;
    }
    hObject = (HANDLE)FUN_1001b924(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_1001bff8;
    }
  }
LAB_1001bff6:
  DVar4 = 0;
LAB_1001bff8:
  FUN_1001b8a5(param_1);
  *(undefined1 *)((&DAT_10024200)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_10017454(DVar4);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}



/* ================================================================
 * Function: FUN_1001c02b
 * Address:  1001c02b
 * ================================================================ */

void __cdecl FUN_1001c02b(undefined4 *param_1)

{
  if (((param_1[3] & 0x83) != 0) && ((param_1[3] & 8) != 0)) {
    FUN_1001508a((undefined *)param_1[2]);
    *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) & 0xfbf7;
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
  }
  return;
}



/* ================================================================
 * Function: RtlUnwind
 * Address:  1001c056
 * ================================================================ */

void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue)

{
                    /* WARNING: Could not recover jumptable at 0x1001c056. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RtlUnwind(TargetFrame,TargetIp,ExceptionRecord,ReturnValue);
  return;
}



