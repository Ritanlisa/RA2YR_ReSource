// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x42D510
namespace gamemd {  // G42.18 ns repair
void* CellStruct::Add(CellStruct *aP0, unsigned int *aP1, unsigned short *aP2)  // G57w11: def 同步 hpp（raw 0x42D510）
{

  __int16 v3; // dx
  unsigned short *v5; // [esp+8h] [ebp+8h]

  v3 = this->X + *aP2; /*0x42d51f*/
  HIWORD(v5) = this->Y + aP2[1]; /*0x42d522*/
  LOWORD(v5) = v3; /*0x42d52b*/
  *aP1 = v5; /*0x42d534*/
  return aP1; /*0x42d536*/

}
}  // G42.18 ns repair
// 0x437F30
namespace gamemd {  // G42.18 ns repair
unsigned int * CellStruct::Copy(CellStruct *aP0, void* aP1)  // G57w11: def 同步 hpp（raw 0x437F30 this+a2，a2_1 未用已删）
{

  void *v3; // edx
  void *v4; // ecx

  v3 = *(void **)&this->X; /*0x437f34*/
  v4 = this->field_4; /*0x437f36*/
  *aP1 = v3; /*0x437f39*/
  aP1[1] = v4; /*0x437f3b*/
  return aP1; /*0x437f3e*/

}
}  // G42.18 ns repair
// 0x50E470
namespace gamemd {  // G42.18 ns repair
BOOL CellStruct::Equals(unsigned short * a2, void *a2_2)
{

  return this->X == *a2 && this->Y == a2[1]; /*0x50e48b*/

}
}  // G42.18 ns repair
// 0x588C60
namespace gamemd {
void* CellStruct::Sub(unsigned int *aP1, unsigned short *aP2)
{

  signed __int16 X; // dx
  __int16 v4; // cx
  unsigned short *v6; // [esp+8h] [ebp+8h]

  X = this->X; /*0x588c60*/
  v4 = this->Y - aP2[1]; /*0x588c6e*/
  LOWORD(v6) = X - *aP2; /*0x588c76*/
  HIWORD(v6) = v4; /*0x588c7b*/
  *aP1 = v6; /*0x588c84*/
  return aP1; /*0x588c86*/

}
}
// 0x42D470
namespace gamemd {
unsigned int * CellStruct::Set(int16_t a2, int16_t a3)
{

  this->X = a2; /*0x42d47c*/
  this->Y = a3; /*0x42d47f*/
  return &this->X; /*0x42d483*/

}
} // namespace gamemd
