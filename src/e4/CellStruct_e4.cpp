// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/CellStruct_e4.hpp"

// 0x42D510
namespace gamemd {
IUnknown * CellStruct::Add(IUnknown * aP1, IUnknown * aP2)
{
  __int16 v3; // dx
  int v5; // [esp+8h] [ebp+8h]

  v3 = *this + *aP2; /*0x42d51f*/
  HIWORD(v5) = *(this + 1) + aP2[1]; /*0x42d522*/
  LOWORD(v5) = v3; /*0x42d52b*/
  *aP1 = v5; /*0x42d534*/
  return aP1; /*0x42d536*/
}
}
// 0x437F30
namespace gamemd {
unsigned int * CellStruct::Copy(IUnknown * aP1)
{
  int v3; // edx
  int v4; // ecx

  v3 = *this; /*0x437f34*/
  v4 = *(this + 1); /*0x437f36*/
  *aP1 = v3; /*0x437f39*/
  aP1[1] = v4; /*0x437f3b*/
  return aP1; /*0x437f3e*/
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
IUnknown * CellStruct::Sub(IUnknown * aP1, IUnknown * aP2)
{
  __int16 v3; // dx
  __int16 v4; // cx
  int v6; // [esp+8h] [ebp+8h]

  v3 = *this; /*0x588c60*/
  v4 = *(this + 1) - aP2[1]; /*0x588c6e*/
  LOWORD(v6) = v3 - *aP2; /*0x588c76*/
  HIWORD(v6) = v4; /*0x588c7b*/
  *aP1 = v6; /*0x588c84*/
  return aP1; /*0x588c86*/
}
}
// 0x42D470
namespace gamemd {
unsigned short * CellStruct::Set(short a2, short a3)
{
  *this = a2; /*0x42d47c*/
  *(this + 1) = a3; /*0x42d47f*/
  return this; /*0x42d483*/
}
} // namespace gamemd
