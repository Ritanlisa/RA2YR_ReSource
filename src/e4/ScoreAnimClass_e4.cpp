// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/ScoreAnimClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x691000
namespace gamemd {
unsigned int * ScoreAnimClass::Constructor_ScoreAnimClass_0(char a2)
{
  *(unsigned int *)this->__pad_0 = (void*)&ScoreAnimClass_vftable; /*0x691009*/
  if ( (a2 & 1) != 0 ) /*0x69100f*/
    RA2_OPDEL(); /*0x691012*/
  return this; /*0x69101c*/
}
} // namespace gamemd
// 0x691020
namespace gamemd {
unsigned int * ScoreAnimClass::Constructor_ScoreAnimClass_1(char a2)
{
  *(unsigned int *)&this->vtable1 = (int)&ScoreAnimClass_vftable; /*0x691029*/
  if ( (a2 & 1) != 0 ) /*0x69102f*/
    RA2_OPDEL(); /*0x691032*/
  return &this->vtable1; /*0x69103c*/
}
} // namespace gamemd
// 0x6910A0
namespace gamemd {
unsigned int * ScoreAnimClass::Constructor_ScoreFontClass(char a2)
{
  void *v3; // eax
  char *v4; // eax

  v3 = (void *)((unsigned int)((void *)this->field_C));
  *(unsigned int *)this->__pad_0 = (void*)&ScoreFontClass_vftable; /*0x6910a9*/
    if ( v3 && *((unsigned char *)Block + 16) == 1 )
  {
    RA2_OPDEL(v3); /*0x6910ba*/
        *(Block + 3) = 0;
        *((unsigned char *)Block + 16) = 0;
  }
  if ( !--dword_B0558C ) /*0x6910d3*/
  {
    v4 = (char *)&byte_B05594; /*0x6910d5*/
    do /*0x6910e7*/
    {
      *((unsigned int *)v4 - 1) = 0; /*0x6910da*/
      *v4 = 0; /*0x6910dd*/
      v4 += 8; /*0x6910df*/
    }
    while ( (int)v4 < (int)byte_B055AC ); /*0x6910e7*/
  }
  if ( (a2 & 1) != 0 ) /*0x6910ee*/
    RA2_OPDEL(); /*0x6910f1*/
  return this; /*0x6910fb*/
}
} // namespace gamemd