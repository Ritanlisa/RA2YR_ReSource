// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/HotkeyOptions_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/HouseTypeClass_e4.hpp"
#include "e4/classes/HashTable_flat_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/InfantryTypeClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/SortedArray_e4.hpp"

// 0x5FB320
namespace gamemd {
ObjectClass * * HotkeyOptions::DlgProc(int hWnd, unsigned int a2, unsigned int a3, int a4)
{
  int result; // eax
  int16_t v15; // bx
  HWND (__stdcall *v18)(HWND, int); // edi
  const void *v22; // eax
  int16_t v30; // ax
  int v39; // esi
  int *v40; // eax
  CampaignScore *v41; // esi
  int v42; // eax
  int m; // esi
  int16_t v49; // ax
  void *StringCSF; // eax
  int j; // eax
  int k; // eax
  unsigned int *v73; // [esp+10h] [ebp-11Ch]
  int i; // [esp+10h] [ebp-11Ch]
  int64_t v78; // [esp+14h] [ebp-118h] BYREF
  unsigned char lParam[128]; // [esp+ACh] [ebp-80h] BYREF

  result = (int)(BaseDialogProc(hWnd, a2, a3, a4));
  if ( result ) /*0x5fb353*/
    return result; /*0x5fb353*/
  v73 = (unsigned int *)GetWindowLongA(hWnd, 8); /*0x5fb368*/
  if ( a2 > 0x466 ) /*0x5fb36c*/
  {
    if ( a2 == 1127 ) /*0x5fbe06*/
    {
      int v68 = (int)(GetDlgItem(hWnd, 1223));
      SendMessageA(v68, 331, 0, 0); /*0x5fbe59*/
      for ( i = 0; i < ((unsigned int *)(dword_87F5D8))[36]; ++i ) /*0x5fbe6a*/
      {
        int v69 = *(unsigned int *)(((unsigned int *)(dword_87F5D8))[33] + 4 * i); /*0x5fbe76*/
        int v70 = (*(int (**)(int))(*(unsigned int *)v69 + 12))(v69); /*0x5fbe7d*/
        if ( SendMessageA(v68, 1214, 0, v70) == -1 ) /*0x5fbe8e*/
        {
          int v71 = (*(int (**)(int))(*(unsigned int *)v69 + 12))(v69); /*0x5fbe94*/
          SendMessageA(v68, 1218, 0, v71); /*0x5fbea0*/
        }
      }
      SendMessageA(v68, 334, 0, 0); /*0x5fbebf*/
      dword_832D8C = -1; /*0x5fbecb*/
      SendMessageA(hWnd, 1124, 0, 0); /*0x5fbed5*/
      return 1; /*0x5fbed5*/
    }
    if ( a2 == 1175 ) /*0x5fbe0b*/
    {
      SendMessageA(hWnd, 1127, 0, 0); /*0x5fbe26*/
      return 0; /*0x5fbe38*/
    }
    return 0; /*0x5fbe0b*/
  }
  if ( a2 == 1126 ) /*0x5fb372*/
  {
  int v51; // edi
    int v46 = (int)(GetDlgItem(hWnd, 1224));
    int v47 = (int)(SendMessageA(v46, 392, 0, 0));
    if ( v47 == -1 ) /*0x5fbadb*/
      return 1; /*0x5fbadb*/
    int v76 = SendMessageA(v46, 409, v47, 0); /*0x5fbaf2*/
    int v48 = GetDlgItem(hWnd, 1229); /*0x5fbaf6*/
    v49 = SendMessageA(v48, 1026, 0, 0); /*0x5fbb02*/
    int v50 = (uint8_t)v49; /*0x5fbb0a*/
    if ( (v49 & 0x400) != 0 ) /*0x5fbb13*/
      v50 = (uint8_t)v49 | 0x400; /*0x5fbb15*/
    if ( (v49 & 0x200) != 0 ) /*0x5fbb1e*/
      v50 |= 0x200u; /*0x5fbb20*/
    if ( (v49 & 0x100) != 0 ) /*0x5fbb29*/
      v50 |= 0x100u; /*0x5fbb2b*/
    if ( (v49 & 0x800) != 0 ) /*0x5fbb34*/
      v50 = 0; /*0x5fbb36*/
    if ( sub_48BB40(v76, v50) ) /*0x5fbb3e*/
    {
      if ( sub_48BB60(v50) ) /*0x5fbb66*/
      {
        ObjectClass *v53 = (gamemd::ObjectClass *)(((unsigned int *)(dword_87F5D8))[43]);
        int v54 = 0; /*0x5fbbb4*/
        if ( ((unsigned int *)(dword_87F5D8))[43] > 0 ) /*0x5fbbb8*/
        {
  unsigned int v55;
          while ( 1 ) /*0x5fbbbe*/
          {
            v55 = (gamemd::ObjectClass *)((unsigned int)((gamemd::ObjectClass *)((char)((gamemd::ObjectClass *)(((unsigned int *)(dword_87F5D8))[45])))));
            if ( !IDA_LOBYTE(dword_87F5D8[45]) ) /*0x5fbbc5*/
            {
              qsort((void *)((unsigned int *)(dword_87F5D8))[42], v53, 8, CompareFuncInt); /*0x5fbbd6*/
              v53 = ((unsigned int *)(dword_87F5D8))[43]; /*0x5fbbdb*/
              v55 = 1; /*0x5fbbe1*/
              ((unsigned int *)(dword_87F5D8))[46] = 0; /*0x5fbbe6*/
              IDA_LOBYTE(dword_87F5D8[45]) = 1; /*0x5fbbec*/
            }
            if ( *(unsigned int *)(((unsigned int *)(dword_87F5D8))[42] + 8 * v54 + 4) == v76 ) /*0x5fbbff*/
              break; /*0x5fbbff*/
            if ( ++v54 >= (int)(v53) ) /*0x5fbc04*/
              goto LABEL_127; /*0x5fbc04*/
          }
          int v56 = *(unsigned int *)(((unsigned int *)(dword_87F5D8))[42] + 8 * v54); /*0x5fbc0b*/
          if ( v53 ) /*0x5fbc11*/
          {
            if ( !v55 ) /*0x5fbc19*/
            {
              qsort((void *)((unsigned int *)(dword_87F5D8))[42], v53, 8, CompareFuncInt); /*0x5fbc24*/
              v53 = ((unsigned int *)(dword_87F5D8))[43]; /*0x5fbc29*/
              ((unsigned int *)(dword_87F5D8))[46] = 0; /*0x5fbc32*/
              IDA_LOBYTE(dword_87F5D8[45]) = 1; /*0x5fbc38*/
            }
            IDA_LODWORD(v78) = v56; /*0x5fbc4a*/
            int v57 = HotkeyOptions_Helper(((unsigned int *)(dword_87F5D8))[42], v53, (int *)&v78); /*0x5fbc4e*/
  int v58; // eax
            if ( !v57 || (v58 = (v57 - ((unsigned int *)(dword_87F5D8))[42]) >> 3, v58 == -1) ) /*0x5fbc63*/
            {
              v53 = (gamemd::ObjectClass *)(((unsigned int *)(dword_87F5D8))[43]);
            }
            else
            {
              int v59 = v58 + 1; /*0x5fbc65*/
              for ( j = ((unsigned int *)(dword_87F5D8))[43]; v59 < ((unsigned int *)(dword_87F5D8))[43]; j = ((unsigned int *)(dword_87F5D8))[43] ) /*0x5fbc6f*/
              {
                unsigned int * v61 = (unsigned int *)(((unsigned int *)(dword_87F5D8))[42] + 8 * v59++); /*0x5fbc77*/
                *(v61 - 2) = *v61; /*0x5fbc7d*/
                *(v61 - 1) = v61[1]; /*0x5fbc83*/
              }
              ((unsigned int *)(dword_87F5D8))[43] = j - 1; /*0x5fbc98*/
              *(unsigned int *)(((unsigned int *)(dword_87F5D8))[42] + 8 * ((unsigned int *)(dword_87F5D8))[43]) = 0; /*0x5fbc9d*/
              *(unsigned int *)(((unsigned int *)(dword_87F5D8))[42] + 8 * ((unsigned int *)(dword_87F5D8))[43] + 4) = 0; /*0x5fbcaf*/
              ((unsigned int *)(dword_87F5D8))[46] = 0; /*0x5fbcb3*/
              v53 = ((unsigned int *)(dword_87F5D8))[43]; /*0x5fbcb9*/
            }
          }
        }
LABEL_127:
        if ( v50 ) /*0x5fbcc9*/
        {
          if ( v53 ) /*0x5fbcd1*/
          {
            if ( !IDA_LOBYTE(dword_87F5D8[45]) ) /*0x5fbcde*/
            {
              qsort((void *)((unsigned int *)(dword_87F5D8))[42], v53, 8, CompareFuncInt); /*0x5fbcef*/
              v53 = ((unsigned int *)(dword_87F5D8))[43]; /*0x5fbcf4*/
              ((unsigned int *)(dword_87F5D8))[46] = 0; /*0x5fbcfd*/
              IDA_LOBYTE(dword_87F5D8[45]) = 1; /*0x5fbd03*/
            }
            IDA_LODWORD(v78) = v50; /*0x5fbd15*/
            int v62 = HotkeyOptions_Helper(((unsigned int *)(dword_87F5D8))[42], v53, (int *)&v78); /*0x5fbd19*/
  int v63; // eax
            if ( !v62 || (v63 = (v62 - ((unsigned int *)(dword_87F5D8))[42]) >> 3, v63 == -1) ) /*0x5fbd2e*/
            {
              v53 = (gamemd::ObjectClass *)(((unsigned int *)(dword_87F5D8))[43]);
            }
            else
            {
              int v64 = v63 + 1; /*0x5fbd30*/
              for ( k = ((unsigned int *)(dword_87F5D8))[43]; v64 < ((unsigned int *)(dword_87F5D8))[43]; k = ((unsigned int *)(dword_87F5D8))[43] ) /*0x5fbd3a*/
              {
                unsigned int * v66 = (unsigned int *)(((unsigned int *)(dword_87F5D8))[42] + 8 * v64++); /*0x5fbd42*/
                *(v66 - 2) = *v66; /*0x5fbd48*/
                *(v66 - 1) = v66[1]; /*0x5fbd4e*/
              }
              ((unsigned int *)(dword_87F5D8))[43] = k - 1; /*0x5fbd63*/
              *(unsigned int *)(((unsigned int *)(dword_87F5D8))[42] + 8 * ((unsigned int *)(dword_87F5D8))[43]) = 0; /*0x5fbd68*/
              *(unsigned int *)(((unsigned int *)(dword_87F5D8))[42] + 8 * ((unsigned int *)(dword_87F5D8))[43] + 4) = 0; /*0x5fbd7a*/
              ((unsigned int *)(dword_87F5D8))[46] = 0; /*0x5fbd7e*/
              v53 = ((unsigned int *)(dword_87F5D8))[43]; /*0x5fbd84*/
            }
          }
          int v67 = ((unsigned int *)(dword_87F5D8))[44]; /*0x5fbd92*/
          if ( (unsigned int)(v53)+ (gamemd::ObjectClass *)(1) > (gamemd::ObjectClass *)(((unsigned int *)(dword_87F5D8)))[44] ) /*0x5fbd9c*/
          {
            if ( !((unsigned int *)(dword_87F5D8))[44] ) /*0x5fbda0*/
              v67 = 10; /*0x5fbda2*/
            if ( !KeyboardConfig::ReleaseBuffer((int)&((unsigned int *)(dword_87F5D8))[42], v67) ) /*0x5fbdb4*/
              return 1; /*0x5fbdb4*/
            v53 = ((unsigned int *)(dword_87F5D8))[43]; /*0x5fbdba*/
          }
          *(unsigned int *)(((unsigned int *)(dword_87F5D8))[42] + 8 * v53) = v50; /*0x5fbdc5*/
          *(unsigned int *)(((unsigned int *)(dword_87F5D8))[42] + 8 * ((unsigned int *)(dword_87F5D8))[43]++ + 4) = v76; /*0x5fbdda*/
          IDA_LOBYTE(dword_87F5D8[45]) = 0; /*0x5fbdea*/
          return 1; /*0x5fbdfd*/
        }
        return 1; /*0x5fbcc9*/
      }
      v51 = (int)(GetDlgItem(hWnd, 1597));
      StringCSF = GetStringCSF((void *)aErrorCannotrem, 0, g_Str_File_Options_CPP, 1012); /*0x5fbb8a*/
    }
    else
    {
      v51 = (int)(GetDlgItem(hWnd, 1597));
      StringCSF = GetStringCSF((void *)aErrorCannotmap, 0, g_Str_File_Options_CPP, 1004); /*0x5fbb62*/
    }
    SendMessageA(v51, 1202, 0, StringCSF); /*0x5fbb98*/
    return 1; /*0x5fbba9*/
  }
  if ( a2 != 273 ) /*0x5fb37e*/
  {
    if ( a2 == 1124 ) /*0x5fb38a*/
    {
      v18 = (int)(GetDlgItem);
      int v19 = (int)(GetDlgItem(hWnd, 1223));
      if ( SendMessageA(v19, 327, 0, 0) != dword_832D8C ) /*0x5fb514*/
      {
        dword_832D8C = (int)(SendMessageA(v19, 327, 0, 0));
        SendMessageA(v19, 1203, 64, lParam); /*0x5fb53b*/
        int v20 = GetDlgItem(hWnd, 1224); /*0x5fb547*/
        SendMessageA(v20, 388, 0, 0); /*0x5fb551*/
        int v75 = 0; /*0x5fb55a*/
        if ( ((unsigned int *)(dword_87F5D8))[36] > 0 ) /*0x5fb562*/
        {
          do /*0x5fb5bf*/
          {
            int v21 = *(unsigned int *)(((unsigned int *)(dword_87F5D8))[33] + 4 * v75); /*0x5fb575*/
            v22 = (const void *)(*(int (**)(int))(*(unsigned int *)v21 + 12))(v21); /*0x5fb57d*/
            if ( !_wcsicmp(v22, (const void *)lParam) ) /*0x5fb581*/
            {
              int v23 = (*(int (**)(int))(*(unsigned int *)v21 + 8))(v21); /*0x5fb591*/
              int v24 = SendMessageA(v20, 1229, 0, v23); /*0x5fb59d*/
              if ( v24 != -1 ) /*0x5fb5a2*/
                SendMessageA(v20, 410, v24, v21); /*0x5fb5ac*/
            }
            ++v75; /*0x5fb5bb*/
          }
          while ( v75 < ((unsigned int *)(dword_87F5D8))[36] ); /*0x5fb5bf*/
          v18 = GetDlgItem; /*0x5fb5c1*/
        }
        int v25 = (int)(v18(hWnd, 1227));
        SendMessageA(v25, 1202, 0, &DataGlobal_87F7E8[8147]); /*0x5fb5dc*/
        int v26 = v18(hWnd, 1596); /*0x5fb5e4*/
        SendMessageA(v26, 1202, 0, &DataGlobal_87F7E8[8147]); /*0x5fb5f3*/
        int v27 = v18(hWnd, 1595); /*0x5fb602*/
        SendMessageA(v27, 1202, 0, &DataGlobal_87F7E8[8147]); /*0x5fb60c*/
        SendMessageA(v27, 390, 0, 0); /*0x5fb618*/
        SendMessageA(hWnd, 1125, 0, 0); /*0x5fb624*/
        return 1; /*0x5fb635*/
      }
      return 1; /*0x5fb514*/
    }
    if ( a2 == 1125 ) /*0x5fb391*/
    {
      int v5 = (int)(GetDlgItem(hWnd, 1224));
      int v6 = SendMessageA(v5, 392, 0, 0); /*0x5fb3b5*/
      if ( v6 != -1 ) /*0x5fb3ba*/
      {
    unsigned int v9 = 0;  /* G37 hoist */
        int v7 = (int)(SendMessageA(v5, 409, v6, 0));
        ObjectClass * v8 = (gamemd::ObjectClass *)((gamemd::ObjectClass *)((gamemd::ObjectClass *)((gamemd::ObjectClass *)(unsigned int v9 = SendMessageA(v8, 1202, 0, v9)))));
        ObjectClass *v10 = (gamemd::ObjectClass *)(((unsigned int *)(dword_87F5D8))[43]);
        int v11 = 0; /*0x5fb3f2*/
  int v74; // [esp+10h] [ebp-11Ch]
        IDA_LOWORD(v74) = 0; /*0x5fb3f6*/
        if ( ((unsigned int *)(dword_87F5D8))[43] > 0 ) /*0x5fb3fa*/
        {
    unsigned int v13 = 0;  /* G37 hoist */
          AbstractClass * v12 =
          AbstractClass *v13 = (gamemd::AbstractClass *)((void *)((unsigned int *)(dword_87F5D8))[42]);
          while ( 1 ) /*0x5fb408*/
          {
            if ( !v12 ) /*0x5fb40a*/
            {
              qsort(v13, v10, 8, CompareFuncInt); /*0x5fb415*/
              v10 = ((unsigned int *)(dword_87F5D8))[43]; /*0x5fb41a*/
              v13 = (void *)((unsigned int *)(dword_87F5D8))[42]; /*0x5fb41f*/
              v12 = 1; /*0x5fb425*/
              ((unsigned int *)(dword_87F5D8))[46] = 0; /*0x5fb42a*/
              IDA_LOBYTE(dword_87F5D8[45]) = 1; /*0x5fb434*/
            }
            if ( *((unsigned int *)v13 + 2 * v11 + 1) == v7 ) /*0x5fb43e*/
              break; /*0x5fb43e*/
            if ( ++v11 >= (int)(v10) ) /*0x5fb443*/
              goto LABEL_16; /*0x5fb443*/
          }
          v74 = *((unsigned int *)v13 + 2 * v11); /*0x5fb44a*/
        }
LABEL_16:
        IDA_LODWORD(v78) = GetDlgItem(hWnd, 1596); /*0x5fb44e*/
        char v14 = 0; /*0x5fb464*/
        if ( (v74 & 0x400) != 0 ) /*0x5fb469*/
          v14 = 4; /*0x5fb46b*/
        if ( (v74 & 0x200) != 0 ) /*0x5fb473*/
          v14 |= 2u; /*0x5fb475*/
        if ( (v74 & 0x100) != 0 ) /*0x5fb47a*/
          v14 |= 1u; /*0x5fb47c*/
        if ( (v74 & 0x1000) != 0 ) /*0x5fb481*/
          v14 |= 8u; /*0x5fb483*/
        IDA_HIBYTE(v15) = v14; /*0x5fb48e*/
        IDA_LOBYTE(v15) = v74; /*0x5fb490*/
        FormatHotkeyDisplayString(v15, (void *)lParam); /*0x5fb494*/
        SendMessageA(v78, 1202, 0, lParam); /*0x5fb4ad*/
        int v16 = GetDlgItem(hWnd, 1229); /*0x5fb4b5*/
        SendMessageA(v16, 1025, 0, 0); /*0x5fb4c1*/
        int v17 = GetDlgItem(hWnd, 1595); /*0x5fb4c9*/
        SendMessageA(v17, 1202, 0, &DataGlobal_87F7E8[8147]); /*0x5fb4d8*/
        return 1; /*0x5fb4e9*/
      }
      return 1; /*0x5fb3ba*/
    }
    return 0; /*0x5fbe19*/
  }
  if ( (uint16_t)a3 > 0x4CDu ) /*0x5fb644*/
  {
  void *v79[3]; // [esp+1Ch] [ebp-110h] BYREF
    if ( (uint16_t)a3 == 1231 ) /*0x5fb8df*/
    {
      SendMessageA(hWnd, 1126, 0, 0); /*0x5fba96*/
      SendMessageA(hWnd, 1125, 0, 0); /*0x5fbaa2*/
      return 1; /*0x5fbab3*/
    }
    if ( (uint16_t)a3 == 1232 ) /*0x5fb8e6*/
    {
      if ( !IDA_HIWORD(a3) ) /*0x5fba05*/
      {
        this->Debug::Log(); /*0x5fba13*/
        CCFileClass::Construct(v79, aKeyboardmdIni); /*0x5fba24*/
        FileClass::Delete((void *)v79); /*0x5fba2d*/
        KeyboardConfig::LoadINI(); /*0x5fba32*/
        SendMessageA(hWnd, 1127, 0, 0); /*0x5fba41*/
        int v86 = 0; /*0x5fba53*/
  unsigned char v85[12]; // [esp+74h] [ebp-B8h] BYREF
        Vector::Clear((int)v85); /*0x5fba5e*/
        v79[0] = (unsigned int)&off_7E1668; /*0x5fba67*/
        BufferIOFileClass::Dtor(v79); /*0x5fba6f*/
        return 1; /*0x5fba83*/
      }
    }
    else if ( (uint16_t)a3 == 1670 && !IDA_HIWORD(a3) ) /*0x5fb8f7*/
    {
      v79[1] = 0; /*0x5fb906*/
      v79[2] = 0; /*0x5fb90a*/
  unsigned int v80[10]; // [esp+28h] [ebp-104h] BYREF
      GenericList::Constructor(v80); /*0x5fb90e*/
      memset(&v80[7], 0, 12); /*0x5fb921*/
      char v81 = 0; /*0x5fb92d*/
      int v82 = 0; /*0x5fb932*/
      int v83 = 0; /*0x5fb936*/
      char v84 = 0; /*0x5fb93a*/
      v79[0] = (unsigned int)&CCINIClass_Vtable; /*0x5fb93f*/
      INIClass::ClearSection((int)v79, 0, 0); /*0x5fb947*/
      ObjectClass *v43 = dword_87F5D8[43]; /*0x5fb94c*/
      for ( m = 0; m < dword_87F5D8[43]; ++m ) /*0x5fb955*/
      {
        if ( !IDA_LOBYTE(dword_87F5D8[45]) ) /*0x5fb95f*/
        {
          qsort((void *)dword_87F5D8[42], v43, 8, CompareFuncInt); /*0x5fb970*/
          dword_87F5D8[46] = 0; /*0x5fb978*/
          IDA_LOBYTE(dword_87F5D8[45]) = 1; /*0x5fb97e*/
        }
        int v72 = *(unsigned int *)(dword_87F5D8[42] + 8 * m); /*0x5fb992*/
        char * v45 = (char *)(*(int (**)(unsigned int))(**(unsigned int **)(dword_87F5D8[42] + 8 * m + 4) + 4))(*(unsigned int *)(dword_87F5D8[42] + 8 * m + 4)); /*0x5fb995*/
        INIClass::SetInt((char *)v79, (uint8_t *)g_INI_Key_Hotkey, v45, v72, 0); /*0x5fb9a2*/
        v43 = dword_87F5D8[43]; /*0x5fb9a7*/
      }
  int v87[9]; // [esp+88h] [ebp-A4h] BYREF
      RawFileClass::Construct(v87, (int)aKeyboardmdIni_0); /*0x5fb9bd*/
      INIClass::WriteDigest((char *)v79, (int)v87, 0); /*0x5fb9cf*/
      *v73 = 1; /*0x5fb9d8*/
      RawFileClass::Dtor(v87); /*0x5fb9e5*/
      HashTable_flat::DestroyHashTableINIClass(v79); /*0x5fb9ee*/
      return 1; /*0x5fba02*/
    }
    return 1; /*0x5fb8fa*/
  }
  if ( (uint16_t)a3 != 1229 ) /*0x5fb64a*/
  {
    if ( (uint16_t)a3 == 2 ) /*0x5fb653*/
    {
      if ( !IDA_HIWORD(a3) ) /*0x5fb6d4*/
      {
        KeyboardConfig::LoadINI(); /*0x5fb6dd*/
        *v73 = 2; /*0x5fb6e9*/
        return 1; /*0x5fb6fb*/
      }
    }
    else if ( (uint16_t)a3 == 1223 ) /*0x5fb65a*/
    {
      if ( IDA_HIWORD(a3) == 1 ) /*0x5fb6af*/
      {
        SendMessageA(hWnd, 1124, 0, 0); /*0x5fb6bf*/
        return 1; /*0x5fb6d1*/
      }
    }
    else if ( (uint16_t)a3 == 1224 && IDA_HIWORD(a3) == 1 ) /*0x5fb669*/
    {
      SendMessageA(hWnd, 1125, 0, 0); /*0x5fb679*/
      int v28 = GetDlgItem(hWnd, 1229); /*0x5fb685*/
      if ( v28 ) /*0x5fb68d*/
      {
        SetFocus(v28); /*0x5fb694*/
        return 1; /*0x5fb6a6*/
      }
    }
    return 1; /*0x5fb68d*/
  }
  if ( IDA_HIWORD(a3) != 768 ) /*0x5fb707*/
    return 1; /*0x5fbed7*/
  int v29 = GetDlgItem(hWnd, 1597); /*0x5fb713*/
  SendMessageA(v29, 1202, 0, &DataGlobal_87F7E8[8147]); /*0x5fb72c*/
  v30 = SendMessageA(a4, 1026, 0, 0); /*0x5fb738*/
  int v31 = (uint8_t)v30; /*0x5fb740*/
  if ( (v30 & 0x400) != 0 ) /*0x5fb749*/
    v31 = (uint8_t)v30 | 0x400; /*0x5fb74b*/
  if ( (v30 & 0x200) != 0 ) /*0x5fb754*/
    v31 |= 0x200u; /*0x5fb756*/
  if ( (v30 & 0x100) != 0 ) /*0x5fb75f*/
    v31 |= 0x100u; /*0x5fb761*/
  if ( (v30 & 0x800) != 0 ) /*0x5fb76a*/
    v31 = 0; /*0x5fb76c*/
  ObjectClass *v32 = dword_87F5D8[43]; /*0x5fb76e*/
  if ( !dword_87F5D8[43] ) /*0x5fb775*/
    goto LABEL_81; /*0x5fb775*/
  unsigned int * v33 = (unsigned int *)dword_87F5D8[46]; /*0x5fb77b*/
  if ( !dword_87F5D8[46] || *(unsigned int *)dword_87F5D8[46] != v31 ) /*0x5fb787*/
  {
    if ( !IDA_LOBYTE(dword_87F5D8[45]) ) /*0x5fb795*/
    {
      qsort((void *)dword_87F5D8[42], dword_87F5D8[43], 8, CompareFuncInt); /*0x5fb7a6*/
      dword_87F5D8[46] = 0; /*0x5fb7ae*/
      IDA_LOBYTE(dword_87F5D8[45]) = 1; /*0x5fb7b8*/
    }
    ObjectClass *v34 = dword_87F5D8[43]; /*0x5fb7bf*/
    AbstractClass *v35 = (unsigned int *)dword_87F5D8[42]; /*0x5fb7c5*/
    if ( dword_87F5D8[43] <= 0 ) /*0x5fb7cd*/
      goto LABEL_81; /*0x5fb7cd*/
    while ( 1 ) /*0x5fb7da*/
    {
      int v36 = v35[2 * (v34 / 2)]; /*0x5fb7da*/
      v33 = &v35[2 * (v34 / 2)]; /*0x5fb7dd*/
      if ( v36 <= v31 ) /*0x5fb7e2*/
      {
        if ( v36 == v31 ) /*0x5fb7e8*/
        {
          if ( !v33 ) /*0x5fb7ff*/
            goto LABEL_81; /*0x5fb7ff*/
          v32 = dword_87F5D8[43]; /*0x5fb805*/
          dword_87F5D8[46] = &v35[2 * (v34 / 2)]; /*0x5fb80a*/
          break; /*0x5fb80a*/
        }
        v35 = v33 + 2; /*0x5fb7ed*/
        v34 += -1 - v34 / 2; /*0x5fb7f2*/
      }
      else
      {
        v34 /= 2; /*0x5fb7e4*/
      }
      if ( v34 <= 0 ) /*0x5fb7f6*/
        goto LABEL_81; /*0x5fb7f6*/
    }
  }
  if ( !v32 ) /*0x5fb812*/
    goto LABEL_79; /*0x5fb812*/
  if ( v33 && *v33 == v31 ) /*0x5fb81a*/
  {
LABEL_85:
    v40 = v33 + 1; /*0x5fb8d5*/
    goto LABEL_80; /*0x5fb8d8*/
  }
  if ( !IDA_LOBYTE(dword_87F5D8[45]) ) /*0x5fb828*/
  {
    qsort((void *)dword_87F5D8[42], v32, 8, CompareFuncInt); /*0x5fb839*/
    dword_87F5D8[46] = 0; /*0x5fb841*/
    IDA_LOBYTE(dword_87F5D8[45]) = 1; /*0x5fb84b*/
  }
  ObjectClass *v37 = dword_87F5D8[43]; /*0x5fb852*/
  AbstractClass *v38 = (unsigned int *)dword_87F5D8[42]; /*0x5fb858*/
  if ( dword_87F5D8[43] <= 0 ) /*0x5fb860*/
    goto LABEL_79; /*0x5fb860*/
  while ( 1 ) /*0x5fb869*/
  {
    v39 = v38[2 * (v37 / 2)]; /*0x5fb869*/
    v33 = &v38[2 * (v37 / 2)]; /*0x5fb86c*/
    if ( v39 <= v31 ) /*0x5fb871*/
      break; /*0x5fb871*/
    v37 /= 2; /*0x5fb873*/
LABEL_78:
    if ( v37 <= 0 ) /*0x5fb885*/
      goto LABEL_79; /*0x5fb885*/
  }
  if ( v39 != v31 ) /*0x5fb877*/
  {
    v38 = v33 + 2; /*0x5fb879*/
    v37 += -1 - v37 / 2; /*0x5fb881*/
    goto LABEL_78; /*0x5fb881*/
  }
  if ( v33 ) /*0x5fb8cd*/
  {
    dword_87F5D8[46] = &v38[2 * (v37 / 2)]; /*0x5fb8cf*/
    goto LABEL_85; /*0x5fb8cf*/
  }
LABEL_79:
  v40 = &dword_A8ED54[239290]; /*0x5fb887*/
LABEL_80:
  v41 = (unsigned int *)(*(int (**)(int))(*(unsigned int *)*v40 + 8))(*v40); /*0x5fb88c*/
  if ( !v41 ) /*0x5fb897*/
LABEL_81:
    v41 = &DataGlobal_87F7E8[8147]; /*0x5fb899*/
  v42 = GetDlgItem(hWnd, 1595); /*0x5fb8a4*/
  SendMessageA(v42, 1202, 0, v41); /*0x5fb8b3*/
  return 1; /*0x5fb4da*/
}
} // namespace gamemd

// 0x5FC120
namespace gamemd {
void sub_5FC120(int a1, int a2, int * a3)
{
  int v3; // esi
  int v4; // ebx
  int v5; // edi

  v3 = a2; /*0x5fc125*/
  if ( a2 <= 0 ) /*0x5fc127*/
    return 0; /*0x5fc159*/
  v4 = *a3; /*0x5fc12d*/
  while ( 1 ) /*0x5fc136*/
  {
    v5 = *(unsigned int *)(a1 + 8 * (v3 / 2)); /*0x5fc136*/
    if ( v5 <= v4 ) /*0x5fc13e*/
      break; /*0x5fc13e*/
    v3 /= 2; /*0x5fc140*/
  LABEL_7:
    if ( v3 <= 0 ) /*0x5fc152*/
      return 0; /*0x5fc152*/
  }
  if ( v5 != v4 ) /*0x5fc144*/
  {
    a1 += 8 * (v3 / 2) + 8; /*0x5fc146*/
    v3 += -1 - v3 / 2; /*0x5fc14e*/
    goto LABEL_7; /*0x5fc14e*/
  }
  return a1 + 8 * (v3 / 2); /*0x5fc154*/
}
}