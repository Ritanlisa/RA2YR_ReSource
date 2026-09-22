// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x487F40
int Rect::Union(IUnknown * aP0, const RECT * lprcSrc1, const RECT * lprcSrc2)
{
{
  LPRECT lprcDst; // [esp+18h] [ebp+4h]

  int * v4 = v4; /*0x487f48*/
  int * v15 = v4; /*0x487f4c*/
  int *v3; // edx
  if ( v3[2] <= 0 || v3[3] <= 0 ) /*0x487f5b*/
  {
    *v4 = aP0->field_0; /*0x488012*/
    v4[1] = aP0->field_4; /*0x488017*/
    v4[2] = aP0->field_8; /*0x48801d*/
    v4[3] = aP0->field_C; /*0x488023*/
    return (BOOL)v4; /*0x488026*/
  }
  else
  {
    lprcDst = (LPRECT)aP0->field_8; /*0x487f6a*/
  int v14; // [esp+Ch] [ebp-8h]
    if ( (int)lprcDst <= 0 || (v14 = aP0->field_C, v14 <= 0) ) /*0x487f79*/
    {
  int *v5; // edi
      *v5 = *v3; /*0x487ff0*/
      v5[1] = v3[1]; /*0x487ff5*/
      v5[2] = v3[2]; /*0x487ffb*/
      v5[3] = v3[3]; /*0x488001*/
      return (BOOL)v5; /*0x487fec*/
    }
    else
    {
      int v7 = *v3; /*0x487f7b*/
      int v8 = aP0->field_0; /*0x487f7d*/
      int v9 = v3[1]; /*0x487f80*/
      int v10 = v3[2]; /*0x487f84*/
      int v11 = v3[3]; /*0x487f87*/
      if ( v7 > aP0->field_0 ) /*0x487f8c*/
      {
        v10 += v7 - v8; /*0x487f90*/
        v7 = aP0->field_0; /*0x487f92*/
      }
      int v12 = aP0->field_4; /*0x487f94*/
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

// 0x42E410
IUnknown * Rect::Set(IUnknown * aP1, IUnknown * aP2, IUnknown * aP3, IUnknown * aP4)
{
{
    *(void**)this = aP1;
    this->Y = aP2;
    this->Width = aP3;
    this->Height = aP4;
    return (IUnknown *)this;
}
}

// 0x45A130
AbstractClass * Rect::Construct(IUnknown * aP1, AbstractClass * aP2, AbstractClass * aP3)
{
{
    *(void**)this = aP1->field_0;
    this->Y = aP1->field_4;
    this->Width = aP2;
    this->Height = aP3;
    return (AbstractClass *)this;
}
}

// 0x72A9E0
BOOL Rect::Inflate(LPRECT lprc, int dx, int dy)
{
{
    int v3;
    int *v4;
    *v4 += v3;
    v4[1] += v3;
    v4[2] -= 2 * v3;
    v4[3] -= 2 * v3;
    return 2 *v3;
}
}
