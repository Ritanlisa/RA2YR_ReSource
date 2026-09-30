// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/File_e4.hpp"
#include "e4/classes/BitTextClass_e4.hpp"
#include "e4/classes/Font_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/BinkMovie_e4.hpp"
#include "e4/classes/DSurface_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/Timer_e4.hpp"

// 0x433880
namespace gamemd {
int BitTextClass::ParseFontData(char * Source)
{

  struct tagRECT *v3; // ebp
  unsigned int *Font; // eax

  v3 = (tagRECT *)((unsigned int)((struct tagRECT *)((char *)this + 48)));
  *(unsigned int *)this = &vt_BitFont; /*0x433895*/
  *((unsigned int *)this + 1) = 0; /*0x43389b*/
  *((unsigned short *)this + 18) = 0x7FFF; /*0x43389e*/
  *((unsigned short *)this + 19) = 13653; /*0x4338a4*/
  *((unsigned int *)this + 10) = 64; /*0x4338aa*/
  *((unsigned char *)this + 64) = 1; /*0x4338b1*/
  *((unsigned char *)this + 65) = 1; /*0x4338b4*/
  *((unsigned int *)this + 6) = 1; /*0x4338b7*/
  *((unsigned int *)this + 7) = 1; /*0x4338ba*/
  *((unsigned int *)this + 8) = 0; /*0x4338bd*/
  *((unsigned int *)this + 3) = 0; /*0x4338c0*/
  *((unsigned int *)this + 2) = 0; /*0x4338c3*/
  SetRect((LPRECT)((char *)this + 48), 0, 0, 0, 0); /*0x4338c6*/
  *((unsigned int *)this + 11) = 1; /*0x4338d0*/
  Font = ((File *)(Source))->LoadFont(); /*0x4338d3*/
  *((unsigned int *)this + 1) = Font; /*0x4338da*/
  if ( Font ) /*0x4338dd*/
  {
    *((unsigned int *)this + 6) = Font[1]; /*0x4338e2*/
    *((unsigned int *)this + 7) = Font[3]; /*0x4338ea*/
    sub_434700((unsigned int *)this); /*0x4338ed*/
  }
  else
  {
    *((unsigned int *)this + 1) = 0; /*0x433900*/
    *((unsigned short *)this + 18) = 0x7FFF; /*0x433903*/
    *((unsigned short *)this + 19) = 13653; /*0x433909*/
    *((unsigned int *)this + 10) = 64; /*0x43390f*/
    *((unsigned char *)this + 64) = 1; /*0x433916*/
    *((unsigned char *)this + 65) = 1; /*0x433919*/
    *((unsigned int *)this + 6) = 1; /*0x43391c*/
    *((unsigned int *)this + 7) = 1; /*0x43391f*/
    *((unsigned int *)this + 8) = 0; /*0x433922*/
    *((unsigned int *)this + 3) = 0; /*0x433925*/
    *((unsigned int *)this + 2) = 0; /*0x433928*/
    SetRect(v3, 0, 0, 0, 0); /*0x43392b*/
    *((unsigned int *)this + 11) = 1; /*0x433931*/
  }
  return (int)(this);

}
} // namespace gamemd
// 0x434AD0
namespace gamemd {
void BitTextClass::LoadFont()
{

  void * v2;

  *(unsigned int *)this = (int)(&vt_BitText);
  v2 = RA2_OPNEW(68); /*0x434adb*/
  if ( v2 ) /*0x434ae5*/
  {
    g_abs_87F7E8[29498] = BitTextClass::ParseFontData(v2, aGameFnt); /*0x434af3*/
    return this; /*0x434af8*/
  }
  else
  {
    g_abs_87F7E8[29498] = 0; /*0x434afe*/
    return this; /*0x434afc*/
  }

}
} // namespace gamemd