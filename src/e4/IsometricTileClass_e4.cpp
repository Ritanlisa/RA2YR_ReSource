// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x543780
I * IsometricTileClass::IsometricTileClass(IsometricTileClass * aP1, IsometricTileClass * aP2)
{
  int v4; // eax

  ObjectClass::ctor(this); /*0x543786*/
  *((_DWORD *)this + 43) = *((_DWORD *)g_FrameCounter + aP1); /*0x54379c*/
  *(_DWORD *)this->gap0 = &IsometricTileClass::`vftable'; /*0x5437a2*/
  *(_DWORD *)&this->gap0[4] = &IsometricTileClass::`vftable'; /*0x5437a8*/
  *(_DWORD *)&this->gap0[8] = &IsometricTileClass::`vftable'; /*0x5437af*/
  *(_DWORD *)&this->gap0[12] = &IsometricTileClass::`vftable'; /*0x5437b6*/
  if ( *aP2 != word_AA06D0 || aP2[1] != word_AA06D2 ) /*0x5437d4*/
  {
    this->gap0[129] = 0; /*0x543805*/
    ObjectClass::SetPosition((#374 *)this); /*0x54380c*/
    (*(void (__thiscall **)(IsometricTileClass *, int))(*(_DWORD *)this->gap0 + 292))(this, 1); /*0x543818*/
  }
  if ( dword_87F760 < dword_87F758 /*0x543855*/
    || (byte_87F75D || !dword_87F758)
    && dword_87F764 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_87F750 + 8))(
         &dword_87F750,
         dword_87F758 + dword_87F764,
         0) )
  {
    v4 = dword_87F760++; /*0x543862*/
    *((_DWORD *)dword_87F754 + v4) = this; /*0x543871*/
  }
  return this; /*0x543876*/
}