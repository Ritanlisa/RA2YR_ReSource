// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/TClassFactory_CampaignClass_e4.hpp"
#include "e4/classes/TClassFactory_MechLocomotionClass_e4.hpp"
#include "e4/classes/CampaignClass_e4.hpp"
#include "e4/classes/TActionClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Radar_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/FileSystem_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"

// 0x6C0260
namespace gamemd {  // G42.18 ns repair
int TClassFactory_CampaignClass::GetClassName()
{

  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c0270*/
  if ( !v1 ) /*0x6c0274*/
    __3_YAXPAX_Z((void *)Block); /*0x6c0277*/
  return v1; /*0x6c0281*/

}
}  // G42.18 ns repair
} // namespace gamemd
// 0x6C4D60
namespace gamemd {
int TClassFactory_MechLocomotionClass::GetClassName()
{

  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c4d70*/
  if ( !v1 ) /*0x6c4d74*/
    __3_YAXPAX_Z((void *, unsigned int a3, unsigned int a4)Block); /*0x6c4d77*/
  return v1; /*0x6c4d81*/

}
} // namespace gamemd
// 0x6C0290
namespace gamemd {
int TClassFactory_CampaignClass::ddtor(void * a1, void * a2, void * a3, void * a4)
{

  CampaignClass *v5; // eax
  int (***v6)(unsigned int, unsigned int *, unsigned int *); // eax
  int (***v7)(unsigned int, unsigned int *, unsigned int *); // esi
  int v8; // edi
  unsigned int *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c0298*/
    return -2147024809; /*0x6c029b*/
  *v9 = 0; /*0x6c02a8*/
  if ( a3 ) /*0x6c02b0*/
    return -2147221232; /*0x6c02b3*/
  v5 = (CampaignClass *)__2_YAPAXI_Z(0x3A0u); /*0x6c02c1*/
  if ( !v5 ) /*0x6c02cb*/
    return -2147024882; /*0x6c02cb*/
  v6 = (int (***)(unsigned int, unsigned int *, unsigned int *))CampaignClass::CampaignClass(v5, 0); /*0x6c02d1*/
  v7 = v6; /*0x6c02d6*/
  if ( !v6 ) /*0x6c02da*/
    return -2147024882; /*0x6c02dd*/
  v8 = (**v6)(v6, a4, v9); /*0x6c02f1*/
  if ( v8 < 0 ) /*0x6c02f5*/
    ((void (*)(int (***)(unsigned int, unsigned int *, unsigned int *), int))(*v7)[8])(v7, 1); /*0x6c02fd*/
  return v8; /*0x6c029a*/

}
} // namespace gamemd
// 0x6C0310
namespace gamemd {
int TClassFactory_CampaignClass::GetSize(void * a1, void * a2)
{

  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(unsigned int *)((unsigned int)(a2)+ 4); /*0x6c031a*/
  if ( v5 ) /*0x6c031d*/
    v3 = v2 + 1; /*0x6c031f*/
  else
    v3 = v2 - 1; /*0x6c0328*/
  *(unsigned int *)((unsigned int)(a2)+ 4) = v3; /*0x6c0320*/
  return 0; /*0x6c0325*/

}
} // namespace gamemd
// 0x6C4D40
namespace gamemd {
LONG TClassFactory_MechLocomotionClass::AddRef(void *a1)
{

  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c4d4e*/

}
} // namespace gamemd
// 0x6C4D90
namespace gamemd {
int TClassFactory_MechLocomotionClass::ddtor(void * a1, void * a2, void * a3, void * a4)
{

  MechLocomotionClass *v5; // eax
  int (***v6)(unsigned int, unsigned int *, unsigned int *); // eax
  int (***v7)(unsigned int, unsigned int *, unsigned int *); // esi
  int v8; // edi
  unsigned int *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6c4d98*/
    return -2147024809; /*0x6c4d9b*/
  *v9 = 0; /*0x6c4da8*/
  if ( a3 ) /*0x6c4db0*/
    return -2147221232; /*0x6c4db3*/
  v5 = (MechLocomotionClass *)__2_YAPAXI_Z(0x34u); /*0x6c4dbe*/
  if ( !v5 ) /*0x6c4dc8*/
    return -2147024882; /*0x6c4dc8*/
  v6 = (int (***)(unsigned int, unsigned int *, unsigned int *))SmallFunc_5AFEF0(v5); /*0x6c4dcc*/
  v7 = v6; /*0x6c4dd1*/
  if ( !v6 ) /*0x6c4dd5*/
    return -2147024882; /*0x6c4dd8*/
  v8 = (**v6)(v6, a4, v9); /*0x6c4dec*/
  if ( v8 < 0 ) /*0x6c4df0*/
    ((void (*)(int (***)(unsigned int, unsigned int *, unsigned int *), int))(*v7)[8])(v7, 1); /*0x6c4df8*/
  return v8; /*0x6c4d9a*/

}
} // namespace gamemd
// 0x6C4E10
namespace gamemd {
int TClassFactory_MechLocomotionClass::GetSize(void * a1, void * a2)
{

  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(unsigned int *)((unsigned int)(a2)+ 4); /*0x6c4e1a*/
  if ( v5 ) /*0x6c4e1d*/
    v3 = v2 + 1; /*0x6c4e1f*/
  else
    v3 = v2 - 1; /*0x6c4e28*/
  *(unsigned int *)((unsigned int)(a2)+ 4) = v3; /*0x6c4e20*/
  return 0; /*0x6c4e25*/

}
} // namespace gamemd