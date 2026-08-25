/* ================================================================
 * Function: FUN_00011008
 * Address:  00011008
 * ================================================================ */

ulonglong FUN_00011008(ushort *param_1,wchar_t *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 local_res18;
  undefined8 local_res20;
  ulonglong local_28;
  size_t local_20;
  wchar_t *local_18 [2];
  
  local_res18 = param_3;
  local_res20 = param_4;
  uVar2 = FUN_00014ae4(param_1,local_18,&local_20,(ulonglong *)0x0,0x7fff,0);
  uVar3 = uVar2 & 0xffffffff;
  if (-1 < (int)uVar2) {
    local_28 = 0;
    uVar1 = FUN_00014a34(local_18[0],local_20,&local_28,param_2,(va_list)&local_res18);
    uVar3 = (ulonglong)uVar1;
    *param_1 = (short)local_28 * 2;
  }
  return uVar3;
}



/* ================================================================
 * Function: FUN_00011088
 * Address:  00011088
 * ================================================================ */

void FUN_00011088(undefined8 param_1,undefined2 param_2,undefined8 param_3)

{
  (*DAT_0001d0a0)(param_1,0x2b,param_3,param_2,0);
  return;
}



/* ================================================================
 * Function: FUN_000110ac
 * Address:  000110ac
 * ================================================================ */

void FUN_000110ac(undefined8 param_1,undefined2 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 local_res20 [2];
  
  local_res20[0] = param_4;
  (*DAT_0001d0a0)(param_1,0x2b,param_3,param_2,local_res20,4,0);
  return;
}



/* ================================================================
 * Function: FUN_000110e8
 * Address:  000110e8
 * ================================================================ */

undefined4
FUN_000110e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined2 param_4,
            longlong param_5)

{
  longlong lVar1;
  size_t _Size;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined2 local_res20 [4];
  short local_d8 [2];
  undefined1 local_d4;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined4 local_ac;
  undefined2 *local_a8;
  undefined4 local_a0 [2];
  longlong local_98;
  undefined4 local_90 [28];
  
  lVar4 = 0;
  local_res20[0] = param_4;
  FUN_00014c80((ulonglong *)local_d8,0,0x30);
  local_a8 = local_res20;
  plVar3 = &param_5;
  local_ac = 0x1a0000;
  local_d4 = 0xff;
  local_a0[0] = 2;
  uVar7 = 0;
  uVar5 = 0;
  if (param_5 != 0) {
    puVar6 = local_a0;
    lVar8 = param_5;
    do {
      lVar1 = plVar3[1];
      uVar5 = uVar5 + 1;
      uVar7 = uVar7 + lVar1;
      if (uVar5 < 8) {
        *(longlong *)(puVar6 + 2) = lVar8;
        puVar6[4] = (int)lVar1;
      }
      plVar3 = plVar3 + 2;
      lVar8 = *plVar3;
      puVar6 = puVar6 + 4;
    } while (lVar8 != 0);
  }
  if (uVar7 < 0x2001) {
    local_d0 = param_1;
    local_c0 = param_3;
    if (uVar5 < 8) {
      local_d8[0] = ((short)uVar5 + 4) * 0x10;
    }
    else {
      lVar4 = ExAllocatePoolWithTag(1,uVar7,0x45435453);
      if (lVar4 == 0) {
        return 0xc0000017;
      }
      local_90[0] = (undefined4)uVar7;
      lVar8 = 0;
      local_98 = lVar4;
      for (plVar3 = &param_5; (void *)*plVar3 != (void *)0x0; plVar3 = plVar3 + 2) {
        _Size = plVar3[1];
        memcpy((void *)(lVar4 + lVar8),(void *)*plVar3,_Size);
        lVar8 = lVar8 + _Size;
      }
      local_d8[0] = 0x50;
    }
    uVar2 = IoWMIWriteEvent(local_d8);
    if (lVar4 != 0) {
      ExFreePoolWithTag(lVar4,0);
    }
  }
  else {
    uVar2 = 0xc0000001;
  }
  return uVar2;
}



/* ================================================================
 * Function: FUN_00011278
 * Address:  00011278
 * ================================================================ */

void FUN_00011278(undefined8 param_1,undefined2 param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  char *pcVar2;
  ulonglong uVar3;
  
  if (param_4 == (char *)0x0) {
    uVar3 = 5;
  }
  else {
    uVar3 = 0xffffffffffffffff;
    pcVar2 = param_4;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
  }
  pcVar2 = "NULL";
  if (param_4 != (char *)0x0) {
    pcVar2 = param_4;
  }
  (*DAT_0001d0a0)(param_1,0x2b,param_3,param_2,pcVar2,uVar3,0);
  return;
}



/* ================================================================
 * Function: FUN_000112d8
 * Address:  000112d8
 * ================================================================ */

void FUN_000112d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  char *pcVar2;
  ulonglong uVar3;
  
  if (param_4 == (char *)0x0) {
    uVar3 = 5;
  }
  else {
    uVar3 = 0xffffffffffffffff;
    pcVar2 = param_4;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
  }
  pcVar2 = "NULL";
  if (param_4 != (char *)0x0) {
    pcVar2 = param_4;
  }
  (*DAT_0001d0a0)(param_1,0x2b,&DAT_0001bb10,0x25,pcVar2,uVar3,&stack0x00000028,8,0);
  return;
}



/* ================================================================
 * Function: FUN_00011358
 * Address:  00011358
 * ================================================================ */

char * FUN_00011358(int param_1)

{
  if (param_1 == 0) {
    return "WdfPowerDeviceInvalid";
  }
  if (param_1 == 1) {
    return "WdfPowerDeviceD0";
  }
  if (param_1 == 2) {
    return "WdfPowerDeviceD1";
  }
  if (param_1 == 3) {
    return "WdfPowerDeviceD2";
  }
  if (param_1 == 4) {
    return "WdfPowerDeviceD3";
  }
  if (param_1 == 5) {
    return "WdfPowerDeviceD3Final";
  }
  if (param_1 == 6) {
    return "WdfPowerDevicePrepareForHibernation";
  }
  if (param_1 != 7) {
    return "UnKnown Device Power State";
  }
  return "PowerDeviceMaximum";
}



/* ================================================================
 * Function: FUN_000113cc
 * Address:  000113cc
 * ================================================================ */

ulonglong FUN_000113cc(longlong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  char *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined1 local_38;
  code *local_28;
  longlong local_20;
  code *local_18;
  
  if (*(short *)(param_1 + 0x40) == 0) {
    lVar5 = 0;
    pcVar4 = "Configuring continuous reader for EP0\n";
  }
  else {
    if (*(short *)(param_1 + 0x40) != 1) {
      return 0xc000000d;
    }
    lVar5 = 2;
    pcVar4 = "Configuring continuous reader for EP2\n";
  }
  DbgPrint(pcVar4);
  uVar1 = *(undefined8 *)(param_1 + 0x10 + lVar5 * 8);
  (*DAT_0001cca8)(DAT_0001ce68);
  FUN_00014c80((ulonglong *)local_58,0,0x48);
  local_28 = FUN_000114e4;
  local_38 = DAT_0001d120;
  local_58[0] = 0x48;
  local_50 = 0x200;
  local_18 = FUN_0001169c;
  local_20 = param_1;
  uVar2 = (*DAT_0001ccd0)(DAT_0001ce68,uVar1,local_58);
  uVar6 = uVar2 & 0xffffffff;
  uVar3 = uVar2;
  if (((((int)uVar2 < 0) && (uVar3 = uVar6, (undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190))
      && ((PTR_LOOP_0001c190[0x2c] & 2) != 0)) && (1 < (byte)PTR_LOOP_0001c190[0x29])) {
    FUN_000110ac(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),0x26,&DAT_0001bb10,(int)uVar2);
  }
  return uVar3;
}



/* ================================================================
 * Function: FUN_000114e4
 * Address:  000114e4
 * ================================================================ */

void FUN_000114e4(undefined8 param_1,undefined8 param_2,size_t param_3,longlong param_4)

{
  longlong lVar1;
  size_t sVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  void *_Dst;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_0001c100 ^ (ulonglong)auStack_58;
  if (*(int *)(param_4 + 0x130) != 0) goto LAB_0001167e;
  KeAcquireSpinLockAtDpcLevel(param_4 + 0xf0);
  uVar6 = DAT_0001ce68;
  lVar1 = *(longlong *)(param_4 + 0x50);
  sVar2 = *(size_t *)(param_4 + 0xd8);
  lVar4 = *(longlong *)(param_4 + 0x98);
  lVar3 = *(longlong *)(param_4 + 0x88);
  if ((param_3 == 0x200) || (param_3 == sVar2)) {
    *(size_t *)(param_4 + 0xd8) = sVar2 - param_3;
    _Src = (void *)(*DAT_0001c7f0)(uVar6,param_2,0);
    _Dst = (void *)(*(longlong *)(param_4 + 0x48) + (lVar1 * lVar4 - sVar2) + lVar3);
    if (_Dst != (void *)0x0) {
      memcpy(_Dst,_Src,param_3);
    }
    if (*(longlong *)(param_4 + 0xd8) == 0) {
      if (*(char *)(param_4 + 0x60) != '\0') {
        lVar4 = KeQueryPerformanceCounter(param_4 + 0x128);
        lVar1 = *(longlong *)(param_4 + 0x118);
        if (lVar4 < lVar1) {
          lVar4 = (lVar4 - lVar1) + 0x100000000;
        }
        else {
          lVar4 = lVar4 - lVar1;
        }
        *(longlong *)(param_4 + 0x120) = lVar4;
      }
      LOCK();
      *(longlong *)(param_4 + 0x58) = *(longlong *)(param_4 + 0x58) + 1;
      UNLOCK();
      puVar5 = (undefined8 *)
               (*(longlong *)(param_4 + 0x50) * *(longlong *)(param_4 + 0x98) +
                (longlong)*(int *)(param_4 + 0x108) + *(longlong *)(param_4 + 0x48));
      if (*(char *)(param_4 + 0x60) != '\0') {
        *puVar5 = *(undefined8 *)(param_4 + 0x120);
        puVar5 = puVar5 + 1;
      }
      if (*(char *)(param_4 + 0x61) != '\0') {
        *puVar5 = *(undefined8 *)(param_4 + 0x58);
      }
      *(ulonglong *)(param_4 + 0x50) =
           (*(longlong *)(param_4 + 0x50) + 1U) % *(ulonglong *)(param_4 + 0x90);
      *(undefined8 *)(param_4 + 0xd8) = *(undefined8 *)(param_4 + 0x88);
      if (*(char *)(param_4 + 0x70) != '\0') {
        uVar6 = *(undefined8 *)(param_4 + 0xa0);
LAB_00011666:
        KeSetEvent(uVar6,0,0);
      }
    }
    else if ((*(longlong *)(param_4 + 0x88) == *(longlong *)(param_4 + 0xd8)) &&
            (*(char *)(param_4 + 0x70) != '\0')) {
      uVar6 = *(undefined8 *)(param_4 + 0xa8);
      goto LAB_00011666;
    }
  }
  else if (*(char *)(param_4 + 0x70) != '\0') {
    uVar6 = *(undefined8 *)(param_4 + 0xb0);
    goto LAB_00011666;
  }
  KeReleaseSpinLockFromDpcLevel(param_4 + 0xf0);
LAB_0001167e:
  FUN_00014690(local_38 ^ (ulonglong)auStack_58);
  return;
}



/* ================================================================
 * Function: FUN_0001169c
 * Address:  0001169c
 * ================================================================ */

undefined1 FUN_0001169c(undefined8 param_1,undefined4 param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  DbgPrint("--> EvtPixelReadFailure()\n");
  DbgPrint("Failed on Pipe %p with status 0x%08x\n",param_1,param_2);
  DbgPrint("USBD_STATUS = 0x%08x\n",param_3);
  DbgPrint("<-- EvtPixelReadFailure()\n");
  uVar1 = (*DAT_0001c750)(DAT_0001ce68,param_1);
  lVar2 = (*DAT_0001c830)(DAT_0001ce68,uVar1,PTR_DAT_0001c180);
  *(ushort *)(lVar2 + 0xc0) = *(ushort *)(lVar2 + 0xc0) | 8;
  *(longlong *)(lVar2 + 200) = (longlong)param_3;
  return 1;
}



/* ================================================================
 * Function: FUN_0001173c
 * Address:  0001173c
 * ================================================================ */

void FUN_0001173c(undefined8 param_1)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  undefined4 *puVar16;
  undefined1 auStackY_c8 [32];
  undefined1 local_88 [8];
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined1 auStack_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_0001c100 ^ (ulonglong)auStackY_c8;
  lVar14 = 0;
  local_60 = 0;
  local_68 = 0;
  local_78 = 0;
  local_70 = 0;
  local_48 = 0;
  local_80 = 0;
  puVar7 = (undefined8 *)ExAllocatePoolWithTag(0,0x10,0x31465542);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = 0xffffffffffffffff;
    puVar7[1] = 0xffffffffffffffff;
    puVar8 = (undefined1 *)ExAllocatePoolWithTag(0,7,0x32465542);
    if (puVar8 == (undefined1 *)0x0) {
      ExFreePoolWithTag(puVar7,0x31465542);
    }
    else {
      lVar9 = (*DAT_0001c830)(DAT_0001ce68,param_1,PTR_DAT_0001c180);
      local_58 = 0x300000010;
      local_50 = 0;
      if (*(short *)(lVar9 + 0x40) == 1) {
        *puVar8 = 9;
        puVar8[1] = 0;
        puVar8[2] = 0x80;
        puVar8[3] = 0x10;
        puVar8[6] = 0;
        puVar8[5] = 0;
        puVar8[4] = 0;
      }
      uVar10 = (*DAT_0001c330)(DAT_0001ce68,param_1);
      iVar3 = (*DAT_0001c998)(DAT_0001ce68,0,uVar10,&local_60);
      uVar10 = (*DAT_0001c330)(DAT_0001ce68,param_1);
      iVar4 = (*DAT_0001c998)(DAT_0001ce68,0,uVar10,&local_68);
      uVar10 = (*DAT_0001c330)(DAT_0001ce68,param_1);
      iVar5 = (*DAT_0001c998)(DAT_0001ce68,0,uVar10,&local_78);
      uVar10 = (*DAT_0001c330)(DAT_0001ce68,param_1);
      iVar6 = (*DAT_0001c998)(DAT_0001ce68,0,uVar10,&local_70);
      iVar6 = iVar3 + iVar4 + iVar5 + iVar6;
      lVar11 = lVar14;
      if (-1 < iVar6) {
        iVar6 = (*DAT_0001c7e8)(DAT_0001ce68,0,puVar7,0x10);
        iVar3 = (*DAT_0001c7e8)(DAT_0001ce68,0,puVar8,0x10);
        iVar6 = iVar6 + iVar3;
        if (-1 < iVar6) {
          if (*(short *)(lVar9 + 0x40) == 1) {
            iVar6 = (*DAT_0001ccb8)(DAT_0001ce68,*(undefined8 *)(lVar9 + 0x18),local_68,local_80);
            uVar10 = (*DAT_0001c330)(DAT_0001ce68,param_1);
            cVar2 = (*DAT_0001c9c8)(DAT_0001ce68,local_68,uVar10,&local_58);
            if (cVar2 != '\0') {
              iVar3 = (*DAT_0001ccc8)(DAT_0001ce68,*(undefined8 *)(lVar9 + 0x10),local_60,local_48);
              iVar6 = iVar6 + iVar3;
              uVar10 = (*DAT_0001c330)(DAT_0001ce68,param_1);
              (*DAT_0001c9c8)(DAT_0001ce68,local_60,uVar10,&local_58);
            }
          }
          else {
            iVar6 = (*DAT_0001c800)(DAT_0001ce68,*(undefined8 *)(lVar9 + 0xf8),0,puVar7);
          }
        }
      }
      do {
        if ((*(char *)(lVar11 + (longlong)puVar7) != -1) &&
           (*(char *)(lVar11 + (longlong)puVar7) != '\0')) {
          if (*(short *)(lVar9 + 0x40) == 1) {
            (*DAT_0001c808)(DAT_0001ce68,*(undefined8 *)(lVar9 + 0xf8),0,puVar7);
          }
          goto LAB_00011cc7;
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 < 0x10);
      puVar12 = (undefined4 *)ExAllocatePoolWithTag(0,0x10);
      if ((puVar12 != (undefined4 *)0x0) && (local_80 != 0)) {
        ExUuidCreate(puVar12);
        local_40 = *puVar12;
        local_3c = *(undefined2 *)(puVar12 + 1);
        local_3a = *(undefined2 *)((longlong)puVar12 + 6);
        do {
          auStack_38[lVar14] = *(undefined1 *)((longlong)puVar12 + lVar14 + 8);
          lVar14 = lVar14 + 1;
        } while (lVar14 < 8);
        *puVar8 = 8;
        if (*(short *)(lVar9 + 0x40) == 1) {
          iVar3 = (*DAT_0001c7f8)(DAT_0001ce68,local_80,puVar8,7);
          iVar4 = (*DAT_0001ccb8)(DAT_0001ce68,*(undefined8 *)(lVar9 + 0x18),local_78,local_80);
          if (-1 < iVar4 + iVar3) {
            uVar10 = (*DAT_0001c330)(DAT_0001ce68,param_1);
            (*DAT_0001c9c8)(DAT_0001ce68,local_78,uVar10,&local_58);
          }
          iVar6 = (*DAT_0001c7f8)(DAT_0001ce68,local_80,&local_40,0x10);
        }
        if (-1 < iVar6) {
          iVar6 = (*DAT_0001c808)(DAT_0001ce68,*(undefined8 *)(lVar9 + 0xf8),0,&local_40);
        }
        if (*(short *)(lVar9 + 0x40) == 1) {
          iVar3 = (*DAT_0001ccb8)(DAT_0001ce68,*(undefined8 *)(lVar9 + 0x18),local_70,local_80);
          if (-1 < iVar3 + iVar6) {
            uVar10 = (*DAT_0001c330)(DAT_0001ce68,param_1);
            (*DAT_0001c9c8)(DAT_0001ce68,local_70,uVar10,&local_58);
          }
        }
        else {
          uVar15 = 0x7f0;
          FUN_00014250(param_1);
          FUN_00014378(param_1);
          FUN_00013e24(param_1,0x4a,0,4,local_88,'\x01','\x01','\0');
          puVar16 = &local_40;
          do {
            if (0xf < uVar15 - 0x7f0) break;
            uVar1 = *(undefined1 *)puVar16;
            cVar2 = FUN_00014478(param_1,uVar15);
            if (cVar2 == '\0') {
              cVar2 = '\0';
            }
            else {
              FUN_00014514(param_1,uVar1);
              uVar13 = FUN_0001454c(param_1);
              cVar2 = (char)uVar13;
              FUN_00013e24(param_1,0x4a,0,4,local_88,'\x01','\x01','\0');
            }
            uVar15 = uVar15 + 1;
            puVar16 = (undefined4 *)((longlong)puVar16 + 1);
          } while (cVar2 != '\0');
          FUN_00014410(param_1);
          FUN_000142e4(param_1);
        }
        ExFreePoolWithTag(puVar12,0x44495547);
      }
LAB_00011cc7:
      (*DAT_0001c860)(DAT_0001ce68,local_60);
      (*DAT_0001c860)(DAT_0001ce68,local_68);
      (*DAT_0001c860)(DAT_0001ce68,local_78);
      (*DAT_0001c860)(DAT_0001ce68,local_70);
      ExFreePoolWithTag(puVar7,0x31465542);
      ExFreePoolWithTag(puVar8,0x32465542);
    }
  }
  FUN_00014690(local_30 ^ (ulonglong)auStackY_c8);
  return;
}



/* ================================================================
 * Function: FUN_00011d64
 * Address:  00011d64
 * ================================================================ */

int FUN_00011d64(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_48;
  undefined8 local_40;
  
  local_res18 = 0;
  local_res10 = 0;
  local_res20 = 0;
  puVar3 = (undefined1 *)ExAllocatePoolWithTag(0,7,0x32465542);
  if (puVar3 == (undefined1 *)0x0) {
    iVar1 = -0x3fffffdd;
  }
  else {
    local_48 = 0x300000010;
    local_40 = 0;
    uVar4 = (*DAT_0001c330)(DAT_0001ce68,param_1);
    iVar1 = (*DAT_0001c998)(DAT_0001ce68,0,uVar4,&local_res18);
    uVar4 = (*DAT_0001c330)(DAT_0001ce68,param_1);
    iVar2 = (*DAT_0001c998)(DAT_0001ce68,0,uVar4,&local_res10);
    iVar1 = iVar1 + iVar2;
    lVar5 = (*DAT_0001c830)(DAT_0001ce68,param_1,PTR_DAT_0001c180);
    if (*(short *)(lVar5 + 0x40) == 1) {
      *puVar3 = 9;
      puVar3[1] = 0;
      puVar3[2] = 200;
      puVar3[3] = 0;
      puVar3[4] = 8;
      puVar3[5] = 0;
      puVar3[6] = 0;
      if ((-1 < iVar1) &&
         (iVar1 = (*DAT_0001c7e8)(DAT_0001ce68,0,puVar3,7,&local_res20), -1 < iVar1)) {
        iVar1 = (*DAT_0001ccb8)(DAT_0001ce68,*(undefined8 *)(lVar5 + 0x18),local_res10,local_res20,0
                               );
        if (-1 < iVar1) {
          uVar4 = (*DAT_0001c330)(DAT_0001ce68,param_1);
          (*DAT_0001c9c8)(DAT_0001ce68,local_res10,uVar4,&local_48);
        }
        iVar1 = (*DAT_0001ccc8)(DAT_0001ce68,*(undefined8 *)(lVar5 + 0x10),local_res18,
                                *(undefined8 *)(lVar5 + 0xe8),0);
        if (-1 < iVar1) {
          uVar4 = (*DAT_0001c330)(DAT_0001ce68,param_1);
          (*DAT_0001c9c8)(DAT_0001ce68,local_res18,uVar4,&local_48);
        }
      }
    }
    else if (*(short *)(lVar5 + 0x40) == 0) {
      puVar6 = (ulonglong *)(*DAT_0001c7f0)(DAT_0001ce68,*(undefined8 *)(lVar5 + 0xe8),0);
      puVar7 = (undefined8 *)(*DAT_0001c7f0)(DAT_0001ce68,*(undefined8 *)(lVar5 + 0xf8),0);
      FUN_00014c80(puVar6,0,0x800);
      *puVar7 = 0;
      puVar7[1] = 0;
      FUN_00013cbc(param_1,0,(undefined1 *)puVar6,8);
      uVar8 = (uint)*(byte *)((longlong)puVar6 + 6) * 0x100 + (uint)*(byte *)((longlong)puVar6 + 7);
      if (0x800 < uVar8) {
        return iVar1;
      }
      FUN_00013cbc(param_1,0,(undefined1 *)puVar6,uVar8);
      (*DAT_0001c808)(DAT_0001ce68,*(undefined8 *)(lVar5 + 0xe8),0,puVar6,uVar8);
      FUN_00013cbc(param_1,0x7f0,(undefined1 *)puVar7,0x10);
      iVar1 = (*DAT_0001c808)(DAT_0001ce68,*(undefined8 *)(lVar5 + 0xf8),0,puVar7,0x10);
    }
    ExFreePoolWithTag(puVar3,0x32465542);
  }
  return iVar1;
}



/* ================================================================
 * Function: FUN_00012074
 * Address:  00012074
 * ================================================================ */

void FUN_00012074(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  void *pvVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined1 *local_d8;
  undefined1 local_c8 [4];
  ushort local_c4 [2];
  undefined1 local_c0 [8];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  ulonglong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_0001c100 ^ (ulonglong)auStack_108;
  local_c4[0] = 0;
  puVar4 = (undefined8 *)(*DAT_0001c830)(DAT_0001ce68,param_1,PTR_DAT_0001c180);
  DbgPrint("--> CheckFirmwareAndUpgrade\n");
  local_e8 = (undefined8 *)0x0;
  uVar5 = IoAllocateMdl(local_c4,2,0,1);
  MmBuildMdlForNonPagedPool(uVar5);
  local_d8 = local_c0;
  local_58 = 2;
  local_e0 = &local_58;
  local_48 = 2;
  local_40 = 0xf1c0;
  local_e8 = &local_40;
  local_50 = uVar5;
  iVar2 = (*DAT_0001cc48)(DAT_0001ce68,*puVar4,0,0);
  IoFreeMdl(uVar5);
  if (iVar2 < 0) {
    DbgPrint("Vendor Cmd Read: Failed  - 0x%x \n",iVar2);
  }
  else if ((local_c4[0] >> 8 < 3) || ((local_c4[0] >> 8 == 3 && ((local_c4[0] & 0xff) < 6)))) {
    local_c8[0] = 0;
    local_80 = 0;
    local_88 = 0;
    local_60 = 0;
    local_68 = 0;
    puVar6 = (undefined1 *)ExAllocatePoolWithTag(0,7,0x6675624f);
    *puVar6 = 8;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[4] = 0x1d;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[3] = 0x40;
    DbgPrint("Current FW Version = %d.%d\n",local_c4[0] >> 8,(undefined1)local_c4[0]);
    DbgPrint("Need to Upgrade the firmware\n");
    DbgPrint("Pixis FW Size = %d\n",0x1d40);
    local_78 = 0x300000010;
    local_70 = 0;
    uVar5 = (*DAT_0001c330)(DAT_0001ce68,param_1);
    iVar2 = (*DAT_0001c998)(DAT_0001ce68,0,uVar5,&local_80);
    uVar5 = (*DAT_0001c330)(DAT_0001ce68,param_1);
    iVar3 = (*DAT_0001c998)(DAT_0001ce68,0,uVar5,&local_88);
    if (-1 < iVar3 + iVar2) {
      local_e8 = &local_68;
      (*DAT_0001c7e8)(DAT_0001ce68,0,&DAT_00017210,0x1d40);
      local_e8 = &local_60;
      (*DAT_0001c7e8)(DAT_0001ce68,0,puVar6,7);
      local_e8 = (undefined8 *)0x0;
      (*DAT_0001ccb8)(DAT_0001ce68,puVar4[3],local_80,local_60);
      uVar5 = (*DAT_0001c330)(DAT_0001ce68,param_1);
      cVar1 = (*DAT_0001c9c8)(DAT_0001ce68,local_80,uVar5,&local_78);
      if (cVar1 != '\0') {
        local_e8 = (undefined8 *)0x0;
        (*DAT_0001ccb8)(DAT_0001ce68,puVar4[3],local_88,local_68);
        uVar5 = (*DAT_0001c330)(DAT_0001ce68,param_1);
        (*DAT_0001c9c8)(DAT_0001ce68,local_88,uVar5,&local_78);
      }
    }
    ExFreePoolWithTag(puVar6,0x6675624f);
    (*DAT_0001c860)(DAT_0001ce68,local_80);
    (*DAT_0001c860)(DAT_0001ce68,local_88);
    local_c8[0] = 0;
    local_e8 = (undefined8 *)0x0;
    uVar5 = IoAllocateMdl(local_c8,1,0,1);
    MmBuildMdlForNonPagedPool(uVar5);
    local_b8 = 2;
    local_a8 = 1;
    local_b0 = uVar5;
    DbgPrint("Putting FX2 in RESET\n");
    lVar8 = 0x19;
    local_40 = 0xe600a040;
    do {
      local_d8 = local_c0;
      local_e0 = &local_b8;
      local_e8 = &local_40;
      (*DAT_0001cc48)(DAT_0001ce68,*puVar4,0,0);
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    IoFreeMdl(uVar5);
    local_c8[0] = 1;
    local_e8 = (undefined8 *)0x0;
    uVar5 = IoAllocateMdl(local_c8,1,0,1);
    MmBuildMdlForNonPagedPool(uVar5);
    local_b8 = 2;
    local_a8 = 1;
    local_b0 = uVar5;
    DbgPrint("Putting FX2 in RESET\n");
    local_d8 = local_c0;
    local_e0 = &local_b8;
    local_40 = 0xe600a040;
    local_e8 = &local_40;
    (*DAT_0001cc48)(DAT_0001ce68,*puVar4,0,0);
    IoFreeMdl(uVar5);
    DbgPrint("Writing LOADER to RAM\n");
    iVar2 = 0xe40;
    do {
      if (iVar2 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0x40;
      }
      pvVar7 = (void *)ExAllocatePoolWithTag(0,(longlong)(int)uVar9,0x6675624f);
      memcpy(pvVar7,&DAT_0001acd0 + (0xe40 - iVar2),(longlong)(int)uVar9);
      local_e8 = (undefined8 *)0x0;
      uVar5 = IoAllocateMdl(pvVar7,uVar9,0,1);
      MmBuildMdlForNonPagedPool(uVar5);
      local_40._0_4_ = CONCAT22(0xe40 - (short)iVar2,0xa000);
      local_d8 = local_c0;
      local_40._1_7_ = (uint7)(uint3)((uint)(undefined4)local_40 >> 8);
      local_40 = CONCAT71(local_40._1_7_,0x40);
      local_e0 = &local_a0;
      local_e8 = &local_40;
      local_a0 = 2;
      local_90 = (ulonglong)uVar9;
      local_98 = uVar5;
      (*DAT_0001cc48)(DAT_0001ce68,*puVar4,0,0);
      IoFreeMdl(uVar5);
      ExFreePoolWithTag(pvVar7,0x6675624f);
      iVar2 = iVar2 - uVar9;
    } while (iVar2 != 0);
    local_c8[0] = 0;
    local_e8 = (undefined8 *)0x0;
    uVar5 = IoAllocateMdl(local_c8,1,0,1);
    MmBuildMdlForNonPagedPool(uVar5);
    local_b8 = 2;
    local_a8 = 1;
    local_b0 = uVar5;
    DbgPrint("Releasing FX2 from RESET\n");
    local_40 = 0xe600a040;
    local_d8 = local_c0;
    local_e0 = &local_b8;
    local_e8 = &local_40;
    (*DAT_0001cc48)(DAT_0001ce68,*puVar4,0,0);
    IoFreeMdl(uVar5);
    uVar10 = 0x240;
    DbgPrint("Writing to RAM\n");
    do {
      if (uVar10 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0x40;
      }
      pvVar7 = (void *)ExAllocatePoolWithTag(0,(longlong)(int)uVar9,0x6675624f);
      memcpy(pvVar7,&DAT_0001acd0 + -uVar10,(longlong)(int)uVar9);
      local_e8 = (undefined8 *)0x0;
      uVar5 = IoAllocateMdl(pvVar7,uVar9,0,1);
      MmBuildMdlForNonPagedPool(uVar5);
      local_40._0_4_ = CONCAT22(0x1d80 - (short)uVar10,0xa300);
      local_d8 = local_c0;
      local_40._1_7_ = (uint7)(uint3)((uint)(undefined4)local_40 >> 8);
      local_40 = CONCAT71(local_40._1_7_,0x40);
      local_e0 = &local_a0;
      local_e8 = &local_40;
      local_a0 = 2;
      local_90 = (ulonglong)uVar9;
      local_98 = uVar5;
      (*DAT_0001cc48)(DAT_0001ce68,*puVar4,0,0);
      IoFreeMdl(uVar5);
      ExFreePoolWithTag(pvVar7,0x6675624f);
      uVar9 = (int)uVar10 - uVar9;
      uVar10 = (ulonglong)uVar9;
    } while (uVar9 != 0);
    local_c8[0] = 1;
    local_e8 = (undefined8 *)0x0;
    uVar5 = IoAllocateMdl(local_c8,1,0,1);
    MmBuildMdlForNonPagedPool(uVar5);
    local_b8 = 2;
    local_a8 = 1;
    local_b0 = uVar5;
    DbgPrint("Putting FX2 in RESET\n");
    local_d8 = local_c0;
    local_e0 = &local_b8;
    local_40 = 0xe600a040;
    local_e8 = &local_40;
    (*DAT_0001cc48)(DAT_0001ce68,*puVar4,0,0);
    IoFreeMdl(uVar5);
    iVar2 = 0x1b40;
    DbgPrint("Writing to RAM\n");
    do {
      if (iVar2 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0x40;
      }
      pvVar7 = (void *)ExAllocatePoolWithTag(0,(longlong)(int)uVar9,0x6675624f);
      memcpy(pvVar7,&DAT_00018f50 + (0x1b40 - iVar2),(longlong)(int)uVar9);
      local_e8 = (undefined8 *)0x0;
      uVar5 = IoAllocateMdl(pvVar7,uVar9,0,1);
      MmBuildMdlForNonPagedPool(uVar5);
      local_40._0_4_ = CONCAT22(0x1b40 - (short)iVar2,0xa000);
      local_d8 = local_c0;
      local_40._1_7_ = (uint7)(uint3)((uint)(undefined4)local_40 >> 8);
      local_40 = CONCAT71(local_40._1_7_,0x40);
      local_e0 = &local_a0;
      local_e8 = &local_40;
      local_a0 = 2;
      local_90 = (ulonglong)uVar9;
      local_98 = uVar5;
      (*DAT_0001cc48)(DAT_0001ce68,*puVar4,0,0);
      IoFreeMdl(uVar5);
      ExFreePoolWithTag(pvVar7,0x6675624f);
      iVar2 = iVar2 - uVar9;
    } while (iVar2 != 0);
    local_c8[0] = 0;
    local_e8 = (undefined8 *)0x0;
    uVar5 = IoAllocateMdl(local_c8,1,0,1);
    MmBuildMdlForNonPagedPool(uVar5);
    local_b8 = 2;
    local_a8 = 1;
    local_b0 = uVar5;
    DbgPrint("Releasing FX2 from RESET\n");
    local_d8 = local_c0;
    local_40 = 0xe600a040;
    local_e0 = &local_b8;
    local_e8 = &local_40;
    (*DAT_0001cc48)(DAT_0001ce68,*puVar4,0,0);
    IoFreeMdl(uVar5);
  }
  else {
    DbgPrint("Not Upgrading the Firmware\n");
  }
  DbgPrint("<-- CheckFirmwareAndUpgrade\n");
  FUN_00014690(local_38 ^ (ulonglong)auStack_108);
  return;
}



/* ================================================================
 * Function: FUN_00012c4c
 * Address:  00012c4c
 * ================================================================ */

void FUN_00012c4c(undefined8 param_1)

{
  int iVar1;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined8 *local_60;
  undefined1 *local_58;
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined1 *local_38;
  undefined8 local_30;
  undefined1 local_28 [8];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_0001c100 ^ (ulonglong)auStack_88;
  local_48[0] = 1;
  if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
      ((PTR_LOOP_0001c190[0x2c] & 0x20) != 0)) && (4 < (byte)PTR_LOOP_0001c190[0x29])) {
    FUN_00011088(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),0x27,&DAT_0001bb10);
  }
  local_38 = local_48;
  local_20 = 0xf240;
  local_58 = local_28;
  local_40 = 1;
  local_60 = &local_40;
  local_30 = 1;
  local_68 = &local_20;
  iVar1 = (*DAT_0001cc48)(DAT_0001ce68,param_1,0,0);
  if (iVar1 < 0) {
    if ((undefined **)PTR_LOOP_0001c190 == &PTR_LOOP_0001c190) goto LAB_00012d87;
    if (((PTR_LOOP_0001c190[0x2c] & 0x20) != 0) && (1 < (byte)PTR_LOOP_0001c190[0x29])) {
      FUN_000110ac(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),0x28,&DAT_0001bb10,iVar1);
    }
  }
  if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
      ((PTR_LOOP_0001c190[0x2c] & 0x20) != 0)) && (4 < (byte)PTR_LOOP_0001c190[0x29])) {
    FUN_00011088(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),0x29,&DAT_0001bb10);
  }
LAB_00012d87:
  FUN_00014690(local_18 ^ (ulonglong)auStack_88);
  return;
}



/* ================================================================
 * Function: FUN_00012db0
 * Address:  00012db0
 * ================================================================ */

void FUN_00012db0(undefined8 param_1)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 local_res10 [3];
  
  local_res10[0] = 0;
  uVar2 = (*DAT_0001c638)(DAT_0001ce68,param_1);
  lVar5 = (*DAT_0001c830)(DAT_0001ce68,uVar2,PTR_DAT_0001c180);
  piVar1 = (int *)(lVar5 + 0x134);
  *piVar1 = *piVar1 + -1;
  uVar2 = DAT_0001ce68;
  if (*piVar1 == 0) {
    *(undefined4 *)(lVar5 + 0x130) = 1;
    *(undefined1 *)(lVar5 + 0x10c) = 0;
    iVar4 = (*DAT_0001c6d0)(uVar2,*(undefined8 *)(lVar5 + 0xe0),local_res10);
    if (-1 < iVar4) {
      cVar3 = (*DAT_0001c9e8)(DAT_0001ce68,local_res10[0]);
      if (cVar3 == '\0') {
        (*DAT_0001ca18)(DAT_0001ce68,local_res10[0],0xc0000120);
      }
    }
  }
  return;
}



/* ================================================================
 * Function: FUN_00012e54
 * Address:  00012e54
 * ================================================================ */

void FUN_00012e54(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = (*DAT_0001c830)(DAT_0001ce68,param_1,PTR_DAT_0001c180);
  uVar1 = DAT_0001ce68;
  *(int *)(lVar2 + 0x134) = *(int *)(lVar2 + 0x134) + 1;
                    /* WARNING: Could not recover jumptable at 0x00012e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0001ca18)(uVar1,param_2,0);
  return;
}



/* ================================================================
 * Function: FUN_00012e9c
 * Address:  00012e9c
 * ================================================================ */

int FUN_00012e9c(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined1 *puVar7;
  ushort *puVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50 [3];
  
  iVar11 = 0;
  local_res20 = 0;
  local_res10 = 0;
  local_res18 = 0;
  local_50[1] = 2;
  iVar3 = 50000;
  local_68 = 0;
  local_50[0] = 0;
  lVar6 = (*DAT_0001c830)(DAT_0001ce68,param_1,PTR_DAT_0001c180);
  if (*(short *)(lVar6 + 0x40) == 1) {
    DbgPrint("ReadEPLDVersions()\n");
    puVar7 = (undefined1 *)ExAllocatePoolWithTag(0,8,0x33465542);
    puVar8 = (ushort *)ExAllocatePoolWithTag(0,2,0x34465542);
    uVar9 = DAT_0001ce68;
    if ((puVar7 == (undefined1 *)0x0) || (puVar8 == (ushort *)0x0)) {
      iVar3 = -0x3fffffdd;
    }
    else {
      local_60 = 0x300000010;
      local_58 = 0;
      bVar2 = false;
      *puVar7 = 1;
      puVar7[1] = 0;
      puVar7[2] = 0x42;
      puVar7[3] = 0;
      puVar7[4] = 3;
      puVar7[5] = 0;
      puVar7[6] = 0;
      puVar7[7] = 0;
      uVar9 = (*DAT_0001c330)(uVar9,param_1);
      iVar4 = (*DAT_0001c998)(DAT_0001ce68,0,uVar9,&local_res20);
      uVar9 = (*DAT_0001c330)(DAT_0001ce68,param_1);
      iVar5 = (*DAT_0001c998)(DAT_0001ce68,0,uVar9,&local_res10);
      if (-1 < iVar5 + iVar4) {
        (*DAT_0001c7e8)(DAT_0001ce68,0,puVar7,8,&local_res18);
        (*DAT_0001c7e8)(DAT_0001ce68,0,puVar8,2,&local_68);
      }
      bVar1 = true;
      do {
        uVar9 = DAT_0001ce68;
        puVar7[2] = 0xc0;
        puVar7[4] = 2;
        puVar7[6] = 0xef;
        puVar7[7] = 0xbe;
        iVar4 = (*DAT_0001ccb8)(uVar9,*(undefined8 *)(lVar6 + 0x38),local_res10,local_res18,0);
        if (-1 < iVar4) {
          uVar9 = (*DAT_0001c330)(DAT_0001ce68,param_1);
          (*DAT_0001c9c8)(DAT_0001ce68,local_res10,uVar9,&local_60);
        }
        uVar9 = DAT_0001ce68;
        puVar7[2] = 0x42;
        puVar7[4] = 3;
        puVar7[6] = 0;
        puVar7[7] = 0;
        iVar4 = (*DAT_0001ccb8)(uVar9,*(undefined8 *)(lVar6 + 0x38),local_res10,local_res18,0);
        if (-1 < iVar4) {
          uVar9 = (*DAT_0001c330)(DAT_0001ce68,param_1);
          (*DAT_0001c9c8)(DAT_0001ce68,local_res10,uVar9,&local_60);
        }
        iVar4 = (*DAT_0001ccc8)(DAT_0001ce68,*(undefined8 *)(lVar6 + 0x30),local_res20,local_68,
                                local_50);
        if (-1 < iVar4) {
          uVar9 = (*DAT_0001c330)(DAT_0001ce68,param_1);
          (*DAT_0001c9c8)(DAT_0001ce68,local_res20,uVar9,&local_60);
          puVar8 = (ushort *)(*DAT_0001c7f0)(DAT_0001ce68,local_68,0);
          if ((*puVar8 & 0xfff) == 0x113) break;
          iVar3 = iVar3 + -1;
          if (iVar3 == 0) {
            bVar1 = false;
            bVar2 = true;
          }
        }
      } while (bVar1);
      if (bVar2) {
LAB_000131a1:
        ExFreePoolWithTag(puVar7,0x33465542);
        ExFreePoolWithTag(puVar8,0x34465542);
        iVar3 = -0x3fffffff;
      }
      else {
        puVar7[2] = 0xc0;
        puVar7[4] = 3;
        puVar7[6] = 0;
        puVar7[7] = 0;
        do {
          uVar9 = DAT_0001ce68;
          local_50[1] = 2;
          local_50[0] = (longlong)(iVar11 * 2);
          if (iVar11 == 5) {
            puVar7[2] = 0xc0;
            puVar7[4] = 2;
            puVar7[6] = 0xad;
            puVar7[7] = 0xde;
            iVar3 = (*DAT_0001ccb8)(uVar9,*(undefined8 *)(lVar6 + 0x38),local_res10,local_res18,0);
            if (-1 < iVar3) {
              uVar9 = (*DAT_0001c330)(DAT_0001ce68,param_1);
              (*DAT_0001c9c8)(DAT_0001ce68,local_res10,uVar9,&local_60);
            }
            puVar7[2] = 0xca;
            puVar7[4] = 3;
            puVar7[7] = 0;
            puVar7[6] = 0;
          }
          iVar3 = (*DAT_0001ccb8)(DAT_0001ce68,*(undefined8 *)(lVar6 + 0x38),local_res10,local_res18
                                  ,0);
          if (-1 < iVar3) {
            uVar9 = (*DAT_0001c330)(DAT_0001ce68,param_1);
            (*DAT_0001c9c8)(DAT_0001ce68,local_res10,uVar9,&local_60);
          }
          iVar3 = (*DAT_0001ccc8)(DAT_0001ce68,*(undefined8 *)(lVar6 + 0x30),local_res20,
                                  *(undefined8 *)(lVar6 + 0x100),local_50);
          if (-1 < iVar3) {
            uVar9 = (*DAT_0001c330)(DAT_0001ce68,param_1);
            (*DAT_0001c9c8)(DAT_0001ce68,local_res20,uVar9,&local_60);
          }
          if (puVar7[2] == -0x36) {
            puVar10 = (undefined1 *)(*DAT_0001c7f0)(DAT_0001ce68,*(undefined8 *)(lVar6 + 0x100),0);
            uVar9 = DAT_0001ce68;
            if ((ushort)((ushort)(byte)puVar10[0xb] * 0x100 + (ushort)(byte)puVar10[10]) == -0x2153)
            {
              puVar10[1] = 0;
              *puVar10 = 0;
              (*DAT_0001c808)(uVar9,*(undefined8 *)(lVar6 + 0x100),10,puVar10,2);
            }
            else if ((byte)puVar10[0xb] < 3) goto LAB_000131a1;
          }
          puVar7[2] = puVar7[2] + '\x02';
          iVar11 = iVar11 + 1;
        } while (iVar11 < 6);
        ExFreePoolWithTag(puVar7,0x33465542);
        ExFreePoolWithTag(puVar8,0x34465542);
      }
    }
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}



/* ================================================================
 * Function: FUN_000133ec
 * Address:  000133ec
 * ================================================================ */

void FUN_000133ec(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = (*DAT_0001cbe8)(DAT_0001ce68,param_1);
  lVar2 = (*DAT_0001c830)(DAT_0001ce68,uVar1,PTR_DAT_0001c180);
  if (*(short *)(lVar2 + 0x40) == 0) {
    FUN_00011d64(uVar1);
    FUN_0001173c(uVar1);
    KeSetEvent(lVar2 + 0x148,0,0);
  }
  return;
}



/* ================================================================
 * Function: FUN_00013460
 * Address:  00013460
 * ================================================================ */

void FUN_00013460(undefined8 param_1,undefined2 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 local_res20 [2];
  
  local_res20[0] = param_4;
  (*DAT_0001d0a0)(param_1,0x2b,&DAT_000171f0,param_2,local_res20,4,&stack0x00000028,4,0);
  return;
}



/* ================================================================
 * Function: FUN_000134b0
 * Address:  000134b0
 * ================================================================ */

void FUN_000134b0(undefined8 param_1,undefined2 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res20;
  
  local_res20 = param_4;
  (*DAT_0001d0a0)(param_1,0x2b,&DAT_000171f0,param_2,&local_res20,8,0);
  return;
}



/* ================================================================
 * Function: FUN_000134f4
 * Address:  000134f4
 * ================================================================ */

void FUN_000134f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 local_res20;
  ulonglong local_48 [3];
  ushort local_30;
  
  if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
      ((PTR_LOOP_0001c190[0x2c] & 0x80) != 0)) && (4 < (byte)PTR_LOOP_0001c190[0x29])) {
    FUN_00011088(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),10,&DAT_000171f0);
  }
  uVar1 = (*DAT_0001c6c8)(DAT_0001ce68,param_1);
  lVar2 = (*DAT_0001c830)(DAT_0001ce68,uVar1,PTR_DAT_0001c180);
  FUN_00014c80(local_48,0,0x28);
  local_48[0]._0_2_ = 0x28;
  (*DAT_0001ca30)(DAT_0001ce68,param_2,local_48);
  uVar1 = *(undefined8 *)(lVar2 + 0x10 + (ulonglong)local_30 * 8);
  iVar4 = (*DAT_0001ca40)(DAT_0001ce68,param_2,&local_res20);
  if (iVar4 < 0) {
    if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
        ((PTR_LOOP_0001c190[0x2c] & 0x80) != 0)) && (1 < (byte)PTR_LOOP_0001c190[0x29])) {
      FUN_000110ac(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),0xb,&DAT_000171f0,iVar4);
    }
  }
  else {
    iVar4 = (*DAT_0001ccc8)(DAT_0001ce68,uVar1,param_2,local_res20,0);
    if (iVar4 < 0) {
      if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
          ((PTR_LOOP_0001c190[0x2c] & 0x80) != 0)) && (1 < (byte)PTR_LOOP_0001c190[0x29])) {
        FUN_000110ac(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),0xc,&DAT_000171f0,iVar4);
      }
    }
    else {
      (*DAT_0001ca00)(DAT_0001ce68,param_2,FUN_00013738,uVar1);
      cVar3 = (*DAT_0001c9c8)(DAT_0001ce68,param_2,uVar1,0);
      if (cVar3 == '\0') {
        if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
            ((PTR_LOOP_0001c190[0x2c] & 0x80) != 0)) && (1 < (byte)PTR_LOOP_0001c190[0x29])) {
          FUN_00011088(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),0xd,&DAT_000171f0);
        }
        iVar4 = (*DAT_0001c9d0)(DAT_0001ce68,param_2);
      }
    }
  }
  if (iVar4 < 0) {
    (*DAT_0001ca28)(DAT_0001ce68,param_2,iVar4,0);
  }
  if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
      ((PTR_LOOP_0001c190[0x2c] & 0x80) != 0)) && (3 < (byte)PTR_LOOP_0001c190[0x29])) {
    FUN_00011088(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),0xe,&DAT_000171f0);
  }
  return;
}



/* ================================================================
 * Function: FUN_00013738
 * Address:  00013738
 * ================================================================ */

void FUN_00013738(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_3 + 8);
  uVar2 = *(undefined8 *)(*(longlong *)(param_3 + 0x18) + 0x10);
  if (iVar1 < 0) {
    if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
        ((PTR_LOOP_0001c190[0x2c] & 0x80) != 0)) && (1 < (byte)PTR_LOOP_0001c190[0x29])) {
      FUN_00013460(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),0x10,&DAT_000171f0,iVar1);
    }
  }
  else if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
           ((PTR_LOOP_0001c190[0x2c] & 0x80) != 0)) && (3 < (byte)PTR_LOOP_0001c190[0x29])) {
    FUN_000134b0(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),0xf,&DAT_000171f0,uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x000137f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0001ca28)(DAT_0001ce68,param_1,iVar1,uVar2);
  return;
}



/* ================================================================
 * Function: FUN_00013800
 * Address:  00013800
 * ================================================================ */

void FUN_00013800(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  char cVar7;
  ulonglong uVar8;
  undefined8 local_res20;
  undefined1 local_48 [8];
  ulonglong local_40 [3];
  ushort local_28;
  
  if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
      ((PTR_LOOP_0001c190[0x2c] & 0x40) != 0)) && (4 < (byte)PTR_LOOP_0001c190[0x29])) {
    FUN_00011088(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),0x11,&DAT_000171f0);
  }
  uVar3 = (*DAT_0001c6c8)(DAT_0001ce68,param_1);
  lVar4 = (*DAT_0001c830)(DAT_0001ce68,uVar3,PTR_DAT_0001c180);
  FUN_00014c80(local_40,0,0x28);
  local_40[0]._0_2_ = 0x28;
  (*DAT_0001ca30)(DAT_0001ce68,param_2,local_40);
  uVar3 = *(undefined8 *)(lVar4 + 0x10 + (ulonglong)local_28 * 8);
  iVar2 = (*DAT_0001ca38)(DAT_0001ce68,param_2,&local_res20);
  if (iVar2 < 0) {
    if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
        ((PTR_LOOP_0001c190[0x2c] & 0x40) != 0)) && (1 < (byte)PTR_LOOP_0001c190[0x29])) {
      FUN_00011088(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),0x12,&DAT_000171f0);
    }
  }
  else {
    lVar5 = (*DAT_0001c7f0)(DAT_0001ce68,local_res20,0);
    if (lVar5 != 0) {
      if (*(short *)(lVar4 + 0x40) == 1) {
        cVar1 = *(char *)(lVar5 + 4);
      }
      else {
        cVar1 = *(char *)(lVar5 + 3);
      }
      if (*(short *)(lVar4 + 0x40) == 1) {
        cVar7 = *(char *)(lVar5 + 2);
      }
      else {
        cVar7 = *(char *)(lVar5 + 1);
      }
      if (cVar7 == '2') {
        if (cVar1 == '\x03') {
          uVar8 = (ulonglong)((*(short *)(lVar4 + 0x40) != 1) - 1U & 2);
          (*DAT_0001c740)(DAT_0001ce68,*(undefined8 *)(lVar4 + 0x10 + uVar8 * 8));
          iVar2 = (*DAT_0001c738)(DAT_0001ce68,*(undefined8 *)(lVar4 + 0x10 + uVar8 * 8));
          if (((iVar2 < 0) && ((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190)) &&
             (((PTR_LOOP_0001c190[0x2c] & 4) != 0 && (1 < (byte)PTR_LOOP_0001c190[0x29])))) {
            FUN_00011088(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),0x13,&DAT_000171f0);
          }
          uVar6 = KeQueryPerformanceCounter(local_48);
          *(undefined8 *)(lVar4 + 0x58) = 0;
          *(undefined8 *)(lVar4 + 0x50) = 0;
          *(undefined4 *)(lVar4 + 0x130) = 0;
          *(undefined8 *)(lVar4 + 0x118) = uVar6;
          *(undefined8 *)(lVar4 + 0xd8) = *(undefined8 *)(lVar4 + 0x88);
        }
      }
      else if ((cVar7 == '0') && (cVar1 == '\x03')) {
        *(undefined4 *)(lVar4 + 0x130) = 1;
      }
    }
    iVar2 = (*DAT_0001ccb8)(DAT_0001ce68,uVar3,param_2,local_res20,0);
    if (iVar2 < 0) {
      if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
          ((PTR_LOOP_0001c190[0x2c] & 0x40) != 0)) && (1 < (byte)PTR_LOOP_0001c190[0x29])) {
        FUN_000110ac(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),0x14,&DAT_000171f0,iVar2);
      }
    }
    else {
      (*DAT_0001ca00)(DAT_0001ce68,param_2,FUN_00013b48,uVar3);
      cVar1 = (*DAT_0001c9c8)(DAT_0001ce68,param_2,uVar3,0);
      if (cVar1 == '\0') {
        if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
            ((PTR_LOOP_0001c190[0x2c] & 0x40) != 0)) && (1 < (byte)PTR_LOOP_0001c190[0x29])) {
          FUN_00011088(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),0x15,&DAT_000171f0);
        }
        iVar2 = (*DAT_0001c9d0)(DAT_0001ce68,param_2);
      }
    }
  }
  if (iVar2 < 0) {
    (*DAT_0001ca28)(DAT_0001ce68,param_2,iVar2,0);
  }
  if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
      ((PTR_LOOP_0001c190[0x2c] & 0x40) != 0)) && (4 < (byte)PTR_LOOP_0001c190[0x29])) {
    FUN_00011088(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),0x16,&DAT_000171f0);
  }
  return;
}



/* ================================================================
 * Function: FUN_00013b48
 * Address:  00013b48
 * ================================================================ */

void FUN_00013b48(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_3 + 8);
  uVar2 = *(undefined8 *)(*(longlong *)(param_3 + 0x18) + 0x10);
  if (iVar1 < 0) {
    if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
        ((PTR_LOOP_0001c190[0x2c] & 0x40) != 0)) && (1 < (byte)PTR_LOOP_0001c190[0x29])) {
      FUN_00013460(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),0x18,&DAT_000171f0,iVar1);
    }
  }
  else if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
           ((PTR_LOOP_0001c190[0x2c] & 0x40) != 0)) && (3 < (byte)PTR_LOOP_0001c190[0x29])) {
    FUN_000134b0(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),0x17,&DAT_000171f0,uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00013c00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0001ca28)(DAT_0001ce68,param_1,iVar1,uVar2);
  return;
}



/* ================================================================
 * Function: FUN_00013c10
 * Address:  00013c10
 * ================================================================ */

void FUN_00013c10(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 1) {
    (*DAT_0001cac0)(DAT_0001ce68,param_2,0);
  }
  else if (param_3 == 2) {
    (*DAT_0001c9f0)(DAT_0001ce68);
  }
  return;
}



/* ================================================================
 * Function: FUN_00013c4c
 * Address:  00013c4c
 * ================================================================ */

void FUN_00013c4c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  
  uVar1 = (*DAT_0001c6c8)(DAT_0001ce68,param_1);
  lVar2 = (*DAT_0001c830)(DAT_0001ce68,uVar1,PTR_DAT_0001c180);
  uVar1 = DAT_0001ce68;
  *(undefined4 *)(lVar2 + 0x130) = 1;
  cVar3 = (*DAT_0001c9e8)(uVar1,param_2);
  if (cVar3 != '\0') {
    (*DAT_0001ca18)(DAT_0001ce68,param_2,0xc0000120);
  }
  return;
}



/* ================================================================
 * Function: FUN_00013cbc
 * Address:  00013cbc
 * ================================================================ */

undefined8 FUN_00013cbc(undefined8 param_1,uint param_2,undefined1 *param_3,int param_4)

{
  short sVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined1 *puVar4;
  byte local_res10 [16];
  undefined1 local_res20 [8];
  
  FUN_00014250(param_1);
  if (param_2 + param_4 < 0x801) {
    FUN_00014378(param_1);
    uVar2 = FUN_00014478(param_1,param_2);
    if ((char)uVar2 != '\0') {
      FUN_00013e24(param_1,0x4a,0,5,local_res10,'\x01','\0','\0');
      FUN_00014514(param_1,((byte)(param_2 >> 7) & 0xe) + 0xa1);
      uVar2 = FUN_0001454c(param_1);
    }
    uVar3 = 0;
    puVar4 = param_3;
    if (param_4 != 1) {
      do {
        if ((char)uVar2 == '\0') break;
        local_res10[0] = 1;
        FUN_00014514(param_1,0xff);
        FUN_00013e24(param_1,0x4a,0,0,local_res10,'\0','\0','\0');
        sVar1 = FUN_00014104(param_1);
        *puVar4 = (char)sVar1;
        FUN_00013e24(param_1,0x4a,0,4,local_res20,'\x01','\0','\0');
        uVar2 = (ulonglong)local_res10[0];
        uVar3 = uVar3 + 1;
        param_2 = param_2 + 1;
        puVar4 = puVar4 + 1;
      } while (uVar3 < param_4 - 1U);
    }
    FUN_000145c4(param_1,(ulonglong)param_2,param_3 + uVar3);
    FUN_00014410(param_1);
  }
  FUN_000142e4(param_1);
  return 0;
}



/* ================================================================
 * Function: FUN_00013e24
 * Address:  00013e24
 * ================================================================ */

uint FUN_00013e24(undefined8 param_1,undefined1 param_2,undefined1 param_3,int param_4,
                 undefined1 *param_5,char param_6,char param_7,char param_8)

{
  undefined *puVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  longlong lVar9;
  int iVar10;
  byte *pbVar11;
  undefined1 *puVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  uVar6 = DAT_0001ce68;
  puVar1 = PTR_DAT_0001c180;
  local_50 = 0;
  local_58 = 0;
  local_48 = 0;
  lVar13 = (longlong)(param_4 * 3 + 3);
  *param_5 = 1;
  lVar14 = 6;
  if (0 < param_4) {
    lVar14 = lVar13;
  }
  lVar4 = (*DAT_0001c830)(uVar6,param_1,puVar1);
  puVar5 = (undefined1 *)ExAllocatePoolWithTag(0,lVar14,0x504d4554);
  local_38 = 0;
  local_40 = 0x300000010;
  uVar6 = (*DAT_0001c330)(DAT_0001ce68,param_1);
  (*DAT_0001c998)(DAT_0001ce68,0,uVar6,&local_58);
  puVar12 = puVar5 + 4;
  *puVar12 = param_3;
  iVar10 = 0;
  *puVar5 = 1;
  puVar5[1] = param_2;
  puVar5[2] = 0;
  puVar5[5] = 0;
  puVar5[3] = (param_6 != '\x01') + '\x02';
  if (0 < param_4) {
    puVar7 = (undefined1 *)ExAllocatePoolWithTag(0,(longlong)param_4,0x32465542);
    if (param_4 == 0x18) {
      pbVar11 = puVar7 + 2;
      lVar9 = 8;
      do {
        bVar2 = -(param_8 >> 7) | 0xc;
        pbVar11[-1] = -(param_8 >> 7) + 2U | 0xc;
        pbVar11[-2] = bVar2;
        *pbVar11 = bVar2;
        pbVar11 = pbVar11 + 3;
        lVar9 = lVar9 + -1;
        param_8 = param_8 * '\x02';
      } while (lVar9 != 0);
    }
    else if (param_4 == 5) {
      *puVar7 = 0xd;
      puVar7[1] = 0xf;
      puVar7[2] = 0xe;
      puVar7[3] = 0xc;
      puVar7[4] = 0xd;
    }
    else if (param_4 == 0x19) {
      pbVar11 = puVar7 + 2;
      lVar9 = 8;
      do {
        bVar2 = -(param_8 >> 7) | 0xc;
        pbVar11[-1] = -(param_8 >> 7) + 2U | 0xc;
        pbVar11[-2] = bVar2;
        *pbVar11 = bVar2;
        pbVar11 = pbVar11 + 3;
        lVar9 = lVar9 + -1;
        param_8 = param_8 * '\x02';
      } while (lVar9 != 0);
      puVar7[0x18] = 0xd;
    }
    else if (param_4 == 3) {
      *puVar7 = 0xd;
      puVar7[1] = 0xf;
      puVar7[2] = 0xd;
    }
    else if (param_4 == 4) {
      *puVar7 = 0xc;
      puVar7[1] = 0xe;
      puVar7[3] = 0xd;
      if (param_7 == '\0') {
        puVar7[2] = 0xc;
      }
      else {
        puVar7[2] = 0xf;
      }
    }
    *puVar5 = 1;
    puVar5[1] = 0x4a;
    puVar5[2] = 0;
    puVar8 = puVar7;
    if (lVar13 != 3) {
      do {
        puVar12[-1] = 2;
        iVar10 = iVar10 + 3;
        *puVar12 = *puVar8;
        puVar12[1] = 0;
        puVar12 = puVar12 + 3;
        puVar8 = puVar8 + 1;
      } while ((ulonglong)(longlong)iVar10 < lVar13 - 3U);
    }
    ExFreePoolWithTag(puVar7,0x32465542);
  }
  uVar3 = (*DAT_0001c7e8)(DAT_0001ce68,0,puVar5,lVar14,&local_50);
  if ((-1 < (int)uVar3) &&
     (uVar3 = (*DAT_0001ccb8)(DAT_0001ce68,*(undefined8 *)(lVar4 + 0x20),local_58,local_50,0),
     -1 < (int)uVar3)) {
    uVar6 = (*DAT_0001c330)(DAT_0001ce68,param_1);
    bVar2 = (*DAT_0001c9c8)(DAT_0001ce68,local_58,uVar6,&local_40);
    uVar3 = (uint)bVar2;
  }
  ExFreePoolWithTag(puVar5,0x504d4554);
  return uVar3;
}



/* ================================================================
 * Function: FUN_00014104
 * Address:  00014104
 * ================================================================ */

short FUN_00014104(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined8 uVar4;
  short sVar5;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_res20 = 0;
  local_res18 = 0;
  lVar2 = (*DAT_0001c830)(DAT_0001ce68,param_1,PTR_DAT_0001c180);
  local_18 = 0x300000010;
  local_10 = 0xfffffffffff0bdc0;
  pbVar3 = (byte *)ExAllocatePoolWithTag(0,2,0x32504d54);
  (*DAT_0001c7e8)(DAT_0001ce68,0,pbVar3,2,&local_res20);
  uVar4 = (*DAT_0001c330)(DAT_0001ce68,param_1);
  (*DAT_0001c998)(DAT_0001ce68,0,uVar4,&local_res18);
  iVar1 = (*DAT_0001ccc8)(DAT_0001ce68,*(undefined8 *)(lVar2 + 0x18),local_res18,local_res20,0);
  if (iVar1 < 0) {
    sVar5 = 0x98;
  }
  else {
    uVar4 = (*DAT_0001c330)(DAT_0001ce68,param_1);
    (*DAT_0001c9c8)(DAT_0001ce68,local_res18,uVar4,&local_18);
    sVar5 = (ushort)pbVar3[1] * 0x100 + (ushort)*pbVar3;
  }
  ExFreePoolWithTag(pbVar3,0x32504d54);
  return sVar5;
}



/* ================================================================
 * Function: FUN_00014250
 * Address:  00014250
 * ================================================================ */

void FUN_00014250(undefined8 param_1)

{
  uint uVar1;
  undefined1 local_res10 [24];
  
  uVar1 = FUN_00013e24(param_1,0x30,2,0,local_res10,'\x01','\0','\0');
  if (-1 < (int)uVar1) {
    uVar1 = FUN_00013e24(param_1,0x30,0,0,local_res10,'\x01','\0','\0');
    if (-1 < (int)uVar1) {
      FUN_00013e24(param_1,0x30,1,0,local_res10,'\x01','\0','\0');
    }
  }
  return;
}



/* ================================================================
 * Function: FUN_000142e4
 * Address:  000142e4
 * ================================================================ */

void FUN_000142e4(undefined8 param_1)

{
  uint uVar1;
  undefined1 local_res10 [24];
  
  uVar1 = FUN_00013e24(param_1,0x30,0,0,local_res10,'\x01','\0','\0');
  if (-1 < (int)uVar1) {
    uVar1 = FUN_00013e24(param_1,0x30,1,0,local_res10,'\x01','\0','\0');
    if (-1 < (int)uVar1) {
      FUN_00013e24(param_1,0x30,3,0,local_res10,'\x01','\0','\0');
    }
  }
  return;
}



/* ================================================================
 * Function: FUN_00014378
 * Address:  00014378
 * ================================================================ */

void FUN_00014378(undefined8 param_1)

{
  uint uVar1;
  undefined1 local_res10 [24];
  
  uVar1 = FUN_00013e24(param_1,0x4a,0,0,local_res10,'\x01','\0','\0');
  if (-1 < (int)uVar1) {
    uVar1 = FUN_00013e24(param_1,0x4a,8,0,local_res10,'\x01','\0','\0');
    if (-1 < (int)uVar1) {
      FUN_00013e24(param_1,0x4a,6,0x18,local_res10,'\x01','\0','\x06');
    }
  }
  return;
}



/* ================================================================
 * Function: FUN_00014410
 * Address:  00014410
 * ================================================================ */

void FUN_00014410(undefined8 param_1)

{
  uint uVar1;
  undefined1 local_res10 [24];
  
  uVar1 = FUN_00013e24(param_1,0x4a,0,0,local_res10,'\x01','\0','\0');
  if (-1 < (int)uVar1) {
    FUN_00013e24(param_1,0x4a,8,0,local_res10,'\x01','\0','\0');
  }
  return;
}



/* ================================================================
 * Function: FUN_00014478
 * Address:  00014478
 * ================================================================ */

void FUN_00014478(undefined8 param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  undefined1 local_res18 [16];
  
  iVar2 = 0x14;
  do {
    if (iVar2 < 1) break;
    FUN_00013e24(param_1,0x4a,0,5,local_res18,'\x01','\0','\0');
    FUN_00014514(param_1,((byte)(param_2 >> 7) & 0xe) + 0xa0);
    iVar2 = iVar2 + -1;
    uVar1 = FUN_0001454c(param_1);
  } while ((char)uVar1 == '\0');
  if (0 < iVar2) {
    FUN_00014514(param_1,(char)param_2);
    FUN_0001454c(param_1);
  }
  return;
}



/* ================================================================
 * Function: FUN_00014514
 * Address:  00014514
 * ================================================================ */

void FUN_00014514(undefined8 param_1,undefined1 param_2)

{
  undefined1 local_res18 [16];
  
  FUN_00013e24(param_1,0x4a,param_2,0x19,local_res18,'\x01','\0',param_2);
  return;
}



/* ================================================================
 * Function: FUN_0001454c
 * Address:  0001454c
 * ================================================================ */

ulonglong FUN_0001454c(undefined8 param_1)

{
  short sVar1;
  undefined6 extraout_var;
  undefined1 local_res10 [24];
  
  local_res10[0] = 1;
  FUN_00013e24(param_1,0x4a,0,3,local_res10,'\x01','\0','\0');
  FUN_00013e24(param_1,0x4a,0,0,local_res10,'\0','\0','\0');
  sVar1 = FUN_00014104(param_1);
  return CONCAT71((int7)(CONCAT62(extraout_var,sVar1) >> 8),~(byte)sVar1) & 0xffffffffffffff01;
}



/* ================================================================
 * Function: FUN_000145c4
 * Address:  000145c4
 * ================================================================ */

undefined8 FUN_000145c4(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  short sVar1;
  uint uVar2;
  undefined4 extraout_var;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  local_res18[0] = 1;
  FUN_00014514(param_1,0xff);
  FUN_00013e24(param_1,0x4a,0,0,local_res18,'\0','\0','\0');
  sVar1 = FUN_00014104(param_1);
  *param_3 = (char)sVar1;
  FUN_00013e24(param_1,0x4a,0,3,local_res20,'\x01','\0','\0');
  uVar2 = FUN_00013e24(param_1,0x4a,0,4,local_res20,'\x01','\x01','\0');
  return CONCAT71((int7)(CONCAT44(extraout_var,uVar2) >> 8),local_res18[0]);
}



/* ================================================================
 * Function: FUN_00014690
 * Address:  00014690
 * ================================================================ */

void FUN_00014690(longlong param_1)

{
  if ((param_1 == DAT_0001c100) && ((short)((ulonglong)param_1 >> 0x30) == 0)) {
    return;
  }
  FUN_000146b8(param_1);
  return;
}



/* ================================================================
 * Function: FUN_000146b8
 * Address:  000146b8
 * ================================================================ */

void FUN_000146b8(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  KeBugCheckEx(0xf7,param_1,DAT_0001c100,DAT_0001c108,0);
}



/* ================================================================
 * Function: DbgPrint
 * Address:  000146e6
 * ================================================================ */

void DbgPrint(void)

{
                    /* WARNING: Could not recover jumptable at 0x000146e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DbgPrint();
  return;
}



/* ================================================================
 * Function: FxStubDriverUnloadCommon
 * Address:  000146f4
 * ================================================================ */

/* Library Function - Single Match
    void __cdecl FxStubDriverUnloadCommon(void)
   
   Library: Visual Studio 2019 Release */

void __cdecl FxStubDriverUnloadCommon(void)

{
  FxStubUnbindClasses((_WDF_BIND_INFO *)&DAT_0001c110);
  WdfVersionUnbind(&DAT_0001ce48,&DAT_0001c110,DAT_0001ce68);
  return;
}



/* ================================================================
 * Function: FxStubDriverUnload
 * Address:  00014734
 * ================================================================ */

/* Library Function - Single Match
    FxStubDriverUnload
   
   Library: Visual Studio 2019 Release */

void FxStubDriverUnload(void)

{
  if ((DAT_0001ce58 != (code *)0x0) && (DAT_0001ce58 != FxStubDriverUnload)) {
    (*DAT_0001ce58)();
  }
  FxStubDriverUnloadCommon();
  return;
}



/* ================================================================
 * Function: FxDriverEntryWorker
 * Address:  00014764
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    FxDriverEntryWorker
   
   Library: Visual Studio 2019 Release */

ulonglong FxDriverEntryWorker(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_00022008(0,param_2);
  }
  else {
    _DAT_0001ce4a = 0x208;
    _DAT_0001ce48 = 0;
    _DAT_0001ce50 = &DAT_0001ce80;
    _DAT_0001ce70 = param_1;
    RtlCopyUnicodeString(&DAT_0001ce48);
    uVar2 = WdfVersionBind(param_1,&DAT_0001ce48,&DAT_0001c110,&DAT_0001ce68);
    if (-1 < (int)uVar2) {
      uVar1 = FxStubBindClasses((_WDF_BIND_INFO *)&DAT_0001c110);
      if (-1 < (int)uVar1) {
        FxStubInitTypes();
        uVar1 = FUN_00022008(param_1,param_2);
        if (-1 < (int)uVar1) {
          if (*(char *)(DAT_0001ce68 + 0x30) == '\0') {
            if ((*(byte *)(DAT_0001ce68 + 8) & 2) != 0) {
              _DAT_0001ce60 = DAT_0001c828;
              DAT_0001c828 = &LAB_00014728;
            }
          }
          else {
            if (*(longlong *)(param_1 + 0x68) != 0) {
              DAT_0001ce58 = *(undefined8 *)(param_1 + 0x68);
            }
            *(code **)(param_1 + 0x68) = FxStubDriverUnload;
          }
          return 0;
        }
      }
      FxStubDriverUnloadCommon();
      uVar2 = (ulonglong)uVar1;
    }
  }
  return uVar2;
}



/* ================================================================
 * Function: entry
 * Address:  0001488c
 * ================================================================ */

void entry(longlong param_1,undefined8 param_2)

{
  FUN_000223c8();
  FxDriverEntryWorker(param_1,param_2);
  return;
}



/* ================================================================
 * Function: FxStubUnbindClasses
 * Address:  000148bc
 * ================================================================ */

/* Library Function - Single Match
    void __cdecl FxStubUnbindClasses(struct _WDF_BIND_INFO * __ptr64)
   
   Library: Visual Studio 2019 Release */

void __cdecl FxStubUnbindClasses(_WDF_BIND_INFO *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&DAT_0001c1b0;
  if ((DAT_0001c1b8 != &DAT_0001c1a0) && ((undefined8 *)0x1c1af < DAT_0001c1b8)) {
    do {
      if ((code *)puVar1[8] == (code *)0x0) {
        WdfVersionUnbindClass(param_1,DAT_0001ce68,puVar1);
      }
      else {
        (*(code *)puVar1[8])(WdfVersionUnbindClass,param_1,DAT_0001ce68,puVar1);
      }
      puVar1 = puVar1 + 10;
    } while (puVar1 <= DAT_0001c1b8);
  }
  return;
}



/* ================================================================
 * Function: FxStubBindClasses
 * Address:  0001493c
 * ================================================================ */

/* Library Function - Single Match
    long __cdecl FxStubBindClasses(struct _WDF_BIND_INFO * __ptr64)
   
   Library: Visual Studio 2019 Release */

long __cdecl FxStubBindClasses(_WDF_BIND_INFO *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = &DAT_0001c1b0;
  while( true ) {
    if ((int *)((longlong)&DAT_0001c1a8 + 7) < piVar2) {
      return iVar1;
    }
    if (*piVar2 != 0x50) break;
    DAT_0001c1b8 = piVar2;
    if (*(code **)(piVar2 + 0xe) == (code *)0x0) {
      iVar1 = WdfVersionBindClass(param_1,DAT_0001ce68,piVar2);
    }
    else {
      iVar1 = (**(code **)(piVar2 + 0xe))(WdfVersionBindClass,param_1,DAT_0001ce68,piVar2);
    }
    if (iVar1 < 0) {
      return iVar1;
    }
    piVar2 = piVar2 + 0x14;
  }
  return -0x3ffffffc;
}



/* ================================================================
 * Function: FxStubInitTypes
 * Address:  000149c8
 * ================================================================ */

/* WARNING: Removing unreachable block (ram,0x000149e5) */
/* WARNING: Removing unreachable block (ram,0x00014a09) */
/* WARNING: Removing unreachable block (ram,0x00014a11) */
/* WARNING: Removing unreachable block (ram,0x00014a17) */
/* Library Function - Single Match
    void __cdecl FxStubInitTypes(void)
   
   Library: Visual Studio 2019 Release */

void __cdecl FxStubInitTypes(void)

{
  return;
}



/* ================================================================
 * Function: FUN_00014a34
 * Address:  00014a34
 * ================================================================ */

undefined4
FUN_00014a34(wchar_t *param_1,size_t param_2,ulonglong *param_3,wchar_t *param_4,va_list param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = _vsnwprintf(param_1,param_2,param_4,param_5);
  if ((iVar1 < 0) || (param_2 < (ulonglong)(longlong)iVar1)) {
    *param_3 = param_2;
    uVar2 = 0x80000005;
  }
  else {
    *param_3 = (longlong)iVar1;
  }
  return uVar2;
}



/* ================================================================
 * Function: FUN_00014a8c
 * Address:  00014a8c
 * ================================================================ */

undefined8 FUN_00014a8c(ushort *param_1,longlong param_2,uint param_3)

{
  ushort uVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (((param_1 != (ushort *)0x0) || ((param_3 >> 8 & 1) == 0)) &&
     ((((*param_1 & 1) != 0 ||
       (((uVar1 = param_1[1], (uVar1 & 1) != 0 || (uVar1 < *param_1)) ||
        ((ulonglong)(param_2 * 2) < (ulonglong)uVar1)))) ||
      ((*(longlong *)(param_1 + 4) == 0 && ((*param_1 != 0 || (uVar1 != 0)))))))) {
    uVar2 = 0xc000000d;
  }
  return uVar2;
}



/* ================================================================
 * Function: FUN_00014ae4
 * Address:  00014ae4
 * ================================================================ */

ulonglong FUN_00014ae4(ushort *param_1,undefined8 *param_2,ulonglong *param_3,ulonglong *param_4,
                      longlong param_5,uint param_6)

{
  ulonglong uVar1;
  
  *param_2 = 0;
  *param_3 = 0;
  if (param_4 != (ulonglong *)0x0) {
    *param_4 = 0;
  }
  uVar1 = FUN_00014a8c(param_1,param_5,param_6);
  if ((-1 < (int)uVar1) && (param_1 != (ushort *)0x0)) {
    *param_2 = *(undefined8 *)(param_1 + 4);
    *param_3 = (ulonglong)(param_1[1] >> 1);
    if (param_4 != (ulonglong *)0x0) {
      *param_4 = (ulonglong)(*param_1 >> 1);
    }
  }
  return uVar1 & 0xffffffff;
}



/* ================================================================
 * Function: _vsnwprintf_l
 * Address:  00014b68
 * ================================================================ */

/* Library Function - Single Match
    _vsnwprintf_l
   
   Library: Visual Studio 2019 Release */

int __cdecl
_vsnwprintf_l(wchar_t *_DstBuf,size_t _MaxCount,wchar_t *_Format,_locale_t _Locale,va_list _ArgList)

{
  int iVar1;
  FILE local_38;
  
  if ((_Format == (wchar_t *)0x0) || ((_MaxCount != 0 && (_DstBuf == (wchar_t *)0x0)))) {
    FUN_00014d80();
    iVar1 = -1;
  }
  else {
    local_38._flag = 0x42;
    if (_MaxCount < 0x40000000) {
      local_38._cnt = (int)_MaxCount * 2;
    }
    else {
      local_38._cnt = 0x7fffffff;
    }
    local_38._ptr = (char *)_DstBuf;
    local_38._base = (char *)_DstBuf;
    iVar1 = _woutput_l(&local_38,_Format,_Locale,_ArgList);
    if (_DstBuf != (wchar_t *)0x0) {
      local_38._cnt = local_38._cnt + -1;
      if (local_38._cnt < 0) {
        FUN_00014d70(0,(longlong)&local_38);
      }
      else {
        *local_38._ptr = 0;
        local_38._ptr = (char *)((longlong)local_38._ptr + 1);
      }
      local_38._cnt = local_38._cnt + -1;
      if (local_38._cnt < 0) {
        FUN_00014d70(0,(longlong)&local_38);
      }
      else {
        *local_38._ptr = 0;
      }
    }
  }
  return iVar1;
}



/* ================================================================
 * Function: _vsnwprintf
 * Address:  00014c4c
 * ================================================================ */

/* Library Function - Single Match
    _vsnwprintf
   
   Library: Visual Studio 2019 Release */

int __cdecl _vsnwprintf(wchar_t *_Dest,size_t _Count,wchar_t *_Format,va_list _Args)

{
  int iVar1;
  
  iVar1 = _vsnwprintf_l(_Dest,_Count,_Format,(_locale_t)0x0,_Args);
  return iVar1;
}



/* ================================================================
 * Function: FUN_00014c80
 * Address:  00014c80
 * ================================================================ */

void FUN_00014c80(ulonglong *param_1,ulonglong param_2,ulonglong param_3)

{
  uint uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = param_3;
  if (7 < param_3) {
    param_2 = (param_2 & 0xff) * 0x101010101010101;
    if (0x3f < param_3) {
      uVar1 = -(int)param_1 & 7;
      if (uVar1 != 0) {
        uVar3 = param_3 - uVar1;
        *param_1 = param_2;
      }
      param_1 = (ulonglong *)((ulonglong)uVar1 + (longlong)param_1);
      param_3 = uVar3 & 0x3f;
      uVar3 = uVar3 >> 6;
      if (uVar3 != 0) {
        puVar2 = param_1;
        if (uVar3 < 0x1c00) {
          do {
            *puVar2 = param_2;
            puVar2[1] = param_2;
            puVar2[2] = param_2;
            param_1 = puVar2 + 8;
            puVar2[3] = param_2;
            puVar2[4] = param_2;
            uVar3 = uVar3 - 1;
            puVar2[5] = param_2;
            puVar2[6] = param_2;
            puVar2[7] = param_2;
            puVar2 = param_1;
          } while (uVar3 != 0);
        }
        else {
          do {
            *puVar2 = param_2;
            puVar2[1] = param_2;
            puVar2[2] = param_2;
            param_1 = puVar2 + 8;
            puVar2[3] = param_2;
            puVar2[4] = param_2;
            uVar3 = uVar3 - 1;
            puVar2[5] = param_2;
            puVar2[6] = param_2;
            puVar2[7] = param_2;
            puVar2 = param_1;
          } while (uVar3 != 0);
          LOCK();
          UNLOCK();
        }
      }
    }
    uVar3 = param_3 & 7;
    for (uVar4 = param_3 >> 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *param_1 = param_2;
      param_1 = param_1 + 1;
    }
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(char *)param_1 = (char)param_2;
    param_1 = (ulonglong *)((longlong)param_1 + 1);
  }
  return;
}



/* ================================================================
 * Function: FUN_00014d70
 * Address:  00014d70
 * ================================================================ */

undefined8 FUN_00014d70(undefined8 param_1,longlong param_2)

{
  *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x18) | 0x20;
  return 0xffffffff;
}



/* ================================================================
 * Function: FUN_00014d80
 * Address:  00014d80
 * ================================================================ */

void FUN_00014d80(void)

{
  return;
}



/* ================================================================
 * Function: write_char
 * Address:  00014d8c
 * ================================================================ */

/* Library Function - Single Match
    write_char
   
   Library: Visual Studio 2019 Release */

void write_char(wchar_t param_1,FILE *param_2,int *param_3)

{
  wint_t wVar1;
  
  if (((param_2->_flag & 0x40) == 0) || (param_2->_base != (char *)0x0)) {
    wVar1 = _fputwc_nolock(param_1,param_2);
    if ((wVar1 == 0xffff) && ((param_2->_flag & 0x20) != 0)) {
      *param_3 = -1;
    }
    else {
      *param_3 = *param_3 + 1;
    }
  }
  else {
    *param_3 = *param_3 + 1;
  }
  return;
}



/* ================================================================
 * Function: write_multi_char
 * Address:  00014ddc
 * ================================================================ */

/* Library Function - Single Match
    write_multi_char
   
   Library: Visual Studio 2019 Release */

void write_multi_char(wchar_t param_1,int param_2,FILE *param_3,int *param_4)

{
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    write_char(param_1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}



/* ================================================================
 * Function: write_string
 * Address:  00014e34
 * ================================================================ */

/* Library Function - Single Match
    write_string
   
   Library: Visual Studio 2019 Release */

void write_string(wchar_t *param_1,int param_2,FILE *param_3,int *param_4)

{
  if (((param_3->_flag & 0x40) == 0) || (param_3->_base != (char *)0x0)) {
    while (0 < param_2) {
      param_2 = param_2 + -1;
      write_char(*param_1,param_3,param_4);
      param_1 = param_1 + 1;
      if (*param_4 == -1) {
        if (DAT_0001d0c4 != 0x2a) {
          return;
        }
        write_char(L'?',param_3,param_4);
      }
    }
  }
  else {
    *param_4 = *param_4 + param_2;
  }
  return;
}



/* ================================================================
 * Function: _woutput_l
 * Address:  00014ebc
 * ================================================================ */

/* Library Function - Single Match
    _woutput_l
   
   Library: Visual Studio 2019 Release */

int __cdecl _woutput_l(FILE *_File,wchar_t *_Format,_locale_t _Locale,va_list _ArgList)

{
  wchar_t wVar1;
  ushort uVar2;
  ushort *puVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  FILE *pFVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  wchar_t *pwVar19;
  ulonglong uVar20;
  int iVar21;
  int iVar22;
  ulonglong uVar23;
  undefined1 auStack_4b8 [32];
  undefined8 local_498;
  int local_488;
  uint local_484;
  uint local_480;
  uint local_47c;
  uint local_478;
  wchar_t local_474;
  short local_472;
  FILE *local_470;
  uint local_468;
  char local_464;
  undefined1 local_463;
  wchar_t local_460 [2];
  int local_45c;
  undefined4 local_458;
  wchar_t *local_450;
  wchar_t local_448 [255];
  undefined2 local_249;
  ulonglong local_48;
  
  local_48 = DAT_0001c100 ^ (ulonglong)auStack_4b8;
  uVar13 = 0;
  local_458 = 0;
  local_478 = 0;
  local_47c = 0;
  local_484 = 0;
  local_45c = 0;
  local_488 = 0;
  local_470 = _File;
  if ((_File == (FILE *)0x0) || (_Format == (wchar_t *)0x0)) {
    local_498 = 0;
    FUN_00014d80();
  }
  else {
    wVar1 = *_Format;
    local_480 = 0;
    uVar11 = uVar13;
    uVar15 = uVar13;
    uVar16 = uVar13;
    uVar18 = uVar13;
    uVar20 = uVar13;
    uVar23 = uVar13;
    pwVar10 = local_450;
    while (wVar1 != L'\0') {
      uVar8 = 0xffffffffffffffff;
      uVar17 = (uint)uVar18;
      uVar12 = (uint)uVar16;
      pwVar19 = _Format + 1;
      local_450 = pwVar19;
      if ((int)uVar20 < 0) break;
      if ((ushort)(wVar1 + L'￠') < 0x59) {
        uVar7 = (int)*(char *)((longlong)L"KmdfLibrary" + (ulonglong)(ushort)wVar1 + 0x10) & 0xf;
      }
      else {
        uVar7 = 0;
      }
      local_468 = (int)(char)(&DAT_00017160)[(longlong)(int)uVar13 + (longlong)(int)uVar7 * 8] >> 4;
      uVar13 = (ulonglong)local_468;
      if (local_468 == 0) {
LAB_000155dd:
        local_488 = 1;
        write_char(wVar1,_File,(int *)&local_480);
        uVar20 = (ulonglong)local_480;
LAB_000155fa:
        uVar18 = (ulonglong)local_484;
LAB_000155ff:
        uVar13 = (ulonglong)local_468;
        uVar15 = (ulonglong)local_478;
        uVar16 = (ulonglong)local_47c;
        _File = local_470;
        _Format = pwVar19;
      }
      else if (local_468 == 1) {
        uVar15 = 0;
        uVar16 = 0xffffffff;
        local_47c = 0xffffffff;
        local_45c = 0;
        local_478 = 0;
        local_484 = 0;
        uVar11 = 0;
        local_488 = 0;
        uVar18 = uVar15;
        _Format = pwVar19;
      }
      else {
        uVar7 = (uint)uVar11;
        if (local_468 == 2) {
          if (wVar1 == L' ') {
            uVar11 = (ulonglong)(uVar7 | 2);
            _Format = pwVar19;
          }
          else if (wVar1 == L'#') {
            uVar11 = (ulonglong)(uVar7 | 0x80);
            _Format = pwVar19;
          }
          else if (wVar1 == L'+') {
            uVar11 = (ulonglong)(uVar7 | 1);
            _Format = pwVar19;
          }
          else if (wVar1 == L'-') {
            uVar11 = (ulonglong)(uVar7 | 4);
            _Format = pwVar19;
          }
          else {
            _Format = pwVar19;
            if (wVar1 == L'0') {
              uVar11 = (ulonglong)(uVar7 | 8);
            }
          }
        }
        else if (local_468 == 3) {
          if (wVar1 == L'*') {
            local_478 = *(uint *)_ArgList;
            uVar15 = (ulonglong)local_478;
            _ArgList = (va_list)((longlong)_ArgList + 8);
            _Format = pwVar19;
            if (-1 < (int)local_478) goto LAB_00015612;
            uVar11 = (ulonglong)(uVar7 | 4);
            local_478 = -local_478;
          }
          else {
            local_478 = ((ushort)wVar1 - 0x30) + (int)uVar15 * 10;
          }
          uVar15 = (ulonglong)local_478;
          _Format = pwVar19;
        }
        else if (local_468 == 4) {
          uVar16 = 0;
          local_47c = 0;
          _Format = pwVar19;
        }
        else if (local_468 == 5) {
          if (wVar1 == L'*') {
            local_47c = *(uint *)_ArgList;
            uVar16 = (ulonglong)local_47c;
            _ArgList = (va_list)((longlong)_ArgList + 8);
            _Format = pwVar19;
            if ((int)local_47c < 0) {
              uVar16 = 0xffffffff;
              local_47c = 0xffffffff;
            }
          }
          else {
            local_47c = ((ushort)wVar1 - 0x30) + uVar12 * 10;
            uVar16 = (ulonglong)local_47c;
            _Format = pwVar19;
          }
        }
        else if (local_468 == 6) {
          if (wVar1 == L'I') {
            uVar11 = (ulonglong)(uVar7 | 0x8000);
            if ((*pwVar19 == L'6') && (_Format[2] == L'4')) {
              uVar11 = (ulonglong)(uVar7 | 0x8000);
              _Format = _Format + 3;
            }
            else if ((*pwVar19 == L'3') && (_Format[2] == L'2')) {
              uVar11 = (ulonglong)(uVar7 & 0xffff7fff);
              _Format = _Format + 3;
            }
            else {
              _Format = pwVar19;
              if (((((*pwVar19 != L'd') && (*pwVar19 != L'i')) && (*pwVar19 != L'o')) &&
                  ((*pwVar19 != L'u' && (*pwVar19 != L'x')))) && (*pwVar19 != L'X')) {
                local_468 = 0;
                goto LAB_000155dd;
              }
            }
          }
          else if (wVar1 == L'h') {
            uVar11 = (ulonglong)(uVar7 | 0x20);
            _Format = pwVar19;
          }
          else if (wVar1 == L'l') {
            if (*pwVar19 == L'l') {
              uVar11 = (ulonglong)(uVar7 | 0x1000);
              _Format = _Format + 2;
            }
            else {
              uVar11 = (ulonglong)(uVar7 | 0x10);
              _Format = pwVar19;
            }
          }
          else {
            _Format = pwVar19;
            if (wVar1 == L'w') {
              uVar11 = (ulonglong)(uVar7 | 0x800);
            }
          }
        }
        else {
          _Format = pwVar19;
          if (local_468 == 7) {
            iVar6 = local_488;
            if ((ushort)wVar1 < 0x6a) {
              if (wVar1 == L'i') {
LAB_000151be:
                uVar11 = (ulonglong)(uVar7 | 0x40);
LAB_000151c1:
                iVar21 = 10;
                goto LAB_00015281;
              }
              if (wVar1 == L'C') {
                if ((uVar11 & 0x830) == 0) {
                  uVar11 = (ulonglong)(uVar7 | 0x20);
                }
LAB_0001515b:
                local_460[0] = *(wchar_t *)_ArgList;
                _ArgList = (va_list)((longlong)_ArgList + 8);
                local_488 = 1;
                wVar1 = local_460[0];
                if ((uVar11 & 0x20) != 0) {
                  local_464 = (char)local_460[0];
                  local_463 = 0;
                  iVar6 = mbtowc(local_448,&local_464,(longlong)DAT_0001c158);
                  uVar18 = (ulonglong)local_484;
                  wVar1 = local_448[0];
                  if (iVar6 < 0) {
                    local_45c = 1;
                  }
                }
                local_448[0] = wVar1;
                pwVar10 = local_448;
                uVar23 = 1;
                iVar6 = 1;
              }
              else if (wVar1 == L'S') {
                if ((uVar11 & 0x830) == 0) {
                  uVar11 = (ulonglong)(uVar7 | 0x20);
                }
LAB_000150f6:
                pwVar10 = *(wchar_t **)_ArgList;
                if (uVar12 == 0xffffffff) {
                  uVar16 = 0x7fffffff;
                }
                _ArgList = (va_list)((longlong)_ArgList + 8);
                uVar13 = 0;
                if ((uVar11 & 0x20) == 0) {
                  if (pwVar10 == (wchar_t *)0x0) {
                    pwVar10 = (wchar_t *)PTR_u__null__0001c148;
                  }
                  local_488 = 1;
                  for (pwVar9 = pwVar10;
                      ((int)uVar16 != 0 && (uVar16 = (ulonglong)((int)uVar16 - 1), *pwVar9 != L'\0')
                      ); pwVar9 = pwVar9 + 1) {
                  }
                  uVar23 = (longlong)pwVar9 - (longlong)pwVar10 >> 1 & 0xffffffff;
                  iVar6 = 1;
                }
                else {
                  if (pwVar10 == (wchar_t *)0x0) {
                    pwVar10 = (wchar_t *)PTR_DAT_0001c140;
                  }
                  pwVar9 = pwVar10;
                  uVar23 = 0;
                  if (0 < (int)uVar16) {
                    do {
                      uVar23 = uVar13;
                      if ((char)*pwVar9 == '\0') break;
                      uVar12 = (int)uVar13 + 1;
                      uVar13 = (ulonglong)uVar12;
                      pwVar9 = (wchar_t *)((longlong)pwVar9 + 1);
                      uVar23 = uVar13;
                    } while ((int)uVar12 < (int)uVar16);
                  }
                }
              }
              else {
                if (wVar1 == L'X') goto LAB_0001523f;
                if (wVar1 == L'Z') {
                  puVar3 = *(ushort **)_ArgList;
                  _ArgList = (va_list)((longlong)_ArgList + 8);
                  pwVar9 = (wchar_t *)PTR_DAT_0001c140;
                  if ((puVar3 == (ushort *)0x0) ||
                     (pwVar10 = *(wchar_t **)(puVar3 + 4), pwVar10 == (wchar_t *)0x0)) {
                    do {
                      if (uVar8 == 0) break;
                      uVar8 = uVar8 - 1;
                      wVar1 = *pwVar9;
                      pwVar9 = (wchar_t *)((longlong)pwVar9 + 1);
                    } while ((char)wVar1 != '\0');
                    pwVar10 = (wchar_t *)PTR_DAT_0001c140;
                    uVar23 = ~uVar8 - 1;
                  }
                  else {
                    uVar2 = *puVar3;
                    if (puVar3[1] < uVar2) {
LAB_0001574a:
                      local_498 = 0;
                      FUN_00014d80();
                      break;
                    }
                    if ((uVar7 >> 0xb & 1) == 0) {
                      local_488 = 0;
                      uVar23 = (ulonglong)uVar2;
                      iVar6 = 0;
                    }
                    else {
                      if (((~uVar2 & 1) == 0) || ((~(uint)pwVar10 & 1) == 0)) goto LAB_0001574a;
                      local_488 = 1;
                      uVar23 = (ulonglong)(uVar2 >> 1);
                      iVar6 = 1;
                    }
                  }
                }
                else {
                  if (wVar1 == L'c') goto LAB_0001515b;
                  if (wVar1 == L'd') goto LAB_000151be;
                }
              }
            }
            else {
              if (wVar1 == L'n') {
                piVar4 = *(int **)_ArgList;
                _ArgList = (va_list)((longlong)_ArgList + 8);
                iVar6 = _get_printf_count_output();
                if (iVar6 == 0) goto LAB_0001574a;
                if ((uVar11 & 0x20) == 0) {
                  *piVar4 = (int)uVar20;
                }
                else {
                  *(short *)piVar4 = (short)uVar20;
                }
                uVar18 = (ulonglong)local_484;
                local_45c = 1;
                iVar6 = local_488;
                goto LAB_00015048;
              }
              if (wVar1 == L'o') {
                iVar21 = 8;
                if ((char)uVar11 < '\0') {
                  uVar11 = (ulonglong)(uVar7 | 0x200);
                }
              }
              else {
                if (wVar1 == L'p') {
                  uVar12 = 0x10;
                  uVar11 = (ulonglong)(uVar7 | 0x8000);
LAB_0001523f:
                  local_458 = 7;
                }
                else {
                  if (wVar1 == L's') goto LAB_000150f6;
                  if (wVar1 == L'u') goto LAB_000151c1;
                  if (wVar1 != L'x') goto LAB_00015048;
                  local_458 = 0x27;
                }
                iVar21 = 0x10;
                if ((char)uVar11 < '\0') {
                  local_472 = (short)local_458 + 0x51;
                  local_474 = L'0';
                  uVar17 = 2;
                }
              }
LAB_00015281:
              uVar7 = (uint)uVar11;
              if ((uVar7 >> 0xf == 0) && ((uVar7 >> 0xc & 1) == 0)) {
                if ((uVar11 & 0x20) == 0) {
                  if ((uVar11 & 0x40) == 0) {
                    uVar13 = (ulonglong)*(uint *)_ArgList;
                  }
                  else {
                    uVar13 = (ulonglong)(int)*(uint *)_ArgList;
                  }
                }
                else if ((uVar11 & 0x40) == 0) {
                  uVar13 = (ulonglong)(ushort)*(wchar_t *)_ArgList;
                }
                else {
                  uVar13 = (ulonglong)*(wchar_t *)_ArgList;
                }
              }
              else {
                uVar13 = *(ulonglong *)_ArgList;
              }
              _ArgList = (va_list)((longlong)_ArgList + 8);
              if (((uVar11 & 0x40) != 0) && ((longlong)uVar13 < 0)) {
                uVar13 = -uVar13;
                uVar11 = (ulonglong)(uVar7 | 0x100);
              }
              uVar7 = (uint)uVar11;
              if ((uVar7 >> 0xf == 0) && ((uVar7 >> 0xc & 1) == 0)) {
                uVar13 = uVar13 & 0xffffffff;
              }
              if ((int)uVar12 < 0) {
                uVar12 = 1;
              }
              else {
                uVar11 = (ulonglong)(uVar7 & 0xfffffff7);
                if (0x200 < (int)uVar12) {
                  uVar12 = 0x200;
                }
              }
              pwVar9 = &local_249;
              local_484 = -(uint)(uVar13 != 0) & uVar17;
              while ((local_47c = uVar12 - 1, 0 < (int)uVar12 || (uVar13 != 0))) {
                uVar12 = (int)(uVar13 % (ulonglong)(longlong)iVar21) + 0x30;
                cVar5 = (char)uVar12;
                if (0x39 < uVar12) {
                  cVar5 = cVar5 + (char)local_458;
                }
                *(char *)pwVar9 = cVar5;
                pwVar9 = (wchar_t *)((longlong)pwVar9 + -1);
                uVar13 = uVar13 / (ulonglong)(longlong)iVar21;
                uVar12 = local_47c;
              }
              uVar18 = (ulonglong)local_484;
              uVar12 = (int)&local_249 - (int)pwVar9;
              pwVar10 = (wchar_t *)((longlong)pwVar9 + 1);
              uVar23 = (ulonglong)uVar12;
              if ((((uint)uVar11 >> 9 & 1) != 0) && ((uVar12 == 0 || (*(char *)pwVar10 != '0')))) {
                *(char *)pwVar9 = '0';
                pwVar10 = pwVar9;
                uVar23 = (ulonglong)(uVar12 + 1);
              }
            }
LAB_00015048:
            if (local_45c == 0) {
              if ((uVar11 & 0x40) != 0) {
                if (((uint)uVar11 >> 8 & 1) == 0) {
                  if ((uVar11 & 1) == 0) {
                    if ((uVar11 & 2) == 0) goto LAB_000153fe;
                    local_474 = L' ';
                  }
                  else {
                    local_474 = L'+';
                  }
                }
                else {
                  local_474 = L'-';
                }
                local_484 = 1;
              }
LAB_000153fe:
              uVar12 = local_484;
              iVar22 = (int)uVar23;
              iVar21 = (local_478 - iVar22) - local_484;
              if ((uVar11 & 0xc) == 0) {
                write_multi_char(L' ',iVar21,local_470,(int *)&local_480);
              }
              write_string(&local_474,uVar12,local_470,(int *)&local_480);
              if (((uVar11 & 8) != 0) && ((uVar11 & 4) == 0)) {
                write_multi_char(L'0',iVar21,local_470,(int *)&local_480);
              }
              pFVar14 = local_470;
              if ((iVar6 == 0) && (0 < iVar22)) {
                uVar13 = uVar23 & 0xffffffff;
                pwVar19 = pwVar10;
                do {
                  uVar12 = (int)uVar13 - 1;
                  iVar6 = mbtowc(local_460,(char *)pwVar19,(longlong)DAT_0001c158);
                  if (iVar6 == 2) {
                    uVar12 = (int)uVar13 - 2;
                  }
                  uVar13 = (ulonglong)uVar12;
                  if (iVar6 < 1) {
                    uVar20 = 0xffffffff;
                    local_480 = 0xffffffff;
                    pFVar14 = local_470;
                    goto LAB_000154ed;
                  }
                  write_char(local_460[0],local_470,(int *)&local_480);
                  pwVar19 = (wchar_t *)((longlong)pwVar19 + (longlong)iVar6);
                  pFVar14 = local_470;
                } while (0 < (int)uVar12);
              }
              else {
                write_string(pwVar10,iVar22,local_470,(int *)&local_480);
              }
              uVar20 = (ulonglong)local_480;
LAB_000154ed:
              pwVar19 = local_450;
              if ((-1 < (int)uVar20) && ((uVar11 & 4) != 0)) {
                write_multi_char(L' ',iVar21,pFVar14,(int *)&local_480);
                uVar20 = (ulonglong)local_480;
                pwVar19 = local_450;
              }
              goto LAB_000155fa;
            }
            goto LAB_000155ff;
          }
        }
      }
LAB_00015612:
      wVar1 = *_Format;
    }
  }
  iVar6 = FUN_00014690(local_48 ^ (ulonglong)auStack_4b8);
  return iVar6;
}



/* ================================================================
 * Function: __GSHandlerCheckCommon
 * Address:  0001576c
 * ================================================================ */

/* Library Function - Single Match
    __GSHandlerCheckCommon
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release,
   Visual Studio 2019 Release */

void __GSHandlerCheckCommon(ulonglong param_1,longlong param_2,uint *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_1;
  if ((*param_3 & 4) != 0) {
    uVar2 = (longlong)(int)param_3[1] + param_1 & (longlong)(int)-param_3[2];
  }
  lVar1 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 8) + *(longlong *)(param_2 + 8);
  if ((*(byte *)(lVar1 + 3) & 0xf) != 0) {
    param_1 = param_1 + (longlong)(int)(*(byte *)(lVar1 + 3) & 0xfffffff0);
  }
  FUN_00014690(param_1 ^ *(ulonglong *)((longlong)(int)(*param_3 & 0xfffffff8) + uVar2));
  return;
}



/* ================================================================
 * Function: __GSHandlerCheck
 * Address:  000157d8
 * ================================================================ */

/* Library Function - Single Match
    __GSHandlerCheck
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release,
   Visual Studio 2019 Release */

undefined8
__GSHandlerCheck(undefined8 param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  __GSHandlerCheckCommon(param_2,param_4,*(uint **)(param_4 + 0x38));
  return 1;
}



/* ================================================================
 * Function: _get_printf_count_output
 * Address:  000157fc
 * ================================================================ */

/* Library Function - Single Match
    _get_printf_count_output
   
   Library: Visual Studio 2019 Release */

int __cdecl _get_printf_count_output(void)

{
  return (int)(DAT_0001d090 == (DAT_0001c100 | 1));
}



/* ================================================================
 * Function: _fputwc_nolock
 * Address:  0001581c
 * ================================================================ */

/* Library Function - Single Match
    _fputwc_nolock
   
   Library: Visual Studio 2019 Release */

wint_t __cdecl _fputwc_nolock(wchar_t _Ch,FILE *_File)

{
  int *piVar1;
  undefined8 uVar2;
  
  if (_File == (FILE *)0x0) {
    FUN_00014d80();
    _Ch = L'\xffff';
  }
  else {
    piVar1 = &_File->_cnt;
    *piVar1 = *piVar1 + -2;
    if (*piVar1 < 0) {
      uVar2 = FUN_000158c0((ulonglong)(ushort)_Ch,(longlong)_File);
      _Ch = (wchar_t)uVar2;
    }
    else {
      *(wchar_t *)_File->_ptr = _Ch;
      _File->_ptr = _File->_ptr + 2;
    }
  }
  return _Ch;
}



/* ================================================================
 * Function: mbtowc
 * Address:  00015868
 * ================================================================ */

/* Library Function - Single Match
    mbtowc
   
   Library: Visual Studio 2019 Release */

int __cdecl mbtowc(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes)

{
  wchar_t wVar1;
  int iVar2;
  char *local_res10 [3];
  
  iVar2 = 0;
  if ((_SrcCh != (char *)0x0) && (_SrcSizeInBytes != 0)) {
    if (*_SrcCh == '\0') {
      if (_DstCh != (wchar_t *)0x0) {
        *_DstCh = L'\0';
        iVar2 = 0;
      }
    }
    else {
      local_res10[0] = _SrcCh;
      wVar1 = RtlAnsiCharToUnicodeChar(local_res10);
      *_DstCh = wVar1;
      iVar2 = (int)local_res10[0] - (int)_SrcCh;
    }
  }
  return iVar2;
}



/* ================================================================
 * Function: FUN_000158c0
 * Address:  000158c0
 * ================================================================ */

undefined8 FUN_000158c0(undefined8 param_1,longlong param_2)

{
  *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x18) | 0x20;
  return 0xffff;
}



/* ================================================================
 * Function: RtlAnsiCharToUnicodeChar
 * Address:  000158d0
 * ================================================================ */

void RtlAnsiCharToUnicodeChar(void)

{
                    /* WARNING: Could not recover jumptable at 0x000158d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RtlAnsiCharToUnicodeChar();
  return;
}



/* ================================================================
 * Function: WdfVersionUnbind
 * Address:  000158dc
 * ================================================================ */

void WdfVersionUnbind(void)

{
                    /* WARNING: Could not recover jumptable at 0x000158dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WdfVersionUnbind();
  return;
}



/* ================================================================
 * Function: WdfVersionBind
 * Address:  000158e8
 * ================================================================ */

void WdfVersionBind(void)

{
                    /* WARNING: Could not recover jumptable at 0x000158e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WdfVersionBind();
  return;
}



/* ================================================================
 * Function: WdfVersionBindClass
 * Address:  000158f4
 * ================================================================ */

void WdfVersionBindClass(void)

{
                    /* WARNING: Could not recover jumptable at 0x000158f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WdfVersionBindClass();
  return;
}



/* ================================================================
 * Function: WdfVersionUnbindClass
 * Address:  00015900
 * ================================================================ */

void WdfVersionUnbindClass(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WdfVersionUnbindClass();
  return;
}



/* ================================================================
 * Function: memcpy
 * Address:  00015920
 * ================================================================ */

/* Library Function - Single Match
    memcpy
   
   Library: Visual Studio 2019 Release */

void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = (longlong)_Src - (longlong)_Dst;
  if (_Src < _Dst) {
    puVar4 = (undefined8 *)((longlong)_Dst + _Size);
    puVar3 = puVar4;
    if (_Size < 8) goto LAB_00015b34;
    if (((ulonglong)puVar4 & 7) != 0) {
      if (((ulonglong)puVar4 & 1) != 0) {
        puVar4 = (undefined8 *)((longlong)puVar4 + -1);
        _Size = _Size - 1;
        *(undefined1 *)puVar4 = *(undefined1 *)(uVar5 + (longlong)puVar4);
      }
      if (((ulonglong)puVar4 & 2) != 0) {
        puVar4 = (undefined8 *)((longlong)puVar4 + -2);
        _Size = _Size - 2;
        *(undefined2 *)puVar4 = *(undefined2 *)(uVar5 + (longlong)puVar4);
      }
      if (((ulonglong)puVar4 & 4) != 0) {
        puVar4 = (undefined8 *)((longlong)puVar4 + -4);
        _Size = _Size - 4;
        *(undefined4 *)puVar4 = *(undefined4 *)(uVar5 + (longlong)puVar4);
      }
    }
    while (uVar6 = _Size >> 5, puVar3 = puVar4, uVar6 != 0) {
      if ((uVar6 < 0x2000) || (0xfffffffffffff000 < uVar5)) goto LAB_00015b70;
      do {
        iVar2 = 0x20;
        do {
          puVar3 = puVar4;
          iVar2 = iVar2 + -1;
          puVar4 = puVar3 + -0x10;
        } while (iVar2 != 0);
        iVar2 = 0x40;
        puVar3 = puVar3 + 0x1f0;
        do {
          uVar1 = *(undefined8 *)((uVar5 - 0x10) + (longlong)puVar3);
          puVar3[-1] = *(undefined8 *)((uVar5 - 8) + (longlong)puVar3);
          puVar3[-2] = uVar1;
          uVar1 = *(undefined8 *)((uVar5 - 0x20) + (longlong)puVar3);
          puVar3[-3] = *(undefined8 *)((uVar5 - 0x18) + (longlong)puVar3);
          puVar3[-4] = uVar1;
          uVar1 = *(undefined8 *)((uVar5 - 0x30) + (longlong)puVar3);
          puVar4 = puVar3 + -8;
          puVar3[-5] = *(undefined8 *)((uVar5 - 0x28) + (longlong)puVar3);
          puVar3[-6] = uVar1;
          uVar1 = *(undefined8 *)(uVar5 + (longlong)puVar4);
          iVar2 = iVar2 + -1;
          puVar3[-7] = *(undefined8 *)(uVar5 + 8 + (longlong)puVar4);
          *puVar4 = uVar1;
          puVar3 = puVar4;
        } while (iVar2 != 0);
        _Size = _Size - 0x1000;
      } while (0xfff < _Size);
      LOCK();
      UNLOCK();
    }
    goto LAB_00015b17;
  }
  puVar4 = _Dst;
  if (_Size < 8) goto LAB_00015994;
  puVar3 = _Dst;
  if (((ulonglong)_Dst & 7) != 0) {
    if (((ulonglong)_Dst & 1) != 0) {
      _Size = _Size - 1;
      *(undefined1 *)_Dst = *(undefined1 *)(uVar5 + (longlong)_Dst);
      puVar3 = (undefined8 *)((longlong)_Dst + 1);
    }
    if (((ulonglong)puVar3 & 2) != 0) {
      _Size = _Size - 2;
      *(undefined2 *)puVar3 = *(undefined2 *)(uVar5 + (longlong)puVar3);
      puVar3 = (undefined8 *)((longlong)puVar3 + 2);
    }
    if (((ulonglong)puVar3 & 4) != 0) {
      _Size = _Size - 4;
      *(undefined4 *)puVar3 = *(undefined4 *)(uVar5 + (longlong)puVar3);
      puVar3 = (undefined8 *)((longlong)puVar3 + 4);
    }
  }
  while (uVar6 = _Size >> 5, puVar4 = puVar3, uVar6 != 0) {
    if ((uVar6 < 0x2000) || (uVar5 < 0x1000)) goto LAB_000159d0;
    do {
      iVar2 = 0x20;
      do {
        puVar4 = puVar3;
        iVar2 = iVar2 + -1;
        puVar3 = puVar4 + 0x10;
      } while (iVar2 != 0);
      iVar2 = 0x40;
      puVar4 = puVar4 + -0x1f0;
      do {
        uVar1 = *(undefined8 *)(uVar5 + 8 + (longlong)puVar4);
        *puVar4 = *(undefined8 *)(uVar5 + (longlong)puVar4);
        puVar4[1] = uVar1;
        uVar1 = *(undefined8 *)(uVar5 + 0x18 + (longlong)puVar4);
        puVar4[2] = *(undefined8 *)(uVar5 + 0x10 + (longlong)puVar4);
        puVar4[3] = uVar1;
        uVar1 = *(undefined8 *)(uVar5 + 0x28 + (longlong)puVar4);
        puVar3 = puVar4 + 8;
        puVar4[4] = *(undefined8 *)(uVar5 + 0x20 + (longlong)puVar4);
        puVar4[5] = uVar1;
        uVar1 = *(undefined8 *)((uVar5 - 8) + (longlong)puVar3);
        iVar2 = iVar2 + -1;
        puVar4[6] = *(undefined8 *)((uVar5 - 0x10) + (longlong)puVar3);
        puVar4[7] = uVar1;
        puVar4 = puVar3;
      } while (iVar2 != 0);
      _Size = _Size - 0x1000;
    } while (0xfff < _Size);
    LOCK();
    UNLOCK();
  }
  goto LAB_00015977;
LAB_00015b70:
  do {
    uVar1 = *(undefined8 *)((uVar5 - 0x10) + (longlong)puVar4);
    puVar3 = puVar4 + -4;
    puVar4[-1] = *(undefined8 *)((uVar5 - 8) + (longlong)puVar4);
    puVar4[-2] = uVar1;
    uVar1 = *(undefined8 *)(uVar5 + (longlong)puVar3);
    uVar6 = uVar6 - 1;
    puVar4[-3] = *(undefined8 *)(uVar5 + 8 + (longlong)puVar3);
    *puVar3 = uVar1;
    puVar4 = puVar3;
  } while (uVar6 != 0);
  _Size = _Size & 0x1f;
LAB_00015b17:
  uVar6 = _Size >> 3;
  if (uVar6 != 0) {
    do {
      puVar3 = puVar3 + -1;
      uVar6 = uVar6 - 1;
      *puVar3 = *(undefined8 *)(uVar5 + (longlong)puVar3);
    } while (uVar6 != 0);
    _Size = _Size & 7;
  }
LAB_00015b34:
  if (_Size == 0) {
    return _Dst;
  }
  do {
    puVar3 = (undefined8 *)((longlong)puVar3 + -1);
    _Size = _Size - 1;
    *(undefined1 *)puVar3 = *(undefined1 *)(uVar5 + (longlong)puVar3);
  } while (_Size != 0);
  return _Dst;
LAB_000159d0:
  do {
    uVar1 = *(undefined8 *)(uVar5 + 8 + (longlong)puVar3);
    puVar4 = puVar3 + 4;
    *puVar3 = *(undefined8 *)(uVar5 + (longlong)puVar3);
    puVar3[1] = uVar1;
    uVar1 = *(undefined8 *)((uVar5 - 8) + (longlong)puVar4);
    uVar6 = uVar6 - 1;
    puVar3[2] = *(undefined8 *)((uVar5 - 0x10) + (longlong)puVar4);
    puVar3[3] = uVar1;
    puVar3 = puVar4;
  } while (uVar6 != 0);
  _Size = _Size & 0x1f;
LAB_00015977:
  uVar6 = _Size >> 3;
  if (uVar6 != 0) {
    do {
      *puVar4 = *(undefined8 *)(uVar5 + (longlong)puVar4);
      puVar4 = puVar4 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    _Size = _Size & 7;
  }
LAB_00015994:
  if (_Size == 0) {
    return _Dst;
  }
  do {
    *(undefined1 *)puVar4 = *(undefined1 *)(uVar5 + (longlong)puVar4);
    puVar4 = (undefined8 *)((longlong)puVar4 + 1);
    _Size = _Size - 1;
  } while (_Size != 0);
  return _Dst;
}



/* ================================================================
 * Function: FUN_0001f008
 * Address:  0001f008
 * ================================================================ */

undefined4
FUN_0001f008(byte param_1,undefined8 param_2,uint param_3,ulonglong *param_4,longlong param_5,
            uint *param_6)

{
  ushort *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong *puVar11;
  uint uVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  undefined1 uStack_36;
  undefined4 uStack_34;
  
  puVar4 = param_6;
  *param_6 = 0;
  if (3 < param_1) {
    if (param_1 < 6) {
      if (param_5 != 0) {
        if (param_3 < 0x30) {
          return 0xc000000d;
        }
        do {
          lVar8 = RtlCompareMemory(*(undefined8 *)(param_5 + 8),param_4 + 3,0x10);
          if (lVar8 == 0x10) break;
          param_5 = *(longlong *)(param_5 + 0x10);
        } while (param_5 != 0);
        if (param_5 != 0) {
          if (param_1 == 5) {
            *(undefined4 *)(param_5 + 0x2c) = 0;
            *(undefined8 *)(param_5 + 0x18) = 0;
            *(undefined1 *)(param_5 + 0x29) = 0;
            return 0;
          }
          bVar13 = DAT_0001d0c0 != 2;
          uVar9 = param_4[1];
          *(ulonglong *)(param_5 + 0x18) = uVar9;
          if (bVar13) {
            uStack_34 = (undefined4)(uVar9 >> 0x20);
            *(undefined4 *)(param_5 + 0x2c) = uStack_34;
            uStack_36 = (undefined1)(uVar9 >> 0x10);
            *(undefined1 *)(param_5 + 0x29) = uStack_36;
            return 0;
          }
          iVar6 = (*DAT_0001d098)(3,local_res8,4,&param_6,param_4);
          if (iVar6 == 0) {
            *(undefined1 *)(param_5 + 0x29) = local_res8[0];
          }
          uVar7 = (*DAT_0001d098)(2,param_5 + 0x2c,4,&param_6,param_4);
          return uVar7;
        }
      }
      return 0xc0000295;
    }
    if (param_1 < 8) {
      return 0;
    }
    if (param_1 == 8) {
      uVar5 = 0;
      if ((DAT_0001d0c0 == 1) && (uVar10 = (uint)param_4[2], 1 < uVar10)) {
        uVar5 = uVar10 * 0x20 + 0x18;
        if (uVar5 <= param_3) {
          uVar9 = (*(ulonglong **)(param_5 + 8))[1];
          param_4[(ulonglong)(uVar10 - 1) * 4 + 3] = **(ulonglong **)(param_5 + 8);
          (param_4 + (ulonglong)(uVar10 - 1) * 4 + 3)[1] = uVar9;
          *(undefined4 *)(param_4 + (ulonglong)((int)param_4[2] - 1) * 4 + 5) = 0x81000;
          *(undefined4 *)(param_5 + 0x2c) = 0;
          *(undefined1 *)(param_5 + 0x29) = 0;
          return 0;
        }
        if (param_3 < 4) {
          return 0xc0000023;
        }
        *(uint *)param_4 = uVar5;
      }
      else {
        puVar1 = *(ushort **)(param_5 + 0x20);
        lVar8 = param_5;
        do {
          lVar8 = *(longlong *)(lVar8 + 0x10);
          uVar5 = uVar5 + 1;
        } while (lVar8 != 0);
        if (0x3f < uVar5) {
          return 0xc000000d;
        }
        if (puVar1 == (ushort *)0x0) {
          uVar12 = 0;
          uVar10 = uVar5 * 0x20 + 0x18;
        }
        else {
          uVar12 = uVar5 * 0x20 + 0x18;
          uVar10 = *puVar1 + 2 + uVar12;
        }
        if (uVar10 <= param_3) {
          FUN_00014c80(param_4,0,(ulonglong)param_3);
          *(uint *)param_4 = uVar10;
          *(uint *)(param_4 + 1) = uVar12;
          *(uint *)(param_4 + 2) = uVar5;
          if (puVar1 != (ushort *)0x0) {
            *(ushort *)((ulonglong)uVar12 + (longlong)param_4) = *puVar1;
            memcpy((ushort *)((ulonglong)uVar12 + (longlong)param_4) + 1,*(void **)(puVar1 + 4),
                   (ulonglong)*puVar1);
          }
          if (uVar5 != 0) {
            uVar9 = (ulonglong)uVar5;
            puVar11 = param_4 + 5;
            do {
              uVar2 = **(ulonglong **)(param_5 + 8);
              uVar3 = (*(ulonglong **)(param_5 + 8))[1];
              *(undefined4 *)puVar11 = 0x81000;
              puVar11[-2] = uVar2;
              puVar11[-1] = uVar3;
              *(undefined4 *)(param_5 + 0x2c) = 0;
              uVar9 = uVar9 - 1;
              *(undefined1 *)(param_5 + 0x29) = 0;
              param_5 = *(longlong *)(param_5 + 0x10);
              puVar11 = puVar11 + 4;
            } while (uVar9 != 0);
          }
          *puVar4 = uVar10;
          return 0;
        }
        if (param_3 < 4) {
          return 0xc0000023;
        }
        *(uint *)param_4 = uVar10;
      }
      *param_6 = 4;
      return 0xc0000023;
    }
  }
  return 0xc0000010;
}



/* ================================================================
 * Function: FUN_0001f2b4
 * Address:  0001f2b4
 * ================================================================ */

void FUN_0001f2b4(void)

{
  undefined *puVar1;
  
  if ((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) {
    puVar1 = PTR_LOOP_0001c190;
    if (DAT_0001d0c0 == 4) {
      for (; puVar1 != (undefined *)0x0; puVar1 = *(undefined **)(puVar1 + 0x10)) {
        if (*(longlong *)(puVar1 + 0x38) != 0) {
          (*DAT_0001d0a8)();
        }
      }
    }
    else if (DAT_0001d0c0 == 2) {
      IoWMIRegistrationControl(PTR_LOOP_0001c190,0x80000002);
    }
    PTR_LOOP_0001c190 = (undefined *)&PTR_LOOP_0001c190;
  }
  return;
}



/* ================================================================
 * Function: FUN_0001f324
 * Address:  0001f324
 * ================================================================ */

void FUN_0001f324(undefined8 param_1)

{
  if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
      ((PTR_LOOP_0001c190[0x2c] & 1) != 0)) && (3 < (byte)PTR_LOOP_0001c190[0x29])) {
    FUN_00011088(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),0xb,&DAT_0001bb20);
  }
  (*DAT_0001c590)(DAT_0001ce68,param_1);
  FUN_0001f2b4();
  return;
}



/* ================================================================
 * Function: FUN_0001f384
 * Address:  0001f384
 * ================================================================ */

ulonglong FUN_0001f384(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  char *pcVar5;
  undefined2 uVar6;
  ulonglong uVar7;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined1 local_1cb;
  code *local_1c0;
  code *local_1b8;
  code *local_1b0;
  code *local_1a0;
  code *local_190;
  undefined4 local_188;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148 [2];
  code *local_140;
  undefined4 local_138;
  undefined1 local_134;
  undefined4 local_130;
  undefined4 local_128 [2];
  code *local_120;
  undefined8 local_118;
  code *local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100 [6];
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined *local_d0;
  undefined4 local_c8 [2];
  code *local_c0;
  code *local_b0;
  code *local_a0;
  code *local_98;
  
  local_res10 = param_2;
  if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
      ((PTR_LOOP_0001c190[0x2c] & 2) != 0)) && (3 < (byte)PTR_LOOP_0001c190[0x29])) {
    FUN_00011088(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),10,&DAT_0001bb10);
  }
  DbgPrint("PIUSBEvtDeviceAdd()\n");
  FUN_00014c80((ulonglong *)local_c8,0,0x88);
  local_c8[0] = 0x88;
  local_a0 = FUN_0001fbf0;
  local_98 = FUN_00020044;
  local_c0 = FUN_000200e4;
  local_b0 = FUN_00020240;
  (*DAT_0001c398)(DAT_0001ce68,local_res10,local_c8);
  (*DAT_0001c3c8)(DAT_0001ce68,local_res10,3);
  local_120 = FUN_00012e54;
  local_128[0] = 0x28;
  local_118 = 0;
  local_104 = 4;
  local_110 = FUN_00012db0;
  local_108 = 2;
  (*DAT_0001c418)(DAT_0001ce68,local_res10,local_128,0);
  FUN_00014c80((ulonglong *)local_100,0,0x38);
  local_d0 = PTR_DAT_0001c180;
  local_100[0] = 0x38;
  local_e8 = 1;
  local_e4 = 1;
  uVar3 = (*DAT_0001c438)(DAT_0001ce68,&local_res10,local_100,&local_res18);
  if ((int)uVar3 < 0) {
    return uVar3;
  }
  (*DAT_0001c330)(DAT_0001ce68,local_res18);
  lVar4 = (*DAT_0001c830)(DAT_0001ce68,local_res18,PTR_DAT_0001c180);
  *(undefined1 *)(lVar4 + 0x80) = 0;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  *(undefined8 *)(lVar4 + 0x90) = 0;
  *(undefined8 *)(lVar4 + 0x98) = 0;
  *(undefined8 *)(lVar4 + 0x50) = 0;
  *(undefined1 *)(lVar4 + 0x70) = 0;
  *(undefined8 *)(lVar4 + 0xc0) = 0;
  *(undefined8 *)(lVar4 + 200) = 0;
  *(undefined8 *)(lVar4 + 0xd8) = 0;
  *(undefined8 *)(lVar4 + 0xf0) = 0;
  *(undefined2 *)(lVar4 + 0x40) = 0xffff;
  *(undefined8 *)(lVar4 + 0x58) = 0;
  *(undefined8 *)(lVar4 + 0x118) = 0;
  *(undefined1 *)(lVar4 + 0x10c) = 0;
  *(undefined4 *)(lVar4 + 0x130) = 1;
  *(undefined4 *)(lVar4 + 0x134) = 0;
  *(undefined8 *)(lVar4 + 0xa8) = 0;
  *(undefined8 *)(lVar4 + 0xb8) = 0;
  *(undefined8 *)(lVar4 + 0xa0) = 0;
  *(undefined8 *)(lVar4 + 0xb0) = 0;
  *(undefined1 *)(lVar4 + 0x138) = 0;
  *(undefined1 *)(lVar4 + 0x160) = 1;
  FUN_00014c80((ulonglong *)&local_178,0,0x30);
  local_178 = 0x30;
  local_174 = 2;
  local_170 = 2;
  local_16c = 2;
  local_168 = 2;
  local_164 = 2;
  local_160 = 2;
  local_158 = 2;
  local_154 = 2;
  local_150 = 0xffffffff;
  local_14c = 0xffffffff;
  local_15c = 1;
  (*DAT_0001c478)(DAT_0001ce68,local_res18,&local_178);
  FUN_00014c80((ulonglong *)&local_1d8,0,0x58);
  local_1b0 = FUN_000206a8;
  local_1d8 = 0x58;
  local_1d0 = 2;
  local_1cb = 1;
  local_1d4 = 2;
  local_188 = 0xffffffff;
  uVar3 = (*DAT_0001c6a0)(DAT_0001ce68,local_res18,&local_1d8,0,&local_res20);
  if ((int)uVar3 < 0) {
    return uVar3;
  }
  FUN_00014c80((ulonglong *)&local_1d8,0,0x58);
  local_1c0 = FUN_000134f4;
  local_1d8 = 0x58;
  local_1a0 = FUN_00013c10;
  local_1d0 = 2;
  local_1d4 = 1;
  uVar1 = (*DAT_0001c6a0)(DAT_0001ce68,local_res18,&local_1d8,0,&local_res20);
  uVar3 = (ulonglong)uVar1;
  if ((int)uVar1 < 0) {
    if ((undefined **)PTR_LOOP_0001c190 == &PTR_LOOP_0001c190) {
      return uVar3;
    }
    if ((PTR_LOOP_0001c190[0x2c] & 2) == 0) {
      return uVar3;
    }
    if ((byte)PTR_LOOP_0001c190[0x29] < 2) {
      return uVar3;
    }
    uVar6 = 0xb;
LAB_0001f790:
    FUN_000110ac(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),uVar6,&DAT_0001bb10,uVar1);
    return uVar3;
  }
  uVar1 = (*DAT_0001c4c8)(DAT_0001ce68,local_res18,local_res20,3);
  uVar3 = (ulonglong)uVar1;
  if ((int)uVar1 < 0) {
    if ((undefined **)PTR_LOOP_0001c190 == &PTR_LOOP_0001c190) {
      return uVar3;
    }
    if ((PTR_LOOP_0001c190[0x2c] & 2) == 0) {
      return uVar3;
    }
    if ((byte)PTR_LOOP_0001c190[0x29] < 2) {
      return uVar3;
    }
    uVar6 = 0xc;
    goto LAB_0001f790;
  }
  FUN_00014c80((ulonglong *)&local_1d8,0,0x58);
  local_1b8 = FUN_00013800;
  local_1d8 = 0x58;
  local_1a0 = FUN_00013c10;
  local_1d0 = 2;
  local_1d4 = 1;
  uVar1 = (*DAT_0001c6a0)(DAT_0001ce68,local_res18,&local_1d8,0,&local_res20);
  uVar3 = (ulonglong)uVar1;
  if ((int)uVar1 < 0) {
    if ((undefined **)PTR_LOOP_0001c190 == &PTR_LOOP_0001c190) {
      return uVar3;
    }
    if ((PTR_LOOP_0001c190[0x2c] & 2) == 0) {
      return uVar3;
    }
    if ((byte)PTR_LOOP_0001c190[0x29] < 2) {
      return uVar3;
    }
    uVar6 = 0xd;
    goto LAB_0001f790;
  }
  uVar1 = (*DAT_0001c4c8)(DAT_0001ce68,local_res18,local_res20,4);
  uVar3 = (ulonglong)uVar1;
  if ((int)uVar1 < 0) {
    if ((undefined **)PTR_LOOP_0001c190 == &PTR_LOOP_0001c190) {
      return uVar3;
    }
    if ((PTR_LOOP_0001c190[0x2c] & 2) == 0) {
      return uVar3;
    }
    if ((byte)PTR_LOOP_0001c190[0x29] < 2) {
      return uVar3;
    }
    uVar6 = 0xe;
    goto LAB_0001f790;
  }
  FUN_00014c80((ulonglong *)&local_1d8,0,0x58);
  local_190 = FUN_00013c4c;
  local_1d8 = 0x58;
  local_1d0 = 2;
  local_1d4 = 3;
  uVar1 = (*DAT_0001c6a0)(DAT_0001ce68,local_res18,&local_1d8,0,lVar4 + 0xe0);
  uVar3 = (ulonglong)uVar1;
  if ((int)uVar1 < 0) {
    if ((undefined **)PTR_LOOP_0001c190 == &PTR_LOOP_0001c190) {
      return uVar3;
    }
    if ((PTR_LOOP_0001c190[0x2c] & 2) == 0) {
      return uVar3;
    }
    if ((byte)PTR_LOOP_0001c190[0x29] < 2) {
      return uVar3;
    }
    uVar6 = 0xf;
    goto LAB_0001f790;
  }
  KeInitializeEvent(lVar4 + 0x148,0,0);
  FUN_00014c80((ulonglong *)local_148,0,0x20);
  local_140 = FUN_000133ec;
  local_e0 = local_res18;
  local_148[0] = 0x20;
  local_138 = 0;
  local_130 = 0;
  local_134 = 0;
  local_e8 = 2;
  iVar2 = (*DAT_0001cbd0)(DAT_0001ce68,local_148,local_100,(undefined8 *)(lVar4 + 0x140));
  uVar1 = (*DAT_0001c448)(DAT_0001ce68,local_res18,&DAT_000171d0,0);
  uVar3 = (ulonglong)uVar1;
  if ((int)uVar1 < 0) {
    if ((undefined **)PTR_LOOP_0001c190 == &PTR_LOOP_0001c190) {
      return uVar3;
    }
    if ((PTR_LOOP_0001c190[0x2c] & 2) == 0) {
      return uVar3;
    }
    if ((byte)PTR_LOOP_0001c190[0x29] < 2) {
      return uVar3;
    }
    FUN_000110ac(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),0x10,&DAT_0001bb10,uVar1);
    return uVar3;
  }
  uVar3 = (*DAT_0001c7e0)(DAT_0001ce68,0,0,0x4d41524e,0x800,(longlong *)(lVar4 + 0xe8),0);
  if ((int)uVar3 < 0) {
    return uVar3;
  }
  if (*(longlong *)(lVar4 + 0xe8) == 0) {
    return uVar3;
  }
  uVar3 = (*DAT_0001c7e0)(DAT_0001ce68,0,0,0x44495547,0x10,(longlong *)(lVar4 + 0xf8),0);
  if ((int)uVar3 < 0) {
    return uVar3;
  }
  if (*(longlong *)(lVar4 + 0xf8) == 0) {
    return uVar3;
  }
  uVar3 = (*DAT_0001c7e0)(DAT_0001ce68,0,0,0x444c5045,0x400,(longlong *)(lVar4 + 0x100),0);
  uVar7 = uVar3 & 0xffffffff;
  if ((int)uVar3 < 0) {
    return uVar3;
  }
  if (*(longlong *)(lVar4 + 0x100) == 0) {
    return uVar3;
  }
  if (iVar2 == -0x3ffffff3) {
    DbgPrint("CreateTimer Failed with error: STATUS_INVALID_PARAMETER");
LAB_0001fb84:
    if (-1 < iVar2) {
      (*DAT_0001cbd8)(DAT_0001ce68,*(undefined8 *)(lVar4 + 0x140),0xffffffffff8d8f20);
    }
  }
  else {
    if (iVar2 == -0x3ffffff0) {
      pcVar5 = "CreateTimer Failed with error: STATUS_INVALID_DEVICE_REQUEST";
    }
    else if (iVar2 == -0x3fffff66) {
      pcVar5 = "CreateTimer Failed with error: STATUS_INSUFFICIENT_RESOURCES";
    }
    else if (iVar2 == -0x3fdffdf4) {
      pcVar5 = "CreateTimer Failed with error: STATUS_WDF_INCOMPATIBLE_EXECUTION_LEVEL";
    }
    else {
      if (iVar2 != -0x3fdffdee) goto LAB_0001fb84;
      pcVar5 = "CreateTimer Failed with error: STATUS_WDF_PARENT_NOT_SPECIFIED";
    }
    DbgPrint(pcVar5);
  }
  if ((undefined **)PTR_LOOP_0001c190 == &PTR_LOOP_0001c190) {
    return uVar7;
  }
  if ((PTR_LOOP_0001c190[0x2c] & 2) == 0) {
    return uVar7;
  }
  if ((byte)PTR_LOOP_0001c190[0x29] < 4) {
    return uVar7;
  }
  FUN_00011088(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),0x11,&DAT_0001bb10);
  return uVar7;
}



/* ================================================================
 * Function: FUN_0001fbf0
 * Address:  0001fbf0
 * ================================================================ */

ulonglong FUN_0001fbf0(undefined8 param_1)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined2 uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 local_48 [8];
  short local_40;
  short local_3e;
  undefined4 local_30 [4];
  uint local_20;
  
  if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
      ((PTR_LOOP_0001c190[0x2c] & 2) != 0)) && (3 < (byte)PTR_LOOP_0001c190[0x29])) {
    FUN_00011088(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),0x12,&DAT_0001bb10);
  }
  plVar3 = (longlong *)(*DAT_0001c830)(DAT_0001ce68,param_1,PTR_DAT_0001c180);
  if (*plVar3 == 0) {
    uVar2 = (*DAT_0001cbf0)(DAT_0001ce68,param_1,0,plVar3);
    uVar4 = (ulonglong)uVar2;
    if ((int)uVar2 < 0) {
      if ((undefined **)PTR_LOOP_0001c190 == &PTR_LOOP_0001c190) {
        return uVar4;
      }
      if ((PTR_LOOP_0001c190[0x2c] & 2) == 0) {
        return uVar4;
      }
      if ((byte)PTR_LOOP_0001c190[0x29] < 2) {
        return uVar4;
      }
      uVar5 = 0x13;
      goto LAB_0001fcb5;
    }
  }
  (*DAT_0001cc28)(DAT_0001ce68);
  uVar2 = FUN_000204ac(param_1);
  uVar4 = (ulonglong)uVar2;
  if ((int)uVar2 < 0) {
    if ((undefined **)PTR_LOOP_0001c190 == &PTR_LOOP_0001c190) {
      return uVar4;
    }
    if ((PTR_LOOP_0001c190[0x2c] & 2) == 0) {
      return uVar4;
    }
    if ((byte)PTR_LOOP_0001c190[0x29] < 2) {
      return uVar4;
    }
    FUN_000110ac(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),0x14,&DAT_0001bb10,uVar2);
    return uVar4;
  }
  FUN_00014c80((ulonglong *)local_30,0,0x14);
  local_30[0] = 0x14;
  uVar2 = (*DAT_0001cbf8)(DAT_0001ce68,*plVar3,local_30);
  pcVar7 = "FALSE";
  uVar4 = (ulonglong)uVar2;
  if (-1 < (int)uVar2) {
    *(ushort *)(plVar3 + 0x1a) = (ushort)local_20 & 4;
    if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
        ((PTR_LOOP_0001c190[0x2c] & 2) != 0)) && (3 < (byte)PTR_LOOP_0001c190[0x29])) {
      pcVar6 = "FALSE";
      if ((local_20 & 4) != 0) {
        pcVar6 = "TRUE";
      }
      FUN_00011278(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),0x15,&DAT_0001bb10,pcVar6);
    }
    pcVar6 = "FALSE";
    if ((short)plVar3[0x1a] != 0) {
      pcVar6 = "TRUE";
    }
    DbgPrint("IsDeviceHighSpeed: %s\n",pcVar6);
  }
  if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
      ((PTR_LOOP_0001c190[0x2c] & 2) != 0)) && (3 < (byte)PTR_LOOP_0001c190[0x29])) {
    pcVar6 = "FALSE";
    if ((local_20 & 1) != 0) {
      pcVar6 = "TRUE";
    }
    FUN_00011278(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),0x16,&DAT_0001bb10,pcVar6);
  }
  if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
      ((PTR_LOOP_0001c190[0x2c] & 2) != 0)) && (3 < (byte)PTR_LOOP_0001c190[0x29])) {
    if ((local_20 & 2) != 0) {
      pcVar7 = "TRUE";
    }
    FUN_00011278(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),0x17,&DAT_0001bb10,pcVar7);
  }
  if ((local_20 & 2) != 0) {
    uVar4 = FUN_0002037c(param_1);
    uVar2 = (uint)uVar4;
    uVar4 = uVar4 & 0xffffffff;
    if ((int)uVar2 < 0) {
      if ((undefined **)PTR_LOOP_0001c190 == &PTR_LOOP_0001c190) {
        return uVar4;
      }
      if ((PTR_LOOP_0001c190[0x2c] & 2) == 0) {
        return uVar4;
      }
      if ((byte)PTR_LOOP_0001c190[0x29] < 2) {
        return uVar4;
      }
      uVar5 = 0x18;
LAB_0001fcb5:
      FUN_000110ac(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),uVar5,&DAT_0001bb10,uVar2);
      return uVar4;
    }
  }
  (*DAT_0001cc00)(DAT_0001ce68,*plVar3,local_48);
  if (local_40 == 0xbd7) {
    DbgPrint("VendorID=0x%04X\n");
    DbgPrint("ProductID=0x%04X\n",local_3e);
    if (local_3e == -0x5ff0) {
      *(undefined2 *)(plVar3 + 8) = 0;
      *(undefined1 *)(plVar3 + 0x2c) = 1;
      if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
          ((PTR_LOOP_0001c190[0x2c] & 2) != 0)) && (3 < (byte)PTR_LOOP_0001c190[0x29])) {
        FUN_00011088(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),0x19,&DAT_0001bb10);
      }
      pcVar7 = "I am a ST133\n";
    }
    else {
      if (local_3e != -0x5fda) {
        DbgPrint("I am UNKNOWN\n");
        uVar4 = 0xc000000d;
        goto LAB_0001ff0e;
      }
      *(undefined1 *)(plVar3 + 0x2c) = 0;
      *(undefined2 *)(plVar3 + 8) = 1;
      if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
          ((PTR_LOOP_0001c190[0x2c] & 2) != 0)) && (3 < (byte)PTR_LOOP_0001c190[0x29])) {
        FUN_00011088(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),0x1a,&DAT_0001bb10);
      }
      pcVar7 = "I am a PIXIS\n";
    }
    DbgPrint(pcVar7);
  }
LAB_0001ff0e:
  if ((((short)plVar3[0x1a] != 0) && ((short)plVar3[8] == 1)) &&
     (cVar1 = FUN_00012074(param_1), cVar1 != '\0')) {
    FUN_00012c4c(*plVar3);
    FUN_00011d64(param_1);
    FUN_0001173c(param_1);
    uVar2 = FUN_00012e9c(param_1);
    uVar4 = (ulonglong)uVar2;
  }
  if (-1 < (int)uVar4) {
    uVar4 = FUN_000113cc((longlong)plVar3);
    uVar4 = uVar4 & 0xffffffff;
  }
  if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
      ((PTR_LOOP_0001c190[0x2c] & 2) != 0)) && (3 < (byte)PTR_LOOP_0001c190[0x29])) {
    FUN_00011088(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),0x1b,&DAT_0001bb10);
  }
  return uVar4;
}



/* ================================================================
 * Function: FUN_00020044
 * Address:  00020044
 * ================================================================ */

undefined8 FUN_00020044(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = (*DAT_0001c830)(DAT_0001ce68,param_1,PTR_DAT_0001c180);
  if (*(short *)(lVar1 + 0x40) == 0) {
    (*DAT_0001c860)(DAT_0001ce68,*(undefined8 *)(lVar1 + 0x140));
  }
  if (*(longlong *)(lVar1 + 0xe8) != 0) {
    (*DAT_0001c860)(DAT_0001ce68);
  }
  if (*(longlong *)(lVar1 + 0xf8) != 0) {
    (*DAT_0001c860)(DAT_0001ce68);
  }
  if (*(longlong *)(lVar1 + 0x100) != 0) {
    (*DAT_0001c860)(DAT_0001ce68);
  }
  return 0;
}



/* ================================================================
 * Function: FUN_000200e4
 * Address:  000200e4
 * ================================================================ */

int FUN_000200e4(undefined8 param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined8 local_res18;
  
  iVar1 = 0;
  lVar4 = 0;
  local_res18 = 0;
  lVar2 = (*DAT_0001c830)(DAT_0001ce68,param_1,PTR_DAT_0001c180);
  if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
      ((PTR_LOOP_0001c190[0x2c] & 4) != 0)) && (3 < (byte)PTR_LOOP_0001c190[0x29])) {
    puVar5 = PTR_LOOP_0001c190;
    pcVar3 = FUN_00011358(param_2);
    FUN_00011278(*(undefined8 *)(puVar5 + 0x18),0x1c,&DAT_0001bb10,pcVar3);
  }
  if (*(short *)(lVar2 + 0x40) == 0) {
    lVar4 = 0;
  }
  else if (*(short *)(lVar2 + 0x40) == 1) {
    lVar4 = 2;
  }
  if (*(short *)(lVar2 + 0xd0) == 0) {
    pcVar3 = "Can\'t Start IoTarget... Low Speed Device Attached\n";
  }
  else {
    if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
        ((PTR_LOOP_0001c190[0x2c] & 4) != 0)) && (3 < (byte)PTR_LOOP_0001c190[0x29])) {
      FUN_00011088(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),0x1d,&DAT_0001bb10);
    }
    iVar1 = (*DAT_0001c738)(DAT_0001ce68,*(undefined8 *)(lVar2 + 0x10 + lVar4 * 8));
    if (-1 < iVar1) goto LAB_000201e6;
    pcVar3 = "Couldn\'t start Io on EP0(2)\n";
  }
  DbgPrint(pcVar3);
LAB_000201e6:
  KeQueryActiveProcessorCount(&local_res18);
  if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
      ((PTR_LOOP_0001c190[0x2c] & 4) != 0)) && (3 < (byte)PTR_LOOP_0001c190[0x29])) {
    FUN_00011088(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),0x1e,&DAT_0001bb10);
  }
  return iVar1;
}



/* ================================================================
 * Function: FUN_00020240
 * Address:  00020240
 * ================================================================ */

undefined8 FUN_00020240(undefined8 param_1,int param_2)

{
  char *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined *puVar4;
  
  lVar3 = 0;
  if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
      ((PTR_LOOP_0001c190[0x2c] & 4) != 0)) && (3 < (byte)PTR_LOOP_0001c190[0x29])) {
    puVar4 = PTR_LOOP_0001c190;
    pcVar1 = FUN_00011358(param_2);
    FUN_00011278(*(undefined8 *)(puVar4 + 0x18),0x1f,&DAT_0001bb10,pcVar1);
  }
  lVar2 = (*DAT_0001c830)(DAT_0001ce68,param_1,PTR_DAT_0001c180);
  if (*(short *)(lVar2 + 0x40) == 0) {
    lVar3 = 0;
  }
  else if (*(short *)(lVar2 + 0x40) == 1) {
    lVar3 = 2;
  }
  if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
      ((PTR_LOOP_0001c190[0x2c] & 4) != 0)) && (3 < (byte)PTR_LOOP_0001c190[0x29])) {
    FUN_00011088(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),0x20,&DAT_0001bb10);
  }
  DbgPrint("Stopping EP0(2)\n");
  if (*(short *)(lVar2 + 0xd0) != 0) {
    (*DAT_0001c740)(DAT_0001ce68,*(undefined8 *)(lVar2 + 0x10 + lVar3 * 8),1);
  }
  if ((*(int *)(lVar2 + 0x130) == 0) && (*(longlong *)(lVar2 + 0xb8) != 0)) {
    KeSetEvent(*(longlong *)(lVar2 + 0xb8),0,0);
  }
  *(undefined4 *)(lVar2 + 0x130) = 1;
  DbgPrint("<--OsrFxEvtDeviceD0Exit\n");
  return 0;
}



/* ================================================================
 * Function: FUN_0002037c
 * Address:  0002037c
 * ================================================================ */

ulonglong FUN_0002037c(undefined8 param_1)

{
  ulonglong uVar1;
  undefined2 uVar2;
  ulonglong uVar3;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_00014c80(&local_30,0,0x1c);
  local_24 = 0;
  local_1c = 0;
  local_30._0_4_ = 0x1c;
  local_18 = 2;
  local_30._4_4_ = 1;
  local_28 = 4;
  local_20 = 1;
  uVar1 = (*DAT_0001c350)(DAT_0001ce68,param_1,&local_30);
  uVar3 = uVar1 & 0xffffffff;
  if ((int)uVar1 < 0) {
    if ((undefined **)PTR_LOOP_0001c190 == &PTR_LOOP_0001c190) {
      return uVar3;
    }
    if ((PTR_LOOP_0001c190[0x2c] & 2) == 0) {
      return uVar3;
    }
    if ((byte)PTR_LOOP_0001c190[0x29] < 2) {
      return uVar3;
    }
    uVar2 = 0x21;
  }
  else {
    FUN_00014c80(&local_48,0,0x14);
    local_3c = 0;
    local_48._0_4_ = 0x14;
    local_48._4_4_ = 5;
    local_40 = 1;
    uVar1 = (*DAT_0001c358)(DAT_0001ce68,param_1,&local_48);
    uVar3 = uVar1 & 0xffffffff;
    if (-1 < (int)uVar1) {
      return uVar1;
    }
    if ((undefined **)PTR_LOOP_0001c190 == &PTR_LOOP_0001c190) {
      return uVar3;
    }
    if ((PTR_LOOP_0001c190[0x2c] & 2) == 0) {
      return uVar3;
    }
    if ((byte)PTR_LOOP_0001c190[0x29] < 2) {
      return uVar3;
    }
    uVar2 = 0x22;
  }
  FUN_000110ac(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),uVar2,&DAT_0001bb10,(int)uVar1);
  return uVar3;
}



/* ================================================================
 * Function: FUN_000204ac
 * Address:  000204ac
 * ================================================================ */

int FUN_000204ac(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  byte bVar4;
  char *pcVar5;
  ulonglong local_58;
  byte local_50;
  int local_4c;
  undefined8 local_40;
  byte local_38;
  undefined8 local_30;
  
  puVar2 = (undefined8 *)(*DAT_0001c830)(DAT_0001ce68,param_1,PTR_DAT_0001c180);
  FUN_00014c80(&local_40,0,0x20);
  local_40._0_4_ = 0x20;
  local_40._4_4_ = 2;
  iVar1 = (*DAT_0001cc30)(DAT_0001ce68,*puVar2,0,&local_40);
  uVar3 = DAT_0001ce68;
  bVar4 = 0;
  if (iVar1 < 0) {
    if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
        ((PTR_LOOP_0001c190[0x2c] & 2) != 0)) && (1 < (byte)PTR_LOOP_0001c190[0x29])) {
      FUN_000110ac(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),0x23,&DAT_0001bb10,iVar1);
    }
  }
  else {
    puVar2[1] = local_30;
    (*DAT_0001cdf0)(uVar3,local_30);
    DbgPrint("Number of USB Pipes = %d\n");
    if (local_38 != 0) {
      do {
        FUN_00014c80(&local_58,0,0x14);
        local_58._0_4_ = 0x14;
        uVar3 = (*DAT_0001cd48)(DAT_0001ce68,puVar2[1],bVar4,&local_58);
        (*DAT_0001cca8)(DAT_0001ce68);
        if (local_4c == 3) {
          if ((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) {
            if (((PTR_LOOP_0001c190[0x2c] & 0x20) != 0) && (3 < (byte)PTR_LOOP_0001c190[0x29])) {
              FUN_000110ac(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),0x24,&DAT_0001bb10,
                           (uint)local_50);
            }
            if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
                ((PTR_LOOP_0001c190[0x2c] & 0x20) != 0)) && (3 < (byte)PTR_LOOP_0001c190[0x29])) {
              pcVar5 = "OUT";
              if (8 < local_50) {
                pcVar5 = "IN";
              }
              FUN_000112d8(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),0x25,&DAT_0001bb10,pcVar5);
            }
          }
          puVar2[(ulonglong)bVar4 + 2] = uVar3;
        }
        bVar4 = bVar4 + 1;
      } while (bVar4 < local_38);
    }
  }
  return iVar1;
}



/* ================================================================
 * Function: FUN_000206a8
 * Address:  000206a8
 * ================================================================ */

void FUN_000206a8(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                 uint param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  byte bVar3;
  longlong lVar4;
  uint *puVar5;
  undefined2 *puVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong ****pppplVar13;
  byte *pbVar14;
  longlong lVar15;
  undefined2 uVar16;
  uint uVar17;
  ulonglong uVar18;
  char *pcVar20;
  longlong **pplVar21;
  undefined1 auStack_208 [32];
  longlong ***local_1e8;
  undefined8 *local_1e0;
  uint *local_1d8;
  longlong *local_1c8;
  longlong *local_1c0;
  longlong ***local_1b8;
  uint *local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  uint local_198 [2];
  longlong local_190;
  longlong local_188;
  uint *local_180;
  undefined2 *local_178;
  uint *local_170;
  undefined8 local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  undefined1 *local_148;
  undefined8 local_140;
  byte *local_138;
  longlong *local_130;
  undefined8 local_128;
  ulonglong local_120;
  longlong ***local_118;
  undefined8 local_110;
  longlong local_108;
  ulonglong local_100;
  undefined8 local_f8;
  longlong local_f0;
  ulonglong local_e8;
  undefined1 local_e0 [8];
  undefined8 local_d8;
  uint local_d0 [2];
  longlong ***local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [8];
  short local_b0;
  ushort local_ae;
  longlong **local_a0;
  undefined1 local_98 [8];
  longlong **local_90;
  longlong **local_88;
  longlong **local_80;
  longlong **local_78;
  longlong **local_70;
  longlong **local_68;
  longlong **local_60;
  undefined1 local_58;
  uint7 uStack_57;
  undefined1 local_50;
  uint7 uStack_4f;
  ulonglong local_48;
  ulonglong uVar19;
  
  local_48 = DAT_0001c100 ^ (ulonglong)auStack_208;
  uVar19 = 0;
  uVar10 = 0;
  uVar18 = 0;
  uVar16 = 0x20;
  if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
      ((PTR_LOOP_0001c190[0x2c] & 0x20) != 0)) && (3 < (byte)PTR_LOOP_0001c190[0x29])) {
    FUN_00011088(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),10,&DAT_00017200);
  }
  uVar11 = (*DAT_0001c6c8)(DAT_0001ce68,param_1);
  puVar12 = (undefined8 *)(*DAT_0001c830)(DAT_0001ce68,uVar11,PTR_DAT_0001c180);
  uVar17 = 0;
  if (param_5 < 0x55006013) {
    if (param_5 != 0x55006012) {
      if (param_5 == 0x55002005) {
        local_188 = 0;
        local_148 = (undefined1 *)0x0;
        if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
            ((PTR_LOOP_0001c190[0x2c] & 0x20) != 0)) && (3 < (byte)PTR_LOOP_0001c190[0x29])) {
          FUN_00011088(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),0x14,&DAT_00017200);
        }
        local_1e8 = &local_a0;
        uVar8 = (*DAT_0001ca48)(DAT_0001ce68,param_2,0,&local_148);
        uVar10 = (*DAT_0001ca60)(DAT_0001ce68,param_2,&local_188);
        uVar8 = uVar8 | uVar10;
        if ((((int)uVar8 < 0) || (local_148 == (undefined1 *)0x0)) || (local_188 == 0)) {
          if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
              ((PTR_LOOP_0001c190[0x2c] & 0x20) != 0)) && (1 < (byte)PTR_LOOP_0001c190[0x29])) {
            uVar16 = 0x15;
            goto LAB_00020b15;
          }
          goto LAB_00021a35;
        }
        _local_58 = (longlong ***)
                    CONCAT71((uint7)CONCAT21(*(undefined2 *)(local_148 + 4),*local_148),0x40);
        local_1d8 = local_d0;
        local_108 = local_188;
        local_1e0 = &local_110;
        local_1e8 = (longlong ***)&local_58;
        local_110 = 2;
        local_100 = param_3 & 0xffffffff;
        uVar8 = (*DAT_0001cc48)(DAT_0001ce68,*puVar12,0,0);
        if ((int)uVar8 < 0) {
          if ((undefined **)PTR_LOOP_0001c190 == &PTR_LOOP_0001c190) goto LAB_00021a12;
          if (((PTR_LOOP_0001c190[0x2c] & 0x20) != 0) && (1 < (byte)PTR_LOOP_0001c190[0x29])) {
            FUN_000110ac(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),0x16,&DAT_00017200,uVar8);
          }
        }
        if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
            ((PTR_LOOP_0001c190[0x2c] & 0x20) != 0)) && (3 < (byte)PTR_LOOP_0001c190[0x29])) {
          uVar16 = 0x17;
LAB_00020f75:
          FUN_00011088(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),uVar16,&DAT_00017200);
        }
      }
      else if (param_5 == 0x5500200a) {
        local_138 = (byte *)0x0;
        local_158 = 0;
        if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
            ((PTR_LOOP_0001c190[0x2c] & 0x20) != 0)) && (3 < (byte)PTR_LOOP_0001c190[0x29])) {
          FUN_00011088(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),0x18,&DAT_00017200);
        }
        local_1e8 = &local_68;
        uVar8 = (*DAT_0001ca48)(DAT_0001ce68,param_2,0,&local_138);
        uVar10 = (*DAT_0001ca60)(DAT_0001ce68,param_2,&local_158);
        uVar8 = uVar8 | uVar10;
        if ((((int)uVar8 < 0) || (local_138 == (byte *)0x0)) || (local_158 == 0)) {
          if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
              ((PTR_LOOP_0001c190[0x2c] & 0x20) != 0)) && (1 < (byte)PTR_LOOP_0001c190[0x29])) {
            uVar16 = 0x19;
            goto LAB_00020b15;
          }
          goto LAB_00021a35;
        }
        _local_50 = (longlong ***)CONCAT71((uint7)*local_138,0xc0);
        local_1d8 = local_198;
        local_f0 = local_158;
        local_1e0 = &local_f8;
        local_1e8 = (longlong ***)&local_50;
        local_f8 = 2;
        local_e8 = param_3 & 0xffffffff;
        uVar8 = (*DAT_0001cc48)(DAT_0001ce68,*puVar12,0,0);
        if ((int)uVar8 < 0) {
          if ((undefined **)PTR_LOOP_0001c190 == &PTR_LOOP_0001c190) goto LAB_00021a12;
          if (((PTR_LOOP_0001c190[0x2c] & 0x20) != 0) && (1 < (byte)PTR_LOOP_0001c190[0x29])) {
            FUN_000110ac(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),0x1a,&DAT_00017200,uVar8);
          }
        }
        if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
            ((PTR_LOOP_0001c190[0x2c] & 0x20) != 0)) && (3 < (byte)PTR_LOOP_0001c190[0x29])) {
          uVar16 = 0x1b;
          goto LAB_00020f75;
        }
      }
      else {
        if (param_5 != 0x5500201c) {
          if (param_5 == 0x55002021) {
            local_140 = 0;
            if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
                ((PTR_LOOP_0001c190[0x2c] & 0x20) != 0)) && (3 < (byte)PTR_LOOP_0001c190[0x29])) {
              FUN_00011088(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),0x23,&DAT_00017200);
            }
            (*DAT_0001cac8)(DAT_0001ce68,param_2);
            if ((*(char *)((longlong)puVar12 + 0x10c) == '\x01') &&
               (iVar9 = (*DAT_0001c6d0)(DAT_0001ce68,puVar12[0x1c],&local_140), -1 < iVar9)) {
              (*DAT_0001ca18)(DAT_0001ce68,local_140,0);
            }
            lVar15 = puVar12[0x12];
            lVar4 = puVar12[0x11];
            (*DAT_0001ca40)(DAT_0001ce68,param_2,puVar12 + 0x22);
            local_1e8 = &local_78;
            uVar8 = (*DAT_0001ca50)(DAT_0001ce68,param_2,lVar15 * lVar4,puVar12 + 9);
            if ((-1 < (int)uVar8) && (puVar12[9] != 0)) {
              uVar10 = (*DAT_0001caa8)(DAT_0001ce68,param_2,puVar12[0x1c]);
              if (-1 < (int)uVar10) {
                *(undefined1 *)((longlong)puVar12 + 0x10c) = 1;
                uVar10 = 0x103;
              }
              param_3 = uVar19;
              uVar8 = uVar10;
              if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
                  (param_3 = uVar18, (PTR_LOOP_0001c190[0x2c] & 0x20) != 0)) &&
                 (3 < (byte)PTR_LOOP_0001c190[0x29])) {
                uVar16 = 0x25;
                param_3 = uVar19;
                goto LAB_00021a02;
              }
              goto LAB_00021a12;
            }
            if (((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
               (((PTR_LOOP_0001c190[0x2c] & 0x20) != 0 && (1 < (byte)PTR_LOOP_0001c190[0x29])))) {
              uVar16 = 0x24;
              goto LAB_00020b15;
            }
          }
          else if (param_5 == 0x55006002) {
            local_1e8 = &local_60;
            local_178 = (undefined2 *)0x0;
            uVar8 = (*DAT_0001ca50)(DAT_0001ce68,param_2,0,&local_178);
            puVar6 = local_178;
            if ((-1 < (int)uVar8) && (local_178 != (undefined2 *)0x0)) {
              if (((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
                 (((PTR_LOOP_0001c190[0x2c] & 0x20) != 0 && (3 < (byte)PTR_LOOP_0001c190[0x29])))) {
                FUN_00011088(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),0x13,&DAT_00017200);
              }
              *puVar6 = 5;
              puVar6[1] = 6;
              puVar6[2] = 1;
              goto LAB_00021a1a;
            }
          }
          else {
            if (param_5 != 0x5500600e) goto LAB_00021126;
            local_1b0 = (uint *)0x0;
            if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
                ((PTR_LOOP_0001c190[0x2c] & 0x20) != 0)) && (3 < (byte)PTR_LOOP_0001c190[0x29])) {
              FUN_00011088(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),0xe,&DAT_00017200);
            }
            local_1e8 = &local_88;
            uVar8 = (*DAT_0001ca50)(DAT_0001ce68,param_2,0,&local_1b0);
            if ((-1 < (int)uVar8) && (local_1b0 != (uint *)0x0)) {
              (*DAT_0001cc00)(DAT_0001ce68,*puVar12,local_b8);
              param_3 = uVar19;
              if (local_b0 != 0xbd7) goto LAB_00021a12;
              if ((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) {
                if (((PTR_LOOP_0001c190[0x2c] & 0x20) != 0) && (3 < (byte)PTR_LOOP_0001c190[0x29]))
                {
                  FUN_000110ac(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),0xf,&DAT_00017200,0xbd7);
                }
                if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
                    ((PTR_LOOP_0001c190[0x2c] & 0x20) != 0)) && (3 < (byte)PTR_LOOP_0001c190[0x29]))
                {
                  FUN_000110ac(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),0x10,&DAT_00017200,
                               (uint)local_ae);
                }
              }
              puVar5 = local_1b0;
              if (local_ae == 0xa010) {
                *(undefined2 *)(puVar12 + 8) = 0;
                if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
                    ((PTR_LOOP_0001c190[0x2c] & 0x20) != 0)) && (3 < (byte)PTR_LOOP_0001c190[0x29]))
                {
                  uVar16 = 0x11;
                  goto LAB_000208f7;
                }
              }
              else if (((local_ae == 0xa026) &&
                       (*(undefined2 *)(puVar12 + 8) = 1,
                       (undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190)) &&
                      (((PTR_LOOP_0001c190[0x2c] & 0x20) != 0 && (3 < (byte)PTR_LOOP_0001c190[0x29])
                       ))) {
                uVar16 = 0x12;
LAB_000208f7:
                FUN_00011088(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),uVar16,&DAT_00017200);
              }
              *puVar5 = (uint)*(ushort *)(puVar12 + 8);
              param_3 = 4;
              uVar8 = 0;
              goto LAB_00021a12;
            }
          }
          goto LAB_00021a35;
        }
        local_168 = 0;
        *(undefined4 *)(puVar12 + 0x26) = 1;
        if (puVar12[9] != 0) {
          do {
            iVar9 = (*DAT_0001c6d0)(DAT_0001ce68,puVar12[0x1c],&local_168);
            if (-1 < iVar9) {
              (*DAT_0001ca18)(DAT_0001ce68,local_168,0);
            }
          } while (iVar9 == 0);
        }
        if (puVar12[0x14] != 0) {
          ObfDereferenceObject();
        }
        if (puVar12[0x15] != 0) {
          ObfDereferenceObject();
        }
        if (puVar12[0x16] != 0) {
          ObfDereferenceObject();
        }
        if (puVar12[0x17] != 0) {
          ObfDereferenceObject();
        }
        puVar12[0x14] = 0;
        puVar12[0x16] = 0;
        puVar12[0x15] = 0;
        puVar12[0x17] = 0;
        *(undefined1 *)(puVar12 + 0xe) = 0;
        puVar12[9] = 0;
        param_3 = uVar18;
        uVar8 = local_198[0];
      }
LAB_00021a12:
      uVar17 = uVar8;
      if (uVar8 == 0x103) goto LAB_00021a45;
LAB_00021a1a:
      (*DAT_0001ca28)(DAT_0001ce68,param_2,uVar17,param_3);
      goto LAB_00021a45;
    }
    local_180 = (uint *)0x0;
    uVar11 = (*DAT_0001cac8)(DAT_0001ce68,param_2);
    if ((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) {
      if (((PTR_LOOP_0001c190[0x2c] & 0x20) != 0) && (3 < (byte)PTR_LOOP_0001c190[0x29])) {
        FUN_00011088(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),0xb,&DAT_00017200);
      }
      if ((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) {
        if (((PTR_LOOP_0001c190[0x2c] & 0x20) != 0) && (3 < (byte)PTR_LOOP_0001c190[0x29])) {
          FUN_000110ac(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),0xc,&DAT_00017200,
                       (uint)*(ushort *)(puVar12 + 0x1a));
        }
        if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
            ((PTR_LOOP_0001c190[0x2c] & 0x20) != 0)) && (3 < (byte)PTR_LOOP_0001c190[0x29])) {
          pcVar20 = "LOW";
          if (*(short *)(puVar12 + 0x1a) != 0) {
            pcVar20 = "HIGH";
          }
          FUN_00011278(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),0xd,&DAT_00017200,pcVar20);
        }
      }
    }
    local_1e8 = &local_80;
    uVar8 = (*DAT_0001ca50)(DAT_0001ce68,param_2,0,&local_180);
    if ((-1 < (int)uVar8) && (local_180 != (uint *)0x0)) {
      *local_180 = (uint)(*(short *)(puVar12 + 0x1a) != 0);
      cVar7 = IoIs32bitProcess(uVar11);
      *(bool *)(puVar12 + 0x27) = cVar7 != '\0';
      param_3 = 4;
      goto LAB_00021a1a;
    }
  }
  else if (param_5 == 0x55006026) {
    local_1a8 = 0;
    local_d8 = 0xfffffffff70f2e80;
    if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
        ((PTR_LOOP_0001c190[0x2c] & 0x20) != 0)) && (3 < (byte)PTR_LOOP_0001c190[0x29])) {
      FUN_00011088(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),0x26,&DAT_00017200);
    }
    local_1e8 = (longlong ***)&local_1b8;
    uVar8 = (*DAT_0001ca50)(DAT_0001ce68,param_2,0,&local_1a8);
    if (((-1 < (int)uVar8) && (local_1a8 != 0)) && (local_1b8 < (longlong ****)0x801)) {
      if ((*(char *)(puVar12 + 0x2c) == '\x01') && (*(short *)(puVar12 + 8) == 0)) {
        local_1e8 = (longlong ***)&local_d8;
        iVar9 = KeWaitForSingleObject(puVar12 + 0x29,0,0,1);
        if (-1 < iVar9) {
          *(undefined1 *)(puVar12 + 0x2c) = 0;
        }
        KeClearEvent(puVar12 + 0x29);
      }
      local_1e8 = local_1b8;
      (*DAT_0001c800)(DAT_0001ce68,puVar12[0x1d],0,local_1a8);
      if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
          ((PTR_LOOP_0001c190[0x2c] & 0x20) != 0)) && (3 < (byte)PTR_LOOP_0001c190[0x29])) {
        uVar16 = 0x27;
LAB_00021a02:
        FUN_00011088(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),uVar16,&DAT_00017200);
        uVar8 = uVar10;
        goto LAB_00021a12;
      }
      goto LAB_00021a1a;
    }
  }
  else if (param_5 == 0x5500602a) {
    local_1a0 = 0;
    local_c0 = 0xfffffffff70f2e80;
    if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
        ((PTR_LOOP_0001c190[0x2c] & 0x20) != 0)) && (3 < (byte)PTR_LOOP_0001c190[0x29])) {
      FUN_00011088(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),0x28,&DAT_00017200);
    }
    local_1e8 = (longlong ***)&local_118;
    uVar8 = (*DAT_0001ca50)(DAT_0001ce68,param_2,0,&local_1a0);
    if (((-1 < (int)uVar8) && (local_1a0 != 0)) && (local_118 < (longlong ****)0x11)) {
      if ((*(char *)(puVar12 + 0x2c) == '\x01') && (*(short *)(puVar12 + 8) == 0)) {
        local_1e8 = (longlong ***)&local_c0;
        iVar9 = KeWaitForSingleObject(puVar12 + 0x29,0,0,1);
        if (-1 < iVar9) {
          *(undefined1 *)(puVar12 + 0x2c) = 0;
        }
        KeClearEvent(puVar12 + 0x29);
      }
      local_1e8 = local_118;
      (*DAT_0001c800)(DAT_0001ce68,puVar12[0x1f],0,local_1a0);
      if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
          ((PTR_LOOP_0001c190[0x2c] & 0x20) != 0)) && (3 < (byte)PTR_LOOP_0001c190[0x29])) {
        uVar16 = 0x29;
LAB_00021706:
        FUN_00011088(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),uVar16,&DAT_00017200);
        uVar17 = 0;
      }
      goto LAB_00021a1a;
    }
  }
  else if (param_5 == 0x5500602e) {
    local_1e8 = &local_90;
    local_130 = (longlong *)0x0;
    uVar8 = (*DAT_0001ca50)(DAT_0001ce68,param_2,0,&local_130);
    plVar1 = local_130;
    if ((-1 < (int)uVar8) && (local_130 != (longlong *)0x0)) {
      if (((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
         (((PTR_LOOP_0001c190[0x2c] & 0x20) != 0 && (3 < (byte)PTR_LOOP_0001c190[0x29])))) {
        FUN_00011088(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),0x2a,&DAT_00017200);
      }
      LOCK();
      lVar15 = puVar12[0xb];
      if (lVar15 == 0) {
        puVar12[0xb] = 0;
        lVar15 = 0;
      }
      UNLOCK();
      *plVar1 = lVar15;
      goto LAB_00021a1a;
    }
  }
  else if (param_5 == 0x55006032) {
    local_190 = 0;
    if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
        ((PTR_LOOP_0001c190[0x2c] & 0x20) != 0)) && (3 < (byte)PTR_LOOP_0001c190[0x29])) {
      FUN_00011088(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),0x2b,&DAT_00017200);
    }
    local_1e8 = (longlong ***)&local_c8;
    uVar8 = (*DAT_0001ca50)(DAT_0001ce68,param_2,0,&local_190);
    if (((-1 < (int)uVar8) && (local_190 != 0)) && (local_c8 < (longlong ****)0x401)) {
      local_1e8 = local_c8;
      (*DAT_0001c800)(DAT_0001ce68,puVar12[0x20],0);
      if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
          ((PTR_LOOP_0001c190[0x2c] & 0x20) != 0)) && (3 < (byte)PTR_LOOP_0001c190[0x29])) {
        uVar16 = 0x2c;
        goto LAB_00021706;
      }
      goto LAB_00021a1a;
    }
  }
  else if (param_5 == 0x5500a015) {
    local_160 = 0;
    local_150 = 0;
    if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
        ((PTR_LOOP_0001c190[0x2c] & 0x20) != 0)) && (3 < (byte)PTR_LOOP_0001c190[0x29])) {
      FUN_00011088(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),0x1e,&DAT_00017200);
    }
    local_1e8 = &local_70;
    uVar8 = (*DAT_0001ca48)(DAT_0001ce68,param_2,0,&local_160);
    uVar10 = (*DAT_0001ca40)(DAT_0001ce68,param_2,&local_150);
    uVar8 = uVar8 | uVar10;
    if ((((int)uVar8 < 0) || (local_160 == 0)) || (local_150 == 0)) {
      if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
          ((PTR_LOOP_0001c190[0x2c] & 0x20) != 0)) && (1 < (byte)PTR_LOOP_0001c190[0x29])) {
        uVar16 = 0x1f;
LAB_00020b15:
        FUN_000110ac(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),uVar16,&DAT_00017200,uVar8);
      }
    }
    else {
      pbVar14 = (byte *)(*DAT_0001c7f0)(DAT_0001ce68,local_150,local_98);
      local_120 = (ulonglong)*pbVar14;
      local_128 = 0x1100000010;
      uVar8 = (*DAT_0001cd20)(DAT_0001ce68,puVar12[1],0,&local_128);
      if (-1 < (int)uVar8) {
        if ((((undefined **)PTR_LOOP_0001c190 == &PTR_LOOP_0001c190) ||
            ((PTR_LOOP_0001c190[0x2c] & 0x20) == 0)) || ((byte)PTR_LOOP_0001c190[0x29] < 4))
        goto LAB_00021a12;
        uVar16 = 0x22;
        goto LAB_00020f75;
      }
      if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
          ((PTR_LOOP_0001c190[0x2c] & 0x20) != 0)) && (1 < (byte)PTR_LOOP_0001c190[0x29]))
      goto LAB_00020b15;
    }
  }
  else {
    if (param_5 != 0x5500a019) {
LAB_00021126:
      param_3 = uVar19;
      uVar17 = 0xc0000010;
      goto LAB_00021a1a;
    }
    local_170 = (uint *)0x0;
    local_1c0 = (longlong *)0x0;
    local_1c8 = (longlong *)0x0;
    pppplVar13 = (longlong ****)(*DAT_0001cac8)(DAT_0001ce68,param_2);
    local_1b8 = (longlong ***)pppplVar13;
    cVar7 = IoIs32bitProcess(pppplVar13);
    if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
        ((PTR_LOOP_0001c190[0x2c] & 0x20) != 0)) && (3 < (byte)PTR_LOOP_0001c190[0x29])) {
      FUN_00011088(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),0x1c,&DAT_00017200);
    }
    local_1e8 = (longlong ***)local_e0;
    pplVar21 = &local_1c8;
    if (cVar7 == '\0') {
      pplVar21 = &local_1c0;
    }
    uVar8 = (*DAT_0001ca48)(DAT_0001ce68,param_2,0,pplVar21);
    local_1e8 = (longlong ***)0x0;
    iVar9 = (*DAT_0001ca50)(DAT_0001ce68,param_2,0,&local_170);
    if (((-1 < (int)uVar8) && (-1 < iVar9)) &&
       ((local_1c0 != (longlong *)0x0 || (local_1c8 != (longlong *)0x0)))) {
      puVar12[0x12] = (ulonglong)*local_170;
      if (cVar7 == '\0') {
        lVar15 = local_1c0[4];
      }
      else {
        lVar15 = local_1c8[2];
      }
      puVar12[0x11] = lVar15;
      if (cVar7 == '\0') {
        lVar15 = local_1c0[4];
      }
      else {
        lVar15 = local_1c8[2];
      }
      puVar12[0x1b] = lVar15;
      if (cVar7 == '\0') {
        bVar3 = *(byte *)((longlong)local_1c0 + 0x3c);
      }
      else {
        bVar3 = *(byte *)((longlong)local_1c8 + 0x2c);
      }
      *(byte *)(puVar12 + 0xc) = bVar3 & 1;
      if (cVar7 == '\0') {
        bVar3 = *(byte *)((longlong)local_1c0 + 0x3c);
      }
      else {
        bVar3 = *(byte *)((longlong)local_1c8 + 0x2c);
      }
      *(byte *)((longlong)puVar12 + 0x61) = bVar3 >> 1 & 1;
      if (cVar7 == '\0') {
        iVar9 = (int)local_1c0[7];
      }
      else {
        iVar9 = (int)local_1c8[5];
      }
      *(int *)(puVar12 + 0x21) = iVar9;
      if (cVar7 == '\0') {
        lVar15 = local_1c0[5];
      }
      else {
        lVar15 = local_1c8[3];
      }
      plVar1 = puVar12 + 0x14;
      puVar12[0x13] = lVar15;
      if (*plVar1 != 0) {
        ObfDereferenceObject(*plVar1);
        *(undefined1 *)(puVar12 + 0xe) = 0;
      }
      cVar7 = IoIs32bitProcess(pppplVar13);
      local_1e0 = (undefined8 *)0x0;
      if (cVar7 == '\0') {
        lVar15 = *local_1c0;
      }
      else {
        lVar15 = (longlong)(int)*local_1c8;
      }
      local_1e8 = (longlong ***)plVar1;
      ObReferenceObjectByHandle(lVar15,0x100000,*(undefined8 *)ExEventObjectType_exref,1);
      plVar1 = puVar12 + 0x16;
      if (*plVar1 != 0) {
        ObfDereferenceObject(*plVar1);
        *(undefined1 *)(puVar12 + 0xe) = 0;
      }
      cVar7 = IoIs32bitProcess(pppplVar13);
      local_1e0 = (undefined8 *)0x0;
      if (cVar7 == '\0') {
        lVar15 = local_1c0[2];
      }
      else {
        lVar15 = (longlong)(int)local_1c8[1];
      }
      local_1e8 = (longlong ***)plVar1;
      ObReferenceObjectByHandle(lVar15,0x100000,*(undefined8 *)ExEventObjectType_exref,1);
      plVar2 = puVar12 + 0x15;
      if (*plVar2 != 0) {
        ObfDereferenceObject(*plVar2);
        *(undefined1 *)(puVar12 + 0xe) = 0;
      }
      cVar7 = IoIs32bitProcess(pppplVar13);
      local_1e0 = (undefined8 *)0x0;
      if (cVar7 == '\0') {
        lVar15 = local_1c0[1];
      }
      else {
        lVar15 = (longlong)*(int *)((longlong)local_1c8 + 4);
      }
      local_1e8 = (longlong ***)plVar2;
      ObReferenceObjectByHandle(lVar15,0x100000,*(undefined8 *)ExEventObjectType_exref,1);
      pppplVar13 = (longlong ****)(puVar12 + 0x17);
      if (*pppplVar13 != (longlong ***)0x0) {
        ObfDereferenceObject(*pppplVar13);
        *(undefined1 *)(puVar12 + 0xe) = 0;
      }
      cVar7 = IoIs32bitProcess(local_1b8);
      local_1e0 = (undefined8 *)0x0;
      if (cVar7 == '\0') {
        lVar15 = local_1c0[3];
      }
      else {
        lVar15 = (longlong)*(int *)((longlong)local_1c8 + 0xc);
      }
      local_1e8 = (longlong ***)pppplVar13;
      uVar8 = ObReferenceObjectByHandle(lVar15,0x100000,*(undefined8 *)ExEventObjectType_exref,1);
      param_3 = uVar18;
      if (-1 < (int)uVar8) {
        KeInitializeEvent(puVar12[0x14],1,0);
        KeInitializeEvent(*plVar1,1,0);
        KeInitializeEvent(*plVar2,1,0);
        KeInitializeEvent(*pppplVar13,1,0);
        *(undefined1 *)(puVar12 + 0xe) = 1;
      }
      goto LAB_00021a12;
    }
    if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
        ((PTR_LOOP_0001c190[0x2c] & 0x20) != 0)) && (1 < (byte)PTR_LOOP_0001c190[0x29])) {
      FUN_000110ac(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),0x1d,&DAT_00017200,uVar8);
    }
  }
LAB_00021a35:
  (*DAT_0001ca18)(DAT_0001ce68,param_2,uVar8);
LAB_00021a45:
  FUN_00014690(local_48 ^ (ulonglong)auStack_208);
  return;
}



/* ================================================================
 * Function: FUN_00022008
 * Address:  00022008
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00022008(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  undefined8 *local_130;
  uint local_128 [2];
  undefined1 local_120 [16];
  ushort local_110 [4];
  undefined1 *local_108;
  undefined8 local_100;
  ulonglong local_f8;
  code *local_f0;
  ulonglong local_d8;
  code *local_d0;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined1 local_98 [112];
  ulonglong local_28;
  
  local_28 = DAT_0001c100 ^ (ulonglong)auStack_158;
  local_110[1] = 100;
  local_108 = local_98;
  local_110[0] = 0;
  _DAT_0001d0e0 = (code *)0x0;
  DAT_0001d0f0 = 0;
  _DAT_0001d100 = 0;
  DAT_0001d108 = 1;
  DAT_0001d0e8 = &DAT_000171e0;
  DAT_0001d109 = 0;
  _DAT_0001d10a = 0;
  _DAT_0001d10c = 0;
  local_128[0] = 0;
  RtlInitUnicodeString(local_120,L"PsGetVersion");
  DAT_0001d0b8 = (code *)MmGetSystemRoutineAddress(local_120);
  RtlInitUnicodeString(local_120);
  DAT_0001d0a0 = (code *)MmGetSystemRoutineAddress(local_120);
  if (DAT_0001d0a0 == (code *)0x0) {
    DAT_0001d0a0 = FUN_000110e8;
    DAT_0001d0c0 = 1;
  }
  else {
    RtlInitUnicodeString(local_120);
    DAT_0001d098 = MmGetSystemRoutineAddress(local_120);
    DAT_0001d0c0 = 2;
    if (DAT_0001d0b8 != (code *)0x0) {
      (*DAT_0001d0b8)(local_128,0,0,0);
    }
    if (5 < local_128[0]) {
      RtlInitUnicodeString(local_120);
      DAT_0001d0b0 = (code *)MmGetSystemRoutineAddress(local_120);
      if (DAT_0001d0b0 != (code *)0x0) {
        RtlInitUnicodeString(local_120);
        DAT_0001d0a8 = MmGetSystemRoutineAddress(local_120);
        DAT_0001d0c0 = 4;
      }
    }
  }
  puVar2 = &DAT_0001d0e0;
  _DAT_0001d100 = 0;
  if (PTR_LOOP_0001c190 != &DAT_0001d0e0) {
    PTR_LOOP_0001c190 = &DAT_0001d0e0;
    if (DAT_0001d0c0 == 4) {
      do {
        local_138 = (undefined8 *)(puVar2 + 0x38);
        *local_138 = 0;
        (*DAT_0001d0b0)(*(undefined8 *)(puVar2 + 8),0,&LAB_00011240,puVar2);
        puVar2 = *(undefined **)(puVar2 + 0x10);
      } while (puVar2 != (undefined *)0x0);
    }
    else if (DAT_0001d0c0 == 2) {
      _DAT_0001d0e0 = FUN_0001f008;
      IoWMIRegistrationControl(&DAT_0001d0e0);
    }
    else {
      (*DAT_0001c5a8)(DAT_0001ce68,param_1,FUN_0001f008,&DAT_0001d0e0);
    }
  }
  FUN_00014c80(&local_f8,0,0x20);
  local_f8._0_4_ = 0x20;
  local_f0 = FUN_0001f384;
  FUN_00014c80(&local_d8,0,0x38);
  local_d0 = FUN_0001f324;
  local_130 = &local_100;
  uVar4 = 0x80000000;
  local_d8._0_4_ = 0x38;
  local_c0 = 1;
  local_bc = 1;
  local_138 = (undefined8 *)0x0;
  uVar3 = param_2;
  iVar1 = (*DAT_0001c908)(DAT_0001ce68,0);
  if (iVar1 < 0) {
    DbgPrint(s_Failed_to_open_Registry_path_00022420);
  }
  else {
    FUN_00011008(local_110,u_NumReaders_00022440,uVar3,uVar4);
    iVar1 = (*DAT_0001c960)(DAT_0001ce68,local_100,local_110,&DAT_0001d120);
    if (iVar1 < 0) {
      DbgPrint(s_Failed_to_Read_NumReaders_00022460);
      _DAT_0001d120 = 1;
    }
    else {
      DbgPrint(s_NumReaders_set_to__d_00022480,_DAT_0001d120);
    }
  }
  local_138 = &local_f8;
  local_130 = (undefined8 *)0x0;
  iVar1 = (*DAT_0001c580)(DAT_0001ce68,param_1,param_2,&local_d8);
  if (iVar1 < 0) {
    if ((((undefined **)PTR_LOOP_0001c190 != &PTR_LOOP_0001c190) &&
        ((PTR_LOOP_0001c190[0x2c] & 1) != 0)) && (1 < (byte)PTR_LOOP_0001c190[0x29])) {
      FUN_000110ac(*(undefined8 *)(PTR_LOOP_0001c190 + 0x18),10,&DAT_0001bb20,iVar1);
    }
    FUN_0001f2b4();
  }
  FUN_00014690(local_28 ^ (ulonglong)auStack_158);
  return;
}



/* ================================================================
 * Function: FUN_000223c8
 * Address:  000223c8
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000223c8(void)

{
  if (((DAT_0001c100 == 0) || (DAT_0001c100 == 0x2b992ddfa232)) &&
     (DAT_0001c100 = (_DAT_fffff78000000320 ^ 0x1c100) & 0xffffffffffff, DAT_0001c100 == 0)) {
    DAT_0001c100 = 0x2b992ddfa232;
  }
  DAT_0001c108 = ~DAT_0001c100;
  return;
}



