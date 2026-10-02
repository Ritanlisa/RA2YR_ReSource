// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/TagClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/TauntCommandClass_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/TaskForceClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/TagTypeClass_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/DisplayClass_e4.hpp"
#include "e4/classes/Techno_e4.hpp"
#include "e4/classes/Factory_e4.hpp"
#include "e4/classes/ObjectPtr_e4.hpp"
#include "e4/classes/TriggerTypeClass_e4.hpp"
#include "e4/classes/ParticleSystemClass_e4.hpp"
#include "e4/classes/TriggerClass_e4.hpp"

// 0x6E4F60
namespace gamemd {
TriggerClass * * TagClass::Destructor(void * a1)
{

  TagTypeClass *buildingType; // ecx
  int v3; // eax
  ParticleSystemClass *ambientParticles; // ecx
  int v5; // ecx
  TagTypeClass *v6; // ecx
  int v7; // eax
  TagClass **v8; // ecx
  void *SuperClass_field_0x6C; // ecx
  TriggerClass *firstTrigger; // eax
  TriggerTypeClass *v11; // eax
  int Owner; // eax
  int v13; // ecx
  unsigned int *v14; // eax
  TriggerClass *v15; // esi
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  unsigned int v22[4]; // [esp+10h] [ebp-10h] BYREF

  a1->vtable1 = &vt_TagClass; /*0x6e4f69*/
  ((unsigned int *)a1)[0] = (unsigned int)(&vt_TagClass); /*0x6e4f6f*/
  ((unsigned int *)a1)[0] = (unsigned int)(&vt_TagClass); /*0x6e4f76*/
  ((unsigned int *)a1)[0] = (unsigned int)(&vt_TagClass); /*0x6e4f7d*/
  AbstractClass::AnnounceExpiredPointer((gamemd::AbstractClass *)a1, 1); /*0x6e4f84*/
  if ( byte_A8E9A0 ) /*0x6e4f90*/
  {
    if ( *((unsigned int *)((char *)&stru_A8EB00 + 376)) ) /*0x6e4f9d*/
    {
      buildingType = a1->buildingType; /*0x6e4f9f*/
      if ( buildingType ) /*0x6e4fa4*/
      {
        if ( (((Debug*)(Debug *)buildingType)->AccumFlags() & 0x10) != 0 ) /*0x6e4fad*/
        {
          v3 = 0; /*0x6e4fb5*/
          if ( (int)((char *)&FootClass_Array) <= 0 ) /*0x6e4fb9*/
          {
LABEL_9:
            v3 = -1; /*0x6e4fcd*/
          }
          else
          {
            ambientParticles = (gamemd::ParticleSystemClass *)(((char *)&FootClass_Array)); /*0x6e4fbb*/
            while ( ambientParticles->ObjectClass != a1 ) /*0x6e4fc3*/
            {
              ++v3; /*0x6e4fc5*/
              ambientParticles = (ParticleSystemClass *)((char *)ambientParticles + 4); /*0x6e4fc6*/
              if ( v3 >= (int)((char *)&FootClass_Array) ) /*0x6e4fcb*/
                goto LABEL_9; /*0x6e4fcb*/
            }
          }
          v5 = dword_A83CDC; /*0x6e4fd0*/
          if ( dword_A83CDC >= v3 ) /*0x6e4fd8*/
          {
            --dword_A83CDC; /*0x6e4fdd*/
            if ( v5 - 1 < 0 && !((char *)&FootClass_Array) ) /*0x6e4fe6*/
              dword_A83CDC = 0; /*0x6e4fe8*/
          }
        }
      }
    }
    if ( byte_A8E9A0 ) /*0x6e4ff5*/
    {
      if ( *((unsigned int *)((char *)&stru_A8EB00 + 376)) ) /*0x6e5002*/
      {
        v6 = a1->buildingType; /*0x6e5004*/
        if ( v6 ) /*0x6e5009*/
        {
          if ( (((Debug*)(Debug *)v6)->AccumFlags() & 4) != 0 ) /*0x6e5012*/
          {
            v7 = 0; /*0x6e501a*/
            if ( *((unsigned int *)((char *)&FootClass_Array + 0)) <= 0 ) /*0x6e501e*/
            {
LABEL_22:
              v7 = -1; /*0x6e5032*/
            }
            else
            {
              v8 = (TagClass **)((unsigned int *)&FootClass_Array)[5]; /*0x6e5020*/
              while ( *(gamemd::TagClass *)(v8) != a1 ) /*0x6e5028*/
              {
                ++v7; /*0x6e502a*/
                ++v8; /*0x6e502b*/
                if ( v7 >= *((unsigned int *)((char *)&FootClass_Array + 0)) ) /*0x6e5030*/
                  goto LABEL_22; /*0x6e5030*/
              }
            }
            SuperClass_field_0x6C = stru_A83D50.SuperClass_field_0x6C; /*0x6e5035*/
            if ( (int)stru_A83D50.SuperClass_field_0x6C >= v7 ) /*0x6e503d*/
            {
              --stru_A83D50.SuperClass_field_0x6C; /*0x6e5042*/
              if ( (int)SuperClass_field_0x6C - 1 < 0 && !((unsigned int *)&FootClass_Array)[0] ) /*0x6e504b*/
                stru_A83D50.SuperClass_field_0x6C = 0; /*0x6e504d*/
            }
          }
        }
      }
      if ( byte_A8E9A0 ) /*0x6e505a*/
      {
        if ( *((unsigned int *)((char *)&stru_A8EB00 + 376)) ) /*0x6e5063*/
        {
          firstTrigger = a1->firstTrigger; /*0x6e5065*/
          if ( firstTrigger ) /*0x6e506a*/
          {
            v11 = firstTrigger->buildingType; /*0x6e506c*/
            if ( v11 ) /*0x6e5071*/
            {
              if ( v11->House && TagClass::HasValidHouse((TagClass *)a1->buildingType) ) /*0x6e5080*/
              {
                Owner = ((HouseClass *)((HouseClass *)a1->firstTrigger->buildingType->House->arrayIndex2))->FindOwner(); /*0x6e509b*/
                v13 = *(unsigned int *)(Owner + 636); /*0x6e50a0*/
                if ( v13 ) /*0x6e50a8*/
                  *(unsigned int *)(Owner + 636) = v13 - 1; /*0x6e50ab*/
                v14 = (unsigned int *)(Owner + 664); /*0x6e50b7*/
                *v14 = *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x6e50c1*/
                v14[1] = v22[2]; /*0x6e50c7*/
                v14[2] = 60; /*0x6e50ca*/
              }
            }
          }
        }
      }
    }
  }
  v15 = a1->firstTrigger; /*0x6e50cd*/
  if ( v15 ) /*0x6e50d2*/
  {
    v16 = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_E5C[4]; /*0x6e50d4*/
    do /*0x6e50d9*/
    {
      if ( *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[12] < v16 ) /*0x6e50df*/
        goto LABEL_43; /*0x6e50df*/
      if ( !g_BuildingLoadQueue_Array.__pad_E5C[9] && v16 || g_BuildingLoadQueue_Array.UnitExitSound <= 0 ) /*0x6e50f7*/
        goto LABEL_45; /*0x6e50f7*/
      if ( (*(uint8_t (**)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.ToTile + 8))( /*0x6e5109*/
             &g_BuildingLoadQueue_Array.ToTile,
             v16 + g_BuildingLoadQueue_Array.UnitExitSound,
             0) )
      {
LABEL_43:
        v17 = (*(unsigned int *)&g_BuildingLoadQueue_Array.__pad_E5C[12])++; /*0x6e5116*/
        *(unsigned int *)(*(unsigned int *)g_BuildingLoadQueue_Array.__pad_E5C + 4 * v17) = v15; /*0x6e5125*/
      }
      v16 = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_E5C[4]; /*0x6e5128*/
LABEL_45:
      v15 = v15->nextTrigger; /*0x6e512d*/
    }
    while ( v15 ); /*0x6e50d9*/
  }
  v22[0] = (unsigned int)(a1);
  v18 = (*(int (**)(int *, unsigned int *))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x6e5147*/
          &g_BuildingLoadQueue_Array.LightVisibility,
          v22);
  if ( v18 != -1 && v18 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x6e5157*/
  {
    --g_BuildingLoadQueue_Array.LightBlueTint; /*0x6e515c*/
    for ( ; /*0x6e5162*/
          v18 < g_BuildingLoadQueue_Array.LightBlueTint;
          *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v18 - 4) = *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                          + 4 * v18) )
    {
      ++v18; /*0x6e516a*/
    }
  }
  v22[0] = (unsigned int)(a1);
  v19 = (*(int (**)(int *, unsigned int *))(g_BuildingLoadQueue_Array.ExitCoord[0] + 16))( /*0x6e5190*/
          g_BuildingLoadQueue_Array.ExitCoord,
          v22);
  if ( v19 != -1 && v19 < g_BuildingLoadQueue_Array.unknown___2 ) /*0x6e51a0*/
  {
    --g_BuildingLoadQueue_Array.unknown___2; /*0x6e51a5*/
    for ( ; /*0x6e51ab*/
          v19 < g_BuildingLoadQueue_Array.unknown___2;
          *(unsigned int *)(g_BuildingLoadQueue_Array.ExitCoord[1] + 4 * v19 - 4) = *(unsigned int *)(g_BuildingLoadQueue_Array.ExitCoord[1]
                                                                                        + 4 * v19) )
    {
      ++v19; /*0x6e51b3*/
    }
  }
  v22[0] = (unsigned int)(a1);
  v20 = (*(int (**)(int *, unsigned int *))(TagClass_Array + 16))(&TagClass_Array, v22); /*0x6e51d9*/
  if ( v20 != -1 && v20 < g_GameObjectCleanup && v20 < --g_GameObjectCleanup ) /*0x6e51f4*/
  {
    do /*0x6e520c*/
    {
      ++v20; /*0x6e51fc*/
      *((unsigned int *)g_TagClassCount + v20 - 1) = *((unsigned int *)g_TagClassCount + v20); /*0x6e5200*/
    }
    while ( v20 < g_GameObjectCleanup ); /*0x6e520c*/
  }
  AbstractClass::AnnounceExpiredPointer((gamemd::AbstractClass *)a1, 1); /*0x6e5212*/
  return AbstractClass::DTOR((AbstractClass *)a1); /*0x6e521e*/

}
}
// 0x6E6220
namespace gamemd {
char TagClass::HasValidHouse()
{

  HouseClass *v1; // esi

  v1 = (HouseClass *)*((unsigned int *)this + 40); /*0x6e6221*/
  if ( !v1 ) /*0x6e6229*/
    return 0; /*0x6e6240*/
  while ( !HouseClass::FindType15(v1) ) /*0x6e6234*/
  {
    v1 = (HouseClass *)v1->psychicDetectionCount; /*0x6e6236*/
    if ( !v1 ) /*0x6e623e*/
      return 0; /*0x6e623e*/
  }
  return 1; /*0x6e6242*/

}
}
// 0x71ADE0
namespace gamemd {
int TagClass::Unlink()
{

  int v2; // eax
  int result; // eax
  TagTypeClass *buildingType; // ecx

  this->firstTrigger[8].destroyed = 0; /*0x71ade9*/
  this->firstTrigger[8].timer[1] = 0; /*0x71adf2*/
  v2 = *((unsigned int *)this + 17); /*0x71adf8*/
  this->firstTrigger = 0; /*0x71adfd*/
  if ( v2 ) /*0x71ae00*/
  {
    if ( *(TagClass **)(v2 + 64) == this ) /*0x71ae05*/
      *(unsigned int *)(v2 + 64) = 0; /*0x71ae07*/
    TagClass::Unlink(*((TagClass **)this + 17)); /*0x71ae0d*/
  }
  result = *((unsigned int *)this + 16); /*0x71ae12*/
  if ( result ) /*0x71ae17*/
  {
    if ( *(TagClass **)(result + 68) == this ) /*0x71ae1c*/
      *(unsigned int *)(result + 68) = 0; /*0x71ae1e*/
    result = (int)(TagClass::Unlink(*((TagClass **)this + 16))); /*0x71ae24*/
  }
  buildingType = this->buildingType; /*0x71ae29*/
  *((unsigned int *)this + 17) = 0; /*0x71ae2c*/
  *((unsigned int *)this + 16) = 0; /*0x71ae31*/
  *((unsigned int *)this + 15) = 0; /*0x71ae34*/
  *((unsigned int *)this + 14) = 0; /*0x71ae37*/
  if ( buildingType ) /*0x71ae3a*/
    return (*((int (**)(TagTypeClass *, unsigned int, int))buildingType->vtable1 + 289))(buildingType, 0, 1); /*0x71ae41*/
  return result; /*0x71ae47*/

}
}
// 0x6E5610
namespace gamemd {
int TagClass::CheckEvent(int a2, TagTypeClass * aP2)
{

  TriggerClass *firstTrigger; // eax
  int result; // eax

  if ( this->buildingType == (TagTypeClass *)a2 ) /*0x6e561a*/
    this->buildingType = 0; /*0x6e561c*/
  firstTrigger = this->firstTrigger; /*0x6e5623*/
  if ( firstTrigger == (TriggerClass *)a2 ) /*0x6e5628*/
    this->firstTrigger = firstTrigger->nextTrigger; /*0x6e562d*/
  result = (int)this->buildingType; /*0x6e5630*/
  if ( !result ) /*0x6e5635*/
  {
    this->destroyed = 1; /*0x6e5637*/
    result = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_E5C[4]; /*0x6e563b*/
    if ( *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[12] < *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[4] /*0x6e5675*/
      || (g_BuildingLoadQueue_Array.__pad_E5C[9] || !*(unsigned int *)&g_BuildingLoadQueue_Array.__pad_E5C[4])
      && g_BuildingLoadQueue_Array.UnitExitSound > 0
      && (result = (*(int (**)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.ToTile + 8))(
                     &g_BuildingLoadQueue_Array.ToTile,
                     *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_E5C[4] + g_BuildingLoadQueue_Array.UnitExitSound,
                     0),
          (unsigned char)result) )
    {
      result = (*(unsigned int *)&g_BuildingLoadQueue_Array.__pad_E5C[12])++; /*0x6e567d*/
      *(unsigned int *)(*(unsigned int *)g_BuildingLoadQueue_Array.__pad_E5C + 4 * result) = this; /*0x6e568c*/
    }
  }
  return result; /*0x6e568f*/

}
} // namespace gamemd

// 0x6E56A0
namespace gamemd {
int TagClass::ddtor(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x6e56a6*/
    return -2147467261; /*0x6e56a8*/
  *a2 = 1425466418; /*0x6e56b6*/
  a2[1] = 298977773; /*0x6e56be*/
  a2[2] = 1610655148; /*0x6e56c7*/
  a2[3] = unk_7E97CC; /*0x6e56d0*/
  return 0; /*0x6e56ad*/

}
} // namespace gamemd

// 0x6E56E0
namespace gamemd {
int TagClass::ProcessTag(int * a2)
{

  int v3; // eax
  TriggerClass *firstTrigger; // eax
  int v5; // eax

  ((AbstractClass *)(AbstractClass *)this)->ProcessPower(); /*0x6e56e9*/
  v3 = (*((int (**)(void **))this->((unsigned int *)buildingType)[0] + 4))(&this->((unsigned int *)buildingType)[0]); /*0x6e56f7*/
  Power::TimerProcess(v3); /*0x6e56fd*/
  firstTrigger = this->firstTrigger; /*0x6e5702*/
  if ( firstTrigger ) /*0x6e5707*/
  {
    v5 = (*((int (**)(void **))((unsigned int *)firstTrigger)[0] + 4))(&((unsigned int *)firstTrigger)[0]); /*0x6e5710*/
    firstTrigger = (TriggerClass *)Power::TimerProcess(v5); /*0x6e5716*/
  }
  LOBYTE(firstTrigger) = this->destroyed; /*0x6e571b*/
  return ((Power *)((Power *)a2))->FlagProcess((int)firstTrigger); /*0x6e5726*/

}
} // namespace gamemd

// 0x6E5730
namespace gamemd {
int TagClass::LoadTag(AbstractClass * aP0, int aP1)
{

  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(aP0,(gamemd::AbstractClass *)(aP1)); /*0x6e573b*/
  if ( result >= 0 ) /*0x6e5742*/
  {
    if ( aP0 ) /*0x6e5746*/
    {
      AbstractClass::InitVtables((AbstractClass *)aP0, (int)&aP1); /*0x6e574f*/
      aP0->vtable1 = &vt_TagClass; /*0x6e5754*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&vt_TagClass); /*0x6e575a*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&vt_TagClass); /*0x6e5761*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&vt_TagClass); /*0x6e5768*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->buildingType); /*0x6e5778*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->firstTrigger); /*0x6e5786*/
    return 0; /*0x6e578b*/
  }
  return result; /*0x6e578d*/

}
} // namespace gamemd

// 0x6E57A0
namespace gamemd {
int TagClass::SaveTag(TechnoTypeClass * aP0, int * a1, int aP2)
{

  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((gamemd::ObjectTypeClass *)((int *)aP0),(gamemd::ObjectTypeClass *)(a1),(gamemd::ObjectTypeClass *)(aP2)); /*0x6e57af*/
  if ( result >= 0 ) /*0x6e57b6*/
    return 0; /*0x6e57b8*/
  return result; /*0x6e57ba*/

}
} // namespace gamemd

// 0x6E5890
namespace gamemd {
int TagClass::StubReturn56()
{

  return 56; /*0x6e5895*/

}
} // namespace gamemd

// 0x6E58A0
namespace gamemd {
int TagClass::StubReturn44()
{

  return 44; /*0x6e58a5*/

}
} // namespace gamemd

// 0x6E58B0
namespace gamemd {
TagClass * TagClass::ProcessTrigger(char a2)
{

  ((TagClass *)(Block))->Destructor(); /*0x6e58b3*/
  if ( (a2 & 1) != 0 ) /*0x6e58bd*/
    __3_YAXPAX_Z(Block); /*0x6e58c0*/
  return Block; /*0x6e58ca*/

}
} // namespace gamemd
