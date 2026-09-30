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
  void * v3;
  unsigned int *Font; // eax
v3 = (void *)((unsigned int)((tagRECT *)((unsigned int)((struct tagRECT *)(&this->m_CharWidth8)))));
  *(unsigned int *)this = (void*)&BitFont_vftable; /*0x433895*/
    *((unsigned int *)this + 16) = 0;
    *((unsigned short *)this + 144) = 0x7FFF;
    *((unsigned short *)this + 152) = 13653;
    *((unsigned int *)this + 160) = 64;
    *((unsigned char *)this + 256) = 1;
    *((unsigned char *)this + 260) = 1;
    *((unsigned int *)this + 96) = 1;
    *((unsigned int *)this + 112) = 1;
    *((unsigned int *)this + 128) = 0;
    *((unsigned int *)this + 48) = 0;
    *((unsigned int *)this + 32) = 0;
  SetRect((LPRECT)(&this->m_CharWidth8), 0, 0, 0, 0); /*0x4338c6*/
    *((unsigned int *)this + 176) = 1;
  Font = File::LoadFont(Source); /*0x4338d3*/
    *((unsigned int *)this + 16) = Font;
  if ( Font ) /*0x4338dd*/
  {
        *((unsigned int *)this + 96) = Font[1];
        *((unsigned int *)this + 112) = Font[3];
    sub_434700(); /*0x4338ed*/
  }
  else
  {
        *((unsigned int *)this + 16) = 0;
        *((unsigned short *)this + 144) = 0x7FFF;
        *((unsigned short *)this + 152) = 13653;
        *((unsigned int *)this + 160) = 64;
        *((unsigned char *)this + 256) = 1;
        *((unsigned char *)this + 260) = 1;
        *((unsigned int *)this + 96) = 1;
        *((unsigned int *)this + 112) = 1;
        *((unsigned int *)this + 128) = 0;
        *((unsigned int *)this + 48) = 0;
        *((unsigned int *)this + 32) = 0;
    SetRect(v3, 0, 0, 0, 0); /*0x43392b*/
        *((unsigned int *)this + 176) = 1;
  }
  return (int)(this);
}
} // namespace gamemd
// 0x434AD0
namespace gamemd {
void BitTextClass::LoadFont()
{
  void * v2;

  this->m_FontBitmap = (int)((void*)&BitText_vftable);
  v2 = RA2_OPNEW(0x44u); /*0x434adb*/
  if ( v2 ) /*0x434ae5*/
  {
    g_FogOfWarState = (int)((Text *)BitTextClass::ParseFontData(v2, aGameFnt));
    return &this->m_FontBitmap; /*0x434af8*/
  }
  else
  {
    g_FogOfWarState = 0; /*0x434afe*/
    return &this->m_FontBitmap; /*0x434afc*/
  }
}
} // namespace gamemd