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
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/TeamTypeClass_28_e4.hpp"
#include "e4/classes/House_e4.hpp"

// 0x6E0250
namespace gamemd {
int E4Recv_6E0250::sub_6E0250(int a2, int a3, int a4, int a5)
{

  *((unsigned char *)g_abs_A8B230 + 13479) = *((unsigned char *)this + 144); /*0x6e025c*/
  return 1; /*0x6e0264*/

}
}
// 0x6E0270
namespace gamemd {
int E4Recv_6E0270::sub_6E0270(int a2, int a3, int a4, int a5)
{

  *((unsigned char *)g_abs_A8B230 + 13478) = *((unsigned char *)this + 144); /*0x6e027c*/
  return 1; /*0x6e0284*/

}
}
// 0x6E0290
namespace gamemd {
int E4Recv_6E0290::sub_6E0290(int a2, int a3, int a4, int a5)
{

  *((unsigned char *)g_abs_A8B230 + 13480) = *((unsigned char *)this + 144); /*0x6e029c*/
  return 1; /*0x6e02a4*/

}
}
// 0x6E2050
namespace gamemd {
void globalHelper_0E2050(void * a1, void * a2, void * a3, void * a4)
{
  void * v4;
  char v5; // bl
  int v6; // edi
  int *v7; // esi
  unsigned int *v8; // ecx
  void * v9;
  int16_t *v10; // esi
  int v11; // edi
  int v12; // eax
  int v13; // eax
  char v15; // [esp+1Dh] [ebp-15h]
  int v16[2]; // [esp+1Eh] [ebp-14h] BYREF
  unsigned int v17[3]; // [esp+26h] [ebp-Ch] BYREF

  v4 = a3; /*0x6e2055*/
  v15 = 0; /*0x6e205b*/
  do /*0x6e20ec*/
  {
    v5 = 0; /*0x6e2065*/
    v6 = 0; /*0x6e2067*/
    if ( dword_A8EC88 <= 0 ) /*0x6e206b*/
      break; /*0x6e206b*/
    do /*0x6e20e8*/
    {
      v7 = (int *)*((unsigned int *)dword_A8EC7C + v6); /*0x6e2076*/
      if ( v7[27] > 0 ) /*0x6e207e*/
      {
        if ( *((unsigned char *)v7 + 144) ) /*0x6e2080*/
        {
          if ( *((unsigned char *)v7 + 116) ) /*0x6e208a*/
          {
            if ( !*((unsigned char *)v7 + 129) ) /*0x6e2091*/
            {
              v8 = (unsigned int *)v7[13]; /*0x6e209b*/
              if ( v8 ) /*0x6e20a0*/
              {
                if ( LinkedList::Contains(v8, v4) ) /*0x6e20a3*/
                {
                  v9 = (void *)((int)((void *)(*v7)));
                  a3 = (void *)(v7[27]);
                  (*(void (**)(int *, int *, unsigned int, int, unsigned int, int, unsigned int, unsigned int))((unsigned int)(v9)+ 364))( /*0x6e20d2*/
                    v7,
                    &a3,
                    0,
                    dword_8871E0->?[5],
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
    while ( v6 < dword_A8EC88 ); /*0x6e20e8*/
  }
  while ( v5 ); /*0x6e20ec*/
  v10 = a4; /*0x6e20f2*/
  if ( *(unsigned int *)a4 != dword_B0E680 ) /*0x6e2100*/
  {
    v11 = 3; /*0x6e2119*/
    if ( !CellClass::SetTerrainType(&dword_87F7E8, a4) ) /*0x6e211e*/
    {
      do /*0x6e213b*/
        v12 = v11--; /*0x6e2127*/
      while ( v12 > 0 && !CellClass::SetTerrainType(&dword_87F7E8, v10) ); /*0x6e213b*/
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

  v6 = *(unsigned int *)((unsigned int *))((unsigned int *))(ScenarioClass)::Get_Waypoint_Location((char *)g_abs_A8B230, &v7, *((char *)this + 17)); /*0x6e27ab*/
  GroundHeight = 0; /*0x6e27af*/
  v8[1] = (IDA_SHIWORD(v6) << 8) + 128; /*0x6e27d0*/
  v8[0] = ((int16_t)v6 << 8) + 128; /*0x6e27da*/
  GroundHeight = Cell::GetGroundHeight(v8); /*0x6e27e3*/
  if ( (*((unsigned int *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v6) + 80) & 0x100) != 0 /*0x6e2819*/
    || (*((unsigned int *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v6) + 80) & 0x400) != 0 )
  {
    GroundHeight += g_abs_B0E6D4; /*0x6e2827*/
  }
  Tactical::SetTacticalPosition((int)g_abs_887324, v8); /*0x6e2836*/
  return 1; /*0x6e283d*/

}
}
// 0x6E30C0
namespace gamemd {
void CreateHouseClass(void * a1, void * a2, void * a3, void * a4, void * a5, void * a6)
{
  HouseClass *v7; // esi
  int Field11; // eax
  HouseClass *v10; // [esp+0h] [ebp-4h]

  v7 = *(HouseClass **)((unsigned int)(a1)+ 144); /*0x6e30c1*/
  if ( !a6 ) /*0x6e30cd*/
    return 0; /*0x6e30cd*/
  if ( v7 == (HouseClass *)8997 ) /*0x6e30d5*/
  {
    Field11 = Property::GetField11(a6); /*0x6e30d7*/
  }
  else
  {
    if ( v7 == (HouseClass *)-1 ) /*0x6e30e1*/
      return 0; /*0x6e3103*/
    if ( (uint8_t)BuildingType::IsSpecialType(v7) ) /*0x6e30e5*/
      Field11 = BuildingType::FindOwnerHouse(v7); /*0x6e30f0*/
    else
      Field11 = HouseClass::FindOwner(v7); /*0x6e30f7*/
  }
  if ( !Field11 ) /*0x6e30fe*/
    return 0; /*0x6e30fe*/
  HouseClass::RespawnStartingForces(v10, a2, a3, (int)v7); /*0x6e3108*/
  return 1; /*0x6e3102*/
}
}
// 0x6E3380
namespace gamemd {
int E4Recv_6E3380::sub_6E3380(int a2, int a3, int a4, int a5)
{

  unsigned int *v5; // eax
  int v7; // [esp+0h] [ebp-10h] BYREF
  int v8; // [esp+4h] [ebp-Ch] BYREF
  int v9; // [esp+8h] [ebp-8h]
  int GroundHeight; // [esp+Ch] [ebp-4h]

  v7 = *ScenarioClass::Get_Waypoint_Location((char *)MEMORY[0xA8B230], &v7, *((char *)this + 17)); /*0x6e339b*/
  GroundHeight = 0; /*0x6e339f*/
  v9 = (SHIWORD(v7) << 8) + 128; /*0x6e33c0*/
  v8 = ((__int16)v7 << 8) + 128; /*0x6e33ca*/
  GroundHeight = Cell::GetGroundHeight(&v8); /*0x6e33d5*/
  v5 = __2_YAPAXI_Z(0x14u); /*0x6e33d9*/
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
  int v6; // ebx
  int v7; // ecx
  char result; // al

  v5 = *(unsigned int *)&HouseClass_Player.__pad_5568[22620] - 1; /*0x6e37fa*/
  if ( *(unsigned int *)&HouseClass_Player.__pad_5568[22620] - 1 >= 0 ) /*0x6e3803*/
  {
    v6 = *(unsigned int *)&HouseClass_Player.__pad_5568[22608] + 4 * v5; /*0x6e380b*/
    while ( strcmp((const char *)(*(unsigned int *)v6 + 36), (const char *)((char *)this + 84)) ) /*0x6e3845*/
    {
      --v5; /*0x6e3847*/
      v6 -= 4; /*0x6e3848*/
      if ( v5 < 0 ) /*0x6e384d*/
        goto LABEL_7; /*0x6e384d*/
    }
    *(unsigned int *)(*(unsigned int *)v6 + 1588) = *((unsigned int *)this + 36); /*0x6e385b*/
  }
LABEL_7:
  v7 = (int)&HouseClass_Count[-((unsigned int *)(1].__tail_1602E))[1]; /*0x6e3861*/
  for ( result = 1; v7 >= 0; *(unsigned char *)(*(unsigned int *)&HouseClass_Array->__pad_0[4 * v7 + 4] + 508) = 1 ) /*0x6e3870*/
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
  unsigned int *v6; // ecx

  v4 = 0; /*0x6e409b*/
  if ( dword_A8EB50 <= 0 ) /*0x6e409f*/
    return 0; /*0x6e40e3*/
  while ( 1 ) /*0x6e40aa*/
  {
    v5 = *((unsigned int *)dword_A8EB44 + v4); /*0x6e40aa*/
    if ( *(unsigned char *)(v5 + 144) ) /*0x6e40ad*/
    {
      if ( *(unsigned char *)(v5 + 116) ) /*0x6e40b7*/
      {
        if ( !*(unsigned char *)(v5 + 129) ) /*0x6e40be*/
        {
          v6 = *(unsigned int **)(v5 + 52); /*0x6e40c8*/
          if ( v6 ) /*0x6e40cd*/
          {
            if ( LinkedList::Contains(v6, a3) ) /*0x6e40d0*/
              break; /*0x6e40d0*/
          }
        }
      }
    }
    if ( ++v4 >= dword_A8EB50 ) /*0x6e40e1*/
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
    v4 = *((unsigned int *)g_TeamClassPool + i); /*0x6ec275*/
    if ( v4 && a2 == v4->owner && v4->buildingType->q0B4 < a1 ) /*0x6ec294*/
    {
      for ( j = v4->firstUnit; j; j = v4->firstUnit ) /*0x6ec29b*/
        TeamClass::LiberateMember_Start(v4, j, 0xFFFFFFFF, 0); /*0x6ec2a4*/
            *(unsigned char *)(v4 + 126) = 1;
            *(unsigned char *)(v4 + 125) = 1;
      g_CurrentFrame = g_CurrentFrame; /*0x6ec2bc*/
      v7 = Math::RoundToInt(*(double *)&((unsigned int *)(g_RulesClass_Instance))[1].AITriggerTrackRecordCoefficient * 900.0); /*0x6ec2ce*/
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
    v4 = *((unsigned int *)this + 21); /*0x6edfd5*/
    v5 = 0; /*0x6edfd8*/
    if ( !v4 ) /*0x6edfdc*/
      break; /*0x6edfdc*/
    do /*0x6ee034*/
    {
      if ( *(int *)(v4 + 108) > 0 && *(unsigned char *)(v4 + 144) && *(unsigned char *)(v4 + 116) && !*(unsigned char *)(v4 + 129) ) /*0x6edff6*/
      {
        v6 = *(unsigned int *)(v4 + 108); /*0x6ee008*/
        (*(void (**)(int, int *, unsigned int, int, unsigned int, int, unsigned int, unsigned int))(*(unsigned int *)v4 + 364))( /*0x6ee024*/
          v4,
          &v6,
          0,
          g_abs_8871E0->?[5],
          0,
          1,
          0,
          0);
        v5 = 1; /*0x6ee02a*/
      }
      v4 = *(unsigned int *)(v4 + 1496); /*0x6ee02c*/
    }
    while ( v4 ); /*0x6ee034*/
  }
  while ( v5 ); /*0x6ee038*/
  *((unsigned char *)this + 128) = 1; /*0x6ee03a*/

}
}
// 0x6EEBD0
namespace gamemd {
unsigned int * DamageMapClassArea(int ecx0, void * a1, FootClass * aP2, int a4, char a5)
{
  int v5; // ecx
  unsigned int *result; // eax
  unsigned int *v7; // esi
  void *v8; // eax
  FootClass * v9;
  int v10; // ecx
  unsigned int *v11; // eax
  HouseClass * v12;
  unsigned int *v13; // eax
  HouseClass * v14;
  int TileData; // eax
  FootClass * v16;
  int v17; // edi
  int v18; // ebx
  int v19; // ecx
  int v20; // edx
  double v21; // st7
  FootClass * v22;
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
  unsigned int *v36; // [esp+30h] [ebp-60h]
  unsigned int *v37; // [esp+34h] [ebp-5Ch]
  int v42; // [esp+48h] [ebp-48h]
  int v43; // [esp+4Ch] [ebp-44h]
  int v44; // [esp+50h] [ebp-40h]
  int v45; // [esp+54h] [ebp-3Ch]
  int v47; // [esp+5Ch] [ebp-34h]
  int v48; // [esp+68h] [ebp-28h]
  char v50[12]; // [esp+78h] [ebp-18h] BYREF
  char v51[12]; // [esp+84h] [ebp-Ch] BYREF

  v5 = 0; /*0x6eebe4*/
  v31 = -1; /*0x6eebe6*/
  v32 = -1; /*0x6eebea*/
  result = 0; /*0x6eebf5*/
  v36 = 0; /*0x6eebfb*/
  v37 = 0; /*0x6eebff*/
  v35 = 0; /*0x6eec03*/
  if ( dword_A8EB50 <= 0 ) /*0x6eec07*/
  {
  LABEL_22:
    if ( !a5 ) /*0x6eee74*/
      return v37; /*0x6eee76*/
    return result; /*0x6eee76*/
  }
  do /*0x6eee55*/
  {
    v7 = (unsigned int *)*((unsigned int *)dword_A8EB44 + v5); /*0x6eec1a*/
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
      if ( (uint8_t)HouseClass::IsAlliedWith(*(void **)(aP2 + 540), v8) /*0x6eec62*/
        && !*(unsigned char *)(*(unsigned int *)(v7[135] + 52) + 422) )
      {
        goto LABEL_19; /*0x6eec62*/
      }
    }
    v10 = -1; /*0x6eec70*/
    switch ( a4 ) /*0x6eec7c*/
    {
      case 0: /*0x6eec7c*/
        v11 = (unsigned int *)(*(int (**)(unsigned int *, char *))(*v7 + 72))(v7, v50); /*0x6eec8c*/
        IDA_LOWORD(v33) = *v11 / 256; /*0x6eec9f*/
        v12 = v9->owner; /*0x6eecb0*/
        IDA_HIWORD(v33) = v11[1] / 256; /*0x6eecb9*/
        v33 = v33; /*0x6eecc6*/
        v10 = 0x7FFFFFFF - ((CellClass *)((int16_t *)&v33))->GetTileData(v12); /*0x6eecdb*/
        break; /*0x6eecdd*/
      case 1: /*0x6eec7c*/
        v13 = (unsigned int *)(*(int (**)(unsigned int *, char *))(*v7 + 72))(v7, v51); /*0x6eeceb*/
        IDA_LOWORD(v34) = *v13 / 256; /*0x6eecfe*/
        v14 = v9->owner; /*0x6eed0f*/
        IDA_HIWORD(v34) = v13[1] / 256; /*0x6eed18*/
        v34 = v34; /*0x6eed25*/
        TileData = ((CellClass *)((int16_t *)&v34))->GetTileData(v14); /*0x6eed30*/
        goto LABEL_13; /*0x6eed35*/
      case 2: /*0x6eec7c*/
        v16 = v9 + 156; /*0x6eed46*/
        v17 = v9->location; /*0x6eed4b*/
        v18 = *(unsigned int *)(v16 + 4); /*0x6eed4d*/
        v48 = *(unsigned int *)(v16 + 8); /*0x6eed53*/
        v19 = v7[40]; /*0x6eed5d*/
        v42 = v7[39] - v17; /*0x6eed60*/
        v20 = v7[41]; /*0x6eed6a*/
        v43 = v19 - v18; /*0x6eed6d*/
        v44 = v20 - v48; /*0x6eed77*/
        v21 = Math::Sqrt( /*0x6eed9c*/
                (double)v42 * (double)v42
              + (double)(v20 - v48) * (double)(v20 - v48)
              + (double)(v19 - v18) * (double)(v19 - v18));
        v10 = (int)(0x7FFFFFFF - Math::RoundToInt(v21));
        break; /*0x6eedb0*/
      case 3: /*0x6eec7c*/
        v22 = v9 + 156; /*0x6eedbe*/
        v23 = v9->location; /*0x6eedc3*/
        v24 = *(unsigned int *)(v22 + 4); /*0x6eedc5*/
        v25 = *(unsigned int *)(v22 + 8); /*0x6eedc8*/
        v26 = v7[39]; /*0x6eedcb*/
        v25 = v25; /*0x6eedcd*/
        v27 = v7[40] - v24; /*0x6eedda*/
        v45 = v26 - v23; /*0x6eeddc*/
        v28 = v7[41]; /*0x6eede0*/
        v27 = v27; /*0x6eede3*/
        v47 = v28 - v25; /*0x6eeded*/
        v29 = Math::Sqrt( /*0x6eee12*/
                (double)(v26 - v23) * (double)(v26 - v23)
              + (double)(v28 - v25) * (double)(v28 - v25)
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
  while ( v35 < dword_A8EB50 ); /*0x6eee55*/
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

  TechnoClass *v3; // esi
  int v4; // ebp
  TechnoClass *i; // ebx
  int v6; // edi
  unsigned int *focus; // edi
  int v8; // eax
  int v9; // ecx
  int j; // edx
  int v11; // esi
  int *v12; // ebp
  unsigned int *v13; // eax
  int v14; // eax
  int v15; // edx
  int v16; // ecx
  int *v17; // [esp+10h] [ebp-18h] BYREF
  int v18; // [esp+14h] [ebp-14h]
  int DefaultTimer; // [esp+18h] [ebp-10h]
  char v20[12]; // [esp+1Ch] [ebp-Ch] BYREF

  v3 = (TechnoClass *)*((char *)this + 21); /*0x6efc76*/
  v4 = -1; /*0x6efc79*/
  v17 = this; /*0x6efc7f*/
  for ( i = v3; v3; v3 = *(TechnoClass **)&v3[1].missionQueued ) /*0x6efc85*/
  {
    v6 = *(unsigned int *)((*(int (**)(TechnoClass *))(*(unsigned int *)v3->__pad_0 + 132))(v3) + 1532); /*0x6efc91*/
    if ( TechnoClass::IsDeployed((int)v3) /*0x6efcba*/
      && (BYTE1(v3[1].firepowerMultiplier[1])
       || (*(int (**)(TechnoClass *))(*(unsigned int *)v3->__pad_0 + 44))(v3) == 2)
      && v6 > v4 )
    {
      i = v3; /*0x6efcbc*/
      v4 = v6; /*0x6efcbe*/
    }
  }
  if ( !i ) /*0x6efccc*/
  {
    *((unsigned char *)v17 + 128) = 1; /*0x6efcd5*/
    return; /*0x6efce0*/
  }
  focus = i->focus; /*0x6efce3*/
  v8 = 0; /*0x6efce9*/
  v9 = focus[153]; /*0x6efcf0*/
  if ( v9 <= 0 ) /*0x6efcf8*/
    goto LABEL_16; /*0x6efcf8*/
  for ( j = focus[150]; *(unsigned int *)(*(unsigned int *)(*(unsigned int *)j + 40) + 180) != 1; j += 4 ) /*0x6efd00*/
  {
    if ( ++v8 >= v9 ) /*0x6efd15*/
    {
      *((unsigned char *)v17 + 128) = 1; /*0x6efd1e*/
      return; /*0x6efd28*/
    }
  }
  v11 = *(unsigned int *)(focus[150] + 4 * v8); /*0x6efd2b*/
  if ( !v11 ) /*0x6efd30*/
  {
LABEL_16:
    *((unsigned char *)v17 + 128) = 1; /*0x6efd39*/
    return; /*0x6efd43*/
  }
  if ( *(unsigned char *)(v11 + 111) && HouseClass::GetPowerRatio(focus) >= 1.0 ) /*0x6efd5f*/
  {
    v12 = v17; /*0x6efd61*/
    v13 = (unsigned int *)(*(int (**)(int, char *))(*(unsigned int *)v17[13] + 72))(v17[13], v20); /*0x6efd6f*/
    LOWORD(v18) = *v13 / 256; /*0x6efd82*/
    HIWORD(v18) = v13[1] / 256; /*0x6efd9a*/
    v14 = *(unsigned int *)(v11 + 40); /*0x6efda3*/
    v17 = (int *)v18; /*0x6efda6*/
    SuperWeapon::FireSuperWeaponHouseClass(focus, *(AbstractClass **)(v14 + 180), (AbstractClass *)&v17); /*0x6efdb4*/
    *((unsigned char *)v12 + 128) = 1; /*0x6efdba*/
    return; /*0x6efdc6*/
  }
  v15 = *(unsigned int *)(v11 + 48); /*0x6efdc9*/
  v16 = *(unsigned int *)(v11 + 56); /*0x6efdcc*/
  if ( v15 == -1 ) /*0x6efdd2*/
    goto LABEL_23; /*0x6efdd2*/
  if ( *(unsigned int *)&MEMORY[0xA8D63C].__pad_14B0[664] - v15 < v16 ) /*0x6efddd*/
  {
    v16 -= *(unsigned int *)&MEMORY[0xA8D63C].__pad_14B0[664] - v15; /*0x6efddf*/
LABEL_23:
    v18 = v16; /*0x6efde1*/
    goto LABEL_24; /*0x6efde1*/
  }
  v18 = 0; /*0x6efe32*/
LABEL_24:
  DefaultTimer = Super::GetDefaultTimer((unsigned int *)v11); /*0x6efde5*/
  if ( *(unsigned char *)(v11 + 109) ) /*0x6efdf0*/
  {
    if ( 1.0 - *(float *)(*(unsigned int *)&MEMORY[0x87F8E4].__pad_5568[9108] + 3440) < (double)v18 / (double)DefaultTimer ) /*0x6efe1c*/
      *((unsigned char *)v17 + 128) = 1; /*0x6efe25*/
  }
  else
  {
    *((unsigned char *)v17 + 128) = 1; /*0x6efe42*/
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
  int16_t v7; // bp
  unsigned char *v8; // esi
  unsigned short *v9; // eax
  int v11; // [esp+8h] [ebp-4h] BYREF

  v5 = *(unsigned int *)((unsigned int *))((unsigned int *))(ScenarioClass)::Get_Waypoint_Location((char *)g_abs_A8B230, &v11, *((char *)this + 17)); /*0x6e0097*/
  v6 = 0; /*0x6e009e*/
  v11 = v5; /*0x6e00a0*/
  if ( g_GameCleanupState <= 0 ) /*0x6e00a6*/
    return 1; /*0x6e00fb*/
  v7 = IDA_HIWORD(v11); /*0x6e00a9*/
  do /*0x6e00ee*/
  {
    v8 = (unsigned char *)*((unsigned int *)dword_A8020C + v6); /*0x6e00b5*/
    if ( v8[144] ) /*0x6e00b8*/
    {
      v9 = (unsigned short *)(*(int (**)(unsigned char *, int *))(*(unsigned int *)v8 + 440))(v8, &v11); /*0x6e00cb*/
      if ( *v9 == (unsigned short)v5 && v9[1] == v7 ) /*0x6e00da*/
        (*(void (**)(unsigned char *))(*(unsigned int *)v8 + 248))(v8); /*0x6e00e0*/
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
  unsigned char *v5; // esi
  unsigned int *v6; // ecx

  v4 = 0; /*0x6e01c6*/
  if ( dword_A8EC88 <= 0 ) /*0x6e01ca*/
    return 1; /*0x6e0245*/
  do /*0x6e023b*/
  {
    v5 = (unsigned char *)*((unsigned int *)dword_A8EC7C + v4); /*0x6e01d7*/
    if ( (*(int (**)(unsigned char *))(*(unsigned int *)v5 + 44))(v5) != 6 ) /*0x6e01e4*/
    {
      if ( v5[144] ) /*0x6e01e6*/
      {
        if ( v5[116] ) /*0x6e01f0*/
        {
          v6 = (unsigned int *)*((unsigned int *)v5 + 13); /*0x6e01f7*/
          if ( v6 ) /*0x6e01fc*/
          {
            if ( LinkedList::Contains(v6, aP1) /*0x6e0223*/
              && (!(*(int (**)(unsigned char *))(*(unsigned int *)v5 + 388))(v5)
               || (*(int (**)(unsigned char *))(*(unsigned int *)v5 + 388))(v5) == 23) )
            {
              (*(void (**)(unsigned char *, int, unsigned int))(*(unsigned int *)v5 + 488))(v5, 5, 0); /*0x6e022d*/
            }
          }
        }
      }
    }
    ++v4; /*0x6e0238*/
  }
  while ( v4 < dword_A8EC88 ); /*0x6e023b*/
  return 1; /*0x6e0241*/
}
} // namespace gamemd

// 0x6E0790
namespace gamemd {
char E4Recv_6E0790::sub_6E0790(int a2, int a3, int a4, int a5)
{

  int v5; // esi
  int *WorldCoords; // eax
  unsigned int v8[3]; // [esp+4h] [ebp-Ch] BYREF

  v5 = MEMORY[0x8871E0]->?[5]; /*0x6e07a3*/
  WorldCoords = Cell::GetWorldCoords((__int16 *)MEMORY[0xA8B230], v8, *((char *)this + 36)); /*0x6e07b5*/
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
  unsigned int v8[3]; // [esp+4h] [ebp-Ch] BYREF

  v5 = MEMORY[0x8871E0]->?[5]; /*0x6e0803*/
  WorldCoords = Cell::GetWorldCoords((__int16 *)MEMORY[0xA8B230], v8, *((char *)this + 36)); /*0x6e0815*/
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
  unsigned int v8[3]; // [esp+4h] [ebp-Ch] BYREF

  v5 = MEMORY[0x8871E0]->?[5]; /*0x6e0863*/
  WorldCoords = Cell::GetWorldCoords((__int16 *)MEMORY[0xA8B230], v8, *((char *)this + 36)); /*0x6e0875*/
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

  v6 = *(unsigned int *)((unsigned int *))((unsigned int *))(ScenarioClass)::Get_Waypoint_Location((char *)g_abs_A8B230, &v7, *((char *)this + 36)); /*0x6e11a6*/
  MapClass::TriggerEVA((int16_t *)&v6); /*0x6e11aa*/
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
  unsigned int *v8; // eax
  int v9; // ecx

  if ( *((unsigned int *)this + 19) ) /*0x6e2a55*/
  {
    v6 = MEMORY[0xB0E730]; /*0x6e2a5c*/
    v7 = 0; /*0x6e2a62*/
    if ( MEMORY[0xB0E730] > 0 ) /*0x6e2a66*/
    {
      v8 = MEMORY[0xB0E724]; /*0x6e2a68*/
      do /*0x6e2a91*/
      {
        if ( *(unsigned int *)(v8[v7] + 36) == *((unsigned int *)this + 19) ) /*0x6e2a78*/
        {
          v9 = v8[v7]; /*0x6e2a7a*/
          if ( v9 ) /*0x6e2a7f*/
          {
            (*(void (**)(int, int))(*(unsigned int *)v9 + 32))(v9, 1); /*0x6e2a85*/
            v8 = MEMORY[0xB0E724]; /*0x6e2a88*/
          }
          --v7; /*0x6e2a8d*/
        }
        ++v7; /*0x6e2a8e*/
      }
      while ( v7 < v6 ); /*0x6e2a91*/
    }
  }
  return 1; /*0x6e2a93*/

}
} // namespace gamemd

// 0x6E2C20
namespace gamemd {
char globalHelper_0E2C20(int a1, int a2, int a3, IUnknown * aP3)
{
  LayerClass::ClearFactoryCellAssignments(&dword_87F7E8); /*0x6e2c25*/
  MapClass::MarkForRedraw(&dword_87F7E8, 1); /*0x6e2c31*/
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

  v6 = *(unsigned int *)(ScenarioClass)::Get_Waypoint_Location((char *)g_abs_A8B230, &v7, *((char *)this + 17)); /*0x6e360b*/
  GroundHeight = 0; /*0x6e360f*/
  v9 = (IDA_SHIWORD(v6) << 8) + 128; /*0x6e3630*/
  v8 = ((int16_t)v6 << 8) + 128; /*0x6e363a*/
  GroundHeight = Cell::GetGroundHeight(&v8); /*0x6e3643*/
  if ( (*((unsigned int *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v6) + 80) & 0x100) != 0 ) /*0x6e365f*/
    GroundHeight += g_abs_B0E6D4; /*0x6e366d*/
  IDA_LOWORD(v7) = v8 / 256; /*0x6e3681*/
  IDA_HIWORD(v7) = v9 / 256; /*0x6e3696*/
  if ( LightningStorm::IsActive() ) /*0x6e369b*/
    return 0; /*0x6e36cc*/
  LightningStorm::Start(IDA_HIDWORD(g_abs_8871E0[1].?), *(unsigned int *)&g_abs_8871E0[1].?[4], v7, a2); /*0x6e36bf*/
  return 1; /*0x6e36c6*/

}
} // namespace gamemd

// 0x6E3F70
namespace gamemd {
unsigned int * E4Recv_6E3F70::sub_6E3F70(unsigned int * a2)
{

  unsigned int *WorldCoords; // edx
  unsigned int v4[3]; // [esp+4h] [ebp-Ch] BYREF

  WorldCoords = Cell::GetWorldCoords((int16_t *)g_abs_A8B230, v4, *((char *)this + 36)); /*0x6e3f8b*/
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
unsigned int * Tactical_42::loc_6E4B00(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x6e4ab3*/
  *Block = &vt_VectorClass_TActionClass; /*0x6e4ab6*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x6e4ac0*/
  {
    RA2_OPDEL(v3); /*0x6e4ac8*/
    *(Block + 1) = 0; /*0x6e4ad0*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x6e4adb*/
  *(Block + 2) = 0; /*0x6e4ae1*/
  if ( (Block & 1) != 0 ) /*0x6e4ae8*/
    RA2_OPDEL(Block); /*0x6e4aeb*/
  return (VectorClass *)Block; /*0x6e4af5*/

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
  int64_t result; // rax

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
  int64_t result; // rax

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
  TagClass_Array = (int)&DynamicVectorClass_TagClass___vftable; /*0x6e4d7d*/
  dword_B0E734 = 10; /*0x6e4d87*/
  g_GameObjectCleanup = 0; /*0x6e4d91*/
  return atexit(sub_6E4DA0); /*0x6e4d9c*/
}
} // namespace gamemd

// 0x6E4DA0
namespace gamemd {
void sub_6E4DA0()
{
  TagClass_Array = (int)&VectorClass_TagClass___vftable; /*0x6e4da8*/
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

  return *((unsigned char *)this + 52); /*0x6e5293*/

}
} // namespace gamemd

// 0x6E57DE
namespace gamemd {
char ObjectClass::_do_always_noconv_codecvt_base_std__MBE_NXZ_18()
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
  int64_t result; // rax

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
  int64_t result; // rax

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
  dword_B0E780 = (int)&DynamicVectorClass_TagTypeClass___vftable; /*0x6e5afd*/
  dword_B0E794 = 10; /*0x6e5b07*/
  g_MultiplayerCleanup = 0; /*0x6e5b11*/
  return atexit(sub_6E5B20); /*0x6e5b1c*/
}
} // namespace gamemd

// 0x6E5B20
namespace gamemd {
void sub_6E5B20()
{
  dword_B0E780 = (int)&VectorClass_TagTypeClass___vftable; /*0x6e5b28*/
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
  int64_t result; // rax

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
  int64_t result; // rax

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
  dword_B0E844 = 0; /*0x6e6a5c*/
  dword_B0E848 = 0; /*0x6e6a61*/
  byte_B0E84C = 0; /*0x6e6a66*/
  dword_B0E850 = 0; /*0x6e6a6b*/
  return atexit(sub_6E6A80); /*0x6e6a76*/
}
} // namespace gamemd

// 0x6E6A80
namespace gamemd {
void sub_6E6A80()
{
  RA2_OPDEL(g_BuildingLoadQueue_Array); /*0x6e6a86*/
  g_BuildingLoadQueue_Array = 0; /*0x6e6a90*/
  dword_B0E844 = 0; /*0x6e6a95*/
  dword_B0E848 = 0; /*0x6e6a9a*/
  byte_B0E84C = 0; /*0x6e6a9f*/
  dword_B0E850 = 0; /*0x6e6aa4*/
}
} // namespace gamemd

// 0x6E6B70
namespace gamemd {
unsigned char * E4Recv_6E6B70::sub_6E6B70(unsigned int * a2)
{

  *((unsigned char *)this + 4) = 11; /*0x6e6b75*/
  *(unsigned int *)this = *a2 / 256 + 1000 * (a2[1] / 256); /*0x6e6ba4*/
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
  int64_t result; // rax

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
  int64_t result; // rax

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

  unsigned int *result; // eax
  unsigned int *v3; // ecx
  int v4; // edi
  int v5; // esi
  int v6; // edx

  result = this; /*0x6e8004*/
  *((unsigned int *)this + 2) = &vt_INoticeSink; /*0x6e8008*/
  *((unsigned int *)this + 3) = &vt_INoticeSource; /*0x6e800f*/
  *((unsigned int *)this + 4) = *(unsigned int *)(a2 + 16); /*0x6e801c*/
  *((unsigned char *)this + 20) = *(unsigned char *)(a2 + 20); /*0x6e8022*/
  *((unsigned int *)this + 6) = *(unsigned int *)(a2 + 24); /*0x6e8028*/
  *((unsigned int *)this + 7) = *(unsigned int *)(a2 + 28); /*0x6e802e*/
  *((unsigned char *)this + 32) = *(unsigned char *)(a2 + 32); /*0x6e8034*/
  *this = &vt_AbstractClass; /*0x6e803f*/
  *((unsigned int *)this + 1) = &vt_AbstractClass; /*0x6e8045*/
  *((unsigned int *)this + 2) = &vt_AbstractClass; /*0x6e804c*/
  *((unsigned int *)this + 3) = &vt_AbstractClass; /*0x6e8053*/
  qmemcpy((unsigned int *)this + 9, (const void *)(a2 + 36), 0x19u); /*0x6e805a*/
  qmemcpy((char *)this + 61, (const void *)(a2 + 61), 0x20u); /*0x6e8068*/
  *((unsigned int *)this + 24) = *(unsigned int *)(a2 + 96); /*0x6e8070*/
  qmemcpy((unsigned int *)this + 25, (const void *)(a2 + 100), 0x31u); /*0x6e807b*/
  *this = &vt_TaskForceClass; /*0x6e807e*/
  *((unsigned int *)this + 1) = &vt_TaskForceClass; /*0x6e8084*/
  *((unsigned int *)this + 2) = &vt_TaskForceClass; /*0x6e808b*/
  *((unsigned int *)this + 3) = &vt_TaskForceClass; /*0x6e8092*/
  v3 = (unsigned int *)this + 41; /*0x6e809f*/
  result[38] = *(unsigned int *)(a2 + 152); /*0x6e80a5*/
  result[39] = *(unsigned int *)(a2 + 156); /*0x6e80b1*/
  v4 = result[39]; /*0x6e80bd*/
  result[40] = *(unsigned int *)(a2 + 160); /*0x6e80c3*/
  v5 = 0; /*0x6e80c9*/
  if ( v4 > 0 ) /*0x6e80cd*/
  {
    v6 = a2 - (unsigned int)result; /*0x6e80cf*/
    do /*0x6e80e9*/
    {
      ++v5; /*0x6e80d4*/
      *v3 = *(unsigned int *)((char *)v3 + v6); /*0x6e80d5*/
      v3[1] = *(unsigned int *)((char *)v3 + v6 + 4); /*0x6e80db*/
      v3 += 2; /*0x6e80e4*/
    }
    while ( v5 < result[39] ); /*0x6e80e9*/
  }
  return result; /*0x6e80eb*/

}
} // namespace gamemd

// 0x6E85B0
namespace gamemd {
char E4Recv_6E85B0::sub_6E85B0()
{

  int v2; // edi
  unsigned int *i; // esi

  v2 = 0; /*0x6e85bb*/
  if ( *((char *)this + 39) <= 0 ) /*0x6e85bf*/
    return 1; /*0x6e85e1*/
  for ( i = (char *)this + 42; (*(int (**)(unsigned int))(*(unsigned int *)*i + 44))(*i) == 16; i += 2 ) /*0x6e85c1*/
  {
    if ( ++v2 >= *((char *)this + 39) ) /*0x6e85df*/
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
  int64_t result; // rax

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
  int64_t result; // rax

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

  v2 = *((unsigned int *)this + 21); /*0x6ea086*/
  *((unsigned char *)this + 127) = 1; /*0x6ea089*/
  *((unsigned char *)this + 120) = 1; /*0x6ea08e*/
  for ( *((unsigned char *)this + 122) = 0; v2; v2 = *(unsigned int *)(v2 + 1496) ) /*0x6ea095*/
  {
    if ( *((unsigned char *)this + 123) || *((unsigned char *)this + 119) ) /*0x6ea09e*/
      *(unsigned char *)(v2 + 1673) = 1; /*0x6ea0a5*/
  }
  result = SetLandTypeMap(*(unsigned int **)((char *)this + 40)); /*0x6ea0b8*/
  *((unsigned char *)this + 128) = 1; /*0x6ea0bd*/
  return result; /*0x6ea0c3*/

}
} // namespace gamemd

// 0x6EC370
namespace gamemd {
char E4Recv_6EC370::sub_6EC370()
{

  int v1; // ecx
  char result; // al

  v1 = *((unsigned int *)this + 21); /*0x6ec370*/
  result = 1; /*0x6ec373*/
  if ( v1 ) /*0x6ec377*/
  {
    while ( *(unsigned char *)(v1 + 981) ) /*0x6ec381*/
    {
      v1 = *(unsigned int *)(v1 + 1496); /*0x6ec383*/
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

  unsigned int *v4; // esi
  int result; // eax

  v4 = *(unsigned int **)((char *)this + 84); /*0x6eddc4*/
  if ( v4 ) /*0x6eddc9*/
  {
    do /*0x6edde6*/
    {
      result = (*(int (**)(unsigned int *, unsigned int))(*v4 + 1312))(v4, *(unsigned int *)(a2 + 4)); /*0x6eddd8*/
      v4 = (unsigned int *)v4[374]; /*0x6eddde*/
    }
    while ( v4 ); /*0x6edde6*/
    *((unsigned char *)this + 128) = 1; /*0x6edde9*/
  }
  else
  {
    *((unsigned char *)this + 128) = 1; /*0x6eddf5*/
  }
  return result; /*0x6eddf0*/

}
} // namespace gamemd

// 0x6EDE80
namespace gamemd {
void E4Recv_6EDE80::sub_6EDE80(int a2, int a3)
{

  *((unsigned char *)this + 128) = 1; /*0x6ede80*/

}
} // namespace gamemd

// 0x6EDF10
namespace gamemd {
void E4Recv_6EDF10::sub_6EDF10(int a2, int a3)
{

  unsigned int *i; // esi
  unsigned int *v5; // eax
  int v6; // [esp+8h] [ebp-14h]
  int v7; // [esp+Ch] [ebp-10h] BYREF
  unsigned char v8[12]; // [esp+10h] [ebp-Ch] BYREF

  for ( i = *(unsigned int **)((char *)this + 84); i; i = (unsigned int *)i[374] ) /*0x6edf1c*/
  {
    v5 = (unsigned int *)(*(int (**)(unsigned int *, unsigned char *))(*i + 72))(i, v8); /*0x6edf27*/
    IDA_LOWORD(v6) = *v5 / 256; /*0x6edf3a*/
    IDA_HIWORD(v6) = v5[1] / 256; /*0x6edf53*/
    v7 = v6; /*0x6edf60*/
    MapClass::TriggerEVA((int16_t *)&v7); /*0x6edf65*/
  }
  *((unsigned char *)this + 128) = 1; /*0x6edf74*/

}
} // namespace gamemd

// 0x6EDF90
namespace gamemd {
char E4Recv_6EDF90::sub_6EDF90(int a2, int a3)
{

  *(unsigned char *)(*((unsigned int *)this + 11) + 494) = 1; /*0x6edf95*/
  *((unsigned char *)this + 128) = 1; /*0x6edf9b*/
  return 1; /*0x6edfa1*/

}
} // namespace gamemd

// 0x6EDFB0
namespace gamemd {
int E4Recv_6EDFB0::sub_6EDFB0(int a2, int a3)
{

  int result; // eax

  result = *((unsigned int *)this + 11); /*0x6edfb0*/
  *(unsigned int *)(result + 592) = 4; /*0x6edfb3*/
  *((unsigned char *)this + 128) = 1; /*0x6edfbd*/
  return result; /*0x6edfc4*/

}
} // namespace gamemd

// 0x6EE050
namespace gamemd {
int E4Recv_6EE050::sub_6EE050(int a2, int a3)
{

  unsigned int *v4; // esi
  unsigned int *v5; // edi
  int result; // eax

  v4 = *(unsigned int **)((char *)this + 84); /*0x6ee054*/
  if ( v4 ) /*0x6ee059*/
  {
    do /*0x6ee07a*/
    {
      v5 = (unsigned int *)v4[374]; /*0x6ee05e*/
      (*(void (**)(unsigned int *))(*v4 + 212))(v4); /*0x6ee066*/
      result = (*(int (**)(unsigned int *))(*v4 + 248))(v4); /*0x6ee070*/
      v4 = v5; /*0x6ee078*/
    }
    while ( v5 ); /*0x6ee07a*/
    *((unsigned char *)this + 128) = 1; /*0x6ee07d*/
  }
  else
  {
    *((unsigned char *)this + 128) = 1; /*0x6ee089*/
  }
  return result; /*0x6ee084*/

}
} // namespace gamemd

// 0x6EF450
namespace gamemd {
char E4Recv_6EF450::sub_6EF450(int a2, int a3)
{

  *((unsigned char *)this + 128) = 1; /*0x6ef452*/
  *((unsigned char *)this + 132) = 1; /*0x6ef458*/
  return 1; /*0x6ef45e*/

}
} // namespace gamemd
