// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x4E30A0
int GaugeClass::Stub()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall GaugeClass::_vt36(_DWORD *this)
{
  return *(this + 13); /*0x4e30a3*/
}
}

// 0x4E30B0
bool GaugeClass::Draw(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall GaugeClass::_vt37(_BYTE *this, int a2)
{
  *(this + 45) = a2 != 0; /*0x4e30b9*/
  return a2 != 0; /*0x4e30bc*/
}
}

// 0x4E30D0
GaugeClass * GaugeClass::QueryInterface(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
GaugeClass *__thiscall GaugeClass::QueryInterface(_DWORD *Block, char a2)
{
  GadgetClass::Dtor(Block); /*0x4e30d3*/
  if ( (a2 & 1) != 0 ) /*0x4e30dd*/
    __3_YAXPAX_Z(Block); /*0x4e30e0*/
  return (GaugeClass *)Block; /*0x4e30ea*/
}
}
