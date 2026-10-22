// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"

// 0x4138C0
namespace gamemd {  // G42.18 ns repair
int Coord::ToGridIndex(int aP1, int aP2, int aP3)
{

  int v4; // esi
  int v5; // edi
  int v6; // ebx
  int v7; // ecx
  int v8; // eax
  int v9; // ebx
  int v10; // eax
  int v11; // edi
  int v12; // eax
  int v13; // esi
  int v14; // eax
  int result; // eax
  int v16; // edi
  char *v17; // esi
  int v18; // eax
  int v19; // ecx
  int v20; // ecx
  char *v21; // esi
  int v22; // ecx
  unsigned int *v23; // edx

  (*(void (**)(unsigned int, int))(*(unsigned int *)aP1 + 760))(aP1, aP3); /*0x4138d4*/
  if ( (aP2 & 0x8000u) == 0 ) /*0x4138e1*/
    v4 = (__int16)aP2; /*0x4138e7*/
  else
    v4 = 0; /*0x4138e3*/
  if ( aP2 >= 0 ) /*0x4138f2*/
    v5 = SHIWORD(aP2); /*0x4138f8*/
  else
    v5 = 0; /*0x4138f4*/
  v6 = 19; /*0x41390d*/
  if ( v4 / (dword_87F914 / 20) <= 19 ) /*0x413921*/
    v6 = v4 / (dword_87F914 / 20); /*0x413923*/
  v7 = dword_87F918 / 20; /*0x41393e*/
  v8 = v5 / (dword_87F918 / 20); /*0x413941*/
  if ( v8 > 19 ) /*0x413946*/
    v8 = 19; /*0x413948*/
  v9 = v6 + 20 * v8; /*0x413957*/
  if ( (aP3 & 0x8000u) == 0 ) /*0x41395a*/
    v10 = (__int16)aP3; /*0x413960*/
  else
    v10 = 0; /*0x41395c*/
  if ( aP3 >= 0 ) /*0x41396b*/
    v11 = SHIWORD(aP3); /*0x413971*/
  else
    v11 = 0; /*0x41396d*/
  v12 = v10 / (dword_87F914 / 20); /*0x413975*/
  v13 = 19; /*0x413977*/
  if ( v12 <= 19 ) /*0x41397f*/
    v13 = v12; /*0x413981*/
  v14 = v11 / v7; /*0x413986*/
  if ( v11 / v7 > 19 ) /*0x41398b*/
    v14 = 19; /*0x41398d*/
  result = 5 * v14; /*0x413992*/
  v16 = v13 + 4 * result; /*0x413995*/
  if ( v9 != v16 ) /*0x41399a*/
  {
    v17 = (unsigned char *)this + 24 * v9; /*0x4139ae*/
    v18 = (*(int (**)(char *, unsigned int *))(*(unsigned int *)v17 + 16))(v17, &aP1); /*0x4139b4*/
    if ( v18 != -1 ) /*0x4139ba*/
    {
      v19 = *((unsigned int *)v17 + 4); /*0x4139bc*/
      if ( v18 < v19 ) /*0x4139c1*/
      {
        v20 = v19 - 1; /*0x4139c3*/
        for ( *((unsigned int *)v17 + 4) = v20; /*0x4139c9*/
              v18 < *((unsigned int *)v17 + 4);
              *(unsigned int *)(*((unsigned int *)v17 + 1) + 4 * v18 - 4) = *(unsigned int *)(*((unsigned int *)v17 + 1) + 4 * v18) )
        {
          ++v18; /*0x4139ce*/
        }
      }
    }
    v21 = (unsigned char *)this + 24 * v16; /*0x4139e4*/
    result = *((unsigned int *)v21 + 2); /*0x4139e7*/
    if ( *((unsigned int *)v21 + 4) < result /*0x413a0f*/
      || (v21[13] || !result)
      && (v22 = *((unsigned int *)v21 + 5), v22 > 0)
      && (result = (*(int (**)(char *, int, unsigned int))(*(unsigned int *)v21 + 8))((unsigned char *)this + 24 * v16, result + v22, 0),
          (unsigned char)result) )
    {
      result = *((unsigned int *)v21 + 4); /*0x413a11*/
      v23 = (unsigned int *)*((unsigned int *)v21 + 1); /*0x413a14*/
      *((unsigned int *)v21 + 4) = result + 1; /*0x413a1a*/
      v23[result] = aP1; /*0x413a21*/
    }
  }
  return result; /*0x413a24*/

}
}  // G42.18 ns repair
// 0x413A30
namespace gamemd {
unsigned int * Coord::ToCell(unsigned int *aP1)
{


  int v3; // [esp+0h] [ebp-4h]
  (v3) = ((v3) & ~0xFFFF) | ((*(unsigned int *)&this->__pad_0 / 256) & 0xFFFF); /*0x413a3f*/
  (v3) = ((v3) & ~(0xFFFF << 16)) | (((*&this->u32_4 / 256) & 0xFFFF) << 16); /*0x413a53*/
  *aP1 = v3; /*0x413a60*/
  return aP1; /*0x413a63*/

}
}
// 0x41C230
namespace gamemd {
void * Coord::Subtract(int aP1, int aP2, int aP3, void *a4)
{

  *(unsigned int *)&this->__pad_0 = aP1; /*0x41c23a*/
  *&this->u32_4 = aP2; /*0x41c240*/
  this->u32_8 = (unsigned int)((void *)aP3); /*0x41c243*/
  return (void *)(&this->__pad_0); /*0x41c246*/

}
}
// 0x41C380
namespace gamemd {
int Coord::Length(void *a1)
{


  double Coord_field_0x8; // st7
  Coord_field_0x8 = (double)(int)this->u32_8; /*0x41c380*/
  Math::Sqrt( /*0x41c3a4*/
    (double)*(int *)&this->__pad_0 * (double)*(int *)&this->__pad_0
  + (double)*&this->u32_4 * (double)*&this->u32_4
  + Coord_field_0x8 * Coord_field_0x8);
  int v3; // kr00_4
  v3 = Math::RoundToInt(Coord_field_0x8); /*0x41c3ac*/
  __int64 result; // rax
  (result) = ((result) & ~(0xFFFFull << 32)) | ((((((v3) >> 16) & 0xFFFF)) & 0xFFFFull) << 32); /*0x41c3ac*/
  (result) = ((result) & ~0xFFFF) | ((v3) & 0xFFFF); /*0x41c3ac*/
  return result; /*0x41c3a9*/

}
}
// 0x4399A0
namespace gamemd {
unsigned int * Coord::GetCoords(int * outCoords, void *a2_1)
{

  int v2; // ecx
  int v3; // esi
  unsigned __int16 *v4; // eax
  unsigned __int16 *v5; // edi
  unsigned __int16 *v6; // eax
  unsigned __int16 *v7; // ebx
  unsigned __int16 *v8; // eax

  v3 = v2; /*0x4399a2*/
  LOWORD(v4) = Math::RoundToInt(*(float *)(v2 + 24)); /*0x4399a8*/
  v5 = v4; /*0x4399b0*/
  LOWORD(v6) = Math::RoundToInt(v3->referenceCount); /*0x4399b2*/
  v7 = v6; /*0x4399ba*/
  LOWORD(v8) = Math::RoundToInt(v3->needsSave); /*0x4399bc*/
  *this = (int)v5; /*0x4399c7*/
  this->q004 = (int)v7; /*0x4399cb*/
  this->u32_8 = (int)v8; /*0x4399cf*/
  return (int)this; /*0x4399c9*/

}
}
// 0x43A0D0
namespace gamemd {
void * Coord::Scale(float aP1, void *a2)
{


  float *v2; // ecx
  *v2 = *(float *)&aP1 * *v2; /*0x43a0d8*/
  v2[1] = *(float *)&aP1 * v2[1]; /*0x43a0e1*/
  v2[2] = *(float *)&aP1 * v2[2]; /*0x43a0eb*/
  return (void *)((int)v2); /*0x43a0ee*/

}
}
// 0x565730
namespace gamemd {
void * Coord::To_Cell(unsigned int *aP1, void *a2)
{


  int v2; // eax
  v2 = aP1[1] / 256; /*0x56574f*/
  int v3; // edx
  v3 = *aP1 / 256 + (v2 << 9); /*0x56575a*/
  if ( v3 >= 0 && v3 < this->u32_140 ) /*0x565764*/
  {
    CellClass *v4; // edx
    v4 = (CellClass *)*((unsigned int *)this->q13C + v3); /*0x56576c*/
    if ( v4 ) /*0x565771*/
      return v4; /*0x565774*/
  }
  unsigned int *v6; // [esp+Ch] [ebp+4h]
  LOWORD(v6) = *aP1 / 256; /*0x56577a*/
  HIWORD(v6) = v2; /*0x56577f*/
  g_MissionQueueFrame.briefing[139] = (int)v6; /*0x565789*/
  return (CellClass *)&g_MissionQueueFrame.briefing[130]; /*0x565773*/

}
}
// 0x5AC370
namespace gamemd {
int Coord::Compare2D(unsigned short * a2, void *a2_2)
{
  return *(unsigned short *)a2_2->__pad_0 != *(unsigned int *)(a2_2) || *(unsigned short *)a2_2->Coord_field_0x2 != a2_2[1]; /*0x5ac388*/
}
}
// 0x6557F0
namespace gamemd {
void * Coord::WorldToScreen(MouseClass * aP1, MouseClass * aP2, char a4)
{


  int v4; // ebx
  v4 = (int)(*aP2); /*0x6557f7*/
  int v5; // esi
  v5 = (int)(aP2[1]); /*0x6557f9*/
  int v7; // eax
  (v7) = ((v7) & ~0xFFFF) | ((Math::RoundToInt((double)(*aP2 + (this->u32_1490 << 8) - v5) * this->u32_1488 * 0.00390625)) & 0xFFFF); /*0x655820*/
  int v8 = v7; // ebp /*0x65582b*/
  int v9; // eax
  (v9) = ((v9) & ~0xFFFF) | ((Math::RoundToInt((double)(v4 + v5 - (this->u32_1498 << 8)) * this->u32_1488 * 0.00390625)) & 0xFFFF); /*0x655848*/
  if ( a4 ) /*0x655853*/
  {
    if ( v8 < 0 ) /*0x655857*/
      v8 = 0; /*0x655859*/
    int v10 = this->u32_14A4; // ecx /*0x65585b*/
    if ( v8 >= v10 ) /*0x655863*/
      v8 = v10 - 1; /*0x655865*/
    if ( v9 < 0 ) /*0x65586a*/
      v9 = 0; /*0x65586c*/
    int v11 = this->u32_14A8; // edi /*0x65586e*/
    if ( v9 >= v11 ) /*0x655876*/
      v9 = v11 - 1; /*0x655878*/
  }
  *aP1 = v8; /*0x655881*/
  aP1[1] = v9; /*0x655883*/
  return aP1; /*0x65587f*/

}
}
// 0x6D2140
namespace gamemd {
AbstractClass * * Coord::To_Screen(unsigned int *a2, int *a3)
{


  int v10; // [esp+14h] [ebp-4h]
  v10 = a2[1]; /*0x6d214f*/
  int v4; // edi
  v4 = (-60 * v10 / 2 + 60 * *a2 / 2) / 256; /*0x6d21c8*/
  int v5; // esi
  v5 = (30 * v10 / 2 + 30 * *a2 / 2) / 256; /*0x6d21cb*/
  int v6; // eax
  (v6) = ((v6) & ~0xFFFF) | ((Math::RoundToInt((double)(int)a2[2] * dbl_B0CD48 + (double)(a2[2] >= 728) + 0.5)) & 0xFFFF); /*0x6d21f2*/
  *a3 = v4; /*0x6d21fd*/
  a3[1] = v5 - v6; /*0x6d21ff*/
  int v7 = *a3 - *&this->u32_B0; // edi /*0x6d2213*/
  int v8; // esi
  v8 = a3[1] - *&this->u32_B4; /*0x6d2215*/
  *a3 = v7; /*0x6d2217*/
  a3[1] = v8; /*0x6d221b*/
  if ( v7 < -360 ) /*0x6d222a*/
    return 0; /*0x6d222c*/
  if ( v7 > dword_B0CE30 + 360 ) /*0x6d2242*/
    return 0; /*0x6d2244*/
  if ( v8 >= -180 ) /*0x6d2251*/
    return (gamemd::AbstractClass **)(v8 <= dword_B0CE34 + 180); /*0x6d2269*/
  return 0; /*0x6d2220*/

}
}
// 0x710700
namespace gamemd {
void * Coord::Divide(int * a2, int a3)
{


  if ( a3 ) /*0x710708*/
  {
    int v4 = *&this->u32_4 / a3; // ebx /*0x71072f*/
    int v5; // eax
    v5 = (int)this->u32_8 / a3; /*0x710735*/
    *a2 = *(unsigned int *)&this->__pad_0 / a3; /*0x71073d*/
    a2[1] = v4; /*0x71073f*/
    a2[2] = v5; /*0x710745*/
  }
  else
  {
    *a2 = 0; /*0x710714*/
    a2[1] = 0; /*0x710716*/
    a2[2] = 0; /*0x710719*/
  }
  return a2; /*0x71071c*/

}
}
// 0x6D1F10
namespace gamemd {
int * Coord::To_ScreenRaw(int *aP0, unsigned int *aP1)
{

  int v6; // [esp+10h] [ebp-4h]
  v6 = aP1[1]; /*0x6d1f1f*/
  int v2; // edi
  v2 = (-60 * v6 / 2 + 60 * *aP1 / 2) / 256; /*0x6d1f95*/
  int v3; // esi
  v3 = (30 * v6 / 2 + 30 * *aP1 / 2) / 256; /*0x6d1f98*/
  int v4; // esi
  v4 = v3 - Math::RoundToInt((double)(int)aP1[2] * dbl_B0CD48 + (double)(aP1[2] >= 728) + 0.5); /*0x6d1fc4*/
  *aP0 = v2; /*0x6d1fca*/
  aP0[1] = v4; /*0x6d1fcc*/
  return aP0; /*0x6d1fcf*/
}
} // namespace gamemd

// 0x6D2120
namespace gamemd {
long long Coord::ScaleToScreenY(void *a1)
{

  int v2; // kr00_4
  v2 = Math::RoundToInt(((double)(int)this - 0.5) * LightningStorm_CloudHeightFactor); /*0x6d2135*/
  int64_t result; // rax
  (((unsigned short *)&(result))[2]) = (*(((unsigned short *)&(v2)) + 1)); /*0x6d2135*/
  (*((unsigned short *)&(result))) = v2; /*0x6d2135*/
  return result; /*0x6d213b*/
}
} // namespace gamemd
