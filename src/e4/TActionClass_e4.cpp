// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/DisplayClass_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
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
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Animation_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Property_e4.hpp"
#include "e4/classes/FogOfWar_e4.hpp"
#include "e4/classes/Render_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/Random_e4.hpp"
#include "e4/classes/Return_e4.hpp"
#include "e4/classes/SuperClass_e4.hpp"
#include "e4/classes/Function_e4.hpp"
#include "e4/classes/ObjectPtr_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/SuperWeaponClass_e4.hpp"
#include "e4/classes/_w14_nocarrier_e4.hpp"
#include "e4/classes/RadarClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Process_e4.hpp"  // G42.36 C2027 supply
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers
#include "e4/classes/GlobalArray_e4.hpp"  // G57w10 D supply
#include "e4/classes/CellSystem_e4.hpp"  // G57w10 D supply
// X129: fresh-render label declarations (auto, idempotent)
extern unsigned char stru_81AFA0[1];  // data: 0x81AFA0

// 0x4FCDC0
namespace gamemd {  // G42.18 ns repair
int TActionClass::executeBuildAction()
{

  char result = this->u32_1F8; // al /*0x4fcdc0*/
  if ( !result ) /*0x4fcdc8*/
  {
    result = this->u32_1F7; /*0x4fcdca*/
    if ( !result ) /*0x4fcdd2*/
      return HouseClass::CheckWinCondition(0); /*0x4fcdd6*/
  }
  if ( this->u32_298 == -1 ) /*0x4fcde3*/
  {
    result = ((unsigned int *)&stru_A8EB00)[416]; /*0x4fcde5*/
    this->u32_298 = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416]; /*0x4fcdea*/
  }
  return result; /*0x4fcddb*/
}
}  // G42.18 ns repair
// 0x50D2D0
namespace gamemd {
int TActionClass::executeMoveAction(int a2)
{
  int result; // eax

  int i; // ebx
  for ( i = *&this->pad_6E[10] - 1; i >= 0; --i ) /*0x50d2d8*/
  {
    result = *&this->pad_55[23]; /*0x50d2e0*/
    unsigned int *v5; // esi
    v5 = *(unsigned int **)(result + 4 * i); /*0x50d2e3*/
    if ( v5[184] == a2 ) /*0x50d2ec*/
    {
      (*(void (**)(unsigned int *, int, unsigned int))(*v5 + 980))(v5, a2, 0); /*0x50d2f5*/
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
  this->u32_54FC = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416]; /*0x50da30*/
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
int sub_567F70(int * a1, int a2)
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
  unsigned int **v12; // esi
  int v13; // eax
  int v14; // ebp
  unsigned int v15; // eax
  CellClass *v16; // ecx
  CellClass *v17; // ecx
  CellClass *v18; // ecx
  CellClass *v19; // eax
  __int16 v20; // [esp+14h] [ebp-8h]
  __int16 v21; // [esp+16h] [ebp-6h]
  unsigned __int16 *v22; // [esp+20h] [ebp+4h]

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
    v12 = (unsigned int **)dword_87F924; /*0x568006*/
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
            HIWORD(v22) = v9 + v21; /*0x568045*/
            LOWORD(v22) = v10 + v20; /*0x56804a*/
            v15 = ((__int16)(v9 + v21) << 9) + (__int16)(v10 + v20); /*0x56805c*/
            if ( v15 >= 0x40000 || (v16 = (CellClass *)v12[v15]) == 0 ) /*0x56806e*/
            {
              dword_ABDC74 = (int)v22; /*0x568070*/
              v16 = &unk_ABDC50; /*0x568076*/
            }
            if ( !v16->shroudCounter ) /*0x56807b*/
            {
              if ( v15 >= 0x40000 || (v17 = (CellClass *)v12[v15]) == 0 ) /*0x568098*/
              {
                dword_ABDC74 = (int)v22; /*0x56809a*/
                v17 = &unk_ABDC50; /*0x5680a0*/
              }
              v17->shroudCounter = 1; /*0x5680a7*/
              if ( v15 >= 0x40000 || (v18 = *(CellClass **)(dword_87F924 + 4 * v15)) == 0 ) /*0x5680c5*/
              {
                dword_ABDC74 = (int)v22; /*0x5680c7*/
                v18 = &unk_ABDC50; /*0x5680cd*/
              }
              v18->copyFlags &= ~8u; /*0x5680dd*/
              if ( v15 >= 0x40000 || (v19 = *(CellClass **)(dword_87F924 + 4 * v15)) == 0 ) /*0x5680f7*/
              {
                dword_ABDC74 = (int)v22; /*0x5680f9*/
                v19 = &unk_ABDC50; /*0x5680ff*/
              }
              v19->copyFlags &= ~0x10u; /*0x56810d*/
              v12 = (unsigned int **)dword_87F924; /*0x568113*/
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

  int result; // eax
  unsigned int u32_54F0; // eax
  DisplayClass *i; // esi
  int DisplayClass_field_0x140; // eax

  result = a2;  /*0x577c90*/
  if ( a2 )
    *(unsigned char *)(*(&dword_A8022C + *(unsigned int *)(a2 + 48)) + 577) = 0;  /*0x577ca7*/  /*0x577c99*/
  if ( a2 != *(int *)((char *)&stru_A83CD9.estimatedHealth + 3) )
  {  /*0x577cb4*/
    if ( a2 )
      return result;  /*0x577cb8*/  /*0x577cb8*/
    goto LABEL_7;  /*0x577cb8*/
  }
  if ( !a2 )
LABEL_7:
    Debug::Log();  /*0x577cc4*/  /*0x577cc2*/
  HouseClass::ResetObjectOrders(0, 0);  /*0x577cd1*/
  u32_54F0 = this->u32_54F0;  /*0x577ce0*/
  *((unsigned int *)this + 67) = 1;  /*0x577ce6*/
  *((unsigned int *)this + 68) = u32_54F0;  /*0x577cf0*/
  *((unsigned int *)this + 69) = u32_54F0 - 1;  /*0x577cf9*/
  *((unsigned int *)this + 70) = (u32_54F0 << 11) + *((unsigned int *)this + 79) + 4;  /*0x577d0e*/
  for ( i = (DisplayClass *)((LayerClass *)this)->CellIteratorNext();
        i;
        i = (DisplayClass *)((LayerClass *)this)->CellIteratorNext() )
  {  /*0x577d1d*/
    DisplayClass::AdvanceFrameCounter(i);  /*0x577d21*/
    if ( i->DisplayClass_field_0x130 >= 0 )
    {  /*0x577d2e*/
      DisplayClass_field_0x140 = i->DisplayClass_field_0x140;  /*0x577d36*/
      LOBYTE(DisplayClass_field_0x140) = DisplayClass_field_0x140 & 0xFC;  /*0x577d3f*/
      i->DisplayClass_field_0x12C &= 0xFFFFFFE7;  /*0x577d41*/
      i->DisplayClass_field_0x140 = DisplayClass_field_0x140;  /*0x577d47*/
    }
  }
  (0)->UpdateReveal(0);  /*0x577d63*/
  *(unsigned char *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 576) = 0;  /*0x577d72*/
  ((FogOfWar *)&dword_87F7E8)->Render();  /*0x577d79*/
  return (*(int (**)(TActionClass *, int))(this->vfptr + 56))(this, 2);  /*0x577d88*/

}
}
// 0x578850
namespace gamemd {
int TActionClass::executeSellAction()
{

  int result; // eax
  result = (int)(this->q100); /*0x578850*/
  int v2 = this->u32_FC; // edx /*0x578856*/
  this->u32_11C = v2 + result + 1; /*0x578861*/
  this->q120 = (void *)(result + this->u32_F4 - v2); /*0x578871*/
  return result; /*0x578877*/
}
}
// 0x6AC5F0
namespace gamemd {
unsigned int * TActionClass::executeHarvestAction(int a2, MouseClass * aP2)
{

  unsigned int *result; // eax
  int v5; // esi
  unsigned int *v6; // edx
  int v7; // eax
  int v8; // edx
  int v9; // eax
  char *v10; // edx
  unsigned int *v11; // ecx

  result = (unsigned int *)dword_A8E358; /*0x6ac5f0*/
  v5 = 0; /*0x6ac5f9*/
  if ( dword_A8E358 <= 0 ) /*0x6ac601*/
  {
LABEL_5:
    v5 = 0; /*0x6ac615*/
    if ( MEMORY[0xA83CF0] <= 0 ) /*0x6ac61f*/
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
      result = MEMORY[0xA83CE4]; /*0x6ac621*/
      while ( a2 != *result ) /*0x6ac628*/
      {
        ++v5; /*0x6ac62a*/
        ++result; /*0x6ac62b*/
        if ( v5 >= MEMORY[0xA83CF0] ) /*0x6ac630*/
          goto LABEL_9; /*0x6ac630*/
      }
    }
  }
  else
  {
    v6 = dword_A8E34C; /*0x6ac603*/
    while ( *v6 != a2 ) /*0x6ac60b*/
    {
      ++v5; /*0x6ac60d*/
      ++v6; /*0x6ac60e*/
      if ( v5 >= dword_A8E358 ) /*0x6ac613*/
        goto LABEL_5; /*0x6ac613*/
    }
  }
  result = (unsigned int *)(*(int (**)(void))(*(unsigned int *)a2 + 44))(); /*0x6ac677*/
  if ( result == 15 || result == 16 ) /*0x6ac682*/
  {
    v7 = 2; /*0x6ac6d4*/
  }
  else if ( result == 1 || result == 40 || result == 2 || result == 3 ) /*0x6ac696*/
  {
    v7 = 3; /*0x6ac6cd*/
  }
  else if ( result == 6 || result == 7 ) /*0x6ac6a0*/
  {
    v7 = GetHouseTechLevel((int)result, v5) == 5; /*0x6ac6c9*/
  }
  else
  {
    if ( result != 57 && result != 32 && result != 31 ) /*0x6ac6af*/
      return result; /*0x6ac6af*/
    v7 = 1; /*0x6ac6b1*/
  }
  v8 = 997 * v7; /*0x6ac6e3*/
  v9 = 0; /*0x6ac6e6*/
  v10 = (char *)this + 4 * v8 + 5444; /*0x6ac6e8*/
  v11 = v10 + 88; /*0x6ac6ef*/
  while ( *v11 != v5 ) /*0x6ac6f4*/
  {
    ++v9; /*0x6ac6f6*/
    v11 += 13; /*0x6ac6f7*/
    if ( v9 >= 75 ) /*0x6ac6fd*/
      goto LABEL_38; /*0x6ac6fd*/
  }
  *(unsigned int *)&v10[52 * v9 + 136] = aP2 + *(unsigned int *)&MEMORY[0xA8EB00 + 416]; /*0x6ac713*/
LABEL_38:
  result = (unsigned int *)(*(unsigned int *)&MEMORY[0xA8EB00 + 416] + aP2 + 1); /*0x6ac71a*/
  this->u32_53A0 = result; /*0x6ac728*/
  return result; /*0x6ac670*/

}
}
// 0x6E0B60
namespace gamemd {
char TActionClass::ConvertHouseUnits(int a2, int _14, unsigned int *a3, int aP4)
{

  BuildingType *v5; // esi
  char v6; // bl
  int Field11; // eax
  int v8; // ebp
  int v10; // eax
  int i; // edi
  unsigned int *v12; // esi
  int v13; // esi
  int v14; // edi
  Animation *v15; // esi
  unsigned __int8 *v16; // eax

  v5 = *&this->pad_6E[34]; /*0x6e0b63*/
  v6 = 0; /*0x6e0b6d*/
  if ( !a3 ) /*0x6e0b71*/
    return 0; /*0x6e0b71*/
  if ( v5 == 8997 ) /*0x6e0b79*/
  {
    Field11 = ((Property *)a3)->GetField11(); /*0x6e0b7b*/
  }
  else
  {
    if ( v5 == (BuildingType *)-1 ) /*0x6e0b85*/
      return 0; /*0x6e0bab*/
    if ( (unsigned __int8)(v5)->IsSpecialType() ) /*0x6e0b89*/
      Field11 = (v5)->FindOwnerHouse(); /*0x6e0b94*/
    else
      Field11 = ((HouseClass *)v5)->FindOwner(); /*0x6e0b9b*/
  }
  v8 = Field11; /*0x6e0ba0*/
  if ( !Field11 ) /*0x6e0ba4*/
    return 0; /*0x6e0ba4*/
  v10 = *(unsigned int *)&stru_A8E960.random[276]; /*0x6e0bae*/
  for ( i = 0; i < *(int *)&stru_A8E960.random[276]; ++i ) /*0x6e0bb8*/
  {
    v12 = *(unsigned int **)(*(unsigned int *)&stru_A8E960.random[264] + 4 * i); /*0x6e0bbf*/
    if ( v12[135] == a2 /*0x6e0bf4*/
      && (!v12
       || (*(int (**)(unsigned int))(*v12 + 44))(*(unsigned int *)(*(unsigned int *)&stru_A8E960.random[264] + 4 * i)) != 6
       || (v13 = v12[328]) == 0
       || !*(unsigned char *)(v13 + 5491) && !*(unsigned char *)(v13 + 5492)) )
    {
      (*(void (**)(unsigned int, int, unsigned int))(**(unsigned int **)(*(unsigned int *)&stru_A8E960.random[264] + 4 * i) + 980))( /*0x6e0c0b*/
        *(unsigned int *)(*(unsigned int *)&stru_A8E960.random[264] + 4 * i),
        v8,
        0);
      v6 = 1; /*0x6e0c11*/
    }
    v10 = *(unsigned int *)&stru_A8E960.random[276]; /*0x6e0c13*/
  }
  v14 = 0; /*0x6e0c1d*/
  if ( v10 > 0 ) /*0x6e0c21*/
  {
    do /*0x6e0c89*/
    {
      v15 = *(Animation **)(*(unsigned int *)&stru_A8E960.random[264] + 4 * v14); /*0x6e0c2c*/
      if ( *(unsigned int *)&v15[540] == a2 ) /*0x6e0c35*/
      {
        if ( v15 ) /*0x6e0c39*/
        {
          if ( (*(int (**)(unsigned int))(*(unsigned int *)v15 + 44))(*(unsigned int *)(*(unsigned int *)&stru_A8E960.random[264] /*0x6e0c45*/
                                                                               + 4 * v14)) == 6 )
          {
            v16 = *(unsigned __int8 **)&v15[1312]; /*0x6e0c47*/
            if ( v16 ) /*0x6e0c4f*/
            {
              if ( v16[5491] || v16[5492] ) /*0x6e0c5b*/
              {
                (*(void (**)(unsigned int, int, unsigned int))(**(unsigned int **)(*(unsigned int *)&stru_A8E960.random[264] + 4 * v14) /*0x6e0c72*/
                                                            + 980))(
                  *(unsigned int *)(*(unsigned int *)&stru_A8E960.random[264] + 4 * v14),
                  v8,
                  0);
                (v15)->UpdateBuildingAnimations(); /*0x6e0c7a*/
                v6 = 1; /*0x6e0c7f*/
              }
            }
          }
        }
      }
      ++v14; /*0x6e0c86*/
    }
    while ( v14 < *(int *)&stru_A8E960.random[276] ); /*0x6e0c89*/
  }
  return v6; /*0x6e0ba6*/

}
}
// 0x6E1CC0
namespace gamemd {
AnimClass * * TActionClass::executeRetreatAction(AbstractClass * aP1, int a3, int a4, AbstractClass * aP4)
{


  __int16 v7[2]; // [esp+0h] [ebp-14h] BYREF
  int v8; // [esp+4h] [ebp-10h] BYREF
  *(unsigned int *)v7 = *((char *)dword_A8B230)->Get_Waypoint_Location(&v8, (int)this->TActionClass_field_44); /*0x6e1cdb*/
  int GroundHeight; // [esp+10h] [ebp-4h]
  GroundHeight = 0; /*0x6e1cdf*/
  int v9[2]; // [esp+8h] [ebp-Ch] BYREF
  v9[1] = (v7[1] << 8) + 128; /*0x6e1d00*/
  v9[0] = (v7[0] << 8) + 128; /*0x6e1d0a*/
  GroundHeight = Cell::GetGroundHeight((unsigned int *)(v9)); /*0x6e1d13*/
  if ( (*((unsigned int *)((CellCoord *)&DataGlobal_87F7E8)->To_CellObj(v7) + 80) & 0x100) != 0 /*0x6e1d49*/
    || (*((unsigned int *)((CellCoord *)&DataGlobal_87F7E8)->To_CellObj(v7) + 80) & 0x400) != 0 )
  {
    GroundHeight += dword_B0E6D4; /*0x6e1d57*/
  }
  AnimClass *v5; // eax
  v5 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x6e1d60*/
  if ( v5 ) /*0x6e1d6a*/
    *((unsigned char *)AnimClass::ctor( /*0x6e1d92*/                  v5,(int *)(*(void **)(*(unsigned int *)&g_RulesClass_Instance + 5244)),                  v9,                  0,                  1,                  (void *)0x600,                  0,                  0)
  + 408) = 1;
  else
    MEMORY[0x198] = 1; /*0x6e1da3*/
  return (gamemd::AnimClass **)(1); /*0x6e1d9b*/

}
}
// 0x6E2290
namespace gamemd {
char TActionClass::executeEscortAction(int a2, int a3, int a4, int aP4)
{

  AnimClass *v6; // eax
  __int16 v8[2]; // [esp+4h] [ebp-14h] BYREF
  int v9; // [esp+8h] [ebp-10h] BYREF
  int v10[2]; // [esp+Ch] [ebp-Ch] BYREF
  int GroundHeight; // [esp+14h] [ebp-4h]

  *(unsigned int *)v8 = *((char *)dword_A8B230)->Get_Waypoint_Location(&v9, this->TActionClass_field_44);  /*0x6e22ae*/
  GroundHeight = 0;  /*0x6e22b2*/
  v10[1] = (v8[1] << 8) + 128;  /*0x6e22d3*/
  v10[0] = (v8[0] << 8) + 128;  /*0x6e22dd*/
  GroundHeight = Cell::GetGroundHeight(v10);  /*0x6e22e6*/
  if ( (*((unsigned int *)((CellCoord *)&dword_87F7E8)->To_CellObj(v8) + 80) & 0x100) != 0
    || (*((unsigned int *)((CellCoord *)&dword_87F7E8)->To_CellObj(v8) + 80) & 0x400) != 0 )
  {  /*0x6e231c*/
    GroundHeight += dword_B0E6D4;  /*0x6e232a*/
  }
  v6 = (AnimClass *)__2_YAPAXI_Z(0x1C8u);  /*0x6e2333*/
  if ( v6 )
    *((unsigned char *)AnimClass::ctor(
                 v6,
                 *((void **)dword_8B4154 + *(unsigned int *)&this->pad_6E[34]),
                 v10,
                 0,
                 1,
                 (void *)0x600,
                 0,
                 0)
    + 408) = 1;  /*0x6e2368*/  /*0x6e233d*/
  else
    MEMORY[0x198] = 1;  /*0x6e237b*/
  return 1;  /*0x6e2371*/

}
}
// 0x6E2390
namespace gamemd {
char TActionClass::CreateWeaponImpactAtWaypoint(int a2, int a3, int a4, int aP4)
{

  int v6; // edi
  unsigned int *v7; // esi
  int v8; // ebx
  CellClass *v9; // eax
  void *WarheadVersusMultiplier; // esi
  AnimClass *v11; // ebp
  void *v12; // eax
  __int16 v14[2]; // [esp+10h] [ebp-14h] BYREF
  int v15; // [esp+14h] [ebp-10h] BYREF
  unsigned int v16; // [esp+18h] [ebp-Ch] BYREF
  int v17; // [esp+1Ch] [ebp-8h]
  int GroundHeight; // [esp+20h] [ebp-4h]

  *(unsigned int *)v14 = *((char *)dword_A8B230)->Get_Waypoint_Location(&v15, this->TActionClass_field_44); /*0x6e23b1*/
  GroundHeight = 0; /*0x6e23b5*/
  v17 = (v14[1] << 8) + 128; /*0x6e23d6*/
  v16 = (v14[0] << 8) + 128; /*0x6e23e0*/
  GroundHeight = Cell::GetGroundHeight(&v16); /*0x6e23e9*/
  if ( (*((unsigned int *)((CellCoord *)&dword_87F7E8)->To_CellObj(v14) + 80) & 0x100) != 0 /*0x6e241f*/
    || (*((unsigned int *)((CellCoord *)&dword_87F7E8)->To_CellObj(v14) + 80) & 0x400) != 0 )
  {
    GroundHeight += dword_B0E6D4; /*0x6e242d*/
  }
  v6 = *&this->pad_6E[34]; /*0x6e2431*/
  v7 = (unsigned int *)*((unsigned int *)g_WeaponTypeConfig + v6); /*0x6e2440*/
  v8 = v7[41]; /*0x6e2449*/
  v9 = ((Coord *)&dword_87F7E8)->To_Cell(&v16); /*0x6e244f*/
  WarheadVersusMultiplier = (void *)GetWarheadVersusMultiplier(v8, v7[43], v9->landType, &v16); /*0x6e246d*/
  if ( WarheadVersusMultiplier ) /*0x6e2471*/
  {
    v11 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x6e247d*/
    if ( v11 ) /*0x6e2484*/
    {
      v12 = (void *)Return::HRESULT_Fail(v16, v17, GroundHeight); /*0x6e24a1*/
      (v11)->ctor(WarheadVersusMultiplier, &v16, 0, 1, (void *)0x2600, v12, 0); /*0x6e24b8*/
    }
  }
  CreateSmokeEffectAt(v8, *(unsigned int *)(*((unsigned int *)g_WeaponTypeConfig + v6) + 172), v16, v17, GroundHeight, 0, 0); /*0x6e24ea*/
  PlaySoundEffectAt(&v16, v8, 0, *(unsigned int *)(*((unsigned int *)g_WeaponTypeConfig + v6) + 172), 1, 0); /*0x6e250b*/
  return 1; /*0x6e2510*/

}
}
// 0x6E2C40
namespace gamemd {
ScenarioClass * * TActionClass::SpawnMeteorShower(AbstractClass * aP1, int a3, int a4, AbstractClass * aP4)
{


  __int16 v17[2]; // [esp+Ch] [ebp-24h] BYREF
  int v19; // [esp+14h] [ebp-1Ch] BYREF
  *(unsigned int *)v17 = *((char *)dword_A8B230)->Get_Waypoint_Location(&v19, (int)this->TActionClass_field_44); /*0x6e2c60*/
  int GroundHeight; // [esp+20h] [ebp-10h]
  GroundHeight = 0; /*0x6e2c64*/
  int v21; // [esp+1Ch] [ebp-14h]
  v21 = (v17[1] << 8) + 128; /*0x6e2c85*/
  int v20; // [esp+18h] [ebp-18h] BYREF
  v20 = (v17[0] << 8) + 128; /*0x6e2c8f*/
  GroundHeight = Cell::GetGroundHeight((unsigned int *)(&v20)); /*0x6e2c98*/
  if ( (*((unsigned int *)((CellCoord *)&DataGlobal_87F7E8)->To_CellObj(v17) + 80) & 0x100) != 0 /*0x6e2cce*/
    || (*((unsigned int *)((CellCoord *)&DataGlobal_87F7E8)->To_CellObj(v17) + 80) & 0x400) != 0 )
  {
    GroundHeight += dword_B0E6D4; /*0x6e2cdc*/
  }
  int v6; // esi
  v6 = dword_842AFC[*&this->pad_6E[34]] /*0x6e2d0a*/
  + (int)abs32(((Random *)&dword_A8B230[14].NeedsSaveOrLink)->State()) % 3;
  int String; // ebp
  String = GlobalArray::FindString(&stru_842C20); /*0x6e2d1b*/
  v19 = GlobalArray::FindString(&stru_842C14); /*0x6e2d22*/
  int v8 = 70 * v6; // edi /*0x6e2d32*/
  if ( v6 <= 0 ) /*0x6e2d36*/
    return (gamemd::ScenarioClass **)(1); /*0x6e2e0e*/
  int v18; // [esp+10h] [ebp-20h]
  v18 = v6; /*0x6e2d3d*/
  do /*0x6e2dfa*/
  {
    Random *p_NeedsSaveOrLink; // esi
    p_NeedsSaveOrLink = (Random *)&dword_A8B230[14].NeedsSaveOrLink; /*0x6e2d46*/
    int v10; // ebx
    v10 = ((Random *)&dword_A8B230[14].NeedsSaveOrLink)->State() % v8; /*0x6e2d58*/
    int v11; // eax
    v11 = (p_NeedsSaveOrLink)->State(); /*0x6e2d5a*/
    int v23[2]; // [esp+24h] [ebp-Ch] BYREF
    v23[0] = v10 + v20; /*0x6e2d6d*/
    int v24; // [esp+2Ch] [ebp-4h]
    v24 = GroundHeight; /*0x6e2d77*/
    v23[1] = v11 % v8 + v21; /*0x6e2d7f*/
    v24 = Cell::GetGroundHeight((unsigned int *)(v23)); /*0x6e2d93*/
    AnimClass *v12; // esi
    v12 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x6e2d9c*/
    if ( v12 ) /*0x6e2da3*/
    {
      signed int v14; // eax
      v14 = abs32(((Random *)&dword_A8B230[14].NeedsSaveOrLink)->State()) & 0x80000001; /*0x6e2dba*/
      bool v13; // zf
      v13 = v14 == 0; /*0x6e2dba*/
      if ( v14 < 0 ) /*0x6e2dbf*/
        v13 = (((unsigned char)v14 - 1) | 0xFFFFFFFE) == -1; /*0x6e2dc5*/
      int v15 = String; // eax /*0x6e2dc6*/
      if ( v13 ) /*0x6e2dc8*/
        v15 = v19; /*0x6e2dca*/
      (v12)->ctor((int *)(*(void **)(dword_8B4154 + 4 * v15)), v23, 0, 1, (void *)0x600, 0, 0); /*0x6e2dec*/
    }
    --v18; /*0x6e2df6*/
  }
  while ( v18 ); /*0x6e2dfa*/
  return (gamemd::ScenarioClass **)(1); /*0x6e2e01*/

}
}
// 0x6E36E0
namespace gamemd {
char TActionClass::executeParadropAction(int a2, int a3, int a4, int aP4)
{

  void *v5; // eax
  int *v6; // eax
  int v7; // esi
  int v8; // edi
  int v9; // ebx
  AnimClass *v10; // eax
  char *v11; // edi
  int v12; // ebx
  __int16 v13; // cx
  unsigned int *i; // esi
  __int16 v16[2]; // [esp+Ch] [ebp-18h] BYREF
  int v17; // [esp+10h] [ebp-14h] BYREF
  __int16 v18[2]; // [esp+14h] [ebp-10h] BYREF
  int v19[3]; // [esp+18h] [ebp-Ch] BYREF

  *(unsigned int *)v16 = *((char *)dword_A8B230)->Get_Waypoint_Location(&v17, (int)this->TActionClass_field_44); /*0x6e3706*/
  v5 = ((CellCoord *)&DataGlobal_87F7E8)->To_CellObj(v16); /*0x6e370a*/
  v6 = (int *)(*(int (**)(void *, int *))(*(unsigned int *)v5 + 72))(v5, v19); /*0x6e3718*/
  v7 = *v6; /*0x6e371b*/
  v8 = v6[1]; /*0x6e3722*/
  v9 = v6[2]; /*0x6e3725*/
  v10 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x6e3728*/
  if ( v10 ) /*0x6e3732*/
  {
    v19[2] = v9 + 5; /*0x6e373b*/
    v19[0] = v7; /*0x6e3752*/
    v19[1] = v8; /*0x6e3756*/
    AnimClass::ctor( /*0x6e3764*/
      v10,
      *(void **)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 840),
      v19,
      0,
      1,
      (void *)0x600,
      0,
      0);
  }
  v11 = &g_MissionQueueFrame.waypoints[2150]; /*0x6e3772*/
  v12 = 9; /*0x6e3777*/
  do /*0x6e37da*/
  {
    v13 = v11->q002_; /*0x6e377e*/
    (v17) = ((v17) & ~0xFFFF) | ((*(unsigned short *)v11 + v16[0]) & 0xFFFF); /*0x6e378a*/
    (v17) = ((v17) & ~(0xFFFF << 16)) | (((v16[1] + v13) & 0xFFFF) << 16); /*0x6e378f*/
    *(unsigned int *)v18 = v17; /*0x6e37a2*/
    for ( i = (unsigned int *)*((unsigned int *)((CellCoord *)&DataGlobal_87F7E8)->To_CellObj(v18) + 57); /*0x6e37b3*/
          i;
          i = (unsigned int *)i[12] )
    {
      (*(void (**)(unsigned int *, unsigned int, unsigned int, unsigned int))(*i + 340))( /*0x6e37c9*/
        i,
        *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4072),
        0,
        0);
    }
    v11 += 4; /*0x6e37d6*/
    --v12; /*0x6e37d9*/
  }
  while ( v12 ); /*0x6e37da*/
  return 1; /*0x6e37dc*/

}
}
// 0x6E4150
namespace gamemd {
char TActionClass::executeGeneticMutatorAction(int a2, int a3, int a4, int aP4)
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
    while ( strcmp((const char *)(*(unsigned int *)v8 + 36), p_TActionClass_field_54) ) /*0x6e41ab*/
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
    (TActionClass *)&DataGlobal_87F7E8,
    *(unsigned int *)(stru_A8EB00.ObjectTypeClass[1] + 4 * v5),
    *&this->q06E[34]);
  return 1; /*0x6e41c3*/

}
}
// 0x6E42D0
namespace gamemd {
char TActionClass::executeIronCurtainAction(int a2, int a3, int a4, int aP4)
{

  int v5; // eax
  unsigned __int8 *v6; // eax

  if ( !a2 ) /*0x6e42d6*/
    return 0; /*0x6e42d6*/
  v5 = *&this->pad_6E[34]; /*0x6e42d8*/
  if ( v5 < 0 ) /*0x6e42e0*/
    return 0; /*0x6e42e0*/
  if ( v5 > a2->q264 ) /*0x6e42ec*/
    return 0; /*0x6e42ec*/
  v6 = *(unsigned __int8 **)(a2->q258 + 4 * v5); /*0x6e42f4*/
  if ( !v6[109] || this->TActionClass_field_48 > 0x64u ) /*0x6e4303*/
    return 0; /*0x6e4317*/
  ((int)v6)->SetCharge(this->TActionClass_field_48); /*0x6e430d*/
  return 1; /*0x6e4314*/

}
}
// 0x6E4320
namespace gamemd {
char TActionClass::executeNukeAction(int a2, int a3, int a4, int aP4)
{


  if ( !a2 ) /*0x6e4326*/
    return 0; /*0x6e4326*/
  int v5; // eax
  v5 = (int)(*&this->pad_6E[34]); /*0x6e4328*/
  if ( v5 < 0 || v5 > a2->q264 ) /*0x6e433c*/
    return 0; /*0x6e4355*/
  (*(SuperClass **)(a2->TActionClass_field_48 + 4 * v5))->SetRechargeTime((int)this->TActionClass_field_48); /*0x6e434b*/
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

  ((AbstractClass *)this)->Constructor(); /*0x71e6a4*/
  this->idxArray = -1; /*0x71e6ab*/
  this->TActionClass_field_28 = 0; /*0x71e6b2*/
  this->TActionClass_field_2C = 0; /*0x71e6b5*/
  this->TActionClass_field_30 = 0; /*0x71e6b8*/
  LOBYTE(this->TActionClass_field_38) = 0; /*0x71e6bb*/
  *&this->TActionClass_field_54 = 0; /*0x71e6be*/
  /* X11: ptr_0 install elided (base-interface slot, RHS g_ptr_7F554C) */  /*0x71e6c1*/
  /* X11: ptr_0 install elided (implicit via TEventClass virtuals 0x71e6c7) */
  /* X11: ptr_0 install elided (implicit via TEventClass virtuals 0x71e6ce) */
  /* X11: ptr_0 install elided (implicit via TEventClass virtuals 0x71e6d5) */
  v2 = DataGlobal_B0E840[2254]; /*0x71e6dc*/
  if ( DataGlobal_B0E840[2254] < DataGlobal_B0E840[2252] /*0x71e71a*/
    || (BYTE1(DataGlobal_B0E840[2253]) || !DataGlobal_B0E840[2252])
    && DataGlobal_B0E840[2255] > 0
    && (v3 = (*(int (**)(int *, int, unsigned int))(DataGlobal_B0E840[2250] + 8))(
               &DataGlobal_B0E840[2250],
               DataGlobal_B0E840[2252] + DataGlobal_B0E840[2255],
               0),
        v2 = DataGlobal_B0E840[2254],
        v3) )
  {
    DataGlobal_B0E840[2254] = v2 + 1; /*0x71e71f*/
    *(unsigned int *)(DataGlobal_B0E840[2251] + 4 * v2) = this; /*0x71e72b*/
    v2 = DataGlobal_B0E840[2254]; /*0x71e72e*/
  }
  v4 = 0; /*0x71e734*/
  if ( v2 <= 0 ) /*0x71e738*/
  {
    LABEL_11:
    v4 = -1; /*0x71e74c*/
  }
  else
  {
    v5 = (TActionClass **)DataGlobal_B0E840[2251]; /*0x71e73a*/
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
    || (BYTE1(g_BuildingLoadQueue_Array.align_E24[0]) || !g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2])
    && g_BuildingLoadQueue_Array.GateCloseDelay[1] > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[0] + 8))(
         g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2,
         g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2] + g_BuildingLoadQueue_Array.GateCloseDelay[1],
         0) )
  {
    v6 = g_BuildingLoadQueue_Array.GateCloseDelay[0]++; /*0x71e793*/
    *(unsigned int *)(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[1] + 4 * v6) = this; /*0x71e7a2*/
  }
  if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x71e7d9*/
    || (BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
    && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
         &g_BuildingLoadQueue_Array.LightVisibility,
         g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
         0) )
  {
    v7 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x71e7e6*/
    *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v7) = this; /*0x71e7f5*/
  }
  this->TActionClass_field_34 = 0; /*0x71e7f8*/
  return (int)this; /*0x71e7fd*/

}
}
// 0x50D290
namespace gamemd {
int TActionClass::executeAttackAction(int a2)
{
  int result; // eax

  int i; // edi
  unsigned int *v4; // esi
  for ( i = *(unsigned int *)(a2 + 120) - 1; i >= 0; v4[179] = this ) /*0x50d29d*/
  {
    v4 = *(unsigned int **)(*(unsigned int *)(a2 + 108) + 4 * i); /*0x50d2a6*/
    result = (*(int (**)(unsigned int *, TActionClass *, unsigned int))(*v4 + 980))(v4, this, 0); /*0x50d2ad*/
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

  void *TActionClass_field_28; // eax
  TActionClass_field_28 = this->TActionClass_field_28; /*0x6dd2c0*/
  if ( TActionClass_field_28 == (void *)a2 ) /*0x6dd2c9*/
    this->TActionClass_field_28 = (void *)TActionClass_field_28->TActionClass_field_28; /*0x6dd2ce*/
  int result = 0; // eax /*0x6dd2d5*/
  if ( this->TActionClass_field_30 == (void *)a2 ) /*0x6dd2d9*/
    this->TActionClass_field_30 = 0; /*0x6dd2db*/
  if ( this->TActionClass_field_50 == (void *)a2 ) /*0x6dd2e1*/
    this->TActionClass_field_50 = 0; /*0x6dd2e3*/
  if ( this->TActionClass_field_4C == (void *)a2 ) /*0x6dd2ec*/
    this->TActionClass_field_4C = 0; /*0x6dd2ee*/
  return result; /*0x6dd2f1*/
}
} // namespace gamemd

// 0x6E0AA0
namespace gamemd {
char TActionClass::executeEnterAction(int a2, int _10, unsigned int *a3, int aP4)
{

  BuildingType *v5; // esi
  int Field11; // eax
  int v7; // edi
  char v9; // bl
  int i; // ebp
  LinkedList **v11; // esi
  LinkedList *v12; // ecx

  v5 = *&this->pad_6E[34]; /*0x6e0aa1*/
  if ( !a3 ) /*0x6e0aae*/
    return 0; /*0x6e0aae*/
  if ( v5 == 8997 ) /*0x6e0ab6*/
  {
    Field11 = ((Property *)a3)->GetField11(); /*0x6e0ab8*/
  }
  else
  {
    if ( v5 == (BuildingType *)-1 ) /*0x6e0ac2*/
      return 0; /*0x6e0ae7*/
    if ( (unsigned __int8)(v5)->IsSpecialType() ) /*0x6e0ac6*/
      Field11 = (v5)->FindOwnerHouse(); /*0x6e0ad1*/
    else
      Field11 = ((HouseClass *)v5)->FindOwner(); /*0x6e0ad8*/
  }
  v7 = Field11; /*0x6e0add*/
  if ( !Field11 ) /*0x6e0ae1*/
    return 0; /*0x6e0ae1*/
  v9 = 0; /*0x6e0af1*/
  for ( i = 0; i < *(int *)&stru_A8E960.random[276]; ++i ) /*0x6e0af7*/
  {
    v11 = *(LinkedList ***)(*(unsigned int *)&stru_A8E960.random[264] + 4 * i); /*0x6e0afe*/
    if ( *((unsigned char *)v11 + 144) ) /*0x6e0b01*/
    {
      if ( *((unsigned char *)v11 + 116) ) /*0x6e0b0b*/
      {
        if ( !*((unsigned char *)v11 + 129) ) /*0x6e0b12*/
        {
          v12 = v11[13]; /*0x6e0b1c*/
          if ( v12 ) /*0x6e0b21*/
          {
            if ( (unsigned __int8)LinkedList::Contains(v12, (int)a3) ) /*0x6e0b28*/
            {
              ((void (*)(LinkedList **, int, unsigned int))(*v11)[81].Tail[1])(v11, v7, 0); /*0x6e0b38*/
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
char TActionClass::executeCaptureAction(void *a1, int _C, unsigned int *a3, int aP4)
{

  HouseClass *v5; // esi
  int Field11; // eax

  v5 = *&this->pad_6E[34]; /*0x6e0ca1*/
  if ( !a3 ) /*0x6e0cad*/
    return 0; /*0x6e0cad*/
  if ( v5 == 8997 ) /*0x6e0cb5*/
  {
    Field11 = ((Property *)a3)->GetField11(); /*0x6e0cb7*/
  }
  else
  {
    if ( v5 == (HouseClass *)-1 ) /*0x6e0cc1*/
      return 0; /*0x6e0ce3*/
    if ( (unsigned __int8)(v5)->IsSpecialType() ) /*0x6e0cc5*/
      Field11 = (v5)->FindOwnerHouse(); /*0x6e0cd0*/
    else
      Field11 = (v5)->FindOwner(); /*0x6e0cd7*/
  }
  if ( !Field11 ) /*0x6e0cde*/
    return 0; /*0x6e0cde*/
  ((TActionClass *)a1)->executeAttackAction(Field11); /*0x6e0ceb*/
  return 1; /*0x6e0ce2*/

}
} // namespace gamemd

// 0x6E0D00
namespace gamemd {
char TActionClass::executeSabotageAction(unsigned int *a1, int _C, unsigned int *a3, int aP4)
{

  HouseClass *v5; // esi
  int Field11; // eax

  v5 = *&this->pad_6E[34]; /*0x6e0d01*/
  if ( !a3 ) /*0x6e0d0d*/
    return 0; /*0x6e0d0d*/
  if ( v5 == 8997 ) /*0x6e0d15*/
  {
    Field11 = ((Property *)a3)->GetField11(); /*0x6e0d17*/
  }
  else
  {
    if ( v5 == (HouseClass *)-1 ) /*0x6e0d21*/
      return 0; /*0x6e0d43*/
    if ( (unsigned __int8)(v5)->IsSpecialType() ) /*0x6e0d25*/
      Field11 = (v5)->FindOwnerHouse(); /*0x6e0d30*/
    else
      Field11 = (v5)->FindOwner(); /*0x6e0d37*/
  }
  if ( !Field11 ) /*0x6e0d3e*/
    return 0; /*0x6e0d3e*/
  ((TActionClass *)a1)->executeMoveAction(Field11); /*0x6e0d4b*/
  return 1; /*0x6e0d42*/

}
} // namespace gamemd

// 0x6E0FE0
namespace gamemd {
char TActionClass::RevealWaypointArea(int a2, int a3, int a4, int aP4)
{

  int v5; // edi

  if ( dword_A83D4C->visionary ) /*0x6e0fe8*/
    return 1; /*0x6e116a*/
  int v8; // [esp+0h] [ebp-14h] BYREF
  __int16 v11[4]; // [esp+Ch] [ebp-8h] BYREF
  *(unsigned int *)v11 = *((char *)dword_A8B230)->Get_Waypoint_Location(&v8, *&this->pad_6E[34]); /*0x6e101b*/
  if ( (*((unsigned int *)((CellCoord *)&DataGlobal_87F7E8)->To_CellObj(v11) + 80) & 0x100) != 0 /*0x6e1047*/
    || (*((unsigned int *)((CellCoord *)&DataGlobal_87F7E8)->To_CellObj(v11) + 80) & 0x400) != 0 )
  {
    v5 = 4; /*0x6e104d*/
  }
  else
  {
    v5 = 0; /*0x6e1049*/
  }
  int v6; // esi
  v6 = v5 + *((char *)((CellCoord *)&DataGlobal_87F7E8)->To_CellObj(v11) + 283); /*0x6e1068*/
  int v10; // [esp+8h] [ebp-Ch]
  v10 = v6 * dword_B0E6E0; /*0x6e10b2*/
  int v9; // [esp+4h] [ebp-10h]
  v9 = ((__int16)(v11[1] - v6 / 2) << 8) + 128; /*0x6e10c1*/
  v8 = ((__int16)(v11[0] - v6 / 2) << 8) + 128; /*0x6e10cd*/
  MapClass::RevealArea1( /*0x6e10e5*/
    (MapClass *)&DataGlobal_87F7E8,
    &v8,
    *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 1580),
    dword_A83D4C,
    0,
    0,
    0,
    1,
    0);
  v8 = ((__int16)(v11[0] - v6 / 2) << 8) + 128; /*0x6e1126*/
  v10 = v6 * dword_B0E6E0; /*0x6e1135*/
  v9 = ((__int16)(v11[1] - v6 / 2) << 8) + 128; /*0x6e1143*/
  MapClass::RevealArea1( /*0x6e115b*/
    (MapClass *)&DataGlobal_87F7E8,
    &v8,
    *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 1580),
    dword_A83D4C,
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
char TActionClass::RevealTileTypeAtWaypoint(int a2, int a3, int a4, int aP4)
{

  __int16 *Waypoint_Location; // eax
  int TileIndex; // ebp
  unsigned int *v7; // esi
  __int16 *v8; // ebx
  __int16 v9; // cx
  int v10; // esi
  __int16 v11; // ax
  __int16 v12; // bx
  int v14; // [esp+8h] [ebp-1Ch] BYREF
  int v15[3]; // [esp+Ch] [ebp-18h] BYREF
  int v16[3]; // [esp+18h] [ebp-Ch] BYREF

  if ( MEMORY[0xA83D4C]->__pad_140[256] ) /*0x6e11c8*/
    return 1; /*0x6e11c8*/
  Waypoint_Location = (__int16 *)ScenarioClass::Get_Waypoint_Location( /*0x6e11ee*/
                                   (char *)dword_A8B230,
                                   &v14,
                                   *&this->q06E[34]);
  TileIndex = ((MapClass *)&DataGlobal_87F7E8)->GetTileIndex(Waypoint_Location, 1, 0); /*0x6e1203*/
  ((TActionClass *)&DataGlobal_87F7E8)->executeSellAction(); /*0x6e1205*/
  v7 = MapClass::SpiralSearch((MapClass *)&DataGlobal_87F7E8); /*0x6e1214*/
  if ( !v7 ) /*0x6e1218*/
    return 1; /*0x6e1327*/
  do /*0x6e1314*/
  {
    v8 = (__int16 *)(v7 + 9); /*0x6e1220*/
    if ( ((MapClass *)&DataGlobal_87F7E8)->GetTileIndex((__int16 *)v7 + 18, 1, 0) == TileIndex ) /*0x6e1234*/
    {
      v9 = *((unsigned short *)v7 + 19); /*0x6e1244*/
      v10 = *((char *)v7 + 283) / 2; /*0x6e124c*/
      v15[0] = ((__int16)(*v8 - v10 / 2) << 8) + 128; /*0x6e1284*/
      v15[1] = ((__int16)(v9 - v10 / 2) << 8) + 128; /*0x6e128f*/
      v15[2] = v10 * dword_B0E6E0; /*0x6e12a2*/
      MapClass::RevealArea1((MapClass *)&DataGlobal_87F7E8, v15, 2, MEMORY[0xA83D4C], 0, 0, 0, 1, 0); /*0x6e12a6*/
      v11 = *v8; /*0x6e12b1*/
      v12 = v8[1] - v10 / 2; /*0x6e12be*/
      v16[2] = v10 * dword_B0E6E0; /*0x6e12d3*/
      v16[0] = ((__int16)(v11 - v10 / 2) << 8) + 128; /*0x6e12ea*/
      v16[1] = (v12 << 8) + 128; /*0x6e12f5*/
      MapClass::RevealArea1((MapClass *)&DataGlobal_87F7E8, v16, 2, MEMORY[0xA83D4C], 0, 0, 0, 1, 1); /*0x6e1301*/
    }
    v7 = MapClass::SpiralSearch((MapClass *)&DataGlobal_87F7E8); /*0x6e1310*/
  }
  while ( v7 ); /*0x6e1314*/
  return 1; /*0x6e131c*/

}
} // namespace gamemd

// 0x6E1780
namespace gamemd {
char TActionClass::PlayAudioAtRandomWP(int a2, int a3, int a4, int a5)
{


  int v5 = 0; // esi /*0x6e178a*/
  int v7 = 0; // edi /*0x6e178e*/
  unsigned int *v8; // ebx
  unsigned int v15[100]; // [esp+20h] [ebp-190h] BYREF
  v8 = v15; /*0x6e1790*/
  do /*0x6e17cc*/
  {
    if ( (unsigned __int8)((char *)dword_A8B230)->Is_Waypoint_Valid(v7) ) /*0x6e179b*/
    {
      ++v5; /*0x6e17b7*/
      int v14; // [esp+1Ch] [ebp-194h] BYREF
      *v8++ = *((char *)dword_A8B230)->Get_Waypoint_Location(&v14, v7); /*0x6e17b8*/
      if ( v5 == 400 ) /*0x6e17c3*/
        break; /*0x6e17c3*/
    }
    ++v7; /*0x6e17c5*/
  }
  while ( v7 < 702 ); /*0x6e17cc*/
  __int16 *v9; // ecx
  v9 = (__int16 *)&v15[Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v5 - 1)]; /*0x6e17e3*/
  int v10; // eax
  v10 = (v9[1] << 8) + 128; /*0x6e1800*/
  unsigned int v13[3]; // [esp+10h] [ebp-1A0h] BYREF
  v13[0] = (*v9 << 8) + 128; /*0x6e1805*/
  int v11 = *&this->pad_6E[34]; // ecx /*0x6e1809*/
  v13[1] = v10; /*0x6e180f*/
  v13[2] = 0; /*0x6e1813*/
  PlayAudioAt2(v11, v13, 0); /*0x6e181b*/
  return 1; /*0x6e1820*/

}
} // namespace gamemd

// 0x6E1980
namespace gamemd {
char TActionClass::executeGuardAreaAction(int a2, int a3, int a4, int aP4)
{


  int *WorldCoords; // eax
  unsigned int v13[3]; // [esp+14h] [ebp-Ch] BYREF
  WorldCoords = ((Cell *)dword_A8B230)->GetWorldCoords(v13, (int)this->TActionClass_field_44); /*0x6e1993*/
  int v10; // [esp+8h] [ebp-18h] BYREF
  v10 = *WorldCoords; /*0x6e199c*/
  int v11; // [esp+Ch] [ebp-14h]
  v11 = WorldCoords[1]; /*0x6e19a3*/
  int v12; // [esp+10h] [ebp-10h]
  v12 = WorldCoords[2]; /*0x6e19b1*/
  __int16 v9[2]; // [esp+4h] [ebp-1Ch] BYREF
  v9[0] = v10 / 256; /*0x6e19d1*/
  v9[1] = v11 / 256; /*0x6e19d6*/
  Cell *v6; // esi
  ObjectClass *Infantry; // eax
  if ( v9[0] == *(unsigned short *)dword_B0E680 && (unsigned __int16)(v11 / 256) == *(unsigned short *)&dword_B0E680[2] /*0x6e1a14*/
    || (v6 = (Cell *)((CellCoord *)&DataGlobal_87F7E8)->To_CellObj(v9),
        (Infantry = (ObjectClass *)(v6)->IsBridge()) == 0)
    && (Infantry = (ObjectClass *)((CellClass *)v6)->FindInfantry(0)) == 0 )
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
char TActionClass::executePatrolAction(void *a1, int a3, int a4, int aP4)
{


  TActionClass *v7; // [esp+0h] [ebp-4h] BYREF
  v7 = this; /*0x6e1a40*/
  int *Waypoint_Location; // eax
  Waypoint_Location = ((char *)dword_A8B230)->Get_Waypoint_Location(&v7, (int)this->TActionClass_field_44); /*0x6e1a50*/
  ((ObjectClass *)(ObjectClass *)a1)->SelectSimilarBuildingTypes(*Waypoint_Location); /*0x6e1a5c*/
  return 1; /*0x6e1a64*/

}
} // namespace gamemd

// 0x6E1A70
namespace gamemd {
char TActionClass::executeScatterAction(int a2, int a3, int a4, int aP4)
{

  int v5; // esi

  if ( dword_A83D4C->visionary ) /*0x6e1a78*/
    return 1; /*0x6e1b79*/
  int v8[3]; // [esp+0h] [ebp-14h] BYREF
  __int16 v9[4]; // [esp+Ch] [ebp-8h] BYREF
  *(unsigned int *)v9 = *((char *)dword_A8B230)->Get_Waypoint_Location(v8, *&this->pad_6E[34]); /*0x6e1aaa*/
  if ( (*((unsigned int *)((CellCoord *)&DataGlobal_87F7E8)->To_CellObj(v9) + 80) & 0x100) != 0 /*0x6e1ad6*/
    || (*((unsigned int *)((CellCoord *)&DataGlobal_87F7E8)->To_CellObj(v9) + 80) & 0x400) != 0 )
  {
    v5 = 4; /*0x6e1adc*/
  }
  else
  {
    v5 = 0; /*0x6e1ad8*/
  }
  int v6; // kr00_4
  v6 = v5 + *((char *)((CellCoord *)&DataGlobal_87F7E8)->To_CellObj(v9) + 283); /*0x6e1afc*/
  v8[2] = v6 * dword_B0E6E0; /*0x6e1b36*/
  v8[1] = ((__int16)(v9[1] - v6 / 2) << 8) + 128; /*0x6e1b3d*/
  v8[0] = ((__int16)(v9[0] - v6 / 2) << 8) + 128; /*0x6e1b4c*/
  TActionClass_Helper(v8, *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 1580)); /*0x6e1b61*/
  CellSystem::UpdateVisibility((CellSystem *)&DataGlobal_87F7E8); /*0x6e1b6b*/
  return 1; /*0x6e1b73*/

}
} // namespace gamemd

// 0x6E21E0
namespace gamemd {
char TActionClass::executeFollowAction(int a2, int a3, int a4, int aP4)
{

  void **p_TActionClass_field_34 = &this->TActionClass_field_34; // ecx /*0x6e21e0*/
  *(unsigned int *)&DataGlobal_87F8E4 = *p_TActionClass_field_34; /*0x6e21e5*/
  *(unsigned int *)&DataGlobal_87F8E8 = p_TActionClass_field_34[1]; /*0x6e21ed*/
  *(unsigned int *)&DataGlobal_87F8EC = p_TActionClass_field_34[2]; /*0x6e21f6*/
  *(unsigned int *)&DataGlobal_87F8F0 = p_TActionClass_field_34[3]; /*0x6e21fe*/
  RadarClass::Process((RadarClass *)&DataGlobal_87F7E8); /*0x6e2209*/
  ((LayerClass *)&DataGlobal_87F7E8)->CellIteratorReset(); /*0x6e2213*/
  int i; // eax
  for ( i = ((LayerClass *)&DataGlobal_87F7E8)->CellIteratorNext(); /*0x6e2224*/
  i;
  i = ((LayerClass *)&DataGlobal_87F7E8)->CellIteratorNext() )
  {
    ((House *)(i))->AnnounceUpgrade(-1); /*0x6e222a*/
  }
  Terrain::ConnectivityGraph((Terrain *)&DataGlobal_87F7E8); /*0x6e2243*/
  ((MapClass *)&DataGlobal_87F7E8)->BuildSubzones(); /*0x6e224d*/
  ((FogOfWar *)&DataGlobal_87F7E8)->Render(); /*0x6e2257*/
  int j; // esi
  for ( j = stru_A8EB00.ptr_0[20] - 1; j >= 0; --j ) /*0x6e2267*/
    (*(void (**)(unsigned int, int))(**(unsigned int **)(stru_A8EB00.ptr_0[17] + 4 * j) + 1184))( /*0x6e2275*/
      *(unsigned int *)(stru_A8EB00.ptr_0[17] + 4 * j),
      1);
  return 1; /*0x6e2281*/
}
} // namespace gamemd

// 0x6E2520
namespace gamemd {
char TActionClass::executeLoadAction(int a2, int a3, int a4, int aP4)
{

#374 *v6; // eax
  __int16 v8[2]; // [esp+4h] [ebp-14h] BYREF
  int v9; // [esp+8h] [ebp-10h] BYREF
  int v10[2]; // [esp+Ch] [ebp-Ch] BYREF
  int GroundHeight; // [esp+14h] [ebp-4h]

  *(unsigned int *)v8 = *((char *)dword_A8B230)->Get_Waypoint_Location(&v9, (int)this->TActionClass_field_44); /*0x6e253e*/
  GroundHeight = 0; /*0x6e2542*/
  v10[1] = (v8[1] << 8) + 128; /*0x6e2563*/
  v10[0] = (v8[0] << 8) + 128; /*0x6e256d*/
  GroundHeight = Cell::GetGroundHeight(v10); /*0x6e2576*/
  if ( (*((unsigned int *)((CellCoord *)&DataGlobal_87F7E8)->To_CellObj(v8) + 80) & 0x100) != 0 /*0x6e25ac*/
    || (*((unsigned int *)((CellCoord *)&DataGlobal_87F7E8)->To_CellObj(v8) + 80) & 0x400) != 0 )
  {
    GroundHeight += dword_B0E6D4; /*0x6e25ba*/
  }
  v6 = (#374 *)__2_YAPAXI_Z(0x148u); /*0x6e25c3*/
  if ( v6 ) /*0x6e25cd*/
    DamageAnimClass::Constructor( /*0x6e25e8*/
      v6,
      *(unsigned int *)(stru_A8EB00.ObjectTypeClass[11] + 4 * *&this->q06E[34]),
      v10,
      0);
  return 1; /*0x6e25ef*/

}
} // namespace gamemd

// 0x6E2AF0
namespace gamemd {
char TActionClass::executeUnloadAction(int a2, int a3, int a4, IUnknown * aP4)
{

  if ( !this->TActionClass_field_50 ) /*0x6e2af4*/
    return 1; /*0x6e2af4*/
  int v6 = 0; // esi /*0x6e2b00*/
  if ( dword_A8EAF8 <= 0 ) /*0x6e2b04*/
    return 1; /*0x6e2b69*/
  do /*0x6e2b5e*/
  {
    TActionClass *v7; // ecx
    v7 = (TActionClass *)*((unsigned int *)dword_A8EAEC + v6); /*0x6e2b0f*/
    unsigned char *idxArray; // eax
    idxArray = (unsigned char *)v7->idxArray; /*0x6e2b12*/
    if ( idxArray == this->TActionClass_field_50 ) /*0x6e2b17*/
    {
      void *ptr_0; // edx
      ptr_0 = dword_A8B230[43].ptr_0; /*0x6e2b1f*/
      if ( (ptr_0 || idxArray[156]) /*0x6e2b47*/
        && (ptr_0 != 1 || idxArray[157])
        && (ptr_0 != 2 || idxArray[158]) )
      {
        (v7)->executeAirstrikeAction(); /*0x6e2b51*/
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
    10 * *&this->q06E[34],
    10 * dword_A8B230[378].uniqueId,
    10 * dword_A8B230[378].abstractFlags,
    0);
  dword_A8B230[378].ptr_C = *&this->pad_6E[34]; /*0x6e2ea1*/
  return 1; /*0x6e2ea0*/
}
} // namespace gamemd

// 0x6E2EB0
namespace gamemd {
char TActionClass::executeExplodeAction(int a2, int a3, int a4, IUnknown * aP4)
{
  UpdateSurfaceAnimations( /*0x6e2edd*/
    10 * (int)dword_A8B230[378].ptr_C,
    10 * *&this->q06E[34],
    10 * dword_A8B230[378].abstractFlags,
    0);
  dword_A8B230[378].uniqueId = *&this->pad_6E[34]; /*0x6e2ef1*/
  return 1; /*0x6e2ef0*/
}
} // namespace gamemd

// 0x6E2F00
namespace gamemd {
char TActionClass::executeChronoshiftAction(int a2, int a3, int a4, IUnknown * aP4)
{
  UpdateSurfaceAnimations( /*0x6e2f2d*/
    10 * (int)dword_A8B230[378].ptr_C,
    10 * dword_A8B230[378].uniqueId,
    10 * *&this->q06E[34],
    0);
  dword_A8B230[378].abstractFlags = *&this->pad_6E[34]; /*0x6e2f41*/
  return 1; /*0x6e2f40*/
}
} // namespace gamemd

// 0x6E3180
namespace gamemd {
char TActionClass::executePlaceBeaconAction(int a2, int _C, unsigned int * a3, IUnknown * aP4)
{
  HouseClass *Field11; // eax

  HouseClass *v5 = *&this->pad_6E[34]; // esi /*0x6e3181*/
  if ( !a3 ) /*0x6e318d*/
    return 0; /*0x6e318d*/
  if ( v5 == 8997 ) /*0x6e3195*/
  {
    Field11 = (HouseClass *)((Property *)a3)->GetField11(); /*0x6e3197*/
  }
  else
  {
    if ( v5 == (HouseClass *)-1 ) /*0x6e31a1*/
      return 0; /*0x6e31c3*/
    if ( (uint8_t)(v5)->IsSpecialType() ) /*0x6e31a5*/
      Field11 = (HouseClass *)((BuildingType *)(v5))->FindOwnerHouse(); /*0x6e31b0*/
    else
      Field11 = (HouseClass *)(v5)->FindOwner(); /*0x6e31b7*/
  }
  if ( !Field11 ) /*0x6e31be*/
    return 0; /*0x6e31be*/
  ((HouseClass *)(Field11))->ClearLowPowerTargets(); /*0x6e31c8*/
  return 1; /*0x6e31c2*/
}
} // namespace gamemd

// 0x6E31E0
namespace gamemd {
char TActionClass::executeJumpjetAction(int a2, int _C, unsigned int * a3, IUnknown * aP4)
{
  HouseClass *Field11; // eax

  HouseClass *v5 = *&this->pad_6E[34]; // esi /*0x6e31e1*/
  if ( !a3 ) /*0x6e31ed*/
    return 0; /*0x6e31ed*/
  if ( v5 == 8997 ) /*0x6e31f5*/
  {
    Field11 = (HouseClass *)((Property *)a3)->GetField11(); /*0x6e31f7*/
  }
  else
  {
    if ( v5 == (HouseClass *)-1 ) /*0x6e3201*/
      return 0; /*0x6e3223*/
    if ( (uint8_t)(v5)->IsSpecialType() ) /*0x6e3205*/
      Field11 = (HouseClass *)((BuildingType *)(v5))->FindOwnerHouse(); /*0x6e3210*/
    else
      Field11 = (HouseClass *)(v5)->FindOwner(); /*0x6e3217*/
  }
  if ( !Field11 ) /*0x6e321e*/
    return 0; /*0x6e321e*/
  (Field11)->DestroyAllBuildings(); /*0x6e3228*/
  return 1; /*0x6e3222*/
}
} // namespace gamemd

// 0x6E3240
namespace gamemd {
char TActionClass::executeOpenGateAction(int a2, int _C, unsigned int * a3, IUnknown * aP4)
{
  HouseClass *Field11; // eax

  HouseClass *v5 = *&this->pad_6E[34]; // esi /*0x6e3241*/
  if ( !a3 ) /*0x6e324d*/
    return 0; /*0x6e324d*/
  if ( v5 == 8997 ) /*0x6e3255*/
  {
    Field11 = (HouseClass *)((Property *)a3)->GetField11(); /*0x6e3257*/
  }
  else
  {
    if ( v5 == (HouseClass *)-1 ) /*0x6e3261*/
      return 0; /*0x6e3283*/
    if ( (uint8_t)(v5)->IsSpecialType() ) /*0x6e3265*/
      Field11 = (HouseClass *)((BuildingType *)(v5))->FindOwnerHouse(); /*0x6e3270*/
    else
      Field11 = (HouseClass *)(v5)->FindOwner(); /*0x6e3277*/
  }
  if ( !Field11 ) /*0x6e327e*/
    return 0; /*0x6e327e*/
  (Field11)->DestroyAllNonBuildingsNonNaval(); /*0x6e3288*/
  return 1; /*0x6e3282*/
}
} // namespace gamemd

// 0x6E32A0
namespace gamemd {
char TActionClass::executeCloseGateAction(int a2, int _C, unsigned int * a3, IUnknown * aP4)
{
  HouseClass *Field11; // eax

  HouseClass *v5 = *&this->pad_6E[34]; // esi /*0x6e32a1*/
  if ( !a3 ) /*0x6e32ad*/
    return 0; /*0x6e32ad*/
  if ( v5 == 8997 ) /*0x6e32b5*/
  {
    Field11 = (HouseClass *)((Property *)a3)->GetField11(); /*0x6e32b7*/
  }
  else
  {
    if ( v5 == (HouseClass *)-1 ) /*0x6e32c1*/
      return 0; /*0x6e32e3*/
    if ( (uint8_t)(v5)->IsSpecialType() ) /*0x6e32c5*/
      Field11 = (HouseClass *)((BuildingType *)(v5))->FindOwnerHouse(); /*0x6e32d0*/
    else
      Field11 = (HouseClass *)(v5)->FindOwner(); /*0x6e32d7*/
  }
  if ( !Field11 ) /*0x6e32de*/
    return 0; /*0x6e32de*/
  (Field11)->DestroyAllNonBuildingsNaval(); /*0x6e32e8*/
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
  unsigned int *v10; // esi
  int v11; // edi
  CellClass *v12; // eax
  Function *UIObjectCOM; // edi
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
  unsigned int v25[3]; // [esp+34h] [ebp-24h] BYREF
  unsigned long long v26[3]; // [esp+40h] [ebp-18h] BYREF

  *(unsigned int *)v18 = *((char *)dword_A8B230)->Get_Waypoint_Location(&v19, this->TActionClass_field_44);  /*0x6e3433*/
  GroundHeight = 0;  /*0x6e3437*/
  v23 = (v18[1] << 8) + 128;  /*0x6e3458*/
  v22 = (v18[0] << 8) + 128;  /*0x6e3462*/
  GroundHeight = Cell::GetGroundHeight(&v22);  /*0x6e346b*/
  if ( (*((unsigned int *)((CellCoord *)&dword_87F7E8)->To_CellObj(v18) + 80) & 0x100) != 0 )
    GroundHeight += dword_B0E6D4;  /*0x6e3495*/  /*0x6e3487*/
  v10 = (unsigned int *)*((unsigned int *)g_WeaponTypeConfig + SuperWeaponClass::FindByName(&stru_81AFA0));  /*0x6e34ad*/
  v11 = v10[40];  /*0x6e34c3*/
  v17 = v10[43];  /*0x6e34c9*/
  v16 = v10[41];  /*0x6e34ca*/
  v12 = ((Coord *)&dword_87F7E8)->To_Cell(&v22);  /*0x6e34d3*/
  UIObjectCOM = (Function *)CreateUIObjectCOM(v11, (int)v12, 0, v16, v17, 50, 0);  /*0x6e34e1*/
  Function::Method_46B260(UIObjectCOM, (int)v10);  /*0x6e34e6*/
  v25[0] = v22;  /*0x6e34ff*/
  v25[1] = v23;  /*0x6e3503*/
  v25[2] = GroundHeight + 20000;  /*0x6e3507*/
  if ( !UIObjectCOM )
    return 0;  /*0x6e35dc*/  /*0x6e350b*/
  Math::SinCos(1.570748388432313);  /*0x6e351b*/
  v19 = v5;  /*0x6e3520*/
  Math::ArcTan2(1.570748388432313);  /*0x6e352e*/
  v19 = v6 * v19 * -100.0;  /*0x6e3547*/
  Math::ArcTan2(1.570748388432313);  /*0x6e354b*/
  v20 = v7;  /*0x6e3550*/
  Math::ArcTan2(1.570748388432313);  /*0x6e355e*/
  v21 = v19;  /*0x6e356f*/
  *(double *)&v26[1] = v19;  /*0x6e358b*/
  v20 = v8 * v20 * -100.0;  /*0x6e358f*/
  *(double *)v26 = v20;  /*0x6e359b*/
  Math::SinCos(1.570748388432313);  /*0x6e35ab*/
  v14 = *(unsigned int *)UIObjectCOM->__pad_0;  /*0x6e35b6*/
  *(double *)&v26[2] = v9 * -100.0;  /*0x6e35c5*/
  (*(void (**)(Function *, unsigned int *, unsigned long long *))(v14 + 496))(UIObjectCOM, v25, v26);  /*0x6e35cb*/
  return 1;  /*0x6e35d3*/

}
} // namespace gamemd

// 0x6E3B40
namespace gamemd {
char TActionClass::executeLightningAction(int a2, int a3, int a4, IUnknown * aP4)
{

  if ( !a2 ) /*0x6e3b48*/
    return 0; /*0x6e3b4a*/
  (a2)->CreateRadarOutage(*&this->pad_6E[34]); /*0x6e3b56*/
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
  result = (aP0)->SaveLoad_Prefix_0(aP1); /*0x6e3dbb*/
  if ( result >= 0 ) /*0x6e3dc2*/
  {
    if ( aP0 ) /*0x6e3dc6*/
    {
      AbstractClass::InitVtables((AbstractClass *)aP0, (int)&aP1); /*0x6e3dcf*/
      /* X11: ptr_0 install elided (implicit via TActionClass virtuals 0x6e3dd4) */
      /* X11: ptr_0 install elided (implicit via TActionClass virtuals 0x6e3dda) */
      /* X11: ptr_0 install elided (implicit via TActionClass virtuals 0x6e3de1) */
      /* X11: ptr_0 install elided (implicit via TActionClass virtuals 0x6e3de8) */
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->u32_53A0); /*0x6e3df8*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->u32_53A0); /*0x6e3e06*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->u32_53A0); /*0x6e3e14*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->u32_53A0); /*0x6e3e22*/
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
  result = ((int *)aP0)->SaveLoad_Prefix(a1, aP2); /*0x6e3e3f*/
  if ( result >= 0 ) /*0x6e3e46*/
    return 0; /*0x6e3e48*/
  return result; /*0x6e3e4a*/
}
} // namespace gamemd

// 0x6E3E50
namespace gamemd {
int TActionClass::Validate(int a2)
{


  ((AbstractClass *)this)->ProcessPower(); /*0x6e3e59*/
  unsigned int *TActionClass_field_28; // eax
  TActionClass_field_28 = this->TActionClass_field_28; /*0x6e3e5e*/
  if ( TActionClass_field_28 ) /*0x6e3e63*/
  {
    int v4; // eax
    v4 = (*(int (**)(unsigned int *))(TActionClass_field_28[1] + 16))(TActionClass_field_28 + 1); /*0x6e3e6c*/
    Power::TimerProcess(v4); /*0x6e3e72*/
  }
  Power::TimerProcess((int)this->TActionClass_field_2C); /*0x6e3e7d*/
  unsigned int *TActionClass_field_30; // eax
  TActionClass_field_30 = this->TActionClass_field_30; /*0x6e3e82*/
  if ( TActionClass_field_30 ) /*0x6e3e87*/
  {
    int v6; // eax
    v6 = (*(int (**)(unsigned int *))(TActionClass_field_30[1] + 16))(TActionClass_field_30 + 1); /*0x6e3e90*/
    Power::TimerProcess(v6); /*0x6e3e96*/
  }
  unsigned int *TActionClass_field_4C; // eax
  TActionClass_field_4C = this->TActionClass_field_4C; /*0x6e3e9b*/
  if ( TActionClass_field_4C ) /*0x6e3ea0*/
  {
    int v8; // eax
    v8 = (*(int (**)(unsigned int *))(TActionClass_field_4C[1] + 16))(TActionClass_field_4C + 1); /*0x6e3ea9*/
    Power::TimerProcess(v8); /*0x6e3eaf*/
  }
  unsigned int *TActionClass_field_50; // eax
  TActionClass_field_50 = this->TActionClass_field_50; /*0x6e3eb4*/
  if ( TActionClass_field_50 ) /*0x6e3eb9*/
  {
    int v10; // eax
    v10 = (*(int (**)(unsigned int *))(TActionClass_field_50[1] + 16))(TActionClass_field_50 + 1); /*0x6e3ec2*/
    Power::TimerProcess(v10); /*0x6e3ec8*/
  }
  return Power::TimerProcess(*&this->pad_6E[34]); /*0x6e3edb*/

}
} // namespace gamemd

// 0x6E4100
namespace gamemd {
char TActionClass::executePsychicDominatorAction(int a2, int a3, int a4, IUnknown * aP4)
{

  unsigned int v5 = *&this->pad_6E[34]; // esi /*0x6e4101*/
  if ( v5 >= 4 || !(uint8_t)((PlayerClass *)(3988 * v5 + 8916268))->HasPlayers() ) /*0x6e4124*/
    return 0; /*0x6e413e*/
  ((SidebarClass*)(&DataGlobal_87F7E8))->SwitchTab(v5); /*0x6e4133*/
  return 1; /*0x6e413a*/
}
} // namespace gamemd

// 0x6E4200
namespace gamemd {
char TActionClass::executeForceShieldAction(int a2, int a3, int a4, IUnknown * aP4)
{


  int v5 = a2; // edi /*0x6e4205*/
  if ( !a2 ) /*0x6e420d*/
    return 0; /*0x6e420d*/
  int v14; // [esp+8h] [ebp-1Ch] BYREF
  a2 = *((char *)dword_A8B230)->Get_Waypoint_Location(&v14, (int)this->TActionClass_field_44); /*0x6e4233*/
  void *v7; // eax
  v7 = ((CellCoord *)&DataGlobal_87F7E8)->To_CellObj((__int16 *)&a2); /*0x6e4237*/
  unsigned int *v8; // eax
  unsigned char v16[12]; // [esp+18h] [ebp-Ch] BYREF
  v8 = (unsigned int *)(*(int (**)(void *, unsigned char *))(*(unsigned int *)v7 + 72))(v7, v16); /*0x6e4245*/
  unsigned int v15[3]; // [esp+Ch] [ebp-18h] BYREF
  v15[0] = *v8; /*0x6e424a*/
  v15[1] = v8[1]; /*0x6e4251*/
  v15[2] = v8[2]; /*0x6e425b*/
  int IndexByName; // eax
  IndexByName = (&this->TActionClass_field_54)->FindIndexByName(); /*0x6e425f*/
  if ( IndexByName < 0 ) /*0x6e4266*/
    return 0; /*0x6e4266*/
  if ( IndexByName > dword_A83C78 ) /*0x6e426e*/
    return 0; /*0x6e426e*/
  int v10; // ecx
  v10 = *((unsigned int *)dword_A83C6C + IndexByName); /*0x6e4276*/
  if ( !v10 ) /*0x6e427b*/
    return 0; /*0x6e427b*/
  int v11; // eax
  v11 = (*(int (**)(int, int))(*(unsigned int *)v10 + 140))(v10, v5); /*0x6e4280*/
  int v12 = v11; // esi /*0x6e4286*/
  if ( !v11 ) /*0x6e428a*/
    return 0; /*0x6e428a*/
  if ( !(*(unsigned __int8 (**)(int, unsigned int *, unsigned int))(*(unsigned int *)v11 + 1168))(v11, v15, 0) ) /*0x6e4297*/
  {
    (*(void (**)(int))(*(unsigned int *)v12 + 248))(v12); /*0x6e42a5*/
    return 0; /*0x6e42b2*/
  }
  (*(void (**)(int, unsigned int))(*(unsigned int *)v12 + 1244))(v12, 0); /*0x6e42bb*/
  return 1; /*0x6e42ab*/

}
} // namespace gamemd

// 0x6E4360
namespace gamemd {
char TActionClass::executeSpyPlaneAction(int a2, int a3, int a4, IUnknown * aP4)
{

  if ( !a2 ) /*0x6e4366*/
    return 0; /*0x6e4366*/
  int v5 = *&this->pad_6E[34]; // eax /*0x6e4368*/
  if ( v5 < 0 || v5 > a2->q264 ) /*0x6e4378*/
    return 0; /*0x6e438d*/
  (*(SuperClass **)(a2->q258 + 4 * v5))->ResetRechargeTime(); /*0x6e4383*/
  return 1; /*0x6e438a*/
}
} // namespace gamemd

// 0x6E43A0
namespace gamemd {
char TActionClass::executeChronoSphereAction(int a2, int a3, int a4, IUnknown * aP4)
{

  if ( !a2 ) /*0x6e43a6*/
    return 0; /*0x6e43a6*/
  int v5 = *&this->pad_6E[34]; // eax /*0x6e43a8*/
  if ( v5 < 0 || v5 > a2->q264 ) /*0x6e43b8*/
    return 0; /*0x6e43cd*/
  (*(SuperClass **)(a2->q258 + 4 * v5))->Reset(); /*0x6e43c3*/
  return 1; /*0x6e43ca*/
}
} // namespace gamemd

// 0x6E43E0
namespace gamemd {
char TActionClass::executeWeatherStormAction(unsigned int * a1, int a3, int a4, IUnknown * aP4)
{


  TActionClass *v5; // esi
  v5 = (TActionClass *)a1; /*0x6e43e1*/
  if ( !a1 ) /*0x6e43e7*/
    return 0; /*0x6e43e9*/
  unsigned int *v7; // eax
  v7 = (unsigned int *)*((char *)dword_A8B230)->Get_Waypoint_Location(&a1, (int)this->TActionClass_field_44); /*0x6e4403*/
  a1 = v7; /*0x6e440c*/
  if ( v7 == *(unsigned int **)dword_B0E680 ) /*0x6e4410*/
    return 0; /*0x6e4420*/
  (v5)->executeGuardAction((int)v7); /*0x6e4429*/
  return 1; /*0x6e43eb*/

}
} // namespace gamemd

// 0x6E4460
namespace gamemd {
char TActionClass::executeDominatorAction(unsigned int * a1, int a3, int a4, IUnknown * aP4)
{


  TActionClass *v5; // esi
  v5 = (TActionClass *)a1; /*0x6e4461*/
  if ( !a1 ) /*0x6e4467*/
    return 0; /*0x6e4469*/
  unsigned int *v7; // eax
  v7 = (unsigned int *)*((char *)dword_A8B230)->Get_Waypoint_Location(&a1, (int)this->TActionClass_field_44); /*0x6e4483*/
  a1 = v7; /*0x6e448c*/
  if ( v7 == *(unsigned int **)dword_B0E680 ) /*0x6e4490*/
    return 0; /*0x6e44a0*/
  (v5)->executeHuntAction((int)v7); /*0x6e44a9*/
  return 1; /*0x6e446b*/

}
} // namespace gamemd

// 0x6E44E0
namespace gamemd {
char TActionClass::executeRevealAction(unsigned int * a1, int a3, int a4, IUnknown * aP4)
{


  TActionClass *v5; // esi
  v5 = (TActionClass *)a1; /*0x6e44e1*/
  if ( !a1 ) /*0x6e44e7*/
    return 0; /*0x6e44e9*/
  unsigned int *v7; // eax
  v7 = (unsigned int *)*((char *)dword_A8B230)->Get_Waypoint_Location(&a1, (int)this->TActionClass_field_44); /*0x6e4503*/
  a1 = v7; /*0x6e450c*/
  if ( v7 == *(unsigned int **)dword_B0E680 ) /*0x6e4510*/
    return 0; /*0x6e4520*/
  (v5)->executeDeployAction((int)v7); /*0x6e4529*/
  return 1; /*0x6e44eb*/

}
} // namespace gamemd

// 0x6E4560
namespace gamemd {
char TActionClass::executeEMPulseAction(int a2, int a3, int a4, IUnknown * aP4)
{

  int i; // ebp
  unsigned int *v7; // edi

  if ( !a2 ) /*0x6e456c*/
    return 0; /*0x6e456e*/
  for ( i = *(unsigned int *)(a2 + 120) - 1; i >= 0; --i ) /*0x6e457a*/
  {
    v7 = *(unsigned int **)(*(unsigned int *)(a2 + 108) + 4 * i); /*0x6e4585*/
    if ( !strcmp((const char *)(v7[328] + 36), &this->TActionClass_field_54) ) /*0x6e459a*/
      v7[60] = this->pad_6E[34]; /*0x6e45cb*/
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
  (this->TActionClass_field_44) = 1; /*0x7268f0*/
  return BuildingClass::ProcessUpgradeEffects();
}
} // namespace gamemd

// 0x726900
namespace gamemd {
void TActionClass::executeDetonateAction()
{
  (this->TActionClass_field_44) = 0; /*0x726900*/
}
} // namespace gamemd
