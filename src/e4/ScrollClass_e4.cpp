// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
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

  TacticalClass::ProcessView(this); /*0x6922e3*/
  return BlowStraw_29::Seek(this, a1, aP2); /*0x6922f9*/

}
} // namespace gamemd
// 0x6938F0
namespace gamemd {
void ScrollClass::Read(char * Block, char a2)
{

  char *v3; // esi
  int v4; // edi

  v3 = Block + 21484; /*0x6938f5*/
  v4 = 4; /*0x6938fb*/
  do /*0x693916*/
  {
    v3 -= 3988; /*0x693905*/
    Array::ForEachReverse((int)v3, 52, 75, (int (*)(int))nullsub_56); /*0x693910*/
    --v4; /*0x693915*/
  }
  while ( v4 ); /*0x693916*/
  RadarClass::Destruct(Block); /*0x69391a*/
  if ( (a2 & 1) != 0 ) /*0x693924*/
    RA2_OPDEL(Block); /*0x693927*/
  return (ScrollClass *)Block; /*0x69392f*/

}
} // namespace gamemd