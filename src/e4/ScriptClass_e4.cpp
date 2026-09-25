// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ScriptClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x6915F0
namespace gamemd {
int ScriptClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x6915f6*/
    return -2147467261; /*0x6915f8*/
  *a2 = 1123264070; /*0x691606*/
  a2[1] = 298977161; /*0x69160e*/
  a2[2] = 1610655148; /*0x691617*/
  a2[3] = -1252326136; /*0x691620*/
  return 0; /*0x6915fd*/
}
} // namespace gamemd

// 0x691630
namespace gamemd {
int ScriptClass::LoadState(AbstractClass * aP0, int aP1)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(aP0, aP1); /*0x69163b*/
  if ( result >= 0 ) /*0x691642*/
  {
    if ( aP0 ) /*0x691646*/
    {
      AbstractClass::InitVtables(aP0, (int)&aP1); /*0x69164f*/
      *(void **)aP0 = (void*)&ScriptClass_vftable; /*0x691654*/
      aP0[1] = (void*)&ScriptClass_vftable; /*0x69165a*/
      aP0[2] = (void*)&ScriptClass_vftable; /*0x691661*/
      aP0[3] = (void*)&ScriptClass_vftable; /*0x691668*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0 + 9); /*0x691678*/
    return 0; /*0x69167d*/
  }
  return result; /*0x69167f*/
}
} // namespace gamemd

// 0x691690
namespace gamemd {
int ScriptClass::SaveState(TechnoTypeClass * aP0, int * a1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix(aP0, a1, aP2); /*0x69169f*/
  if ( result >= 0 ) /*0x6916a6*/
    return 0; /*0x6916a8*/
  return result; /*0x6916aa*/
}
} // namespace gamemd

// 0x691EC0
namespace gamemd {
int ScriptClass::StubReturn26()
{
  return 26; /*0x691ec5*/
}
} // namespace gamemd

// 0x691ED0
namespace gamemd {
int ScriptClass::StubReturn48()
{
  return 48; /*0x691ed5*/
}
} // namespace gamemd
