/* ================================================================
 * Function: FUN_10001000
 * Address:  10001000
 * ================================================================ */

void FUN_10001000(short param_1,short param_2,short param_3,short param_4,short param_5,uint param_6
                 ,uint param_7,uint param_8,uint param_9,int param_10,int param_11)

{
  byte bVar1;
  int iVar2;
  char **local_2d4;
  undefined *local_2d0;
  short local_2cc;
  byte *local_2c8;
  char *apcStack_2c4 [69];
  char *local_1b0;
  char *local_1ac;
  char *local_1a8;
  char *local_1a4;
  char *local_1a0;
  char *local_19c;
  char *local_198;
  char *local_194;
  char *local_190;
  char *local_18c;
  char *local_188;
  char *local_184;
  char *local_180;
  char *local_17c;
  char *local_178;
  char *local_174;
  char *local_170;
  char *local_16c;
  char *local_168;
  char *local_164;
  char *local_160;
  char *local_15c;
  char *local_158;
  char *local_154;
  char *local_150;
  char *local_14c;
  char *local_148;
  char *local_144;
  char *local_140;
  char *local_13c;
  char *local_138;
  char *local_134;
  char *local_130;
  char *local_12c;
  char *local_128;
  char *local_124;
  char *local_120;
  char *local_11c;
  char *local_118;
  short local_114;
  char *local_110;
  char *local_10c;
  char *local_108;
  char *local_104;
  char *local_100;
  char *local_fc;
  char *local_f8;
  char *local_f4;
  char *local_f0;
  char *local_ec;
  char *local_e8;
  char *local_e4;
  char *local_e0;
  char *local_dc;
  char *local_d8;
  char *local_d4;
  char *local_d0;
  char *local_cc;
  char *local_c8;
  char *local_c4;
  char *local_c0;
  char *local_bc;
  char *local_b8;
  char *local_b4;
  char *local_b0;
  char *local_ac;
  char *local_a8;
  char *local_a4;
  char *local_a0;
  char *local_9c;
  char *local_98;
  char *local_94;
  char *local_90;
  char *local_8c;
  char *local_88;
  char *local_84;
  char *local_80;
  char *local_7c;
  char *local_78;
  char *local_74;
  char **local_70;
  short local_6c [2];
  char *local_68 [4];
  char *local_58;
  char *local_54;
  char *local_50;
  char *local_4c;
  char *local_48;
  char *local_44;
  char *local_40;
  char *local_3c;
  char *local_38;
  undefined *local_34;
  short local_30 [2];
  short local_2c [2];
  undefined1 local_28 [16];
  HMODULE local_18;
  FARPROC local_14;
  FARPROC local_10;
  FARPROC local_c;
  FARPROC local_8;
  
  local_14 = (FARPROC)0x0;
  local_8 = (FARPROC)0x0;
  local_10 = (FARPROC)0x0;
  local_c = (FARPROC)0x0;
  local_18 = LoadLibraryA(s_LogToFile_dll_1000d030);
  if (local_18 != (HMODULE)0x0) {
    local_c = GetProcAddress(local_18,s_SetLogConditions_1000d040);
    if (local_c != (FARPROC)0x0) {
      local_2c[0] = 0;
      (*local_c)(1,local_2c);
      if (local_2c[0] != 0) {
        local_2c[0] = 0;
        (*local_c)(0xc9,local_2c);
        if (local_2c[0] == 0) {
          local_14 = GetProcAddress(local_18,s_OpenLogFile_1000d054);
          local_8 = GetProcAddress(local_18,s_CloseLogFile_1000d060);
          local_10 = GetProcAddress(local_18,s_RecToFile_1000d070);
        }
      }
    }
    if ((((local_14 == (FARPROC)0x0) || (local_8 == (FARPROC)0x0)) || (local_10 == (FARPROC)0x0)) ||
       (local_c == (FARPROC)0x0)) {
      local_14 = (FARPROC)0x0;
      local_8 = (FARPROC)0x0;
      local_10 = (FARPROC)0x0;
      local_c = (FARPROC)0x0;
    }
    if (local_14 != (FARPROC)0x0) {
      local_30[0] = 0;
      (*local_c)(0xb,local_30);
      if (local_30[0] == 0) {
        FUN_10003547(local_28,(byte *)s_PxTmCrnt_pxt_1000d08c);
      }
      else {
        DAT_10011858 = DAT_10011858 + 1;
        FUN_10003547(local_28,(byte *)s_PxTm__03d_pxt_1000d07c);
      }
      iVar2 = (*local_14)(local_28);
      if ((short)iVar2 != 0) {
        local_68[0] = s_UNKNOWN_ADC_1000d0a8;
        local_68[1] = s_25_KHz_1000d0bc;
        local_68[2] = s_30_KHz_1000d0cc;
        local_68[3] = s_33_KHz_1000d0dc;
        local_58 = s_50_KHz_1000d0ec;
        local_54 = s_60_KHz_1000d0fc;
        local_50 = s_100_KHz_1000d10c;
        local_4c = s_150_KHz_1000d11c;
        local_48 = s_200_KHz_1000d12c;
        local_44 = s_430_KHz_1000d13c;
        local_40 = s_500_KHz_1000d14c;
        local_3c = s_1_MHz_1000d15c;
        local_38 = s_2_MHz_1000d16c;
        local_34 = &DAT_1000d17c;
        (*local_10)(s_CCD_Chip____3d_1000d184,(int)param_3);
        (*local_10)(s_ADC_Rate____s_1000d19c,local_68[param_4]);
        if (param_5 == 1) {
          local_2d0 = &DAT_1000d1b4;
        }
        else {
          local_2d0 = &DAT_1000d1b8;
        }
        (*local_10)(s_Cooling____s_1000d1bc,local_2d0);
        (*local_10)(s_Phase_Clock_1000d1d4);
        (*local_10)(s_Horizontal____3d__3d_1000d1fc,param_6 & 0xff,param_7 & 0xff);
        (*local_10)(s_Vertical____3d__3d_1000d220,param_8 & 0xff,param_9 & 0xff);
        (*local_10)(s__________________________________1000d244);
        if (param_2 == 0) {
          local_110 = s_Normal__0x00__PxNormal____1000d294;
          local_10c = s_Skip__0x01__PxSkip____1000d2d4;
          local_108 = s_Group__0x02__PxGroup____1000d314;
          local_104 = s_End_Group__0x03__PxEndGroup___1000d354;
          local_100 = s_Dummy__0x04__PxDummy____1000d394;
          local_fc = s_EOL__0x05__PxEOL____1000d3d4;
          local_f8 = s_EOFLD__0x06__PxGenInt____1000d414;
          local_f4 = s_EOFRM__0x07__PxEOFrame____1000d454;
          local_f0 = s_CLEAN__0x08__PxClean____1000d494;
          local_ec = s_VRAM_Tog__0x09__PxVFTgl____1000d4d4;
          local_e8 = s_Flush_Pix__0x0A__PxFlush____1000d514;
          local_e4 = s_RS170_Tog__0x0B__PxRepTgl____1000d554;
          local_e0 = s_Repeat_LGP__0x0C__PxLastPix____1000d594;
          local_dc = s_ISTrans__0x0D__PxVSEOL____1000d5d4;
          local_d8 = s_Rv_V_Shift__0x0E__PxRevShft____1000d614;
          local_d4 = s_Rv_H_Shift__0x0F__PxBackHorz___1000d654;
          local_d0 = s_1st_Group__0x10_____1000d694;
          local_cc = s_____________0x11_____1000d6d4;
          local_c8 = s_____________0x12_____1000d714;
          local_c4 = s_____________0x13_____1000d754;
          local_c0 = s_____________0x14_____1000d794;
          local_bc = s_____________0x15_____1000d7d4;
          local_b8 = s_Scan_Expos__0x16__PxScanExp____1000d814;
          local_b4 = s_____________0x17_____1000d854;
          local_b0 = s_____________0x18_____1000d894;
          local_ac = s_Open_Shttr__0x19__PxShttrOpn___1000d8d4;
          local_a8 = s_____________0x1A_____1000d914;
          local_a4 = s_Sync_Expos__0x1B__PxSyncExp____1000d954;
          local_a0 = s_____________0x1C_____1000d994;
          local_9c = s_____________0x1D_____1000d9d4;
          local_98 = s_____________0x1E_____1000da14;
          local_94 = s_Close_Shttr__0x1F__PxShttrCls___1000da54;
          local_90 = s______________________1000da94;
          local_8c = s__End_of_Array_marker___1000dad4;
          local_88 = s_Loop_Mark___0_20_1000db1c;
          local_84 = s_Loop_End_1000db50;
          local_80 = s___first_time___0_55_1000db84;
          local_7c = s___stay_in_loop___0_35_1000dbd4;
          local_78 = s___jump_out_of_nested_loop___0_55_1000dc24;
          local_74 = s___jump_out_of_loop___0_40_1000dc74;
          apcStack_2c4[0x44] = s_Normal__0x00__PxNormal____1000dcbc;
          local_1b0 = s_Skip__0x01__PxSkip____1000dcfc;
          local_1ac = s_Group__0x02__PxGroup____1000dd3c;
          local_1a8 = s_End_Group__0x03__PxEndGroup___1000dd7c;
          local_1a4 = s_Dummy__0x04__PxDummy____1000ddbc;
          local_1a0 = s_EOL__0x05__PxEOL____1000ddfc;
          local_19c = s_EOFLD__0x06__PxGenInt____1000de3c;
          local_198 = s_EOFRM__0x07__PxEOFrame____1000de7c;
          local_194 = s_CLEAN__0x08__PxClean____1000debc;
          local_190 = s_VRAM_Tog__0x09__PxVFTgl____1000defc;
          local_18c = s_Flush_Pix__0x0A__PxFlush____1000df3c;
          local_188 = s_RS170_Tog__0x0B__PxRepTgl____1000df7c;
          local_184 = s_Repeat_LGP__0x0C__PxLastPix____1000dfbc;
          local_180 = s_ISTrans__0x0D__PxVSEOL____1000dffc;
          local_17c = s_Begin_Group__0x0E__PxBegGroup___1000e03c;
          local_178 = s_Rvrs_Shift__0x0F__PxBackHorz___1000e07c;
          local_174 = s_____________0x10_____1000e0bc;
          local_170 = s_____________0x11_____1000e0fc;
          local_16c = s_____________0x12_____1000e13c;
          local_168 = s_____________0x13_____1000e17c;
          local_164 = s_____________0x14_____1000e1bc;
          local_160 = s_Rv_V_Shift__0x15__PxRevShft____1000e1fc;
          local_15c = s_____________0x16_____1000e23c;
          local_158 = s_Scan_Expos__0x17__PxScanExp____1000e27c;
          local_154 = s_____________0x18_____1000e2bc;
          local_150 = s_____________0x19_____1000e2fc;
          local_14c = s_____________0x1A_____1000e33c;
          local_148 = s_Sync_Expos__0x1B__PxSyncExp____1000e37c;
          local_144 = s_____________0x1C_____1000e3bc;
          local_140 = s_____________0x1D_____1000e3fc;
          local_13c = s_____________0x1E_____1000e43c;
          local_138 = s_Close_Shttr__0x1F__PxShttrCls___1000e47c;
          local_134 = s______________________1000e4bc;
          local_130 = s__End_of_Array_marker___1000e4fc;
          local_12c = s_Loop_Mark___0_20_1000e544;
          local_128 = s_Loop_End_1000e578;
          local_124 = s___first_time___0_40_1000e5ac;
          local_120 = s___stay_in_loop___0_20_1000e5fc;
          local_11c = s___jump_out_of_nested_loop___0_30_1000e64c;
          local_118 = s___jump_out_of_loop___0_30_1000e69c;
          if (param_1 == 5) {
            local_2d4 = apcStack_2c4 + 0x44;
          }
          else {
            local_2d4 = &local_110;
          }
          local_70 = local_2d4;
          local_6c[0] = 0;
          for (local_114 = 0; local_114 < 0x22; local_114 = local_114 + 1) {
            apcStack_2c4[local_114 * 2] = *(char **)(param_11 + local_114 * 8);
            apcStack_2c4[local_114 * 2 + 1] = *(char **)(param_11 + 4 + local_114 * 8);
          }
          if (param_1 != 5) {
            apcStack_2c4[0x1c] = (char *)*(undefined4 *)(param_11 + 0x80);
            apcStack_2c4[0x1d] = (char *)*(undefined4 *)(param_11 + 0x84);
          }
          for (local_114 = 0; local_114 < 0x22; local_114 = local_114 + 1) {
            (*local_10)(s__s__5_2f_1000e6c4,local_70[local_114],apcStack_2c4[local_114 * 2],
                        apcStack_2c4[local_114 * 2 + 1]);
          }
          (*local_10)(s__________________________________1000e6d0);
          for (local_114 = 0x22; local_114 < 0x28; local_114 = local_114 + 1) {
            (*local_10)(&DAT_1000e700,local_70[local_114],apcStack_2c4[local_114 * 2],
                        apcStack_2c4[local_114 * 2 + 1]);
          }
          (*local_c)(0xca,local_6c);
          if ((local_6c[0] != 0) && (param_10 != 0)) {
            (*local_10)(s_Generated_Code_1000e708);
            (*local_10)(s__________________________________1000e71c);
            for (local_114 = 0; local_114 < 0x10; local_114 = local_114 + 1) {
              (*local_10)(&DAT_1000e74c,local_70[local_114]);
              local_2c8 = (byte *)(param_10 + local_114 * 0x800);
              local_2cc = 0;
              while ((local_2cc < 0x800 && (*local_2c8 != 0xff))) {
                if ((local_2cc != 0) && ((int)local_2cc % 0x14 == 0)) {
                  (*local_10)(s__4d__1000e754,local_2cc + 1);
                }
                bVar1 = *local_2c8;
                local_2c8 = local_2c8 + 1;
                (*local_10)(s__02X_1000e768,(uint)bVar1);
                local_2cc = local_2cc + 1;
              }
            }
          }
        }
        else {
          switch(param_2) {
          case 1:
            (*local_10)(s_______Error__Internal_memory_all_1000e770);
            break;
          case 2:
            (*local_10)(s_______Error__Pixel_definition_fi_1000e7a0);
            break;
          case 3:
            (*local_10)(s_______Error__Reading_Version_inf_1000e7d0);
            break;
          case 4:
            (*local_10)(s_______Error__CCD_definition_Not_F_1000e7fc);
            break;
          case 5:
            (*local_10)(s_______Error__Pixel_definition_No_1000e82c);
            break;
          case 6:
            (*local_10)(s_______Error__DLL_can_not_handle_a_1000e85c);
            break;
          default:
            (*local_10)(s_______Error__Unknown_error_encou_1000e89c);
          }
        }
      }
      (*local_8)();
    }
    FreeLibrary(local_18);
  }
  return;
}



/* ================================================================
 * Function: FUN_100018f7
 * Address:  100018f7
 * ================================================================ */

undefined1 FUN_100018f7(LPCSTR param_1,short *param_2,undefined2 *param_3,undefined2 *param_4)

{
  bool bVar1;
  undefined4 uVar2;
  undefined1 local_18;
  undefined2 local_14 [2];
  int local_10;
  short local_c [2];
  undefined2 local_8 [2];
  
  local_c[0] = 0;
  local_8[0] = 0;
  local_14[0] = 0;
  bVar1 = FUN_100031ac(param_1,&local_10);
  if (bVar1) {
    FUN_100031fe(&local_10,0,0,0x38f);
    uVar2 = FUN_1000325d(&local_10,(char *)local_c,2,1);
    local_18 = (undefined1)uVar2;
    if (local_c[0] < 0) {
      local_c[0] = -local_c[0];
      uVar2 = FUN_1000325d(&local_10,(char *)local_8,2,1);
      local_18 = (undefined1)uVar2;
      if (1 < local_c[0]) {
        uVar2 = FUN_1000325d(&local_10,(char *)local_14,2,1);
        local_18 = (undefined1)uVar2;
      }
    }
    else {
      local_c[0] = 0;
    }
    *param_2 = local_c[0];
    *param_3 = local_8[0];
    *param_4 = local_14[0];
    FUN_100031df(&local_10);
  }
  else {
    local_18 = 0;
  }
  return local_18;
}



/* ================================================================
 * Function: FUN_100019d4
 * Address:  100019d4
 * ================================================================ */

void FUN_100019d4(LPCSTR param_1,short param_2,short param_3,short param_4,int param_5,byte *param_6
                 ,int param_7)

{
  FUN_10001a05(param_1,param_2,param_3,param_4,0,0,param_5,param_6,(byte *)0x0,param_7);
  return;
}



/* ================================================================
 * Function: FUN_10001a05
 * Address:  10001a05
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_10001a05(LPCSTR param_1,short param_2,short param_3,short param_4,undefined1 param_5,
            byte param_6,int param_7,byte *param_8,byte *param_9,int param_10)

{
  undefined1 uVar1;
  undefined3 extraout_var;
  undefined4 uVar2;
  undefined3 extraout_var_00;
  undefined3 uVar3;
  byte *pbVar4;
  undefined3 uVar5;
  short asStackY_10190 [32666];
  uint local_210;
  byte local_20c;
  undefined2 *local_208;
  undefined2 *local_204;
  undefined2 local_1f8;
  undefined2 local_1f6;
  undefined2 local_1f4;
  undefined2 local_1f2;
  undefined2 local_1f0;
  undefined2 local_1ee;
  undefined2 local_1ec;
  undefined2 local_1ea;
  undefined2 local_1e8;
  undefined2 local_1e6;
  undefined2 local_1e4;
  undefined2 local_1e2;
  undefined2 local_1e0;
  undefined2 local_1de;
  undefined2 local_1dc;
  undefined2 local_1da;
  undefined2 local_1d8;
  undefined2 local_1d6;
  undefined2 local_1d4;
  undefined2 local_1d2;
  undefined2 local_1d0;
  undefined2 local_1ce;
  undefined2 local_1cc;
  undefined2 local_1ca;
  undefined2 local_1c8;
  undefined2 local_1c6;
  undefined2 local_1c4;
  undefined2 local_1c2;
  undefined2 local_1c0;
  undefined2 local_1be;
  undefined2 local_1bc;
  undefined2 local_1ba;
  undefined2 local_1b8;
  undefined2 local_1b6;
  undefined2 local_1b4;
  undefined2 local_1b2;
  undefined2 local_1b0;
  undefined2 local_1ae;
  undefined2 local_1ac;
  undefined2 local_1aa;
  undefined2 local_1a8;
  undefined2 local_1a6;
  undefined2 local_1a4;
  undefined2 local_1a2;
  undefined2 local_1a0;
  undefined2 local_19e;
  undefined2 local_19c;
  undefined2 local_19a;
  short local_198;
  short local_196;
  short local_194;
  short local_192 [35];
  short local_14c [32];
  short local_10c;
  undefined2 *local_108;
  undefined2 local_104;
  undefined2 local_102;
  undefined2 local_100;
  undefined2 local_fe;
  undefined2 local_fc;
  undefined2 local_fa;
  undefined2 local_f8;
  undefined2 local_f6;
  undefined2 local_f4;
  undefined2 local_f2;
  undefined2 local_f0;
  undefined2 local_ee;
  undefined2 local_ec;
  undefined2 local_ea;
  undefined2 local_e8;
  undefined2 local_e6;
  short local_e4;
  undefined2 local_e0;
  undefined2 local_de;
  undefined2 local_dc;
  undefined2 local_da;
  undefined2 local_d8;
  undefined2 local_d6;
  undefined2 local_d4;
  undefined2 local_d2;
  undefined2 local_d0;
  undefined2 local_ce;
  undefined2 local_cc;
  undefined2 local_ca;
  undefined2 local_c8;
  undefined2 local_c6;
  undefined2 local_c4;
  undefined2 local_c2;
  undefined2 local_c0;
  undefined2 local_be;
  undefined2 local_bc;
  undefined2 local_ba;
  undefined2 local_b8;
  undefined2 local_b6;
  undefined2 local_b4;
  undefined2 local_b2;
  undefined2 local_b0;
  undefined2 local_ae;
  undefined2 local_ac;
  undefined2 local_aa;
  undefined2 local_a8;
  undefined2 local_a6;
  undefined2 local_a4;
  undefined2 local_a2;
  char local_a0;
  short local_9c [2];
  short local_98 [10];
  char *local_84;
  uint local_80;
  uint local_7c;
  short local_78;
  byte local_74;
  short local_70 [2];
  short local_6c [2];
  short local_68;
  char *local_64;
  short local_60 [2];
  uint local_5c;
  int local_58;
  short local_54 [2];
  short local_50 [2];
  short local_4c [2];
  short local_48;
  short local_44 [2];
  short local_40 [2];
  char *local_3c;
  char *local_38;
  char *local_34;
  short local_30 [2];
  short local_2c [2];
  short local_28 [2];
  char local_24;
  char local_20;
  short local_1c [2];
  short local_18 [2];
  short local_14;
  char local_10;
  short local_c;
  int local_8;
  
  local_c = 0;
  local_10 = FUN_100031ac(param_1,&local_8);
  if ((bool)local_10) {
    local_24 = '\0';
    local_20 = '\0';
    local_30[0] = 0;
    local_58 = param_7;
    local_68 = 0;
    local_9c[0] = 0;
    local_4c[0] = 0;
    local_40[0] = 0;
    local_34 = (char *)0x0;
    local_3c = (char *)0x0;
    local_5c = local_5c & 0xffffff00;
    local_80 = local_80 & 0xffffff00;
    local_74 = 0;
    local_7c = local_7c & 0xffffff00;
    FUN_100031fe(&local_8,0,0,0x38f);
    uVar2 = FUN_1000325d(&local_8,(char *)local_2c,2,1);
    local_10 = (char)uVar2;
    if (local_2c[0] < 1) {
      local_68 = -local_2c[0];
      uVar2 = FUN_1000325d(&local_8,(char *)local_2c,2,1);
      local_10 = (char)uVar2;
      if (local_68 < 2) {
        uVar2 = FUN_1000325d(&local_8,(char *)local_2c,2,1);
        local_10 = (char)uVar2;
        local_2c[0] = local_2c[0] + 6;
      }
      else {
        uVar2 = FUN_1000325d(&local_8,(char *)local_9c,2,1);
        local_10 = (char)uVar2;
        uVar2 = FUN_1000325d(&local_8,(char *)local_2c,2,1);
        local_10 = (char)uVar2;
        local_2c[0] = local_2c[0] + 8;
      }
    }
    else {
      local_68 = 0;
      local_9c[0] = 1;
      local_2c[0] = local_2c[0] + 2;
    }
    if ((((local_9c[0] == 1) && (local_68 < 4)) || ((local_9c[0] == 2 && (local_68 < 4)))) ||
       ((local_9c[0] == 5 && (local_68 < 4)))) {
      local_2c[0] = local_2c[0] >> 1;
      if (local_10 == '\0') {
        local_10 = '\0';
        local_c = 3;
      }
      else {
        FUN_10002f0f(local_68,local_9c[0],local_6c,local_1c,local_44,local_60,local_18);
        local_84 = _malloc((int)local_6c[0] << 1);
        local_38 = _malloc((int)local_1c[0] << 1);
        local_64 = _malloc((int)local_44[0] << 1);
        if (((local_84 == (char *)0x0) || (local_38 == (char *)0x0)) || (local_64 == (char *)0x0)) {
          local_10 = '\0';
          local_c = 1;
        }
        else {
          uVar2 = FUN_1000325d(&local_8,(char *)local_30,2,1);
          local_10 = (char)uVar2;
          while (((local_30[0] != 0 && (local_10 != '\0')) && (local_24 == '\0'))) {
            uVar2 = FUN_1000325d(&local_8,(char *)local_54,2,1);
            local_10 = (char)uVar2;
            while ((local_54[0] != 0 && (local_24 == '\0'))) {
              if (local_54[0] < 0xb) {
                local_48 = local_54[0];
                local_54[0] = 0;
              }
              else {
                local_48 = 10;
                local_54[0] = local_54[0] + -10;
              }
              uVar2 = FUN_1000325d(&local_8,(char *)local_98,2,local_48);
              local_10 = (char)uVar2;
              local_14 = 0;
              while ((local_14 < local_48 && (local_24 == '\0'))) {
                if ((local_98[local_14] == param_2) && (local_24 = '\x01', local_54[0] != 0)) {
                  FUN_100031fe(&local_8,2,(int)local_54[0],0x29a);
                }
                local_14 = local_14 + 1;
              }
            }
            uVar2 = FUN_1000325d(&local_8,(char *)local_28,2,1);
            local_10 = (char)uVar2;
            if (local_24 == '\0') {
              FUN_100031fe(&local_8,2,
                           (int)local_28[0] * (local_6c[0] + 1) + (int)local_1c[0] +
                           (int)local_44[0],0x29a);
            }
            else {
              local_a0 = '\0';
              for (; local_28[0] != 0; local_28[0] = local_28[0] + -1) {
                uVar2 = FUN_1000325d(&local_8,(char *)local_50,2,1);
                local_10 = (char)uVar2;
                if ((local_50[0] == param_3) || ((local_a0 == '\0' && (local_28[0] == 1)))) {
                  uVar2 = FUN_1000325d(&local_8,local_84,2,local_6c[0]);
                  local_10 = (char)uVar2;
                  local_a0 = '\x01';
                }
                else {
                  FUN_100031fe(&local_8,2,(int)local_6c[0],0x29a);
                }
              }
              uVar2 = FUN_1000325d(&local_8,local_38,2,local_1c[0]);
              local_10 = (char)uVar2;
              uVar2 = FUN_1000325d(&local_8,local_64,2,local_44[0]);
              local_10 = (char)uVar2;
              local_80 = CONCAT31(local_80._1_3_,local_64[local_44[0] * 2 + -2]);
              if (local_68 < 2) {
                uVar1 = 0;
              }
              else {
                uVar1 = (undefined1)*(undefined2 *)(local_84 + local_6c[0] * 2 + -2);
              }
              local_5c = CONCAT31(local_5c._1_3_,uVar1);
            }
            local_30[0] = local_30[0] + -1;
          }
          if (local_24 == '\0') {
            local_10 = '\0';
            local_c = 4;
          }
          else {
            local_104 = 0;
            local_102 = 1;
            local_100 = 2;
            local_fe = 3;
            local_fc = 4;
            local_fa = 6;
            local_f8 = 9;
            local_f6 = 10;
            local_f4 = 7;
            local_f2 = 0xb;
            local_f0 = 0xc;
            local_ee = 0xd;
            local_ec = 5;
            local_ea = 8;
            local_e8 = 0xe;
            local_e6 = 0xf;
            local_1f8 = 0;
            local_1f6 = 1;
            local_1f4 = 2;
            local_1f2 = 3;
            local_1f0 = 4;
            local_1ee = 6;
            local_1ec = 10;
            local_1ea = 0xb;
            local_1e8 = 7;
            local_1e6 = 0xc;
            local_1e4 = 0xd;
            local_1e2 = 0xe;
            local_1e0 = 5;
            local_1de = 8;
            local_1dc = 9;
            local_1da = 0xf;
            local_1d8 = 4;
            local_1d6 = 4;
            local_1d4 = 4;
            local_1d2 = 4;
            local_1d0 = 4;
            local_1ce = 4;
            local_1cc = 0x10;
            local_1ca = 4;
            local_1c8 = 4;
            local_1c6 = 0x12;
            local_1c4 = 4;
            local_1c2 = 0x11;
            local_1c0 = 4;
            local_1be = 4;
            local_1bc = 4;
            local_1ba = 0x13;
            local_1b8 = 0;
            local_1b6 = 1;
            local_1b4 = 3;
            local_1b2 = 4;
            local_1b0 = 5;
            local_1ae = 7;
            local_1ac = 10;
            local_1aa = 0xb;
            local_1a8 = 8;
            local_1a6 = 0xc;
            local_1a4 = 0xd;
            local_1a2 = 0xe;
            local_1a0 = 6;
            local_19e = 9;
            local_19c = 2;
            local_19a = 0xf;
            local_e0 = 0;
            local_de = 1;
            local_dc = 3;
            local_da = 4;
            local_d8 = 5;
            local_d6 = 7;
            local_d4 = 0xb;
            local_d2 = 0xc;
            local_d0 = 8;
            local_ce = 0xd;
            local_cc = 0xe;
            local_ca = 0xf;
            local_c8 = 6;
            local_c6 = 9;
            local_c4 = 2;
            local_c2 = 0x10;
            local_c0 = 5;
            local_be = 5;
            local_bc = 5;
            local_ba = 5;
            local_b8 = 5;
            local_b6 = 10;
            local_b4 = 5;
            local_b2 = 0x11;
            local_b0 = 5;
            local_ae = 5;
            local_ac = 5;
            local_aa = 5;
            local_a8 = 5;
            local_a6 = 5;
            local_a4 = 5;
            local_a2 = 5;
            local_e4 = local_1c[0] / 2;
            local_10c = local_e4;
            if (param_4 == 1) {
              local_10c = 0;
            }
            FUN_100036e0((undefined4 *)local_14c,(undefined4 *)local_84,(int)local_60[0] << 1);
            FUN_100036e0((undefined4 *)(local_14c + local_60[0]),
                         (undefined4 *)(local_38 + local_10c * 2),(int)local_e4 << 1);
            FUN_100036e0((undefined4 *)(local_14c + (int)local_60[0] + (int)local_e4),
                         (undefined4 *)local_64,(int)local_18[0] << 1);
            local_78 = ((2 < local_68) - 1 & 0xfff0) + 0x20;
            if (local_9c[0] == 5) {
              if (local_68 < 3) {
                local_204 = &local_1b8;
              }
              else {
                local_204 = &local_e0;
              }
              local_108 = local_204;
            }
            else {
              if (local_68 < 3) {
                local_208 = &local_104;
              }
              else {
                local_208 = &local_1f8;
              }
              local_108 = local_208;
            }
            for (local_10c = 1; local_10c <= local_78; local_10c = local_10c + 1) {
              local_192[local_10c + 1] = local_14c[(short)local_108[local_10c + -1]];
            }
            local_192[1] = 0x7fff;
            local_10c = 1;
            while ((local_10c <= local_78 && (local_10 != '\0'))) {
              if (local_192[local_10c + 1] == local_192[local_10c]) {
                local_20 = '\x01';
              }
              else {
                local_20 = '\0';
                if (local_192[local_10c + 1] < local_192[local_10c]) {
                  FUN_100031fe(&local_8,2,(int)local_2c[0],0x38f);
                  FUN_1000325d(&local_8,(char *)local_30,2,1);
                }
              }
              while (((local_30[0] != 0 && (local_10 != '\0')) && (local_20 == '\0'))) {
                FUN_1000325d(&local_8,(char *)local_70,2,1);
                if (local_68 < 2) {
                  FUN_1000325d(&local_8,(char *)&local_198,2,1);
                  FUN_1000325d(&local_8,(char *)&local_196,2,1);
                  if (local_198 < 0) {
                    FUN_1000325d(&local_8,(char *)&local_194,2,1);
                    FUN_1000325d(&local_8,(char *)local_192,2,1);
                  }
                  else {
                    local_192[0] = 0;
                    local_194 = 0;
                  }
                }
                FUN_1000325d(&local_8,(char *)local_4c,2,1);
                FUN_1000325d(&local_8,(char *)local_40,2,1);
                if (1 < local_68) {
                  if (local_4c[0] < 0) {
                    local_198 = -local_4c[0];
                    local_196 = local_40[0];
                    FUN_1000325d(&local_8,(char *)local_4c,2,1);
                    FUN_1000325d(&local_8,(char *)local_40,2,1);
                  }
                  else {
                    local_192[0] = 0;
                    local_194 = 0;
                    local_196 = 0;
                    local_198 = 0;
                  }
                }
                if (local_70[0] == local_192[local_10c + 1]) {
                  if (local_34 != (char *)0x0) {
                    FUN_100035e9(local_34);
                  }
                  if (local_3c != (char *)0x0) {
                    FUN_100035e9(local_3c);
                  }
                  local_34 = _malloc((int)local_4c[0]);
                  local_3c = _malloc((int)local_40[0] << 1);
                  if ((local_34 == (char *)0x0) || (local_3c == (char *)0x0)) {
                    local_10 = '\0';
                  }
                  else {
                    local_20 = '\x01';
                    FUN_1000325d(&local_8,local_34,1,local_4c[0]);
                    FUN_1000325d(&local_8,local_3c,2,local_40[0]);
                  }
                }
                else {
                  FUN_100031fe(&local_8,1,(int)local_4c[0],0x29a);
                  FUN_100031fe(&local_8,2,(int)local_40[0],0x29a);
                }
                local_30[0] = local_30[0] + -1;
              }
              if (local_20 == '\0') {
                local_10 = '\0';
                local_c = 5;
              }
              else {
                if (local_58 != 0) {
                  FUN_10002a80(&local_58,local_4c[0],(int)local_34,(int)local_3c);
                }
                if (param_10 != 0) {
                  if (((param_9 == (byte *)0x0) || (*param_9 == 0)) || (0x10 < *param_9)) {
                    local_20c = (byte)local_5c;
                  }
                  else {
                    local_20c = *param_9;
                  }
                  local_74 = local_20c;
                  if (((param_8 == (byte *)0x0) || (*param_8 == 0)) || (0x10 < *param_8)) {
                    pbVar4 = (byte *)0x0;
                    local_210 = local_80 & 0xff;
                  }
                  else {
                    local_210 = (uint)*param_8;
                    pbVar4 = param_8;
                  }
                  local_7c = CONCAT31(local_7c._1_3_,(undefined1)local_210);
                  if ((local_198 == 0) || (local_196 == 0)) {
                    FUN_10002bf5(local_10c,local_9c[0],(int)local_34,
                                 CONCAT22((short)((uint)pbVar4 >> 0x10),local_4c[0]),(int)local_3c,
                                 local_40[0],(ushort)CONCAT31((int3)((uint)pbVar4 >> 8),param_5),
                                 (ushort)local_20c,param_10);
                  }
                  else {
                    if (local_198 < 0) {
                      *(double *)(param_10 + 8 + local_78 * 8) =
                           (double)(int)local_194 / (double)(int)local_192[0];
                      *(undefined4 *)(param_10 + local_78 * 8) =
                           *(undefined4 *)(param_10 + 8 + local_78 * 8);
                      *(undefined4 *)(param_10 + 4 + local_78 * 8) =
                           *(undefined4 *)(param_10 + 0xc + local_78 * 8);
                      local_198 = -local_198;
                    }
                    *(double *)(param_10 + -8 + local_10c * 8) =
                         ((double)(int)local_198 * (double)param_6 * (double)local_210) /
                         (double)(int)local_196 + _DAT_1000c100;
                  }
                }
              }
              local_10c = local_10c + 1;
            }
            if (local_34 != (char *)0x0) {
              FUN_100035e9(local_34);
            }
            if (local_3c != (char *)0x0) {
              FUN_100035e9(local_3c);
            }
            if (((param_7 != 0) && (local_68 == 3)) && ((local_9c[0] == 1 || (local_9c[0] == 2)))) {
              FUN_10003124(param_7);
            }
            if ((param_8 != (byte *)0x0) && ((*param_8 == 0 || (0x10 < *param_8)))) {
              *param_8 = (byte)local_80;
            }
            if ((param_9 != (byte *)0x0) && ((*param_9 == 0 || (0x10 < *param_9)))) {
              *param_9 = (byte)local_5c;
            }
            if (1 < local_68) {
              if (local_9c[0] == 5) {
                local_70[0] = local_78;
              }
              else {
                local_70[0] = local_78 + 1;
              }
              for (local_14 = 0; local_14 < local_70[0]; local_14 = local_14 + 1) {
                if (*(double *)(param_10 + local_14 * 8) < _DAT_1000c100) {
                  *(undefined4 *)(param_10 + local_14 * 8) = 0x9999999a;
                  *(undefined4 *)(param_10 + 4 + local_14 * 8) = 0x3fc99999;
                }
              }
              if (*(double *)(param_10 + 0x38) < _DAT_1000c0f8) {
                *(undefined4 *)(param_10 + 0x38) = 0;
                *(undefined4 *)(param_10 + 0x3c) = 0x3fd00000;
              }
              *(undefined4 *)(param_10 + local_70[0] * 8) = 0;
              *(undefined4 *)(param_10 + 4 + local_70[0] * 8) = 0xbff00000;
            }
          }
          if (local_84 != (char *)0x0) {
            FUN_100035e9(local_84);
          }
          if (local_38 != (char *)0x0) {
            FUN_100035e9(local_38);
          }
          if (local_64 != (char *)0x0) {
            FUN_100035e9(local_64);
          }
        }
      }
    }
    else {
      local_10 = '\0';
      local_c = 6;
    }
    FUN_100031df(&local_8);
    uVar3 = (undefined3)((uint)param_10 >> 8);
    uVar5 = (undefined3)((uint)param_7 >> 8);
    FUN_10001000(local_9c[0],local_c,param_2,param_3,param_4,CONCAT31(uVar5,param_5),
                 CONCAT31(uVar3,*param_9),CONCAT31(uVar5,param_6),CONCAT31(uVar3,*param_8),param_7,
                 param_10);
    uVar3 = extraout_var_00;
  }
  else {
    local_10 = '\0';
    uVar3 = extraout_var;
  }
  return CONCAT31(uVar3,local_10);
}



/* ================================================================
 * Function: FUN_10002a80
 * Address:  10002a80
 * ================================================================ */

void FUN_10002a80(int *param_1,short param_2,int param_3,int param_4)

{
  undefined2 local_20;
  undefined2 local_1c;
  undefined2 local_18;
  undefined2 local_14;
  undefined2 local_10;
  undefined2 local_c;
  undefined2 local_8;
  
  local_1c = 0;
  local_14 = 0;
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + local_8) {
    if (*(short *)(param_4 + local_14 * 2) < 0) {
      local_20 = -*(short *)(param_4 + local_14 * 2);
      local_8 = *(short *)(param_4 + (short)(local_14 + 1) * 2);
      local_14 = local_14 + 2;
    }
    else {
      local_8 = 1;
      local_20 = 1;
    }
    for (; local_20 != 0; local_20 = local_20 + -1) {
      for (local_c = 0; local_c < local_8; local_c = local_c + 1) {
        for (local_18 = 0; local_18 < *(short *)(param_4 + ((int)local_14 + (int)local_c) * 2);
            local_18 = local_18 + 1) {
          *(undefined1 *)*param_1 = *(undefined1 *)(local_c + param_3 + (int)local_10);
          *param_1 = *param_1 + 1;
          local_1c = local_1c + 1;
        }
      }
    }
    local_14 = local_14 + local_8;
  }
  for (; local_1c < 0x800; local_1c = local_1c + 1) {
    *(undefined1 *)*param_1 = 0xff;
    *param_1 = *param_1 + 1;
  }
  return;
}



/* ================================================================
 * Function: FUN_10002bf5
 * Address:  10002bf5
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002bf5(short param_1,short param_2,int param_3,undefined4 param_4,int param_5,
                 short param_6,ushort param_7,ushort param_8,int param_9)

{
  short local_28;
  short local_24;
  short local_20;
  short local_1c;
  short local_18;
  short local_14;
  short local_10;
  short local_c;
  short local_8;
  
  local_c = 0;
  local_24 = 0;
  local_28 = 0;
  local_18 = 0;
  local_20 = 0;
  local_1c = 1;
  local_10 = param_1 + -1;
  if (((param_2 != 1) && (param_2 != 2)) || (local_10 != 0x10)) {
    local_14 = 0;
    local_8 = 0;
    while ((local_8 < param_6 && (local_24 == 0))) {
      if (*(short *)(param_5 + local_8 * 2) < 0) {
        local_1c = -*(short *)(param_5 + local_8 * 2);
        local_8 = local_8 + 1;
        local_20 = *(short *)(param_5 + local_8 * 2);
      }
      else {
        if (((param_2 == 1) || (param_2 == 2)) &&
           ((param_1 == 3 && (*(char *)(param_3 + local_14) == -1)))) {
          *(double *)(param_9 + local_10 * 8) =
               (double)((int)local_c +
                       (int)(short)(local_18 * ((param_7 & 0xff) - local_28) * (param_8 & 0xff))) *
               _DAT_1000c110;
          local_c = 0;
          local_18 = 0;
          local_28 = 0;
          local_10 = 0x10;
        }
        else {
          if (param_2 == 5) {
            local_c = local_c + local_1c * *(short *)(param_5 + local_8 * 2);
          }
          else if ((*(byte *)(param_3 + local_14) & 0x40) == 0) {
            local_c = local_c + local_1c * *(short *)(param_5 + local_8 * 2);
          }
          if ((param_2 == 1) || (param_2 == 2)) {
            if ((*(byte *)(param_3 + local_14) & 0x20) != 0) {
              local_28 = local_28 + local_1c * *(short *)(param_5 + local_8 * 2);
            }
            if ((*(byte *)(param_3 + local_14) & 0x40) != 0) {
              local_18 = local_18 + local_1c * *(short *)(param_5 + local_8 * 2);
            }
          }
          if ((param_2 == 5) && ((*(byte *)(param_3 + local_14) & 0x80) != 0)) {
            local_24 = local_c;
          }
        }
        if ((0 < local_20) && (local_20 = local_20 + -1, local_20 == 0)) {
          local_1c = 1;
        }
        local_14 = local_14 + 1;
      }
      local_8 = local_8 + 1;
    }
    if (param_2 == 5) {
      if (local_24 == 0) {
        *(undefined4 *)(param_9 + local_10 * 8) = 0x9999999a;
        *(undefined4 *)(param_9 + 4 + local_10 * 8) = 0x3fc99999;
      }
      else {
        *(double *)(param_9 + local_10 * 8) = (double)(int)local_c * _DAT_1000c108;
      }
    }
    else {
      *(double *)(param_9 + local_10 * 8) =
           (double)((int)local_c +
                   (int)(short)(local_18 * ((param_7 & 0xff) - local_28) * (param_8 & 0xff))) *
           _DAT_1000c110;
    }
  }
  return;
}



/* ================================================================
 * Function: FUN_10002f0f
 * Address:  10002f0f
 * ================================================================ */

bool FUN_10002f0f(short param_1,short param_2,undefined2 *param_3,undefined2 *param_4,
                 undefined2 *param_5,undefined2 *param_6,undefined2 *param_7)

{
  undefined2 local_1c;
  bool local_18;
  undefined2 local_14;
  undefined2 local_10;
  undefined2 local_c;
  undefined2 local_8;
  
  local_18 = true;
  local_14 = 0xffff;
  local_10 = 0xffff;
  local_8 = 0xffff;
  local_1c = 0xffff;
  local_c = 0xffff;
  if (param_2 == 5) {
    if (param_1 == 2) {
      local_c = 8;
      local_8 = 7;
      local_14 = 6;
      local_10 = 7;
      local_1c = 6;
    }
    else if (param_1 == 3) {
      local_c = 8;
      local_8 = 8;
      local_1c = 8;
      local_14 = 7;
      local_10 = 7;
    }
    else {
      local_18 = false;
    }
  }
  else if (param_2 == 2) {
    local_18 = param_1 == 3;
    if (local_18) {
      local_c = 7;
      local_8 = 0xb;
      local_1c = 8;
      local_14 = 10;
      local_10 = 6;
    }
  }
  else if (param_2 == 1) {
    switch(param_1) {
    case 0:
    case 1:
      local_c = 6;
      local_10 = 6;
      local_1c = 6;
      local_8 = 8;
      local_14 = 7;
      break;
    case 2:
      local_c = 7;
      local_8 = 8;
      local_14 = 7;
      local_10 = 6;
      local_1c = 6;
      break;
    case 3:
      local_c = 7;
      local_8 = 0xb;
      local_1c = 8;
      local_14 = 10;
      local_10 = 6;
      break;
    default:
      local_18 = false;
    }
  }
  else {
    local_18 = false;
  }
  if (local_18 == true) {
    if (param_3 != (undefined2 *)0x0) {
      *param_3 = local_c;
    }
    if (param_4 != (undefined2 *)0x0) {
      *param_4 = local_1c;
    }
    if (param_5 != (undefined2 *)0x0) {
      *param_5 = local_8;
    }
    if (param_6 != (undefined2 *)0x0) {
      *param_6 = local_10;
    }
    if (param_7 != (undefined2 *)0x0) {
      *param_7 = local_14;
    }
  }
  return local_18;
}



/* ================================================================
 * Function: FUN_10003124
 * Address:  10003124
 * ================================================================ */

void FUN_10003124(int param_1)

{
  FUN_100036e0((undefined4 *)(param_1 + 0x3400),(undefined4 *)(param_1 + 0xb000),0x400);
  FUN_100036e0((undefined4 *)(param_1 + 0x4c00),(undefined4 *)(param_1 + 0xc800),0x400);
  FUN_100036e0((undefined4 *)(param_1 + 0x5c00),(undefined4 *)(param_1 + 0xd800),0x400);
  FUN_100036e0((undefined4 *)(param_1 + 0x7c00),(undefined4 *)(param_1 + 0xf800),0x400);
  return;
}



/* ================================================================
 * Function: FUN_100031ac
 * Address:  100031ac
 * ================================================================ */

bool FUN_100031ac(LPCSTR param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_10003b80(param_1,&DAT_1000e8c4);
  *param_2 = iVar1;
  return *param_2 != 0;
}



/* ================================================================
 * Function: FUN_100031df
 * Address:  100031df
 * ================================================================ */

undefined4 FUN_100031df(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_10003b93((FILE *)*param_1);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}



/* ================================================================
 * Function: FUN_100031fe
 * Address:  100031fe
 * ================================================================ */

bool FUN_100031fe(undefined4 *param_1,short param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_4 == 0x38f) {
    param_4 = 0;
  }
  else if (param_4 == 0x29a) {
    param_4 = 1;
  }
  iVar1 = FUN_10003c10((int *)*param_1,param_2 * param_3,(int)(short)param_4);
  return (bool)('\x01' - (iVar1 != 0));
}



/* ================================================================
 * Function: FUN_1000325d
 * Address:  1000325d
 * ================================================================ */

undefined4 FUN_1000325d(undefined4 *param_1,char *param_2,short param_3,short param_4)

{
  uint uVar1;
  
  uVar1 = FUN_10003cc9(param_2,(int)param_3,(int)param_4,(int *)*param_1);
  return CONCAT31((int3)(uVar1 >> 8),1);
}



/* ================================================================
 * Function: FUN_10003290
 * Address:  10003290
 * ================================================================ */

undefined4 FUN_10003290(undefined4 param_1,int param_2)

{
  if (param_2 == 1) {
    DAT_10011bd8 = param_1;
  }
  return 1;
}



/* ================================================================
 * Function: _PICM_Define_Intrapixel_Pattern@40
 * Address:  100032b6
 * ================================================================ */

int _PICM_Define_Intrapixel_Pattern_40
              (int param_1,int param_2,short param_3,short param_4,short param_5,byte *param_6,
              byte *param_7,undefined1 param_8,byte param_9,uint *param_10)

{
  uint *puVar1;
  undefined4 uVar2;
  
                    /* 0x32b6  4  _PICM_Define_Intrapixel_Pattern@40 */
  puVar1 = FUN_10003441(param_10);
  uVar2 = FUN_10001a05((LPCSTR)puVar1,param_3,param_4,param_5,param_8,param_9,param_1,param_6,
                       param_7,param_2);
  FUN_100035e9((undefined *)puVar1);
  return (int)(char)uVar2;
}



/* ================================================================
 * Function: _PI133_Get_DLLVersionString@8
 * Address:  10003332
 * ================================================================ */

int _PI133_Get_DLLVersionString_8(int param_1,LPSTR param_2)

{
  undefined4 local_8;
  
                    /* 0x3332  2  _PI133_Get_DLLVersionString@8 */
  if (param_1 == 4) {
    local_8 = LoadStringA(DAT_10011bd8,0x31,param_2,0x14);
  }
  else {
    local_8 = 0;
  }
  return local_8;
}



/* ================================================================
 * Function: _PI133_Get_DLLVersion@8
 * Address:  10003377
 * ================================================================ */

int _PI133_Get_DLLVersion_8(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte local_20 [24];
  byte *local_8;
  
                    /* 0x3377  1  _PI133_Get_DLLVersion@8 */
  *param_2 = 0;
  iVar2 = _PI133_Get_DLLVersionString_8(param_1,(LPSTR)local_20);
  if (iVar2 != 0) {
    local_8 = (byte *)FUN_10003e6b(local_20,&DAT_1000e8c8);
    while (local_8 != (byte *)0x0) {
      iVar1 = *param_2;
      iVar3 = FUN_10003de0(param_2,local_8);
      *param_2 = iVar1 * 100 + iVar3;
      local_8 = (byte *)FUN_10003e6b((byte *)0x0,&DAT_1000e8c8);
    }
  }
  return iVar2;
}



/* ================================================================
 * Function: _PI133_Get_DataFileVersion@12
 * Address:  100033f0
 * ================================================================ */

bool _PI133_Get_DataFileVersion_12(uint *param_1,short *param_2,undefined2 *param_3)

{
  char cVar1;
  undefined2 local_c [2];
  uint *local_8;
  
                    /* 0x33f0  3  _PI133_Get_DataFileVersion@12 */
  local_8 = FUN_10003441(param_1);
  cVar1 = FUN_100018f7((LPCSTR)local_8,param_2,param_3,local_c);
  FUN_100035e9((undefined *)local_8);
  return cVar1 != '\0';
}



/* ================================================================
 * Function: FUN_10003441
 * Address:  10003441
 * ================================================================ */

uint * FUN_10003441(uint *param_1)

{
  DWORD DVar1;
  char *pcVar2;
  size_t sVar3;
  size_t sVar4;
  int iVar5;
  undefined4 *puVar6;
  uint *local_10c;
  undefined1 local_108;
  undefined4 local_107;
  
  local_108 = '\0';
  puVar6 = &local_107;
  for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  *(undefined1 *)((int)puVar6 + 2) = 0;
  DVar1 = GetModuleFileNameA(DAT_10011bd8,&local_108,0x104);
  if (DVar1 == 0) {
    sVar3 = _strlen((char *)param_1);
    local_10c = _malloc(sVar3 + 1);
    FUN_10003f10(local_10c,param_1);
  }
  else {
    pcVar2 = _strrchr(&local_108,0x5c);
    pcVar2[1] = '\0';
    sVar3 = _strlen(&local_108);
    sVar4 = _strlen((char *)param_1);
    local_10c = _malloc(sVar3 + 1 + sVar4);
    FUN_10003f10(local_10c,(uint *)&local_108);
    FUN_10003f20(local_10c,param_1);
  }
  return local_10c;
}



/* ================================================================
 * Function: FUN_10003547
 * Address:  10003547
 * ================================================================ */

int __cdecl FUN_10003547(undefined1 *param_1,byte *param_2)

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
  iVar1 = FUN_10004368((int *)&local_24,param_2,(undefined4 *)&stack0x0000000c);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_10004250(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar1;
}



/* ================================================================
 * Function: FUN_10003599
 * Address:  10003599
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10003599(void)

{
  void *extraout_ECX;
  
  FUN_100035b1();
  _DAT_10011860 = FUN_10004bc2();
  FUN_10004b72(extraout_ECX);
  return;
}



/* ================================================================
 * Function: FUN_100035b1
 * Address:  100035b1
 * ================================================================ */

void FUN_100035b1(void)

{
  PTR___fptrap_1000e8f0 = &LAB_10004c45;
  PTR___fptrap_1000e8ec = __cfltcvt;
  PTR___fptrap_1000e8f4 = __fassign;
  PTR___fptrap_1000e8f8 = FUN_10004beb;
  PTR___fptrap_1000e8fc = &LAB_10004c93;
  PTR___fptrap_1000e900 = __cfltcvt;
  return;
}



/* ================================================================
 * Function: FUN_100035e9
 * Address:  100035e9
 * ================================================================ */

void __cdecl FUN_100035e9(undefined *param_1)

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
  puStack_c = &DAT_1000c118;
  puStack_10 = &LAB_10006304;
  local_14 = ExceptionList;
  if (param_1 == (undefined *)0x0) {
    return;
  }
  if (DAT_10012f64 == 3) {
    ExceptionList = &local_14;
    FUN_10006195(9);
    local_8 = 0;
    local_20 = (uint *)FUN_100052d3((int)param_1);
    if (local_20 != (uint *)0x0) {
      FUN_100052fe(local_20,(int)param_1);
    }
    local_8 = 0xffffffff;
    FUN_10003653();
    puVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_10012f64 != 2) goto LAB_100036b5;
    ExceptionList = &local_14;
    FUN_10006195(9);
    local_8 = 1;
    local_28 = (uint *)FUN_10005d38(param_1,&local_2c,&local_24);
    if (local_28 != (uint *)0x0) {
      FUN_10005d8f(local_2c,local_24,(byte *)local_28);
    }
    local_8 = 0xffffffff;
    FUN_100036ab();
    puVar1 = local_28;
  }
  if (puVar1 != (uint *)0x0) {
    ExceptionList = local_14;
    return;
  }
LAB_100036b5:
  HeapFree(DAT_10012f60,0,param_1);
  ExceptionList = local_14;
  return;
}



/* ================================================================
 * Function: FUN_10003653
 * Address:  10003653
 * ================================================================ */

void FUN_10003653(void)

{
  FUN_100061f6(9);
  return;
}



/* ================================================================
 * Function: FUN_100036ab
 * Address:  100036ab
 * ================================================================ */

void FUN_100036ab(void)

{
  FUN_100061f6(9);
  return;
}



/* ================================================================
 * Function: FUN_100036e0
 * Address:  100036e0
 * ================================================================ */

undefined4 * __cdecl FUN_100036e0(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10003897_caseD_2;
        case 3:
          goto switchD_10003897_caseD_3;
        }
        goto switchD_10003897_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10003897_caseD_0;
      case 1:
        goto switchD_10003897_caseD_1;
      case 2:
        goto switchD_10003897_caseD_2;
      case 3:
        goto switchD_10003897_caseD_3;
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
              goto switchD_10003897_caseD_2;
            case 3:
              goto switchD_10003897_caseD_3;
            }
            goto switchD_10003897_caseD_1;
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
              goto switchD_10003897_caseD_2;
            case 3:
              goto switchD_10003897_caseD_3;
            }
            goto switchD_10003897_caseD_1;
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
              goto switchD_10003897_caseD_2;
            case 3:
              goto switchD_10003897_caseD_3;
            }
            goto switchD_10003897_caseD_1;
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
switchD_10003897_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10003897_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10003897_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10003897_caseD_0:
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
        goto switchD_10003715_caseD_2;
      case 3:
        goto switchD_10003715_caseD_3;
      }
      goto switchD_10003715_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10003715_caseD_0;
    case 1:
      goto switchD_10003715_caseD_1;
    case 2:
      goto switchD_10003715_caseD_2;
    case 3:
      goto switchD_10003715_caseD_3;
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
            goto switchD_10003715_caseD_2;
          case 3:
            goto switchD_10003715_caseD_3;
          }
          goto switchD_10003715_caseD_1;
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
            goto switchD_10003715_caseD_2;
          case 3:
            goto switchD_10003715_caseD_3;
          }
          goto switchD_10003715_caseD_1;
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
            goto switchD_10003715_caseD_2;
          case 3:
            goto switchD_10003715_caseD_3;
          }
          goto switchD_10003715_caseD_1;
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
switchD_10003715_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10003715_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10003715_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10003715_caseD_0:
  return param_1;
}



/* ================================================================
 * Function: _malloc
 * Address:  10003a15
 * ================================================================ */

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_100118e0);
  return pvVar1;
}



/* ================================================================
 * Function: __nh_malloc
 * Address:  10003a27
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
      pvVar1 = (void *)FUN_10003a53((uint *)_Size);
      if (pvVar1 != (void *)0x0) {
        return pvVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = FUN_100063dc(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}



/* ================================================================
 * Function: FUN_10003a53
 * Address:  10003a53
 * ================================================================ */

void __cdecl FUN_10003a53(uint *param_1)

{
  int *piVar1;
  uint dwBytes;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000c130;
  puStack_10 = &LAB_10006304;
  local_14 = ExceptionList;
  if (DAT_10012f64 == 3) {
    ExceptionList = &local_14;
    if (param_1 <= DAT_10012f5c) {
      ExceptionList = &local_14;
      FUN_10006195(9);
      local_8 = 0;
      piVar1 = FUN_10005627(param_1);
      local_8 = 0xffffffff;
      FUN_10003aba();
      if (piVar1 != (int *)0x0) {
        ExceptionList = local_14;
        return;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    if (DAT_10012f64 == 2) {
      if (param_1 == (uint *)0x0) {
        dwBytes = 0x10;
      }
      else {
        dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
      }
      ExceptionList = &local_14;
      if (dwBytes <= DAT_1001092c) {
        ExceptionList = &local_14;
        FUN_10006195(9);
        local_8 = 1;
        piVar1 = FUN_10005dd4(dwBytes >> 4);
        local_8 = 0xffffffff;
        FUN_10003b19();
        if (piVar1 != (int *)0x0) {
          ExceptionList = local_14;
          return;
        }
      }
      goto LAB_10003b32;
    }
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
LAB_10003b32:
  HeapAlloc(DAT_10012f60,0,dwBytes);
  ExceptionList = local_14;
  return;
}



/* ================================================================
 * Function: FUN_10003aba
 * Address:  10003aba
 * ================================================================ */

void FUN_10003aba(void)

{
  FUN_100061f6(9);
  return;
}



/* ================================================================
 * Function: FUN_10003b19
 * Address:  10003b19
 * ================================================================ */

void FUN_10003b19(void)

{
  FUN_100061f6(9);
  return;
}



/* ================================================================
 * Function: FUN_10003b4f
 * Address:  10003b4f
 * ================================================================ */

undefined4 * __cdecl FUN_10003b4f(LPCSTR param_1,char *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = FUN_100066c7();
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar2 = FUN_10006557(param_1,param_2,param_3,puVar1);
  FUN_10006505((uint)puVar1);
  return puVar2;
}



/* ================================================================
 * Function: FUN_10003b80
 * Address:  10003b80
 * ================================================================ */

void __cdecl FUN_10003b80(LPCSTR param_1,char *param_2)

{
  FUN_10003b4f(param_1,param_2,0x40);
  return;
}



/* ================================================================
 * Function: FUN_10003b93
 * Address:  10003b93
 * ================================================================ */

undefined4 __cdecl FUN_10003b93(FILE *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((param_1->_flag & 0x40) == 0) {
    FUN_100064b3((uint)param_1);
    uVar1 = __fclose_lk(param_1);
    FUN_10006505((uint)param_1);
  }
  else {
    param_1->_flag = 0;
  }
  return uVar1;
}



/* ================================================================
 * Function: __fclose_lk
 * Address:  10003bc4
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
    uVar2 = FUN_100068c8((int *)param_1);
    __freebuf(param_1);
    iVar1 = FUN_1000678f(param_1->_file);
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    else if (param_1->_tmpfname != (char *)0x0) {
      FUN_100035e9(param_1->_tmpfname);
      param_1->_tmpfname = (char *)0x0;
    }
  }
  param_1->_flag = 0;
  return uVar2;
}



/* ================================================================
 * Function: FUN_10003c10
 * Address:  10003c10
 * ================================================================ */

int __cdecl FUN_10003c10(int *param_1,int param_2,DWORD param_3)

{
  int iVar1;
  
  FUN_100064b3((uint)param_1);
  iVar1 = FUN_10003c3c(param_1,param_2,param_3);
  FUN_10006505((uint)param_1);
  return iVar1;
}



/* ================================================================
 * Function: FUN_10003c3c
 * Address:  10003c3c
 * ================================================================ */

int __cdecl FUN_10003c3c(int *param_1,int param_2,DWORD param_3)

{
  uint uVar1;
  int iVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  
  if (((param_1[3] & 0x83U) == 0) || (((param_3 != 0 && (param_3 != 1)) && (param_3 != 2)))) {
    pDVar4 = FUN_10006a44();
    *pDVar4 = 0x16;
    iVar2 = -1;
  }
  else {
    param_1[3] = param_1[3] & 0xffffffef;
    if (param_3 == 1) {
      iVar2 = FUN_10006b2e((char *)param_1);
      param_2 = param_2 + iVar2;
      param_3 = 0;
    }
    FUN_100068c8(param_1);
    uVar1 = param_1[3];
    if ((uVar1 & 0x80) == 0) {
      if ((((uVar1 & 1) != 0) && ((uVar1 & 8) != 0)) && ((uVar1 & 0x400) == 0)) {
        param_1[6] = 0x200;
      }
    }
    else {
      param_1[3] = uVar1 & 0xfffffffc;
    }
    DVar3 = FUN_10006a56(param_1[4],param_2,param_3);
    iVar2 = (DVar3 != 0xffffffff) - 1;
  }
  return iVar2;
}



/* ================================================================
 * Function: FUN_10003cc9
 * Address:  10003cc9
 * ================================================================ */

uint __cdecl FUN_10003cc9(char *param_1,uint param_2,uint param_3,int *param_4)

{
  uint uVar1;
  
  FUN_100064b3((uint)param_4);
  uVar1 = FUN_10003cf8(param_1,param_2,param_3,param_4);
  FUN_10006505((uint)param_4);
  return uVar1;
}



/* ================================================================
 * Function: FUN_10003cf8
 * Address:  10003cf8
 * ================================================================ */

uint __cdecl FUN_10003cf8(char *param_1,uint param_2,uint param_3,int *param_4)

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
          uVar4 = FUN_10006c8f(piVar1);
          if (uVar4 == 0xffffffff) goto LAB_10003dd4;
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
          iVar3 = FUN_10006d6b(piVar1[4],pcVar5,pcVar2);
          if (iVar3 == 0) {
            piVar1[3] = piVar1[3] | 0x10;
LAB_10003dd4:
            return (uint)((int)pcVar6 - (int)param_1) / param_2;
          }
          if (iVar3 == -1) {
            piVar1[3] = piVar1[3] | 0x20;
            goto LAB_10003dd4;
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
        FUN_100036e0((undefined4 *)pcVar5,(undefined4 *)*piVar1,(uint)pcVar7);
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
 * Function: FUN_10003de0
 * Address:  10003de0
 * ================================================================ */

int __thiscall FUN_10003de0(void *this,byte *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  undefined *puVar6;
  
  while( true ) {
    if (DAT_10010ff4 < 2) {
      uVar1 = (byte)PTR_DAT_10010de8[(uint)*param_1 * 2] & 8;
      this = PTR_DAT_10010de8;
    }
    else {
      puVar6 = (undefined *)0x8;
      uVar1 = FUN_10006fa9(this,(uint)*param_1,8);
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
    if (DAT_10010ff4 < 2) {
      uVar2 = (byte)PTR_DAT_10010de8[uVar4 * 2] & 4;
    }
    else {
      puVar6 = (undefined *)0x4;
      uVar2 = FUN_10006fa9(this,uVar4,4);
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
 * Function: FUN_10003e6b
 * Address:  10003e6b
 * ================================================================ */

uint __cdecl FUN_10003e6b(byte *param_1,byte *param_2)

{
  byte bVar1;
  DWORD *pDVar2;
  int iVar3;
  byte *pbVar4;
  byte local_24 [32];
  
  pDVar2 = FUN_100070d9();
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
LAB_10003efa:
      pDVar2[6] = (DWORD)pbVar4;
      return -(uint)(param_1 != pbVar4) & (uint)param_1;
    }
    if ((local_24[bVar1 >> 3] & (byte)(1 << (bVar1 & 7))) != 0) {
      *pbVar4 = 0;
      pbVar4 = pbVar4 + 1;
      goto LAB_10003efa;
    }
    pbVar4 = pbVar4 + 1;
  } while( true );
}



/* ================================================================
 * Function: FUN_10003f10
 * Address:  10003f10
 * ================================================================ */

uint * __cdecl FUN_10003f10(uint *param_1,uint *param_2)

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
    if (bVar1 == 0) goto LAB_10003ff8;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_10003ff8:
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
 * Function: FUN_10003f20
 * Address:  10003f20
 * ================================================================ */

uint * __cdecl FUN_10003f20(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_10003f3c;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_10003f6f;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x10003f8b;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_10003f3c:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x10003f8b;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x10003f8b;
    }
  }
LAB_10003f6f:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x10003f8b:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_10003ff8:
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
    if (bVar1 == 0) goto LAB_10003ff8;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}



/* ================================================================
 * Function: _strlen
 * Address:  10004000
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
    if (((uint)puVar2 & 3) == 0) goto LAB_10004020;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_10004053:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_10004020:
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
  goto LAB_10004053;
}



/* ================================================================
 * Function: _strrchr
 * Address:  10004080
 * ================================================================ */

/* Library Function - Single Match
    _strrchr
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strrchr(char *_Str,int _Ch)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = -1;
  do {
    pcVar4 = _Str;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar4 = _Str + 1;
    cVar1 = *_Str;
    _Str = pcVar4;
  } while (cVar1 != '\0');
  iVar2 = -(iVar2 + 1);
  pcVar4 = pcVar4 + -1;
  do {
    pcVar3 = pcVar4;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar3 = pcVar4 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar3;
  } while ((char)_Ch != cVar1);
  pcVar3 = pcVar3 + 1;
  if (*pcVar3 != (char)_Ch) {
    pcVar3 = (char *)0x0;
  }
  return pcVar3;
}



/* ================================================================
 * Function: FUN_100040a7
 * Address:  100040a7
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100040a7(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_100118f0 = GetVersion();
    iVar1 = FUN_10005186(1);
    if (iVar1 != 0) {
      _DAT_100118fc = DAT_100118f0 >> 8 & 0xff;
      _DAT_100118f8 = DAT_100118f0 & 0xff;
      DAT_100118f0 = DAT_100118f0 >> 0x10;
      _DAT_100118f4 = _DAT_100118f8 * 0x100 + _DAT_100118fc;
      iVar1 = FUN_10007054();
      if (iVar1 != 0) {
        DAT_10012f68 = GetCommandLineA();
        DAT_10011868 = FUN_10007814();
        FUN_100072fe();
        FUN_100075c7();
        FUN_1000750e();
        FUN_100071e0();
        DAT_10011864 = DAT_10011864 + 1;
        goto LAB_1000417a;
      }
      FUN_100051e3();
    }
LAB_10004107:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_10011864 < 1) goto LAB_10004107;
      DAT_10011864 = DAT_10011864 + -1;
      if (DAT_10011928 == 0) {
        FUN_1000721e();
      }
      FUN_100074ba();
      FUN_100070a8();
      FUN_100051e3();
    }
    else if (param_2 == 3) {
      FUN_10007140((undefined *)0x0);
    }
LAB_1000417a:
    uVar2 = 1;
  }
  return uVar2;
}



/* ================================================================
 * Function: entry
 * Address:  10004180
 * ================================================================ */

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_10011864;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_100041c8;
    if ((DAT_10012f6c != (code *)0x0) &&
       (iVar2 = (*DAT_10012f6c)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_100040a7(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_100041c8:
  iVar2 = FUN_10003290(param_1,param_2);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_100040a7(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_100040a7(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_10012f6c != (code *)0x0) {
      iVar2 = (*DAT_10012f6c)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}



/* ================================================================
 * Function: __amsg_exit
 * Address:  1000421d
 * ================================================================ */

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_10011870 == 1) || ((DAT_10011870 == 0 && (DAT_10011874 == 1)))) {
    FUN_10007946();
  }
  FUN_1000797f(param_1);
  (*(code *)PTR___exit_1000e8e0)(0xff);
  return;
}



/* ================================================================
 * Function: FUN_10004250
 * Address:  10004250
 * ================================================================ */

uint __cdecl FUN_10004250(uint param_1,int *param_2)

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
LAB_1000435c:
    param_2[3] = uVar1 | 0x20;
  }
  else {
    if ((uVar1 & 1) != 0) {
      param_2[1] = 0;
      if ((uVar1 & 0x10) == 0) goto LAB_1000435c;
      *param_2 = param_2[2];
      param_2[3] = uVar1 & 0xfffffffe;
    }
    uVar1 = param_2[3];
    param_2[1] = 0;
    param_2 = (int *)0x0;
    piVar4[3] = uVar1 & 0xffffffef | 2;
    if (((uVar1 & 0x10c) == 0) &&
       (((piVar4 != (int *)&DAT_10010a20 && (piVar4 != (int *)&DAT_10010a40)) ||
        (bVar5 = FUN_10007d06(uVar2), CONCAT31(extraout_var,bVar5) == 0)))) {
      FUN_10007cc2(piVar4);
    }
    if ((*(ushort *)(piVar4 + 3) & 0x108) == 0) {
      piVar7 = (int *)0x1;
      param_2 = (int *)FUN_10007ad2(uVar2,(char *)&param_1,1);
    }
    else {
      pcVar3 = (char *)piVar4[2];
      piVar7 = (int *)(*piVar4 - (int)pcVar3);
      *piVar4 = (int)(pcVar3 + 1);
      piVar4[1] = piVar4[6] + -1;
      if ((int)piVar7 < 1) {
        if (uVar2 == 0xffffffff) {
          puVar6 = &DAT_10011008;
        }
        else {
          puVar6 = (undefined *)((&DAT_10011e20)[(int)uVar2 >> 5] + (uVar2 & 0x1f) * 0x24);
        }
        if ((puVar6[4] & 0x20) != 0) {
          FUN_10006a56(uVar2,0,2);
        }
      }
      else {
        param_2 = (int *)FUN_10007ad2(uVar2,pcVar3,(uint)piVar7);
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
 * Function: FUN_10004368
 * Address:  10004368
 * ================================================================ */

int __cdecl FUN_10004368(int *param_1,byte *param_2,undefined4 *param_3)

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
      uVar2 = (byte)(&DAT_1000c128)[(char)bVar9] & 0xf;
    }
    local_34 = (int)(char)(&DAT_1000c148)[uVar2 * 8 + local_34] >> 4;
    switch(local_34) {
    case 0:
switchD_100043d6_caseD_0:
      local_28 = 0;
      if ((PTR_DAT_10010de8[(uint)bVar9 * 2 + 1] & 0x80) != 0) {
        FUN_10004aa9((int)(char)bVar9,param_1,&local_18);
        bVar9 = *param_2;
        param_2 = pbVar1 + 2;
      }
      FUN_10004aa9((int)(char)bVar9,param_1,&local_18);
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
        local_24 = FUN_10004b47((int *)&param_3);
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
        local_14 = FUN_10004b47((int *)&param_3);
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
          goto switchD_100043d6_caseD_0;
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
LAB_100047e7:
              local_30 = 7;
LAB_100047ee:
              local_10 = (undefined1 *)0x10;
              if ((local_8 & 0x80) != 0) {
                local_1a = '0';
                local_19 = (char)local_30 + 'Q';
                local_20 = 2;
              }
              goto LAB_10004858;
            }
            if (bVar9 != 0x43) {
              if ((bVar9 != 0x45) && (bVar9 != 0x47)) {
                if (bVar9 == 0x53) {
                  if ((local_8 & 0x830) == 0) {
                    local_8 = local_8 | 0x800;
                  }
                  goto LAB_10004595;
                }
                goto LAB_10004972;
              }
              local_38 = 1;
              bVar9 = bVar9 + 0x20;
              goto LAB_100045f6;
            }
            if ((local_8 & 0x830) == 0) {
              local_8 = local_8 | 0x800;
            }
LAB_10004623:
            if ((local_8 & 0x810) == 0) {
              uVar5 = FUN_10004b47((int *)&param_3);
              local_24c[0] = (char)uVar5;
              local_10 = (undefined1 *)0x1;
            }
            else {
              uVar5 = FUN_10004b64((int *)&param_3);
              local_10 = (undefined1 *)FUN_10007d2f(local_24c,(WCHAR)uVar5);
              if ((int)local_10 < 0) {
                local_2c = 1;
              }
            }
            pWVar4 = (WCHAR *)local_24c;
          }
          else if (bVar9 == 0x5a) {
            psVar6 = (short *)FUN_10004b47((int *)&param_3);
            if ((psVar6 == (short *)0x0) ||
               (pWVar4 = *(WCHAR **)(psVar6 + 2), pWVar4 == (WCHAR *)0x0)) {
              local_c = (WCHAR *)PTR_DAT_1000e8e4;
              pWVar4 = (WCHAR *)PTR_DAT_1000e8e4;
              goto LAB_10004768;
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
            if (bVar9 == 99) goto LAB_10004623;
            if (bVar9 == 100) goto LAB_1000484d;
          }
        }
        else {
LAB_100045f6:
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
          (*(code *)PTR___fptrap_1000e8ec)(&local_4c,local_24c,(int)(char)bVar9,local_14,local_38);
          uVar2 = local_8 & 0x80;
          if ((uVar2 != 0) && (local_14 == 0)) {
            (*(code *)PTR___fptrap_1000e8f8)(local_24c);
          }
          if ((bVar9 == 0x67) && (uVar2 == 0)) {
            (*(code *)PTR___fptrap_1000e8f0)(local_24c);
          }
          if (local_24c[0] == '-') {
            local_8 = local_8 | 0x100;
            pWVar4 = (WCHAR *)(local_24c + 1);
            local_c = pWVar4;
          }
LAB_10004768:
          local_10 = (undefined1 *)_strlen((char *)pWVar4);
          pWVar4 = local_c;
        }
      }
      else {
        if (bVar9 == 0x69) {
LAB_1000484d:
          local_8 = local_8 | 0x40;
        }
        else {
          if (bVar9 == 0x6e) {
            piVar7 = (int *)FUN_10004b47((int *)&param_3);
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
            goto LAB_10004858;
          }
          if (bVar9 == 0x70) {
            local_14 = 8;
            goto LAB_100047e7;
          }
          if (bVar9 == 0x73) {
LAB_10004595:
            iVar10 = local_14;
            if (local_14 == -1) {
              iVar10 = 0x7fffffff;
            }
            pWVar3 = (WCHAR *)FUN_10004b47((int *)&param_3);
            if ((local_8 & 0x810) == 0) {
              pWVar4 = pWVar3;
              if (pWVar3 == (WCHAR *)0x0) {
                pWVar3 = (WCHAR *)PTR_DAT_1000e8e4;
                pWVar4 = (WCHAR *)PTR_DAT_1000e8e4;
              }
              for (; (iVar10 != 0 && ((char)*pWVar3 != '\0')); pWVar3 = (WCHAR *)((int)pWVar3 + 1))
              {
                iVar10 = iVar10 + -1;
              }
              local_10 = (undefined1 *)((int)pWVar3 - (int)pWVar4);
            }
            else {
              if (pWVar3 == (WCHAR *)0x0) {
                pWVar3 = (WCHAR *)PTR_DAT_1000e8e8;
              }
              local_28 = 1;
              for (pWVar4 = pWVar3; (iVar10 != 0 && (*pWVar4 != L'\0')); pWVar4 = pWVar4 + 1) {
                iVar10 = iVar10 + -1;
              }
              local_10 = (undefined1 *)((int)pWVar4 - (int)pWVar3 >> 1);
              pWVar4 = pWVar3;
            }
            goto LAB_10004972;
          }
          if (bVar9 != 0x75) {
            if (bVar9 != 0x78) goto LAB_10004972;
            local_30 = 0x27;
            goto LAB_100047ee;
          }
        }
        local_10 = (undefined1 *)0xa;
LAB_10004858:
        if ((local_8 & 0x8000) == 0) {
          if ((local_8 & 0x20) == 0) {
            if ((local_8 & 0x40) == 0) {
              uVar2 = FUN_10004b47((int *)&param_3);
              uVar13 = (ulonglong)uVar2;
              goto LAB_100048ab;
            }
            uVar2 = FUN_10004b47((int *)&param_3);
          }
          else if ((local_8 & 0x40) == 0) {
            uVar2 = FUN_10004b47((int *)&param_3);
            uVar2 = uVar2 & 0xffff;
          }
          else {
            uVar5 = FUN_10004b47((int *)&param_3);
            uVar2 = (uint)(short)uVar5;
          }
          uVar13 = (ulonglong)(int)uVar2;
        }
        else {
          uVar13 = FUN_10004b54((int *)&param_3);
        }
LAB_100048ab:
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
LAB_10004972:
      local_c = pWVar4;
      uVar2 = local_8;
      if (local_2c == 0) {
        if ((local_8 & 0x40) != 0) {
          if ((local_8 & 0x100) == 0) {
            if ((local_8 & 1) == 0) {
              if ((local_8 & 2) == 0) goto LAB_100049aa;
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
LAB_100049aa:
        iVar10 = (local_24 - local_20) - (int)local_10;
        if ((local_8 & 0xc) == 0) {
          FUN_10004ade(0x20,iVar10,param_1,&local_18);
        }
        FUN_10004b0f(&local_1a,local_20,param_1,&local_18);
        if (((uVar2 & 8) != 0) && ((uVar2 & 4) == 0)) {
          FUN_10004ade(0x30,iVar10,param_1,&local_18);
        }
        if ((local_28 == 0) || (puVar12 = local_10, pWVar4 = local_c, (int)local_10 < 1)) {
          FUN_10004b0f((char *)local_c,(int)local_10,param_1,&local_18);
        }
        else {
          do {
            puVar12 = puVar12 + -1;
            iVar8 = FUN_10007d2f(local_3c,*pWVar4);
            if (iVar8 < 1) break;
            FUN_10004b0f(local_3c,iVar8,param_1,&local_18);
            pWVar4 = pWVar4 + 1;
          } while (puVar12 != (undefined1 *)0x0);
        }
        if ((local_8 & 4) != 0) {
          FUN_10004ade(0x20,iVar10,param_1,&local_18);
        }
      }
    }
    bVar9 = *param_2;
    pbVar1 = param_2;
  } while( true );
}



/* ================================================================
 * Function: FUN_10004aa9
 * Address:  10004aa9
 * ================================================================ */

void __cdecl FUN_10004aa9(uint param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_2 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    uVar2 = FUN_10004250(param_1,param_2);
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
 * Function: FUN_10004ade
 * Address:  10004ade
 * ================================================================ */

void __cdecl FUN_10004ade(uint param_1,int param_2,int *param_3,int *param_4)

{
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    FUN_10004aa9(param_1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}



/* ================================================================
 * Function: FUN_10004b0f
 * Address:  10004b0f
 * ================================================================ */

void __cdecl FUN_10004b0f(char *param_1,int param_2,int *param_3,int *param_4)

{
  char cVar1;
  
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    FUN_10004aa9((int)cVar1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}



/* ================================================================
 * Function: FUN_10004b47
 * Address:  10004b47
 * ================================================================ */

undefined4 __cdecl FUN_10004b47(int *param_1)

{
  *param_1 = *param_1 + 4;
  return *(undefined4 *)(*param_1 + -4);
}



/* ================================================================
 * Function: FUN_10004b54
 * Address:  10004b54
 * ================================================================ */

undefined8 __cdecl FUN_10004b54(int *param_1)

{
  *param_1 = *param_1 + 8;
  return *(undefined8 *)(*param_1 + -8);
}



/* ================================================================
 * Function: FUN_10004b64
 * Address:  10004b64
 * ================================================================ */

undefined4 __cdecl FUN_10004b64(int *param_1)

{
  *param_1 = *param_1 + 4;
  return CONCAT22((short)((uint)*param_1 >> 0x10),*(undefined2 *)(*param_1 + -4));
}



/* ================================================================
 * Function: FUN_10004b72
 * Address:  10004b72
 * ================================================================ */

void __fastcall FUN_10004b72(void *param_1)

{
  FUN_10007f1a(param_1,0x10000,0x30000);
  return;
}



/* ================================================================
 * Function: FUN_10004b84
 * Address:  10004b84
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10004b84(void)

{
  if (_DAT_1000c1c0 < _DAT_1000c1c8 - (_DAT_1000c1c8 / _DAT_1000c1d0) * _DAT_1000c1d0) {
    return 1;
  }
  return 0;
}



/* ================================================================
 * Function: FUN_10004bc2
 * Address:  10004bc2
 * ================================================================ */

void FUN_10004bc2(void)

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
  FUN_10004b84();
  return;
}



/* ================================================================
 * Function: FUN_10004beb
 * Address:  10004beb
 * ================================================================ */

void __cdecl FUN_10004beb(char *param_1)

{
  char cVar1;
  char cVar2;
  undefined *this;
  uint uVar3;
  undefined *puVar4;
  
  this = (undefined *)(int)*param_1;
  uVar3 = FUN_1000804b((uint)this);
  if (uVar3 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_10010ff4 < 2) {
        uVar3 = (byte)PTR_DAT_10010de8[*param_1 * 2] & 4;
        this = PTR_DAT_10010de8;
      }
      else {
        puVar4 = (undefined *)0x4;
        uVar3 = FUN_10006fa9(this,(int)*param_1,4);
        this = puVar4;
      }
    } while (uVar3 != 0);
  }
  cVar2 = *param_1;
  *param_1 = DAT_10010ff8;
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
 * Address:  10004cab
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
    FUN_10008517(in_ECX,(uint *)&local_c,(byte *)number);
    *(void **)argument = local_c;
    *(void **)(argument + 4) = local_8;
    return;
  }
  FUN_10008544(in_ECX,(uint *)&number,(byte *)number);
  *(char **)argument = number;
  return;
}



/* ================================================================
 * Function: FUN_10004ce9
 * Address:  10004ce9
 * ================================================================ */

undefined1 * __cdecl FUN_10004ce9(undefined8 *param_1,undefined1 *param_2,int param_3,int param_4)

{
  uint local_2c [6];
  int local_14 [4];
  
  FUN_100085e8((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),local_14,local_2c);
  FUN_10008571(param_2 + (uint)(0 < param_3) + (uint)(local_14[0] == 0x2d),param_3 + 1,(int)local_14
              );
  FUN_10004d4a(param_2,param_3,param_4,local_14,'\0');
  return param_2;
}



/* ================================================================
 * Function: FUN_10004d4a
 * Address:  10004d4a
 * ================================================================ */

undefined1 * __cdecl
FUN_10004d4a(undefined1 *param_1,int param_2,int param_3,int *param_4,char param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint *puVar3;
  int iVar4;
  
  if (param_5 != '\0') {
    FUN_10004fec(param_1 + (*param_4 == 0x2d),(uint)(0 < param_2));
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
    *puVar2 = DAT_10010ff8;
  }
  puVar3 = FUN_10003f10((uint *)(puVar2 + param_2 + (uint)(param_5 == '\0')),(uint *)"e+000");
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
 * Function: FUN_10004e0c
 * Address:  10004e0c
 * ================================================================ */

char * __cdecl FUN_10004e0c(undefined8 *param_1,char *param_2,size_t param_3)

{
  uint local_2c [6];
  int local_14;
  int local_10;
  
  FUN_100085e8((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),&local_14,local_2c);
  FUN_10008571(param_2 + (local_14 == 0x2d),local_10 + param_3,(int)&local_14);
  FUN_10004e61(param_2,param_3,&local_14,'\0');
  return param_2;
}



/* ================================================================
 * Function: FUN_10004e61
 * Address:  10004e61
 * ================================================================ */

char * __cdecl FUN_10004e61(char *param_1,size_t param_2,int *param_3,char param_4)

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
    FUN_10004fec(pcVar3,1);
    *pcVar3 = '0';
    pcVar3 = pcVar3 + 1;
  }
  else {
    pcVar3 = pcVar3 + param_3[1];
  }
  if (0 < (int)param_2) {
    FUN_10004fec(pcVar3,1);
    *pcVar3 = DAT_10010ff8;
    iVar1 = param_3[1];
    if (iVar1 < 0) {
      if ((param_4 != '\0') || (-iVar1 <= (int)param_2)) {
        param_2 = -iVar1;
      }
      FUN_10004fec(pcVar3 + 1,param_2);
      _memset(pcVar3 + 1,0x30,param_2);
    }
  }
  return param_1;
}



/* ================================================================
 * Function: FUN_10004f08
 * Address:  10004f08
 * ================================================================ */

void __cdecl FUN_10004f08(undefined8 *param_1,char *param_2,size_t param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  uint local_2c [6];
  int local_14;
  int local_10;
  
  FUN_100085e8((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),&local_14,local_2c);
  iVar1 = local_10 + -1;
  FUN_10008571(param_2 + (local_14 == 0x2d),param_3,(int)&local_14);
  local_10 = local_10 + -1;
  if ((local_10 < -4) || ((int)param_3 <= local_10)) {
    FUN_10004d4a(param_2,param_3,param_4,&local_14,'\x01');
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
    FUN_10004e61(param_2,param_3,&local_14,'\x01');
  }
  return;
}



/* ================================================================
 * Function: __cfltcvt
 * Address:  10004f9b
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
    puVar2 = FUN_10004ce9(arg,buffer,format,precision);
  }
  else {
    if (sizeInBytes == 0x66) {
      pcVar1 = FUN_10004e0c(arg,buffer,format);
      return (errno_t)pcVar1;
    }
    puVar2 = (undefined1 *)FUN_10004f08(arg,buffer,format,precision);
  }
  return (errno_t)puVar2;
}



/* ================================================================
 * Function: FUN_10004fec
 * Address:  10004fec
 * ================================================================ */

void __cdecl FUN_10004fec(char *param_1,int param_2)

{
  size_t sVar1;
  
  if (param_2 != 0) {
    sVar1 = _strlen(param_1);
    FUN_10008760((undefined4 *)(param_1 + param_2),(undefined4 *)param_1,sVar1 + 1);
  }
  return;
}



/* ================================================================
 * Function: FUN_10005011
 * Address:  10005011
 * ================================================================ */

void __cdecl FUN_10005011(undefined4 *param_1)

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
 * Function: FUN_1000503e
 * Address:  1000503e
 * ================================================================ */

int FUN_1000503e(void)

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
  
  FUN_10008e50();
  local_9c = 0x94;
  BVar3 = GetVersionExA((LPOSVERSIONINFOA)&local_9c);
  if (((BVar3 == 0) || (local_8c != 2)) || (local_98 < 5)) {
    aCStackY_18[0] = -0x68;
    aCStackY_18[1] = 'P';
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
      aCStackY_18[0] = -0x2a;
      aCStackY_18[1] = 'P';
      aCStackY_18[2] = '\0';
      aCStackY_18[3] = '\x10';
      iVar5 = _strncmp("__GLOBAL_HEAP_SELECTED",local_1230,0x16);
      if (iVar5 == 0) {
        pcVar7 = local_1230;
      }
      else {
        aCStackY_18[0] = -8;
        aCStackY_18[1] = 'P';
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
        aCStackY_18[0] = '^';
        aCStackY_18[1] = 'Q';
        aCStackY_18[2] = '\0';
        aCStackY_18[3] = '\x10';
        iVar5 = FUN_10008a9e(this,pbVar6,(int *)0x0,(void *)0xa);
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
    FUN_10005011((undefined4 *)&stack0xfffffff8);
    iVar5 = 3 - (uint)(unaff_BL < 6);
  }
  else {
    iVar5 = 1;
  }
  return iVar5;
}



/* ================================================================
 * Function: FUN_10005186
 * Address:  10005186
 * ================================================================ */

undefined4 __cdecl FUN_10005186(int param_1)

{
  undefined **ppuVar1;
  
  DAT_10012f60 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_10012f60 != (HANDLE)0x0) {
    DAT_10012f64 = FUN_1000503e();
    if (DAT_10012f64 == 3) {
      ppuVar1 = (undefined **)FUN_1000528b(0x3f8);
    }
    else {
      if (DAT_10012f64 != 2) {
        return 1;
      }
      ppuVar1 = FUN_10005adc();
    }
    if (ppuVar1 != (undefined **)0x0) {
      return 1;
    }
    HeapDestroy(DAT_10012f60);
  }
  return 0;
}



/* ================================================================
 * Function: FUN_100051e3
 * Address:  100051e3
 * ================================================================ */

void FUN_100051e3(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  
  if (DAT_10012f64 == 3) {
    iVar1 = 0;
    if (0 < DAT_10012f54) {
      puVar2 = (undefined4 *)((int)DAT_10012f58 + 0xc);
      do {
        VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
        VirtualFree((LPVOID)*puVar2,0,0x8000);
        HeapFree(DAT_10012f60,0,(LPVOID)puVar2[1]);
        puVar2 = puVar2 + 5;
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_10012f54);
    }
    HeapFree(DAT_10012f60,0,DAT_10012f58);
  }
  else if (DAT_10012f64 == 2) {
    ppuVar3 = &PTR_LOOP_1000e908;
    do {
      if (ppuVar3[4] != (undefined *)0x0) {
        VirtualFree(ppuVar3[4],0,0x8000);
      }
      ppuVar3 = (undefined **)*ppuVar3;
    } while (ppuVar3 != &PTR_LOOP_1000e908);
  }
  HeapDestroy(DAT_10012f60);
  return;
}



/* ================================================================
 * Function: FUN_1000528b
 * Address:  1000528b
 * ================================================================ */

undefined4 __cdecl FUN_1000528b(undefined4 param_1)

{
  DAT_10012f58 = HeapAlloc(DAT_10012f60,0,0x140);
  if (DAT_10012f58 == (LPVOID)0x0) {
    return 0;
  }
  DAT_10012f50 = 0;
  DAT_10012f54 = 0;
  DAT_10012f4c = DAT_10012f58;
  DAT_10012f5c = param_1;
  DAT_10012f44 = 0x10;
  return 1;
}



/* ================================================================
 * Function: FUN_100052d3
 * Address:  100052d3
 * ================================================================ */

uint __cdecl FUN_100052d3(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_10012f58;
  while( true ) {
    if (DAT_10012f58 + DAT_10012f54 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}



/* ================================================================
 * Function: FUN_100052fe
 * Address:  100052fe
 * ================================================================ */

void __cdecl FUN_100052fe(uint *param_1,int param_2)

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
      if (DAT_10012f50 != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_10012f48 * 0x8000 + DAT_10012f50[3]),0x8000,0x4000);
        DAT_10012f50[2] = DAT_10012f50[2] | 0x80000000U >> ((byte)DAT_10012f48 & 0x1f);
        *(undefined4 *)(DAT_10012f50[4] + 0xc4 + DAT_10012f48 * 4) = 0;
        *(char *)(DAT_10012f50[4] + 0x43) = *(char *)(DAT_10012f50[4] + 0x43) + -1;
        if (*(char *)(DAT_10012f50[4] + 0x43) == '\0') {
          DAT_10012f50[1] = DAT_10012f50[1] & 0xfffffffe;
        }
        if (DAT_10012f50[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_10012f50[3],0,0x8000);
          HeapFree(DAT_10012f60,0,(LPVOID)DAT_10012f50[4]);
          FUN_10008760(DAT_10012f50,DAT_10012f50 + 5,
                       (DAT_10012f54 * 0x14 - (int)DAT_10012f50) + -0x14 + DAT_10012f58);
          DAT_10012f54 = DAT_10012f54 + -1;
          if (DAT_10012f50 < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_10012f4c = DAT_10012f58;
        }
      }
      DAT_10012f50 = param_1;
      DAT_10012f48 = uVar14;
    }
  }
  return;
}



/* ================================================================
 * Function: FUN_10005627
 * Address:  10005627
 * ================================================================ */

int * __cdecl FUN_10005627(uint *param_1)

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
  
  puVar8 = DAT_10012f58 + DAT_10012f54 * 5;
  uVar6 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar7 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar5 = (byte)iVar7;
  param_1 = DAT_10012f4c;
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
  puVar11 = DAT_10012f58;
  if (param_1 == puVar8) {
    for (; (puVar11 < DAT_10012f4c && ((puVar11[1] & local_c) == 0 && (*puVar11 & local_10) == 0));
        puVar11 = puVar11 + 5) {
    }
    param_1 = puVar11;
    if (puVar11 == DAT_10012f4c) {
      for (; (puVar11 < puVar8 && (puVar11[2] == 0)); puVar11 = puVar11 + 5) {
      }
      puVar12 = DAT_10012f58;
      param_1 = puVar11;
      if (puVar11 == puVar8) {
        for (; (puVar12 < DAT_10012f4c && (puVar12[2] == 0)); puVar12 = puVar12 + 5) {
        }
        param_1 = puVar12;
        if ((puVar12 == DAT_10012f4c) && (param_1 = FUN_10005930(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar7 = FUN_100059e1((int)param_1);
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
  DAT_10012f4c = param_1;
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
    if (iVar9 == 0) goto LAB_100058ed;
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
LAB_100058ed:
  piVar10 = (int *)((int)piVar10 + iVar9);
  *piVar10 = uVar6 + 1;
  *(uint *)((int)piVar10 + (uVar6 - 4)) = uVar6 + 1;
  iVar7 = *piVar2;
  *piVar2 = iVar7 + 1;
  if (((iVar7 == 0) && (param_1 == DAT_10012f50)) && (local_8 == DAT_10012f48)) {
    DAT_10012f50 = (uint *)0x0;
  }
  *piVar4 = local_8;
  return piVar10 + 1;
}



/* ================================================================
 * Function: FUN_10005930
 * Address:  10005930
 * ================================================================ */

undefined4 * FUN_10005930(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_10012f54 == DAT_10012f44) {
    pvVar2 = HeapReAlloc(DAT_10012f60,0,DAT_10012f58,(DAT_10012f44 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_10012f44 = DAT_10012f44 + 0x10;
    DAT_10012f58 = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_10012f58 + DAT_10012f54 * 0x14);
  pvVar2 = HeapAlloc(DAT_10012f60,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_10012f54 = DAT_10012f54 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_10012f60,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}



/* ================================================================
 * Function: FUN_100059e1
 * Address:  100059e1
 * ================================================================ */

int __cdecl FUN_100059e1(int param_1)

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
 * Function: FUN_10005adc
 * Address:  10005adc
 * ================================================================ */

undefined ** FUN_10005adc(void)

{
  bool bVar1;
  int *lpAddress;
  LPVOID pvVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined **lpMem;
  
  if (DAT_1000e918 == -1) {
    lpMem = &PTR_LOOP_1000e908;
  }
  else {
    lpMem = HeapAlloc(DAT_10012f60,0,0x2020);
    if (lpMem == (undefined **)0x0) {
      return (undefined **)0x0;
    }
  }
  lpAddress = VirtualAlloc((LPVOID)0x0,0x400000,0x2000,4);
  if (lpAddress != (int *)0x0) {
    pvVar2 = VirtualAlloc(lpAddress,0x10000,0x1000,4);
    if (pvVar2 != (LPVOID)0x0) {
      if (lpMem == &PTR_LOOP_1000e908) {
        if (PTR_LOOP_1000e908 == (undefined *)0x0) {
          PTR_LOOP_1000e908 = (undefined *)&PTR_LOOP_1000e908;
        }
        if (PTR_LOOP_1000e90c == (undefined *)0x0) {
          PTR_LOOP_1000e90c = (undefined *)&PTR_LOOP_1000e908;
        }
      }
      else {
        *lpMem = (undefined *)&PTR_LOOP_1000e908;
        lpMem[1] = PTR_LOOP_1000e90c;
        PTR_LOOP_1000e90c = (undefined *)lpMem;
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
  if (lpMem != &PTR_LOOP_1000e908) {
    HeapFree(DAT_10012f60,0,lpMem);
  }
  return (undefined **)0x0;
}



/* ================================================================
 * Function: FUN_10005c20
 * Address:  10005c20
 * ================================================================ */

void __cdecl FUN_10005c20(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_10010928 == param_1) {
    PTR_LOOP_10010928 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_1000e908) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_10012f60,0,param_1);
    return;
  }
  DAT_1000e918 = 0xffffffff;
  return;
}



/* ================================================================
 * Function: FUN_10005c76
 * Address:  10005c76
 * ================================================================ */

void __cdecl FUN_10005c76(int param_1)

{
  BOOL BVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  int local_8;
  
  ppuVar4 = (undefined **)PTR_LOOP_1000e90c;
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
            DAT_10011878 = DAT_10011878 + -1;
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
          FUN_10005c20(ppuVar4);
        }
      }
    }
    if ((ppuVar5 == (undefined **)PTR_LOOP_1000e90c) || (ppuVar4 = ppuVar5, param_1 < 1)) {
      return;
    }
  } while( true );
}



/* ================================================================
 * Function: FUN_10005d38
 * Address:  10005d38
 * ================================================================ */

int __cdecl FUN_10005d38(undefined *param_1,undefined4 *param_2,uint *param_3)

{
  undefined **ppuVar1;
  uint uVar2;
  
  ppuVar1 = &PTR_LOOP_1000e908;
  while ((param_1 <= ppuVar1[4] || (ppuVar1[5] <= param_1))) {
    ppuVar1 = (undefined **)*ppuVar1;
    if (ppuVar1 == &PTR_LOOP_1000e908) {
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
 * Function: FUN_10005d8f
 * Address:  10005d8f
 * ================================================================ */

void __cdecl FUN_10005d8f(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x18 + (param_2 - *(int *)(param_1 + 0x10) >> 0xc) * 8);
  *piVar1 = *piVar1 + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_10011878 = DAT_10011878 + 1, DAT_10011878 == 0x20)) {
    FUN_10005c76(0x10);
  }
  return;
}



/* ================================================================
 * Function: FUN_10005dd4
 * Address:  10005dd4
 * ================================================================ */

/* WARNING: Type propagation algorithm not settling */

int * __cdecl FUN_10005dd4(uint param_1)

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
  
  piVar7 = (int *)PTR_LOOP_10010928;
  do {
    if (piVar7[4] != -1) {
      puVar8 = (uint *)piVar7[2];
      piVar4 = (int *)(((int)puVar8 + (-0x18 - (int)piVar7) >> 3) * 0x1000 + piVar7[4]);
      if (puVar8 < piVar7 + 0x806) {
        do {
          if (((int)param_1 <= (int)*puVar8) && (param_1 < puVar8[1])) {
            piVar5 = (int *)FUN_10005fdc(piVar4,*puVar8,param_1);
            if (piVar5 != (int *)0x0) goto LAB_10005e9f;
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
          piVar5 = (int *)FUN_10005fdc(piVar4,*puVar8,param_1);
          if (piVar5 != (int *)0x0) {
LAB_10005e9f:
            PTR_LOOP_10010928 = (undefined *)piVar7;
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
    if (piVar7 == (int *)PTR_LOOP_10010928) {
      ppuVar9 = &PTR_LOOP_1000e908;
      while ((ppuVar9[4] == (undefined *)0xffffffff || (ppuVar9[3] == (undefined *)0x0))) {
        ppuVar9 = (undefined **)*ppuVar9;
        if (ppuVar9 == &PTR_LOOP_1000e908) {
          ppuVar9 = FUN_10005adc();
          if (ppuVar9 == (undefined **)0x0) {
            return (int *)0x0;
          }
          piVar7 = (int *)ppuVar9[4];
          *(char *)(piVar7 + 2) = (char)param_1;
          PTR_LOOP_10010928 = (undefined *)ppuVar9;
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
      PTR_LOOP_10010928 = (undefined *)ppuVar9;
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
 * Function: FUN_10005fdc
 * Address:  10005fdc
 * ================================================================ */

int __cdecl FUN_10005fdc(int *param_1,uint param_2,uint param_3)

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
          goto LAB_100060ef;
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
LAB_100060ef:
  return (int)pbVar2 * 0x10 + (int)param_1 * -0xf;
}



/* ================================================================
 * Function: FUN_10006100
 * Address:  10006100
 * ================================================================ */

void FUN_10006100(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10010974);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10010964);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10010954);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10010934);
  return;
}



/* ================================================================
 * Function: FUN_10006129
 * Address:  10006129
 * ================================================================ */

void FUN_10006129(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_10010930;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_10010974)) && (ppuVar1 != &PTR_DAT_10010964)) &&
       ((ppuVar1 != &PTR_DAT_10010954 && (ppuVar1 != &PTR_DAT_10010934)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_100035e9(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x100109f0);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10010954);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10010964);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10010974);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10010934);
  return;
}



/* ================================================================
 * Function: FUN_10006195
 * Address:  10006195
 * ================================================================ */

void __cdecl FUN_10006195(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_10010930 + param_1;
  if ((&DAT_10010930)[param_1] == 0) {
    lpCriticalSection = _malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_10006195(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_100035e9((undefined *)lpCriticalSection);
    }
    FUN_100061f6(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}



/* ================================================================
 * Function: FUN_100061f6
 * Address:  100061f6
 * ================================================================ */

void __cdecl FUN_100061f6(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_10010930)[param_1]);
  return;
}



/* ================================================================
 * Function: __global_unwind2
 * Address:  1000620c
 * ================================================================ */

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x10006224,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



/* ================================================================
 * Function: __local_unwind2
 * Address:  1000624e
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
  puStack_18 = &LAB_1000622c;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_100062e2();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}



/* ================================================================
 * Function: FUN_100062e2
 * Address:  100062e2
 * ================================================================ */

void FUN_100062e2(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_100109f8 = *(undefined4 *)(unaff_EBP + 8);
  DAT_100109f4 = in_EAX;
  DAT_100109fc = unaff_EBP;
  return;
}



/* ================================================================
 * Function: FUN_100063c1
 * Address:  100063c1
 * ================================================================ */

void FUN_100063c1(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}



/* ================================================================
 * Function: FUN_100063dc
 * Address:  100063dc
 * ================================================================ */

undefined4 __cdecl FUN_100063dc(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_100118e4 != (code *)0x0) {
    iVar1 = (*DAT_100118e4)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



/* ================================================================
 * Function: FUN_100064b3
 * Address:  100064b3
 * ================================================================ */

void __cdecl FUN_100064b3(uint param_1)

{
  if ((0x100109ff < param_1) && (param_1 < 0x10010c61)) {
    FUN_10006195(((int)(param_1 + 0xeffef600) >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



/* ================================================================
 * Function: FUN_100064e2
 * Address:  100064e2
 * ================================================================ */

void __cdecl FUN_100064e2(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_10006195(param_1 + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



/* ================================================================
 * Function: FUN_10006505
 * Address:  10006505
 * ================================================================ */

void __cdecl FUN_10006505(uint param_1)

{
  if ((0x100109ff < param_1) && (param_1 < 0x10010c61)) {
    FUN_100061f6(((int)(param_1 + 0xeffef600) >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



/* ================================================================
 * Function: FUN_10006534
 * Address:  10006534
 * ================================================================ */

void __cdecl FUN_10006534(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_100061f6(param_1 + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



/* ================================================================
 * Function: FUN_10006557
 * Address:  10006557
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __cdecl FUN_10006557(LPCSTR param_1,char *param_2,uint param_3,undefined4 *param_4)

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
      uVar6 = DAT_10011a3c | 1;
      goto LAB_10006598;
    }
    if (cVar1 != 'w') {
      return (undefined4 *)0x0;
    }
    uVar5 = 0x301;
  }
  uVar6 = DAT_10011a3c | 2;
LAB_10006598:
  bVar2 = true;
LAB_1000659b:
  cVar1 = param_2[1];
  param_2 = param_2 + 1;
  if ((cVar1 == '\0') || (!bVar2)) {
    uVar5 = FUN_1000903d(param_1,uVar5,param_3,0x1a4);
    if ((int)uVar5 < 0) {
      return (undefined4 *)0x0;
    }
    _DAT_100118e8 = _DAT_100118e8 + 1;
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
        goto LAB_1000659b;
      }
    }
    else if (cVar1 == '+') {
      if ((uVar5 & 2) == 0) {
        uVar5 = uVar5 & 0xfffffffe | 2;
        uVar6 = uVar6 & 0xfffffffc | 0x80;
        goto LAB_1000659b;
      }
    }
    else if (cVar1 == 'D') {
      if ((uVar5 & 0x40) == 0) {
        uVar5 = uVar5 | 0x40;
        goto LAB_1000659b;
      }
    }
    else if (cVar1 == 'R') {
      if (!bVar3) {
        bVar3 = true;
        uVar5 = uVar5 | 0x10;
        goto LAB_1000659b;
      }
    }
    else if ((cVar1 == 'S') && (!bVar3)) {
      bVar3 = true;
      uVar5 = uVar5 | 0x20;
      goto LAB_1000659b;
    }
  }
  else {
    if (cVar1 == 'b') {
      if ((uVar5 & 0xc000) != 0) goto LAB_1000667b;
      uVar5 = uVar5 | 0x8000;
      goto LAB_1000659b;
    }
    if (cVar1 == 'c') {
      if (!bVar4) {
        bVar4 = true;
        uVar6 = uVar6 | 0x4000;
        goto LAB_1000659b;
      }
    }
    else {
      if (cVar1 != 'n') {
        if ((cVar1 != 't') || ((uVar5 & 0xc000) != 0)) goto LAB_1000667b;
        uVar5 = uVar5 | 0x4000;
        goto LAB_1000659b;
      }
      if (!bVar4) {
        bVar4 = true;
        uVar6 = uVar6 & 0xffffbfff;
        goto LAB_1000659b;
      }
    }
  }
LAB_1000667b:
  bVar2 = false;
  goto LAB_1000659b;
}



/* ================================================================
 * Function: FUN_100066c7
 * Address:  100066c7
 * ================================================================ */

undefined4 * FUN_100066c7(void)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)0x0;
  FUN_10006195(2);
  iVar3 = 0;
  if (0 < DAT_10012f40) {
    do {
      iVar1 = *(int *)(DAT_10011f34 + iVar3 * 4);
      if (iVar1 == 0) {
        iVar3 = iVar3 * 4;
        pvVar2 = _malloc(0x38);
        *(void **)(iVar3 + DAT_10011f34) = pvVar2;
        if (*(int *)(iVar3 + DAT_10011f34) != 0) {
          InitializeCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar3 + DAT_10011f34) + 0x20));
          EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar3 + DAT_10011f34) + 0x20));
          puVar4 = *(undefined4 **)(iVar3 + DAT_10011f34);
LAB_1000676b:
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
        FUN_100064e2(iVar3,iVar1);
        iVar1 = *(int *)(DAT_10011f34 + iVar3 * 4);
        if ((*(byte *)(iVar1 + 0xc) & 0x83) == 0) {
          puVar4 = *(undefined4 **)(DAT_10011f34 + iVar3 * 4);
          goto LAB_1000676b;
        }
        FUN_10006534(iVar3,iVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_10012f40);
  }
  FUN_100061f6(2);
  return puVar4;
}



/* ================================================================
 * Function: FUN_1000678f
 * Address:  1000678f
 * ================================================================ */

undefined4 __cdecl FUN_1000678f(uint param_1)

{
  undefined4 uVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_10011f20) &&
     ((*(byte *)((&DAT_10011e20)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000956c(param_1);
    uVar1 = FUN_100067ec(param_1);
    FUN_100095cb(param_1);
    return uVar1;
  }
  pDVar2 = FUN_10006a44();
  *pDVar2 = 9;
  pDVar2 = FUN_10006a4d();
  *pDVar2 = 0;
  return 0xffffffff;
}



/* ================================================================
 * Function: FUN_100067ec
 * Address:  100067ec
 * ================================================================ */

undefined4 __cdecl FUN_100067ec(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_1000952a(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_1000952a(2);
      iVar2 = FUN_1000952a(1);
      if (iVar2 == iVar1) goto LAB_1000683a;
    }
    hObject = (HANDLE)FUN_1000952a(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_1000683c;
    }
  }
LAB_1000683a:
  DVar4 = 0;
LAB_1000683c:
  FUN_100094ab(param_1);
  *(undefined1 *)((&DAT_10011e20)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_100069d1(DVar4);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}



/* ================================================================
 * Function: __freebuf
 * Address:  1000686f
 * ================================================================ */

/* Library Function - Single Match
    __freebuf
   
   Library: Visual Studio 2003 Release */

void __cdecl __freebuf(FILE *_File)

{
  if (((_File->_flag & 0x83U) != 0) && ((_File->_flag & 8U) != 0)) {
    FUN_100035e9(_File->_base);
    *(ushort *)&_File->_flag = (ushort)_File->_flag & 0xfbf7;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
    _File->_cnt = 0;
  }
  return;
}



/* ================================================================
 * Function: FUN_1000689a
 * Address:  1000689a
 * ================================================================ */

int __cdecl FUN_1000689a(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_100068c8(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((*(byte *)((int)param_1 + 0xd) & 0x40) != 0) {
    iVar1 = FUN_100095ed(param_1[4]);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}



/* ================================================================
 * Function: FUN_100068c8
 * Address:  100068c8
 * ================================================================ */

undefined4 __cdecl FUN_100068c8(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if ((((byte)param_1[3] & 3) == 2) && ((param_1[3] & 0x108U) != 0)) {
    uVar3 = *param_1 - param_1[2];
    if (0 < (int)uVar3) {
      uVar1 = FUN_10007ad2(param_1[4],(char *)param_1[2],uVar3);
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
 * Function: FUN_1000692d
 * Address:  1000692d
 * ================================================================ */

int __cdecl FUN_1000692d(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = 0;
  FUN_10006195(2);
  iVar4 = 0;
  if (0 < DAT_10012f40) {
    do {
      iVar2 = *(int *)(DAT_10011f34 + iVar4 * 4);
      if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0xc) & 0x83) != 0)) {
        FUN_100064e2(iVar4,iVar2);
        piVar1 = *(int **)(DAT_10011f34 + iVar4 * 4);
        if ((piVar1[3] & 0x83U) != 0) {
          if (param_1 == 1) {
            iVar2 = FUN_1000689a(piVar1);
            if (iVar2 != -1) {
              iVar3 = iVar3 + 1;
            }
          }
          else if ((param_1 == 0) && ((piVar1[3] & 2U) != 0)) {
            iVar2 = FUN_1000689a(piVar1);
            if (iVar2 == -1) {
              iVar5 = -1;
            }
          }
        }
        FUN_10006534(iVar4,*(int *)(DAT_10011f34 + iVar4 * 4));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_10012f40);
  }
  FUN_100061f6(2);
  if (param_1 != 1) {
    iVar3 = iVar5;
  }
  return iVar3;
}



/* ================================================================
 * Function: FUN_100069d1
 * Address:  100069d1
 * ================================================================ */

void __cdecl FUN_100069d1(uint param_1)

{
  DWORD *pDVar1;
  uint *puVar2;
  int iVar3;
  
  pDVar1 = FUN_10006a4d();
  iVar3 = 0;
  *pDVar1 = param_1;
  puVar2 = &DAT_10010c80;
  do {
    if (param_1 == *puVar2) {
      pDVar1 = FUN_10006a44();
      *pDVar1 = *(DWORD *)(iVar3 * 8 + 0x10010c84);
      return;
    }
    puVar2 = puVar2 + 2;
    iVar3 = iVar3 + 1;
  } while ((int)puVar2 < 0x10010de8);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    pDVar1 = FUN_10006a44();
    *pDVar1 = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    pDVar1 = FUN_10006a44();
    *pDVar1 = 8;
    return;
  }
  pDVar1 = FUN_10006a44();
  *pDVar1 = 0x16;
  return;
}



/* ================================================================
 * Function: FUN_10006a44
 * Address:  10006a44
 * ================================================================ */

DWORD * FUN_10006a44(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_100070d9();
  return pDVar1 + 2;
}



/* ================================================================
 * Function: FUN_10006a4d
 * Address:  10006a4d
 * ================================================================ */

DWORD * FUN_10006a4d(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_100070d9();
  return pDVar1 + 3;
}



/* ================================================================
 * Function: FUN_10006a56
 * Address:  10006a56
 * ================================================================ */

DWORD __cdecl FUN_10006a56(uint param_1,LONG param_2,DWORD param_3)

{
  DWORD DVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_10011f20) &&
     ((*(byte *)((&DAT_10011e20)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000956c(param_1);
    DVar1 = FUN_10006abb(param_1,param_2,param_3);
    FUN_100095cb(param_1);
    return DVar1;
  }
  pDVar2 = FUN_10006a44();
  *pDVar2 = 9;
  pDVar2 = FUN_10006a4d();
  *pDVar2 = 0;
  return 0xffffffff;
}



/* ================================================================
 * Function: FUN_10006abb
 * Address:  10006abb
 * ================================================================ */

DWORD __cdecl FUN_10006abb(uint param_1,LONG param_2,DWORD param_3)

{
  byte *pbVar1;
  HANDLE hFile;
  DWORD *pDVar2;
  DWORD DVar3;
  uint uVar4;
  
  hFile = (HANDLE)FUN_1000952a(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    pDVar2 = FUN_10006a44();
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
      pbVar1 = (byte *)((&DAT_10011e20)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24);
      *pbVar1 = *pbVar1 & 0xfd;
      return DVar3;
    }
    FUN_100069d1(uVar4);
  }
  return 0xffffffff;
}



/* ================================================================
 * Function: FUN_10006b2e
 * Address:  10006b2e
 * ================================================================ */

int __cdecl FUN_10006b2e(char *param_1)

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
  local_8 = FUN_10006a56(uVar1,0,1);
  if ((int)local_8 < 0) {
LAB_10006bbc:
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
        pDVar4 = FUN_10006a44();
        *pDVar4 = 0x16;
        goto LAB_10006bbc;
      }
    }
    else {
      pcVar9 = pcVar7;
      if ((*(byte *)((&DAT_10011e20)[(int)uVar1 >> 5] + 4 + (uVar1 & 0x1f) * 0x24) & 0x80) != 0) {
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
          if ((*(byte *)(iVar10 + 4 + (&DAT_10011e20)[(int)uVar1 >> 5]) & 0x80) != 0) {
            DVar6 = FUN_10006a56(uVar1,0,2);
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
              FUN_10006a56(uVar1,local_8,0);
              pcVar8 = (char *)0x200;
              if ((((char *)0x200 < pcVar5) || ((*(uint *)(param_1 + 0xc) & 8) == 0)) ||
                 ((*(uint *)(param_1 + 0xc) & 0x400) != 0)) {
                pcVar8 = *(char **)(param_1 + 0x18);
              }
              bVar3 = *(byte *)(iVar10 + 4 + (&DAT_10011e20)[(int)uVar1 >> 5]) & 4;
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
 * Function: FUN_10006c8f
 * Address:  10006c8f
 * ================================================================ */

uint __cdecl FUN_10006c8f(undefined4 *param_1)

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
        FUN_10007cc2(param_1);
      }
      else {
        *param_1 = param_1[2];
      }
      iVar3 = FUN_10006d6b(param_1[4],(char *)param_1[2],(char *)param_1[6]);
      param_1[1] = iVar3;
      if ((iVar3 != 0) && (iVar3 != -1)) {
        if ((param_1[3] & 0x82) == 0) {
          uVar2 = param_1[4];
          if (uVar2 == 0xffffffff) {
            puVar4 = &DAT_10011008;
          }
          else {
            puVar4 = (undefined *)((&DAT_10011e20)[(int)uVar2 >> 5] + (uVar2 & 0x1f) * 0x24);
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
 * Function: FUN_10006d6b
 * Address:  10006d6b
 * ================================================================ */

int __cdecl FUN_10006d6b(uint param_1,char *param_2,char *param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_10011f20) &&
     ((*(byte *)((&DAT_10011e20)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000956c(param_1);
    iVar1 = FUN_10006dd0(param_1,param_2,param_3);
    FUN_100095cb(param_1);
    return iVar1;
  }
  pDVar2 = FUN_10006a44();
  *pDVar2 = 9;
  pDVar2 = FUN_10006a4d();
  *pDVar2 = 0;
  return -1;
}



/* ================================================================
 * Function: FUN_10006dd0
 * Address:  10006dd0
 * ================================================================ */

int __cdecl FUN_10006dd0(uint param_1,char *param_2,char *param_3)

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
    piVar1 = &DAT_10011e20 + ((int)param_1 >> 5);
    iVar9 = (param_1 & 0x1f) * 0x24;
    bVar4 = *(byte *)((&DAT_10011e20)[(int)param_1 >> 5] + iVar9 + 4);
    if ((bVar4 & 2) == 0) {
      pcVar8 = param_2;
      if (((bVar4 & 0x48) != 0) &&
         (cVar3 = *(char *)((&DAT_10011e20)[(int)param_1 >> 5] + iVar9 + 5), cVar3 != '\n')) {
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
          pDVar7 = FUN_10006a44();
          *pDVar7 = 9;
          pDVar7 = FUN_10006a4d();
          *pDVar7 = 5;
        }
        else {
          if (DVar6 == 0x6d) {
            return 0;
          }
          FUN_100069d1(DVar6);
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
                goto LAB_10006f5b;
              }
              *pcVar8 = '\r';
              pcVar8 = pcVar8 + 1;
              param_3 = param_3 + 1;
            }
            else {
              param_3 = param_3 + 1;
              BVar5 = ReadFile(*(HANDLE *)(*piVar1 + iVar9),&local_5,1,&local_10,(LPOVERLAPPED)0x0);
              if (((BVar5 == 0) && (DVar6 = GetLastError(), DVar6 != 0)) || (local_10 == 0)) {
LAB_10006f75:
                *pcVar8 = '\r';
LAB_10006f78:
                pcVar8 = pcVar8 + 1;
              }
              else if ((*(byte *)(*piVar1 + 4 + iVar9) & 0x48) == 0) {
                if ((pcVar8 == param_2) && (local_5 == '\n')) {
LAB_10006f5b:
                  *pcVar8 = '\n';
                  goto LAB_10006f78;
                }
                FUN_10006abb(param_1,-1,1);
                if (local_5 != '\n') goto LAB_10006f75;
              }
              else {
                if (local_5 == '\n') goto LAB_10006f5b;
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
 * Function: FUN_10006fa9
 * Address:  10006fa9
 * ================================================================ */

uint __thiscall FUN_10006fa9(void *this,int param_1,uint param_2)

{
  BOOL BVar1;
  int iVar2;
  undefined4 local_8;
  
  if (param_1 + 1U < 0x101) {
    param_1._2_2_ = *(ushort *)(PTR_DAT_10010de8 + param_1 * 2);
  }
  else {
    if ((PTR_DAT_10010de8[(param_1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      local_8 = CONCAT31((int3)((uint)this >> 8),(char)param_1) & 0xffff00ff;
      iVar2 = 1;
    }
    else {
      local_8._0_2_ = CONCAT11((char)param_1,(char)((uint)param_1 >> 8));
      local_8 = CONCAT22((short)((uint)this >> 0x10),(undefined2)local_8) & 0xff00ffff;
      iVar2 = 2;
    }
    BVar1 = FUN_10009680(1,(LPCSTR)&local_8,iVar2,(LPWORD)((int)&param_1 + 2),0,0,1);
    if (BVar1 == 0) {
      return 0;
    }
  }
  return param_1._2_2_ & param_2;
}



/* ================================================================
 * Function: FUN_10007054
 * Address:  10007054
 * ================================================================ */

undefined4 FUN_10007054(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_10006100();
  DAT_10011000 = TlsAlloc();
  if (DAT_10011000 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_10008e7f(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_10011000,lpTlsValue);
      if (BVar1 != 0) {
        FUN_100070c6((int)lpTlsValue);
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
 * Function: FUN_100070a8
 * Address:  100070a8
 * ================================================================ */

void FUN_100070a8(void)

{
  FUN_10006129();
  if (DAT_10011000 != 0xffffffff) {
    TlsFree(DAT_10011000);
    DAT_10011000 = 0xffffffff;
  }
  return;
}



/* ================================================================
 * Function: FUN_100070c6
 * Address:  100070c6
 * ================================================================ */

void __cdecl FUN_100070c6(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_100110f0;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}



/* ================================================================
 * Function: FUN_100070d9
 * Address:  100070d9
 * ================================================================ */

DWORD * FUN_100070d9(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_10011000);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_10008e7f(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_10011000,lpTlsValue);
      if (BVar1 != 0) {
        FUN_100070c6((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        goto LAB_10007134;
      }
    }
    __amsg_exit(0x10);
  }
LAB_10007134:
  SetLastError(dwErrCode);
  return lpTlsValue;
}



/* ================================================================
 * Function: FUN_10007140
 * Address:  10007140
 * ================================================================ */

void __cdecl FUN_10007140(undefined *param_1)

{
  if (DAT_10011000 != 0xffffffff) {
    if ((param_1 != (undefined *)0x0) ||
       (param_1 = TlsGetValue(DAT_10011000), param_1 != (undefined *)0x0)) {
      if (*(undefined **)(param_1 + 0x24) != (undefined *)0x0) {
        FUN_100035e9(*(undefined **)(param_1 + 0x24));
      }
      if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
        FUN_100035e9(*(undefined **)(param_1 + 0x28));
      }
      if (*(undefined **)(param_1 + 0x30) != (undefined *)0x0) {
        FUN_100035e9(*(undefined **)(param_1 + 0x30));
      }
      if (*(undefined **)(param_1 + 0x38) != (undefined *)0x0) {
        FUN_100035e9(*(undefined **)(param_1 + 0x38));
      }
      if (*(undefined **)(param_1 + 0x40) != (undefined *)0x0) {
        FUN_100035e9(*(undefined **)(param_1 + 0x40));
      }
      if (*(undefined **)(param_1 + 0x44) != (undefined *)0x0) {
        FUN_100035e9(*(undefined **)(param_1 + 0x44));
      }
      if (*(undefined **)(param_1 + 0x50) != &DAT_100110f0) {
        FUN_100035e9(*(undefined **)(param_1 + 0x50));
      }
      FUN_100035e9(param_1);
    }
    TlsSetValue(DAT_10011000,(LPVOID)0x0);
    return;
  }
  return;
}



/* ================================================================
 * Function: FUN_100071e0
 * Address:  100071e0
 * ================================================================ */

void FUN_100071e0(void)

{
  if (PTR_FUN_1000e8d4 != (undefined *)0x0) {
    (*(code *)PTR_FUN_1000e8d4)();
  }
  FUN_100072e4((undefined4 *)&DAT_1000d008,(undefined4 *)&DAT_1000d014);
  FUN_100072e4((undefined4 *)&DAT_1000d000,(undefined4 *)&DAT_1000d004);
  return;
}



/* ================================================================
 * Function: __exit
 * Address:  1000720d
 * ================================================================ */

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __exit(int _Code)

{
  FUN_1000722d(_Code,1,0);
  return;
}



/* ================================================================
 * Function: FUN_1000721e
 * Address:  1000721e
 * ================================================================ */

void FUN_1000721e(void)

{
  FUN_1000722d(0,0,1);
  return;
}



/* ================================================================
 * Function: FUN_1000722d
 * Address:  1000722d
 * ================================================================ */

void __cdecl FUN_1000722d(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_100072d2();
  if (DAT_1001192c == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_10011928 = 1;
  DAT_10011924 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_10011f30 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_10011f2c - 4), DAT_10011f30 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_10011f30 <= puVar1);
    }
    FUN_100072e4((undefined4 *)&DAT_1000d018,(undefined4 *)&DAT_1000d020);
  }
  FUN_100072e4((undefined4 *)&DAT_1000d024,(undefined4 *)&DAT_1000d028);
  if (param_3 == 0) {
    DAT_1001192c = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_100072db();
  return;
}



/* ================================================================
 * Function: FUN_100072d2
 * Address:  100072d2
 * ================================================================ */

void FUN_100072d2(void)

{
  FUN_10006195(0xd);
  return;
}



/* ================================================================
 * Function: FUN_100072db
 * Address:  100072db
 * ================================================================ */

void FUN_100072db(void)

{
  FUN_100061f6(0xd);
  return;
}



/* ================================================================
 * Function: FUN_100072e4
 * Address:  100072e4
 * ================================================================ */

void __cdecl FUN_100072e4(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}



/* ================================================================
 * Function: FUN_100072fe
 * Address:  100072fe
 * ================================================================ */

void FUN_100072fe(void)

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
  DAT_10011f20 = 0x20;
  DAT_10011e20 = puVar2;
  for (; puVar2 < DAT_10011e20 + 0x120; puVar2 = puVar2 + 9) {
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
    if ((int)DAT_10011f20 < (int)UVar8) {
      puVar2 = &DAT_10011e24;
      do {
        puVar3 = _malloc(0x480);
        UVar9 = DAT_10011f20;
        if (puVar3 == (undefined4 *)0x0) break;
        DAT_10011f20 = DAT_10011f20 + 0x20;
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
      } while ((int)DAT_10011f20 < (int)UVar8);
    }
    uVar7 = 0;
    if (0 < (int)UVar9) {
      do {
        if (((*(HANDLE *)local_8 != (HANDLE)0xffffffff) && ((*pUVar5 & 1) != 0)) &&
           (((*pUVar5 & 8) != 0 || (DVar4 = GetFileType(*(HANDLE *)local_8), DVar4 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_10011e20)[(int)uVar7 >> 5] + (uVar7 & 0x1f) * 0x24);
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
    puVar2 = DAT_10011e20 + iVar6 * 9;
    if (DAT_10011e20[iVar6 * 9] == -1) {
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
          goto LAB_100074a3;
        }
      }
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x40;
    }
    else {
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x80;
    }
LAB_100074a3:
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      SetHandleCount(DAT_10011f20);
      return;
    }
  } while( true );
}



/* ================================================================
 * Function: FUN_100074ba
 * Address:  100074ba
 * ================================================================ */

void FUN_100074ba(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  uint uVar2;
  
  puVar1 = &DAT_10011e20;
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
      FUN_100035e9((undefined *)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x10011f20);
  return;
}



/* ================================================================
 * Function: FUN_1000750e
 * Address:  1000750e
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000750e(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  
  if (DAT_10011f28 == 0) {
    FUN_10009ba1();
  }
  iVar5 = 0;
  for (puVar6 = DAT_10011868; (char)*puVar6 != '\0'; puVar6 = (uint *)((int)puVar6 + sVar2 + 1)) {
    if ((char)*puVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen((char *)puVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  _DAT_1001190c = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = (char)*DAT_10011868;
  puVar6 = DAT_10011868;
  while (cVar1 != '\0') {
    sVar2 = _strlen((char *)puVar6);
    if ((char)*puVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_10003f10((uint *)*puVar3,puVar6);
      puVar3 = puVar3 + 1;
    }
    puVar6 = (uint *)((int)puVar6 + sVar2 + 1);
    cVar1 = (char)*puVar6;
  }
  FUN_100035e9((undefined *)DAT_10011868);
  DAT_10011868 = (uint *)0x0;
  *puVar3 = 0;
  _DAT_10011f24 = 1;
  return;
}



/* ================================================================
 * Function: FUN_100075c7
 * Address:  100075c7
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100075c7(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_10011f28 == 0) {
    FUN_10009ba1();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_10011930,0x104);
  _DAT_1001191c = &DAT_10011930;
  pbVar2 = &DAT_10011930;
  if (*DAT_10012f68 != 0) {
    pbVar2 = DAT_10012f68;
  }
  FUN_10007660(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_10007660(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_10011904 = puVar1;
  _DAT_10011900 = local_8 + -1;
  return;
}



/* ================================================================
 * Function: FUN_10007660
 * Address:  10007660
 * ================================================================ */

void __cdecl FUN_10007660(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

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
      if (((*(byte *)((int)&DAT_10011d00 + bVar1 + 1) & 4) != 0) &&
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
      if ((*(byte *)((int)&DAT_10011d00 + bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        pbVar4 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_1000770b;
      param_1 = pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_1000770b:
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
          if ((*(byte *)((int)&DAT_10011d00 + bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if ((*(byte *)((int)&DAT_10011d00 + bVar1 + 1) & 4) != 0) {
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
 * Function: FUN_10007814
 * Address:  10007814
 * ================================================================ */

LPSTR FUN_10007814(void)

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
  if (DAT_10011a34 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_10011a34 = 1;
LAB_1000786b:
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
        FUN_100035e9(pCVar6);
        local_8 = (LPSTR)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return local_8;
    }
    pCVar9 = GetEnvironmentStrings();
    if (pCVar9 == (LPCH)0x0) {
      return (LPSTR)0x0;
    }
    DAT_10011a34 = 2;
  }
  else {
    if (DAT_10011a34 == 1) goto LAB_1000786b;
    if (DAT_10011a34 != 2) {
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
    FUN_100036e0((undefined4 *)pCVar6,(undefined4 *)pCVar9,(uint)(pcVar7 + (1 - (int)pCVar9)));
  }
  FreeEnvironmentStringsA(pCVar9);
  return pCVar6;
}



/* ================================================================
 * Function: FUN_10007946
 * Address:  10007946
 * ================================================================ */

void FUN_10007946(void)

{
  if ((DAT_10011870 == 1) || ((DAT_10011870 == 0 && (DAT_10011874 == 1)))) {
    FUN_1000797f(0xfc);
    if (DAT_10011a38 != (code *)0x0) {
      (*DAT_10011a38)();
    }
    FUN_1000797f(0xff);
  }
  return;
}



/* ================================================================
 * Function: FUN_1000797f
 * Address:  1000797f
 * ================================================================ */

void __cdecl FUN_1000797f(DWORD param_1)

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
  pDVar2 = &DAT_10011030;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while ((int)pDVar2 < 0x100110c0);
  if (param_1 == (&DAT_10011030)[iVar5 * 2]) {
    if ((DAT_10011870 == 1) || ((DAT_10011870 == 0 && (DAT_10011874 == 1)))) {
      pDVar2 = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x10011034);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar4,pDVar2,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_10003f10(local_1a8,(uint *)"<program name unknown>");
      }
      _Dest = local_1a8;
      sVar4 = _strlen((char *)local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen((char *)local_1a8);
        _Dest = (uint *)(auStackY_1e3 + sVar4);
        _strncpy((char *)_Dest,"...",3);
      }
      FUN_10003f10(local_a4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_10003f20(local_a4,_Dest);
      FUN_10003f20(local_a4,(uint *)&DAT_1000c4f4);
      FUN_10003f20(local_a4,*(uint **)(iVar5 * 8 + 0x10011034));
      auStackY_1e3._3_4_ = 0x10007aa3;
      FUN_10009bbd(local_a4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}



/* ================================================================
 * Function: FUN_10007ad2
 * Address:  10007ad2
 * ================================================================ */

int __cdecl FUN_10007ad2(uint param_1,char *param_2,uint param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_10011f20) &&
     ((*(byte *)((&DAT_10011e20)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000956c(param_1);
    iVar1 = FUN_10007b37(param_1,param_2,param_3);
    FUN_100095cb(param_1);
    return iVar1;
  }
  pDVar2 = FUN_10006a44();
  *pDVar2 = 9;
  pDVar2 = FUN_10006a4d();
  *pDVar2 = 0;
  return -1;
}



/* ================================================================
 * Function: FUN_10007b37
 * Address:  10007b37
 * ================================================================ */

int __cdecl FUN_10007b37(DWORD param_1,char *param_2,uint param_3)

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
LAB_10007b50:
    iVar4 = 0;
  }
  else {
    piVar1 = &DAT_10011e20 + ((int)param_1 >> 5);
    iVar4 = (param_1 & 0x1f) * 0x24;
    if ((*(byte *)(*piVar1 + 4 + iVar4) & 0x20) != 0) {
      FUN_10006abb(param_1,0,2);
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
LAB_10007c1f:
      if (local_c != 0) {
        return local_c - local_14;
      }
      if (param_1 == 0) goto LAB_10007c91;
      if (param_1 == 5) {
        pDVar7 = FUN_10006a44();
        *pDVar7 = 9;
        pDVar7 = FUN_10006a4d();
        *pDVar7 = 5;
      }
      else {
        FUN_100069d1(param_1);
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
            goto LAB_10007c1f;
          }
          local_c = local_c + local_10;
          if (((int)local_10 < (int)pcVar5 - (int)local_418) ||
             (param_3 <= (uint)((int)local_8 - (int)param_2))) goto LAB_10007c1f;
        } while( true );
      }
LAB_10007c91:
      if (((*(byte *)(*piVar1 + 4 + iVar4) & 0x40) != 0) && (*param_2 == '\x1a')) goto LAB_10007b50;
      pDVar7 = FUN_10006a44();
      *pDVar7 = 0x1c;
      pDVar7 = FUN_10006a4d();
      *pDVar7 = 0;
    }
    iVar4 = -1;
  }
  return iVar4;
}



/* ================================================================
 * Function: FUN_10007cc2
 * Address:  10007cc2
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10007cc2(undefined4 *param_1)

{
  void *pvVar1;
  
  _DAT_100118e8 = _DAT_100118e8 + 1;
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
 * Function: FUN_10007d06
 * Address:  10007d06
 * ================================================================ */

byte __cdecl FUN_10007d06(uint param_1)

{
  if (DAT_10011f20 <= param_1) {
    return 0;
  }
  return *(byte *)((&DAT_10011e20)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0x40;
}



/* ================================================================
 * Function: FUN_10007d2f
 * Address:  10007d2f
 * ================================================================ */

int __cdecl FUN_10007d2f(LPSTR param_1,WCHAR param_2)

{
  int iVar1;
  bool bVar2;
  
  InterlockedIncrement((LONG *)&DAT_10011be0);
  bVar2 = DAT_10011bdc != 0;
  if (bVar2) {
    InterlockedDecrement((LONG *)&DAT_10011be0);
    FUN_10006195(0x13);
  }
  iVar1 = FUN_10007d88(param_1,param_2);
  if (bVar2) {
    FUN_100061f6(0x13);
  }
  else {
    InterlockedDecrement((LONG *)&DAT_10011be0);
  }
  return iVar1;
}



/* ================================================================
 * Function: FUN_10007d88
 * Address:  10007d88
 * ================================================================ */

int __cdecl FUN_10007d88(LPSTR param_1,WCHAR param_2)

{
  LPSTR lpMultiByteStr;
  int iVar1;
  DWORD *pDVar2;
  
  lpMultiByteStr = param_1;
  if (param_1 == (LPSTR)0x0) {
    return 0;
  }
  if (DAT_10011a68 == 0) {
    if ((ushort)param_2 < 0x100) {
      *param_1 = (CHAR)param_2;
      return 1;
    }
  }
  else {
    param_1 = (LPSTR)0x0;
    iVar1 = WideCharToMultiByte(DAT_10011a78,0x220,&param_2,1,lpMultiByteStr,DAT_10010ff4,
                                (LPCSTR)0x0,(LPBOOL)&param_1);
    if ((iVar1 != 0) && (param_1 == (LPSTR)0x0)) {
      return iVar1;
    }
  }
  pDVar2 = FUN_10006a44();
  *pDVar2 = 0x2a;
  return -1;
}



/* ================================================================
 * Function: __aulldiv
 * Address:  10007e00
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
 * Address:  10007e70
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
 * Function: FUN_10007ee5
 * Address:  10007ee5
 * ================================================================ */

uint __thiscall FUN_10007ee5(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  undefined2 in_FPUControlWord;
  undefined4 local_8;
  
  local_8 = CONCAT22((short)((uint)this >> 0x10),in_FPUControlWord);
  uVar1 = FUN_10007f30(local_8);
  uVar1 = uVar1 & ~param_2 | param_1 & param_2;
  FUN_10007fc2(uVar1);
  return uVar1;
}



/* ================================================================
 * Function: FUN_10007f1a
 * Address:  10007f1a
 * ================================================================ */

void __thiscall FUN_10007f1a(void *this,uint param_1,uint param_2)

{
  FUN_10007ee5(this,param_1,param_2 & 0xfff7ffff);
  return;
}



/* ================================================================
 * Function: FUN_10007f30
 * Address:  10007f30
 * ================================================================ */

uint __cdecl FUN_10007f30(uint param_1)

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
 * Function: FUN_10007fc2
 * Address:  10007fc2
 * ================================================================ */

uint __cdecl FUN_10007fc2(uint param_1)

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
 * Function: FUN_1000804b
 * Address:  1000804b
 * ================================================================ */

uint __cdecl FUN_1000804b(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_10011a68 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      return param_1 + 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_10011be0);
    bVar1 = DAT_10011bdc != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_10011be0);
      this = (void *)0x13;
      FUN_10006195(0x13);
    }
    param_1 = FUN_100080ba(this,param_1);
    if (bVar1) {
      FUN_100061f6(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_10011be0);
    }
  }
  return param_1;
}



/* ================================================================
 * Function: FUN_100080ba
 * Address:  100080ba
 * ================================================================ */

uint __thiscall FUN_100080ba(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_10011a68 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      uVar1 = param_1 + 0x20;
    }
  }
  else {
    iVar3 = 1;
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_10010ff4 < 2) {
        uVar2 = (byte)PTR_DAT_10010de8[param_1 * 2] & 1;
      }
      else {
        uVar2 = FUN_10006fa9(this,param_1,1);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_10010de8[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_10009d4e(DAT_10011a68,0x100,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
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
 * Function: FUN_10008185
 * Address:  10008185
 * ================================================================ */

undefined4 __cdecl FUN_10008185(int param_1,int param_2)

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
 * Function: FUN_100081ce
 * Address:  100081ce
 * ================================================================ */

void __cdecl FUN_100081ce(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  
  puVar3 = (uint *)(param_1 + (param_2 / 0x20) * 4);
  iVar1 = FUN_10009f9d(*puVar3,1 << (0x1fU - (char)(param_2 % 0x20) & 0x1f),puVar3);
  iVar2 = param_2 / 0x20 + -1;
  if (-1 < iVar2) {
    puVar3 = (uint *)(param_1 + iVar2 * 4);
    do {
      if (iVar1 == 0) {
        return;
      }
      iVar1 = FUN_10009f9d(*puVar3,1,puVar3);
      iVar2 = iVar2 + -1;
      puVar3 = puVar3 + -1;
    } while (-1 < iVar2);
  }
  return;
}



/* ================================================================
 * Function: FUN_10008224
 * Address:  10008224
 * ================================================================ */

undefined4 __cdecl FUN_10008224(int param_1,int param_2)

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
     (iVar2 = FUN_10008185(param_1,param_2 + 1), iVar2 == 0)) {
    local_8 = FUN_100081ce(param_1,param_2 + -1);
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
 * Function: FUN_100082b0
 * Address:  100082b0
 * ================================================================ */

void __cdecl FUN_100082b0(int param_1,undefined4 *param_2)

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
 * Function: FUN_100082cb
 * Address:  100082cb
 * ================================================================ */

void __cdecl FUN_100082cb(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ================================================================
 * Function: FUN_100082d7
 * Address:  100082d7
 * ================================================================ */

undefined4 __cdecl FUN_100082d7(int *param_1)

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
 * Function: FUN_100082f2
 * Address:  100082f2
 * ================================================================ */

void __cdecl FUN_100082f2(uint *param_1,uint param_2)

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
 * Function: FUN_1000837f
 * Address:  1000837f
 * ================================================================ */

undefined4 __cdecl FUN_1000837f(ushort *param_1,uint *param_2,int *param_3)

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
    iVar2 = FUN_100082d7((int *)&local_10);
    if (iVar2 != 0) {
LAB_100084ab:
      uVar5 = 0;
      goto LAB_100084ad;
    }
    FUN_100082cb(&local_10);
  }
  else {
    FUN_100082b0((int)local_1c,&local_10);
    iVar2 = FUN_10008224((int)&local_10,param_3[2]);
    if (iVar2 != 0) {
      iVar4 = uVar3 - 0x3ffe;
    }
    iVar2 = param_3[1];
    if (iVar4 < iVar2 - param_3[2]) {
      FUN_100082cb(&local_10);
    }
    else {
      if (iVar2 < iVar4) {
        if (*param_3 <= iVar4) {
          FUN_100082cb(&local_10);
          local_10 = local_10 | 0x80000000;
          FUN_100082f2(&local_10,param_3[3]);
          iVar4 = param_3[5] + *param_3;
          uVar5 = 1;
          goto LAB_100084ad;
        }
        local_10 = local_10 & 0x7fffffff;
        iVar4 = param_3[5] + iVar4;
        FUN_100082f2(&local_10,param_3[3]);
        goto LAB_100084ab;
      }
      FUN_100082b0((int)&local_10,local_1c);
      FUN_100082f2(&local_10,iVar2 - iVar4);
      FUN_10008224((int)&local_10,param_3[2]);
      FUN_100082f2(&local_10,param_3[3] + 1);
    }
  }
  iVar4 = 0;
  uVar5 = 2;
LAB_100084ad:
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
 * Function: FUN_100084eb
 * Address:  100084eb
 * ================================================================ */

void __cdecl FUN_100084eb(ushort *param_1,uint *param_2)

{
  FUN_1000837f(param_1,param_2,(int *)&DAT_100110c0);
  return;
}



/* ================================================================
 * Function: FUN_10008501
 * Address:  10008501
 * ================================================================ */

void __cdecl FUN_10008501(ushort *param_1,uint *param_2)

{
  FUN_1000837f(param_1,param_2,(int *)&DAT_100110d8);
  return;
}



/* ================================================================
 * Function: FUN_10008517
 * Address:  10008517
 * ================================================================ */

void __thiscall FUN_10008517(void *this,uint *param_1,byte *param_2)

{
  ushort local_10 [6];
  
  FUN_1000a13e(this,local_10,(int *)&param_2,param_2,0,0,0,0);
  FUN_100084eb(local_10,param_1);
  return;
}



/* ================================================================
 * Function: FUN_10008544
 * Address:  10008544
 * ================================================================ */

void __thiscall FUN_10008544(void *this,uint *param_1,byte *param_2)

{
  ushort local_10 [6];
  
  FUN_1000a13e(this,local_10,(int *)&param_2,param_2,0,0,0,0);
  FUN_10008501(local_10,param_1);
  return;
}



/* ================================================================
 * Function: FUN_10008571
 * Address:  10008571
 * ================================================================ */

void __cdecl FUN_10008571(char *param_1,int param_2,int param_3)

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
    FUN_10008760((undefined4 *)pcVar1,(undefined4 *)_Str,sVar3 + 1);
  }
  return;
}



/* ================================================================
 * Function: FUN_100085e8
 * Address:  100085e8
 * ================================================================ */

int * __cdecl FUN_100085e8(undefined4 param_1,undefined4 param_2,int *param_3,uint *param_4)

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
  FUN_10008644(&local_10,&param_1);
  iVar3 = FUN_1000a60f(local_10,uStack_c,CONCAT22(uVar4,uStack_8),0x11,0,&local_2c);
  puVar2 = param_4;
  piVar1 = param_3;
  param_3[2] = iVar3;
  *param_3 = (int)local_2a;
  param_3[1] = (int)local_2c;
  FUN_10003f10(param_4,local_28);
  piVar1[3] = (int)puVar2;
  return piVar1;
}



/* ================================================================
 * Function: FUN_10008644
 * Address:  10008644
 * ================================================================ */

void __cdecl FUN_10008644(uint *param_1,uint *param_2)

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
 * Function: _memset
 * Address:  10008700
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
 * Function: FUN_10008760
 * Address:  10008760
 * ================================================================ */

undefined4 * __cdecl FUN_10008760(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10008917_caseD_2;
        case 3:
          goto switchD_10008917_caseD_3;
        }
        goto switchD_10008917_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10008917_caseD_0;
      case 1:
        goto switchD_10008917_caseD_1;
      case 2:
        goto switchD_10008917_caseD_2;
      case 3:
        goto switchD_10008917_caseD_3;
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
              goto switchD_10008917_caseD_2;
            case 3:
              goto switchD_10008917_caseD_3;
            }
            goto switchD_10008917_caseD_1;
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
              goto switchD_10008917_caseD_2;
            case 3:
              goto switchD_10008917_caseD_3;
            }
            goto switchD_10008917_caseD_1;
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
              goto switchD_10008917_caseD_2;
            case 3:
              goto switchD_10008917_caseD_3;
            }
            goto switchD_10008917_caseD_1;
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
switchD_10008917_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10008917_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10008917_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10008917_caseD_0:
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
        goto switchD_10008795_caseD_2;
      case 3:
        goto switchD_10008795_caseD_3;
      }
      goto switchD_10008795_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10008795_caseD_0;
    case 1:
      goto switchD_10008795_caseD_1;
    case 2:
      goto switchD_10008795_caseD_2;
    case 3:
      goto switchD_10008795_caseD_3;
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
            goto switchD_10008795_caseD_2;
          case 3:
            goto switchD_10008795_caseD_3;
          }
          goto switchD_10008795_caseD_1;
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
            goto switchD_10008795_caseD_2;
          case 3:
            goto switchD_10008795_caseD_3;
          }
          goto switchD_10008795_caseD_1;
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
            goto switchD_10008795_caseD_2;
          case 3:
            goto switchD_10008795_caseD_3;
          }
          goto switchD_10008795_caseD_1;
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
switchD_10008795_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10008795_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10008795_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10008795_caseD_0:
  return param_1;
}



/* ================================================================
 * Function: __fptrap
 * Address:  10008a95
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
 * Function: FUN_10008a9e
 * Address:  10008a9e
 * ================================================================ */

void __thiscall FUN_10008a9e(void *this,byte *param_1,int *param_2,void *param_3)

{
  FUN_10008ab5(this,param_1,param_2,param_3,0);
  return;
}



/* ================================================================
 * Function: FUN_10008ab5
 * Address:  10008ab5
 * ================================================================ */

void * __thiscall FUN_10008ab5(void *this,byte *param_1,int *param_2,void *param_3,uint param_4)

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
    if (DAT_10010ff4 < 2) {
      uVar3 = (byte)PTR_DAT_10010de8[(uint)bVar7 * 2] & 8;
      this = PTR_DAT_10010de8;
    }
    else {
      puVar8 = (undefined *)0x8;
      uVar3 = FUN_10006fa9(this,(uint)bVar7,8);
      this = puVar8;
    }
    if (uVar3 == 0) break;
    bVar7 = *local_8;
    pbVar1 = local_8;
  }
  if (bVar7 == 0x2d) {
    param_4 = param_4 | 2;
LAB_10008b10:
    bVar7 = *local_8;
    local_8 = pbVar1 + 2;
  }
  else if (bVar7 == 0x2b) goto LAB_10008b10;
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
      goto LAB_10008b7a;
    }
    if ((*local_8 != 0x78) && (*local_8 != 0x58)) {
      param_3 = (void *)0x8;
      goto LAB_10008b7a;
    }
    param_3 = (void *)0x10;
  }
  if (((param_3 == (void *)0x10) && (bVar7 == 0x30)) && ((*local_8 == 0x78 || (*local_8 == 0x58))))
  {
    bVar7 = local_8[1];
    local_8 = local_8 + 2;
  }
LAB_10008b7a:
  pvVar4 = (void *)(0xffffffff / ZEXT48(param_3));
  do {
    uVar3 = (uint)bVar7;
    if (DAT_10010ff4 < 2) {
      uVar5 = (byte)PTR_DAT_10010de8[uVar3 * 2] & 4;
    }
    else {
      pvVar2 = (void *)0x4;
      uVar5 = FUN_10006fa9(this_00,uVar3,4);
      this_00 = pvVar2;
    }
    if (uVar5 == 0) {
      if (DAT_10010ff4 < 2) {
        uVar3 = *(ushort *)(PTR_DAT_10010de8 + uVar3 * 2) & 0x103;
      }
      else {
        uVar3 = FUN_10006fa9(this_00,uVar3,0x103);
      }
      if (uVar3 == 0) {
LAB_10008c26:
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
          pDVar6 = FUN_10006a44();
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
      uVar3 = FUN_1000a8a2((int)(char)bVar7);
      this_00 = (void *)(uVar3 - 0x37);
    }
    else {
      this_00 = (void *)((char)bVar7 + -0x30);
    }
    if (param_3 <= this_00) goto LAB_10008c26;
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
 * Address:  10008cd0
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
 * Address:  10008d90
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
LAB_10008e03:
        return _Str + -1;
      }
      if (*pcVar10 != pcVar8[2]) break;
      pcVar1 = pcVar8 + 3;
      if (*pcVar1 == '\0') goto LAB_10008e03;
      pcVar2 = pcVar10 + 1;
      pcVar8 = pcVar8 + 2;
      pcVar10 = pcVar10 + 2;
    } while (*pcVar1 == *pcVar2);
  } while( true );
}



/* ================================================================
 * Function: _strncmp
 * Address:  10008e10
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
 * Function: FUN_10008e50
 * Address:  10008e50
 * ================================================================ */

/* WARNING: Unable to track spacebase fully for stack */

void FUN_10008e50(void)

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
 * Function: FUN_10008e7f
 * Address:  10008e7f
 * ================================================================ */

int * __cdecl FUN_10008e7f(int param_1,int param_2)

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
  puStack_c = &DAT_1000c530;
  puStack_10 = &LAB_10006304;
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
      if (DAT_10012f64 == 3) {
        if (puVar2 <= DAT_10012f5c) {
          FUN_10006195(9);
          local_8 = 0;
          local_24 = FUN_10005627(puVar2);
          local_8 = 0xffffffff;
          FUN_10008f18();
          _Size = puVar2;
          if (local_24 == (int *)0x0) goto LAB_10008f6c;
LAB_10008f5b:
          _memset(local_24,0,(size_t)_Size);
        }
LAB_10008f67:
        if (local_24 != (int *)0x0) {
          ExceptionList = local_14;
          return local_24;
        }
      }
      else {
        if ((DAT_10012f64 != 2) || (DAT_1001092c < puVar3)) goto LAB_10008f67;
        FUN_10006195(9);
        local_8 = 1;
        local_24 = FUN_10005dd4((uint)puVar3 >> 4);
        local_8 = 0xffffffff;
        FUN_10008fa1();
        _Size = puVar3;
        if (local_24 != (int *)0x0) goto LAB_10008f5b;
      }
LAB_10008f6c:
      local_24 = HeapAlloc(DAT_10012f60,8,(SIZE_T)puVar3);
    }
    if (local_24 != (int *)0x0) {
      ExceptionList = local_14;
      return local_24;
    }
    if (DAT_100118e0 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
    iVar1 = FUN_100063dc(puVar3);
    if (iVar1 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
  } while( true );
}



/* ================================================================
 * Function: FUN_10008f18
 * Address:  10008f18
 * ================================================================ */

void FUN_10008f18(void)

{
  FUN_100061f6(9);
  return;
}



/* ================================================================
 * Function: FUN_10008fa1
 * Address:  10008fa1
 * ================================================================ */

void FUN_10008fa1(void)

{
  FUN_100061f6(9);
  return;
}



/* ================================================================
 * Function: FUN_1000903d
 * Address:  1000903d
 * ================================================================ */

uint __cdecl FUN_1000903d(LPCSTR param_1,uint param_2,uint param_3,uint param_4)

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
  if (((param_2 & 0x8000) == 0) && (((param_2 & 0x4000) != 0 || (DAT_10011a98 != 0x8000)))) {
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
    if (uVar2 != 2) goto LAB_10009141;
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
    if (param_3 != 0x40) goto LAB_10009141;
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
      if (uVar2 == 0x200) goto LAB_1000915b;
      if (uVar2 != 0x300) goto LAB_10009141;
      local_c = 2;
    }
  }
  else {
    if (uVar2 != 0x500) {
      if (uVar2 == 0x600) {
LAB_1000915b:
        local_c = 5;
        goto LAB_1000916b;
      }
      if (uVar2 != 0x700) {
LAB_10009141:
        pDVar4 = FUN_10006a44();
        *pDVar4 = 0x16;
        pDVar4 = FUN_10006a4d();
        *pDVar4 = 0;
        return 0xffffffff;
      }
    }
    local_c = 1;
  }
LAB_1000916b:
  uVar2 = 0x80;
  if (((param_2 & 0x100) != 0) && ((~DAT_100118ec & param_4 & 0x80) == 0)) {
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
  uVar3 = FUN_1000930c();
  if (uVar3 == 0xffffffff) {
    pDVar4 = FUN_10006a44();
    *pDVar4 = 0x18;
    pDVar4 = FUN_10006a4d();
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
      FUN_1000942f(uVar3,hFile);
      iVar7 = (uVar3 & 0x1f) * 0x24;
      param_1._3_1_ = local_5 & 0x48;
      *(byte *)((&DAT_10011e20)[(int)uVar3 >> 5] + 4 + iVar7) = local_5 | 1;
      if ((((local_5 & 0x48) == 0) && ((local_5 & 0x80) != 0)) && ((param_2 & 2) != 0)) {
        local_14 = FUN_10006abb(uVar3,-1,2);
        if (local_14 == 0xffffffff) {
          pDVar4 = FUN_10006a4d();
          if (*pDVar4 == 0x83) goto LAB_100092e5;
        }
        else {
          param_3 = param_3 & 0xffffff;
          iVar6 = FUN_10006dd0(uVar3,(char *)((int)&param_3 + 3),(char *)0x1);
          if ((((iVar6 != 0) || (param_3._3_1_ != '\x1a')) ||
              (iVar6 = FUN_1000a9dd(uVar3,local_14), iVar6 != -1)) &&
             (DVar5 = FUN_10006abb(uVar3,0,0), DVar5 != 0xffffffff)) goto LAB_100092e5;
        }
        FUN_1000678f(uVar3);
        uVar2 = 0xffffffff;
      }
      else {
LAB_100092e5:
        uVar2 = uVar3;
        if ((param_1._3_1_ == 0) && ((param_2 & 8) != 0)) {
          pbVar1 = (byte *)((&DAT_10011e20)[(int)uVar3 >> 5] + 4 + iVar7);
          *pbVar1 = *pbVar1 | 0x20;
        }
      }
      goto LAB_100092fe;
    }
    CloseHandle(hFile);
  }
  DVar5 = GetLastError();
  FUN_100069d1(DVar5);
  uVar2 = 0xffffffff;
LAB_100092fe:
  FUN_100095cb(uVar3);
  return uVar2;
}



/* ================================================================
 * Function: FUN_1000930c
 * Address:  1000930c
 * ================================================================ */

uint FUN_1000930c(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  int local_8;
  int local_4;
  
  uVar4 = 0xffffffff;
  FUN_10006195(0x12);
  local_8 = 0;
  local_4 = 0;
  piVar3 = &DAT_10011e20;
  while (puVar2 = (undefined4 *)*piVar3, puVar1 = puVar2, puVar2 != (undefined4 *)0x0) {
    for (; puVar2 < puVar1 + 0x120; puVar2 = puVar2 + 9) {
      if ((*(byte *)(puVar2 + 1) & 1) == 0) {
        if (puVar2[2] == 0) {
          FUN_10006195(0x11);
          if (puVar2[2] == 0) {
            InitializeCriticalSection((LPCRITICAL_SECTION)(puVar2 + 3));
            puVar2[2] = puVar2[2] + 1;
          }
          FUN_100061f6(0x11);
        }
        EnterCriticalSection((LPCRITICAL_SECTION)(puVar2 + 3));
        if ((*(byte *)(puVar2 + 1) & 1) == 0) {
          *puVar2 = 0xffffffff;
          uVar4 = ((int)puVar2 - *piVar3) / 0x24 + local_4;
          if (uVar4 != 0xffffffff) goto LAB_1000941e;
          break;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(puVar2 + 3));
      }
      puVar1 = (undefined4 *)*piVar3;
    }
    local_4 = local_4 + 0x20;
    piVar3 = piVar3 + 1;
    local_8 = local_8 + 1;
    if (0x10011f1f < (int)piVar3) goto LAB_1000941e;
  }
  puVar2 = _malloc(0x480);
  if (puVar2 != (undefined4 *)0x0) {
    DAT_10011f20 = DAT_10011f20 + 0x20;
    (&DAT_10011e20)[local_8] = puVar2;
    puVar1 = puVar2;
    for (; puVar2 < puVar1 + 0x120; puVar2 = puVar2 + 9) {
      *(undefined1 *)(puVar2 + 1) = 0;
      *puVar2 = 0xffffffff;
      puVar2[2] = 0;
      *(undefined1 *)((int)puVar2 + 5) = 10;
      puVar1 = (undefined4 *)(&DAT_10011e20)[local_8];
    }
    uVar4 = local_8 << 5;
    FUN_1000956c(uVar4);
  }
LAB_1000941e:
  FUN_100061f6(0x12);
  return uVar4;
}



/* ================================================================
 * Function: FUN_1000942f
 * Address:  1000942f
 * ================================================================ */

undefined4 __cdecl FUN_1000942f(uint param_1,HANDLE param_2)

{
  DWORD *pDVar1;
  int iVar2;
  DWORD nStdHandle;
  
  if (param_1 < DAT_10011f20) {
    iVar2 = (param_1 & 0x1f) * 0x24;
    if (*(int *)((&DAT_10011e20)[(int)param_1 >> 5] + iVar2) == -1) {
      if (DAT_10011874 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_10009488;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,param_2);
      }
LAB_10009488:
      *(HANDLE *)((&DAT_10011e20)[(int)param_1 >> 5] + iVar2) = param_2;
      return 0;
    }
  }
  pDVar1 = FUN_10006a44();
  *pDVar1 = 9;
  pDVar1 = FUN_10006a4d();
  *pDVar1 = 0;
  return 0xffffffff;
}



/* ================================================================
 * Function: FUN_100094ab
 * Address:  100094ab
 * ================================================================ */

undefined4 __cdecl FUN_100094ab(uint param_1)

{
  int *piVar1;
  DWORD *pDVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if (param_1 < DAT_10011f20) {
    iVar3 = (param_1 & 0x1f) * 0x24;
    piVar1 = (int *)((&DAT_10011e20)[(int)param_1 >> 5] + iVar3);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_10011874 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_10009507;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_10009507:
      *(undefined4 *)((&DAT_10011e20)[(int)param_1 >> 5] + iVar3) = 0xffffffff;
      return 0;
    }
  }
  pDVar2 = FUN_10006a44();
  *pDVar2 = 9;
  pDVar2 = FUN_10006a4d();
  *pDVar2 = 0;
  return 0xffffffff;
}



/* ================================================================
 * Function: FUN_1000952a
 * Address:  1000952a
 * ================================================================ */

undefined4 __cdecl FUN_1000952a(uint param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 < DAT_10011f20) &&
     ((*(byte *)((&DAT_10011e20)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_10011e20)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  pDVar1 = FUN_10006a44();
  *pDVar1 = 9;
  pDVar1 = FUN_10006a4d();
  *pDVar1 = 0;
  return 0xffffffff;
}



/* ================================================================
 * Function: FUN_1000956c
 * Address:  1000956c
 * ================================================================ */

void __cdecl FUN_1000956c(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1 & 0x1f) * 0x24;
  iVar1 = (&DAT_10011e20)[(int)param_1 >> 5] + iVar2;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_10006195(0x11);
    if (*(int *)(iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_100061f6(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((&DAT_10011e20)[(int)param_1 >> 5] + 0xc + iVar2));
  return;
}



/* ================================================================
 * Function: FUN_100095cb
 * Address:  100095cb
 * ================================================================ */

void __cdecl FUN_100095cb(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_10011e20)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}



/* ================================================================
 * Function: FUN_100095ed
 * Address:  100095ed
 * ================================================================ */

undefined4 __cdecl FUN_100095ed(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (DAT_10011f20 <= param_1) {
LAB_1000966e:
    pDVar3 = FUN_10006a44();
    *pDVar3 = 9;
    return 0xffffffff;
  }
  iVar4 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)((&DAT_10011e20)[(int)param_1 >> 5] + 4 + iVar4) & 1) == 0) goto LAB_1000966e;
  FUN_1000956c(param_1);
  if ((*(byte *)((&DAT_10011e20)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
    hFile = (HANDLE)FUN_1000952a(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    uVar5 = 0;
    if (DVar2 == 0) goto LAB_10009663;
    pDVar3 = FUN_10006a4d();
    *pDVar3 = DVar2;
  }
  pDVar3 = FUN_10006a44();
  *pDVar3 = 9;
  uVar5 = 0xffffffff;
LAB_10009663:
  FUN_100095cb(param_1);
  return uVar5;
}



/* ================================================================
 * Function: FUN_10009680
 * Address:  10009680
 * ================================================================ */

BOOL __cdecl
FUN_10009680(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
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
  puStack_c = &DAT_1000c550;
  puStack_10 = &LAB_10006304;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc8;
  iVar3 = DAT_10011a40;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc8;
  if (DAT_10011a40 == 0) {
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
  DAT_10011a40 = iVar3;
  if (DAT_10011a40 != 2) {
    if (DAT_10011a40 == 1) {
      if (param_5 == 0) {
        param_5 = DAT_10011a78;
      }
      iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,
                                  (LPWSTR)0x0,0);
      if (iVar3 != 0) {
        local_8 = 0;
        FUN_10008e50();
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
    param_6 = DAT_10011a68;
  }
  BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return BVar2;
}



/* ================================================================
 * Function: FUN_100097c9
 * Address:  100097c9
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_100097c9(int param_1)

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
  
  FUN_10006195(0x19);
  CodePage = FUN_10009976(param_1);
  if (CodePage != DAT_10011be4) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_10011180;
LAB_10009806:
      if (*pUVar5 != CodePage) goto code_r0x1000980a;
      local_8 = 0;
      puVar15 = &DAT_10011d00;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x10011190);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_10011178)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_10011d00 + uVar8 + 1);
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
      _DAT_10011bfc = 1;
      DAT_10011be4 = CodePage;
      DAT_10011e04 = FUN_100099c0(CodePage);
      DAT_10011bf0 = *(undefined4 *)(iVar12 + 0x10011184);
      DAT_10011bf4 = *(undefined4 *)(iVar12 + 0x10011188);
      DAT_10011bf8 = *(undefined4 *)(iVar12 + 0x1001118c);
      goto LAB_1000995a;
    }
    goto LAB_10009955;
  }
  goto LAB_100097f0;
code_r0x1000980a:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if (0x1001126f < (int)pUVar5) goto code_r0x10009815;
  goto LAB_10009806;
code_r0x10009815:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_10011e04 = 0;
    puVar15 = &DAT_10011d00;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      _DAT_10011bfc = 0;
      DAT_10011be4 = CodePage;
    }
    else {
      DAT_10011be4 = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_10011d00 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_10011d00 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_10011e04 = FUN_100099c0(CodePage);
      _DAT_10011bfc = 1;
    }
    DAT_10011bf0 = 0;
    DAT_10011bf4 = 0;
    DAT_10011bf8 = 0;
  }
  else {
    if (DAT_10011a44 == 0) {
      uVar14 = 0xffffffff;
      goto LAB_10009967;
    }
LAB_10009955:
    FUN_100099f3();
  }
LAB_1000995a:
  FUN_10009a1c();
LAB_100097f0:
  uVar14 = 0;
LAB_10009967:
  FUN_100061f6(0x19);
  return uVar14;
}



/* ================================================================
 * Function: FUN_10009976
 * Address:  10009976
 * ================================================================ */

int __cdecl FUN_10009976(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_10011a44 = 1;
                    /* WARNING: Could not recover jumptable at 0x10009990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_10011a44 = 1;
                    /* WARNING: Could not recover jumptable at 0x100099a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_10011a78;
  }
  DAT_10011a44 = (uint)bVar2;
  return param_1;
}



/* ================================================================
 * Function: FUN_100099c0
 * Address:  100099c0
 * ================================================================ */

undefined4 __cdecl FUN_100099c0(int param_1)

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
 * Function: FUN_100099f3
 * Address:  100099f3
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100099f3(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_10011d00;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_10011be4 = 0;
  _DAT_10011bfc = 0;
  DAT_10011e04 = 0;
  DAT_10011bf0 = 0;
  DAT_10011bf4 = 0;
  DAT_10011bf8 = 0;
  return;
}



/* ================================================================
 * Function: FUN_10009a1c
 * Address:  10009a1c
 * ================================================================ */

void FUN_10009a1c(void)

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
  
  BVar2 = GetCPInfo(DAT_10011be4,&local_18);
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
    FUN_10009680(1,local_118,0x100,local_518,DAT_10011be4,DAT_10011e04,0);
    FUN_10009d4e(DAT_10011e04,0x100,local_118,0x100,local_218,0x100,DAT_10011be4,0);
    FUN_10009d4e(DAT_10011e04,0x200,local_118,0x100,local_318,0x100,DAT_10011be4,0);
    uVar3 = 0;
    puVar7 = local_518;
    do {
      if ((*puVar7 & 1) == 0) {
        if ((*puVar7 & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_10011d00 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          uVar8 = *(undefined1 *)((int)local_318 + uVar3);
          goto LAB_10009b28;
        }
        (&DAT_10011c00)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_10011d00 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        uVar8 = *(undefined1 *)((int)local_218 + uVar3);
LAB_10009b28:
        (&DAT_10011c00)[uVar3] = uVar8;
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
          pbVar1 = (byte *)((int)&DAT_10011d00 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar4 = (char)uVar3 + -0x20;
          goto LAB_10009b72;
        }
        (&DAT_10011c00)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_10011d00 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar4 = (char)uVar3 + ' ';
LAB_10009b72:
        (&DAT_10011c00)[uVar3] = cVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}



/* ================================================================
 * Function: FUN_10009ba1
 * Address:  10009ba1
 * ================================================================ */

void FUN_10009ba1(void)

{
  if (DAT_10011f28 == 0) {
    FUN_100097c9(-3);
    DAT_10011f28 = 1;
  }
  return;
}



/* ================================================================
 * Function: FUN_10009bbd
 * Address:  10009bbd
 * ================================================================ */

int __cdecl FUN_10009bbd(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_10011a48 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_10011a48 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_10011a48 != (FARPROC)0x0) {
        DAT_10011a4c = GetProcAddress(hModule,"GetActiveWindow");
        DAT_10011a50 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_10009c0c;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_10009c0c:
    if (DAT_10011a4c != (FARPROC)0x0) {
      iVar1 = (*DAT_10011a4c)();
      if ((iVar1 != 0) && (DAT_10011a50 != (FARPROC)0x0)) {
        iVar1 = (*DAT_10011a50)(iVar1);
      }
    }
    iVar1 = (*DAT_10011a48)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}



/* ================================================================
 * Function: _strncpy
 * Address:  10009c50
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
        goto joined_r0x10009c8e;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_10009ccb;
        goto LAB_10009d39;
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
joined_r0x10009d35:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_10009d39:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_10009ccb;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x10009d35;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x10009d35;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x10009d35;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x10009c8e:
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
LAB_10009ccb:
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
 * Function: FUN_10009d4e
 * Address:  10009d4e
 * ================================================================ */

int __cdecl
FUN_10009d4e(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000c598;
  puStack_10 = &LAB_10006304;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_10011a94 == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_10011a94 = 2;
    }
    else {
      DAT_10011a94 = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_10009f72(param_3,param_4);
  }
  if (DAT_10011a94 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
    ExceptionList = local_14;
    return iVar1;
  }
  if (DAT_10011a94 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_10011a78;
    }
    iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar1 != 0) {
      local_8 = 0;
      FUN_10008e50();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x3c) &&
         (iVar2 = MultiByteToWideChar(param_7,1,param_3,param_4,(LPWSTR)&stack0xffffffc4,iVar1),
         iVar2 != 0)) {
        iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          if ((param_2 & 0x400) == 0) {
            local_8 = 1;
            FUN_10008e50();
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
 * Function: FUN_10009f72
 * Address:  10009f72
 * ================================================================ */

int __cdecl FUN_10009f72(char *param_1,int param_2)

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
 * Function: FUN_10009f9d
 * Address:  10009f9d
 * ================================================================ */

undefined4 __cdecl FUN_10009f9d(uint param_1,uint param_2,uint *param_3)

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
 * Address:  10009fbe
 * ================================================================ */

/* Library Function - Single Match
    ___add_12
   
   Library: Visual Studio 2003 Release */

void __cdecl ___add_12(uint *param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = FUN_10009f9d(*param_1,*param_2,param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_10009f9d(param_1[1],1,param_1 + 1);
    if (iVar1 != 0) {
      param_1[2] = param_1[2] + 1;
    }
  }
  iVar1 = FUN_10009f9d(param_1[1],param_2[1],param_1 + 1);
  if (iVar1 != 0) {
    param_1[2] = param_1[2] + 1;
  }
  FUN_10009f9d(param_1[2],param_2[2],param_1 + 2);
  return;
}



/* ================================================================
 * Function: FUN_1000a01c
 * Address:  1000a01c
 * ================================================================ */

void __cdecl FUN_1000a01c(uint *param_1)

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
 * Function: FUN_1000a04a
 * Address:  1000a04a
 * ================================================================ */

void __cdecl FUN_1000a04a(uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = uVar1 >> 1 | param_1[2] << 0x1f;
  param_1[2] = param_1[2] >> 1;
  *param_1 = *param_1 >> 1 | uVar1 << 0x1f;
  return;
}



/* ================================================================
 * Function: FUN_1000a077
 * Address:  1000a077
 * ================================================================ */

void __cdecl FUN_1000a077(char *param_1,int param_2,uint *param_3)

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
      FUN_1000a01c(puVar1);
      FUN_1000a01c(puVar1);
      ___add_12(puVar1,&local_14);
      FUN_1000a01c(puVar1);
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
    FUN_1000a01c(puVar1);
    local_8 = local_8 + 0xffff;
  }
  *(undefined2 *)((int)puVar1 + 10) = (undefined2)local_8;
  return;
}



/* ================================================================
 * Function: FUN_1000a13e
 * Address:  1000a13e
 * ================================================================ */

undefined4 __thiscall
FUN_1000a13e(void *this,ushort *param_1,int *param_2,byte *param_3,int param_4,int param_5,
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
LAB_1000a195:
  local_14 = iVar5;
  pbVar7 = pbVar8;
  iVar5 = 1;
  bVar6 = *pbVar7;
  pbVar8 = pbVar7 + 1;
  iVar2 = local_14;
  switch(iVar9) {
  case 0:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) {
LAB_1000a1b2:
      local_14 = iVar2;
      iVar9 = 3;
      goto LAB_1000a3d7;
    }
    if (bVar6 == DAT_10010ff8) goto LAB_1000a1c1;
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
      if (bVar6 != 0x30) goto LAB_1000a4b1;
    }
    goto LAB_1000a195;
  case 1:
    local_14 = 1;
    if (('0' < (char)bVar6) && (iVar2 = iVar5, (char)bVar6 < ':')) goto LAB_1000a1b2;
    iVar9 = iVar1;
    if (bVar6 != DAT_10010ff8) {
      iVar9 = iVar5;
      if ((bVar6 == 0x2b) || (iVar9 = local_14, bVar6 == 0x2d)) goto LAB_1000a246;
      iVar9 = iVar5;
      local_14 = iVar5;
      if (bVar6 != 0x30) goto LAB_1000a21f;
    }
    goto LAB_1000a195;
  case 2:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) goto LAB_1000a1b2;
    if (bVar6 == DAT_10010ff8) {
LAB_1000a1c1:
      iVar9 = 5;
      iVar5 = local_14;
    }
    else {
      iVar9 = iVar5;
      pbVar7 = param_3;
      iVar5 = local_14;
      if (bVar6 != 0x30) goto LAB_1000a4b6;
    }
    goto LAB_1000a195;
  case 3:
    local_14 = iVar5;
    while( true ) {
      if (DAT_10010ff4 < 2) {
        uVar3 = (byte)PTR_DAT_10010de8[(uint)bVar6 * 2] & 4;
        this = PTR_DAT_10010de8;
      }
      else {
        pbVar7 = (byte *)0x4;
        uVar3 = FUN_10006fa9(this,(uint)bVar6,4);
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
    if (bVar6 != DAT_10010ff8) goto LAB_1000a333;
    goto LAB_1000a195;
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
      if (DAT_10010ff4 < 2) {
        uVar3 = (byte)PTR_DAT_10010de8[(uint)bVar6 * 2] & 4;
        this = PTR_DAT_10010de8;
      }
      else {
        pbVar7 = (byte *)0x4;
        uVar3 = FUN_10006fa9(this,(uint)bVar6,4);
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
LAB_1000a333:
    iVar9 = local_14;
    if ((bVar6 == 0x2b) || (bVar6 == 0x2d)) {
LAB_1000a246:
      local_14 = iVar9;
      iVar9 = 0xb;
      pbVar8 = pbVar8 + -1;
      iVar5 = local_14;
    }
    else {
LAB_1000a21f:
      if (((char)bVar6 < 'D') ||
         (('E' < (char)bVar6 && (((char)bVar6 < 'd' || ('e' < (char)bVar6)))))) goto LAB_1000a4b1;
      iVar9 = 6;
      iVar5 = local_14;
    }
    goto LAB_1000a195;
  case 5:
    local_28 = iVar5;
    if (DAT_10010ff4 < 2) {
      uVar3 = (byte)PTR_DAT_10010de8[(uint)bVar6 * 2] & 4;
      this = PTR_DAT_10010de8;
    }
    else {
      pbVar7 = (byte *)0x4;
      uVar3 = FUN_10006fa9(this,(uint)bVar6,4);
      this = pbVar7;
    }
    iVar9 = iVar1;
    pbVar7 = param_3;
    if (uVar3 != 0) goto LAB_1000a3d7;
    goto LAB_1000a4b6;
  case 6:
    pbVar7 = pbVar7 + -1;
    this = pbVar7;
    param_3 = pbVar7;
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) {
      if (bVar6 == 0x2b) goto LAB_1000a40c;
      if (bVar6 == 0x2d) goto LAB_1000a400;
      if (bVar6 != 0x30) goto LAB_1000a4b6;
LAB_1000a3a5:
      iVar9 = 8;
      iVar5 = local_14;
      goto LAB_1000a195;
    }
    break;
  case 7:
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) {
      pbVar7 = param_3;
      if (bVar6 == 0x30) goto LAB_1000a3a5;
      goto LAB_1000a4b6;
    }
    break;
  case 8:
    local_24 = 1;
    while (bVar6 == 0x30) {
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    }
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) goto LAB_1000a4b1;
    break;
  case 9:
    local_24 = 1;
    pbVar7 = (byte *)0x0;
    goto LAB_1000a437;
  default:
    goto switchD_1000a1a1_caseD_a;
  case 0xb:
    if (param_7 != 0) {
      if (bVar6 == 0x2b) {
LAB_1000a40c:
        iVar9 = 7;
        this = pbVar7;
        param_3 = pbVar7;
        iVar5 = local_14;
      }
      else {
        param_3 = pbVar7;
        if (bVar6 != 0x2d) goto LAB_1000a4b6;
LAB_1000a400:
        local_1c = -1;
        iVar9 = 7;
        this = pbVar7;
        param_3 = pbVar7;
        iVar5 = local_14;
      }
      goto LAB_1000a195;
    }
    iVar9 = 10;
    pbVar8 = pbVar7;
switchD_1000a1a1_caseD_a:
    pbVar7 = pbVar8;
    iVar5 = local_14;
    if (iVar9 != 10) goto LAB_1000a195;
    goto LAB_1000a4b6;
  }
  iVar9 = 9;
LAB_1000a3d7:
  pbVar8 = pbVar8 + -1;
  iVar5 = local_14;
  goto LAB_1000a195;
LAB_1000a437:
  if (DAT_10010ff4 < 2) {
    uVar3 = (byte)PTR_DAT_10010de8[(uint)bVar6 * 2] & 4;
    this = PTR_DAT_10010de8;
  }
  else {
    pbVar10 = (byte *)0x4;
    uVar3 = FUN_10006fa9(this,(uint)bVar6,4);
    this = pbVar10;
  }
  if (uVar3 == 0) goto LAB_1000a481;
  this = (void *)(int)(char)bVar6;
  pbVar7 = (byte *)((int)this + (int)pbVar7 * 10 + -0x30);
  if (0x1450 < (int)pbVar7) goto LAB_1000a479;
  bVar6 = *pbVar8;
  pbVar8 = pbVar8 + 1;
  goto LAB_1000a437;
LAB_1000a479:
  pbVar7 = (byte *)0x1451;
LAB_1000a481:
  while( true ) {
    local_20 = pbVar7;
    if (DAT_10010ff4 < 2) {
      uVar3 = (byte)PTR_DAT_10010de8[(uint)bVar6 * 2] & 4;
      this = PTR_DAT_10010de8;
    }
    else {
      pbVar7 = (byte *)0x4;
      uVar3 = FUN_10006fa9(this,(uint)bVar6,4);
      this = pbVar7;
    }
    if (uVar3 == 0) break;
    bVar6 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    pbVar7 = local_20;
  }
LAB_1000a4b1:
  pbVar7 = pbVar8 + -1;
LAB_1000a4b6:
  *param_2 = (int)pbVar7;
  if (local_14 == 0) {
    local_44 = 0;
    local_3a = 0;
    local_3e = (byte *)0x0;
    param_3 = (byte *)0x0;
    local_18 = 4;
    goto LAB_1000a5c4;
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
    FUN_1000a077(local_60,local_8,(uint *)&local_44);
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
        FUN_1000ae3a((int *)&local_44,(uint)pbVar8,param_4);
        param_3 = (byte *)CONCAT22(uStack_40,uStack_42);
        goto LAB_1000a549;
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
LAB_1000a549:
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
LAB_1000a5c4:
  *(byte **)(param_1 + 3) = local_3e;
  *(byte **)(param_1 + 1) = param_3;
  param_1[5] = local_3a | (ushort)local_2c;
  *param_1 = local_44;
  return local_18;
}



/* ================================================================
 * Function: FUN_1000a60f
 * Address:  1000a60f
 * ================================================================ */

undefined4 __cdecl
FUN_1000a60f(uint param_1,uint param_2,uint param_3,int param_4,byte param_5,short *param_6)

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
          if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_1000a704;
          pcVar11 = "1#INF";
        }
        else {
          if (param_1 != 0) {
LAB_1000a704:
            pcVar11 = "1#QNAN";
            goto LAB_1000a709;
          }
          pcVar11 = "1#IND";
        }
        FUN_10003f10((uint *)(param_6 + 2),(uint *)pcVar11);
        *(undefined1 *)((int)psVar3 + 3) = 5;
      }
      else {
        pcVar11 = "1#SNAN";
LAB_1000a709:
        FUN_10003f10((uint *)(param_6 + 2),(uint *)pcVar11);
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
    FUN_1000ae3a((int *)&local_14,-(int)sVar8,1);
    if (0x3ffe < CONCAT11(cStack_9,local_a)) {
      sVar8 = sVar8 + 1;
      FUN_1000ac1a((int *)&local_14,(int *)&local_20);
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
        FUN_1000a01c((uint *)&local_14);
        param_6 = (short *)((int)param_6 + -1);
      } while (param_6 != (short *)0x0);
      if (iVar9 < 0) {
        param_6 = (short *)0x0;
        for (uVar5 = -iVar9 & 0xff; uVar5 != 0; uVar5 = uVar5 - 1) {
          FUN_1000a04a((uint *)&local_14);
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
          FUN_1000a01c((uint *)&local_14);
          FUN_1000a01c((uint *)&local_14);
          ___add_12((uint *)&local_14,&param_1);
          FUN_1000a01c((uint *)&local_14);
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
            if (psVar1 <= psVar7) goto LAB_1000a861;
            break;
          }
          *(char *)psVar7 = '0';
        }
        psVar7 = (short *)((int)psVar7 + 1);
        *psVar3 = *psVar3 + 1;
LAB_1000a861:
        *(char *)psVar7 = (char)*psVar7 + '\x01';
LAB_1000a863:
        cVar4 = ((char)psVar7 - (char)psVar3) + -3;
        *(char *)((int)psVar3 + 3) = cVar4;
        *(undefined1 *)(cVar4 + 4 + (int)psVar3) = 0;
        return local_8;
      }
      for (; psVar1 <= psVar7; psVar7 = (short *)((int)psVar7 + -1)) {
        if ((char)*psVar7 != '0') {
          if (psVar1 <= psVar7) goto LAB_1000a863;
          break;
        }
      }
      *psVar3 = 0;
      *(undefined1 *)(psVar3 + 1) = 0x20;
      *(undefined1 *)((int)psVar3 + 3) = 1;
      *(char *)psVar1 = '0';
      goto LAB_1000a899;
    }
  }
  *psVar3 = 0;
  *(undefined1 *)(psVar3 + 1) = 0x20;
  *(undefined1 *)((int)psVar3 + 3) = 1;
  *(undefined1 *)(psVar3 + 2) = 0x30;
LAB_1000a899:
  *(undefined1 *)((int)psVar3 + 5) = 0;
  return 1;
}



/* ================================================================
 * Function: FUN_1000a8a2
 * Address:  1000a8a2
 * ================================================================ */

uint __cdecl FUN_1000a8a2(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_10011a68 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      return param_1 - 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_10011be0);
    bVar1 = DAT_10011bdc != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_10011be0);
      this = (void *)0x13;
      FUN_10006195(0x13);
    }
    param_1 = FUN_1000a911(this,param_1);
    if (bVar1) {
      FUN_100061f6(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_10011be0);
    }
  }
  return param_1;
}



/* ================================================================
 * Function: FUN_1000a911
 * Address:  1000a911
 * ================================================================ */

uint __thiscall FUN_1000a911(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_10011a68 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      uVar1 = param_1 - 0x20;
    }
  }
  else {
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_10010ff4 < 2) {
        uVar2 = (byte)PTR_DAT_10010de8[param_1 * 2] & 2;
      }
      else {
        uVar2 = FUN_10006fa9(this,param_1,2);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_10010de8[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
      iVar3 = 1;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_10009d4e(DAT_10011a68,0x200,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
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
 * Function: FUN_1000a9dd
 * Address:  1000a9dd
 * ================================================================ */

int __cdecl FUN_1000a9dd(uint param_1,int param_2)

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
  
  FUN_10008e50();
  iVar8 = 0;
  DVar1 = FUN_10006abb(param_1,0,1);
  if ((DVar1 == 0xffffffff) || (DVar2 = FUN_10006abb(param_1,0,2), DVar2 == 0xffffffff)) {
    iVar8 = -1;
  }
  else {
    uVar9 = param_2 - DVar2;
    if ((int)uVar9 < 1) {
      if ((int)uVar9 < 0) {
        FUN_10006abb(param_1,param_2,0);
        hFile = (HANDLE)FUN_1000952a(param_1);
        BVar7 = SetEndOfFile(hFile);
        iVar8 = (BVar7 != 0) - 1;
        if (iVar8 == -1) {
          pDVar6 = FUN_10006a44();
          *pDVar6 = 0xd;
          DVar2 = GetLastError();
          pDVar6 = FUN_10006a4d();
          *pDVar6 = DVar2;
        }
      }
    }
    else {
      _memset(local_1008,0,0x1000);
      uStackY_28 = 0x1000aa4a;
      iVar3 = FUN_1000aeb6(param_1,0x8000);
      do {
        uVar4 = 0x1000;
        if ((int)uVar9 < 0x1000) {
          uVar4 = uVar9;
        }
        iVar5 = FUN_10007b37(param_1,local_1008,uVar4);
        if (iVar5 == -1) {
          pDVar6 = FUN_10006a4d();
          if (*pDVar6 == 5) {
            pDVar6 = FUN_10006a44();
            *pDVar6 = 0xd;
          }
          iVar8 = -1;
          break;
        }
        uVar9 = uVar9 - iVar5;
      } while (0 < (int)uVar9);
      FUN_1000aeb6(param_1,iVar3);
    }
    FUN_10006abb(param_1,DVar1,0);
  }
  return iVar8;
}



/* ================================================================
 * Function: FUN_1000aba0
 * Address:  1000aba0
 * ================================================================ */

int __cdecl FUN_1000aba0(byte *param_1,byte *param_2)

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
 * Function: FUN_1000abe0
 * Address:  1000abe0
 * ================================================================ */

byte * __cdecl FUN_1000abe0(byte *param_1,byte *param_2)

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
 * Function: FUN_1000ac1a
 * Address:  1000ac1a
 * ================================================================ */

void __cdecl FUN_1000ac1a(int *param_1,int *param_2)

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
LAB_1000acbd:
      piVar4[2] = 0;
      piVar4[1] = 0;
      *piVar4 = 0;
      return;
    }
    if (((uVar6 != 0) || (piVar1 = (int *)((int)piVar1 + 1), (param_1[2] & 0x7fffffffU) != 0)) ||
       ((uVar6 = 0, param_1[1] != 0 || (*param_1 != 0)))) {
      param_1 = piVar1;
      if (((uVar9 == 0) && (param_1 = (int *)((int)param_1 + 1), (param_2[2] & 0x7fffffffU) == 0))
         && ((param_2[1] == 0 && (*param_2 == 0)))) goto LAB_1000acbd;
      local_14 = 0;
      local_8 = &local_24;
      param_2 = (int *)0x5;
      do {
        if (0 < (int)param_2) {
          local_c = (ushort *)(local_14 * 2 + (int)piVar4);
          local_10 = (ushort *)(piVar5 + 2);
          local_1c = param_2;
          do {
            iVar8 = FUN_10009f9d(*(uint *)(local_8 + -2),(uint)*local_c * (uint)*local_10,
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
LAB_1000ad71:
        param_1._0_2_ = (ushort)param_1 - 1;
        if ((short)(ushort)param_1 < 0) {
          iVar8 = -(int)(short)(ushort)param_1;
          param_1._0_2_ = (ushort)param_1 + (short)iVar8;
          do {
            if ((local_28 & 1) != 0) {
              local_18 = local_18 + 1;
            }
            FUN_1000a04a((uint *)&local_28);
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
          FUN_1000a01c((uint *)&local_28);
          param_1 = (int *)((int)param_1 + 0xffff);
        } while (0 < (short)(ushort)param_1);
        if ((short)(ushort)param_1 < 1) goto LAB_1000ad71;
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
      if (0x7ffe < (ushort)param_1) goto LAB_1000ae1a;
      uVar6 = (ushort)param_1 | uVar11;
      *(undefined2 *)piVar4 = uStack_26;
      *(uint *)((int)piVar4 + 2) = CONCAT22(uStack_22,local_24);
      *(uint *)((int)piVar4 + 6) = CONCAT13(bStack_1d,CONCAT12(uStack_1e,local_20));
    }
    *(ushort *)((int)piVar4 + 10) = uVar6;
  }
  else {
LAB_1000ae1a:
    piVar4[1] = 0;
    *piVar4 = 0;
    piVar4[2] = (-(uint)(uVar11 != 0) & 0x80000000) + 0x7fff8000;
  }
  return;
}



/* ================================================================
 * Function: FUN_1000ae3a
 * Address:  1000ae3a
 * ================================================================ */

void __cdecl FUN_1000ae3a(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined2 local_10;
  undefined4 local_e;
  undefined2 uStack_a;
  undefined *puStack_8;
  
  ppuVar3 = &PTR_DAT_10011420;
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      ppuVar3 = (undefined **)0x10011580;
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
        FUN_1000ac1a(param_1,(int *)ppuVar4);
      }
    }
  }
  return;
}



/* ================================================================
 * Function: FUN_1000aeb6
 * Address:  1000aeb6
 * ================================================================ */

int __cdecl FUN_1000aeb6(uint param_1,int param_2)

{
  byte bVar1;
  DWORD *pDVar2;
  byte bVar3;
  
  bVar1 = *(byte *)((&DAT_10011e20)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24);
  if (param_2 == 0x8000) {
    bVar3 = bVar1 & 0x7f;
  }
  else {
    if (param_2 != 0x4000) {
      pDVar2 = FUN_10006a44();
      *pDVar2 = 0x16;
      return -1;
    }
    bVar3 = bVar1 | 0x80;
  }
  *(byte *)((&DAT_10011e20)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = bVar3;
  return (-(uint)((bVar1 & 0x80) != 0) & 0xffffc000) + 0x8000;
}



/* ================================================================
 * Function: FUN_1000af20
 * Address:  1000af20
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_1000af20(void *this,byte *param_1,byte *param_2)

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
  
  iVar2 = _DAT_10011be0;
  if (DAT_10011a68 == 0) {
    bVar5 = 0xff;
    do {
      do {
        cVar6 = '\0';
        if (bVar5 == 0) goto LAB_1000af6e;
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
LAB_1000af6e:
    uVar7 = (uint)cVar6;
  }
  else {
    LOCK();
    _DAT_10011be0 = _DAT_10011be0 + 1;
    UNLOCK();
    bVar1 = 0 < DAT_10011bdc;
    if (bVar1) {
      LOCK();
      UNLOCK();
      _DAT_10011be0 = iVar2;
      FUN_10006195(0x13);
      this = extraout_ECX;
    }
    uVar9 = (uint)bVar1;
    uVar7 = 0xff;
    uVar8 = 0;
    do {
      do {
        if ((char)uVar7 == '\0') goto LAB_1000afcf;
        bVar5 = *param_2;
        uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar5);
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        uVar8 = CONCAT31((int3)(uVar8 >> 8),bVar4);
        param_1 = param_1 + 1;
      } while (bVar5 == bVar4);
      uVar8 = FUN_100080ba(this,uVar8);
      uVar7 = FUN_100080ba(this_00,uVar7);
      this = extraout_ECX_00;
    } while ((byte)uVar8 == (byte)uVar7);
    uVar8 = (uint)((byte)uVar8 < (byte)uVar7);
    uVar7 = (1 - uVar8) - (uint)(uVar8 != 0);
LAB_1000afcf:
    if (uVar9 == 0) {
      LOCK();
      _DAT_10011be0 = _DAT_10011be0 + -1;
      UNLOCK();
    }
    else {
      FUN_100061f6(0x13);
    }
  }
  return uVar7;
}



/* ================================================================
 * Function: FUN_1000aff0
 * Address:  1000aff0
 * ================================================================ */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1000aff0(byte *param_1,char *param_2,void *param_3)

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
  
  iVar2 = _DAT_10011be0;
  uVar6 = 0;
  if (param_3 != (void *)0x0) {
    if (DAT_10011a68 == 0) {
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
        if (bVar3 != (byte)uVar4) goto LAB_1000b04f;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar3 = (byte)(uVar4 >> 8);
      bVar8 = bVar3 < (byte)uVar4;
      if (bVar3 != (byte)uVar4) {
LAB_1000b04f:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
    }
    else {
      LOCK();
      _DAT_10011be0 = _DAT_10011be0 + 1;
      UNLOCK();
      bVar8 = 0 < DAT_10011bdc;
      if (bVar8) {
        LOCK();
        UNLOCK();
        _DAT_10011be0 = iVar2;
        FUN_10006195(0x13);
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
        uVar7 = FUN_100080ba(param_3,uVar7);
        uVar5 = FUN_100080ba(this,uVar5);
        bVar8 = uVar5 < uVar7;
        if (uVar5 != uVar7) goto LAB_1000b0c5;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar8 = uVar5 < uVar7;
      if (uVar5 != uVar7) {
LAB_1000b0c5:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
      if (uVar9 == 0) {
        LOCK();
        _DAT_10011be0 = _DAT_10011be0 + -1;
        UNLOCK();
      }
      else {
        FUN_100061f6(0x13);
      }
    }
  }
  return uVar6;
}



/* ================================================================
 * Function: RtlUnwind
 * Address:  1000b0f2
 * ================================================================ */

void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue)

{
                    /* WARNING: Could not recover jumptable at 0x1000b0f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RtlUnwind(TargetFrame,TargetIp,ExceptionRecord,ReturnValue);
  return;
}



