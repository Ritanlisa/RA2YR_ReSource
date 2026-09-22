// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"

// 0x47F510
namespace gamemd {
void TacticalClass::DrawBuildingPlacement(IUnknown * aP1, int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  unsigned __int8 v12; // cl
  _BYTE * v4 = *(_BYTE **)&g_BuildingTypeClass_Array->__pad_0[4 * this->field44]; /*0x47f52c*/
  int v15 = 15 * *(char *)(this + 283); /*0x47f534*/
  int v16 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v4 + 156))(v4); /*0x47f544*/
  int v19; // [esp+20h] [ebp-8h] BYREF
  int * v5 = BuildingClass::CalcDrawPos(this, (IUnknown *)&v19); /*0x47f54b*/
  int v6 = *v5; /*0x47f554*/
  int v7 = aP1->field_4 + v5[1]; /*0x47f55e*/
  int * v8 = a2; /*0x47f560*/
  int v9 = v6 + aP1->field_0; /*0x47f564*/
  int v10 = a2[1]; /*0x47f568*/
  int v17 = v9 - *a2; /*0x47f571*/
  LOBYTE(v9) = this->field50; /*0x47f575*/
  int v11 = v7 - v10; /*0x47f57b*/
  int v18 = v11; /*0x47f580*/
  if ( (v9 & 0x80u) != 0 ) /*0x47f584*/
  {
    v12 = *(_BYTE *)(this + 286); /*0x47f586*/
    if ( v12 >= 9u && v12 <= 0x11u ) /*0x47f594*/
    {
      v17 -= 15; /*0x47f5a0*/
      v18 = v11 + 7; /*0x47f5a4*/
    }
  }
  if ( !this->field34 ) /*0x47f5a8*/
    TacticalClass::SetView(this, 0, 0x10000, 0, 1000, 1000, 1000); /*0x47f5c9*/
  char v13 = v4[682]; /*0x47f5ce*/
  LOBYTE(aP1) = *(_BYTE *)(this + 286); /*0x47f5dc*/
  if ( v13 ) /*0x47f5e0*/
  {
    LOBYTE(aP1) = 0; /*0x47f5e2*/
LABEL_9:
    DrawToSurfaceSHP( /*0x47f5e7*/
      *(int *)&DataGlobal_87F8E4[31280],
      this->field34,
      v16,
      (unsigned __int8)aP1 + *(__int16 *)(v16 + 6) / 2,
      &v17,
      v8,
      17921,
      0,
      -2 - v15,
      0,
      1000,
      0,
      0,
      0,
      0,
      0);
    return; /*0x47f632*/
  }
  if ( !v4[692] ) /*0x47f649*/
    goto LABEL_9; /*0x47f649*/
  int * v14 = this->field40; /*0x47f64b*/
  if ( v14 ) /*0x47f650*/
  {
    if ( TacticalClass::initTacticalMap(v14, (int *)&a2, (int *)&aP1) ) /*0x47f65c*/
      DrawToSurfaceSHP( /*0x47f696*/
        *(int *)&DataGlobal_87F8E4[31280],
        this->field34,
        (int)a2,
        (unsigned int)aP1,
        &v17,
        v8,
        17921,
        0,
        -2 - v15,
        0,
        1000,
        0,
        0,
        0,
        0,
        0);
  }
}
}
} // namespace gamemd

// 0x4801F0
namespace gamemd {
unsigned int TacticalClass::RenderCellFogOfWar(IUnknown * aP1, Tactical * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  unsigned int result; // eax

  unsigned int v4; // eax
  LOBYTE(v4) = Cell::GetAdjacentPassableMask((__int16 *)(this + 36), 0); /*0x480202*/
  this->field48 = v4; /*0x480207*/
  v4 = (char)v4; /*0x48020d*/
  if ( (char)v4 == -2 ) /*0x480213*/
  {
    v4 = 15; /*0x480215*/
  }
  else if ( (char)v4 == -1 ) /*0x48021f*/
  {
    v4 = 0; /*0x480221*/
  }
  RenderFogOfWar((unsigned int *)aP1, (int *)aP2->__pad_0, v4); /*0x480230*/
  result = Cell::GetAdjacentPassableMask((__int16 *)(this + 36), 1); /*0x48023e*/
  *(_BYTE *)(this + 289) = result; /*0x480243*/
  if ( (g_ScenarioClass_Instance->nextScenario[0] & 0x1000) != 0 && !HouseClass_Player->__pad_1D8[29] ) /*0x48025c*/
  {
    result = (char)result; /*0x480266*/
    if ( (char)result == -2 ) /*0x48026c*/
    {
      return (unsigned int)RenderFogOfWarOverlay((int)aP1, (int *)aP2->__pad_0, 0xFu); /*0x480278*/
    }
    else
    {
      if ( (char)result == -1 ) /*0x480287*/
        result = 0; /*0x480289*/
      return (unsigned int)RenderFogOfWarOverlay((int)aP1, (int *)aP2->__pad_0, result); /*0x480290*/
    }
  }
  return result; /*0x48027d*/
}
}
} // namespace gamemd

// 0x4802A0
namespace gamemd {
void TacticalClass::DrawCellTerrainOverlay(int * a2, int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int v5; // ebx
  int v6; // esi
  int v4 = this->field38; /*0x4802a6*/
  if ( v4 == 0xFFFF ) /*0x4802ae*/
  {
    v5 = 0; /*0x4802df*/
    v6 = *((_DWORD *)g_FrameCounter + unk_AA10B0); /*0x4802e1*/
  }
  else
  {
    v5 = *(unsigned __int8 *)(this + 282); /*0x4802b8*/
    v6 = *((_DWORD *)g_FrameCounter + v4); /*0x4802be*/
    if ( *(int *)(v6 + 752) > 1 ) /*0x4802c8*/
      CellClass::GetTerrainFlag((void *)v6, *(unsigned __int8 *)(this + 282)); /*0x4802cd*/
  }
  if ( *(_BYTE *)(v6 + 737) ) /*0x4802e4*/
    TacticalClass::DrawCellOverlay( /*0x480339*/
      v6,
      v5,
      g_DSurface_Hidden_2,
      *a2,
      a2[1] - 15 * *(char *)(this + 283),
      *a3,
      a3[1],
      a3[2],
      a3[3],
      58 - 15 * *(char *)(this + 283));
}
}
} // namespace gamemd

// 0x4AC380
namespace gamemd {
int TacticalClass::ProcessScroll(int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int v3; // eax
  int v10; // [esp+10h] [ebp-10h] BYREF
  int v11; // [esp+14h] [ebp-Ch]
  if ( !*(_BYTE *)(this + 4559) || this->q11B3 || this->q11B4 ) /*0x4ac3a3*/
  {
    LOBYTE(v3) = *(_BYTE *)(this + 4560); /*0x4ac436*/
    if ( (_BYTE)v3 ) /*0x4ac43e*/
    {
      int v6 = a2[1]; /*0x4ac45b*/
      v10 = *a2 - *(_DWORD *)(this + 4564); /*0x4ac45e*/
      v11 = v6 - *(_DWORD *)(this + 4568); /*0x4ac467*/
      double v7 = Math::Sqrt((double)v10 * (double)v10 + (double)v11 * (double)v11); /*0x4ac484*/
      v3 = Math::RoundToInt(v7); /*0x4ac48c*/
      if ( v3 > 4 ) /*0x4ac494*/
      {
        char v8 = this->q11B3; /*0x4ac496*/
        LOBYTE(v3) = 1; /*0x4ac49c*/
        *(_BYTE *)(this + 4559) = 1; /*0x4ac4a0*/
        *(_BYTE *)(this + 4560) = 0; /*0x4ac4a6*/
        if ( !v8 && !this->q11B4 ) /*0x4ac4af*/
        {
          BYTE1(g_TacticalClass_Instance[863].__tail_0) = 1; /*0x4ac4c0*/
          TacticalClass::InitScrollBounds(this + 4564); /*0x4ac4cc*/
          LOBYTE(v3) = Mouse::SetCursor((int)&DataGlobal_87F7E8, 0, 0); /*0x4ac4da*/
        }
      }
    }
  }
  else
  {
    v11 = g_Map_VisibleRect; /*0x4ac3c8*/
    v10 = DSurface_ViewBounds; /*0x4ac3d0*/
    v3 = *a2; /*0x4ac3d4*/
    int v4 = a2[1]; /*0x4ac3d6*/
    if ( *a2 < 0 ) /*0x4ac3db*/
      v3 = 0; /*0x4ac3dd*/
    if ( v3 >= g_Map_VisibleRectOffset ) /*0x4ac3e1*/
      v3 = g_Map_VisibleRectOffset - 1; /*0x4ac3e3*/
    if ( v4 < 0 ) /*0x4ac3e8*/
      v4 = 0; /*0x4ac3ea*/
    if ( v4 >= g_DSurface_WindowOffset ) /*0x4ac3ee*/
      v4 = g_DSurface_WindowOffset - 1; /*0x4ac3f0*/
    int v5 = *(_DWORD *)(this + 4572); /*0x4ac3f3*/
    v10 = v3; /*0x4ac3f9*/
    v11 = v4; /*0x4ac3ff*/
    if ( v3 != v5 || v4 != *(_DWORD *)(this + 4576) ) /*0x4ac40b*/
    {
      BYTE1(g_TacticalClass_Instance[863].__tail_0) = 1; /*0x4ac41c*/
      LOBYTE(v3) = TacticalClass::UpdateScrollMaxBounds(&v10); /*0x4ac429*/
    }
  }
  return v3; /*0x4ac42e*/
}
}
} // namespace gamemd

// 0x4AC700
namespace gamemd {
unsigned int * TacticalClass::SetDisplayMode(unsigned int * a2, char a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  _DWORD *result; // eax

  result = a2; /*0x4ac700*/
  char v5 = this->q11B3; /*0x4ac70b*/
  char v6 = v5; /*0x4ac711*/
  if ( a2 == (_DWORD *)-1 ) /*0x4ac713*/
  {
    v6 = v5 == 0; /*0x4ac728*/
  }
  else if ( a2 ) /*0x4ac717*/
  {
    if ( a2 == (_DWORD *)1 ) /*0x4ac71c*/
      v6 = 1; /*0x4ac71e*/
  }
  else
  {
    v6 = 0; /*0x4ac722*/
  }
  if ( v6 != v5 ) /*0x4ac72d*/
  {
    result = (_DWORD *)this->q11A8; /*0x4ac733*/
    if ( !result ) /*0x4ac73b*/
    {
      this->q11B0 = 0; /*0x4ac741*/
      this->q11B1 = 0; /*0x4ac748*/
      this->q11B2 = 0; /*0x4ac74f*/
      this->q11B4 = 0; /*0x4ac756*/
      int v7 = TacticalClass::updateVisibility((int *)HouseClass_Player); /*0x4ac763*/
      if ( v6 ) /*0x4ac76a*/
      {
        if ( v7 == -1 && (!a3 || *((_DWORD *)HouseClass_Player + 131) == -1) ) /*0x4ac786*/
        {
          int v8 = *(_DWORD *)this; /*0x4ac788*/
          this->q11B3 = 0; /*0x4ac78c*/
          result = (_DWORD *)(*(int (__thiscall **)(_BYTE *))(v8 + 80))(this); /*0x4ac793*/
          this->q11BC = 0; /*0x4ac796*/
        }
        else
        {
          this->q11B3 = 1; /*0x4ac7a7*/
          if ( !a3 ) /*0x4ac7ae*/
            *((_DWORD *)HouseClass_Player + 131) = v7; /*0x4ac7b6*/
          return (_DWORD *)MapClass::UnselectAll_ClearLimboLaunchers(); /*0x4ac7bc*/
        }
      }
      else
      {
        int v9 = *(_DWORD *)this; /*0x4ac7c6*/
        this->q11B3 = 0; /*0x4ac7ca*/
        (*(void (__thiscall **)(_BYTE *))(v9 + 80))(this); /*0x4ac7d1*/
        result = (_DWORD *)this->q11BC; /*0x4ac7d4*/
        if ( result ) /*0x4ac7dc*/
        {
          *result = *((_DWORD *)this + 1136); /*0x4ac7ea*/
          result[1] = *((_DWORD *)this + 1137); /*0x4ac7ef*/
          result[2] = *((_DWORD *)this + 1138); /*0x4ac7f5*/
          this->q11BC = 0; /*0x4ac7f8*/
          return (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 16))(g_WWMouseClass_Instance); /*0x4ac80a*/
        }
      }
    }
  }
  return result; /*0x4ac7a0*/
}
}
} // namespace gamemd

// 0x4AE290
namespace gamemd {
void TacticalClass::InterpolateView()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  wchar_t *v0; // ebp
  wchar_t *v16; // [esp+8h] [ebp-40h]
  v0 = g_SelectionManager; /*0x4ae295*/
  if ( (int)g_SelectionManager > 0 ) /*0x4ae29f*/
  {
  int v27[3]; // [esp+30h] [ebp-18h] BYREF
  bool v7; // zf
    int v1 = 0; /*0x4ae2a7*/
    int v2 = 0; /*0x4ae2a9*/
    int v3 = 0; /*0x4ae2ab*/
    int v18 = 0; /*0x4ae2af*/
    int v19 = 0; /*0x4ae2b3*/
    int v20 = 0; /*0x4ae2b7*/
    _DWORD * v4 = g_ObjectClass_CurrentCount; /*0x4ae2bd*/
    v16 = g_SelectionManager; /*0x4ae2c2*/
    do /*0x4ae2fc*/
    {
      _DWORD * v5 = (_DWORD *)*v4++; /*0x4ae2c6*/
      v27[0] = v5[39]; /*0x4ae2d5*/
      v1 += v27[0]; /*0x4ae2d9*/
      v2 += v5[40]; /*0x4ae2e0*/
      int v6 = v5[41]; /*0x4ae2e6*/
      v18 = v1; /*0x4ae2e9*/
      v3 += v6; /*0x4ae2ed*/
      v7 = v16 == (wchar_t *)1; /*0x4ae2ef*/
      v19 = v2; /*0x4ae2f0*/
      v20 = v3; /*0x4ae2f4*/
      v16 = (wchar_t *)((char *)v16 - 1); /*0x4ae2f8*/
    }
    while ( !v7 ); /*0x4ae2fc*/
    int v8 = 0; /*0x4ae2fe*/
    int v24 = v1; /*0x4ae302*/
    int v25 = v2; /*0x4ae306*/
    int v26 = v3; /*0x4ae30a*/
    if ( g_SelectionManager ) /*0x4ae30e*/
    {
      v1 /= (int)g_SelectionManager; /*0x4ae315*/
      v18 = v1; /*0x4ae31c*/
      v2 /= (int)g_SelectionManager; /*0x4ae320*/
      v19 = v2; /*0x4ae327*/
      v3 /= (int)g_SelectionManager; /*0x4ae32b*/
      v20 = v3; /*0x4ae32d*/
    }
    if ( (int)g_SelectionManager > 2 ) /*0x4ae334*/
    {
  int v15; // eax
  int v14; // edi
  int v13; // esi
      int v21 = 0; /*0x4ae33c*/
      int v22 = 0; /*0x4ae340*/
      int v23 = 0; /*0x4ae344*/
      int v17 = 0; /*0x4ae348*/
      if ( (int)g_SelectionManager > 0 ) /*0x4ae34c*/
      {
        while ( 1 ) /*0x4ae384*/
        {
  int *v9; // eax
          v9 = Coord::Subtract( /*0x4ae384*/
  int v28[3]; // [esp+3Ch] [ebp-Ch] BYREF
                 v28,
                 v1 - *(_DWORD *)(*((_DWORD *)g_ObjectClass_CurrentCount + v8) + 156),
                 v2 - *(_DWORD *)(*((_DWORD *)g_ObjectClass_CurrentCount + v8) + 160),
                 v3 - *(_DWORD *)(*((_DWORD *)g_ObjectClass_CurrentCount + v8) + 164));
          v27[0] = *v9; /*0x4ae38b*/
          v27[1] = v9[1]; /*0x4ae396*/
          v27[2] = v9[2]; /*0x4ae39d*/
          int v10 = Coord::Length(v27); /*0x4ae3a1*/
          if ( v10 > v17 ) /*0x4ae3aa*/
          {
            v17 = v10; /*0x4ae3b2*/
            int * v11 = (int *)(*((_DWORD *)g_ObjectClass_CurrentCount + v8) + 156); /*0x4ae3b9*/
            v21 = *v11; /*0x4ae3c1*/
            v22 = v11[1]; /*0x4ae3c8*/
            v23 = v11[2]; /*0x4ae3cf*/
          }
          v0 = g_SelectionManager; /*0x4ae3d3*/
          if ( ++v8 >= (int)g_SelectionManager ) /*0x4ae3dc*/
            break; /*0x4ae3dc*/
          v2 = v19; /*0x4ae354*/
          v3 = v20; /*0x4ae358*/
          v1 = v18; /*0x4ae35c*/
        }
      }
      int v12 = (int)v0 - 1; /*0x4ae3fe*/
      if ( v0 == (wchar_t *)1 ) /*0x4ae405*/
      {
        v13 = 0; /*0x4ae407*/
        v14 = 0; /*0x4ae409*/
        v15 = 0; /*0x4ae40b*/
      }
      else
      {
        v13 = (v24 - v21) / v12; /*0x4ae412*/
        v14 = (v25 - v22) / v12; /*0x4ae419*/
        v15 = (v26 - v23) / v12; /*0x4ae41e*/
      }
      v18 = v13; /*0x4ae420*/
      v19 = v14; /*0x4ae424*/
      v20 = v15; /*0x4ae428*/
    }
    Tactical::SetTacticalPosition(&v18); /*0x4ae437*/
  }
}
}
} // namespace gamemd

// 0x4F45B0
namespace gamemd {
void TacticalClass_RenderFrame()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  char result; // al
  int v5[24]; // [esp+4h] [ebp-C0h] BYREF

  if ( !DataGlobal_8A0DF0 /*0x4f45d8*/
    || !DataGlobal_8A0E08
    || (*(int (__stdcall **)(int))(*(_DWORD *)g_DrawColorState + 40))(g_DrawColorState) )
  {
    goto LABEL_13; /*0x4f45dd*/
  }
  if ( !AudioStream::ReadSamples(0) ) /*0x4f45ea*/
  {
    void * v3 = DataGlobal_8A0E0C; /*0x4f45f7*/
    if ( !DataGlobal_8A0E0C ) /*0x4f45ff*/
      goto LABEL_8; /*0x4f45ff*/
    if ( !AudioStream::ReadSamples(0) ) /*0x4f4602*/
    {
      v3 = DataGlobal_8A0E0C; /*0x4f460f*/
LABEL_8:
      if ( DataGlobal_8A0E10 ) /*0x4f461c*/
      {
        if ( v3 ) /*0x4f4624*/
        {
          ColorStruct::SetRGB(v5, 0x80u, 0x80u, 0x80u); /*0x4f463d*/
  _DWORD v6[24]; // [esp+64h] [ebp-60h] BYREF
          ColorStruct::SetRGB(v6, 0x80u, 0x80u, 0x80u); /*0x4f4655*/
          Tactical::SetCellTransform((char *)v5, 0, 0, 0, 1008981770, 0, 0); /*0x4f466d*/
          Tactical::SetCellTransform((char *)v5, 1, 0, 1132396544, 1008981770, 0, 1065353216); /*0x4f468b*/
          Tactical::SetCellTransform((char *)v5, 2, 1132396544, 1132396544, 1008981770, 1065353216, 1065353216); /*0x4f46af*/
          Tactical::SetCellTransform((char *)v6, 0, 0, 0, 1008981770, 0, 0); /*0x4f46c7*/
          Tactical::SetCellTransform((char *)v6, 1, 1132396544, 1132396544, 1008981770, 1065353216, 1065353216); /*0x4f46eb*/
          Tactical::SetCellTransform((char *)v6, 2, 1132396544, 0, 1008981770, 1065353216, 0); /*0x4f4709*/
          StructTable::Append(DataGlobal_8A0E10, v5); /*0x4f4719*/
          StructTable::Append(DataGlobal_8A0E10, v6); /*0x4f4729*/
        }
        RenderTactical3DScene(*(_DWORD *)(DSurface_Composite + 28)); /*0x4f473e*/
      }
    }
  }
  (*(void (__stdcall **)(int))(*(_DWORD *)g_DrawColorState + 44))(g_DrawColorState); /*0x4f4743*/
LABEL_13:
  result = unk_A9FA94; /*0x4f474e*/
  if ( !unk_A9FA94 ) /*0x4f4755*/
  {
    result = Frame::Present(DSurface_Composite, a1, a2, a3, 0, v5[0], v5[1], (int *)v5[2]); /*0x4f4761*/
    unk_A9FA94 = 0; /*0x4f4766*/
  }
  return result; /*0x4f476d*/
}
}
} // namespace gamemd

// 0x547230
namespace gamemd {
void TacticalClass::DrawCellOverlay(int a2, IUnknown * aP2, int a4, int a5, IUnknown * aP5, int a7, int a8, int a9, int a10)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  CCINIClass *v11; // esi
  int v13; // esi
  int v14; // edx
  int v15; // ecx
  IUnknown *v16; // ecx
  int v10 = this->q294; /*0x547230*/
  v11 = g_TerrainTypeTable2; /*0x547237*/
  if ( (v10 < (int)g_TerrainTypeTable2 || v10 >= (int)&g_TerrainTypeTable2->headNode[1] + 2) /*0x547260*/
    && ((v11 = *(CCINIClass **)&g_NetworkPlayerBuffer[80476], v10 < *(int *)&g_NetworkPlayerBuffer[80476])
     || v10 >= *(_DWORD *)&g_NetworkPlayerBuffer[80476] + 10)
    || v10 - (_DWORD)v11 == -1 )
  {
    if ( *(_BYTE *)(this + 737) ) /*0x547294*/
    {
  unsigned int v17; // eax
      v16 = (IUnknown *)&g_NetworkPlayerBuffer[80368]; /*0x5472a2*/
      do /*0x5472c9*/
      {
        v17 = v10 - v16->field_0; /*0x5472ab*/
        if ( v17 < 0x28 ) /*0x5472ad*/
          break; /*0x5472ad*/
        if ( v16 == (IUnknown *)&g_NetworkPlayerBuffer[80384] ) /*0x5472ba*/
          return; /*0x5472ba*/
        v16 = (IUnknown *)((char *)v16 + 4); /*0x5472c0*/
      }
      while ( (int)v16 < (int)&g_NetworkPlayerBuffer[80388] ); /*0x5472c9*/
      int v18 = 4 * v17; /*0x5472cf*/
      if ( a2 == dword_ABC2D4[v18] ) /*0x5472d8*/
      {
        v13 = dword_ABC2D0[v18]; /*0x5472de*/
        if ( v13 ) /*0x5472e6*/
        {
          v14 = dword_ABC2DC[v18]; /*0x5472ee*/
          v15 = dword_ABC2D8[v18] + 30; /*0x5472f4*/
          goto LABEL_17; /*0x5472f4*/
        }
      }
    }
  }
  else
  {
    int v12 = 4 * (v10 - (_DWORD)v11); /*0x547266*/
    if ( a2 == dword_ABC214[v12] ) /*0x54726f*/
    {
      v13 = dword_ABC210[v12]; /*0x547275*/
      if ( v13 ) /*0x54727d*/
      {
        v14 = dword_ABC21C[v12]; /*0x547289*/
        v15 = dword_ABC218[v12] + 30; /*0x54728f*/
LABEL_17:
        a4 = *(_DWORD *)&DataGlobal_87F8E4[30396] + v15 + a4 - (_DWORD)aP5; /*0x5472f7*/
        a5 = *(_DWORD *)&DataGlobal_87F8E4[30400] + v14 + 15 + a5 - a7; /*0x54732c*/
        DrawToSurfaceSHP( /*0x547362*/
          (int)aP2,
          *(_DWORD *)DataGlobal_87F69C->__pad_0,
          (int)lpBuffer,
          v13 - 1,
          &a4,
          (int *)&aP5,
          17921,
          0,
          a10,
          0,
          1000,
          0,
          0,
          0,
          0,
          0);
      }
    }
  }
}
}
} // namespace gamemd

// 0x6D04F0
namespace gamemd {
void TacticalClass_BuildCommandBar()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  unsigned __int8 v4; // bl
  ShapeButtonClass *v7; // edi
  TabClass *v12; // [esp+0h] [ebp-24h]
  SidebarClass *v15; // [esp+Ch] [ebp-18h]
  int v16; // [esp+10h] [ebp-14h]
  int v14; // [esp+8h] [ebp-1Ch] BYREF
  int v13 = ObjectClass::ToggleSidebarDisplay(a0, v12, v13, v14, v15, v16); /*0x6d0501*/
  if ( !v4 ) /*0x6d0505*/
    return v4; /*0x6d0505*/
  char v5 = a1[21828]; /*0x6d0513*/
  if ( a1[21413] ) /*0x6d050b*/
  {
    if ( v5 ) /*0x6d0521*/
    {
      CommandClass::BuildBar(a1); /*0x6d0525*/
      (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)a1 + 56))(a1, 2); /*0x6d0530*/
      return v4; /*0x6d053a*/
    }
    (*(void (__thiscall **)(_BYTE *, char *))(*(_DWORD *)a1 + 48))(a1, &stru_B05488[30648]); /*0x6d0546*/
    if ( &stru_B05488 != (IUnknown *)-30648 ) /*0x6d0550*/
    {
      v15 = *(SidebarClass **)&stru_B05488[30660]; /*0x6d0567*/
      v16 = *(_DWORD *)&stru_B05488[30664]; /*0x6d0571*/
      int v17 = *(_DWORD *)&stru_B05488[30668]; /*0x6d057b*/
      char v20 = 0; /*0x6d0586*/
      v14 = *(_DWORD *)&stru_B05488[30684]; /*0x6d058b*/
      char * v19 = &stru_830620[74264]; /*0x6d058f*/
      int v18 = *(_DWORD *)&stru_B05488[30672]; /*0x6d0597*/
      HashTable::Remove(*(int **)&stru_87C374[45044], *(int *)&stru_B05488[30684]); /*0x6d059b*/
      CommandClass::AddAction(*(int *)&stru_87C374[45044], (ToolTipManager *)&v14); /*0x6d05ab*/
      (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)a1 + 56))(a1, 2); /*0x6d05b6*/
      return v4; /*0x6d05c0*/
    }
    goto LABEL_18; /*0x6d0550*/
  }
  if ( !v5 ) /*0x6d05c5*/
  {
    (*(void (__thiscall **)(_BYTE *, char *))(*(_DWORD *)a1 + 52))(a1, &stru_B05488[30648]); /*0x6d0656*/
    HashTable::Remove(*(int **)&stru_87C374[45044], 241); /*0x6d0664*/
LABEL_18:
    (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)a1 + 56))(a1, 2); /*0x6d0669*/
    return v4; /*0x6d0672*/
  }
  v7 = (ShapeButtonClass *)&stru_B05488[27960]; /*0x6d05cc*/
  do /*0x6d05e2*/
  {
    (*(void (__thiscall **)(_BYTE *, ShapeButtonClass *))(*(_DWORD *)a1 + 52))(a1, v7); /*0x6d05d6*/
    v7 += 8; /*0x6d05d9*/
  }
  while ( (int)v7 < (int)&stru_B05488[30360] ); /*0x6d05e2*/
  (*(void (__thiscall **)(_BYTE *, char *, int))(*(_DWORD *)a1 + 52))(a1, &stru_B05488[30760], a2); /*0x6d05ed*/
  char * v8 = &stru_B05488[30448]; /*0x6d05f0*/
  do /*0x6d0627*/
  {
    int v9 = *(_DWORD *)v8; /*0x6d05f5*/
    if ( *(int *)v8 >= 0 && v9 < 25 ) /*0x6d05fe*/
    {
      char * v10 = &stru_B05488[22428][96 * v9 + 5532]; /*0x6d0606*/
      if ( v10 ) /*0x6d060d*/
        HashTable::Remove(*(int **)&stru_87C374[45044], *((_DWORD *)v10 + 9)); /*0x6d0619*/
    }
    v8 += 4; /*0x6d061e*/
  }
  while ( (int)v8 < (int)&stru_B05488[30548] ); /*0x6d0627*/
  HashTable::Remove(*(int **)&stru_87C374[45044], 240); /*0x6d0634*/
  (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)a1 + 56))(a1, 2); /*0x6d0640*/
  return v4; /*0x6d0535*/
}
}
} // namespace gamemd

// 0x6D2DE0
namespace gamemd {
signed int TacticalClass::RenderIsometricOverlay(IUnknown * aP1, IUnknown * aP2, char a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  signed int result; // eax
  IUnknown *v15; // ecx
  AbstractClass v17; // [esp+Ch] [ebp-58h] BYREF
  _DWORD v20[4]; // [esp+54h] [ebp-10h] BYREF
  IUnknown *aP1a; // [esp+68h] [ebp+4h]

  char v4 = a4; /*0x6d2de4*/
  if ( a4 ) /*0x6d2dee*/
  {
    TacticalClass::RenderIsometric( /*0x6d2dfa*/
      (int)this,
      (Tactical *)&DataGlobal_87F8E4[30396],
      (AbstractClass *)&DataGlobal_87F8E4[30396]);
  }
  else
  {
    if ( aP1->field_8 > 0 && aP1->field_C > 0 ) /*0x6d2e0c*/
      TacticalClass::RenderIsometric((int)this, (Tactical *)aP1, (AbstractClass *)aP1); /*0x6d2e12*/
    if ( aP2->field_8 > 0 && aP2->field_C > 0 ) /*0x6d2e27*/
      TacticalClass::RenderIsometric((int)this, (Tactical *)aP2, (AbstractClass *)aP2); /*0x6d2e2d*/
  }
  if ( (int)this->visibleCellCount > 0 && !a4 ) /*0x6d2e42*/
  {
    aP1a = 0; /*0x6d2e4a*/
    _DWORD * v6 = this + 57; /*0x6d2e5e*/
    do /*0x6d2f79*/
    {
      Coord::Subtract( /*0x6d2eaf*/
        &v17[12],
        (IUnknown *)(((((__int16)*(_DWORD *)(*v6 + 36) << 8) + 128) / 256) << 8),
        (IUnknown *)(((((__int16)HIWORD(*(_DWORD *)(*v6 + 36)) << 8) + 128) / 256) << 8),
        0);
      v17.nextArrayIndex = *(_DWORD *)&v17[12]; /*0x6d2ec0*/
      v17.referenceCount = v17.uniqueId; /*0x6d2ec4*/
      v17.NeedsSaveOrLink = (void *)v17.abstractFlags; /*0x6d2ed4*/
      int * v7 = Coord::To_ScreenRaw((int *)&v17[4], &v17.nextArrayIndex); /*0x6d2ed8*/
      int v8 = this->q0B4; /*0x6d2ee5*/
      int v9 = *v7 - this->visibleArea; /*0x6d2eeb*/
      int v10 = v7[1]; /*0x6d2eed*/
  int v19[8]; // [esp+34h] [ebp-30h] BYREF
      v19[0] = v9 - 30; /*0x6d2ef3*/
      v19[3] = 30; /*0x6d2efc*/
      v19[1] = v10 - v8 + *(_DWORD *)&DataGlobal_87F8E4[30400]; /*0x6d2f16*/
      v19[2] = 60; /*0x6d2f24*/
      int * v11 = ClipRectIntersection(v20, (int *)&DataGlobal_87F8E4[30396], v19, 0, 0); /*0x6d2f28*/
      v19[4] = *v11; /*0x6d2f31*/
      v19[5] = v11[1]; /*0x6d2f38*/
      if ( v11[2] > 0 && v11[3] > 0 ) /*0x6d2f48*/
      {
        *(_DWORD *)v17[0] = *(_DWORD *)(*v6 + 36); /*0x6d2f5c*/
        TacticalMapClass::ProcessCell(this, &v17, (int)v19); /*0x6d2f60*/
      }
      ++v6; /*0x6d2f70*/
      aP1a = (IUnknown *)((char *)aP1a + 1); /*0x6d2f75*/
    }
    while ( (int)aP1a < this->visibleCellCount ); /*0x6d2f79*/
    v4 = a4; /*0x6d2f7f*/
  }
  result = *(_DWORD *)&g_OverlayTypeConfig[22160]; /*0x6d2f84*/
  if ( *(_DWORD *)&g_OverlayTypeConfig[22160] ) /*0x6d2f8b*/
  {
    if ( !v4 ) /*0x6d2f93*/
    {
      result = *(_DWORD *)&g_OverlayTypeConfig[22160] - 1; /*0x6d2f99*/
      if ( *(_DWORD *)&g_OverlayTypeConfig[22160] - 1 >= 0 ) /*0x6d2f9c*/
      {
        int v13 = *(_DWORD *)&g_OverlayTypeConfig[22160]; /*0x6d2fa5*/
        int v14 = 20 * result; /*0x6d2fa8*/
        do /*0x6d302e*/
        {
          v17.nextArrayIndex = *(_DWORD *)(v14 + *(_DWORD *)&g_OverlayTypeConfig[22148]); /*0x6d2fbc*/
          v17.referenceCount = *(_DWORD *)(v14 + *(_DWORD *)&g_OverlayTypeConfig[22148] + 4); /*0x6d2fc3*/
          v17.NeedsSaveOrLink = *(void **)(v14 + *(_DWORD *)&g_OverlayTypeConfig[22148] + 8); /*0x6d2fca*/
          int v18 = *(_DWORD *)(v14 + *(_DWORD *)&g_OverlayTypeConfig[22148] + 12); /*0x6d2fdd*/
          v17.referenceCount += *(_DWORD *)&DataGlobal_87F8E4[30400]; /*0x6d2feb*/
          v15 = (IUnknown *)ClipRectIntersection( /*0x6d2ff4*/
                              v20,
                              (int *)&DataGlobal_87F8E4[30396],
                              &v17.nextArrayIndex,
                              0,
                              0);
          v17.nextArrayIndex = v15->field_0; /*0x6d2ff8*/
          v17.referenceCount = v15->field_4; /*0x6d2fff*/
          result = v15->field_8; /*0x6d3003*/
          v17.NeedsSaveOrLink = (void *)result; /*0x6d3006*/
          int v16 = v15->field_C; /*0x6d300a*/
          v18 = v16; /*0x6d300f*/
          if ( result > 0 && v16 > 0 ) /*0x6d3017*/
            result = TacticalClass::RenderIsometric( /*0x6d3025*/
                       (int)this,
                       (Tactical *)&v17.nextArrayIndex,
                       (AbstractClass *)&v17.nextArrayIndex);
          v14 -= 20; /*0x6d302a*/
          --v13; /*0x6d302d*/
        }
        while ( v13 ); /*0x6d302e*/
      }
    }
  }
  return result; /*0x6d3034*/
}
}
} // namespace gamemd

// 0x6D3660
namespace gamemd {
int TacticalClass::CalcAllDrawPositions(AbstractClass * aP1, BuildingTypeClass * aP2, int * a3, char a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  ObjectClass *Coords; // eax
  int result; // eax
  ObjectClass **v17; // eax
  int v19[4]; // [esp+18h] [ebp-30h] BYREF
  ObjectClass *v20; // [esp+28h] [ebp-20h] BYREF
  ObjectClass *v21; // [esp+2Ch] [ebp-1Ch]
  ObjectClass *v22; // [esp+30h] [ebp-18h]
  ObjectClass *v23; // [esp+34h] [ebp-14h]
  int v24[4]; // [esp+38h] [ebp-10h] BYREF
  int v25; // [esp+58h] [ebp+10h]
  if ( (int)this->visibleCellCount <= 0 ) /*0x6d3671*/
  {
    if ( !a5 ) /*0x6d3742*/
      goto LABEL_11; /*0x6d3742*/
LABEL_10:
    TacticalClass::CalcBuildingDrawPos((int)this, (IUnknown *)&DataGlobal_87F8E4[30396]); /*0x6d3744*/
    goto LABEL_11; /*0x6d374b*/
  }
  if ( a5 ) /*0x6d367d*/
    goto LABEL_10; /*0x6d367d*/
  int v6 = 0; /*0x6d3683*/
  int * v7 = this + 57; /*0x6d368d*/
  do /*0x6d3734*/
  {
    Coords = (ObjectClass *)CellClass::GetCoords((_DWORD *)*v7, v24); /*0x6d369b*/
    v20 = *(ObjectClass **)Coords->__pad_0; /*0x6d36a2*/
    v21 = *(ObjectClass **)&Coords->__pad_0[4]; /*0x6d36ae*/
    v22 = 0; /*0x6d36c0*/
    int * v9 = Coord::To_ScreenRaw(v19, &v20); /*0x6d36c8*/
    int v10 = v9[1] - this->q0B4; /*0x6d36e8*/
  int v18[2]; // [esp+10h] [ebp-38h] BYREF
    v18[0] = *v9 - this->visibleArea + *(_DWORD *)&DataGlobal_87F8E4[30396] - 30; /*0x6d36f4*/
    v18[1] = v10 + *(_DWORD *)&DataGlobal_87F8E4[30400] - 15; /*0x6d3703*/
    if ( g_hWnd ) /*0x6d3707*/
      TacticalClass::RenderCellFogOfWar(*v7, (IUnknown *)v18, (Tactical *)a3); /*0x6d3716*/
    UpdateSpotlightsFoo(v18, a3); /*0x6d3723*/
    ++v6; /*0x6d372e*/
    ++v7; /*0x6d372f*/
  }
  while ( v6 < this->visibleCellCount ); /*0x6d3734*/
LABEL_11:
  int v11 = 0; /*0x6d3750*/
  if ( *(int *)&aP1->__pad_0[8] > 0 && *(int *)&aP1->__pad_0[12] > 0 && !a5 ) /*0x6d3766*/
    TacticalClass::CalcBuildingDrawPos((int)this, (IUnknown *)aP1); /*0x6d376b*/
  if ( *(int *)&aP2->vtable0[8] > 0 && *(int *)&aP2->vtable0[12] > 0 && !a5 ) /*0x6d3784*/
    TacticalClass::CalcBuildingDrawPos((int)this, (IUnknown *)aP2); /*0x6d3789*/
  result = *(_DWORD *)&g_OverlayTypeConfig[22160]; /*0x6d378e*/
  v25 = 0; /*0x6d3793*/
  if ( *(int *)&g_OverlayTypeConfig[22160] > 0 ) /*0x6d3799*/
  {
    int v13 = *(_DWORD *)&g_OverlayTypeConfig[22148]; /*0x6d379f*/
    do /*0x6d3860*/
    {
      int v14 = *(_DWORD *)(v11 + v13); /*0x6d37af*/
      int v15 = *(_DWORD *)(v11 + v13 + 4) + *(_DWORD *)&DataGlobal_87F8E4[30400]; /*0x6d37b7*/
      int v16 = *(_DWORD *)(v11 + v13 + 8); /*0x6d37b9*/
      v24[3] = *(_DWORD *)(v11 + v13 + 12); /*0x6d37c3*/
      v24[1] = v15; /*0x6d37cf*/
      v24[0] = v14 + *(_DWORD *)&DataGlobal_87F8E4[30396]; /*0x6d37dc*/
      v24[2] = v16; /*0x6d37e0*/
      v17 = (ObjectClass **)ClipRectIntersection(v19, v24, a3, 0, 0); /*0x6d37e4*/
      v20 = *v17; /*0x6d37ed*/
      v21 = v17[1]; /*0x6d37f4*/
      v22 = v17[2]; /*0x6d37fb*/
      v13 = *(_DWORD *)&g_OverlayTypeConfig[22148]; /*0x6d37ff*/
      v23 = v17[3]; /*0x6d3808*/
      if ( *(_BYTE *)(v11 + *(_DWORD *)&g_OverlayTypeConfig[22148] + 16) ) /*0x6d380c*/
      {
        TacticalClass::FillScanlinesTransparent((int)g_VisibleSurfaceDescriptor, (int)*v17, (int)v17[1], (int)v17[2], (int)v17[3]); /*0x6d3835*/
        TacticalClass::CalcBuildingDrawPos((int)this, (IUnknown *)&v20); /*0x6d3841*/
        v13 = *(_DWORD *)&g_OverlayTypeConfig[22148]; /*0x6d3846*/
      }
      result = v25 + 1; /*0x6d3856*/
      v11 += 20; /*0x6d3857*/
      ++v25; /*0x6d385c*/
    }
    while ( v25 < *(int *)&g_OverlayTypeConfig[22160] ); /*0x6d3860*/
  }
  return result; /*0x6d3866*/
}
}
} // namespace gamemd

// 0x6D6D10
namespace gamemd {
void * TacticalClass::DrawBuildingsInView(AbstractClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  BuildingTypeClass *v7; // ebx
  int *result; // eax
  ObjectClass *v17; // eax
  ObjectClass *v18; // ebx
  int *StartCoords; // eax
  BuildingTypeClass *v26; // ecx
  int *PlacementRect; // eax
  BuildingTypeClass *v31; // [esp+10h] [ebp-B0h] BYREF
  BuildingTypeClass *v33; // [esp+18h] [ebp-A8h]
  BuildingTypeClass *v36; // [esp+24h] [ebp-9Ch]
  _DWORD var90[2]; // [esp+30h] [ebp-90h] BYREF
  BuildingTypeClass *v38; // [esp+38h] [ebp-88h]
  int var74; // [esp+4Ch] [ebp-74h]
  IUnknown *v44; // [esp+50h] [ebp-70h]
  BuildingTypeClass *v52; // [esp+78h] [ebp-48h] BYREF
  int var30; // [esp+90h] [ebp-30h] BYREF
  AbstractClass *v56; // [esp+94h] [ebp-2Ch]
  int v3 = *(_DWORD *)aP1->__pad_0; /*0x6d6d2f*/
  int v42 = 0; /*0x6d6d31*/
  int v4 = this->visibleArea + v3; /*0x6d6d45*/
  int v5 = *(_DWORD *)&aP1->__pad_0[4] + this->q0B4; /*0x6d6d4c*/
  int v34 = v4 - *(_DWORD *)&stru_87C374[44076]; /*0x6d6d4e*/
  int v35 = v5 - *(_DWORD *)&stru_87C374[44080]; /*0x6d6d58*/
  float v40 = (float)(v4 - *(_DWORD *)&stru_87C374[44076]); /*0x6d6d67*/
  float v41 = (float)(v5 - *(_DWORD *)&stru_87C374[44080]); /*0x6d6d73*/
  int a1; // [esp+48h] [ebp-78h] BYREF
  float * v6 = TransformMatrix3x4Point((AbstractClass *)&a1, (IUnknown *)(this + 3556), (IUnknown *)&v40); /*0x6d6d77*/
  v40 = *v6; /*0x6d6d7e*/
  v41 = v6[1]; /*0x6d6d89*/
  v42 = *((_DWORD *)v6 + 2); /*0x6d6d90*/
  v7 = (BuildingTypeClass *)Math::RoundToInt(v40); /*0x6d6d9d*/
  int v8 = Math::RoundToInt(v41); /*0x6d6d9f*/
  v52 = v7; /*0x6d6da6*/
  int v53 = v8; /*0x6d6dac*/
  int v54 = 0; /*0x6d6db0*/
  if ( v8 < 0 ) /*0x6d6db7*/
    v53 = 0; /*0x6d6db9*/
  if ( (int)v7 < 0 ) /*0x6d6dbf*/
    v52 = 0; /*0x6d6dc1*/
  int v9 = *((_DWORD *)Coord::To_Cell(&stru_87C374[13428], (IUnknown *)&v52) + 9); /*0x6d6dd4*/
  int v10 = (unsigned __int64)(2290649225LL * *(int *)&aP1->__pad_0[12]) >> 32; /*0x6d6de3*/
  int v11 = *(_DWORD *)&aP1->__pad_0[8]; /*0x6d6de5*/
  _DWORD v37[2]; // [esp+28h] [ebp-98h]
  v37[0] = v9; /*0x6d6df3*/
  int v12 = (v10 >> 3) + ((unsigned int)v10 >> 31) + 20; /*0x6d6df7*/
  v38 = (BuildingTypeClass *)(v11 / 60 + 4); /*0x6d6e17*/
  result = ClipRectIntersection((IUnknown *)&var30, (IUnknown *)&stru_87C374[44076], (IUnknown *)aP1, 0, 0); /*0x6d6e20*/
  int v14 = *result; /*0x6d6e25*/
  HIWORD(v37[0]) = HIWORD(v9) - 2; /*0x6d6e27*/
  int a2[4]; // [esp+64h] [ebp-5Ch] BYREF
  a2[0] = v14; /*0x6d6e2d*/
  int v15 = v12 + 1; /*0x6d6e37*/
  a2[1] = result[1]; /*0x6d6e38*/
  LOWORD(v37[0]) = v9 - 4; /*0x6d6e3c*/
  int v16 = result[2]; /*0x6d6e41*/
  int v51 = v15; /*0x6d6e44*/
  a2[2] = v16; /*0x6d6e48*/
  a2[3] = result[3]; /*0x6d6e51*/
  if ( v15 >= 0 ) /*0x6d6e55*/
  {
  int v59[4]; // [esp+B0h] [ebp-10h] BYREF
  int v58[4]; // [esp+A0h] [ebp-20h] BYREF
  int v49; // [esp+60h] [ebp-60h]
  int v48; // [esp+5Ch] [ebp-64h]
  int v47; // [esp+58h] [ebp-68h]
  int v46; // [esp+54h] [ebp-6Ch] BYREF
    int v32 = v15 + 1; /*0x6d6e5e*/
    do /*0x6d702b*/
    {
      LOWORD(v34) = v15 / 2; /*0x6d6e69*/
      HIWORD(v34) = v32 / 2; /*0x6d6e7b*/
      LOWORD(v33) = LOWORD(v37[0]) + v34; /*0x6d6e8a*/
      HIWORD(v33) = HIWORD(v37[0]) + HIWORD(v34); /*0x6d6e95*/
      result = &v38->vtable0; /*0x6d6e9a*/
      v31 = v33; /*0x6d6ea4*/
      if ( (int)v38 > 0 ) /*0x6d6ea8*/
      {
        v36 = v38; /*0x6d6eae*/
        do /*0x6d7019*/
        {
          if ( LayerClass::CoordinatesLegal(&stru_87C374[13428], (IUnknown *)&v31) ) /*0x6d6ebc*/
          {
            v17 = (ObjectClass *)CellCoord::To_CellObj(&stru_87C374[13428], (__int16 *)&v31); /*0x6d6ed3*/
            v18 = v17; /*0x6d6ed8*/
            if ( v17->ambientSoundController[2] != -1 ) /*0x6d6ede*/
            {
              StartCoords = House::GetStartCoords((int)v17, (IUnknown *)v58); /*0x6d6eee*/
              v46 = *StartCoords; /*0x6d6ef7*/
              v47 = StartCoords[1]; /*0x6d6f00*/
              v48 = StartCoords[2]; /*0x6d6f07*/
              v49 = StartCoords[3]; /*0x6d6f19*/
              int * v20 = ClipRectIntersection((IUnknown *)v59, (IUnknown *)a2, (IUnknown *)&v46, 0, 0); /*0x6d6f22*/
              var30 = *v20; /*0x6d6f2b*/
              v56 = (AbstractClass *)v20[1]; /*0x6d6f35*/
              if ( v20[2] > 0 && v20[3] > 0 ) /*0x6d6f4c*/
              {
                Coord::Subtract( /*0x6d6f98*/
  _DWORD v55[3]; // [esp+84h] [ebp-3Ch] BYREF
                  v55,
                  (IUnknown *)(((((__int16)v31 << 8) + 128) / 256) << 8),
                  (IUnknown *)((((SHIWORD(v31) << 8) + 128) / 256) << 8),
                  0);
                a1 = v55[0]; /*0x6d6fb2*/
                var74 = v55[1]; /*0x6d6fb6*/
                v44 = (IUnknown *)v55[2]; /*0x6d6fc6*/
                int * v21 = Coord::To_ScreenRaw((AbstractClass *)&v40, (IUnknown *)&a1); /*0x6d6fca*/
                int v22 = this->visibleArea; /*0x6d6fcf*/
                int v23 = this->q0B4; /*0x6d6fd7*/
                var90[0] = *v21; /*0x6d6fdf*/
                int v24 = v21[1] - v23; /*0x6d6feb*/
                var90[0] = var90[0] - v22 - 30; /*0x6d6fed*/
                var90[1] = v24; /*0x6d6ff9*/
                BuildingClass::Draw_0((int)v18, var90, a2); /*0x6d7001*/
              }
            }
          }
          LOWORD(v31) = (_WORD)v31 + 1; /*0x6d7006*/
          --HIWORD(v31); /*0x6d700f*/
          result = (int *)((char *)v36[-1].align_1794 + 3); /*0x6d7014*/
          v36 = (BuildingTypeClass *)((char *)v36 - 1); /*0x6d7015*/
        }
        while ( v36 ); /*0x6d7019*/
      }
      --v15; /*0x6d7023*/
      --v32; /*0x6d7027*/
    }
    while ( v15 >= 0 ); /*0x6d702b*/
    int v25 = v51; /*0x6d7031*/
    if ( v51 >= 0 ) /*0x6d7037*/
    {
      v32 = v51 + 1; /*0x6d7040*/
      v26 = v38; /*0x6d7044*/
      do /*0x6d71cd*/
      {
        LOWORD(v34) = v25 / 2; /*0x6d704f*/
        HIWORD(v34) = v32 / 2; /*0x6d705d*/
        result = *(int **)((char *)v37 + 2); /*0x6d706c*/
        LOWORD(v36) = LOWORD(v37[0]) + v34; /*0x6d7070*/
        HIWORD(v36) = HIWORD(v37[0]) + HIWORD(v34); /*0x6d707b*/
        v31 = v36; /*0x6d7086*/
        if ( (int)v26 > 0 ) /*0x6d708a*/
        {
          v33 = v26; /*0x6d7090*/
          do /*0x6d71b7*/
          {
            if ( LayerClass::CoordinatesLegal(&stru_87C374[13428], (IUnknown *)&v31) ) /*0x6d709e*/
            {
              _DWORD * v27 = CellCoord::To_CellObj(&stru_87C374[13428], (__int16 *)&v31); /*0x6d70b5*/
              int v28 = (int)v27; /*0x6d70ba*/
              if ( v27[17] != -1 ) /*0x6d70c0*/
              {
                PlacementRect = BuildingClass::GetPlacementRect((int)v27, (IUnknown *)v59); /*0x6d70d0*/
                v46 = *PlacementRect; /*0x6d70d9*/
                v47 = PlacementRect[1]; /*0x6d70e2*/
                v48 = PlacementRect[2]; /*0x6d70e9*/
                v49 = PlacementRect[3]; /*0x6d70fb*/
                int * v30 = ClipRectIntersection((IUnknown *)v58, (IUnknown *)a2, (IUnknown *)&v46, 0, 0); /*0x6d7104*/
                var30 = *v30; /*0x6d710d*/
                v56 = (AbstractClass *)v30[1]; /*0x6d7117*/
                if ( v30[2] > 0 && v30[3] > 0 ) /*0x6d712a*/
                {
                  v44 = 0; /*0x6d715f*/
                  a1 = ((((__int16)v31 << 8) + 128) / 256) << 8; /*0x6d717b*/
                  var74 = (((SHIWORD(v31) << 8) + 128) / 256) << 8; /*0x6d717f*/
                  Coord::To_Screen((_DWORD *)this, &a1, (IUnknown *)var90); /*0x6d7183*/
                  var90[0] -= 30; /*0x6d719b*/
                  TacticalClass::DrawBuildingPlacement(v28, (IUnknown *)var90, a2); /*0x6d719f*/
                }
              }
            }
            LOWORD(v31) = (_WORD)v31 + 1; /*0x6d71a4*/
            --HIWORD(v31); /*0x6d71ad*/
            result = (int *)((char *)v33[-1].align_1794 + 3); /*0x6d71b2*/
            v33 = (BuildingTypeClass *)((char *)v33 - 1); /*0x6d71b3*/
          }
          while ( v33 ); /*0x6d71b7*/
          v26 = v38; /*0x6d71bd*/
        }
        --v25; /*0x6d71c5*/
        --v32; /*0x6d71c9*/
      }
      while ( v25 >= 0 ); /*0x6d71cd*/
    }
  }
  return result; /*0x6d71d3*/
}
}
} // namespace gamemd

// 0x6D9B50
namespace gamemd {
int TacticalClass::CheckUnitOverlap(int a2, int a3, AbstractClass * aP3, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v5 = this->visibleArea; /*0x6d9b53*/
  int v6 = this->q0B4; /*0x6d9b5d*/
  int v16 = v5 + a2; /*0x6d9b6a*/
  int v17 = v6 + a3; /*0x6d9b75*/
  char * v7 = &aP3->__pad_0[v5 + a2]; /*0x6d9b86*/
  int v8 = 0; /*0x6d9b8a*/
  int v19 = a3 + a5 + v6; /*0x6d9b8c*/
  int v15 = 0; /*0x6d9b98*/
  if ( *(int *)&g_NetworkPlayerBuffer[5396] <= 0 ) /*0x6d9b9c*/
    return 0; /*0x6d9cc6*/
  while ( 1 ) /*0x6d9ba8*/
  {
    _BYTE * v9 = *(_BYTE **)(*(_DWORD *)&g_NetworkPlayerBuffer[5384] + 4 * v8); /*0x6d9ba8*/
    if ( !v9[144] || !v9[128] || !v9[116] ) /*0x6d9bc7*/
      goto LABEL_10; /*0x6d9bcc*/
  _BYTE v20[12]; // [esp+30h] [ebp-Ch] BYREF
    _DWORD * v10 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)v9 + 172))(v9, v20); /*0x6d9bd9*/
    int v18 = v10[1]; /*0x6d9be6*/
    int v11 = (-60 * v18 / 2 + 60 * *v10 / 2) / 256; /*0x6d9c5d*/
    int v12 = (30 * v18 / 2 + 30 * *v10 / 2) / 256; /*0x6d9c60*/
  int v13; // esi
    v13 = v12 /*0x6d9c8c*/
        - Math::RoundToInt((double)(int)v10[2] * *(double *)&g_OverlayTypeConfig.field_5550 + (double)(v10[2] >= 728) + 0.5);
    if ( v11 >= v16 && v11 <= (int)v7 && v13 >= v17 && v13 <= v19 ) /*0x6d9ca4*/
      return 1; /*0x6d9cbd*/
    v8 = v15; /*0x6d9ca6*/
LABEL_10:
    v15 = ++v8; /*0x6d9cb3*/
    if ( v8 >= *(int *)&g_NetworkPlayerBuffer[5396] ) /*0x6d9cb7*/
      return 0; /*0x6d9cb7*/
  }
}
}
} // namespace gamemd

// 0x6DA380
namespace gamemd {
void * TacticalClass::IsOccupiedByTechno(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  MouseClass *v5; // esi
  IUnknown *v8; // eax
  MouseClass *v11; // eax
  MouseClass *result; // eax
  IUnknown *v15; // [esp-8h] [ebp-3Ch]
  MouseClass *v16; // [esp+Ch] [ebp-28h]
  MouseClass *v17; // [esp+10h] [ebp-24h]
  MouseClass *v18; // [esp+14h] [ebp-20h]
  Tactical *v19; // [esp+18h] [ebp-1Ch]
  int v21; // [esp+24h] [ebp-10h] BYREF

  _DWORD * v2 = a2; /*0x6da385*/
  v19 = (Tactical *)(*a2 + this->visibleArea); /*0x6da39b*/
  v18 = 0; /*0x6da3a7*/
  _DWORD v20[2]; // [esp+1Ch] [ebp-18h] BYREF
  v20[0] = a2[1] + this->q0B4; /*0x6da3ab*/
  v16 = (MouseClass *)-1; /*0x6da3b7*/
  v17 = 0; /*0x6da3bf*/
  if ( (int)this->floats <= 0 ) /*0x6da3c3*/
  {
LABEL_18:
    int v13 = v2[1]; /*0x6da4b8*/
    v20[0] = *(_DWORD *)&DataGlobal_87F8E4[30396] + *v2; /*0x6da4cb*/
    v20[1] = *(_DWORD *)&DataGlobal_87F8E4[30400] + v13; /*0x6da4d9*/
    a2 = (_DWORD *)*Tactical::PixelToCell((int)this, (AbstractClass *)&v21, (IUnknown *)v20); /*0x6da4ec*/
    return (MouseClass *)*((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&a2) + 57); /*0x6da4fb*/
  }
  char * v4 = &g_OverlayTypeConfig[22228]; /*0x6da3ca*/
  do /*0x6da4a5*/
  {
    v5 = (MouseClass *)*((_DWORD *)v4 - 1); /*0x6da3cf*/
    if ( !v5 ) /*0x6da3d4*/
      goto LABEL_15; /*0x6da3d4*/
    _BYTE * v6 = AbstractClass::IsTechno(*((void **)v4 - 1)); /*0x6da3dc*/
    char v7 = 0; /*0x6da3e1*/
    if ( !v6 ) /*0x6da3e5*/
    {
      if ( !(*(int (__thiscall **)(MouseClass *))(v5->field_0 + 136))(v5) ) /*0x6da50e*/
        goto LABEL_15; /*0x6da50e*/
      int v14 = (*(int (__thiscall **)(MouseClass *))(v5->field_0 + 136))(v5); /*0x6da520*/
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 44))(v14) != 37 /*0x6da540*/
        || !*(_BYTE *)((*(int (__thiscall **)(MouseClass *))(v5->field_0 + 136))(v5) + 692) )
      {
        goto LABEL_15; /*0x6da548*/
      }
LABEL_12:
      double v10 = (double)((*((_DWORD *)v4 + 1) - v20[0]) * (*((_DWORD *)v4 + 1) - v20[0])) * 0.5; /*0x6da444*/
      v21 = (*(_DWORD *)v4 - (_DWORD)v19) * (*(_DWORD *)v4 - (_DWORD)v19); /*0x6da46d*/
      v11 = (MouseClass *)Math::RoundToInt(v10 + (double)v21); /*0x6da477*/
      if ( v11 < v16 && (unsigned int)v11 < 0xC8 ) /*0x6da487*/
      {
        v16 = v11; /*0x6da489*/
        v18 = v5; /*0x6da48d*/
      }
      goto LABEL_15; /*0x6da48d*/
    }
    if ( v5->__pad_74[28] ) /*0x6da3eb*/
    {
      if ( !v6[129] ) /*0x6da3f5*/
      {
        if ( v6[1050] /*0x6da435*/
          || *((_DWORD *)v6 + 136) != 2
          || (v15 = *(IUnknown **)&HouseClass_Player->__pad_28[8],
  char v22[12]; // [esp+28h] [ebp-Ch] BYREF
              v8 = (IUnknown *)(*(int (__thiscall **)(_BYTE *, char *))(*(_DWORD *)v6 + 72))(v6, v22),
  _WORD *v9; // eax
              v9 = Coord::To_Cell(&DataGlobal_87F7E8, v8),
              Cell::IsPassableOffset(v9, v15)) )
        {
          v7 = 1; /*0x6da43e*/
        }
      }
    }
    if ( v7 ) /*0x6da442*/
      goto LABEL_12; /*0x6da442*/
LABEL_15:
    v4 += 12; /*0x6da491*/
    v17 = (MouseClass *)((char *)v17 + 1); /*0x6da4a1*/
  }
  while ( (int)v17 < this->floats ); /*0x6da4a5*/
  result = v18; /*0x6da4ab*/
  if ( !v18 ) /*0x6da4b2*/
  {
    v2 = a2; /*0x6da4b4*/
    goto LABEL_18; /*0x6da4b4*/
  }
  return result; /*0x6da501*/
}
}
} // namespace gamemd

// 0x6DBE20
namespace gamemd {
void TacticalClass::DrawPlacementCircles()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  wchar_t *v0; // ebx
  int i; // edi
  int *Coords; // eax
  __int16 v16; // si
  __int16 v21; // ax
  __int16 v24; // di
  __int16 v49; // [esp+2Ch] [ebp-30h] BYREF
  v0 = g_SelectionManager; /*0x6dbe2a*/
  for ( i = 0; i < (int)v0; ++i ) /*0x6dbe37*/
  {
    int v2 = *((_DWORD *)g_ObjectClass_CurrentCount + i); /*0x6dbe3e*/
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 136))(v2) /*0x6dbe59*/
      && *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 136))(v2) + 568) )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 304))(v2, 1); /*0x6dbe69*/
    }
  }
  if ( DataGlobal_A8EB7E ) /*0x6dbe7b*/
  {
  int v57[2]; // [esp+50h] [ebp-Ch] BYREF
  int v55; // [esp+44h] [ebp-18h]
  int v54; // [esp+3Ch] [ebp-20h] BYREF
  float v53; // [esp+38h] [ebp-24h] BYREF
  float v52; // [esp+34h] [ebp-28h]
  char v50; // [esp+2Eh] [ebp-2Eh]
  int v48; // [esp+28h] [ebp-34h] BYREF
    int v3 = g_RadarBlipPool; /*0x6dbe81*/
    int v51 = g_RadarBlipPool; /*0x6dbe89*/
    if ( g_RadarBlipPool && (*(int (__thiscall **)(int))(*(_DWORD *)g_RadarBlipPool + 44))(g_RadarBlipPool) == 6 ) /*0x6dbe9d*/
    {
      if ( BuildingClass::GetPowerFrame(v3) > 0 ) /*0x6dbeac*/
      {
        v53 = *(float *)&DataGlobal_88095C; /*0x6dbec0*/
        _DWORD * v4 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v53); /*0x6dbecb*/
        Coords = CellClass::GetCoords(v4, v57); /*0x6dbed2*/
        int v6 = *Coords; /*0x6dbed7*/
        int v7 = Coords[1]; /*0x6dbed9*/
        int v8 = Coords[2]; /*0x6dbedc*/
        if ( (DataGlobal_B0CE90 & 1) == 0 ) /*0x6dbee6*/
        {
          DataGlobal_B0CE14 = 0; /*0x6dbef2*/
          DataGlobal_B0CE90 |= 1u; /*0x6dbef9*/
          DataGlobal_B0CE15 = 0; /*0x6dbeff*/
          DataGlobal_B0CE16 = 0; /*0x6dbf06*/
          atexit(nullsub_44); /*0x6dbf0d*/
        }
        DataGlobal_B0E648 += 10 * DataGlobal_842950; /*0x6dbf29*/
        if ( DataGlobal_B0E648 < 100 ) /*0x6dbf2e*/
        {
          if ( DataGlobal_B0E648 <= 0 ) /*0x6dbf3e*/
            DataGlobal_842950 = 1; /*0x6dbf40*/
        }
        else
        {
          DataGlobal_842950 = -1; /*0x6dbf30*/
        }
        int v9 = *(_DWORD *)(v3 + 540) + 22265; /*0x6dbf55*/
        v49 = *(_WORD *)v9; /*0x6dbf5f*/
        v50 = *(_BYTE *)(v9 + 2); /*0x6dbf67*/
        Color::Lerp((unsigned __int8 *)&v49, DataGlobal_B0E648, (unsigned __int8 *)&DataGlobal_B0CE14); /*0x6dbf6f*/
        v52 = COERCE_FLOAT(BuildingClass::GetPowerFrame(v3)); /*0x6dbf7b*/
        float v46 = (float)SLODWORD(v52); /*0x6dbf91*/
  char v10; // ecx^3
  int v43; // [esp+4h] [ebp-58h]
        HIBYTE(v43) = v10; /*0x6dbf94*/
        LOWORD(v43) = v49; /*0x6dbf9a*/
        BYTE2(v43) = v50; /*0x6dbfa1*/
        DrawTechnoDeployCircle(0, 1, v6, v7, v8, v43, v46, 0, 1); /*0x6dbfae*/
        int v11 = 0; /*0x6dbfb9*/
        int v12 = 0x7FFFFFFF; /*0x6dbfbb*/
        v48 = *((_DWORD *)HouseClass_Player + 30); /*0x6dbfc5*/
        int v13 = v48; /*0x6dbfc0*/
        if ( v48 > 0 ) /*0x6dbfc9*/
        {
          float v14 = v52; /*0x6dbfcf*/
          do /*0x6dc0b0*/
          {
            int * v15 = *(int **)(*((_DWORD *)HouseClass_Player + 27) + 4 * v11); /*0x6dbfdc*/
            if ( v15 ) /*0x6dbfe1*/
            {
              if ( *((_BYTE *)v15 + 144) ) /*0x6dbfe7*/
              {
                if ( v15 != (int *)v51 && v15[328] == *(_DWORD *)(v51 + 1312) ) /*0x6dc00f*/
                {
                  v16 = DataGlobal_88095C; /*0x6dc015*/
                  int v17 = *v15; /*0x6dc01b*/
                  v55 = DataGlobal_88095C; /*0x6dc021*/
                  _DWORD * v18 = (_DWORD *)(*(int (__thiscall **)(int *, int *))(v17 + 72))(v15, v57); /*0x6dc026*/
                  LOWORD(v54) = *v18 / 256; /*0x6dc03c*/
                  HIWORD(v54) = v18[1] / 256; /*0x6dc050*/
                  LODWORD(v52) = (__int16)(HIWORD(v55) - HIWORD(v54)); /*0x6dc06b*/
                  double v19 = (double)SLODWORD(v52); /*0x6dc06f*/
                  LODWORD(v52) = (__int16)(v16 - v54); /*0x6dc073*/
                  double v20 = Math::Sqrt((double)SLODWORD(v52) * (double)SLODWORD(v52) + v19 * v19); /*0x6dc08c*/
                  v21 = Math::RoundToInt(v20); /*0x6dc094*/
                  if ( v21 <= 2 * LODWORD(v14) && v21 < v12 ) /*0x6dc0a5*/
                    v12 = v21; /*0x6dc0a7*/
                }
              }
            }
            v13 = v48; /*0x6dc0a9*/
            ++v11; /*0x6dc0ad*/
          }
          while ( v11 < v48 ); /*0x6dc0b0*/
        }
        int v22 = 0; /*0x6dc0b6*/
        if ( v13 > 0 ) /*0x6dc0ba*/
        {
          do /*0x6dc1a1*/
          {
            int * v23 = *(int **)(*((_DWORD *)HouseClass_Player + 27) + 4 * v22); /*0x6dc0c8*/
            if ( v23 && *((_BYTE *)v23 + 144) && v23 != (int *)v51 && v23[328] == *(_DWORD *)(v51 + 1312) ) /*0x6dc0fb*/
            {
              v24 = DataGlobal_88095C; /*0x6dc101*/
              int v25 = *v23; /*0x6dc107*/
              v55 = DataGlobal_88095C; /*0x6dc10d*/
              _DWORD * v26 = (_DWORD *)(*(int (__thiscall **)(int *, int *))(v25 + 72))(v23, v57); /*0x6dc114*/
              LOWORD(v54) = *v26 / 256; /*0x6dc12a*/
              HIWORD(v54) = v26[1] / 256; /*0x6dc13e*/
              LODWORD(v52) = (__int16)(HIWORD(v55) - HIWORD(v54)); /*0x6dc159*/
              double v27 = (double)SLODWORD(v52); /*0x6dc15d*/
              LODWORD(v52) = (__int16)(v24 - v54); /*0x6dc161*/
              double v28 = Math::Sqrt((double)SLODWORD(v52) * (double)SLODWORD(v52) + v27 * v27); /*0x6dc17a*/
              if ( (__int16)Math::RoundToInt(v28) == v12 ) /*0x6dc18c*/
                (*(void (__thiscall **)(int *, _DWORD))(*v23 + 304))(v23, 0); /*0x6dc194*/
            }
            ++v22; /*0x6dc19e*/
          }
          while ( v22 < v48 ); /*0x6dc1a1*/
        }
      }
      return; /*0x6dc1a1*/
    }
    if ( g_BuildingPlacementState == -1 ) /*0x6dc1b7*/
      return; /*0x6dc1b7*/
    int v29 = *((_DWORD *)g_SuperWeaponPool + g_BuildingPlacementState); /*0x6dc1c3*/
    double v30 = *(float *)(v29 + 248); /*0x6dc1c6*/
    v52 = *(float *)(v29 + 248); /*0x6dc1cc*/
    if ( v30 <= 0.0 ) /*0x6dc1db*/
      return; /*0x6dc1db*/
    v54 = DataGlobal_88095C; /*0x6dc1f6*/
    _DWORD * v31 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v54); /*0x6dc1fa*/
    int * v32 = CellClass::GetCoords(v31, v57); /*0x6dc201*/
    int v33 = v32[1]; /*0x6dc20d*/
    v55 = *v32 - 126; /*0x6dc210*/
    int v34 = v32[2]; /*0x6dc219*/
    int v56 = v33 - 126; /*0x6dc21c*/
    int v58 = v34; /*0x6dc226*/
    if ( (DataGlobal_B0CE90 & 2) == 0 ) /*0x6dc22c*/
    {
      DataGlobal_B0CD70 = 0; /*0x6dc237*/
      DataGlobal_B0CE90 |= 2u; /*0x6dc23e*/
      DataGlobal_B0CD71 = 0; /*0x6dc244*/
      DataGlobal_B0CD72 = 0; /*0x6dc24b*/
      atexit(nullsub_43); /*0x6dc252*/
    }
    int v35 = DataGlobal_842954; /*0x6dc25a*/
    DataGlobal_B0E64C += 10 * DataGlobal_842954; /*0x6dc270*/
    int v36 = DataGlobal_B0E64C; /*0x6dc26a*/
    if ( DataGlobal_B0E64C < 100 ) /*0x6dc276*/
    {
      if ( DataGlobal_B0E64C > 0 ) /*0x6dc27f*/
        goto LABEL_44; /*0x6dc27f*/
      v35 = 1; /*0x6dc281*/
    }
    else
    {
      v35 = -1; /*0x6dc278*/
    }
    DataGlobal_842954 = v35; /*0x6dc286*/
LABEL_44:
    int v37 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * *((_DWORD *)HouseClass_Player + 12)] + 22265; /*0x6dc28c*/
    v49 = *(_WORD *)v37; /*0x6dc2a7*/
    int v38 = *(int *)(v29 + 252); /*0x6dc2ac*/
    char v39 = *(_BYTE *)(v37 + 2); /*0x6dc2b2*/
    LOWORD(v48) = 0; /*0x6dc2b5*/
    v50 = v39; /*0x6dc2bc*/
    BYTE2(v48) = 0; /*0x6dc2c5*/
    v53 = *(float *)&v38; /*0x6dc2ca*/
    if ( v38 <= 0 ) /*0x6dc2ce*/
    {
      Color::Lerp((unsigned __int8 *)&v49, DataGlobal_B0E64C, (unsigned __int8 *)&DataGlobal_B0CD70); /*0x6dc3b5*/
  char v42; // ecx^3
  int v45; // [esp+4h] [ebp-58h]
      HIBYTE(v45) = v42; /*0x6dc3ce*/
      LOWORD(v45) = v49; /*0x6dc3d6*/
      BYTE2(v45) = v50; /*0x6dc3dd*/
      DrawTechnoDeployCircle(0, 1, v55, v56, v34, v45, v52, 0, 1); /*0x6dc3ee*/
    }
    else
    {
      v51 = 0; /*0x6dc2d8*/
      if ( (double)SLODWORD(v53) * v52 >= 0.0 ) /*0x6dc2ef*/
      {
  double v41; // st7
        v53 = 0.0; /*0x6dc2f5*/
        do /*0x6dc39d*/
        {
          LOWORD(v48) = v49; /*0x6dc30a*/
          BYTE2(v48) = v50; /*0x6dc30f*/
          v36 += 10 * v35; /*0x6dc313*/
          if ( v36 < 100 ) /*0x6dc319*/
          {
            if ( v36 <= 0 ) /*0x6dc322*/
              v35 = 1; /*0x6dc324*/
          }
          else
          {
            v35 = -1; /*0x6dc31b*/
          }
          Color::Lerp((unsigned __int8 *)&v48, v36, (unsigned __int8 *)&DataGlobal_B0CD70); /*0x6dc333*/
          float v47 = v53 / (double)*(int *)(v29 + 252); /*0x6dc350*/
  char v40; // ecx^3
  int v44; // [esp+4h] [ebp-58h]
          HIBYTE(v44) = v40; /*0x6dc353*/
          LOWORD(v44) = v48; /*0x6dc359*/
          BYTE2(v44) = BYTE2(v48); /*0x6dc360*/
          DrawTechnoDeployCircle(0, 1, v55, v56, v58, v44, v47, 0, 0); /*0x6dc379*/
          v41 = (double)++v51; /*0x6dc382*/
          v53 = v41; /*0x6dc386*/
        }
        while ( v41 <= (double)*(int *)(v29 + 252) * v52 ); /*0x6dc39d*/
      }
    }
  }
}
}
} // namespace gamemd

// 0x732D10
namespace gamemd {
unsigned int * TacticalClass::CollectSelectedIDs()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  _DWORD *v2; // ebx
  _DWORD *v26; // [esp+10h] [ebp-10h]
  const char **v27; // [esp+14h] [ebp-Ch]
  const char **v28; // [esp+14h] [ebp-Ch]
  const char **v29; // [esp+14h] [ebp-Ch]
  int v30; // [esp+18h] [ebp-8h]
  wchar_t *v31; // [esp+1Ch] [ebp-4h]

  _DWORD * v0 = __2_YAPAXI_Z(0x18u); /*0x732d18*/
  _DWORD * v1 = v0; /*0x732d1d*/
  if ( v0 ) /*0x732d26*/
  {
    TacticalClass::updateScroll(v0, 0, 0); /*0x732d2c*/
    *v1 = &vt_DynamicVectorClass_char_const; /*0x732d31*/
    v1[5] = 10; /*0x732d37*/
    v1[4] = 0; /*0x732d3e*/
    v2 = v1; /*0x732d41*/
  }
  else
  {
    v2 = 0; /*0x732d45*/
  }
  v26 = v2; /*0x732d4c*/
  v31 = g_SelectionManager; /*0x732d52*/
  v30 = 0; /*0x732d56*/
  if ( (int)g_SelectionManager <= 0 ) /*0x732d5a*/
    return v2; /*0x732fda*/
  do /*0x732fc9*/
  {
    int v3 = *((_DWORD *)g_ObjectClass_CurrentCount + v30); /*0x732d6a*/
    int v25 = v3; /*0x732d6f*/
    int v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 136))(v3); /*0x732d75*/
    int v5 = v2[4]; /*0x732d7b*/
    const char * v6 = (const char *)(v4 + 36); /*0x732d80*/
    int v7 = 0; /*0x732d83*/
    if ( v5 <= 0 ) /*0x732d87*/
    {
LABEL_12:
      int v8 = v2[2]; /*0x732de8*/
      if ( v5 < v8 /*0x732e0a*/
        || (*((_BYTE *)v2 + 13) || !v8)
  int v9; // eax
        && (v9 = v2[5], v9 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v2 + 8))(v2, v8 + v9, 0) )
      {
        int v10 = v2[4]; /*0x732e11*/
        int v11 = v2[1]; /*0x732e14*/
        v2[4] = v10 + 1; /*0x732e1a*/
        *(_DWORD *)(v11 + 4 * v10) = v6; /*0x732e1d*/
      }
      if ( *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v3 + 132))(v3) + 1028) ) /*0x732e2a*/
      {
        const char * v12 = (const char *)(*(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v3 + 132))(v3) + 1028) + 36); /*0x732e4b*/
        int v13 = 0; /*0x732e4e*/
        if ( (int)v2[4] <= 0 ) /*0x732e52*/
        {
LABEL_26:
          int v14 = v2[2]; /*0x732eae*/
          if ( v2[4] < v14 /*0x732ed3*/
            || (*((_BYTE *)v2 + 13) || !v14)
  int v15; // eax
            && (v15 = v2[5], v15 > 0)
            && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v2 + 8))(v2, v14 + v15, 0) )
          {
            int v16 = v2[4]; /*0x732eda*/
            int v17 = v2[1]; /*0x732edd*/
            v2[4] = v16 + 1; /*0x732ee3*/
            *(_DWORD *)(v17 + 4 * v16) = v12; /*0x732ee6*/
          }
        }
        else
        {
          v28 = (const char **)v2[1]; /*0x732e57*/
          while ( strcmp(v12, *v28) ) /*0x732e8e*/
          {
            ++v13; /*0x732e97*/
            ++v28; /*0x732e9d*/
            if ( v13 >= v2[4] ) /*0x732ea1*/
              goto LABEL_25; /*0x732ea1*/
          }
          if ( v13 == -1 ) /*0x732ea8*/
          {
LABEL_25:
            v3 = v25; /*0x732eaa*/
            goto LABEL_26; /*0x732eaa*/
          }
          v3 = v25; /*0x732eeb*/
        }
      }
      if ( *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v3 + 132))(v3) + 1032) ) /*0x732ef9*/
      {
        const char * v18 = (const char *)(*(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v3 + 132))(v3) + 1032) + 36); /*0x732f1a*/
        int v19 = 0; /*0x732f1d*/
        if ( (int)v2[4] <= 0 ) /*0x732f21*/
          goto LABEL_40; /*0x732f21*/
        v29 = (const char **)v2[1]; /*0x732f26*/
        while ( strcmp(v18, *v29) ) /*0x732f5d*/
        {
          ++v19; /*0x732f66*/
          ++v29; /*0x732f6c*/
          if ( v19 >= v2[4] ) /*0x732f70*/
            goto LABEL_40; /*0x732f70*/
        }
        if ( v19 == -1 ) /*0x732f77*/
        {
LABEL_40:
          int v20 = v2[2]; /*0x732f79*/
          if ( v2[4] < v20 /*0x732f9e*/
            || (*((_BYTE *)v2 + 13) || !v20)
  int v21; // eax
            && (v21 = v2[5], v21 > 0)
            && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v2 + 8))(v2, v20 + v21, 0) )
          {
            int v22 = v2[4]; /*0x732fa5*/
            int v23 = v2[1]; /*0x732fa8*/
            v2[4] = v22 + 1; /*0x732fae*/
            *(_DWORD *)(v23 + 4 * v22) = v18; /*0x732fb1*/
          }
        }
      }
    }
    else
    {
      v27 = (const char **)v2[1]; /*0x732d8c*/
      while ( strcmp(v6, *v27) ) /*0x732dc3*/
      {
        ++v7; /*0x732dc9*/
        ++v27; /*0x732dcf*/
        if ( v7 >= v5 ) /*0x732dd3*/
          goto LABEL_11; /*0x732dd3*/
      }
      if ( v7 == -1 ) /*0x732dda*/
      {
LABEL_11:
        v2 = v26; /*0x732de0*/
        v3 = v25; /*0x732de4*/
        goto LABEL_12; /*0x732de4*/
      }
      v2 = v26; /*0x732fb6*/
    }
    ++v30; /*0x732fc5*/
  }
  while ( v30 < (int)v31 ); /*0x732fc9*/
  return v2; /*0x732fd0*/
}
}
} // namespace gamemd

// 0x41B900
namespace gamemd {
void TacticalClass::StubReturnTrue()
{
  ;
}
} // namespace gamemd

// 0x41BEE0
namespace gamemd {
char TacticalClass::StubReturnFalse()
{
return 0;
}
} // namespace gamemd

// 0x41BF00
namespace gamemd {
int TacticalClass::StubReturnFalse2()
{
return 0;
}
} // namespace gamemd

// 0x41BF10
namespace gamemd {
int TacticalClass::StubReturnFalse3()
{
return 0;
}
} // namespace gamemd

// 0x41BF20
namespace gamemd {
int TacticalClass::StubReturnFalse4()
{
return 0;
}
} // namespace gamemd

// 0x41BF80
namespace gamemd {
int TacticalClass::StubReturnFalse5()
{
{
    int result;
    LOBYTE(result) = 0;
    return result;
}
}
} // namespace gamemd

// 0x41BF90
namespace gamemd {
int TacticalClass::StubReturnFalse6()
{
{
    int result;
    return result;
}
}
} // namespace gamemd

// 0x41BFB0
namespace gamemd {
char TacticalClass::StubReturnFalse7()
{
return 0;
}
} // namespace gamemd

// 0x41BFC0
namespace gamemd {
int TacticalClass::StubReturnFalse8()
{
return 0;
}
} // namespace gamemd

// 0x41BFD0
namespace gamemd {
int TacticalClass::StubReturnFalse9()
{
return 0;
}
} // namespace gamemd

// 0x41C000
namespace gamemd {
void TacticalClass::StubReturnTrue2()
{
  ;
}
} // namespace gamemd

// 0x41C040
namespace gamemd {
int TacticalClass::StubReturnFalse10()
{
{
    int result;
    LOBYTE(result) = 0;
    return result;
}
}
} // namespace gamemd

// 0x653F70
namespace gamemd {
int TacticalClass::SetPositionThunk(MouseClass * aP0)
{
{
    return Tactical::SetTacticalPosition(*(int *)&DataGlobal_87C374[44976], (IUnknown *)aP0);
}
}
} // namespace gamemd

// 0x6D0270
namespace gamemd {
void TacticalClass::CleanupResources()
{
{
    int v0;
    void **v1;
    ObjectClass::CleanupSidebarResources();
    v0 = 0;
    v1 = (void **)&DataGlobal_B0C148;
    do
  {
    if ( DataGlobal_B0CBDC[v0] )
    {
    __3_YAXPAX_Z(*v1);
    DataGlobal_B0CBDC[v0] = 0;
    }
    *v1++ = 0;
    ++v0;
  }
    while ( (int)v1 < (int)&DataGlobal_B0C1AC );
}
}
} // namespace gamemd

// 0x6D97D0
namespace gamemd {
int TacticalClass::FindOverlay(int a1, IUnknown * aP1, IUnknown * aP2)
{
{
    int *v3;
    Tactical *v4;
    int result;
    char *v6;
    IUnknown *v7;
    int v8;
    int *v9;
    int v10;
    char *v11;
    int v12;
    int v13;
    int v14;
    int v15;
    int v16;
    int v17;
    Tactical *v18;
    int v19[4];
    char v20[16];
    IUnknown *aP1a;
    v3 = ClipRectIntersection((IUnknown *)v19, aP1, aP2, 0, 0);
    v15 = *v3;
    v16 = v3[1];
    v17 = v3[2];
    v4 = (Tactical *)v3[3];
    result = *(int *)&DataGlobal_89E138[8808] - 1;
    v18 = v4;
    for ( aP1a = (IUnknown *)(*(int *)&DataGlobal_89E138[8808] - 1);
    (int)aP1a >= 0;
    aP1a = (IUnknown *)((char *)aP1a - 1) ) {
    v6 = *(char **)(*(int *)&DataGlobal_89E138[8796] + 4 * result);
    if ( (*(int (__thiscall **)(char *))(*(int *)(v6) + 44))(v6) == 36 && !(*(unsigned char (__thiscall **)(char *))(*(int *)(v6) + 68))(v6) && !*(char *)(*((int *)(v6) + 50) + 691) && !v6[205] )
    {
    v7 = *(IUnknown **)&DataGlobal_87C374[44076];
    v8 = *(int *)&DataGlobal_87C374[44080];
    v9 = (int *)(*(int (__thiscall **)(char *, char *))(*(int *)(v6) + 300))(v6, v20);
    v10 = v8 + v9[1];
    v11 = (char *)(v7) + *v9;
    v12 = v9[2];
    v13 = v9[3];
    if ( (int)v11 < v15 + v17 && v10 < (int)&v18->__pad_0[v16] && (int)&v11[v12] > v15 && v10 + v13 > v16 )
      {
    v19[0] = aP2->field_0;
    v19[1] = aP2->field_4;
    v19[2] = aP2->field_8;
    v14 = *(int *)v6;
    v19[3] = aP2->field_C;
    (*(void (__thiscall **)(char *, int *, int, int))(v14 + 260))(v6, v19, a1, 0);
    v6[128] = 0;
      }
    }
    result = (int)&aP1a[-1].__tail_1602E[1];
  }
    return result;
}
}
} // namespace gamemd

// 0x6D9920
namespace gamemd {
int TacticalClass::FindBuilding(int a1, IUnknown * aP1, IUnknown * aP2)
{
{
    int *v3;
    Tactical *v4;
    int result;
    char *v6;
    IUnknown *v7;
    int v8;
    int *v9;
    int v10;
    char *v11;
    int v12;
    int v13;
    int v14;
    int v15;
    int v16;
    int v17;
    Tactical *v18;
    int v19[4];
    char v20[16];
    IUnknown *aP1a;
    v3 = ClipRectIntersection((IUnknown *)v19, aP1, aP2, 0, 0);
    v15 = *v3;
    v16 = v3[1];
    v17 = v3[2];
    v4 = (Tactical *)v3[3];
    result = 0;
    v18 = v4;
    for ( aP1a = 0; (int)aP1a < *(int *)&DataGlobal_89E138[8808]; aP1a = (IUnknown *)((char *)(aP1a) + 1) )
  {
    v6 = *(char **)(*(int *)&DataGlobal_89E138[8796] + 4 * result);
    if ( (*(int (__thiscall **)(char *))(*(int *)(v6) + 44))(v6) == 6 && (!v6[1767] || HouseClass_Player[45087]) )
    {
    v7 = *(IUnknown **)&DataGlobal_87C374[44076];
    v8 = *(int *)&DataGlobal_87C374[44080];
    v9 = (int *)(*(int (__thiscall **)(char *, char *))(*(int *)(v6) + 300))(v6, v20);
    v10 = v8 + v9[1];
    v11 = (char *)(v7) + *v9;
    v12 = v9[2];
    v13 = v9[3];
    if ( (int)v11 < v15 + v17 && v10 < (int)&v18->__pad_0[v16] && (int)&v11[v12] > v15 && v10 + v13 > v16 )
      {
    v19[0] = aP2->field_0;
    v19[1] = aP2->field_4;
    v19[2] = aP2->field_8;
    v14 = *(int *)v6;
    v19[3] = aP2->field_C;
    (*(void (__thiscall **)(char *, int *, int, int))(v14 + 260))(v6, v19, a1, 0);
    v6[128] = 0;
      }
    }
    result = (int)&aP1a->field_0 + 1;
  }
    return result;
}
}
} // namespace gamemd

// 0x701190
namespace gamemd {
char TacticalClass::StubReturnFalse11()
{
return 0;
}
} // namespace gamemd

// 0x70D980
namespace gamemd {
void TacticalClass::StubReturnTrue3()
{
  ;
}
} // namespace gamemd

// 0x70F0B0
namespace gamemd {
int TacticalClass::MapSpecialDrawMode(MouseClass * aP1)
{
{
    char v3;
    int result;
    bool v5;
    v3 = Render_Draw_731BF0();
    if ( this == (void *)1 )
  {
    if ( v3 )
    return 62;
    return (int)this;
  }
    if ( this != (void *)5 )
    return (int)this;
    v5 = v3 == 0;
    result = 63;
    if ( v5 )
    return (int)this;
    return result;
}
}
} // namespace gamemd
