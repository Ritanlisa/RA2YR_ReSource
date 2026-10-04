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
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E4F60)
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
    ((TagClass*)(*((TagClass **)this + 17)))->Unlink(); /*0x71ae0d*/
  }
  result = *((unsigned int *)this + 16); /*0x71ae12*/
  if ( result ) /*0x71ae17*/
  {
    if ( *(TagClass **)(result + 68) == this ) /*0x71ae1c*/
      *(unsigned int *)(result + 68) = 0; /*0x71ae1e*/
    result = (int)(((TagClass*)(*((TagClass **)this + 16)))->Unlink()); /*0x71ae24*/
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
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E5610)
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
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E56E0)
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
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E58B0)
}
} // namespace gamemd
