// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/RadioClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/AudioController_e4.hpp"
#include "e4/classes/Building_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/BuildingPlacement_e4.hpp"
#include "e4/classes/BuildingLight_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/BuildingLightClass_e4.hpp"
#include "e4/classes/BulletTypeClass_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/CCToolTip_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/ProgressTimer_e4.hpp"
#include "e4/classes/SuperWeapon_e4.hpp"
#include "e4/classes/ObjectPtr_e4.hpp"
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers
#include "e4/classes/House_e4.hpp"
#include "e4/classes/TeamClass_e4.hpp"
#include "e4/classes/LightSourceClass_e4.hpp"
#include "e4/classes/Team_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/FootClass_e4.hpp"

// 0x453E20
namespace gamemd {  // G42.18 ns repair
void* BuildingClass::LoadFromStream()
{

  BuildingClass *v1; // edi
  void **p_vtable1; // esi
  int v3; // eax
  int v4; // ebx
  signed int v5; // eax
  int v6; // ecx
  char *i; // eax
  unsigned int *v8; // eax
  int v9; // ebp
  int result; // eax
  int v11; // esi
  int vtable2; // eax
  int v13; // eax
  int FiringOccupantIndex; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // edx
  int v18; // esi
  int v19; // eax
  int v20; // ebx
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  int v24; // edx
  int v25; // esi
  int *Anims; // esi
  int v27; // ebp
  int *Upgrades; // esi
  int v29; // ebp
  int *DamageFireAnims; // esi
  int v31; // ebp
  int v32; // [esp+58h] [ebp-4h]
  BuildingClass *v33; // [esp+60h] [ebp+4h] BYREF
  int v34; // [esp+64h] [ebp+8h] BYREF

  v1 = v33; /*0x453e25*/
  p_vtable1 = &v33->vtable2; /*0x453e2c*/
  v33 = (BuildingClass *)(*((int (**)(void **))v33->vtable2 + 4))(&v33->vtable2); /*0x453e3d*/
  v3 = (&g_BuildingLoadQueue_Array)->Dequeue((int *)&v33); /*0x453e41*/
  v4 = 0; /*0x453e46*/
  if ( v3 ) /*0x453e4a*/
  {
    v5 = (signed int)(v3 - (unsigned int)g_BuildingLoadQueue_Array.TechnoTypeClass) >> 3; /*0x453e52*/
    if ( v5 != -1 ) /*0x453e58*/
    {
      v6 = v5 + 1; /*0x453e5a*/
      for ( i = (char *)g_BuildingLoadQueue_Array.?; /*0x453e64*/
            v6 < (int)g_BuildingLoadQueue_Array.?;
            i = (char *)g_BuildingLoadQueue_Array.? )
      {
        v8 = (char *)g_BuildingLoadQueue_Array.TechnoTypeClass + 8 * v6++; /*0x453e6c*/
        *(v8 - 2) = *v8; /*0x453e72*/
        *(v8 - 1) = v8[1]; /*0x453e78*/
      }
      g_BuildingLoadQueue_Array.? = i - 1; /*0x453e8d*/
      *((unsigned int *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.?) = 0; /*0x453e92*/
      *((unsigned int *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.? + 1) = 0; /*0x453ea3*/
      g_BuildingLoadQueue_Array.? = 0; /*0x453ea7*/
    }
  }
  v9 = v34; /*0x453ead*/
  result = BuildingClass::AllocAndCtor((int)v1, v34); /*0x453eb3*/
  v32 = result; /*0x453eba*/
  if ( result >= 0 ) /*0x453ebe*/
  {
    if ( v1 ) /*0x453ec6*/
      BuildingClass::ctor(v1, (int)&v33); /*0x453ecf*/
    v11 = (*((int (**)(void **))*p_vtable1 + 4))(p_vtable1); /*0x453ee0*/
    vtable2 = (int)g_BuildingLoadQueue_Array.?; /*0x453ee2*/
    if ( (int)g_BuildingLoadQueue_Array.? + 1 <= (int)g_BuildingLoadQueue_Array.? ) /*0x453eea*/
      goto LABEL_13; /*0x453eea*/
    if ( !g_BuildingLoadQueue_Array.? ) /*0x453eee*/
      vtable2 = 10; /*0x453ef0*/
    if ( BuildingTypeClass::Enqueue((int)&g_BuildingLoadQueue_Array, vtable2) ) /*0x453efb*/
    {
LABEL_13:
      *((unsigned int *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)dword_B0E844) = v11; /*0x453f0f*/
      *((unsigned int *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array + 1) = v1; /*0x453f1e*/
      LOBYTE(byte_B0E84C) = 0; /*0x453f28*/
      ++dword_B0E844; /*0x453f2f*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v1->Type); /*0x453f40*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v1->Factory); /*0x453f51*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v1->C4AppliedBy); /*0x453f62*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v1->FirestormAnim); /*0x453f73*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v1->PsiWarnAnim); /*0x453f84*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v1->Spotlight); /*0x453f95*/
    AudioController::Init(&v1->WasOnline); /*0x453fa0*/
    AudioController::Init((AudioController *)v1->Audio8_2); /*0x453fab*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v1->SecretProduction); /*0x453fbc*/
    result = (*(int (**)(int, int *, int, unsigned int))(*(unsigned int *)v9 + 12))(v9, &v34, 4, 0); /*0x453fcd*/
    if ( result >= 0 ) /*0x453fd2*/
    {
      v13 = v34; /*0x453fd8*/
      if ( v34 <= 0 ) /*0x453fde*/
      {
LABEL_24:
        v18 = 0; /*0x45404c*/
        if ( v13 > 0 ) /*0x454050*/
        {
          do /*0x45406b*/
            ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v1->Occupants[0] + 4 * v18++)); /*0x454061*/
          while ( v18 < v34 ); /*0x45406b*/
        }
        result = (*(int (**)(int, int *, int, unsigned int))(*(unsigned int *)v9 + 12))(v9, &v34, 4, 0); /*0x45407a*/
        if ( result >= 0 ) /*0x45407f*/
        {
          v19 = v34; /*0x454085*/
          v20 = 0; /*0x454089*/
          if ( v34 <= 0 ) /*0x45408d*/
          {
LABEL_36:
            v25 = 0; /*0x4540fb*/
            if ( v19 > 0 ) /*0x4540ff*/
            {
              do /*0x45411a*/
                ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v1->Audio7[4] + 4 * v25++)); /*0x454110*/
              while ( v25 < v34 ); /*0x45411a*/
            }
            Anims = (int *)(v1->Anims); /*0x45411c*/
            v27 = 21; /*0x454122*/
            do /*0x454136*/
            {
              ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, Anims++); /*0x45412d*/
              --v27; /*0x454135*/
            }
            while ( v27 ); /*0x454136*/
            Upgrades = (int *)(v1->Upgrades); /*0x454138*/
            v29 = 3; /*0x45413e*/
            do /*0x454152*/
            {
              ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, Upgrades++); /*0x454149*/
              --v29; /*0x454151*/
            }
            while ( v29 ); /*0x454152*/
            DamageFireAnims = (int *)(v1->DamageFireAnims); /*0x454154*/
            v31 = 8; /*0x45415a*/
            do /*0x45416e*/
            {
              ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, DamageFireAnims++); /*0x454165*/
              --v31; /*0x45416d*/
            }
            while ( v31 ); /*0x45416e*/
            v1->LightSource = 0; /*0x454174*/
            return v32; /*0x454170*/
          }
          else
          {
            while ( 1 ) /*0x45409c*/
            {
              result = (*(int (**)(int, BuildingClass **, int, unsigned int))(*(unsigned int *)v9 + 12))(v9, &v33, 4, 0); /*0x45409c*/
              if ( result < 0 ) /*0x4540a1*/
                break; /*0x4540a1*/
              v21 = v1->Audio8[0]; /*0x4540a7*/
              if ( v1->Audio8[2] < v21 /*0x4540d8*/
                || (BYTE1(v1->Audio8[1]) || !v21)
                && (v22 = v1->Audio8[3], v22 > 0)
                && (*(unsigned __int8 (**)(int *, int, unsigned int))(v1->Audio7[3] + 8))(
                     &v1->Audio7[3],
                     v21 + v22,
                     0) )
              {
                v23 = v1->Audio8[2]; /*0x4540df*/
                v24 = v1->Audio7[4]; /*0x4540e2*/
                v1->Audio8[2] = v23 + 1; /*0x4540e8*/
                *(unsigned int *)(v24 + 4 * v23) = (unsigned int)(v33); /*0x4540ef*/
              }
              v19 = v34; /*0x4540f2*/
              if ( ++v20 >= v34 ) /*0x4540f9*/
                goto LABEL_36; /*0x4540f9*/
            }
          }
        }
      }
      else
      {
        while ( 1 ) /*0x453fed*/
        {
          result = (*(int (**)(int, BuildingClass **, int, unsigned int))(*(unsigned int *)v9 + 12))(v9, &v33, 4, 0); /*0x453fed*/
          if ( result < 0 ) /*0x453ff2*/
            break; /*0x453ff2*/
          FiringOccupantIndex = (int)(v1->FiringOccupantIndex); /*0x453ff8*/
          if ( v1->Audio7[1] < FiringOccupantIndex /*0x454029*/
            || (BYTE1(v1->Audio7[0]) || !FiringOccupantIndex)
            && (v15 = v1->Audio7[2], v15 > 0)
            && (*(unsigned __int8 (**)(int *, int, unsigned int))(v1->Overpowerers[0] + 8))(
                 v1->Overpowerers,
                 FiringOccupantIndex + v15,
                 0) )
          {
            v16 = v1->Audio7[1]; /*0x454030*/
            v17 = v1->Occupants[0]; /*0x454033*/
            v1->Audio7[1] = v16 + 1; /*0x454039*/
            *(unsigned int *)(v17 + 4 * v16) = (unsigned int)(v33); /*0x454040*/
          }
          v13 = v34; /*0x454043*/
          if ( ++v4 >= v34 ) /*0x45404a*/
            goto LABEL_24; /*0x45404a*/
        }
      }
    }
  }
  return result; /*0x45417e*/

}
}  // G42.18 ns repair
// 0x455D50
namespace gamemd {
int BuildingClass::AssignDestination_SyncLog()
{

  TechnoClass *v3; // [esp+8h] [ebp+4h]

  if ( this->LightSource != 19 ) /*0x455d5a*/
  {
    if ( (*((unsigned __int8 (**)(BuildingClass *))this->TechnoClass + 161))(this) /*0x455d73*/
      || this->Type->ConstructionYard )
    {
      TechnoClass::SetFocus((TechnoClass *)this, (int)v3); /*0x455d80*/
    }
  int v4; // [esp+Ch] [ebp+8h]
    IPersistStream::Stub(v3, v4); /*0x455d8d*/
  }
  int result; // eax
  return result; /*0x455d93*/

}
}
// 0x4DFCB0
namespace gamemd {
int BuildingClass::FindClosestForRepair(unsigned int * a1)
{
  double v1; // st7
  int v3; // ebp
  BuildingClass *v4; // ebx
  unsigned int *v5; // edi
  unsigned int *v6; // eax
  int v7; // eax
  int v8; // edi
  int v9; // eax
  AbstractClass *movementDestination; // ecx
  int v12; // [esp+24h] [ebp-2Ch]
  AbstractClass *v13; // [esp+28h] [ebp-28h]
  int v14; // [esp+30h] [ebp-20h]
  int v15; // [esp+34h] [ebp-1Ch]
  char v16[12]; // [esp+38h] [ebp-18h] BYREF
  char v17[12]; // [esp+44h] [ebp-Ch] BYREF

  v13 = 0; /*0x4dfcbf*/
  v12 = 0x7FFFFFFF; /*0x4dfccd*/
  v3 = a1->owner->airspeedMultiplier[0] - 1; /*0x4dfcdb*/
  if ( v3 < 0 ) /*0x4dfcdc*/
    goto LABEL_10; /*0x4dfcdc*/
  do
  {
    v4 = *(BuildingClass **)(a1->owner->firepowerMultiplier[1] + 4 * v3); /*0x4dfcf3*/
    v5 = (unsigned int *)(*((int (**)(BuildingClass *, char *))v4->vfptr + 18))(v4, v16); /*0x4dfcff*/
    v6 = (unsigned int *)(*((int (**)(FootClass *, char *))a1->vfptr + 18))(a1, v17); /*0x4dfd08*/
    v14 = v6[1] - v5[1]; /*0x4dfd28*/
    v15 = v6[2] - v5[2]; /*0x4dfd2c*/
    Math::Sqrt((double)(*v6 - *v5) * (double)(*v6 - *v5) + (double)v14 * (double)v14 + (double)v15 * (double)v15); /*0x4dfd55*/
    (*((unsigned short *)&(v7))) = Math::RoundToInt(v1); /*0x4dfd5d*/
    v8 = v7; /*0x4dfd62*/
    if ( v7 < v12 )
    {
      v9 = a1 ? ((*((int (**)(FootClass *))a1->vfptr + 11))(a1) == 15 ? (unsigned int)a1 : 0) : 0;
      if ( (uint8_t)BuildingClass::CanRepair(v4, v9) ) /*0x4dfd89*/
      {
        v12 = v8; /*0x4dfd92*/
        v13 = (AbstractClass *)v4; /*0x4dfd96*/
      }
    }
    --v3; /*0x4dfd9a*/
  }
  while ( v3 >= 0 );
  if ( v13 ) /*0x4dfda7*/
  {
    movementDestination = a1->movementDestination; /*0x4dfdba*/
    a1->shouldEnterOccupiable = 1; /*0x4dfdc0*/
    if ( movementDestination != v13 || a1->currentMission != 8 ) /*0x4dfdd2*/
    {
      (*((void (**)(FootClass *, AbstractClass *, int))a1->vfptr + 288))(a1, v13, 1); /*0x4dfddb*/
      (*((void (**)(FootClass *, int, int))a1->vfptr + 122))(a1, 8, 1); /*0x4dfde9*/
    }
    return 1; /*0x4dfdf0*/
  }
  else
  {
  LABEL_10:
    a1->shouldEnterOccupiable = 0; /*0x4dfda9*/
    return 0; /*0x4dfdb0*/
  }
}
}
// 0x4DFE00
namespace gamemd {
int BuildingClass::FindClosestForRepair2(int a1)
{
  double v1; // st7
  int v2; // eax
  int v4; // ebp
  BuildingClass *v5; // ebx
  FootClass *v6; // eax
  unsigned int *v7; // edi
  unsigned int *v8; // eax
  int v9; // eax
  AbstractClass *movementDestination; // ecx
  int v12; // [esp+24h] [ebp-2Ch]
  AbstractClass *v13; // [esp+28h] [ebp-28h]
  int v14; // [esp+30h] [ebp-20h]
  int v15; // [esp+34h] [ebp-1Ch]
  char v16[12]; // [esp+38h] [ebp-18h] BYREF
  char v17[12]; // [esp+44h] [ebp-Ch] BYREF

  v2 = stru_A8EB00.vfptr[20] - 1; /*0x4dfe0f*/
  v13 = 0; /*0x4dfe17*/
  v4 = 0x7FFFFFFF; /*0x4dfe1f*/
  v12 = stru_A8EB00.vfptr[20] - 1; /*0x4dfe24*/
  if ( stru_A8EB00.vfptr[20] - 1 < 0 ) /*0x4dfe28*/
    goto LABEL_10; /*0x4dfe28*/
  do
  {
    v5 = *(BuildingClass **)(stru_A8EB00.vfptr[17] + 4 * v2); /*0x4dfe36*/
    if ( a1 )
      v6 = (*((int (**)(FootClass *))a1->vfptr + 11))(a1) == 15 ? a1 : 0;
    else
      v6 = 0; /*0x4dfe3b*/
    if ( (uint8_t)BuildingClass::CanRepair(v5, (int)v6) ) /*0x4dfe54*/
    {
      v7 = (unsigned int *)(*((int (**)(BuildingClass *, char *))v5->vfptr + 18))(v5, v16); /*0x4dfe6b*/
      v8 = (unsigned int *)(*((int (**)(FootClass *, char *))a1->vfptr + 18))(a1, v17); /*0x4dfe74*/
      v14 = v8[1] - v7[1]; /*0x4dfe92*/
      v15 = v8[2] - v7[2]; /*0x4dfe9c*/
      Math::Sqrt((double)(*v8 - *v7) * (double)(*v8 - *v7) + (double)v15 * (double)v15 + (double)v14 * (double)v14); /*0x4dfec1*/
      (*((unsigned short *)&(v9))) = Math::RoundToInt(v1); /*0x4dfec9*/
      if ( v9 < v4 ) /*0x4dfed0*/
      {
        v4 = v9; /*0x4dfed2*/
        v13 = (AbstractClass *)v5; /*0x4dfed4*/
      }
    }
    v2 = --v12; /*0x4dfedc*/
  }
  while ( v12 >= 0 );
  if ( v13 ) /*0x4dfeed*/
  {
    movementDestination = a1->movementDestination; /*0x4dff00*/
    a1->shouldGarrisonStructure = 1; /*0x4dff06*/
    if ( movementDestination != v13 || a1->currentMission != 8 ) /*0x4dff18*/
    {
      (*((void (**)(FootClass *, AbstractClass *, int))a1->vfptr + 288))(a1, v13, 1); /*0x4dff21*/
      (*((void (**)(FootClass *, int, int))a1->vfptr + 122))(a1, 8, 1); /*0x4dff2f*/
    }
    return 1; /*0x4dff36*/
  }
  else
  {
  LABEL_10:
    a1->shouldGarrisonStructure = 0; /*0x4dfeef*/
    return 0; /*0x4dfef6*/
  }
}
}
// 0x629720
namespace gamemd {
int BuildingClass::AnimController(void *a1)
{

  unsigned int *Value; // eax
  int v3; // ecx
  unsigned int v4; // eax
  int v5; // ebx
  int v6; // ecx
  int v7; // edx
  int v8; // edx
  unsigned int *v10; // ecx
  int v11; // edx
  unsigned int v12[4]; // [esp+Ch] [ebp-10h] BYREF

  Value = (&this->LightSource)->GetValue(v12); /*0x629736*/
  v3 = this->q048; /*0x62973b*/
  v4 = *Value; /*0x62973e*/
  if ( v3 < 0 ) /*0x629742*/
    goto LABEL_6; /*0x629742*/
  if ( v3 <= 1 ) /*0x629747*/
  {
    v5 = 0; /*0x629755*/
    v6 = 3; /*0x629757*/
    goto LABEL_8; /*0x62975c*/
  }
  if ( v3 == 2 ) /*0x62974c*/
    v5 = 80; /*0x62974e*/
  else
LABEL_6:
    v5 = 160; /*0x62975e*/
  v6 = 4; /*0x629763*/
LABEL_8:
  v7 = this->customSound_controller + 1; /*0x629768*/
  this->customSound_controller = v7; /*0x62976e*/
  if ( v7 >= v6 ) /*0x629773*/
  {
    v8 = this->u32_4C; /*0x629775*/
    this->customSound_controller = 0; /*0x629778*/
    this->u32_4C = v8 + 1; /*0x629782*/
    if ( v8 + 1 >= 10 ) /*0x629788*/
      return 1; /*0x629792*/
    v10 = (unsigned int *)this->q044; /*0x629793*/
    if ( v10 ) /*0x629798*/
    {
      v10[45] = *(unsigned int *)&DataGlobal_A8EB00[644]; /*0x6297af*/
      v11 = v12[2]; /*0x6297b2*/
      v10[48] = 128; /*0x6297b7*/
      v10[46] = v11; /*0x6297bf*/
      v10[47] = 128; /*0x6297c5*/
      *(unsigned int *)&this->LightSource->u32_AC = v5 + this->LightSource + 10 * ((((v4 >> 12) + 1) >> 1) & 7); /*0x6297d7*/
    }
  }
  return 0; /*0x62978a*/

}
}
// 0x70BF50
namespace gamemd {
int BuildingClass::AllocAndCtor(BuildingClass * aP0, int aP2)
{


  int result; // eax
  result = RadioClass::LoadState(aP0, aP2); /*0x70bf5c*/
  if ( result >= 0 ) /*0x70bf65*/
  {
    aP0->planningToken = 0; /*0x70bf79*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, aP0 + 540); /*0x70bf7f*/
  int v3; // edi
    v3 = (int)(aP0 + 772); /*0x70bf84*/
  int v4; // ebp
    v4 = 8; /*0x70bf8a*/
    do /*0x70bf9e*/
    {
      ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, v3); /*0x70bf95*/
      v3 += 4; /*0x70bf9a*/
      --v4; /*0x70bf9d*/
    }
    while ( v4 ); /*0x70bf9e*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, aP0 + 332); /*0x70bfac*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, aP0 + 740); /*0x70bfbd*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, aP0 + 536); /*0x70bfce*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, aP0 + 1280); /*0x70bfdf*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, aP0 + 692); /*0x70bff0*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, aP0 + 696); /*0x70c001*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, aP0 + 700); /*0x70c012*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, aP0 + 1076); /*0x70c023*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, aP0 + 720); /*0x70c034*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, aP0 + 728); /*0x70c045*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, aP0 + 732); /*0x70c056*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, aP0 + 704); /*0x70c067*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, aP0 + 716); /*0x70c078*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, aP0 + 736); /*0x70c089*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, aP0 + 724); /*0x70c09a*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, aP0 + 1304); /*0x70c0ab*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, aP0 + 1308); /*0x70c0bc*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, aP0 + 628); /*0x70c0cd*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, aP0 + 632); /*0x70c0de*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, aP0 + 660); /*0x70c0ef*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, aP0 + 460); /*0x70c100*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, aP0 + 464); /*0x70c111*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, aP0 + 284); /*0x70c122*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, aP0 + 680); /*0x70c133*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, aP0 + 684); /*0x70c144*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, aP0 + 688); /*0x70c155*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, aP0 + 1064); /*0x70c166*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, aP0 + 1068); /*0x70c177*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, aP0 + 280); /*0x70c188*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, aP0 + 804); /*0x70c199*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, aP0 + 304); /*0x70c1aa*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, aP0 + 300); /*0x70c1bb*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, aP0 + 712); /*0x70c1cc*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, aP0 + 468); /*0x70c1dd*/
    AudioController::Init(&aP0->turretRotateSoundController); /*0x70c1e8*/
    aP0->isTurretRotateSoundPlaying = 1; /*0x70c1f3*/
    aP0->turretIsRotating = 0; /*0x70c1fd*/
    AudioController::Init(&aP0->gattlingSoundController); /*0x70c203*/
    aP0->isGattlingSoundPlaying = 0; /*0x70c20e*/
    aP0->unknown_4BC = 0; /*0x70c214*/
    AudioController::Init(&aP0->unusedGattlingSoundController); /*0x70c21a*/
    aP0->isUnusedGattlingSoundPlaying = 0; /*0x70c225*/
    aP0->unknown_4D8 = 0; /*0x70c22b*/
    AudioController::Init(&aP0->queuedVoiceSoundController); /*0x70c231*/
    aP0->queuedVoiceIndex = -1; /*0x70c23a*/
    aP0->unknown_4F4 = -1; /*0x70c240*/
    return 0; /*0x70c246*/
  }
  return result; /*0x70c249*/

}
}
// 0x712130
namespace gamemd {
int BuildingClass::processCapture()
{

  int v1; // edx
  v1 = this->u32_898; /*0x712130*/
  if ( !v1 ) /*0x712138*/
    return 0; /*0x712138*/
  int v2; // ecx
  v2 = this->u32_8B4; /*0x71213a*/
  char result; // al
  result = 1; /*0x712140*/
  if ( v1 != v2 && v1->location <= 1 && (!v2 || *(int *)(v2 + 156) <= 1) ) /*0x71215f*/
    return 0; /*0x712161*/
  return result; /*0x712163*/
}
}
// 0x739EC0
namespace gamemd {
void* BuildingClass_ProcessSell(int * p_ComPtr_field_0x14, double a3, int a4, int a5, char a6)
{
    int v6; // ecx
    int v8; // eax
    Cell *v9; // eax
    Cell *v10; // eax
    int v11; // ebx
    TeamClass *v12; // ecx
    int v13; // edx
    int v14; // esi
    unsigned int v15; // eax
    int v16; // edx
    int v17; // esi
    unsigned int v18; // eax
    int v19; // eax
    int *v20; // eax
    int v21; // esi
    int v22; // eax
    int v23; // eax
    int v24; // ecx
    int v25; // eax
    unsigned int *v26; // edx
    TeamClass *v27; // ecx
    unsigned int *v28; // eax
    int v31; // eax
    unsigned int *v32; // eax
    int v33; // esi
    int v34; // edi
    unsigned int *v35; // eax
    int v36; // kr04_4
    int64_t v37; // rax
    int (__stdcall ***v38)(unsigned int, void *, int *); // eax
    int v39; // esi
    int v40; // eax
    int q008; // edi
    int v42; // ecx
    const IID *v43; // edi
    int *p_ComPtr_field_0x20; // esi
    bool v45; // zf
    int q004; // eax
    unsigned int *v47; // esi
    Cell *v48; // eax
    int v49; // eax
    Cell *v50; // eax
    AbstractClass **Building; // esi
    PlacementList *v52; // eax
    CellClass *v53; // eax
    unsigned short *v54; // edi
    unsigned short *v55; // eax
    int v56; // eax
    int v57; // ecx
    int v58; // ecx
    bool v59; // bl
    int v60; // eax
    int v61; // ecx
    CellClass *v62; // eax
    int Member; // eax
    unsigned int *v64; // edi
    CellClass *v65; // eax
    int v66; // eax
    int v67; // esi
    unsigned int *v68; // esi
    int v69; // eax
    BuildingClass *v70; // ecx
    int v71; // esi
    void *v72; // eax
    void *v73; // eax
    int v74; // eax
    int v75; // eax
    int v76; // ecx
    int v77; // edx
    CellClass *v78; // eax
    int v79; // eax
    int *v80; // edi
    int v81; // ecx
    int v82; // eax
    int v84; // eax
    int v86; // eax
    CellClass *v87; // esi
    int landType; // ebx
    AnimClass *v89; // esi
    int v90; // eax
    int v91; // eax
    void *WarheadVersusMultiplier; // eax
    int v93; // esi
    int v94; // edi
    int *v95; // eax
    unsigned int *v96; // edi
    int v97; // eax
    int v98; // esi
    unsigned int *v99; // eax
    int v101; // esi
    int v102; // eax
    void *v104; // [esp+98h] [ebp-48h]
    char v105; // [esp+9Ch] [ebp-44h]
    char v106; // [esp+9Ch] [ebp-44h]
    TechnoClass *v107; // [esp+A0h] [ebp-40h]
    int v108; // [esp+A4h] [ebp-3Ch]
    unsigned int *v109; // [esp+A8h] [ebp-38h]
    ComPtr v110; // [esp+B0h] [ebp-30h] BYREF
    int v111; // [esp+D4h] [ebp-Ch]
    int v112; // [esp+D8h] [ebp-8h]

    _EBP = v6; /*0x739ec5*/
v110.q00C = *(unsigned int *)(*(int (**)(int, int *))(*(unsigned int *)v6 + 440))( /*0x739ee2*/ v6, (int *)(&v110.ComPtr_field_0x08));


    if ( this == 2 || !this ) /*0x739eea*/
    {
      if ( *(unsigned char *)(_EBP + 1676) ) /*0x739eec*/
      {
        TechnoClass::Deploy(v107, a3); /*0x739ef8*/
        (v8) = ((v8) & ~0xFF) | ((unsigned int)(*(unsigned char *)(_EBP + 144)) & 0xFF); /*0x739efd*/
        if ( !(unsigned char)v8 ) /*0x739f05*/
          return (void*)v8; /*0x739f05*/
      }
    }
    if ( this != 2 ) /*0x739f0e*/
    {
  LABEL_202:
      v96 = (unsigned int *)((CellCoord *)&DataGlobal_87F7E8)->To_CellObj( (int16_t *)((int16_t *)&v110.q00C)); /*0x73afd4*/
      if ( *(unsigned char *)(*(unsigned int *)(_EBP + 1732) + 3368) /*0x73aff9*/
        || (uint8_t)((TechnoTypeClass *)(int *)_EBP)->HasVoiceResponse( 17) )
      {
        v97 = v96[17]; /*0x73b002*/
        if ( v97 != -1 ) /*0x73b008*/
        {
          v98 = *(unsigned int *)(*(unsigned int *)g_BuildingTypeClass_Array + 4 * v97); /*0x73b010*/
          if ( *(unsigned char *)(v98 + 557) || *(unsigned char *)(v98 + 680) && *(unsigned int *)(*(unsigned int *)(_EBP + 1732) + 1460) == 12 ) /*0x73b034*/
          {
            v99 = (unsigned int *)(*(int (**)(int, int *))(*(unsigned int *)_EBP + 72))( _EBP, (int *)((int)((int)(&v110.q020)))); /*0x73b042*/
            StartAudioControllerAt( *(unsigned int *)(v98 + 496), (unsigned int *)(v99), 0); /*0x73b04d*/
            ((BuildingClass *)(int)v96)->SellEffects( -1); /*0x73b056*/
            __asm /*0x73b05b*/
            {
              fld dword ptr [ebp+334h]
              fadd ds:flt_7F4E38
            }
            *(unsigned char *)(_EBP + 1717) = 0; /*0x73b067*/
            __asm { fstp dword ptr [ebp+334h] } /*0x73b06e*/
            *(float *)(_EBP + 820) = _ET1; /*0x73b06e*/
          }
        }
      }
      v101 = *(unsigned int *)_EBP; /*0x73b074*/
      v102 = (*(int (**)(int, int *, unsigned int))(*(unsigned int *)_EBP + 440))( _EBP, (int *)(&v110.ComPtr_field_0x08), 0); /*0x73b080*/
      (*(void (**)(int, int))(v101 + 1332))(_EBP, v102); /*0x73b089*/
      (v8) = ((v8) & ~0xFF) | ((unsigned int)(*(unsigned char *)(_EBP + 144)) & 0xFF); /*0x73b08f*/
      if ( (unsigned char)v8 ) /*0x73b097*/
        (v8) = ((v8) & ~0xFF) | ((unsigned int)(FootClass::UpdateAI((FootClass *)this, _EBP, (int)v96, a3, (int)v107)) & 0xFF); /*0x73b0a0*/
      return (void*)v8; /*0x73b0a0*/
    }
    v110.q004 = ((Team *)_EBP)->GetMember( 0); /*0x739f1d*/
    if ( *(unsigned char *)(*(unsigned int *)(_EBP + 1732) + 1040) ) /*0x739f27*/
    {
      if ( !((HouseClass *)*(HouseClass **)(_EBP + 540))->GainedPoweredCenter( *(unsigned int *)(_EBP + 1732)) ) /*0x739f38*/
      {
        v9 = (Cell *)(*(int (**)(int))(*(unsigned int *)_EBP + 444))(_EBP); /*0x739f46*/
        if ( !((Cell *)v9)->IsBridge() ) /*0x739f4e*/
          TechnoClass::Deactivate((TechnoClass *)_EBP); /*0x739f59*/
      }
    }
    v10 = (Cell *)(*(int (**)(int))(*(unsigned int *)_EBP + 444))(_EBP); /*0x739f63*/
    v11 = (int)((Cell *)v10)->IsBridge(); /*0x739f70*/
    if ( (*(int (**)(int))(*(unsigned int *)_EBP + 388))(_EBP) == 9 ) /*0x739f80*/
    {
      if ( !v11 ) /*0x739f88*/
        goto LABEL_47; /*0x739f88*/
      if ( v11 == *(unsigned int *)(_EBP + 1444) || v11 == *(unsigned int *)(_EBP + 692) ) /*0x739f9c*/
      {
        v12 = v11->q034; /*0x739fa2*/
        if ( v12 ) /*0x739fa7*/
          TeamClass::Update_0(((TeamClass *)v12), 1, _EBP, g_UnitSelectionState, 0, 0); /*0x739fb7*/
        if ( *(int *)((*(int (**)(int))(*(unsigned int *)_EBP + 132))(_EBP) + 1228) > 0 /*0x739fdc*/
          && (uint8_t)((House *)*(House **)(_EBP + 540))->IsHumanPlayer() )
        {
          v110.q014 = *(unsigned int *)(_EBP + 156); /*0x739ff1*/
          v13 = *(unsigned int *)_EBP; /*0x739ff5*/
          v110.q018 = *(unsigned int *)(_EBP + 160); /*0x739ffb*/
          v110.q01C = *(unsigned int *)(_EBP + 164); /*0x73a002*/
          v14 = (*(int (**)(int))(v13 + 132))(_EBP) + 1212; /*0x73a015*/
          v15 = Random::State( (void *)(&Randomizer_Global)); /*0x73a01b*/
          p_ComPtr_field_0x14 = &v110.q014; /*0x73a022*/
          StartAudioControllerAt( /*0x73a033*/
            *(unsigned int *)(*(unsigned int *)(v14 + 4) + 4 * (v15 % *(unsigned int *)(v14 + 16))),
            &v110.q014,
            0);
        }
        if ( *(int *)((*(int (**)(int))(*(unsigned int *)_EBP + 132))(_EBP) + 1312) > 0 ) /*0x73a050*/
        {
          v110.q014 = *(unsigned int *)(_EBP + 156); /*0x73a05e*/
          v110.q018 = *(unsigned int *)(_EBP + 160); /*0x73a067*/
          v16 = *(unsigned int *)_EBP; /*0x73a06b*/
          v110.q01C = *(unsigned int *)(_EBP + 164); /*0x73a071*/
          v17 = (*(int (**)(int))(v16 + 132))(_EBP) + 1296; /*0x73a082*/
          v18 = Random::State( (void *)(&Randomizer_Global)); /*0x73a088*/
          p_ComPtr_field_0x14 = &v110.q014; /*0x73a08f*/
          StartAudioControllerAt( /*0x73a0a0*/
            *(unsigned int *)(*(unsigned int *)(v17 + 4) + 4 * (v18 % *(unsigned int *)(v17 + 16))),
            &v110.q014,
            0);
        }
        v19 = (*(int (**)(int))(*(unsigned int *)_EBP + 700))(_EBP); /*0x73a0aa*/
        ((HouseClass *)v11->u32_21C)->AddPower( v19); /*0x73a0b7*/
        while ( *(unsigned int *)(_EBP + 280) ) /*0x73a0bc*/
        {
          v20 = (int *)FootClass::PopAndProcess((FootClass *)_EBP); /*0x73a0c8*/
          p_ComPtr_field_0x14 = v20; /*0x73a0cd*/
          if ( v20 ) /*0x73a0d1*/
          {
            if ( v20[70] ) /*0x73a0d3*/
            {
              do /*0x73a10a*/
              {
                v21 = FootClass::PopAndProcess((FootClass *)p_ComPtr_field_0x14); /*0x73a0e4*/
                if ( v21 ) /*0x73a0e8*/
                {
                  v22 = (*(int (**)(int))(*(unsigned int *)v21 + 700))(v21); /*0x73a0ee*/
                  ((HouseClass *)v11->u32_21C)->AddPower( v22); /*0x73a0fb*/
                  (*(void (**)(int))(*(unsigned int *)v21 + 248))(v21); /*0x73a104*/
                }
              }
              while ( p_ComPtr_field_0x14->u32_118 ); /*0x73a10a*/
            }
            v23 = p_ComPtr_field_0x14->vt_slot_700((int *)(p_ComPtr_field_0x14)); /*0x73a118*/
            ((HouseClass *)v11->u32_21C)->AddPower( v23); /*0x73a125*/
            p_ComPtr_field_0x14->vt_slot_248((int *)(p_ComPtr_field_0x14)); /*0x73a12e*/
          }
        }
        v24 = *(unsigned int *)(_EBP + 1684); /*0x73a13e*/
        if ( v24 ) /*0x73a146*/
        {
          v25 = (*(int (**)(int))(*(unsigned int *)v24 + 700))(v24); /*0x73a14a*/
          ((HouseClass *)v11->u32_21C)->AddPower( v25); /*0x73a157*/
          v26 = (unsigned int *)(*(unsigned int *)(*(unsigned int *)(_EBP + 1684) + 1692) + 44); /*0x73a172*/
          *v26 = (unsigned int)*(unsigned int * *)((char *)&stru_A8EB00 + 644); /*0x73a175*/
          v26[1] = v111; /*0x73a17b*/
          v26[2] = 50; /*0x73a17e*/
          BuildingClass::Deploy((BuildingClass *)v107, _EBP, (int)p_ComPtr_field_0x14); /*0x73a18d*/
        }
        v27 = *(TeamClass **)(_EBP + 52); /*0x73a192*/
        if ( v27 ) /*0x73a197*/
          TeamClass::Update_0(((TeamClass *)v27), 48, _EBP, g_UnitSelectionState, 0, 0); /*0x73a1a7*/
        if ( *(unsigned char *)(v11->q148 + 5805) ) /*0x73a1b2*/
        {
          v28 = (unsigned int *)(*(int (**)(int, int *))(*(unsigned int *)_EBP + 72))( _EBP, (int *)(&v110.q020)); /*0x73a1c8*/
          StartAudioControllerAt( *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 616), (unsigned int *)(v28), 0); /*0x73a1d9*/
          if ( v11->u32_568 ) /*0x73a1de*/
          {
            ((BuildingClass *)v11)->ClearAnims( 3); /*0x73a1ec*/
            BuildingClass::GetHealthRatio( (BuildingClass *)v11); /*0x73a1f3*/
            _EDX = *(unsigned int *)&g_RulesClass_Instance; /*0x73a1f8*/
            __asm /*0x73a1fe*/
            {
              fcomp qword ptr [edx+1700h]
              fnstsw ax
            }
            BuildingClass::PlayUpgradeAnim((BuildingClass *)v11, 10, (_AX & 0x4100) != 0, 0, 0); /*0x73a21d*/
          }
        }
        (*((unsigned char *)&(v8))) = (*(char (**)(int))(*(unsigned int *)_EBP + 248))(_EBP); /*0x73a227*/
        return (void*)v8; /*0x73a234*/
      }
    }
    if ( v11 /*0x73a26d*/
      && *(unsigned char *)(v11->q148 + 5806)
      && (*(int (**)(int))(*(unsigned int *)_EBP + 388))(_EBP) == 7
      && *(unsigned int *)(_EBP + 1444) == v11 )
    {
      if ( (*(int (**)(int, int, int))(*(unsigned int *)_EBP + 632))(_EBP, 15, v11) == 1 ) /*0x73a284*/
      {
        ((TechnoClass *)_EBP)->SetFocus( 0); /*0x73a28e*/
        *(unsigned char *)(_EBP + 140) = 0; /*0x73a297*/
        *(unsigned int *)(_EBP + 196) = 0; /*0x73a29e*/
        TechnoClass::SetMember81((TechnoClass *)_EBP, 0); /*0x73a2a8*/
        TechnoClass::SetSpread((TechnoClass *)_EBP, 0); /*0x73a2b1*/
        v31 = *(unsigned int *)(_EBP + 704); /*0x73a2b6*/
        if ( v31 && v31->rockerLinkedUnit ) /*0x73a2c0*/
          ((CaptureManagerClass *)_EBP)->FreeUnit( v11, _EBP, (unsigned int *)(v107), v108, (unsigned int *)(v109)); /*0x73a2cd*/
        (*(void (**)(int))(*(unsigned int *)_EBP + 212))(_EBP); /*0x73a2d7*/
        CellClass::AddObject(&v11->q114, (unsigned int *)_EBP); /*0x73a2e4*/
        (*(void (**)(int))(*(unsigned int *)_EBP + 284))(_EBP); /*0x73a2ee*/
        v8 = *(unsigned int *)(v11->q148 + 3816); /*0x73a2fa*/
        if ( v8 > 0 ) /*0x73a302*/
          *(unsigned char *)(v11->u32_21C + 22392) = 1; /*0x73a30e*/
        return (void*)v8; /*0x73a31c*/
      }
  LABEL_105:
      (*(void (**)(int, unsigned int, int))(*(unsigned int *)_EBP + 1152))(_EBP, 0, 1); /*0x73a796*/
      (*(void (**)(int, int, unsigned int))(*(unsigned int *)_EBP + 488))(_EBP, 5, 0); /*0x73a7ae*/
      (*((unsigned char *)&(v8))) = (*(char (**)(int, int *, int, int))(*(unsigned int *)_EBP + 372))( _EBP, (int *)(&dword_B1CFE8), 1, 1); /*0x73a7c2*/
      return (void*)v8; /*0x73a7cf*/
    }
  LABEL_47:
    if ( (*(int (**)(int))(*(unsigned int *)_EBP + 388))(_EBP) == 7 /*0x73a33d*/
      || (*(int (**)(int))(*(unsigned int *)_EBP + 388))(_EBP) == 25 )
    {
      if ( v110.q004 ) /*0x73a349*/
      {
        if ( (*(int (**)(int))(*(unsigned int *)v110.q004 + 44))(v110.q004) == 6 ) /*0x73a359*/
        {
          v32 = (unsigned int *)(*(int (**)(int, int *))(*(unsigned int *)_EBP + 72))( _EBP, (int *)(&v110.q020)); /*0x73a369*/
          v33 = ((int16_t)(*v32 / 256) << 8) + 128; /*0x73a3a5*/
          v34 = ((int16_t)(v32[1] / 256) << 8) + 128; /*0x73a3ab*/
v35 = (unsigned int *)(*(int (**)(int, int *, int))(*(unsigned int *)v110.q004 + 168))( /*0x73a3b1*/ v110.q004, (int *)(&v110.q020), _EBP);



          v36 = v35[1]; /*0x73a3d3*/
          v37 = ((int16_t)(*v35 / 256) << 8) + 128; /*0x73a3e6*/
          v11 = ((((v37) >> 32) & 0xFF) + (int)v37) >> 8; /*0x73a41f*/
          if ( (uint16_t)(v33 / 256) == (unsigned short)v11 /*0x73a437*/
            && (uint16_t)(v34 / 256) == (uint16_t)((((int16_t)(v36 / 256) << 8) + 128) / 256) )
          {
            v38 = *(int (__stdcall ****)(unsigned int, void *, int *))(_EBP + 1652); /*0x73a43d*/
            *(unsigned int *)v110.__pad_000 = 0; /*0x73a443*/
            if ( !v38 ) /*0x73a44d*/
              goto LABEL_61; /*0x73a44d*/
            v39 = (**v38)(v38, &unk_818858, &v110.ComPtr_field_0x08); /*0x73a45e*/
            if ( v39 >= 0 ) /*0x73a462*/
            {
              q008 = v110.ComPtr_field_0x08; /*0x73a471*/
              ((ComPtr *)(&v110))->Release_Alt(); /*0x73a479*/
              v40 = q008; /*0x73a47e*/
            }
            else
            {
              ((ComPtr *)(&v110))->Release_Alt(); /*0x73a468*/
              v40 = 0; /*0x73a46d*/
            }
            *(unsigned int *)v110.__pad_000 = v40; /*0x73a482*/
            if ( v39 < 0 && v39 != -2147467262 ) /*0x73a48e*/
              sub_7DC720(v39); /*0x73a491*/
            if ( !v40 ) /*0x73a49c*/
  LABEL_61:
              sub_7DC720(-2147467261); /*0x73a4a3*/
            (*(void (__stdcall **)(int, int *))(v40->u32_C)(v40, &v110.q020); /*0x73a4b4*/
            v42 = 4; /*0x73a4b7*/
            v43 = &stru_7E9A40; /*0x73a4bc*/
            p_ComPtr_field_0x20 = &v110.q020; /*0x73a4c1*/
            v45 = 1; /*0x73a4c5*/
            q004 = v110.q004; /*0x73a4c7*/
            do /*0x73a4cb*/
            {
              if ( !v42 ) /*0x73a4cb*/
                break; /*0x73a4cb*/
              v45 = *p_ComPtr_field_0x20++ == *(unsigned int *)v43->Data2; /*0x73a4cb*/
              v43 = (const IID *)((char *)v43 + 4); /*0x73a4cb*/
              --v42; /*0x73a4cb*/
            }
            while ( v45 ); /*0x73a4cb*/
            if ( v45 && *(unsigned char *)(*(unsigned int *)(v110.q004 + 1312) + 5801) && !*(unsigned int *)(_EBP + 1444) ) /*0x73a4df*/
              *(unsigned int *)(_EBP + 1444) = v110.q004; /*0x73a4e9*/
            if ( q004 == *(unsigned int *)(_EBP + 1444) ) /*0x73a4f5*/
            {
              FootClass::UpdateAI((FootClass *)2, _EBP, (int)v43, a3, (int)v107); /*0x73a4fb*/
              (*(void (**)(int, int))(*(unsigned int *)_EBP + 628))(_EBP, 21); /*0x73a507*/
              if ( !*(unsigned int *)(_EBP + 1652) ) /*0x73a50d*/
                sub_7DC720(-2147467261); /*0x73a51c*/
              (*(void (__stdcall **)(unsigned int))(**(unsigned int **)(_EBP + 1652) + 92))(*(unsigned int *)(_EBP + 1652)); /*0x73a52b*/
              (*((unsigned char *)&(v8))) = v110.__pad_000; /*0x73a52e*/
              if ( *(unsigned int *)v110.__pad_000 ) /*0x73a534*/
                (*((unsigned char *)&(v8))) = (*(char (__stdcall **)(unsigned int))(**(unsigned int **)v110.__pad_000 + 8))(*(unsigned int *)v110.__pad_000); /*0x73a53d*/
              return (void*)v8; /*0x73a547*/
            }
            if ( *(unsigned int *)v110.__pad_000 ) /*0x73a550*/
              (*(void (__stdcall **)(unsigned int))(**(unsigned int **)v110.__pad_000 + 8))(*(unsigned int *)v110.__pad_000); /*0x73a555*/
          }
        }
      }
    }
    if ( *(unsigned char *)(_EBP + 1048) ) /*0x73a558*/
    {
      v47 = (unsigned int *)v110.q004; /*0x73a566*/
      if ( v110.q004 ) /*0x73a56c*/
      {
        if ( (*(int (**)(int))(*(unsigned int *)v110.q004 + 44))(v110.q004) == 6 /*0x73a588*/
          && (*(int (**)(int))(*(unsigned int *)_EBP + 388))(_EBP) == 7 )
        {
          v110.q004 = v110.q00C - 0x10000; /*0x73a599*/
          v110.ComPtr_field_0x08 = v110.q00C - 0x10000; /*0x73a5ac*/
          v48 = (Cell *)((CellCoord *)&DataGlobal_87F7E8)->To_CellObj( (int16_t *)((int16_t *)&v110.ComPtr_field_0x08)); /*0x73a5b0*/
          if ( v47 == ((Cell *)v48)->IsBridge() ) /*0x73a5be*/
          {
            v49 = (*(int (**)(int, int, unsigned int *))(*(unsigned int *)_EBP + 632))( _EBP, 21, (unsigned int *)(v47)) - 1; /*0x73a5ce*/
            if ( v49 ) /*0x73a5cf*/
            {
              if ( v49 != 4 ) /*0x73a5d4*/
                (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)_EBP + 372))( _EBP, (int *)(&dword_B1CFE8), 1, 0); /*0x73a5e4*/
            }
          }
        }
      }
    }
    v50 = (Cell *)(*(int (**)(int))(*(unsigned int *)_EBP + 444))(_EBP); /*0x73a5ef*/
    Building = (AbstractClass **)((Cell *)v50)->IsBridge(); /*0x73a5fc*/
    if ( !Building ) /*0x73a600*/
    {
      v105 = *(unsigned char *)(_EBP + 140); /*0x73a60b*/
      v52 = (PlacementList *)(*(int (**)(int))(*(unsigned int *)_EBP + 444))(_EBP); /*0x73a60e*/
      Building = (AbstractClass **)PlacementList::FindByType(v52, v105); /*0x73a61b*/
      if ( !Building ) /*0x73a61f*/
      {
        v106 = *(unsigned char *)(_EBP + 140); /*0x73a62a*/
        v53 = (CellClass *)(*(int (**)(int))(*(unsigned int *)_EBP + 444))(_EBP); /*0x73a62d*/
        Building = (AbstractClass **)((CellClass *)v53)->FindBuilding( v106); /*0x73a63a*/
      }
    }
    if ( Building == (AbstractClass **)_EBP ) /*0x73a63e*/
      Building = (AbstractClass **)AbstractClass::IsTechnoType(Building[12]); /*0x73a648*/
    if ( (*(int (**)(int))(*(unsigned int *)_EBP + 388))(_EBP) != 7
      || !Building
      || Building == (AbstractClass **)_EBP
      || (v54 = (unsigned short *)((int (*)(AbstractClass **, int *))(*Building)[12].vtable2)(
                           Building,
                           &v110.ComPtr_field_0x08),
          v55 = (unsigned short *)(*(int (**)(int, int *))(*(unsigned int *)_EBP + 440))( _EBP, (int *)(&v110.q004)),
          *v55 != *v54)
      || v55[1] != v54[1]
      || !(uint8_t)((Array *)_EBP)->Contains( (int)Building)
      || *(int *)(((int (*)(AbstractClass **))(*Building)[3].nextArrayIndex)(Building) + 1504) <= 0 )
    {
      if ( !*(unsigned char *)(_EBP + 1048) /*0x73a826*/
        || (*(int (**)(int))(*(unsigned int *)_EBP + 388))(_EBP) == 7
        && (!AbstractClass::IsTechnoType(*(AbstractClass **)(_EBP + 1444))
         || ((Team *)_EBP)->GetMember( 0) == *(unsigned int *)(_EBP + 1444))
        || (*(int (**)(int))(*(unsigned int *)_EBP + 388))(_EBP) == 16 )
      {
        goto LABEL_159; /*0x73a826*/
      }
      v58 = *(unsigned int *)(_EBP + 1444); /*0x73a82c*/
      v59 = v58 == 0; /*0x73a834*/
      if ( v58 ) /*0x73a839*/
      {
        if ( (*(int (**)(int))(*&v58->q0B0))(v58) == 11 ) /*0x73a843*/
        {
          v60 = *(unsigned int *)(_EBP + 156); /*0x73a84d*/
          v61 = *(unsigned int *)(_EBP + 160); /*0x73a84f*/
          v112 = *(unsigned int *)(_EBP + 164); /*0x73a855*/
          if ( *(unsigned short *)(*(unsigned int *)(_EBP + 1444) + 36) == (uint16_t)(v60 / 256) /*0x73a887*/
            && *(unsigned short *)(*(unsigned int *)(_EBP + 1444) + 38) == (uint16_t)(v61 / 256) )
          {
            v59 = 1; /*0x73a889*/
          }
        }
      }
      v110.q014 = *(unsigned int *)(_EBP + 156); /*0x73a897*/
      v110.q018 = *(unsigned int *)(_EBP + 160); /*0x73a8a8*/
      v110.q01C = *(unsigned int *)(_EBP + 164); /*0x73a8af*/
      v62 = (CellClass *)Coord::To_Cell( (Coord *)&DataGlobal_87F7E8, (void *)(&v110.q014)); /*0x73a8b3*/
      if ( !((Cell *)v62)->IsBridge() || v59 )
      {
        Member = ((Team *)_EBP)->GetMember( 0); /*0x73a8cf*/
        v64 = (unsigned int *)Member; /*0x73a8d6*/
        if ( v59
          || !Member
          || (*(int (**)(int))(*(unsigned int *)Member + 44))(Member) != 6
          || !v64->q520->WeaponsFactory
          || (v110.q014 = *(unsigned int *)(_EBP + 156),
              v110.q018 = *(unsigned int *)(_EBP + 160),
              v110.q01C = *(unsigned int *)(_EBP + 164),
              v65 = Coord::To_Cell( (Coord *)&DataGlobal_87F7E8, (void *)(&v110.q014)),
              ((Cell *)v65)->IsBridge() != v64) )
        {
          v66 = (*(int (**)(int, int))(*(unsigned int *)_EBP + 628))(_EBP, 8); /*0x73a93d*/
          if ( v66 == 23 )
          {
            if ( *(unsigned int *)(_EBP + 1444) ) /*0x73a94c*/
            {
              v67 = *(unsigned int *)(_EBP + 1444); /*0x73a956*/
              if ( v67 != (*(int (**)(int))(*(unsigned int *)_EBP + 444))(_EBP) ) /*0x73a965*/
              {
                if ( v67 && (*(unsigned char *)(v67 + 20) & 1) != 0 ) /*0x73a973*/
                  (*(void (**)(int, int, int))(*(unsigned int *)_EBP + 632))(_EBP, 14, v67); /*0x73a981*/
                goto LABEL_154; /*0x73a987*/
              }
            }
            if ( v64 )
              v68 = v64->ReturnZeroPos((unsigned int *)(v64)) == 6 ? v64 : 0;
            else
              v68 = (unsigned int *)(0); /*0x73a990*/
            v69 = *(unsigned int *)(_EBP + 1732); /*0x73a9a8*/
            if ( v69->Harvester_2 || v69->Weeder_2 ) /*0x73a9bc*/
            {
              (*(void (**)(int, int, int))(*(unsigned int *)_EBP + 488))(_EBP, 10, 1); /*0x73aaef*/
              goto LABEL_154; /*0x73aaf5*/
            }
            v70 = *(BuildingClass **)(_EBP + 728); /*0x73a9ca*/
            if ( v70 ) /*0x73a9d2*/
            {
              BuildingClass::InitBuildLimit(v70); /*0x73a9d4*/
              goto LABEL_154; /*0x73a9d9*/
            }
            if ( !(uint8_t)((House *)*(House **)(_EBP + 540))->IsCurrentPlayer() && v68 && *(unsigned char *)(v68[328] + 5821) ) /*0x73a9ff*/
            {
              v110.q004 = *BuildingPlacement::FindPosition( /*0x73aa27*/
                                          *(HouseClass **)(_EBP + 540),
                                          &v110.ComPtr_field_0x08,
                                          (unsigned int *)_EBP);
              if ( v110.q004 != g_UnitSelectionState ) /*0x73aa2b*/
              {
                (*(void (**)(int, int, unsigned int))(*(unsigned int *)_EBP + 488))(_EBP, 2, 0); /*0x73aa48*/
                v71 = *(unsigned int *)_EBP; /*0x73aa4e*/
                v72 = ((CellCoord *)&DataGlobal_87F7E8)->To_CellObj( (int16_t *)((int16_t *)&v110.q004)); /*0x73aa5d*/
                (*(void (**)(int, void *, int))(v71 + 1152))( _EBP, (void *)(v72), 1); /*0x73aa65*/
                (*(void (**)(int))(*(unsigned int *)_EBP + 492))(_EBP); /*0x73aa70*/
                v73 = ((CellCoord *)&DataGlobal_87F7E8)->To_CellObj( (int16_t *)((int16_t *)&v110.q004)); /*0x73aa80*/
                ((TechnoClass *)_EBP)->SetFocus( (int)v73); /*0x73aa88*/
                (*(void (**)(int, int, unsigned int))(*(unsigned int *)_EBP + 488))(_EBP, 11, 0); /*0x73aa96*/
                goto LABEL_154; /*0x73aa9c*/
              }
  LABEL_151:
              ((TechnoClass *)_EBP)->SetFocus( 0); /*0x73ab43*/
              goto LABEL_154; /*0x73ab4c*/
            }
            v74 = *(unsigned int *)(_EBP + 536); /*0x73aaa1*/
            if ( !v74 || v74 == *(unsigned int *)(_EBP + 1444) ) /*0x73aab1*/
            {
              ((FootClass *)_EBP)->ClearPathIndex(); /*0x73aac8*/
              (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)_EBP + 372))( _EBP, (int *)(&dword_B1CFE8), 1, 0); /*0x73aadb*/
            }
            else
            {
              (*(void (**)(int, int, int))(*(unsigned int *)_EBP + 1152))(_EBP, v74, 1); /*0x73aabb*/
            }
          }
          else if ( v66 != 10 ) /*0x73aafa*/
          {
            v75 = *(unsigned int *)(_EBP + 1732); /*0x73aafc*/
            if ( v75->Harvester_2 || v75->Weeder_2 ) /*0x73ab0c*/
            {
              if ( !*(unsigned int *)(_EBP + 536) ) /*0x73ab1e*/
              {
                if ( !*(unsigned int *)(_EBP + 1444) ) /*0x73ab4e*/
                  (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)_EBP + 372))( _EBP, (int *)(&dword_B1CFE8), 1, 0); /*0x73ab66*/
                goto LABEL_154; /*0x73ab66*/
              }
              (*(void (**)(int, int, unsigned int))(*(unsigned int *)_EBP + 488))(_EBP, 10, 0); /*0x73ab29*/
              (*(void (**)(int, unsigned int, int))(*(unsigned int *)_EBP + 1152))(_EBP, *(unsigned int *)(_EBP + 536), 1); /*0x73ab3d*/
              goto LABEL_151; /*0x73ab3d*/
            }
          }
        }
      }
  LABEL_154:
      v76 = *(unsigned int *)(_EBP + 160); /*0x73ab6c*/
      v77 = *(unsigned int *)(_EBP + 164); /*0x73ab78*/
      v110.q014 = *(unsigned int *)(_EBP + 156); /*0x73ab7e*/
      v110.q018 = v76; /*0x73ab86*/
      v110.q01C = v77; /*0x73ab90*/
      v78 = (CellClass *)Coord::To_Cell( (Coord *)&DataGlobal_87F7E8, (void *)(&v110.q014)); /*0x73ab94*/
      if ( ((Cell *)v78)->IsBridge() /*0x73abb8*/
        && !*(unsigned int *)(_EBP + 1444)
        && !*(unsigned int *)(_EBP + 1468)
        && !*(unsigned int *)(_EBP + 1432) )
      {
        (*(void (**)(int, int *, int, int))(*(unsigned int *)_EBP + 372))( _EBP, (int *)(&dword_B1CFE8), 1, 1); /*0x73abd0*/
      }
  LABEL_159:
      if ( (*(int (**)(int))(*(unsigned int *)_EBP + 388))(_EBP) == 5 ) /*0x73abe4*/
      {
        v110.q014 = *(unsigned int *)(_EBP + 156); /*0x73abf2*/
        v110.q018 = *(unsigned int *)(_EBP + 160); /*0x73abfe*/
        v110.q01C = *(unsigned int *)(_EBP + 164); /*0x73ac05*/
        if ( !(uint8_t)((Tactical *)&DataGlobal_87F7E8)->IsCellVisible( (IUnknown *)(&v110.q014)) ) /*0x73ac0e*/
        {
          if ( *(unsigned char *)(_EBP + 981) ) /*0x73ac17*/
          {
            v79 = *(unsigned int *)(_EBP + 1492); /*0x73ac21*/
            if ( v79 ) /*0x73ac29*/
              *(unsigned char *)(v79 + 130) = 1; /*0x73ac2b*/
            (*(void (**)(int))(*(unsigned int *)_EBP + 928))(_EBP); /*0x73ac37*/
            (*((unsigned char *)&(v8))) = (*(char (**)(int))(*(unsigned int *)_EBP + 248))(_EBP); /*0x73ac42*/
            return (void*)v8; /*0x73ac4f*/
          }
        }
      }
      (*(void (**)(int, unsigned int, unsigned int, unsigned int, unsigned int))(*(unsigned int *)_EBP + 1164))(_EBP, 0, 0, 0, 0); /*0x73ac5f*/
      (*(void (**)(int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int))(*(unsigned int *)_EBP + 1160))(_EBP, 0, 0, 0, 0, 0); /*0x73ac74*/
      v80 = (int *)(_EBP + 156); /*0x73ac7a*/
      v110.q014 = *(unsigned int *)(_EBP + 156); /*0x73ac86*/
      v81 = *(unsigned int *)(_EBP + 608); /*0x73ac8a*/
      v110.q018 = *(unsigned int *)(_EBP + 160); /*0x73ac96*/
      v110.q01C = *(unsigned int *)(_EBP + 164); /*0x73acaa*/
      ((MapClass *)&DataGlobal_87F7E8)->RevealArea2( (int *)(&v110.q014), 0, v81 + 3, 0); /*0x73acae*/
      if ( !*(unsigned char *)(_EBP + 1745) && (*(uint8_t (**)(int))(*(unsigned int *)_EBP + 512))(_EBP) ) /*0x73acc2*/
        (*(void (**)(int))(*(unsigned int *)_EBP + 492))(_EBP); /*0x73acd1*/
      if ( *(unsigned char *)(*(unsigned int *)(_EBP + 1732) + 3598) ) /*0x73acdd*/
      {
        if ( (*(int (**)(int))(*(unsigned int *)_EBP + 388))(_EBP) != 16 /*0x73ad09*/
          && *(unsigned int *)(_EBP + 172) != 7
          && *(unsigned int *)(_EBP + 180) != 7
          && !*(unsigned char *)(_EBP + 1745) )
        {
          v82 = ((Team *)_EBP)->GetMember( 0); /*0x73ad17*/
          v82 = v82; /*0x73ad1c*/
          if ( v82 ) /*0x73ad20*/
          {
            if ( (*(int (__stdcall **)(int))(v82->vtable2 + 12))(v82 + 4) == 6 /*0x73ad37*/
              && *(unsigned char *)(v82->ThreatPosed + 5819) )
            {
              (*(void (**)(int, int))(*(unsigned int *)_EBP + 628))(_EBP, 3); /*0x73ad48*/
            }
          }
        }
      }
      if ( *(unsigned char *)(*(unsigned int *)(_EBP + 1732) + 3599) ) /*0x73ad54*/
      {
        if ( (*(int (**)(int))(*(unsigned int *)_EBP + 388))(_EBP) != 16 /*0x73ad85*/
          && *(unsigned int *)(_EBP + 172) != 7
          && *(unsigned int *)(_EBP + 180) != 7
          && !*(unsigned char *)(_EBP + 1745) )
        {
          v84 = ((Team *)_EBP)->GetMember( 0); /*0x73ad93*/
          v84 = v84; /*0x73ad98*/
          if ( v84 ) /*0x73ad9c*/
          {
            if ( (*(int (__stdcall **)(int))(v84->u32_4 + 12))(v84 + 4) == 6 /*0x73adb3*/
              && *(unsigned char *)(v84->q520 + 5820) )
            {
              (*(void (**)(int, int))(*(unsigned int *)_EBP + 628))(_EBP, 3); /*0x73adc4*/
            }
          }
        }
      }
      if ( !*(unsigned int *)(_EBP + 1444) && *(unsigned int *)(_EBP + 1504) == -1 && !*(unsigned char *)(*(unsigned int *)(_EBP + 1732) + 1710) ) /*0x73ade3*/
      {
        v86 = (*(int (**)(int, int))(*(unsigned int *)_EBP + 792))(_EBP, 1); /*0x73adf4*/
        *(unsigned int *)(_EBP + 748) = (unsigned int)*(unsigned int * *)((char *)&stru_A8EB00 + 644); /*0x73ae0f*/
        *(unsigned int *)(_EBP + 752) = v111; /*0x73ae15*/
        *(unsigned int *)(_EBP + 756) = v86 / 4; /*0x73ae18*/
      }
      v110.q014 = *v80; /*0x73ae1f*/
      v110.q018 = *(unsigned int *)(_EBP + 160); /*0x73ae2b*/
      v110.q01C = *(unsigned int *)(_EBP + 164); /*0x73ae37*/
      v87 = (CellClass *)Coord::To_Cell( (Coord *)&DataGlobal_87F7E8, (void *)(&v110.q014)); /*0x73ae40*/
      landType = v87->landType; /*0x73ae4a*/
      if ( !*(unsigned int *)(_EBP + 1652) ) /*0x73ae42*/
        sub_7DC720(-2147467261); /*0x73ae57*/
      if ( !(*(uint8_t (__stdcall **)(unsigned int))(**(unsigned int **)(_EBP + 1652) + 16))(*(unsigned int *)(_EBP + 1652)) /*0x73aea6*/
&& (*(int (**)(int, CellClass *, int, int, unsigned int, int))(*(unsigned int *)_EBP + 428))( _EBP, (CellClass *)(v87), -1, -1, 0, 1) == 7






        && (!*(unsigned char *)(_EBP + 140) || (v87->flags[0] & 0x100) == 0)
        && !*(unsigned char *)(_EBP + 973) )
      {
        if ( *(unsigned int *)(_EBP + 172) != 7 ) /*0x73aebb*/
        {
          v89 = (AnimClass *)new AnimClass; /*0x73aecb*/
          if ( v89 ) /*0x73aed2*/
          {
            v110.q014 = *v80; /*0x73aedd*/
            v110.q018 = *(unsigned int *)(_EBP + 160); /*0x73aee6*/
            v90 = *(unsigned int *)(_EBP + 164); /*0x73aeec*/
            v110.q020 = *v80; /*0x73aeef*/
            v110.q01C = v90; /*0x73aef3*/
            v111 = *(unsigned int *)(_EBP + 160); /*0x73aefa*/
            v91 = *v80; /*0x73aefe*/
            v112 = *(unsigned int *)(_EBP + 164); /*0x73af05*/
            v104 = (void *)Return::HRESULT_Fail( (BulletClass *)(v91), *(unsigned int *)(_EBP + 160), *(unsigned int *)(_EBP + 164)); /*0x73af1c*/
            WarheadVersusMultiplier = (void *)GetWarheadVersusMultiplier( /*0x73af3f*/
                                                *(unsigned int *)(_EBP + 108),
                                                *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 4008),
                                                landType,
                                                &v110.q020);
            ((AnimClass *)v89)->ctor( (void *)(WarheadVersusMultiplier), (int *)(&v110.q014), 0, 1, (void *)0x2600, (void *)(v104), 0); /*0x73af47*/
          }
          v93 = *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 4008); /*0x73af5c*/
          v94 = *(unsigned int *)(_EBP + 108); /*0x73af62*/
v95 = (int *)(*(int (**)(int, int *, unsigned int, unsigned int))(*(unsigned int *)_EBP + 72))( /*0x73af6f*/ _EBP, (int *)(&v110.q020), 0, 0);




          CreateSmokeEffectAt(v94, v93, *v95, v95[1], v95[2], (char)v107, v108); /*0x73af8b*/
(*((unsigned char *)&(v8))) = (*(char (**)(int, int *, unsigned int, unsigned int, unsigned int, int))(*(unsigned int *)_EBP + 364))( /*0x73afb0*/ _EBP, (int *)(&a5), 0, *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 4008), 0, 1);






          return (void*)v8; /*0x73afbd*/
        }
        (*(void (**)(int, int *, int, int))(*(unsigned int *)_EBP + 372))( _EBP, (int *)(&dword_B1CFE8), 1, 1); /*0x73afce*/
      }
      goto LABEL_202; /*0x73afce*/
    }
    if ( (*(int (**)(int, int, AbstractClass **))(*(unsigned int *)_EBP + 632))( _EBP, 15, (AbstractClass **)(Building)) != 1 ) /*0x73a6e2*/
      goto LABEL_105; /*0x73a6e2*/
    ((TechnoClass *)_EBP)->SetFocus( 0); /*0x73a6ec*/
    *(unsigned char *)(_EBP + 140) = 0; /*0x73a6f5*/
    *(unsigned int *)(_EBP + 196) = 0; /*0x73a6fc*/
    TechnoClass::SetMember81((TechnoClass *)_EBP, 0); /*0x73a706*/
    TechnoClass::SetSpread((TechnoClass *)_EBP, 0); /*0x73a70f*/
    v56 = *(unsigned int *)(_EBP + 704); /*0x73a714*/
    if ( v56 && v56->rockerLinkedUnit ) /*0x73a71e*/
      ((CaptureManagerClass *)_EBP)->FreeUnit( v11, _EBP, (unsigned int *)(v107), v108, (unsigned int *)(v109)); /*0x73a72b*/
    (*(void (**)(int))(*(unsigned int *)_EBP + 212))(_EBP); /*0x73a735*/
    ((void (*)(AbstractClass **, int))(*Building)[25].uniqueId)(Building, _EBP); /*0x73a740*/
    if ( *(unsigned char *)(((int (*)(AbstractClass **))(*Building)[3].nextArrayIndex)(Building) + 1508) ) /*0x73a750*/
      TechnoClass::EnteredOpenTopped(_EBP); /*0x73a75d*/
    v57 = *(unsigned int *)(_EBP + 1732); /*0x73a762*/
    *(unsigned int *)(_EBP + 284) = (unsigned int)Building; /*0x73a768*/
    if ( v57->OpenTopped ) /*0x73a76e*/
      ((CCINIClass *)_EBP)->IterateNodes( 0); /*0x73a77c*/
    (*((unsigned char *)&(v8))) = (*(char (**)(int))(*(unsigned int *)_EBP + 284))(_EBP); /*0x73a786*/
    return (void*)v8; /*0x73a22d*/
} // namespace gamemd
}

// 0x451690
namespace gamemd {
void BuildingClass::ClearSuperWeaponAnim()
{

  char result; // al
  int v3; // ecx
  bool v4; // bl
  int v5; // eax
  char v6; // cl

  result = this->UpgradeLevel; /*0x451694*/
  if ( result ) /*0x45169c*/
  {
    v3 = result; /*0x4516a1*/
    v4 = 0; /*0x4516a4*/
    v5 = this->DamageFireAnims[result + 8]; /*0x4516a6*/
    if ( v5 && (v4 = *(unsigned int *)(v5 + 5872) != -1, *(unsigned char *)(v5 + 3233)) ) /*0x4516c0*/
    {
      BuildingClass::ClearAnims(this, 9); /*0x4516ce*/
      this->DamageFireAnims[this->UpgradeLevel + 8] = 0; /*0x4516dc*/
      this->UpgradeLevel = 0; /*0x4516e7*/
      this->SuperWeaponToken = -1; /*0x4516ee*/
      if ( v4 ) /*0x4516f8*/
      {
        SuperWeapon::UpdateSuperWeaponsOwnedHouseClass((SuperWeapon *)this->owner); /*0x451700*/
        return 1; /*0x451709*/
      }
    }
    else
    {
      BuildingClass::ClearAnims(this, v3 - 1); /*0x45170e*/
      v6 = this->UpgradeLevel - 1; /*0x451719*/
      this->UpgradeLevel = v6; /*0x45171b*/
      this->Upgrades[v6] = 0; /*0x451726*/
      if ( v4 ) /*0x451731*/
        SuperWeapon::UpdateSuperWeaponsOwnedHouseClass((SuperWeapon *)this->owner); /*0x451739*/
    }
    return 1; /*0x45173f*/
  }
  return result; /*0x45169e*/

}
} // namespace gamemd

// 0x459DB0
namespace gamemd {
TechnoClass * BuildingClass::ClearLimpetCheck()
{
  unsigned int *v2; // [esp+4h] [ebp+4h]

  *v2 = g_TerrainTypeTable; /*0x459dba*/
  return (int)v2; /*0x459dbc*/
}
} // namespace gamemd

// 0x459E70
namespace gamemd {
int BuildingClass::Mission_Guard()
{
  return 1824; /*0x459e75*/
}
} // namespace gamemd

// 0x45A610
namespace gamemd {
int BuildingClass::FindInPointerArray(unsigned int * a2)
{
  int v2; // edx
  int result; // eax
  unsigned int *i; // ecx

  v2 = this->uniqueId; /*0x45a610*/
  result = 0; /*0x45a613*/
  if ( v2 <= 0 ) /*0x45a618*/
    return -1; /*0x45a62f*/
  for ( i = (unsigned int *)this->vtable2; *i != *a2; ++i ) /*0x45a61e*/
  {
    if ( ++result >= v2 ) /*0x45a62d*/
      return -1; /*0x45a62d*/
  }
  return result; /*0x45a632*/
}
}
// 0x5F5E80
namespace gamemd {
int BuildingClass::SaveLoad_Register()
{
  int result; // eax
  int v2; // [esp+8h] [ebp+4h]
  int v3; // [esp+Ch] [ebp+8h]

  result = AbstractClass::SaveLoad_Prefix_0((unsigned int *)v2, v3); /*0x5f5e8b*/
  if ( result >= 0 ) /*0x5f5e92*/
  {
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v2->nextObject); /*0x5f5e9d*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v2->attachedTag); /*0x5f5eab*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v2->attachedBomb); /*0x5f5eb9*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v2->nextArrayIndex); /*0x5f5ec7*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v2->parachute); /*0x5f5ed8*/
    AudioController::Init(&v2->ambientSoundController); /*0x5f5ee0*/
    AudioController::Init(&v2->customSound_controller); /*0x5f5ee8*/
    v2->lineTrailer = 0; /*0x5f5eed*/
    return 0; /*0x5f5ef7*/
  }
  return result; /*0x5f5ef9*/
}
} // namespace gamemd
