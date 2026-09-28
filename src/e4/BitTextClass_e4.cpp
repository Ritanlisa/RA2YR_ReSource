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

// 0x433880
namespace gamemd {
int BitTextClass::ParseFontData(char * Source)
{
  struct tagRECT *v3; // ebp
  _DWORD *Font; // eax

  v3 = (struct tagRECT *)(&this->m_CharWidth8); /*0x43388a*/
  *(_DWORD *)this = &(void*)(void*)&BitFont_vftable; /*0x433895*/
  this->m_CharWidth = 0; /*0x43389b*/
  this->u32_24 = 0x7FFF; /*0x43389e*/
  this->u32_26 = 13653; /*0x4338a4*/
  this->u32_28 = 64; /*0x4338aa*/
  this->u32_40 = 1; /*0x4338b1*/
  this->u32_41 = 1; /*0x4338b4*/
  this->u32_18 = 1; /*0x4338b7*/
  this->u32_1C = 1; /*0x4338ba*/
  this->ptr_8 = 0; /*0x4338bd*/
  this->u32_C = 0; /*0x4338c0*/
  this->ptr_8 = 0; /*0x4338c3*/
  SetRect((LPRECT)(&this->m_CharWidth8), 0, 0, 0, 0); /*0x4338c6*/
  this->u32_2C = 1; /*0x4338d0*/
  Font = File::LoadFont(Source); /*0x4338d3*/
  this->m_CharWidth = Font; /*0x4338da*/
  if ( Font ) /*0x4338dd*/
  {
    this->u32_18 = Font[1]; /*0x4338e2*/
    this->u32_1C = Font[3]; /*0x4338ea*/
    sub_434700(); /*0x4338ed*/
  }
  else
  {
    this->m_CharWidth = 0; /*0x433900*/
    this->u32_24 = 0x7FFF; /*0x433903*/
    this->u32_26 = 13653; /*0x433909*/
    this->u32_28 = 64; /*0x43390f*/
    this->u32_40 = 1; /*0x433916*/
    this->u32_41 = 1; /*0x433919*/
    this->u32_18 = 1; /*0x43391c*/
    this->u32_1C = 1; /*0x43391f*/
    this->ptr_8 = 0; /*0x433922*/
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
  int v2; // eax

  this->m_FontBitmap = &(void*)(void*)&BitText_vftable; /*0x434ad5*/
  v2 = RA2_OPNEW(0x44u); /*0x434adb*/
  if ( v2 ) /*0x434ae5*/
  {
    g_FogOfWarState = (Text *)BitTextClass::ParseFontData(v2, aGameFnt); /*0x434af3*/
    return &this->m_FontBitmap; /*0x434af8*/
  }
  else
  {
    g_FogOfWarState = 0; /*0x434afe*/
    return &this->m_FontBitmap; /*0x434afc*/
  }
}
} // namespace gamemd