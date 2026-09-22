// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Math_e4.hpp"

// 0x4138C0
namespace gamemd {
int Coord::ToGridIndex(VectorClass * aP1, VectorClass * aP2, VectorClass * aP3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax

  (*(void (__thiscall **)(VectorClass *, VectorClass *))(*(_DWORD *)aP1->vtable0 + 760))(aP1, aP3); /*0x4138d4*/
  if ( (__int16)aP2 >= 0 ) /*0x4138e1*/
    int v4 = (__int16)aP2; /*0x4138e7*/
  else
    v4 = 0; /*0x4138e3*/
  if ( SHIWORD(aP2) >= 0 ) /*0x4138f2*/
    int v5 = SHIWORD(aP2); /*0x4138f8*/
  else
    v5 = 0; /*0x4138f4*/
  int v6 = 19; /*0x41390d*/
  if ( v4 / (*(_DWORD *)&DataGlobal_87F8E4.field_2D[3] / 20) <= 19 ) /*0x413921*/
    v6 = v4 / (*(_DWORD *)&DataGlobal_87F8E4.field_2D[3] / 20); /*0x413923*/
  int v7 = *(_DWORD *)&DataGlobal_87F8E4[52] / 20; /*0x41393e*/
  int v8 = v5 / (*(_DWORD *)&DataGlobal_87F8E4[52] / 20); /*0x413941*/
  if ( v8 > 19 ) /*0x413946*/
    v8 = 19; /*0x413948*/
  int v9 = v6 + 20 * v8; /*0x413957*/
  if ( (__int16)aP3 >= 0 ) /*0x41395a*/
    int v10 = (__int16)aP3; /*0x413960*/
  else
    v10 = 0; /*0x41395c*/
  if ( SHIWORD(aP3) >= 0 ) /*0x41396b*/
    int v11 = SHIWORD(aP3); /*0x413971*/
  else
    v11 = 0; /*0x41396d*/
  int v12 = v10 / (*(_DWORD *)&DataGlobal_87F8E4.field_2D[3] / 20); /*0x413975*/
  int v13 = 19; /*0x413977*/
  if ( v12 <= 19 ) /*0x41397f*/
    v13 = v12; /*0x413981*/
  int v14 = v11 / v7; /*0x413986*/
  if ( v11 / v7 > 19 ) /*0x41398b*/
    v14 = 19; /*0x41398d*/
  result = 5 * v14; /*0x413992*/
  int v16 = v13 + 4 * result; /*0x413995*/
  if ( v9 != v16 ) /*0x41399a*/
  {
    char * v17 = this + 24 * v9; /*0x4139ae*/
    int v18 = (*(int (__thiscall **)(char *, VectorClass **))(*(_DWORD *)v17 + 16))(v17, &aP1); /*0x4139b4*/
    if ( v18 != -1 ) /*0x4139ba*/
    {
      int v19 = *((_DWORD *)v17 + 4); /*0x4139bc*/
      if ( v18 < v19 ) /*0x4139c1*/
      {
        int v20 = v19 - 1; /*0x4139c3*/
        for ( *((_DWORD *)v17 + 4) = v20; /*0x4139c9*/
              v18 < *((_DWORD *)v17 + 4);
              *(_DWORD *)(*((_DWORD *)v17 + 1) + 4 * v18 - 4) = *(_DWORD *)(*((_DWORD *)v17 + 1) + 4 * v18) )
        {
          ++v18; /*0x4139ce*/
        }
      }
    }
    char * v21 = this + 24 * v16; /*0x4139e4*/
    result = *((_DWORD *)v21 + 2); /*0x4139e7*/
    if ( *((_DWORD *)v21 + 4) < result /*0x413a0f*/
      || (v21[13] || !result)
  int v22; // ecx
      && (v22 = *((_DWORD *)v21 + 5), v22 > 0)
      && (result = (*(int (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)v21 + 8))(this + 24 * v16, result + v22, 0),
          (_BYTE)result) )
    {
      result = *((_DWORD *)v21 + 4); /*0x413a11*/
      int v23 = *((_DWORD *)v21 + 1); /*0x413a14*/
      *((_DWORD *)v21 + 4) = result + 1; /*0x413a1a*/
      *(_DWORD *)(v23 + 4 * result) = aP1; /*0x413a21*/
    }
  }
  return result; /*0x413a24*/
}
}
} // namespace gamemd

// 0x413A30
namespace gamemd {
unsigned int * Coord::ToCell(IUnknown * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v3; // [esp+0h] [ebp-4h]
  LOWORD(v3) = *this / 256; /*0x413a3f*/
  HIWORD(v3) = this->q004 / 256; /*0x413a53*/
  aP1->field_0 = v3; /*0x413a60*/
  return &aP1->field_0; /*0x413a63*/
}
}
} // namespace gamemd

// 0x41C230
namespace gamemd {
void * Coord::Subtract(IUnknown * aP1, IUnknown * aP2, IUnknown * aP3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  *this = aP1; /*0x41c23a*/
  this->q004 = aP2; /*0x41c240*/
  this->q008 = aP3; /*0x41c243*/
  return (IUnknown *)this; /*0x41c246*/
}
}
} // namespace gamemd

// 0x41C380
namespace gamemd {
int Coord::Length()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  double result; // st7

  result = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64( /*0x41c3a4*/
                                         (double)*this * (double)*this
                                       + (double)this->q004 * (double)this->q004
                                       + (double)this->__pad_002 * (double)this->__pad_002));
  Math::RoundToInt(result); /*0x41c3ac*/
  return result; /*0x41c3a9*/
}
}
} // namespace gamemd

// 0x4399A0
namespace gamemd {
unsigned int * Coord::GetCoords(int * outCoords)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v3 = Math::RoundToInt(this->q006); /*0x4399b0*/
  int v4 = Math::RoundToInt(this->q007); /*0x4399ba*/
  int v5 = Math::RoundToInt(this->q008); /*0x4399bc*/
  *outCoords = v3; /*0x4399c7*/
  outCoords[1] = v4; /*0x4399cb*/
  outCoords[2] = v5; /*0x4399cf*/
  return outCoords; /*0x4399c9*/
}
}
} // namespace gamemd

// 0x43A0D0
namespace gamemd {
void * Coord::Scale(IUnknown * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  *this = *(float *)&aP1 * *this; /*0x43a0d8*/
  this->q004 = *(float *)&aP1 * this->q004; /*0x43a0e1*/
  this->__pad_002 = *(float *)&aP1 * this->__pad_002; /*0x43a0eb*/
  return this; /*0x43a0ee*/
}
}
} // namespace gamemd

// 0x565730
namespace gamemd {
void * Coord::To_Cell(IUnknown * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  ObjectClass *aP1a; // [esp+Ch] [ebp+4h]

  int v2 = aP1->field_4 / 256; /*0x56574f*/
  int v3 = aP1->field_0 / 256 + (v2 << 9); /*0x56575a*/
  if ( v3 >= 0 && v3 < this->q050 ) /*0x565764*/
  {
    void * v4 = *(void **)(this->q13C + 4 * v3); /*0x56576c*/
    if ( v4 ) /*0x565771*/
      return v4; /*0x565774*/
  }
  LOWORD(aP1a) = aP1->field_0 / 256; /*0x56577a*/
  HIWORD(aP1a) = v2; /*0x56577f*/
  g_Map_GlobalCellIndex = (IUnknown *)aP1a; /*0x565789*/
  return g_CellClassArray; /*0x565773*/
}
}
} // namespace gamemd

// 0x5AC370
namespace gamemd {
int Coord::Compare2D(unsigned short * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  return *this != *a2 || this->q004 != a2[1]; /*0x5ac388*/
}
}
} // namespace gamemd

// 0x6557F0
namespace gamemd {
void * Coord::WorldToScreen(MouseClass * aP1, MouseClass * aP2, char a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v4 = aP2->field_0; /*0x6557f7*/
  void * v5 = aP2->field_4; /*0x6557f9*/
  int v7 = Math::RoundToInt((double)(aP2->field_0 + (*(_DWORD *)(this + 5264) << 8) - (int)v5) * *(float *)(this + 5256) * 0.00390625); /*0x65582b*/
  void * v8 = (void *)Math::RoundToInt((double)((int)v5 + v4 + -256 * *(_DWORD *)(this + 5272)) * *(float *)(this + 5256) * 0.00390625); /*0x655848*/
  if ( a4 ) /*0x655853*/
  {
    if ( v7 < 0 ) /*0x655857*/
      v7 = 0; /*0x655859*/
    int v9 = *(_DWORD *)(this + 5284); /*0x65585b*/
    if ( v7 >= v9 ) /*0x655863*/
      v7 = v9 - 1; /*0x655865*/
    if ( (int)v8 < 0 ) /*0x65586a*/
      v8 = 0; /*0x65586c*/
    int v10 = *(_DWORD *)(this + 5288); /*0x65586e*/
    if ( (int)v8 >= v10 ) /*0x655876*/
      v8 = (void *)(v10 - 1); /*0x655878*/
  }
  aP1->field_0 = v7; /*0x655881*/
  aP1->field_4 = v8; /*0x655883*/
  return &aP1->field_0; /*0x65587f*/
}
}
} // namespace gamemd

// 0x6D2140
namespace gamemd {
AbstractClass * Coord::To_Screen(unsigned int * a1, IUnknown * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v10 = a1[1]; /*0x6d214f*/
  int v4 = (-60 * v10 / 2 + 60 * *a1 / 2) / 256; /*0x6d21c8*/
  int v5 = (30 * v10 / 2 + 30 * *a1 / 2) / 256; /*0x6d21cb*/
  int v6 = Math::RoundToInt((double)(int)a1[2] * *(double *)&g_OverlayTypeConfig.field_5550 + (double)(a1[2] >= 728) + 0.5); /*0x6d21f2*/
  aP2->field_0 = v4; /*0x6d21fd*/
  aP2->field_4 = v5 - v6; /*0x6d21ff*/
  int v7 = aP2->field_0 - *(this + 44); /*0x6d2213*/
  int v8 = aP2->field_4 - *(this + 45); /*0x6d2215*/
  aP2->field_0 = v7; /*0x6d2217*/
  aP2->field_4 = v8; /*0x6d221b*/
  if ( v7 < -360 ) /*0x6d222a*/
    return 0; /*0x6d222c*/
  if ( v7 > *(_DWORD *)&g_OverlayTypeConfig[22072] + 360 ) /*0x6d2242*/
    return 0; /*0x6d2244*/
  if ( v8 >= -180 ) /*0x6d2251*/
    return v8 <= *(_DWORD *)&g_OverlayTypeConfig[22076] + 180; /*0x6d2269*/
  return 0; /*0x6d2220*/
}
}
} // namespace gamemd

// 0x710700
namespace gamemd {
void * Coord::Divide(int * a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  if ( a3 ) /*0x710708*/
  {
    int v4 = this->q004 / a3; /*0x71072f*/
    int v5 = this->q008 / a3; /*0x710735*/
    *a2 = *this / a3; /*0x71073d*/
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
} // namespace gamemd

// 0x6D1F10
namespace gamemd {
int * Coord::To_ScreenRaw(AbstractClass * aP0, IUnknown * aP1)
{
{
    int v2;
    int v3;
    int v4;
    int v6;
    v6 = aP1->field_4;
    v2 = (-60 * v6 / 2 + 60 * aP1->field_0 / 2) / 256;
    v3 = (30 * v6 / 2 + 30 * aP1->field_0 / 2) / 256;
    v4 = v3 - Math::RoundToInt((double)aP1->field_8 * *(double *)&DataGlobal_B05488[30912] + (double)(aP1->field_8 >= 728) + 0.5);
    *(int *)aP0->__pad_0 = v2;
    *(int *)&aP0->__pad_0[4] = v4;
    return (int *)aP0->__pad_0;
}
}
} // namespace gamemd

// 0x6D2120
namespace gamemd {
long long Coord::ScaleToScreenY()
{
{
    return Math::RoundToInt(((double)(int)this - 0.5) * LightningStorm_CloudHeightFactor);
}
}
} // namespace gamemd
