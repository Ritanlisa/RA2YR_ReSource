// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/CellStruct_e4.hpp"

// 0x42D470
namespace gamemd {
unsigned short * CellStruct::Set(short a2, short a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_WORD *__thiscall CellStruct::Set(rc_ptr_base *this, __int16 a2, __int16 a3)
{
  LOWORD(this->vfptr) = a2; /*0x42d47c*/
  HIWORD(this->vfptr) = a3; /*0x42d47f*/
  return this; /*0x42d483*/
}
}
} // namespace gamemd

// 0x42D510
namespace gamemd {
IUnknown * CellStruct::Add(IUnknown * aP1, IUnknown * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
IUnknown *__thiscall CellStruct::Add(_WORD *this, IUnknown *aP1, IUnknown *aP2)
{
  __int16 v3; // dx
  IUnknown *aP2a; // [esp+8h] [ebp+8h]

  v3 = *this + LOWORD(aP2->field_0); /*0x42d51f*/
  HIWORD(aP2a) = *(this + 1) + HIWORD(aP2->field_0); /*0x42d522*/
  LOWORD(aP2a) = v3; /*0x42d52b*/
  aP1->field_0 = (int)aP2a; /*0x42d534*/
  return aP1; /*0x42d536*/
}
}
} // namespace gamemd

// 0x437F30
namespace gamemd {
unsigned int * CellStruct::Copy(IUnknown * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall CellStruct::Copy(int *this, IUnknown *aP1)
{
  AbstractClass *v3; // edx
  int v4; // ecx

  v3 = (AbstractClass *)*this; /*0x437f34*/
  v4 = *(this + 1); /*0x437f36*/
  aP1->field_0 = (int)v3; /*0x437f39*/
  aP1->field_4 = v4; /*0x437f3b*/
  return &aP1->field_0; /*0x437f3e*/
}
}
} // namespace gamemd

// 0x50E470
namespace gamemd {
BOOL CellStruct::Equals(unsigned short * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __thiscall CellStruct_Equals(_WORD *this, _WORD *a2)
{
  return *this == *a2 && *(this + 1) == a2[1]; /*0x50e48b*/
}
}
} // namespace gamemd

// 0x588C60
namespace gamemd {
IUnknown * CellStruct::Sub(IUnknown * aP1, IUnknown * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
IUnknown *__thiscall CellStruct::Sub(__int16 *this, IUnknown *aP1, IUnknown *aP2)
{
  __int16 v3; // dx
  __int16 v4; // cx
  IUnknown *aP2a; // [esp+8h] [ebp+8h]

  v3 = *this; /*0x588c60*/
  v4 = *(this + 1) - HIWORD(aP2->field_0); /*0x588c6e*/
  LOWORD(aP2a) = v3 - LOWORD(aP2->field_0); /*0x588c76*/
  HIWORD(aP2a) = v4; /*0x588c7b*/
  aP1->field_0 = (int)aP2a; /*0x588c84*/
  return aP1; /*0x588c86*/
}
}
} // namespace gamemd
