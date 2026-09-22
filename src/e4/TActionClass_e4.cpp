// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/Radar_e4.hpp"
#include "e4/classes/Terrain_e4.hpp"

// 0x4FCDC0
namespace gamemd {
void TActionClass::executeBuildAction()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  char result; // al

  result = this->q1F8; /*0x4fcdc0*/
  if ( !result ) /*0x4fcdc8*/
  {
    result = this->__pad_1F7; /*0x4fcdca*/
    if ( !result ) /*0x4fcdd2*/
      return HouseClass::CheckWinCondition(this, 0); /*0x4fcdd6*/
  }
  if ( this->q298 == -1 ) /*0x4fcde3*/
  {
    result = (char)g_CurrentFrame; /*0x4fcde5*/
    this->q298 = g_CurrentFrame; /*0x4fcdea*/
  }
  return result; /*0x4fcddb*/
}
}
} // namespace gamemd

// 0x50D2D0
namespace gamemd {
void TActionClass::executeMoveAction(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int i; // ebx
  int result; // eax

  for ( i = this->q01E - 1; i >= 0; --i ) /*0x50d2d8*/
  {
    result = this->q1B0; /*0x50d2e0*/
    _DWORD * v5 = *(_DWORD **)(result + 4 * i); /*0x50d2e3*/
    if ( v5[184] == a2 ) /*0x50d2ec*/
    {
      (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v5 + 980))(v5, a2, 0); /*0x50d2f5*/
      result = 0; /*0x50d2fb*/
      v5[184] = 0; /*0x50d2fd*/
      v5[179] = 0; /*0x50d303*/
    }
  }
  return result; /*0x50d30e*/
}
}
} // namespace gamemd

// 0x50DA00
namespace gamemd {
void TActionClass::executeGuardAction(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  this->q54F0 = a2; /*0x50da04*/
  return a2; /*0x50da0a*/
}
}
} // namespace gamemd

// 0x50DA20
namespace gamemd {
void TActionClass::executeHuntAction(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  this->q54F4 = a2; /*0x50da24*/
  this->q54FC = g_CurrentFrame; /*0x50da30*/
  return a2; /*0x50da36*/
}
}
} // namespace gamemd

// 0x50DFE0
namespace gamemd {
void TActionClass::executeDeployAction(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  this->q5494 = a2; /*0x50dfe4*/
  return a2; /*0x50dfea*/
}
}
} // namespace gamemd

// 0x567F70
namespace gamemd {
void sub_567F70(int * a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  __int16 v20; // [esp+14h] [ebp-8h]
  __int16 v21; // [esp+16h] [ebp-6h]
  int v2 = *a1; /*0x567f7a*/
  int v3 = a1[1]; /*0x567f7c*/
  int v4 = a1[2]; /*0x567f7f*/
  int v5 = ZCoordToScreenY(v4); /*0x567f84*/
  int v6; // esi
  v6 = ((((unsigned int)(((unsigned __int64)(2004318071LL * v5) >> 32) - v5) >> 31) /*0x567fa3*/
       + ((int)(((unsigned __int64)(2004318071LL * v5) >> 32) - v5) >> 4)) << 8)
     + v2;
  int v7 = ZCoordToScreenY(v4); /*0x567fa5*/
  int v8 = a2; /*0x567fb5*/
  v20 = v6 / 256; /*0x567fd6*/
  int v9 = -2 - a2; /*0x567fee*/
  v21 = (int)(((((unsigned int)(((unsigned __int64)(2004318071LL * v7) >> 32) - v7) >> 31) /*0x567ff0*/
              + ((int)(((unsigned __int64)(2004318071LL * v7) >> 32) - v7) >> 4)) << 8)
            + v3)
      / 256;
  int v10 = -2 - a2; /*0x567ff5*/
  result = a2 + 2; /*0x567ff7*/
  if ( -2 - a2 < a2 + 2 ) /*0x568000*/
  {
    int v12 = g_Shroud_CellArray; /*0x568006*/
    do /*0x568130*/
    {
      if ( v9 < result ) /*0x56800f*/
      {
        int v13 = v10 * v10; /*0x56801a*/
        int v14 = (v8 + 1) * (v8 + 1); /*0x56801d*/
        while ( 1 ) /*0x56802a*/
        {
          if ( v13 + v9 * v9 < v14 ) /*0x568033*/
          {
  int v22; // [esp+20h] [ebp+4h]
            HIWORD(v22) = v9 + v21; /*0x568045*/
            LOWORD(v22) = v10 + v20; /*0x56804a*/
            unsigned int v15 = ((__int16)(v9 + v21) << 9) + (__int16)(v10 + v20); /*0x56805c*/
  _DWORD *v16; // ecx
            if ( v15 >= 0x40000 || (v16 = *(_DWORD **)(v12 + 4 * v15)) == 0 ) /*0x56806e*/
            {
              g_Map_GlobalCellIndex = v22; /*0x568070*/
              v16 = g_CellClassArray; /*0x568076*/
            }
            if ( !v16[76] ) /*0x56807b*/
            {
  _DWORD *v17; // ecx
              if ( v15 >= 0x40000 || (v17 = *(_DWORD **)(v12 + 4 * v15)) == 0 ) /*0x568098*/
              {
                g_Map_GlobalCellIndex = v22; /*0x56809a*/
                v17 = g_CellClassArray; /*0x5680a0*/
              }
              v17[76] = 1; /*0x5680a7*/
  _DWORD *v18; // ecx
              if ( v15 >= 0x40000 || (v18 = *(_DWORD **)(g_Shroud_CellArray + 4 * v15)) == 0 ) /*0x5680c5*/
              {
                g_Map_GlobalCellIndex = v22; /*0x5680c7*/
                v18 = g_CellClassArray; /*0x5680cd*/
              }
              v18[75] &= ~8u; /*0x5680dd*/
  _DWORD *v19; // eax
              if ( v15 >= 0x40000 || (v19 = *(_DWORD **)(g_Shroud_CellArray + 4 * v15)) == 0 ) /*0x5680f7*/
              {
                g_Map_GlobalCellIndex = v22; /*0x5680f9*/
                v19 = g_CellClassArray; /*0x5680ff*/
              }
              v19[75] &= ~0x10u; /*0x56810d*/
              v12 = g_Shroud_CellArray; /*0x568113*/
            }
          }
          v8 = a2; /*0x568119*/
          ++v9; /*0x56811d*/
          result = a2 + 2; /*0x56811e*/
          if ( v9 >= a2 + 2 ) /*0x568123*/
            break; /*0x568123*/
          v13 = v10 * v10; /*0x568026*/
        }
        v9 = -2 - a2; /*0x568129*/
      }
      ++v10; /*0x56812d*/
    }
    while ( v10 < result ); /*0x568130*/
  }
  return result; /*0x568137*/
}
}
} // namespace gamemd

// 0x577C90
namespace gamemd {
void TActionClass::executeRepairAction(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  int *i; // esi

  result = a2; /*0x577c90*/
  if ( a2 ) /*0x577c99*/
    *(_BYTE *)(*(_DWORD *)&HouseClass_Array->__pad_0[4 * *(_DWORD *)(a2 + 48)] + 577) = 0; /*0x577ca7*/
  if ( (#375 *)a2 != HouseClass_Player ) /*0x577cb4*/
  {
    if ( a2 ) /*0x577cb8*/
      return result; /*0x577cb8*/
    goto LABEL_7; /*0x577cb8*/
  }
  if ( !a2 ) /*0x577cc2*/
LABEL_7:
    Debug::Log(); /*0x577cc4*/
  HouseClass::ResetObjectOrders(0, 0); /*0x577cd1*/
  int v4 = this->q0F4; /*0x577ce0*/
  this->q10C = 1; /*0x577ce6*/
  this->q110 = v4; /*0x577cf0*/
  this->q045 = v4 - 1; /*0x577cf9*/
  this->q046 = (v4 << 11) + this->q13C + 4; /*0x577d0e*/
  for ( i = (int *)LayerClass::CellIteratorNext(this); i; i = (int *)LayerClass::CellIteratorNext(this) ) /*0x577d1d*/
  {
    DisplayClass::AdvanceFrameCounter(i); /*0x577d21*/
    if ( i[76] >= 0 ) /*0x577d2e*/
    {
      int v6 = i[80]; /*0x577d36*/
      LOBYTE(v6) = v6 & 0xFC; /*0x577d3f*/
      i[75] &= 0xFFFFFFE7; /*0x577d41*/
      i[80] = v6; /*0x577d47*/
    }
  }
  Radar::UpdateReveal(0, 0); /*0x577d63*/
  *((_BYTE *)HouseClass_Player + 576) = 0; /*0x577d72*/
  FogOfWar::Render((int **)&DataGlobal_87F7E8); /*0x577d79*/
  return (*(int (__thiscall **)(_DWORD *, int))(*this + 56))(this, 2); /*0x577d88*/
}
}
} // namespace gamemd

// 0x578850
namespace gamemd {
void TActionClass::executeSellAction()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax

  result = this->q100; /*0x578850*/
  int v2 = this->q0FC; /*0x578856*/
  this->q11C = v2 + result + 1; /*0x578861*/
  this->q120 = result + this->q0F4 - v2; /*0x578871*/
  return result; /*0x578877*/
}
}
} // namespace gamemd

// 0x6AC5F0
namespace gamemd {
unsigned int * TActionClass::executeHarvestAction(int a2, MouseClass * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  InfantryTypeClass *result; // eax
  CCINIClass *v6; // edx
  int v7; // eax
  int v8; // edx
  int v9; // eax
  _DWORD *v10; // edx
  _DWORD *v11; // ecx
  result = *(InfantryTypeClass **)&g_NetworkPlayerBuffer[3356]; /*0x6ac5f0*/
  int v5 = 0; /*0x6ac5f9*/
  if ( *(int *)&g_NetworkPlayerBuffer[3356] <= 0 ) /*0x6ac601*/
  {
LABEL_5:
    v5 = 0; /*0x6ac615*/
    if ( (int)g_CrateCount <= 0 ) /*0x6ac61f*/
    {
LABEL_9:
      v5 = 0; /*0x6ac632*/
      if ( (int)g_TypeClass_FindCache <= 0 ) /*0x6ac63c*/
      {
LABEL_13:
        v5 = 0; /*0x6ac64f*/
        if ( (int)g_TriggerClassCount <= 0 ) /*0x6ac659*/
          return result->vtable0; /*0x6ac659*/
        result = (InfantryTypeClass *)g_TriggerTypeCount; /*0x6ac65f*/
        while ( a2 != *(_DWORD *)result->vtable0 ) /*0x6ac666*/
        {
          ++v5; /*0x6ac668*/
          result = (InfantryTypeClass *)((char *)result + 4); /*0x6ac669*/
          if ( v5 >= (int)g_TriggerClassCount ) /*0x6ac66e*/
            return result->vtable0; /*0x6ac66e*/
        }
      }
      else
      {
        result = (InfantryTypeClass *)g_AircraftTypeCount; /*0x6ac63e*/
        while ( a2 != *(_DWORD *)result->vtable0 ) /*0x6ac645*/
        {
          ++v5; /*0x6ac647*/
          result = (InfantryTypeClass *)((char *)result + 4); /*0x6ac648*/
          if ( v5 >= (int)g_TypeClass_FindCache ) /*0x6ac64d*/
            goto LABEL_13; /*0x6ac64d*/
        }
      }
    }
    else
    {
      result = (InfantryTypeClass *)g_UnitTypeCount2; /*0x6ac621*/
      while ( a2 != *(_DWORD *)result->vtable0 ) /*0x6ac628*/
      {
        ++v5; /*0x6ac62a*/
        result = (InfantryTypeClass *)((char *)result + 4); /*0x6ac62b*/
        if ( v5 >= (int)g_CrateCount ) /*0x6ac630*/
          goto LABEL_9; /*0x6ac630*/
      }
    }
  }
  else
  {
    v6 = *(CCINIClass **)&g_NetworkPlayerBuffer[3344]; /*0x6ac603*/
    while ( *(_DWORD *)v6->__pad_0 != a2 ) /*0x6ac60b*/
    {
      ++v5; /*0x6ac60d*/
      v6 = (CCINIClass *)((char *)v6 + 4); /*0x6ac60e*/
      if ( v5 >= *(int *)&g_NetworkPlayerBuffer[3356] ) /*0x6ac613*/
        goto LABEL_5; /*0x6ac613*/
    }
  }
  result = (InfantryTypeClass *)(*(int (**)(void))(*(_DWORD *)a2 + 44))(); /*0x6ac677*/
  if ( result == (InfantryTypeClass *)15 || result == (InfantryTypeClass *)16 ) /*0x6ac682*/
  {
    v7 = 2; /*0x6ac6d4*/
  }
  else if ( result == (InfantryTypeClass *)1 /*0x6ac696*/
         || result == (InfantryTypeClass *)40
         || result == (InfantryTypeClass *)2
         || result == (InfantryTypeClass *)3 )
  {
    v7 = 3; /*0x6ac6cd*/
  }
  else if ( result == (InfantryTypeClass *)6 || result == (InfantryTypeClass *)7 ) /*0x6ac6a0*/
  {
    v7 = GetHouseTechLevel((int)result, v5) == 5; /*0x6ac6c9*/
  }
  else
  {
    if ( result != (InfantryTypeClass *)57 && result != (InfantryTypeClass *)32 && result != (InfantryTypeClass *)31 ) /*0x6ac6af*/
      return result->vtable0; /*0x6ac6af*/
    v7 = 1; /*0x6ac6b1*/
  }
  v8 = 997 * v7; /*0x6ac6e3*/
  v9 = 0; /*0x6ac6e6*/
  v10 = this + v8 + 1361; /*0x6ac6e8*/
  v11 = v10 + 22; /*0x6ac6ef*/
  while ( *v11 != v5 ) /*0x6ac6f4*/
  {
    ++v9; /*0x6ac6f6*/
    v11 += 13; /*0x6ac6f7*/
    if ( v9 >= 75 ) /*0x6ac6fd*/
      goto LABEL_38; /*0x6ac6fd*/
  }
  v10[13 * v9 + 34] = (char *)aP2 + *(_DWORD *)&g_NetworkPlayerBuffer[5960]; /*0x6ac713*/
LABEL_38:
  result = (InfantryTypeClass *)((char *)&aP2->field_0 + *(_DWORD *)&g_NetworkPlayerBuffer[5960] + 1); /*0x6ac71a*/
  this->q14E8 = result; /*0x6ac728*/
  return result->vtable0; /*0x6ac670*/
}
}
} // namespace gamemd

// 0x6E0B60
namespace gamemd {
void TActionClass::ConvertHouseUnits(int a2, int _14, unsigned int * a3, IUnknown * aP4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int Field11; // eax
  int i; // edi
  Animation *v15; // esi
  void * v5 = (void *)this->Value; /*0x6e0b63*/
  char v6 = 0; /*0x6e0b6d*/
  if ( !a3 ) /*0x6e0b71*/
    return 0; /*0x6e0b71*/
  if ( v5 == (void *)8997 ) /*0x6e0b79*/
  {
    Field11 = Property::GetField11(a3); /*0x6e0b7b*/
  }
  else
  {
    if ( v5 == (void *)-1 ) /*0x6e0b85*/
      return 0; /*0x6e0bab*/
    if ( BuildingType::IsSpecialType(v5) ) /*0x6e0b89*/
      Field11 = BuildingType::FindOwnerHouse(v5); /*0x6e0b94*/
    else
      Field11 = HouseClass::FindOwner(v5); /*0x6e0b9b*/
  }
  int v8 = Field11; /*0x6e0ba0*/
  if ( !Field11 ) /*0x6e0ba4*/
    return 0; /*0x6e0ba4*/
  int v10 = *(_DWORD *)&g_NetworkPlayerBuffer[5708]; /*0x6e0bae*/
  for ( i = 0; i < *(int *)&g_NetworkPlayerBuffer[5708]; ++i ) /*0x6e0bb8*/
  {
    _DWORD * v12 = *(_DWORD **)(*(_DWORD *)&g_NetworkPlayerBuffer[5696] + 4 * i); /*0x6e0bbf*/
    if ( v12[135] == a2 /*0x6e0bf4*/
      && (!v12
       || (*(int (__thiscall **)(_DWORD))(*v12 + 44))(*(_DWORD *)(*(_DWORD *)&g_NetworkPlayerBuffer[5696] + 4 * i)) != 6
  int v13; // esi
       || (v13 = v12[328]) == 0
       || !*(_BYTE *)(v13 + 5491) && !*(_BYTE *)(v13 + 5492)) )
    {
      (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(*(_DWORD *)&g_NetworkPlayerBuffer[5696] + 4 * i) /*0x6e0c0b*/
                                                  + 980))(
        *(_DWORD *)(*(_DWORD *)&g_NetworkPlayerBuffer[5696] + 4 * i),
        v8,
        0);
      v6 = 1; /*0x6e0c11*/
    }
    v10 = *(_DWORD *)&g_NetworkPlayerBuffer[5708]; /*0x6e0c13*/
  }
  int v14 = 0; /*0x6e0c1d*/
  if ( v10 > 0 ) /*0x6e0c21*/
  {
    do /*0x6e0c89*/
    {
      v15 = *(Animation **)(*(_DWORD *)&g_NetworkPlayerBuffer[5696] + 4 * v14); /*0x6e0c2c*/
      if ( *(_DWORD *)&v15[540] == a2 ) /*0x6e0c35*/
      {
        if ( v15 ) /*0x6e0c39*/
        {
          if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v15 + 44))(*(_DWORD *)(*(_DWORD *)&g_NetworkPlayerBuffer[5696] /*0x6e0c45*/
                                                                               + 4 * v14)) == 6 )
          {
            int v16 = *(_DWORD *)&v15[1312]; /*0x6e0c47*/
            if ( v16 ) /*0x6e0c4f*/
            {
              if ( *(_BYTE *)(v16 + 5491) || *(_BYTE *)(v16 + 5492) ) /*0x6e0c5b*/
              {
                (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(*(_DWORD *)&g_NetworkPlayerBuffer[5696] /*0x6e0c72*/
                                                                          + 4 * v14)
                                                            + 980))(
                  *(_DWORD *)(*(_DWORD *)&g_NetworkPlayerBuffer[5696] + 4 * v14),
                  v8,
                  0);
                Animation::UpdateBuildingAnimations((int)v15); /*0x6e0c7a*/
                v6 = 1; /*0x6e0c7f*/
              }
            }
          }
        }
      }
      ++v14; /*0x6e0c86*/
    }
    while ( v14 < *(int *)&g_NetworkPlayerBuffer[5708] ); /*0x6e0c89*/
  }
  return v6; /*0x6e0ba6*/
}
}
} // namespace gamemd

// 0x6E1CC0
namespace gamemd {
void TActionClass::executeRetreatAction(AbstractClass * aP1, int a3, int a4, AbstractClass * aP4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  void **v5; // eax
  CoordStruct aP2; // [esp+8h] [ebp-Ch] BYREF

  int v8; // [esp+4h] [ebp-10h] BYREF
  int v7 = *ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v8, this->q011); /*0x6e1cdb*/
  aP2.Z = 0; /*0x6e1cdf*/
  aP2.Y = (SHIWORD(v7) << 8) + 128; /*0x6e1d00*/
  aP2.X = ((__int16)v7 << 8) + 128; /*0x6e1d0a*/
  aP2.Z = Cell::GetGroundHeight(&aP2); /*0x6e1d13*/
  if ( (*((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v7) + 80) & 0x100) != 0 /*0x6e1d49*/
    || (*((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v7) + 80) & 0x400) != 0 )
  {
    aP2.Z += *(_DWORD *)&g_OverlayTypeConfig[28380]; /*0x6e1d57*/
  }
  v5 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x6e1d60*/
  if ( v5 ) /*0x6e1d6a*/
    AnimClass::ctor( /*0x6e1d92*/
      v5,
      *(CoordStruct **)(*(_DWORD *)&DataGlobal_87F8E4[30972] + 5244),
      &aP2,
      0,
      (CoordStruct *)1,
      (void *)0x600,
      0,
      0)->__pad_194[4] = 1;
  else
    DataGlobal_00000198 = 1; /*0x6e1da3*/
  return 1; /*0x6e1d9b*/
}
}
} // namespace gamemd

// 0x6E2290
namespace gamemd {
void TActionClass::executeEscortAction(int a2, int a3, int a4, IUnknown * aP4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  void **v6; // eax
  CoordStruct aP2; // [esp+Ch] [ebp-Ch] BYREF

  int v9; // [esp+8h] [ebp-10h] BYREF
  int v8 = *ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v9, this->q011); /*0x6e22ae*/
  aP2.Z = 0; /*0x6e22b2*/
  aP2.Y = (SHIWORD(v8) << 8) + 128; /*0x6e22d3*/
  aP2.X = ((__int16)v8 << 8) + 128; /*0x6e22dd*/
  aP2.Z = Cell::GetGroundHeight(&aP2); /*0x6e22e6*/
  if ( (*((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v8) + 80) & 0x100) != 0 /*0x6e231c*/
    || (*((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v8) + 80) & 0x400) != 0 )
  {
    aP2.Z += *(_DWORD *)&g_OverlayTypeConfig[28380]; /*0x6e232a*/
  }
  v6 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x6e2333*/
  if ( v6 ) /*0x6e233d*/
    AnimClass::ctor( /*0x6e2368*/
      v6,
      *(CoordStruct **)(*(_DWORD *)&g_CellDirectionOffsets[84676] + 4 * this->idxArray),
      &aP2,
      0,
      (CoordStruct *)1,
      (void *)0x600,
      0,
      0)->__pad_194[4] = 1;
  else
    DataGlobal_00000198 = 1; /*0x6e237b*/
  return 1; /*0x6e2371*/
}
}
} // namespace gamemd

// 0x6E2390
namespace gamemd {
void TActionClass::CreateWeaponImpactAtWaypoint(int a2, int a3, int a4, IUnknown * aP4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  CoordStruct *WarheadVersusMultiplier; // esi
  void **v11; // ebp
  CoordStruct aP2; // [esp+18h] [ebp-Ch] BYREF

  int v15; // [esp+14h] [ebp-10h] BYREF
  int v14 = *ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v15, this->q011); /*0x6e23b1*/
  aP2.Z = 0; /*0x6e23b5*/
  aP2.Y = (SHIWORD(v14) << 8) + 128; /*0x6e23d6*/
  aP2.X = ((__int16)v14 << 8) + 128; /*0x6e23e0*/
  aP2.Z = Cell::GetGroundHeight(&aP2); /*0x6e23e9*/
  if ( (*((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v14) + 80) & 0x100) != 0 /*0x6e241f*/
    || (*((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v14) + 80) & 0x400) != 0 )
  {
    aP2.Z += *(_DWORD *)&g_OverlayTypeConfig[28380]; /*0x6e242d*/
  }
  int v6 = this->idxArray; /*0x6e2431*/
  int v7 = *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[31880] + 4 * v6); /*0x6e2440*/
  int v8 = *(_DWORD *)(v7 + 164); /*0x6e2449*/
  _DWORD * v9 = Coord::To_Cell(&DataGlobal_87F7E8, (IUnknown *)&aP2); /*0x6e244f*/
  WarheadVersusMultiplier = (CoordStruct *)GetWarheadVersusMultiplier(v8, *(_DWORD *)(v7 + 172), v9[59], &aP2); /*0x6e246d*/
  if ( WarheadVersusMultiplier ) /*0x6e2471*/
  {
    v11 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x6e247d*/
    if ( v11 ) /*0x6e2484*/
    {
      void * v12 = (void *)Return::HRESULT_Fail(aP2.X, aP2.Y, aP2.Z); /*0x6e24a1*/
      AnimClass::ctor(v11, WarheadVersusMultiplier, &aP2, 0, (CoordStruct *)1, (void *)0x2600, v12, 0); /*0x6e24b8*/
    }
  }
  CreateSmokeEffectAt( /*0x6e24ea*/
    v8,
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[31880] + 4 * v6) + 172),
    aP2.X,
    aP2.Y,
    aP2.Z,
    0,
    0);
  PlaySoundEffectAt( /*0x6e250b*/
    &aP2,
    v8,
    0,
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[31880] + 4 * v6) + 172),
    1,
    0);
  return 1; /*0x6e2510*/
}
}
} // namespace gamemd

// 0x6E2C40
namespace gamemd {
void TActionClass::SpawnMeteorShower(AbstractClass * aP1, int a3, int a4, AbstractClass * aP4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int String; // ebp
  AnimClass *v12; // esi
  int GroundHeight; // [esp+20h] [ebp-10h]
  CoordStruct aP2; // [esp+24h] [ebp-Ch] BYREF

  int v19; // [esp+14h] [ebp-1Ch] BYREF
  int v17 = *ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v19, this->q011); /*0x6e2c60*/
  GroundHeight = 0; /*0x6e2c64*/
  int v21 = (SHIWORD(v17) << 8) + 128; /*0x6e2c85*/
  int v20 = ((__int16)v17 << 8) + 128; /*0x6e2c8f*/
  GroundHeight = Cell::GetGroundHeight(&v20); /*0x6e2c98*/
  if ( (*((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v17) + 80) & 0x100) != 0 /*0x6e2cce*/
    || (*((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v17) + 80) & 0x400) != 0 )
  {
    GroundHeight += *(_DWORD *)&g_OverlayTypeConfig[28380]; /*0x6e2cdc*/
  }
  int v6; // esi
  v6 = *(_DWORD *)&stru_830620[22428][4 * this->idxArray + 52544] /*0x6e2d0a*/
     + (int)abs32(Random::State(&g_ScenarioClass_Instance->random[1])) % 3;
  String = GlobalArray::FindString(&stru_830620[75264]); /*0x6e2d1b*/
  v19 = GlobalArray::FindString(&stru_830620[75252]); /*0x6e2d22*/
  int v8 = 70 * v6; /*0x6e2d32*/
  if ( v6 <= 0 ) /*0x6e2d36*/
    return 1; /*0x6e2e0e*/
  int v18 = v6; /*0x6e2d3d*/
  do /*0x6e2dfa*/
  {
    int * v9 = &g_ScenarioClass_Instance->random[1]; /*0x6e2d46*/
    int v10 = Random::State(&g_ScenarioClass_Instance->random[1]) % v8; /*0x6e2d58*/
    int v11 = Random::State(v9); /*0x6e2d5a*/
    aP2.X = v10 + v20; /*0x6e2d6d*/
    aP2.Z = GroundHeight; /*0x6e2d77*/
    aP2.Y = v11 % v8 + v21; /*0x6e2d7f*/
    aP2.Z = Cell::GetGroundHeight(&aP2); /*0x6e2d93*/
    v12 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x6e2d9c*/
    if ( v12 ) /*0x6e2da3*/
    {
      signed int v14 = abs32(Random::State(&g_ScenarioClass_Instance->random[1])) & 0x80000001; /*0x6e2dba*/
      bool v13 = v14 == 0; /*0x6e2dba*/
      if ( v14 < 0 ) /*0x6e2dbf*/
        v13 = (((_BYTE)v14 - 1) | 0xFFFFFFFE) == -1; /*0x6e2dc5*/
      int v15 = String; /*0x6e2dc6*/
      if ( v13 ) /*0x6e2dc8*/
        v15 = v19; /*0x6e2dca*/
      AnimClass::ctor( /*0x6e2dec*/
        (void **)v12,
        *(CoordStruct **)(*(_DWORD *)&g_CellDirectionOffsets[84676] + 4 * v15),
        &aP2,
        0,
        (CoordStruct *)1,
        (void *)0x600,
        0,
        0);
    }
    --v18; /*0x6e2df6*/
  }
  while ( v18 ); /*0x6e2dfa*/
  return 1; /*0x6e2e01*/
}
}
} // namespace gamemd

// 0x6E36E0
namespace gamemd {
void TActionClass::executeParadropAction(int a2, int a3, int a4, IUnknown * aP4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  void **v10; // eax
  MouseClass *v11; // edi
  __int16 v13; // cx
  _DWORD *i; // esi
  CoordStruct aP2; // [esp+18h] [ebp-Ch] BYREF

  int v17; // [esp+10h] [ebp-14h] BYREF
  int v16 = *ScenarioClass::Get_Waypoint_Location(*(char **)&HouseClass_Player[29924], &v17, this->q011); /*0x6e3706*/
  void * v5 = CellCoord::To_CellObj(&stru_87C374[13428], (__int16 *)&v16); /*0x6e370a*/
  int * v6 = (int *)(*(int (__thiscall **)(void *, CoordStruct *))(*(_DWORD *)v5 + 72))(v5, &aP2); /*0x6e3718*/
  int v7 = *v6; /*0x6e371b*/
  int v8 = v6[1]; /*0x6e3722*/
  int v9 = v6[2]; /*0x6e3725*/
  v10 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x6e3728*/
  if ( v10 ) /*0x6e3732*/
  {
    aP2.Z = v9 + 5; /*0x6e373b*/
    aP2.X = v7; /*0x6e3752*/
    aP2.Y = v8; /*0x6e3756*/
    AnimClass::ctor( /*0x6e3764*/
      v10,
      *(CoordStruct **)(*(_DWORD *)&stru_87C374[44652] + 840),
      &aP2,
      0,
      (CoordStruct *)1,
      (void *)0x600,
      0,
      0);
  }
  v11 = (MouseClass *)dword_ABD490; /*0x6e3772*/
  int v12 = 9; /*0x6e3777*/
  do /*0x6e37da*/
  {
    v13 = HIWORD(v11->field_0); /*0x6e377e*/
    LOWORD(v17) = LOWORD(v11->field_0) + v16; /*0x6e378a*/
    HIWORD(v17) = HIWORD(v16) + v13; /*0x6e378f*/
    int v18 = v17; /*0x6e37a2*/
    for ( i = (_DWORD *)*((_DWORD *)CellCoord::To_CellObj(&stru_87C374[13428], (__int16 *)&v18) + 57); /*0x6e37b3*/
          i;
          i = (_DWORD *)i[12] )
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD, _DWORD))(*i + 340))( /*0x6e37c9*/
        i,
        *(_DWORD *)(*(_DWORD *)&stru_87C374[44652] + 4072),
        0,
        0);
    }
    v11 = (MouseClass *)((char *)v11 + 4); /*0x6e37d6*/
    --v12; /*0x6e37d9*/
  }
  while ( v12 ); /*0x6e37da*/
  return 1; /*0x6e37dc*/
}
}
} // namespace gamemd

// 0x6E4150
namespace gamemd {
void TActionClass::executeGeneticMutatorAction(int a2, int a3, int a4, IUnknown * aP4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v5 = -1; /*0x6e415d*/
  int v6 = *(_DWORD *)&g_NetworkPlayerBuffer[5332] - 1; /*0x6e4160*/
  if ( *(_DWORD *)&g_NetworkPlayerBuffer[5332] - 1 >= 0 ) /*0x6e416b*/
  {
    const char * v7 = (const char *)(this + 21); /*0x6e4172*/
    int v8 = *(_DWORD *)&g_NetworkPlayerBuffer[5320] + 4 * v6; /*0x6e4175*/
    while ( strcmp((const char *)(*(_DWORD *)v8 + 36), v7) ) /*0x6e41ab*/
    {
      --v6; /*0x6e41ad*/
      v8 -= 4; /*0x6e41ae*/
      if ( v6 < 0 ) /*0x6e41b3*/
      {
        v5 = -1; /*0x6e41b5*/
        goto LABEL_7; /*0x6e41b9*/
      }
    }
    v5 = v6; /*0x6e41bb*/
  }
LABEL_7:
  if ( v5 >= *(int *)&g_NetworkPlayerBuffer[5332] || v5 < 0 ) /*0x6e41cd*/
    return 0; /*0x6e41f6*/
  TActionClass::executeHarvestAction( /*0x6e41e9*/
    &DataGlobal_87F7E8,
    *(_DWORD *)(*(_DWORD *)&g_NetworkPlayerBuffer[5320] + 4 * v5),
    (MouseClass *)this->idxArray);
  return 1; /*0x6e41c3*/
}
}
} // namespace gamemd

// 0x6E42D0
namespace gamemd {
void TActionClass::executeIronCurtainAction(int a2, int a3, int a4, IUnknown * aP4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  if ( !a2 ) /*0x6e42d6*/
    return 0; /*0x6e42d6*/
  int v5 = this->idxArray; /*0x6e42d8*/
  if ( v5 < 0 ) /*0x6e42e0*/
    return 0; /*0x6e42e0*/
  if ( v5 > *(_DWORD *)(a2 + 612) ) /*0x6e42ec*/
    return 0; /*0x6e42ec*/
  int v6 = *(_DWORD *)(*(_DWORD *)(a2 + 600) + 4 * v5); /*0x6e42f4*/
  if ( !*(_BYTE *)(v6 + 109) || (unsigned int)this->q012 > 0x64 ) /*0x6e4303*/
    return 0; /*0x6e4317*/
  SuperClass::SetCharge(v6, this->q012); /*0x6e430d*/
  return 1; /*0x6e4314*/
}
}
} // namespace gamemd

// 0x6E4320
namespace gamemd {
void TActionClass::executeNukeAction(int a2, int a3, int a4, IUnknown * aP4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  if ( !a2 ) /*0x6e4326*/
    return 0; /*0x6e4326*/
  int v5 = this->idxArray; /*0x6e4328*/
  if ( v5 < 0 || v5 > *(_DWORD *)(a2 + 612) ) /*0x6e433c*/
    return 0; /*0x6e4355*/
  SuperClass::SetRechargeTime(*(_DWORD **)(*(_DWORD *)(a2 + 600) + 4 * v5), this->q012); /*0x6e434b*/
  return 1; /*0x6e4352*/
}
}
} // namespace gamemd

// 0x71E6A0
namespace gamemd {
T TActionClass::TActionClass()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  AbstractClass::Constructor((AbstractClass *)this); /*0x71e6a4*/
  this->idxArray = -1; /*0x71e6ab*/
  this->TActionClass_field_28 = 0; /*0x71e6b2*/
  this->TActionClass_field_2C = 0; /*0x71e6b5*/
  this->TActionClass_field_30 = 0; /*0x71e6b8*/
  this->TActionClass_field_38 = 0; /*0x71e6bb*/
  this->TActionClass_field_54 = 0; /*0x71e6be*/
  *(_DWORD *)this = &TEventClass::`vftable'; /*0x71e6c1*/
  this->vtable1 = &TEventClass::`vftable'; /*0x71e6c7*/
  this->vtable2 = &TEventClass::`vftable'; /*0x71e6ce*/
  this->vtable3 = &vt_TEventClass; /*0x71e6d5*/
  int v2 = DataGlobal_B0F1B0; /*0x71e6dc*/
  if ( DataGlobal_B0F1B0 < DataGlobal_B0F1A8 /*0x71e71a*/
    || (DataGlobal_B0F1AD || !DataGlobal_B0F1A8)
    && DataGlobal_B0F1B4 > 0
  char v3; // al
    && (v3 = (*(int (__thiscall **)(int *, int, _DWORD))(DataGlobal_B0F1A0 + 8))(
               &DataGlobal_B0F1A0,
               DataGlobal_B0F1A8 + DataGlobal_B0F1B4,
               0),
        v2 = DataGlobal_B0F1B0,
        v3) )
  {
    DataGlobal_B0F1B0 = v2 + 1; /*0x71e71f*/
    *((_DWORD *)DataGlobal_B0F1A4 + v2) = this; /*0x71e72b*/
    v2 = DataGlobal_B0F1B0; /*0x71e72e*/
  }
  int v4 = 0; /*0x71e734*/
  if ( v2 <= 0 ) /*0x71e738*/
  {
LABEL_11:
    v4 = -1; /*0x71e74c*/
  }
  else
  {
    _DWORD * v5 = DataGlobal_B0F1A4; /*0x71e73a*/
    while ( *v5 != this ) /*0x71e742*/
    {
      ++v4; /*0x71e744*/
      ++v5; /*0x71e745*/
      if ( v4 >= v2 ) /*0x71e74a*/
        goto LABEL_11; /*0x71e74a*/
    }
  }
  this->idxArray = v4; /*0x71e74f*/
  if ( g_TActionClassState < DataGlobal_B0F660 /*0x71e786*/
    || (DataGlobal_B0F665 || !DataGlobal_B0F660)
    && DataGlobal_B0F66C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(TActionClass_Array + 8))(
         &TActionClass_Array,
         DataGlobal_B0F660 + DataGlobal_B0F66C,
         0) )
  {
    int v6 = g_TActionClassState++; /*0x71e793*/
    *((_DWORD *)DataGlobal_B0F65C + v6) = this; /*0x71e7a2*/
  }
  if ( g_AnimManager < g_AnimTypePool /*0x71e7d9*/
    || (g_AnimPoolLocked || !g_AnimTypePool)
    && g_AnimManagerConfig > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_AnimPoolManager + 8))(
         &g_AnimPoolManager,
         g_AnimTypePool + g_AnimManagerConfig,
         0) )
  {
    int v7 = g_AnimManager++; /*0x71e7e6*/
    *((_DWORD *)g_AnimPoolCount + v7) = this; /*0x71e7f5*/
  }
  this->TActionClass_field_34 = 0; /*0x71e7f8*/
  return this; /*0x71e7fd*/
}
}
} // namespace gamemd

// 0x50D290
namespace gamemd {
int TActionClass::executeAttackAction(int a2)
{
{
    int i;
    int *v4;
    int result;
    for ( i = *(int *)(a2 + 120) - 1; i >= 0; v4[179] = this )
  {
    v4 = *(int **)(*(int *)(a2 + 108) + 4 * i);
    result = (*(int (__thiscall **)(int *, void *, int))(*v4 + 980))(v4, this, 0);
    --i;
    v4[184] = a2;
  }
    return result;
}
}
} // namespace gamemd

// 0x6DD2C0
namespace gamemd {
int TActionClass::ExecuteAction(int a2, int a3)
{
    TActionClass* v3;
    v3 = this->NextAction;
    if ( v3 == (TActionClass*)a2 )
        this->NextAction = v3->NextAction;
    if ( this->TeamType == (TeamTypeClass*)a2 )
        this->TeamType = (TeamTypeClass*)0;
    if ( this->TriggerType == (TriggerTypeClass*)a2 )
        this->TriggerType = (TriggerTypeClass*)0;
    if ( this->TagType == (TagTypeClass*)a2 )
        this->TagType = (TagTypeClass*)0;
    return 0;
}
} // namespace gamemd

// 0x6E0AA0
namespace gamemd {
char TActionClass::executeEnterAction(int a2, int _10, unsigned int * a3, IUnknown * aP4)
{
{
    void *v5;
    int Field11;
    int v7;
    char v9;
    int i;
    int v11;
    int *v12;
    v5 = (void *)this->Value;
    if ( !a3 )
    return 0;
    if ( v5 == (void *)8997 )
  {
    Field11 = Property::GetField11(a3);
  }
    else
  {
    if ( v5 == (void *)-1 )
    return 0;
    if ( BuildingType::IsSpecialType(v5) )
    Field11 = BuildingType::FindOwnerHouse(v5);
    else
    Field11 = HouseClass::FindOwner(v5);
  }
    v7 = Field11;
    if ( !Field11 )
    return 0;
    v9 = 0;
    for ( i = 0; i < *(int *)&g_NetworkPlayerBuffer[5708]; ++i )
  {
    v11 = *(int *)(*(int *)&g_NetworkPlayerBuffer[5696] + 4 * i);
    if ( *(char *)(v11 + 144) )
    {
    if ( *(char *)(v11 + 116) )
      {
    if ( !*(char *)(v11 + 129) )
        {
    v12 = *(int **)(v11 + 52);
    if ( v12 )
          {
    if ( LinkedList::Contains(v12, (IUnknown *)a3) )
            {
    (*(void (__thiscall **)(int, int, int))(*(int *)(v11) + 980))(v11, v7, 0);
    v9 = 1;
            }
          }
        }
      }
    }
  }
    return v9;
}
}
} // namespace gamemd

// 0x6E0CA0
namespace gamemd {
char TActionClass::executeCaptureAction(void * a1, int _C, unsigned int * a3, IUnknown * aP4)
{
{
    void *v5;
    int Field11;
    v5 = (void *)this->Value;
    if ( !a3 )
    return 0;
    if ( v5 == (void *)8997 )
  {
    Field11 = Property::GetField11(a3);
  }
    else
  {
    if ( v5 == (void *)-1 )
    return 0;
    if ( BuildingType::IsSpecialType(v5) )
    Field11 = BuildingType::FindOwnerHouse(v5);
    else
    Field11 = HouseClass::FindOwner(v5);
  }
    if ( !Field11 )
    return 0;
    TActionClass::executeAttackAction(a1, Field11);
    return 1;
}
}
} // namespace gamemd

// 0x6E0D00
namespace gamemd {
char TActionClass::executeSabotageAction(unsigned int * a1, int _C, unsigned int * a3, IUnknown * aP4)
{
{
    void *v5;
    int Field11;
    v5 = (void *)this->Value;
    if ( !a3 )
    return 0;
    if ( v5 == (void *)8997 )
  {
    Field11 = Property::GetField11(a3);
  }
    else
  {
    if ( v5 == (void *)-1 )
    return 0;
    if ( BuildingType::IsSpecialType(v5) )
    Field11 = BuildingType::FindOwnerHouse(v5);
    else
    Field11 = HouseClass::FindOwner(v5);
  }
    if ( !Field11 )
    return 0;
    TActionClass::executeMoveAction(a1, Field11);
    return 1;
}
}
} // namespace gamemd

// 0x6E0FE0
namespace gamemd {
char TActionClass::RevealWaypointArea(int a2, int a3, int a4, IUnknown * aP4)
{
{
    int v5;
    int v6;
    int v8;
    int v9;
    int v10;
    short v11[4];
    if ( HouseClass_Player->__pad_220[32] )
    return 1;
    *(int *)v11 = *ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v8, this->Value);
    if ( (*((int *)CellCoord::To_CellObj(&DataGlobal_87F7E8, v11) + 80) & 0x100) != 0 || (*((int *)CellCoord::To_CellObj(&DataGlobal_87F7E8, v11) + 80) & 0x400) != 0 )
  {
    v5 = 4;
  }
    else
  {
    v5 = 0;
  }
    v6 = v5 + *((char *)CellCoord::To_CellObj(&DataGlobal_87F7E8, v11) + 283);
    v10 = v6 * *(int *)&g_OverlayTypeConfig[28392];
    v9 = ((short)(v11[1] - v6 / 2) << 8) + 128;
    v8 = ((short)(v11[0] - v6 / 2) << 8) + 128;
    MapClass::RevealArea1( (int *)&DataGlobal_87F7E8, &v8, *(int *)(*(int *)&DataGlobal_87F8E4[30972] + 1580), (HouseClass *)HouseClass_Player, 0, 0, 0, 1, 0);
    v8 = ((short)(v11[0] - v6 / 2) << 8) + 128;
    v10 = v6 * *(int *)&g_OverlayTypeConfig[28392];
    v9 = ((short)(v11[1] - v6 / 2) << 8) + 128;
    MapClass::RevealArea1( (int *)&DataGlobal_87F7E8, &v8, *(int *)(*(int *)&DataGlobal_87F8E4[30972] + 1580), (HouseClass *)HouseClass_Player, 0, 0, 0, 1, 1);
    return 1;
}
}
} // namespace gamemd

// 0x6E11C0
namespace gamemd {
char TActionClass::RevealTileTypeAtWaypoint(int a2, int a3, int a4, IUnknown * aP4)
{
{
    IUnknown *Waypoint_Location;
    int TileIndex;
    IUnknown *v7;
    MouseClass *v8;
    short v9;
    int v10;
    short v11;
    short v12;
    int v14;
    int v15[3];
    int v16[3];
    if ( HouseClass_Player->__pad_220[32] )
    return 1;
    Waypoint_Location = (IUnknown *)ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v14, this->Value);
    TileIndex = MapClass::GetTileIndex(&DataGlobal_87F7E8, Waypoint_Location, (IUnknown *)1, 0);
    TActionClass::executeSellAction(&DataGlobal_87F7E8);
    v7 = (IUnknown *)MapClass::SpiralSearch(&DataGlobal_87F7E8);
    if ( !v7 )
    return 1;
    do
  {
    v8 = (MouseClass *)&v7->field_24;
    if ( MapClass::GetTileIndex(&DataGlobal_87F7E8, (IUnknown *)&v7->field_24, (IUnknown *)1, 0) == TileIndex )
    {
    v9 = HIWORD(v7->field_24);
    v10 = SHIBYTE(v7->field_118) / 2;
    v15[0] = ((short)(LOWORD(v8->field_0) - v10 / 2) << 8) + 128;
    v15[1] = ((short)(v9 - v10 / 2) << 8) + 128;
    v15[2] = v10 * *(int *)&g_OverlayTypeConfig[28392];
    MapClass::RevealArea1((int *)&DataGlobal_87F7E8, v15, 2, (HouseClass *)HouseClass_Player, 0, 0, 0, 1, 0);
    v11 = v8->field_0;
    v12 = HIWORD(v8->field_0) - v10 / 2;
    v16[2] = v10 * *(int *)&g_OverlayTypeConfig[28392];
    v16[0] = ((short)(v11 - v10 / 2) << 8) + 128;
    v16[1] = (v12 << 8) + 128;
    MapClass::RevealArea1((int *)&DataGlobal_87F7E8, v16, 2, (HouseClass *)HouseClass_Player, 0, 0, 0, 1, 1);
    }
    v7 = (IUnknown *)MapClass::SpiralSearch(&DataGlobal_87F7E8);
  }
    while ( v7 );
    return 1;
}
}
} // namespace gamemd

// 0x6E1780
namespace gamemd {
char TActionClass::PlayAudioAtRandomWP(int a2, int a3, int a4, int a5)
{
    int v5;
    int v7;
    int *v8;
    short *v9;
    int v10;
    int v11;
    int v13[3];
    int v14;
    int v15[100];

    v5 = 0;
    v7 = 0;
    v8 = v15;
    do
    {
        if ( ScenarioClass::Is_Waypoint_Valid((char *)DataGlobal_A8B230, v7) )
        {
            ++v5;
            *v8++ = *ScenarioClass::Get_Waypoint_Location((char *)DataGlobal_A8B230, &v14, v7);
            if ( v5 == 400 )
                break;
        }
        ++v7;
    }
    while ( v7 < 702 );
    v9 = (short *)&v15[Random::Range((_DWORD *)DataGlobal_A8B230 + 134, 0, v5 - 1)];
    v10 = (v9[1] << 8) + 128;
    v13[0] = (*v9 << 8) + 128;
    v11 = this->Value;
    v13[1] = v10;
    v13[2] = 0;
    PlayAudioAt2(v11, v13, 0);
    return 1;
}
} // namespace gamemd

// 0x6E1980
namespace gamemd {
char TActionClass::executeGuardAreaAction(int a2, int a3, int a4, IUnknown * aP4)
{
{
    IUnknown **WorldCoords;
    BuildingTypeClass *v6;
    int *Infantry;
    short v9[2];
    IUnknown *v10;
    IUnknown *v11;
    IUnknown *v12;
    int v13[3];
    WorldCoords = (IUnknown **)Cell::GetWorldCoords((short *)g_ScenarioClass_Instance, v13, this->Waypoint);
    v10 = *WorldCoords;
    v11 = WorldCoords[1];
    v12 = WorldCoords[2];
    v9[0] = (int)v10 / 256;
    v9[1] = (int)v11 / 256;
    if ( v9[0] == *(short *)&g_OverlayTypeConfig[28296] && (unsigned short)((int)v11 / 256) == *(short *)&g_OverlayTypeConfig[28298] || (v6 = (BuildingTypeClass *)CellCoord::To_CellObj(&DataGlobal_87F7E8, v9), (Infantry = Cell::IsBridge(v6)) == 0) && (Infantry = CellClass::FindInfantry(v6, 0)) == 0 )
  {
    globalHelper_050F40(&v10, 1);
    return 1;
  }
    else
  {
    ObjectClass::CheckFlagD0(Infantry, (IUnknown *)0xFFFFFFFF);
    return 1;
  }
}
}
} // namespace gamemd

// 0x6E1A40
namespace gamemd {
char TActionClass::executePatrolAction(void * a1, int a3, int a4, IUnknown * aP4)
{
{
    int *Waypoint_Location;
    int *v7;
    v7 = this;
    Waypoint_Location = ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v7, this->Waypoint);
    SelectSimilarBuildingTypes(a1, *Waypoint_Location);
    return 1;
}
}
} // namespace gamemd

// 0x6E1A70
namespace gamemd {
char TActionClass::executeScatterAction(int a2, int a3, int a4, IUnknown * aP4)
{
{
    int v5;
    int v6;
    int v8[3];
    short v9[4];
    if ( HouseClass_Player->__pad_220[32] )
    return 1;
    *(int *)v9 = *ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, v8, this->Value);
    if ( (*((int *)CellCoord::To_CellObj(&DataGlobal_87F7E8, v9) + 80) & 0x100) != 0 || (*((int *)CellCoord::To_CellObj(&DataGlobal_87F7E8, v9) + 80) & 0x400) != 0 )
  {
    v5 = 4;
  }
    else
  {
    v5 = 0;
  }
    v6 = v5 + *((char *)CellCoord::To_CellObj(&DataGlobal_87F7E8, v9) + 283);
    v8[2] = v6 * *(int *)&g_OverlayTypeConfig[28392];
    v8[1] = ((short)(v9[1] - v6 / 2) << 8) + 128;
    v8[0] = ((short)(v9[0] - v6 / 2) << 8) + 128;
    TActionClass_Helper(v8, *(int *)(*(int *)&DataGlobal_87F8E4[30972] + 1580));
    CellSystem::UpdateVisibility(&DataGlobal_87F7E8);
    return 1;
}
}
} // namespace gamemd

// 0x6E21E0
namespace gamemd {
char TActionClass::executeFollowAction(int a2, int a3, int a4, IUnknown * aP4)
{
{
    int *v5;
    int i;
    int j;
    v5 = this + 13;
    DataGlobal_87F8E4.field_0 = *v5;
    DataGlobal_87F8E4.field_4 = (void *)v5[1];
    DataGlobal_87F8E4.field_8 = (void *)v5[2];
    DataGlobal_87F8E4.field_C = (void *)v5[3];
    RadarClass::Process(&DataGlobal_87F7E8);
    LayerClass::CellIteratorReset(&DataGlobal_87F7E8);
    for ( i = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); i; i = LayerClass::CellIteratorNext(&DataGlobal_87F7E8) )
    House::AnnounceUpgrade(i, (IUnknown *)0xFFFFFFFF);
    Terrain::ConnectivityGraph(&DataGlobal_87F7E8);
    MapClass::BuildSubzones(&DataGlobal_87F7E8);
    FogOfWar::Render((int **)&DataGlobal_87F7E8);
    for ( j = *(int *)&g_NetworkPlayerBuffer[5396] - 1; j >= 0; --j )
    (*(void (__thiscall **)(int, int))(**(int **)(*(int *)&g_NetworkPlayerBuffer[5384] + 4 * j) + 1184))( *(int *)(*(int *)&g_NetworkPlayerBuffer[5384] + 4 * j), 1);
    return 1;
}
}
} // namespace gamemd

// 0x6E2520
namespace gamemd {
char TActionClass::executeLoadAction(int a2, int a3, int a4, IUnknown * aP4)
{
{
    AnimClass *v6;
    IUnknown *v8;
    VoxelAnimClass *v9;
    int v10[2];
    int GroundHeight;
    v8 = (IUnknown *)*ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v9, this->Waypoint);
    GroundHeight = 0;
    v10[1] = (SHIWORD(v8) << 8) + 128;
    v10[0] = ((short)v8 << 8) + 128;
    GroundHeight = Cell::GetGroundHeight(v10);
    if ( (*((int *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (short *)&v8) + 80) & 0x100) != 0 || (*((int *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (short *)&v8) + 80) & 0x400) != 0 )
  {
    GroundHeight += *(int *)&g_OverlayTypeConfig[28380];
  }
    v6 = (AnimClass *)__2_YAPAXI_Z(0x148u);
    if ( v6 )
    DamageAnimClass::Constructor( v6, *(int *)(*(int *)&g_NetworkPlayerBuffer[5360] + 4 *(void**)this->Value), v10, 0);
    return 1;
}
}
} // namespace gamemd

// 0x6E2AF0
namespace gamemd {
char TActionClass::executeUnloadAction(int a2, int a3, int a4, IUnknown * aP4)
{
{
    int v6;
    int *v7;
    char *v8;
    int difficulty2;
    if ( !this->TriggerType )
    return 1;
    v6 = 0;
    if ( *(int *)&g_NetworkPlayerBuffer[5308] <= 0 )
    return 1;
    do
  {
    v7 = *(int **)(*(int *)g_NetworkPlayerBuffer[5296] + 4 * v6);
    v8 = (char *)v7[9];
    if ( v8 == (char *)this->TriggerType )
    {
    difficulty2 = g_ScenarioClass_Instance->difficulty2;
    if ( (difficulty2 || v8[156]) && (difficulty2 != 1 || v8[157]) && (difficulty2 != 2 || v8[158]) )
    TActionClass::executeAirstrikeAction(v7);
    }
    ++v6;
  }
    while ( v6 < *(int *)&g_NetworkPlayerBuffer[5308] );
    return 1;
}
}
} // namespace gamemd

// 0x6E2E60
namespace gamemd {
char TActionClass::executeSelfDestructAction(int a2, int a3, int a4, IUnknown * aP4)
{
{
    UpdateSurfaceAnimations( 10 *(void**)this->Value, 10 * g_ScenarioClass_Instance->nukeLevel, 10 * g_ScenarioClass_Instance->nukeAmbientChangeRate, 0);
    g_ScenarioClass_Instance->nukeGround = this->Value;
    return 1;
}
}
} // namespace gamemd

// 0x6E2EB0
namespace gamemd {
char TActionClass::executeExplodeAction(int a2, int a3, int a4, IUnknown * aP4)
{
{
    UpdateSurfaceAnimations( 10 * g_ScenarioClass_Instance->nukeGround, 10 *(void**)this->Value, 10 * g_ScenarioClass_Instance->nukeAmbientChangeRate, 0);
    g_ScenarioClass_Instance->nukeLevel = this->Value;
    return 1;
}
}
} // namespace gamemd

// 0x6E2F00
namespace gamemd {
char TActionClass::executeChronoshiftAction(int a2, int a3, int a4, IUnknown * aP4)
{
{
    UpdateSurfaceAnimations(10 * g_ScenarioClass_Instance->nukeGround, 10 * g_ScenarioClass_Instance->nukeLevel, 10 *(void**)this->Value, 0);
    g_ScenarioClass_Instance->nukeAmbientChangeRate = this->Value;
    return 1;
}
}
} // namespace gamemd

// 0x6E3180
namespace gamemd {
char TActionClass::executePlaceBeaconAction(int a2, int _C, unsigned int * a3, IUnknown * aP4)
{
{
    void *v5;
    void *Field11;
    v5 = (void *)this->Value;
    if ( !a3 )
    return 0;
    if ( v5 == (void *)8997 )
  {
    Field11 = (void *)Property::GetField11(a3);
  }
    else
  {
    if ( v5 == (void *)-1 )
    return 0;
    if ( BuildingType::IsSpecialType(v5) )
    Field11 = (void *)BuildingType::FindOwnerHouse(v5);
    else
    Field11 = (void *)HouseClass::FindOwner(v5);
  }
    if ( !Field11 )
    return 0;
    HouseClass::ClearLowPowerTargets(Field11);
    return 1;
}
}
} // namespace gamemd

// 0x6E31E0
namespace gamemd {
char TActionClass::executeJumpjetAction(int a2, int _C, unsigned int * a3, IUnknown * aP4)
{
{
    void *v5;
    void *Field11;
    v5 = (void *)this->Value;
    if ( !a3 )
    return 0;
    if ( v5 == (void *)8997 )
  {
    Field11 = (void *)Property::GetField11(a3);
  }
    else
  {
    if ( v5 == (void *)-1 )
    return 0;
    if ( BuildingType::IsSpecialType(v5) )
    Field11 = (void *)BuildingType::FindOwnerHouse(v5);
    else
    Field11 = (void *)HouseClass::FindOwner(v5);
  }
    if ( !Field11 )
    return 0;
    HouseClass::DestroyAllBuildings(Field11);
    return 1;
}
}
} // namespace gamemd

// 0x6E3240
namespace gamemd {
char TActionClass::executeOpenGateAction(int a2, int _C, unsigned int * a3, IUnknown * aP4)
{
{
    void *v5;
    void *Field11;
    v5 = (void *)this->Value;
    if ( !a3 )
    return 0;
    if ( v5 == (void *)8997 )
  {
    Field11 = (void *)Property::GetField11(a3);
  }
    else
  {
    if ( v5 == (void *)-1 )
    return 0;
    if ( BuildingType::IsSpecialType(v5) )
    Field11 = (void *)BuildingType::FindOwnerHouse(v5);
    else
    Field11 = (void *)HouseClass::FindOwner(v5);
  }
    if ( !Field11 )
    return 0;
    HouseClass::DestroyAllNonBuildingsNonNaval(Field11);
    return 1;
}
}
} // namespace gamemd

// 0x6E32A0
namespace gamemd {
char TActionClass::executeCloseGateAction(int a2, int _C, unsigned int * a3, IUnknown * aP4)
{
{
    void *v5;
    void *Field11;
    v5 = (void *)this->Value;
    if ( !a3 )
    return 0;
    if ( v5 == (void *)8997 )
  {
    Field11 = (void *)Property::GetField11(a3);
  }
    else
  {
    if ( v5 == (void *)-1 )
    return 0;
    if ( BuildingType::IsSpecialType(v5) )
    Field11 = (void *)BuildingType::FindOwnerHouse(v5);
    else
    Field11 = (void *)HouseClass::FindOwner(v5);
  }
    if ( !Field11 )
    return 0;
    HouseClass::DestroyAllNonBuildingsNaval(Field11);
    return 1;
}
}
} // namespace gamemd

// 0x6E3410
namespace gamemd {
char TActionClass::CreateNukeEffect(AbstractClass * aP1, int a3, int a4, AbstractClass * aP4)
{
{
    int v5;
    BuildingTypeClass *v6;
    TechnoClass *v7;
    BulletClass *UIObjectCOM;
    double v9;
    double v10;
    int v11;
    TechnoClass *v13;
    InfantryClass *v14;
    int v15;
    double v16;
    double v17;
    double v18;
    int v19;
    int v20;
    int GroundHeight;
    int v22[3];
    __int64 v23[3];
    v15 = *ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v16, this->Waypoint);
    GroundHeight = 0;
    v20 = (SHIWORD(v15) << 8) + 128;
    v19 = ((short)v15 << 8) + 128;
    GroundHeight = Cell::GetGroundHeight(&v19);
    if ( (*((int *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (short *)&v15) + 80) & 0x100) != 0 )
    GroundHeight += *(int *)&g_OverlayTypeConfig[28380];
    v5 = *(int *)(*(int *)&DataGlobal_87F8E4[31880] + 4 * SuperWeaponClass::FindByName(g_INI_Key_NukePayload));
    v6 = *(BuildingTypeClass **)(v5 + 160);
    v14 = *(InfantryClass **)(v5 + 172);
    v13 = *(TechnoClass **)(v5 + 164);
    v7 = (TechnoClass *)Coord::To_Cell(&DataGlobal_87F7E8, (IUnknown *)&v19);
    UIObjectCOM = (BulletClass *)CreateUIObjectCOM((AbstractClass *)v6, v7, 0, v13, v14, 50, 0);
    Function::Method_46B260(UIObjectCOM, v5);
    v22[0] = v19;
    v22[1] = v20;
    v22[2] = GroundHeight + 20000;
    if ( !UIObjectCOM )
    return 0;
    v16 = Math::SinCos(1.570748388432313);
    v16 = Math::ArcTan2(1.570748388432313) * v16 * -100.0;
    v17 = Math::ArcTan2(1.570748388432313);
    v9 = Math::ArcTan2(1.570748388432313);
    v18 = v16;
    *(double *)&v23[1] = v16;
    v17 = v9 * v17 * -100.0;
    *(double *)v23 = v17;
    v10 = Math::SinCos(1.570748388432313);
    v11 = *(int *)UIObjectCOM->__pad_0;
    *(double *)&v23[2] = v10 * -100.0;
    (*(void (__thiscall **)(BulletClass *, int *, __int64 *))(v11 + 496))(UIObjectCOM, v22, v23);
    return 1;
}
}
} // namespace gamemd

// 0x6E3B40
namespace gamemd {
char TActionClass::executeLightningAction(int a2, int a3, int a4, IUnknown * aP4)
{
{
    if ( !a2 )
    return 0;
    HouseClass::CreateRadarOutage(a2, this->Value);
    return 1;
}
}
} // namespace gamemd

// 0x6E3D70
namespace gamemd {
int TActionClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 1326367634;
  a2[1] = 298977877;
  a2[2] = 1610655660;
  a2[3] = -1252326136;
  return 0;
}
} // namespace gamemd

// 0x6E3DB0
namespace gamemd {
int TActionClass::SaveLoad_Prefix(AbstractClass * aP0, int aP1)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix_0(aP0, (AbstractClass *)aP1);
    if ( result >= 0 )
  {
    if ( aP0 )
    {
    AbstractClass::InitVtables(aP0, (IUnknown *)&aP1);
    *(int *)aP0->__pad_0 = (unsigned int)vt_TActionClass;
    *(int *)&aP0->__pad_0[4] = (unsigned int)vt_TActionClass;
    *(int *)&aP0->__pad_0[8] = (unsigned int)vt_TActionClass;
    *(int *)&aP0->__pad_0[12] = &vt_TActionClass;
    }
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488[27784], (MouseClass *)&aP0[1].__pad_0[4]);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488[27784], (MouseClass *)&aP0[1].__pad_0[12]);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488[27784], (MouseClass *)&aP0[2].__pad_0[4]);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488[27784], (MouseClass *)&aP0[2].__pad_0[8]);
    return 0;
  }
    return result;
}
}
} // namespace gamemd

// 0x6E3E30
namespace gamemd {
int TActionClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
    if ( result >= 0 )
    return 0;
    return result;
}
}
} // namespace gamemd

// 0x6E3E50
namespace gamemd {
int TActionClass::Validate(int a2)
{
{
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    AbstractClass::ProcessPower((AbstractClass *)this);
    v3 = this->TActionClass_field_28;
    if ( v3 )
  {
    v4 = (*(int (__stdcall **)(int))(*(int *)(v3 + 4) + 16))(v3 + 4);
    Power::TimerProcess(v4);
  }
    Power::TimerProcess(this->TActionClass_field_2C);
    v5 = this->TActionClass_field_30;
    if ( v5 )
  {
    v6 = (*(int (__stdcall **)(int))(*(int *)(v5 + 4) + 16))(v5 + 4);
    Power::TimerProcess(v6);
  }
    v7 = this->TActionClass_field_4C;
    if ( v7 )
  {
    v8 = (*(int (__stdcall **)(int))(*(int *)(v7 + 4) + 16))(v7 + 4);
    Power::TimerProcess(v8);
  }
    v9 = this->TActionClass_field_50;
    if ( v9 )
  {
    v10 = (*(int (__stdcall **)(int))(*(int *)(v9 + 4) + 16))(v9 + 4);
    Power::TimerProcess(v10);
  }
    return Power::TimerProcess(this->Value);
}
}
} // namespace gamemd

// 0x6E4100
namespace gamemd {
char TActionClass::executePsychicDominatorAction(int a2, int a3, int a4, IUnknown * aP4)
{
{
    unsigned int v5;
    v5 = this->Value;
    if ( v5 >= 4 || !PlayerClass::HasPlayers((int *)(3988 * v5 + 8916268)) )
    return 0;
    SidebarClass::SwitchTab((int)&DataGlobal_87F7E8, v5);
    return 1;
}
}
} // namespace gamemd

// 0x6E4200
namespace gamemd {
char TActionClass::executeForceShieldAction(int a2, int a3, int a4, IUnknown * aP4)
{
{
    int v5;
    void *v7;
    int *v8;
    int IndexByName;
    int v10;
    int v11;
    int v12;
    IUnknown *v14;
    int v15[3];
    char v16[12];
    v5 = a2;
    if ( !a2 )
    return 0;
    a2 = *ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v14, this->Waypoint);
    v7 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (short *)&a2);
    v8 = (int *)(*(int (__thiscall **)(void *, char *))(*(int *)(v7) + 72))(v7, v16);
    v15[0] = *v8;
    v15[1] = v8[1];
    v15[2] = v8[2];
    IndexByName = BuildingTypeClass::FindIndexByName(this + 21);
    if ( IndexByName < 0 )
    return 0;
    if ( IndexByName > (int)g_TriggerClassCount )
    return 0;
    v10 = *((int *)(g_TriggerTypeCount) + IndexByName);
    if ( !v10 )
    return 0;
    v11 = (*(int (__thiscall **)(int, int))(*(int *)(v10) + 140))(v10, v5);
    v12 = v11;
    if ( !v11 )
    return 0;
    if ( !(*(unsigned char (__thiscall **)(int, int *, int))(*(int *)(v11) + 1168))(v11, v15, 0) )
  {
    (*(void (__thiscall **)(int))(*(int *)(v12) + 248))(v12);
    return 0;
  }
    (*(void (__thiscall **)(int, int))(*(int *)(v12) + 1244))(v12, 0);
    return 1;
}
}
} // namespace gamemd

// 0x6E4360
namespace gamemd {
char TActionClass::executeSpyPlaneAction(int a2, int a3, int a4, IUnknown * aP4)
{
{
    int v5;
    if ( !a2 )
    return 0;
    v5 = this->Value;
    if ( v5 < 0 || v5 > *(int *)(a2 + 612) )
    return 0;
    SuperClass::ResetRechargeTime(*(int **)(*(int *)(a2 + 600) + 4 * v5));
    return 1;
}
}
} // namespace gamemd

// 0x6E43A0
namespace gamemd {
char TActionClass::executeChronoSphereAction(int a2, int a3, int a4, IUnknown * aP4)
{
{
    int v5;
    if ( !a2 )
    return 0;
    v5 = this->Value;
    if ( v5 < 0 || v5 > *(int *)(a2 + 612) )
    return 0;
    SuperClass::Reset(*(int *)(*(int *)(a2 + 600) + 4 * v5));
    return 1;
}
}
} // namespace gamemd

// 0x6E43E0
namespace gamemd {
char TActionClass::executeWeatherStormAction(unsigned int * a1, int a3, int a4, IUnknown * aP4)
{
{
    int *v5;
    int *v7;
    v5 = a1;
    if ( !a1 )
    return 0;
    v7 = (int *)*ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &a1, this->Waypoint);
    a1 = v7;
    if ( v7 == *(int **)&g_OverlayTypeConfig[28296] )
    return 0;
    TActionClass::executeGuardAction(v5, (int)v7);
    return 1;
}
}
} // namespace gamemd

// 0x6E4460
namespace gamemd {
char TActionClass::executeDominatorAction(unsigned int * a1, int a3, int a4, IUnknown * aP4)
{
{
    int *v5;
    int *v7;
    v5 = a1;
    if ( !a1 )
    return 0;
    v7 = (int *)*ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &a1, this->Waypoint);
    a1 = v7;
    if ( v7 == *(int **)&g_OverlayTypeConfig[28296] )
    return 0;
    TActionClass::executeHuntAction(v5, (int)v7);
    return 1;
}
}
} // namespace gamemd

// 0x6E44E0
namespace gamemd {
char TActionClass::executeRevealAction(unsigned int * a1, int a3, int a4, IUnknown * aP4)
{
{
    int *v5;
    int *v7;
    v5 = a1;
    if ( !a1 )
    return 0;
    v7 = (int *)*ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &a1, this->Waypoint);
    a1 = v7;
    if ( v7 == *(int **)&g_OverlayTypeConfig[28296] )
    return 0;
    TActionClass::executeDeployAction(v5, (int)v7);
    return 1;
}
}
} // namespace gamemd

// 0x6E4560
namespace gamemd {
char TActionClass::executeEMPulseAction(int a2, int a3, int a4, IUnknown * aP4)
{
{
    int i;
    int v7;
    if ( !a2 )
    return 0;
    for ( i = *(int *)(a2 + 120) - 1; i >= 0; --i )
  {
    v7 = *(int *)(*(int *)(a2 + 108) + 4 * i);
    if ( !strcmp((const char *)(*(int *)(v7 + 1312) + 36), (const char *)(this + 84)) )
    *(int *)(v7 + 240) = this->Value;
  }
    return 1;
}
}
} // namespace gamemd

// 0x6E4630
namespace gamemd {
int TActionClass::StubReturn148()
{
return 148;
}
} // namespace gamemd

// 0x6E4640
namespace gamemd {
int TActionClass::StubReturn47()
{
return 47;
}
} // namespace gamemd

// 0x6E4650
namespace gamemd {
int TActionClass::Stub()
{
{
    return this->idxArray;
}
}
} // namespace gamemd

// 0x7268F0
namespace gamemd {
int TActionClass::executeAirstrikeAction()
{
{
    this->Waypoint = 1;
    return BuildingClass::ProcessUpgradeEffects(this);
}
}
} // namespace gamemd

// 0x726900
namespace gamemd {
void TActionClass::executeDetonateAction()
{
{
    this->Waypoint = 0;
}
}
} // namespace gamemd
