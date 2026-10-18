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
// [w16g4] C3861 supply (raw call-form evidence)
namespace gamemd { int sub_434700(int p0); }  // x4:signals@0x434700

// 0x433880
namespace gamemd {  // G42.18 ns repair
int BitTextClass::ParseFontData(char * Source, void *a2)
{
  
  
  struct tagRECT *v3; // ebp
  v3 = (struct tagRECT *)(a2 + 48); /*0x43388a*/
  /* X11: vtable install elided (X67 star-deref, RHS vt_BitFont) */  /*0x433895*/
  *(unsigned int *)(a2 + 4) = 0; /*0x43389b*/
  *(unsigned short *)(a2 + 36) = 0x7FFF; /*0x43389e*/
  *(unsigned short *)(a2 + 38) = 13653; /*0x4338a4*/
  *(unsigned int *)(a2 + 40) = 64; /*0x4338aa*/
  *(unsigned char *)(a2 + 64) = 1; /*0x4338b1*/
  *(unsigned char *)(a2 + 65) = 1; /*0x4338b4*/
  *(unsigned int *)(a2 + 24) = 1; /*0x4338b7*/
  *(unsigned int *)(a2 + 28) = 1; /*0x4338ba*/
  *(unsigned int *)(a2 + 32) = 0; /*0x4338bd*/
  *(unsigned int *)(a2 + 12) = 0; /*0x4338c0*/
  *(unsigned int *)(a2 + 8) = 0; /*0x4338c3*/
  SetRect((LPRECT)(a2 + 48), 0, 0, 0, 0); /*0x4338c6*/
  *(unsigned int *)(a2 + 44) = 1; /*0x4338d0*/
  unsigned int *Font; // eax
  Font = (unsigned int *)(File::LoadFont(a2)); /*0x4338d3*/
  *(unsigned int *)(a2 + 4) = (unsigned int)(Font); /*0x4338da*/
  if ( Font ) /*0x4338dd*/
  {
    *(unsigned int *)(a2 + 24) = Font->vtable2; /*0x4338e2*/
    *(unsigned int *)(a2 + 28) = Font->vtable4; /*0x4338ea*/
    sub_434700((ObjectClass *)a2); /*0x4338ed*/
  }
  else
  {
    *(unsigned int *)(a2 + 4) = 0; /*0x433900*/
    *(unsigned short *)(a2 + 36) = 0x7FFF; /*0x433903*/
    *(unsigned short *)(a2 + 38) = 13653; /*0x433909*/
    *(unsigned int *)(a2 + 40) = 64; /*0x43390f*/
    *(unsigned char *)(a2 + 64) = 1; /*0x433916*/
    *(unsigned char *)(a2 + 65) = 1; /*0x433919*/
    *(unsigned int *)(a2 + 24) = 1; /*0x43391c*/
    *(unsigned int *)(a2 + 28) = 1; /*0x43391f*/
    *(unsigned int *)(a2 + 32) = 0; /*0x433922*/
    *(unsigned int *)(a2 + 12) = 0; /*0x433925*/
    *(unsigned int *)(a2 + 8) = 0; /*0x433928*/
    SetRect(v3, 0, 0, 0, 0); /*0x43392b*/
    *(unsigned int *)(a2 + 44) = 1; /*0x433931*/
  }
  return (int)(a2); /*0x4338f4*/
  
}
} // namespace gamemd
// 0x434AD0
namespace gamemd {
unsigned int * BitTextClass::LoadFont()
{
  
  /* X11: vtable install elided (X67 recv-slot, RHS vt_BitText) */  /*0x434ad5*/
  int v2; // eax
  v2 = (int)(operator new(0x44u)); /*0x434adb*/
  if ( v2 ) /*0x434ae5*/
  {
    g_FogOfWarState = (int)((Text *)BitTextClass::ParseFontData(v2, aGameFnt)); /*0x434af3*/
    return (unsigned int *)(&this->m_FontBitmap); /*0x434af8*/
  }
  else
  {
    g_FogOfWarState = 0; /*0x434afe*/
    return (unsigned int *)(&this->m_FontBitmap); /*0x434afc*/
  }
}
} // namespace gamemd