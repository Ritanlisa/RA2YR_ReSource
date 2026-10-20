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
namespace gamemd {  // G42.18 ns repair
void Vector::Math_Vector2D_Magnitude()
{


  double result; // st7
  result = (double)this->Vector_field_0x4; /*0x4c1b50*/
  Math::Sqrt((double)*(int *)this->Cl_ph * (double)*(int *)this->Cl_ph + result * result); /*0x4c1b69*/
  Math::RoundToInt(result); /*0x4c1b71*/
  return result; /*0x4c1b6e*/

}
}  // G42.18 ns repair
// 0x512D30
namespace gamemd {
int Vector::Cleanup(void *a1, void *a2)
{

  int result = *&this->Vector_field_0x4; // eax /*0x512d36*/
  if ( result && (((unsigned char *)&(*&this->u32_D))[1]) ) /*0x512d3d*/
  {
    operator delete((void *)(*&this->Vector_field_0x4)); /*0x512d43*/
    *&this->Vector_field_0x4 = 0; /*0x512d4b*/
  }
  (((unsigned char *)&(*&this->IsInitialized))[1]) = 0; /*0x512d4e*/
  *&this->Vector_field_0x8 = 0; /*0x512d51*/
  return result; /*0x512d54*/
}
}
// 0x513100
namespace gamemd {
int Vector::Destructor(void *a1)
{

  int result = *&this->Vector_field_0x4; // eax /*0x513106*/
  if ( result && (((unsigned char *)&(*&this->u32_D))[1]) ) /*0x51310d*/
  {
    operator delete((void *)(*&this->Vector_field_0x4)); /*0x513113*/
    *&this->Vector_field_0x4 = 0; /*0x51311b*/
  }
  (((unsigned char *)&(*&this->IsInitialized))[1]) = 0; /*0x51311e*/
  *&this->Vector_field_0x8 = 0; /*0x513121*/
  return result; /*0x513124*/
}
}
// 0x5AE890
namespace gamemd {
int Vector::MatrixMulVectorMath(float a2, float a3, float a4)
{

  this->IsInitialized = a3 * this->__pad_010 /*0x5ae8ab*/
  + a4 * this->Vector_field_0x8
  + a2 * *(float *)this
  + this->IsInitialized;
  this->u32_1C = a2 * this->__pad_010 /*0x5ae8ca*/
  + a3 * this->u32_14
  + a4 * this->u32_18
  + this->u32_1C;
  this->u32_2C = a2 * this->u32_20 /*0x5ae8e9*/
  + a3 * this->u32_24
  + a4 * this->u32_28
  + this->u32_2C;
  int result; // eax
  return result; /*0x5ae8ec*/
}
}
// 0x67ABE0
namespace gamemd {
int Vector::Cleanup2(void *a1)
{

  int result = *&this->Vector_field_0x4; // eax /*0x67abe6*/
  if ( result && (((unsigned char *)&(*&this->u32_D))[1]) ) /*0x67abed*/
  {
    operator delete((void *)(*&this->Vector_field_0x4)); /*0x67abf3*/
    *&this->Vector_field_0x4 = 0; /*0x67abfb*/
  }
  (((unsigned char *)&(*&this->IsInitialized))[1]) = 0; /*0x67abfe*/
  *&this->Vector_field_0x8 = 0; /*0x67ac01*/
  return result; /*0x67ac04*/
}
}
// 0x41C2E0
namespace gamemd {
unsigned short * Vector::ToFacingMath(unsigned short *a2)
{

  int v2; // ecx
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
  double v6; // [esp+0h] [ebp-14h]
  Math::Sqrt(v6); /*0x41c2ff*/
  __asm { fstp [esp+14h+var_8] } /*0x41c307*/
  double v7; // [esp+Ch] [ebp-8h]
  Math::CalcAngle(_ESI->uniqueId, v7); /*0x41c31a*/
  __asm { fsub ds:dbl_7E2820 } /*0x41c31f*/
  __asm { fmul ds:dbl_7E2818 }
  double v3; // st7
  *(unsigned short *)this = Math::RoundToInt(v3); /*0x41c338*/
  return (unsigned short *)((int)this); /*0x41c337*/
}
} // namespace gamemd

// 0x43AE50
namespace gamemd {
int Vector::Clear(void *a1)
{

  int result; // eax
  (*((unsigned char *)&(result))) = this->Vector_field_0x8; /*0x43ae53*/
  if ( (unsigned char)result ) /*0x43ae58*/
    operator delete((*(void **)this)); /*0x43ae5d*/
  *(unsigned int *)this = 0; /*0x43ae65*/
  this->__pad_010 = 0; /*0x43ae6b*/
  this->Vector_field_0x8 = 0; /*0x43ae72*/
  return result; /*0x43ae76*/
}
} // namespace gamemd

// 0x45AE10
namespace gamemd {
int Vector::RemoveAt(int aP1, void *a2)
{

  char *Vector_field_0x10; // edx
  int result; // eax
  char *v4; // edx

  Vector_field_0x10 = (char *)this->Vector_field_0x10; /*0x45ae10*/
  result = a2; /*0x45ae13*/
  if ( a2 >= (int)Vector_field_0x10 ) /*0x45ae19*/
  {
    (result) = ((result) & ~0xFF) | ((0) & 0xFF); /*0x45ae3c*/
  }
  else
  {
    v4 = Vector_field_0x10 - 1; /*0x45ae1b*/
    this->Vector_field_0x10 = v4; /*0x45ae1e*/
    if ( a2 < (int)v4 ) /*0x45ae21*/
    {
      do /*0x45ae34*/
      {
        ++result; /*0x45ae27*/
        *((unsigned int *)this->Vector_field_0x4 + result - 1) = *((unsigned int *)this->Vector_field_0x4 + result); /*0x45ae2b*/
      }
      while ( result < (int)this->Vector_field_0x10 ); /*0x45ae34*/
    }
    (result) = ((result) & ~0xFF) | ((1) & 0xFF); /*0x45ae37*/
  }
  return result; /*0x45ae39*/

}
} // namespace gamemd

// 0x4D2E40
namespace gamemd {
void Vector::ReallocDynamic(int a2, void *a2_1)
{

  char *v3; // edi
  int i; // ecx
  int v5; // eax
  unsigned int *v6; // edx
  int v7; // eax

  if ( a2 < 0 ) /*0x4d2e4c*/
    return 0; /*0x4d2e4c*/
  v3 = (char *)__2_YAPAXI_Z(8 * (a2 + this->ptr_8)); /*0x4d2e60*/
  if ( !v3 ) /*0x4d2e67*/
    return 0; /*0x4d2ec0*/
  for ( i = 0; i < this->ptr_4; *(unsigned int *)&v3[v5 + 4] = v6[1] ) /*0x4d2e75*/
  {
    v5 = 8 * i; /*0x4d2e79*/
    v6 = (unsigned int *)(*(unsigned int *)this + 8 * i++); /*0x4d2e82*/
    *(unsigned int *)&v3[v5] = *v6; /*0x4d2e87*/
  }
  __3_YAXPAX_Z(*(void **)this); /*0x4d2e9b*/
  v7 = a2 + this->ptr_8; /*0x4d2ea6*/
  *(unsigned int *)this = v3; /*0x4d2ea8*/
  this->ptr_3 = v7; /*0x4d2eaa*/
  this->uniqueId = 0; /*0x4d2ead*/
  return 1; /*0x4d2eb4*/

}
} // namespace gamemd

// 0x4E0550
namespace gamemd {
int Vector::Find(unsigned int * a2, void *a2_1)
{

  int v2 = this->__pad_010; // edx /*0x4e0550*/
  int result = 0; // eax /*0x4e0553*/
  if ( v2 <= 0 ) /*0x4e0558*/
    return -1; /*0x4e056f*/
  unsigned int *i; // ecx
  for ( i = *&this->Vector_field_0x4; *i != *a2; ++i ) /*0x4e055e*/
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

  return this->Vector_field_0x8 < *(unsigned int *)(*&this->Vector_field_0x4 + 16); /*0x76f0bd*/

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

  v2 = *(unsigned int *)this->Cl_ph; /*0x7aeec4*/
  if ( *(unsigned int *)this->Cl_ph < (int)this->Vector_field_0x4 ) /*0x7aeecb*/
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
    memcpy(v5, this->Vector_field_0x8, 4 * *(unsigned int *)this->Cl_ph); /*0x7aef28*/
    v4 = v6; /*0x7aef31*/
  }
  __3_YAXPAX_Z(this->Vector_field_0x8); /*0x7aef39*/
  this->Vector_field_0x4 = (void *)v4; /*0x7aef41*/
  this->Vector_field_0x8 = v5; /*0x7aef44*/
  return 1; /*0x7aeecf*/

}
} // namespace gamemd
