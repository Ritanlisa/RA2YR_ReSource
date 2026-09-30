// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
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

// 0x453E20
namespace gamemd {
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
  p_vtable1 = &v33->?; /*0x453e2c*/
  v33 = (BuildingClass *)(*((int (**)(void **))v33->? + 4))(&v33->?); /*0x453e3d*/
  v3 = BuildingTypeClass::Dequeue(&g_BuildingLoadQueue_Array, (int *)&v33); /*0x453e41*/
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
      *((unsigned int *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.?) = v11; /*0x453f0f*/
      *((unsigned int *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.? + 1) = v1; /*0x453f1e*/
      LOBYTE(g_BuildingLoadQueue_Array.?) = 0; /*0x453f28*/
      ++g_BuildingLoadQueue_Array.?; /*0x453f2f*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v1->Type); /*0x453f40*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v1->Factory); /*0x453f51*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v1->C4AppliedBy); /*0x453f62*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v1->FirestormAnim); /*0x453f73*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v1->PsiWarnAnim); /*0x453f84*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v1->Spotlight); /*0x453f95*/
    AudioController::Init((AudioController *)&v1->WasOnline); /*0x453fa0*/
    AudioController::Init((AudioController *)v1->Audio8_2); /*0x453fab*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v1->SecretProduction); /*0x453fbc*/
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
            Anims = v1->Anims; /*0x45411c*/
            v27 = 21; /*0x454122*/
            do /*0x454136*/
            {
              ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, Anims++); /*0x45412d*/
              --v27; /*0x454135*/
            }
            while ( v27 ); /*0x454136*/
            Upgrades = v1->Upgrades; /*0x454138*/
            v29 = 3; /*0x45413e*/
            do /*0x454152*/
            {
              ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, Upgrades++); /*0x454149*/
              --v29; /*0x454151*/
            }
            while ( v29 ); /*0x454152*/
            DamageFireAnims = v1->DamageFireAnims; /*0x454154*/
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
                && (*(uint8_t (**)(int *, int, unsigned int))(v1->Audio7[3] + 8))(
                     &v1->Audio7[3],
                     v21 + v22,
                     0) )
              {
                v23 = v1->Audio8[2]; /*0x4540df*/
                v24 = v1->Audio7[4]; /*0x4540e2*/
                v1->Audio8[2] = v23 + 1; /*0x4540e8*/
                *(unsigned int *)(v24 + 4 * v23) = v33; /*0x4540ef*/
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
          FiringOccupantIndex = v1->FiringOccupantIndex; /*0x453ff8*/
          if ( v1->Audio7[1] < FiringOccupantIndex /*0x454029*/
            || (BYTE1(v1->Audio7[0]) || !FiringOccupantIndex)
            && (v15 = v1->Audio7[2], v15 > 0)
            && (*(uint8_t (**)(int *, int, unsigned int))(v1->Overpowerers[0] + 8))(
                 v1->Overpowerers,
                 FiringOccupantIndex + v15,
                 0) )
          {
            v16 = v1->Audio7[1]; /*0x454030*/
            v17 = v1->Occupants[0]; /*0x454033*/
            v1->Audio7[1] = v16 + 1; /*0x454039*/
            *(unsigned int *)(v17 + 4 * v16) = v33; /*0x454040*/
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
}
// 0x455D50
namespace gamemd {
int BuildingClass::AssignDestination_SyncLog()
{

  int result; // eax
  TechnoClass *v3; // [esp+8h] [ebp+4h]
  int v4; // [esp+Ch] [ebp+8h]

  if ( this->? != 19 ) /*0x455d5a*/
  {
    if ( (*((uint8_t (**)(BuildingClass *))this->TechnoClass + 161))(this) /*0x455d73*/
      || this->Type->ConstructionYard )
    {
      TechnoClass::SetFocus((TechnoClass *)this, (int)v3); /*0x455d80*/
    }
    IPersistStream::Stub(v3, v4); /*0x455d8d*/
  }
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
  v3 = a1->?->airspeedMultiplier[0] - 1; /*0x4dfcdb*/
  if ( v3 < 0 ) /*0x4dfcdc*/
    goto LABEL_10; /*0x4dfcdc*/
  do
  {
    v4 = *(BuildingClass **)(a1->?->TechnoClass::firepowerMultiplier[1] + 4 * v3); /*0x4dfcf3*/
    v5 = (unsigned int *)(*((int (**)(BuildingClass *, char *))v4->TechnoClass + 18))(v4, v16); /*0x4dfcff*/
    v6 = (unsigned int *)(*((int (**)(FootClass *, char *))a1->TechnoClass + 18))(a1, v17); /*0x4dfd08*/
    v14 = v6[1] - v5[1]; /*0x4dfd28*/
    v15 = v6[2] - v5[2]; /*0x4dfd2c*/
    Math::Sqrt((double)(*v6 - *v5) * (double)(*v6 - *v5) + (double)v14 * (double)v14 + (double)v15 * (double)v15); /*0x4dfd55*/
    LOWORD(v7) = Math::RoundToInt(v1); /*0x4dfd5d*/
    v8 = v7; /*0x4dfd62*/
    if ( v7 < v12 )
    {
      v9 = a1
         ? ((*((int (**)(FootClass *))a1->TechnoClass + 11))(a1) == 15
          ? (unsigned int)a1
          : 0)
         : 0;
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
    if ( movementDestination != v13 || a1->? != 8 ) /*0x4dfdd2*/
    {
      (*((void (**)(FootClass *, AbstractClass *, int))a1->TechnoClass + 288))(a1, v13, 1); /*0x4dfddb*/
      (*((void (**)(FootClass *, int, int))a1->TechnoClass + 122))(a1, 8, 1); /*0x4dfde9*/
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

  v2 = stru_A8EB00.ObjectTypeClass[20] - 1; /*0x4dfe0f*/
  v13 = 0; /*0x4dfe17*/
  v4 = 0x7FFFFFFF; /*0x4dfe1f*/
  v12 = stru_A8EB00.ObjectTypeClass[20] - 1; /*0x4dfe24*/
  if ( stru_A8EB00.ObjectTypeClass[20] - 1 < 0 ) /*0x4dfe28*/
    goto LABEL_10; /*0x4dfe28*/
  do
  {
    v5 = *(BuildingClass **)(stru_A8EB00.ObjectTypeClass[17] + 4 * v2); /*0x4dfe36*/
    if ( a1 )
      v6 = (*((int (**)(FootClass *))a1->TechnoClass + 11))(a1) == 15 ? a1 : 0;
    else
      v6 = 0; /*0x4dfe3b*/
    if ( (uint8_t)BuildingClass::CanRepair(v5, (int)v6) ) /*0x4dfe54*/
    {
      v7 = (unsigned int *)(*((int (**)(BuildingClass *, char *))v5->TechnoClass + 18))(v5, v16); /*0x4dfe6b*/
      v8 = (unsigned int *)(*((int (**)(FootClass *, char *))a1->TechnoClass + 18))(a1, v17); /*0x4dfe74*/
      v14 = v8[1] - v7[1]; /*0x4dfe92*/
      v15 = v8[2] - v7[2]; /*0x4dfe9c*/
      Math::Sqrt((double)(*v8 - *v7) * (double)(*v8 - *v7) + (double)v15 * (double)v15 + (double)v14 * (double)v14); /*0x4dfec1*/
      LOWORD(v9) = Math::RoundToInt(v1); /*0x4dfec9*/
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
    if ( movementDestination != v13 || a1->? != 8 ) /*0x4dff18*/
    {
      (*((void (**)(FootClass *, AbstractClass *, int))a1->TechnoClass + 288))(a1, v13, 1); /*0x4dff21*/
      (*((void (**)(FootClass *, int, int))a1->TechnoClass + 122))(a1, 8, 1); /*0x4dff2f*/
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
int BuildingClass::AnimController()
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

  Value = ProgressTimer::GetValue((ProgressTimer *)(this->? + 904), v12); /*0x629736*/
  v3 = this->?[3]; /*0x62973b*/
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
  v7 = this->?[0] + 1; /*0x629768*/
  this->?[0] = v7; /*0x62976e*/
  if ( v7 >= v6 ) /*0x629773*/
  {
    v8 = this->?[4]; /*0x629775*/
    this->?[0] = 0; /*0x629778*/
    this->?[4] = v8 + 1; /*0x629782*/
    if ( v8 + 1 >= 10 ) /*0x629788*/
      return 1; /*0x629792*/
    v10 = (unsigned int *)this->?[2]; /*0x629793*/
    if ( v10 ) /*0x629798*/
    {
      v10[45] = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x6297af*/
      v11 = v12[2]; /*0x6297b2*/
      v10[48] = 128; /*0x6297b7*/
      v10[46] = v11; /*0x6297bf*/
      v10[47] = 128; /*0x6297c5*/
      *(unsigned int *)(this->?[2] + 172) = v5 + this->?[4] + 10 * ((((v4 >> 12) + 1) >> 1) & 7); /*0x6297d7*/
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
  int v3; // edi
  int v4; // ebp

  result = RadioClass::LoadState(aP0, aP2); /*0x70bf5c*/
  if ( result >= 0 ) /*0x70bf65*/
  {
    *(unsigned int *)(aP0 + 1300) = 0; /*0x70bf79*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, aP0 + 540); /*0x70bf7f*/
    v3 = aP0 + 772; /*0x70bf84*/
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
    AudioController::Init((unsigned int *)(aP0 + 1160)); /*0x70c1e8*/
    *(unsigned int *)(aP0 + 1180) = 1; /*0x70c1f3*/
    *(unsigned int *)(aP0 + 1184) = 0; /*0x70c1fd*/
    AudioController::Init((unsigned int *)(aP0 + 1188)); /*0x70c203*/
    *(unsigned char *)(aP0 + 1208) = 0; /*0x70c20e*/
    *(unsigned int *)(aP0 + 1212) = 0; /*0x70c214*/
    AudioController::Init((unsigned int *)(aP0 + 1216)); /*0x70c21a*/
    *(unsigned char *)(aP0 + 1236) = 0; /*0x70c225*/
    *(unsigned int *)(aP0 + 1240) = 0; /*0x70c22b*/
    AudioController::Init((unsigned int *)(aP0 + 1244)); /*0x70c231*/
    *(unsigned int *)(aP0 + 1264) = -1; /*0x70c23a*/
    *(unsigned int *)(aP0 + 1268) = -1; /*0x70c240*/
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
  int v2; // ecx
  char result; // al

  v1 = *((unsigned int *)this + 550); /*0x712130*/
  if ( !v1 ) /*0x712138*/
    return 0; /*0x712138*/
  v2 = *((unsigned int *)this + 557); /*0x71213a*/
  result = 1; /*0x712140*/
  if ( v1 != v2 && *(int *)(v1 + 156) <= 1 && (!v2 || *(int *)(v2 + 156) <= 1) ) /*0x71215f*/
    return 0; /*0x712161*/
  return result; /*0x712163*/

}
}
// 0x739EC0
namespace gamemd {
void* BuildingClass_ProcessSell()
{
// (no pseudocode — ASM-only function)
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
        SuperWeapon::UpdateSuperWeaponsOwnedHouseClass((SuperWeapon *)this->?); /*0x451700*/
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
        SuperWeapon::UpdateSuperWeaponsOwnedHouseClass((SuperWeapon *)this->?); /*0x451739*/
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

  v2 = *((char *)this + 4); /*0x45a610*/
  result = 0; /*0x45a613*/
  if ( v2 <= 0 ) /*0x45a618*/
    return -1; /*0x45a62f*/
  for ( i = (unsigned int *)*((char *)this + 1); *i != *a2; ++i ) /*0x45a61e*/
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
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2 + 48)); /*0x5f5e9d*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2 + 52)); /*0x5f5eab*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2 + 56)); /*0x5f5eb9*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2 + 24)); /*0x5f5ec7*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2 + 136)); /*0x5f5ed8*/
    AudioController::Init((AudioController *)(v2 + 60)); /*0x5f5ee0*/
    AudioController::Init((AudioController *)(v2 + 80)); /*0x5f5ee8*/
    *(unsigned int *)(v2 + 168) = 0; /*0x5f5eed*/
    return 0; /*0x5f5ef7*/
  }
  return result; /*0x5f5ef9*/

}
} // namespace gamemd
