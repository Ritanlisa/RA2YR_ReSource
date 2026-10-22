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
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/TEventClass_e4.hpp"
#include "e4/classes/Techno_e4.hpp"
#include "e4/classes/CommandClass_e4.hpp"
#include "e4/classes/GadgetClass_e4.hpp"
#include "e4/classes/TagClass_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/LightningStorm_e4.hpp"
#include "e4/classes/PsyDom_e4.hpp"
#include "e4/classes/_w14_nocarrier_e4.hpp"
#include "e4/classes/StructTable_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Frame_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/TechnoClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Color_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/LayerClass_e4.hpp"
// [w18j2] C2065 function supply (raw-evidenced)
namespace gamemd { void nullsub_43(); }  // w18j2 raw 0x006DC400
namespace gamemd { void nullsub_44(); }  // w18j2 raw 0x006DC410
// [w14e3] fn vocab supply (g57b5-W5 variadic convention); evidence: raw_decomp entries
namespace gamemd {
int DrawTechnoDeployCircle(char p0, char p1, int p2, int p3, int p4, int p5, float p6, char p7, char p8);  // x4:signals@0x456980
} // namespace gamemd

// 0x47F510
namespace gamemd {  // G42.18 ns repair
void TacticalClass::DrawBuildingPlacement(unsigned int *aP1, int *a2)
{

  unsigned char *v4; // edi
  int *v5; // eax
  int v6; // ebp
  int v7; // eax
  int *v8; // ebx
  int v9; // ecx
  int v10; // ebp
  int v11; // eax
  unsigned __int8 v12; // cl
  char v13; // al
  TacticalClass *v14; // ecx
  int v15; // [esp+10h] [ebp-18h]
  __int16 *v16; // [esp+14h] [ebp-14h]
  int v17; // [esp+18h] [ebp-10h] BYREF
  int v18; // [esp+1Ch] [ebp-Ch]
  int v19; // [esp+20h] [ebp-8h] BYREF

  v4 = *(unsigned char **)(*(int *)((char *)&stru_A83CD9.lineTrailer + 3) + 4 * this->field44); /*0x47f52c*/
  v15 = 15 * this->visibleCells[55]; /*0x47f534*/
  v16 = (__int16 *)(*(int (**)(unsigned char *))(*(unsigned int *)v4 + 156))(v4); /*0x47f544*/
  v5 = BuildingClass::CalcDrawPos((BuildingClass *)this, &v19); /*0x47f54b*/
  v6 = *v5; /*0x47f554*/
  v7 = aP1[1] + v5->u32_4; /*0x47f55e*/
  v8 = a2; /*0x47f560*/
  v9 = v6 + *aP1; /*0x47f564*/
  v10 = a2[1]; /*0x47f568*/
  v17 = v9 - *a2; /*0x47f571*/
  LOBYTE(v9) = this->visibleCells[92]; /*0x47f575*/
  v11 = v7 - v10; /*0x47f57b*/
  v18 = v11; /*0x47f580*/
  if ( (v9 & 0x80u) != 0 ) /*0x47f584*/
  {
    v12 = this->visibleCells[58]; /*0x47f586*/
    if ( v12 >= 9u && v12 <= 0x11u ) /*0x47f594*/
    {
      v17 -= 15; /*0x47f5a0*/
      v18 = v11 + 7; /*0x47f5a4*/
    }
  }
  if ( !this->field34 ) /*0x47f5a8*/
    TacticalClass::SetView((int *)this, 0, 0x10000, 0, 1000, 1000, 1000); /*0x47f5c9*/
  v13 = v4[682]; /*0x47f5ce*/
  LOBYTE(aP1) = this->visibleCells[58]; /*0x47f5dc*/
  if ( v13 ) /*0x47f5e0*/
  {
    LOBYTE(aP1) = 0; /*0x47f5e2*/
LABEL_9:
    DrawToSurfaceSHP( /*0x47f5e7*/
      (int)g_DSurface_Hidden_2,
      this->field34,
      (int)v16,
      (unsigned __int8)aP1 + v16[3] / 2,
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
  v14 = *&this->field40; /*0x47f64b*/
  if ( v14 ) /*0x47f650*/
  {
    if ( TacticalClass::initTacticalMap(v14, (int *)&a2, (int *)&aP1) ) /*0x47f65c*/
      DrawToSurfaceSHP( /*0x47f696*/
        (int)g_DSurface_Hidden_2,
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
}  // G42.18 ns repair
// 0x4801F0
namespace gamemd {
unsigned int TacticalClass::RenderCellFogOfWar(unsigned int *aP1, int *aP2)
{

  unsigned int v4; // eax
  (*((unsigned char *)&(v4))) = Cell::GetAdjacentPassableMask(&this->field24, 0); /*0x480202*/
  this->visibleCells[60] = v4; /*0x480207*/
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
  unsigned int result; // eax
  result = Cell::GetAdjacentPassableMask(&this->field24, 1); /*0x48023e*/
  this->visibleCells[61] = result; /*0x480243*/
  if ( (*(unsigned int *)dword_A8B230 & 0x1000) != 0 && !dword_A83D4C->defeated ) /*0x48025c*/
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
void TacticalClass::DrawCellTerrainOverlay(int *a2, int *a3)
{

  int field38; // eax
  int v5; // ebx
  CellClass *v6; // esi

  field38 = this->field38; /*0x4802a6*/
  if ( field38 == 0xFFFF ) /*0x4802ae*/
  {
    v5 = 0; /*0x4802df*/
    v6 = *(CellClass **)(*(unsigned int *)&stru_A8E960.random[440] + 4 * dword_AA10B0); /*0x4802e1*/
  }
  else
  {
    v5 = (unsigned __int8)this->visibleCells[54]; /*0x4802b8*/
    v6 = *(CellClass **)(*(unsigned int *)&stru_A8E960.random[440] + 4 * field38); /*0x4802be*/
    if ( v6[2].unknown60 > 1 ) /*0x4802c8*/
      CellClass::GetTerrainFlag(v6, (unsigned __int8)this->visibleCells[54]); /*0x4802cd*/
  }
  if ( BYTE1(v6[2].wallOwnerIndex) ) /*0x4802e4*/
    TacticalClass::DrawCellOverlay( /*0x480339*/
      (int)v6,
      v5,
      (int)g_DSurface_Hidden_2,
      *a2,
      a2[1] - 15 * this->visibleCells[55],
      *a3,
      a3[1],
      a3[2],
      a3[3],
      58 - 15 * this->visibleCells[55]);

}
}
// 0x4AC380
namespace gamemd {
void* TacticalClass::ProcessScroll(int * a2)
{

  double v2; // st7
  int v4; // eax
  int v5; // ecx
  int DisplayClass_field_0x11DC; // edx
  void *v7; // edx
  char DisplayClass_field_0x11B0_high; // cl
  double v10; // [esp+0h] [ebp-20h]
  int v11; // [esp+10h] [ebp-10h] BYREF
  char *v12; // [esp+14h] [ebp-Ch]

  if ( !this->__pad_11B4 || HIBYTE(this->__pad_11B4) || this->__pad_11B4 ) /*0x4ac3a3*/
  {
    (v4) = ((v4) & ~0xFF) | ((this->DisplayClass_field_0x11D0) & 0xFF); /*0x4ac436*/
    if ( (unsigned char)v4 ) /*0x4ac43e*/
    {
      v7 = (void *)a2[1]; /*0x4ac45b*/
      v11 = *a2 - this->DisplayClass_field_0x11D4; /*0x4ac45e*/
      v12 = (char *)v7 - this->DisplayClass_field_0x11D8; /*0x4ac467*/
      __asm /*0x4ac46b*/
      {
        fild [esp+20h+var_C]
        fild [esp+20h+var_10]
        fld st
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp st(1), st
        fstp [esp+20h+var_20]; double
        fstp st
        fstp st
      }
      Math::Sqrt(v10); /*0x4ac484*/
      (v4) = ((v4) & ~0xFFFF) | ((Math::RoundToInt(v2)) & 0xFFFF); /*0x4ac48c*/
      if ( v4 > 4 ) /*0x4ac494*/
      {
        DisplayClass_field_0x11B0_high = HIBYTE(this->DisplayClass_field_0x11B0); /*0x4ac496*/
        (v4) = ((v4) & ~0xFF) | ((1) & 0xFF); /*0x4ac49c*/
        this->__pad_11B4[27] = 1; /*0x4ac4a0*/
        LOBYTE(this->DisplayClass_field_0x11D0) = 0; /*0x4ac4a6*/
        if ( !DisplayClass_field_0x11B0_high && !this->__pad_11B4 ) /*0x4ac4af*/
        {
          g_TacticalClass_Instance[863].__tail_0[1] = 1; /*0x4ac4c0*/
          TacticalClass::InitScrollBounds((TacticalClass *)g_TacticalClass_Instance, &this->DisplayClass_field_0x11D4); /*0x4ac4cc*/
          (v4) = ((v4) & ~0xFF) | ((Mouse::SetCursor((int)&dword_87F7E8, 0, 0)) & 0xFF); /*0x4ac4da*/
        }
      }
    }
  }
  else
  {
    v12 = (char *)dword_886FA4; /*0x4ac3c8*/
    v11 = DSurface_ViewBounds.field_0; /*0x4ac3d0*/
    v4 = *a2; /*0x4ac3d4*/
    v5 = a2[1]; /*0x4ac3d6*/
    if ( *a2 < 0 ) /*0x4ac3db*/
      v4 = 0; /*0x4ac3dd*/
    if ( v4 >= dword_886FA8 ) /*0x4ac3e1*/
      v4 = dword_886FA8 - 1; /*0x4ac3e3*/
    if ( v5 < 0 ) /*0x4ac3e8*/
      v5 = 0; /*0x4ac3ea*/
    if ( v5 >= dword_886FAC ) /*0x4ac3ee*/
      v5 = dword_886FAC - 1; /*0x4ac3f0*/
    DisplayClass_field_0x11DC = this->DisplayClass_field_0x11DC; /*0x4ac3f3*/
    v11 = v4; /*0x4ac3f9*/
    v12 = (char *)v5; /*0x4ac3ff*/
    if ( v4 != DisplayClass_field_0x11DC || v5 != this->DisplayClass_field_0x11E0 ) /*0x4ac40b*/
    {
      g_TacticalClass_Instance[863].__tail_0[1] = 1; /*0x4ac41c*/
      (v4) = ((v4) & ~0xFF) | ((TacticalClass::UpdateScrollMaxBounds((TacticalClass *)g_TacticalClass_Instance, &v11)) & 0xFF); /*0x4ac429*/
    }
  }
  return v4; /*0x4ac42e*/

}
}
// 0x4AC700
namespace gamemd {
unsigned int * TacticalClass::SetDisplayMode(unsigned int *a2, char a3)
{

  int (**ptr_0)(TacticalClass *); // eax
  void (**v9)(TacticalClass *); // edx
  MapClass *v10; // [esp+0h] [ebp-8h]

  unsigned int *result = a2; // eax /*0x4ac700*/
  char v5 = this->u32_11B3; // cl /*0x4ac70b*/
  char v6 = v5; // bl /*0x4ac711*/
  if ( a2 == (unsigned int *)-1 ) /*0x4ac713*/
  {
    v6 = v5 == 0; /*0x4ac728*/
  }
  else if ( a2 ) /*0x4ac717*/
  {
    if ( a2 == 1 ) /*0x4ac71c*/
      v6 = 1; /*0x4ac71e*/
  }
  else
  {
    v6 = 0; /*0x4ac722*/
  }
  if ( v6 != v5 ) /*0x4ac72d*/
  {
    result = (unsigned int *)this->u32_11A8; /*0x4ac733*/
    if ( !result ) /*0x4ac73b*/
    {
      this->q11B0 = 0; /*0x4ac741*/
      this->u32_11B1 = 0; /*0x4ac748*/
      this->u32_11B2 = 0; /*0x4ac74f*/
      this->__pad_11B4 = 0; /*0x4ac756*/
      int updated; // eax
      updated = TacticalClass::updateVisibility((TacticalClass *)dword_A83D4C); /*0x4ac763*/
      if ( v6 ) /*0x4ac76a*/
      {
        if ( updated == -1 && (!a3 || *&dword_A83D4C->selectedPathIndex == -1) ) /*0x4ac786*/
        {
          ptr_0 = (int (**)(TacticalClass *))this->vfptr; /*0x4ac788*/
          this->u32_11B3 = 0; /*0x4ac78c*/
          result = (unsigned int *)ptr_0[20](this); /*0x4ac793*/
          this->u32_11BC = 0; /*0x4ac796*/
        }
        else
        {
          this->u32_11B3 = 1; /*0x4ac7a7*/
          if ( !a3 ) /*0x4ac7ae*/
            *&dword_A83D4C->selectedPathIndex = updated; /*0x4ac7b6*/
          return (unsigned int *)(v10)->UnselectAll_ClearLimboLaunchers(); /*0x4ac7bc*/
        }
      }
      else
      {
        v9 = (void (**)(TacticalClass *))this->vfptr; /*0x4ac7c6*/
        this->u32_11B3 = 0; /*0x4ac7ca*/
        v9[20](this); /*0x4ac7d1*/
        result = (unsigned int *)this->u32_11BC; /*0x4ac7d4*/
        if ( result ) /*0x4ac7dc*/
        {
          *result = this->u32_11C0; /*0x4ac7ea*/
          result->u32_11C4 = this->u32_11C4; /*0x4ac7ef*/
          result->u32_11C8 = this->u32_11C8; /*0x4ac7f5*/
          this->u32_11BC = 0; /*0x4ac7f8*/
          return (*(unsigned int *(**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x4ac80a*/
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
  bool v9; // zf
  int v15; // esi
  int v16; // edi
  int v17; // eax
  unsigned int v29[3]; // [esp+30h] [ebp-18h] BYREF

  int v2; // ebp
  v2 = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[228]; /*0x4ae295*/
  if ( *(int *)&((unsigned int *)&stru_A8EB00)[228] > 0 ) /*0x4ae29f*/
  {
    int v3 = 0; // edi /*0x4ae2a7*/
    int v4 = 0; // ecx /*0x4ae2a9*/
    int v5 = 0; // esi /*0x4ae2ab*/
    int v20; // [esp+Ch] [ebp-3Ch] BYREF
    v20 = 0; /*0x4ae2af*/
    int v21; // [esp+10h] [ebp-38h]
    v21 = 0; /*0x4ae2b3*/
    int v22; // [esp+14h] [ebp-34h]
    v22 = 0; /*0x4ae2b7*/
    unsigned int *v6; // eax
    v6 = *(unsigned int **)&((unsigned int *)&stru_A8EB00)[216]; /*0x4ae2bd*/
    int v18; // [esp+8h] [ebp-40h]
    v18 = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[228]; /*0x4ae2c2*/
    do /*0x4ae2fc*/
    {
      unsigned int *v7; // edx
      v7 = (unsigned int *)*v6++; /*0x4ae2c6*/
      v29[0] = v7[39]; /*0x4ae2d5*/
      v3 += v29[0]; /*0x4ae2d9*/
      v4 += v7[40]; /*0x4ae2e0*/
      int v8; // ebx
      v8 = v7[41]; /*0x4ae2e6*/
      v20 = v3; /*0x4ae2e9*/
      v5 += v8; /*0x4ae2ed*/
      v9 = v18 == 1; /*0x4ae2ef*/
      v21 = v4; /*0x4ae2f0*/
      v22 = v5; /*0x4ae2f4*/
      --v18; /*0x4ae2f8*/
    }
    while ( !v9 ); /*0x4ae2fc*/
    int v10 = 0; // ebx /*0x4ae2fe*/
    int v26; // [esp+24h] [ebp-24h]
    v26 = v3; /*0x4ae302*/
    int v27; // [esp+28h] [ebp-20h]
    v27 = v4; /*0x4ae306*/
    int v28; // [esp+2Ch] [ebp-1Ch]
    v28 = v5; /*0x4ae30a*/
    if ( *(unsigned int *)&((unsigned int *)&stru_A8EB00)[228] ) /*0x4ae30e*/
    {
      v3 /= *(int *)&((unsigned int *)&stru_A8EB00)[228]; /*0x4ae315*/
      v20 = v3; /*0x4ae31c*/
      v4 /= *(int *)&((unsigned int *)&stru_A8EB00)[228]; /*0x4ae320*/
      v21 = v4; /*0x4ae327*/
      v5 /= *(int *)&((unsigned int *)&stru_A8EB00)[228]; /*0x4ae32b*/
      v22 = v5; /*0x4ae32d*/
    }
    if ( *(int *)&((unsigned int *)&stru_A8EB00)[228] > 2 ) /*0x4ae334*/
    {
      int v23; // [esp+18h] [ebp-30h]
      v23 = 0; /*0x4ae33c*/
      int v24; // [esp+1Ch] [ebp-2Ch]
      v24 = 0; /*0x4ae340*/
      int v25; // [esp+20h] [ebp-28h]
      v25 = 0; /*0x4ae344*/
      int v19; // [esp+8h] [ebp-40h]
      v19 = 0; /*0x4ae348*/
      if ( *(int *)&((unsigned int *)&stru_A8EB00)[228] > 0 ) /*0x4ae34c*/
      {
        while ( 1 ) /*0x4ae384*/
        {
          unsigned int *v11; // eax
          int v30[3]; // [esp+3Ch] [ebp-Ch] BYREF
          v11 = (unsigned int *)(Coord::Subtract((int)(/*0x4ae384*/ (Coord *)v30), v3 - *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[216] + 4 * v10) + 156), v4 - *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[216] + 4 * v10) + 160), v5 - *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[216] + 4 * v10) + 164)));
          v29[0] = *v11; /*0x4ae38b*/
          v29[1] = v11[1]; /*0x4ae396*/
          v29[2] = v11[2]; /*0x4ae39d*/
          int v12; // eax
          v12 = ((Coord *)((Coord *)v29))->Length(); /*0x4ae3a1*/
          if ( v12 > v19 ) /*0x4ae3aa*/
          {
            v19 = v12; /*0x4ae3b2*/
            int *v13; // edx
            v13 = (int *)(*(unsigned int *)(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[216] + 4 * v10) + 156); /*0x4ae3b9*/
            v23 = *v13; /*0x4ae3c1*/
            v24 = v13[1]; /*0x4ae3c8*/
            v25 = v13[2]; /*0x4ae3cf*/
          }
          v2 = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[228]; /*0x4ae3d3*/
          if ( ++v10 >= *(int *)&((unsigned int *)&stru_A8EB00)[228] ) /*0x4ae3dc*/
            break; /*0x4ae3dc*/
          v4 = v21; /*0x4ae354*/
          v5 = v22; /*0x4ae358*/
          v3 = v20; /*0x4ae35c*/
        }
      }
      int v14 = v2 - 1; // ecx /*0x4ae3fe*/
      if ( v2 == 1 ) /*0x4ae405*/
      {
        v15 = 0; /*0x4ae407*/
        v16 = 0; /*0x4ae409*/
        v17 = 0; /*0x4ae40b*/
      }
      else
      {
        v15 = (v26 - v23) / v14; /*0x4ae412*/
        v16 = (v27 - v24) / v14; /*0x4ae419*/
        v17 = (v28 - v25) / v14; /*0x4ae41e*/
      }
      v20 = v15; /*0x4ae420*/
      v21 = v16; /*0x4ae424*/
      v22 = v17; /*0x4ae428*/
    }
    return ((Tactical *)g_TacticalClass_Instance)->SetTacticalPosition(&v20); /*0x4ae437*/
  }
  int result; // eax
  return result; /*0x4ae43e*/
}
}
// 0x4F45B0
namespace gamemd {
AbstractClass * * TacticalClass_RenderFrame(void * a1, void * a2, void * a3)
{
  int v3; // ebx
  DDraw *v4; // ecx
  char result; // al
  ColorStruct v6; // [esp+4h] [ebp-C0h] BYREF
  ColorStruct v7; // [esp+64h] [ebp-60h] BYREF

  if ( !byte_8A0DF0 /*0x4f45d8*/
    || !dword_8A0E08
    || (*(int (__stdcall **)(unsigned int))(*&g_DrawColorState->u32_A0))(g_DrawColorState) )
  {
    goto LABEL_13; /*0x4f45dd*/
  }
  if ( !AudioStream::ReadSamples((AudioStream *)dword_8A0E08, 0) ) /*0x4f45ea*/
  {
    v4 = (gamemd::DDraw *)(dword_8A0E0C);
    if ( !dword_8A0E0C ) /*0x4f45ff*/
      goto LABEL_8; /*0x4f45ff*/
    if ( !AudioStream::ReadSamples((AudioStream *)dword_8A0E0C, 0) ) /*0x4f4602*/
    {
      v4 = (gamemd::DDraw *)(dword_8A0E0C);
      LABEL_8:
      if ( dword_8A0E10 ) /*0x4f461c*/
      {
        if ( v4 ) /*0x4f4624*/
        {
          ColorStruct::SetRGB((uint8_t)(&v6), 0x80u, 0x80u, 0x80u); /*0x4f463d*/
          (&v7)->SetRGB(0x80u, 0x80u, 0x80u); /*0x4f4655*/
          ((int)(v6.__pad_0))->SetCellTransform(0, 0, 0, 1008981770, 0, 0); /*0x4f466d*/
          Tactical::SetCellTransform((int)(v6.__pad_0), 1, 0, 1132396544, 1008981770, 0, 1065353216); /*0x4f468b*/
          Tactical::SetCellTransform((int)(v6.__pad_0), 2, 1132396544, 1132396544, 1008981770, 1065353216, 1065353216); /*0x4f46af*/
          Tactical::SetCellTransform(v7.__pad_0, 0, 0, 0, 1008981770, 0, 0); /*0x4f46c7*/
          Tactical::SetCellTransform(v7.__pad_0, 1, 1132396544, 1132396544, 1008981770, 1065353216, 1065353216); /*0x4f46eb*/
          Tactical::SetCellTransform(v7.__pad_0, 2, 1132396544, 0, 1008981770, 1065353216, 0); /*0x4f4709*/
          (dword_8A0E10)->Append(&v6); /*0x4f4719*/
          (dword_8A0E10)->Append(&v7); /*0x4f4729*/
        }
        ((ObjectClass *)(ObjectClass *)dword_8A0E10)->RenderTactical3DScene((int)DSurface_Composite->AudioStream_field_0x1C); /*0x4f473e*/
      }
    }
  }
  (*(void (__stdcall **)(unsigned int))(*(unsigned int *)g_DrawColorState + 44))(g_DrawColorState); /*0x4f4743*/
  LABEL_13:
  result = byte_A9FA94; /*0x4f474e*/
  if ( !byte_A9FA94 ) /*0x4f4755*/
  {
    result = (char)(Frame::Present( /*0x4f4761*/ (int)DSurface_Composite, v3, a2, a3, 0, *(int *)&v6.__pad_0, *(int *)&v6.u32_4, *(int **)&v6.u32_8));
    byte_A9FA94 = 0; /*0x4f4766*/
  }
  return (gamemd::AbstractClass **)(result);
}
}
// 0x547230
namespace gamemd {
void TacticalClass::DrawCellOverlay(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, void *a10_1)
{

  int v10; // edx
  int v11; // esi
  int v12; // eax
  int v13; // esi
  int v14; // edx
  int v15; // ecx
  int *v16; // ecx
  unsigned int v17; // eax
  int v18; // eax

  v10 = this->visibleCells[432]; /*0x547230*/
  v11 = g_TerrainTypeTable2; /*0x547237*/
  if ( (v10 < g_TerrainTypeTable2 || v10 >= g_TerrainTypeTable2 + 10) /*0x547260*/
    && ((v11 = dword_AA1098, v10 < dword_AA1098) || v10 >= dword_AA1098 + 10)
    || v10 - v11 == -1 )
  {
    if ( this->visibleCells[509] ) /*0x547294*/
    {
      v16 = (int *)(dword_AA102C); /*0x5472a2*/
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
        a4 = DSurface_ViewBounds + v15 + a4 - a6; /*0x5472f7*/
        a5 = dword_886FA4 + v14 + 15 + a5 - a7; /*0x54732c*/
        DrawToSurfaceSHP( /*0x547362*/
          a3,
          *(unsigned int *)dword_87F69C,
          (int)lpBuffer,
          v13 - 1,
          &a4,
          &a6,
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
int TacticalClass_BuildCommandBar(void * a1, void * a2, void * a3)
{
  CommandClass *v3; // ecx
  int v4; // ebx
  int v5; // ebp
  CommandClass *v6; // esi
  int result; // eax
  char v8; // bl
  char v9; // al
  ShapeButtonClass *v10; // edi
  int *v11; // edi
  int v12; // eax
  ShapeButtonClass *v13; // eax
  int v15; // [esp+0h] [ebp-24h]
  char v16; // [esp+4h] [ebp-20h]
  int v17[6]; // [esp+8h] [ebp-1Ch] BYREF
  char v18; // [esp+20h] [ebp-4h]

  v6 = v3; /*0x6d04f9*/
  v8 = ObjectClass::ToggleSidebarDisplay((SidebarClass *)this, v4, v5, a2, v15, v16); /*0x6d0501*/
  if ( !v8 ) /*0x6d0505*/
    goto LABEL_19; /*0x6d0505*/
  v9 = v6[5457].__tail_0[0]; /*0x6d0513*/
  if ( v6[5353].__tail_0[1] ) /*0x6d050b*/
  {
    if ( v9 ) /*0x6d0521*/
    {
      (v6)->BuildBar(); /*0x6d0525*/
      result = (*(int (**)(CommandClass *, int))(*(unsigned int *)v6 + 56))(v6, 2); /*0x6d0530*/
      (*((unsigned char *)&(result))) = v8; /*0x6d0533*/
      return result; /*0x6d053a*/
    }
    (*(void (**)(CommandClass *, GadgetClass *))(*(unsigned int *)v6 + 48))(v6, &stru_B0CC40); /*0x6d0546*/
    if ( &stru_B0CC40 ) /*0x6d0550*/
    {
      v17[1] = stru_B0CC40.Width; /*0x6d0567*/
      v17[2] = stru_B0CC40.Height; /*0x6d0571*/
      v17[3] = *(unsigned int *)&stru_B0CC40.Visible; /*0x6d057b*/
      v18 = 0; /*0x6d0586*/
      v17[0] = dword_B0CC64; /*0x6d058b*/
      v17[5] = (int)g_Str_Tip_ThumbClosed; /*0x6d058f*/
      v17[4] = stru_B0CC40.ID; /*0x6d0597*/
      HashTable::Remove(*(HashTable **)&g_TacticalRender, dword_B0CC64); /*0x6d059b*/
      CommandClass::AddAction(*(int **)&g_TacticalRender, (int)v17); /*0x6d05ab*/
      result = (*(int (**)(CommandClass *, int))(*(unsigned int *)v6 + 56))(v6, 2); /*0x6d05b6*/
      (*((unsigned char *)&(result))) = v8; /*0x6d05b9*/
      return result; /*0x6d05c0*/
    }
    goto LABEL_18; /*0x6d0550*/
  }
  if ( !v9 ) /*0x6d05c5*/
  {
    (*(void (**)(CommandClass *, GadgetClass *))(*(unsigned int *)v6 + 52))(v6, &stru_B0CC40); /*0x6d0656*/
    HashTable::Remove(*(HashTable **)&g_TacticalRender, 241); /*0x6d0664*/
    LABEL_18:
    result = (*(int (**)(CommandClass *, int))(*(unsigned int *)v6 + 56))(v6, 2); /*0x6d0669*/
    LABEL_19:
    (*((unsigned char *)&(result))) = v8; /*0x6d0672*/
    return result; /*0x6d0672*/
  }
  v10 = (gamemd::ShapeButtonClass *)(&stru_B0C1C0); /*0x6d05cc*/
  do /*0x6d05e2*/
  {
    (*(void (**)(CommandClass *, ShapeButtonClass *))(*(unsigned int *)v6 + 52))(v6, v10); /*0x6d05d6*/
    v10 += 8; /*0x6d05d9*/
  }
  while ( (int)v10 < (int)&dword_B0CB20 ); /*0x6d05e2*/
  (*(void (**)(CommandClass *, GadgetClass *, int))(*(unsigned int *)v6 + 52))(v6, &stru_B0CCB0, a2); /*0x6d05ed*/
  v11 = (int *)(g_ObjectTrackingPool); /*0x6d05f0*/
  do /*0x6d0627*/
  {
    v12 = *v11; /*0x6d05f5*/
    if ( *v11 >= 0 && v12 < 25 ) /*0x6d05fe*/
    {
      v13 = (gamemd::ShapeButtonClass *)(&stru_B0C1C0 + 8 * v12); /*0x6d0606*/
      if ( v13 ) /*0x6d060d*/
        HashTable::Remove(*(HashTable **)&g_TacticalRender, *(unsigned int *)v13[3].__pad_0); /*0x6d0619*/
    }
    ++v11; /*0x6d061e*/
  }
  while ( (int)v11 < (int)byte_B0CBDC ); /*0x6d0627*/
  HashTable::Remove(*(HashTable **)&g_TacticalRender, 240); /*0x6d0634*/
  result = (*(int (**)(CommandClass *, int))(*(unsigned int *)v6 + 56))(v6, 2); /*0x6d0640*/
  (*((unsigned char *)&(result))) = v8; /*0x6d0643*/
  return result; /*0x6d0535*/
}
}
// 0x6D2DE0
namespace gamemd {
signed int TacticalClass::RenderIsometricOverlay(int *aP1, int *aP2, char a4)
{

  int v20; // [esp+24h] [ebp-40h] BYREF
  int v21; // [esp+28h] [ebp-3Ch]
  signed int v22; // [esp+2Ch] [ebp-38h]
  unsigned int v25[4]; // [esp+54h] [ebp-10h] BYREF

  char v4 = a4; // bl /*0x6d2de4*/
  if ( a4 ) /*0x6d2dee*/
  {
    TacticalClass::RenderIsometric((void *)((int)this), &DSurface_ViewBounds.field_0, (int)&DSurface_ViewBounds); /*0x6d2dfa*/
  }
  else
  {
    if ( aP1->ptr_8 > 0 && aP1->ptr_C > 0 ) /*0x6d2e0c*/
      TacticalClass::RenderIsometric((void *)((int)this), aP1, (int)aP1); /*0x6d2e12*/
    if ( aP2[2] > 0 && aP2[3] > 0 ) /*0x6d2e27*/
      TacticalClass::RenderIsometric((int)this, aP2, (int)aP2); /*0x6d2e2d*/
  }
  if ( this->visibleCellCount > 0 && !a4 ) /*0x6d2e42*/
  {
    int *v26; // [esp+68h] [ebp+4h]
    v26 = 0; /*0x6d2e4a*/
    int *visibleCells; // ebp
    visibleCells = (int *)(this->visibleCells[0]); /*0x6d2e5e*/
    do /*0x6d2f79*/
    {
      unsigned int v19[3]; // [esp+18h] [ebp-4Ch] BYREF
      Coord::Subtract((int)(/*0x6d2eaf*/         (Coord *)v19),         ((((__int16)*(unsigned int *)(*visibleCells + 36) << 8) + 128) / 256) << 8,         ((((__int16)HIWORD(*(unsigned int *)(*visibleCells + 36)) << 8) + 128) / 256) << 8,         0);
      v20 = v19[0]; /*0x6d2ec0*/
      v21 = v19[1]; /*0x6d2ec4*/
      v22 = v19[2]; /*0x6d2ed4*/
      int *v7; // eax
      int v18; // [esp+10h] [ebp-54h] BYREF
      v7 = Coord::To_ScreenRaw(&v18,(unsigned int *)(&v20)); /*0x6d2ed8*/
      int v8; // edi
      v8 = this->visibleArea[1]; /*0x6d2ee5*/
      int v9; // ecx
      v9 = *v7 - this->visibleArea[0]; /*0x6d2eeb*/
      int v10; // eax
      v10 = v7[1]; /*0x6d2eed*/
      int v24[8]; // [esp+34h] [ebp-30h] BYREF
      v24[0] = v9 - 30; /*0x6d2ef3*/
      v24[3] = 30; /*0x6d2efc*/
      v24[1] = (int)DSurface_ViewBounds.field_4 + v10 - v8; /*0x6d2f16*/
      v24[2] = 60; /*0x6d2f24*/
      int *v11; // eax
      v11 = (int *)(ClipRectIntersection((RectangleStruct *)(v25), &DSurface_ViewBounds.field_0, v24, 0, 0)); /*0x6d2f28*/
      v24[4] = *v11; /*0x6d2f31*/
      v24[5] = v11->ptr_4; /*0x6d2f38*/
      if ( v11->ptr_8 > 0 && v11->ptr_C > 0 ) /*0x6d2f48*/
      {
        __int16 v17[2]; // [esp+Ch] [ebp-58h] BYREF
        *(unsigned int *)v17 = *(unsigned int *)(*visibleCells + 36); /*0x6d2f5c*/
        TacticalMapClass::ProcessCell((TacticalMapClass *)this, v17, (int)v24); /*0x6d2f60*/
      }
      ++visibleCells; /*0x6d2f70*/
      v26 = (int *)((char *)v26 + 1); /*0x6d2f75*/
    }
    while ( (int)v26 < this->visibleCellCount ); /*0x6d2f79*/
    v4 = a4; /*0x6d2f7f*/
  }
  signed int result = g_CraterCreationState; // eax /*0x6d2f84*/
  if ( g_CraterCreationState ) /*0x6d2f8b*/
  {
    if ( !v4 ) /*0x6d2f93*/
    {
      result = g_CraterCreationState - 1; /*0x6d2f99*/
      if ( g_CraterCreationState - 1 >= 0 ) /*0x6d2f9c*/
      {
        int v13 = g_CraterCreationState; // ebx /*0x6d2fa5*/
        int v14 = 20 * result; // edi /*0x6d2fa8*/
        do /*0x6d302e*/
        {
          v20 = *(unsigned int *)((char *)g_CraterPool + v14); /*0x6d2fbc*/
          v21 = *(unsigned int *)((char *)g_CraterPool + v14 + 4); /*0x6d2fc3*/
          v22 = *(unsigned int *)((char *)g_CraterPool + v14 + 8); /*0x6d2fca*/
          int v23; // [esp+30h] [ebp-34h]
          v23 = *(unsigned int *)((char *)g_CraterPool + v14 + 12); /*0x6d2fdd*/
          v21 += (int)DSurface_ViewBounds.field_4; /*0x6d2feb*/
          int *v15; // ecx
          v15 = (int *)(ClipRectIntersection((RectangleStruct *)(v25), &DSurface_ViewBounds.field_0, &v20, 0, 0)); /*0x6d2ff4*/
          v20 = *v15; /*0x6d2ff8*/
          v21 = v15->ptr_4; /*0x6d2fff*/
          result = v15->ptr_8; /*0x6d3003*/
          v22 = result; /*0x6d3006*/
          int v16 = v15->ptr_C; // ecx /*0x6d300a*/
          v23 = v16; /*0x6d300f*/
          if ( result > 0 && v16 > 0 ) /*0x6d3017*/
            result = TacticalClass::RenderIsometric((void *)((int)this), &v20, (int)&v20); /*0x6d3025*/
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
// 0x6D3660
namespace gamemd {
int TacticalClass::CalcAllDrawPositions(AbstractClass * aP1, BuildingTypeClass * aP2, int * a3, char a5)
{

  int v6; // ebx
  int *visibleCells; // ebp
  int *Coords; // eax
  int *v9; // eax
  int v10; // ecx
  int v11; // esi
  int result; // eax
  char *v13; // ecx
  int v14; // ebp
  char *v15; // edx
  int v16; // ebx
  int *v17; // eax
  int *v18; // [esp+0h] [ebp-48h]
  int v19[2]; // [esp+10h] [ebp-38h] BYREF
  int v20[4]; // [esp+18h] [ebp-30h] BYREF
  int v21; // [esp+28h] [ebp-20h] BYREF
  int v22; // [esp+2Ch] [ebp-1Ch]
  int v23; // [esp+30h] [ebp-18h]
  int v24; // [esp+34h] [ebp-14h]
  int v25[4]; // [esp+38h] [ebp-10h] BYREF
  int v26; // [esp+58h] [ebp+10h]

  if ( this->visibleCellCount <= 0 ) /*0x6d3671*/
  {
    if ( !a5 ) /*0x6d3742*/
      goto LABEL_11; /*0x6d3742*/
    LABEL_10:
    TacticalClass::CalcBuildingDrawPos(&DSurface_ViewBounds.field_0, v18); /*0x6d3744*/
    goto LABEL_11; /*0x6d374b*/
  }
  if ( a5 ) /*0x6d367d*/
    goto LABEL_10; /*0x6d367d*/
  v6 = 0; /*0x6d3683*/
  visibleCells = (int *)(this->visibleCells[0]); /*0x6d368d*/
  do /*0x6d3734*/
  {
    Coords = CellClass::GetCoords((CellClass *)*visibleCells, v25); /*0x6d369b*/
    v21 = *Coords; /*0x6d36a2*/
    v22 = Coords->ptr_4; /*0x6d36ae*/
    v23 = 0; /*0x6d36c0*/
    v9 = Coord::To_ScreenRaw(v20,(unsigned int *)(&v21)); /*0x6d36c8*/
    v10 = v9[1] - this->visibleArea[1]; /*0x6d36e8*/
    v19[0] = *v9 - this->visibleArea[0] + DSurface_ViewBounds.field_0 - 30; /*0x6d36f4*/
    v19[1] = (int)DSurface_ViewBounds.field_4 + v10 - 15; /*0x6d3703*/
    if ( g_hWnd ) /*0x6d3707*/
      (*visibleCells)->RenderCellFogOfWar((unsigned int *)v19, a3); /*0x6d3716*/
    UpdateSpotlightsFoo(v19, a3); /*0x6d3723*/
    ++v6; /*0x6d372e*/
    ++visibleCells; /*0x6d372f*/
  }
  while ( v6 < this->visibleCellCount ); /*0x6d3734*/
  LABEL_11:
  v11 = 0; /*0x6d3750*/
  if ( aP1[2] > 0 && aP1[3] > 0 && !a5 ) /*0x6d3766*/
    TacticalClass::CalcBuildingDrawPos(aP1, v18); /*0x6d376b*/
  if ( aP2[2] > 0 && aP2[3] > 0 && !a5 ) /*0x6d3784*/
    TacticalClass::CalcBuildingDrawPos(aP2, v18); /*0x6d3789*/
  result = g_CraterCreationState; /*0x6d378e*/
  v26 = 0; /*0x6d3793*/
  if ( g_CraterCreationState > 0 ) /*0x6d3799*/
  {
    v13 = (char *)g_CraterPool; /*0x6d379f*/
    do /*0x6d3860*/
    {
      v14 = *(unsigned int *)&v13[v11]; /*0x6d37af*/
      v15 = (char *)DSurface_ViewBounds.field_4 + *(unsigned int *)&v13[v11 + 4]; /*0x6d37b7*/
      v16 = *(unsigned int *)&v13[v11 + 8]; /*0x6d37b9*/
      v25[3] = *(unsigned int *)&v13[v11 + 12]; /*0x6d37c3*/
      v25[1] = (int)v15; /*0x6d37cf*/
      v25[0] = v14 + DSurface_ViewBounds.field_0; /*0x6d37dc*/
      v25[2] = v16; /*0x6d37e0*/
      v17 = (int *)(ClipRectIntersection((RectangleStruct *)(v20), v25, a3, 0, 0)); /*0x6d37e4*/
      v21 = *v17; /*0x6d37ed*/
      v22 = v17->ptr_4; /*0x6d37f4*/
      v23 = v17->ptr_8; /*0x6d37fb*/
      v13 = (char *)g_CraterPool; /*0x6d37ff*/
      v24 = v17->ptr_C; /*0x6d3808*/
      if ( *((unsigned char *)g_CraterPool + v11 + 16) ) /*0x6d380c*/
      {
        TacticalClass::FillScanlinesTransparent( /*0x6d3835*/
          *(TacticalClass **)&g_VisibleSurfaceDescriptor,
          *v17,
          v17->ptr_4,
          v17->ptr_8,
          v17->ptr_C);
        TacticalClass::CalcBuildingDrawPos(&v21, v18); /*0x6d3841*/
        v13 = (char *)g_CraterPool; /*0x6d3846*/
      }
      result = v26 + 1; /*0x6d3856*/
      v11 += 20; /*0x6d3857*/
      ++v26; /*0x6d385c*/
    }
    while ( v26 < g_CraterCreationState ); /*0x6d3860*/
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
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  int smudgeTypeIndex; // ebx
  int v11; // edx
  int v12; // ecx
  int v13; // ebp
  int *result; // eax
  int v15; // ecx
  int v16; // ebp
  int v17; // ecx
  House *v18; // eax
  int v19; // ebx
  int *StartCoords; // eax
  int *v21; // eax
  int *v22; // eax
  int v23; // edx
  int v24; // esi
  int v25; // ecx
  int v26; // ebp
  int v27; // ecx
  BuildingClass *v28; // eax
  int v29; // ebx
  int *PlacementRect; // eax
  int *v31; // eax
  __int16 v32[2]; // [esp+10h] [ebp-B0h] BYREF
  int v33; // [esp+14h] [ebp-ACh]
  int v34; // [esp+18h] [ebp-A8h]
  int v35; // [esp+1Ch] [ebp-A4h]
  int v36; // [esp+20h] [ebp-A0h]
  int *v37; // [esp+24h] [ebp-9Ch]
  unsigned int v38[2]; // [esp+28h] [ebp-98h]
  int v39[2]; // [esp+30h] [ebp-90h] BYREF
  int *v40; // [esp+38h] [ebp-88h]
  float v41; // [esp+3Ch] [ebp-84h] BYREF
  float v42; // [esp+40h] [ebp-80h]
  int v43; // [esp+44h] [ebp-7Ch]
  int v44; // [esp+48h] [ebp-78h] BYREF
  int v45; // [esp+4Ch] [ebp-74h]
  int v46; // [esp+50h] [ebp-70h]
  int v47; // [esp+54h] [ebp-6Ch] BYREF
  int v48; // [esp+58h] [ebp-68h]
  int v49; // [esp+5Ch] [ebp-64h]
  int v50; // [esp+60h] [ebp-60h]
  int v51[4]; // [esp+64h] [ebp-5Ch] BYREF
  int v52; // [esp+74h] [ebp-4Ch]
  int v53; // [esp+78h] [ebp-48h] BYREF
  int v54; // [esp+7Ch] [ebp-44h]
  int v55; // [esp+80h] [ebp-40h]
  unsigned int v56[3]; // [esp+84h] [ebp-3Ch] BYREF
  int v57; // [esp+90h] [ebp-30h] BYREF
  int v58; // [esp+94h] [ebp-2Ch]
  int v59[4]; // [esp+A0h] [ebp-20h] BYREF
  int v60[4]; // [esp+B0h] [ebp-10h] BYREF

  v3 = *aP1; /*0x6d6d2f*/
  v43 = 0; /*0x6d6d31*/
  v4 = this->visibleArea[0] + v3; /*0x6d6d45*/
  v5 = aP1[1] + this->visibleArea[1]; /*0x6d6d4c*/
  v35 = v4 - DSurface_ViewBounds.field_0; /*0x6d6d4e*/
  v36 = v5 - dword_886FA4; /*0x6d6d58*/
  v41 = (float)(v4 - DSurface_ViewBounds.field_0); /*0x6d6d67*/
  v42 = (float)(v5 - dword_886FA4); /*0x6d6d73*/
  v6 = TransformMatrix3x4Point((float *)&v44, (float *)this->TacticalClass_field_DE4, &v41); /*0x6d6d77*/
  v41 = *v6; /*0x6d6d7e*/
  v42 = v6[1]; /*0x6d6d89*/
  v43 = *((unsigned int *)v6 + 2); /*0x6d6d90*/
  (v7) = ((v7) & ~0xFFFF) | ((Math::RoundToInt(v41)) & 0xFFFF); /*0x6d6d94*/
  v8 = v7; /*0x6d6d9d*/
  (v9) = ((v9) & ~0xFFFF) | ((Math::RoundToInt(v42)) & 0xFFFF); /*0x6d6d9f*/
  v53 = v8; /*0x6d6da6*/
  v54 = v9; /*0x6d6dac*/
  v55 = 0; /*0x6d6db0*/
  if ( v9 < 0 ) /*0x6d6db7*/
    v54 = 0; /*0x6d6db9*/
  if ( v8 < 0 ) /*0x6d6dbf*/
    v53 = 0; /*0x6d6dc1*/
  smudgeTypeIndex = Coord::To_Cell((Coord *)&dword_87F7E8, &v53)->smudgeTypeIndex; /*0x6d6dd4*/
  v11 = (unsigned __int64)(2290649225LL * aP1[3]) >> 32; /*0x6d6de3*/
  v12 = aP1[2]; /*0x6d6de5*/
  v38[0] = smudgeTypeIndex; /*0x6d6df3*/
  v13 = (v11 >> 3) + ((unsigned int)v11 >> 31) + 20; /*0x6d6df7*/
  v40 = (int *)(v12 / 60 + 4); /*0x6d6e17*/
  result = ClipRectIntersection(&v57, &DSurface_ViewBounds.field_0, aP1, 0, 0); /*0x6d6e20*/
  v15 = *result; /*0x6d6e25*/
  HIWORD(v38[0]) = (((smudgeTypeIndex) >> 16) & 0xFFFF) - 2; /*0x6d6e27*/
  v51[0] = v15; /*0x6d6e2d*/
  v16 = v13 + 1; /*0x6d6e37*/
  v51[1] = result->u32_4; /*0x6d6e38*/
  LOWORD(v38[0]) = smudgeTypeIndex - 4; /*0x6d6e3c*/
  v17 = result->u32_8; /*0x6d6e41*/
  v52 = v16; /*0x6d6e44*/
  v51[2] = v17; /*0x6d6e48*/
  v51[3] = result->q00C; /*0x6d6e51*/
  if ( v16 >= 0 ) /*0x6d6e55*/
  {
    v33 = v16 + 1; /*0x6d6e5e*/
    do /*0x6d702b*/
    {
      (v35) = ((v35) & ~0xFFFF) | ((v16 / 2) & 0xFFFF); /*0x6d6e69*/
      (v35) = ((v35) & ~(0xFFFF << 16)) | (((v33 / 2) & 0xFFFF) << 16); /*0x6d6e7b*/
      LOWORD(v34) = LOWORD(v38[0]) + v35; /*0x6d6e8a*/
      HIWORD(v34) = HIWORD(v38[0]) + (((v35) >> 16) & 0xFFFF); /*0x6d6e95*/
      result = v40; /*0x6d6e9a*/
      *(unsigned int *)v32 = v34; /*0x6d6ea4*/
      if ( (int)v40 > 0 ) /*0x6d6ea8*/
      {
        v37 = v40; /*0x6d6eae*/
        do /*0x6d7019*/
        {
          if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&dword_87F7E8, v32) ) /*0x6d6ebc*/
          {
            v18 = (House *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v32); /*0x6d6ed3*/
            v19 = (int)v18; /*0x6d6ed8*/
            if ( *&v18->ptr_44 != -1 ) /*0x6d6ede*/
            {
              StartCoords = House::GetStartCoords(v18, v59); /*0x6d6eee*/
              v47 = *StartCoords; /*0x6d6ef7*/
              v48 = StartCoords[1]; /*0x6d6f00*/
              v49 = StartCoords[2]; /*0x6d6f07*/
              v50 = StartCoords[3]; /*0x6d6f19*/
              v21 = ClipRectIntersection(v60, v51, &v47, 0, 0); /*0x6d6f22*/
              v57 = *v21; /*0x6d6f2b*/
              v58 = v21->u32_4; /*0x6d6f35*/
              if ( v21->u32_8 > 0 && v21->q00C > 0 ) /*0x6d6f4c*/
              {
                Coord::Subtract((Coord *)v56, (((v32[0] << 8) + 128) / 256) << 8, (((v32[1] << 8) + 128) / 256) << 8, 0); /*0x6d6f98*/
                v44 = v56[0]; /*0x6d6fb2*/
                v45 = v56[1]; /*0x6d6fb6*/
                v46 = v56[2]; /*0x6d6fc6*/
                v22 = Coord::To_ScreenRaw((int *)&v41, &v44); /*0x6d6fca*/
                v23 = this->visibleArea[0]; /*0x6d6fcf*/
                v24 = this->visibleArea[1]; /*0x6d6fd7*/
                v39[0] = *v22; /*0x6d6fdf*/
                v25 = v22[1] - v24; /*0x6d6feb*/
                v39[0] = v39[0] - v23 - 30; /*0x6d6fed*/
                v39[1] = v25; /*0x6d6ff9*/
                BuildingClass::Draw_0(v19, v39, v51); /*0x6d7001*/
              }
            }
          }
          ++v32[0]; /*0x6d7006*/
          --v32[1]; /*0x6d700f*/
          result = (int *)((char *)v37 - 1); /*0x6d7014*/
          v37 = (int *)((char *)v37 - 1); /*0x6d7015*/
        }
        while ( v37 ); /*0x6d7019*/
      }
      --v16; /*0x6d7023*/
      --v33; /*0x6d7027*/
    }
    while ( v16 >= 0 ); /*0x6d702b*/
    v26 = v52; /*0x6d7031*/
    if ( v52 >= 0 ) /*0x6d7037*/
    {
      v33 = v52 + 1; /*0x6d7040*/
      v27 = (int)v40; /*0x6d7044*/
      do /*0x6d71cd*/
      {
        (v35) = ((v35) & ~0xFFFF) | ((v26 / 2) & 0xFFFF); /*0x6d704f*/
        (v35) = ((v35) & ~(0xFFFF << 16)) | (((v33 / 2) & 0xFFFF) << 16); /*0x6d705d*/
        result = *(int **)((char *)v38 + 2); /*0x6d706c*/
        LOWORD(v37) = LOWORD(v38[0]) + v35; /*0x6d7070*/
        HIWORD(v37) = HIWORD(v38[0]) + (((v35) >> 16) & 0xFFFF); /*0x6d707b*/
        *(unsigned int *)v32 = v37; /*0x6d7086*/
        if ( v27 > 0 ) /*0x6d708a*/
        {
          v34 = v27; /*0x6d7090*/
          do /*0x6d71b7*/
          {
            if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&dword_87F7E8, v32) ) /*0x6d709e*/
            {
              v28 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v32); /*0x6d70b5*/
              v29 = (int)v28; /*0x6d70ba*/
              if ( v28->ambientSoundController[2] != -1 ) /*0x6d70c0*/
              {
                PlacementRect = BuildingClass::GetPlacementRect(v28, v60); /*0x6d70d0*/
                v47 = *PlacementRect; /*0x6d70d9*/
                v48 = PlacementRect[1]; /*0x6d70e2*/
                v49 = PlacementRect[2]; /*0x6d70e9*/
                v50 = PlacementRect[3]; /*0x6d70fb*/
                v31 = ClipRectIntersection(v59, v51, &v47, 0, 0); /*0x6d7104*/
                v57 = *v31; /*0x6d710d*/
                v58 = v31->u32_4; /*0x6d7117*/
                if ( v31->u32_8 > 0 && v31->q00C > 0 ) /*0x6d712a*/
                {
                  v46 = 0; /*0x6d715f*/
                  v44 = (((v32[0] << 8) + 128) / 256) << 8; /*0x6d717b*/
                  v45 = (((v32[1] << 8) + 128) / 256) << 8; /*0x6d717f*/
                  Coord::To_Screen((Coord *)this, &v44, v39); /*0x6d7183*/
                  v39[0] -= 30; /*0x6d719b*/
                  TacticalClass::DrawBuildingPlacement(v29, v39, v51); /*0x6d719f*/
                }
              }
            }
            ++v32[0]; /*0x6d71a4*/
            --v32[1]; /*0x6d71ad*/
            result = (int *)--v34; /*0x6d71b2*/
          }
          while ( v34 ); /*0x6d71b7*/
          v27 = (int)v40; /*0x6d71bd*/
        }
        --v26; /*0x6d71c5*/
        --v33; /*0x6d71c9*/
      }
      while ( v26 >= 0 ); /*0x6d71cd*/
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
  int v13; // eax
  int v14; // esi
  int v16; // [esp+10h] [ebp-2Ch]
  int v17; // [esp+18h] [ebp-24h]
  int v18; // [esp+1Ch] [ebp-20h]
  int v19; // [esp+24h] [ebp-18h]
  int v20; // [esp+2Ch] [ebp-10h]
  unsigned char v21[12]; // [esp+30h] [ebp-Ch] BYREF

  v5 = this->visibleArea[0]; /*0x6d9b53*/
  v6 = this->visibleArea[1]; /*0x6d9b5d*/
  v17 = v5 + a2; /*0x6d9b6a*/
  v18 = v6 + a3; /*0x6d9b75*/
  v7 = a2 + v5 + aP3; /*0x6d9b86*/
  v8 = 0; /*0x6d9b8a*/
  v20 = a3 + a5 + v6; /*0x6d9b8c*/
  v16 = 0; /*0x6d9b98*/
  if ( stru_A8EB00.ptr_0[20] <= 0 ) /*0x6d9b9c*/
    return 0; /*0x6d9cc6*/
  while ( 1 ) /*0x6d9ba8*/
  {
    v9 = *(unsigned char **)(stru_A8EB00.ptr_0[17] + 4 * v8); /*0x6d9ba8*/
    if ( !v9[144] || !v9[128] || !v9[116] ) /*0x6d9bc7*/
      goto LABEL_10; /*0x6d9bcc*/
    v10 = (unsigned int *)(*(int (**)(unsigned char *, unsigned char *))(*(unsigned int *)v9 + 172))(v9, v21); /*0x6d9bd9*/
    v19 = v10[1]; /*0x6d9be6*/
    v11 = (-60 * v19 / 2 + 60 * *v10 / 2) / 256; /*0x6d9c5d*/
    v12 = (30 * v19 / 2 + 30 * *v10 / 2) / 256; /*0x6d9c60*/
    (*((unsigned short *)&(v13))) = Math::RoundToInt((double)(int)v10[2] * dbl_B0CD48 + (double)(v10[2] >= 728) + 0.5); /*0x6d9c87*/
    v14 = v12 - v13; /*0x6d9c8c*/
    if ( v11 >= v17 && v11 <= v7 && v14 >= v18 && v14 <= v20 ) /*0x6d9ca4*/
      return 1; /*0x6d9cbd*/
    v8 = v16; /*0x6d9ca6*/
    LABEL_10:
    v16 = ++v8; /*0x6d9cb3*/
    if ( v8 >= stru_A8EB00.ptr_0[20] ) /*0x6d9cb7*/
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
  CellClass *v9; // eax
  double v10; // st7
  unsigned int v11; // eax
  unsigned char *result; // eax
  int v13; // ecx
  int v14; // eax
  void *Object_field_0x30; // [esp-8h] [ebp-3Ch]
  unsigned int v16; // [esp+Ch] [ebp-28h]
  int v17; // [esp+10h] [ebp-24h]
  unsigned char *v18; // [esp+14h] [ebp-20h]
  int v19; // [esp+18h] [ebp-1Ch]
  int v20[2]; // [esp+1Ch] [ebp-18h] BYREF
  int v21; // [esp+24h] [ebp-10h] BYREF
  char v22[12]; // [esp+28h] [ebp-Ch] BYREF

  v2 = a2; /*0x6da385*/
  v19 = *a2 + this->visibleArea[0]; /*0x6da39b*/
  v18 = 0; /*0x6da3a7*/
  v20[0] = a2[1] + this->visibleArea[1]; /*0x6da3ab*/
  v16 = -1; /*0x6da3b7*/
  v17 = 0; /*0x6da3bf*/
  if ( this->floats[0] <= 0 ) /*0x6da3c3*/
  {
    LABEL_18:
    v13 = v2->field_4; /*0x6da4b8*/
    v20[0] = DSurface_ViewBounds.field_0 + *v2; /*0x6da4cb*/
    v20[1] = (int)DSurface_ViewBounds.field_4 + v13; /*0x6da4d9*/
    a2 = (unsigned int *)*((Tactical *)this)->PixelToCell(&v21, v20); /*0x6da4ec*/
    return (unsigned char *)*((unsigned int *)((CellCoord *)&DataGlobal_87F7E8)->To_CellObj((__int16 *)&a2) + 57); /*0x6da4fb*/
  }
  v4 = dword_B0CECC; /*0x6da3ca*/
  do /*0x6da4a5*/
  {
    v5 = (unsigned char *)*(v4 - 1); /*0x6da3cf*/
    if ( !v5 ) /*0x6da3d4*/
      goto LABEL_15; /*0x6da3d4*/
    v6 = AbstractClass::IsTechno((AbstractClass *)*(v4 - 1)); /*0x6da3dc*/
    v7 = 0; /*0x6da3e1*/
    if ( !v6 ) /*0x6da3e5*/
    {
      if ( !(*(int (**)(unsigned char *))(*&v5->q220))(v5) ) /*0x6da50e*/
        goto LABEL_15; /*0x6da50e*/
      v14 = (*(int (**)(unsigned char *))(*(unsigned int *)v5 + 136))(v5); /*0x6da520*/
      if ( (*(int (**)(int))(*(unsigned int *)v14 + 44))(v14) != 37 /*0x6da540*/
        || !*(unsigned char *)((*(int (**)(unsigned char *))(*&v5->q220))(v5) + 692) )
      {
        goto LABEL_15; /*0x6da548*/
      }
      LABEL_12:
      v10 = (double)((v4[1] - v20[0]) * (v4[1] - v20[0])) * 0.5; /*0x6da444*/
      v21 = (*v4 - v19) * (*v4 - v19); /*0x6da46d*/
      (v11) = ((v11) & ~0xFFFF) | ((Math::RoundToInt(v10 + (double)v21)) & 0xFFFF); /*0x6da477*/
      if ( v11 < v16 && v11 < 0xC8 ) /*0x6da487*/
      {
        v16 = v11; /*0x6da489*/
        v18 = v5; /*0x6da48d*/
      }
      goto LABEL_15; /*0x6da48d*/
    }
    if ( v5->q090 ) /*0x6da3eb*/
    {
      if ( !v6[129] ) /*0x6da3f5*/
      {
        if ( v6[1050] /*0x6da435*/
          || *((unsigned int *)v6 + 136) != 2
          || (Object_field_0x30 = dword_A83D4C->relatedTagsCount,
              v8 = (unsigned int *)(*(int (**)(unsigned char *, char *))(*(unsigned int *)v6 + 72))(v6, v22),
              v9 = Coord::To_Cell((Coord *)&DataGlobal_87F7E8, v8),
              (unsigned __int8)((Cell *)v9)->IsPassableOffset((int)Object_field_0x30)) )
        {
          v7 = 1; /*0x6da43e*/
        }
      }
    }
    if ( v7 ) /*0x6da442*/
      goto LABEL_12; /*0x6da442*/
    LABEL_15:
    v4 += 3; /*0x6da491*/
    ++v17; /*0x6da4a1*/
  }
  while ( v17 < this->floats[0] ); /*0x6da4a5*/
  result = v18; /*0x6da4ab*/
  if ( !v18 ) /*0x6da4b2*/
  {
    v2 = a2; /*0x6da4b4*/
    goto LABEL_18; /*0x6da4b4*/
  }
  return result; /*0x6da501*/

}
}
// 0x6DBE20
namespace gamemd {
void* TacticalClass::DrawPlacementCircles()
{

  int v1; // ebx
  int i; // edi
  int v3; // esi
  TechnoClass *v4; // ebx
  CellClass *v5; // eax
  int *Coords; // eax
  int v7; // esi
  int v8; // edi
  int v9; // ebp
  int v10; // ecx
  double v11; // st7
  char v12; // ecx^3
  int v13; // edi
  int v14; // ebp
  int Color_field_00; // eax
  float v16; // ebx
  AbstractClass *v17; // ecx
  __int16 v18; // si
  int ptr_0; // eax
  unsigned int *v20; // eax
  double v21; // st6
  __int16 v22; // ax
  int v23; // ebx
  AbstractClass *v24; // esi
  __int16 v25; // di
  int v26; // eax
  unsigned int *v27; // eax
  double v28; // st6
  int v29; // edi
  double v30; // st7
  CellClass *v31; // eax
  int *v32; // eax
  int v33; // ecx
  int v34; // ebx
  int v35; // ebp
  int v36; // esi
  unsigned __int16 *v37; // edx
  float v38; // eax
  char v39; // cl
  double v40; // st7
  char v41; // ecx^3
  double v42; // st7
  char v43; // ecx^3
  int v44; // [esp+4h] [ebp-58h]
  int v45; // [esp+4h] [ebp-58h]
  int v46; // [esp+4h] [ebp-58h]
  float v47; // [esp+8h] [ebp-54h]
  float v48; // [esp+8h] [ebp-54h]
  Color v49; // [esp+28h] [ebp-34h] BYREF
  Color v50; // [esp+2Ch] [ebp-30h] BYREF
  AbstractClass *v51; // [esp+30h] [ebp-2Ch]
  float v52; // [esp+34h] [ebp-28h]
  __int16 v53[2]; // [esp+38h] [ebp-24h] BYREF
  __int16 v54[4]; // [esp+3Ch] [ebp-20h] BYREF
  int v55; // [esp+44h] [ebp-18h]
  int v56; // [esp+48h] [ebp-14h]
  int v57[2]; // [esp+50h] [ebp-Ch] BYREF
  int v58; // [esp+58h] [ebp-4h]

  v1 = *(unsigned int *)&stru_A8E960.random[340]; /*0x6dbe2a*/
  for ( i = 0; i < v1; ++i ) /*0x6dbe37*/
  {
    v3 = *(unsigned int *)(*(unsigned int *)&stru_A8E960.random[328] + 4 * i); /*0x6dbe3e*/
    if ( (*(int (**)(int))(*(unsigned int *)v3 + 136))(v3) /*0x6dbe59*/
      && *(unsigned char *)((*(int (**)(int))(*(unsigned int *)v3 + 136))(v3) + 568) )
    {
      (*(void (**)(int, int))(*(unsigned int *)v3 + 304))(v3, 1); /*0x6dbe69*/
    }
  }
  if ( stru_A8E960.random[10] ) /*0x6dbe7b*/
  {
    v4 = (TechnoClass *)dword_88098C; /*0x6dbe81*/
    v51 = dword_88098C; /*0x6dbe89*/
    if ( dword_88098C && (*(int (**)(AbstractClass *))(dword_88098C->ptr_0 + 44))(dword_88098C) == 6 ) /*0x6dbe9d*/
    {
      if ( BuildingClass::GetPowerFrame(v4) > 0 ) /*0x6dbeac*/
      {
        *(float *)v53 = *(float *)&dword_88095C; /*0x6dbec0*/
        v5 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v53); /*0x6dbecb*/
        Coords = CellClass::GetCoords(v5, v57); /*0x6dbed2*/
        v7 = *Coords; /*0x6dbed7*/
        v8 = Coords[1]; /*0x6dbed9*/
        v9 = Coords[2]; /*0x6dbedc*/
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
        v10 = v4->owner + 22265; /*0x6dbf55*/
        LOWORD(v50.Color_field_00) = *(unsigned short *)v10; /*0x6dbf5f*/
        BYTE2(v50.Color_field_00) = *(unsigned char *)(v10 + 2); /*0x6dbf67*/
        Color::Lerp(&v50, dword_B0E648, &byte_B0CE14); /*0x6dbf6f*/
        v52 = COERCE_FLOAT(BuildingClass::GetPowerFrame(v4)); /*0x6dbf7b*/
        v11 = (double)SLODWORD(v52); /*0x6dbf81*/
        v47 = v11; /*0x6dbf91*/
        HIBYTE(v44) = v12; /*0x6dbf94*/
        LOWORD(v44) = v50.Color_field_00; /*0x6dbf9a*/
        BYTE2(v44) = BYTE2(v50.Color_field_00); /*0x6dbfa1*/
        DrawTechnoDeployCircle(0, 1, v11, v7, v8, v9, v44, v47, 0, 1); /*0x6dbfae*/
        v13 = 0; /*0x6dbfb9*/
        v14 = 0x7FFFFFFF; /*0x6dbfbb*/
        v49.Color_field_00 = *(unsigned int *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 120); /*0x6dbfc5*/
        Color_field_00 = v49.Color_field_00; /*0x6dbfc0*/
        if ( v49.Color_field_00 > 0 ) /*0x6dbfc9*/
        {
          v16 = v52; /*0x6dbfcf*/
          do /*0x6dc0b0*/
          {
            v17 = *(AbstractClass **)(*(unsigned int *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 108) + 4 * v13); /*0x6dbfdc*/
            if ( v17 ) /*0x6dbfe1*/
            {
              if ( LOBYTE(v17[4].ptr_0) ) /*0x6dbfe7*/
              {
                if ( v17 != v51 && v17[36].uniqueId == v51[36].uniqueId ) /*0x6dc00f*/
                {
                  v18 = dword_88095C; /*0x6dc015*/
                  ptr_0 = v17->ptr_0; /*0x6dc01b*/
                  v55 = *(unsigned int *)&dword_88095C; /*0x6dc021*/
                  v20 = (unsigned int *)(*(int (**)(AbstractClass *, int *))(ptr_0 + 72))(v17, v57); /*0x6dc026*/
                  v54[0] = *v20 / 256; /*0x6dc03c*/
                  v54[1] = v20[1] / 256; /*0x6dc050*/
                  LODWORD(v52) = (__int16)((((v55) >> 16) & 0xFFFF) - v54[1]); /*0x6dc06b*/
                  v21 = (double)SLODWORD(v52); /*0x6dc06f*/
                  LODWORD(v52) = (__int16)(v18 - v54[0]); /*0x6dc073*/
                  Math::Sqrt((double)SLODWORD(v52) * (double)SLODWORD(v52) + v21 * v21); /*0x6dc08c*/
                  v22 = Math::RoundToInt(v11); /*0x6dc094*/
                  if ( v22 <= 2 * LODWORD(v16) && v22 < v14 ) /*0x6dc0a5*/
                    v14 = v22; /*0x6dc0a7*/
                }
              }
            }
            Color_field_00 = v49.Color_field_00; /*0x6dc0a9*/
            ++v13; /*0x6dc0ad*/
          }
          while ( v13 < v49.Color_field_00 ); /*0x6dc0b0*/
        }
        v23 = 0; /*0x6dc0b6*/
        if ( Color_field_00 > 0 ) /*0x6dc0ba*/
        {
          do /*0x6dc1a1*/
          {
            v24 = *(AbstractClass **)(*(unsigned int *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 108) + 4 * v23); /*0x6dc0c8*/
            if ( v24 && LOBYTE(v24[4].ptr_0) && v24 != v51 && v24[36].uniqueId == v51[36].uniqueId ) /*0x6dc0fb*/
            {
              v25 = dword_88095C; /*0x6dc101*/
              v26 = v24->ptr_0; /*0x6dc107*/
              v55 = *(unsigned int *)&dword_88095C; /*0x6dc10d*/
              v27 = (unsigned int *)(*(int (**)(AbstractClass *, int *))(v26 + 72))(v24, v57); /*0x6dc114*/
              v54[0] = *v27 / 256; /*0x6dc12a*/
              v54[1] = v27[1] / 256; /*0x6dc13e*/
              LODWORD(v52) = (__int16)((((v55) >> 16) & 0xFFFF) - v54[1]); /*0x6dc159*/
              v28 = (double)SLODWORD(v52); /*0x6dc15d*/
              LODWORD(v52) = (__int16)(v25 - v54[0]); /*0x6dc161*/
              Math::Sqrt((double)SLODWORD(v52) * (double)SLODWORD(v52) + v28 * v28); /*0x6dc17a*/
              if ( (__int16)Math::RoundToInt(v11) == v14 ) /*0x6dc18c*/
                (*(void (**)(AbstractClass *, unsigned int))(v24->ptr_0 + 304))(v24, 0); /*0x6dc194*/
            }
            ++v23; /*0x6dc19e*/
          }
          while ( v23 < v49.Color_field_00 ); /*0x6dc1a1*/
        }
      }
      return; /*0x6dc1a1*/
    }
    if ( dword_8809A0 == -1 ) /*0x6dc1b7*/
      return; /*0x6dc1b7*/
    v29 = *((unsigned int *)dword_A8E334 + dword_8809A0); /*0x6dc1c3*/
    v30 = *(float *)(v29 + 248); /*0x6dc1c6*/
    v52 = *(float *)(v29 + 248); /*0x6dc1cc*/
    if ( v30 <= 0.0 ) /*0x6dc1db*/
      return; /*0x6dc1db*/
    *(unsigned int *)v54 = *(unsigned int *)&dword_88095C; /*0x6dc1f6*/
    v31 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v54); /*0x6dc1fa*/
    v32 = CellClass::GetCoords(v31, v57); /*0x6dc201*/
    v33 = v32->ptr_4; /*0x6dc20d*/
    v55 = *v32 - 126; /*0x6dc210*/
    v34 = v32->ptr_8; /*0x6dc219*/
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
    v37 = (unsigned __int16 *)(*(&dword_A8022C->ptr_0 /*0x6dc28c*/
                               + *(unsigned int *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 48))
                             + 22265);
    LOWORD(v50.Color_field_00) = *v37; /*0x6dc2a7*/
    v38 = *(float *)(v29 + 252); /*0x6dc2ac*/
    v39 = v37->u32_2; /*0x6dc2b2*/
    LOWORD(v49.Color_field_00) = 0; /*0x6dc2b5*/
    BYTE2(v50.Color_field_00) = v39; /*0x6dc2bc*/
    BYTE2(v49.Color_field_00) = 0; /*0x6dc2c5*/
    *(float *)v53 = v38; /*0x6dc2ca*/
    if ( SLODWORD(v38) <= 0 ) /*0x6dc2ce*/
    {
      Color::Lerp(&v50, dword_B0E64C, &byte_B0CD70); /*0x6dc3b5*/
      HIBYTE(v46) = v43; /*0x6dc3ce*/
      LOWORD(v46) = v50.Color_field_00; /*0x6dc3d6*/
      BYTE2(v46) = BYTE2(v50.Color_field_00); /*0x6dc3dd*/
      DrawTechnoDeployCircle(0, 1, v30, v55, v56, v34, v46, v52, 0, 1); /*0x6dc3ee*/
    }
    else
    {
      v51 = 0; /*0x6dc2d8*/
      if ( (double)*(int *)v53 * v52 >= 0.0 ) /*0x6dc2ef*/
      {
        *(float *)v53 = 0.0; /*0x6dc2f5*/
        do /*0x6dc39d*/
        {
          LOWORD(v49.Color_field_00) = v50.Color_field_00; /*0x6dc30a*/
          BYTE2(v49.Color_field_00) = BYTE2(v50.Color_field_00); /*0x6dc30f*/
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
          Color::Lerp(&v49, v36, &byte_B0CD70); /*0x6dc333*/
          v40 = *(float *)v53 / (double)*(int *)(v29 + 252); /*0x6dc349*/
          v48 = v40; /*0x6dc350*/
          HIBYTE(v45) = v41; /*0x6dc353*/
          LOWORD(v45) = v49.Color_field_00; /*0x6dc359*/
          BYTE2(v45) = BYTE2(v49.Color_field_00); /*0x6dc360*/
          DrawTechnoDeployCircle(0, 1, v40, v55, v56, v58, v45, v48, 0, 0); /*0x6dc379*/
          v51 = (AbstractClass *)((char *)v51 + 1); /*0x6dc37e*/
          v42 = (double)(int)v51; /*0x6dc382*/
          *(float *)v53 = v42; /*0x6dc386*/
        }
        while ( v42 <= (double)*(int *)(v29 + 252) * v52 ); /*0x6dc39d*/
      }
    }
  }

}
}
// 0x732D10
namespace gamemd {
unsigned int * TacticalClass::CollectSelectedIDs()
{

  TacticalClass *v0; // eax
  TacticalClass *v1; // esi
  TacticalClass *v2; // ebx
  int v3; // esi
  char *v4; // eax
  int uniqueId; // edx
  const char *v6; // edi
  int v7; // ebp
  int ptr_8; // ecx
  int abstractFlags; // eax
  int v10; // eax
  int ptr_4; // edx
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
  TacticalClass *v26; // [esp+10h] [ebp-10h]
  const char **v27; // [esp+14h] [ebp-Ch]
  const char **v28; // [esp+14h] [ebp-Ch]
  const char **v29; // [esp+14h] [ebp-Ch]
  int v30; // [esp+18h] [ebp-8h]
  int v31; // [esp+1Ch] [ebp-4h]

  v0 = (TacticalClass *)__2_YAPAXI_Z(0x18u); /*0x732d18*/
  v1 = v0; /*0x732d1d*/
  if ( v0 ) /*0x732d26*/
  {
    TacticalClass::updateScroll(v0, 0, 0); /*0x732d2c*/
    /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7EE0B4) */  /*0x732d31*/
    v1->abstractFlags = 10; /*0x732d37*/
    v1->uniqueId = 0; /*0x732d3e*/
    v2 = v1; /*0x732d41*/
  }
  else
  {
    v2 = 0; /*0x732d45*/
  }
  v26 = v2; /*0x732d4c*/
  v31 = *(unsigned int *)&stru_A8E960.random[340]; /*0x732d52*/
  v30 = 0; /*0x732d56*/
  if ( *(int *)&stru_A8E960.random[340] <= 0 ) /*0x732d5a*/
    return v2; /*0x732fda*/
  do /*0x732fc9*/
  {
    v3 = *(unsigned int *)(*(unsigned int *)&stru_A8E960.random[328] + 4 * v30); /*0x732d6a*/
    v25 = v3; /*0x732d6f*/
    v4 = (char *)(*(int (**)(int))(*(unsigned int *)v3 + 136))(v3); /*0x732d75*/
    uniqueId = v2->uniqueId; /*0x732d7b*/
    v6 = v4 + 36; /*0x732d80*/
    v7 = 0; /*0x732d83*/
    if ( uniqueId <= 0 ) /*0x732d87*/
    {
LABEL_12:
      ptr_8 = v2->ptr_8; /*0x732de8*/
      if ( uniqueId < ptr_8 /*0x732e0a*/
        || (BYTE1(v2->ptr_C) || !ptr_8)
        && (abstractFlags = v2->abstractFlags, abstractFlags > 0)
        && (*(unsigned __int8 (**)(TacticalClass *, int, unsigned int))(v2->ptr_0 + 8))(
             v2,
             ptr_8 + abstractFlags,
             0) )
      {
        v10 = v2->uniqueId; /*0x732e11*/
        ptr_4 = v2->ptr_4; /*0x732e14*/
        v2->uniqueId = v10 + 1; /*0x732e1a*/
        *(unsigned int *)(ptr_4 + 4 * v10) = v6; /*0x732e1d*/
      }
      if ( *(unsigned int *)((*(int (**)(int))(*(unsigned int *)v3 + 132))(v3) + 1028) ) /*0x732e2a*/
      {
        v12 = (const char *)(*(unsigned int *)((*(int (**)(int))(*(unsigned int *)v3 + 132))(v3) + 1028) + 36); /*0x732e4b*/
        v13 = 0; /*0x732e4e*/
        if ( v2->uniqueId <= 0 ) /*0x732e52*/
        {
LABEL_26:
          v14 = v2->ptr_8; /*0x732eae*/
          if ( v2->uniqueId < v14 /*0x732ed3*/
            || (BYTE1(v2->ptr_C) || !v14)
            && (v15 = v2->abstractFlags, v15 > 0)
            && (*(unsigned __int8 (**)(TacticalClass *, int, unsigned int))(v2->ptr_0 + 8))(v2, v14 + v15, 0) )
          {
            v16 = v2->uniqueId; /*0x732eda*/
            v17 = v2->ptr_4; /*0x732edd*/
            v2->uniqueId = v16 + 1; /*0x732ee3*/
            *(unsigned int *)(v17 + 4 * v16) = v12; /*0x732ee6*/
          }
        }
        else
        {
          v28 = (const char **)v2->ptr_4; /*0x732e57*/
          while ( strcmp(v12, *v28) ) /*0x732e8e*/
          {
            ++v13; /*0x732e97*/
            ++v28; /*0x732e9d*/
            if ( v13 >= v2->uniqueId ) /*0x732ea1*/
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
      if ( *(unsigned int *)((*(int (**)(int))(*(unsigned int *)v3 + 132))(v3) + 1032) ) /*0x732ef9*/
      {
        v18 = (const char *)(*(unsigned int *)((*(int (**)(int))(*(unsigned int *)v3 + 132))(v3) + 1032) + 36); /*0x732f1a*/
        v19 = 0; /*0x732f1d*/
        if ( v2->uniqueId <= 0 ) /*0x732f21*/
          goto LABEL_40; /*0x732f21*/
        v29 = (const char **)v2->ptr_4; /*0x732f26*/
        while ( strcmp(v18, *v29) ) /*0x732f5d*/
        {
          ++v19; /*0x732f66*/
          ++v29; /*0x732f6c*/
          if ( v19 >= v2->uniqueId ) /*0x732f70*/
            goto LABEL_40; /*0x732f70*/
        }
        if ( v19 == -1 ) /*0x732f77*/
        {
LABEL_40:
          v20 = v2->ptr_8; /*0x732f79*/
          if ( v2->uniqueId < v20 /*0x732f9e*/
            || (BYTE1(v2->ptr_C) || !v20)
            && (v21 = v2->abstractFlags, v21 > 0)
            && (*(unsigned __int8 (**)(TacticalClass *, int, unsigned int))(v2->ptr_0 + 8))(v2, v20 + v21, 0) )
          {
            v22 = v2->uniqueId; /*0x732fa5*/
            v23 = v2->ptr_4; /*0x732fa8*/
            v2->uniqueId = v22 + 1; /*0x732fae*/
            *(unsigned int *)(v23 + 4 * v22) = v18; /*0x732fb1*/
          }
        }
      }
    }
    else
    {
      v27 = (const char **)v2->ptr_4; /*0x732d8c*/
      while ( strcmp(v6, *v27) ) /*0x732dc3*/
      {
        ++v7; /*0x732dc9*/
        ++v27; /*0x732dcf*/
        if ( v7 >= uniqueId ) /*0x732dd3*/
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
  while ( v30 < v31 ); /*0x732fc9*/
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
  (*((unsigned char *)&(result))) = 0; /*0x41bf80*/
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
  (*((unsigned char *)&(result))) = 0; /*0x41c040*/
  return result; /*0x41c042*/
}
} // namespace gamemd

// 0x653F70
namespace gamemd {
int TacticalClass::SetPositionThunk(RadarClass * aP0)
{
  return Tactical::SetTacticalPosition((int)g_TacticalClass_Instance, (int *)aP0); /*0x653f80*/
}
} // namespace gamemd

// 0x6D0270
namespace gamemd {
void TacticalClass::CleanupResources()
{

  SidebarClass *v3; // [esp+0h] [ebp-8h]
  ObjectClass::CleanupSidebarResources(v3); /*0x6d0272*/
  int v1 = 0; // edi /*0x6d0277*/
  void **v2; // esi
  v2 = (void **)dword_B0C148; /*0x6d0279*/
  do /*0x6d02aa*/
  {
    if ( byte_B0CBDC[v1] ) /*0x6d027e*/
    {
      operator delete((*v2)); /*0x6d028b*/
      byte_B0CBDC[v1] = 0; /*0x6d0293*/
    }
    *v2++ = 0; /*0x6d029a*/
    ++v1; /*0x6d02a3*/
  }
  while ( (int)v2 < (int)&byte_B0C1AC ); /*0x6d02aa*/
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
  v16 = v3->u32_4; /*0x6d97f2*/
  v17 = v3->u32_8; /*0x6d97f9*/
  v4 = v3->q00C; /*0x6d97fd*/
  result = dword_8A03A0 - 1; /*0x6d9805*/
  v18 = v4; /*0x6d9806*/
  for ( i = dword_8A03A0 - 1; i >= 0; --i ) /*0x6d9810*/
  {
    v6 = *(unsigned char **)(dword_8A0394 + 4 * result); /*0x6d9820*/
    if ( (*(int (**)(unsigned char *))(*(unsigned int *)v6 + 44))(v6) == 36 /*0x6d9856*/
      && !(*(unsigned __int8 (**)(unsigned char *))(*(unsigned int *)v6 + 68))(v6)
      && !*(unsigned char *)(*((unsigned int *)v6 + 50) + 691)
      && !v6[205] )
    {
      v7 = DSurface_ViewBounds; /*0x6d9866*/
      v8 = dword_886FA4; /*0x6d986c*/
      v9 = (unsigned int *)(*(int (**)(unsigned char *, unsigned char *))(*(unsigned int *)v6 + 300))(v6, v20); /*0x6d9879*/
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
        (*(void (**)(unsigned char *, unsigned int *, int, unsigned int))(v14 + 260))(v6, v19, a1, 0); /*0x6d98e9*/
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
  v16 = v3->u32_4; /*0x6d9942*/
  v17 = v3->u32_8; /*0x6d9949*/
  v4 = v3->q00C; /*0x6d9953*/
  result = 0; /*0x6d9956*/
  v18 = v4; /*0x6d995a*/
  for ( i = 0; i < dword_8A03A0; ++i ) /*0x6d9962*/
  {
    v6 = *(unsigned char **)(dword_8A0394 + 4 * result); /*0x6d9972*/
    if ( (*(int (**)(unsigned char *))(*(unsigned int *)v6 + 44))(v6) == 6 && (!v6[1767] || MEMORY[0xA8ED6B]) ) /*0x6d9996*/
    {
      v7 = DSurface_ViewBounds; /*0x6d999e*/
      v8 = dword_886FA4; /*0x6d99a4*/
      v9 = (unsigned int *)(*(int (**)(unsigned char *, unsigned char *))(*(unsigned int *)v6 + 300))(v6, v20); /*0x6d99b1*/
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
        (*(void (**)(unsigned char *, unsigned int *, int, unsigned int))(v14 + 260))(v6, v19, a1, 0); /*0x6d9a21*/
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
  v3 = Render_Draw_731BF0(); /*0x70f0b3*/
  if ( this == 1 ) /*0x70f0bb*/
  {
    if ( v3 ) /*0x70f0bf*/
      return 62; /*0x70f0c7*/
    return (int)this; /*0x70f0bf*/
  }
  if ( this != 5 ) /*0x70f0cd*/
    return (int)this; /*0x70f0cd*/
  bool v5; // zf
  v5 = v3 == 0; /*0x70f0cf*/
  int result = 63; // eax /*0x70f0d1*/
  if ( v5 ) /*0x70f0d6*/
    return (int)this; /*0x70f0d8*/
  return result; /*0x70f0c6*/
}
} // namespace gamemd
