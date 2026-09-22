// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_578640_e4.hpp"
#include "e4/classes/Math_e4.hpp"

// 0x40FFFF
namespace gamemd {
int Math_InitDegToRad()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax

  if ( a1 | a2 ) /*0x40ffff*/
    return sub_40FF90(); /*0x40ff8f*/
  DataGlobal_887648 = 0.0174532925199433 * 90.0; /*0x41001c*/
  return result; /*0x410022*/
}
}
} // namespace gamemd

// 0x41C350
namespace gamemd {
void Math::Hypotenuse2D()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  Math::Sqrt(*this * *this + this->q004 * this->q004); /*0x41c369*/
}
}
} // namespace gamemd

// 0x4CAC40
namespace gamemd {
void Math_Sqrt()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// local variable allocation has failed, the output may be wrong!
{
  AbstractClass *aP0a; // [esp+4h] [ebp+4h]

  double v1 = *(double *)&aP0; /*0x4cac40*/
  if ( *(double *)&aP0 == 0.0 ) /*0x4cac4f*/
    return 0.0; /*0x4cac53*/
  if ( *(double *)&aP0 <= 0.0 ) /*0x4cac65*/
    v1 = *(double *)&aP0 * -1.0; /*0x4cac67*/
  *(float *)&aP0a = v1; /*0x4cac6d*/
  unsigned int v3 = (unsigned int)&unk_7FFFFF & (unsigned int)aP0a; /*0x4cac77*/
  unsigned int v4 = ((unsigned int)aP0a >> 23) - 127; /*0x4cac80*/
  if ( (v4 & 1) != 0 ) /*0x4cac85*/
    v3 |= (unsigned int)&unk_800000; /*0x4cac87*/
  return COERCE_FLOAT(((((__int16)v4 >> 1) + 127) << 23) + dword_8650BC[v3 >> 10]); /*0x4cac59*/
}
}
} // namespace gamemd

// 0x4CACB0
namespace gamemd {
void Math_SinCos()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// local variable allocation has failed, the output may be wrong!
{

  int v1 = Math::RoundToInt(*(double *)&aP0 * flt_8223B0); /*0x4cacba*/
  char v2 = v1 & 1; /*0x4cacc4*/
  signed int v3 = (v1 / 2) & 0x80001FFF; /*0x4cacc9*/
  if ( v3 < 0 )
    v3 = (((_WORD)v3 - 1) | 0xFFFFE000) + 1 + ((int)((((_WORD)v3 - 1) | 0xFFFFE000) + 1) < 0 ? 0x2000 : 0);
  if ( v2 && v3 < 0x1FFF ) /*0x4cace7*/
    ++v3; /*0x4cace9*/
  return *(float *)&stru_84DD9C[4696][4 * v3 + 144]; /*0x4cacf1*/
}
}
} // namespace gamemd

// 0x4CAD00
namespace gamemd {
void Math_ArcTan2()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// local variable allocation has failed, the output may be wrong!
{

  int v1 = Math::RoundToInt(*(double *)&aP0 * flt_8223B4); /*0x4cad0a*/
  char v2 = v1 & 1; /*0x4cad14*/
  signed int v3 = (v1 / 2) & 0x80001FFF; /*0x4cad19*/
  if ( v3 >= 0 || (v3 = (((_WORD)v3 - 1) | 0xFFFFE000) + 1, v3 >= 0) ) /*0x4cad27*/
    int v4 = v3 + 2048; /*0x4cad30*/
  else
    v4 = v3 + 10240; /*0x4cad29*/
  if ( v2 && v4 < 10239 ) /*0x4cad3e*/
    ++v4; /*0x4cad40*/
  return *(float *)&stru_84DD9C[4696][4 * v4 + 144]; /*0x4cad48*/
}
}
} // namespace gamemd

// 0x4CAD50
namespace gamemd {
int Math::Sin(double a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  signed int v1 = Math::RoundToInt(a1 * 651.8986469044033) & 0x80000FFF; /*0x4cad5f*/
  if ( v1 < 0 )
    v1 = (((_WORD)v1 - 1) | 0xFFFFF000) + 1 + ((int)((((_WORD)v1 - 1) | 0xFFFFF000) + 1) < 0 ? 0x1000 : 0);
  return DataGlobal_85D0A4[v1]; /*0x4cad7b*/
}
}
} // namespace gamemd

// 0x4CAE30
namespace gamemd {
void Math_CalcAngle()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// local variable allocation has failed, the output may be wrong!
{
  double result; // st7

  double v8; // [esp+10h] [ebp+Ch]
  float v7 = v8; /*0x4cae35*/
  float v9 = *(double *)&aP0; /*0x4cae3d*/
  double v3 = v9; /*0x4cae4b*/
  char v4; // c3
  if ( v4 ) /*0x4cae54*/
  {
    if ( v3 == 0.0 ) /*0x4cae61*/
    {
      return 0.0; /*0x4cae63*/
    }
    else if ( v9 <= 0.0 ) /*0x4cae7a*/
    {
      return -1.5707964; /*0x4cae84*/
    }
    else
    {
      return 1.5707964; /*0x4cae7c*/
    }
  }
  else
  {
    int v6 = abs32(Math::RoundToInt(v3 / v7 / flt_8650B8)); /*0x4cae9e*/
    if ( v6 >= 4097 ) /*0x4caea5*/
      result = 1.5707964; /*0x4caeb0*/
    else
      result = *(float *)&stru_84DD9C[22428][4 * v6 + 56188]; /*0x4caea7*/
    if ( v7 < 0.0 ) /*0x4caec5*/
      result = 3.141592653589793 - result; /*0x4caec7*/
    if ( v9 < 0.0 ) /*0x4caedc*/
      return -result; /*0x4caede*/
  }
  return result; /*0x4cae6a*/
}
}
} // namespace gamemd

// 0x5AE750
namespace gamemd {
void * Math::BuildRotationMatrix(float * a2, float a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  double v3 = a3; /*0x5ae762*/
  float v16 = Math::ArcTan2(a3); /*0x5ae76f*/
  double v5 = Math::SinCos(v3); /*0x5ae775*/
  double v7 = *a2 * *a2; /*0x5ae787*/
  *this = (1.0 - v7) * v16 + v7; /*0x5ae797*/
  double v8 = 1.0 - v16; /*0x5ae7a1*/
  this->q004 = *a2 * a2[1] * v8 - v5 * a2[2]; /*0x5ae7b3*/
  double v9 = a2[2] * *a2 * v8; /*0x5ae7bb*/
  double v10 = v5 * a2[1]; /*0x5ae7bf*/
  this->q00C = 0.0; /*0x5ae7c2*/
  this->q008 = v9 + v10; /*0x5ae7c7*/
  this->q004 = *a2 * a2[1] * v8 + v5 * a2[2]; /*0x5ae7d8*/
  double v11 = a2[1] * a2[1]; /*0x5ae7e0*/
  this->q005 = (1.0 - v11) * v16 + v11; /*0x5ae7f0*/
  double v12 = a2[2] * a2[1] * v8; /*0x5ae7fb*/
  double v13 = v5 * *a2; /*0x5ae7ff*/
  this->q007 = 0.0; /*0x5ae801*/
  this->q006 = v12 - v13; /*0x5ae806*/
  this->q008 = a2[2] * *a2 * v8 - v5 * a2[1]; /*0x5ae817*/
  *(this + 9) = a2[2] * a2[1] * v8 + v5 * *a2; /*0x5ae82b*/
  double v14 = a2[2] * a2[2]; /*0x5ae835*/
  *(this + 11) = 0.0; /*0x5ae83f*/
  *(this + 10) = (1.0 - v14) * v16 + v14; /*0x5ae84a*/
  return this; /*0x5ae851*/
}
}
} // namespace gamemd

// 0x5F6560
namespace gamemd {
int Math::DistSq2D(TechnoClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  _BYTE v6[8]; // [esp+4h] [ebp-Ch] BYREF
  int * v2 = (int *)this->vt_slot_72(v6); /*0x5f656e*/
  int v3 = *v2; /*0x5f6574*/
  int v4 = v2[1]; /*0x5f6576*/
  int v7 = v2[2]; /*0x5f657c*/
  return (v3 - *(_DWORD *)aP1->__pad_0) * (v3 - *(_DWORD *)aP1->__pad_0) /*0x5f658b*/
       + (v4 - *(_DWORD *)&aP1->__pad_0[4]) * (v4 - *(_DWORD *)&aP1->__pad_0[4]);
}
}
} // namespace gamemd

// 0x646590
namespace gamemd {
unsigned int * Math::QuaternionSlerp(unsigned int * a1, float * a2, float * a3, float a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  double v6 = a2[3] * a3[3]; /*0x6465a6*/
  double v7 = a2[2] * a3[2]; /*0x6465ac*/
  int v27 = 0; /*0x6465af*/
  int v28 = 0; /*0x6465b7*/
  int v29 = 0; /*0x6465bf*/
  int v30 = 1065353216; /*0x6465c7*/
  double v22 = v6 + v7 + a2[1] * a3[1] + *a2 * *a3; /*0x6465df*/
  if ( v22 + 1.0 <= 0.00001 ) /*0x6465f4*/
  {
    double v25 = Math::SinCos((1.0 - a4) * 1.570796326794895); /*0x6466c1*/
    double v13 = Math::SinCos(a4 * 1.570796326794895); /*0x6466d1*/
    float * v14 = a2; /*0x6466df*/
    int v15 = 4; /*0x6466e3*/
    do /*0x6466fd*/
    {
      double v16 = *(float *)((char *)v14 + (char *)a3 - (char *)a2) * v13; /*0x6466eb*/
      double v17 = *v14++ * v25; /*0x6466ef*/
      --v15; /*0x6466f6*/
      *(float *)((char *)v14 + (char *)&v27 - (char *)a2 - 4) = v16 + v17; /*0x6466f9*/
    }
    while ( v15 ); /*0x6466fd*/
  }
  else
  {
  double v24; // [esp+20h] [ebp-20h]
  double v8; // st7
    if ( 1.0 - v22 <= 0.00001 ) /*0x64660f*/
    {
      v24 = 1.0 - a4; /*0x646678*/
      v8 = a4; /*0x64667c*/
    }
    else
    {
      double v23 = Math::ArcTan2_Table(v22); /*0x646620*/
      double v26 = Math::SinCos(v23); /*0x646633*/
      v24 = Math::SinCos((1.0 - a4) * v23) / v26; /*0x646653*/
      v8 = Math::SinCos(a4 * v23) / v26; /*0x646666*/
    }
    float * v9 = a2; /*0x646685*/
    int v10 = 4; /*0x646689*/
    do /*0x6466a3*/
    {
      double v11 = *(float *)((char *)v9 + (char *)a3 - (char *)a2) * v8; /*0x646691*/
      double v12 = *v9++ * v24; /*0x646695*/
      --v10; /*0x64669c*/
      *(float *)((char *)v9 + (char *)&v27 - (char *)a2 - 4) = v11 + v12; /*0x64669f*/
    }
    while ( v10 ); /*0x6466a3*/
  }
  int v18 = v28; /*0x646703*/
  *a1 = v27; /*0x64670b*/
  int v19 = v29; /*0x64670d*/
  a1[1] = v18; /*0x646713*/
  int v20 = v30; /*0x646716*/
  a1[2] = v19; /*0x64671a*/
  a1[3] = v20; /*0x64671d*/
  return a1; /*0x646722*/
}
}
} // namespace gamemd

// 0x7C5F00
namespace gamemd {
void Math_RoundToInt()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  return (__int64)a1; /*0x7c5f22*/
}
}
} // namespace gamemd

// 0x473650
namespace gamemd {
void Math::InitArcTan()
{
{
    DataGlobal_89E230 = Math::ArcTan((double)DataGlobal_89E278 * 0.00390625);
}
}
} // namespace gamemd

// 0x4CADB0
namespace gamemd {
double Math::ArcTan2_Table(double a1)
{
{
    return 1.570796326794897 - *((float *)&DataGlobal_859094 - Math::RoundToInt((a1 + 1.0) * -2048.0));
}
}
} // namespace gamemd

// 0x4CADE0
namespace gamemd {
double Math::ArcTan(double a1)
{
{
    int v2;
    double result;
    float v4;
    v4 = a1;
    v2 = abs32(Math::RoundToInt(a1 / DataGlobal_8650B8));
    if ( v2 >= 4097 )
    result = 1.5707964;
    else
    result = DataGlobal_8610B4[v2];
    if ( v4 < 0.0 )
    return -result;
    return result;
}
}
} // namespace gamemd

// 0x5B2950
namespace gamemd {
IUnknown * Math::Sub16(BuildingTypeClass * aP1, IUnknown * aP2)
{
{
    LOWORD(aP2) = *(void**)this - LOWORD(aP2->field_0);
    *(int *)aP1->vtable0 = aP2;
    return (IUnknown *)aP1;
}
}
} // namespace gamemd

// 0x5B2990
namespace gamemd {
bool Math::Abs16Cmp(IUnknown * aP1, IUnknown * aP2)
{
{
    return abs16(aP2->field_0) >= (int)abs16(*(void**)this - LOWORD(aP1->field_0));
}
}
} // namespace gamemd

// 0x5C7DB0
namespace gamemd {
void sub_5C7DB0(unsigned short * a1, unsigned short * a2, unsigned short a3, int a4)
{
{
    int v4;
    unsigned int v5;
    unsigned short v6;
    unsigned int v7;
    unsigned int v8;
    v4 = a4;
    v5 = 0;
    if ( a4 <= 0 )
  {
    *a1 = *a1;
  }
    else
  {
    do
    {
    v6 = *a2++;
    v7 = v5 + (unsigned short)*a1 + a3 * v6;
    *a1++ = v7;
    v8 = HIWORD(v7);
    --v4;
    v5 = v8;
    }
    while ( v4 );
    *a1 += v8;
  }
}
}
} // namespace gamemd
