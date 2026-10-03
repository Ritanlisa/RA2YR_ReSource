// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/TriggerClass_e4.hpp"
#include "e4/classes/Buffer_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/TEventClass_e4.hpp"
#include "e4/classes/Trigger_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/TacticalClass_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/UnitClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/Session_e4.hpp"
#include "e4/classes/ObjectPtr_e4.hpp"
#include "e4/classes/TriggerTypeClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"

// 0x610950
namespace gamemd {
char TriggerClass::FindByEventType(char a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x610950)
}
}
// 0x71FA30
namespace gamemd {
int TriggerClass::GetValue()
{

  return *((unsigned int *)this + 21); /*0x71fa33*/

}
}
// 0x7264C0
namespace gamemd {
int TriggerClass::RegisterEvent(int a2, int a3, char a4, char a5, int a6, int aP1, int aP2, int a1, int aP0)
{

  char v7; // bl
  TriggerClass *v8; // edi
  int Owner; // eax
  int v11; // [esp-10h] [ebp-18h]
  char v12; // [esp+7h] [ebp-1h]

  if ( !*((unsigned char *)this + 68) || *((unsigned char *)this + 48) ) /*0x7264cf*/
    return 0; /*0x7265b4*/
  v12 = 1; /*0x7264e2*/
  if ( a4 ) /*0x7264e7*/
    goto LABEL_16; /*0x7264e7*/
  v7 = 0; /*0x7264f0*/
  v8 = *(TriggerClass **)(*((unsigned int *)this + 9) + 172); /*0x7264f2*/
  if ( !v8 ) /*0x7264fa*/
    goto LABEL_16; /*0x7264fa*/
  do /*0x72658b*/
  {
    if ( (*((unsigned int *)this + 16) & (1 << v7)) != 0 /*0x726540*/
      || (v11 = a6,
          Owner = ((HouseClass *)(*(HouseClass **)(*(unsigned int *)(*((unsigned int *)this + 9) + 164) + 180)))->FindOwner(),
          ((TEventClass *)((TEventClass *)v8))->Execute((int)(aP1), Owner,(int)(aP2), (int *)((char *)this + 52), (int)&a5, v11)) )
    {
      if ( ((TriggerClass*)v8)->GetValue() ) /*0x726551*/
        *((unsigned int *)this + 11) = (unsigned int)(((TriggerClass*)v8)->GetValue()); /*0x726561*/
      if ( a5 && TEventClass::GetStateA((TEventClass *)v8) && TEventClass::GetStateB_SpyEvent((TEventClass *)v8) ) /*0x726579*/
        *((unsigned int *)this + 16) |= 1 << v7; /*0x726582*/
    }
    else
    {
      v12 = 0; /*0x726549*/
    }
    v8 = v8->nextTrigger; /*0x726585*/
    ++v7; /*0x726588*/
  }
  while ( v8 ); /*0x72658b*/
  if ( v12 ) /*0x726598*/
  {
LABEL_16:
    if ( a5 ) /*0x7265a0*/
      ((BuildingClass *)((BuildingClass *)this))->ProcessUpgradeEffects(); /*0x7265a4*/
  }
  return v12; /*0x7265af*/

}
}
// 0x726820
namespace gamemd {
int TriggerClass::ddtor(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x726826*/
    return -2147467261; /*0x726828*/
  *a2 = -1070787184; /*0x726836*/
  a2[1] = 298977834; /*0x72683e*/
  a2[2] = 1610655660; /*0x726847*/
  a2[3] = unk_7E97EC; /*0x726850*/
  return 0; /*0x72682d*/

}
} // namespace gamemd

// 0x726860
namespace gamemd {
int TriggerClass::LoadTrigger(AbstractClass * aP0, int aP1)
{

  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(aP0,(gamemd::AbstractClass *)(aP1)); /*0x72686b*/
  if ( result >= 0 ) /*0x726872*/
  {
    if ( aP0 ) /*0x726876*/
    {
      AbstractClass::InitVtables((AbstractClass *)aP0, (int)&aP1); /*0x72687f*/
      aP0->vtable1 = &vt_TriggerClass; /*0x726884*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&vt_TriggerClass); /*0x72688a*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&vt_TriggerClass); /*0x726891*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&vt_TriggerClass); /*0x726898*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->buildingType); /*0x7268a8*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->nextTrigger); /*0x7268b6*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->house); /*0x7268c4*/
    return 0; /*0x7268c9*/
  }
  return result; /*0x7268cb*/

}
} // namespace gamemd

// 0x7268D0
namespace gamemd {
int TriggerClass::SaveTrigger(TechnoTypeClass * aP0, int * a1, int aP2)
{

  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((gamemd::ObjectTypeClass *)((int *)aP0),(gamemd::ObjectTypeClass *)(a1),(gamemd::ObjectTypeClass *)(aP2)); /*0x7268df*/
  if ( result >= 0 ) /*0x7268e6*/
    return 0; /*0x7268e8*/
  return result; /*0x7268ea*/

}
} // namespace gamemd

// 0x726930
namespace gamemd {
int TriggerClass::StubReturn72()
{

  return 72; /*0x726935*/

}
} // namespace gamemd

// 0x726940
namespace gamemd {
int TriggerClass::StubReturn38()
{

  return 38; /*0x726945*/

}
} // namespace gamemd
