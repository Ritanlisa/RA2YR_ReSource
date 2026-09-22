// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x543780
I * IsometricTileClass::IsometricTileClass(IsometricTileClass * aP1, IsometricTileClass * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
        IsometricTileClass *this,
        IsometricTileClass *aP1,
        IsometricTileClass *aP2)
{

  ObjectClass::ctor(this); /*0x543786*/
  this->q02B = *(IsometricTileClass *)(*(_DWORD *)&HouseClass_Player[45024] + 4 * (_DWORD)aP1); /*0x54379c*/
  *this = (IsometricTileClass)&IsometricTileClass::`vftable'; /*0x5437a2*/
  this->vtable2 = &IsometricTileClass::`vftable'; /*0x5437a8*/
  this->vtable3 = &IsometricTileClass::`vftable'; /*0x5437af*/
  this->vtable4 = &vt_IsometricTileClass; /*0x5437b6*/
  if ( *(_WORD *)aP2->__tail_0 != unk_AA06D0 || *(_WORD *)&aP2->__tail_0[2] != unk_AA06D2 ) /*0x5437d4*/
  {
    this->q081 = 0; /*0x543805*/
    ObjectClass::SetPosition((#374 *)this); /*0x54380c*/
    (*(void (__thiscall **)(IsometricTileClass *, int))(this->q124)(this, 1); /*0x543818*/
  }
  if ( *(int *)&stru_87C374[13292] < *(int *)&stru_87C374[13284] /*0x543855*/
    || (stru_87C374[13289] || !*(_DWORD *)&stru_87C374[13284])
    && *(int *)&stru_87C374[13296] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_87C374[13276] + 8))(
         &stru_87C374[13276],
         *(_DWORD *)&stru_87C374[13284] + *(_DWORD *)&stru_87C374[13296],
         0) )
  {
    int v4 = (*(_DWORD *)&stru_87C374[13292])++; /*0x543862*/
    *(_DWORD *)(*(_DWORD *)&stru_87C374[13280] + 4 * v4) = this; /*0x543871*/
  }
  return this; /*0x543876*/
}
}
