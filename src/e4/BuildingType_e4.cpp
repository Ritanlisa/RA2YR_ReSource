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
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/InfantryTypeClass_e4.hpp"
#include "e4/classes/UnitTypeClass_e4.hpp"
#include "e4/classes/Random_e4.hpp"

// 0x4E3560
namespace gamemd {
int BuildingType::FindDefault()
{

  int result; // eax

  result = 0; /*0x4e3560*/
  if ( this == (BuildingType *)-2 ) /*0x4e3565*/
    return HashTable::Find( (void *)(&g_DialogHashTable), (const char *)off_844AE8, 0); /*0x4e3573*/
  if ( !this ) /*0x4e357b*/
    return HashTable::Find( (void *)(&g_DialogHashTable), (const char *)off_844AF0, 0); /*0x4e358a*/
  if ( this == (BuildingType *)1 ) /*0x4e3593*/
    return HashTable::Find( (void *)(&g_DialogHashTable), (const char *)off_844AF4, 0); /*0x4e35a3*/
  if ( this == (BuildingType *)2 ) /*0x4e35ac*/
    return HashTable::Find( (void *)(&g_DialogHashTable), (const char *)off_844AF8, 0); /*0x4e35bb*/
  if ( this == (BuildingType *)3 ) /*0x4e35c4*/
    return HashTable::Find( (void *)(&g_DialogHashTable), (const char *)off_844AFC, 0); /*0x4e35d4*/
  if ( this == (BuildingType *)4 ) /*0x4e35dd*/
    return HashTable::Find( (void *)(&g_DialogHashTable), (const char *)off_844B00, 0); /*0x4e35ed*/
  if ( this == (BuildingType *)5 ) /*0x4e35f6*/
    return HashTable::Find( (void *)(&g_DialogHashTable), (const char *)off_844B04, 0); /*0x4e3605*/
  if ( this == (BuildingType *)6 ) /*0x4e360e*/
    return HashTable::Find( (void *)(&g_DialogHashTable), (const char *)off_844B08, 0); /*0x4e361e*/
  if ( this == (BuildingType *)7 ) /*0x4e3627*/
    return HashTable::Find( (void *)(&g_DialogHashTable), (const char *)off_844B0C, 0); /*0x4e3637*/
  if ( this == (BuildingType *)8 ) /*0x4e3640*/
    return HashTable::Find( (void *)(&g_DialogHashTable), (const char *)off_844B10, 0); /*0x4e364f*/
  if ( this == (BuildingType *)-3 ) /*0x4e3658*/
    return HashTable::Find( (void *)(&g_DialogHashTable), (const char *)off_844AEC, 0); /*0x4e3668*/
  if ( this == (BuildingType *)9 ) /*0x4e3671*/
    return HashTable::Find( (void *)(&g_DialogHashTable), (const char *)off_844B14, 0); /*0x4e3681*/
  return result; /*0x4e3578*/

}
} // namespace gamemd

// 0x510ED0
namespace gamemd {
int BuildingType::FindOwnerHouse()
{

  int v1; // eax

  if ( this == (BuildingType *)4475 ) /*0x510ed6*/
  {
    v1 = ((BuildingType *)((BuildingType *)dword_A8B230))->Init(0); /*0x510eda*/
  }
  else if ( this == (BuildingType *)4476 ) /*0x510ee2*/
  {
    v1 = ((BuildingType *)((BuildingType *)dword_A8B230))->Init(1u); /*0x510ee6*/
  }
  else if ( this == (BuildingType *)4477 ) /*0x510eee*/
  {
    v1 = ((BuildingType *)((BuildingType *)dword_A8B230))->Init(2u); /*0x510ef2*/
  }
  else if ( this == (BuildingType *)4478 ) /*0x510efa*/
  {
    v1 = ((BuildingType *)((BuildingType *)dword_A8B230))->Init(3u); /*0x510efe*/
  }
  else if ( this == (BuildingType *)4479 ) /*0x510f06*/
  {
    v1 = ((BuildingType *)((BuildingType *)dword_A8B230))->Init(4u); /*0x510f0a*/
  }
  else if ( this == (BuildingType *)4480 ) /*0x510f12*/
  {
    v1 = ((BuildingType *)((BuildingType *)dword_A8B230))->Init(5u); /*0x510f16*/
  }
  else if ( this == (BuildingType *)4481 ) /*0x510f1e*/
  {
    v1 = ((BuildingType *)((BuildingType *)dword_A8B230))->Init(6u); /*0x510f22*/
  }
  else
  {
    if ( this != (BuildingType *)4482 ) /*0x510f2a*/
      return 0; /*0x510f2a*/
    v1 = ((BuildingType *)((BuildingType *)dword_A8B230))->Init(7u); /*0x510f34*/
  }
  if ( v1 >= 0 && v1 < dword_A80238 ) /*0x510f43*/
    return *(&dword_A8022C->vtable1 + v1); /*0x510f4e*/
  return 0; /*0x510f4e*/

}
} // namespace gamemd

// 0x510F60
namespace gamemd {
int BuildingType::IsSpecialType()
{

  int result; // eax

  LOBYTE(result) = this == (BuildingType *)4475 /*0x510fa3*/
                || this == (BuildingType *)4476
                || this == (BuildingType *)4477
                || this == (BuildingType *)4478
                || this == (BuildingType *)4479
                || this == (BuildingType *)4480
                || this == (BuildingType *)4481
                || this == (BuildingType *)4482;
  return result; /*0x510fa2*/

}
} // namespace gamemd

// 0x68C030
namespace gamemd {
int BuildingType::Init(unsigned int a2)
{

  if ( a2 >= 0x10 ) /*0x68c036*/
    return -1; /*0x68c047*/
  else
    return *((unsigned int *)this + a2 + 1120); /*0x68c03d*/

}
} // namespace gamemd
