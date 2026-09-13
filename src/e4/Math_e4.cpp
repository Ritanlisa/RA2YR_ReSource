// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Math_e4.hpp"

// 0x40FFFF
namespace gamemd {
int Math_InitDegToRad()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __usercall Math_InitDegToRad@<eax>(char a1@<cf>, char a2@<zf>)
{
  int result; // eax

  if ( a1 | a2 ) /*0x40ffff*/
    return sub_40FF90(); /*0x40ff8f*/
  MEMORY[0x887648] = 0.0174532925199433 * 90.0; /*0x41001c*/
  return result; /*0x410022*/
}
}
} // namespace gamemd

// 0x41C350
namespace gamemd {
void Math::Hypotenuse2D()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall Math_Hypotenuse2D(double *this)
{
  Math::Sqrt(*this * *this + *(this + 1) * *(this + 1)); /*0x41c369*/
}
}
} // namespace gamemd

// 0x473650
namespace gamemd {
void Math::InitArcTan()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void Math_InitArcTan()
{
  MEMORY[0x89E230] = Math::ArcTan((double)MEMORY[0x89E278] * 0.00390625); /*0x473667*/
}
}
} // namespace gamemd

// 0x4CAC40
namespace gamemd {
int Math_Sqrt()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// local variable allocation has failed, the output may be wrong!
double __cdecl Math::Sqrt(AbstractClass *aP0)
{
  double v1; // st7
  unsigned int v3; // ecx
  unsigned int v4; // eax
  AbstractClass *aP0a; // [esp+4h] [ebp+4h]

  v1 = *(double *)&aP0; /*0x4cac40*/
  if ( *(double *)&aP0 == 0.0 ) /*0x4cac4f*/
    return 0.0; /*0x4cac53*/
  if ( *(double *)&aP0 <= 0.0 ) /*0x4cac65*/
    v1 = *(double *)&aP0 * -1.0; /*0x4cac67*/
  *(float *)&aP0a = v1; /*0x4cac6d*/
  v3 = (unsigned int)&unk_7FFFFF & (unsigned int)aP0a; /*0x4cac77*/
  v4 = ((unsigned int)aP0a >> 23) - 127; /*0x4cac80*/
  if ( (v4 & 1) != 0 ) /*0x4cac85*/
    v3 |= (unsigned int)&unk_800000; /*0x4cac87*/
  return COERCE_FLOAT(((((__int16)v4 >> 1) + 127) << 23) + dword_8650BC[v3 >> 10]); /*0x4cac59*/
}
}
} // namespace gamemd

// 0x4CACB0
namespace gamemd {
int Math_SinCos()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// local variable allocation has failed, the output may be wrong!
double __cdecl Math::SinCos(IUnknown *aP0)
{
  int v1; // eax
  char v2; // cl
  signed int v3; // eax

  v1 = Math::RoundToInt(*(double *)&aP0 * flt_8223B0); /*0x4cacba*/
  v2 = v1 & 1; /*0x4cacc4*/
  v3 = (v1 / 2) & 0x80001FFF; /*0x4cacc9*/
  if ( v3 < 0 )
    v3 = (((_WORD)v3 - 1) | 0xFFFFE000) + 1 + ((int)((((_WORD)v3 - 1) | 0xFFFFE000) + 1) < 0 ? 0x2000 : 0);
  if ( v2 && v3 < 0x1FFF ) /*0x4cace7*/
    ++v3; /*0x4cace9*/
  return *(float *)&stru_84DD9C.__pad_1258[4 * v3 + 144]; /*0x4cacf1*/
}
}
} // namespace gamemd

// 0x4CAD00
namespace gamemd {
int Math_ArcTan2()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// local variable allocation has failed, the output may be wrong!
double __cdecl Math::ArcTan2(IUnknown *aP0)
{
  int v1; // eax
  char v2; // cl
  signed int v3; // eax
  int v4; // eax

  v1 = Math::RoundToInt(*(double *)&aP0 * flt_8223B4); /*0x4cad0a*/
  v2 = v1 & 1; /*0x4cad14*/
  v3 = (v1 / 2) & 0x80001FFF; /*0x4cad19*/
  if ( v3 >= 0 || (v3 = (((_WORD)v3 - 1) | 0xFFFFE000) + 1, v3 >= 0) ) /*0x4cad27*/
    v4 = v3 + 2048; /*0x4cad30*/
  else
    v4 = v3 + 10240; /*0x4cad29*/
  if ( v2 && v4 < 10239 ) /*0x4cad3e*/
    ++v4; /*0x4cad40*/
  return *(float *)&stru_84DD9C.__pad_1258[4 * v4 + 144]; /*0x4cad48*/
}
}
} // namespace gamemd

// 0x4CAD50
namespace gamemd {
double Math::Sin(double a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
double __cdecl Math_Sin(double a1)
{
  signed int v1; // eax

  v1 = Math::RoundToInt(a1 * 651.8986469044033) & 0x80000FFF; /*0x4cad5f*/
  if ( v1 < 0 )
    v1 = (((_WORD)v1 - 1) | 0xFFFFF000) + 1 + ((int)((((_WORD)v1 - 1) | 0xFFFFF000) + 1) < 0 ? 0x1000 : 0);
  return MEMORY[0x85D0A4][v1]; /*0x4cad7b*/
}
}
} // namespace gamemd

// 0x4CADB0
namespace gamemd {
double Math::ArcTan2_Table(double a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
double __cdecl Math_ArcTan2_Table(double a1)
{
  return 1.570796326794897 - *((float *)&MEMORY[0x859094] - Math::RoundToInt((a1 + 1.0) * -2048.0)); /*0x4cadd7*/
}
}
} // namespace gamemd

// 0x4CADE0
namespace gamemd {
double Math::ArcTan(double a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
double __cdecl Math_ArcTan(double a1)
{
  int v2; // eax
  double result; // st7
  float v4; // [esp+4h] [ebp+4h]

  v4 = a1; /*0x4cade4*/
  v2 = abs32(Math::RoundToInt(a1 / flt_8650B8)); /*0x4cadf6*/
  if ( v2 >= 4097 ) /*0x4cadfd*/
    result = 1.5707964; /*0x4cae08*/
  else
    result = MEMORY[0x8610B4][v2]; /*0x4cadff*/
  if ( v4 < 0.0 ) /*0x4cae1d*/
    return -result; /*0x4cae1f*/
  return result; /*0x4cae21*/
}
}
} // namespace gamemd

// 0x4CAE30
namespace gamemd {
int Math_CalcAngle()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// local variable allocation has failed, the output may be wrong!
double __cdecl Math::CalcAngle(AbstractClass *aP0, double a2)
{
  double v3; // st7
  char v4; // c3
  double result; // st7
  int v6; // eax
  float v7; // [esp+0h] [ebp-4h]
  double v8; // [esp+10h] [ebp+Ch]
  float v9; // [esp+10h] [ebp+Ch]

  v7 = v8; /*0x4cae35*/
  v9 = *(double *)&aP0; /*0x4cae3d*/
  v3 = v9; /*0x4cae4b*/
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
    v6 = abs32(Math::RoundToInt(v3 / v7 / flt_8650B8)); /*0x4cae9e*/
    if ( v6 >= 4097 ) /*0x4caea5*/
      result = 1.5707964; /*0x4caeb0*/
    else
      result = *(float *)&stru_84DD9C.__pad_579C[4 * v6 + 56188]; /*0x4caea7*/
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
float * Math::BuildRotationMatrix(float * a2, float a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
float *__thiscall Math_BuildRotationMatrix(float *this, float *a2, float a3)
{
  double v3; // kr00_8
  double v5; // st7
  double v7; // st6
  double v8; // st6
  double v9; // st5
  double v10; // st4
  double v11; // st5
  double v12; // st5
  double v13; // st4
  double v14; // st7
  float v16; // [esp+10h] [ebp+8h]

  v3 = a3; /*0x5ae762*/
  v16 = Math::ArcTan2(a3); /*0x5ae76f*/
  v5 = Math::SinCos(v3); /*0x5ae775*/
  v7 = *a2 * *a2; /*0x5ae787*/
  *this = (1.0 - v7) * v16 + v7; /*0x5ae797*/
  v8 = 1.0 - v16; /*0x5ae7a1*/
  *(this + 1) = *a2 * a2[1] * v8 - v5 * a2[2]; /*0x5ae7b3*/
  v9 = a2[2] * *a2 * v8; /*0x5ae7bb*/
  v10 = v5 * a2[1]; /*0x5ae7bf*/
  *(this + 3) = 0.0; /*0x5ae7c2*/
  *(this + 2) = v9 + v10; /*0x5ae7c7*/
  *(this + 4) = *a2 * a2[1] * v8 + v5 * a2[2]; /*0x5ae7d8*/
  v11 = a2[1] * a2[1]; /*0x5ae7e0*/
  *(this + 5) = (1.0 - v11) * v16 + v11; /*0x5ae7f0*/
  v12 = a2[2] * a2[1] * v8; /*0x5ae7fb*/
  v13 = v5 * *a2; /*0x5ae7ff*/
  *(this + 7) = 0.0; /*0x5ae801*/
  *(this + 6) = v12 - v13; /*0x5ae806*/
  *(this + 8) = a2[2] * *a2 * v8 - v5 * a2[1]; /*0x5ae817*/
  *(this + 9) = a2[2] * a2[1] * v8 + v5 * *a2; /*0x5ae82b*/
  v14 = a2[2] * a2[2]; /*0x5ae835*/
  *(this + 11) = 0.0; /*0x5ae83f*/
  *(this + 10) = (1.0 - v14) * v16 + v14; /*0x5ae84a*/
  return this; /*0x5ae851*/
}
}
} // namespace gamemd

// 0x5B2950
namespace gamemd {
IUnknown * Math::Sub16(BuildingTypeClass * aP1, IUnknown * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
IUnknown *__thiscall Math::Sub16(_WORD *this, BuildingTypeClass *aP1, IUnknown *aP2)
{
  LOWORD(aP2) = *this - LOWORD(aP2->field_0); /*0x5b295a*/
  *(_DWORD *)aP1->vtable0 = aP2; /*0x5b2967*/
  return (IUnknown *)aP1; /*0x5b2969*/
}
}
} // namespace gamemd

// 0x5B2990
namespace gamemd {
bool Math::Abs16Cmp(IUnknown * aP1, IUnknown * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall Math::Abs16Cmp(_WORD *this, IUnknown *aP1, IUnknown *aP2)
{
  return abs16(aP2->field_0) >= (int)abs16(*this - LOWORD(aP1->field_0)); /*0x5b29b3*/
}
}
} // namespace gamemd

// 0x5C7DB0
namespace gamemd {
void sub_5C7DB0(unsigned short * a1, unsigned short * a2, unsigned short a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __fastcall sub_5C7DB0(_WORD *a1, unsigned __int16 *a2, unsigned __int16 a3, int a4)
{
  int v4; // ebx
  unsigned int v5; // esi
  unsigned __int16 v6; // ax
  unsigned int v7; // eax
  unsigned int v8; // eax

  v4 = a4; /*0x5c7db1*/
  v5 = 0; /*0x5c7db6*/
  if ( a4 <= 0 ) /*0x5c7dba*/
  {
    *a1 = *a1; /*0x5c7df4*/
  }
  else
  {
    do /*0x5c7de8*/
    {
      v6 = *a2++; /*0x5c7dcc*/
      v7 = v5 + (unsigned __int16)*a1 + a3 * v6; /*0x5c7dda*/
      *a1++ = v7; /*0x5c7ddc*/
      v8 = HIWORD(v7); /*0x5c7de2*/
      --v4; /*0x5c7de5*/
      v5 = v8; /*0x5c7de6*/
    }
    while ( v4 ); /*0x5c7de8*/
    *a1 += v8; /*0x5c7dea*/
  }
}
}
} // namespace gamemd

// 0x5F6560
namespace gamemd {
int Math::DistSq2D(TechnoClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Math::DistSq2D(void *this, TechnoClass *aP1)
{
  int *v2; // edx
  int v3; // eax
  int v4; // ecx
  _BYTE v6[8]; // [esp+4h] [ebp-Ch] BYREF
  int v7; // [esp+Ch] [ebp-4h]

  v2 = (int *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)this + 72))(this, v6); /*0x5f656e*/
  v3 = *v2; /*0x5f6574*/
  v4 = v2[1]; /*0x5f6576*/
  v7 = v2[2]; /*0x5f657c*/
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
_DWORD *__fastcall sub_646590(_DWORD *a1, float *a2, float *a3, float a4)
{
  double v6; // st7
  double v7; // st6
  double v8; // st7
  float *v9; // eax
  int v10; // edx
  double v11; // st6
  double v12; // st5
  double v13; // st7
  float *v14; // eax
  int v15; // edx
  double v16; // st6
  double v17; // st5
  int v18; // eax
  int v19; // edx
  int v20; // eax
  double v22; // [esp+18h] [ebp-28h]
  double v23; // [esp+18h] [ebp-28h]
  double v24; // [esp+20h] [ebp-20h]
  double v25; // [esp+20h] [ebp-20h]
  double v26; // [esp+28h] [ebp-18h]
  int v27; // [esp+30h] [ebp-10h] BYREF
  int v28; // [esp+34h] [ebp-Ch]
  int v29; // [esp+38h] [ebp-8h]
  int v30; // [esp+3Ch] [ebp-4h]

  v6 = a2[3] * a3[3]; /*0x6465a6*/
  v7 = a2[2] * a3[2]; /*0x6465ac*/
  v27 = 0; /*0x6465af*/
  v28 = 0; /*0x6465b7*/
  v29 = 0; /*0x6465bf*/
  v30 = 1065353216; /*0x6465c7*/
  v22 = v6 + v7 + a2[1] * a3[1] + *a2 * *a3; /*0x6465df*/
  if ( v22 + 1.0 <= 0.00001 ) /*0x6465f4*/
  {
    v25 = Math::SinCos((1.0 - a4) * 1.570796326794895); /*0x6466c1*/
    v13 = Math::SinCos(a4 * 1.570796326794895); /*0x6466d1*/
    v14 = a2; /*0x6466df*/
    v15 = 4; /*0x6466e3*/
    do /*0x6466fd*/
    {
      v16 = *(float *)((char *)v14 + (char *)a3 - (char *)a2) * v13; /*0x6466eb*/
      v17 = *v14++ * v25; /*0x6466ef*/
      --v15; /*0x6466f6*/
      *(float *)((char *)v14 + (char *)&v27 - (char *)a2 - 4) = v16 + v17; /*0x6466f9*/
    }
    while ( v15 ); /*0x6466fd*/
  }
  else
  {
    if ( 1.0 - v22 <= 0.00001 ) /*0x64660f*/
    {
      v24 = 1.0 - a4; /*0x646678*/
      v8 = a4; /*0x64667c*/
    }
    else
    {
      v23 = Math::ArcTan2_Table(v22); /*0x646620*/
      v26 = Math::SinCos(v23); /*0x646633*/
      v24 = Math::SinCos((1.0 - a4) * v23) / v26; /*0x646653*/
      v8 = Math::SinCos(a4 * v23) / v26; /*0x646666*/
    }
    v9 = a2; /*0x646685*/
    v10 = 4; /*0x646689*/
    do /*0x6466a3*/
    {
      v11 = *(float *)((char *)v9 + (char *)a3 - (char *)a2) * v8; /*0x646691*/
      v12 = *v9++ * v24; /*0x646695*/
      --v10; /*0x64669c*/
      *(float *)((char *)v9 + (char *)&v27 - (char *)a2 - 4) = v11 + v12; /*0x64669f*/
    }
    while ( v10 ); /*0x6466a3*/
  }
  v18 = v28; /*0x646703*/
  *a1 = v27; /*0x64670b*/
  v19 = v29; /*0x64670d*/
  a1[1] = v18; /*0x646713*/
  v20 = v30; /*0x646716*/
  a1[2] = v19; /*0x64671a*/
  a1[3] = v20; /*0x64671d*/
  return a1; /*0x646722*/
}
}
} // namespace gamemd

// 0x7C5F00
namespace gamemd {
int Math_RoundToInt()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 __usercall Math::RoundToInt@<edx:eax>(double a1@<st0>)
{
  return (__int64)a1; /*0x7c5f22*/
}
}
} // namespace gamemd
