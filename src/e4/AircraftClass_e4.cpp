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
struct Type;  // fix_tu_missing_types
#include "e4/classes/AlphaShapeClass_e4.hpp"
#include "e4/classes/FacingClass_e4.hpp"
#include "e4/classes/Random_e4.hpp"
#include "e4/classes/InfantryClass_e4.hpp"

// 0x413F80
namespace gamemd {
AircraftTypeClass * AircraftClass::Update(void * a1, void * a2, void *a3, void *a4)
{

  int *v2; // ecx
  int *v3; // esi
  unsigned int *result; // eax
  int v5; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  unsigned int *v10; // eax
  unsigned int *Value; // eax
  int v12; // edi
  int v13; // eax
  unsigned int *v14; // eax
  int v15; // ecx
  BuildingClass *v16; // ecx
  TechnoClass *v17; // [esp+0h] [ebp-Ch]
  int v18; // [esp+8h] [ebp-4h] BYREF

  v3 = v2; /*0x413f83*/
  result = ((TechnoClass *)(v17))->Update(a2); /*0x413f85*/
  v5 = v3[433]; /*0x413f8a*/
  if ( v5 ) /*0x413f92*/
  {
    v6 = v3[135]; /*0x413f98*/
    if ( v6 ) /*0x413fa1*/
    {
      v7 = 0; /*0x413fa6*/
      v8 = *(unsigned int *)(v6 + 52) + 388; /*0x413fa8*/
      v9 = *(unsigned int *)(v8 + 16); /*0x413fad*/
      if ( v9 > 0 ) /*0x413fb2*/
      {
        v10 = *(unsigned int **)(v8 + 4); /*0x413fb4*/
        while ( *v10 != v5 ) /*0x413fb9*/
        {
          ++v7; /*0x413fbb*/
          ++v10; /*0x413fbc*/
          if ( v7 >= v9 ) /*0x413fc1*/
            goto LABEL_9; /*0x413fc1*/
        }
        Powe        Power::ChangedHouse((char)((Power *)v3 + 21), 1); 
      }
    }
LABEL_9:
    Building    BuildingTypeClass::GetPowerOutput((gamemd::ObjectClass *)((BuildingTypeClass *)(v3 + 226)), *(unsigned int *)(v3[433] + 1820)); 
    Building    BuildingTypeClass::GetPowerOutput((gamemd::ObjectClass *)((BuildingTypeClass *)(v3 + 232)), *(unsigned int *)(v3[433] + 1820)); 
    Value = ((ProgressTimer *)((ProgressTimer *)(v3 + 226)))->GetValue(&v18); /*0x41400d*/
    FacingClass::Set_SyncLog((char *)v3 + 928, Value); /*0x414015*/
    v12 = *v3; /*0x414020*/
    v13 = (*(int (**)(int))(*(unsigned int *)v3[433] + 188))(v3[433]); /*0x414024*/
    (*(void (**)(int *, int))(v12 + 460))(v3, v13); /*0x41402d*/
    v14 = (unsigned int *)v3[433]; /*0x414033*/
    v15 = v14[416]; /*0x41403a*/
    if ( v15 == -1 ) /*0x414043*/
      v15 = v14[417]; /*0x414045*/
    v3[191] = v15; /*0x41404b*/
    result = (unsigned int *)v14[40]; /*0x414051*/
    v3[27] = (int)result; /*0x414057*/
    v3[28] = (int)result; /*0x41405a*/
  }
  v16 = (gamemd::BuildingClass *)((gamemd::AircraftTypeClass *)((BuildingClass *)v3[135]));
  if ( v16 ) /*0x414065*/
    return (unsigned int *)BuildingClass::PowerUpdate(v16, v3); /*0x414068*/
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
  int *v18; // [esp+28h] [ebp-18h] BYREF
  int v19; // [esp+2Ch] [ebp-14h]
  char v20[4]; // [esp+30h] [ebp-10h] BYREF
  unsigned int v21[3]; // [esp+34h] [ebp-Ch] BYREF
  int *v22; // [esp+44h] [ebp+4h]

  v18 = (int *)(0);
  v19 = 0; /*0x415b29*/
  v5 = dword_817A58; /*0x415b2d*/
  do /*0x415bab*/
  {
    v6 = *(unsigned int *)(v5); /*0x415b34*/
    v7 = (unsigned short *)(*((int (**)(AircraftClass *, char *))this->FootClass + 110))(this, v20); /*0x415b3e*/
    v8 = v6 & 7; /*0x415b44*/
    v9 = 4 * v8 + 9041544; /*0x415b55*/
    v10 = *v7 + LOWORD(g_DDrawSurfaceManager.scenario[v8 + 82]); /*0x415b5c*/
    v11 = *a2; /*0x415b5f*/
    LOWORD(v22) = v10; /*0x415b6b*/
    HIWORD(v22) = v7[1] + *(unsigned short *)(v9 + 2); /*0x415b74*/
    v18 = v22; /*0x415b83*/
    v12 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&v18); /*0x415b87*/
    if ( !(*(int (**)(int *, void *, int, int, unsigned int, int))(v11 + 428))(a2, v12, -1, -1, 0, 1) ) /*0x415b8f*/
      break; /*0x415b97*/
    ++v5; /*0x415b9d*/
    ++v19; /*0x415ba7*/
  }
  while ( (int)v5 < (int)dword_817A78 ); /*0x415bab*/
  LOWORD(v22) = (uint16_t)((unsigned int *)(dword_817A58))[v19] << 13; /*0x415bc3*/
  v13 = ((unsigned int *)this)[1]; /*0x415bc8*/
  v21[0] = ((unsigned int *)this)[0]; /*0x415bcb*/
  v14 = ((unsigned int *)this)[2]; /*0x415bd3*/
  v21[1] = v13; /*0x415bd6*/
  v21[2] = v14; /*0x415bda*/
  if ( !(*(uint8_t (**)(int *, unsigned int *, unsigned int))(*a2 + 216))( /*0x415bf3*/
          a2,
          v21,
          (uint8_t)((((unsigned int)v22 >> 7) + 1) >> 1)) )
    return 0; /*0x415c57*/
  (*(void (**)(int *, int, unsigned int))(*a2 + 488))(a2, 2, 0); /*0x415c05*/
  v15 = *a2; /*0x415c0b*/
  v16 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&v18); /*0x415c19*/
  (*(void (**)(int *, void *, int))(v15 + 1152))(a2, v16, 1); /*0x415c21*/
  if ( (*((int (**)(AircraftClass *, int, int *))this->FootClass + 158))(this, 2, a2) == 1 ) /*0x415c37*/
    (*((void (**)(AircraftClass *, int))this->FootClass + 157))(this, 9); /*0x415c3f*/
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
        ((AnimClass *)(v13))->ctor(v14, v15, 0, 1, (void *)0x600, 0, 0); /*0x416685*/
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
AircraftTypeClass * AircraftClass::GetCursorOverObject(IUnknown * aP1, IUnknown * a3, void *a3_2)
{

  int *v3; // ebp
  int *v4; // edi
  int result; // eax
  int v7; // ebx
  Object *v8; // eax
  unsigned int *v9; // eax
  int (**vtable0)(AircraftClass *, int **, unsigned int, int *); // eax
  int v11; // ebp
  int v12; // ecx
  int v13; // edx
  unsigned int *v14; // eax
  Cell *v15; // eax
  unsigned int *v16; // eax
  int v17; // eax
  char v18[12]; // [esp+10h] [ebp-Ch] BYREF

  v3 = (int *)((int)(a3));
  v4 = (int *)((int)(aP1));
  result = (int)(InfantryClass::GetCursorOverObject((FootClass *)this, (int)aP1, (char)a3));
  v7 = result; /*0x417cd8*/
  if ( result == 8 ) /*0x417cdd*/
    return result; /*0x417cdd*/
  if ( result == 26 && this->Type[1].TechnoTypeClass[317] ) /*0x417cf4*/
    v7 = 0; /*0x417cfe*/
  if ( this->Type[1].TechnoTypeClass[300] && (uint8_t)House::IsHumanPlayer((House *)((unsigned int *)this)[0]) ) /*0x417d16*/
  {
    if ( v7 != 7 && v7 ) /*0x417d26*/
      goto LABEL_18; /*0x417d26*/
    if ( (uint8_t)((Object *)((Object *)((unsigned int *)this)[0]))->IsAlliedWithObjectHouse((int)v4) ) /*0x417d33*/
    {
      if ( !v4 /*0x417d56*/
        || (LOBYTE(a3) = v4[5] & 1, !(unsigned char)a3)
        || (v8 = (Object *)(*(int (**)(int *))(*v4 + 60))(v4),
            (uint8_t)((Object *)(v8))->IsAlliedWithObjectHouse((int)this)) )
      {
        if ( !((unsigned int *)this)[1] && (*(int (**)(int *))(*v4 + 44))(v4) == 1 ) /*0x417d73*/
        {
          v7 = 17; /*0x417d75*/
          goto LABEL_24; /*0x417d7a*/
        }
      }
    }
  }
  if ( !v7 ) /*0x417d7e*/
  {
    v9 = (unsigned int *)(*(int (**)(int *, char *))(*v4 + 72))(v4, v18); /*0x417d89*/
    LOWORD(a3) = *v9 / 256; /*0x417d9e*/
    HIWORD(a3) = v9[1] / 256; /*0x417db7*/
    vtable0 = (int (**)(AircraftClass *, int **, unsigned int, int *))this->FootClass; /*0x417dc0*/
    aP1 = a3; /*0x417dc4*/
    v7 = vta    v7 = vtable0[28](this,(int **)(&aP1), 0, v3); 
  }
LABEL_18:
  if ( v7 == 4 ) /*0x417dd0*/
  {
    if ( ((unsigned int *)this)[0] ) /*0x417dd2*/
      goto LABEL_24; /*0x417dda*/
LABEL_23:
    v7 = 0; /*0x417df4*/
    goto LABEL_24; /*0x417df4*/
  }
  if ( v7 == 5 && !*(unsigned int *)(*((int (**)(AircraftClass *, unsigned int))this->FootClass + 254))(this, 0) ) /*0x417def*/
    goto LABEL_23; /*0x417df2*/
LABEL_24:
  if ( (uint8_t)House::IsHumanPlayer((House *)((unsigned int *)this)[0]) ) /*0x417dfc*/
  {
    if ( v7 == 7 && (*(int (**)(int *))(*v4 + 44))(v4) == 6 ) /*0x417e14*/
    {
      v11 = v4[328]; /*0x417e16*/
      if ( *(unsigned char *)(v11 + 5801) ) /*0x417e1c*/
      {
        v12 = 0; /*0x417e2c*/
        v13 = *(unsigned int *)&this->Type->TechnoTypeClass[1016]; /*0x417e33*/
        if ( v13 <= 0 ) /*0x417e38*/
          goto LABEL_36; /*0x417e38*/
        v14 = *(unsigned int **)&this->Type->TechnoTypeClass[1004]; /*0x417e3a*/
        while ( *v14 != v11 ) /*0x417e3f*/
        {
          ++v12; /*0x417e41*/
          ++v14; /*0x417e42*/
          if ( v12 >= v13 ) /*0x417e47*/
            goto LABEL_36; /*0x417e47*/
        }
        if ( !(uint8_t)Array::ContainsValue((Array *)v4, (int)this) /*0x417e76*/
          || v4[70]
          || (v7 = 3, (*((int (**)(AircraftClass *, int, int *))this->FootClass + 158))(this, 15, v4) != 1) )
        {
LABEL_36:
          v7 = 31; /*0x417e78*/
        }
      }
    }
  }
  if ( this->Type[1].TechnoTypeClass[300] && v7 == 17 ) /*0x417e90*/
  {
    a3 = (IUnknown *)(*(int **)(*(int (**)(int *, int **))(*v4 + 440))(v4, &aP1));
    if ( a3 != (IUnknown *)((int *))g_AircraftStatusFlag ) /*0x417eae*/
    {
      v15 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&a3); /*0x417ecc*/
      v16 = ((Cell *)(v15))->IsBridge(); /*0x417ed3*/
      if ( v16 ) /*0x417eda*/
      {
        if ( *(unsigned char *)(v16[328] + 5821) ) /*0x417ee6*/
          return 0; /*0x417efb*/
      }
    }
  }
  else if ( v7 == 2 ) /*0x417f01*/
  {
    if ( (*(uint8_t (**)(int *))(*v4 + 196))(v4) ) /*0x417f07*/
    {
      if ( !(*(int (**)(int *, int))(*v4 + 208))(v4, 1) ) /*0x417f17*/
      {
        v17 = (*(int (**)(int *, int))(*v4 + 204))(v4, 1); /*0x417f27*/
        if ( (*(int (**)(int))(*(unsigned int *)v17 + 44))(v17) == 21 ) /*0x417f37*/
          return 1; /*0x417f47*/
      }
    }
  }
  else if ( v7 == 5 && *(unsigned char *)((*(int (**)(int *))(*v4 + 136))(v4) + 563) ) /*0x417f59*/
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

  TeamClass *team; // ecx
  int v8; // esi
  unsigned int *v10; // eax
  unsigned char v11[12]; // [esp+Ch] [ebp-Ch] BYREF

  team = (gamemd::TeamClass *)(((unsigned int *)this)[0]); /*0x4196bc*/
  if ( team /*0x4196d7*/
    && (uint8_t)TechnoClass::IsWaypointHidden((TechnoClass *)team)
    && !(uint8_t)((Type *)((Type *)&stru_87F5F0.__pad_58[416]))->CheckAmbiguity((int)a2, 1) )
  {
    return 0; /*0x4196d7*/
  }
  v8 = a2[57]; /*0x4196e4*/
  if ( (!v8 /*0x41974d*/
     || (*(unsigned char *)(v8 + 20) & 1) == 0
     || (uint8_t)HouseClass::IsAlliedWith(*(#375 **)(v8 + 540), (#375 *)((unsigned int *)this)[0])
     || *(unsigned int *)(v8 + 544) != 2
     && !dword_A8E7AC
     && ((*(int (**)(int))(*(unsigned int *)v8 + 44))(v8) != 6 || !*(unsigned char *)(*(unsigned int *)(v8 + 1312) + 3226)))
    && !(uint8_t)((Cell *)((bool *)a2))->IsBuildable(4, 0, 0, -1, 0, -1, 1) )
  {
    return 7; /*0x419761*/
  }
  if ( *(unsigned int *)&dword_A8B238 ) /*0x41976b*/
    return 0; /*0x41976b*/
  if ( !((unsigned int *)this)[0] ) /*0x41976d*/
    return 0; /*0x41976d*/
  if ( ((unsigned int *)this)[0] ) /*0x419777*/
    return 0; /*0x419777*/
  v10 = (unsigned int *)(*(int (**)(unsigned int *, unsigned char *))(*a2 + 72))(a2, v11); /*0x41978a*/
  if ( !(uint8_t)Cell::IsPassable(v10) ) /*0x419793*/
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

  v2 = (*(int (**)(AircraftTypeClass *))(*(unsigned int *)this->Type + 188))(this->Type); /*0x41a956*/
  if ( (*((int (**)(AircraftClass *))this->FootClass + 114))(this) == v2 ) /*0x41a960*/
  {
    if ( !((unsigned int *)this)[0] ) /*0x41a962*/
      (*((void (**)(AircraftClass *, unsigned int, int))this->FootClass + 289))(this, 0, 1); /*0x41a974*/
    return 1; /*0x41a97b*/
  }
  else
  {
    if ( !((unsigned int *)this)[0] /*0x41a99c*/
      && (*((uint8_t (**)(AircraftClass *))this->FootClass + 171))(this)
      && !(uint8_t)Team::AllMembersValid((Team *)this) )
    {
      (*((void (**)(AircraftClass *, unsigned int, int))this->FootClass + 289))(this, 0, 1); /*0x41a9ad*/
    }
    if ( ((unsigned int *)this)[0] ) /*0x41a9b3*/
    {
      (*((void (**)(AircraftClass *, int, unsigned int))this->FootClass + 122))(this, 1, 0); /*0x41a9c5*/
      return 1; /*0x41a9cc*/
    }
    else
    {
      return FootClass::FindAITarget((FootClass *)this); /*0x41a9d5*/
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
    if ( (*((int (**)(void **))a3->vtable1 + 3))(&a3->vtable1) != 6 /*0x41aada*/
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
        if ( (uint8_t)((Array *)(v11))->Contains((int)a1) ) /*0x41ac72*/
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
              if ( !(*(uint8_t (**)(int))(*(unsigned int *)a1->locomotor[0] + 96))(a1->locomotor[0]) /*0x41ad5d*/
                && !((HouseClass *)this)->IonSensitivesShouldBeOffline() )
              {
                if ( !a1->locomotor[0] ) /*0x41ad66*/
                  WinAPI::Wrapper(-2147467261); /*0x41ad75*/
                (*(void (**)(int))(*(unsigned int *)a1->locomotor[0] + 88))(a1->locomotor[0]); /*0x41ad83*/
              }
              if ( (int *)((Team *)((Team *)a1))->GetMember(0) == v14 /*0x41ad9e*/
                && ClosestPlacementCell != (int *)((Team *)((Team *)a1))->GetMember(0) )
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
  HouseClass *owner; // edx
  int v6; // edx
  int v7; // eax
  HouseClass *v8; // edx
  int result; // eax
  int v10; // ebx
  int (**vtable0)(AircraftClass *); // edx
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  int (**v15)(AircraftClass *); // eax
  int v16; // eax
  int v17; // [esp+Ch] [ebp-Ch] BYREF
  int v18; // [esp+10h] [ebp-8h]
  int v19; // [esp+14h] [ebp-4h]

  v4 = *(unsigned int *)&this->Type->TechnoTypeClass[1512]; /*0x41ae00*/
  if ( !(*((int (**)(AircraftClass *))this->FootClass + 114))(this) ) /*0x41ae06*/
  {
    v4 = 1; /*0x41ae10*/
LABEL_4:
    v17 = ((unsigned int *)this)[0]; /*0x41ae1f*/
    v18 = ((unsigned int *)this)[1]; /*0x41ae40*/
    owner = ((unsigned int *)this)[0]; /*0x41ae44*/
    v19 = ((unsigned int *)this)[2]; /*0x41ae4e*/
    MapClass::RevealArea1((MapClass *)&stru_87F5F0.__pad_58[416], &v17, v4, owner, a2, a3, 0, 1, 0); /*0x41ae5e*/
    v6 = ((unsigned int *)this)[1]; /*0x41ae65*/
    v7 = ((unsigned int *)this)[2]; /*0x41ae68*/
    v17 = ((unsigned int *)this)[0]; /*0x41ae6d*/
    v18 = v6; /*0x41ae77*/
    v8 = ((unsigned int *)this)[0]; /*0x41ae7b*/
    v19 = v7; /*0x41ae84*/
    return MapClass::RevealArea1((MapClass *)&stru_87F5F0.__pad_58[416], &v17, v4, v8, a2, a3, 0, 1, 1); /*0x41aea1*/
  }
  if ( v4 ) /*0x41ae19*/
    goto LABEL_4; /*0x41ae19*/
  result = (int)dword_A8B230->vtable0; /*0x41aeaa*/
  if ( ((int)dword_A8B230->vtable0 & 0x1000) != 0 ) /*0x41aeaf*/
  {
    v10 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 244); /*0x41aec5*/
    v17 = ((unsigned int *)this)[0]; /*0x41aecd*/
    v18 = ((unsigned int *)this)[1]; /*0x41aed6*/
    vtable0 = (int (**)(AircraftClass *))this->FootClass; /*0x41aeda*/
    v19 = ((unsigned int *)this)[2]; /*0x41aedf*/
    v12 = vtable0[114](this); /*0x41aee3*/
    MapClass::RevealArea1( /*0x41af1a*/
      (MapClass *)&stru_87F5F0.__pad_58[416],
      &v17,
      v10,
      ((unsigned int *)this)[0],
      0,
      0,
      1,
      v12 < *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1972) / 2,
      0);
    v13 = ((unsigned int *)this)[1]; /*0x41af21*/
    v14 = ((unsigned int *)this)[2]; /*0x41af24*/
    v17 = ((unsigned int *)this)[0]; /*0x41af27*/
    v15 = (int (**)(AircraftClass *))this->FootClass; /*0x41af2b*/
    v18 = v13; /*0x41af2d*/
    v19 = v14; /*0x41af35*/
    v16 = v15[114](this); /*0x41af39*/
    return MapClass::RevealArea1( /*0x41af70*/
             (MapClass *)&stru_87F5F0.__pad_58[416],
             &v17,
             v10,
             ((unsigned int *)this)[0],
             0,
             0,
             1,
             v16 < *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1972) / 2,
             1);
  }
  return result; /*0x41ae9b*/

}
}
// 0x41B430
namespace gamemd {
void* AircraftClass::LoadFromStream(unsigned int * a0, FootClass * aP1)
{

  AircraftClass *v2; // esi
  void **p_vtable1; // ebx
  int v4; // eax
  signed int v5; // eax
  int v6; // ecx
  char *i; // eax
  unsigned int *v8; // eax
  int result; // eax
  int v10; // edi
  int v11; // ebp
  int v12; // edi
  int vtable2; // eax

  v2 = a0; /*0x41b432*/
  p_vtable1 = &((unsigned int *)a0)[0]; /*0x41b43a*/
  a0 = (AircraftClass *)(*((int (**)(void **))((unsigned int *)a0)[0] + 4))(&((unsigned int *)a0)[0]); /*0x41b44b*/
  v4 = ((BuildingTypeClass *)(&g_BuildingLoadQueue_Array))->Dequeue((int *)&a0); /*0x41b44f*/
  if ( v4 ) /*0x41b456*/
  {
    v5 = (signed int)(v4 - (unsigned int)g_BuildingLoadQueue_Array.TechnoTypeClass) >> 3; /*0x41b45e*/
    if ( v5 != -1 ) /*0x41b464*/
    {
      v6 = v5 + 1; /*0x41b466*/
      for ( i = (char *)((char *)&g_BuildingLoadQueue_Array); /*0x41b470*/
            v6 < (int)((char *)&g_BuildingLoadQueue_Array);
            i = (char *)((char *)&g_BuildingLoadQueue_Array) )
      {
        v8 = (char *)g_BuildingLoadQueue_Array.TechnoTypeClass + 8 * v6++; /*0x41b478*/
        *(v8 - 2) = *v8; /*0x41b47e*/
        *(v8 - 1) = v8[1]; /*0x41b484*/
      }
      ((unsigned int *)&g_BuildingLoadQueue_Array)[0] = i - 1; /*0x41b499*/
      *((unsigned int *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)((char *)&g_BuildingLoadQueue_Array)) = 0; /*0x41b49e*/
      *((unsigned int *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)((char *)&g_BuildingLoadQueue_Array) + 1) = 0; /*0x41b4ae*/
      ((unsigned int *)&g_BuildingLoadQueue_Array)[0] = 0; /*0x41b4b2*/
    }
  }
  result = ObjectClass::LoadFromStream_Common((int)v2, aP1); /*0x41b4be*/
  if ( result >= 0 ) /*0x41b4c5*/
  {
    v10 = ((unsigned int *)v2)[0]; /*0x41b4cb*/
    if ( v2 ) /*0x41b4d3*/
    {
      FootClass::PostLoadInit((FootClass *)v2, (int)&a0); /*0x41b4dc*/
      v2->FootClass = &vt_AircraftClass; /*0x41b4e1*/
      *p_vtable1 = &vt_AircraftClass; /*0x41b4e7*/
      ((unsigned int *)v2)[0] = &vt_AircraftClass; /*0x41b4ed*/
      ((unsigned int *)v2)[0] = &vt_AircraftClass; /*0x41b4f4*/
      *(unsigned int *)v2->__pad_6C0 = &vt_AircraftClass; /*0x41b4fb*/
    }
    v11 = ((unsigned int *)v2)[0]; /*0x41b506*/
    if ( v11 != v10 ) /*0x41b50e*/
    {
      ((unsigned int *)v2)[0] = v10; /*0x41b512*/
      if ( v10 ) /*0x41b518*/
        (*(void (**)(int))(*(unsigned int *)v10 + 4))(v10); /*0x41b51d*/
      if ( v11 ) /*0x41b522*/
        (*(void (**)(int))(*(unsigned int *)v11 + 8))(v11); /*0x41b528*/
    }
    (*(void (**)(int))(*(unsigned int *)v10 + 8))(v10); /*0x41b52e*/
    v12 = (*((int (**)(void **))*p_vtable1 + 4))(p_vtable1); /*0x41b53d*/
    vtable2 = (int)((char *)&g_BuildingLoadQueue_Array); /*0x41b53f*/
    if ( (int)((char *)&g_BuildingLoadQueue_Array) + 1 <= (int)((char *)&g_BuildingLoadQueue_Array) ) /*0x41b548*/
      goto LABEL_18; /*0x41b548*/
    if ( !((char *)&g_BuildingLoadQueue_Array) ) /*0x41b54c*/
      vtable2 = 10; /*0x41b54e*/
    if ( BuildingTypeClass::Enqueue((int)&g_BuildingLoadQueue_Array, vtable2) ) /*0x41b559*/
    {
LABEL_18:
      *((unsigned int *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)((char *)&g_BuildingLoadQueue_Array)) = v12; /*0x41b56d*/
      *((unsigned int *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)((char *)&g_BuildingLoadQueue_Array) + 1) = v2; /*0x41b57b*/
      LOBYTE(((char *)&g_BuildingLoadQueue_Array)) = 0; /*0x41b585*/
      ++((char *)&g_BuildingLoadQueue_Array); /*0x41b58c*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v2->Type); /*0x41b59d*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v2->AircraftClass_field_6CC); /*0x41b5ae*/
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

  switch ( ((unsigned int *)this)[0] ) /*0x41ba0b*/
  {
    case 4: /*0x41ba0b*/
    case 0x1A: /*0x41ba0b*/
    case 0x1B: /*0x41ba0b*/
    case 0x1E: /*0x41ba0b*/
    case 0x1F: /*0x41ba0b*/
      if ( ((unsigned int *)this)[0] ) /*0x41ba12*/
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
      result = MissionClass::SetState((MissionClass *)this); /*0x41ba33*/
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

  switch ( ((unsigned int *)this)[0] ) /*0x41bb4b*/
  {
    case 4: /*0x41bb4b*/
    case 0x1A: /*0x41bb4b*/
    case 0x1B: /*0x41bb4b*/
    case 0x1E: /*0x41bb4b*/
    case 0x1F: /*0x41bb4b*/
      if ( ((unsigned int *)this)[0] ) /*0x41bb52*/
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
      result = FootClass::OverrideMission_SyncLog((FootClass *)this, a2, a3, a4); /*0x41bb73*/
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

  v5 = ((int64_t (*)(AircraftClass *, int *, int))*((unsigned int *)this->FootClass + 29))(this, a3, a4); /*0x417be1*/
  switch ( v5 ) /*0x417bf4*/
  {
    case 2: /*0x417bf4*/
      result = 0; /*0x417c14*/
      break; /*0x417c17*/
    case 3: /*0x417bf4*/
      result = (*((char (**)(AircraftClass *, int, unsigned int, int *, unsigned int))this->FootClass + 222))( /*0x417c25*/
                 this,
                 7,
                 0,
                 a3,
                 0);
      break; /*0x417c2e*/
    case 4: /*0x417bf4*/
      result = (*((char (**)(AircraftClass *, int, unsigned int, unsigned int, unsigned int))this->FootClass + 222))( /*0x417c3d*/
                 this,
                 16,
                 0,
                 0,
                 0);
      break; /*0x417c46*/
    case 17: /*0x417bf4*/
      result = (*((char (**)(AircraftClass *, int, unsigned int, int *, unsigned int))this->FootClass + 222))( /*0x417c06*/
                 this,
                 2,
                 0,
                 a3,
                 0);
      break; /*0x417c0f*/
    default:
      result = FootClass::ValidateMove((FootClass *)this, v5, a3, a4); /*0x417c4e*/
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

  if ( !(uint8_t)House::IsHumanPlayer((House *)((unsigned int *)this)[0]) ) /*0x417f89*/
    return 0; /*0x417f92*/
  v6 = FootClass::HandleCursorWithCheck((FootClass *)this, a1, aP2, aP3); /*0x417faf*/
  if ( v6 == 5 && !*(unsigned int *)(*((int (**)(AircraftClass *, unsigned int))this->FootClass + 254))(this, 0) ) /*0x417fc2*/
    return 0; /*0x417fc7*/
  return v6; /*0x417f94*/

}
} // namespace gamemd

// 0x41A590
namespace gamemd {
char * AircraftClass::CheckLandingClearance(int a2, int a3, int a4)
{

  char *result; // eax

  result = MissionClass::GetMissionControl((MissionClass *)this); /*0x41a593*/
  if ( result[9] ) /*0x41a598*/
    return (*((char *(**)(AircraftClass *, unsigned int, int))this->FootClass + 289))(this, 0, 1); /*0x41a5a7*/
  return result; /*0x41a5ad*/

}
} // namespace gamemd

// 0x41ADC0
namespace gamemd {
int AircraftClass::ProcessDockCheck()
{

  if ( !((unsigned int *)this)[0] ) /*0x41adc3*/
    WinAPI::Wrapper(-2147467261); /*0x41add2*/
  return (*(int (**)(int))(*(unsigned int *)((unsigned int *)this)[0] + 116))(((unsigned int *)this)[0]); /*0x41ade3*/

}
} // namespace gamemd

// 0x41B5C0
namespace gamemd {
HRESULT AircraftClass::CheckPassengerCount(int a1, int pPStm, int a3)
{

  return ObjectClass::SaveToStream_Common((ObjectClass *)a1, pPStm, a3); /*0x41b5d4*/

}
} // namespace gamemd

// 0x41B980
namespace gamemd {
int AircraftClass::IsBelowScreen()
{

  AircraftTypeClass *Type; // eax

  Type = this->Type; /*0x41b989*/
  if ( Type != *(AircraftTypeClass **)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1248) /*0x41b99d*/
    && Type != *(AircraftTypeClass **)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1300) )
  {
    return ObjectClass::IsBelowScreen((IUnknown *)this); /*0x41b9a1*/
  }
  if ( !((unsigned int *)this)[0] ) /*0x41b9a8*/
    WinAPI::Wrapper(-2147467261); /*0x41b9b7*/
  return (*(uint8_t (**)(int))(*(unsigned int *)((unsigned int *)this)[0] + 128))(((unsigned int *)this)[0]) == 0; /*0x41b9a6*/

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

  LOBYTE(result) = this->isDisguisedFlag; /*0x41c020*/
  return result; /*0x41c026*/

}
} // namespace gamemd

// 0x41C070
namespace gamemd {
char AircraftClass::CheckDockState()
{

  return this->frozenStill; /*0x41c076*/

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
  a2[3] = unk_7E966C; /*0x41c1c0*/
  return 0; /*0x41c19d*/

}
} // namespace gamemd

// 0x41C1D0
namespace gamemd {
int AircraftClass::CheckMissionAbort()
{

  return *(unsigned int *)&this->Type->TechnoTypeClass[96]; /*0x41c1d9*/

}
} // namespace gamemd

// 0x41C200
namespace gamemd {
int AircraftClass::CheckMissionFail()
{

  return (int)this->Type; /*0x41c206*/

}
} // namespace gamemd

// 0x41C210
namespace gamemd {
AircraftClass * AircraftClass::CheckActionStatus(void ** Block, char a2)
{

  AircraftClass::Destruct(Block); /*0x41c213*/
  if ( (a2 & 1) != 0 ) /*0x41c21d*/
    __3_YAXPAX_Z(Block); /*0x41c220*/
  return &Block->FootClass; /*0x41c22a*/

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
