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

// 0x487630
namespace gamemd {
int DisplayClass::UpdateDisplayTimer()
{
  int v1; // eax
  int v3; // eax

  if ( *(&this->q01C6) == 1 ) /*0x487637*/
    *(&this->q01C6) = 0; /*0x487639*/
  v1 = *(&this->q01C6) - 1; /*0x487649*/
  *(&this->q01C6) = v1; /*0x48764a*/
  v1 = v1; /*0x487650*/
  v3 = *(&this->q01C5); /*0x487652*/
  if ( (v3 & 8) != 0 && (v3 & 0x10) != 0 ) /*0x48765e*/
  {
    if ( v1 <= 0 ) /*0x48766f*/
    {
      v3 = *(&this->q0200); /*0x487671*/
      if ( (this->q050 & 0x20) == 0x20 ) /*0x48767f*/
      {
        IDA_LOBYTE(v3) = v3 & 0xDF; /*0x487681*/
        *(&this->q0200) = v3; /*0x487683*/
      }
    }
  }
  else if ( v1 <= 0 ) /*0x487662*/
  {
    IDA_LOBYTE(v3) = v3 | 0x18; /*0x487664*/
    *(&this->q01C5) = v3; /*0x487666*/
  }
  return v3; /*0x48766c*/
}
} // namespace gamemd
// 0x487690
namespace gamemd {
int DisplayClass::AdvanceFrameCounter()
{
  int v1; // esi
  int v2; // eax
  int v3; // edx
  int result; // eax

  v1 = *(this + 76); /*0x487691*/
  if ( v1 == -1 ) /*0x48769a*/
    *(this + 76) = 0; /*0x48769c*/
  v2 = *(this + 76) + 1; /*0x4876ac*/
  *(this + 76) = v2; /*0x4876ad*/
  v3 = v2; /*0x4876b3*/
  result = *(this + 77); /*0x4876b5*/
  if ( v3 > result ) /*0x4876bd*/
    *(this + 76) = result; /*0x4876bf*/
  if ( v1 <= 0 ) /*0x4876c8*/
  {
    result = *(this + 76); /*0x4876ca*/
    if ( result > 0 ) /*0x4876d2*/
    {
      result = *(this + 80); /*0x4876d4*/
      IDA_LOBYTE(result) = result | 0x20; /*0x4876da*/
      *(this + 80) = result; /*0x4876dc*/
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
  int v4; // eax
  _DWORD v6[4]; // [esp+4h] [ebp-20h] BYREF
  int v7[4]; // [esp+14h] [ebp-10h] BYREF

  MapClass::Destru_vt05(); /*0x4a8856*/
  dword_8A03FC = SearchMIXFile(aPlaceShp, 0); /*0x4a886e*/
  dword_8A072C = SearchMIXFile(aShadowShp, 0); /*0x4a887c*/
  Viewport = Display::GetViewport(v7); /*0x4a8881*/
  v6[0] = *Viewport; /*0x4a8888*/
  v6[1] = Viewport[1]; /*0x4a888f*/
  v6[2] = Viewport[2]; /*0x4a8896*/
  v3 = Viewport[3]; /*0x4a889e*/
  v4 = *this; /*0x4a88a1*/
  v6[3] = v3; /*0x4a88a6*/
  return (v6); /*0x4a88b0*/
}
} // namespace gamemd
// 0x4A88C0
namespace gamemd {
int DisplayClass::SetSize()
{
  int result; // eax

  MapClass::Destru_vt07(); /*0x4a88c3*/
  this->q11A4 = 0; /*0x4a88cd*/
  this->q11A8 = 0; /*0x4a88d3*/
  this->q11AC = -1; /*0x4a88d9*/
  this->q117C = 0; /*0x4a88df*/
  this->q11B8 = -1; /*0x4a88e5*/
  this->q11B0 = 0; /*0x4a88eb*/
  this->q11CF = 0; /*0x4a88f1*/
  this->q11D0 = 0; /*0x4a88f7*/
  this->u8_11B1 = 0; /*0x4a88fd*/
  this->u8_11B2 = 0; /*0x4a8903*/
  dword_8A0360 = dword_8A0360; /*0x4a8909*/
  do /*0x4a891e*/
  {
    result = (*(int (__thiscall **)(int *))(*dword_8A0360 + 12))(dword_8A0360); /*0x4a8912*/
    dword_8A0360 += 6; /*0x4a8915*/
  }
  while ( (int)dword_8A0360 < (int)&dbl_8A03D8 ); /*0x4a891e*/
  return result; /*0x4a8920*/
}
} // namespace gamemd
// 0x4A8930
namespace gamemd {
char DisplayClass::ddtor()
{
  char result; // al

  VectorCursor_uint_DynamicVectorClass_uint____13_::Get(); /*0x4a8933*/
  result = g_ArmageddonMode; /*0x4a8938*/
  if ( !g_ArmageddonMode ) /*0x4a893f*/
  {
    Hash::Reset(dword_8A06F8); /*0x4a8946*/
    return (dword_8A06F8, unsigned int a1); /*0x4a8954*/
  }
  return result; /*0x4a8957*/
}
} // namespace gamemd
// 0x4A9890
namespace gamemd {
Tactical * * DisplayClass::UpdateCellPassability(short * a1, IUnknown * aP2)
{
  __int16 *v3; // esi
  _DWORD *v5; // ebp
  int v6; // eax
  int v7; // eax
  char AdjacentPassableMask; // al
  int v9; // eax
  char v10; // al
  int v11; // eax
  int v12; // edx
  __int16 v13; // cx
  _DWORD *v14; // edi
  int v15; // eax
  int v16; // eax
  int j; // ebp
  int v18; // edx
  __int16 v19; // cx
  _BYTE *v20; // esi
  char v21; // al
  int v22; // eax
  int v23; // eax
  int k; // edi
  int v25; // edx
  __int16 v26; // cx
  _BYTE *v27; // esi
  char v28; // al
  char v30; // [esp+Eh] [ebp-22h]
  bool v31; // [esp+Fh] [ebp-21h]
  int i; // [esp+14h] [ebp-1Ch]
  int v34; // [esp+18h] [ebp-18h]
  int v35; // [esp+1Ch] [ebp-14h]
  int v36; // [esp+20h] [ebp-10h] BYREF
  int v37; // [esp+24h] [ebp-Ch]
  int v39; // [esp+2Ch] [ebp-4h]

  v3 = a1; /*0x4a9896*/
  v5 = CellCoord::To_CellObj(this, a1); /*0x4a98a2*/
  v5 = v5; /*0x4a98a4*/
  v6 = v5[80]; /*0x4a98a8*/
  v31 = (v6 & 2) == 0; /*0x4a98b9*/
  if ( (v6 & 2) == 0 || (v30 = 0, (v5[75] & 8) == 0) ) /*0x4a98cd*/
    v30 = 1; /*0x4a98cf*/
  IDA_LOBYTE(v6) = v6 & 0xBD | 2; /*0x4a98da*/
  IDA_LOBYTE(v39) = v30; /*0x4a98dc*/
  v5[80] = v6; /*0x4a98e0*/
  v7 = v5[75]; /*0x4a98e6*/
  IDA_LOBYTE(v7) = v7 | 8; /*0x4a98ec*/
  v5[75] = v7; /*0x4a98f0*/
  AdjacentPassableMask = Cell::GetAdjacentPassableMask(a1, 0); /*0x4a98fd*/
  if ( AdjacentPassableMask != *((_BYTE *)v5 + 288) ) /*0x4a9908*/
  {
    v30 = 1; /*0x4a990a*/
    *((_BYTE *)v5 + 288) = AdjacentPassableMask; /*0x4a990f*/
  }
  if ( *((_BYTE *)v5 + 288) == 0xFF ) /*0x4a991c*/
  {
    v9 = v5[75]; /*0x4a991e*/
    IDA_LOBYTE(v9) = v9 | 0x10; /*0x4a9924*/
    v5[75] = v9; /*0x4a9926*/
  }
  v10 = Cell::GetAdjacentPassableMask(a1, 1); /*0x4a9935*/
  if ( v10 != *((_BYTE *)v5 + 289) ) /*0x4a9940*/
  {
    v30 = 1; /*0x4a9942*/
    *((_BYTE *)v5 + 289) = v10; /*0x4a9947*/
  }
  if ( *((_BYTE *)v5 + 289) == 0xFF ) /*0x4a9954*/
  {
    v11 = v5[80]; /*0x4a9956*/
    IDA_LOBYTE(v11) = v11 | 1; /*0x4a995c*/
    v5[80] = v11; /*0x4a995e*/
  }
  if ( v30 ) /*0x4a996a*/
    Tactical::AddCellToDrawList((int)g_TacticalClass_Instance, (int)v5); /*0x4a9973*/
  for ( i = 0; i < 8; ++i ) /*0x4a9979*/
  {
    v12 = i & 7; /*0x4a9985*/
    v13 = *v3 + IDA_LOWORD(Direction_X_Offsets[v12]); /*0x4a9997*/
    IDA_LOWORD(v12) = v3[1] + IDA_HIWORD(Direction_X_Offsets[v12]); /*0x4a999e*/
    IDA_LOWORD(v34) = v13; /*0x4a99a2*/
    IDA_HIWORD(v34) = v12; /*0x4a99ab*/
    v34 = v34; /*0x4a99b7*/
    v14 = CellCoord::To_CellObj(this, (__int16 *)&v34); /*0x4a99c5*/
    if ( v34 != *(_DWORD *)v3 && (v14[75] & 0x10) == 0 ) /*0x4a99e2*/
    {
      v15 = Cell::GetAdjacentPassableMask((__int16 *)&v34, 0); /*0x4a99f5*/
      if ( v15 == -1 ) /*0x4a99fd*/
      {
        v16 = v14[75]; /*0x4a9a03*/
        if ( (v16 & 8) == 0 ) /*0x4a9a0b*/
          goto LABEL_19; /*0x4a9a0b*/
        IDA_LOBYTE(v16) = v16 | 0x10; /*0x4a9a26*/
        v14[75] = v16; /*0x4a9a29*/
        Tactical::AddCellToDrawList((int)g_TacticalClass_Instance, (int)v14); /*0x4a9a35*/
        for ( j = 0; j < 8; ++j ) /*0x4a9a3a*/
        {
          v18 = j & 7; /*0x4a9a3e*/
          v19 = v34 + IDA_LOWORD(Direction_X_Offsets[v18]); /*0x4a9a50*/
          IDA_LOWORD(v18) = IDA_HIWORD(v34) + IDA_HIWORD(Direction_X_Offsets[v18]); /*0x4a9a59*/
          IDA_LOWORD(v35) = v19; /*0x4a9a5e*/
          IDA_HIWORD(v35) = v18; /*0x4a9a67*/
          v36 = v35; /*0x4a9a73*/
          v20 = CellCoord::To_CellObj(this, (__int16 *)&v36); /*0x4a9a89*/
          v21 = Cell::GetAdjacentPassableMask((__int16 *)&v36, 0); /*0x4a9a8b*/
          if ( v21 != v20[288] ) /*0x4a9a96*/
          {
            v20[288] = v21; /*0x4a9a98*/
            Tactical::AddCellToDrawList((int)g_TacticalClass_Instance, (int)v20); /*0x4a9aa5*/
          }
        }
        v5 = v5; /*0x4a9ab0*/
        v3 = a1; /*0x4a9ab4*/
      }
      else
      {
        if ( v15 != -2 && (v14[75] & 8) == 0 ) /*0x4a9ac6*/
        {
  LABEL_19:
          this->UpdateCellPassability(&v34, aP2); /*0x4a9a0d*/
          goto LABEL_30; /*0x4a9a21*/
        }
        if ( v15 >= 0 && v15 != *((char *)v14 + 288) ) /*0x4a9aeb*/
        {
          *((_BYTE *)v14 + 288) = v15; /*0x4a9aed*/
          Tactical::AddCellToDrawList((int)g_TacticalClass_Instance, (int)v14); /*0x4a9afa*/
        }
      }
    }
  LABEL_30:
    if ( v34 != *(_DWORD *)v3 && (v14[80] & 1) == 0 ) /*0x4a9b1f*/
    {
      v22 = Cell::GetAdjacentPassableMask((__int16 *)&v34, 1); /*0x4a9b32*/
      if ( v22 == -1 ) /*0x4a9b3a*/
      {
        v23 = v14[80]; /*0x4a9b40*/
        if ( (v23 & 2) == 0 ) /*0x4a9b48*/
          goto LABEL_34; /*0x4a9b48*/
        IDA_LOBYTE(v23) = v23 | 1; /*0x4a9b63*/
        v14[80] = v23; /*0x4a9b66*/
        Tactical::AddCellToDrawList((int)g_TacticalClass_Instance, (int)v14); /*0x4a9b72*/
        for ( k = 0; k < 8; ++k ) /*0x4a9b77*/
        {
          v25 = k & 7; /*0x4a9b7b*/
          v26 = v34 + IDA_LOWORD(Direction_X_Offsets[v25]); /*0x4a9b8d*/
          IDA_LOWORD(v25) = IDA_HIWORD(v34) + IDA_HIWORD(Direction_X_Offsets[v25]); /*0x4a9b96*/
          IDA_LOWORD(v37) = v26; /*0x4a9b9b*/
          IDA_HIWORD(v37) = v25; /*0x4a9ba4*/
          v36 = v37; /*0x4a9bb0*/
          v27 = CellCoord::To_CellObj(this, (__int16 *)&v36); /*0x4a9bc6*/
          v28 = Cell::GetAdjacentPassableMask((__int16 *)&v36, 1); /*0x4a9bc8*/
          if ( v28 != v27[289] ) /*0x4a9bd3*/
          {
            v27[289] = v28; /*0x4a9bd5*/
            Tactical::AddCellToDrawList((int)g_TacticalClass_Instance, (int)v27); /*0x4a9be2*/
          }
        }
        v5 = v5; /*0x4a9bed*/
        v3 = a1; /*0x4a9bf1*/
      }
      else
      {
        if ( v22 != -2 && (v14[80] & 2) == 0 ) /*0x4a9c03*/
        {
  LABEL_34:
          this->UpdateCellPassability(&v34, aP2); /*0x4a9b4a*/
          continue; /*0x4a9b5e*/
        }
        if ( v22 >= 0 && v22 != *((char *)v14 + 289) ) /*0x4a9c28*/
        {
          *((_BYTE *)v14 + 289) = v22; /*0x4a9c2a*/
          Tactical::AddCellToDrawList((int)g_TacticalClass_Instance, (int)v14); /*0x4a9c37*/
        }
      }
    }
  }
  if ( v30 ) /*0x4a9c55*/
    CellClass::SpiralFindClosest((int)v5, aP2, v39); /*0x4a9c67*/
  if ( (v5[80] & 2) != 0 && v31 && (*(_DWORD *)g_ScenarioClass_Instance & 0x1000) != 0 ) /*0x4a9c88*/
    CellClass::UpdateZone(v5); /*0x4a9c8c*/
  return v30; /*0x4a9c91*/
}
} // namespace gamemd
// 0x4A9DD0
namespace gamemd {
VectorClass_flat * * DisplayClass::ProcessCellReveal(MouseClass * aP1, IUnknown * aP2)
{
  _DWORD *v5; // edi
  int v6; // eax
  char AdjacentPassableMask; // al
  int v9; // eax
  int v10; // eax
  __int16 v11; // dx
  _BYTE *v12; // eax
  int v13; // esi
  int v14; // eax
  int v15; // eax
  int j; // edi
  int v17; // edx
  __int16 v18; // cx
  _BYTE *v19; // esi
  char v20; // al
  bool v22; // [esp+Fh] [ebp-1Dh]
  int i; // [esp+14h] [ebp-18h]
  int v25; // [esp+18h] [ebp-14h]
  int v26; // [esp+1Ch] [ebp-10h]
  int v29; // [esp+28h] [ebp-4h]
  char v30; // [esp+30h] [ebp+4h]

  v5 = CellCoord::To_CellObj(this, aP1); /*0x4a9de2*/
  v5 = v5; /*0x4a9de7*/
  v6 = v5[80]; /*0x4a9deb*/
  v6 = v6; /*0x4a9df1*/
  IDA_LOBYTE(v6) = v6 & 0xBD | 2; /*0x4a9dfc*/
  v22 = (v6 & 2) == 0; /*0x4a9dfe*/
  v30 = v22; /*0x4a9e02*/
  IDA_LOBYTE(v29) = v22; /*0x4a9e06*/
  v5[80] = v6; /*0x4a9e0a*/
  AdjacentPassableMask = Cell::GetAdjacentPassableMask(aP1, 1); /*0x4a9e16*/
  if ( AdjacentPassableMask != *((_BYTE *)v5 + 289) ) /*0x4a9e21*/
  {
    v30 = 1; /*0x4a9e23*/
    *((_BYTE *)v5 + 289) = AdjacentPassableMask; /*0x4a9e28*/
  }
  if ( *((_BYTE *)v5 + 289) == 0xFF ) /*0x4a9e35*/
  {
    v9 = v5[80]; /*0x4a9e37*/
    IDA_LOBYTE(v9) = v9 | 1; /*0x4a9e3d*/
    v5[80] = v9; /*0x4a9e3f*/
  }
  if ( v30 ) /*0x4a9e4b*/
    Tactical::AddCellToDrawList((int)g_TacticalClass_Instance, (int)v5); /*0x4a9e54*/
  for ( i = 0; i < 8; ++i ) /*0x4a9e5a*/
  {
    v10 = i & 7; /*0x4a9e69*/
    v11 = aP1[1] + IDA_HIWORD(Direction_X_Offsets[v10]); /*0x4a9e7c*/
    IDA_LOWORD(v25) = IDA_LOWORD(Direction_X_Offsets[v10]) + *aP1; /*0x4a9e87*/
    IDA_HIWORD(v25) = v11; /*0x4a9e90*/
    v25 = v25; /*0x4a9e9c*/
    v12 = CellCoord::To_CellObj(this, (__int16 *)&v25); /*0x4a9ea0*/
    v13 = (int)v12; /*0x4a9eaa*/
    if ( v25 != *(_DWORD *)aP1 && (v12[320] & 1) == 0 ) /*0x4a9ec7*/
    {
      v14 = Cell::GetAdjacentPassableMask((__int16 *)&v25, 1); /*0x4a9eda*/
      if ( v14 == -1 ) /*0x4a9ee2*/
      {
        v15 = v13->q140; /*0x4a9ee8*/
        if ( (v15 & 2) == 0 ) /*0x4a9ef0*/
          goto LABEL_12; /*0x4a9ef0*/
        IDA_LOBYTE(v15) = v15 | 1; /*0x4a9f0c*/
        v13->q140 = v15; /*0x4a9f0f*/
        Tactical::AddCellToDrawList((int)g_TacticalClass_Instance, v13); /*0x4a9f1b*/
        for ( j = 0; j < 8; ++j ) /*0x4a9f20*/
        {
          v17 = j & 7; /*0x4a9f29*/
          v18 = IDA_LOWORD(Direction_X_Offsets[v17]) + v25; /*0x4a9f2c*/
          IDA_LOWORD(v17) = IDA_HIWORD(Direction_X_Offsets[v17]); /*0x4a9f3b*/
          IDA_LOWORD(v26) = v18; /*0x4a9f43*/
          IDA_HIWORD(v26) = IDA_HIWORD(v25) + v17; /*0x4a9f54*/
          v26 = v26; /*0x4a9f5d*/
          v19 = CellCoord::To_CellObj(this, (__int16 *)&v26); /*0x4a9f73*/
          v20 = Cell::GetAdjacentPassableMask((__int16 *)&v26, 1); /*0x4a9f75*/
          if ( v20 != v19[289] ) /*0x4a9f80*/
          {
            v19[289] = v20; /*0x4a9f82*/
            Tactical::AddCellToDrawList((int)g_TacticalClass_Instance, (int)v19); /*0x4a9f8f*/
          }
        }
        v5 = v5; /*0x4a9f9a*/
      }
      else
      {
        if ( v14 != -2 && (v13->q140 & 2) == 0 ) /*0x4a9fac*/
        {
  LABEL_12:
          this->ProcessCellReveal(&v25, aP2); /*0x4a9ef2*/
          continue; /*0x4a9f07*/
        }
        if ( v14 >= 0 && v14 != *(char *)(v13 + 289) ) /*0x4a9fd2*/
        {
          *(_BYTE *)(v13 + 289) = v14; /*0x4a9fd4*/
          Tactical::AddCellToDrawList((int)g_TacticalClass_Instance, v13); /*0x4a9fe1*/
        }
      }
    }
  }
  if ( v30 ) /*0x4a9fff*/
    CellClass::SpiralFindClosest((int)v5, aP2, v29); /*0x4aa011*/
  if ( (v5[80] & 2) != 0 && v22 && (*(_DWORD *)g_ScenarioClass_Instance & 0x1000) != 0 ) /*0x4aa032*/
    CellClass::UpdateZone(v5); /*0x4aa036*/
  return v30; /*0x4aa03b*/
}
} // namespace gamemd
// 0x4AA050
namespace gamemd {
int DisplayClass::RevealFogCell(short * a1, IUnknown * aP2)
{
  __int16 *v3; // edi
  _DWORD *v5; // esi
  int v6; // eax
  char v7; // bl
  bool v8; // bl
  char AdjacentPassableMask; // al
  int v10; // eax
  int v11; // eax
  __int16 v12; // dx
  _BYTE *v13; // eax
  int v14; // esi
  int v15; // eax
  int v16; // eax
  int j; // edi
  int v18; // edx
  __int16 v19; // cx
  _BYTE *v20; // esi
  char v21; // al
  int i; // [esp+14h] [ebp-18h]
  int v25; // [esp+18h] [ebp-14h]
  int v26; // [esp+1Ch] [ebp-10h]
  int v28; // [esp+24h] [ebp-8h]
  int v29; // [esp+28h] [ebp-4h]

  v3 = a1; /*0x4aa057*/
  v5 = CellCoord::To_CellObj(this, a1); /*0x4aa063*/
  v29 = (int)v5; /*0x4aa068*/
  v6 = v5[75]; /*0x4aa06c*/
  v6 = v6; /*0x4aa072*/
  IDA_LOBYTE(v6) = v6 | 8; /*0x4aa074*/
  v8 = (v6 & 8) == 0; /*0x4aa07b*/
  v5[75] = v6; /*0x4aa07e*/
  IDA_LOBYTE(v28) = v8; /*0x4aa08a*/
  AdjacentPassableMask = Cell::GetAdjacentPassableMask(a1, 0); /*0x4aa08e*/
  if ( AdjacentPassableMask != *((_BYTE *)v5 + 288) ) /*0x4aa099*/
  {
    v8 = 1; /*0x4aa09b*/
    *((_BYTE *)v5 + 288) = AdjacentPassableMask; /*0x4aa09d*/
  }
  if ( *((_BYTE *)v5 + 288) == 0xFF ) /*0x4aa0aa*/
  {
    v10 = v5[75]; /*0x4aa0ac*/
    IDA_LOBYTE(v10) = v10 | 0x10; /*0x4aa0b2*/
    v5[75] = v10; /*0x4aa0b4*/
  }
  if ( v8 ) /*0x4aa0bc*/
    Tactical::AddCellToDrawList((int)g_TacticalClass_Instance, (int)v5); /*0x4aa0c5*/
  for ( i = 0; i < 8; ++i ) /*0x4aa0ca*/
  {
    v11 = i & 7; /*0x4aa0d6*/
    v12 = v3[1] + IDA_HIWORD(Direction_X_Offsets[v11]); /*0x4aa0ec*/
    IDA_LOWORD(v25) = *v3 + IDA_LOWORD(Direction_X_Offsets[v11]); /*0x4aa0f7*/
    IDA_HIWORD(v25) = v12; /*0x4aa100*/
    v25 = v25; /*0x4aa10c*/
    v13 = CellCoord::To_CellObj(this, (__int16 *)&v25); /*0x4aa110*/
    v14 = (int)v13; /*0x4aa11a*/
    if ( v25 != *(_DWORD *)v3 && (v13[300] & 0x10) == 0 ) /*0x4aa137*/
    {
      v15 = Cell::GetAdjacentPassableMask((__int16 *)&v25, 0); /*0x4aa14a*/
      if ( v15 == -1 ) /*0x4aa152*/
      {
        v16 = v14->u32_12C; /*0x4aa158*/
        if ( (v16 & 8) == 0 ) /*0x4aa160*/
          goto LABEL_12; /*0x4aa160*/
        IDA_LOBYTE(v16) = v16 | 0x10; /*0x4aa17c*/
        v14->u32_12C = v16; /*0x4aa17f*/
        Tactical::AddCellToDrawList((int)g_TacticalClass_Instance, v14); /*0x4aa18b*/
        for ( j = 0; j < 8; ++j ) /*0x4aa190*/
        {
          v18 = j & 7; /*0x4aa194*/
          v19 = v25 + IDA_LOWORD(Direction_X_Offsets[v18]); /*0x4aa1a6*/
          IDA_LOWORD(v18) = IDA_HIWORD(v25) + IDA_HIWORD(Direction_X_Offsets[v18]); /*0x4aa1af*/
          IDA_LOWORD(v26) = v19; /*0x4aa1b4*/
          IDA_HIWORD(v26) = v18; /*0x4aa1bd*/
          v26 = v26; /*0x4aa1c9*/
          v20 = CellCoord::To_CellObj(this, (__int16 *)&v26); /*0x4aa1df*/
          v21 = Cell::GetAdjacentPassableMask((__int16 *)&v26, 0); /*0x4aa1e1*/
          if ( v21 != v20[288] ) /*0x4aa1ec*/
          {
            v20[288] = v21; /*0x4aa1ee*/
            Tactical::AddCellToDrawList((int)g_TacticalClass_Instance, (int)v20); /*0x4aa1fb*/
          }
        }
        v3 = a1; /*0x4aa206*/
      }
      else
      {
        if ( v15 != -2 && (v14->u32_12C & 8) == 0 ) /*0x4aa218*/
        {
  LABEL_12:
          this->RevealFogCell(&v25, aP2); /*0x4aa162*/
          continue; /*0x4aa177*/
        }
        if ( v15 >= 0 && v15 != v14->q120 ) /*0x4aa23e*/
        {
          v14->q120 = v15; /*0x4aa240*/
          Tactical::AddCellToDrawList((int)g_TacticalClass_Instance, v14); /*0x4aa24d*/
        }
      }
    }
  }
  if ( v8 ) /*0x4aa266*/
    CellClass::SpiralFindClosest(v29, aP2, v28); /*0x4aa27c*/
  return v8; /*0x4aa281*/
}
} // namespace gamemd
// 0x4AC310
namespace gamemd {
int DisplayClass::InitViewBounds(unsigned int * a2)
{
  int v2; // eax

  IDA_LOBYTE(v2) = this->q11B0; /*0x4ac310*/
  if ( !(_BYTE)v2 ) /*0x4ac318*/
  {
    IDA_LOBYTE(v2) = *(_BYTE *)(this + 4530); /*0x4ac31a*/
    if ( !(_BYTE)v2 ) /*0x4ac322*/
    {
      IDA_LOBYTE(v2) = this->u8_11B1; /*0x4ac324*/
      if ( !(_BYTE)v2 && this->q11B8 == -1 ) /*0x4ac335*/
      {
        v2 = this->q11A8; /*0x4ac337*/
        if ( !v2 ) /*0x4ac33f*/
        {
          this->q11D0 = 1; /*0x4ac345*/
          this->q11D4 = *a2; /*0x4ac34e*/
          this->q11D8 = a2[1]; /*0x4ac357*/
          this->q11DC = *a2; /*0x4ac35f*/
          v2 = a2[1]; /*0x4ac365*/
          this->q11E0 = v2; /*0x4ac368*/
        }
      }
    }
  }
  return v2; /*0x4ac36e*/
}
} // namespace gamemd
// 0x4AE4F0
namespace gamemd {
void * DisplayClass::Draw(int a2)
{
  int v3; // esi
  int v4; // edi
  _DWORD *v5; // eax
  int v6; // ecx
  wchar_t *result; // eax
  int v8; // ecx
  int v9; // esi
  _DWORD *v10; // eax
  _WORD *v11; // eax
  int *v12; // eax
  int v13; // [esp-4h] [ebp-38h]
  int v14; // [esp+8h] [ebp-2Ch] BYREF
  int v15; // [esp+Ch] [ebp-28h] BYREF
  int v16; // [esp+10h] [ebp-24h] BYREF
  int v17[2]; // [esp+14h] [ebp-20h] BYREF
  _BYTE v18[12]; // [esp+1Ch] [ebp-18h] BYREF
  int v19[3]; // [esp+28h] [ebp-Ch] BYREF

  if ( a2 < 500 || a2 > 900 || this->Stub() ) /*0x4ae513*/
    return 0; /*0x4ae513*/
  v3 = DSurface_ViewBounds; /*0x4ae524*/
  g_Map_VisibleRect = g_Map_VisibleRect; /*0x4ae531*/
  v5 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)g_WWMouseClass_Instance + 52))( /*0x4ae538*/
                   g_WWMouseClass_Instance,
                   v18);
  v6 = v5[1]; /*0x4ae54a*/
  v17[0] = *v5 - v3; /*0x4ae54d*/
  v17[1] = v6 - g_Map_VisibleRect; /*0x4ae557*/
  Tactical::MouseOver(v17, (__int16 *)&v16, v19, &v15, (bool *)&v14 + 3, (bool *)&a2); /*0x4ae571*/
  if ( byte_A8F7D8 ) /*0x4ae57e*/
  {
    swprintf(&word_8A0630, (const size_t)aDD_2, (const wchar_t *const)(v19[0] / 256), v19[1] / 256); /*0x4ae5ac*/
    return &word_8A0630; /*0x4ae5be*/
  }
  if ( (*((_BYTE *)Coord::To_Cell(&MapClass_Instance, v19) + 300) & 8) == 0 && g_hWnd ) /*0x4ae5e0*/
    return GetStringCSF(aTxtShadow, 0, aDRa2mdpostDisp, 5048); /*0x4ae5fd*/
  v8 = v15; /*0x4ae600*/
  if ( !v15 ) /*0x4ae606*/
    return 0; /*0x4ae606*/
  if ( (*(_BYTE *)(v15 + 20) & 1) != 0 ) /*0x4ae610*/
  {
    v9 = v15; /*0x4ae61c*/
    if ( !*(_BYTE *)(v15 + 1050) ) /*0x4ae616*/
    {
      if ( *(_DWORD *)(v15 + 544) == 2 ) /*0x4ae629*/
      {
        v13 = *((_DWORD *)HouseClass_Player + 12); /*0x4ae635*/
        v10 = (_DWORD *)(*(int (__stdcall **)(_BYTE *))(*(_DWORD *)v15 + 72))(v18); /*0x4ae63b*/
        v11 = Coord::To_Cell(&MapClass_Instance, v10); /*0x4ae644*/
        if ( !Cell::IsPassableOffset(v11, v13) ) /*0x4ae64b*/
          return 0; /*0x4ae64b*/
      }
      if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v9 + 132))(v9) + 3226) ) /*0x4ae65e*/
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
  result = (wchar_t *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 144))(v8); /*0x4ae672*/
  if ( !v9 ) /*0x4ae67a*/
  {
    v12 = (int *)CellCoord::To_CellObj(this, (__int16 *)&v16); /*0x4ae683*/
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
    TacticalClass::ResetScrollBounds(); /*0x4aeadd*/
  *(&this->u32_71C9) = 0; /*0x4aeae2*/
  *(&this->u32_7200) = 0; /*0x4aeae9*/
  byte_A8ED9D = 1; /*0x4aeaf0*/
  return (0, 0); /*0x4aeb02*/
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
    return DisplayClass::InsertPriorityText((_DWORD *)this, aP1) != 0; /*0x5519ca*/
  v5 = *(_DWORD *)(this + 8); /*0x5519cf*/
  if ( *(_DWORD *)(this + 16) >= v5 ) /*0x5519d7*/
  {
    if ( !*(_BYTE *)(this + 13) && v5 ) /*0x5519e2*/
      return 0; /*0x5519e2*/
    v6 = *(_DWORD *)(this + 20); /*0x5519e4*/
    if ( v6 <= 0 || !(*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)this + 8))(this, v5 + v6, 0) ) /*0x5519f4*/
      return 0; /*0x551a04*/
  }
  v7 = *(_DWORD *)(this + 16); /*0x551a0a*/
  v8 = *(_DWORD *)(this + 4); /*0x551a0d*/
  *(_DWORD *)(this + 16) = v7 + 1; /*0x551a13*/
  *(_DWORD *)(v8 + 4 * v7) = aP1; /*0x551a1a*/
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

  v3 = *(this + 2); /*0x551a93*/
  if ( *(this + 4) >= v3 ) /*0x551a9b*/
  {
    if ( !*((_BYTE *)this + 13) && v3 ) /*0x551aa6*/
      return 0; /*0x551aa6*/
    v4 = *(this + 5); /*0x551aa8*/
    if ( v4 <= 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, v3 + v4, 0) ) /*0x551ab8*/
      return 0; /*0x551abf*/
  }
  for ( i = 0; i < *(this + 4); ++i ) /*0x551ad2*/
  {
    if ( DisplayClass::checkScreenBounds(*(void **)(*(this + 1) + 4 * i), a2) ) /*0x551adb*/
      break; /*0x551ae2*/
  }
  for ( j = *(this + 4) - 1; j >= i; *(_DWORD *)(*(this + 1) + 4 * j + 8) = *(_DWORD *)(*(this + 1) + 4 * j + 4) ) /*0x551af2*/
    --j; /*0x551af7*/
  *(_DWORD *)(*(this + 1) + 4 * i) = a2; /*0x551b07*/
  ++*(this + 4); /*0x551b0f*/
  return 1; /*0x551ac1*/
}
} // namespace gamemd
// 0x5F6220
namespace gamemd {
int DisplayClass::checkScreenBounds(int a2)
{
  int v3; // edi

  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 184))(a2); /*0x5f6234*/
  return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 184))(this) > v3; /*0x5f623e*/
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
  v4 = *(&this->q1547); /*0x6d85dc*/
  result = v4 + aP2 * dword_B0CE38[2 * aP1]; /*0x6d85fc*/
  if ( v4 != result || *(&this->q1548) != *(&this->q1548) + aP2 * dword_B0CE3C[2 * aP1] ) /*0x6d8606*/
  {
    v6 = *(&this->q1582); /*0x6d8612*/
    v7 = aP2 * dword_B0CE3C[2 * aP1]; /*0x6d8618*/
    *(&this->q1581) += aP2 * dword_B0CE38[2 * aP1]; /*0x6d861a*/
    result = v7 + v6; /*0x6d8620*/
    *(&this->q1582) = result; /*0x6d8622*/
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
  aP1 = aP1; /*0x6da2d4*/
  v4 = *(&this->q1547); /*0x6da2d8*/
  v5 = *(&this->q1548); /*0x6da2de*/
  v6 = v4 + dword_B0CD98[2 * aP1]; /*0x6da2f2*/
  v7 = v5 + dword_B0CD9C[2 * aP1]; /*0x6da2f4*/
  if ( v6 != v4 || v7 != v5 ) /*0x6da2fc*/
  {
    v8 = v4 + dword_B0CD98[2 * aP1]; /*0x6da305*/
    v7 = v7; /*0x6da309*/
    if ( ClampCoordMap(&v8) ) /*0x6da30d*/
    {
      if ( !g_ArmageddonMode ) /*0x6da31d*/
      {
        v6 = v8; /*0x6da31f*/
        v7 = v7; /*0x6da323*/
      }
    }
    return dword_84291C[2 * (*(&this->q1548) - v7) + *(&this->q1547) - v6 + *(&this->q1548) - v7]; /*0x6da33c*/
  }
}
} // namespace gamemd
// 0x7BA4D0
namespace gamemd {
int DisplayClass::ReadFromBuffer(void * a1, signed int Size)
{
  int v5; // edx
  int v6; // eax
  signed int v7; // edi
  signed int v8; // eax

  result = 0; /*0x7ba4d4*/
  v5 = *(this + 3); /*0x7ba4d6*/
  if ( v5 && a1 && Size > 0 ) /*0x7ba4eb*/
  {
    v6 = this->q010; /*0x7ba4ed*/
    v7 = Size; /*0x7ba4f3*/
    if ( v6 ) /*0x7ba4f5*/
    {
      v8 = v6 - this->q018; /*0x7ba4fa*/
      v7 = Size; /*0x7ba4fc*/
      if ( Size >= v8 ) /*0x7ba500*/
        v7 = v8; /*0x7ba502*/
    }
    if ( v7 > 0 ) /*0x7ba506*/
      memcpy(a1, (const void *)(v5 + this->q018), v7); /*0x7ba510*/
    this->q018 += v7; /*0x7ba51d*/
    return v7; /*0x7ba520*/
  }
  return result; /*0x7ba523*/
}
} // namespace gamemd
// 0x4A9700
namespace gamemd {
void DisplayClass::Update(PowerClass * aP1, int a3)
{
  VectorCursor_uint_DynamicVectorClass_uint____13_::Count(aP1, a3); /*0x4a970a*/
}
} // namespace gamemd
// 0x4A9840
namespace gamemd {
bool DisplayClass::SetCoordVisible(IUnknown * aP0, MouseClass * aP1, char a3)
{
  if ( *aP1 ) /*0x4a9848*/
  {
    if ( !a3 ) /*0x4a9859*/
      return DisplayClass::GetCoordDelta(aP0) != -1; /*0x4a9875*/
  }
  else if ( !a3 ) /*0x4a9850*/
  {
    return 0; /*0x4a9854*/
  }
  DisplayClass::ScrollTacticalView(aP0, *aP1); /*0x4a9884*/
  return 1; /*0x4a9854*/
}
} // namespace gamemd
// 0x4AAC10
namespace gamemd {
int DisplayClass::ProcessTacticalMouseInput(char a2, int a3, int a4)
{
  int v5; // eax
  int *v6; // eax
  __int16 v8; // [esp+6h] [ebp-2Ah] BYREF
  int v9; // [esp+8h] [ebp-28h] BYREF
  int v10; // [esp+Ch] [ebp-24h] BYREF
  _DWORD v11[3]; // [esp+10h] [ebp-20h] BYREF
  int v12; // [esp+1Ch] [ebp-14h] BYREF
  int v13; // [esp+20h] [ebp-10h]
  int v14[3]; // [esp+24h] [ebp-Ch] BYREF

  v10 = 0; /*0x4aac1c*/
  v12 = 0; /*0x4aac24*/
  v13 = 0; /*0x4aac2c*/
  if ( (a2 & 0x55) != 0 ) /*0x4aac34*/
  {
    v5 = *((_DWORD *)g_BinkMoviePlayer + 1); /*0x4aac3d*/
    v12 = *(_DWORD *)g_BinkMoviePlayer; /*0x4aac40*/
    v13 = v5; /*0x4aac44*/
  }
  else
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 44))(g_WWMouseClass_Instance); /*0x4aac52*/
    (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 48))(g_WWMouseClass_Instance); /*0x4aac5d*/
    v6 = (int *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)g_WWMouseClass_Instance + 52))( /*0x4aac6d*/
                  g_WWMouseClass_Instance,
                  v11);
    v12 = *v6; /*0x4aac72*/
    v13 = v6[1]; /*0x4aac79*/
  }
  TacticalClass::TransformPixel((int)g_TacticalClass_Instance, v11, &v12); /*0x4aac8d*/
  v12 -= DSurface_ViewBounds; /*0x4aaca3*/
  v13 -= g_Map_VisibleRect; /*0x4aacb1*/
  Tactical::MouseOver(&v12, (__int16 *)&v9, v14, &v10, (bool *)&v8 + 1, (bool *)&a2); /*0x4aacd4*/
  if ( v9 != dword_88095C ) /*0x4aace5*/
    Tactical::MouseMove((int)&MapClass_Instance, v11, &v9); /*0x4aad04*/
  return COMObject::ActivateThunk(0, a3, 0); /*0x4aad19*/
}
} // namespace gamemd
// 0x4AE6B0
namespace gamemd {
HWND DisplayClass::Render()
{
  HWND result; // eax

  result = dword_B73554; /*0x4ae6b0*/
  if ( dword_B73554 ) /*0x4ae6b7*/
  {
    result = (HWND)CloseWindow(dword_B73554); /*0x4ae6ba*/
    dword_B73554 = 0; /*0x4ae6c0*/
  }
  return result; /*0x4ae6ca*/
}
} // namespace gamemd
// 0x4AE6F0
namespace gamemd {
int DisplayClass::SetSurface(unsigned int * a1)
{
  int *v1; // esi
  int result; // eax

  v1 = dword_8A0360; /*0x4ae6f6*/
  do /*0x4ae70c*/
  {
    result = LayerClass::Load(v1, a1); /*0x4ae6fe*/
    v1 += 6; /*0x4ae703*/
  }
  while ( (int)v1 < (int)&dbl_8A03D8 ); /*0x4ae70c*/
  return result; /*0x4ae70e*/
}
} // namespace gamemd
// 0x4AE720
namespace gamemd {
int DisplayClass::GetSurface(unsigned int * a1)
{
  int *v1; // esi
  int result; // eax

  v1 = dword_8A0360; /*0x4ae726*/
  do /*0x4ae740*/
  {
    result = LayerClass::Save(v1, a1); /*0x4ae72e*/
    if ( result < 0 ) /*0x4ae735*/
      break; /*0x4ae735*/
    v1 += 6; /*0x4ae737*/
  }
  while ( (int)v1 < (int)&dbl_8A03D8 ); /*0x4ae740*/
  return result; /*0x4ae742*/
}
} // namespace gamemd
// 0x4AEB50
namespace gamemd {
unsigned int * DisplayClass::loc_4AEB50(char a2)
{
    void *v3;
    v3 = (void *)this->ptr_4;
    *(void**)this = &vt_VectorClass_ObjectClass;
    if ( v3 && this->IsAllocated )
  {
    RA2_OPDEL(v3);
    this->ptr_4 = 0;
  }
    this->IsAllocated = 0;
    this->u32_8 = 0;
    if ( (a2 & 1) != 0 )
    RA2_OPDEL();
    return this;
}
} // namespace gamemd

// 0x4AEBB0
namespace gamemd {
unsigned int * DisplayClass::updateRenderState(char a2)
{
  GadgetClass::Dtor(); /*0x4aebb3*/
  if ( (a2 & 1) != 0 ) /*0x4aebbd*/
    RA2_OPDEL(); /*0x4aebc0*/
  return this; /*0x4aebca*/
}
} // namespace gamemd
// 0x4AEBF0
namespace gamemd {
DisplayClass * DisplayClass::Read(char a2)
{
  MapClass::Destruct(); /*0x4aebf3*/
  if ( (a2 & 1) != 0 ) /*0x4aebfd*/
    RA2_OPDEL(); /*0x4aec00*/
  return this; /*0x4aec0a*/
}
} // namespace gamemd
// 0x4AEC30
namespace gamemd {
int * DisplayClass::processDisplayMode(char a2)
{
  Vector::Clear((int)(this + 3)); /*0x4aec36*/
  Straw::Dtor(); /*0x4aec3d*/
  if ( (a2 & 1) != 0 ) /*0x4aec47*/
    RA2_OPDEL(); /*0x4aec4a*/
  return this; /*0x4aec54*/
}
} // namespace gamemd