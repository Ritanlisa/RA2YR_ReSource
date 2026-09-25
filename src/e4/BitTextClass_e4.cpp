// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/File_e4.hpp"
#include "e4/classes/BitTextClass_e4.hpp"
#include "e4/classes/Font_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x433880
namespace gamemd {
int BitTextClass::ParseFontData(char * Source)
{
  struct tagRECT *v3; // ebp
  _DWORD *Font; // eax

  v3 = (struct tagRECT *)(&this->u32_108); /*0x43388a*/
  *(void **)this = (void*)&BitFont_vftable; /*0x433895*/
  this->m_CharWidth = 0; /*0x43389b*/
  this->u16_24 = 0x7FFF; /*0x43389e*/
  this->u16_26 = 13653; /*0x4338a4*/
  this->u32_28 = 64; /*0x4338aa*/
  this->q040 = 1; /*0x4338b1*/
  this->u8_41 = 1; /*0x4338b4*/
  this->q018 = 1; /*0x4338b7*/
  this->u32_1C = 1; /*0x4338ba*/
  this->q020 = 0; /*0x4338bd*/
  this->u32_C = 0; /*0x4338c0*/
  this->ptr_8 = 0; /*0x4338c3*/
  SetRect((LPRECT)(&this->u32_108), 0, 0, 0, 0); /*0x4338c6*/
  this->u32_2C = 1; /*0x4338d0*/
  Font = File::LoadFont(Source); /*0x4338d3*/
  this->m_CharWidth = Font; /*0x4338da*/
  if ( Font ) /*0x4338dd*/
  {
    this->q018 = Font[1]; /*0x4338e2*/
    this->u32_1C = Font[3]; /*0x4338ea*/
    sub_434700(); /*0x4338ed*/
  }
  else
  {
    this->m_CharWidth = 0; /*0x433900*/
    this->u16_24 = 0x7FFF; /*0x433903*/
    this->u16_26 = 13653; /*0x433909*/
    this->u32_28 = 64; /*0x43390f*/
    this->q040 = 1; /*0x433916*/
    this->u8_41 = 1; /*0x433919*/
    this->q018 = 1; /*0x43391c*/
    this->u32_1C = 1; /*0x43391f*/
    this->q020 = 0; /*0x433922*/
    this->u32_C = 0; /*0x433925*/
    this->ptr_8 = 0; /*0x433928*/
    SetRect(v3, 0, 0, 0, 0); /*0x43392b*/
    this->u32_2C = 1; /*0x433931*/
  }
  return this; /*0x4338f4*/
}
} // namespace gamemd
// 0x434AD0
namespace gamemd {
unsigned int * BitTextClass::LoadFont()
{
  *(void **)this = (void*)&BitText_vftable; /*0x434ad5*/
  if ( RA2_OPNEW(0x44u) ) /*0x434adb*/
  {
    g_FogOfWarState = BitTextClass::ParseFontData(aGameFnt); /*0x434af3*/
    return this; /*0x434af8*/
  }
  else
  {
    g_FogOfWarState = 0; /*0x434afe*/
    return this; /*0x434afc*/
  }
}
} // namespace gamemd