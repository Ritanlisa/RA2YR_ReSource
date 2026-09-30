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

// 0x4C1B50
namespace gamemd {
void Vector::Math_Vector2D_Magnitude()
{
  double result; // st7

  result = (double)this->Vector_field_0x4; /*0x4c1b50*/
    result = Math::Sqrt((double)*this * (double)*this + (double)*((unsigned int *)this + 4) * (double)*((unsigned int *)this + 4));
  Math::RoundToInt(result); /*0x4c1b71*/
  return result; /*0x4c1b6e*/
}
}
// 0x512D30
namespace gamemd {
void Vector::Cleanup(void *a1 = 0)
{
  int result; // eax

  result = *(unsigned int *)&this->q004; /*0x512d36*/
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->q004); /*0x512d43*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
  return result; /*0x512d54*/
}
}
// 0x513100
namespace gamemd {
void Vector::Destructor(void *a1 = 0)
{
  int result; // eax

  result = *(unsigned int *)&this->q004; /*0x513106*/
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->q004); /*0x513113*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
  return result; /*0x513124*/
}
}
// 0x5AE890
namespace gamemd {
void Vector::MatrixMulVectorMath(float a2, float a3, float a4)
{
  int result; // eax

    *((unsigned int *)this + 12) = a3 * *((unsigned int *)this + 4) + a4 * *((unsigned int *)this + 8) + a2 * *this + *((unsigned int *)this + 12);
                       + a4 * this->q008
                       + a2 * *(float *)this
                       + this->IsInitialized;
    *((unsigned int *)this + 28) = a2 * *((unsigned int *)this + 16) + a3 * *((unsigned int *)this + 20) + a4 * *((unsigned int *)this + 24) + *((unsigned int *)this + 28);
                       + a3 * this->u32_14
                       + a4 * this->u32_18
                       + this->u32_1C;
    *((unsigned int *)this + 44) = a2 * *((unsigned int *)this + 32) + a3 * *((unsigned int *)this + 36) + a4 * *((unsigned int *)this + 40) + *((unsigned int *)this + 44);
                        + a3 * this->u32_24
                        + a4 * this->q00A
                        + this->q00B;
  return result; /*0x5ae8ec*/
}
}
// 0x67ABE0
namespace gamemd {
void Vector::Cleanup2()
{
  int result; // eax

  result = *(unsigned int *)&this->q004; /*0x67abe6*/
    if ( *((unsigned int *)this + 16) && *((unsigned char *)this + 52) )
  {
    RA2_OPDEL(*(void **)&this->q004); /*0x67abf3*/
        *((unsigned int *)this + 16) = 0;
  }
    *((unsigned char *)this + 52) = 0;
    *((unsigned int *)this + 32) = 0;
  return result; /*0x67ac04*/
}
}
// 0x41C2E0
namespace gamemd {
unsigned short * Vector::ToFacingMath(unsigned short * a2)
{
  double v3; // st7
  double v5; // [esp+Ch] [ebp-8h]

    v5 = Math::Sqrt(*this * *this + *((unsigned int *)this + 4) * *((unsigned int *)this + 4));
    v3 = Math::CalcAngle(*((unsigned int *)this + 8), v5);
  *a2 = Math::RoundToInt((v3 - 1.570796326794897) * -10430.06004058427); /*0x41c338*/
  return a2; /*0x41c337*/
}
} // namespace gamemd

// 0x43AE50
namespace gamemd {
void Vector::Clear(void *a1 = 0)
{
  int result; // eax

    if ( *((unsigned char *)this + 32) )
  if ( (unsigned char)result ) /*0x43ae58*/
    RA2_OPDEL(); /*0x43ae5d*/
  *(unsigned int *)this = 0; /*0x43ae65*/
    *((unsigned int *)this + 16) = 0;
    *((unsigned char *)this + 32) = 0;
  return result; /*0x43ae76*/
}
} // namespace gamemd

// 0x45AE10
namespace gamemd {
int Vector::RemoveAt()
{
  char *Vector_field_0x10; // edx
  AbstractClass * result;
  char *v4; // edx

    v2 = *((unsigned int *)this + 16);
  result = aP1; /*0x45ae13*/
  if ( aP1 >= (gamemd::AbstractClass *)((int))Vector_field_0x10 ) /*0x45ae19*/
  {
    IDA_LOBYTE(result) = 0; /*0x45ae3c*/
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
              *(unsigned int *)(*((unsigned int *)this + 4) + 4 * (unsigned int)v3 - 4) = *(unsigned int *)(*((unsigned int *)this + 4) + 4 * (unsigned int)v3);
      }
      while ( result < (gamemd::AbstractClass *)((int))this->Vector_field_0x10 ); /*0x45ae34*/
    }
    IDA_LOBYTE(result) = 1; /*0x45ae37*/
  }
  return (char)(result);
}
} // namespace gamemd

// 0x4D2E40
namespace gamemd {
void Vector::ReallocDynamic(void *a1 = 0)
{
  char *v3; // edi
  int i; // ecx
  int v5; // eax
  unsigned int *v6; // edx
  int v7; // eax

  if ( a2 < 0 ) /*0x4d2e4c*/
    return 0; /*0x4d2e4c*/
  v3 = (char *)RA2_OPNEW(8 * (a2 + v3->vtable3)); /*0x4d2e60*/
  if ( !v3 ) /*0x4d2e67*/
    return 0; /*0x4d2ec0*/
    for ( i = 0; i < *((unsigned int *)this + 16); *(unsigned int *)&v3[v5 + 4] = v6[1] )
  {
    v5 = 8 * i; /*0x4d2e79*/
    v6 = (unsigned int *)(*(unsigned int *)v3 + 8 * i++); /*0x4d2e82*/
    *(unsigned int *)&v3[v5] = *v6; /*0x4d2e87*/
  }
  RA2_OPDEL(); /*0x4d2e9b*/
    v7 = a2 + *((unsigned int *)this + 32);
  *(unsigned int *)v3 = v3; /*0x4d2ea8*/
    *((unsigned int *)this + 32) = v7;
    *((unsigned int *)this + 64) = 0;
  return 1; /*0x4d2eb4*/
}
} // namespace gamemd

// 0x4E0550
namespace gamemd {
int Vector::Find(unsigned int * a2)
{
  void * v2;
  int result; // eax
  unsigned int *i; // ecx

  v2 = (void *)(*(unsigned int *)&this->q010);
  result = 0; /*0x4e0553*/
  if ( v2 <= 0 ) /*0x4e0558*/
    return -1; /*0x4e056f*/
    for ( i = (unsigned int *)*((unsigned int *)this + 4); *i != *a2; ++i )
  {
    if ( ++result >= (int)(v2) ) /*0x4e056d*/
      return -1; /*0x4e056d*/
  }
  return result; /*0x4e0572*/
}
}
// 0x76F0B0
namespace gamemd {
BOOL Vector::HasCapacity()
{
    return *((unsigned int *)this + 8) < *(unsigned int *)(*((unsigned int *)this + 4) + 16);
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
    if ( *this < *((unsigned int *)this + 4) )
    return 0; /*0x7aeecd*/
  v4 = 2 * v2; /*0x7aeed4*/
  v6 = 2 * v2; /*0x7aeedb*/
  if ( 2 * v2 < 10 ) /*0x7aeedf*/
  {
    v6 = 10; /*0x7aeee1*/
    v4 = 10; /*0x7aeee9*/
  }
  v5 = (void *)RA2_OPNEW(4 * v4); /*0x7aeefc*/
  memset(v5, 0, 4 * ((unsigned int)(4 * v4) >> 2)); /*0x7aef0a*/
    if ( *((unsigned int *)this + 8) )
  {
        qmemcpy(v5, (const void *)*((unsigned int *)this + 8), 4 * *this);
    v4 = v6; /*0x7aef31*/
  }
  RA2_OPDEL(this->Vector_field_0x8); /*0x7aef39*/
    *((unsigned int *)this + 4) = v4;
    *((unsigned int *)this + 8) = (int)v5;
  return 1; /*0x7aeecf*/
}
} // namespace gamemd
