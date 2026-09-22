// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/Math_e4.hpp"

// 0x4C1B50
namespace gamemd {
double Math_Vector2D_Magnitude()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void Math_Vector2D_Magnitude(int *this)
{
  double result; // st7

  result = Math::Sqrt((double)*this * (double)*this + (double)this->vtable2 * (double)this->vtable2); /*0x4c1b69*/
  Math::RoundToInt(result); /*0x4c1b71*/
  return result; /*0x4c1b6e*/
}
}
} // namespace gamemd

// 0x512D30
namespace gamemd {
void Vector::Cleanup()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void Vector_Cleanup(int this)
{
  if ( this->Vector_field_0x4 && *(_BYTE *)(this + 13) ) /*0x512d3d*/
  {
    __3_YAXPAX_Z(this->q004); /*0x512d43*/
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
void Vector_Destructor(int this)
{
  if ( this->Vector_field_0x4 && *(_BYTE *)(this + 13) ) /*0x51310d*/
  {
    __3_YAXPAX_Z(this->q004); /*0x513113*/
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
void Math_MatrixMulVector(float *this, float a2, float a3, float a4)
{
  this->IsInitialized = a3 * this->q004 + a4 * this->q008 + a2 * *this + this->IsInitialized; /*0x5ae8ab*/
  this->q007 = a2 * this->q004 + a3 * this->CapacityIncrement + a4 * this->q006 + this->q007; /*0x5ae8ca*/
  this->q00B = a2 * this->q008 + a3 * this->q009 + a4 * this->q00A + this->q00B; /*0x5ae8e9*/
}
}
} // namespace gamemd

// 0x67ABE0
namespace gamemd {
void Vector::Cleanup2()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void Vector_Cleanup2(int this)
{
  if ( this->Vector_field_0x4 && *(_BYTE *)(this + 13) ) /*0x67abed*/
  {
    __3_YAXPAX_Z(this->q004); /*0x67abf3*/
    this->Vector_field_0x4 = 0; /*0x67abfb*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x67abfe*/
  this->Vector_field_0x8 = 0; /*0x67ac01*/
}
}
} // namespace gamemd

// 0x41C2E0
namespace gamemd {
unsigned short * Vector::ToFacingMath(unsigned short * a2)
{
{
    double v3;
    double v5;
    v5 = Math::Sqrt(*(void**)this * *(void**)(this) + this->Items *(void**)this->Items);
    v3 = Math::CalcAngle(this->Capacity, v5);
    *a2 = Math::RoundToInt((v3 - 1.570796326794897) * -10430.06004058427);
    return a2;
}
}
} // namespace gamemd

// 0x43AE50
namespace gamemd {
void Vector::Clear()
{
{
    if ( (unsigned char)this->Vector_field_0x8 )
    __3_YAXPAX_Z(*(void **)this);
    *(int *)this = 0;
    this->Vector_field_0x4 = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x45AE10
namespace gamemd {
char Vector::RemoveAt(AbstractClass * aP1)
{
{
    int v2;
    AbstractClass *v3;
    int v4;
    v2 = this->Count;
    v3 = aP1;
    if ( (int)aP1 >= v2 )
    return 0;
    v4 = v2 - 1;
    this->Count = v4;
    if ( (int)aP1 < v4 )
  {
    do
    {
    v3 = (AbstractClass *)((char *)(v3) + 1);
    *(int *)(this->Items + 4 * (int)v3 - 4) = *(int *)(this->Items + 4 * (int)v3);
    }
    while ( (int)v3 < this->Count );
  }
    return 1;
}
}
} // namespace gamemd

// 0x4D2E40
namespace gamemd {
char Vector::ReallocDynamic(int a2)
{
{
    char *v3;
    int i;
    int v5;
    int *v6;
    int v7;
    if ( a2 < 0 )
    return 0;
    v3 = (char *)__2_YAPAXI_Z(8 * (a2 + this->Vector_field_0x8));
    if ( !v3 )
    return 0;
    for ( i = 0; i < this->Vector_field_0x4; *(int *)&v3[v5 + 4] = v6[1] )
  {
    v5 = 8 * i;
    v6 = (int *)(*(int *)(this) + 8 * i++);
    *(int *)&v3[v5] = *v6;
  }
    __3_YAXPAX_Z(*(void **)this);
    v7 = a2 + this->Vector_field_0x8;
    *(int *)this = v3;
    this->Vector_field_0x8 = v7;
    this->Vector_field_0x10 = 0;
    return 1;
}
}
} // namespace gamemd

// 0x4E0550
namespace gamemd {
int Vector::Find(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int *)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
} // namespace gamemd

}
// 0x76F0B0
namespace gamemd {
BOOL Vector::HasCapacity()
{
{
    return this->Capacity < *(int *)(this->Items + 16);
}
}
} // namespace gamemd

// 0x7AEEC0
namespace gamemd {
char Vector::Grow()
{
{
    int v2;
    int v4;
    void *v5;
    int v6;
    v2 = *(void**)this;
    if ( *(void**)this < this->Items )
    return 0;
    v4 = 2 * v2;
    v6 = 2 * v2;
    if ( 2 * v2 < 10 )
  {
    v6 = 10;
    v4 = 10;
  }
    v5 = __2_YAPAXI_Z(4 * v4);
    memset(v5, 0, 4 * ((unsigned int)(4 * v4) >> 2));
    if ( this->Capacity )
  {
    qmemcpy(v5, (const void *)this->Capacity, 4 * *(void**)this);
    v4 = v6;
  }
    __3_YAXPAX_Z((void *)this->Capacity);
    this->Items = v4;
    this->Capacity = (int)v5;
    return 1;
}
}
} // namespace gamemd
