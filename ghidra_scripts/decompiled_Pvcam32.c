/* ================================================================
 * Function: FUN_10001000
 * Address:  10001000
 * ================================================================ */

void FUN_10001000(void)

{
  DAT_10042714 = LoadLibraryA(s_ff_dll_1002b160);
  if (DAT_10042714 != (HMODULE)0x0) {
    DAT_100426f0 = GetProcAddress(DAT_10042714,s_pl_ff_init_plugin_1002b168);
    DAT_100426f4 = GetProcAddress(DAT_10042714,s_pl_ff_uninit_plugin_1002b17c);
    DAT_100426f8 = GetProcAddress(DAT_10042714,s_pl_ff_get_accum_capable_1002b190);
    DAT_100426fc = GetProcAddress(DAT_10042714,s_pl_ff_set_paired_mode_1002b1a8);
    DAT_10042700 = GetProcAddress(DAT_10042714,s_pl_ff_get_paired_mode_1002b1c0);
    DAT_10042704 = GetProcAddress(DAT_10042714,s_pl_ff_set_accum_mode_1002b1d8);
    DAT_10042708 = GetProcAddress(DAT_10042714,s_pl_ff_get_accum_mode_1002b1f0);
    DAT_1004270c = GetProcAddress(DAT_10042714,s_pl_ff_set_accum_num_1002b208);
    DAT_10042710 = GetProcAddress(DAT_10042714,s_pl_ff_get_accum_num_1002b21c);
    (*DAT_100426f0)();
  }
  return;
}



/* ================================================================
 * Function: FUN_100010f4
 * Address:  100010f4
 * ================================================================ */

void FUN_100010f4(void)

{
  if (DAT_10042714 != (HMODULE)0x0) {
    if (DAT_100426f4 != (code *)0x0) {
      (*DAT_100426f4)();
    }
    FreeLibrary(DAT_10042714);
  }
  DAT_100426f0 = 0;
  DAT_100426f4 = (code *)0x0;
  DAT_100426f8 = 0;
  DAT_100426fc = 0;
  DAT_10042700 = 0;
  DAT_10042704 = 0;
  DAT_10042708 = 0;
  DAT_1004270c = 0;
  DAT_10042710 = 0;
  DAT_10042714 = (HMODULE)0x0;
  return;
}



/* ================================================================
 * Function: t_pl_ff_get_accum_capable
 * Address:  10001181
 * ================================================================ */

/* __stdcall t_pl_ff_get_accum_capable,8 */

uint t_pl_ff_get_accum_capable(undefined2 param_1,undefined4 param_2)

{
  uint in_EAX;
  uint uVar1;
  undefined4 in_ECX;
  undefined2 uVar2;
  undefined2 extraout_var;
  
                    /* 0x1181  538  _t_pl_ff_get_accum_capable@8 */
  uVar2 = (undefined2)((uint)in_ECX >> 0x10);
  if (DAT_10042714 == 0) {
    in_EAX = FUN_10001000();
    uVar2 = extraout_var;
  }
  if ((DAT_10042714 == 0) || (DAT_100426f8 == (code *)0x0)) {
    uVar1 = in_EAX & 0xffff0000;
  }
  else {
    uVar1 = (*DAT_100426f8)(CONCAT22(uVar2,param_1),param_2);
  }
  return uVar1;
}



/* ================================================================
 * Function: t_pl_ff_set_paired_mode
 * Address:  100011c7
 * ================================================================ */

/* __stdcall t_pl_ff_set_paired_mode,8 */

int t_pl_ff_set_paired_mode(undefined2 param_1,undefined2 param_2)

{
  undefined4 in_EAX;
  ushort uVar2;
  ushort extraout_var;
  int iVar1;
  undefined4 in_ECX;
  undefined2 uVar3;
  undefined2 extraout_var_00;
  
  uVar3 = (undefined2)((uint)in_ECX >> 0x10);
                    /* 0x11c7  544  _t_pl_ff_set_paired_mode@8 */
  uVar2 = (ushort)((uint)in_EAX >> 0x10);
  if (DAT_10042714 == 0) {
    FUN_10001000();
    uVar2 = extraout_var;
    uVar3 = extraout_var_00;
  }
  if ((DAT_10042714 == 0) || (DAT_100426fc == (code *)0x0)) {
    iVar1 = (uint)uVar2 << 0x10;
  }
  else {
    iVar1 = (*DAT_100426fc)(CONCAT22(uVar3,param_1),CONCAT22(uVar2,param_2));
  }
  return iVar1;
}



/* ================================================================
 * Function: t_pl_ff_get_paired_mode
 * Address:  1000120e
 * ================================================================ */

/* __stdcall t_pl_ff_get_paired_mode,8 */

uint t_pl_ff_get_paired_mode(undefined2 param_1,undefined4 param_2)

{
  uint in_EAX;
  uint uVar1;
  undefined4 in_ECX;
  undefined2 uVar2;
  undefined2 extraout_var;
  
                    /* 0x120e  541  _t_pl_ff_get_paired_mode@8 */
  uVar2 = (undefined2)((uint)in_ECX >> 0x10);
  if (DAT_10042714 == 0) {
    in_EAX = FUN_10001000();
    uVar2 = extraout_var;
  }
  if ((DAT_10042714 == 0) || (DAT_10042700 == (code *)0x0)) {
    uVar1 = in_EAX & 0xffff0000;
  }
  else {
    uVar1 = (*DAT_10042700)(CONCAT22(uVar2,param_1),param_2);
  }
  return uVar1;
}



/* ================================================================
 * Function: t_pl_ff_set_accum_mode
 * Address:  10001254
 * ================================================================ */

/* __stdcall t_pl_ff_set_accum_mode,8 */

int t_pl_ff_set_accum_mode(undefined2 param_1,undefined2 param_2)

{
  undefined4 in_EAX;
  ushort uVar2;
  ushort extraout_var;
  int iVar1;
  undefined4 in_ECX;
  undefined2 uVar3;
  undefined2 extraout_var_00;
  
  uVar3 = (undefined2)((uint)in_ECX >> 0x10);
                    /* 0x1254  542  _t_pl_ff_set_accum_mode@8 */
  uVar2 = (ushort)((uint)in_EAX >> 0x10);
  if (DAT_10042714 == 0) {
    FUN_10001000();
    uVar2 = extraout_var;
    uVar3 = extraout_var_00;
  }
  if ((DAT_10042714 == 0) || (DAT_10042704 == (code *)0x0)) {
    iVar1 = (uint)uVar2 << 0x10;
  }
  else {
    iVar1 = (*DAT_10042704)(CONCAT22(uVar3,param_1),CONCAT22(uVar2,param_2));
  }
  return iVar1;
}



/* ================================================================
 * Function: t_pl_ff_get_accum_mode
 * Address:  1000129b
 * ================================================================ */

/* __stdcall t_pl_ff_get_accum_mode,8 */

uint t_pl_ff_get_accum_mode(undefined2 param_1,undefined4 param_2)

{
  uint in_EAX;
  uint uVar1;
  undefined4 in_ECX;
  undefined2 uVar2;
  undefined2 extraout_var;
  
                    /* 0x129b  539  _t_pl_ff_get_accum_mode@8 */
  uVar2 = (undefined2)((uint)in_ECX >> 0x10);
  if (DAT_10042714 == 0) {
    in_EAX = FUN_10001000();
    uVar2 = extraout_var;
  }
  if ((DAT_10042714 == 0) || (DAT_10042708 == (code *)0x0)) {
    uVar1 = in_EAX & 0xffff0000;
  }
  else {
    uVar1 = (*DAT_10042708)(CONCAT22(uVar2,param_1),param_2);
  }
  return uVar1;
}



/* ================================================================
 * Function: t_pl_ff_set_accum_num
 * Address:  100012e1
 * ================================================================ */

/* __stdcall t_pl_ff_set_accum_num,8 */

uint t_pl_ff_set_accum_num(undefined2 param_1,undefined4 param_2)

{
  uint in_EAX;
  uint uVar1;
  undefined4 in_ECX;
  undefined2 uVar2;
  undefined2 extraout_var;
  
                    /* 0x12e1  543  _t_pl_ff_set_accum_num@8 */
  uVar2 = (undefined2)((uint)in_ECX >> 0x10);
  if (DAT_10042714 == 0) {
    in_EAX = FUN_10001000();
    uVar2 = extraout_var;
  }
  if ((DAT_10042714 == 0) || (DAT_1004270c == (code *)0x0)) {
    uVar1 = in_EAX & 0xffff0000;
  }
  else {
    uVar1 = (*DAT_1004270c)(CONCAT22(uVar2,param_1),param_2);
  }
  return uVar1;
}



/* ================================================================
 * Function: t_pl_ff_get_accum_num
 * Address:  10001327
 * ================================================================ */

/* __stdcall t_pl_ff_get_accum_num,8 */

uint t_pl_ff_get_accum_num(undefined2 param_1,undefined4 param_2)

{
  uint in_EAX;
  uint uVar1;
  undefined4 in_ECX;
  undefined2 uVar2;
  undefined2 extraout_var;
  
                    /* 0x1327  540  _t_pl_ff_get_accum_num@8 */
  uVar2 = (undefined2)((uint)in_ECX >> 0x10);
  if (DAT_10042714 == 0) {
    in_EAX = FUN_10001000();
    uVar2 = extraout_var;
  }
  if ((DAT_10042714 == 0) || (DAT_10042710 == (code *)0x0)) {
    uVar1 = in_EAX & 0xffff0000;
  }
  else {
    uVar1 = (*DAT_10042710)(CONCAT22(uVar2,param_1),param_2);
  }
  return uVar1;
}



/* ================================================================
 * Function: pi_cam_close
 * Address:  10001370
 * ================================================================ */

/* __stdcall pi_cam_close,4 */

int pi_cam_close(short param_1)

{
  int iVar1;
  undefined2 extraout_var;
  ushort extraout_var_00;
  int iVar2;
  
                    /* 0x1370  176  _pi_cam_close@4 */
  iVar2 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
  if (iVar2 == 0) {
    pv_set_error_code(0xb6);
    iVar2 = (uint)extraout_var_00 << 0x10;
  }
  else {
    iVar1 = (**(code **)(iVar2 + 0x314))(iVar2);
    if (iVar1 == 0xb) {
      pi_delete_events(param_1);
    }
    (**(code **)(iVar2 + 0x348))(iVar2,0xffff);
    (**(code **)(iVar2 + 0x14))(iVar2);
    *(undefined4 *)(DAT_10043330 + 0x1c + param_1 * 0x2c) = 0;
    iVar2 = CONCAT22(extraout_var,1);
  }
  return iVar2;
}



/* ================================================================
 * Function: pi_cam_get_ccs_mem
 * Address:  100013f6
 * ================================================================ */

/* __stdcall pi_cam_get_ccs_mem,8 */

undefined4 pi_cam_get_ccs_mem(undefined4 param_1,undefined2 *param_2)

{
                    /* 0x13f6  177  _pi_cam_get_ccs_mem@8 */
  *param_2 = 0;
  return CONCAT22((short)((uint)param_2 >> 0x10),1);
}



/* ================================================================
 * Function: pi_cam_open
 * Address:  10001409
 * ================================================================ */

/* __stdcall pi_cam_open,8 */

int pi_cam_open(undefined4 param_1,short param_2)

{
  undefined4 uVar1;
  int iVar2;
  ushort extraout_var;
  undefined1 local_8 [4];
  
                    /* 0x1409  180  _pi_cam_open@8 */
  uVar1 = FUN_1002540c(*(undefined4 *)(DAT_10043330 + 0x18 + param_2 * 0x2c),0x14,local_8);
  *(undefined4 *)(DAT_10043330 + 0x1c + param_2 * 0x2c) = uVar1;
  if (*(int *)(DAT_10043330 + 0x1c + param_2 * 0x2c) == 0) {
    pv_set_error_code(0xb7);
    iVar2 = (uint)extraout_var << 0x10;
  }
  else {
    iVar2 = *(int *)(DAT_10043330 + 0x1c + param_2 * 0x2c);
    iVar2 = (**(code **)(iVar2 + 0x314))(iVar2);
    if (iVar2 == 0xb) {
      iVar2 = pi_create_events(param_2);
    }
    iVar2 = CONCAT22((short)((uint)iVar2 >> 0x10),1);
  }
  return iVar2;
}



/* ================================================================
 * Function: pi_cam_uninit_comm
 * Address:  1000149b
 * ================================================================ */

/* __stdcall pi_cam_uninit_comm,4 */

undefined4 pi_cam_uninit_comm(short param_1)

{
  int iVar1;
  ushort extraout_var;
  
                    /* 0x149b  181  _pi_cam_uninit_comm@4 */
  iVar1 = param_1 * 0x2c;
  if (*(short *)(DAT_10043330 + 6 + iVar1) != 0) {
    iVar1 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
    if (iVar1 == 0) {
      pv_set_error_code(0xb6);
      return (uint)extraout_var << 0x10;
    }
    (**(code **)(iVar1 + 0x348))(iVar1,0xffff);
    iVar1 = (**(code **)(iVar1 + 0x14))(iVar1);
    *(undefined4 *)(DAT_10043330 + 0x1c + param_1 * 0x2c) = 0;
  }
  return CONCAT22((short)((uint)iVar1 >> 0x10),1);
}



/* ================================================================
 * Function: pi_cam_get_reads
 * Address:  1000151d
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* __stdcall pi_cam_get_reads,4 */

undefined4 pi_cam_get_reads(short param_1)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined2 extraout_var;
  void *pvVar5;
  void *extraout_ECX;
  undefined2 local_a8;
  undefined2 local_a4;
  double local_98;
  int local_90;
  double local_8c;
  undefined2 local_84;
  void *local_80;
  void *local_7c [14];
  int local_44;
  undefined1 local_40 [32];
  int local_20;
  int local_1c;
  undefined4 local_8;
  
                    /* 0x151d  178  _pi_cam_get_reads@4 */
  local_84 = 1;
  if (*(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c) == 0) {
    pv_set_error_code(0xb6);
    local_84 = 0;
    uVar1 = extraout_var;
  }
  else {
    local_90 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
    (**(code **)(local_90 + 0x34))(local_90,0xd6,&local_44);
    if (local_44 == 1) {
      *(undefined2 *)((int)DAT_10043338 + param_1 * 0x110 + 0x12) = 1;
    }
    else {
      *(undefined2 *)((int)DAT_10043338 + param_1 * 0x110 + 0x12) = 0;
    }
    (**(code **)(local_90 + 0x34))(local_90,0x81,&local_44);
    pvVar5 = (void *)((int)DAT_10043338 + param_1 * 0x110);
    FUN_100254c9(pvVar5,0x81,local_44,pvVar5,0x11);
    pvVar5 = DAT_10043338;
    *(undefined4 *)((int)DAT_10043338 + param_1 * 0x110 + 0x18) = 0xffffffff;
    iVar2 = FUN_1002548b(pvVar5,local_90,0xe0,0);
    if (iVar2 == 0) {
      *(undefined2 *)((int)DAT_10043338 + param_1 * 0x110 + 0x1c) = 0;
    }
    else {
      *(undefined2 *)((int)DAT_10043338 + param_1 * 0x110 + 0x1c) = 3;
    }
    (**(code **)(local_90 + 0x30))(local_90,0x41,&local_8c);
    local_8c = local_8c * _DAT_100260d0;
    (**(code **)(local_90 + 0x30))(local_90,0x3f,&local_98);
    local_98 = local_98 * _DAT_100260d0;
    uVar1 = ftol();
    *(undefined2 *)((int)DAT_10043338 + param_1 * 0x110 + 0x1e) = uVar1;
    uVar1 = ftol();
    *(undefined2 *)((int)DAT_10043338 + param_1 * 0x110 + 0x20) = uVar1;
    (**(code **)(local_90 + 0x30))(local_90,0x40,&local_8c);
    local_8c = local_8c * _DAT_100260d0;
    (**(code **)(local_90 + 0x30))(local_90,0x3e,&local_98);
    local_98 = local_98 * _DAT_100260d0;
    uVar1 = ftol();
    *(undefined2 *)((int)DAT_10043338 + param_1 * 0x110 + 0x22) = uVar1;
    uVar1 = ftol();
    *(undefined2 *)((int)DAT_10043338 + param_1 * 0x110 + 0x24) = uVar1;
    *(undefined2 *)((int)DAT_10043338 + param_1 * 0x110 + 0x26) = 0;
    *(undefined2 *)((int)DAT_10043338 + param_1 * 0x110 + 0x28) = 0;
    *(undefined2 *)((int)DAT_10043338 + param_1 * 0x110 + 0x2a) = 0;
    pvVar5 = DAT_10043338;
    *(undefined2 *)((int)DAT_10043338 + param_1 * 0x110 + 0x2c) = 0;
    iVar2 = FUN_1002548b(pvVar5,local_90,0x8b,local_7c);
    if (iVar2 == 0) {
      *(undefined2 *)((int)DAT_10043338 + param_1 * 0x110 + 0x2e) = 0;
      *(undefined2 *)((int)DAT_10043338 + param_1 * 0x110 + 0x30) = 0;
    }
    else {
      uVar1 = ftol();
      *(undefined2 *)((int)DAT_10043338 + param_1 * 0x110 + 0x2e) = uVar1;
      uVar1 = ftol();
      *(undefined2 *)((int)DAT_10043338 + param_1 * 0x110 + 0x30) = uVar1;
    }
    uVar3 = pi_SetupSpdTable(param_1,(short *)((int)DAT_10043338 + param_1 * 0x110 + 0x32));
    if ((uVar3 & 0xffff) == 0) {
      *(undefined2 *)((int)DAT_10043338 + param_1 * 0x110 + 0x32) = 0;
    }
    uVar1 = (**(code **)(local_90 + 0x300))(local_90);
    *(undefined2 *)((int)DAT_10043338 + 0x34 + param_1 * 0x110) = uVar1;
    iVar2 = FUN_1002548b((void *)(param_1 * 0x110),local_90,0xdc,0);
    if (iVar2 == 0) {
      *(undefined2 *)((int)DAT_10043338 + param_1 * 0x110 + 0x44) = 0;
    }
    else {
      *(undefined2 *)((int)DAT_10043338 + param_1 * 0x110 + 0x44) = 1;
    }
    *(undefined2 *)((int)DAT_10043338 + param_1 * 0x110 + 0x46) = 1;
    *(undefined2 *)((int)DAT_10043338 + param_1 * 0x110 + 0x48) = 1;
    *(undefined2 *)((int)DAT_10043338 + param_1 * 0x110 + 0x4a) = 0;
    *(undefined2 *)((int)DAT_10043338 + param_1 * 0x110 + 0x5a) = 0;
    *(undefined2 *)((int)DAT_10043338 + param_1 * 0x110 + 0x5e) = 0;
    *(undefined2 *)((int)DAT_10043338 + param_1 * 0x110 + 0x56) = 0;
    *(undefined2 *)((int)DAT_10043338 + param_1 * 0x110 + 0x14) = 0;
    *(undefined2 *)((int)DAT_10043338 + param_1 * 0x110 + 0x58) = 0;
    pvVar5 = DAT_10043338;
    *(undefined2 *)((int)DAT_10043338 + param_1 * 0x110 + 0x5c) = 0;
    iVar2 = FUN_1002548b(pvVar5,local_90,0x55,local_7c);
    if (iVar2 != 0) {
      local_80 = (void *)0x0;
      pvVar5 = extraout_ECX;
      while (local_80 < local_7c[0]) {
        FUN_10025449(local_80,local_90,0x55,local_80,&local_8);
        switch(local_8) {
        case 2:
          *(undefined2 *)((int)DAT_10043338 + param_1 * 0x110 + 0x14) = 1;
          break;
        case 3:
          *(undefined2 *)((int)DAT_10043338 + param_1 * 0x110 + 0x5e) = 1;
          break;
        case 4:
          *(undefined2 *)((int)DAT_10043338 + param_1 * 0x110 + 0x56) = 1;
          break;
        case 8:
          *(undefined2 *)((int)DAT_10043338 + param_1 * 0x110 + 0x5a) = 1;
        }
        pvVar5 = (void *)((int)local_80 + 1);
        local_80 = pvVar5;
      }
      iVar2 = FUN_1002548b(pvVar5,local_90,0xe0,local_40);
      if (iVar2 == 0) {
        local_20 = 0;
        local_1c = 0x3ff00000;
      }
      uVar4 = ftol();
      switch(uVar4) {
      case 1:
        if ((local_20 == 0) && (local_1c == 0x40000000)) {
          local_a4 = 2;
        }
        else {
          local_a4 = 0;
        }
        *(undefined2 *)(DAT_10043334 + 4 + param_1 * 0x24) = local_a4;
        break;
      case 2:
        if ((local_20 == 0) && (local_1c == 0x40000000)) {
          local_a8 = 3;
        }
        else {
          local_a8 = 1;
        }
        *(undefined2 *)(DAT_10043334 + 4 + param_1 * 0x24) = local_a8;
        break;
      case 3:
        *(undefined2 *)(DAT_10043334 + 4 + param_1 * 0x24) = 9;
        break;
      case 4:
        *(undefined2 *)(DAT_10043334 + 4 + param_1 * 0x24) = 8;
        break;
      case 8:
        *(undefined2 *)(DAT_10043334 + 4 + param_1 * 0x24) = 10;
      }
    }
    *(undefined2 *)(DAT_10043330 + 6 + param_1 * 0x2c) = 1;
    *(undefined2 *)((int)DAT_10043338 + param_1 * 0x110 + 0x10c) = 0;
    *(undefined2 *)((int)DAT_10043338 + param_1 * 0x110 + 0x36) = 2;
    pv_cam_set_pmode_capabilities(param_1);
    uVar4 = pi_convert_timing_enums(param_1);
    uVar1 = (undefined2)((uint)uVar4 >> 0x10);
  }
  return CONCAT22(uVar1,local_84);
}



/* ================================================================
 * Function: pi_convert_timing_enums
 * Address:  10001c8b
 * ================================================================ */

/* __stdcall pi_convert_timing_enums,4 */

undefined4 pi_convert_timing_enums(short param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_a0;
  int local_9c [14];
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  undefined4 local_48;
  uint local_44 [14];
  int local_c;
  ushort local_8;
  undefined2 uStack_6;
  
                    /* 0x1c8b  196  _pi_convert_timing_enums@4 */
  local_c = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
  local_a0 = 0;
  _local_8 = CONCAT22(uStack_6,(ushort)(local_c != 0));
  if ((local_c != 0) != 0) {
    iVar1 = (**(code **)(local_c + 0x54))(local_c,0x55,local_44);
    local_a0 = 0;
    if (iVar1 != 0) {
      local_a0 = 0;
      local_5c = (uint)local_5c._2_2_ << 0x10;
      local_60 = (uint)local_60._2_2_ << 0x10;
      local_54 = (uint)local_54._2_2_ << 0x10;
      local_48 = (uint)local_48._2_2_ << 0x10;
      local_64 = (uint)local_64._2_2_ << 0x10;
      for (local_4c = 0; local_4c < (int)local_44[0]; local_4c = local_4c + 1) {
        if (1 < local_44[0]) {
          (**(code **)(local_c + 0x5c))(local_c,0x55,local_4c,&local_50);
          (**(code **)(local_c + 0x24))(local_c,0x55,local_50);
        }
        (**(code **)(local_c + 0x54))(local_c,0x7a,local_9c);
        for (local_58 = 0; local_58 < local_9c[0]; local_58 = local_58 + 1) {
          (**(code **)(local_c + 0x5c))(local_c,0x7a,local_58,&local_50);
          switch(local_50) {
          case 1:
          case 0x14:
            if ((local_5c & 0xffff) == 0) {
              *(undefined4 *)(DAT_10043338 + param_1 * 0x110 + 0xb8 + local_a0 * 4) = 0;
              *(undefined4 *)(DAT_10043338 + param_1 * 0x110 + 0xb8 + (local_a0 + 1) * 4) = 5;
              local_a0 = local_a0 + 2;
              local_5c = CONCAT22(local_5c._2_2_,1);
            }
            break;
          case 3:
          case 0x16:
          case 0x19:
          case 0x1e:
            if ((local_54 & 0xffff) == 0) {
              *(undefined4 *)(DAT_10043338 + param_1 * 0x110 + 0xb8 + local_a0 * 4) = 1;
              local_a0 = local_a0 + 1;
              local_54 = CONCAT22(local_54._2_2_,1);
            }
            break;
          case 0x15:
          case 0x17:
            if ((local_60 & 0xffff) == 0) {
              *(undefined4 *)(DAT_10043338 + param_1 * 0x110 + 0xb8 + local_a0 * 4) = 3;
              local_a0 = local_a0 + 1;
              local_60 = CONCAT22(local_60._2_2_,1);
            }
            break;
          case 0x18:
          case 0x1d:
            if ((local_48 & 0xffff) == 0) {
              *(undefined4 *)(DAT_10043338 + param_1 * 0x110 + 0xb8 + local_a0 * 4) = 2;
              local_a0 = local_a0 + 1;
              local_48 = CONCAT22(local_48._2_2_,1);
            }
            break;
          case 0x1a:
            if ((local_64 & 0xffff) == 0) {
              *(undefined4 *)(DAT_10043338 + param_1 * 0x110 + 0xb8 + local_a0 * 4) = 6;
              local_a0 = local_a0 + 1;
              local_64 = CONCAT22(local_64._2_2_,1);
            }
          }
        }
      }
      if (0 < local_a0) {
        _local_8 = CONCAT22(uStack_6,1);
      }
      if (1 < local_44[0]) {
        uVar2 = ftol();
        (**(code **)(local_c + 0x24))(local_c,0x55,uVar2);
      }
      *(int *)(DAT_10043338 + 0x108 + param_1 * 0x110) = local_a0;
    }
  }
  return CONCAT22((short)((uint)local_a0 >> 0x10),local_8);
}



/* ================================================================
 * Function: pi_cam_get_rws
 * Address:  10001ff8
 * ================================================================ */

/* __stdcall pi_cam_get_rws,4 */

bool pi_cam_get_rws(short param_1)

{
  int iVar1;
  bool bVar2;
  undefined2 local_8 [2];
  
                    /* 0x1ff8  179  _pi_cam_get_rws@4 */
  bVar2 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c) == 0;
  if (bVar2) {
    pv_set_error_code(0xb6);
  }
  else {
    iVar1 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
    (**(code **)(iVar1 + 0x34))(iVar1,0x39,local_8);
    *(undefined2 *)(DAT_10043334 + 0x14 + param_1 * 0x24) = local_8[0];
    (**(code **)(iVar1 + 0x34))(iVar1,0x36,local_8);
    *(undefined2 *)(DAT_10043334 + 0x1e + param_1 * 0x24) = local_8[0];
    (**(code **)(iVar1 + 0x34))(iVar1,0x38,local_8);
    *(undefined2 *)(DAT_10043334 + 0x1a + param_1 * 0x24) = local_8[0];
    (**(code **)(iVar1 + 0x34))(iVar1,0x35,local_8);
    *(undefined2 *)(DAT_10043334 + 0x1c + param_1 * 0x24) = local_8[0];
    (**(code **)(iVar1 + 0x34))(iVar1,0x37,local_8);
    *(undefined2 *)(DAT_10043334 + 0x18 + param_1 * 0x24) = local_8[0];
    (**(code **)(iVar1 + 0x34))(iVar1,0x3a,local_8);
    *(undefined2 *)(DAT_10043334 + 0x16 + param_1 * 0x24) = local_8[0];
  }
  return !bVar2;
}



/* ================================================================
 * Function: pi_cam_get_controller
 * Address:  10002129
 * ================================================================ */

undefined4 pi_cam_get_controller(short param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 local_8;
  ushort extraout_var;
  
                    /* 0x2129  144  pi_cam_get_controller */
  local_8 = 0;
  uVar1 = pl_cam_check(param_1);
  if ((uVar1 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else {
    if ((*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 1) &&
       (*(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c) != 0)) {
      iVar3 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
      *param_2 = iVar3;
      local_8 = 1;
    }
    else {
      pv_set_error_code(0xb6);
      iVar3 = (uint)extraout_var << 0x10;
    }
    uVar2 = CONCAT22((short)((uint)iVar3 >> 0x10),local_8);
  }
  return uVar2;
}



/* ================================================================
 * Function: pl_cam_check
 * Address:  100021b0
 * ================================================================ */

int pl_cam_check(short param_1)

{
  ushort extraout_var;
  int iVar1;
  ushort extraout_var_00;
  
                    /* 0x21b0  27  pl_cam_check */
  pv_set_error_code(0);
  if (DAT_10043328 == 0) {
    pv_set_error_code(0xc3);
    iVar1 = (uint)extraout_var << 0x10;
  }
  else if (((param_1 < 0) || (DAT_1004332a <= param_1)) ||
          (*(short *)(DAT_10043330 + 6 + param_1 * 0x2c) != 1)) {
    pv_set_error_code(0x74);
    iVar1 = (uint)extraout_var_00 << 0x10;
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}



/* ================================================================
 * Function: pl_cam_close
 * Address:  10002219
 * ================================================================ */

int pl_cam_close(short param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  
                    /* 0x2219  28  pl_cam_close */
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    iVar3 = 0;
  }
  else {
    if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
      pm_cam_close(param_1);
    }
    else {
      pi_cam_close(param_1);
    }
    *(undefined2 *)(&DAT_10045000 + param_1 * 2) = 0;
    *(undefined2 *)(DAT_10043330 + 6 + param_1 * 0x2c) = 0;
    *(undefined2 *)(DAT_10043330 + 4 + param_1 * 0x2c) = 0xffff;
    *(undefined2 *)(DAT_10043330 + 8 + param_1 * 0x2c) = 0;
    *(undefined2 *)(DAT_10043330 + 10 + param_1 * 0x2c) = 0;
    *(undefined2 *)(DAT_10043330 + 0x22 + param_1 * 0x2c) = 0;
    *(undefined4 *)(DAT_10043330 + 0xc + param_1 * 0x2c) = 0;
    *(undefined2 *)(DAT_10043330 + 0x20 + param_1 * 0x2c) = 0;
    sVar1 = pl_error_code();
    if (sVar1 == 0) {
      iVar3 = 1;
    }
    else {
      iVar3 = (uint)(ushort)(sVar1 >> 0xf) << 0x10;
    }
  }
  return iVar3;
}



/* ================================================================
 * Function: pl_cam_get_diags
 * Address:  10002315
 * ================================================================ */

uint pl_cam_get_diags(short param_1)

{
  short sVar1;
  uint uVar2;
  
                    /* 0x2315  29  pl_cam_get_diags */
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else {
    sVar1 = *(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c);
    if (sVar1 == 0) {
      uVar2 = pm_cam_get_diags(param_1);
    }
    else {
      uVar2 = CONCAT22(sVar1 >> 0xf,1);
    }
  }
  return uVar2;
}



/* ================================================================
 * Function: pl_cam_get_total
 * Address:  10002365
 * ================================================================ */

bool pl_cam_get_total(undefined2 *param_1)

{
  bool bVar1;
  
                    /* 0x2365  31  pl_cam_get_total */
  pv_set_error_code(0);
  bVar1 = DAT_10043328 != 0;
  if (bVar1) {
    *param_1 = DAT_1004332a;
  }
  else {
    pv_set_error_code(0xc3);
  }
  return bVar1;
}



/* ================================================================
 * Function: pl_cam_get_name
 * Address:  1000239f
 * ================================================================ */

int pl_cam_get_name(short param_1,char *param_2)

{
  ushort extraout_var;
  int iVar1;
  ushort extraout_var_00;
  char *pcVar2;
  
                    /* 0x239f  30  pl_cam_get_name */
  pv_set_error_code(0);
  if (DAT_10043328 == 0) {
    pv_set_error_code(0xc3);
    iVar1 = (uint)extraout_var << 0x10;
  }
  else if ((param_1 < 0) || (DAT_1004332a <= param_1)) {
    pv_set_error_code(0x80);
    iVar1 = (uint)extraout_var_00 << 0x10;
  }
  else {
    pcVar2 = strncpy(param_2,*(char **)(DAT_10043330 + param_1 * 0x2c),0x20);
    iVar1 = CONCAT22((short)((uint)pcVar2 >> 0x10),1);
  }
  return iVar1;
}



/* ================================================================
 * Function: pl_cam_open
 * Address:  10002412
 * ================================================================ */

int pl_cam_open(char *param_1,short *param_2,short param_3)

{
  ushort extraout_var;
  ushort extraout_var_00;
  int iVar1;
  ushort extraout_var_01;
  ushort extraout_var_02;
  ushort extraout_var_03;
  uint uVar2;
  short local_10;
  short local_c;
  int local_8;
  
                    /* 0x2412  32  pl_cam_open */
  local_c = -1;
  pv_set_error_code(0);
  if (DAT_10043328 == 0) {
    pv_set_error_code(0xc3);
    iVar1 = (uint)extraout_var << 0x10;
  }
  else if (param_3 == 0) {
    local_10 = -1;
    for (local_8 = 0; local_8 < DAT_1004332a; local_8 = local_8 + 1) {
      iVar1 = strcmp(param_1,*(char **)(DAT_10043330 + local_8 * 0x2c));
      if (iVar1 == 0) {
        local_10 = (short)local_8;
        break;
      }
    }
    if (local_10 == -1) {
      pv_set_error_code(0x81);
      iVar1 = (uint)extraout_var_01 << 0x10;
    }
    else if (*(short *)(DAT_10043330 + 6 + local_10 * 0x2c) == 0) {
      if (*(short *)(DAT_10043330 + 0x14 + local_10 * 0x2c) == 0) {
        local_c = pm_cam_open(param_1);
        if (local_c == -1) {
          return (uint)extraout_var_03 << 0x10;
        }
      }
      else {
        uVar2 = pi_cam_open(param_1,local_10);
        if ((uVar2 & 0xffff) == 0) {
          return 0;
        }
      }
      *(undefined2 *)(&DAT_10045000 + local_10 * 2) = 1;
      *(undefined2 *)(DAT_10043330 + 6 + local_10 * 0x2c) = 1;
      *(short *)(DAT_10043330 + 4 + local_10 * 0x2c) = local_c;
      *(undefined2 *)(DAT_10043330 + 8 + local_10 * 0x2c) = 0;
      *(undefined2 *)(DAT_10043330 + 10 + local_10 * 0x2c) = 0;
      *(undefined2 *)(DAT_10043330 + 0x22 + local_10 * 0x2c) = 0;
      *(undefined4 *)(DAT_10043330 + 0xc + local_10 * 0x2c) = 0;
      *(undefined4 *)(DAT_10043330 + 0x10 + local_10 * 0x2c) = DAT_1004333c;
      *(undefined2 *)(DAT_10043330 + 0x20 + local_10 * 0x2c) = 0;
      *(undefined2 *)(DAT_10043330 + 0x24 + local_10 * 0x2c) = 0;
      *(undefined2 *)(DAT_10043330 + 0x26 + local_10 * 0x2c) = 0;
      *(undefined2 *)(DAT_10043330 + 0x28 + local_10 * 0x2c) = 1;
      *(undefined2 *)(DAT_10043330 + 0x2a + local_10 * 0x2c) = 0;
      if ((*(short *)(DAT_10043330 + 0x14 + local_10 * 0x2c) == 0) &&
         (uVar2 = pm_cam_post_open_init(local_10,local_c), (uVar2 & 0xffff) == 0)) {
        iVar1 = 0;
      }
      else {
        *param_2 = local_10;
        uVar2 = pv_cam_get_reads(local_10);
        if ((uVar2 & 0xffff) == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = 1;
        }
      }
    }
    else {
      pv_set_error_code(0x75);
      iVar1 = (uint)extraout_var_02 << 0x10;
    }
  }
  else {
    pv_set_error_code(0xaa);
    iVar1 = (uint)extraout_var_00 << 0x10;
  }
  return iVar1;
}



/* ================================================================
 * Function: pm_cam_close
 * Address:  100026b0
 * ================================================================ */

/* __stdcall pm_cam_close,4 */

bool pm_cam_close(short param_1)

{
  short sVar1;
  
                    /* 0x26b0  279  _pm_cam_close@4 */
  sVar1 = pd_cam_close(*(short *)(DAT_10043330 + 4 + param_1 * 0x2c));
  if (sVar1 != 0) {
    pv_set_error_code(sVar1);
  }
  return sVar1 == 0;
}



/* ================================================================
 * Function: pm_cam_get_ccs_mem
 * Address:  100026f1
 * ================================================================ */

/* WARNING: Removing unreachable block (ram,0x10002725) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffff4 : 0x10002750 */
/* WARNING: Removing unreachable block (ram,0x1000277d) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* __stdcall pm_cam_get_ccs_mem,8 */

undefined4 pm_cam_get_ccs_mem(short param_1,ushort *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  byte local_10;
  undefined1 local_f;
  undefined1 uStack_e;
  undefined1 uStack_d;
  undefined1 uStack_c;
  undefined1 local_b;
  undefined2 local_8;
  undefined2 uStack_6;
  
                    /* 0x26f1  281  _pm_cam_get_ccs_mem@8 */
  _local_8 = CONCAT22(uStack_6,6);
  local_10 = 0x26;
  local_f = 0x24;
  uStack_e = 0x37;
  uStack_d = 0x28;
  uStack_c = 0;
  local_b = 3;
  local_b = 3;
  uStack_c = 0;
  uStack_d = 0x28;
  uStack_e = 0x37;
  local_f = 0x24;
  local_10 = 0x26;
  uVar1 = pm_cam_write_read(param_1,0x3f,6,(char *)&local_10,&local_10);
  if ((uVar1 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else {
    puVar3 = (ushort *)(CONCAT12(uStack_c,CONCAT11(uStack_d,uStack_e)) & 0xff);
    *param_2 = CONCAT11(uStack_e,local_f) << 8 | (ushort)puVar3;
    if (local_10 < 6) {
      *param_2 = 0x2000;
      puVar3 = param_2;
    }
    uVar2 = CONCAT22((short)((uint)puVar3 >> 0x10),1);
  }
  return uVar2;
}



/* ================================================================
 * Function: pm_cam_get_diags
 * Address:  10002804
 * ================================================================ */

/* WARNING: Removing unreachable block (ram,0x1000283a) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffff3 : 0x10002866 */
/* WARNING: Removing unreachable block (ram,0x10002892) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* __stdcall pm_cam_get_diags,4 */

uint pm_cam_get_diags(short param_1)

{
  uint uVar1;
  ushort extraout_var;
  ushort extraout_var_00;
  ushort extraout_var_01;
  ushort extraout_var_02;
  ushort extraout_var_03;
  ushort extraout_var_04;
  ushort extraout_var_05;
  ushort extraout_var_06;
  ushort extraout_var_07;
  ushort extraout_var_08;
  ushort extraout_var_09;
  ushort extraout_var_10;
  ushort extraout_var_11;
  ushort extraout_var_12;
  ushort extraout_var_13;
  ushort extraout_var_14;
  ushort extraout_var_15;
  ushort extraout_var_16;
  ushort extraout_var_17;
  ushort extraout_var_18;
  ushort extraout_var_19;
  ushort extraout_var_20;
  ushort extraout_var_21;
  ushort extraout_var_22;
  ushort extraout_var_23;
  ushort extraout_var_24;
  ushort extraout_var_25;
  char local_10 [8];
  undefined1 local_8;
  undefined1 uStack_7;
  
                    /* 0x2804  282  _pm_cam_get_diags@4 */
  local_8 = 5;
  uStack_7 = 0;
  builtin_strncpy(local_10,"&\x1d(",4);
  local_10[4] = 6;
  local_10[5] = 0;
  uStack_7 = 0;
  local_8 = 5;
  local_10[5] = 0;
  local_10[4] = 6;
  uVar1 = pm_cam_write_read(param_1,0x3f,5,local_10,local_10);
  if ((uVar1 & 0xffff) == 0) {
    uVar1 = 0;
  }
  else if (((local_10[2] == 0 && (local_10[3] & 0xfeU) == 0) && (local_10[4] & 0xfU) == 0) &&
           local_10[5] == 0) {
    uVar1 = 1;
  }
  else {
    pv_set_error_code(1);
    uVar1 = 0;
    if ((local_10[3] & 0xfeU) == 0) {
      if (local_10[2] == 0) {
        if (local_10[5] == 0) {
          if ((local_10[4] & 0xfU) != 0) {
            if ((local_10[4] & 1U) == 0) {
              uVar1 = 0;
              if ((local_10[4] & 2U) == 0) {
                if ((local_10[4] & 4U) == 0) {
                  if ((local_10[4] & 8U) != 0) {
                    pv_set_error_code(0xa2);
                    uVar1 = (uint)extraout_var_25 << 0x10;
                  }
                }
                else {
                  pv_set_error_code(0xa1);
                  uVar1 = (uint)extraout_var_24 << 0x10;
                }
              }
              else {
                pv_set_error_code(0xa0);
                uVar1 = (uint)extraout_var_23 << 0x10;
              }
            }
            else {
              pv_set_error_code(0x9f);
              uVar1 = (uint)extraout_var_22 << 0x10;
            }
          }
        }
        else if ((local_10[5] & 1U) == 0) {
          if ((local_10[5] & 2U) == 0) {
            if ((local_10[5] & 4U) == 0) {
              if ((local_10[5] & 8U) == 0) {
                if ((local_10[5] & 0x10U) == 0) {
                  if ((local_10[5] & 0x20U) == 0) {
                    if ((local_10[5] & 0x40U) == 0) {
                      uVar1 = 0;
                      if ((local_10[5] & 0x80U) != 0) {
                        pv_set_error_code(0x9e);
                        uVar1 = (uint)extraout_var_21 << 0x10;
                      }
                    }
                    else {
                      pv_set_error_code(0x9d);
                      uVar1 = (uint)extraout_var_20 << 0x10;
                    }
                  }
                  else {
                    pv_set_error_code(0x9c);
                    uVar1 = (uint)extraout_var_19 << 0x10;
                  }
                }
                else {
                  pv_set_error_code(0x9b);
                  uVar1 = (uint)extraout_var_18 << 0x10;
                }
              }
              else {
                pv_set_error_code(0x9a);
                uVar1 = (uint)extraout_var_17 << 0x10;
              }
            }
            else {
              pv_set_error_code(0x99);
              uVar1 = (uint)extraout_var_16 << 0x10;
            }
          }
          else {
            pv_set_error_code(0x98);
            uVar1 = (uint)extraout_var_15 << 0x10;
          }
        }
        else {
          pv_set_error_code(0x97);
          uVar1 = (uint)extraout_var_14 << 0x10;
        }
      }
      else if ((local_10[2] & 2U) == 0) {
        if ((local_10[2] & 4U) == 0) {
          if ((local_10[2] & 8U) == 0) {
            if ((local_10[2] & 0x10U) == 0) {
              if ((local_10[2] & 0x20U) == 0) {
                if ((local_10[2] & 0x40U) == 0) {
                  if ((local_10[2] & 0x80U) == 0) {
                    uVar1 = 0;
                    if ((local_10[2] & 1U) != 0) {
                      pv_set_error_code(0x8f);
                      uVar1 = (uint)extraout_var_13 << 0x10;
                    }
                  }
                  else {
                    pv_set_error_code(0x96);
                    uVar1 = (uint)extraout_var_12 << 0x10;
                  }
                }
                else {
                  pv_set_error_code(0x95);
                  uVar1 = (uint)extraout_var_11 << 0x10;
                }
              }
              else {
                pv_set_error_code(0x94);
                uVar1 = (uint)extraout_var_10 << 0x10;
              }
            }
            else {
              pv_set_error_code(0x93);
              uVar1 = (uint)extraout_var_09 << 0x10;
            }
          }
          else {
            pv_set_error_code(0x92);
            uVar1 = (uint)extraout_var_08 << 0x10;
          }
        }
        else {
          pv_set_error_code(0x91);
          uVar1 = (uint)extraout_var_07 << 0x10;
        }
      }
      else {
        pv_set_error_code(0x90);
        uVar1 = (uint)extraout_var_06 << 0x10;
      }
    }
    else if ((local_10[3] & 2U) == 0) {
      if ((local_10[3] & 4U) == 0) {
        if ((local_10[3] & 8U) == 0) {
          if ((local_10[3] & 0x10U) == 0) {
            if ((local_10[3] & 0x20U) == 0) {
              if ((local_10[3] & 0x40U) == 0) {
                uVar1 = 0;
                if ((local_10[3] & 0x80U) != 0) {
                  pv_set_error_code(0x8e);
                  uVar1 = (uint)extraout_var_05 << 0x10;
                }
              }
              else {
                pv_set_error_code(0x8d);
                uVar1 = (uint)extraout_var_04 << 0x10;
              }
            }
            else {
              pv_set_error_code(0x8c);
              uVar1 = (uint)extraout_var_03 << 0x10;
            }
          }
          else {
            pv_set_error_code(0x8b);
            uVar1 = (uint)extraout_var_02 << 0x10;
          }
        }
        else {
          pv_set_error_code(0x8a);
          uVar1 = (uint)extraout_var_01 << 0x10;
        }
      }
      else {
        pv_set_error_code(0x89);
        uVar1 = (uint)extraout_var_00 << 0x10;
      }
    }
    else {
      pv_set_error_code(0x88);
      uVar1 = (uint)extraout_var << 0x10;
    }
  }
  return uVar1;
}



/* ================================================================
 * Function: pm_cam_open
 * Address:  10002cc9
 * ================================================================ */

/* __stdcall pm_cam_open,4 */

short pm_cam_open(char *param_1)

{
  uint uVar1;
  short local_c [2];
  short local_8;
  
                    /* 0x2cc9  288  _pm_cam_open@4 */
  local_c[0] = -1;
  DAT_1004333c = 0;
  uVar1 = pd_cam_open(param_1,local_c);
  local_8 = (short)uVar1;
  if (local_8 != 0) {
    pv_set_error_code(local_8);
    local_c[0] = -1;
  }
  return local_c[0];
}



/* ================================================================
 * Function: pm_cam_post_open_init
 * Address:  10002d12
 * ================================================================ */

/* __stdcall pm_cam_post_open_init,8 */

int pm_cam_post_open_init(short param_1,short param_2)

{
  uint uVar1;
  ushort extraout_var;
  int iVar2;
  undefined4 uVar3;
  undefined2 extraout_var_00;
  char local_11c [256];
  undefined1 local_1c [4];
  char local_18;
  undefined1 local_17;
  undefined1 local_16;
  ushort local_14 [2];
  undefined1 local_10 [4];
  uint local_c;
  short local_8;
  undefined2 uVar4;
  
                    /* 0x2d12  290  _pm_cam_post_open_init@8 */
  local_c = CONCAT22(local_c._2_2_,3);
  local_18 = '*';
  local_17 = 0;
  local_16 = 0;
  pd_reset_interface(param_1);
  uVar1 = pl_subsys_get_id(param_1,0,local_14,local_1c);
  if ((uVar1 & 0xffff) == 0) {
    local_8 = pl_error_code();
    pl_cam_close(param_1);
    pv_set_error_code(local_8);
    iVar2 = (uint)extraout_var << 0x10;
  }
  else {
    local_10._0_2_ = local_10._1_2_;
    local_8 = pd_driver_get_pixtime(param_2,(undefined2 *)local_10);
    if (local_8 == 0) {
      local_17 = SUB21(local_10._0_2_,1);
      local_16 = local_10[0];
      if (3 < (local_c & 0xffff)) {
        sprintf(local_11c,s_PVLIB__SIZE_ERROR_in____s___writ_1002bcd0,3,local_c & 0xffff);
      }
      uVar3 = pm_cam_write_read(param_1,0x3f,(ushort)local_c,&local_18,(LPVOID)0x0);
      uVar4 = (undefined2)((uint)uVar3 >> 0x10);
    }
    else {
      pv_set_error_code(local_8);
      uVar4 = extraout_var_00;
    }
    iVar2 = CONCAT22(uVar4,1);
  }
  return iVar2;
}



/* ================================================================
 * Function: pm_cam_send_debug
 * Address:  10002e02
 * ================================================================ */

/* __stdcall pm_cam_send_debug,16 */

int pm_cam_send_debug(short param_1,char *param_2,uint param_3,char *param_4)

{
  ushort extraout_var;
  int iVar1;
  size_t sVar2;
  ushort extraout_var_00;
  ushort extraout_var_01;
  ushort extraout_var_02;
  uint uVar3;
  undefined4 uVar4;
  ushort uVar5;
  char local_21c [256];
  uint local_11c;
  char local_118 [256];
  uint local_18;
  char *local_14;
  ushort local_10;
  undefined2 uStack_e;
  ushort local_c;
  undefined2 uStack_a;
  uint local_8;
  
                    /* 0x2e02  291  _pm_cam_send_debug@16 */
  if ((param_2 == (char *)0x0) || ((param_4 == (char *)0x0 && ((param_3 & 0xffff) != 0)))) {
    pv_set_error_code(0x87);
    iVar1 = (uint)extraout_var << 0x10;
  }
  else {
    sVar2 = strlen(param_2);
    local_18 = CONCAT22(local_18._2_2_,(short)sVar2);
    if ((sVar2 & 0xffff) < 0x7fbd) {
      if ((sVar2 & 0xffff) == 0) {
        pv_set_error_code(0xac);
        iVar1 = (uint)extraout_var_01 << 0x10;
      }
      else if ((param_3 & 0xffff) < 0x8001) {
        uVar5 = (short)sVar2 + 10;
        _local_10 = CONCAT22(uStack_e,uVar5);
        if ((uint)uVar5 < (param_3 & 0xffff)) {
          param_3 = (uint)uVar5;
        }
        local_14 = pv_malloc((uint)uVar5,0);
        if (local_14 == (char *)0x0) {
          iVar1 = 0;
        }
        else {
          *local_14 = '&';
          local_14[1] = '4';
          local_14[2] = (char)(local_18 >> 8);
          local_14[3] = (char)local_18;
          strncpy(local_14 + 4,param_2,local_18 & 0xffff);
          if ((param_3 & 0xffff) == 0) {
            uVar3 = (local_18 & 0xffff) + 4;
            local_8 = CONCAT22(local_8._2_2_,(short)uVar3);
            if (4 < (uVar3 & 0xffff)) {
              sprintf(local_21c,s_PVLIB__SIZE_ERROR_in____s___writ_1002bdc0,4,uVar3 & 0xffff);
            }
            uVar3 = pm_cam_write_read(param_1,0x3f,(ushort)local_8,local_14,(LPVOID)0x0);
            if ((uVar3 & 0xffff) == 0) {
              return 0;
            }
          }
          else {
            uVar5 = (short)local_18 + 4;
            _local_c = CONCAT22(uStack_a,uVar5);
            local_14[uVar5] = '(';
            local_14[uVar5 + 1] = (char)(param_3 >> 8);
            local_14[uVar5 + 2] = (char)param_3;
            uVar5 = (short)local_18 + 7;
            local_8 = CONCAT22(local_8._2_2_,uVar5);
            if (4 < uVar5) {
              sprintf(local_118,s_PVLIB__SIZE_ERROR_in____s___writ_1002bd20,4,uVar5);
            }
            local_11c = (uint)CONCAT11(local_14[(local_8 & 0xffff) - 2],
                                       local_14[(local_8 & 0xffff) - 1]);
            if (4 < local_11c) {
              sprintf(local_118,s_PVLIB__SIZE_ERROR_in____s___read_1002bd70,4,local_11c);
            }
            uVar3 = pm_cam_write_read(param_1,0x3f,(ushort)local_8,local_14,local_14);
            if ((uVar3 & 0xffff) == 0) {
              return 0;
            }
          }
          if ((param_3 & 0xffff) != 0) {
            strncpy(param_4,local_14,param_3 & 0xffff);
          }
          uVar4 = pv_free(local_14,0);
          iVar1 = CONCAT22((short)((uint)uVar4 >> 0x10),1);
        }
      }
      else {
        pv_set_error_code(0xaf);
        iVar1 = (uint)extraout_var_02 << 0x10;
      }
    }
    else {
      pv_set_error_code(0xad);
      iVar1 = (uint)extraout_var_00 << 0x10;
    }
  }
  return iVar1;
}



/* ================================================================
 * Function: pm_cam_write_read
 * Address:  10003107
 * ================================================================ */

/* __stdcall pm_cam_write_read,20 */

int pm_cam_write_read(short param_1,byte param_2,ushort param_3,char *param_4,LPVOID param_5)

{
  ushort extraout_var;
  int iVar1;
  ushort extraout_var_00;
  ushort extraout_var_01;
  ushort extraout_var_02;
  ushort extraout_var_03;
  ushort extraout_var_04;
  ushort extraout_var_05;
  ushort extraout_var_06;
  ushort uVar2;
  
                    /* 0x3107  293  _pm_cam_write_read@20 */
  uVar2 = 0;
  if (param_3 == 0) {
    pv_set_error_code(0xac);
    iVar1 = (uint)extraout_var << 0x10;
  }
  else if (param_4 == (char *)0x0) {
    pv_set_error_code(0x87);
    iVar1 = (uint)extraout_var_00 << 0x10;
  }
  else if (param_3 < 0x8001) {
    if (param_5 != (LPVOID)0x0) {
      if (param_2 != 0x3f) {
        pv_set_error_code(0xab);
        return (uint)extraout_var_02 << 0x10;
      }
      if (param_4[param_3 - 3] != '(') {
        pv_set_error_code(0xb0);
        return (uint)extraout_var_03 << 0x10;
      }
      uVar2 = CONCAT11(param_4[param_3 - 2],param_4[param_3 - 1]);
      if (uVar2 == 0) {
        pv_set_error_code(0xae);
        return (uint)extraout_var_04 << 0x10;
      }
      if (0x8000 < uVar2) {
        pv_set_error_code(0xaf);
        return (uint)extraout_var_05 << 0x10;
      }
    }
    uVar2 = pd_cam_write_read(*(short *)(DAT_10043330 + 4 + param_1 * 0x2c),param_2,param_3,param_4,
                              uVar2,param_5);
    if (uVar2 == 0) {
      iVar1 = 1;
    }
    else {
      pv_set_error_code(uVar2);
      iVar1 = (uint)extraout_var_06 << 0x10;
    }
  }
  else {
    pv_set_error_code(0xad);
    iVar1 = (uint)extraout_var_01 << 0x10;
  }
  return iVar1;
}



/* ================================================================
 * Function: pm_cam_plugin_write_read
 * Address:  1000327a
 * ================================================================ */

/* __stdcall pm_cam_plugin_write_read,20 */

int pm_cam_plugin_write_read(short param_1,byte param_2,ushort param_3,char *param_4,LPVOID param_5)

{
  bool bVar1;
  ushort uVar2;
  ushort extraout_var_00;
  int iVar3;
  ushort extraout_var_01;
  ushort extraout_var_02;
  undefined3 extraout_var;
  ushort extraout_var_03;
  ushort extraout_var_04;
  ushort extraout_var_05;
  ushort extraout_var_06;
  undefined2 extraout_var_07;
  ushort extraout_var_08;
  short local_c [2];
  uint local_8;
  
                    /* 0x327a  289  _pm_cam_plugin_write_read@20 */
  local_8 = local_8 & 0xffff0000;
  if (param_3 == 0) {
    pv_set_error_code(0xac);
    iVar3 = (uint)extraout_var_00 << 0x10;
  }
  else if (param_4 == (char *)0x0) {
    pv_set_error_code(0x87);
    iVar3 = (uint)extraout_var_01 << 0x10;
  }
  else if (param_3 < 0x8001) {
    bVar1 = pv_cam_get_dev_handle(param_1,local_c);
    if ((CONCAT31(extraout_var,bVar1) & 0xffff) == 0) {
      pv_set_error_code(0xc2);
      iVar3 = (uint)extraout_var_03 << 0x10;
    }
    else {
      if (param_5 != (LPVOID)0x0) {
        if (param_4[param_3 - 3] != '(') {
          pv_set_error_code(0xb0);
          return (uint)extraout_var_04 << 0x10;
        }
        uVar2 = CONCAT11(param_4[param_3 - 2],param_4[param_3 - 1]);
        local_8 = CONCAT22(local_8._2_2_,uVar2);
        if (uVar2 == 0) {
          pv_set_error_code(0xae);
          return (uint)extraout_var_05 << 0x10;
        }
        if (0x8000 < uVar2) {
          pv_set_error_code(0xaf);
          return (uint)extraout_var_06 << 0x10;
        }
      }
      uVar2 = pd_cam_write_read(local_c[0],param_2,param_3,param_4,(ushort)local_8,param_5);
      if (uVar2 == 0) {
        iVar3 = CONCAT22(extraout_var_07,1);
      }
      else {
        pv_set_error_code(uVar2);
        iVar3 = (uint)extraout_var_08 << 0x10;
      }
    }
  }
  else {
    pv_set_error_code(0xad);
    iVar3 = (uint)extraout_var_02 << 0x10;
  }
  return iVar3;
}



/* ================================================================
 * Function: pm_cam_uninit_comm
 * Address:  100033ec
 * ================================================================ */

/* __stdcall pm_cam_uninit_comm,4 */

int pm_cam_uninit_comm(short param_1)

{
  short sVar1;
  ushort extraout_var;
  int iVar2;
  
                    /* 0x33ec  292  _pm_cam_uninit_comm@4 */
  if (*(short *)(DAT_10043330 + 6 + param_1 * 0x2c) == 0) {
    iVar2 = CONCAT22((short)((uint)(param_1 * 0x2c) >> 0x10),1);
  }
  else {
    sVar1 = pd_cam_close(*(short *)(DAT_10043330 + 4 + param_1 * 0x2c));
    pv_set_error_code(sVar1);
    if (sVar1 == 0) {
      iVar2 = CONCAT22(extraout_var,1);
    }
    else {
      iVar2 = (uint)extraout_var << 0x10;
    }
  }
  return iVar2;
}



/* ================================================================
 * Function: pm_cam_get_reads
 * Address:  1000344b
 * ================================================================ */

/* WARNING: Removing unreachable block (ram,0x100034cc) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffdf : 0x100034f8 */
/* WARNING: Removing unreachable block (ram,0x10003524) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* __stdcall pm_cam_get_reads,4 */

undefined4 pm_cam_get_reads(short param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined3 extraout_var;
  char local_34;
  char local_33;
  undefined1 uStack_32;
  undefined1 uStack_31;
  char cStack_30;
  undefined1 local_2f;
  byte bStack_2e;
  undefined1 uStack_2d;
  byte bStack_2c;
  undefined1 local_2b;
  byte bStack_2a;
  char cStack_29;
  undefined1 uStack_28;
  byte local_27;
  undefined1 uStack_26;
  byte bStack_25;
  undefined1 uStack_24;
  byte local_23;
  undefined1 uStack_22;
  byte bStack_21;
  undefined1 uStack_20;
  byte local_1f;
  undefined1 uStack_1e;
  byte bStack_1d;
  byte bStack_1c;
  byte local_1b;
  byte local_1a;
  char local_19 [17];
  undefined2 local_8;
  undefined2 uStack_6;
  
                    /* 0x344b  286  _pm_cam_get_reads@4 */
  memset(&local_34,0,0x2c);
  local_34 = '&';
  local_33 = 4;
  uStack_32 = 8;
  uStack_31 = 9;
  cStack_30 = 10;
  local_2f = 0x13;
  bStack_2e = 0x14;
  uStack_2d = 3;
  bStack_2c = 0x17;
  local_2b = 0x18;
  bStack_2a = 0xd;
  cStack_29 = 0xc;
  uStack_28 = 0xf;
  local_27 = 0xe;
  uStack_26 = 0x19;
  bStack_25 = 0x24;
  uStack_24 = 0x38;
  local_23 = 5;
  uStack_22 = 0x28;
  bStack_21 = 0;
  uStack_20 = 0x2a;
  _local_8 = CONCAT22(uStack_6,0x15);
  uStack_20 = 0x2a;
  bStack_21 = 0;
  uStack_22 = 0x28;
  local_23 = 5;
  uStack_24 = 0x38;
  bStack_25 = 0x24;
  uStack_26 = 0x19;
  local_27 = 0xe;
  uStack_28 = 0xf;
  cStack_29 = '\f';
  bStack_2a = 0xd;
  local_2b = 0x18;
  bStack_2c = 0x17;
  uStack_2d = 3;
  bStack_2e = 0x14;
  local_2f = 0x13;
  cStack_30 = '\n';
  uStack_31 = 9;
  uStack_32 = 8;
  local_33 = '\x04';
  local_34 = '&';
  uVar2 = pm_cam_write_read(param_1,0x3f,0x15,&local_34,&local_34);
  if ((uVar2 & 0xffff) == 0) {
    uVar3 = 0;
  }
  else {
    if (local_34 == '\0') {
      *(undefined2 *)(DAT_10043338 + 0x12 + param_1 * 0x110) = 0;
    }
    else if (local_34 == '\x01') {
      *(undefined2 *)(DAT_10043338 + 0x12 + param_1 * 0x110) = 1;
    }
    else {
      *(undefined2 *)(DAT_10043338 + 0x12 + param_1 * 0x110) = 0;
    }
    if (local_33 == '\0') {
      *(undefined2 *)(DAT_10043338 + 0x14 + param_1 * 0x110) = 0;
    }
    else {
      *(undefined2 *)(DAT_10043338 + 0x14 + param_1 * 0x110) = 1;
    }
    *(uint *)(DAT_10043338 + 0x18 + param_1 * 0x110) =
         (CONCAT12(cStack_30,CONCAT11(uStack_31,uStack_32)) & 0xff) << 8 |
         CONCAT12(local_2f,CONCAT11(cStack_30,uStack_31)) & 0xff;
    *(int *)(DAT_10043338 + 0x18 + param_1 * 0x110) =
         *(int *)(DAT_10043338 + 0x18 + param_1 * 0x110) * 1000;
    if (cStack_30 == '\x01') {
      *(undefined2 *)(DAT_10043338 + 0x1c + param_1 * 0x110) = 1;
    }
    else if (cStack_30 == '\x02') {
      *(undefined2 *)(DAT_10043338 + 0x1c + param_1 * 0x110) = 2;
    }
    else if (cStack_30 == '\x03') {
      *(undefined2 *)(DAT_10043338 + 0x1c + param_1 * 0x110) = 3;
    }
    else {
      *(undefined2 *)(DAT_10043338 + 0x1c + param_1 * 0x110) = 0;
    }
    *(ushort *)(DAT_10043338 + 0x26 + param_1 * 0x110) =
         CONCAT11(bStack_2e,local_2f) << 8 | (ushort)bStack_2e;
    *(ushort *)(DAT_10043338 + 0x28 + param_1 * 0x110) =
         CONCAT11(bStack_2c,uStack_2d) << 8 | (ushort)bStack_2c;
    *(ushort *)(DAT_10043338 + 0x2a + param_1 * 0x110) =
         CONCAT11(bStack_2a,local_2b) << 8 | (ushort)bStack_2a;
    if (cStack_29 == '\0') {
      *(undefined2 *)(DAT_10043338 + 0x2c + param_1 * 0x110) = 0;
    }
    else {
      *(undefined2 *)(DAT_10043338 + 0x2c + param_1 * 0x110) = 1;
    }
    *(ushort *)(DAT_10043338 + 0x30 + param_1 * 0x110) =
         CONCAT11(local_27,uStack_28) << 8 | (ushort)local_27;
    *(ushort *)(DAT_10043338 + 0x2e + param_1 * 0x110) =
         CONCAT11(bStack_25,uStack_26) << 8 | (ushort)bStack_25;
    *(ushort *)(DAT_10043338 + 0x1e + param_1 * 0x110) =
         CONCAT11(local_23,uStack_24) << 8 | (ushort)local_23;
    *(ushort *)(DAT_10043338 + 0x20 + param_1 * 0x110) =
         CONCAT11(bStack_21,uStack_22) << 8 | (ushort)bStack_21;
    *(ushort *)(DAT_10043338 + 0x22 + param_1 * 0x110) =
         CONCAT11(local_1f,uStack_20) << 8 | (ushort)local_1f;
    *(ushort *)(DAT_10043338 + 0x24 + param_1 * 0x110) =
         CONCAT11(bStack_1d,uStack_1e) << 8 | (ushort)bStack_1d;
    *(ushort *)(DAT_10043338 + 0x32 + param_1 * 0x110) = (ushort)bStack_1c;
    *(ushort *)(DAT_10043338 + 0x34 + param_1 * 0x110) = (ushort)local_1b;
    *(ushort *)(DAT_10043338 + 0x42 + param_1 * 0x110) = (ushort)local_1a;
    strncpy((char *)(DAT_10043338 + param_1 * 0x110),local_19,0x10);
    *(undefined1 *)(DAT_10043338 + 0x10 + param_1 * 0x110) = 0;
    uVar2 = pm_cam_get_capabilities(param_1);
    if ((uVar2 & 0xffff) == 0) {
      uVar3 = 0;
    }
    else if ((*(short *)(DAT_10043338 + 0x4e + param_1 * 0x110) == 0) ||
            (bVar1 = pm_cam_get_io_reads(param_1), (CONCAT31(extraout_var,bVar1) & 0xffff) != 0)) {
      uVar2 = param_1 * 0x110;
      if (*(short *)(DAT_10043338 + 0x4c + uVar2) != 0) {
        uVar2 = pm_cam_get_fast_exp_reads(param_1);
        uVar2 = uVar2 & 0xffff;
        if (uVar2 == 0) {
          return 0;
        }
      }
      uVar3 = CONCAT22((short)(uVar2 >> 0x10),1);
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}



/* ================================================================
 * Function: pm_cam_get_capabilities
 * Address:  100039bb
 * ================================================================ */

/* WARNING: Removing unreachable block (ram,0x10003a36) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffff3 : 0x10003a62 */
/* WARNING: Removing unreachable block (ram,0x10003a8e) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* __stdcall pm_cam_get_capabilities,4 */

undefined4 pm_cam_get_capabilities(short param_1)

{
  uint uVar1;
  undefined4 uVar2;
  byte local_10;
  byte bStack_f;
  undefined1 uStack_e;
  undefined1 uStack_d;
  byte local_c;
  undefined1 uStack_b;
  undefined1 uStack_a;
  undefined1 uStack_9;
  undefined2 local_8;
  undefined2 uStack_6;
  
                    /* 0x39bb  280  _pm_cam_get_capabilities@4 */
  _local_8 = CONCAT22(uStack_6,5);
  local_10 = 0x26;
  bStack_f = 0x3b;
  uStack_e = 0x28;
  uStack_d = 0;
  local_c = 8;
  uStack_b = 0;
  uStack_a = 0;
  uStack_9 = 0;
  if (*(ushort *)(DAT_10043338 + 0x34 + param_1 * 0x110) < 8) {
    local_10 = 0;
    bStack_f = 0;
    uStack_e = 0;
    uStack_d = 0;
    local_c = 0xff;
    uStack_b = 0xff;
    uStack_a = 0xff;
    uStack_9 = 0xff;
  }
  else {
    uStack_9 = 0;
    uStack_a = 0;
    uStack_b = 0;
    local_c = 8;
    uStack_d = 0;
    uStack_e = 0x28;
    bStack_f = 0x3b;
    local_10 = 0x26;
    uVar1 = pm_cam_write_read(param_1,0x3f,5,(char *)&local_10,&local_10);
    if ((uVar1 & 0xffff) == 0) {
      return 0;
    }
  }
  *(ushort *)(DAT_10043338 + 0x44 + param_1 * 0x110) = local_10 & 1;
  *(short *)(DAT_10043338 + 0x4a + param_1 * 0x110) =
       (short)((int)(CONCAT12(uStack_e,CONCAT11(bStack_f,local_10)) & 2) >> 1);
  *(short *)(DAT_10043338 + 0x5a + param_1 * 0x110) =
       (short)((int)(CONCAT12(uStack_e,CONCAT11(bStack_f,local_10)) & 4) >> 2);
  *(short *)(DAT_10043338 + 0x5c + param_1 * 0x110) =
       (short)((int)(CONCAT12(uStack_e,CONCAT11(bStack_f,local_10)) & 4) >> 2);
  *(short *)(DAT_10043338 + 0x4c + param_1 * 0x110) =
       (short)((int)(CONCAT12(uStack_e,CONCAT11(bStack_f,local_10)) & 8) >> 3);
  *(short *)(DAT_10043338 + 0x4e + param_1 * 0x110) =
       (short)((int)(CONCAT12(uStack_e,CONCAT11(bStack_f,local_10)) & 0x10) >> 4);
  *(short *)(DAT_10043338 + 0x50 + param_1 * 0x110) =
       (short)((int)(CONCAT12(uStack_e,CONCAT11(bStack_f,local_10)) & 0x40) >> 6);
  *(short *)(DAT_10043338 + 0x54 + param_1 * 0x110) =
       (short)((int)(CONCAT12(uStack_e,CONCAT11(bStack_f,local_10)) & 0x80) >> 7);
  *(ushort *)(DAT_10043338 + 0x10c + param_1 * 0x110) = bStack_f & 1;
  *(short *)(DAT_10043338 + 0x52 + param_1 * 0x110) =
       (short)((int)(CONCAT12(uStack_d,CONCAT11(uStack_e,bStack_f)) & 2) >> 1);
  *(ushort *)(DAT_10043338 + 0x48 + param_1 * 0x110) = local_c & 1;
  *(short *)(DAT_10043338 + 0x46 + param_1 * 0x110) =
       (short)((int)(CONCAT12(uStack_a,CONCAT11(uStack_b,local_c)) & 2) >> 1);
  *(undefined2 *)(DAT_10043338 + 0x5e + param_1 * 0x110) = 0;
  *(undefined2 *)(DAT_10043338 + 0x56 + param_1 * 0x110) = 0;
  *(undefined2 *)(DAT_10043338 + 0x58 + param_1 * 0x110) = 1;
  pv_cam_set_pmode_capabilities(param_1);
  uVar2 = pv_cam_set_timingMode_capabilities(param_1);
  return CONCAT22((short)((uint)uVar2 >> 0x10),1);
}



/* ================================================================
 * Function: pm_cam_get_io_reads
 * Address:  10003ce2
 * ================================================================ */

/* WARNING: Removing unreachable block (ram,0x10003d12) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffff3 : 0x10003d3d */
/* WARNING: Removing unreachable block (ram,0x10003d6a) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* __stdcall pm_cam_get_io_reads,4 */

bool pm_cam_get_io_reads(short param_1)

{
  uint uVar1;
  bool bVar2;
  byte local_10 [8];
  undefined2 local_8;
  undefined2 uStack_6;
  
                    /* 0x3ce2  285  _pm_cam_get_io_reads@4 */
  _local_8 = CONCAT22(uStack_6,5);
  local_10[0] = 0x26;
  local_10[1] = 0x41;
  local_10[2] = 0x28;
  local_10[3] = 0;
  local_10[4] = 1;
  local_10[4] = 1;
  local_10[3] = 0;
  local_10[2] = 0x28;
  local_10[1] = 0x41;
  local_10[0] = 0x26;
  uVar1 = pm_cam_write_read(param_1,0x3f,5,(char *)local_10,local_10);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *(ushort *)(DAT_10043338 + 0x40 + param_1 * 0x110) = (ushort)local_10[0];
  }
  return bVar2;
}



/* ================================================================
 * Function: pm_cam_get_fast_exp_reads
 * Address:  10003dd2
 * ================================================================ */

/* __stdcall pm_cam_get_fast_exp_reads,4 */

undefined4 pm_cam_get_fast_exp_reads(short param_1)

{
  uint uVar1;
  undefined4 uVar2;
  char local_110 [254];
  byte abStack_12 [10];
  uint local_8;
  
                    /* 0x3dd2  283  _pm_cam_get_fast_exp_reads@4 */
  local_8 = CONCAT22(local_8._2_2_,6);
  abStack_12[2] = 0x26;
  abStack_12[3] = 0x3e;
  abStack_12[4] = 0x3f;
  abStack_12[5] = 0x28;
  abStack_12[6] = 0;
  abStack_12[7] = 3;
  pv_set_error_code(0);
  uVar1 = pl_cam_check(param_1);
  if ((uVar1 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else {
    if (6 < (local_8 & 0xffff)) {
      sprintf(local_110,s_PVLIB__SIZE_ERROR_in____s___writ_1002bff0,6,local_8 & 0xffff);
    }
    if (6 < CONCAT11(abStack_12[local_8 & 0xffff],abStack_12[(local_8 & 0xffff) + 1])) {
      sprintf(local_110,s_PVLIB__SIZE_ERROR_in____s___read_1002c040,6,
              (uint)CONCAT11(abStack_12[local_8 & 0xffff],abStack_12[(local_8 & 0xffff) + 1]));
    }
    uVar1 = pm_cam_write_read(param_1,0x3f,(ushort)local_8,(char *)(abStack_12 + 2),abStack_12 + 2);
    if ((uVar1 & 0xffff) == 0) {
      uVar2 = 0;
    }
    else {
      *(ushort *)(DAT_10043338 + 0x36 + param_1 * 0x110) = (ushort)abStack_12[2];
      *(double *)(DAT_10043338 + 0x38 + param_1 * 0x110) =
           (double)(uint3)((CONCAT11(abStack_12[4],abStack_12[3]) & 0xff) << 8 |
                          CONCAT11(abStack_12[5],abStack_12[4]) & 0xff);
      uVar2 = 1;
    }
  }
  return uVar2;
}



/* ================================================================
 * Function: pm_cam_get_rws
 * Address:  10003f26
 * ================================================================ */

/* WARNING: Removing unreachable block (ram,0x10003f7b) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffff4 : 0x10003fa7 */
/* WARNING: Removing unreachable block (ram,0x10003fd3) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* __stdcall pm_cam_get_rws,4 */

undefined4 pm_cam_get_rws(short param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char local_14;
  byte bStack_13;
  byte bStack_12;
  undefined1 uStack_11;
  byte local_10;
  byte bStack_f;
  undefined1 uStack_e;
  byte bStack_d;
  undefined1 local_c;
  byte bStack_b;
  undefined1 local_8;
  undefined1 uStack_7;
  
                    /* 0x3f26  287  _pm_cam_get_rws@4 */
  memset(&local_14,0,10);
  local_14 = '&';
  bStack_13 = 0x12;
  bStack_12 = 0x15;
  uStack_11 = 0x10;
  local_10 = 0x11;
  bStack_f = 0xb;
  uStack_e = 0x16;
  bStack_d = 0x28;
  local_c = 0;
  bStack_b = 10;
  local_8 = 10;
  uStack_7 = 0;
  uStack_7 = 0;
  local_8 = 10;
  bStack_b = 10;
  local_c = 0;
  bStack_d = 0x28;
  uStack_e = 0x16;
  bStack_f = 0xb;
  local_10 = 0x11;
  uStack_11 = 0x10;
  bStack_12 = 0x15;
  bStack_13 = 0x12;
  local_14 = '&';
  uVar2 = pm_cam_write_read(param_1,0x3f,10,&local_14,&local_14);
  if ((uVar2 & 0xffff) == 0) {
    uVar3 = 0;
  }
  else {
    *(ushort *)(DAT_10043334 + 0x1c + param_1 * 0x24) =
         CONCAT11(bStack_13,local_14) << 8 | (ushort)bStack_13;
    *(ushort *)(DAT_10043334 + 0x18 + param_1 * 0x24) = (ushort)bStack_12;
    *(ushort *)(DAT_10043334 + 0x1e + param_1 * 0x24) =
         CONCAT11(local_10,uStack_11) << 8 | (ushort)local_10;
    *(ushort *)(DAT_10043334 + 0x1a + param_1 * 0x24) = (ushort)bStack_f;
    *(ushort *)(DAT_10043334 + 0x14 + param_1 * 0x24) =
         CONCAT11(bStack_d,uStack_e) << 8 | (ushort)bStack_d;
    iVar1 = DAT_10043334;
    *(ushort *)(DAT_10043334 + 0x16 + param_1 * 0x24) =
         CONCAT11(bStack_b,local_c) << 8 | (ushort)bStack_b;
    uVar3 = CONCAT22((short)((uint)iVar1 >> 0x10),1);
  }
  return uVar3;
}



/* ================================================================
 * Function: pm_script_set_hook
 * Address:  100040f1
 * ================================================================ */

/* __stdcall pm_script_set_hook,4 */

undefined4 pm_script_set_hook(undefined4 param_1)

{
                    /* 0x40f1  414  _pm_script_set_hook@4 */
  DAT_1004333c = param_1;
  return CONCAT22((short)((uint)param_1 >> 0x10),1);
}



/* ================================================================
 * Function: pv_cam_get_ccs_mem
 * Address:  10004110
 * ================================================================ */

uint pv_cam_get_ccs_mem(short param_1,ushort *param_2)

{
  uint uVar1;
  
                    /* 0x4110  2  pv_cam_get_ccs_mem */
  uVar1 = pl_cam_check(param_1);
  if ((uVar1 & 0xffff) == 0) {
    uVar1 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    uVar1 = pm_cam_get_ccs_mem(param_1,param_2);
  }
  else {
    uVar1 = pi_cam_get_ccs_mem(CONCAT22((short)((uint)(param_1 * 0x2c) >> 0x10),param_1),param_2);
  }
  return uVar1;
}



/* ================================================================
 * Function: pv_cam_get_dev_handle
 * Address:  10004176
 * ================================================================ */

bool pv_cam_get_dev_handle(short param_1,undefined2 *param_2)

{
  uint uVar1;
  bool bVar2;
  
                    /* 0x4176  132  pv_cam_get_dev_handle */
  uVar1 = pl_cam_check(param_1);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *param_2 = *(undefined2 *)(DAT_10043330 + 4 + param_1 * 0x2c);
  }
  return bVar2;
}



/* ================================================================
 * Function: pv_cam_init_comm
 * Address:  100041b0
 * ================================================================ */

/* __stdcall pv_cam_init_comm,0 */

int pv_cam_init_comm(void)

{
  short sVar1;
  undefined4 uVar2;
  ushort extraout_var;
  int iVar3;
  ushort extraout_var_00;
  char *pcVar4;
  ushort extraout_var_01;
  uint uVar5;
  ushort extraout_var_02;
  char *_Dest;
  int local_1c;
  int local_18;
  
                    /* 0x41b0  463  _pv_cam_init_comm@0 */
  pv_set_error_code(0);
  uVar2 = pd_ddi_init();
  if ((short)uVar2 == 0) {
    sVar1 = pd_ddi_get_total_cams(&DAT_1004332a);
    if (sVar1 == 0) {
      DAT_10043330 = pv_malloc(DAT_1004332a * 0x2c,0);
      if (DAT_10043330 == (void *)0x0) {
        iVar3 = 0;
      }
      else {
        pcVar4 = pv_malloc((int)DAT_1004332a << 5,0);
        if (pcVar4 == (char *)0x0) {
          iVar3 = 0;
        }
        else {
          uVar2 = pd_ddi_get_all_cam_names(pcVar4);
          if ((short)uVar2 == 0) {
            DAT_1004332c = pv_malloc((int)DAT_1004332a << 5,0);
            if (DAT_1004332c == (void *)0x0) {
              iVar3 = 0;
            }
            else {
              local_18 = 0;
              for (local_1c = 0; local_1c < DAT_1004332a; local_1c = local_1c + 1) {
                _Dest = (char *)((int)DAT_1004332c + local_1c * 0x20);
                strncpy(_Dest,pcVar4 + local_1c * 0x20,0x20);
                *(char **)((int)DAT_10043330 + local_1c * 0x2c) = _Dest;
                uVar5 = pd_driver_get_type((short)local_1c,
                                           (undefined2 *)
                                           ((int)DAT_10043330 + local_1c * 0x2c + 0x14));
                if ((short)uVar5 != 0) {
                  pv_set_error_code((short)uVar5);
                  return (uint)extraout_var_02 << 0x10;
                }
                if (*(short *)((int)DAT_10043330 + local_1c * 0x2c + 0x14) == 0) {
                  *(undefined4 *)((int)DAT_10043330 + local_1c * 0x2c + 0x18) = 0;
                }
                else {
                  local_18 = local_18 + 1;
                  *(int *)((int)DAT_10043330 + local_1c * 0x2c + 0x18) = local_18;
                }
                *(undefined4 *)((int)DAT_10043330 + local_1c * 0x2c + 0x1c) = 0;
              }
              for (local_1c = 0; local_1c < DAT_1004332a; local_1c = local_1c + 1) {
                *(undefined2 *)((int)DAT_10043330 + local_1c * 0x2c + 4) = 0xffff;
                *(undefined2 *)((int)DAT_10043330 + local_1c * 0x2c + 6) =
                     *(undefined2 *)(&DAT_10045000 + local_1c * 2);
                *(undefined2 *)((int)DAT_10043330 + local_1c * 0x2c + 8) = 0;
                *(undefined2 *)((int)DAT_10043330 + local_1c * 0x2c + 10) = 0;
                *(undefined2 *)((int)DAT_10043330 + local_1c * 0x2c + 0x22) = 0;
                *(undefined4 *)((int)DAT_10043330 + local_1c * 0x2c + 0xc) = 0;
                *(undefined2 *)((int)DAT_10043330 + local_1c * 0x2c + 0x20) = 0;
              }
              uVar2 = pv_free(pcVar4,0);
              iVar3 = CONCAT22((short)((uint)uVar2 >> 0x10),1);
            }
          }
          else {
            pv_set_error_code((short)uVar2);
            iVar3 = (uint)extraout_var_01 << 0x10;
          }
        }
      }
    }
    else {
      pv_set_error_code(sVar1);
      iVar3 = (uint)extraout_var_00 << 0x10;
    }
  }
  else {
    pv_set_error_code((short)uVar2);
    iVar3 = (uint)extraout_var << 0x10;
  }
  return iVar3;
}



/* ================================================================
 * Function: pv_cam_uninit_comm
 * Address:  10004476
 * ================================================================ */

/* __stdcall pv_cam_uninit_comm,0 */

bool pv_cam_uninit_comm(void)

{
  uint uVar1;
  short local_10;
  short local_8;
  
                    /* 0x4476  471  _pv_cam_uninit_comm@0 */
  pv_set_error_code(0);
  local_8 = 0;
  for (local_10 = 0; local_10 < DAT_1004332a; local_10 = local_10 + 1) {
    if (*(short *)((int)DAT_10043330 + local_10 * 0x2c + 0x14) == 0) {
      uVar1 = pm_cam_uninit_comm(local_10);
      if (((uVar1 & 0xffff) == 0) && (local_8 == 0)) {
        local_8 = pl_error_code();
      }
    }
    else {
      uVar1 = pi_cam_uninit_comm(local_10);
      if (((uVar1 & 0xffff) == 0) && (local_8 == 0)) {
        local_8 = pl_error_code();
      }
    }
  }
  uVar1 = pd_ddi_uninit();
  if (((short)uVar1 != 0) && (local_8 == 0)) {
    local_8 = (short)uVar1;
  }
  uVar1 = pv_free(DAT_10043330,0);
  DAT_10043330 = (void *)0x0;
  if (((uVar1 & 0xffff) == 0) && (local_8 == 0)) {
    local_8 = pl_error_code();
  }
  uVar1 = pv_free(DAT_1004332c,0);
  DAT_1004332c = (void *)0x0;
  if (((uVar1 & 0xffff) == 0) && (local_8 == 0)) {
    local_8 = pl_error_code();
  }
  if (local_8 != 0) {
    pv_set_error_code(local_8);
  }
  return local_8 == 0;
}



/* ================================================================
 * Function: pv_cam_set_rws_valid
 * Address:  100045d3
 * ================================================================ */

/* __stdcall pv_cam_set_rws_valid,8 */

bool pv_cam_set_rws_valid(short param_1,undefined2 param_2)

{
  uint uVar1;
  bool bVar2;
  
                    /* 0x45d3  468  _pv_cam_set_rws_valid@8 */
  uVar1 = pl_cam_check(param_1);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *(undefined2 *)(DAT_10043330 + 0x22 + param_1 * 0x2c) = param_2;
  }
  return bVar2;
}



/* ================================================================
 * Function: pv_cam_get_rws_valid
 * Address:  1000460c
 * ================================================================ */

/* __stdcall pv_cam_get_rws_valid,8 */

bool pv_cam_get_rws_valid(short param_1,undefined2 *param_2)

{
  uint uVar1;
  bool bVar2;
  
                    /* 0x460c  461  _pv_cam_get_rws_valid@8 */
  uVar1 = pl_cam_check(param_1);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *param_2 = *(undefined2 *)(DAT_10043330 + 0x22 + param_1 * 0x2c);
  }
  return bVar2;
}



/* ================================================================
 * Function: pv_cam_set_reads_valid
 * Address:  10004646
 * ================================================================ */

/* __stdcall pv_cam_set_reads_valid,8 */

bool pv_cam_set_reads_valid(short param_1,undefined2 param_2)

{
  uint uVar1;
  bool bVar2;
  
                    /* 0x4646  467  _pv_cam_set_reads_valid@8 */
  uVar1 = pl_cam_check(param_1);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *(undefined2 *)(DAT_10043330 + 10 + param_1 * 0x2c) = param_2;
  }
  return bVar2;
}



/* ================================================================
 * Function: pv_cam_get_reads_valid
 * Address:  1000467f
 * ================================================================ */

/* __stdcall pv_cam_get_reads_valid,8 */

bool pv_cam_get_reads_valid(short param_1,undefined2 *param_2)

{
  uint uVar1;
  bool bVar2;
  
                    /* 0x467f  459  _pv_cam_get_reads_valid@8 */
  uVar1 = pl_cam_check(param_1);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *param_2 = *(undefined2 *)(DAT_10043330 + 10 + param_1 * 0x2c);
  }
  return bVar2;
}



/* ================================================================
 * Function: pv_cam_get_reads
 * Address:  100046b9
 * ================================================================ */

/* __stdcall pv_cam_get_reads,4 */

undefined4 pv_cam_get_reads(short param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint local_8;
  
                    /* 0x46b9  458  _pv_cam_get_reads@4 */
  local_8 = 0;
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    uVar3 = 0;
  }
  else {
    bVar1 = pv_cam_get_reads_valid(param_1,(undefined2 *)&local_8);
    if (((CONCAT31(extraout_var,bVar1) & 0xffff) == 0) || ((local_8 & 0xffff) == 0)) {
      if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
        uVar2 = pm_cam_get_reads(param_1);
        if ((uVar2 & 0xffff) == 0) {
          return 0;
        }
      }
      else {
        uVar2 = pi_cam_get_reads(param_1);
        if ((uVar2 & 0xffff) == 0) {
          return 0;
        }
      }
      bVar1 = pv_cam_set_reads_valid(param_1,1);
      if ((CONCAT31(extraout_var_00,bVar1) & 0xffff) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}



/* ================================================================
 * Function: pv_cam_do_reads
 * Address:  10004773
 * ================================================================ */

undefined4 pv_cam_do_reads(short param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined3 extraout_var;
  
                    /* 0x4773  106  pv_cam_do_reads */
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    uVar3 = 0;
  }
  else {
    bVar1 = pv_cam_set_reads_valid(param_1,0);
    if ((CONCAT31(extraout_var,bVar1) & 0xffff) == 0) {
      uVar3 = 0;
    }
    else {
      uVar2 = pv_cam_get_reads(param_1);
      if ((uVar2 & 0xffff) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}



/* ================================================================
 * Function: pv_cam_set_pmode_capabilities
 * Address:  100047c8
 * ================================================================ */

/* __stdcall pv_cam_set_pmode_capabilities,4 */

undefined4 pv_cam_set_pmode_capabilities(short param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int local_8;
  
                    /* 0x47c8  466  _pv_cam_set_pmode_capabilities@4 */
  uVar1 = pl_cam_check(param_1);
  if ((uVar1 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else {
    if (*(short *)(DAT_10043338 + 0x56 + param_1 * 0x110) == 0) {
      if (*(short *)(DAT_10043338 + 0x14 + param_1 * 0x110) == 0) {
        if (*(short *)(DAT_10043338 + 0x1c + param_1 * 0x110) == 3) {
          *(undefined4 *)(DAT_10043338 + param_1 * 0x110 + 100) = 0;
          *(undefined4 *)(DAT_10043338 + param_1 * 0x110 + 0x68) = 2;
          local_8 = 2;
          if (*(short *)(DAT_10043338 + 0x58 + param_1 * 0x110) != 0) {
            *(undefined4 *)(DAT_10043338 + param_1 * 0x110 + 0x6c) = 4;
            *(undefined4 *)(DAT_10043338 + param_1 * 0x110 + 0x70) = 6;
            local_8 = 4;
          }
        }
        else {
          *(undefined4 *)(DAT_10043338 + param_1 * 0x110 + 100) = 0;
          local_8 = 1;
          if (*(short *)(DAT_10043338 + 0x58 + param_1 * 0x110) != 0) {
            *(undefined4 *)(DAT_10043338 + param_1 * 0x110 + 0x68) = 4;
            local_8 = 2;
          }
        }
      }
      else if (*(short *)(DAT_10043338 + 0x1c + param_1 * 0x110) == 3) {
        *(undefined4 *)(DAT_10043338 + param_1 * 0x110 + 100) = 0;
        *(undefined4 *)(DAT_10043338 + param_1 * 0x110 + 0x68) = 1;
        *(undefined4 *)(DAT_10043338 + param_1 * 0x110 + 0x6c) = 2;
        *(undefined4 *)(DAT_10043338 + param_1 * 0x110 + 0x70) = 3;
        local_8 = 4;
        if (*(short *)(DAT_10043338 + 0x58 + param_1 * 0x110) != 0) {
          *(undefined4 *)(DAT_10043338 + param_1 * 0x110 + 0x74) = 4;
          *(undefined4 *)(DAT_10043338 + param_1 * 0x110 + 0x78) = 5;
          *(undefined4 *)(DAT_10043338 + param_1 * 0x110 + 0x7c) = 6;
          *(undefined4 *)(DAT_10043338 + param_1 * 0x110 + 0x80) = 7;
          local_8 = 8;
        }
      }
      else {
        *(undefined4 *)(DAT_10043338 + param_1 * 0x110 + 100) = 0;
        *(undefined4 *)(DAT_10043338 + param_1 * 0x110 + 0x68) = 1;
        local_8 = 2;
        if (*(short *)(DAT_10043338 + 0x58 + param_1 * 0x110) != 0) {
          *(undefined4 *)(DAT_10043338 + param_1 * 0x110 + 0x6c) = 4;
          *(undefined4 *)(DAT_10043338 + param_1 * 0x110 + 0x70) = 5;
          local_8 = 4;
        }
      }
    }
    else {
      *(undefined4 *)(DAT_10043338 + param_1 * 0x110 + 100) = 8;
      local_8 = 1;
      if (*(short *)(DAT_10043338 + 0x5a + param_1 * 0x110) != 0) {
        *(undefined4 *)(DAT_10043338 + param_1 * 0x110 + 0x68) = 10;
        local_8 = 2;
      }
    }
    if (*(short *)(DAT_10043338 + 0x5e + param_1 * 0x110) != 0) {
      *(undefined4 *)(DAT_10043338 + param_1 * 0x110 + 100 + local_8 * 4) = 9;
      local_8 = local_8 + 1;
    }
    *(int *)(DAT_10043338 + 0xb4 + param_1 * 0x110) = local_8;
    uVar2 = 1;
  }
  return uVar2;
}



/* ================================================================
 * Function: pv_cam_set_timingMode_capabilities
 * Address:  10004c5f
 * ================================================================ */

/* __stdcall pv_cam_set_timingMode_capabilities,4 */

undefined4 pv_cam_set_timingMode_capabilities(short param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
                    /* 0x4c5f  469  _pv_cam_set_timingMode_capabilities@4 */
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    uVar3 = 0;
  }
  else {
    *(undefined4 *)(DAT_10043338 + 0xb8 + param_1 * 0x110) = 0;
    *(undefined4 *)(DAT_10043338 + 0xbc + param_1 * 0x110) = 1;
    *(undefined4 *)(DAT_10043338 + 0xc0 + param_1 * 0x110) = 2;
    *(undefined4 *)(DAT_10043338 + 0xc4 + param_1 * 0x110) = 3;
    *(undefined4 *)(DAT_10043338 + 200 + param_1 * 0x110) = 4;
    iVar1 = DAT_10043338;
    *(undefined4 *)(DAT_10043338 + 0xcc + param_1 * 0x110) = 5;
    *(undefined4 *)(DAT_10043338 + 0x108 + param_1 * 0x110) = 6;
    uVar3 = CONCAT22((short)((uint)iVar1 >> 0x10),1);
  }
  return uVar3;
}



/* ================================================================
 * Function: pv_cam_get_rws
 * Address:  10004d40
 * ================================================================ */

/* __stdcall pv_cam_get_rws,4 */

undefined4 pv_cam_get_rws(short param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  uint local_8;
  
                    /* 0x4d40  460  _pv_cam_get_rws@4 */
  local_8 = 0;
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    uVar3 = 0;
  }
  else {
    bVar1 = pv_cam_get_rws_valid(param_1,(undefined2 *)&local_8);
    if ((CONCAT31(extraout_var,bVar1) & 0xffff) == 0) {
      uVar3 = 0;
    }
    else if ((local_8 & 0xffff) == 0) {
      if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
        uVar2 = pm_cam_get_rws(param_1);
        if ((uVar2 & 0xffff) == 0) {
          return 0;
        }
      }
      else {
        bVar1 = pi_cam_get_rws(param_1);
        if ((CONCAT31(extraout_var_00,bVar1) & 0xffff) == 0) {
          return 0;
        }
      }
      bVar1 = pv_cam_set_rws_valid(param_1,1);
      if ((CONCAT31(extraout_var_01,bVar1) & 0xffff) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}



/* ================================================================
 * Function: pv_cam_init_scr_struct
 * Address:  10004dff
 * ================================================================ */

/* __stdcall pv_cam_init_scr_struct,4 */

undefined4 pv_cam_init_scr_struct(undefined2 *param_1)

{
                    /* 0x4dff  465  _pv_cam_init_scr_struct@4 */
  *param_1 = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 6) = 0xbff00000;
  *(undefined4 *)(param_1 + 8) = 0;
  return CONCAT22((short)((uint)param_1 >> 0x10),1);
}



/* ================================================================
 * Function: pv_cam_init_cfg
 * Address:  10004e37
 * ================================================================ */

/* __stdcall pv_cam_init_cfg,0 */

uint pv_cam_init_cfg(void)

{
  void *pvVar1;
  uint uVar2;
  int local_c;
  short local_8 [2];
  
                    /* 0x4e37  462  _pv_cam_init_cfg@0 */
  pv_set_error_code(0);
  pl_cam_get_total(local_8);
  DAT_10043334 = pv_malloc(local_8[0] * 0x24,0);
  if (DAT_10043334 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    for (local_c = 0; local_c < local_8[0]; local_c = local_c + 1) {
      *(undefined2 *)((int)DAT_10043334 + local_c * 0x24) = 1;
      *(undefined2 *)((int)DAT_10043334 + local_c * 0x24 + 2) = 2;
      *(undefined2 *)((int)DAT_10043334 + local_c * 0x24 + 4) = 0;
      *(undefined2 *)((int)DAT_10043334 + local_c * 0x24 + 6) = 1;
      *(undefined2 *)((int)DAT_10043334 + local_c * 0x24 + 8) = 0xffff;
      *(undefined4 *)((int)DAT_10043334 + local_c * 0x24 + 0xc) = 10000;
      *(undefined2 *)((int)DAT_10043334 + local_c * 0x24 + 0x10) = 0;
      *(undefined2 *)((int)DAT_10043334 + local_c * 0x24 + 0x14) = 0;
      *(undefined2 *)((int)DAT_10043334 + local_c * 0x24 + 0x16) = 0;
      *(undefined2 *)((int)DAT_10043334 + local_c * 0x24 + 0x18) = 0;
      *(undefined2 *)((int)DAT_10043334 + local_c * 0x24 + 0x1a) = 0;
      *(undefined2 *)((int)DAT_10043334 + local_c * 0x24 + 0x1c) = 0;
      *(undefined2 *)((int)DAT_10043334 + local_c * 0x24 + 0x1e) = 0;
      *(undefined2 *)((int)DAT_10043334 + local_c * 0x24 + 0x12) = 0;
      pvVar1 = pv_malloc(0xf0,0);
      *(void **)((int)DAT_10043334 + local_c * 0x24 + 0x20) = pvVar1;
      if (*(int *)((int)DAT_10043334 + local_c * 0x24 + 0x20) == 0) {
        return (uint)DAT_10043334 & 0xffff0000;
      }
      pv_cam_init_scr_struct(*(undefined2 **)((int)DAT_10043334 + local_c * 0x24 + 0x20));
      pv_cam_init_scr_struct
                ((undefined2 *)(*(int *)((int)DAT_10043334 + local_c * 0x24 + 0x20) + 0x18));
      pv_cam_init_scr_struct
                ((undefined2 *)(*(int *)((int)DAT_10043334 + local_c * 0x24 + 0x20) + 0x30));
      pv_cam_init_scr_struct
                ((undefined2 *)(*(int *)((int)DAT_10043334 + local_c * 0x24 + 0x20) + 0x48));
      pv_cam_init_scr_struct
                ((undefined2 *)(*(int *)((int)DAT_10043334 + local_c * 0x24 + 0x20) + 0x60));
      pv_cam_init_scr_struct
                ((undefined2 *)(*(int *)((int)DAT_10043334 + local_c * 0x24 + 0x20) + 0x78));
      pv_cam_init_scr_struct
                ((undefined2 *)(*(int *)((int)DAT_10043334 + local_c * 0x24 + 0x20) + 0x90));
      pv_cam_init_scr_struct
                ((undefined2 *)(*(int *)((int)DAT_10043334 + local_c * 0x24 + 0x20) + 0xa8));
      pv_cam_init_scr_struct
                ((undefined2 *)(*(int *)((int)DAT_10043334 + local_c * 0x24 + 0x20) + 0xc0));
      pv_cam_init_scr_struct
                ((undefined2 *)(*(int *)((int)DAT_10043334 + local_c * 0x24 + 0x20) + 0xd8));
    }
    uVar2 = pv_cam_init_reads();
    if ((uVar2 & 0xffff) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}



/* ================================================================
 * Function: pv_cam_uninit_cfg
 * Address:  100050ec
 * ================================================================ */

/* __stdcall pv_cam_uninit_cfg,0 */

bool pv_cam_uninit_cfg(void)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  short local_10;
  short local_c [2];
  short local_8;
  
                    /* 0x50ec  470  _pv_cam_uninit_cfg@0 */
  pv_set_error_code(0);
  local_8 = 0;
  pl_cam_get_total(local_c);
  for (local_10 = 0; local_10 < local_c[0]; local_10 = local_10 + 1) {
    pl_io_clear_script_control(local_10);
    pv_free(*(void **)((int)DAT_10043334 + local_10 * 0x24 + 0x20),0);
    *(undefined4 *)((int)DAT_10043334 + local_10 * 0x24 + 0x20) = 0;
  }
  uVar2 = pv_free(DAT_10043334,0);
  DAT_10043334 = (void *)0x0;
  if (((uVar2 & 0xffff) == 0) && (local_8 == 0)) {
    local_8 = pl_error_code();
  }
  bVar1 = pv_cam_uninit_reads();
  if ((CONCAT31(extraout_var,bVar1) & 0xffff) == 0) {
    local_8 = pl_error_code();
  }
  bVar1 = local_8 == 0;
  if (!bVar1) {
    pv_set_error_code(local_8);
  }
  return bVar1;
}



/* ================================================================
 * Function: pv_cam_init_reads
 * Address:  100051cd
 * ================================================================ */

/* __stdcall pv_cam_init_reads,0 */

undefined4 pv_cam_init_reads(void)

{
  void *pvVar1;
  undefined4 uVar2;
  int local_c;
  short local_8 [2];
  
                    /* 0x51cd  464  _pv_cam_init_reads@0 */
  pv_set_error_code(0);
  pl_cam_get_total(local_8);
  DAT_10043338 = pv_malloc(local_8[0] * 0x110,0);
  if (DAT_10043338 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    for (local_c = 0; local_c < local_8[0]; local_c = local_c + 1) {
      *(undefined1 *)((int)DAT_10043338 + local_c * 0x110) = 0;
      *(undefined2 *)((int)DAT_10043338 + local_c * 0x110 + 0x12) = 0;
      *(undefined2 *)((int)DAT_10043338 + local_c * 0x110 + 0x14) = 0;
      *(undefined4 *)((int)DAT_10043338 + local_c * 0x110 + 0x18) = 0;
      *(undefined2 *)((int)DAT_10043338 + local_c * 0x110 + 0x1c) = 0;
      *(undefined2 *)((int)DAT_10043338 + local_c * 0x110 + 0x1e) = 0;
      *(undefined2 *)((int)DAT_10043338 + local_c * 0x110 + 0x20) = 0;
      *(undefined2 *)((int)DAT_10043338 + local_c * 0x110 + 0x22) = 0;
      *(undefined2 *)((int)DAT_10043338 + local_c * 0x110 + 0x24) = 0;
      *(undefined2 *)((int)DAT_10043338 + local_c * 0x110 + 0x26) = 0;
      *(undefined2 *)((int)DAT_10043338 + local_c * 0x110 + 0x28) = 0;
      *(undefined2 *)((int)DAT_10043338 + local_c * 0x110 + 0x2a) = 0;
      *(undefined2 *)((int)DAT_10043338 + local_c * 0x110 + 0x2c) = 0;
      *(undefined2 *)((int)DAT_10043338 + local_c * 0x110 + 0x2e) = 0;
      *(undefined2 *)((int)DAT_10043338 + local_c * 0x110 + 0x30) = 0;
      *(undefined2 *)((int)DAT_10043338 + local_c * 0x110 + 0x32) = 0;
      *(undefined2 *)((int)DAT_10043338 + local_c * 0x110 + 0x34) = 0;
      *(undefined2 *)((int)DAT_10043338 + local_c * 0x110 + 0x36) = 0;
      pvVar1 = DAT_10043338;
      *(undefined4 *)((int)DAT_10043338 + local_c * 0x110 + 0x38) = 0;
      *(undefined4 *)((int)pvVar1 + local_c * 0x110 + 0x3c) = 0;
      *(undefined2 *)((int)DAT_10043338 + local_c * 0x110 + 0x40) = 0;
      *(undefined2 *)((int)DAT_10043338 + local_c * 0x110 + 0x42) = 0;
    }
    uVar2 = CONCAT22(local_8[0] >> 0xf,1);
  }
  return uVar2;
}



/* ================================================================
 * Function: pv_cam_uninit_reads
 * Address:  10005405
 * ================================================================ */

/* __stdcall pv_cam_uninit_reads,0 */

bool pv_cam_uninit_reads(void)

{
  uint uVar1;
  short local_8;
  
                    /* 0x5405  472  _pv_cam_uninit_reads@0 */
  pv_set_error_code(0);
  local_8 = 0;
  uVar1 = pv_free(DAT_10043338,0);
  DAT_10043338 = (void *)0x0;
  if ((uVar1 & 0xffff) == 0) {
    local_8 = pl_error_code();
  }
  if (local_8 != 0) {
    pv_set_error_code(local_8);
  }
  return local_8 == 0;
}



/* ================================================================
 * Function: pv_cam_send_debug
 * Address:  1000546d
 * ================================================================ */

uint pv_cam_send_debug(short param_1,char *param_2,undefined2 param_3,char *param_4)

{
  short sVar1;
  uint uVar2;
  
                    /* 0x546d  3  pv_cam_send_debug */
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else {
    sVar1 = *(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c);
    if (sVar1 == 0) {
      uVar2 = pm_cam_send_debug(param_1,param_2,
                                CONCAT22((short)((uint)DAT_10043330 >> 0x10),param_3),param_4);
    }
    else {
      uVar2 = (uint)(ushort)(sVar1 >> 0xf) << 0x10;
    }
  }
  return uVar2;
}



/* ================================================================
 * Function: pv_cam_write_read
 * Address:  100054c9
 * ================================================================ */

uint pv_cam_write_read(short param_1,byte param_2,ushort param_3,char *param_4,LPVOID param_5)

{
  short sVar1;
  uint uVar2;
  
                    /* 0x54c9  4  pv_cam_write_read */
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else {
    sVar1 = *(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c);
    if (sVar1 == 0) {
      uVar2 = pm_cam_write_read(param_1,param_2,param_3,param_4,param_5);
    }
    else {
      uVar2 = (uint)(ushort)(sVar1 >> 0xf) << 0x10;
    }
  }
  return uVar2;
}



/* ================================================================
 * Function: pv_script_set_hook
 * Address:  10005529
 * ================================================================ */

uint pv_script_set_hook(undefined4 param_1)

{
  uint uVar1;
  
                    /* 0x5529  113  pv_script_set_hook */
  uVar1 = pm_script_set_hook(param_1);
  return uVar1;
}



/* ================================================================
 * Function: pv_cam_get_type
 * Address:  10005544
 * ================================================================ */

bool pv_cam_get_type(short param_1,undefined2 *param_2)

{
  uint uVar1;
  bool bVar2;
  
                    /* 0x5544  142  pv_cam_get_type */
  uVar1 = pl_cam_check(param_1);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *param_2 = *(undefined2 *)(DAT_10043330 + 0x14 + param_1 * 0x2c);
  }
  return bVar2;
}



/* ================================================================
 * Function: pi_dd_active
 * Address:  10005580
 * ================================================================ */

/* __stdcall pi_dd_active,8 */

int pi_dd_active(short param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined2 extraout_var;
  ushort extraout_var_00;
  int iVar3;
  ushort extraout_var_01;
  uint uVar4;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
                    /* 0x5580  198  _pi_dd_active@8 */
  local_8 = 0;
  iVar3 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
  if (iVar3 == 0) {
    pv_set_error_code(0xb6);
    iVar3 = (uint)extraout_var_01 << 0x10;
  }
  else if (DAT_10042750 == 0) {
    pv_set_error_code(0xc4);
    iVar3 = (uint)extraout_var_00 << 0x10;
  }
  else {
    local_10 = *(uint *)(DAT_10042750 + 4 + param_1 * 0x20);
    if (0x400000 < local_10) {
      local_10 = 0x400000;
    }
    iVar1 = (**(code **)(iVar3 + 0x21c))(iVar3);
    iVar2 = (**(code **)(iVar3 + 0x220))(iVar3);
    local_c = iVar1 * iVar2;
    uVar4 = local_c & 0x80000001;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
    }
    if (uVar4 != 0) {
      local_c = local_c + 1;
    }
    local_c = local_c * 2;
    if (local_c != 0) {
      local_8 = (local_10 / local_c) * local_c;
    }
    (**(code **)(iVar3 + 0x24))(iVar3,0x121,1);
    (**(code **)(iVar3 + 0x24))(iVar3,0x122,param_2);
    (**(code **)(iVar3 + 0x24))(iVar3,0x123,local_8);
    (**(code **)(iVar3 + 0x3e0))(iVar3,1);
    (**(code **)(iVar3 + 0x348))(iVar3,0x7fff);
    (**(code **)(iVar3 + 4))(iVar3);
    iVar3 = CONCAT22(extraout_var,1);
  }
  return iVar3;
}



/* ================================================================
 * Function: pi_dd_get_info
 * Address:  100056c8
 * ================================================================ */

/* __stdcall pi_dd_get_info,12 */

undefined4 pi_dd_get_info(undefined4 param_1,short param_2,char *param_3)

{
                    /* 0x56c8  199  _pi_dd_get_info@12 */
  _snprintf(param_3,(int)param_2,s_Princeton_Camera_1002c728);
  param_3[param_2 + -1] = '\0';
  return CONCAT22((short)((uint)param_3 >> 0x10),1);
}



/* ================================================================
 * Function: pi_dd_get_info_length
 * Address:  100056f6
 * ================================================================ */

/* __stdcall pi_dd_get_info_length,8 */

undefined4 pi_dd_get_info_length(undefined4 param_1,undefined2 *param_2)

{
  size_t sVar1;
  
                    /* 0x56f6  200  _pi_dd_get_info_length@8 */
  sVar1 = strlen(s_Princeton_Camera_1002c73c);
  *param_2 = (short)sVar1;
  return CONCAT22((short)(sVar1 >> 0x10),1);
}



/* ================================================================
 * Function: pi_dd_get_retries
 * Address:  10005714
 * ================================================================ */

/* __stdcall pi_dd_get_retries,8 */

undefined4 pi_dd_get_retries(undefined4 param_1,undefined2 *param_2)

{
                    /* 0x5714  201  _pi_dd_get_retries@8 */
  pv_set_error_code(0);
  *param_2 = 10;
  return CONCAT22((short)((uint)param_2 >> 0x10),1);
}



/* ================================================================
 * Function: pi_dd_get_timeout
 * Address:  1000572e
 * ================================================================ */

/* __stdcall pi_dd_get_timeout,8 */

undefined4 pi_dd_get_timeout(undefined4 param_1,undefined2 *param_2)

{
                    /* 0x572e  202  _pi_dd_get_timeout@8 */
  *param_2 = 0x15e;
  return CONCAT22((short)((uint)param_2 >> 0x10),1);
}



/* ================================================================
 * Function: pi_dd_get_ver
 * Address:  10005741
 * ================================================================ */

/* __stdcall pi_dd_get_ver,8 */

bool pi_dd_get_ver(short param_1,ushort *param_2)

{
  int iVar1;
  int local_10 [3];
  
                    /* 0x5741  203  _pi_dd_get_ver@8 */
  iVar1 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
  if (iVar1 == 0) {
    pv_set_error_code(0xb6);
  }
  else {
    (**(code **)(iVar1 + 0x34))(iVar1,0xbf,local_10);
    *param_2 = (ushort)(local_10[0] / 10 << 8) | (ushort)(local_10[0] % 10 << 4);
  }
  return iVar1 != 0;
}



/* ================================================================
 * Function: pi_dd_set_retries
 * Address:  100057cc
 * ================================================================ */

/* __stdcall pi_dd_set_retries,8 */

undefined2 pi_dd_set_retries(void)

{
                    /* 0x57cc  204  _pi_dd_set_retries@8 */
  pv_set_error_code(0x7c);
  return 0;
}



/* ================================================================
 * Function: pi_dd_set_timeout
 * Address:  100057dd
 * ================================================================ */

/* __stdcall pi_dd_set_timeout,8 */

undefined2 pi_dd_set_timeout(void)

{
                    /* 0x57dd  205  _pi_dd_set_timeout@8 */
  pv_set_error_code(0x7a);
  return 0;
}



/* ================================================================
 * Function: pl_dd_get_info
 * Address:  100057f0
 * ================================================================ */

uint pl_dd_get_info(short param_1,short param_2,char *param_3)

{
  short sVar1;
  uint uVar2;
  
                    /* 0x57f0  63  pl_dd_get_info */
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else {
    sVar1 = *(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c);
    if (sVar1 == 0) {
      uVar2 = pm_dd_get_info(param_1,param_2,param_3);
    }
    else {
      uVar2 = pi_dd_get_info(CONCAT22(sVar1 >> 0xf,param_1),param_2,param_3);
    }
  }
  return uVar2;
}



/* ================================================================
 * Function: pl_dd_get_info_length
 * Address:  10005860
 * ================================================================ */

uint pl_dd_get_info_length(short param_1,undefined2 *param_2)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  
                    /* 0x5860  64  pl_dd_get_info_length */
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    bVar1 = pm_dd_get_info_length(param_1,param_2);
    uVar2 = CONCAT22((short)((uint3)extraout_var >> 8),(short)CONCAT31(extraout_var,bVar1));
  }
  else {
    uVar2 = pi_dd_get_info_length(CONCAT22((short)((uint)(param_1 * 0x2c) >> 0x10),param_1),param_2)
    ;
  }
  return uVar2;
}



/* ================================================================
 * Function: pl_dd_get_retries
 * Address:  100058c6
 * ================================================================ */

uint pl_dd_get_retries(short param_1,undefined2 *param_2)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  
                    /* 0x58c6  65  pl_dd_get_retries */
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    bVar1 = pm_dd_get_retries(param_1,param_2);
    uVar2 = CONCAT22((short)((uint3)extraout_var >> 8),(short)CONCAT31(extraout_var,bVar1));
  }
  else {
    uVar2 = pi_dd_get_retries(CONCAT22((short)((uint)(param_1 * 0x2c) >> 0x10),param_1),param_2);
  }
  return uVar2;
}



/* ================================================================
 * Function: pl_dd_get_timeout
 * Address:  1000592c
 * ================================================================ */

uint pl_dd_get_timeout(short param_1,undefined2 *param_2)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  
                    /* 0x592c  66  pl_dd_get_timeout */
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    bVar1 = pm_dd_get_timeout(param_1,param_2);
    uVar2 = CONCAT22((short)((uint3)extraout_var >> 8),(short)CONCAT31(extraout_var,bVar1));
  }
  else {
    uVar2 = pi_dd_get_timeout(CONCAT22((short)((uint)(param_1 * 0x2c) >> 0x10),param_1),param_2);
  }
  return uVar2;
}



/* ================================================================
 * Function: pl_dd_get_ver
 * Address:  10005992
 * ================================================================ */

uint pl_dd_get_ver(short param_1,ushort *param_2)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  
                    /* 0x5992  67  pl_dd_get_ver */
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    bVar1 = pm_dd_get_ver(param_1,param_2);
    uVar2 = CONCAT22((short)((uint3)extraout_var >> 8),(short)CONCAT31(extraout_var,bVar1));
  }
  else {
    bVar1 = pi_dd_get_ver(param_1,param_2);
    uVar2 = CONCAT22((short)((uint3)extraout_var_00 >> 8),(short)CONCAT31(extraout_var_00,bVar1));
  }
  return uVar2;
}



/* ================================================================
 * Function: pl_dd_set_retries
 * Address:  100059f8
 * ================================================================ */

uint pl_dd_set_retries(short param_1,undefined2 param_2)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined3 extraout_var;
  undefined2 extraout_var_00;
  
                    /* 0x59f8  68  pl_dd_set_retries */
  uVar3 = pl_cam_check(param_1);
  if ((uVar3 & 0xffff) == 0) {
    uVar3 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    bVar1 = pm_dd_set_retries(param_1,param_2);
    uVar3 = CONCAT22((short)((uint3)extraout_var >> 8),(short)CONCAT31(extraout_var,bVar1));
  }
  else {
    uVar2 = pi_dd_set_retries();
    uVar3 = CONCAT22(extraout_var_00,uVar2);
  }
  return uVar3;
}



/* ================================================================
 * Function: pl_dd_set_timeout
 * Address:  10005a60
 * ================================================================ */

uint pl_dd_set_timeout(short param_1,undefined2 param_2)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  
                    /* 0x5a60  69  pl_dd_set_timeout */
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    bVar1 = pm_dd_set_timeout(param_1,param_2);
    uVar2 = CONCAT22((short)((uint3)extraout_var >> 8),(short)CONCAT31(extraout_var,bVar1));
  }
  else {
    bVar1 = pm_dd_set_timeout(param_1,param_2);
    uVar2 = CONCAT22((short)((uint3)extraout_var_00 >> 8),(short)CONCAT31(extraout_var_00,bVar1));
  }
  return uVar2;
}



/* ================================================================
 * Function: pl_ddi_get_ver
 * Address:  10005ac8
 * ================================================================ */

bool pl_ddi_get_ver(undefined2 *param_1)

{
  short sVar1;
  uint uVar2;
  
                    /* 0x5ac8  70  pl_ddi_get_ver */
  pv_set_error_code(0);
  uVar2 = pd_ddi_get_ver(param_1);
  sVar1 = (short)uVar2;
  if (sVar1 != 0) {
    pv_set_error_code(sVar1);
  }
  return sVar1 == 0;
}



/* ================================================================
 * Function: pm_dd_active
 * Address:  10005b10
 * ================================================================ */

/* __stdcall pm_dd_active,8 */

int pm_dd_active(short param_1,LPVOID param_2)

{
  uint uVar1;
  short sVar2;
  ushort extraout_var;
  int iVar3;
  ushort extraout_var_00;
  undefined2 extraout_var_01;
  ushort extraout_var_02;
  
                    /* 0x5b10  312  _pm_dd_active@8 */
  if (*(short *)(DAT_10043330 + 8 + param_1 * 0x2c) == 0) {
    pv_set_error_code(0xa4);
    iVar3 = (uint)extraout_var << 0x10;
  }
  else {
    uVar1 = *(uint *)(DAT_10042750 + 4 + param_1 * 0x20);
    if (uVar1 == 0) {
      pv_set_error_code(0xa3);
      iVar3 = (uint)extraout_var_00 << 0x10;
    }
    else {
      sVar2 = pd_driver_set_image_data_active
                        (*(short *)(DAT_10043330 + 4 + param_1 * 0x2c),uVar1,param_2);
      if (sVar2 == 0) {
        iVar3 = CONCAT22(extraout_var_01,1);
      }
      else {
        pv_set_error_code(sVar2);
        iVar3 = (uint)extraout_var_02 << 0x10;
      }
    }
  }
  return iVar3;
}



/* ================================================================
 * Function: pm_dd_get_info
 * Address:  10005baa
 * ================================================================ */

/* __stdcall pm_dd_get_info,12 */

int pm_dd_get_info(short param_1,short param_2,LPVOID param_3)

{
  ushort uVar1;
  ushort extraout_var;
  int iVar2;
  ushort extraout_var_00;
  undefined4 in_EDX;
  
                    /* 0x5baa  313  _pm_dd_get_info@12 */
  if (param_2 < 1) {
    pv_set_error_code(0x85);
    iVar2 = (uint)extraout_var << 0x10;
  }
  else {
    uVar1 = pd_driver_get_info_dump
                      (*(short *)(DAT_10043330 + 4 + param_1 * 0x2c),
                       CONCAT22((short)((uint)in_EDX >> 0x10),param_2),param_3);
    if (uVar1 == 0) {
      *(undefined1 *)((int)param_3 + param_2 + -1) = 0;
      iVar2 = CONCAT22((short)((uint)param_3 >> 0x10),1);
    }
    else {
      pv_set_error_code(uVar1);
      iVar2 = (uint)extraout_var_00 << 0x10;
    }
  }
  return iVar2;
}



/* ================================================================
 * Function: pm_dd_get_info_length
 * Address:  10005c18
 * ================================================================ */

/* __stdcall pm_dd_get_info_length,8 */

bool pm_dd_get_info_length(short param_1,undefined2 *param_2)

{
  bool bVar1;
  undefined2 local_c [2];
  short local_8;
  
                    /* 0x5c18  314  _pm_dd_get_info_length@8 */
  local_8 = pd_driver_get_info_length(*(short *)(DAT_10043330 + 4 + param_1 * 0x2c),local_c);
  bVar1 = local_8 == 0;
  if (bVar1) {
    *param_2 = local_c[0];
  }
  else {
    pv_set_error_code(local_8);
  }
  return bVar1;
}



/* ================================================================
 * Function: pm_dd_get_retries
 * Address:  10005c69
 * ================================================================ */

/* __stdcall pm_dd_get_retries,8 */

bool pm_dd_get_retries(short param_1,LPVOID param_2)

{
  short sVar1;
  
                    /* 0x5c69  315  _pm_dd_get_retries@8 */
  sVar1 = pd_driver_get_retries(*(short *)(DAT_10043330 + 4 + param_1 * 0x2c),param_2);
  if (sVar1 != 0) {
    pv_set_error_code(sVar1);
  }
  return sVar1 == 0;
}



/* ================================================================
 * Function: pm_dd_get_timeout
 * Address:  10005cae
 * ================================================================ */

/* __stdcall pm_dd_get_timeout,8 */

bool pm_dd_get_timeout(short param_1,LPVOID param_2)

{
  short sVar1;
  
                    /* 0x5cae  316  _pm_dd_get_timeout@8 */
  sVar1 = pd_driver_get_timeout(*(short *)(DAT_10043330 + 4 + param_1 * 0x2c),param_2);
  if (sVar1 != 0) {
    pv_set_error_code(sVar1);
  }
  return sVar1 == 0;
}



/* ================================================================
 * Function: pm_dd_get_ver
 * Address:  10005cf3
 * ================================================================ */

/* __stdcall pm_dd_get_ver,8 */

bool pm_dd_get_ver(short param_1,void *param_2)

{
  short sVar1;
  
                    /* 0x5cf3  317  _pm_dd_get_ver@8 */
  sVar1 = pd_driver_get_ver(*(short *)(DAT_10043330 + 4 + param_1 * 0x2c),param_2);
  if (sVar1 != 0) {
    pv_set_error_code(sVar1);
  }
  return sVar1 == 0;
}



/* ================================================================
 * Function: pm_dd_set_retries
 * Address:  10005d38
 * ================================================================ */

/* __stdcall pm_dd_set_retries,8 */

bool pm_dd_set_retries(short param_1,undefined2 param_2)

{
  short sVar1;
  undefined4 in_EAX;
  
                    /* 0x5d38  318  _pm_dd_set_retries@8 */
  sVar1 = pd_driver_set_retries
                    (*(short *)(DAT_10043330 + 4 + param_1 * 0x2c),
                     CONCAT22((short)((uint)in_EAX >> 0x10),param_2));
  if (sVar1 != 0) {
    pv_set_error_code(sVar1);
  }
  return sVar1 == 0;
}



/* ================================================================
 * Function: pm_dd_set_timeout
 * Address:  10005d7e
 * ================================================================ */

/* __stdcall pm_dd_set_timeout,8 */

bool pm_dd_set_timeout(short param_1,undefined2 param_2)

{
  short sVar1;
  undefined4 in_EAX;
  
                    /* 0x5d7e  319  _pm_dd_set_timeout@8 */
  sVar1 = pd_driver_set_timeout
                    (*(short *)(DAT_10043330 + 4 + param_1 * 0x2c),
                     CONCAT22((short)((uint)in_EAX >> 0x10),param_2));
  if (sVar1 != 0) {
    pv_set_error_code(sVar1);
  }
  return sVar1 == 0;
}



/* ================================================================
 * Function: pv_dd_active
 * Address:  10005dd0
 * ================================================================ */

uint pv_dd_active(short param_1,LPVOID param_2)

{
  uint uVar1;
  
                    /* 0x5dd0  5  pv_dd_active */
  uVar1 = pl_cam_check(param_1);
  if ((uVar1 & 0xffff) == 0) {
    uVar1 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    uVar1 = pm_dd_active(param_1,param_2);
  }
  else {
    uVar1 = pi_dd_active(param_1,param_2);
  }
  return uVar1;
}



/* ================================================================
 * Function: pl_subsys_do_diag
 * Address:  10005e40
 * ================================================================ */

uint pl_subsys_do_diag(short param_1,undefined1 param_2,ushort *param_3)

{
  short sVar1;
  bool bVar2;
  uint uVar3;
  undefined3 extraout_var;
  
                    /* 0x5e40  100  pl_subsys_do_diag */
  uVar3 = pl_cam_check(param_1);
  if ((uVar3 & 0xffff) == 0) {
    uVar3 = 0;
  }
  else {
    sVar1 = *(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c);
    if (sVar1 == 0) {
      bVar2 = pm_subsys_do_diag(param_1,param_2,param_3);
      uVar3 = CONCAT22((short)((uint3)extraout_var >> 8),(short)CONCAT31(extraout_var,bVar2));
    }
    else {
      *param_3 = 0;
      uVar3 = CONCAT22(sVar1 >> 0xf,1);
    }
  }
  return uVar3;
}



/* ================================================================
 * Function: pl_subsys_get_id
 * Address:  10005ea0
 * ================================================================ */

uint pl_subsys_get_id(short param_1,undefined1 param_2,ushort *param_3,undefined1 *param_4)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  ushort extraout_var_00;
  
                    /* 0x5ea0  101  pl_subsys_get_id */
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    bVar1 = pm_subsys_get_id(param_1,param_2,param_3,param_4);
    uVar2 = CONCAT22((short)((uint3)extraout_var >> 8),(short)CONCAT31(extraout_var,bVar1));
  }
  else {
    pv_set_error_code(0xc0);
    uVar2 = (uint)extraout_var_00 << 0x10;
  }
  return uVar2;
}



/* ================================================================
 * Function: pl_subsys_get_name
 * Address:  10005f05
 * ================================================================ */

uint pl_subsys_get_name(short param_1,undefined1 param_2,char *param_3)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  ushort extraout_var_00;
  
                    /* 0x5f05  102  pl_subsys_get_name */
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    bVar1 = pm_subsys_get_name(param_1,param_2,param_3);
    uVar2 = CONCAT22((short)((uint3)extraout_var >> 8),(short)CONCAT31(extraout_var,bVar1));
  }
  else {
    pv_set_error_code(0xc1);
    uVar2 = (uint)extraout_var_00 << 0x10;
  }
  return uVar2;
}



/* ================================================================
 * Function: pm_subsys_do_diag
 * Address:  10005f70
 * ================================================================ */

/* WARNING: Removing unreachable block (ram,0x10005fab) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffff4 : 0x10005fd7 */
/* WARNING: Removing unreachable block (ram,0x10006003) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* __stdcall pm_subsys_do_diag,12 */

bool pm_subsys_do_diag(short param_1,undefined1 param_2,ushort *param_3)

{
  uint uVar1;
  bool bVar2;
  char local_10;
  byte bStack_f;
  undefined1 uStack_e;
  undefined1 uStack_d;
  undefined1 local_c;
  undefined1 local_b;
  undefined2 local_8;
  undefined2 uStack_6;
  
                    /* 0x5f70  439  _pm_subsys_do_diag@12 */
  _local_8 = CONCAT22(uStack_6,6);
  local_10 = '&';
  bStack_f = 0x2f;
  uStack_d = 0x28;
  local_c = 0;
  local_b = 2;
  uStack_e = param_2;
  local_b = 2;
  local_c = 0;
  uStack_d = 0x28;
  bStack_f = 0x2f;
  local_10 = '&';
  uVar1 = pm_cam_write_read(param_1,0x3f,6,&local_10,&local_10);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *param_3 = CONCAT11(bStack_f,local_10) << 8 | (ushort)bStack_f;
  }
  return bVar2;
}



/* ================================================================
 * Function: pm_subsys_get_id
 * Address:  1000606e
 * ================================================================ */

/* WARNING: Removing unreachable block (ram,0x100060a9) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffff4 : 0x100060d5 */
/* WARNING: Removing unreachable block (ram,0x10006101) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* __stdcall pm_subsys_get_id,16 */

bool pm_subsys_get_id(short param_1,undefined1 param_2,ushort *param_3,undefined1 *param_4)

{
  uint uVar1;
  bool bVar2;
  char local_10;
  byte bStack_f;
  undefined1 uStack_e;
  undefined1 uStack_d;
  undefined1 local_c;
  undefined1 local_b;
  undefined2 local_8;
  undefined2 uStack_6;
  
                    /* 0x606e  440  _pm_subsys_get_id@16 */
  _local_8 = CONCAT22(uStack_6,6);
  local_10 = '&';
  bStack_f = 0x21;
  uStack_d = 0x28;
  local_c = 0;
  local_b = 3;
  uStack_e = param_2;
  local_b = 3;
  local_c = 0;
  uStack_d = 0x28;
  bStack_f = 0x21;
  local_10 = '&';
  uVar1 = pm_cam_write_read(param_1,0x3f,6,&local_10,&local_10);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *param_3 = CONCAT11(bStack_f,local_10) << 8 | (ushort)bStack_f;
    *param_4 = uStack_e;
  }
  return bVar2;
}



/* ================================================================
 * Function: pm_subsys_get_name
 * Address:  10006174
 * ================================================================ */

/* __stdcall pm_subsys_get_name,12 */

bool pm_subsys_get_name(short param_1,undefined1 param_2,char *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  char local_188 [254];
  char acStack_8a [5];
  undefined1 local_85;
  undefined1 local_84;
  undefined1 local_83;
  undefined4 local_82 [30];
  uint local_8;
  
                    /* 0x6174  441  _pm_subsys_get_name@12 */
  local_8 = CONCAT22(local_8._2_2_,6);
  acStack_8a[2] = 0x26;
  acStack_8a[3] = 0x22;
  local_85 = 0x28;
  local_84 = 0;
  local_83 = 0x80;
  puVar3 = local_82;
  for (iVar2 = 0x1e; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  acStack_8a[4] = param_2;
  if (0x80 < (local_8 & 0xffff)) {
    sprintf(local_188,s_PVLIB__SIZE_ERROR_in____s___writ_1002d5f0,0x80,local_8 & 0xffff);
  }
  if (0x80 < CONCAT11(acStack_8a[local_8 & 0xffff],acStack_8a[(local_8 & 0xffff) + 1])) {
    sprintf(local_188,s_PVLIB__SIZE_ERROR_in____s___read_1002d640,0x80,
            (uint)CONCAT11(acStack_8a[local_8 & 0xffff],acStack_8a[(local_8 & 0xffff) + 1]));
  }
  uVar1 = pm_cam_write_read(param_1,0x3f,(ushort)local_8,acStack_8a + 2,acStack_8a + 2);
  bVar4 = (uVar1 & 0xffff) != 0;
  if (bVar4) {
    strncpy(param_3,acStack_8a + 2,0x80);
  }
  return bVar4;
}



/* ================================================================
 * Function: pl_error_code
 * Address:  100062b0
 * ================================================================ */

undefined2 pl_error_code(void)

{
                    /* 0x62b0  71  pl_error_code */
  if (DAT_10043328 == 0) {
    DAT_10042718 = 0xc3;
  }
  return DAT_10042718;
}



/* ================================================================
 * Function: pl_error_message
 * Address:  100062d0
 * ================================================================ */

uint pl_error_message(short param_1,char *param_2)

{
  uint in_EAX;
  uint uVar1;
  char *pcVar2;
  undefined2 local_8;
  undefined2 uVar3;
  
                    /* 0x62d0  72  pl_error_message */
  if (param_2 == (char *)0x0) {
    uVar1 = in_EAX & 0xffff0000;
  }
  else {
    local_8 = 1;
    if (param_1 < 0) {
      pcVar2 = strncpy(param_2,PTR_s_Unknown_error_1002dc2c,0xff);
      uVar3 = (undefined2)((uint)pcVar2 >> 0x10);
      local_8 = 0;
    }
    else if (param_1 == 0) {
      pcVar2 = strncpy(param_2,PTR_s_No_error_1002dc28,0xff);
      uVar3 = (undefined2)((uint)pcVar2 >> 0x10);
    }
    else if ((param_1 < 1) || (0xc5 < param_1)) {
      if ((param_1 < 1000) || (1000 < param_1)) {
        if ((param_1 < 2000) || (0x7f1 < param_1)) {
          if ((param_1 < 3000) || (0xbec < param_1)) {
            if ((param_1 < 4000) || (0xfae < param_1)) {
              if ((param_1 < 14000) || (0x36b1 < param_1)) {
                if ((param_1 < 29000) || (0x7150 < param_1)) {
                  if ((param_1 < 30000) || (0x7531 < param_1)) {
                    if ((param_1 < 31000) || (0x791d < param_1)) {
                      if ((param_1 < 32000) || (0x7d0a < param_1)) {
                        pcVar2 = strncpy(param_2,PTR_s_Unknown_error_1002dc2c,0xff);
                        uVar3 = (undefined2)((uint)pcVar2 >> 0x10);
                        local_8 = 0;
                      }
                      else {
                        pcVar2 = strncpy(param_2,*(char **)(param_1 * 4 + 0x1000e7f8),0xff);
                        uVar3 = (undefined2)((uint)pcVar2 >> 0x10);
                      }
                    }
                    else {
                      pcVar2 = strncpy(param_2,*(char **)(param_1 * 4 + 0x1000f77c),0xff);
                      uVar3 = (undefined2)((uint)pcVar2 >> 0x10);
                    }
                  }
                  else {
                    pcVar2 = strncpy(param_2,*(char **)(param_1 * 4 + 0x10010710),0xff);
                    uVar3 = (undefined2)((uint)pcVar2 >> 0x10);
                  }
                }
                else {
                  pcVar2 = strncpy(param_2,*(char **)(param_1 * 4 + 0x10011688),0xff);
                  uVar3 = (undefined2)((uint)pcVar2 >> 0x10);
                }
              }
              else {
                pcVar2 = strncpy(param_2,*(char **)(param_1 * 4 + 0x100200dc),0xff);
                uVar3 = (undefined2)((uint)pcVar2 >> 0x10);
              }
            }
            else {
              pcVar2 = strncpy(param_2,*(char **)("_pm_spdtab_get_max_gain@8" + param_1 * 4 + 0x12),
                               0xff);
              uVar3 = (undefined2)((uint)pcVar2 >> 0x10);
            }
          }
          else {
            pcVar2 = strncpy(param_2,*(char **)(&DAT_1002aba4 + param_1 * 4),0xff);
            uVar3 = (undefined2)((uint)pcVar2 >> 0x10);
          }
        }
        else {
          pcVar2 = strncpy(param_2,*(char **)(s__Header___PVCAM_SourceCommon_RS0_1002babc +
                                             param_1 * 4 + 0xc),0xff);
          uVar3 = (undefined2)((uint)pcVar2 >> 0x10);
        }
      }
      else {
        pcVar2 = strncpy(param_2,*(char **)(s__Header___PVCAM_SourceCommon_RS0_1002ca3c +
                                           param_1 * 4 + 0x24),0xff);
        uVar3 = (undefined2)((uint)pcVar2 >> 0x10);
      }
    }
    else {
      pcVar2 = strncpy(param_2,(&PTR_s__Header___PVCAM_v2_6_SourceCommo_1002d6e8)[param_1],0xff);
      uVar3 = (undefined2)((uint)pcVar2 >> 0x10);
    }
    param_2[0xfe] = '\0';
    uVar1 = CONCAT22(uVar3,local_8);
  }
  return uVar1;
}



/* ================================================================
 * Function: pv_error_init_rept
 * Address:  100065b0
 * ================================================================ */

/* __stdcall pv_error_init_rept,0 */

undefined2 pv_error_init_rept(void)

{
                    /* 0x65b0  484  _pv_error_init_rept@0 */
  return 1;
}



/* ================================================================
 * Function: pv_error_uninit_rept
 * Address:  100065b9
 * ================================================================ */

/* __stdcall pv_error_uninit_rept,0 */

undefined2 pv_error_uninit_rept(void)

{
                    /* 0x65b9  485  _pv_error_uninit_rept@0 */
  return 1;
}



/* ================================================================
 * Function: pv_set_error_code
 * Address:  100065c2
 * ================================================================ */

undefined2 pv_set_error_code(undefined2 param_1)

{
                    /* 0x65c2  105  pv_set_error_code */
  DAT_10042718 = param_1;
  return 1;
}



/* ================================================================
 * Function: pi_ccd_get_clear_cycles
 * Address:  100065e0
 * ================================================================ */

/* __stdcall pi_ccd_get_clear_cycles,8 */

bool pi_ccd_get_clear_cycles(short param_1,undefined2 *param_2)

{
  int iVar1;
  undefined2 uVar2;
  
                    /* 0x65e0  182  _pi_ccd_get_clear_cycles@8 */
  *param_2 = *(undefined2 *)(DAT_10043334 + 2 + param_1 * 0x24);
  iVar1 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
  if (iVar1 == 0) {
    pv_set_error_code(0x7df);
  }
  else {
    uVar2 = (**(code **)(iVar1 + 0x98))(iVar1);
    *param_2 = uVar2;
  }
  return iVar1 != 0;
}



/* ================================================================
 * Function: pi_ccd_get_tmp
 * Address:  1000664b
 * ================================================================ */

/* __stdcall pi_ccd_get_tmp,8 */

bool pi_ccd_get_tmp(short param_1,undefined2 *param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 local_c;
  undefined4 uStack_8;
  
                    /* 0x664b  183  _pi_ccd_get_tmp@8 */
  local_c = 0;
  uStack_8 = 0;
  iVar1 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
  if (iVar1 == 0) {
    pv_set_error_code(0x7df);
  }
  else {
    (**(code **)(iVar1 + 0x30))(iVar1,0x28,&local_c);
    uVar2 = ftol();
    *param_2 = uVar2;
  }
  return iVar1 != 0;
}



/* ================================================================
 * Function: pi_ccd_get_tmp_setpoint
 * Address:  100066b8
 * ================================================================ */

/* __stdcall pi_ccd_get_tmp_setpoint,8 */

bool pi_ccd_get_tmp_setpoint(short param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  bool bVar2;
  float10 fVar3;
  int iVar4;
  int iVar5;
  
                    /* 0x66b8  184  _pi_ccd_get_tmp_setpoint@8 */
  iVar4 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
  bVar2 = iVar4 == 0;
  if (bVar2) {
    pv_set_error_code(0x7df);
  }
  else {
    iVar5 = iVar4;
    fVar3 = (float10)(**(code **)(iVar4 + 0x54c))(iVar4);
    uVar1 = ftol(iVar4,iVar5,(double)fVar3);
    *param_2 = uVar1;
  }
  return !bVar2;
}



/* ================================================================
 * Function: pl_ccd_get_adc_offset
 * Address:  10006720
 * ================================================================ */

uint pl_ccd_get_adc_offset(short param_1,ushort *param_2)

{
  short sVar1;
  bool bVar2;
  uint uVar3;
  ushort extraout_var_00;
  undefined3 extraout_var;
  
                    /* 0x6720  111  pl_ccd_get_adc_offset */
  uVar3 = pv_cam_get_reads(param_1);
  if ((uVar3 & 0xffff) == 0) {
    uVar3 = 0;
  }
  else if (*(short *)(DAT_10043338 + 0x44 + param_1 * 0x110) == 0) {
    pv_set_error_code(0x7de);
    uVar3 = (uint)extraout_var_00 << 0x10;
  }
  else {
    sVar1 = *(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c);
    if (sVar1 == 0) {
      bVar2 = pm_ccd_get_adc_offset(param_1,param_2);
      uVar3 = CONCAT22((short)((uint3)extraout_var >> 8),(short)CONCAT31(extraout_var,bVar2));
    }
    else {
      uVar3 = (uint)(ushort)(sVar1 >> 0xf) << 0x10;
    }
  }
  return uVar3;
}



/* ================================================================
 * Function: pl_ccd_get_chip_name
 * Address:  1000679d
 * ================================================================ */

bool pl_ccd_get_chip_name(short param_1,char *param_2)

{
  uint uVar1;
  bool bVar2;
  
                    /* 0x679d  33  pl_ccd_get_chip_name */
  uVar1 = pv_cam_get_reads(param_1);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    strncpy(param_2,(char *)(DAT_10043338 + param_1 * 0x110),0x10);
  }
  return bVar2;
}



/* ================================================================
 * Function: pl_ccd_get_clear_cycles
 * Address:  100067e2
 * ================================================================ */

uint pl_ccd_get_clear_cycles(short param_1,undefined2 *param_2)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  
                    /* 0x67e2  34  pl_ccd_get_clear_cycles */
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else {
    *param_2 = *(undefined2 *)(DAT_10043334 + 2 + param_1 * 0x24);
    if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
      uVar2 = CONCAT22((short)((uint)DAT_10043330 >> 0x10),1);
    }
    else {
      bVar1 = pi_ccd_get_clear_cycles(param_1,param_2);
      uVar2 = CONCAT22((short)((uint3)extraout_var >> 8),(short)CONCAT31(extraout_var,bVar1));
    }
  }
  return uVar2;
}



/* ================================================================
 * Function: pl_ccd_get_clear_mode
 * Address:  1000684c
 * ================================================================ */

bool pl_ccd_get_clear_mode(short param_1,undefined2 *param_2)

{
  uint uVar1;
  bool bVar2;
  
                    /* 0x684c  35  pl_ccd_get_clear_mode */
  uVar1 = pl_cam_check(param_1);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *param_2 = *(undefined2 *)(DAT_10043334 + param_1 * 0x24);
  }
  return bVar2;
}



/* ================================================================
 * Function: pl_ccd_get_color_mode
 * Address:  10006885
 * ================================================================ */

undefined4 pl_ccd_get_color_mode(short param_1,short *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
                    /* 0x6885  127  pl_ccd_get_color_mode */
  uVar1 = pv_cam_get_reads(param_1);
  if ((uVar1 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else {
    *param_2 = *(short *)(DAT_10043338 + 0x4a + param_1 * 0x110);
    if (*param_2 != 0) {
      *param_2 = 2;
    }
    uVar2 = 1;
  }
  return uVar2;
}



/* ================================================================
 * Function: pl_ccd_get_cooling_mode
 * Address:  100068d6
 * ================================================================ */

bool pl_ccd_get_cooling_mode(short param_1,undefined2 *param_2)

{
  uint uVar1;
  bool bVar2;
  
                    /* 0x68d6  36  pl_ccd_get_cooling_mode */
  uVar1 = pv_cam_get_reads(param_1);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *param_2 = *(undefined2 *)(DAT_10043338 + 0x12 + param_1 * 0x110);
  }
  return bVar2;
}



/* ================================================================
 * Function: pl_ccd_get_frame_capable
 * Address:  10006913
 * ================================================================ */

bool pl_ccd_get_frame_capable(short param_1,undefined2 *param_2)

{
  uint uVar1;
  bool bVar2;
  
                    /* 0x6913  37  pl_ccd_get_frame_capable */
  uVar1 = pv_cam_get_reads(param_1);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *param_2 = *(undefined2 *)(DAT_10043338 + 0x14 + param_1 * 0x110);
  }
  return bVar2;
}



/* ================================================================
 * Function: pl_ccd_get_fwell_capacity
 * Address:  10006950
 * ================================================================ */

bool pl_ccd_get_fwell_capacity(short param_1,undefined4 *param_2)

{
  uint uVar1;
  bool bVar2;
  
                    /* 0x6950  38  pl_ccd_get_fwell_capacity */
  uVar1 = pv_cam_get_reads(param_1);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *param_2 = *(undefined4 *)(DAT_10043338 + 0x18 + param_1 * 0x110);
  }
  return bVar2;
}



/* ================================================================
 * Function: pl_ccd_get_mpp_capable
 * Address:  1000698b
 * ================================================================ */

bool pl_ccd_get_mpp_capable(short param_1,undefined2 *param_2)

{
  uint uVar1;
  bool bVar2;
  
                    /* 0x698b  39  pl_ccd_get_mpp_capable */
  uVar1 = pv_cam_get_reads(param_1);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *param_2 = *(undefined2 *)(DAT_10043338 + 0x1c + param_1 * 0x110);
  }
  return bVar2;
}



/* ================================================================
 * Function: pl_ccd_get_preamp_dly
 * Address:  100069c8
 * ================================================================ */

bool pl_ccd_get_preamp_dly(short param_1,undefined2 *param_2)

{
  uint uVar1;
  bool bVar2;
  
                    /* 0x69c8  48  pl_ccd_get_preamp_dly */
  uVar1 = pv_cam_get_reads(param_1);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *param_2 = *(undefined2 *)(DAT_10043338 + 0x26 + param_1 * 0x110);
  }
  return bVar2;
}



/* ================================================================
 * Function: pl_ccd_get_preflash
 * Address:  10006a05
 * ================================================================ */

bool pl_ccd_get_preflash(short param_1,undefined2 *param_2)

{
  uint uVar1;
  bool bVar2;
  
                    /* 0x6a05  49  pl_ccd_get_preflash */
  uVar1 = pv_cam_get_reads(param_1);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *param_2 = *(undefined2 *)(DAT_10043338 + 0x28 + param_1 * 0x110);
  }
  return bVar2;
}



/* ================================================================
 * Function: pl_ccd_get_pmode
 * Address:  10006a42
 * ================================================================ */

bool pl_ccd_get_pmode(short param_1,undefined2 *param_2)

{
  uint uVar1;
  bool bVar2;
  
                    /* 0x6a42  45  pl_ccd_get_pmode */
  uVar1 = pl_cam_check(param_1);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *param_2 = *(undefined2 *)(DAT_10043334 + 4 + param_1 * 0x24);
  }
  return bVar2;
}



/* ================================================================
 * Function: pl_ccd_get_preamp_off_control
 * Address:  10006a7c
 * ================================================================ */

bool pl_ccd_get_preamp_off_control(short param_1,undefined4 *param_2)

{
  uint uVar1;
  bool bVar2;
  
                    /* 0x6a7c  128  pl_ccd_get_preamp_off_control */
  uVar1 = pl_cam_check(param_1);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *param_2 = *(undefined4 *)(DAT_10043334 + 0xc + param_1 * 0x24);
  }
  return bVar2;
}



/* ================================================================
 * Function: pl_ccd_get_premask
 * Address:  10006ab4
 * ================================================================ */

bool pl_ccd_get_premask(short param_1,undefined2 *param_2)

{
  uint uVar1;
  bool bVar2;
  
                    /* 0x6ab4  50  pl_ccd_get_premask */
  uVar1 = pv_cam_get_rws(param_1);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *param_2 = *(undefined2 *)(DAT_10043334 + 0x1c + param_1 * 0x24);
  }
  return bVar2;
}



/* ================================================================
 * Function: pl_ccd_get_prescan
 * Address:  10006aee
 * ================================================================ */

bool pl_ccd_get_prescan(short param_1,undefined2 *param_2)

{
  uint uVar1;
  bool bVar2;
  
                    /* 0x6aee  51  pl_ccd_get_prescan */
  uVar1 = pv_cam_get_rws(param_1);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *param_2 = *(undefined2 *)(DAT_10043334 + 0x18 + param_1 * 0x24);
  }
  return bVar2;
}



/* ================================================================
 * Function: pl_ccd_get_postmask
 * Address:  10006b28
 * ================================================================ */

bool pl_ccd_get_postmask(short param_1,undefined2 *param_2)

{
  uint uVar1;
  bool bVar2;
  
                    /* 0x6b28  46  pl_ccd_get_postmask */
  uVar1 = pv_cam_get_rws(param_1);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *param_2 = *(undefined2 *)(DAT_10043334 + 0x1e + param_1 * 0x24);
  }
  return bVar2;
}



/* ================================================================
 * Function: pl_ccd_get_postscan
 * Address:  10006b62
 * ================================================================ */

bool pl_ccd_get_postscan(short param_1,undefined2 *param_2)

{
  uint uVar1;
  bool bVar2;
  
                    /* 0x6b62  47  pl_ccd_get_postscan */
  uVar1 = pv_cam_get_rws(param_1);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *param_2 = *(undefined2 *)(DAT_10043334 + 0x1a + param_1 * 0x24);
  }
  return bVar2;
}



/* ================================================================
 * Function: pl_ccd_get_par_size
 * Address:  10006b9c
 * ================================================================ */

bool pl_ccd_get_par_size(short param_1,undefined2 *param_2)

{
  uint uVar1;
  bool bVar2;
  
                    /* 0x6b9c  40  pl_ccd_get_par_size */
  uVar1 = pv_cam_get_rws(param_1);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *param_2 = *(undefined2 *)(DAT_10043334 + 0x14 + param_1 * 0x24);
  }
  return bVar2;
}



/* ================================================================
 * Function: pl_ccd_get_serial_num
 * Address:  10006bd6
 * ================================================================ */

bool pl_ccd_get_serial_num(short param_1,undefined2 *param_2)

{
  uint uVar1;
  bool bVar2;
  
                    /* 0x6bd6  53  pl_ccd_get_serial_num */
  uVar1 = pv_cam_get_reads(param_1);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *param_2 = *(undefined2 *)(DAT_10043338 + 0x2a + param_1 * 0x110);
  }
  return bVar2;
}



/* ================================================================
 * Function: pl_ccd_get_ser_size
 * Address:  10006c13
 * ================================================================ */

bool pl_ccd_get_ser_size(short param_1,undefined2 *param_2)

{
  uint uVar1;
  bool bVar2;
  
                    /* 0x6c13  52  pl_ccd_get_ser_size */
  uVar1 = pv_cam_get_rws(param_1);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *param_2 = *(undefined2 *)(DAT_10043334 + 0x16 + param_1 * 0x24);
  }
  return bVar2;
}



/* ================================================================
 * Function: pl_ccd_get_summing_well
 * Address:  10006c4d
 * ================================================================ */

bool pl_ccd_get_summing_well(short param_1,undefined2 *param_2)

{
  uint uVar1;
  bool bVar2;
  
                    /* 0x6c4d  54  pl_ccd_get_summing_well */
  uVar1 = pv_cam_get_reads(param_1);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *param_2 = *(undefined2 *)(DAT_10043338 + 0x2c + param_1 * 0x110);
  }
  return bVar2;
}



/* ================================================================
 * Function: pl_ccd_get_tmp
 * Address:  10006c8a
 * ================================================================ */

uint pl_ccd_get_tmp(short param_1,ushort *param_2)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  
                    /* 0x6c8a  55  pl_ccd_get_tmp */
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    bVar1 = pm_ccd_get_tmp(param_1,param_2);
    uVar2 = CONCAT22((short)((uint3)extraout_var >> 8),(short)CONCAT31(extraout_var,bVar1));
  }
  else {
    bVar1 = pi_ccd_get_tmp(param_1,param_2);
    uVar2 = CONCAT22((short)((uint3)extraout_var_00 >> 8),(short)CONCAT31(extraout_var_00,bVar1));
  }
  return uVar2;
}



/* ================================================================
 * Function: pl_ccd_get_tmp_range
 * Address:  10006cf0
 * ================================================================ */

bool pl_ccd_get_tmp_range(short param_1,undefined2 *param_2,undefined2 *param_3)

{
  uint uVar1;
  bool bVar2;
  
                    /* 0x6cf0  56  pl_ccd_get_tmp_range */
  uVar1 = pv_cam_get_reads(param_1);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *param_2 = *(undefined2 *)(DAT_10043338 + 0x30 + param_1 * 0x110);
    *param_3 = *(undefined2 *)(DAT_10043338 + 0x2e + param_1 * 0x110);
  }
  return bVar2;
}



/* ================================================================
 * Function: pl_ccd_get_tmp_setpoint
 * Address:  10006d48
 * ================================================================ */

uint pl_ccd_get_tmp_setpoint(short param_1,ushort *param_2)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  
                    /* 0x6d48  57  pl_ccd_get_tmp_setpoint */
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    bVar1 = pm_ccd_get_tmp_setpoint(param_1,param_2);
    uVar2 = CONCAT22((short)((uint3)extraout_var >> 8),(short)CONCAT31(extraout_var,bVar1));
  }
  else {
    bVar1 = pi_ccd_get_tmp_setpoint(param_1,param_2);
    uVar2 = CONCAT22((short)((uint3)extraout_var_00 >> 8),(short)CONCAT31(extraout_var_00,bVar1));
  }
  return uVar2;
}



/* ================================================================
 * Function: pl_ccd_get_pix_par_dist
 * Address:  10006dae
 * ================================================================ */

bool pl_ccd_get_pix_par_dist(short param_1,undefined2 *param_2)

{
  uint uVar1;
  bool bVar2;
  
                    /* 0x6dae  41  pl_ccd_get_pix_par_dist */
  uVar1 = pv_cam_get_reads(param_1);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *param_2 = *(undefined2 *)(DAT_10043338 + 0x1e + param_1 * 0x110);
  }
  return bVar2;
}



/* ================================================================
 * Function: pl_ccd_get_pix_par_size
 * Address:  10006deb
 * ================================================================ */

bool pl_ccd_get_pix_par_size(short param_1,undefined2 *param_2)

{
  uint uVar1;
  bool bVar2;
  
                    /* 0x6deb  42  pl_ccd_get_pix_par_size */
  uVar1 = pv_cam_get_reads(param_1);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *param_2 = *(undefined2 *)(DAT_10043338 + 0x20 + param_1 * 0x110);
  }
  return bVar2;
}



/* ================================================================
 * Function: pl_ccd_get_pix_ser_dist
 * Address:  10006e28
 * ================================================================ */

bool pl_ccd_get_pix_ser_dist(short param_1,undefined2 *param_2)

{
  uint uVar1;
  bool bVar2;
  
                    /* 0x6e28  43  pl_ccd_get_pix_ser_dist */
  uVar1 = pv_cam_get_reads(param_1);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *param_2 = *(undefined2 *)(DAT_10043338 + 0x22 + param_1 * 0x110);
  }
  return bVar2;
}



/* ================================================================
 * Function: pl_ccd_get_pix_ser_size
 * Address:  10006e65
 * ================================================================ */

bool pl_ccd_get_pix_ser_size(short param_1,undefined2 *param_2)

{
  uint uVar1;
  bool bVar2;
  
                    /* 0x6e65  44  pl_ccd_get_pix_ser_size */
  uVar1 = pv_cam_get_reads(param_1);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *param_2 = *(undefined2 *)(DAT_10043338 + 0x24 + param_1 * 0x110);
  }
  return bVar2;
}



/* ================================================================
 * Function: pm_ccd_get_tmp
 * Address:  10006eb0
 * ================================================================ */

/* WARNING: Removing unreachable block (ram,0x10006ee0) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffff3 : 0x10006f0b */
/* WARNING: Removing unreachable block (ram,0x10006f38) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* __stdcall pm_ccd_get_tmp,8 */

bool pm_ccd_get_tmp(short param_1,ushort *param_2)

{
  uint uVar1;
  bool bVar2;
  char local_10;
  byte bStack_f;
  undefined1 uStack_e;
  undefined1 uStack_d;
  undefined1 local_c;
  undefined2 local_8;
  undefined2 uStack_6;
  
                    /* 0x6eb0  299  _pm_ccd_get_tmp@8 */
  _local_8 = CONCAT22(uStack_6,5);
  local_10 = '&';
  bStack_f = 7;
  uStack_e = 0x28;
  uStack_d = 0;
  local_c = 2;
  local_c = 2;
  uStack_d = 0;
  uStack_e = 0x28;
  bStack_f = 7;
  local_10 = '&';
  uVar1 = pm_cam_write_read(param_1,0x3f,5,&local_10,&local_10);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *param_2 = CONCAT11(bStack_f,local_10) << 8 | (ushort)bStack_f;
  }
  return bVar2;
}



/* ================================================================
 * Function: pm_ccd_get_tmp_setpoint
 * Address:  10006fa4
 * ================================================================ */

/* WARNING: Removing unreachable block (ram,0x10006fd4) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffff3 : 0x10006fff */
/* WARNING: Removing unreachable block (ram,0x1000702c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* __stdcall pm_ccd_get_tmp_setpoint,8 */

bool pm_ccd_get_tmp_setpoint(short param_1,ushort *param_2)

{
  uint uVar1;
  bool bVar2;
  char local_10;
  byte bStack_f;
  undefined1 uStack_e;
  undefined1 uStack_d;
  undefined1 local_c;
  undefined2 local_8;
  undefined2 uStack_6;
  
                    /* 0x6fa4  300  _pm_ccd_get_tmp_setpoint@8 */
  _local_8 = CONCAT22(uStack_6,5);
  local_10 = '&';
  bStack_f = 0x23;
  uStack_e = 0x28;
  uStack_d = 0;
  local_c = 2;
  local_c = 2;
  uStack_d = 0;
  uStack_e = 0x28;
  bStack_f = 0x23;
  local_10 = '&';
  uVar1 = pm_cam_write_read(param_1,0x3f,5,&local_10,&local_10);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *param_2 = CONCAT11(bStack_f,local_10) << 8 | (ushort)bStack_f;
  }
  return bVar2;
}



/* ================================================================
 * Function: pm_ccd_get_adc_offset
 * Address:  10007098
 * ================================================================ */

/* WARNING: Removing unreachable block (ram,0x100070c8) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffff3 : 0x100070f3 */
/* WARNING: Removing unreachable block (ram,0x10007120) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* __stdcall pm_ccd_get_adc_offset,8 */

bool pm_ccd_get_adc_offset(short param_1,ushort *param_2)

{
  uint uVar1;
  bool bVar2;
  char local_10;
  byte bStack_f;
  undefined1 uStack_e;
  undefined1 uStack_d;
  undefined1 local_c;
  undefined2 local_8;
  undefined2 uStack_6;
  
                    /* 0x7098  294  _pm_ccd_get_adc_offset@8 */
  _local_8 = CONCAT22(uStack_6,5);
  local_10 = '&';
  bStack_f = 0x3c;
  uStack_e = 0x28;
  uStack_d = 0;
  local_c = 2;
  local_c = 2;
  uStack_d = 0;
  uStack_e = 0x28;
  bStack_f = 0x3c;
  local_10 = '&';
  uVar1 = pm_cam_write_read(param_1,0x3f,5,&local_10,&local_10);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *param_2 = CONCAT11(bStack_f,local_10) << 8 | (ushort)bStack_f;
  }
  return bVar2;
}



/* ================================================================
 * Function: pm_ccd_get_head_ser_num_alpha
 * Address:  1000718c
 * ================================================================ */

/* WARNING: Removing unreachable block (ram,0x100071bc) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffdb : 0x100071e7 */
/* WARNING: Removing unreachable block (ram,0x10007214) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* __stdcall pm_ccd_get_head_ser_num_alpha,12 */

undefined4 pm_ccd_get_head_ser_num_alpha(short param_1,char *param_2,size_t *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  char *pcVar3;
  size_t sVar4;
  char local_28 [31];
  undefined1 local_9;
  undefined2 local_8;
  undefined2 uStack_6;
  
                    /* 0x718c  296  _pm_ccd_get_head_ser_num_alpha@12 */
  _local_8 = CONCAT22(uStack_6,5);
  builtin_strncpy(local_28,"&L(",4);
  local_28[4] = 0x20;
  local_28[4] = 0x20;
  uVar1 = pm_cam_write_read(param_1,0x3f,5,local_28,local_28);
  if ((uVar1 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else {
    local_9 = 0;
    pcVar3 = strstr(local_28,s_ABCDEFGHIJKLMNOPQRSTUVWXYZ_10034478);
    if (pcVar3 == (char *)0x0) {
      strncpy(param_2,local_28,0x20);
    }
    else {
      *param_2 = '\0';
    }
    sVar4 = strlen(param_2);
    *param_3 = sVar4;
    uVar2 = CONCAT22((short)(sVar4 >> 0x10),1);
  }
  return uVar2;
}



/* ================================================================
 * Function: pm_cam_get_firmware_version_alpha
 * Address:  100072a9
 * ================================================================ */

/* WARNING: Removing unreachable block (ram,0x100072d9) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffdb : 0x10007304 */
/* WARNING: Removing unreachable block (ram,0x10007331) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* __stdcall pm_cam_get_firmware_version_alpha,12 */

undefined4 pm_cam_get_firmware_version_alpha(short param_1,char *param_2,size_t *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  char *pcVar3;
  size_t sVar4;
  char local_28 [31];
  undefined1 local_9;
  undefined2 local_8;
  undefined2 uStack_6;
  
                    /* 0x72a9  284  _pm_cam_get_firmware_version_alpha@12 */
  _local_8 = CONCAT22(uStack_6,5);
  builtin_strncpy(local_28,"&X(",4);
  local_28[4] = 0x20;
  local_28[4] = 0x20;
  uVar1 = pm_cam_write_read(param_1,0x3f,5,local_28,local_28);
  if ((uVar1 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else {
    local_9 = 0;
    pcVar3 = strstr(local_28,s_ABCDEFGHIJKLMNOPQRSTUVWXYZ_10034534);
    if (pcVar3 == (char *)0x0) {
      strncpy(param_2,local_28,0x20);
    }
    else {
      *param_2 = '\0';
    }
    sVar4 = strlen(param_2);
    *param_3 = sVar4;
    uVar2 = CONCAT22((short)(sVar4 >> 0x10),1);
  }
  return uVar2;
}



/* ================================================================
 * Function: pm_ccd_get_gain_mult_factor
 * Address:  100073c6
 * ================================================================ */

/* WARNING: Removing unreachable block (ram,0x100073f6) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffff3 : 0x10007421 */
/* WARNING: Removing unreachable block (ram,0x1000744e) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* __stdcall pm_ccd_get_gain_mult_factor,8 */

bool pm_ccd_get_gain_mult_factor(short param_1,ushort *param_2)

{
  uint uVar1;
  bool bVar2;
  char local_10;
  byte bStack_f;
  undefined1 uStack_e;
  undefined1 uStack_d;
  undefined1 local_c;
  undefined2 local_8;
  undefined2 uStack_6;
  
                    /* 0x73c6  295  _pm_ccd_get_gain_mult_factor@8 */
  _local_8 = CONCAT22(uStack_6,5);
  local_10 = '&';
  bStack_f = 0x54;
  uStack_e = 0x28;
  uStack_d = 0;
  local_c = 2;
  local_c = 2;
  uStack_d = 0;
  uStack_e = 0x28;
  bStack_f = 0x54;
  local_10 = '&';
  uVar1 = pm_cam_write_read(param_1,0x3f,5,&local_10,&local_10);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *param_2 = CONCAT11(bStack_f,local_10) << 8 | (ushort)bStack_f;
  }
  return bVar2;
}



/* ================================================================
 * Function: pm_ccd_get_max_gain_mult_factor
 * Address:  100074ba
 * ================================================================ */

/* WARNING: Removing unreachable block (ram,0x100074ea) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffff3 : 0x10007515 */
/* WARNING: Removing unreachable block (ram,0x10007542) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* __stdcall pm_ccd_get_max_gain_mult_factor,8 */

bool pm_ccd_get_max_gain_mult_factor(short param_1,ushort *param_2)

{
  uint uVar1;
  bool bVar2;
  char local_10;
  byte bStack_f;
  undefined1 uStack_e;
  undefined1 uStack_d;
  undefined1 local_c;
  undefined2 local_8;
  undefined2 uStack_6;
  
                    /* 0x74ba  297  _pm_ccd_get_max_gain_mult_factor@8 */
  _local_8 = CONCAT22(uStack_6,5);
  local_10 = '&';
  bStack_f = 0x53;
  uStack_e = 0x28;
  uStack_d = 0;
  local_c = 2;
  local_c = 2;
  uStack_d = 0;
  uStack_e = 0x28;
  bStack_f = 0x53;
  local_10 = '&';
  uVar1 = pm_cam_write_read(param_1,0x3f,5,&local_10,&local_10);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *param_2 = CONCAT11(bStack_f,local_10) << 8 | (ushort)bStack_f;
  }
  return bVar2;
}



/* ================================================================
 * Function: pm_ccd_get_readout_port
 * Address:  100075ae
 * ================================================================ */

/* WARNING: Removing unreachable block (ram,0x100075e8) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffff3 : 0x10007614 */
/* WARNING: Removing unreachable block (ram,0x10007640) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* __stdcall pm_ccd_get_readout_port,8 */

bool pm_ccd_get_readout_port(short param_1,ushort *param_2)

{
  uint uVar1;
  bool bVar2;
  char local_10;
  byte bStack_f;
  undefined1 uStack_e;
  undefined1 uStack_d;
  undefined1 local_c;
  undefined2 local_b;
  undefined1 local_9;
  undefined2 local_8;
  undefined2 uStack_6;
  
                    /* 0x75ae  298  _pm_ccd_get_readout_port@8 */
  _local_8 = CONCAT22(uStack_6,5);
  local_10 = '&';
  bStack_f = 0x57;
  uStack_e = 0x28;
  uStack_d = 0;
  local_c = 2;
  local_b = 0;
  local_9 = 0;
  local_9 = 0;
  local_b = 0;
  local_c = 2;
  uStack_d = 0;
  uStack_e = 0x28;
  bStack_f = 0x57;
  local_10 = '&';
  uVar1 = pm_cam_write_read(param_1,0x3f,5,&local_10,&local_10);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *param_2 = CONCAT11(bStack_f,local_10) << 8 | (ushort)bStack_f;
  }
  return bVar2;
}



/* ================================================================
 * Function: pv_ccd_get_head_ser_num_alpha
 * Address:  100076b0
 * ================================================================ */

/* __stdcall pv_ccd_get_head_ser_num_alpha,12 */

uint pv_ccd_get_head_ser_num_alpha(short param_1,char *param_2,size_t *param_3)

{
  uint uVar1;
  ushort extraout_var;
  ushort extraout_var_00;
  
                    /* 0x76b0  473  _pv_ccd_get_head_ser_num_alpha@12 */
  uVar1 = pv_cam_get_reads(param_1);
  if ((uVar1 & 0xffff) == 0) {
    uVar1 = 0;
  }
  else if (*(short *)(DAT_10043338 + 0x50 + param_1 * 0x110) == 0) {
    pv_set_error_code(0x7eb);
    uVar1 = (uint)extraout_var << 0x10;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    uVar1 = pm_ccd_get_head_ser_num_alpha(param_1,param_2,param_3);
  }
  else {
    pv_set_error_code(0x7e0);
    uVar1 = (uint)extraout_var_00 << 0x10;
  }
  return uVar1;
}



/* ================================================================
 * Function: pv_cam_get_head_fw_version_alpha
 * Address:  1000773b
 * ================================================================ */

/* __stdcall pv_cam_get_head_fw_version_alpha,12 */

uint pv_cam_get_head_fw_version_alpha(short param_1,char *param_2,size_t *param_3)

{
  uint uVar1;
  ushort extraout_var;
  ushort extraout_var_00;
  
                    /* 0x773b  457  _pv_cam_get_head_fw_version_alpha@12 */
  uVar1 = pv_cam_get_reads(param_1);
  if ((uVar1 & 0xffff) == 0) {
    uVar1 = 0;
  }
  else if (*(short *)(DAT_10043338 + 0x52 + param_1 * 0x110) == 0) {
    pv_set_error_code(0x7eb);
    uVar1 = (uint)extraout_var << 0x10;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    uVar1 = pm_cam_get_firmware_version_alpha(param_1,param_2,param_3);
  }
  else {
    pv_set_error_code(0x7e0);
    uVar1 = (uint)extraout_var_00 << 0x10;
  }
  return uVar1;
}



/* ================================================================
 * Function: pv_ccd_get_accum_capable
 * Address:  100077c6
 * ================================================================ */

bool pv_ccd_get_accum_capable(short param_1,undefined2 *param_2)

{
  uint uVar1;
  bool bVar2;
  
                    /* 0x77c6  143  pv_ccd_get_accum_capable */
  uVar1 = pv_cam_get_reads(param_1);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *param_2 = *(undefined2 *)(DAT_10043338 + 0x5c + param_1 * 0x110);
  }
  return bVar2;
}



/* ================================================================
 * Function: pi_ccd_set_adc_offset
 * Address:  10007810
 * ================================================================ */

/* __stdcall pi_ccd_set_adc_offset,8 */

undefined2 pi_ccd_set_adc_offset(void)

{
                    /* 0x7810  185  _pi_ccd_set_adc_offset@8 */
  pv_set_error_code(0x7de);
  return 0;
}



/* ================================================================
 * Function: pi_ccd_set_clear_cycles
 * Address:  10007824
 * ================================================================ */

/* __stdcall pi_ccd_set_clear_cycles,8 */

bool pi_ccd_set_clear_cycles(short param_1,short param_2)

{
  int iVar1;
  
                    /* 0x7824  186  _pi_ccd_set_clear_cycles@8 */
  if (*(short *)(DAT_10043334 + 2 + param_1 * 0x24) != param_2) {
    *(undefined2 *)(DAT_10043330 + 0x28 + param_1 * 0x2c) = 1;
  }
  *(short *)(DAT_10043334 + 2 + param_1 * 0x24) = param_2;
  iVar1 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
  if (iVar1 == 0) {
    pv_set_error_code(0x7df);
  }
  else {
    (**(code **)(iVar1 + 0x94))(iVar1,param_2);
  }
  return iVar1 != 0;
}



/* ================================================================
 * Function: pi_ccd_set_premask
 * Address:  100078c4
 * ================================================================ */

/* __stdcall pi_ccd_set_premask,8 */

undefined2 pi_ccd_set_premask(void)

{
                    /* 0x78c4  190  _pi_ccd_set_premask@8 */
  pv_set_error_code(0x7ec);
  return 0;
}



/* ================================================================
 * Function: pi_ccd_set_prescan
 * Address:  100078d8
 * ================================================================ */

/* __stdcall pi_ccd_set_prescan,8 */

undefined2 pi_ccd_set_prescan(void)

{
                    /* 0x78d8  191  _pi_ccd_set_prescan@8 */
  pv_set_error_code(0x7ec);
  return 0;
}



/* ================================================================
 * Function: pi_ccd_set_postmask
 * Address:  100078ec
 * ================================================================ */

/* __stdcall pi_ccd_set_postmask,8 */

undefined2 pi_ccd_set_postmask(void)

{
                    /* 0x78ec  188  _pi_ccd_set_postmask@8 */
  pv_set_error_code(0x7ec);
  return 0;
}



/* ================================================================
 * Function: pi_ccd_set_postscan
 * Address:  10007900
 * ================================================================ */

/* __stdcall pi_ccd_set_postscan,8 */

undefined2 pi_ccd_set_postscan(void)

{
                    /* 0x7900  189  _pi_ccd_set_postscan@8 */
  pv_set_error_code(0x7ec);
  return 0;
}



/* ================================================================
 * Function: pi_ccd_set_par_size
 * Address:  10007914
 * ================================================================ */

/* __stdcall pi_ccd_set_par_size,8 */

undefined2 pi_ccd_set_par_size(void)

{
                    /* 0x7914  187  _pi_ccd_set_par_size@8 */
  pv_set_error_code(0x7ec);
  return 0;
}



/* ================================================================
 * Function: pi_ccd_set_ser_size
 * Address:  10007928
 * ================================================================ */

/* __stdcall pi_ccd_set_ser_size,8 */

undefined2 pi_ccd_set_ser_size(void)

{
                    /* 0x7928  192  _pi_ccd_set_ser_size@8 */
  pv_set_error_code(0x7ec);
  return 0;
}



/* ================================================================
 * Function: pi_ccd_set_tmp_setpoint
 * Address:  1000793c
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* __stdcall pi_ccd_set_tmp_setpoint,8 */

bool pi_ccd_set_tmp_setpoint(short param_1,short param_2)

{
  int iVar1;
  
                    /* 0x793c  193  _pi_ccd_set_tmp_setpoint@8 */
  iVar1 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
  if (iVar1 == 0) {
    pv_set_error_code(0x7df);
  }
  else {
    (**(code **)(iVar1 + 0x550))(iVar1,(double)(int)param_2 / _DAT_100260c8);
  }
  return iVar1 != 0;
}



/* ================================================================
 * Function: pl_ccd_set_adc_offset
 * Address:  100079a0
 * ================================================================ */

uint pl_ccd_set_adc_offset(short param_1,ushort param_2)

{
  undefined2 uVar1;
  uint uVar2;
  undefined2 extraout_var;
  
                    /* 0x79a0  112  pl_ccd_set_adc_offset */
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    uVar2 = pm_ccd_set_adc_offset(param_1,param_2);
  }
  else {
    uVar1 = pi_ccd_set_adc_offset();
    uVar2 = CONCAT22(extraout_var,uVar1);
  }
  return uVar2;
}



/* ================================================================
 * Function: pl_ccd_set_clear_cycles
 * Address:  10007a08
 * ================================================================ */

uint pl_ccd_set_clear_cycles(short param_1,short param_2)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  
                    /* 0x7a08  58  pl_ccd_set_clear_cycles */
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    uVar2 = pm_ccd_set_clear_cycles(param_1,param_2);
  }
  else {
    bVar1 = pi_ccd_set_clear_cycles(param_1,param_2);
    uVar2 = CONCAT22((short)((uint3)extraout_var >> 8),(short)CONCAT31(extraout_var,bVar1));
  }
  return uVar2;
}



/* ================================================================
 * Function: pl_ccd_set_clear_mode
 * Address:  10007a70
 * ================================================================ */

int pl_ccd_set_clear_mode(short param_1,short param_2)

{
  uint uVar1;
  int iVar2;
  ushort extraout_var;
  int iVar3;
  
                    /* 0x7a70  59  pl_ccd_set_clear_mode */
  uVar1 = pl_cam_check(param_1);
  iVar2 = DAT_10043330;
  if ((uVar1 & 0xffff) == 0) {
    iVar2 = 0;
  }
  else if ((((param_2 == 0) || (param_2 == 1)) || (param_2 == 2)) ||
          (((param_2 == 3 || (param_2 == 4)) || (param_2 == 5)))) {
    iVar3 = (int)*(short *)(DAT_10043334 + param_1 * 0x24);
    if (iVar3 != param_2) {
      *(undefined2 *)(DAT_10043330 + 0x28 + param_1 * 0x2c) = 1;
      iVar3 = iVar2;
    }
    *(short *)(DAT_10043334 + param_1 * 0x24) = param_2;
    iVar2 = CONCAT22((short)((uint)iVar3 >> 0x10),1);
  }
  else {
    pv_set_error_code(0x7db);
    iVar2 = (uint)extraout_var << 0x10;
  }
  return iVar2;
}



/* ================================================================
 * Function: pl_ccd_set_pmode
 * Address:  10007b1b
 * ================================================================ */

int pl_ccd_set_pmode(short param_1,short param_2)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  ushort extraout_var_01;
  undefined3 extraout_var_00;
  ushort extraout_var_02;
  ushort extraout_var_03;
  int iVar3;
  short local_c [2];
  uint local_8;
  
                    /* 0x7b1b  60  pl_ccd_set_pmode */
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    iVar3 = 0;
  }
  else {
    bVar1 = pl_ccd_get_frame_capable(param_1,(undefined2 *)&local_8);
    if ((CONCAT31(extraout_var,bVar1) & 0xffff) == 0) {
      iVar3 = 0;
    }
    else if (((local_8 & 0xffff) == 0) &&
            ((((param_2 == 1 || (param_2 == 3)) || (param_2 == 5)) || (param_2 == 7)))) {
      pv_set_error_code(0x7d7);
      iVar3 = (uint)extraout_var_01 << 0x10;
    }
    else {
      bVar1 = pl_ccd_get_mpp_capable(param_1,local_c);
      if ((CONCAT31(extraout_var_00,bVar1) & 0xffff) == 0) {
        iVar3 = 0;
      }
      else if (local_c[0] == 0) {
        pv_set_error_code(0x7d9);
        iVar3 = (uint)extraout_var_02 << 0x10;
      }
      else if (((local_c[0] < 1) || (2 < local_c[0])) ||
              (((param_2 != 2 && ((param_2 != 3 && (param_2 != 6)))) && (param_2 != 7)))) {
        if (*(short *)(DAT_10043334 + 4 + param_1 * 0x24) != param_2) {
          *(undefined2 *)(DAT_10043330 + 0x28 + param_1 * 0x2c) = 1;
        }
        *(short *)(DAT_10043334 + 4 + param_1 * 0x24) = param_2;
        iVar3 = param_1 * 0x2c;
        if (*(short *)(DAT_10043330 + 0x14 + iVar3) != 0) {
          iVar3 = pi_convert_timing_enums(param_1);
        }
        iVar3 = CONCAT22((short)((uint)iVar3 >> 0x10),1);
      }
      else {
        pv_set_error_code(0x7d9);
        iVar3 = (uint)extraout_var_03 << 0x10;
      }
    }
  }
  return iVar3;
}



/* ================================================================
 * Function: pl_ccd_set_preamp_off_control
 * Address:  10007c8a
 * ================================================================ */

bool pl_ccd_set_preamp_off_control(short param_1,undefined4 param_2)

{
  uint uVar1;
  bool bVar2;
  
                    /* 0x7c8a  129  pl_ccd_set_preamp_off_control */
  uVar1 = pl_cam_check(param_1);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *(undefined4 *)(DAT_10043334 + 0xc + param_1 * 0x24) = param_2;
  }
  return bVar2;
}



/* ================================================================
 * Function: pl_ccd_set_tmp_setpoint
 * Address:  10007cc1
 * ================================================================ */

uint pl_ccd_set_tmp_setpoint(short param_1,ushort param_2)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  
                    /* 0x7cc1  61  pl_ccd_set_tmp_setpoint */
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    uVar2 = pm_ccd_set_tmp_setpoint(param_1,param_2);
  }
  else {
    bVar1 = pi_ccd_set_tmp_setpoint(param_1,param_2);
    uVar2 = CONCAT22((short)((uint3)extraout_var >> 8),(short)CONCAT31(extraout_var,bVar1));
  }
  return uVar2;
}



/* ================================================================
 * Function: pl_ccd_set_readout_port
 * Address:  10007d29
 * ================================================================ */

/* __stdcall pl_ccd_set_readout_port,8 */

uint pl_ccd_set_readout_port(short param_1,ushort param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined2 extraout_var;
  undefined2 local_8;
  
                    /* 0x7d29  278  _pl_ccd_set_readout_port@8 */
  uVar1 = pl_cam_check(param_1);
  if ((uVar1 & 0xffff) == 0) {
    uVar1 = 0;
  }
  else {
    if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
      uVar2 = pm_set_readout_port(param_1,param_2);
      local_8 = (undefined2)uVar2;
    }
    else {
      local_8 = 0;
    }
    pv_cam_set_rws_valid(param_1,0);
    *(undefined2 *)(DAT_10043330 + 0x28 + param_1 * 0x2c) = 1;
    uVar1 = CONCAT22(extraout_var,local_8);
  }
  return uVar1;
}



/* ================================================================
 * Function: pm_ccd_set_adc_offset
 * Address:  10007da0
 * ================================================================ */

/* __stdcall pm_ccd_set_adc_offset,8 */

int pm_ccd_set_adc_offset(short param_1,ushort param_2)

{
  uint uVar1;
  int iVar2;
  ushort extraout_var;
  ushort extraout_var_00;
  char local_114 [256];
  ushort local_14;
  char acStack_12 [10];
  uint local_8;
  
                    /* 0x7da0  301  _pm_ccd_set_adc_offset@8 */
  local_8 = CONCAT22(local_8._2_2_,8);
  acStack_12[2] = 0x3d;
  acStack_12[3] = 0;
  acStack_12[4] = 0;
  acStack_12[5] = 0x26;
  acStack_12[6] = 0x3c;
  acStack_12[7] = 0x28;
  acStack_12[8] = 0;
  acStack_12[9] = 2;
  uVar1 = pv_cam_get_reads(param_1);
  if ((uVar1 & 0xffff) == 0) {
    iVar2 = 0;
  }
  else if (*(short *)(DAT_10043338 + 0x44 + param_1 * 0x110) == 0) {
    pv_set_error_code(0x7de);
    iVar2 = (uint)extraout_var << 0x10;
  }
  else {
    acStack_12[3] = (byte)(param_2 >> 8);
    acStack_12[4] = (undefined1)param_2;
    if (8 < (local_8 & 0xffff)) {
      sprintf(local_114,s_PVLIB__SIZE_ERROR_in____s___writ_10035630,8,local_8 & 0xffff);
    }
    if (8 < CONCAT11(acStack_12[local_8 & 0xffff],acStack_12[(local_8 & 0xffff) + 1])) {
      sprintf(local_114,s_PVLIB__SIZE_ERROR_in____s___read_10035680,8,
              (uint)CONCAT11(acStack_12[local_8 & 0xffff],acStack_12[(local_8 & 0xffff) + 1]));
    }
    uVar1 = pm_cam_write_read(param_1,0x3f,(ushort)local_8,acStack_12 + 2,acStack_12 + 2);
    if ((uVar1 & 0xffff) == 0) {
      iVar2 = 0;
    }
    else {
      local_14 = CONCAT11(acStack_12[3],acStack_12[2]) << 8 | (ushort)(byte)acStack_12[3];
      if (local_14 == param_2) {
        iVar2 = CONCAT22((short)local_14 >> 0xf,1);
      }
      else {
        pv_set_error_code(0x7d3);
        iVar2 = (uint)extraout_var_00 << 0x10;
      }
    }
  }
  return iVar2;
}



/* ================================================================
 * Function: pm_ccd_set_clear_cycles
 * Address:  10007f11
 * ================================================================ */

/* __stdcall pm_ccd_set_clear_cycles,8 */

undefined4 pm_ccd_set_clear_cycles(short param_1,short param_2)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  ushort extraout_var_00;
  
                    /* 0x7f11  302  _pm_ccd_set_clear_cycles@8 */
  if (*(short *)(DAT_10043334 + 2 + param_1 * 0x24) != param_2) {
    *(undefined2 *)(DAT_10043330 + 0x28 + param_1 * 0x2c) = 1;
  }
  *(short *)(DAT_10043334 + 2 + param_1 * 0x24) = param_2;
  uVar2 = param_1 * 0x2c;
  if (*(short *)(DAT_10043330 + 0x28 + uVar2) != 0) {
    bVar1 = pv_exp_set_script(param_1,0);
    uVar2 = CONCAT31(extraout_var,bVar1) & 0xffff;
    if (uVar2 == 0) {
      pv_set_error_code(0x7d3);
      return (uint)extraout_var_00 << 0x10;
    }
  }
  return CONCAT22((short)(uVar2 >> 0x10),1);
}



/* ================================================================
 * Function: pm_ccd_set_premask
 * Address:  10007fa0
 * ================================================================ */

/* __stdcall pm_ccd_set_premask,8 */

bool pm_ccd_set_premask(short param_1,undefined2 param_2)

{
  uint uVar1;
  bool bVar2;
  
                    /* 0x7fa0  307  _pm_ccd_set_premask@8 */
  uVar1 = pv_cam_get_rws(param_1);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *(undefined2 *)(DAT_10043334 + 0x1c + param_1 * 0x24) = param_2;
  }
  return bVar2;
}



/* ================================================================
 * Function: pm_ccd_set_prescan
 * Address:  10007fd9
 * ================================================================ */

/* __stdcall pm_ccd_set_prescan,8 */

bool pm_ccd_set_prescan(short param_1,undefined2 param_2)

{
  uint uVar1;
  bool bVar2;
  
                    /* 0x7fd9  308  _pm_ccd_set_prescan@8 */
  uVar1 = pv_cam_get_rws(param_1);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *(undefined2 *)(DAT_10043334 + 0x18 + param_1 * 0x24) = param_2;
  }
  return bVar2;
}



/* ================================================================
 * Function: pm_ccd_set_postmask
 * Address:  10008012
 * ================================================================ */

/* __stdcall pm_ccd_set_postmask,8 */

bool pm_ccd_set_postmask(short param_1,undefined2 param_2)

{
  uint uVar1;
  bool bVar2;
  
                    /* 0x8012  305  _pm_ccd_set_postmask@8 */
  uVar1 = pv_cam_get_rws(param_1);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *(undefined2 *)(DAT_10043334 + 0x1e + param_1 * 0x24) = param_2;
  }
  return bVar2;
}



/* ================================================================
 * Function: pm_ccd_set_postscan
 * Address:  1000804b
 * ================================================================ */

/* __stdcall pm_ccd_set_postscan,8 */

bool pm_ccd_set_postscan(short param_1,undefined2 param_2)

{
  uint uVar1;
  bool bVar2;
  
                    /* 0x804b  306  _pm_ccd_set_postscan@8 */
  uVar1 = pv_cam_get_rws(param_1);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *(undefined2 *)(DAT_10043334 + 0x1a + param_1 * 0x24) = param_2;
  }
  return bVar2;
}



/* ================================================================
 * Function: pm_ccd_set_par_size
 * Address:  10008084
 * ================================================================ */

/* __stdcall pm_ccd_set_par_size,8 */

bool pm_ccd_set_par_size(short param_1,undefined2 param_2)

{
  uint uVar1;
  bool bVar2;
  
                    /* 0x8084  304  _pm_ccd_set_par_size@8 */
  uVar1 = pv_cam_get_rws(param_1);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *(undefined2 *)(DAT_10043334 + 0x14 + param_1 * 0x24) = param_2;
  }
  return bVar2;
}



/* ================================================================
 * Function: pm_ccd_set_ser_size
 * Address:  100080bd
 * ================================================================ */

/* __stdcall pm_ccd_set_ser_size,8 */

bool pm_ccd_set_ser_size(short param_1,undefined2 param_2)

{
  uint uVar1;
  bool bVar2;
  
                    /* 0x80bd  309  _pm_ccd_set_ser_size@8 */
  uVar1 = pv_cam_get_rws(param_1);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *(undefined2 *)(DAT_10043334 + 0x16 + param_1 * 0x24) = param_2;
  }
  return bVar2;
}



/* ================================================================
 * Function: pm_ccd_set_tmp_setpoint
 * Address:  100080f6
 * ================================================================ */

/* WARNING: Removing unreachable block (ram,0x10008143) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffff2 : 0x1000816e */
/* WARNING: Removing unreachable block (ram,0x1000819a) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* __stdcall pm_ccd_set_tmp_setpoint,8 */

int pm_ccd_set_tmp_setpoint(short param_1,ushort param_2)

{
  uint uVar1;
  int iVar2;
  ushort extraout_var;
  char local_14;
  byte bStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  ushort local_c;
  undefined2 local_8;
  undefined2 uStack_6;
  
                    /* 0x80f6  310  _pm_ccd_set_tmp_setpoint@8 */
  _local_8 = CONCAT22(uStack_6,8);
  local_14 = '-';
  uStack_11 = 0x26;
  local_10 = 0x23;
  local_f = 0x28;
  local_e = 0;
  local_d = 2;
  bStack_13 = (byte)(param_2 >> 8);
  uStack_12 = (undefined1)param_2;
  local_d = 2;
  local_e = 0;
  local_f = 0x28;
  local_10 = 0x23;
  uStack_11 = 0x26;
  local_14 = '-';
  uVar1 = pm_cam_write_read(param_1,0x3f,8,&local_14,&local_14);
  if ((uVar1 & 0xffff) == 0) {
    iVar2 = 0;
  }
  else {
    local_c = CONCAT11(bStack_13,local_14) << 8 | (ushort)bStack_13;
    if (local_c == param_2) {
      iVar2 = CONCAT22((short)param_2 >> 0xf,1);
    }
    else {
      pv_set_error_code(0x7d3);
      iVar2 = (uint)extraout_var << 0x10;
    }
  }
  return iVar2;
}



/* ================================================================
 * Function: pm_set_readout_port
 * Address:  1000821e
 * ================================================================ */

/* WARNING: Removing unreachable block (ram,0x10008258) */
/* WARNING: Removing unreachable block (ram,0x10008353) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffff3 : 0x10008284 */
/* WARNING: Removing unreachable block (ram,0x100082b0) */
/* WARNING: Removing unreachable block (ram,0x100083aa) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* __stdcall pm_set_readout_port,8 */

int pm_set_readout_port(short param_1,ushort param_2)

{
  uint uVar1;
  int iVar2;
  ushort extraout_var;
  char local_10;
  byte bStack_f;
  undefined1 uStack_e;
  undefined1 uStack_d;
  undefined1 local_c;
  undefined2 local_b;
  undefined1 local_9;
  undefined2 local_8;
  undefined2 uStack_6;
  
                    /* 0x821e  422  _pm_set_readout_port@8 */
  local_8 = 5;
  local_10 = '&';
  bStack_f = 0x1a;
  uStack_e = 0x28;
  uStack_d = 0;
  local_c = 1;
  local_b = 0;
  local_9 = 0;
  local_8 = 5;
  local_9 = 0;
  local_b = 0;
  local_c = 1;
  uStack_d = 0;
  uStack_e = 0x28;
  bStack_f = 0x1a;
  local_10 = '&';
  uVar1 = pm_cam_write_read(param_1,0x3f,5,&local_10,&local_10);
  if ((uVar1 & 0xffff) == 0) {
    iVar2 = 0;
  }
  else if (local_10 == '\x01') {
    iVar2 = 1;
  }
  else {
    _local_8 = CONCAT22(uStack_6,8);
    local_10 = 'V';
    uStack_d = 0x26;
    local_c = 0x57;
    local_b = 0x28;
    local_9 = 2;
    bStack_f = (byte)(param_2 >> 8);
    uStack_e = (undefined1)param_2;
    local_9 = 2;
    local_b = 0x28;
    local_c = 0x57;
    uStack_d = 0x26;
    local_10 = 'V';
    uVar1 = pm_cam_write_read(param_1,0x3f,8,&local_10,&local_10);
    if ((uVar1 & 0xffff) == 0) {
      iVar2 = 0;
    }
    else if ((ushort)(CONCAT11(bStack_f,local_10) << 8 | (ushort)bStack_f) == param_2) {
      iVar2 = CONCAT22((short)param_2 >> 0xf,1);
    }
    else {
      pv_set_error_code(0x7d3);
      iVar2 = (uint)extraout_var << 0x10;
    }
  }
  return iVar2;
}



/* ================================================================
 * Function: pm_ccd_set_gain_mult_factor
 * Address:  1000842e
 * ================================================================ */

/* WARNING: Removing unreachable block (ram,0x10008592) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffef : 0x100085be */
/* WARNING: Removing unreachable block (ram,0x100085ea) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* __stdcall pm_ccd_set_gain_mult_factor,8 */

int pm_ccd_set_gain_mult_factor(short param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  ushort extraout_var;
  ushort extraout_var_00;
  ushort uVar3;
  char local_114 [254];
  char acStack_16 [10];
  ushort local_c;
  undefined2 uStack_a;
  uint local_8;
  
                    /* 0x842e  303  _pm_ccd_set_gain_mult_factor@8 */
  local_8 = CONCAT22(local_8._2_2_,8);
  acStack_16[2] = 0x55;
  acStack_16[3] = 0;
  acStack_16[4] = 0;
  acStack_16[5] = 0x26;
  acStack_16[6] = 0x54;
  acStack_16[7] = 0x28;
  acStack_16[8] = 0;
  acStack_16[9] = 2;
  uVar1 = pv_cam_get_reads(param_1);
  if ((uVar1 & 0xffff) == 0) {
    iVar2 = 0;
  }
  else if (*(short *)(DAT_10043338 + 0x10c + param_1 * 0x110) == 0) {
    pv_set_error_code(0x7ed);
    iVar2 = (uint)extraout_var << 0x10;
  }
  else {
    acStack_16[3] = (char)(param_2 >> 8);
    acStack_16[4] = (undefined1)param_2;
    if (8 < (local_8 & 0xffff)) {
      sprintf(local_114,s_PVLIB__SIZE_ERROR_in____s___writ_100358b0,8,local_8 & 0xffff);
    }
    if (8 < CONCAT11(acStack_16[local_8 & 0xffff],acStack_16[(local_8 & 0xffff) + 1])) {
      sprintf(local_114,s_PVLIB__SIZE_ERROR_in____s___read_10035900,8,
              (uint)CONCAT11(acStack_16[local_8 & 0xffff],acStack_16[(local_8 & 0xffff) + 1]));
    }
    uVar1 = pm_cam_write_read(param_1,0x3f,(ushort)local_8,acStack_16 + 2,acStack_16 + 2);
    if ((uVar1 & 0xffff) == 0) {
      iVar2 = 0;
    }
    else {
      local_8 = CONCAT22(local_8._2_2_,5);
      builtin_strncpy(acStack_16 + 2,"&T(",4);
      acStack_16[6] = 2;
      acStack_16[6] = 2;
      uVar1 = pm_cam_write_read(param_1,0x3f,5,acStack_16 + 2,acStack_16 + 2);
      if ((uVar1 & 0xffff) == 0) {
        iVar2 = 0;
      }
      else {
        uVar3 = CONCAT11(acStack_16[3],acStack_16[2]) << 8 | (ushort)(byte)acStack_16[3];
        _local_c = CONCAT22(uStack_a,uVar3);
        if ((uint)uVar3 == (param_2 & 0xffff)) {
          iVar2 = 1;
        }
        else {
          pv_set_error_code(0x7d3);
          iVar2 = (uint)extraout_var_00 << 0x10;
        }
      }
    }
  }
  return iVar2;
}



/* ================================================================
 * Function: pv_ccd_set_premask
 * Address:  10008680
 * ================================================================ */

/* __stdcall pv_ccd_set_premask,8 */

uint pv_ccd_set_premask(short param_1,undefined2 param_2)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined3 extraout_var;
  undefined2 extraout_var_00;
  
                    /* 0x8680  477  _pv_ccd_set_premask@8 */
  uVar3 = pl_cam_check(param_1);
  if ((uVar3 & 0xffff) == 0) {
    uVar3 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    bVar1 = pm_ccd_set_premask(param_1,param_2);
    uVar3 = CONCAT22((short)((uint3)extraout_var >> 8),(short)CONCAT31(extraout_var,bVar1));
  }
  else {
    uVar2 = pi_ccd_set_premask();
    uVar3 = CONCAT22(extraout_var_00,uVar2);
  }
  return uVar3;
}



/* ================================================================
 * Function: pv_ccd_set_prescan
 * Address:  100086e8
 * ================================================================ */

/* __stdcall pv_ccd_set_prescan,8 */

uint pv_ccd_set_prescan(short param_1,undefined2 param_2)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined3 extraout_var;
  undefined2 extraout_var_00;
  
                    /* 0x86e8  478  _pv_ccd_set_prescan@8 */
  uVar3 = pl_cam_check(param_1);
  if ((uVar3 & 0xffff) == 0) {
    uVar3 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    bVar1 = pm_ccd_set_prescan(param_1,param_2);
    uVar3 = CONCAT22((short)((uint3)extraout_var >> 8),(short)CONCAT31(extraout_var,bVar1));
  }
  else {
    uVar2 = pi_ccd_set_prescan();
    uVar3 = CONCAT22(extraout_var_00,uVar2);
  }
  return uVar3;
}



/* ================================================================
 * Function: pv_ccd_set_postmask
 * Address:  10008750
 * ================================================================ */

/* __stdcall pv_ccd_set_postmask,8 */

uint pv_ccd_set_postmask(short param_1,undefined2 param_2)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined3 extraout_var;
  undefined2 extraout_var_00;
  
                    /* 0x8750  475  _pv_ccd_set_postmask@8 */
  uVar3 = pl_cam_check(param_1);
  if ((uVar3 & 0xffff) == 0) {
    uVar3 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    bVar1 = pm_ccd_set_postmask(param_1,param_2);
    uVar3 = CONCAT22((short)((uint3)extraout_var >> 8),(short)CONCAT31(extraout_var,bVar1));
  }
  else {
    uVar2 = pi_ccd_set_postmask();
    uVar3 = CONCAT22(extraout_var_00,uVar2);
  }
  return uVar3;
}



/* ================================================================
 * Function: pv_ccd_set_postscan
 * Address:  100087b8
 * ================================================================ */

/* __stdcall pv_ccd_set_postscan,8 */

uint pv_ccd_set_postscan(short param_1,undefined2 param_2)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined3 extraout_var;
  undefined2 extraout_var_00;
  
                    /* 0x87b8  476  _pv_ccd_set_postscan@8 */
  uVar3 = pl_cam_check(param_1);
  if ((uVar3 & 0xffff) == 0) {
    uVar3 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    bVar1 = pm_ccd_set_postscan(param_1,param_2);
    uVar3 = CONCAT22((short)((uint3)extraout_var >> 8),(short)CONCAT31(extraout_var,bVar1));
  }
  else {
    uVar2 = pi_ccd_set_postscan();
    uVar3 = CONCAT22(extraout_var_00,uVar2);
  }
  return uVar3;
}



/* ================================================================
 * Function: pv_ccd_set_par_size
 * Address:  10008820
 * ================================================================ */

/* __stdcall pv_ccd_set_par_size,8 */

uint pv_ccd_set_par_size(short param_1,undefined2 param_2)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined3 extraout_var;
  undefined2 extraout_var_00;
  
                    /* 0x8820  474  _pv_ccd_set_par_size@8 */
  uVar3 = pl_cam_check(param_1);
  if ((uVar3 & 0xffff) == 0) {
    uVar3 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    bVar1 = pm_ccd_set_par_size(param_1,param_2);
    uVar3 = CONCAT22((short)((uint3)extraout_var >> 8),(short)CONCAT31(extraout_var,bVar1));
  }
  else {
    uVar2 = pi_ccd_set_par_size();
    uVar3 = CONCAT22(extraout_var_00,uVar2);
  }
  return uVar3;
}



/* ================================================================
 * Function: pv_ccd_set_ser_size
 * Address:  10008888
 * ================================================================ */

/* __stdcall pv_ccd_set_ser_size,8 */

uint pv_ccd_set_ser_size(short param_1,undefined2 param_2)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined3 extraout_var;
  undefined2 extraout_var_00;
  
                    /* 0x8888  479  _pv_ccd_set_ser_size@8 */
  uVar3 = pl_cam_check(param_1);
  if ((uVar3 & 0xffff) == 0) {
    uVar3 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    bVar1 = pm_ccd_set_ser_size(param_1,param_2);
    uVar3 = CONCAT22((short)((uint3)extraout_var >> 8),(short)CONCAT31(extraout_var,bVar1));
  }
  else {
    uVar2 = pi_ccd_set_ser_size();
    uVar3 = CONCAT22(extraout_var_00,uVar2);
  }
  return uVar3;
}



/* ================================================================
 * Function: pl_ccs_get_status
 * Address:  100088f0
 * ================================================================ */

uint pl_ccs_get_status(short param_1,ushort *param_2)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  ushort *puVar3;
  ushort extraout_var_00;
  
                    /* 0x88f0  62  pl_ccs_get_status */
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    bVar1 = pm_ccs_get_status(param_1,param_2);
    puVar3 = param_2;
    if (((short)*param_2 < 0) || (puVar3 = (ushort *)(int)(short)*param_2, 3 < (int)puVar3)) {
      *param_2 = 0;
    }
    uVar2 = CONCAT22((short)((uint)puVar3 >> 0x10),(short)CONCAT31(extraout_var,bVar1));
  }
  else {
    pv_set_error_code(0x7e0);
    uVar2 = (uint)extraout_var_00 << 0x10;
  }
  return uVar2;
}



/* ================================================================
 * Function: pm_ccs_get_status
 * Address:  10008970
 * ================================================================ */

/* WARNING: Removing unreachable block (ram,0x100089a9) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffef : 0x100089d5 */
/* WARNING: Removing unreachable block (ram,0x10008a01) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* __stdcall pm_ccs_get_status,8 */

bool pm_ccs_get_status(short param_1,ushort *param_2)

{
  uint uVar1;
  bool bVar2;
  char local_14 [12];
  undefined1 uStack_8;
  undefined1 uStack_7;
  
                    /* 0x8970  311  _pm_ccs_get_status@8 */
  uStack_8 = 5;
  uStack_7 = 0;
  builtin_strncpy(local_14,"&\x1d(",4);
  local_14[4] = 10;
  local_14[5] = '\0';
  local_14[6] = '\0';
  local_14[7] = '\0';
  local_14[8] = '\0';
  local_14[9] = 0;
  uStack_7 = 0;
  uStack_8 = 5;
  local_14[9] = 0;
  local_14[5] = '\0';
  local_14[6] = '\0';
  local_14[7] = '\0';
  local_14[8] = '\0';
  local_14[4] = 10;
  uVar1 = pm_cam_write_read(param_1,0x3f,5,local_14,local_14);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *param_2 = CONCAT11(local_14[9],local_14[8]) << 8 | (ushort)(byte)local_14[9];
  }
  return bVar2;
}



/* ================================================================
 * Function: pi_enum_str_length
 * Address:  10008a70
 * ================================================================ */

/* __stdcall pi_enum_str_length,16 */

undefined4 pi_enum_str_length(void)

{
  undefined4 *in_stack_00000010;
  
                    /* 0x8a70  208  _pi_enum_str_length@16 */
  *in_stack_00000010 = 0xff;
  return CONCAT22((short)((uint)in_stack_00000010 >> 0x10),1);
}



/* ================================================================
 * Function: pi_get_enum_param
 * Address:  10008a84
 * ================================================================ */

/* __stdcall pi_get_enum_param,24 */

undefined4
pi_get_enum_param(short param_1,uint param_2,uint param_3,int *param_4,char *param_5,size_t param_6)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  ushort extraout_var;
  ushort extraout_var_00;
  ushort extraout_var_01;
  undefined2 extraout_var_02;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined1 local_3c [4];
  int local_38;
  
                    /* 0x8a84  234  _pi_get_enum_param@24 */
  uVar5 = 0;
  if (*(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c) == 0) {
    uVar6 = 0;
    pv_set_error_code(0x7df);
    uVar5 = extraout_var_02;
  }
  else {
    iVar4 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
    uVar1 = FUN_10008c8b(param_1,param_2,param_3,param_4,param_5,param_6);
    uVar3 = (uint)uVar1;
    if (uVar3 == 0) {
      iVar2 = (**(code **)(iVar4 + 0x54))(iVar4,param_2 & 0xffff,local_3c,iVar4,uVar5);
      if (iVar2 == 0) {
        uVar6 = 0;
        pv_set_error_code(0x7e0);
        uVar3 = (uint)extraout_var_01 << 0x10;
      }
      else if (local_38 == 9) {
        uVar3 = (**(code **)(iVar4 + 0x5c))(iVar4,param_2 & 0xffff,param_3,param_4);
        if (uVar3 == 0) {
          uVar6 = 0;
          pv_set_error_code(0x7e2);
          uVar3 = (uint)extraout_var << 0x10;
        }
        else if ((param_5 == (char *)0x0) || (param_6 == 0)) {
          uVar6 = 1;
        }
        else {
          uVar3 = pi_get_enum_string(param_1,(ushort)param_2,*param_4,param_5,param_6);
          uVar6 = (undefined2)uVar3;
        }
      }
      else {
        uVar6 = 0;
        pv_set_error_code(0x7e2);
        uVar3 = (uint)extraout_var_00 << 0x10;
      }
    }
    else {
      uVar6 = 1;
    }
    uVar5 = (undefined2)(uVar3 >> 0x10);
  }
  return CONCAT22(uVar5,uVar6);
}



/* ================================================================
 * Function: pi_get_enum_string
 * Address:  10008bb8
 * ================================================================ */

/* __stdcall pi_get_enum_string,20 */

undefined4
pi_get_enum_string(short param_1,ushort param_2,undefined4 param_3,void *param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  ushort extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined1 local_3c [4];
  int local_38;
  
                    /* 0x8bb8  235  _pi_get_enum_string@20 */
  if (*(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c) == 0) {
    uVar4 = 0;
    pv_set_error_code(0x7df);
    uVar3 = extraout_var_02;
  }
  else {
    iVar1 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
    iVar1 = (**(code **)(iVar1 + 0x54))(iVar1,param_2,local_3c,iVar1,0);
    if (iVar1 == 0) {
      uVar4 = 0;
      pv_set_error_code(0x7e0);
      uVar3 = extraout_var_01;
    }
    else if (local_38 == 9) {
      uVar2 = FUN_100254c9(param_4,(uint)param_2,param_3,param_4,param_5);
      uVar2 = uVar2 & 0xffff;
      if (uVar2 == 0) {
        uVar4 = 0;
        pv_set_error_code(0x7e1);
        uVar2 = (uint)extraout_var << 0x10;
      }
      else {
        uVar4 = 1;
      }
      uVar3 = (undefined2)(uVar2 >> 0x10);
    }
    else {
      uVar4 = 0;
      pv_set_error_code(0x7e2);
      uVar3 = extraout_var_00;
    }
  }
  return CONCAT22(uVar3,uVar4);
}



/* ================================================================
 * Function: FUN_10008c8b
 * Address:  10008c8b
 * ================================================================ */

short FUN_10008c8b(short param_1,int param_2,uint param_3,int *param_4,char *param_5,size_t param_6)

{
  ushort uVar1;
  uint uVar2;
  short local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  if (param_2 == 0x90200f7) {
    uVar1 = pl_get_param(param_1,0x90200f7,1,&local_14);
    local_18 = 0;
    if (uVar1 != 0) {
      if (local_14 < 2) {
        if (param_3 == 0) {
          *param_4 = 1;
          local_18 = 1;
        }
        else {
          pv_set_error_code(0x7e4);
          local_18 = 0;
        }
      }
      else {
        uVar2 = pi_get_enum_param(param_1,0xf7,param_3,param_4,(char *)0x0,0);
        local_18 = (short)uVar2;
        if ((uVar2 & 0xffff) != 0) {
          if ((*param_4 < 0) || (2 < *param_4)) {
            local_18 = 0;
          }
          else {
            *param_4 = *param_4 + 1;
          }
        }
      }
      if (((local_18 != 0) && (param_5 != (char *)0x0)) && (param_6 != 0)) {
        pv_get_enum_string(0x90200f7,*param_4,param_6,param_5,&local_8);
      }
    }
  }
  else if (param_2 == 0x9030002) {
    uVar1 = pl_get_param(param_1,0x9030002,3,&local_10);
    if ((uVar1 == 0) || (uVar1 = pl_get_param(param_1,0x9030002,4,&local_c), uVar1 == 0)) {
      pv_set_error_code(0x7e1);
      local_18 = 0;
    }
    else if ((param_3 < local_10) || (local_c < param_3)) {
      pv_set_error_code(0x7e4);
      local_18 = 0;
    }
    else {
      *param_4 = local_10 + param_3;
      local_18 = 1;
      if ((param_5 != (char *)0x0) && (param_6 != 0)) {
        pv_get_enum_string(0x9030002,*param_4,param_6,param_5,&local_8);
      }
    }
  }
  else {
    local_18 = 0;
  }
  return local_18;
}



/* ================================================================
 * Function: pl_get_enum_param
 * Address:  10008e60
 * ================================================================ */

uint pl_get_enum_param(short param_1,uint param_2,uint param_3,int *param_4,char *param_5,
                      size_t param_6)

{
  short sVar1;
  uint uVar2;
  
                    /* 0x8e60  118  pl_get_enum_param */
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else {
    sVar1 = pv_get_enum_param(param_1,param_2,param_3,param_4,param_5,param_6);
    if (sVar1 == 0) {
      if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
        uVar2 = pm_get_enum_param(param_1,param_2,param_3,param_4,param_5,param_6);
      }
      else {
        uVar2 = pi_get_enum_param(param_1,param_2,param_3,param_4,param_5,param_6);
      }
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}



/* ================================================================
 * Function: pl_enum_str_length
 * Address:  10008f16
 * ================================================================ */

uint pl_enum_str_length(short param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  uint uVar1;
  
                    /* 0x8f16  166  pl_enum_str_length */
  uVar1 = pl_cam_check(param_1);
  if ((uVar1 & 0xffff) == 0) {
    uVar1 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    uVar1 = pm_enum_str_length(param_1,param_2,param_3,param_4);
  }
  else {
    uVar1 = pi_enum_str_length();
  }
  return uVar1;
}



/* ================================================================
 * Function: pm_get_enum_param
 * Address:  10008f90
 * ================================================================ */

/* __stdcall pm_get_enum_param,24 */

undefined4
pm_get_enum_param(short param_1,uint param_2,uint param_3,int *param_4,char *param_5,size_t param_6)

{
  ushort uVar1;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined4 uVar2;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  uint uVar3;
  undefined2 uVar4;
  undefined2 extraout_var_07;
  undefined2 extraout_var_08;
  undefined2 extraout_var_09;
  undefined2 extraout_var_10;
  undefined2 extraout_var_11;
  uint local_14;
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
                    /* 0x8f90  359  _pm_get_enum_param@24 */
  local_10 = CONCAT22(local_10._2_2_,1);
  if (param_5 != (char *)0x0) {
    *param_5 = '\0';
  }
  if (param_2 < 0x90201f9) {
    if (param_2 == 0x90201f8) {
      if (param_3 == 0) {
        *param_4 = 0;
      }
      else if (param_3 == 1) {
        *param_4 = 2;
      }
      else {
        pv_set_error_code(0x7e4);
        local_10 = local_10 & 0xffff0000;
      }
      uVar3 = local_10 & 0xffff;
      if (uVar3 == 1) {
        uVar3 = pv_get_enum_string(0x90201f8,*param_4,param_6,param_5,&local_8);
      }
      uVar4 = (undefined2)(uVar3 >> 0x10);
      goto LAB_10009422;
    }
    if (param_2 == 0x90200d6) {
      uVar1 = pl_get_param(param_1,0x90200d6,3,&local_14);
      if ((uVar1 == 0) || (uVar1 = pl_get_param(param_1,0x90200d6,4,&local_c), uVar1 == 0)) {
        pv_set_error_code(0x7e1);
        local_10 = 0;
        uVar4 = extraout_var;
      }
      else if ((param_3 < local_14) || (local_c < param_3)) {
        pv_set_error_code(0x7e4);
        local_10 = 0;
        uVar4 = extraout_var_00;
      }
      else {
        *param_4 = local_14 + param_3;
        uVar2 = pv_get_enum_string(0x90200d6,*param_4,param_6,param_5,&local_8);
        uVar4 = (undefined2)((uint)uVar2 >> 0x10);
      }
      goto LAB_10009422;
    }
    if (param_2 == 0x90200e0) {
      uVar1 = pl_get_param(param_1,0x90200e0,3,&local_14);
      if ((uVar1 == 0) || (uVar1 = pl_get_param(param_1,0x90200e0,4,&local_c), uVar1 == 0)) {
        pv_set_error_code(0x7e1);
        local_10 = 0;
        uVar4 = extraout_var_01;
      }
      else if ((param_3 < local_14) || (local_c < param_3)) {
        pv_set_error_code(0x7e4);
        local_10 = 0;
        uVar4 = extraout_var_02;
      }
      else {
        *param_4 = local_14 + param_3;
        uVar2 = pv_get_enum_string(0x90200e0,*param_4,param_6,param_5,&local_8);
        uVar4 = (undefined2)((uint)uVar2 >> 0x10);
      }
      goto LAB_10009422;
    }
    if (param_2 == 0x90200f7) {
      uVar1 = pl_get_param(param_1,0x90200f7,3,&local_14);
      if ((uVar1 == 0) || (uVar1 = pl_get_param(param_1,0x90200f7,4,&local_c), uVar1 == 0)) {
        pv_set_error_code(0x7e1);
        local_10 = 0;
        uVar4 = extraout_var_03;
      }
      else if ((param_3 < local_14) || (local_c < param_3)) {
        pv_set_error_code(0x7e4);
        local_10 = 0;
        uVar4 = extraout_var_04;
      }
      else {
        *param_4 = local_14 + param_3;
        uVar2 = pv_get_enum_string(0x90200f7,*param_4,param_6,param_5,&local_8);
        uVar4 = (undefined2)((uint)uVar2 >> 0x10);
      }
      goto LAB_10009422;
    }
  }
  else {
    if (param_2 == 0x902020a) {
      uVar1 = pl_get_param(param_1,0x902020a,3,&local_14);
      if ((uVar1 == 0) || (uVar1 = pl_get_param(param_1,0x902020a,4,&local_c), uVar1 == 0)) {
        pv_set_error_code(0x7e1);
        local_10 = 0;
        uVar4 = extraout_var_07;
      }
      else if ((param_3 < local_14) || (local_c < param_3)) {
        pv_set_error_code(0x7e4);
        local_10 = 0;
        uVar4 = extraout_var_08;
      }
      else {
        *param_4 = local_14 + param_3;
        uVar2 = pv_get_enum_string(0x902020a,*param_4,param_6,param_5,&local_8);
        uVar4 = (undefined2)((uint)uVar2 >> 0x10);
      }
      goto LAB_10009422;
    }
    if (param_2 == 0x9020217) {
      uVar1 = pl_get_param(param_1,0x9020217,3,&local_14);
      if ((uVar1 == 0) || (uVar1 = pl_get_param(param_1,0x9020217,4,&local_c), uVar1 == 0)) {
        pv_set_error_code(0x7e1);
        local_10 = 0;
        uVar4 = extraout_var_05;
      }
      else if ((param_3 < local_14) || (local_c < param_3)) {
        pv_set_error_code(0x7e4);
        local_10 = 0;
        uVar4 = extraout_var_06;
      }
      else {
        *param_4 = local_14 + param_3;
        uVar2 = pv_get_enum_string(0x9020217,*param_4,param_6,param_5,&local_8);
        uVar4 = (undefined2)((uint)uVar2 >> 0x10);
      }
      goto LAB_10009422;
    }
    if (param_2 == 0x9030002) {
      uVar1 = pl_get_param(param_1,0x9030002,3,&local_14);
      if ((uVar1 == 0) || (uVar1 = pl_get_param(param_1,0x9030002,4,&local_c), uVar1 == 0)) {
        pv_set_error_code(0x7e1);
        local_10 = 0;
        uVar4 = extraout_var_09;
      }
      else if ((param_3 < local_14) || (local_c < param_3)) {
        pv_set_error_code(0x7e4);
        local_10 = 0;
        uVar4 = extraout_var_10;
      }
      else {
        *param_4 = local_14 + param_3;
        uVar2 = pv_get_enum_string(0x9030002,*param_4,param_6,param_5,&local_8);
        uVar4 = (undefined2)((uint)uVar2 >> 0x10);
      }
      goto LAB_10009422;
    }
  }
  pv_set_error_code(0x7e2);
  local_10._0_2_ = 0;
  uVar4 = extraout_var_11;
LAB_10009422:
  return CONCAT22(uVar4,(undefined2)local_10);
}



/* ================================================================
 * Function: pm_enum_str_length
 * Address:  1000942c
 * ================================================================ */

/* __stdcall pm_enum_str_length,16 */

undefined4 pm_enum_str_length(short param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  bool bVar1;
  ushort uVar2;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  undefined2 extraout_var_07;
  undefined2 extraout_var_08;
  undefined4 uVar3;
  ushort extraout_var_09;
  undefined2 extraout_var_10;
  undefined2 extraout_var_11;
  undefined2 extraout_var_12;
  undefined2 extraout_var_13;
  undefined2 extraout_var_14;
  undefined2 extraout_var_15;
  undefined2 extraout_var_16;
  undefined2 extraout_var_17;
  undefined2 extraout_var_18;
  undefined2 extraout_var_19;
  undefined3 extraout_var;
  undefined2 extraout_var_20;
  undefined2 extraout_var_21;
  undefined3 extraout_var_00;
  undefined2 extraout_var_22;
  undefined2 extraout_var_23;
  undefined2 extraout_var_24;
  undefined2 extraout_var_25;
  undefined2 uVar4;
  char local_118 [256];
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
                    /* 0x942c  321  _pm_enum_str_length@16 */
  local_10 = CONCAT22(local_10._2_2_,1);
  *param_4 = 0;
  if (param_2 < 0x902020c) {
    if (param_2 == 0x902020b) {
      uVar2 = pl_get_param(param_1,0x902020b,3,&local_18);
      if ((uVar2 == 0) || (uVar2 = pl_get_param(param_1,0x902020b,4,&local_c), uVar2 == 0)) {
        pv_set_error_code(0x7e1);
        local_10 = 0;
        uVar4 = extraout_var_01;
      }
      else if ((param_3 < local_18) || (local_c < param_3)) {
        pv_set_error_code(0x7e4);
        local_10 = 0;
        uVar4 = extraout_var_02;
      }
      else {
        local_8 = local_18 + param_3;
        uVar3 = pv_get_enum_string(0x902020b,local_8,0x100,local_118,param_4);
        uVar4 = (undefined2)((uint)uVar3 >> 0x10);
      }
      goto LAB_10009ca0;
    }
    if (param_2 < 0x90201f9) {
      if (param_2 == 0x90201f8) {
        local_8 = 999;
        if (param_3 == 0) {
          local_8 = 0;
        }
        else if (param_3 == 1) {
          local_8 = 2;
        }
        else {
          pv_set_error_code(0x7e4);
          param_3 = (uint)extraout_var_09 << 0x10;
          local_10 = local_10 & 0xffff0000;
        }
        uVar4 = (undefined2)(param_3 >> 0x10);
        if ((local_10 & 0xffff) == 1) {
          uVar3 = pv_get_enum_string(0x90201f8,local_8,0x100,local_118,param_4);
          uVar4 = (undefined2)((uint)uVar3 >> 0x10);
        }
        goto LAB_10009ca0;
      }
      if (param_2 == 0x90200d6) {
        uVar2 = pl_get_param(param_1,0x90200d6,3,&local_18);
        if ((uVar2 == 0) || (uVar2 = pl_get_param(param_1,0x90200d6,4,&local_c), uVar2 == 0)) {
          pv_set_error_code(0x7e1);
          local_10 = 0;
          uVar4 = extraout_var_03;
        }
        else if ((param_3 < local_18) || (local_c < param_3)) {
          pv_set_error_code(0x7e4);
          local_10 = 0;
          uVar4 = extraout_var_04;
        }
        else {
          local_8 = local_18 + param_3;
          uVar3 = pv_get_enum_string(0x90200d6,local_8,0x100,local_118,param_4);
          uVar4 = (undefined2)((uint)uVar3 >> 0x10);
        }
        goto LAB_10009ca0;
      }
      if (param_2 == 0x90200e0) {
        uVar2 = pl_get_param(param_1,0x90200e0,3,&local_18);
        if ((uVar2 == 0) || (uVar2 = pl_get_param(param_1,0x90200e0,4,&local_c), uVar2 == 0)) {
          pv_set_error_code(0x7e1);
          local_10 = 0;
          uVar4 = extraout_var_05;
        }
        else if ((param_3 < local_18) || (local_c < param_3)) {
          pv_set_error_code(0x7e4);
          local_10 = 0;
          uVar4 = extraout_var_06;
        }
        else {
          local_8 = local_18 + param_3;
          uVar3 = pv_get_enum_string(0x90200e0,local_8,0x100,local_118,param_4);
          uVar4 = (undefined2)((uint)uVar3 >> 0x10);
        }
        goto LAB_10009ca0;
      }
      if (param_2 == 0x90200f7) {
        uVar2 = pl_get_param(param_1,0x90200f7,3,&local_18);
        if ((uVar2 == 0) || (uVar2 = pl_get_param(param_1,0x90200f7,4,&local_c), uVar2 == 0)) {
          pv_set_error_code(0x7e1);
          local_10 = 0;
          uVar4 = extraout_var_07;
        }
        else if ((param_3 < local_18) || (local_c < param_3)) {
          pv_set_error_code(0x7e4);
          local_10 = 0;
          uVar4 = extraout_var_08;
        }
        else {
          local_8 = local_18 + param_3;
          uVar3 = pv_get_enum_string(0x90200f7,local_8,0x100,local_118,param_4);
          uVar4 = (undefined2)((uint)uVar3 >> 0x10);
        }
        goto LAB_10009ca0;
      }
    }
    else {
      if (param_2 == 0x9020209) {
        uVar2 = pl_get_param(param_1,0x9020209,3,&local_18);
        if ((uVar2 == 0) || (uVar2 = pl_get_param(param_1,0x9020209,4,&local_c), uVar2 == 0)) {
          pv_set_error_code(0x7e1);
          local_10 = 0;
          uVar4 = extraout_var_10;
        }
        else if ((param_3 < local_18) || (local_c < param_3)) {
          pv_set_error_code(0x7e4);
          local_10 = 0;
          uVar4 = extraout_var_11;
        }
        else {
          local_8 = local_18 + param_3;
          uVar3 = pv_get_enum_string(0x9020209,local_8,0x100,local_118,param_4);
          uVar4 = (undefined2)((uint)uVar3 >> 0x10);
        }
        goto LAB_10009ca0;
      }
      if (param_2 == 0x902020a) {
        uVar2 = pl_get_param(param_1,0x902020a,3,&local_18);
        if ((uVar2 == 0) || (uVar2 = pl_get_param(param_1,0x902020a,4,&local_c), uVar2 == 0)) {
          pv_set_error_code(0x7e1);
          local_10 = 0;
          uVar4 = extraout_var_12;
        }
        else if ((param_3 < local_18) || (local_c < param_3)) {
          pv_set_error_code(0x7e4);
          local_10 = 0;
          uVar4 = extraout_var_13;
        }
        else {
          local_8 = local_18 + param_3;
          uVar3 = pv_get_enum_string(0x902020a,local_8,0x100,local_118,param_4);
          uVar4 = (undefined2)((uint)uVar3 >> 0x10);
        }
        goto LAB_10009ca0;
      }
    }
  }
  else if (param_2 < 0x9020218) {
    if (param_2 == 0x9020217) {
      uVar2 = pl_get_param(param_1,0x9020217,3,&local_18);
      if ((uVar2 == 0) || (uVar2 = pl_get_param(param_1,0x9020217,4,&local_c), uVar2 == 0)) {
        pv_set_error_code(0x7e1);
        local_10 = 0;
        uVar4 = extraout_var_23;
      }
      else if ((param_3 < local_18) || (local_c < param_3)) {
        pv_set_error_code(0x7e4);
        local_10 = 0;
        uVar4 = extraout_var_24;
      }
      else {
        local_8 = local_18 + param_3;
        uVar3 = pv_get_enum_string(0x9020217,local_8,0x100,local_118,param_4);
        uVar4 = (undefined2)((uint)uVar3 >> 0x10);
      }
      goto LAB_10009ca0;
    }
    if (param_2 == 0x902020c) {
      if (param_3 < *(uint *)(DAT_10043338 + 0xb4 + param_1 * 0x110)) {
        local_8 = *(int *)(DAT_10043338 + param_1 * 0x110 + 100 + param_3 * 4);
        uVar3 = pv_get_enum_string(0x902020c,local_8,0x100,local_118,param_4);
        uVar4 = (undefined2)((uint)uVar3 >> 0x10);
      }
      else {
        pv_set_error_code(0x7e4);
        local_10 = 0;
        uVar4 = extraout_var_18;
      }
      goto LAB_10009ca0;
    }
    if (param_2 == 0x9020210) {
      if (param_3 == 0) {
        bVar1 = pm_io_get_type(param_1,CONCAT22((short)((uint)&local_14 >> 0x10),
                                                *(undefined2 *)
                                                 (DAT_10043334 + 0x12 + param_1 * 0x24)),&local_14);
        if ((CONCAT31(extraout_var_00,bVar1) & 0xffff) == 0) {
          pv_set_error_code(0x7e1);
          local_10 = 0;
          uVar4 = extraout_var_22;
        }
        else {
          local_8 = local_14;
          uVar3 = pv_get_enum_string(0x9020210,local_14,0x100,local_118,param_4);
          uVar4 = (undefined2)((uint)uVar3 >> 0x10);
        }
      }
      else {
        pv_set_error_code(0x7e4);
        local_10 = 0;
        uVar4 = extraout_var_21;
      }
      goto LAB_10009ca0;
    }
    if (param_2 == 0x9020211) {
      if (param_3 == 0) {
        bVar1 = pm_io_get_direction(param_1,CONCAT22((short)((uint)&local_14 >> 0x10),
                                                     *(undefined2 *)
                                                      (DAT_10043334 + 0x12 + param_1 * 0x24)),
                                    &local_14);
        if ((CONCAT31(extraout_var,bVar1) & 0xffff) == 0) {
          pv_set_error_code(0x7e1);
          local_10 = 0;
          uVar4 = extraout_var_20;
        }
        else {
          local_8 = local_14;
          uVar3 = pv_get_enum_string(0x9020211,local_14,0x100,local_118,param_4);
          uVar4 = (undefined2)((uint)uVar3 >> 0x10);
        }
      }
      else {
        pv_set_error_code(0x7e4);
        local_10 = 0;
        uVar4 = extraout_var_19;
      }
      goto LAB_10009ca0;
    }
  }
  else {
    if (param_2 == 0x9030002) {
      uVar2 = pl_get_param(param_1,0x9030002,3,&local_18);
      if ((uVar2 == 0) || (uVar2 = pl_get_param(param_1,0x9030002,4,&local_c), uVar2 == 0)) {
        pv_set_error_code(0x7e1);
        local_10 = 0;
        uVar4 = extraout_var_14;
      }
      else if ((param_3 < local_18) || (local_c < param_3)) {
        pv_set_error_code(0x7e4);
        local_10 = 0;
        uVar4 = extraout_var_15;
      }
      else {
        local_8 = local_18 + param_3;
        uVar3 = pv_get_enum_string(0x9030002,local_8,0x100,local_118,param_4);
        uVar4 = (undefined2)((uint)uVar3 >> 0x10);
      }
      goto LAB_10009ca0;
    }
    if (param_2 == 0x9030005) {
      uVar2 = pl_get_param(param_1,0x9030005,3,&local_18);
      if ((uVar2 == 0) || (uVar2 = pl_get_param(param_1,0x9030005,4,&local_c), uVar2 == 0)) {
        pv_set_error_code(0x7e1);
        local_10 = 0;
        uVar4 = extraout_var_16;
      }
      else if ((param_3 < local_18) || (local_c < param_3)) {
        pv_set_error_code(0x7e4);
        local_10 = 0;
        uVar4 = extraout_var_17;
      }
      else {
        local_8 = local_18 + param_3;
        uVar3 = pv_get_enum_string(0x9030005,local_8,0x100,local_118,param_4);
        uVar4 = (undefined2)((uint)uVar3 >> 0x10);
      }
      goto LAB_10009ca0;
    }
  }
  pv_set_error_code(0x7e2);
  local_10._0_2_ = 0;
  uVar4 = extraout_var_25;
LAB_10009ca0:
  return CONCAT22(uVar4,(undefined2)local_10);
}



/* ================================================================
 * Function: pv_get_enum_string
 * Address:  10009cb0
 * ================================================================ */

/* __stdcall pv_get_enum_string,20 */

undefined4
pv_get_enum_string(uint param_1,int param_2,size_t param_3,char *param_4,undefined4 *param_5)

{
  undefined2 extraout_var;
  char *pcVar1;
  undefined2 uVar2;
  
                    /* 0x9cb0  498  _pv_get_enum_string@20 */
  pv_set_error_code(0);
  uVar2 = extraout_var;
  if ((param_4 == (char *)0x0) || (param_3 == 0)) goto switchD_1000a1d0_default;
  pcVar1 = (char *)param_5;
  if (param_1 < 0x902020c) {
    if (param_1 == 0x902020b) {
      switch(param_2) {
      case 0:
        pcVar1 = strncpy(param_4,s_Clear_Never_10036ef0,param_3);
        *param_5 = 0xc;
        break;
      case 1:
        pcVar1 = strncpy(param_4,s_Clear_Pre_Exposure_10036f00,param_3);
        *param_5 = 0x13;
        break;
      case 2:
        pcVar1 = strncpy(param_4,s_Clear_Pre_Sequence_10036f14,param_3);
        *param_5 = 0x13;
        break;
      case 3:
        pcVar1 = strncpy(param_4,s_Clear_Post_Sequence_10036f28,param_3);
        *param_5 = 0x14;
        break;
      case 4:
        pcVar1 = strncpy(param_4,s_Clear_Pre__and_Post_Sequence_10036f40,param_3);
        *param_5 = 0x1d;
        break;
      case 5:
        pcVar1 = strncpy(param_4,s_Clear_Pre_Exposure_and_Post_Sequ_10036f60,param_3);
        *param_5 = 0x25;
        break;
      default:
        pcVar1 = strncpy(param_4,&DAT_1004271c,param_3);
        *param_5 = 1;
      }
    }
    else if (param_1 < 0x90201f9) {
      if (param_1 == 0x90201f8) {
        if (param_2 == 0) {
          strncpy(param_4,s_Grayscale_CCD_100371dc,param_3);
          *param_5 = 0xe;
        }
        else if (param_2 == 2) {
          strncpy(param_4,s_Color_CCD__RGGB__100371ec,param_3);
          *param_5 = 0x11;
        }
        else {
          strncpy(param_4,&DAT_10042730,param_3);
          *param_5 = 1;
        }
      }
      else if (param_1 == 0x90200d6) {
        if (param_2 == 0) {
          strncpy(param_4,s_Air_or_Water_Cooling_10036f88,param_3);
          *param_5 = 0x15;
        }
        else if (param_2 == 1) {
          strncpy(param_4,s_Cryogenic_Cooling_10036fa0,param_3);
          *param_5 = 0x12;
        }
        else {
          strncpy(param_4,&DAT_10042720,param_3);
          *param_5 = 1;
        }
      }
      else if (param_1 == 0x90200e0) {
        switch(param_2) {
        case 0:
          pcVar1 = strncpy(param_4,s_MPP_Mode_Unknown_10036fb4,param_3);
          *param_5 = 0x11;
          break;
        case 1:
          pcVar1 = strncpy(param_4,s_MPP_Mode_Off_10036fc8,param_3);
          *param_5 = 0xd;
          break;
        case 2:
          pcVar1 = strncpy(param_4,s_MPP_Mode_On_10036fd8,param_3);
          *param_5 = 0xc;
          break;
        case 3:
          pcVar1 = strncpy(param_4,s_MPP_Mode_Selectable_10036fe8,param_3);
          *param_5 = 0x14;
          break;
        default:
          pcVar1 = strncpy(param_4,&DAT_10042724,param_3);
          *param_5 = 1;
        }
      }
      else {
        if (param_1 != 0x90200f7) goto LAB_1000a87d;
        switch(param_2) {
        case 0:
          pcVar1 = strncpy(param_4,s_Multiplication_Gain_100371c4,param_3);
          *param_5 = 0x14;
          break;
        case 1:
          pcVar1 = strncpy(param_4,s_Normal_100371a0,param_3);
          *param_5 = 7;
          break;
        case 2:
          pcVar1 = strncpy(param_4,s_Low_Noise_100371a8,param_3);
          *param_5 = 10;
          break;
        case 3:
          pcVar1 = strncpy(param_4,s_High_Capacity_100371b4,param_3);
          *param_5 = 0xe;
          break;
        default:
          pcVar1 = strncpy(param_4,&DAT_1004272c,param_3);
          *param_5 = 1;
        }
      }
    }
    else if (param_1 == 0x9020209) {
      switch(param_2) {
      case 0:
        pcVar1 = strncpy(param_4,s_Never_Open_Shutter_10037200,param_3);
        *param_5 = 0x13;
        break;
      case 1:
        pcVar1 = strncpy(param_4,s_Open_Shutter_Pre_Exposure_10037214,param_3);
        *param_5 = 0x1a;
        break;
      case 2:
        pcVar1 = strncpy(param_4,s_Open_Shutter_Pre_Sequence_10037230,param_3);
        *param_5 = 0x1a;
        break;
      case 3:
        pcVar1 = strncpy(param_4,s_Open_Shutter_Pre_Trigger_1003724c,param_3);
        *param_5 = 0x19;
        break;
      case 4:
        pcVar1 = strncpy(param_4,s_Do_Not_Change_Shutter_State_10037268,param_3);
        *param_5 = 0x1c;
        break;
      default:
        pcVar1 = strncpy(param_4,&DAT_10042734,param_3);
        *param_5 = 1;
      }
    }
    else {
      if (param_1 != 0x902020a) goto LAB_1000a87d;
      switch(param_2) {
      case 0:
        pcVar1 = strncpy(param_4,s_Shutter_Fault_10037288,param_3);
        *param_5 = 0xe;
        break;
      case 1:
        pcVar1 = strncpy(param_4,s_Shutter_Opening_10037298,param_3);
        *param_5 = 0x10;
        break;
      case 2:
        pcVar1 = strncpy(param_4,s_Shutter_Open_100372ac,param_3);
        *param_5 = 0xd;
        break;
      case 3:
        pcVar1 = strncpy(param_4,s_Shutter_Closing_100372bc,param_3);
        *param_5 = 0x10;
        break;
      case 4:
        pcVar1 = strncpy(param_4,s_Shutter_Closed_100372d0,param_3);
        *param_5 = 0xf;
        break;
      case 5:
        pcVar1 = strncpy(param_4,s_Shutter_Status_Unknown_100372e0,param_3);
        *param_5 = 0x17;
        break;
      default:
        pcVar1 = strncpy(param_4,&DAT_10042738,param_3);
        *param_5 = 1;
      }
    }
  }
  else if (param_1 < 0x9020218) {
    if (param_1 == 0x9020217) {
      pcVar1 = (char *)0x9020217;
      switch(param_2) {
      case 0:
        strncpy(param_4,s_Timed_10037150,param_3);
        *param_5 = 6;
        pcVar1 = (char *)param_5;
        break;
      case 1:
        strncpy(param_4,s_Strobed_10037158,param_3);
        *param_5 = 8;
        pcVar1 = (char *)param_5;
        break;
      case 2:
        strncpy(param_4,&DAT_10037160,param_3);
        *param_5 = 5;
        pcVar1 = (char *)param_5;
        break;
      case 3:
        strncpy(param_4,s_Trigger_first_10037168,param_3);
        *param_5 = 0xe;
        pcVar1 = (char *)param_5;
        break;
      case 4:
        strncpy(param_4,s_Flash_10037178,param_3);
        *param_5 = 6;
        pcVar1 = (char *)param_5;
        break;
      case 5:
        strncpy(param_4,s_Variable_Timed_10037180,param_3);
        *param_5 = 0xf;
        pcVar1 = (char *)param_5;
        break;
      case 6:
        strncpy(param_4,s_Internal_Strobe_10037190,param_3);
        *param_5 = 0x10;
        pcVar1 = (char *)param_5;
      }
    }
    else if (param_1 == 0x902020c) {
      switch(param_2) {
      case 0:
        pcVar1 = strncpy(param_4,s_Normal_Parallel_Clocking_10037000,param_3);
        *param_5 = 0x19;
        break;
      case 1:
        pcVar1 = strncpy(param_4,s_Frame_Transfer_Parallel_Clocking_1003701c,param_3);
        *param_5 = 0x21;
        break;
      case 2:
        pcVar1 = strncpy(param_4,s_MPP_Parallel_Clocking_10037040,param_3);
        *param_5 = 0x16;
        break;
      case 3:
        pcVar1 = strncpy(param_4,s_Frame_Transfer_with_MPP_Parallel_10037058,param_3);
        *param_5 = 0x2a;
        break;
      case 4:
        pcVar1 = strncpy(param_4,s_Alternate_Normal_Parallel_Clocki_10037084,param_3);
        *param_5 = 0x23;
        break;
      case 5:
        pcVar1 = strncpy(param_4,s_Alternate_Frame_Transfer_Paralle_100370a8,param_3);
        *param_5 = 0x2b;
        break;
      case 6:
        pcVar1 = strncpy(param_4,s_Alternate_MPP_Parallel_Clocking_100370d4,param_3);
        *param_5 = 0x20;
        break;
      case 7:
        pcVar1 = strncpy(param_4,s_Alternate_Frame_Transfer_with_MP_100370f8,param_3);
        *param_5 = 0x34;
        break;
      case 8:
        pcVar1 = strncpy(param_4,s_Interline_10037130,param_3);
        *param_5 = 10;
        break;
      case 9:
        pcVar1 = strncpy(param_4,s_Kinetics_10037144,param_3);
        *param_5 = 9;
        break;
      case 10:
        pcVar1 = strncpy(param_4,&DAT_1003713c,param_3);
        *param_5 = 4;
        break;
      default:
        pcVar1 = strncpy(param_4,&DAT_10042728,param_3);
        *param_5 = 1;
      }
    }
    else if (param_1 == 0x9020210) {
      if (param_2 == 0) {
        strncpy(param_4,s_TTL_Port_10037368,param_3);
        *param_5 = 9;
      }
      else if (param_2 == 1) {
        strncpy(param_4,s_DAC_Port_10037374,param_3);
        *param_5 = 9;
      }
      else {
        strncpy(param_4,&DAT_10042740,param_3);
        *param_5 = 1;
      }
    }
    else {
      if (param_1 != 0x9020211) goto LAB_1000a87d;
      if (param_2 == 0) {
        pcVar1 = strncpy(param_4,s_Input_Only_10037380,param_3);
        *param_5 = 0xb;
      }
      else if (param_2 == 1) {
        pcVar1 = strncpy(param_4,s_Output_Only_1003738c,param_3);
        *param_5 = 0xc;
      }
      else if (param_2 == 2) {
        pcVar1 = strncpy(param_4,s_Input_Output_1003739c,param_3);
        *param_5 = 0xd;
      }
      else {
        pcVar1 = strncpy(param_4,&DAT_10042744,param_3);
        *param_5 = 1;
      }
    }
  }
  else if (param_1 == 0x9030002) {
    if (param_2 == 0) {
      pcVar1 = strncpy(param_4,s_One_Millisecond_Exposure_Resolut_10037318,param_3);
      *param_5 = 0x24;
    }
    else if (param_2 == 1) {
      pcVar1 = strncpy(param_4,s_One_Microsecond_Exposure_Resolut_10037340,param_3);
      *param_5 = 0x24;
    }
    else if (param_2 == 2) {
      pcVar1 = strncpy(param_4,s_One_Second_Exposure_Resolution_100372f8,param_3);
      *param_5 = 0x24;
    }
    else {
      pcVar1 = strncpy(param_4,&DAT_1004273c,param_3);
      *param_5 = 1;
    }
  }
  else if (param_1 == 0x9030005) {
    switch(param_2) {
    case 0:
      strncpy(param_4,s_No_Bof_or_Eof_100373ac,param_3);
      *param_5 = 0xe;
      break;
    case 1:
      strncpy(param_4,s_Bof_Only_100373bc,param_3);
      *param_5 = 9;
      break;
    case 2:
      strncpy(param_4,s_Eof_Only_100373c8,param_3);
      *param_5 = 9;
      break;
    case 3:
      strncpy(param_4,s_Bof_and_Eof_100373d4,param_3);
      *param_5 = 0xc;
      break;
    default:
      strncpy(param_4,&DAT_10042748,param_3);
      *param_5 = 1;
    }
  }
  else {
LAB_1000a87d:
    strncpy(param_4,&DAT_1004274c,param_3);
    *param_5 = 1;
  }
  uVar2 = (undefined2)((uint)pcVar1 >> 0x10);
switchD_1000a1d0_default:
  return CONCAT22(uVar2,1);
}



/* ================================================================
 * Function: pv_get_enum_param
 * Address:  1000a962
 * ================================================================ */

/* __stdcall pv_get_enum_param,24 */

undefined2
pv_get_enum_param(short param_1,uint param_2,uint param_3,int *param_4,char *param_5,size_t param_6)

{
  ushort uVar1;
  uint uVar2;
  uint local_14;
  uint local_10;
  undefined2 local_c;
  undefined4 local_8;
  
                    /* 0xa962  497  _pv_get_enum_param@24 */
  local_c = 1;
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    return 0;
  }
  *param_4 = 0;
  if ((param_5 != (char *)0x0) && (param_6 != 0)) {
    *param_5 = '\0';
  }
  if (param_2 < 0x9020218) {
    if (param_2 == 0x9020217) {
      uVar1 = pl_get_param(param_1,0x9020217,1,&local_10);
      if (uVar1 == 0) {
        pv_set_error_code(0x7e1);
        return 0;
      }
      if (param_3 < local_10) {
        *param_4 = *(int *)(DAT_10043338 + param_1 * 0x110 + 0xb8 + param_3 * 4);
        pv_get_enum_string(0x9020217,*param_4,param_6,param_5,&local_8);
        return local_c;
      }
      pv_set_error_code(0x7e4);
      return 0;
    }
    switch(param_2) {
    case 0x9020209:
      uVar1 = pl_get_param(param_1,param_2,1,&local_10);
      if ((uVar1 == 0) || (uVar1 = pl_get_param(param_1,param_2,3,&local_14), uVar1 == 0)) {
        pv_set_error_code(0x7e1);
        local_c = 0;
      }
      else if (param_3 < local_10) {
        *param_4 = local_14 + param_3;
        pv_get_enum_string(param_2,*param_4,param_6,param_5,&local_8);
      }
      else {
        pv_set_error_code(0x7e4);
        local_c = 0;
      }
      break;
    default:
      goto switchD_1000a9d9_caseD_1;
    case 0x902020b:
      uVar1 = pl_get_param(param_1,param_2,1,&local_10);
      if ((uVar1 == 0) || (uVar1 = pl_get_param(param_1,param_2,3,&local_14), uVar1 == 0)) {
        pv_set_error_code(0x7e1);
        local_c = 0;
      }
      else if (param_3 < local_10) {
        *param_4 = local_14 + param_3;
        pv_get_enum_string(param_2,*param_4,param_6,param_5,&local_8);
      }
      else {
        pv_set_error_code(0x7e4);
        local_c = 0;
      }
      break;
    case 0x902020c:
      uVar1 = pl_get_param(param_1,param_2,1,&local_10);
      if (uVar1 == 0) {
        pv_set_error_code(0x7e1);
        local_c = 0;
      }
      else if (param_3 < local_10) {
        *param_4 = *(int *)(DAT_10043338 + param_1 * 0x110 + 100 + param_3 * 4);
        pv_get_enum_string(param_2,*param_4,param_6,param_5,&local_8);
      }
      else {
        pv_set_error_code(0x7e4);
        local_c = 0;
      }
      break;
    case 0x9020210:
      uVar1 = pl_get_param(param_1,param_2,1,&local_10);
      if ((uVar1 == 0) || (uVar1 = pl_get_param(param_1,param_2,3,&local_14), uVar1 == 0)) {
        pv_set_error_code(0x7e1);
        local_c = 0;
      }
      else if (param_3 < local_10) {
        *param_4 = local_14 + param_3;
        pv_get_enum_string(param_2,*param_4,param_6,param_5,&local_8);
      }
      else {
        pv_set_error_code(0x7e4);
        local_c = 0;
      }
      break;
    case 0x9020211:
      uVar1 = pl_get_param(param_1,param_2,1,&local_10);
      if ((uVar1 == 0) || (uVar1 = pl_get_param(param_1,param_2,3,&local_14), uVar1 == 0)) {
        pv_set_error_code(0x7e1);
        local_c = 0;
      }
      else if (param_3 < local_10) {
        *param_4 = local_14 + param_3;
        pv_get_enum_string(param_2,*param_4,param_6,param_5,&local_8);
      }
      else {
        pv_set_error_code(0x7e4);
        local_c = 0;
      }
    }
  }
  else {
    if (param_2 == 0x9030005) {
      uVar1 = pl_get_param(param_1,0x9030005,1,&local_10);
      if ((uVar1 != 0) && (uVar1 = pl_get_param(param_1,0x9030005,3,&local_14), uVar1 != 0)) {
        if (param_3 < local_10) {
          *param_4 = local_14 + param_3;
          pv_get_enum_string(0x9030005,*param_4,param_6,param_5,&local_8);
          return local_c;
        }
        pv_set_error_code(0x7e4);
        return 0;
      }
      pv_set_error_code(0x7e1);
      return 0;
    }
switchD_1000a9d9_caseD_1:
    local_c = 0;
  }
  return local_c;
}



/* ================================================================
 * Function: pi_get_local
 * Address:  1000ae30
 * ================================================================ */

/* __stdcall pi_get_local,16 */

uint pi_get_local(short param_1,uint param_2,short param_3,uint *param_4)

{
  bool bVar1;
  ushort uVar2;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined3 extraout_var;
  undefined2 extraout_var_06;
  undefined2 extraout_var_07;
  undefined2 extraout_var_08;
  undefined2 extraout_var_09;
  undefined2 extraout_var_10;
  undefined2 extraout_var_11;
  undefined2 extraout_var_12;
  undefined2 extraout_var_13;
  undefined2 extraout_var_14;
  undefined2 extraout_var_15;
  undefined2 extraout_var_16;
  undefined2 extraout_var_17;
  undefined2 extraout_var_18;
  undefined2 extraout_var_19;
  undefined2 extraout_var_20;
  undefined2 extraout_var_21;
  uint uVar3;
  undefined2 extraout_var_22;
  uint *local_8;
  
                    /* 0xae30  242  _pi_get_local@16 */
  local_8 = (uint *)0x0;
  if (param_2 < 0x90200f8) {
    if (param_2 == 0x90200f7) {
      uVar2 = FUN_1000c656(param_1,param_3,(int *)param_4);
      param_2 = CONCAT22(extraout_var_10,uVar2);
      local_8 = (uint *)(uint)uVar2;
    }
    else if (param_2 < 0x6020210) {
      if (param_2 == 0x602020f) {
        uVar2 = pi_get_io_addr(param_1,param_3,param_4);
        param_2 = CONCAT22(extraout_var_11,uVar2);
        local_8 = (uint *)(uint)uVar2;
      }
      else if (param_2 < 0x6000003) {
        if (param_2 == 0x6000002) {
          uVar2 = FUN_1000c54a(param_1,param_3,param_4);
          param_2 = CONCAT22(extraout_var_00,uVar2);
          local_8 = (uint *)(uint)uVar2;
        }
        else if (param_2 == 0x10201ff) {
          uVar2 = pv_get_bit_depth(param_1,param_3,(ushort *)param_4);
          param_2 = CONCAT22(extraout_var_08,uVar2);
          local_8 = (uint *)(uint)uVar2;
        }
        else if (param_2 == 0x1020201) {
          uVar2 = pv_get_spdtab_index(param_1,param_3,(ushort *)param_4);
          param_2 = CONCAT22(extraout_var_09,uVar2);
          local_8 = (uint *)(uint)uVar2;
        }
        else if (param_2 == 0x4020212) {
          uVar2 = pi_get_io_state(param_1,param_3,param_4);
          param_2 = CONCAT22(extraout_var_14,uVar2);
          local_8 = (uint *)(uint)uVar2;
        }
      }
      else if (param_2 < 0x60201f6) {
        if ((0x60201f3 < param_2) || ((0x602003d < param_2 && (param_2 < 0x6020040)))) {
          uVar2 = pm_get_param(param_1,param_2,param_3,param_4);
          param_2 = CONCAT22(extraout_var_19,uVar2);
          local_8 = (uint *)(uint)uVar2;
        }
      }
      else if (param_2 == 0x6020204) {
        uVar2 = pv_get_pix_time(param_1,param_3,(ushort *)param_4);
        param_2 = CONCAT22(extraout_var_07,uVar2);
        local_8 = (uint *)(uint)uVar2;
      }
    }
    else if (param_2 < 0x6030005) {
      if (param_2 == 0x6030004) {
        uVar2 = pi_get_exp_res_index(param_1,param_3,param_4);
        param_2 = CONCAT22(extraout_var_05,uVar2);
        local_8 = (uint *)(uint)uVar2;
      }
      else if (param_2 == 0x6020213) {
        uVar2 = pi_get_io_bitdepth(param_1,param_3,param_4);
        param_2 = CONCAT22(extraout_var_15,uVar2);
        local_8 = (uint *)(uint)uVar2;
      }
      else if (param_2 == 0x6020219) {
        param_2 = pi_get_param(param_1,0x13f,param_3,param_4);
        local_8 = (uint *)(param_2 & 0xffff);
      }
      else if (param_2 == 0x6030001) {
        uVar2 = FUN_1000c24d(param_1,param_3,(ushort *)param_4);
        param_2 = CONCAT22(extraout_var_04,uVar2);
        local_8 = (uint *)(uint)uVar2;
      }
    }
    else if (param_2 == 0x7030006) {
      uVar2 = pv_get_int_counts(param_1,param_3,(int *)param_4);
      param_2 = CONCAT22(extraout_var_02,uVar2);
      local_8 = (uint *)(uint)uVar2;
    }
    else if (param_2 == 0x90200d6) {
      uVar2 = FUN_1000c8ec(param_1,param_3,param_4);
      param_2 = CONCAT22(extraout_var_22,uVar2);
      local_8 = (uint *)(uint)uVar2;
    }
  }
  else if (param_2 < 0x9020218) {
    if (param_2 == 0x9020217) {
      uVar2 = pv_get_exposure_mode(param_1,param_3,(int *)param_4);
      param_2 = CONCAT22(extraout_var_16,uVar2);
      local_8 = (uint *)(uint)uVar2;
    }
    else {
      switch(param_2) {
      case 0x9020209:
        uVar2 = pv_get_shtr_open_mode(param_1,param_3,(int *)param_4);
        param_2 = CONCAT22(extraout_var_06,uVar2);
        local_8 = (uint *)(uint)uVar2;
        break;
      case 0x902020b:
        param_2 = FUN_1000c346(param_1,param_3,param_4);
        local_8 = (uint *)(param_2 & 0xffff);
        break;
      case 0x902020c:
        uVar2 = pv_get_pmode(param_1,param_3,(int *)param_4);
        param_2 = CONCAT22(extraout_var_17,uVar2);
        local_8 = (uint *)(uint)uVar2;
        break;
      case 0x9020210:
        uVar2 = pi_get_io_type(param_1,param_3,param_4);
        param_2 = CONCAT22(extraout_var_12,uVar2);
        local_8 = (uint *)(uint)uVar2;
        break;
      case 0x9020211:
        uVar2 = pi_get_io_direction(param_1,param_3,param_4);
        param_2 = CONCAT22(extraout_var_13,uVar2);
        local_8 = (uint *)(uint)uVar2;
      }
    }
  }
  else if (param_2 < 0xb02021e) {
    if (param_2 == 0xb02021d) {
      uVar3 = pi_get_param(param_1,0x13d,param_3,param_4);
      local_8 = (uint *)(uVar3 & 0xffff);
      param_2 = (uint)local_8;
      if ((local_8 != (uint *)0x0) && ((param_3 == 0 || (param_3 == 5)))) {
        *(ushort *)param_4 = (ushort)((short)*param_4 == 2);
        param_2 = (uint)param_4;
      }
    }
    else if (param_2 == 0x9030002) {
      bVar1 = FUN_1000c138(param_1,param_3,param_4);
      param_2 = CONCAT31(extraout_var,bVar1);
      local_8 = (uint *)(param_2 & 0xffff);
    }
    else if (param_2 == 0x9030005) {
      uVar2 = pv_get_irq_mask(param_1,param_3,(int *)param_4);
      param_2 = CONCAT22(extraout_var_03,uVar2);
      local_8 = (uint *)(uint)uVar2;
    }
    else if (param_2 == 0xb0201fd) {
      uVar2 = FUN_1000c7c6(param_1,param_3,param_4);
      param_2 = CONCAT22(extraout_var_18,uVar2);
      local_8 = (uint *)(uint)uVar2;
    }
  }
  else if (param_2 == 0xb030007) {
    uVar2 = pv_get_int_clear(param_3,param_4);
    param_2 = CONCAT22(extraout_var_01,uVar2);
    local_8 = (uint *)(uint)uVar2;
  }
  else if (param_2 == 0xb03012b) {
    uVar2 = pi_get_circ_buffer(param_1,param_3,param_4);
    param_2 = CONCAT22(extraout_var_20,uVar2);
    local_8 = (uint *)(uint)uVar2;
  }
  else if (param_2 == 0xd020081) {
    uVar2 = pv_get_chip_name(param_1,param_3,(char *)param_4);
    param_2 = CONCAT22(extraout_var_21,uVar2);
    local_8 = (uint *)(uint)uVar2;
  }
  return CONCAT22((short)(param_2 >> 0x10),local_8._0_2_);
}



/* ================================================================
 * Function: pi_get_param
 * Address:  1000b353
 * ================================================================ */

/* __stdcall pi_get_param,16 */

uint pi_get_param(short param_1,uint param_2,short param_3,uint *param_4)

{
  ushort uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  short sVar4;
  uint uVar5;
  ushort extraout_var;
  ushort extraout_var_00;
  ushort extraout_var_01;
  ushort extraout_var_02;
  ushort extraout_var_03;
  ushort extraout_var_04;
  ushort extraout_var_05;
  ushort extraout_var_06;
  ushort extraout_var_07;
  ushort extraout_var_08;
  ushort extraout_var_09;
  undefined2 extraout_var_10;
  uint local_54;
  uint *local_50;
  uint local_4c;
  uint local_48;
  int local_44;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
                    /* 0xb353  243  _pi_get_param@16 */
  uVar5 = local_40 >> 0x10;
  local_40 = uVar5 << 0x10;
  if (*(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c) == 0) {
    local_40 = uVar5 << 0x10;
    pv_set_error_code(0x7df);
    uVar3 = extraout_var_10;
  }
  else {
    local_44 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
    uVar5 = pi_get_local(param_1,param_2,param_3,param_4);
    uVar3 = (undefined2)uVar5;
    if ((uVar5 & 0xffff) != 0) {
      return uVar5 & 0xffff;
    }
    local_40._0_2_ = uVar3;
    switch(param_3) {
    case 0:
      sVar4 = (**(code **)(local_44 + 0x54))(local_44,param_2 & 0xffff,&local_3c);
      local_40 = CONCAT22(local_40._2_2_,sVar4);
      if (sVar4 == 0) {
        uVar1 = (ushort)(byte)(param_2 >> 0x18);
        local_48 = CONCAT22(local_48._2_2_,uVar1);
        if ((((uVar1 == 9) || (uVar1 == 0xc)) || (uVar1 == 5)) ||
           (((uVar1 == 1 || (uVar1 == 6)) || ((uVar1 == 2 || (uVar1 == 7)))))) {
          local_4c = 0;
          sVar4 = (**(code **)(local_44 + 0x34))(local_44,param_2 & 0xffff,&local_4c);
          local_40 = CONCAT22(local_40._2_2_,sVar4);
          if (sVar4 == 1) {
            local_50 = (uint *)(local_48 & 0xffff);
            uVar2 = (undefined1)local_4c;
            switch(local_50) {
            case (uint *)0x1:
              *(undefined2 *)param_4 = (undefined2)local_4c;
              local_50 = param_4;
              break;
            case (uint *)0x2:
              *param_4 = local_4c;
              break;
            case (uint *)0x5:
              *(undefined1 *)param_4 = uVar2;
              break;
            case (uint *)0x6:
              *(undefined2 *)param_4 = (undefined2)local_4c;
              local_50 = (uint *)0x0;
              break;
            case (uint *)0x7:
              *param_4 = local_4c;
              local_50 = param_4;
              break;
            case (uint *)0x9:
              *param_4 = local_4c;
              local_50 = param_4;
              break;
            case (uint *)0xb:
              *(undefined2 *)param_4 = (undefined2)local_4c;
              local_50 = (uint *)0x0;
              break;
            case (uint *)0xc:
              *(undefined1 *)param_4 = uVar2;
              local_50 = (uint *)0x0;
            }
          }
          else {
            pv_set_error_code(0x7e0);
            local_50 = (uint *)((uint)extraout_var << 0x10);
            local_40 = 0;
          }
        }
        else if (uVar1 == 4) {
          local_54 = 0;
          local_50 = (uint *)0x0;
          sVar4 = (**(code **)(local_44 + 0x30))(local_44,param_2 & 0xffff,&local_54);
          local_40 = CONCAT22(local_40._2_2_,sVar4);
          if (sVar4 == 1) {
            *param_4 = local_54;
            param_4[1] = (uint)local_50;
          }
          else {
            pv_set_error_code(0x7e0);
            local_50 = (uint *)((uint)extraout_var_00 << 0x10);
            local_40 = 0;
          }
        }
        else {
          pv_set_error_code(0x7e0);
          local_50 = (uint *)((uint)extraout_var_01 << 0x10);
        }
      }
      else {
        local_50 = (uint *)pi_convert_double_data(param_4,local_1c,local_18,local_38);
      }
      break;
    case 1:
      sVar4 = (**(code **)(local_44 + 0x54))(local_44,param_2 & 0xffff,&local_3c);
      local_40 = CONCAT22(local_40._2_2_,sVar4);
      if (sVar4 == 0) {
        pv_set_error_code(0x7e0);
        local_50 = (uint *)((uint)extraout_var_02 << 0x10);
      }
      else {
        *param_4 = local_3c;
        local_50 = param_4;
      }
      break;
    case 2:
      sVar4 = (**(code **)(local_44 + 0x54))(local_44,param_2 & 0xffff,&local_3c);
      local_40 = CONCAT22(local_40._2_2_,sVar4);
      if (sVar4 == 0) {
        pv_set_error_code(0x7e0);
        local_50 = (uint *)((uint)extraout_var_03 << 0x10);
      }
      else {
        *(undefined2 *)param_4 = (undefined2)local_38;
        local_50 = (uint *)0x0;
      }
      break;
    case 3:
      sVar4 = (**(code **)(local_44 + 0x54))(local_44,param_2 & 0xffff,&local_3c);
      local_40 = CONCAT22(local_40._2_2_,sVar4);
      if (sVar4 == 0) {
        pv_set_error_code(0x7e0);
        local_50 = (uint *)((uint)extraout_var_04 << 0x10);
      }
      else {
        local_50 = (uint *)pi_convert_double_data(param_4,local_34,local_30,local_38);
      }
      break;
    case 4:
      sVar4 = (**(code **)(local_44 + 0x54))(local_44,param_2 & 0xffff,&local_3c);
      local_40 = CONCAT22(local_40._2_2_,sVar4);
      if (sVar4 == 0) {
        pv_set_error_code(0x7e0);
        local_50 = (uint *)((uint)extraout_var_05 << 0x10);
      }
      else {
        local_50 = (uint *)pi_convert_double_data(param_4,local_2c,local_28,local_38);
      }
      break;
    case 5:
      sVar4 = (**(code **)(local_44 + 0x54))(local_44,param_2 & 0xffff,&local_3c);
      local_40 = CONCAT22(local_40._2_2_,sVar4);
      if (sVar4 == 0) {
        pv_set_error_code(0x7e0);
        local_50 = (uint *)((uint)extraout_var_06 << 0x10);
      }
      else {
        local_50 = (uint *)pi_convert_double_data(param_4,local_24,local_20,local_38);
      }
      break;
    case 6:
      sVar4 = (**(code **)(local_44 + 0x54))(local_44,param_2 & 0xffff,&local_3c);
      local_40 = CONCAT22(local_40._2_2_,sVar4);
      if (sVar4 == 0) {
        pv_set_error_code(0x7e0);
        local_50 = (uint *)((uint)extraout_var_07 << 0x10);
      }
      else {
        local_50 = (uint *)pi_convert_double_data(param_4,local_14,local_10,local_38);
      }
      break;
    case 7:
      uVar5 = (**(code **)(local_44 + 0x54))(local_44,param_2 & 0xffff,&local_3c);
      local_40 = CONCAT22(local_40._2_2_,(short)uVar5);
      if ((uVar5 & 0xffff) == 0) {
        pv_set_error_code(0x7e0);
        local_50 = (uint *)((uint)extraout_var_08 << 0x10);
      }
      else {
        *(undefined2 *)param_4 = local_c;
        local_50 = (uint *)CONCAT22((short)(uVar5 >> 0x10),local_c);
      }
      break;
    case 8:
      local_40 = CONCAT22(local_40._2_2_,1);
      local_50 = (uint *)(**(code **)(local_44 + 0x54))(local_44,param_2 & 0xffff,&local_3c);
      *(short *)param_4 = (short)local_50;
      break;
    default:
      local_40 = (uint)local_40._2_2_ << 0x10;
      pv_set_error_code(0x7e3);
      local_50 = (uint *)((uint)extraout_var_09 << 0x10);
    }
    uVar3 = (undefined2)((uint)local_50 >> 0x10);
  }
  return CONCAT22(uVar3,(undefined2)local_40);
}



/* ================================================================
 * Function: pi_convert_double_data
 * Address:  1000b862
 * ================================================================ */

/* __stdcall pi_convert_double_data,16 */

void pi_convert_double_data
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
                    /* 0xb862  195  _pi_convert_double_data@16 */
  switch(param_4) {
  case 1:
    uVar2 = ftol();
    *(undefined2 *)param_1 = uVar2;
    break;
  case 2:
    uVar3 = ftol();
    *param_1 = uVar3;
    break;
  case 4:
    *param_1 = param_2;
    param_1[1] = param_3;
    break;
  case 5:
    uVar1 = ftol();
    *(undefined1 *)param_1 = uVar1;
    break;
  case 6:
    uVar2 = ftol();
    *(undefined2 *)param_1 = uVar2;
    break;
  case 7:
    uVar3 = ftol();
    *param_1 = uVar3;
    break;
  case 9:
    uVar3 = ftol();
    *param_1 = uVar3;
    break;
  case 0xb:
    uVar2 = ftol();
    *(undefined2 *)param_1 = uVar2;
    break;
  case 0xc:
    uVar1 = ftol();
    *(undefined1 *)param_1 = uVar1;
  }
  return;
}



/* ================================================================
 * Function: pi_get_exp_res_index
 * Address:  1000b948
 * ================================================================ */

/* __stdcall pi_get_exp_res_index,12 */

undefined2 pi_get_exp_res_index(short param_1,undefined2 param_2,uint *param_3)

{
  undefined2 local_8;
  
                    /* 0xb948  236  _pi_get_exp_res_index@12 */
  switch(param_2) {
  case 0:
    *(undefined2 *)param_3 = *(undefined2 *)(DAT_10043334 + 0x10 + param_1 * 0x24);
    local_8 = 1;
    break;
  case 1:
    *param_3 = (uint)*(ushort *)(DAT_10043338 + 0x36 + param_1 * 0x110);
    local_8 = 1;
    break;
  case 2:
    *(undefined2 *)param_3 = 6;
    local_8 = 1;
    break;
  case 3:
  case 5:
    *(undefined2 *)param_3 = 0;
    local_8 = 1;
    break;
  case 4:
    *(short *)param_3 = *(short *)(DAT_10043338 + 0x36 + param_1 * 0x110) + -1;
    local_8 = 1;
    break;
  case 6:
    *(undefined2 *)param_3 = 0;
    local_8 = 1;
    break;
  case 7:
    *(undefined2 *)param_3 = 2;
    local_8 = 1;
    break;
  case 8:
    local_8 = 1;
    *(undefined2 *)param_3 = 1;
    break;
  default:
    pv_set_error_code(0x7e3);
    local_8 = 0;
  }
  return local_8;
}



/* ================================================================
 * Function: pi_get_io_addr
 * Address:  1000ba77
 * ================================================================ */

/* __stdcall pi_get_io_addr,12 */

undefined2 pi_get_io_addr(short param_1,undefined2 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 local_4c [56];
  undefined4 *local_14;
  undefined2 local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
                    /* 0xba77  237  _pi_get_io_addr@12 */
  local_14 = param_3;
  local_10 = 1;
  local_8 = param_3;
  local_c = param_3;
  if (*(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c) == 0) {
    local_10 = 0;
  }
  else {
    iVar1 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
    iVar1 = (**(code **)(iVar1 + 0x54))(iVar1,0x5b,local_4c);
    if (iVar1 == 0) {
      local_10 = 0;
    }
    else {
      switch(param_2) {
      case 0:
        *(undefined2 *)local_8 = 1;
        break;
      case 1:
        *local_c = 1;
        break;
      case 2:
        *(undefined2 *)param_3 = 6;
        break;
      case 3:
      case 5:
        *(undefined2 *)local_8 = 1;
        break;
      case 4:
        *(undefined2 *)local_8 = 1;
        break;
      case 6:
        *(undefined2 *)local_8 = 1;
        break;
      case 7:
        *(undefined2 *)param_3 = 2;
        break;
      case 8:
        *(undefined2 *)local_14 = 1;
        break;
      default:
        pv_set_error_code(0x7e3);
        local_10 = 0;
      }
    }
  }
  return local_10;
}



/* ================================================================
 * Function: pi_get_io_type
 * Address:  1000bb93
 * ================================================================ */

/* __stdcall pi_get_io_type,12 */

undefined2 pi_get_io_type(short param_1,undefined2 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 local_4c [56];
  undefined4 *local_14;
  undefined2 local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
                    /* 0xbb93  241  _pi_get_io_type@12 */
  local_14 = param_3;
  local_10 = 1;
  local_8 = param_3;
  local_c = param_3;
  if (*(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c) == 0) {
    local_10 = 0;
  }
  else {
    iVar1 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
    iVar1 = (**(code **)(iVar1 + 0x54))(iVar1,0x5b,local_4c);
    if (iVar1 == 0) {
      local_10 = 0;
    }
    else {
      switch(param_2) {
      case 0:
        *local_8 = 0;
        break;
      case 1:
        *local_c = 1;
        break;
      case 2:
        *(undefined2 *)param_3 = 9;
        break;
      case 3:
      case 5:
        *local_8 = 0;
        break;
      case 4:
        *local_8 = 0;
        break;
      case 6:
        *local_8 = 0;
        break;
      case 7:
        *(undefined2 *)param_3 = 1;
        break;
      case 8:
        *(undefined2 *)local_14 = 1;
        break;
      default:
        pv_set_error_code(0x7e3);
        local_10 = 0;
      }
    }
  }
  return local_10;
}



/* ================================================================
 * Function: pi_get_io_direction
 * Address:  1000bcb6
 * ================================================================ */

/* __stdcall pi_get_io_direction,12 */

undefined2 pi_get_io_direction(short param_1,undefined2 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 local_4c [56];
  undefined4 *local_14;
  undefined2 local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
                    /* 0xbcb6  239  _pi_get_io_direction@12 */
  local_14 = param_3;
  local_10 = 1;
  local_8 = param_3;
  local_c = param_3;
  if (*(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c) == 0) {
    local_10 = 0;
  }
  else {
    iVar1 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
    iVar1 = (**(code **)(iVar1 + 0x54))(iVar1,0x5b,local_4c);
    if (iVar1 == 0) {
      local_10 = 0;
    }
    else {
      switch(param_2) {
      case 0:
        *local_8 = 2;
        break;
      case 1:
        *local_c = 1;
        break;
      case 2:
        *(undefined2 *)param_3 = 9;
        break;
      case 3:
      case 5:
        *local_8 = 2;
        break;
      case 4:
        *local_8 = 2;
        break;
      case 6:
        *local_8 = 0;
        break;
      case 7:
        *(undefined2 *)param_3 = 1;
        break;
      case 8:
        *(undefined2 *)local_14 = 1;
        break;
      default:
        pv_set_error_code(0x7e3);
        local_10 = 0;
      }
    }
  }
  return local_10;
}



/* ================================================================
 * Function: pi_get_io_state
 * Address:  1000bdd9
 * ================================================================ */

/* __stdcall pi_get_io_state,12 */

undefined2 pi_get_io_state(short param_1,undefined2 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 local_50 [8];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined2 local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
                    /* 0xbdd9  240  _pi_get_io_state@12 */
  local_18 = param_3;
  local_10 = 1;
  local_14 = param_3;
  local_8 = param_3;
  local_c = param_3;
  if (*(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c) == 0) {
    local_10 = 0;
  }
  else {
    iVar1 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
    iVar1 = (**(code **)(iVar1 + 0x54))(iVar1,0x5b,local_50);
    if (iVar1 == 0) {
      local_10 = 0;
    }
    else {
      switch(param_2) {
      case 0:
        *local_8 = local_30;
        local_8[1] = local_2c;
        break;
      case 1:
        *local_c = 1;
        break;
      case 2:
        *(undefined2 *)param_3 = 4;
        break;
      case 3:
        *local_8 = local_48;
        local_8[1] = local_44;
        break;
      case 4:
        *local_8 = local_40;
        local_8[1] = local_3c;
        break;
      case 5:
        *local_8 = 0;
        local_8[1] = 0;
        break;
      case 6:
        *local_8 = 0;
        local_8[1] = 0;
        break;
      case 7:
        *(undefined2 *)local_14 = 2;
        break;
      case 8:
        *(undefined2 *)local_18 = 1;
        break;
      default:
        pv_set_error_code(0x7e3);
        local_10 = 0;
      }
    }
  }
  return local_10;
}



/* ================================================================
 * Function: pi_get_io_bitdepth
 * Address:  1000bf2d
 * ================================================================ */

/* __stdcall pi_get_io_bitdepth,12 */

undefined2 pi_get_io_bitdepth(short param_1,undefined2 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 local_4c [56];
  undefined4 *local_14;
  undefined2 local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
                    /* 0xbf2d  238  _pi_get_io_bitdepth@12 */
  local_14 = param_3;
  local_10 = 1;
  local_8 = param_3;
  local_c = param_3;
  if (*(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c) == 0) {
    local_10 = 0;
  }
  else {
    iVar1 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
    iVar1 = (**(code **)(iVar1 + 0x54))(iVar1,0x5b,local_4c);
    if (iVar1 == 0) {
      local_10 = 0;
    }
    else {
      switch(param_2) {
      case 0:
      case 3:
      case 4:
      case 5:
        *(undefined2 *)local_8 = 8;
        break;
      case 1:
        *local_c = 1;
        break;
      case 2:
        *(undefined2 *)param_3 = 6;
        break;
      case 6:
        *(undefined2 *)local_8 = 0;
        break;
      case 7:
        *(undefined2 *)param_3 = 1;
        break;
      case 8:
        *(undefined2 *)local_14 = 1;
        break;
      default:
        pv_set_error_code(0x7e3);
        local_10 = 0;
      }
    }
  }
  return local_10;
}



/* ================================================================
 * Function: pi_get_circ_buffer
 * Address:  1000c03d
 * ================================================================ */

/* __stdcall pi_get_circ_buffer,12 */

undefined2 pi_get_circ_buffer(short param_1,undefined2 param_2,undefined4 *param_3)

{
  undefined2 local_c;
  
                    /* 0xc03d  233  _pi_get_circ_buffer@12 */
  local_c = 1;
  if (*(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c) == 0) {
    local_c = 0;
  }
  else {
    switch(param_2) {
    case 0:
    case 3:
    case 4:
    case 5:
      *(undefined2 *)param_3 = 1;
      break;
    case 1:
      *param_3 = 1;
      break;
    case 2:
      *(undefined2 *)param_3 = 0xb;
      break;
    case 6:
      *(undefined2 *)param_3 = 0;
      break;
    case 7:
      *(undefined2 *)param_3 = 3;
      break;
    case 8:
      *(undefined2 *)param_3 = 1;
      break;
    default:
      pv_set_error_code(0x7e3);
      local_c = 0;
    }
  }
  return local_c;
}



/* ================================================================
 * Function: FUN_1000c138
 * Address:  1000c138
 * ================================================================ */

bool FUN_1000c138(short param_1,undefined2 param_2,uint *param_3)

{
  uint uVar1;
  bool bVar2;
  
  bVar2 = true;
  switch(param_2) {
  case 0:
    uVar1 = pv_exp_get_res(param_1,*(ushort *)(DAT_10043334 + 0x10 + param_1 * 0x24),param_3);
    bVar2 = (uVar1 & 0xffff) == 0;
    if (bVar2) {
      pv_set_error_code(0x7e1);
    }
    bVar2 = !bVar2;
    break;
  case 1:
    *param_3 = (uint)*(ushort *)(DAT_10043338 + 0x36 + param_1 * 0x110);
    break;
  case 2:
    *(undefined2 *)param_3 = 9;
    break;
  case 3:
  case 5:
    *param_3 = 0;
    break;
  case 4:
    *param_3 = 1;
    break;
  case 6:
    *param_3 = 1;
    break;
  case 7:
    *(undefined2 *)param_3 = 1;
    break;
  case 8:
    *(undefined2 *)param_3 = 1;
    break;
  default:
    pv_set_error_code(0x7e3);
    bVar2 = false;
  }
  return bVar2;
}



/* ================================================================
 * Function: FUN_1000c24d
 * Address:  1000c24d
 * ================================================================ */

undefined2 FUN_1000c24d(short param_1,undefined2 param_2,ushort *param_3)

{
  uint uVar1;
  ushort local_1c [2];
  ushort *local_18;
  ushort *local_14;
  undefined2 local_10;
  ushort *local_c;
  ushort *local_8;
  
  local_14 = param_3;
  local_10 = 1;
  local_8 = param_3;
  local_c = param_3;
  local_18 = param_3;
  switch(param_2) {
  case 0:
    uVar1 = pl_exp_get_time_seq(param_1,local_1c);
    if ((uVar1 & 0xffff) == 0) {
      pv_set_error_code(0x7e1);
      local_10 = 0;
    }
    else {
      *local_8 = local_1c[0];
    }
    break;
  case 1:
    param_3[0] = 0;
    param_3[1] = 0;
    break;
  case 2:
    *param_3 = 6;
    break;
  case 3:
  case 5:
    *param_3 = 0;
    break;
  case 4:
    *param_3 = 0xffff;
    break;
  case 6:
    *param_3 = 1;
    break;
  case 7:
    *param_3 = 2;
    break;
  case 8:
    *param_3 = 1;
    break;
  default:
    pv_set_error_code(0x7e3);
    local_10 = 0;
  }
  return local_10;
}



/* ================================================================
 * Function: FUN_1000c346
 * Address:  1000c346
 * ================================================================ */

uint FUN_1000c346(short param_1,short param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  ushort extraout_var;
  ushort extraout_var_00;
  uint local_24;
  undefined4 *local_20;
  uint local_1c;
  uint local_18;
  undefined4 *local_14;
  uint local_10;
  undefined4 *local_c;
  uint local_8;
  
  local_14 = param_3;
  local_10 = CONCAT22(local_10._2_2_,1);
  local_c = param_3;
  local_20 = param_3;
  local_8 = local_8 & 0xffff0000;
  local_1c = local_1c & 0xffff0000;
  uVar1 = pl_cam_check(param_1);
  puVar2 = (undefined4 *)(uVar1 & 0xffff);
  if (puVar2 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    switch(param_2) {
    case 0:
      uVar1 = pi_get_param(param_1,0xb02021c,8,&local_18);
      local_10._0_2_ = (short)uVar1;
      if (((uVar1 & 0xffff) == 0) || ((local_18 & 0xffff) == 0)) {
        local_8 = local_8 & 0xffff0000;
      }
      else {
        uVar1 = pi_get_param(param_1,0xb02021c,0,&local_8);
        if ((uVar1 & 0xffff) == 0) {
          local_8 = local_8 & 0xffff0000;
        }
      }
      uVar1 = pi_get_param(param_1,0x6020061,8,&local_24);
      local_10 = CONCAT22(local_10._2_2_,(short)uVar1);
      if (((uVar1 & 0xffff) == 0) || ((local_24 & 0xffff) == 0)) {
        local_1c = local_1c & 0xffff0000;
      }
      else {
        uVar1 = pi_get_param(param_1,0x6020061,0,&local_1c);
        local_10 = CONCAT22(local_10._2_2_,(short)uVar1);
      }
      if ((undefined4 *)(local_10 & 0xffff) == (undefined4 *)0x0) {
        pv_set_error_code(0x7e1);
        local_c = (undefined4 *)((uint)extraout_var << 0x10);
      }
      else if (((local_1c & 0xffff) == 0) || ((local_8 & 0xffff) == 0)) {
        if ((local_8 & 0xffff) == 0) {
          *local_c = 2;
        }
        else {
          *local_c = 3;
          local_c = (undefined4 *)(local_10 & 0xffff);
        }
      }
      else {
        *local_c = 4;
      }
      break;
    case 1:
      *local_c = 6;
      local_c = puVar2;
      break;
    case 2:
      *(undefined2 *)local_20 = 9;
      local_c = local_20;
      break;
    case 3:
      *local_c = 0;
      local_c = puVar2;
      break;
    case 4:
      *local_c = 5;
      local_c = puVar2;
      break;
    case 5:
      *local_c = 2;
      break;
    case 6:
      *local_c = 1;
      local_c = puVar2;
      break;
    case 7:
      *(undefined2 *)local_20 = 1;
      local_c = puVar2;
      break;
    case 8:
      *(undefined2 *)local_14 = 1;
      local_c = puVar2;
      break;
    default:
      pv_set_error_code(0x7e3);
      local_10 = 0;
      local_c = (undefined4 *)((uint)extraout_var_00 << 0x10);
    }
    uVar1 = CONCAT22((short)((uint)local_c >> 0x10),(undefined2)local_10);
  }
  return uVar1;
}



/* ================================================================
 * Function: FUN_1000c54a
 * Address:  1000c54a
 * ================================================================ */

undefined2 FUN_1000c54a(short param_1,undefined2 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined2 local_14 [2];
  undefined2 local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  local_10 = 1;
  local_8 = param_3;
  local_c = param_3;
  if (*(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c) == 0) {
    local_10 = 0;
  }
  else {
    iVar1 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
    switch(param_2) {
    case 0:
    case 3:
    case 4:
    case 5:
      (**(code **)(iVar1 + 0x34))(iVar1,0xbf,local_14);
      *(undefined2 *)local_8 = local_14[0];
      break;
    case 1:
      *param_3 = 1;
      break;
    case 2:
      *(undefined2 *)param_3 = 6;
      break;
    case 6:
      *(undefined2 *)param_3 = 0;
      break;
    case 7:
      *(undefined2 *)param_3 = 1;
      break;
    case 8:
      *(undefined2 *)param_3 = 1;
      break;
    default:
      pv_set_error_code(0x7e3);
      local_10 = 0;
    }
  }
  return local_10;
}



/* ================================================================
 * Function: FUN_1000c656
 * Address:  1000c656
 * ================================================================ */

undefined2 FUN_1000c656(short param_1,undefined2 param_2,int *param_3)

{
  short sVar1;
  uint uVar2;
  short local_1c [2];
  int *local_18;
  int *local_14;
  undefined2 local_10;
  int *local_c;
  int *local_8;
  
  local_14 = param_3;
  local_10 = 1;
  local_8 = param_3;
  local_c = param_3;
  local_18 = param_3;
  if (*(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c) == 0) {
    local_10 = 0;
  }
  else {
    switch(param_2) {
    case 0:
    case 5:
      uVar2 = pi_spdtab_get_port(param_1,local_1c);
      local_10 = (undefined2)uVar2;
      *local_c = (int)local_1c[0];
      break;
    case 1:
      local_10 = pi_spdtab_get_port_total(param_1,local_1c);
      *local_c = (int)local_1c[0];
      break;
    case 2:
      *(undefined2 *)param_3 = 9;
      break;
    case 3:
      *param_3 = 0;
      break;
    case 4:
      local_10 = pi_spdtab_get_port_total(param_1,local_1c);
      *local_c = (int)local_1c[0];
      break;
    case 6:
      *(undefined2 *)param_3 = 1;
      break;
    case 7:
      sVar1 = pi_spdtab_get_port_total(param_1,local_1c);
      if ((sVar1 == 0) || (local_1c[0] < 2)) {
        *(undefined2 *)local_18 = 1;
      }
      else {
        *(undefined2 *)local_18 = 2;
      }
      break;
    case 8:
      *(undefined2 *)param_3 = 1;
      break;
    default:
      pv_set_error_code(0x7e3);
      local_10 = 0;
    }
  }
  return local_10;
}



/* ================================================================
 * Function: FUN_1000c7c6
 * Address:  1000c7c6
 * ================================================================ */

undefined2 FUN_1000c7c6(short param_1,short param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  uint local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  uint local_c;
  undefined4 *local_8;
  
  local_10 = param_3;
  local_c = CONCAT22(local_c._2_2_,1);
  local_8 = param_3;
  local_14 = param_3;
  bVar1 = pl_ccd_get_frame_capable(param_1,(undefined2 *)&local_18);
  if ((CONCAT31(extraout_var,bVar1) & 0xffff) == 0) {
    local_18 = local_18 & 0xffff0000;
    local_c = local_c & 0xffff0000;
  }
  if (param_2 == 8) {
    local_c._0_2_ = 1;
    *(undefined2 *)local_10 = (undefined2)local_18;
  }
  else if (((local_c & 0xffff) == 1) && ((local_18 & 0xffff) == 1)) {
    switch(param_2) {
    case 0:
      *(undefined2 *)local_10 = (undefined2)local_18;
      break;
    case 1:
      *local_8 = 1;
      break;
    case 2:
      *(undefined2 *)local_14 = 0xb;
      break;
    case 3:
    case 5:
      *(undefined2 *)local_10 = 0;
      break;
    case 4:
      *(undefined2 *)local_10 = 1;
      break;
    case 6:
      *(undefined2 *)local_10 = 0;
      break;
    case 7:
      *(undefined2 *)local_14 = 3;
      break;
    default:
      pv_set_error_code(0x7e3);
      local_c = 0;
    }
  }
  else {
    pv_set_error_code(0x7e3);
    local_c._0_2_ = 0;
  }
  return (undefined2)local_c;
}



/* ================================================================
 * Function: FUN_1000c8ec
 * Address:  1000c8ec
 * ================================================================ */

undefined2 FUN_1000c8ec(short param_1,undefined2 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined2 local_44;
  undefined4 local_40;
  undefined2 local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_8;
  
  local_44 = 1;
  local_8 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
  iVar1 = (**(code **)(local_8 + 0x54))(local_8,0xd6,&local_40);
  if (iVar1 == 0) {
    local_44 = 0;
  }
  else {
    switch(param_2) {
    case 0:
      if ((local_20 == 0) && (local_1c == 0x3ff00000)) {
        local_4c = 1;
      }
      else {
        local_4c = 0;
      }
      *param_3 = local_4c;
      break;
    case 1:
      *param_3 = local_40;
      break;
    case 2:
      *(undefined2 *)param_3 = local_3c;
      break;
    case 3:
      if ((local_38 == 0) && (local_34 == 0x3ff00000)) {
        local_50 = 1;
      }
      else {
        local_50 = 0;
      }
      *param_3 = local_50;
      break;
    case 4:
      if ((local_30 == 0) && (local_2c == 0x3ff00000)) {
        local_54 = 1;
      }
      else {
        local_54 = 0;
      }
      *param_3 = local_54;
      break;
    case 5:
      if ((local_28 == 0) && (local_24 == 0x3ff00000)) {
        local_58 = 1;
      }
      else {
        local_58 = 0;
      }
      *param_3 = local_58;
      break;
    case 6:
      uVar2 = ftol();
      *param_3 = uVar2;
      break;
    case 7:
      *(undefined2 *)param_3 = 1;
      break;
    case 8:
      *(undefined2 *)param_3 = 1;
      break;
    default:
      pv_set_error_code(0x7e3);
      local_44 = 0;
    }
  }
  return local_44;
}



/* ================================================================
 * Function: pl_get_param
 * Address:  1000ca70
 * ================================================================ */

ushort pl_get_param(short param_1,uint param_2,short param_3,uint *param_4)

{
  ushort uVar1;
  uint uVar2;
  
                    /* 0xca70  115  pl_get_param */
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    uVar1 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    uVar1 = pm_get_param(param_1,param_2,param_3,param_4);
  }
  else {
    uVar2 = pi_get_param(param_1,param_2,param_3,param_4);
    uVar1 = (ushort)uVar2;
  }
  return uVar1;
}



/* ================================================================
 * Function: pm_get_dd_info_length
 * Address:  1000caf0
 * ================================================================ */

/* __stdcall pm_get_dd_info_length,12 */

undefined2 pm_get_dd_info_length(short param_1,undefined2 param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined2 local_1c [2];
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined2 local_c;
  undefined4 *local_8;
  
                    /* 0xcaf0  355  _pm_get_dd_info_length@12 */
  local_14 = param_3;
  local_c = 1;
  local_10 = param_3;
  local_8 = param_3;
  local_18 = param_3;
  switch(param_2) {
  case 0:
  case 3:
  case 4:
  case 5:
    uVar1 = pl_dd_get_info_length(param_1,local_1c);
    if ((uVar1 & 0xffff) == 0) {
      local_c = 0;
    }
    else {
      *(undefined2 *)local_10 = local_1c[0];
    }
    break;
  case 1:
    *param_3 = 1;
    break;
  case 2:
    *(undefined2 *)param_3 = 1;
    break;
  case 6:
    *(undefined2 *)param_3 = 0;
    break;
  case 7:
    *(undefined2 *)param_3 = 1;
    break;
  case 8:
    *(undefined2 *)param_3 = 1;
    break;
  default:
    pv_set_error_code(0x7e3);
    local_c = 0;
  }
  return local_c;
}



/* ================================================================
 * Function: pm_get_dd_version
 * Address:  1000cbc7
 * ================================================================ */

/* __stdcall pm_get_dd_version,12 */

undefined2 pm_get_dd_version(short param_1,undefined2 param_2,ushort *param_3)

{
  uint uVar1;
  ushort local_1c [2];
  ushort *local_18;
  ushort *local_14;
  undefined2 local_10;
  ushort *local_c;
  ushort *local_8;
  
                    /* 0xcbc7  358  _pm_get_dd_version@12 */
  local_14 = param_3;
  local_10 = 1;
  local_1c[0] = 0;
  local_8 = param_3;
  local_c = param_3;
  local_18 = param_3;
  switch(param_2) {
  case 0:
  case 3:
  case 4:
  case 5:
    uVar1 = pl_dd_get_ver(param_1,local_1c);
    if ((uVar1 & 0xffff) == 0) {
      local_10 = 0;
    }
    else {
      *local_8 = local_1c[0];
    }
    break;
  case 1:
    param_3[0] = 1;
    param_3[1] = 0;
    break;
  case 2:
    *param_3 = 6;
    break;
  case 6:
    *param_3 = 0;
    break;
  case 7:
    *param_3 = 1;
    break;
  case 8:
    *param_3 = 1;
    break;
  default:
    pv_set_error_code(0x7e3);
    local_10 = 0;
  }
  return local_10;
}



/* ================================================================
 * Function: pm_get_dd_retries
 * Address:  1000cca4
 * ================================================================ */

/* __stdcall pm_get_dd_retries,12 */

undefined2 pm_get_dd_retries(short param_1,undefined2 param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined2 local_1c [2];
  undefined4 *local_18;
  undefined4 *local_14;
  undefined2 local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
                    /* 0xcca4  356  _pm_get_dd_retries@12 */
  local_14 = param_3;
  local_10 = 1;
  local_8 = param_3;
  local_c = param_3;
  local_18 = param_3;
  switch(param_2) {
  case 0:
    uVar1 = pl_dd_get_retries(param_1,local_1c);
    if ((uVar1 & 0xffff) == 0) {
      local_10 = 0;
    }
    else {
      *(undefined2 *)local_8 = local_1c[0];
    }
    break;
  case 1:
    *param_3 = 0;
    break;
  case 2:
    *(undefined2 *)param_3 = 6;
    break;
  case 3:
    *(undefined2 *)param_3 = 0;
    break;
  case 4:
    *(undefined2 *)param_3 = 0xffff;
    break;
  case 5:
    *(undefined2 *)param_3 = 0;
    break;
  case 6:
    *(undefined2 *)param_3 = 1;
    break;
  case 7:
    *(undefined2 *)param_3 = 2;
    break;
  case 8:
    *(undefined2 *)param_3 = 1;
    break;
  default:
    pv_set_error_code(0x7e3);
    local_10 = 0;
  }
  return local_10;
}



/* ================================================================
 * Function: pm_get_dd_timeout
 * Address:  1000cd9d
 * ================================================================ */

/* __stdcall pm_get_dd_timeout,12 */

undefined2 pm_get_dd_timeout(short param_1,undefined2 param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined2 local_1c [2];
  undefined4 *local_18;
  undefined4 *local_14;
  undefined2 local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
                    /* 0xcd9d  357  _pm_get_dd_timeout@12 */
  local_14 = param_3;
  local_10 = 1;
  local_8 = param_3;
  local_c = param_3;
  local_18 = param_3;
  switch(param_2) {
  case 0:
    uVar1 = pl_dd_get_timeout(param_1,local_1c);
    if ((uVar1 & 0xffff) == 0) {
      local_10 = 0;
    }
    else {
      *(undefined2 *)local_8 = local_1c[0];
    }
    break;
  case 1:
    *param_3 = 0;
    break;
  case 2:
    *(undefined2 *)param_3 = 6;
    break;
  case 3:
    *(undefined2 *)param_3 = 0;
    break;
  case 4:
    *(undefined2 *)param_3 = 0xffff;
    break;
  case 5:
    *(undefined2 *)param_3 = 0;
    break;
  case 6:
    *(undefined2 *)param_3 = 1;
    break;
  case 7:
    *(undefined2 *)param_3 = 2;
    break;
  case 8:
    *(undefined2 *)param_3 = 1;
    break;
  default:
    pv_set_error_code(0x7e3);
    local_10 = 0;
  }
  return local_10;
}



/* ================================================================
 * Function: pm_get_dd_info
 * Address:  1000ce96
 * ================================================================ */

/* __stdcall pm_get_dd_info,12 */

undefined2 pm_get_dd_info(short param_1,undefined2 param_2,int *param_3)

{
  uint uVar1;
  short local_1c [2];
  int *local_18;
  char local_14 [4];
  int *local_10;
  undefined2 local_c;
  int *local_8;
  
                    /* 0xce96  354  _pm_get_dd_info@12 */
  local_10 = param_3;
  local_c = 1;
  local_8 = param_3;
  local_18 = param_3;
  local_14[0] = '\0';
  switch(param_2) {
  case 0:
  case 3:
  case 4:
  case 5:
    uVar1 = pl_dd_get_info_length(param_1,local_1c);
    if ((uVar1 & 0xffff) == 0) {
      local_c = 0;
    }
    else {
      uVar1 = pl_dd_get_info(param_1,local_1c[0],(char *)param_3);
      if ((uVar1 & 0xffff) == 0) {
        local_c = 0;
      }
    }
    break;
  case 1:
    uVar1 = pl_dd_get_info_length(param_1,local_1c);
    if ((uVar1 & 0xffff) == 0) {
      local_c = 0;
    }
    else {
      *local_8 = local_1c[0] + 1;
    }
    break;
  case 2:
    *(undefined2 *)param_3 = 0xd;
    break;
  case 6:
    strncpy((char *)param_3,local_14,1);
    break;
  case 7:
    *(undefined2 *)param_3 = 1;
    break;
  case 8:
    *(undefined2 *)param_3 = 1;
    break;
  default:
    pv_set_error_code(0x7e3);
    local_c = 0;
  }
  return local_c;
}



/* ================================================================
 * Function: pm_get_adc_offset
 * Address:  1000cfb4
 * ================================================================ */

/* __stdcall pm_get_adc_offset,12 */

undefined2 pm_get_adc_offset(short param_1,undefined2 param_2,ushort *param_3)

{
  uint uVar1;
  ushort local_1c [2];
  ushort *local_18;
  ushort *local_14;
  ushort *local_10;
  undefined2 local_c;
  ushort *local_8;
  
                    /* 0xcfb4  345  _pm_get_adc_offset@12 */
  local_14 = param_3;
  local_c = 1;
  local_10 = param_3;
  local_8 = param_3;
  local_18 = param_3;
  switch(param_2) {
  case 0:
    uVar1 = pl_ccd_get_adc_offset(param_1,local_1c);
    if ((uVar1 & 0xffff) == 0) {
      local_c = 0;
    }
    else {
      *local_10 = local_1c[0];
    }
    break;
  case 1:
    param_3[0] = 0;
    param_3[1] = 0;
    break;
  case 2:
    *param_3 = 1;
    break;
  case 3:
    *param_3 = 0x8000;
    break;
  case 4:
    *param_3 = 0x7fff;
    break;
  case 5:
    *param_3 = 0;
    break;
  case 6:
    *param_3 = 1;
    break;
  case 7:
    *param_3 = 2;
    break;
  case 8:
    uVar1 = pv_cam_get_reads(param_1);
    if ((uVar1 & 0xffff) == 0) {
      local_c = 0;
    }
    else if (*(short *)(DAT_10043338 + 0x44 + param_1 * 0x110) == 0) {
      *local_14 = 0;
    }
    else {
      *local_14 = 1;
    }
    break;
  default:
    pv_set_error_code(0x7e3);
    local_c = 0;
  }
  return local_c;
}



/* ================================================================
 * Function: pm_get_clear_cycles
 * Address:  1000d0f9
 * ================================================================ */

/* __stdcall pm_get_clear_cycles,12 */

undefined2 pm_get_clear_cycles(short param_1,undefined2 param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined2 local_1c [2];
  undefined4 *local_18;
  undefined4 *local_14;
  undefined2 local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
                    /* 0xd0f9  351  _pm_get_clear_cycles@12 */
  local_14 = param_3;
  local_10 = 1;
  local_8 = param_3;
  local_c = param_3;
  local_18 = param_3;
  switch(param_2) {
  case 0:
    uVar1 = pl_ccd_get_clear_cycles(param_1,local_1c);
    if ((uVar1 & 0xffff) == 0) {
      pv_set_error_code(0x7e1);
      local_10 = 0;
    }
    else {
      *(undefined2 *)local_8 = local_1c[0];
    }
    break;
  case 1:
    *param_3 = 0;
    break;
  case 2:
    *(undefined2 *)param_3 = 6;
    break;
  case 3:
    *(undefined2 *)param_3 = 0;
    break;
  case 4:
    *(undefined2 *)param_3 = 0xffff;
    break;
  case 5:
    *(undefined2 *)param_3 = 2;
    break;
  case 6:
    *(undefined2 *)param_3 = 1;
    break;
  case 7:
    *(undefined2 *)param_3 = 2;
    break;
  case 8:
    *(undefined2 *)param_3 = 1;
    break;
  default:
    pv_set_error_code(0x7e3);
    local_10 = 0;
  }
  return local_10;
}



/* ================================================================
 * Function: pm_get_cooling_mode
 * Address:  1000d1fc
 * ================================================================ */

/* __stdcall pm_get_cooling_mode,12 */

undefined2 pm_get_cooling_mode(short param_1,undefined2 param_2,int *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  short local_18 [2];
  int *local_14;
  int *local_10;
  undefined2 local_c;
  int *local_8;
  
                    /* 0xd1fc  353  _pm_get_cooling_mode@12 */
  local_10 = param_3;
  local_c = 1;
  local_8 = param_3;
  local_14 = param_3;
  switch(param_2) {
  case 0:
    bVar1 = pl_ccd_get_cooling_mode(param_1,local_18);
    if ((CONCAT31(extraout_var,bVar1) & 0xffff) == 0) {
      local_c = 0;
    }
    else {
      *local_8 = (int)local_18[0];
    }
    break;
  case 1:
    *param_3 = 2;
    break;
  case 2:
    *(undefined2 *)param_3 = 9;
    break;
  case 3:
  case 5:
    *param_3 = 0;
    break;
  case 4:
    *param_3 = 1;
    break;
  case 6:
    *param_3 = 0;
    break;
  case 7:
    *(undefined2 *)param_3 = 1;
    break;
  case 8:
    *(undefined2 *)param_3 = 1;
    break;
  default:
    pv_set_error_code(0x7e3);
    local_c = 0;
  }
  return local_c;
}



/* ================================================================
 * Function: pm_get_frame_capable
 * Address:  1000d2e3
 * ================================================================ */

/* __stdcall pm_get_frame_capable,12 */

undefined2 pm_get_frame_capable(short param_1,short param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  uint local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  uint local_c;
  undefined4 *local_8;
  
                    /* 0xd2e3  364  _pm_get_frame_capable@12 */
  local_10 = param_3;
  local_c = CONCAT22(local_c._2_2_,1);
  local_8 = param_3;
  local_14 = param_3;
  bVar1 = pl_ccd_get_frame_capable(param_1,(undefined2 *)&local_18);
  if ((CONCAT31(extraout_var,bVar1) & 0xffff) == 0) {
    local_18 = local_18 & 0xffff0000;
    local_c = local_c & 0xffff0000;
  }
  if (param_2 == 8) {
    local_c._0_2_ = 1;
    *(undefined2 *)local_10 = (undefined2)local_18;
  }
  else if (((local_c & 0xffff) == 1) && ((local_18 & 0xffff) == 1)) {
    switch(param_2) {
    case 0:
      *(undefined2 *)local_10 = (undefined2)local_18;
      break;
    case 1:
      *local_8 = 1;
      break;
    case 2:
      *(undefined2 *)local_14 = 0xb;
      break;
    case 3:
    case 5:
      *(undefined2 *)local_10 = 0;
      break;
    case 4:
      *(undefined2 *)local_10 = 1;
      break;
    case 6:
      *(undefined2 *)local_10 = 0;
      break;
    case 7:
      *(undefined2 *)local_14 = 3;
      break;
    default:
      pv_set_error_code(0x7e3);
      local_c = 0;
    }
  }
  else {
    pv_set_error_code(0x7e3);
    local_c._0_2_ = 0;
  }
  return (undefined2)local_c;
}



/* ================================================================
 * Function: pm_get_fwell_capacity
 * Address:  1000d409
 * ================================================================ */

/* __stdcall pm_get_fwell_capacity,12 */

undefined2 pm_get_fwell_capacity(short param_1,undefined2 param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 local_14;
  undefined2 local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
                    /* 0xd409  365  _pm_get_fwell_capacity@12 */
  local_10 = 1;
  local_8 = param_3;
  local_c = param_3;
  switch(param_2) {
  case 0:
  case 3:
  case 4:
  case 5:
    bVar1 = pl_ccd_get_fwell_capacity(param_1,&local_14);
    if ((CONCAT31(extraout_var,bVar1) & 0xffff) == 0) {
      local_10 = 0;
    }
    else {
      *local_8 = local_14;
    }
    break;
  case 1:
    *param_3 = 1;
    break;
  case 2:
    *(undefined2 *)param_3 = 7;
    break;
  case 6:
    *param_3 = 0;
    break;
  case 7:
    *(undefined2 *)param_3 = 1;
    break;
  case 8:
    *(undefined2 *)param_3 = 1;
    break;
  default:
    pv_set_error_code(0x7e3);
    local_10 = 0;
  }
  return local_10;
}



/* ================================================================
 * Function: pm_get_mpp_capable
 * Address:  1000d4df
 * ================================================================ */

/* __stdcall pm_get_mpp_capable,12 */

undefined4 pm_get_mpp_capable(short param_1,short param_2,int *param_3)

{
  short sVar1;
  bool bVar2;
  undefined3 extraout_var;
  uint uVar3;
  undefined2 uVar5;
  int *piVar4;
  ushort extraout_var_00;
  undefined2 extraout_var_01;
  short local_18 [2];
  int *local_14;
  int *local_10;
  uint local_c;
  int *local_8;
  
                    /* 0xd4df  374  _pm_get_mpp_capable@12 */
  local_10 = param_3;
  local_c = CONCAT22(local_c._2_2_,1);
  local_8 = param_3;
  local_14 = param_3;
  bVar2 = pl_ccd_get_mpp_capable(param_1,local_18);
  uVar3 = CONCAT31(extraout_var,bVar2) & 0xffff;
  if (uVar3 == 0) {
    sVar1 = 0;
    local_c = local_c & 0xffff0000;
  }
  else if ((local_18[0] == 2) || (uVar3 = (uint)local_18[0], uVar3 == 3)) {
    sVar1 = 1;
  }
  else {
    sVar1 = 0;
  }
  if (param_2 == 8) {
    local_c._0_2_ = 1;
    uVar5 = (undefined2)(uVar3 >> 0x10);
    *(short *)local_10 = sVar1;
  }
  else if (((local_c & 0xffff) == 1) && (sVar1 == 1)) {
    piVar4 = (int *)(int)param_2;
    switch(piVar4) {
    case (int *)0x0:
      *local_8 = (int)local_18[0];
      piVar4 = local_8;
      break;
    case (int *)0x1:
      *local_8 = 4;
      break;
    case (int *)0x2:
      *(undefined2 *)local_14 = 9;
      break;
    case (int *)0x3:
    case (int *)0x5:
      *local_8 = 0;
      break;
    case (int *)0x4:
      *local_8 = 3;
      break;
    case (int *)0x6:
      *local_8 = 0;
      piVar4 = local_8;
      break;
    case (int *)0x7:
      *(undefined2 *)local_14 = 1;
      piVar4 = local_14;
      break;
    default:
      pv_set_error_code(0x7e3);
      local_c = 0;
      piVar4 = (int *)((uint)extraout_var_00 << 0x10);
    }
    uVar5 = (undefined2)((uint)piVar4 >> 0x10);
  }
  else {
    pv_set_error_code(0x7e3);
    *(short *)local_10 = 0;
    local_c._0_2_ = 0;
    uVar5 = extraout_var_01;
  }
  return CONCAT22(uVar5,(undefined2)local_c);
}



/* ================================================================
 * Function: pm_get_accum_capable
 * Address:  1000d636
 * ================================================================ */

/* __stdcall pm_get_accum_capable,12 */

undefined2 pm_get_accum_capable(short param_1,short param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  uint local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  uint local_c;
  undefined4 *local_8;
  
                    /* 0xd636  342  _pm_get_accum_capable@12 */
  local_10 = param_3;
  local_c = CONCAT22(local_c._2_2_,1);
  local_8 = param_3;
  local_14 = param_3;
  bVar1 = pv_ccd_get_accum_capable(param_1,(undefined2 *)&local_18);
  if ((CONCAT31(extraout_var,bVar1) & 0xffff) == 0) {
    local_18 = local_18 & 0xffff0000;
    local_c = local_c & 0xffff0000;
  }
  if (param_2 == 8) {
    local_c._0_2_ = 1;
    *(undefined2 *)local_10 = (undefined2)local_18;
  }
  else if (((local_c & 0xffff) == 1) && ((local_18 & 0xffff) == 1)) {
    switch(param_2) {
    case 0:
      *(undefined2 *)local_10 = (undefined2)local_18;
      break;
    case 1:
      *local_8 = 1;
      break;
    case 2:
      *(undefined2 *)local_14 = 0xb;
      break;
    case 3:
    case 5:
      *(undefined2 *)local_10 = 0;
      break;
    case 4:
      *(undefined2 *)local_10 = 1;
      break;
    case 6:
      *(undefined2 *)local_10 = 0;
      break;
    case 7:
      *(undefined2 *)local_14 = 1;
      break;
    case 8:
      *(undefined2 *)local_10 = (undefined2)local_18;
      break;
    default:
      pv_set_error_code(0x7e3);
      local_c = 0;
    }
  }
  else {
    pv_set_error_code(0x7e3);
    local_c._0_2_ = 0;
  }
  return (undefined2)local_c;
}



/* ================================================================
 * Function: pm_get_preamp_delay
 * Address:  1000d770
 * ================================================================ */

/* __stdcall pm_get_preamp_delay,12 */

undefined2 pm_get_preamp_delay(short param_1,undefined2 param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined2 local_1c [2];
  undefined4 *local_18;
  undefined4 *local_14;
  undefined2 local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
                    /* 0xd770  385  _pm_get_preamp_delay@12 */
  local_14 = param_3;
  local_10 = 1;
  local_8 = param_3;
  local_c = param_3;
  local_18 = param_3;
  switch(param_2) {
  case 0:
  case 3:
  case 4:
  case 5:
    bVar1 = pl_ccd_get_preamp_dly(param_1,local_1c);
    if ((CONCAT31(extraout_var,bVar1) & 0xffff) == 0) {
      local_10 = 0;
    }
    else {
      *(undefined2 *)local_8 = local_1c[0];
    }
    break;
  case 1:
    *param_3 = 1;
    break;
  case 2:
    *(undefined2 *)param_3 = 6;
    break;
  case 6:
    *(undefined2 *)param_3 = 0;
    break;
  case 7:
    *(undefined2 *)param_3 = 1;
    break;
  case 8:
    *(undefined2 *)param_3 = 1;
    break;
  default:
    pv_set_error_code(0x7e3);
    local_10 = 0;
  }
  return local_10;
}



/* ================================================================
 * Function: pm_get_preflash
 * Address:  1000d847
 * ================================================================ */

/* __stdcall pm_get_preflash,12 */

undefined2 pm_get_preflash(short param_1,undefined2 param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined2 local_1c [2];
  undefined4 *local_18;
  undefined4 *local_14;
  undefined2 local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
                    /* 0xd847  387  _pm_get_preflash@12 */
  local_14 = param_3;
  local_10 = 1;
  local_8 = param_3;
  local_c = param_3;
  local_18 = param_3;
  switch(param_2) {
  case 0:
  case 3:
  case 4:
  case 5:
    bVar1 = pl_ccd_get_preflash(param_1,local_1c);
    if ((CONCAT31(extraout_var,bVar1) & 0xffff) == 0) {
      local_10 = 0;
    }
    else {
      *(undefined2 *)local_8 = local_1c[0];
    }
    break;
  case 1:
    *param_3 = 1;
    break;
  case 2:
    *(undefined2 *)param_3 = 6;
    break;
  case 6:
    *(undefined2 *)param_3 = 0;
    break;
  case 7:
    *(undefined2 *)param_3 = 1;
    break;
  case 8:
    *(undefined2 *)param_3 = 1;
    break;
  default:
    pv_set_error_code(0x7e3);
    local_10 = 0;
  }
  return local_10;
}



/* ================================================================
 * Function: pm_get_premask
 * Address:  1000d91e
 * ================================================================ */

/* __stdcall pm_get_premask,12 */

undefined2 pm_get_premask(short param_1,undefined2 param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined2 local_1c [2];
  undefined4 *local_18;
  undefined4 *local_14;
  undefined2 local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
                    /* 0xd91e  388  _pm_get_premask@12 */
  local_14 = param_3;
  local_10 = 1;
  local_1c[0] = 0;
  local_8 = param_3;
  local_c = param_3;
  local_18 = param_3;
  switch(param_2) {
  case 0:
  case 3:
  case 4:
  case 5:
    bVar1 = pl_ccd_get_premask(param_1,local_1c);
    if ((CONCAT31(extraout_var,bVar1) & 0xffff) == 0) {
      local_10 = 0;
    }
    else {
      *(undefined2 *)local_8 = local_1c[0];
    }
    break;
  case 1:
    *param_3 = 1;
    break;
  case 2:
    *(undefined2 *)param_3 = 6;
    break;
  case 6:
    *(undefined2 *)param_3 = 0;
    break;
  case 7:
    *(undefined2 *)param_3 = 2;
    break;
  case 8:
    *(undefined2 *)param_3 = 1;
    break;
  default:
    pv_set_error_code(0x7e3);
    local_10 = 0;
  }
  return local_10;
}



/* ================================================================
 * Function: pm_get_prescan
 * Address:  1000d9fb
 * ================================================================ */

/* __stdcall pm_get_prescan,12 */

undefined2 pm_get_prescan(short param_1,undefined2 param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined2 local_1c [2];
  undefined4 *local_18;
  undefined4 *local_14;
  undefined2 local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
                    /* 0xd9fb  389  _pm_get_prescan@12 */
  local_14 = param_3;
  local_10 = 1;
  local_8 = param_3;
  local_c = param_3;
  local_18 = param_3;
  switch(param_2) {
  case 0:
  case 3:
  case 4:
  case 5:
    bVar1 = pl_ccd_get_prescan(param_1,local_1c);
    if ((CONCAT31(extraout_var,bVar1) & 0xffff) == 0) {
      local_10 = 0;
    }
    else {
      *(undefined2 *)local_8 = local_1c[0];
    }
    break;
  case 1:
    *param_3 = 1;
    break;
  case 2:
    *(undefined2 *)param_3 = 6;
    break;
  case 6:
    *(undefined2 *)param_3 = 0;
    break;
  case 7:
    *(undefined2 *)param_3 = 2;
    break;
  case 8:
    *(undefined2 *)param_3 = 1;
    break;
  default:
    pv_set_error_code(0x7e3);
    local_10 = 0;
  }
  return local_10;
}



/* ================================================================
 * Function: pm_get_postmask
 * Address:  1000dad2
 * ================================================================ */

/* __stdcall pm_get_postmask,12 */

undefined2 pm_get_postmask(short param_1,undefined2 param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined2 local_1c [2];
  undefined4 *local_18;
  undefined4 *local_14;
  undefined2 local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
                    /* 0xdad2  383  _pm_get_postmask@12 */
  local_14 = param_3;
  local_10 = 1;
  local_8 = param_3;
  local_c = param_3;
  local_18 = param_3;
  switch(param_2) {
  case 0:
  case 3:
  case 4:
  case 5:
    bVar1 = pl_ccd_get_postmask(param_1,local_1c);
    if ((CONCAT31(extraout_var,bVar1) & 0xffff) == 0) {
      local_10 = 0;
    }
    else {
      *(undefined2 *)local_8 = local_1c[0];
    }
    break;
  case 1:
    *param_3 = 1;
    break;
  case 2:
    *(undefined2 *)param_3 = 6;
    break;
  case 6:
    *(undefined2 *)param_3 = 0;
    break;
  case 7:
    *(undefined2 *)param_3 = 2;
    break;
  case 8:
    *(undefined2 *)param_3 = 1;
    break;
  default:
    pv_set_error_code(0x7e3);
    local_10 = 0;
  }
  return local_10;
}



/* ================================================================
 * Function: pm_get_postscan
 * Address:  1000dba9
 * ================================================================ */

/* __stdcall pm_get_postscan,12 */

undefined2 pm_get_postscan(short param_1,undefined2 param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined2 local_1c [2];
  undefined4 *local_18;
  undefined4 *local_14;
  undefined2 local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
                    /* 0xdba9  384  _pm_get_postscan@12 */
  local_14 = param_3;
  local_10 = 1;
  local_8 = param_3;
  local_c = param_3;
  local_18 = param_3;
  switch(param_2) {
  case 0:
  case 3:
  case 4:
  case 5:
    bVar1 = pl_ccd_get_postscan(param_1,local_1c);
    if ((CONCAT31(extraout_var,bVar1) & 0xffff) == 0) {
      local_10 = 0;
    }
    else {
      *(undefined2 *)local_8 = local_1c[0];
    }
    break;
  case 1:
    *param_3 = 1;
    break;
  case 2:
    *(undefined2 *)param_3 = 6;
    break;
  case 6:
    *(undefined2 *)param_3 = 0;
    break;
  case 7:
    *(undefined2 *)param_3 = 2;
    break;
  case 8:
    *(undefined2 *)param_3 = 1;
    break;
  default:
    pv_set_error_code(0x7e3);
    local_10 = 0;
  }
  return local_10;
}



/* ================================================================
 * Function: pm_get_par_size
 * Address:  1000dc80
 * ================================================================ */

/* __stdcall pm_get_par_size,12 */

undefined2 pm_get_par_size(short param_1,undefined2 param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined2 local_1c [2];
  undefined4 *local_18;
  undefined4 *local_14;
  undefined2 local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
                    /* 0xdc80  376  _pm_get_par_size@12 */
  local_14 = param_3;
  local_10 = 1;
  local_8 = param_3;
  local_c = param_3;
  local_18 = param_3;
  switch(param_2) {
  case 0:
  case 3:
  case 4:
  case 5:
    bVar1 = pl_ccd_get_par_size(param_1,local_1c);
    if ((CONCAT31(extraout_var,bVar1) & 0xffff) == 0) {
      local_10 = 0;
    }
    else {
      *(undefined2 *)local_8 = local_1c[0];
    }
    break;
  case 1:
    *param_3 = 1;
    break;
  case 2:
    *(undefined2 *)param_3 = 6;
    break;
  case 6:
    *(undefined2 *)param_3 = 0;
    break;
  case 7:
    *(undefined2 *)param_3 = 2;
    break;
  case 8:
    *(undefined2 *)param_3 = 1;
    break;
  default:
    pv_set_error_code(0x7e3);
    local_10 = 0;
  }
  return local_10;
}



/* ================================================================
 * Function: pm_get_serial_num
 * Address:  1000dd57
 * ================================================================ */

/* __stdcall pm_get_serial_num,12 */

undefined2 pm_get_serial_num(short param_1,short param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined2 local_20 [2];
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  uint local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
                    /* 0xdd57  392  _pm_get_serial_num@12 */
  local_14 = param_3;
  local_10 = CONCAT22(local_10._2_2_,1);
  local_20[0] = 0;
  local_8 = param_3;
  local_c = param_3;
  local_18 = param_3;
  bVar1 = pl_ccd_get_serial_num(param_1,local_20);
  if ((CONCAT31(extraout_var,bVar1) & 0xffff) == 0) {
    local_1c = (uint)local_1c._2_2_ << 0x10;
    local_10 = local_10 & 0xffff0000;
  }
  else {
    local_1c = CONCAT22(local_1c._2_2_,1);
  }
  if (param_2 == 8) {
    local_10._0_2_ = 1;
    *(undefined2 *)local_14 = (undefined2)local_1c;
  }
  else if (((local_10 & 0xffff) == 1) && ((local_1c & 0xffff) == 1)) {
    switch(param_2) {
    case 0:
    case 3:
    case 4:
    case 5:
      *(undefined2 *)local_8 = local_20[0];
      break;
    case 1:
      *local_c = 1;
      break;
    case 2:
      *(undefined2 *)local_18 = 6;
      break;
    case 6:
      *(undefined2 *)local_8 = 0;
      break;
    case 7:
      *(undefined2 *)local_18 = 1;
      break;
    default:
      pv_set_error_code(0x7e3);
      local_10 = 0;
    }
  }
  else {
    pv_set_error_code(0x7e3);
    *(undefined2 *)local_14 = 0;
    local_10._0_2_ = 0;
  }
  return (undefined2)local_10;
}



/* ================================================================
 * Function: pm_get_ser_size
 * Address:  1000de85
 * ================================================================ */

/* __stdcall pm_get_ser_size,12 */

undefined2 pm_get_ser_size(short param_1,undefined2 param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined2 local_1c [2];
  undefined4 *local_18;
  undefined4 *local_14;
  undefined2 local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
                    /* 0xde85  391  _pm_get_ser_size@12 */
  local_14 = param_3;
  local_10 = 1;
  local_8 = param_3;
  local_c = param_3;
  local_18 = param_3;
  switch(param_2) {
  case 0:
  case 3:
  case 4:
  case 5:
    bVar1 = pl_ccd_get_ser_size(param_1,local_1c);
    if ((CONCAT31(extraout_var,bVar1) & 0xffff) == 0) {
      local_10 = 0;
    }
    else {
      *(undefined2 *)local_8 = local_1c[0];
    }
    break;
  case 1:
    *param_3 = 1;
    break;
  case 2:
    *(undefined2 *)param_3 = 6;
    break;
  case 6:
    *(undefined2 *)param_3 = 0;
    break;
  case 7:
    *(undefined2 *)param_3 = 2;
    break;
  case 8:
    *(undefined2 *)param_3 = 1;
    break;
  default:
    pv_set_error_code(0x7e3);
    local_10 = 0;
  }
  return local_10;
}



/* ================================================================
 * Function: pm_get_ccs_status
 * Address:  1000df5c
 * ================================================================ */

/* __stdcall pm_get_ccs_status,12 */

undefined2 pm_get_ccs_status(short param_1,undefined2 param_2,ushort *param_3)

{
  uint uVar1;
  ushort local_1c [2];
  ushort *local_18;
  ushort *local_14;
  ushort *local_10;
  undefined2 local_c;
  ushort *local_8;
  
                    /* 0xdf5c  349  _pm_get_ccs_status@12 */
  local_14 = param_3;
  local_c = 1;
  local_10 = param_3;
  local_8 = param_3;
  local_18 = param_3;
  switch(param_2) {
  case 0:
    uVar1 = pl_ccs_get_status(param_1,local_1c);
    if ((uVar1 & 0xffff) == 0) {
      *local_10 = 0;
      pv_set_error_code(0x7e1);
      local_c = 0;
    }
    else {
      *local_10 = local_1c[0];
    }
    break;
  case 1:
    param_3[0] = 4;
    param_3[1] = 0;
    break;
  case 2:
    *param_3 = 1;
    break;
  case 3:
  case 5:
    *param_3 = 0;
    break;
  case 4:
    *param_3 = 3;
    break;
  case 6:
    *param_3 = 0;
    break;
  case 7:
    *param_3 = 1;
    break;
  case 8:
    *param_3 = 1;
    break;
  default:
    pv_set_error_code(0x7e3);
    local_c = 0;
  }
  return local_c;
}



/* ================================================================
 * Function: pm_get_summing_well
 * Address:  1000e05d
 * ================================================================ */

/* __stdcall pm_get_summing_well,12 */

undefined2 pm_get_summing_well(short param_1,short param_2,short *param_3)

{
  short sVar1;
  bool bVar2;
  undefined3 extraout_var;
  uint local_c;
  uint local_8;
  
                    /* 0xe05d  396  _pm_get_summing_well@12 */
  local_8 = CONCAT22(local_8._2_2_,1);
  bVar2 = pl_ccd_get_summing_well(param_1,(undefined2 *)&local_c);
  if ((CONCAT31(extraout_var,bVar2) & 0xffff) == 0) {
    sVar1 = 0;
    local_8 = local_8 & 0xffff0000;
  }
  else if ((local_c & 0xffff) == 0) {
    sVar1 = 0;
  }
  else {
    sVar1 = 1;
  }
  if (param_2 == 8) {
    local_8._0_2_ = 1;
    *param_3 = sVar1;
  }
  else if (((local_8 & 0xffff) == 1) && (sVar1 == 1)) {
    switch(param_2) {
    case 0:
    case 3:
    case 4:
    case 5:
      *param_3 = (short)local_c;
      break;
    case 1:
      *param_3 = 1;
      break;
    case 2:
      *param_3 = 0xb;
      break;
    case 6:
      *param_3 = 0;
      break;
    case 7:
      *param_3 = 3;
      break;
    default:
      pv_set_error_code(0x7e3);
      local_8 = 0;
    }
  }
  else {
    pv_set_error_code(0x7e3);
    *param_3 = 0;
    local_8._0_2_ = 0;
  }
  return (undefined2)local_8;
}



/* ================================================================
 * Function: pm_get_temp
 * Address:  1000e193
 * ================================================================ */

/* __stdcall pm_get_temp,12 */

undefined2 pm_get_temp(short param_1,undefined2 param_2,ushort *param_3)

{
  uint uVar1;
  ushort local_1c [2];
  ushort *local_18;
  ushort *local_14;
  ushort *local_10;
  undefined2 local_c;
  ushort *local_8;
  
                    /* 0xe193  397  _pm_get_temp@12 */
  local_14 = param_3;
  local_c = 1;
  local_10 = param_3;
  local_8 = param_3;
  local_18 = param_3;
  switch(param_2) {
  case 0:
    uVar1 = pl_ccd_get_tmp(param_1,local_1c);
    if ((uVar1 & 0xffff) == 0) {
      local_c = 0;
    }
    else {
      *local_10 = local_1c[0];
    }
    break;
  case 1:
    param_3[0] = 0;
    param_3[1] = 0;
    break;
  case 2:
    *param_3 = 1;
    break;
  case 3:
    *param_3 = 0x8000;
    break;
  case 4:
    *param_3 = 0x7fff;
    break;
  case 5:
    *param_3 = 0;
    break;
  case 6:
    *param_3 = 1;
    break;
  case 7:
    *param_3 = 1;
    break;
  case 8:
    *param_3 = 1;
    break;
  default:
    pv_set_error_code(0x7e3);
    local_c = 0;
  }
  return local_c;
}



/* ================================================================
 * Function: pm_get_temp_setpoint
 * Address:  1000e28c
 * ================================================================ */

/* __stdcall pm_get_temp_setpoint,12 */

undefined2 pm_get_temp_setpoint(short param_1,undefined2 param_2,ushort *param_3)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  ushort local_24 [2];
  ushort *local_20;
  ushort *local_1c;
  ushort local_18 [2];
  ushort local_14 [2];
  ushort *local_10;
  undefined2 local_c;
  ushort *local_8;
  
                    /* 0xe28c  398  _pm_get_temp_setpoint@12 */
  local_1c = param_3;
  local_c = 1;
  local_24[0] = 0;
  local_18[0] = 0;
  local_14[0] = 0;
  local_10 = param_3;
  local_8 = param_3;
  local_20 = param_3;
  switch(param_2) {
  case 0:
    uVar2 = pl_ccd_get_tmp_setpoint(param_1,local_24);
    if ((uVar2 & 0xffff) == 0) {
      local_c = 0;
    }
    else {
      *local_10 = local_24[0];
    }
    break;
  case 1:
    param_3[0] = 0;
    param_3[1] = 0;
    break;
  case 2:
    *param_3 = 1;
    break;
  case 3:
  case 5:
    bVar1 = pl_ccd_get_tmp_range(param_1,local_18,local_14);
    if ((CONCAT31(extraout_var,bVar1) & 0xffff) == 0) {
      local_c = 0;
    }
    else {
      *local_10 = local_14[0];
    }
    break;
  case 4:
    bVar1 = pl_ccd_get_tmp_range(param_1,local_18,local_14);
    if ((CONCAT31(extraout_var_00,bVar1) & 0xffff) == 0) {
      local_c = 0;
    }
    else {
      *local_10 = local_18[0];
    }
    break;
  case 6:
    *param_3 = 1;
    break;
  case 7:
    *param_3 = 2;
    break;
  case 8:
    bVar1 = pl_ccd_get_tmp_range(param_1,local_18,local_14);
    if ((CONCAT31(extraout_var_01,bVar1) & 0xffff) == 0) {
      local_c = 0;
    }
    else {
      *local_1c = 1;
    }
    break;
  default:
    pv_set_error_code(0x7e3);
    local_c = 0;
  }
  return local_c;
}



/* ================================================================
 * Function: pm_get_pix_par_dist
 * Address:  1000e400
 * ================================================================ */

/* __stdcall pm_get_pix_par_dist,12 */

undefined2 pm_get_pix_par_dist(short param_1,undefined2 param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined2 local_1c [2];
  undefined4 *local_18;
  undefined4 *local_14;
  undefined2 local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
                    /* 0xe400  379  _pm_get_pix_par_dist@12 */
  local_14 = param_3;
  local_10 = 1;
  local_8 = param_3;
  local_c = param_3;
  local_18 = param_3;
  switch(param_2) {
  case 0:
  case 3:
  case 4:
  case 5:
    bVar1 = pl_ccd_get_pix_par_dist(param_1,local_1c);
    if ((CONCAT31(extraout_var,bVar1) & 0xffff) == 0) {
      local_10 = 0;
    }
    else {
      *(undefined2 *)local_8 = local_1c[0];
    }
    break;
  case 1:
    *param_3 = 1;
    break;
  case 2:
    *(undefined2 *)param_3 = 6;
    break;
  case 6:
    *(undefined2 *)param_3 = 0;
    break;
  case 7:
    *(undefined2 *)param_3 = 1;
    break;
  case 8:
    *(undefined2 *)param_3 = 1;
    break;
  default:
    pv_set_error_code(0x7e3);
    local_10 = 0;
  }
  return local_10;
}



/* ================================================================
 * Function: pm_get_pix_par_size
 * Address:  1000e4d7
 * ================================================================ */

/* __stdcall pm_get_pix_par_size,12 */

undefined2 pm_get_pix_par_size(short param_1,undefined2 param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined2 local_1c [2];
  undefined4 *local_18;
  undefined4 *local_14;
  undefined2 local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
                    /* 0xe4d7  380  _pm_get_pix_par_size@12 */
  local_14 = param_3;
  local_10 = 1;
  local_8 = param_3;
  local_c = param_3;
  local_18 = param_3;
  switch(param_2) {
  case 0:
  case 3:
  case 4:
  case 5:
    bVar1 = pl_ccd_get_pix_par_size(param_1,local_1c);
    if ((CONCAT31(extraout_var,bVar1) & 0xffff) == 0) {
      local_10 = 0;
    }
    else {
      *(undefined2 *)local_8 = local_1c[0];
    }
    break;
  case 1:
    *param_3 = 1;
    break;
  case 2:
    *(undefined2 *)param_3 = 6;
    break;
  case 6:
    *(undefined2 *)param_3 = 0;
    break;
  case 7:
    *(undefined2 *)param_3 = 1;
    break;
  case 8:
    *(undefined2 *)param_3 = 1;
    break;
  default:
    pv_set_error_code(0x7e3);
    local_10 = 0;
  }
  return local_10;
}



/* ================================================================
 * Function: pm_get_pix_ser_dist
 * Address:  1000e5ae
 * ================================================================ */

/* __stdcall pm_get_pix_ser_dist,12 */

undefined2 pm_get_pix_ser_dist(short param_1,undefined2 param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined2 local_1c [2];
  undefined4 *local_18;
  undefined4 *local_14;
  undefined2 local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
                    /* 0xe5ae  381  _pm_get_pix_ser_dist@12 */
  local_14 = param_3;
  local_10 = 1;
  local_8 = param_3;
  local_c = param_3;
  local_18 = param_3;
  switch(param_2) {
  case 0:
  case 3:
  case 4:
  case 5:
    bVar1 = pl_ccd_get_pix_ser_dist(param_1,local_1c);
    if ((CONCAT31(extraout_var,bVar1) & 0xffff) == 0) {
      local_10 = 0;
    }
    else {
      *(undefined2 *)local_8 = local_1c[0];
    }
    break;
  case 1:
    *param_3 = 1;
    break;
  case 2:
    *(undefined2 *)param_3 = 6;
    break;
  case 6:
    *(undefined2 *)param_3 = 0;
    break;
  case 7:
    *(undefined2 *)param_3 = 1;
    break;
  case 8:
    *(undefined2 *)param_3 = 1;
    break;
  default:
    pv_set_error_code(0x7e3);
    local_10 = 0;
  }
  return local_10;
}



/* ================================================================
 * Function: pm_get_pix_ser_size
 * Address:  1000e685
 * ================================================================ */

/* __stdcall pm_get_pix_ser_size,12 */

undefined2 pm_get_pix_ser_size(short param_1,undefined2 param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined2 local_1c [2];
  undefined4 *local_18;
  undefined4 *local_14;
  undefined2 local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
                    /* 0xe685  382  _pm_get_pix_ser_size@12 */
  local_14 = param_3;
  local_10 = 1;
  local_8 = param_3;
  local_c = param_3;
  local_18 = param_3;
  switch(param_2) {
  case 0:
  case 3:
  case 4:
  case 5:
    bVar1 = pl_ccd_get_pix_ser_size(param_1,local_1c);
    if ((CONCAT31(extraout_var,bVar1) & 0xffff) == 0) {
      local_10 = 0;
    }
    else {
      *(undefined2 *)local_8 = local_1c[0];
    }
    break;
  case 1:
    *param_3 = 1;
    break;
  case 2:
    *(undefined2 *)param_3 = 6;
    break;
  case 6:
    *(undefined2 *)param_3 = 0;
    break;
  case 7:
    *(undefined2 *)param_3 = 1;
    break;
  case 8:
    *(undefined2 *)param_3 = 1;
    break;
  default:
    pv_set_error_code(0x7e3);
    local_10 = 0;
  }
  return local_10;
}



/* ================================================================
 * Function: pm_get_color_mode
 * Address:  1000e75c
 * ================================================================ */

/* __stdcall pm_get_color_mode,12 */

undefined2 pm_get_color_mode(short param_1,undefined2 param_2,uint *param_3)

{
  uint uVar1;
  uint local_18;
  uint *local_14;
  uint *local_10;
  undefined2 local_c;
  uint *local_8;
  
                    /* 0xe75c  352  _pm_get_color_mode@12 */
  local_10 = param_3;
  local_c = 1;
  local_8 = param_3;
  local_14 = param_3;
  switch(param_2) {
  case 0:
    uVar1 = pl_ccd_get_color_mode(param_1,(short *)&local_18);
    if ((uVar1 & 0xffff) == 0) {
      local_c = 0;
    }
    *local_8 = local_18 & 0xffff;
    break;
  case 1:
    *param_3 = 2;
    break;
  case 2:
    *(undefined2 *)param_3 = 9;
    break;
  case 3:
  case 5:
    *param_3 = 0;
    break;
  case 4:
    *param_3 = 2;
    break;
  case 6:
    *param_3 = 0;
    break;
  case 7:
    *(undefined2 *)param_3 = 1;
    break;
  case 8:
    *(undefined2 *)param_3 = 1;
    break;
  default:
    pv_set_error_code(0x7e3);
    local_c = 0;
  }
  return local_c;
}



/* ================================================================
 * Function: pm_get_preamp_off_control
 * Address:  1000e84a
 * ================================================================ */

/* __stdcall pm_get_preamp_off_control,12 */

undefined2 pm_get_preamp_off_control(short param_1,undefined2 param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 local_14;
  undefined2 local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
                    /* 0xe84a  386  _pm_get_preamp_off_control@12 */
  local_10 = 1;
  local_8 = param_3;
  local_c = param_3;
  switch(param_2) {
  case 0:
    bVar1 = pl_ccd_get_preamp_off_control(param_1,&local_14);
    if ((CONCAT31(extraout_var,bVar1) & 0xffff) == 0) {
      pv_set_error_code(0x7e1);
      local_10 = 0;
    }
    else {
      *local_8 = local_14;
    }
    break;
  case 1:
    *param_3 = 0;
    break;
  case 2:
    *(undefined2 *)param_3 = 7;
    break;
  case 3:
  case 5:
    *param_3 = 0;
    break;
  case 4:
    *param_3 = 0xffffffff;
    break;
  case 6:
    *param_3 = 1;
    break;
  case 7:
    *(undefined2 *)param_3 = 2;
    break;
  case 8:
    *(undefined2 *)param_3 = 1;
    break;
  default:
    pv_set_error_code(0x7e3);
    local_10 = 0;
  }
  return local_10;
}



/* ================================================================
 * Function: pm_get_readout_port
 * Address:  1000e944
 * ================================================================ */

/* __stdcall pm_get_readout_port,12 */

undefined2 pm_get_readout_port(short param_1,undefined2 param_2,int *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  uint uVar2;
  ushort local_1c [2];
  int *local_18;
  int *local_14;
  undefined2 local_10;
  int *local_c;
  int *local_8;
  
                    /* 0xe944  390  _pm_get_readout_port@12 */
  local_14 = param_3;
  local_10 = 1;
  local_8 = param_3;
  local_c = param_3;
  local_18 = param_3;
  switch(param_2) {
  case 0:
    pl_spdtab_get_port_total(param_1,local_1c);
    if ((short)local_1c[0] < 2) {
      uVar2 = pl_spdtab_get_port(param_1,local_1c);
      if ((uVar2 & 0xffff) == 0) {
        local_10 = 0;
      }
      else {
        *local_8 = (int)(short)local_1c[0];
      }
    }
    else {
      bVar1 = pm_ccd_get_readout_port(param_1,local_1c);
      if ((CONCAT31(extraout_var,bVar1) & 0xffff) == 0) {
        local_10 = 0;
      }
      else {
        *local_8 = (int)(short)local_1c[0];
      }
    }
    break;
  case 1:
  case 4:
    uVar2 = pl_spdtab_get_port_total(param_1,local_1c);
    if ((uVar2 & 0xffff) == 0) {
      local_10 = 0;
      *local_c = 0;
    }
    else {
      *local_c = (int)(short)local_1c[0];
    }
    break;
  case 2:
    *(undefined2 *)param_3 = 9;
    break;
  case 3:
    *param_3 = 0;
    break;
  case 5:
    uVar2 = pl_spdtab_get_port(param_1,local_1c);
    if ((uVar2 & 0xffff) == 0) {
      local_10 = 0;
    }
    else {
      *local_8 = (int)(short)local_1c[0];
    }
    break;
  case 6:
    *param_3 = 1;
    break;
  case 7:
    *(undefined2 *)param_3 = 2;
    break;
  case 8:
    *(undefined2 *)param_3 = 1;
    break;
  default:
    pv_set_error_code(0x7e3);
    local_10 = 0;
  }
  return local_10;
}



/* ================================================================
 * Function: pm_get_shtr_close_delay
 * Address:  1000eac6
 * ================================================================ */

/* __stdcall pm_get_shtr_close_delay,12 */

undefined2 pm_get_shtr_close_delay(short param_1,undefined2 param_2,ushort *param_3)

{
  uint uVar1;
  ushort local_1c [2];
  ushort *local_18;
  ushort *local_14;
  undefined2 local_10;
  ushort *local_c;
  ushort *local_8;
  
                    /* 0xeac6  393  _pm_get_shtr_close_delay@12 */
  local_14 = param_3;
  local_10 = 1;
  local_8 = param_3;
  local_c = param_3;
  local_18 = param_3;
  switch(param_2) {
  case 0:
    uVar1 = pl_shtr_get_close_dly(param_1,local_1c);
    if ((uVar1 & 0xffff) == 0) {
      local_10 = 0;
    }
    else {
      *local_8 = local_1c[0];
    }
    break;
  case 1:
    param_3[0] = 0;
    param_3[1] = 0;
    break;
  case 2:
    *param_3 = 6;
    break;
  case 3:
  case 5:
    *param_3 = 0;
    break;
  case 4:
    *param_3 = 0xffff;
    break;
  case 6:
    *param_3 = 1;
    break;
  case 7:
    *param_3 = 2;
    break;
  case 8:
    *param_3 = 1;
    break;
  default:
    pv_set_error_code(0x7e3);
    local_10 = 0;
  }
  return local_10;
}



/* ================================================================
 * Function: pm_get_shtr_open_delay
 * Address:  1000ebb1
 * ================================================================ */

/* __stdcall pm_get_shtr_open_delay,12 */

undefined2 pm_get_shtr_open_delay(short param_1,undefined2 param_2,ushort *param_3)

{
  uint uVar1;
  ushort local_1c [2];
  ushort *local_18;
  ushort *local_14;
  undefined2 local_10;
  ushort *local_c;
  ushort *local_8;
  
                    /* 0xebb1  394  _pm_get_shtr_open_delay@12 */
  local_14 = param_3;
  local_10 = 1;
  local_8 = param_3;
  local_c = param_3;
  local_18 = param_3;
  switch(param_2) {
  case 0:
    uVar1 = pl_shtr_get_open_dly(param_1,local_1c);
    if ((uVar1 & 0xffff) == 0) {
      local_10 = 0;
    }
    else {
      *local_8 = local_1c[0];
    }
    break;
  case 1:
    param_3[0] = 0;
    param_3[1] = 0;
    break;
  case 2:
    *param_3 = 6;
    break;
  case 3:
  case 5:
    *param_3 = 0;
    break;
  case 4:
    *param_3 = 0xffff;
    break;
  case 6:
    *param_3 = 1;
    break;
  case 7:
    *param_3 = 2;
    break;
  case 8:
    *param_3 = 1;
    break;
  default:
    pv_set_error_code(0x7e3);
    local_10 = 0;
  }
  return local_10;
}



/* ================================================================
 * Function: pm_get_shtr_status
 * Address:  1000ec9c
 * ================================================================ */

/* __stdcall pm_get_shtr_status,12 */

undefined2 pm_get_shtr_status(short param_1,undefined2 param_2,int *param_3)

{
  uint uVar1;
  short local_18 [2];
  int *local_14;
  int *local_10;
  undefined2 local_c;
  int *local_8;
  
                    /* 0xec9c  395  _pm_get_shtr_status@12 */
  local_10 = param_3;
  local_c = 1;
  local_8 = param_3;
  local_14 = param_3;
  switch(param_2) {
  case 0:
    uVar1 = pl_shtr_get_status(param_1,local_18);
    if ((uVar1 & 0xffff) == 0) {
      local_c = 0;
    }
    else {
      *local_8 = (int)local_18[0];
    }
    break;
  case 1:
    *param_3 = 6;
    break;
  case 2:
    *(undefined2 *)param_3 = 9;
    break;
  case 3:
    *param_3 = 0;
    break;
  case 4:
  case 5:
    *param_3 = 5;
    break;
  case 6:
    *param_3 = 0;
    break;
  case 7:
    *(undefined2 *)param_3 = 1;
    break;
  case 8:
    *(undefined2 *)param_3 = 1;
    break;
  default:
    pv_set_error_code(0x7e3);
    local_c = 0;
  }
  return local_c;
}



/* ================================================================
 * Function: pm_get_exp_time
 * Address:  1000ed83
 * ================================================================ */

/* __stdcall pm_get_exp_time,12 */

undefined2 pm_get_exp_time(short param_1,undefined2 param_2,ushort *param_3)

{
  uint uVar1;
  ushort local_1c [2];
  ushort *local_18;
  ushort *local_14;
  undefined2 local_10;
  ushort *local_c;
  ushort *local_8;
  
                    /* 0xed83  363  _pm_get_exp_time@12 */
  local_14 = param_3;
  local_10 = 1;
  local_8 = param_3;
  local_c = param_3;
  local_18 = param_3;
  switch(param_2) {
  case 0:
    uVar1 = pl_exp_get_time_seq(param_1,local_1c);
    if ((uVar1 & 0xffff) == 0) {
      pv_set_error_code(0x7e1);
      local_10 = 0;
    }
    else {
      *local_8 = local_1c[0];
    }
    break;
  case 1:
    param_3[0] = 0;
    param_3[1] = 0;
    break;
  case 2:
    *param_3 = 6;
    break;
  case 3:
  case 5:
    *param_3 = 0;
    break;
  case 4:
    *param_3 = 0xffff;
    break;
  case 6:
    *param_3 = 1;
    break;
  case 7:
    *param_3 = 2;
    break;
  case 8:
    *param_3 = 1;
    break;
  default:
    pv_set_error_code(0x7e3);
    local_10 = 0;
  }
  return local_10;
}



/* ================================================================
 * Function: pm_get_circ_buffer
 * Address:  1000ee7c
 * ================================================================ */

/* __stdcall pm_get_circ_buffer,12 */

undefined2 pm_get_circ_buffer(short param_1,undefined2 param_2,undefined4 *param_3)

{
  short sVar1;
  uint local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined2 local_c;
  undefined4 *local_8;
  
                    /* 0xee7c  350  _pm_get_circ_buffer@12 */
  local_14 = param_3;
  local_c = 1;
  local_10 = param_3;
  local_8 = param_3;
  local_18 = param_3;
  switch(param_2) {
  case 0:
  case 3:
  case 4:
  case 5:
    pv_set_error_code(0x7e0);
    local_c = 0;
    break;
  case 1:
    *param_3 = 1;
    break;
  case 2:
    *(undefined2 *)param_3 = 0xb;
    break;
  case 6:
    *(undefined2 *)param_3 = 0;
    break;
  case 7:
    *(undefined2 *)param_3 = 3;
    break;
  case 8:
    sVar1 = pd_driver_get_pci_cap(param_1,(ushort *)&local_1c);
    if (sVar1 == 0) {
      if ((local_1c & 1) == 0) {
        *(undefined2 *)local_14 = 0;
      }
      else {
        *(undefined2 *)local_14 = 1;
      }
    }
    else {
      pv_set_error_code(0x7e1);
      local_c = 0;
    }
    break;
  default:
    pv_set_error_code(0x7e3);
    local_c = 0;
  }
  return local_c;
}



/* ================================================================
 * Function: pm_get_exp_res
 * Address:  1000ef82
 * ================================================================ */

/* __stdcall pm_get_exp_res,12 */

undefined2 pm_get_exp_res(short param_1,undefined2 param_2,uint *param_3)

{
  uint uVar1;
  uint local_14;
  undefined2 local_10;
  uint *local_c;
  uint *local_8;
  
                    /* 0xef82  361  _pm_get_exp_res@12 */
  local_10 = 1;
  local_8 = param_3;
  local_c = param_3;
  switch(param_2) {
  case 0:
    uVar1 = pv_exp_get_res(param_1,*(ushort *)(DAT_10043334 + 0x10 + param_1 * 0x24),&local_14);
    if ((uVar1 & 0xffff) == 0) {
      pv_set_error_code(0x7e1);
      local_10 = 0;
    }
    else if (local_14 < 2) {
      *local_8 = local_14;
    }
    else {
      *local_8 = 0;
    }
    break;
  case 1:
    *param_3 = 2;
    break;
  case 2:
    *(undefined2 *)param_3 = 9;
    break;
  case 3:
  case 5:
    *param_3 = 0;
    break;
  case 4:
    *param_3 = 1;
    break;
  case 6:
    *param_3 = 0;
    break;
  case 7:
    *(undefined2 *)param_3 = 1;
    break;
  case 8:
    uVar1 = pv_cam_get_reads(param_1);
    if ((uVar1 & 0xffff) == 0) {
      local_10 = 0;
    }
    else {
      if (*(short *)(DAT_10043338 + 0x4c + param_1 * 0x110) == 0) {
        *(undefined2 *)param_3 = 0;
      }
      else {
        *(undefined2 *)param_3 = 1;
      }
      *(undefined2 *)param_3 = 1;
    }
    break;
  default:
    pv_set_error_code(0x7e3);
    local_10 = 0;
  }
  return local_10;
}



/* ================================================================
 * Function: pm_get_exp_min_time
 * Address:  1000f0f4
 * ================================================================ */

/* __stdcall pm_get_exp_min_time,12 */

bool pm_get_exp_min_time(short param_1,undefined2 param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
                    /* 0xf0f4  360  _pm_get_exp_min_time@12 */
  bVar3 = true;
  switch(param_2) {
  case 0:
  case 3:
  case 4:
  case 5:
    uVar2 = pv_cam_get_reads(param_1);
    iVar1 = DAT_10043338;
    bVar3 = (uVar2 & 0xffff) != 0;
    if (bVar3) {
      *param_3 = *(undefined4 *)(DAT_10043338 + 0x38 + param_1 * 0x110);
      param_3[1] = *(undefined4 *)(iVar1 + 0x3c + param_1 * 0x110);
    }
    break;
  case 1:
    *param_3 = 1;
    break;
  case 2:
    *(undefined2 *)param_3 = 4;
    break;
  case 6:
    *param_3 = 0;
    param_3[1] = 0;
    break;
  case 7:
    *(undefined2 *)param_3 = 1;
    break;
  case 8:
    uVar2 = pv_cam_get_reads(param_1);
    if ((uVar2 & 0xffff) == 0) {
      bVar3 = false;
    }
    else if (*(short *)(DAT_10043338 + 0x4c + param_1 * 0x110) == 0) {
      *(undefined2 *)param_3 = 0;
    }
    else {
      *(undefined2 *)param_3 = 1;
    }
    break;
  default:
    pv_set_error_code(0x7e3);
    bVar3 = false;
  }
  return bVar3;
}



/* ================================================================
 * Function: pm_get_exp_res_index
 * Address:  1000f22e
 * ================================================================ */

/* __stdcall pm_get_exp_res_index,12 */

bool pm_get_exp_res_index(short param_1,undefined2 param_2,uint *param_3)

{
  uint uVar1;
  bool bVar2;
  
                    /* 0xf22e  362  _pm_get_exp_res_index@12 */
  bVar2 = true;
  switch(param_2) {
  case 0:
    *(undefined2 *)param_3 = *(undefined2 *)(DAT_10043334 + 0x10 + param_1 * 0x24);
    break;
  case 1:
    uVar1 = pv_cam_get_reads(param_1);
    bVar2 = (uVar1 & 0xffff) != 0;
    if (bVar2) {
      *param_3 = (uint)*(ushort *)(DAT_10043338 + 0x36 + param_1 * 0x110);
    }
    break;
  case 2:
    *(undefined2 *)param_3 = 6;
    break;
  case 3:
  case 5:
    *(undefined2 *)param_3 = 0;
    break;
  case 4:
    uVar1 = pv_cam_get_reads(param_1);
    bVar2 = (uVar1 & 0xffff) != 0;
    if (bVar2) {
      *(short *)param_3 = *(short *)(DAT_10043338 + 0x36 + param_1 * 0x110) + -1;
    }
    break;
  case 6:
    *(undefined2 *)param_3 = 1;
    break;
  case 7:
    *(undefined2 *)param_3 = 2;
    break;
  case 8:
    uVar1 = pv_cam_get_reads(param_1);
    if ((uVar1 & 0xffff) == 0) {
      bVar2 = false;
    }
    else if (*(short *)(DAT_10043338 + 0x4c + param_1 * 0x110) == 0) {
      *(undefined2 *)param_3 = 0;
    }
    else {
      *(undefined2 *)param_3 = 1;
    }
    break;
  default:
    pv_set_error_code(0x7e3);
    bVar2 = false;
  }
  return bVar2;
}



/* ================================================================
 * Function: pm_get_io_addr
 * Address:  1000f3b9
 * ================================================================ */

/* __stdcall pm_get_io_addr,12 */

bool pm_get_io_addr(short param_1,undefined2 param_2,uint *param_3)

{
  uint uVar1;
  bool bVar2;
  
                    /* 0xf3b9  369  _pm_get_io_addr@12 */
  bVar2 = true;
  switch(param_2) {
  case 0:
    *(undefined2 *)param_3 = *(undefined2 *)(DAT_10043334 + 0x12 + param_1 * 0x24);
    break;
  case 1:
    uVar1 = pv_cam_get_reads(param_1);
    bVar2 = (uVar1 & 0xffff) != 0;
    if (bVar2) {
      *param_3 = (uint)*(ushort *)(DAT_10043338 + 0x40 + param_1 * 0x110);
    }
    break;
  case 2:
    *(undefined2 *)param_3 = 6;
    break;
  case 3:
  case 5:
    *(undefined2 *)param_3 = 0;
    break;
  case 4:
    uVar1 = pv_cam_get_reads(param_1);
    bVar2 = (uVar1 & 0xffff) != 0;
    if (bVar2) {
      *(short *)param_3 = *(short *)(DAT_10043338 + 0x40 + param_1 * 0x110) + -1;
    }
    break;
  case 6:
    *(undefined2 *)param_3 = 1;
    break;
  case 7:
    *(undefined2 *)param_3 = 2;
    break;
  case 8:
    uVar1 = pv_cam_get_reads(param_1);
    if ((uVar1 & 0xffff) == 0) {
      bVar2 = false;
    }
    else if (*(short *)(DAT_10043338 + 0x4e + param_1 * 0x110) == 0) {
      *(undefined2 *)param_3 = 0;
    }
    else {
      *(undefined2 *)param_3 = 1;
    }
    break;
  default:
    pv_set_error_code(0x7e3);
    bVar2 = false;
  }
  return bVar2;
}



/* ================================================================
 * Function: pm_get_io_type
 * Address:  1000f544
 * ================================================================ */

/* __stdcall pm_get_io_type,12 */

undefined2 pm_get_io_type(short param_1,undefined2 param_2,uint *param_3)

{
  uint uVar1;
  uint local_14;
  undefined2 local_10;
  uint *local_c;
  uint *local_8;
  
                    /* 0xf544  373  _pm_get_io_type@12 */
  local_10 = 1;
  local_8 = param_3;
  local_c = param_3;
  switch(param_2) {
  case 0:
    uVar1 = pv_io_get_type(param_1,*(undefined2 *)(DAT_10043334 + 0x12 + param_1 * 0x24),&local_14);
    if ((uVar1 & 0xffff) == 0) {
      pv_set_error_code(0x7e1);
      local_10 = 0;
    }
    else {
      *local_8 = local_14;
    }
    break;
  case 1:
    *param_3 = 1;
    break;
  case 2:
    *(undefined2 *)param_3 = 9;
    break;
  case 3:
  case 5:
    *param_3 = 0;
    break;
  case 4:
    *param_3 = 1;
    break;
  case 6:
    *param_3 = 0;
    break;
  case 7:
    *(undefined2 *)param_3 = 1;
    break;
  case 8:
    uVar1 = pv_cam_get_reads(param_1);
    if ((uVar1 & 0xffff) == 0) {
      local_10 = 0;
    }
    else if (*(short *)(DAT_10043338 + 0x4e + param_1 * 0x110) == 0) {
      *(undefined2 *)param_3 = 0;
    }
    else {
      *(undefined2 *)param_3 = 1;
    }
    break;
  default:
    pv_set_error_code(0x7e3);
    local_10 = 0;
  }
  return local_10;
}



/* ================================================================
 * Function: pm_get_io_direction
 * Address:  1000f699
 * ================================================================ */

/* __stdcall pm_get_io_direction,12 */

undefined2 pm_get_io_direction(short param_1,undefined2 param_2,uint *param_3)

{
  uint uVar1;
  uint local_20;
  uint *local_1c;
  uint *local_18;
  uint local_14;
  undefined2 local_10;
  uint *local_c;
  uint *local_8;
  
                    /* 0xf699  371  _pm_get_io_direction@12 */
  local_18 = param_3;
  local_10 = 1;
  local_8 = param_3;
  local_c = param_3;
  local_1c = param_3;
  switch(param_2) {
  case 0:
    uVar1 = pv_io_get_direction(param_1,*(undefined2 *)(DAT_10043334 + 0x12 + param_1 * 0x24),
                                &local_14);
    if ((uVar1 & 0xffff) == 0) {
      pv_set_error_code(0x7e1);
      local_10 = 0;
    }
    else {
      *local_8 = local_14;
    }
    break;
  case 1:
    *param_3 = 1;
    break;
  case 2:
    *(undefined2 *)param_3 = 9;
    break;
  case 3:
  case 5:
    *param_3 = 0;
    break;
  case 4:
    *param_3 = 2;
    break;
  case 6:
    *param_3 = 0;
    break;
  case 7:
    uVar1 = pv_io_get_dir_attr(param_1,*(undefined2 *)(DAT_10043334 + 0x12 + param_1 * 0x24),
                               (ushort *)&local_20);
    if ((uVar1 & 0xffff) == 0) {
      pv_set_error_code(0x7e1);
      local_10 = 0;
    }
    else if ((local_20 & 0xffff) == 0) {
      *(undefined2 *)local_1c = 1;
    }
    else if ((local_20 & 0xffff) == 1) {
      *(undefined2 *)local_1c = 2;
    }
    else {
      pv_set_error_code(0x7e8);
      local_10 = 0;
    }
    break;
  case 8:
    uVar1 = pv_cam_get_reads(param_1);
    if ((uVar1 & 0xffff) == 0) {
      local_10 = 0;
    }
    else if (*(short *)(DAT_10043338 + 0x4e + param_1 * 0x110) == 0) {
      *(undefined2 *)local_18 = 0;
    }
    else {
      *(undefined2 *)local_18 = 1;
    }
    break;
  default:
    pv_set_error_code(0x7e3);
    local_10 = 0;
  }
  return local_10;
}



/* ================================================================
 * Function: pm_get_io_state
 * Address:  1000f86a
 * ================================================================ */

/* __stdcall pm_get_io_state,12 */

undefined2 pm_get_io_state(short param_1,undefined2 param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  uint local_14;
  undefined2 local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
                    /* 0xf86a  372  _pm_get_io_state@12 */
  local_1c = param_3;
  local_10 = 1;
  local_18 = param_3;
  local_8 = param_3;
  local_c = param_3;
  local_20 = param_3;
  switch(param_2) {
  case 0:
    uVar1 = pv_io_get_current_state
                      (param_1,*(undefined2 *)(DAT_10043334 + 0x12 + param_1 * 0x24),
                       (double *)&local_2c);
    if ((uVar1 & 0xffff) == 0) {
      pv_set_error_code(0x7e1);
      local_10 = 0;
    }
    else {
      *local_8 = local_2c;
      local_8[1] = local_28;
    }
    break;
  case 1:
    *param_3 = 1;
    break;
  case 2:
    *(undefined2 *)param_3 = 4;
    break;
  case 3:
    uVar1 = pv_io_get_min_state(param_1,*(undefined2 *)(DAT_10043334 + 0x12 + param_1 * 0x24),
                                (double *)&local_2c);
    if ((uVar1 & 0xffff) == 0) {
      pv_set_error_code(0x7e1);
      local_10 = 0;
    }
    else {
      *local_8 = local_2c;
      local_8[1] = local_28;
    }
    break;
  case 4:
    uVar1 = pv_io_get_max_state(param_1,*(undefined2 *)(DAT_10043334 + 0x12 + param_1 * 0x24),
                                (double *)&local_2c);
    if ((uVar1 & 0xffff) == 0) {
      pv_set_error_code(0x7e1);
      local_10 = 0;
    }
    else {
      *local_8 = local_2c;
      local_8[1] = local_28;
    }
    break;
  case 5:
    *param_3 = 0;
    param_3[1] = 0;
    break;
  case 6:
    *param_3 = 0;
    param_3[1] = 0;
    break;
  case 7:
    uVar1 = pv_io_get_direction(param_1,*(undefined2 *)(DAT_10043334 + 0x12 + param_1 * 0x24),
                                &local_14);
    if ((uVar1 & 0xffff) == 0) {
      pv_set_error_code(0x7e1);
      local_10 = 0;
    }
    else if (local_14 == 0) {
      *(undefined2 *)local_20 = 1;
    }
    else if (local_14 == 1) {
      uVar1 = pv_io_get_dir_attr(param_1,*(undefined2 *)(DAT_10043334 + 0x12 + param_1 * 0x24),
                                 (ushort *)&local_24);
      if ((uVar1 & 0xffff) == 0) {
        pv_set_error_code(0x7e1);
        local_10 = 0;
      }
      else if ((local_24 & 0xffff) == 0) {
        *(undefined2 *)local_20 = 4;
      }
      else if ((local_24 & 0xffff) == 1) {
        *(undefined2 *)local_20 = 2;
      }
      else {
        pv_set_error_code(0x7e8);
        local_10 = 0;
      }
    }
    else if (local_14 == 2) {
      *(undefined2 *)local_18 = 2;
    }
    else {
      pv_set_error_code(0x7ea);
      local_10 = 0;
    }
    break;
  case 8:
    uVar1 = pv_cam_get_reads(param_1);
    if ((uVar1 & 0xffff) == 0) {
      local_10 = 0;
    }
    else if (*(short *)(DAT_10043338 + 0x4e + param_1 * 0x110) == 0) {
      *(undefined2 *)local_1c = 0;
    }
    else {
      *(undefined2 *)local_1c = 1;
    }
    break;
  default:
    pv_set_error_code(0x7e3);
    local_10 = 0;
  }
  return local_10;
}



/* ================================================================
 * Function: pm_get_io_bitdepth
 * Address:  1000fb6d
 * ================================================================ */

/* __stdcall pm_get_io_bitdepth,12 */

undefined2 pm_get_io_bitdepth(short param_1,undefined2 param_2,ushort *param_3)

{
  uint uVar1;
  ushort local_1c [2];
  ushort *local_18;
  ushort *local_14;
  undefined2 local_10;
  ushort *local_c;
  ushort *local_8;
  
                    /* 0xfb6d  370  _pm_get_io_bitdepth@12 */
  local_14 = param_3;
  local_10 = 1;
  local_8 = param_3;
  local_c = param_3;
  local_18 = param_3;
  switch(param_2) {
  case 0:
  case 3:
  case 4:
  case 5:
    uVar1 = pv_io_get_bitdepth(param_1,*(undefined2 *)(DAT_10043334 + 0x12 + param_1 * 0x24),
                               local_1c);
    if ((uVar1 & 0xffff) == 0) {
      pv_set_error_code(0x7e1);
      local_10 = 0;
    }
    else {
      *local_8 = local_1c[0];
    }
    break;
  case 1:
    param_3[0] = 1;
    param_3[1] = 0;
    break;
  case 2:
    *param_3 = 6;
    break;
  case 6:
    *param_3 = 0;
    break;
  case 7:
    *param_3 = 1;
    break;
  case 8:
    uVar1 = pv_cam_get_reads(param_1);
    if ((uVar1 & 0xffff) == 0) {
      local_10 = 0;
    }
    else if (*(short *)(DAT_10043338 + 0x4e + param_1 * 0x110) == 0) {
      *local_14 = 0;
    }
    else {
      *local_14 = 1;
    }
    break;
  default:
    pv_set_error_code(0x7e3);
    local_10 = 0;
  }
  return local_10;
}



/* ================================================================
 * Function: pm_get_cam_fw_version
 * Address:  1000fca8
 * ================================================================ */

/* __stdcall pm_get_cam_fw_version,12 */

bool pm_get_cam_fw_version(short param_1,undefined2 param_2,short *param_3)

{
  uint uVar1;
  bool bVar2;
  
                    /* 0xfca8  346  _pm_get_cam_fw_version@12 */
  bVar2 = true;
  switch(param_2) {
  case 0:
  case 3:
  case 4:
  case 5:
    uVar1 = pv_cam_get_reads(param_1);
    bVar2 = (uVar1 & 0xffff) != 0;
    if (bVar2) {
      *param_3 = (ushort)*(byte *)(DAT_10043338 + 0x34 + param_1 * 0x110) * 0x100 +
                 (ushort)*(byte *)(DAT_10043338 + 0x42 + param_1 * 0x110);
    }
    break;
  case 1:
    param_3[0] = 1;
    param_3[1] = 0;
    break;
  case 2:
    *param_3 = 6;
    break;
  case 6:
    *param_3 = 0;
    break;
  case 7:
    *param_3 = 1;
    break;
  case 8:
    *param_3 = 1;
    break;
  default:
    pv_set_error_code(0x7e3);
    bVar2 = false;
  }
  return bVar2;
}



/* ================================================================
 * Function: pm_get_head_ser_num_alpha
 * Address:  1000fdae
 * ================================================================ */

/* __stdcall pm_get_head_ser_num_alpha,12 */

undefined2 pm_get_head_ser_num_alpha(short param_1,undefined2 param_2,int *param_3)

{
  uint uVar1;
  size_t local_38;
  char local_34 [4];
  int *local_30;
  undefined2 local_2c;
  char local_28 [32];
  int *local_8;
  
                    /* 0xfdae  368  _pm_get_head_ser_num_alpha@12 */
  local_30 = param_3;
  local_2c = 1;
  local_8 = param_3;
  local_34[0] = '\0';
  switch(param_2) {
  case 0:
    uVar1 = pv_ccd_get_head_ser_num_alpha(param_1,local_28,&local_38);
    if ((uVar1 & 0xffff) == 0) {
      local_2c = 0;
    }
    else {
      strncpy((char *)param_3,local_28,local_38 + 1);
    }
    break;
  case 1:
    uVar1 = pv_ccd_get_head_ser_num_alpha(param_1,local_28,&local_38);
    if ((uVar1 & 0xffff) == 0) {
      local_2c = 0;
    }
    else {
      *local_8 = local_38 + 1;
    }
    break;
  case 2:
    *(undefined2 *)param_3 = 0xd;
    break;
  case 3:
    strncpy((char *)param_3,local_34,1);
    break;
  case 4:
    strncpy((char *)param_3,local_34,1);
    break;
  case 5:
    strncpy((char *)param_3,local_34,1);
    break;
  case 6:
    strncpy((char *)param_3,local_34,1);
    break;
  case 7:
    *(undefined2 *)param_3 = 1;
    break;
  case 8:
    uVar1 = pv_cam_get_reads(param_1);
    if ((uVar1 & 0xffff) == 0) {
      local_2c = 0;
    }
    else if (*(short *)(DAT_10043338 + 0x50 + param_1 * 0x110) == 0) {
      *(undefined2 *)local_30 = 0;
    }
    else {
      *(undefined2 *)local_30 = 1;
    }
    break;
  default:
    pv_set_error_code(0x7e3);
    local_2c = 0;
  }
  return local_2c;
}



/* ================================================================
 * Function: pm_get_cam_fw_version_alpha
 * Address:  1000ff57
 * ================================================================ */

/* __stdcall pm_get_cam_fw_version_alpha,12 */

undefined2 pm_get_cam_fw_version_alpha(short param_1,undefined2 param_2,int *param_3)

{
  uint uVar1;
  size_t local_38;
  char local_34 [4];
  int *local_30;
  undefined2 local_2c;
  char local_28 [32];
  int *local_8;
  
                    /* 0xff57  347  _pm_get_cam_fw_version_alpha@12 */
  local_30 = param_3;
  local_2c = 1;
  local_8 = param_3;
  local_34[0] = '\0';
  switch(param_2) {
  case 0:
    uVar1 = pv_cam_get_head_fw_version_alpha(param_1,local_28,&local_38);
    if ((uVar1 & 0xffff) == 0) {
      local_2c = 0;
    }
    else {
      strncpy((char *)param_3,local_28,local_38 + 1);
    }
    break;
  case 1:
    uVar1 = pv_cam_get_head_fw_version_alpha(param_1,local_28,&local_38);
    if ((uVar1 & 0xffff) == 0) {
      local_2c = 0;
    }
    else {
      *local_8 = local_38 + 1;
    }
    break;
  case 2:
    *(undefined2 *)param_3 = 0xd;
    break;
  case 3:
    strncpy((char *)param_3,local_34,1);
    break;
  case 4:
    strncpy((char *)param_3,local_34,1);
    break;
  case 5:
    strncpy((char *)param_3,local_34,1);
    break;
  case 6:
    strncpy((char *)param_3,local_34,1);
    break;
  case 7:
    *(undefined2 *)param_3 = 1;
    break;
  case 8:
    uVar1 = pv_cam_get_reads(param_1);
    if ((uVar1 & 0xffff) == 0) {
      local_2c = 0;
    }
    else if (*(short *)(DAT_10043338 + 0x52 + param_1 * 0x110) == 0) {
      *(undefined2 *)local_30 = 0;
    }
    else {
      *(undefined2 *)local_30 = 1;
    }
    break;
  default:
    pv_set_error_code(0x7e3);
    local_2c = 0;
  }
  return local_2c;
}



/* ================================================================
 * Function: pm_get_pci_fw_version
 * Address:  10010100
 * ================================================================ */

/* __stdcall pm_get_pci_fw_version,12 */

undefined2 pm_get_pci_fw_version(short param_1,undefined2 param_2,undefined4 *param_3)

{
  short sVar1;
  undefined2 local_14 [2];
  undefined2 local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
                    /* 0x10100  378  _pm_get_pci_fw_version@12 */
  local_10 = 1;
  local_8 = param_3;
  local_c = param_3;
  switch(param_2) {
  case 0:
  case 3:
  case 4:
  case 5:
    sVar1 = pd_driver_get_pci_fw(param_1,local_14);
    if (sVar1 == 0) {
      *(undefined2 *)local_8 = local_14[0];
    }
    else {
      local_10 = 0;
    }
    break;
  case 1:
    *param_3 = 1;
    break;
  case 2:
    *(undefined2 *)param_3 = 6;
    break;
  case 6:
    *(undefined2 *)param_3 = 0;
    break;
  case 7:
    *(undefined2 *)param_3 = 1;
    break;
  case 8:
    *(undefined2 *)param_3 = 1;
    break;
  default:
    pv_set_error_code(0x7e3);
    local_10 = 0;
  }
  return local_10;
}



/* ================================================================
 * Function: pm_get_gain_mult_enable
 * Address:  100101d5
 * ================================================================ */

/* __stdcall pm_get_gain_mult_enable,12 */

undefined2 pm_get_gain_mult_enable(short param_1,short param_2,ushort *param_3)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  undefined2 local_c;
  
                    /* 0x101d5  366  _pm_get_gain_mult_enable@12 */
  uVar2 = pv_cam_get_reads(param_1);
  bVar3 = (uVar2 & 0xffff) == 0;
  if (bVar3) {
    uVar1 = 0;
  }
  else {
    uVar1 = (ushort)(*(short *)(DAT_10043338 + 0x10c + param_1 * 0x110) != 0);
  }
  if (param_2 == 8) {
    local_c = 1;
    *param_3 = uVar1;
  }
  else if ((bVar3) || (uVar1 != 1)) {
    pv_set_error_code(0x7e3);
    local_c = 0;
  }
  else {
    local_c = 1;
    switch(param_2) {
    case 0:
      *param_3 = 1;
      break;
    case 1:
      param_3[0] = 0;
      param_3[1] = 0;
      break;
    case 2:
      *param_3 = 0xb;
      break;
    case 3:
      *param_3 = 0;
      break;
    case 4:
      *param_3 = 1;
      break;
    case 5:
      *param_3 = 1;
      break;
    case 6:
      *param_3 = 0;
      break;
    case 7:
      *param_3 = 1;
      break;
    default:
      pv_set_error_code(0x7e3);
      local_c = 0;
    }
  }
  return local_c;
}



/* ================================================================
 * Function: pm_get_gain_mult_factor
 * Address:  10010336
 * ================================================================ */

/* __stdcall pm_get_gain_mult_factor,12 */

undefined4 pm_get_gain_mult_factor(short param_1,short param_2,ushort *param_3)

{
  bool bVar1;
  uint uVar2;
  undefined2 uVar4;
  ushort *puVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  ushort extraout_var_01;
  undefined2 extraout_var_02;
  ushort local_1c [2];
  ushort local_18;
  undefined2 uStack_16;
  ushort *local_14;
  ushort *local_10;
  uint local_c;
  ushort *local_8;
  
                    /* 0x10336  367  _pm_get_gain_mult_factor@12 */
  local_10 = param_3;
  local_c = CONCAT22(local_c._2_2_,1);
  local_8 = param_3;
  local_14 = param_3;
  uVar2 = pv_cam_get_reads(param_1);
  if ((uVar2 & 0xffff) == 0) {
    local_18 = 0;
    local_c = local_c & 0xffff0000;
  }
  else {
    local_18 = (ushort)(*(short *)(DAT_10043338 + 0x10c + param_1 * 0x110) != 0);
  }
  if (param_2 == 8) {
    local_c._0_2_ = 1;
    uVar4 = 0;
    *local_10 = local_18;
  }
  else if (((local_c & 0xffff) == 1) && (local_18 == 1)) {
    puVar3 = (ushort *)(int)param_2;
    switch(puVar3) {
    case (ushort *)0x0:
      bVar1 = pm_ccd_get_gain_mult_factor(param_1,local_1c);
      puVar3 = (ushort *)(CONCAT31(extraout_var,bVar1) & 0xffff);
      if (puVar3 == (ushort *)0x0) {
        local_c = 0;
      }
      else {
        *local_14 = local_1c[0];
      }
      break;
    case (ushort *)0x1:
      local_8[0] = 0;
      local_8[1] = 0;
      break;
    case (ushort *)0x2:
      *local_14 = 6;
      break;
    case (ushort *)0x3:
      *local_14 = 0;
      puVar3 = local_14;
      break;
    case (ushort *)0x4:
      bVar1 = pm_ccd_get_max_gain_mult_factor(param_1,local_1c);
      if ((CONCAT31(extraout_var_00,bVar1) & 0xffff) == 0) {
        local_c = 0;
        puVar3 = (ushort *)0x0;
      }
      else {
        *local_14 = local_1c[0];
        puVar3 = local_14;
      }
      break;
    case (ushort *)0x5:
      *local_14 = 0;
      break;
    case (ushort *)0x6:
      *local_14 = 1;
      puVar3 = local_14;
      break;
    case (ushort *)0x7:
      *local_14 = 2;
      puVar3 = local_14;
      break;
    default:
      pv_set_error_code(0x7e3);
      local_c = 0;
      puVar3 = (ushort *)((uint)extraout_var_01 << 0x10);
    }
    uVar4 = (undefined2)((uint)puVar3 >> 0x10);
  }
  else {
    pv_set_error_code(0x7e3);
    local_c._0_2_ = 0;
    uVar4 = extraout_var_02;
  }
  return CONCAT22(uVar4,(undefined2)local_c);
}



/* ================================================================
 * Function: pm_get_param
 * Address:  100104dd
 * ================================================================ */

/* __stdcall pm_get_param,16 */

ushort pm_get_param(short param_1,uint param_2,short param_3,uint *param_4)

{
  bool bVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  undefined3 extraout_var_08;
  undefined4 uVar5;
  uint local_10;
  uint *local_c;
  ushort local_8;
  
                    /* 0x104dd  377  _pm_get_param@16 */
  local_8 = 1;
  local_c = param_4;
  if (param_2 < 0x6020217) {
    if (param_2 == 0x6020216) {
      sVar2 = pm_get_pci_fw_version(param_1,param_3,param_4);
      if (sVar2 != 0) {
        return local_8;
      }
      return 0;
    }
    if (param_2 < 0x6020039) {
      if (param_2 == 0x6020038) {
        sVar2 = pm_get_postscan(param_1,param_3,param_4);
        if (sVar2 != 0) {
          return local_8;
        }
        return 0;
      }
      if (param_2 < 0x4020213) {
        if (param_2 == 0x4020212) {
          if (param_3 == 8) {
            sVar2 = pm_get_io_state(param_1,8,param_4);
            if (sVar2 != 0) {
              return local_8;
            }
            return 0;
          }
          sVar2 = pm_get_io_state(param_1,8,&local_10);
          if (sVar2 == 0) {
            return 0;
          }
          if ((local_10 & 0xffff) == 0) {
            pv_set_error_code(0x7e0);
            return 0;
          }
          sVar2 = pm_get_io_state(param_1,param_3,param_4);
          if (sVar2 != 0) {
            return local_8;
          }
          return 0;
        }
        if (param_2 < 0x1020201) {
          if (param_2 == 0x1020200) {
            sVar2 = pv_get_gain_index(param_1,param_3,(ushort *)param_4);
            if (sVar2 != 0) {
              return local_8;
            }
            return 0;
          }
          if (param_2 < 0x10201ff) {
            if (param_2 == 0x10201fe) {
              sVar2 = pm_get_ccs_status(param_1,param_3,(ushort *)param_4);
              if (sVar2 != 0) {
                return local_8;
              }
              return 0;
            }
            if (param_2 == 0x1000001) {
              sVar2 = pm_get_dd_info_length(param_1,param_3,param_4);
              if (sVar2 != 0) {
                return local_8;
              }
              return 0;
            }
            if (param_2 == 0x10200c3) {
              sVar2 = pm_get_adc_offset(param_1,param_3,(ushort *)param_4);
              if (sVar2 != 0) {
                return local_8;
              }
              return 0;
            }
          }
          else if (param_2 == 0x10201ff) {
            sVar2 = pv_get_bit_depth(param_1,param_3,(ushort *)param_4);
            if (sVar2 != 0) {
              return local_8;
            }
            return 0;
          }
        }
        else {
          if (param_2 == 0x1020201) {
            sVar2 = pv_get_spdtab_index(param_1,param_3,(ushort *)param_4);
            if (sVar2 != 0) {
              return local_8;
            }
            return 0;
          }
          if (param_2 == 0x102020d) {
            sVar2 = pm_get_temp(param_1,param_3,(ushort *)param_4);
            if (sVar2 != 0) {
              return local_8;
            }
            return 0;
          }
          if (param_2 == 0x102020e) {
            sVar2 = pm_get_temp_setpoint(param_1,param_3,(ushort *)param_4);
            if (sVar2 != 0) {
              return local_8;
            }
            return 0;
          }
        }
      }
      else if (param_2 < 0x6000005) {
        if (param_2 == 0x6000004) {
          sVar2 = pm_get_dd_timeout(param_1,param_3,param_4);
          if (sVar2 != 0) {
            return local_8;
          }
          return 0;
        }
        if (param_2 == 0x4030003) {
          if (param_3 == 8) {
            bVar1 = pm_get_exp_min_time(param_1,8,param_4);
            if ((CONCAT31(extraout_var,bVar1) & 0xffff) != 0) {
              return local_8;
            }
            return 0;
          }
          bVar1 = pm_get_exp_min_time(param_1,8,&local_10);
          if ((CONCAT31(extraout_var_00,bVar1) & 0xffff) == 0) {
            return 0;
          }
          if ((local_10 & 0xffff) == 0) {
            pv_set_error_code(0x7e0);
            return 0;
          }
          bVar1 = pm_get_exp_min_time(param_1,param_3,param_4);
          if ((CONCAT31(extraout_var_01,bVar1) & 0xffff) != 0) {
            return local_8;
          }
          return 0;
        }
        if (param_2 == 0x6000002) {
          sVar2 = pm_get_dd_version(param_1,param_3,(ushort *)param_4);
          if (sVar2 != 0) {
            return local_8;
          }
          return 0;
        }
        if (param_2 == 0x6000003) {
          sVar2 = pm_get_dd_retries(param_1,param_3,param_4);
          if (sVar2 != 0) {
            return local_8;
          }
          return 0;
        }
      }
      else {
        if (param_2 == 0x6020035) {
          sVar2 = pm_get_premask(param_1,param_3,param_4);
          if (sVar2 != 0) {
            return local_8;
          }
          return 0;
        }
        if (param_2 == 0x6020036) {
          sVar2 = pm_get_postmask(param_1,param_3,param_4);
          if (sVar2 != 0) {
            return local_8;
          }
          return 0;
        }
        if (param_2 == 0x6020037) {
          sVar2 = pm_get_prescan(param_1,param_3,param_4);
          if (sVar2 != 0) {
            return local_8;
          }
          return 0;
        }
      }
    }
    else if (param_2 < 0x60201f8) {
      if (param_2 == 0x60201f7) {
        sVar2 = pm_get_preflash(param_1,param_3,param_4);
        if (sVar2 != 0) {
          return local_8;
        }
        return 0;
      }
      if (param_2 < 0x6020062) {
        if (param_2 == 0x6020061) {
          sVar2 = pm_get_clear_cycles(param_1,param_3,param_4);
          if (sVar2 != 0) {
            return local_8;
          }
          return 0;
        }
        switch(param_2) {
        case 0x6020039:
          sVar2 = pm_get_par_size(param_1,param_3,param_4);
          if (sVar2 != 0) {
            return local_8;
          }
          return 0;
        case 0x602003a:
          sVar2 = pm_get_ser_size(param_1,param_3,param_4);
          if (sVar2 != 0) {
            return local_8;
          }
          return 0;
        case 0x602003e:
          sVar2 = pm_get_pix_ser_size(param_1,param_3,param_4);
          if (sVar2 != 0) {
            return local_8;
          }
          return 0;
        case 0x602003f:
          sVar2 = pm_get_pix_par_size(param_1,param_3,param_4);
          if (sVar2 != 0) {
            return local_8;
          }
          return 0;
        }
      }
      else {
        if (param_2 == 0x60201f4) {
          sVar2 = pm_get_pix_par_dist(param_1,param_3,param_4);
          if (sVar2 != 0) {
            return local_8;
          }
          return 0;
        }
        if (param_2 == 0x60201f5) {
          sVar2 = pm_get_pix_ser_dist(param_1,param_3,param_4);
          if (sVar2 != 0) {
            return local_8;
          }
          return 0;
        }
        if (param_2 == 0x60201f6) {
          sVar2 = pm_get_preamp_delay(param_1,param_3,param_4);
          if (sVar2 != 0) {
            return local_8;
          }
          return 0;
        }
      }
    }
    else {
      switch(param_2) {
      case 0x60201fc:
        sVar2 = pm_get_serial_num(param_1,param_3,param_4);
        if (sVar2 != 0) {
          return local_8;
        }
        return 0;
      case 0x6020204:
        sVar2 = pv_get_pix_time(param_1,param_3,(ushort *)param_4);
        if (sVar2 != 0) {
          return local_8;
        }
        return 0;
      case 0x6020207:
        sVar2 = pm_get_shtr_close_delay(param_1,param_3,(ushort *)param_4);
        if (sVar2 != 0) {
          return local_8;
        }
        return 0;
      case 0x6020208:
        sVar2 = pm_get_shtr_open_delay(param_1,param_3,(ushort *)param_4);
        if (sVar2 != 0) {
          return local_8;
        }
        return 0;
      case 0x602020f:
        if (param_3 == 8) {
          bVar1 = pm_get_io_addr(param_1,8,param_4);
          if ((CONCAT31(extraout_var_05,bVar1) & 0xffff) != 0) {
            return local_8;
          }
          return 0;
        }
        bVar1 = pm_get_io_addr(param_1,8,&local_10);
        if ((CONCAT31(extraout_var_06,bVar1) & 0xffff) == 0) {
          return 0;
        }
        if ((local_10 & 0xffff) == 0) {
          pv_set_error_code(0x7e0);
          return 0;
        }
        bVar1 = pm_get_io_addr(param_1,param_3,param_4);
        if ((CONCAT31(extraout_var_07,bVar1) & 0xffff) != 0) {
          return local_8;
        }
        return 0;
      case 0x6020213:
        if (param_3 == 8) {
          sVar2 = pm_get_io_bitdepth(param_1,8,(ushort *)param_4);
          if (sVar2 != 0) {
            return local_8;
          }
          return 0;
        }
        sVar2 = pm_get_io_bitdepth(param_1,8,(ushort *)&local_10);
        if (sVar2 == 0) {
          return 0;
        }
        if ((local_10 & 0xffff) == 0) {
          pv_set_error_code(0x7e0);
          return 0;
        }
        sVar2 = pm_get_io_bitdepth(param_1,param_3,(ushort *)param_4);
        if (sVar2 != 0) {
          return local_8;
        }
        return 0;
      case 0x6020214:
        bVar1 = pm_get_cam_fw_version(param_1,param_3,(short *)param_4);
        if ((CONCAT31(extraout_var_08,bVar1) & 0xffff) != 0) {
          return local_8;
        }
        return 0;
      }
    }
  }
  else if (param_2 < 0x902020d) {
    if (param_2 == 0x902020c) {
      sVar2 = pv_get_pmode(param_1,param_3,(int *)param_4);
      if (sVar2 != 0) {
        return local_8;
      }
      return 0;
    }
    if (param_2 < 0x75d0004) {
      if (param_2 == 0x75d0003) {
        uVar3 = pm_get_accum_number(param_1,param_3,param_4);
        return uVar3;
      }
      if (param_2 < 0x65d0003) {
        if (param_2 == 0x65d0002) {
          uVar3 = pm_get_paired_flag(param_1,param_3,param_4);
          return uVar3;
        }
        if (param_2 < 0x6030005) {
          if (param_2 == 0x6030004) {
            if (param_3 == 8) {
              bVar1 = pm_get_exp_res_index(param_1,8,param_4);
              if ((CONCAT31(extraout_var_02,bVar1) & 0xffff) != 0) {
                return local_8;
              }
              return 0;
            }
            bVar1 = pm_get_exp_res_index(param_1,8,&local_10);
            if ((CONCAT31(extraout_var_03,bVar1) & 0xffff) == 0) {
              return 0;
            }
            if ((local_10 & 0xffff) == 0) {
              pv_set_error_code(0x7e0);
              return 0;
            }
            bVar1 = pm_get_exp_res_index(param_1,param_3,param_4);
            if ((CONCAT31(extraout_var_04,bVar1) & 0xffff) != 0) {
              return local_8;
            }
            return 0;
          }
          if (param_2 == 0x6020219) {
            uVar5 = pm_get_gain_mult_factor(param_1,param_3,(ushort *)param_4);
            return (ushort)uVar5;
          }
          if (param_2 == 0x6030001) {
            sVar2 = pm_get_exp_time(param_1,param_3,(ushort *)param_4);
            if (sVar2 != 0) {
              return local_8;
            }
            return 0;
          }
        }
        else if (param_2 == 0x65d0001) {
          uVar3 = pm_get_accum_flag(param_1,param_3,param_4);
          return uVar3;
        }
      }
      else {
        if (param_2 == 0x70201fa) {
          sVar2 = pm_get_fwell_capacity(param_1,param_3,param_4);
          if (sVar2 != 0) {
            return local_8;
          }
          return 0;
        }
        if (param_2 == 0x70201fb) {
          sVar2 = pm_get_preamp_off_control(param_1,param_3,param_4);
          if (sVar2 != 0) {
            return local_8;
          }
          return 0;
        }
        if (param_2 == 0x7030006) {
          sVar2 = pv_get_int_counts(param_1,param_3,(int *)param_4);
          if (sVar2 != 0) {
            return local_8;
          }
          return 0;
        }
      }
    }
    else if (param_2 < 0x90201f9) {
      if (param_2 == 0x90201f8) {
        sVar2 = pm_get_color_mode(param_1,param_3,param_4);
        if (sVar2 != 0) {
          return local_8;
        }
        return 0;
      }
      if (param_2 == 0x90200d6) {
        sVar2 = pm_get_cooling_mode(param_1,param_3,(int *)param_4);
        if (sVar2 != 0) {
          return local_8;
        }
        return 0;
      }
      if (param_2 == 0x90200e0) {
        uVar4 = pm_get_mpp_capable(param_1,param_3,(int *)param_4);
        if ((uVar4 & 0xffff) != 0) {
          return local_8;
        }
        return 0;
      }
      if (param_2 == 0x90200f7) {
        sVar2 = pm_get_readout_port(param_1,param_3,(int *)param_4);
        if (sVar2 != 0) {
          return local_8;
        }
        return 0;
      }
    }
    else {
      if (param_2 == 0x9020209) {
        sVar2 = pv_get_shtr_open_mode(param_1,param_3,(int *)param_4);
        if (sVar2 != 0) {
          return local_8;
        }
        return 0;
      }
      if (param_2 == 0x902020a) {
        sVar2 = pm_get_shtr_status(param_1,param_3,(int *)param_4);
        if (sVar2 != 0) {
          return local_8;
        }
        return 0;
      }
      if (param_2 == 0x902020b) {
        sVar2 = pv_get_clear_mode(param_1,param_3,(int *)param_4);
        if (sVar2 != 0) {
          return local_8;
        }
        return 0;
      }
    }
  }
  else if (param_2 < 0xb02021b) {
    if (param_2 == 0xb02021a) {
      sVar2 = pm_get_accum_capable(param_1,param_3,param_4);
      if (sVar2 != 0) {
        return local_8;
      }
      return 0;
    }
    if (param_2 < 0x9030003) {
      if (param_2 == 0x9030002) {
        if (param_3 == 8) {
          sVar2 = pm_get_exp_res(param_1,8,param_4);
          if (sVar2 != 0) {
            return local_8;
          }
          return 0;
        }
        sVar2 = pm_get_exp_res(param_1,8,&local_10);
        if (sVar2 == 0) {
          return 0;
        }
        if ((local_10 & 0xffff) == 0) {
          pv_set_error_code(0x7e0);
          return 0;
        }
        sVar2 = pm_get_exp_res(param_1,param_3,param_4);
        if (sVar2 != 0) {
          return local_8;
        }
        return 0;
      }
      if (param_2 == 0x9020210) {
        if (param_3 == 8) {
          sVar2 = pm_get_io_type(param_1,8,param_4);
          if (sVar2 != 0) {
            return local_8;
          }
          return 0;
        }
        sVar2 = pm_get_io_type(param_1,8,&local_10);
        if (sVar2 == 0) {
          return 0;
        }
        if ((local_10 & 0xffff) == 0) {
          pv_set_error_code(0x7e0);
          return 0;
        }
        sVar2 = pm_get_io_type(param_1,param_3,param_4);
        if (sVar2 != 0) {
          return local_8;
        }
        return 0;
      }
      if (param_2 == 0x9020211) {
        if (param_3 == 8) {
          sVar2 = pm_get_io_direction(param_1,8,param_4);
          if (sVar2 != 0) {
            return local_8;
          }
          return 0;
        }
        sVar2 = pm_get_io_direction(param_1,8,&local_10);
        if (sVar2 == 0) {
          return 0;
        }
        if ((local_10 & 0xffff) == 0) {
          pv_set_error_code(0x7e0);
          return 0;
        }
        sVar2 = pm_get_io_direction(param_1,param_3,param_4);
        if (sVar2 != 0) {
          return local_8;
        }
        return 0;
      }
      if (param_2 == 0x9020217) {
        sVar2 = pv_get_exposure_mode(param_1,param_3,(int *)param_4);
        if (sVar2 != 0) {
          return local_8;
        }
        return 0;
      }
    }
    else {
      if (param_2 == 0x9030005) {
        sVar2 = pv_get_irq_mask(param_1,param_3,(int *)param_4);
        if (sVar2 != 0) {
          return local_8;
        }
        return 0;
      }
      if (param_2 == 0xb0201f9) {
        sVar2 = pm_get_summing_well(param_1,param_3,(short *)param_4);
        if (sVar2 != 0) {
          return local_8;
        }
        return 0;
      }
      if (param_2 == 0xb0201fd) {
        sVar2 = pm_get_frame_capable(param_1,param_3,param_4);
        if (sVar2 != 0) {
          return local_8;
        }
        return 0;
      }
    }
  }
  else if (param_2 < 0xd000006) {
    if (param_2 == 0xd000005) {
      sVar2 = pm_get_dd_info(param_1,param_3,(int *)param_4);
      if (sVar2 != 0) {
        return local_8;
      }
      return 0;
    }
    if (param_2 == 0xb02021d) {
      uVar3 = pm_get_gain_mult_enable(param_1,param_3,(ushort *)param_4);
      return uVar3;
    }
    if (param_2 == 0xb030007) {
      sVar2 = pv_get_int_clear(param_3,param_4);
      if (sVar2 != 0) {
        return local_8;
      }
      return 0;
    }
    if (param_2 == 0xb03012b) {
      sVar2 = pm_get_circ_buffer(param_1,param_3,param_4);
      if (sVar2 != 0) {
        return local_8;
      }
      return 0;
    }
  }
  else {
    if (param_2 == 0xd020081) {
      sVar2 = pv_get_chip_name(param_1,param_3,(char *)param_4);
      if (sVar2 != 0) {
        return local_8;
      }
      return 0;
    }
    if (param_2 == 0xd020215) {
      if (param_3 == 8) {
        sVar2 = pm_get_head_ser_num_alpha(param_1,8,(int *)param_4);
        if (sVar2 != 0) {
          return local_8;
        }
        return 0;
      }
      sVar2 = pm_get_head_ser_num_alpha(param_1,8,(int *)&local_10);
      if (sVar2 == 0) {
        return 0;
      }
      if ((local_10 & 0xffff) == 0) {
        pv_set_error_code(0x7e0);
        return 0;
      }
      sVar2 = pm_get_head_ser_num_alpha(param_1,param_3,(int *)param_4);
      if (sVar2 != 0) {
        return local_8;
      }
      return 0;
    }
    if (param_2 == 0xd020216) {
      if (param_3 == 8) {
        sVar2 = pm_get_cam_fw_version_alpha(param_1,8,(int *)param_4);
        if (sVar2 != 0) {
          return local_8;
        }
        return 0;
      }
      sVar2 = pm_get_cam_fw_version_alpha(param_1,8,(int *)&local_10);
      if (sVar2 == 0) {
        return 0;
      }
      if ((local_10 & 0xffff) == 0) {
        pv_set_error_code(0x7e0);
        return 0;
      }
      sVar2 = pm_get_cam_fw_version_alpha(param_1,param_3,(int *)param_4);
      if (sVar2 != 0) {
        return local_8;
      }
      return 0;
    }
  }
  if (param_3 == 8) {
    *(undefined2 *)param_4 = 0;
  }
  else {
    pv_set_error_code(0x7e2);
  }
  local_8 = (ushort)(param_3 == 8);
  return local_8;
}



/* ================================================================
 * Function: pm_get_accum_number
 * Address:  1001177e
 * ================================================================ */

/* __stdcall pm_get_accum_number,12 */

undefined2 pm_get_accum_number(short param_1,undefined2 param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 local_10;
  undefined2 local_c;
  undefined4 *local_8;
  
                    /* 0x1177e  344  _pm_get_accum_number@12 */
  local_c = 1;
  local_8 = param_3;
  switch(param_2) {
  case 0:
    if ((*(short *)(DAT_10043338 + 0x5c + param_1 * 0x110) == 0) ||
       (uVar1 = t_pl_ff_get_accum_num(param_1,&local_10), (uVar1 & 0xffff) == 0)) {
      local_c = 0;
    }
    else {
      *local_8 = local_10;
    }
    break;
  case 1:
    *param_3 = 0;
    break;
  case 2:
    *(undefined2 *)param_3 = 7;
    break;
  case 3:
    *param_3 = 0;
    break;
  case 4:
    *param_3 = 0xffff;
    break;
  case 5:
    *param_3 = 0;
    break;
  case 6:
    *param_3 = 1;
    break;
  case 7:
    *(undefined2 *)param_3 = 2;
    break;
  case 8:
    uVar1 = pv_cam_get_reads(param_1);
    if ((uVar1 & 0xffff) == 0) {
      local_c = 0;
    }
    else if (*(short *)(DAT_10043338 + 0x5c + param_1 * 0x110) == 0) {
      *(undefined2 *)param_3 = 0;
    }
    else {
      *(undefined2 *)param_3 = 1;
    }
    break;
  default:
    pv_set_error_code(0x7e3);
    local_c = 0;
  }
  return local_c;
}



/* ================================================================
 * Function: pm_get_accum_flag
 * Address:  100118d8
 * ================================================================ */

/* __stdcall pm_get_accum_flag,12 */

undefined2 pm_get_accum_flag(short param_1,undefined2 param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined2 local_14 [2];
  undefined4 *local_10;
  undefined2 local_c;
  undefined4 *local_8;
  
                    /* 0x118d8  343  _pm_get_accum_flag@12 */
  local_10 = param_3;
  local_c = 1;
  local_8 = param_3;
  switch(param_2) {
  case 0:
    if ((*(short *)(DAT_10043338 + 0x5c + param_1 * 0x110) == 0) ||
       (uVar1 = t_pl_ff_get_accum_mode(param_1,local_14), (uVar1 & 0xffff) == 0)) {
      local_c = 0;
    }
    else {
      *(undefined2 *)local_10 = local_14[0];
    }
    break;
  case 1:
    *param_3 = 0;
    break;
  case 2:
    *(undefined2 *)param_3 = 0xb;
    break;
  case 3:
    *(undefined2 *)param_3 = 0;
    break;
  case 4:
    *(undefined2 *)param_3 = 1;
    break;
  case 5:
    *(undefined2 *)param_3 = 0;
    break;
  case 6:
    *(undefined2 *)param_3 = 1;
    break;
  case 7:
    *(undefined2 *)param_3 = 2;
    break;
  case 8:
    uVar1 = pv_cam_get_reads(param_1);
    if ((uVar1 & 0xffff) == 0) {
      local_c = 0;
    }
    else if (*(short *)(DAT_10043338 + 0x5c + param_1 * 0x110) == 0) {
      *(undefined2 *)local_10 = 0;
    }
    else {
      *(undefined2 *)local_10 = 1;
    }
    break;
  default:
    pv_set_error_code(0x7e3);
    local_c = 0;
  }
  return local_c;
}



/* ================================================================
 * Function: pm_get_paired_flag
 * Address:  10011a30
 * ================================================================ */

/* __stdcall pm_get_paired_flag,12 */

undefined2 pm_get_paired_flag(short param_1,undefined2 param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined2 local_14 [2];
  undefined4 *local_10;
  undefined2 local_c;
  undefined4 *local_8;
  
                    /* 0x11a30  375  _pm_get_paired_flag@12 */
  local_10 = param_3;
  local_c = 1;
  local_8 = param_3;
  switch(param_2) {
  case 0:
    if ((*(short *)(DAT_10043338 + 0x5a + param_1 * 0x110) == 0) ||
       (uVar1 = t_pl_ff_get_paired_mode(param_1,local_14), (uVar1 & 0xffff) == 0)) {
      local_c = 0;
    }
    else {
      *(undefined2 *)local_10 = local_14[0];
    }
    break;
  case 1:
    *param_3 = 0;
    break;
  case 2:
    *(undefined2 *)param_3 = 0xb;
    break;
  case 3:
    *(undefined2 *)param_3 = 0;
    break;
  case 4:
    *(undefined2 *)param_3 = 1;
    break;
  case 5:
    *(undefined2 *)param_3 = 0;
    break;
  case 6:
    *(undefined2 *)param_3 = 1;
    break;
  case 7:
    *(undefined2 *)param_3 = 2;
    break;
  case 8:
    uVar1 = pv_cam_get_reads(param_1);
    if ((uVar1 & 0xffff) == 0) {
      local_c = 0;
    }
    else if (*(short *)(DAT_10043338 + 0x5a + param_1 * 0x110) == 0) {
      *(undefined2 *)local_10 = 0;
    }
    else {
      *(undefined2 *)local_10 = 1;
    }
    break;
  default:
    pv_set_error_code(0x7e3);
    local_c = 0;
  }
  return local_c;
}



/* ================================================================
 * Function: pv_get_chip_name
 * Address:  10011b90
 * ================================================================ */

/* __stdcall pv_get_chip_name,12 */

undefined2 pv_get_chip_name(short param_1,undefined2 param_2,char *param_3)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  char local_3c [16];
  undefined1 local_2c;
  int local_28;
  char *local_24;
  undefined2 local_20;
  char local_1c [16];
  undefined1 local_c;
  char *local_8;
  
                    /* 0x11b90  495  _pv_get_chip_name@12 */
  local_24 = param_3;
  local_20 = 1;
  local_8 = param_3;
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    local_20 = 0;
  }
  else {
    for (local_28 = 0; local_28 < 0x10; local_28 = local_28 + 1) {
      local_3c[local_28] = ' ';
      local_1c[local_28] = '\0';
    }
    local_2c = 0;
    local_c = 0;
    switch(param_2) {
    case 0:
      bVar1 = pl_ccd_get_chip_name(param_1,local_1c);
      if ((CONCAT31(extraout_var,bVar1) & 0xffff) == 0) {
        local_20 = 0;
      }
      else {
        strncpy(param_3,local_1c,0x11);
      }
      break;
    case 1:
      local_8[0] = '\x11';
      local_8[1] = '\0';
      local_8[2] = '\0';
      local_8[3] = '\0';
      break;
    case 2:
      param_3[0] = '\r';
      param_3[1] = '\0';
      break;
    case 3:
      strncpy(param_3,local_3c,0x11);
      break;
    case 4:
      strncpy(param_3,local_3c,0x11);
      break;
    case 5:
      strncpy(param_3,local_3c,0x11);
      break;
    case 6:
      strncpy(param_3,local_3c,0x11);
      break;
    case 7:
      param_3[0] = '\x01';
      param_3[1] = '\0';
      break;
    case 8:
      local_24[0] = '\x01';
      local_24[1] = '\0';
      break;
    default:
      pv_set_error_code(0x7e3);
      local_20 = 0;
    }
  }
  return local_20;
}



/* ================================================================
 * Function: pv_get_clear_mode
 * Address:  10011d08
 * ================================================================ */

/* __stdcall pv_get_clear_mode,12 */

undefined2 pv_get_clear_mode(short param_1,undefined2 param_2,int *param_3)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  short local_18 [2];
  int *local_14;
  int *local_10;
  undefined2 local_c;
  int *local_8;
  
                    /* 0x11d08  496  _pv_get_clear_mode@12 */
  local_10 = param_3;
  local_c = 1;
  local_8 = param_3;
  local_14 = param_3;
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    local_c = 0;
  }
  else {
    switch(param_2) {
    case 0:
      bVar1 = pl_ccd_get_clear_mode(param_1,local_18);
      if ((CONCAT31(extraout_var,bVar1) & 0xffff) == 0) {
        pv_set_error_code(0x7e1);
        local_c = 0;
      }
      else {
        *local_8 = (int)local_18[0];
      }
      break;
    case 1:
      *local_8 = 6;
      break;
    case 2:
      *(undefined2 *)local_14 = 9;
      break;
    case 3:
      *local_8 = 0;
      break;
    case 4:
      *local_8 = 5;
      break;
    case 5:
      *local_8 = 1;
      break;
    case 6:
      *local_8 = 0;
      break;
    case 7:
      *(undefined2 *)local_14 = 2;
      break;
    case 8:
      *(undefined2 *)local_10 = 1;
      break;
    default:
      pv_set_error_code(0x7e3);
      local_c = 0;
    }
  }
  return local_c;
}



/* ================================================================
 * Function: pv_get_pmode
 * Address:  10011e23
 * ================================================================ */

/* __stdcall pv_get_pmode,12 */

undefined2 pv_get_pmode(short param_1,undefined2 param_2,int *param_3)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  short local_18 [2];
  int *local_14;
  int *local_10;
  undefined2 local_c;
  int *local_8;
  
                    /* 0x11e23  509  _pv_get_pmode@12 */
  local_10 = param_3;
  local_c = 1;
  local_8 = param_3;
  local_14 = param_3;
  uVar2 = pv_cam_get_reads(param_1);
  if ((uVar2 & 0xffff) == 0) {
    local_c = 0;
  }
  else {
    switch(param_2) {
    case 0:
      bVar1 = pl_ccd_get_pmode(param_1,local_18);
      if ((CONCAT31(extraout_var,bVar1) & 0xffff) == 0) {
        pv_set_error_code(0x7e1);
        local_c = 0;
      }
      else {
        *local_8 = (int)local_18[0];
      }
      break;
    case 1:
      *local_8 = *(int *)(DAT_10043338 + 0xb4 + param_1 * 0x110);
      break;
    case 2:
      *(undefined2 *)local_14 = 9;
      break;
    case 3:
    case 5:
      *local_8 = 0;
      break;
    case 4:
      *local_8 = 9;
      break;
    case 6:
      *local_8 = 0;
      break;
    case 7:
      *(undefined2 *)local_14 = 2;
      break;
    case 8:
      *(undefined2 *)local_10 = 1;
      break;
    default:
      pv_set_error_code(0x7e3);
      local_c = 0;
    }
  }
  return local_c;
}



/* ================================================================
 * Function: pv_get_bit_depth
 * Address:  10011f48
 * ================================================================ */

/* __stdcall pv_get_bit_depth,12 */

undefined2 pv_get_bit_depth(short param_1,undefined2 param_2,ushort *param_3)

{
  uint uVar1;
  ushort local_1c [2];
  ushort *local_18;
  ushort *local_14;
  ushort *local_10;
  undefined2 local_c;
  ushort *local_8;
  
                    /* 0x11f48  493  _pv_get_bit_depth@12 */
  local_14 = param_3;
  local_c = 1;
  local_10 = param_3;
  local_8 = param_3;
  local_18 = param_3;
  uVar1 = pl_cam_check(param_1);
  if ((uVar1 & 0xffff) == 0) {
    local_c = 0;
  }
  else {
    switch(param_2) {
    case 0:
    case 3:
    case 4:
    case 5:
      uVar1 = pl_spdtab_get_bits(param_1,local_1c);
      if ((uVar1 & 0xffff) == 0) {
        local_c = 0;
      }
      else {
        *local_10 = local_1c[0];
      }
      break;
    case 1:
      local_8[0] = 1;
      local_8[1] = 0;
      break;
    case 2:
      *local_18 = 1;
      break;
    case 6:
      *local_10 = 0;
      break;
    case 7:
      *local_18 = 1;
      break;
    case 8:
      *local_14 = 1;
      break;
    default:
      pv_set_error_code(0x7e3);
      local_c = 0;
    }
  }
  return local_c;
}



/* ================================================================
 * Function: pv_get_gain_index
 * Address:  1001203a
 * ================================================================ */

/* __stdcall pv_get_gain_index,12 */

undefined2 pv_get_gain_index(short param_1,undefined2 param_2,ushort *param_3)

{
  uint uVar1;
  ushort local_2c [2];
  ushort *local_28;
  ushort local_24;
  ushort local_20 [2];
  ushort *local_1c;
  ushort local_18 [2];
  ushort *local_14;
  ushort local_10 [2];
  undefined2 local_c;
  ushort *local_8;
  
                    /* 0x1203a  500  _pv_get_gain_index@12 */
  local_1c = param_3;
  local_c = 1;
  local_14 = param_3;
  local_8 = param_3;
  local_28 = param_3;
  uVar1 = pl_cam_check(param_1);
  if ((uVar1 & 0xffff) == 0) {
    local_c = 0;
  }
  else {
    switch(param_2) {
    case 0:
      uVar1 = pl_spdtab_get_gain(param_1,local_2c);
      if ((uVar1 & 0xffff) == 0) {
        local_c = 0;
      }
      else {
        *local_14 = local_2c[0];
      }
      break;
    case 1:
      uVar1 = pl_spdtab_get_gain(param_1,local_18);
      if (((uVar1 & 0xffff) == 0) ||
         (uVar1 = pl_ccd_get_adc_offset(param_1,local_20), (uVar1 & 0xffff) == 0)) {
        local_c = 0;
      }
      else {
        local_2c[0] = 0;
        for (local_24 = 1; (short)local_24 < 0x11; local_24 = local_24 + 1) {
          uVar1 = pl_spdtab_set_gain(param_1,(char)local_24);
          if (((uVar1 & 0xffff) != 0) &&
             (pl_spdtab_get_gain(param_1,local_10), local_24 == local_10[0])) {
            local_2c[0] = local_2c[0] + 1;
          }
        }
        uVar1 = pl_spdtab_set_gain(param_1,(char)local_18[0]);
        if (((uVar1 & 0xffff) == 0) ||
           (uVar1 = pl_ccd_set_adc_offset(param_1,local_20[0]), (uVar1 & 0xffff) == 0)) {
          local_c = 0;
        }
        *(int *)local_8 = (int)(short)local_2c[0];
      }
      break;
    case 2:
      *local_28 = 1;
      break;
    case 3:
    case 5:
      *local_14 = 1;
      break;
    case 4:
      uVar1 = pl_spdtab_get_max_gain(param_1,local_2c);
      if ((uVar1 & 0xffff) == 0) {
        local_c = 0;
      }
      else {
        *local_14 = local_2c[0];
      }
      break;
    case 6:
      *local_14 = 0;
      break;
    case 7:
      *local_28 = 2;
      break;
    case 8:
      *local_1c = 1;
      break;
    default:
      pv_set_error_code(0x7e3);
      local_c = 0;
    }
  }
  return local_c;
}



/* ================================================================
 * Function: pv_get_spdtab_index
 * Address:  10012243
 * ================================================================ */

/* __stdcall pv_get_spdtab_index,12 */

undefined2 pv_get_spdtab_index(short param_1,undefined2 param_2,ushort *param_3)

{
  uint uVar1;
  ushort local_1c [2];
  ushort *local_18;
  ushort *local_14;
  ushort *local_10;
  undefined2 local_c;
  ushort *local_8;
  
                    /* 0x12243  511  _pv_get_spdtab_index@12 */
  local_14 = param_3;
  local_c = 1;
  local_10 = param_3;
  local_8 = param_3;
  local_18 = param_3;
  uVar1 = pl_cam_check(param_1);
  if ((uVar1 & 0xffff) == 0) {
    local_c = 0;
  }
  else {
    switch(param_2) {
    case 0:
      uVar1 = pl_spdtab_get_num(param_1,local_1c);
      if ((uVar1 & 0xffff) == 0) {
        local_c = 0;
      }
      else {
        *local_10 = local_1c[0];
      }
      break;
    case 1:
      uVar1 = pl_spdtab_get_entries(param_1,local_1c);
      if ((uVar1 & 0xffff) == 0) {
        local_c = 0;
      }
      else {
        *(int *)local_8 = (int)(short)local_1c[0];
      }
      break;
    case 2:
      *local_18 = 1;
      break;
    case 3:
    case 5:
      *local_10 = 0;
      break;
    case 4:
      uVar1 = pl_spdtab_get_entries(param_1,local_1c);
      if ((uVar1 & 0xffff) == 0) {
        local_c = 0;
      }
      else {
        *local_10 = local_1c[0] - 1;
      }
      break;
    case 6:
      *local_10 = 1;
      break;
    case 7:
      *local_18 = 2;
      break;
    case 8:
      *local_14 = 1;
      break;
    default:
      pv_set_error_code(0x7e3);
      local_c = 0;
    }
  }
  return local_c;
}



/* ================================================================
 * Function: pv_get_pix_time
 * Address:  1001239f
 * ================================================================ */

/* __stdcall pv_get_pix_time,12 */

undefined2 pv_get_pix_time(short param_1,undefined2 param_2,ushort *param_3)

{
  uint uVar1;
  ushort local_1c [2];
  ushort *local_18;
  ushort *local_14;
  undefined2 local_10;
  ushort *local_c;
  ushort *local_8;
  
                    /* 0x1239f  508  _pv_get_pix_time@12 */
  local_14 = param_3;
  local_10 = 1;
  local_8 = param_3;
  local_c = param_3;
  local_18 = param_3;
  uVar1 = pl_cam_check(param_1);
  if ((uVar1 & 0xffff) == 0) {
    local_10 = 0;
  }
  else {
    switch(param_2) {
    case 0:
    case 3:
    case 4:
    case 5:
      uVar1 = pl_spdtab_get_time(param_1,local_1c);
      if ((uVar1 & 0xffff) == 0) {
        local_10 = 0;
      }
      else {
        *local_8 = local_1c[0];
      }
      break;
    case 1:
      local_c[0] = 1;
      local_c[1] = 0;
      break;
    case 2:
      *local_18 = 6;
      break;
    case 6:
      *local_8 = 0;
      break;
    case 7:
      *local_18 = 1;
      break;
    case 8:
      *local_14 = 1;
      break;
    default:
      pv_set_error_code(0x7e3);
      local_10 = 0;
    }
  }
  return local_10;
}



/* ================================================================
 * Function: pv_get_shtr_open_mode
 * Address:  10012491
 * ================================================================ */

/* __stdcall pv_get_shtr_open_mode,12 */

undefined2 pv_get_shtr_open_mode(short param_1,undefined2 param_2,int *param_3)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  short local_18 [2];
  int *local_14;
  int *local_10;
  undefined2 local_c;
  int *local_8;
  
                    /* 0x12491  510  _pv_get_shtr_open_mode@12 */
  local_10 = param_3;
  local_c = 1;
  local_8 = param_3;
  local_14 = param_3;
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    local_c = 0;
  }
  else {
    switch(param_2) {
    case 0:
      bVar1 = pl_shtr_get_open_mode(param_1,local_18);
      if ((CONCAT31(extraout_var,bVar1) & 0xffff) == 0) {
        pv_set_error_code(0x7e1);
        local_c = 0;
      }
      else {
        *local_8 = (int)local_18[0];
      }
      break;
    case 1:
      *local_8 = 5;
      break;
    case 2:
      *(undefined2 *)local_14 = 9;
      break;
    case 3:
      *local_8 = 0;
      break;
    case 4:
      *local_8 = 4;
      break;
    case 5:
      *local_8 = 1;
      break;
    case 6:
      *local_8 = 0;
      break;
    case 7:
      *(undefined2 *)local_14 = 2;
      break;
    case 8:
      *(undefined2 *)local_10 = 1;
      break;
    default:
      pv_set_error_code(0x7e3);
      local_c = 0;
    }
  }
  return local_c;
}



/* ================================================================
 * Function: pv_get_irq_mask
 * Address:  100125ac
 * ================================================================ */

/* __stdcall pv_get_irq_mask,12 */

undefined2 pv_get_irq_mask(short param_1,undefined2 param_2,int *param_3)

{
  short sVar1;
  uint uVar2;
  uint local_18;
  int *local_14;
  int *local_10;
  undefined2 local_c;
  int *local_8;
  
                    /* 0x125ac  507  _pv_get_irq_mask@12 */
  local_10 = param_3;
  local_c = 1;
  local_8 = param_3;
  local_14 = param_3;
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    local_c = 0;
  }
  else {
    switch(param_2) {
    case 0:
      *local_8 = (int)*(short *)(DAT_10043330 + 0x24 + param_1 * 0x2c);
      break;
    case 1:
      *local_8 = 4;
      break;
    case 2:
      *(undefined2 *)local_14 = 9;
      break;
    case 3:
      *local_8 = 0;
      break;
    case 4:
      *local_8 = 3;
      break;
    case 5:
      *local_8 = 0;
      break;
    case 6:
      *local_8 = 0;
      break;
    case 7:
      *(undefined2 *)local_14 = 2;
      break;
    case 8:
      sVar1 = pd_driver_get_pci_cap(param_1,(ushort *)&local_18);
      if (sVar1 == 0) {
        if ((local_18 & 1) == 0) {
          *(undefined2 *)local_10 = 0;
        }
        else {
          *(undefined2 *)local_10 = 1;
        }
      }
      else {
        pv_set_error_code(0x7e1);
        local_c = 0;
      }
      break;
    default:
      pv_set_error_code(0x7e3);
      local_c = 0;
    }
  }
  return local_c;
}



/* ================================================================
 * Function: pv_get_int_counts
 * Address:  100126f9
 * ================================================================ */

/* __stdcall pv_get_int_counts,12 */

undefined2 pv_get_int_counts(short param_1,undefined2 param_2,int *param_3)

{
  uint uVar1;
  int local_14;
  undefined2 local_10;
  int *local_c;
  int *local_8;
  
                    /* 0x126f9  506  _pv_get_int_counts@12 */
  local_10 = 1;
  local_8 = param_3;
  local_c = param_3;
  uVar1 = pl_cam_check(param_1);
  if ((uVar1 & 0xffff) == 0) {
    local_10 = 0;
  }
  else {
    switch(param_2) {
    case 0:
    case 3:
    case 4:
    case 5:
      uVar1 = pv_exp_get_ints(param_1,&local_14);
      if ((uVar1 & 0xffff) == 0) {
        local_10 = 0;
      }
      else {
        *local_8 = local_14;
      }
      break;
    case 1:
      *local_c = 1;
      break;
    case 2:
      *(undefined2 *)param_3 = 7;
      break;
    case 6:
      *local_8 = 0;
      break;
    case 7:
      *(undefined2 *)param_3 = 1;
      break;
    case 8:
      *(undefined2 *)param_3 = 1;
      break;
    default:
      pv_set_error_code(0x7e3);
      local_10 = 0;
    }
  }
  return local_10;
}



/* ================================================================
 * Function: pv_get_int_clear
 * Address:  100127ea
 * ================================================================ */

/* __stdcall pv_get_int_clear,8 */

undefined2 pv_get_int_clear(undefined2 param_1,undefined4 *param_2)

{
  undefined2 local_10;
  
                    /* 0x127ea  505  _pv_get_int_clear@8 */
  local_10 = 1;
  switch(param_1) {
  case 0:
  case 3:
  case 4:
  case 5:
    *(undefined2 *)param_2 = 1;
    break;
  case 1:
    *param_2 = 1;
    break;
  case 2:
    *(undefined2 *)param_2 = 0xb;
    break;
  case 6:
    *param_2 = 0;
    break;
  case 7:
    *(undefined2 *)param_2 = 4;
    break;
  case 8:
    *(undefined2 *)param_2 = 1;
    break;
  default:
    pv_set_error_code(0x7e3);
    local_10 = 0;
  }
  return local_10;
}



/* ================================================================
 * Function: pv_get_exposure_mode
 * Address:  100128a7
 * ================================================================ */

/* __stdcall pv_get_exposure_mode,12 */

undefined2 pv_get_exposure_mode(short param_1,undefined2 param_2,int *param_3)

{
  uint uVar1;
  undefined2 local_10;
  
                    /* 0x128a7  499  _pv_get_exposure_mode@12 */
  local_10 = 1;
  uVar1 = pv_cam_get_reads(param_1);
  if ((uVar1 & 0xffff) == 0) {
    local_10 = 0;
  }
  else {
    switch(param_2) {
    case 0:
      *param_3 = (int)*(short *)(DAT_10043330 + 0x26 + param_1 * 0x2c);
      break;
    case 1:
      *param_3 = *(int *)(DAT_10043338 + 0x108 + param_1 * 0x110);
      break;
    case 2:
      *(undefined2 *)param_3 = 9;
      break;
    case 3:
      *param_3 = 0;
      break;
    case 4:
      *param_3 = 6;
      break;
    case 5:
      *param_3 = 0;
      break;
    case 6:
      *param_3 = 1;
      break;
    case 7:
      *(undefined2 *)param_3 = 1;
      break;
    case 8:
      *(undefined2 *)param_3 = 1;
      break;
    default:
      pv_set_error_code(0x7e3);
      local_10 = 0;
    }
  }
  return local_10;
}



/* ================================================================
 * Function: pi_io_get_bitdepth
 * Address:  100129d0
 * ================================================================ */

/* __stdcall pi_io_get_bitdepth,12 */

undefined2 pi_io_get_bitdepth(void)

{
                    /* 0x129d0  244  _pi_io_get_bitdepth@12 */
  pv_set_error_code(0x7e0);
  return 0;
}



/* ================================================================
 * Function: pi_io_get_dir_attr
 * Address:  100129e4
 * ================================================================ */

/* __stdcall pi_io_get_dir_attr,12 */

undefined2 pi_io_get_dir_attr(void)

{
                    /* 0x129e4  246  _pi_io_get_dir_attr@12 */
  pv_set_error_code(0x7e0);
  return 0;
}



/* ================================================================
 * Function: pi_io_get_direction
 * Address:  100129f8
 * ================================================================ */

/* __stdcall pi_io_get_direction,12 */

undefined2 pi_io_get_direction(void)

{
                    /* 0x129f8  247  _pi_io_get_direction@12 */
  pv_set_error_code(0x7e0);
  return 0;
}



/* ================================================================
 * Function: pi_io_get_current_state
 * Address:  10012a0c
 * ================================================================ */

/* __stdcall pi_io_get_current_state,12 */

undefined2 pi_io_get_current_state(void)

{
                    /* 0x12a0c  245  _pi_io_get_current_state@12 */
  pv_set_error_code(0x7e0);
  return 0;
}



/* ================================================================
 * Function: pi_io_get_min_state
 * Address:  10012a20
 * ================================================================ */

/* __stdcall pi_io_get_min_state,12 */

undefined2 pi_io_get_min_state(void)

{
                    /* 0x12a20  249  _pi_io_get_min_state@12 */
  pv_set_error_code(0x7e0);
  return 0;
}



/* ================================================================
 * Function: pi_io_get_max_state
 * Address:  10012a34
 * ================================================================ */

/* __stdcall pi_io_get_max_state,12 */

undefined2 pi_io_get_max_state(void)

{
                    /* 0x12a34  248  _pi_io_get_max_state@12 */
  pv_set_error_code(0x7e0);
  return 0;
}



/* ================================================================
 * Function: pi_io_get_type
 * Address:  10012a48
 * ================================================================ */

/* __stdcall pi_io_get_type,12 */

undefined2 pi_io_get_type(void)

{
                    /* 0x12a48  250  _pi_io_get_type@12 */
  pv_set_error_code(0x7e0);
  return 0;
}



/* ================================================================
 * Function: pm_io_get_bitdepth
 * Address:  10012a60
 * ================================================================ */

/* WARNING: Removing unreachable block (ram,0x10012aad) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffff5 : 0x10012ad8 */
/* WARNING: Removing unreachable block (ram,0x10012b04) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* __stdcall pm_io_get_bitdepth,12 */

bool pm_io_get_bitdepth(short param_1,undefined4 param_2,ushort *param_3)

{
  uint uVar1;
  bool bVar2;
  byte local_10 [3];
  undefined1 local_d;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined2 local_8;
  undefined2 uStack_6;
  
                    /* 0x12a60  399  _pm_io_get_bitdepth@12 */
  _local_8 = CONCAT22(uStack_6,7);
  local_10[0] = 0x26;
  local_10[1] = 0x42;
  local_c = 0x28;
  local_b = 0;
  local_a = 1;
  local_10[2] = (byte)((uint)param_2 >> 8);
  local_d = (undefined1)param_2;
  local_a = 1;
  local_b = 0;
  local_c = 0x28;
  local_10[1] = 0x42;
  local_10[0] = 0x26;
  uVar1 = pm_cam_write_read(param_1,0x3f,7,(char *)local_10,local_10);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *param_3 = (ushort)local_10[0];
  }
  return bVar2;
}



/* ================================================================
 * Function: pm_io_get_dir_attr
 * Address:  10012b5e
 * ================================================================ */

/* WARNING: Removing unreachable block (ram,0x10012bab) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffff5 : 0x10012bd6 */
/* WARNING: Removing unreachable block (ram,0x10012c02) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* __stdcall pm_io_get_dir_attr,12 */

bool pm_io_get_dir_attr(short param_1,undefined4 param_2,ushort *param_3)

{
  uint uVar1;
  bool bVar2;
  char local_10;
  byte bStack_f;
  undefined1 uStack_e;
  undefined1 uStack_d;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined2 local_8;
  undefined2 uStack_6;
  
                    /* 0x12b5e  401  _pm_io_get_dir_attr@12 */
  _local_8 = CONCAT22(uStack_6,7);
  local_10 = '&';
  bStack_f = 0x4b;
  local_c = 0x28;
  local_b = 0;
  local_a = 2;
  uStack_e = (undefined1)((uint)param_2 >> 8);
  uStack_d = (undefined1)param_2;
  local_a = 2;
  local_b = 0;
  local_c = 0x28;
  bStack_f = 0x4b;
  local_10 = '&';
  uVar1 = pm_cam_write_read(param_1,0x3f,7,&local_10,&local_10);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *param_3 = CONCAT11(bStack_f,local_10) << 8 | (ushort)bStack_f;
  }
  return bVar2;
}



/* ================================================================
 * Function: pm_io_get_direction
 * Address:  10012c6d
 * ================================================================ */

/* WARNING: Removing unreachable block (ram,0x10012cba) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffff5 : 0x10012ce5 */
/* WARNING: Removing unreachable block (ram,0x10012d11) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* __stdcall pm_io_get_direction,12 */

bool pm_io_get_direction(short param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  bool bVar2;
  char local_10;
  undefined1 uStack_f;
  undefined1 uStack_e;
  undefined1 uStack_d;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined2 local_8;
  undefined2 uStack_6;
  
                    /* 0x12c6d  402  _pm_io_get_direction@12 */
  _local_8 = CONCAT22(uStack_6,7);
  local_10 = '&';
  uStack_f = 0x45;
  local_c = 0x28;
  local_b = 0;
  local_a = 2;
  uStack_e = (undefined1)((uint)param_2 >> 8);
  uStack_d = (undefined1)param_2;
  local_a = 2;
  local_b = 0;
  local_c = 0x28;
  uStack_f = 0x45;
  local_10 = '&';
  uVar1 = pm_cam_write_read(param_1,0x3f,7,&local_10,&local_10);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *param_3 = (CONCAT12(uStack_e,CONCAT11(uStack_f,local_10)) & 0xff) << 8 |
               CONCAT12(uStack_d,CONCAT11(uStack_e,uStack_f)) & 0xff;
  }
  return bVar2;
}



/* ================================================================
 * Function: pm_io_get_current_state
 * Address:  10012d80
 * ================================================================ */

/* __stdcall pm_io_get_current_state,12 */

undefined4 pm_io_get_current_state(short param_1,undefined4 param_2,double *param_3)

{
  ushort uVar1;
  uint uVar2;
  ushort extraout_var;
  undefined2 uVar3;
  undefined2 extraout_var_00;
  char local_120 [254];
  char acStack_22 [5];
  undefined1 uStack_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  undefined1 local_18;
  undefined1 local_17;
  ushort local_14;
  undefined2 uStack_12;
  short local_10 [2];
  uint local_c;
  undefined2 local_8;
  
                    /* 0x12d80  400  _pm_io_get_current_state@12 */
  local_c = CONCAT22(local_c._2_2_,10);
  local_8 = 1;
  uVar1 = pl_get_param(param_1,0x4020212,7,(uint *)local_10);
  if (uVar1 == 0) {
    local_8 = 0;
    uVar3 = 0;
  }
  else if ((local_10[0] == 1) || (local_10[0] == 2)) {
    acStack_22[2] = 0x26;
    acStack_22[3] = 0x46;
    acStack_22[4] = (char)((uint)param_2 >> 8);
    uStack_1d = (undefined1)param_2;
    local_1c = 0x47;
    local_1b = acStack_22[4];
    local_1a = (undefined1)param_2;
    local_19 = 0x28;
    local_18 = 0;
    local_17 = 4;
    if (10 < (local_c & 0xffff)) {
      sprintf(local_120,s_PVLIB__SIZE_ERROR_in____s___writ_10038bec,10,local_c & 0xffff);
    }
    if (10 < CONCAT11(acStack_22[local_c & 0xffff],acStack_22[(local_c & 0xffff) + 1])) {
      sprintf(local_120,s_PVLIB__SIZE_ERROR_in____s___read_10038c3c,10,
              (uint)CONCAT11(acStack_22[local_c & 0xffff],acStack_22[(local_c & 0xffff) + 1]));
    }
    uVar2 = pm_cam_write_read(param_1,0x3f,(ushort)local_c,acStack_22 + 2,acStack_22 + 2);
    if ((uVar2 & 0xffff) == 0) {
      return 0;
    }
    uVar1 = CONCAT11(acStack_22[3],acStack_22[2]) << 8 | (ushort)(byte)acStack_22[3];
    _local_14 = CONCAT22(uStack_12,uVar1);
    if (uVar1 == 0) {
      uVar2 = (CONCAT12(local_1c,CONCAT11(uStack_1d,acStack_22[4])) & 0xff) << 8 |
              CONCAT12(local_1b,CONCAT11(local_1c,uStack_1d)) & 0xff;
      *param_3 = (double)uVar2;
    }
    else {
      local_8 = 0;
      pv_set_error_code(0x7e6);
      uVar2 = (uint)extraout_var << 0x10;
    }
    uVar3 = (undefined2)(uVar2 >> 0x10);
  }
  else {
    local_8 = 0;
    pv_set_error_code(0x7e5);
    uVar3 = extraout_var_00;
  }
  return CONCAT22(uVar3,local_8);
}



/* ================================================================
 * Function: pm_io_get_min_state
 * Address:  10012f40
 * ================================================================ */

/* WARNING: Removing unreachable block (ram,0x10012fb4) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffec : 0x10012fe0 */
/* WARNING: Removing unreachable block (ram,0x1001300c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* __stdcall pm_io_get_min_state,12 */

undefined4 pm_io_get_min_state(short param_1,undefined4 param_2,double *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  ushort extraout_var;
  ushort uVar3;
  char local_1c;
  byte bStack_1b;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 local_14;
  undefined1 local_13;
  ushort local_10;
  undefined2 uStack_e;
  undefined2 local_c;
  undefined2 uStack_a;
  undefined2 local_8;
  
                    /* 0x12f40  404  _pm_io_get_min_state@12 */
  _local_c = CONCAT22(uStack_a,10);
  local_1c = '&';
  bStack_1b = 0x46;
  local_18 = 0x43;
  local_15 = 0x28;
  local_14 = 0;
  local_13 = 4;
  local_8 = 1;
  uStack_1a = (undefined1)((uint)param_2 >> 8);
  uStack_19 = (undefined1)param_2;
  local_17 = uStack_1a;
  local_16 = (undefined1)param_2;
  local_8 = 1;
  local_13 = 4;
  local_14 = 0;
  local_15 = 0x28;
  local_18 = 0x43;
  bStack_1b = 0x46;
  local_1c = '&';
  uVar1 = pm_cam_write_read(param_1,0x3f,10,&local_1c,&local_1c);
  if ((uVar1 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar3 = CONCAT11(bStack_1b,local_1c) << 8 | (ushort)bStack_1b;
    _local_10 = CONCAT22(uStack_e,uVar3);
    if (uVar3 == 0) {
      uVar1 = CONCAT12(local_17,CONCAT11(local_18,uStack_19)) & 0xff;
      *param_3 = (double)((CONCAT12(local_18,CONCAT11(uStack_19,uStack_1a)) & 0xff) << 8 | uVar1);
    }
    else if (uVar3 == 1) {
      uVar1 = CONCAT12(local_17,CONCAT11(local_18,uStack_19)) & 0xff;
      *param_3 = (double)((CONCAT12(local_18,CONCAT11(uStack_19,uStack_1a)) & 0xff) << 8 | uVar1) /
                 _DAT_100260d0;
    }
    else {
      local_8 = 0;
      pv_set_error_code(0x7e6);
      uVar1 = (uint)extraout_var << 0x10;
    }
    uVar2 = CONCAT22((short)(uVar1 >> 0x10),local_8);
  }
  return uVar2;
}



/* ================================================================
 * Function: pm_io_get_max_state
 * Address:  1001310f
 * ================================================================ */

/* WARNING: Removing unreachable block (ram,0x10013183) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffec : 0x100131af */
/* WARNING: Removing unreachable block (ram,0x100131db) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* __stdcall pm_io_get_max_state,12 */

undefined4 pm_io_get_max_state(short param_1,undefined4 param_2,double *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  ushort extraout_var;
  ushort uVar3;
  char local_1c;
  byte bStack_1b;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 local_14;
  undefined1 local_13;
  ushort local_10;
  undefined2 uStack_e;
  undefined2 local_c;
  undefined2 uStack_a;
  undefined2 local_8;
  
                    /* 0x1310f  403  _pm_io_get_max_state@12 */
  _local_c = CONCAT22(uStack_a,10);
  local_1c = '&';
  bStack_1b = 0x46;
  local_18 = 0x44;
  local_15 = 0x28;
  local_14 = 0;
  local_13 = 4;
  local_8 = 1;
  uStack_1a = (undefined1)((uint)param_2 >> 8);
  uStack_19 = (undefined1)param_2;
  local_17 = uStack_1a;
  local_16 = (undefined1)param_2;
  local_8 = 1;
  local_13 = 4;
  local_14 = 0;
  local_15 = 0x28;
  local_18 = 0x44;
  bStack_1b = 0x46;
  local_1c = '&';
  uVar1 = pm_cam_write_read(param_1,0x3f,10,&local_1c,&local_1c);
  if ((uVar1 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar3 = CONCAT11(bStack_1b,local_1c) << 8 | (ushort)bStack_1b;
    _local_10 = CONCAT22(uStack_e,uVar3);
    if (uVar3 == 0) {
      uVar1 = CONCAT12(local_17,CONCAT11(local_18,uStack_19)) & 0xff;
      *param_3 = (double)((CONCAT12(local_18,CONCAT11(uStack_19,uStack_1a)) & 0xff) << 8 | uVar1);
    }
    else if (uVar3 == 1) {
      uVar1 = CONCAT12(local_17,CONCAT11(local_18,uStack_19)) & 0xff;
      *param_3 = (double)((CONCAT12(local_18,CONCAT11(uStack_19,uStack_1a)) & 0xff) << 8 | uVar1) /
                 _DAT_100260d0;
    }
    else {
      local_8 = 0;
      pv_set_error_code(0x7e6);
      uVar1 = (uint)extraout_var << 0x10;
    }
    uVar2 = CONCAT22((short)(uVar1 >> 0x10),local_8);
  }
  return uVar2;
}



/* ================================================================
 * Function: pm_io_get_type
 * Address:  100132de
 * ================================================================ */

/* WARNING: Removing unreachable block (ram,0x1001332b) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffff5 : 0x10013356 */
/* WARNING: Removing unreachable block (ram,0x10013382) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* __stdcall pm_io_get_type,12 */

bool pm_io_get_type(short param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  bool bVar2;
  char local_10;
  undefined1 uStack_f;
  undefined1 uStack_e;
  undefined1 uStack_d;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined2 local_8;
  undefined2 uStack_6;
  
                    /* 0x132de  405  _pm_io_get_type@12 */
  _local_8 = CONCAT22(uStack_6,7);
  local_10 = '&';
  uStack_f = 0x46;
  local_c = 0x28;
  local_b = 0;
  local_a = 2;
  uStack_e = (undefined1)((uint)param_2 >> 8);
  uStack_d = (undefined1)param_2;
  local_a = 2;
  local_b = 0;
  local_c = 0x28;
  uStack_f = 0x46;
  local_10 = '&';
  uVar1 = pm_cam_write_read(param_1,0x3f,7,&local_10,&local_10);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *param_3 = (CONCAT12(uStack_e,CONCAT11(uStack_f,local_10)) & 0xff) << 8 |
               CONCAT12(uStack_d,CONCAT11(uStack_e,uStack_f)) & 0xff;
  }
  return bVar2;
}



/* ================================================================
 * Function: pv_io_get_bitdepth
 * Address:  10013400
 * ================================================================ */

/* __stdcall pv_io_get_bitdepth,12 */

uint pv_io_get_bitdepth(short param_1,undefined2 param_2,ushort *param_3)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined3 extraout_var;
  undefined2 extraout_var_00;
  
                    /* 0x13400  517  _pv_io_get_bitdepth@12 */
  uVar3 = pl_cam_check(param_1);
  if ((uVar3 & 0xffff) == 0) {
    uVar3 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    bVar1 = pm_io_get_bitdepth(param_1,CONCAT22((short)((uint)DAT_10043330 >> 0x10),param_2),param_3
                              );
    uVar3 = CONCAT22((short)((uint3)extraout_var >> 8),(short)CONCAT31(extraout_var,bVar1));
  }
  else {
    uVar2 = pi_io_get_bitdepth();
    uVar3 = CONCAT22(extraout_var_00,uVar2);
  }
  return uVar3;
}



/* ================================================================
 * Function: pv_io_get_dir_attr
 * Address:  10013470
 * ================================================================ */

/* __stdcall pv_io_get_dir_attr,12 */

uint pv_io_get_dir_attr(short param_1,undefined2 param_2,ushort *param_3)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined3 extraout_var;
  undefined2 extraout_var_00;
  
                    /* 0x13470  519  _pv_io_get_dir_attr@12 */
  uVar3 = pl_cam_check(param_1);
  if ((uVar3 & 0xffff) == 0) {
    uVar3 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    bVar1 = pm_io_get_dir_attr(param_1,CONCAT22((short)((uint)DAT_10043330 >> 0x10),param_2),param_3
                              );
    uVar3 = CONCAT22((short)((uint3)extraout_var >> 8),(short)CONCAT31(extraout_var,bVar1));
  }
  else {
    uVar2 = pi_io_get_dir_attr();
    uVar3 = CONCAT22(extraout_var_00,uVar2);
  }
  return uVar3;
}



/* ================================================================
 * Function: pv_io_get_direction
 * Address:  100134e0
 * ================================================================ */

/* __stdcall pv_io_get_direction,12 */

uint pv_io_get_direction(short param_1,undefined2 param_2,uint *param_3)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined3 extraout_var;
  undefined2 extraout_var_00;
  
                    /* 0x134e0  520  _pv_io_get_direction@12 */
  uVar3 = pl_cam_check(param_1);
  if ((uVar3 & 0xffff) == 0) {
    uVar3 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    bVar1 = pm_io_get_direction(param_1,CONCAT22((short)((uint)DAT_10043330 >> 0x10),param_2),
                                param_3);
    uVar3 = CONCAT22((short)((uint3)extraout_var >> 8),(short)CONCAT31(extraout_var,bVar1));
  }
  else {
    uVar2 = pi_io_get_direction();
    uVar3 = CONCAT22(extraout_var_00,uVar2);
  }
  return uVar3;
}



/* ================================================================
 * Function: pv_io_get_headers
 * Address:  10013550
 * ================================================================ */

/* __stdcall pv_io_get_headers,8 */

bool pv_io_get_headers(short param_1,undefined4 *param_2)

{
  uint uVar1;
  bool bVar2;
  
                    /* 0x13550  521  _pv_io_get_headers@8 */
  uVar1 = pl_cam_check(param_1);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *param_2 = *(undefined4 *)(DAT_10043334 + 0x20 + param_1 * 0x24);
  }
  return bVar2;
}



/* ================================================================
 * Function: pv_io_get_current_state
 * Address:  10013588
 * ================================================================ */

/* __stdcall pv_io_get_current_state,12 */

uint pv_io_get_current_state(short param_1,undefined2 param_2,double *param_3)

{
  undefined2 uVar1;
  uint uVar2;
  undefined2 extraout_var;
  
                    /* 0x13588  518  _pv_io_get_current_state@12 */
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    uVar2 = pm_io_get_current_state
                      (param_1,CONCAT22((short)((uint)DAT_10043330 >> 0x10),param_2),param_3);
  }
  else {
    uVar1 = pi_io_get_current_state();
    uVar2 = CONCAT22(extraout_var,uVar1);
  }
  return uVar2;
}



/* ================================================================
 * Function: pv_io_get_min_state
 * Address:  100135f8
 * ================================================================ */

/* __stdcall pv_io_get_min_state,12 */

uint pv_io_get_min_state(short param_1,undefined2 param_2,double *param_3)

{
  undefined2 uVar1;
  uint uVar2;
  undefined2 extraout_var;
  
                    /* 0x135f8  523  _pv_io_get_min_state@12 */
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    uVar2 = pm_io_get_min_state(param_1,CONCAT22((short)((uint)DAT_10043330 >> 0x10),param_2),
                                param_3);
  }
  else {
    uVar1 = pi_io_get_min_state();
    uVar2 = CONCAT22(extraout_var,uVar1);
  }
  return uVar2;
}



/* ================================================================
 * Function: pv_io_get_max_state
 * Address:  10013668
 * ================================================================ */

/* __stdcall pv_io_get_max_state,12 */

uint pv_io_get_max_state(short param_1,undefined2 param_2,double *param_3)

{
  undefined2 uVar1;
  uint uVar2;
  undefined2 extraout_var;
  
                    /* 0x13668  522  _pv_io_get_max_state@12 */
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    uVar2 = pm_io_get_max_state(param_1,CONCAT22((short)((uint)DAT_10043330 >> 0x10),param_2),
                                param_3);
  }
  else {
    uVar1 = pi_io_get_max_state();
    uVar2 = CONCAT22(extraout_var,uVar1);
  }
  return uVar2;
}



/* ================================================================
 * Function: pv_io_get_type
 * Address:  100136d8
 * ================================================================ */

/* __stdcall pv_io_get_type,12 */

uint pv_io_get_type(short param_1,undefined2 param_2,uint *param_3)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined3 extraout_var;
  undefined2 extraout_var_00;
  
                    /* 0x136d8  524  _pv_io_get_type@12 */
  uVar3 = pl_cam_check(param_1);
  if ((uVar3 & 0xffff) == 0) {
    uVar3 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    bVar1 = pm_io_get_type(param_1,CONCAT22((short)((uint)DAT_10043330 >> 0x10),param_2),param_3);
    uVar3 = CONCAT22((short)((uint3)extraout_var >> 8),(short)CONCAT31(extraout_var,bVar1));
  }
  else {
    uVar2 = pi_io_get_type();
    uVar3 = CONCAT22(extraout_var_00,uVar2);
  }
  return uVar3;
}



/* ================================================================
 * Function: pi_pvcam_load_library
 * Address:  10013750
 * ================================================================ */

/* __stdcall pi_pvcam_load_library,0 */

int pi_pvcam_load_library(void)

{
  bool bVar1;
  int iVar2;
  short local_c;
  short local_8 [2];
  
                    /* 0x13750  252  _pi_pvcam_load_library@0 */
  pl_cam_get_total(local_8);
  local_c = 0;
  do {
    bVar1 = false;
    if (local_8[0] <= local_c) {
LAB_100137ad:
      if (bVar1) {
        iVar2 = FUN_10025220();
      }
      else {
        iVar2 = 1;
      }
      return iVar2;
    }
    if (*(short *)(DAT_10043330 + 0x14 + local_c * 0x2c) != 0) {
      bVar1 = true;
      goto LAB_100137ad;
    }
    local_c = local_c + 1;
  } while( true );
}



/* ================================================================
 * Function: pi_pvcam_unload_library
 * Address:  100137cb
 * ================================================================ */

/* __stdcall pi_pvcam_unload_library,0 */

BOOL pi_pvcam_unload_library(void)

{
  BOOL BVar1;
  undefined4 in_ECX;
  
                    /* 0x137cb  253  _pi_pvcam_unload_library@0 */
  BVar1 = FUN_100253c9(in_ECX);
  return BVar1;
}



/* ================================================================
 * Function: pl_pvcam_get_ver
 * Address:  100137e0
 * ================================================================ */

undefined4 pl_pvcam_get_ver(short *param_1)

{
                    /* 0x137e0  80  pl_pvcam_get_ver */
  pv_set_error_code(0);
  *param_1 = 0x200;
  *param_1 = *param_1 + 0x70;
  *param_1 = *param_1 + 2;
  return CONCAT22((short)((uint)param_1 >> 0x10),1);
}



/* ================================================================
 * Function: pl_pvcam_init
 * Address:  1001381a
 * ================================================================ */

int pl_pvcam_init(void)

{
  short sVar1;
  ushort extraout_var;
  uint uVar2;
  int iVar3;
  
                    /* 0x1381a  81  pl_pvcam_init */
  pv_set_error_code(0);
  if (DAT_10043328 == 0) {
    DAT_10043328 = 1;
    sVar1 = pv_init_sys();
    if ((((sVar1 != 0) && (sVar1 = pv_init_mem(), sVar1 != 0)) &&
        (sVar1 = pv_init_util(), sVar1 != 0)) &&
       (((uVar2 = pv_cam_init_comm(), (uVar2 & 0xffff) != 0 &&
         (sVar1 = pv_error_init_rept(), sVar1 != 0)) &&
        ((uVar2 = pv_cam_init_cfg(), (uVar2 & 0xffff) != 0 &&
         (iVar3 = pi_pvcam_load_library(), iVar3 != 0)))))) {
      return CONCAT22((short)((uint)iVar3 >> 0x10),1);
    }
    iVar3 = 0;
  }
  else {
    pv_set_error_code(0x7d1);
    iVar3 = (uint)extraout_var << 0x10;
  }
  return iVar3;
}



/* ================================================================
 * Function: pl_pvcam_uninit
 * Address:  100138b0
 * ================================================================ */

int pl_pvcam_uninit(void)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  ushort extraout_var_01;
  int iVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  BOOL BVar5;
  undefined2 extraout_var_02;
  ushort extraout_var_03;
  
                    /* 0x138b0  82  pl_pvcam_uninit */
  pv_set_error_code(0);
  if (DAT_10043328 == 0) {
    pv_set_error_code(0x7d2);
    iVar4 = (uint)extraout_var_01 << 0x10;
  }
  else {
    sVar2 = 0;
    bVar1 = pv_cam_uninit_cfg();
    if ((CONCAT31(extraout_var,bVar1) & 0xffff) != 0) {
      sVar2 = pl_error_code();
    }
    sVar3 = pv_error_uninit_rept();
    if ((sVar3 != 0) && (sVar2 == 0)) {
      sVar2 = pl_error_code();
    }
    bVar1 = pv_cam_uninit_comm();
    if (((CONCAT31(extraout_var_00,bVar1) & 0xffff) != 0) && (sVar2 == 0)) {
      sVar2 = pl_error_code();
    }
    sVar3 = pv_uninit_util();
    if ((sVar3 != 0) && (sVar2 == 0)) {
      sVar2 = pl_error_code();
    }
    sVar3 = pv_uninit_mem();
    if ((sVar3 != 0) && (sVar2 == 0)) {
      sVar2 = pl_error_code();
    }
    sVar3 = pv_uninit_sys();
    if ((sVar3 != 0) && (sVar2 == 0)) {
      sVar2 = pl_error_code();
    }
    BVar5 = pi_pvcam_unload_library();
    if ((BVar5 != 0) && (sVar2 == 0)) {
      sVar2 = pl_error_code();
      BVar5 = CONCAT22(extraout_var_02,sVar2);
    }
    DAT_10043328 = 0;
    if (sVar2 == 0) {
      iVar4 = CONCAT22((short)((uint)BVar5 >> 0x10),1);
    }
    else {
      pv_set_error_code(sVar2);
      iVar4 = (uint)extraout_var_03 << 0x10;
    }
  }
  return iVar4;
}



/* ================================================================
 * Function: pi_local_set
 * Address:  100139e0
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* __stdcall pi_local_set,16 */

uint pi_local_set(short param_1,uint param_2,uint *param_3,undefined2 *param_4)

{
  undefined2 *puVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  ushort extraout_var;
  ushort extraout_var_00;
  ushort extraout_var_01;
  uint uVar5;
  undefined2 local_60 [2];
  ushort local_5c;
  int local_58;
  uint local_54;
  short local_4c;
  undefined1 local_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  uint local_10;
  uint local_c;
  uint local_8;
  
                    /* 0x139e0  251  _pi_local_set@16 */
  uVar5 = local_54;
  local_54 = local_54 & 0xffff0000;
  uVar2 = local_54;
  local_60[0] = 0;
  local_58 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
  local_54._2_2_ = SUB42(uVar5,2);
  local_54 = uVar2;
  if (param_2 < 0x6030005) {
    if (param_2 == 0x6030004) {
      uVar3 = (ushort)*param_3;
      param_2 = (uint)DAT_10043338;
      if (uVar3 < (ushort)DAT_10043338[param_1 * 0x88 + 0x1b]) {
        param_2 = CONCAT22((short)((uint)DAT_10043338 >> 0x10),uVar3);
        DAT_10043334[param_1 * 0x12 + 8] = uVar3;
      }
      local_54 = 1;
      *param_4 = 1;
      uVar2 = local_54;
    }
    else if (param_2 < 0x4020213) {
      if (param_2 == 0x4020212) {
        local_54 = CONCAT22(local_54._2_2_,1);
        local_10 = ftol();
        uVar3 = pl_get_param(param_1,0x4020212,8,(uint *)local_60);
        if (uVar3 == 0) {
          local_54 = 0;
        }
        else {
          uVar5 = pi_set_param(param_1,0x5b,&local_10);
          if ((uVar5 & 0xffff) == 0) {
            local_54 = 0;
          }
        }
        *param_4 = 1;
        param_2 = (uint)(undefined2 *)0x0;
        uVar2 = local_54;
      }
      else if (param_2 == 0x1020201) {
        param_2 = pl_spdtab_set_num(param_1,(ushort)*param_3);
        local_54 = param_2 & 0xffff;
        *param_4 = 1;
        uVar2 = local_54;
      }
      else if (param_2 == 0x10300a6) {
        local_54 = CONCAT22(local_54._2_2_,1);
        uVar5 = pi_set_param(param_1,0xa6,param_3);
        if ((uVar5 & 0xffff) == 0) {
          local_54 = 0;
        }
        else {
          pl_get_param(param_1,0x10300a6,0,param_3);
        }
        *(short *)(DAT_10043330 + 0x2a + param_1 * 0x2c) = (short)*param_3;
        *param_4 = 1;
        param_2 = (uint)param_4;
        uVar2 = local_54;
      }
    }
    else if (param_2 == 0x6020219) {
      local_54 = CONCAT22(local_54._2_2_,1);
      local_8 = (uint)(ushort)*param_3;
      uVar5 = pi_set_param(param_1,0x13f,&local_8);
      if ((undefined2 *)(uVar5 & 0xffff) == (undefined2 *)0x0) {
        local_54 = 0;
      }
      *param_4 = 1;
      param_2 = uVar5 & 0xffff;
      uVar2 = local_54;
    }
    else if (param_2 == 0x6030001) {
      local_5c = (ushort)*param_3;
      param_2 = pi_exp_set_time_seq(param_1,local_5c);
      local_54 = param_2 & 0xffff;
      *param_4 = 1;
      uVar2 = local_54;
    }
  }
  else if (param_2 < 0x902020a) {
    if (param_2 == 0x9020209) {
      local_4c = (short)*param_3;
      uVar5 = pl_shtr_set_open_mode(param_1,local_4c);
      local_54 = uVar5 & 0xffff;
      *param_4 = 1;
      param_2 = (uint)param_4;
      uVar2 = local_54;
    }
    else if (param_2 == 0x90200d9) {
      local_8 = *param_3;
      param_2 = (**(code **)(local_58 + 0x24))(local_58,0xd9,local_8);
      local_54 = CONCAT22(local_54._2_2_,(short)param_2);
      if ((param_2 & 0xffff) != 0) {
        param_2 = pi_convert_timing_enums(param_1);
        local_54 = param_2 & 0xffff;
      }
      *param_4 = 1;
      uVar2 = local_54;
    }
    else if (param_2 == 0x90200f7) {
      param_2 = *param_3;
      if (((undefined2 *)param_2 == (undefined2 *)0x0) || ((undefined2 *)0x3 < param_2)) {
        local_54 = 0;
      }
      else {
        param_2 = (**(code **)(local_58 + 0x24))(local_58,0xf7,*param_3 - 1);
        local_54 = param_2 & 0xffff;
      }
      *param_4 = 1;
      uVar2 = local_54;
    }
  }
  else if (param_2 == 0x902020c) {
    local_54 = CONCAT22(local_54._2_2_,1);
    local_c = *param_3;
    iVar4 = (**(code **)(local_58 + 0x54))(local_58,0xe0,local_48);
    if (iVar4 == 0) {
      local_28 = 0;
      uStack_24 = 0;
    }
    if ((local_c == 1) ||
       ((local_c == 3 && ((double)CONCAT44(uStack_24,local_28) != _DAT_100260d8)))) {
      (**(code **)(local_58 + 0xd4))(local_58,2);
      param_2 = (uint)extraout_var << 0x10;
      if ((double)CONCAT44(uStack_24,local_28) != _DAT_100260d8) {
        param_2 = (**(code **)(local_58 + 0x24))(local_58,0xe0,(local_c != 1) + '\x01');
      }
    }
    else if (local_c == 8) {
      param_2 = (**(code **)(local_58 + 0xd4))(local_58,4);
    }
    else if (local_c == 10) {
      param_2 = (**(code **)(local_58 + 0xd4))(local_58,8);
    }
    else if ((local_c == 0) ||
            ((local_c == 2 && ((double)CONCAT44(uStack_24,local_28) != _DAT_100260d8)))) {
      (**(code **)(local_58 + 0xd4))(local_58,1);
      param_2 = (uint)extraout_var_00 << 0x10;
      if ((double)CONCAT44(uStack_24,local_28) != _DAT_100260d8) {
        param_2 = (**(code **)(local_58 + 0x24))(local_58,0xe0,(local_c != 0) + '\x01');
      }
    }
    else if (local_c == 9) {
      param_2 = (**(code **)(local_58 + 0xd4))(local_58,3);
    }
    else {
      local_54 = local_54 & 0xffff0000;
      pv_set_error_code(0x7e2);
      param_2 = (uint)extraout_var_01 << 0x10;
    }
    puVar1 = DAT_10043334;
    if ((local_54 & 0xffff) != 0) {
      DAT_10043334[param_1 * 0x12 + 2] = (undefined2)local_c;
      param_2 = (uint)puVar1;
    }
    *param_4 = 1;
    uVar2 = local_54;
  }
  else if (param_2 == 0xb02021d) {
    local_54 = CONCAT22(local_54._2_2_,1);
    local_8 = ((short)*param_3 != 0) + 1;
    uVar5 = pi_set_param(param_1,0x13d,&local_8);
    param_2 = uVar5 & 0xffff;
    if ((undefined2 *)param_2 == (undefined2 *)0x0) {
      local_54 = 0;
    }
    *param_4 = 1;
    uVar2 = local_54;
  }
  local_54 = uVar2;
  return CONCAT22((short)(param_2 >> 0x10),(undefined2)local_54);
}



/* ================================================================
 * Function: pi_set_param
 * Address:  10013ee1
 * ================================================================ */

/* __stdcall pi_set_param,12 */

undefined4 pi_set_param(short param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  undefined2 extraout_var_07;
  undefined2 extraout_var_08;
  undefined2 extraout_var_09;
  undefined2 extraout_var_10;
  undefined2 extraout_var_11;
  undefined2 uVar4;
  short local_44;
  undefined1 local_3c [4];
  undefined4 local_38;
  int local_c;
  
                    /* 0x13ee1  261  _pi_set_param@12 */
  uVar1 = pi_set_param_2(param_1,param_2,param_3);
  if ((uVar1 & 0xffff) == 1) {
    iVar2 = 0;
    if (param_2 == 0x1020200) {
      iVar2 = *(short *)(&DAT_10043d50 + param_1 * 0x98) * 0xc;
      *(short *)(&DAT_10043cc4 + iVar2 + param_1 * 0x98) = (short)*param_3;
    }
    uVar3 = CONCAT22((short)((uint)iVar2 >> 0x10),(short)uVar1);
  }
  else {
    if (*(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c) == 0) {
      pv_set_error_code(0x7df);
      local_44 = 0;
      uVar4 = extraout_var_11;
    }
    else {
      iVar2 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
      uVar1 = param_2 & 0xffff;
      local_44 = (**(code **)(iVar2 + 0x54))(iVar2,uVar1,local_3c);
      if (local_44 == 0) {
        pv_set_error_code(0x7e0);
        local_44 = 0;
        uVar4 = extraout_var_10;
      }
      else if (local_c == 2) {
        switch(local_38) {
        case 1:
          (**(code **)(iVar2 + 0x24))(iVar2,uVar1,(int)(short)*param_3);
          uVar4 = extraout_var_02;
          break;
        case 2:
          (**(code **)(iVar2 + 0x24))(iVar2,uVar1,*param_3);
          uVar4 = extraout_var_04;
          break;
        default:
          local_44 = 0;
          pv_set_error_code(0x7e2);
          uVar4 = extraout_var_08;
          break;
        case 4:
          (**(code **)(iVar2 + 0x20))(iVar2,uVar1,*param_3,param_3[1]);
          uVar4 = extraout_var;
          break;
        case 5:
          (**(code **)(iVar2 + 0x24))(iVar2,uVar1,(char)*param_3);
          uVar4 = extraout_var_01;
          break;
        case 6:
          (**(code **)(iVar2 + 0x24))(iVar2,uVar1,(short)*param_3);
          uVar4 = extraout_var_03;
          break;
        case 7:
          (**(code **)(iVar2 + 0x24))(iVar2,uVar1,*param_3);
          uVar4 = extraout_var_05;
          break;
        case 9:
          (**(code **)(iVar2 + 0x24))(iVar2,uVar1,*param_3);
          uVar4 = extraout_var_06;
          break;
        case 0xb:
          (**(code **)(iVar2 + 0x24))(iVar2,uVar1,(short)*param_3);
          uVar4 = extraout_var_07;
          break;
        case 0xc:
          (**(code **)(iVar2 + 0x24))(iVar2,uVar1,(int)(char)*param_3);
          uVar4 = extraout_var_00;
        }
      }
      else {
        pv_set_error_code(0x7f1);
        local_44 = 0;
        uVar4 = extraout_var_09;
      }
    }
    uVar3 = CONCAT22(uVar4,local_44);
  }
  return uVar3;
}



/* ================================================================
 * Function: pi_set_param_2
 * Address:  10014133
 * ================================================================ */

/* __stdcall pi_set_param_2,12 */

undefined4 pi_set_param_2(short param_1,uint param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  ushort extraout_var;
  ushort extraout_var_00;
  undefined2 uVar3;
  undefined2 extraout_var_01;
  uint uVar4;
  short local_c [2];
  undefined4 local_8;
  
                    /* 0x14133  262  _pi_set_param_2@12 */
  local_8 = local_8 & 0xffff0000;
  if (*(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c) == 0) {
    pv_set_error_code(0x7df);
    uVar3 = extraout_var_01;
  }
  else {
    iVar1 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
    local_c[0] = 0;
    uVar2 = pi_local_set(param_1,param_2,param_3,local_c);
    local_8 = CONCAT22(local_8._2_2_,(short)uVar2);
    uVar2 = (uint)local_c[0];
    if (uVar2 == 0) {
      uVar4 = param_2 & 0xffff;
      uVar2 = param_2 >> 0x18;
      switch(uVar2) {
      case 1:
        uVar2 = (**(code **)(iVar1 + 0x24))(iVar1,uVar4,(int)(short)*param_3);
        local_8 = CONCAT22(local_8._2_2_,(short)uVar2);
        break;
      case 2:
        uVar2 = (**(code **)(iVar1 + 0x24))(iVar1,uVar4,*param_3);
        local_8 = CONCAT22(local_8._2_2_,(short)uVar2);
        break;
      case 4:
        uVar2 = (**(code **)(iVar1 + 0x20))(iVar1,uVar4,*param_3,param_3[1]);
        local_8 = CONCAT22(local_8._2_2_,(short)uVar2);
        break;
      case 5:
        uVar2 = (**(code **)(iVar1 + 0x24))(iVar1,uVar4,(char)*param_3);
        local_8 = CONCAT22(local_8._2_2_,(short)uVar2);
        break;
      case 6:
        uVar2 = (**(code **)(iVar1 + 0x24))(iVar1,uVar4,(short)*param_3);
        local_8 = CONCAT22(local_8._2_2_,(short)uVar2);
        break;
      case 7:
        uVar2 = (**(code **)(iVar1 + 0x24))(iVar1,uVar4,*param_3);
        local_8 = CONCAT22(local_8._2_2_,(short)uVar2);
        break;
      case 9:
        uVar2 = (**(code **)(iVar1 + 0x24))(iVar1,uVar4,*param_3);
        local_8 = CONCAT22(local_8._2_2_,(short)uVar2);
        break;
      case 0xb:
        uVar2 = (**(code **)(iVar1 + 0x24))(iVar1,uVar4,(short)*param_3);
        local_8 = CONCAT22(local_8._2_2_,(short)uVar2);
        break;
      case 0xc:
        uVar2 = (**(code **)(iVar1 + 0x24))(iVar1,uVar4,(int)(char)*param_3);
        local_8 = CONCAT22(local_8._2_2_,(short)uVar2);
      }
      switch(local_8 & 0xffff) {
      case 0:
      case 3:
        local_8 = (uint)local_8._2_2_ << 0x10;
        pv_set_error_code(0x7e0);
        uVar2 = (uint)extraout_var << 0x10;
        break;
      case 1:
        local_8 = 1;
        break;
      case 2:
        local_8 = (uint)local_8._2_2_ << 0x10;
        pv_set_error_code(0x7e2);
        uVar2 = (uint)extraout_var_00 << 0x10;
      }
    }
    uVar3 = (undefined2)(uVar2 >> 0x10);
  }
  return CONCAT22(uVar3,(undefined2)local_8);
}



/* ================================================================
 * Function: pl_set_param
 * Address:  10014380
 * ================================================================ */

uint pl_set_param(short param_1,uint param_2,uint *param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined2 extraout_var;
  undefined2 local_8;
  
                    /* 0x14380  116  pl_set_param */
  local_8 = 1;
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = pv_set_param(param_1,param_2,(short *)param_3);
    uVar2 = (uint)uVar1;
    if (uVar2 == 0) {
      if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
        local_8 = pm_set_param(param_1,param_2,(ushort *)param_3);
        uVar2 = CONCAT22(extraout_var,local_8);
      }
      else {
        uVar2 = pi_set_param(param_1,param_2,param_3);
        local_8 = (undefined2)uVar2;
      }
    }
    uVar2 = CONCAT22((short)(uVar2 >> 0x10),local_8);
  }
  return uVar2;
}



/* ================================================================
 * Function: pm_set_exp_res_index
 * Address:  10014410
 * ================================================================ */

/* __stdcall pm_set_exp_res_index,8 */

int pm_set_exp_res_index(short param_1,ushort param_2)

{
  uint uVar1;
  int iVar2;
  ushort extraout_var;
  
                    /* 0x14410  416  _pm_set_exp_res_index@8 */
  uVar1 = pv_cam_get_reads(param_1);
  if ((uVar1 & 0xffff) == 0) {
    iVar2 = 0;
  }
  else if (param_2 < *(ushort *)(DAT_10043338 + 0x36 + param_1 * 0x110)) {
    uVar1 = (uint)DAT_10043338 >> 0x10;
    *(ushort *)(DAT_10043334 + 0x10 + param_1 * 0x24) = param_2;
    iVar2 = CONCAT22((short)uVar1,1);
  }
  else {
    pv_set_error_code(0xbdb);
    iVar2 = (uint)extraout_var << 0x10;
  }
  return iVar2;
}



/* ================================================================
 * Function: pm_set_io_addr
 * Address:  1001447d
 * ================================================================ */

/* __stdcall pm_set_io_addr,8 */

int pm_set_io_addr(short param_1,ushort param_2)

{
  uint uVar1;
  int iVar2;
  ushort extraout_var;
  
                    /* 0x1447d  418  _pm_set_io_addr@8 */
  uVar1 = pv_cam_get_reads(param_1);
  if ((uVar1 & 0xffff) == 0) {
    iVar2 = 0;
  }
  else if (param_2 < *(ushort *)(DAT_10043338 + 0x40 + param_1 * 0x110)) {
    uVar1 = (uint)DAT_10043338 >> 0x10;
    *(ushort *)(DAT_10043334 + 0x12 + param_1 * 0x24) = param_2;
    iVar2 = CONCAT22((short)uVar1,1);
  }
  else {
    pv_set_error_code(0x7e7);
    iVar2 = (uint)extraout_var << 0x10;
  }
  return iVar2;
}



/* ================================================================
 * Function: pm_set_io_state
 * Address:  100144ea
 * ================================================================ */

/* __stdcall pm_set_io_state,12 */

uint pm_set_io_state(short param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  uint uVar3;
  ushort extraout_var;
  ushort extraout_var_00;
  char local_11c [254];
  char acStack_1e [5];
  undefined1 local_19;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  uint local_14;
  undefined2 local_10;
  undefined2 uStack_e;
  uint local_c;
  uint local_8;
  
                    /* 0x144ea  420  _pm_set_io_state@12 */
  local_c = CONCAT22(local_c._2_2_,8);
  local_8 = CONCAT22(local_8._2_2_,1);
  uVar3 = pv_io_get_type(param_1,*(undefined2 *)(DAT_10043334 + 0x12 + param_1 * 0x24),&local_14);
  if ((uVar3 & 0xffff) == 0) {
    pv_set_error_code(0x7e1);
    uVar3 = (uint)extraout_var << 0x10;
    local_8 = 0;
  }
  else {
    acStack_1e[2] = 0x48;
    acStack_1e[3] = (char)((ushort)*(undefined2 *)(DAT_10043334 + 0x12 + param_1 * 0x24) >> 8);
    acStack_1e[4] = *(undefined1 *)(DAT_10043334 + 0x12 + param_1 * 0x24);
    if (local_14 == 0) {
      uVar2 = ftol();
      _local_10 = CONCAT22(uStack_e,uVar2);
      uVar1 = _local_10;
      uVar3 = 0;
      local_19 = (char)((ushort)uVar2 >> 8);
      local_10._0_1_ = (undefined1)uVar2;
      local_18 = (undefined1)local_10;
      _local_10 = uVar1;
    }
    else if (local_14 == 1) {
      uVar3 = ftol();
      _local_10 = CONCAT22(uStack_e,(short)uVar3);
      uVar1 = _local_10;
      local_19 = (char)(uVar3 >> 8);
      local_10._0_1_ = (undefined1)uVar3;
      local_18 = (undefined1)local_10;
      _local_10 = uVar1;
    }
    else {
      local_8 = local_8 & 0xffff0000;
      pv_set_error_code(0x7e6);
      uVar3 = (uint)extraout_var_00 << 0x10;
    }
    local_17 = 0x28;
    local_16 = 0;
    local_15 = 4;
    if ((local_8 & 0xffff) == 1) {
      if (8 < (local_c & 0xffff)) {
        sprintf(local_11c,s_PVLIB__SIZE_ERROR_in____s___writ_1003a2e8,8,local_c & 0xffff);
      }
      if (8 < CONCAT11(acStack_1e[local_c & 0xffff],acStack_1e[(local_c & 0xffff) + 1])) {
        sprintf(local_11c,s_PVLIB__SIZE_ERROR_in____s___read_1003a338,8,
                (uint)CONCAT11(acStack_1e[local_c & 0xffff],acStack_1e[(local_c & 0xffff) + 1]));
      }
      uVar3 = pm_cam_write_read(param_1,0x3f,(ushort)local_c,acStack_1e + 2,acStack_1e + 2);
      uVar3 = uVar3 & 0xffff;
      if (uVar3 == 0) {
        return 0;
      }
    }
  }
  return CONCAT22((short)(uVar3 >> 0x10),(undefined2)local_8);
}



/* ================================================================
 * Function: pm_set_io_direction
 * Address:  100146b8
 * ================================================================ */

/* WARNING: Removing unreachable block (ram,0x1001478c) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffff2 : 0x100147b7 */
/* WARNING: Removing unreachable block (ram,0x100147e4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* __stdcall pm_set_io_direction,8 */

uint pm_set_io_direction(short param_1,undefined4 param_2)

{
  uint uVar1;
  char local_18;
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
  undefined2 local_c;
  undefined2 uStack_a;
  uint local_8;
  
                    /* 0x146b8  419  _pm_set_io_direction@8 */
  _local_c = CONCAT22(uStack_a,0xc);
  local_18 = 'J';
  local_13 = 0x26;
  local_12 = 0x45;
  local_f = 0x28;
  local_e = 0;
  local_d = 2;
  local_8 = CONCAT22(local_8._2_2_,1);
  local_17 = (undefined1)((ushort)*(undefined2 *)(DAT_10043334 + 0x12 + param_1 * 0x24) >> 8);
  local_16 = *(undefined1 *)(DAT_10043334 + 0x12 + param_1 * 0x24);
  local_11 = (undefined1)((ushort)*(undefined2 *)(DAT_10043334 + 0x12 + param_1 * 0x24) >> 8);
  local_10 = *(undefined1 *)(DAT_10043334 + 0x12 + param_1 * 0x24);
  local_15 = (undefined1)((uint)param_2 >> 8);
  local_14 = (undefined1)param_2;
  local_d = 2;
  local_e = 0;
  local_f = 0x28;
  local_12 = 0x45;
  local_13 = 0x26;
  local_18 = 'J';
  uVar1 = pm_cam_write_read(param_1,0x3f,0xc,&local_18,&local_18);
  if ((uVar1 & 0xffff) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = local_8 & 0xffff;
  }
  return uVar1;
}



/* ================================================================
 * Function: pm_set_gain_mult_enable
 * Address:  10014833
 * ================================================================ */

/* __stdcall pm_set_gain_mult_enable,8 */

undefined2 pm_set_gain_mult_enable(void)

{
                    /* 0x14833  417  _pm_set_gain_mult_enable@8 */
  pv_set_error_code(0x7f1);
  return 0;
}



/* ================================================================
 * Function: pm_set_param
 * Address:  10014851
 * ================================================================ */

/* __stdcall pm_set_param,12 */

undefined2 pm_set_param(short param_1,uint param_2,ushort *param_3)

{
  bool bVar1;
  ushort uVar2;
  short sVar3;
  undefined3 extraout_var;
  uint uVar4;
  int iVar5;
  undefined4 in_ECX;
  undefined2 uVar6;
  undefined2 extraout_var_00;
  uint local_10;
  undefined2 local_c;
  uint local_8;
  
                    /* 0x14851  421  _pm_set_param@12 */
  uVar6 = (undefined2)((uint)in_ECX >> 0x10);
  local_c = 1;
  if (param_2 < 0x6020209) {
    if (param_2 == 0x6020208) {
      uVar4 = pl_shtr_set_open_dly(param_1,*param_3);
      if ((uVar4 & 0xffff) != 0) {
        return local_c;
      }
      return 0;
    }
    if (param_2 < 0x6020036) {
      if (param_2 == 0x6020035) {
        uVar4 = pv_ccd_set_premask(param_1,*param_3);
        if ((uVar4 & 0xffff) != 0) {
          return local_c;
        }
        return 0;
      }
      if (param_2 < 0x102020f) {
        if (param_2 == 0x102020e) {
          uVar4 = pl_ccd_set_tmp_setpoint(param_1,*param_3);
          if ((uVar4 & 0xffff) != 0) {
            return local_c;
          }
          return 0;
        }
        if (param_2 == 0x10200c3) {
          uVar4 = pl_ccd_set_adc_offset(param_1,*param_3);
          if ((uVar4 & 0xffff) != 0) {
            return local_c;
          }
          return 0;
        }
        if (param_2 == 0x1020200) {
          uVar4 = pl_spdtab_set_gain(param_1,(char)*param_3);
          if ((uVar4 & 0xffff) != 0) {
            return local_c;
          }
          return 0;
        }
        if (param_2 == 0x1020201) {
          uVar4 = pl_spdtab_set_num(param_1,*param_3);
          if ((uVar4 & 0xffff) != 0) {
            return local_c;
          }
          return 0;
        }
      }
      else {
        if (param_2 == 0x4020212) {
          uVar2 = pl_get_param(param_1,0x4020212,8,&local_10);
          if (uVar2 == 0) {
            return 0;
          }
          if ((local_10 & 0xffff) == 0) {
            pv_set_error_code(0x7e0);
            return 0;
          }
          uVar4 = pm_set_io_state(param_1);
          if ((uVar4 & 0xffff) != 0) {
            return local_c;
          }
          return 0;
        }
        if (param_2 == 0x6000003) {
          uVar4 = pl_dd_set_retries(param_1,*param_3);
          if ((uVar4 & 0xffff) != 0) {
            return local_c;
          }
          return 0;
        }
        if (param_2 == 0x6000004) {
          uVar4 = pl_dd_set_timeout(param_1,*param_3);
          if ((uVar4 & 0xffff) != 0) {
            return local_c;
          }
          return 0;
        }
      }
    }
    else if (param_2 < 0x6020062) {
      if (param_2 == 0x6020061) {
        uVar4 = pl_ccd_set_clear_cycles(param_1,*param_3);
        if ((uVar4 & 0xffff) != 0) {
          return local_c;
        }
        return 0;
      }
      switch(param_2) {
      case 0x6020036:
        uVar4 = pv_ccd_set_postmask(param_1,*param_3);
        if ((uVar4 & 0xffff) != 0) {
          return local_c;
        }
        return 0;
      case 0x6020037:
        uVar4 = pv_ccd_set_prescan(param_1,*param_3);
        if ((uVar4 & 0xffff) != 0) {
          return local_c;
        }
        return 0;
      case 0x6020038:
        uVar4 = pv_ccd_set_postscan(param_1,*param_3);
        if ((uVar4 & 0xffff) != 0) {
          return local_c;
        }
        return 0;
      case 0x6020039:
        uVar4 = pv_ccd_set_par_size(param_1,*param_3);
        if ((uVar4 & 0xffff) != 0) {
          return local_c;
        }
        return 0;
      case 0x602003a:
        uVar4 = pv_ccd_set_ser_size(param_1,*param_3);
        if ((uVar4 & 0xffff) != 0) {
          return local_c;
        }
        return 0;
      }
    }
    else if (param_2 == 0x6020207) {
      uVar4 = pl_shtr_set_close_dly(param_1,*param_3);
      if ((uVar4 & 0xffff) != 0) {
        return local_c;
      }
      return 0;
    }
  }
  else if (param_2 < 0x75d0004) {
    if (param_2 == 0x75d0003) {
      uVar4 = t_pl_ff_set_accum_num(param_1,*(undefined4 *)param_3);
      return (short)uVar4;
    }
    if (param_2 < 0x6030005) {
      if (param_2 == 0x6030004) {
        *(undefined2 *)(DAT_10043330 + 0x28 + param_1 * 0x2c) = 1;
        uVar2 = pl_get_param(param_1,0x6030004,8,&local_10);
        if (uVar2 == 0) {
          return 0;
        }
        if ((local_10 & 0xffff) == 0) {
          pv_set_error_code(0x7e0);
          return 0;
        }
        uVar4 = pm_set_exp_res_index(param_1,*param_3);
        if ((uVar4 & 0xffff) != 0) {
          return local_c;
        }
        return 0;
      }
      if (param_2 == 0x602020f) {
        uVar2 = pl_get_param(param_1,0x602020f,8,&local_10);
        if (uVar2 == 0) {
          return 0;
        }
        if ((local_10 & 0xffff) == 0) {
          pv_set_error_code(0x7e0);
          return 0;
        }
        uVar4 = pm_set_io_addr(param_1,*param_3);
        if ((uVar4 & 0xffff) != 0) {
          return local_c;
        }
        return 0;
      }
      if (param_2 == 0x6020219) {
LAB_10014fa1:
        uVar4 = pm_ccd_set_gain_mult_factor(param_1,CONCAT22(uVar6,*param_3));
        if ((uVar4 & 0xffff) != 0) {
          return local_c;
        }
        return 0;
      }
      if (param_2 == 0x6030001) {
        uVar4 = pl_exp_set_time_seq(param_1,*param_3);
        if ((uVar4 & 0xffff) != 0) {
          return local_c;
        }
        return 0;
      }
    }
    else {
      if (param_2 == 0x65d0001) {
        iVar5 = t_pl_ff_set_accum_mode(param_1,*param_3);
        return (short)iVar5;
      }
      if (param_2 == 0x65d0002) {
        iVar5 = t_pl_ff_set_paired_mode(param_1,*param_3);
        return (short)iVar5;
      }
      if (param_2 == 0x70201fb) {
        bVar1 = pl_ccd_set_preamp_off_control(param_1,*(undefined4 *)param_3);
        if ((CONCAT31(extraout_var,bVar1) & 0xffff) != 0) {
          return local_c;
        }
        return 0;
      }
    }
  }
  else if (param_2 < 0x902020d) {
    if (param_2 == 0x902020c) {
      uVar4 = pl_ccd_set_pmode(param_1,*param_3);
      if ((uVar4 & 0xffff) != 0) {
        return local_c;
      }
      return 0;
    }
    if (param_2 == 0x90200f7) {
      uVar4 = pl_ccd_set_readout_port(param_1,*param_3);
      if ((uVar4 & 0xffff) != 0) {
        return local_c;
      }
      return 0;
    }
    if (param_2 == 0x9020209) {
      uVar4 = pl_shtr_set_open_mode(param_1,*param_3);
      if ((uVar4 & 0xffff) != 0) {
        return local_c;
      }
      return 0;
    }
    if (param_2 == 0x902020b) {
      uVar4 = pl_ccd_set_clear_mode(param_1,*param_3);
      if ((uVar4 & 0xffff) != 0) {
        return local_c;
      }
      return 0;
    }
  }
  else {
    if (param_2 == 0x9020211) {
      uVar2 = pl_get_param(param_1,0x9020211,8,&local_10);
      if (uVar2 == 0) {
        return 0;
      }
      if ((local_10 & 0xffff) == 0) {
        pv_set_error_code(0x7e0);
        return 0;
      }
      uVar2 = pl_get_param(param_1,0x9020211,7,&local_8);
      if (uVar2 == 0) {
        return 0;
      }
      if ((local_8 & 0xffff) != 2) {
        pv_set_error_code(0x7e9);
        return 0;
      }
      uVar4 = pm_set_io_direction(param_1,*(undefined4 *)param_3);
      if ((uVar4 & 0xffff) != 0) {
        return local_c;
      }
      return 0;
    }
    if (param_2 == 0xb02021d) {
      sVar3 = pm_set_gain_mult_enable();
      uVar6 = extraout_var_00;
      if (sVar3 == 0) {
        local_c = 0;
      }
      goto LAB_10014fa1;
    }
  }
  pv_set_error_code(0x7e2);
  return 0;
}



/* ================================================================
 * Function: pv_set_param
 * Address:  10015000
 * ================================================================ */

/* __stdcall pv_set_param,12 */

undefined2 pv_set_param(short param_1,int param_2,short *param_3)

{
  uint uVar1;
  undefined2 local_8;
  
                    /* 0x15000  532  _pv_set_param@12 */
  uVar1 = pl_cam_check(param_1);
  if ((uVar1 & 0xffff) == 0) {
    local_8 = 0;
  }
  else if (param_2 == 0x9030005) {
    uVar1 = pv_exp_enable_ints(param_1,*param_3);
    local_8 = (undefined2)uVar1;
  }
  else if (param_2 == 0xb030007) {
    uVar1 = pv_exp_clear_ints(param_1);
    local_8 = (undefined2)uVar1;
  }
  else {
    local_8 = 0;
  }
  return local_8;
}



/* ================================================================
 * Function: pi_shtr_get_close_dly
 * Address:  10015080
 * ================================================================ */

/* __stdcall pi_shtr_get_close_dly,8 */

bool pi_shtr_get_close_dly(short param_1,undefined2 *param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 local_c;
  undefined4 uStack_8;
  
                    /* 0x15080  263  _pi_shtr_get_close_dly@8 */
  local_c = 0;
  uStack_8 = 0;
  iVar1 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
  if (iVar1 == 0) {
    pv_set_error_code(0x7df);
  }
  else {
    (**(code **)(iVar1 + 0x30))(iVar1,0x10a,&local_c);
    uVar2 = ftol();
    *param_2 = uVar2;
  }
  return iVar1 != 0;
}



/* ================================================================
 * Function: pi_shtr_get_open_dly
 * Address:  100150ea
 * ================================================================ */

/* __stdcall pi_shtr_get_open_dly,8 */

undefined4 pi_shtr_get_open_dly(undefined4 param_1,undefined2 *param_2)

{
                    /* 0x150ea  264  _pi_shtr_get_open_dly@8 */
  *param_2 = 0;
  return CONCAT22((short)((uint)param_2 >> 0x10),1);
}



/* ================================================================
 * Function: pi_shtr_get_status
 * Address:  100150fd
 * ================================================================ */

/* __stdcall pi_shtr_get_status,8 */

bool pi_shtr_get_status(short param_1,undefined2 *param_2)

{
  bool bVar1;
  
                    /* 0x150fd  265  _pi_shtr_get_status@8 */
  bVar1 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c) == 0;
  if (bVar1) {
    pv_set_error_code(0x7df);
  }
  else {
    *param_2 = 2;
  }
  return !bVar1;
}



/* ================================================================
 * Function: pi_shtr_set_close_dly
 * Address:  1001513e
 * ================================================================ */

/* __stdcall pi_shtr_set_close_dly,8 */

int pi_shtr_set_close_dly(short param_1,ushort param_2)

{
  undefined2 extraout_var;
  ushort extraout_var_00;
  int iVar1;
  undefined4 local_8;
  
                    /* 0x1513e  266  _pi_shtr_set_close_dly@8 */
  iVar1 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
  if (iVar1 == 0) {
    pv_set_error_code(0x7df);
    iVar1 = (uint)extraout_var_00 << 0x10;
  }
  else {
    if (param_2 < 6) {
      local_8 = 1;
    }
    else if (param_2 < 8) {
      local_8 = 5;
    }
    else if (param_2 < 0x1c) {
      local_8 = 4;
    }
    else {
      local_8 = 2;
    }
    (**(code **)(iVar1 + 0x260))(iVar1,local_8);
    iVar1 = CONCAT22(extraout_var,1);
  }
  return iVar1;
}



/* ================================================================
 * Function: pi_shtr_set_open_dly
 * Address:  100151d5
 * ================================================================ */

/* __stdcall pi_shtr_set_open_dly,8 */

undefined2 pi_shtr_set_open_dly(void)

{
                    /* 0x151d5  267  _pi_shtr_set_open_dly@8 */
  return 1;
}



/* ================================================================
 * Function: pi_shtr_set_open_mode
 * Address:  100151e0
 * ================================================================ */

/* __stdcall pi_shtr_set_open_mode,8 */

int pi_shtr_set_open_mode(short param_1,short param_2)

{
  int iVar1;
  ushort extraout_var;
  int iVar2;
  
                    /* 0x151e0  268  _pi_shtr_set_open_mode@8 */
  iVar2 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
  if (iVar2 == 0) {
    pv_set_error_code(0x7df);
    iVar2 = (uint)extraout_var << 0x10;
  }
  else {
    iVar1 = (int)param_2;
    switch(iVar1) {
    case 0:
      iVar1 = (**(code **)(iVar2 + 0xc4))(iVar2,2);
      break;
    case 1:
      (**(code **)(iVar2 + 0xc4))(iVar2,1);
      iVar1 = (**(code **)(iVar2 + 0x24))(iVar2,0x77,0);
      break;
    case 2:
      iVar1 = (**(code **)(iVar2 + 0xc4))(iVar2,3);
      break;
    case 3:
      (**(code **)(iVar2 + 0xc4))(iVar2,1);
      iVar1 = (**(code **)(iVar2 + 0x24))(iVar2,0x77,1);
    }
    iVar2 = CONCAT22((short)((uint)iVar1 >> 0x10),1);
  }
  return iVar2;
}



/* ================================================================
 * Function: pl_shtr_get_close_dly
 * Address:  100152a0
 * ================================================================ */

uint pl_shtr_get_close_dly(short param_1,ushort *param_2)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  
                    /* 0x152a0  83  pl_shtr_get_close_dly */
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    bVar1 = pm_shtr_get_close_dly(param_1,param_2);
    uVar2 = CONCAT22((short)((uint3)extraout_var >> 8),(short)CONCAT31(extraout_var,bVar1));
  }
  else {
    bVar1 = pi_shtr_get_close_dly(param_1,param_2);
    uVar2 = CONCAT22((short)((uint3)extraout_var_00 >> 8),(short)CONCAT31(extraout_var_00,bVar1));
  }
  return uVar2;
}



/* ================================================================
 * Function: pl_shtr_get_open_dly
 * Address:  10015306
 * ================================================================ */

uint pl_shtr_get_open_dly(short param_1,ushort *param_2)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  
                    /* 0x15306  84  pl_shtr_get_open_dly */
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    bVar1 = pm_shtr_get_open_dly(param_1,param_2);
    uVar2 = CONCAT22((short)((uint3)extraout_var >> 8),(short)CONCAT31(extraout_var,bVar1));
  }
  else {
    uVar2 = pi_shtr_get_open_dly(CONCAT22((short)((uint)(param_1 * 0x2c) >> 0x10),param_1),param_2);
  }
  return uVar2;
}



/* ================================================================
 * Function: pl_shtr_get_open_mode
 * Address:  1001536c
 * ================================================================ */

bool pl_shtr_get_open_mode(short param_1,undefined2 *param_2)

{
  uint uVar1;
  bool bVar2;
  
                    /* 0x1536c  85  pl_shtr_get_open_mode */
  uVar1 = pl_cam_check(param_1);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *param_2 = *(undefined2 *)(DAT_10043334 + 6 + param_1 * 0x24);
  }
  return bVar2;
}



/* ================================================================
 * Function: pl_shtr_get_status
 * Address:  100153a6
 * ================================================================ */

uint pl_shtr_get_status(short param_1,undefined2 *param_2)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  
                    /* 0x153a6  86  pl_shtr_get_status */
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    uVar2 = pm_shtr_get_status(param_1,param_2);
  }
  else {
    bVar1 = pi_shtr_get_status(param_1,param_2);
    uVar2 = CONCAT22((short)((uint3)extraout_var >> 8),(short)CONCAT31(extraout_var,bVar1));
  }
  return uVar2;
}



/* ================================================================
 * Function: pl_shtr_set_close_dly
 * Address:  1001540c
 * ================================================================ */

uint pl_shtr_set_close_dly(short param_1,ushort param_2)

{
  uint uVar1;
  
                    /* 0x1540c  87  pl_shtr_set_close_dly */
  uVar1 = pl_cam_check(param_1);
  if ((uVar1 & 0xffff) == 0) {
    uVar1 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    uVar1 = pm_shtr_set_close_dly(param_1,CONCAT22((short)((uint)(param_1 * 0x2c) >> 0x10),param_2))
    ;
  }
  else {
    uVar1 = pi_shtr_set_close_dly(param_1,param_2);
  }
  return uVar1;
}



/* ================================================================
 * Function: pl_shtr_set_open_dly
 * Address:  10015474
 * ================================================================ */

uint pl_shtr_set_open_dly(short param_1,undefined2 param_2)

{
  undefined2 uVar1;
  uint uVar2;
  undefined2 extraout_var;
  
                    /* 0x15474  88  pl_shtr_set_open_dly */
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    uVar2 = pm_shtr_set_open_dly(param_1,CONCAT22((short)((uint)(param_1 * 0x2c) >> 0x10),param_2));
  }
  else {
    uVar1 = pi_shtr_set_open_dly();
    uVar2 = CONCAT22(extraout_var,uVar1);
  }
  return uVar2;
}



/* ================================================================
 * Function: pl_shtr_set_open_mode
 * Address:  100154dc
 * ================================================================ */

uint pl_shtr_set_open_mode(short param_1,short param_2)

{
  uint uVar1;
  
                    /* 0x154dc  89  pl_shtr_set_open_mode */
  uVar1 = pl_cam_check(param_1);
  if ((uVar1 & 0xffff) == 0) {
    uVar1 = 0;
  }
  else {
    if ((((param_2 != 0) && (param_2 != 1)) && (param_2 != 2)) && ((param_2 != 3 && (param_2 != 4)))
       ) {
      param_2 = 1;
    }
    if (*(short *)(DAT_10043334 + 6 + param_1 * 0x24) != param_2) {
      *(undefined2 *)(DAT_10043330 + 0x28 + param_1 * 0x2c) = 1;
    }
    *(short *)(DAT_10043334 + 6 + param_1 * 0x24) = param_2;
    if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
      uVar1 = pm_shtr_set_open_mode(param_1);
    }
    else {
      uVar1 = pi_shtr_set_open_mode(param_1,param_2);
    }
  }
  return uVar1;
}



/* ================================================================
 * Function: pm_shtr_get_close_dly
 * Address:  100155c0
 * ================================================================ */

/* WARNING: Removing unreachable block (ram,0x100155f0) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffff3 : 0x1001561b */
/* WARNING: Removing unreachable block (ram,0x10015648) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* __stdcall pm_shtr_get_close_dly,8 */

bool pm_shtr_get_close_dly(short param_1,ushort *param_2)

{
  uint uVar1;
  bool bVar2;
  char local_10;
  byte bStack_f;
  undefined1 uStack_e;
  undefined1 uStack_d;
  undefined1 local_c;
  undefined2 local_8;
  undefined2 uStack_6;
  
                    /* 0x155c0  423  _pm_shtr_get_close_dly@8 */
  _local_8 = CONCAT22(uStack_6,5);
  local_10 = '&';
  bStack_f = 0x20;
  uStack_e = 0x28;
  uStack_d = 0;
  local_c = 2;
  local_c = 2;
  uStack_d = 0;
  uStack_e = 0x28;
  bStack_f = 0x20;
  local_10 = '&';
  uVar1 = pm_cam_write_read(param_1,0x3f,5,&local_10,&local_10);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *param_2 = CONCAT11(bStack_f,local_10) << 8 | (ushort)bStack_f;
  }
  return bVar2;
}



/* ================================================================
 * Function: pm_shtr_get_open_dly
 * Address:  100156b4
 * ================================================================ */

/* WARNING: Removing unreachable block (ram,0x100156e4) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffff3 : 0x1001570f */
/* WARNING: Removing unreachable block (ram,0x1001573c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* __stdcall pm_shtr_get_open_dly,8 */

bool pm_shtr_get_open_dly(short param_1,ushort *param_2)

{
  uint uVar1;
  bool bVar2;
  char local_10;
  byte bStack_f;
  undefined1 uStack_e;
  undefined1 uStack_d;
  undefined1 local_c;
  undefined2 local_8;
  undefined2 uStack_6;
  
                    /* 0x156b4  424  _pm_shtr_get_open_dly@8 */
  _local_8 = CONCAT22(uStack_6,5);
  local_10 = '&';
  bStack_f = 0x1f;
  uStack_e = 0x28;
  uStack_d = 0;
  local_c = 2;
  local_c = 2;
  uStack_d = 0;
  uStack_e = 0x28;
  bStack_f = 0x1f;
  local_10 = '&';
  uVar1 = pm_cam_write_read(param_1,0x3f,5,&local_10,&local_10);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *param_2 = CONCAT11(bStack_f,local_10) << 8 | (ushort)bStack_f;
  }
  return bVar2;
}



/* ================================================================
 * Function: pm_shtr_get_status
 * Address:  100157a8
 * ================================================================ */

/* WARNING: Removing unreachable block (ram,0x100157e1) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffeb : 0x1001580d */
/* WARNING: Removing unreachable block (ram,0x10015839) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* __stdcall pm_shtr_get_status,8 */

undefined4 pm_shtr_get_status(short param_1,undefined2 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  char local_18 [12];
  undefined2 local_c;
  undefined2 uStack_a;
  
                    /* 0x157a8  425  _pm_shtr_get_status@8 */
  _local_c = CONCAT22(uStack_a,5);
  builtin_strncpy(local_18,"&\x1d(",4);
  local_18[4] = 9;
  local_18[5] = '\0';
  local_18[6] = '\0';
  local_18[7] = 0;
  local_18[8] = 0;
  local_18[9] = 0;
  local_18[9] = 0;
  local_18[8] = 0;
  local_18[7] = 0;
  local_18[5] = '\0';
  local_18[6] = '\0';
  local_18[4] = 9;
  uVar1 = pm_cam_write_read(param_1,0x3f,5,local_18,local_18);
  if ((uVar1 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else {
    switch(local_18[8] & 0xf0) {
    case 0x10:
      *param_2 = 1;
      break;
    case 0x20:
      *param_2 = 2;
      break;
    default:
      *param_2 = 0;
      break;
    case 0x40:
      *param_2 = 3;
      break;
    case 0x80:
      *param_2 = 4;
    }
    if ((local_18[7] & 8U) != 0) {
      *param_2 = 0;
    }
    uVar2 = 1;
  }
  return uVar2;
}



/* ================================================================
 * Function: pm_shtr_set_close_dly
 * Address:  100159a4
 * ================================================================ */

/* WARNING: Removing unreachable block (ram,0x100159f5) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffff2 : 0x10015a20 */
/* WARNING: Removing unreachable block (ram,0x10015a4c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* __stdcall pm_shtr_set_close_dly,8 */

int pm_shtr_set_close_dly(short param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  ushort extraout_var;
  char local_14;
  byte bStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined2 local_c;
  undefined2 uStack_a;
  ushort local_8;
  undefined2 uStack_6;
  
                    /* 0x159a4  426  _pm_shtr_set_close_dly@8 */
  _local_c = CONCAT22(uStack_a,8);
  local_14 = '1';
  uStack_11 = 0x26;
  local_10 = 0x20;
  local_f = 0x28;
  local_e = 0;
  local_d = 2;
  bStack_13 = (byte)(param_2 >> 8);
  uStack_12 = (undefined1)param_2;
  local_d = 2;
  local_e = 0;
  local_f = 0x28;
  local_10 = 0x20;
  uStack_11 = 0x26;
  local_14 = '1';
  uVar2 = pm_cam_write_read(param_1,0x3f,8,&local_14,&local_14);
  if ((uVar2 & 0xffff) == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = CONCAT11(bStack_13,local_14) << 8 | (ushort)bStack_13;
    _local_8 = CONCAT22(uStack_6,uVar1);
    if ((uint)uVar1 == (param_2 & 0xffff)) {
      iVar3 = 1;
    }
    else {
      pv_set_error_code(0x7d3);
      iVar3 = (uint)extraout_var << 0x10;
    }
  }
  return iVar3;
}



/* ================================================================
 * Function: pm_shtr_set_open_dly
 * Address:  10015ad9
 * ================================================================ */

/* WARNING: Removing unreachable block (ram,0x10015b2a) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffff2 : 0x10015b55 */
/* WARNING: Removing unreachable block (ram,0x10015b81) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* __stdcall pm_shtr_set_open_dly,8 */

int pm_shtr_set_open_dly(short param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  ushort extraout_var;
  char local_14;
  byte bStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined2 local_c;
  undefined2 uStack_a;
  ushort local_8;
  undefined2 uStack_6;
  
                    /* 0x15ad9  427  _pm_shtr_set_open_dly@8 */
  _local_c = CONCAT22(uStack_a,8);
  local_14 = '0';
  uStack_11 = 0x26;
  local_10 = 0x1f;
  local_f = 0x28;
  local_e = 0;
  local_d = 2;
  bStack_13 = (byte)(param_2 >> 8);
  uStack_12 = (undefined1)param_2;
  local_d = 2;
  local_e = 0;
  local_f = 0x28;
  local_10 = 0x1f;
  uStack_11 = 0x26;
  local_14 = '0';
  uVar2 = pm_cam_write_read(param_1,0x3f,8,&local_14,&local_14);
  if ((uVar2 & 0xffff) == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = CONCAT11(bStack_13,local_14) << 8 | (ushort)bStack_13;
    _local_8 = CONCAT22(uStack_6,uVar1);
    if ((uint)uVar1 == (param_2 & 0xffff)) {
      iVar3 = 1;
    }
    else {
      pv_set_error_code(0x7d3);
      iVar3 = (uint)extraout_var << 0x10;
    }
  }
  return iVar3;
}



/* ================================================================
 * Function: pm_shtr_set_open_mode
 * Address:  10015c0e
 * ================================================================ */

/* __stdcall pm_shtr_set_open_mode,4 */

undefined4 pm_shtr_set_open_mode(short param_1)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  ushort extraout_var_00;
  
                    /* 0x15c0e  428  _pm_shtr_set_open_mode@4 */
  uVar2 = param_1 * 0x2c;
  if (*(short *)(DAT_10043330 + 0x28 + uVar2) != 0) {
    bVar1 = pv_exp_set_script(param_1,0);
    uVar2 = CONCAT31(extraout_var,bVar1) & 0xffff;
    if (uVar2 == 0) {
      pv_set_error_code(0x7d3);
      return (uint)extraout_var_00 << 0x10;
    }
  }
  return CONCAT22((short)(uVar2 >> 0x10),1);
}



/* ================================================================
 * Function: pi_spdtab_get_bits
 * Address:  10015c60
 * ================================================================ */

/* __stdcall pi_spdtab_get_bits,8 */

undefined2 pi_spdtab_get_bits(short param_1,undefined2 *param_2)

{
  undefined4 uVar1;
  undefined2 local_10;
  undefined2 local_8 [2];
  
                    /* 0x15c60  269  _pi_spdtab_get_bits@8 */
  local_10 = 1;
  if (*(short *)(DAT_10043334 + 8 + param_1 * 0x24) == -1) {
    uVar1 = pl_spdtab_get_entries(param_1,local_8);
    local_10 = (undefined2)uVar1;
  }
  if (*(short *)(DAT_10043334 + 8 + param_1 * 0x24) < 1) {
    pv_set_error_code(0x7dc);
    local_10 = 0;
  }
  *param_2 = *(undefined2 *)
              (&DAT_10043cc0 + *(short *)(&DAT_10043d50 + param_1 * 0x98) * 0xc + param_1 * 0x98);
  return local_10;
}



/* ================================================================
 * Function: pi_spdtab_get_gain
 * Address:  10015cf9
 * ================================================================ */

/* __stdcall pi_spdtab_get_gain,8 */

undefined4 pi_spdtab_get_gain(short param_1,undefined2 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 extraout_var;
  undefined2 local_44;
  undefined1 local_40 [56];
  undefined2 local_8 [2];
  
                    /* 0x15cf9  270  _pi_spdtab_get_gain@8 */
  local_44 = 1;
  if (*(short *)(DAT_10043334 + 8 + param_1 * 0x24) == -1) {
    uVar1 = pl_spdtab_get_entries(param_1,local_8);
    local_44 = (undefined2)uVar1;
  }
  if (*(short *)(DAT_10043334 + 8 + param_1 * 0x24) < 1) {
    pv_set_error_code(0x7dc);
    local_44 = 0;
  }
  if (*(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c) == 0) {
    *param_2 = 0;
    pv_set_error_code(0x7df);
    local_44 = 0;
    uVar3 = extraout_var;
  }
  else {
    iVar2 = FUN_1002548b(local_40,*(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c),0x200,local_40);
    if (iVar2 == 0) {
      *param_2 = 1;
      uVar1 = 0;
    }
    else {
      uVar1 = ftol();
      *param_2 = (short)uVar1;
    }
    uVar3 = (undefined2)((uint)uVar1 >> 0x10);
  }
  return CONCAT22(uVar3,local_44);
}



/* ================================================================
 * Function: pi_spdtab_get_max_gain
 * Address:  10015dcd
 * ================================================================ */

/* __stdcall pi_spdtab_get_max_gain,8 */

undefined4 pi_spdtab_get_max_gain(short param_1,undefined2 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 extraout_var;
  undefined2 local_44;
  undefined1 local_40 [56];
  undefined2 local_8 [2];
  
                    /* 0x15dcd  271  _pi_spdtab_get_max_gain@8 */
  local_44 = 1;
  if (*(short *)(DAT_10043334 + 8 + param_1 * 0x24) == -1) {
    uVar1 = pl_spdtab_get_entries(param_1,local_8);
    local_44 = (undefined2)uVar1;
  }
  if (*(short *)(DAT_10043334 + 8 + param_1 * 0x24) < 1) {
    pv_set_error_code(0x7dc);
    local_44 = 0;
  }
  if (*(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c) == 0) {
    *param_2 = 0;
    pv_set_error_code(0x7df);
    local_44 = 0;
    uVar3 = extraout_var;
  }
  else {
    iVar2 = FUN_1002548b(local_40,*(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c),0x200,local_40);
    if (iVar2 == 0) {
      *param_2 = 1;
      uVar1 = 0;
    }
    else {
      uVar1 = ftol();
      *param_2 = (short)uVar1;
    }
    uVar3 = (undefined2)((uint)uVar1 >> 0x10);
  }
  return CONCAT22(uVar3,local_44);
}



/* ================================================================
 * Function: pi_spdtab_get_num
 * Address:  10015ea1
 * ================================================================ */

/* __stdcall pi_spdtab_get_num,8 */

undefined2 pi_spdtab_get_num(short param_1,undefined2 *param_2)

{
  undefined4 uVar1;
  undefined2 local_c;
  undefined2 local_8 [2];
  
                    /* 0x15ea1  272  _pi_spdtab_get_num@8 */
  local_c = 1;
  if (*(short *)(DAT_10043334 + 8 + param_1 * 0x24) == -1) {
    uVar1 = pl_spdtab_get_entries(param_1,local_8);
    local_c = (undefined2)uVar1;
  }
  if (*(short *)(DAT_10043334 + 8 + param_1 * 0x24) < 1) {
    pv_set_error_code(0x7dc);
    local_c = 0;
  }
  *param_2 = *(undefined2 *)(&DAT_10043d50 + param_1 * 0x98);
  return local_c;
}



/* ================================================================
 * Function: pi_spdtab_get_port
 * Address:  10015f1d
 * ================================================================ */

/* __stdcall pi_spdtab_get_port,8 */

uint pi_spdtab_get_port(short param_1,short *param_2)

{
  int iVar1;
  short sVar2;
  undefined4 uVar3;
  ushort extraout_var;
  ushort extraout_var_00;
  ushort extraout_var_01;
  short *local_10;
  undefined4 local_c;
  undefined2 local_8 [2];
  
                    /* 0x15f1d  273  _pi_spdtab_get_port@8 */
  local_c._0_2_ = 1;
  iVar1 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
  if (*(short *)(DAT_10043334 + 8 + param_1 * 0x24) == -1) {
    uVar3 = pl_spdtab_get_entries(param_1,local_8);
    local_c._0_2_ = (undefined2)uVar3;
  }
  if (*(short *)(DAT_10043334 + 8 + param_1 * 0x24) < 1) {
    pv_set_error_code(0x7dc);
    param_2 = (short *)((uint)extraout_var << 0x10);
    local_c = 0;
  }
  else if (iVar1 == 0) {
    pv_set_error_code(0x7df);
    param_2 = (short *)((uint)extraout_var_00 << 0x10);
    local_c = 0;
  }
  else {
    sVar2 = (**(code **)(iVar1 + 0x34))(iVar1,0xf7,&local_10);
    local_c = CONCAT22(local_c._2_2_,sVar2);
    if (sVar2 == 0) {
      *param_2 = 1;
    }
    else if (((int)local_10 < 0) || (2 < (int)local_10)) {
      pv_set_error_code(0x7ee);
      param_2 = (short *)((uint)extraout_var_01 << 0x10);
      local_c = 0;
    }
    else {
      *param_2 = (short)local_10 + 1;
      param_2 = local_10;
    }
  }
  return CONCAT22((short)((uint)param_2 >> 0x10),(undefined2)local_c);
}



/* ================================================================
 * Function: pi_spdtab_get_port_total
 * Address:  10016010
 * ================================================================ */

/* __stdcall pi_spdtab_get_port_total,8 */

undefined2 pi_spdtab_get_port_total(short param_1,undefined2 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  void *this;
  undefined2 local_44;
  undefined2 local_40 [28];
  undefined2 local_8 [2];
  
                    /* 0x16010  274  _pi_spdtab_get_port_total@8 */
  local_44 = 1;
  iVar2 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
  if (*(short *)(DAT_10043334 + 8 + param_1 * 0x24) == -1) {
    uVar1 = pl_spdtab_get_entries(param_1,local_8);
    local_44 = (undefined2)uVar1;
  }
  this = (void *)(int)*(short *)(DAT_10043334 + 8 + param_1 * 0x24);
  if ((int)this < 1) {
    pv_set_error_code(0x7dc);
    local_44 = 0;
  }
  else if (iVar2 == 0) {
    pv_set_error_code(0x7df);
    local_44 = 0;
  }
  else {
    iVar2 = FUN_1002548b(this,iVar2,0xf7,local_40);
    if (iVar2 == 0) {
      *param_2 = 1;
    }
    else {
      *param_2 = local_40[0];
    }
  }
  return local_44;
}



/* ================================================================
 * Function: pi_spdtab_get_time
 * Address:  100160cd
 * ================================================================ */

/* __stdcall pi_spdtab_get_time,8 */

undefined2 pi_spdtab_get_time(short param_1,undefined2 *param_2)

{
  undefined4 uVar1;
  undefined2 local_10;
  undefined2 local_8 [2];
  
                    /* 0x160cd  275  _pi_spdtab_get_time@8 */
  local_10 = 1;
  if (*(short *)(DAT_10043334 + 8 + param_1 * 0x24) == -1) {
    uVar1 = pl_spdtab_get_entries(param_1,local_8);
    local_10 = (undefined2)uVar1;
  }
  if (*(short *)(DAT_10043334 + 8 + param_1 * 0x24) < 1) {
    pv_set_error_code(0x7dc);
    local_10 = 0;
  }
  *param_2 = *(undefined2 *)
              (&DAT_10043cc2 + *(short *)(&DAT_10043d50 + param_1 * 0x98) * 0xc + param_1 * 0x98);
  return local_10;
}



/* ================================================================
 * Function: pi_spdtab_set_gain
 * Address:  10016166
 * ================================================================ */

/* __stdcall pi_spdtab_set_gain,8 */

undefined4 pi_spdtab_set_gain(short param_1)

{
  int iVar1;
  uint uVar2;
  undefined2 extraout_var;
  undefined2 uVar3;
  undefined2 local_44;
  undefined1 local_40 [56];
  undefined2 local_8 [2];
  
                    /* 0x16166  276  _pi_spdtab_set_gain@8 */
  if (*(short *)(DAT_10043334 + 8 + param_1 * 0x24) == -1) {
    pl_spdtab_get_entries(param_1,local_8);
  }
  if (*(short *)(DAT_10043334 + 8 + param_1 * 0x24) < 1) {
    pv_set_error_code(0x7dc);
  }
  if (*(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c) == 0) {
    pv_set_error_code(0x7df);
    local_44 = 0;
    uVar3 = extraout_var;
  }
  else {
    iVar1 = FUN_1002548b(local_40,*(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c),0x200,local_40);
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar2 = pl_set_param(param_1,0x1020200,(uint *)&stack0x00000008);
      uVar3 = (undefined2)(uVar2 >> 0x10);
    }
    local_44 = 1;
  }
  return CONCAT22(uVar3,local_44);
}



/* ================================================================
 * Function: pi_spdtab_set_num
 * Address:  1001623f
 * ================================================================ */

/* __stdcall pi_spdtab_set_num,8 */

undefined4 pi_spdtab_set_num(short param_1,short param_2)

{
  undefined2 uVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  ushort extraout_var;
  ushort extraout_var_00;
  undefined2 extraout_var_01;
  undefined1 local_48 [56];
  void *local_10;
  uint local_c;
  undefined2 local_8 [2];
  
                    /* 0x1623f  277  _pi_spdtab_set_num@8 */
  local_c = CONCAT22(local_c._2_2_,1);
  if (*(short *)(DAT_10043334 + 8 + param_1 * 0x24) == -1) {
    uVar3 = pl_spdtab_get_entries(param_1,local_8);
    local_c = CONCAT22(local_c._2_2_,(short)uVar3);
  }
  if (*(short *)(DAT_10043334 + 8 + param_1 * 0x24) < 1) {
    pv_set_error_code(0x7dc);
    local_c = local_c & 0xffff0000;
  }
  if (*(short *)(DAT_10043334 + 8 + param_1 * 0x24) <= param_2) {
    pv_set_error_code(0x7dd);
    local_c = local_c & 0xffff0000;
  }
  if (((local_c & 0xffff) == 0) || (*(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c) == 0)) {
    pv_set_error_code(0x7df);
    local_c._0_2_ = 0;
    uVar1 = extraout_var_01;
  }
  else {
    local_10 = *(void **)(DAT_10043330 + 0x1c + param_1 * 0x2c);
    iVar4 = param_1 * 0x98;
    *(short *)(&DAT_10043d50 + iVar4) = param_2;
    if ((local_c & 0xffff) != 0) {
      iVar4 = FUN_1002548b(local_10,(int)local_10,0x200,local_48);
      if (iVar4 != 0) {
        uVar1 = (**(code **)((int)local_10 + 0x24))
                          (local_10,0x200,
                           (int)*(short *)(&DAT_10043cc4 + param_2 * 0xc + param_1 * 0x98));
        local_c = CONCAT22(local_c._2_2_,uVar1);
      }
      if ((local_c & 0xffff) == 0) {
        pv_set_error_code(0x7ed);
        iVar4 = (uint)extraout_var << 0x10;
      }
      else {
        sVar2 = (**(code **)((int)local_10 + 0x24))
                          (local_10,*(undefined4 *)(&DAT_10043d54 + param_1 * 0x98),
                           (int)*(short *)(&DAT_10043cca + param_2 * 0xc + param_1 * 0x98));
        local_c = CONCAT22(local_c._2_2_,sVar2);
        iVar4 = 0;
        if (sVar2 == 0) {
          pv_set_error_code(0x7f0);
          iVar4 = (uint)extraout_var_00 << 0x10;
        }
      }
    }
    uVar1 = (undefined2)((uint)iVar4 >> 0x10);
  }
  return CONCAT22(uVar1,(undefined2)local_c);
}



/* ================================================================
 * Function: pi_SetupSpdTable
 * Address:  100163ec
 * ================================================================ */

/* __stdcall pi_SetupSpdTable,8 */

undefined4 pi_SetupSpdTable(short param_1,short *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined2 extraout_var;
  short local_60;
  undefined2 local_5c;
  short local_58;
  int local_54;
  short local_50;
  short local_4c;
  uint local_48;
  short local_44 [24];
  int local_14;
  void *local_c;
  uint local_8;
  
                    /* 0x163ec  174  _pi_SetupSpdTable@8 */
  local_8._0_2_ = 1;
  local_c = *(void **)(DAT_10043330 + 0x1c + param_1 * 0x2c);
  if (local_c == (void *)0x0) {
    pv_set_error_code(0x7df);
    local_8._0_2_ = 0;
    uVar4 = extraout_var;
  }
  else {
    local_48 = 0x5f;
    uVar1 = FUN_1002548b((void *)0x5f,(int)local_c,0x5f,local_44);
    local_8 = CONCAT22(local_8._2_2_,(short)uVar1);
    uVar1 = uVar1 & 0xffff;
    if ((uVar1 == 0) || (local_14 == 1)) {
      local_48 = 0x60;
      uVar1 = FUN_1002548b(local_44,(int)local_c,0x60,local_44);
      local_8 = CONCAT22(local_8._2_2_,(short)uVar1);
    }
    if ((local_8 & 0xffff) == 1) {
      local_4c = local_44[0];
      local_58 = ftol();
      local_60 = -1;
      iVar2 = FUN_1002548b(local_c,(int)local_c,0x200,local_44);
      if (iVar2 == 0) {
        local_5c = 0;
      }
      else {
        local_5c = ftol();
      }
      for (local_50 = 0; local_50 < local_4c; local_50 = local_50 + 1) {
        (**(code **)((int)local_c + 0x5c))(local_c,local_48,(int)local_50,&local_54);
        (**(code **)((int)local_c + 0x24))(local_c,local_48,local_54);
        *(undefined2 *)(&DAT_10043cca + local_50 * 0xc + param_1 * 0x98) = (undefined2)local_54;
        uVar3 = FUN_1001674b((int)local_c);
        *(short *)(&DAT_10043cc0 + local_50 * 0xc + param_1 * 0x98) = (short)uVar3;
        uVar3 = FUN_1001666a((int)local_c);
        *(short *)(&DAT_10043cc2 + local_50 * 0xc + param_1 * 0x98) = (short)uVar3;
        *(undefined2 *)(&DAT_10043cc4 + local_50 * 0xc + param_1 * 0x98) = local_5c;
        if (local_54 == local_58) {
          local_60 = local_50;
        }
      }
      *(short *)(DAT_10043338 + 0x32 + param_1 * 0x110) = local_4c;
      *param_2 = local_4c;
      if (local_60 == -1) {
        local_60 = *(short *)(DAT_10043338 + 0x32 + param_1 * 0x110) + -1;
        local_58 = *(short *)(&DAT_10043cca + local_60 * 0xc + param_1 * 0x98);
      }
      (**(code **)((int)local_c + 0x24))(local_c,local_48,(int)local_58);
      *(short *)(&DAT_10043d50 + param_1 * 0x98) = local_60;
      *(uint *)(&DAT_10043d54 + param_1 * 0x98) = local_48;
      uVar1 = local_48;
    }
    else {
      *(undefined2 *)(DAT_10043338 + 0x32 + param_1 * 0x110) = 0;
    }
    uVar4 = (undefined2)(uVar1 >> 0x10);
  }
  return CONCAT22(uVar4,(undefined2)local_8);
}



/* ================================================================
 * Function: FUN_1001666a
 * Address:  1001666a
 * ================================================================ */

undefined4 FUN_1001666a(int param_1)

{
  int iVar1;
  undefined2 local_c;
  
  iVar1 = (**(code **)(param_1 + 0x238))(param_1);
  switch(iVar1 + -1) {
  case 0:
    local_c = 40000;
    break;
  case 1:
    local_c = 0x8235;
    break;
  case 2:
    local_c = 0x765f;
    break;
  case 3:
    local_c = 20000;
    break;
  case 4:
    local_c = 0x411a;
    break;
  case 5:
    local_c = 10000;
    break;
  case 6:
    local_c = 0x1a0a;
    break;
  case 7:
    local_c = 5000;
    break;
  case 8:
    local_c = 0x915;
    break;
  case 9:
    local_c = 2000;
    break;
  case 10:
    local_c = 1000;
    break;
  case 0xb:
    local_c = 500;
    break;
  case 0xc:
    local_c = 200;
    break;
  default:
    local_c = 1000;
  }
  return CONCAT22((short)((uint)(iVar1 + -1) >> 0x10),local_c);
}



/* ================================================================
 * Function: FUN_1001674b
 * Address:  1001674b
 * ================================================================ */

undefined4 FUN_1001674b(int param_1)

{
  short sVar1;
  undefined2 local_c;
  
  sVar1 = (**(code **)(param_1 + 0x250))(param_1);
  switch(sVar1 + -1) {
  case 0:
    local_c = 0xc;
    break;
  case 1:
    local_c = 0xe;
    break;
  case 2:
    local_c = 0xf;
    break;
  case 3:
    local_c = 0x10;
    break;
  case 4:
    local_c = 0x12;
    break;
  default:
    local_c = 0x10;
  }
  return CONCAT22((short)((uint)(sVar1 + -1) >> 0x10),local_c);
}



/* ================================================================
 * Function: pl_spdtab_get_bits
 * Address:  100167d0
 * ================================================================ */

uint pl_spdtab_get_bits(short param_1,ushort *param_2)

{
  undefined2 uVar1;
  uint uVar2;
  undefined2 extraout_var;
  
                    /* 0x167d0  90  pl_spdtab_get_bits */
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    uVar2 = pm_spdtab_get_bits(param_1,param_2);
  }
  else {
    uVar1 = pi_spdtab_get_bits(param_1,param_2);
    uVar2 = CONCAT22(extraout_var,uVar1);
  }
  return uVar2;
}



/* ================================================================
 * Function: pl_spdtab_get_entries
 * Address:  10016836
 * ================================================================ */

undefined4 pl_spdtab_get_entries(short param_1,undefined2 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
                    /* 0x16836  91  pl_spdtab_get_entries */
  uVar1 = pv_cam_get_reads(param_1);
  if ((uVar1 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else {
    *param_2 = *(undefined2 *)(DAT_10043338 + 0x32 + param_1 * 0x110);
    *(undefined2 *)(DAT_10043334 + 8 + param_1 * 0x24) =
         *(undefined2 *)(DAT_10043338 + 0x32 + param_1 * 0x110);
    uVar2 = CONCAT22((short)((uint)(param_1 * 0x24) >> 0x10),1);
  }
  return uVar2;
}



/* ================================================================
 * Function: pl_spdtab_get_gain
 * Address:  1001689c
 * ================================================================ */

uint pl_spdtab_get_gain(short param_1,ushort *param_2)

{
  uint uVar1;
  
                    /* 0x1689c  92  pl_spdtab_get_gain */
  uVar1 = pl_cam_check(param_1);
  if ((uVar1 & 0xffff) == 0) {
    uVar1 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    uVar1 = pm_spdtab_get_gain(param_1,param_2);
  }
  else {
    uVar1 = pi_spdtab_get_gain(param_1,param_2);
  }
  return uVar1;
}



/* ================================================================
 * Function: pl_spdtab_get_max_gain
 * Address:  10016902
 * ================================================================ */

uint pl_spdtab_get_max_gain(short param_1,ushort *param_2)

{
  uint uVar1;
  
                    /* 0x16902  93  pl_spdtab_get_max_gain */
  uVar1 = pl_cam_check(param_1);
  if ((uVar1 & 0xffff) == 0) {
    uVar1 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    uVar1 = pm_spdtab_get_max_gain(param_1,param_2);
  }
  else {
    uVar1 = pi_spdtab_get_max_gain(param_1,param_2);
  }
  return uVar1;
}



/* ================================================================
 * Function: pl_spdtab_get_num
 * Address:  10016968
 * ================================================================ */

uint pl_spdtab_get_num(short param_1,ushort *param_2)

{
  undefined2 uVar1;
  uint uVar2;
  undefined2 extraout_var;
  
                    /* 0x16968  94  pl_spdtab_get_num */
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    uVar2 = pm_spdtab_get_num(param_1,param_2);
  }
  else {
    uVar1 = pi_spdtab_get_num(param_1,param_2);
    uVar2 = CONCAT22(extraout_var,uVar1);
  }
  return uVar2;
}



/* ================================================================
 * Function: pl_spdtab_get_port
 * Address:  100169ce
 * ================================================================ */

uint pl_spdtab_get_port(short param_1,ushort *param_2)

{
  uint uVar1;
  
                    /* 0x169ce  95  pl_spdtab_get_port */
  uVar1 = pl_cam_check(param_1);
  if ((uVar1 & 0xffff) == 0) {
    uVar1 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    uVar1 = pm_spdtab_get_port(param_1,param_2);
  }
  else {
    uVar1 = pi_spdtab_get_port(param_1,(short *)param_2);
  }
  return uVar1;
}



/* ================================================================
 * Function: pl_spdtab_get_port_total
 * Address:  10016a34
 * ================================================================ */

uint pl_spdtab_get_port_total(short param_1,ushort *param_2)

{
  undefined2 uVar1;
  uint uVar2;
  undefined2 extraout_var;
  
                    /* 0x16a34  96  pl_spdtab_get_port_total */
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    uVar2 = pm_spdtab_get_port_total(param_1,param_2);
  }
  else {
    uVar1 = pi_spdtab_get_port_total(param_1,param_2);
    uVar2 = CONCAT22(extraout_var,uVar1);
  }
  return uVar2;
}



/* ================================================================
 * Function: pl_spdtab_get_time
 * Address:  10016a9a
 * ================================================================ */

uint pl_spdtab_get_time(short param_1,ushort *param_2)

{
  undefined2 uVar1;
  uint uVar2;
  undefined2 extraout_var;
  
                    /* 0x16a9a  97  pl_spdtab_get_time */
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    uVar2 = pm_spdtab_get_time(param_1,param_2);
  }
  else {
    uVar1 = pi_spdtab_get_time(param_1,param_2);
    uVar2 = CONCAT22(extraout_var,uVar1);
  }
  return uVar2;
}



/* ================================================================
 * Function: pl_spdtab_set_gain
 * Address:  10016b00
 * ================================================================ */

uint pl_spdtab_set_gain(short param_1,char param_2)

{
  uint uVar1;
  
                    /* 0x16b00  98  pl_spdtab_set_gain */
  uVar1 = pl_cam_check(param_1);
  if ((uVar1 & 0xffff) == 0) {
    uVar1 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    uVar1 = pm_spdtab_set_gain(param_1,param_2);
  }
  else {
    uVar1 = pi_spdtab_set_gain(param_1);
  }
  return uVar1;
}



/* ================================================================
 * Function: pl_spdtab_set_num
 * Address:  10016b68
 * ================================================================ */

uint pl_spdtab_set_num(short param_1,ushort param_2)

{
  uint uVar1;
  
                    /* 0x16b68  99  pl_spdtab_set_num */
  uVar1 = pl_cam_check(param_1);
  if ((uVar1 & 0xffff) == 0) {
    uVar1 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    uVar1 = pm_spdtab_set_num(param_1,param_2);
  }
  else {
    uVar1 = pi_spdtab_set_num(param_1,param_2);
  }
  return uVar1;
}



/* ================================================================
 * Function: pm_spdtab_get_bits
 * Address:  10016bd0
 * ================================================================ */

/* __stdcall pm_spdtab_get_bits,8 */

int pm_spdtab_get_bits(short param_1,ushort *param_2)

{
  ushort extraout_var;
  int iVar1;
  uint uVar2;
  char local_114 [254];
  byte abStack_16 [10];
  undefined2 local_c [2];
  uint local_8;
  
                    /* 0x16bd0  429  _pm_spdtab_get_bits@8 */
  local_8 = CONCAT22(local_8._2_2_,5);
  abStack_16[2] = 0x26;
  abStack_16[3] = 0;
  abStack_16[4] = 0x28;
  abStack_16[5] = 0;
  abStack_16[6] = 1;
  if (*(short *)(DAT_10043334 + 8 + param_1 * 0x24) == -1) {
    pl_spdtab_get_entries(param_1,local_c);
  }
  if (*(short *)(DAT_10043334 + 8 + param_1 * 0x24) < 1) {
    pv_set_error_code(0x7dc);
    iVar1 = (uint)extraout_var << 0x10;
  }
  else {
    if (5 < (local_8 & 0xffff)) {
      sprintf(local_114,s_PVLIB__SIZE_ERROR_in____s___writ_1003c0d8,5,local_8 & 0xffff);
    }
    if (5 < CONCAT11(abStack_16[local_8 & 0xffff],abStack_16[(local_8 & 0xffff) + 1])) {
      sprintf(local_114,s_PVLIB__SIZE_ERROR_in____s___read_1003c128,5,
              (uint)CONCAT11(abStack_16[local_8 & 0xffff],abStack_16[(local_8 & 0xffff) + 1]));
    }
    uVar2 = pm_cam_write_read(param_1,0x3f,(ushort)local_8,(char *)(abStack_16 + 2),abStack_16 + 2);
    if ((uVar2 & 0xffff) == 0) {
      iVar1 = 0;
    }
    else {
      *param_2 = (ushort)abStack_16[2];
      iVar1 = 1;
    }
  }
  return iVar1;
}



/* ================================================================
 * Function: pm_spdtab_get_gain
 * Address:  10016cff
 * ================================================================ */

/* __stdcall pm_spdtab_get_gain,8 */

int pm_spdtab_get_gain(short param_1,ushort *param_2)

{
  ushort extraout_var;
  int iVar1;
  uint uVar2;
  char local_114 [254];
  byte abStack_16 [10];
  undefined2 local_c [2];
  uint local_8;
  
                    /* 0x16cff  430  _pm_spdtab_get_gain@8 */
  local_8 = CONCAT22(local_8._2_2_,5);
  abStack_16[2] = 0x26;
  abStack_16[3] = 0x1b;
  abStack_16[4] = 0x28;
  abStack_16[5] = 0;
  abStack_16[6] = 1;
  if (*(short *)(DAT_10043334 + 8 + param_1 * 0x24) == -1) {
    pl_spdtab_get_entries(param_1,local_c);
  }
  if (*(short *)(DAT_10043334 + 8 + param_1 * 0x24) < 1) {
    pv_set_error_code(0x7dc);
    iVar1 = (uint)extraout_var << 0x10;
  }
  else {
    if (5 < (local_8 & 0xffff)) {
      sprintf(local_114,s_PVLIB__SIZE_ERROR_in____s___writ_1003c178,5,local_8 & 0xffff);
    }
    if (5 < CONCAT11(abStack_16[local_8 & 0xffff],abStack_16[(local_8 & 0xffff) + 1])) {
      sprintf(local_114,s_PVLIB__SIZE_ERROR_in____s___read_1003c1c8,5,
              (uint)CONCAT11(abStack_16[local_8 & 0xffff],abStack_16[(local_8 & 0xffff) + 1]));
    }
    uVar2 = pm_cam_write_read(param_1,0x3f,(ushort)local_8,(char *)(abStack_16 + 2),abStack_16 + 2);
    if ((uVar2 & 0xffff) == 0) {
      iVar1 = 0;
    }
    else {
      *param_2 = (ushort)abStack_16[2];
      iVar1 = 1;
    }
  }
  return iVar1;
}



/* ================================================================
 * Function: pm_spdtab_get_max_gain
 * Address:  10016e2e
 * ================================================================ */

/* __stdcall pm_spdtab_get_max_gain,8 */

int pm_spdtab_get_max_gain(short param_1,ushort *param_2)

{
  ushort extraout_var;
  int iVar1;
  uint uVar2;
  char local_114 [254];
  byte abStack_16 [10];
  undefined2 local_c [2];
  uint local_8;
  
                    /* 0x16e2e  431  _pm_spdtab_get_max_gain@8 */
  local_8 = CONCAT22(local_8._2_2_,5);
  abStack_16[2] = 0x26;
  abStack_16[3] = 1;
  abStack_16[4] = 0x28;
  abStack_16[5] = 0;
  abStack_16[6] = 1;
  if (*(short *)(DAT_10043334 + 8 + param_1 * 0x24) == -1) {
    pl_spdtab_get_entries(param_1,local_c);
  }
  if (*(short *)(DAT_10043334 + 8 + param_1 * 0x24) < 1) {
    pv_set_error_code(0x7dc);
    iVar1 = (uint)extraout_var << 0x10;
  }
  else {
    if (5 < (local_8 & 0xffff)) {
      sprintf(local_114,s_PVLIB__SIZE_ERROR_in____s___writ_1003c218,5,local_8 & 0xffff);
    }
    if (5 < CONCAT11(abStack_16[local_8 & 0xffff],abStack_16[(local_8 & 0xffff) + 1])) {
      sprintf(local_114,s_PVLIB__SIZE_ERROR_in____s___read_1003c268,5,
              (uint)CONCAT11(abStack_16[local_8 & 0xffff],abStack_16[(local_8 & 0xffff) + 1]));
    }
    uVar2 = pm_cam_write_read(param_1,0x3f,(ushort)local_8,(char *)(abStack_16 + 2),abStack_16 + 2);
    if ((uVar2 & 0xffff) == 0) {
      iVar1 = 0;
    }
    else {
      *param_2 = (ushort)abStack_16[2];
      iVar1 = 1;
    }
  }
  return iVar1;
}



/* ================================================================
 * Function: pm_spdtab_get_num
 * Address:  10016f5d
 * ================================================================ */

/* __stdcall pm_spdtab_get_num,8 */

int pm_spdtab_get_num(short param_1,ushort *param_2)

{
  ushort extraout_var;
  int iVar1;
  uint uVar2;
  char local_114 [254];
  byte abStack_16 [10];
  undefined2 local_c [2];
  uint local_8;
  
                    /* 0x16f5d  432  _pm_spdtab_get_num@8 */
  local_8 = CONCAT22(local_8._2_2_,5);
  abStack_16[2] = 0x26;
  abStack_16[3] = 0x29;
  abStack_16[4] = 0x28;
  abStack_16[5] = 0;
  abStack_16[6] = 1;
  if (*(short *)(DAT_10043334 + 8 + param_1 * 0x24) == -1) {
    pl_spdtab_get_entries(param_1,local_c);
  }
  if (*(short *)(DAT_10043334 + 8 + param_1 * 0x24) < 1) {
    pv_set_error_code(0x7dc);
    iVar1 = (uint)extraout_var << 0x10;
  }
  else {
    if (5 < (local_8 & 0xffff)) {
      sprintf(local_114,s_PVLIB__SIZE_ERROR_in____s___writ_1003c2b8,5,local_8 & 0xffff);
    }
    if (5 < CONCAT11(abStack_16[local_8 & 0xffff],abStack_16[(local_8 & 0xffff) + 1])) {
      sprintf(local_114,s_PVLIB__SIZE_ERROR_in____s___read_1003c308,5,
              (uint)CONCAT11(abStack_16[local_8 & 0xffff],abStack_16[(local_8 & 0xffff) + 1]));
    }
    uVar2 = pm_cam_write_read(param_1,0x3f,(ushort)local_8,(char *)(abStack_16 + 2),abStack_16 + 2);
    if ((uVar2 & 0xffff) == 0) {
      iVar1 = 0;
    }
    else {
      *param_2 = (ushort)abStack_16[2];
      iVar1 = 1;
    }
  }
  return iVar1;
}



/* ================================================================
 * Function: pm_spdtab_get_port
 * Address:  1001708c
 * ================================================================ */

/* __stdcall pm_spdtab_get_port,8 */

int pm_spdtab_get_port(short param_1,ushort *param_2)

{
  ushort extraout_var;
  int iVar1;
  uint uVar2;
  char local_114 [254];
  byte abStack_16 [10];
  undefined2 local_c [2];
  uint local_8;
  
                    /* 0x1708c  433  _pm_spdtab_get_port@8 */
  local_8 = CONCAT22(local_8._2_2_,5);
  abStack_16[2] = 0x26;
  abStack_16[3] = 0x25;
  abStack_16[4] = 0x28;
  abStack_16[5] = 0;
  abStack_16[6] = 1;
  if (*(short *)(DAT_10043334 + 8 + param_1 * 0x24) == -1) {
    pl_spdtab_get_entries(param_1,local_c);
  }
  if (*(short *)(DAT_10043334 + 8 + param_1 * 0x24) < 1) {
    pv_set_error_code(0x7dc);
    iVar1 = (uint)extraout_var << 0x10;
  }
  else {
    if (5 < (local_8 & 0xffff)) {
      sprintf(local_114,s_PVLIB__SIZE_ERROR_in____s___writ_1003c358,5,local_8 & 0xffff);
    }
    if (5 < CONCAT11(abStack_16[local_8 & 0xffff],abStack_16[(local_8 & 0xffff) + 1])) {
      sprintf(local_114,s_PVLIB__SIZE_ERROR_in____s___read_1003c3a8,5,
              (uint)CONCAT11(abStack_16[local_8 & 0xffff],abStack_16[(local_8 & 0xffff) + 1]));
    }
    uVar2 = pm_cam_write_read(param_1,0x3f,(ushort)local_8,(char *)(abStack_16 + 2),abStack_16 + 2);
    if ((uVar2 & 0xffff) == 0) {
      iVar1 = 0;
    }
    else {
      *param_2 = (ushort)abStack_16[2];
      iVar1 = 1;
    }
  }
  return iVar1;
}



/* ================================================================
 * Function: pm_spdtab_get_port_total
 * Address:  100171bb
 * ================================================================ */

/* __stdcall pm_spdtab_get_port_total,8 */

int pm_spdtab_get_port_total(short param_1,ushort *param_2)

{
  ushort uVar1;
  ushort extraout_var;
  int iVar2;
  uint uVar3;
  char local_114 [254];
  byte abStack_16 [10];
  undefined2 local_c [2];
  uint local_8;
  
                    /* 0x171bb  434  _pm_spdtab_get_port_total@8 */
  local_8 = CONCAT22(local_8._2_2_,5);
  abStack_16[2] = 0x26;
  abStack_16[3] = 0x1a;
  abStack_16[4] = 0x28;
  abStack_16[5] = 0;
  abStack_16[6] = 1;
  if (*(short *)(DAT_10043334 + 8 + param_1 * 0x24) == -1) {
    pl_spdtab_get_entries(param_1,local_c);
  }
  if (*(short *)(DAT_10043334 + 8 + param_1 * 0x24) < 1) {
    pv_set_error_code(0x7dc);
    iVar2 = (uint)extraout_var << 0x10;
  }
  else {
    if (5 < (local_8 & 0xffff)) {
      sprintf(local_114,s_PVLIB__SIZE_ERROR_in____s___writ_1003c3f8,5,local_8 & 0xffff);
    }
    if (5 < CONCAT11(abStack_16[local_8 & 0xffff],abStack_16[(local_8 & 0xffff) + 1])) {
      sprintf(local_114,s_PVLIB__SIZE_ERROR_in____s___read_1003c448,5,
              (uint)CONCAT11(abStack_16[local_8 & 0xffff],abStack_16[(local_8 & 0xffff) + 1]));
    }
    uVar3 = pm_cam_write_read(param_1,0x3f,(ushort)local_8,(char *)(abStack_16 + 2),abStack_16 + 2);
    if ((uVar3 & 0xffff) == 0) {
      iVar2 = 0;
    }
    else {
      *param_2 = (ushort)abStack_16[2];
      uVar1 = *param_2;
      if ((short)uVar1 < 1) {
        *param_2 = 1;
      }
      iVar2 = CONCAT22((short)uVar1 >> 0xf,1);
    }
  }
  return iVar2;
}



/* ================================================================
 * Function: pm_spdtab_get_time
 * Address:  100172fd
 * ================================================================ */

/* __stdcall pm_spdtab_get_time,8 */

int pm_spdtab_get_time(short param_1,ushort *param_2)

{
  ushort extraout_var;
  int iVar1;
  uint uVar2;
  char local_114 [254];
  char acStack_16 [10];
  undefined2 local_c [2];
  uint local_8;
  
                    /* 0x172fd  435  _pm_spdtab_get_time@8 */
  local_8 = CONCAT22(local_8._2_2_,5);
  builtin_strncpy(acStack_16 + 2,"&\x02(",4);
  acStack_16[6] = 2;
  if (*(short *)(DAT_10043334 + 8 + param_1 * 0x24) == -1) {
    pl_spdtab_get_entries(param_1,local_c);
  }
  if (*(short *)(DAT_10043334 + 8 + param_1 * 0x24) < 1) {
    pv_set_error_code(0x7dc);
    iVar1 = (uint)extraout_var << 0x10;
  }
  else {
    if (5 < (local_8 & 0xffff)) {
      sprintf(local_114,s_PVLIB__SIZE_ERROR_in____s___writ_1003c498,5,local_8 & 0xffff);
    }
    if (5 < CONCAT11(acStack_16[local_8 & 0xffff],acStack_16[(local_8 & 0xffff) + 1])) {
      sprintf(local_114,s_PVLIB__SIZE_ERROR_in____s___read_1003c4e8,5,
              (uint)CONCAT11(acStack_16[local_8 & 0xffff],acStack_16[(local_8 & 0xffff) + 1]));
    }
    uVar2 = pm_cam_write_read(param_1,0x3f,(ushort)local_8,acStack_16 + 2,acStack_16 + 2);
    if ((uVar2 & 0xffff) == 0) {
      iVar1 = 0;
    }
    else {
      *param_2 = CONCAT11(acStack_16[3],acStack_16[2]) << 8 | (ushort)(byte)acStack_16[3];
      iVar1 = 1;
    }
  }
  return iVar1;
}



/* ================================================================
 * Function: pm_spdtab_set_gain
 * Address:  1001743d
 * ================================================================ */

/* __stdcall pm_spdtab_set_gain,8 */

int pm_spdtab_set_gain(short param_1,char param_2)

{
  ushort extraout_var;
  int iVar1;
  uint uVar2;
  ushort extraout_var_00;
  char local_118 [254];
  char acStack_1a [10];
  char local_10;
  undefined3 uStack_f;
  undefined2 local_c [2];
  uint local_8;
  
                    /* 0x1743d  436  _pm_spdtab_set_gain@8 */
  local_8 = CONCAT22(local_8._2_2_,7);
  acStack_1a[2] = ',';
  acStack_1a[3] = 0;
  acStack_1a[4] = 0x26;
  acStack_1a[5] = 0x1b;
  acStack_1a[6] = 0x28;
  acStack_1a[7] = 0;
  acStack_1a[8] = 1;
  if (*(short *)(DAT_10043334 + 8 + param_1 * 0x24) == -1) {
    pl_spdtab_get_entries(param_1,local_c);
  }
  if (*(short *)(DAT_10043334 + 8 + param_1 * 0x24) < 1) {
    pv_set_error_code(0x7dc);
    iVar1 = (uint)extraout_var << 0x10;
  }
  else {
    acStack_1a[3] = param_2;
    if (7 < (local_8 & 0xffff)) {
      sprintf(local_118,s_PVLIB__SIZE_ERROR_in____s___writ_1003c538,7,local_8 & 0xffff);
    }
    if (7 < CONCAT11(acStack_1a[local_8 & 0xffff],acStack_1a[(local_8 & 0xffff) + 1])) {
      sprintf(local_118,s_PVLIB__SIZE_ERROR_in____s___read_1003c588,7,
              (uint)CONCAT11(acStack_1a[local_8 & 0xffff],acStack_1a[(local_8 & 0xffff) + 1]));
    }
    uVar2 = pm_cam_write_read(param_1,0x3f,(ushort)local_8,acStack_1a + 2,acStack_1a + 2);
    if ((uVar2 & 0xffff) == 0) {
      iVar1 = 0;
    }
    else {
      _local_10 = CONCAT31(uStack_f,acStack_1a[2]);
      if (acStack_1a[2] == param_2) {
        iVar1 = 1;
      }
      else {
        pv_set_error_code(0x7d3);
        iVar1 = (uint)extraout_var_00 << 0x10;
      }
    }
  }
  return iVar1;
}



/* ================================================================
 * Function: pm_spdtab_set_num
 * Address:  10017599
 * ================================================================ */

/* __stdcall pm_spdtab_set_num,8 */

int pm_spdtab_set_num(short param_1,ushort param_2)

{
  bool bVar1;
  ushort extraout_var_00;
  int iVar2;
  ushort extraout_var_01;
  uint uVar3;
  ushort extraout_var_02;
  undefined3 extraout_var;
  ushort extraout_var_03;
  char local_118 [256];
  ushort local_18;
  byte abStack_16 [10];
  undefined2 local_c [2];
  uint local_8;
  
                    /* 0x17599  437  _pm_spdtab_set_num@8 */
  local_8 = CONCAT22(local_8._2_2_,7);
  abStack_16[2] = 0x2b;
  abStack_16[3] = 0;
  abStack_16[4] = 0x26;
  abStack_16[5] = 0x29;
  abStack_16[6] = 0x28;
  abStack_16[7] = 0;
  abStack_16[8] = 1;
  if (*(short *)(DAT_10043334 + 8 + param_1 * 0x24) == -1) {
    pl_spdtab_get_entries(param_1,local_c);
  }
  if (*(short *)(DAT_10043334 + 8 + param_1 * 0x24) < 1) {
    pv_set_error_code(0x7dc);
    iVar2 = (uint)extraout_var_00 << 0x10;
  }
  else if ((short)param_2 < *(short *)(DAT_10043334 + 8 + param_1 * 0x24)) {
    abStack_16[3] = (undefined1)param_2;
    if (7 < (local_8 & 0xffff)) {
      sprintf(local_118,s_PVLIB__SIZE_ERROR_in____s___writ_1003c5d8,7,local_8 & 0xffff);
    }
    if (7 < CONCAT11(abStack_16[local_8 & 0xffff],abStack_16[(local_8 & 0xffff) + 1])) {
      sprintf(local_118,s_PVLIB__SIZE_ERROR_in____s___read_1003c628,7,
              (uint)CONCAT11(abStack_16[local_8 & 0xffff],abStack_16[(local_8 & 0xffff) + 1]));
    }
    uVar3 = pm_cam_write_read(param_1,0x3f,(ushort)local_8,(char *)(abStack_16 + 2),abStack_16 + 2);
    if ((uVar3 & 0xffff) == 0) {
      iVar2 = 0;
    }
    else {
      local_18 = (ushort)abStack_16[2];
      if (local_18 == param_2) {
        bVar1 = pv_exp_set_script(param_1,0);
        if ((CONCAT31(extraout_var,bVar1) & 0xffff) == 0) {
          pv_set_error_code(0x7d3);
          iVar2 = (uint)extraout_var_03 << 0x10;
        }
        else {
          iVar2 = 1;
        }
      }
      else {
        pv_set_error_code(0x7d3);
        iVar2 = (uint)extraout_var_02 << 0x10;
      }
    }
  }
  else {
    pv_set_error_code(0x7dd);
    iVar2 = (uint)extraout_var_01 << 0x10;
  }
  return iVar2;
}



/* ================================================================
 * Function: pi_exp_check_cont_status
 * Address:  10017740
 * ================================================================ */

/* __stdcall pi_exp_check_cont_status,16 */

undefined4 pi_exp_check_cont_status(short param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort extraout_var;
  ushort extraout_var_00;
  ushort extraout_var_01;
  ushort extraout_var_02;
  ushort extraout_var_03;
  ushort extraout_var_04;
  ushort extraout_var_05;
  ushort extraout_var_06;
  ushort extraout_var_07;
  undefined2 uVar4;
  undefined2 extraout_var_08;
  undefined2 local_10;
  
                    /* 0x17740  210  _pi_exp_check_cont_status@16 */
  local_10 = 1;
  iVar3 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
  if (iVar3 == 0) {
    pv_set_error_code(0xbcf);
    local_10 = 0;
    uVar4 = extraout_var_08;
  }
  else {
    uVar1 = (**(code **)(iVar3 + 0x344))(iVar3);
    if (((uVar1 & 0x10) == 0) && ((uVar1 & 0x40) == 0)) {
      if ((uVar1 & 0xffffcfac) == 0) {
        if ((uVar1 & 1) == 0) {
          if (((uVar1 & 0x2000) != 0) || (param_3 = (int *)0x0, (uVar1 & 0x1000) != 0)) {
            *(undefined2 *)param_2 = 0;
            param_3 = param_2;
          }
        }
        else {
          *(undefined2 *)param_2 = 5;
          param_3 = param_2;
        }
      }
      else {
        *(undefined2 *)param_2 = 4;
        if ((uVar1 & 4) == 0) {
          if ((uVar1 & 8) == 0) {
            if ((uVar1 & 0x20) == 0) {
              if ((uVar1 & 0x80) == 0) {
                if ((uVar1 & 0x100) == 0) {
                  if ((uVar1 & 0x200) == 0) {
                    if ((uVar1 & 0x400) == 0) {
                      if ((uVar1 & 0x800) == 0) {
                        pv_set_error_code(0xbec);
                        param_3 = (int *)((uint)extraout_var_07 << 0x10);
                      }
                      else {
                        pv_set_error_code(0xbeb);
                        param_3 = (int *)((uint)extraout_var_06 << 0x10);
                      }
                    }
                    else {
                      pv_set_error_code(0xbea);
                      param_3 = (int *)((uint)extraout_var_05 << 0x10);
                    }
                  }
                  else {
                    pv_set_error_code(0xbe9);
                    param_3 = (int *)((uint)extraout_var_04 << 0x10);
                  }
                }
                else {
                  pv_set_error_code(0xbe8);
                  param_3 = (int *)((uint)extraout_var_03 << 0x10);
                }
              }
              else {
                pv_set_error_code(0xbe7);
                param_3 = (int *)((uint)extraout_var_02 << 0x10);
              }
            }
            else {
              pv_set_error_code(0xbe6);
              param_3 = (int *)((uint)extraout_var_01 << 0x10);
            }
          }
          else {
            pv_set_error_code(0xbe5);
            param_3 = (int *)((uint)extraout_var_00 << 0x10);
          }
        }
        else {
          pv_set_error_code(0xbe4);
          param_3 = (int *)((uint)extraout_var << 0x10);
        }
        local_10 = 0;
      }
    }
    else {
      *(undefined2 *)param_2 = 3;
      iVar2 = (**(code **)(iVar3 + 0x21c))(iVar3);
      iVar3 = (**(code **)(iVar3 + 0x220))(iVar3);
      *param_3 = iVar2 * iVar3 * 2;
    }
    uVar4 = (undefined2)((uint)param_3 >> 0x10);
  }
  return CONCAT22(uVar4,local_10);
}



/* ================================================================
 * Function: pi_exp_abort
 * Address:  10017943
 * ================================================================ */

/* __stdcall pi_exp_abort,8 */

undefined2 pi_exp_abort(short param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 local_10 [2];
  undefined2 local_c;
  uint local_8;
  
                    /* 0x17943  209  _pi_exp_abort@8 */
  local_c = 1;
  iVar1 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
  if (iVar1 == 0) {
    pv_set_error_code(0xbcf);
    local_c = 0;
  }
  else {
    (**(code **)(iVar1 + 0xc))(iVar1);
    switch(param_2) {
    case 1:
      local_10[0] = 0;
      pl_set_param(param_1,0xb02021c,(uint *)local_10);
      break;
    case 2:
      pl_get_param(param_1,0x9020209,0,&local_8);
      if (((local_8 != 0) && (local_8 != 1)) && (local_8 != 3)) {
        local_8 = 0;
      }
      pl_set_param(param_1,0x9020209,&local_8);
      local_10[0] = 0;
      pl_set_param(param_1,0xb02021c,(uint *)local_10);
      break;
    case 3:
      local_10[0] = 1;
      pl_set_param(param_1,0xb02021c,(uint *)local_10);
      break;
    case 4:
      pl_get_param(param_1,0x9020209,0,&local_8);
      if (((local_8 != 0) && (local_8 != 1)) && (local_8 != 3)) {
        local_8 = 0;
      }
      pl_set_param(param_1,0x9020209,&local_8);
      local_10[0] = 1;
      pl_set_param(param_1,0xb02021c,(uint *)local_10);
      break;
    case 5:
      pl_get_param(param_1,0x9020209,0,&local_8);
      if (local_8 != 2) {
        local_8 = 2;
      }
      pl_set_param(param_1,0x9020209,&local_8);
      break;
    case 6:
      pl_get_param(param_1,0x9020209,0,&local_8);
      if (local_8 != 2) {
        local_8 = 2;
      }
      pl_set_param(param_1,0x9020209,&local_8);
      local_10[0] = 1;
      pl_set_param(param_1,0xb02021c,(uint *)local_10);
    }
  }
  return local_c;
}



/* ================================================================
 * Function: pi_exp_check_status
 * Address:  10017b4d
 * ================================================================ */

/* __stdcall pi_exp_check_status,12 */

undefined4 pi_exp_check_status(short param_1,undefined2 *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  ushort extraout_var;
  ushort extraout_var_00;
  ushort extraout_var_01;
  ushort extraout_var_02;
  ushort extraout_var_03;
  undefined2 *puVar3;
  undefined2 extraout_var_04;
  undefined2 local_18;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  uint local_c;
  undefined1 local_8 [4];
  undefined2 uVar4;
  
                    /* 0x17b4d  212  _pi_exp_check_status@12 */
  *param_3 = 0;
  local_18 = 1;
  iVar2 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
  if (iVar2 == 0) {
    pv_set_error_code(0xbcf);
    local_18 = 0;
    uVar4 = extraout_var_04;
  }
  else {
    local_c = (**(code **)(iVar2 + 0x344))(iVar2);
    if (((local_c & 0x10) == 0) && ((local_c & 0x40) == 0)) {
      if ((local_c & 1) == 0) {
        if (((local_c & 0x2000) == 0) && ((local_c & 0x1000) == 0)) {
          *param_2 = 4;
          local_18 = 0;
        }
        else {
          *param_2 = 0;
        }
      }
      else {
        *param_2 = 5;
      }
      if ((local_c & 4) == 0) {
        puVar3 = param_2;
        if ((local_c & 8) == 0) {
          if ((local_c & 0x20) == 0) {
            if ((local_c & 0x80) == 0) {
              if ((local_c & 0x100) == 0) {
                if ((local_c & 0x200) == 0) {
                  if ((local_c & 0x400) == 0) {
                    puVar3 = (undefined2 *)0x0;
                    if ((local_c & 0x800) != 0) {
                      pv_set_error_code(0xbeb);
                      local_18 = 0;
                      *param_2 = 4;
                      puVar3 = param_2;
                    }
                  }
                  else {
                    pv_set_error_code(0xbea);
                    local_18 = 0;
                    *param_2 = 4;
                    puVar3 = (undefined2 *)((uint)extraout_var_03 << 0x10);
                  }
                }
                else {
                  pv_set_error_code(0xbe9);
                  local_18 = 0;
                  *param_2 = 4;
                  puVar3 = (undefined2 *)((uint)extraout_var_02 << 0x10);
                }
              }
              else {
                pv_set_error_code(0xbe8);
                local_18 = 0;
                *param_2 = 4;
              }
            }
            else {
              pv_set_error_code(0xbe7);
              local_18 = 0;
              *param_2 = 4;
              puVar3 = (undefined2 *)((uint)extraout_var_01 << 0x10);
            }
          }
          else {
            pv_set_error_code(0xbe6);
            local_18 = 0;
            *param_2 = 4;
            puVar3 = (undefined2 *)((uint)extraout_var_00 << 0x10);
          }
        }
        else {
          pv_set_error_code(0xbe5);
          local_18 = 0;
          *param_2 = 4;
        }
      }
      else {
        pv_set_error_code(0xbe4);
        local_18 = 0;
        *param_2 = 4;
        puVar3 = (undefined2 *)((uint)extraout_var << 0x10);
      }
    }
    else {
      (**(code **)(iVar2 + 0x624))(iVar2,local_14,local_8,local_10);
      (**(code **)(iVar2 + 0x628))(iVar2);
      *(int *)(DAT_10042750 + 0xc + param_1 * 0x20) =
           *(int *)(DAT_10042750 + 0xc + param_1 * 0x20) + 1;
      if (*(int *)(DAT_10042750 + 0xc + param_1 * 0x20) ==
          *(int *)(DAT_10042750 + 8 + param_1 * 0x20)) {
        *param_2 = 3;
      }
      else {
        *param_2 = 5;
      }
      iVar1 = (**(code **)(iVar2 + 0x21c))(iVar2);
      iVar2 = (**(code **)(iVar2 + 0x220))(iVar2);
      *param_3 = iVar1 * iVar2 * 2 * *(int *)(DAT_10042750 + 0xc + param_1 * 0x20);
      puVar3 = (undefined2 *)(param_1 * 0x20);
    }
    uVar4 = (undefined2)((uint)puVar3 >> 0x10);
  }
  return CONCAT22(uVar4,local_18);
}



/* ================================================================
 * Function: pi_exp_get_driver_buffer
 * Address:  10017e00
 * ================================================================ */

/* __stdcall pi_exp_get_driver_buffer,12 */

int pi_exp_get_driver_buffer(short param_1,void *param_2,undefined4 param_3)

{
  int iVar1;
  ushort extraout_var;
  ushort extraout_var_00;
  
                    /* 0x17e00  216  _pi_exp_get_driver_buffer@12 */
  iVar1 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
  if (iVar1 == 0) {
    pv_set_error_code(0xbcf);
    iVar1 = (uint)extraout_var_00 << 0x10;
  }
  else {
    iVar1 = FUN_10025508(param_2,iVar1,param_2,param_3);
    if (iVar1 == 0) {
      pv_set_error_code(0xbd8);
      iVar1 = (uint)extraout_var << 0x10;
    }
    else {
      iVar1 = CONCAT22((short)((uint)iVar1 >> 0x10),1);
    }
  }
  return iVar1;
}



/* ================================================================
 * Function: pi_exp_get_latest_frame
 * Address:  10017e5d
 * ================================================================ */

/* __stdcall pi_exp_get_latest_frame,8 */

int pi_exp_get_latest_frame(short param_1,undefined4 param_2)

{
  undefined2 extraout_var;
  ushort extraout_var_00;
  ushort extraout_var_01;
  ushort extraout_var_02;
  int iVar1;
  ushort extraout_var_03;
  ushort extraout_var_04;
  uint local_10;
  int local_c;
  undefined1 local_8 [4];
  ushort uVar2;
  
                    /* 0x17e5d  218  _pi_exp_get_latest_frame@8 */
  if (*(short *)(DAT_10043330 + 0x20 + param_1 * 0x2c) == 1) {
    iVar1 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
    if (iVar1 == 0) {
      pv_set_error_code(0xbcf);
      iVar1 = (uint)extraout_var_03 << 0x10;
    }
    else {
      local_c = (**(code **)(iVar1 + 0x624))(iVar1,param_2,local_8,&local_10);
      (**(code **)(iVar1 + 0x628))(iVar1);
      if (local_c == 0) {
        pv_set_error_code(0xbd5);
        uVar2 = extraout_var_00;
        if ((local_10 & 0x100) != 0) {
          pv_set_error_code(0xbda);
          uVar2 = extraout_var_01;
        }
        if ((local_10 & 0x80) != 0) {
          pv_set_error_code(0xbd9);
          uVar2 = extraout_var_02;
        }
        iVar1 = (uint)uVar2 << 0x10;
      }
      else {
        iVar1 = CONCAT22(extraout_var,1);
      }
    }
  }
  else {
    pv_set_error_code(0xbd6);
    iVar1 = (uint)extraout_var_04 << 0x10;
  }
  return iVar1;
}



/* ================================================================
 * Function: pi_exp_set_cont_mode
 * Address:  10017f2c
 * ================================================================ */

/* __stdcall pi_exp_set_cont_mode,8 */

int pi_exp_set_cont_mode(short param_1)

{
  undefined2 extraout_var;
  ushort extraout_var_00;
  int iVar1;
  
                    /* 0x17f2c  222  _pi_exp_set_cont_mode@8 */
  iVar1 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
  if (iVar1 == 0) {
    pv_set_error_code(0xbcf);
    iVar1 = (uint)extraout_var_00 << 0x10;
  }
  else {
    (**(code **)(iVar1 + 0x24))(iVar1,0x121,0);
    (**(code **)(iVar1 + 0x3e0))(iVar1,0);
    (**(code **)(iVar1 + 0x348))(iVar1,0x7fff);
    if (*(short *)(DAT_10043330 + 0x20 + param_1 * 0x2c) == 1) {
      (**(code **)(iVar1 + 0x24))(iVar1,0x106,3);
    }
    else {
      (**(code **)(iVar1 + 0x24))(iVar1,0x106,4);
    }
    (**(code **)(iVar1 + 4))(iVar1);
    (**(code **)(iVar1 + 0x544))(iVar1);
    iVar1 = CONCAT22(extraout_var,1);
  }
  return iVar1;
}



/* ================================================================
 * Function: pi_exp_get_oldest_frame
 * Address:  10017fed
 * ================================================================ */

/* __stdcall pi_exp_get_oldest_frame,8 */

int pi_exp_get_oldest_frame(short param_1,undefined4 param_2)

{
  int iVar1;
  ushort extraout_var_00;
  ushort extraout_var_01;
  uint local_10;
  int local_c;
  undefined1 local_8 [4];
  ushort extraout_var;
  
                    /* 0x17fed  219  _pi_exp_get_oldest_frame@8 */
  if (*(short *)(DAT_10043330 + 0x20 + param_1 * 0x2c) == 2) {
    iVar1 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
    if (iVar1 == 0) {
      pv_set_error_code(0xbcf);
      iVar1 = (uint)extraout_var_00 << 0x10;
    }
    else {
      local_c = (**(code **)(iVar1 + 0x624))(iVar1,param_2,local_8,&local_10);
      if (local_c == 0) {
        pv_set_error_code(0xbd5);
        if ((local_10 & 0x100) != 0) {
          pv_set_error_code(0xbda);
        }
        iVar1 = 0;
        if ((local_10 & 0x80) != 0) {
          pv_set_error_code(0xbd9);
          iVar1 = (uint)extraout_var << 0x10;
        }
      }
      else {
        iVar1 = CONCAT22((short)((uint)local_c >> 0x10),1);
      }
    }
  }
  else {
    pv_set_error_code(0xbd6);
    iVar1 = (uint)extraout_var_01 << 0x10;
  }
  return iVar1;
}



/* ================================================================
 * Function: pi_exp_setup_cont
 * Address:  100180ae
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* __stdcall pi_exp_setup_cont,28 */

int pi_exp_setup_cont(short param_1,uint param_2,int param_3,short param_4,uint param_5,
                     uint *param_6,undefined2 param_7)

{
  ushort extraout_var;
  int iVar1;
  uint uVar2;
  ushort extraout_var_00;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort extraout_var_01;
  undefined2 extraout_var_02;
  ushort extraout_var_03;
  short *local_24;
  short local_20;
  short *local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined2 local_8;
  
                    /* 0x180ae  224  _pi_exp_setup_cont@28 */
  local_1c = (short *)0x0;
  local_24 = (short *)0x0;
  if (DAT_10042750 == 0) {
    pv_set_error_code(0xbcb);
    iVar1 = (uint)extraout_var << 0x10;
  }
  else {
    *(undefined4 *)(DAT_10042750 + 8 + param_1 * 0x20) = 1;
    *(undefined4 *)(DAT_10042750 + 0xc + param_1 * 0x20) = 0;
    *(undefined2 *)(DAT_10043330 + 0x20 + param_1 * 0x2c) = param_7;
    iVar1 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
    if (iVar1 == 0) {
      pv_set_error_code(0xbcf);
      iVar1 = (uint)extraout_var_03 << 0x10;
    }
    else {
      uVar2 = FUN_10019183(iVar1,param_4);
      if ((uVar2 & 0xffff) == 0) {
        pv_set_error_code(local_8);
        iVar1 = (uint)extraout_var_00 << 0x10;
      }
      else {
        (**(code **)(iVar1 + 0x2ac))(iVar1);
        (**(code **)(iVar1 + 0x298))(iVar1);
        for (local_20 = 0; (int)local_20 < (int)(param_2 & 0xffff); local_20 = local_20 + 1) {
          if (local_24 == (short *)0x0) {
            local_24 = malloc(0xc);
            local_1c = local_24;
          }
          else {
            pvVar3 = malloc(0xc);
            *(void **)(local_1c + 4) = pvVar3;
            local_1c = *(short **)(local_1c + 4);
          }
          local_14 = *(ushort *)(param_3 + local_20 * 0xc) + 1;
          local_c = *(ushort *)(param_3 + 2 + local_20 * 0xc) + 1;
          local_10 = *(ushort *)(param_3 + 8 + local_20 * 0xc) + 1;
          local_18 = *(ushort *)(param_3 + 6 + local_20 * 0xc) + 1;
          local_1c[4] = 0;
          local_1c[5] = 0;
          *local_1c = ((short)local_10 - (short)local_18) + 1;
          local_1c[1] = 1;
          pvVar3 = pv_malloc(4,0);
          *(void **)(local_1c + 2) = pvVar3;
          *(short *)(*(int *)(local_1c + 2) + 2) = ((short)local_c - (short)local_14) + 1;
          **(short **)(local_1c + 2) = local_20;
          uVar2 = (uint)*(ushort *)(param_3 + 4 + local_20 * 0xc);
          iVar4 = iVar1;
          (**(code **)(iVar1 + 0x270))();
          (**(code **)(iVar1 + 0x278))
                    (iVar1,*(undefined2 *)(param_3 + 10 + local_20 * 0xc),iVar4,uVar2);
          (**(code **)(iVar1 + 0x28c))(iVar1,&local_18,(int)local_20);
          (**(code **)(iVar1 + 0x2b0))(iVar1,1);
          (**(code **)(iVar1 + 0x2b8))(iVar1,1);
        }
        (**(code **)(iVar1 + 0x294))(iVar1);
        if (*(int *)(DAT_10042750 + 0x18 + param_1 * 0x20) != 0) {
          if (*(int *)(*(int *)(DAT_10042750 + 0x18 + param_1 * 0x20) + 4) != 0) {
            pv_free(*(void **)(*(int *)(DAT_10042750 + 0x18 + param_1 * 0x20) + 4),0);
          }
          free(*(void **)(DAT_10042750 + 0x18 + param_1 * 0x20));
        }
        *(short **)(DAT_10042750 + 0x18 + param_1 * 0x20) = local_24;
        if (*(short *)(DAT_10043334 + 0x10 + param_1 * 0x24) == 1) {
          (**(code **)(iVar1 + 0x20))(iVar1,0x7f,(double)param_5 / _DAT_100260e0);
        }
        else if (*(short *)(DAT_10043334 + 0x10 + param_1 * 0x24) == 2) {
          (**(code **)(iVar1 + 0x20))(iVar1,0x7f,(double)param_5);
        }
        else {
          (**(code **)(iVar1 + 0x20))(iVar1,0x7f,(double)param_5 / _DAT_100260d0);
        }
        iVar4 = (**(code **)(iVar1 + 0x21c))(iVar1);
        iVar5 = (**(code **)(iVar1 + 0x220))(iVar1);
        iVar6 = (**(code **)(iVar1 + 0x368))(iVar1);
        *param_6 = iVar4 * iVar5 * iVar6;
        if (*param_6 % 4 != 0) {
          *param_6 = *param_6 + 4 & 0xfffffffc;
        }
        *(uint *)(DAT_10042750 + param_1 * 0x20) = *param_6;
        (**(code **)(iVar1 + 0x3e0))(iVar1,1);
        (**(code **)(iVar1 + 0x348))(iVar1,0x7fff);
        (**(code **)(iVar1 + 0x24))(iVar1,0x106,4);
        (**(code **)(iVar1 + 0xc))(iVar1);
        (**(code **)(iVar1 + 0x24))(iVar1,0x121,0);
        (**(code **)(iVar1 + 0x3e0))(iVar1,(int)*(short *)(DAT_10043330 + 0x2a + param_1 * 0x2c));
        (**(code **)(iVar1 + 0x348))(iVar1,0x7fff);
        if (*(short *)(DAT_10043330 + 0x20 + param_1 * 0x2c) == 1) {
          (**(code **)(iVar1 + 0x24))(iVar1,0x106,3);
        }
        else {
          (**(code **)(iVar1 + 0x24))(iVar1,0x106,4);
        }
        iVar4 = (**(code **)(iVar1 + 4))(iVar1);
        if (iVar4 == 0) {
          pv_set_error_code(0xbd1);
          iVar1 = (uint)extraout_var_01 << 0x10;
        }
        else {
          (**(code **)(iVar1 + 0x544))(iVar1);
          iVar1 = CONCAT22(extraout_var_02,1);
        }
      }
    }
  }
  return iVar1;
}



/* ================================================================
 * Function: pi_exp_start_cont
 * Address:  100185b2
 * ================================================================ */

/* __stdcall pi_exp_start_cont,12 */

undefined4 pi_exp_start_cont(short param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 extraout_var;
  ushort extraout_var_00;
  uint uVar4;
  uint local_c;
  int local_8;
  
                    /* 0x185b2  226  _pi_exp_start_cont@12 */
  local_8 = 0;
  iVar1 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
  if (iVar1 != 0) {
    if (param_2 != 0) {
      (**(code **)(iVar1 + 0x24))(iVar1,0x121,1);
      (**(code **)(iVar1 + 0x24))(iVar1,0x122,param_2);
      iVar2 = (**(code **)(iVar1 + 0x314))(iVar1);
      if (((iVar2 == 0xb) || (iVar2 = (**(code **)(iVar1 + 0x314))(iVar1), iVar2 == 0x14)) &&
         (0x400000 < param_3)) {
        param_3 = 0x400000;
      }
      iVar2 = (**(code **)(iVar1 + 0x21c))(iVar1);
      iVar3 = (**(code **)(iVar1 + 0x220))(iVar1);
      local_c = iVar2 * iVar3;
      uVar4 = local_c & 0x80000001;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
      }
      if (uVar4 != 0) {
        local_c = local_c + 1;
      }
      local_c = local_c * 2;
      if (local_c != 0) {
        local_8 = (param_3 / local_c) * local_c;
      }
      (**(code **)(iVar1 + 0x24))(iVar1,0x123,local_8);
      (**(code **)(iVar1 + 0x674))(iVar1);
    }
    (**(code **)(iVar1 + 0x4d8))(iVar1);
    return CONCAT22(extraout_var,1);
  }
  pv_set_error_code(0xbcf);
  return (uint)extraout_var_00 << 0x10;
}



/* ================================================================
 * Function: pi_exp_unlock_oldest_frame
 * Address:  100186e5
 * ================================================================ */

/* __stdcall pi_exp_unlock_oldest_frame,4 */

int pi_exp_unlock_oldest_frame(short param_1)

{
  undefined2 extraout_var;
  int iVar1;
  ushort extraout_var_00;
  ushort extraout_var_01;
  
                    /* 0x186e5  228  _pi_exp_unlock_oldest_frame@4 */
  if (*(short *)(DAT_10043330 + 0x20 + param_1 * 0x2c) == 2) {
    iVar1 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
    if (iVar1 == 0) {
      pv_set_error_code(0xbcf);
      iVar1 = (uint)extraout_var_00 << 0x10;
    }
    else {
      (**(code **)(iVar1 + 0x628))(iVar1);
      iVar1 = CONCAT22(extraout_var,1);
    }
  }
  else {
    pv_set_error_code(0xbd6);
    iVar1 = (uint)extraout_var_01 << 0x10;
  }
  return iVar1;
}



/* ================================================================
 * Function: pi_exp_unravel
 * Address:  1001874f
 * ================================================================ */

/* __stdcall pi_exp_unravel,24 */

int pi_exp_unravel(short param_1,undefined4 param_2,int param_3,ushort param_4,undefined4 param_5,
                  int param_6)

{
  ushort uVar1;
  ushort extraout_var;
  uint uVar2;
  ushort extraout_var_00;
  int iVar3;
  ushort uVar4;
  undefined2 *local_38;
  uint local_2c;
  uint local_28;
  uint local_20;
  uint local_1c;
  undefined2 *local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
                    /* 0x1874f  229  _pi_exp_unravel@24 */
  iVar3 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
  if (iVar3 == 0) {
    pv_set_error_code(0xbcf);
    iVar3 = (uint)extraout_var_00 << 0x10;
  }
  else {
    (**(code **)(iVar3 + 0xc))(iVar3);
    (**(code **)(iVar3 + 4))(iVar3);
    for (uVar4 = 0; uVar4 < param_4; uVar4 = uVar4 + 1) {
      local_18 = *(undefined2 **)(param_6 + (uint)uVar4 * 4);
      (**(code **)(iVar3 + 0x2a0))(iVar3,&local_14,&local_1c,&local_20,uVar4 + 1);
      uVar1 = (**(code **)(iVar3 + 0x21c))(iVar3);
      (**(code **)(iVar3 + 0x220))(iVar3);
      if ((local_1c == 0) || (local_20 == 0)) {
        pv_set_error_code(0xbc3);
        return (uint)extraout_var << 0x10;
      }
      uVar2 = ((local_8 - local_10) + 1) / (int)(local_1c & 0xffff);
      local_38 = (undefined2 *)(param_3 + (local_10 + -1 + (local_14 + -1) * (uint)uVar1) * 2);
      for (local_28 = 0;
          local_28 < (((local_c - local_14) + 1) / (int)(local_20 & 0xffff) & 0xffffU);
          local_28 = local_28 + 1) {
        for (local_2c = 0; local_2c < (uVar2 & 0xffff); local_2c = local_2c + 1) {
          *local_18 = *local_38;
          local_18 = local_18 + 1;
          local_38 = local_38 + 1;
        }
        local_38 = local_38 + ((uint)uVar1 - (uVar2 & 0xffff));
      }
    }
    iVar3 = 1;
  }
  return iVar3;
}



/* ================================================================
 * Function: pi_exp_finish_seq
 * Address:  10018926
 * ================================================================ */

/* __stdcall pi_exp_finish_seq,12 */

int pi_exp_finish_seq(short param_1,int param_2,short param_3)

{
  short sVar1;
  ushort extraout_var;
  int iVar2;
  ushort extraout_var_00;
  ushort extraout_var_01;
  uint local_8;
  
                    /* 0x18926  215  _pi_exp_finish_seq@12 */
  if (DAT_10042750 == 0) {
    pv_set_error_code(0xbcb);
    iVar2 = (uint)extraout_var << 0x10;
  }
  else if (*(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c) == 0) {
    pv_set_error_code(0xbcf);
    iVar2 = (uint)extraout_var_01 << 0x10;
  }
  else if (param_3 == 0) {
    iVar2 = 1;
  }
  else {
    for (local_8 = 0; local_8 < *(uint *)(DAT_10042750 + 4 + param_1 * 0x20);
        local_8 = local_8 + *(int *)(DAT_10042750 + param_1 * 0x20)) {
      if (*(int *)(DAT_10042750 + param_1 * 0x20) == 0) {
        pv_set_error_code(0xbd3);
        return (uint)extraout_var_00 << 0x10;
      }
      sVar1 = pv_decode_pixel_stream
                        (param_1,(undefined2 *)(param_2 + local_8),param_3,
                         (short)(local_8 / *(uint *)(DAT_10042750 + param_1 * 0x20)));
      if (sVar1 == 0) {
        return 0;
      }
    }
    iVar2 = CONCAT22((short)(local_8 >> 0x10),1);
  }
  return iVar2;
}



/* ================================================================
 * Function: pi_exp_get_res
 * Address:  10018a29
 * ================================================================ */

/* __stdcall pi_exp_get_res,12 */

bool pi_exp_get_res(short param_1,ushort param_2,uint *param_3)

{
  ushort uVar1;
  
                    /* 0x18a29  220  _pi_exp_get_res@12 */
  uVar1 = *(ushort *)(DAT_10043338 + 0x36 + param_1 * 0x110);
  *param_3 = (uint)(param_2 == 1);
  return param_2 < uVar1;
}



/* ================================================================
 * Function: pi_exp_get_time_seq
 * Address:  10018a79
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* __stdcall pi_exp_get_time_seq,8 */

bool pi_exp_get_time_seq(short param_1,undefined2 *param_2)

{
  int iVar1;
  undefined2 uVar2;
  bool local_8;
  
                    /* 0x18a79  221  _pi_exp_get_time_seq@8 */
  iVar1 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
  if (iVar1 == 0) {
    pv_set_error_code(0xbcf);
  }
  else {
    uVar2 = (**(code **)(iVar1 + 0x1ac))(iVar1);
    (**(code **)(iVar1 + 0x1a8))(iVar1,3);
    (**(code **)(iVar1 + 0x198))(iVar1);
    (**(code **)(iVar1 + 0x1a8))(iVar1,uVar2);
    uVar2 = ftol();
    *param_2 = uVar2;
  }
  local_8 = iVar1 != 0;
  return local_8;
}



/* ================================================================
 * Function: pi_exp_clear_ints
 * Address:  10018b52
 * ================================================================ */

/* __stdcall pi_exp_clear_ints,4 */

bool pi_exp_clear_ints(short param_1)

{
  int iVar1;
  
                    /* 0x18b52  213  _pi_exp_clear_ints@4 */
  iVar1 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
  if (iVar1 == 0) {
    pv_set_error_code(0xbcf);
  }
  else {
    pi_clear_interrupt_counters(param_1);
    (**(code **)(iVar1 + 0x5f4))(iVar1);
  }
  return iVar1 != 0;
}



/* ================================================================
 * Function: pi_exp_get_ints
 * Address:  10018ba0
 * ================================================================ */

/* __stdcall pi_exp_get_ints,8 */

bool pi_exp_get_ints(short param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
                    /* 0x18ba0  217  _pi_exp_get_ints@8 */
  iVar1 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
  if (iVar1 == 0) {
    pv_set_error_code(0xbcf);
  }
  else {
    uVar2 = (**(code **)(iVar1 + 0x5f8))(iVar1);
    *param_2 = uVar2;
  }
  return iVar1 != 0;
}



/* ================================================================
 * Function: pi_exp_enable_ints
 * Address:  10018be9
 * ================================================================ */

/* __stdcall pi_exp_enable_ints,8 */

bool pi_exp_enable_ints(short param_1,short param_2)

{
  int iVar1;
  
                    /* 0x18be9  214  _pi_exp_enable_ints@8 */
  iVar1 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
  if (iVar1 == 0) {
    pv_set_error_code(0xbcf);
  }
  else {
    (**(code **)(iVar1 + 0x5fc))(iVar1,(int)param_2);
  }
  return iVar1 != 0;
}



/* ================================================================
 * Function: pi_exp_set_time_seq
 * Address:  10018c32
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* __stdcall pi_exp_set_time_seq,8 */

int pi_exp_set_time_seq(short param_1,ushort param_2)

{
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 uVar2;
  ushort extraout_var_02;
  int iVar1;
  
                    /* 0x18c32  223  _pi_exp_set_time_seq@8 */
  iVar1 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
  if (iVar1 == 0) {
    pv_set_error_code(0xbcf);
    iVar1 = (uint)extraout_var_02 << 0x10;
  }
  else {
    if (*(short *)(DAT_10043334 + 0x10 + param_1 * 0x24) == 2) {
      (**(code **)(iVar1 + 0x1a0))(iVar1,(double)param_2,3);
      uVar2 = extraout_var;
    }
    else if (*(short *)(DAT_10043334 + 0x10 + param_1 * 0x24) == 1) {
      (**(code **)(iVar1 + 0x1a0))(iVar1,(double)param_2 / _DAT_100260e0,3);
      uVar2 = extraout_var_00;
    }
    else {
      (**(code **)(iVar1 + 0x1a0))(iVar1,(double)param_2 / _DAT_100260d0,3);
      uVar2 = extraout_var_01;
    }
    iVar1 = CONCAT22(uVar2,1);
  }
  return iVar1;
}



/* ================================================================
 * Function: pi_exp_setup_seq
 * Address:  10018d1c
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* __stdcall pi_exp_setup_seq,28 */

int pi_exp_setup_seq(short param_1,ushort param_2,uint param_3,int param_4,short param_5,
                    uint param_6,uint *param_7)

{
  ushort extraout_var;
  int iVar1;
  uint uVar2;
  ushort extraout_var_00;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 extraout_var_01;
  ushort extraout_var_02;
  short *local_24;
  short local_20;
  short *local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined2 local_8;
  
                    /* 0x18d1c  225  _pi_exp_setup_seq@28 */
  local_1c = (short *)0x0;
  local_24 = (short *)0x0;
  if (DAT_10042750 == 0) {
    pv_set_error_code(0xbcb);
    iVar1 = (uint)extraout_var << 0x10;
  }
  else {
    iVar1 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
    if (iVar1 == 0) {
      pv_set_error_code(0xbcf);
      iVar1 = (uint)extraout_var_02 << 0x10;
    }
    else {
      uVar2 = FUN_10019183(iVar1,param_5);
      if ((uVar2 & 0xffff) == 0) {
        pv_set_error_code(local_8);
        iVar1 = (uint)extraout_var_00 << 0x10;
      }
      else {
        (**(code **)(iVar1 + 0x2ac))(iVar1);
        (**(code **)(iVar1 + 0x298))(iVar1);
        for (local_20 = 0; (int)local_20 < (int)(param_3 & 0xffff); local_20 = local_20 + 1) {
          if (local_24 == (short *)0x0) {
            local_24 = malloc(0xc);
            local_1c = local_24;
          }
          else {
            pvVar3 = malloc(0xc);
            *(void **)(local_1c + 4) = pvVar3;
            local_1c = *(short **)(local_1c + 4);
          }
          local_14 = *(ushort *)(param_4 + local_20 * 0xc) + 1;
          local_c = *(ushort *)(param_4 + 2 + local_20 * 0xc) + 1;
          local_10 = *(ushort *)(param_4 + 8 + local_20 * 0xc) + 1;
          local_18 = *(ushort *)(param_4 + 6 + local_20 * 0xc) + 1;
          local_1c[4] = 0;
          local_1c[5] = 0;
          *local_1c = ((short)local_10 - (short)local_18) + 1;
          local_1c[1] = 1;
          pvVar3 = pv_malloc(4,0);
          *(void **)(local_1c + 2) = pvVar3;
          *(short *)(*(int *)(local_1c + 2) + 2) = ((short)local_c - (short)local_14) + 1;
          **(short **)(local_1c + 2) = local_20;
          uVar2 = (uint)*(ushort *)(param_4 + 4 + local_20 * 0xc);
          iVar4 = iVar1;
          (**(code **)(iVar1 + 0x270))();
          (**(code **)(iVar1 + 0x278))
                    (iVar1,*(undefined2 *)(param_4 + 10 + local_20 * 0xc),iVar4,uVar2);
          (**(code **)(iVar1 + 0x28c))(iVar1,&local_18,(int)local_20);
          (**(code **)(iVar1 + 0x2b0))(iVar1,1);
          (**(code **)(iVar1 + 0x2b8))(iVar1,1);
        }
        (**(code **)(iVar1 + 0x294))(iVar1);
        if (*(int *)(DAT_10042750 + 0x18 + param_1 * 0x20) != 0) {
          if (*(int *)(*(int *)(DAT_10042750 + 0x18 + param_1 * 0x20) + 4) != 0) {
            pv_free(*(void **)(*(int *)(DAT_10042750 + 0x18 + param_1 * 0x20) + 4),0);
          }
          free(*(void **)(DAT_10042750 + 0x18 + param_1 * 0x20));
        }
        *(short **)(DAT_10042750 + 0x18 + param_1 * 0x20) = local_24;
        if (*(short *)(DAT_10043334 + 0x10 + param_1 * 0x24) == 1) {
          (**(code **)(iVar1 + 0x20))(iVar1,0x7f,(double)param_6 / _DAT_100260e0);
        }
        else if (*(short *)(DAT_10043334 + 0x10 + param_1 * 0x24) == 2) {
          (**(code **)(iVar1 + 0x20))(iVar1,0x7f,(double)param_6);
        }
        else {
          (**(code **)(iVar1 + 0x20))(iVar1,0x7f,(double)param_6 / _DAT_100260d0);
        }
        iVar4 = (**(code **)(iVar1 + 0x21c))(iVar1);
        iVar5 = (**(code **)(iVar1 + 0x220))(iVar1);
        iVar6 = (**(code **)(iVar1 + 0x368))(iVar1);
        *param_7 = iVar4 * iVar5 * iVar6;
        if (*param_7 % 4 != 0) {
          *param_7 = *param_7 + 4 & 0xfffffffc;
        }
        *(uint *)(DAT_10042750 + param_1 * 0x20) = *param_7;
        *param_7 = *param_7 * (uint)param_2;
        *(uint *)(DAT_10042750 + 4 + param_1 * 0x20) = *param_7;
        (**(code **)(iVar1 + 0x3e0))(iVar1,param_2);
        (**(code **)(iVar1 + 0x348))(iVar1,0x7fff);
        (**(code **)(iVar1 + 0x24))(iVar1,0x106,4);
        (**(code **)(iVar1 + 0xc))(iVar1);
        (**(code **)(iVar1 + 4))(iVar1);
        (**(code **)(iVar1 + 0x544))(iVar1);
        iVar1 = CONCAT22(extraout_var_01,1);
      }
    }
  }
  return iVar1;
}



/* ================================================================
 * Function: FUN_10019183
 * Address:  10019183
 * ================================================================ */

undefined4 FUN_10019183(int param_1,short param_2)

{
  ushort uVar1;
  int iVar2;
  ushort extraout_var;
  ushort extraout_var_00;
  ushort extraout_var_01;
  ushort extraout_var_02;
  undefined2 uVar3;
  undefined2 extraout_var_03;
  bool bVar4;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 1;
  local_10 = 0;
  local_c = 1;
  uVar1 = 1;
  (**(code **)(param_1 + 0x34))(param_1,0x55,&local_8);
  (**(code **)(param_1 + 0x34))(param_1,0xeb,&local_10);
  iVar2 = (int)param_2;
  switch(iVar2) {
  case 0:
    if (local_8 == 3) {
      local_c = 0x14;
    }
    else {
      local_c = 1;
    }
    break;
  case 1:
    if (local_8 == 3) {
      local_c = 0x16;
    }
    else if (local_8 == 8) {
      local_c = (-(uint)(local_10 != 0x247) & 0xfffffffb) + 0x1e;
    }
    else {
      local_c = 3;
    }
    break;
  case 2:
    bVar4 = local_8 != 8;
    if (bVar4) {
      pv_set_error_code(0xbd2);
      iVar2 = (uint)extraout_var_00 << 0x10;
    }
    else {
      iVar2 = (-(uint)(local_10 != 0x247) & 0xfffffffa) + 0x1e;
      local_c = iVar2;
    }
    uVar1 = (ushort)!bVar4;
    break;
  case 3:
    if (local_8 == 3) {
      local_c = 0x15;
    }
    else if (local_8 == 8) {
      local_c = 0x17;
    }
    else {
      pv_set_error_code(0xbd2);
      iVar2 = (uint)extraout_var << 0x10;
      uVar1 = 0;
    }
    break;
  case 4:
    pv_set_error_code(0xbd2);
    iVar2 = (uint)extraout_var_01 << 0x10;
    uVar1 = 0;
    break;
  case 5:
    if (local_8 == 3) {
      local_c = 0x14;
    }
    else {
      local_c = 1;
    }
    break;
  case 6:
    local_c = 0x1a;
    break;
  default:
    pv_set_error_code(0xbd2);
    iVar2 = (uint)extraout_var_02 << 0x10;
    uVar1 = 0;
  }
  uVar3 = (undefined2)((uint)iVar2 >> 0x10);
  if (uVar1 != 0) {
    (**(code **)(param_1 + 0x24))(param_1,0x7a,local_c);
    uVar3 = extraout_var_03;
  }
  return CONCAT22(uVar3,uVar1);
}



/* ================================================================
 * Function: pi_exp_start_seq
 * Address:  1001931d
 * ================================================================ */

/* __stdcall pi_exp_start_seq,8 */

undefined4 pi_exp_start_seq(short param_1,int param_2)

{
  int iVar1;
  ushort extraout_var;
  int iVar2;
  int iVar3;
  undefined2 extraout_var_00;
  ushort extraout_var_01;
  uint uVar4;
  uint local_10;
  uint local_c;
  int local_8;
  
                    /* 0x1931d  227  _pi_exp_start_seq@8 */
  local_8 = 0;
  if (DAT_10042750 == 0) {
    pv_set_error_code(0xbcb);
    return (uint)extraout_var << 0x10;
  }
  iVar1 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
  if (iVar1 != 0) {
    local_10 = *(uint *)(DAT_10042750 + 4 + param_1 * 0x20);
    iVar2 = (**(code **)(iVar1 + 0x314))(iVar1);
    if (((iVar2 == 0xb) || (iVar2 = (**(code **)(iVar1 + 0x314))(iVar1), iVar2 == 0x14)) &&
       (0x400000 < local_10)) {
      local_10 = 0x400000;
    }
    iVar2 = (**(code **)(iVar1 + 0x21c))(iVar1);
    iVar3 = (**(code **)(iVar1 + 0x220))(iVar1);
    uVar4 = iVar2 * iVar3 & 0x80000001;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
    }
    if (uVar4 != 0) {
      local_10 = local_10 + 2;
    }
    if (param_2 == 0) {
      *(undefined2 *)(DAT_10043330 + 0x20 + param_1 * 0x2c) = 2;
      (**(code **)(iVar1 + 0x24))(iVar1,0x121,0);
    }
    else {
      iVar2 = (**(code **)(iVar1 + 0x21c))(iVar1);
      iVar3 = (**(code **)(iVar1 + 0x220))(iVar1);
      local_c = iVar2 * iVar3;
      uVar4 = local_c & 0x80000001;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
      }
      if (uVar4 != 0) {
        local_c = local_c + 1;
      }
      local_c = local_c * 2;
      if (local_c != 0) {
        local_8 = (local_10 / local_c) * local_c;
      }
      (**(code **)(iVar1 + 0x24))(iVar1,0x121,1);
      (**(code **)(iVar1 + 0x24))(iVar1,0x122,param_2);
      (**(code **)(iVar1 + 0x24))(iVar1,0x123,local_8);
    }
    (**(code **)(iVar1 + 0x674))(iVar1);
    (**(code **)(iVar1 + 0x348))(iVar1,0x7fff);
    (**(code **)(iVar1 + 0x4d8))(iVar1);
    return CONCAT22(extraout_var_00,1);
  }
  pv_set_error_code(0xbcf);
  return (uint)extraout_var_01 << 0x10;
}



/* ================================================================
 * Function: pi_exp_check_progress
 * Address:  100194f1
 * ================================================================ */

/* __stdcall pi_exp_check_progress,12 */

undefined4 pi_exp_check_progress(short param_1,undefined2 *param_2,int *param_3)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  void *pvVar4;
  undefined2 uVar5;
  int local_24;
  int local_1c;
  undefined2 *local_18;
  int local_14;
  undefined2 *local_10;
  int local_c;
  int local_8;
  
                    /* 0x194f1  211  _pi_exp_check_progress@12 */
  local_18 = *(undefined2 **)(DAT_10042750 + 8 + param_1 * 0x20);
  local_c = *(int *)(DAT_10042750 + param_1 * 0x20);
  local_10 = *(undefined2 **)(DAT_10042750 + 0xc + param_1 * 0x20);
  local_14 = *(int *)(DAT_10042750 + 0x14 + param_1 * 0x20);
  if (local_14 == 0) {
    *param_2 = 0;
    uVar2 = CONCAT22((short)((uint)param_2 >> 0x10),1);
  }
  else {
    *param_3 = (int)local_10 * local_c;
    uVar3 = (int)local_10 * local_c;
    if (uVar3 < (uint)((int)local_18 * local_c)) {
      pvVar4 = memcpy(&local_1c,(void *)(local_14 + uVar3),4);
      uVar5 = (undefined2)((uint)pvVar4 >> 0x10);
      if (local_1c == -0x53123122) {
        *param_2 = 1;
      }
      else {
        puVar1 = local_18;
        if (local_10 < local_18) {
          puVar1 = (undefined2 *)((int)local_10 + 1);
        }
        local_24 = local_c * (int)puVar1 + -4;
        memcpy(&local_8,(void *)(local_14 + local_24),4);
        if (local_8 == -0x5212153) {
          *param_2 = 2;
          local_10 = param_2;
        }
        else {
          if (local_10 < local_18) {
            local_10 = (undefined2 *)((int)local_10 + 1);
          }
          *(undefined2 **)(DAT_10042750 + 0xc + param_1 * 0x20) = local_10;
          *param_3 = (int)local_10 * local_c;
          if (local_18 <= local_10) {
            *param_2 = 3;
            return CONCAT22((short)((uint)local_10 >> 0x10),1);
          }
          *param_2 = 1;
        }
        uVar5 = (undefined2)((uint)local_10 >> 0x10);
      }
      uVar2 = CONCAT22(uVar5,1);
    }
    else {
      *param_2 = 3;
      uVar2 = CONCAT22((short)(uVar3 >> 0x10),1);
    }
  }
  return uVar2;
}



/* ================================================================
 * Function: pl_exp_check_cont_status
 * Address:  10019670
 * ================================================================ */

uint pl_exp_check_cont_status(short param_1,int *param_2,int *param_3,uint *param_4)

{
  uint uVar1;
  
                    /* 0x19670  114  pl_exp_check_cont_status */
  uVar1 = pl_cam_check(param_1);
  if ((uVar1 & 0xffff) == 0) {
    uVar1 = 0;
  }
  else {
    *param_3 = 0;
    *param_4 = 0;
    if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
      uVar1 = pm_exp_check_cont_status(param_1,(undefined2 *)param_2,param_3,param_4);
    }
    else {
      uVar1 = pi_exp_check_cont_status(param_1,param_2,param_3);
    }
  }
  return uVar1;
}



/* ================================================================
 * Function: pl_exp_abort
 * Address:  100196f8
 * ================================================================ */

uint pl_exp_abort(short param_1,undefined2 param_2)

{
  undefined2 uVar1;
  uint uVar2;
  undefined2 extraout_var;
  
                    /* 0x196f8  73  pl_exp_abort */
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    uVar2 = pm_exp_abort(param_1,param_2);
  }
  else {
    uVar1 = pi_exp_abort(param_1,param_2);
    uVar2 = CONCAT22(extraout_var,uVar1);
  }
  return uVar2;
}



/* ================================================================
 * Function: pl_exp_check_status
 * Address:  10019760
 * ================================================================ */

undefined2 pl_exp_check_status(short param_1,undefined2 *param_2,int *param_3)

{
  undefined2 uVar1;
  uint uVar2;
  undefined4 uVar3;
  
                    /* 0x19760  74  pl_exp_check_status */
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    uVar1 = 0;
  }
  else {
    *param_3 = 0;
    if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
      uVar1 = pm_exp_check_status(param_1,param_2,param_3);
    }
    else {
      uVar3 = pi_exp_check_status(param_1,param_2,param_3);
      uVar1 = (undefined2)uVar3;
    }
  }
  return uVar1;
}



/* ================================================================
 * Function: pl_exp_get_driver_buffer
 * Address:  100197d6
 * ================================================================ */

undefined2 pl_exp_get_driver_buffer(short param_1,void *param_2,undefined4 param_3)

{
  undefined2 uVar1;
  uint uVar2;
  undefined4 uVar3;
  
                    /* 0x197d6  119  pl_exp_get_driver_buffer */
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    uVar1 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    uVar1 = pm_exp_get_driver_buffer();
  }
  else {
    uVar3 = pi_exp_get_driver_buffer(param_1,param_2,param_3);
    uVar1 = (undefined2)uVar3;
  }
  return uVar1;
}



/* ================================================================
 * Function: pl_exp_stop_cont
 * Address:  10019837
 * ================================================================ */

uint pl_exp_stop_cont(short param_1,undefined2 param_2)

{
  uint uVar1;
  
                    /* 0x19837  124  pl_exp_stop_cont */
  uVar1 = pl_cam_check(param_1);
  if ((uVar1 & 0xffff) == 0) {
    uVar1 = 0;
  }
  else {
    if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
      *(undefined2 *)(DAT_10043330 + 0x20 + param_1 * 0x2c) = 0;
    }
    uVar1 = pl_exp_abort(param_1,param_2);
  }
  return uVar1;
}



/* ================================================================
 * Function: pl_exp_get_latest_frame
 * Address:  1001989a
 * ================================================================ */

uint pl_exp_get_latest_frame(short param_1,int *param_2)

{
  uint uVar1;
  
                    /* 0x1989a  120  pl_exp_get_latest_frame */
  uVar1 = pl_cam_check(param_1);
  if ((uVar1 & 0xffff) == 0) {
    uVar1 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    uVar1 = pm_exp_get_latest_frame(param_1,param_2);
  }
  else {
    uVar1 = pi_exp_get_latest_frame(param_1,param_2);
  }
  return uVar1;
}



/* ================================================================
 * Function: pl_exp_set_cont_mode
 * Address:  10019900
 * ================================================================ */

uint pl_exp_set_cont_mode(short param_1,undefined2 param_2)

{
  uint uVar1;
  
                    /* 0x19900  122  pl_exp_set_cont_mode */
  uVar1 = pl_cam_check(param_1);
  if ((uVar1 & 0xffff) == 0) {
    uVar1 = 0;
  }
  else {
    *(undefined2 *)(DAT_10043330 + 0x20 + param_1 * 0x2c) = param_2;
    if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = pi_exp_set_cont_mode(param_1);
    }
  }
  return uVar1;
}



/* ================================================================
 * Function: pl_exp_get_oldest_frame
 * Address:  10019971
 * ================================================================ */

uint pl_exp_get_oldest_frame(short param_1,int *param_2)

{
  uint uVar1;
  
                    /* 0x19971  121  pl_exp_get_oldest_frame */
  uVar1 = pl_cam_check(param_1);
  if ((uVar1 & 0xffff) == 0) {
    uVar1 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    uVar1 = pm_exp_get_oldest_frame(param_1,param_2);
  }
  else {
    uVar1 = pi_exp_get_oldest_frame(param_1,param_2);
  }
  return uVar1;
}



/* ================================================================
 * Function: pl_exp_setup_cont
 * Address:  100199d7
 * ================================================================ */

uint pl_exp_setup_cont(short param_1,ushort param_2,int param_3,short param_4,uint param_5,
                      uint *param_6,undefined2 param_7)

{
  uint uVar1;
  
                    /* 0x199d7  141  pl_exp_setup_cont */
  uVar1 = pl_cam_check(param_1);
  if ((uVar1 & 0xffff) == 0) {
    uVar1 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    uVar1 = pm_exp_setup_cont(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  else {
    uVar1 = pi_exp_setup_cont(param_1,CONCAT22((short)(param_5 >> 0x10),param_2),param_3,param_4,
                              param_5,param_6,param_7);
  }
  return uVar1;
}



/* ================================================================
 * Function: pl_exp_start_cont
 * Address:  10019a6b
 * ================================================================ */

uint pl_exp_start_cont(short param_1,LPVOID param_2,uint param_3)

{
  uint uVar1;
  ushort extraout_var;
  ushort extraout_var_00;
  ushort extraout_var_01;
  uint local_1c;
  undefined4 local_18;
  int local_14;
  uint local_10;
  LPVOID local_c;
  undefined4 local_8;
  
                    /* 0x19a6b  123  pl_exp_start_cont */
  uVar1 = pl_cam_check(param_1);
  if ((uVar1 & 0xffff) == 0) {
    uVar1 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x20 + param_1 * 0x2c) == 0) {
    pv_set_error_code(0xbd2);
    uVar1 = (uint)extraout_var << 0x10;
  }
  else if (DAT_10042750 == 0) {
    pv_set_error_code(0xbcb);
    uVar1 = (uint)extraout_var_00 << 0x10;
  }
  else {
    if (param_2 != (LPVOID)0x0) {
      *(LPVOID *)(DAT_10042750 + 0x14 + param_1 * 0x20) = param_2;
      *(undefined4 *)(DAT_10042750 + 0xc + param_1 * 0x20) = 0;
      *(undefined4 *)(DAT_10042750 + 0x10 + param_1 * 0x20) = 0;
      if (*(int *)(DAT_10042750 + param_1 * 0x20) == 0) {
        pv_set_error_code(0xbd3);
        return (uint)extraout_var_01 << 0x10;
      }
      local_10 = *(uint *)(DAT_10042750 + param_1 * 0x20);
      if (local_10 % 4 != 0) {
        local_10 = local_10 + (4 - local_10 % 4);
      }
      *(uint *)(DAT_10042750 + 8 + param_1 * 0x20) = param_3 / local_10;
      *(uint *)(DAT_10042750 + 4 + param_1 * 0x20) =
           *(int *)(DAT_10042750 + 8 + param_1 * 0x20) * local_10;
      local_c = param_2;
      local_14 = 0;
      local_18 = 0xacedcede;
      local_8 = 0xfadedead;
      for (local_1c = 0; local_1c < *(uint *)(DAT_10042750 + 8 + param_1 * 0x20);
          local_1c = local_1c + 1) {
        memcpy((void *)((int)local_c + local_14),&local_18,4);
        local_14 = local_14 + *(int *)(DAT_10042750 + param_1 * 0x20);
        memcpy((void *)((int)local_c + local_14 + -4),&local_8,4);
      }
    }
    if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
      uVar1 = pm_exp_start_cont(param_1,param_2);
    }
    else {
      uVar1 = pi_exp_start_cont(param_1,(int)param_2,param_3);
    }
  }
  return uVar1;
}



/* ================================================================
 * Function: pl_exp_unlock_oldest_frame
 * Address:  10019c8c
 * ================================================================ */

uint pl_exp_unlock_oldest_frame(short param_1)

{
  uint uVar1;
  
                    /* 0x19c8c  126  pl_exp_unlock_oldest_frame */
  uVar1 = pl_cam_check(param_1);
  if ((uVar1 & 0xffff) == 0) {
    uVar1 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    uVar1 = pm_exp_unlock_oldest_frame(param_1);
  }
  else {
    uVar1 = pi_exp_unlock_oldest_frame(param_1);
  }
  return uVar1;
}



/* ================================================================
 * Function: pl_exp_unravel
 * Address:  10019cea
 * ================================================================ */

uint pl_exp_unravel(ushort param_1,undefined2 param_2,undefined2 *param_3,ushort param_4,int param_5
                   ,undefined4 *param_6)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  undefined2 uVar3;
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  short local_18 [2];
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  undefined2 local_c [2];
  char local_8 [4];
  
                    /* 0x19cea  167  pl_exp_unravel */
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else {
    bVar1 = pv_sys_get_time_stamp(local_18,local_8,local_10,local_1c,local_20,local_14,local_c);
    if ((CONCAT31(extraout_var,bVar1) & 0xffff) == 0) {
      uVar2 = 0;
    }
    else {
      uVar3 = (undefined2)((uint)param_5 >> 0x10);
      if (*(short *)(DAT_10043330 + 0x14 + (short)param_1 * 0x2c) == 0) {
        uVar2 = pm_exp_unravel((uint)param_1,CONCAT22(uVar3,param_2),param_3,(uint)param_4,param_5,
                               param_6);
      }
      else {
        uVar2 = pi_exp_unravel(param_1,CONCAT22(uVar3,param_2),(int)param_3,param_4,param_5,
                               (int)param_6);
      }
    }
  }
  return uVar2;
}



/* ================================================================
 * Function: pl_exp_init_seq
 * Address:  10019da7
 * ================================================================ */

undefined4 pl_exp_init_seq(void)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 uVar2;
  short local_c;
  short local_8 [2];
  
                    /* 0x19da7  76  pl_exp_init_seq */
  bVar1 = pl_cam_get_total(local_8);
  if ((CONCAT31(extraout_var,bVar1) & 0xffff) == 0) {
    uVar2 = 0;
  }
  else {
    DAT_10042750 = pv_malloc((int)local_8[0] << 5,0);
    if (DAT_10042750 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      for (local_c = 0; local_c < local_8[0]; local_c = local_c + 1) {
        *(undefined4 *)((int)DAT_10042750 + local_c * 0x20) = 0;
        *(undefined4 *)((int)DAT_10042750 + local_c * 0x20 + 4) = 0;
        *(undefined4 *)((int)DAT_10042750 + local_c * 0x20 + 8) = 0;
        *(undefined4 *)((int)DAT_10042750 + local_c * 0x20 + 0xc) = 0;
        *(undefined4 *)((int)DAT_10042750 + local_c * 0x20 + 0x14) = 0;
        *(undefined4 *)((int)DAT_10042750 + local_c * 0x20 + 0x18) = 0;
      }
      uVar2 = CONCAT22(local_c >> 0xf,1);
    }
  }
  return uVar2;
}



/* ================================================================
 * Function: pl_exp_uninit_seq
 * Address:  10019e98
 * ================================================================ */

uint pl_exp_uninit_seq(void)

{
  bool bVar1;
  undefined3 extraout_var;
  uint uVar2;
  short local_c;
  short local_8 [2];
  
                    /* 0x19e98  79  pl_exp_uninit_seq */
  bVar1 = pl_cam_get_total(local_8);
  if ((CONCAT31(extraout_var,bVar1) & 0xffff) == 0) {
    uVar2 = 0;
  }
  else if (DAT_10042750 == (void *)0x0) {
    uVar2 = 1;
  }
  else {
    for (local_c = 0; local_c < local_8[0]; local_c = local_c + 1) {
      if (*(int *)((int)DAT_10042750 + local_c * 0x20 + 0x18) != 0) {
        pv_free(*(void **)((int)DAT_10042750 + local_c * 0x20 + 0x18),0);
        *(undefined4 *)((int)DAT_10042750 + local_c * 0x20 + 0x18) = 0;
      }
    }
    uVar2 = pv_free(DAT_10042750,0);
    DAT_10042750 = (void *)0x0;
  }
  return uVar2;
}



/* ================================================================
 * Function: pl_exp_check_progress
 * Address:  10019f52
 * ================================================================ */

uint pl_exp_check_progress(short param_1,undefined2 *param_2,int *param_3)

{
  uint uVar1;
  ushort extraout_var;
  undefined2 uVar4;
  void *pvVar2;
  int *piVar3;
  undefined2 uVar5;
  int local_28;
  int local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  int local_c;
  int local_8;
  
                    /* 0x19f52  133  pl_exp_check_progress */
  uVar1 = pl_cam_check(param_1);
  if ((uVar1 & 0xffff) == 0) {
    uVar1 = 0;
  }
  else if (DAT_10042750 == 0) {
    pv_set_error_code(0xbcb);
    uVar1 = (uint)extraout_var << 0x10;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    local_1c = *(uint *)(DAT_10042750 + 8 + param_1 * 0x20);
    local_c = *(int *)(DAT_10042750 + param_1 * 0x20);
    local_14 = *(uint *)(DAT_10042750 + 0xc + param_1 * 0x20);
    local_18 = *(int *)(DAT_10042750 + 0x14 + param_1 * 0x20);
    if (local_18 == 0) {
      *param_2 = 0;
      uVar1 = 1;
    }
    else {
      *param_3 = local_14 * local_c;
      uVar4 = (undefined2)((uint)param_2 >> 0x10);
      if (local_14 * local_c < local_1c * local_c) {
        pvVar2 = memcpy(&local_20,(void *)(local_18 + local_14 * local_c),4);
        uVar5 = (undefined2)((uint)pvVar2 >> 0x10);
        if (local_20 == -0x53123122) {
          *param_2 = 1;
        }
        else {
          uVar1 = local_1c;
          if (local_14 < local_1c) {
            uVar1 = local_14 + 1;
          }
          local_28 = local_c * uVar1 + -4;
          piVar3 = memcpy(&local_8,(void *)(local_18 + local_28),4);
          if (local_8 == -0x5212153) {
            *param_2 = 2;
          }
          else {
            if (local_14 < local_1c) {
              local_14 = local_14 + 1;
            }
            *(uint *)(DAT_10042750 + 0xc + param_1 * 0x20) = local_14;
            *param_3 = local_14 * local_c;
            if (local_1c <= local_14) {
              *param_2 = 3;
              return CONCAT22(uVar4,1);
            }
            *param_2 = 1;
            piVar3 = param_3;
          }
          uVar5 = (undefined2)((uint)piVar3 >> 0x10);
        }
        uVar1 = CONCAT22(uVar5,1);
      }
      else {
        *param_2 = 3;
        uVar1 = CONCAT22(uVar4,1);
      }
    }
  }
  else {
    uVar1 = pi_exp_check_progress(param_1,param_2,param_3);
  }
  return uVar1;
}



/* ================================================================
 * Function: pl_exp_finish_seq
 * Address:  1001a133
 * ================================================================ */

uint pl_exp_finish_seq(short param_1,int param_2,short param_3)

{
  uint uVar1;
  
                    /* 0x1a133  75  pl_exp_finish_seq */
  uVar1 = pl_cam_check(param_1);
  if ((uVar1 & 0xffff) == 0) {
    uVar1 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    uVar1 = pm_exp_finish_seq(param_1,param_2,param_3);
  }
  else {
    uVar1 = pi_exp_finish_seq(param_1,param_2,param_3);
  }
  return uVar1;
}



/* ================================================================
 * Function: pl_exp_get_time_seq
 * Address:  1001a1a3
 * ================================================================ */

uint pl_exp_get_time_seq(short param_1,ushort *param_2)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  
                    /* 0x1a1a3  103  pl_exp_get_time_seq */
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    bVar1 = pm_exp_get_time_seq(param_1,param_2);
    uVar2 = CONCAT22((short)((uint3)extraout_var >> 8),(short)CONCAT31(extraout_var,bVar1));
  }
  else {
    bVar1 = pi_exp_get_time_seq(param_1,param_2);
    uVar2 = CONCAT22((short)((uint3)extraout_var_00 >> 8),(short)CONCAT31(extraout_var_00,bVar1));
  }
  return uVar2;
}



/* ================================================================
 * Function: pl_exp_set_time_seq
 * Address:  1001a209
 * ================================================================ */

uint pl_exp_set_time_seq(short param_1,ushort param_2)

{
  uint uVar1;
  
                    /* 0x1a209  104  pl_exp_set_time_seq */
  uVar1 = pl_cam_check(param_1);
  if ((uVar1 & 0xffff) == 0) {
    uVar1 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    uVar1 = pm_exp_set_time_seq(param_1,CONCAT22((short)((uint)(param_1 * 0x2c) >> 0x10),param_2));
  }
  else {
    uVar1 = pi_exp_set_time_seq(param_1,param_2);
  }
  return uVar1;
}



/* ================================================================
 * Function: pl_exp_setup_seq
 * Address:  1001a271
 * ================================================================ */

uint pl_exp_setup_seq(short param_1,ushort param_2,short param_3,short *param_4,short param_5,
                     uint param_6,uint *param_7)

{
  uint uVar1;
  ushort extraout_var;
  
                    /* 0x1a271  77  pl_exp_setup_seq */
  uVar1 = pl_cam_check(param_1);
  if ((uVar1 & 0xffff) == 0) {
    uVar1 = 0;
  }
  else if (DAT_10042750 == 0) {
    pv_set_error_code(0xbcb);
    uVar1 = (uint)extraout_var << 0x10;
  }
  else {
    *(uint *)(DAT_10042750 + 8 + param_1 * 0x20) = (uint)param_2;
    *(undefined4 *)(DAT_10042750 + 0xc + param_1 * 0x20) = 0;
    if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
      uVar1 = pm_exp_setup_seq(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    }
    else {
      uVar1 = pi_exp_setup_seq(param_1,param_2,CONCAT22((short)(param_6 >> 0x10),param_3),
                               (int)param_4,param_5,param_6,param_7);
    }
  }
  return uVar1;
}



/* ================================================================
 * Function: pl_exp_start_seq
 * Address:  1001a351
 * ================================================================ */

uint pl_exp_start_seq(short param_1,LPVOID param_2)

{
  uint uVar1;
  ushort extraout_var;
  int local_18;
  uint local_14;
  undefined4 local_10;
  LPVOID local_c;
  undefined4 local_8;
  
                    /* 0x1a351  78  pl_exp_start_seq */
  uVar1 = pl_cam_check(param_1);
  if ((uVar1 & 0xffff) == 0) {
    uVar1 = 0;
  }
  else if (DAT_10042750 == 0) {
    pv_set_error_code(0xbcb);
    uVar1 = (uint)extraout_var << 0x10;
  }
  else {
    if (param_2 != (LPVOID)0x0) {
      *(LPVOID *)(DAT_10042750 + 0x14 + param_1 * 0x20) = param_2;
      *(undefined4 *)(DAT_10042750 + 0xc + param_1 * 0x20) = 0;
      local_c = param_2;
      local_18 = 0;
      local_10 = 0xacedcede;
      local_8 = 0xfadedead;
      for (local_14 = 0; local_14 < *(uint *)(DAT_10042750 + 8 + param_1 * 0x20);
          local_14 = local_14 + 1) {
        memcpy((void *)((int)local_c + local_18),&local_10,4);
        local_18 = local_18 + *(int *)(DAT_10042750 + param_1 * 0x20);
        memcpy((void *)((int)local_c + local_18 + -4),&local_8,4);
      }
    }
    if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
      uVar1 = pm_exp_start_seq(param_1,param_2);
    }
    else {
      uVar1 = pi_exp_start_seq(param_1,(int)param_2);
    }
  }
  return uVar1;
}



/* ================================================================
 * Function: pm_exp_check_cont_status
 * Address:  1001a4a0
 * ================================================================ */

/* __stdcall pm_exp_check_cont_status,16 */

undefined4
pm_exp_check_cont_status(short param_1,undefined2 *param_2,undefined4 *param_3,uint *param_4)

{
  ushort extraout_var;
  ushort extraout_var_00;
  uint local_10;
  uint local_c;
  undefined2 local_8;
  
                    /* 0x1a4a0  323  _pm_exp_check_cont_status@16 */
  local_c = CONCAT22(local_c._2_2_,1);
  *param_3 = 0;
  *param_4 = 0;
  local_8 = pd_driver_get_image_data_status
                      (*(short *)(DAT_10043330 + 4 + param_1 * 0x2c),param_3,&local_10);
  switch(local_8) {
  case 0:
    *param_2 = 1;
    break;
  default:
    *param_2 = 4;
    pv_set_error_code(0x51);
    local_c = local_c & 0xffff0000;
    break;
  case 100:
    *param_2 = 1;
    break;
  case 0x65:
    *param_2 = 0;
    break;
  case 0x66:
    *param_2 = 2;
    break;
  case 0x67:
    *param_2 = 0;
    break;
  case 0x68:
  case 0x69:
    *param_2 = 4;
    pv_set_error_code(0xbbd);
    local_c = local_c & 0xffff0000;
    break;
  case 0x6b:
    *param_2 = 4;
    pv_set_error_code(0xbbb);
    local_c = local_c & 0xffff0000;
    break;
  case 0x6c:
  case 0x6d:
    *param_2 = 4;
    pv_set_error_code(0xbbe);
    local_c = local_c & 0xffff0000;
    break;
  case 0x6e:
  case 0x6f:
    *param_2 = 4;
    pv_set_error_code(0xbe2);
    local_c = local_c & 0xffff0000;
    break;
  case 0x73:
  case 0x75:
    *param_2 = 4;
    pv_set_error_code(0xbe3);
    local_c = local_c & 0xffff0000;
  }
  if (DAT_10042750 == 0) {
    pv_set_error_code(0xbcb);
    local_10 = (uint)extraout_var << 0x10;
    local_c = 0;
  }
  else if (*(int *)(DAT_10042750 + 8 + param_1 * 0x20) == 0) {
    pv_set_error_code(0xbd6);
    local_10 = (uint)extraout_var_00 << 0x10;
    local_c = 0;
  }
  else {
    if (((local_c & 0xffff) == 1) && (*(uint *)(DAT_10042750 + 0x10 + param_1 * 0x20) < local_10)) {
      *param_2 = 3;
    }
    local_10 = local_10 / *(uint *)(DAT_10042750 + 8 + param_1 * 0x20);
    *param_4 = local_10;
  }
  return CONCAT22((short)(local_10 >> 0x10),(undefined2)local_c);
}



/* ================================================================
 * Function: pm_stop_ccs
 * Address:  1001a713
 * ================================================================ */

/* WARNING: Removing unreachable block (ram,0x1001a750) */
/* __stdcall pm_stop_ccs,8 */

bool pm_stop_ccs(short param_1,undefined4 param_2)

{
  uint uVar1;
  char local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined2 local_8;
  undefined2 uStack_6;
  
                    /* 0x1a713  438  _pm_stop_ccs@8 */
  _local_8 = CONCAT22(uStack_6,3);
  local_b = (undefined1)((uint)param_2 >> 8);
  local_a = (undefined1)param_2;
  local_c = '3';
  uVar1 = pm_cam_write_read(param_1,0x3f,3,&local_c,(LPVOID)0x0);
  return (uVar1 & 0xffff) != 0;
}



/* ================================================================
 * Function: pm_exp_abort
 * Address:  1001a79f
 * ================================================================ */

/* __stdcall pm_exp_abort,8 */

int pm_exp_abort(short param_1,undefined2 param_2)

{
  short sVar1;
  ushort extraout_var;
  int iVar2;
  ushort extraout_var_00;
  
                    /* 0x1a79f  322  _pm_exp_abort@8 */
  sVar1 = pd_driver_set_image_data_idle(*(short *)(DAT_10043330 + 4 + param_1 * 0x2c));
  if (sVar1 == 0) {
    switch(param_2) {
    case 1:
      pm_stop_ccs(param_1,0);
      break;
    case 2:
      pm_stop_ccs(param_1,2);
      break;
    case 3:
      pm_stop_ccs(param_1,1);
      break;
    case 4:
      pm_stop_ccs(param_1,3);
      break;
    case 5:
      pm_stop_ccs(param_1,4);
      break;
    case 6:
      pm_stop_ccs(param_1,5);
    }
    sVar1 = pl_error_code();
    if (sVar1 == 0) {
      iVar2 = CONCAT22(extraout_var_00,1);
    }
    else {
      iVar2 = (uint)extraout_var_00 << 0x10;
    }
  }
  else {
    pv_set_error_code(sVar1);
    iVar2 = (uint)extraout_var << 0x10;
  }
  return iVar2;
}



/* ================================================================
 * Function: pm_exp_check_status
 * Address:  1001a880
 * ================================================================ */

/* __stdcall pm_exp_check_status,12 */

undefined2 pm_exp_check_status(short param_1,undefined2 *param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined2 local_c;
  undefined2 local_8 [2];
  
                    /* 0x1a880  324  _pm_exp_check_status@12 */
  *param_3 = 0;
  local_c = 1;
  bVar1 = pv_exp_get_status(param_1,local_8,param_3);
  if ((CONCAT31(extraout_var,bVar1) & 0xffff) == 0) {
    local_c = 0;
  }
  else {
    switch(local_8[0]) {
    case 0:
      *param_2 = 2;
      break;
    default:
      *param_2 = 4;
      pv_set_error_code(0x51);
      local_c = 0;
      break;
    case 100:
      *param_2 = 1;
      break;
    case 0x65:
      *param_2 = 0;
      break;
    case 0x66:
      *param_2 = 2;
      break;
    case 0x67:
      *param_2 = 3;
      break;
    case 0x68:
    case 0x69:
      *param_2 = 4;
      pv_set_error_code(0xbbd);
      local_c = 0;
      break;
    case 0x6b:
      *param_2 = 4;
      pv_set_error_code(0xbbb);
      local_c = 0;
      break;
    case 0x6c:
    case 0x6d:
      *param_2 = 4;
      pv_set_error_code(0xa6);
      local_c = 0;
      break;
    case 0x6e:
    case 0x6f:
      *param_2 = 4;
      pv_set_error_code(0xbe2);
      local_c = 0;
      break;
    case 0x71:
      *param_2 = 4;
      pv_set_error_code(0x51);
      local_c = 0;
      break;
    case 0x73:
    case 0x75:
      *param_2 = 4;
      pv_set_error_code(0xbe3);
      local_c = 0;
    }
  }
  return local_c;
}



/* ================================================================
 * Function: pm_exp_get_driver_buffer
 * Address:  1001aa7d
 * ================================================================ */

/* __stdcall pm_exp_get_driver_buffer,0 */

undefined2 pm_exp_get_driver_buffer(void)

{
                    /* 0x1aa7d  327  _pm_exp_get_driver_buffer@0 */
  pv_set_error_code(0xbd7);
  return 0;
}



/* ================================================================
 * Function: pm_exp_get_latest_frame
 * Address:  1001aa8f
 * ================================================================ */

/* __stdcall pm_exp_get_latest_frame,8 */

int pm_exp_get_latest_frame(short param_1,int *param_2)

{
  ushort extraout_var;
  int iVar1;
  ushort extraout_var_00;
  ushort extraout_var_01;
  uint local_1c;
  uint local_18;
  undefined4 local_14;
  undefined2 local_10;
  int local_c;
  uint local_8;
  
                    /* 0x1aa8f  329  _pm_exp_get_latest_frame@8 */
  local_10 = pd_driver_get_image_data_status
                       (*(short *)(DAT_10043330 + 4 + param_1 * 0x2c),&local_14,&local_1c);
  if (local_1c == 0) {
    pv_set_error_code(0xbd5);
    iVar1 = (uint)extraout_var << 0x10;
  }
  else if (DAT_10042750 == 0) {
    pv_set_error_code(0xbcb);
    iVar1 = (uint)extraout_var_00 << 0x10;
  }
  else {
    if (*(int *)(DAT_10042750 + 8 + param_1 * 0x20) == 0) {
      local_18 = 0;
    }
    else {
      local_18 = (local_1c - 1) % *(uint *)(DAT_10042750 + 8 + param_1 * 0x20);
    }
    local_8 = *(uint *)(DAT_10042750 + param_1 * 0x20);
    if (local_8 % 4 != 0) {
      local_8 = local_8 + (4 - local_8 % 4);
    }
    local_c = local_18 * local_8;
    *param_2 = *(int *)(DAT_10042750 + 0x14 + param_1 * 0x20) + local_c;
    if ((*(short *)(DAT_10043330 + 0x20 + param_1 * 0x2c) == 2) &&
       ((uint)(*(int *)(DAT_10042750 + 0x10 + param_1 * 0x20) +
              *(int *)(DAT_10042750 + 8 + param_1 * 0x20)) < local_1c)) {
      pv_set_error_code(0xbd9);
      iVar1 = (uint)extraout_var_01 << 0x10;
    }
    else {
      *(uint *)(DAT_10042750 + 0x10 + param_1 * 0x20) = local_1c;
      iVar1 = CONCAT22((short)(local_1c >> 0x10),1);
    }
  }
  return iVar1;
}



/* ================================================================
 * Function: pm_exp_unlock_oldest_frame
 * Address:  1001abee
 * ================================================================ */

/* __stdcall pm_exp_unlock_oldest_frame,4 */

undefined4 pm_exp_unlock_oldest_frame(short param_1)

{
                    /* 0x1abee  338  _pm_exp_unlock_oldest_frame@4 */
  *(int *)(DAT_10042750 + 0x10 + param_1 * 0x20) =
       *(int *)(DAT_10042750 + 0x10 + param_1 * 0x20) + 1;
  return CONCAT22((short)((uint)(param_1 * 0x20) >> 0x10),1);
}



/* ================================================================
 * Function: pm_exp_get_oldest_frame
 * Address:  1001ac1e
 * ================================================================ */

/* __stdcall pm_exp_get_oldest_frame,8 */

int pm_exp_get_oldest_frame(short param_1,int *param_2)

{
  ushort extraout_var;
  ushort extraout_var_00;
  int iVar1;
  ushort extraout_var_01;
  uint local_1c;
  uint local_18;
  undefined4 local_14;
  undefined2 local_10;
  int local_c;
  uint local_8;
  
                    /* 0x1ac1e  330  _pm_exp_get_oldest_frame@8 */
  local_10 = pd_driver_get_image_data_status
                       (*(short *)(DAT_10043330 + 4 + param_1 * 0x2c),&local_14,&local_1c);
  if (local_1c == 0) {
    pv_set_error_code(0xbd5);
    iVar1 = (uint)extraout_var << 0x10;
  }
  else if (DAT_10042750 == 0) {
    pv_set_error_code(0xbcb);
    iVar1 = (uint)extraout_var_00 << 0x10;
  }
  else {
    if (*(int *)(DAT_10042750 + 8 + param_1 * 0x20) == 0) {
      local_18 = 0;
    }
    else {
      local_18 = *(uint *)(DAT_10042750 + 0x10 + param_1 * 0x20) %
                 *(uint *)(DAT_10042750 + 8 + param_1 * 0x20);
    }
    local_8 = *(uint *)(DAT_10042750 + param_1 * 0x20);
    if (local_8 % 4 != 0) {
      local_8 = local_8 + (4 - local_8 % 4);
    }
    local_c = local_18 * local_8;
    *param_2 = *(int *)(DAT_10042750 + 0x14 + param_1 * 0x20) + local_c;
    iVar1 = (int)*(short *)(DAT_10043330 + 0x20 + param_1 * 0x2c);
    if ((iVar1 == 2) &&
       (iVar1 = DAT_10042750,
       (uint)(*(int *)(DAT_10042750 + 0x10 + param_1 * 0x20) +
             *(int *)(DAT_10042750 + 8 + param_1 * 0x20)) < local_1c)) {
      pv_set_error_code(0xbd9);
      iVar1 = (uint)extraout_var_01 << 0x10;
    }
    else {
      iVar1 = CONCAT22((short)((uint)iVar1 >> 0x10),1);
    }
  }
  return iVar1;
}



/* ================================================================
 * Function: pm_exp_setup_cont
 * Address:  1001ad77
 * ================================================================ */

/* __stdcall pm_exp_setup_cont,28 */

uint pm_exp_setup_cont(short param_1,ushort param_2,int param_3,short param_4,uint param_5,
                      uint *param_6,undefined2 param_7)

{
  bool bVar1;
  undefined2 uVar2;
  ushort extraout_var_01;
  ushort extraout_var_02;
  uint uVar3;
  undefined3 extraout_var;
  uint uVar4;
  ushort extraout_var_03;
  ushort extraout_var_04;
  undefined3 extraout_var_00;
  ushort extraout_var_05;
  ushort uVar5;
  undefined4 *local_c;
  uint local_8;
  
                    /* 0x1ad77  334  _pm_exp_setup_cont@28 */
  if (DAT_10042750 == 0) {
    pv_set_error_code(0xbcb);
    uVar4 = (uint)extraout_var_01 << 0x10;
  }
  else {
    *(undefined2 *)(&DAT_10042758 + param_1 * 0x1c) = 0;
    pv_exp_set_script(param_1,0);
    local_8 = 0;
    for (uVar5 = 0; uVar5 < param_2; uVar5 = uVar5 + 1) {
      local_8 = local_8 + (((uint)*(ushort *)(param_3 + 2 + (uint)uVar5 * 0xc) -
                           (uint)*(ushort *)(param_3 + (uint)uVar5 * 0xc)) + 1) *
                          (((uint)*(ushort *)(param_3 + 8 + (uint)uVar5 * 0xc) -
                           (uint)*(ushort *)(param_3 + 6 + (uint)uVar5 * 0xc)) + 1);
    }
    if (local_8 % 2 == 0) {
      *(undefined4 *)(DAT_10042750 + 8 + param_1 * 0x20) = 1;
      *(undefined4 *)(DAT_10042750 + 0xc + param_1 * 0x20) = 0;
      *(undefined2 *)(DAT_10043330 + 0x20 + param_1 * 0x2c) = param_7;
      if (*(int *)(DAT_10042750 + 0x18 + param_1 * 0x20) != 0) {
        uVar3 = pm_script_free_groups(*(void **)(DAT_10042750 + 0x18 + param_1 * 0x20));
        uVar4 = DAT_10042750;
        if ((uVar3 & 0xffff) == 0) {
          *(undefined4 *)(DAT_10042750 + 0x18 + param_1 * 0x20) = 0;
          return uVar4 & 0xffff0000;
        }
        *(undefined4 *)(DAT_10042750 + 0x18 + param_1 * 0x20) = 0;
      }
      bVar1 = pm_script_alloc(0x2000,(int *)&local_c);
      if ((CONCAT31(extraout_var,bVar1) & 0xffff) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = pm_script_generate(param_1,local_c,0x2000,1,
                                   CONCAT22((short)(param_5 >> 0x10),param_2),param_3,param_4,
                                   param_5,(int *)param_6);
        if ((uVar4 & 0xffff) == 0) {
          uVar2 = pl_error_code();
          pm_script_free(local_c);
          local_c = (undefined4 *)0x0;
          pv_set_error_code(uVar2);
          uVar4 = (uint)extraout_var_03 << 0x10;
        }
        else {
          *param_6 = *param_6 << 1;
          *(uint *)(DAT_10042750 + param_1 * 0x20) = *param_6;
          *(uint *)(DAT_10042750 + 4 + param_1 * 0x20) = *param_6;
          pv_exp_set_bytes(param_1,*param_6);
          if ((*(short *)(local_c + 1) != 0) &&
             (uVar4 = pm_script_send(param_1,local_c), (uVar4 & 0xffff) == 0)) {
            uVar2 = pl_error_code();
            pm_script_free(local_c);
            local_c = (undefined4 *)0x0;
            pv_set_error_code(uVar2);
            return (uint)extraout_var_04 << 0x10;
          }
          if (*param_6 % 4 != 0) {
            *param_6 = *param_6 + 4 & 0xfffffffc;
          }
          bVar1 = pv_exp_set_script(param_1,1);
          if ((CONCAT31(extraout_var_00,bVar1) & 0xffff) == 0) {
            uVar2 = pl_error_code();
            pm_script_free(local_c);
            local_c = (undefined4 *)0x0;
            pv_set_error_code(uVar2);
            uVar4 = (uint)extraout_var_05 << 0x10;
          }
          else {
            *(undefined4 *)(DAT_10042750 + 0x18 + param_1 * 0x20) = local_c[2];
            local_c[2] = 0;
            uVar4 = pm_script_free(local_c);
          }
        }
      }
    }
    else {
      pv_set_error_code(0x7d08);
      uVar4 = (uint)extraout_var_02 << 0x10;
    }
  }
  return uVar4;
}



/* ================================================================
 * Function: pm_exp_start_cont
 * Address:  1001b0d2
 * ================================================================ */

/* __stdcall pm_exp_start_cont,8 */

uint pm_exp_start_cont(short param_1,LPVOID param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  ushort extraout_var_00;
  uint uVar2;
  uint local_8;
  
                    /* 0x1b0d2  336  _pm_exp_start_cont@8 */
  bVar1 = pv_exp_get_script(param_1,(undefined2 *)&local_8);
  if ((CONCAT31(extraout_var,bVar1) & 0xffff) == 0) {
    uVar2 = 0;
  }
  else if ((local_8 & 0xffff) == 0) {
    pv_set_error_code(0xbba);
    uVar2 = (uint)extraout_var_00 << 0x10;
  }
  else {
    if ((param_2 != (LPVOID)0x0) && (uVar2 = pv_dd_active(param_1,param_2), (uVar2 & 0xffff) == 0))
    {
      return 0;
    }
    uVar2 = pm_cam_write_read(param_1,0x3f,1,&DAT_1003d01c,(LPVOID)0x0);
    if ((uVar2 & 0xffff) == 0) {
      uVar2 = 0;
      if (param_2 != (LPVOID)0x0) {
        uVar2 = pl_exp_abort(param_1,2);
      }
      uVar2 = uVar2 & 0xffff0000;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}



/* ================================================================
 * Function: FUN_1001b16f
 * Address:  1001b16f
 * ================================================================ */

int __cdecl FUN_1001b16f(ushort *param_1,ushort *param_2)

{
  return (uint)*param_1 - (uint)*param_2;
}



/* ================================================================
 * Function: pm_exp_unravel
 * Address:  1001b18f
 * ================================================================ */

/* __stdcall pm_exp_unravel,24 */

int pm_exp_unravel(undefined4 param_1,uint param_2,undefined2 *param_3,uint param_4,int param_5,
                  undefined4 *param_6)

{
  ushort extraout_var;
  int iVar1;
  void *_Base;
  uint uVar2;
  uint local_24;
  undefined2 *local_20;
  uint local_1c;
  undefined2 *local_18;
  
                    /* 0x1b18f  339  _pm_exp_unravel@24 */
  if ((param_4 & 0xffff) == 0) {
    pv_set_error_code(0xbc7);
    iVar1 = (uint)extraout_var << 0x10;
  }
  else {
    _Base = malloc((param_4 & 0xffff) * 0xe);
    local_1c = 0;
    while (local_1c < (param_4 & 0xffff)) {
      *(undefined2 *)((int)_Base + local_1c * 0xe) = *(undefined2 *)(param_5 + local_1c * 0xc);
      *(undefined2 *)((int)_Base + local_1c * 0xe + 2) =
           *(undefined2 *)(param_5 + 2 + local_1c * 0xc);
      *(undefined2 *)((int)_Base + local_1c * 0xe + 4) =
           *(undefined2 *)(param_5 + 4 + local_1c * 0xc);
      *(undefined2 *)((int)_Base + local_1c * 0xe + 6) =
           *(undefined2 *)(param_5 + 6 + local_1c * 0xc);
      *(undefined2 *)((int)_Base + local_1c * 0xe + 8) =
           *(undefined2 *)(param_5 + 8 + local_1c * 0xc);
      *(undefined2 *)((int)_Base + local_1c * 0xe + 10) =
           *(undefined2 *)(param_5 + 10 + local_1c * 0xc);
      *(short *)((int)_Base + local_1c * 0xe + 0xc) = (short)local_1c;
      local_1c = (uint)(ushort)((short)local_1c + 1);
    }
    qsort(_Base,param_4 & 0xffff,0xe,FUN_1001b16f);
    local_20 = param_3;
    local_1c = 0;
    while (local_1c < (param_4 & 0xffff)) {
      uVar2 = ((int)(((uint)*(ushort *)((int)_Base + local_1c * 0xe + 2) -
                     (uint)*(ushort *)((int)_Base + local_1c * 0xe)) + 1) /
              (int)(uint)*(ushort *)((int)_Base + local_1c * 0xe + 4)) *
              ((int)(((uint)*(ushort *)((int)_Base + local_1c * 0xe + 8) -
                     (uint)*(ushort *)((int)_Base + local_1c * 0xe + 6)) + 1) /
              (int)(uint)*(ushort *)((int)_Base + local_1c * 0xe + 10));
      if (((param_2 & 0xffff) == 0xffff) ||
         ((param_2 & 0xffff) == (uint)*(ushort *)((int)_Base + local_1c * 0xe + 0xc))) {
        if ((param_2 & 0xffff) == local_1c) {
          local_18 = (undefined2 *)*param_6;
        }
        else {
          local_18 = (undefined2 *)param_6[*(ushort *)((int)_Base + local_1c * 0xe + 0xc)];
        }
        if (local_18 != (undefined2 *)0x0) {
          for (local_24 = 0; local_24 < uVar2; local_24 = local_24 + 1) {
            *local_18 = *local_20;
            local_18 = local_18 + 1;
            local_20 = local_20 + 1;
          }
        }
      }
      else {
        local_20 = local_20 + uVar2;
      }
      local_1c = (uint)(ushort)((short)local_1c + 1);
    }
    iVar1 = 1;
  }
  return iVar1;
}



/* ================================================================
 * Function: pm_exp_finish_seq
 * Address:  1001b4cd
 * ================================================================ */

/* __stdcall pm_exp_finish_seq,12 */

int pm_exp_finish_seq(short param_1,int param_2,short param_3)

{
  short sVar1;
  ushort extraout_var;
  int iVar2;
  ushort extraout_var_00;
  uint local_8;
  
                    /* 0x1b4cd  326  _pm_exp_finish_seq@12 */
  if (DAT_10042750 == 0) {
    pv_set_error_code(0xbcb);
    iVar2 = (uint)extraout_var << 0x10;
  }
  else {
    pd_driver_set_image_data_idle(*(short *)(DAT_10043330 + 4 + param_1 * 0x2c));
    if (param_3 == 0) {
      iVar2 = 1;
    }
    else {
      for (local_8 = 0; local_8 < *(uint *)(DAT_10042750 + 4 + param_1 * 0x20);
          local_8 = local_8 + *(int *)(DAT_10042750 + param_1 * 0x20)) {
        if (*(int *)(DAT_10042750 + param_1 * 0x20) == 0) {
          pv_set_error_code(0xbd3);
          return (uint)extraout_var_00 << 0x10;
        }
        sVar1 = pv_decode_pixel_stream
                          (param_1,(undefined2 *)(param_2 + local_8),param_3,
                           (short)(local_8 / *(uint *)(DAT_10042750 + param_1 * 0x20)));
        if (sVar1 == 0) {
          return 0;
        }
      }
      iVar2 = CONCAT22((short)(local_8 >> 0x10),1);
    }
  }
  return iVar2;
}



/* ================================================================
 * Function: pm_exp_get_res
 * Address:  1001b5b7
 * ================================================================ */

/* WARNING: Removing unreachable block (ram,0x1001b604) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffff5 : 0x1001b62f */
/* WARNING: Removing unreachable block (ram,0x1001b65b) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* __stdcall pm_exp_get_res,12 */

bool pm_exp_get_res(short param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  bool bVar2;
  char local_10;
  undefined1 uStack_f;
  undefined1 uStack_e;
  undefined1 uStack_d;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined2 local_8;
  undefined2 uStack_6;
  
                    /* 0x1b5b7  331  _pm_exp_get_res@12 */
  _local_8 = CONCAT22(uStack_6,7);
  local_10 = '&';
  uStack_f = 0x40;
  local_c = 0x28;
  local_b = 0;
  local_a = 2;
  uStack_e = (undefined1)((uint)param_2 >> 8);
  uStack_d = (undefined1)param_2;
  local_a = 2;
  local_b = 0;
  local_c = 0x28;
  uStack_f = 0x40;
  local_10 = '&';
  uVar1 = pm_cam_write_read(param_1,0x3f,7,&local_10,&local_10);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *param_3 = (CONCAT12(uStack_e,CONCAT11(uStack_f,local_10)) & 0xff) << 8 |
               CONCAT12(uStack_d,CONCAT11(uStack_e,uStack_f)) & 0xff;
  }
  return bVar2;
}



/* ================================================================
 * Function: pm_exp_get_time_seq
 * Address:  1001b6ca
 * ================================================================ */

/* WARNING: Removing unreachable block (ram,0x1001b6fa) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffff3 : 0x1001b725 */
/* WARNING: Removing unreachable block (ram,0x1001b752) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* __stdcall pm_exp_get_time_seq,8 */

bool pm_exp_get_time_seq(short param_1,ushort *param_2)

{
  uint uVar1;
  bool bVar2;
  char local_10;
  byte bStack_f;
  undefined1 uStack_e;
  undefined1 uStack_d;
  undefined1 local_c;
  undefined2 local_8;
  undefined2 uStack_6;
  
                    /* 0x1b6ca  332  _pm_exp_get_time_seq@8 */
  _local_8 = CONCAT22(uStack_6,5);
  local_10 = '&';
  bStack_f = 0x3a;
  uStack_e = 0x28;
  uStack_d = 0;
  local_c = 2;
  local_c = 2;
  uStack_d = 0;
  uStack_e = 0x28;
  bStack_f = 0x3a;
  local_10 = '&';
  uVar1 = pm_cam_write_read(param_1,0x3f,5,&local_10,&local_10);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *param_2 = CONCAT11(bStack_f,local_10) << 8 | (ushort)bStack_f;
  }
  return bVar2;
}



/* ================================================================
 * Function: pm_exp_clear_ints
 * Address:  1001b7be
 * ================================================================ */

/* __stdcall pm_exp_clear_ints,4 */

undefined4 pm_exp_clear_ints(short param_1)

{
  undefined2 extraout_var;
  
                    /* 0x1b7be  325  _pm_exp_clear_ints@4 */
  pd_exp_clear_ints(param_1);
  return CONCAT22(extraout_var,1);
}



/* ================================================================
 * Function: pm_exp_get_ints
 * Address:  1001b7d3
 * ================================================================ */

/* __stdcall pm_exp_get_ints,8 */

undefined4 pm_exp_get_ints(short param_1,int *param_2)

{
  undefined2 extraout_var;
  
                    /* 0x1b7d3  328  _pm_exp_get_ints@8 */
  pd_exp_get_ints(param_1,param_2);
  return CONCAT22(extraout_var,1);
}



/* ================================================================
 * Function: pm_exp_set_time_seq
 * Address:  1001b7ec
 * ================================================================ */

/* WARNING: Removing unreachable block (ram,0x1001b83d) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffff6 : 0x1001b868 */
/* WARNING: Removing unreachable block (ram,0x1001b894) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* __stdcall pm_exp_set_time_seq,8 */

int pm_exp_set_time_seq(short param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  ushort extraout_var;
  char local_10;
  byte bStack_f;
  undefined1 uStack_e;
  undefined1 uStack_d;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined2 local_8;
  undefined2 uStack_6;
  
                    /* 0x1b7ec  333  _pm_exp_set_time_seq@8 */
  _local_8 = CONCAT22(uStack_6,8);
  local_10 = '9';
  uStack_d = 0x26;
  local_c = 0x3a;
  local_b = 0x28;
  local_a = 0;
  local_9 = 2;
  bStack_f = (byte)(param_2 >> 8);
  uStack_e = (undefined1)param_2;
  local_9 = 2;
  local_a = 0;
  local_b = 0x28;
  local_c = 0x3a;
  uStack_d = 0x26;
  local_10 = '9';
  uVar1 = pm_cam_write_read(param_1,0x3f,8,&local_10,&local_10);
  if ((uVar1 & 0xffff) == 0) {
    iVar2 = 0;
  }
  else if ((uint)(ushort)(CONCAT11(bStack_f,local_10) << 8 | (ushort)bStack_f) == (param_2 & 0xffff)
          ) {
    iVar2 = 1;
  }
  else {
    pv_set_error_code(0xbcc);
    iVar2 = (uint)extraout_var << 0x10;
  }
  return iVar2;
}



/* ================================================================
 * Function: pm_exp_setup_seq
 * Address:  1001b921
 * ================================================================ */

/* __stdcall pm_exp_setup_seq,28 */

uint pm_exp_setup_seq(short param_1,ushort param_2,short param_3,short *param_4,short param_5,
                     uint param_6,uint *param_7)

{
  int iVar1;
  bool bVar2;
  ushort extraout_var_02;
  undefined3 extraout_var;
  uint uVar3;
  undefined3 extraout_var_00;
  ushort extraout_var_03;
  ushort extraout_var_04;
  undefined3 extraout_var_01;
  ushort extraout_var_05;
  uint local_20;
  undefined2 local_1c;
  undefined4 *local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
                    /* 0x1b921  335  _pm_exp_setup_seq@28 */
  if (DAT_10042750 == 0) {
    pv_set_error_code(0xbcb);
    uVar3 = (uint)extraout_var_02 << 0x10;
  }
  else {
    bVar2 = pv_exp_get_script(param_1,(undefined2 *)&local_20);
    if ((CONCAT31(extraout_var,bVar2) & 0xffff) == 0) {
      uVar3 = 0;
    }
    else {
      if ((local_20 & 0xffff) == 0) {
        local_10 = 0;
      }
      else if ((((((*(short *)(DAT_10043330 + 0x28 + param_1 * 0x2c) == 0) &&
                  (*(short *)(&DAT_10042758 + param_1 * 0x1c) == 1)) &&
                 (*(ushort *)(&DAT_1004275a + param_1 * 0x1c) == param_2)) &&
                ((*(short *)(&DAT_1004275c + param_1 * 0x1c) == param_3 &&
                 (*(short *)(&DAT_1004275e + param_1 * 0x1c) == *param_4)))) &&
               ((*(short *)(&DAT_10042760 + param_1 * 0x1c) == param_4[1] &&
                ((*(short *)(&DAT_10042762 + param_1 * 0x1c) == param_4[3] &&
                 (*(short *)(&DAT_10042764 + param_1 * 0x1c) == param_4[4])))))) &&
              ((*(short *)(&DAT_10042766 + param_1 * 0x1c) == param_4[2] &&
               ((((*(short *)(&DAT_10042768 + param_1 * 0x1c) == param_4[5] &&
                  (*(short *)(&DAT_1004276a + param_1 * 0x1c) == param_5)) &&
                 (*(uint *)(&DAT_1004276c + param_1 * 0x1c) == param_6)) &&
                ((*(int *)(DAT_10042750 + 0x18 + param_1 * 0x20) != 0 &&
                 (*(int *)(DAT_10042750 + 0x14 + param_1 * 0x20) != 0)))))))) {
        pv_exp_set_script(param_1,1);
        local_10 = 1;
      }
      else {
        pv_exp_set_script(param_1,0);
        local_10 = 0;
      }
      *(undefined2 *)(&DAT_10042758 + param_1 * 0x1c) = 1;
      *(ushort *)(&DAT_1004275a + param_1 * 0x1c) = param_2;
      *(short *)(&DAT_1004275c + param_1 * 0x1c) = param_3;
      *(short *)(&DAT_1004275e + param_1 * 0x1c) = *param_4;
      *(short *)(&DAT_10042760 + param_1 * 0x1c) = param_4[1];
      *(short *)(&DAT_10042762 + param_1 * 0x1c) = param_4[3];
      *(short *)(&DAT_10042764 + param_1 * 0x1c) = param_4[4];
      *(short *)(&DAT_10042766 + param_1 * 0x1c) = param_4[2];
      *(short *)(&DAT_10042768 + param_1 * 0x1c) = param_4[5];
      *(short *)(&DAT_1004276a + param_1 * 0x1c) = param_5;
      *(uint *)(&DAT_1004276c + param_1 * 0x1c) = param_6;
      iVar1 = DAT_10042750;
      if (local_10 == 1) {
        *param_7 = *(uint *)(DAT_10042750 + 4 + param_1 * 0x20);
        uVar3 = CONCAT22((short)((uint)iVar1 >> 0x10),1);
      }
      else {
        if (*(int *)(DAT_10042750 + 0x18 + param_1 * 0x20) != 0) {
          uVar3 = pm_script_free_groups(*(void **)(DAT_10042750 + 0x18 + param_1 * 0x20));
          if ((uVar3 & 0xffff) == 0) {
            *(undefined4 *)(DAT_10042750 + 0x18 + param_1 * 0x20) = 0;
            return 0;
          }
          *(undefined4 *)(DAT_10042750 + 0x18 + param_1 * 0x20) = 0;
        }
        bVar2 = pm_script_alloc(0x2000,(int *)&local_14);
        if ((CONCAT31(extraout_var_00,bVar2) & 0xffff) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = pm_script_generate(param_1,local_14,0x2000,param_2,
                                     CONCAT22((short)(param_6 >> 0x10),param_3),(int)param_4,param_5
                                     ,param_6,(int *)param_7);
          if ((uVar3 & 0xffff) == 0) {
            local_1c = pl_error_code();
            pm_script_free(local_14);
            local_14 = (undefined4 *)0x0;
            pv_set_error_code(local_1c);
            uVar3 = (uint)extraout_var_03 << 0x10;
          }
          else {
            *param_7 = *param_7 << 1;
            local_c = *param_7;
            *param_7 = *param_7 * (uint)param_2;
            local_8 = *param_7;
            *(undefined2 *)(DAT_10043330 + 0x28 + param_1 * 0x2c) = 0;
            pv_exp_set_bytes(param_1,*param_7);
            *(uint *)(DAT_10042750 + param_1 * 0x20) = local_c;
            *(uint *)(DAT_10042750 + 4 + param_1 * 0x20) = local_8;
            *(undefined2 *)(DAT_10043330 + 0x28 + param_1 * 0x2c) = 0;
            pv_exp_set_bytes(param_1,*param_7);
            if ((*(short *)(local_14 + 1) != 0) &&
               (uVar3 = pm_script_send(param_1,local_14), (uVar3 & 0xffff) == 0)) {
              local_1c = pl_error_code();
              pm_script_free(local_14);
              local_14 = (undefined4 *)0x0;
              pv_set_error_code(local_1c);
              return (uint)extraout_var_04 << 0x10;
            }
            if (*param_7 % 4 != 0) {
              *param_7 = *param_7 + 4 & 0xfffffffc;
            }
            bVar2 = pv_exp_set_script(param_1,1);
            if ((CONCAT31(extraout_var_01,bVar2) & 0xffff) == 0) {
              local_1c = pl_error_code();
              pm_script_free(local_14);
              local_14 = (undefined4 *)0x0;
              pv_set_error_code(local_1c);
              uVar3 = (uint)extraout_var_05 << 0x10;
            }
            else {
              *(undefined4 *)(DAT_10042750 + 0x18 + param_1 * 0x20) = local_14[2];
              local_14[2] = 0;
              uVar3 = pm_script_free(local_14);
              *(undefined4 *)(DAT_10042750 + 0x1c + param_1 * 0x20) = 0;
            }
          }
        }
      }
    }
  }
  return uVar3;
}



/* ================================================================
 * Function: pm_exp_start_seq
 * Address:  1001bea0
 * ================================================================ */

/* __stdcall pm_exp_start_seq,8 */

uint pm_exp_start_seq(short param_1,LPVOID param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  ushort extraout_var_00;
  uint uVar2;
  uint local_8;
  
                    /* 0x1bea0  337  _pm_exp_start_seq@8 */
  bVar1 = pv_exp_get_script(param_1,(undefined2 *)&local_8);
  if ((CONCAT31(extraout_var,bVar1) & 0xffff) == 0) {
    uVar2 = 0;
  }
  else if ((local_8 & 0xffff) == 0) {
    pv_set_error_code(0xbba);
    uVar2 = (uint)extraout_var_00 << 0x10;
  }
  else {
    if ((param_2 != (LPVOID)0x0) && (uVar2 = pv_dd_active(param_1,param_2), (uVar2 & 0xffff) == 0))
    {
      return 0;
    }
    uVar2 = pm_cam_write_read(param_1,0x3f,1,&DAT_1003d020,(LPVOID)0x0);
    if ((uVar2 & 0xffff) == 0) {
      uVar2 = 0;
      if (param_2 != (LPVOID)0x0) {
        uVar2 = pl_exp_abort(param_1,2);
      }
      uVar2 = uVar2 & 0xffff0000;
    }
    else {
      *(undefined4 *)(DAT_10042750 + 0x1c + param_1 * 0x20) = 1;
      uVar2 = 1;
    }
  }
  return uVar2;
}



/* ================================================================
 * Function: pv_exp_set_bytes
 * Address:  1001bf60
 * ================================================================ */

int pv_exp_set_bytes(short param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  ushort extraout_var;
  undefined4 uVar3;
  ushort extraout_var_00;
  uint local_14;
  uint local_10;
  short local_c;
  uint local_8;
  
                    /* 0x1bf60  9  pv_exp_set_bytes */
  uVar1 = pl_cam_check(param_1);
  if ((uVar1 & 0xffff) == 0) {
    iVar2 = 0;
  }
  else if (DAT_10042750 == 0) {
    pv_set_error_code(0xbcb);
    iVar2 = (uint)extraout_var << 0x10;
  }
  else {
    pv_exp_set_script(param_1,0);
    uVar3 = pd_driver_get_image_data_gran
                      (*(short *)(DAT_10043330 + 4 + param_1 * 0x2c),(undefined2 *)&local_10);
    local_c = (short)uVar3;
    if (local_c == 0) {
      if ((local_10 & 0xffff) < 2) {
        local_10 = 2;
      }
      local_14 = param_2 / (local_10 & 0xffff);
      if (param_2 % (local_10 & 0xffff) != 0) {
        local_14 = local_14 + 1;
      }
      local_14 = local_14 * (local_10 & 0xffff);
      *(uint *)(DAT_10043330 + 0xc + param_1 * 0x2c) = local_14;
      local_8 = *(uint *)(DAT_10042750 + 8 + param_1 * 0x20);
      if (local_8 == 0) {
        local_8 = 1;
      }
      *(uint *)(DAT_10042750 + 4 + param_1 * 0x20) = local_14;
      *(int *)(DAT_10042750 + param_1 * 0x20) = (int)((ulonglong)local_14 / (ulonglong)local_8);
      iVar2 = CONCAT22((short)((ulonglong)local_14 / (ulonglong)local_8 >> 0x10),1);
    }
    else {
      pv_set_error_code(local_c);
      iVar2 = (uint)extraout_var_00 << 0x10;
    }
  }
  return iVar2;
}



/* ================================================================
 * Function: pv_exp_get_bytes
 * Address:  1001c0a4
 * ================================================================ */

bool pv_exp_get_bytes(short param_1,undefined4 *param_2)

{
  uint uVar1;
  bool bVar2;
  
                    /* 0x1c0a4  6  pv_exp_get_bytes */
  uVar1 = pl_cam_check(param_1);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *param_2 = *(undefined4 *)(DAT_10043330 + 0xc + param_1 * 0x2c);
  }
  return bVar2;
}



/* ================================================================
 * Function: pv_exp_set_script
 * Address:  1001c0dc
 * ================================================================ */

bool pv_exp_set_script(short param_1,undefined2 param_2)

{
  uint uVar1;
  bool bVar2;
  
                    /* 0x1c0dc  10  pv_exp_set_script */
  uVar1 = pl_cam_check(param_1);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *(undefined2 *)(DAT_10043330 + 8 + param_1 * 0x2c) = param_2;
  }
  return bVar2;
}



/* ================================================================
 * Function: pv_exp_get_script
 * Address:  1001c115
 * ================================================================ */

bool pv_exp_get_script(short param_1,undefined2 *param_2)

{
  uint uVar1;
  bool bVar2;
  
                    /* 0x1c115  7  pv_exp_get_script */
  uVar1 = pl_cam_check(param_1);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *param_2 = *(undefined2 *)(DAT_10043330 + 8 + param_1 * 0x2c);
  }
  return bVar2;
}



/* ================================================================
 * Function: pv_exp_get_status
 * Address:  1001c14f
 * ================================================================ */

bool pv_exp_get_status(short param_1,undefined2 *param_2,undefined4 *param_3)

{
  undefined2 uVar1;
  uint uVar2;
  bool bVar3;
  undefined4 local_8;
  
                    /* 0x1c14f  8  pv_exp_get_status */
  uVar2 = pl_cam_check(param_1);
  bVar3 = (uVar2 & 0xffff) != 0;
  if (bVar3) {
    uVar1 = pd_driver_get_image_data_status
                      (*(short *)(DAT_10043330 + 4 + param_1 * 0x2c),param_3,&local_8);
    *param_2 = uVar1;
  }
  return bVar3;
}



/* ================================================================
 * Function: pv_exp_get_res
 * Address:  1001c19b
 * ================================================================ */

/* __stdcall pv_exp_get_res,12 */

uint pv_exp_get_res(short param_1,ushort param_2,uint *param_3)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  
                    /* 0x1c19b  490  _pv_exp_get_res@12 */
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    bVar1 = pm_exp_get_res(param_1,CONCAT22((short)((uint)DAT_10043330 >> 0x10),param_2),param_3);
    uVar2 = CONCAT22((short)((uint3)extraout_var >> 8),(short)CONCAT31(extraout_var,bVar1));
  }
  else {
    bVar1 = pi_exp_get_res(param_1,param_2,param_3);
    uVar2 = CONCAT22((short)((uint3)extraout_var_00 >> 8),(short)CONCAT31(extraout_var_00,bVar1));
  }
  return uVar2;
}



/* ================================================================
 * Function: pv_exp_clear_ints
 * Address:  1001c20b
 * ================================================================ */

/* __stdcall pv_exp_clear_ints,4 */

uint pv_exp_clear_ints(short param_1)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  
                    /* 0x1c20b  487  _pv_exp_clear_ints@4 */
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    uVar2 = pm_exp_clear_ints(param_1);
  }
  else {
    bVar1 = pi_exp_clear_ints(param_1);
    uVar2 = CONCAT22((short)((uint3)extraout_var >> 8),(short)CONCAT31(extraout_var,bVar1));
  }
  return uVar2;
}



/* ================================================================
 * Function: pv_exp_get_ints
 * Address:  1001c269
 * ================================================================ */

/* __stdcall pv_exp_get_ints,8 */

uint pv_exp_get_ints(short param_1,int *param_2)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  
                    /* 0x1c269  489  _pv_exp_get_ints@8 */
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    uVar2 = pm_exp_get_ints(param_1,param_2);
  }
  else {
    bVar1 = pi_exp_get_ints(param_1,param_2);
    uVar2 = CONCAT22((short)((uint3)extraout_var >> 8),(short)CONCAT31(extraout_var,bVar1));
  }
  return uVar2;
}



/* ================================================================
 * Function: pv_exp_enable_ints
 * Address:  1001c2cf
 * ================================================================ */

/* __stdcall pv_exp_enable_ints,8 */

uint pv_exp_enable_ints(short param_1,short param_2)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  
                    /* 0x1c2cf  488  _pv_exp_enable_ints@8 */
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else {
    if ((-1 < param_2) && (param_2 < 4)) {
      *(short *)(DAT_10043330 + 0x24 + param_1 * 0x2c) = param_2;
    }
    if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
      uVar2 = CONCAT22((short)((uint)(param_1 * 0x2c) >> 0x10),1);
    }
    else {
      bVar1 = pi_exp_enable_ints(param_1,param_2);
      uVar2 = CONCAT22((short)((uint3)extraout_var >> 8),(short)CONCAT31(extraout_var,bVar1));
    }
  }
  return uVar2;
}



/* ================================================================
 * Function: pl_io_clear_script_control
 * Address:  1001c350
 * ================================================================ */

int pl_io_clear_script_control(short param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var;
  ushort extraout_var_00;
  
                    /* 0x1c350  131  pl_io_clear_script_control */
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = pv_cam_get_reads(param_1);
    if ((uVar2 & 0xffff) == 0) {
      iVar3 = 0;
    }
    else {
      pv_io_clear_list(*(int *)(DAT_10043334 + 0x20 + param_1 * 0x24));
      pv_io_clear_list(*(int *)(DAT_10043334 + 0x20 + param_1 * 0x24) + 0x18);
      pv_io_clear_list(*(int *)(DAT_10043334 + 0x20 + param_1 * 0x24) + 0x30);
      pv_io_clear_list(*(int *)(DAT_10043334 + 0x20 + param_1 * 0x24) + 0x48);
      pv_io_clear_list(*(int *)(DAT_10043334 + 0x20 + param_1 * 0x24) + 0x60);
      pv_io_clear_list(*(int *)(DAT_10043334 + 0x20 + param_1 * 0x24) + 0x78);
      pv_io_clear_list(*(int *)(DAT_10043334 + 0x20 + param_1 * 0x24) + 0x90);
      pv_io_clear_list(*(int *)(DAT_10043334 + 0x20 + param_1 * 0x24) + 0xa8);
      pv_io_clear_list(*(int *)(DAT_10043334 + 0x20 + param_1 * 0x24) + 0xc0);
      pv_io_clear_list(*(int *)(DAT_10043334 + 0x20 + param_1 * 0x24) + 0xd8);
      bVar1 = pv_exp_set_script(param_1,0);
      if ((CONCAT31(extraout_var,bVar1) & 0xffff) == 0) {
        pv_set_error_code(0xbcc);
        iVar3 = (uint)extraout_var_00 << 0x10;
      }
      else {
        iVar3 = 1;
      }
    }
  }
  return iVar3;
}



/* ================================================================
 * Function: pl_io_script_control
 * Address:  1001c4fc
 * ================================================================ */

int pl_io_script_control
              (short param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  bool bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  ushort extraout_var_00;
  ushort extraout_var_01;
  ushort extraout_var_02;
  ushort extraout_var_03;
  ushort extraout_var_04;
  ushort extraout_var_05;
  ushort extraout_var_06;
  ushort extraout_var_07;
  undefined3 extraout_var;
  ushort extraout_var_08;
  double local_24;
  int local_1c;
  uint local_18;
  double local_14;
  undefined2 *local_c;
  uint local_8;
  
                    /* 0x1c4fc  130  pl_io_script_control */
  uVar3 = pl_cam_check(param_1);
  if ((uVar3 & 0xffff) == 0) {
    iVar4 = 0;
  }
  else {
    uVar3 = pv_cam_get_reads(param_1);
    if ((uVar3 & 0xffff) == 0) {
      iVar4 = 0;
    }
    else if ((param_2 & 0xffff) < (uint)*(ushort *)(DAT_10043338 + 0x40 + param_1 * 0x110)) {
      uVar3 = pl_set_param(param_1,0x602020f,&param_2);
      if ((uVar3 & 0xffff) == 0) {
        pv_set_error_code(0xbcc);
        iVar4 = (uint)extraout_var_01 << 0x10;
      }
      else {
        uVar2 = pl_get_param(param_1,0x9020211,0,&local_8);
        if (uVar2 == 0) {
          pv_set_error_code(0xbde);
          iVar4 = (uint)extraout_var_02 << 0x10;
        }
        else if (local_8 == 0) {
          pv_set_error_code(0xbe1);
          iVar4 = (uint)extraout_var_03 << 0x10;
        }
        else {
          uVar2 = pl_get_param(param_1,0x4020212,3,(uint *)&local_14);
          if ((uVar2 == 0) ||
             (uVar2 = pl_get_param(param_1,0x4020212,4,(uint *)&local_24), uVar2 == 0)) {
            pv_set_error_code(0xbde);
            iVar4 = (uint)extraout_var_04 << 0x10;
          }
          else if (((double)CONCAT44(param_4,param_3) < local_14) ||
                  (local_24 < (double)CONCAT44(param_4,param_3))) {
            pv_set_error_code(0xbdf);
            iVar4 = (uint)extraout_var_05 << 0x10;
          }
          else {
            switch(param_5) {
            case 0:
              local_1c = *(int *)(DAT_10043334 + 0x20 + param_1 * 0x24);
              break;
            case 1:
              local_1c = *(int *)(DAT_10043334 + 0x20 + param_1 * 0x24) + 0x18;
              break;
            case 2:
              local_1c = *(int *)(DAT_10043334 + 0x20 + param_1 * 0x24) + 0x30;
              break;
            case 3:
              local_1c = *(int *)(DAT_10043334 + 0x20 + param_1 * 0x24) + 0x48;
              break;
            case 4:
              local_1c = *(int *)(DAT_10043334 + 0x20 + param_1 * 0x24) + 0x60;
              break;
            case 5:
              local_1c = *(int *)(DAT_10043334 + 0x20 + param_1 * 0x24) + 0x78;
              break;
            case 6:
              local_1c = *(int *)(DAT_10043334 + 0x20 + param_1 * 0x24) + 0x90;
              break;
            case 7:
              local_1c = *(int *)(DAT_10043334 + 0x20 + param_1 * 0x24) + 0xa8;
              break;
            case 8:
              local_1c = *(int *)(DAT_10043334 + 0x20 + param_1 * 0x24) + 0xc0;
              break;
            case 9:
              local_1c = *(int *)(DAT_10043334 + 0x20 + param_1 * 0x24) + 0xd8;
              break;
            default:
              pv_set_error_code(0xbe0);
              return (uint)extraout_var_06 << 0x10;
            }
            for (local_c = *(undefined2 **)(local_1c + 0x10); local_c != (undefined2 *)0x0;
                local_c = *(undefined2 **)((int)local_c + 0x10)) {
              local_1c = (int)local_c;
            }
            local_c = pv_malloc(0x18,0);
            if (local_c == (undefined2 *)0x0) {
              iVar4 = 0;
            }
            else {
              *local_c = (undefined2)param_2;
              *(undefined4 *)(local_c + 4) = param_3;
              *(undefined4 *)(local_c + 6) = param_4;
              *(undefined4 *)(local_c + 8) = 0;
              uVar2 = pl_get_param(param_1,0x9020210,0,&local_18);
              if (uVar2 == 0) {
                pv_set_error_code(0xbde);
                iVar4 = (uint)extraout_var_07 << 0x10;
              }
              else {
                *(uint *)(local_c + 2) = local_18;
                *(undefined2 **)(local_1c + 0x10) = local_c;
                bVar1 = pv_exp_set_script(param_1,0);
                if ((CONCAT31(extraout_var,bVar1) & 0xffff) == 0) {
                  pv_set_error_code(0xbcc);
                  iVar4 = (uint)extraout_var_08 << 0x10;
                }
                else {
                  iVar4 = 1;
                }
              }
            }
          }
        }
      }
    }
    else {
      pv_set_error_code(0xbdd);
      iVar4 = (uint)extraout_var_00 << 0x10;
    }
  }
  return iVar4;
}



/* ================================================================
 * Function: pv_io_clear_list
 * Address:  1001c8a0
 * ================================================================ */

/* __stdcall pv_io_clear_list,4 */

undefined4 pv_io_clear_list(int param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 local_c;
  
                    /* 0x1c8a0  516  _pv_io_clear_list@4 */
  iVar2 = param_1;
  local_c = *(void **)(param_1 + 0x10);
  while (local_c != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((int)local_c + 0x10);
    pvVar1 = *(void **)((int)local_c + 0x10);
    iVar2 = pv_free(local_c,0);
    local_c = pvVar1;
  }
  return CONCAT22((short)((uint)iVar2 >> 0x10),1);
}



/* ================================================================
 * Function: pl_buf_alloc
 * Address:  1001c8f0
 * ================================================================ */

uint pl_buf_alloc(short *param_1,short param_2,short param_3,short param_4,ushort *param_5)

{
  bool bVar1;
  ushort extraout_var_00;
  uint uVar2;
  undefined3 extraout_var;
  int local_10;
  short local_c [2];
  undefined2 *local_8;
  
                    /* 0x1c8f0  11  pl_buf_alloc */
  pv_set_error_code(0);
  if ((((param_3 == 0) || (param_3 == 1)) || (param_3 == 2)) ||
     (((param_3 == 3 || (param_3 == 4)) || (param_3 == 5)))) {
    local_8 = pv_malloc(param_4 * 0xc,0);
    if (local_8 == (undefined2 *)0x0) {
      uVar2 = 0;
    }
    else {
      pv_rgn2imap(param_5,param_4,local_8);
      uVar2 = pv_buf_alloc(&local_10,param_2,param_3,param_4,(int)local_8);
      if ((uVar2 & 0xffff) == 0) {
        uVar2 = pv_free(local_8,0);
        uVar2 = uVar2 & 0xffff0000;
      }
      else {
        pv_free(local_8,0);
        local_8 = (undefined2 *)0x0;
        bVar1 = pv_set_hbuf_entry(local_c,local_10);
        if ((CONCAT31(extraout_var,bVar1) & 0xffff) == 0) {
          uVar2 = 0;
        }
        else {
          *param_1 = local_c[0];
          uVar2 = 1;
        }
      }
    }
  }
  else {
    pv_set_error_code(0xfaa);
    uVar2 = (uint)extraout_var_00 << 0x10;
  }
  return uVar2;
}



/* ================================================================
 * Function: pl_buf_free
 * Address:  1001c9f3
 * ================================================================ */

uint pl_buf_free(short param_1)

{
  uint uVar1;
  void *local_c [2];
  
                    /* 0x1c9f3  12  pl_buf_free */
  uVar1 = pv_get_buf_ptr(param_1,local_c);
  if ((uVar1 & 0xffff) == 0) {
    uVar1 = 0;
  }
  else {
    pv_clear_linked_himg_entries(param_1);
    pv_clear_hbuf_entry(param_1);
    uVar1 = pv_buf_free(local_c[0]);
  }
  return uVar1;
}



/* ================================================================
 * Function: pl_buf_get_bits
 * Address:  1001ca47
 * ================================================================ */

int pl_buf_get_bits(short param_1,short *param_2)

{
  uint uVar1;
  int iVar2;
  short *psVar3;
  ushort extraout_var;
  short *local_8;
  
                    /* 0x1ca47  13  pl_buf_get_bits */
  uVar1 = pv_get_buf_ptr(param_1,&local_8);
  if ((uVar1 & 0xffff) == 0) {
    iVar2 = 0;
  }
  else {
    *param_2 = *local_8;
    psVar3 = (short *)(int)*param_2;
    if ((((psVar3 == (short *)0x0) || (*param_2 == 1)) || (psVar3 = param_2, *param_2 == 2)) ||
       (((psVar3 = (short *)(int)*param_2, psVar3 == (short *)0x3 || (*param_2 == 4)) ||
        (psVar3 = param_2, *param_2 == 5)))) {
      iVar2 = CONCAT22((short)((uint)psVar3 >> 0x10),1);
    }
    else {
      pv_set_error_code(0xfaa);
      iVar2 = (uint)extraout_var << 0x10;
    }
  }
  return iVar2;
}



/* ================================================================
 * Function: pl_buf_get_size
 * Address:  1001cacd
 * ================================================================ */

undefined4 pl_buf_get_size(short param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int local_18;
  short local_14;
  ushort *local_10;
  short local_c [2];
  int local_8;
  
                    /* 0x1cacd  23  pl_buf_get_size */
  local_8 = 0;
  uVar1 = pv_get_buf_ptr(param_1,&local_18);
  if ((uVar1 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else {
    local_10 = *(ushort **)(local_18 + 8);
    for (local_14 = 0; local_14 < *(short *)(local_18 + 2); local_14 = local_14 + 1) {
      local_8 = local_8 + (uint)*local_10 * (uint)local_10[1];
      local_10 = local_10 + 6;
    }
    local_8 = local_8 * *(short *)(local_18 + 4);
    uVar1 = pl_buf_get_bits(param_1,local_c);
    if ((uVar1 & 0xffff) == 0) {
      uVar2 = 0;
    }
    else {
      iVar3 = local_c[0] + -2;
      switch(iVar3) {
      case 0:
      case 1:
        local_8 = local_8 << 1;
        break;
      case 2:
      case 3:
        iVar3 = local_8 << 2;
        local_8 = iVar3;
      }
      *param_2 = local_8;
      uVar2 = CONCAT22((short)((uint)iVar3 >> 0x10),1);
    }
  }
  return uVar2;
}



/* ================================================================
 * Function: pl_buf_get_img_bin
 * Address:  1001cbcd
 * ================================================================ */

undefined4 pl_buf_get_img_bin(short param_1,undefined2 *param_2,undefined2 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  int local_8;
  
                    /* 0x1cbcd  17  pl_buf_get_img_bin */
  piVar4 = &local_8;
  uVar2 = pv_get_himg_bufhandle(param_1);
  uVar3 = pv_get_buf_ptr((short)uVar2,piVar4);
  if ((uVar3 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = pv_get_himg_imgnum(param_1);
    *param_2 = *(undefined2 *)(*(int *)(local_8 + 8) + 4 + (short)uVar2 * 0xc);
    uVar2 = pv_get_himg_imgnum(param_1);
    iVar1 = *(int *)(local_8 + 8);
    *param_3 = *(undefined2 *)(iVar1 + 6 + (short)uVar2 * 0xc);
    uVar2 = CONCAT22((short)((uint)iVar1 >> 0x10),1);
  }
  return uVar2;
}



/* ================================================================
 * Function: pl_buf_get_img_handle
 * Address:  1001cc3f
 * ================================================================ */

int pl_buf_get_img_handle(short param_1,short param_2,short param_3,short *param_4)

{
  uint uVar1;
  int iVar2;
  ushort extraout_var;
  ushort extraout_var_00;
  int local_c;
  short local_8 [2];
  
                    /* 0x1cc3f  18  pl_buf_get_img_handle */
  uVar1 = pv_get_buf_ptr(param_1,&local_c);
  if ((uVar1 & 0xffff) == 0) {
    iVar2 = 0;
  }
  else if ((param_2 < 0) || (*(short *)(local_c + 4) <= param_2)) {
    pv_set_error_code(0xfac);
    iVar2 = (uint)extraout_var << 0x10;
  }
  else {
    if ((-1 < param_3) && (param_3 < *(short *)(local_c + 2))) {
      uVar1 = pv_set_himg_entry(local_8,param_1,param_2,param_3);
      if ((uVar1 & 0xffff) == 0) {
        return 0;
      }
      *param_4 = local_8[0];
      return 1;
    }
    pv_set_error_code(0xfab);
    iVar2 = (uint)extraout_var_00 << 0x10;
  }
  return iVar2;
}



/* ================================================================
 * Function: pl_buf_get_img_ofs
 * Address:  1001ccea
 * ================================================================ */

undefined4 pl_buf_get_img_ofs(short param_1,undefined2 *param_2,undefined2 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  int local_8;
  
                    /* 0x1ccea  19  pl_buf_get_img_ofs */
  piVar4 = &local_8;
  uVar2 = pv_get_himg_bufhandle(param_1);
  uVar3 = pv_get_buf_ptr((short)uVar2,piVar4);
  if ((uVar3 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = pv_get_himg_imgnum(param_1);
    *param_2 = *(undefined2 *)(*(int *)(local_8 + 8) + 8 + (short)uVar2 * 0xc);
    uVar2 = pv_get_himg_imgnum(param_1);
    iVar1 = *(int *)(local_8 + 8);
    *param_3 = *(undefined2 *)(iVar1 + 10 + (short)uVar2 * 0xc);
    uVar2 = CONCAT22((short)((uint)iVar1 >> 0x10),1);
  }
  return uVar2;
}



/* ================================================================
 * Function: pl_buf_get_img_ptr
 * Address:  1001cd5c
 * ================================================================ */

undefined4 pl_buf_get_img_ptr(short param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  int local_8;
  
                    /* 0x1cd5c  20  pl_buf_get_img_ptr */
  pv_set_error_code(0);
  uVar2 = pv_is_himg_valid(param_1);
  if ((uVar2 & 0xffff) == 0) {
    uVar3 = 0;
  }
  else {
    piVar4 = &local_8;
    uVar3 = pv_get_himg_bufhandle(param_1);
    uVar2 = pv_get_buf_ptr((short)uVar3,piVar4);
    if ((uVar2 & 0xffff) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = pv_get_himg_expnum(param_1);
      piVar4 = *(int **)(*(int *)(local_8 + 0xc) + (short)uVar3 * 4);
      uVar3 = pv_get_himg_imgnum(param_1);
      iVar1 = *piVar4;
      *param_2 = *(undefined4 *)(iVar1 + (short)uVar3 * 8);
      uVar3 = CONCAT22((short)((uint)iVar1 >> 0x10),1);
    }
  }
  return uVar3;
}



/* ================================================================
 * Function: pl_buf_get_img_size
 * Address:  1001cdda
 * ================================================================ */

undefined4 pl_buf_get_img_size(short param_1,undefined2 *param_2,undefined2 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  int local_8;
  
                    /* 0x1cdda  21  pl_buf_get_img_size */
  piVar4 = &local_8;
  uVar2 = pv_get_himg_bufhandle(param_1);
  uVar3 = pv_get_buf_ptr((short)uVar2,piVar4);
  if ((uVar3 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = pv_get_himg_imgnum(param_1);
    *param_3 = *(undefined2 *)(*(int *)(local_8 + 8) + 2 + (short)uVar2 * 0xc);
    uVar2 = pv_get_himg_imgnum(param_1);
    iVar1 = *(int *)(local_8 + 8);
    *param_2 = *(undefined2 *)(iVar1 + (short)uVar2 * 0xc);
    uVar2 = CONCAT22((short)((uint)iVar1 >> 0x10),1);
  }
  return uVar2;
}



/* ================================================================
 * Function: pl_buf_get_img_total
 * Address:  1001ce4b
 * ================================================================ */

bool pl_buf_get_img_total(short param_1,undefined2 *param_2)

{
  uint uVar1;
  bool bVar2;
  int local_8;
  
                    /* 0x1ce4b  22  pl_buf_get_img_total */
  uVar1 = pv_get_buf_ptr(param_1,&local_8);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *param_2 = *(undefined2 *)(local_8 + 2);
  }
  return bVar2;
}



/* ================================================================
 * Function: pl_buf_get_exp_date
 * Address:  1001ce82
 * ================================================================ */

int pl_buf_get_exp_date(short param_1,short param_2,undefined2 *param_3,undefined1 *param_4,
                       undefined1 *param_5,undefined1 *param_6,undefined1 *param_7,
                       undefined1 *param_8,undefined2 *param_9)

{
  uint uVar1;
  int iVar2;
  ushort extraout_var;
  int local_c [2];
  
                    /* 0x1ce82  14  pl_buf_get_exp_date */
  uVar1 = pv_get_buf_ptr(param_1,local_c);
  if ((uVar1 & 0xffff) == 0) {
    iVar2 = 0;
  }
  else if (param_2 < *(short *)(local_c[0] + 4)) {
    iVar2 = *(int *)(*(int *)(local_c[0] + 0xc) + param_2 * 4);
    *param_3 = *(undefined2 *)(iVar2 + 4);
    *param_4 = *(undefined1 *)(iVar2 + 6);
    *param_5 = *(undefined1 *)(iVar2 + 7);
    *param_6 = *(undefined1 *)(iVar2 + 8);
    *param_7 = *(undefined1 *)(iVar2 + 9);
    *param_8 = *(undefined1 *)(iVar2 + 10);
    *param_9 = *(undefined2 *)(iVar2 + 0xc);
    iVar2 = CONCAT22((short)((uint)param_9 >> 0x10),1);
  }
  else {
    pv_set_error_code(0xfac);
    iVar2 = (uint)extraout_var << 0x10;
  }
  return iVar2;
}



/* ================================================================
 * Function: pl_buf_get_exp_total
 * Address:  1001cf32
 * ================================================================ */

bool pl_buf_get_exp_total(short param_1,undefined2 *param_2)

{
  uint uVar1;
  bool bVar2;
  int local_8;
  
                    /* 0x1cf32  16  pl_buf_get_exp_total */
  uVar1 = pv_get_buf_ptr(param_1,&local_8);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *param_2 = *(undefined2 *)(local_8 + 4);
  }
  return bVar2;
}



/* ================================================================
 * Function: pl_buf_get_exp_time
 * Address:  1001cf69
 * ================================================================ */

int pl_buf_get_exp_time(short param_1,short param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  ushort extraout_var;
  int local_8;
  
                    /* 0x1cf69  15  pl_buf_get_exp_time */
  uVar1 = pv_get_buf_ptr(param_1,&local_8);
  if ((uVar1 & 0xffff) == 0) {
    iVar2 = 0;
  }
  else if (param_2 < *(short *)(local_8 + 4)) {
    *param_3 = *(undefined4 *)(*(int *)(*(int *)(local_8 + 0xc) + param_2 * 4) + 0x10);
    iVar2 = CONCAT22((short)((uint)param_3 >> 0x10),1);
  }
  else {
    pv_set_error_code(0xfac);
    iVar2 = (uint)extraout_var << 0x10;
  }
  return iVar2;
}



/* ================================================================
 * Function: pl_buf_init
 * Address:  1001cfc6
 * ================================================================ */

undefined2 pl_buf_init(void)

{
  undefined2 uVar1;
  
                    /* 0x1cfc6  24  pl_buf_init */
  uVar1 = pv_init_img_buf_c29();
  return uVar1;
}



/* ================================================================
 * Function: pl_buf_uninit
 * Address:  1001cfdb
 * ================================================================ */

undefined2 pl_buf_uninit(void)

{
  undefined2 uVar1;
  
                    /* 0x1cfdb  26  pl_buf_uninit */
  uVar1 = pv_uninit_img_buf_c29();
  return uVar1;
}



/* ================================================================
 * Function: pl_buf_set_exp_date
 * Address:  1001cff0
 * ================================================================ */

int pl_buf_set_exp_date(short param_1,short param_2,undefined2 param_3,byte param_4,byte param_5,
                       byte param_6,byte param_7,byte param_8,ushort param_9)

{
  uint uVar1;
  int iVar2;
  ushort extraout_var;
  ushort extraout_var_00;
  int local_8;
  
                    /* 0x1cff0  25  pl_buf_set_exp_date */
  uVar1 = pv_get_buf_ptr(param_1,&local_8);
  if ((uVar1 & 0xffff) == 0) {
    iVar2 = 0;
  }
  else if (param_2 < *(short *)(local_8 + 4)) {
    if (((((param_4 == 0) || (0xc < param_4)) || (param_5 == 0)) ||
        ((0x1f < param_5 || (0x17 < param_6)))) ||
       ((0x3b < param_7 || ((0x3b < param_8 || (999 < param_9)))))) {
      pv_set_error_code(0xfad);
      iVar2 = (uint)extraout_var_00 << 0x10;
    }
    else {
      *(byte *)(*(int *)(*(int *)(local_8 + 0xc) + param_2 * 4) + 7) = param_5;
      *(byte *)(*(int *)(*(int *)(local_8 + 0xc) + param_2 * 4) + 6) = param_4;
      *(undefined2 *)(*(int *)(*(int *)(local_8 + 0xc) + param_2 * 4) + 4) = param_3;
      *(byte *)(*(int *)(*(int *)(local_8 + 0xc) + param_2 * 4) + 8) = param_6;
      *(byte *)(*(int *)(*(int *)(local_8 + 0xc) + param_2 * 4) + 9) = param_7;
      *(byte *)(*(int *)(*(int *)(local_8 + 0xc) + param_2 * 4) + 10) = param_8;
      iVar2 = *(int *)(local_8 + 0xc);
      *(ushort *)(*(int *)(iVar2 + param_2 * 4) + 0xc) = param_9;
      iVar2 = CONCAT22((short)((uint)iVar2 >> 0x10),1);
    }
  }
  else {
    pv_set_error_code(0xfac);
    iVar2 = (uint)extraout_var << 0x10;
  }
  return iVar2;
}



/* ================================================================
 * Function: pv_rgn2imap
 * Address:  1001d150
 * ================================================================ */

/* __stdcall pv_rgn2imap,12 */

undefined4 pv_rgn2imap(ushort *param_1,short param_2,undefined2 *param_3)

{
  short sVar1;
  ushort extraout_var;
  
                    /* 0x1d150  529  _pv_rgn2imap@12 */
  pv_set_error_code(0);
  sVar1 = 0;
  while( true ) {
    if (param_2 <= sVar1) {
      return CONCAT22(sVar1 >> 0xf,1);
    }
    if ((param_1[5] == 0) || (param_1[2] == 0)) break;
    *param_3 = (short)((ulonglong)(((uint)param_1[4] - (uint)param_1[3]) + 1 & 0xffff) /
                      (ulonglong)(longlong)(int)(uint)param_1[5]);
    param_3[1] = (short)((ulonglong)(((uint)param_1[1] - (uint)*param_1) + 1 & 0xffff) /
                        (ulonglong)(longlong)(int)(uint)param_1[2]);
    param_3[2] = param_1[5];
    param_3[3] = param_1[2];
    param_3[4] = *param_1;
    param_3[5] = param_1[3];
    sVar1 = sVar1 + 1;
    param_1 = param_1 + 6;
    param_3 = param_3 + 6;
  }
  pv_set_error_code(0xfae);
  return (uint)extraout_var << 0x10;
}



/* ================================================================
 * Function: pv_is_hbuf_inrange
 * Address:  1001d263
 * ================================================================ */

/* __stdcall pv_is_hbuf_inrange,4 */

int pv_is_hbuf_inrange(short param_1)

{
  ushort extraout_var;
  int iVar1;
  
                    /* 0x1d263  525  _pv_is_hbuf_inrange@4 */
  pv_set_error_code(0);
  if ((param_1 < 1) || (0x80 < param_1)) {
    pv_set_error_code(4000);
    iVar1 = (uint)extraout_var << 0x10;
  }
  else {
    iVar1 = CONCAT22(param_1 >> 0xf,1);
  }
  return iVar1;
}



/* ================================================================
 * Function: pv_is_hbuf_valid
 * Address:  1001d298
 * ================================================================ */

/* __stdcall pv_is_hbuf_valid,4 */

int pv_is_hbuf_valid(short param_1)

{
  uint uVar1;
  int iVar2;
  ushort extraout_var;
  
                    /* 0x1d298  526  _pv_is_hbuf_valid@4 */
  pv_set_error_code(0);
  uVar1 = pv_is_hbuf_inrange(param_1);
  if ((uVar1 & 0xffff) == 0) {
    iVar2 = 0;
  }
  else if (*(int *)(&DAT_10042918 + param_1 * 4) == 0) {
    pv_set_error_code(0xfa9);
    iVar2 = (uint)extraout_var << 0x10;
  }
  else {
    iVar2 = 1;
  }
  return iVar2;
}



/* ================================================================
 * Function: pv_find_free_hbuf
 * Address:  1001d2df
 * ================================================================ */

/* __stdcall pv_find_free_hbuf,4 */

int pv_find_free_hbuf(short *param_1)

{
  uint uVar1;
  ushort extraout_var;
  int local_8;
  
                    /* 0x1d2df  491  _pv_find_free_hbuf@4 */
  pv_set_error_code(0);
  local_8 = 1;
  while( true ) {
    if (0x80 < local_8) {
      pv_set_error_code(0xfa2);
      return (uint)extraout_var << 0x10;
    }
    uVar1 = pv_is_hbuf_valid((short)local_8);
    if ((uVar1 & 0xffff) == 0) break;
    local_8 = local_8 + 1;
  }
  *param_1 = (short)local_8;
  return 1;
}



/* ================================================================
 * Function: pv_set_hbuf_entry
 * Address:  1001d33d
 * ================================================================ */

/* __stdcall pv_set_hbuf_entry,8 */

bool pv_set_hbuf_entry(short *param_1,undefined4 param_2)

{
  uint uVar1;
  bool bVar2;
  short local_8 [2];
  
  local_8[0] = 0;
  local_8[1] = 0;
                    /* 0x1d33d  530  _pv_set_hbuf_entry@8 */
  pv_set_error_code(0);
  uVar1 = pv_find_free_hbuf(local_8);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *(undefined4 *)(&DAT_10042918 + local_8[0] * 4) = param_2;
    *param_1 = local_8[0];
  }
  return bVar2;
}



/* ================================================================
 * Function: pv_clear_hbuf_entry
 * Address:  1001d387
 * ================================================================ */

/* __stdcall pv_clear_hbuf_entry,4 */

int pv_clear_hbuf_entry(short param_1)

{
  uint uVar1;
  int iVar2;
  ushort extraout_var;
  
                    /* 0x1d387  480  _pv_clear_hbuf_entry@4 */
  pv_set_error_code(0);
  uVar1 = pv_is_hbuf_inrange(param_1);
  if ((uVar1 & 0xffff) == 0) {
    iVar2 = 0;
  }
  else {
    uVar1 = pv_is_hbuf_valid(param_1);
    if ((uVar1 & 0xffff) == 0) {
      pv_set_error_code(0xfa5);
      iVar2 = (uint)extraout_var << 0x10;
    }
    else {
      *(undefined4 *)(&DAT_10042918 + param_1 * 4) = 0;
      iVar2 = 1;
    }
  }
  return iVar2;
}



/* ================================================================
 * Function: pv_get_buf_ptr
 * Address:  1001d3e2
 * ================================================================ */

/* __stdcall pv_get_buf_ptr,8 */

undefined4 pv_get_buf_ptr(short param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
                    /* 0x1d3e2  494  _pv_get_buf_ptr@8 */
  uVar1 = pv_is_hbuf_valid(param_1);
  if ((uVar1 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(&DAT_10042918 + param_1 * 4);
    *param_2 = uVar2;
    uVar2 = CONCAT22((short)((uint)uVar2 >> 0x10),1);
  }
  return uVar2;
}



/* ================================================================
 * Function: pv_is_himg_inrange
 * Address:  1001d420
 * ================================================================ */

/* __stdcall pv_is_himg_inrange,4 */

int pv_is_himg_inrange(short param_1)

{
  ushort extraout_var;
  int iVar1;
  
                    /* 0x1d420  527  _pv_is_himg_inrange@4 */
  pv_set_error_code(0);
  if ((param_1 < 1) || (0x100 < param_1)) {
    pv_set_error_code(0xfa1);
    iVar1 = (uint)extraout_var << 0x10;
  }
  else {
    iVar1 = CONCAT22(param_1 >> 0xf,1);
  }
  return iVar1;
}



/* ================================================================
 * Function: pv_is_himg_valid
 * Address:  1001d455
 * ================================================================ */

/* __stdcall pv_is_himg_valid,4 */

int pv_is_himg_valid(short param_1)

{
  uint uVar1;
  int iVar2;
  ushort extraout_var;
  
                    /* 0x1d455  528  _pv_is_himg_valid@4 */
  pv_set_error_code(0);
  uVar1 = pv_is_himg_inrange(param_1);
  if ((uVar1 & 0xffff) == 0) {
    iVar2 = 0;
  }
  else {
    uVar1 = pv_is_hbuf_valid(*(short *)(&DAT_10042b24 + param_1 * 8));
    if (((uVar1 & 0xffff) == 0) || (*(short *)(&DAT_10042b26 + param_1 * 8) < 1)) {
      pv_set_error_code(0xfa8);
      iVar2 = (uint)extraout_var << 0x10;
    }
    else {
      iVar2 = CONCAT22(param_1 >> 0xf,1);
    }
  }
  return iVar2;
}



/* ================================================================
 * Function: pv_find_free_himg
 * Address:  1001d4b9
 * ================================================================ */

/* __stdcall pv_find_free_himg,16 */

bool pv_find_free_himg(short *param_1,short param_2,short param_3,short param_4)

{
  uint uVar1;
  short local_c;
  short local_8;
  
                    /* 0x1d4b9  492  _pv_find_free_himg@16 */
  local_8 = 0;
  pv_set_error_code(0);
  local_c = 1;
  do {
    if (0x100 < local_c) {
      if (local_8 != 0) {
        *param_1 = local_8;
      }
      else {
        pv_set_error_code(0xfa3);
      }
      return local_8 != 0;
    }
    uVar1 = pv_is_himg_valid(local_c);
    if ((uVar1 & 0xffff) == 0) {
      if (local_8 == 0) {
        local_8 = local_c;
      }
    }
    else if (((*(short *)(&DAT_10042b24 + local_c * 8) == param_2) &&
             (*(short *)(&DAT_10042b20 + local_c * 8) == param_3)) &&
            (*(short *)(&DAT_10042b22 + local_c * 8) == param_4)) {
      *param_1 = local_c;
      return true;
    }
    local_c = local_c + 1;
  } while( true );
}



/* ================================================================
 * Function: pv_set_himg_entry
 * Address:  1001d58d
 * ================================================================ */

/* __stdcall pv_set_himg_entry,16 */

undefined4 pv_set_himg_entry(short *param_1,short param_2,short param_3,short param_4)

{
  short sVar1;
  bool bVar2;
  undefined3 extraout_var;
  undefined4 uVar3;
  int iVar4;
  short local_8 [2];
  
  local_8[0] = 0;
  local_8[1] = 0;
                    /* 0x1d58d  531  _pv_set_himg_entry@16 */
  pv_set_error_code(0);
  bVar2 = pv_find_free_himg(local_8,param_2,param_3,param_4);
  if ((CONCAT31(extraout_var,bVar2) & 0xffff) == 0) {
    uVar3 = 0;
  }
  else {
    sVar1 = *(short *)(&DAT_10042b26 + local_8[0] * 8);
    iVar4 = (int)local_8[0];
    *(short *)(&DAT_10042b26 + iVar4 * 8) = *(short *)(&DAT_10042b26 + local_8[0] * 8) + 1;
    if (sVar1 == 0) {
      *(short *)(&DAT_10042b24 + local_8[0] * 8) = param_2;
      *(short *)(&DAT_10042b20 + local_8[0] * 8) = param_3;
      iVar4 = CONCAT22(local_8[0] >> 0xf,param_4);
      *(short *)(&DAT_10042b22 + local_8[0] * 8) = param_4;
    }
    *param_1 = local_8[0];
    uVar3 = CONCAT22((short)((uint)iVar4 >> 0x10),1);
  }
  return uVar3;
}



/* ================================================================
 * Function: pv_clear_himg_entry
 * Address:  1001d634
 * ================================================================ */

/* __stdcall pv_clear_himg_entry,4 */

int pv_clear_himg_entry(short param_1)

{
  uint uVar1;
  ushort extraout_var;
  int iVar2;
  
                    /* 0x1d634  481  _pv_clear_himg_entry@4 */
  pv_set_error_code(0);
  uVar1 = pv_is_himg_inrange(param_1);
  if ((uVar1 & 0xffff) == 0) {
    iVar2 = 0;
  }
  else {
    uVar1 = pv_is_himg_valid(param_1);
    if ((uVar1 & 0xffff) == 0) {
      pv_set_error_code(0xfa7);
      iVar2 = (uint)extraout_var << 0x10;
    }
    else {
      *(short *)(&DAT_10042b26 + param_1 * 8) = *(short *)(&DAT_10042b26 + param_1 * 8) + -1;
      iVar2 = (int)*(short *)(&DAT_10042b26 + param_1 * 8);
      if (iVar2 == 0) {
        *(undefined2 *)(&DAT_10042b24 + param_1 * 8) = 0;
        *(undefined2 *)(&DAT_10042b20 + param_1 * 8) = 0;
        iVar2 = (int)param_1;
        *(undefined2 *)(&DAT_10042b22 + iVar2 * 8) = 0;
      }
      iVar2 = CONCAT22((short)((uint)iVar2 >> 0x10),1);
    }
  }
  return iVar2;
}



/* ================================================================
 * Function: pv_clear_linked_himg_entries
 * Address:  1001d6d6
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* __stdcall pv_clear_linked_himg_entries,4 */

undefined4 pv_clear_linked_himg_entries(short param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 local_c;
  
                    /* 0x1d6d6  482  _pv_clear_linked_himg_entries@4 */
  uVar1 = pv_is_hbuf_inrange(param_1);
  if ((uVar1 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = pv_is_hbuf_valid(param_1);
    uVar1 = uVar1 & 0xffff;
    if (uVar1 == 0) {
      uVar2 = 0;
    }
    else {
      for (local_c = 1; local_c < 0x101; local_c = local_c + 1) {
        uVar1 = pv_get_himg_bufhandle((short)local_c);
        if ((short)uVar1 == param_1) {
          _DAT_10042b24 = 0;
          _DAT_10042b22 = 0;
          _DAT_10042b20 = 0;
          uVar1 = 0;
          _DAT_10042b26 = 0;
        }
      }
      uVar2 = CONCAT22((short)(uVar1 >> 0x10),1);
    }
  }
  return uVar2;
}



/* ================================================================
 * Function: pv_get_himg_bufhandle
 * Address:  1001d789
 * ================================================================ */

/* __stdcall pv_get_himg_bufhandle,4 */

undefined4 pv_get_himg_bufhandle(short param_1)

{
                    /* 0x1d789  501  _pv_get_himg_bufhandle@4 */
  return CONCAT22(param_1 >> 0xf,*(undefined2 *)(&DAT_10042b24 + param_1 * 8));
}



/* ================================================================
 * Function: pv_get_himg_expnum
 * Address:  1001d79c
 * ================================================================ */

/* __stdcall pv_get_himg_expnum,4 */

undefined4 pv_get_himg_expnum(short param_1)

{
                    /* 0x1d79c  502  _pv_get_himg_expnum@4 */
  return CONCAT22(param_1 >> 0xf,*(undefined2 *)(&DAT_10042b20 + param_1 * 8));
}



/* ================================================================
 * Function: pv_get_himg_imgnum
 * Address:  1001d7af
 * ================================================================ */

/* __stdcall pv_get_himg_imgnum,4 */

undefined4 pv_get_himg_imgnum(short param_1)

{
                    /* 0x1d7af  503  _pv_get_himg_imgnum@4 */
  return CONCAT22(param_1 >> 0xf,*(undefined2 *)(&DAT_10042b22 + param_1 * 8));
}



/* ================================================================
 * Function: pv_get_himg_usecnt
 * Address:  1001d7c2
 * ================================================================ */

/* __stdcall pv_get_himg_usecnt,4 */

undefined4 pv_get_himg_usecnt(short param_1)

{
                    /* 0x1d7c2  504  _pv_get_himg_usecnt@4 */
  return CONCAT22(param_1 >> 0xf,*(undefined2 *)(&DAT_10042b26 + param_1 * 8));
}



/* ================================================================
 * Function: pv_buf_clean_and_free
 * Address:  1001d7e0
 * ================================================================ */

/* __stdcall pv_buf_clean_and_free,4 */

void pv_buf_clean_and_free(void *param_1)

{
  undefined2 uVar1;
  
                    /* 0x1d7e0  445  _pv_buf_clean_and_free@4 */
  uVar1 = pl_error_code();
  pv_buf_free(param_1);
  pv_set_error_code(uVar1);
  return;
}



/* ================================================================
 * Function: pv_buf_alloc
 * Address:  1001d80d
 * ================================================================ */

/* __stdcall pv_buf_alloc,20 */

uint pv_buf_alloc(int *param_1,short param_2,undefined2 param_3,short param_4,int param_5)

{
  ushort extraout_var;
  ushort extraout_var_00;
  void *pvVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_10;
  short local_c [2];
  undefined2 local_8;
  undefined2 uStack_6;
  
                    /* 0x1d80d  442  _pv_buf_alloc@20 */
  pv_set_error_code(0);
  if (param_2 < 1) {
    pv_set_error_code(0x714b);
    uVar2 = (uint)extraout_var << 0x10;
  }
  else if (param_4 < 1) {
    pv_set_error_code(0x714c);
    uVar2 = (uint)extraout_var_00 << 0x10;
  }
  else {
    pvVar1 = pv_malloc(0x10,0);
    *param_1 = (int)pvVar1;
    if (*param_1 == 0) {
      uVar2 = (uint)param_1 & 0xffff0000;
    }
    else {
      *(undefined2 *)*param_1 = param_3;
      *(short *)(*param_1 + 2) = param_4;
      *(short *)(*param_1 + 4) = param_2;
      *(undefined4 *)(*param_1 + 8) = 0;
      *(undefined4 *)(*param_1 + 0xc) = 0;
      pvVar1 = pv_malloc(param_4 * 0xc,0);
      if (pvVar1 == (void *)0x0) {
        uVar2 = pv_buf_clean_and_free((void *)*param_1);
        *param_1 = 0;
        uVar2 = uVar2 & 0xffff0000;
      }
      else {
        for (local_10 = 0; local_10 < param_4; local_10 = local_10 + 1) {
          puVar3 = (undefined4 *)(param_5 + local_10 * 0xc);
          puVar4 = (undefined4 *)((int)pvVar1 + local_10 * 0xc);
          *puVar4 = *puVar3;
          puVar4[1] = puVar3[1];
          puVar4[2] = puVar3[2];
          if (((((0x2000 < *(ushort *)((int)pvVar1 + local_10 * 0xc)) ||
                (0x2000 < *(ushort *)((int)pvVar1 + local_10 * 0xc + 2))) ||
               (0x2000 < *(ushort *)((int)pvVar1 + local_10 * 0xc + 4))) ||
              ((0x2000 < *(ushort *)((int)pvVar1 + local_10 * 0xc + 6) ||
               (0x2000 < *(ushort *)((int)pvVar1 + local_10 * 0xc + 8))))) ||
             (0x2000 < *(ushort *)((int)pvVar1 + local_10 * 0xc + 10))) {
            pv_set_error_code(0x714d);
            pv_buf_clean_and_free((void *)*param_1);
            *param_1 = 0;
            return (uint)param_1 & 0xffff0000;
          }
          if (((*(short *)((int)pvVar1 + local_10 * 0xc) == 0) ||
              (*(short *)((int)pvVar1 + local_10 * 0xc + 2) == 0)) ||
             ((*(short *)((int)pvVar1 + local_10 * 0xc + 4) == 0 ||
              (*(short *)((int)pvVar1 + local_10 * 0xc + 6) == 0)))) {
            pv_set_error_code(0x714e);
            pv_buf_clean_and_free((void *)*param_1);
            *param_1 = 0;
            return (uint)param_1 & 0xffff0000;
          }
        }
        *(void **)(*param_1 + 8) = pvVar1;
        pv_buf_gen_exp_id(param_3,param_4,(int)pvVar1,local_c);
        *(short *)(*param_1 + 6) = local_c[0];
        pvVar1 = pv_malloc((int)param_2 << 2,0);
        *(void **)(*param_1 + 0xc) = pvVar1;
        if (*(int *)(*param_1 + 0xc) == 0) {
          uVar2 = pv_buf_clean_and_free((void *)*param_1);
          *param_1 = 0;
          uVar2 = uVar2 & 0xffff0000;
        }
        else {
          for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
            *(undefined4 *)(*(int *)(*param_1 + 0xc) + local_10 * 4) = 0;
          }
          for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
            uVar2 = pv_buf_alloc_exp((undefined2 *)*param_1,
                                     (int *)(*(int *)(*param_1 + 0xc) + local_10 * 4));
            _local_8 = CONCAT22(uStack_6,(short)uVar2);
            if ((uVar2 & 0xffff) == 0) {
              uVar2 = pv_buf_clean_and_free((void *)*param_1);
              *param_1 = 0;
              return uVar2 & 0xffff0000;
            }
          }
          uVar2 = CONCAT22(param_2 >> 0xf,1);
        }
      }
    }
  }
  return uVar2;
}



/* ================================================================
 * Function: pv_buf_alloc_img
 * Address:  1001db55
 * ================================================================ */

/* __stdcall pv_buf_alloc_img,20 */

int pv_buf_alloc_img(int *param_1,undefined2 param_2,uint param_3)

{
  ushort extraout_var;
  ushort extraout_var_00;
  int iVar1;
  void *pvVar2;
  ushort uVar3;
  size_t sVar4;
  short local_c;
  
                    /* 0x1db55  444  _pv_buf_alloc_img@20 */
  pv_set_error_code(0);
  switch(param_2) {
  case 0:
    local_c = 1;
    break;
  case 1:
    local_c = 1;
    break;
  case 2:
    local_c = 2;
    break;
  case 3:
    local_c = 2;
    break;
  case 4:
    local_c = 4;
    break;
  case 5:
    local_c = 4;
    break;
  default:
    pv_set_error_code(0x7149);
    return (uint)extraout_var << 0x10;
  }
  sVar4 = (param_3 & 0xffff) * (param_3 >> 0x10) * (int)local_c;
  if (sVar4 == 0) {
    pv_set_error_code(0x714e);
    iVar1 = (uint)extraout_var_00 << 0x10;
  }
  else {
    pvVar2 = pv_malloc(sVar4,1);
    *param_1 = (int)pvVar2;
    uVar3 = (ushort)((uint)pvVar2 >> 0x10);
    if (*param_1 == 0) {
      iVar1 = (uint)uVar3 << 0x10;
    }
    else {
      iVar1 = CONCAT22(uVar3,1);
    }
  }
  return iVar1;
}



/* ================================================================
 * Function: pv_exp_clean_and_free
 * Address:  1001dc2a
 * ================================================================ */

/* __stdcall pv_exp_clean_and_free,8 */

void pv_exp_clean_and_free(int param_1,int *param_2)

{
  undefined2 uVar1;
  
                    /* 0x1dc2a  486  _pv_exp_clean_and_free@8 */
  uVar1 = pl_error_code();
  pv_buf_free_exp(param_1,param_2);
  pv_set_error_code(uVar1);
  return;
}



/* ================================================================
 * Function: pv_buf_alloc_exp
 * Address:  1001dc5b
 * ================================================================ */

/* __stdcall pv_buf_alloc_exp,8 */

uint pv_buf_alloc_exp(undefined2 *param_1,int *param_2)

{
  short sVar1;
  ushort extraout_var;
  ushort extraout_var_00;
  void *pvVar2;
  uint uVar3;
  int local_14;
  int local_c;
  undefined2 local_8;
  undefined2 uStack_6;
  
                    /* 0x1dc5b  443  _pv_buf_alloc_exp@8 */
  pv_set_error_code(0);
  if ((short)param_1[2] < 1) {
    pv_set_error_code(0x714b);
    uVar3 = (uint)extraout_var << 0x10;
  }
  else {
    sVar1 = param_1[1];
    if (sVar1 < 1) {
      pv_set_error_code(0x714c);
      uVar3 = (uint)extraout_var_00 << 0x10;
    }
    else {
      pvVar2 = pv_malloc(0x14,0);
      *param_2 = (int)pvVar2;
      if (*param_2 == 0) {
        uVar3 = (uint)param_2 & 0xffff0000;
      }
      else {
        *(undefined2 *)(*param_2 + 4) = 0;
        *(undefined1 *)(*param_2 + 6) = 0;
        *(undefined1 *)(*param_2 + 7) = 0;
        *(undefined1 *)(*param_2 + 8) = 0;
        *(undefined1 *)(*param_2 + 9) = 0;
        *(undefined1 *)(*param_2 + 10) = 0;
        *(undefined2 *)(*param_2 + 0xc) = 0;
        *(undefined4 *)(*param_2 + 0x10) = 0;
        *(undefined4 *)*param_2 = 0;
        pvVar2 = pv_malloc((int)sVar1 << 3,0);
        if (pvVar2 == (void *)0x0) {
          uVar3 = pv_exp_clean_and_free((int)param_1,(int *)*param_2);
          uVar3 = uVar3 & 0xffff0000;
        }
        else {
          for (local_14 = 0; local_14 < sVar1; local_14 = local_14 + 1) {
            *(uint *)((int)pvVar2 + local_14 * 8 + 4) =
                 *(uint *)((int)pvVar2 + local_14 * 8 + 4) & 0xfffffffe;
            *(uint *)((int)pvVar2 + local_14 * 8 + 4) =
                 *(uint *)((int)pvVar2 + local_14 * 8 + 4) & 0xfffffffd;
            *(uint *)((int)pvVar2 + local_14 * 8 + 4) =
                 *(uint *)((int)pvVar2 + local_14 * 8 + 4) & 0xfffffffb;
            *(uint *)((int)pvVar2 + local_14 * 8 + 4) =
                 *(uint *)((int)pvVar2 + local_14 * 8 + 4) & 0xfffffff7;
            *(uint *)((int)pvVar2 + local_14 * 8 + 4) =
                 *(uint *)((int)pvVar2 + local_14 * 8 + 4) & 0xffff000f;
            local_c = 0;
            uVar3 = pv_buf_alloc_img(&local_c,*param_1,
                                     *(uint *)(*(int *)(param_1 + 4) + local_14 * 0xc));
            _local_8 = CONCAT22(uStack_6,(short)uVar3);
            if ((uVar3 & 0xffff) == 0) {
              uVar3 = pv_exp_clean_and_free((int)param_1,(int *)*param_2);
              return uVar3 & 0xffff0000;
            }
            *(int *)((int)pvVar2 + local_14 * 8) = local_c;
          }
          *(void **)*param_2 = pvVar2;
          uVar3 = CONCAT22((short)((uint)pvVar2 >> 0x10),1);
        }
      }
    }
  }
  return uVar3;
}



/* ================================================================
 * Function: pv_buf_copy_img
 * Address:  1001de6f
 * ================================================================ */

/* __stdcall pv_buf_copy_img,24 */

bool pv_buf_copy_img(void *param_1,void *param_2,undefined2 param_3,uint param_4)

{
  size_t _Size;
  short local_c;
  
                    /* 0x1de6f  447  _pv_buf_copy_img@24 */
  pv_set_error_code(0);
  switch(param_3) {
  case 0:
    local_c = 1;
    break;
  case 1:
    local_c = 1;
    break;
  case 2:
    local_c = 2;
    break;
  case 3:
    local_c = 2;
    break;
  case 4:
    local_c = 4;
    break;
  case 5:
    local_c = 4;
    break;
  default:
    pv_set_error_code(0x7149);
    return false;
  }
  _Size = (param_4 & 0xffff) * (param_4 >> 0x10) * (int)local_c;
  if (_Size != 0) {
    memcpy(param_1,param_2,_Size);
  }
  else {
    pv_set_error_code(0x714e);
  }
  return _Size != 0;
}



/* ================================================================
 * Function: pv_buf_copy_exp
 * Address:  1001df3b
 * ================================================================ */

/* __stdcall pv_buf_copy_exp,16 */

int pv_buf_copy_exp(short *param_1,short param_2,short *param_3,short param_4)

{
  short sVar1;
  bool bVar2;
  ushort extraout_var_00;
  ushort extraout_var_01;
  ushort extraout_var_02;
  ushort extraout_var_03;
  ushort extraout_var_04;
  int iVar3;
  undefined3 extraout_var;
  int local_c;
  
                    /* 0x1df3b  446  _pv_buf_copy_exp@16 */
  pv_set_error_code(0);
  if ((param_1[2] < 1) || (param_3[2] < 1)) {
    pv_set_error_code(0x714b);
    iVar3 = (uint)extraout_var_00 << 0x10;
  }
  else if (*param_1 == *param_3) {
    sVar1 = param_1[1];
    if (sVar1 == param_3[1]) {
      if (sVar1 < 1) {
        pv_set_error_code(0x714c);
        iVar3 = (uint)extraout_var_03 << 0x10;
      }
      else {
        for (local_c = 0; local_c < sVar1; local_c = local_c + 1) {
          if ((*(short *)(*(int *)(param_1 + 4) + local_c * 0xc) !=
               *(short *)(*(int *)(param_3 + 4) + local_c * 0xc)) ||
             (*(short *)(*(int *)(param_1 + 4) + 2 + local_c * 0xc) !=
              *(short *)(*(int *)(param_3 + 4) + 2 + local_c * 0xc))) {
            pv_set_error_code(0x714f);
            return (uint)extraout_var_04 << 0x10;
          }
        }
        *(undefined2 *)(*(int *)(*(int *)(param_1 + 6) + param_2 * 4) + 4) =
             *(undefined2 *)(*(int *)(*(int *)(param_3 + 6) + param_4 * 4) + 4);
        *(undefined1 *)(*(int *)(*(int *)(param_1 + 6) + param_2 * 4) + 6) =
             *(undefined1 *)(*(int *)(*(int *)(param_3 + 6) + param_4 * 4) + 6);
        *(undefined1 *)(*(int *)(*(int *)(param_1 + 6) + param_2 * 4) + 7) =
             *(undefined1 *)(*(int *)(*(int *)(param_3 + 6) + param_4 * 4) + 7);
        *(undefined1 *)(*(int *)(*(int *)(param_1 + 6) + param_2 * 4) + 8) =
             *(undefined1 *)(*(int *)(*(int *)(param_3 + 6) + param_4 * 4) + 8);
        *(undefined1 *)(*(int *)(*(int *)(param_1 + 6) + param_2 * 4) + 9) =
             *(undefined1 *)(*(int *)(*(int *)(param_3 + 6) + param_4 * 4) + 9);
        *(undefined1 *)(*(int *)(*(int *)(param_1 + 6) + param_2 * 4) + 10) =
             *(undefined1 *)(*(int *)(*(int *)(param_3 + 6) + param_4 * 4) + 10);
        *(undefined2 *)(*(int *)(*(int *)(param_1 + 6) + param_2 * 4) + 0xc) =
             *(undefined2 *)(*(int *)(*(int *)(param_3 + 6) + param_4 * 4) + 0xc);
        iVar3 = *(int *)(*(int *)(param_3 + 6) + param_4 * 4);
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 6) + param_2 * 4) + 0x10) =
             *(undefined4 *)(iVar3 + 0x10);
        local_c = 0;
        while (local_c < sVar1) {
          *(uint *)(**(int **)(*(int *)(param_1 + 6) + param_2 * 4) + 4 + local_c * 8) =
               *(uint *)(**(int **)(*(int *)(param_1 + 6) + param_2 * 4) + 4 + local_c * 8) &
               0xfffffffe |
               *(uint *)(**(int **)(*(int *)(param_3 + 6) + param_4 * 4) + 4 + local_c * 8) & 1;
          *(uint *)(**(int **)(*(int *)(param_1 + 6) + param_2 * 4) + 4 + local_c * 8) =
               *(uint *)(**(int **)(*(int *)(param_1 + 6) + param_2 * 4) + 4 + local_c * 8) &
               0xfffffffd |
               (*(uint *)(**(int **)(*(int *)(param_3 + 6) + param_4 * 4) + 4 + local_c * 8) >> 1 &
               1) << 1;
          *(uint *)(**(int **)(*(int *)(param_1 + 6) + param_2 * 4) + 4 + local_c * 8) =
               *(uint *)(**(int **)(*(int *)(param_1 + 6) + param_2 * 4) + 4 + local_c * 8) &
               0xfffffffb |
               (*(uint *)(**(int **)(*(int *)(param_3 + 6) + param_4 * 4) + 4 + local_c * 8) >> 2 &
               1) << 2;
          *(uint *)(**(int **)(*(int *)(param_1 + 6) + param_2 * 4) + 4 + local_c * 8) =
               *(uint *)(**(int **)(*(int *)(param_1 + 6) + param_2 * 4) + 4 + local_c * 8) &
               0xfffffff7 |
               (*(uint *)(**(int **)(*(int *)(param_3 + 6) + param_4 * 4) + 4 + local_c * 8) >> 3 &
               1) << 3;
          *(uint *)(**(int **)(*(int *)(param_1 + 6) + param_2 * 4) + 4 + local_c * 8) =
               *(uint *)(**(int **)(*(int *)(param_1 + 6) + param_2 * 4) + 4 + local_c * 8) &
               0xffff000f |
               (*(uint *)(**(int **)(*(int *)(param_3 + 6) + param_4 * 4) + 4 + local_c * 8) >> 4 &
               0xfff) << 4;
          bVar2 = pv_buf_copy_img(*(void **)(**(int **)(*(int *)(param_1 + 6) + param_2 * 4) +
                                            local_c * 8),
                                  *(void **)(**(int **)(*(int *)(param_3 + 6) + param_4 * 4) +
                                            local_c * 8),*param_1,
                                  *(uint *)(*(int *)(param_1 + 4) + local_c * 0xc));
          if ((CONCAT31(extraout_var,bVar2) & 0xffff) == 0) {
            return (uint)(ushort)((uint3)extraout_var >> 8) << 0x10;
          }
          iVar3 = local_c + 1;
          local_c = iVar3;
        }
        iVar3 = CONCAT22((short)((uint)iVar3 >> 0x10),1);
      }
    }
    else {
      pv_set_error_code(0x7150);
      iVar3 = (uint)extraout_var_02 << 0x10;
    }
  }
  else {
    pv_set_error_code(0x714a);
    iVar3 = (uint)extraout_var_01 << 0x10;
  }
  return iVar3;
}



/* ================================================================
 * Function: pv_buf_free
 * Address:  1001e39e
 * ================================================================ */

/* __stdcall pv_buf_free,4 */

int pv_buf_free(void *param_1)

{
  uint uVar1;
  ushort extraout_var;
  int iVar2;
  undefined4 local_10;
  undefined2 local_c;
  
                    /* 0x1e39e  448  _pv_buf_free@4 */
  local_c = 0;
  if (*(int *)((int)param_1 + 0xc) != 0) {
    for (local_10 = 0; local_10 < *(short *)((int)param_1 + 4); local_10 = local_10 + 1) {
      uVar1 = pv_buf_free_exp((int)param_1,*(int **)(*(int *)((int)param_1 + 0xc) + local_10 * 4));
      *(undefined4 *)(*(int *)((int)param_1 + 0xc) + local_10 * 4) = 0;
      if (((uVar1 & 0xffff) == 0) && (local_c == 0)) {
        local_c = pl_error_code();
      }
    }
  }
  pv_free(*(void **)((int)param_1 + 0xc),0);
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  pv_free(*(void **)((int)param_1 + 8),0);
  *(undefined4 *)((int)param_1 + 8) = 0;
  pv_free(param_1,0);
  pv_set_error_code(local_c);
  if (local_c == 0) {
    iVar2 = CONCAT22(extraout_var,1);
  }
  else {
    iVar2 = (uint)extraout_var << 0x10;
  }
  return iVar2;
}



/* ================================================================
 * Function: pv_buf_free_img
 * Address:  1001e47d
 * ================================================================ */

/* __stdcall pv_buf_free_img,4 */

bool pv_buf_free_img(undefined4 *param_1)

{
  uint uVar1;
  bool bVar2;
  
                    /* 0x1e47d  450  _pv_buf_free_img@4 */
  pv_set_error_code(0);
  uVar1 = pv_free((void *)*param_1,1);
  bVar2 = (uVar1 & 0xffff) != 0;
  if (bVar2) {
    *param_1 = 0;
  }
  return bVar2;
}



/* ================================================================
 * Function: pv_buf_free_exp
 * Address:  1001e4b3
 * ================================================================ */

/* __stdcall pv_buf_free_exp,8 */

int pv_buf_free_exp(int param_1,int *param_2)

{
  short sVar1;
  bool bVar2;
  undefined3 extraout_var;
  ushort extraout_var_00;
  int iVar3;
  undefined4 local_14;
  undefined2 local_c;
  
                    /* 0x1e4b3  449  _pv_buf_free_exp@8 */
  local_c = 0;
  sVar1 = *(short *)(param_1 + 2);
  if (*param_2 != 0) {
    for (local_14 = 0; local_14 < sVar1; local_14 = local_14 + 1) {
      bVar2 = pv_buf_free_img((undefined4 *)(*param_2 + local_14 * 8));
      if (((CONCAT31(extraout_var,bVar2) & 0xffff) == 0) && (local_c == 0)) {
        local_c = pl_error_code();
      }
    }
  }
  pv_free((void *)*param_2,0);
  *param_2 = 0;
  pv_free(param_2,0);
  pv_set_error_code(local_c);
  if (local_c == 0) {
    iVar3 = CONCAT22(extraout_var_00,1);
  }
  else {
    iVar3 = (uint)extraout_var_00 << 0x10;
  }
  return iVar3;
}



/* ================================================================
 * Function: pv_calc_crt
 * Address:  1001e571
 * ================================================================ */

/* __stdcall pv_calc_crt,8 */

undefined4 pv_calc_crt(byte *param_1,short param_2)

{
  int local_c;
  ushort local_8;
  
                    /* 0x1e571  456  _pv_calc_crt@8 */
  local_8 = 0;
  for (; 0 < param_2; param_2 = param_2 + -1) {
    local_8 = local_8 ^ (ushort)*param_1 << 8;
    for (local_c = 0; local_c < 8; local_c = local_c + 1) {
      if (((int)(short)local_8 & 0x8000U) == 0) {
        local_8 = local_8 << 1;
      }
      else {
        local_8 = local_8 << 1 ^ 0x1021;
      }
    }
    param_1 = param_1 + 1;
  }
  return CONCAT22(param_2 >> 0xf,local_8);
}



/* ================================================================
 * Function: pv_buf_gen_exp_id
 * Address:  1001e5fe
 * ================================================================ */

/* __stdcall pv_buf_gen_exp_id,16 */

undefined4 pv_buf_gen_exp_id(undefined2 param_1,short param_2,int param_3,short *param_4)

{
  short sVar1;
  byte *pbVar2;
  undefined4 uVar3;
  uint uVar4;
  short local_14;
  short local_c;
  
                    /* 0x1e5fe  451  _pv_buf_gen_exp_id@16 */
  pv_set_error_code(0);
  local_14 = param_2 * 0xc + 2;
  uVar4 = (int)local_14 & 0x8000007f;
  if ((int)uVar4 < 0) {
    uVar4 = (uVar4 - 1 | 0xffffff80) + 1;
  }
  if ((short)uVar4 != 0) {
    local_14 = (param_2 * 0xc + 0x82) - (short)uVar4;
  }
  pbVar2 = pv_malloc((int)local_14,0);
  if (pbVar2 == (byte *)0x0) {
    uVar3 = 0;
  }
  else {
    for (local_c = 0; local_c < local_14; local_c = local_c + 1) {
      pbVar2[local_c] = 0;
    }
    *(undefined2 *)pbVar2 = param_1;
    for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
      *(undefined2 *)(pbVar2 + local_c * 0xc + 2) = *(undefined2 *)(param_3 + local_c * 0xc);
      *(undefined2 *)(pbVar2 + local_c * 0xc + 4) = *(undefined2 *)(param_3 + 2 + local_c * 0xc);
      *(undefined2 *)(pbVar2 + local_c * 0xc + 6) = *(undefined2 *)(param_3 + 4 + local_c * 0xc);
      *(undefined2 *)(pbVar2 + local_c * 0xc + 8) = *(undefined2 *)(param_3 + 6 + local_c * 0xc);
      *(undefined2 *)(pbVar2 + local_c * 0xc + 10) = *(undefined2 *)(param_3 + 8 + local_c * 0xc);
      *(undefined2 *)(pbVar2 + local_c * 0xc + 0xc) = *(undefined2 *)(param_3 + 10 + local_c * 0xc);
    }
    uVar3 = pv_calc_crt(pbVar2,local_14);
    *param_4 = (short)uVar3;
    sVar1 = *param_4;
    if (sVar1 == 0) {
      *param_4 = 1;
    }
    uVar3 = CONCAT22(sVar1 >> 0xf,1);
  }
  return uVar3;
}



/* ================================================================
 * Function: pv_init_img_buf_c29
 * Address:  1001e7b1
 * ================================================================ */

/* __stdcall pv_init_img_buf_c29,0 */

undefined2 pv_init_img_buf_c29(void)

{
                    /* 0x1e7b1  512  _pv_init_img_buf_c29@0 */
  return 1;
}



/* ================================================================
 * Function: pv_uninit_img_buf_c29
 * Address:  1001e7ba
 * ================================================================ */

/* __stdcall pv_uninit_img_buf_c29,0 */

undefined2 pv_uninit_img_buf_c29(void)

{
                    /* 0x1e7ba  534  _pv_uninit_img_buf_c29@0 */
  return 1;
}



/* ================================================================
 * Function: pv_buf_realloc_clean_and_free
 * Address:  1001e7c3
 * ================================================================ */

/* __stdcall pv_buf_realloc_clean_and_free,16 */

void pv_buf_realloc_clean_and_free(int param_1,void *param_2,short param_3,short param_4)

{
  undefined2 uVar1;
  undefined4 local_c;
  
                    /* 0x1e7c3  455  _pv_buf_realloc_clean_and_free@16 */
  uVar1 = pl_error_code();
  for (local_c = (int)param_3; local_c < param_4; local_c = local_c + 1) {
    pv_buf_free_exp(param_1,*(int **)((int)param_2 + local_c * 4));
    *(undefined4 *)((int)param_2 + local_c * 4) = 0;
  }
  pv_free(param_2,0);
  pv_set_error_code(uVar1);
  return;
}



/* ================================================================
 * Function: pv_buf_realloc
 * Address:  1001e831
 * ================================================================ */

/* __stdcall pv_buf_realloc,8 */

int pv_buf_realloc(undefined2 *param_1,short param_2)

{
  short sVar1;
  void *pvVar2;
  int iVar3;
  ushort extraout_var;
  void *pvVar4;
  uint uVar5;
  ushort extraout_var_00;
  int local_18;
  short local_8;
  
                    /* 0x1e831  454  _pv_buf_realloc@8 */
  pv_set_error_code(0);
  local_8 = 0;
  if (param_2 == param_1[2]) {
    iVar3 = CONCAT22((short)param_1[2] >> 0xf,1);
  }
  else if (param_2 < 1) {
    pv_set_error_code(0x714b);
    iVar3 = (uint)extraout_var << 0x10;
  }
  else {
    pvVar2 = *(void **)(param_1 + 6);
    pvVar4 = pv_malloc((int)param_2 << 2,0);
    if (pvVar4 == (void *)0x0) {
      iVar3 = 0;
    }
    else {
      for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
        *(undefined4 *)((int)pvVar4 + local_18 * 4) = 0;
      }
      sVar1 = param_1[2];
      if (param_2 < sVar1) {
        for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
          *(undefined4 *)((int)pvVar4 + local_18 * 4) = *(undefined4 *)((int)pvVar2 + local_18 * 4);
        }
        for (local_18 = (int)param_2; local_18 < sVar1; local_18 = local_18 + 1) {
          uVar5 = pv_buf_free_exp((int)param_1,*(int **)((int)pvVar2 + local_18 * 4));
          *(undefined4 *)((int)pvVar2 + local_18 * 4) = 0;
          if (((uVar5 & 0xffff) == 0) && (local_8 == 0)) {
            local_8 = pl_error_code();
          }
        }
      }
      else {
        for (local_18 = 0; local_18 < sVar1; local_18 = local_18 + 1) {
          *(undefined4 *)((int)pvVar4 + local_18 * 4) = *(undefined4 *)((int)pvVar2 + local_18 * 4);
        }
        for (local_18 = (int)sVar1; local_18 < param_2; local_18 = local_18 + 1) {
          uVar5 = pv_buf_alloc_exp(param_1,(int *)((int)pvVar4 + local_18 * 4));
          if ((uVar5 & 0xffff) == 0) {
            uVar5 = pv_buf_realloc_clean_and_free((int)param_1,pvVar4,sVar1,param_2);
            return uVar5 & 0xffff0000;
          }
        }
      }
      uVar5 = pv_free(pvVar2,0);
      if (((uVar5 & 0xffff) == 0) && (local_8 == 0)) {
        local_8 = pl_error_code();
      }
      *(void **)(param_1 + 6) = pvVar4;
      param_1[2] = param_2;
      if (local_8 != 0) {
        pv_set_error_code(local_8);
        param_1 = (undefined2 *)((uint)extraout_var_00 << 0x10);
      }
      iVar3 = CONCAT22((short)((uint)param_1 >> 0x10),1);
    }
  }
  return iVar3;
}



/* ================================================================
 * Function: pv_buf_get_size
 * Address:  1001ea71
 * ================================================================ */

/* __stdcall pv_buf_get_size,8 */

undefined4 pv_buf_get_size(undefined2 *param_1,int *param_2)

{
  short sVar1;
  short sVar2;
  bool bVar3;
  uint *puVar4;
  undefined3 extraout_var;
  int local_18;
  int local_14;
  int local_c;
  int local_8;
  
                    /* 0x1ea71  452  _pv_buf_get_size@8 */
  pv_set_error_code(0);
  sVar1 = param_1[2];
  sVar2 = param_1[1];
  local_8 = sVar2 * 0xc + 0x10 + sVar1 * 4;
  local_14 = 0;
  do {
    if (sVar1 <= local_14) {
      *param_2 = local_8;
      return CONCAT22((short)((uint)local_8 >> 0x10),1);
    }
    local_8 = local_8 + 0x14 + sVar2 * 8;
    for (local_18 = 0; local_18 < sVar2; local_18 = local_18 + 1) {
      puVar4 = (uint *)(*(int *)(param_1 + 4) + local_18 * 0xc);
      bVar3 = pv_buf_get_size_img(*param_1,*puVar4,puVar4[1],puVar4[2],&local_c);
      if ((CONCAT31(extraout_var,bVar3) & 0xffff) == 0) {
        return 0;
      }
      local_8 = local_8 + local_c;
    }
    local_14 = local_14 + 1;
  } while( true );
}



/* ================================================================
 * Function: pv_buf_get_size_img
 * Address:  1001eb73
 * ================================================================ */

/* __stdcall pv_buf_get_size_img,20 */

bool pv_buf_get_size_img(undefined2 param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                        int *param_5)

{
  int iVar1;
  short local_8;
  
                    /* 0x1eb73  453  _pv_buf_get_size_img@20 */
  pv_set_error_code(0);
  switch(param_1) {
  case 0:
    local_8 = 1;
    break;
  case 1:
    local_8 = 1;
    break;
  case 2:
    local_8 = 2;
    break;
  case 3:
    local_8 = 2;
    break;
  case 4:
    local_8 = 4;
    break;
  case 5:
    local_8 = 4;
    break;
  default:
    pv_set_error_code(0x7149);
    return false;
  }
  *param_5 = (param_2 & 0xffff) * (param_2 >> 0x10) * (int)local_8;
  iVar1 = *param_5;
  if (iVar1 == 0) {
    pv_set_error_code(0x714e);
  }
  return iVar1 != 0;
}



/* ================================================================
 * Function: pi_decode_pixel_stream
 * Address:  1001ec30
 * ================================================================ */

/* __stdcall pi_decode_pixel_stream,24 */

undefined4
pi_decode_pixel_stream
          (short param_1,int param_2,undefined4 param_3,undefined4 param_4,ushort param_5,
          void *param_6)

{
  int iVar1;
  ushort uVar2;
  ushort extraout_var;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined2 *local_38;
  uint local_2c;
  uint local_28;
  int local_20;
  int local_1c;
  undefined2 *local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
                    /* 0x1ec30  206  _pi_decode_pixel_stream@24 */
  iVar1 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
  if (iVar1 != 0) {
    for (uVar2 = 0; uVar2 < param_5; uVar2 = uVar2 + 1) {
      local_18 = *(undefined2 **)((int)param_6 + (uint)uVar2 * 4);
      (**(code **)(iVar1 + 0x2a0))(iVar1,&local_14,&local_1c,&local_20,uVar2 + 1);
      if ((local_1c == 0) || (local_20 == 0)) {
        pv_set_error_code(0x7d08);
        return (uint)extraout_var << 0x10;
      }
      iVar3 = (**(code **)(iVar1 + 0x21c))(iVar1);
      (**(code **)(iVar1 + 0x220))(iVar1);
      uVar4 = ((local_8 - local_10) + 1) / local_1c;
      local_38 = (undefined2 *)(param_2 + (local_10 + -1 + (local_14 + -1) * iVar3) * 2);
      for (local_28 = 0; local_28 < (uint)(((local_c - local_14) + 1) / local_20);
          local_28 = local_28 + 1) {
        for (local_2c = 0; local_2c < uVar4; local_2c = local_2c + 1) {
          *local_18 = *local_38;
          local_18 = local_18 + 1;
          local_38 = local_38 + 1;
        }
        local_38 = local_38 + (iVar3 - uVar4);
      }
    }
  }
  uVar5 = pv_free(param_6,0);
  return CONCAT22((short)((uint)uVar5 >> 0x10),1);
}



/* ================================================================
 * Function: pm_decode_pixel_stream
 * Address:  1001edc0
 * ================================================================ */

/* __stdcall pm_decode_pixel_stream,12 */

int pm_decode_pixel_stream(short param_1,undefined2 *param_2,int param_3)

{
  ushort uVar1;
  ushort extraout_var;
  int iVar2;
  ushort *puVar3;
  ushort uVar4;
  undefined2 *local_1c;
  short local_18;
  ushort *local_c;
  undefined2 *local_8;
  
                    /* 0x1edc0  320  _pm_decode_pixel_stream@12 */
  local_1c = param_2;
  if (DAT_10042750 == 0) {
    pv_set_error_code(0x7d0a);
    iVar2 = (uint)extraout_var << 0x10;
  }
  else {
    puVar3 = *(ushort **)(DAT_10042750 + 0x18 + param_1 * 0x20);
    for (local_c = puVar3; local_c != (ushort *)0x0; local_c = *(ushort **)(local_c + 4)) {
      for (uVar1 = 0; puVar3 = (ushort *)(uint)*local_c, (ushort *)(uint)uVar1 < puVar3;
          uVar1 = uVar1 + 1) {
        for (uVar4 = 0; uVar4 < local_c[1]; uVar4 = uVar4 + 1) {
          local_8 = *(undefined2 **)
                     (param_3 + (uint)*(ushort *)(*(int *)(local_c + 2) + (uint)uVar4 * 4) * 4);
          for (local_18 = *(short *)(*(int *)(local_c + 2) + 2 + (uint)uVar4 * 4); 0 < local_18;
              local_18 = local_18 + -1) {
            *local_8 = *local_1c;
            local_8 = local_8 + 1;
            local_1c = local_1c + 1;
          }
          *(undefined2 **)(param_3 + (uint)*(ushort *)(*(int *)(local_c + 2) + (uint)uVar4 * 4) * 4)
               = local_8;
        }
      }
    }
    iVar2 = CONCAT22((short)((uint)puVar3 >> 0x10),1);
  }
  return iVar2;
}



/* ================================================================
 * Function: pv_decode_pixel_stream
 * Address:  1001ef10
 * ================================================================ */

/* __stdcall pv_decode_pixel_stream,16 */

undefined2 pv_decode_pixel_stream(short param_1,undefined2 *param_2,short param_3,short param_4)

{
  short sVar1;
  bool bVar2;
  ushort uVar3;
  uint uVar4;
  undefined3 extraout_var;
  undefined4 uVar5;
  byte local_3c [4];
  void *local_38;
  undefined4 local_34;
  undefined2 local_30;
  undefined2 local_2c;
  byte local_28 [4];
  uint local_24;
  short local_20 [2];
  byte local_1c [4];
  short local_18 [2];
  byte local_14 [4];
  int local_10;
  ushort local_c [2];
  byte local_8 [4];
  
                    /* 0x1ef10  483  _pv_decode_pixel_stream@16 */
  uVar4 = pl_cam_check(param_1);
  if ((uVar4 & 0xffff) == 0) {
    local_2c = 0;
  }
  else if (DAT_10042750 == 0) {
    pv_set_error_code(0x7d0a);
    local_2c = 0;
  }
  else {
    bVar2 = pv_sys_get_time_stamp
                      (local_18,(char *)local_8,local_14,local_28,local_3c,local_1c,local_c);
    if ((CONCAT31(extraout_var,bVar2) & 0xffff) == 0) {
      local_2c = 0;
    }
    else {
      pl_buf_set_exp_date(param_3,param_4,local_18[0],local_8[0],local_14[0],local_28[0],local_3c[0]
                          ,local_1c[0],local_c[0]);
      local_34 = (uint)local_34._2_2_ << 0x10;
      for (local_10 = *(int *)(DAT_10042750 + 0x18 + param_1 * 0x20); local_10 != 0;
          local_10 = *(int *)(local_10 + 8)) {
        local_24 = local_24 & 0xffff0000;
        while ((local_24 & 0xffff) < (uint)*(ushort *)(local_10 + 2)) {
          if ((local_34 & 0xffff) <
              (uint)*(ushort *)(*(int *)(local_10 + 4) + (local_24 & 0xffff) * 4)) {
            local_34 = CONCAT22(local_34._2_2_,
                                *(undefined2 *)(*(int *)(local_10 + 4) + (local_24 & 0xffff) * 4));
          }
          local_24 = CONCAT22(local_24._2_2_,(short)local_24 + 1);
        }
      }
      uVar3 = (ushort)local_34 + 1;
      local_34 = CONCAT22(local_34._2_2_,uVar3);
      local_38 = pv_malloc((uint)uVar3 << 2,0);
      if (local_38 == (void *)0x0) {
        local_2c = 0;
      }
      else {
        local_24 = local_24 & 0xffff0000;
        while ((local_24 & 0xffff) < (local_34 & 0xffff)) {
          uVar4 = pl_buf_get_img_handle(param_3,param_4,(short)local_24,local_20);
          if (((uVar4 & 0xffff) == 0) ||
             (uVar4 = pl_buf_get_img_ptr(local_20[0],
                                         (undefined4 *)((int)local_38 + (local_24 & 0xffff) * 4)),
             (uVar4 & 0xffff) == 0)) {
            local_30 = pl_error_code();
            pv_free(local_38,0);
            local_38 = (void *)0x0;
            pv_set_error_code(local_30);
            return 0;
          }
          local_24 = CONCAT22(local_24._2_2_,(short)local_24 + 1);
        }
        sVar1 = *(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c);
        if (sVar1 == 0) {
          uVar5 = pm_decode_pixel_stream(param_1,param_2,(int)local_38);
          local_2c = (undefined2)uVar5;
        }
        else {
          uVar5 = pi_decode_pixel_stream
                            (param_1,(int)param_2,CONCAT22((short)((uint)local_38 >> 0x10),param_3),
                             CONCAT22(sVar1 >> 0xf,param_4),(ushort)local_34,local_38);
          local_2c = (undefined2)uVar5;
        }
        pv_free(local_38,0);
      }
    }
  }
  return local_2c;
}



/* ================================================================
 * Function: pm_script_free_groups
 * Address:  1001f180
 * ================================================================ */

/* __stdcall pm_script_free_groups,4 */

int pm_script_free_groups(void *param_1)

{
  void *pvVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  undefined2 local_c;
  
                    /* 0x1f180  410  _pm_script_free_groups@4 */
  local_c = 0;
  while (param_1 != (void *)0x0) {
    uVar3 = pv_free(*(void **)((int)param_1 + 4),0);
    if ((uVar3 & 0xffff) != 0) {
      local_c = pl_error_code();
    }
    *(undefined4 *)((int)param_1 + 4) = 0;
    pvVar1 = *(void **)((int)param_1 + 8);
    uVar3 = pv_free(param_1,0);
    param_1 = pvVar1;
    if ((uVar3 & 0xffff) != 0) {
      local_c = pl_error_code();
    }
  }
  pv_set_error_code(local_c);
  sVar2 = pl_error_code();
  if (sVar2 == 0) {
    iVar4 = 1;
  }
  else {
    iVar4 = (uint)(ushort)(sVar2 >> 0xf) << 0x10;
  }
  return iVar4;
}



/* ================================================================
 * Function: pm_script_free
 * Address:  1001f21e
 * ================================================================ */

/* __stdcall pm_script_free,4 */

int pm_script_free(void *param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  ushort extraout_var;
  
                    /* 0x1f21e  409  _pm_script_free@4 */
  uVar2 = pm_script_free_groups(*(void **)((int)param_1 + 8));
  if ((uVar2 & 0xffff) == 0) {
    *(undefined4 *)((int)param_1 + 8) = 0;
    iVar3 = 0;
  }
  else {
    *(undefined4 *)((int)param_1 + 8) = 0;
    pv_free(param_1,0);
    sVar1 = pl_error_code();
    if (sVar1 == 0) {
      iVar3 = CONCAT22(extraout_var,1);
    }
    else {
      iVar3 = (uint)extraout_var << 0x10;
    }
  }
  return iVar3;
}



/* ================================================================
 * Function: pm_script_load_op
 * Address:  1001f27a
 * ================================================================ */

/* __stdcall pm_script_load_op,8 */

void pm_script_load_op(undefined1 param_1,undefined4 param_2)

{
                    /* 0x1f27a  412  _pm_script_load_op@8 */
  if (DAT_10043ca4 < DAT_10043ca6) {
    *(char *)(DAT_10043ca0 + (uint)DAT_10043ca4) = (char)((uint)param_2 >> 8);
    DAT_10043ca4 = DAT_10043ca4 + 1;
    *(undefined1 *)(DAT_10043ca0 + (uint)DAT_10043ca4) = (undefined1)param_2;
    DAT_10043ca4 = DAT_10043ca4 + 1;
    *(undefined1 *)(DAT_10043ca0 + (uint)DAT_10043ca4) = param_1;
    DAT_10043ca4 = DAT_10043ca4 + 1;
  }
  return;
}



/* ================================================================
 * Function: pm_get_camera_info
 * Address:  1001f310
 * ================================================================ */

/* __stdcall pm_get_camera_info,8 */

undefined4 pm_get_camera_info(short param_1,ushort *param_2)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  undefined3 extraout_var_08;
  undefined3 extraout_var_09;
  undefined3 extraout_var_10;
  undefined3 extraout_var_11;
  undefined3 extraout_var_12;
  short local_8 [2];
  
                    /* 0x1f310  348  _pm_get_camera_info@8 */
  uVar2 = pv_cam_get_reads(param_1);
  if ((uVar2 & 0xffff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = pv_cam_get_rws(param_1);
    if ((uVar2 & 0xffff) == 0) {
      uVar3 = 0;
    }
    else {
      uVar2 = pl_shtr_get_close_dly(param_1,param_2);
      if ((uVar2 & 0xffff) == 0) {
        uVar3 = 0;
      }
      else {
        uVar2 = pl_shtr_get_open_dly(param_1,param_2 + 1);
        if ((uVar2 & 0xffff) == 0) {
          uVar3 = 0;
        }
        else {
          bVar1 = pl_ccd_get_par_size(param_1,param_2 + 2);
          if ((CONCAT31(extraout_var,bVar1) & 0xffff) == 0) {
            uVar3 = 0;
          }
          else {
            bVar1 = pl_ccd_get_ser_size(param_1,param_2 + 3);
            if ((CONCAT31(extraout_var_00,bVar1) & 0xffff) == 0) {
              uVar3 = 0;
            }
            else {
              bVar1 = pl_ccd_get_prescan(param_1,param_2 + 4);
              if ((CONCAT31(extraout_var_01,bVar1) & 0xffff) == 0) {
                uVar3 = 0;
              }
              else {
                bVar1 = pl_ccd_get_postscan(param_1,param_2 + 5);
                if ((CONCAT31(extraout_var_02,bVar1) & 0xffff) == 0) {
                  uVar3 = 0;
                }
                else {
                  bVar1 = pl_ccd_get_premask(param_1,param_2 + 6);
                  if ((CONCAT31(extraout_var_03,bVar1) & 0xffff) == 0) {
                    uVar3 = 0;
                  }
                  else {
                    bVar1 = pl_ccd_get_postmask(param_1,param_2 + 7);
                    if ((CONCAT31(extraout_var_04,bVar1) & 0xffff) == 0) {
                      uVar3 = 0;
                    }
                    else {
                      bVar1 = pl_ccd_get_preflash(param_1,param_2 + 8);
                      if ((CONCAT31(extraout_var_05,bVar1) & 0xffff) == 0) {
                        uVar3 = 0;
                      }
                      else {
                        bVar1 = pl_ccd_get_clear_mode(param_1,param_2 + 0xd);
                        if ((CONCAT31(extraout_var_06,bVar1) & 0xffff) == 0) {
                          uVar3 = 0;
                        }
                        else {
                          uVar2 = pl_ccd_get_clear_cycles(param_1,param_2 + 9);
                          if ((uVar2 & 0xffff) == 0) {
                            uVar3 = 0;
                          }
                          else {
                            bVar1 = pl_ccd_get_preamp_dly(param_1,param_2 + 10);
                            if ((CONCAT31(extraout_var_07,bVar1) & 0xffff) == 0) {
                              uVar3 = 0;
                            }
                            else {
                              bVar1 = pl_ccd_get_mpp_capable(param_1,local_8);
                              if ((CONCAT31(extraout_var_08,bVar1) & 0xffff) == 0) {
                                uVar3 = 0;
                              }
                              else {
                                param_2[0xb] = (ushort)(local_8[0] == 3);
                                bVar1 = pl_ccd_get_frame_capable(param_1,param_2 + 0xc);
                                if ((CONCAT31(extraout_var_09,bVar1) & 0xffff) == 0) {
                                  uVar3 = 0;
                                }
                                else {
                                  bVar1 = pl_shtr_get_open_mode(param_1,param_2 + 0xe);
                                  if ((CONCAT31(extraout_var_10,bVar1) & 0xffff) == 0) {
                                    uVar3 = 0;
                                  }
                                  else {
                                    bVar1 = pl_ccd_get_pmode(param_1,local_8);
                                    if ((CONCAT31(extraout_var_11,bVar1) & 0xffff) == 0) {
                                      uVar3 = 0;
                                    }
                                    else {
                                      if (*(short *)(DAT_10043338 + 0x4c + param_1 * 0x110) == 0) {
                                        param_2[0x14] = 0;
                                        param_2[0x15] = 0;
                                      }
                                      else {
                                        uVar2 = pv_exp_get_res(param_1,*(ushort *)
                                                                        (DAT_10043334 + 0x10 +
                                                                        param_1 * 0x24),
                                                               (uint *)(param_2 + 0x14));
                                        if ((uVar2 & 0xffff) == 0) {
                                          return 0;
                                        }
                                      }
                                      switch(local_8[0]) {
                                      case 1:
                                        param_2[0x10] = 1;
                                        param_2[0x11] = 0;
                                        param_2[0xf] = 0;
                                        break;
                                      case 2:
                                        param_2[0x11] = 0;
                                        param_2[0x10] = 0;
                                        param_2[0xf] = 1;
                                        break;
                                      case 3:
                                        param_2[0xf] = 1;
                                        param_2[0x10] = 1;
                                        param_2[0x11] = 0;
                                        break;
                                      case 4:
                                        param_2[0xf] = 0;
                                        param_2[0x10] = 0;
                                        param_2[0x11] = 1;
                                        break;
                                      case 5:
                                        param_2[0xf] = 0;
                                        param_2[0x11] = 1;
                                        param_2[0x10] = 1;
                                        break;
                                      case 6:
                                        param_2[0x10] = 0;
                                        param_2[0x11] = 1;
                                        param_2[0xf] = 1;
                                        break;
                                      case 7:
                                        param_2[0x11] = 1;
                                        param_2[0xf] = 1;
                                        param_2[0x10] = 1;
                                        break;
                                      default:
                                        param_2[0x11] = 0;
                                        param_2[0xf] = 0;
                                        param_2[0x10] = 0;
                                      }
                                      bVar1 = pv_io_get_headers(param_1,(undefined4 *)
                                                                        (param_2 + 0x16));
                                      if ((CONCAT31(extraout_var_12,bVar1) & 0xffff) == 0) {
                                        uVar3 = 0;
                                      }
                                      else {
                                        uVar3 = 1;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar3;
}



/* ================================================================
 * Function: FUN_1001f729
 * Address:  1001f729
 * ================================================================ */

int __cdecl FUN_1001f729(ushort *param_1,ushort *param_2)

{
  return (uint)*param_1 - (uint)*param_2;
}



/* ================================================================
 * Function: pm_order_region_list
 * Address:  1001f749
 * ================================================================ */

/* __stdcall pm_order_region_list,16 */

undefined4 pm_order_region_list(int param_1,ushort param_2,int param_3,int param_4)

{
  int iVar1;
  ushort uVar2;
  void *_Base;
  undefined4 uVar3;
  ushort extraout_var;
  undefined4 *puVar4;
  ushort extraout_var_00;
  ushort extraout_var_01;
  ushort extraout_var_02;
  ushort uVar5;
  undefined4 *puVar6;
  
                    /* 0x1f749  407  _pm_order_region_list@16 */
  iVar1 = *(int *)(param_4 + 0x24);
  _Base = pv_malloc((uint)param_2 * 0xe,0);
  if (_Base == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    for (uVar2 = 0; uVar2 < param_2; uVar2 = uVar2 + 1) {
      if ((((*(ushort *)(param_1 + 2 + (uint)uVar2 * 0xc) < *(ushort *)(param_1 + (uint)uVar2 * 0xc)
            ) || (*(ushort *)(param_4 + 6) <= *(ushort *)(param_1 + 2 + (uint)uVar2 * 0xc))) ||
          (*(ushort *)(param_1 + 8 + (uint)uVar2 * 0xc) <
           *(ushort *)(param_1 + 6 + (uint)uVar2 * 0xc))) ||
         (*(ushort *)(param_4 + 4) <= *(ushort *)(param_1 + 8 + (uint)uVar2 * 0xc))) {
        pv_free(_Base,0);
        pv_set_error_code(0x7d08);
        return (uint)extraout_var << 0x10;
      }
      puVar6 = (undefined4 *)(param_1 + (uint)uVar2 * 0xc);
      puVar4 = (undefined4 *)((int)_Base + (uint)uVar2 * 0xe);
      *puVar4 = *puVar6;
      puVar4[1] = puVar6[1];
      puVar4[2] = puVar6[2];
      *(ushort *)((int)_Base + (uint)uVar2 * 0xe + 0xc) = uVar2;
      uVar5 = (*(short *)((int)_Base + (uint)uVar2 * 0xe + 2) + 1) -
              *(short *)((int)_Base + (uint)uVar2 * 0xe);
      if ((uVar5 < *(ushort *)((int)_Base + (uint)uVar2 * 0xe + 4)) ||
         (*(short *)((int)_Base + (uint)uVar2 * 0xe + 4) == 0)) {
        pv_free(_Base,0);
        pv_set_error_code(0x7d04);
        return (uint)extraout_var_00 << 0x10;
      }
      if (*(short *)((int)_Base + (uint)uVar2 * 0xe + 4) == 0) {
        *(undefined2 *)((int)_Base + (uint)uVar2 * 0xe + 2) = 0;
      }
      else {
        *(short *)((int)_Base + (uint)uVar2 * 0xe + 2) =
             *(short *)((int)_Base + (uint)uVar2 * 0xe + 2) -
             (short)((ulonglong)uVar5 %
                    (ulonglong)(longlong)(int)(uint)*(ushort *)((int)_Base + (uint)uVar2 * 0xe + 4))
        ;
      }
      uVar5 = (*(short *)((int)_Base + (uint)uVar2 * 0xe + 8) + 1) -
              *(short *)((int)_Base + (uint)uVar2 * 0xe + 6);
      if ((uVar5 < *(ushort *)((int)_Base + (uint)uVar2 * 0xe + 10)) ||
         (*(short *)((int)_Base + (uint)uVar2 * 0xe + 10) == 0)) {
        pv_free(_Base,0);
        pv_set_error_code(0x7d05);
        return (uint)extraout_var_01 << 0x10;
      }
      if (*(short *)((int)_Base + (uint)uVar2 * 0xe + 10) == 0) {
        *(undefined2 *)((int)_Base + (uint)uVar2 * 0xe + 8) = 0;
      }
      else {
        *(short *)((int)_Base + (uint)uVar2 * 0xe + 8) =
             *(short *)((int)_Base + (uint)uVar2 * 0xe + 8) -
             (short)((ulonglong)uVar5 %
                    (ulonglong)(longlong)(int)(uint)*(ushort *)((int)_Base + (uint)uVar2 * 0xe + 10)
                    );
      }
    }
    qsort(_Base,(uint)param_2,0xe,FUN_1001f729);
    for (uVar2 = 0; uVar2 < param_2; uVar2 = uVar2 + 1) {
      puVar6 = (undefined4 *)((int)_Base + (uint)uVar2 * 0xe);
      puVar4 = (undefined4 *)(iVar1 + (uint)uVar2 * 0xc);
      *puVar4 = *puVar6;
      puVar4[1] = puVar6[1];
      puVar4[2] = puVar6[2];
      *(undefined2 *)(param_3 + (uint)uVar2 * 2) =
           *(undefined2 *)((int)_Base + (uint)uVar2 * 0xe + 0xc);
    }
    pv_free(_Base,0);
    for (uVar2 = 0; uVar5 = uVar2, uVar2 < (ushort)(param_2 - 1); uVar2 = uVar2 + 1) {
      while (uVar5 = uVar5 + 1, uVar5 < param_2) {
        if (((*(ushort *)(iVar1 + (uint)uVar5 * 0xc) <= *(ushort *)(iVar1 + 2 + (uint)uVar2 * 0xc))
            && (*(ushort *)(iVar1 + 6 + (uint)uVar5 * 0xc) <=
                *(ushort *)(iVar1 + 8 + (uint)uVar2 * 0xc))) &&
           (*(ushort *)(iVar1 + 6 + (uint)uVar2 * 0xc) <= *(ushort *)(iVar1 + 8 + (uint)uVar5 * 0xc)
           )) {
          pv_set_error_code(0x7d03);
          return (uint)extraout_var_02 << 0x10;
        }
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}



/* ================================================================
 * Function: FUN_1001fcb7
 * Address:  1001fcb7
 * ================================================================ */

int __cdecl FUN_1001fcb7(short *param_1,short *param_2)

{
  return (int)*param_1 - (int)*param_2;
}



/* ================================================================
 * Function: pm_set_boundaries
 * Address:  1001fcd3
 * ================================================================ */

/* __stdcall pm_set_boundaries,20 */

undefined4 pm_set_boundaries(short *param_1,int param_2,short param_3,short param_4,short param_5)

{
  short extraout_var;
  short sVar1;
  short local_10;
  short local_c;
  short local_8;
  
                    /* 0x1fcd3  415  _pm_set_boundaries@20 */
  *param_1 = -param_4;
  local_10 = 1;
  for (local_8 = 0; local_8 < param_3; local_8 = local_8 + 1) {
    param_1[local_10] = *(short *)(param_2 + 6 + local_8 * 0xc);
    param_1[(short)(local_10 + 1)] = *(short *)(param_2 + 8 + local_8 * 0xc) + 1;
    local_10 = local_10 + 2;
  }
  param_1[local_10] = param_5;
  local_10 = local_10 + 1;
  qsort(param_1,(int)local_10,2,FUN_1001fcb7);
  sVar1 = extraout_var;
  for (local_8 = 1; local_8 < local_10; local_8 = local_8 + 1) {
    while ((param_1[local_8] == param_1[local_8 + -1] && (local_8 < local_10))) {
      local_10 = local_10 + -1;
      for (local_c = local_8; local_c < local_10; local_c = local_c + 1) {
        param_1[local_c] = param_1[local_c + 1];
      }
    }
    sVar1 = param_1[local_8 + -1] >> 0xf;
  }
  return CONCAT22(sVar1,local_10);
}



/* ================================================================
 * Function: pm_io_setup
 * Address:  1001fe44
 * ================================================================ */

/* __stdcall pm_io_setup,8 */

undefined2 pm_io_setup(short param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int extraout_EDX;
  undefined2 extraout_var;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int iVar4;
  undefined2 local_8;
  
                    /* 0x1fe44  406  _pm_io_setup@8 */
  uVar2 = pv_cam_get_reads(param_1);
  if ((uVar2 & 0xffff) == 0) {
    local_8 = 0;
  }
  else {
    local_8 = 1;
    if (*(short *)(DAT_10043338 + 0x4e + param_1 * 0x110) == 0) {
      local_8 = 0;
    }
    else {
      iVar4 = DAT_10043338;
      if (param_2 == (undefined2 *)0x0) {
        local_8 = 1;
      }
      else {
        for (; param_2 != (undefined2 *)0x0; param_2 = *(undefined2 **)(param_2 + 8)) {
          pm_script_load_op(0x21,CONCAT22((short)((uint)iVar4 >> 0x10),*param_2));
          local_8 = 1;
          if (*(int *)(param_2 + 2) == 0) {
            uVar3 = ftol();
            pm_script_load_op(0x23,uVar3);
            iVar4 = extraout_EDX;
          }
          else if (*(int *)(param_2 + 2) == 1) {
            uVar1 = ftol();
            pm_script_load_op(0x22,CONCAT22(extraout_var,uVar1));
            iVar4 = extraout_EDX_00;
          }
          else {
            pv_set_error_code(0x7d09);
            local_8 = 0;
            iVar4 = extraout_EDX_01;
          }
        }
      }
    }
  }
  return local_8;
}



/* ================================================================
 * Function: pm_script_generate
 * Address:  1001ff3b
 * ================================================================ */

/* WARNING: Removing unreachable block (ram,0x100202ec) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffff7a : 0x10020317 */
/* WARNING: Removing unreachable block (ram,0x10020349) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* __stdcall pm_script_generate,36 */

int pm_script_generate(short param_1,undefined4 *param_2,short param_3,ushort param_4,uint param_5,
                      int param_6,short param_7,uint param_8,int *param_9)

{
  bool bVar1;
  undefined2 uVar2;
  short sVar3;
  uint uVar4;
  ushort extraout_var_00;
  undefined3 extraout_var;
  void *pvVar5;
  ushort extraout_var_01;
  ushort extraout_var_02;
  ushort extraout_var_03;
  ushort extraout_var_04;
  undefined2 extraout_var_05;
  undefined4 uVar6;
  uint uVar7;
  ushort extraout_var_06;
  ushort uVar8;
  int iVar9;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  undefined2 extraout_var_07;
  undefined2 extraout_var_08;
  undefined2 extraout_var_09;
  undefined2 extraout_var_10;
  char local_8c;
  undefined1 local_8b;
  undefined1 local_8a;
  undefined1 local_89;
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_86;
  undefined1 local_85;
  undefined2 local_84;
  undefined2 uStack_82;
  uint local_80;
  short local_7c;
  uint local_78;
  short local_74;
  void *local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  void *local_5c;
  short local_58;
  short *local_54;
  uint local_50;
  short local_4c;
  undefined4 local_48;
  undefined2 *local_44;
  undefined4 local_40;
  ushort local_3c;
  ushort uStack_3a;
  ushort uStack_38;
  short sStack_36;
  short sStack_34;
  short sStack_32;
  ushort uStack_30;
  short sStack_2e;
  short local_2c;
  ushort uStack_2a;
  short sStack_26;
  short local_24;
  short sStack_22;
  short local_20;
  short sStack_1e;
  short local_1c;
  short sStack_1a;
  undefined2 local_18;
  undefined2 uStack_16;
  int local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
                    /* 0x1ff3b  411  _pm_script_generate@36 */
  local_6c = local_6c & 0xffff0000;
  local_44 = (undefined2 *)0x0;
  uVar4 = pl_cam_check(param_1);
  if ((uVar4 & 0xffff) == 0) {
    iVar9 = 0;
  }
  else {
    uVar4 = pm_get_camera_info(param_1,&local_3c);
    if ((uVar4 & 0xffff) == 0) {
      iVar9 = 0;
    }
    else if ((local_1c == 0) || (local_24 != 0)) {
      bVar1 = pl_ccd_get_preamp_off_control(param_1,&local_64);
      if ((CONCAT31(extraout_var,bVar1) & 0xffff) == 0) {
        iVar9 = 0;
      }
      else {
        local_40 = local_40 & 0xffff0000;
        local_80 = 0;
        *(short *)(DAT_10043330 + 0x26 + param_1 * 0x2c) = param_7;
        if (*(int *)(DAT_10043330 + 0x10 + param_1 * 0x2c) == 0) {
          pvVar5 = pv_malloc((param_5 & 0xffff) * 0xc,0);
          local_18 = SUB42(pvVar5,0);
          uStack_16 = (undefined2)((uint)pvVar5 >> 0x10);
          if (pvVar5 == (void *)0x0) {
            iVar9 = 0;
          }
          else {
            local_5c = pv_malloc((param_5 & 0xffff) << 3,0);
            if (local_5c == (void *)0x0) {
              uVar2 = pl_error_code();
              local_50 = CONCAT22(local_50._2_2_,uVar2);
              pv_free((void *)CONCAT22(uStack_16,local_18),0);
              local_18 = 0;
              uStack_16 = 0;
              pv_set_error_code((short)local_50);
              iVar9 = (uint)extraout_var_01 << 0x10;
            }
            else {
              local_54 = pv_malloc(((param_5 & 0xffff) * 2 + 2) * 2,0);
              if (local_54 == (short *)0x0) {
                uVar2 = pl_error_code();
                local_50 = CONCAT22(local_50._2_2_,uVar2);
                pv_free((void *)CONCAT22(uStack_16,local_18),0);
                local_18 = 0;
                uStack_16 = 0;
                pv_free(local_5c,0);
                local_5c = (void *)0x0;
                pv_set_error_code((short)local_50);
                iVar9 = (uint)extraout_var_02 << 0x10;
              }
              else {
                local_70 = pv_malloc((param_5 & 0xffff) << 1,0);
                if (local_70 == (void *)0x0) {
                  uVar2 = pl_error_code();
                  local_50 = CONCAT22(local_50._2_2_,uVar2);
                  pv_free((void *)CONCAT22(uStack_16,local_18),0);
                  local_18 = 0;
                  uStack_16 = 0;
                  pv_free(local_5c,0);
                  local_5c = (void *)0x0;
                  pv_free(local_54,0);
                  local_54 = (short *)0x0;
                  pv_set_error_code((short)local_50);
                  iVar9 = (uint)extraout_var_03 << 0x10;
                }
                else {
                  uVar4 = pm_order_region_list(param_6,(ushort)param_5,(int)local_70,(int)&local_3c)
                  ;
                  if ((uVar4 & 0xffff) == 0) {
                    uVar2 = pl_error_code();
                    local_50 = CONCAT22(local_50._2_2_,uVar2);
                    pv_free((void *)CONCAT22(uStack_16,local_18),0);
                    local_18 = 0;
                    uStack_16 = 0;
                    pv_free(local_5c,0);
                    local_5c = (void *)0x0;
                    pv_free(local_54,0);
                    local_54 = (short *)0x0;
                    pv_free(local_70,0);
                    local_70 = (void *)0x0;
                    pv_set_error_code((short)local_50);
                    iVar9 = (uint)extraout_var_04 << 0x10;
                  }
                  else {
                    DAT_10043ca6 = param_3 * 3;
                    DAT_10043ca4 = 0;
                    DAT_10043ca0 = *param_2;
                    pm_script_free_groups((void *)param_2[2]);
                    param_2[2] = 0;
                    if (*(short *)(DAT_10043338 + 0x5c + param_1 * 0x110) != 0) {
                      _local_84 = CONCAT22(uStack_82,8);
                      local_8c = '\n';
                      local_89 = 0x26;
                      local_88 = 7;
                      local_87 = 0x28;
                      local_86 = 0;
                      local_85 = 2;
                      local_8a = (undefined1)param_7;
                      local_8b = (undefined1)((ushort)param_7 >> 8);
                      local_85 = 2;
                      local_86 = 0;
                      local_87 = 0x28;
                      local_88 = 7;
                      local_89 = 0x26;
                      local_8c = '\n';
                      uVar4 = pm_cam_plugin_write_read(param_1,0x31,8,&local_8c,&local_8c);
                      if ((uVar4 & 0xffff) == 0) {
                        return 0;
                      }
                    }
                    pm_script_load_op(0x1b,0);
                    if (sStack_1a == 0) {
                      pm_script_load_op(0x1d,0);
                    }
                    else {
                      pm_script_load_op(9,0);
                    }
                    if (sStack_26 != 0) {
                      if (sStack_1e == 0) {
                        pm_script_load_op(0x19,0);
                      }
                      else {
                        pm_script_load_op(0x18,0);
                      }
                    }
                    sVar3 = *(short *)(CONCAT22(uStack_16,local_18) + 4);
                    local_48 = CONCAT22(local_48._2_2_,sVar3);
                    local_50 = CONCAT22(local_50._2_2_,1);
                    while ((local_50 & 0xffff) < (param_5 & 0xffff)) {
                      if (*(short *)(CONCAT22(uStack_16,local_18) + 4 + (local_50 & 0xffff) * 0xc)
                          != sVar3) {
                        local_48 = (uint)local_48._2_2_ << 0x10;
                        break;
                      }
                      local_50 = CONCAT22(local_50._2_2_,(short)local_50 + 1);
                    }
                    if ((local_48 & 0xffff) != 0) {
                      pm_script_load_op(0xc,local_48 & 0xffff);
                    }
                    if (local_20 == 0) {
                      pm_io_setup(param_1,*(undefined2 **)(local_10 + 0xd0));
                      pm_script_load_op(6,0);
                      pm_io_setup(param_1,*(undefined2 **)(local_10 + 0xe8));
                    }
                    if (local_14 == 0) {
                      if (((param_8 != 0) && (param_7 != 2)) && (param_7 != 5)) {
                        if (local_20 == 0) {
                          local_80 = param_8 + uStack_3a + (uint)local_3c;
                          uVar4 = (uint)uStack_3a;
                        }
                        else {
                          local_80 = param_8;
                          uVar4 = param_8;
                        }
                        uVar2 = (undefined2)(uVar4 >> 0x10);
                        if (local_80 < 0x10000) {
                          if (local_80 == 0) {
                            local_40 = (uint)local_40._2_2_ << 0x10;
                          }
                          else {
                            local_40 = CONCAT22(local_40._2_2_,1);
                          }
                        }
                        else if (local_80 % 60000 == 0) {
                          uVar2 = (undefined2)((ulonglong)local_80 / 60000 >> 0x10);
                          local_40 = CONCAT22(local_40._2_2_,(short)((ulonglong)local_80 / 60000));
                          local_80 = 60000;
                        }
                        else {
                          uVar4 = local_80 / 1000;
                          if ((local_80 % 1000 == 0) && (local_80 < 0x3e7fc18)) {
                            uVar2 = (undefined2)((ulonglong)local_80 / 1000 >> 0x10);
                            local_40 = CONCAT22(local_40._2_2_,(short)((ulonglong)local_80 / 1000));
                            local_80 = 1000;
                          }
                          else {
                            local_40 = CONCAT22(local_40._2_2_,1);
                            for (; uVar2 = (undefined2)(uVar4 >> 0x10), 0xffff < local_80;
                                local_80 = local_80 >> 1) {
                              uVar4 = 0;
                              local_40 = CONCAT22(local_40._2_2_,(short)local_40 * 2);
                            }
                          }
                        }
                        if ((local_80 != 0) && (param_7 != 4)) {
                          pm_script_load_op(3,CONCAT22(uVar2,(undefined2)local_80));
                        }
                      }
                    }
                    else if (((param_8 != 0) && (param_7 != 2)) && (param_7 != 5)) {
                      iVar9 = (int)local_20;
                      if (iVar9 == 0) {
                        iVar9 = (uint)local_3c * 1000;
                        local_80 = param_8 + (uint)uStack_3a * 1000 + iVar9;
                      }
                      else {
                        local_80 = param_8;
                      }
                      uVar2 = (undefined2)((uint)iVar9 >> 0x10);
                      if (local_80 < 0x10000) {
                        if (local_80 == 0) {
                          local_40 = (uint)local_40._2_2_ << 0x10;
                        }
                        else {
                          local_40 = CONCAT22(local_40._2_2_,1);
                        }
                      }
                      else {
                        uVar4 = local_80 / 1000;
                        if (local_80 % 1000 == 0) {
                          uVar2 = (undefined2)((ulonglong)local_80 / 1000 >> 0x10);
                          local_40 = CONCAT22(local_40._2_2_,(short)((ulonglong)local_80 / 1000));
                          local_80 = 1000;
                        }
                        else {
                          local_40 = CONCAT22(local_40._2_2_,1);
                          for (; uVar2 = (undefined2)(uVar4 >> 0x10), 0xffff < local_80;
                              local_80 = local_80 >> 1) {
                            uVar4 = 0;
                            local_40 = CONCAT22(local_40._2_2_,(short)local_40 * 2);
                          }
                        }
                      }
                      if ((local_80 != 0) && (param_7 != 4)) {
                        pm_script_load_op(3,CONCAT22(uVar2,(undefined2)local_80));
                      }
                    }
                    if (local_24 != 0) {
                      pm_script_load_op(0x16,0);
                    }
                    if (local_20 == 2) {
                      pm_io_setup(param_1,*(undefined2 **)(local_10 + 0x10));
                      pm_script_load_op(5,0);
                      pm_io_setup(param_1,*(undefined2 **)(local_10 + 0x28));
                    }
                    if ((sStack_22 == 2) || (sStack_22 == 4)) {
                      if (param_7 == 3) {
                        pm_script_load_op(0xe,0);
                      }
                      else if (uStack_2a != 0) {
                        uVar8 = uStack_38 + uStack_30 + sStack_2e;
                        local_50 = CONCAT22(local_50._2_2_,uVar8);
                        if ((uint)(0xffff / (ulonglong)(longlong)(int)(uint)uStack_2a) < (uint)uVar8
                           ) {
                          pm_script_load_op(1,(uint)uStack_2a);
                          if (*(short *)(DAT_10043338 + 0x54 + param_1 * 0x110) == 0) {
                            pm_script_load_op(7,CONCAT22((short)((uint)DAT_10043338 >> 0x10),
                                                         (short)local_50));
                          }
                          else {
                            pm_script_load_op(0x24,CONCAT22((short)((uint)(param_1 * 0x110) >> 0x10)
                                                            ,(short)local_50));
                          }
                          pm_script_load_op(2,0);
                        }
                        else if (*(short *)(DAT_10043338 + 0x54 + param_1 * 0x110) == 0) {
                          pm_script_load_op(7,(uint)uVar8 * (uint)uStack_2a);
                        }
                        else {
                          pm_script_load_op(0x24,(uint)uVar8 * (uint)uStack_2a);
                        }
                      }
                    }
                    else if (param_7 == 3) {
                      pm_script_load_op(0xf,0);
                    }
                    local_c = local_c & 0xffff0000;
                    if (*(short *)(DAT_10043330 + 0x20 + param_1 * 0x2c) == 0) {
                      iVar9 = (int)sStack_22;
                      if (((iVar9 == 1) || (sStack_22 == 5)) && (uStack_2a != 0)) {
                        uVar8 = uStack_38 + uStack_30 + sStack_2e;
                        local_50 = CONCAT22(local_50._2_2_,uVar8);
                        if ((uint)(0xffff / (ulonglong)(longlong)(int)(uint)uStack_2a) < (uint)uVar8
                           ) {
                          pm_script_load_op(1,(uint)uStack_2a);
                          if (*(short *)(DAT_10043338 + 0x54 + param_1 * 0x110) == 0) {
                            pm_script_load_op(7,CONCAT22((short)((uint)DAT_10043338 >> 0x10),
                                                         (short)local_50));
                          }
                          else {
                            pm_script_load_op(0x24,CONCAT22((short)((uint)(param_1 * 0x110) >> 0x10)
                                                            ,(short)local_50));
                          }
                          pm_script_load_op(2,0);
                          iVar9 = extraout_ECX;
                        }
                        else if (*(short *)(DAT_10043338 + 0x54 + param_1 * 0x110) == 0) {
                          pm_script_load_op(7,(uint)uVar8 * (uint)uStack_2a);
                          iVar9 = extraout_ECX_01;
                        }
                        else {
                          pm_script_load_op(0x24,(uint)uVar8 * (uint)uStack_2a);
                          iVar9 = extraout_ECX_00;
                        }
                      }
                      if (1 < param_4) {
                        pm_script_load_op(1,CONCAT22((short)((uint)iVar9 >> 0x10),param_4));
                        local_c = CONCAT22(local_c._2_2_,1);
                      }
                    }
                    else {
                      if (((sStack_22 == 1) || (sStack_22 == 5)) && (uStack_2a != 0)) {
                        uVar8 = uStack_38 + uStack_30 + sStack_2e;
                        local_50 = CONCAT22(local_50._2_2_,uVar8);
                        if ((uint)(0xffff / (ulonglong)(longlong)(int)(uint)uStack_2a) < (uint)uVar8
                           ) {
                          pm_script_load_op(1,(uint)uStack_2a);
                          if (*(short *)(DAT_10043338 + 0x54 + param_1 * 0x110) == 0) {
                            pm_script_load_op(7,CONCAT22((short)((uint)DAT_10043338 >> 0x10),
                                                         (short)local_50));
                          }
                          else {
                            pm_script_load_op(0x24,CONCAT22((short)((uint)(param_1 * 0x110) >> 0x10)
                                                            ,(short)local_50));
                          }
                          pm_script_load_op(2,0);
                        }
                        else if (*(short *)(DAT_10043338 + 0x54 + param_1 * 0x110) == 0) {
                          pm_script_load_op(7,(uint)uVar8 * (uint)uStack_2a);
                        }
                        else {
                          pm_script_load_op(0x24,(uint)uVar8 * (uint)uStack_2a);
                        }
                      }
                      pm_script_load_op(1,0xffff);
                      pm_script_load_op(1,0xffff);
                      local_c = CONCAT22(local_c._2_2_,1);
                    }
                    if ((local_64 < param_8) && (param_7 != 5)) {
                      pm_script_load_op(0x15,0);
                    }
                    if (local_20 == 3) {
                      pm_io_setup(param_1,*(undefined2 **)(local_10 + 0x10));
                      pm_script_load_op(5,0);
                      pm_io_setup(param_1,*(undefined2 **)(local_10 + 0x28));
                    }
                    if ((param_7 == 2) || (param_7 == 1)) {
                      if ((sStack_22 == 1) || (sStack_22 == 5)) {
                        pm_script_load_op(0xe,0);
                      }
                      else {
                        pm_script_load_op(0xf,0);
                      }
                    }
                    else if (((sStack_22 == 1) || (sStack_22 == 5)) && (uStack_2a != 0)) {
                      uVar8 = uStack_38 + uStack_30 + sStack_2e;
                      local_50 = CONCAT22(local_50._2_2_,uVar8);
                      if ((uint)(0xffff / (ulonglong)(longlong)(int)(uint)uStack_2a) < (uint)uVar8)
                      {
                        pm_script_load_op(1,(uint)uStack_2a);
                        if ((*(ushort *)(DAT_10043338 + 0x54 + param_1 * 0x110) &
                            (ushort)((local_c & 0xffff) == 0)) == 0) {
                          pm_script_load_op(7,local_50 & 0xffff);
                        }
                        else {
                          pm_script_load_op(0x24,(local_50 & 0xffff) * (uint)uStack_2a);
                        }
                        pm_script_load_op(2,0);
                      }
                      else if ((*(short *)(DAT_10043338 + 0x54 + param_1 * 0x110) == 0) ||
                              ((local_c & 0xffff) != 0)) {
                        pm_script_load_op(7,(uint)uVar8 * (uint)uStack_2a);
                      }
                      else {
                        pm_script_load_op(0x24,(uint)uVar8 * (uint)uStack_2a);
                      }
                    }
                    if (local_2c != 0) {
                      pm_io_setup(param_1,*(undefined2 **)(local_10 + 0x40));
                      pm_script_load_op(0x1c,CONCAT22(extraout_var_07,local_2c));
                      pm_io_setup(param_1,*(undefined2 **)(local_10 + 0x58));
                    }
                    if (local_20 == 1) {
                      pm_io_setup(param_1,*(undefined2 **)(local_10 + 0x10));
                      pm_script_load_op(5,0);
                      pm_io_setup(param_1,*(undefined2 **)(local_10 + 0x28));
                    }
                    if (param_7 == 2) {
                      pm_io_setup(param_1,*(undefined2 **)(local_10 + 0x70));
                      pm_script_load_op(0x10,0);
                      pm_io_setup(param_1,*(undefined2 **)(local_10 + 0x88));
                    }
                    else if (param_7 == 5) {
                      pm_io_setup(param_1,*(undefined2 **)(local_10 + 0x70));
                      if (local_14 == 0) {
                        pm_script_load_op(4,1);
                      }
                      else {
                        pm_script_load_op(0x20,1);
                      }
                      pm_io_setup(param_1,*(undefined2 **)(local_10 + 0x88));
                    }
                    else if (param_7 == 4) {
                      pm_io_setup(param_1,*(undefined2 **)(local_10 + 0x40));
                      pm_script_load_op(0x1c,CONCAT22(extraout_var_05,(undefined2)local_80));
                      pm_io_setup(param_1,*(undefined2 **)(local_10 + 0x58));
                    }
                    else if (param_8 != 0) {
                      pm_io_setup(param_1,*(undefined2 **)(local_10 + 0x70));
                      if (local_14 == 0) {
                        pm_script_load_op(4,CONCAT22(extraout_var_08,(undefined2)local_40));
                      }
                      else {
                        pm_script_load_op(0x20,CONCAT22(extraout_var_09,(undefined2)local_40));
                      }
                      pm_io_setup(param_1,*(undefined2 **)(local_10 + 0x88));
                    }
                    if ((local_20 == 1) || (local_20 == 3)) {
                      pm_io_setup(param_1,*(undefined2 **)(local_10 + 0xd0));
                      pm_script_load_op(6,0);
                      pm_io_setup(param_1,*(undefined2 **)(local_10 + 0xe8));
                    }
                    if ((local_64 < param_8) && (param_7 != 5)) {
                      pm_script_load_op(0x14,0);
                    }
                    if (local_1c != 0) {
                      if (uStack_30 < uStack_38) {
                        uVar4 = (uStack_38 + 1) / 2;
                        uStack_38 = (ushort)uVar4;
                        pm_script_load_op(7,uVar4);
                      }
                      else {
                        pm_script_load_op(7,(uint)uStack_30);
                        uStack_30 = 0;
                      }
                      pm_script_load_op(0x17,0);
                    }
                    uVar6 = pm_set_boundaries(local_54,CONCAT22(uStack_16,local_18),(ushort)param_5,
                                              uStack_30,uStack_38 + sStack_2e);
                    local_74 = (short)uVar6;
                    *param_9 = 0;
                    local_58 = 1;
                    while ((local_58 < local_74 && (sVar3 = pl_error_code(), sVar3 == 0))) {
                      local_4c = 0;
                      local_50 = local_50 & 0xffff0000;
                      while ((local_50 & 0xffff) < (param_5 & 0xffff)) {
                        if ((*(short *)(CONCAT22(uStack_16,local_18) + 6 + (local_50 & 0xffff) * 0xc
                                       ) < local_54[local_58]) &&
                           (local_54[local_58 + -1] <=
                            *(short *)(CONCAT22(uStack_16,local_18) + 8 + (local_50 & 0xffff) * 0xc)
                           )) {
                          local_4c = 1;
                          break;
                        }
                        local_50 = CONCAT22(local_50._2_2_,(short)local_50 + 1);
                      }
                      if (local_4c == 0) {
                        if ((short)uStack_38 <= local_54[local_58]) {
                          local_6c = CONCAT22(local_6c._2_2_,1);
                          pm_script_load_op(0x11,0);
                          pm_io_setup(param_1,*(undefined2 **)(local_10 + 0xb8));
                        }
                        pm_script_load_op(7,(int)local_54[local_58] - (int)local_54[local_58 + -1]);
                        if (local_54[local_58] < (short)uStack_38) {
                          uVar8 = sStack_36 + sStack_34 + sStack_32;
                          local_50 = CONCAT22(local_50._2_2_,uVar8);
                          pm_script_load_op(0xb,(uint)uVar8 << 1);
                        }
                      }
                      else if (local_4c == 1) {
                        if (local_58 == 1) {
                          uVar8 = sStack_36 + sStack_34 + sStack_32;
                          local_50 = CONCAT22(local_50._2_2_,uVar8);
                          pm_script_load_op(0xb,(uint)uVar8 << 1);
                        }
                        local_50 = local_50 & 0xffff0000;
                        local_68 = local_68 & 0xffff0000;
                        local_8 = local_8 & 0xffff0000;
LAB_100210c3:
                        if (((param_5 & 0xffff) <= (local_50 & 0xffff)) ||
                           (sVar3 = pl_error_code(), sVar3 != 0)) goto LAB_100212b6;
                        if ((local_54[local_58] <=
                             *(short *)(CONCAT22(uStack_16,local_18) + 6 + (local_50 & 0xffff) * 0xc
                                       )) ||
                           (*(short *)(CONCAT22(uStack_16,local_18) + 8 + (local_50 & 0xffff) * 0xc)
                            < local_54[local_58 + -1])) {
LAB_100210b7:
                          local_50 = CONCAT22(local_50._2_2_,(short)local_50 + 1);
                          goto LAB_100210c3;
                        }
                        if ((local_68 & 0xffff) == 0) {
                          local_68 = CONCAT22(local_68._2_2_,
                                              *(undefined2 *)
                                               (CONCAT22(uStack_16,local_18) + 10 +
                                               (local_50 & 0xffff) * 0xc));
                        }
                        if ((uint)*(ushort *)
                                   (CONCAT22(uStack_16,local_18) + 10 + (local_50 & 0xffff) * 0xc)
                            == (local_68 & 0xffff)) {
                          if ((local_68 & 0xffff) == 0) {
                            pv_set_error_code(0x7d07);
                            goto LAB_100212b6;
                          }
                          if ((*(short *)(CONCAT22(uStack_16,local_18) + 6 +
                                         (local_50 & 0xffff) * 0xc) < local_54[local_58 + -1]) &&
                             ((int)((ulonglong)
                                    ((int)local_54[local_58 + -1] -
                                     (uint)*(ushort *)
                                            (CONCAT22(uStack_16,local_18) + 6 +
                                            (local_50 & 0xffff) * 0xc) & 0xffff) %
                                   (ulonglong)(longlong)(int)(local_68 & 0xffff)) != 0)) {
                            pv_set_error_code(0x7d07);
                            goto LAB_100212b6;
                          }
                          *(undefined2 *)((int)local_5c + (local_8 & 0xffff) * 8) =
                               *(undefined2 *)
                                (CONCAT22(uStack_16,local_18) + (local_50 & 0xffff) * 0xc);
                          *(undefined2 *)((int)local_5c + (local_8 & 0xffff) * 8 + 2) =
                               *(undefined2 *)
                                (CONCAT22(uStack_16,local_18) + 2 + (local_50 & 0xffff) * 0xc);
                          *(undefined2 *)((int)local_5c + (local_8 & 0xffff) * 8 + 4) =
                               *(undefined2 *)
                                (CONCAT22(uStack_16,local_18) + 4 + (local_50 & 0xffff) * 0xc);
                          *(undefined2 *)((int)local_5c + (local_8 & 0xffff) * 8 + 6) =
                               *(undefined2 *)((int)local_70 + (local_50 & 0xffff) * 2);
                          local_8 = CONCAT22(local_8._2_2_,(short)local_8 + 1);
                          goto LAB_100210b7;
                        }
                        pv_set_error_code(0x7d06);
LAB_100212b6:
                        sVar3 = pl_error_code();
                        if (sVar3 == 0) {
                          local_50 = CONCAT22(local_50._2_2_,1);
                          while (uVar4 = local_48, uVar8 = *(ushort *)((int)local_5c + 4),
                                (local_50 & 0xffff) < (local_8 & 0xffff)) {
                            if (*(ushort *)((int)local_5c + (local_50 & 0xffff) * 8 + 4) !=
                                *(ushort *)((int)local_5c + 4)) {
                              local_48 = local_48 & 0xffff0000;
                              uVar4 = local_48;
                              local_48._0_2_ = 0;
                              uVar8 = (ushort)local_48;
                              break;
                            }
                            local_50 = CONCAT22(local_50._2_2_,(short)local_50 + 1);
                          }
                          local_48 = uVar4;
                          local_60 = CONCAT22(local_60._2_2_,uVar8);
                          if ((uVar8 != 0) && ((uint)uVar8 != (local_48 & 0xffff))) {
                            local_48 = CONCAT22(local_48._2_2_,uVar8);
                            pm_script_load_op(0xc,(uint)uVar8);
                          }
                          pm_io_setup(param_1,*(undefined2 **)(local_10 + 0xa0));
                          uVar4 = local_78 >> 0x10;
                          local_78 = local_78 & 0xffff0000;
                          if ((local_68 & 0xffff) != 0) {
                            uVar7 = ((int)local_54[local_58] - (int)local_54[local_58 + -1]) /
                                    (int)(local_68 & 0xffff);
                            local_78 = CONCAT22((short)uVar4,(short)uVar7);
                            if (1 < (uVar7 & 0xffff)) {
                              pm_script_load_op(1,uVar7);
                            }
                          }
                          if (local_44 == (undefined2 *)0x0) {
                            local_44 = pv_malloc(0xc,0);
                            param_2[2] = local_44;
                          }
                          else {
                            pvVar5 = pv_malloc(0xc,0);
                            *(void **)(local_44 + 4) = pvVar5;
                            local_44 = *(undefined2 **)(local_44 + 4);
                          }
                          if (local_44 != (undefined2 *)0x0) {
                            *(undefined4 *)(local_44 + 4) = 0;
                            *local_44 = (undefined2)local_78;
                            local_44[1] = (short)local_8;
                            pvVar5 = pv_malloc((local_8 & 0xffff) << 2,0);
                            *(void **)(local_44 + 2) = pvVar5;
                            if (*(int *)(local_44 + 2) != 0) {
                              pm_script_load_op(8,CONCAT22((short)((uint)pvVar5 >> 0x10),
                                                           (undefined2)local_68));
                              if (sStack_34 != 0) {
                                pm_script_load_op(10,CONCAT22(extraout_var_10,sStack_34));
                              }
                              local_50 = local_50 & 0xffff0000;
                              local_7c = 0;
                              local_60 = local_60 & 0xffff0000;
                              while ((local_60 & 0xffff) < (local_8 & 0xffff)) {
                                uVar4 = (uint)*(ushort *)((int)local_5c + (local_60 & 0xffff) * 8) -
                                        (int)local_7c;
                                local_50 = CONCAT22(local_50._2_2_,(short)uVar4);
                                if ((uVar4 & 0xffff) != 0) {
                                  pm_script_load_op(0xb,uVar4);
                                }
                                if ((uint)*(ushort *)((int)local_5c + (local_60 & 0xffff) * 8 + 4)
                                    != (local_48 & 0xffff)) {
                                  sVar3 = *(short *)((int)local_5c + (local_60 & 0xffff) * 8 + 4);
                                  local_48 = CONCAT22(local_48._2_2_,sVar3);
                                  if (sVar3 == 0) {
                                    local_48 = CONCAT22(local_48._2_2_,1);
                                  }
                                  pm_script_load_op(0xc,CONCAT22((short)((uint)local_5c >> 0x10),
                                                                 (ushort)local_48));
                                }
                                if ((local_48 & 0xffff) != 0) {
                                  iVar9 = (*(ushort *)((int)local_5c + (local_60 & 0xffff) * 8 + 2)
                                          + 1) - (uint)*(ushort *)
                                                        ((int)local_5c + (local_60 & 0xffff) * 8);
                                  uVar2 = (undefined2)(iVar9 / (int)(local_48 & 0xffff));
                                  local_50 = CONCAT22(local_50._2_2_,uVar2);
                                  pm_script_load_op(0xd,CONCAT22((short)((uint)(iVar9 % (int)(
                                                  local_48 & 0xffff)) >> 0x10),uVar2));
                                }
                                local_7c = *(short *)((int)local_5c + (local_60 & 0xffff) * 8) +
                                           (short)local_50 * (short)local_48;
                                *(short *)(*(int *)(local_44 + 2) + 2 + (local_60 & 0xffff) * 4) =
                                     (short)local_50;
                                *(undefined2 *)(*(int *)(local_44 + 2) + (local_60 & 0xffff) * 4) =
                                     *(undefined2 *)((int)local_5c + (local_60 & 0xffff) * 8 + 6);
                                *param_9 = *param_9 + (local_78 & 0xffff) * (local_50 & 0xffff);
                                local_60 = CONCAT22(local_60._2_2_,(short)local_60 + 1);
                              }
                              uVar8 = (sStack_36 + sStack_32) - local_7c;
                              local_50 = CONCAT22(local_50._2_2_,uVar8);
                              if (uVar8 != 0) {
                                pm_script_load_op(0xb,(uint)uVar8);
                              }
                              if (1 < (local_78 & 0xffff)) {
                                pm_script_load_op(2,0);
                              }
                            }
                          }
                        }
                      }
                      local_58 = local_58 + 1;
                    }
                    if ((local_6c & 0xffff) == 0) {
                      pm_script_load_op(0x11,0);
                      pm_io_setup(param_1,*(undefined2 **)(local_10 + 0xb8));
                    }
                    uVar2 = pl_error_code();
                    local_50 = CONCAT22(local_50._2_2_,uVar2);
                    pv_free((void *)CONCAT22(uStack_16,local_18),0);
                    local_18 = 0;
                    uStack_16 = 0;
                    pv_free(local_5c,0);
                    local_5c = (void *)0x0;
                    pv_free(local_54,0);
                    local_54 = (short *)0x0;
                    pv_free(local_70,0);
                    local_70 = (void *)0x0;
                    pv_set_error_code((short)local_50);
                    if ((local_50 & 0xffff) == 0) {
                      if (local_1c != 0) {
                        pm_script_load_op(0x16,0);
                      }
                      if (*(short *)(DAT_10043330 + 0x20 + param_1 * 0x2c) == 0) {
                        if (1 < param_4) {
                          pm_script_load_op(2,0);
                        }
                      }
                      else {
                        pm_script_load_op(2,0);
                        pm_script_load_op(2,0);
                      }
                      if (local_20 == 2) {
                        pm_io_setup(param_1,*(undefined2 **)(local_10 + 0xd0));
                        pm_script_load_op(6,0);
                        pm_io_setup(param_1,*(undefined2 **)(local_10 + 0xe8));
                      }
                      if (((sStack_22 == 4) || (sStack_22 == 5)) || (sStack_22 == 3)) {
                        pm_script_load_op(0x12,0);
                      }
                      pm_script_load_op(0,0);
                      if (DAT_10043ca6 <= DAT_10043ca4) {
                        pv_set_error_code(32000);
                      }
                      *(ushort *)(param_2 + 1) = DAT_10043ca4 / 3;
                      sVar3 = pl_error_code();
                      if (sVar3 == 0) {
                        iVar9 = 1;
                      }
                      else {
                        iVar9 = (uint)(ushort)(sVar3 >> 0xf) << 0x10;
                      }
                    }
                    else {
                      iVar9 = (uint)extraout_var_06 << 0x10;
                    }
                  }
                }
              }
            }
          }
        }
        else {
          uVar2 = (undefined2)((uint)&local_3c >> 0x10);
          uVar2 = (**(code **)(DAT_10043330 + 0x10 + param_1 * 0x2c))
                            (CONCAT22(uVar2,*(undefined2 *)(DAT_10043330 + 4 + param_1 * 0x2c)),
                             CONCAT22(uVar2,param_4),param_5 & 0xffff,param_6,
                             CONCAT22(uVar2,param_7),param_8,param_9,&local_3c);
          pv_set_error_code(uVar2);
          sVar3 = pl_error_code();
          if (sVar3 == 0) {
            iVar9 = 1;
          }
          else {
            iVar9 = (uint)(ushort)(sVar3 >> 0xf) << 0x10;
          }
        }
      }
    }
    else {
      pv_set_error_code(0x7d01);
      iVar9 = (uint)extraout_var_00 << 0x10;
    }
  }
  return iVar9;
}



/* ================================================================
 * Function: pm_script_alloc
 * Address:  10021818
 * ================================================================ */

/* __stdcall pm_script_alloc,8 */

bool pm_script_alloc(uint param_1,int *param_2)

{
  int iVar1;
  void *pvVar2;
  
                    /* 0x21818  408  _pm_script_alloc@8 */
  pvVar2 = pv_malloc((param_1 & 0xffff) * 3 + 0xc,0);
  *param_2 = (int)pvVar2;
  iVar1 = *param_2;
  if (iVar1 != 0) {
    *(int *)*param_2 = *param_2 + 0xc;
    *(undefined2 *)(*param_2 + 4) = 0;
    *(undefined4 *)(*param_2 + 8) = 0;
  }
  return iVar1 != 0;
}



/* ================================================================
 * Function: pm_script_send
 * Address:  10021871
 * ================================================================ */

/* __stdcall pm_script_send,8 */

undefined4 pm_script_send(short param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
                    /* 0x21871  413  _pm_script_send@8 */
  uVar1 = pl_cam_check(param_1);
  if ((uVar1 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = pm_cam_write_read(param_1,0x3d,*(short *)(param_2 + 1) * 3,(char *)*param_2,(LPVOID)0x0)
    ;
    if ((uVar1 & 0xffff) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}



/* ================================================================
 * Function: pi_rs170_get_param
 * Address:  100218d0
 * ================================================================ */

/* __stdcall pi_rs170_get_param,16 */

undefined2 pi_rs170_get_param(short param_1,short param_2,short param_3,undefined4 param_4)

{
  int iVar1;
  undefined2 uVar2;
  
                    /* 0x218d0  254  _pi_rs170_get_param@16 */
  iVar1 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
  if (iVar1 == 0) {
    pv_set_error_code(0xbcf);
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(iVar1 + 0x4c))(iVar1,(int)param_2,(int)param_3,param_4);
  }
  return uVar2;
}



/* ================================================================
 * Function: pi_rs170_initialize
 * Address:  10021925
 * ================================================================ */

/* __stdcall pi_rs170_initialize,8 */

bool pi_rs170_initialize(short param_1,uint *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
                    /* 0x21925  255  _pi_rs170_initialize@8 */
  iVar3 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
  if (iVar3 != 0) {
    (**(code **)(iVar3 + 0xc))(iVar3);
    sVar1 = (**(code **)(iVar3 + 0x22c))(iVar3);
    *param_2 = 0;
    if ((((sVar1 == 0x12) || (sVar1 == 10)) || (sVar1 == 0xf)) ||
       ((sVar1 == 5 && (iVar2 = (**(code **)(iVar3 + 0x300))(iVar3), iVar2 == 5)))) {
      (**(code **)(iVar3 + 0x3e0))(iVar3,0);
      (**(code **)(iVar3 + 0x418))(iVar3,0);
      (**(code **)(iVar3 + 0x420))(iVar3,1);
      iVar2 = (**(code **)(iVar3 + 4))(iVar3);
      if (iVar2 == 0) {
        *param_2 = *param_2 | 1;
      }
      (**(code **)(iVar3 + 0x450))(iVar3,2);
      iVar2 = (**(code **)(iVar3 + 4))(iVar3);
      if (iVar2 == 0) {
        *param_2 = *param_2 | 1;
      }
      (**(code **)(iVar3 + 0x450))(iVar3,0);
    }
    else if (sVar1 == 5) {
      (**(code **)(iVar3 + 0x3e0))(iVar3,0);
      (**(code **)(iVar3 + 0x420))(iVar3,1);
      (**(code **)(iVar3 + 0x418))(iVar3,0);
      iVar3 = (**(code **)(iVar3 + 4))(iVar3);
      if (iVar3 == 0) {
        *param_2 = *param_2 | 1;
      }
    }
    return *param_2 == 0;
  }
  pv_set_error_code(0xbcf);
  return false;
}



/* ================================================================
 * Function: pi_rs170_setlut
 * Address:  10021aa4
 * ================================================================ */

/* __stdcall pi_rs170_setlut,20 */

int pi_rs170_setlut(short param_1,undefined2 param_2,undefined1 *param_3,short param_4,short param_5
                   )

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined2 extraout_var;
  int iVar3;
  ushort extraout_var_00;
  undefined2 uVar4;
  
                    /* 0x21aa4  257  _pi_rs170_setlut@20 */
  iVar3 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
  if (iVar3 == 0) {
    pv_set_error_code(0xbcf);
    iVar3 = (uint)extraout_var_00 << 0x10;
  }
  else {
    (**(code **)(iVar3 + 0x55c))(iVar3,(int)param_4);
    (**(code **)(iVar3 + 0x564))(iVar3,(int)param_5);
    if (param_3 == (undefined1 *)0x0) {
      puVar1 = pv_malloc(0x10000,0);
      pi_calculate_lut(param_2,puVar1,param_4,param_5);
      (**(code **)(iVar3 + 0x3a0))(iVar3,0);
      (**(code **)(iVar3 + 0x3d0))(iVar3,puVar1);
      uVar2 = pv_free(puVar1,0);
      uVar4 = (undefined2)((uint)uVar2 >> 0x10);
    }
    else {
      pi_calculate_lut(param_2,param_3,param_4,param_5);
      (**(code **)(iVar3 + 0x3a0))(iVar3,0);
      (**(code **)(iVar3 + 0x3d0))(iVar3,param_3);
      uVar4 = extraout_var;
    }
    iVar3 = CONCAT22(uVar4,1);
  }
  return iVar3;
}



/* ================================================================
 * Function: pi_calculate_lut
 * Address:  10021b9c
 * ================================================================ */

/* WARNING: Removing unreachable block (ram,0x10021cb4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* __stdcall pi_calculate_lut,16 */

undefined4 pi_calculate_lut(short param_1,undefined1 *param_2,undefined2 param_3,short param_4)

{
  float fVar1;
  undefined1 uVar2;
  undefined1 *extraout_EAX;
  ushort extraout_var;
  undefined1 *puVar3;
  undefined1 *local_18;
  undefined1 *local_14;
  undefined1 *local_10;
  
                    /* 0x21b9c  175  _pi_calculate_lut@16 */
  local_14 = (undefined1 *)0x0;
  local_10 = (undefined1 *)0x1000;
  switch(param_3) {
  case 0:
    local_14 = (undefined1 *)0x0;
    local_10 = (undefined1 *)0x100;
    break;
  case 1:
    local_14 = (undefined1 *)0x2;
    local_10 = (undefined1 *)0x200;
    break;
  case 2:
    local_14 = (undefined1 *)0x4;
    local_10 = (undefined1 *)0x400;
    break;
  case 3:
    local_14 = (undefined1 *)0x8;
    local_10 = (undefined1 *)0x800;
    break;
  case 4:
    local_14 = (undefined1 *)0x10;
    local_10 = (undefined1 *)0x1000;
    break;
  case 5:
    local_14 = (undefined1 *)0x20;
    local_10 = (undefined1 *)0x2000;
    break;
  case 6:
    local_14 = (undefined1 *)0x40;
    local_10 = (undefined1 *)0x4000;
    break;
  case 7:
    local_14 = (undefined1 *)0x80;
    local_10 = (undefined1 *)0x8000;
  }
  local_10 = (undefined1 *)((int)local_10 - (int)param_4);
  if ((undefined1 *)0x1000 < local_10) {
    local_10 = (undefined1 *)0x1000;
  }
  for (local_18 = (undefined1 *)0x0; (local_18 < local_14 && (local_18 < (undefined1 *)0x10000));
      local_18 = local_18 + 1) {
    *param_2 = 0;
    param_2 = param_2 + 1;
  }
  fVar1 = (float)local_10 - (float)(int)local_14;
  puVar3 = local_10;
  switch(param_1) {
  case 0:
    puVar3 = (undefined1 *)0x0;
    local_18 = local_14;
    while ((local_18 < local_10 && (local_18 < (undefined1 *)0x10000))) {
      uVar2 = ftol();
      *param_2 = uVar2;
      param_2 = param_2 + 1;
      puVar3 = local_18 + 1;
      local_18 = puVar3;
    }
    break;
  case 1:
    for (local_18 = local_14;
        (puVar3 = local_18, local_18 < local_10 && (local_18 < (undefined1 *)0x10000));
        local_18 = local_18 + 1) {
      uVar2 = ftol();
      *param_2 = uVar2;
      param_2 = param_2 + 1;
    }
    break;
  case 2:
    puVar3 = (undefined1 *)((uint)CONCAT21(param_1 >> 0xf,fVar1 < (float)_DAT_100260f0) << 8);
    if (fVar1 >= (float)_DAT_100260f0) {
      log((double)(fVar1 + _DAT_100260fc));
      puVar3 = extraout_EAX;
    }
    local_18 = local_14;
    while ((local_18 < local_10 && (local_18 < (undefined1 *)0x10000))) {
      log((double)(local_18 + (1 - (int)local_14)));
      uVar2 = ftol();
      *param_2 = uVar2;
      param_2 = param_2 + 1;
      puVar3 = local_18 + 1;
      local_18 = puVar3;
    }
    break;
  case 3:
    if ((float)_DAT_100260f0 <= fVar1) {
      log((double)(fVar1 + _DAT_100260fc));
    }
    puVar3 = local_14;
    for (local_18 = local_14;
        (local_18 < local_10 && (puVar3 = local_18, local_18 < (undefined1 *)0x10000));
        local_18 = local_18 + 1) {
      log((double)(local_18 + (1 - (int)local_14)));
      uVar2 = ftol();
      *param_2 = uVar2;
      puVar3 = param_2 + 1;
      param_2 = puVar3;
    }
    break;
  case 4:
    pow(4096.0,2.51);
    puVar3 = (undefined1 *)((uint)extraout_var << 0x10);
    local_18 = local_14;
    while ((local_18 < local_10 && (local_18 < (undefined1 *)0x10000))) {
      pow((double)local_18,2.51);
      uVar2 = ftol();
      *param_2 = uVar2;
      param_2 = param_2 + 1;
      puVar3 = local_18 + 1;
      local_18 = puVar3;
    }
  }
  return CONCAT22((short)((uint)puVar3 >> 0x10),1);
}



/* ================================================================
 * Function: pi_rs170_setpan
 * Address:  100221a8
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* __stdcall pi_rs170_setpan,12 */

int pi_rs170_setpan(short param_1,short param_2,short param_3)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  ushort extraout_var;
  int iVar5;
  undefined2 extraout_var_00;
  ushort extraout_var_01;
  undefined4 local_8;
  
                    /* 0x221a8  258  _pi_rs170_setpan@12 */
  local_8 = 5;
  iVar5 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
  if (iVar5 == 0) {
    pv_set_error_code(0xbcf);
    iVar5 = (uint)extraout_var_01 << 0x10;
  }
  else {
    iVar3 = (**(code **)(iVar5 + 0x21c))(iVar5);
    iVar4 = (**(code **)(iVar5 + 0x220))(iVar5);
    if ((iVar3 == 0) || (iVar4 == 0)) {
      pv_set_error_code(0xbd3);
      iVar5 = (uint)extraout_var << 0x10;
    }
    else {
      dVar1 = (double)(int)param_2 / (double)iVar3;
      dVar2 = (double)(int)param_3 / (double)iVar4;
      if ((dVar1 < _DAT_10026110) && (dVar2 < _DAT_10026110)) {
        local_8 = 1;
      }
      if (((dVar1 < _DAT_10026110) && (_DAT_10026110 < dVar2)) && (dVar2 < _DAT_10026108)) {
        local_8 = 4;
      }
      if (((dVar1 < _DAT_10026110) && (_DAT_10026108 < dVar2)) && (dVar2 <= _DAT_10026100)) {
        local_8 = 7;
      }
      if (((_DAT_10026110 < dVar1) && (dVar1 < _DAT_10026108)) && (dVar2 < _DAT_10026110)) {
        local_8 = 2;
      }
      if ((((_DAT_10026110 < dVar1) && (dVar1 < _DAT_10026108)) && (_DAT_10026110 < dVar2)) &&
         (dVar2 < _DAT_10026108)) {
        local_8 = 5;
      }
      if (((_DAT_10026110 < dVar1) && (dVar1 < _DAT_10026108)) &&
         ((_DAT_10026108 < dVar2 && (dVar2 <= _DAT_10026100)))) {
        local_8 = 8;
      }
      if ((_DAT_10026108 < dVar1) && (dVar2 < _DAT_10026110)) {
        local_8 = 3;
      }
      if (((_DAT_10026108 < dVar1) && (_DAT_10026110 < dVar2)) && (dVar2 < _DAT_10026108)) {
        local_8 = 6;
      }
      if ((_DAT_10026108 < dVar1) && (_DAT_10026108 < dVar2)) {
        local_8 = 9;
      }
      (**(code **)(iVar5 + 0x24))(iVar5,0xab,local_8);
      iVar5 = CONCAT22(extraout_var_00,1);
    }
  }
  return iVar5;
}



/* ================================================================
 * Function: pi_rs170_set_param
 * Address:  1002243c
 * ================================================================ */

/* __stdcall pi_rs170_set_param,12 */

undefined2 pi_rs170_set_param(short param_1,short param_2,undefined4 param_3)

{
  int iVar1;
  undefined2 uVar2;
  
                    /* 0x2243c  256  _pi_rs170_set_param@12 */
  iVar1 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
  if (iVar1 == 0) {
    pv_set_error_code(0xbcf);
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(iVar1 + 0x48))(iVar1,(int)param_2,param_3);
  }
  return uVar2;
}



/* ================================================================
 * Function: pi_rs170_stop
 * Address:  1002248c
 * ================================================================ */

/* __stdcall pi_rs170_stop,4 */

undefined2 pi_rs170_stop(short param_1)

{
  int iVar1;
  undefined2 uVar2;
  
                    /* 0x2248c  260  _pi_rs170_stop@4 */
  iVar1 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
  if (iVar1 == 0) {
    pv_set_error_code(0xbcf);
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(iVar1 + 0x4dc))(iVar1);
  }
  return uVar2;
}



/* ================================================================
 * Function: pi_rs170_start
 * Address:  100224d6
 * ================================================================ */

/* __stdcall pi_rs170_start,4 */

undefined2 pi_rs170_start(short param_1)

{
  int iVar1;
  undefined2 uVar2;
  
                    /* 0x224d6  259  _pi_rs170_start@4 */
  iVar1 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
  if (iVar1 == 0) {
    pv_set_error_code(0xbcf);
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(iVar1 + 0x4d8))(iVar1);
  }
  return uVar2;
}



/* ================================================================
 * Function: pv_rs170_get_param
 * Address:  10022520
 * ================================================================ */

undefined2 pv_rs170_get_param(short param_1,short param_2,short param_3,undefined4 param_4)

{
  undefined2 uVar1;
  uint uVar2;
  
                    /* 0x22520  134  pv_rs170_get_param */
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    uVar1 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = pi_rs170_get_param(param_1,param_2,param_3,param_4);
  }
  return uVar1;
}



/* ================================================================
 * Function: pv_rs170_initialize
 * Address:  1002257d
 * ================================================================ */

uint pv_rs170_initialize(short param_1,uint *param_2)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  
                    /* 0x2257d  136  pv_rs170_initialize */
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    uVar2 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    uVar2 = 0;
  }
  else {
    bVar1 = pi_rs170_initialize(param_1,param_2);
    uVar2 = CONCAT22((short)((uint3)extraout_var >> 8),(short)CONCAT31(extraout_var,bVar1));
  }
  return uVar2;
}



/* ================================================================
 * Function: pv_rs170_setlut
 * Address:  100225d0
 * ================================================================ */

uint pv_rs170_setlut(short param_1,undefined2 param_2,undefined1 *param_3,short param_4,
                    short param_5)

{
  uint uVar1;
  
                    /* 0x225d0  139  pv_rs170_setlut */
  uVar1 = pl_cam_check(param_1);
  if ((uVar1 & 0xffff) == 0) {
    uVar1 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = pi_rs170_setlut(param_1,param_2,param_3,param_4,param_5);
  }
  return uVar1;
}



/* ================================================================
 * Function: pv_rs170_setpan
 * Address:  10022632
 * ================================================================ */

uint pv_rs170_setpan(short param_1,short param_2,short param_3)

{
  uint uVar1;
  
                    /* 0x22632  140  pv_rs170_setpan */
  uVar1 = pl_cam_check(param_1);
  if ((uVar1 & 0xffff) == 0) {
    uVar1 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = pi_rs170_setpan(param_1,param_2,param_3);
  }
  return uVar1;
}



/* ================================================================
 * Function: pv_rs170_set_param
 * Address:  1002268b
 * ================================================================ */

undefined2 pv_rs170_set_param(short param_1,short param_2,undefined4 param_3)

{
  undefined2 uVar1;
  uint uVar2;
  
                    /* 0x2268b  135  pv_rs170_set_param */
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    uVar1 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = pi_rs170_set_param(param_1,param_2,param_3);
  }
  return uVar1;
}



/* ================================================================
 * Function: pv_rs170_stop
 * Address:  100226e3
 * ================================================================ */

undefined2 pv_rs170_stop(short param_1)

{
  undefined2 uVar1;
  uint uVar2;
  
                    /* 0x226e3  138  pv_rs170_stop */
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    uVar1 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = pi_rs170_stop(param_1);
  }
  return uVar1;
}



/* ================================================================
 * Function: pv_rs170_start
 * Address:  10022732
 * ================================================================ */

undefined2 pv_rs170_start(short param_1)

{
  undefined2 uVar1;
  uint uVar2;
  
                    /* 0x22732  137  pv_rs170_start */
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    uVar1 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = pi_rs170_start(param_1);
  }
  return uVar1;
}



/* ================================================================
 * Function: FUN_10022790
 * Address:  10022790
 * ================================================================ */

undefined4 FUN_10022790(void)

{
  return 1;
}



/* ================================================================
 * Function: FUN_100227a0
 * Address:  100227a0
 * ================================================================ */

undefined4 FUN_100227a0(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 == 0x66) || (param_1 == 100)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ================================================================
 * Function: FUN_100227bc
 * Address:  100227bc
 * ================================================================ */

void FUN_100227bc(void)

{
  return;
}



/* ================================================================
 * Function: FUN_100227c3
 * Address:  100227c3
 * ================================================================ */

undefined4 FUN_100227c3(short param_1,undefined2 *param_2)

{
  HANDLE pvVar1;
  char local_108 [128];
  char local_88 [80];
  char local_38 [39];
  undefined1 local_11;
  undefined4 local_10;
  DWORD local_c;
  HANDLE local_8;
  
  local_10 = 1;
  sprintf(local_88,s_DDI__s___Enter_1004067c,s_NA_in_VC___6_0_1004066c);
  OutputDebugStringA(local_88);
  *param_2 = 0;
  _snprintf(local_38,0x28,s_PMCamera_dIO_1004068c,(int)param_1);
  local_11 = 0;
  pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,local_38);
  *(HANDLE *)(&DAT_10043ae4 + param_1 * 0x1c) = pvVar1;
  _snprintf(local_38,0x28,s_PMCamera_dSOT_1004069c,(int)param_1);
  local_11 = 0;
  pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,local_38);
  *(HANDLE *)(&DAT_10043ae8 + param_1 * 0x1c) = pvVar1;
  _snprintf(local_38,0x28,s_PMCamera_dEOT_100406ac,(int)param_1);
  local_11 = 0;
  pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,local_38);
  *(HANDLE *)(&DAT_10043aec + param_1 * 0x1c) = pvVar1;
  _snprintf(local_38,0x28,s_PMCamera_dAbort_100406bc,(int)param_1);
  local_11 = 0;
  pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,local_38);
  *(HANDLE *)(&DAT_10043af0 + param_1 * 0x1c) = pvVar1;
  if ((((*(int *)(&DAT_10043ae4 + param_1 * 0x1c) == 0) ||
       (*(int *)(&DAT_10043ae8 + param_1 * 0x1c) == 0)) ||
      (*(int *)(&DAT_10043aec + param_1 * 0x1c) == 0)) ||
     (*(int *)(&DAT_10043af0 + param_1 * 0x1c) == 0)) {
    local_c = GetLastError();
    *param_2 = 0x32;
    sprintf(local_108,s__s___nHdev__d__nErr__d__100406dc,s_NA_in_VC___6_0_100406cc,(int)param_1,
            param_2);
    OutputDebugStringA(local_108);
    local_8 = (HANDLE)FUN_10022992((int)param_1);
    CloseHandle(local_8);
    local_10 = 0;
  }
  return local_10;
}



/* ================================================================
 * Function: FUN_10022992
 * Address:  10022992
 * ================================================================ */

undefined4 FUN_10022992(int param_1)

{
  return *(undefined4 *)(&DAT_100433ac + param_1 * 0x74);
}



/* ================================================================
 * Function: FUN_100229a5
 * Address:  100229a5
 * ================================================================ */

void FUN_100229a5(undefined4 *param_1)

{
  HANDLE hObject;
  
  hObject = (HANDLE)*param_1;
  *param_1 = 0;
  CloseHandle(hObject);
  return;
}



/* ================================================================
 * Function: FUN_100229ca
 * Address:  100229ca
 * ================================================================ */

void FUN_100229ca(short param_1,int param_2)

{
  char local_58 [80];
  HANDLE local_8;
  
  sprintf(local_58,s_DDI__s___Enter_10040708,s_NA_in_VC___6_0_100406f8);
  OutputDebugStringA(local_58);
  if (param_2 != 0) {
    local_8 = (HANDLE)FUN_10022992((int)param_1);
    CloseHandle(local_8);
  }
  CloseHandle(*(HANDLE *)(&DAT_10043ae4 + param_1 * 0x1c));
  CloseHandle(*(HANDLE *)(&DAT_10043ae8 + param_1 * 0x1c));
  CloseHandle(*(HANDLE *)(&DAT_10043aec + param_1 * 0x1c));
  CloseHandle(*(HANDLE *)(&DAT_10043af0 + param_1 * 0x1c));
  return;
}



/* ================================================================
 * Function: FUN_10022a64
 * Address:  10022a64
 * ================================================================ */

BOOL FUN_10022a64(short param_1,HANDLE param_2,short *param_3,short *param_4)

{
  char local_8c [128];
  BOOL local_c;
  DWORD local_8;
  
  *(short *)(&DAT_10043ae0 + param_1 * 0x1c) = param_1;
  local_c = DeviceIoControl(param_2,0x223e88,&DAT_10043ae0 + param_1 * 0x1c,0x1c,param_3,2,&local_8,
                            (LPOVERLAPPED)0x0);
  if ((local_c == 0) || (*param_3 != 0)) {
    sprintf(local_8c,s__s___nHdev__d__nErr__d__ret_valu_10040728,s_NA_in_VC___6_0_10040718,
            (int)param_1,param_3,local_c);
    OutputDebugStringA(local_8c);
  }
  else {
    FUN_10022b12((int)param_1,1);
    *param_4 = param_1;
  }
  return local_c;
}



/* ================================================================
 * Function: FUN_10022b12
 * Address:  10022b12
 * ================================================================ */

void FUN_10022b12(int param_1,undefined4 param_2)

{
  *(undefined4 *)(&DAT_10043348 + param_1 * 0x74) = param_2;
  return;
}



/* ================================================================
 * Function: pd_cam_close
 * Address:  10022b28
 * ================================================================ */

/* __stdcall pd_cam_close,4 */

undefined2 pd_cam_close(short param_1)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  undefined4 uVar3;
  char local_f0 [80];
  DWORD local_a0;
  char local_9c [128];
  int local_1c [3];
  undefined2 local_10 [2];
  int local_c;
  HANDLE local_8;
  
                    /* 0x22b28  125  _pd_cam_close@4 */
  sprintf(local_f0,s_DDI__s___Enter_10040760,s_NA_in_VC___6_0_10040750);
  OutputDebugStringA(local_f0);
  iVar2 = FUN_10022cf2((int)param_1);
  if (iVar2 == 0) {
    local_10[0] = 0x1f;
  }
  else {
    bVar1 = FUN_10022cc2((int)param_1);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      local_10[0] = 0x11;
    }
    else if (DAT_10043a88 == 0) {
      local_8 = (HANDLE)FUN_10022992((int)param_1);
      DeviceIoControl(local_8,0x223e94,(LPVOID)0x0,0,local_1c,0xc,&local_a0,(LPOVERLAPPED)0x0);
      sprintf(local_9c,s_Camstat____d_10040770,local_1c[0]);
      OutputDebugStringA(local_9c);
      iVar2 = FUN_100227a0(local_1c[0]);
      if (iVar2 == 0) {
        OutputDebugStringA(s_DDI__pd_cam_close___NOT_BUSY___N_100407c0);
      }
      else {
        OutputDebugStringA(s_DDI__pd_cam_close___We_are_in_th_10040780);
        pd_driver_set_image_data_idle(param_1);
      }
      FUN_10022b12((int)param_1,0);
      FUN_100229ca(param_1,0);
      DeviceIoControl(local_8,0x223e84,(LPVOID)0x0,0,(LPVOID)0x0,0,&local_a0,(LPOVERLAPPED)0x0);
      CloseHandle(local_8);
      local_10[0] = 0;
    }
    else {
      uVar3 = FUN_10022cdd(param_1);
      local_c = (int)(short)uVar3;
      local_8 = (HANDLE)FUN_10022992((int)param_1);
      FUN_10022b12((int)param_1,0);
      DeviceIoControl(local_8,0x223e84,&local_c,4,local_10,2,&local_a0,(LPOVERLAPPED)0x0);
      CloseHandle(local_8);
    }
  }
  return local_10[0];
}



/* ================================================================
 * Function: FUN_10022cc2
 * Address:  10022cc2
 * ================================================================ */

bool FUN_10022cc2(int param_1)

{
  return *(int *)(&DAT_10043348 + param_1 * 0x74) == 1;
}



/* ================================================================
 * Function: FUN_10022cdd
 * Address:  10022cdd
 * ================================================================ */

undefined4 FUN_10022cdd(short param_1)

{
  return CONCAT22((short)((uint)(param_1 * 0x74) >> 0x10),
                  *(undefined2 *)(&DAT_100433b0 + param_1 * 0x74));
}



/* ================================================================
 * Function: FUN_10022cf2
 * Address:  10022cf2
 * ================================================================ */

undefined4 FUN_10022cf2(int param_1)

{
  undefined4 local_8;
  
  if ((param_1 < 0) || (0xf < param_1)) {
    local_8 = 0;
  }
  else {
    local_8 = 1;
  }
  return local_8;
}



/* ================================================================
 * Function: pd_cam_open
 * Address:  10022d1b
 * ================================================================ */

/* __stdcall pd_cam_open,8 */

uint pd_cam_open(char *param_1,short *param_2)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined3 extraout_var;
  undefined4 uVar4;
  int iVar5;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  BOOL BVar6;
  char local_f4 [80];
  char local_a4 [128];
  undefined4 local_24;
  DWORD local_20;
  BOOL local_1c;
  int local_18;
  uint local_14;
  ushort local_10 [2];
  short local_c;
  HANDLE local_8;
  
                    /* 0x22d1b  145  _pd_cam_open@8 */
  sprintf(local_f4,s_DDI__s___Enter_10040804,s_NA_in_VC___6_0_100407f4);
  OutputDebugStringA(local_f4);
  local_c = FUN_10023102(param_1);
  if (local_c == -1) {
    uVar3 = 0xffff0003;
  }
  else {
    bVar1 = FUN_10022cc2((int)local_c);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      uVar4 = FUN_10023169((int)local_c);
      local_10[0] = (ushort)uVar4;
      if (local_10[0] == 0) {
        if (DAT_10043a88 == 0) {
          local_8 = (HANDLE)FUN_10022992((int)local_c);
          iVar5 = FUN_100227c3(local_c,local_10);
          if (iVar5 == 0) {
            return (uint)local_10[0];
          }
          local_1c = FUN_10022a64(local_c,local_8,(short *)local_10,param_2);
          if ((local_1c == 0) || (local_10[0] != 0)) {
            if (local_10[0] == 0x32) {
              sprintf(local_a4,s_Stage_1_open_failed___driver_rep_10040814,0x32);
              OutputDebugStringA(local_a4);
              FUN_10022b12((int)local_c,1);
              uVar2 = pd_cam_close(local_c);
              local_1c = (BOOL)(char)uVar2;
              if (local_1c == 0) {
                sprintf(local_a4,s_Stage_1_open_recovery___close_fa_1004086c);
                OutputDebugStringA(local_a4);
                FUN_100229ca(local_c,0);
                iVar5 = FUN_100227c3(local_c,local_10);
                if (iVar5 == 0) {
                  sprintf(local_a4,s_Stage_2_open___Creating_objects_f_100408ac,
                          (int)(short)local_10[0]);
                  OutputDebugStringA(local_a4);
                  return CONCAT22(extraout_var_00,local_10[0]);
                }
                local_1c = FUN_10022a64(local_c,local_8,(short *)local_10,param_2);
                if ((local_1c == 0) || (local_10[0] != 0)) {
                  sprintf(local_a4,s_Stage_2_open_failed___recovery_i_100408e4,
                          (int)(short)local_10[0]);
                  OutputDebugStringA(local_a4);
                  local_1c = FUN_100229ca(local_c,1);
                }
              }
              else {
                sprintf(local_a4,s_Stage_1_open_recovery___close_su_1004091c);
                OutputDebugStringA(local_a4);
                local_1c = FUN_100229ca(local_c,1);
              }
            }
            else {
              sprintf(local_a4,s_Stage_1_open_failed___no_recover_10040974,(int)(short)local_10[0]);
              OutputDebugStringA(local_a4);
              local_1c = FUN_100229ca(local_c,1);
            }
          }
          uVar2 = (undefined2)((uint)local_1c >> 0x10);
        }
        else {
          local_8 = (HANDLE)FUN_10022992((int)local_c);
          local_10[0] = 0;
          uVar4 = FUN_10022cdd(local_c);
          local_18 = (int)(short)uVar4;
          local_14 = FUN_100230ed(local_c);
          local_14 = local_14 & 0xffff;
          local_24 = 0x223e88;
          DeviceIoControl(local_8,0x223e88,&local_18,8,local_10,2,&local_20,(LPOVERLAPPED)0x0);
          if (local_10[0] == 0) {
            FUN_10022b12((int)local_c,1);
            *param_2 = local_c;
            uVar2 = extraout_var_01;
          }
          else if (local_10[0] == 0x32) {
            FUN_10022b12((int)local_c,1);
            uVar2 = pd_cam_close(local_c);
            local_1c = (BOOL)(char)uVar2;
            if (local_1c == 0) {
              local_8 = (HANDLE)FUN_10022992((int)local_c);
              local_10[0] = 0;
              local_1c = DeviceIoControl(local_8,0x223e88,&local_18,8,local_10,2,&local_20,
                                         (LPOVERLAPPED)0x0);
              if ((local_1c == 0) || (local_10[0] != 0)) {
                local_8 = (HANDLE)FUN_10022992((int)local_c);
                param_2 = (short *)CloseHandle(local_8);
              }
              else {
                FUN_10022b12((int)local_c,1);
                *param_2 = local_c;
              }
              uVar2 = (undefined2)((uint)param_2 >> 0x10);
            }
            else {
              local_8 = (HANDLE)FUN_10022992((int)local_c);
              BVar6 = CloseHandle(local_8);
              uVar2 = (undefined2)((uint)BVar6 >> 0x10);
            }
          }
          else {
            local_8 = (HANDLE)FUN_10022992((int)local_c);
            BVar6 = CloseHandle(local_8);
            uVar2 = (undefined2)((uint)BVar6 >> 0x10);
          }
        }
        uVar3 = CONCAT22(uVar2,local_10[0]);
      }
      else {
        uVar3 = (uint)(short)local_10[0];
      }
    }
    else {
      uVar3 = CONCAT22((short)((uint3)extraout_var >> 8),4);
    }
  }
  return uVar3;
}



/* ================================================================
 * Function: FUN_100230ed
 * Address:  100230ed
 * ================================================================ */

undefined4 FUN_100230ed(short param_1)

{
  return CONCAT22((short)((uint)(param_1 * 0x74) >> 0x10),
                  *(undefined2 *)(&DAT_100433b4 + param_1 * 0x74));
}



/* ================================================================
 * Function: FUN_10023102
 * Address:  10023102
 * ================================================================ */

short FUN_10023102(char *param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  
  sVar1 = 0;
  while( true ) {
    sVar2 = FUN_1002315e();
    if (sVar2 <= sVar1) {
      return -1;
    }
    iVar3 = strncmp(&DAT_1004334c + sVar1 * 0x74,param_1,0x20);
    if (iVar3 == 0) break;
    sVar1 = sVar1 + 1;
  }
  return sVar1;
}



/* ================================================================
 * Function: FUN_1002315e
 * Address:  1002315e
 * ================================================================ */

undefined2 FUN_1002315e(void)

{
  return DAT_10043344;
}



/* ================================================================
 * Function: FUN_10023169
 * Address:  10023169
 * ================================================================ */

undefined4 FUN_10023169(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  char local_fc [64];
  char local_bc [29];
  undefined1 local_9f;
  int local_9c;
  char local_98 [79];
  undefined1 local_49;
  HANDLE local_48;
  char local_44;
  undefined4 local_43;
  
  local_44 = DAT_10043a8c;
  puVar4 = &local_43;
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  *(undefined1 *)((int)puVar4 + 2) = 0;
  SetErrorMode(0x8000);
  FUN_100233d9(param_1,&local_44,0x40);
  _strupr(&local_44);
  pcVar1 = strstr(&local_44,s_PMWDM_100409b0);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = strstr(&local_44,s_PMPCI_100409e4);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = strstr(&local_44,s_PHOTOPCI_10040a18);
      if (pcVar1 != (char *)0x0) {
        _snprintf(local_bc,0x1e,s______s_10040a24,&local_44);
        local_9f = 0;
        local_48 = CreateFileA(local_bc,0,0,(LPSECURITY_ATTRIBUTES)0x0,1,0x4000000,(HANDLE)0x0);
        if (local_48 == (HANDLE)0xffffffff) {
          _snprintf(local_fc,0x40,s_Real_Driver___s__is_not_installe_10040a2c,&local_44);
          return 0x2d;
        }
        FUN_10023401(param_1,local_48);
        DAT_10043a88 = 1;
      }
    }
    else {
      local_48 = (HANDLE)0xffffffff;
      uVar2 = FUN_10022cdd((short)param_1);
      local_9c = (int)(short)uVar2;
      _snprintf(local_bc,0x1e,s_____PMCamera_d_100409ec,local_9c);
      local_9f = 0;
      local_48 = CreateFileA(local_bc,0xc0000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
      if (local_48 == (HANDLE)0xffffffff) {
        _snprintf(local_98,0x50,s_Unable_to_open_device__d_100409fc,local_9c);
        local_49 = 0;
      }
      FUN_10023401(param_1,local_48);
      DAT_10043a88 = 0;
    }
  }
  else {
    local_48 = (HANDLE)0xffffffff;
    uVar2 = FUN_10022cdd((short)param_1);
    local_9c = (int)(short)uVar2;
    _snprintf(local_bc,0x1e,s_____PMCamera_d_100409b8,local_9c);
    local_9f = 0;
    local_48 = CreateFileA(local_bc,0xc0000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
    if (local_48 == (HANDLE)0xffffffff) {
      _snprintf(local_98,0x50,s_Unable_to_open_device__d_100409c8,local_9c);
      local_49 = 0;
    }
    FUN_10023401(param_1,local_48);
    DAT_10043a88 = 0;
  }
  return 0;
}



/* ================================================================
 * Function: FUN_100233d9
 * Address:  100233d9
 * ================================================================ */

char * FUN_100233d9(int param_1,char *param_2,size_t param_3)

{
  strncpy(param_2,&DAT_1004336c + param_1 * 0x74,param_3);
  return param_2;
}



/* ================================================================
 * Function: FUN_10023401
 * Address:  10023401
 * ================================================================ */

void FUN_10023401(int param_1,undefined4 param_2)

{
  *(undefined4 *)(&DAT_100433ac + param_1 * 0x74) = param_2;
  return;
}



/* ================================================================
 * Function: pd_cam_check_com_err
 * Address:  10023417
 * ================================================================ */

/* __stdcall pd_cam_check_com_err,4 */

ushort pd_cam_check_com_err(HANDLE param_1)

{
  DWORD local_41c;
  ushort local_418;
  char local_414 [1024];
  ushort local_14 [6];
  ushort local_8;
  
                    /* 0x23417  117  _pd_cam_check_com_err@4 */
  DeviceIoControl(param_1,0x223e94,(LPVOID)0x0,0,local_14,0xc,&local_41c,(LPOVERLAPPED)0x0);
  local_8 = local_14[0] & 0x7fff;
  sprintf(local_414,s__s____d_10040a60,s_NA_in_VC___6_0_10040a50,(int)(short)local_8);
  OutputDebugStringA(local_414);
  switch(local_8) {
  case 0:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 200:
  case 0xcb:
    local_418 = 0;
    break;
  default:
    if (((short)local_8 < 100) || (199 < (short)local_8)) {
      sprintf(local_414,s__s___Status_returned_was_out_of_r_10040abc,s_NA_in_VC___6_0_10040aac,
              (int)(short)local_8);
      OutputDebugStringA(local_414);
      local_418 = 0x48;
    }
    else if (local_8 == 0x67) {
      local_418 = 0;
    }
    else {
      local_418 = local_8;
    }
    break;
  case 0xc9:
  case 0xca:
  case 0xcc:
  case 0xcd:
  case 0xce:
  case 0xcf:
  case 0xd0:
  case 0xd1:
  case 0xd2:
  case 0xd3:
  case 0xd4:
  case 0xd5:
  case 0xd6:
  case 0xd7:
  case 0xd8:
  case 0xd9:
  case 0xda:
  case 0xdb:
    local_418 = local_8 - 0x68;
    break;
  case 0xdc:
    sprintf(local_414,s__s___Status_returned_was__DDI_ST_10040a7c,s_NA_in_VC___6_0_10040a6c);
    OutputDebugStringA(local_414);
    local_418 = 0x48;
  }
  sprintf(local_414,s__s____d___>__d_10040afc,s_NA_in_VC___6_0_10040aec,(int)(short)local_8,
          (int)(short)local_418);
  OutputDebugStringA(local_414);
  return local_418;
}



/* ================================================================
 * Function: pd_cam_write_read
 * Address:  10023691
 * ================================================================ */

/* __stdcall pd_cam_write_read,24 */

ushort pd_cam_write_read(short param_1,byte param_2,ushort param_3,char *param_4,ushort param_5,
                        LPVOID param_6)

{
  bool bVar1;
  undefined3 extraout_var;
  uint uVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  char local_188c [1024];
  undefined2 local_148c [2];
  byte local_1488 [3];
  undefined1 local_1485 [4105];
  DWORD local_47c;
  DWORD local_478;
  char local_474 [1024];
  int local_74;
  uint local_70;
  uint local_6c;
  char *local_68;
  uint local_64;
  LPVOID local_60;
  int local_5c [3];
  ushort local_50 [2];
  BOOL local_4c;
  HANDLE local_48;
  char local_44;
  undefined4 local_43;
  undefined4 uStackY_30;
  
                    /* 0x23691  146  _pd_cam_write_read@24 */
  FUN_10025d40();
  local_44 = DAT_10043a90;
  puVar6 = &local_43;
  for (iVar5 = 0xf; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  *(undefined1 *)((int)puVar6 + 2) = 0;
  iVar5 = FUN_10022cf2((int)param_1);
  if (iVar5 == 0) {
    local_50[0] = 0x21;
  }
  else {
    bVar1 = FUN_10022cc2((int)param_1);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      local_50[0] = 0x13;
    }
    else if (param_3 == 0) {
      local_50[0] = 10;
    }
    else {
      uVar2 = pl_dd_get_retries(param_1,local_148c);
      if ((uVar2 & 0xffff) == 0) {
        local_50[0] = 0x22;
      }
      else {
        uStackY_30 = 0x1002375d;
        sprintf(local_188c,s_DDI__s___AnHdev___04x__AbCmdClas_10040b20);
        OutputDebugStringA(local_188c);
        if (DAT_10043a88 == 0) {
          local_50[0] = 0;
          memset(local_1488,0,param_3 + 8);
          local_1488[0] = param_2;
          memcpy(local_1485,param_4,(uint)param_3);
          local_48 = (HANDLE)FUN_10022992((int)param_1);
          FUN_100233d9((int)param_1,&local_44,0x40);
          _strupr(&local_44);
          pcVar3 = strstr(&local_44,s_PMWDM_10040bf8);
          if (pcVar3 == (char *)0x0) {
            FUN_100227bc();
            WriteFile(local_48,local_1488,param_3 + 3,&local_47c,(LPOVERLAPPED)0x0);
            local_478 = WaitForSingleObject(*(HANDLE *)(&DAT_10043ae4 + param_1 * 0x1c),3000);
            if ((short)local_50[0] < 1) {
              if (param_5 != 0) {
                local_478 = WaitForSingleObject(*(HANDLE *)(&DAT_10043ae4 + param_1 * 0x1c),1000);
                if (local_478 == 0) {
                  ReadFile(local_48,param_6,(uint)param_5,&local_47c,(LPOVERLAPPED)0x0);
                  FUN_100227bc();
                }
                else {
                  local_50[0] = 0x34;
                }
              }
            }
            else {
              local_50[0] = 0x35;
            }
          }
          else {
            DeviceIoControl(local_48,0x223e94,(LPVOID)0x0,0,local_5c,0xc,&local_47c,
                            (LPOVERLAPPED)0x0);
            sprintf(local_474,s_Camstat____d_10040c00);
            OutputDebugStringA(local_474);
            iVar5 = FUN_100227a0(local_5c[0]);
            if ((iVar5 == 0) || (*param_4 == '.')) {
              OutputDebugStringA(s_DDI__NOT_BUSY___NO_ABORT_NEEDED__10040c40);
            }
            else {
              OutputDebugStringA(s_DDI__We_are_in_the_abort_code_in_10040c10);
              pd_driver_set_image_data_idle(param_1);
            }
            OutputDebugStringA(s___________________NORMAL_DATA____10040c64);
            sprintf(local_474,s___Write_Chars____d___Read_Chars___10040c98);
            OutputDebugStringA(local_474);
            sprintf(local_474,s_WByte_1__5____02X__02X__02X__02X_10040cc0);
            OutputDebugStringA(local_474);
            OutputDebugStringA(s___________________END_NORMAL_DAT_10040ce8);
            FUN_100227bc();
            WriteFile(local_48,local_1488,param_3 + 3,&local_47c,(LPOVERLAPPED)0x0);
            OutputDebugStringA(s_DDI__We_are_in_the_Wait_code_aft_10040d20);
            local_478 = WaitForSingleObject(*(HANDLE *)(&DAT_10043ae4 + param_1 * 0x1c),3000);
            if (local_478 == 0x102) {
              OutputDebugStringA(s_DDI__TIMEOUT_in_Wait_ISR_For_WRI_10040d50);
              local_50[0] = 0x35;
            }
            else {
              local_50[0] = pd_cam_check_com_err(local_48);
              if (param_5 != 0) {
                local_4c = DeviceIoControl(local_48,0x223ef4,(LPVOID)0x0,0,local_50,2,&local_47c,
                                           (LPOVERLAPPED)0x0);
                if (local_4c == 0) {
                  OutputDebugStringA(s_DDI__We_are_skipping_the_sleep_b_10040db4);
                  local_478 = 0;
                }
                else {
                  OutputDebugStringA(s_DDI__We_are_in_the_Wait_code_Bef_10040d84);
                  local_478 = WaitForSingleObject(*(HANDLE *)(&DAT_10043ae4 + param_1 * 0x1c),3000);
                }
                if (local_478 == 0x102) {
                  OutputDebugStringA(s_DDI__TIMEOUT_in_Wait_ISR_For_REA_10040df8);
                  sprintf(local_474,s___Write_Chars____d___Read_Chars___10040e2c);
                  OutputDebugStringA(local_474);
                  sprintf(local_474,s_WByte_1__5____02X__02X__02X__02X_10040e54);
                  OutputDebugStringA(local_474);
                  local_50[0] = 0x34;
                }
                else {
                  ReadFile(local_48,param_6,(uint)param_5,&local_47c,(LPOVERLAPPED)0x0);
                  FUN_100227bc();
                  local_50[0] = pd_cam_check_com_err(local_48);
                }
              }
            }
          }
        }
        else {
          uVar4 = FUN_10022cdd(param_1);
          local_74 = (int)(short)uVar4;
          local_70 = (uint)param_2;
          local_6c = (uint)param_3;
          local_68 = param_4;
          local_64 = (uint)param_5;
          local_60 = param_6;
          local_48 = (HANDLE)FUN_10022992((int)param_1);
          FUN_100227bc();
          DeviceIoControl(local_48,0x223e8c,&local_74,0x18,local_50,2,&local_47c,(LPOVERLAPPED)0x0);
          FUN_100227bc();
        }
      }
    }
  }
  return local_50[0];
}



/* ================================================================
 * Function: pd_ddi_get_all_cam_names
 * Address:  10023cb5
 * ================================================================ */

/* __stdcall pd_ddi_get_all_cam_names,4 */

int pd_ddi_get_all_cam_names(char *param_1)

{
  short sVar1;
  ushort extraout_var;
  int local_8;
  
                    /* 0x23cb5  147  _pd_ddi_get_all_cam_names@4 */
  local_8 = 0;
  while( true ) {
    sVar1 = FUN_1002315e();
    if (sVar1 <= local_8) break;
    FUN_10023cfb(local_8,param_1,0x20);
    param_1 = param_1 + 0x20;
    local_8 = local_8 + 1;
  }
  return (uint)extraout_var << 0x10;
}



/* ================================================================
 * Function: FUN_10023cfb
 * Address:  10023cfb
 * ================================================================ */

char * FUN_10023cfb(int param_1,char *param_2,size_t param_3)

{
  strncpy(param_2,&DAT_1004334c + param_1 * 0x74,param_3);
  return param_2;
}



/* ================================================================
 * Function: pd_ddi_get_total_cams
 * Address:  10023d23
 * ================================================================ */

/* __stdcall pd_ddi_get_total_cams,4 */

undefined2 pd_ddi_get_total_cams(undefined2 *param_1)

{
  undefined2 uVar1;
  
                    /* 0x23d23  148  _pd_ddi_get_total_cams@4 */
  uVar1 = FUN_1002315e();
  *param_1 = uVar1;
  return 0;
}



/* ================================================================
 * Function: pd_ddi_get_ver
 * Address:  10023d38
 * ================================================================ */

/* __stdcall pd_ddi_get_ver,4 */

uint pd_ddi_get_ver(undefined2 *param_1)

{
                    /* 0x23d38  149  _pd_ddi_get_ver@4 */
  *param_1 = 0x430;
  return (uint)param_1 & 0xffff0000;
}



/* ================================================================
 * Function: pd_ddi_init
 * Address:  10023d4a
 * ================================================================ */

/* __stdcall pd_ddi_init,0 */

uint pd_ddi_init(void)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint uVar2;
  char local_10c [260];
  int local_8;
  
                    /* 0x23d4a  150  _pd_ddi_init@0 */
  bVar1 = FUN_10023d9e();
  if (CONCAT31(extraout_var,bVar1) == 0) {
    bVar1 = FUN_10023ff7(0,local_10c,0x104);
    local_8 = CONCAT31(extraout_var_00,bVar1);
    if (local_8 == 0) {
      uVar2 = CONCAT22((short)((uint3)extraout_var_00 >> 8),0x36b1);
    }
    else {
      FUN_10023dbe(local_10c);
      uVar2 = FUN_10023daf(1);
      uVar2 = uVar2 & 0xffff0000;
    }
  }
  else {
    uVar2 = CONCAT22((short)((uint3)extraout_var >> 8),4);
  }
  return uVar2;
}



/* ================================================================
 * Function: FUN_10023d9e
 * Address:  10023d9e
 * ================================================================ */

bool FUN_10023d9e(void)

{
  return DAT_10043340 == 1;
}



/* ================================================================
 * Function: FUN_10023daf
 * Address:  10023daf
 * ================================================================ */

void FUN_10023daf(undefined4 param_1)

{
  DAT_10043340 = param_1;
  return;
}



/* ================================================================
 * Function: FUN_10023dbe
 * Address:  10023dbe
 * ================================================================ */

void FUN_10023dbe(LPCSTR param_1)

{
  char local_90 [15];
  undefined1 local_81;
  UINT local_80;
  UINT local_7c;
  DWORD local_78;
  CHAR local_74 [32];
  int local_54;
  UINT local_50;
  UINT local_4c;
  int local_48;
  CHAR local_44 [64];
  
  local_48 = 0;
  for (local_54 = 0; local_54 <= local_48; local_54 = local_54 + 1) {
    _snprintf(local_90,0x10,s_CAMERA__d_10040e7c,local_54 + 1);
    local_81 = 0;
    local_78 = GetPrivateProfileStringA(local_90,&DAT_10040e88,&DAT_10043a94,local_74,0x20,param_1);
    if ((0 < (int)local_78) && (local_48 < 0x10)) {
      FUN_10023f6b(local_54,local_74);
      local_78 = GetPrivateProfileStringA
                           (local_90,s_driver_10040e90,&DAT_10043a98,local_44,0x40,param_1);
      FUN_10023fbc(local_54,local_44);
      local_7c = GetPrivateProfileIntA(local_90,&DAT_10040e98,0x220,param_1);
      FUN_10023f8e(local_54,(short)local_7c);
      local_50 = GetPrivateProfileIntA(local_90,&DAT_10040ea0,1,param_1);
      FUN_10023f44(local_54,(short)local_50);
      local_80 = GetPrivateProfileIntA(local_90,s_timeout_10040ea8,0x25,param_1);
      FUN_10023fa6(local_54,local_80);
      local_4c = GetPrivateProfileIntA(local_90,&DAT_10040eb0,0,param_1);
      FUN_10023fdf(local_54,(short)local_4c);
      local_48 = local_48 + 1;
    }
  }
  FUN_10023f5c(local_48);
  return;
}



/* ================================================================
 * Function: FUN_10023f44
 * Address:  10023f44
 * ================================================================ */

void FUN_10023f44(int param_1,undefined2 param_2)

{
  *(undefined2 *)(&DAT_100433b2 + param_1 * 0x74) = param_2;
  return;
}



/* ================================================================
 * Function: FUN_10023f5c
 * Address:  10023f5c
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10023f5c(undefined4 param_1)

{
  _DAT_10043344 = param_1;
  return;
}



/* ================================================================
 * Function: FUN_10023f6b
 * Address:  10023f6b
 * ================================================================ */

void FUN_10023f6b(int param_1,char *param_2)

{
  strncpy(&DAT_1004334c + param_1 * 0x74,param_2,0x20);
  return;
}



/* ================================================================
 * Function: FUN_10023f8e
 * Address:  10023f8e
 * ================================================================ */

void FUN_10023f8e(int param_1,undefined2 param_2)

{
  *(undefined2 *)(&DAT_100433b0 + param_1 * 0x74) = param_2;
  return;
}



/* ================================================================
 * Function: FUN_10023fa6
 * Address:  10023fa6
 * ================================================================ */

void FUN_10023fa6(int param_1,undefined4 param_2)

{
  *(undefined4 *)(&DAT_100433b4 + param_1 * 0x74) = param_2;
  return;
}



/* ================================================================
 * Function: FUN_10023fbc
 * Address:  10023fbc
 * ================================================================ */

void FUN_10023fbc(int param_1,char *param_2)

{
  strncpy(&DAT_1004336c + param_1 * 0x74,param_2,0x40);
  return;
}



/* ================================================================
 * Function: FUN_10023fdf
 * Address:  10023fdf
 * ================================================================ */

void FUN_10023fdf(int param_1,undefined2 param_2)

{
  *(undefined2 *)(&DAT_100433b8 + param_1 * 0x74) = param_2;
  return;
}



/* ================================================================
 * Function: FUN_10023ff7
 * Address:  10023ff7
 * ================================================================ */

bool FUN_10023ff7(undefined4 param_1,char *param_2,size_t param_3)

{
  bool bVar1;
  _OFSTRUCT local_90;
  HFILE local_8;
  
  local_8 = OpenFile(s_PVCAM_INI_10040eb8,&local_90,0x4000);
  bVar1 = local_8 != -1;
  if (bVar1) {
    strncpy(param_2,local_90.szPathName,param_3);
  }
  return bVar1;
}



/* ================================================================
 * Function: pd_ddi_uninit
 * Address:  10024047
 * ================================================================ */

/* __stdcall pd_ddi_uninit,0 */

uint pd_ddi_uninit(void)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  undefined3 extraout_var;
  uint uVar4;
  
                    /* 0x24047  151  _pd_ddi_uninit@0 */
  sVar2 = 0;
  while( true ) {
    sVar3 = FUN_1002315e();
    if (sVar3 <= sVar2) break;
    bVar1 = FUN_10022cc2((int)sVar2);
    if (CONCAT31(extraout_var,bVar1) != 0) {
      pd_cam_close(sVar2);
    }
    sVar2 = sVar2 + 1;
  }
  uVar4 = FUN_10023daf(0);
  return uVar4 & 0xffff0000;
}



/* ================================================================
 * Function: pd_driver_get_image_data_gran
 * Address:  10024099
 * ================================================================ */

/* __stdcall pd_driver_get_image_data_gran,8 */

int pd_driver_get_image_data_gran(short param_1,undefined2 *param_2)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  ushort uVar3;
  
                    /* 0x24099  152  _pd_driver_get_image_data_gran@8 */
  iVar2 = FUN_10022cf2((int)param_1);
  if (iVar2 == 0) {
    iVar2 = 0x2c;
  }
  else {
    bVar1 = FUN_10022cc2((int)param_1);
    uVar3 = (ushort)((uint3)extraout_var >> 8);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      iVar2 = CONCAT22(uVar3,0x1e);
    }
    else {
      *param_2 = 2;
      iVar2 = (uint)uVar3 << 0x10;
    }
  }
  return iVar2;
}



/* ================================================================
 * Function: pd_driver_get_image_data_status
 * Address:  100240dd
 * ================================================================ */

/* __stdcall pd_driver_get_image_data_status,12 */

undefined2 pd_driver_get_image_data_status(short param_1,undefined4 *param_2,undefined4 *param_3)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  undefined4 uVar3;
  int local_24;
  undefined4 *local_20;
  DWORD local_1c;
  undefined2 local_18 [2];
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c [2];
  HANDLE local_8;
  
                    /* 0x240dd  153  _pd_driver_get_image_data_status@12 */
  iVar2 = FUN_10022cf2((int)param_1);
  if (iVar2 == 0) {
    local_18[0] = 0x29;
  }
  else {
    bVar1 = FUN_10022cc2((int)param_1);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      local_18[0] = 0x1b;
    }
    else if (DAT_10043a88 == 0) {
      local_8 = (HANDLE)FUN_10022992((int)param_1);
      DeviceIoControl(local_8,0x223e94,(LPVOID)0x0,0,local_18,0xc,&local_1c,(LPOVERLAPPED)0x0);
      *param_2 = local_14;
      *param_3 = local_10;
    }
    else {
      uVar3 = FUN_10022cdd(param_1);
      local_24 = (int)(short)uVar3;
      local_20 = param_2;
      local_8 = (HANDLE)FUN_10022992((int)param_1);
      DeviceIoControl(local_8,0x223e94,&local_24,8,local_c,2,&local_1c,(LPOVERLAPPED)0x0);
      local_18[0] = local_c[0];
    }
  }
  return local_18[0];
}



/* ================================================================
 * Function: pd_driver_set_image_data_idle
 * Address:  100241ae
 * ================================================================ */

/* __stdcall pd_driver_set_image_data_idle,4 */

undefined2 pd_driver_set_image_data_idle(short param_1)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  char local_a0 [128];
  DWORD local_20;
  DWORD local_1c;
  int local_18 [3];
  undefined2 local_c [2];
  HANDLE local_8;
  
                    /* 0x241ae  164  _pd_driver_set_image_data_idle@4 */
  iVar2 = FUN_10022cf2((int)param_1);
  if (iVar2 == 0) {
    local_c[0] = 0x2a;
  }
  else {
    bVar1 = FUN_10022cc2((int)param_1);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      local_c[0] = 0x1c;
    }
    else {
      local_8 = (HANDLE)FUN_10022992((int)param_1);
      DeviceIoControl(local_8,0x223e94,(LPVOID)0x0,0,local_18,0xc,&local_1c,(LPOVERLAPPED)0x0);
      iVar2 = FUN_100227a0(local_18[0]);
      if (iVar2 == 0) {
        sprintf(local_a0,s_DDI__NO_Abort_Necessary___Camera_10040ec4,local_18[0]);
        OutputDebugStringA(local_a0);
        local_c[0] = 0;
      }
      else {
        DeviceIoControl(local_8,0x223e98,(LPVOID)0x0,2,local_c,2,&local_1c,(LPOVERLAPPED)0x0);
        local_20 = WaitForSingleObject(*(HANDLE *)(&DAT_10043af0 + param_1 * 0x1c),3000);
        if (local_20 == 0x102) {
          OutputDebugStringA(s_DDI__TIMEOUT_in_ABORT___Now_Clea_10040f00);
          DeviceIoControl(local_8,0x223ef0,(LPVOID)0x0,0,local_c,2,&local_1c,(LPOVERLAPPED)0x0);
          local_c[0] = 0x3e;
        }
        else {
          DeviceIoControl(local_8,0x223ef0,(LPVOID)0x0,0,local_c,2,&local_1c,(LPOVERLAPPED)0x0);
        }
      }
    }
  }
  return local_c[0];
}



/* ================================================================
 * Function: pd_driver_set_image_data_active
 * Address:  100242e9
 * ================================================================ */

/* __stdcall pd_driver_set_image_data_active,12 */

undefined2 pd_driver_set_image_data_active(short param_1,uint param_2,LPVOID param_3)

{
  undefined2 uVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  BOOL BVar4;
  undefined4 uVar5;
  int local_3c;
  uint local_38;
  LPVOID local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  DWORD local_20;
  DWORD local_1c;
  uint local_18;
  uint local_14;
  undefined2 local_10 [2];
  LPVOID local_c;
  HANDLE local_8;
  
                    /* 0x242e9  163  _pd_driver_set_image_data_active@12 */
  iVar3 = FUN_10022cf2((int)param_1);
  if (iVar3 == 0) {
    local_10[0] = 0x2b;
  }
  else {
    bVar2 = FUN_10022cc2((int)param_1);
    if (CONCAT31(extraout_var,bVar2) == 0) {
      local_10[0] = 0x1d;
    }
    else if (DAT_10043a88 == 0) {
      local_8 = (HANDLE)FUN_10022992((int)param_1);
      if (param_2 < 0x4000001) {
        local_1c = param_2;
      }
      else {
        local_1c = 0x3000000;
      }
      local_18 = param_2 - local_1c;
      BVar4 = DeviceIoControl(local_8,0x223e9d,&param_2,4,param_3,local_1c,&local_20,
                              (LPOVERLAPPED)0x0);
      if (BVar4 == 0) {
        local_10[0] = 0xf;
        GetLastError();
      }
      else {
        local_10[0] = 0;
        local_c = param_3;
        do {
          if (local_18 == 0) goto LAB_100243fe;
          local_c = (LPVOID)((int)local_c + local_1c);
          if (local_18 < 0x4000001) {
            local_1c = local_18;
            local_18 = 0;
          }
          else {
            local_1c = 0x2000000;
            local_18 = local_18 + 0xfe000000;
          }
          BVar4 = DeviceIoControl(local_8,0x223ec1,(LPVOID)0x0,0,local_c,local_1c,&local_20,
                                  (LPOVERLAPPED)0x0);
        } while (BVar4 != 0);
        local_10[0] = 0xf;
        local_20 = GetLastError();
LAB_100243fe:
        local_28 = (uint)(*(short *)(DAT_10043330 + 0x20 + param_1 * 0x2c) != 0);
        local_2c = param_2;
        local_30 = *(uint *)(DAT_10042750 + param_1 * 0x20);
        if (local_28 == 1) {
          uVar1 = *(undefined2 *)(DAT_10043330 + 0x24 + param_1 * 0x2c);
          local_24 = CONCAT31((int3)(char)((ushort)uVar1 >> 8),(char)uVar1) | 2;
        }
        else {
          local_24 = (uint)*(short *)(DAT_10043330 + 0x24 + param_1 * 0x2c);
        }
        pd_driver_get_pci_cap(param_1,(ushort *)&local_14);
        if (((local_30 < local_2c) && ((local_14 & 1) != 0)) &&
           (BVar4 = DeviceIoControl(local_8,0x223ec4,&local_30,0x10,(LPVOID)0x0,0,&local_20,
                                    (LPOVERLAPPED)0x0), BVar4 == 0)) {
          local_10[0] = 0xf;
          GetLastError();
        }
      }
    }
    else {
      uVar5 = FUN_10022cdd(param_1);
      local_3c = (int)(short)uVar5;
      local_38 = param_2;
      local_34 = param_3;
      local_8 = (HANDLE)FUN_10022992((int)param_1);
      DeviceIoControl(local_8,0x223e9d,&local_3c,0xc,local_10,2,&local_20,(LPOVERLAPPED)0x0);
    }
  }
  return local_10[0];
}



/* ================================================================
 * Function: pd_driver_get_info_dump
 * Address:  10024530
 * ================================================================ */

/* __stdcall pd_driver_get_info_dump,12 */

ushort pd_driver_get_info_dump(short param_1,uint param_2,LPVOID param_3)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  BOOL BVar3;
  undefined4 uVar4;
  int local_1c;
  uint local_18;
  LPVOID local_14;
  DWORD local_10;
  ushort local_c [2];
  HANDLE local_8;
  
                    /* 0x24530  154  _pd_driver_get_info_dump@12 */
  iVar2 = FUN_10022cf2((int)param_1);
  if (iVar2 == 0) {
    local_c[0] = 0x27;
  }
  else {
    bVar1 = FUN_10022cc2((int)param_1);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      local_c[0] = 0x19;
    }
    else if (DAT_10043a88 == 0) {
      local_8 = (HANDLE)FUN_10022992((int)param_1);
      BVar3 = DeviceIoControl(local_8,0x223ea0,(LPVOID)0x0,0,param_3,param_2 & 0xffff,&local_10,
                              (LPOVERLAPPED)0x0);
      local_c[0] = (ushort)(BVar3 == 0);
    }
    else {
      uVar4 = FUN_10022cdd(param_1);
      local_1c = (int)(short)uVar4;
      local_18 = param_2 & 0xffff;
      local_14 = param_3;
      local_8 = (HANDLE)FUN_10022992((int)param_1);
      DeviceIoControl(local_8,0x223ea0,&local_1c,0xc,local_c,2,&local_10,(LPOVERLAPPED)0x0);
    }
  }
  return local_c[0];
}



/* ================================================================
 * Function: pd_driver_get_info_length
 * Address:  1002460e
 * ================================================================ */

/* __stdcall pd_driver_get_info_length,8 */

undefined2 pd_driver_get_info_length(short param_1,LPVOID param_2)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  DWORD local_10;
  undefined2 local_c [2];
  HANDLE local_8;
  
                    /* 0x2460e  155  _pd_driver_get_info_length@8 */
  iVar2 = FUN_10022cf2((int)param_1);
  if (iVar2 == 0) {
    local_c[0] = 0x26;
  }
  else {
    bVar1 = FUN_10022cc2((int)param_1);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      local_c[0] = 0x18;
    }
    else if (DAT_10043a88 == 0) {
      local_8 = (HANDLE)FUN_10022992((int)param_1);
      DeviceIoControl(local_8,0x223ea4,(LPVOID)0x0,0,param_2,2,&local_10,(LPOVERLAPPED)0x0);
      local_c[0] = 0;
    }
    else {
      local_8 = (HANDLE)FUN_10022992((int)param_1);
      DeviceIoControl(local_8,0x223ea4,param_2,2,local_c,2,&local_10,(LPOVERLAPPED)0x0);
    }
  }
  return local_c[0];
}



/* ================================================================
 * Function: pd_reset_interface
 * Address:  100246b4
 * ================================================================ */

/* __stdcall pd_reset_interface,4 */

uint pd_reset_interface(short param_1)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  uint uVar3;
  DWORD local_10 [2];
  HANDLE local_8;
  
                    /* 0x246b4  173  _pd_reset_interface@4 */
  iVar2 = FUN_10022cf2((int)param_1);
  if (iVar2 == 0) {
    uVar3 = 0xb3;
  }
  else {
    bVar1 = FUN_10022cc2((int)param_1);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      uVar3 = CONCAT22((short)((uint3)extraout_var >> 8),0xb1);
    }
    else {
      local_8 = (HANDLE)FUN_10022992((int)param_1);
      uVar3 = DeviceIoControl(local_8,0x223ee8,(LPVOID)0x0,0,(LPVOID)0x0,0,local_10,
                              (LPOVERLAPPED)0x0);
    }
  }
  return uVar3;
}



/* ================================================================
 * Function: pd_driver_get_pixtime
 * Address:  1002471a
 * ================================================================ */

/* __stdcall pd_driver_get_pixtime,8 */

undefined2 pd_driver_get_pixtime(short param_1,undefined2 *param_2)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  DWORD local_10;
  undefined2 local_c [2];
  HANDLE local_8;
  
                    /* 0x2471a  158  _pd_driver_get_pixtime@8 */
  iVar2 = FUN_10022cf2((int)param_1);
  if (iVar2 == 0) {
    local_c[0] = 0xb3;
  }
  else {
    bVar1 = FUN_10022cc2((int)param_1);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      local_c[0] = 0xb1;
    }
    else if (DAT_10043a88 == 0) {
      *param_2 = 1000;
      local_c[0] = 0;
    }
    else {
      local_8 = (HANDLE)FUN_10022992((int)param_1);
      DeviceIoControl(local_8,0x223ea8,param_2,2,local_c,2,&local_10,(LPOVERLAPPED)0x0);
    }
  }
  return local_c[0];
}



/* ================================================================
 * Function: pd_driver_get_retries
 * Address:  10024799
 * ================================================================ */

/* __stdcall pd_driver_get_retries,8 */

undefined2 pd_driver_get_retries(short param_1,LPVOID param_2)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  undefined4 uVar3;
  DWORD local_18;
  undefined2 local_14 [2];
  int local_10;
  LPVOID local_c;
  HANDLE local_8;
  
                    /* 0x24799  159  _pd_driver_get_retries@8 */
  iVar2 = FUN_10022cf2((int)param_1);
  if (iVar2 == 0) {
    local_14[0] = 0x22;
  }
  else {
    bVar1 = FUN_10022cc2((int)param_1);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      local_14[0] = 0x14;
    }
    else if (DAT_10043a88 == 0) {
      local_8 = (HANDLE)FUN_10022992((int)param_1);
      DeviceIoControl(local_8,0x223eac,(LPVOID)0x0,0,param_2,2,&local_18,(LPOVERLAPPED)0x0);
      local_14[0] = 0;
    }
    else {
      uVar3 = FUN_10022cdd(param_1);
      local_10 = (int)(short)uVar3;
      local_c = param_2;
      local_8 = (HANDLE)FUN_10022992((int)param_1);
      DeviceIoControl(local_8,0x223eac,&local_10,8,local_14,2,&local_18,(LPOVERLAPPED)0x0);
    }
  }
  return local_14[0];
}



/* ================================================================
 * Function: pd_driver_set_retries
 * Address:  10024858
 * ================================================================ */

/* __stdcall pd_driver_set_retries,8 */

undefined2 pd_driver_set_retries(short param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  undefined4 uVar3;
  int local_18;
  uint local_14;
  DWORD local_10;
  undefined2 local_c [2];
  HANDLE local_8;
  
                    /* 0x24858  165  _pd_driver_set_retries@8 */
  iVar2 = FUN_10022cf2((int)param_1);
  if (iVar2 == 0) {
    local_c[0] = 0x23;
  }
  else {
    bVar1 = FUN_10022cc2((int)param_1);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      local_c[0] = 0x15;
    }
    else if (DAT_10043a88 == 0) {
      local_8 = (HANDLE)FUN_10022992((int)param_1);
      DeviceIoControl(local_8,0x223eb0,&param_2,2,(LPVOID)0x0,0,&local_10,(LPOVERLAPPED)0x0);
      local_c[0] = 0;
    }
    else {
      uVar3 = FUN_10022cdd(param_1);
      local_18 = (int)(short)uVar3;
      local_14 = param_2 & 0xffff;
      local_8 = (HANDLE)FUN_10022992((int)param_1);
      DeviceIoControl(local_8,0x223eb0,&local_18,8,local_c,2,&local_10,(LPOVERLAPPED)0x0);
    }
  }
  return local_c[0];
}



/* ================================================================
 * Function: pd_driver_get_timeout
 * Address:  1002491d
 * ================================================================ */

/* __stdcall pd_driver_get_timeout,8 */

undefined2 pd_driver_get_timeout(short param_1,LPVOID param_2)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  undefined4 uVar3;
  int local_18;
  LPVOID local_14;
  DWORD local_10;
  undefined2 local_c [2];
  HANDLE local_8;
  
                    /* 0x2491d  160  _pd_driver_get_timeout@8 */
  iVar2 = FUN_10022cf2((int)param_1);
  if (iVar2 == 0) {
    local_c[0] = 0x24;
  }
  else {
    bVar1 = FUN_10022cc2((int)param_1);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      local_c[0] = 0x16;
    }
    else if (DAT_10043a88 == 0) {
      local_8 = (HANDLE)FUN_10022992((int)param_1);
      DeviceIoControl(local_8,0x223eb4,(LPVOID)0x0,0,param_2,2,&local_10,(LPOVERLAPPED)0x0);
      local_c[0] = 0;
    }
    else {
      uVar3 = FUN_10022cdd(param_1);
      local_18 = (int)(short)uVar3;
      local_14 = param_2;
      local_8 = (HANDLE)FUN_10022992((int)param_1);
      DeviceIoControl(local_8,0x223eb4,&local_18,8,local_c,2,&local_10,(LPOVERLAPPED)0x0);
    }
  }
  return local_c[0];
}



/* ================================================================
 * Function: pd_driver_set_timeout
 * Address:  100249dc
 * ================================================================ */

/* __stdcall pd_driver_set_timeout,8 */

undefined2 pd_driver_set_timeout(short param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  undefined4 uVar3;
  DWORD local_18;
  undefined2 local_14 [2];
  HANDLE local_10;
  int local_c;
  uint local_8;
  
                    /* 0x249dc  170  _pd_driver_set_timeout@8 */
  iVar2 = FUN_10022cf2((int)param_1);
  if (iVar2 == 0) {
    local_14[0] = 0x25;
  }
  else {
    bVar1 = FUN_10022cc2((int)param_1);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      local_14[0] = 0x17;
    }
    else if (DAT_10043a88 == 0) {
      local_10 = (HANDLE)FUN_10022992((int)param_1);
      DeviceIoControl(local_10,0x223eb8,&param_2,2,(LPVOID)0x0,0,&local_18,(LPOVERLAPPED)0x0);
      local_14[0] = 0;
    }
    else {
      uVar3 = FUN_10022cdd(param_1);
      local_c = (int)(short)uVar3;
      local_8 = param_2 & 0xffff;
      local_10 = (HANDLE)FUN_10022992((int)param_1);
      DeviceIoControl(local_10,0x223eb8,&local_c,8,local_14,2,&local_18,(LPOVERLAPPED)0x0);
    }
  }
  return local_14[0];
}



/* ================================================================
 * Function: pd_driver_get_ver
 * Address:  10024aa1
 * ================================================================ */

/* __stdcall pd_driver_get_ver,8 */

undefined2 pd_driver_get_ver(short param_1,void *param_2)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  DWORD local_18;
  undefined1 local_14 [8];
  undefined2 local_c;
  HANDLE local_8;
  
                    /* 0x24aa1  162  _pd_driver_get_ver@8 */
  iVar2 = FUN_10022cf2((int)param_1);
  if (iVar2 == 0) {
    local_c = 0x28;
  }
  else {
    bVar1 = FUN_10022cc2((int)param_1);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      local_c = 0x1a;
    }
    else {
      if (DAT_10043a88 == 0) {
        local_8 = (HANDLE)FUN_10022992((int)param_1);
        DeviceIoControl(local_8,0x223ebc,(LPVOID)0x0,0,local_14,6,&local_18,(LPOVERLAPPED)0x0);
        memcpy(param_2,local_14,2);
      }
      else {
        local_8 = (HANDLE)FUN_10022992((int)param_1);
        DeviceIoControl(local_8,0x223ebc,&param_1,2,local_14,6,&local_18,(LPOVERLAPPED)0x0);
        memcpy(param_2,local_14,2);
      }
      local_c = 0;
    }
  }
  return local_c;
}



/* ================================================================
 * Function: pd_driver_get_pci_cap
 * Address:  10024b74
 * ================================================================ */

/* __stdcall pd_driver_get_pci_cap,8 */

undefined2 pd_driver_get_pci_cap(short param_1,ushort *param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  DWORD local_58;
  undefined1 local_54 [4];
  undefined1 local_50 [4];
  undefined2 local_4c;
  HANDLE local_48;
  char local_44;
  undefined4 local_43;
  
                    /* 0x24b74  156  _pd_driver_get_pci_cap@8 */
  local_44 = DAT_10043a9c;
  puVar4 = &local_43;
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  *(undefined1 *)((int)puVar4 + 2) = 0;
  FUN_100233d9((int)param_1,&local_44,0x40);
  _strupr(&local_44);
  iVar3 = FUN_10022cf2((int)param_1);
  if (iVar3 == 0) {
    local_4c = 0x28;
  }
  else {
    bVar1 = FUN_10022cc2((int)param_1);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      local_4c = 0x1a;
    }
    else {
      if (DAT_10043a88 == 0) {
        local_48 = (HANDLE)FUN_10022992((int)param_1);
        DeviceIoControl(local_48,0x223ebc,(LPVOID)0x0,0,local_54,6,&local_58,(LPOVERLAPPED)0x0);
        memcpy(param_2,local_50,2);
      }
      else {
        local_48 = (HANDLE)FUN_10022992((int)param_1);
        DeviceIoControl(local_48,0x223ebc,&param_1,2,local_54,6,&local_58,(LPOVERLAPPED)0x0);
        memcpy(param_2,local_50,2);
      }
      local_4c = 0;
      pcVar2 = strstr(&local_44,s_PMPCI_10040f38);
      if (((pcVar2 != (char *)0x0) ||
          (pcVar2 = strstr(&local_44,s_PHOTOPCI_10040f40), pcVar2 != (char *)0x0)) &&
         ((*param_2 & 1) != 0)) {
        *param_2 = *param_2 - 1;
      }
    }
  }
  return local_4c;
}



/* ================================================================
 * Function: pd_driver_get_pci_fw
 * Address:  10024cc8
 * ================================================================ */

/* __stdcall pd_driver_get_pci_fw,8 */

undefined2 pd_driver_get_pci_fw(short param_1,void *param_2)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  DWORD local_18;
  undefined1 local_14 [2];
  undefined1 local_12 [6];
  undefined2 local_c;
  HANDLE local_8;
  
                    /* 0x24cc8  157  _pd_driver_get_pci_fw@8 */
  iVar2 = FUN_10022cf2((int)param_1);
  if (iVar2 == 0) {
    local_c = 0x28;
  }
  else {
    bVar1 = FUN_10022cc2((int)param_1);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      local_c = 0x1a;
    }
    else {
      if (DAT_10043a88 == 0) {
        local_8 = (HANDLE)FUN_10022992((int)param_1);
        DeviceIoControl(local_8,0x223ebc,(LPVOID)0x0,0,local_14,6,&local_18,(LPOVERLAPPED)0x0);
        memcpy(param_2,local_12,2);
      }
      else {
        local_8 = (HANDLE)FUN_10022992((int)param_1);
        DeviceIoControl(local_8,0x223ebc,&param_1,2,local_14,6,&local_18,(LPOVERLAPPED)0x0);
        memcpy(param_2,local_12,2);
      }
      local_c = 0;
    }
  }
  return local_c;
}



/* ================================================================
 * Function: pd_driver_get_type
 * Address:  10024d9b
 * ================================================================ */

/* __stdcall pd_driver_get_type,8 */

uint pd_driver_get_type(short param_1,undefined2 *param_2)

{
  uint uVar1;
  
                    /* 0x24d9b  161  _pd_driver_get_type@8 */
  uVar1 = FUN_10024db5(param_1);
  *param_2 = (short)uVar1;
  return uVar1 & 0xffff0000;
}



/* ================================================================
 * Function: FUN_10024db5
 * Address:  10024db5
 * ================================================================ */

undefined4 FUN_10024db5(short param_1)

{
  return CONCAT22((short)((uint)(param_1 * 0x74) >> 0x10),
                  *(undefined2 *)(&DAT_100433b8 + param_1 * 0x74));
}



/* ================================================================
 * Function: pd_exp_clear_ints
 * Address:  10024dca
 * ================================================================ */

/* __stdcall pd_exp_clear_ints,4 */

undefined2 pd_exp_clear_ints(short param_1)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  DWORD local_10;
  undefined2 local_c;
  HANDLE local_8;
  
                    /* 0x24dca  171  _pd_exp_clear_ints@4 */
  iVar2 = FUN_10022cf2((int)param_1);
  if (iVar2 == 0) {
    local_c = 0x28;
  }
  else {
    bVar1 = FUN_10022cc2((int)param_1);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      local_c = 0x1a;
    }
    else {
      if (DAT_10043a88 == 0) {
        local_8 = (HANDLE)FUN_10022992((int)param_1);
        DeviceIoControl(local_8,0x223edc,(LPVOID)0x0,0,(LPVOID)0x0,0,&local_10,(LPOVERLAPPED)0x0);
      }
      else {
        local_8 = (HANDLE)FUN_10022992((int)param_1);
        DeviceIoControl(local_8,0x223edc,(LPVOID)0x0,0,(LPVOID)0x0,0,&local_10,(LPOVERLAPPED)0x0);
      }
      local_c = 0;
    }
  }
  return local_c;
}



/* ================================================================
 * Function: pd_exp_get_ints
 * Address:  10024e70
 * ================================================================ */

/* __stdcall pd_exp_get_ints,8 */

undefined2 pd_exp_get_ints(short param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  DWORD local_18;
  int local_14;
  int local_10;
  undefined2 local_c;
  HANDLE local_8;
  
                    /* 0x24e70  172  _pd_exp_get_ints@8 */
  *param_2 = 0;
  iVar2 = FUN_10022cf2((int)param_1);
  if (iVar2 == 0) {
    local_c = 0x28;
  }
  else {
    bVar1 = FUN_10022cc2((int)param_1);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      local_c = 0x1a;
    }
    else {
      if (DAT_10043a88 == 0) {
        local_8 = (HANDLE)FUN_10022992((int)param_1);
        DeviceIoControl(local_8,0x223ee0,(LPVOID)0x0,0,&local_14,8,&local_18,(LPOVERLAPPED)0x0);
        switch(*(undefined2 *)(DAT_10043330 + 0x24 + param_1 * 0x2c)) {
        case 0:
          *param_2 = 0;
          break;
        case 1:
          *param_2 = local_10;
          break;
        case 2:
          *param_2 = local_14;
          break;
        case 3:
          *param_2 = local_14 + local_10;
          break;
        default:
          *param_2 = 0;
        }
      }
      else {
        local_8 = (HANDLE)FUN_10022992((int)param_1);
        DeviceIoControl(local_8,0x223ee0,(LPVOID)0x0,0,&local_14,8,&local_18,(LPOVERLAPPED)0x0);
        switch(*(undefined2 *)(DAT_10043330 + 0x24 + param_1 * 0x2c)) {
        case 0:
          *param_2 = 0;
          break;
        case 1:
          *param_2 = local_10;
          break;
        case 2:
          *param_2 = local_14;
          break;
        case 3:
          *param_2 = local_14 + local_10;
          break;
        default:
          *param_2 = 0;
        }
      }
      local_c = 0;
    }
  }
  return local_c;
}



/* ================================================================
 * Function: pi_create_events
 * Address:  10025000
 * ================================================================ */

/* __stdcall pi_create_events,4 */

undefined4 pi_create_events(short param_1)

{
  int iVar1;
  int iVar2;
  HANDLE pvVar3;
  char local_2c [39];
  undefined1 local_5;
  
                    /* 0x25000  197  _pi_create_events@4 */
  iVar2 = pi_find_platform();
  if (iVar2 == 3) {
    _snprintf(local_2c,0x28,s_PICamera_dSOT_100412ac,(int)param_1);
    local_5 = 0;
    pvVar3 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,local_2c);
    *(HANDLE *)(&DAT_10043ae8 + param_1 * 0x1c) = pvVar3;
    _snprintf(local_2c,0x28,s_PICamera_dEOT_100412bc,(int)param_1);
    local_5 = 0;
    pvVar3 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,local_2c);
    *(HANDLE *)(&DAT_10043aec + param_1 * 0x1c) = pvVar3;
    iVar2 = param_1 * 0x2c;
    iVar1 = *(int *)(DAT_10043330 + 0x1c + iVar2);
    if (iVar1 != 0) {
      (**(code **)(iVar1 + 0x24))(iVar1,0x219,*(undefined4 *)(&DAT_10043ae8 + param_1 * 0x1c));
      iVar2 = (**(code **)(iVar1 + 0x24))
                        (iVar1,0x21a,*(undefined4 *)(&DAT_10043aec + param_1 * 0x1c));
    }
  }
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}



/* ================================================================
 * Function: pi_delete_events
 * Address:  100250e4
 * ================================================================ */

/* __stdcall pi_delete_events,4 */

undefined4 pi_delete_events(short param_1)

{
  int iVar1;
  
                    /* 0x250e4  207  _pi_delete_events@4 */
  iVar1 = pi_find_platform();
  if (iVar1 == 3) {
    if (*(int *)(&DAT_10043ae8 + param_1 * 0x1c) != -1) {
      CloseHandle(*(HANDLE *)(&DAT_10043ae8 + param_1 * 0x1c));
    }
    iVar1 = param_1 * 0x1c;
    if (*(int *)(&DAT_10043aec + iVar1) != -1) {
      iVar1 = CloseHandle(*(HANDLE *)(&DAT_10043aec + param_1 * 0x1c));
    }
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}



/* ================================================================
 * Function: pi_find_platform
 * Address:  1002513f
 * ================================================================ */

/* __stdcall pi_find_platform,0 */

undefined4 pi_find_platform(void)

{
  undefined4 local_9c;
  _OSVERSIONINFOA local_98;
  
                    /* 0x2513f  232  _pi_find_platform@0 */
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
    local_9c = 2;
  }
  else {
    local_9c = 3;
  }
  return local_9c;
}



/* ================================================================
 * Function: pv_init_sys
 * Address:  100251e0
 * ================================================================ */

/* __stdcall pv_init_sys,0 */

undefined2 pv_init_sys(void)

{
                    /* 0x251e0  514  _pv_init_sys@0 */
  return 1;
}



/* ================================================================
 * Function: pv_init_mem
 * Address:  100251e9
 * ================================================================ */

/* __stdcall pv_init_mem,0 */

undefined2 pv_init_mem(void)

{
                    /* 0x251e9  513  _pv_init_mem@0 */
  return 1;
}



/* ================================================================
 * Function: pv_init_util
 * Address:  100251f2
 * ================================================================ */

/* __stdcall pv_init_util,0 */

undefined2 pv_init_util(void)

{
                    /* 0x251f2  515  _pv_init_util@0 */
  return 1;
}



/* ================================================================
 * Function: pv_uninit_util
 * Address:  100251fb
 * ================================================================ */

/* __stdcall pv_uninit_util,0 */

undefined2 pv_uninit_util(void)

{
                    /* 0x251fb  537  _pv_uninit_util@0 */
  return 1;
}



/* ================================================================
 * Function: pv_uninit_mem
 * Address:  10025204
 * ================================================================ */

/* __stdcall pv_uninit_mem,0 */

undefined2 pv_uninit_mem(void)

{
                    /* 0x25204  535  _pv_uninit_mem@0 */
  return 1;
}



/* ================================================================
 * Function: pv_uninit_sys
 * Address:  1002520d
 * ================================================================ */

/* __stdcall pv_uninit_sys,0 */

undefined2 pv_uninit_sys(void)

{
                    /* 0x2520d  536  _pv_uninit_sys@0 */
  return 1;
}



/* ================================================================
 * Function: FUN_10025220
 * Address:  10025220
 * ================================================================ */

int FUN_10025220(void)

{
  HMODULE hModule;
  char *lpFilename;
  DWORD DVar1;
  char local_210 [260];
  char *local_10c;
  CHAR local_108 [260];
  
  local_10c = (char *)0x0;
  GetCurrentDirectoryA(0x104,local_108);
  strcpy(local_210,local_108);
  DVar1 = 0x104;
  lpFilename = local_210;
  hModule = GetModuleHandleA(s_pvcam32_dll_10041618);
  DVar1 = GetModuleFileNameA(hModule,lpFilename,DVar1);
  if (DVar1 != 0) {
    local_10c = strrchr(local_210,0x5c);
    if (local_10c != (char *)0x0) {
      *local_10c = '\0';
      SetCurrentDirectoryA(local_210);
      DAT_10043aa4 = LoadLibraryA(s_contrman_dll_10041624);
    }
  }
  if (DAT_10043aa4 == (HMODULE)0x0) {
    SetCurrentDirectoryA(local_108);
    DAT_10043aa4 = LoadLibraryA(s_contrman_dll_10041634);
    SetCurrentDirectoryA(local_210);
  }
  DAT_10043ac0 = GetProcAddress(DAT_10043aa4,s_Create_controllermanager_export_10041644);
  DAT_10043ac4 = GetProcAddress(DAT_10043aa4,s_Trenton_CreateControllerNvram_10041664);
  DAT_10043abc = GetProcAddress(DAT_10043aa4,s_Trenton_GetEnumParam_10041684);
  DAT_10043ab0 = GetProcAddress(DAT_10043aa4,s_Trenton_IsAvail_1004169c);
  DAT_10043ab4 = GetProcAddress(DAT_10043aa4,s_Trenton_GetEnumString_100416ac);
  DAT_10043ab8 = GetProcAddress(DAT_10043aa4,s_Destroy_controllermanager_export_100416c4);
  DAT_10043aac = GetProcAddress(DAT_10043aa4,s_Trenton_GetLinear_Base_100416e8);
  DAT_10043aa0 = 0;
  if (DAT_10043ac0 != (FARPROC)0x0) {
    DAT_10043aa0 = (*DAT_10043ac0)();
  }
  SetCurrentDirectoryA(local_108);
  return DAT_10043aa0;
}



/* ================================================================
 * Function: FUN_100253c9
 * Address:  100253c9
 * ================================================================ */

BOOL __fastcall FUN_100253c9(undefined4 param_1)

{
  BOOL BVar1;
  
  if (DAT_10043aa4 == (HMODULE)0x0) {
    BVar1 = 1;
  }
  else {
    if (DAT_10043aa0 != 0) {
      (*DAT_10043ab8)(param_1);
      DAT_10043aa0 = 0;
    }
    BVar1 = FreeLibrary(DAT_10043aa4);
  }
  return BVar1;
}



/* ================================================================
 * Function: FUN_1002540c
 * Address:  1002540c
 * ================================================================ */

undefined4 FUN_1002540c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_8;
  
  local_8 = 0;
  if (DAT_10043aa4 != 0) {
    local_8 = (*DAT_10043ac4)(1,param_1,param_2,param_3);
  }
  return local_8;
}



/* ================================================================
 * Function: FUN_10025449
 * Address:  10025449
 * ================================================================ */

undefined4 __thiscall
FUN_10025449(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (((param_1 == 0) || (DAT_10043abc == (code *)0x0)) || (DAT_10043aa4 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*DAT_10043abc)(param_1,param_2,param_3,param_4,this);
  }
  return uVar1;
}



/* ================================================================
 * Function: FUN_1002548b
 * Address:  1002548b
 * ================================================================ */

undefined4 __thiscall FUN_1002548b(void *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (((param_1 == 0) || (DAT_10043ab0 == (code *)0x0)) || (DAT_10043aa4 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*DAT_10043ab0)(param_1,param_2,param_3,this);
  }
  return uVar1;
}



/* ================================================================
 * Function: FUN_100254c9
 * Address:  100254c9
 * ================================================================ */

uint __thiscall
FUN_100254c9(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint in_EAX;
  uint uVar1;
  
  if ((DAT_10043ab4 == (code *)0x0) || (DAT_10043aa4 == 0)) {
    uVar1 = in_EAX & 0xffff0000;
  }
  else {
    uVar1 = (*DAT_10043ab4)(param_1,param_2,param_3,param_4,this);
  }
  return uVar1;
}



/* ================================================================
 * Function: FUN_10025508
 * Address:  10025508
 * ================================================================ */

undefined4 __thiscall
FUN_10025508(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((DAT_10043aac == (code *)0x0) || (DAT_10043aa4 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*DAT_10043aac)(param_1,param_2,param_3,this);
  }
  return uVar1;
}



/* ================================================================
 * Function: pi_exp_wait_start_xfer
 * Address:  10025540
 * ================================================================ */

/* __stdcall pi_exp_wait_start_xfer,8 */

char pi_exp_wait_start_xfer(short param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  DWORD DVar4;
  int iVar5;
  uint local_10;
  
                    /* 0x25540  231  _pi_exp_wait_start_xfer@8 */
  cVar1 = '\0';
  iVar2 = pi_find_platform();
  if (iVar2 == 3) {
    DVar3 = WaitForSingleObject(*(HANDLE *)(&DAT_10043ae8 + param_1 * 0x1c),param_2);
    if (DVar3 == 0) {
      cVar1 = '\x01';
    }
  }
  else {
    iVar2 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
    if (iVar2 == 0) {
      pv_set_error_code(0xbcf);
      cVar1 = '\0';
    }
    else {
      DVar3 = GetTickCount();
      while ((DVar4 = GetTickCount(), DVar4 - DVar3 < param_2 && (cVar1 == '\0'))) {
        if (*(short *)(DAT_10043330 + 0x24 + param_1 * 0x2c) == 1) {
          local_10 = (**(code **)(iVar2 + 0x5f8))(iVar2);
        }
        else if (*(short *)(DAT_10043330 + 0x24 + param_1 * 0x2c) == 3) {
          iVar5 = (**(code **)(iVar2 + 0x5f8))(iVar2);
          local_10 = (**(code **)(iVar2 + 0x5f8))(iVar2);
          local_10 = local_10 & 0x80000001;
          if ((int)local_10 < 0) {
            local_10 = (local_10 - 1 | 0xfffffffe) + 1;
          }
          local_10 = iVar5 / 2 + local_10;
        }
        else {
          local_10 = 0;
        }
        if (*(uint *)(&DAT_10043af8 + param_1 * 0x1c) < local_10) {
          *(uint *)(&DAT_10043af8 + param_1 * 0x1c) = local_10;
          cVar1 = '\x01';
        }
      }
    }
  }
  return cVar1;
}



/* ================================================================
 * Function: pi_exp_wait_end_xfer
 * Address:  1002568b
 * ================================================================ */

/* __stdcall pi_exp_wait_end_xfer,8 */

uint pi_exp_wait_end_xfer(short param_1,uint param_2)

{
  undefined2 uVar1;
  int iVar2;
  DWORD DVar3;
  DWORD DVar4;
  uint uVar5;
  int iVar6;
  undefined2 extraout_var;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  
                    /* 0x2568b  230  _pi_exp_wait_end_xfer@8 */
  uVar8 = 0;
  uVar9 = 0;
  iVar2 = pi_find_platform();
  uVar7 = (undefined1)uVar8;
  if (iVar2 == 3) {
    uVar5 = WaitForSingleObject(*(HANDLE *)(&DAT_10043aec + param_1 * 0x1c),param_2);
    if (uVar5 == 0) {
      uVar7 = 1;
    }
  }
  else {
    iVar2 = *(int *)(DAT_10043330 + 0x1c + param_1 * 0x2c);
    if (iVar2 == 0) {
      uVar1 = pv_set_error_code(0xbcf);
      uVar5 = CONCAT22(extraout_var,uVar1);
      uVar7 = 0;
    }
    else {
      DVar3 = GetTickCount();
      while( true ) {
        DVar4 = GetTickCount();
        uVar7 = (undefined1)uVar8;
        uVar5 = DVar4 - DVar3;
        if ((param_2 <= uVar5) || (uVar5 = uVar8 & 0xff, uVar5 != 0)) break;
        if (*(short *)(DAT_10043330 + 0x24 + param_1 * 0x2c) == 2) {
          uVar9 = (**(code **)(iVar2 + 0x5f8))(iVar2);
        }
        else if (*(short *)(DAT_10043330 + 0x24 + param_1 * 0x2c) == 3) {
          iVar6 = (**(code **)(iVar2 + 0x5f8))(iVar2,iVar2,uVar8,uVar9);
          uVar9 = iVar6 / 2;
        }
        else {
          uVar9 = 0;
        }
        if (*(uint *)(&DAT_10043af4 + param_1 * 0x1c) < uVar9) {
          *(uint *)(&DAT_10043af4 + param_1 * 0x1c) = uVar9;
          uVar8 = 1;
        }
      }
    }
  }
  return CONCAT31((int3)(uVar5 >> 8),uVar7);
}



/* ================================================================
 * Function: pi_clear_interrupt_counters
 * Address:  100257b7
 * ================================================================ */

/* __stdcall pi_clear_interrupt_counters,4 */

undefined4 pi_clear_interrupt_counters(short param_1)

{
                    /* 0x257b7  194  _pi_clear_interrupt_counters@4 */
  *(undefined4 *)(&DAT_10043af4 + param_1 * 0x1c) = 0;
  *(undefined4 *)(&DAT_10043af8 + param_1 * 0x1c) = 0;
  return CONCAT31((int3)((uint)(param_1 * 0x1c) >> 8),1);
}



/* ================================================================
 * Function: pl_exp_wait_start_xfer
 * Address:  100257f0
 * ================================================================ */

char pl_exp_wait_start_xfer(short param_1,DWORD param_2)

{
  char cVar1;
  uint uVar2;
  
                    /* 0x257f0  169  pl_exp_wait_start_xfer */
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    cVar1 = '\0';
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    cVar1 = pm_exp_wait_start_xfer(param_1,param_2);
  }
  else {
    cVar1 = pi_exp_wait_start_xfer(param_1,param_2);
  }
  return cVar1;
}



/* ================================================================
 * Function: pl_exp_wait_end_xfer
 * Address:  1002585e
 * ================================================================ */

undefined1 pl_exp_wait_end_xfer(short param_1,DWORD param_2)

{
  undefined1 uVar1;
  uint uVar2;
  
                    /* 0x2585e  168  pl_exp_wait_end_xfer */
  uVar2 = pl_cam_check(param_1);
  if ((uVar2 & 0xffff) == 0) {
    uVar1 = 0;
  }
  else if (*(short *)(DAT_10043330 + 0x14 + param_1 * 0x2c) == 0) {
    uVar1 = pm_exp_wait_end_xfer(param_1,param_2);
  }
  else {
    uVar2 = pi_exp_wait_end_xfer(param_1,param_2);
    uVar1 = (undefined1)uVar2;
  }
  return uVar1;
}



/* ================================================================
 * Function: pm_exp_wait_start_xfer
 * Address:  100258d0
 * ================================================================ */

/* __stdcall pm_exp_wait_start_xfer,8 */

bool pm_exp_wait_start_xfer(short param_1,DWORD param_2)

{
  DWORD DVar1;
  
                    /* 0x258d0  341  _pm_exp_wait_start_xfer@8 */
  ResetEvent(*(HANDLE *)(&DAT_10043ae8 + param_1 * 0x1c));
  DVar1 = WaitForSingleObject(*(HANDLE *)(&DAT_10043ae8 + param_1 * 0x1c),param_2);
  return DVar1 == 0;
}



/* ================================================================
 * Function: pm_exp_wait_end_xfer
 * Address:  10025915
 * ================================================================ */

/* __stdcall pm_exp_wait_end_xfer,8 */

bool pm_exp_wait_end_xfer(short param_1,DWORD param_2)

{
  DWORD DVar1;
  
                    /* 0x25915  340  _pm_exp_wait_end_xfer@8 */
  ResetEvent(*(HANDLE *)(&DAT_10043aec + param_1 * 0x1c));
  DVar1 = WaitForSingleObject(*(HANDLE *)(&DAT_10043aec + param_1 * 0x1c),param_2);
  return DVar1 == 0;
}



/* ================================================================
 * Function: pv_sys_get_time_stamp
 * Address:  10025960
 * ================================================================ */

/* __stdcall pv_sys_get_time_stamp,28 */

bool pv_sys_get_time_stamp
               (short *param_1,char *param_2,undefined1 *param_3,undefined1 *param_4,
               undefined1 *param_5,undefined1 *param_6,undefined2 *param_7)

{
  tm *ptVar1;
  
                    /* 0x25960  533  _pv_sys_get_time_stamp@28 */
  pv_set_error_code(0);
  time((time_t *)&stack0xfffffff8);
  ptVar1 = localtime((time_t *)&stack0xfffffff8);
  if (ptVar1 != (tm *)0x0) {
    *param_1 = (short)ptVar1->tm_year + 0x76c;
    *param_2 = (char)ptVar1->tm_mon + '\x01';
    *param_3 = (char)ptVar1->tm_mday;
    *param_4 = (char)ptVar1->tm_hour;
    *param_5 = (char)ptVar1->tm_min;
    *param_6 = (char)ptVar1->tm_sec;
    *param_7 = 0;
  }
  else {
    pv_set_error_code(0x7531);
  }
  return ptVar1 != (tm *)0x0;
}



/* ================================================================
 * Function: pv_free
 * Address:  10025a00
 * ================================================================ */

int pv_free(void *param_1,short param_2)

{
  undefined2 extraout_var;
  int iVar1;
  undefined2 extraout_var_00;
  ushort extraout_var_01;
  
                    /* 0x25a00  110  pv_free */
  pv_set_error_code(0);
  if (param_2 == 0) {
    free(param_1);
    iVar1 = CONCAT22(extraout_var,1);
  }
  else if (param_2 == 1) {
    free(param_1);
    iVar1 = CONCAT22(extraout_var_00,1);
  }
  else {
    pv_set_error_code(31000);
    iVar1 = (uint)extraout_var_01 << 0x10;
  }
  return iVar1;
}



/* ================================================================
 * Function: pv_malloc
 * Address:  10025a52
 * ================================================================ */

void * pv_malloc(size_t param_1,short param_2)

{
  void *pvVar1;
  ushort uVar2;
  
                    /* 0x25a52  107  pv_malloc */
  pv_set_error_code(0);
  if (param_2 == 0) {
    uVar2 = (ushort)((ulonglong)param_1 % 0x40);
    if (uVar2 != 0) {
      param_1 = param_1 + (0x40 - (uint)uVar2);
    }
    pvVar1 = malloc(param_1);
    if (pvVar1 == (void *)0x0) {
      pv_set_error_code(0x7919);
    }
  }
  else if (param_2 == 1) {
    uVar2 = (ushort)((ulonglong)param_1 % 0x400);
    if (uVar2 != 0) {
      param_1 = param_1 + (0x400 - (uint)uVar2);
    }
    pvVar1 = malloc(param_1);
    if (pvVar1 == (void *)0x0) {
      pv_set_error_code(0x7919);
    }
  }
  else {
    pv_set_error_code(31000);
    pvVar1 = (void *)0x0;
  }
  return pvVar1;
}



/* ================================================================
 * Function: pv_realloc
 * Address:  10025b34
 * ================================================================ */

void * pv_realloc(void *param_1,size_t param_2,short param_3)

{
  void *pvVar1;
  ushort uVar2;
  
                    /* 0x25b34  109  pv_realloc */
  pv_set_error_code(0);
  if (param_3 == 0) {
    uVar2 = (ushort)((ulonglong)param_2 % 0x40);
    if (uVar2 != 0) {
      param_2 = param_2 + (0x40 - (uint)uVar2);
    }
    pvVar1 = realloc(param_1,param_2);
    if (pvVar1 == (void *)0x0) {
      pv_set_error_code(0x791b);
    }
  }
  else if (param_3 == 1) {
    uVar2 = (ushort)((ulonglong)param_2 % 0x400);
    if (uVar2 != 0) {
      param_2 = param_2 + (0x400 - (uint)uVar2);
    }
    pvVar1 = realloc(param_1,param_2);
    if (pvVar1 == (void *)0x0) {
      pv_set_error_code(0x791b);
    }
  }
  else {
    pv_set_error_code(31000);
    pvVar1 = (void *)0x0;
  }
  return pvVar1;
}



/* ================================================================
 * Function: pv_calloc
 * Address:  10025c1e
 * ================================================================ */

void * pv_calloc(size_t param_1,size_t param_2,short param_3)

{
  void *pvVar1;
  ushort uVar2;
  
                    /* 0x25c1e  108  pv_calloc */
  pv_set_error_code(0);
  if (param_3 == 0) {
    uVar2 = (ushort)((ulonglong)param_2 % 0x40);
    if (uVar2 != 0) {
      param_2 = param_2 + (0x40 - (uint)uVar2);
    }
    pvVar1 = calloc(param_1,param_2);
    if (pvVar1 == (void *)0x0) {
      pv_set_error_code(0x791a);
    }
  }
  else if (param_3 == 1) {
    uVar2 = (ushort)((ulonglong)param_2 % 0x400);
    if (uVar2 != 0) {
      param_2 = param_2 + (0x400 - (uint)uVar2);
    }
    pvVar1 = calloc(param_1,param_2);
    if (pvVar1 == (void *)0x0) {
      pv_set_error_code(0x791a);
    }
  }
  else {
    pv_set_error_code(31000);
    pvVar1 = (void *)0x0;
  }
  return pvVar1;
}



/* ================================================================
 * Function: ftol
 * Address:  10025d10
 * ================================================================ */

void __cdecl ftol(void)

{
                    /* WARNING: Could not recover jumptable at 0x10025d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ftol();
  return;
}



/* ================================================================
 * Function: strcmp
 * Address:  10025d16
 * ================================================================ */

int __cdecl strcmp(char *_Str1,char *_Str2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10025d16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = strcmp(_Str1,_Str2);
  return iVar1;
}



/* ================================================================
 * Function: strlen
 * Address:  10025d1c
 * ================================================================ */

size_t __cdecl strlen(char *_Str)

{
  size_t sVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10025d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar1 = strlen(_Str);
  return sVar1;
}



/* ================================================================
 * Function: memset
 * Address:  10025d22
 * ================================================================ */

void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10025d22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



/* ================================================================
 * Function: memcpy
 * Address:  10025d28
 * ================================================================ */

void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10025d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}



/* ================================================================
 * Function: pow
 * Address:  10025d2e
 * ================================================================ */

double __cdecl pow(double _X,double _Y)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10025d2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = pow(_X,_Y);
  return dVar1;
}



/* ================================================================
 * Function: log
 * Address:  10025d34
 * ================================================================ */

double __cdecl log(double _X)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10025d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = log(_X);
  return dVar1;
}



/* ================================================================
 * Function: FUN_10025d40
 * Address:  10025d40
 * ================================================================ */

/* WARNING: Unable to track spacebase fully for stack */

void FUN_10025d40(void)

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
 * Function: strcpy
 * Address:  10025d70
 * ================================================================ */

char * __cdecl strcpy(char *_Dest,char *_Source)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10025d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = strcpy(_Dest,_Source);
  return pcVar1;
}



/* ================================================================
 * Function: FUN_10025d76
 * Address:  10025d76
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10025d76(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    if (0 < DAT_10043aa8) {
      DAT_10043aa8 = DAT_10043aa8 + -1;
      goto LAB_10025d8c;
    }
LAB_10025db4:
    uVar1 = 0;
  }
  else {
LAB_10025d8c:
    _DAT_10044640 = *(undefined4 *)_adjust_fdiv_exref;
    if (param_2 == 1) {
      DAT_10044648 = malloc(0x80);
      if (DAT_10044648 == (undefined4 *)0x0) goto LAB_10025db4;
      *DAT_10044648 = 0;
      DAT_10044644 = DAT_10044648;
      initterm(&DAT_1002b000,&DAT_1002b004);
      DAT_10043aa8 = DAT_10043aa8 + 1;
    }
    else if ((param_2 == 0) &&
            (_Memory = DAT_10044648, puVar2 = DAT_10044644, DAT_10044648 != (undefined4 *)0x0)) {
      while (puVar2 = puVar2 + -1, _Memory <= puVar2) {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          _Memory = DAT_10044648;
        }
      }
      free(_Memory);
      DAT_10044648 = (undefined4 *)0x0;
    }
    uVar1 = 1;
  }
  return uVar1;
}



/* ================================================================
 * Function: entry
 * Address:  10025e21
 * ================================================================ */

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_10043aa8;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_10025e69;
    if ((DAT_1004464c != (code *)0x0) &&
       (iVar2 = (*DAT_1004464c)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_10025d76(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_10025e69:
  iVar2 = FUN_10022790();
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_10025d76(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_10025d76(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_1004464c != (code *)0x0) {
      iVar2 = (*DAT_1004464c)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}



/* ================================================================
 * Function: initterm
 * Address:  10025ebe
 * ================================================================ */

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x10025ebe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm();
  return;
}



