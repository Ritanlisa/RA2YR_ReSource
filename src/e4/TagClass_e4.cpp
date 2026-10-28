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
// X129: fresh-render label declarations (auto, idempotent)
#include "e4/classes/DynamicVector_e4.hpp"  // X136: complete type for stru_B0F670
// X129: fresh-render label declarations (auto, idempotent)
extern unsigned int dword_B0F6A8;  // data: 0xB0F6A8

// 0x6E4F60
namespace gamemd {  // G42.18 ns repair
int TagClass::Destructor(void * a1)
{

  Debug *buildingType; // ecx
  int v3; // eax
  TagClass **v4; // ecx
  int v5; // ecx
  Debug *v6; // ecx
  int v7; // eax
  TagClass **v8; // ecx
  int v9; // ecx
  int firstTrigger; // eax
  int v11; // eax
  int Owner; // eax
  int v13; // ecx
  unsigned int *v14; // eax
  int v15; // esi
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  unsigned int v22[4]; // [esp+10h] [ebp-10h] BYREF

  /* X11: vfptr install elided (implicit via TagClass_4 virtuals) */
  /* X11: vfptr install elided (implicit via TagClass_4 virtuals) */
  /* X11: vfptr install elided (implicit via TagClass_4 virtuals) */
  /* X11: vfptr install elided (implicit via TagClass_4 virtuals) */
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)this, 1);  /*0x6e4f69*/  /*0x6e4f6f*/  /*0x6e4f76*/  /*0x6e4f7d*/  /*0x6e4f84*/
  if ( stru_A8E960.nextScenario[64] )
  {  /*0x6e4f90*/
    if ( stru_A8E960.random[488] )
    {  /*0x6e4f9d*/
      buildingType = (Debug *)this->buildingType;  /*0x6e4f9f*/
      if ( buildingType )
      {  /*0x6e4fa4*/
        if ( ((buildingType)->AccumFlags() & 0x10) != 0 )
        {  /*0x6e4fad*/
          v3 = 0;  /*0x6e4fb5*/
          if ( dword_8B40D8 <= 0 )
          {  /*0x6e4fb9*/
LABEL_9:
            v3 = -1;  /*0x6e4fcd*/
          }
          else
          {
            v4 = (TagClass **)dword_8B40CC;  /*0x6e4fbb*/
            while ( *v4 != this )
            {  /*0x6e4fc3*/
              ++v3;  /*0x6e4fc5*/
              ++v4;  /*0x6e4fc6*/
              if ( v3 >= dword_8B40D8 )
                goto LABEL_9;  /*0x6e4fcb*/  /*0x6e4fcb*/
            }
          }
          v5 = *(int *)((char *)&stru_A83CD9.ptr_0 + 3);  /*0x6e4fd0*/
          if ( *(int *)((char *)&stru_A83CD9.ptr_0 + 3) >= v3 )
          {  /*0x6e4fd8*/
            --*(int *)((char *)&stru_A83CD9.ptr_0 + 3);  /*0x6e4fdd*/
            if ( v5 - 1 < 0 && !dword_8B40D8 )
              *(int *)((char *)&stru_A83CD9.ptr_0 + 3) = 0;  /*0x6e4fe6*/  /*0x6e4fe8*/
          }
        }
      }
    }
    if ( stru_A8E960.nextScenario[64] )
    {  /*0x6e4ff5*/
      if ( stru_A8E960.random[488] )
      {  /*0x6e5002*/
        v6 = (Debug *)this->buildingType;  /*0x6e5004*/
        if ( v6 )
        {  /*0x6e5009*/
          if ( ((v6)->AccumFlags() & 4) != 0 )
          {  /*0x6e5012*/
            v7 = 0;  /*0x6e501a*/
            if ( dword_8B41B8 <= 0 )
            {  /*0x6e501e*/
LABEL_22:
              v7 = -1;  /*0x6e5032*/
            }
            else
            {
              v8 = (TagClass **)dword_8B41AC;  /*0x6e5020*/
              while ( *v8 != this )
              {  /*0x6e5028*/
                ++v7;  /*0x6e502a*/
                ++v8;  /*0x6e502b*/
                if ( v7 >= dword_8B41B8 )
                  goto LABEL_22;  /*0x6e5030*/  /*0x6e5030*/
              }
            }
            v9 = dword_A83DBC;  /*0x6e5035*/
            if ( dword_A83DBC >= v7 )
            {  /*0x6e503d*/
              --dword_A83DBC;  /*0x6e5042*/
              if ( v9 - 1 < 0 && !dword_8B41B8 )
                dword_A83DBC = 0;  /*0x6e504b*/  /*0x6e504d*/
            }
          }
        }
      }
      if ( stru_A8E960.nextScenario[64] )
      {  /*0x6e505a*/
        if ( stru_A8E960.random[488] )
        {  /*0x6e5063*/
          firstTrigger = this->firstTrigger;  /*0x6e5065*/
          if ( firstTrigger )
          {  /*0x6e506a*/
            v11 = *(unsigned int *)(firstTrigger + 36);  /*0x6e506c*/
            if ( v11 )
            {  /*0x6e5071*/
              if ( *(unsigned int *)(v11 + 164) && TagClass::HasValidHouse((TagClass *)this->buildingType) )
              {  /*0x6e5080*/
                Owner = HouseClass::FindOwner(*(HouseClass **)(*(unsigned int *)(*(unsigned int *)(this->firstTrigger + 36) + 164)
                                                             + 184));  /*0x6e509b*/
                v13 = *(unsigned int *)(Owner + 636);  /*0x6e50a0*/
                if ( v13 )
                  *(unsigned int *)(Owner + 636) = v13 - 1;  /*0x6e50a8*/  /*0x6e50ab*/
                v14 = (unsigned int *)(Owner + 664);  /*0x6e50b7*/
                *v14 = *(unsigned int *)&stru_A8E960.random[528];  /*0x6e50c1*/
                v14[1] = v22[2];  /*0x6e50c7*/
                v14[2] = 60;  /*0x6e50ca*/
              }
            }
          }
        }
      }
    }
  }
  v15 = this->firstTrigger;  /*0x6e50cd*/
  if ( v15 )
  {  /*0x6e50d2*/
    v16 = dword_B0F6A0;  /*0x6e50d4*/
    do
    {  /*0x6e50d9*/
      if ( dword_B0F6A8 < v16 )
        goto LABEL_43;  /*0x6e50df*/  /*0x6e50df*/
      if ( !byte_B0F6A5 && v16 || dword_B0F6AC <= 0 )
        goto LABEL_45;  /*0x6e50f7*/  /*0x6e50f7*/
      if ( (*(unsigned __int8 (**)(int *, int, unsigned int))(stru_B0F670.u32_28 + 8))(
             &stru_B0F670.u32_28,
             v16 + dword_B0F6AC,
             0) )
      {  /*0x6e5109*/
LABEL_43:
        v17 = dword_B0F6A8++;  /*0x6e5116*/
        *((unsigned int *)dword_B0F69C + v17) = v15;  /*0x6e5125*/
      }
      v16 = dword_B0F6A0;  /*0x6e5128*/
LABEL_45:
      v15 = *(unsigned int *)(v15 + 40);  /*0x6e512d*/
    }
    while ( v15 );  /*0x6e50d9*/
  }
  v22[0] = this;  /*0x6e5134*/
  v18 = (*(int (**)(DynamicVector *, unsigned int *))(*(unsigned int)stru_B0F670.ptr_0 + 16))(&stru_B0F670, v22);  /*0x6e5147*/
  if ( v18 != -1 && v18 < stru_B0F670.q010 )
  {  /*0x6e5157*/
    --stru_B0F670.q010;  /*0x6e515c*/
    for ( ;
          v18 < stru_B0F670.q010;
          *(unsigned int *)(*(unsigned int *)&stru_B0F670.DynamicVector_field_0x1[3] + 4 * v18 - 4) = *(unsigned int *)(*(unsigned int *)&stru_B0F670.DynamicVector_field_0x1[3] + 4 * v18) )
    {  /*0x6e5162*/
      ++v18;  /*0x6e516a*/
    }
  }
  v22[0] = this;  /*0x6e518c*/
  v19 = (*(int (**)(int *, unsigned int *))(dword_B0F708 + 16))(&dword_B0F708, v22);  /*0x6e5190*/
  if ( v19 != -1 && v19 < dword_B0F718 && v19 < --dword_B0F718 )
  {
    do
    {  /*0x6e520c*/
      ++v19;  /*0x6e51b3*/
      *((unsigned int *)dword_B0F70C + v19 - 1) = *((unsigned int *)dword_B0F70C + v19);
    }
    while ( v19 < dword_B0F718 );
  }
  v22[0] = this;  /*0x6e51d5*/
  v20 = (*(int (**)(int *, unsigned int *))(TagClass_Array + 16))(&TagClass_Array, v22);  /*0x6e51d9*/
  if ( v20 != -1 && v20 < g_GameObjectCleanup && v20 < --g_GameObjectCleanup )
  {  /*0x6e51f4*/
    do
    {
      ++v20;  /*0x6e51fc*/
      *((unsigned int *)g_TagClassCount + v20 - 1) = *((unsigned int *)g_TagClassCount + v20);  /*0x6e5200*/
    }
    while ( v20 < g_GameObjectCleanup );  /*0x6e520c*/
  }
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)this, 1);  /*0x6e5212*/
  return ((AbstractClass *)this)->DTOR();  /*0x6e521e*/

}
}  // G42.18 ns repair
// 0x6E6220
namespace gamemd {
char TagClass::HasValidHouse(void *a1)
{

  HouseClass *v1; // esi
  v1 = (HouseClass *)this->firstTrigger; /*0x6e6221*/
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
int TagClass::Unlink(void *a1)
{

  this->firstTrigger[8].destroyed = 0; /*0x71ade9*/
  this->firstTrigger[8].timer[1] = 0; /*0x71adf2*/
  int v2 = this->u32_44; // eax /*0x71adf8*/
  this->firstTrigger = 0; /*0x71adfd*/
  if ( v2 ) /*0x71ae00*/
  {
    if ( v2->occuredEvents == this ) /*0x71ae05*/
      v2->occuredEvents = 0; /*0x71ae07*/
    (this->u32_44)->Unlink()); /*0x71ae0d*/
  }
  int result = this->uniqueId; // eax /*0x71ae12*/
  if ( result ) /*0x71ae17*/
  {
    if ( result->enabled == this ) /*0x71ae1c*/
      result->enabled = 0; /*0x71ae1e*/
    result = (this->firstTrigger)->Unlink()); /*0x71ae24*/
  }
  TagTypeClass *buildingType; // ecx
  buildingType = this->buildingType; /*0x71ae29*/
  this->u32_44 = 0; /*0x71ae2c*/
  this->uniqueId = 0; /*0x71ae31*/
  this->u32_3C = 0; /*0x71ae34*/
  this->buildingType = 0; /*0x71ae37*/
  if ( buildingType ) /*0x71ae3a*/
    return (*((int (**)(TagTypeClass *, unsigned int, int))buildingType->ptr_0 + 289))(buildingType, 0, 1); /*0x71ae41*/
  return result; /*0x71ae47*/
}
}
// 0x6E5610
namespace gamemd {
int TagClass::CheckEvent(int a2, TagTypeClass * aP2)
{

  if ( this->buildingType == (TagTypeClass *)a2 ) /*0x6e561a*/
    this->buildingType = 0; /*0x6e561c*/
  TriggerClass *firstTrigger; // eax
  firstTrigger = this->firstTrigger; /*0x6e5623*/
  if ( firstTrigger == (TriggerClass *)a2 ) /*0x6e5628*/
    this->firstTrigger = firstTrigger->nextTrigger; /*0x6e562d*/
  int result; // eax
  result = (int)this->buildingType; /*0x6e5630*/
  if ( !result ) /*0x6e5635*/
  {
    this->destroyed = 1; /*0x6e5637*/
    result = *(unsigned int *)&DataGlobal_B0F6A0; /*0x6e563b*/
    if ( *(int *)&DataGlobal_B0F6A8 < *(int *)&DataGlobal_B0F6A0 /*0x6e5675*/
      || (DataGlobal_B0F6A5 || !*(unsigned int *)&DataGlobal_B0F6A0)
      && g_BuildingLoadQueue_Array.UnitExitSound > 0
      && (result = (*(int (**)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.ToTile + 8))(
                     &g_BuildingLoadQueue_Array.ToTile,
                     *(unsigned int *)&DataGlobal_B0F6A0 + g_BuildingLoadQueue_Array.UnitExitSound,
                     0),
          (unsigned char)result) )
    {
      result = (*(unsigned int *)&DataGlobal_B0F6A8)++; /*0x6e567d*/
      *(unsigned int *)(*(unsigned int *)DataGlobal_B0F69C + 4 * result) = (unsigned int)(this); /*0x6e568c*/
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

  ((AbstractClass *)this)->ProcessPower(); /*0x6e56e9*/
  v3 = (*((int (**)(void **))this->buildingType->ptr_4 + 4))(&this->buildingType->ptr_4); /*0x6e56f7*/
  Power::TimerProcess(v3); /*0x6e56fd*/
  firstTrigger = this->firstTrigger; /*0x6e5702*/
  if ( firstTrigger ) /*0x6e5707*/
  {
    v5 = (*((int (**)(void **))firstTrigger->ptr_4 + 4))(&firstTrigger->ptr_4); /*0x6e5710*/
    firstTrigger = (TriggerClass *)Power::TimerProcess(v5); /*0x6e5716*/
  }
  LOBYTE(firstTrigger) = this->destroyed; /*0x6e571b*/
  return ((Power *)a2)->FlagProcess((int)firstTrigger); /*0x6e5726*/

}
} // namespace gamemd

// 0x6E5730
namespace gamemd {
int TagClass::LoadTag(TagClass * aP0, int aP1)
{

  int result; // eax
  result = ((unsigned int *)(aP0))->SaveLoad_Prefix_0(aP1); /*0x6e573b*/
  if ( result >= 0 ) /*0x6e5742*/
  {
    if ( aP0 ) /*0x6e5746*/
    {
      AbstractClass::InitVtables((AbstractClass *)aP0, (int)&aP1); /*0x6e574f*/
      /* X11: ptr_0 install elided (implicit via TagClass virtuals 0x6e5754) */
      /* X11: ptr_0 install elided (implicit via TagClass virtuals 0x6e575a) */
      /* X11: ptr_0 install elided (implicit via TagClass virtuals 0x6e5761) */
      /* X11: ptr_0 install elided (implicit via TagClass virtuals 0x6e5768) */
    }
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, &aP0->buildingType); /*0x6e5778*/
    ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, &aP0->firstTrigger); /*0x6e5786*/
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
  result = ((int *)aP0)->SaveLoad_Prefix(a1, aP2); /*0x6e57af*/
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

  (this)->Destructor(); /*0x6e58b3*/
  if ( (a2 & 1) != 0 ) /*0x6e58bd*/
    __3_YAXPAX_Z(this); /*0x6e58c0*/
  return &this->AbstractClass; /*0x6e58ca*/

}
} // namespace gamemd
