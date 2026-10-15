// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/RadarClass_e4.hpp"
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
namespace gamemd {  // G42.18 ns repair
int ScrollClass::Scroll(int * a1, MouseClass * aP2)
{
  TacticalClass::ProcessView(); /*0x6922e3*/
  return BlowStraw_29::Seek(a1,(unsigned int *)(aP2)); /*0x6922f9*/
}  // G42.18 ns repair
} // namespace gamemd
// 0x6938F0
namespace gamemd {
char * ScrollClass::Read(char * Block, char a2, void *a3)
{

  int *v3; // esi
  v3 = (int *)Block + 5371; /*0x6938f5*/
  int v4; // edi
  v4 = 4; /*0x6938fb*/
  do /*0x693916*/
  {
    v3 -= 997; /*0x693905*/
    Array::ForEachReverse(v3, 52, 75, (int (__thiscall *)(int))nullsub_56); /*0x693910*/
    --v4; /*0x693915*/
  }
  while ( v4 ); /*0x693916*/
  ((RadarClass *)Block)->Destruct(); /*0x69391a*/
  if ( (a2 & 1) != 0 ) /*0x693924*/
    operator delete((void *)(Block)); /*0x693927*/
  return (char *)Block; /*0x69392f*/
}
} // namespace gamemd