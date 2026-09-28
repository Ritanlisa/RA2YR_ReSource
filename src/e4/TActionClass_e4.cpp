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
#include "e4/classes/TActionClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/TClassFactory_MechLocomotionClass_e4.hpp"
#include "e4/classes/TEventClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/CampaignClass_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/TClassFactory_CampaignClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/TabClass_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"

// 0x4FCDC0
namespace gamemd {
int TActionClass::executeBuildAction()
{
  char result; // al

  result = this->u32_1F8; /*0x4fcdc0*/
  if ( !result ) /*0x4fcdc8*/
  {
    result = this->u32_1F7; /*0x4fcdca*/
    if ( !result ) /*0x4fcdd2*/
      return HouseClass::CheckWinCondition(0); /*0x4fcdd6*/
  }
  if ( this->u32_298 == -1 ) /*0x4fcde3*/
  {
    result = stru_A8EB00.?[416]; /*0x4fcde5*/
    this->u32_298 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4fcdea*/
  }
  return result; /*0x4fcddb*/
}
}
// 0x50D2D0
namespace gamemd {
int TActionClass::executeMoveAction(int a2)
{
  int i; // ebx
  int result; // eax
  _DWORD *v5; // esi

  for ( i = *(_DWORD *)&this->pad_6E[10] - 1; i >= 0; --i ) /*0x50d2d8*/
  {
    result = *(_DWORD *)&this->pad_55[23]; /*0x50d2e0*/
    v5 = *(_DWORD **)(result + 4 * i); /*0x50d2e3*/
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
// 0x50DA00
namespace gamemd {
int TActionClass::executeGuardAction(int a2)
{
  this->u32_54F0 = a2; /*0x50da04*/
  return a2; /*0x50da0a*/
}
}
// 0x50DA20
namespace gamemd {
int TActionClass::executeHuntAction(int a2)
{
  this->u32_54F4 = a2; /*0x50da24*/
  this->u32_54FC = *(_DWORD *)&stru_A8EB00.?[416]; /*0x50da30*/
  return a2; /*0x50da36*/
}
}
// 0x50DFE0
namespace gamemd {
int TActionClass::executeDeployAction(int a2)
{
  this->u32_5494 = a2; /*0x50dfe4*/
  return a2; /*0x50dfea*/
}
}
// 0x567F70
namespace gamemd {
void sub_567F70(int * a1, int a2)
{
  int v2; // esi
  int v3; // edi
  int v4; // ebx
  int v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // ebx
  int result; // eax
  int v12; // esi
  int v13; // eax
  int v14; // ebp
  unsigned int v15; // eax
  _DWORD *v16; // ecx
  _DWORD *v17; // ecx
  _DWORD *v18; // ecx
  _DWORD *v19; // eax
  __int16 v20; // [esp+14h] [ebp-8h]
  __int16 v21; // [esp+16h] [ebp-6h]
  int v22; // [esp+20h] [ebp+4h]

  v2 = *a1; /*0x567f7a*/
  v3 = a1[1]; /*0x567f7c*/
  v4 = a1[2]; /*0x567f7f*/
  v5 = ZCoordToScreenY(v4); /*0x567f84*/
  v6 = ((((unsigned int)(((unsigned __int64)(2004318071LL * v5) >> 32) - v5) >> 31) /*0x567fa3*/
       + ((int)(((unsigned __int64)(2004318071LL * v5) >> 32) - v5) >> 4)) << 8)
     + v2;
  v7 = ZCoordToScreenY(v4); /*0x567fa5*/
  v8 = a2; /*0x567fb5*/
  v20 = v6 / 256; /*0x567fd6*/
  v9 = -2 - a2; /*0x567fee*/
  v21 = (int)(((((unsigned int)(((unsigned __int64)(2004318071LL * v7) >> 32) - v7) >> 31) /*0x567ff0*/
              + ((int)(((unsigned __int64)(2004318071LL * v7) >> 32) - v7) >> 4)) << 8)
            + v3)
      / 256;
  v10 = -2 - a2; /*0x567ff5*/
  result = a2 + 2; /*0x567ff7*/
  if ( -2 - a2 < a2 + 2 ) /*0x568000*/
  {
    v12 = dword_87F924; /*0x568006*/
    do /*0x568130*/
    {
      if ( v9 < result ) /*0x56800f*/
      {
        v13 = v10 * v10; /*0x56801a*/
        v14 = (v8 + 1) * (v8 + 1); /*0x56801d*/
        while ( 1 ) /*0x56802a*/
        {
          if ( v13 + v9 * v9 < v14 ) /*0x568033*/
          {
            IDA_HIWORD(v22) = v9 + v21; /*0x568045*/
            IDA_LOWORD(v22) = v10 + v20; /*0x56804a*/
            v15 = ((__int16)(v9 + v21) << 9) + (__int16)(v10 + v20); /*0x56805c*/
            if ( v15 >= 0x40000 || (v16 = *(_DWORD **)(v12 + 4 * v15)) == 0 ) /*0x56806e*/
            {
              dword_ABDC74 = v22; /*0x568070*/
              v16 = unk_ABDC50; /*0x568076*/
            }
            if ( !v16[76] ) /*0x56807b*/
            {
              if ( v15 >= 0x40000 || (v17 = *(_DWORD **)(v12 + 4 * v15)) == 0 ) /*0x568098*/
              {
                dword_ABDC74 = v22; /*0x56809a*/
                v17 = unk_ABDC50; /*0x5680a0*/
              }
              v17[76] = 1; /*0x5680a7*/
              if ( v15 >= 0x40000 || (v18 = *(_DWORD **)(dword_87F924 + 4 * v15)) == 0 ) /*0x5680c5*/
              {
                dword_ABDC74 = v22; /*0x5680c7*/
                v18 = unk_ABDC50; /*0x5680cd*/
              }
              v18[75] &= ~8u; /*0x5680dd*/
              if ( v15 >= 0x40000 || (v19 = *(_DWORD **)(dword_87F924 + 4 * v15)) == 0 ) /*0x5680f7*/
              {
                dword_ABDC74 = v22; /*0x5680f9*/
                v19 = unk_ABDC50; /*0x5680ff*/
              }
              v19[75] &= ~0x10u; /*0x56810d*/
              v12 = dword_87F924; /*0x568113*/
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
// 0x577C90
namespace gamemd {
int TActionClass::executeRepairAction(int a2)
{
  int v4; // eax
  int i; // esi
  int v6; // eax

  a2 = a2; /*0x577c90*/
  if ( a2 ) /*0x577c99*/
    *(_BYTE *)(*((_DWORD *)stru_A80220.? + *(_DWORD *)(a2 + 48)) + 577) = 0; /*0x577ca7*/
  if ( (Object *)a2 != dword_A83D4C ) /*0x577cb4*/
  {
    if ( a2 ) /*0x577cb8*/
    goto LABEL_7; /*0x577cb8*/
  }
  if ( !a2 ) /*0x577cc2*/
  LABEL_7:
    Debug::Log(); /*0x577cc4*/
  HouseClass::ResetObjectOrders(0, 0); /*0x577cd1*/
  v4 = this->q03D; /*0x577ce0*/
  this->u32_10C = 1; /*0x577ce6*/
  this->TActionClass_field_44 = v4; /*0x577cf0*/
  this->q045 = v4 - 1; /*0x577cf9*/
  this->q046 = (v4 << 11) + this->q04F + 4; /*0x577d0e*/
  for (); i; i = LayerClass::CellIteratorNext((LayerClass *)this) ) /*0x577d1d*/
  {
    DisplayClass::AdvanceFrameCounter((DisplayClass *)i); /*0x577d21*/
    if ( *(int *)(i + 304) >= 0 ) /*0x577d2e*/
    {
      v6 = *(_DWORD *)(i + 320); /*0x577d36*/
      IDA_LOBYTE(v6) = v6 & 0xFC; /*0x577d3f*/
      *(_DWORD *)(i + 300) &= 0xFFFFFFE7; /*0x577d41*/
      *(_DWORD *)(i + 320) = v6; /*0x577d47*/
    }
  }
  Radar::UpdateReveal(0, 0); /*0x577d63*/
  dword_A83D4C->__pad_140[256] = 0; /*0x577d72*/
  FogOfWar::Render((FogOfWar *)&stru_87F5F0.__pad_58[416]); /*0x577d79*/
  return (*((int (__thiscall **)(TActionClass *, int))this->AbstractClass + 14))(this, 2); /*0x577d88*/
}
}
// 0x578850
namespace gamemd {
int TActionClass::executeSellAction()
{
  int result; // eax
  int v2; // edx

  result = this->TActionClass_field_40; /*0x578850*/
  v2 = this->u32_FC; /*0x578856*/
  this->u32_11C = v2 + result + 1; /*0x578861*/
  this->TActionClass_field_48 = result + this->q03D - v2; /*0x578871*/
  return result; /*0x578877*/
}
}
// 0x6AC5F0
namespace gamemd {
unsigned int * TActionClass::executeHarvestAction(int a2, MouseClass * aP2)
{
  _DWORD *result; // eax
  int v5; // esi
  int v7; // eax
  int v8; // edx
  int v9; // eax
  char *v10; // edx
  _DWORD *v11; // ecx

  result = (_DWORD *)dword_A8E358; /*0x6ac5f0*/
  v5 = 0; /*0x6ac5f9*/
  if ( dword_A8E358 <= 0 ) /*0x6ac601*/
  {
  LABEL_5:
    v5 = 0; /*0x6ac615*/
    if ( dword_A83CF0 <= 0 ) /*0x6ac61f*/
    {
  LABEL_9:
      v5 = 0; /*0x6ac632*/
      if ( dword_A8B228 <= 0 ) /*0x6ac63c*/
      {
  LABEL_13:
        v5 = 0; /*0x6ac64f*/
        if ( dword_A83C78 <= 0 ) /*0x6ac659*/
          return result; /*0x6ac659*/
        result = dword_A83C6C; /*0x6ac65f*/
        while ( a2 != *result ) /*0x6ac666*/
        {
          ++v5; /*0x6ac668*/
          ++result; /*0x6ac669*/
          if ( v5 >= dword_A83C78 ) /*0x6ac66e*/
            return result; /*0x6ac66e*/
        }
      }
      else
      {
        result = dword_A8B21C; /*0x6ac63e*/
        while ( a2 != *result ) /*0x6ac645*/
        {
          ++v5; /*0x6ac647*/
          ++result; /*0x6ac648*/
          if ( v5 >= dword_A8B228 ) /*0x6ac64d*/
            goto LABEL_13; /*0x6ac64d*/
        }
      }
    }
    else
    {
      result = dword_A83CE4; /*0x6ac621*/
      while ( a2 != *result ) /*0x6ac628*/
      {
        ++v5; /*0x6ac62a*/
        ++result; /*0x6ac62b*/
        if ( v5 >= dword_A83CF0 ) /*0x6ac630*/
          goto LABEL_9; /*0x6ac630*/
      }
    }
  }
  else
  {
    dword_A8E34C = dword_A8E34C; /*0x6ac603*/
    while ( *dword_A8E34C != a2 ) /*0x6ac60b*/
    {
      ++v5; /*0x6ac60d*/
      ++dword_A8E34C; /*0x6ac60e*/
      if ( v5 >= dword_A8E358 ) /*0x6ac613*/
        goto LABEL_5; /*0x6ac613*/
    }
  }
  result = (_DWORD *)(*(int (**)(void))(*(_DWORD *)a2 + 44))(); /*0x6ac677*/
  if ( result == (_DWORD *)15 || result == (_DWORD *)16 ) /*0x6ac682*/
  {
    v7 = 2; /*0x6ac6d4*/
  }
  else if ( result == (_DWORD *)1 || result == (_DWORD *)40 || result == (_DWORD *)2 || result == (_DWORD *)3 ) /*0x6ac696*/
  {
    v7 = 3; /*0x6ac6cd*/
  }
  else if ( result == (_DWORD *)6 || result == (_DWORD *)7 ) /*0x6ac6a0*/
  {
    v7 = GetHouseTechLevel((int)result, v5) == 5; /*0x6ac6c9*/
  }
  else
  {
    if ( result != (_DWORD *)57 && result != (_DWORD *)32 && result != (_DWORD *)31 ) /*0x6ac6af*/
      return result; /*0x6ac6af*/
    v7 = 1; /*0x6ac6b1*/
  }
  v8 = 997 * v7; /*0x6ac6e3*/
  v9 = 0; /*0x6ac6e6*/
  v10 = (char *)&this->uniqueId * v8 + 5444; /*0x6ac6e8*/
  v11 = v10 + 88; /*0x6ac6ef*/
  while ( *v11 != v5 ) /*0x6ac6f4*/
  {
    ++v9; /*0x6ac6f6*/
    v11 += 13; /*0x6ac6f7*/
    if ( v9 >= 75 ) /*0x6ac6fd*/
      goto LABEL_38; /*0x6ac6fd*/
  }
  *(_DWORD *)&v10[52 * v9 + 136] = aP2 + *(_DWORD *)&stru_A8EB00.?[416]; /*0x6ac713*/
  LABEL_38:
  result = (_DWORD *)(*(_DWORD *)&stru_A8EB00.?[416] + aP2 + 1); /*0x6ac71a*/
  this->u32_53A0 = result; /*0x6ac728*/
  return result; /*0x6ac670*/
}
}
// 0x6E0B60
namespace gamemd {
AbstractClass * * TActionClass::ConvertHouseUnits(int a2, int _14, unsigned int * a3, IUnknown * aP4)
{
  HouseClass *v5; // esi
  char v6; // bl
  int Field11; // eax
  int v8; // ebp
  int v10; // eax
  int i; // edi
  _DWORD *v12; // esi
  int v13; // esi
  int v14; // edi
  int v15; // esi
  int v16; // eax

  v5 = *(HouseClass **)&this->pad_6E[34]; /*0x6e0b63*/
  v6 = 0; /*0x6e0b6d*/
  if ( !a3 ) /*0x6e0b71*/
    return 0; /*0x6e0b71*/
  if ( v5 == (HouseClass *)8997 ) /*0x6e0b79*/
  {
    Field11 = Property::GetField11((Property *)a3); /*0x6e0b7b*/
  }
  else
  {
    if ( v5 == (HouseClass *)-1 ) /*0x6e0b85*/
      return 0; /*0x6e0bab*/
    if ( (unsigned __int8)BuildingType::IsSpecialType(v5) ) /*0x6e0b89*/
      Field11 = BuildingType::FindOwnerHouse(v5); /*0x6e0b94*/
    else
      Field11 = HouseClass::FindOwner(v5); /*0x6e0b9b*/
  }
  v8 = Field11; /*0x6e0ba0*/
  if ( !Field11 ) /*0x6e0ba4*/
    return 0; /*0x6e0ba4*/
  v10 = *(_DWORD *)&stru_A8EB00.?[164]; /*0x6e0bae*/
  for ( i = 0; i < *(int *)&stru_A8EB00.?[164]; ++i ) /*0x6e0bb8*/
  {
    v12 = *(_DWORD **)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * i); /*0x6e0bbf*/
    if ( v12[135] == a2 /*0x6e0bf4*/
      && (!v12
       || (*(int (__thiscall **)(_DWORD))(*v12 + 44))(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * i)) != 6
       || (v13 = v12[328]) == 0
       || !*(_BYTE *)(v13 + 5491) && !*(_BYTE *)(v13 + 5492)) )
    {
      (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * i) + 980))( /*0x6e0c0b*/
        *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * i),
        v8,
        0);
      v6 = 1; /*0x6e0c11*/
    }
    v10 = *(_DWORD *)&stru_A8EB00.?[164]; /*0x6e0c13*/
  }
  v14 = 0; /*0x6e0c1d*/
  if ( v10 > 0 ) /*0x6e0c21*/
  {
    do /*0x6e0c89*/
    {
      v15 = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * v14); /*0x6e0c2c*/
      if ( v15->u32_21C == a2 ) /*0x6e0c35*/
      {
        if ( v15 ) /*0x6e0c39*/
        {
          if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v15 + 44))(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * v14)) == 6 ) /*0x6e0c45*/
          {
            v16 = v15->u32_520; /*0x6e0c47*/
            if ( v16 ) /*0x6e0c4f*/
            {
              if ( *(_BYTE *)(v16 + 5491) || *(_BYTE *)(v16 + 5492) ) /*0x6e0c5b*/
              {
                (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * v14) /*0x6e0c72*/
                                                            + 980))(
                  *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * v14),
                  v8,
                  0);
                Animation::UpdateBuildingAnimations((Animation *)v15); /*0x6e0c7a*/
                v6 = 1; /*0x6e0c7f*/
              }
            }
          }
        }
      }
      ++v14; /*0x6e0c86*/
    }
    while ( v14 < *(int *)&stru_A8EB00.?[164] ); /*0x6e0c89*/
  }
  return v6; /*0x6e0ba6*/
}
}
// 0x6E1CC0
namespace gamemd {
AnimClass * * TActionClass::executeRetreatAction(AbstractClass * aP1, int a3, int a4, AbstractClass * aP4)
{
  AnimClass *v5; // eax
  __int16 v7[2]; // [esp+0h] [ebp-14h] BYREF
  int v8; // [esp+4h] [ebp-10h] BYREF
  int v9[2]; // [esp+8h] [ebp-Ch] BYREF
  int GroundHeight; // [esp+10h] [ebp-4h]

  *(_DWORD *)v7 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v8, (int)this->TActionClass_field_44); /*0x6e1cdb*/
  GroundHeight = 0; /*0x6e1cdf*/
  v9[1] = (v7[1] << 8) + 128; /*0x6e1d00*/
  v9[0] = (v7[0] << 8) + 128; /*0x6e1d0a*/
  GroundHeight = Cell::GetGroundHeight(v9); /*0x6e1d13*/
  if ( (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v7) + 80) & 0x100) != 0 /*0x6e1d49*/
    || (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v7) + 80) & 0x400) != 0 )
  {
    GroundHeight += dword_B0E6D4; /*0x6e1d57*/
  }
  v5 = (AnimClass *)RA2_OPNEW(0x1C8u); /*0x6e1d60*/
  if ( v5 ) /*0x6e1d6a*/
    *((_BYTE *)AnimClass::ctor( /*0x6e1d92*/
                 v5,
                 *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5244),
                 v9,
                 0,
                 1,
                 (void *)0x600,
                 0,
                 0)
    + 408) = 1;
  else
    MEMORY[0x198] = 1; /*0x6e1da3*/
  return 1; /*0x6e1d9b*/
}
}
// 0x6E2290
namespace gamemd {
AnimClass * * TActionClass::executeEscortAction(int a2, int a3, int a4, IUnknown * aP4)
{
  AnimClass *v6; // eax
  __int16 v8[2]; // [esp+4h] [ebp-14h] BYREF
  int v9; // [esp+8h] [ebp-10h] BYREF
  int v10[2]; // [esp+Ch] [ebp-Ch] BYREF
  int GroundHeight; // [esp+14h] [ebp-4h]

  *(_DWORD *)v8 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v9, (int)this->TActionClass_field_44); /*0x6e22ae*/
  GroundHeight = 0; /*0x6e22b2*/
  v10[1] = (v8[1] << 8) + 128; /*0x6e22d3*/
  v10[0] = (v8[0] << 8) + 128; /*0x6e22dd*/
  GroundHeight = Cell::GetGroundHeight(v10); /*0x6e22e6*/
  if ( (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v8) + 80) & 0x100) != 0 /*0x6e231c*/
    || (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v8) + 80) & 0x400) != 0 )
  {
    GroundHeight += dword_B0E6D4; /*0x6e232a*/
  }
  v6 = (AnimClass *)RA2_OPNEW(0x1C8u); /*0x6e2333*/
  if ( v6 ) /*0x6e233d*/
    *((_BYTE *)AnimClass::ctor( /*0x6e2368*/
                 v6,
                 *(void **)(FootClass_Array.?[3] + 4 * *(_DWORD *)&this->pad_6E[34]),
                 v10,
                 0,
                 1,
                 (void *)0x600,
                 0,
                 0)
    + 408) = 1;
  else
    MEMORY[0x198] = 1; /*0x6e237b*/
  return 1; /*0x6e2371*/
}
}
// 0x6E2390
namespace gamemd {
AbstractClass * * TActionClass::CreateWeaponImpactAtWaypoint(int a2, int a3, int a4, IUnknown * aP4)
{
  int v6; // edi
  int v7; // esi
  int v8; // ebx
  CellClass *v9; // eax
  void *WarheadVersusMultiplier; // esi
  AnimClass *v11; // ebp
  void *v12; // eax
  __int16 v14[2]; // [esp+10h] [ebp-14h] BYREF
  int v15; // [esp+14h] [ebp-10h] BYREF
  int v16; // [esp+18h] [ebp-Ch] BYREF
  int v17; // [esp+1Ch] [ebp-8h]
  int GroundHeight; // [esp+20h] [ebp-4h]

  *(_DWORD *)v14 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v15, (int)this->TActionClass_field_44); /*0x6e23b1*/
  GroundHeight = 0; /*0x6e23b5*/
  v17 = (v14[1] << 8) + 128; /*0x6e23d6*/
  v16 = (v14[0] << 8) + 128; /*0x6e23e0*/
  GroundHeight = Cell::GetGroundHeight(&v16); /*0x6e23e9*/
  if ( (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v14) + 80) & 0x100) != 0 /*0x6e241f*/
    || (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v14) + 80) & 0x400) != 0 )
  {
    GroundHeight += dword_B0E6D4; /*0x6e242d*/
  }
  v6 = *(_DWORD *)&this->pad_6E[34]; /*0x6e2431*/
  v7 = *((_DWORD *)g_WeaponTypeConfig + v6); /*0x6e2440*/
  v8 = *(_DWORD *)(v7 + 164); /*0x6e2449*/
  v9 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v16); /*0x6e244f*/
  WarheadVersusMultiplier = (void *)GetWarheadVersusMultiplier(v8, *(_DWORD *)(v7 + 172), v9->landType, &v16); /*0x6e246d*/
  if ( WarheadVersusMultiplier ) /*0x6e2471*/
  {
    v11 = (AnimClass *)RA2_OPNEW(0x1C8u); /*0x6e247d*/
    if ( v11 ) /*0x6e2484*/
    {
      v12 = (void *)Return::HRESULT_Fail(v16, v17, GroundHeight); /*0x6e24a1*/
      AnimClass::ctor(v11, WarheadVersusMultiplier, &v16, 0, 1, (void *)0x2600, v12, 0); /*0x6e24b8*/
    }
  }
  CreateSmokeEffectAt(v8, *(_DWORD *)(*((_DWORD *)g_WeaponTypeConfig + v6) + 172), v16, v17, GroundHeight, 0, 0); /*0x6e24ea*/
  PlaySoundEffectAt(&v16, v8, 0, *(_DWORD *)(*((_DWORD *)g_WeaponTypeConfig + v6) + 172), 1, 0); /*0x6e250b*/
  return 1; /*0x6e2510*/
}
}
// 0x6E2C40
namespace gamemd {
ScenarioClass * * TActionClass::SpawnMeteorShower(AbstractClass * aP1, int a3, int a4, AbstractClass * aP4)
{
  int v6; // esi
  int String; // ebp
  int v8; // edi
  Random *p_NeedsSaveOrLink; // esi
  int v10; // ebx
  int v11; // eax
  AnimClass *v12; // esi
  bool v13; // zf
  signed int v14; // eax
  int v15; // eax
  __int16 v17[2]; // [esp+Ch] [ebp-24h] BYREF
  int v18; // [esp+10h] [ebp-20h]
  int v19; // [esp+14h] [ebp-1Ch] BYREF
  int v20; // [esp+18h] [ebp-18h] BYREF
  int v21; // [esp+1Ch] [ebp-14h]
  int GroundHeight; // [esp+20h] [ebp-10h]
  int v23[2]; // [esp+24h] [ebp-Ch] BYREF
  int v24; // [esp+2Ch] [ebp-4h]

  *(_DWORD *)v17 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v19, (int)this->TActionClass_field_44); /*0x6e2c60*/
  GroundHeight = 0; /*0x6e2c64*/
  v21 = (v17[1] << 8) + 128; /*0x6e2c85*/
  v20 = (v17[0] << 8) + 128; /*0x6e2c8f*/
  GroundHeight = Cell::GetGroundHeight(&v20); /*0x6e2c98*/
  if ( (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v17) + 80) & 0x100) != 0 /*0x6e2cce*/
    || (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v17) + 80) & 0x400) != 0 )
  {
    GroundHeight += dword_B0E6D4; /*0x6e2cdc*/
  }
  v6 = dword_842AFC[*(_DWORD *)&this->pad_6E[34]] /*0x6e2d0a*/
     + (int)abs32(Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink)) % 3;
  String = GlobalArray::FindString(&stru_842C20); /*0x6e2d1b*/
  v19 = GlobalArray::FindString(&stru_842C14); /*0x6e2d22*/
  v8 = 70 * v6; /*0x6e2d32*/
  if ( v6 <= 0 ) /*0x6e2d36*/
    return 1; /*0x6e2e0e*/
  v18 = v6; /*0x6e2d3d*/
  do /*0x6e2dfa*/
  {
    p_NeedsSaveOrLink = (Random *)&dword_A8B230[14].NeedsSaveOrLink; /*0x6e2d46*/
    v10 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink) % v8; /*0x6e2d58*/
    v11 = Random::State(p_NeedsSaveOrLink); /*0x6e2d5a*/
    v23[0] = v10 + v20; /*0x6e2d6d*/
    v24 = GroundHeight; /*0x6e2d77*/
    v23[1] = v11 % v8 + v21; /*0x6e2d7f*/
    v24 = Cell::GetGroundHeight(v23); /*0x6e2d93*/
    v12 = (AnimClass *)RA2_OPNEW(0x1C8u); /*0x6e2d9c*/
    if ( v12 ) /*0x6e2da3*/
    {
      v14 = abs32(Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink)) & 0x80000001; /*0x6e2dba*/
      v13 = v14 == 0; /*0x6e2dba*/
      if ( v14 < 0 ) /*0x6e2dbf*/
        v13 = (((_BYTE)v14 - 1) | 0xFFFFFFFE) == -1; /*0x6e2dc5*/
      v15 = String; /*0x6e2dc6*/
      if ( v13 ) /*0x6e2dc8*/
        v15 = v19; /*0x6e2dca*/
      AnimClass::ctor(v12, *(void **)(FootClass_Array.?[3] + 4 * v15), v23, 0, 1, (void *)0x600, 0, 0); /*0x6e2dec*/
    }
    --v18; /*0x6e2df6*/
  }
  while ( v18 ); /*0x6e2dfa*/
  return 1; /*0x6e2e01*/
}
}
// 0x6E36E0
namespace gamemd {
int TActionClass::executeParadropAction(int a2, int a3, int a4, IUnknown * aP4)
{
  void *v5; // eax
  int *v6; // eax
  int v7; // esi
  int v8; // edi
  int v9; // ebx
  void **v10; // eax
  int *v11; // edi
  int v12; // ebx
  int16_t v13; // cx
  unsigned int *i; // esi
  int v16; // [esp+Ch] [ebp-18h] BYREF
  int v17; // [esp+10h] [ebp-14h] BYREF
  int v18; // [esp+14h] [ebp-10h] BYREF
  int v19[3]; // [esp+18h] [ebp-Ch] BYREF

  v16 = *ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v17, *(unsigned int *)&this->TActionClass_field_44); /*0x6e3706*/
  v5 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v16); /*0x6e370a*/
  v6 = (int *)(*(int (__thiscall **)(void *, int *))(*(unsigned int *)v5 + 72))(v5, v19); /*0x6e3718*/
  v7 = *v6; /*0x6e371b*/
  v8 = v6[1]; /*0x6e3722*/
  v9 = v6[2]; /*0x6e3725*/
  v10 = (void *)operator new(0x1C8u); /*0x6e3728*/
  if ( v10 ) /*0x6e3732*/
  {
    v19[2] = v9 + 5; /*0x6e373b*/
    v19[0] = v7; /*0x6e3752*/
    v19[1] = v8; /*0x6e3756*/
    AnimClass::ctor(v10, (void *)g_RulesClass_Instance->PrerequisiteTech[3], v19, 0, 1, (void *)0x600, 0, 0); /*0x6e3764*/
  }
  v11 = dword_ABD490; /*0x6e3772*/
  v12 = 9; /*0x6e3777*/
  do /*0x6e37da*/
  {
    v13 = *((unsigned short *)v11 + 1); /*0x6e377e*/
    IDA_LOWORD(v17) = *(unsigned short *)v11 + v16; /*0x6e378a*/
    IDA_HIWORD(v17) = IDA_HIWORD(v16) + v13; /*0x6e378f*/
    v18 = v17; /*0x6e37a2*/
    for ( i = (unsigned int *)*((unsigned int *)CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v18) + 57); i; i = (unsigned int *)i[12] ) /*0x6e37b3*/
      (*(void (__thiscall **)(unsigned int *, int, unsigned int, unsigned int))(*i + 340))(i, g_RulesClass_Instance->CrateMinimum, 0, 0); /*0x6e37c9*/
    ++v11; /*0x6e37d6*/
    --v12; /*0x6e37d9*/
  }
  while ( v12 ); /*0x6e37da*/
  return 1; /*0x6e37dc*/
}
}
// 0x6E4150
namespace gamemd {
AbstractClass * * TActionClass::executeGeneticMutatorAction(int a2, int a3, int a4, IUnknown * aP4)
{
  int v5; // eax
  int v6; // edi
  char *p_TActionClass_field_54; // ebx
  int v8; // ebp

  v5 = -1; /*0x6e415d*/
  v6 = stru_A8EB00.ObjectTypeClass[4] - 1; /*0x6e4160*/
  if ( stru_A8EB00.ObjectTypeClass[4] - 1 >= 0 ) /*0x6e416b*/
  {
    p_TActionClass_field_54 = &this->TActionClass_field_54; /*0x6e4172*/
    v8 = stru_A8EB00.ObjectTypeClass[1] + 4 * v6; /*0x6e4175*/
    while ( strcmp((const char *)(*(_DWORD *)v8 + 36), p_TActionClass_field_54) ) /*0x6e41ab*/
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
  if ( v5 >= stru_A8EB00.ObjectTypeClass[4] || v5 < 0 ) /*0x6e41cd*/
    return 0; /*0x6e41f6*/
  TActionClass::executeHarvestAction( /*0x6e41e9*/
    (TActionClass *)&stru_87F5F0.__pad_58[416],
    *(_DWORD *)(stru_A8EB00.ObjectTypeClass[1] + 4 * v5),
    *(_DWORD *)&this->pad_6E[34]);
  return 1; /*0x6e41c3*/
}
}
// 0x6E42D0
namespace gamemd {
int TActionClass::executeIronCurtainAction(int a2, int a3, int a4, IUnknown * aP4)
{
  int v5; // eax
  int v6; // eax

  if ( !a2 ) /*0x6e42d6*/
    return 0; /*0x6e42d6*/
  v5 = *(_DWORD *)&this->pad_6E[34]; /*0x6e42d8*/
  if ( v5 < 0 ) /*0x6e42e0*/
    return 0; /*0x6e42e0*/
  if ( v5 > *(_DWORD *)(a2 + 612) ) /*0x6e42ec*/
    return 0; /*0x6e42ec*/
  v6 = *(_DWORD *)(*(_DWORD *)(a2 + 600) + 4 * v5); /*0x6e42f4*/
  if ( !*(_BYTE *)(v6 + 109) || this->TActionClass_field_48 > (void *)0x64 ) /*0x6e4303*/
    return 0; /*0x6e4317*/
  SuperClass::SetCharge(v6, (int)this->TActionClass_field_48); /*0x6e430d*/
  return 1; /*0x6e4314*/
}
}
// 0x6E4320
namespace gamemd {
int TActionClass::executeNukeAction(int a2, int a3, int a4, IUnknown * aP4)
{
  int v5; // eax

  if ( !a2 ) /*0x6e4326*/
    return 0; /*0x6e4326*/
  v5 = *(_DWORD *)&this->pad_6E[34]; /*0x6e4328*/
  if ( v5 < 0 || v5 > *(_DWORD *)(a2 + 612) ) /*0x6e433c*/
    return 0; /*0x6e4355*/
  SuperClass::SetRechargeTime(*(SuperClass **)(*(_DWORD *)(a2 + 600) + 4 * v5), (int)this->TActionClass_field_48); /*0x6e434b*/
  return 1; /*0x6e4352*/
}
}
// 0x71E6A0
namespace gamemd {
TActionClass::TActionClass()
{
  int v2; // ecx
  char v3; // al
  int v4; // eax
  TActionClass **v5; // edx
  int v6; // eax
  int v7; // eax

  AbstractClass::Constructor(); /*0x71e6a4*/
  this->idxArray = -1; /*0x71e6ab*/
  this->TActionClass_field_28 = 0; /*0x71e6b2*/
  this->TActionClass_field_2C = 0; /*0x71e6b5*/
  this->TActionClass_field_30 = 0; /*0x71e6b8*/
  IDA_LOBYTE(this->TActionClass_field_38) = 0; /*0x71e6bb*/
  *(_DWORD *)&this->TActionClass_field_54 = 0; /*0x71e6be*/
  this->AbstractClass = &(void*)(void*)&TEventClass_vftable; /*0x71e6c1*/
  this->? = &(void*)(void*)&TEventClass_vftable; /*0x71e6c7*/
  this->? = &(void*)(void*)&TEventClass_vftable; /*0x71e6ce*/
  this->? = &(void*)(void*)&TEventClass_vftable; /*0x71e6d5*/
  v2 = g_BuildingLoadQueue_Array.?[54]; /*0x71e6dc*/
  if ( g_BuildingLoadQueue_Array.?[54] < g_BuildingLoadQueue_Array.?[52] /*0x71e71a*/
    || (IDA_BYTE1(g_BuildingLoadQueue_Array.?[53]) || !g_BuildingLoadQueue_Array.?[52])
    && g_BuildingLoadQueue_Array.?[55] > 0
    && (v3 = (*(int (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.?[50] + 8))(
               &g_BuildingLoadQueue_Array.?[50],
               g_BuildingLoadQueue_Array.?[52] + g_BuildingLoadQueue_Array.?[55],
               0),
        v2 = g_BuildingLoadQueue_Array.?[54],
        v3) )
  {
    g_BuildingLoadQueue_Array.?[54] = v2 + 1; /*0x71e71f*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.?[51] + 4 * v2) = this; /*0x71e72b*/
    v2 = g_BuildingLoadQueue_Array.?[54]; /*0x71e72e*/
  }
  v4 = 0; /*0x71e734*/
  if ( v2 <= 0 ) /*0x71e738*/
  {
  LABEL_11:
    v4 = -1; /*0x71e74c*/
  }
  else
  {
    v5 = (TActionClass **)g_BuildingLoadQueue_Array.?[51]; /*0x71e73a*/
    while ( *v5 != this ) /*0x71e742*/
    {
      ++v4; /*0x71e744*/
      ++v5; /*0x71e745*/
      if ( v4 >= v2 ) /*0x71e74a*/
        goto LABEL_11; /*0x71e74a*/
    }
  }
  this->idxArray = v4; /*0x71e74f*/
  if ( g_BuildingLoadQueue_Array.GateCloseDelay[0] < g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2] /*0x71e786*/
    || (IDA_BYTE1(g_BuildingLoadQueue_Array.align_E24[0]) || !g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2])
    && g_BuildingLoadQueue_Array.GateCloseDelay[1] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[0] + 8))(
         g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2,
         g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2] + g_BuildingLoadQueue_Array.GateCloseDelay[1],
         0) )
  {
    v6 = g_BuildingLoadQueue_Array.GateCloseDelay[0]++; /*0x71e793*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[1] + 4 * v6) = this; /*0x71e7a2*/
  }
  if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x71e7d9*/
    || (IDA_BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
    && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
         &g_BuildingLoadQueue_Array.LightVisibility,
         g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
         0) )
  {
    v7 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x71e7e6*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v7) = this; /*0x71e7f5*/
  }
  this->TActionClass_field_34 = 0; /*0x71e7f8*/
  return (int)this; /*0x71e7fd*/
}
}
// 0x50D290
namespace gamemd {
int TActionClass::executeAttackAction(int a2)
{
  int i; // edi
  _DWORD *v4; // esi
  int result; // eax

  for ( i = *(_DWORD *)(a2 + 120) - 1; i >= 0; v4[179] = this ) /*0x50d29d*/
  {
    v4 = *(_DWORD **)(*(_DWORD *)(a2 + 108) + 4 * i); /*0x50d2a6*/
    result = (*(int (__thiscall **)(_DWORD *, TActionClass *, _DWORD))(*v4 + 980))(v4, this, 0); /*0x50d2ad*/
    --i; /*0x50d2b3*/
    v4[184] = a2; /*0x50d2b4*/
  }
  return result; /*0x50d2c3*/
}
} // namespace gamemd

// 0x6DD2C0
namespace gamemd {
int TActionClass::ExecuteAction(int a2, int a3)
{
  int v3; // eax
  int result; // eax

  v3 = *(&this->vtable20); /*0x6dd2c0*/
  if ( v3 == a2 ) /*0x6dd2c9*/
    *(&this->vtable20) = v3->TActionClass_field_28; /*0x6dd2ce*/
  result = 0; /*0x6dd2d5*/
  if ( *(&this->vtable22) == a2 ) /*0x6dd2d9*/
    *(&this->vtable22) = 0; /*0x6dd2db*/
  if ( *(&this->vtable30) == a2 ) /*0x6dd2e1*/
    *(&this->vtable30) = 0; /*0x6dd2e3*/
  if ( *(&this->vtable29) == a2 ) /*0x6dd2ec*/
    *(&this->vtable29) = 0; /*0x6dd2ee*/
  return result; /*0x6dd2f1*/
}
} // namespace gamemd

// 0x6E0AA0
namespace gamemd {
char TActionClass::executeEnterAction(int a2, int _10, unsigned int * a3, IUnknown * aP4)
{
  HouseClass *v5; // esi
  int Field11; // eax
  int v7; // edi
  char v9; // bl
  int i; // ebp
  int v11; // esi
  LinkedList *v12; // ecx

  v5 = *(HouseClass **)&this->pad_6E[34]; /*0x6e0aa1*/
  if ( !a3 ) /*0x6e0aae*/
    return 0; /*0x6e0aae*/
  if ( v5 == (HouseClass *)8997 ) /*0x6e0ab6*/
  {
    Field11 = Property::GetField11((Property *)a3); /*0x6e0ab8*/
  }
  else
  {
    if ( v5 == (HouseClass *)-1 ) /*0x6e0ac2*/
      return 0; /*0x6e0ae7*/
    if ( (unsigned __int8)BuildingType::IsSpecialType(v5) ) /*0x6e0ac6*/
      Field11 = BuildingType::FindOwnerHouse(v5); /*0x6e0ad1*/
    else
      Field11 = HouseClass::FindOwner(v5); /*0x6e0ad8*/
  }
  v7 = Field11; /*0x6e0add*/
  if ( !Field11 ) /*0x6e0ae1*/
    return 0; /*0x6e0ae1*/
  v9 = 0; /*0x6e0af1*/
  for ( i = 0; i < *(int *)&stru_A8EB00.?[164]; ++i ) /*0x6e0af7*/
  {
    v11 = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[152] + 4 * i); /*0x6e0afe*/
    if ( *(_BYTE *)(v11 + 144) ) /*0x6e0b01*/
    {
      if ( *(_BYTE *)(v11 + 116) ) /*0x6e0b0b*/
      {
        if ( !*(_BYTE *)(v11 + 129) ) /*0x6e0b12*/
        {
          v12 = *(LinkedList **)(v11 + 52); /*0x6e0b1c*/
          if ( v12 ) /*0x6e0b21*/
          {
            if ( (unsigned __int8)LinkedList::Contains(v12, (int)a3) ) /*0x6e0b28*/
            {
              (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v11 + 980))(v11, v7, 0); /*0x6e0b38*/
              v9 = 1; /*0x6e0b3e*/
            }
          }
        }
      }
    }
  }
  return v9; /*0x6e0ae3*/
}
} // namespace gamemd

// 0x6E0CA0
namespace gamemd {
char TActionClass::executeCaptureAction(void * a1, int _C, unsigned int * a3, IUnknown * aP4)
{
  HouseClass *v5; // esi
  int Field11; // eax

  v5 = *(HouseClass **)&this->pad_6E[34]; /*0x6e0ca1*/
  if ( !a3 ) /*0x6e0cad*/
    return 0; /*0x6e0cad*/
  if ( v5 == (HouseClass *)8997 ) /*0x6e0cb5*/
  {
    Field11 = Property::GetField11((Property *)a3); /*0x6e0cb7*/
  }
  else
  {
    if ( v5 == (HouseClass *)-1 ) /*0x6e0cc1*/
      return 0; /*0x6e0ce3*/
    if ( (unsigned __int8)BuildingType::IsSpecialType(v5) ) /*0x6e0cc5*/
      Field11 = BuildingType::FindOwnerHouse(v5); /*0x6e0cd0*/
    else
      Field11 = HouseClass::FindOwner(v5); /*0x6e0cd7*/
  }
  if ( !Field11 ) /*0x6e0cde*/
    return 0; /*0x6e0cde*/
  TActionClass::executeAttackAction((TActionClass *)a1, Field11); /*0x6e0ceb*/
  return 1; /*0x6e0ce2*/
}
} // namespace gamemd

// 0x6E0D00
namespace gamemd {
char TActionClass::executeSabotageAction(unsigned int * a1, int _C, unsigned int * a3, IUnknown * aP4)
{
  HouseClass *v5; // esi
  int Field11; // eax

  v5 = *(HouseClass **)&this->pad_6E[34]; /*0x6e0d01*/
  if ( !a3 ) /*0x6e0d0d*/
    return 0; /*0x6e0d0d*/
  if ( v5 == (HouseClass *)8997 ) /*0x6e0d15*/
  {
    Field11 = Property::GetField11((Property *)a3); /*0x6e0d17*/
  }
  else
  {
    if ( v5 == (HouseClass *)-1 ) /*0x6e0d21*/
      return 0; /*0x6e0d43*/
    if ( (unsigned __int8)BuildingType::IsSpecialType(v5) ) /*0x6e0d25*/
      Field11 = BuildingType::FindOwnerHouse(v5); /*0x6e0d30*/
    else
      Field11 = HouseClass::FindOwner(v5); /*0x6e0d37*/
  }
  if ( !Field11 ) /*0x6e0d3e*/
    return 0; /*0x6e0d3e*/
  TActionClass::executeMoveAction((TActionClass *)a1, Field11); /*0x6e0d4b*/
  return 1; /*0x6e0d42*/
}
} // namespace gamemd

// 0x6E0FE0
namespace gamemd {
char TActionClass::RevealWaypointArea(int a2, int a3, int a4, IUnknown * aP4)
{
  int v5; // edi
  int v6; // esi
  int v8; // [esp+0h] [ebp-14h] BYREF
  int v9; // [esp+4h] [ebp-10h]
  int v10; // [esp+8h] [ebp-Ch]
  int16_t v11[4]; // [esp+Ch] [ebp-8h] BYREF

  if ( *((unsigned char *)HouseClass_Player + 576) ) /*0x6e0fe8*/
    return 1; /*0x6e116a*/
  *(unsigned int *)v11 = *ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &v8, *(unsigned int *)&this->Value); /*0x6e101b*/
  if ( (*((unsigned int *)CellCoord::To_CellObj(&MapClass_Instance, v11) + 80) & 0x100) != 0 /*0x6e1047*/
    || (*((unsigned int *)CellCoord::To_CellObj(&MapClass_Instance, v11) + 80) & 0x400) != 0 )
  {
    v5 = 4; /*0x6e104d*/
  }
  else
  {
    v5 = 0; /*0x6e1049*/
  }
  v6 = v5 + *((char *)CellCoord::To_CellObj(&MapClass_Instance, v11) + 283); /*0x6e1068*/
  v10 = v6 * dword_B0E6E0; /*0x6e10b2*/
  v9 = ((int16_t)(v11[1] - v6 / 2) << 8) + 128; /*0x6e10c1*/
  v8 = ((int16_t)(v11[0] - v6 / 2) << 8) + 128; /*0x6e10cd*/
  MapClass::RevealArea1( /*0x6e10e5*/
    (int *)&MapClass_Instance,
    &v8,
    g_RulesClass_Instance->ScoldSound,
    HouseClass_Player,
    0,
    0,
    0,
    1,
    0);
  v8 = ((int16_t)(v11[0] - v6 / 2) << 8) + 128; /*0x6e1126*/
  v10 = v6 * dword_B0E6E0; /*0x6e1135*/
  v9 = ((int16_t)(v11[1] - v6 / 2) << 8) + 128; /*0x6e1143*/
  MapClass::RevealArea1( /*0x6e115b*/
    (int *)&MapClass_Instance,
    &v8,
    g_RulesClass_Instance->ScoldSound,
    HouseClass_Player,
    0,
    0,
    0,
    1,
    1);
  return 1; /*0x6e1164*/
}
} // namespace gamemd

// 0x6E11C0
namespace gamemd {
char TActionClass::RevealTileTypeAtWaypoint(int a2, int a3, int a4, IUnknown * aP4)
{
  __int16 *Waypoint_Location; // eax
  int TileIndex; // ebp
  _DWORD *v7; // esi
  __int16 *v8; // ebx
  __int16 v9; // cx
  int v10; // esi
  __int16 v11; // ax
  __int16 v12; // bx
  int v14; // [esp+8h] [ebp-1Ch] BYREF
  int v15[3]; // [esp+Ch] [ebp-18h] BYREF
  int v16[3]; // [esp+18h] [ebp-Ch] BYREF

  if ( dword_A83D4C->__pad_140[256] ) /*0x6e11c8*/
    return 1; /*0x6e11c8*/
  Waypoint_Location = (__int16 *)ScenarioClass::Get_Waypoint_Location( /*0x6e11ee*/
                                   (char *)dword_A8B230,
                                   &v14,
                                   *(_DWORD *)&this->pad_6E[34]);
  TileIndex = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], Waypoint_Location, 1, 0); /*0x6e1203*/
  TActionClass::executeSellAction((TActionClass *)&stru_87F5F0.__pad_58[416]); /*0x6e1205*/
  v7 = MapClass::SpiralSearch((MapClass *)&stru_87F5F0.__pad_58[416]); /*0x6e1214*/
  if ( !v7 ) /*0x6e1218*/
    return 1; /*0x6e1327*/
  do /*0x6e1314*/
  {
    v8 = (__int16 *)(v7 + 9); /*0x6e1220*/
    if ( MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], (__int16 *)v7 + 18, 1, 0) == TileIndex ) /*0x6e1234*/
    {
      v9 = *((_WORD *)v7 + 19); /*0x6e1244*/
      v10 = *((char *)v7 + 283) / 2; /*0x6e124c*/
      v15[0] = ((__int16)(*v8 - v10 / 2) << 8) + 128; /*0x6e1284*/
      v15[1] = ((__int16)(v9 - v10 / 2) << 8) + 128; /*0x6e128f*/
      v15[2] = v10 * dword_B0E6E0; /*0x6e12a2*/
      MapClass::RevealArea1((MapClass *)&stru_87F5F0.__pad_58[416], v15, 2, dword_A83D4C, 0, 0, 0, 1, 0); /*0x6e12a6*/
      v11 = *v8; /*0x6e12b1*/
      v12 = v8[1] - v10 / 2; /*0x6e12be*/
      v16[2] = v10 * dword_B0E6E0; /*0x6e12d3*/
      v16[0] = ((__int16)(v11 - v10 / 2) << 8) + 128; /*0x6e12ea*/
      v16[1] = (v12 << 8) + 128; /*0x6e12f5*/
      MapClass::RevealArea1((MapClass *)&stru_87F5F0.__pad_58[416], v16, 2, dword_A83D4C, 0, 0, 0, 1, 1); /*0x6e1301*/
    }
    v7 = MapClass::SpiralSearch((MapClass *)&stru_87F5F0.__pad_58[416]); /*0x6e1310*/
  }
  while ( v7 ); /*0x6e1314*/
  return 1; /*0x6e131c*/
}
} // namespace gamemd

// 0x6E1780
namespace gamemd {
char TActionClass::PlayAudioAtRandomWP(int a2, int a3, int a4, int a5)
{
  int v5; // esi
  int v7; // edi
  _DWORD *v8; // ebx
  __int16 *v9; // ecx
  int v10; // eax
  int v11; // ecx
  _DWORD v13[3]; // [esp+10h] [ebp-1A0h] BYREF
  int v14; // [esp+1Ch] [ebp-194h] BYREF
  _DWORD v15[100]; // [esp+20h] [ebp-190h] BYREF

  v5 = 0; /*0x6e178a*/
  v7 = 0; /*0x6e178e*/
  v8 = v15; /*0x6e1790*/
  do /*0x6e17cc*/
  {
    if ( (unsigned __int8)ScenarioClass::Is_Waypoint_Valid((char *)dword_A8B230, v7) ) /*0x6e179b*/
    {
      ++v5; /*0x6e17b7*/
      *v8++ = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v14, v7); /*0x6e17b8*/
      if ( v5 == 400 ) /*0x6e17c3*/
        break; /*0x6e17c3*/
    }
    ++v7; /*0x6e17c5*/
  }
  while ( v7 < 702 ); /*0x6e17cc*/
  v9 = (__int16 *)&v15[Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v5 - 1)]; /*0x6e17e3*/
  v10 = (v9[1] << 8) + 128; /*0x6e1800*/
  v13[0] = (*v9 << 8) + 128; /*0x6e1805*/
  v11 = *(_DWORD *)&this->pad_6E[34]; /*0x6e1809*/
  v13[1] = v10; /*0x6e180f*/
  v13[2] = 0; /*0x6e1813*/
  PlayAudioAt2(v11, v13, 0); /*0x6e181b*/
  return 1; /*0x6e1820*/
}
} // namespace gamemd

// 0x6E1980
namespace gamemd {
char TActionClass::executeGuardAreaAction(int a2, int a3, int a4, IUnknown * aP4)
{
  int *WorldCoords; // eax
  Cell *v6; // esi
  ObjectClass *Infantry; // eax
  __int16 v9[2]; // [esp+4h] [ebp-1Ch] BYREF
  int v10; // [esp+8h] [ebp-18h] BYREF
  int v11; // [esp+Ch] [ebp-14h]
  int v12; // [esp+10h] [ebp-10h]
  _DWORD v13[3]; // [esp+14h] [ebp-Ch] BYREF

  WorldCoords = Cell::GetWorldCoords((Cell *)dword_A8B230, v13, (int)this->TActionClass_field_44); /*0x6e1993*/
  v10 = *WorldCoords; /*0x6e199c*/
  v11 = WorldCoords[1]; /*0x6e19a3*/
  v12 = WorldCoords[2]; /*0x6e19b1*/
  v9[0] = v10 / 256; /*0x6e19d1*/
  v9[1] = v11 / 256; /*0x6e19d6*/
  if ( v9[0] == *(_WORD *)dword_B0E680 && (unsigned __int16)(v11 / 256) == *(_WORD *)&dword_B0E680[2] /*0x6e1a14*/
    || (v6 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v9),
        (Infantry = (ObjectClass *)Cell::IsBridge(v6)) == 0)
    && (Infantry = (ObjectClass *)CellClass::FindInfantry((CellClass *)v6, 0)) == 0 )
  {
    globalHelper_050F40(&v10, 1); /*0x6e1a31*/
    return 1; /*0x6e1a36*/
  }
  else
  {
    ObjectClass::CheckFlagD0(Infantry, -1); /*0x6e1a1a*/
    return 1; /*0x6e1a1f*/
  }
}
} // namespace gamemd

// 0x6E1A40
namespace gamemd {
char TActionClass::executePatrolAction(void * a1, int a3, int a4, IUnknown * aP4)
{
  int *Waypoint_Location; // eax
  TActionClass *v7; // [esp+0h] [ebp-4h] BYREF

  v7 = this; /*0x6e1a40*/
  Waypoint_Location = ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v7, (int)this->TActionClass_field_44); /*0x6e1a50*/
  SelectSimilarBuildingTypes((ObjectClass *)a1, *Waypoint_Location); /*0x6e1a5c*/
  return 1; /*0x6e1a64*/
}
} // namespace gamemd

// 0x6E1A70
namespace gamemd {
char TActionClass::executeScatterAction(int a2, int a3, int a4, IUnknown * aP4)
{
  int v5; // esi
  int v6; // kr00_4
  int v8[3]; // [esp+0h] [ebp-14h] BYREF
  __int16 v9[4]; // [esp+Ch] [ebp-8h] BYREF

  if ( dword_A83D4C->__pad_140[256] ) /*0x6e1a78*/
    return 1; /*0x6e1b79*/
  *(_DWORD *)v9 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, v8, *(_DWORD *)&this->pad_6E[34]); /*0x6e1aaa*/
  if ( (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v9) + 80) & 0x100) != 0 /*0x6e1ad6*/
    || (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v9) + 80) & 0x400) != 0 )
  {
    v5 = 4; /*0x6e1adc*/
  }
  else
  {
    v5 = 0; /*0x6e1ad8*/
  }
  v6 = v5 + *((char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v9) + 283); /*0x6e1afc*/
  v8[2] = v6 * dword_B0E6E0; /*0x6e1b36*/
  v8[1] = ((__int16)(v9[1] - v6 / 2) << 8) + 128; /*0x6e1b3d*/
  v8[0] = ((__int16)(v9[0] - v6 / 2) << 8) + 128; /*0x6e1b4c*/
  TActionClass_Helper(v8, *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1580)); /*0x6e1b61*/
  CellSystem::UpdateVisibility((CellSystem *)&stru_87F5F0.__pad_58[416]); /*0x6e1b6b*/
  return 1; /*0x6e1b73*/
}
} // namespace gamemd

// 0x6E21E0
namespace gamemd {
char TActionClass::executeFollowAction(int a2, int a3, int a4, IUnknown * aP4)
{
  void **p_TActionClass_field_34; // ecx
  int i; // eax
  int j; // esi

  p_TActionClass_field_34 = &this->TActionClass_field_34; /*0x6e21e0*/
  *(_DWORD *)&stru_87F5F0.__pad_58[668] = *p_TActionClass_field_34; /*0x6e21e5*/
  *(_DWORD *)&stru_87F5F0.__pad_58[672] = p_TActionClass_field_34[1]; /*0x6e21ed*/
  *(_DWORD *)&stru_87F5F0.__pad_58[676] = p_TActionClass_field_34[2]; /*0x6e21f6*/
  *(_DWORD *)&stru_87F5F0.__pad_58[680] = p_TActionClass_field_34[3]; /*0x6e21fe*/
  RadarClass::Process((RadarClass *)&stru_87F5F0.__pad_58[416]); /*0x6e2209*/
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x6e2213*/
  for ( i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x6e2224*/
        i;
        i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    House::AnnounceUpgrade(i, -1); /*0x6e222a*/
  }
  Terrain::ConnectivityGraph((Terrain *)&stru_87F5F0.__pad_58[416]); /*0x6e2243*/
  MapClass::BuildSubzones((MapClass *)&stru_87F5F0.__pad_58[416]); /*0x6e224d*/
  FogOfWar::Render((FogOfWar *)&stru_87F5F0.__pad_58[416]); /*0x6e2257*/
  for ( j = stru_A8EB00.ObjectTypeClass[20] - 1; j >= 0; --j ) /*0x6e2267*/
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(stru_A8EB00.ObjectTypeClass[17] + 4 * j) + 1184))( /*0x6e2275*/
      *(_DWORD *)(stru_A8EB00.ObjectTypeClass[17] + 4 * j),
      1);
  return 1; /*0x6e2281*/
}
} // namespace gamemd

// 0x6E2520
namespace gamemd {
char TActionClass::executeLoadAction(int a2, int a3, int a4, IUnknown * aP4)
{
  void *v6; // eax
  __int16 v8[2]; // [esp+4h] [ebp-14h] BYREF
  int v9; // [esp+8h] [ebp-10h] BYREF
  int v10[2]; // [esp+Ch] [ebp-Ch] BYREF
  int GroundHeight; // [esp+14h] [ebp-4h]

  *(_DWORD *)v8 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v9, (int)this->TActionClass_field_44); /*0x6e253e*/
  GroundHeight = 0; /*0x6e2542*/
  v10[1] = (v8[1] << 8) + 128; /*0x6e2563*/
  v10[0] = (v8[0] << 8) + 128; /*0x6e256d*/
  GroundHeight = Cell::GetGroundHeight(v10); /*0x6e2576*/
  if ( (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v8) + 80) & 0x100) != 0 /*0x6e25ac*/
    || (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v8) + 80) & 0x400) != 0 )
  {
    GroundHeight += dword_B0E6D4; /*0x6e25ba*/
  }
  v6 = (void *)RA2_OPNEW(0x148u); /*0x6e25c3*/
  if ( v6 ) /*0x6e25cd*/
    DamageAnimClass::Constructor( /*0x6e25e8*/
      v6,
      *(_DWORD *)(stru_A8EB00.ObjectTypeClass[11] + 4 * *(_DWORD *)&this->pad_6E[34]),
      v10,
      0);
  return 1; /*0x6e25ef*/
}
} // namespace gamemd

// 0x6E2AF0
namespace gamemd {
char TActionClass::executeUnloadAction(int a2, int a3, int a4, IUnknown * aP4)
{
  int v6; // esi
  TActionClass *v7; // ecx
  _BYTE *idxArray; // eax
  void *vtable0; // edx

  if ( !this->TActionClass_field_50 ) /*0x6e2af4*/
    return 1; /*0x6e2af4*/
  v6 = 0; /*0x6e2b00*/
  if ( dword_A8EAF8 <= 0 ) /*0x6e2b04*/
    return 1; /*0x6e2b69*/
  do /*0x6e2b5e*/
  {
    v7 = (TActionClass *)*((_DWORD *)dword_A8EAEC + v6); /*0x6e2b0f*/
    idxArray = (_BYTE *)v7->idxArray; /*0x6e2b12*/
    if ( idxArray == this->TActionClass_field_50 ) /*0x6e2b17*/
    {
      vtable0 = dword_A8B230[43].vtable0; /*0x6e2b1f*/
      if ( (vtable0 || idxArray[156]) /*0x6e2b47*/
        && (vtable0 != (void *)1 || idxArray[157])
        && (vtable0 != (void *)2 || idxArray[158]) )
      {
        TActionClass::executeAirstrikeAction(v7); /*0x6e2b51*/
      }
    }
    ++v6; /*0x6e2b5b*/
  }
  while ( v6 < dword_A8EAF8 ); /*0x6e2b5e*/
  return 1; /*0x6e2b61*/
}
} // namespace gamemd

// 0x6E2E60
namespace gamemd {
char TActionClass::executeSelfDestructAction(int a2, int a3, int a4, IUnknown * aP4)
{
  UpdateSurfaceAnimations( /*0x6e2e8d*/
    10 * *(_DWORD *)&this->pad_6E[34],
    10 * dword_A8B230[378].uniqueId,
    10 * dword_A8B230[378].abstractFlags,
    0);
  dword_A8B230[378].vtable3 = *(void **)&this->pad_6E[34]; /*0x6e2ea1*/
  return 1; /*0x6e2ea0*/
}
} // namespace gamemd

// 0x6E2EB0
namespace gamemd {
char TActionClass::executeExplodeAction(int a2, int a3, int a4, IUnknown * aP4)
{
  UpdateSurfaceAnimations( /*0x6e2edd*/
    10 * (int)dword_A8B230[378].vtable3,
    10 * *(_DWORD *)&this->pad_6E[34],
    10 * dword_A8B230[378].abstractFlags,
    0);
  dword_A8B230[378].uniqueId = *(_DWORD *)&this->pad_6E[34]; /*0x6e2ef1*/
  return 1; /*0x6e2ef0*/
}
} // namespace gamemd

// 0x6E2F00
namespace gamemd {
char TActionClass::executeChronoshiftAction(int a2, int a3, int a4, IUnknown * aP4)
{
  UpdateSurfaceAnimations( /*0x6e2f2d*/
    10 * (int)dword_A8B230[378].vtable3,
    10 * dword_A8B230[378].uniqueId,
    10 * *(_DWORD *)&this->pad_6E[34],
    0);
  dword_A8B230[378].abstractFlags = *(_DWORD *)&this->pad_6E[34]; /*0x6e2f41*/
  return 1; /*0x6e2f40*/
}
} // namespace gamemd

// 0x6E3180
namespace gamemd {
char TActionClass::executePlaceBeaconAction(int a2, int _C, unsigned int * a3, IUnknown * aP4)
{
  HouseClass *v5; // esi
  HouseClass *Field11; // eax

  v5 = *(HouseClass **)&this->pad_6E[34]; /*0x6e3181*/
  if ( !a3 ) /*0x6e318d*/
    return 0; /*0x6e318d*/
  if ( v5 == (HouseClass *)8997 ) /*0x6e3195*/
  {
    Field11 = (HouseClass *)Property::GetField11((Property *)a3); /*0x6e3197*/
  }
  else
  {
    if ( v5 == (HouseClass *)-1 ) /*0x6e31a1*/
      return 0; /*0x6e31c3*/
    if ( (unsigned __int8)BuildingType::IsSpecialType(v5) ) /*0x6e31a5*/
      Field11 = (HouseClass *)BuildingType::FindOwnerHouse(v5); /*0x6e31b0*/
    else
      Field11 = (HouseClass *)HouseClass::FindOwner(v5); /*0x6e31b7*/
  }
  if ( !Field11 ) /*0x6e31be*/
    return 0; /*0x6e31be*/
  HouseClass::ClearLowPowerTargets(Field11); /*0x6e31c8*/
  return 1; /*0x6e31c2*/
}
} // namespace gamemd

// 0x6E31E0
namespace gamemd {
char TActionClass::executeJumpjetAction(int a2, int _C, unsigned int * a3, IUnknown * aP4)
{
  HouseClass *v5; // esi
  HouseClass *Field11; // eax

  v5 = *(HouseClass **)&this->pad_6E[34]; /*0x6e31e1*/
  if ( !a3 ) /*0x6e31ed*/
    return 0; /*0x6e31ed*/
  if ( v5 == (HouseClass *)8997 ) /*0x6e31f5*/
  {
    Field11 = (HouseClass *)Property::GetField11((Property *)a3); /*0x6e31f7*/
  }
  else
  {
    if ( v5 == (HouseClass *)-1 ) /*0x6e3201*/
      return 0; /*0x6e3223*/
    if ( (unsigned __int8)BuildingType::IsSpecialType(v5) ) /*0x6e3205*/
      Field11 = (HouseClass *)BuildingType::FindOwnerHouse(v5); /*0x6e3210*/
    else
      Field11 = (HouseClass *)HouseClass::FindOwner(v5); /*0x6e3217*/
  }
  if ( !Field11 ) /*0x6e321e*/
    return 0; /*0x6e321e*/
  HouseClass::DestroyAllBuildings(Field11); /*0x6e3228*/
  return 1; /*0x6e3222*/
}
} // namespace gamemd

// 0x6E3240
namespace gamemd {
char TActionClass::executeOpenGateAction(int a2, int _C, unsigned int * a3, IUnknown * aP4)
{
  HouseClass *v5; // esi
  HouseClass *Field11; // eax

  v5 = *(HouseClass **)&this->pad_6E[34]; /*0x6e3241*/
  if ( !a3 ) /*0x6e324d*/
    return 0; /*0x6e324d*/
  if ( v5 == (HouseClass *)8997 ) /*0x6e3255*/
  {
    Field11 = (HouseClass *)Property::GetField11((Property *)a3); /*0x6e3257*/
  }
  else
  {
    if ( v5 == (HouseClass *)-1 ) /*0x6e3261*/
      return 0; /*0x6e3283*/
    if ( (unsigned __int8)BuildingType::IsSpecialType(v5) ) /*0x6e3265*/
      Field11 = (HouseClass *)BuildingType::FindOwnerHouse(v5); /*0x6e3270*/
    else
      Field11 = (HouseClass *)HouseClass::FindOwner(v5); /*0x6e3277*/
  }
  if ( !Field11 ) /*0x6e327e*/
    return 0; /*0x6e327e*/
  HouseClass::DestroyAllNonBuildingsNonNaval(Field11); /*0x6e3288*/
  return 1; /*0x6e3282*/
}
} // namespace gamemd

// 0x6E32A0
namespace gamemd {
char TActionClass::executeCloseGateAction(int a2, int _C, unsigned int * a3, IUnknown * aP4)
{
  HouseClass *v5; // esi
  HouseClass *Field11; // eax

  v5 = *(HouseClass **)&this->pad_6E[34]; /*0x6e32a1*/
  if ( !a3 ) /*0x6e32ad*/
    return 0; /*0x6e32ad*/
  if ( v5 == (HouseClass *)8997 ) /*0x6e32b5*/
  {
    Field11 = (HouseClass *)Property::GetField11((Property *)a3); /*0x6e32b7*/
  }
  else
  {
    if ( v5 == (HouseClass *)-1 ) /*0x6e32c1*/
      return 0; /*0x6e32e3*/
    if ( (unsigned __int8)BuildingType::IsSpecialType(v5) ) /*0x6e32c5*/
      Field11 = (HouseClass *)BuildingType::FindOwnerHouse(v5); /*0x6e32d0*/
    else
      Field11 = (HouseClass *)HouseClass::FindOwner(v5); /*0x6e32d7*/
  }
  if ( !Field11 ) /*0x6e32de*/
    return 0; /*0x6e32de*/
  HouseClass::DestroyAllNonBuildingsNaval(Field11); /*0x6e32e8*/
  return 1; /*0x6e32e2*/
}
} // namespace gamemd

// 0x6E3410
namespace gamemd {
char TActionClass::CreateNukeEffect(AbstractClass * aP1, int a3, int a4, AbstractClass * aP4)
{
  double v5; // st3
  double v6; // st4
  double v7; // st5
  double v8; // st6
  double v9; // st7
  _DWORD *v10; // esi
  int v11; // edi
  CellClass *v12; // eax
  int *UIObjectCOM; // edi
  int v14; // eax
  int v16; // [esp-10h] [ebp-68h]
  int v17; // [esp-Ch] [ebp-64h]
  __int16 v18[2]; // [esp+Ch] [ebp-4Ch] BYREF
  double v19; // [esp+10h] [ebp-48h] BYREF
  double v20; // [esp+18h] [ebp-40h]
  double v21; // [esp+20h] [ebp-38h]
  int v22; // [esp+28h] [ebp-30h] BYREF
  int v23; // [esp+2Ch] [ebp-2Ch]
  int GroundHeight; // [esp+30h] [ebp-28h]
  _DWORD v25[3]; // [esp+34h] [ebp-24h] BYREF
  _QWORD v26[3]; // [esp+40h] [ebp-18h] BYREF

  *(_DWORD *)v18 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v19, (int)this->TActionClass_field_44); /*0x6e3433*/
  GroundHeight = 0; /*0x6e3437*/
  v23 = (v18[1] << 8) + 128; /*0x6e3458*/
  v22 = (v18[0] << 8) + 128; /*0x6e3462*/
  GroundHeight = Cell::GetGroundHeight(&v22); /*0x6e346b*/
  if ( (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v18) + 80) & 0x100) != 0 ) /*0x6e3487*/
    GroundHeight += dword_B0E6D4; /*0x6e3495*/
  v10 = (_DWORD *)*((_DWORD *)g_WeaponTypeConfig + SuperWeaponClass::FindByName((SuperWeaponClass *)&stru_81AF8C.?)); /*0x6e34ad*/
  v11 = v10[40]; /*0x6e34c3*/
  v17 = v10[43]; /*0x6e34c9*/
  v16 = v10[41]; /*0x6e34ca*/
  v12 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v22); /*0x6e34d3*/
  UIObjectCOM = (int *)CreateUIObjectCOM(v11, (int)v12, 0, v16, v17, 50, 0); /*0x6e34e1*/
  Function::Method_46B260(UIObjectCOM, (int)v10); /*0x6e34e6*/
  v25[0] = v22; /*0x6e34ff*/
  v25[1] = v23; /*0x6e3503*/
  v25[2] = GroundHeight + 20000; /*0x6e3507*/
  if ( !UIObjectCOM ) /*0x6e350b*/
    return 0; /*0x6e35dc*/
  Math::SinCos(1.570748388432313); /*0x6e351b*/
  v19 = v5; /*0x6e3520*/
  Math::ArcTan2(1.570748388432313); /*0x6e352e*/
  v19 = v6 * v19 * -100.0; /*0x6e3547*/
  Math::ArcTan2(1.570748388432313); /*0x6e354b*/
  v20 = v7; /*0x6e3550*/
  Math::ArcTan2(1.570748388432313); /*0x6e355e*/
  v21 = v19; /*0x6e356f*/
  *(double *)&v26[1] = v19; /*0x6e358b*/
  v20 = v8 * v20 * -100.0; /*0x6e358f*/
  *(double *)v26 = v20; /*0x6e359b*/
  Math::SinCos(1.570748388432313); /*0x6e35ab*/
  v14 = *UIObjectCOM; /*0x6e35b6*/
  *(double *)&v26[2] = v9 * -100.0; /*0x6e35c5*/
  (*(void (__thiscall **)(int *, _DWORD *, _QWORD *))(v14 + 496))(UIObjectCOM, v25, v26); /*0x6e35cb*/
  return 1; /*0x6e35d3*/
}
} // namespace gamemd

// 0x6E3B40
namespace gamemd {
char TActionClass::executeLightningAction(int a2, int a3, int a4, IUnknown * aP4)
{
  if ( !a2 ) /*0x6e3b48*/
    return 0; /*0x6e3b4a*/
  HouseClass::CreateRadarOutage(a2, *(_DWORD *)&this->pad_6E[34]); /*0x6e3b56*/
  return 1; /*0x6e3b4c*/
}
} // namespace gamemd

// 0x6E3D70
namespace gamemd {
int TActionClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x6e3d76*/
    return -2147467261; /*0x6e3d78*/
  *a2 = 1326367634; /*0x6e3d86*/
  a2[1] = 298977877; /*0x6e3d8e*/
  a2[2] = 1610655660; /*0x6e3d97*/
  a2[3] = unk_7E980C; /*0x6e3da0*/
  return 0; /*0x6e3d7d*/
}
} // namespace gamemd

// 0x6E3DB0
namespace gamemd {
int TActionClass::SaveLoad_Prefix(AbstractClass * aP0, int aP1)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(aP0, aP1); /*0x6e3dbb*/
  if ( result >= 0 ) /*0x6e3dc2*/
  {
    if ( aP0 ) /*0x6e3dc6*/
    {
      AbstractClass::InitVtables((AbstractClass *)aP0, (int)&aP1); /*0x6e3dcf*/
      aP0->AbstractClass = &(void*)(void*)&TActionClass_vftable; /*0x6e3dd4*/
      aP0->? = &(void*)(void*)&TActionClass_vftable; /*0x6e3dda*/
      aP0->? = &(void*)(void*)&TActionClass_vftable; /*0x6e3de1*/
      aP0->? = &(void*)(void*)&TActionClass_vftable; /*0x6e3de8*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->TActionClass_field_28); /*0x6e3df8*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->TActionClass_field_30); /*0x6e3e06*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->TActionClass_field_4C); /*0x6e3e14*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->TActionClass_field_50); /*0x6e3e22*/
    return 0; /*0x6e3e27*/
  }
  return result; /*0x6e3e29*/
}
} // namespace gamemd

// 0x6E3E30
namespace gamemd {
int TActionClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((int *)aP0, a1, aP2); /*0x6e3e3f*/
  if ( result >= 0 ) /*0x6e3e46*/
    return 0; /*0x6e3e48*/
  return result; /*0x6e3e4a*/
}
} // namespace gamemd

// 0x6E3E50
namespace gamemd {
int TActionClass::Validate(int a2)
{
  _DWORD *TActionClass_field_28; // eax
  int v4; // eax
  _DWORD *TActionClass_field_30; // eax
  int v6; // eax
  _DWORD *TActionClass_field_4C; // eax
  int v8; // eax
  _DWORD *TActionClass_field_50; // eax
  int v10; // eax

  AbstractClass::ProcessPower(); /*0x6e3e59*/
  TActionClass_field_28 = this->TActionClass_field_28; /*0x6e3e5e*/
  if ( TActionClass_field_28 ) /*0x6e3e63*/
  {
    v4 = (*(int (__stdcall **)(_DWORD *))(TActionClass_field_28[1] + 16))(TActionClass_field_28 + 1); /*0x6e3e6c*/
    Power::TimerProcess(v4); /*0x6e3e72*/
  }
  Power::TimerProcess((int)this->TActionClass_field_2C); /*0x6e3e7d*/
  TActionClass_field_30 = this->TActionClass_field_30; /*0x6e3e82*/
  if ( TActionClass_field_30 ) /*0x6e3e87*/
  {
    v6 = (*(int (__stdcall **)(_DWORD *))(TActionClass_field_30[1] + 16))(TActionClass_field_30 + 1); /*0x6e3e90*/
    Power::TimerProcess(v6); /*0x6e3e96*/
  }
  TActionClass_field_4C = this->TActionClass_field_4C; /*0x6e3e9b*/
  if ( TActionClass_field_4C ) /*0x6e3ea0*/
  {
    v8 = (*(int (__stdcall **)(_DWORD *))(TActionClass_field_4C[1] + 16))(TActionClass_field_4C + 1); /*0x6e3ea9*/
    Power::TimerProcess(v8); /*0x6e3eaf*/
  }
  TActionClass_field_50 = this->TActionClass_field_50; /*0x6e3eb4*/
  if ( TActionClass_field_50 ) /*0x6e3eb9*/
  {
    v10 = (*(int (__stdcall **)(_DWORD *))(TActionClass_field_50[1] + 16))(TActionClass_field_50 + 1); /*0x6e3ec2*/
    Power::TimerProcess(v10); /*0x6e3ec8*/
  }
  return Power::TimerProcess(*(_DWORD *)&this->pad_6E[34]); /*0x6e3edb*/
}
} // namespace gamemd

// 0x6E4100
namespace gamemd {
char TActionClass::executePsychicDominatorAction(int a2, int a3, int a4, IUnknown * aP4)
{
  unsigned int v5; // esi

  v5 = *(_DWORD *)&this->pad_6E[34]; /*0x6e4101*/
  if ( v5 >= 4 || !(unsigned __int8)PlayerClass::HasPlayers((PlayerClass *)(3988 * v5 + 8916268)) ) /*0x6e4124*/
    return 0; /*0x6e413e*/
  SidebarClass::SwitchTab((int)&stru_87F5F0.__pad_58[416], v5); /*0x6e4133*/
  return 1; /*0x6e413a*/
}
} // namespace gamemd

// 0x6E4200
namespace gamemd {
char TActionClass::executeForceShieldAction(int a2, int a3, int a4, IUnknown * aP4)
{
  int v5; // edi
  void *v7; // eax
  _DWORD *v8; // eax
  int IndexByName; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // esi
  int v14; // [esp+8h] [ebp-1Ch] BYREF
  _DWORD v15[3]; // [esp+Ch] [ebp-18h] BYREF
  _BYTE v16[12]; // [esp+18h] [ebp-Ch] BYREF

  v5 = a2; /*0x6e4205*/
  if ( !a2 ) /*0x6e420d*/
    return 0; /*0x6e420d*/
  a2 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v14, (int)this->TActionClass_field_44); /*0x6e4233*/
  v7 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2); /*0x6e4237*/
  v8 = (_DWORD *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)v7 + 72))(v7, v16); /*0x6e4245*/
  v15[0] = *v8; /*0x6e424a*/
  v15[1] = v8[1]; /*0x6e4251*/
  v15[2] = v8[2]; /*0x6e425b*/
  IndexByName = BuildingTypeClass::FindIndexByName((BuildingTypeClass *)&this->TActionClass_field_54); /*0x6e425f*/
  if ( IndexByName < 0 ) /*0x6e4266*/
    return 0; /*0x6e4266*/
  if ( IndexByName > dword_A83C78 ) /*0x6e426e*/
    return 0; /*0x6e426e*/
  v10 = *((_DWORD *)dword_A83C6C + IndexByName); /*0x6e4276*/
  if ( !v10 ) /*0x6e427b*/
    return 0; /*0x6e427b*/
  v11 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v10 + 140))(v10, v5); /*0x6e4280*/
  v12 = v11; /*0x6e4286*/
  if ( !v11 ) /*0x6e428a*/
    return 0; /*0x6e428a*/
  if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)v11 + 1168))(v11, v15, 0) ) /*0x6e4297*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 248))(v12); /*0x6e42a5*/
    return 0; /*0x6e42b2*/
  }
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v12 + 1244))(v12, 0); /*0x6e42bb*/
  return 1; /*0x6e42ab*/
}
} // namespace gamemd

// 0x6E4360
namespace gamemd {
char TActionClass::executeSpyPlaneAction(int a2, int a3, int a4, IUnknown * aP4)
{
  int v5; // eax

  if ( !a2 ) /*0x6e4366*/
    return 0; /*0x6e4366*/
  v5 = *(_DWORD *)&this->pad_6E[34]; /*0x6e4368*/
  if ( v5 < 0 || v5 > *(_DWORD *)(a2 + 612) ) /*0x6e4378*/
    return 0; /*0x6e438d*/
  SuperClass::ResetRechargeTime(*(SuperClass **)(*(_DWORD *)(a2 + 600) + 4 * v5)); /*0x6e4383*/
  return 1; /*0x6e438a*/
}
} // namespace gamemd

// 0x6E43A0
namespace gamemd {
char TActionClass::executeChronoSphereAction(int a2, int a3, int a4, IUnknown * aP4)
{
  int v5; // eax

  if ( !a2 ) /*0x6e43a6*/
    return 0; /*0x6e43a6*/
  v5 = *(_DWORD *)&this->pad_6E[34]; /*0x6e43a8*/
  if ( v5 < 0 || v5 > *(_DWORD *)(a2 + 612) ) /*0x6e43b8*/
    return 0; /*0x6e43cd*/
  SuperClass::Reset(*(SuperClass **)(*(_DWORD *)(a2 + 600) + 4 * v5)); /*0x6e43c3*/
  return 1; /*0x6e43ca*/
}
} // namespace gamemd

// 0x6E43E0
namespace gamemd {
char TActionClass::executeWeatherStormAction(unsigned int * a1, int a3, int a4, IUnknown * aP4)
{
  TActionClass *v5; // esi
  _DWORD *v7; // eax

  v5 = (TActionClass *)a1; /*0x6e43e1*/
  if ( !a1 ) /*0x6e43e7*/
    return 0; /*0x6e43e9*/
  v7 = (_DWORD *)*ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &a1, (int)this->TActionClass_field_44); /*0x6e4403*/
  a1 = v7; /*0x6e440c*/
  if ( v7 == *(_DWORD **)dword_B0E680 ) /*0x6e4410*/
    return 0; /*0x6e4420*/
  TActionClass::executeGuardAction(v5, (int)v7); /*0x6e4429*/
  return 1; /*0x6e43eb*/
}
} // namespace gamemd

// 0x6E4460
namespace gamemd {
char TActionClass::executeDominatorAction(unsigned int * a1, int a3, int a4, IUnknown * aP4)
{
  TActionClass *v5; // esi
  _DWORD *v7; // eax

  v5 = (TActionClass *)a1; /*0x6e4461*/
  if ( !a1 ) /*0x6e4467*/
    return 0; /*0x6e4469*/
  v7 = (_DWORD *)*ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &a1, (int)this->TActionClass_field_44); /*0x6e4483*/
  a1 = v7; /*0x6e448c*/
  if ( v7 == *(_DWORD **)dword_B0E680 ) /*0x6e4490*/
    return 0; /*0x6e44a0*/
  TActionClass::executeHuntAction(v5, (int)v7); /*0x6e44a9*/
  return 1; /*0x6e446b*/
}
} // namespace gamemd

// 0x6E44E0
namespace gamemd {
char TActionClass::executeRevealAction(unsigned int * a1, int a3, int a4, IUnknown * aP4)
{
  TActionClass *v5; // esi
  _DWORD *v7; // eax

  v5 = (TActionClass *)a1; /*0x6e44e1*/
  if ( !a1 ) /*0x6e44e7*/
    return 0; /*0x6e44e9*/
  v7 = (_DWORD *)*ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &a1, (int)this->TActionClass_field_44); /*0x6e4503*/
  a1 = v7; /*0x6e450c*/
  if ( v7 == *(_DWORD **)dword_B0E680 ) /*0x6e4510*/
    return 0; /*0x6e4520*/
  TActionClass::executeDeployAction(v5, (int)v7); /*0x6e4529*/
  return 1; /*0x6e44eb*/
}
} // namespace gamemd

// 0x6E4560
namespace gamemd {
char TActionClass::executeEMPulseAction(int a2, int a3, int a4, IUnknown * aP4)
{
  int i; // ebp
  int v7; // edi

  if ( !a2 ) /*0x6e456c*/
    return 0; /*0x6e456e*/
  for ( i = *(unsigned int *)(a2 + 120) - 1; i >= 0; --i ) /*0x6e457a*/
  {
    v7 = *(unsigned int *)(*(unsigned int *)(a2 + 108) + 4 * i); /*0x6e4585*/
    if ( !strcmp((const char *)(*(unsigned int *)(v7 + 1312) + 36), (const char *)&this->q150) ) /*0x6e459a*/
      *(unsigned int *)(v7 + 240) = this->q240; /*0x6e45cb*/
  }
  return 1; /*0x6e4570*/
}
} // namespace gamemd

// 0x6E4630
namespace gamemd {
int TActionClass::StubReturn148()
{
  return 148; /*0x6e4635*/
}
} // namespace gamemd

// 0x6E4640
namespace gamemd {
int TActionClass::StubReturn47()
{
  return 47; /*0x6e4645*/
}
} // namespace gamemd

// 0x6E4650
namespace gamemd {
int TActionClass::Stub()
{
  return this->idxArray; /*0x6e4653*/
}
} // namespace gamemd

// 0x7268F0
namespace gamemd {
int TActionClass::executeAirstrikeAction()
{
  IDA_LOBYTE(this->TActionClass_field_44) = 1; /*0x7268f0*/
  return BuildingClass::ProcessUpgradeEffects();
}
} // namespace gamemd

// 0x726900
namespace gamemd {
void TActionClass::executeDetonateAction()
{
  IDA_LOBYTE(this->TActionClass_field_44) = 0; /*0x726900*/
}
} // namespace gamemd
