// E4 materialized pending bodies (auto-generated from full_export v3)
#define GAMEMD_E4_VECTOR_TREE_TRUTH 1  // G57a2: G42.55 tree-truth bridge pulls core/vector.hpp templates
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
#include "e4/classes/Map_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/MapSeed_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/SkirmishDialog_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/ParticleSystemClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/Process_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/NetworkEventQueueClass_e4.hpp"
#include "e4/classes/Random_e4.hpp"
#include "e4/classes/DeleteAndZero_e4.hpp"
#include "e4/classes/DSurface_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/Rect_e4.hpp"
#include "e4/classes/AudioFrame_e4.hpp"
#include "e4/classes/Campaign_e4.hpp"
#include "e4/classes/FileSystem_e4.hpp"
#include "e4/classes/Frame_e4.hpp"
#include "e4/classes/Screen_e4.hpp"
#include "e4/classes/MapResourceClass_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/RulesClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers
// [w14e3] fn vocab supply (g57b5-W5 variadic convention); evidence: raw_decomp entries
namespace gamemd {
    int DrawScoreScreenStats(int* p0, int p1);  // x4:signals@0x72e2d0
} // namespace gamemd

// 0x539760
namespace gamemd {  // G42.18 ns repair
AbstractClass * * sub_539760()
{
  *(unsigned int *)&PsyDom_Coords = dword_A9F9F8; /*0x539766*/
  LightningStorm_Coords = dword_A9F9F8; /*0x53976b*/
  LightningStorm_Active = 0; /*0x53977d*/
  NukeFlash_Status = 0; /*0x539783*/
  LightningStorm_StartTime = -1; /*0x539789*/
  LightningStorm_Duration = -1; /*0x53978f*/
  NukeFlash_StartTime = -1; /*0x539795*/
  NukeFlash_Duration = -1; /*0x53979b*/
  PsyDom_Status = 0; /*0x5397a1*/
  PsyDom_Anim = 0; /*0x5397a7*/
  PsyDom_Owner = 0; /*0x5397ad*/
  LightningStorm_Deferment = 0; /*0x5397b3*/
  LightningStorm_Owner = 0; /*0x5397b9*/
  dword_A9FA70 = 0; /*0x5397bf*/
  if ( dword_A9FA64 && byte_A9FA6D ) /*0x5397cd*/
  {
    operator delete((void *)(dword_A9FA64)); /*0x5397d0*/
    dword_A9FA64 = 0; /*0x5397d8*/
  }
  byte_A9FA6D = 0; /*0x5397e3*/
  dword_A9FA68 = 0; /*0x5397eb*/
  dword_A9F9E0 = 0; /*0x5397f1*/
  if ( dword_A9F9D4 && byte_A9F9DD ) /*0x5397ff*/
  {
    operator delete((void *)(dword_A9F9D4)); /*0x539802*/
    dword_A9F9D4 = 0; /*0x53980a*/
  }
  byte_A9F9DD = 0; /*0x539815*/
  dword_A9F9D8 = 0; /*0x53981d*/
  dword_A9FA28 = 0; /*0x539823*/
  if ( dword_A9FA1C && byte_A9FA25 ) /*0x539831*/
  {
    operator delete((void *)(dword_A9FA1C)); /*0x539834*/
    dword_A9FA1C = 0; /*0x53983c*/
  }
  byte_A9FA25 = 0; /*0x539847*/
  dword_A9FA20 = 0; /*0x53984d*/
  dword_A8B230[378].vfptr2 = dword_A8B230[378].vfptr; /*0x539859*/
  if ( g_ChronoEffectState ) /*0x539867*/
    (**(void (__thiscall ***)(int, int))g_ChronoEffectState)(g_ChronoEffectState, 1); /*0x53986d*/
  ChronoScreenEffect_Duration = 0; /*0x539875*/
  g_ChronoEffectState = 0; /*0x53987b*/
  ChronoScreenEffect_Status = 0; /*0x539881*/
  return (gamemd::AbstractClass **)(UpdateSurfaceAnimations(-1, -1, -1, 0)); /*0x53988c*/
}
}  // G42.18 ns repair
// 0x5558E0
namespace gamemd {
int sub_5558E0(int * a1, int * a2, int * a3, int * a4, int * a5)
{
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  double v13; // st7
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int result; // eax
  int v19; // [esp+18h] [ebp+4h]
  int v20; // [esp+1Ch] [ebp+8h]

  *a3 = *a3 <= 0 ? 0 : *a3;
  *a4 = *a4 <= 0 ? 0 : *a4;
  *a5 = *a5 <= 0 ? 0 : *a5;
  v8 = *a3; /*0x555921*/
  if ( *a3 >= 2000 ) /*0x555928*/
    v8 = 2000; /*0x55592a*/
  *a3 = v8; /*0x55592f*/
  v9 = *a4; /*0x555931*/
  if ( *a4 >= 2000 ) /*0x555938*/
    v9 = 2000; /*0x55593a*/
  *a4 = v9; /*0x55593f*/
  v10 = *a5; /*0x555941*/
  if ( *a5 >= 2000 ) /*0x555948*/
    v10 = 2000; /*0x55594a*/
  *a5 = v10; /*0x55594f*/
  *a1 = 0x10000; /*0x555951*/
  v11 = *a3; /*0x555958*/
  v19 = *a3; /*0x55595f*/
  if ( *a3 != 1000 || *a4 != v11 || *a5 != v11 ) /*0x55596b*/
  {
    v12 = *a4; /*0x555971*/
    v20 = *a4; /*0x555975*/
    if ( *a4 > v11 ) /*0x555979*/
      goto LABEL_15; /*0x555979*/
    if ( v11 >= *a5 ) /*0x55597d*/
    {
      v13 = (double)v19 * 65536.0 * 0.001; /*0x555989*/
      v14 = Math::RoundToInt(v13); /*0x555991*/
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
        v15 = Math::RoundToInt((double)v20 * 65536.0 * 0.001); /*0x5559e9*/
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
    v16 = Math::RoundToInt((double)*a5 * 65536.0 * 0.001); /*0x555a58*/
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
// 0x5A1E50
namespace gamemd {
char sub_5A1E50(short * a1, int a2, int a3, int a4)
{
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int16_t v7; // si
  int16_t v8; // bx
  int16_t v9; // si
  int v10; // edi
  int v11; // eax
  int v13; // [esp+10h] [ebp-20h]
  int v14; // [esp+14h] [ebp-1Ch]
  int v15; // [esp+18h] [ebp-18h]
  int v17; // [esp+20h] [ebp-10h]
  int v18; // [esp+24h] [ebp-Ch]
  int16_t v19; // [esp+28h] [ebp-8h]
  int16_t v20; // [esp+2Ah] [ebp-6h]

  v19 = *a1; /*0x5a1e5e*/
  v20 = a1[2]; /*0x5a1e63*/
  v4 = *((unsigned int *)a1 + 3); /*0x5a1e68*/
  v5 = 0; /*0x5a1e6c*/
  v13 = 0; /*0x5a1e73*/
  v15 = 0; /*0x5a1e77*/
  v18 = v4; /*0x5a1e7b*/
  if ( v4 <= 0 ) /*0x5a1e7f*/
    return 0; /*0x5a1f41*/
  v6 = *((unsigned int *)a1 + 2); /*0x5a1e85*/
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
    v10 = v9 + v8; /*0x5a1eb3*/
    if ( v10 > dword_ABED04 && v9 - v8 < dword_ABED04 && v8 - v9 < dword_ABED04 && v10 <= dword_ABED08 )
    {
      v11 = dword_ABED10 ? *((unsigned int *)dword_ABED10 + 20 * v9 + 20 * g_MapCellWidth * v8 + 14) : -1;
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
// 0x5ADD10
namespace gamemd {
int E4Recv_5ADD10::Map_Delete()
{
  MSEngine v7; // [esp+Ch] [ebp-DCh] BYREF
  DynamicVector v8[2]; // [esp+5Ch] [ebp-8Ch] BYREF

  ((MSEngine *)(&v7))->Construct(); /*0x5add1e*/
  Map_Delete_5CEDD0(v8); /*0x5add27*/
  void *v9[5]; // [esp+D4h] [ebp-14h] BYREF
  unknown_libname_73(v9); /*0x5add33*/
  v9[1] = (void *)TimerGetTicks(); /*0x5add48*/
  v9[3] = 0; /*0x5add50*/
  /* X11: vtable install elided (implicit via MapSelect virtuals 0x5add5b) */
  bool v2; // bl
  v2 = ((ScenarioClass *)&v7)->Load((int)this) == 0; /*0x5add71*/
  DeleteAndZero((ObjectClass *)v9); /*0x5add74*/
  ((MSEngine *)v8)->Destructor(); /*0x5add7d*/
  (&v7)->Destruct(); /*0x5add86*/
  if ( v2 )
  {
  wchar_t *StringCSF; // [esp-10h] [ebp-F8h]
    StringCSF = GetStringCSF(g_Str_TXT_OK, 0, (const char *)&stru_82BA00.ROT, 134); /*0x5addba*/
  int *v3; // eax
    v3 = (int *)GetStringCSF((char *)&stru_82BA00.AltCameoFile[19], 0, (const char *)&stru_82BA00.ROT, 134); /*0x5addc5*/
  int v6; // [esp+0h] [ebp-E8h]
    Dialog::ShowMessageBox(v3, StringCSF, 0, 0, 0, v6); /*0x5addcf*/
    return 0; /*0x5addd4*/
  }
  else
  {
    Debug::Log(); /*0x5addf6*/
    return strlen(const char *)&this->u32_4970 != 0 ? (unsigned int)this->u32_758 + 2820) : 0;
  }
}
}
// 0x682150
namespace gamemd {
int sub_682150(int a1, int a2, LPSTR lpMultiByteStr)
{
  int v3; // ecx
  unsigned int *v4; // eax
  void **v5; // ecx
  int v6; // esi
  WCHAR *i; // edi
  int v9; // [esp+28h] [ebp-104h] BYREF
  WCHAR WideCharStr[128]; // [esp+2Ch] [ebp-100h] BYREF

  v9 = 0; /*0x682167*/
  *lpMultiByteStr = 0; /*0x68216f*/
  v3 = 0; /*0x682172*/
  v4 = (unsigned int *)(&unk_83D658); /*0x682174*/
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
  v5 = (void **)((&off_83D65C)[2 * v3]); /*0x6821c5*/
  LABEL_5:
  v6 = (*(int (__stdcall **)(int, void **, unsigned int, int, unsigned int, int *))(*(unsigned int *)a1 + 16))(a1, v5, 0, 16, 0, &v9); /*0x68218a*/
  if ( v6 >= 0 ) /*0x6821a7*/
  {
    for ( i = WideCharStr; ; ++i ) /*0x6821ce*/
    {
      if ( !v9 ) /*0x6821d8*/
        sub_7DC720(-2147467261); /*0x6821df*/
      v6 = (*(int (__stdcall **)(int, WCHAR *, int, unsigned int))(*(unsigned int *)v9 + 12))(v9, i, 2, 0); /*0x6821f3*/
      if ( v6 < 0 ) /*0x6821f7*/
        break; /*0x6821f7*/
      if ( !*i ) /*0x6821fd*/
      {
        WideCharToMultiByte(0, 0, WideCharStr, -1, lpMultiByteStr, 127, 0, 0); /*0x682216*/
        if ( v9 ) /*0x682222*/
          (*(void (__stdcall **)(int))(*(unsigned int *)v9 + 8))(v9); /*0x682227*/
        return v6; /*0x682227*/
      }
    }
  }
  if ( !v9 ) /*0x6821af*/
    return v6; /*0x68222a*/
  (*(void (__stdcall **)(int))(*(unsigned int *)v9 + 8))(v9); /*0x6821b4*/
  return v6; /*0x6821b9*/
}
}
// 0x68C050
namespace gamemd {
AbstractClass * * sub_68C050()
{
  int v1; // edi
  int v2; // ecx
  int v3; // ecx
  int v4; // esi
  int Capacity; // eax
  int v6; // eax
  int v7; // esi
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  VectorClass v14; // [esp+8h] [ebp-18h] BYREF
  int v15; // [esp+18h] [ebp-8h]
  int v16; // [esp+1Ch] [ebp-4h]

  v1 = 0; /*0x68c059*/
  if ( *(int *)&FootClass_Array.isChronoImmuneFlag > 0 ) /*0x68c05d*/
  {
    v2 = *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 3412); /*0x68c069*/
    if ( v2 > 0 && v2 >= *(int *)&FootClass_Array.isChronoImmuneFlag ) /*0x68c079*/
    {
      VectorClass::Construct(&v14, 0, 0); /*0x68c086*/
      v3 = 10; /*0x68c091*/
      /* X11: vtable install elided (implicit via DynamicVectorClass virtuals 0x68c096) */
      v16 = 10; /*0x68c09e*/
      v15 = 0; /*0x68c0a2*/
      v4 = 0; /*0x68c0ac*/
      if ( *(int *)(*(unsigned int *)&g_RulesClass_Instance + 3412) > 0 ) /*0x68c0b0*/
      {
        Capacity = v14.Capacity; /*0x68c0b2*/
        while ( 1 ) /*0x68c0bc*/
        {
          if ( v15 < Capacity ) /*0x68c0c0*/
            goto LABEL_12; /*0x68c0c0*/
          if ( (v14.IsAllocated || !Capacity) && v3 > 0 ) /*0x68c0d0*/
            break; /*0x68c0d0*/
  LABEL_14:
          if ( ++v4 >= *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 3412) ) /*0x68c109*/
            goto LABEL_15; /*0x68c109*/
          v3 = v16; /*0x68c0b8*/
        }
        if ( (*((uint8_t (__thiscall **)(VectorClass *, int, unsigned int))v14.vfptr + 2))(&v14, v3 + Capacity, 0) ) /*0x68c0df*/
        {
  LABEL_12:
          v6 = v15++; /*0x68c0e6*/
          *((unsigned int *)v14.Items + v6) = v4; /*0x68c0f5*/
        }
        Capacity = v14.Capacity; /*0x68c0f8*/
        goto LABEL_14; /*0x68c0f8*/
      }
  LABEL_15:
      v7 = 0; /*0x68c10b*/
      if ( *(int *)&FootClass_Array.isChronoImmuneFlag > 0 ) /*0x68c114*/
      {
        while ( 1 ) /*0x68c12f*/
        {
          v8 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v15 - 1); /*0x68c12f*/
          if ( v8 < v15 ) /*0x68c13a*/
          {
            v9 = v8; /*0x68c13d*/
            if ( v8 < --v15 ) /*0x68c145*/
            {
              do /*0x68c159*/
              {
                ++v9; /*0x68c14b*/
                *((unsigned int *)v14.Items + v9 - 1) = *((unsigned int *)v14.Items + v9); /*0x68c14f*/
              }
              while ( v9 < v15 ); /*0x68c159*/
            }
          }
          v10 = *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 3344); /*0x68c164*/
          if ( v8 + 1 <= v10 ) /*0x68c16c*/
            break; /*0x68c16c*/
          v11 = v8 - v10; /*0x68c16e*/
          v12 = *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 3372); /*0x68c170*/
          if ( v11 + 1 <= v12 ) /*0x68c17b*/
          {
            v1 = *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 3360) + 4 * v11); /*0x68c19a*/
          }
          else
          {
            v8 = v11 - v12; /*0x68c183*/
            if ( v8 + 1 <= *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 3400) ) /*0x68c18a*/
            {
              v13 = *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 3388); /*0x68c18c*/
  LABEL_25:
              v1 = *(unsigned int *)(v13 + 4 * v8); /*0x68c1a5*/
            }
          }
          if ( v1 ) /*0x68c1aa*/
            *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&FootClass_Array.isOnCarryall + 4 * v7) + 1780) = v1; /*0x68c1b5*/
          if ( ++v7 >= *(int *)&FootClass_Array.isChronoImmuneFlag ) /*0x68c1c3*/
            goto LABEL_29; /*0x68c1c3*/
        }
        v13 = *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 3332); /*0x68c19f*/
        goto LABEL_25; /*0x68c19f*/
      }
  LABEL_29:
      /* X11: vtable install elided (implicit via VectorClass virtuals 0x68c1ca) */
      if ( v14.Items ) /*0x68c1d9*/
      {
        if ( v14.IsAllocated ) /*0x68c1e1*/
          operator delete((void *)(v14.Items)); /*0x68c1e4*/
      }
    }
  }
}
}
// 0x55CF10
namespace gamemd {
char sub_55CF10()
{
  Network *Ticks; // [esp+0h] [ebp-Ch]

  Debug::Log(); /*0x55cf18*/
  char result; // al
  result = (char)dword_A8B238; /*0x55cf1d*/
  if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x55cf28*/
  {
    result = stru_887598.isAliveFlag; /*0x55cf2e*/
    if ( *(unsigned int *)&stru_887598.isAliveFlag ) /*0x55cf35*/
    {
      result = byte_A8DBA0; /*0x55cf3b*/
      if ( byte_A8DBA0 ) /*0x55cf42*/
      {
        if ( dword_A8EA0C ) /*0x55cf4c*/
        {
          ((NetworkEventQueueClass *)&g_NetworkEventQueue)->WaitForResponse(); /*0x55cf53*/
  int v2; // esi
          v2 = 480; /*0x55cf61*/
          Ticks = (Network *)TimerGetTicks(); /*0x55cf66*/
          while ( 1 ) /*0x55cf74*/
          {
            if ( Ticks != (Network *)-1 ) /*0x55cf79*/
            {
  int v3; // eax
              v3 = TimerGetTicks() - (unsigned int)Ticks; /*0x55cf84*/
              if ( v3 >= 480 ) /*0x55cf8a*/
                break; /*0x55cf8a*/
              v2 = 480 - v3; /*0x55cf8c*/
            }
            if ( !v2 ) /*0x55cf90*/
              break; /*0x55cf90*/
            Event::Dispatch(); /*0x55cf92*/
            if ( ((Process *)&g_NetworkEventQueue)->WaitForExit(0xAu, 0) ) /*0x55cfa0*/
              break; /*0x55cfa0*/
            v2 = 480; /*0x55cf70*/
          }
        }
        if ( !dword_A8B23C ) /*0x55cfb2*/
          return (Ticks)->SendUnreachable(); /*0x55cfb2*/
        result = (*((int (__thiscall **)(ObjectClass *))dword_A8B23C->vfptr + 2))(dword_A8B23C); /*0x55cfb6*/
        if ( !result ) /*0x55cfbb*/
          return (Ticks)->SendUnreachable(); /*0x55cfbd*/
      }
    }
  }
  return result; /*0x55cfc2*/
}
}
// 0x5C98A0
namespace gamemd {
int sub_5C98A0()
{

  int nextArrayIndex; // ecx
  nextArrayIndex = stru_A80220.nextArrayIndex; /*0x5c98a3*/
  int result; // eax
  result = 0; /*0x5c98a9*/
  dword_A8D580 = 0; /*0x5c98ad*/
  int v19; // [esp+4h] [ebp-4h]
  v19 = stru_A80220.nextArrayIndex; /*0x5c98b2*/
  int i; // [esp+0h] [ebp-8h]
  for ( i = 0; result < nextArrayIndex; i = result ) /*0x5c98ba*/
  {
  int v3; // edi
    v3 = *((unsigned int *)stru_A80220.vfptr3 + result); /*0x5c98ca*/
    if ( v3 && *(unsigned char *)(*(unsigned int *)(v3 + 52) + 422) != 1 && v3 != HouseClass_Observer ) /*0x5c98eb*/
    {
  size_t v4; // ebp
      v4 = dword_A8D580++; /*0x5c98f6*/
  int v5; // esi
      v5 = 28 * v4; /*0x5c990e*/
      *((unsigned int *)&dword_A8D228 + 28 * v4) = 0; /*0x5c9917*/
      wcscpy((wchar_t *)&unk_A8D1FC + 56 * v4, (const wchar_t *)(v3 + 90154)); /*0x5c9922*/
  int v6; // eax
      v6 = 0; /*0x5c9927*/
      *((unsigned int *)&dword_A8D22C + 28 * v4) = 0; /*0x5c992c*/
      dword_A8D23C[28 * v4] = 0; /*0x5c9932*/
      *((unsigned int *)&dword_A8D24C + 28 * v4) = 0; /*0x5c9938*/
      dword_A8D25C[28 * v4] = 0; /*0x5c993e*/
      *((unsigned int *)&dword_A8D224 + 28 * v4) = *(unsigned int *)(v3 + 90196); /*0x5c994a*/
      if ( !*(unsigned char *)(v3 + 501) ) /*0x5c9950*/
      {
        ++*((unsigned int *)&dword_A8D228 + 28 * v4); /*0x5c9961*/
        dword_A8D584 = v4; /*0x5c9967*/
      }
  int *v7; // ecx
      v7 = (int *)(v3 + 21476); /*0x5c996d*/
  int v8; // edx
      v8 = 20; /*0x5c9973*/
      do /*0x5c9980*/
      {
  int v9; // ebp
        v9 = *v7++; /*0x5c9978*/
        v6 += v9; /*0x5c997d*/
        --v8; /*0x5c997f*/
      }
      while ( v8 ); /*0x5c9980*/
  int *v10; // ecx
      v10 = (int *)(v3 + 21560); /*0x5c9982*/
  int v11; // edx
      v11 = 20; /*0x5c9988*/
      do /*0x5c9995*/
      {
  int v12; // ebp
        v12 = *v10++; /*0x5c998d*/
        v6 += v12; /*0x5c9992*/
        --v11; /*0x5c9994*/
      }
      while ( v11 ); /*0x5c9995*/
      dword_A8D23C[v5] = v6; /*0x5c9997*/
      *(unsigned int *)((char *)&dword_A8D22C + v5 * 4) = *(unsigned int *)(v3 + 21556) + *(unsigned int *)(v3 + 21640); /*0x5c99b1*/
  int Count; // ebp
      Count = VectorClass::GetCount((VectorClass *)(v3 + 21920)); /*0x5c99c2*/
  int v14; // ebp
      v14 = VectorClass::GetCount((VectorClass *)(v3 + 21940)) + Count; /*0x5c99cf*/
  int v15; // ebp
      v15 = VectorClass::GetCount((VectorClass *)(v3 + 21960)) + v14; /*0x5c99dc*/
      *(unsigned int *)((char *)&dword_A8D24C + v5 * 4) = v15 + VectorClass::GetCount((VectorClass *)(v3 + 21980)); /*0x5c99e5*/
  int v16; // eax
      v16 = *(unsigned int *)(v3 + 21736); /*0x5c99eb*/
      if ( v16 > 0 ) /*0x5c99f3*/
        dword_A8D25C[v5] += v16; /*0x5c99f5*/
      if ( !*(unsigned char *)(v3 + 501) ) /*0x5c99fb*/
      {
  int v17; // edi
        v17 = dword_A8D25C[v5]; /*0x5c9a05*/
        dword_A8D25C[v5] = v17 + v17 / 2 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, v17 / 2, v17); /*0x5c9a2a*/
      }
      Debug::Log(); /*0x5c9a6e*/
      result = i; /*0x5c9a73*/
      nextArrayIndex = v19; /*0x5c9a77*/
    }
    ++result; /*0x5c9a7e*/
  }
  return result; /*0x5c9a8f*/
}
}
// 0x5EC880
namespace gamemd {
SkirmishDialog * * Map_Handle_5EC880(HWND hDlg, int a2, char a3, char a4)
{
  HWND v4; // ebx
  int v5; // edi
  int v6; // esi
  LRESULT v7; // eax
  LRESULT v8; // eax
  wchar_t *v9; // esi
  char v10; // bl
  int v12; // [esp+10h] [ebp-8h]

  v4 = hDlg; /*0x5ec88a*/
  v12 = a2; /*0x5ec890*/
  if ( !g_MPCooperativeState ) /*0x5ec898*/
    v12 = a2 + 1; /*0x5ec89d*/
  v5 = 0; /*0x5ec8a7*/
  while ( 1 )
  {
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
      if ( v8 /*0x5ec960*/
        && (v8 == g_Lobby_PlayerTeam || v8 == g_Lobby_PlayerSide || v8 == g_Lobby_PlayerColor)
        && dword_A8B23C
        && !a3 )
      {
        return (gamemd::SkirmishDialog **)(1); /*0x5ec960*/
      }
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
      return (gamemd::SkirmishDialog **)(1); /*0x5ec998*/
  }
  if ( !dword_A8B23C || a4 || !v10 || SessionClass::GetPlayerSide((int)v9) != -3 ) /*0x5ec9b9*/
  {
    v4 = hDlg; /*0x5ec9bb*/
    goto LABEL_39; /*0x5ec9bb*/
  }
  return (gamemd::SkirmishDialog **)(1); /*0x5ec9c9*/
}
}
// 0x6ACCA0
namespace gamemd {
char sub_6ACCA0(int a1)
{
  int v3; // esi

  HWND v1; // ebp
  v1 = (HWND)(dword_B0B59C); /*0x6acca2*/
  if ( a1 >= 8 ) /*0x6accad*/
    return 0; /*0x6acd54*/
  int v2; // edi
  v2 = a1 - 1; /*0x6accb9*/
  while ( 1 )
  {
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
  LRESULT v4; // eax
    v4 = SendDlgItemMessageA(v1, v3, 0x147u, 0, 0); /*0x6acd23*/
    if ( (unsigned int)SendDlgItemMessageA(v1, v3, 0x150u, v4, 0) <= 2 ) /*0x6acd33*/
      break; /*0x6acd33*/
    if ( ++v2 + 1 >= 8 ) /*0x6acd46*/
      return 0; /*0x6acd46*/
  }
  return 1; /*0x6acd4d*/
}
}
// 0x584030
namespace gamemd {
char Map_Helper_584030(IUnknown * aP0)
{
  int v2; // eax
  int v3; // ebp
  int v4; // edi
  int v5; // esi
  unsigned int v6; // eax
  unsigned int *v7; // eax
  int v8; // eax
  int v10; // [esp+10h] [ebp-4h]
  int v11; // [esp+18h] [ebp+4h]

  v2 = (int)(aP0[3]); /*0x584038*/
  v3 = (int)(aP0[2]); /*0x58403b*/
  v4 = 0; /*0x58403f*/
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
    (*(((unsigned short *)&(v11)) + 1)) = v4 + aP0[1]; /*0x58405e*/
    (*((unsigned short *)&(v11))) = v5 + *aP0; /*0x584063*/
    v6 = (int16_t)v11 + ((*((signed short *)(((unsigned char *)&(v11)) + 2))) << 9); /*0x584071*/
    if ( v6 >= 0x40000 || (v7 = *(unsigned int **)(dword_87F924 + 4 * v6)) == 0 ) /*0x584081*/
    {
      dword_ABDC74 = v11; /*0x584087*/
      v7 = (unsigned int *)(unk_ABDC50); /*0x58408c*/
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
// 0x59BAB0
namespace gamemd {
char Map_Helper_59BAB0(void * a1, void * a2, void * a3, void * a4, void * a5)
{

  int v5; // esi
  v5 = (int)(*a2); /*0x59babb*/
  if ( *a2 == dword_ABE2F0 && a2[1] == dword_ABE2F4 && a2[2] == dword_ABE2F8 && a2[3] == dword_ABE2FC ) /*0x59bae5*/
    return 1; /*0x59baeb*/
  if ( a3 ) /*0x59baf4*/
  {
  int v7; // edx
    v7 = a1[1]; /*0x59bb00*/
  double v8; // st7
    v8 = (double)(*a1 - 2 * v5 - v7 + dword_87F8DC - 1) * 0.5 - (double)a2[2] * 0.5; /*0x59bb3f*/
  double v9; // st6
    v9 = (double)(*a1 - 2 * a2[1] - dword_87F8DC + v7 - 1) * 0.5 - (double)a2[3] * 0.5; /*0x59bb54*/
    if ( v9 * v9 * a5 + v8 * v8 * a4 < 1.0 ) /*0x59bb77*/
      return 1; /*0x59bb80*/
  }
  else
  {
  int v10; // eax
    v10 = *a1; /*0x59bb87*/
  int v11; // edx
    v11 = a1[1]; /*0x59bb8a*/
    if ( v10 >= v5 && v10 < v5 + a2[2] ) /*0x59bb99*/
    {
  int v12; // eax
      v12 = a2[1]; /*0x59bb9b*/
      if ( v11 >= v12 && v11 < v12 + a2[3] ) /*0x59bba9*/
        return 1; /*0x59bbb2*/
    }
  }
  return 0; /*0x59bae7*/
}
}
// 0x5A7D00
namespace gamemd {
AbstractClass * * sub_5A7D00(int a1, unsigned short * a2, char a3, char a4)
{
  unsigned int *v4; // esi
  int v6; // edx
  int v7; // ebx
  int v8; // esi
  int v9; // ebp
  int16_t v10; // cx
  int v11; // eax
  int v12; // ecx
  int *v13; // edi
  int v14; // esi
  unsigned int *v16; // [esp+10h] [ebp-14h]
  int v17; // [esp+14h] [ebp-10h] BYREF
  int v18; // [esp+18h] [ebp-Ch]
  unsigned short *v19; // [esp+1Ch] [ebp-8h]
  int v20; // [esp+20h] [ebp-4h]

  v4 = (unsigned int *)*((unsigned int *)dword_A8ED2C + a1); /*0x5a7d0b*/
  v6 = *v4; /*0x5a7d13*/
  v19 = a2; /*0x5a7d15*/
  v16 = v4; /*0x5a7d19*/
  v20 = (*(int (__thiscall **)(unsigned int *))(v6 + 156))(v4); /*0x5a7d25*/
  if ( v20 ) /*0x5a7d29*/
  {
    v7 = 0; /*0x5a7d35*/
    if ( (int)v4[186] > 0 ) /*0x5a7d39*/
    {
      v8 = dword_ABED04; /*0x5a7d3f*/
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
        (*((unsigned short *)&(v18))) = v9 + *a2; /*0x5a7d66*/
        (*(((unsigned short *)&(v18)) + 1)) = v10; /*0x5a7d6b*/
        v17 = v18; /*0x5a7d74*/
        v11 = v10; /*0x5a7d7b*/
        v12 = v10 + (int16_t)v18; /*0x5a7d7e*/
        if ( v12 <= v8 || (int16_t)v18 - v11 >= v8 || v11 - (int16_t)v18 >= v8 || v12 > dword_ABED08 ) /*0x5a7da5*/
        {
          if ( a4 ) /*0x5a7e6d*/
            return 0; /*0x5a7e6d*/
        }
        else
        {
          v13 = (int *)((CellCoord *)(&dword_87F7E8))->To_CellObj((int16_t *)&v17); /*0x5a7dba*/
          v14 = *(unsigned int *)(v20 + 4 * (v9 + v7 * v16[185]) + 16); /*0x5a7dcf*/
          if ( v14 /*0x5a7e27*/
            && (!(v13)->IsEmpty() && !sub_4863A0(v13)
             || v13->u32_470 != *(char *)(v14 + 42)
             || a3 && *((unsigned char *)dword_ABED10 + 80 * (int16_t)v17 + 80 * g_MapCellWidth * (*((signed short *)(((unsigned char *)&(v17)) + 2))) + 70)) )
          {
            return 0; /*0x5a7e7a*/
          }
          v8 = dword_ABED04; /*0x5a7e2f*/
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
// 0x6B4240
namespace gamemd {
int sub_6B4240(int a1, int a2)
{

  int v26; // [esp+10h] [ebp-38h]
  v26 = *(unsigned int *)(a1 + 36); /*0x6b4250*/
  int v2; // esi
  v2 = (int16_t)v26 - dword_8759A8; /*0x6b4267*/
  int v3; // edi
  v3 = (*((signed short *)(((unsigned char *)&(v26)) + 2))) - dword_8759AC; /*0x6b4269*/
  int v4; // ecx
  v4 = v3 * dword_8759A4 + v2; /*0x6b4275*/
  int v5; // ebx
  v5 = *((unsigned int *)g_SlaveManagerPool + 2 * v4); /*0x6b4284*/
  unsigned char v29[4]; // [esp+2Ch] [ebp-1Ch] BYREF
  v29[0] = *((unsigned char *)g_SlaveManagerPool + 8 * v4 + 4); /*0x6b4287*/
  v29[1] = *((unsigned char *)g_SlaveManagerPool + 8 * v4 + 5); /*0x6b428f*/
  int v30; // [esp+30h] [ebp-18h]
  v30 = *((unsigned int *)g_SlaveManagerPool + 2 * v4 + 2); /*0x6b4297*/
  char v6; // dl
  v6 = *((unsigned char *)g_SlaveManagerPool + 8 * v4 + 12); /*0x6b429b*/
  (*((unsigned char *)&(v4))) = *((unsigned char *)g_SlaveManagerPool + 8 * v4 + 13); /*0x6b429f*/
  char v31; // [esp+34h] [ebp-14h]
  v31 = v6; /*0x6b42a3*/
  char v32; // [esp+35h] [ebp-13h]
  v32 = v4; /*0x6b42a7*/
  int v7; // ecx
  v7 = dword_8759A4 * (v3 + 1) + v2; /*0x6b42ab*/
  unsigned int v28[5]; // [esp+18h] [ebp-30h] BYREF
  v28[4] = v5; /*0x6b42ae*/
  v28[0] = v5; /*0x6b42b2*/
  int v8; // esi
  v8 = *((unsigned int *)g_SlaveManagerPool + 2 * v7 + 2); /*0x6b42ba*/
  int v9; // edi
  v9 = *((unsigned int *)g_SlaveManagerPool + 2 * v7); /*0x6b42be*/
  char v34; // [esp+3Ch] [ebp-Ch]
  v34 = *((unsigned char *)g_SlaveManagerPool + 8 * v7 + 12); /*0x6b42c1*/
  char v10; // dl
  v10 = *((unsigned char *)g_SlaveManagerPool + 8 * v7 + 13); /*0x6b42c5*/
  int v33; // [esp+38h] [ebp-10h]
  v33 = v8; /*0x6b42c9*/
  char v35; // [esp+3Dh] [ebp-Bh]
  v35 = v10; /*0x6b42cd*/
  char v11; // dl
  v11 = *((unsigned char *)g_SlaveManagerPool + 8 * v7 + 4); /*0x6b42d1*/
  char v12; // al
  v12 = *((unsigned char *)g_SlaveManagerPool + 8 * v7 + 5); /*0x6b42d5*/
  int v36; // [esp+40h] [ebp-8h]
  v36 = v9; /*0x6b42dd*/
  char v37; // [esp+44h] [ebp-4h]
  v37 = v11; /*0x6b42e1*/
  char v38; // [esp+45h] [ebp-3h]
  v38 = v12; /*0x6b42e5*/
  v28[2] = v8; /*0x6b42e9*/
  v28[3] = v9; /*0x6b42ed*/
  v28[1] = v30; /*0x6b42f1*/
  int v13; // esi
  v13 = 1000; /*0x6b42f5*/
  int v14; // edi
  v14 = -1; /*0x6b42fa*/
  int *v15; // eax
  v15 = v28; /*0x6b42fd*/
  int v16; // edx
  v16 = 4; /*0x6b4301*/
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
  int result; // eax
  result = 0; /*0x6b431a*/
  if ( v14 == v13 ) /*0x6b431e*/
  {
  int v18; // ecx
    v18 = 0; /*0x6b4320*/
  unsigned char *v19; // edx
    v19 = v29; /*0x6b4322*/
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
  int v23; // ecx
    v23 = 0; /*0x6b437d*/
  unsigned char *v24; // edi
    v24 = v29; /*0x6b437f*/
  int *v25; // edx
    v25 = v28; /*0x6b4383*/
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
  int v20; // ecx
    v20 = 0; /*0x6b434d*/
  unsigned char *v21; // esi
    v21 = v29; /*0x6b434f*/
  int *v22; // edx
    v22 = v28; /*0x6b4353*/
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
// 0x751C30
namespace gamemd {
char sub_751C30()
{

  CHAR Buffer[260]; // [esp+DCh] [ebp-104h] BYREF
  if ( !GetLogicalDriveStringsA(0x104u, Buffer) ) /*0x751c47*/
    return 0; /*0x751c54*/
  if ( strlen(Buffer) ) /*0x751c71*/
  {
    *(unsigned int *)Buffer = 23598; /*0x751c88*/
  char v7[176]; // [esp+2Ch] [ebp-1B4h] BYREF
    memset(&v7[32], 0, 0x90u); /*0x751ca0*/
    *(unsigned int *)&v7[32] = GetDriveTypeA(Buffer); /*0x751cac*/
  DWORD NumberOfFreeClusters; // [esp+10h] [ebp-1D0h] BYREF
  DWORD BytesPerSector; // [esp+14h] [ebp-1CCh] BYREF
  DWORD SectorsPerCluster; // [esp+18h] [ebp-1C8h] BYREF
  DWORD TotalNumberOfClusters; // [esp+1Ch] [ebp-1C4h] BYREF
    GetDiskFreeSpaceA(Buffer, &SectorsPerCluster, &BytesPerSector, &NumberOfFreeClusters, &TotalNumberOfClusters); /*0x751cbd*/
    *(unsigned int *)&v7[168] = NumberOfFreeClusters * BytesPerSector * SectorsPerCluster; /*0x751cdf*/
    *(unsigned int *)&v7[172] = TotalNumberOfClusters * BytesPerSector * SectorsPerCluster; /*0x751ced*/
  DWORD MaximumComponentLength[2]; // [esp+20h] [ebp-1C0h] BYREF
  DWORD FileSystemFlags; // [esp+28h] [ebp-1B8h] BYREF
    GetVolumeInformationA( /*0x751d18*/
      Buffer,
      &v7[36],
      0x40u,
      (LPDWORD)&v7[100],
      MaximumComponentLength,
      &FileSystemFlags,
      &v7[104],
      0x40u);
    sprintf(v7, "RA%d", 1); /*0x751d4f*/
    _strcmpi(v7, &v7[36]); /*0x751d5e*/
  }
  else
  {
    vt_CD(dword_81C1D0); /*0x751da4*/
  }
  return 1; /*0x751c51*/
}
}
// 0x63AB60
namespace gamemd {
char sub_63AB60(int a1, int a2)
{
  int v3; // ebx
  unsigned int *Coords; // eax
  unsigned int *v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // [esp+4h] [ebp-34h] BYREF
  unsigned int v9[3]; // [esp+Ch] [ebp-2Ch] BYREF
  unsigned int v10[4]; // [esp+18h] [ebp-20h] BYREF
  unsigned int v11[4]; // [esp+28h] [ebp-10h] BYREF

  if ( !byte_AC4CF4 ) /*0x63ab6b*/
    return 0; /*0x63ab73*/
  if ( byte_AC4CB0 ) /*0x63ab7d*/
    return 0; /*0x63ab85*/
  v3 = dword_AC4C38; /*0x63ab8e*/
  if ( !dword_AC4CCC ) /*0x63ab98*/
    goto LABEL_11; /*0x63ab98*/
  Coords = ScriptAction::GetCoords((unsigned int **)dword_AC4CCC, v10); /*0x63aba3*/
  v9[0] = *Coords; /*0x63abaa*/
  v9[1] = Coords->u32_4; /*0x63abb5*/
  v9[2] = Owner; /*0x63abc0*/
  v5 = ToCoordPixel(&v8, v9); /*0x63abc4*/
  ((Rect *)(v11))->Set(*v5 - 4, v5[1] - 4, 8, 8); /*0x63abe0*/
  v10[0] = v11[0]; /*0x63abf9*/
  v6 = v11[1] - 4; /*0x63ac00*/
  if ( a1 < v11[0] - 4 ) /*0x63ac0b*/
    goto LABEL_11; /*0x63ac0b*/
  if ( a1 < v11[2] + 8 + v11[0] - 4 && a2 >= v6 && a2 < v11[3] + 8 + v6 ) /*0x63ac1f*/
    v7 = dword_AC4CCC; /*0x63ac21*/
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
    Mission::SetAndCall((int *)&dword_87F7E8, 0, 1); /*0x63ac45*/
    return 1; /*0x63ac4e*/
  }
  Mission::SetAndCall((int *)&dword_87F7E8, 0, 0); /*0x63ac43*/
  return 1; /*0x63ab6f*/
}
}
// 0x76FD40
namespace gamemd {
void Map_Process_76FD40(int a1, ObjectClass * aP1, int a3, int _54, int * a4, int a6, void * a2, void * a5)
{
  int v13; // ecx
  int v15; // edx
  int v16; // eax
  int v17; // esi
  int v19; // [esp+Ch] [ebp-38h]
  int v20; // [esp+10h] [ebp-34h]

  int v7; // ecx
  v7 = *(unsigned int *)(a1 + 36); /*0x76fd46*/
  if ( v7 ) /*0x76fd4b*/
  {
  int v8; // ebp
    v8 = -1; /*0x76fd57*/
    switch ( a4 ) /*0x76fd5c*/
    {
      case 1: /*0x76fd5c*/
        v8 = 3; /*0x76fd72*/
        break;
      case 2: /*0x76fd5c*/
        v8 = 2; /*0x76fd6b*/
        break;
      case 3: /*0x76fd5c*/
        v8 = 1; /*0x76fd64*/
        break;
    }
  int *v9; // eax
  unsigned int v25[2]; // [esp+24h] [ebp-20h] BYREF
    v9 = (int *)(*(int (__thiscall **)(int, unsigned int *, int, int))(*(unsigned int *)v7 + 24))(v7, v25, a3, a2); /*0x76fd7e*/
  int v10; // edi
    v10 = *v9; /*0x76fd81*/
  int v11; // ebx
    v11 = v9[1]; /*0x76fd85*/
  int v21; // [esp+14h] [ebp-30h] BYREF
    v21 = v9[2]; /*0x76fd8b*/
  int v22; // [esp+18h] [ebp-2Ch]
    v22 = v9[3]; /*0x76fd92*/
    if ( v8 < 0 ) /*0x76fd96*/
    {
      (*(void (__thiscall **)(unsigned int, unsigned int))(**(unsigned int **)(a1 + 36) + 4))(*(unsigned int *)(a1 + 36), 0); /*0x76fdbc*/
    }
    else
    {
      MSAnim::Reset(*(unsigned int **)(a1 + 36), v8); /*0x76fd9c*/
      (*(void (__thiscall **)(unsigned int, int))(**(unsigned int **)(a1 + 36) + 4))(*(unsigned int *)(a1 + 36), 1); /*0x76fda8*/
      Map_Process_5CC690(*(unsigned int **)(a1 + 36)); /*0x76fdae*/
    }
  unsigned int *v12; // eax
  char v27[12]; // [esp+38h] [ebp-Ch] BYREF
    v12 = (unsigned int *)(*(int (__thiscall **)(unsigned int, char *))(**(unsigned int **)(a1 + 36) + 24))(*(unsigned int *)(a1 + 36), v27); /*0x76fdcb*/
    v25[0] = *v12; /*0x76fdd2*/
    v25[1] = v12[1]; /*0x76fdd9*/
    if ( (int)v12[2] <= 0 || (int)v12[3] <= 0 ) /*0x76fde9*/
    {
      v17 = v19; /*0x76fe60*/
      v16 = v20; /*0x76fe64*/
      v13 = v10; /*0x76fe68*/
      v15 = v11; /*0x76fe6a*/
    }
    else if ( v19 <= 0 || v20 <= 0 ) /*0x76fdf9*/
    {
      v13 = *v12; /*0x76fe53*/
      v15 = v12[1]; /*0x76fe55*/
      v17 = v12[2]; /*0x76fe58*/
      v16 = v12[3]; /*0x76fe5b*/
    }
    else
    {
      v13 = *v12; /*0x76fdfb*/
  int v14; // esi
      v14 = v12[2]; /*0x76fdfd*/
      v15 = v12[1]; /*0x76fe00*/
      v16 = v12[3]; /*0x76fe03*/
  int v26; // [esp+2Ch] [ebp-18h]
      v26 = v14; /*0x76fe08*/
      if ( v13 > v10 ) /*0x76fe0c*/
      {
        v14 += v13 - v10; /*0x76fe10*/
        v13 = v10; /*0x76fe12*/
        v26 = v14; /*0x76fe14*/
      }
      if ( v15 > v11 ) /*0x76fe1a*/
      {
        v16 += v15 - v11; /*0x76fe1e*/
        v15 = v11; /*0x76fe20*/
      }
      if ( v13 + v14 >= v10 + v19 ) /*0x76fe28*/
        v17 = v26; /*0x76fe36*/
      else
        v17 = v19 - v13 + v10 + 1; /*0x76fe30*/
      if ( v16 + v15 < v11 + v20 ) /*0x76fe45*/
        v16 = v11 - v15 + v20 + 1; /*0x76fe4d*/
    }
    v21 = v13; /*0x76fe6c*/
  int v23; // [esp+1Ch] [ebp-28h]
    v23 = v17; /*0x76fe70*/
    v22 = v15; /*0x76fe7f*/
  int v24; // [esp+20h] [ebp-24h]
    v24 = v16; /*0x76fe83*/
    ((Team *)(a5))->ReleaseAll((int)&v21); /*0x76fe87*/
    DSurface::Flip2(); /*0x76fe8e*/
    (a5)->FrameLoop(1); /*0x76fe97*/
  }
}
}
// 0x682240
namespace gamemd {
int sub_682240(int a1, int a2, unsigned short * a3)
{
  unsigned short *v3; // edi
  int v4; // ecx
  unsigned int *v5; // eax
  void **v6; // ecx
  int v7; // esi

  v3 = a3; /*0x682246*/
  a3 = 0; /*0x68224a*/
  v4 = 0; /*0x682252*/
  *v3 = 0; /*0x682254*/
  v5 = &unk_83D658; /*0x682259*/
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
  v6 = (&off_83D65C)[2 * v4]; /*0x6822a0*/
  LABEL_5:
  v7 = (*(int (__stdcall **)(int, void **, unsigned int, int, unsigned int, unsigned short **))(*(unsigned int *)a1 + 16))( /*0x68226f*/
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
        sub_7DC720(-2147467261); /*0x6822b6*/
      v7 = (*(int (__stdcall **)(unsigned short *, unsigned short *, int, unsigned int))(*(unsigned int *)a3 + 12))(a3, v3, 2, 0); /*0x6822ca*/
      if ( v7 < 0 ) /*0x6822ce*/
        break; /*0x6822ce*/
      if ( !*v3 ) /*0x6822d4*/
      {
        if ( a3 ) /*0x6822e1*/
          (*(void (__stdcall **)(unsigned short *))(*(unsigned int *)a3 + 8))(a3); /*0x6822e6*/
        return v7; /*0x6822e6*/
      }
      ++v3; /*0x6822d6*/
    }
  }
  if ( !a3 ) /*0x682291*/
    return v7; /*0x6822e9*/
  (*(void (__stdcall **)(unsigned short *))(*(unsigned int *)a3 + 8))(a3); /*0x682296*/
  return v7; /*0x68229b*/
}
}
// 0x6824B0
namespace gamemd {
int sub_6824B0(int a1, int a2, unsigned int * a3)
{
  unsigned int *v3; // edi
  int v4; // ecx
  unsigned int *v5; // eax
  void **v6; // ecx
  int v7; // esi

  v3 = a3; /*0x6824b6*/
  a3 = 0; /*0x6824ba*/
  v4 = 0; /*0x6824c2*/
  *v3 = 0; /*0x6824c4*/
  v5 = &unk_83D658; /*0x6824ca*/
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
  v6 = (&off_83D65C)[2 * v4]; /*0x682511*/
  LABEL_5:
  v7 = (*(int (__stdcall **)(int, void **, unsigned int, int, unsigned int, unsigned int **))(*(unsigned int *)a1 + 16))( /*0x6824e0*/
         a1,
         v6,
         0,
         16,
         0,
         &a3);
  if ( v7 >= 0 ) /*0x6824fe*/
  {
    if ( !a3 ) /*0x68251c*/
      sub_7DC720(-2147467261); /*0x682523*/
    v7 = (*(int (__stdcall **)(unsigned int *, unsigned int *, int, unsigned int))(*a3 + 12))(a3, v3, 4, 0); /*0x682537*/
    if ( v7 >= 0 ) /*0x68253f*/
    {
      if ( a3 ) /*0x682554*/
        (*(void (__stdcall **)(unsigned int *))(*a3 + 8))(a3); /*0x682559*/
    }
    else if ( a3 ) /*0x682543*/
    {
      goto LABEL_7; /*0x682543*/
    }
  }
  else if ( a3 ) /*0x682502*/
  {
  LABEL_7:
    (*(void (__stdcall **)(unsigned int *))(*a3 + 8))(a3); /*0x682504*/
    return v7; /*0x68250e*/
  }
  return v7; /*0x68250c*/
}
}
// 0x5549A0
namespace gamemd {
AbstractClass * * sub_5549A0()
{
  bool v3; // zf
  bool v5; // zf

  int v1; // edx
  v1 = g_MissionQueueFrame.random[133]; /*0x5549a0*/
  byte_829AE4 = 0; /*0x5549a6*/
  if ( g_MissionQueueFrame.random[133] ) /*0x5549af*/
  {
  unsigned int *v2; // esi
    v2 = (unsigned int *)g_MissionQueueFrame.random[130]; /*0x5549b2*/
    do /*0x5549fc*/
    {
      if ( *v2 ) /*0x5549b8*/
      {
        v2->COMStub_8(*v2, 1); /*0x5549c2*/
        v2 = (unsigned int *)g_MissionQueueFrame.random[130]; /*0x5549c5*/
        v1 = g_MissionQueueFrame.random[133]; /*0x5549cb*/
      }
      v3 = v1 == 0; /*0x5549d1*/
      if ( v1 > 0 ) /*0x5549d3*/
      {
        --v1; /*0x5549d5*/
  int v4; // eax
        v4 = 0; /*0x5549d6*/
        v3 = v1 == 0; /*0x5549d8*/
        g_MissionQueueFrame.random[133] = v1; /*0x5549da*/
        if ( v1 > 0 ) /*0x5549e0*/
        {
          do /*0x5549f8*/
          {
            v2[v4] = v2[v4 + 1]; /*0x5549e6*/
            v1 = g_MissionQueueFrame.random[133]; /*0x5549e9*/
            v2 = (unsigned int *)g_MissionQueueFrame.random[130]; /*0x5549ef*/
            ++v4; /*0x5549f5*/
          }
          while ( v4 < g_MissionQueueFrame.random[133] ); /*0x5549f8*/
          v3 = g_MissionQueueFrame.random[133] == 0; /*0x5549fa*/
        }
      }
    }
    while ( !v3 ); /*0x5549fc*/
  }
  if ( g_MissionQueueFrame.random[145] ) /*0x554a06*/
  {
    do /*0x554a4a*/
    {
      operator delete((void *)(*(void **)g_MissionQueueFrame.random[142])); /*0x554a11*/
      v5 = g_MissionQueueFrame.random[145] == 0; /*0x554a1f*/
      if ( g_MissionQueueFrame.random[145] > 0 ) /*0x554a21*/
      {
  int v6; // eax
        v6 = 0; /*0x554a24*/
        v5 = g_MissionQueueFrame.random[145]-- == 1; /*0x554a26*/
        if ( g_MissionQueueFrame.random[145] > 0 ) /*0x554a2e*/
        {
          do /*0x554a46*/
          {
            ++v6; /*0x554a36*/
            *(unsigned int *)(g_MissionQueueFrame.random[142] + 4 * v6 - 4) = *(unsigned int *)(g_MissionQueueFrame.random[142] /*0x554a3a*/
                                                                                  + 4 * v6);
          }
          while ( v6 < g_MissionQueueFrame.random[145] ); /*0x554a46*/
          v5 = g_MissionQueueFrame.random[145] == 0; /*0x554a48*/
        }
      }
    }
    while ( !v5 ); /*0x554a4a*/
  }
  byte_829AE4 = 1; /*0x554a4c*/
}
}
// 0x660C50
namespace gamemd {
int sub_660C50()
{
  dword_B04D88 = -1; /*0x660c54*/
  dword_B04DD8 = -1; /*0x660c59*/
  memset32(dword_B04D48, dword_B04D68, 8u); /*0x660c6d*/
  return dword_B04D68; /*0x660c6f*/
}
}
// 0x6DA980
namespace gamemd {
void sub_6DA980()
{

  int v0; // ecx
  v0 = g_CraterCreationState; /*0x6da980*/
  while ( g_CraterCreationState > 0 ) /*0x6da988*/
  {
  int v1; // edx
    v1 = 0; /*0x6da98f*/
    g_CraterCreationState = v0 - 1; /*0x6da993*/
    if ( v0 - 1 <= 0 ) /*0x6da999*/
      break; /*0x6da999*/
  int v2; // eax
    v2 = 0; /*0x6da99b*/
    do /*0x6da9bd*/
    {
      ++v1; /*0x6da9a3*/
  char *v3; // esi
      v3 = (char *)g_CraterPool + v2 + 20; /*0x6da9a4*/
  char *v4; // edi
      v4 = (char *)g_CraterPool + v2; /*0x6da9a8*/
      v2 += 20; /*0x6da9b0*/
      memcpy(v4, v3, 0x14u); /*0x6da9b3*/
      v0 = g_CraterCreationState; /*0x6da9b5*/
    }
    while ( v1 < g_CraterCreationState ); /*0x6da9bd*/
  }
}
}
// 0x769E30
namespace gamemd {
int Map_WorldDominationTour_20::Release(int a2, unsigned int * a3)
{

  int m_8; // ebp
  int *v5; // eax
  ComPtr *v6; // esi
  int v7; // ebx
  ComPtr *v8; // ebx
  int v9; // ebx
  int i; // esi
  void (***v12)(unsigned int, int); // ecx
  ComPtr *v13; // [esp+10h] [ebp-4h]

  m_8 = a2; /*0x769e33*/
  if ( !a2 ) /*0x769e3d*/
  {
    (*(void (**)(_VectorClass_V_rc_ptr_VTerritory_WorldDominationTour *))(*(unsigned int *)this->__pad_000 + 12))(this); /*0x769f3d*/
    return 1; /*0x769f43*/
  }
  LOBYTE(this->q00C) = 0; /*0x769e47*/
  if ( a3 ) /*0x769e4d*/
  {
    *a3 = a2; /*0x769e93*/
    v6 = (ComPtr *)(a3 + 1); /*0x769e95*/
    if ( a2 - 1 >= 0 ) /*0x769ea1*/
    {
      v9 = a2; /*0x769ea3*/
      do /*0x769eb7*/
      {
        ComPtr::Constructor(v6); /*0x769ea8*/
        *(unsigned int *)v6->__pad_000 = &vt_rc_ptr; /*0x769ead*/
        v6 = (ComPtr *)((char *)v6 + 8); /*0x769eb3*/
        --v9; /*0x769eb6*/
      }
      while ( v9 ); /*0x769eb7*/
      v6 = (ComPtr *)(a3 + 1); /*0x769eb9*/
    }
  }
  else
  {
    v5 = (int *)__2_YAPAXI_Z(8 * a2 + 4); /*0x769e57*/
    if ( !v5 ) /*0x769e61*/
    {
      v8 = 0; /*0x769e8f*/
      goto LABEL_14; /*0x769e91*/
    }
    *v5 = a2; /*0x769e63*/
    v6 = (ComPtr *)(v5 + 1); /*0x769e65*/
    v13 = (ComPtr *)(v5 + 1); /*0x769e6b*/
    if ( a2 - 1 >= 0 ) /*0x769e71*/
    {
      v7 = a2; /*0x769e73*/
      do /*0x769e87*/
      {
        ComPtr::Constructor(v6); /*0x769e78*/
        *(unsigned int *)v6->__pad_0 = &vt_rc_ptr; /*0x769e7d*/
        v6 = (ComPtr *)((char *)v6 + 8); /*0x769e83*/
        --v7; /*0x769e86*/
      }
      while ( v7 ); /*0x769e87*/
      v6 = v13; /*0x769e89*/
    }
  }
  v8 = v6; /*0x769ebd*/
LABEL_14:
  LOBYTE(this->q00C) = 1; /*0x769ebf*/
  if ( !v8 ) /*0x769ec5*/
    return 0; /*0x769eca*/
  if ( *&this->q004 ) /*0x769ed1*/
  {
    if ( a2 >= this->q008 ) /*0x769edd*/
      m_8 = this->q008; /*0x769edf*/
    for ( i = 0; i < m_8; ++i ) /*0x769ee5*/
      ComPtr::Set(&v8->ComPtr_field_0x08 * i), *(unsigned int *)(*&this->q004 + 8 * i + 4)); /*0x769ef2*/
    if ( BYTE1(this->q00C) ) /*0x769efc*/
    {
      v12 = *(void (****)(unsigned int, int))&this->q004; /*0x769f03*/
      if ( v12 ) /*0x769f08*/
        (**v12)(v12, 3); /*0x769f0e*/
      *&this->q004 = 0; /*0x769f10*/
    }
    m_8 = a2; /*0x769f17*/
  }
  *&this->q004 = v8; /*0x769f26*/
  this->q008 = m_8; /*0x769f29*/
  BYTE1(this->q00C) = a3 == 0; /*0x769f2c*/
  return 1; /*0x769ec7*/

}
}
// 0x76A610
namespace gamemd {
void * Map_WorldDominationTour_20::Constructor_0(rc_ptr_base * Block, char a2, void *a3_1)
{

  if ( (a2 & 2) != 0 ) /*0x76a61b*/
  {
  int v3; // eax
    v3 = *((unsigned int *)this - 1); /*0x76a61d*/
  ComPtr *v4; // ebp
    v4 = (ComPtr *)(this - 1); /*0x76a621*/
  ComPtr *v5; // esi
    v5 = (ComPtr *)(this->__pad_000 + 2) * v3); /*0x76a624*/
  int v6; // eax
    v6 = v3 - 1; /*0x76a627*/
    if ( v6 >= 0 ) /*0x76a628*/
    {
  int v7; // edi
      v7 = v6 + 1; /*0x76a62b*/
      do /*0x76a63f*/
      {
        v5 = (ComPtr *)((char *)v5 - 8); /*0x76a62e*/
        *(unsigned int *)v5->__pad_000 = &vt_rc_ptr; /*0x76a633*/
        ComPtr::Release(v5); /*0x76a639*/
        --v7; /*0x76a63e*/
      }
      while ( v7 ); /*0x76a63f*/
    }
    if ( (a2 & 1) != 0 ) /*0x76a645*/
      operator delete((void *)(v4)); /*0x76a648*/
    return v4; /*0x76a650*/
  }
  else
  {
    *this = (Map_WorldDominationTour)&vt_rc_ptr; /*0x76a65a*/
    ComPtr::Release(); /*0x76a660*/
    if ( (a2 & 1) != 0 ) /*0x76a668*/
      operator delete((void *)(this)); /*0x76a66b*/
    return (ComPtr *)this; /*0x76a673*/
  }
}
}
// 0x76A3F0
namespace gamemd {
AbstractClass * * Map_WorldDominationTour_43::Release(int a2, char * a3)
{


  int v3; // ebp
  v3 = a2; /*0x76a3f2*/
  if ( a2 ) /*0x76a3fe*/
  {
  char *v5; // edi
    v5 = a3; /*0x76a404*/
    LOBYTE(this->q00C) = 0; /*0x76a408*/
    if ( a3 ) /*0x76a40d*/
    {
      if ( a2 - 1 >= 0 ) /*0x76a449*/
      {
  char *v9; // eax
        v9 = a3 + 8; /*0x76a44b*/
  int v10; // ecx
        v10 = a2; /*0x76a44e*/
        do /*0x76a45b*/
        {
          *((unsigned int *)v9 - 2) = 0; /*0x76a44f*/
          *((unsigned int *)v9 - 1) = 0; /*0x76a452*/
          *(unsigned int *)v9 = 0; /*0x76a455*/
          v9 += 12; /*0x76a457*/
          --v10; /*0x76a45a*/
        }
        while ( v10 ); /*0x76a45b*/
      }
    }
    else
    {
  int v6; // eax
      v6 = __2_YAPAXI_Z(12 * a2); /*0x76a417*/
      if ( v6 ) /*0x76a421*/
      {
        if ( a2 - 1 >= 0 ) /*0x76a428*/
        {
  unsigned int *v7; // ecx
          v7 = &v6->vtable3; /*0x76a42a*/
  int v8; // edx
          v8 = a2; /*0x76a42d*/
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
        v5 = (char *)v6; /*0x76a43c*/
      }
      else
      {
        v5 = 0; /*0x76a440*/
      }
    }
    LOBYTE(this->q00C) = 1; /*0x76a45f*/
    if ( v5 ) /*0x76a463*/
    {
      if ( *&this->q004 ) /*0x76a46e*/
      {
  int m_8; // ecx
        m_8 = this->q008; /*0x76a473*/
        if ( a2 < m_8 ) /*0x76a478*/
          m_8 = a2; /*0x76a47a*/
        if ( m_8 > 0 ) /*0x76a47e*/
        {
  int v13; // eax
          v13 = 0; /*0x76a480*/
          do /*0x76a4a0*/
          {
  unsigned int *v14; // edx
            v14 = (unsigned int *)(*&this->q004 + v13); /*0x76a487*/
  char *v15; // ebx
            v15 = &v5[v13]; /*0x76a489*/
            v13 += 12; /*0x76a48c*/
            --m_8; /*0x76a48f*/
            *(unsigned int *)v15 = *v14; /*0x76a492*/
            *((unsigned int *)v15 + 1) = v14[1]; /*0x76a497*/
            *((unsigned int *)v15 + 2) = v14[2]; /*0x76a49d*/
          }
          while ( m_8 ); /*0x76a4a0*/
          v3 = a2; /*0x76a4a2*/
        }
        if ( BYTE1(this->q00C) ) /*0x76a4a8*/
        {
          __3_YAXPAX_Z(*&this->q004); /*0x76a4b1*/
          *&this->q004 = 0; /*0x76a4b9*/
        }
      }
      *&this->q004 = v5; /*0x76a4c4*/
      this->q008 = v3; /*0x76a4ca*/
      BYTE1(this->q00C) = a3 == 0; /*0x76a4cd*/
      return 1; /*0x76a4d3*/
    }
    else
    {
      return 0; /*0x76a468*/
    }
  }
  else
  {
    (*(void (**)(_VectorClass_VCentroid_WorldDominationTour *))(*(unsigned int *)this->__pad_000 + 12))(this); /*0x76a4dd*/
    return 1; /*0x76a4e3*/
  }

}
}
// 0x535BE0
namespace gamemd {  // G42.18c ns repair
unsigned int Map::IsCellFlag(int a1)
{
  return (~(unsigned int)a1 >> 11) & 1; /*0x535bec*/
}
}  // G42.18c ns repair
// 0x578D80
namespace gamemd {
bool sub_578D80(int a1, unsigned int a2)
{
  if ( a1 >= g_TerrainBuildConfig && a1 < g_TerrainBuildConfig + 40 ) /*0x578d8f*/
    return 1; /*0x578d94*/
  if ( a1 >= dword_AA073C && a1 < dword_AA073C + 4 ) /*0x578da3*/
  {
    if ( a1 == dword_AA073C || a1 == dword_AA073C + 3 ) /*0x578dae*/
      return a2 && a2 != 4; /*0x578dbf*/
    return 1; /*0x578e56*/
  }
  if ( a1 >= dword_ABB110 && a1 < dword_ABB110 + 4 ) /*0x578dd7*/
  {
    if ( a1 == dword_ABB110 || a1 == dword_ABB110 + 3 ) /*0x578de2*/
      return a2 != 1 && a2 != 3; /*0x578dec*/
    return 1; /*0x578de2*/
  }
  if ( a1 >= dword_AA1050 && a1 < dword_AA1050 + 4 ) /*0x578e00*/
  {
    if ( a1 == dword_AA1050 || a1 == dword_AA1050 + 3 ) /*0x578e0b*/
      return a2 >= 2; /*0x578e0f*/
    return 1; /*0x578e0b*/
  }
  if ( a1 >= dword_AA10A0 && a1 < dword_AA10A0 + 4 ) /*0x578e28*/
  {
    if ( a1 == dword_AA10A0 || a1 == dword_AA10A0 + 3 ) /*0x578e33*/
      return a2 != 2 && a2 != 3; /*0x578e3d*/
    return 1; /*0x578e33*/
  }
  return a1 >= dword_ABBEBC && a1 < dword_ABBEBC + 20; /*0x578d93*/
}
} // namespace gamemd

// 0x58BB00
namespace gamemd {
unsigned int * sub_58BB00(unsigned int * a1, int a2)
{

  unsigned int *result; // eax
  result = a1; /*0x58bb02*/
  if ( a2 < 0 || a2 >= dword_ABED0C ) /*0x58bb0c*/
  {
    *a1 = 0; /*0x58bb26*/
    a1[1] = 0; /*0x58bb28*/
  }
  else
  {
    *a1 = dword_ABE328[2 * a2]; /*0x58bb15*/
    a1[1] = dword_ABE32C[2 * a2]; /*0x58bb1e*/
  }
  return result; /*0x58bb21*/
}
} // namespace gamemd

// 0x58CE90
namespace gamemd {
void sub_58CE90()
{

  if ( g_MissionQueueFrame.localVariables[163] ) /*0x58ce9d*/
  {
  int v1; // ecx
    v1 = g_MapCellWidth * g_MapCellWidth; /*0x58cea5*/
    if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x58ceaa*/
    {
  int v2; // eax
      v2 = 0; /*0x58ceac*/
      do /*0x58cec9*/
      {
        *(unsigned int *)(v2 + g_MissionQueueFrame.localVariables[163] + 56) = -1; /*0x58ceb7*/
        *(unsigned int *)(v2 + g_MissionQueueFrame.localVariables[163] + 60) = -1; /*0x58cec1*/
        v2 += 80; /*0x58cec5*/
        --v1; /*0x58cec8*/
      }
      while ( v1 ); /*0x58cec9*/
    }
  }
  int i; // edi
  for ( i = g_MissionQueueFrame.briefing[342] - 1; i >= 0; --i ) /*0x58ced5*/
  {
  unsigned int *v4; // esi
    v4 = *(unsigned int **)(g_MissionQueueFrame.briefing[339] + 4 * i); /*0x58cee1*/
    if ( v4 ) /*0x58cee6*/
    {
      if ( *v4 ) /*0x58ceec*/
      {
        (**(void (__thiscall ***)(unsigned int, int))*v4)(*v4, 1); /*0x58cef6*/
        *v4 = 0; /*0x58cef8*/
      }
  unsigned int *v7; // [esp+Ch] [ebp-4h] BYREF
      v7 = v4; /*0x58cf0a*/
  int v5; // eax
      v5 = g_MissionQueueFrame.vt_slot_16(/*0x58cf0e*/
             &g_MissionQueueFrame.briefing[338], &v7);
      if ( v5 != -1 && v5 < g_MissionQueueFrame.briefing[342] ) /*0x58cf1e*/
      {
        --g_MissionQueueFrame.briefing[342]; /*0x58cf23*/
        for ( ; /*0x58cf29*/
              v5 < g_MissionQueueFrame.briefing[342];
              *(unsigned int *)(g_MissionQueueFrame.briefing[339] + 4 * v5 - 4) = *(unsigned int *)(g_MissionQueueFrame.briefing[339]
                                                                                      + 4 * v5) )
        {
          ++v5; /*0x58cf31*/
        }
      }
  void *v6; // eax
      v6 = (void *)v4[11]; /*0x58cf43*/
      v4[10] = &vt_VectorClass; /*0x58cf46*/
      if ( v6 && *((unsigned char *)v4 + 53) ) /*0x58cf51*/
      {
        operator delete((void *)(v6)); /*0x58cf57*/
        v4[11] = 0; /*0x58cf5f*/
      }
      *((unsigned char *)v4 + 53) = 0; /*0x58cf63*/
      v4[12] = 0; /*0x58cf66*/
      operator delete((void *)(v4)); /*0x58cf69*/
    }
  }
  g_MissionQueueFrame.localVariables[164] = 0; /*0x58cf79*/
}
} // namespace gamemd

// 0x58D010
namespace gamemd {
int sub_58D010(char a1)
{

  int result; // eax
  result = g_MapCellWidth * g_MapCellWidth; /*0x58d016*/
  if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x58d01d*/
  {
  int v3; // esi
    v3 = 0; /*0x58d021*/
  int v4; // edi
    v4 = g_MapCellWidth * g_MapCellWidth; /*0x58d023*/
    do /*0x58d05c*/
    {
      result = (int)dword_ABED10 + v3; /*0x58d02a*/
      if ( *(unsigned int *)((char *)dword_ABED10 + v3 + 56) == -1 && (*(unsigned short *)result || result->__pad_008) ) /*0x58d038*/
      {
  void *v5; // eax
        v5 = ((CellCoord *)(&dword_87F7E8))->To_CellObj((int16_t *)((char *)dword_ABED10 + v3)); /*0x58d045*/
        result = RandomMap::GenerateTerrain((int)v5); /*0x58d04c*/
        if ( result ) /*0x58d053*/
          result->__pad_01A = a1; /*0x58d055*/
      }
      v3 += 80; /*0x58d058*/
      --v4; /*0x58d05b*/
    }
    while ( v4 ); /*0x58d05c*/
  }
  return result; /*0x58d060*/
}
} // namespace gamemd

// 0x59B940
namespace gamemd {
double Map_Helper_59B940(MapResourceClass * aP0, short * a1, MapResourceClass * aP2, MapResourceClass * aP3, float a5, MapResourceClass * aP5)
{

  if ( *aP2 == dword_ABE2F0 && aP2[1] == dword_ABE2F4 && aP2[2] == dword_ABE2F8 && aP2[3] == dword_ABE2FC ) /*0x59b979*/
  {
  int v18; // eax
    v18 = *aP0 - *a1; /*0x59ba7b*/
  int v19; // edx
    v19 = aP0[1] - a1[1]; /*0x59ba7d*/
    return Math::Sqrt((double)(v18 * v18 + v19 * v19)); /*0x59ba94*/
  }
  else
  {
  int v7; // ebp
    v7 = aP3[1]; /*0x59b989*/
  int v8; // ebx
    v8 = *a1; /*0x59b990*/
  int v9; // edi
    v9 = a1[1]; /*0x59b993*/
  int v22; // [esp+20h] [ebp+8h]
    v22 = *aP3; /*0x59b997*/
  unsigned int v10; // ecx
    v10 = abs32(((v8 - v9) >> 1) - ((v22 - v7) >> 1)); /*0x59b9b1*/
  int v23; // [esp+24h] [ebp+Ch]
    v23 = v10; /*0x59b9c0*/
  int64_t v11; // rax
    v11 = ((v8 + v9) >> 1) - ((v7 + v22) >> 1); /*0x59b9c4*/
  int v12; // eax
    v12 = ((*(((unsigned int *)&(v11)) + 1)) ^ v11) - (*(((unsigned int *)&(v11)) + 1)); /*0x59b9c8*/
  int v24; // [esp+28h] [ebp+10h]
    v24 = v12; /*0x59b9cc*/
    if ( v10 || v12 ) /*0x59b9d4*/
    {
  double v14; // st7
      v14 = Math::Sqrt((double)(int)(v10 * v10 + v12 * v12)); /*0x59b9fe*/
  signed int v15; // ecx
      v15 = abs32(aP0[1] - a1[1]); /*0x59ba29*/
  int64_t v16; // rax
      v16 = *aP0 - *a1; /*0x59ba2b*/
  int v21; // [esp+1Ch] [ebp+4h]
      v21 = ((*(((unsigned int *)&(v16)) + 1)) ^ v16) - (*(((unsigned int *)&(v16)) + 1)); /*0x59ba32*/
  double v20; // [esp+10h] [ebp-8h]
      v20 = (double)v23 / v14; /*0x59ba36*/
  double v17; // st7
      v17 = (double)v24 / v14; /*0x59ba3a*/
      if ( v21 <= v15 ) /*0x59ba3e*/
        v21 = v15; /*0x59ba40*/
      return (v17 * aP5 + a5 * v20) * (double)v21; /*0x59ba58*/
    }
    else
    {
      return 0.0; /*0x59b9d6*/
    }
  }
}
}
// 0x5BF580
namespace gamemd {
char sub_5BF580()
{

  char result; // al
  result = byte_ABF35C; /*0x5bf580*/
  if ( !byte_ABF35C ) /*0x5bf587*/
  {
    AudioFrame::CounterInc(); /*0x5bf589*/
    AudioQueue::IncrementPriority(); /*0x5bf58e*/
    AudioQueue::ReleaseBuffers(); /*0x5bf593*/
    RequestBufferMixer((unsigned int *)g_MixerState, 0x2000); /*0x5bf5a3*/
    result = RequestBufferMixer((unsigned int *)g_MixerChannel_Ambient, 0x2000); /*0x5bf5b3*/
    byte_ABF35C = 1; /*0x5bf5b8*/
  }
  return result; /*0x5bf5bf*/
}
} // namespace gamemd

// 0x5C9720
namespace gamemd {
void sub_5C9720(int a1, int a2, int a3)
{

  Game::LoadMultiplayerScoreAssets(dword_A8B230[374].NeedsSaveOrLink); /*0x5c972e*/
  int64_t v5; // [esp+8h] [ebp-8h]
  v5 = *(unsigned long long *)&g_DisplayWidth; /*0x5c973f*/
  int v3; // [esp+0h] [ebp-10h] BYREF
  v3 = 0; /*0x5c9751*/
  int v4; // [esp+4h] [ebp-Ch]
  v4 = 0; /*0x5c9759*/
  Map_Load_72EAD0((int *)g_DSurface_Hidden, &v3); /*0x5c9761*/
  Frame::Present(g_DSurface_Hidden, a1, a2, a3, 0, v3, v4, (int *)v5); /*0x5c9770*/
  Campaign::Screen(0); /*0x5c9781*/
  Map_Load_72EAD0((int *)g_DSurface_Hidden, &v3); /*0x5c9790*/
  Frame::Present(g_DSurface_Hidden, a1, a2, a3, 0, v3, v4, (int *)v5); /*0x5c979f*/
  Map_Init_72D780(); /*0x5c97a4*/
}
} // namespace gamemd

// 0x5DB650
namespace gamemd {
char sub_5DB650(int a1, char a2, char a3)
{

  HWND v5; // eax
  v5 = (HWND)Dialog::FindByHandle((void *)0xBC); /*0x5db65b*/
  return Map_Handle_5EC880(v5, a1, a2, a3); /*0x5db66f*/
}
} // namespace gamemd

// 0x5FBF70
namespace gamemd {
int E4Recv_5FBF70::sub_5FBF70()
{

  return (int)this->vtable3; /*0x5fbf73*/

}
} // namespace gamemd

// 0x65FDD0
namespace gamemd {
int sub_65FDD0()
{

  int result; // eax
  result = dword_B04DB8; /*0x65fdd0*/
  int i; // esi
  for ( i = 0; i < dword_B04DB8; ++i ) /*0x65fdda*/
  {
    Map_Helper_65FE00(*((unsigned char **)dword_B04DAC + i)); /*0x65fde4*/
    result = dword_B04DB8; /*0x65fde9*/
  }
  return result; /*0x65fdf3*/
}
} // namespace gamemd

// 0x660B00
namespace gamemd {
void sub_660B00()
{

  int i; // edi
  for ( i = g_TriggerEventState - 1; i >= 0; --i ) /*0x660b0c*/
  {
  void *v2; // esi
    v2 = *(void **)(g_TriggerPool + 4 * i); /*0x660b15*/
    if ( v2 ) /*0x660b1a*/
    {
  int v4; // [esp+4h] [ebp-4h] BYREF
      v4 = *(unsigned int *)(g_TriggerPool + 4 * i); /*0x660b2b*/
  int v3; // eax
      v3 = stru_B04DA8.vt_slot_16(&v4); /*0x660b2f*/
      if ( v3 != -1 && v3 < g_TriggerEventState ) /*0x660b3f*/
      {
        --g_TriggerEventState; /*0x660b44*/
        for ( ; /*0x660b4a*/
              v3 < g_TriggerEventState;
              *(unsigned int *)(g_TriggerPool + 4 * v3 - 4) = *(unsigned int *)(g_TriggerPool
                                                                                    + 4 * v3) )
        {
          ++v3; /*0x660b52*/
        }
      }
      operator delete((void *)(v2)); /*0x660b65*/
    }
  }
}
} // namespace gamemd

// 0x661530
namespace gamemd {
int sub_661530(unsigned char * a1, unsigned char * a2, int a3)
{

  int v5; // edi
  v5 = a3; /*0x66153a*/
  int result; // eax
  result = 0; /*0x66153e*/
  while ( v5 > 0 ) /*0x661542*/
  {
    if ( *a1 ) /*0x661545*/
    {
      if ( a2 ) /*0x66157d*/
        *a2++ = *a1; /*0x66157f*/
      ++a1; /*0x661582*/
      ++result; /*0x661583*/
      --v5; /*0x661584*/
    }
    else
    {
  int v7; // ecx
      v7 = 0; /*0x66154b*/
      do /*0x661558*/
      {
        if ( v7 > v5 ) /*0x66154f*/
          break; /*0x66154f*/
      }
      while ( !a1[++v7] ); /*0x661558*/
      if ( v7 >= 255 ) /*0x661560*/
        v7 = 255; /*0x661562*/
      if ( a2 ) /*0x661569*/
      {
        *a2 = 0; /*0x66156b*/
  unsigned char *v9; // esi
        v9 = a2 + 1; /*0x66156e*/
        *v9 = v7; /*0x66156f*/
        a2 = v9 + 1; /*0x661571*/
      }
      result += 2; /*0x661572*/
      a1 += v7; /*0x661575*/
      v5 -= v7; /*0x661577*/
    }
  }
  return result; /*0x66158a*/
}
} // namespace gamemd

// 0x661590
namespace gamemd {
int sub_661590(unsigned char * a1, int a2, int a3)
{

  if ( !a2 ) /*0x661597*/
    return Map_Append_661530(a1, 0, a3) + 2; /*0x6615c7*/
  int result; // eax
  result = Map_Append_661530(a1, (unsigned char *)(a2 + 2), a3) + 2; /*0x6615ac*/
  *(unsigned short *)a2 = result; /*0x6615af*/
  return result; /*0x6615b2*/
}
} // namespace gamemd

// 0x6822F0
namespace gamemd {
int sub_6822F0(int a1, int a2, LPSTR lpMultiByteStr)
{
  LPCWCH lpWideCharStr; // [esp+28h] [ebp-8h]

  LPSTR v3; // edi
  v3 = lpMultiByteStr; /*0x6822f9*/
  lpMultiByteStr = 0; /*0x682301*/
  *v3 = 0; /*0x68230a*/
  int v4; // esi
  v4 = (*(int (__stdcall **)(int, void *, int, LPSTR *))(*(unsigned int *)a1 + 16))(a1, &unk_7F7D10, 18, &lpMultiByteStr); /*0x68231a*/
  if ( v4 >= 0 ) /*0x68231e*/
  {
  unsigned int v6[2]; // [esp+18h] [ebp-18h] BYREF
    v6[0] = 1; /*0x682346*/
    v6[1] = a2; /*0x68234e*/
    if ( !lpMultiByteStr ) /*0x682352*/
      sub_7DC720(-2147467261); /*0x682359*/
  unsigned short v7[4]; // [esp+20h] [ebp-10h] BYREF
    v4 = (*(int (__stdcall **)(LPSTR, int, unsigned int *, unsigned short *))(*(unsigned int *)lpMultiByteStr + 12))( /*0x682374*/
           lpMultiByteStr,
           1,
           v6,
           v7);
    if ( v4 >= 0 ) /*0x682378*/
    {
      if ( v7[0] == 31 ) /*0x682398*/
        WideCharToMultiByte(0, 0, lpWideCharStr, -1, v3, 128, 0, 0); /*0x6823af*/
      if ( lpMultiByteStr ) /*0x6823bb*/
        (*(void (__stdcall **)(LPSTR))(*(unsigned int *)lpMultiByteStr + 8))(lpMultiByteStr); /*0x6823c0*/
    }
    else if ( lpMultiByteStr ) /*0x682380*/
    {
      (*(void (__stdcall **)(LPSTR))(*(unsigned int *)lpMultiByteStr + 8))(lpMultiByteStr); /*0x682385*/
      return v4; /*0x68238f*/
    }
  }
  else if ( lpMultiByteStr ) /*0x682326*/
  {
    (*(void (__stdcall **)(LPSTR))(*(unsigned int *)lpMultiByteStr + 8))(lpMultiByteStr); /*0x68232f*/
    return v4; /*0x682339*/
  }
  return v4; /*0x682334*/
}
} // namespace gamemd

// 0x6823D0
namespace gamemd {
int sub_6823D0(int a1, int a2, wchar_t * Destination)
{

  wchar_t *v3; // edi
  v3 = Destination; /*0x6823d9*/
  Destination = 0; /*0x6823e1*/
  *v3 = 0; /*0x6823ea*/
  int v4; // esi
  v4 = (*(int (__stdcall **)(int, void *, int, wchar_t **))(*(unsigned int *)a1 + 16))(a1, &unk_7F7D10, 18, &Destination); /*0x6823fc*/
  if ( v4 >= 0 ) /*0x682400*/
  {
  unsigned int v6[2]; // [esp+18h] [ebp-18h] BYREF
    v6[0] = 1; /*0x682428*/
    v6[1] = a2; /*0x682430*/
    if ( !Destination ) /*0x682434*/
      sub_7DC720(-2147467261); /*0x68243b*/
  unsigned short v7[4]; // [esp+20h] [ebp-10h] BYREF
    v4 = (*(int (__stdcall **)(wchar_t *, int, unsigned int *, unsigned short *))(*(unsigned int *)Destination + 12))(Destination, 1, v6, v7); /*0x682456*/
    if ( v4 >= 0 ) /*0x68245a*/
    {
  wchar_t *Source; // [esp+28h] [ebp-8h]
      if ( v7[0] == 31 ) /*0x68247a*/
        wcsncpy(v3, Source, 0x80u); /*0x682487*/
      if ( Destination ) /*0x682495*/
        (*(void (__stdcall **)(wchar_t *))(*(unsigned int *)Destination + 8))(Destination); /*0x68249a*/
    }
    else if ( Destination ) /*0x682462*/
    {
      (*(void (__stdcall **)(wchar_t *))(*(unsigned int *)Destination + 8))(Destination); /*0x682467*/
      return v4; /*0x682471*/
    }
  }
  else if ( Destination ) /*0x682408*/
  {
    (*(void (__stdcall **)(wchar_t *))(*(unsigned int *)Destination + 8))(Destination); /*0x682411*/
    return v4; /*0x68241b*/
  }
  return v4; /*0x682416*/
}
} // namespace gamemd

// 0x6C8E80
namespace gamemd {
void sub_6C8E80(int a1, int a2, int a3)
{

  CampaignScore::LoadCampaignScoreAssetsGame(dword_A8B230[374].NeedsSaveOrLink); /*0x6c8e8e*/
  int64_t v5; // [esp+8h] [ebp-8h]
  v5 = *(unsigned long long *)&g_DisplayWidth; /*0x6c8e9f*/
  int v3; // [esp+0h] [ebp-10h] BYREF
  v3 = 0; /*0x6c8eb1*/
  int v4; // [esp+4h] [ebp-Ch]
  v4 = 0; /*0x6c8eb9*/
  Map_Load_72E9F0((int *)g_DSurface_Hidden, &v3); /*0x6c8ec1*/
  Frame::Present(g_DSurface_Hidden, a1, a2, a3, 0, v3, v4, (int *)v5); /*0x6c8ed0*/
  Campaign::Screen(0); /*0x6c8ee1*/
  Map_Load_72E9F0((int *)g_DSurface_Hidden, &v3); /*0x6c8ef0*/
  Frame::Present(g_DSurface_Hidden, a1, a2, a3, 0, v3, v4, (int *)v5); /*0x6c8eff*/
  FileSystem::CleanupTrees(); /*0x6c8f04*/
}
} // namespace gamemd

// 0x6E5570
namespace gamemd {
int sub_6E5570()
{

  int result; // eax
  for ( result = g_GameObjectCleanup; g_GameObjectCleanup > 0; result = g_GameObjectCleanup ) /*0x6e5577*/
  {
    if ( *(unsigned int *)g_TagClassCount ) /*0x6e557e*/
      (*(void (__thiscall **)(unsigned int, int))(**(unsigned int **)g_TagClassCount + 32))(*(unsigned int *)g_TagClassCount, 1); /*0x6e5588*/
  }
  return result; /*0x6e5594*/
}
} // namespace gamemd

// 0x72B380
namespace gamemd {
int sub_72B380()
{
  return dword_B0FB90; /*0x72b385*/
}
} // namespace gamemd

// 0x72D780
namespace gamemd {
void sub_72D780()
{

  if ( DataGlobal_B0FBB8 ) /*0x72d78a*/
  {
    DataGlobal_B0FBB8 = 0; /*0x72d791*/
    if ( DataGlobal_B0FC7D ) /*0x72d799*/
    {
  void *v1; // esi
      v1 = *(void **)&DataGlobal_B0FB1C; /*0x72d79c*/
      if ( *(unsigned int *)&DataGlobal_B0FB1C ) /*0x72d7a4*/
      {
        FileTreeNode::Destroy(*(FileTreeNode **)&DataGlobal_B0FB1C); /*0x72d7a8*/
        operator delete((void *)(v1)); /*0x72d7ae*/
      }
      DataGlobal_B0FC7D = 0; /*0x72d7b6*/
    }
    *(unsigned int *)&DataGlobal_B0FB1C = 0; /*0x72d7c2*/
    if ( *(unsigned int *)&DataGlobal_B0FBB0 ) /*0x72d7ca*/
    {
      operator delete((void *)(*(void **)&DataGlobal_B0FBB0)); /*0x72d7cd*/
      *(unsigned int *)&DataGlobal_B0FBB0 = 0; /*0x72d7d5*/
    }
    if ( *(unsigned int *)&DataGlobal_B0FBB4 ) /*0x72d7e3*/
    {
      (***(void (__thiscall ****)(unsigned int, int))&DataGlobal_B0FBB4)( /*0x72d7e9*/
        *(unsigned int *)&DataGlobal_B0FBB4,
        1);
      *(unsigned int *)&DataGlobal_B0FBB4 = 0; /*0x72d7eb*/
    }
  }
}
} // namespace gamemd

// 0x72E9F0
namespace gamemd {
void Map_Load_72E9F0(ConvertClass * a1, int * a2)
{

  DrawScoreScreenStats(a1, (int)a2); /*0x72e9f9*/
  RenderScoreScreen(a1, a2, 0); /*0x72ea04*/
  int v4; // [esp+8h] [ebp-8h] BYREF
  v4 = 0; /*0x72ea0e*/
  int v5; // [esp+Ch] [ebp-4h]
  v5 = 0; /*0x72ea16*/
  v4 = *(unsigned int *)dword_B0FC1C; /*0x72ea20*/
  v5 = *((unsigned int *)dword_B0FC1C + 1); /*0x72ea4a*/
  DrawToSurfaceSHP((int)a1, dword_B0FBA8, (int)dword_B0FB34, 0, &v4, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72ea57*/
}
} // namespace gamemd

// 0x72EAD0
namespace gamemd {
void Map_Load_72EAD0(ConvertClass * a1, int * a2)
{

  DrawScoreScreenStats(a1, (int)a2); /*0x72ead9*/
  RenderScoreScreen(a1, a2, 0); /*0x72eae4*/
  int v4; // [esp+8h] [ebp-8h] BYREF
  v4 = 0; /*0x72eaee*/
  int v5; // [esp+Ch] [ebp-4h]
  v5 = 0; /*0x72eaf6*/
  v4 = *(unsigned int *)dword_B0FC1C; /*0x72eb00*/
  v5 = *((unsigned int *)dword_B0FC1C + 1); /*0x72eb2a*/
  DrawToSurfaceSHP((int)a1, dword_B0FBB4, (int)dword_B0FB1C, 0, &v4, a2, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x72eb37*/
}
} // namespace gamemd

// 0x731CB0
namespace gamemd {
int sub_731CB0()
{
  return 71; /*0x731cb5*/
}
} // namespace gamemd

// 0x731CC0
namespace gamemd {
int sub_731CC0()
{
  return 22; /*0x731cc5*/
}
} // namespace gamemd

// 0x734210
namespace gamemd {
DWORD sub_734210()
{

  DWORD Time; // eax
  Time = timeGetTime(); /*0x734217*/
  dword_845554 = -1; /*0x73421e*/
  dword_845550 = Time - 1601; /*0x734228*/
  DWORD result; // eax
  result = timeGetTime() - 1601; /*0x73422f*/
  dword_84555C = -100; /*0x734234*/
  dword_845558 = result; /*0x73423e*/
  return result; /*0x734243*/
}
} // namespace gamemd

// 0x734FD0
namespace gamemd {
TechnoTypeClass * Map_Create_734FD0()
{
  return dword_B1CF80; /*0x734fd5*/
}
} // namespace gamemd

// 0x74E880
namespace gamemd {
void sub_74E880()
{
  if ( dword_B1D2F0 ) /*0x74e887*/
  {
    operator delete((void *)(dword_B1D2F0)); /*0x74e88a*/
    dword_B1D2F0 = 0; /*0x74e892*/
  }
}
} // namespace gamemd

// 0x753570
namespace gamemd {
int sub_753570()
{
  return ++dword_B1D3D8; /*0x75357b*/
}
} // namespace gamemd

// 0x769CA0
namespace gamemd {
unsigned int * Map_WorldDominationTour_20::Seek(unsigned int * a2, int a3, void *a3_2)
{

  int v3; // edi
  v3 = *&a3_2->u32_4 + 8 * a3_2; /*0x769cad*/
  ComPtr::Constructor((ComPtr *)a3_2); /*0x769cb2*/
  *a3_2 = &vt_rc_ptr; /*0x769cb7*/
  ComPtr::Set((ComPtr *)a3_2, v3->u32_4); /*0x769cc3*/
  return a3_2; /*0x769cca*/
}
} // namespace gamemd

// 0x769D20
namespace gamemd {
int Map_WorldDominationTour_28::Seek(int a2, void *a2_2, void *a3_1)
{

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x769d2a*/

}
// 0x769D30
namespace gamemd {
}
}
// 0x769D60
namespace gamemd {
int Map_WorldDominationTour_38::AddRef(void *a1_1)
{

  return *((unsigned int *)a1_1 + 2) < *(unsigned int *)(*(unsigned int *)&a1_1->m_1[3] + 8); /*0x769d6d*/

}
}
// 0x769D70
namespace gamemd {
unsigned int * sub_769D70(unsigned int * a1, int a2)
{
  a1[1] = a2; /*0x769d72*/
  a1[2] = 0; /*0x769d75*/
  *a1 = &vt_VectorCursorTRectVectorClassTRect; /*0x769d7c*/
  return a1; /*0x769d82*/
}
} // namespace gamemd

// 0x769DC0
namespace gamemd {
VectorCursor * Map_WorldDominationTour_20::Constructor(unsigned int * Block, char a2, void *a3_1, void *a4)
{

  *(unsigned int *)Block->tail_0 = &vt_VectorCursorTRectVectorClassTRect; /*0x769dc9*/
  if ( (a2 & 1) != 0 ) /*0x769dcf*/
    __3_YAXPAX_Z(Block); /*0x769dd2*/
  return Block->__pad_0; /*0x769ddc*/

}
} // namespace gamemd

// 0x769DE0
namespace gamemd {
char Map_WorldDominationTour_20::AddRef(int a2)
{


  int m_8; // esi
  m_8 = this->Capacity; /*0x769de6*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x769def*/
  {
  int v3; // edx
    v3 = 0; /*0x769df1*/
    if ( m_8 <= 0 ) /*0x769df5*/
      return 1; /*0x769e1b*/
  unsigned int *v4; // ecx
    v4 = (unsigned int *)(*&this->Items + 4); /*0x769dfd*/
  unsigned int *i; // eax
    for ( i = (unsigned int *)(*(unsigned int *)(a2 + 4) + 4); *v4 == *i; i += 2 ) /*0x769e00*/
    {
      ++v3; /*0x769e0b*/
      v4 += 2; /*0x769e0f*/
      if ( v3 >= m_8 ) /*0x769e14*/
        return 1; /*0x769e14*/
    }
  }
  return 0; /*0x769e16*/

}
} // namespace gamemd

// 0x769F50
namespace gamemd {
int Map_WorldDominationTour_20::ddtor(void *a1_1)
{
  int (__thiscall ***v2)(unsigned int, int); // ecx
  int result; // eax

  v2 = *(int (__thiscall ****)(unsigned int, int))&a1_1->q004; /*0x769f56*/
  if ( v2 && (((unsigned char *)&(*(unsigned int *)&a1_1->IsAllocated))[1]) ) /*0x769f5d*/
  {
    result = (**v2)(v2, 3); /*0x769f6a*/
    *(unsigned int *)&a1_1->q004 = 0; /*0x769f6c*/
  }
  (((unsigned char *)&(a1_1->q00C))[1]) = 0; /*0x769f6f*/
  a1_1->q008 = 0; /*0x769f72*/
  return result; /*0x769f75*/
}
} // namespace gamemd

// 0x769F80
namespace gamemd {
int Map_WorldDominationTour_20::Read(int a2, void *a2_2, void *a3)
{

  if ( !(*((unsigned char *)&(a2_2->q00C))) ) /*0x769f80*/
    return 0; /*0x769f88*/
  int m_8; // edx
  m_8 = a2_2->q008; /*0x769f8e*/
  int result; // eax
  result = 0; /*0x769f91*/
  if ( m_8 <= 0 ) /*0x769f95*/
    return -1; /*0x769fb0*/
  unsigned int *i; // ecx
  for ( i = (unsigned int *)(*(unsigned int *)&a2_2->q004 + 4); *i != *(unsigned int *)(a2_2 + 4); i += 2 ) /*0x769f9e*/
  {
    if ( ++result >= m_8 ) /*0x769fae*/
      return -1; /*0x769fae*/
  }
  return result; /*0x769f8a*/
}
}
// 0x769FC0
namespace gamemd {
unsigned int Map_WorldDominationTour_20::Write(int a2)
{

  if ( LOBYTE(this->IsInitialized) ) /*0x769fc0*/
    return (unsigned int)(a2 - *&this->Items) >> 3; /*0x769fd5*/
  else
    return 0; /*0x769fc7*/

}
} // namespace gamemd

// 0x76A130
namespace gamemd {
} // namespace gamemd

// 0x76A170
namespace gamemd {
} // namespace gamemd

// 0x76A220
namespace gamemd {
} // namespace gamemd

// 0x76A250
namespace gamemd {
int Map_WorldDominationTour_28::Read(unsigned int * a2, void *a2_2, void *a3)
{


  if ( !LOBYTE(a2_2->m_C) ) /*0x76a250*/
    return 0; /*0x76a258*/
  int m_8; // edx
  m_8 = a2_2->m_8; /*0x76a25e*/
  int result; // eax
  result = 0; /*0x76a261*/
  if ( m_8 <= 0 ) /*0x76a265*/
    return -1; /*0x76a27c*/
  unsigned int *i; // ecx
  for ( i = *(unsigned int **)&a2_2->m_1[3]; *i != *a2_2; ++i ) /*0x76a26b*/
  {
    if ( ++result >= m_8 ) /*0x76a27a*/
      return -1; /*0x76a27a*/
  }
  return result; /*0x76a25a*/

}
} // namespace gamemd

// 0x76A290
namespace gamemd {
} // namespace gamemd

// 0x76A390
namespace gamemd {
} // namespace gamemd

// 0x76A4F0
namespace gamemd {
} // namespace gamemd

// 0x76A520
namespace gamemd {
} // namespace gamemd

// 0x76A570
namespace gamemd {
} // namespace gamemd

// 0x76A5A0
namespace gamemd {
unsigned int * Map_WorldDominationTour_38::Release(void *a1_1)
{

  ++*((unsigned int *)a1_1 + 2); /*0x76a5a2*/
  return a1_1->__pad_0; /*0x76a5a5*/

}
}
// 0x76A5B0
namespace gamemd {
unsigned int * Map_WorldDominationTour_38::ddtor(void *a1_1)
{
  --*((unsigned int *)a1_1 + 2); /*0x76a5b2*/
  return a1_1->__pad_0; /*0x76a5b5*/
}
}
// 0x76A5C0
namespace gamemd {
VectorClass_flat * Map_WorldDominationTour_20::QueryInterface(unsigned int * Block, char a2)
{
  void (__thiscall ***v3)(unsigned int, int); // ecx

  v3 = *(void (__thiscall ****)(unsigned int, int))&Block->__pad_004; /*0x76a5c3*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClassrc_ptr; /*0x76a5c6*/
  if ( v3 && (((unsigned char *)&(*&Block->u32_D))[1]) ) /*0x76a5d0*/
  {
    (**v3)(v3, 3); /*0x76a5df*/
    *&Block->__pad_004 = 0; /*0x76a5e1*/
  }
  (Block->u32_D) = 0; /*0x76a5ec*/
  Block->u32_8 = 0; /*0x76a5f2*/
  if ( (a2 & 1) != 0 ) /*0x76a5f9*/
    operator delete((void *)(Block)); /*0x76a5fc*/
  return Block->tail_0; /*0x76a606*/
}
} // namespace gamemd

// 0x76A6D0
namespace gamemd {
} // namespace gamemd

// 0x76A770
namespace gamemd {
} // namespace gamemd

// 0x770C10
namespace gamemd {
char sub_770C10(Map *aP0, int a1, int a2, void ** a3)
{

  void *v3; // eax
    v3 = *&aP0->Width;
    *(unsigned int *)aP0->__pad_000 = &vt_VectorClass;
    if ( v3 && (((unsigned char *)&(aP0->Name))[1]) )
  {
    operator delete((void *)(v3)); /*0x76a6e8*/
        *&aP0->Width = 0;
  }
    (((unsigned char *)&(aP0->Name))[1]) = 0;
    aP0->Height = 0;
  if ( (a2 & 1) != 0 ) /*0x76a708*/
    operator delete((void *)(aP0)); /*0x76a70b*/
    return aP0->__pad_000;
}
} // namespace gamemd

// 0x770CE0
namespace gamemd {
char sub_770CE0(int a1, int a2, char ** a3)
{
  void *v8; // [esp+0h] [ebp-8h] BYREF
  void *v9; // [esp+4h] [ebp-4h] BYREF

  if ( a1 == 3 ) /*0x770ce8*/
  {
  char **v3; // eax
    v3 = FormatStringInt((char **)&v9, a2, 2); /*0x770cee*/
  char **v4; // eax
    v4 = ProcessStringAndCopy((char **)&v8, g_Str_WWD_Soviet, v3); /*0x770cfd*/
    ((String *)(a3))->Reassign((const char **)v4); /*0x770d07*/
    DeleteAndZero(&v8); /*0x770d10*/
    DeleteAndZero(&v9); /*0x770d19*/
  }
  else
  {
  char **v6; // eax
    v6 = FormatStringInt((char **)&v8, a2, 2); /*0x770d2a*/
  char **v7; // eax
    v7 = ProcessStringAndCopy((char **)&v9, g_Str_WWD_Allied, v6); /*0x770d39*/
    ((String *)(a3))->Reassign((const char **)v7); /*0x770d43*/
    DeleteAndZero(&v9); /*0x770d4c*/
    DeleteAndZero(&v8); /*0x770d55*/
  }
  return 1; /*0x770d20*/
}
} // namespace gamemd

// 0x7A2800
namespace gamemd {
char sub_7A2800(int a1, char a2, char a3)
{

  HWND v5; // eax
  v5 = (HWND)Dialog::FindByHandle((void *)0xC2); /*0x7a280b*/
  return Map_Handle_5EC880(v5, a1, a2, a3); /*0x7a281f*/
}
} // namespace gamemd
