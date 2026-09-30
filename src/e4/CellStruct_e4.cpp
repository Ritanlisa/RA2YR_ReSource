// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x42D510
namespace gamemd {
void* CellStruct::Add(void* aP1,  void* aP2)
{

  int16_t v3; // dx
  IUnknown *aP2a; // [esp+8h] [ebp+8h]

  v3 = *this + IDA_LOWORD(aP2->field_0); /*0x42d51f*/
  IDA_HIWORD(aP2a) = *((unsigned short *)this + 1) + IDA_HIWORD(aP2->field_0); /*0x42d522*/
  IDA_LOWORD(aP2a) = v3; /*0x42d52b*/
  aP1->field_0 = (int)aP2a; /*0x42d534*/
  return aP1; /*0x42d536*/

}
}
// 0x437F30
namespace gamemd {
unsigned int * CellStruct::Copy(void* aP1)
{

  AbstractClass *v3; // edx
  int v4; // ecx

  v3 = (AbstractClass *)*this; /*0x437f34*/
  v4 = *((char *)this + 1); /*0x437f36*/
  aP1->field_0 = (int)v3; /*0x437f39*/
  aP1->field_4 = v4; /*0x437f3b*/
  return &aP1->field_0; /*0x437f3e*/

}
}
// 0x50E470
namespace gamemd {
BOOL CellStruct::Equals(unsigned short * a2)
{

  return *this == *a2 && *((unsigned short *)this + 1) == a2[1]; /*0x50e48b*/

}
}
// 0x588C60
namespace gamemd {
void* CellStruct::Sub(void* aP1,  void* aP2)
{

  int16_t v3; // dx
  int16_t v4; // cx
  IUnknown *aP2a; // [esp+8h] [ebp+8h]

  v3 = (int16_t)(*this);
  v4 = *((unsigned short *)this + 1) - IDA_HIWORD(aP2->field_0); /*0x588c6e*/
  IDA_LOWORD(aP2a) = v3 - IDA_LOWORD(aP2->field_0); /*0x588c76*/
  IDA_HIWORD(aP2a) = v4; /*0x588c7b*/
  aP1->field_0 = (int)aP2a; /*0x588c84*/
  return aP1; /*0x588c86*/

}
}
// 0x42D470
namespace gamemd {
unsigned int * CellStruct::Set( int16_t a2, int16_t a3)
{

  IDA_LOWORD(this->vfptr) = a2; /*0x42d47c*/
  IDA_HIWORD(this->vfptr) = a3; /*0x42d47f*/
  return this; /*0x42d483*/

}
} // namespace gamemd
