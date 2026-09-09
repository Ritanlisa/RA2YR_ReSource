// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Vector_e4.hpp"

// 0x41C2E0
namespace gamemd {
unsigned short * Vector::ToFacingMath(unsigned short * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_WORD *__thiscall Math_VectorToFacing(double *this, _WORD *a2)
{
  double v3; // st7
  double v5; // [esp+Ch] [ebp-8h]

  v5 = Math::Sqrt(*this * *this + *(this + 1) * *(this + 1)); /*0x41c307*/
  v3 = Math::CalcAngle(*(this + 2), v5); /*0x41c31a*/
  *a2 = Math::RoundToInt((v3 - 1.570796326794897) * -10430.06004058427); /*0x41c338*/
  return a2; /*0x41c337*/
}
}
} // namespace gamemd

// 0x43AE50
namespace gamemd {
void Vector::Clear()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall Vector_Clear(int this)
{
  if ( (unsigned char)this->Vector_field_0x8 ) /*0x43ae53*/
    __3_YAXPAX_Z(*(void **)this); /*0x43ae5d*/
  *(_DWORD *)this = 0; /*0x43ae65*/
  this->Vector_field_0x4 = 0; /*0x43ae6b*/
  *(_BYTE *)(this + 8) = 0; /*0x43ae72*/
}
}
} // namespace gamemd

// 0x45AE10
namespace gamemd {
char Vector::RemoveAt(AbstractClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall Vector::RemoveAt(_DWORD *this, AbstractClass *aP1)
{
  int v2; // edx
  AbstractClass *v3; // eax
  int v4; // edx

  v2 = *(this + 4); /*0x45ae10*/
  v3 = aP1; /*0x45ae13*/
  if ( (int)aP1 >= v2 ) /*0x45ae19*/
    return 0; /*0x45ae3c*/
  v4 = v2 - 1; /*0x45ae1b*/
  *(this + 4) = v4; /*0x45ae1e*/
  if ( (int)aP1 < v4 ) /*0x45ae21*/
  {
    do /*0x45ae34*/
    {
      v3 = (AbstractClass *)((char *)v3 + 1); /*0x45ae27*/
      *(_DWORD *)(*(this + 1) + 4 * (_DWORD)v3 - 4) = *(_DWORD *)(*(this + 1) + 4 * (_DWORD)v3); /*0x45ae2b*/
    }
    while ( (int)v3 < *(this + 4) ); /*0x45ae34*/
  }
  return 1; /*0x45ae39*/
}
}
} // namespace gamemd

// 0x4C1B50
namespace gamemd {
double Math_Vector2D_Magnitude()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
double __thiscall Math_Vector2D_Magnitude(int *this)
{
  double result; // st7

  result = Math::Sqrt((double)*this * (double)*this + (double)*(this + 1) * (double)*(this + 1)); /*0x4c1b69*/
  Math::RoundToInt(result); /*0x4c1b71*/
  return result; /*0x4c1b6e*/
}
}
} // namespace gamemd

// 0x4D2E40
namespace gamemd {
char Vector::ReallocDynamic(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall ReallocDynamicVector(int this, int a2)
{
  char *v3; // edi
  int i; // ecx
  int v5; // eax
  _DWORD *v6; // edx
  int v7; // eax

  if ( a2 < 0 ) /*0x4d2e4c*/
    return 0; /*0x4d2e4c*/
  v3 = (char *)__2_YAPAXI_Z(8 * (a2 + this->Vector_field_0x8)); /*0x4d2e60*/
  if ( !v3 ) /*0x4d2e67*/
    return 0; /*0x4d2ec0*/
  for ( i = 0; i < this->Vector_field_0x4; *(_DWORD *)&v3[v5 + 4] = v6[1] ) /*0x4d2e75*/
  {
    v5 = 8 * i; /*0x4d2e79*/
    v6 = (_DWORD *)(*(_DWORD *)this + 8 * i++); /*0x4d2e82*/
    *(_DWORD *)&v3[v5] = *v6; /*0x4d2e87*/
  }
  __3_YAXPAX_Z(*(void **)this); /*0x4d2e9b*/
  v7 = a2 + this->Vector_field_0x8; /*0x4d2ea6*/
  *(_DWORD *)this = v3; /*0x4d2ea8*/
  this->Vector_field_0x8 = v7; /*0x4d2eaa*/
  this->Vector_field_0x10 = 0; /*0x4d2ead*/
  return 1; /*0x4d2eb4*/
}
}
} // namespace gamemd

// 0x4E0550
namespace gamemd {
int Vector::Find(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Vector_Find(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = *(this + 4); /*0x4e0550*/
  result = 0; /*0x4e0553*/
  if ( v2 <= 0 ) /*0x4e0558*/
    return -1; /*0x4e056f*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2; ++i ) /*0x4e055e*/
  {
    if ( ++result >= v2 ) /*0x4e056d*/
      return -1; /*0x4e056d*/
  }
  return result; /*0x4e0572*/
}
}
} // namespace gamemd

// 0x512D30
namespace gamemd {
void Vector::Cleanup()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall Vector_Cleanup(int this)
{
  if ( this->Vector_field_0x4 && *(_BYTE *)(this + 13) ) /*0x512d3d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x512d43*/
    this->Vector_field_0x4 = 0; /*0x512d4b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x512d4e*/
  this->Vector_field_0x8 = 0; /*0x512d51*/
}
}
} // namespace gamemd

// 0x513100
namespace gamemd {
void Vector::Destructor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall Vector_Destructor(int this)
{
  if ( this->Vector_field_0x4 && *(_BYTE *)(this + 13) ) /*0x51310d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x513113*/
    this->Vector_field_0x4 = 0; /*0x51311b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x51311e*/
  this->Vector_field_0x8 = 0; /*0x513121*/
}
}
} // namespace gamemd

// 0x5AE890
namespace gamemd {
void Vector::MatrixMulVectorMath(float a2, float a3, float a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall Math_MatrixMulVector(float *this, float a2, float a3, float a4)
{
  *(this + 3) = a3 * *(this + 1) + a4 * *(this + 2) + a2 * *this + *(this + 3); /*0x5ae8ab*/
  *(this + 7) = a2 * *(this + 4) + a3 * *(this + 5) + a4 * *(this + 6) + *(this + 7); /*0x5ae8ca*/
  *(this + 11) = a2 * *(this + 8) + a3 * *(this + 9) + a4 * *(this + 10) + *(this + 11); /*0x5ae8e9*/
}
}
} // namespace gamemd

// 0x67ABE0
namespace gamemd {
void Vector::Cleanup2()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall Vector_Cleanup2(int this)
{
  if ( this->Vector_field_0x4 && *(_BYTE *)(this + 13) ) /*0x67abed*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x67abf3*/
    this->Vector_field_0x4 = 0; /*0x67abfb*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x67abfe*/
  this->Vector_field_0x8 = 0; /*0x67ac01*/
}
}
} // namespace gamemd

// 0x76F0B0
namespace gamemd {
BOOL Vector::HasCapacity()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __thiscall Vector_HasCapacity(_DWORD *this)
{
  return *(this + 2) < *(_DWORD *)(*(this + 1) + 16); /*0x76f0bd*/
}
}
} // namespace gamemd

// 0x7AEEC0
namespace gamemd {
char Vector::Grow()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall Vector_Grow(int *this)
{
  int v2; // eax
  int v4; // esi
  void *v5; // ebp
  int v6; // [esp+4h] [ebp-4h]

  v2 = *this; /*0x7aeec4*/
  if ( *this < *(this + 1) ) /*0x7aeecb*/
    return 0; /*0x7aeecd*/
  v4 = 2 * v2; /*0x7aeed4*/
  v6 = 2 * v2; /*0x7aeedb*/
  if ( 2 * v2 < 10 ) /*0x7aeedf*/
  {
    v6 = 10; /*0x7aeee1*/
    v4 = 10; /*0x7aeee9*/
  }
  v5 = __2_YAPAXI_Z(4 * v4); /*0x7aeefc*/
  memset(v5, 0, 4 * ((unsigned int)(4 * v4) >> 2)); /*0x7aef0a*/
  if ( *(this + 2) ) /*0x7aef13*/
  {
    qmemcpy(v5, (const void *)*(this + 2), 4 * *this); /*0x7aef28*/
    v4 = v6; /*0x7aef31*/
  }
  __3_YAXPAX_Z((void *)*(this + 2)); /*0x7aef39*/
  *(this + 1) = v4; /*0x7aef41*/
  *(this + 2) = (int)v5; /*0x7aef44*/
  return 1; /*0x7aeecf*/
}
}
} // namespace gamemd
