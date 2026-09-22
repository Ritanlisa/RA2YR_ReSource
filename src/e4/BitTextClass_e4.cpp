// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/File_e4.hpp"

// 0x433880
int BitTextClass::ParseFontData(char * Source)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_433880(int this, char *Source)
{
  struct tagRECT *v3; // ebp
  _DWORD *Font; // eax

  v3 = (struct tagRECT *)(this + 48); /*0x43388a*/
  *(_DWORD *)this = &vt_BitFont; /*0x433895*/
  this->m_CharWidth = 0; /*0x43389b*/
  *(_WORD *)(this + 36) = 0x7FFF; /*0x43389e*/
  *(_WORD *)(this + 38) = 13653; /*0x4338a4*/
  *(_DWORD *)(this + 40) = 64; /*0x4338aa*/
  *(_BYTE *)(this + 64) = 1; /*0x4338b1*/
  *(_BYTE *)(this + 65) = 1; /*0x4338b4*/
  *(_DWORD *)(this + 24) = 1; /*0x4338b7*/
  *(_DWORD *)(this + 28) = 1; /*0x4338ba*/
  this->m_CharHeight = 0; /*0x4338bd*/
  this->BitTextClass_field_0C = 0; /*0x4338c0*/
  this->m_CharHeight = 0; /*0x4338c3*/
  SetRect((LPRECT)(this + 48), 0, 0, 0, 0); /*0x4338c6*/
  *(_DWORD *)(this + 44) = 1; /*0x4338d0*/
  Font = File::LoadFont(Source); /*0x4338d3*/
  this->m_CharWidth = Font; /*0x4338da*/
  if ( Font ) /*0x4338dd*/
  {
    *(_DWORD *)(this + 24) = Font[1]; /*0x4338e2*/
    *(_DWORD *)(this + 28) = Font[3]; /*0x4338ea*/
    sub_434700((_DWORD *)this); /*0x4338ed*/
  }
  else
  {
    this->m_CharWidth = 0; /*0x433900*/
    *(_WORD *)(this + 36) = 0x7FFF; /*0x433903*/
    *(_WORD *)(this + 38) = 13653; /*0x433909*/
    *(_DWORD *)(this + 40) = 64; /*0x43390f*/
    *(_BYTE *)(this + 64) = 1; /*0x433916*/
    *(_BYTE *)(this + 65) = 1; /*0x433919*/
    *(_DWORD *)(this + 24) = 1; /*0x43391c*/
    *(_DWORD *)(this + 28) = 1; /*0x43391f*/
    this->m_CharHeight = 0; /*0x433922*/
    this->BitTextClass_field_0C = 0; /*0x433925*/
    this->m_CharHeight = 0; /*0x433928*/
    SetRect(v3, 0, 0, 0, 0); /*0x43392b*/
    *(_DWORD *)(this + 44) = 1; /*0x433931*/
  }
  return this; /*0x4338f4*/
}
}

// 0x434AD0
unsigned int * BitTextClass::LoadFont()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_434AD0(_DWORD *this)
{
  *this = &vt_BitText; /*0x434ad5*/
  if ( __2_YAPAXI_Z(0x44u) ) /*0x434adb*/
  {
    aP0 = BitTextClass::ParseFontData(aGameFnt); /*0x434af3*/
    return this; /*0x434af8*/
  }
  else
  {
    aP0 = 0; /*0x434afe*/
    return this; /*0x434afc*/
  }
}
}
