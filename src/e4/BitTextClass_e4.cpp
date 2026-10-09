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
namespace gamemd { int sub_434700(...); }  // w16g4 raw call-form

// 0x433880
namespace gamemd {
int BitTextClass::ParseFontData(char * Source, void *a2)
{
  struct tagRECT *v3; // ebp
  _DWORD *Font; // eax

  v3 = (struct tagRECT *)(a2 + 48); /*0x43388a*/
  *(_DWORD *)a2 = &(void*)(void*)&BitFont_vftable; /*0x433895*/
  *(_DWORD *)(a2 + 4) = 0; /*0x43389b*/
  *(_WORD *)(a2 + 36) = 0x7FFF; /*0x43389e*/
  *(_WORD *)(a2 + 38) = 13653; /*0x4338a4*/
  *(_DWORD *)(a2 + 40) = 64; /*0x4338aa*/
  *(_BYTE *)(a2 + 64) = 1; /*0x4338b1*/
  *(_BYTE *)(a2 + 65) = 1; /*0x4338b4*/
  *(_DWORD *)(a2 + 24) = 1; /*0x4338b7*/
  *(_DWORD *)(a2 + 28) = 1; /*0x4338ba*/
  *(_DWORD *)(a2 + 32) = 0; /*0x4338bd*/
  *(_DWORD *)(a2 + 12) = 0; /*0x4338c0*/
  *(_DWORD *)(a2 + 8) = 0; /*0x4338c3*/
  SetRect((LPRECT)(a2 + 48), 0, 0, 0, 0); /*0x4338c6*/
  *(_DWORD *)(a2 + 44) = 1; /*0x4338d0*/
  Font = File::LoadFont(a2); /*0x4338d3*/
  *(_DWORD *)(a2 + 4) = Font; /*0x4338da*/
  if ( Font ) /*0x4338dd*/
  {
    *(_DWORD *)(a2 + 24) = Font[1]; /*0x4338e2*/
    *(_DWORD *)(a2 + 28) = Font[3]; /*0x4338ea*/
    sub_434700((ObjectClass *)a2); /*0x4338ed*/
  }
  else
  {
    *(_DWORD *)(a2 + 4) = 0; /*0x433900*/
    *(_WORD *)(a2 + 36) = 0x7FFF; /*0x433903*/
    *(_WORD *)(a2 + 38) = 13653; /*0x433909*/
    *(_DWORD *)(a2 + 40) = 64; /*0x43390f*/
    *(_BYTE *)(a2 + 64) = 1; /*0x433916*/
    *(_BYTE *)(a2 + 65) = 1; /*0x433919*/
    *(_DWORD *)(a2 + 24) = 1; /*0x43391c*/
    *(_DWORD *)(a2 + 28) = 1; /*0x43391f*/
    *(_DWORD *)(a2 + 32) = 0; /*0x433922*/
    *(_DWORD *)(a2 + 12) = 0; /*0x433925*/
    *(_DWORD *)(a2 + 8) = 0; /*0x433928*/
    SetRect(v3, 0, 0, 0, 0); /*0x43392b*/
    *(_DWORD *)(a2 + 44) = 1; /*0x433931*/
  }
  return a2; /*0x4338f4*/
}
} // namespace gamemd
// 0x434AD0
namespace gamemd {
_DWORD * BitTextClass::LoadFont()
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