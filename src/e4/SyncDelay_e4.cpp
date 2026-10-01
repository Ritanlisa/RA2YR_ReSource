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
#include "e4/classes/InputManager_ProcessEvents_e4.hpp"
#include "e4/classes/SyncDelayClass_e4.hpp"

// 0x55E160
namespace gamemd {
void SyncDelay::Start(void *a1, void *a2)
{
    unsigned int v1 = 0;  /* G37 hoist */

  DDraw *v1; // edi
  int v2; // ecx
  int v3; // esi
  int Ticks; // eax
  int v5; // eax
  signed int v6; // esi
  signed int v7; // eax
  int v8; // esi
  signed int v9; // eax
  signed int v10; // esi
  signed int v11; // eax
  int v12; // esi
  int v13; // eax
  int v14; // ecx
  int v15; // esi
  int v16; // eax
  int v17; // eax
  signed int v18; // esi
  int v19; // eax
  signed int result; // eax
  signed int v21; // esi
  int v22; // ecx
  bool v23; // cc
  SyncDelayClass v24; // [esp+Ch] [ebp-18h] BYREF
  int v25; // [esp+10h] [ebp-14h] BYREF
  unsigned int v26[4]; // [esp+14h] [ebp-10h] BYREF

  v2 = *(unsigned int *)stru_88732C.__pad_1C; /*0x55e160*/
  v3 = *(unsigned int *)&stru_88732C.__pad_1C[8]; /*0x55e171*/
  if ( *(unsigned int *)stru_88732C.__pad_1C != -1 ) /*0x55e179*/
  {
    Ticks = ((Timer *)this)->GetTicks(); /*0x55e180*/
    v2 = *(unsigned int *)stru_88732C.__pad_1C; /*0x55e185*/
    v5 = Ticks - *(unsigned int *)stru_88732C.__pad_1C; /*0x55e18b*/
    if ( v5 >= v3 ) /*0x55e18f*/
      v3 = 0; /*0x55e195*/
    else
      v3 -= v5; /*0x55e191*/
  }
  dword_A8E314 += v3; /*0x55e1a7*/
  if ( *(unsigned int *)&dword_A8B238 && *(unsigned int *)&dword_A8B238 != 5 ) /*0x55e1b6*/
  {
    while ( 1 ) /*0x55e1c7*/
    {
      v6 = *(unsigned int *)&stru_88732C.m_2[2]; /*0x55e1c7*/
      if ( g_TacticalState != (void *)(-1) ) /*0x55e1cf*/
      {
        v7 = timeGetTime() - g_TacticalState; /*0x55e1db*/
        if ( v7 >= v6 ) /*0x55e1e3*/
          goto LABEL_38; /*0x55e1e3*/
        v6 -= v7; /*0x55e1e9*/
      }
      if ( !v6 ) /*0x55e1ed*/
        goto LABEL_38; /*0x55e1ed*/
      ((Event *)this)->Dispatch(); /*0x55e1f3*/
      if ( !*(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 444) && *((unsigned int *)((char *)&stru_A8EB00 + 412)) == 1 ) /*0x55e20b*/
        break; /*0x55e20b*/
LABEL_23:
      Sleep(0); /*0x55e2ac*/
    }
    v8 = *(unsigned int *)&stru_88732C.m_2[2]; /*0x55e216*/
    v24 = 0; /*0x55e21e*/
    if ( g_TacticalState != (void *)(-1) ) /*0x55e222*/
    {
      v9 = timeGetTime() - g_TacticalState; /*0x55e22e*/
      if ( v9 >= v8 ) /*0x55e236*/
        goto LABEL_18; /*0x55e236*/
      v8 -= v9; /*0x55e238*/
    }
    if ( v8 > 10 ) /*0x55e23d*/
    {
      InputManager_ProcessEvents::Vtable((GScreenClass *)&stru_87F5F0.__pad_58[416], &v24, v26, &v25); /*0x55e253*/
      SyncDelayClass::ProcessNetworkSync(&v24); /*0x55e25c*/
      (*(void (**)(LPPERSISTSTREAM))(*(unsigned int *)g_TacticalClass_Instance + 92))(g_TacticalClass_Instance); /*0x55e269*/
      TacticalMap::Redraw((GScreenClass *)&stru_87F5F0.__pad_58[416]); /*0x55e271*/
      goto LABEL_19; /*0x55e276*/
    }
LABEL_18:
    Sleep(0); /*0x55e278*/
LABEL_19:
    v10 = *(unsigned int *)&stru_88732C.m_2[2]; /*0x55e27b*/
    if ( g_TacticalState != (void *)(-1) ) /*0x55e288*/
    {
      v11 = timeGetTime() - g_TacticalState; /*0x55e294*/
      if ( v11 >= v10 ) /*0x55e29c*/
        goto LABEL_38; /*0x55e29c*/
      v10 -= v11; /*0x55e2a2*/
    }
    if ( !v10 ) /*0x55e2a6*/
      goto LABEL_38; /*0x55e2a6*/
    goto LABEL_23; /*0x55e2a6*/
  }
  v12 = *(unsigned int *)&stru_88732C.__pad_1C[8]; /*0x55e2b4*/
  if ( v2 != -1 ) /*0x55e2bc*/
  {
    v13 = ((Timer *)this)->GetTicks() - *(unsigned int *)stru_88732C.__pad_1C; /*0x55e2c8*/
    if ( v13 >= v12 ) /*0x55e2d0*/
      goto LABEL_38; /*0x55e2d0*/
    v12 -= v13; /*0x55e2d2*/
  }
  if ( v12 ) /*0x55e2d6*/
  {
    DDraw::WaitForIdle((gamemd::DDraw *)(v1)); /*0x55e2d8*/
    while ( 1 ) /*0x55e317*/
    {
      while ( 1 ) /*0x55e2e3*/
      {
        v14 = *(unsigned int *)stru_88732C.__pad_1C; /*0x55e2e3*/
        v15 = *(unsigned int *)&stru_88732C.__pad_1C[8]; /*0x55e2e9*/
        if ( *(unsigned int *)stru_88732C.__pad_1C != -1 ) /*0x55e2f1*/
        {
          v16 = ((Timer *)this)->GetTicks(); /*0x55e2f8*/
          v14 = *(unsigned int *)stru_88732C.__pad_1C; /*0x55e2fd*/
          v17 = v16 - *(unsigned int *)stru_88732C.__pad_1C; /*0x55e303*/
          if ( v17 >= v15 ) /*0x55e307*/
            goto LABEL_38; /*0x55e307*/
          v15 -= v17; /*0x55e309*/
        }
        if ( !v15 ) /*0x55e30d*/
          goto LABEL_38; /*0x55e30d*/
        v18 = *(unsigned int *)&stru_88732C.__pad_1C[8]; /*0x55e30f*/
        if ( v14 != -1 ) /*0x55e317*/
          break; /*0x55e317*/
LABEL_37:
        Sleep(v18); /*0x55e336*/
      }
      v19 = ((Timer *)this)->GetTicks() - *(unsigned int *)stru_88732C.__pad_1C; /*0x55e323*/
      if ( v19 >= v18 ) /*0x55e32b*/
      {
        v18 = 0; /*0x55e334*/
        goto LABEL_37; /*0x55e334*/
      }
      Sleep(v18 - v19); /*0x55e330*/
    }
  }
LABEL_38:
  if ( (g_MissionQueueFrame.waypoints[362] & 1) == 0 ) /*0x55e343*/
  {
    g_MissionQueueFrame.waypoints[362] |= 1u; /*0x55e34f*/
    *(unsigned int *)&g_MissionQueueFrame.waypoints[350] = ((Timer *)this)->GetTicks(); /*0x55e35a*/
    *(unsigned int *)&g_MissionQueueFrame.waypoints[358] = 0; /*0x55e35f*/
    atexit(nullsub_23); /*0x55e36a*/
  }
  result = *(unsigned int *)&g_MissionQueueFrame.waypoints[350]; /*0x55e372*/
  v21 = *(unsigned int *)&g_MissionQueueFrame.waypoints[358]; /*0x55e377*/
  if ( *(unsigned int *)&g_MissionQueueFrame.waypoints[350] == -1 ) /*0x55e37f*/
  {
LABEL_43:
    if ( v21 ) /*0x55e399*/
      return result; /*0x55e399*/
    goto LABEL_44; /*0x55e399*/
  }
  result = ((Timer *)this)->GetTicks() - *(unsigned int *)&g_MissionQueueFrame.waypoints[350]; /*0x55e38b*/
  if ( result < v21 ) /*0x55e393*/
  {
    v21 -= result; /*0x55e395*/
    goto LABEL_43; /*0x55e395*/
  }
LABEL_44:
  v22 = *(unsigned int *)&g_MissionQueueFrame.waypoints[278] + *(unsigned int *)&g_MissionQueueFrame.waypoints[286]; /*0x55e39b*/
  v23 = (unsigned int)(*(unsigned int *)&g_MissionQueueFrame.waypoints[278] + *(unsigned int *)&g_MissionQueueFrame.waypoints[286]) <= 0x7FFFFFFF; /*0x55e3af*/
  *(unsigned int *)&g_MissionQueueFrame.waypoints[282] = *(unsigned int *)&g_MissionQueueFrame.waypoints[278]; /*0x55e3b5*/
  *(unsigned int *)&g_MissionQueueFrame.waypoints[278] = 0; /*0x55e3ba*/
  *(unsigned int *)&g_MissionQueueFrame.waypoints[286] = v22; /*0x55e3c0*/
  ++*(unsigned int *)&g_MissionQueueFrame.waypoints[290]; /*0x55e3c6*/
  if ( !v23 ) /*0x55e3cc*/
  {
    *(unsigned int *)&g_MissionQueueFrame.waypoints[286] = 0; /*0x55e3ce*/
    *(unsigned int *)&g_MissionQueueFrame.waypoints[290] = 0; /*0x55e3d4*/
  }
  result = ((Timer *)this)->GetTicks(); /*0x55e3de*/
  *(unsigned int *)&g_MissionQueueFrame.waypoints[350] = result; /*0x55e3ec*/
  *(unsigned int *)&g_MissionQueueFrame.waypoints[354] = v26[2]; /*0x55e3f1*/
  *(unsigned int *)&g_MissionQueueFrame.waypoints[358] = 60; /*0x55e3f7*/
  return result; /*0x55e3fd*/

}
} // namespace gamemd
// 0x55F6C0
namespace gamemd {
bool SyncDelay::Check(unsigned int * a2, void *a2_2, void *a3)
{

  unsigned int *v2; // eax

  v2 = (unsigned int *)*((unsigned int *)this + 4); /*0x55f6c0*/
  return v2 && *v2 == *a2; /*0x55f6d3*/

}
} // namespace gamemd