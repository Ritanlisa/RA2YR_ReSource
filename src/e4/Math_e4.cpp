// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_578640_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Matrix3x4_e4.hpp"
#include "e4/classes/ParticleSystemClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/SkirmishDialog_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/MissionClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"

// 0x40FFFF
namespace gamemd {  // G42.18 ns repair
int Math_InitDegToRad(void * a1, void * a2)
{

  if ( (unsigned int)(a1)| a2 ) /*0x40ffff*/
    return sub_40FF90(); /*0x40ff8f*/
  dbl_887648 = 0.0174532925199433 * 90.0; /*0x41001c*/
  int result; // eax
  return result; /*0x410022*/
}
}  // G42.18 ns repair
// 0x41C350
namespace gamemd {
int Math::Hypotenuse2D(void *a1)
{
  return Math::Sqrt(*(double *)this * *(double *)this + this->q008 * this->q008); /*0x41c36e*/
}
}
// 0x4CAC40
namespace gamemd {
int Math_Sqrt(double a1)
{

  __int16 v1; // fps
  double v2; // st7
  bool v3; // c0
  char v4; // c2
  bool v5; // c3
  int result; // eax
  unsigned int *v7; // [esp+4h] [ebp+4h]

  v2 = a1; /*0x4cac40*/
  v3 = a1 < 0.0; /*0x4cac44*/
  v4 = 0; /*0x4cac44*/
  v5 = a1 == 0.0; /*0x4cac44*/
  LOWORD(result) = v1; /*0x4cac4a*/
  if ( a1 != 0.0 ) /*0x4cac4f*/
  {
    if ( a1 <= 0.0 ) /*0x4cac65*/
      v2 = a1 * -1.0; /*0x4cac67*/
    *(float *)&v7 = v2; /*0x4cac6d*/
    return (((__int16)(((unsigned int)v7 >> 23) - 127) >> 1) + 127) << 23; /*0x4caca0*/
  }
  return result; /*0x4cac59*/

}
}
// 0x4CACB0
namespace gamemd {
int Math_SinCos(double a1)
{

  int v1; // eax
  (*((unsigned short *)&(v1))) = Math::RoundToInt(a1 * flt_8223B0); /*0x4cacba*/
  char v2 = v1 & 1; // cl /*0x4cacc4*/
  int result; // eax
  result = (v1 / 2) & 0x80001FFF; /*0x4cacc9*/
  if ( result < 0 )
    result = (((unsigned short)result - 1) | 0xFFFFE000) + 1 + ((int)((((unsigned short)result - 1) | 0xFFFFE000) + 1) < 0 ? 0x2000 : 0);
  if ( v2 ) /*0x4cace0*/
  {
    if ( result < 0x1FFF ) /*0x4cace7*/
      ++result; /*0x4cace9*/
  }
  return result; /*0x4cacf1*/
}
}
// 0x4CAD00
namespace gamemd {
int Math_ArcTan2(double a1)
{

  int v1; // eax
  (*((unsigned short *)&(v1))) = Math::RoundToInt(a1 * flt_8223B4); /*0x4cad0a*/
  char v2 = v1 & 1; // cl /*0x4cad14*/
  signed int v3; // eax
  v3 = (v1 / 2) & 0x80001FFF; /*0x4cad19*/
  int result; // eax
  if ( v3 >= 0 || (v3 = (((unsigned short)v3 - 1) | 0xFFFFE000) + 1, v3 >= 0) ) /*0x4cad27*/
    result = v3 + 2048; /*0x4cad30*/
  else
    result = v3 + 10240; /*0x4cad29*/
  if ( v2 ) /*0x4cad37*/
  {
    if ( result < 10239 ) /*0x4cad3e*/
      ++result; /*0x4cad40*/
  }
  return result; /*0x4cad48*/
}
}
// 0x4CAD50
namespace gamemd {
int Math::Sin(double a1)
{

  int v1; // eax
  (*((unsigned short *)&(v1))) = Math::RoundToInt(a1 * 651.8986469044033); /*0x4cad5a*/
  int result = v1 & 0x80000FFF; // eax /*0x4cad5f*/
  if ( result < 0 )
    return (((unsigned short)result - 1) | 0xFFFFF000) + 1 + ((int)((((unsigned short)result - 1) | 0xFFFFF000) + 1) < 0 ? 0x1000 : 0);
  return result; /*0x4cad7b*/
}
}
// 0x4CAE30
namespace gamemd {
int Math_CalcAngle(double a1, double a2)
{
  int result; // eax

  float v18; // [esp+0h] [ebp-4h]
  v18 = a2; /*0x4cae35*/
  float v19; // [esp+10h] [ebp+Ch]
  v19 = a1; /*0x4cae3d*/
  double v3 = v19; // st7 /*0x4cae4b*/
  char v4; // c3
  if ( v4 ) /*0x4cae54*/
  {
    bool v5 = v3 < 0.0; // c0 /*0x4cae56*/
    char v6 = 0; // c2 /*0x4cae56*/
    bool v7; // c3
    v7 = v3 == 0.0; /*0x4cae56*/
    int16_t v2; // fps
    (*((unsigned short *)&(result))) = v2; /*0x4cae5c*/
    if ( v3 != 0.0 ) /*0x4cae61*/
    {
      bool v10 = v19 < 0.0; // c0 /*0x4cae6f*/
      char v11 = 0; // c2 /*0x4cae6f*/
      bool v12; // c3
      v12 = v19 == 0.0; /*0x4cae6f*/
      int16_t v9; // fps
      (*((unsigned short *)&(result))) = v9; /*0x4cae75*/
    }
  }
  else
  {
    int v13; // eax
    (*((unsigned short *)&(v13))) = Math::RoundToInt(v3 / v18 / flt_8650B8); /*0x4cae96*/
    result = abs32(v13); /*0x4cae9e*/
    bool v15 = v19 < 0.0; // c0 /*0x4caed1*/
    char v16 = 0; // c2 /*0x4caed1*/
    bool v17; // c3
    v17 = v19 == 0.0; /*0x4caed1*/
    int16_t v14; // fps
    (*((unsigned short *)&(result))) = v14; /*0x4caed7*/
  }
  return result; /*0x4cae6a*/
}
}
// 0x5AE750
namespace gamemd {
float * Math::BuildRotationMatrix(float *aP1, float *a2, float a3)
{

  double v3 = a3; // kr00_8 /*0x5ae762*/
  float v16; // [esp+10h] [ebp+8h]
  v16 = Math::ArcTan2(a3); /*0x5ae76f*/
  double v5; // st7
  v5 = Math::SinCos(v3); /*0x5ae775*/
  double v7 = *a2 * *a2; // st6 /*0x5ae787*/
  *aP1 = (1.0 - v7) * v16 + v7; /*0x5ae797*/
  double v8 = 1.0 - v16; // st6 /*0x5ae7a1*/
  *(aP1 + 1) = *a2 * a2[1] * v8 - v5 * a2[2]; /*0x5ae7b3*/
  double v9; // st5
  v9 = a2[2] * *a2 * v8; /*0x5ae7bb*/
  double v10; // st4
  v10 = v5 * a2[1]; /*0x5ae7bf*/
  *(aP1 + 3) = 0.0; /*0x5ae7c2*/
  *(aP1 + 2) = v9 + v10; /*0x5ae7c7*/
  *(aP1 + 4) = *a2 * a2[1] * v8 + v5 * a2[2]; /*0x5ae7d8*/
  double v11; // st5
  v11 = a2[1] * a2[1]; /*0x5ae7e0*/
  *(aP1 + 5) = (1.0 - v11) * v16 + v11; /*0x5ae7f0*/
  double v12; // st5
  v12 = a2[2] * a2[1] * v8; /*0x5ae7fb*/
  double v13 = v5 * *a2; // st4 /*0x5ae7ff*/
  *(aP1 + 7) = 0.0; /*0x5ae801*/
  *(aP1 + 6) = v12 - v13; /*0x5ae806*/
  *(aP1 + 8) = a2[2] * *a2 * v8 - v5 * a2[1]; /*0x5ae817*/
  *(aP1 + 9) = a2[2] * a2[1] * v8 + v5 * *a2; /*0x5ae82b*/
  double v14; // st7
  v14 = a2[2] * a2[2]; /*0x5ae835*/
  *(aP1 + 11) = 0.0; /*0x5ae83f*/
  *(aP1 + 10) = (1.0 - v14) * v16 + v14; /*0x5ae84a*/
  return aP1; /*0x5ae851*/
}
}
// 0x5F6560
namespace gamemd {
int Math::DistSq2D(unsigned int *aP1)
{


  int *v2; // edx
  unsigned char v6[8]; // [esp+4h] [ebp-Ch] BYREF
  v2 = (int *)(*(int (**)(Math *, unsigned char *))(*(unsigned int *)this->q000 + 72))(this, v6); /*0x5f656e*/
  int v3 = *v2; // eax /*0x5f6574*/
  int v4; // ecx
  v4 = v2[1]; /*0x5f6576*/
  int v7; // [esp+Ch] [ebp-4h]
  v7 = v2[2]; /*0x5f657c*/
  return (v3 - *aP1) * (v3 - *aP1) + (v4 - aP1->vtable2) * (v4 - aP1->vtable2); /*0x5f658b*/

}
}
// 0x646590
namespace gamemd {
unsigned int * Math::QuaternionSlerp(unsigned int * a1, float * a2, float * a3, float a4)
{
  double v8; // st7
  double v24; // [esp+20h] [ebp-20h]

  double v6; // st7
  v6 = a2[3] * a3[3]; /*0x6465a6*/
  double v7; // st6
  v7 = a2[2] * a3[2]; /*0x6465ac*/
  int v27; // [esp+30h] [ebp-10h] BYREF
  v27 = 0; /*0x6465af*/
  int v28; // [esp+34h] [ebp-Ch]
  v28 = 0; /*0x6465b7*/
  int v29; // [esp+38h] [ebp-8h]
  v29 = 0; /*0x6465bf*/
  int v30; // [esp+3Ch] [ebp-4h]
  v30 = 1065353216; /*0x6465c7*/
  double v22; // [esp+18h] [ebp-28h]
  v22 = v6 + v7 + a2[1] * a3[1] + *a2 * *a3; /*0x6465df*/
  if ( v22 + 1.0 <= 0.00001 ) /*0x6465f4*/
  {
    double v25; // [esp+20h] [ebp-20h]
    v25 = Math::SinCos((1.0 - a4) * 1.570796326794895); /*0x6466c1*/
    double v13; // st7
    v13 = Math::SinCos(a4 * 1.570796326794895); /*0x6466d1*/
    float *v14 = a2; // eax /*0x6466df*/
    int v15 = 4; // edx /*0x6466e3*/
    do /*0x6466fd*/
    {
      double v16; // st6
      v16 = *(float *)((char *)(unsigned int)(v14)+ (char *)a3 - (char *)a2) * v13; /*0x6466eb*/
      double v17; // st5
      v17 = *v14++ * v25; /*0x6466ef*/
      --v15; /*0x6466f6*/
      *(float *)((char *)(unsigned int)(v14)+ (char *)&v27 - (char *)a2 - 4) = v16 + v17; /*0x6466f9*/
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
      double v23; // [esp+18h] [ebp-28h]
      v23 = Math::ArcTan2_Table(v22); /*0x646620*/
      double v26; // [esp+28h] [ebp-18h]
      v26 = Math::SinCos(v23); /*0x646633*/
      v24 = Math::SinCos((1.0 - a4) * v23) / v26; /*0x646653*/
      v8 = Math::SinCos(a4 * v23) / v26; /*0x646666*/
    }
    float *v9 = a2; // eax /*0x646685*/
    int v10 = 4; // edx /*0x646689*/
    do /*0x6466a3*/
    {
      double v11; // st6
      v11 = *(float *)((char *)(unsigned int)(v9)+ (char *)a3 - (char *)a2) * v8; /*0x646691*/
      double v12; // st5
      v12 = *v9++ * v24; /*0x646695*/
      --v10; /*0x64669c*/
      *(float *)((char *)(unsigned int)(v9)+ (char *)&v27 - (char *)a2 - 4) = v11 + v12; /*0x64669f*/
    }
    while ( v10 ); /*0x6466a3*/
  }
  int v18 = v28; // eax /*0x646703*/
  *a1 = v27; /*0x64670b*/
  int v19 = v29; // edx /*0x64670d*/
  a1[1] = v18; /*0x646713*/
  int v20 = v30; // eax /*0x646716*/
  a1[2] = v19; /*0x64671a*/
  a1[3] = v20; /*0x64671d*/
  return a1; /*0x646722*/
}
}
// 0x7C5F00
namespace gamemd {
int Math_RoundToInt(void * a1)
{

  int64_t v1; // rax
  v1 = (int64_t)a1; /*0x7c5f20*/
  int result; // dx:ax
  (*((unsigned short *)&(result))) = v1; /*0x7c5f22*/
  (*(((unsigned short *)&(result)) + 1)) = (((unsigned short *)&(v1))[2]); /*0x7c5f22*/
  return result; /*0x7c5f22*/
}
}
// 0x473650
namespace gamemd {
void Math::InitArcTan()
{
  dbl_89E230 = Math::ArcTan((double)dword_89E278 * 0.00390625); /*0x473667*/
}
} // namespace gamemd

// 0x4CADB0
namespace gamemd {
double Math::ArcTan2_Table(double a1)
{

  int v1; // eax
  (*((unsigned short *)&(v1))) = Math::RoundToInt((a1 + 1.0) * -2048.0); /*0x4cadc0*/
  return 4 * v1; /*0x4cadd7*/
}
} // namespace gamemd

// 0x4CADE0
namespace gamemd {
double Math::ArcTan(double a1)
{

  float v8; // [esp+4h] [ebp+4h]
  v8 = a1; /*0x4cade4*/
  int v2; // eax
  (*((unsigned short *)&(v2))) = Math::RoundToInt(a1 / flt_8650B8); /*0x4cadee*/
  int result; // eax
  result = abs32(v2); /*0x4cadf6*/
  bool v4 = v8 < 0.0; // c0 /*0x4cae12*/
  char v5 = 0; // c2 /*0x4cae12*/
  bool v6; // c3
  v6 = v8 == 0.0; /*0x4cae12*/
  int16_t v3; // fps
  (*((unsigned short *)&(result))) = v3; /*0x4cae18*/
  return result; /*0x4cae21*/
}
} // namespace gamemd

// 0x5B2950
namespace gamemd {
unsigned int * Math::Sub16(unsigned int *aP1, unsigned short *aP2)
{

  LOWORD(aP2) = *(unsigned short *)this->q000 - *aP2; /*0x5b295a*/
  *aP1 = (unsigned int)(aP2); /*0x5b2967*/
  return aP1; /*0x5b2969*/

}
} // namespace gamemd

// 0x5B2990
namespace gamemd {
bool Math::Abs16Cmp(unsigned short *aP1, int16_t *aP2)
{

  return abs16(*aP2) >= (int)abs16(*(unsigned short *)this->q000 - *aP1); /*0x5b29b3*/

}
} // namespace gamemd

// 0x5C7DB0
namespace gamemd {
void sub_5C7DB0(unsigned short * a1, unsigned short * a2, unsigned short a3, int a4)
{
  unsigned int v8; // eax

  int v4 = a4; // ebx /*0x5c7db1*/
  unsigned int v5 = 0; // esi /*0x5c7db6*/
  if ( a4 <= 0 ) /*0x5c7dba*/
  {
    *a1 = *a1; /*0x5c7df4*/
  }
  else
  {
    do /*0x5c7de8*/
    {
      uint16_t v6; // ax
      v6 = *a2++; /*0x5c7dcc*/
      unsigned int v7; // eax
      v7 = v5 + (uint16_t)*a1 + a3 * v6; /*0x5c7dda*/
      *a1++ = v7; /*0x5c7ddc*/
      v8 = (*(((unsigned short *)&(v7)) + 1)); /*0x5c7de2*/
      --v4; /*0x5c7de5*/
      v5 = v8; /*0x5c7de6*/
    }
    while ( v4 ); /*0x5c7de8*/
    *a1 += v8; /*0x5c7dea*/
  }
}
} // namespace gamemd
