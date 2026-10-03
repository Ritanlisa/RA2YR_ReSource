// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/ScriptTypeClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/TaskForceClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ScrollClass_e4.hpp"
#include "e4/classes/ScriptClass_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"

// 0x691D50
namespace gamemd {
int ScriptTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x691d56*/
    return -2147467261; /*0x691d58*/
  *a2 = 1123264071; /*0x691d66*/
  a2[1] = 298977161; /*0x691d6e*/
  a2[2] = 1610655148; /*0x691d77*/
  a2[3] = unk_7E97BC; /*0x691d80*/
  return 0; /*0x691d5d*/

}
} // namespace gamemd

// 0x691D90
namespace gamemd {
int ScriptTypeClass::LoadTypeData(AbstractTypeClass * aP0, int aP1)
{

  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0((gamemd::AbstractClass *)(aP0),(gamemd::AbstractClass *)(aP1)); /*0x691d9b*/
  if ( result >= 0 ) /*0x691da2*/
  {
    if ( aP0 ) /*0x691da6*/
    {
      ((AbstractTypeClass*)(int)aP0)->Init((int)&aP1); /*0x691daf*/
      aP0->vtable1 = &vt_ScriptTypeClass; /*0x691db4*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&vt_ScriptTypeClass); /*0x691dba*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&vt_ScriptTypeClass); /*0x691dc1*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&vt_ScriptTypeClass); /*0x691dc8*/
    }
    return 0; /*0x691dcf*/
  }
  return result; /*0x691dd1*/

}
} // namespace gamemd

// 0x691DE0
namespace gamemd {
int ScriptTypeClass::SaveToINI(TechnoTypeClass * aP0, int * a1, int aP2)
{

  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((gamemd::ObjectTypeClass *)((int *)aP0),(gamemd::ObjectTypeClass *)(a1),(gamemd::ObjectTypeClass *)(aP2)); /*0x691def*/
  if ( result >= 0 ) /*0x691df6*/
    return 0; /*0x691df8*/
  return result; /*0x691dfa*/

}
} // namespace gamemd

// 0x691F70
namespace gamemd {
int ScriptTypeClass::GetTypeIdentifier()
{

  return 27; /*0x691f75*/

}
} // namespace gamemd

// 0x691F80
namespace gamemd {
int ScriptTypeClass::GetObjectSize()
{

  return 564; /*0x691f85*/

}
} // namespace gamemd

// 0x691FA0
namespace gamemd {
ScriptTypeClass * ScriptTypeClass::ddtor(char a2, int a1, int a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x691FA0)
}
} // namespace gamemd

// 0x6E8340
namespace gamemd {
TaskForceClass * ScriptTypeClass::ReadINI(char * a1, int a2, void *a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E8340)
}
} // namespace gamemd
