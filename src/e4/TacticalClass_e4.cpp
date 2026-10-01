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

// 0x47F510
namespace gamemd {
void TacticalClass::DrawBuildingPlacement(IUnknown * aP1, int * a2)
{

  unsigned char *v4; // edi
  int *v5; // eax
  int v6; // ebp
  int v7; // eax
  int *v8; // ebx
  int v9; // ecx
  int v10; // ebp
  int v11; // eax
  uint8_t v12; // cl
  char v13; // al
  TacticalClass *v14; // ecx
  int * v15;
  int v16; // [esp+14h] [ebp-14h]
  int v17; // [esp+18h] [ebp-10h] BYREF
  int v18; // [esp+1Ch] [ebp-Ch]
  int v19; // [esp+20h] [ebp-8h] BYREF

  v4 = (int *)(*(unsigned char **)(*(unsigned int *)stru_A83D50.__pad_34 + 4 * *((unsigned int *)this + 17)));
  v15 = (int *)(15 * *((char *)this + 283));
  v16 = (*(int (**)(unsigned char *))(*(unsigned int *)v4 + 156))(v4); /*0x47f544*/
  v5 = BuildingClass::CalcDrawPos((BuildingClass *)this, &v19); /*0x47f54b*/
  v6 = *v5; /*0x47f554*/
  v7 = aP1[1] + v5[1]; /*0x47f55e*/
  v8 = a2; /*0x47f560*/
  v9 = v6 + *aP1; /*0x47f564*/
  v10 = a2[1]; /*0x47f568*/
  v17 = v9 - *a2; /*0x47f571*/
  LOBYTE(v9) = *((unsigned char *)this + 320); /*0x47f575*/
  v11 = v7 - v10; /*0x47f57b*/
  v18 = v11; /*0x47f580*/
  if ( (v9 & 0x80u) != 0 ) /*0x47f584*/
  {
    v12 = *((unsigned char *)this + 286); /*0x47f586*/
    if ( v12 >= 9u && v12 <= 0x11u ) /*0x47f594*/
    {
      v17 -= 15; /*0x47f5a0*/
      v18 = v11 + 7; /*0x47f5a4*/
    }
  }
  if ( !*((unsigned int *)this + 13) ) /*0x47f5a8*/
    TacticalClass::SetView((int *)this, 0, 0x10000, 0, 1000, 1000, 1000); /*0x47f5c9*/
  v13 = v4[682]; /*0x47f5ce*/
  LOBYTE(aP1) = *((unsigned char *)this + 286); /*0x47f5dc*/
  if ( v13 ) /*0x47f5e0*/
  {
    LOBYTE(aP1) = 0; /*0x47f5e2*/
LABEL_9:
    DrawToSurfaceSHP( /*0x47f5e7*/
      (int)g_DSurface_Hidden_2,
      *((unsigned int *)this + 13),
      v16,
      (uint8_t)aP1 + *(int16_t *)(v16 + 6) / 2,
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
  v14 = *(TacticalClass **)((char *)this + 64); /*0x47f64b*/
  if ( v14 ) /*0x47f650*/
  {
    if ( TacticalClass::initTacticalMap(v14, (int *)&a2, (int *)&aP1) ) /*0x47f65c*/
      DrawToSurfaceSHP( /*0x47f696*/
        (int)g_DSurface_Hidden_2,
        *((unsigned int *)this + 13),
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
// 0x4801F0
namespace gamemd {
unsigned int TacticalClass::RenderCellFogOfWar(IUnknown * aP1, Tactical * aP2)
{

  unsigned int v4; // eax
  unsigned int result; // eax

  LOBYTE(v4) = Cell::GetAdjacentPassableMask((int16_t *)((char *)this + 36), 0); /*0x480202*/
  *((unsigned char *)this + 288) = v4; /*0x480207*/
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
  result = Cell::GetAdjacentPassableMask((int16_t *)((char *)this + 36), 1); /*0x48023e*/
  *((unsigned char *)this + 289) = result; /*0x480243*/
  if ( (*(unsigned int *)dword_A8B230 & 0x1000) != 0 && !*((unsigned char *)dword_A83D4C + 501) ) /*0x48025c*/
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

  int field38; // eax
  int v5; // ebx
  int v6; // esi

  field38 = this->field38; /*0x4802a6*/
  if ( field38 == 0xFFFF ) /*0x4802ae*/
  {
    v5 = 0; /*0x4802df*/
    v6 = *(unsigned int *)(*(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 328) + 4 * dword_AA10B0); /*0x4802e1*/
  }
  else
  {
    v5 = BYTE2(this->visibleCells[13]); /*0x4802b8*/
    v6 = *(unsigned int *)(*(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 328) + 4 * field38); /*0x4802be*/
    if ( *(int *)(v6 + 752) > 1 ) /*0x4802c8*/
      CellClass::GetTerrainFlag((CellClass *)v6, BYTE2(this->visibleCells[13])); /*0x4802cd*/
  }
  if ( *(unsigned char *)(v6 + 737) ) /*0x4802e4*/
    TacticalClass::DrawCellOverlay( /*0x480339*/
      v6,
      v5,
      (int)g_DSurface_Hidden_2,
      *a2,
      a2[1] - 15 * SHIBYTE(this->visibleCells[13]),
      *a3,
      a3[1],
      a3[2],
      a3[3],
      58 - 15 * SHIBYTE(this->visibleCells[13]));

}
}
// 0x4AC380
namespace gamemd {
void* TacticalClass::ProcessScroll(int * a2)
{

  double v2; // st7
  void * v4;
  void *v5; // ecx
  void *DisplayClass_field_0x11DC; // edx
  int v7; // edx
  char DisplayClass_field_0x11B0_high; // cl
  double v10; // [esp+0h] [ebp-20h]
  void * v11;
  void *v12; // [esp+14h] [ebp-Ch]

  if ( !this->__pad_11B4[27] || HIBYTE(this->DisplayClass_field_0x11B0) || this->__pad_11B4[0] ) /*0x4ac3a3*/
  {
    LOBYTE(v4) = this->DisplayClass_field_0x11D0; /*0x4ac436*/
    if ( (unsigned char)v4 ) /*0x4ac43e*/
    {
      v7 = a2[1]; /*0x4ac45b*/
      v11 = (void *)(*a2 - (unsigned int)this->DisplayClass_field_0x11D4); /*0x4ac45e*/
      v12 = (void *)(v7 - (unsigned int)this->DisplayClass_field_0x11D8); /*0x4ac467*/
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
      LOWORD(v4) = Math::RoundToInt(v2); /*0x4ac48c*/
      if ( v4 > (void *)(4) ) /*0x4ac494*/
      {
        DisplayClass_field_0x11B0_high = HIBYTE(this->DisplayClass_field_0x11B0); /*0x4ac496*/
        LOBYTE(v4) = 1; /*0x4ac49c*/
        this->__pad_11B4[27] = 1; /*0x4ac4a0*/
        LOBYTE(this->DisplayClass_field_0x11D0) = 0; /*0x4ac4a6*/
        if ( !DisplayClass_field_0x11B0_high && !this->__pad_11B4[0] ) /*0x4ac4af*/
        {
          g_TacticalClass_Instance[((unsigned int *)(863].__tail_0))[1] = 1; /*0x4ac4c0*/
          TacticalClass::InitScrollBounds((TacticalClass *)g_TacticalClass_Instance, &this->DisplayClass_field_0x11D4); /*0x4ac4cc*/
          LOBYTE(v4) = ((Mouse *)((int)&stru_87F5F0.__pad_58[416]))->SetCursor(0, 0); /*0x4ac4da*/
        }
      }
    }
  }
  else
  {
    v12 = (void *)(DSurface_ViewBounds.field_4);
    v11 = (void *)(DSurface_ViewBounds.field_0);
    v4 = (void *)((int)((void *)(*a2)));
    v5 = (void *)((int)((void *)a2[1]));
    if ( *a2 < 0 ) /*0x4ac3db*/
      v4 = 0; /*0x4ac3dd*/
    if ( v4 >= *(int *)DSurface_ViewBounds.__pad_8 ) /*0x4ac3e1*/
      v4 = *(unsigned int *)DSurface_ViewBounds.__pad_8 - 1; /*0x4ac3e3*/
    if ( (int)v5 < 0 ) /*0x4ac3e8*/
      v5 = 0; /*0x4ac3ea*/
    if ( (int)v5 >= *(int *)&DSurface_ViewBounds.__pad_8[4] ) /*0x4ac3ee*/
      v5 = (void *)(*(unsigned int *)&DSurface_ViewBounds.__pad_8[4] - 1); /*0x4ac3f0*/
    DisplayClass_field_0x11DC = (void *)(this->DisplayClass_field_0x11DC); /*0x4ac3f3*/
    v11 = v4; /*0x4ac3f9*/
    v12 = v5; /*0x4ac3ff*/
    if ( (void *)v4 != DisplayClass_field_0x11DC || v5 != (void *)(this->DisplayClass_field_0x11E0) ) /*0x4ac40b*/
    {
      g_TacticalClass_Instance[((unsigned int *)(863].__tail_0))[1] = 1; /*0x4ac41c*/
      LOBYTE(v4) = TacticalClass::UpdateScrollMaxBounds((TacticalClass *)g_TacticalClass_Instance, &v11); /*0x4ac429*/
    }
  }
  return (void *)(v4);

}
}
// 0x4AC700
namespace gamemd {
unsigned int * TacticalClass::SetDisplayMode(unsigned int * a2, char a3)
{

  unsigned int *result; // eax
  char v5; // cl
  char v6; // bl
  int updated; // eax
  int (**vtable0)(TacticalClass *); // eax
  void (**v9)(TacticalClass *); // edx
  MapClass *v10; // [esp+0h] [ebp-8h]

  result = a2; /*0x4ac700*/
  v5 = *((unsigned char *)this + 4531); /*0x4ac70b*/
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
    result = (unsigned int *)*((unsigned int *)this + 1130); /*0x4ac733*/
    if ( !result ) /*0x4ac73b*/
    {
      *((unsigned char *)this + 4528) = 0; /*0x4ac741*/
      *((unsigned char *)this + 4529) = 0; /*0x4ac748*/
      *((unsigned char *)this + 4530) = 0; /*0x4ac74f*/
      *((unsigned char *)this + 4532) = 0; /*0x4ac756*/
      updated = TacticalClass::updateVisibility((TacticalClass *)dword_A83D4C); /*0x4ac763*/
      if ( v6 ) /*0x4ac76a*/
      {
        if ( updated == -1 && (!a3 || *(unsigned int *)&dword_A83D4C->__pad_140[204] == -1) ) /*0x4ac786*/
        {
          vtable0 = (int (**)(TacticalClass *))this->AbstractClass; /*0x4ac788*/
          *((unsigned char *)this + 4531) = 0; /*0x4ac78c*/
          result = (unsigned int *)vtable0[20](this); /*0x4ac793*/
          *((unsigned int *)this + 1135) = 0; /*0x4ac796*/
        }
        else
        {
          *((unsigned char *)this + 4531) = 1; /*0x4ac7a7*/
          if ( !a3 ) /*0x4ac7ae*/
            *(unsigned int *)&dword_A83D4C->__pad_140[204] = updated; /*0x4ac7b6*/
          return (unsigned int *)((MapClass *)(v10))->UnselectAll_ClearLimboLaunchers(); /*0x4ac7bc*/
        }
      }
      else
      {
        v9 = (void (**)(TacticalClass *))this->AbstractClass; /*0x4ac7c6*/
        *((unsigned char *)this + 4531) = 0; /*0x4ac7ca*/
        v9[20](this); /*0x4ac7d1*/
        result = (unsigned int *)*((unsigned int *)this + 1135); /*0x4ac7d4*/
        if ( result ) /*0x4ac7dc*/
        {
          *result = *((unsigned int *)this + 1136); /*0x4ac7ea*/
          result[1] = *((unsigned int *)this + 1137); /*0x4ac7ef*/
          result[2] = *((unsigned int *)this + 1138); /*0x4ac7f5*/
          *((unsigned int *)this + 1135) = 0; /*0x4ac7f8*/
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

  int result; // eax
  int v2; // ebp
  int v3; // edi
  int v4; // ecx
  int v5; // esi
  unsigned int *v6; // eax
  unsigned int *v7; // edx
  int v8; // ebx
  bool v9; // zf
  int v10; // ebx
  unsigned int *v11; // eax
  int v12; // eax
  int *v13; // edx
  int v14; // ecx
  int v15; // esi
  int v16; // edi
  int v17; // eax
  int v18; // [esp+8h] [ebp-40h]
  int v19; // [esp+8h] [ebp-40h]
  int v20; // [esp+Ch] [ebp-3Ch] BYREF
  int v21; // [esp+10h] [ebp-38h]
  int v22; // [esp+14h] [ebp-34h]
  int v23; // [esp+18h] [ebp-30h]
  int v24; // [esp+1Ch] [ebp-2Ch]
  int v25; // [esp+20h] [ebp-28h]
  int v26; // [esp+24h] [ebp-24h]
  int v27; // [esp+28h] [ebp-20h]
  int v28; // [esp+2Ch] [ebp-1Ch]
  unsigned int v29[3]; // [esp+30h] [ebp-18h] BYREF
  int v30[3]; // [esp+3Ch] [ebp-Ch] BYREF

  v2 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 228); /*0x4ae295*/
  if ( *(int *)&(unsigned int *)((char *)&stru_A8EB00 + 228) > 0 ) /*0x4ae29f*/
  {
    v3 = 0; /*0x4ae2a7*/
    v4 = 0; /*0x4ae2a9*/
    v5 = 0; /*0x4ae2ab*/
    v20 = 0; /*0x4ae2af*/
    v21 = 0; /*0x4ae2b3*/
    v22 = 0; /*0x4ae2b7*/
    v6 = *(unsigned int **)&(unsigned int *)((char *)&stru_A8EB00 + 216); /*0x4ae2bd*/
    v18 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 228); /*0x4ae2c2*/
    do /*0x4ae2fc*/
    {
      v7 = (unsigned int *)*v6++; /*0x4ae2c6*/
      v29[0] = v7[39]; /*0x4ae2d5*/
      v3 += v29[0]; /*0x4ae2d9*/
      v4 += v7[40]; /*0x4ae2e0*/
      v8 = v7[41]; /*0x4ae2e6*/
      v20 = v3; /*0x4ae2e9*/
      v5 += v8; /*0x4ae2ed*/
      v9 = v18 == 1; /*0x4ae2ef*/
      v21 = v4; /*0x4ae2f0*/
      v22 = v5; /*0x4ae2f4*/
      --v18; /*0x4ae2f8*/
    }
    while ( !v9 ); /*0x4ae2fc*/
    v10 = 0; /*0x4ae2fe*/
    v26 = v3; /*0x4ae302*/
    v27 = v4; /*0x4ae306*/
    v28 = v5; /*0x4ae30a*/
    if ( *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 228) ) /*0x4ae30e*/
    {
      v3 /= *(int *)&(unsigned int *)((char *)&stru_A8EB00 + 228); /*0x4ae315*/
      v20 = v3; /*0x4ae31c*/
      v4 /= *(int *)&(unsigned int *)((char *)&stru_A8EB00 + 228); /*0x4ae320*/
      v21 = v4; /*0x4ae327*/
      v5 /= *(int *)&(unsigned int *)((char *)&stru_A8EB00 + 228); /*0x4ae32b*/
      v22 = v5; /*0x4ae32d*/
    }
    if ( *(int *)&(unsigned int *)((char *)&stru_A8EB00 + 228) > 2 ) /*0x4ae334*/
    {
      v23 = 0; /*0x4ae33c*/
      v24 = 0; /*0x4ae340*/
      v25 = 0; /*0x4ae344*/
      v19 = 0; /*0x4ae348*/
      if ( *(int *)&(unsigned int *)((char *)&stru_A8EB00 + 228) > 0 ) /*0x4ae34c*/
      {
        while ( 1 ) /*0x4ae384*/
        {
          v11 = Coord::Subtract( /*0x4ae384*/
                  (Coord *)v30,
                  v3 - *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 216) + 4 * v10) + 156),
                  v4 - *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 216) + 4 * v10) + 160),
                  v5 - *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 216) + 4 * v10) + 164));
          v29[0] = *v11; /*0x4ae38b*/
          v29[1] = v11[1]; /*0x4ae396*/
          v29[2] = v11[2]; /*0x4ae39d*/
          v12 = Coord::Length((Coord *)v29); /*0x4ae3a1*/
          if ( v12 > v19 ) /*0x4ae3aa*/
          {
            v19 = v12; /*0x4ae3b2*/
            v13 = (int *)(*(unsigned int *)(*(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 216) + 4 * v10) + 156); /*0x4ae3b9*/
            v23 = *v13; /*0x4ae3c1*/
            v24 = v13[1]; /*0x4ae3c8*/
            v25 = v13[2]; /*0x4ae3cf*/
          }
          v2 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 228); /*0x4ae3d3*/
          if ( ++v10 >= *(int *)&(unsigned int *)((char *)&stru_A8EB00 + 228) ) /*0x4ae3dc*/
            break; /*0x4ae3dc*/
          v4 = v21; /*0x4ae354*/
          v5 = v22; /*0x4ae358*/
          v3 = v20; /*0x4ae35c*/
        }
      }
      v14 = v2 - 1; /*0x4ae3fe*/
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
    return ((Tactical *)((int)g_TacticalClass_Instance))->SetTacticalPosition(&v20); /*0x4ae437*/
  }
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
    || (*(int (**)(unsigned int))(*(unsigned int *)g_DrawColorState + 40))(g_DrawColorState) )
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
          ((ColorStruct *)(&v6))->SetRGB(0x80u, 0x80u, 0x80u); /*0x4f463d*/
          ((ColorStruct *)(&v7))->SetRGB(0x80u, 0x80u, 0x80u); /*0x4f4655*/
          Tactical::SetCellTransform(v6.__pad_0, 0, 0, 0, 1008981770, 0, 0); /*0x4f466d*/
          Tactical::SetCellTransform(v6.__pad_0, 1, 0, 1132396544, 1008981770, 0, 1065353216); /*0x4f468b*/
          Tactical::SetCellTransform(v6.__pad_0, 2, 1132396544, 1132396544, 1008981770, 1065353216, 1065353216); /*0x4f46af*/
          Tactical::SetCellTransform(v7.__pad_0, 0, 0, 0, 1008981770, 0, 0); /*0x4f46c7*/
          Tactical::SetCellTransform(v7.__pad_0, 1, 1132396544, 1132396544, 1008981770, 1065353216, 1065353216); /*0x4f46eb*/
          Tactical::SetCellTransform(v7.__pad_0, 2, 1132396544, 0, 1008981770, 1065353216, 0); /*0x4f4709*/
          StructTable::Append(dword_8A0E10, &v6); /*0x4f4719*/
          StructTable::Append(dword_8A0E10, &v7); /*0x4f4729*/
        }
        RenderTactical3DScene((ObjectClass *)dword_8A0E10, (int)DSurface_Composite->AudioStream_field_0x1C); /*0x4f473e*/
      }
    }
  }
  (*(void (**)(unsigned int))(*(unsigned int *)g_DrawColorState + 44))(g_DrawColorState); /*0x4f4743*/
  LABEL_13:
  result = byte_A9FA94; /*0x4f474e*/
  if ( !byte_A9FA94 ) /*0x4f4755*/
  {
    result = Frame::Present( /*0x4f4761*/
               (int)DSurface_Composite,
               v3,
               a2,
               a3,
               0,
               *(int *)v6.__pad_0,
               *(int *)&((unsigned int *)(v6.__pad_0))[4],
               *(int **)&((unsigned int *)(v6.__pad_0))[8]);
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
  int *v16; // ecx
  unsigned int v17; // eax
  int v18; // eax

  v10 = *((unsigned int *)this + 165); /*0x547230*/
  v11 = g_TerrainTypeTable2; /*0x547237*/
  if ( (v10 < g_TerrainTypeTable2 || v10 >= g_TerrainTypeTable2 + 10) /*0x547260*/
    && ((v11 = dword_AA1098, v10 < dword_AA1098) || v10 >= dword_AA1098 + 10)
    || v10 - v11 == -1 )
  {
    if ( *((unsigned char *)this + 737) ) /*0x547294*/
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
        a5 = dword_886FA4 + v14 + 15 + a5 - a7; /*0x54732c*/
        DrawToSurfaceSHP( /*0x547362*/
          aP2,
          *(unsigned int *)dword_87F69C,
          (int)lpBuffer,
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
      CommandClass::BuildBar(v6); /*0x6d0525*/
      result = (*(int (**)(CommandClass *, int))(*(unsigned int *)v6 + 56))(v6, 2); /*0x6d0530*/
      IDA_LOBYTE(result) = v8; /*0x6d0533*/
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
      HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], dword_B0CC64); /*0x6d059b*/
      CommandClass::AddAction(*(int **)&stru_88732C.__pad_1C[32], (int)v17); /*0x6d05ab*/
      result = (*(int (**)(CommandClass *, int))(*(unsigned int *)v6 + 56))(v6, 2); /*0x6d05b6*/
      IDA_LOBYTE(result) = v8; /*0x6d05b9*/
      return result; /*0x6d05c0*/
    }
    goto LABEL_18; /*0x6d0550*/
  }
  if ( !v9 ) /*0x6d05c5*/
  {
    (*(void (**)(CommandClass *, GadgetClass *))(*(unsigned int *)v6 + 52))(v6, &stru_B0CC40); /*0x6d0656*/
    HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], 241); /*0x6d0664*/
  LABEL_18:
    result = (*(int (**)(CommandClass *, int))(*(unsigned int *)v6 + 56))(v6, 2); /*0x6d0669*/
  LABEL_19:
    IDA_LOBYTE(result) = v8; /*0x6d0672*/
    return result; /*0x6d0672*/
  }
  v10 = &stru_B0C1C0; /*0x6d05cc*/
  do /*0x6d05e2*/
  {
    (*(void (**)(CommandClass *, ShapeButtonClass *))(*(unsigned int *)v6 + 52))(v6, v10); /*0x6d05d6*/
    v10 += 8; /*0x6d05d9*/
  }
  while ( (int)v10 < (int)&dword_B0CB20 ); /*0x6d05e2*/
  (*(void (**)(CommandClass *, GadgetClass *, int))(*(unsigned int *)v6 + 52))(v6, &stru_B0CCB0, a2); /*0x6d05ed*/
  v11 = g_ObjectTrackingPool; /*0x6d05f0*/
  do /*0x6d0627*/
  {
    v12 = *v11; /*0x6d05f5*/
    if ( *v11 >= 0 && v12 < 25 ) /*0x6d05fe*/
    {
      v13 = &stru_B0C1C0 + 8 * v12; /*0x6d0606*/
      if ( v13 ) /*0x6d060d*/
        HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], *(unsigned int *)v13[3].__pad_0); /*0x6d0619*/
    }
    ++v11; /*0x6d061e*/
  }
  while ( (int)v11 < (int)byte_B0CBDC ); /*0x6d0627*/
  HashTable::Remove(*(HashTable **)&stru_88732C.__pad_1C[32], 240); /*0x6d0634*/
  result = (*(int (**)(CommandClass *, int))(*(unsigned int *)v6 + 56))(v6, 2); /*0x6d0640*/
  IDA_LOBYTE(result) = v8; /*0x6d0643*/
  return result; /*0x6d0535*/
}
}
// 0x6D2DE0
namespace gamemd {
signed int TacticalClass::RenderIsometricOverlay(IUnknown * aP1, IUnknown * aP2, char a4)
{

  char v4; // bl
  int *visibleCells; // ebp
  int *v7; // eax
  int v8; // edi
  int v9; // ecx
  int v10; // eax
  int *v11; // eax
  signed int result; // eax
  int v13; // ebx
  int v14; // edi
  int *v15; // ecx
  int v16; // ecx
  int16_t v17[2]; // [esp+Ch] [ebp-58h] BYREF
  int v18; // [esp+10h] [ebp-54h] BYREF
  unsigned int v19[3]; // [esp+18h] [ebp-4Ch] BYREF
  int v20; // [esp+24h] [ebp-40h] BYREF
  int v21; // [esp+28h] [ebp-3Ch]
  signed int v22; // [esp+2Ch] [ebp-38h]
  int v23; // [esp+30h] [ebp-34h]
  int v24[8]; // [esp+34h] [ebp-30h] BYREF
  unsigned int v25[4]; // [esp+54h] [ebp-10h] BYREF
  int *v26; // [esp+68h] [ebp+4h]

  v4 = a4; /*0x6d2de4*/
  if ( a4 ) /*0x6d2dee*/
  {
    TacticalClass::RenderIsometric((int)this, &DSurface_ViewBounds.field_0, (int)&DSurface_ViewBounds); /*0x6d2dfa*/
  }
  else
  {
    if ( aP1[2] > 0 && aP1[3] > 0 ) /*0x6d2e0c*/
      TacticalClass::RenderIsometric((int)this, aP1, (int)aP1); /*0x6d2e12*/
    if ( aP2[2] > 0 && aP2[3] > 0 ) /*0x6d2e27*/
      TacticalClass::RenderIsometric((int)this, aP2, (int)aP2); /*0x6d2e2d*/
  }
  if ( this->visibleCellCount > 0 && !a4 ) /*0x6d2e42*/
  {
    v26 = 0; /*0x6d2e4a*/
    visibleCells = this->visibleCells; /*0x6d2e5e*/
    do /*0x6d2f79*/
    {
      Coord::Subtract( /*0x6d2eaf*/
        (Coord *)v19,
        ((((int16_t)*(unsigned int *)(*visibleCells + 36) << 8) + 128) / 256) << 8,
        ((((int16_t)HIWORD(*(unsigned int *)(*visibleCells + 36)) << 8) + 128) / 256) << 8,
        0);
      v20 = v19[0]; /*0x6d2ec0*/
      v21 = v19[1]; /*0x6d2ec4*/
      v22 = v19[2]; /*0x6d2ed4*/
      v7 = Coord::To_ScreenRaw(&v18, &v20); /*0x6d2ed8*/
      v8 = this->visibleArea[1]; /*0x6d2ee5*/
      v9 = *v7 - this->visibleArea[0]; /*0x6d2eeb*/
      v10 = v7[1]; /*0x6d2eed*/
      v24[0] = v9 - 30; /*0x6d2ef3*/
      v24[3] = 30; /*0x6d2efc*/
      v24[1] = (int)DSurface_ViewBounds.field_4 + v10 - v8; /*0x6d2f16*/
      v24[2] = 60; /*0x6d2f24*/
      v11 = ClipRectIntersection(v25, &DSurface_ViewBounds.field_0, v24, 0, 0); /*0x6d2f28*/
      v24[4] = *v11; /*0x6d2f31*/
      v24[5] = v11[1]; /*0x6d2f38*/
      if ( v11[2] > 0 && v11[3] > 0 ) /*0x6d2f48*/
      {
        *(unsigned int *)v17 = *(unsigned int *)(*visibleCells + 36); /*0x6d2f5c*/
        TacticalMapClass::ProcessCell((TacticalMapClass *)this, v17, (int)v24); /*0x6d2f60*/
      }
      ++visibleCells; /*0x6d2f70*/
      v26 = (int *)((char *)v26 + 1); /*0x6d2f75*/
    }
    while ( (int)v26 < this->visibleCellCount ); /*0x6d2f79*/
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
        v13 = g_CraterCreationState; /*0x6d2fa5*/
        v14 = 20 * result; /*0x6d2fa8*/
        do /*0x6d302e*/
        {
          v20 = *(unsigned int *)((char *)g_CraterPool + v14); /*0x6d2fbc*/
          v21 = *(unsigned int *)((char *)g_CraterPool + v14 + 4); /*0x6d2fc3*/
          v22 = *(unsigned int *)((char *)g_CraterPool + v14 + 8); /*0x6d2fca*/
          v23 = *(unsigned int *)((char *)g_CraterPool + v14 + 12); /*0x6d2fdd*/
          v21 += (int)DSurface_ViewBounds.field_4; /*0x6d2feb*/
          v15 = ClipRectIntersection(v25, &DSurface_ViewBounds.field_0, &v20, 0, 0); /*0x6d2ff4*/
          v20 = *v15; /*0x6d2ff8*/
          v21 = v15[1]; /*0x6d2fff*/
          result = v15[2]; /*0x6d3003*/
          v22 = result; /*0x6d3006*/
          v16 = v15[3]; /*0x6d300a*/
          v23 = v16; /*0x6d300f*/
          if ( result > 0 && v16 > 0 ) /*0x6d3017*/
            result = TacticalClass::RenderIsometric((int)this, &v20, (int)&v20); /*0x6d3025*/
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
  visibleCells = this->visibleCells; /*0x6d368d*/
  do /*0x6d3734*/
  {
    Coords = CellClass::GetCoords((CellClass *)*visibleCells, v25); /*0x6d369b*/
    v21 = *Coords; /*0x6d36a2*/
    v22 = Coords[1]; /*0x6d36ae*/
    v23 = 0; /*0x6d36c0*/
    v9 = Coord::To_ScreenRaw(v20, &v21); /*0x6d36c8*/
    v10 = v9[1] - this->visibleArea[1]; /*0x6d36e8*/
    v19[0] = *v9 - this->visibleArea[0] + DSurface_ViewBounds.field_0 - 30; /*0x6d36f4*/
    v19[1] = (int)DSurface_ViewBounds.field_4 + v10 - 15; /*0x6d3703*/
    if ( g_hWnd ) /*0x6d3707*/
      TacticalClass::RenderCellFogOfWar(*visibleCells, (unsigned int *)v19, a3); /*0x6d3716*/
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
      v17 = ClipRectIntersection(v20, v25, a3, 0, 0); /*0x6d37e4*/
      v21 = *v17; /*0x6d37ed*/
      v22 = v17[1]; /*0x6d37f4*/
      v23 = v17[2]; /*0x6d37fb*/
      v13 = (char *)g_CraterPool; /*0x6d37ff*/
      v24 = v17[3]; /*0x6d3808*/
      if ( *((unsigned char *)g_CraterPool + v11 + 16) ) /*0x6d380c*/
      {
        TacticalClass::FillScanlinesTransparent( /*0x6d3835*/
          *(TacticalClass **)&stru_87E790.__pad_D8[60],
          *v17,
          v17[1],
          v17[2],
          v17[3]);
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
  int16_t v32[2]; // [esp+10h] [ebp-B0h] BYREF
  int v33; // [esp+14h] [ebp-ACh]
  int v34; // [esp+18h] [ebp-A8h]
  int v35; // [esp+1Ch] [ebp-A4h]
  unsigned int v36; // [esp+20h] [ebp-A0h]
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
  v36 = v5 - (unsigned int)DSurface_ViewBounds.field_4; /*0x6d6d58*/
  v41 = (float)(v4 - DSurface_ViewBounds.field_0); /*0x6d6d67*/
  v42 = (float)(v5 - (unsigned int)DSurface_ViewBounds.field_4); /*0x6d6d73*/
  v6 = TransformMatrix3x4Point((float *)&v44, (float *)this->TacticalClass_field_DE4, &v41); /*0x6d6d77*/
  v41 = *v6; /*0x6d6d7e*/
  v42 = v6[1]; /*0x6d6d89*/
  v43 = *((unsigned int *)v6 + 2); /*0x6d6d90*/
  LOWORD(v7) = Math::RoundToInt(v41); /*0x6d6d94*/
  v8 = v7; /*0x6d6d9d*/
  LOWORD(v9) = Math::RoundToInt(v42); /*0x6d6d9f*/
  v53 = v8; /*0x6d6da6*/
  v54 = v9; /*0x6d6dac*/
  v55 = 0; /*0x6d6db0*/
  if ( v9 < 0 ) /*0x6d6db7*/
    v54 = 0; /*0x6d6db9*/
  if ( v8 < 0 ) /*0x6d6dbf*/
    v53 = 0; /*0x6d6dc1*/
  smudgeTypeIndex = ((Coord *)((Coord *)&stru_87F5F0.__pad_58[416]))->To_Cell(&v53)->smudgeTypeIndex; /*0x6d6dd4*/
  v11 = (uint64_t)(2290649225LL * aP1[3]) >> 32; /*0x6d6de3*/
  v12 = aP1[2]; /*0x6d6de5*/
  v38[0] = smudgeTypeIndex; /*0x6d6df3*/
  v13 = (v11 >> 3) + ((unsigned int)v11 >> 31) + 20; /*0x6d6df7*/
  v40 = (int *)(v12 / 60 + 4); /*0x6d6e17*/
  result = ClipRectIntersection(&v57, &DSurface_ViewBounds.field_0, aP1, 0, 0); /*0x6d6e20*/
  v15 = *result; /*0x6d6e25*/
  HIWORD(v38[0]) = HIWORD(smudgeTypeIndex) - 2; /*0x6d6e27*/
  v51[0] = v15; /*0x6d6e2d*/
  v16 = v13 + 1; /*0x6d6e37*/
  v51[1] = result[1]; /*0x6d6e38*/
  LOWORD(v38[0]) = smudgeTypeIndex - 4; /*0x6d6e3c*/
  v17 = result[2]; /*0x6d6e41*/
  v52 = v16; /*0x6d6e44*/
  v51[2] = v17; /*0x6d6e48*/
  v51[3] = result[3]; /*0x6d6e51*/
  if ( v16 >= 0 ) /*0x6d6e55*/
  {
    v33 = v16 + 1; /*0x6d6e5e*/
    do /*0x6d702b*/
    {
      LOWORD(v35) = v16 / 2; /*0x6d6e69*/
      HIWORD(v35) = v33 / 2; /*0x6d6e7b*/
      LOWORD(v34) = LOWORD(v38[0]) + v35; /*0x6d6e8a*/
      HIWORD(v34) = HIWORD(v38[0]) + HIWORD(v35); /*0x6d6e95*/
      result = v40; /*0x6d6e9a*/
      *(unsigned int *)v32 = v34; /*0x6d6ea4*/
      if ( (int)v40 > 0 ) /*0x6d6ea8*/
      {
        v37 = v40; /*0x6d6eae*/
        do /*0x6d7019*/
        {
          if ( (uint8_t)((LayerClass *)((LayerClass *)&stru_87F5F0.__pad_58[416]))->CoordinatesLegal(v32) ) /*0x6d6ebc*/
          {
            v18 = (House *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v32); /*0x6d6ed3*/
            v19 = (int)v18; /*0x6d6ed8*/
            if ( *(unsigned int *)&v18->__pad_2D[23] != -1 ) /*0x6d6ede*/
            {
              StartCoords = House::GetStartCoords(v18, v59); /*0x6d6eee*/
              v47 = *StartCoords; /*0x6d6ef7*/
              v48 = StartCoords[1]; /*0x6d6f00*/
              v49 = StartCoords[2]; /*0x6d6f07*/
              v50 = StartCoords[3]; /*0x6d6f19*/
              v21 = ClipRectIntersection(v60, v51, &v47, 0, 0); /*0x6d6f22*/
              v57 = *v21; /*0x6d6f2b*/
              v58 = v21[1]; /*0x6d6f35*/
              if ( v21[2] > 0 && v21[3] > 0 ) /*0x6d6f4c*/
              {
                ((Coord *)((Coord *)v56))->Subtract((((v32[0] << 8) + 128) / 256) << 8, (((v32[1] << 8) + 128) / 256) << 8, 0); /*0x6d6f98*/
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
        LOWORD(v35) = v26 / 2; /*0x6d704f*/
        HIWORD(v35) = v33 / 2; /*0x6d705d*/
        result = *(int **)((char *)v38 + 2); /*0x6d706c*/
        LOWORD(v37) = LOWORD(v38[0]) + v35; /*0x6d7070*/
        HIWORD(v37) = HIWORD(v38[0]) + HIWORD(v35); /*0x6d707b*/
        *(unsigned int *)v32 = v37; /*0x6d7086*/
        if ( v27 > 0 ) /*0x6d708a*/
        {
          v34 = v27; /*0x6d7090*/
          do /*0x6d71b7*/
          {
            if ( (uint8_t)((LayerClass *)((LayerClass *)&stru_87F5F0.__pad_58[416]))->CoordinatesLegal(v32) ) /*0x6d709e*/
            {
              v28 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v32); /*0x6d70b5*/
              v29 = (int)v28; /*0x6d70ba*/
              if ( ((unsigned int *)v28)[2] != -1 ) /*0x6d70c0*/
              {
                PlacementRect = BuildingClass::GetPlacementRect(v28, v60); /*0x6d70d0*/
                v47 = *PlacementRect; /*0x6d70d9*/
                v48 = PlacementRect[1]; /*0x6d70e2*/
                v49 = PlacementRect[2]; /*0x6d70e9*/
                v50 = PlacementRect[3]; /*0x6d70fb*/
                v31 = ClipRectIntersection(v59, v51, &v47, 0, 0); /*0x6d7104*/
                v57 = *v31; /*0x6d710d*/
                v58 = v31[1]; /*0x6d7117*/
                if ( v31[2] > 0 && v31[3] > 0 ) /*0x6d712a*/
                {
                  v46 = 0; /*0x6d715f*/
                  v44 = (((v32[0] << 8) + 128) / 256) << 8; /*0x6d717b*/
                  v45 = (((v32[1] << 8) + 128) / 256) << 8; /*0x6d717f*/
                  ((Coord *)((Coord *)this))->To_Screen(&v44, v39); /*0x6d7183*/
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
  if ( stru_A8EB00.ObjectTypeClass[20] <= 0 ) /*0x6d9b9c*/
    return 0; /*0x6d9cc6*/
  while ( 1 ) /*0x6d9ba8*/
  {
    v9 = *(unsigned char **)(stru_A8EB00.ObjectTypeClass[17] + 4 * v8); /*0x6d9ba8*/
    if ( !v9[144] || !v9[128] || !v9[116] ) /*0x6d9bc7*/
      goto LABEL_10; /*0x6d9bcc*/
    v10 = (unsigned int *)(*(int (**)(unsigned char *, unsigned char *))(*(unsigned int *)v9 + 172))(v9, v21); /*0x6d9bd9*/
    v19 = v10[1]; /*0x6d9be6*/
    v11 = (-60 * v19 / 2 + 60 * *v10 / 2) / 256; /*0x6d9c5d*/
    v12 = (30 * v19 / 2 + 30 * *v10 / 2) / 256; /*0x6d9c60*/
    LOWORD(v13) = Math::RoundToInt((double)(int)v10[2] * dbl_B0CD48 + (double)(v10[2] >= 728) + 0.5); /*0x6d9c87*/
    v14 = v12 - v13; /*0x6d9c8c*/
    if ( v11 >= v17 && v11 <= v7 && v14 >= v18 && v14 <= v20 ) /*0x6d9ca4*/
      return 1; /*0x6d9cbd*/
    v8 = v16; /*0x6d9ca6*/
LABEL_10:
    v16 = ++v8; /*0x6d9cb3*/
    if ( v8 >= stru_A8EB00.ObjectTypeClass[20] ) /*0x6d9cb7*/
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
    v13 = v2[1]; /*0x6da4b8*/
    v20[0] = DSurface_ViewBounds.field_0 + *v2; /*0x6da4cb*/
    v20[1] = (int)DSurface_ViewBounds.field_4 + v13; /*0x6da4d9*/
    a2 = (unsigned int *)*((Tactical *)((Tactical *)this))->PixelToCell(&v21, v20); /*0x6da4ec*/
    return (unsigned char *)*((unsigned int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&a2) + 57); /*0x6da4fb*/
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
      if ( !(*(int (**)(unsigned char *))(*(unsigned int *)v5 + 136))(v5) ) /*0x6da50e*/
        goto LABEL_15; /*0x6da50e*/
      v14 = (*(int (**)(unsigned char *))(*(unsigned int *)v5 + 136))(v5); /*0x6da520*/
      if ( (*(int (**)(int))(*(unsigned int *)v14 + 44))(v14) != 37 /*0x6da540*/
        || !*(unsigned char *)((*(int (**)(unsigned char *))(*(unsigned int *)v5 + 136))(v5) + 692) )
      {
        goto LABEL_15; /*0x6da548*/
      }
LABEL_12:
      v10 = (double)((v4[1] - v20[0]) * (v4[1] - v20[0])) * 0.5; /*0x6da444*/
      v21 = (*v4 - v19) * (*v4 - v19); /*0x6da46d*/
      LOWORD(v11) = Math::RoundToInt(v10 + (double)v21); /*0x6da477*/
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
          || (Object_field_0x30 = dword_A83D4C->Object_field_0x30,
              v8 = (unsigned int *)(*(int (**)(unsigned char *, char *))(*(unsigned int *)v6 + 72))(v6, v22),
              v9 = ((Coord *)((Coord *)&stru_87F5F0.__pad_58[416]))->To_Cell(v8),
              (uint8_t)Cell::IsPassableOffset((Cell *)v9, (int)Object_field_0x30)) )
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
  int *v17; // ecx
  int16_t v18; // si
  int v19; // eax
  unsigned int *v20; // eax
  double v21; // st6
  int16_t v22; // ax
  int v23; // ebx
  int *v24; // esi
  int16_t v25; // di
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
  int v37; // edx
  float v38; // eax
  char v39; // cl
  char v40; // ecx^3
  double v41; // st7
  char v42; // ecx^3
  int v43; // [esp+4h] [ebp-58h]
  int v44; // [esp+4h] [ebp-58h]
  int v45; // [esp+4h] [ebp-58h]
  float v46; // [esp+8h] [ebp-54h]
  float v47; // [esp+8h] [ebp-54h]
  Color v48; // [esp+28h] [ebp-34h] BYREF
  Color v49; // [esp+2Ch] [ebp-30h] BYREF
  int *v50; // [esp+30h] [ebp-2Ch]
  float v51; // [esp+34h] [ebp-28h]
  int16_t v52[2]; // [esp+38h] [ebp-24h] BYREF
  int16_t v53[4]; // [esp+3Ch] [ebp-20h] BYREF
  int v54; // [esp+44h] [ebp-18h]
  int v55; // [esp+48h] [ebp-14h]
  int v56[2]; // [esp+50h] [ebp-Ch] BYREF
  int v57; // [esp+58h] [ebp-4h]

  v1 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 228); /*0x6dbe2a*/
  for ( i = 0; i < v1; ++i ) /*0x6dbe37*/
  {
    v3 = *(unsigned int *)(*(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 216) + 4 * i); /*0x6dbe3e*/
    if ( (*(int (**)(int))(*(unsigned int *)v3 + 136))(v3) /*0x6dbe59*/
      && *(unsigned char *)((*(int (**)(int))(*(unsigned int *)v3 + 136))(v3) + 568) )
    {
      (*(void (**)(int, int))(*(unsigned int *)v3 + 304))(v3, 1); /*0x6dbe69*/
    }
  }
  if ( BYTE2(stru_A8EB00.ObjectTypeClass[31]) ) /*0x6dbe7b*/
  {
    v4 = *(TechnoClass **)&stru_87F5F0.__pad_E12[1418]; /*0x6dbe81*/
    v50 = *(int **)&stru_87F5F0.__pad_E12[1418]; /*0x6dbe89*/
    if ( *(unsigned int *)&stru_87F5F0.__pad_E12[1418] /*0x6dbe9d*/
      && (*(int (**)(unsigned int))(**(unsigned int **)&stru_87F5F0.__pad_E12[1418] + 44))(*(unsigned int *)&stru_87F5F0.__pad_E12[1418]) == 6 )
    {
      if ( BuildingClass::GetPowerFrame(v4) > 0 ) /*0x6dbeac*/
      {
        *(float *)v52 = *(float *)&stru_87F5F0.__pad_E12[1370]; /*0x6dbec0*/
        v5 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v52); /*0x6dbecb*/
        Coords = CellClass::GetCoords(v5, v56); /*0x6dbed2*/
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
        v10 = (int)&v4->owner->base[4] + 1; /*0x6dbf55*/
        LOWORD(v49.Color_field_00) = *(unsigned short *)v10; /*0x6dbf5f*/
        BYTE2(v49.Color_field_00) = *(unsigned char *)(v10 + 2); /*0x6dbf67*/
        ((Color *)(&v49))->Lerp(dword_B0E648, &byte_B0CE14); /*0x6dbf6f*/
        v51 = COERCE_FLOAT(BuildingClass::GetPowerFrame(v4)); /*0x6dbf7b*/
        v11 = (double)SLODWORD(v51); /*0x6dbf81*/
        v46 = v11; /*0x6dbf91*/
        HIBYTE(v43) = v12; /*0x6dbf94*/
        LOWORD(v43) = v49.Color_field_00; /*0x6dbf9a*/
        BYTE2(v43) = BYTE2(v49.Color_field_00); /*0x6dbfa1*/
        DrawTechnoDeployCircle(0, 1, v7, v8, v9, v43, v46, 0, 1); /*0x6dbfae*/
        v13 = 0; /*0x6dbfb9*/
        v14 = 0x7FFFFFFF; /*0x6dbfbb*/
        v48.Color_field_00 = *(unsigned int *)&dword_A83D4C->__pad_38[64]; /*0x6dbfc5*/
        Color_field_00 = v48.Color_field_00; /*0x6dbfc0*/
        if ( v48.Color_field_00 > 0 ) /*0x6dbfc9*/
        {
          v16 = v51; /*0x6dbfcf*/
          do /*0x6dc0b0*/
          {
            v17 = *(int **)(*(unsigned int *)&dword_A83D4C->__pad_38[52] + 4 * v13); /*0x6dbfdc*/
            if ( v17 ) /*0x6dbfe1*/
            {
              if ( *((unsigned char *)v17 + 144) ) /*0x6dbfe7*/
              {
                if ( v17 != v50 && v17[328] == v50[328] ) /*0x6dc00f*/
                {
                  v18 = *(unsigned short *)&stru_87F5F0.__pad_E12[1370]; /*0x6dc015*/
                  v19 = *v17; /*0x6dc01b*/
                  v54 = *(unsigned int *)&stru_87F5F0.__pad_E12[1370]; /*0x6dc021*/
                  v20 = (unsigned int *)(*(int (**)(int *, int *))(v19 + 72))(v17, v56); /*0x6dc026*/
                  v53[0] = *v20 / 256; /*0x6dc03c*/
                  v53[1] = v20[1] / 256; /*0x6dc050*/
                  LODWORD(v51) = (int16_t)(HIWORD(v54) - v53[1]); /*0x6dc06b*/
                  v21 = (double)SLODWORD(v51); /*0x6dc06f*/
                  LODWORD(v51) = (int16_t)(v18 - v53[0]); /*0x6dc073*/
                  Math::Sqrt((double)SLODWORD(v51) * (double)SLODWORD(v51) + v21 * v21); /*0x6dc08c*/
                  v22 = Math::RoundToInt(v11); /*0x6dc094*/
                  if ( v22 <= 2 * LODWORD(v16) && v22 < v14 ) /*0x6dc0a5*/
                    v14 = v22; /*0x6dc0a7*/
                }
              }
            }
            Color_field_00 = v48.Color_field_00; /*0x6dc0a9*/
            ++v13; /*0x6dc0ad*/
          }
          while ( v13 < v48.Color_field_00 ); /*0x6dc0b0*/
        }
        v23 = 0; /*0x6dc0b6*/
        if ( Color_field_00 > 0 ) /*0x6dc0ba*/
        {
          do /*0x6dc1a1*/
          {
            v24 = *(int **)(*(unsigned int *)&dword_A83D4C->__pad_38[52] + 4 * v23); /*0x6dc0c8*/
            if ( v24 && *((unsigned char *)v24 + 144) && v24 != v50 && v24[328] == v50[328] ) /*0x6dc0fb*/
            {
              v25 = *(unsigned short *)&stru_87F5F0.__pad_E12[1370]; /*0x6dc101*/
              v26 = *v24; /*0x6dc107*/
              v54 = *(unsigned int *)&stru_87F5F0.__pad_E12[1370]; /*0x6dc10d*/
              v27 = (unsigned int *)(*(int (**)(int *, int *))(v26 + 72))(v24, v56); /*0x6dc114*/
              v53[0] = *v27 / 256; /*0x6dc12a*/
              v53[1] = v27[1] / 256; /*0x6dc13e*/
              LODWORD(v51) = (int16_t)(HIWORD(v54) - v53[1]); /*0x6dc159*/
              v28 = (double)SLODWORD(v51); /*0x6dc15d*/
              LODWORD(v51) = (int16_t)(v25 - v53[0]); /*0x6dc161*/
              Math::Sqrt((double)SLODWORD(v51) * (double)SLODWORD(v51) + v28 * v28); /*0x6dc17a*/
              if ( (int16_t)Math::RoundToInt(v11) == v14 ) /*0x6dc18c*/
                (*(void (**)(int *, unsigned int))(*v24 + 304))(v24, 0); /*0x6dc194*/
            }
            ++v23; /*0x6dc19e*/
          }
          while ( v23 < v48.Color_field_00 ); /*0x6dc1a1*/
        }
      }
      return; /*0x6dc1a1*/
    }
    if ( *(unsigned int *)&stru_87F5F0.__pad_E12[1438] == -1 ) /*0x6dc1b7*/
      return; /*0x6dc1b7*/
    v29 = *((unsigned int *)dword_A8E334 + *(unsigned int *)&stru_87F5F0.__pad_E12[1438]); /*0x6dc1c3*/
    v30 = *(float *)(v29 + 248); /*0x6dc1c6*/
    v51 = *(float *)(v29 + 248); /*0x6dc1cc*/
    if ( v30 <= 0.0 ) /*0x6dc1db*/
      return; /*0x6dc1db*/
    *(unsigned int *)v53 = *(unsigned int *)&stru_87F5F0.__pad_E12[1370]; /*0x6dc1f6*/
    v31 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v53); /*0x6dc1fa*/
    v32 = CellClass::GetCoords(v31, v56); /*0x6dc201*/
    v33 = v32[1]; /*0x6dc20d*/
    v54 = *v32 - 126; /*0x6dc210*/
    v34 = v32[2]; /*0x6dc219*/
    v55 = v33 - 126; /*0x6dc21c*/
    v57 = v34; /*0x6dc226*/
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
    v37 = *((unsigned int *)((char *)&stru_A80220) + (int)dword_A83D4C->Object_field_0x30) + 22265; /*0x6dc28c*/
    LOWORD(v49.Color_field_00) = *(unsigned short *)v37; /*0x6dc2a7*/
    v38 = *(float *)(v29 + 252); /*0x6dc2ac*/
    v39 = *(unsigned char *)(v37 + 2); /*0x6dc2b2*/
    LOWORD(v48.Color_field_00) = 0; /*0x6dc2b5*/
    BYTE2(v49.Color_field_00) = v39; /*0x6dc2bc*/
    BYTE2(v48.Color_field_00) = 0; /*0x6dc2c5*/
    *(float *)v52 = v38; /*0x6dc2ca*/
    if ( SLODWORD(v38) <= 0 ) /*0x6dc2ce*/
    {
      ((Color *)(&v49))->Lerp(dword_B0E64C, &byte_B0CD70); /*0x6dc3b5*/
      HIBYTE(v45) = v42; /*0x6dc3ce*/
      LOWORD(v45) = v49.Color_field_00; /*0x6dc3d6*/
      BYTE2(v45) = BYTE2(v49.Color_field_00); /*0x6dc3dd*/
      DrawTechnoDeployCircle(0, 1, v54, v55, v34, v45, v51, 0, 1); /*0x6dc3ee*/
    }
    else
    {
      v50 = 0; /*0x6dc2d8*/
      if ( (double)*(int *)v52 * v51 >= 0.0 ) /*0x6dc2ef*/
      {
        *(float *)v52 = 0.0; /*0x6dc2f5*/
        do /*0x6dc39d*/
        {
          LOWORD(v48.Color_field_00) = v49.Color_field_00; /*0x6dc30a*/
          BYTE2(v48.Color_field_00) = BYTE2(v49.Color_field_00); /*0x6dc30f*/
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
          ((Color *)(&v48))->Lerp(v36, &byte_B0CD70); /*0x6dc333*/
          v47 = *(float *)v52 / (double)*(int *)(v29 + 252); /*0x6dc350*/
          HIBYTE(v44) = v40; /*0x6dc353*/
          LOWORD(v44) = v48.Color_field_00; /*0x6dc359*/
          BYTE2(v44) = BYTE2(v48.Color_field_00); /*0x6dc360*/
          DrawTechnoDeployCircle(0, 1, v54, v55, v57, v44, v47, 0, 0); /*0x6dc379*/
          v50 = (int *)((char *)v50 + 1); /*0x6dc37e*/
          v41 = (double)(int)v50; /*0x6dc382*/
          *(float *)v52 = v41; /*0x6dc386*/
        }
        while ( v41 <= (double)*(int *)(v29 + 252) * v51 ); /*0x6dc39d*/
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

  v0 = __2_YAPAXI_Z(0x18u); /*0x732d18*/
  v1 = v0; /*0x732d1d*/
  if ( v0 ) /*0x732d26*/
  {
    TacticalClass::updateScroll(v0, 0, 0); /*0x732d2c*/
    *v1 = &vt_DynamicVectorClass; /*0x732d31*/
    v1[5] = 10; /*0x732d37*/
    v1[4] = 0; /*0x732d3e*/
    v2 = v1; /*0x732d41*/
  }
  else
  {
    v2 = 0; /*0x732d45*/
  }
  v26 = v2; /*0x732d4c*/
  v31 = dword_A8ECC8; /*0x732d52*/
  v30 = 0; /*0x732d56*/
  if ( (int)dword_A8ECC8 <= 0 ) /*0x732d5a*/
    return v2; /*0x732fda*/
  do /*0x732fc9*/
  {
    v3 = *((unsigned int *)dword_A8ECBC + v30); /*0x732d6a*/
    v25 = v3; /*0x732d6f*/
    v4 = (*(int (**)(int))(*(unsigned int *)v3 + 136))(v3); /*0x732d75*/
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
        && (*(uint8_t (**)(unsigned int *, int, unsigned int))(*v2 + 8))(v2, v8 + v9, 0) )
      {
        v10 = v2[4]; /*0x732e11*/
        v11 = v2[1]; /*0x732e14*/
        v2[4] = v10 + 1; /*0x732e1a*/
        *(unsigned int *)(v11 + 4 * v10) = v6; /*0x732e1d*/
      }
      if ( *(unsigned int *)((*(int (**)(int))(*(unsigned int *)v3 + 132))(v3) + 1028) ) /*0x732e2a*/
      {
        v12 = (const char *)(*(unsigned int *)((*(int (**)(int))(*(unsigned int *)v3 + 132))(v3) + 1028) + 36); /*0x732e4b*/
        v13 = 0; /*0x732e4e*/
        if ( (int)v2[4] <= 0 ) /*0x732e52*/
        {
LABEL_26:
          v14 = v2[2]; /*0x732eae*/
          if ( v2[4] < v14 /*0x732ed3*/
            || (*((unsigned char *)v2 + 13) || !v14)
            && (v15 = v2[5], v15 > 0)
            && (*(uint8_t (**)(unsigned int *, int, unsigned int))(*v2 + 8))(v2, v14 + v15, 0) )
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
      if ( *(unsigned int *)((*(int (**)(int))(*(unsigned int *)v3 + 132))(v3) + 1032) ) /*0x732ef9*/
      {
        v18 = (const char *)(*(unsigned int *)((*(int (**)(int))(*(unsigned int *)v3 + 132))(v3) + 1032) + 36); /*0x732f1a*/
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
            && (*(uint8_t (**)(unsigned int *, int, unsigned int))(*v2 + 8))(v2, v20 + v21, 0) )
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

  LOBYTE(result) = 0; /*0x41bf80*/
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

  LOBYTE(result) = 0; /*0x41c040*/
  return result; /*0x41c042*/

}
} // namespace gamemd

// 0x653F70
namespace gamemd {
int TacticalClass::SetPositionThunk(MouseClass * aP0)
{

  return ((Tactical *)((int)g_TacticalClass_Instance))->SetTacticalPosition((int *)aP0); /*0x653f80*/

}
} // namespace gamemd

// 0x6D0270
namespace gamemd {
void TacticalClass::CleanupResources()
{

  int v1; // edi
  void **v2; // esi
  SidebarClass *v3; // [esp+0h] [ebp-8h]

  ObjectClass::CleanupSidebarResources(v3); /*0x6d0272*/
  v1 = 0; /*0x6d0277*/
  v2 = (void **)dword_B0C148; /*0x6d0279*/
  do /*0x6d02aa*/
  {
    if ( byte_B0CBDC[v1] ) /*0x6d027e*/
    {
      __3_YAXPAX_Z(*v2); /*0x6d028b*/
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
  v16 = v3[1]; /*0x6d97f2*/
  v17 = v3[2]; /*0x6d97f9*/
  v4 = v3[3]; /*0x6d97fd*/
  result = dword_8A03A0 - 1; /*0x6d9805*/
  v18 = v4; /*0x6d9806*/
  for ( i = dword_8A03A0 - 1; i >= 0; --i ) /*0x6d9810*/
  {
    v6 = *(unsigned char **)(dword_8A0394 + 4 * result); /*0x6d9820*/
    if ( (*(int (**)(unsigned char *))(*(unsigned int *)v6 + 44))(v6) == 36 /*0x6d9856*/
      && !(*(uint8_t (**)(unsigned char *))(*(unsigned int *)v6 + 68))(v6)
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
  v16 = v3[1]; /*0x6d9942*/
  v17 = v3[2]; /*0x6d9949*/
  v4 = v3[3]; /*0x6d9953*/
  result = 0; /*0x6d9956*/
  v18 = v4; /*0x6d995a*/
  for ( i = 0; i < dword_8A03A0; ++i ) /*0x6d9962*/
  {
    v6 = *(unsigned char **)(dword_8A0394 + 4 * result); /*0x6d9972*/
    if ( (*(int (**)(unsigned char *))(*(unsigned int *)v6 + 44))(v6) == 6 && (!v6[1767] || byte_A8ED6B) ) /*0x6d9996*/
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
  int result; // eax
  bool v5; // zf

  v3 = Render_Draw_731BF0(); /*0x70f0b3*/
  if ( this == (TacticalClass *)1 ) /*0x70f0bb*/
  {
    if ( v3 ) /*0x70f0bf*/
      return 62; /*0x70f0c7*/
    return (int)this; /*0x70f0bf*/
  }
  if ( this != (TacticalClass *)5 ) /*0x70f0cd*/
    return (int)this; /*0x70f0cd*/
  v5 = v3 == 0; /*0x70f0cf*/
  result = 63; /*0x70f0d1*/
  if ( v5 ) /*0x70f0d6*/
    return (int)this; /*0x70f0d8*/
  return result; /*0x70f0c6*/

}
} // namespace gamemd
