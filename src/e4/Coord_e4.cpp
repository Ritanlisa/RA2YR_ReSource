// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Coord_e4.hpp"

// 0x4138C0
namespace gamemd {
int Coord::ToGridIndex(VectorClass * aP1, VectorClass * aP2, VectorClass * aP3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Coord::ToGridIndex(char *this, VectorClass *aP1, VectorClass *aP2, VectorClass *aP3)
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
  int v23; // edx

  (*(void (__thiscall **)(VectorClass *, VectorClass *))(*(_DWORD *)aP1->__pad_0 + 760))(aP1, aP3); /*0x4138d4*/
  if ( (__int16)aP2 >= 0 ) /*0x4138e1*/
    v4 = (__int16)aP2; /*0x4138e7*/
  else
    v4 = 0; /*0x4138e3*/
  if ( SHIWORD(aP2) >= 0 ) /*0x4138f2*/
    v5 = SHIWORD(aP2); /*0x4138f8*/
  else
    v5 = 0; /*0x4138f4*/
  v6 = 19; /*0x41390d*/
  if ( v4 / (*(_DWORD *)&MEMORY[0x87F8E4].field_2D[3] / 20) <= 19 ) /*0x413921*/
    v6 = v4 / (*(_DWORD *)&MEMORY[0x87F8E4].field_2D[3] / 20); /*0x413923*/
  v7 = *(_DWORD *)&MEMORY[0x87F8E4].__pad_31[3] / 20; /*0x41393e*/
  v8 = v5 / (*(_DWORD *)&MEMORY[0x87F8E4].__pad_31[3] / 20); /*0x413941*/
  if ( v8 > 19 ) /*0x413946*/
    v8 = 19; /*0x413948*/
  v9 = v6 + 20 * v8; /*0x413957*/
  if ( (__int16)aP3 >= 0 ) /*0x41395a*/
    v10 = (__int16)aP3; /*0x413960*/
  else
    v10 = 0; /*0x41395c*/
  if ( SHIWORD(aP3) >= 0 ) /*0x41396b*/
    v11 = SHIWORD(aP3); /*0x413971*/
  else
    v11 = 0; /*0x41396d*/
  v12 = v10 / (*(_DWORD *)&MEMORY[0x87F8E4].field_2D[3] / 20); /*0x413975*/
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
    v17 = this + 24 * v9; /*0x4139ae*/
    v18 = (*(int (__thiscall **)(char *, VectorClass **))(*(_DWORD *)v17 + 16))(v17, &aP1); /*0x4139b4*/
    if ( v18 != -1 ) /*0x4139ba*/
    {
      v19 = *((_DWORD *)v17 + 4); /*0x4139bc*/
      if ( v18 < v19 ) /*0x4139c1*/
      {
        v20 = v19 - 1; /*0x4139c3*/
        for ( *((_DWORD *)v17 + 4) = v20; /*0x4139c9*/
              v18 < *((_DWORD *)v17 + 4);
              *(_DWORD *)(*((_DWORD *)v17 + 1) + 4 * v18 - 4) = *(_DWORD *)(*((_DWORD *)v17 + 1) + 4 * v18) )
        {
          ++v18; /*0x4139ce*/
        }
      }
    }
    v21 = this + 24 * v16; /*0x4139e4*/
    result = *((_DWORD *)v21 + 2); /*0x4139e7*/
    if ( *((_DWORD *)v21 + 4) < result /*0x413a0f*/
      || (v21[13] || !result)
      && (v22 = *((_DWORD *)v21 + 5), v22 > 0)
      && (result = (*(int (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)v21 + 8))(this + 24 * v16, result + v22, 0),
          (_BYTE)result) )
    {
      result = *((_DWORD *)v21 + 4); /*0x413a11*/
      v23 = *((_DWORD *)v21 + 1); /*0x413a14*/
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
_DWORD *__thiscall Coord::ToCell(_DWORD *this, IUnknown *aP1)
{
  int v3; // [esp+0h] [ebp-4h]

  LOWORD(v3) = *this / 256; /*0x413a3f*/
  HIWORD(v3) = *(this + 1) / 256; /*0x413a53*/
  aP1->field_0 = v3; /*0x413a60*/
  return &aP1->field_0; /*0x413a63*/
}
}
} // namespace gamemd

// 0x41C230
namespace gamemd {
IUnknown * Coord::Subtract(IUnknown * aP1, IUnknown * aP2, IUnknown * aP3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
IUnknown *__thiscall Coord::Subtract(_DWORD *this, IUnknown *aP1, IUnknown *aP2, IUnknown *aP3)
{
  *this = aP1; /*0x41c23a*/
  *(this + 1) = aP2; /*0x41c240*/
  *(this + 2) = aP3; /*0x41c243*/
  return (IUnknown *)this; /*0x41c246*/
}
}
} // namespace gamemd

// 0x41C380
namespace gamemd {
double Coord::Length()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
double __thiscall Coord::Length(int *this)
{
  double result; // st7

  result = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64( /*0x41c3a4*/
                                         (double)*this * (double)*this
                                       + (double)*(this + 1) * (double)*(this + 1)
                                       + (double)*(this + 2) * (double)*(this + 2)));
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
_DWORD *__thiscall Coord::GetCoords(float *this, int *outCoords)
{
  int v3; // edi
  int v4; // ebx
  int v5; // eax

  v3 = Math::RoundToInt(*(this + 6)); /*0x4399b0*/
  v4 = Math::RoundToInt(*(this + 7)); /*0x4399ba*/
  v5 = Math::RoundToInt(*(this + 8)); /*0x4399bc*/
  *outCoords = v3; /*0x4399c7*/
  outCoords[1] = v4; /*0x4399cb*/
  outCoords[2] = v5; /*0x4399cf*/
  return outCoords; /*0x4399c9*/
}
}
} // namespace gamemd

// 0x43A0D0
namespace gamemd {
float * Coord::Scale(IUnknown * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
float *__thiscall Coord::Scale(float *this, IUnknown *aP1)
{
  *this = *(float *)&aP1 * *this; /*0x43a0d8*/
  *(this + 1) = *(float *)&aP1 * *(this + 1); /*0x43a0e1*/
  *(this + 2) = *(float *)&aP1 * *(this + 2); /*0x43a0eb*/
  return this; /*0x43a0ee*/
}
}
} // namespace gamemd

// 0x565730
namespace gamemd {
void * Coord::To_Cell(IUnknown * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void *__thiscall Coord::To_Cell(_DWORD *this, IUnknown *aP1)
{
  int v2; // eax
  int v3; // edx
  void *v4; // edx
  ObjectClass *aP1a; // [esp+Ch] [ebp+4h]

  v2 = aP1->field_4 / 256; /*0x56574f*/
  v3 = aP1->field_0 / 256 + (v2 << 9); /*0x56575a*/
  if ( v3 >= 0 && v3 < *(this + 80) ) /*0x565764*/
  {
    v4 = *(void **)(*(this + 79) + 4 * v3); /*0x56576c*/
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
BOOL Coord::Compare2D(unsigned short * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __thiscall Coord_Compare2D(_WORD *this, _WORD *a2)
{
  return *this != *a2 || *(this + 1) != a2[1]; /*0x5ac388*/
}
}
} // namespace gamemd

// 0x6557F0
namespace gamemd {
int * Coord::WorldToScreen(MouseClass * aP1, MouseClass * aP2, char a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int *__thiscall Coord::WorldToScreen(int this, MouseClass *aP1, MouseClass *aP2, char a4)
{
  int v4; // ebx
  void *v5; // esi
  int v7; // ebp
  void *v8; // eax
  int v9; // ecx
  int v10; // edi

  v4 = aP2->field_0; /*0x6557f7*/
  v5 = aP2->field_4; /*0x6557f9*/
  v7 = Math::RoundToInt((double)(aP2->field_0 + (*(_DWORD *)(this + 5264) << 8) - (int)v5) * *(float *)(this + 5256) * 0.00390625); /*0x65582b*/
  v8 = (void *)Math::RoundToInt((double)((int)v5 + v4 + -256 * *(_DWORD *)(this + 5272)) * *(float *)(this + 5256) * 0.00390625); /*0x655848*/
  if ( a4 ) /*0x655853*/
  {
    if ( v7 < 0 ) /*0x655857*/
      v7 = 0; /*0x655859*/
    v9 = *(_DWORD *)(this + 5284); /*0x65585b*/
    if ( v7 >= v9 ) /*0x655863*/
      v7 = v9 - 1; /*0x655865*/
    if ( (int)v8 < 0 ) /*0x65586a*/
      v8 = 0; /*0x65586c*/
    v10 = *(_DWORD *)(this + 5288); /*0x65586e*/
    if ( (int)v8 >= v10 ) /*0x655876*/
      v8 = (void *)(v10 - 1); /*0x655878*/
  }
  aP1->field_0 = v7; /*0x655881*/
  aP1->field_4 = v8; /*0x655883*/
  return &aP1->field_0; /*0x65587f*/
}
}
} // namespace gamemd

// 0x6D1F10
namespace gamemd {
int * Coord::To_ScreenRaw(AbstractClass * aP0, IUnknown * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int *__stdcall Coord::To_ScreenRaw(AbstractClass *aP0, IUnknown *aP1)
{
  int v2; // edi
  int v3; // esi
  int v4; // esi
  int v6; // [esp+10h] [ebp-4h]

  v6 = aP1->field_4; /*0x6d1f1f*/
  v2 = (-60 * v6 / 2 + 60 * aP1->field_0 / 2) / 256; /*0x6d1f95*/
  v3 = (30 * v6 / 2 + 30 * aP1->field_0 / 2) / 256; /*0x6d1f98*/
  v4 = v3 /*0x6d1fc4*/
     - Math::RoundToInt((double)aP1->field_8 * *(double *)&stru_B05488.__pad_579C[8484] + (double)(aP1->field_8 >= 728) + 0.5);
  *(_DWORD *)aP0->__pad_0 = v2; /*0x6d1fca*/
  *(_DWORD *)&aP0->__pad_0[4] = v4; /*0x6d1fcc*/
  return (int *)aP0->__pad_0; /*0x6d1fcf*/
}
}
} // namespace gamemd

// 0x6D2120
namespace gamemd {
long long Coord::ScaleToScreenY()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 __thiscall Coord::ScaleToScreenY(void *this)
{
  return Math::RoundToInt(((double)(int)this - 0.5) * MEMORY[0xB0CDD8]); /*0x6d213b*/
}
}
} // namespace gamemd

// 0x6D2140
namespace gamemd {
bool Coord::To_Screen(unsigned int * a1, IUnknown * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall Coord::To_Screen(_DWORD *this, _DWORD *a1, IUnknown *aP2)
{
  int v4; // edi
  int v5; // esi
  int v6; // eax
  int v7; // edi
  int v8; // esi
  int v10; // [esp+14h] [ebp-4h]

  v10 = a1[1]; /*0x6d214f*/
  v4 = (-60 * v10 / 2 + 60 * *a1 / 2) / 256; /*0x6d21c8*/
  v5 = (30 * v10 / 2 + 30 * *a1 / 2) / 256; /*0x6d21cb*/
  v6 = Math::RoundToInt((double)(int)a1[2] * *(double *)&MEMORY[0xB077F8].field_5550 + (double)(a1[2] >= 728) + 0.5); /*0x6d21f2*/
  aP2->field_0 = v4; /*0x6d21fd*/
  aP2->field_4 = v5 - v6; /*0x6d21ff*/
  v7 = aP2->field_0 - *(this + 44); /*0x6d2213*/
  v8 = aP2->field_4 - *(this + 45); /*0x6d2215*/
  aP2->field_0 = v7; /*0x6d2217*/
  aP2->field_4 = v8; /*0x6d221b*/
  if ( v7 < -360 ) /*0x6d222a*/
    return 0; /*0x6d222c*/
  if ( v7 > *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[228] + 360 ) /*0x6d2242*/
    return 0; /*0x6d2244*/
  if ( v8 >= -180 ) /*0x6d2251*/
    return v8 <= *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[232] + 180; /*0x6d2269*/
  return 0; /*0x6d2220*/
}
}
} // namespace gamemd

// 0x710700
namespace gamemd {
int * Coord::Divide(int * a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int *__thiscall Coord_Divide(_DWORD *this, int *a2, int a3)
{
  int v4; // ebx
  int v5; // eax

  if ( a3 ) /*0x710708*/
  {
    v4 = *(this + 1) / a3; /*0x71072f*/
    v5 = *(this + 2) / a3; /*0x710735*/
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
