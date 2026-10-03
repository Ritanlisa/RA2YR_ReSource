// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/TagTypeClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/TagClass_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/TaskForceClass_e4.hpp"
#include "e4/classes/TriggerClass_e4.hpp"
#include "e4/classes/Factory_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/TriggerTypeClass_e4.hpp"

// 0x6E5B60
namespace gamemd {
AbstractTypeClass * TagTypeClass::Construct(char *aP1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E5B60)
}
}
// 0x6E5CA0
namespace gamemd {
AbstractClass * * TagTypeClass::CleanupMembers(void *a1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E5CA0)
}
}
// 0x6E5E50
namespace gamemd {
int TagTypeClass::GetEvent(int a2, int a3)
{

  int result; // eax

  result = *((unsigned int *)this + 40); /*0x6e5e50*/
  if ( result == a2 ) /*0x6e5e5c*/
  {
    result = *(unsigned int *)(result + 168); /*0x6e5e5e*/
    *((unsigned int *)this + 40) = result; /*0x6e5e64*/
  }
  return result; /*0x6e5e6a*/

}
}
// 0x6E6080
namespace gamemd {
void* TagTypeClass::GetAction(unsigned char *** a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E6080)
}
}
// 0x6E6160
namespace gamemd {
int TagTypeClass::GetParameter(char * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E6160)
}
}
// 0x6E6310
namespace gamemd {
AbstractTypeClass * TagTypeClass::FindOrCreate(ObjectClass * Source)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E6310)
}
}
// 0x6E63E0
namespace gamemd {
int TagTypeClass::PowerDrainUpdate(int * a2)
{

  ((AbstractTypeClass *)((AbstractTypeClass *)this))->ProcessPower(a2); /*0x6e63e9*/
  return Power::TimerProcess(*((unsigned int *)this + 39)); /*0x6e63fc*/

}
}
// 0x6E64B0
namespace gamemd {
int TagTypeClass::GetAuxField()
{

  return *((unsigned int *)this + 38); /*0x6e64b6*/

}
}
// 0x727AA0
namespace gamemd {
TriggerTypeClass * * TagTypeClass::FindOrCreateTriggerType(char *Source)
{

  int v2; // esi
  TriggerTypeClass *v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x727abc*/
    return 0; /*0x727b1f*/
  v2 = 0; /*0x727acd*/
  if ( *(int *)((char *)&FootClass_Array) <= 0 ) /*0x727ad1*/
  {
LABEL_6:
    v3 = (TriggerTypeClass *)__2_YAPAXI_Z(0xB4u); /*0x727af6*/
    if ( v3 ) /*0x727b05*/
      return (gamemd::TriggerTypeClass **)(((TriggerTypeClass *)(v3))->Construct(Source)); /*0x727b11*/
    return 0; /*0x727b05*/
  }
  while ( _strcmpi((char *)(*(unsigned int *)(*((unsigned int *)((char *)&FootClass_Array + 0)) + 4 * v2) + 36), Source) ) /*0x727aea*/
  {
    if ( ++v2 >= *(int *)((char *)&FootClass_Array) ) /*0x727af4*/
      goto LABEL_6; /*0x727af4*/
  }
  return (gamemd::TriggerTypeClass **)(*(unsigned int **)(*((unsigned int *)((char *)&FootClass_Array + 0)) + 4 * v2)); /*0x727b0f*/

}
}
// 0x6E63A0
namespace gamemd {
int TagTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x6e63a6*/
    return -2147467261; /*0x6e63a8*/
  *a2 = 1425466419; /*0x6e63b6*/
  a2[1] = 298977773; /*0x6e63be*/
  a2[2] = 1610655148; /*0x6e63c7*/
  a2[3] = unk_7E97DC; /*0x6e63d0*/
  return 0; /*0x6e63ad*/

}
} // namespace gamemd

// 0x6E6410
namespace gamemd {
int TagTypeClass::LoadTypeData(AbstractTypeClass * aP0, int aP1)
{

  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0((gamemd::AbstractClass *)(aP0),(gamemd::AbstractClass *)(aP1)); /*0x6e641b*/
  if ( result >= 0 ) /*0x6e6422*/
  {
    if ( aP0 ) /*0x6e6426*/
    {
      ((AbstractTypeClass*)((int)aP0))->Init((int)&aP1); /*0x6e642f*/
      aP0->vtable1 = &vt_TagTypeClass; /*0x6e6434*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&vt_TagTypeClass); /*0x6e643a*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&vt_TagTypeClass); /*0x6e6441*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&vt_TagTypeClass); /*0x6e6448*/
    }
    ObjectPtr_RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)aP0 + 40); /*0x6e645b*/
    return 0; /*0x6e6460*/
  }
  return result; /*0x6e6462*/

}
} // namespace gamemd

// 0x6E6470
namespace gamemd {
int TagTypeClass::SaveToINI(TechnoTypeClass * aP0, int * a1, int aP2)
{

  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((gamemd::ObjectTypeClass *)((int *)aP0),(gamemd::ObjectTypeClass *)(a1),(gamemd::ObjectTypeClass *)(aP2)); /*0x6e647f*/
  if ( result >= 0 ) /*0x6e6486*/
    return 0; /*0x6e6488*/
  return result; /*0x6e648a*/

}
} // namespace gamemd

// 0x6E6490
namespace gamemd {
int TagTypeClass::GetTypeIdentifier()
{

  return 45; /*0x6e6495*/

}
} // namespace gamemd

// 0x6E64A0
namespace gamemd {
int TagTypeClass::GetObjectSize()
{

  return 164; /*0x6e64a5*/

}
} // namespace gamemd

// 0x6E64C0
namespace gamemd {
TagTypeClass * TagTypeClass::ddtor(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E64C0)
}
} // namespace gamemd
