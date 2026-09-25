// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x4C1B50
namespace gamemd {
void Math_Vector2D_Magnitude()
{
  double result; // st7

  result = Math::Sqrt((double)*this * (double)*this + (double)this->vtable2 * (double)this->vtable2); /*0x4c1b69*/
  Math::RoundToInt(result); /*0x4c1b71*/
  return result; /*0x4c1b6e*/
}
}
// 0x512D30
namespace gamemd {
void Vector::Cleanup()
{
  if ( this->q004 && this->u8_D ) /*0x512d3d*/
  {
    RA2_OPDEL(this->q004); /*0x512d43*/
    this->q004 = 0; /*0x512d4b*/
  }
  this->u8_D = 0; /*0x512d4e*/
  this->q008 = 0; /*0x512d51*/
}
}
// 0x513100
namespace gamemd {
void Vector::Destructor()
{
  if ( this->q004 && this->u8_D ) /*0x51310d*/
  {
    RA2_OPDEL(this->q004); /*0x513113*/
    this->q004 = 0; /*0x51311b*/
  }
  this->u8_D = 0; /*0x51311e*/
  this->q008 = 0; /*0x513121*/
}
}
// 0x5AE890
namespace gamemd {
void Vector::MatrixMulVectorMath(float a2, float a3, float a4)
{
  this->IsInitialized = a3 * this->q004 + a4 * this->q008 + a2 * *this + this->IsInitialized; /*0x5ae8ab*/
  this->q01C = a2 * this->q010 + a3 * this->CapacityIncrement + a4 * this->q018 + this->q01C; /*0x5ae8ca*/
  *(&this->q0041) = a2 * this->q020 + a3 * this->q024 + a4 * *(&this->q0040) + *(&this->q0041); /*0x5ae8e9*/
}
}
// 0x67ABE0
namespace gamemd {
void Vector::Cleanup2()
{
  if ( this->q004 && this->u8_D ) /*0x67abed*/
  {
    RA2_OPDEL(this->q004); /*0x67abf3*/
    this->q004 = 0; /*0x67abfb*/
  }
  this->u8_D = 0; /*0x67abfe*/
  this->q008 = 0; /*0x67ac01*/
}
}
// 0x41C2E0
namespace gamemd {
unsigned short * Vector::ToFacingMath(unsigned short * a2)
{
  double v3; // st7
  double v5; // [esp+Ch] [ebp-8h]

  v5 = Math::Sqrt(*this * *this + this->q004 * this->q004); /*0x41c307*/
  v3 = Math::CalcAngle(this->q008, v5); /*0x41c31a*/
  *a2 = Math::RoundToInt((v3 - 1.570796326794897) * -10430.06004058427); /*0x41c338*/
  return a2; /*0x41c337*/
}
} // namespace gamemd

// 0x43AE50
namespace gamemd {
void Vector::Clear()
{
  if ( this->q008 ) /*0x43ae53*/
    RA2_OPDEL(); /*0x43ae5d*/
  *(_DWORD *)this = 0; /*0x43ae65*/
  this->q004 = 0; /*0x43ae6b*/
  this->q008 = 0; /*0x43ae72*/
}
} // namespace gamemd

// 0x45AE10
namespace gamemd {
char Vector::RemoveAt(AbstractClass * aP1)
{
  void * v2;
  void * v4;

  v2 = this->q010; /*0x45ae10*/
  aP1 = aP1; /*0x45ae13*/
  if ( aP1 >= v2 ) /*0x45ae19*/
    return 0; /*0x45ae3c*/
  v4 = v2 - 1; /*0x45ae1b*/
  this->q010 = v4; /*0x45ae1e*/
  if ( aP1 < v4 ) /*0x45ae21*/
  {
    do /*0x45ae34*/
    {
      ++aP1; /*0x45ae27*/
      *(_DWORD *)(this->q004 + 4 * aP1 - 4) = *(_DWORD *)(this->q004 + 4 * aP1); /*0x45ae2b*/
    }
    while ( aP1 < this->q010 ); /*0x45ae34*/
  }
  return 1; /*0x45ae39*/
}
} // namespace gamemd

// 0x4D2E40
namespace gamemd {
char Vector::ReallocDynamic(int a2)
{
  char *v3; // edi
  int i; // ecx
  int v5; // eax
  _DWORD *v6; // edx
  char * v7;

  if ( a2 < 0 ) /*0x4d2e4c*/
    return 0; /*0x4d2e4c*/
  v3 = (char *)RA2_OPNEW(8 * (a2 + v3->vtable3)); /*0x4d2e60*/
  if ( !v3 ) /*0x4d2e67*/
    return 0; /*0x4d2ec0*/
  for ( i = 0; i < v3->vtable2; *(_DWORD *)&v3[v5 + 4] = v6[1] ) /*0x4d2e75*/
  {
    v5 = 8 * i; /*0x4d2e79*/
    v6 = (_DWORD *)(*(_DWORD *)v3 + 8 * i++); /*0x4d2e82*/
    *(_DWORD *)&v3[v5] = *v6; /*0x4d2e87*/
  }
  RA2_OPDEL(); /*0x4d2e9b*/
  v7 = a2 + v3->vtable3; /*0x4d2ea6*/
  *(_DWORD *)v3 = v3; /*0x4d2ea8*/
  v3->vtable3 = v7; /*0x4d2eaa*/
  v3->uniqueId = 0; /*0x4d2ead*/
  return 1; /*0x4d2eb4*/
}
} // namespace gamemd

// 0x4E0550
namespace gamemd {
int Vector::Find(unsigned int * a2)
{
  void * v2;
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->q010; /*0x4e0550*/
  result = 0; /*0x4e0553*/
  if ( v2 <= 0 ) /*0x4e0558*/
    return -1; /*0x4e056f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x4e055e*/
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
  return this->q008 < *(_DWORD *)(this->q004 + 16); /*0x76f0bd*/
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
  v5 = RA2_OPNEW(4 * v4); /*0x7aeefc*/
  memset(v5, 0, 4 * ((unsigned int)(4 * v4) >> 2)); /*0x7aef0a*/
  if ( *(this + 2) ) /*0x7aef13*/
  {
    qmemcpy(v5, (const void *)*(this + 2), 4 * *this); /*0x7aef28*/
    v4 = v6; /*0x7aef31*/
  }
  RA2_OPDEL((void *)*(this + 2)); /*0x7aef39*/
  *(this + 1) = v4; /*0x7aef41*/
  *(this + 2) = (int)v5; /*0x7aef44*/
  return 1; /*0x7aeecf*/
}
} // namespace gamemd
