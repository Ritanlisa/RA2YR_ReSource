// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/SyncDelay_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/DDraw_e4.hpp"
#include "e4/classes/Surface_e4.hpp"
#include "e4/classes/SwizzleManagerClass_19_e4.hpp"
#include "e4/classes/TacticalMap_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectClass_e4.hpp"

// 0x55E160
namespace gamemd {
signed int SyncDelay::Start()
{
  int v0; // ecx
  signed int v1; // esi
  DWORD Ticks; // eax
  signed int v3; // eax
  int v4; // esi
  signed int v5; // eax
  int v6; // esi
  signed int v7; // eax
  int v8; // esi
  signed int v9; // eax
  signed int v10; // esi
  signed int v11; // eax
  int v12; // ecx
  signed int v13; // esi
  DWORD v14; // eax
  signed int v15; // eax
  signed int v16; // esi
  signed int v17; // eax
  signed int result; // eax
  int v19; // esi
  int v20; // ecx
  wchar_t * v21;
  int v22; // [esp+Ch] [ebp-18h] BYREF
  int v23; // [esp+10h] [ebp-14h] BYREF
  unsigned int v24[4]; // [esp+14h] [ebp-10h] BYREF

  v0 = dword_887348; /*0x55e160*/
  v1 = dwMilliseconds; /*0x55e171*/
  if ( dword_887348 != -1 ) /*0x55e179*/
  {
    Ticks = Timer::GetTicks(); /*0x55e180*/
    v0 = dword_887348; /*0x55e185*/
    v3 = Ticks - dword_887348; /*0x55e18b*/
    if ( v3 >= v1 ) /*0x55e18f*/
      v1 = 0; /*0x55e195*/
    else
      v1 -= v3; /*0x55e191*/
  }
  dword_A8E314 += v1; /*0x55e1a7*/
  if ( g_GameMode_Current[0] && g_GameMode_Current[0] != 5 ) /*0x55e1b6*/
  {
    while ( 1 ) /*0x55e1c7*/
    {
      v4 = dword_887330; /*0x55e1c7*/
      if ( g_TacticalState != -1 ) /*0x55e1cf*/
      {
        v5 = timeGetTime() - g_TacticalState; /*0x55e1db*/
        if ( v5 >= v4 ) /*0x55e1e3*/
          goto LABEL_38; /*0x55e1e3*/
        v4 -= v5; /*0x55e1e9*/
      }
      if ( !v4 ) /*0x55e1ed*/
        goto LABEL_38; /*0x55e1ed*/
      Event::Dispatch(); /*0x55e1f3*/
      if ( !g_MainGameState && g_DDraw_Active == 1 ) /*0x55e20b*/
        break; /*0x55e20b*/
  LABEL_23:
      Sleep(0); /*0x55e2ac*/
    }
    v6 = dword_887330; /*0x55e216*/
    v22 = 0; /*0x55e21e*/
    if ( g_TacticalState != -1 ) /*0x55e222*/
    {
      v7 = timeGetTime() - g_TacticalState; /*0x55e22e*/
      if ( v7 >= v6 ) /*0x55e236*/
        goto LABEL_18; /*0x55e236*/
      v6 -= v7; /*0x55e238*/
    }
    if ( v6 > 10 ) /*0x55e23d*/
    {
      InputManager_ProcessEvents::Vtable((int *)&MapClass_Instance, &v22, v24, &v23); /*0x55e253*/
      SyncDelayClass::ProcessNetworkSync(&v22); /*0x55e25c*/
      ((void (__thiscall *)(LPPERSISTSTREAM))g_TacticalClass_Instance->lpVtbl[2].GetSizeMax)(g_TacticalClass_Instance); /*0x55e269*/
      TacticalMap::Redraw(&MapClass_Instance); /*0x55e271*/
      goto LABEL_19; /*0x55e276*/
    }
  LABEL_18:
    Sleep(0); /*0x55e278*/
  LABEL_19:
    v8 = dword_887330; /*0x55e27b*/
    if ( g_TacticalState != -1 ) /*0x55e288*/
    {
      v9 = timeGetTime() - g_TacticalState; /*0x55e294*/
      if ( v9 >= v8 ) /*0x55e29c*/
        goto LABEL_38; /*0x55e29c*/
      v8 -= v9; /*0x55e2a2*/
    }
    if ( !v8 ) /*0x55e2a6*/
      goto LABEL_38; /*0x55e2a6*/
    goto LABEL_23; /*0x55e2a6*/
  }
  v10 = dwMilliseconds; /*0x55e2b4*/
  if ( v0 != -1 ) /*0x55e2bc*/
  {
    v11 = Timer::GetTicks() - dword_887348; /*0x55e2c8*/
    if ( v11 >= v10 ) /*0x55e2d0*/
      goto LABEL_38; /*0x55e2d0*/
    v10 -= v11; /*0x55e2d2*/
  }
  if ( v10 ) /*0x55e2d6*/
  {
    DDraw::WaitForIdle(); /*0x55e2d8*/
    while ( 1 ) /*0x55e317*/
    {
      while ( 1 ) /*0x55e2e3*/
      {
        v12 = dword_887348; /*0x55e2e3*/
        v13 = dwMilliseconds; /*0x55e2e9*/
        if ( dword_887348 != -1 ) /*0x55e2f1*/
        {
          v14 = Timer::GetTicks(); /*0x55e2f8*/
          v12 = dword_887348; /*0x55e2fd*/
          v15 = v14 - dword_887348; /*0x55e303*/
          if ( v15 >= v13 ) /*0x55e307*/
            goto LABEL_38; /*0x55e307*/
          v13 -= v15; /*0x55e309*/
        }
        if ( !v13 ) /*0x55e30d*/
          goto LABEL_38; /*0x55e30d*/
        v16 = dwMilliseconds; /*0x55e30f*/
        if ( v12 != -1 ) /*0x55e317*/
          break; /*0x55e317*/
  LABEL_37:
        Sleep(v16); /*0x55e336*/
      }
      v17 = Timer::GetTicks() - dword_887348; /*0x55e323*/
      if ( v17 >= v16 ) /*0x55e32b*/
      {
        v16 = 0; /*0x55e334*/
        goto LABEL_37; /*0x55e334*/
      }
      Sleep(v16 - v17); /*0x55e330*/
    }
  }
  LABEL_38:
  if ( (byte_ABCD94 & 1) == 0 ) /*0x55e343*/
  {
    byte_ABCD94 |= 1u; /*0x55e34f*/
    dword_ABCD88 = Timer::GetTicks(); /*0x55e35a*/
    dword_ABCD90 = 0; /*0x55e35f*/
    atexit(nullsub_23); /*0x55e36a*/
  }
  result = dword_ABCD88; /*0x55e372*/
  v19 = dword_ABCD90; /*0x55e377*/
  if ( dword_ABCD88 == -1 ) /*0x55e37f*/
  {
  LABEL_43:
    if ( v19 ) /*0x55e399*/
      return result; /*0x55e399*/
    goto LABEL_44; /*0x55e399*/
  }
  result = Timer::GetTicks() - dword_ABCD88; /*0x55e38b*/
  if ( result < v19 ) /*0x55e393*/
  {
    v19 -= result; /*0x55e395*/
    goto LABEL_43; /*0x55e395*/
  }
  LABEL_44: v20 = (unsigned int)(dword_ABCD40 + g_FrameCounter_Total);
  v21 = (wchar_t *)((unsigned int)((unsigned int)(dword_ABCD40 + g_FrameCounter_Total) <= 0x7FFFFFFF));
  dword_ABCD44 = (unsigned int)((wchar_t *)dword_ABCD40);
  dword_ABCD40 = 0; /*0x55e3ba*/
  g_FrameCounter_Total = v20; /*0x55e3c0*/
  ++g_FrameCounter_Samples; /*0x55e3c6*/
  if ( !v21 ) /*0x55e3cc*/
  {
    g_FrameCounter_Total = 0; /*0x55e3ce*/
    g_FrameCounter_Samples = 0; /*0x55e3d4*/
  }
  result = Timer::GetTicks(); /*0x55e3de*/
  dword_ABCD88 = result; /*0x55e3ec*/
  dword_ABCD8C = v24[2]; /*0x55e3f1*/
  dword_ABCD90 = 60; /*0x55e3f7*/
  return result; /*0x55e3fd*/
}
} // namespace gamemd
// 0x55F6C0
namespace gamemd {
int SyncDelay::Check(unsigned int * a2)
{
  unsigned int *v2; // eax

  v2 = (unsigned int *)this->q010; /*0x55f6c0*/
  return v2 && *v2 == *a2; /*0x55f6d3*/
}
} // namespace gamemd