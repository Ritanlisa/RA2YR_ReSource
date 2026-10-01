// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Display_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/VectorCursor_uint_DynamicVectorClass_uint____13_e4.hpp"
#include "e4/classes/DisplayClass_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/EMPulseClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/Draw_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/DropListClass_e4.hpp"
#include "e4/classes/GadgetClass_e4.hpp"
#include "e4/classes/E4Recv_696AE0_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"

// 0x487630
namespace gamemd {
int DisplayClass::UpdateDisplayTimer()
{

  char *v1; // eax
  int v2; // edx
  void *DisplayClass_field_0x12C; // eax

  if ( this->DisplayClass_field_0x130 == (void *)1 ) /*0x487637*/
    this->DisplayClass_field_0x130 = 0; /*0x487639*/
  v1 = (char *)this->DisplayClass_field_0x130 - 1; /*0x487649*/
  this->DisplayClass_field_0x130 = (unsigned int)(v1); /*0x48764a*/
  v2 = (int)v1; /*0x487650*/
  DisplayClass_field_0x12C = (void *)(this->DisplayClass_field_0x12C); /*0x487652*/
  if ( ((uint8_t)DisplayClass_field_0x12C & 8) != 0 && ((uint8_t)DisplayClass_field_0x12C & 0x10) != 0 ) /*0x48765e*/
  {
    if ( v2 <= 0 ) /*0x48766f*/
    {
      DisplayClass_field_0x12C = (void *)(this->DisplayClass_field_0x140); /*0x487671*/
      if ( ((int)this->DisplayClass_field_0x140 & 0x20) == 0x20 ) /*0x48767f*/
      {
        LOBYTE(DisplayClass_field_0x12C) = (uint8_t)DisplayClass_field_0x12C & 0xDF; /*0x487681*/
        this->DisplayClass_field_0x140 = (unsigned int)(DisplayClass_field_0x12C); /*0x487683*/
      }
    }
  }
  else if ( v2 <= 0 ) /*0x487662*/
  {
    LOBYTE(DisplayClass_field_0x12C) = (uint8_t)DisplayClass_field_0x12C | 0x18; /*0x487664*/
    this->DisplayClass_field_0x12C = (unsigned int)(DisplayClass_field_0x12C); /*0x487666*/
  }
  return (char)DisplayClass_field_0x12C; /*0x48766c*/

}
} // namespace gamemd
// 0x487690
namespace gamemd {
int DisplayClass::AdvanceFrameCounter()
{

  void *DisplayClass_field_0x130; // esi
  char *v2; // eax
  int v3; // edx
  int result; // eax

  DisplayClass_field_0x130 = (void *)(this->DisplayClass_field_0x130); /*0x487691*/
  if ( DisplayClass_field_0x130 == (void *)-1 ) /*0x48769a*/
    this->DisplayClass_field_0x130 = 0; /*0x48769c*/
  v2 = (char *)this->DisplayClass_field_0x130 + 1; /*0x4876ac*/
  this->DisplayClass_field_0x130 = (unsigned int)(v2); /*0x4876ad*/
  v3 = (int)v2; /*0x4876b3*/
  result = (int)this->DisplayClass_field_0x134; /*0x4876b5*/
  if ( v3 > result ) /*0x4876bd*/
    this->DisplayClass_field_0x130 = (unsigned int)((void *)result); /*0x4876bf*/
  if ( (int)DisplayClass_field_0x130 <= 0 ) /*0x4876c8*/
  {
    result = (int)this->DisplayClass_field_0x130; /*0x4876ca*/
    if ( result > 0 ) /*0x4876d2*/
    {
      result = (int)this->DisplayClass_field_0x140; /*0x4876d4*/
      LOBYTE(result) = result | 0x20; /*0x4876da*/
      this->DisplayClass_field_0x140 = (unsigned int)((void *)result); /*0x4876dc*/
    }
  }
  return result; /*0x4876c7*/

}
} // namespace gamemd
// 0x4A8850
namespace gamemd {
int DisplayClass::LoadTypeData()
{

  int *Viewport; // eax
  int v3; // edx
  int (**DisplayClass_field_0x0)(DisplayClass *, unsigned int *); // eax
  unsigned int v6[4]; // [esp+4h] [ebp-20h] BYREF
  int v7[4]; // [esp+14h] [ebp-10h] BYREF

  MapClass::Destru_vt05((MapClass *)this); /*0x4a8856*/
  stru_8A0390.health = SearchMIXFile(aPlaceShp, 0); /*0x4a886e*/
  dword_8A072C = SearchMIXFile(aShadowShp, 0); /*0x4a887c*/
  Viewport = Display::GetViewport(v7); /*0x4a8881*/
  v6[0] = *Viewport; /*0x4a8888*/
  v6[1] = Viewport[1]; /*0x4a888f*/
  v6[2] = Viewport[2]; /*0x4a8896*/
  v3 = Viewport[3]; /*0x4a889e*/
  DisplayClass_field_0x0 = (int (**)(DisplayClass *, unsigned int *))this->DisplayClass_field_0x0; /*0x4a88a1*/
  v6[3] = v3; /*0x4a88a6*/
  return DisplayClass_field_0x0[42](this, v6); /*0x4a88b0*/

}
} // namespace gamemd
// 0x4A88C0
namespace gamemd {
int DisplayClass::SetSize()
{

  LayerClass *v2; // esi
  int result; // eax

  MapClass::Destru_vt07((MapClass *)this); /*0x4a88c3*/
  *(unsigned int *)&this->__pad_1198[12] = 0; /*0x4a88cd*/
  this->DisplayClass_field_0x11A8 = 0; /*0x4a88d3*/
  *(unsigned int *)this->__pad_11AC = -1; /*0x4a88d9*/
  *(unsigned int *)&this->__pad_41E[3422] = 0; /*0x4a88df*/
  *(unsigned int *)&this->__pad_11B4[4] = -1; /*0x4a88e5*/
  LOBYTE(this->DisplayClass_field_0x11B0) = 0; /*0x4a88eb*/
  this->__pad_11B4[27] = 0; /*0x4a88f1*/
  LOBYTE(this->DisplayClass_field_0x11D0) = 0; /*0x4a88f7*/
  BYTE1(this->DisplayClass_field_0x11B0) = 0; /*0x4a88fd*/
  BYTE2(this->DisplayClass_field_0x11B0) = 0; /*0x4a8903*/
  v2 = (gamemd::LayerClass *)(&stru_8A0360); /*0x4a8909*/
  do /*0x4a891e*/
  {
    result = (*(int (**)(LayerClass *))(v2->items[0] + 12))(v2); /*0x4a8912*/
    v2 += 2; /*0x4a8915*/
  }
  while ( (int)v2 < (int)&stru_8A0390.ambientSoundController[3] ); /*0x4a891e*/
  return result; /*0x4a8920*/

}
} // namespace gamemd
// 0x4A8930
namespace gamemd {
char DisplayClass::ddtor()
{

  char result; // al
  GScreenClass *v3; // [esp+0h] [ebp-4h]

  VectorCursor_uint_DynamicVectorClass_uint____13::Get(v3); /*0x4a8933*/
  result = byte_A8ED6B; /*0x4a8938*/
  if ( !byte_A8ED6B ) /*0x4a893f*/
  {
    Hash::Reset((LinkClass *)&stru_8A06F8); /*0x4a8946*/
    return (*(char (**)(DisplayClass *, GadgetClass *))(this->DisplayClass_field_0x0 + 48))( /*0x4a8954*/
             this,
             &stru_8A06F8);
  }
  return result; /*0x4a8957*/

}
} // namespace gamemd
// 0x4A9890
namespace gamemd {
Tactical * * DisplayClass::UpdateCellPassability(short * a1, IUnknown * aP2)
{

  int16_t *v3; // esi
  CellClass *v5; // ebp
  int v6; // eax
  int copyFlags; // eax
  char AdjacentPassableMask; // al
  int v9; // eax
  char v10; // al
  int v11; // eax
  int v12; // edx
  int16_t v13; // cx
  unsigned int *v14; // edi
  int v15; // eax
  int v16; // eax
  int j; // ebp
  int v18; // edx
  int16_t v19; // cx
  unsigned char *v20; // esi
  char v21; // al
  int v22; // eax
  int v23; // eax
  int k; // edi
  int v25; // edx
  int16_t v26; // cx
  unsigned char *v27; // esi
  char v28; // al
  char v30; // [esp+Eh] [ebp-22h]
  bool v31; // [esp+Fh] [ebp-21h]
  int16_t v32[2]; // [esp+10h] [ebp-20h] BYREF
  int i; // [esp+14h] [ebp-1Ch]
  int v34; // [esp+18h] [ebp-18h]
  int v35; // [esp+1Ch] [ebp-14h]
  int16_t v36[2]; // [esp+20h] [ebp-10h] BYREF
  int v37; // [esp+24h] [ebp-Ch]
  CellClass *v38; // [esp+28h] [ebp-8h]
  int v39; // [esp+2Ch] [ebp-4h]

  v3 = a1; /*0x4a9896*/
  v5 = (CellClass *)CellCoord::To_CellObj((CellCoord *)this, a1); /*0x4a98a2*/
  v38 = v5; /*0x4a98a4*/
  v6 = v5->flags[0]; /*0x4a98a8*/
  v31 = (v6 & 2) == 0; /*0x4a98b9*/
  if ( (v6 & 2) == 0 || (v30 = 0, (v5->copyFlags & 8) == 0) ) /*0x4a98cd*/
    v30 = 1; /*0x4a98cf*/
  LOBYTE(v6) = v6 & 0xBD | 2; /*0x4a98da*/
  LOBYTE(v39) = v30; /*0x4a98dc*/
  v5->flags[0] = v6; /*0x4a98e0*/
  copyFlags = v5->copyFlags; /*0x4a98e6*/
  LOBYTE(copyFlags) = copyFlags | 8; /*0x4a98ec*/
  v5->copyFlags = copyFlags; /*0x4a98f0*/
  AdjacentPassableMask = Cell::GetAdjacentPassableMask(a1, 0); /*0x4a98fd*/
  if ( AdjacentPassableMask != v5->shroudedness ) /*0x4a9908*/
  {
    v30 = 1; /*0x4a990a*/
    v5->shroudedness = AdjacentPassableMask; /*0x4a990f*/
  }
  if ( v5->shroudedness == -1 ) /*0x4a991c*/
  {
    v9 = v5->copyFlags; /*0x4a991e*/
    LOBYTE(v9) = v9 | 0x10; /*0x4a9924*/
    v5->copyFlags = v9; /*0x4a9926*/
  }
  v10 = Cell::GetAdjacentPassableMask(a1, 1); /*0x4a9935*/
  if ( v10 != v5->foggedness ) /*0x4a9940*/
  {
    v30 = 1; /*0x4a9942*/
    v5->foggedness = v10; /*0x4a9947*/
  }
  if ( v5->foggedness == -1 ) /*0x4a9954*/
  {
    v11 = v5->flags[0]; /*0x4a9956*/
    LOBYTE(v11) = v11 | 1; /*0x4a995c*/
    v5->flags[0] = v11; /*0x4a995e*/
  }
  if ( v30 ) /*0x4a996a*/
    Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v5); /*0x4a9973*/
  for ( i = 0; i < 8; ++i ) /*0x4a9979*/
  {
    v12 = i & 7; /*0x4a9985*/
    v13 = *v3 + LOWORD(g_DDrawSurfaceManager.scenario[v12 + 82]); /*0x4a9997*/
    LOWORD(v12) = v3[1] + HIWORD(g_DDrawSurfaceManager.scenario[v12 + 82]); /*0x4a999e*/
    LOWORD(v34) = v13; /*0x4a99a2*/
    HIWORD(v34) = v12; /*0x4a99ab*/
    *(unsigned int *)v32 = v34; /*0x4a99b7*/
    v14 = CellCoord::To_CellObj((CellCoord *)this, v32); /*0x4a99c5*/
    if ( (v32[0] != *v3 || v32[1] != v3[1]) && (v14[75] & 0x10) == 0 ) /*0x4a99e2*/
    {
      v15 = Cell::GetAdjacentPassableMask(v32, 0); /*0x4a99f5*/
      if ( v15 == -1 ) /*0x4a99fd*/
      {
        v16 = v14[75]; /*0x4a9a03*/
        if ( (v16 & 8) == 0 ) /*0x4a9a0b*/
          goto LABEL_20; /*0x4a9a0b*/
        LOBYTE(v16) = v16 | 0x10; /*0x4a9a26*/
        v14[75] = v16; /*0x4a9a29*/
        Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v14); /*0x4a9a35*/
        for ( j = 0; j < 8; ++j ) /*0x4a9a3a*/
        {
          v18 = j & 7; /*0x4a9a3e*/
          v19 = v32[0] + LOWORD(g_DDrawSurfaceManager.scenario[v18 + 82]); /*0x4a9a50*/
          LOWORD(v18) = v32[1] + HIWORD(g_DDrawSurfaceManager.scenario[v18 + 82]); /*0x4a9a59*/
          LOWORD(v35) = v19; /*0x4a9a5e*/
          HIWORD(v35) = v18; /*0x4a9a67*/
          *(unsigned int *)v36 = v35; /*0x4a9a73*/
          v20 = CellCoord::To_CellObj((CellCoord *)this, v36); /*0x4a9a89*/
          v21 = Cell::GetAdjacentPassableMask(v36, 0); /*0x4a9a8b*/
          if ( v21 != v20[288] ) /*0x4a9a96*/
          {
            v20[288] = v21; /*0x4a9a98*/
            Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v20); /*0x4a9aa5*/
          }
        }
        v5 = v38; /*0x4a9ab0*/
        v3 = a1; /*0x4a9ab4*/
      }
      else
      {
        if ( v15 != -2 && (v14[75] & 8) == 0 ) /*0x4a9ac6*/
        {
LABEL_20:
          (*((void (**)(DisplayClass *, int16_t *, int))this->DisplayClass_field_0x0 + 36))(this, v32, aP2); /*0x4a9a0d*/
          goto LABEL_31; /*0x4a9a21*/
        }
        if ( v15 >= 0 && v15 != *((char *)v14 + 288) ) /*0x4a9aeb*/
        {
          *((unsigned char *)v14 + 288) = v15; /*0x4a9aed*/
          Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v14); /*0x4a9afa*/
        }
      }
    }
LABEL_31:
    if ( (v32[0] != *v3 || v32[1] != v3[1]) && (v14[80] & 1) == 0 ) /*0x4a9b1f*/
    {
      v22 = Cell::GetAdjacentPassableMask(v32, 1); /*0x4a9b32*/
      if ( v22 == -1 ) /*0x4a9b3a*/
      {
        v23 = v14[80]; /*0x4a9b40*/
        if ( (v23 & 2) == 0 ) /*0x4a9b48*/
          goto LABEL_36; /*0x4a9b48*/
        LOBYTE(v23) = v23 | 1; /*0x4a9b63*/
        v14[80] = v23; /*0x4a9b66*/
        Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v14); /*0x4a9b72*/
        for ( k = 0; k < 8; ++k ) /*0x4a9b77*/
        {
          v25 = k & 7; /*0x4a9b7b*/
          v26 = v32[0] + LOWORD(g_DDrawSurfaceManager.scenario[v25 + 82]); /*0x4a9b8d*/
          LOWORD(v25) = v32[1] + HIWORD(g_DDrawSurfaceManager.scenario[v25 + 82]); /*0x4a9b96*/
          LOWORD(v37) = v26; /*0x4a9b9b*/
          HIWORD(v37) = v25; /*0x4a9ba4*/
          *(unsigned int *)v36 = v37; /*0x4a9bb0*/
          v27 = CellCoord::To_CellObj((CellCoord *)this, v36); /*0x4a9bc6*/
          v28 = Cell::GetAdjacentPassableMask(v36, 1); /*0x4a9bc8*/
          if ( v28 != v27[289] ) /*0x4a9bd3*/
          {
            v27[289] = v28; /*0x4a9bd5*/
            Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v27); /*0x4a9be2*/
          }
        }
        v5 = v38; /*0x4a9bed*/
        v3 = a1; /*0x4a9bf1*/
      }
      else
      {
        if ( v22 != -2 && (v14[80] & 2) == 0 ) /*0x4a9c03*/
        {
LABEL_36:
          (*((void (**)(DisplayClass *, int16_t *, int))this->DisplayClass_field_0x0 + 36))(this, v32, aP2); /*0x4a9b4a*/
          continue; /*0x4a9b5e*/
        }
        if ( v22 >= 0 && v22 != *((char *)v14 + 289) ) /*0x4a9c28*/
        {
          *((unsigned char *)v14 + 289) = v22; /*0x4a9c2a*/
          Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v14); /*0x4a9c37*/
        }
      }
    }
  }
  if ( v30 ) /*0x4a9c55*/
    CellClass::SpiralFindClosest((int)v5, aP2, v39); /*0x4a9c67*/
  if ( (v5->flags[0] & 2) != 0 && v31 && ((int)dword_A8B230->vtable0 & 0x1000) != 0 ) /*0x4a9c88*/
    CellClass::UpdateZone(v5); /*0x4a9c8c*/
  return v30; /*0x4a9c91*/

}
} // namespace gamemd
// 0x4A9DD0
namespace gamemd {
VectorClass_flat * * DisplayClass::ProcessCellReveal(MouseClass * aP1, IUnknown * aP2)
{

  CellClass *v5; // edi
  int v6; // eax
  char v7; // cl
  char AdjacentPassableMask; // al
  int v9; // eax
  int v10; // eax
  int16_t v11; // dx
  unsigned int *v12; // esi
  int v13; // eax
  int v14; // eax
  int j; // edi
  int v16; // edx
  int16_t v17; // cx
  unsigned char *v18; // esi
  char v19; // al
  bool v21; // [esp+Fh] [ebp-1Dh]
  int16_t v22[2]; // [esp+10h] [ebp-1Ch] BYREF
  int i; // [esp+14h] [ebp-18h]
  int v24; // [esp+18h] [ebp-14h]
  int v25; // [esp+1Ch] [ebp-10h]
  int16_t v26[2]; // [esp+20h] [ebp-Ch] BYREF
  CellClass *v27; // [esp+24h] [ebp-8h]
  int v28; // [esp+28h] [ebp-4h]
  char v29; // [esp+30h] [ebp+4h]

  v5 = (CellClass *)CellCoord::To_CellObj((CellCoord *)this, aP1); /*0x4a9de2*/
  v27 = v5; /*0x4a9de7*/
  v6 = v5->flags[0]; /*0x4a9deb*/
  v7 = v6; /*0x4a9df1*/
  LOBYTE(v6) = v6 & 0xBD | 2; /*0x4a9dfc*/
  v21 = (v7 & 2) == 0; /*0x4a9dfe*/
  v29 = v21; /*0x4a9e02*/
  LOBYTE(v28) = v21; /*0x4a9e06*/
  v5->flags[0] = v6; /*0x4a9e0a*/
  AdjacentPassableMask = Cell::GetAdjacentPassableMask(aP1, 1); /*0x4a9e16*/
  if ( AdjacentPassableMask != v5->foggedness ) /*0x4a9e21*/
  {
    v29 = 1; /*0x4a9e23*/
    v5->foggedness = AdjacentPassableMask; /*0x4a9e28*/
  }
  if ( v5->foggedness == -1 ) /*0x4a9e35*/
  {
    v9 = v5->flags[0]; /*0x4a9e37*/
    LOBYTE(v9) = v9 | 1; /*0x4a9e3d*/
    v5->flags[0] = v9; /*0x4a9e3f*/
  }
  if ( v29 ) /*0x4a9e4b*/
    Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v5); /*0x4a9e54*/
  for ( i = 0; i < 8; ++i ) /*0x4a9e5a*/
  {
    v10 = i & 7; /*0x4a9e69*/
    v11 = aP1[1] + HIWORD(g_DDrawSurfaceManager.scenario[v10 + 82]); /*0x4a9e7c*/
    LOWORD(v24) = LOWORD(g_DDrawSurfaceManager.scenario[v10 + 82]) + *aP1; /*0x4a9e87*/
    HIWORD(v24) = v11; /*0x4a9e90*/
    *(unsigned int *)v22 = v24; /*0x4a9e9c*/
    v12 = CellCoord::To_CellObj((CellCoord *)this, v22); /*0x4a9eaa*/
    if ( (v22[0] != *aP1 || v22[1] != aP1[1]) && (v12[80] & 1) == 0 ) /*0x4a9ec7*/
    {
      v13 = Cell::GetAdjacentPassableMask(v22, 1); /*0x4a9eda*/
      if ( v13 == -1 ) /*0x4a9ee2*/
      {
        v14 = v12[80]; /*0x4a9ee8*/
        if ( (v14 & 2) == 0 ) /*0x4a9ef0*/
          goto LABEL_13; /*0x4a9ef0*/
        LOBYTE(v14) = v14 | 1; /*0x4a9f0c*/
        v12[80] = v14; /*0x4a9f0f*/
        Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v12); /*0x4a9f1b*/
        for ( j = 0; j < 8; ++j ) /*0x4a9f20*/
        {
          v16 = j & 7; /*0x4a9f29*/
          v17 = LOWORD(g_DDrawSurfaceManager.scenario[v16 + 82]) + v22[0]; /*0x4a9f2c*/
          LOWORD(v16) = HIWORD(g_DDrawSurfaceManager.scenario[v16 + 82]); /*0x4a9f3b*/
          LOWORD(v25) = v17; /*0x4a9f43*/
          HIWORD(v25) = v22[1] + v16; /*0x4a9f54*/
          *(unsigned int *)v26 = v25; /*0x4a9f5d*/
          v18 = CellCoord::To_CellObj((CellCoord *)this, v26); /*0x4a9f73*/
          v19 = Cell::GetAdjacentPassableMask(v26, 1); /*0x4a9f75*/
          if ( v19 != v18[289] ) /*0x4a9f80*/
          {
            v18[289] = v19; /*0x4a9f82*/
            Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v18); /*0x4a9f8f*/
          }
        }
        v5 = v27; /*0x4a9f9a*/
      }
      else
      {
        if ( v13 != -2 && (v12[80] & 2) == 0 ) /*0x4a9fac*/
        {
LABEL_13:
          (*((void (**)(DisplayClass *, int16_t *, int))this->DisplayClass_field_0x0 + 38))(this, v22, aP2); /*0x4a9ef2*/
          continue; /*0x4a9f07*/
        }
        if ( v13 >= 0 && v13 != *((char *)v12 + 289) ) /*0x4a9fd2*/
        {
          *((unsigned char *)v12 + 289) = v13; /*0x4a9fd4*/
          Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v12); /*0x4a9fe1*/
        }
      }
    }
  }
  if ( v29 ) /*0x4a9fff*/
    CellClass::SpiralFindClosest((int)v5, aP2, v28); /*0x4aa011*/
  if ( (v5->flags[0] & 2) != 0 && v21 && ((int)dword_A8B230->vtable0 & 0x1000) != 0 ) /*0x4aa032*/
    CellClass::UpdateZone(v5); /*0x4aa036*/
  return v29; /*0x4aa03b*/

}
} // namespace gamemd
// 0x4AA050
namespace gamemd {
int DisplayClass::RevealFogCell(short * a1, IUnknown * aP2)
{

  int16_t *v3; // edi
  unsigned int *v5; // esi
  int v6; // eax
  char v7; // bl
  bool v8; // bl
  char AdjacentPassableMask; // al
  int v10; // eax
  int v11; // eax
  int16_t v12; // dx
  unsigned int *v13; // esi
  int v14; // eax
  int v15; // eax
  int j; // edi
  int v17; // edx
  int16_t v18; // cx
  unsigned char *v19; // esi
  char v20; // al
  int16_t v22[2]; // [esp+10h] [ebp-1Ch] BYREF
  int i; // [esp+14h] [ebp-18h]
  int v24; // [esp+18h] [ebp-14h]
  int v25; // [esp+1Ch] [ebp-10h]
  int16_t v26[2]; // [esp+20h] [ebp-Ch] BYREF
  int v27; // [esp+24h] [ebp-8h]
  int v28; // [esp+28h] [ebp-4h]

  v3 = a1; /*0x4aa057*/
  v5 = CellCoord::To_CellObj((CellCoord *)this, a1); /*0x4aa063*/
  v28 = (int)v5; /*0x4aa068*/
  v6 = v5[75]; /*0x4aa06c*/
  v7 = v6; /*0x4aa072*/
  LOBYTE(v6) = v6 | 8; /*0x4aa074*/
  v8 = (v7 & 8) == 0; /*0x4aa07b*/
  v5[75] = v6; /*0x4aa07e*/
  LOBYTE(v27) = v8; /*0x4aa08a*/
  AdjacentPassableMask = Cell::GetAdjacentPassableMask(a1, 0); /*0x4aa08e*/
  if ( AdjacentPassableMask != *((unsigned char *)v5 + 288) ) /*0x4aa099*/
  {
    v8 = 1; /*0x4aa09b*/
    *((unsigned char *)v5 + 288) = AdjacentPassableMask; /*0x4aa09d*/
  }
  if ( *((unsigned char *)v5 + 288) == 0xFF ) /*0x4aa0aa*/
  {
    v10 = v5[75]; /*0x4aa0ac*/
    LOBYTE(v10) = v10 | 0x10; /*0x4aa0b2*/
    v5[75] = v10; /*0x4aa0b4*/
  }
  if ( v8 ) /*0x4aa0bc*/
    Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v5); /*0x4aa0c5*/
  for ( i = 0; i < 8; ++i ) /*0x4aa0ca*/
  {
    v11 = i & 7; /*0x4aa0d6*/
    v12 = v3[1] + HIWORD(g_DDrawSurfaceManager.scenario[v11 + 82]); /*0x4aa0ec*/
    LOWORD(v24) = *v3 + LOWORD(g_DDrawSurfaceManager.scenario[v11 + 82]); /*0x4aa0f7*/
    HIWORD(v24) = v12; /*0x4aa100*/
    *(unsigned int *)v22 = v24; /*0x4aa10c*/
    v13 = CellCoord::To_CellObj((CellCoord *)this, v22); /*0x4aa11a*/
    if ( (v22[0] != *v3 || v22[1] != v3[1]) && (v13[75] & 0x10) == 0 ) /*0x4aa137*/
    {
      v14 = Cell::GetAdjacentPassableMask(v22, 0); /*0x4aa14a*/
      if ( v14 == -1 ) /*0x4aa152*/
      {
        v15 = v13[75]; /*0x4aa158*/
        if ( (v15 & 8) == 0 ) /*0x4aa160*/
          goto LABEL_13; /*0x4aa160*/
        LOBYTE(v15) = v15 | 0x10; /*0x4aa17c*/
        v13[75] = v15; /*0x4aa17f*/
        Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v13); /*0x4aa18b*/
        for ( j = 0; j < 8; ++j ) /*0x4aa190*/
        {
          v17 = j & 7; /*0x4aa194*/
          v18 = v22[0] + LOWORD(g_DDrawSurfaceManager.scenario[v17 + 82]); /*0x4aa1a6*/
          LOWORD(v17) = v22[1] + HIWORD(g_DDrawSurfaceManager.scenario[v17 + 82]); /*0x4aa1af*/
          LOWORD(v25) = v18; /*0x4aa1b4*/
          HIWORD(v25) = v17; /*0x4aa1bd*/
          *(unsigned int *)v26 = v25; /*0x4aa1c9*/
          v19 = CellCoord::To_CellObj((CellCoord *)this, v26); /*0x4aa1df*/
          v20 = Cell::GetAdjacentPassableMask(v26, 0); /*0x4aa1e1*/
          if ( v20 != v19[288] ) /*0x4aa1ec*/
          {
            v19[288] = v20; /*0x4aa1ee*/
            Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v19); /*0x4aa1fb*/
          }
        }
        v3 = a1; /*0x4aa206*/
      }
      else
      {
        if ( v14 != -2 && (v13[75] & 8) == 0 ) /*0x4aa218*/
        {
LABEL_13:
          (*((void (**)(DisplayClass *, int16_t *, int))this->DisplayClass_field_0x0 + 39))(this, v22, aP2); /*0x4aa162*/
          continue; /*0x4aa177*/
        }
        if ( v14 >= 0 && v14 != *((char *)v13 + 288) ) /*0x4aa23e*/
        {
          *((unsigned char *)v13 + 288) = v14; /*0x4aa240*/
          Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v13); /*0x4aa24d*/
        }
      }
    }
  }
  if ( v8 ) /*0x4aa266*/
    CellClass::SpiralFindClosest(v28, aP2, v27); /*0x4aa27c*/
  return v8; /*0x4aa281*/

}
} // namespace gamemd
// 0x4AC310
namespace gamemd {
int DisplayClass::InitViewBounds(unsigned int * a2)
{

  void *DisplayClass_field_0x11A8; // eax

  LOBYTE(DisplayClass_field_0x11A8) = this->DisplayClass_field_0x11B0; /*0x4ac310*/
  if ( !(unsigned char)DisplayClass_field_0x11A8 ) /*0x4ac318*/
  {
    LOBYTE(DisplayClass_field_0x11A8) = BYTE2(this->DisplayClass_field_0x11B0); /*0x4ac31a*/
    if ( !(unsigned char)DisplayClass_field_0x11A8 ) /*0x4ac322*/
    {
      LOBYTE(DisplayClass_field_0x11A8) = BYTE1(this->DisplayClass_field_0x11B0); /*0x4ac324*/
      if ( !(unsigned char)DisplayClass_field_0x11A8 && *(unsigned int *)&this->__pad_11B4[4] == -1 ) /*0x4ac335*/
      {
        DisplayClass_field_0x11A8 = this->DisplayClass_field_0x11A8; /*0x4ac337*/
        if ( !DisplayClass_field_0x11A8 ) /*0x4ac33f*/
        {
          LOBYTE(this->DisplayClass_field_0x11D0) = 1; /*0x4ac345*/
          this->DisplayClass_field_0x11D4 = (void *)*a2; /*0x4ac34e*/
          this->DisplayClass_field_0x11D8 = (void *)a2[1]; /*0x4ac357*/
          this->DisplayClass_field_0x11DC = (void *)*a2; /*0x4ac35f*/
          DisplayClass_field_0x11A8 = (void *)a2[1]; /*0x4ac365*/
          this->DisplayClass_field_0x11E0 = DisplayClass_field_0x11A8; /*0x4ac368*/
        }
      }
    }
  }
  return (char)DisplayClass_field_0x11A8; /*0x4ac36e*/

}
} // namespace gamemd
// 0x4AE4F0
namespace gamemd {
void * DisplayClass::Draw(int a2)
{

  int v3; // esi
  void *v4; // edi
  unsigned int *v5; // eax
  int v6; // ecx
  wchar_t *result; // eax
  int v8; // ecx
  int v9; // esi
  unsigned int *v10; // eax
  CellClass *v11; // eax
  CellClass *v12; // eax
  void *Object_field_0x30; // [esp-4h] [ebp-38h]
  bool v14[4]; // [esp+8h] [ebp-2Ch] BYREF
  int v15; // [esp+Ch] [ebp-28h] BYREF
  int16_t v16[2]; // [esp+10h] [ebp-24h] BYREF
  int v17[2]; // [esp+14h] [ebp-20h] BYREF
  unsigned char v18[12]; // [esp+1Ch] [ebp-18h] BYREF
  int v19[3]; // [esp+28h] [ebp-Ch] BYREF

  if ( a2 < 500 /*0x4ae513*/
    || a2 > 900
    || (*((uint8_t (**)(DisplayClass *))this->DisplayClass_field_0x0 + 26))(this) )
  {
    return 0; /*0x4ae513*/
  }
  v3 = DSurface_ViewBounds.field_0; /*0x4ae524*/
  v4 = DSurface_ViewBounds.field_4; /*0x4ae531*/
  v5 = (unsigned int *)(*(int (**)(void *, unsigned char *))(*(unsigned int *)stru_887598.lineTrailer + 52))( /*0x4ae538*/
                   stru_887598.lineTrailer,
                   v18);
  v6 = v5[1]; /*0x4ae54a*/
  v17[0] = *v5 - v3; /*0x4ae54d*/
  v17[1] = v6 - (unsigned int)v4; /*0x4ae557*/
  Tactical::MouseOver(v17, v16, v19, &v15, &v14[3], (bool *)&a2); /*0x4ae571*/
  if ( LOBYTE(stru_A8EB00.__pad_CD4[1]) ) /*0x4ae57e*/
  {
    swprintf(&word_8A0630, (const size_t)aDD_2, (const wchar_t *const)(v19[0] / 256), v19[1] / 256); /*0x4ae5ac*/
    return &word_8A0630; /*0x4ae5be*/
  }
  if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v19)->copyFlags & 8) == 0 && g_hWnd ) /*0x4ae5e0*/
    return GetStringCSF(aTxtShadow, 0, aDRa2mdpostDisp, 5048); /*0x4ae5fd*/
  v8 = v15; /*0x4ae600*/
  if ( !v15 ) /*0x4ae606*/
    return 0; /*0x4ae606*/
  if ( (*(unsigned char *)(v15 + 20) & 1) != 0 ) /*0x4ae610*/
  {
    v9 = v15; /*0x4ae61c*/
    if ( !*(unsigned char *)(v15 + 1050) ) /*0x4ae616*/
    {
      if ( *(unsigned int *)(v15 + 544) == 2 ) /*0x4ae629*/
      {
        Object_field_0x30 = dword_A83D4C->Object_field_0x30; /*0x4ae635*/
        v10 = (unsigned int *)(*(int (**)(unsigned char *))(*(unsigned int *)v15 + 72))(v18); /*0x4ae63b*/
        v11 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v10); /*0x4ae644*/
        if ( !(uint8_t)Cell::IsPassableOffset((Cell *)v11, (int)Object_field_0x30) ) /*0x4ae64b*/
          return 0; /*0x4ae64b*/
      }
      if ( *(unsigned char *)((*(int (**)(int))(*(unsigned int *)v9 + 132))(v9) + 3226) ) /*0x4ae65e*/
        return 0; /*0x4ae666*/
      v8 = v15; /*0x4ae668*/
    }
  }
  else
  {
    v9 = 0; /*0x4ae697*/
  }
  if ( !v8 ) /*0x4ae66e*/
    return 0; /*0x4ae69b*/
  result = (wchar_t *)(*(int (**)(int))(*(unsigned int *)v8 + 144))(v8); /*0x4ae672*/
  if ( !v9 ) /*0x4ae67a*/
  {
    v12 = (CellClass *)CellCoord::To_CellObj((CellCoord *)this, v16); /*0x4ae683*/
    return (wchar_t *)CellClass::GetUIName(v12); /*0x4ae68a*/
  }
  return result; /*0x4ae5b9*/

}
} // namespace gamemd
// 0x4AEAD0
namespace gamemd {
int DisplayClass::ExitMode()
{

  if ( g_TacticalClass_Instance ) /*0x4aeadb*/
    TacticalClass::ResetScrollBounds((TacticalClass *)g_TacticalClass_Instance); /*0x4aeadd*/
  this->__pad_11B4[27] = 0; /*0x4aeae2*/
  LOBYTE(this->DisplayClass_field_0x11D0) = 0; /*0x4aeae9*/
  *((unsigned int *)((char *)&stru_A8EB00 + 441)) = 1; /*0x4aeaf0*/
  return (*((int (**)(DisplayClass *, unsigned int, unsigned int))this->DisplayClass_field_0x0 + 18))(this, 0, 0); /*0x4aeb02*/

}
} // namespace gamemd
// 0x5519B0
namespace gamemd {
int DisplayClass::RenderStatusText(IUnknown * aP1, char a3)
{

  int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // edx

  if ( a3 ) /*0x5519b9*/
    return DisplayClass::InsertPriorityText((unsigned int *)this, aP1) != 0; /*0x5519ca*/
  v5 = *((unsigned int *)this + 2); /*0x5519cf*/
  if ( *((unsigned int *)this + 4) >= v5 ) /*0x5519d7*/
  {
    if ( !*((unsigned char *)this + 13) && v5 ) /*0x5519e2*/
      return 0; /*0x5519e2*/
    v6 = *((unsigned int *)this + 5); /*0x5519e4*/
    if ( v6 <= 0 || !(*(uint8_t (**)(int, int, unsigned int))(*(unsigned int *)this + 8))(this, v5 + v6, 0) ) /*0x5519f4*/
      return 0; /*0x551a04*/
  }
  v7 = *((unsigned int *)this + 4); /*0x551a0a*/
  v8 = *((unsigned int *)this + 1); /*0x551a0d*/
  *((unsigned int *)this + 4) = v7 + 1; /*0x551a13*/
  *(unsigned int *)(v8 + 4 * v7) = aP1; /*0x551a1a*/
  return 1; /*0x5519c9*/

}
} // namespace gamemd
// 0x551A90
namespace gamemd {
int DisplayClass::InsertPriorityText(int a2)
{

  int v3; // ecx
  int v4; // eax
  int i; // edi
  int j; // eax

  v3 = *(unsigned int *)this->__pad_8; /*0x551a93*/
  if ( *(unsigned int *)this->__pad_10 >= v3 ) /*0x551a9b*/
  {
    if ( !BYTE1(this->DisplayClass_field_0xC[0]) && v3 ) /*0x551aa6*/
      return 0; /*0x551aa6*/
    v4 = *(unsigned int *)&this->__pad_10[4]; /*0x551aa8*/
    if ( v4 <= 0 /*0x551ab8*/
      || !(*((uint8_t (**)(DisplayClass *, int, unsigned int))this->DisplayClass_field_0x0 + 2))(
            this,
            v3 + v4,
            0) )
    {
      return 0; /*0x551abf*/
    }
  }
  for ( i = 0; i < *(unsigned int *)this->__pad_10; ++i ) /*0x551ad2*/
  {
    if ( DisplayClass::checkScreenBounds(*((DisplayClass **)&this->DisplayClass_field_0x4->vtable0 + i), a2) ) /*0x551adb*/
      break; /*0x551ae2*/
  }
  for ( j = *(unsigned int *)this->__pad_10 - 1; /*0x551af2*/
        j >= i;
        *((unsigned int *)&this->DisplayClass_field_0x4->vtable2 + j) = *((unsigned int *)&this->DisplayClass_field_0x4->vtable1 + j) )
  {
    --j; /*0x551af7*/
  }
  *((unsigned int *)&this->DisplayClass_field_0x4->vtable0 + i) = a2; /*0x551b07*/
  ++*(unsigned int *)this->__pad_10; /*0x551b0f*/
  return 1; /*0x551ac1*/

}
} // namespace gamemd
// 0x5F6220
namespace gamemd {
int DisplayClass::checkScreenBounds(int a2)
{

  int v3; // edi

  v3 = (*(int (**)(int))(*(unsigned int *)a2 + 184))(a2); /*0x5f6234*/
  return (*((int (**)(DisplayClass *))this->DisplayClass_field_0x0 + 46))(this) > v3; /*0x5f623e*/

}
} // namespace gamemd
// 0x6D8530
namespace gamemd {
int DisplayClass::ScrollTacticalView(IUnknown * aP1, IUnknown * aP2)
{

  int v4; // edx
  int result; // eax
  int v6; // eax
  int v7; // ecx

  if ( (byte_B0CDE0 & 1) == 0 ) /*0x6d8541*/
  {
    dword_B0CE38[0] = 0; /*0x6d854e*/
    dword_B0CE3C[0] = -1; /*0x6d8553*/
    dword_B0CE40 = 1; /*0x6d855e*/
    dword_B0CE44 = -1; /*0x6d8563*/
    dword_B0CE48 = 1; /*0x6d8569*/
    dword_B0CE50 = 1; /*0x6d856e*/
    dword_B0CE4C = 0; /*0x6d8577*/
    dword_B0CE58 = 0; /*0x6d857d*/
    dword_B0CE54 = 1; /*0x6d8587*/
    dword_B0CE5C = 1; /*0x6d858d*/
    dword_B0CE60 = -1; /*0x6d8593*/
    dword_B0CE64 = 1; /*0x6d8598*/
    dword_B0CE68 = -1; /*0x6d85a3*/
    dword_B0CE6C = 0; /*0x6d85a8*/
    byte_B0CDE0 |= 1u; /*0x6d85bb*/
    dword_B0CE70 = -1; /*0x6d85c1*/
    dword_B0CE74 = -1; /*0x6d85c6*/
    atexit(nullsub_41); /*0x6d85cc*/
  }
  v4 = *(unsigned int *)&this->__pad_41E[2374]; /*0x6d85dc*/
  result = v4 + aP2 * dword_B0CE38[2 * aP1]; /*0x6d85fc*/
  if ( v4 != result /*0x6d8606*/
    || *(unsigned int *)&this->__pad_41E[2378] != *(unsigned int *)&this->__pad_41E[2378] + aP2 * dword_B0CE3C[2 * aP1] )
  {
    v6 = *(unsigned int *)&this->__pad_41E[2394]; /*0x6d8612*/
    v7 = aP2 * dword_B0CE3C[2 * aP1]; /*0x6d8618*/
    *(unsigned int *)&this->__pad_41E[2390] += aP2 * dword_B0CE38[2 * aP1]; /*0x6d861a*/
    result = v7 + v6; /*0x6d8620*/
    *(unsigned int *)&this->__pad_41E[2394] = result; /*0x6d8622*/
  }
  return result; /*0x6d8628*/

}
} // namespace gamemd
// 0x6DA230
namespace gamemd {
int DisplayClass::GetCoordDelta(AbstractClass * aP1)
{

  int result; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // esi
  int v7; // edi
  int v8; // [esp+Ch] [ebp-8h] BYREF
  int v9; // [esp+10h] [ebp-4h]

  if ( (byte_B0CE00 & 1) == 0 ) /*0x6da244*/
  {
    byte_B0CE00 |= 1u; /*0x6da24f*/
    dword_B0CD98[0] = 0; /*0x6da256*/
    dword_B0CD9C[0] = -1; /*0x6da25b*/
    dword_B0CDA0 = 1; /*0x6da266*/
    dword_B0CDA4 = -1; /*0x6da26b*/
    dword_B0CDA8 = 1; /*0x6da271*/
    dword_B0CDB0 = 1; /*0x6da276*/
    dword_B0CDAC = 0; /*0x6da27f*/
    dword_B0CDB8 = 0; /*0x6da285*/
    dword_B0CDB4 = 1; /*0x6da28f*/
    dword_B0CDBC = 1; /*0x6da295*/
    dword_B0CDC0 = -1; /*0x6da29b*/
    dword_B0CDC4 = 1; /*0x6da2a0*/
    dword_B0CDC8 = -1; /*0x6da2ab*/
    dword_B0CDCC = 0; /*0x6da2b0*/
    dword_B0CDD0 = -1; /*0x6da2c1*/
    dword_B0CDD4 = -1; /*0x6da2c6*/
    atexit(nullsub_42); /*0x6da2cc*/
  }
  result = aP1; /*0x6da2d4*/
  v4 = *(unsigned int *)&this->__pad_41E[2374]; /*0x6da2d8*/
  v5 = *(unsigned int *)&this->__pad_41E[2378]; /*0x6da2de*/
  v6 = v4 + dword_B0CD98[2 * aP1]; /*0x6da2f2*/
  v7 = v5 + dword_B0CD9C[2 * aP1]; /*0x6da2f4*/
  if ( v6 != v4 || v7 != v5 ) /*0x6da2fc*/
  {
    v8 = v4 + dword_B0CD98[2 * aP1]; /*0x6da305*/
    v9 = v7; /*0x6da309*/
    if ( ClampCoordMap(&v8) ) /*0x6da30d*/
    {
      if ( !((unsigned int *)&stru_A8EB00)[391] ) /*0x6da31d*/
      {
        v6 = v8; /*0x6da31f*/
        v7 = v9; /*0x6da323*/
      }
    }
    return dword_84291C[2 * (*(unsigned int *)&this->__pad_41E[2378] - v7) /*0x6da33c*/
                      + *(unsigned int *)&this->__pad_41E[2374]
                      - v6
                      + *(unsigned int *)&this->__pad_41E[2378]
                      - v7];
  }
  return result; /*0x6da343*/

}
} // namespace gamemd
// 0x7BA4D0
namespace gamemd {
int DisplayClass::ReadFromBuffer(void * a1, signed int Size)
{

  int result; // eax
  int v5; // edx
  int v6; // eax
  signed int v7; // edi
  signed int v8; // eax

  result = 0; /*0x7ba4d4*/
  v5 = *((unsigned int *)this + 3); /*0x7ba4d6*/
  if ( v5 && a1 && Size > 0 ) /*0x7ba4eb*/
  {
    v6 = *((unsigned int *)this + 4); /*0x7ba4ed*/
    v7 = Size; /*0x7ba4f3*/
    if ( v6 ) /*0x7ba4f5*/
    {
      v8 = v6 - *((unsigned int *)this + 6); /*0x7ba4fa*/
      v7 = Size; /*0x7ba4fc*/
      if ( Size >= v8 ) /*0x7ba500*/
        v7 = v8; /*0x7ba502*/
    }
    if ( v7 > 0 ) /*0x7ba506*/
      memcpy(a1, (const void *)(v5 + *((unsigned int *)this + 6)), v7); /*0x7ba510*/
    *((unsigned int *)this + 6) += v7; /*0x7ba51d*/
    return v7; /*0x7ba520*/
  }
  return result; /*0x7ba523*/

}
} // namespace gamemd
// 0x4A9700
namespace gamemd {
void DisplayClass::Update(PowerClass * aP1, int a3)
{

  VectorCursor_uint_DynamicVectorClass_uint____13::Count((int *)this, aP1, a3); /*0x4a970a*/

}
} // namespace gamemd
// 0x4A9840
namespace gamemd {
bool DisplayClass::SetCoordVisible(IUnknown * aP0, MouseClass * aP1, char a3)
{

  int result; // eax

  result = *aP1; /*0x4a9848*/
  if ( *aP1 ) /*0x4a9848*/
  {
    if ( !a3 ) /*0x4a9859*/
    {
      result = DisplayClass::GetCoordDelta((DisplayClass *)g_TacticalClass_Instance, (int)aP0); /*0x4a9866*/
      LOBYTE(result) = result != -1; /*0x4a9873*/
      return result; /*0x4a9875*/
    }
  }
  else if ( !a3 ) /*0x4a9850*/
  {
    LOBYTE(result) = 0; /*0x4a9852*/
    return result; /*0x4a9854*/
  }
  result = DisplayClass::ScrollTacticalView((DisplayClass *)g_TacticalClass_Instance, (int)aP0, *aP1); /*0x4a9884*/
  LOBYTE(result) = 1; /*0x4a9889*/
  return result; /*0x4a9854*/

}
} // namespace gamemd
// 0x4AAC10
namespace gamemd {
int DisplayClass::ProcessTacticalMouseInput(char a2, int a3, int a4)
{

  HWND v5; // eax
  int *v6; // eax
  bool v8[2]; // [esp+6h] [ebp-2Ah] BYREF
  int16_t v9[2]; // [esp+8h] [ebp-28h] BYREF
  int v10; // [esp+Ch] [ebp-24h] BYREF
  unsigned int v11[3]; // [esp+10h] [ebp-20h] BYREF
  int v12; // [esp+1Ch] [ebp-14h] BYREF
  HWND v13; // [esp+20h] [ebp-10h]
  int v14[3]; // [esp+24h] [ebp-Ch] BYREF

  v10 = 0; /*0x4aac1c*/
  v12 = 0; /*0x4aac24*/
  v13 = 0; /*0x4aac2c*/
  if ( (a2 & 0x55) != 0 ) /*0x4aac34*/
  {
    v5 = dword_87F770[1]; /*0x4aac3d*/
    v12 = (int)*dword_87F770; /*0x4aac40*/
    v13 = v5; /*0x4aac44*/
  }
  else
  {
    (*(void (**)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 44))(dword_887640); /*0x4aac52*/
    (*(void (**)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 48))(dword_887640); /*0x4aac5d*/
    v6 = (int *)(*(int (**)(MouseClass *, unsigned int *))(dword_887640->MouseClass_field_0x0 + 52))( /*0x4aac6d*/
                  dword_887640,
                  v11);
    v12 = *v6; /*0x4aac72*/
    v13 = (HWND)v6[1]; /*0x4aac79*/
  }
  TacticalClass::TransformPixel((TacticalClass *)g_TacticalClass_Instance, v11, &v12); /*0x4aac8d*/
  v12 -= DSurface_ViewBounds.field_0; /*0x4aaca3*/
  v13 = (HWND)((char *)v13 - dword_886FA4); /*0x4aacb1*/
  Tactical::MouseOver(&v12, v9, v14, &v10, &v8[1], &a2); /*0x4aacd4*/
  if ( *(unsigned int *)v9 != dword_88095C ) /*0x4aace5*/
    Tactical::MouseMove((Tactical *)&dword_87F7E8, v11, v9); /*0x4aad04*/
  return COMObject::ActivateThunk((GadgetClass *)this, 0, a3, 0); /*0x4aad19*/

}
} // namespace gamemd
// 0x4AE6B0
namespace gamemd {
HWND DisplayClass::Render()
{

  int result; // eax

  result = (int)dword_B73554; /*0x4ae6b0*/
  if ( dword_B73554 ) /*0x4ae6b7*/
  {
    result = CloseWindow(dword_B73554); /*0x4ae6ba*/
    dword_B73554 = 0; /*0x4ae6c0*/
  }
  return result; /*0x4ae6ca*/

}
} // namespace gamemd
// 0x4AE6F0
namespace gamemd {
int DisplayClass::SetSurface(unsigned int * a1)
{

  LayerClass *v1; // esi
  int result; // eax

  v1 = &stru_8A0360; /*0x4ae6f6*/
  do /*0x4ae70c*/
  {
    result = LayerClass::Load(v1, a1); /*0x4ae6fe*/
    v1 += 2; /*0x4ae703*/
  }
  while ( (int)v1 < (int)&stru_8A0390.ambientSoundController[3] ); /*0x4ae70c*/
  return result; /*0x4ae70e*/

}
} // namespace gamemd
// 0x4AE720
namespace gamemd {
int DisplayClass::GetSurface(unsigned int * a1)
{

  LayerClass *v1; // esi
  int result; // eax

  v1 = &stru_8A0360; /*0x4ae726*/
  do /*0x4ae740*/
  {
    result = LayerClass::Save(v1, a1); /*0x4ae72e*/
    if ( result < 0 ) /*0x4ae735*/
      break; /*0x4ae735*/
    v1 += 2; /*0x4ae737*/
  }
  while ( (int)v1 < (int)&stru_8A0390.ambientSoundController[3] ); /*0x4ae740*/
  return result; /*0x4ae742*/

}
} // namespace gamemd
// 0x4AEB50
namespace gamemd {
unsigned int * DisplayClass::loc_4AEB50(MouseClass * aP1)
{

  int result; // eax

  result = aP1; /*0x4aeb30*/
  *((unsigned int *)this + 1128) = aP1; /*0x4aeb36*/
  LOBYTE(result) = aP1 != 0; /*0x4aeb3c*/
  *((unsigned char *)this + 4508) = aP1 != 0; /*0x4aeb3f*/
  return result; /*0x4aeb45*/

}
} // namespace gamemd

// 0x4AEBB0
namespace gamemd {
unsigned int * DisplayClass::updateRenderState(char a2)
{

  GadgetClass::Dtor((GadgetClass *)this); /*0x4aebb3*/
  if ( (a2 & 1) != 0 ) /*0x4aebbd*/
    __3_YAXPAX_Z(this); /*0x4aebc0*/
  return this; /*0x4aebca*/

}
} // namespace gamemd
// 0x4AEBF0
namespace gamemd {
DisplayClass * DisplayClass::Read(char * Block, char a2)
{

  MapClass::Destruct((char *)Block); /*0x4aebf3*/
  if ( (a2 & 1) != 0 ) /*0x4aebfd*/
    __3_YAXPAX_Z(Block); /*0x4aec00*/
  return (char *)Block; /*0x4aec0a*/

}
} // namespace gamemd
// 0x4AEC30
namespace gamemd {
int * DisplayClass::processDisplayMode(char a2)
{

  Vector::Clear((int)((unsigned int *)this + 1)); /*0x4aec36*/
  Straw::Dtor((Straw *)this); /*0x4aec3d*/
  if ( (a2 & 1) != 0 ) /*0x4aec47*/
    __3_YAXPAX_Z(this); /*0x4aec4a*/
  return (int *)this->__pad_0; /*0x4aec54*/

}
} // namespace gamemd