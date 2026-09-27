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

// 0x6E4F60
namespace gamemd {
TriggerClass * * TagClass::Destructor(void ** a1, AbstractClass * a2)
{
  unsigned int *v2; // ecx
  int v3; // eax
  void ***v4; // ecx
  unsigned int *v6; // ecx
  int v7; // eax
  void ***v8; // ecx
  int v10; // eax
  int v11; // eax
  int OwnerHouseClass; // eax
  int v13; // ecx
  unsigned int *v14; // eax
  int v15; // esi
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  unsigned int v22[4]; // [esp+10h] [ebp-10h] BYREF

  AbstractClass::AnnounceExpiredPointer(); /*0x6e4f84*/
  if ( g_WTFMode ) /*0x6e4f90*/
  {
    if ( g_BounceClassInit ) /*0x6e4f9d*/
    {
      v2 = this->buildingType; /*0x6e4f9f*/
      if ( v2 ) /*0x6e4fa4*/
      {
        if ( (Debug::AccumFlags(v2) & 0x10) != 0 ) /*0x6e4fad*/
        {
          v3 = 0; /*0x6e4fb5*/
          if ( g_ScenarioUpdateState <= 0 ) /*0x6e4fb9*/
          {
  LABEL_9:
            v3 = -1; /*0x6e4fcd*/
          }
          else
          {
            v4 = (void ***)dword_8B40CC; /*0x6e4fbb*/
            while ( *v4 != this ) /*0x6e4fc3*/
            {
              ++v3; /*0x6e4fc5*/
              ++v4; /*0x6e4fc6*/
              if ( v3 >= g_ScenarioUpdateState ) /*0x6e4fcb*/
                goto LABEL_9; /*0x6e4fcb*/
            }
          }
          dword_A83CDC = dword_A83CDC; /*0x6e4fd0*/
          if ( dword_A83CDC >= v3 ) /*0x6e4fd8*/
          {
            --dword_A83CDC; /*0x6e4fdd*/
            if ( dword_A83CDC - 1 < 0 && !g_ScenarioUpdateState ) /*0x6e4fe6*/
              dword_A83CDC = 0; /*0x6e4fe8*/
          }
        }
      }
    }
    if ( g_WTFMode ) /*0x6e4ff5*/
    {
      if ( g_BounceClassInit ) /*0x6e5002*/
      {
        v6 = this->buildingType; /*0x6e5004*/
        if ( v6 ) /*0x6e5009*/
        {
          if ( (Debug::AccumFlags(v6) & 4) != 0 ) /*0x6e5012*/
          {
            v7 = 0; /*0x6e501a*/
            if ( dword_8B41B8 <= 0 ) /*0x6e501e*/
            {
  LABEL_22:
              v7 = -1; /*0x6e5032*/
            }
            else
            {
              v8 = (void ***)dword_8B41AC; /*0x6e5020*/
              while ( *v8 != this ) /*0x6e5028*/
              {
                ++v7; /*0x6e502a*/
                ++v8; /*0x6e502b*/
                if ( v7 >= dword_8B41B8 ) /*0x6e5030*/
                  goto LABEL_22; /*0x6e5030*/
              }
            }
            dword_A83DBC = dword_A83DBC; /*0x6e5035*/
            if ( dword_A83DBC >= v7 ) /*0x6e503d*/
            {
              --dword_A83DBC; /*0x6e5042*/
              if ( dword_A83DBC - 1 < 0 && !dword_8B41B8 ) /*0x6e504b*/
                dword_A83DBC = 0; /*0x6e504d*/
            }
          }
        }
      }
      if ( g_WTFMode ) /*0x6e505a*/
      {
        if ( g_BounceClassInit ) /*0x6e5063*/
        {
          v10 = (int)*(&this->vtable20); /*0x6e5065*/
          if ( v10 ) /*0x6e506a*/
          {
            v11 = v10->buildingType; /*0x6e506c*/
            if ( v11 ) /*0x6e5071*/
            {
              if ( *(unsigned int *)(v11 + 164) && (uint8_t)TagClass::HasValidHouse(this->buildingType) ) /*0x6e5080*/
              {
                OwnerHouseClass = HouseClass::FindOwner(*(void **)(*(unsigned int *)(*((unsigned int *)*(&this->vtable20) + 9) + 164) + 184)); /*0x6e509b*/
                v13 = *(unsigned int *)(OwnerHouseClass + 636); /*0x6e50a0*/
                if ( v13 ) /*0x6e50a8*/
                  *(unsigned int *)(OwnerHouseClass + 636) = v13 - 1; /*0x6e50ab*/
                v14 = (unsigned int *)(OwnerHouseClass + 664); /*0x6e50b7*/
                *v14 = g_CurrentFrame; /*0x6e50c1*/
                v14[1] = v22[2]; /*0x6e50c7*/
                v14[2] = 60; /*0x6e50ca*/
              }
            }
          }
        }
      }
    }
  }
  v15 = (int)*(&this->vtable20); /*0x6e50cd*/
  if ( v15 ) /*0x6e50d2*/
  {
    v16 = dword_B0F6A0; /*0x6e50d4*/
    do /*0x6e50d9*/
    {
      if ( g_LaserDrawConfig < v16 ) /*0x6e50df*/
        goto LABEL_43; /*0x6e50df*/
      if ( !byte_B0F6A5 && v16 || dword_B0F6AC <= 0 ) /*0x6e50f7*/
        goto LABEL_45; /*0x6e50f7*/
      if ( (*(uint8_t (__thiscall **)(int *, int, unsigned int))(g_DiskLaserManager + 8))( /*0x6e5109*/
             &g_DiskLaserManager,
             v16 + dword_B0F6AC,
             0) )
      {
  LABEL_43:
        v17 = g_LaserDrawConfig++; /*0x6e5116*/
        *((unsigned int *)dword_B0F69C + v17) = v15; /*0x6e5125*/
      }
      v16 = dword_B0F6A0; /*0x6e5128*/
  LABEL_45:
      v15 = v15->nextTrigger; /*0x6e512d*/
    }
    while ( v15 ); /*0x6e50d9*/
  }
  v22[0] = this; /*0x6e5134*/
  v18 = (*(int (__thiscall **)(int *, unsigned int *))(g_AnimPoolManager + 16))(&g_AnimPoolManager, v22); /*0x6e5147*/
  if ( v18 != -1 && v18 < g_AnimManager && v18 < --g_AnimManager ) /*0x6e5162*/
  {
    do /*0x6e517a*/
    {
      ++v18; /*0x6e516a*/
      *((unsigned int *)g_AnimPoolCount + v18 - 1) = *((unsigned int *)g_AnimPoolCount + v18); /*0x6e516e*/
    }
    while ( v18 < g_AnimManager ); /*0x6e517a*/
  }
  v22[0] = this; /*0x6e518c*/
  v19 = (*(int (__thiscall **)(int *, unsigned int *))(dword_B0F708 + 16))(&dword_B0F708, v22); /*0x6e5190*/
  if ( v19 != -1 && v19 < dword_B0F718 && v19 < --dword_B0F718 ) /*0x6e51ab*/
  {
    do /*0x6e51c3*/
    {
      ++v19; /*0x6e51b3*/
      *((unsigned int *)dword_B0F70C + v19 - 1) = *((unsigned int *)dword_B0F70C + v19); /*0x6e51b7*/
    }
    while ( v19 < dword_B0F718 ); /*0x6e51c3*/
  }
  v22[0] = this; /*0x6e51d5*/
  v20 = (*(int (__thiscall **)(int *, unsigned int *))(TagClass_Array + 16))(&TagClass_Array, v22); /*0x6e51d9*/
  if ( v20 != -1 && v20 < g_GameObjectCleanup && v20 < --g_GameObjectCleanup ) /*0x6e51f4*/
  {
    do /*0x6e520c*/
    {
      ++v20; /*0x6e51fc*/
      *((unsigned int *)g_TagClassCount + v20 - 1) = *((unsigned int *)g_TagClassCount + v20); /*0x6e5200*/
    }
    while ( v20 < g_GameObjectCleanup ); /*0x6e520c*/
  }
  AbstractClass::AnnounceExpiredPointer(); /*0x6e5212*/
  return AbstractClass::DTOR(); /*0x6e521e*/
}
}
// 0x6E6220
namespace gamemd {
int TagClass::HasValidHouse()
{
  unsigned int *v1; // esi

  v1 = (unsigned int *)*(&this->uniqueId0); /*0x6e6221*/
  if ( !v1 ) /*0x6e6229*/
    return 0; /*0x6e6240*/
  while ( !HouseClass::FindType15(v1) ) /*0x6e6234*/
  {
    v1 = (unsigned int *)v1[42]; /*0x6e6236*/
    if ( !v1 ) /*0x6e623e*/
      return 0; /*0x6e623e*/
  }
  return 1; /*0x6e6242*/
}
}
// 0x71ADE0
namespace gamemd {
Coord * * TagClass::Unlink()
{
  int v2; // eax
  int result; // eax
  int v4; // ecx

  *(unsigned char *)(*(&this->vtable20) + 624) = 0; /*0x71ade9*/
  *(unsigned int *)(*(&this->vtable20) + 632) = 0; /*0x71adf2*/
  v2 = *(&this->vtable27); /*0x71adf8*/
  *(&this->vtable20) = 0; /*0x71adfd*/
  if ( v2 ) /*0x71ae00*/
  {
    if ( v2->q040 == this ) /*0x71ae05*/
      v2->q040 = 0; /*0x71ae07*/
    TagClass::Unlink(*(&this->vtable27)); /*0x71ae0d*/
  }
  result = *(&this->vtable26); /*0x71ae12*/
  if ( result ) /*0x71ae17*/
  {
    if ( result->q044 == this ) /*0x71ae1c*/
      result->q044 = 0; /*0x71ae1e*/
    result = TagClass::Unlink(*(&this->vtable26)); /*0x71ae24*/
  }
  v4 = this->creationFrame; /*0x71ae29*/
  *(&this->vtable27) = 0; /*0x71ae2c*/
  *(&this->vtable26) = 0; /*0x71ae31*/
  *(&this->vtable25) = 0; /*0x71ae34*/
  *(&this->vtable24) = 0; /*0x71ae37*/
  if ( v4 ) /*0x71ae3a*/
    return (*(int (__thiscall **)(int, unsigned int, int))(*(unsigned int *)v4 + 1156))(v4, 0, 1); /*0x71ae41*/
  return result; /*0x71ae47*/
}
}
// 0x6E5610
namespace gamemd {
int TagClass::CheckEvent(int a2, TagTypeClass * aP2)
{
  TriggerClass * v4;
  unsigned int result;

  if ( this->buildingType == a2 ) /*0x6e561a*/
    this->buildingType = 0; /*0x6e561c*/
  v4 = this->firstTrigger; /*0x6e5623*/
  if ( v4 == a2 ) /*0x6e5628*/
    this->firstTrigger = v4->nextTrigger; /*0x6e562d*/
  result = this->buildingType; /*0x6e5630*/
  if ( !result ) /*0x6e5635*/
  {
    this->destroyed = 1; /*0x6e5637*/
    result = dword_B0F6A0; /*0x6e563b*/
    if ( g_LaserDrawConfig < dword_B0F6A0 /*0x6e5675*/
      || (byte_B0F6A5 || !dword_B0F6A0)
      && dword_B0F6AC > 0
      && (result = (*(int (__thiscall **)(int *, int, unsigned int))(g_DiskLaserManager + 8))(
                     &g_DiskLaserManager,
                     dword_B0F6A0 + dword_B0F6AC,
                     0),
          (unsigned char)result) )
    {
      result = g_LaserDrawConfig++; /*0x6e567d*/
      *((unsigned int *)dword_B0F69C + result) = this; /*0x6e568c*/
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
  a2[3] = -1252326136; /*0x6e56d0*/
  return 0; /*0x6e56ad*/
}
} // namespace gamemd

// 0x6E56E0
namespace gamemd {
int TagClass::ProcessTag(int * a2)
{
  int v3; // eax
  TriggerClass * v4;
  int v5; // eax

  AbstractClass::ProcessPower(); /*0x6e56e9*/
  v3 = (*(int (__stdcall **)(int))(this->buildingType->vtable2 + 16))(this->buildingType + 4); /*0x6e56f7*/
  Power::TimerProcess(v3); /*0x6e56fd*/
  v4 = this->firstTrigger; /*0x6e5702*/
  if ( v4 ) /*0x6e5707*/
  {
    v5 = (*(int (__stdcall **)(int))(v4->vtable2 + 16))(v4 + 4); /*0x6e5710*/
    v4 = Power::TimerProcess(v5); /*0x6e5716*/
  }
  IDA_LOBYTE(v4) = this->destroyed; /*0x6e571b*/
  return Power::FlagProcess(a2, v4); /*0x6e5726*/
}
} // namespace gamemd

// 0x6E5730
namespace gamemd {
int TagClass::LoadTag(AbstractClass * aP0, int aP1)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(aP0, aP1); /*0x6e573b*/
  if ( result >= 0 ) /*0x6e5742*/
  {
    if ( aP0 ) /*0x6e5746*/
    {
      AbstractClass::InitVtables(aP0, (int)&aP1); /*0x6e574f*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0 + 9); /*0x6e5778*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0 + 10); /*0x6e5786*/
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

  result = AbstractClass::SaveLoad_Prefix(aP0, a1, aP2); /*0x6e57af*/
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
  TagClass::Destructor(); /*0x6e58b3*/
  if ( (a2 & 1) != 0 ) /*0x6e58bd*/
    RA2_OPDEL(); /*0x6e58c0*/
  return this; /*0x6e58ca*/
}
} // namespace gamemd
