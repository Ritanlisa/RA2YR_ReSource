// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>

#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/Team_e4.hpp"
#include "e4/classes/AircraftClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/ProgressTimer_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/AirstrikeClass_e4.hpp"
#include "e4/classes/AircraftTypeClass_e4.hpp"
#include "e4/classes/FootClass_e4.hpp"
#include "e4/classes/AudioController_e4.hpp"
#include "e4/classes/AnimTypeClass_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"

// 0x413F80
namespace gamemd {
AircraftTypeClass * AircraftClass::Update()
{

  unsigned int *result; // eax
  AircraftTypeClass *v4; // edi
  HouseClass *v5; // eax
  int v6; // ecx
  char * v7;
  int v8; // edx
  AircraftTypeClass **v9; // eax
  DirStruct *Value; // eax
  int v11; // edi
  int v12; // eax
  AircraftTypeClass *v13; // eax
  int v14; // ecx
  HouseClass *v15; // ecx
  BuildingClass *v16; // [esp+0h] [ebp-Ch]
  FootClass *v17; // [esp+4h] [ebp-8h]
  unsigned char v18[4]; // [esp+8h] [ebp-4h] BYREF

  result = ((TechnoClass *)(v16))->Update(v17); /*0x413f85*/
  v4 = (AircraftTypeClass *)this[433]; /*0x413f8a*/
  if ( v4 ) /*0x413f92*/
  {
    v5 = (HouseClass *)this[135]; /*0x413f98*/
    if ( v5 ) /*0x413fa1*/
    {
      v6 = (int)(0);
      v7 = v5->relatedTagsCapacity + 388; /*0x413fa8*/
      v8 = *(unsigned int *)(v7 + 16); /*0x413fad*/
      if ( v8 > 0 ) /*0x413fb2*/
      {
        v9 = *(AircraftTypeClass ***)(v7 + 4); /*0x413fb4*/
        while ( *v9 != v4 ) /*0x413fb9*/
        {
          ++v6; /*0x413fbb*/
          ++v9; /*0x413fbc*/
          if ( v6 >= v8 ) /*0x413fc1*/
            goto LABEL_9; /*0x413fc1*/
        }
        Power::ChangedHouse((char *)this + 84, 1); /*0x413fcd*/
      }
    }
LABEL_9:
    BuildingTypeClass::GetPowerOutput((unsigned short *)this + 452, *(ObjectClass **)(this[433] + 1820)); /*0x413fd2*/
    BuildingTypeClass::GetPowerOutput((unsigned short *)this + 464, *(ObjectClass **)(this[433] + 1820)); /*0x414001*/
    Value = (DirStruct *)ProgressTimer::GetValue((unsigned short *)this + 452, (IUnknown *)v18); /*0x41400d*/
    FacingClass::Set_SyncLog((FacingClass *)((char *)this + 232), Value); /*0x414015*/
    v11 = *this; /*0x414020*/
    v12 = (*(int (**)(int))(*(unsigned int *)this[433] + 188))(this[433]); /*0x414024*/
    (*(void (**)(int *, int))(v11 + 460))(this, v12); /*0x41402d*/
    v13 = (AircraftTypeClass *)this[433]; /*0x414033*/
    v14 = *(unsigned int *)&v13[((unsigned int *)(2].Name))[28]; /*0x41403a*/
    if ( v14 == -1 ) /*0x414043*/
      v14 = *(unsigned int *)&v13[((unsigned int *)(2].Name))[32]; /*0x414045*/
    this[191] = v14; /*0x41404b*/
    result = (unsigned int *)v13->Strength; /*0x414051*/
    this[27] = (int)result; /*0x414057*/
    this[28] = (int)result; /*0x41405a*/
  }
  v15 = (HouseClass *)this[135]; /*0x41405d*/
  if ( v15 ) /*0x414065*/
    return (unsigned int *)BuildingClass::PowerUpdate(v15, (TechnoClass *)this); /*0x414068*/
  return result; /*0x41406d*/

}
}
// 0x415B10
namespace gamemd {
int AircraftClass::FindLandingCell(int * a2, int a3)
{

  unsigned int v5;
  int v6; // esi
  unsigned short *v7; // eax
  int v8; // esi
  int v9; // ecx
  int16_t v10; // dx
  int v11; // esi
  void *v12; // eax
  int v13; // edx
  int v14; // eax
  int v15; // esi
  void *v16; // eax
  int * v18;
  int v19; // [esp+2Ch] [ebp-14h]
  char v20[4]; // [esp+30h] [ebp-10h] BYREF
  unsigned int v21[3]; // [esp+34h] [ebp-Ch] BYREF
  unsigned int v22; // [esp+44h] [ebp+4h]

  v18 = (unsigned int)((int *)(0));
  v19 = 0; /*0x415b29*/
  v5 = dword_817A58; /*0x415b2d*/
  do /*0x415bab*/
  {
    v6 = *(unsigned int *)(v5); /*0x415b34*/
    v7 = (unsigned short *)(*(int (**)(unsigned int *, char *))(*(unsigned int *)this + 1760))(this, v20); /*0x415b3e*/
    v8 = v6 & 7; /*0x415b44*/
    v9 = 4 * v8 + 9041544; /*0x415b55*/
    v10 = *v7 + IDA_LOWORD(g_abs_89F688[v8]); /*0x415b5c*/
    v11 = *a2; /*0x415b5f*/
    IDA_LOWORD(v22) = v10; /*0x415b6b*/
    IDA_HIWORD(v22) = v7[1] + *(unsigned short *)(v9 + 2); /*0x415b74*/
    v18 = v22; /*0x415b83*/
    v12 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v18); /*0x415b87*/
    if ( !(*(int (**)(int *, void *, int, int, unsigned int, int))(v11 + 428))(a2, v12, -1, -1, 0, 1) ) /*0x415b8f*/
      break; /*0x415b97*/
    ++v5; /*0x415b9d*/
    ++v19; /*0x415ba7*/
  }
  while ( (int)v5 < (int)dword_817A78 ); /*0x415bab*/
  IDA_LOWORD(v22) = (uint16_t)((unsigned int *)(dword_817A58))[v19] << 13; /*0x415bc3*/
  v13 = *((unsigned int *)this + 40); /*0x415bc8*/
  v21[0] = *((unsigned int *)this + 39); /*0x415bcb*/
  v14 = *((unsigned int *)this + 41); /*0x415bd3*/
  v21[1] = v13; /*0x415bd6*/
  v21[2] = v14; /*0x415bda*/
  if ( !(*(uint8_t (**)(int *, unsigned int *, unsigned int))(*a2 + 216))( /*0x415bf3*/
          a2,
          v21,
          (uint8_t)(((v22 >> 7) + 1) >> 1)) )
    return 0; /*0x415c57*/
  (*(void (**)(int *, int, unsigned int))(*a2 + 488))(a2, 2, 0); /*0x415c05*/
  v15 = *a2; /*0x415c0b*/
  v16 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v18); /*0x415c19*/
  (*(void (**)(int *, void *, int))(v15 + 1152))(a2, v16, 1); /*0x415c21*/
  if ( (*(int (**)(unsigned int *, int, int *))(*(unsigned int *)this + 2528))(this, 2, a2) == 1 ) /*0x415c37*/
    (*(void (**)(unsigned int *, int))(*(unsigned int *)this + 2512))(this, 9); /*0x415c3f*/
  return 1; /*0x415c45*/

}
}
// 0x4165C0
namespace gamemd {
void AircraftClass_DeployWithAnim(AircraftClass *aP0, void * a1, void * a2, void * a3, void * a4, void * a5, void * a6, void * a7, void * a8, void * a9)
{
  int v11; // ebp
  AnimClass *v13; // ebx
  void *v14; // edi
  int *v15; // eax
  char v16; // [esp+0h] [ebp-14h]
  int64_t v17; // [esp+4h] [ebp-10h]
  unsigned char v18[8]; // [esp+Ch] [ebp-8h] BYREF

  v11 = FootClass::ProcessDeploy( /*0x4165f1*/
          aP0,
          a1,
          COERCE_DOUBLE(IDA___PAIR64__((unsigned int)a3, a2)),
          (int *)a4,
          a5,
          a6,
          (void *)a7,
          v16,
          v17);
  if ( v11 == 4 ) /*0x4165f6*/
  {
    (*(void (**)(AircraftClass *, unsigned int))(aP0->vtable0 + 952))(aP0, 0); /*0x416613*/
    if ( *(int *)(aP0->Type + 1852) > 0 ) /*0x416627*/
    {
      v13 = (AnimClass *)RA2_OPNEW(0x1C8u); /*0x416633*/
      if ( v13 ) /*0x41663a*/
      {
        v14 = *(void **)(aP0->Type->q730 /*0x416671*/
                       + 4
                       * ((unsigned int)Random::State((Random *)&((unsigned int *)(dword_A8B230))[14].NeedsSaveOrLink)
                        % *(unsigned int *)(aP0->Type + 1852)));
        v15 = (int *)(*(int (**)(AircraftClass *, unsigned char *))(aP0->vtable0 + 164))(aP0, v18); /*0x41667b*/
        AnimClass::ctor(v13, v14, v15, 0, 1, (void *)0x600, 0, 0); /*0x416685*/
      }
    }
    if ( !(*(uint8_t (**)(AircraftClass *, int))(aP0->vtable0 + 988))(aP0, a5) ) /*0x416694*/
      (*(void (**)(AircraftClass *))(aP0->vtable0 + 248))(aP0); /*0x4166a3*/
  }
  else if ( v11 == 5 ) /*0x4165f9*/
  {
    return 5; /*0x416609*/
  }
  return v11; /*0x4165ff*/
}
}
// 0x417CC0
namespace gamemd {
AircraftTypeClass * AircraftClass::GetCursorOverObject( IUnknown * aP1, IUnknown * a3)
{

  IUnknown *v3; // ebp
  IUnknown *v4; // edi
  int result; // eax
  int v7; // ebx
  unsigned int *v8; // eax
  unsigned int *v9; // eax
  int v10; // eax
  int v11; // ebp
  int v12; // ecx
  int v13; // edx
  unsigned int *v14; // eax
  unsigned int *v15; // eax
  unsigned int *v16; // eax
  int v17; // eax
  char v18[12]; // [esp+10h] [ebp-Ch] BYREF

  v3 = a3; /*0x417cc5*/
  v4 = aP1; /*0x417ccb*/
  result = InfantryClass::GetCursorOverObject(this, aP1, (char)a3); /*0x417cd3*/
  v7 = result; /*0x417cd8*/
  if ( result == 8 ) /*0x417cdd*/
    return result; /*0x417cdd*/
  if ( result == 26 && *(unsigned char *)(*(unsigned int *)&this->__pad_690[52] + 3597) ) /*0x417cf4*/
    v7 = 0; /*0x417cfe*/
  if ( *(unsigned char *)(*(unsigned int *)&this->__pad_690[52] + 3580) /*0x417d16*/
    && (uint8_t)House::IsHumanPlayer((#375 *)this->field_21C) )
  {
    if ( v7 != 7 && v7 ) /*0x417d26*/
      goto LABEL_18; /*0x417d26*/
    if ( Object::IsAlliedWithObjectHouse((unsigned int *)this->field_21C, v4) ) /*0x417d33*/
    {
      if ( !v4 /*0x417d56*/
        || (IDA_LOBYTE(a3) = v4->__pad_10[4] & 1, !(unsigned char)a3)
        || (v8 = (unsigned int *)(*(int (**)(IUnknown *))(v4->field_0 + 60))(v4),
            Object::IsAlliedWithObjectHouse(v8, this)) )
      {
        if ( !this->field_118 && (*(int (**)(IUnknown *))(v4->field_0 + 44))(v4) == 1 ) /*0x417d73*/
        {
          v7 = 17; /*0x417d75*/
          goto LABEL_24; /*0x417d7a*/
        }
      }
    }
  }
  if ( !v7 ) /*0x417d7e*/
  {
    v9 = (unsigned int *)(*(int (**)(IUnknown *, char *))(v4->field_0 + 72))(v4, v18); /*0x417d89*/
    IDA_LOWORD(a3) = *v9 / 256; /*0x417d9e*/
    IDA_HIWORD(a3) = v9[1] / 256; /*0x417db7*/
    v10 = this->field_0; /*0x417dc0*/
    aP1 = a3; /*0x417dc4*/
    v7 = (*(int (**)(IUnknown *, IUnknown **, unsigned int, IUnknown *))(v10 + 112))(this, &aP1, 0, v3); /*0x417dcb*/
  }
LABEL_18:
  if ( v7 == 4 ) /*0x417dd0*/
  {
    if ( *(unsigned int *)&this->__pad_FC[24] ) /*0x417dd2*/
      goto LABEL_24; /*0x417dda*/
LABEL_23:
    v7 = 0; /*0x417df4*/
    goto LABEL_24; /*0x417df4*/
  }
  if ( v7 == 5 && !*(unsigned int *)(*(int (**)(IUnknown *, unsigned int))(this->field_0 + 1016))(this, 0) ) /*0x417def*/
    goto LABEL_23; /*0x417df2*/
LABEL_24:
  if ( (uint8_t)House::IsHumanPlayer((#375 *)this->field_21C) ) /*0x417dfc*/
  {
    if ( v7 == 7 && (*(int (**)(IUnknown *))(v4->field_0 + 44))(v4) == 6 ) /*0x417e14*/
    {
      v11 = v4->field_520; /*0x417e16*/
      if ( *(unsigned char *)(v11 + 5801) ) /*0x417e1c*/
      {
        v12 = 0; /*0x417e2c*/
        v13 = *(unsigned int *)(*(unsigned int *)&this->__pad_690[52] + 1016); /*0x417e33*/
        if ( v13 <= 0 ) /*0x417e38*/
          goto LABEL_36; /*0x417e38*/
        v14 = *(unsigned int **)(*(unsigned int *)&this->__pad_690[52] + 1004); /*0x417e3a*/
        while ( *v14 != v11 ) /*0x417e3f*/
        {
          ++v12; /*0x417e41*/
          ++v14; /*0x417e42*/
          if ( v12 >= v13 ) /*0x417e47*/
            goto LABEL_36; /*0x417e47*/
        }
        if ( !Array::ContainsValue(&v4->field_0, this) /*0x417e76*/
          || v4->field_118
          || (v7 = 3, (*(int (**)(IUnknown *, int, IUnknown *))(this->field_0 + 632))(this, 15, v4) != 1) )
        {
LABEL_36:
          v7 = 31; /*0x417e78*/
        }
      }
    }
  }
  if ( *(unsigned char *)(*(unsigned int *)&this->__pad_690[52] + 3580) && v7 == 17 ) /*0x417e90*/
  {
    a3 = *(IUnknown **)(*(int (**)(IUnknown *, IUnknown **))(v4->field_0 + 440))(v4, &aP1); /*0x417eaa*/
    if ( a3 != *(IUnknown **)&g_abs_87F8E4 ) /*0x417eae*/
    {
      v15 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&a3); /*0x417ecc*/
      v16 = Cell::IsBridge(v15); /*0x417ed3*/
      if ( v16 ) /*0x417eda*/
      {
        if ( *(unsigned char *)(v16[328] + 5821) ) /*0x417ee6*/
          return 0; /*0x417efb*/
      }
    }
  }
  else if ( v7 == 2 ) /*0x417f01*/
  {
    if ( (*(uint8_t (**)(IUnknown *))(v4->field_0 + 196))(v4) ) /*0x417f07*/
    {
      if ( !(*(int (**)(IUnknown *, int))(v4->field_0 + 208))(v4, 1) ) /*0x417f17*/
      {
        v17 = (*(int (**)(IUnknown *, int))(v4->field_0 + 204))(v4, 1); /*0x417f27*/
        if ( (*(int (**)(int))(*(unsigned int *)v17 + 44))(v17) == 21 ) /*0x417f37*/
          return 1; /*0x417f47*/
      }
    }
  }
  else if ( v7 == 5 && *(unsigned char *)((*(int (**)(IUnknown *))(v4->field_0 + 136))(v4) + 563) ) /*0x417f59*/
  {
    return 2; /*0x417f63*/
  }
  return v7; /*0x417cdf*/

}
}
// 0x4196B0
namespace gamemd {
int AircraftClass::ValidateLandingCell(unsigned int * a2, int a3, int a4, int a5, int a6)
{

  int v7; // ecx
  int v8; // esi
  unsigned int *v10; // eax
  unsigned char v11[12]; // [esp+Ch] [ebp-Ch] BYREF

  v7 = *((unsigned int *)this + 373); /*0x4196bc*/
  if ( v7 && TechnoClass::IsWaypointHidden(v7) && !Type::CheckAmbiguity(&g_abs_87F7E8, (int)a2, 1) ) /*0x4196d7*/
    return 0; /*0x4196d7*/
  v8 = a2[57]; /*0x4196e4*/
  if ( (!v8 /*0x41974d*/
     || (*(unsigned char *)(v8 + 20) & 1) == 0
     || (uint8_t)HouseClass::IsAlliedWith(*(#375 **)(v8 + 540), *(#375 **)((char *)this + 540))
     || *(unsigned int *)(v8 + 544) != 2
     && !g_abs_A8E7AC
     && ((*(int (**)(int))(*(unsigned int *)v8 + 44))(v8) != 6 || !*(unsigned char *)(*(unsigned int *)(v8 + 1312) + 3226)))
    && !Cell::IsBuildable((int)a2, 4, 0, 0, -1, 0, -1, 1) )
  {
    return 7; /*0x419761*/
  }
  if ( g_abs_A8B238[0] ) /*0x41976b*/
    return 0; /*0x41976b*/
  if ( !*((unsigned char *)this + 1050) ) /*0x41976d*/
    return 0; /*0x41976d*/
  if ( *((unsigned char *)this + 980) ) /*0x419777*/
    return 0; /*0x419777*/
  v10 = (unsigned int *)(*(int (**)(unsigned int *, unsigned char *))(*a2 + 72))(a2, v11); /*0x41978a*/
  if ( !Cell::IsPassable(v10) ) /*0x419793*/
    return 0; /*0x4197ac*/
  else
    return 7; /*0x41979e*/

}
}
// 0x41A940
namespace gamemd {
int AircraftClass::EvaluateTargetingState()
{

  int v2; // edi

  v2 = (*(int (**)(unsigned int))(*(unsigned int *)*((char *)this + 433) + 188))(*((char *)this + 433)); /*0x41a956*/
  if ( (*(int (**)(int *))(*(unsigned int *)this + 456))(this) == v2 ) /*0x41a960*/
  {
    if ( !*((char *)this + 373) ) /*0x41a962*/
      (*(void (**)(int *, unsigned int, int))(*(unsigned int *)this + 1156))(this, 0, 1); /*0x41a974*/
    return 1; /*0x41a97b*/
  }
  else
  {
    if ( !*((char *)this + 191) /*0x41a99c*/
      && (*(uint8_t (**)(int *))(*(unsigned int *)this + 684))(this)
      && !Team::AllMembersValid(this) )
    {
      (*(void (**)(int *, unsigned int, int))(*(unsigned int *)this + 1156))(this, 0, 1); /*0x41a9ad*/
    }
    if ( *((char *)this + 173) ) /*0x41a9b3*/
    {
      (*(void (**)(int *, int, unsigned int))(*(unsigned int *)this + 488))(this, 1, 0); /*0x41a9c5*/
      return 1; /*0x41a9cc*/
    }
    else
    {
      return FootClass::FindAITarget(this); /*0x41a9d5*/
    }
  }

}
}
// 0x41AA80
namespace gamemd {
void* AircraftClass_AssignDestination_SyncLog(void * a1, void * a2, void * a3, void * a4)
{
  int *ClosestPlacementCell; // edi
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  int v9; // eax
  Array *v10; // eax
  Array *v11; // ebx
  int uniqueId; // eax
  int v13; // eax
  int *v14; // ebx
  int v15; // eax

  ClosestPlacementCell = (int *)a3; /*0x41aa83*/
  if ( !a3 ) /*0x41aa8b*/
  {
  LABEL_53:
    IDA_LOBYTE(v6, unsigned int a3) = FootClass::AssignDestination(a1, (int)ClosestPlacementCell, a4); /*0x41adac*/
    return v6; /*0x41adb4*/
  }
  if ( !(*((uint8_t (**)(AbstractClass *))a3->vtable0 + 21))(a3) ) /*0x41aa9a*/
  {
    if ( (*((int (__stdcall **)(void **))a3->vtable1 + 3))(&a3->vtable1) != 6 /*0x41aada*/
      || (*((int (**)(FootClass *))a1->vtable0 + 97))(a1) != 7 && a1->queuedMission != 7 )
    {
      goto LABEL_35; /*0x41aada*/
    }
    if ( (uint8_t)Team::AllMembersValid((Team *)a1) ) /*0x41aae8*/
    {
      v10 = (Array *)AbstractClass::IsTechnoType(a3); /*0x41ac4e*/
      v11 = v10; /*0x41ac53*/
      if ( !v10 ) /*0x41ac57*/
        goto LABEL_35; /*0x41ac57*/
      if ( (uint8_t)Array::ContainsValue(v10, (int)a1) ) /*0x41ac5c*/
      {
        if ( (uint8_t)Array::Contains(v11, (int)a1) ) /*0x41ac72*/
          goto LABEL_35; /*0x41ac72*/
        v6 = (*((int (**)(FootClass *, int))a1->vtable0 + 157))(a1, 14); /*0x41ac81*/
        if ( v6 == 1 ) /*0x41ac8a*/
          return v6; /*0x41ac8a*/
        (*((void (**)(FootClass *, int))a1->vtable0 + 157))(a1, 3); /*0x41ac96*/
        uniqueId = a3[36].uniqueId; /*0x41ac9c*/
        if ( !*(unsigned char *)(uniqueId + 5801) && !*(unsigned char *)(uniqueId + 5802) ) /*0x41acac*/
          goto LABEL_35; /*0x41acb4*/
        TechnoClass::SetFocus((TechnoClass *)a1, (int)a3); /*0x41acb9*/
        goto LABEL_34; /*0x41acb9*/
      }
    }
    else
    {
      if ( !(uint8_t)Array::ContainsValue((Array *)a3, (int)a1) ) /*0x41aaf8*/
      {
        TechnoClass::SetFocus((TechnoClass *)a1, (int)a3); /*0x41ab09*/
        if ( *(unsigned char *)(a3[36].uniqueId + 5835) ) /*0x41ab1a*/
        {
          ClosestPlacementCell = (int *)(*((int (**)(FootClass *, int, unsigned int, unsigned int, int))a1->vtable0 + 330))( /*0x41ab4a*/
                                          a1,
                                          (int)a1[1].vtable1 + 1000,
                                          0,
                                          0,
                                          a2);
          (*((void (**)(FootClass *, unsigned int, int))a1->vtable0 + 288))(a1, 0, 1); /*0x41ab4c*/
          v7 = 2; /*0x41ab54*/
          if ( ClosestPlacementCell /*0x41ab6b*/
            && (*((int (**)(FootClass *, int, int *))a1->vtable0 + 158))(a1, 15, ClosestPlacementCell) == 1 )
          {
            (*((void (**)(FootClass *, int, int *))a1->vtable0 + 158))(a1, 2, ClosestPlacementCell); /*0x41ab73*/
            v7 = 7; /*0x41ab79*/
          }
          else
          {
            ClosestPlacementCell = (int *)TechnoClass::FindClosestPlacementCell((TechnoClass *)a1); /*0x41ab87*/
          }
          (*((void (**)(FootClass *, int))a1->vtable0 + 122))(a1, v7); /*0x41ab90*/
          if ( (*((uint8_t (**)(FootClass *))a1->vtable0 + 128))(a1) ) /*0x41ab9a*/
            (*((void (**)(FootClass *))a1->vtable0 + 123))(a1); /*0x41aba8*/
        }
        if ( *(unsigned char *)(a3[36].uniqueId + 5801) ) /*0x41abb2*/
        {
          a1->queueUpToEnter = (TechnoClass *)a3; /*0x41abc4*/
  LABEL_34:
          ClosestPlacementCell = 0; /*0x41acbe*/
        }
  LABEL_35:
        v13 = (*((int (**)(FootClass *))a1->vtable0 + 111))(a1); /*0x41acc0*/
        if ( (*(unsigned int *)(v13 + 320) & 0x100) == 0 ) /*0x41acd3*/
        {
          v14 = *(int **)(v13 + 228); /*0x41acd9*/
          if ( v14 ) /*0x41ace1*/
          {
            while ( v14 == (int *)a1 || (*(int (**)(int *))(*v14 + 44))(v14) != 6 ) /*0x41acf5*/
            {
              v14 = (int *)v14[12]; /*0x41acf7*/
              if ( !v14 ) /*0x41acfc*/
                goto LABEL_53; /*0x41acfc*/
            }
            v15 = v14[328]; /*0x41ad19*/
            if ( *(unsigned char *)(v15 + 5801) || *(unsigned char *)(v15 + 5802) ) /*0x41ad29*/
            {
              if ( !a1->locomotor[0] ) /*0x41ad33*/
                WinAPI::Wrapper(-2147467261); /*0x41ad42*/
              if ( !(*(uint8_t (__stdcall **)(int))(*(unsigned int *)a1->locomotor[0] + 96))(a1->locomotor[0]) /*0x41ad5d*/
                && !this->HouseClass::IonSensitivesShouldBeOffline() )
              {
                if ( !a1->locomotor[0] ) /*0x41ad66*/
                  WinAPI::Wrapper(-2147467261); /*0x41ad75*/
                (*(void (__stdcall **)(int))(*(unsigned int *)a1->locomotor[0] + 88))(a1->locomotor[0]); /*0x41ad83*/
              }
              if ( (int *)Team::GetMember((Team *)a1, 0) == v14 /*0x41ad9e*/
                && ClosestPlacementCell != (int *)Team::GetMember((Team *)a1, 0) )
              {
                (*((void (**)(FootClass *, int))a1->vtable0 + 157))(a1, 3); /*0x41ada6*/
              }
            }
          }
        }
        goto LABEL_53; /*0x41ada6*/
      }
      if ( (*((int (**)(FootClass *, int, AbstractClass *))a1->vtable0 + 158))(a1, 14, a3) != 1 ) /*0x41abdf*/
      {
        (*((void (**)(FootClass *, int))a1->vtable0 + 157))(a1, 3); /*0x41abe7*/
        v8 = a3[36].uniqueId; /*0x41abed*/
        if ( *(unsigned char *)(v8 + 5801) || *(unsigned char *)(v8 + 5802) ) /*0x41abfd*/
        {
          TechnoClass::SetFocus((TechnoClass *)a1, (int)a3); /*0x41ac0a*/
          ClosestPlacementCell = 0; /*0x41ac0f*/
        }
      }
      v9 = a3[36].uniqueId; /*0x41ac11*/
      if ( *(unsigned char *)(v9 + 5801) || *(unsigned char *)(v9 + 5802) ) /*0x41ac21*/
      {
        if ( a1->movementDestination ) /*0x41ac38*/
          TechnoClass::SetFocus((TechnoClass *)a1, (int)a1->movementDestination); /*0x41ac45*/
        goto LABEL_35; /*0x41ac4a*/
      }
    }
    TechnoClass::SetFocus((TechnoClass *)a1, (int)ClosestPlacementCell); /*0x41ac2e*/
    goto LABEL_35; /*0x41ac33*/
  }
  IDA_LOBYTE(v6) = FootClass::AssignDestination(a1, 0, a4); /*0x41aaa6*/
  return v6; /*0x41aaab*/
}
// 0x41ADF0
namespace gamemd {
int AircraftClass::RevealSight(int a2, int a3)
{

  int v4; // ebx
  #375 *v5; // edx
  int v6; // edx
  int v7; // eax
  #375 *v8; // edx
  int result; // eax
  int CrateImg; // ebx
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  int v16; // eax
  int v17; // [esp+Ch] [ebp-Ch] BYREF
  int v18; // [esp+10h] [ebp-8h]
  int v19; // [esp+14h] [ebp-4h]

  v4 = *(unsigned int *)(*((char *)this + 433) + 1512); /*0x41ae00*/
  if ( !(*(int (**)(int *))(*(unsigned int *)this + 456))(this) ) /*0x41ae06*/
  {
    v4 = 1; /*0x41ae10*/
LABEL_4:
    v17 = *((char *)this + 39); /*0x41ae1f*/
    v18 = *((char *)this + 40); /*0x41ae40*/
    v5 = (#375 *)*((char *)this + 135); /*0x41ae44*/
    v19 = *((char *)this + 41); /*0x41ae4e*/
    MapClass::RevealArea1(&v17, v4, v5, a2, a3, 0, 1, 0); /*0x41ae5e*/
    v6 = *((char *)this + 40); /*0x41ae65*/
    v7 = *((char *)this + 41); /*0x41ae68*/
    v17 = *((char *)this + 39); /*0x41ae6d*/
    v18 = v6; /*0x41ae77*/
    v8 = (#375 *)*((char *)this + 135); /*0x41ae7b*/
    v19 = v7; /*0x41ae84*/
    return MapClass::RevealArea1(&v17, v4, v8, a2, a3, 0, 1, 1); /*0x41aea1*/
  }
  if ( v4 ) /*0x41ae19*/
    goto LABEL_4; /*0x41ae19*/
  result = *(unsigned int *)g_abs_A8B230; /*0x41aeaa*/
  if ( (*(unsigned int *)g_abs_A8B230 & 0x1000) != 0 ) /*0x41aeaf*/
  {
    CrateImg = g_abs_8871E0->GUIMainButtonSound; /*0x41aec5*/
    v17 = *((char *)this + 39); /*0x41aecd*/
    v18 = *((char *)this + 40); /*0x41aed6*/
    v11 = *this; /*0x41aeda*/
    v19 = *((char *)this + 41); /*0x41aedf*/
    v12 = (*(int (**)(int *))(v11 + 456))(this); /*0x41aee3*/
    MapClass::RevealArea1( /*0x41af1a*/
      &v17,
      CrateImg,
      (#375 *)*((char *)this + 135),
      0,
      0,
      1,
      v12 < g_abs_8871E0->BuildWeapons[3] / 2,
      0);
    v13 = *((char *)this + 40); /*0x41af21*/
    v14 = *((char *)this + 41); /*0x41af24*/
    v17 = *((char *)this + 39); /*0x41af27*/
    v15 = *this; /*0x41af2b*/
    v18 = v13; /*0x41af2d*/
    v19 = v14; /*0x41af35*/
    v16 = (*(int (**)(int *))(v15 + 456))(this); /*0x41af39*/
    return MapClass::RevealArea1( /*0x41af70*/
             &v17,
             CrateImg,
             (#375 *)*((char *)this + 135),
             0,
             0,
             1,
             v16 < g_abs_8871E0->BuildWeapons[3] / 2,
             1);
  }
  return result; /*0x41ae9b*/

}
}
// 0x41B430
namespace gamemd {
void* AircraftClass::LoadFromStream(unsigned int * a0, FootClass * aP1)
{

  FootClass *v2; // esi
  unsigned int *v3; // ebx
  size_t v4; // eax
  int v5; // eax
  int v6; // ecx
  IUnknown *i; // eax
  unsigned int *v8; // eax
  int result; // eax
  int v10; // edi
  int v11; // ebp
  int v12; // edi
  AbstractClass *v13; // eax

  v2 = (FootClass *)a0; /*0x41b432*/
  v3 = a0 + 1; /*0x41b43a*/
  a0 = (unsigned int *)(*(int (**)(unsigned int *))(a0[1] + 16))(a0 + 1); /*0x41b44b*/
  v4 = BuildingTypeClass::Dequeue((char **)&stru_B05488.__pad_579C[15388], (BuildingClass *)&a0); /*0x41b44f*/
  if ( v4 ) /*0x41b456*/
  {
    v5 = (int)(v4 - *(unsigned int *)&stru_B05488.__pad_579C[15388]) >> 3; /*0x41b45e*/
    if ( v5 != -1 ) /*0x41b464*/
    {
      v6 = v5 + 1; /*0x41b466*/
      for ( i = *(IUnknown **)&stru_B05488.__pad_579C[15392]; /*0x41b470*/
            v6 < *(int *)&stru_B05488.__pad_579C[15392];
            i = *(IUnknown **)&stru_B05488.__pad_579C[15392] )
      {
        v8 = (unsigned int *)(*(unsigned int *)&stru_B05488.__pad_579C[15388] + 8 * v6++); /*0x41b478*/
        *(v8 - 2) = *v8; /*0x41b47e*/
        *(v8 - 1) = v8[1]; /*0x41b484*/
      }
      *(unsigned int *)&stru_B05488.__pad_579C[15392] = (char *)i - 1; /*0x41b499*/
      *(unsigned int *)(*(unsigned int *)&stru_B05488.__pad_579C[15388] + 8 * *(unsigned int *)&stru_B05488.__pad_579C[15392]) = 0; /*0x41b49e*/
      *(unsigned int *)(*(unsigned int *)&stru_B05488.__pad_579C[15388] + 8 * *(unsigned int *)&stru_B05488.__pad_579C[15392] + 4) = 0; /*0x41b4ae*/
      *(unsigned int *)&stru_B05488.__pad_579C[15404] = 0; /*0x41b4b2*/
    }
  }
  result = ObjectClass::LoadFromStream_Common(v2, (LPSTREAM)aP1); /*0x41b4be*/
  if ( result >= 0 ) /*0x41b4c5*/
  {
    v10 = v2->locomotor[0]; /*0x41b4cb*/
    if ( v2 ) /*0x41b4d3*/
    {
      FootClass::PostLoadInit(v2, (int)&a0); /*0x41b4dc*/
      *(unsigned int *)v2->__pad_0 = &AircraftClass::`vftable'; /*0x41b4e1*/
      *v3 = &AircraftClass::`vftable'; /*0x41b4e7*/
      *(unsigned int *)&v2->__pad_0[8] = &AircraftClass::`vftable'; /*0x41b4ed*/
      *(unsigned int *)&v2->__pad_0[12] = &AircraftClass::`vftable'; /*0x41b4f4*/
      *(unsigned int *)v2[1].__pad_0 = &vt_AircraftClass; /*0x41b4fb*/
    }
    v11 = v2->locomotor[0]; /*0x41b506*/
    if ( v11 != v10 ) /*0x41b50e*/
    {
      v2->locomotor[0] = v10; /*0x41b512*/
      if ( v10 ) /*0x41b518*/
        (*(void (**)(int))(*(unsigned int *)v10 + 4))(v10); /*0x41b51d*/
      if ( v11 ) /*0x41b522*/
        (*(void (**)(int))(*(unsigned int *)v11 + 8))(v11); /*0x41b528*/
    }
    (*(void (**)(int))(*(unsigned int *)v10 + 8))(v10); /*0x41b52e*/
    v12 = (*(int (**)(unsigned int *))(*v3 + 16))(v3); /*0x41b53d*/
    v13 = *(AbstractClass **)&stru_B05488.__pad_579C[15396]; /*0x41b53f*/
    if ( *(unsigned int *)&stru_B05488.__pad_579C[15392] + 1 <= *(int *)&stru_B05488.__pad_579C[15396] ) /*0x41b548*/
      goto LABEL_18; /*0x41b548*/
    if ( !*(unsigned int *)&stru_B05488.__pad_579C[15396] ) /*0x41b54c*/
      v13 = (AbstractClass *)10; /*0x41b54e*/
    if ( BuildingTypeClass::Enqueue((int)&stru_B05488.__pad_579C[15388], (int)v13) ) /*0x41b559*/
    {
LABEL_18:
      *(unsigned int *)(*(unsigned int *)&stru_B05488.__pad_579C[15388] + 8 * *(unsigned int *)&stru_B05488.__pad_579C[15392]) = v12; /*0x41b56d*/
      *(unsigned int *)(*(unsigned int *)&stru_B05488.__pad_579C[15388] + 8 * *(unsigned int *)&stru_B05488.__pad_579C[15392] + 4) = v2; /*0x41b57b*/
      stru_B05488.__pad_579C[15400] = 0; /*0x41b585*/
      ++*(unsigned int *)&stru_B05488.__pad_579C[15392]; /*0x41b58c*/
    }
    ObjectPtr::RegisterForTracking( /*0x41b59d*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&v2[1].__pad_0[4]);
    ObjectPtr::RegisterForTracking( /*0x41b5ae*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&v2[1].__pad_0[12]);
    return 0; /*0x41b5b3*/
  }
  return result; /*0x41b5b5*/

}
}
// 0x41B9F0
namespace gamemd {
int AircraftClass::UpdateDocking(int a2)
{

  int result; // eax

  switch ( *((unsigned int *)this + 43) ) /*0x41ba0b*/
  {
    case 4: /*0x41ba0b*/
    case 0x1A: /*0x41ba0b*/
    case 0x1B: /*0x41ba0b*/
    case 0x1E: /*0x41ba0b*/
    case 0x1F: /*0x41ba0b*/
      if ( *((unsigned int *)this + 165) ) /*0x41ba12*/
        goto LABEL_4; /*0x41ba1a*/
      result = a2 - 4; /*0x41ba1c*/
      switch ( a2 ) /*0x41ba2c*/
      {
        case 4: /*0x41ba2c*/
        case 26: /*0x41ba2c*/
        case 27: /*0x41ba2c*/
        case 30: /*0x41ba2c*/
        case 31: /*0x41ba2c*/
          goto LABEL_4;
        default:
          return result;
      }
    default:
LABEL_4:
      result = MissionClass::SetState((#377 *)this); /*0x41ba33*/
      break; /*0x41ba34*/
  }
  return result; /*0x41ba39*/

}
}
// 0x41BB30
namespace gamemd {
int AircraftClass::OverrideMission_SyncLog(int a2, int a3, int a4)
{

  int result; // eax

  switch ( *((unsigned int *)this + 43) ) /*0x41bb4b*/
  {
    case 4: /*0x41bb4b*/
    case 0x1A: /*0x41bb4b*/
    case 0x1B: /*0x41bb4b*/
    case 0x1E: /*0x41bb4b*/
    case 0x1F: /*0x41bb4b*/
      if ( *((unsigned int *)this + 165) ) /*0x41bb52*/
        goto LABEL_4; /*0x41bb5a*/
      result = a2 - 4; /*0x41bb5c*/
      switch ( a2 ) /*0x41bb6c*/
      {
        case 4: /*0x41bb6c*/
        case 26: /*0x41bb6c*/
        case 27: /*0x41bb6c*/
        case 30: /*0x41bb6c*/
        case 31: /*0x41bb6c*/
          goto LABEL_4;
        default:
          return result;
      }
    default:
LABEL_4:
      result = FootClass::OverrideMission_SyncLog((#377 *)this, a2, a3, a4); /*0x41bb73*/
      break; /*0x41bb7e*/
  }
  return result; /*0x41bb83*/

}
}
// 0x417BD0
namespace gamemd {
char AircraftClass::ValidateMovement(int a2, int * a3, int a4)
{

  int v5; // eax
  char result; // al

  v5 = ((int64_t (*)(unsigned int *, int *, int))*(unsigned int *)(*(unsigned int *)this + 464))(this, a3, a4); /*0x417be1*/
  switch ( v5 ) /*0x417bf4*/
  {
    case 2: /*0x417bf4*/
      result = 0; /*0x417c14*/
      break; /*0x417c17*/
    case 3: /*0x417bf4*/
      result = (*(int (**)(unsigned int *, int, unsigned int, int *, unsigned int))(*(unsigned int *)this + 3552))(this, 7, 0, a3, 0); /*0x417c25*/
      break; /*0x417c2e*/
    case 4: /*0x417bf4*/
      result = (*(int (**)(unsigned int *, int, unsigned int, unsigned int, unsigned int))(*(unsigned int *)this + 3552))(this, 16, 0, 0, 0); /*0x417c3d*/
      break; /*0x417c46*/
    case 17: /*0x417bf4*/
      result = (*(int (**)(unsigned int *, int, unsigned int, int *, unsigned int))(*(unsigned int *)this + 3552))(this, 2, 0, a3, 0); /*0x417c06*/
      break; /*0x417c0f*/
    default:
      result = FootClass::ValidateMove(this, v5, a3, a4); /*0x417c4e*/
      break; /*0x417c4e*/
  }
  return result; /*0x417c0c*/

}
} // namespace gamemd

// 0x417F80
namespace gamemd {
int AircraftClass::CanEnterCell(short * a1, IUnknown * aP2, InfantryClass * aP3)
{

  int v6; // edi

  if ( !(uint8_t)House::IsHumanPlayer(*(#375 **)((char *)this + 540)) ) /*0x417f89*/
    return 0; /*0x417f92*/
  v6 = FootClass::HandleCursorWithCheck((int *)this, a1, aP2, aP3); /*0x417faf*/
  if ( v6 == 5 && !*(unsigned int *)(*(int (**)(int, unsigned int))(*(unsigned int *)this + 1016))(this, 0) ) /*0x417fc2*/
    return 0; /*0x417fc7*/
  return v6; /*0x417f94*/

}
} // namespace gamemd

// 0x41A590
namespace gamemd {
char * AircraftClass::CheckLandingClearance(int a2, int a3, int a4)
{

  char *result; // eax

  result = MissionClass::GetMissionControl(this); /*0x41a593*/
  if ( result[9] ) /*0x41a598*/
    return (char *)(*(int (**)(unsigned int *, unsigned int, int))(*(unsigned int *)this + 4624))(this, 0, 1); /*0x41a5a7*/
  return result; /*0x41a5ad*/

}
} // namespace gamemd

// 0x41ADC0
namespace gamemd {
int AircraftClass::ProcessDockCheck()
{

  if ( !*((unsigned int *)this + 413) ) /*0x41adc3*/
    WinAPI::Wrapper(-2147467261); /*0x41add2*/
  return (*(int (**)(unsigned int))(*(unsigned int *)*((unsigned int *)this + 413) + 116))(*((unsigned int *)this + 413)); /*0x41ade3*/

}
} // namespace gamemd

// 0x41B5C0
namespace gamemd {
HRESULT AircraftClass::CheckPassengerCount(int a1, int pPStm, int a3)
{

  return ObjectClass::SaveToStream_Common(a1, pPStm, a3); /*0x41b5d4*/

}
} // namespace gamemd

// 0x41B980
namespace gamemd {
int AircraftClass::IsBelowScreen()
{

  AircraftTypeClass *v1; // eax

  v1 = (AircraftTypeClass *)*((unsigned int *)this + 433); /*0x41b989*/
  if ( v1 != *(AircraftTypeClass **)&g_abs_8871E0->__pad_240[672] /*0x41b99d*/
    && v1 != *(AircraftTypeClass **)&g_abs_8871E0->__pad_240[724] )
  {
    return ObjectClass::IsBelowScreen(this); /*0x41b9a1*/
  }
  if ( !*((unsigned int *)this + 413) ) /*0x41b9a8*/
    WinAPI::Wrapper(-2147467261); /*0x41b9b7*/
  return (*(uint8_t (**)(unsigned int))(**((unsigned int **)this + 413) + 128))(*((unsigned int *)this + 413)) == 0; /*0x41b9a6*/

}
} // namespace gamemd

// 0x41BE60
namespace gamemd {
int AircraftClass::LandingCheckStub()
{

  return 0; /*0x41be62*/

}
} // namespace gamemd

// 0x41BE80
namespace gamemd {
int AircraftClass::CheckStateFlag()
{

  int result; // eax

  return result; /*0x41be80*/

}
} // namespace gamemd

// 0x41BE90
namespace gamemd {
int AircraftClass::CheckStateFlag2()
{

  int result; // eax

  return result; /*0x41be90*/

}
} // namespace gamemd

// 0x41C020
namespace gamemd {
int AircraftClass::CheckReloadTimer()
{

  int result; // eax

  IDA_LOBYTE(result) = *((unsigned char *)this + 472); /*0x41c020*/
  return result; /*0x41c026*/

}
} // namespace gamemd

// 0x41C070
namespace gamemd {
char AircraftClass::CheckDockState()
{

  return *((unsigned char *)this + 1718); /*0x41c076*/

}
} // namespace gamemd

// 0x41C190
namespace gamemd {
int AircraftClass::PowerDrainProcess(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x41c196*/
    return -2147467261; /*0x41c198*/
  *a2 = 237448642; /*0x41c1a6*/
  a2[1] = 298949647; /*0x41c1ae*/
  a2[2] = -1610610249; /*0x41c1b7*/
  a2[3] = -777003740; /*0x41c1c0*/
  return 0; /*0x41c19d*/

}
} // namespace gamemd

// 0x41C1D0
namespace gamemd {
int AircraftClass::CheckMissionAbort()
{

  return *(unsigned int *)(*((unsigned int *)this + 433) + 96); /*0x41c1d9*/

}
} // namespace gamemd

// 0x41C200
namespace gamemd {
int AircraftClass::CheckMissionFail()
{

  return *((unsigned int *)this + 433); /*0x41c206*/

}
} // namespace gamemd

// 0x41C210
namespace gamemd {
AircraftClass * AircraftClass::CheckActionStatus(void ** Block, char a2)
{

  AircraftClass::Destruct(Block); /*0x41c213*/
  if ( (Block & 1) != 0 ) /*0x41c21d*/
    RA2_OPDEL(Block); /*0x41c220*/
  return (AircraftClass *)Block; /*0x41c22a*/

}
} // namespace gamemd

// 0x5B2E90
namespace gamemd {
int AircraftClass::CheckMissionStatus()
{

  return 450; /*0x5b2e95*/

}
} // namespace gamemd

// 0x5B2F30
namespace gamemd {
int AircraftClass::CheckMissionStatus2()
{

  return 450; /*0x5b2f35*/

}
} // namespace gamemd
