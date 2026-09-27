// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/InfantryClass_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/MissionClass_e4.hpp"
#include "e4/classes/InfantryTypeVector_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/AnimTypeClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"

// 0x4D4DC0
namespace gamemd {
int InfantryClass::ScanTarget(int * a1)
{
  short * v2;
  short * PlacementCells_Alt;
  void *v4; // eax
  int v5; // edx
  int v6; // eax
  char *MissionControl; // eax
  int v8; // edi
  int v9; // ebp
  int *v10; // eax
  int v11; // edi
  int v12; // ebx
  int *v13; // eax
  int v14; // ecx
  double v15; // st7
  int result; // eax
  int v17; // [esp+48h] [ebp-24h] BYREF
  int v18; // [esp+4Ch] [ebp-20h]
  int v19; // [esp+50h] [ebp-1Ch]
  unsigned char v20[12]; // [esp+54h] [ebp-18h] BYREF
  unsigned char v21[12]; // [esp+60h] [ebp-Ch] BYREF

  if ( *(unsigned char *)((*(int (__thiscall **)(int))(*(unsigned int *)a1 + 132))(a1) + 912) /*0x4d4dde*/
    && !(*(int (__thiscall **)(int))(*(unsigned int *)a1 + 456))(a1) )
  {
    v2 = (short *)(*(unsigned int *)a1);
    PlacementCells_Alt = (int16_t *)MapClass::FindPlacementCellsAlt((char *)a1, &v17, a1); /*0x4d4df4*/
    v4 = CellCoord::To_CellObj(&MapClass_Instance, PlacementCells_Alt); /*0x4d4dff*/
    (*(void (__thiscall **)(int, void *, int))(v2 + 1152))(a1, v4, 1); /*0x4d4e07*/
  }
  if ( *(unsigned char *)(a1 + 1678) ) /*0x4d4e0d*/
  {
    v17 = *(unsigned int *)(a1 + 156); /*0x4d4e21*/
    v5 = *(unsigned int *)a1; /*0x4d4e25*/
    v18 = *(unsigned int *)(a1 + 160); /*0x4d4e2a*/
    v19 = *(unsigned int *)(a1 + 164); /*0x4d4e36*/
    v6 = (*(int (__thiscall **)(int, int, int *, unsigned int))(v5 + 964))(a1, 1, &v17, 0); /*0x4d4e3e*/
    if ( v6 ) /*0x4d4e46*/
    {
      (*(void (__thiscall **)(int, int))(*(unsigned int *)a1 + 968))(a1, v6); /*0x4d4e4d*/
      *(unsigned char *)(a1 + 1678) = 0; /*0x4d4e53*/
    }
  }
  if ( *(unsigned int *)(a1 + 692) ) /*0x4d4e5a*/
    (*(void (__thiscall **)(int, unsigned int))(*(unsigned int *)a1 + 1340))(a1, 0); /*0x4d4e6a*/
  else
    (*(void (__thiscall **)(int, unsigned int, int))(*(unsigned int *)a1 + 1156))(a1, 0, 1); /*0x4d4e7a*/
  MissionControl = MissionClass::GetMissionControl((unsigned int *)a1); /*0x4d4e82*/
  v8 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x4d4e95*/
  v9 = v8 + Random::Range((unsigned int *)g_ScenarioClass_Instance + 134, 0, 2); /*0x4d4eb3*/
  if ( !*(unsigned int *)(a1 + 692)
    || (!a1
     || (*(int (__thiscall **)(int))(*(unsigned int *)a1 + 44))(a1) != 15
     || !*(unsigned char *)(*(unsigned int *)((*(int (__thiscall **)(int))(*(unsigned int *)a1 + 44))(a1) == 15 ? a1 + 0x6C0 : 1728) + 1685))
    && (!*(unsigned int *)(*(int (__thiscall **)(int, unsigned int))(*(unsigned int *)a1 + 1016))(a1, 0)
     || *(int *)(*(unsigned int *)(*(int (__thiscall **)(int, unsigned int))(*(unsigned int *)a1 + 1016))(a1, 0) + 180) > 512) )
  {
    return v9; /*0x4d4f1c*/
  }
  v10 = (int *)(*(int (__thiscall **)(unsigned int, unsigned char *))(**(unsigned int **)(a1 + 692) + 72))(*(unsigned int *)(a1 + 692), v20); /*0x4d4f30*/
  v11 = *v10; /*0x4d4f33*/
  v12 = v10[1]; /*0x4d4f35*/
  v13 = (int *)(*(int (__thiscall **)(int, unsigned char *))(*(unsigned int *)a1 + 72))(a1, v21); /*0x4d4f41*/
  v14 = *v13; /*0x4d4f44*/
  v18 = v13[1] - v12; /*0x4d4f4d*/
  v17 = v14 - v11; /*0x4d4f51*/
  v15 = Math::Sqrt((double)(v14 - v11) * (double)(v14 - v11) + (double)v18 * (double)v18); /*0x4d4f71*/
  v17 = Math::RoundToInt(v15); /*0x4d4f83*/
  if ( v17 > 768 ) /*0x4d4f88*/
    return v9; /*0x4d4fa9*/
  result = v9; /*0x4d4f99*/
  if ( (double)v17 >= 281.6 ) /*0x4d4f9b*/
    return v9 / 2; /*0x4d4fa3*/
  return result; /*0x4d4fa0*/
}
}
// 0x4D5350
namespace gamemd {
AbstractClass * * InfantryClass::ProcessDeploy(void ** a1)
{
  void *v2; // edx
  int v3; // eax
  void **v4; // edi
  int v5; // eax
  void *v6; // ecx
  void *v7; // edi
  void *v8; // eax
  char *MissionControl; // eax
  int v10; // esi
  int v12; // [esp+8h] [ebp-14h] BYREF
  int v13; // [esp+Ch] [ebp-10h] BYREF
  unsigned int v14[3]; // [esp+10h] [ebp-Ch] BYREF

  if ( *(unsigned char *)((*((int (__thiscall **)(void **))*a1 + 33))(a1) + 1748) /*0x4d5392*/
    || (v14[0] = a1[39],
        v2 = *a1,
        v14[1] = a1[40],
        v14[2] = a1[41],
        !(*((uint8_t (__thiscall **)(void **, unsigned int *, unsigned int))v2 + 231))(a1, v14, 0)) )
  {
    if ( (uint8_t)House::IsCurrentPlayer(a1[135]) || g_GameMode_Current[0] ) /*0x4d5504*/
    {
      (*((void (__thiscall **)(void **))*a1 + 286))(a1); /*0x4d557c*/
    }
    else
    {
      v12 = g_FootClass_Pool; /*0x4d5510*/
      v12 = *HouseClass::GetCurrentOption(HouseClass_Player, &v13); /*0x4d5529*/
      if ( v12 != g_FootClass_Pool ) /*0x4d552d*/
      {
        if ( a1[182] ) /*0x4d553d*/
          ((void (*)(void))FactoryClass::ResetProductionTimers)(); /*0x4d5547*/
        v7 = *a1; /*0x4d554c*/
        v8 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v12); /*0x4d555a*/
        (*((void (__thiscall **)(void **, void *, int))v7 + 288))(a1, v8, 1); /*0x4d5562*/
        (*((void (__thiscall **)(void **, int, int))*a1 + 122))(a1, 2, 1); /*0x4d5570*/
      }
    }
    goto LABEL_25; /*0x4d5576*/
  }
  v3 = (*((int (__thiscall **)(void **))*a1 + 11))(a1); /*0x4d53a4*/
  v4 = v3 == 15 ? a1 : 0;
  if ( !v4 ) /*0x4d53b4*/
  {
    (*((void (__thiscall **)(void **, unsigned int))*a1 + 335))(a1, 0); /*0x4d54e3*/
    goto LABEL_25; /*0x4d54e9*/
  }
  v5 = (int)*(v3 == 15 ? a1 + 432 : (void **)1728);
  if ( *(unsigned char *)(v5 + 3779) && !*(unsigned char *)(v5 + 3778) && !TechnoTypeClass::HasVoiceResponse((float *)v4, 14) ) /*0x4d53df*/
  {
  LABEL_14:
    (*((void (__thiscall **)(void **, void *, int))*a1 + 288))(a1, a1[173], 1); /*0x4d547c*/
    (*((void (__thiscall **)(void **, int, unsigned int))*a1 + 122))(a1, 8, 0); /*0x4d5497*/
    if ( !(*((uint8_t (__thiscall **)(void **))*a1 + 128))(a1) ) /*0x4d54a9*/
      goto LABEL_25; /*0x4d54a9*/
    goto LABEL_12; /*0x4d54a9*/
  }
  if ( !*((unsigned char *)v4[432] + 3778) && !TechnoTypeClass::HasVoiceResponse((float *)v4, 14) /*0x4d5428*/
    || (v6 = a1[173]) == 0
    || (*(int (__thiscall **)(void *))(*(unsigned int *)v6 + 44))(v6) != 6 )
  {
    if ( !*((unsigned char *)v4[432] + 3782) ) /*0x4d547a*/
    {
      (*((void (__thiscall **)(void **, unsigned int, int))*a1 + 288))(a1, 0, 1); /*0x4d54c6*/
      (*((void (__thiscall **)(void **, unsigned int))*a1 + 335))(a1, 0); /*0x4d54d2*/
      goto LABEL_25; /*0x4d54d8*/
    }
    goto LABEL_14; /*0x4d547a*/
  }
  (*((void (__thiscall **)(void **, void *, int))*a1 + 288))(a1, a1[173], 1); /*0x4d5437*/
  (*((void (__thiscall **)(void **, int, unsigned int))*a1 + 122))(a1, 17, 0); /*0x4d5445*/
  if ( (*((uint8_t (__thiscall **)(void **))*a1 + 128))(a1) ) /*0x4d544f*/
  LABEL_12:
    (*((void (__thiscall **)(void **))*a1 + 123))(a1); /*0x4d545d*/
  LABEL_25:
  MissionControl = MissionClass::GetMissionControl(a1); /*0x4d5582*/
  v10 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x4d55a7*/
  return v10 + Random::Range((unsigned int *)g_ScenarioClass_Instance + 134, 0, 2); /*0x4d55b0*/
}
}
// 0x517D90
namespace gamemd {
void* InfantryClass::Destruct(IUnknown * a1, AbstractClass * edx0)
{
  void **v2; // edi
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int Vtable3; // eax
  int v7; // edx
  int v8; // edi
  int v9; // eax
  int v10; // eax
  signed int v11; // ecx
  size_t i; // eax
  unsigned int *v13; // eax
  int v15[2]; // [esp+Ch] [ebp-8h] BYREF

  v2 = &this->vtable2; /*0x517d9a*/
  this->vtable4 = &off_7EB02C; /*0x517daa*/
  if ( g_WTFMode ) /*0x517dbe*/
  {
    v3 = (int)*(&this->currentMission2); /*0x517dc4*/
    if ( v3 ) /*0x517dcc*/
    {
      if ( HouseClass::CanBuild(*(&this->attachedTag5), v3, 0, 0) == -1 ) /*0x517de3*/
        *((unsigned char *)*(&this->attachedTag5) + 508) = 1; /*0x517deb*/
      if ( *(&this->lastLayer3) ) /*0x517df2*/
      {
        TeamClass::LiberateMember_Start(-1, 0); /*0x517e00*/
        *(&this->lastLayer3) = 0; /*0x517e05*/
      }
      v4 = (int)*(&this->q0483); /*0x517e0b*/
      if ( v4 && v4->slaveManager ) /*0x517e15*/
        SlaveManagerClass::LostSlave(); /*0x517e22*/
      HouseClass::DecrementUnitCount(*(&this->attachedTag5), this); /*0x517e2e*/
      if ( !*(&this->q0A43) ) /*0x517e33*/
        WinAPI::Wrapper(-2147467261); /*0x517e40*/
      (*(void (__stdcall **)(unsigned int))(*(unsigned int *)*(&this->q0A43) + 172))(*(&this->q0A43)); /*0x517e4e*/
      *(&this->suspendedMission2) = (void *)2; /*0x517e56*/
      this->Crawling = 0; /*0x517e60*/
      *(&this->currentMission3) = 0; /*0x517e66*/
      TechnoClass::CleanupDirection(); /*0x517e6c*/
    }
  }
  AbstractClass::AnnounceExpiredPointer(); /*0x517e75*/
  v15[0] = (int)this; /*0x517e89*/
  v5 = (*(int (__thiscall **)(int *, int *))(InfantryClass_Array + 16))(&InfantryClass_Array, v15); /*0x517e8d*/
  if ( v5 != -1 && v5 < g_BuildingClass_Count && v5 < --g_BuildingClass_Count ) /*0x517ea8*/
  {
    do /*0x517ec0*/
    {
      ++v5; /*0x517eb0*/
      *((unsigned int *)g_InfantryClassLimit + v5 - 1) = *((unsigned int *)g_InfantryClassLimit + v5); /*0x517eb4*/
    }
    while ( v5 < g_BuildingClass_Count ); /*0x517ec0*/
  }
  Vtable3 = AbstractClass::GetVtable3((int)v2); /*0x517ec3*/
  v7 = g_BuildingLoadQueue_Count; /*0x517ec8*/
  v8 = Vtable3; /*0x517ece*/
  if ( g_BuildingLoadQueue_Count ) /*0x517ed2*/
  {
    if ( !g_BuildingLoadQueue_Dirty ) /*0x517ede*/
    {
      qsort(g_BuildingLoadQueue_Array, g_BuildingLoadQueue_Count, 8u, CompareFunction); /*0x517eee*/
      v7 = g_BuildingLoadQueue_Count; /*0x517ef3*/
      g_BuildingLoadQueue_Active = 0; /*0x517efc*/
      g_BuildingLoadQueue_Dirty = 1; /*0x517f02*/
    }
    v15[0] = (int)(v8);
    v9 = (int)(BinaryArraySearch((int)g_BuildingLoadQueue_Array, v7, v15));
    if ( v9 ) /*0x517f1f*/
    {
      v10 = (v9 - (int)g_BuildingLoadQueue_Array) >> 3; /*0x517f27*/
      if ( v10 != -1 ) /*0x517f2d*/
      {
        v11 = v10 + 1; /*0x517f2f*/
        for ( i = g_BuildingLoadQueue_Count; v11 < (int)g_BuildingLoadQueue_Count; i = g_BuildingLoadQueue_Count ) /*0x517f39*/
        {
          v13 = (unsigned int *)((char *)g_BuildingLoadQueue_Array + 8 * v11++); /*0x517f41*/
          *(v13 - 2) = *v13; /*0x517f47*/
          *(v13 - 1) = v13[1]; /*0x517f4d*/
        }
        g_BuildingLoadQueue_Count = i - 1; /*0x517f62*/
        *((unsigned int *)g_BuildingLoadQueue_Array + 2 * g_BuildingLoadQueue_Count) = 0; /*0x517f67*/
        *((unsigned int *)g_BuildingLoadQueue_Array + 2 * g_BuildingLoadQueue_Count + 1) = 0; /*0x517f77*/
        g_BuildingLoadQueue_Active = 0; /*0x517f7b*/
      }
    }
  }
  this->isAliveFlag = 0; /*0x517f83*/
  return FootClass::Destruct(unsigned int a1); /*0x517f8e*/
}
}
// 0x7447A0
namespace gamemd {
int InfantryClass_ScanTarget_0(void * a1)
{
  return InfantryClass::ScanTarget(a1);
}
} // namespace gamemd
