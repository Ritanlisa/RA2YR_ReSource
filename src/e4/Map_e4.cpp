// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_57B870_e4.hpp"
#include "e4/classes/E4Recv_57B990_e4.hpp"
#include "e4/classes/E4Recv_57CAB0_e4.hpp"
#include "e4/classes/E4Recv_57CBE0_e4.hpp"
#include "e4/classes/E4Recv_5AD930_e4.hpp"
#include "e4/classes/E4Recv_5AD9F0_e4.hpp"
#include "e4/classes/E4Recv_5ADD10_e4.hpp"
#include "e4/classes/E4Recv_5CC690_e4.hpp"
#include "e4/classes/E4Recv_5CEDD0_e4.hpp"
#include "e4/classes/E4Recv_5EF010_e4.hpp"
#include "e4/classes/E4Recv_5FBF70_e4.hpp"
#include "e4/classes/E4Recv_65FE00_e4.hpp"
#include "e4/classes/E4Recv_660540_e4.hpp"
#include "e4/classes/E4Recv_681060_e4.hpp"
#include "e4/classes/E4Recv_681080_e4.hpp"
#include "e4/classes/E4Recv_6810A0_e4.hpp"
#include "e4/classes/E4Recv_6810D0_e4.hpp"
#include "e4/classes/E4Recv_681110_e4.hpp"
#include "e4/classes/E4Recv_681130_e4.hpp"
#include "e4/classes/E4Recv_6811C0_e4.hpp"
#include "e4/classes/E4Recv_681200_e4.hpp"
#include "e4/classes/E4Recv_681240_e4.hpp"
#include "e4/classes/E4Recv_681280_e4.hpp"
#include "e4/classes/E4Recv_6812C0_e4.hpp"
#include "e4/classes/E4Recv_683050_e4.hpp"
#include "e4/classes/E4Recv_6B4100_e4.hpp"
#include "e4/classes/E4Recv_7694C0_e4.hpp"
#include "e4/classes/E4Recv_769C20_e4.hpp"
#include "e4/classes/Map_WorldDominationTour_20_e4.hpp"
#include "e4/classes/Map_WorldDominationTour_28_e4.hpp"
#include "e4/classes/Map_WorldDominationTour_38_e4.hpp"
#include "e4/classes/Map_WorldDominationTour_43_e4.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/GameClass_e4.hpp"
#include "e4/classes/MSEngine_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Mission_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/RandomMap_e4.hpp"
#include "e4/classes/ScriptAction_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Team_e4.hpp"
#include "e4/classes/Timer_e4.hpp"

// 0x539760
namespace gamemd {
int sub_539760()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_539760()
{
  word_A9FA48 = unk_A9F9F8; /*0x539766*/
  unk_A9F9CC = unk_A9F9F8; /*0x53976b*/
  unk_A9FAB4 = 0; /*0x53977d*/
  unk_A9FABC = 0; /*0x539783*/
  unk_827FC0 = -1; /*0x539789*/
  unk_827FC4 = -1; /*0x53978f*/
  unk_827FC8 = -1; /*0x539795*/
  unk_827FCC = -1; /*0x53979b*/
  unk_A9FAC0 = 0; /*0x5397a1*/
  unk_A9FAC4 = 0; /*0x5397a7*/
  unk_A9FAC8 = 0; /*0x5397ad*/
  unk_A9FAB8 = 0; /*0x5397b3*/
  unk_A9FACC = 0; /*0x5397b9*/
  dword_A9FA70 = 0; /*0x5397bf*/
  if ( unk_A9FA64 && unk_A9FA6D ) /*0x5397cd*/
  {
    __3_YAXPAX_Z(unk_A9FA64); /*0x5397d0*/
    unk_A9FA64 = 0; /*0x5397d8*/
  }
  unk_A9FA6D = 0; /*0x5397e3*/
  dword_A9FA68 = 0; /*0x5397eb*/
  dword_A9F9E0 = 0; /*0x5397f1*/
  if ( unk_A9F9D4 && unk_A9F9DD ) /*0x5397ff*/
  {
    __3_YAXPAX_Z(unk_A9F9D4); /*0x539802*/
    unk_A9F9D4 = 0; /*0x53980a*/
  }
  unk_A9F9DD = 0; /*0x539815*/
  dword_A9F9D8 = 0; /*0x53981d*/
  unk_A9FA28 = 0; /*0x539823*/
  if ( unk_A9FA1C && unk_A9FA25 ) /*0x539831*/
  {
    __3_YAXPAX_Z(unk_A9FA1C); /*0x539834*/
    unk_A9FA1C = 0; /*0x53983c*/
  }
  unk_A9FA25 = 0; /*0x539847*/
  unk_A9FA20 = 0; /*0x53984d*/
  *((_DWORD *)g_ScenarioClass_Instance + 3404) = *((_DWORD *)g_ScenarioClass_Instance + 3402); /*0x539859*/
  if ( unk_A9FA9C ) /*0x539867*/
    (**(void (__thiscall ***)(int, int))unk_A9FA9C)(unk_A9FA9C, 1); /*0x53986d*/
  unk_A9FA98 = 0; /*0x539875*/
  unk_A9FA9C = 0; /*0x53987b*/
  unk_A9FAB0 = 0; /*0x539881*/
  return UpdateSurfaceAnimations(-1, -1, -1, 0); /*0x53988c*/
}
}
} // namespace gamemd

// 0x5558E0
namespace gamemd {
int sub_5558E0(int * a1, int * a2, int * a3, int * a4, int * a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_5558E0(int *a1, int *a2, int *a3, int *a4, int *a5)
{
  int result; // eax

  *a3 = *a3 <= 0 ? 0 : *a3;
  *a4 = *a4 <= 0 ? 0 : *a4;
  *a5 = *a5 <= 0 ? 0 : *a5;
  int v8 = *a3; /*0x555921*/
  if ( *a3 >= 2000 ) /*0x555928*/
    v8 = 2000; /*0x55592a*/
  *a3 = v8; /*0x55592f*/
  int v9 = *a4; /*0x555931*/
  if ( *a4 >= 2000 ) /*0x555938*/
    v9 = 2000; /*0x55593a*/
  *a4 = v9; /*0x55593f*/
  int v10 = *a5; /*0x555941*/
  if ( *a5 >= 2000 ) /*0x555948*/
    v10 = 2000; /*0x55594a*/
  *a5 = v10; /*0x55594f*/
  *a1 = 0x10000; /*0x555951*/
  int v11 = *a3; /*0x555958*/
  int v19 = *a3; /*0x55595f*/
  if ( *a3 != 1000 || *a4 != v11 || *a5 != v11 ) /*0x55596b*/
  {
    int v12 = *a4; /*0x555971*/
    int v20 = *a4; /*0x555975*/
    if ( *a4 > v11 ) /*0x555979*/
      goto LABEL_15; /*0x555979*/
    if ( v11 >= *a5 ) /*0x55597d*/
    {
      double v13 = (double)v19 * 65536.0 * 0.001; /*0x555989*/
      int v14 = Math::RoundToInt(v13); /*0x555991*/
      *a1 = v14; /*0x555999*/
      if ( v14 >= 66 ) /*0x55599c*/
      {
        *a3 = 1000; /*0x5559a2*/
        *a4 = Math::RoundToInt(v13); /*0x5559b7*/
        *a5 = Math::RoundToInt(v13); /*0x5559ca*/
LABEL_21:
        *a2 = (*a2 * *a1) >> 16; /*0x555a8f*/
        goto LABEL_22; /*0x555a9c*/
      }
      goto LABEL_17; /*0x55599c*/
    }
    if ( v12 >= v11 ) /*0x5559d3*/
    {
LABEL_15:
      if ( v12 >= *a5 ) /*0x5559d7*/
      {
        int v15 = Math::RoundToInt((double)v20 * 65536.0 * 0.001); /*0x5559e9*/
        *a1 = v15; /*0x5559f1*/
        if ( v15 >= 66 ) /*0x5559f4*/
        {
          *a4 = 1000; /*0x555a1e*/
          *a3 = Math::RoundToInt((double)*a3 * 65536.0 / (double)*a1); /*0x555a34*/
          *a5 = Math::RoundToInt((double)*a5 * 65536.0 / (double)*a1); /*0x555a46*/
          goto LABEL_21; /*0x555a48*/
        }
LABEL_17:
        *a1 = 0x10000; /*0x5559f6*/
        *a3 = 1000; /*0x555a01*/
        *a4 = 1000; /*0x555a07*/
        *a5 = 1000; /*0x555a0d*/
        *a2 = 0; /*0x555a13*/
        goto LABEL_22; /*0x555a19*/
      }
    }
    int v16 = Math::RoundToInt((double)*a5 * 65536.0 * 0.001); /*0x555a58*/
    *a1 = v16; /*0x555a60*/
    if ( v16 >= 66 ) /*0x555a63*/
    {
      *a5 = 1000; /*0x555a65*/
      *a3 = Math::RoundToInt((double)*a3 * 65536.0 / (double)*a1); /*0x555a7b*/
      *a4 = Math::RoundToInt((double)*a4 * 65536.0 / (double)*a1); /*0x555a8d*/
      goto LABEL_21; /*0x555a8d*/
    }
    goto LABEL_17; /*0x555a63*/
  }
LABEL_22:
  result = *a2; /*0x555a9e*/
  if ( *a2 >= 2000 ) /*0x555aad*/
    result = 2000; /*0x555aaf*/
  *a2 = result; /*0x555ab4*/
  return result; /*0x555aa2*/
}
}
} // namespace gamemd

// 0x5A1E50
namespace gamemd {
char sub_5A1E50(short * a1, int a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall sub_5A1E50(__int16 *a1, int a2, int a3, int a4)
{
  __int16 v7; // si
  __int16 v8; // bx
  __int16 v9; // si
  int v14; // [esp+14h] [ebp-1Ch]
  int v15; // [esp+18h] [ebp-18h]
  int v17; // [esp+20h] [ebp-10h]
  int v18; // [esp+24h] [ebp-Ch]
  __int16 v19; // [esp+28h] [ebp-8h]
  __int16 v20; // [esp+2Ah] [ebp-6h]

  v19 = *a1; /*0x5a1e5e*/
  v20 = a1[2]; /*0x5a1e63*/
  int v4 = *((_DWORD *)a1 + 3); /*0x5a1e68*/
  int v5 = 0; /*0x5a1e6c*/
  int v13 = 0; /*0x5a1e73*/
  v15 = 0; /*0x5a1e77*/
  v18 = v4; /*0x5a1e7b*/
  if ( v4 <= 0 ) /*0x5a1e7f*/
    return 0; /*0x5a1f41*/
  int v6 = *((_DWORD *)a1 + 2); /*0x5a1e85*/
  v17 = v6; /*0x5a1e88*/
  while ( 1 ) /*0x5a1e8c*/
  {
    v7 = 0; /*0x5a1e8c*/
    v14 = 0; /*0x5a1e90*/
    if ( v6 > 0 ) /*0x5a1e94*/
      break; /*0x5a1e94*/
LABEL_16:
    v15 = ++v5; /*0x5a1f37*/
    if ( v5 >= v4 ) /*0x5a1f3b*/
      return 0; /*0x5a1f3b*/
  }
  v8 = v20 + v5; /*0x5a1e9e*/
  while ( 1 )
  {
    v9 = v19 + v7; /*0x5a1ea5*/
    int v10 = v9 + v8; /*0x5a1eb3*/
    if ( v10 > g_MapCellHeight_Value
      && v9 - v8 < g_MapCellHeight_Value
      && v8 - v9 < g_MapCellHeight_Value
      && v10 <= g_MapCellCount )
    {
      int v11 = g_MapTileArray ? *((_DWORD *)g_MapTileArray + 20 * v9 + 20 * unk_89C2DC * v8 + 14) : -1;
      if ( v11 == a2 && ++v13 >= a4 ) /*0x5a1f15*/
        return 1; /*0x5a1f41*/
    }
    v6 = v17; /*0x5a1f1b*/
    v7 = ++v14; /*0x5a1f1f*/
    if ( v14 >= v17 ) /*0x5a1f26*/
    {
      v4 = v18; /*0x5a1f2c*/
      v5 = v15; /*0x5a1f30*/
      goto LABEL_16; /*0x5a1f30*/
    }
  }
}
}
} // namespace gamemd

// 0x5ADD10
namespace gamemd {
int E4Recv_5ADD10::Map_Delete()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void Map_Delete(int this)
{
  wchar_t *v4; // eax
  wchar_t *StringCSF; // [esp-10h] [ebp-F8h]

  _DWORD v8[20]; // [esp+Ch] [ebp-DCh] BYREF
  MSEngine::Construct(v8); /*0x5add1e*/
  char v9[120]; // [esp+5Ch] [ebp-8Ch] BYREF
  Map_Delete_5CEDD0(v9); /*0x5add27*/
  int v10[5]; // [esp+D4h] [ebp-14h] BYREF
  unknown_libname_73(v10); /*0x5add33*/
  v10[1] = Timer::GetTicks(); /*0x5add48*/
  v10[3] = 0; /*0x5add50*/
  v8[0] = &vt_MapSelect; /*0x5add5b*/
  bool v3 = ScenarioClass::Load(v8, (ObjectClass *)this) == 0; /*0x5add71*/
  DeleteAndZero((int)v10); /*0x5add74*/
  MSEngine::Destructor((int)v9); /*0x5add7d*/
  MSEngine::Destruct(v8); /*0x5add86*/
  if ( v3 )
  {
    StringCSF = GetStringCSF(g_Str_TXT_OK, 0, &stru_82C090.onBridge, 134); /*0x5addba*/
    v4 = GetStringCSF((wchar_t *)&stru_82C090.spawnStatus, 0, &stru_82C090.onBridge, 134); /*0x5addc5*/
  int v7; // [esp+0h] [ebp-E8h]
    Dialog::ShowMessageBox((int)v4, StringCSF, 0, 0, 0, v7); /*0x5addcf*/
    return 0; /*0x5addd4*/
  }
  else
  {
    Debug::Log(); /*0x5addf6*/
    return strlen((const char *)(this + 4700)) != 0 ? this + 4700 : 0;
  }
}
}
} // namespace gamemd

// 0x682150
namespace gamemd {
int sub_682150(int a1, int a2, LPSTR lpMultiByteStr)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_682150(int a1, int a2, LPSTR lpMultiByteStr)
{
  _UNKNOWN **v5; // ecx
  WCHAR *i; // edi
  WCHAR WideCharStr[128]; // [esp+2Ch] [ebp-100h] BYREF

  int v9 = 0; /*0x682167*/
  *lpMultiByteStr = 0; /*0x68216f*/
  int v3 = 0; /*0x682172*/
  _DWORD * v4 = &DataGlobal_83D658; /*0x682174*/
  while ( *v4 != a2 ) /*0x68217b*/
  {
    v4 += 2; /*0x68217d*/
    ++v3; /*0x682180*/
    if ( (int)v4 >= (int)g_INI_Key_GameType ) /*0x682186*/
    {
      v5 = 0; /*0x682188*/
      goto LABEL_5; /*0x682188*/
    }
  }
  v5 = (&DataGlobal_83D65C)[2 * v3]; /*0x6821c5*/
LABEL_5:
  int v6 = (*(int (__stdcall **)(int, _UNKNOWN **, _DWORD, int, _DWORD, int *))(*(_DWORD *)a1 + 16))(a1, v5, 0, 16, 0, &v9); /*0x68218a*/
  if ( v6 >= 0 ) /*0x6821a7*/
  {
    for ( i = WideCharStr; ; ++i ) /*0x6821ce*/
    {
      if ( !v9 ) /*0x6821d8*/
        WinAPI::Wrapper(-2147467261); /*0x6821df*/
      v6 = (*(int (__stdcall **)(int, WCHAR *, int, _DWORD))(*(_DWORD *)v9 + 12))(v9, i, 2, 0); /*0x6821f3*/
      if ( v6 < 0 ) /*0x6821f7*/
        break; /*0x6821f7*/
      if ( !*i ) /*0x6821fd*/
      {
        WideCharToMultiByte(0, 0, WideCharStr, -1, lpMultiByteStr, 127, 0, 0); /*0x682216*/
        if ( v9 ) /*0x682222*/
          (*(void (__stdcall **)(int))(*(_DWORD *)v9 + 8))(v9); /*0x682227*/
        return v6; /*0x682227*/
      }
    }
  }
  if ( !v9 ) /*0x6821af*/
    return v6; /*0x68222a*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v9 + 8))(v9); /*0x6821b4*/
  return v6; /*0x6821b9*/
}
}
} // namespace gamemd

// 0x68C050
namespace gamemd {
void sub_68C050()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_68C050()
{
  int WarRatio_high; // ecx
  int HelipadRatio; // edx
  int AirstripRatio_high; // ecx
  void **v13; // [esp+8h] [ebp-18h] BYREF
  void *Block; // [esp+Ch] [ebp-14h]

  int v0 = 0; /*0x68c059*/
  if ( unk_8B41F0 > 0 ) /*0x68c05d*/
  {
    WarRatio_high = HIDWORD(g_RulesClass_Instance->?); /*0x68c069*/
    if ( WarRatio_high > 0 && WarRatio_high >= unk_8B41F0 ) /*0x68c079*/
    {
  char v16; // [esp+15h] [ebp-Bh]
      VectorClass::Construct(&v13, 0, 0); /*0x68c086*/
      int v2 = 10; /*0x68c091*/
      v13 = &vt_DynamicVectorClass_int; /*0x68c096*/
      int v18 = 10; /*0x68c09e*/
      int v17 = 0; /*0x68c0a2*/
      int v3 = 0; /*0x68c0ac*/
      if ( SHIDWORD(g_RulesClass_Instance->?) > 0 ) /*0x68c0b0*/
      {
  int v15; // [esp+10h] [ebp-10h]
        int v4 = v15; /*0x68c0b2*/
        while ( 1 ) /*0x68c0bc*/
        {
          if ( v17 < v4 ) /*0x68c0c0*/
            goto LABEL_12; /*0x68c0c0*/
          if ( (v16 || !v4) && v2 > 0 ) /*0x68c0d0*/
            break; /*0x68c0d0*/
LABEL_14:
          if ( ++v3 >= SHIDWORD(g_RulesClass_Instance->?) ) /*0x68c109*/
            goto LABEL_15; /*0x68c109*/
          v2 = v18; /*0x68c0b8*/
        }
        if ( ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v13[2])(&v13, v2 + v4, 0) ) /*0x68c0df*/
        {
LABEL_12:
          int v5 = v17++; /*0x68c0e6*/
          *((_DWORD *)Block + v5) = v3; /*0x68c0f5*/
        }
        v4 = v15; /*0x68c0f8*/
        goto LABEL_14; /*0x68c0f8*/
      }
LABEL_15:
      int v6 = 0; /*0x68c10b*/
      if ( unk_8B41F0 > 0 ) /*0x68c114*/
      {
        while ( 1 ) /*0x68c12f*/
        {
          int v7 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, v17 - 1); /*0x68c12f*/
          if ( v7 < v17 ) /*0x68c13a*/
          {
            int v8 = v7; /*0x68c13d*/
            if ( v7 < --v17 ) /*0x68c145*/
            {
              do /*0x68c159*/
              {
                ++v8; /*0x68c14b*/
                *((_DWORD *)Block + v8 - 1) = *((_DWORD *)Block + v8); /*0x68c14f*/
              }
              while ( v8 < v17 ); /*0x68c159*/
            }
          }
          HelipadRatio = g_RulesClass_Instance->?; /*0x68c164*/
          if ( v7 + 1 <= HelipadRatio ) /*0x68c16c*/
            break; /*0x68c16c*/
          int v10 = v7 - HelipadRatio; /*0x68c16e*/
          int v11 = *(_DWORD *)g_RulesClass_Instance->?; /*0x68c170*/
          if ( v10 + 1 <= v11 ) /*0x68c17b*/
          {
            v0 = *(_DWORD *)(LODWORD(g_RulesClass_Instance->?) + 4 * v10); /*0x68c19a*/
          }
          else
          {
            v7 = v10 - v11; /*0x68c183*/
            if ( v7 + 1 <= g_RulesClass_Instance->? ) /*0x68c18a*/
            {
              AirstripRatio_high = *(_DWORD *)g_RulesClass_Instance->?; /*0x68c18c*/
LABEL_25:
              v0 = *(_DWORD *)(AirstripRatio_high + 4 * v7); /*0x68c1a5*/
            }
          }
          if ( v0 ) /*0x68c1aa*/
            *(_DWORD *)(*((_DWORD *)unk_8B41E4 + v6) + 1780) = v0; /*0x68c1b5*/
          if ( ++v6 >= unk_8B41F0 ) /*0x68c1c3*/
            goto LABEL_29; /*0x68c1c3*/
        }
        AirstripRatio_high = HIDWORD(g_RulesClass_Instance->?); /*0x68c19f*/
        goto LABEL_25; /*0x68c19f*/
      }
LABEL_29:
      v13 = &vt_VectorClass_int; /*0x68c1ca*/
      if ( Block ) /*0x68c1d9*/
      {
        if ( v16 ) /*0x68c1e1*/
          __3_YAXPAX_Z(Block); /*0x68c1e4*/
      }
    }
  }
}
}
} // namespace gamemd

// 0x55CF10
namespace gamemd {
char sub_55CF10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_55CF10()
{
  char result; // al
  DWORD Ticks; // [esp+0h] [ebp-Ch]

  Debug::Log(); /*0x55cf18*/
  result = g_GameMode_Current[0]; /*0x55cf1d*/
  if ( g_GameMode_Current[0] == 4 ) /*0x55cf28*/
  {
    result = g_NetworkInterface; /*0x55cf2e*/
    if ( g_NetworkInterface ) /*0x55cf35*/
    {
      result = g_Network_IsHosting; /*0x55cf3b*/
      if ( g_Network_IsHosting ) /*0x55cf42*/
      {
        if ( DataGlobal_A8EA0C ) /*0x55cf4c*/
        {
          NetworkEventQueueClass::WaitForResponse((int)&g_NetworkEventQueue); /*0x55cf53*/
          int v1 = 480; /*0x55cf61*/
          Ticks = Timer::GetTicks(); /*0x55cf66*/
          while ( 1 ) /*0x55cf74*/
          {
            if ( Ticks != -1 ) /*0x55cf79*/
            {
              int v2 = Timer::GetTicks() - Ticks; /*0x55cf84*/
              if ( v2 >= 480 ) /*0x55cf8a*/
                break; /*0x55cf8a*/
              v1 = 480 - v2; /*0x55cf8c*/
            }
            if ( !v1 ) /*0x55cf90*/
              break; /*0x55cf90*/
            Event::Dispatch(); /*0x55cf92*/
            if ( Process::WaitForExit((const HANDLE *)&g_NetworkEventQueue, 0xAu, 0) ) /*0x55cfa0*/
              break; /*0x55cfa0*/
            v1 = 480; /*0x55cf70*/
          }
        }
        if ( !g_GameStateFlags ) /*0x55cfb2*/
          return Network::SendUnreachable(); /*0x55cfb2*/
        result = (*(int (__thiscall **)(int))(*(_DWORD *)g_GameStateFlags + 8))(g_GameStateFlags); /*0x55cfb6*/
        if ( !result ) /*0x55cfbb*/
          return Network::SendUnreachable(); /*0x55cfbd*/
      }
    }
  }
  return result; /*0x55cfc2*/
}
}
} // namespace gamemd

// 0x5C98A0
namespace gamemd {
int sub_5C98A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5C98A0()
{
  int result; // eax
  size_t v3; // ebp
  int Count; // ebp
  int i; // [esp+0h] [ebp-8h]

  int v0 = HouseClass_Count; /*0x5c98a3*/
  result = 0; /*0x5c98a9*/
  g_CampaignScoreFlags = 0; /*0x5c98ad*/
  int v18 = HouseClass_Count; /*0x5c98b2*/
  for ( i = 0; result < v0; i = result ) /*0x5c98ba*/
  {
    int v2 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * result]; /*0x5c98ca*/
    if ( v2 && *(_BYTE *)(*(_DWORD *)(v2 + 52) + 422) != 1 && v2 != HouseClass_Observer ) /*0x5c98eb*/
    {
      v3 = g_CampaignScoreFlags++; /*0x5c98f6*/
      int v4 = 28 * v3; /*0x5c990e*/
      DataGlobal_A8D228[28 * v3] = 0; /*0x5c9917*/
      wcscpy((wchar_t *)&DataGlobal_A8D1FC + 56 * v3, (const wchar_t *)(v2 + 90154)); /*0x5c9922*/
      int v5 = 0; /*0x5c9927*/
      DataGlobal_A8D22C[28 * v3] = 0; /*0x5c992c*/
      DataGlobal_A8D23C[28 * v3] = 0; /*0x5c9932*/
      DataGlobal_A8D24C[28 * v3] = 0; /*0x5c9938*/
      DataGlobal_A8D25C[28 * v3] = 0; /*0x5c993e*/
      DataGlobal_A8D224[28 * v3] = *(_DWORD *)(v2 + 90196); /*0x5c994a*/
      if ( !*(_BYTE *)(v2 + 501) ) /*0x5c9950*/
      {
        ++DataGlobal_A8D228[28 * v3]; /*0x5c9961*/
        DataGlobal_A8D584 = v3; /*0x5c9967*/
      }
      int * v6 = (int *)(v2 + 21476); /*0x5c996d*/
      int v7 = 20; /*0x5c9973*/
      do /*0x5c9980*/
      {
        int v8 = *v6++; /*0x5c9978*/
        v5 += v8; /*0x5c997d*/
        --v7; /*0x5c997f*/
      }
      while ( v7 ); /*0x5c9980*/
      int * v9 = (int *)(v2 + 21560); /*0x5c9982*/
      int v10 = 20; /*0x5c9988*/
      do /*0x5c9995*/
      {
        int v11 = *v9++; /*0x5c998d*/
        v5 += v11; /*0x5c9992*/
        --v10; /*0x5c9994*/
      }
      while ( v10 ); /*0x5c9995*/
      DataGlobal_A8D23C[v4] = v5; /*0x5c9997*/
      DataGlobal_A8D22C[v4] = *(_DWORD *)(v2 + 21556) + *(_DWORD *)(v2 + 21640); /*0x5c99b1*/
      Count = VectorClass::GetCount((_DWORD *)(v2 + 21920)); /*0x5c99c2*/
      int v13 = VectorClass::GetCount((_DWORD *)(v2 + 21940)) + Count; /*0x5c99cf*/
      int v14 = VectorClass::GetCount((_DWORD *)(v2 + 21960)) + v13; /*0x5c99dc*/
      DataGlobal_A8D24C[v4] = v14 + VectorClass::GetCount((_DWORD *)(v2 + 21980)); /*0x5c99e5*/
      int v15 = *(_DWORD *)(v2 + 21736); /*0x5c99eb*/
      if ( v15 > 0 ) /*0x5c99f3*/
        DataGlobal_A8D25C[v4] += v15; /*0x5c99f5*/
      if ( !*(_BYTE *)(v2 + 501) ) /*0x5c99fb*/
      {
        int v16 = DataGlobal_A8D25C[v4]; /*0x5c9a05*/
        DataGlobal_A8D25C[v4] = v16 + v16 / 2 + Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, v16 / 2, v16); /*0x5c9a2a*/
      }
      Debug::Log(); /*0x5c9a6e*/
      result = i; /*0x5c9a73*/
      v0 = v18; /*0x5c9a77*/
    }
    ++result; /*0x5c9a7e*/
  }
  return result; /*0x5c9a8f*/
}
}
} // namespace gamemd

// 0x5EC880
namespace gamemd {
char Map_Handle_5EC880(HWND hDlg, int a2, char a3, char a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall Map_Handle_5EC880(HWND hDlg, int a2, char a3, char a4)
{
  HWND v4; // ebx
  LRESULT v7; // eax
  LRESULT v8; // eax
  wchar_t *v9; // esi
  char v10; // bl
  int v12; // [esp+10h] [ebp-8h]
  v4 = hDlg; /*0x5ec88a*/
  v12 = a2; /*0x5ec890*/
  if ( !g_MPCooperativeState ) /*0x5ec898*/
    v12 = a2 + 1; /*0x5ec89d*/
  int v5 = 0; /*0x5ec8a7*/
  while ( 1 )
  {
  int v6; // esi
    if ( v5 )
    {
      switch ( v5 )
      {
        case 1:
          v6 = 1042; /*0x5ec8b9*/
          break;
        case 2:
          v6 = 1043; /*0x5ec8c5*/
          break;
        case 3:
          v6 = 1044; /*0x5ec8d1*/
          break;
        case 4:
          v6 = 1045; /*0x5ec8dd*/
          break;
        case 5:
          v6 = 1046; /*0x5ec8e9*/
          break;
        default:
          v6 = v5 == 6 ? 1047 : v5 != 7 ? -1 : 1048;
          break;
      }
    }
    else
    {
      v6 = 1041; /*0x5ec8ad*/
    }
    v7 = SendDlgItemMessageA(v4, v6, 0x147u, 0, 0); /*0x5ec91c*/
    v8 = SendDlgItemMessageA(v4, v6, 0x150u, v7, 0); /*0x5ec928*/
    if ( v8 == -1 ) /*0x5ec92d*/
    {
      v9 = 0; /*0x5ec92f*/
    }
    else
    {
      v9 = (wchar_t *)v8; /*0x5ec935*/
      if ( v8 && (v8 == g_Lobby_PlayerTeam || v8 == g_Lobby_PlayerSide || v8 == g_Lobby_PlayerColor) && g_GameStateFlags && !a3 ) /*0x5ec960*/
        return 1; /*0x5ec960*/
    }
    if ( v5 >= v12 ) /*0x5ec966*/
      break; /*0x5ec966*/
LABEL_39:
    if ( ++v5 >= 8 ) /*0x5ec9c3*/
      return 0; /*0x5ec9d2*/
  }
  if ( !v9 /*0x5ec98a*/
    || v9 == (wchar_t *)g_HouseClass_ObserverFlags
    || v9 == (wchar_t *)g_Lobby_PlayerCount
    || v9 == (wchar_t *)g_Lobby_MaxPlayers
    || v9 == g_Lobby_PlayerReady )
  {
    v10 = 0; /*0x5ec9d5*/
  }
  else
  {
    v10 = 1; /*0x5ec98e*/
    if ( SessionClass::GetPlayerSide((int)v9) != -3 ) /*0x5ec998*/
      return 1; /*0x5ec998*/
  }
  if ( !g_GameStateFlags || a4 || !v10 || SessionClass::GetPlayerSide((int)v9) != -3 ) /*0x5ec9b9*/
  {
    v4 = hDlg; /*0x5ec9bb*/
    goto LABEL_39; /*0x5ec9bb*/
  }
  return 1; /*0x5ec9c9*/
}
}
} // namespace gamemd

// 0x6ACCA0
namespace gamemd {
char sub_6ACCA0(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall sub_6ACCA0(int a1)
{
  HWND v1; // ebp
  LRESULT v4; // eax

  v1 = DataGlobal_B0B59C; /*0x6acca2*/
  if ( a1 >= 8 ) /*0x6accad*/
    return 0; /*0x6acd54*/
  int v2 = a1 - 1; /*0x6accb9*/
  while ( 1 )
  {
  int v3; // esi
    if ( v2 )
    {
      switch ( v2 )
      {
        case 1:
          v3 = 1294; /*0x6acccc*/
          break;
        case 2:
          v3 = 1302; /*0x6accd8*/
          break;
        case 3:
          v3 = 1306; /*0x6acce4*/
          break;
        case 4:
          v3 = 1307; /*0x6accf0*/
          break;
        default:
          v3 = v2 == 5 ? 1308 : v2 != 6 ? -1 : 1309;
          break;
      }
    }
    else
    {
      v3 = 1291; /*0x6accc0*/
    }
    v4 = SendDlgItemMessageA(v1, v3, 0x147u, 0, 0); /*0x6acd23*/
    if ( (unsigned int)SendDlgItemMessageA(v1, v3, 0x150u, v4, 0) <= 2 ) /*0x6acd33*/
      break; /*0x6acd33*/
    if ( ++v2 + 1 >= 8 ) /*0x6acd46*/
      return 0; /*0x6acd46*/
  }
  return 1; /*0x6acd4d*/
}
}
} // namespace gamemd

// 0x584030
namespace gamemd {
char Map_Helper_584030(IUnknown * aP0)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void Map_Helper_584030(IUnknown *aP0)
{
  int v5; // esi
  unsigned int v6; // eax
  _DWORD *v7; // eax
  int v8; // eax
  int v10; // [esp+10h] [ebp-4h]
  ObjectClass *aP0a; // [esp+18h] [ebp+4h]

  int v2 = aP0->field_C; /*0x584038*/
  int v3 = aP0->field_8; /*0x58403b*/
  int v4 = 0; /*0x58403f*/
  v10 = v2; /*0x584043*/
  if ( v2 <= 0 ) /*0x584047*/
    return 1; /*0x5840ac*/
  while ( 1 ) /*0x58404f*/
  {
    v5 = 0; /*0x58404f*/
    if ( v3 > 0 ) /*0x584053*/
      break; /*0x584053*/
LABEL_10:
    if ( ++v4 >= v2 ) /*0x5840aa*/
      return 1; /*0x5840aa*/
  }
  while ( 1 ) /*0x58405e*/
  {
    HIWORD(aP0a) = v4 + aP0->field_4; /*0x58405e*/
    LOWORD(aP0a) = v5 + aP0->field_0; /*0x584063*/
    v6 = (__int16)aP0a + (SHIWORD(aP0a) << 9); /*0x584071*/
    if ( v6 >= 0x40000 || (v7 = *(_DWORD **)(*(_DWORD *)&stru_87C374[13744] + 4 * v6)) == 0 ) /*0x584081*/
    {
      g_Map_GlobalCellIndex = (IUnknown *)aP0a; /*0x584087*/
      v7 = g_CellClassArray; /*0x58408c*/
    }
    v8 = v7[19]; /*0x584091*/
    if ( v8 != 4 && v8 != 3 ) /*0x58409c*/
      return 0; /*0x5840ac*/
    if ( ++v5 >= v3 ) /*0x5840a1*/
    {
      v2 = v10; /*0x5840a3*/
      goto LABEL_10; /*0x5840a3*/
    }
  }
}
}
} // namespace gamemd

// 0x59BAB0
namespace gamemd {
int Map_Helper_59BAB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// local variable allocation has failed, the output may be wrong!
void Map_Helper_59BAB0(__int16 *a0, MapResourceClass *aP1, char a3, double a4, MapResourceClass *aP4)
{
  MapResourceClass v5; // esi
  MapResourceClass v12; // eax
  v5 = *aP1; /*0x59babb*/
  if ( *aP1 == dword_ABE2F0 /*0x59bae5*/
    && *(_DWORD *)&aP1[1] == dword_ABE2F4
    && *(_DWORD *)&aP1[2] == dword_ABE2F8
    && *(_DWORD *)&aP1[3] == dword_ABE2FC )
  {
    return 1; /*0x59baeb*/
  }
  if ( a3 ) /*0x59baf4*/
  {
    int v7 = a0[1]; /*0x59bb00*/
  double v8; // st7
    v8 = (double)(*a0 - 2 * *(_DWORD *)&v5 - v7 + *(_DWORD *)&stru_87C374[13672] - 1) * 0.5 /*0x59bb3f*/
       - (double)(int)aP1[2] * 0.5;
  double v9; // st6
    v9 = (double)(*a0 - 2 * *(_DWORD *)&aP1[1] - *(_DWORD *)&stru_87C374[13672] + v7 - 1) * 0.5 /*0x59bb54*/
       - (double)(int)aP1[3] * 0.5;
    if ( v9 * v9 * *(double *)&aP4 + v8 * v8 * a4 < 1.0 ) /*0x59bb77*/
      return 1; /*0x59bb80*/
  }
  else
  {
    int v10 = *a0; /*0x59bb87*/
    int v11 = a0[1]; /*0x59bb8a*/
    if ( v10 >= *(_DWORD *)&v5 && v10 < *(_DWORD *)&v5 + *(_DWORD *)&aP1[2] ) /*0x59bb99*/
    {
      v12 = aP1[1]; /*0x59bb9b*/
      if ( v11 >= *(_DWORD *)&v12 && v11 < *(_DWORD *)&v12 + *(_DWORD *)&aP1[3] ) /*0x59bba9*/
        return 1; /*0x59bbb2*/
    }
  }
  return 0; /*0x59bae7*/
}
}
} // namespace gamemd

// 0x5A7D00
namespace gamemd {
char sub_5A7D00(int a1, unsigned short * a2, char a3, char a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall sub_5A7D00(int a1, _WORD *a2, char a3, char a4)
{
  __int16 v10; // cx

  _DWORD * v4 = (_DWORD *)*((_DWORD *)g_FrameCounter + a1); /*0x5a7d0b*/
  int v6 = *v4; /*0x5a7d13*/
  _WORD * v19 = a2; /*0x5a7d15*/
  _DWORD * v16 = v4; /*0x5a7d19*/
  int v20 = (*(int (__thiscall **)(_DWORD *))(v6 + 156))(v4); /*0x5a7d25*/
  if ( v20 ) /*0x5a7d29*/
  {
    int v7 = 0; /*0x5a7d35*/
    if ( (int)v4[186] > 0 ) /*0x5a7d39*/
    {
  int v9; // ebp
      int v8 = g_MapCellHeight_Value; /*0x5a7d3f*/
      while ( 1 ) /*0x5a7d49*/
      {
        v9 = 0; /*0x5a7d49*/
        if ( (int)v16[185] > 0 ) /*0x5a7d53*/
          break; /*0x5a7d53*/
LABEL_17:
        if ( ++v7 >= v16[186] ) /*0x5a7e55*/
          return 1; /*0x5a7e64*/
      }
      while ( 1 ) /*0x5a7d5f*/
      {
        v10 = a2[1] + v7; /*0x5a7d5f*/
  int v18; // [esp+18h] [ebp-Ch]
        LOWORD(v18) = v9 + *a2; /*0x5a7d66*/
        HIWORD(v18) = v10; /*0x5a7d6b*/
        int v17 = v18; /*0x5a7d74*/
        int v11 = v10; /*0x5a7d7b*/
        int v12 = v10 + (__int16)v18; /*0x5a7d7e*/
        if ( v12 <= v8 || (__int16)v18 - v11 >= v8 || v11 - (__int16)v18 >= v8 || v12 > g_MapCellCount ) /*0x5a7da5*/
        {
          if ( a4 ) /*0x5a7e6d*/
            return 0; /*0x5a7e6d*/
        }
        else
        {
          int * v13 = (int *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v17); /*0x5a7dba*/
          int v14 = *(_DWORD *)(v20 + 4 * (v9 + v7 * v16[185]) + 16); /*0x5a7dcf*/
          if ( v14 /*0x5a7e27*/
            && (!Cell::IsEmpty(v13) && !sub_4863A0(v13)
             || *((unsigned __int8 *)v13 + 284) != *(char *)(v14 + 42)
             || a3 && *((_BYTE *)g_MapTileArray + 80 * (__int16)v17 + 80 * unk_89C2DC * SHIWORD(v17) + 70)) )
          {
            return 0; /*0x5a7e7a*/
          }
          v8 = g_MapCellHeight_Value; /*0x5a7e2f*/
        }
        a2 = v19; /*0x5a7e39*/
        if ( ++v9 >= v16[185] ) /*0x5a7e44*/
          goto LABEL_17; /*0x5a7e44*/
      }
    }
  }
  return 1; /*0x5a7e5b*/
}
}
} // namespace gamemd

// 0x6B4240
namespace gamemd {
int sub_6B4240(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_6B4240(int a1, int a2)
{
  int result; // eax

  int v26 = *(_DWORD *)(a1 + 36); /*0x6b4250*/
  int v2 = (__int16)v26 - dword_8759A8; /*0x6b4267*/
  int v3 = SHIWORD(v26) - dword_8759AC; /*0x6b4269*/
  int v4 = v3 * dword_8759A4 + v2; /*0x6b4275*/
  int v5 = *((_DWORD *)g_SlaveManagerPool + 2 * v4); /*0x6b4284*/
  _BYTE v29[4]; // [esp+2Ch] [ebp-1Ch] BYREF
  v29[0] = *((_BYTE *)g_SlaveManagerPool + 8 * v4 + 4); /*0x6b4287*/
  v29[1] = *((_BYTE *)g_SlaveManagerPool + 8 * v4 + 5); /*0x6b428f*/
  int v30 = *((_DWORD *)g_SlaveManagerPool + 2 * v4 + 2); /*0x6b4297*/
  char v6 = *((_BYTE *)g_SlaveManagerPool + 8 * v4 + 12); /*0x6b429b*/
  LOBYTE(v4) = *((_BYTE *)g_SlaveManagerPool + 8 * v4 + 13); /*0x6b429f*/
  char v31 = v6; /*0x6b42a3*/
  char v32 = v4; /*0x6b42a7*/
  int v7 = dword_8759A4 * (v3 + 1) + v2; /*0x6b42ab*/
  _DWORD v28[5]; // [esp+18h] [ebp-30h] BYREF
  v28[4] = v5; /*0x6b42ae*/
  v28[0] = v5; /*0x6b42b2*/
  int v8 = *((_DWORD *)g_SlaveManagerPool + 2 * v7 + 2); /*0x6b42ba*/
  int v9 = *((_DWORD *)g_SlaveManagerPool + 2 * v7); /*0x6b42be*/
  char v34 = *((_BYTE *)g_SlaveManagerPool + 8 * v7 + 12); /*0x6b42c1*/
  char v10 = *((_BYTE *)g_SlaveManagerPool + 8 * v7 + 13); /*0x6b42c5*/
  int v33 = v8; /*0x6b42c9*/
  char v35 = v10; /*0x6b42cd*/
  char v11 = *((_BYTE *)g_SlaveManagerPool + 8 * v7 + 4); /*0x6b42d1*/
  char v12 = *((_BYTE *)g_SlaveManagerPool + 8 * v7 + 5); /*0x6b42d5*/
  int v36 = v9; /*0x6b42dd*/
  char v37 = v11; /*0x6b42e1*/
  char v38 = v12; /*0x6b42e5*/
  v28[2] = v8; /*0x6b42e9*/
  v28[3] = v9; /*0x6b42ed*/
  v28[1] = v30; /*0x6b42f1*/
  int v13 = 1000; /*0x6b42f5*/
  int v14 = -1; /*0x6b42fa*/
  int * v15 = v28; /*0x6b42fd*/
  int v16 = 4; /*0x6b4301*/
  do /*0x6b4318*/
  {
    if ( *v15 < v13 ) /*0x6b430a*/
      v13 = *v15; /*0x6b430c*/
    if ( *v15 > v14 ) /*0x6b4310*/
      v14 = *v15; /*0x6b4312*/
    ++v15; /*0x6b4314*/
    --v16; /*0x6b4317*/
  }
  while ( v16 ); /*0x6b4318*/
  result = 0; /*0x6b431a*/
  if ( v14 == v13 ) /*0x6b431e*/
  {
    int v18 = 0; /*0x6b4320*/
    _BYTE * v19 = v29; /*0x6b4322*/
    do /*0x6b433b*/
    {
      if ( !*v19 ) /*0x6b4326*/
        result += 1 << v18; /*0x6b4332*/
      ++v18; /*0x6b4334*/
      v19 += 8; /*0x6b4335*/
    }
    while ( v18 < 4 ); /*0x6b433b*/
  }
  else if ( a2 <= 0 ) /*0x6b434b*/
  {
    int v23 = 0; /*0x6b437d*/
    _BYTE * v24 = v29; /*0x6b437f*/
    int * v25 = v28; /*0x6b4383*/
    do /*0x6b43a3*/
    {
      if ( *v25 > v13 && !*v24 ) /*0x6b438b*/
        result += 1 << v23; /*0x6b4397*/
      ++v23; /*0x6b4399*/
      ++v25; /*0x6b439a*/
      v24 += 8; /*0x6b439d*/
    }
    while ( v23 < 4 ); /*0x6b43a3*/
  }
  else
  {
    int v20 = 0; /*0x6b434d*/
    _BYTE * v21 = v29; /*0x6b434f*/
    int * v22 = v28; /*0x6b4353*/
    do /*0x6b4373*/
    {
      if ( *v22 < v14 && !*v21 ) /*0x6b435b*/
        result += 1 << v20; /*0x6b4367*/
      ++v20; /*0x6b4369*/
      ++v22; /*0x6b436a*/
      v21 += 8; /*0x6b436d*/
    }
    while ( v20 < 4 ); /*0x6b4373*/
  }
  return result; /*0x6b433d*/
}
}
} // namespace gamemd

// 0x751C30
namespace gamemd {
char sub_751C30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_751C30()
{
  DWORD NumberOfFreeClusters; // [esp+10h] [ebp-1D0h] BYREF
  DWORD BytesPerSector; // [esp+14h] [ebp-1CCh] BYREF
  DWORD SectorsPerCluster; // [esp+18h] [ebp-1C8h] BYREF
  DWORD TotalNumberOfClusters; // [esp+1Ch] [ebp-1C4h] BYREF
  DWORD MaximumComponentLength[2]; // [esp+20h] [ebp-1C0h] BYREF
  DWORD FileSystemFlags; // [esp+28h] [ebp-1B8h] BYREF
  CHAR Buffer[260]; // [esp+DCh] [ebp-104h] BYREF

  if ( !GetLogicalDriveStringsA(0x104u, Buffer) ) /*0x751c47*/
    return 0; /*0x751c54*/
  if ( strlen(Buffer) ) /*0x751c71*/
  {
    *(_DWORD *)Buffer = 23598; /*0x751c88*/
  char v7[176]; // [esp+2Ch] [ebp-1B4h] BYREF
    memset(&v7[32], 0, 0x90u); /*0x751ca0*/
    *(_DWORD *)&v7[32] = GetDriveTypeA(Buffer); /*0x751cac*/
    GetDiskFreeSpaceA(Buffer, &SectorsPerCluster, &BytesPerSector, &NumberOfFreeClusters, &TotalNumberOfClusters); /*0x751cbd*/
    *(_DWORD *)&v7[168] = NumberOfFreeClusters * BytesPerSector * SectorsPerCluster; /*0x751cdf*/
    *(_DWORD *)&v7[172] = TotalNumberOfClusters * BytesPerSector * SectorsPerCluster; /*0x751ced*/
    GetVolumeInformationA( /*0x751d18*/
      Buffer,
      &v7[36],
      0x40u,
      (LPDWORD)&v7[100],
      MaximumComponentLength,
      &FileSystemFlags,
      &v7[104],
      0x40u);
    sprintf(v7, DataGlobal_846598, 1); /*0x751d4f*/
    _strcmpi(v7, &v7[36]); /*0x751d5e*/
  }
  else
  {
    CD::`vftable'(dword_81C1D0); /*0x751da4*/
  }
  return 1; /*0x751c51*/
}
}
} // namespace gamemd

// 0x63AB60
namespace gamemd {
char sub_63AB60(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_63AB60(int a1, int a2)
{
  _DWORD *Coords; // eax

  if ( !DataGlobal_AC4CF4 ) /*0x63ab6b*/
    return 0; /*0x63ab73*/
  if ( DataGlobal_AC4CB0 ) /*0x63ab7d*/
    return 0; /*0x63ab85*/
  int v3 = g_ScriptState; /*0x63ab8e*/
  if ( !g_ScriptPool ) /*0x63ab98*/
    goto LABEL_11; /*0x63ab98*/
  _DWORD v10[4]; // [esp+18h] [ebp-20h] BYREF
  Coords = ScriptAction::GetCoords((_DWORD **)g_ScriptPool, v10); /*0x63aba3*/
  _DWORD v9[3]; // [esp+Ch] [ebp-2Ch] BYREF
  v9[0] = *Coords; /*0x63abaa*/
  v9[1] = Coords[1]; /*0x63abb5*/
  v9[2] = Coords[2]; /*0x63abc0*/
  int v8; // [esp+4h] [ebp-34h] BYREF
  _DWORD * v5 = ToCoordPixel(&v8, v9); /*0x63abc4*/
  _DWORD v11[4]; // [esp+28h] [ebp-10h] BYREF
  Rect::Set(v11, *v5 - 4, v5[1] - 4, 8, 8); /*0x63abe0*/
  v10[0] = v11[0]; /*0x63abf9*/
  int v6 = v11[1] - 4; /*0x63ac00*/
  if ( a1 < v11[0] - 4 ) /*0x63ac0b*/
    goto LABEL_11; /*0x63ac0b*/
  if ( a1 < v11[2] + 8 + v11[0] - 4 && a2 >= v6 && a2 < v11[3] + 8 + v6 ) /*0x63ac1f*/
    int v7 = g_ScriptPool; /*0x63ac21*/
  else
LABEL_11:
    v7 = 0; /*0x63ac28*/
  if ( !v3 ) /*0x63ac2e*/
  {
    if ( !v7 ) /*0x63ac32*/
      return 0; /*0x63ac3a*/
    goto LABEL_17; /*0x63ac32*/
  }
  if ( v7 == v3 ) /*0x63ac3f*/
  {
LABEL_17:
    Mission::SetAndCall((int *)&DataGlobal_87F7E8, 0, 1); /*0x63ac45*/
    return 1; /*0x63ac4e*/
  }
  Mission::SetAndCall((int *)&DataGlobal_87F7E8, 0, 0); /*0x63ac43*/
  return 1; /*0x63ab6f*/
}
}
} // namespace gamemd

// 0x76FD40
namespace gamemd {
void Map_Process_76FD40(int a1, ObjectClass * aP1, int a3, int _54, int * a4, int a6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void Map_Process_76FD40(int a1, ObjectClass *aP1, int a3, int _54, int *a4, int a6)
{

  int v6 = v6; /*0x76fd44*/
  int v8 = *(_DWORD *)(v6 + 36); /*0x76fd46*/
  if ( v8 ) /*0x76fd4b*/
  {
  int v20; // [esp+10h] [ebp-34h]
  int v19; // [esp+Ch] [ebp-38h]
  int v18; // esi
  int v17; // eax
  int v16; // edx
  int v14; // ecx
  int v7; // esi
    int v9 = -1; /*0x76fd57*/
    switch ( a1 ) /*0x76fd5c*/
    {
      case 1: /*0x76fd5c*/
        v9 = 3; /*0x76fd72*/
        break;
      case 2: /*0x76fd5c*/
        v9 = 2; /*0x76fd6b*/
        break;
      case 3: /*0x76fd5c*/
        v9 = 1; /*0x76fd64*/
        break;
    }
  _DWORD v25[2]; // [esp+24h] [ebp-20h] BYREF
    int * v10 = (int *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v8 + 24))(v8, v25); /*0x76fd7e*/
    int v11 = *v10; /*0x76fd81*/
    int v12 = v10[1]; /*0x76fd85*/
    int v21 = v10[2]; /*0x76fd8b*/
    int v22 = v10[3]; /*0x76fd92*/
    if ( v9 < 0 ) /*0x76fd96*/
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(v7 + 36) + 4))(*(_DWORD *)(v7 + 36), 0); /*0x76fdbc*/
    }
    else
    {
      MSAnim::Reset(*(_DWORD **)(v7 + 36), v9); /*0x76fd9c*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v7 + 36) + 4))(*(_DWORD *)(v7 + 36), 1); /*0x76fda8*/
      Map_Process_5CC690(*(_DWORD **)(v7 + 36)); /*0x76fdae*/
    }
  char v27[12]; // [esp+38h] [ebp-Ch] BYREF
    _DWORD * v13 = (_DWORD *)(*(int (__thiscall **)(_DWORD, char *))(**(_DWORD **)(v7 + 36) + 24))(*(_DWORD *)(v7 + 36), v27); /*0x76fdcb*/
    v25[0] = *v13; /*0x76fdd2*/
    v25[1] = v13[1]; /*0x76fdd9*/
    if ( (int)v13[2] <= 0 || (int)v13[3] <= 0 ) /*0x76fde9*/
    {
      v18 = v19; /*0x76fe60*/
      v17 = v20; /*0x76fe64*/
      v14 = v11; /*0x76fe68*/
      v16 = v12; /*0x76fe6a*/
    }
    else if ( v19 <= 0 || v20 <= 0 ) /*0x76fdf9*/
    {
      v14 = *v13; /*0x76fe53*/
      v16 = v13[1]; /*0x76fe55*/
      v18 = v13[2]; /*0x76fe58*/
      v17 = v13[3]; /*0x76fe5b*/
    }
    else
    {
      v14 = *v13; /*0x76fdfb*/
      int v15 = v13[2]; /*0x76fdfd*/
      v16 = v13[1]; /*0x76fe00*/
      v17 = v13[3]; /*0x76fe03*/
      int v26 = v15; /*0x76fe08*/
      if ( v14 > v11 ) /*0x76fe0c*/
      {
        v15 += v14 - v11; /*0x76fe10*/
        v14 = v11; /*0x76fe12*/
        v26 = v15; /*0x76fe14*/
      }
      if ( v16 > v12 ) /*0x76fe1a*/
      {
        v17 += v16 - v12; /*0x76fe1e*/
        v16 = v12; /*0x76fe20*/
      }
      if ( v14 + v15 >= v11 + v19 ) /*0x76fe28*/
        v18 = v26; /*0x76fe36*/
      else
        v18 = v19 - v14 + v11 + 1; /*0x76fe30*/
      if ( v17 + v16 < v12 + v20 ) /*0x76fe45*/
        v17 = v12 - v16 + v20 + 1; /*0x76fe4d*/
    }
    v21 = v14; /*0x76fe6c*/
    int v23 = v18; /*0x76fe70*/
    v22 = v16; /*0x76fe7f*/
    int v24 = v17; /*0x76fe83*/
    Team::ReleaseAll((int *)aP1->__pad_0, (ObjectClass *)&v21); /*0x76fe87*/
    DSurface::Flip2(); /*0x76fe8e*/
    GameClass::FrameLoop((int *)aP1->__pad_0, 1); /*0x76fe97*/
  }
}
}
} // namespace gamemd

// 0x682240
namespace gamemd {
int sub_682240(int a1, int a2, unsigned short * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_682240(int a1, int a2, _WORD *a3)
{
  _UNKNOWN **v6; // ecx

  _WORD * v3 = a3; /*0x682246*/
  a3 = 0; /*0x68224a*/
  int v4 = 0; /*0x682252*/
  *v3 = 0; /*0x682254*/
  _DWORD * v5 = &DataGlobal_83D658; /*0x682259*/
  while ( *v5 != a2 ) /*0x682260*/
  {
    v5 += 2; /*0x682262*/
    ++v4; /*0x682265*/
    if ( (int)v5 >= (int)g_INI_Key_GameType ) /*0x68226b*/
    {
      v6 = 0; /*0x68226d*/
      goto LABEL_5; /*0x68226d*/
    }
  }
  v6 = (&DataGlobal_83D65C)[2 * v4]; /*0x6822a0*/
LABEL_5:
  int v7; // esi
  v7 = (*(int (__stdcall **)(int, _UNKNOWN **, _DWORD, int, _DWORD, _WORD **))(*(_DWORD *)a1 + 16))( /*0x68226f*/
         a1,
         v6,
         0,
         16,
         0,
         &a3);
  if ( v7 >= 0 ) /*0x682289*/
  {
    while ( 1 ) /*0x6822a9*/
    {
      if ( !a3 ) /*0x6822af*/
        WinAPI::Wrapper(-2147467261); /*0x6822b6*/
      v7 = (*(int (__stdcall **)(_WORD *, _WORD *, int, _DWORD))(*(_DWORD *)a3 + 12))(a3, v3, 2, 0); /*0x6822ca*/
      if ( v7 < 0 ) /*0x6822ce*/
        break; /*0x6822ce*/
      if ( !*v3 ) /*0x6822d4*/
      {
        if ( a3 ) /*0x6822e1*/
          (*(void (__stdcall **)(_WORD *))(*(_DWORD *)a3 + 8))(a3); /*0x6822e6*/
        return v7; /*0x6822e6*/
      }
      ++v3; /*0x6822d6*/
    }
  }
  if ( !a3 ) /*0x682291*/
    return v7; /*0x6822e9*/
  (*(void (__stdcall **)(_WORD *))(*(_DWORD *)a3 + 8))(a3); /*0x682296*/
  return v7; /*0x68229b*/
}
}
} // namespace gamemd

// 0x6824B0
namespace gamemd {
int sub_6824B0(int a1, int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6824B0(int a1, int a2, _DWORD *a3)
{
  _UNKNOWN **v6; // ecx

  _DWORD * v3 = a3; /*0x6824b6*/
  a3 = 0; /*0x6824ba*/
  int v4 = 0; /*0x6824c2*/
  *v3 = 0; /*0x6824c4*/
  _DWORD * v5 = &DataGlobal_83D658; /*0x6824ca*/
  while ( *v5 != a2 ) /*0x6824d1*/
  {
    v5 += 2; /*0x6824d3*/
    ++v4; /*0x6824d6*/
    if ( (int)v5 >= (int)g_INI_Key_GameType ) /*0x6824dc*/
    {
      v6 = 0; /*0x6824de*/
      goto LABEL_5; /*0x6824de*/
    }
  }
  v6 = (&DataGlobal_83D65C)[2 * v4]; /*0x682511*/
LABEL_5:
  int v7; // esi
  v7 = (*(int (__stdcall **)(int, _UNKNOWN **, _DWORD, int, _DWORD, _DWORD **))(*(_DWORD *)a1 + 16))( /*0x6824e0*/
         a1,
         v6,
         0,
         16,
         0,
         &a3);
  if ( v7 >= 0 ) /*0x6824fe*/
  {
    if ( !a3 ) /*0x68251c*/
      WinAPI::Wrapper(-2147467261); /*0x682523*/
    v7 = (*(int (__stdcall **)(_DWORD *, _DWORD *, int, _DWORD))(*a3 + 12))(a3, v3, 4, 0); /*0x682537*/
    if ( v7 >= 0 ) /*0x68253f*/
    {
      if ( a3 ) /*0x682554*/
        (*(void (__stdcall **)(_DWORD *))(*a3 + 8))(a3); /*0x682559*/
    }
    else if ( a3 ) /*0x682543*/
    {
      goto LABEL_7; /*0x682543*/
    }
  }
  else if ( a3 ) /*0x682502*/
  {
LABEL_7:
    (*(void (__stdcall **)(_DWORD *))(*a3 + 8))(a3); /*0x682504*/
    return v7; /*0x68250e*/
  }
  return v7; /*0x68250c*/
}
}
} // namespace gamemd

// 0x5549A0
namespace gamemd {
void sub_5549A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_5549A0()
{

  int v0 = g_BridgeCellPool; /*0x5549a0*/
  byte_829AE4 = 0; /*0x5549a6*/
  if ( g_BridgeCellPool ) /*0x5549af*/
  {
  bool v2; // zf
    _DWORD * v1 = dword_ABCA14; /*0x5549b2*/
    do /*0x5549fc*/
    {
      if ( *v1 ) /*0x5549b8*/
      {
        (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*v1 + 32))(*v1, 1); /*0x5549c2*/
        v1 = dword_ABCA14; /*0x5549c5*/
        v0 = g_BridgeCellPool; /*0x5549cb*/
      }
      v2 = v0 == 0; /*0x5549d1*/
      if ( v0 > 0 ) /*0x5549d3*/
      {
        --v0; /*0x5549d5*/
        int v3 = 0; /*0x5549d6*/
        v2 = v0 == 0; /*0x5549d8*/
        g_BridgeCellPool = v0; /*0x5549da*/
        if ( v0 > 0 ) /*0x5549e0*/
        {
          do /*0x5549f8*/
          {
            v1[v3] = v1[v3 + 1]; /*0x5549e6*/
            v0 = g_BridgeCellPool; /*0x5549e9*/
            v1 = dword_ABCA14; /*0x5549ef*/
            ++v3; /*0x5549f5*/
          }
          while ( v3 < g_BridgeCellPool ); /*0x5549f8*/
          v2 = g_BridgeCellPool == 0; /*0x5549fa*/
        }
      }
    }
    while ( !v2 ); /*0x5549fc*/
  }
  if ( dword_ABCA50 ) /*0x554a06*/
  {
  bool v4; // zf
    do /*0x554a4a*/
    {
      __3_YAXPAX_Z(*(void **)dword_ABCA44); /*0x554a11*/
      v4 = dword_ABCA50 == 0; /*0x554a1f*/
      if ( dword_ABCA50 > 0 ) /*0x554a21*/
      {
        int v5 = 0; /*0x554a24*/
        v4 = dword_ABCA50-- == 1; /*0x554a26*/
        if ( dword_ABCA50 > 0 ) /*0x554a2e*/
        {
          do /*0x554a46*/
          {
            ++v5; /*0x554a36*/
            *((_DWORD *)dword_ABCA44 + v5 - 1) = *((_DWORD *)dword_ABCA44 + v5); /*0x554a3a*/
          }
          while ( v5 < dword_ABCA50 ); /*0x554a46*/
          v4 = dword_ABCA50 == 0; /*0x554a48*/
        }
      }
    }
    while ( !v4 ); /*0x554a4a*/
  }
  byte_829AE4 = 1; /*0x554a4c*/
}
}
} // namespace gamemd

// 0x660C50
namespace gamemd {
int sub_660C50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_660C50()
{
  dword_B04D88 = -1; /*0x660c54*/
  dword_B04DD8 = -1; /*0x660c59*/
  memset32(dword_B04D48, dword_B04D68, 8u); /*0x660c6d*/
  return dword_B04D68; /*0x660c6f*/
}
}
} // namespace gamemd

// 0x6DA980
namespace gamemd {
void sub_6DA980()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6DA980()
{

  int v0 = g_CraterCreationState; /*0x6da980*/
  while ( g_CraterCreationState > 0 ) /*0x6da988*/
  {
    int v1 = 0; /*0x6da98f*/
    g_CraterCreationState = v0 - 1; /*0x6da993*/
    if ( v0 - 1 <= 0 ) /*0x6da999*/
      break; /*0x6da999*/
    int v2 = 0; /*0x6da99b*/
    do /*0x6da9bd*/
    {
      ++v1; /*0x6da9a3*/
      char * v3 = (char *)g_CraterPool + v2 + 20; /*0x6da9a4*/
      char * v4 = (char *)g_CraterPool + v2; /*0x6da9a8*/
      v2 += 20; /*0x6da9b0*/
      qmemcpy(v4, v3, 0x14u); /*0x6da9b3*/
      v0 = g_CraterCreationState; /*0x6da9b5*/
    }
    while ( v1 < g_CraterCreationState ); /*0x6da9bd*/
  }
}
}
} // namespace gamemd

// 0x769E30
namespace gamemd {
char Map_WorldDominationTour_20::Release(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void Map_WorldDominationTour_20_::_vt02(int a2, _DWORD *a3)
{
  _DWORD *v6; // esi
  int v7; // ebx
  _DWORD *v8; // ebx
  int v9; // ebx
  int i; // esi
  void (__thiscall ***v12)(_DWORD, int); // ecx
  _DWORD *v13; // [esp+10h] [ebp-4h]
  int v3 = a2; /*0x769e33*/
  if ( !a2 ) /*0x769e3d*/
  {
    (*(void (__thiscall **)(_BYTE *))(this->q00C)(this); /*0x769f3d*/
    return 1; /*0x769f43*/
  }
  this->q00C = 0; /*0x769e47*/
  if ( a3 ) /*0x769e4d*/
  {
    *a3 = a2; /*0x769e93*/
    v6 = a3 + 1; /*0x769e95*/
    if ( a2 - 1 >= 0 ) /*0x769ea1*/
    {
      v9 = a2; /*0x769ea3*/
      do /*0x769eb7*/
      {
        ComPtr::Constructor(v6); /*0x769ea8*/
        *v6 = &vt_rc_ptr_WorldDominationTour_Territory; /*0x769ead*/
        v6 += 2; /*0x769eb3*/
        --v9; /*0x769eb6*/
      }
      while ( v9 ); /*0x769eb7*/
      v6 = a3 + 1; /*0x769eb9*/
    }
  }
  else
  {
    _DWORD * v5 = __2_YAPAXI_Z(8 * a2 + 4); /*0x769e57*/
    if ( !v5 ) /*0x769e61*/
    {
      v8 = 0; /*0x769e8f*/
      goto LABEL_14; /*0x769e91*/
    }
    *v5 = a2; /*0x769e63*/
    v6 = v5 + 1; /*0x769e65*/
    v13 = v5 + 1; /*0x769e6b*/
    if ( a2 - 1 >= 0 ) /*0x769e71*/
    {
      v7 = a2; /*0x769e73*/
      do /*0x769e87*/
      {
        ComPtr::Constructor(v6); /*0x769e78*/
        *v6 = &vt_rc_ptr_WorldDominationTour_Territory; /*0x769e7d*/
        v6 += 2; /*0x769e83*/
        --v7; /*0x769e86*/
      }
      while ( v7 ); /*0x769e87*/
      v6 = v13; /*0x769e89*/
    }
  }
  v8 = v6; /*0x769ebd*/
LABEL_14:
  this->q00C = 1; /*0x769ebf*/
  if ( !v8 ) /*0x769ec5*/
    return 0; /*0x769eca*/
  if ( this->Map_WorldDominationTour_20_field_0x4 ) /*0x769ed1*/
  {
    if ( a2 >= this->Map_WorldDominationTour_20_field_0x8 ) /*0x769edd*/
      v3 = this->Map_WorldDominationTour_20_field_0x8; /*0x769edf*/
    for ( i = 0; i < v3; ++i ) /*0x769ee5*/
      ComPtr::Set(&v8[2 * i], *(_DWORD *)(this->Map_WorldDominationTour_20_field_0x4 + 8 * i + 4)); /*0x769ef2*/
    if ( this->IsAllocated ) /*0x769efc*/
    {
      v12 = (void (__thiscall ***)(_DWORD, int))this->Map_WorldDominationTour_20_field_0x4; /*0x769f03*/
      if ( v12 ) /*0x769f08*/
        (**v12)(v12, 3); /*0x769f0e*/
      this->Map_WorldDominationTour_20_field_0x4 = 0; /*0x769f10*/
    }
    v3 = a2; /*0x769f17*/
  }
  this->Map_WorldDominationTour_20_field_0x4 = v8; /*0x769f26*/
  this->Map_WorldDominationTour_20_field_0x8 = v3; /*0x769f29*/
  this->IsAllocated = a3 == 0; /*0x769f2c*/
  return 1; /*0x769ec7*/
}
}
} // namespace gamemd

// 0x76A610
namespace gamemd {
rc_ptr_base * Map_WorldDominationTour_20::Constructor_0(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
rc_ptr_base *__thiscall Map_WorldDominationTour_20_::Constructor_0(rc_ptr_base *this, char a2)
{
  rc_ptr_base *v4; // ebp
  rc_ptr_base *v5; // esi

  if ( (a2 & 2) != 0 ) /*0x76a61b*/
  {
    int v3 = *((_DWORD *)this - 1); /*0x76a61d*/
    v4 = this - 1; /*0x76a621*/
    v5 = this + 2 * v3; /*0x76a624*/
    int v6 = v3 - 1; /*0x76a627*/
    if ( v6 >= 0 ) /*0x76a628*/
    {
      int v7 = v6 + 1; /*0x76a62b*/
      do /*0x76a63f*/
      {
        v5 -= 2; /*0x76a62e*/
        v5->vfptr = &vt_rc_ptr_WorldDominationTour_Territory; /*0x76a633*/
        ComPtr::Release(v5); /*0x76a639*/
        --v7; /*0x76a63e*/
      }
      while ( v7 ); /*0x76a63f*/
    }
    if ( (a2 & 1) != 0 ) /*0x76a645*/
      __3_YAXPAX_Z(v4); /*0x76a648*/
    return v4; /*0x76a650*/
  }
  else
  {
    this->vfptr = &vt_rc_ptr_WorldDominationTour_Territory; /*0x76a65a*/
    ComPtr::Release(this); /*0x76a660*/
    if ( (a2 & 1) != 0 ) /*0x76a668*/
      __3_YAXPAX_Z(this); /*0x76a66b*/
    return this; /*0x76a673*/
  }
}
}
} // namespace gamemd

// 0x76A3F0
namespace gamemd {
char Map_WorldDominationTour_43::Release(int a2, char * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void Map_WorldDominationTour_43_::_vt02(int a2, char *a3)
{

  int v3 = a2; /*0x76a3f2*/
  if ( a2 ) /*0x76a3fe*/
  {
    char * v5 = a3; /*0x76a404*/
    this->q00C = 0; /*0x76a408*/
    if ( a3 ) /*0x76a40d*/
    {
      if ( a2 - 1 >= 0 ) /*0x76a449*/
      {
        _DWORD * v9 = a3 + 8; /*0x76a44b*/
        int v10 = a2; /*0x76a44e*/
        do /*0x76a45b*/
        {
          *(v9 - 2) = 0; /*0x76a44f*/
          *(v9 - 1) = 0; /*0x76a452*/
          *v9 = 0; /*0x76a455*/
          v9 += 3; /*0x76a457*/
          --v10; /*0x76a45a*/
        }
        while ( v10 ); /*0x76a45b*/
      }
    }
    else
    {
      char * v6 = (char *)__2_YAPAXI_Z(12 * a2); /*0x76a417*/
      if ( v6 ) /*0x76a421*/
      {
        if ( a2 - 1 >= 0 ) /*0x76a428*/
        {
          _DWORD * v7 = v6 + 8; /*0x76a42a*/
          int v8 = a2; /*0x76a42d*/
          do /*0x76a43a*/
          {
            *(v7 - 2) = 0; /*0x76a42e*/
            *(v7 - 1) = 0; /*0x76a431*/
            *v7 = 0; /*0x76a434*/
            v7 += 3; /*0x76a436*/
            --v8; /*0x76a439*/
          }
          while ( v8 ); /*0x76a43a*/
        }
        v5 = v6; /*0x76a43c*/
      }
      else
      {
        v5 = 0; /*0x76a440*/
      }
    }
    this->q00C = 1; /*0x76a45f*/
    if ( v5 ) /*0x76a463*/
    {
      if ( this->Map_WorldDominationTour_43_field_0x4 ) /*0x76a46e*/
      {
        int v12 = this->Map_WorldDominationTour_43_field_0x8; /*0x76a473*/
        if ( a2 < v12 ) /*0x76a478*/
          v12 = a2; /*0x76a47a*/
        if ( v12 > 0 ) /*0x76a47e*/
        {
          int v13 = 0; /*0x76a480*/
          do /*0x76a4a0*/
          {
            _DWORD * v14 = (_DWORD *)(this->Map_WorldDominationTour_43_field_0x4 + v13); /*0x76a487*/
            char * v15 = &v5[v13]; /*0x76a489*/
            v13 += 12; /*0x76a48c*/
            --v12; /*0x76a48f*/
            *(_DWORD *)v15 = *v14; /*0x76a492*/
            *((_DWORD *)v15 + 1) = v14[1]; /*0x76a497*/
            *((_DWORD *)v15 + 2) = v14[2]; /*0x76a49d*/
          }
          while ( v12 ); /*0x76a4a0*/
          v3 = a2; /*0x76a4a2*/
        }
        if ( this->IsAllocated ) /*0x76a4a8*/
        {
          __3_YAXPAX_Z(this->q004); /*0x76a4b1*/
          this->Map_WorldDominationTour_43_field_0x4 = 0; /*0x76a4b9*/
        }
      }
      this->Map_WorldDominationTour_43_field_0x4 = v5; /*0x76a4c4*/
      this->Map_WorldDominationTour_43_field_0x8 = v3; /*0x76a4ca*/
      this->IsAllocated = a3 == 0; /*0x76a4cd*/
      return 1; /*0x76a4d3*/
    }
    else
    {
      return 0; /*0x76a468*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->q00C)(this); /*0x76a4dd*/
    return 1; /*0x76a4e3*/
  }
}
}
} // namespace gamemd

// 0x535BE0
unsigned int Map::IsCellFlag(int a1)
{
{
    return ((unsigned int)~a1 >> 11) & 1;
}
}

// 0x578D80
namespace gamemd {
bool sub_578D80(int a1, unsigned int a2)
{
{
    if ( a1 >= g_TerrainBuildConfig && a1 < g_TerrainBuildConfig + 40 )
    return 1;
    if ( a1 >= DataGlobal_AA073C && a1 < DataGlobal_AA073C + 4 )
  {
    if ( a1 == DataGlobal_AA073C || a1 == DataGlobal_AA073C + 3 )
    return a2 && a2 != 4;
    return 1;
  }
    if ( a1 >= DataGlobal_ABB110 && a1 < DataGlobal_ABB110 + 4 )
  {
    if ( a1 == DataGlobal_ABB110 || a1 == DataGlobal_ABB110 + 3 )
    return a2 != 1 && a2 != 3;
    return 1;
  }
    if ( a1 >= DataGlobal_AA1050 && a1 < DataGlobal_AA1050 + 4 )
  {
    if ( a1 == DataGlobal_AA1050 || a1 == DataGlobal_AA1050 + 3 )
    return a2 >= 2;
    return 1;
  }
    if ( a1 >= DataGlobal_AA10A0 && a1 < DataGlobal_AA10A0 + 4 )
  {
    if ( a1 == DataGlobal_AA10A0 || a1 == DataGlobal_AA10A0 + 3 )
    return a2 != 2 && a2 != 3;
    return 1;
  }
    return a1 >= DataGlobal_ABBEBC && a1 < DataGlobal_ABBEBC + 20;
}
}
} // namespace gamemd

// 0x58BB00
namespace gamemd {
unsigned int * sub_58BB00(unsigned int * a1, int a2)
{
{
    int *result;
    result = a1;
    if ( a2 < 0 || a2 >= DataGlobal_ABED0C )
  {
    *a1 = 0;
    *((int*)(a1) + 1) = 0;
  }
    else
  {
    *a1 = DataGlobal_ABE328[2 * a2];
    *((int*)(a1) + 1) = DataGlobal_ABE32C[2 * a2];
  }
    return result;
}
}
} // namespace gamemd

// 0x58CE90
namespace gamemd {
void sub_58CE90()
{
{
    int v0;
    int v1;
    int i;
    int *v3;
    int v4;
    void *v5;
    int *v6;
    if ( g_MapTileArray )
  {
    v0 = g_MapCellWidth * g_MapCellWidth;
    if ( g_MapCellWidth * g_MapCellWidth > 0 )
    {
    v1 = 0;
    do
      {
    *(int *)((char *)(g_MapTileArray) + v1 + 56) = -1;
    *(int *)((char *)(g_MapTileArray) + v1 + 60) = -1;
    v1 += 80;
    --v0;
      }
    while ( v0 );
    }
  }
    for ( i = g_RandomMap_TileData - 1; i >= 0; --i )
  {
    v3 = (int *)*((int *)(g_RandomMap_TerrainState) + i);
    if ( v3 )
    {
    if ( *v3 )
      {
    (**(void (__thiscall ***)(int, int))*v3)(*v3, 1);
    *v3 = 0;
      }
    v6 = v3;
    v4 = (*(int (__thiscall **)(int *, int **))(g_RandomMap_BuildObject + 16))(&g_RandomMap_BuildObject, &v6);
    if ( v4 != -1 && v4 < g_RandomMap_TileData && v4 < --g_RandomMap_TileData )
      {
    do
        {
    ++v4;
    *((int *)(g_RandomMap_TerrainState) + v4 - 1) = *((int *)(g_RandomMap_TerrainState) + v4);
        }
    while ( v4 < g_RandomMap_TileData );
      }
    v5 = (void *)v3[11];
    v3[10] = &vt_VectorClass_Cell;
    if ( v5 && *((char *)(v3) + 53) )
      {
    __3_YAXPAX_Z(v5);
    v3[11] = 0;
      }
    *((char *)(v3) + 53) = 0;
    v3[12] = 0;
    __3_YAXPAX_Z(v3);
    }
  }
    g_MapTileArrayEnd = 0;
}
}
} // namespace gamemd

// 0x58D010
namespace gamemd {
int sub_58D010(char a1)
{
{
    int result;
    int v3;
    int v4;
    void *v5;
    result = g_MapCellWidth * g_MapCellWidth;
    if ( g_MapCellWidth * g_MapCellWidth > 0 )
  {
    v3 = 0;
    v4 = g_MapCellWidth * g_MapCellWidth;
    do
    {
    result = (int)g_MapTileArray + v3;
    if ( *(int *)((char *)(g_MapTileArray) + v3 + 56) == -1 && (*(short *)result || *(short *)(result + 2)) )
      {
    v5 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (short *)((char *)(g_MapTileArray) + v3));
    result = RandomMap::GenerateTerrain((int)v5);
    if ( result )
    *(char *)(result + 26) = a1;
      }
    v3 += 80;
    --v4;
    }
    while ( v4 );
  }
    return result;
}
}
} // namespace gamemd

// 0x59B940
namespace gamemd {
double Map_Helper_59B940(MapResourceClass * aP0, short * a1, MapResourceClass * aP2, MapResourceClass * aP3, float a5, MapResourceClass * aP5)
{
{
    int v7;
    int v8;
    int v9;
    unsigned int v10;
    __int64 v11;
    MapResourceClass *v12;
    double v14;
    signed int v15;
    __int64 v16;
    double v17;
    BuildingTypeClass *v18;
    int v19;
    double v20;
    MapResourceClass *aP0a;
    short *a1a;
    MapResourceClass *aP2a;
    MapResourceClass *aP3a;
    if ( *aP2 == DataGlobal_ABE2F0 && *(int *)&aP2[1] == DataGlobal_ABE2F4 && *(int *)&aP2[2] == DataGlobal_ABE2F8 && *(int *)&aP2[3] == DataGlobal_ABE2FC )
  {
    v18 = (BuildingTypeClass *)(*(short *)aP0->__tail_0 - *a1);
    v19 = *(short *)&aP0->__tail_0[2] - *((int*)(a1) + 1);
    return Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64((double)((int)v18 * (int)v18 + v19 * v19)));
  }
    else
  {
    v7 = *(short *)&aP3->__tail_0[2];
    v8 = *a1;
    v9 = *((int*)(a1) + 1);
    a1a = (short *)*(short *)aP3->__tail_0;
    v10 = abs32(((v8 - v9) >> 1) - (((int)a1a - v7) >> 1));
    aP2a = (MapResourceClass *)v10;
    v11 = ((v8 + v9) >> 1) - (((int)a1a + v7) >> 1);
    v12 = (MapResourceClass *)((HIDWORD(v11) ^ v11) - HIDWORD(v11));
    aP3a = v12;
    if ( v10 || v12 )
    {
    v14 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64((double)(int)(v10 * v10 + (int)v12 * (int)v12)));
    v15 = abs32(*(short *)&aP0->__tail_0[2] - *((int*)(a1) + 1));
    v16 = *(short *)aP0->__tail_0 - *a1;
    aP0a = (MapResourceClass *)((HIDWORD(v16) ^ v16) - HIDWORD(v16));
    v20 = (double)(int)aP2a / v14;
    v17 = (double)(int)aP3a / v14;
    if ( (int)aP0a <= v15 )
    aP0a = (MapResourceClass *)v15;
    return (v17 * *(float *)&aP5 + a5 * v20) * (double)(int)aP0a;
    }
    else
    {
    return 0.0;
    }
  }
}
}
} // namespace gamemd

// 0x5ADE20
namespace gamemd {
const char * Map_Delete_5ADE20(ObjectClass * a1, const char * a2)
{
{
    bool v5;
    wchar_t *v6;
    wchar_t *StringCSF;
    int v9;
    int v10;
    int v11[20];
    char v12[120];
    int v13[5];
    String::Assign((char **)&v10, a2);
    MSEngine::Construct(v11);
    Map_Delete_5CEDD0(v12);
    unknown_libname_73(v13);
    v13[1] = Timer::GetTicks();
    v13[3] = 0;
    v11[0] = &vt_MapSelect;
    v5 = !SessionClass::LoadGameSession(v11, a1, (CellStruct *)&v10);
    DeleteAndZero((int)v13);
    MSEngine::Destructor((int)v12);
    MSEngine::Destruct(v11);
    DeleteAndZero((int)&v10);
    if ( !v5 )
    return a2;
    v10 = (int)&DataGlobal_82083C;
    StringCSF = GetStringCSF(g_Str_TXT_OK, 0, &DataGlobal_82C090.onBridge, 152);
    v6 = GetStringCSF((wchar_t *)&DataGlobal_82C090.spawnStatus, 0, &DataGlobal_82C090.onBridge, 152);
    Dialog::ShowMessageBox((int)v6, StringCSF, 0, 0, 0, v9);
    return 0;
}
}
} // namespace gamemd

// 0x5BF580
namespace gamemd {
char sub_5BF580()
{
{
    char result;
    result = DataGlobal_ABF35C;
    if ( !DataGlobal_ABF35C )
  {
    AudioFrame::CounterInc();
    AudioQueue::IncrementPriority();
    AudioQueue::ReleaseBuffers();
    RequestBufferMixer((unsigned int *)g_MixerState, 0x2000);
    result = RequestBufferMixer((unsigned int *)g_MixerChannel_Ambient, 0x2000);
    DataGlobal_ABF35C = 1;
  }
    return result;
}
}
} // namespace gamemd

// 0x5C9720
namespace gamemd {
void __usercall sub_5C9720(int a1@<ebx> a1, int a2@<ebp> a2, int a3@<edi> a3)
{
{
    int v3;
    int v4;
    __int64 v5;
    Game::LoadMultiplayerScoreAssets(*((void **)g_ScenarioClass_Instance + 3374));
    v5 = *(__int64 *)&g_DisplayWidth;
    v3 = 0;
    v4 = 0;
    Map_Load_72EAD0((int *)g_DSurface_Hidden, &v3);
    Frame::Present(g_DSurface_Hidden, a1, a2, a3, 0, v3, v4, (int *)v5);
    Campaign::Screen(0);
    Map_Load_72EAD0((int *)g_DSurface_Hidden, &v3);
    Frame::Present(g_DSurface_Hidden, a1, a2, a3, 0, v3, v4, (int *)v5);
    Map_Init_72D780();
}
}
} // namespace gamemd

// 0x5DB650
namespace gamemd {
char sub_5DB650(int a1, char a2, char a3)
{
{
    HWND v5;
    v5 = (HWND)Dialog::FindByHandle((void *)0xBC);
    return Map_Handle_5EC880(v5, a1, a2, a3);
}
}
} // namespace gamemd

// 0x5FBF70
namespace gamemd {
int E4Recv_5FBF70::sub_5FBF70()
{
{
    return this->M12;
}
}
} // namespace gamemd

// 0x65FDD0
namespace gamemd {
int sub_65FDD0()
{
{
    int result;
    int i;
    result = g_TriggerEventState;
    for ( i = 0; i < g_TriggerEventState; ++i )
  {
    Map_Helper_65FE00(*((char **)(g_TriggerPool) + i));
    result = g_TriggerEventState;
  }
    return result;
}
}
} // namespace gamemd

// 0x660B00
namespace gamemd {
void sub_660B00()
{
{
    int i;
    void *v1;
    int v2;
    int v3;
    for ( i = g_TriggerEventState - 1; i >= 0; --i )
  {
    v1 = (void *)*((int *)(g_TriggerPool) + i);
    if ( v1 )
    {
    v3 = *((int *)(g_TriggerPool) + i);
    v2 = (*(int (__thiscall **)(int *, int *))(DataGlobal_B04DA8 + 16))(&DataGlobal_B04DA8, &v3);
    if ( v2 != -1 && v2 < g_TriggerEventState && v2 < --g_TriggerEventState )
      {
    do
        {
    ++v2;
    *((int *)(g_TriggerPool) + v2 - 1) = *((int *)(g_TriggerPool) + v2);
        }
    while ( v2 < g_TriggerEventState );
      }
    __3_YAXPAX_Z(v1);
    }
  }
}
}
} // namespace gamemd

// 0x661530
namespace gamemd {
int sub_661530(unsigned char * a1, unsigned char * a2, int a3)
{
{
    int v5;
    int result;
    int v7;
    char *v9;
    v5 = a3;
    result = 0;
    while ( v5 > 0 )
  {
    if ( *a1 )
    {
    if ( a2 )
    *a2++ = *a1;
    ++a1;
    ++result;
    --v5;
    }
    else
    {
    v7 = 0;
    do
      {
    if ( v7 > v5 )
    break;
      }
    while ( !a1[++v7] );
    if ( v7 >= 255 )
    v7 = 255;
    if ( a2 )
      {
    *a2 = 0;
    v9 = a2 + 1;
    *v9 = v7;
    a2 = v9 + 1;
      }
    result += 2;
    a1 += v7;
    v5 -= v7;
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x661590
namespace gamemd {
int sub_661590(unsigned char * a1, int a2, int a3)
{
{
    int result;
    if ( !a2 )
    return Map_Append_661530(a1, 0, a3) + 2;
    result = Map_Append_661530(a1, (char *)(a2 + 2), a3) + 2;
    *(short *)a2 = result;
    return result;
}
}
} // namespace gamemd

// 0x6822F0
namespace gamemd {
int sub_6822F0(int a1, int a2, LPSTR lpMultiByteStr)
{
{
    LPSTR v3;
    int v4;
    int v6[2];
    short v7[4];
    LPCWCH lpWideCharStr;
    v3 = lpMultiByteStr;
    lpMultiByteStr = 0;
    *v3 = 0;
    v4 = (*(int (__stdcall **)(int, void *, int, LPSTR *))(*(int *)(a1) + 16))(a1, &DataGlobal_7F7D10, 18, &lpMultiByteStr);
    if ( v4 >= 0 )
  {
    v6[0] = 1;
    v6[1] = a2;
    if ( !lpMultiByteStr )
    WinAPI::Wrapper(-2147467261);
    v4 = (*(int (__stdcall **)(LPSTR, int, int *, short *))(*(int *)(lpMultiByteStr) + 12))( lpMultiByteStr, 1, v6, v7);
    if ( v4 >= 0 )
    {
    if ( v7[0] == 31 )
    WideCharToMultiByte(0, 0, lpWideCharStr, -1, v3, 128, 0, 0);
    if ( lpMultiByteStr )
    (*(void (__stdcall **)(LPSTR))(*(int *)(lpMultiByteStr) + 8))(lpMultiByteStr);
    }
    else if ( lpMultiByteStr )
    {
    (*(void (__stdcall **)(LPSTR))(*(int *)(lpMultiByteStr) + 8))(lpMultiByteStr);
    return v4;
    }
  }
    else if ( lpMultiByteStr )
  {
    (*(void (__stdcall **)(LPSTR))(*(int *)(lpMultiByteStr) + 8))(lpMultiByteStr);
    return v4;
  }
    return v4;
}
}
} // namespace gamemd

// 0x6823D0
namespace gamemd {
int sub_6823D0(int a1, int a2, wchar_t * Destination)
{
{
    wchar_t *v3;
    int v4;
    int v6[2];
    short v7[4];
    wchar_t *Source;
    v3 = Destination;
    Destination = 0;
    *v3 = 0;
    v4 = (*(int (__stdcall **)(int, void *, int, wchar_t **))(*(int *)(a1) + 16))(a1, &DataGlobal_7F7D10, 18, &Destination);
    if ( v4 >= 0 )
  {
    v6[0] = 1;
    v6[1] = a2;
    if ( !Destination )
    WinAPI::Wrapper(-2147467261);
    v4 = (*(int (__stdcall **)(wchar_t *, int, int *, short *))(*(int *)(Destination) + 12))(Destination, 1, v6, v7);
    if ( v4 >= 0 )
    {
    if ( v7[0] == 31 )
    wcsncpy(v3, Source, 0x80u);
    if ( Destination )
    (*(void (__stdcall **)(wchar_t *))(*(int *)(Destination) + 8))(Destination);
    }
    else if ( Destination )
    {
    (*(void (__stdcall **)(wchar_t *))(*(int *)(Destination) + 8))(Destination);
    return v4;
    }
  }
    else if ( Destination )
  {
    (*(void (__stdcall **)(wchar_t *))(*(int *)(Destination) + 8))(Destination);
    return v4;
  }
    return v4;
}
}
} // namespace gamemd

// 0x6C8E80
namespace gamemd {
void __usercall sub_6C8E80(int a1@<ebx> a1, int a2@<ebp> a2, int a3@<edi> a3)
{
{
    int v3;
    int v4;
    __int64 v5;
    CampaignScore::LoadCampaignScoreAssetsGame(*((void **)g_ScenarioClass_Instance + 3374));
    v5 = *(__int64 *)&g_DisplayWidth;
    v3 = 0;
    v4 = 0;
    Map_Load_72E9F0((int *)g_DSurface_Hidden, &v3);
    Frame::Present(g_DSurface_Hidden, a1, a2, a3, 0, v3, v4, (int *)v5);
    Campaign::Screen(0);
    Map_Load_72E9F0((int *)g_DSurface_Hidden, &v3);
    Frame::Present(g_DSurface_Hidden, a1, a2, a3, 0, v3, v4, (int *)v5);
    FileSystem::CleanupTrees();
}
}
} // namespace gamemd

// 0x6E5570
namespace gamemd {
int sub_6E5570()
{
{
    int result;
    for ( result = g_GameObjectCleanup; g_GameObjectCleanup > 0; result = g_GameObjectCleanup )
  {
    if ( *(int *)g_TagClassCount )
    (*(void (__thiscall **)(int, int))(**(int **)g_TagClassCount + 32))(*(int *)g_TagClassCount, 1);
  }
    return result;
}
}
} // namespace gamemd

// 0x72B380
namespace gamemd {
int sub_72B380()
{
{
    return DataGlobal_B0FB90;
}
}
} // namespace gamemd

// 0x72D780
namespace gamemd {
void sub_72D780()
{
{
    void *v0;
    if ( DataGlobal_B0FBB8 )
  {
    DataGlobal_B0FBB8 = 0;
    if ( DataGlobal_B0FC7D )
    {
    v0 = DataGlobal_B0FB1C;
    if ( DataGlobal_B0FB1C )
      {
    FileTreeNode::Destroy(DataGlobal_B0FB1C);
    __3_YAXPAX_Z(v0);
      }
    DataGlobal_B0FC7D = 0;
    }
    DataGlobal_B0FB1C = 0;
    if ( DataGlobal_B0FBB0 )
    {
    __3_YAXPAX_Z(DataGlobal_B0FBB0);
    DataGlobal_B0FBB0 = 0;
    }
    if ( DataGlobal_B0FBB4 )
    {
    (**(void (__thiscall ***)(int, int))DataGlobal_B0FBB4)(DataGlobal_B0FBB4, 1);
    DataGlobal_B0FBB4 = 0;
    }
  }
}
}
} // namespace gamemd

// 0x72E9F0
namespace gamemd {
void Map_Load_72E9F0(ConvertClass * a1, int * a2)
{
{
    int v4;
    int v5;
    DrawScoreScreenStats(a1, (int)a2);
    RenderScoreScreen(a1, a2, 0);
    v4 = 0;
    v5 = 0;
    v4 = **(int **)&DataGlobal_B05488[42900];
    v5 = *(int *)(*(int *)&DataGlobal_B05488[42900] + 4);
    DrawToSurfaceSHP( (int)a1, *(int *)&DataGlobal_B05488[42784], *(ConvertClass **)&DataGlobal_B05488[42668], 0, (ConvertClass *)&v4, (ConvertClass *)a2, (ConvertClass *)0x400, 0, 0, 0, (ConvertClass *)0x3E8, 0, 0, 0, 0, 0);
}
}
} // namespace gamemd

// 0x72EAD0
namespace gamemd {
void Map_Load_72EAD0(ConvertClass * a1, int * a2)
{
{
    int v4;
    int v5;
    DrawScoreScreenStats(a1, (int)a2);
    RenderScoreScreen(a1, a2, 0);
    v4 = 0;
    v5 = 0;
    v4 = **(int **)&DataGlobal_B05488[42900];
    v5 = *(int *)(*(int *)&DataGlobal_B05488[42900] + 4);
    DrawToSurfaceSHP( (int)a1, *(int *)&DataGlobal_B05488[42796], *(ConvertClass **)&DataGlobal_B05488[42644], 0, (ConvertClass *)&v4, (ConvertClass *)a2, (ConvertClass *)0x400, 0, 0, 0, (ConvertClass *)0x3E8, 0, 0, 0, 0, 0);
}
}
} // namespace gamemd

// 0x731CB0
namespace gamemd {
int sub_731CB0()
{
return 71;
}
} // namespace gamemd

// 0x731CC0
namespace gamemd {
int sub_731CC0()
{
return 22;
}
} // namespace gamemd

// 0x734210
namespace gamemd {
DWORD sub_734210()
{
{
    DWORD Time;
    DWORD result;
    Time = timeGetTime();
    DataGlobal_845554 = -1;
    DataGlobal_845550 = Time - 1601;
    result = timeGetTime() - 1601;
    DataGlobal_84555C = -100;
    DataGlobal_845558 = result;
    return result;
}
}
} // namespace gamemd

// 0x734FD0
namespace gamemd {
TechnoTypeClass * Map_Create_734FD0()
{
{
    return (TechnoTypeClass *)DataGlobal_B1CF80;
}
}
} // namespace gamemd

// 0x74E880
namespace gamemd {
void sub_74E880()
{
{
    if ( g_VeinholeMonsterPool )
  {
    __3_YAXPAX_Z(g_VeinholeMonsterPool);
    g_VeinholeMonsterPool = 0;
  }
}
}
} // namespace gamemd

// 0x753570
namespace gamemd {
int sub_753570()
{
{
    return ++DataGlobal_B1D3D8;
}
}
} // namespace gamemd

// 0x769CA0
namespace gamemd {
unsigned int * Map_WorldDominationTour_20::Seek(unsigned int * a2, int a3)
{
{
    int v3;
    v3 = *(this + 1) + 8 * a3;
    ComPtr::Constructor(a2);
    *a2 = &vt_rc_ptr_WorldDominationTour_Territory;
    ComPtr::Set(a2, *(int *)(v3 + 4));
    return a2;
}
}
} // namespace gamemd

// 0x769D20
namespace gamemd {
int Map_WorldDominationTour_28::Seek(int a2)
 {
// [IDA decompile] original pseudocode - translation pending (final goal)
void Map_WorldDominationTour_28_::_vt06(int a2)
{
  return *(_DWORD *)(this->q004 + 4 * a2); /*0x769d2a*/
}
}
} // namespace gamemd

// 0x769D30
namespace gamemd {
unsigned int * Map_WorldDominationTour_43::Seek(unsigned int * a2, int a3)
 {
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall Map_WorldDominationTour_43_::_vt06(_DWORD *this, _DWORD *a2, int a3)
{

  _DWORD * v3 = (_DWORD *)(this->q004 + 12 * a3); /*0x769d3b*/
  *a2 = *v3; /*0x769d46*/
  a2[1] = v3[1]; /*0x769d4b*/
  a2[2] = v3[2]; /*0x769d52*/
  return a2; /*0x769d4e*/
}
}
} // namespace gamemd

// 0x769D60
namespace gamemd {
BOOL Map_WorldDominationTour_38::AddRef()
 {
// [IDA decompile] original pseudocode - translation pending (final goal)
void Map_WorldDominationTour_38_::_vt01()
{
  return *(this + 2) < *(_DWORD *)(*(this + 1) + 8); /*0x769d6d*/
}
}
} // namespace gamemd

// 0x769D70
namespace gamemd {
unsigned int * sub_769D70(unsigned int * a1, int a2)
{
{
    *((int*)(a1) + 1) = a2;
    *((int*)(a1) + 2) = 0;
    *a1 = &vt_VectorCursor_TRect_int_VectorClass_TRect_int;
    return a1;
}
}
} // namespace gamemd

// 0x769DC0
namespace gamemd {
VectorCursor * Map_WorldDominationTour_20::Constructor(char a2)
{
{
    *(void**)this = &vt_VectorCursor_TRect_int_VectorClass_TRect_int;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (VectorCursor *)this;
}
}
} // namespace gamemd

// 0x769DE0
namespace gamemd {
char Map_WorldDominationTour_20::AddRef(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int *i;
    v2 = this->Capacity;
    if ( v2 == *(int *)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int *)(this->Items + 4);
    for ( i = (int *)(*(int *)(a2 + 4) + 4); *v4 == *i; i += 2 )
    {
    ++v3;
    v4 += 2;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x769F50
namespace gamemd {
int Map_WorldDominationTour_20::ddtor()
{
{
    int (__thiscall ***v2)(int, int);
    int result;
    v2 = *(int (__thiscall ****)(int, int))(this + 4);
    if ( v2 && this->IsAllocated )
  {
    result = (**v2)(v2, 3);
    this->Map_WorldDominationTour_20_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->Map_WorldDominationTour_20_field_0x8 = 0;
    return result;
}
}
} // namespace gamemd

// 0x769F80
namespace gamemd {
int Map_WorldDominationTour_20::Read(int a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !(unsigned char)this->Map_WorldDominationTour_20_field_0xC )
    return 0;
    v3 = this->Map_WorldDominationTour_20_field_0x8;
    result = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = (int *)(this->Map_WorldDominationTour_20_field_0x4 + 4); *i != *(int *)(a2 + 4); i += 2 )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
} // namespace gamemd
}

// 0x769FC0
namespace gamemd {
unsigned int Map_WorldDominationTour_20::Write(int a2)
{
{
    if ( (unsigned char)this->Map_WorldDominationTour_20_field_0xC )
    return (unsigned int)(a2 - this->Map_WorldDominationTour_20_field_0x4) >> 3;
    else
    return 0;
}
}
} // namespace gamemd

// 0x76A130
namespace gamemd {
char Map_WorldDominationTour_28::AddRef(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int *)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int *)this->Items;
    v5 = *(int *)(a2 + 4) - (int)v4;
    while ( *v4 == *(int *)((char *)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x76A170
namespace gamemd {
char Map_WorldDominationTour_28::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->Map_WorldDominationTour_28_field_0x4 )
      {
    v6 = this->Map_WorldDominationTour_28_field_0x8;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int *)(this->Map_WorldDominationTour_28_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->Map_WorldDominationTour_28_field_0x4 = 0;
        }
      }
    this->Map_WorldDominationTour_28_field_0x4 = v4;
    this->Map_WorldDominationTour_28_field_0x8 = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->ddtor();
    return 1;
  }
}
}
} // namespace gamemd

// 0x76A220
namespace gamemd {
void Map_WorldDominationTour_28::ddtor()
{
{
    if ( this->Map_WorldDominationTour_28_field_0x4 && this->IsAllocated )
  {
    __3_YAXPAX_Z(*(void **)(this + 4));
    this->Map_WorldDominationTour_28_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->Map_WorldDominationTour_28_field_0x8 = 0;
}
}
} // namespace gamemd

// 0x76A250
namespace gamemd {
int Map_WorldDominationTour_28::Read(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !(unsigned char)this->Map_WorldDominationTour_28_field_0xC )
    return 0;
    v3 = this->Map_WorldDominationTour_28_field_0x8;
    result = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = *(int **)(this + 4); *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x76A290
namespace gamemd {
unsigned int Map_WorldDominationTour_28::Write(int a2)
{
{
    if ( (unsigned char)this->Map_WorldDominationTour_28_field_0xC )
    return (unsigned int)(a2 - this->Map_WorldDominationTour_28_field_0x4) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x76A390
namespace gamemd {
char Map_WorldDominationTour_43::AddRef(int a2)
{
{
    int v2;
    int v3;
    int v4;
    int *v5;
    int *v6;
    int v7;
    v2 = this->Capacity;
    if ( v2 == *(int *)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = *(int *)(a2 + 4);
    v5 = (int *)this->Items;
    v6 = (int *)(v4 + 8);
    v7 = v4 - (int)v5;
    while ( *v5 == *(int *)((char *)(v5) + v7) && v5[1] == *(v6 - 1) && v5[2] == *v6 )
    {
    ++v3;
    v6 += 3;
    v5 += 3;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x76A4F0
namespace gamemd {
void Map_WorldDominationTour_43::ddtor()
{
{
    if ( this->Map_WorldDominationTour_43_field_0x4 && this->IsAllocated )
  {
    __3_YAXPAX_Z(*(void **)(this + 4));
    this->Map_WorldDominationTour_43_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->Map_WorldDominationTour_43_field_0x8 = 0;
}
}
} // namespace gamemd

// 0x76A520
namespace gamemd {
int Map_WorldDominationTour_43::Read(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !(unsigned char)this->Map_WorldDominationTour_43_field_0xC )
    return 0;
    v3 = this->Map_WorldDominationTour_43_field_0x8;
    result = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = *(int **)(this + 4); *i != *a2 || i[1] != *((int*)(a2) + 1) || i[2] != *((int*)(a2) + 2); i += 3 )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x76A570
namespace gamemd {
unsigned int Map_WorldDominationTour_43::Write(int a2)
{
{
    if ( (unsigned char)this->Map_WorldDominationTour_43_field_0xC )
    return (a2 - this->Map_WorldDominationTour_43_field_0x4) / 0xCu;
    else
    return 0;
}
}
} // namespace gamemd

// 0x76A5A0
namespace gamemd {
unsigned int * Map_WorldDominationTour_38::Release()
 {
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall Map_WorldDominationTour_38_::_vt02(_DWORD *this)
{
  ++*(this + 2); /*0x76a5a2*/
  return this; /*0x76a5a5*/
}
}
} // namespace gamemd

// 0x76A5B0
namespace gamemd {
unsigned int * Map_WorldDominationTour_38::ddtor()
 {
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall Map_WorldDominationTour_38_::_vt03(_DWORD *this)
{
  --*(this + 2); /*0x76a5b2*/
  return this; /*0x76a5b5*/
}
}
} // namespace gamemd

// 0x76A5C0
namespace gamemd {
VectorClass * Map_WorldDominationTour_20::QueryInterface(char a2)
{
{
    void (__thiscall ***v3)(int, int);
    v3 = (void (__thiscall ***)(int, int))*(this + 1);
    *(void**)this = &vt_VectorClass_rc_ptr_WorldDominationTour_Territory;
    if ( v3 && *((char *)(this) + 13) )
  {
    (**v3)(v3, 3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (VectorClass *)this;
}
}
} // namespace gamemd

// 0x76A6D0
namespace gamemd {
VectorClass * Map_WorldDominationTour_28::QueryInterface(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_WorldDominationTour_Map_AnimationPalette;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (VectorClass *)this;
}
}
} // namespace gamemd

// 0x76A770
namespace gamemd {
VectorClass * Map_WorldDominationTour_43::QueryInterface(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_WorldDominationTour_Centroid;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (VectorClass *)this;
}
}
} // namespace gamemd

// 0x770C10
namespace gamemd {
char sub_770C10(int a1, int a2, void ** a3)
{
{
    char **v3;
    int v6;
    int v8;
    int v9;
    char **v10;
    char **v11;
    char **v12;
    char **v13;
    void *v14;
    void *v15;
    void *v16;
    v3 = (char **)a3;
    DeleteAndZero::Alt2(a3);
    v6 = *(int *)(a2 + 16);
    if ( v6 <= 0 )
    return 0;
    if ( v6 == 1 )
    v8 = 0;
    else
    v8 = Random::Range(Randomizer_Global, 0, v6 - 1);
    v9 = *(int *)(*(int *)(a2 + 4) + 4 * v8);
    if ( a1 == 3 )
  {
    v10 = FormatStringInt((char **)&v14, v9, 2);
    v11 = ProcessStringAndCopy((char **)&a3, g_Str_WWD_Soviet, v10);
    String::Reassign(v3, (const char **)v11);
    DeleteAndZero((void **)&a3);
    DeleteAndZero(&v14);
  }
    else
  {
    v12 = FormatStringInt((char **)&v16, v9, 2);
    v13 = ProcessStringAndCopy((char **)&v15, g_Str_WWD_Allied, v12);
    String::Reassign(v3, (const char **)v13);
    DeleteAndZero(&v15);
    DeleteAndZero(&v16);
  }
    return 1;
}
}
} // namespace gamemd

// 0x770CE0
namespace gamemd {
char sub_770CE0(int a1, int a2, char ** a3)
{
{
    char **v3;
    char **v4;
    char **v6;
    char **v7;
    void *v8;
    void *v9;
    if ( a1 == 3 )
  {
    v3 = FormatStringInt((char **)&v9, a2, 2);
    v4 = ProcessStringAndCopy((char **)&v8, g_Str_WWD_Soviet, v3);
    String::Reassign(a3, (const char **)v4);
    DeleteAndZero(&v8);
    DeleteAndZero(&v9);
  }
    else
  {
    v6 = FormatStringInt((char **)&v8, a2, 2);
    v7 = ProcessStringAndCopy((char **)&v9, g_Str_WWD_Allied, v6);
    String::Reassign(a3, (const char **)v7);
    DeleteAndZero(&v9);
    DeleteAndZero(&v8);
  }
    return 1;
}
}
} // namespace gamemd

// 0x7A2800
namespace gamemd {
char sub_7A2800(int a1, char a2, char a3)
{
{
    HWND v5;
    v5 = (HWND)Dialog::FindByHandle((void *)0xC2);
    return Map_Handle_5EC880(v5, a1, a2, a3);
}
}
} // namespace gamemd
