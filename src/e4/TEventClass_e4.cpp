// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/TEventClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/TActionClass_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/TClassFactory_MechLocomotionClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/TacticalClass_e4.hpp"
#include "e4/classes/TacticalMap_e4.hpp"
#include "e4/classes/TabClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/Color_e4.hpp"

// 0x71E940
namespace gamemd {
DynamicVector * TEventClass::Execute(int a2, int a3, int a4, int *a5, int a6, int a7)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x71E940)
}
}
// 0x71F390
namespace gamemd {
int TEventClass::PrepareSaveToINI(const char * a2)
{

  int TEventClass_field_2C; // edx
  int v3; // eax
  int TEventClass_field_30; // esi
  const CHAR *v6; // [esp-10h] [ebp-18h]
  int v7; // [esp-Ch] [ebp-14h]
  int v8; // [esp-8h] [ebp-10h]
  int TEventClass_field_34; // [esp-4h] [ebp-Ch]

  TEventClass_field_2C = this->TEventClass_field_2C; /*0x71f390*/
  switch ( TEventClass_field_2C ) /*0x71f3a8*/
  {
    case 1: /*0x71f3a8*/
    case 3: /*0x71f3a8*/
    case 5: /*0x71f3a8*/
    case 9: /*0x71f3a8*/
    case 10: /*0x71f3a8*/
    case 11: /*0x71f3a8*/
    case 24: /*0x71f3a8*/
    case 25: /*0x71f3a8*/
    case 26: /*0x71f3a8*/
    case 30: /*0x71f3a8*/
    case 44: /*0x71f3a8*/
    case 53: /*0x71f3a8*/
    case 55: /*0x71f3a8*/
    case 56: /*0x71f3a8*/
    case 58: /*0x71f3a8*/
    case 59: /*0x71f3a8*/
      v3 = 13; /*0x71f3af*/
      break; /*0x71f3b4*/
    case 12: /*0x71f3a8*/
    case 13: /*0x71f3a8*/
    case 15: /*0x71f3a8*/
    case 16: /*0x71f3a8*/
    case 45: /*0x71f3a8*/
    case 46: /*0x71f3a8*/
    case 47: /*0x71f3a8*/
    case 51: /*0x71f3a8*/
    case 52: /*0x71f3a8*/
      v3 = 10; /*0x71f3b6*/
      break; /*0x71f3bb*/
    case 19: /*0x71f3a8*/
    case 32: /*0x71f3a8*/
    case 57: /*0x71f3a8*/
      v3 = 8; /*0x71f3cb*/
      break; /*0x71f3d0*/
    case 20: /*0x71f3a8*/
      v3 = 6; /*0x71f3d2*/
      break; /*0x71f3d7*/
    case 21: /*0x71f3a8*/
    case 54: /*0x71f3a8*/
      v3 = 5; /*0x71f3d9*/
      break; /*0x71f3de*/
    case 22: /*0x71f3a8*/
      v3 = 7; /*0x71f3e0*/
      break; /*0x71f3e5*/
    case 23: /*0x71f3a8*/
      v3 = 12; /*0x71f3e7*/
      break; /*0x71f3ec*/
    case 27: /*0x71f3a8*/
    case 28: /*0x71f3a8*/
      v3 = 22; /*0x71f3bd*/
      break; /*0x71f3c2*/
    case 34: /*0x71f3a8*/
      v3 = 9; /*0x71f3ee*/
      break; /*0x71f3f3*/
    case 36: /*0x71f3a8*/
    case 37: /*0x71f3a8*/
      v3 = 29; /*0x71f3c4*/
      break; /*0x71f3c9*/
    case 60: /*0x71f3a8*/
    case 61: /*0x71f3a8*/
      v3 = 43; /*0x71f3f5*/
      break; /*0x71f3fa*/
    default:
      v3 = 0; /*0x71f3fc*/
      break; /*0x71f3fc*/
  }
  TEventClass_field_30 = this->TEventClass_field_30; /*0x71f3fe*/
  if ( TEventClass_field_30 ) /*0x71f403*/
  {
    TEventClass_field_34 = TEventClass_field_30 + 36; /*0x71f408*/
    v8 = 1; /*0x71f409*/
    v7 = this->TEventClass_field_2C; /*0x71f40b*/
    v6 = aDDS; /*0x71f40c*/
  }
  else
  {
    if ( v3 == 43 ) /*0x71f416*/
      return wsprintfA( /*0x71f443*/
               (LPSTR)&a2[strlen(a2)],
               aDDDS,
               TEventClass_field_2C,
               2,
               this->TEventClass_field_34,
               this->TEventClass_field_38);
    TEventClass_field_34 = this->TEventClass_field_34; /*0x71f446*/
    v8 = 0; /*0x71f447*/
    v7 = this->TEventClass_field_2C; /*0x71f449*/
    v6 = g_Str_Trace__d__d; /*0x71f44a*/
  }
  return wsprintfA((LPSTR)&a2[strlen(a2)], v6, v7, v8, TEventClass_field_34); /*0x71f441*/

}
}
// 0x71F800
namespace gamemd {
int TEventClass::CheckConditions(int a2, int a3)
{

  int result; // eax

  result = this->TEventClass_field_28; /*0x71f800*/
  if ( result == a2 ) /*0x71f809*/
  {
    result = *(unsigned int *)(result + 40); /*0x71f80b*/
    this->TEventClass_field_28 = result; /*0x71f80e*/
  }
  if ( this->TEventClass_field_30 == a2 ) /*0x71f814*/
    this->TEventClass_field_30 = 0; /*0x71f816*/
  return result; /*0x71f81d*/

}
}
// 0x71FA80
namespace gamemd {
void * TEventClass::Fire(void ** Block, char a2)
{

  int v3; // eax
  int v4; // eax
  int v5; // eax
  TEventClass *v7; // [esp+8h] [ebp-4h] BYREF

  Block->vtable1 = &vt_TEventClass; /*0x71fa86*/
  ((unsigned int *)Block)[0] = &vt_TEventClass; /*0x71fa8c*/
  ((unsigned int *)Block)[0] = &vt_TEventClass; /*0x71fa93*/
  ((unsigned int *)Block)[0] = &vt_TEventClass; /*0x71fa9a*/
  AbstractClass::AnnounceExpiredPointer(Block, 1); /*0x71faa1*/
  v7 = Block; /*0x71fab6*/
  v3 = (*(int (**)(int *, TEventClass **))(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[0] + 16))( /*0x71faba*/
         g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2,
         &v7);
  if ( v3 != -1 && v3 < g_BuildingLoadQueue_Array.GateCloseDelay[0] ) /*0x71faca*/
  {
    --g_BuildingLoadQueue_Array.GateCloseDelay[0]; /*0x71facf*/
    for ( ; /*0x71fad5*/
          v3 < g_BuildingLoadQueue_Array.GateCloseDelay[0];
          *(unsigned int *)(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[1] + 4 * v3 - 4) = *(unsigned int *)(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[1] + 4 * v3) )
    {
      ++v3; /*0x71fadd*/
    }
  }
  v7 = Block; /*0x71faff*/
  v4 = (*(int (**)(int *, TEventClass **))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x71fb03*/
         &g_BuildingLoadQueue_Array.LightVisibility,
         &v7);
  if ( v4 != -1 && v4 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x71fb13*/
  {
    --g_BuildingLoadQueue_Array.LightBlueTint; /*0x71fb18*/
    for ( ; /*0x71fb1e*/
          v4 < g_BuildingLoadQueue_Array.LightBlueTint;
          *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v4 - 4) = *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                         + 4 * v4) )
    {
      ++v4; /*0x71fb26*/
    }
  }
  v7 = Block; /*0x71fb48*/
  v5 = (*(int (**)(int *, TEventClass **))(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 50)) + 16))( /*0x71fb4c*/
         &(unsigned int *)((char *)&g_BuildingLoadQueue_Array + 50),
         &v7);
  if ( v5 != -1 && v5 < *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 54)) ) /*0x71fb5c*/
  {
    --((unsigned int *)&g_BuildingLoadQueue_Array)[54]; /*0x71fb61*/
    for ( ; /*0x71fb67*/
          v5 < *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 54));
          *(unsigned int *)(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 51)) + 4 * v5 - 4) = *(unsigned int *)(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 51))
                                                                                + 4 * v5) )
    {
      ++v5; /*0x71fb6f*/
    }
  }
  ((AbstractClass*)((AbstractClass *)Block))->DTOR(); /*0x71fb83*/
  if ( (a2 & 1) != 0 ) /*0x71fb8d*/
    __3_YAXPAX_Z(Block); /*0x71fb90*/
  return Block; /*0x71fb9a*/

}
}
// 0x71F820
namespace gamemd {
int TEventClass::ProcessEvent(int a2)
{

  int TEventClass_field_28; // eax
  int v4; // eax
  int TEventClass_field_30; // eax
  int v6; // eax

  AbstractClass::ProcessPower((AbstractClass *)this); /*0x71f829*/
  TEventClass_field_28 = this->TEventClass_field_28; /*0x71f82e*/
  if ( TEventClass_field_28 ) /*0x71f833*/
  {
    v4 = (*(int (**)(int))(*(unsigned int *)(TEventClass_field_28 + 4) + 16))(TEventClass_field_28 + 4); /*0x71f83c*/
    Power::TimerProcess(v4); /*0x71f842*/
  }
  Power::TimerProcess(this->TEventClass_field_2C); /*0x71f84d*/
  TEventClass_field_30 = this->TEventClass_field_30; /*0x71f852*/
  if ( TEventClass_field_30 ) /*0x71f857*/
  {
    v6 = (*(int (**)(int))(*(unsigned int *)(TEventClass_field_30 + 4) + 16))(TEventClass_field_30 + 4); /*0x71f860*/
    Power::TimerProcess(v6); /*0x71f866*/
  }
  return Power::TimerProcess(this->TEventClass_field_34); /*0x71f876*/

}
} // namespace gamemd

// 0x71F880
namespace gamemd {
int TEventClass::ddtor(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x71f886*/
    return -2147467261; /*0x71f888*/
  *a2 = 1326367635; /*0x71f896*/
  a2[1] = 298977877; /*0x71f89e*/
  a2[2] = 1610655660; /*0x71f8a7*/
  a2[3] = unk_7E981C; /*0x71f8b0*/
  return 0; /*0x71f88d*/

}
} // namespace gamemd

// 0x71F8C0
namespace gamemd {
int TEventClass::SaveLoad_Prefix(AbstractClass * aP0, int aP1)
{

  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(aP0, aP1); /*0x71f8cb*/
  if ( result >= 0 ) /*0x71f8d2*/
  {
    if ( aP0 ) /*0x71f8d6*/
    {
      AbstractClass::InitVtables((AbstractClass *)aP0, (int)&aP1); /*0x71f8df*/
      aP0->vtable1 = &vt_TEventClass; /*0x71f8e4*/
      ((unsigned int *)aP0)[0] = &vt_TEventClass; /*0x71f8ea*/
      ((unsigned int *)aP0)[0] = &vt_TEventClass; /*0x71f8f1*/
      ((unsigned int *)aP0)[0] = &vt_TEventClass; /*0x71f8f8*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->TEventClass_field_28); /*0x71f908*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->TEventClass_field_30); /*0x71f916*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->TEventClass_field_54); /*0x71f924*/
    return 0; /*0x71f929*/
  }
  return result; /*0x71f92b*/

}
} // namespace gamemd

// 0x71F930
namespace gamemd {
int TEventClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2)
{

  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((int *)aP0, a1, aP2); /*0x71f93f*/
  if ( result >= 0 ) /*0x71f946*/
    return 0; /*0x71f948*/
  return result; /*0x71f94a*/

}
} // namespace gamemd

// 0x71FA50
namespace gamemd {
int TEventClass::StubReturn88()
{

  return 88; /*0x71fa55*/

}
} // namespace gamemd

// 0x71FA60
namespace gamemd {
int TEventClass::StubReturn48()
{

  return 48; /*0x71fa65*/

}
} // namespace gamemd

// 0x71FA70
namespace gamemd {
int TEventClass::Stub()
{

  return this->eventType; /*0x71fa73*/

}
} // namespace gamemd
