// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/Building_e4.hpp"
#include "e4/classes/HashTable_flat_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/BulletTypeClass_e4.hpp"

// 0x4E3560
namespace gamemd {
int BuildingType::FindDefault()
{
  int result; // eax

  result = 0; /*0x4e3560*/
  if ( this == (void *)-2 ) /*0x4e3565*/
    return HashTable::Find(g_DialogHashTable, off_844AE8[0], 0); /*0x4e3573*/
  if ( !this ) /*0x4e357b*/
    return HashTable::Find(g_DialogHashTable, off_844AF0[0], 0); /*0x4e358a*/
  if ( this == (void *)1 ) /*0x4e3593*/
    return HashTable::Find(g_DialogHashTable, off_844AF4[0], 0); /*0x4e35a3*/
  if ( this == (void *)2 ) /*0x4e35ac*/
    return HashTable::Find(g_DialogHashTable, off_844AF8[0], 0); /*0x4e35bb*/
  if ( this == (void *)3 ) /*0x4e35c4*/
    return HashTable::Find(g_DialogHashTable, off_844AFC[0], 0); /*0x4e35d4*/
  if ( this == (void *)4 ) /*0x4e35dd*/
    return HashTable::Find(g_DialogHashTable, off_844B00[0], 0); /*0x4e35ed*/
  if ( this == (void *)5 ) /*0x4e35f6*/
    return HashTable::Find(g_DialogHashTable, off_844B04[0], 0); /*0x4e3605*/
  if ( this == (void *)6 ) /*0x4e360e*/
    return HashTable::Find(g_DialogHashTable, off_844B08[0], 0); /*0x4e361e*/
  if ( this == (void *)7 ) /*0x4e3627*/
    return HashTable::Find(g_DialogHashTable, off_844B0C[0], 0); /*0x4e3637*/
  if ( this == (void *)8 ) /*0x4e3640*/
    return HashTable::Find(g_DialogHashTable, off_844B10[0], 0); /*0x4e364f*/
  if ( this == (void *)-3 ) /*0x4e3658*/
    return HashTable::Find(g_DialogHashTable, off_844AEC[0], 0); /*0x4e3668*/
  if ( this == (void *)9 ) /*0x4e3671*/
    return HashTable::Find(g_DialogHashTable, off_844B14[0], 0); /*0x4e3681*/
  return result; /*0x4e3578*/
}
} // namespace gamemd

// 0x510ED0
namespace gamemd {
int BuildingType::FindOwnerHouse()
{
  int v1; // eax

  if ( this == (void *)4475 ) /*0x510ed6*/
  {
    v1 = BuildingType::Init(0); /*0x510eda*/
  }
  else if ( this == (void *)4476 ) /*0x510ee2*/
  {
    v1 = BuildingType::Init(1); /*0x510ee6*/
  }
  else if ( this == (void *)4477 ) /*0x510eee*/
  {
    v1 = BuildingType::Init(2); /*0x510ef2*/
  }
  else if ( this == (void *)4478 ) /*0x510efa*/
  {
    v1 = BuildingType::Init(3); /*0x510efe*/
  }
  else if ( this == (void *)4479 ) /*0x510f06*/
  {
    v1 = BuildingType::Init(4); /*0x510f0a*/
  }
  else if ( this == (void *)4480 ) /*0x510f12*/
  {
    v1 = BuildingType::Init(5); /*0x510f16*/
  }
  else if ( this == (void *)4481 ) /*0x510f1e*/
  {
    v1 = BuildingType::Init(6); /*0x510f22*/
  }
  else
  {
    if ( this != (void *)4482 ) /*0x510f2a*/
      return 0; /*0x510f2a*/
    v1 = BuildingType::Init(7); /*0x510f34*/
  }
  if ( v1 >= 0 && v1 < HouseClass_Count ) /*0x510f43*/
    return *((unsigned int *)HouseClass_Array + v1); /*0x510f4e*/
  return 0; /*0x510f4e*/
}
} // namespace gamemd

// 0x510F60
namespace gamemd {
bool BuildingType::IsSpecialType()
{
  return this == (void *)4475 /*0x510fa2*/
      || this == (void *)4476
      || this == (void *)4477
      || this == (void *)4478
      || this == (void *)4479
      || this == (void *)4480
      || this == (void *)4481
      || this == (void *)4482;
}
} // namespace gamemd

// 0x68C030
namespace gamemd {
int BuildingType::Init(unsigned int a2)
{
  if ( a2 >= 0x10 ) /*0x68c036*/
    return -1; /*0x68c047*/
  else
    return *(this + a2 + 1120); /*0x68c03d*/
}
} // namespace gamemd
