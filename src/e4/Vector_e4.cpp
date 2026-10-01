// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/VectorClass_e_e4.hpp"
#include "e4/classes/String_e4.hpp"

// 0x4C1B50
namespace gamemd {
void Vector::Math_Vector2D_Magnitude()
{

  double result; // st7

  result = (double)this->Vector_field_0x4; /*0x4c1b50*/
  Math::Sqrt((double)*(int *)this->__pad_0 * (double)*(int *)this->__pad_0 + result * result); /*0x4c1b69*/
  Math::RoundToInt(result); /*0x4c1b71*/
  return result; /*0x4c1b6e*/

}
}
// 0x512D30
namespace gamemd {
int Vector::Cleanup(void *a1_1)
{

  int result; // eax

  result = *(unsigned int *)&this->m_1[3]; /*0x512d36*/
  if ( result && BYTE1(this->m_C) ) /*0x512d3d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x512d43*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x512d4b*/
  }
  BYTE1(this->m_C) = 0; /*0x512d4e*/
  this->m_8 = 0; /*0x512d51*/
  return result; /*0x512d54*/

}
}
// 0x513100
namespace gamemd {
int Vector::Destructor(void *a1_1)
{

  int result; // eax

  result = *(unsigned int *)&this->m_1[3]; /*0x513106*/
  if ( result && BYTE1(this->m_C) ) /*0x51310d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x513113*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x51311b*/
  }
  BYTE1(this->m_C) = 0; /*0x51311e*/
  this->m_8 = 0; /*0x513121*/
  return result; /*0x513124*/

}
}
// 0x5AE890
namespace gamemd {
int Vector::MatrixMulVectorMath(float a2, float a3, float a4)
{

  int result; // eax

  *((float *)this + 3) = a3 * *((float *)this + 1) /*0x5ae8ab*/
                       + a4 * *((float *)this + 2)
                       + a2 * *(float *)this
                       + *((float *)this + 3);
  *((float *)this + 7) = a2 * *((float *)this + 4) /*0x5ae8ca*/
                       + a3 * *((float *)this + 5)
                       + a4 * *((float *)this + 6)
                       + *((float *)this + 7);
  *((float *)this + 11) = a2 * *((float *)this + 8) /*0x5ae8e9*/
                        + a3 * *((float *)this + 9)
                        + a4 * *((float *)this + 10)
                        + *((float *)this + 11);
  return result; /*0x5ae8ec*/

}
}
// 0x67ABE0
namespace gamemd {
int Vector::Cleanup2()
{

  int result; // eax

  result = *(unsigned int *)&this->m_1[3]; /*0x67abe6*/
  if ( result && BYTE1(this->m_C) ) /*0x67abed*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x67abf3*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x67abfb*/
  }
  BYTE1(this->m_C) = 0; /*0x67abfe*/
  this->m_8 = 0; /*0x67ac01*/
  return result; /*0x67ac04*/

}
}
// 0x41C2E0
namespace gamemd {
unsigned short * Vector::ToFacingMath(unsigned short *a2)
{

  int v2; // ecx
  double v3; // st7
  double v6; // [esp+0h] [ebp-14h]
  double v7; // [esp+Ch] [ebp-8h]

  _ESI = v2; /*0x41c2e4*/
  __asm /*0x41c2e9*/
  {
    fld qword ptr [esi+8]
    fld qword ptr [esi]
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fstp [esp+14h+var_14]; double
    fstp st
    fstp st
  }
  Math::Sqrt(v6); /*0x41c2ff*/
  __asm { fstp [esp+14h+var_8] } /*0x41c307*/
  Math::CalcAngle(*(double *)(_ESI + 16), v7); /*0x41c31a*/
  __asm { fsub ds:dbl_7E2820 } /*0x41c31f*/
  __asm { fmul ds:dbl_7E2818 }
  *(unsigned short *)a2 = Math::RoundToInt(v3); /*0x41c338*/
  return (int)a2; /*0x41c337*/

}
} // namespace gamemd

// 0x43AE50
namespace gamemd {
int Vector::Clear()
{

  int result; // eax

  LOBYTE(result) = *((unsigned char *)this + 8); /*0x43ae53*/
  if ( (unsigned char)result ) /*0x43ae58*/
    __3_YAXPAX_Z(*(void **)this); /*0x43ae5d*/
  *(unsigned int *)this = 0; /*0x43ae65*/
  *((unsigned int *)this + 1) = 0; /*0x43ae6b*/
  *((unsigned char *)this + 8) = 0; /*0x43ae72*/
  return result; /*0x43ae76*/

}
} // namespace gamemd

// 0x45AE10
namespace gamemd {
int Vector::RemoveAt(AbstractClass * aP1, void *a2_1)
{

  char *Vector_field_0x10; // edx
  AbstractClass * result;
  char *v4; // edx

  Vector_field_0x10 = (char *)((int)((char *)this->Vector_field_0x10));
  result = aP1; /*0x45ae13*/
  if ( aP1 >= (gamemd::AbstractClass *)((int))Vector_field_0x10 ) /*0x45ae19*/
  {
    LOBYTE(result) = 0; /*0x45ae3c*/
  }
  else
  {
    v4 = (char *)((unsigned int)(Vector_field_0x10 - 1));
    this->Vector_field_0x10 = (unsigned int)(v4);
    if ( aP1 < (gamemd::AbstractClass *)((int))v4 ) /*0x45ae21*/
    {
      do /*0x45ae34*/
      {
        ++result; /*0x45ae27*/
        *((unsigned int *)(unsigned int)(this->Vector_field_0x4)+ result - 1) = *((unsigned int *)(unsigned int)(this-)>Vector_field_0x4 + result); /*0x45ae2b*/
      }
      while ( result < (gamemd::AbstractClass *)((int))this->Vector_field_0x10 ); /*0x45ae34*/
    }
    LOBYTE(result) = 1; /*0x45ae37*/
  }
  return result; /*0x45ae39*/

}
} // namespace gamemd

// 0x4D2E40
namespace gamemd {
void Vector::ReallocDynamic(int a2, void *a2_2)
{

  char *v3; // edi
  int i; // ecx
  int v5; // eax
  unsigned int *v6; // edx
  int v7; // eax

  if ( a2 < 0 ) /*0x4d2e4c*/
    return 0; /*0x4d2e4c*/
  v3 = (char *)__2_YAPAXI_Z(8 * (a2 + *((unsigned int *)this + 2))); /*0x4d2e60*/
  if ( !v3 ) /*0x4d2e67*/
    return 0; /*0x4d2ec0*/
  for ( i = 0; i < *((unsigned int *)this + 1); *(unsigned int *)&v3[v5 + 4] = v6[1] ) /*0x4d2e75*/
  {
    v5 = 8 * i; /*0x4d2e79*/
    v6 = (unsigned int *)(*(unsigned int *)this + 8 * i++); /*0x4d2e82*/
    *(unsigned int *)&v3[v5] = *v6; /*0x4d2e87*/
  }
  __3_YAXPAX_Z(*(void **)this); /*0x4d2e9b*/
  v7 = a2 + *((unsigned int *)this + 2); /*0x4d2ea6*/
  *(unsigned int *)this = (unsigned int)(v3); /*0x4d2ea8*/
  *((unsigned int *)this + 2) = v7; /*0x4d2eaa*/
  *((unsigned int *)this + 4) = 0; /*0x4d2ead*/
  return 1; /*0x4d2eb4*/

}
} // namespace gamemd

// 0x4E0550
namespace gamemd {
int Vector::Find(unsigned int * a2)
{

  int v2; // edx
  int result; // eax
  unsigned int *i; // ecx

  v2 = *((unsigned int *)this + 4); /*0x4e0550*/
  result = 0; /*0x4e0553*/
  if ( v2 <= 0 ) /*0x4e0558*/
    return -1; /*0x4e056f*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x4e055e*/
  {
    if ( ++result >= v2 ) /*0x4e056d*/
      return -1; /*0x4e056d*/
  }
  return result; /*0x4e0572*/

}
}
// 0x76F0B0
namespace gamemd {
BOOL Vector::HasCapacity()
{

  return *((unsigned int *)this + 2) < *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 16); /*0x76f0bd*/

}
} // namespace gamemd

// 0x7AEEC0
namespace gamemd {
char Vector::Grow()
{

  int v2; // eax
  int v4; // esi
  void *v5; // ebp
  int v6; // [esp+4h] [ebp-4h]

  v2 = *(unsigned int *)this->__pad_0; /*0x7aeec4*/
  if ( *(unsigned int *)this->__pad_0 < (int)this->Vector_field_0x4 ) /*0x7aeecb*/
    return 0; /*0x7aeecd*/
  v4 = 2 * v2; /*0x7aeed4*/
  v6 = 2 * v2; /*0x7aeedb*/
  if ( 2 * v2 < 10 ) /*0x7aeedf*/
  {
    v6 = 10; /*0x7aeee1*/
    v4 = 10; /*0x7aeee9*/
  }
  v5 = (void *)__2_YAPAXI_Z(4 * v4); /*0x7aeefc*/
  memset(v5, 0, 4 * ((unsigned int)(4 * v4) >> 2)); /*0x7aef0a*/
  if ( this->Vector_field_0x8 ) /*0x7aef13*/
  {
    qmemcpy(v5, this->Vector_field_0x8, 4 * *(unsigned int *)this->__pad_0); /*0x7aef28*/
    v4 = v6; /*0x7aef31*/
  }
  __3_YAXPAX_Z((void *)(this->Vector_field_0x8)); /*0x7aef39*/
  this->Vector_field_0x4 = (unsigned int)((void *)v4); /*0x7aef41*/
  this->Vector_field_0x8 = (unsigned int)(v5); /*0x7aef44*/
  return 1; /*0x7aeecf*/

}
} // namespace gamemd
