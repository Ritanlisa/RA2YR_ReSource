// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x512F20
char InfantryTypeVector::Add(InfantryTypeClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall InfantryTypeVector::Add(_DWORD *this, InfantryTypeClass *aP1)
{
  int v3; // ecx
  int v4; // eax
  int v6; // eax
  int v7; // edx

  v3 = *(this + 2); /*0x512f23*/
  if ( *(this + 4) >= v3 ) /*0x512f2b*/
  {
    if ( !*((_BYTE *)this + 13) && v3 ) /*0x512f36*/
      return 0; /*0x512f36*/
    v4 = *(this + 5); /*0x512f38*/
    if ( v4 <= 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, v3 + v4, 0) ) /*0x512f48*/
      return 0; /*0x512f4f*/
  }
  v6 = *(this + 4); /*0x512f55*/
  v7 = *(this + 1); /*0x512f58*/
  *(this + 4) = v6 + 1; /*0x512f5e*/
  *(_DWORD *)(v7 + 4 * v6) = *(_DWORD *)aP1->vtable0; /*0x512f68*/
  return 1; /*0x512f51*/
}
}

// 0x5138F0
unsigned int * InfantryTypeVector::Construct2(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall InfantryTypeVector_Constructor2(_DWORD *this, int a2, int a3)
{
  *(this + 1) = 0; /*0x5138fb*/
  *(this + 2) = a2; /*0x5138fe*/
  *((_BYTE *)this + 12) = 1; /*0x513901*/
  *((_BYTE *)this + 13) = 0; /*0x513905*/
  *this = &vt_VectorClass_InfantryTypeClass_const; /*0x513908*/
  if ( a2 ) /*0x51390e*/
  {
    if ( a3 ) /*0x513916*/
    {
      *(this + 1) = a3; /*0x513918*/
      return this; /*0x51391e*/
    }
    *(this + 1) = __2_YAPAXI_Z(4 * a2); /*0x51392d*/
    *((_BYTE *)this + 13) = 1; /*0x513930*/
  }
  return this; /*0x51391d*/
}
}

// 0x5D89A0
unsigned int * InfantryTypeVector::ConstructFromData(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_5D89A0(_DWORD *this, int a2, int a3)
{
  *(this + 1) = 0; /*0x5d89ab*/
  *(this + 2) = a2; /*0x5d89ae*/
  *((_BYTE *)this + 12) = 1; /*0x5d89b1*/
  *((_BYTE *)this + 13) = 0; /*0x5d89b5*/
  *this = &vt_VectorClass_InfantryTypeClass; /*0x5d89b8*/
  if ( a2 ) /*0x5d89be*/
  {
    if ( a3 ) /*0x5d89c6*/
    {
      *(this + 1) = a3; /*0x5d89c8*/
      return this; /*0x5d89ce*/
    }
    *(this + 1) = __2_YAPAXI_Z(4 * a2); /*0x5d89dd*/
    *((_BYTE *)this + 13) = 1; /*0x5d89e0*/
  }
  return this; /*0x5d89cd*/
}
}
