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
#include "e4/classes/TacticalClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/TacticalMap_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/ColorStruct_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/Power_e4.hpp"

// 0x47F510
namespace gamemd {
void TacticalClass::DrawBuildingPlacement(IUnknown * aP1, int * a2)
{
  unsigned char *v4; // edi
  int *v5; // eax
  int v6; // ebp
  int v7; // eax
  int v9; // ecx
  int v10; // ebp
  int v11; // eax
  uint8_t v12; // cl
  char v13; // al
  int *v14; // ecx
  int * v15;
  int v16; // [esp+14h] [ebp-14h]
  int v17; // [esp+18h] [ebp-10h] BYREF
  int v18; // [esp+1Ch] [ebp-Ch]
  int v19; // [esp+20h] [ebp-8h] BYREF

  v4 = (int *)(*(unsigned char **)&g_BuildingTypeClass_Array->gap0[4 * this->field44]);
  v15 = (int *)(15 * this->u32_11B);
  v16 = (*(int (__thiscall **)(unsigned char *))(*(unsigned int *)v4 + 156))(v4); /*0x47f544*/
  v5 = BuildingClass::CalcDrawPos(this, &v19); /*0x47f54b*/
  v6 = *v5; /*0x47f554*/
  v7 = aP1[1] + v5[1]; /*0x47f55e*/
  a2 = a2; /*0x47f560*/
  v9 = v6 + *aP1; /*0x47f564*/
  v10 = a2[1]; /*0x47f568*/
  v17 = v9 - *a2; /*0x47f571*/
  IDA_LOBYTE(v9) = this->q140; /*0x47f575*/
  v11 = v7 - v10; /*0x47f57b*/
  v18 = v11; /*0x47f580*/
  if ( (v9 & 0x80u) != 0 ) /*0x47f584*/
  {
    v12 = this->u8_11E; /*0x47f586*/
    if ( v12 >= 9u && v12 <= 0x11u ) /*0x47f594*/
    {
      v17 -= 15; /*0x47f5a0*/
      v18 = v11 + 7; /*0x47f5a4*/
    }
  }
  if ( !this->field34 ) /*0x47f5a8*/
    TacticalClass::SetView(0, 0x10000, 0, 1000, 1000, 1000); /*0x47f5c9*/
  v13 = v4[682]; /*0x47f5ce*/
  IDA_LOBYTE(aP1) = this->u8_11E; /*0x47f5dc*/
  if ( v13 ) /*0x47f5e0*/
  {
    IDA_LOBYTE(aP1) = 0; /*0x47f5e2*/
  LABEL_9:
    DrawToSurfaceSHP( /*0x47f5e7*/
      g_DSurface_Hidden_2,
      this->field34,
      v16,
      (uint8_t)aP1 + *(int16_t *)(v16 + 6) / 2,
      &v17,
      a2,
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
  v14 = *(int **)(&this->nextArrayIndex4); /*0x47f64b*/
  if ( v14 ) /*0x47f650*/
  {
    if ( TacticalClass::initTacticalMap(v14, (int *)&a2, (int *)&aP1) ) /*0x47f65c*/
      DrawToSurfaceSHP( /*0x47f696*/
        g_DSurface_Hidden_2,
        this->field34,
        (int)a2,
        (unsigned int)aP1,
        &v17,
        a2,
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
// 0x4801F0
namespace gamemd {
unsigned int TacticalClass::RenderCellFogOfWar(IUnknown * aP1, Tactical * aP2)
{
  unsigned int v4; // eax
  unsigned int result; // eax

  IDA_LOBYTE(v4) = Cell::GetAdjacentPassableMask((int16_t *)(&this->q00C6), 0); /*0x480202*/
  this->q120 = v4; /*0x480207*/
  v4 = (char)v4; /*0x48020d*/
  if ( (char)v4 == -2 ) /*0x480213*/
  {
    v4 = 15; /*0x480215*/
  }
  else if ( (char)v4 == -1 ) /*0x48021f*/
  {
    v4 = 0; /*0x480221*/
  }
  RenderFogOfWar(aP1, aP2, v4); /*0x480230*/
  result = Cell::GetAdjacentPassableMask((int16_t *)(&this->q00C6), 1); /*0x48023e*/
  this->u32_121 = result; /*0x480243*/
  if ( (*(unsigned int *)g_ScenarioClass_Instance & 0x1000) != 0 && !*((unsigned char *)HouseClass_Player + 501) ) /*0x48025c*/
  {
    result = (char)result; /*0x480266*/
    if ( (char)result == -2 ) /*0x48026c*/
    {
      return (unsigned int)RenderFogOfWarOverlay((int)aP1, aP2, 0xFu); /*0x480278*/
    }
    else
    {
      if ( (char)result == -1 ) /*0x480287*/
        result = 0; /*0x480289*/
      return (unsigned int)RenderFogOfWarOverlay((int)aP1, aP2, result); /*0x480290*/
    }
  }
  return result; /*0x48027d*/
}
}
// 0x4802A0
namespace gamemd {
void TacticalClass::DrawCellTerrainOverlay(int * a2, int * a3)
{
  int v4; // eax
  int v5; // ebx
  int v6; // esi

  v4 = this->field38; /*0x4802a6*/
  if ( v4 == 0xFFFF ) /*0x4802ae*/
  {
    v5 = 0; /*0x4802df*/
    v6 = *((unsigned int *)g_FrameCounter + dword_AA10B0); /*0x4802e1*/
  }
  else
  {
    v5 = *(uint8_t *)(&this->field702); /*0x4802b8*/
    v6 = *((unsigned int *)g_FrameCounter + v4); /*0x4802be*/
    if ( *(int *)(v6 + 752) > 1 ) /*0x4802c8*/
      CellClass::GetTerrainFlag((void *)v6, *(uint8_t *)(&this->field702)); /*0x4802cd*/
  }
  if ( *(unsigned char *)(v6 + 737) ) /*0x4802e4*/
    TacticalClass::DrawCellOverlay( /*0x480339*/
      v6,
      v5,
      g_DSurface_Hidden_2,
      *a2,
      a2[1] - 15 * this->u32_11B,
      *a3,
      a3[1],
      a3[2],
      a3[3],
      58 - 15 * this->u32_11B);
}
}
// 0x4AC380
namespace gamemd {
void* TacticalClass::ProcessScroll(int * a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // edx
  double v7; // st7
  char v8; // cl
  int v10; // [esp+10h] [ebp-10h] BYREF
  int v11; // [esp+14h] [ebp-Ch]

  if ( !this->q11CF || this->q11B3 || this->q11B4 ) /*0x4ac3a3*/
  {
    IDA_LOBYTE(v3) = this->q11D0; /*0x4ac436*/
    if ( (unsigned char)v3 ) /*0x4ac43e*/
    {
      v6 = a2[1]; /*0x4ac45b*/
      v10 = *a2 - this->q11D4; /*0x4ac45e*/
      v11 = v6 - this->q11D8; /*0x4ac467*/
      v7 = Math::Sqrt((double)v10 * (double)v10 + (double)v11 * (double)v11); /*0x4ac484*/
      v3 = Math::RoundToInt(v7); /*0x4ac48c*/
      if ( v3 > 4 ) /*0x4ac494*/
      {
        v8 = this->q11B3; /*0x4ac496*/
        IDA_LOBYTE(v3) = 1; /*0x4ac49c*/
        this->q11CF = 1; /*0x4ac4a0*/
        this->q11D0 = 0; /*0x4ac4a6*/
        if ( !v8 && !this->q11B4 ) /*0x4ac4af*/
        {
          IDA_BYTE1(g_TacticalClass_Instance[863].lpVtbl) = 1; /*0x4ac4c0*/
          TacticalClass::InitScrollBounds(&this->u32_7204); /*0x4ac4cc*/
          IDA_LOBYTE(v3) = Mouse::SetCursor((int)&MapClass_Instance, 0, 0); /*0x4ac4da*/
        }
      }
    }
  }
  else
  {
    v11 = g_Map_VisibleRect; /*0x4ac3c8*/
    v10 = DSurface_ViewBounds; /*0x4ac3d0*/
    v3 = *a2; /*0x4ac3d4*/
    v4 = a2[1]; /*0x4ac3d6*/
    if ( *a2 < 0 ) /*0x4ac3db*/
      v3 = 0; /*0x4ac3dd*/
    if ( v3 >= g_Map_VisibleRectOffset ) /*0x4ac3e1*/
      v3 = g_Map_VisibleRectOffset - 1; /*0x4ac3e3*/
    if ( v4 < 0 ) /*0x4ac3e8*/
      v4 = 0; /*0x4ac3ea*/
    if ( v4 >= g_DSurface_WindowOffset ) /*0x4ac3ee*/
      v4 = g_DSurface_WindowOffset - 1; /*0x4ac3f0*/
    v5 = this->q11DC; /*0x4ac3f3*/
    v10 = v3; /*0x4ac3f9*/
    v11 = v4; /*0x4ac3ff*/
    if ( v3 != v5 || v4 != this->q11E0 ) /*0x4ac40b*/
    {
      IDA_BYTE1(g_TacticalClass_Instance[863].lpVtbl) = 1; /*0x4ac41c*/
      IDA_LOBYTE(v3) = TacticalClass::UpdateScrollMaxBounds(&v10); /*0x4ac429*/
    }
  }
  return (void *)(v3);
}
}
// 0x4AC700
namespace gamemd {
unsigned int * TacticalClass::SetDisplayMode(unsigned int * a2, char a3)
{
  unsigned int *result; // eax
  char v5; // cl
  char v6; // bl
  int v7; // eax
  int v8; // eax
  int v9; // edx

  result = a2; /*0x4ac700*/
  v5 = *(unsigned int *)((char *)&this->q4696 + 54); /*0x4ac70b*/
  v6 = v5; /*0x4ac711*/
  if ( a2 == (unsigned int *)-1 ) /*0x4ac713*/
  {
    v6 = v5 == 0; /*0x4ac728*/
  }
  else if ( a2 ) /*0x4ac717*/
  {
    if ( a2 == (unsigned int *)1 ) /*0x4ac71c*/
      v6 = 1; /*0x4ac71e*/
  }
  else
  {
    v6 = 0; /*0x4ac722*/
  }
  if ( v6 != v5 ) /*0x4ac72d*/
  {
    result = (unsigned int *)this->q11A8; /*0x4ac733*/
    if ( !result ) /*0x4ac73b*/
    {
      *(unsigned int *)((char *)&this->q4696 + 42) = 0; /*0x4ac741*/
      *(unsigned int *)((char *)&this->q4696 + 46) = 0; /*0x4ac748*/
      *(unsigned int *)((char *)&this->q4696 + 50) = 0; /*0x4ac74f*/
      *(unsigned int *)((char *)&this->q4696 + 58) = 0; /*0x4ac756*/
      v7 = TacticalClass::updateVisibility((int *)HouseClass_Player); /*0x4ac763*/
      if ( v6 ) /*0x4ac76a*/
      {
        if ( v7 == -1 && (!a3 || *((unsigned int *)HouseClass_Player + 131) == -1) ) /*0x4ac786*/
        {
          v8 = *(unsigned int *)this; /*0x4ac788*/
          *(unsigned int *)((char *)&this->q4696 + 54) = 0; /*0x4ac78c*/
          result = (unsigned int *)(*(int (__thiscall **)(unsigned char *))(v8 + 80))(this); /*0x4ac793*/
          this->q11BC = 0; /*0x4ac796*/
        }
        else
        {
          *(unsigned int *)((char *)&this->q4696 + 54) = 1; /*0x4ac7a7*/
          if ( !a3 ) /*0x4ac7ae*/
            *((unsigned int *)HouseClass_Player + 131) = v7; /*0x4ac7b6*/
          return (unsigned int *)MapClass::UnselectAll_ClearLimboLaunchers(); /*0x4ac7bc*/
        }
      }
      else
      {
        v9 = *(unsigned int *)this; /*0x4ac7c6*/
        *(unsigned int *)((char *)&this->q4696 + 54) = 0; /*0x4ac7ca*/
        (*(void (__thiscall **)(unsigned char *))(v9 + 80))(this); /*0x4ac7d1*/
        result = (unsigned int *)this->q11BC; /*0x4ac7d4*/
        if ( result ) /*0x4ac7dc*/
        {
          *result = this->u32_11C0; /*0x4ac7ea*/
          result[1] = this->u32_11C4; /*0x4ac7ef*/
          result[2] = *(unsigned int *)&this->u32_11C8; /*0x4ac7f5*/
          this->q11BC = 0; /*0x4ac7f8*/
          return (unsigned int *)(*(int (__thiscall **)(int))(*(unsigned int *)g_WWMouseClass_Instance + 16))(g_WWMouseClass_Instance); /*0x4ac80a*/
        }
      }
    }
  }
  return result; /*0x4ac7a0*/
}
}
// 0x4AE290
namespace gamemd {
void TacticalClass::InterpolateView()
{
  wchar_t * v0;
  wchar_t * v1;
  wchar_t * v2;
  wchar_t * v3;
  wchar_t * v4;
  unsigned int *v5; // edx
  int v6; // ebx
  wchar_t * v7;
  wchar_t * v8;
  int *v9; // eax
  int v10; // eax
  int *v11; // edx
  int v12; // ecx
  int v13; // esi
  int v14; // edi
  int v15; // eax
  wchar_t * v16;
  int v17; // [esp+8h] [ebp-40h]
  wchar_t * v18;
  unsigned int v19;
  wchar_t * v20;
  int v21; // [esp+18h] [ebp-30h]
  int v22; // [esp+1Ch] [ebp-2Ch]
  int v23; // [esp+20h] [ebp-28h]
  wchar_t * v24;
  unsigned int v25;
  wchar_t * v26;
  int v27[3]; // [esp+30h] [ebp-18h] BYREF
  int v28[3]; // [esp+3Ch] [ebp-Ch] BYREF

  v0 = (wchar_t *)(g_SelectionManager);
  if ( (int)g_SelectionManager > 0 ) /*0x4ae29f*/
  {
    v1 = (wchar_t *)((unsigned int)((wchar_t *)((int)((wchar_t *)(0)))));
    v2 = (unsigned int)((wchar_t *)((unsigned int)((wchar_t *)((unsigned int)((wchar_t *)((unsigned int)((wchar_t *)(0))))))));
    v3 = (wchar_t *)((unsigned int)((wchar_t *)((unsigned int)((wchar_t *)((unsigned int)((wchar_t *)(0)))))));
    v18 = (wchar_t *)(0);
    v19 = (wchar_t *)((unsigned int)((wchar_t *)(0)));
    v20 = (wchar_t *)((unsigned int)((wchar_t *)(0)));
    v4 = (unsigned int)((wchar_t *)(g_ObjectClass_CurrentCount));
    v16 = (wchar_t *)(g_SelectionManager);
    do /*0x4ae2fc*/
    {
      v5 = (unsigned int *)((wchar_t *)((unsigned int *)*v4++));
      v27[0] = (unsigned int)(v5[39]);
      v1 += v27[0]; /*0x4ae2d9*/
      v2 += v5[40]; /*0x4ae2e0*/
      v6 = v5[41]; /*0x4ae2e6*/
      v18 = v1; /*0x4ae2e9*/
      v3 += v6; /*0x4ae2ed*/
      v7 = v16 == (wchar_t *)1; /*0x4ae2ef*/
      v19 = v2; /*0x4ae2f0*/
      v20 = v3; /*0x4ae2f4*/
      v16 = (wchar_t *)((char *)v16 - 1); /*0x4ae2f8*/
    }
    while ( !v7 ); /*0x4ae2fc*/
    v8 = 0; /*0x4ae2fe*/
    v24 = v1; /*0x4ae302*/
    v25 = v2; /*0x4ae306*/
    v26 = v3; /*0x4ae30a*/
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
      v21 = 0; /*0x4ae33c*/
      v22 = 0; /*0x4ae340*/
      v23 = 0; /*0x4ae344*/
      v17 = 0; /*0x4ae348*/
      if ( (int)g_SelectionManager > 0 ) /*0x4ae34c*/
      {
        while ( 1 ) /*0x4ae384*/
        {
          v9 = (int *)(Coord::Subtract( /*0x4ae384*/ v28, v1 - *(unsigned int *)(*((unsigned int *)g_ObjectClass_CurrentCount + v8) + 156), v2 - *(unsigned int *)(*((unsigned int *)g_ObjectClass_CurrentCount + v8) + 160), v3 - *(unsigned int *)(*((unsigned int *)g_ObjectClass_CurrentCount + v8) + 164)));
          v27[0] = *v9; /*0x4ae38b*/
          v27[1] = v9[1]; /*0x4ae396*/
          v27[2] = v9[2]; /*0x4ae39d*/
          v10 = Coord::Length(v27); /*0x4ae3a1*/
          if ( v10 > v17 ) /*0x4ae3aa*/
          {
            v17 = v10; /*0x4ae3b2*/
            v11 = (int *)(*((unsigned int *)g_ObjectClass_CurrentCount + v8) + 156); /*0x4ae3b9*/
            v21 = *v11; /*0x4ae3c1*/
            v22 = v11[1]; /*0x4ae3c8*/
            v23 = v11[2]; /*0x4ae3cf*/
          }
          v0 = (wchar_t *)((unsigned int)((wchar_t *)(g_SelectionManager)));
          if ( ++v8 >= (int)g_SelectionManager ) /*0x4ae3dc*/
            break; /*0x4ae3dc*/
          v2 = v19; /*0x4ae354*/
          v3 = v20; /*0x4ae358*/
          v1 = v18; /*0x4ae35c*/
        }
      }
      v12 = (int)v0 - 1; /*0x4ae3fe*/
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
      v18 = (wchar_t *)((unsigned int)((wchar_t *)(v13)));
      v19 = (wchar_t *)((unsigned int)((wchar_t *)((unsigned int)((wchar_t *)((unsigned int)((wchar_t *)((unsigned int)((wchar_t *)(v14)))))))));
      v20 = (wchar_t *)((unsigned int)((wchar_t *)((unsigned int)((wchar_t *)((unsigned int)((wchar_t *)(v15)))))));
    }
    Tactical::SetTacticalPosition(&v18); /*0x4ae437*/
  }
}
}
// 0x4F45B0
namespace gamemd {
AbstractClass * * TacticalClass_RenderFrame(void * a1, void * a2, void * a3)
{
  unsigned int v3;
  char result; // al
  int v5[24]; // [esp+4h] [ebp-C0h] BYREF
  unsigned int v6[24]; // [esp+64h] [ebp-60h] BYREF

  if ( !byte_8A0DF0 || !dword_8A0E08 || (*(int (__stdcall **)(int))(*(unsigned int *)g_DrawColorState + 40))(g_DrawColorState) ) /*0x4f45d8*/
    goto LABEL_13; /*0x4f45dd*/
  if ( !AudioStream::ReadSamples(0) ) /*0x4f45ea*/
  {
    v3 = dword_8A0E0C; /*0x4f45f7*/
    if ( !dword_8A0E0C ) /*0x4f45ff*/
      goto LABEL_8; /*0x4f45ff*/
    if ( !AudioStream::ReadSamples(0) ) /*0x4f4602*/
    {
      v3 = dword_8A0E0C; /*0x4f460f*/
  LABEL_8:
      if ( dword_8A0E10 ) /*0x4f461c*/
      {
        if ( v3 ) /*0x4f4624*/
        {
          ColorStruct::SetRGB(v5, 0x80u, 0x80u, 0x80u); /*0x4f463d*/
          ColorStruct::SetRGB(v6, 0x80u, 0x80u, 0x80u); /*0x4f4655*/
          Tactical::SetCellTransform((char *)v5, 0, 0, 0, 1008981770, 0, 0); /*0x4f466d*/
          Tactical::SetCellTransform((char *)v5, 1, 0, 1132396544, 1008981770, 0, 1065353216); /*0x4f468b*/
          Tactical::SetCellTransform((char *)v5, 2, 1132396544, 1132396544, 1008981770, 1065353216, 1065353216); /*0x4f46af*/
          Tactical::SetCellTransform((char *)v6, 0, 0, 0, 1008981770, 0, 0); /*0x4f46c7*/
          Tactical::SetCellTransform((char *)v6, 1, 1132396544, 1132396544, 1008981770, 1065353216, 1065353216); /*0x4f46eb*/
          Tactical::SetCellTransform((char *)v6, 2, 1132396544, 0, 1008981770, 1065353216, 0); /*0x4f4709*/
          StructTable::Append(dword_8A0E10, v5); /*0x4f4719*/
          StructTable::Append(dword_8A0E10, v6); /*0x4f4729*/
        }
        RenderTactical3DScene(*(unsigned int *, unsigned int a1, unsigned int a2, unsigned int a3)(DSurface_Composite + 28)); /*0x4f473e*/
      }
    }
  }
  (*(void (__stdcall **)(int))(*(unsigned int *)g_DrawColorState + 44))(g_DrawColorState); /*0x4f4743*/
  LABEL_13:
  result = byte_A9FA94; /*0x4f474e*/
  if ( !byte_A9FA94 ) /*0x4f4755*/
  {
    result = Frame::Present(DSurface_Composite, a1, a2, a3, 0, v5[0], v5[1], (int *)v5[2]); /*0x4f4761*/
    byte_A9FA94 = 0; /*0x4f4766*/
  }
  return (gamemd::AbstractClass **)(result);
}
}
// 0x547230
namespace gamemd {
void TacticalClass::DrawCellOverlay(int a2, IUnknown * aP2, int a4, int a5, IUnknown * aP5, int a7, int a8, int a9, int a10)
{
  int v10; // edx
  int v11; // esi
  int v12; // eax
  int v13; // esi
  int v14; // edx
  int v15; // ecx
  unsigned int v16;
  unsigned int v17; // eax
  int v18; // eax

  v10 = *(unsigned int *)((char *)&this->u32_95C + 244); /*0x547230*/
  v11 = g_TerrainTypeTable2; /*0x547237*/
  if ( (v10 < g_TerrainTypeTable2 || v10 >= g_TerrainTypeTable2 + 10) /*0x547260*/
    && ((v11 = dword_AA1098, v10 < dword_AA1098) || v10 >= dword_AA1098 + 10)
    || v10 - v11 == -1 )
  {
    if ( *(unsigned char *)&this->u8_2E1 ) /*0x547294*/
    {
      v16 = dword_AA102C; /*0x5472a2*/
      do /*0x5472c9*/
      {
        v17 = v10 - *v16; /*0x5472ab*/
        if ( v17 < 0x28 ) /*0x5472ad*/
          break; /*0x5472ad*/
        if ( v16 == &dword_AA103C ) /*0x5472ba*/
          return; /*0x5472ba*/
        ++v16; /*0x5472c0*/
      }
      while ( (int)v16 < (int)&dword_AA1040 ); /*0x5472c9*/
      v18 = 4 * v17; /*0x5472cf*/
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
    v12 = 4 * (v10 - v11); /*0x547266*/
    if ( a2 == dword_ABC214[v12] ) /*0x54726f*/
    {
      v13 = dword_ABC210[v12]; /*0x547275*/
      if ( v13 ) /*0x54727d*/
      {
        v14 = dword_ABC21C[v12]; /*0x547289*/
        v15 = dword_ABC218[v12] + 30; /*0x54728f*/
  LABEL_17:
        a4 = DSurface_ViewBounds + v15 + a4 - aP5; /*0x5472f7*/
        a5 = g_Map_VisibleRect + v14 + 15 + a5 - a7; /*0x54732c*/
        DrawToSurfaceSHP( /*0x547362*/
          aP2,
          *(unsigned int *)dword_87F69C,
          (int, unsigned int a3, unsigned int a1)lpBuffer,
          v13 - 1,
          &a4,
          &aP5,
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
// 0x6D04F0
namespace gamemd {
void TacticalClass_BuildCommandBar(void * a1, void * a2, void * a3)
{
  char v4; // bl
  char v5; // al
  int *v7; // edi
  int *v8; // edi
  int v9; // eax
  char *v10; // eax
  unsigned int v12[6]; // [esp+8h] [ebp-1Ch] BYREF
  char v13; // [esp+20h] [ebp-4h]

  v4 = (char)(ObjectClass::ToggleSidebarDisplay(a3));
  if ( !v4 ) /*0x6d0505*/
    return v4; /*0x6d0505*/
  v5 = a1[21828]; /*0x6d0513*/
  if ( a1[21413] ) /*0x6d050b*/
  {
    if ( v5 ) /*0x6d0521*/
    {
      CommandClass::BuildBar(a1); /*0x6d0525*/
      (*(void (__thiscall **, unsigned int a1)(unsigned char *, int))(*(unsigned int *)a1 + 56))(a1, 2); /*0x6d0530*/
      return v4; /*0x6d053a*/
    }
    (*(void (__thiscall **)(unsigned char *, void *))(*(unsigned int *)a1 + 48))(a1, &dword_B0CC40); /*0x6d0546*/
    if ( &dword_B0CC40 ) /*0x6d0550*/
    {
      v12[1] = dword_B0CC4C; /*0x6d0567*/
      v12[2] = dword_B0CC50; /*0x6d0571*/
      v12[3] = dword_B0CC54; /*0x6d057b*/
      v13 = 0; /*0x6d0586*/
      v12[0] = dword_B0CC64; /*0x6d058b*/
      v12[5] = g_Str_Tip_ThumbClosed; /*0x6d058f*/
      v12[4] = dword_B0CC58; /*0x6d0597*/
      HashTable::Remove((int *)g_TacticalRender, dword_B0CC64); /*0x6d059b*/
      CommandClass::AddAction(g_TacticalRender, (int)v12); /*0x6d05ab*/
      (*(void (__thiscall **)(unsigned char *, int))(*(unsigned int *)a1 + 56))(a1, 2); /*0x6d05b6*/
      return v4; /*0x6d05c0*/
    }
    goto LABEL_18; /*0x6d0550*/
  }
  if ( !v5 ) /*0x6d05c5*/
  {
    (*(void (__thiscall **)(unsigned char *, void *))(*(unsigned int *)a1 + 52))(a1, &dword_B0CC40); /*0x6d0656*/
    HashTable::Remove((int *)g_TacticalRender, 241); /*0x6d0664*/
  LABEL_18:
    (*(void (__thiscall **)(unsigned char *, int))(*(unsigned int *)a1 + 56))(a1, 2); /*0x6d0669*/
    return v4; /*0x6d0672*/
  }
  v7 = (int *)&unk_B0C1C0; /*0x6d05cc*/
  do /*0x6d05e2*/
  {
    (*(void (__thiscall **)(unsigned char *, int *))(*(unsigned int *)a1 + 52))(a1, v7); /*0x6d05d6*/
    v7 += 24; /*0x6d05d9*/
  }
  while ( (int)v7 < (int)&dword_B0CB20 ); /*0x6d05e2*/
  (*(void (__thiscall **)(unsigned char *, void *, int))(*(unsigned int *)a1 + 52))(a1, &dword_B0CCB0, a2); /*0x6d05ed*/
  v8 = g_ObjectTrackingPool; /*0x6d05f0*/
  do /*0x6d0627*/
  {
    v9 = *v8; /*0x6d05f5*/
    if ( *v8 >= 0 && v9 < 25 ) /*0x6d05fe*/
    {
      v10 = (char *)&unk_B0C1C0 + 96 * v9; /*0x6d0606*/
      if ( v10 ) /*0x6d060d*/
        HashTable::Remove((int *)g_TacticalRender, *((unsigned int *)v10 + 9)); /*0x6d0619*/
    }
    ++v8; /*0x6d061e*/
  }
  while ( (int)v8 < (int)byte_B0CBDC ); /*0x6d0627*/
  HashTable::Remove((int *)g_TacticalRender, 240); /*0x6d0634*/
  (*(void (__thiscall **)(unsigned char *, int))(*(unsigned int *)a1 + 56))(a1, 2); /*0x6d0640*/
  return v4; /*0x6d0535*/
}
}
// 0x6D2DE0
namespace gamemd {
signed int TacticalClass::RenderIsometricOverlay(IUnknown * aP1, IUnknown * aP2, char a4)
{
  char v4; // bl
  unsigned int *v6; // ebp
  int *v7; // eax
  int v8; // edi
  int v9; // ecx
  int v10; // eax
  int *v11; // eax
  signed int result; // eax
  int v14; // edi
  int *v15; // ecx
  int v16; // ecx
  int v17; // [esp+Ch] [ebp-58h] BYREF
  int v18; // [esp+10h] [ebp-54h] BYREF
  unsigned int v19[3]; // [esp+18h] [ebp-4Ch] BYREF
  int v20; // [esp+24h] [ebp-40h] BYREF
  int v21; // [esp+28h] [ebp-3Ch]
  signed int v22; // [esp+2Ch] [ebp-38h]
  int v23; // [esp+30h] [ebp-34h]
  int v24[8]; // [esp+34h] [ebp-30h] BYREF
  unsigned int v25[4]; // [esp+54h] [ebp-10h] BYREF
  int v26; // [esp+68h] [ebp+4h]

  v4 = a4; /*0x6d2de4*/
  if ( a4 ) /*0x6d2dee*/
  {
    TacticalClass::RenderIsometric(&DSurface_ViewBounds, (int)&DSurface_ViewBounds); /*0x6d2dfa*/
  }
  else
  {
    if ( aP1[2] > 0 && aP1[3] > 0 ) /*0x6d2e0c*/
      TacticalClass::RenderIsometric(aP1, (int)aP1); /*0x6d2e12*/
    if ( aP2[2] > 0 && aP2[3] > 0 ) /*0x6d2e27*/
      TacticalClass::RenderIsometric(aP2, (int)aP2); /*0x6d2e2d*/
  }
  if ( (int)*(&this->abstractFlags6) > 0 && !a4 ) /*0x6d2e42*/
  {
    v26 = 0; /*0x6d2e4a*/
    v6 = &this->q0E4; /*0x6d2e5e*/
    do /*0x6d2f79*/
    {
      Coord::Subtract( /*0x6d2eaf*/
        v19,
        ((((int16_t)*(unsigned int *)(this->q174 << 8) + 128) / 256) << 8,
        ((((int16_t)IDA_HIWORD(*(unsigned int *)(this->q174) << 8) + 128) / 256) << 8,
        0);
      v20 = v19[0]; /*0x6d2ec0*/
      v21 = v19[1]; /*0x6d2ec4*/
      v22 = v19[2]; /*0x6d2ed4*/
      v7 = Coord::To_ScreenRaw(&v18, &v20); /*0x6d2ed8*/
      v8 = *(&this->uniqueId5); /*0x6d2ee5*/
      v9 = *v7 - *(&this->uniqueId4); /*0x6d2eeb*/
      v10 = v7[1]; /*0x6d2eed*/
      v24[0] = v9 - 30; /*0x6d2ef3*/
      v24[3] = 30; /*0x6d2efc*/
      v24[1] = v10 - v8 + g_Map_VisibleRect; /*0x6d2f16*/
      v24[2] = 60; /*0x6d2f24*/
      v11 = ClipRectIntersection(v25, &DSurface_ViewBounds, v24, 0, 0); /*0x6d2f28*/
      v24[4] = *v11; /*0x6d2f31*/
      v24[5] = v11[1]; /*0x6d2f38*/
      if ( v11[2] > 0 && v11[3] > 0 ) /*0x6d2f48*/
      {
        v17 = *(unsigned int *)(this->q174; /*0x6d2f5c*/
        TacticalMapClass::ProcessCell((int16_t *)&v17, (int)v24); /*0x6d2f60*/
      }
      ++v6; /*0x6d2f70*/
      ++v26; /*0x6d2f75*/
    }
    while ( v26 < *(&this->abstractFlags6) ); /*0x6d2f79*/
    v4 = a4; /*0x6d2f7f*/
  }
  result = g_CraterCreationState; /*0x6d2f84*/
  if ( g_CraterCreationState ) /*0x6d2f8b*/
  {
    if ( !v4 ) /*0x6d2f93*/
    {
      result = g_CraterCreationState - 1; /*0x6d2f99*/
      if ( g_CraterCreationState - 1 >= 0 ) /*0x6d2f9c*/
      {
        g_CraterCreationState = g_CraterCreationState; /*0x6d2fa5*/
        v14 = 20 * result; /*0x6d2fa8*/
        do /*0x6d302e*/
        {
          v20 = *(unsigned int *)((char *)g_CraterPool + v14); /*0x6d2fbc*/
          v21 = *(unsigned int *)((char *)g_CraterPool + v14 + 4); /*0x6d2fc3*/
          v22 = *(unsigned int *)((char *)g_CraterPool + v14 + 8); /*0x6d2fca*/
          v23 = *(unsigned int *)((char *)g_CraterPool + v14 + 12); /*0x6d2fdd*/
          v21 += g_Map_VisibleRect; /*0x6d2feb*/
          v15 = ClipRectIntersection(v25, &DSurface_ViewBounds, &v20, 0, 0); /*0x6d2ff4*/
          v20 = *v15; /*0x6d2ff8*/
          v21 = v15[1]; /*0x6d2fff*/
          result = v15[2]; /*0x6d3003*/
          v22 = result; /*0x6d3006*/
          v16 = v15[3]; /*0x6d300a*/
          v23 = v16; /*0x6d300f*/
          if ( result > 0 && v16 > 0 ) /*0x6d3017*/
            result = TacticalClass::RenderIsometric((int)this, &v20, (int)&v20); /*0x6d3025*/
          v14 -= 20; /*0x6d302a*/
          --g_CraterCreationState; /*0x6d302d*/
        }
        while ( g_CraterCreationState ); /*0x6d302e*/
      }
    }
  }
  return result; /*0x6d3034*/
}
}
// 0x6D3660
namespace gamemd {
int TacticalClass::CalcAllDrawPositions(AbstractClass * aP1, BuildingTypeClass * aP2, int * a3, char a5)
{
  int v6; // ebx
  unsigned int **v7; // ebp
  int *Coords; // eax
  int *v9; // eax
  int v10; // ecx
  int v11; // esi
  int result; // eax
  char *v13; // ecx
  int v14; // ebp
  int v15; // edx
  int v16; // ebx
  unsigned int *v17; // eax
  unsigned int v18[2]; // [esp+10h] [ebp-38h] BYREF
  int v19[4]; // [esp+18h] [ebp-30h] BYREF
  int v20; // [esp+28h] [ebp-20h] BYREF
  int v21; // [esp+2Ch] [ebp-1Ch]
  int v22; // [esp+30h] [ebp-18h]
  int v23; // [esp+34h] [ebp-14h]
  int v24[4]; // [esp+38h] [ebp-10h] BYREF
  int v25; // [esp+58h] [ebp+10h]

  if ( (int)*(&this->abstractFlags6) <= 0 ) /*0x6d3671*/
  {
    if ( !a5 ) /*0x6d3742*/
      goto LABEL_11; /*0x6d3742*/
  LABEL_10:
    TacticalClass::CalcBuildingDrawPos(&DSurface_ViewBounds); /*0x6d3744*/
    goto LABEL_11; /*0x6d374b*/
  }
  if ( a5 ) /*0x6d367d*/
    goto LABEL_10; /*0x6d367d*/
  v6 = 0; /*0x6d3683*/
  v7 = (unsigned int **)(&this->abstractFlags7); /*0x6d368d*/
  do /*0x6d3734*/
  {
    Coords = CellClass::GetCoords(*v7, v24); /*0x6d369b*/
    v20 = *Coords; /*0x6d36a2*/
    v21 = Coords[1]; /*0x6d36ae*/
    v22 = 0; /*0x6d36c0*/
    v9 = Coord::To_ScreenRaw(v19, &v20); /*0x6d36c8*/
    v10 = v9[1] - *(&this->uniqueId5); /*0x6d36e8*/
    v18[0] = *v9 - *(&this->uniqueId4) + DSurface_ViewBounds - 30; /*0x6d36f4*/
    v18[1] = v10 + g_Map_VisibleRect - 15; /*0x6d3703*/
    if ( g_hWnd ) /*0x6d3707*/
      TacticalClass::RenderCellFogOfWar(v18, a3); /*0x6d3716*/
    UpdateSpotlightsFoo(v18, a3); /*0x6d3723*/
    ++v6; /*0x6d372e*/
    ++v7; /*0x6d372f*/
  }
  while ( v6 < *(&this->abstractFlags6) ); /*0x6d3734*/
  LABEL_11:
  v11 = 0; /*0x6d3750*/
  if ( aP1[2] > 0 && aP1[3] > 0 && !a5 ) /*0x6d3766*/
    TacticalClass::CalcBuildingDrawPos(aP1); /*0x6d376b*/
  if ( aP2[2] > 0 && aP2[3] > 0 && !a5 ) /*0x6d3784*/
    TacticalClass::CalcBuildingDrawPos(aP2); /*0x6d3789*/
  result = g_CraterCreationState; /*0x6d378e*/
  v25 = 0; /*0x6d3793*/
  if ( g_CraterCreationState > 0 ) /*0x6d3799*/
  {
    v13 = (char *)g_CraterPool; /*0x6d379f*/
    do /*0x6d3860*/
    {
      v14 = *(unsigned int *)&v13[v11]; /*0x6d37af*/
      v15 = *(unsigned int *)&v13[v11 + 4] + g_Map_VisibleRect; /*0x6d37b7*/
      v16 = *(unsigned int *)&v13[v11 + 8]; /*0x6d37b9*/
      v24[3] = *(unsigned int *)&v13[v11 + 12]; /*0x6d37c3*/
      v24[1] = v15; /*0x6d37cf*/
      v24[0] = v14 + DSurface_ViewBounds; /*0x6d37dc*/
      v24[2] = v16; /*0x6d37e0*/
      v17 = ClipRectIntersection(v19, v24, a3, 0, 0); /*0x6d37e4*/
      v20 = *v17; /*0x6d37ed*/
      v21 = v17[1]; /*0x6d37f4*/
      v22 = v17[2]; /*0x6d37fb*/
      v13 = (char *)g_CraterPool; /*0x6d37ff*/
      v23 = v17[3]; /*0x6d3808*/
      if ( *((unsigned char *)g_CraterPool + v11 + 16) ) /*0x6d380c*/
      {
        TacticalClass::FillScanlinesTransparent(*v17, v17[1], v17[2], v17[3]); /*0x6d3835*/
        TacticalClass::CalcBuildingDrawPos(&v20); /*0x6d3841*/
        v13 = (char *)g_CraterPool; /*0x6d3846*/
      }
      result = v25 + 1; /*0x6d3856*/
      v11 += 20; /*0x6d3857*/
      ++v25; /*0x6d385c*/
    }
    while ( v25 < g_CraterCreationState ); /*0x6d3860*/
  }
  return result; /*0x6d3866*/
}
}
// 0x6D6D10
namespace gamemd {
void* * TacticalClass::DrawBuildingsInView(AbstractClass * aP1)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  float *v6; // eax
  int v7; // ebx
  int v8; // eax
  int v9; // ebx
  int v10; // edx
  int v11; // ecx
  int v12; // ebp
  int *result; // eax
  int v14; // ecx
  int v15; // ebp
  int v16; // ecx
  unsigned int *v17; // eax
  int v18; // ebx
  int *StartCoords; // eax
  int *v20; // eax
  int *v21; // eax
  int v22; // edx
  int v23; // esi
  int v24; // ecx
  int v25; // ebp
  int v26; // ecx
  unsigned int *v27; // eax
  int *PlacementRect; // eax
  int *v29; // eax
  int v30; // [esp+10h] [ebp-B0h] BYREF
  int v31; // [esp+14h] [ebp-ACh]
  int v33; // [esp+1Ch] [ebp-A4h]
  int v34; // [esp+20h] [ebp-A0h]
  unsigned int v36[2]; // [esp+28h] [ebp-98h]
  int v37[2]; // [esp+30h] [ebp-90h] BYREF
  int v38; // [esp+38h] [ebp-88h]
  float v39; // [esp+3Ch] [ebp-84h] BYREF
  float v40; // [esp+40h] [ebp-80h]
  int v41; // [esp+44h] [ebp-7Ch]
  int v42; // [esp+48h] [ebp-78h] BYREF
  int v43; // [esp+4Ch] [ebp-74h]
  int v44; // [esp+50h] [ebp-70h]
  int v45; // [esp+54h] [ebp-6Ch] BYREF
  int v46; // [esp+58h] [ebp-68h]
  int v47; // [esp+5Ch] [ebp-64h]
  int v48; // [esp+60h] [ebp-60h]
  int v49[4]; // [esp+64h] [ebp-5Ch] BYREF
  int v51; // [esp+78h] [ebp-48h] BYREF
  int v52; // [esp+7Ch] [ebp-44h]
  int v53; // [esp+80h] [ebp-40h]
  unsigned int v54[3]; // [esp+84h] [ebp-3Ch] BYREF
  int v55; // [esp+90h] [ebp-30h] BYREF
  int v56; // [esp+94h] [ebp-2Ch]
  unsigned int v57[4]; // [esp+A0h] [ebp-20h] BYREF
  int v58[4]; // [esp+B0h] [ebp-10h] BYREF

  v3 = *aP1; /*0x6d6d2f*/
  v41 = 0; /*0x6d6d31*/
  v4 = this->q0B0 + v3; /*0x6d6d45*/
  v5 = aP1[1] + this->q0B4; /*0x6d6d4c*/
  v33 = v4 - DSurface_ViewBounds; /*0x6d6d4e*/
  v34 = v5 - g_Map_VisibleRect; /*0x6d6d58*/
  v39 = (float)(v4 - DSurface_ViewBounds); /*0x6d6d67*/
  v40 = (float)(v5 - g_Map_VisibleRect); /*0x6d6d73*/
  v6 = TransformMatrix3x4Point((float *)&v42, (float *)(&this->q58C6), &v39); /*0x6d6d77*/
  v39 = *v6; /*0x6d6d7e*/
  v40 = v6[1]; /*0x6d6d89*/
  v41 = *((unsigned int *)v6 + 2); /*0x6d6d90*/
  v7 = Math::RoundToInt(v39); /*0x6d6d9d*/
  v8 = Math::RoundToInt(v40); /*0x6d6d9f*/
  v51 = v7; /*0x6d6da6*/
  v52 = v8; /*0x6d6dac*/
  v53 = 0; /*0x6d6db0*/
  if ( v8 < 0 ) /*0x6d6db7*/
    v52 = 0; /*0x6d6db9*/
  if ( v7 < 0 ) /*0x6d6dbf*/
    v51 = 0; /*0x6d6dc1*/
  v9 = *((unsigned int *)Coord::To_Cell(&MapClass_Instance, &v51) + 9); /*0x6d6dd4*/
  v10 = (uint64_t)(2290649225LL * aP1[3]) >> 32; /*0x6d6de3*/
  v11 = aP1[2]; /*0x6d6de5*/
  v36[0] = v9; /*0x6d6df3*/
  v12 = (v10 >> 3) + ((unsigned int)v10 >> 31) + 20; /*0x6d6df7*/
  v38 = v11 / 60 + 4; /*0x6d6e17*/
  result = ClipRectIntersection(&v55, &DSurface_ViewBounds, aP1, 0, 0); /*0x6d6e20*/
  v14 = *result; /*0x6d6e25*/
  IDA_HIWORD(v36[0]) = IDA_HIWORD(v9) - 2; /*0x6d6e27*/
  v49[0] = v14; /*0x6d6e2d*/
  v15 = v12 + 1; /*0x6d6e37*/
  v49[1] = result[1]; /*0x6d6e38*/
  IDA_LOWORD(v36[0]) = v9 - 4; /*0x6d6e3c*/
  v16 = result[2]; /*0x6d6e41*/
  v15 = v15; /*0x6d6e44*/
  v49[2] = v16; /*0x6d6e48*/
  v49[3] = result[3]; /*0x6d6e51*/
  if ( v15 >= 0 ) /*0x6d6e55*/
  {
    v31 = v15 + 1; /*0x6d6e5e*/
    do /*0x6d702b*/
    {
      IDA_LOWORD(v33) = v15 / 2; /*0x6d6e69*/
      IDA_HIWORD(v33) = v31 / 2; /*0x6d6e7b*/
      IDA_LOWORD(v26) = IDA_LOWORD(v36[0]) + v33; /*0x6d6e8a*/
      IDA_HIWORD(v26) = IDA_HIWORD(v36[0]) + IDA_HIWORD(v33); /*0x6d6e95*/
      result = (int *)v38; /*0x6d6e9a*/
      v30 = v26; /*0x6d6ea4*/
      if ( v38 > 0 ) /*0x6d6ea8*/
      {
        v38 = v38; /*0x6d6eae*/
        do /*0x6d7019*/
        {
          if ( LayerClass::CoordinatesLegal(&MapClass_Instance, (int16_t *)&v30) ) /*0x6d6ebc*/
          {
            v17 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v30); /*0x6d6ed3*/
            v18 = (int)v17; /*0x6d6ed8*/
            if ( v17[17] != -1 ) /*0x6d6ede*/
            {
              StartCoords = House::GetStartCoords((int)v17, v57); /*0x6d6eee*/
              v45 = *StartCoords; /*0x6d6ef7*/
              v46 = StartCoords[1]; /*0x6d6f00*/
              v47 = StartCoords[2]; /*0x6d6f07*/
              v48 = StartCoords[3]; /*0x6d6f19*/
              v20 = ClipRectIntersection(v58, v49, &v45, 0, 0); /*0x6d6f22*/
              v55 = *v20; /*0x6d6f2b*/
              v56 = v20[1]; /*0x6d6f35*/
              if ( v20[2] > 0 && v20[3] > 0 ) /*0x6d6f4c*/
              {
                Coord::Subtract( /*0x6d6f98*/
                  v54,
                  ((((int16_t)v30 << 8) + 128) / 256) << 8,
                  (((IDA_SHIWORD(v30) << 8) + 128) / 256) << 8,
                  0);
                v42 = v54[0]; /*0x6d6fb2*/
                v43 = v54[1]; /*0x6d6fb6*/
                v44 = v54[2]; /*0x6d6fc6*/
                v21 = Coord::To_ScreenRaw((int *)&v39, &v42); /*0x6d6fca*/
                v22 = this->q0B0; /*0x6d6fcf*/
                v23 = this->q0B4; /*0x6d6fd7*/
                v37[0] = *v21; /*0x6d6fdf*/
                v24 = v21[1] - v23; /*0x6d6feb*/
                v37[0] = v37[0] - v22 - 30; /*0x6d6fed*/
                v37[1] = v24; /*0x6d6ff9*/
                BuildingClass::Draw_0(v18, v37, v49); /*0x6d7001*/
              }
            }
          }
          IDA_LOWORD(v30) = v30 + 1; /*0x6d7006*/
          --IDA_HIWORD(v30); /*0x6d700f*/
          result = (int *)--v38; /*0x6d7014*/
        }
        while ( v38 ); /*0x6d7019*/
      }
      --v15; /*0x6d7023*/
      --v31; /*0x6d7027*/
    }
    while ( v15 >= 0 ); /*0x6d702b*/
    v25 = v15; /*0x6d7031*/
    if ( v15 >= 0 ) /*0x6d7037*/
    {
      v31 = v15 + 1; /*0x6d7040*/
      v26 = v38; /*0x6d7044*/
      do /*0x6d71cd*/
      {
        IDA_LOWORD(v33) = v25 / 2; /*0x6d704f*/
        IDA_HIWORD(v33) = v31 / 2; /*0x6d705d*/
        result = *(int **)((char *)v36 + 2); /*0x6d706c*/
        IDA_LOWORD(v38) = IDA_LOWORD(v36[0]) + v33; /*0x6d7070*/
        IDA_HIWORD(v38) = IDA_HIWORD(v36[0]) + IDA_HIWORD(v33); /*0x6d707b*/
        v30 = v38; /*0x6d7086*/
        if ( v26 > 0 ) /*0x6d708a*/
        {
          v26 = v26; /*0x6d7090*/
          do /*0x6d71b7*/
          {
            if ( LayerClass::CoordinatesLegal(&MapClass_Instance, (int16_t *)&v30) ) /*0x6d709e*/
            {
              v27 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v30); /*0x6d70b5*/
              if ( v27[17] != -1 ) /*0x6d70c0*/
              {
                PlacementRect = BuildingClass::GetPlacementRect((int)v27, v58); /*0x6d70d0*/
                v45 = *PlacementRect; /*0x6d70d9*/
                v46 = PlacementRect[1]; /*0x6d70e2*/
                v47 = PlacementRect[2]; /*0x6d70e9*/
                v48 = PlacementRect[3]; /*0x6d70fb*/
                v29 = ClipRectIntersection(v57, v49, &v45, 0, 0); /*0x6d7104*/
                v55 = *v29; /*0x6d710d*/
                v56 = v29[1]; /*0x6d7117*/
                if ( v29[2] > 0 && v29[3] > 0 ) /*0x6d712a*/
                {
                  v44 = 0; /*0x6d715f*/
                  v42 = ((((int16_t)v30 << 8) + 128) / 256) << 8; /*0x6d717b*/
                  v43 = (((IDA_SHIWORD(v30) << 8) + 128) / 256) << 8; /*0x6d717f*/
                  Coord::To_Screen(&v42, v37); /*0x6d7183*/
                  v37[0] -= 30; /*0x6d719b*/
                  TacticalClass::DrawBuildingPlacement(v37, v49); /*0x6d719f*/
                }
              }
            }
            IDA_LOWORD(v30) = v30 + 1; /*0x6d71a4*/
            --IDA_HIWORD(v30); /*0x6d71ad*/
            result = (int *)--v26; /*0x6d71b2*/
          }
          while ( v26 ); /*0x6d71b7*/
          v26 = v38; /*0x6d71bd*/
        }
        --v25; /*0x6d71c5*/
        --v31; /*0x6d71c9*/
      }
      while ( v25 >= 0 ); /*0x6d71cd*/
    }
  }
  return result; /*0x6d71d3*/
}
}
// 0x6D9B50
namespace gamemd {
int TacticalClass::CheckUnitOverlap(int a2, int a3, AbstractClass * aP3, int a5)
{
  int v5; // eax
  int v6; // ecx
  int v7; // ebx
  int v8; // eax
  unsigned char *v9; // ecx
  unsigned int *v10; // eax
  int v11; // ebp
  int v12; // esi
  int v13; // esi
  int v15; // [esp+10h] [ebp-2Ch]
  int v16; // [esp+18h] [ebp-24h]
  int v17; // [esp+1Ch] [ebp-20h]
  int v18; // [esp+24h] [ebp-18h]
  int v19; // [esp+2Ch] [ebp-10h]
  unsigned char v20[12]; // [esp+30h] [ebp-Ch] BYREF

  v5 = *(&this->uniqueId4); /*0x6d9b53*/
  v6 = *(&this->uniqueId5); /*0x6d9b5d*/
  v16 = v5 + a2; /*0x6d9b6a*/
  v17 = v6 + a3; /*0x6d9b75*/
  v7 = a2 + v5 + aP3; /*0x6d9b86*/
  v8 = 0; /*0x6d9b8a*/
  v19 = a3 + a5 + v6; /*0x6d9b8c*/
  v15 = 0; /*0x6d9b98*/
  if ( g_BuildingProductionState <= 0 ) /*0x6d9b9c*/
    return 0; /*0x6d9cc6*/
  while ( 1 ) /*0x6d9ba8*/
  {
    v9 = (unsigned char *)*((unsigned int *)g_BuildingClass_InstanceCount + v8); /*0x6d9ba8*/
    if ( !v9[144] || !v9[128] || !v9[116] ) /*0x6d9bc7*/
      goto LABEL_10; /*0x6d9bcc*/
    v10 = (unsigned int *)(*(int (__thiscall **)(unsigned char *, unsigned char *))(*(unsigned int *)v9 + 172))(v9, v20); /*0x6d9bd9*/
    v18 = v10[1]; /*0x6d9be6*/
    v11 = (-60 * v18 / 2 + 60 * *v10 / 2) / 256; /*0x6d9c5d*/
    v12 = (30 * v18 / 2 + 30 * *v10 / 2) / 256; /*0x6d9c60*/
    v13 = v12 - Math::RoundToInt((double)(int)v10[2] * dbl_B0CD48 + (double)(v10[2] >= 728) + 0.5); /*0x6d9c8c*/
    if ( v11 >= v16 && v11 <= v7 && v13 >= v17 && v13 <= v19 ) /*0x6d9ca4*/
      return 1; /*0x6d9cbd*/
    v8 = v15; /*0x6d9ca6*/
  LABEL_10:
    v15 = ++v8; /*0x6d9cb3*/
    if ( v8 >= g_BuildingProductionState ) /*0x6d9cb7*/
      return 0; /*0x6d9cb7*/
  }
}
}
// 0x6DA380
namespace gamemd {
void * TacticalClass::IsOccupiedByTechno(unsigned int * a2)
{
  unsigned int *v2; // esi
  int *v4; // edi
  unsigned char *v5; // esi
  unsigned char *v6; // eax
  char v7; // bl
  unsigned int *v8; // eax
  unsigned short *v9; // eax
  double v10; // st7
  unsigned int v11; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // [esp-8h] [ebp-3Ch]
  unsigned int v16; // [esp+Ch] [ebp-28h]
  int v17; // [esp+10h] [ebp-24h]
  unsigned char *v18; // [esp+14h] [ebp-20h]
  int v19; // [esp+18h] [ebp-1Ch]
  int v20[2]; // [esp+1Ch] [ebp-18h] BYREF
  int v21; // [esp+24h] [ebp-10h] BYREF
  char v22[12]; // [esp+28h] [ebp-Ch] BYREF

  v2 = a2; /*0x6da385*/
  v19 = *a2 + *(&this->uniqueId4); /*0x6da39b*/
  v18 = 0; /*0x6da3a7*/
  v20[0] = a2[1] + *(&this->uniqueId5); /*0x6da3ab*/
  v16 = -1; /*0x6da3b7*/
  v17 = 0; /*0x6da3bf*/
  if ( (int)*(&this->q15C6) <= 0 ) /*0x6da3c3*/
  {
  LABEL_18:
    v13 = v2[1]; /*0x6da4b8*/
    v20[0] = DSurface_ViewBounds + *v2; /*0x6da4cb*/
    v20[1] = g_Map_VisibleRect + v13; /*0x6da4d9*/
    a2 = (unsigned int *)*Tactical::PixelToCell((int)this, &v21, v20); /*0x6da4ec*/
    return (unsigned char *)*((unsigned int *)CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&a2) + 57); /*0x6da4fb*/
  }
  dword_B0CECC = dword_B0CECC; /*0x6da3ca*/
  do /*0x6da4a5*/
  {
    v5 = (unsigned char *)*(dword_B0CECC - 1); /*0x6da3cf*/
    if ( !v5 ) /*0x6da3d4*/
      goto LABEL_15; /*0x6da3d4*/
    v6 = AbstractClass::IsTechno((void *)*(dword_B0CECC - 1)); /*0x6da3dc*/
    v7 = 0; /*0x6da3e1*/
    if ( !v6 ) /*0x6da3e5*/
    {
      if ( !(*(int (__thiscall **)(unsigned char *))(v5->q088)(v5) ) /*0x6da50e*/
        goto LABEL_15; /*0x6da50e*/
      v14 = (*(int (__thiscall **)(unsigned char *))(v5->q088)(v5); /*0x6da520*/
      if ( (*(int (__thiscall **)(int))(*(unsigned int *)v14 + 44))(v14) != 37 /*0x6da540*/
        || !*(unsigned char *)((*(int (__thiscall **)(unsigned char *))(v5->q088)(v5) + 692) )
      {
        goto LABEL_15; /*0x6da548*/
      }
  LABEL_12:
      v10 = (double)((dword_B0CECC[1] - v20[0]) * (dword_B0CECC[1] - v20[0])) * 0.5; /*0x6da444*/
      v21 = (*dword_B0CECC - v19) * (*dword_B0CECC - v19); /*0x6da46d*/
      v11 = Math::RoundToInt(v10 + (double)v21); /*0x6da477*/
      if ( v11 < v16 && v11 < 0xC8 ) /*0x6da487*/
      {
        v16 = v11; /*0x6da489*/
        v18 = v5; /*0x6da48d*/
      }
      goto LABEL_15; /*0x6da48d*/
    }
    if ( v5[144] ) /*0x6da3eb*/
    {
      if ( !v6[129] ) /*0x6da3f5*/
      {
        if ( v6[1050] /*0x6da435*/
          || *((unsigned int *)v6 + 136) != 2
          || (v15 = *((unsigned int *)HouseClass_Player + 12),
              v8 = (unsigned int *)(*(int (__thiscall **)(unsigned char *, char *))(*(unsigned int *)v6 + 72))(v6, v22),
              v9 = Coord::To_Cell(&MapClass_Instance, v8),
              Cell::IsPassableOffset(v9, v15)) )
        {
          v7 = 1; /*0x6da43e*/
        }
      }
    }
    if ( v7 ) /*0x6da442*/
      goto LABEL_12; /*0x6da442*/
  LABEL_15:
    dword_B0CECC += 3; /*0x6da491*/
    ++v17; /*0x6da4a1*/
  }
  while ( v17 < *(&this->q15C6) ); /*0x6da4a5*/
  v18 = v18; /*0x6da4ab*/
  if ( !v18 ) /*0x6da4b2*/
  {
    v2 = a2; /*0x6da4b4*/
    goto LABEL_18; /*0x6da4b4*/
  }
}
}
// 0x6DBE20
namespace gamemd {
void* TacticalClass::DrawPlacementCircles()
{
  wchar_t *v0; // ebx
  int i; // edi
  int v2; // esi
  int v3; // ebx
  unsigned int *v4; // eax
  int *Coords; // eax
  int v6; // esi
  int v7; // edi
  int v8; // ebp
  int v9; // ecx
  char v10; // ecx^3
  int v11; // edi
  int v12; // ebp
  int v13; // eax
  float v14; // ebx
  int *v15; // ecx
  int16_t v16; // si
  int v17; // eax
  unsigned int *v18; // eax
  double v19; // st7
  double v20; // st7
  int16_t v21; // ax
  int v22; // ebx
  int *v23; // esi
  int16_t v24; // di
  int v25; // eax
  unsigned int *v26; // eax
  double v27; // st7
  double v28; // st7
  int v29; // edi
  double v30; // st7
  unsigned int *v31; // eax
  int *v32; // eax
  int v33; // ecx
  int v34; // ebx
  int v35; // ebp
  int v36; // esi
  int v37; // edx
  int v38; // eax
  char v39; // cl
  char v40; // ecx^3
  double v41; // st7
  char v42; // ecx^3
  int v43; // [esp+4h] [ebp-58h]
  int v44; // [esp+4h] [ebp-58h]
  int v45; // [esp+4h] [ebp-58h]
  float v46; // [esp+8h] [ebp-54h]
  float v47; // [esp+8h] [ebp-54h]
  int v48; // [esp+28h] [ebp-34h] BYREF
  int16_t v49; // [esp+2Ch] [ebp-30h] BYREF
  char v50; // [esp+2Eh] [ebp-2Eh]
  int v51; // [esp+30h] [ebp-2Ch]
  float v52; // [esp+34h] [ebp-28h]
  float v53; // [esp+38h] [ebp-24h] BYREF
  int v54; // [esp+3Ch] [ebp-20h] BYREF
  int v55; // [esp+44h] [ebp-18h]
  int v56; // [esp+48h] [ebp-14h]
  int v57[2]; // [esp+50h] [ebp-Ch] BYREF
  int v58; // [esp+58h] [ebp-4h]

  v0 = g_SelectionManager; /*0x6dbe2a*/
  for ( i = 0; i < (int)v0; ++i ) /*0x6dbe37*/
  {
    v2 = *((unsigned int *)g_ObjectClass_CurrentCount + i); /*0x6dbe3e*/
    if ( (*(int (__thiscall **)(int))(*(unsigned int *)v2 + 136))(v2) /*0x6dbe59*/
      && *(unsigned char *)((*(int (__thiscall **)(int))(*(unsigned int *)v2 + 136))(v2) + 568) )
    {
      (*(void (__thiscall **)(int, int))(*(unsigned int *)v2 + 304))(v2, 1); /*0x6dbe69*/
    }
  }
  if ( byte_A8EB7E ) /*0x6dbe7b*/
  {
    v3 = g_RadarBlipPool; /*0x6dbe81*/
    v51 = g_RadarBlipPool; /*0x6dbe89*/
    if ( g_RadarBlipPool && (*(int (__thiscall **)(int))(*(unsigned int *)g_RadarBlipPool + 44))(g_RadarBlipPool) == 6 ) /*0x6dbe9d*/
    {
      if ( BuildingClass::GetPowerFrame(v3) > 0 ) /*0x6dbeac*/
      {
        v53 = *(float *)&dword_88095C; /*0x6dbec0*/
        v4 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v53); /*0x6dbecb*/
        Coords = CellClass::GetCoords(v4, v57); /*0x6dbed2*/
        v6 = *Coords; /*0x6dbed7*/
        v7 = Coords[1]; /*0x6dbed9*/
        v8 = Coords[2]; /*0x6dbedc*/
        if ( (byte_B0CE90 & 1) == 0 ) /*0x6dbee6*/
        {
          byte_B0CE14 = 0; /*0x6dbef2*/
          byte_B0CE90 |= 1u; /*0x6dbef9*/
          byte_B0CE15 = 0; /*0x6dbeff*/
          byte_B0CE16 = 0; /*0x6dbf06*/
          atexit(nullsub_44); /*0x6dbf0d*/
        }
        dword_B0E648 += 10 * dword_842950; /*0x6dbf29*/
        if ( dword_B0E648 < 100 ) /*0x6dbf2e*/
        {
          if ( dword_B0E648 <= 0 ) /*0x6dbf3e*/
            dword_842950 = 1; /*0x6dbf40*/
        }
        else
        {
          dword_842950 = -1; /*0x6dbf30*/
        }
        v9 = *(unsigned int *)(v3 + 540) + 22265; /*0x6dbf55*/
        v49 = *(unsigned short *)v9; /*0x6dbf5f*/
        v50 = *(unsigned char *)(v9 + 2); /*0x6dbf67*/
        Color::Lerp((uint8_t *)&v49, dword_B0E648, (uint8_t *)&byte_B0CE14); /*0x6dbf6f*/
        v52 = COERCE_FLOAT(BuildingClass::GetPowerFrame(v3)); /*0x6dbf7b*/
        v46 = (float)IDA_SLODWORD(v52); /*0x6dbf91*/
        IDA_HIBYTE(v43) = v10; /*0x6dbf94*/
        IDA_LOWORD(v43) = v49; /*0x6dbf9a*/
        IDA_BYTE2(v43) = v50; /*0x6dbfa1*/
        DrawTechnoDeployCircle(0, 1, v6, v7, v8, v43, v46, 0, 1); /*0x6dbfae*/
        v11 = 0; /*0x6dbfb9*/
        v12 = 0x7FFFFFFF; /*0x6dbfbb*/
        v48 = *((unsigned int *)HouseClass_Player + 30); /*0x6dbfc5*/
        v13 = v48; /*0x6dbfc0*/
        if ( v48 > 0 ) /*0x6dbfc9*/
        {
          v14 = v52; /*0x6dbfcf*/
          do /*0x6dc0b0*/
          {
            v15 = *(int **)(*((unsigned int *)HouseClass_Player + 27) + 4 * v11); /*0x6dbfdc*/
            if ( v15 ) /*0x6dbfe1*/
            {
              if ( *((unsigned char *)v15 + 144) ) /*0x6dbfe7*/
              {
                if ( v15 != (int *)v51 && v15[328] == *(unsigned int *)(v51 + 1312) ) /*0x6dc00f*/
                {
                  v16 = dword_88095C; /*0x6dc015*/
                  v17 = *v15; /*0x6dc01b*/
                  v55 = dword_88095C; /*0x6dc021*/
                  v18 = (unsigned int *)(*(int (__thiscall **)(int *, int *))(v17 + 72))(v15, v57); /*0x6dc026*/
                  IDA_LOWORD(v54) = *v18 / 256; /*0x6dc03c*/
                  IDA_HIWORD(v54) = v18[1] / 256; /*0x6dc050*/
                  IDA_LODWORD(v52) = (int16_t)(IDA_HIWORD(v55) - IDA_HIWORD(v54)); /*0x6dc06b*/
                  v19 = (double)IDA_SLODWORD(v52); /*0x6dc06f*/
                  IDA_LODWORD(v52) = (int16_t)(v16 - v54); /*0x6dc073*/
                  v20 = Math::Sqrt((double)IDA_SLODWORD(v52) * (double)IDA_SLODWORD(v52) + v19 * v19); /*0x6dc08c*/
                  v21 = Math::RoundToInt(v20); /*0x6dc094*/
                  if ( v21 <= 2 * IDA_LODWORD(v14) && v21 < v12 ) /*0x6dc0a5*/
                    v12 = v21; /*0x6dc0a7*/
                }
              }
            }
            v13 = v48; /*0x6dc0a9*/
            ++v11; /*0x6dc0ad*/
          }
          while ( v11 < v48 ); /*0x6dc0b0*/
        }
        v22 = 0; /*0x6dc0b6*/
        if ( v13 > 0 ) /*0x6dc0ba*/
        {
          do /*0x6dc1a1*/
          {
            v23 = *(int **)(*((unsigned int *)HouseClass_Player + 27) + 4 * v22); /*0x6dc0c8*/
            if ( v23 && *((unsigned char *)v23 + 144) && v23 != (int *)v51 && v23[328] == *(unsigned int *)(v51 + 1312) ) /*0x6dc0fb*/
            {
              v24 = dword_88095C; /*0x6dc101*/
              v25 = *v23; /*0x6dc107*/
              v55 = dword_88095C; /*0x6dc10d*/
              v26 = (unsigned int *)(*(int (__thiscall **)(int *, int *))(v25 + 72))(v23, v57); /*0x6dc114*/
              IDA_LOWORD(v54) = *v26 / 256; /*0x6dc12a*/
              IDA_HIWORD(v54) = v26[1] / 256; /*0x6dc13e*/
              IDA_LODWORD(v52) = (int16_t)(IDA_HIWORD(v55) - IDA_HIWORD(v54)); /*0x6dc159*/
              v27 = (double)IDA_SLODWORD(v52); /*0x6dc15d*/
              IDA_LODWORD(v52) = (int16_t)(v24 - v54); /*0x6dc161*/
              v28 = Math::Sqrt((double)IDA_SLODWORD(v52) * (double)IDA_SLODWORD(v52) + v27 * v27); /*0x6dc17a*/
              if ( (int16_t)Math::RoundToInt(v28) == v12 ) /*0x6dc18c*/
                (*(void (__thiscall **)(int *, unsigned int))(*v23 + 304))(v23, 0); /*0x6dc194*/
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
    v29 = *((unsigned int *)g_SuperWeaponPool + g_BuildingPlacementState); /*0x6dc1c3*/
    v30 = *(float *)(v29 + 248); /*0x6dc1c6*/
    v52 = *(float *)(v29 + 248); /*0x6dc1cc*/
    if ( v30 <= 0.0 ) /*0x6dc1db*/
      return; /*0x6dc1db*/
    v54 = dword_88095C; /*0x6dc1f6*/
    v31 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v54); /*0x6dc1fa*/
    v32 = CellClass::GetCoords(v31, v57); /*0x6dc201*/
    v33 = v32[1]; /*0x6dc20d*/
    v55 = *v32 - 126; /*0x6dc210*/
    v34 = v32[2]; /*0x6dc219*/
    v56 = v33 - 126; /*0x6dc21c*/
    v58 = v34; /*0x6dc226*/
    if ( (byte_B0CE90 & 2) == 0 ) /*0x6dc22c*/
    {
      byte_B0CD70 = 0; /*0x6dc237*/
      byte_B0CE90 |= 2u; /*0x6dc23e*/
      byte_B0CD71 = 0; /*0x6dc244*/
      byte_B0CD72 = 0; /*0x6dc24b*/
      atexit(nullsub_43); /*0x6dc252*/
    }
    v35 = dword_842954; /*0x6dc25a*/
    dword_B0E64C += 10 * dword_842954; /*0x6dc270*/
    v36 = dword_B0E64C; /*0x6dc26a*/
    if ( dword_B0E64C < 100 ) /*0x6dc276*/
    {
      if ( dword_B0E64C > 0 ) /*0x6dc27f*/
        goto LABEL_44; /*0x6dc27f*/
      v35 = 1; /*0x6dc281*/
    }
    else
    {
      v35 = -1; /*0x6dc278*/
    }
    dword_842954 = v35; /*0x6dc286*/
  LABEL_44:
    v37 = *(unsigned int *)&HouseClass_Array->gap0[4 * *((unsigned int *)HouseClass_Player + 12)] + 22265; /*0x6dc28c*/
    v49 = *(unsigned short *)v37; /*0x6dc2a7*/
    v38 = *(int *)(v29 + 252); /*0x6dc2ac*/
    v39 = *(unsigned char *)(v37 + 2); /*0x6dc2b2*/
    IDA_LOWORD(v48) = 0; /*0x6dc2b5*/
    v50 = v39; /*0x6dc2bc*/
    IDA_BYTE2(v48) = 0; /*0x6dc2c5*/
    v53 = *(float *)&v38; /*0x6dc2ca*/
    if ( v38 <= 0 ) /*0x6dc2ce*/
    {
      Color::Lerp((uint8_t *)&v49, dword_B0E64C, (uint8_t *)&byte_B0CD70); /*0x6dc3b5*/
      IDA_HIBYTE(v45) = v42; /*0x6dc3ce*/
      IDA_LOWORD(v45) = v49; /*0x6dc3d6*/
      IDA_BYTE2(v45) = v50; /*0x6dc3dd*/
      DrawTechnoDeployCircle(0, 1, v55, v56, v34, v45, v52, 0, 1); /*0x6dc3ee*/
    }
    else
    {
      v51 = 0; /*0x6dc2d8*/
      if ( (double)IDA_SLODWORD(v53) * v52 >= 0.0 ) /*0x6dc2ef*/
      {
        v53 = 0.0; /*0x6dc2f5*/
        do /*0x6dc39d*/
        {
          IDA_LOWORD(v48) = v49; /*0x6dc30a*/
          IDA_BYTE2(v48) = v50; /*0x6dc30f*/
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
          Color::Lerp((uint8_t *)&v48, v36, (uint8_t *)&byte_B0CD70); /*0x6dc333*/
          v47 = v53 / (double)*(int *)(v29 + 252); /*0x6dc350*/
          IDA_HIBYTE(v44) = v40; /*0x6dc353*/
          IDA_LOWORD(v44) = v48; /*0x6dc359*/
          IDA_BYTE2(v44) = IDA_BYTE2(v48); /*0x6dc360*/
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
// 0x732D10
namespace gamemd {
unsigned int * TacticalClass::CollectSelectedIDs()
{
  unsigned int *v0; // eax
  unsigned int *v1; // esi
  unsigned int *v2; // ebx
  int v3; // esi
  int v4; // eax
  int v5; // edx
  const char *v6; // edi
  int v7; // ebp
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // edx
  const char *v12; // ebp
  int v13; // edi
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // edx
  const char *v18; // ebp
  int v19; // edi
  int v20; // ecx
  int v21; // eax
  int v22; // eax
  int v23; // edx
  int v25; // [esp+Ch] [ebp-14h]
  unsigned int *v26; // [esp+10h] [ebp-10h]
  const char **v27; // [esp+14h] [ebp-Ch]
  const char **v28; // [esp+14h] [ebp-Ch]
  const char **v29; // [esp+14h] [ebp-Ch]
  int v30; // [esp+18h] [ebp-8h]
  wchar_t *v31; // [esp+1Ch] [ebp-4h]

  v0 = operator new(0x18u); /*0x732d18*/
  v1 = v0; /*0x732d1d*/
  if ( v0 ) /*0x732d26*/
  {
    TacticalClass::updateScroll(v0, 0, 0); /*0x732d2c*/
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
    v3 = *((unsigned int *)g_ObjectClass_CurrentCount + v30); /*0x732d6a*/
    v25 = v3; /*0x732d6f*/
    v4 = (*(int (__thiscall **)(int))(*(unsigned int *)v3 + 136))(v3); /*0x732d75*/
    v5 = v2[4]; /*0x732d7b*/
    v6 = (const char *)(v4 + 36); /*0x732d80*/
    v7 = 0; /*0x732d83*/
    if ( v5 <= 0 ) /*0x732d87*/
    {
  LABEL_12:
      v8 = v2[2]; /*0x732de8*/
      if ( v5 < v8 /*0x732e0a*/
        || (*((unsigned char *)v2 + 13) || !v8)
        && (v9 = v2[5], v9 > 0)
        && (*(uint8_t (__thiscall **)(unsigned int *, int, unsigned int))(*v2 + 8))(v2, v8 + v9, 0) )
      {
        v10 = v2[4]; /*0x732e11*/
        v11 = v2[1]; /*0x732e14*/
        v2[4] = v10 + 1; /*0x732e1a*/
        *(unsigned int *)(v11 + 4 * v10) = v6; /*0x732e1d*/
      }
      if ( *(unsigned int *)((*(int (__thiscall **)(int))(*(unsigned int *)v3 + 132))(v3) + 1028) ) /*0x732e2a*/
      {
        v12 = (const char *)(*(unsigned int *)((*(int (__thiscall **)(int))(*(unsigned int *)v3 + 132))(v3) + 1028) + 36); /*0x732e4b*/
        v13 = 0; /*0x732e4e*/
        if ( (int)v2[4] <= 0 ) /*0x732e52*/
        {
  LABEL_26:
          v14 = v2[2]; /*0x732eae*/
          if ( v2[4] < v14 /*0x732ed3*/
            || (*((unsigned char *)v2 + 13) || !v14)
            && (v15 = v2[5], v15 > 0)
            && (*(uint8_t (__thiscall **)(unsigned int *, int, unsigned int))(*v2 + 8))(v2, v14 + v15, 0) )
          {
            v16 = v2[4]; /*0x732eda*/
            v17 = v2[1]; /*0x732edd*/
            v2[4] = v16 + 1; /*0x732ee3*/
            *(unsigned int *)(v17 + 4 * v16) = v12; /*0x732ee6*/
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
      if ( *(unsigned int *)((*(int (__thiscall **)(int))(*(unsigned int *)v3 + 132))(v3) + 1032) ) /*0x732ef9*/
      {
        v18 = (const char *)(*(unsigned int *)((*(int (__thiscall **)(int))(*(unsigned int *)v3 + 132))(v3) + 1032) + 36); /*0x732f1a*/
        v19 = 0; /*0x732f1d*/
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
          v20 = v2[2]; /*0x732f79*/
          if ( v2[4] < v20 /*0x732f9e*/
            || (*((unsigned char *)v2 + 13) || !v20)
            && (v21 = v2[5], v21 > 0)
            && (*(uint8_t (__thiscall **)(unsigned int *, int, unsigned int))(*v2 + 8))(v2, v20 + v21, 0) )
          {
            v22 = v2[4]; /*0x732fa5*/
            v23 = v2[1]; /*0x732fa8*/
            v2[4] = v22 + 1; /*0x732fae*/
            *(unsigned int *)(v23 + 4 * v22) = v18; /*0x732fb1*/
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
// 0x41B900
namespace gamemd {
void TacticalClass::StubReturnTrue()
{
  ; /*0x41b900*/
}
} // namespace gamemd

// 0x41BEE0
namespace gamemd {
char TacticalClass::StubReturnFalse()
{
  return 0; /*0x41bee2*/
}
} // namespace gamemd

// 0x41BF00
namespace gamemd {
int TacticalClass::StubReturnFalse2()
{
  return 0; /*0x41bf02*/
}
} // namespace gamemd

// 0x41BF10
namespace gamemd {
int TacticalClass::StubReturnFalse3()
{
  return 0; /*0x41bf12*/
}
} // namespace gamemd

// 0x41BF20
namespace gamemd {
int TacticalClass::StubReturnFalse4()
{
  return 0; /*0x41bf22*/
}
} // namespace gamemd

// 0x41BF80
namespace gamemd {
int TacticalClass::StubReturnFalse5()
{
  int result; // eax

  IDA_LOBYTE(result) = 0; /*0x41bf80*/
  return result; /*0x41bf82*/
}
} // namespace gamemd

// 0x41BF90
namespace gamemd {
int TacticalClass::StubReturnFalse6()
{
  int result; // eax

  return result; /*0x41bf90*/
}
} // namespace gamemd

// 0x41BFB0
namespace gamemd {
char TacticalClass::StubReturnFalse7()
{
  return 0; /*0x41bfb2*/
}
} // namespace gamemd

// 0x41BFC0
namespace gamemd {
int TacticalClass::StubReturnFalse8()
{
  return 0; /*0x41bfc2*/
}
} // namespace gamemd

// 0x41BFD0
namespace gamemd {
int TacticalClass::StubReturnFalse9()
{
  return 0; /*0x41bfd2*/
}
} // namespace gamemd

// 0x41C000
namespace gamemd {
void TacticalClass::StubReturnTrue2()
{
  ; /*0x41c000*/
}
} // namespace gamemd

// 0x41C040
namespace gamemd {
int TacticalClass::StubReturnFalse10()
{
  int result; // eax

  IDA_LOBYTE(result) = 0; /*0x41c040*/
  return result; /*0x41c042*/
}
} // namespace gamemd

// 0x653F70
namespace gamemd {
int TacticalClass::SetPositionThunk(MouseClass * aP0)
{
  return Tactical::SetTacticalPosition(aP0); /*0x653f80*/
}
} // namespace gamemd

// 0x6D0270
namespace gamemd {
void TacticalClass::CleanupResources()
{
  int v0; // edi
  void **v1; // esi

  ObjectClass::CleanupSidebarResources(); /*0x6d0272*/
  v0 = 0; /*0x6d0277*/
  v1 = (void **)&dword_B0C148; /*0x6d0279*/
  do /*0x6d02aa*/
  {
    if ( byte_B0CBDC[v0] ) /*0x6d027e*/
    {
      RA2_OPDEL(*v1); /*0x6d028b*/
      byte_B0CBDC[v0] = 0; /*0x6d0293*/
    }
    *v1++ = 0; /*0x6d029a*/
    ++v0; /*0x6d02a3*/
  }
  while ( (int)v1 < (int)&byte_B0C1AC ); /*0x6d02aa*/
}
} // namespace gamemd

// 0x6D97D0
namespace gamemd {
int TacticalClass::FindOverlay(int a1, IUnknown * aP1, IUnknown * aP2)
{
  int *v3; // eax
  int v4; // edx
  int result; // eax
  unsigned char *v6; // esi
  int v7; // edi
  int v8; // ebp
  unsigned int *v9; // eax
  int v10; // edx
  int v11; // ecx
  int v12; // edi
  int v13; // eax
  int v14; // edx
  int v15; // [esp+4h] [ebp-30h]
  int v16; // [esp+8h] [ebp-2Ch]
  int v17; // [esp+Ch] [ebp-28h]
  int v18; // [esp+10h] [ebp-24h]
  unsigned int v19[4]; // [esp+14h] [ebp-20h] BYREF
  unsigned char v20[16]; // [esp+24h] [ebp-10h] BYREF
  int i; // [esp+3Ch] [ebp+8h]

  v3 = ClipRectIntersection(v19, aP1, aP2, 0, 0); /*0x6d97e4*/
  v15 = *v3; /*0x6d97eb*/
  v16 = v3[1]; /*0x6d97f2*/
  v17 = v3[2]; /*0x6d97f9*/
  v4 = v3[3]; /*0x6d97fd*/
  result = dword_8A03A0 - 1; /*0x6d9805*/
  v18 = v4; /*0x6d9806*/
  for ( i = dword_8A03A0 - 1; i >= 0; --i ) /*0x6d9810*/
  {
    v6 = *(unsigned char **)(dword_8A0394 + 4 * result); /*0x6d9820*/
    if ( (*(int (__thiscall **)(unsigned char *))(*(unsigned int *)v6 + 44))(v6) == 36 /*0x6d9856*/
      && !(*(uint8_t (__thiscall **)(unsigned char *))(*(unsigned int *)v6 + 68))(v6)
      && !*(unsigned char *)(*((unsigned int *)v6 + 50) + 691)
      && !v6[205] )
    {
      v7 = DSurface_ViewBounds; /*0x6d9866*/
      v8 = g_Map_VisibleRect; /*0x6d986c*/
      v9 = (unsigned int *)(*(int (__thiscall **)(unsigned char *, unsigned char *))(*(unsigned int *)v6 + 300))(v6, v20); /*0x6d9879*/
      v10 = v8 + v9[1]; /*0x6d9888*/
      v11 = v7 + *v9; /*0x6d988e*/
      v12 = v9[2]; /*0x6d9890*/
      v13 = v9[3]; /*0x6d9893*/
      if ( v11 < v15 + v17 && v10 < v16 + v18 && v11 + v12 > v15 && v10 + v13 > v16 ) /*0x6d98b8*/
      {
        v19[0] = *aP2; /*0x6d98c2*/
        v19[1] = aP2[1]; /*0x6d98c9*/
        v19[2] = aP2[2]; /*0x6d98d0*/
        v14 = *(unsigned int *)v6; /*0x6d98d4*/
        v19[3] = aP2[3]; /*0x6d98dd*/
        (*(void (__thiscall **)(unsigned char *, unsigned int *, int, unsigned int))(v14 + 260))(v6, v19, a1, 0); /*0x6d98e9*/
        v6[128] = 0; /*0x6d98ef*/
      }
    }
    result = i - 1; /*0x6d98fa*/
  }
  return result; /*0x6d9909*/
}
} // namespace gamemd

// 0x6D9920
namespace gamemd {
int TacticalClass::FindBuilding(int a1, IUnknown * aP1, IUnknown * aP2)
{
  int *v3; // eax
  int v4; // edx
  int result; // eax
  unsigned char *v6; // esi
  int v7; // edi
  int v8; // ebp
  unsigned int *v9; // eax
  int v10; // edx
  int v11; // ecx
  int v12; // edi
  int v13; // eax
  int v14; // edx
  int v15; // [esp+4h] [ebp-30h]
  int v16; // [esp+8h] [ebp-2Ch]
  int v17; // [esp+Ch] [ebp-28h]
  int v18; // [esp+10h] [ebp-24h]
  unsigned int v19[4]; // [esp+14h] [ebp-20h] BYREF
  unsigned char v20[16]; // [esp+24h] [ebp-10h] BYREF
  int i; // [esp+3Ch] [ebp+8h]

  v3 = ClipRectIntersection(v19, aP1, aP2, 0, 0); /*0x6d9934*/
  v15 = *v3; /*0x6d993b*/
  v16 = v3[1]; /*0x6d9942*/
  v17 = v3[2]; /*0x6d9949*/
  v4 = v3[3]; /*0x6d9953*/
  result = 0; /*0x6d9956*/
  v18 = v4; /*0x6d995a*/
  for ( i = 0; i < dword_8A03A0; ++i ) /*0x6d9962*/
  {
    v6 = *(unsigned char **)(dword_8A0394 + 4 * result); /*0x6d9972*/
    if ( (*(int (__thiscall **)(unsigned char *))(*(unsigned int *)v6 + 44))(v6) == 6 && (!v6[1767] || g_ArmageddonMode) ) /*0x6d9996*/
    {
      v7 = DSurface_ViewBounds; /*0x6d999e*/
      v8 = g_Map_VisibleRect; /*0x6d99a4*/
      v9 = (unsigned int *)(*(int (__thiscall **)(unsigned char *, unsigned char *))(*(unsigned int *)v6 + 300))(v6, v20); /*0x6d99b1*/
      v10 = v8 + v9[1]; /*0x6d99c0*/
      v11 = v7 + *v9; /*0x6d99c6*/
      v12 = v9[2]; /*0x6d99c8*/
      v13 = v9[3]; /*0x6d99cb*/
      if ( v11 < v15 + v17 && v10 < v16 + v18 && v11 + v12 > v15 && v10 + v13 > v16 ) /*0x6d99f0*/
      {
        v19[0] = *aP2; /*0x6d99fa*/
        v19[1] = aP2[1]; /*0x6d9a01*/
        v19[2] = aP2[2]; /*0x6d9a08*/
        v14 = *(unsigned int *)v6; /*0x6d9a13*/
        v19[3] = aP2[3]; /*0x6d9a15*/
        (*(void (__thiscall **)(unsigned char *, unsigned int *, int, unsigned int))(v14 + 260))(v6, v19, a1, 0); /*0x6d9a21*/
        v6[128] = 0; /*0x6d9a27*/
      }
    }
    result = i + 1; /*0x6d9a38*/
  }
  return result; /*0x6d9a49*/
}
} // namespace gamemd

// 0x701190
namespace gamemd {
char TacticalClass::StubReturnFalse11()
{
  return 0; /*0x701192*/
}
} // namespace gamemd

// 0x70D980
namespace gamemd {
void TacticalClass::StubReturnTrue3()
{
  ; /*0x70d980*/
}
} // namespace gamemd

// 0x70F0B0
namespace gamemd {
int TacticalClass::MapSpecialDrawMode(MouseClass * aP1)
{
  char v3; // al
  int result; // eax
  bool v5; // zf

  v3 = Render_Draw_731BF0(); /*0x70f0b3*/
  if ( this == (void *)1 ) /*0x70f0bb*/
  {
    if ( v3 ) /*0x70f0bf*/
      return 62; /*0x70f0c7*/
    return (int)this; /*0x70f0bf*/
  }
  if ( this != (void *)5 ) /*0x70f0cd*/
    return (int)this; /*0x70f0cd*/
  v5 = v3 == 0; /*0x70f0cf*/
  result = 63; /*0x70f0d1*/
  if ( v5 ) /*0x70f0d6*/
    return (int)this; /*0x70f0d8*/
  return result; /*0x70f0c6*/
}
} // namespace gamemd
