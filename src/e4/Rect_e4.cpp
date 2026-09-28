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
int Rect::Union(IUnknown * aP0, const RECT * lprcSrc1, const RECT * lprcSrc2)
{
  LONG *v3; // edx
  struct tagRECT *v4; // ecx
  struct tagRECT *v5; // edi
  LONG v7; // edi
  LONG left; // esi
  LONG v9; // ebx
  int v10; // ebp
  int v11; // edx
  LONG top; // ecx
  LONG bottom; // [esp+Ch] [ebp-8h]
  struct tagRECT *v15; // [esp+10h] [ebp-4h]
  LPRECT lprcDsta; // [esp+18h] [ebp+4h]

  v5 = v4; /*0x487f48*/
  v15 = v4; /*0x487f4c*/
  if ( v3[2] <= 0 || v3[3] <= 0 ) /*0x487f5b*/
  {
    *v4 = *aP0; /*0x488012*/
    return (int)v4; /*0x488026*/
  }
  else
  {
    lprcDsta = (LPRECT)aP0->right; /*0x487f6a*/
    if ( (int)lprcDsta <= 0 || (bottom = aP0->bottom, bottom <= 0) ) /*0x487f79*/
    {
      v5->left = *v3; /*0x487ff0*/
      v5->top = v3[1]; /*0x487ff5*/
      v5->right = v3[2]; /*0x487ffb*/
      v5->bottom = v3[3]; /*0x488001*/
      return (int)v5; /*0x487fec*/
    }
    else
    {
      v7 = *v3; /*0x487f7b*/
      left = aP0->left; /*0x487f7d*/
      v9 = v3[1]; /*0x487f80*/
      v10 = v3[2]; /*0x487f84*/
      v11 = v3[3]; /*0x487f87*/
      if ( v7 > aP0->left ) /*0x487f8c*/
      {
        v10 += v7 - left; /*0x487f90*/
        v7 = aP0->left; /*0x487f92*/
      }
      top = aP0->top; /*0x487f94*/
      if ( v9 > top ) /*0x487f9d*/
      {
        v11 += v9 - top; /*0x487fa1*/
        v9 = top; /*0x487fa3*/
      }
      if ( v7 + v10 < (int)lprcDsta + left ) /*0x487fac*/
        v10 = (int)&lprcDsta->left + left - v7 + 1; /*0x487fb4*/
      if ( v11 + v9 < top + bottom ) /*0x487fc8*/
        v11 = top + bottom - v9 + 1; /*0x487fcd*/
      v15->left = v7; /*0x487fd5*/
      v15->top = v9; /*0x487fd7*/
      v15->right = v10; /*0x487fda*/
      v15->bottom = v11; /*0x487fe0*/
      return (int)v15; /*0x487fcf*/
    }
  }
}
} // namespace gamemd
// 0x42E410
namespace gamemd {
IUnknown * Rect::Set(IUnknown * aP1, IUnknown * aP2, IUnknown * aP3, IUnknown * aP4)
{
  this->X = aP1; /*0x42e41a*/
  this->Y = aP2; /*0x42e420*/
  this->Width = aP3; /*0x42e427*/
  this->Height = aP4; /*0x42e42a*/
  return &this->X; /*0x42e42d*/
}
} // namespace gamemd
// 0x45A130
namespace gamemd {
AbstractClass * Rect::Construct(IUnknown * aP1, AbstractClass * aP2, AbstractClass * aP3)
{
  this->X = *aP1; /*0x45a138*/
  this->Y = aP1[1]; /*0x45a141*/
  this->Width = aP2; /*0x45a148*/
  this->Height = aP3; /*0x45a14b*/
  return &this->X; /*0x45a14e*/
}
} // namespace gamemd
// 0x72A9E0
namespace gamemd {
BOOL Rect::Inflate(LPRECT lprc, int dx, int dy)
{
  int v3; // edx
  _DWORD *v4; // ecx

  *v4 += v3; /*0x72a9e4*/
  v4[1] += v3; /*0x72a9eb*/
  v4[2] -= 2 * v3; /*0x72a9f6*/
  v4[3] -= 2 * v3; /*0x72a9fe*/
  return 2 * v3; /*0x72aa01*/
}
} // namespace gamemd