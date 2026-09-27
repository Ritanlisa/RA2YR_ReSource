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

// 0x6922E0
namespace gamemd {
int ScrollClass::Scroll(int * a1, MouseClass * aP2)
{
  TacticalClass::ProcessView(); /*0x6922e3*/
  return BlowStraw_29_::Seek(a1, aP2); /*0x6922f9*/
}
} // namespace gamemd
// 0x6938F0
namespace gamemd {
ScrollClass * ScrollClass::Read(char a2)
{
  char *v3; // esi
  int v4; // edi

  v3 = (char *)(&this->u32_14FB0);
  v4 = 4; /*0x6938fb*/
  do /*0x693916*/
  {
    v3 -= 3988; /*0x693905*/
    Array::ForEachReverse((int)v3, 52, 75, (int (__thiscall *)(int))nullsub_56); /*0x693910*/
    --v4; /*0x693915*/
  }
  while ( v4 ); /*0x693916*/
  RadarClass::Destruct(); /*0x69391a*/
  if ( (a2 & 1) != 0 ) /*0x693924*/
    RA2_OPDEL(); /*0x693927*/
  return this; /*0x69392f*/
}
} // namespace gamemd