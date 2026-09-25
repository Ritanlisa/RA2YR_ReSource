// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x42D510
namespace gamemd {
IUnknown * CellStruct::Add(IUnknown * v5, IUnknown * aP2)
{
  __int16 v3; // dx

  v3 = *this + *aP2; /*0x42d51f*/
  IDA_HIWORD(v5) = this->q004 + aP2[1]; /*0x42d522*/
  IDA_LOWORD(v5) = v3; /*0x42d52b*/
  *v5 = v5; /*0x42d534*/
}
}
// 0x437F30
namespace gamemd {
unsigned int * CellStruct::Copy(IUnknown * aP1)
{
  int v3; // edx
  int v4; // ecx

  v3 = *this; /*0x437f34*/
  v4 = this->u32_4; /*0x437f36*/
  *v3 = v3; /*0x437f39*/
  v3[1] = v4; /*0x437f3b*/
}
}
// 0x50E470
namespace gamemd {
BOOL CellStruct::Equals(unsigned short * a2)
{
  return *this == *a2 && *(this + 1) == a2[1]; /*0x50e48b*/
}
}
// 0x588C60
namespace gamemd {
IUnknown * CellStruct::Sub(IUnknown * v6, IUnknown * aP2)
{
  __int16 v3; // dx
  __int16 v4; // cx
  int v6; // [esp+8h] [ebp+8h]

  v3 = *this; /*0x588c60*/
  v4 = *(this + 1) - aP2[1]; /*0x588c6e*/
  IDA_LOWORD(v6) = v3 - *aP2; /*0x588c76*/
  IDA_HIWORD(v6) = v4; /*0x588c7b*/
  *v6 = v6; /*0x588c84*/
  return v6; /*0x588c86*/
}
}
// 0x42D470
namespace gamemd {
unsigned short * CellStruct::Set(short a2, short a3)
{
  *(_DWORD *)this = a2; /*0x42d47c*/
  *(this + 1) = a3; /*0x42d47f*/
  return this; /*0x42d483*/
}
} // namespace gamemd
