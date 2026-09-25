// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_6E0080_e4.hpp"
#include "e4/classes/E4Recv_6E0250_e4.hpp"
#include "e4/classes/E4Recv_6E0270_e4.hpp"
#include "e4/classes/E4Recv_6E0290_e4.hpp"
#include "e4/classes/E4Recv_6E0490_e4.hpp"
#include "e4/classes/E4Recv_6E0790_e4.hpp"
#include "e4/classes/E4Recv_6E07F0_e4.hpp"
#include "e4/classes/E4Recv_6E0850_e4.hpp"
#include "e4/classes/E4Recv_6E1180_e4.hpp"
#include "e4/classes/E4Recv_6E14A0_e4.hpp"
#include "e4/classes/E4Recv_6E2790_e4.hpp"
#include "e4/classes/E4Recv_6E2A50_e4.hpp"
#include "e4/classes/E4Recv_6E3380_e4.hpp"
#include "e4/classes/E4Recv_6E35F0_e4.hpp"
#include "e4/classes/E4Recv_6E37F0_e4.hpp"
#include "e4/classes/E4Recv_6E3F70_e4.hpp"
#include "e4/classes/E4Recv_6E5290_e4.hpp"
#include "e4/classes/E4Recv_6E5FE0_e4.hpp"
#include "e4/classes/E4Recv_6E6B70_e4.hpp"
#include "e4/classes/E4Recv_6E8000_e4.hpp"
#include "e4/classes/E4Recv_6E85B0_e4.hpp"
#include "e4/classes/E4Recv_6EA080_e4.hpp"
#include "e4/classes/E4Recv_6EA0D0_e4.hpp"
#include "e4/classes/E4Recv_6EC370_e4.hpp"
#include "e4/classes/E4Recv_6ED200_e4.hpp"
#include "e4/classes/E4Recv_6EDDC0_e4.hpp"
#include "e4/classes/E4Recv_6EDE80_e4.hpp"
#include "e4/classes/E4Recv_6EDF10_e4.hpp"
#include "e4/classes/E4Recv_6EDF90_e4.hpp"
#include "e4/classes/E4Recv_6EDFB0_e4.hpp"
#include "e4/classes/E4Recv_6EDFD0_e4.hpp"
#include "e4/classes/E4Recv_6EE050_e4.hpp"
#include "e4/classes/E4Recv_6EE800_e4.hpp"
#include "e4/classes/E4Recv_6EF450_e4.hpp"
#include "e4/classes/E4Recv_6EF700_e4.hpp"
#include "e4/classes/E4Recv_6EFC70_e4.hpp"
#include "e4/classes/Tactical_42_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Super_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/LinkedList_flat_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/FootClass_e4.hpp"
#include "e4/e4_protos.h"

// 0x6E0250
namespace gamemd {
int E4Recv_6E0250::sub_6E0250(int a2, int a3, int a4, int a5)
{
  *((_BYTE *)g_ScenarioClass_Instance + 13479) = *(&this->u32_384); /*0x6e025c*/
  return 1; /*0x6e0264*/
}
}
// 0x6E0270
namespace gamemd {
int E4Recv_6E0270::sub_6E0270(int a2, int a3, int a4, int a5)
{
  *((_BYTE *)g_ScenarioClass_Instance + 13478) = *(&this->u32_384); /*0x6e027c*/
  return 1; /*0x6e0284*/
}
}
// 0x6E0290
namespace gamemd {
int E4Recv_6E0290::sub_6E0290(int a2, int a3, int a4, int a5)
{
  *((_BYTE *, unsigned int a3)g_ScenarioClass_Instance + 13480) = *(&this->u32_384); /*0x6e029c*/
  return 1; /*0x6e02a4*/
}
}
// 0x6E2050
namespace gamemd {
void globalHelper_0E2050()
{
  int v4; // ebp
  char v5; // bl
  int v6; // edi
  int *v7; // esi
  _DWORD *v8; // ecx
  int v9; // edx
  __int16 *v10; // esi
  int v11; // edi
  int v12; // eax
  int v13; // eax
  char v15; // [esp+1Dh] [ebp-15h]
  int v16[2]; // [esp+1Eh] [ebp-14h] BYREF
  _DWORD v17[3]; // [esp+26h] [ebp-Ch] BYREF

  v4 = a3; /*0x6e2055*/
  v15 = 0; /*0x6e205b*/
  do /*0x6e20ec*/
  {
    v5 = 0; /*0x6e2065*/
    v6 = 0; /*0x6e2067*/
    if ( g_SidebarState <= 0 ) /*0x6e206b*/
      break; /*0x6e206b*/
    do /*0x6e20e8*/
    {
      v7 = (int *)*((_DWORD *)g_TechnoClass_Count + v6); /*0x6e2076*/
      if ( v7[27] > 0 ) /*0x6e207e*/
      {
        if ( *((_BYTE *)v7 + 144) ) /*0x6e2080*/
        {
          if ( *((_BYTE *)v7 + 116) ) /*0x6e208a*/
          {
            if ( !*((_BYTE *)v7 + 129) ) /*0x6e2091*/
            {
              v8 = (_DWORD *)v7[13]; /*0x6e209b*/
              if ( v8 ) /*0x6e20a0*/
              {
                if ( LinkedList::Contains(v8, v4) ) /*0x6e20a3*/
                {
                  v9 = *v7; /*0x6e20b4*/
                  a3 = v7[27]; /*0x6e20b8*/
                  (*(void (__thiscall **)(int *, int *, _DWORD, int, _DWORD, int, _DWORD, _DWORD))(v9 + 364))( /*0x6e20d2*/
                    v7,
                    &a3,
                    0,
                    g_RulesClass_Instance->SilverCrate[5],
                    0,
                    1,
                    0,
                    0);
                  v15 = 1; /*0x6e20d8*/
                  v5 = 1; /*0x6e20dd*/
                  --v6; /*0x6e20df*/
                }
              }
            }
          }
        }
      }
      ++v6; /*0x6e20e5*/
    }
    while (v6 < g_SidebarState, unsigned int a4); /*0x6e20e8*/
  }
  while ( v5 ); /*0x6e20ec*/
  v10 = a4; /*0x6e20f2*/
  if ( *(_DWORD *)a4 != dword_B0E680 ) /*0x6e2100*/
  {
    v11 = 3; /*0x6e2119*/
    if ( !CellClass::SetTerrainType(&MapClass_Instance, a4) ) /*0x6e211e*/
    {
      do /*0x6e213b*/
        v12 = v11--; /*0x6e2127*/
      while ( v12 > 0 && !CellClass::SetTerrainType(&MapClass_Instance, v10) ); /*0x6e213b*/
    }
    v13 = *v10 << 8; /*0x6e2147*/
    v17[1] = (v10[1] << 8) + 128; /*0x6e2157*/
    v17[0] = v13 + 128; /*0x6e2165*/
    v17[2] = dword_B0E6D4; /*0x6e2171*/
    Coord::To_Screen(g_TacticalClass_Instance, v17, v16); /*0x6e217d*/
    Cell::CreateCrater(v16[0] - 128, v16[1] - 128, 256, 256, 0); /*0x6e21af*/
  }
  return v15; /*0x6e21b8*/
}
}
// 0x6E2790
namespace gamemd {
int E4Recv_6E2790::sub_6E2790(int a2, int a3, int a4, int a5)
{
  int v6; // [esp+0h] [ebp-14h] BYREF
  int v7; // [esp+4h] [ebp-10h] BYREF
  int v8[2]; // [esp+8h] [ebp-Ch] BYREF
  int GroundHeight; // [esp+10h] [ebp-4h]

  v6 = *ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v7, *(&this->u32_47)); /*0x6e27ab*/
  GroundHeight = 0; /*0x6e27af*/
  v8[1] = (IDA_SHIWORD(v6) << 8) + 128; /*0x6e27d0*/
  v8[0] = ((__int16)v6 << 8) + 128; /*0x6e27da*/
  GroundHeight = Cell::GetGroundHeight(v8); /*0x6e27e3*/
  if ( (*((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v6) + 80) & 0x100) != 0 /*0x6e2819*/
    || (*((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v6) + 80) & 0x400) != 0 )
  {
    GroundHeight += dword_B0E6D4; /*0x6e2827*/
  }
  Tactical::SetTacticalPosition((int, unsigned int a1, unsigned int a6)g_TacticalClass_Instance, v8); /*0x6e2836*/
  return 1; /*0x6e283d*/
}
}
// 0x6E30C0
namespace gamemd {
void CreateHouseClass()
{
  void *v7; // esi
  int Field11; // eax

  v7 = *(void **)(a1 + 144); /*0x6e30c1*/
  if ( !a6 ) /*0x6e30cd*/
    return 0; /*0x6e30cd*/
  if ( v7 == (void *)8997 ) /*0x6e30d5*/
  {
    Field11 = Property::GetField11(a6); /*0x6e30d7*/
  }
  else
  {
    if ( v7 == (void *)-1 ) /*0x6e30e1*/
      return 0; /*0x6e3103*/
    if ( BuildingType::IsSpecialType(v7) ) /*0x6e30e5*/
      Field11 = BuildingType::FindOwnerHouse(v7); /*0x6e30f0*/
    else
      Field11 = HouseClass::FindOwner(v7, unsigned int a2, unsigned int a3); /*0x6e30f7*/
  }
  if ( !Field11 ) /*0x6e30fe*/
    return 0; /*0x6e30fe*/
  HouseClass::RespawnStartingForces(Field11, a2, a3, (int)v7); /*0x6e3108*/
  return 1; /*0x6e3102*/
}
}
// 0x6E3380
namespace gamemd {
int E4Recv_6E3380::sub_6E3380(int a2, int a3, int a4, int a5)
{
  _DWORD *v5; // eax
  int v7; // [esp+0h] [ebp-10h] BYREF
  int v8; // [esp+4h] [ebp-Ch] BYREF
  int v9; // [esp+8h] [ebp-8h]
  int GroundHeight; // [esp+Ch] [ebp-4h]

  v7 = *ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v7, this->M68); /*0x6e339b*/
  GroundHeight = 0; /*0x6e339f*/
  v9 = (IDA_SHIWORD(v7) << 8) + 128; /*0x6e33c0*/
  v8 = ((__int16)v7 << 8) + 128; /*0x6e33ca*/
  GroundHeight = Cell::GetGroundHeight(&v8); /*0x6e33d5*/
  v5 = RA2_OPNEW(0x14u); /*0x6e33d9*/
  if ( v5 ) /*0x6e33e3*/
    ActionQueue::PushEntry(v5, v8, v9, GroundHeight); /*0x6e3400*/
  return 1; /*0x6e3407*/
}
}
// 0x6E37F0
namespace gamemd {
int E4Recv_6E37F0::sub_6E37F0(int a2, int a3, int a4, ObjectClass * aP4)
{
  int v5; // edi
  char *v6; // ebx
  int v7; // ecx
  char result; // al

  v5 = dword_A8EB10 - 1; /*0x6e37fa*/
  if ( dword_A8EB10 - 1 >= 0 ) /*0x6e3803*/
  {
    v6 = (char *)dword_A8EB04 + 4 * v5; /*0x6e380b*/
    while ( strcmp((const char *)(*(_DWORD *)v6 + 36), (const char *)(&this->u32_204)) ) /*0x6e3845*/
    {
      --v5; /*0x6e3847*/
      v6 -= 4; /*0x6e3848*/
      if ( v5 < 0 ) /*0x6e384d*/
        goto LABEL_7; /*0x6e384d*/
    }
    *(_DWORD *)(*(_DWORD *)v6 + 1588) = this->M144; /*0x6e385b*/
  }
  LABEL_7:
  v7 = HouseClass_Count - 1; /*0x6e3861*/
  for ( result = 1; v7 >= 0; *(_BYTE *)(*(_DWORD *)&HouseClass_Array->gap0[4 * v7 + 4] + 508) = 1 ) /*0x6e3870*/
    --v7; /*0x6e3878*/
  return result; /*0x6e3867*/
}
}
// 0x6E4090
namespace gamemd {
void sub_6E4090(int a1, int a2, int a3, int a4)
{
  int v4; // edi
  int v5; // esi
  _DWORD *v6; // ecx

  v4 = 0; /*0x6e409b*/
  if ( g_BuildingProductionState <= 0 ) /*0x6e409f*/
    return 0; /*0x6e40e3*/
  while ( 1 ) /*0x6e40aa*/
  {
    v5 = *((_DWORD *)g_BuildingClass_InstanceCount + v4); /*0x6e40aa*/
    if ( *(_BYTE *)(v5 + 144) ) /*0x6e40ad*/
    {
      if ( *(_BYTE *)(v5 + 116) ) /*0x6e40b7*/
      {
        if ( !*(_BYTE *)(v5 + 129) ) /*0x6e40be*/
        {
          v6 = *(_DWORD **)(v5 + 52); /*0x6e40c8*/
          if ( v6 ) /*0x6e40cd*/
          {
            if ( LinkedList::Contains(v6, a3) ) /*0x6e40d0*/
              break; /*0x6e40d0*/
          }
        }
      }
    }
    if ( ++v4 >= g_BuildingProductionState ) /*0x6e40e1*/
      return 0; /*0x6e40e1*/
  }
  BuildingClass::UnloadUnits((int *)v5, 0, 0); /*0x6e40f2*/
  return 1; /*0x6e40e3*/
}
}
// 0x6EC250
namespace gamemd {
int sub_6EC250(int a1, int a2)
{
  int result; // eax
  int i; // ebp
  int v4; // esi
  int j; // eax
  int v7; // eax
  int v10; // [esp+10h] [ebp-8h]

  result = g_HouseClass_AIProductionState; /*0x6ec253*/
  for ( i = 0; i < g_HouseClass_AIProductionState; ++i ) /*0x6ec265*/
  {
    v4 = *((_DWORD *)g_TeamClassPool + i); /*0x6ec275*/
    if ( v4 && a2 == v4->owner && v4->buildingType->q0B4 < a1 ) /*0x6ec294*/
    {
      for ( j = v4->firstUnit; j; j = v4->firstUnit ) /*0x6ec29b*/
        TeamClass::LiberateMember_Start(v4, j, 0xFFFFFFFF, 0); /*0x6ec2a4*/
      v4->TeamClass_field_7E = 1; /*0x6ec2b0*/
      v4->needsToDisappear = 1; /*0x6ec2b3*/
      g_CurrentFrame = g_CurrentFrame; /*0x6ec2bc*/
      v7 = Math::RoundToInt(*(double *)&g_RulesClass_Instance[1].AITriggerTrackRecordCoefficient * 900.0); /*0x6ec2ce*/
      v4->isSuspended = 1; /*0x6ec2da*/
      v4->suspendTimer = g_CurrentFrame; /*0x6ec2e0*/
      v4->q068 = v10; /*0x6ec2e2*/
      v4->q06C = v7; /*0x6ec2e5*/
    }
    result = g_HouseClass_AIProductionState; /*0x6ec2e8*/
  }
  return result; /*0x6ec2f9*/
}
}
// 0x6EDFD0
namespace gamemd {
void E4Recv_6EDFD0::sub_6EDFD0(int a2, int a3)
{
  int v4; // esi
  char v5; // cl
  int v6; // [esp+8h] [ebp-4h] BYREF

  do /*0x6ee038*/
  {
    v4 = this->q054; /*0x6edfd5*/
    v5 = 0; /*0x6edfd8*/
    if ( !v4 ) /*0x6edfdc*/
      break; /*0x6edfdc*/
    do /*0x6ee034*/
    {
      if ( *(int *)(v4 + 108) > 0 && *(_BYTE *)(v4 + 144) && *(_BYTE *)(v4 + 116) && !*(_BYTE *)(v4 + 129) ) /*0x6edff6*/
      {
        v6 = *(_DWORD *)(v4 + 108); /*0x6ee008*/
        (*(void (__thiscall **)(int, int *, _DWORD, int, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)v4 + 364))( /*0x6ee024*/
          v4,
          &v6,
          0,
          g_RulesClass_Instance->SilverCrate[5],
          0,
          1,
          0,
          0);
        v5 = 1; /*0x6ee02a*/
      }
      v4 = *(_DWORD *)(v4 + 1496); /*0x6ee02c*/
    }
    while ( v4 ); /*0x6ee034*/
  }
  while ( v5 ); /*0x6ee038*/
  this->needsRedraw = 1; /*0x6ee03a*/
}
}
// 0x6EEBD0
namespace gamemd {
unsigned int * DamageMapClassArea(int ecx0, void * a1, FootClass * aP2, int a4, char a5)
{
  int v5; // ecx
  _DWORD *result; // eax
  _DWORD *v7; // esi
  void *v8; // eax
  int v9; // edi
  int v10; // ecx
  _DWORD *v11; // eax
  int v12; // edx
  _DWORD *v13; // eax
  int v14; // edx
  int TileData; // eax
  int v16; // ecx
  int v17; // edi
  int v18; // ebx
  int v19; // ecx
  int v20; // edx
  double v21; // st7
  int v22; // eax
  int v23; // edi
  int v24; // ebx
  int v25; // ecx
  int v26; // eax
  int v27; // ecx
  int v28; // edx
  double v29; // st7
  bool v30; // [esp+1Bh] [ebp-75h]
  int v31; // [esp+1Ch] [ebp-74h]
  int v32; // [esp+20h] [ebp-70h]
  int v33; // [esp+24h] [ebp-6Ch]
  int v34; // [esp+28h] [ebp-68h]
  int v35; // [esp+2Ch] [ebp-64h]
  _DWORD *v36; // [esp+30h] [ebp-60h]
  _DWORD *v37; // [esp+34h] [ebp-5Ch]
  int v40; // [esp+40h] [ebp-50h] BYREF
  int v41; // [esp+44h] [ebp-4Ch] BYREF
  int v42; // [esp+48h] [ebp-48h]
  int v43; // [esp+4Ch] [ebp-44h]
  int v44; // [esp+50h] [ebp-40h]
  int v45; // [esp+54h] [ebp-3Ch]
  int v46; // [esp+58h] [ebp-38h]
  int v47; // [esp+5Ch] [ebp-34h]
  int v48; // [esp+68h] [ebp-28h]
  int v49; // [esp+74h] [ebp-1Ch]
  char v50[12]; // [esp+78h] [ebp-18h] BYREF
  char v51[12]; // [esp+84h] [ebp-Ch] BYREF

  v5 = 0; /*0x6eebe4*/
  v31 = -1; /*0x6eebe6*/
  v32 = -1; /*0x6eebea*/
  result = 0; /*0x6eebf5*/
  v36 = 0; /*0x6eebfb*/
  v37 = 0; /*0x6eebff*/
  v35 = 0; /*0x6eec03*/
  if ( g_BuildingProductionState <= 0 ) /*0x6eec07*/
  {
  LABEL_22:
    if ( !a5 ) /*0x6eee74*/
      return v37; /*0x6eee76*/
    return result; /*0x6eee76*/
  }
  do /*0x6eee55*/
  {
    v7 = (_DWORD *)*((_DWORD *)g_BuildingClass_InstanceCount + v5); /*0x6eec1a*/
    v8 = (void *)v7[135]; /*0x6eec1d*/
    v30 = v8 == a1; /*0x6eec30*/
    if ( v7[328] != ecx0 ) /*0x6eec34*/
      goto LABEL_19; /*0x6eec34*/
    if ( v8 == a1 ) /*0x6eec3c*/
    {
      v9 = aP2; /*0x6eec6a*/
    }
    else
    {
      v9 = aP2; /*0x6eec3e*/
      if ( (unsigned __int8)HouseClass::IsAlliedWith(*(void **)(aP2 + 540), v8) /*0x6eec62*/
        && !*(_BYTE *)(*(_DWORD *)(v7[135] + 52) + 422) )
      {
        goto LABEL_19; /*0x6eec62*/
      }
    }
    v10 = -1; /*0x6eec70*/
    switch ( a4 ) /*0x6eec7c*/
    {
      case 0: /*0x6eec7c*/
        v11 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, char *))(*v7 + 72))(v7, v50); /*0x6eec8c*/
        IDA_LOWORD(v33) = *v11 / 256; /*0x6eec9f*/
        v12 = *(_DWORD *)(v9 + 540); /*0x6eecb0*/
        IDA_HIWORD(v33) = v11[1] / 256; /*0x6eecb9*/
        v40 = v33; /*0x6eecc6*/
        v10 = 0x7FFFFFFF - CellClass::GetTileData((__int16 *)&v40, v12); /*0x6eecdb*/
        break; /*0x6eecdd*/
      case 1: /*0x6eec7c*/
        v13 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, char *))(*v7 + 72))(v7, v51); /*0x6eeceb*/
        IDA_LOWORD(v34) = *v13 / 256; /*0x6eecfe*/
        v14 = *(_DWORD *)(v9 + 540); /*0x6eed0f*/
        IDA_HIWORD(v34) = v13[1] / 256; /*0x6eed18*/
        v41 = v34; /*0x6eed25*/
        TileData = CellClass::GetTileData((__int16 *)&v41, v14); /*0x6eed30*/
        goto LABEL_13; /*0x6eed35*/
      case 2: /*0x6eec7c*/
        v16 = v9 + 156; /*0x6eed46*/
        v17 = *(_DWORD *)(v9 + 156); /*0x6eed4b*/
        v18 = *(_DWORD *)(v16 + 4); /*0x6eed4d*/
        v48 = *(_DWORD *)(v16 + 8); /*0x6eed53*/
        v19 = v7[40]; /*0x6eed5d*/
        v42 = v7[39] - v17; /*0x6eed60*/
        v20 = v7[41]; /*0x6eed6a*/
        v43 = v19 - v18; /*0x6eed6d*/
        v44 = v20 - v48; /*0x6eed77*/
        v21 = Math::Sqrt( /*0x6eed9c*/
                (double)v42 * (double)v42
              + (double)(v20 - v48) * (double)(v20 - v48)
              + (double)(v19 - v18) * (double)(v19 - v18));
        v10 = 0x7FFFFFFF - Math::RoundToInt(v21); /*0x6eedae*/
        break; /*0x6eedb0*/
      case 3: /*0x6eec7c*/
        v22 = v9 + 156; /*0x6eedbe*/
        v23 = *(_DWORD *)(v9 + 156); /*0x6eedc3*/
        v24 = *(_DWORD *)(v22 + 4); /*0x6eedc5*/
        v25 = *(_DWORD *)(v22 + 8); /*0x6eedc8*/
        v26 = v7[39]; /*0x6eedcb*/
        v49 = v25; /*0x6eedcd*/
        v27 = v7[40] - v24; /*0x6eedda*/
        v45 = v26 - v23; /*0x6eeddc*/
        v28 = v7[41]; /*0x6eede0*/
        v46 = v27; /*0x6eede3*/
        v47 = v28 - v49; /*0x6eeded*/
        v29 = Math::Sqrt( /*0x6eee12*/
                (double)(v26 - v23) * (double)(v26 - v23)
              + (double)(v28 - v49) * (double)(v28 - v49)
              + (double)v27 * (double)v27);
        TileData = Math::RoundToInt(v29); /*0x6eee1a*/
  LABEL_13:
        v10 = TileData; /*0x6eee1f*/
        break; /*0x6eee1f*/
      default:
        break;
    }
    if ( v10 > v31 && v30 ) /*0x6eee2d*/
    {
      v36 = v7; /*0x6eee2f*/
      v31 = v10; /*0x6eee33*/
    }
    if ( v10 > v32 ) /*0x6eee3b*/
    {
      v37 = v7; /*0x6eee3d*/
      v32 = v10; /*0x6eee41*/
    }
  LABEL_19:
    v5 = ++v35; /*0x6eee45*/
  }
  while ( v35 < g_BuildingProductionState ); /*0x6eee55*/
  result = v36; /*0x6eee5b*/
  if ( !v36 || v31 <= v32 ) /*0x6eee6d*/
    goto LABEL_22; /*0x6eee6d*/
  return result; /*0x6eee7a*/
}
}
// 0x6EFC70
namespace gamemd {
AbstractClass * * E4Recv_6EFC70::ProcessAISuperWeaponSelection(ScriptClass * aP1, int a3)
{
  int v3; // esi
  int v4; // ebp
  int i; // ebx
  int v6; // edi
  int v7; // edi
  int v8; // eax
  int v9; // ecx
  int j; // edx
  int v11; // esi
  _DWORD *v13; // eax
  int v14; // eax
  int v15; // edx
  int v16; // ecx
  int *v17; // [esp+10h] [ebp-18h] BYREF
  int v18; // [esp+14h] [ebp-14h]
  int DefaultTimer; // [esp+18h] [ebp-10h]
  char v20[12]; // [esp+1Ch] [ebp-Ch] BYREF

  v3 = *(this + 21); /*0x6efc76*/
  v4 = -1; /*0x6efc79*/
  v17 = this; /*0x6efc7f*/
  for ( i = v3; v3; v3 = v3->q5D8 ) /*0x6efc85*/
  {
    v6 = *(_DWORD *)((*(int (__thiscall **)(int))(v3->hasParachute)(v3) + 1532); /*0x6efc91*/
    if ( TechnoClass::IsDeployed(v3) /*0x6efcba*/
      && (v3->u8_689 || (*(int (__thiscall **)(int))(v3->fallRate)(v3) == 2)
      && v6 > v4 )
    {
      i = v3; /*0x6efcbc*/
      v4 = v6; /*0x6efcbe*/
    }
  }
  if ( !i ) /*0x6efccc*/
  {
    *((_BYTE *)v17 + 128) = 1; /*0x6efcd5*/
    return; /*0x6efce0*/
  }
  v7 = i->owner; /*0x6efce3*/
  v8 = 0; /*0x6efce9*/
  v9 = *(_DWORD *)(v7 + 612); /*0x6efcf0*/
  if ( v9 <= 0 ) /*0x6efcf8*/
    goto LABEL_16; /*0x6efcf8*/
  for ( j = *(_DWORD *)(v7 + 600); *(_DWORD *)(*(_DWORD *)(*(_DWORD *)j + 40) + 180) != 1; j += 4 ) /*0x6efd00*/
  {
    if ( ++v8 >= v9 ) /*0x6efd15*/
    {
      *((_BYTE *)v17 + 128) = 1; /*0x6efd1e*/
      return; /*0x6efd28*/
    }
  }
  v11 = *(_DWORD *)(*(_DWORD *)(v7 + 600) + 4 * v8); /*0x6efd2b*/
  if ( !v11 ) /*0x6efd30*/
  {
  LABEL_16:
    *((_BYTE *)v17 + 128) = 1; /*0x6efd39*/
    return; /*0x6efd43*/
  }
  if ( *(_BYTE *)(v11 + 111) && HouseClass::GetPowerRatio((int *)v7) >= 1.0 ) /*0x6efd5f*/
  {
    v17 = v17; /*0x6efd61*/
    v13 = (_DWORD *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)v17[13] + 72))(v17[13], v20); /*0x6efd6f*/
    IDA_LOWORD(v18) = *v13 / 256; /*0x6efd82*/
    IDA_HIWORD(v18) = v13[1] / 256; /*0x6efd9a*/
    v14 = *(_DWORD *)(v11 + 40); /*0x6efda3*/
    v17 = (int *)v18; /*0x6efda6*/
    SuperWeapon::FireSuperWeaponHouseClass((void *)v7, *(_DWORD *)(v14 + 180), (int)&v17); /*0x6efdb4*/
    *((_BYTE *)v17 + 128) = 1; /*0x6efdba*/
    return; /*0x6efdc6*/
  }
  v15 = *(_DWORD *)(v11 + 48); /*0x6efdc9*/
  v16 = *(_DWORD *)(v11 + 56); /*0x6efdcc*/
  if ( v15 == -1 ) /*0x6efdd2*/
    goto LABEL_23; /*0x6efdd2*/
  if ( (int)g_CurrentFrame - v15 < v16 ) /*0x6efddd*/
  {
    v16 -= (int)g_CurrentFrame - v15; /*0x6efddf*/
  LABEL_23:
    v18 = v16; /*0x6efde1*/
    goto LABEL_24; /*0x6efde1*/
  }
  v18 = 0; /*0x6efe32*/
  LABEL_24:
  DefaultTimer = Super::GetDefaultTimer((_DWORD *)v11); /*0x6efde5*/
  if ( *(_BYTE *)(v11 + 109) ) /*0x6efdf0*/
  {
    if ( 1.0 - *(float *)&g_RulesClass_Instance->RefineryRatio < (double)v18 / (double)DefaultTimer ) /*0x6efe1c*/
      *((_BYTE *)v17 + 128) = 1; /*0x6efe25*/
  }
  else
  {
    *((_BYTE *)v17 + 128) = 1; /*0x6efe42*/
  }
}
}
// 0x6E0030
namespace gamemd {
char sub_6E0030(int a1, int a2, int a3, int a4)
{
  return 1; /*0x6e0032*/
}
} // namespace gamemd

// 0x6E0040
namespace gamemd {
char sub_6E0040(int a1, int a2, int a3, int a4)
{
  return 1; /*0x6e0042*/
}
} // namespace gamemd

// 0x6E0080
namespace gamemd {
char E4Recv_6E0080::sub_6E0080(int a2, int a3, int a4, int a5)
{
  int v5; // ebx
  int v6; // edi
  __int16 v7; // bp
  _BYTE *v8; // esi
  _WORD *v9; // eax

  v5 = *ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v5, *(&this->vtable27)); /*0x6e0097*/
  v6 = 0; /*0x6e009e*/
  v5 = v5; /*0x6e00a0*/
  if ( g_GameCleanupState <= 0 ) /*0x6e00a6*/
    return 1; /*0x6e00fb*/
  v7 = IDA_HIWORD(v5); /*0x6e00a9*/
  do /*0x6e00ee*/
  {
    v8 = (_BYTE *)*((_DWORD *)dword_A8020C + v6); /*0x6e00b5*/
    if ( v8[144] ) /*0x6e00b8*/
    {
      v9 = (_WORD *)(*(int (__thiscall **)(_BYTE *, int *))(*(_DWORD *)v8 + 440))(v8, &v5); /*0x6e00cb*/
      if ( *v9 == (_WORD)v5 && v9[1] == v7 ) /*0x6e00da*/
        (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 248))(v8); /*0x6e00e0*/
    }
    ++v6; /*0x6e00eb*/
  }
  while ( v6 < g_GameCleanupState ); /*0x6e00ee*/
  return 1; /*0x6e00f2*/
}
} // namespace gamemd

// 0x6E01C0
namespace gamemd {
char globalHelper_0E01C0(int a1, int a2, int aP1, IUnknown * aP3)
{
  int v4; // edi
  _BYTE *v5; // esi
  _DWORD *v6; // ecx

  v4 = 0; /*0x6e01c6*/
  if ( g_SidebarState <= 0 ) /*0x6e01ca*/
    return 1; /*0x6e0245*/
  do /*0x6e023b*/
  {
    v5 = (_BYTE *)*((_DWORD *)g_TechnoClass_Count + v4); /*0x6e01d7*/
    if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v5 + 44))(v5) != 6 ) /*0x6e01e4*/
    {
      if ( v5[144] ) /*0x6e01e6*/
      {
        if ( v5[116] ) /*0x6e01f0*/
        {
          v6 = (_DWORD *)*((_DWORD *)v5 + 13); /*0x6e01f7*/
          if ( v6 ) /*0x6e01fc*/
          {
            if ( LinkedList::Contains(v6, aP1) /*0x6e0223*/
              && (!(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v5 + 388))(v5)
               || (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v5 + 388))(v5) == 23) )
            {
              (*(void (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)v5 + 488))(v5, 5, 0); /*0x6e022d*/
            }
          }
        }
      }
    }
    ++v4; /*0x6e0238*/
  }
  while ( v4 < g_SidebarState ); /*0x6e023b*/
  return 1; /*0x6e0241*/
}
} // namespace gamemd

// 0x6E0790
namespace gamemd {
char E4Recv_6E0790::sub_6E0790(int a2, int a3, int a4, int a5)
{
  int v5; // esi
  int *WorldCoords; // eax
  _DWORD v8[3]; // [esp+4h] [ebp-Ch] BYREF

  v5 = g_RulesClass_Instance->SilverCrate[5]; /*0x6e07a3*/
  WorldCoords = Cell::GetWorldCoords((__int16 *)g_ScenarioClass_Instance, v8, *(&this->vtable46)); /*0x6e07b5*/
  CreateSmokeEffectAt(50, v5, *WorldCoords, WorldCoords[1], WorldCoords[2], 0, 0); /*0x6e07d6*/
  return 1; /*0x6e07dd*/
}
} // namespace gamemd

// 0x6E07F0
namespace gamemd {
char E4Recv_6E07F0::sub_6E07F0(int a2, int a3, int a4, int a5)
{
  int v5; // esi
  int *WorldCoords; // eax
  _DWORD v8[3]; // [esp+4h] [ebp-Ch] BYREF

  v5 = g_RulesClass_Instance->SilverCrate[5]; /*0x6e0803*/
  WorldCoords = Cell::GetWorldCoords((__int16 *)g_ScenarioClass_Instance, v8, *(&this->vtable46)); /*0x6e0815*/
  CreateSmokeEffectAt(100, v5, *WorldCoords, WorldCoords[1], WorldCoords[2], 0, 0); /*0x6e0836*/
  return 1; /*0x6e083d*/
}
} // namespace gamemd

// 0x6E0850
namespace gamemd {
char E4Recv_6E0850::sub_6E0850(int a2, int a3, int a4, int a5)
{
  int v5; // esi
  int *WorldCoords; // eax
  _DWORD v8[3]; // [esp+4h] [ebp-Ch] BYREF

  v5 = g_RulesClass_Instance->SilverCrate[5]; /*0x6e0863*/
  WorldCoords = Cell::GetWorldCoords((__int16 *)g_ScenarioClass_Instance, v8, *(&this->vtable46)); /*0x6e0875*/
  CreateSmokeEffectAt(300, v5, *WorldCoords, WorldCoords[1], WorldCoords[2], 0, 0); /*0x6e0896*/
  return 1; /*0x6e089d*/
}
} // namespace gamemd

// 0x6E1180
namespace gamemd {
char E4Recv_6E1180::sub_6E1180(int a2, int a3, int a4, int a5)
{
  int v6; // [esp+0h] [ebp-8h] BYREF
  int v7; // [esp+4h] [ebp-4h] BYREF

  v6 = *ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v7, *(&this->vtable46)); /*0x6e11a6*/
  MapClass::TriggerEVA((__int16 *)&v6); /*0x6e11aa*/
  return 1; /*0x6e11b1*/
}
} // namespace gamemd

// 0x6E21D0
namespace gamemd {
char sub_6E21D0(int a1, int a2, int a3, int a4)
{
  return 1; /*0x6e21d2*/
}
} // namespace gamemd

// 0x6E2A50
namespace gamemd {
char E4Recv_6E2A50::sub_6E2A50(int a2, int a3, int a4, int a5)
{
  int v6; // edi
  int v7; // esi
  _DWORD *v8; // eax
  int v9; // ecx

  if ( *(&this->vtable29) ) /*0x6e2a55*/
  {
    g_GameObjectCleanup = g_GameObjectCleanup; /*0x6e2a5c*/
    v7 = 0; /*0x6e2a62*/
    if ( g_GameObjectCleanup > 0 ) /*0x6e2a66*/
    {
      v8 = g_TagClassCount; /*0x6e2a68*/
      do /*0x6e2a91*/
      {
        if ( *(_DWORD *)(v8[v7] + 36) == *(&this->vtable29) ) /*0x6e2a78*/
        {
          v9 = v8[v7]; /*0x6e2a7a*/
          if ( v9 ) /*0x6e2a7f*/
          {
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 32))(v9, 1); /*0x6e2a85*/
            v8 = g_TagClassCount; /*0x6e2a88*/
          }
          --v7; /*0x6e2a8d*/
        }
        ++v7; /*0x6e2a8e*/
      }
      while ( v7 < g_GameObjectCleanup ); /*0x6e2a91*/
    }
  }
  return 1; /*0x6e2a93*/
}
} // namespace gamemd

// 0x6E2C20
namespace gamemd {
char globalHelper_0E2C20(int a1, int a2, int a3, IUnknown * aP3)
{
  LayerClass::ClearFactoryCellAssignments(&MapClass_Instance); /*0x6e2c25*/
  MapClass::MarkForRedraw(&MapClass_Instance, 1); /*0x6e2c31*/
  return 1; /*0x6e2c38*/
}
} // namespace gamemd

// 0x6E35F0
namespace gamemd {
char E4Recv_6E35F0::sub_6E35F0(void * a2, int a3, int a4, int a5)
{
  int v6; // [esp+0h] [ebp-14h] BYREF
  int v7; // [esp+4h] [ebp-10h] BYREF
  int v8; // [esp+8h] [ebp-Ch] BYREF
  int v9; // [esp+Ch] [ebp-8h]
  int GroundHeight; // [esp+10h] [ebp-4h]

  v6 = *ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v7, *(&this->vtable27)); /*0x6e360b*/
  GroundHeight = 0; /*0x6e360f*/
  v9 = (IDA_SHIWORD(v6) << 8) + 128; /*0x6e3630*/
  v8 = ((__int16)v6 << 8) + 128; /*0x6e363a*/
  GroundHeight = Cell::GetGroundHeight(&v8); /*0x6e3643*/
  if ( (*((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v6) + 80) & 0x100) != 0 ) /*0x6e365f*/
    GroundHeight += dword_B0E6D4; /*0x6e366d*/
  IDA_LOWORD(v7) = v8 / 256; /*0x6e3681*/
  IDA_HIWORD(v7) = v9 / 256; /*0x6e3696*/
  if ( LightningStorm::IsActive() ) /*0x6e369b*/
    return 0; /*0x6e36cc*/
  LightningStorm::Start(IDA_HIDWORD(g_RulesClass_Instance[1].Climb), *(_DWORD *)&g_RulesClass_Instance[1].gap370[4], v7, a2); /*0x6e36bf*/
  return 1; /*0x6e36c6*/
}
} // namespace gamemd

// 0x6E3F70
namespace gamemd {
unsigned int * E4Recv_6E3F70::sub_6E3F70(unsigned int * a2)
{
  _DWORD *WorldCoords; // edx
  _DWORD v4[3]; // [esp+4h] [ebp-Ch] BYREF

  WorldCoords = Cell::GetWorldCoords((__int16 *)g_ScenarioClass_Instance, v4, *(&this->vtable46)); /*0x6e3f8b*/
  *a2 = *WorldCoords; /*0x6e3f95*/
  a2[1] = WorldCoords[1]; /*0x6e3f9a*/
  a2[2] = WorldCoords[2]; /*0x6e3fa1*/
  return a2; /*0x6e3f9d*/
}
} // namespace gamemd

// 0x6E4440
namespace gamemd {
char globalHelper_0E4440(unsigned int * a0, int a2, int a3, IUnknown * aP3)
{
  if ( !a0 ) /*0x6e4446*/
    return 0; /*0x6e4448*/
  GlobalHelper_0E4440_Helper(a0); /*0x6e444d*/
  return 1; /*0x6e444a*/
}
} // namespace gamemd

// 0x6E44C0
namespace gamemd {
char globalHelper_0E44C0(unsigned int * a0, int a2, int a3, IUnknown * aP3)
{
  if ( !a0 ) /*0x6e44c6*/
    return 0; /*0x6e44c8*/
  GlobalHelper_0E44C0_Helper(a0); /*0x6e44cd*/
  return 1; /*0x6e44ca*/
}
} // namespace gamemd

// 0x6E4540
namespace gamemd {
char globalHelper_0E4540(unsigned int * a0, int a2, int a3, IUnknown * aP3)
{
  if ( !a0 ) /*0x6e4546*/
    return 0; /*0x6e4548*/
  GlobalHelper_0E4540_Helper(a0); /*0x6e454d*/
  return 1; /*0x6e454a*/
}
} // namespace gamemd

// 0x6E4B00
namespace gamemd {
unsigned int * Tactical_42::loc_6E4B00(char a2)
{
    void *v3;
    v3 = (void *)this->Items;
    *(void**)this = &vt_VectorClass_TActionClass;
    if ( v3 && this->IsAllocated )
  {
    RA2_OPDEL(v3);
    this->Items = 0;
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
    if ( (a2 & 1) != 0 )
    RA2_OPDEL();
    return this;
}
} // namespace gamemd

// 0x6E4B50
namespace gamemd {
void sub_6E4B50()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6e4b5c*/
  dbl_B0E708 = Math::Sqrt(v0 + v0); /*0x6e4b6e*/
}
} // namespace gamemd

// 0x6E4B80
namespace gamemd {
void sub_6E4B80()
{
  dbl_B0E770 = dbl_B0E708 / 60.0; /*0x6e4b8c*/
}
} // namespace gamemd

// 0x6E4BA0
namespace gamemd {
void sub_6E4BA0()
{
  dbl_B0E758 = 1.0 / dbl_B0E770; /*0x6e4bac*/
}
} // namespace gamemd

// 0x6E4BC0
namespace gamemd {
void sub_6E4BC0()
{
  dbl_B0E750 = 0.0174532925199433 * 45.0; /*0x6e4bcc*/
}
} // namespace gamemd

// 0x6E4BE0
namespace gamemd {
void sub_6E4BE0()
{
  dbl_B0E710 = 0.0174532925199433 * 60.0; /*0x6e4bec*/
}
} // namespace gamemd

// 0x6E4C00
namespace gamemd {
void sub_6E4C00()
{
  dbl_B0E6E8 = 0.0174532925199433 * 90.0; /*0x6e4c0c*/
}
} // namespace gamemd

// 0x6E4C20
namespace gamemd {
long long sub_6E4C20()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0E6E8 - dbl_B0E710); /*0x6e4c32*/
  result = Math::RoundToInt(v0 * dbl_B0E708 * 0.5); /*0x6e4c46*/
  dword_B0E778 = result; /*0x6e4c4b*/
  return result; /*0x6e4c50*/
}
} // namespace gamemd

// 0x6E4C60
namespace gamemd {
void sub_6E4C60()
{
  dbl_B0E718 = Math::ArcTan((double)dword_B0E778 * 0.00390625); /*0x6e4c77*/
}
} // namespace gamemd

// 0x6E4C90
namespace gamemd {
void sub_6E4C90()
{
  dbl_B0E748 = Math::ArcTan((double)(2 * dword_B0E778) / dbl_B0E708); /*0x6e4cb2*/
}
} // namespace gamemd

// 0x6E4CC0
namespace gamemd {
long long sub_6E4CC0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0E778) + 0.5); /*0x6e4cdb*/
  dword_B0E76C = result; /*0x6e4ce0*/
  return result; /*0x6e4ce6*/
}
} // namespace gamemd

// 0x6E4CF0
namespace gamemd {
int sub_6E4CF0()
{
  dword_B0E700 = 0; /*0x6e4cf2*/
  return 0; /*0x6e4cfe*/
}
} // namespace gamemd

// 0x6E4D00
namespace gamemd {
int sub_6E4D00()
{
  dword_B0E738 = 0; /*0x6e4d02*/
  dword_B0E73C = 0; /*0x6e4d07*/
  dword_B0E740 = 0; /*0x6e4d0c*/
  return 0; /*0x6e4d11*/
}
} // namespace gamemd

// 0x6E4D20
namespace gamemd {
int sub_6E4D20()
{
  dword_B0E768 = 0; /*0x6e4d25*/
  dword_B0E760 = 128; /*0x6e4d2f*/
  dword_B0E764 = 128; /*0x6e4d34*/
  return 128; /*0x6e4d39*/
}
} // namespace gamemd

// 0x6E4D40
namespace gamemd {
int sub_6E4D40()
{
  dword_B0E6F0 = 0; /*0x6e4d42*/
  dword_B0E6F4 = 0; /*0x6e4d47*/
  dword_B0E6F8 = 0; /*0x6e4d4c*/
  dword_B0E6FC = 0; /*0x6e4d51*/
  return 0; /*0x6e4d56*/
}
} // namespace gamemd

// 0x6E4D60
namespace gamemd {
int sub_6E4D60()
{
  g_TagClassCount = 0; /*0x6e4d67*/
  dword_B0E728 = 0; /*0x6e4d6c*/
  byte_B0E72C = 1; /*0x6e4d71*/
  byte_B0E72D = 0; /*0x6e4d78*/
  TagClass_Array = (int)&(void*)(void*)&DynamicVectorClass_TagClass___vftable; /*0x6e4d7d*/
  dword_B0E734 = 10; /*0x6e4d87*/
  g_GameObjectCleanup = 0; /*0x6e4d91*/
  return atexit(sub_6E4DA0); /*0x6e4d9c*/
}
} // namespace gamemd

// 0x6E4DA0
namespace gamemd {
void sub_6E4DA0()
{
  TagClass_Array = (int)&(void*)(void*)&VectorClass_TagClass___vftable; /*0x6e4da8*/
  if ( g_TagClassCount && byte_B0E72D ) /*0x6e4dbc*/
  {
    RA2_OPDEL(g_TagClassCount); /*0x6e4dbf*/
    g_TagClassCount = 0; /*0x6e4dc7*/
  }
  byte_B0E72D = 0; /*0x6e4dcd*/
  dword_B0E728 = 0; /*0x6e4dd3*/
}
} // namespace gamemd

// 0x6E5290
namespace gamemd {
char E4Recv_6E5290::sub_6E5290()
{
  return *(this + 52); /*0x6e5293*/
}
} // namespace gamemd

// 0x6E57DE
namespace gamemd {
char _do_always_noconv_codecvt_base_std__MBE_NXZ_18()
{
  return 1; /*0x6e57e0*/
}
} // namespace gamemd

// 0x6E58D0
namespace gamemd {
void sub_6E58D0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6e58dc*/
  dbl_B0E7B8 = Math::Sqrt(v0 + v0); /*0x6e58ee*/
}
} // namespace gamemd

// 0x6E5900
namespace gamemd {
void sub_6E5900()
{
  dbl_B0E808 = dbl_B0E7B8 / 60.0; /*0x6e590c*/
}
} // namespace gamemd

// 0x6E5920
namespace gamemd {
void sub_6E5920()
{
  dbl_B0E7F0 = 1.0 / dbl_B0E808; /*0x6e592c*/
}
} // namespace gamemd

// 0x6E5940
namespace gamemd {
void sub_6E5940()
{
  dbl_B0E7E8 = 0.0174532925199433 * 45.0; /*0x6e594c*/
}
} // namespace gamemd

// 0x6E5960
namespace gamemd {
void sub_6E5960()
{
  dbl_B0E7C0 = 0.0174532925199433 * 60.0; /*0x6e596c*/
}
} // namespace gamemd

// 0x6E5980
namespace gamemd {
void sub_6E5980()
{
  dbl_B0E798 = 0.0174532925199433 * 90.0; /*0x6e598c*/
}
} // namespace gamemd

// 0x6E59A0
namespace gamemd {
long long sub_6E59A0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0E798 - dbl_B0E7C0); /*0x6e59b2*/
  result = Math::RoundToInt(v0 * dbl_B0E7B8 * 0.5); /*0x6e59c6*/
  dword_B0E810 = result; /*0x6e59cb*/
  return result; /*0x6e59d0*/
}
} // namespace gamemd

// 0x6E59E0
namespace gamemd {
void sub_6E59E0()
{
  dbl_B0E7C8 = Math::ArcTan((double)dword_B0E810 * 0.00390625); /*0x6e59f7*/
}
} // namespace gamemd

// 0x6E5A10
namespace gamemd {
void sub_6E5A10()
{
  dbl_B0E7E0 = Math::ArcTan((double)(2 * dword_B0E810) / dbl_B0E7B8); /*0x6e5a32*/
}
} // namespace gamemd

// 0x6E5A40
namespace gamemd {
long long sub_6E5A40()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0E810) + 0.5); /*0x6e5a5b*/
  dword_B0E804 = result; /*0x6e5a60*/
  return result; /*0x6e5a66*/
}
} // namespace gamemd

// 0x6E5A70
namespace gamemd {
int sub_6E5A70()
{
  word_B0E7B0 = 0; /*0x6e5a72*/
  word_B0E7B2 = 0; /*0x6e5a78*/
  return 0; /*0x6e5a7e*/
}
} // namespace gamemd

// 0x6E5A80
namespace gamemd {
int sub_6E5A80()
{
  dword_B0E7D0 = 0; /*0x6e5a82*/
  dword_B0E7D4 = 0; /*0x6e5a87*/
  dword_B0E7D8 = 0; /*0x6e5a8c*/
  return 0; /*0x6e5a91*/
}
} // namespace gamemd

// 0x6E5AA0
namespace gamemd {
int sub_6E5AA0()
{
  dword_B0E800 = 0; /*0x6e5aa5*/
  dword_B0E7F8 = 128; /*0x6e5aaf*/
  dword_B0E7FC = 128; /*0x6e5ab4*/
  return 128; /*0x6e5ab9*/
}
} // namespace gamemd

// 0x6E5AC0
namespace gamemd {
int sub_6E5AC0()
{
  dword_B0E7A0 = 0; /*0x6e5ac2*/
  dword_B0E7A4 = 0; /*0x6e5ac7*/
  dword_B0E7A8 = 0; /*0x6e5acc*/
  dword_B0E7AC = 0; /*0x6e5ad1*/
  return 0; /*0x6e5ad6*/
}
} // namespace gamemd

// 0x6E5AE0
namespace gamemd {
int sub_6E5AE0()
{
  dword_B0E784 = 0; /*0x6e5ae7*/
  dword_B0E788 = 0; /*0x6e5aec*/
  byte_B0E78C = 1; /*0x6e5af1*/
  byte_B0E78D = 0; /*0x6e5af8*/
  dword_B0E780 = (int)&(void*)(void*)&DynamicVectorClass_TagTypeClass___vftable; /*0x6e5afd*/
  dword_B0E794 = 10; /*0x6e5b07*/
  g_MultiplayerCleanup = 0; /*0x6e5b11*/
  return atexit(sub_6E5B20); /*0x6e5b1c*/
}
} // namespace gamemd

// 0x6E5B20
namespace gamemd {
void sub_6E5B20()
{
  dword_B0E780 = (int)&(void*)(void*)&VectorClass_TagTypeClass___vftable; /*0x6e5b28*/
  if ( dword_B0E784 && byte_B0E78D ) /*0x6e5b3c*/
  {
    RA2_OPDEL(dword_B0E784); /*0x6e5b3f*/
    dword_B0E784 = 0; /*0x6e5b47*/
  }
  byte_B0E78D = 0; /*0x6e5b4d*/
  dword_B0E788 = 0; /*0x6e5b53*/
}
} // namespace gamemd

// 0x6E6840
namespace gamemd {
void sub_6E6840()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6e684c*/
  dbl_B0E838 = Math::Sqrt(v0 + v0); /*0x6e685e*/
}
} // namespace gamemd

// 0x6E6870
namespace gamemd {
void sub_6E6870()
{
  dbl_B0E8A0 = dbl_B0E838 / 60.0; /*0x6e687c*/
}
} // namespace gamemd

// 0x6E6890
namespace gamemd {
void sub_6E6890()
{
  dbl_B0E888 = 1.0 / dbl_B0E8A0; /*0x6e689c*/
}
} // namespace gamemd

// 0x6E68B0
namespace gamemd {
void sub_6E68B0()
{
  dbl_B0E880 = 0.0174532925199433 * 45.0; /*0x6e68bc*/
}
} // namespace gamemd

// 0x6E68D0
namespace gamemd {
void sub_6E68D0()
{
  dbl_B0E858 = 0.0174532925199433 * 60.0; /*0x6e68dc*/
}
} // namespace gamemd

// 0x6E68F0
namespace gamemd {
void sub_6E68F0()
{
  dbl_B0E818 = 0.0174532925199433 * 90.0; /*0x6e68fc*/
}
} // namespace gamemd

// 0x6E6910
namespace gamemd {
long long sub_6E6910()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0E818 - dbl_B0E858); /*0x6e6922*/
  result = Math::RoundToInt(v0 * dbl_B0E838 * 0.5); /*0x6e6936*/
  dword_B0E8A8 = result; /*0x6e693b*/
  return result; /*0x6e6940*/
}
} // namespace gamemd

// 0x6E6950
namespace gamemd {
void sub_6E6950()
{
  dbl_B0E860 = Math::ArcTan((double)dword_B0E8A8 * 0.00390625); /*0x6e6967*/
}
} // namespace gamemd

// 0x6E6980
namespace gamemd {
void sub_6E6980()
{
  dbl_B0E878 = Math::ArcTan((double)(2 * dword_B0E8A8) / dbl_B0E838); /*0x6e69a2*/
}
} // namespace gamemd

// 0x6E69B0
namespace gamemd {
long long sub_6E69B0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0E8A8) + 0.5); /*0x6e69cb*/
  dword_B0E89C = result; /*0x6e69d0*/
  return result; /*0x6e69d6*/
}
} // namespace gamemd

// 0x6E69E0
namespace gamemd {
int sub_6E69E0()
{
  word_B0E830 = 0; /*0x6e69e2*/
  word_B0E832 = 0; /*0x6e69e8*/
  return 0; /*0x6e69ee*/
}
} // namespace gamemd

// 0x6E69F0
namespace gamemd {
int sub_6E69F0()
{
  dword_B0E868 = 0; /*0x6e69f2*/
  dword_B0E86C = 0; /*0x6e69f7*/
  dword_B0E870 = 0; /*0x6e69fc*/
  return 0; /*0x6e6a01*/
}
} // namespace gamemd

// 0x6E6A10
namespace gamemd {
int sub_6E6A10()
{
  dword_B0E898 = 0; /*0x6e6a15*/
  dword_B0E890 = 128; /*0x6e6a1f*/
  dword_B0E894 = 128; /*0x6e6a24*/
  return 128; /*0x6e6a29*/
}
} // namespace gamemd

// 0x6E6A30
namespace gamemd {
int sub_6E6A30()
{
  dword_B0E820 = 0; /*0x6e6a32*/
  dword_B0E824 = 0; /*0x6e6a37*/
  dword_B0E828 = 0; /*0x6e6a3c*/
  dword_B0E82C = 0; /*0x6e6a41*/
  return 0; /*0x6e6a46*/
}
} // namespace gamemd

// 0x6E6A50
namespace gamemd {
int sub_6E6A50()
{
  g_BuildingLoadQueue_Array = 0; /*0x6e6a57*/
  g_BuildingLoadQueue_Count = 0; /*0x6e6a5c*/
  g_BuildingLoadQueue_Capacity = 0; /*0x6e6a61*/
  g_BuildingLoadQueue_Dirty = 0; /*0x6e6a66*/
  g_BuildingLoadQueue_Active = 0; /*0x6e6a6b*/
  return atexit(sub_6E6A80); /*0x6e6a76*/
}
} // namespace gamemd

// 0x6E6A80
namespace gamemd {
void sub_6E6A80()
{
  RA2_OPDEL(g_BuildingLoadQueue_Array); /*0x6e6a86*/
  g_BuildingLoadQueue_Array = 0; /*0x6e6a90*/
  g_BuildingLoadQueue_Count = 0; /*0x6e6a95*/
  g_BuildingLoadQueue_Capacity = 0; /*0x6e6a9a*/
  g_BuildingLoadQueue_Dirty = 0; /*0x6e6a9f*/
  g_BuildingLoadQueue_Active = 0; /*0x6e6aa4*/
}
} // namespace gamemd

// 0x6E6B70
namespace gamemd {
unsigned char * E4Recv_6E6B70::sub_6E6B70(unsigned int * a2)
{
  *(this + 4) = 11; /*0x6e6b75*/
  *(_DWORD *)this = *a2 / 256 + 1000 * (a2[1] / 256); /*0x6e6ba4*/
  return this; /*0x6e6ba3*/
}
} // namespace gamemd

// 0x6E7C70
namespace gamemd {
void sub_6E7C70()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6e7c7c*/
  dbl_B0E8D0 = Math::Sqrt(v0 + v0); /*0x6e7c8e*/
}
} // namespace gamemd

// 0x6E7CA0
namespace gamemd {
void sub_6E7CA0()
{
  dbl_B0E920 = dbl_B0E8D0 / 60.0; /*0x6e7cac*/
}
} // namespace gamemd

// 0x6E7CC0
namespace gamemd {
void sub_6E7CC0()
{
  dbl_B0E908 = 1.0 / dbl_B0E920; /*0x6e7ccc*/
}
} // namespace gamemd

// 0x6E7CE0
namespace gamemd {
void sub_6E7CE0()
{
  dbl_B0E900 = 0.0174532925199433 * 45.0; /*0x6e7cec*/
}
} // namespace gamemd

// 0x6E7D00
namespace gamemd {
void sub_6E7D00()
{
  dbl_B0E8D8 = 0.0174532925199433 * 60.0; /*0x6e7d0c*/
}
} // namespace gamemd

// 0x6E7D20
namespace gamemd {
void sub_6E7D20()
{
  dbl_B0E8B0 = 0.0174532925199433 * 90.0; /*0x6e7d2c*/
}
} // namespace gamemd

// 0x6E7D40
namespace gamemd {
long long sub_6E7D40()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0E8B0 - dbl_B0E8D8); /*0x6e7d52*/
  result = Math::RoundToInt(v0 * dbl_B0E8D0 * 0.5); /*0x6e7d66*/
  dword_B0E928 = result; /*0x6e7d6b*/
  return result; /*0x6e7d70*/
}
} // namespace gamemd

// 0x6E7D80
namespace gamemd {
void sub_6E7D80()
{
  dbl_B0E8E0 = Math::ArcTan((double)dword_B0E928 * 0.00390625); /*0x6e7d97*/
}
} // namespace gamemd

// 0x6E7DB0
namespace gamemd {
void sub_6E7DB0()
{
  dbl_B0E8F8 = Math::ArcTan((double)(2 * dword_B0E928) / dbl_B0E8D0); /*0x6e7dd2*/
}
} // namespace gamemd

// 0x6E7DE0
namespace gamemd {
long long sub_6E7DE0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0E928) + 0.5); /*0x6e7dfb*/
  dword_B0E91C = result; /*0x6e7e00*/
  return result; /*0x6e7e06*/
}
} // namespace gamemd

// 0x6E7E10
namespace gamemd {
int sub_6E7E10()
{
  word_B0E8C8 = 0; /*0x6e7e12*/
  word_B0E8CA = 0; /*0x6e7e18*/
  return 0; /*0x6e7e1e*/
}
} // namespace gamemd

// 0x6E7E20
namespace gamemd {
int sub_6E7E20()
{
  dword_B0E8E8 = 0; /*0x6e7e22*/
  dword_B0E8EC = 0; /*0x6e7e27*/
  dword_B0E8F0 = 0; /*0x6e7e2c*/
  return 0; /*0x6e7e31*/
}
} // namespace gamemd

// 0x6E7E40
namespace gamemd {
int sub_6E7E40()
{
  dword_B0E918 = 0; /*0x6e7e45*/
  dword_B0E910 = 128; /*0x6e7e4f*/
  dword_B0E914 = 128; /*0x6e7e54*/
  return 128; /*0x6e7e59*/
}
} // namespace gamemd

// 0x6E7E60
namespace gamemd {
int sub_6E7E60()
{
  dword_B0E8B8 = 0; /*0x6e7e62*/
  dword_B0E8BC = 0; /*0x6e7e67*/
  dword_B0E8C0 = 0; /*0x6e7e6c*/
  dword_B0E8C4 = 0; /*0x6e7e71*/
  return 0; /*0x6e7e76*/
}
} // namespace gamemd

// 0x6E8000
namespace gamemd {
unsigned int * E4Recv_6E8000::sub_6E8000(int a2)
{
  _DWORD *result; // eax
  _DWORD *v3; // ecx
  int v4; // edi
  int v5; // esi
  int v6; // edx

  this->vtable3 = &(void*)(void*)&INoticeSink_vftable; /*0x6e8008*/
  this->vtable4 = &(void*)(void*)&INoticeSource_vftable; /*0x6e800f*/
  this->uniqueId = *(_DWORD *)(a2 + 16); /*0x6e801c*/
  this->abstractFlags = *(_BYTE *)(a2 + 20); /*0x6e8022*/
  this->nextArrayIndex = *(_DWORD *)(a2 + 24); /*0x6e8028*/
  this->referenceCount = *(_DWORD *)(a2 + 28); /*0x6e802e*/
  this->needsSave = *(_BYTE *)(a2 + 32); /*0x6e8034*/
  *this = &(void*)(void*)&AbstractClass_vftable; /*0x6e803f*/
  this->vtable2 = &(void*)(void*)&AbstractClass_vftable; /*0x6e8045*/
  this->vtable3 = &(void*)(void*)&AbstractClass_vftable; /*0x6e804c*/
  this->vtable4 = &(void*)(void*)&AbstractClass_vftable; /*0x6e8053*/
  qmemcpy(&this->q024, (const void *)(a2 + 36), 0x19u); /*0x6e805a*/
  qmemcpy((char *)&this->q0F4, (const void *)(a2 + 61), 0x20u); /*0x6e8068*/
  *(&this->vtable34) = *(_DWORD *)(a2 + 96); /*0x6e8070*/
  qmemcpy(&this->q064, (const void *)(a2 + 100), 0x31u); /*0x6e807b*/
  *this = &(void*)(void*)&TaskForceClass_vftable; /*0x6e807e*/
  this->vtable2 = &(void*)(void*)&TaskForceClass_vftable; /*0x6e8084*/
  this->vtable3 = &(void*)(void*)&TaskForceClass_vftable; /*0x6e808b*/
  this->vtable4 = &(void*)(void*)&TaskForceClass_vftable; /*0x6e8092*/
  v3 = &this->q0A4; /*0x6e809f*/
  this->q098 = *(_DWORD *)(a2 + 152); /*0x6e80a5*/
  this->q09C = *(_DWORD *)(a2 + 156); /*0x6e80b1*/
  v4 = this->q09C; /*0x6e80bd*/
  this->u32_A0 = *(_DWORD *)(a2 + 160); /*0x6e80c3*/
  v5 = 0; /*0x6e80c9*/
  if ( v4 > 0 ) /*0x6e80cd*/
  {
    v6 = a2 - (_DWORD)this; /*0x6e80cf*/
    do /*0x6e80e9*/
    {
      ++v5; /*0x6e80d4*/
      *v3 = *(_DWORD *)((char *)v3 + v6); /*0x6e80d5*/
      v3[1] = *(_DWORD *)((char *)v3 + v6 + 4); /*0x6e80db*/
      v3 += 2; /*0x6e80e4*/
    }
    while ( v5 < this->q09C ); /*0x6e80e9*/
  }
}
} // namespace gamemd

// 0x6E85B0
namespace gamemd {
char E4Recv_6E85B0::sub_6E85B0()
{
  int v2; // edi
  _DWORD *i; // esi

  v2 = 0; /*0x6e85bb*/
  if ( *(&this->vtable49) <= 0 ) /*0x6e85bf*/
    return 1; /*0x6e85e1*/
  for ( i = &this->lineTrailer; (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*i + 44))(*i) == 16; i += 2 ) /*0x6e85c1*/
  {
    if ( ++v2 >= *(&this->vtable49) ) /*0x6e85df*/
      return 1; /*0x6e85df*/
  }
  return 0; /*0x6e85e1*/
}
} // namespace gamemd

// 0x6E8880
namespace gamemd {
void sub_6E8880()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6e888c*/
  dbl_B0E950 = Math::Sqrt(v0 + v0); /*0x6e889e*/
}
} // namespace gamemd

// 0x6E88B0
namespace gamemd {
void sub_6E88B0()
{
  dbl_B0E9A0 = dbl_B0E950 / 60.0; /*0x6e88bc*/
}
} // namespace gamemd

// 0x6E88D0
namespace gamemd {
void sub_6E88D0()
{
  dbl_B0E988 = 1.0 / dbl_B0E9A0; /*0x6e88dc*/
}
} // namespace gamemd

// 0x6E88F0
namespace gamemd {
void sub_6E88F0()
{
  dbl_B0E980 = 0.0174532925199433 * 45.0; /*0x6e88fc*/
}
} // namespace gamemd

// 0x6E8910
namespace gamemd {
void sub_6E8910()
{
  dbl_B0E958 = 0.0174532925199433 * 60.0; /*0x6e891c*/
}
} // namespace gamemd

// 0x6E8930
namespace gamemd {
void sub_6E8930()
{
  dbl_B0E930 = 0.0174532925199433 * 90.0; /*0x6e893c*/
}
} // namespace gamemd

// 0x6E8950
namespace gamemd {
long long sub_6E8950()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0E930 - dbl_B0E958); /*0x6e8962*/
  result = Math::RoundToInt(v0 * dbl_B0E950 * 0.5); /*0x6e8976*/
  dword_B0E9A8 = result; /*0x6e897b*/
  return result; /*0x6e8980*/
}
} // namespace gamemd

// 0x6E8990
namespace gamemd {
void sub_6E8990()
{
  dbl_B0E960 = Math::ArcTan((double)dword_B0E9A8 * 0.00390625); /*0x6e89a7*/
}
} // namespace gamemd

// 0x6E89C0
namespace gamemd {
void sub_6E89C0()
{
  dbl_B0E978 = Math::ArcTan((double)(2 * dword_B0E9A8) / dbl_B0E950); /*0x6e89e2*/
}
} // namespace gamemd

// 0x6E89F0
namespace gamemd {
long long sub_6E89F0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0E9A8) + 0.5); /*0x6e8a0b*/
  dword_B0E99C = result; /*0x6e8a10*/
  return result; /*0x6e8a16*/
}
} // namespace gamemd

// 0x6E8A20
namespace gamemd {
int sub_6E8A20()
{
  dword_B0E948 = 0; /*0x6e8a22*/
  return 0; /*0x6e8a2e*/
}
} // namespace gamemd

// 0x6E8A30
namespace gamemd {
int sub_6E8A30()
{
  dword_B0E968 = 0; /*0x6e8a32*/
  dword_B0E96C = 0; /*0x6e8a37*/
  dword_B0E970 = 0; /*0x6e8a3c*/
  return 0; /*0x6e8a41*/
}
} // namespace gamemd

// 0x6E8A50
namespace gamemd {
int sub_6E8A50()
{
  dword_B0E998 = 0; /*0x6e8a55*/
  dword_B0E990 = 128; /*0x6e8a5f*/
  dword_B0E994 = 128; /*0x6e8a64*/
  return 128; /*0x6e8a69*/
}
} // namespace gamemd

// 0x6E8A70
namespace gamemd {
int sub_6E8A70()
{
  dword_B0E938 = 0; /*0x6e8a72*/
  dword_B0E93C = 0; /*0x6e8a77*/
  dword_B0E940 = 0; /*0x6e8a7c*/
  dword_B0E944 = 0; /*0x6e8a81*/
  return 0; /*0x6e8a86*/
}
} // namespace gamemd

// 0x6EA080
namespace gamemd {
char E4Recv_6EA080::sub_6EA080()
{
  int v2; // eax
  char result; // al

  v2 = this->q054; /*0x6ea086*/
  this->u32_7F = 1; /*0x6ea089*/
  this->spawnStatus = 1; /*0x6ea08e*/
  for ( this->q1E8 = 0; v2; v2 = *(_DWORD *)(v2 + 1496) ) /*0x6ea095*/
  {
    if ( this->q1EC || this->q1DC ) /*0x6ea09e*/
      *(_BYTE *)(v2 + 1673) = 1; /*0x6ea0a5*/
  }
  result = SetLandTypeMap(*(_DWORD **)(&this->uniqueId0)); /*0x6ea0b8*/
  this->needsRedraw = 1; /*0x6ea0bd*/
  return result; /*0x6ea0c3*/
}
} // namespace gamemd

// 0x6EC370
namespace gamemd {
char E4Recv_6EC370::sub_6EC370()
{
  int v1; // ecx
  char result; // al

  v1 = *(&this->vtable31); /*0x6ec370*/
  result = 1; /*0x6ec373*/
  if ( v1 ) /*0x6ec377*/
  {
    while ( v1->u32_3D5 ) /*0x6ec381*/
    {
      v1 = v1->u32_5D8; /*0x6ec383*/
      if ( !v1 ) /*0x6ec38b*/
        return result; /*0x6ec38b*/
    }
    return 0; /*0x6ec38e*/
  }
  return result; /*0x6ec38d*/
}
} // namespace gamemd

// 0x6EDDC0
namespace gamemd {
int E4Recv_6EDDC0::sub_6EDDC0(int a2, int a3)
{
  _DWORD *v4; // esi
  int result; // eax

  v4 = *(_DWORD **)(&this->NeedsSaveOrLink4); /*0x6eddc4*/
  if ( v4 ) /*0x6eddc9*/
  {
    do /*0x6edde6*/
    {
      result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v4 + 1312))(v4, *(_DWORD *)(a2 + 4)); /*0x6eddd8*/
      v4 = (_DWORD *)v4[374]; /*0x6eddde*/
    }
    while ( v4 ); /*0x6edde6*/
    this->needsRedraw = 1; /*0x6edde9*/
  }
  else
  {
    this->needsRedraw = 1; /*0x6eddf5*/
  }
  return result; /*0x6eddf0*/
}
} // namespace gamemd

// 0x6EDE80
namespace gamemd {
void E4Recv_6EDE80::sub_6EDE80(int a2, int a3)
{
  *(&this->nextObject8) = 1; /*0x6ede80*/
}
} // namespace gamemd

// 0x6EDF10
namespace gamemd {
void E4Recv_6EDF10::sub_6EDF10(int a2, int a3)
{
  _DWORD *i; // esi
  _DWORD *v5; // eax
  int v6; // [esp+8h] [ebp-14h]
  _BYTE v8[12]; // [esp+10h] [ebp-Ch] BYREF

  for ( i = *(_DWORD **)(&this->NeedsSaveOrLink4); i; i = (_DWORD *)i[374] ) /*0x6edf1c*/
  {
    v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*i + 72))(i, v8); /*0x6edf27*/
    IDA_LOWORD(v6) = *v5 / 256; /*0x6edf3a*/
    IDA_HIWORD(v6) = v5[1] / 256; /*0x6edf53*/
    v6 = v6; /*0x6edf60*/
    MapClass::TriggerEVA((__int16 *)&v6); /*0x6edf65*/
  }
  this->needsRedraw = 1; /*0x6edf74*/
}
} // namespace gamemd

// 0x6EDF90
namespace gamemd {
char E4Recv_6EDF90::sub_6EDF90(int a2, int a3)
{
  *(_BYTE *)(this->fallRate + 494) = 1; /*0x6edf95*/
  *(_BYTE *)(this + 128) = 1; /*0x6edf9b*/
  return 1; /*0x6edfa1*/
}
} // namespace gamemd

// 0x6EDFB0
namespace gamemd {
int E4Recv_6EDFB0::sub_6EDFB0(int a2, int a3)
{
  int result; // eax

  result = *(_DWORD *)(this + 44); /*0x6edfb0*/
  *(_DWORD *)(result + 592) = 4; /*0x6edfb3*/
  this->needsRedraw = 1; /*0x6edfbd*/
  return result; /*0x6edfc4*/
}
} // namespace gamemd

// 0x6EE050
namespace gamemd {
int E4Recv_6EE050::sub_6EE050(int a2, int a3)
{
  _DWORD *v4; // esi
  _DWORD *v5; // edi
  int result; // eax

  v4 = *(_DWORD **)(&this->NeedsSaveOrLink4); /*0x6ee054*/
  if ( v4 ) /*0x6ee059*/
  {
    do /*0x6ee07a*/
    {
      v5 = (_DWORD *)v4[374]; /*0x6ee05e*/
      (*(void (__thiscall **)(_DWORD *))(*v4 + 212))(v4); /*0x6ee066*/
      result = (*(int (__thiscall **)(_DWORD *))(*v4 + 248))(v4); /*0x6ee070*/
      v4 = v5; /*0x6ee078*/
    }
    while ( v5 ); /*0x6ee07a*/
    this->needsRedraw = 1; /*0x6ee07d*/
  }
  else
  {
    this->needsRedraw = 1; /*0x6ee089*/
  }
  return result; /*0x6ee084*/
}
} // namespace gamemd

// 0x6EF450
namespace gamemd {
char E4Recv_6EF450::sub_6EF450(int a2, int a3)
{
  *(&this->nextObject8) = 1; /*0x6ef452*/
  *(&this->attachedTag2) = 1; /*0x6ef458*/
  return 1; /*0x6ef45e*/
}
} // namespace gamemd
