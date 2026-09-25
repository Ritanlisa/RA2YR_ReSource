// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/GadgetGrid_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/GadgetClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x4134A0
namespace gamemd {
int GadgetGrid::InsertItem(ObjectClass * aP1)
{
  _DWORD *v4; // eax
  int v5; // esi
  int v6; // edi
  int v7; // eax
  int v8; // esi
  int v9; // eax
  int v10; // ecx
  int result; // eax
  char *v12; // esi
  int v13; // ecx
  int v14; // edx
  char v15[4]; // [esp+Ch] [ebp-4h] BYREF
  int v16; // [esp+14h] [ebp+4h]

  v4 = (_DWORD *)(*(int (__thiscall **)(int, char *))(aP1->q6E0)(aP1, v15); /*0x4134b3*/
  v5 = *v4; /*0x4134b9*/
  v16 = *v4; /*0x4134c0*/
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)aP1 + 760))(aP1, *v4); /*0x4134c4*/
  if ( (v5 & 0x8000u) == 0 ) /*0x4134cd*/
    v5 = (__int16)v5; /*0x4134d3*/
  else
    v5 = 0; /*0x4134cf*/
  if ( v16 >= 0 ) /*0x4134df*/
    v6 = IDA_SHIWORD(v16); /*0x4134e5*/
  else
    v6 = 0; /*0x4134e1*/
  v7 = v5 / (g_AircraftTrackerPool / 20); /*0x413504*/
  v8 = 19; /*0x413506*/
  if ( v7 <= 19 ) /*0x41350e*/
    v8 = v7; /*0x413510*/
  v9 = v6 / (g_AircraftTrackerState / 20); /*0x41352f*/
  if ( v9 > 19 ) /*0x413534*/
    v9 = 19; /*0x413536*/
  v10 = 3 * (v8 + 20 * v9); /*0x413541*/
  result = *(&this->u32_1E0 * v9 + 6 * v8 + 2); /*0x413544*/
  v12 = (char *)(&this->q008 * v10); /*0x413548*/
  if ( *((_DWORD *)v12 + 4) < result /*0x413574*/
    || (v12[13] || !result)
    && (v13 = *((_DWORD *)v12 + 5), v13 > 0)
    && (result = (*(int (__thiscall **)(char *, int, _DWORD))(this->u32_A)(v12, result + v13, 0), (_BYTE)result) )
  {
    result = *((_DWORD *)v12 + 4); /*0x413576*/
    v14 = *((_DWORD *)v12 + 1); /*0x413579*/
    *((_DWORD *)v12 + 4) = result + 1; /*0x41357f*/
    *(_DWORD *)(v14 + 4 * result) = aP1; /*0x413582*/
  }
  return result; /*0x413585*/
}
} // namespace gamemd
// 0x4135D0
namespace gamemd {
int GadgetGrid::RemoveItem(IUnknown * aP1)
{
  int v3; // esi
  int v4; // edi
  int v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // edx
  char *v9; // esi
  int result; // eax
  int v11; // ecx
  int v12; // ecx
  __int16 v13; // [esp+Ah] [ebp-6h]
  char v14[4]; // [esp+Ch] [ebp-4h] BYREF

  v3 = *(_DWORD *)(*(int (__thiscall **)(int, char *))(aP1->u32_2F4)(aP1, v14); /*0x4135ec*/
  v13 = IDA_HIWORD(v3); /*0x4135f4*/
  (*(void (__thiscall **)(int, int))(aP1->u32_2F8)(aP1, dword_887850); /*0x4135fb*/
  if ( (v3 & 0x8000u) == 0 ) /*0x413604*/
    v3 = (__int16)v3; /*0x41360a*/
  else
    v3 = 0; /*0x413606*/
  if ( v13 >= 0 ) /*0x413616*/
    v4 = v13; /*0x41361c*/
  else
    v4 = 0; /*0x413618*/
  v5 = v3 / (g_AircraftTrackerPool / 20); /*0x41363b*/
  v6 = 19; /*0x41363d*/
  if ( v5 <= 19 ) /*0x413645*/
    v6 = v5; /*0x413647*/
  v7 = v4 / (g_AircraftTrackerState / 20); /*0x413666*/
  if ( v7 > 19 ) /*0x41366b*/
    v7 = 19; /*0x41366d*/
  v8 = *(&this->u32_1E0 * v7 + 6 * v6); /*0x413680*/
  v9 = (char *)(&this->u32_1E0 * v7 + 6 * v6); /*0x413683*/
  result = (*(int (__thiscall **)(char *, int *))(v8 + 16))(v9, &aP1); /*0x413688*/
  if ( result != -1 ) /*0x41368e*/
  {
    v11 = *((_DWORD *)v9 + 4); /*0x413690*/
    if ( result < v11 ) /*0x413695*/
    {
      v12 = v11 - 1; /*0x413697*/
      for ( *((_DWORD *)v9 + 4) = v12; /*0x41369d*/
            result < *((_DWORD *)v9 + 4);
            *(_DWORD *)(*((_DWORD *)v9 + 1) + 4 * result - 4) = *(_DWORD *)(*((_DWORD *)v9 + 1) + 4 * result) )
      {
        ++result; /*0x4136a2*/
      }
    }
  }
  return result; /*0x4136b1*/
}
} // namespace gamemd