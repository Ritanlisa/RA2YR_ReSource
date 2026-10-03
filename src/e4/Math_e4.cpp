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
namespace gamemd {
int Math_InitDegToRad(void * a1, void * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x40FFFF)
}
}
// 0x41C350
namespace gamemd {
int Math::Hypotenuse2D()
{

  return Math::Sqrt(*(double *)this * *(double *)this + *((double *)this + 1) * *((double *)this + 1)); /*0x41c36e*/

}
}
// 0x4CAC40
namespace gamemd {
int Math_Sqrt(void * a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4CAC40)
}
}
// 0x4CACB0
namespace gamemd {
int Math_SinCos(void * a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4CACB0)
}
}
// 0x4CAD00
namespace gamemd {
int Math_ArcTan2(void * a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4CAD00)
}
}
// 0x4CAD50
namespace gamemd {
int Math::Sin(double a1)
{

  int v1; // eax
  int result; // eax

  LOWORD(v1) = Math::RoundToInt(a1 * 651.8986469044033); /*0x4cad5a*/
  result = v1 & 0x80000FFF; /*0x4cad5f*/
  if ( result < 0 )
    return (((unsigned short)result - 1) | 0xFFFFF000) + 1 + ((int)((((unsigned short)result - 1) | 0xFFFFF000) + 1) < 0 ? 0x1000 : 0);
  return result; /*0x4cad7b*/

}
}
// 0x4CAE30
namespace gamemd {
int Math_CalcAngle(void * a1, void * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4CAE30)
}
}
// 0x5AE750
namespace gamemd {
float * Math::BuildRotationMatrix(float *a2, float a3, int aP1, int a1, int a4, int aP2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5AE750)
}
}
// 0x5F6560
namespace gamemd {
int Math::DistSq2D(TechnoClass * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5F6560)
}
}
// 0x646590
namespace gamemd {
unsigned int * Math::QuaternionSlerp(unsigned int * a1, float * a2, float * a3, float a4)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x646590)
}
}
// 0x7C5F00
namespace gamemd {
int Math_RoundToInt(void * a1)
{
  int64_t v1; // rax
  int result; // dx:ax

  v1 = (int64_t)a1; /*0x7c5f20*/
  IDA_LOWORD(result) = v1; /*0x7c5f22*/
  IDA_HIWORD(result) = IDA_WORD2(v1); /*0x7c5f22*/
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

  LOWORD(v1) = Math::RoundToInt((a1 + 1.0) * -2048.0); /*0x4cadc0*/
  return 4 * v1; /*0x4cadd7*/

}
} // namespace gamemd

// 0x4CADE0
namespace gamemd {
double Math::ArcTan(double a1)
{

  int v2; // eax
  int16_t v3; // fps
  bool v4; // c0
  char v5; // c2
  bool v6; // c3
  int result; // eax
  float v8; // [esp+4h] [ebp+4h]

  v8 = a1; /*0x4cade4*/
  LOWORD(v2) = Math::RoundToInt(a1 / flt_8650B8); /*0x4cadee*/
  result = abs32(v2); /*0x4cadf6*/
  v4 = v8 < 0.0; /*0x4cae12*/
  v5 = 0; /*0x4cae12*/
  v6 = v8 == 0.0; /*0x4cae12*/
  LOWORD(result) = v3; /*0x4cae18*/
  return result; /*0x4cae21*/

}
} // namespace gamemd

// 0x5B2950
namespace gamemd {
IUnknown * Math::Sub16(BuildingTypeClass * aP1, IUnknown * aP2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5B2950)
}
} // namespace gamemd

// 0x5B2990
namespace gamemd {
bool Math::Abs16Cmp(IUnknown * aP1, IUnknown * aP2)
{
    return false; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5B2990)
}
} // namespace gamemd

// 0x5C7DB0
namespace gamemd {
void sub_5C7DB0(unsigned short * a1, unsigned short * a2, unsigned short a3, int a4)
{
  int v4; // ebx
  unsigned int v5; // esi
  uint16_t v6; // ax
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
      v7 = v5 + (uint16_t)*a1 + a3 * v6; /*0x5c7dda*/
      *a1++ = v7; /*0x5c7ddc*/
      v8 = IDA_HIWORD(v7); /*0x5c7de2*/
      --v4; /*0x5c7de5*/
      v5 = v8; /*0x5c7de6*/
    }
    while ( v4 ); /*0x5c7de8*/
    *a1 += v8; /*0x5c7dea*/
  }
}
} // namespace gamemd
