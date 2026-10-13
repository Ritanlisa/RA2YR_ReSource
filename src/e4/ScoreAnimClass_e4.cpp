// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/ScoreAnimClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Movie_e4.hpp"
#include "e4/classes/ScreenCaptureCommandClass_e4.hpp"
#include "e4/classes/Block_e4.hpp"  // G42.36 C2027 supply

// 0x691000
namespace gamemd {  // G42.18 ns repair
unsigned int * ScoreAnimClass::Constructor_ScoreAnimClass_0(char a2)
{

  /* X11: vtable install elided (implicit via ScoreAnimClass virtuals 0x691009) */
  if ( (a2 & 1) != 0 ) /*0x69100f*/
    __3_YAXPAX_Z(this); /*0x691012*/
  return this->__pad_0; /*0x69101c*/

}
} // namespace gamemd
// 0x691020
namespace gamemd {
unsigned int * ScoreAnimClass::Constructor_ScoreAnimClass_1(char a2)
{
  /* X11: vtable install elided (implicit via ScoreAnimClass virtuals 0x691029) */
  if ( (a2 & 1) != 0 ) /*0x69102f*/
    operator delete((void *)(this)); /*0x691032*/
  return &this->vtable1; /*0x69103c*/
}
} // namespace gamemd
// 0x6910A0
namespace gamemd {
unsigned int * ScoreAnimClass::Constructor_ScoreFontClass(char a2)
{

  void *v3; // eax
  char *v4; // eax

  v3 = (void *)this->field_C; /*0x6910a6*/
  /* X11: vtable install elided (implicit via ScoreFontClass virtuals 0x6910a9) */
  if ( v3 && this->q010 == 1 ) /*0x6910b7*/
  {
    __3_YAXPAX_Z(v3); /*0x6910ba*/
    this->field_C = 0; /*0x6910c2*/
    this->q010 = 0; /*0x6910c5*/
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
    __3_YAXPAX_Z(this); /*0x6910f1*/
  return this->__pad_0; /*0x6910fb*/

}
} // namespace gamemd