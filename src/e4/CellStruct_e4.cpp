// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x42D510
namespace gamemd {
void* CellStruct::Add(unsigned int *aP1, unsigned short *aP2)
{

  void * v3;
  unsigned short *v5; // [esp+8h] [ebp+8h]

  v3 = (short)(LOWORD((unsigned int)(this-)>field_0) + *(unsigned int *)(aP2));
  HIWORD(v5) = HIWORD(this->field_0) + aP2[1]; /*0x42d522*/
  LOWORD(v5) = (unsigned short)(v3); /*0x42d52b*/
  *(unsigned int *)(aP1) = (unsigned int)(v5); /*0x42d534*/
  return aP1; /*0x42d536*/

}
}
// 0x437F30
namespace gamemd {
unsigned int * CellStruct::Copy(void* aP1, void *a2_1)
{

  unsigned int * v3;
  void *v4; // ecx

  v3 = (unsigned int *)((int)((unsigned int *)(this->field_0)));
  v4 = (void *)((unsigned int *)(this->field_4));
  *(unsigned int *)(aP1) = (unsigned int)(v3); /*0x437f39*/
  aP1[1] = v4; /*0x437f3b*/
  return (unsigned int *)(aP1); /*0x437f3e*/

}
}
// 0x50E470
namespace gamemd {
BOOL CellStruct::Equals(unsigned short * a2, void *a2_2)
{

  return LOWORD(this->field_0) == *a2 && HIWORD(this->field_0) == a2[1]; /*0x50e48b*/

}
}
// 0x588C60
namespace gamemd {
void* CellStruct::Sub(unsigned int *aP1, unsigned short *aP2)
{

  int16_t v3; // dx
  int16_t v4; // cx
  unsigned short *v6; // [esp+8h] [ebp+8h]

  v3 = (unsigned int)(this->field_0);
  v4 = (unsigned int)(HIWORD(this->field_0) - aP2[1]);
  LOWORD(v6) = v3 - *(unsigned int *)(aP2); /*0x588c76*/
  HIWORD(v6) = v4; /*0x588c7b*/
  *(unsigned int *)(aP1) = (unsigned int)(v6); /*0x588c84*/
  return aP1; /*0x588c86*/

}
}
// 0x42D470
namespace gamemd {
unsigned int * CellStruct::Set(int16_t a2, int16_t a3)
{

  LOWORD(this->field_0) = a2; /*0x42d47c*/
  HIWORD(this->field_0) = a3; /*0x42d47f*/
  return (unsigned int *)(this); /*0x42d483*/

}
} // namespace gamemd
