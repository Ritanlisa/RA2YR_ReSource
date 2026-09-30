// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Rect_e4.hpp"
#include "e4/classes/RandomMap_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x487F40
namespace gamemd {
void Rect::Union(const Rect& other)
{

  int *v3; // edx
  int *v4; // ecx
  int *v5; // edi
  int v7; // edi
  int v8; // esi
  int v9; // ebx
  int v10; // ebp
  int v11; // edx
  int v12; // ecx
  int v14; // [esp+Ch] [ebp-8h]
  int *v15; // [esp+10h] [ebp-4h]
  LPRECT lprcDst; // [esp+18h] [ebp+4h]

  v5 = v4; /*0x487f48*/
  v15 = v4; /*0x487f4c*/
  if ( v3[2] <= 0 || v3[3] <= 0 ) /*0x487f5b*/
  {
    *v4 = other->field_0; /*0x488012*/
    v4[1] = other->field_4; /*0x488017*/
    v4[2] = other->field_8; /*0x48801d*/
    v4[3] = other->field_C; /*0x488023*/
    return (BOOL)v4; /*0x488026*/
  }
  else
  {
    lprcDst = (LPRECT)other->field_8; /*0x487f6a*/
    if ( (int)lprcDst <= 0 || (v14 = other->field_C, v14 <= 0) ) /*0x487f79*/
    {
      *v5 = *v3; /*0x487ff0*/
      v5[1] = v3[1]; /*0x487ff5*/
      v5[2] = v3[2]; /*0x487ffb*/
      v5[3] = v3[3]; /*0x488001*/
      return (BOOL)v5; /*0x487fec*/
    }
    else
    {
      v7 = *v3; /*0x487f7b*/
      v8 = other->field_0; /*0x487f7d*/
      v9 = v3[1]; /*0x487f80*/
      v10 = v3[2]; /*0x487f84*/
      v11 = v3[3]; /*0x487f87*/
      if ( v7 > other->field_0 ) /*0x487f8c*/
      {
        v10 += v7 - v8; /*0x487f90*/
        v7 = other->field_0; /*0x487f92*/
      }
      v12 = other->field_4; /*0x487f94*/
      if ( v9 > v12 ) /*0x487f9d*/
      {
        v11 += v9 - v12; /*0x487fa1*/
        v9 = v12; /*0x487fa3*/
      }
      if ( v7 + v10 < (int)lprcDst + v8 ) /*0x487fac*/
        v10 = (int)&lprcDst->left + v8 - v7 + 1; /*0x487fb4*/
      if ( v11 + v9 < v12 + v14 ) /*0x487fc8*/
        v11 = v12 + v14 - v9 + 1; /*0x487fcd*/
      *v15 = v7; /*0x487fd5*/
      v15[1] = v9; /*0x487fd7*/
      v15[2] = v10; /*0x487fda*/
      v15[3] = v11; /*0x487fe0*/
      return (BOOL)v15; /*0x487fcf*/
    }
  }

}
} // namespace gamemd
// 0x42E410
namespace gamemd {
void Rect::Set(const Rect& other)
{

  *other = aP1; /*0x42e41a*/
  *(other + 1) = aP2; /*0x42e420*/
  *(other + 2) = aP3; /*0x42e427*/
  *(other + 3) = aP4; /*0x42e42a*/
  return (IUnknown *)other; /*0x42e42d*/

}
} // namespace gamemd
// 0x45A130
namespace gamemd {
void Rect::Construct(const Rect& other)
{

  *other = aP1->field_0; /*0x45a138*/
  *(other + 1) = aP1->field_4; /*0x45a141*/
  *(other + 2) = aP2; /*0x45a148*/
  *(other + 3) = aP3; /*0x45a14b*/
  return (AbstractClass *)other; /*0x45a14e*/

}
} // namespace gamemd
// 0x72A9E0
namespace gamemd {
BOOL Rect::Inflate(LPRECT lprc, int dx, int dy)
{

  int v3; // edx
  unsigned int *v4; // ecx

  *v4 += v3; /*0x72a9e4*/
  v4[1] += v3; /*0x72a9eb*/
  v4[2] -= 2 * v3; /*0x72a9f6*/
  v4[3] -= 2 * v3; /*0x72a9fe*/
  return 2 * v3; /*0x72aa01*/

}
} // namespace gamemd