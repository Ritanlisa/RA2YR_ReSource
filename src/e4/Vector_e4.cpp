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

  result = Math::Sqrt((double)*this * (double)*this + (double)*((char *)this + 1) * (double)*((char *)this + 1)); /*0x4c1b69*/
  Math::RoundToInt(result); /*0x4c1b71*/
  return result; /*0x4c1b6e*/

}
}
// 0x512D30
namespace gamemd {
void Vector::Cleanup()
{

  if ( *((unsigned int *)this + 1) && *((unsigned char *)this + 13) ) /*0x512d3d*/
  {
    RA2_OPDEL(*(void **)((char *)this + 4)); /*0x512d43*/
    *((unsigned int *)this + 1) = 0; /*0x512d4b*/
  }
  *((unsigned char *)this + 13) = 0; /*0x512d4e*/
  *((unsigned int *)this + 2) = 0; /*0x512d51*/

}
}
// 0x513100
namespace gamemd {
void Vector::Destructor()
{

  if ( *((unsigned int *)this + 1) && *((unsigned char *)this + 13) ) /*0x51310d*/
  {
    RA2_OPDEL(*(void **)((char *)this + 4)); /*0x513113*/
    *((unsigned int *)this + 1) = 0; /*0x51311b*/
  }
  *((unsigned char *)this + 13) = 0; /*0x51311e*/
  *((unsigned int *)this + 2) = 0; /*0x513121*/

}
}
// 0x5AE890
namespace gamemd {
void Vector::MatrixMulVectorMath(float a2, float a3, float a4)
{

  *((unsigned int *)this + 3) = a3 * *((unsigned int *)this + 1) + a4 * *((unsigned int *)this + 2) + a2 * *this + *((unsigned int *)this + 3); /*0x5ae8ab*/
  *((unsigned int *)this + 7) = a2 * *((unsigned int *)this + 4) + a3 * *((unsigned int *)this + 5) + a4 * *((unsigned int *)this + 6) + *((unsigned int *)this + 7); /*0x5ae8ca*/
  *((unsigned int *)this + 11) = a2 * *((unsigned int *)this + 8) + a3 * *((unsigned int *)this + 9) + a4 * *((unsigned int *)this + 10) + *((unsigned int *)this + 11); /*0x5ae8e9*/

}
}
// 0x67ABE0
namespace gamemd {
void Vector::Cleanup2()
{

  if ( *((unsigned int *)this + 1) && *((unsigned char *)this + 13) ) /*0x67abed*/
  {
    RA2_OPDEL(*(void **)((char *)this + 4)); /*0x67abf3*/
    *((unsigned int *)this + 1) = 0; /*0x67abfb*/
  }
  *((unsigned char *)this + 13) = 0; /*0x67abfe*/
  *((unsigned int *)this + 2) = 0; /*0x67ac01*/

}
}
// 0x41C2E0
namespace gamemd {
unsigned short * Vector::ToFacingMath(unsigned short * a2)
{

  double v3; // st7
  double v5; // [esp+Ch] [ebp-8h]

  v5 = Math::Sqrt(*this * *this + *((unsigned int *)this + 1) * *((unsigned int *)this + 1)); /*0x41c307*/
  v3 = Math::CalcAngle(*((unsigned int *)this + 2), v5); /*0x41c31a*/
  *a2 = Math::RoundToInt((v3 - 1.570796326794897) * -10430.06004058427); /*0x41c338*/
  return a2; /*0x41c337*/

}
} // namespace gamemd

// 0x43AE50
namespace gamemd {
void Vector::Clear()
{

  if ( *((unsigned char *)this + 8) ) /*0x43ae53*/
    RA2_OPDEL(*(void **)this); /*0x43ae5d*/
  *(unsigned int *)this = 0; /*0x43ae65*/
  *((unsigned int *)this + 1) = 0; /*0x43ae6b*/
  *((unsigned char *)this + 8) = 0; /*0x43ae72*/

}
} // namespace gamemd

// 0x45AE10
namespace gamemd {
int Vector::RemoveAt( AbstractClass * aP1)
{

  int v2; // edx
  AbstractClass *v3; // eax
  int v4; // edx

  v2 = *((unsigned int *)this + 4); /*0x45ae10*/
  v3 = aP1; /*0x45ae13*/
  if ( (int)aP1 >= v2 ) /*0x45ae19*/
    return 0; /*0x45ae3c*/
  v4 = v2 - 1; /*0x45ae1b*/
  *((unsigned int *)this + 4) = v4; /*0x45ae1e*/
  if ( (int)aP1 < v4 ) /*0x45ae21*/
  {
    do /*0x45ae34*/
    {
      v3 = (AbstractClass *)((char *)v3 + 1); /*0x45ae27*/
      *(unsigned int *)(*((unsigned int *)this + 1) + 4 * (unsigned int)v3 - 4) = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * (unsigned int)v3); /*0x45ae2b*/
    }
    while ( (int)v3 < *((unsigned int *)this + 4) ); /*0x45ae34*/
  }
  return 1; /*0x45ae39*/

}
} // namespace gamemd

// 0x4D2E40
namespace gamemd {
void Vector::ReallocDynamic(int a2)
{

  char *v3; // edi
  int i; // ecx
  int v5; // eax
  unsigned int *v6; // edx
  int v7; // eax

  if ( a2 < 0 ) /*0x4d2e4c*/
    return 0; /*0x4d2e4c*/
  v3 = (char *)RA2_OPNEW(8 * (a2 + *(unsigned int *)(this + 8))); /*0x4d2e60*/
  if ( !v3 ) /*0x4d2e67*/
    return 0; /*0x4d2ec0*/
  for ( i = 0; i < *(unsigned int *)(this + 4); *(unsigned int *)&v3[v5 + 4] = v6[1] ) /*0x4d2e75*/
  {
    v5 = 8 * i; /*0x4d2e79*/
    v6 = (unsigned int *)(*(unsigned int *)this + 8 * i++); /*0x4d2e82*/
    *(unsigned int *)&v3[v5] = *v6; /*0x4d2e87*/
  }
  RA2_OPDEL(*(void **)this); /*0x4d2e9b*/
  v7 = a2 + *(unsigned int *)(this + 8); /*0x4d2ea6*/
  *(unsigned int *)this = v3; /*0x4d2ea8*/
  *(unsigned int *)(this + 8) = v7; /*0x4d2eaa*/
  *(unsigned int *)(this + 16) = 0; /*0x4d2ead*/
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

  v2 = *((char *)this + 4); /*0x4e0550*/
  result = 0; /*0x4e0553*/
  if ( v2 <= 0 ) /*0x4e0558*/
    return -1; /*0x4e056f*/
  for ( i = (unsigned int *)*((char *)this + 1); *i != *a2; ++i ) /*0x4e055e*/
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

  return *((unsigned int *)this + 2) < *(unsigned int *)(*((unsigned int *)this + 1) + 16); /*0x76f0bd*/

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
  if ( *this < *((char *)this + 1) ) /*0x7aeecb*/
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
  if ( *((char *)this + 2) ) /*0x7aef13*/
  {
    qmemcpy(v5, (const void *)*((char *)this + 2), 4 * *this); /*0x7aef28*/
    v4 = v6; /*0x7aef31*/
  }
  __3_YAXPAX_Z((void *)*((char *)this + 2)); /*0x7aef39*/
  *((char *)this + 1) = v4; /*0x7aef41*/
  *((char *)this + 2) = (int)v5; /*0x7aef44*/
  return 1; /*0x7aeecf*/

}
} // namespace gamemd
