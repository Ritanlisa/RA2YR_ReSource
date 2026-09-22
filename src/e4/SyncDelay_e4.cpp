// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/Timer_e4.hpp"

// 0x55E160
signed int SyncDelay::Start()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  DWORD Ticks; // eax
  DWORD v14; // eax
  signed int result; // eax
  _DWORD v24[4]; // [esp+14h] [ebp-10h] BYREF

  SyncDelay *v0 = DataGlobal_887348; /*0x55e160*/
  AbstractClass *v1 = DataGlobal_887350; /*0x55e171*/
  if ( DataGlobal_887348 != -1 ) /*0x55e179*/
  {
    Ticks = Timer::GetTicks(); /*0x55e180*/
    v0 = DataGlobal_887348; /*0x55e185*/
    signed int v3 = Ticks - DataGlobal_887348; /*0x55e18b*/
    if ( v3 >= v1 ) /*0x55e18f*/
      v1 = 0; /*0x55e195*/
    else
      v1 -= v3; /*0x55e191*/
  }
  DataGlobal_A8E314 += v1; /*0x55e1a7*/
  if ( g_GameMode_Current[0] && g_GameMode_Current[0] != 5 ) /*0x55e1b6*/
  {
    while ( 1 ) /*0x55e1c7*/
    {
      int v4 = DataGlobal_887330; /*0x55e1c7*/
      if ( DataGlobal_887328 != -1 ) /*0x55e1cf*/
      {
        signed int v5 = timeGetTime() - DataGlobal_887328; /*0x55e1db*/
        if ( v5 >= v4 ) /*0x55e1e3*/
          goto LABEL_38; /*0x55e1e3*/
        v4 -= v5; /*0x55e1e9*/
      }
      if ( !v4 ) /*0x55e1ed*/
        goto LABEL_38; /*0x55e1ed*/
      Event::Dispatch(); /*0x55e1f3*/
      if ( !DataGlobal_A8EDA0 && g_DDraw_Initialized == 1 ) /*0x55e20b*/
        break; /*0x55e20b*/
LABEL_23:
      Sleep(0); /*0x55e2ac*/
    }
    int v6 = DataGlobal_887330; /*0x55e216*/
    int v22 = 0; /*0x55e21e*/
    if ( DataGlobal_887328 != -1 ) /*0x55e222*/
    {
      signed int v7 = timeGetTime() - DataGlobal_887328; /*0x55e22e*/
      if ( v7 >= v6 ) /*0x55e236*/
        goto LABEL_18; /*0x55e236*/
      v6 -= v7; /*0x55e238*/
    }
    if ( v6 > 10 ) /*0x55e23d*/
    {
  int v23; // [esp+10h] [ebp-14h] BYREF
      InputManager_ProcessEvents::Vtable((int *)&DataGlobal_87F7E8, &v22, v24, &v23); /*0x55e253*/
      SyncDelayClass::ProcessNetworkSync(&v22); /*0x55e25c*/
      ((void (__thiscall *)(LPPERSISTSTREAM))g_TacticalClass_Instance->__tail_0[2].GetSizeMax)(g_TacticalClass_Instance); /*0x55e269*/
      TacticalMap::Redraw(&DataGlobal_87F7E8); /*0x55e271*/
      goto LABEL_19; /*0x55e276*/
    }
LABEL_18:
    Sleep(0); /*0x55e278*/
LABEL_19:
    int v8 = DataGlobal_887330; /*0x55e27b*/
    if ( DataGlobal_887328 != -1 ) /*0x55e288*/
    {
      signed int v9 = timeGetTime() - DataGlobal_887328; /*0x55e294*/
      if ( v9 >= v8 ) /*0x55e29c*/
        goto LABEL_38; /*0x55e29c*/
      v8 -= v9; /*0x55e2a2*/
    }
    if ( !v8 ) /*0x55e2a6*/
      goto LABEL_38; /*0x55e2a6*/
    goto LABEL_23; /*0x55e2a6*/
  }
  AbstractClass *v10 = DataGlobal_887350; /*0x55e2b4*/
  if ( v0 != -1 ) /*0x55e2bc*/
  {
    signed int v11 = Timer::GetTicks() - DataGlobal_887348; /*0x55e2c8*/
    if ( v11 >= v10 ) /*0x55e2d0*/
      goto LABEL_38; /*0x55e2d0*/
    v10 -= v11; /*0x55e2d2*/
  }
  if ( v10 ) /*0x55e2d6*/
  {
    DDraw::WaitForIdle(); /*0x55e2d8*/
    while ( 1 ) /*0x55e317*/
    {
  AbstractClass *v16; // esi
      while ( 1 ) /*0x55e2e3*/
      {
        SyncDelay *v12 = DataGlobal_887348; /*0x55e2e3*/
        AbstractClass *v13 = DataGlobal_887350; /*0x55e2e9*/
        if ( DataGlobal_887348 != -1 ) /*0x55e2f1*/
        {
          v14 = Timer::GetTicks(); /*0x55e2f8*/
          v12 = DataGlobal_887348; /*0x55e2fd*/
          signed int v15 = v14 - DataGlobal_887348; /*0x55e303*/
          if ( v15 >= v13 ) /*0x55e307*/
            goto LABEL_38; /*0x55e307*/
          v13 -= v15; /*0x55e309*/
        }
        if ( !v13 ) /*0x55e30d*/
          goto LABEL_38; /*0x55e30d*/
        v16 = DataGlobal_887350; /*0x55e30f*/
        if ( v12 != -1 ) /*0x55e317*/
          break; /*0x55e317*/
LABEL_37:
        Sleep(v16); /*0x55e336*/
      }
      signed int v17 = Timer::GetTicks() - DataGlobal_887348; /*0x55e323*/
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
  int v19 = dword_ABCD90; /*0x55e377*/
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
LABEL_44:
  int v20 = dword_ABCD40 + g_FrameCounter_Total; /*0x55e39b*/
  bool v21 = (unsigned int)(dword_ABCD40 + g_FrameCounter_Total) <= 0x7FFFFFFF; /*0x55e3af*/
  dword_ABCD44 = (wchar_t *)dword_ABCD40; /*0x55e3b5*/
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
}

// 0x55F6C0
int SyncDelay::Check(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  _DWORD * v2 = (_DWORD *)this->q010; /*0x55f6c0*/
  return v2 && *v2 == *a2; /*0x55f6d3*/
}
}
