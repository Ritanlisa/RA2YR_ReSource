// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/VectorCursor_uint_DynamicVectorClass_uint____13_e4.hpp"
#include "e4/classes/VectorCursor_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/VectorClass_Cell_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"

// 0x76F180
namespace gamemd {
unsigned int * VectorCursor::Release()
{
  ++this->q008; /*0x76f182*/
  return this->__pad_0; /*0x76f185*/
}
} // namespace gamemd
// 0x76F190
namespace gamemd {
unsigned int * VectorCursor::ddtor()
{
  --this->q008; /*0x76f192*/
  return this->__pad_0; /*0x76f195*/
}
} // namespace gamemd
// 0x4F42D0
namespace gamemd {
void VectorCursor_uint_DynamicVectorClass_uint____13::Remove()
{
  this->u32_C = 2; /*0x4f42d0*/
}
}
// 0x4F4BB0
namespace gamemd {
void VectorCursor_uint_DynamicVectorClass_uint____13::Count(int a2, int a3)
{
  int v3; // eax
  int v4; // edx
  int v5; // eax

  if ( ((unsigned __int8)dword_A8ED84 & 1) == 0 ) /*0x4f4bb7*/
  {
    v3 = this->u32_4; /*0x4f4bb9*/
    if ( v3 >= 0 ) /*0x4f4bbe*/
    {
      if ( v3 <= 0 ) /*0x4f4bc5*/
        goto LABEL_7; /*0x4f4bc5*/
      v4 = 1; /*0x4f4bc7*/
    }
    else
    {
      v4 = -1; /*0x4f4bc0*/
    }
    this->u32_4 = v4 - v3; /*0x4f4bce*/
  LABEL_7:
    v5 = this->u32_8; /*0x4f4bd1*/
    if ( v5 >= 0 ) /*0x4f4bd6*/
    {
      if ( v5 > 0 ) /*0x4f4be3*/
        this->u32_8 = 1 - v5; /*0x4f4bec*/
    }
    else
    {
      this->u32_8 = -1 - v5; /*0x4f4bdd*/
    }
  }
}
}
// 0x4F42A0
namespace gamemd {
void VectorCursor_uint_DynamicVectorClass_uint____13::Add()
{
  dword_A8EF54 = 0; /*0x4f42a0*/
}
} // namespace gamemd

// 0x4F42E0
namespace gamemd {
void VectorCursor_uint_DynamicVectorClass_uint____13::Get()
{
  dword_A8EF54 = 0; /*0x4f42e0*/
}
} // namespace gamemd
