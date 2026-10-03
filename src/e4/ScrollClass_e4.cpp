// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/RadarClass_e4.hpp"
#include "e4/e4_globals.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/BlowStraw_29_e4.hpp"
#include "e4/classes/ScrollClass_e4.hpp"
#include "e4/classes/BlowStraw_29__e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/TacticalClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/ScriptTypeClass_e4.hpp"

// 0x6922E0
namespace gamemd {
int ScrollClass::Scroll(int * a1, MouseClass * aP2)
{

  TacticalClass::ProcessView((TacticalClass *)this); /*0x6922e3*/
  return ((BlowStraw_29 *)((TabClass *)this))->Seek(a1,(unsigned int *)(aP2)); /*0x6922f9*/

}
} // namespace gamemd
// 0x6938F0
namespace gamemd {
char * ScrollClass::Read(char * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6938F0)
}
} // namespace gamemd