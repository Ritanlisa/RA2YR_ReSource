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
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C1B50)
}
}
// 0x512D30
namespace gamemd {
int Vector::Cleanup()
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
int Vector::Destructor()
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
//L-fix     fld qword ptr [esi+8]
//L-fix     fld qword ptr [esi]
//L-fix     fld st
//L-fix     fmul st, st(1)
//L-fix     fld st(2)
//L-fix     fmul st, st(3)
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
  return (unsigned short *)((int)a2); /*0x41c337*/

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
int Vector::RemoveAt(int aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x45AE10)
}
} // namespace gamemd

// 0x4D2E40
namespace gamemd {
void Vector::ReallocDynamic(int a2)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4D2E40)
}
} // namespace gamemd

// 0x4E0550
namespace gamemd {
int Vector::Find(unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E0550)
}
}
// 0x76F0B0
namespace gamemd {
BOOL Vector::HasCapacity()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x76F0B0)
}
} // namespace gamemd

// 0x7AEEC0
namespace gamemd {
char Vector::Grow()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7AEEC0)
}
} // namespace gamemd
