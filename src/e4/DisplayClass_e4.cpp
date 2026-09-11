// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x487630
char DisplayClass::UpdateDisplayTimer()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_487630(_DWORD *this)
{
  int v1; // eax
  int v2; // edx
  int v3; // eax

  if ( *(this + 76) == 1 ) /*0x487637*/
    *(this + 76) = 0; /*0x487639*/
  v1 = *(this + 76) - 1; /*0x487649*/
  *(this + 76) = v1; /*0x48764a*/
  v2 = v1; /*0x487650*/
  v3 = *(this + 75); /*0x487652*/
  if ( (v3 & 8) != 0 && (v3 & 0x10) != 0 ) /*0x48765e*/
  {
    if ( v2 <= 0 ) /*0x48766f*/
    {
      v3 = *(this + 80); /*0x487671*/
      if ( (*(_BYTE *)(this + 80) & 0x20) == 0x20 ) /*0x48767f*/
      {
        LOBYTE(v3) = v3 & 0xDF; /*0x487681*/
        *(this + 80) = v3; /*0x487683*/
      }
    }
  }
  else if ( v2 <= 0 ) /*0x487662*/
  {
    LOBYTE(v3) = v3 | 0x18; /*0x487664*/
    *(this + 75) = v3; /*0x487666*/
  }
  return v3; /*0x48766c*/
}
}

// 0x487690
int DisplayClass::AdvanceFrameCounter()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_487690(int *this)
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
      LOBYTE(result) = result | 0x20; /*0x4876da*/
      *(this + 80) = result; /*0x4876dc*/
    }
  }
  return result; /*0x4876c7*/
}
}

// 0x4A8850
int DisplayClass::LoadTypeData()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall DisplayClass::_vt05(int *this)
{
  int *Viewport; // eax
  int v3; // edx
  int v4; // eax
  _DWORD v6[4]; // [esp+4h] [ebp-20h] BYREF
  int v7[4]; // [esp+14h] [ebp-10h] BYREF

  MapClass::Destru_vt05(this); /*0x4a8856*/
  MEMORY[0x8A03FC] = SearchMIXFile(aPlaceShp, 0); /*0x4a886e*/
  MEMORY[0x8A072C] = SearchMIXFile(MEMORY[0x820074], 0); /*0x4a887c*/
  Viewport = Display::GetViewport(v7); /*0x4a8881*/
  v6[0] = *Viewport; /*0x4a8888*/
  v6[1] = Viewport[1]; /*0x4a888f*/
  v6[2] = Viewport[2]; /*0x4a8896*/
  v3 = Viewport[3]; /*0x4a889e*/
  v4 = *this; /*0x4a88a1*/
  v6[3] = v3; /*0x4a88a6*/
  return (*(int (__thiscall **)(int *, _DWORD *))(v4 + 168))(this, v6); /*0x4a88b0*/
}
}

// 0x4A88C0
int DisplayClass::SetSize()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall DisplayClass::_vt07(int this)
{
  int *v2; // esi
  int result; // eax

  MapClass::Destru_vt07(this); /*0x4a88c3*/
  *(_DWORD *)(this + 4516) = 0; /*0x4a88cd*/
  this->DisplayClass_field_0x11A8 = 0; /*0x4a88d3*/
  *(_DWORD *)(this + 4524) = -1; /*0x4a88d9*/
  *(_DWORD *)(this + 4476) = 0; /*0x4a88df*/
  *(_DWORD *)(this + 4536) = -1; /*0x4a88e5*/
  *(_BYTE *)(this + 4528) = 0; /*0x4a88eb*/
  *(_BYTE *)(this + 4559) = 0; /*0x4a88f1*/
  *(_BYTE *)(this + 4560) = 0; /*0x4a88f7*/
  *(_BYTE *)(this + 4529) = 0; /*0x4a88fd*/
  *(_BYTE *)(this + 4530) = 0; /*0x4a8903*/
  v2 = MEMORY[0x8A0360]; /*0x4a8909*/
  do /*0x4a891e*/
  {
    result = (*(int (__thiscall **)(int *))(*v2 + 12))(v2); /*0x4a8912*/
    v2 += 6; /*0x4a8915*/
  }
  while ( (int)v2 < (int)&MEMORY[0x8A03D8] ); /*0x4a891e*/
  return result; /*0x4a8920*/
}
}

// 0x4A8930
char DisplayClass::ddtor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall DisplayClass::_vt08(void *this)
{
  char result; // al

  VectorCursor_uint_DynamicVectorClass_uint____13::Get(); /*0x4a8933*/
  result = MEMORY[0xA8ED6B]; /*0x4a8938*/
  if ( !MEMORY[0xA8ED6B] ) /*0x4a893f*/
  {
    Hash::Reset(MEMORY[0x8A06F8]); /*0x4a8946*/
    return (*(int (__thiscall **)(void *, int *))(*(_DWORD *)this + 48))(this, MEMORY[0x8A06F8]); /*0x4a8954*/
  }
  return result; /*0x4a8957*/
}
}

// 0x4A9700
void DisplayClass::Update(PowerClass * aP1, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall DisplayClass::Update(int *this, PowerClass *aP1, int a3)
{
  VectorCursor_uint_DynamicVectorClass_uint____13::Count(this, (int)aP1, a3); /*0x4a970a*/
}
}

// 0x4A9840
bool DisplayClass::SetCoordVisible(IUnknown * aP0, MouseClass * aP1, char a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __stdcall DisplayClass::SetCoordVisible(IUnknown *aP0, MouseClass *aP1, char a3)
{
  if ( aP1->field_0 ) /*0x4a9848*/
  {
    if ( !a3 ) /*0x4a9859*/
      return DisplayClass::GetCoordDelta(*(_DWORD **)&stru_87C374.__pad_579C[22548], (AbstractClass *)aP0) != -1; /*0x4a9875*/
  }
  else if ( !a3 ) /*0x4a9850*/
  {
    return 0; /*0x4a9854*/
  }
  DisplayClass::ScrollTacticalView(*(_DWORD **)&stru_87C374.__pad_579C[22548], aP0, (IUnknown *)aP1->field_0); /*0x4a9884*/
  return 1; /*0x4a9854*/
}
}

// 0x4A9890
char DisplayClass::UpdateCellPassability(short * a1, IUnknown * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall DisplayClass::UpdateCellPassability(_DWORD *this, __int16 *a1, IUnknown *aP2)
{
  IUnknown *v3; // esi
  IUnknown *v5; // ebp
  int v6; // eax
  int v7; // eax
  char AdjacentPassableMask; // al
  int v9; // eax
  char v10; // al
  int v11; // eax
  int v12; // edx
  __int16 v13; // cx
  IUnknown *v14; // edi
  int v15; // eax
  int v16; // eax
  int j; // ebp
  int v18; // edx
  __int16 v19; // cx
  Tactical *v20; // esi
  char v21; // al
  int v22; // eax
  int v23; // eax
  int k; // edi
  int v25; // edx
  __int16 v26; // cx
  Tactical *v27; // esi
  char v28; // al
  char v30; // [esp+Eh] [ebp-22h]
  bool v31; // [esp+Fh] [ebp-21h]
  IUnknown *v32; // [esp+10h] [ebp-20h] BYREF
  Tactical *i; // [esp+14h] [ebp-1Ch]
  IUnknown *v34; // [esp+18h] [ebp-18h]
  Tactical *v35; // [esp+1Ch] [ebp-14h]
  MouseClass *v36; // [esp+20h] [ebp-10h] BYREF
  IUnknown *v37; // [esp+24h] [ebp-Ch]
  IUnknown *v38; // [esp+28h] [ebp-8h]
  MouseClass *v39; // [esp+2Ch] [ebp-4h]

  v3 = (IUnknown *)a1; /*0x4a9896*/
  v5 = (IUnknown *)CellCoord::To_CellObj(this, a1); /*0x4a98a2*/
  v38 = v5; /*0x4a98a4*/
  v6 = v5->field_140; /*0x4a98a8*/
  v31 = (v6 & 2) == 0; /*0x4a98b9*/
  if ( (v6 & 2) == 0 || (v30 = 0, (v5->__pad_11C[16] & 8) == 0) ) /*0x4a98cd*/
    v30 = 1; /*0x4a98cf*/
  LOBYTE(v6) = v6 & 0xBD | 2; /*0x4a98da*/
  LOBYTE(v39) = v30; /*0x4a98dc*/
  v5->field_140 = v6; /*0x4a98e0*/
  v7 = *(_DWORD *)&v5->__pad_11C[16]; /*0x4a98e6*/
  LOBYTE(v7) = v7 | 8; /*0x4a98ec*/
  *(_DWORD *)&v5->__pad_11C[16] = v7; /*0x4a98f0*/
  AdjacentPassableMask = Cell::GetAdjacentPassableMask(a1, 0); /*0x4a98fd*/
  if ( AdjacentPassableMask != v5->__pad_11C[4] ) /*0x4a9908*/
  {
    v30 = 1; /*0x4a990a*/
    v5->__pad_11C[4] = AdjacentPassableMask; /*0x4a990f*/
  }
  if ( v5->__pad_11C[4] == -1 ) /*0x4a991c*/
  {
    v9 = *(_DWORD *)&v5->__pad_11C[16]; /*0x4a991e*/
    LOBYTE(v9) = v9 | 0x10; /*0x4a9924*/
    *(_DWORD *)&v5->__pad_11C[16] = v9; /*0x4a9926*/
  }
  v10 = Cell::GetAdjacentPassableMask(a1, 1); /*0x4a9935*/
  if ( v10 != v5->__pad_11C[5] ) /*0x4a9940*/
  {
    v30 = 1; /*0x4a9942*/
    v5->__pad_11C[5] = v10; /*0x4a9947*/
  }
  if ( v5->__pad_11C[5] == -1 ) /*0x4a9954*/
  {
    v11 = v5->field_140; /*0x4a9956*/
    LOBYTE(v11) = v11 | 1; /*0x4a995c*/
    v5->field_140 = v11; /*0x4a995e*/
  }
  if ( v30 ) /*0x4a996a*/
    Tactical::AddCellToDrawList(*(int *)&MEMORY[0x87F8E4].__pad_5568[9432], v5); /*0x4a9973*/
  for ( i = 0; (int)i < 8; i = (Tactical *)((char *)i + 1) ) /*0x4a9979*/
  {
    v12 = (unsigned __int8)i & 7; /*0x4a9985*/
    v13 = LOWORD(v3->field_0) + *((_WORD *)&MEMORY[0x89F688].field_0 + 2 * v12); /*0x4a9997*/
    LOWORD(v12) = HIWORD(v3->field_0) + *((_WORD *)&MEMORY[0x89F68A] + 2 * v12); /*0x4a999e*/
    LOWORD(v34) = v13; /*0x4a99a2*/
    HIWORD(v34) = v12; /*0x4a99ab*/
    v32 = v34; /*0x4a99b7*/
    v14 = (IUnknown *)CellCoord::To_CellObj(this, (__int16 *)&v32); /*0x4a99c5*/
    if ( v32 != (IUnknown *)v3->field_0 && (v14->__pad_11C[16] & 0x10) == 0 ) /*0x4a99e2*/
    {
      v15 = Cell::GetAdjacentPassableMask((__int16 *)&v32, 0); /*0x4a99f5*/
      if ( v15 == -1 ) /*0x4a99fd*/
      {
        v16 = *(_DWORD *)&v14->__pad_11C[16]; /*0x4a9a03*/
        if ( (v16 & 8) == 0 ) /*0x4a9a0b*/
          goto LABEL_19; /*0x4a9a0b*/
        LOBYTE(v16) = v16 | 0x10; /*0x4a9a26*/
        *(_DWORD *)&v14->__pad_11C[16] = v16; /*0x4a9a29*/
        Tactical::AddCellToDrawList(*(int *)&MEMORY[0x87F8E4].__pad_5568[9432], v14); /*0x4a9a35*/
        for ( j = 0; j < 8; ++j ) /*0x4a9a3a*/
        {
          v18 = j & 7; /*0x4a9a3e*/
          v19 = (_WORD)v32 + *((_WORD *)&MEMORY[0x89F688].field_0 + 2 * v18); /*0x4a9a50*/
          LOWORD(v18) = HIWORD(v32) + *((_WORD *)&MEMORY[0x89F68A] + 2 * v18); /*0x4a9a59*/
          LOWORD(v35) = v19; /*0x4a9a5e*/
          HIWORD(v35) = v18; /*0x4a9a67*/
          v36 = (MouseClass *)v35; /*0x4a9a73*/
          v20 = (Tactical *)CellCoord::To_CellObj(this, (__int16 *)&v36); /*0x4a9a89*/
          v21 = Cell::GetAdjacentPassableMask((__int16 *)&v36, 0); /*0x4a9a8b*/
          if ( v21 != v20->__pad_11F[1] ) /*0x4a9a96*/
          {
            v20->__pad_11F[1] = v21; /*0x4a9a98*/
            Tactical::AddCellToDrawList(*(int *)&MEMORY[0x87F8E4].__pad_5568[9432], (IUnknown *)v20); /*0x4a9aa5*/
          }
        }
        v5 = v38; /*0x4a9ab0*/
        v3 = (IUnknown *)a1; /*0x4a9ab4*/
      }
      else
      {
        if ( v15 != -2 && (v14->__pad_11C[16] & 8) == 0 ) /*0x4a9ac6*/
        {
LABEL_19:
          (*(void (__thiscall **)(_DWORD *, IUnknown **, IUnknown *))(*this + 144))(this, &v32, aP2); /*0x4a9a0d*/
          goto LABEL_30; /*0x4a9a21*/
        }
        if ( v15 >= 0 && v15 != v14->__pad_11C[4] ) /*0x4a9aeb*/
        {
          v14->__pad_11C[4] = v15; /*0x4a9aed*/
          Tactical::AddCellToDrawList(*(int *)&MEMORY[0x87F8E4].__pad_5568[9432], v14); /*0x4a9afa*/
        }
      }
    }
LABEL_30:
    if ( v32 != (IUnknown *)v3->field_0 && (v14->field_140 & 1) == 0 ) /*0x4a9b1f*/
    {
      v22 = Cell::GetAdjacentPassableMask((__int16 *)&v32, 1); /*0x4a9b32*/
      if ( v22 == -1 ) /*0x4a9b3a*/
      {
        v23 = v14->field_140; /*0x4a9b40*/
        if ( (v23 & 2) == 0 ) /*0x4a9b48*/
          goto LABEL_34; /*0x4a9b48*/
        LOBYTE(v23) = v23 | 1; /*0x4a9b63*/
        v14->field_140 = v23; /*0x4a9b66*/
        Tactical::AddCellToDrawList(*(int *)&MEMORY[0x87F8E4].__pad_5568[9432], v14); /*0x4a9b72*/
        for ( k = 0; k < 8; ++k ) /*0x4a9b77*/
        {
          v25 = k & 7; /*0x4a9b7b*/
          v26 = (_WORD)v32 + *((_WORD *)&MEMORY[0x89F688].field_0 + 2 * v25); /*0x4a9b8d*/
          LOWORD(v25) = HIWORD(v32) + *((_WORD *)&MEMORY[0x89F68A] + 2 * v25); /*0x4a9b96*/
          LOWORD(v37) = v26; /*0x4a9b9b*/
          HIWORD(v37) = v25; /*0x4a9ba4*/
          v36 = (MouseClass *)v37; /*0x4a9bb0*/
          v27 = (Tactical *)CellCoord::To_CellObj(this, (__int16 *)&v36); /*0x4a9bc6*/
          v28 = Cell::GetAdjacentPassableMask((__int16 *)&v36, 1); /*0x4a9bc8*/
          if ( v28 != v27->__pad_11F[2] ) /*0x4a9bd3*/
          {
            v27->__pad_11F[2] = v28; /*0x4a9bd5*/
            Tactical::AddCellToDrawList(*(int *)&MEMORY[0x87F8E4].__pad_5568[9432], (IUnknown *)v27); /*0x4a9be2*/
          }
        }
        v5 = v38; /*0x4a9bed*/
        v3 = (IUnknown *)a1; /*0x4a9bf1*/
      }
      else
      {
        if ( v22 != -2 && (v14->field_140 & 2) == 0 ) /*0x4a9c03*/
        {
LABEL_34:
          (*(void (__thiscall **)(_DWORD *, IUnknown **, IUnknown *))(*this + 144))(this, &v32, aP2); /*0x4a9b4a*/
          continue; /*0x4a9b5e*/
        }
        if ( v22 >= 0 && v22 != v14->__pad_11C[5] ) /*0x4a9c28*/
        {
          v14->__pad_11C[5] = v22; /*0x4a9c2a*/
          Tactical::AddCellToDrawList(*(int *)&MEMORY[0x87F8E4].__pad_5568[9432], v14); /*0x4a9c37*/
        }
      }
    }
  }
  if ( v30 ) /*0x4a9c55*/
    CellClass::SpiralFindClosest((int)v5, (int)aP2, (char)v39); /*0x4a9c67*/
  if ( (v5->field_140 & 2) != 0 && v31 && (MEMORY[0xA8B230]->nextScenario[0] & 0x1000) != 0 ) /*0x4a9c88*/
    CellClass::UpdateZone(v5); /*0x4a9c8c*/
  return v30; /*0x4a9c91*/
}
}

// 0x4A9DD0
char DisplayClass::ProcessCellReveal(MouseClass * aP1, IUnknown * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall DisplayClass::ProcessCellReveal(_DWORD *this, MouseClass *aP1, IUnknown *aP2)
{
  IUnknown *v5; // edi
  int v6; // eax
  char v7; // cl
  char AdjacentPassableMask; // al
  int v9; // eax
  int v10; // eax
  __int16 v11; // dx
  IUnknown *v13; // esi
  int eax10; // eax
  int v14; // eax
  int j; // edi
  int v16; // edx
  __int16 v17; // cx
  IUnknown *v19; // esi
  char al14; // al
  bool v21; // [esp+Fh] [ebp-1Dh]
  IUnknown *v22; // [esp+10h] [ebp-1Ch] BYREF
  int i; // [esp+14h] [ebp-18h]
  IUnknown *v25; // [esp+18h] [ebp-14h]
  IUnknown *v26; // [esp+1Ch] [ebp-10h]
  IUnknown *varC; // [esp+20h] [ebp-Ch] BYREF
  IUnknown *v27; // [esp+24h] [ebp-8h]
  int v28; // [esp+28h] [ebp-4h]
  char aP1a; // [esp+30h] [ebp+4h]

  v5 = (IUnknown *)CellCoord::To_CellObj(this, (__int16 *)aP1); /*0x4a9de2*/
  v27 = v5; /*0x4a9de7*/
  v6 = v5->field_140; /*0x4a9deb*/
  v7 = v6; /*0x4a9df1*/
  LOBYTE(v6) = v6 & 0xBD | 2; /*0x4a9dfc*/
  v21 = (v7 & 2) == 0; /*0x4a9dfe*/
  aP1a = v21; /*0x4a9e02*/
  LOBYTE(v28) = v21; /*0x4a9e06*/
  v5->field_140 = v6; /*0x4a9e0a*/
  AdjacentPassableMask = Cell::GetAdjacentPassableMask((__int16 *)aP1, 1); /*0x4a9e16*/
  if ( AdjacentPassableMask != v5->__pad_11C[5] ) /*0x4a9e21*/
  {
    aP1a = 1; /*0x4a9e23*/
    v5->__pad_11C[5] = AdjacentPassableMask; /*0x4a9e28*/
  }
  if ( v5->__pad_11C[5] == -1 ) /*0x4a9e35*/
  {
    v9 = v5->field_140; /*0x4a9e37*/
    LOBYTE(v9) = v9 | 1; /*0x4a9e3d*/
    v5->field_140 = v9; /*0x4a9e3f*/
  }
  if ( aP1a ) /*0x4a9e4b*/
    Tactical::AddCellToDrawList(*(int *)&MEMORY[0x87F8E4].__pad_5568[9432], v5); /*0x4a9e54*/
  for ( i = 0; i < 8; ++i ) /*0x4a9e5a*/
  {
    v10 = i & 7; /*0x4a9e69*/
    v11 = HIWORD(aP1->field_0) + *((_WORD *)&MEMORY[0x89F68A] + 2 * v10); /*0x4a9e7c*/
    LOWORD(v25) = *((_WORD *)&MEMORY[0x89F688].field_0 + 2 * v10) + LOWORD(aP1->field_0); /*0x4a9e87*/
    HIWORD(v25) = v11; /*0x4a9e90*/
    v22 = v25; /*0x4a9e9c*/
    v13 = (IUnknown *)CellCoord::To_CellObj(this, (__int16 *)&v22); /*0x4a9eaa*/
    if ( v22 != (IUnknown *)aP1->field_0 && (v13->field_140 & 1) == 0 ) /*0x4a9ec7*/
    {
      eax10 = Cell::GetAdjacentPassableMask((__int16 *)&v22, 1); /*0x4a9eda*/
      if ( eax10 == -1 ) /*0x4a9ee2*/
      {
        v14 = v13->field_140; /*0x4a9ee8*/
        if ( (v14 & 2) == 0 ) /*0x4a9ef0*/
          goto LABEL_12; /*0x4a9ef0*/
        LOBYTE(v14) = v14 | 1; /*0x4a9f0c*/
        v13->field_140 = v14; /*0x4a9f0f*/
        Tactical::AddCellToDrawList(*(int *)&MEMORY[0x87F8E4].__pad_5568[9432], v13); /*0x4a9f1b*/
        for ( j = 0; j < 8; ++j ) /*0x4a9f20*/
        {
          v16 = j & 7; /*0x4a9f29*/
          v17 = *((_WORD *)&MEMORY[0x89F688].field_0 + 2 * v16) + (_WORD)v22; /*0x4a9f2c*/
          LOWORD(v16) = *((_WORD *)&MEMORY[0x89F68A] + 2 * v16); /*0x4a9f3b*/
          LOWORD(v26) = v17; /*0x4a9f43*/
          HIWORD(v26) = HIWORD(v22) + v16; /*0x4a9f54*/
          varC = v26; /*0x4a9f5d*/
          v19 = (IUnknown *)CellCoord::To_CellObj(this, (__int16 *)&varC); /*0x4a9f73*/
          al14 = Cell::GetAdjacentPassableMask((__int16 *)&varC, 1); /*0x4a9f75*/
          if ( al14 != v19->__pad_11C[5] ) /*0x4a9f80*/
          {
            v19->__pad_11C[5] = al14; /*0x4a9f82*/
            Tactical::AddCellToDrawList(*(int *)&MEMORY[0x87F8E4].__pad_5568[9432], v19); /*0x4a9f8f*/
          }
        }
        v5 = v27; /*0x4a9f9a*/
      }
      else
      {
        if ( eax10 != -2 && (v13->field_140 & 2) == 0 ) /*0x4a9fac*/
        {
LABEL_12:
          (*(void (__thiscall **)(_DWORD *, IUnknown **, IUnknown *))(*this + 152))(this, &v22, aP2); /*0x4a9ef2*/
          continue; /*0x4a9f07*/
        }
        if ( eax10 >= 0 && eax10 != v13->__pad_11C[5] ) /*0x4a9fd2*/
        {
          v13->__pad_11C[5] = eax10; /*0x4a9fd4*/
          Tactical::AddCellToDrawList(*(int *)&MEMORY[0x87F8E4].__pad_5568[9432], v13); /*0x4a9fe1*/
        }
      }
    }
  }
  if ( aP1a ) /*0x4a9fff*/
    CellClass::SpiralFindClosest((int)v5, (int)aP2, v28); /*0x4aa011*/
  if ( (v5->field_140 & 2) != 0 && v21 && (MEMORY[0xA8B230]->nextScenario[0] & 0x1000) != 0 ) /*0x4aa032*/
    CellClass::UpdateZone(v5); /*0x4aa036*/
  return aP1a; /*0x4aa03b*/
}
}

// 0x4AA050
bool DisplayClass::RevealFogCell(short * a1, IUnknown * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall DisplayClass::RevealFogCell(_DWORD *this, __int16 *a1, IUnknown *aP2)
{
  IUnknown *v3; // edi
  Tactical *v5; // esi
  int v6; // eax
  char v7; // bl
  bool v8; // bl
  char AdjacentPassableMask; // al
  int v10; // eax
  int v11; // eax
  __int16 v12; // dx
  IUnknown *v14; // esi
  int eax10; // eax
  int v15; // eax
  int j; // edi
  int v17; // edx
  __int16 v18; // cx
  IUnknown *v20; // esi
  char al14; // al
  int v22; // [esp+10h] [ebp-1Ch] BYREF
  int i; // [esp+14h] [ebp-18h]
  int v24; // [esp+18h] [ebp-14h]
  Tactical *v25; // [esp+1Ch] [ebp-10h]
  Tactical *v27; // [esp+20h] [ebp-Ch] BYREF
  int var8; // [esp+24h] [ebp-8h]
  Tactical *v28; // [esp+28h] [ebp-4h]

  v3 = (IUnknown *)a1; /*0x4aa057*/
  v5 = (Tactical *)CellCoord::To_CellObj(this, a1); /*0x4aa063*/
  v28 = v5; /*0x4aa068*/
  v6 = *(_DWORD *)&v5->__pad_11F[13]; /*0x4aa06c*/
  v7 = v6; /*0x4aa072*/
  LOBYTE(v6) = v6 | 8; /*0x4aa074*/
  v8 = (v7 & 8) == 0; /*0x4aa07b*/
  *(_DWORD *)&v5->__pad_11F[13] = v6; /*0x4aa07e*/
  LOBYTE(var8) = v8; /*0x4aa08a*/
  AdjacentPassableMask = Cell::GetAdjacentPassableMask(a1, 0); /*0x4aa08e*/
  if ( AdjacentPassableMask != v5->__pad_11F[1] ) /*0x4aa099*/
  {
    v8 = 1; /*0x4aa09b*/
    v5->__pad_11F[1] = AdjacentPassableMask; /*0x4aa09d*/
  }
  if ( v5->__pad_11F[1] == -1 ) /*0x4aa0aa*/
  {
    v10 = *(_DWORD *)&v5->__pad_11F[13]; /*0x4aa0ac*/
    LOBYTE(v10) = v10 | 0x10; /*0x4aa0b2*/
    *(_DWORD *)&v5->__pad_11F[13] = v10; /*0x4aa0b4*/
  }
  if ( v8 ) /*0x4aa0bc*/
    Tactical::AddCellToDrawList(*(int *)&MEMORY[0x87F8E4].__pad_5568[9432], (IUnknown *)v5); /*0x4aa0c5*/
  for ( i = 0; i < 8; ++i ) /*0x4aa0ca*/
  {
    v11 = i & 7; /*0x4aa0d6*/
    v12 = HIWORD(v3->field_0) + *((_WORD *)&MEMORY[0x89F68A] + 2 * v11); /*0x4aa0ec*/
    LOWORD(v24) = LOWORD(v3->field_0) + *((_WORD *)&MEMORY[0x89F688].field_0 + 2 * v11); /*0x4aa0f7*/
    HIWORD(v24) = v12; /*0x4aa100*/
    v22 = v24; /*0x4aa10c*/
    v14 = (IUnknown *)CellCoord::To_CellObj(this, (__int16 *)&v22); /*0x4aa11a*/
    if ( v22 != v3->field_0 && (v14->__pad_11C[16] & 0x10) == 0 ) /*0x4aa137*/
    {
      eax10 = Cell::GetAdjacentPassableMask((__int16 *)&v22, 0); /*0x4aa14a*/
      if ( eax10 == -1 ) /*0x4aa152*/
      {
        v15 = *(_DWORD *)&v14->__pad_11C[16]; /*0x4aa158*/
        if ( (v15 & 8) == 0 ) /*0x4aa160*/
          goto LABEL_12; /*0x4aa160*/
        LOBYTE(v15) = v15 | 0x10; /*0x4aa17c*/
        *(_DWORD *)&v14->__pad_11C[16] = v15; /*0x4aa17f*/
        Tactical::AddCellToDrawList(*(int *)&MEMORY[0x87F8E4].__pad_5568[9432], v14); /*0x4aa18b*/
        for ( j = 0; j < 8; ++j ) /*0x4aa190*/
        {
          v17 = j & 7; /*0x4aa194*/
          v18 = v22 + *((_WORD *)&MEMORY[0x89F688].field_0 + 2 * v17); /*0x4aa1a6*/
          LOWORD(v17) = HIWORD(v22) + *((_WORD *)&MEMORY[0x89F68A] + 2 * v17); /*0x4aa1af*/
          LOWORD(v25) = v18; /*0x4aa1b4*/
          HIWORD(v25) = v17; /*0x4aa1bd*/
          v27 = v25; /*0x4aa1c9*/
          v20 = (IUnknown *)CellCoord::To_CellObj(this, (__int16 *)&v27); /*0x4aa1df*/
          al14 = Cell::GetAdjacentPassableMask((__int16 *)&v27, 0); /*0x4aa1e1*/
          if ( al14 != v20->__pad_11C[4] ) /*0x4aa1ec*/
          {
            v20->__pad_11C[4] = al14; /*0x4aa1ee*/
            Tactical::AddCellToDrawList(*(int *)&MEMORY[0x87F8E4].__pad_5568[9432], v20); /*0x4aa1fb*/
          }
        }
        v3 = (IUnknown *)a1; /*0x4aa206*/
      }
      else
      {
        if ( eax10 != -2 && (v14->__pad_11C[16] & 8) == 0 ) /*0x4aa218*/
        {
LABEL_12:
          (*(void (__thiscall **)(_DWORD *, int *, IUnknown *))(*this + 156))(this, &v22, aP2); /*0x4aa162*/
          continue; /*0x4aa177*/
        }
        if ( eax10 >= 0 && eax10 != v14->__pad_11C[4] ) /*0x4aa23e*/
        {
          v14->__pad_11C[4] = eax10; /*0x4aa240*/
          Tactical::AddCellToDrawList(*(int *)&MEMORY[0x87F8E4].__pad_5568[9432], v14); /*0x4aa24d*/
        }
      }
    }
  }
  if ( v8 ) /*0x4aa266*/
    CellClass::SpiralFindClosest((int)v28, (int)aP2, var8); /*0x4aa27c*/
  return v8; /*0x4aa281*/
}
}

// 0x4AAC10
int DisplayClass::ProcessTacticalMouseInput(char a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall DisplayClass::ProcessTacticalMouseInput(TacticalClass_DisplayClass *this, char a2, int a3, int a4)
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
    v5 = MEMORY[0x87F770]->headNode[0]; /*0x4aac3d*/
    v12 = *(_DWORD *)MEMORY[0x87F770]->__pad_0; /*0x4aac40*/
    v13 = v5; /*0x4aac44*/
  }
  else
  {
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[10228] + 44))(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10228]); /*0x4aac52*/
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[10228] + 48))(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10228]); /*0x4aac5d*/
    v6 = (int *)(*(int (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[10228] + 52))( /*0x4aac6d*/
                  *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10228],
                  v11);
    v12 = *v6; /*0x4aac72*/
    v13 = v6[1]; /*0x4aac79*/
  }
  TacticalClass::TransformPixel(*(int *)&MEMORY[0x87F8E4].__pad_5568[9432], (IUnknown *)v11, (MouseClass *)&v12); /*0x4aac8d*/
  v12 -= *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8532]; /*0x4aaca3*/
  v13 -= *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536]; /*0x4aacb1*/
  Tactical::MouseOver(&v12, (__int16 *)&v9, v14, &v10, (bool *)&v8 + 1, (bool *)&a2); /*0x4aacd4*/
  if ( v9 != *(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3748] ) /*0x4aace5*/
    Tactical::MouseMove((int)&MEMORY[0x87F7E8], (MouseClass *)v11, (MouseClass *)&v9); /*0x4aad04*/
  return COMObject::ActivateThunk(this, 0, a3, 0); /*0x4aad19*/
}
}

// 0x4AC310
char DisplayClass::InitViewBounds(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall TacticalClass_InitViewBounds(int this, _DWORD *a2)
{
  int v2; // eax

  LOBYTE(v2) = (unsigned char)this->DisplayClass_field_0x11B0; /*0x4ac310*/
  if ( !(_BYTE)v2 ) /*0x4ac318*/
  {
    LOBYTE(v2) = *(_BYTE *)(this + 4530); /*0x4ac31a*/
    if ( !(_BYTE)v2 ) /*0x4ac322*/
    {
      LOBYTE(v2) = *(_BYTE *)(this + 4529); /*0x4ac324*/
      if ( !(_BYTE)v2 && *(_DWORD *)(this + 4536) == -1 ) /*0x4ac335*/
      {
        v2 = this->DisplayClass_field_0x11A8; /*0x4ac337*/
        if ( !v2 ) /*0x4ac33f*/
        {
          *(_BYTE *)(this + 4560) = 1; /*0x4ac345*/
          this->DisplayClass_field_0x11D4 = *a2; /*0x4ac34e*/
          this->DisplayClass_field_0x11D8 = a2[1]; /*0x4ac357*/
          this->DisplayClass_field_0x11DC = *a2; /*0x4ac35f*/
          v2 = a2[1]; /*0x4ac365*/
          this->DisplayClass_field_0x11E0 = v2; /*0x4ac368*/
        }
      }
    }
  }
  return v2; /*0x4ac36e*/
}
}

// 0x4AE4F0
wchar_t * DisplayClass::Draw(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
wchar_t *__thiscall DisplayClass::_vt33(_DWORD *this, int a2)
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

  if ( a2 < 500 || a2 > 900 || (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 104))(this) ) /*0x4ae513*/
    return 0; /*0x4ae513*/
  v3 = MEMORY[0x886FA0]; /*0x4ae524*/
  v4 = MEMORY[0x886FA4]; /*0x4ae531*/
  v5 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)MEMORY[0x887640] + 52))(MEMORY[0x887640], v18); /*0x4ae538*/
  v6 = v5[1]; /*0x4ae54a*/
  v17[0] = *v5 - v3; /*0x4ae54d*/
  v17[1] = v6 - v4; /*0x4ae557*/
  Tactical::MouseOver(v17, (__int16 *)&v16, v19, &v15, (bool *)&v14 + 3, (bool *)&a2); /*0x4ae571*/
  if ( MEMORY[0xA8F7D8] ) /*0x4ae57e*/
  {
    swprintf(&MEMORY[0x8A0630], (const size_t)aDD_2, (const wchar_t *const)(v19[0] / 256), v19[1] / 256); /*0x4ae5ac*/
    return &MEMORY[0x8A0630]; /*0x4ae5be*/
  }
  if ( (*((_BYTE *)Coord::To_Cell(&MEMORY[0x87F7E8], v19) + 300) & 8) == 0 && g_hWnd ) /*0x4ae5e0*/
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
        v11 = Coord::To_Cell(&MEMORY[0x87F7E8], v10); /*0x4ae644*/
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
}

// 0x4AE6B0
HWND DisplayClass::Render()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HWND DisplayClass::_vt34()
{
  HWND result; // eax

  result = hWnd; /*0x4ae6b0*/
  if ( hWnd ) /*0x4ae6b7*/
  {
    result = (HWND)CloseWindow(hWnd); /*0x4ae6ba*/
    hWnd = 0; /*0x4ae6c0*/
  }
  return result; /*0x4ae6ca*/
}
}

// 0x4AE6F0
int DisplayClass::SetSurface(unsigned int * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall DisplayClass::_vt30(_DWORD *a1)
{
  int *v1; // esi
  int result; // eax

  v1 = MEMORY[0x8A0360]; /*0x4ae6f6*/
  do /*0x4ae70c*/
  {
    result = LayerClass::Load(v1, a1); /*0x4ae6fe*/
    v1 += 6; /*0x4ae703*/
  }
  while ( (int)v1 < (int)&MEMORY[0x8A03D8] ); /*0x4ae70c*/
  return result; /*0x4ae70e*/
}
}

// 0x4AE720
int DisplayClass::GetSurface(unsigned int * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall DisplayClass::_vt31(_DWORD *a1)
{
  int *v1; // esi
  int result; // eax

  v1 = MEMORY[0x8A0360]; /*0x4ae726*/
  do /*0x4ae740*/
  {
    result = LayerClass::Save(v1, a1); /*0x4ae72e*/
    if ( result < 0 ) /*0x4ae735*/
      break; /*0x4ae735*/
    v1 += 6; /*0x4ae737*/
  }
  while ( (int)v1 < (int)&MEMORY[0x8A03D8] ); /*0x4ae740*/
  return result; /*0x4ae742*/
}
}

// 0x4AEAD0
int DisplayClass::ExitMode()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall TacticalClass_ExitMode(_BYTE *this)
{
  if ( MEMORY[0x887324] ) /*0x4aeadb*/
    TacticalClass::ResetScrollBounds(); /*0x4aeadd*/
  *(this + 4559) = 0; /*0x4aeae2*/
  *(this + 4560) = 0; /*0x4aeae9*/
  MEMORY[0xA8ED9D] = 1; /*0x4aeaf0*/
  return (*(int (__thiscall **)(_BYTE *, _DWORD, _DWORD))(*(_DWORD *)this + 72))(this, 0, 0); /*0x4aeb02*/
}
}

// 0x4AEB50
unsigned int * DisplayClass::loc_4AEB50(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall DisplayClass::loc_4AEB50(_DWORD *this, char a2)
{
  void *v3; // eax

  v3 = (void *)*(this + 1); /*0x4aeb53*/
  *this = &VectorClass<ObjectClass *>::`vftable'; /*0x4aeb56*/
  if ( v3 && *((_BYTE *)this + 13) ) /*0x4aeb60*/
  {
    __3_YAXPAX_Z(v3); /*0x4aeb68*/
    *(this + 1) = 0; /*0x4aeb70*/
  }
  *((_BYTE *)this + 13) = 0; /*0x4aeb7b*/
  *(this + 2) = 0; /*0x4aeb81*/
  if ( (a2 & 1) != 0 ) /*0x4aeb88*/
    __3_YAXPAX_Z(this); /*0x4aeb8b*/
  return this; /*0x4aeb95*/
}
}

// 0x4AEBB0
unsigned int * DisplayClass::updateRenderState(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall DisplayClass::updateRenderState(TacticalClass_DisplayClass *this, char a2)
{
  GadgetClass::Dtor(this); /*0x4aebb3*/
  if ( (a2 & 1) != 0 ) /*0x4aebbd*/
    __3_YAXPAX_Z(this); /*0x4aebc0*/
  return &this->vfptr; /*0x4aebca*/
}
}

// 0x4AEBF0
DisplayClass * DisplayClass::Read(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
DisplayClass *__thiscall DisplayClass::Read(char *this, char a2)
{
  MapClass::Destruct(this); /*0x4aebf3*/
  if ( (a2 & 1) != 0 ) /*0x4aebfd*/
    __3_YAXPAX_Z(this); /*0x4aec00*/
  return (DisplayClass *)this; /*0x4aec0a*/
}
}

// 0x4AEC30
int * DisplayClass::processDisplayMode(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int *__thiscall DisplayClass::processDisplayMode(BufferStraw *this, char a2)
{
  Vector::Clear((int)(this + 3)); /*0x4aec36*/
  Straw::Dtor((int *)this); /*0x4aec3d*/
  if ( (a2 & 1) != 0 ) /*0x4aec47*/
    __3_YAXPAX_Z(this); /*0x4aec4a*/
  return (int *)this; /*0x4aec54*/
}
}

// 0x5519B0
bool DisplayClass::RenderStatusText(IUnknown * aP1, char a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall DisplayClass::RenderStatusText(int this, IUnknown *aP1, char a3)
{
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // edx

  if ( a3 ) /*0x5519b9*/
    return DisplayClass::InsertPriorityText((_DWORD *)this, (int)aP1) != 0; /*0x5519ca*/
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
  v8 = this->DisplayClass_field_0x4; /*0x551a0d*/
  *(_DWORD *)(this + 16) = v7 + 1; /*0x551a13*/
  *(_DWORD *)(v8 + 4 * v7) = aP1; /*0x551a1a*/
  return 1; /*0x5519c9*/
}
}

// 0x551A90
int DisplayClass::InsertPriorityText(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_551A90(_DWORD *this, int a2)
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
}

// 0x5F6220
bool DisplayClass::checkScreenBounds(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall sub_5F6220(void *this, int a2)
{
  int v3; // edi

  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 184))(a2); /*0x5f6234*/
  return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 184))(this) > v3; /*0x5f623e*/
}
}

// 0x6D8530
int DisplayClass::ScrollTacticalView(IUnknown * aP1, IUnknown * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall DisplayClass::ScrollTacticalView(_DWORD *this, IUnknown *aP1, IUnknown *aP2)
{
  int v4; // edx
  int result; // eax
  int v6; // eax
  int v7; // ecx

  if ( (MEMORY[0xB077F8].__pad_5554[148] & 1) == 0 ) /*0x6d8541*/
  {
    *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[236] = 0; /*0x6d854e*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[240] = -1; /*0x6d8553*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[244] = 1; /*0x6d855e*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[248] = -1; /*0x6d8563*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[252] = 1; /*0x6d8569*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[260] = 1; /*0x6d856e*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[256] = 0; /*0x6d8577*/
    MEMORY[0xB077F8].field_5660 = 0; /*0x6d857d*/
    MEMORY[0xB077F8].field_565C = 1; /*0x6d8587*/
    MEMORY[0xB077F8].field_5664 = 1; /*0x6d858d*/
    MEMORY[0xB077F8].field_5668 = -1; /*0x6d8593*/
    *(_DWORD *)MEMORY[0xB077F8].__pad_566C = 1; /*0x6d8598*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[4] = -1; /*0x6d85a3*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[8] = 0; /*0x6d85a8*/
    MEMORY[0xB077F8].__pad_5554[148] |= 1u; /*0x6d85bb*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[12] = -1; /*0x6d85c1*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_566C[16] = -1; /*0x6d85c6*/
    atexit(nullsub_41); /*0x6d85cc*/
  }
  v4 = *(this + 857); /*0x6d85dc*/
  result = v4 + (_DWORD)aP2 * *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[8 * (_DWORD)aP1 + 236]; /*0x6d85fc*/
  if ( v4 != result /*0x6d8606*/
    || *(this + 858) != *(this + 858) + (_DWORD)aP2 * *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[8 * (_DWORD)aP1 + 240] )
  {
    v6 = *(this + 862); /*0x6d8612*/
    v7 = (_DWORD)aP2 * *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[8 * (_DWORD)aP1 + 240]; /*0x6d8618*/
    *(this + 861) += (_DWORD)aP2 * *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[8 * (_DWORD)aP1 + 236]; /*0x6d861a*/
    result = v7 + v6; /*0x6d8620*/
    *(this + 862) = result; /*0x6d8622*/
  }
  return result; /*0x6d8628*/
}
}

// 0x6DA230
int DisplayClass::GetCoordDelta(AbstractClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall DisplayClass::GetCoordDelta(_DWORD *this, AbstractClass *aP1)
{
  int result; // eax
  int v4; // ecx
  IUnknown *v5; // edx
  int v6; // esi
  IUnknown *v7; // edi
  int v8; // [esp+Ch] [ebp-8h] BYREF
  IUnknown *v9; // [esp+10h] [ebp-4h]

  if ( (MEMORY[0xB077F8].__pad_5554[180] & 1) == 0 ) /*0x6da244*/
  {
    MEMORY[0xB077F8].__pad_5554[180] |= 1u; /*0x6da24f*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[76] = 0; /*0x6da256*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[80] = -1; /*0x6da25b*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[84] = 1; /*0x6da266*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[88] = -1; /*0x6da26b*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[92] = 1; /*0x6da271*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[100] = 1; /*0x6da276*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[96] = 0; /*0x6da27f*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[108] = 0; /*0x6da285*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[104] = 1; /*0x6da28f*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[112] = 1; /*0x6da295*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[116] = -1; /*0x6da29b*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[120] = 1; /*0x6da2a0*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[124] = -1; /*0x6da2ab*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[128] = 0; /*0x6da2b0*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[132] = -1; /*0x6da2c1*/
    *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[136] = -1; /*0x6da2c6*/
    atexit(nullsub_42); /*0x6da2cc*/
  }
  result = (int)aP1; /*0x6da2d4*/
  v4 = *(this + 857); /*0x6da2d8*/
  v5 = (IUnknown *)*(this + 858); /*0x6da2de*/
  v6 = v4 + *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[8 * (_DWORD)aP1 + 76]; /*0x6da2f2*/
  v7 = (IUnknown *)((char *)v5 + *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[8 * (_DWORD)aP1 + 80]); /*0x6da2f4*/
  if ( v6 != v4 || v7 != v5 ) /*0x6da2fc*/
  {
    v8 = v4 + *(_DWORD *)&MEMORY[0xB077F8].__pad_5554[8 * (_DWORD)aP1 + 76]; /*0x6da305*/
    v9 = v7; /*0x6da309*/
    if ( ClampCoordMap(&v8) ) /*0x6da30d*/
    {
      if ( !MEMORY[0xA8D63C].__pad_14B0[639] ) /*0x6da31d*/
      {
        v6 = v8; /*0x6da31f*/
        v7 = v9; /*0x6da323*/
      }
    }
    return *(_DWORD *)&stru_830620.__pad_579C[8 * (*(this + 858) - (_DWORD)v7) /*0x6da33c*/
                                            + 52064
                                            + 4 * (*(this + 857) - v6)
                                            + 4 * (*(this + 858) - (_DWORD)v7)];
  }
  return result; /*0x6da343*/
}
}

// 0x7BA4D0
int DisplayClass::ReadFromBuffer(void * a1, signed int Size)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall DisplayClass::ReadFromBuffer(BufferStraw *this, void *a1, signed int Size)
{
  int result; // eax
  int v5; // edx
  int v6; // eax
  signed int v7; // edi
  signed int v8; // eax

  result = 0; /*0x7ba4d4*/
  v5 = this->DisplayClass_field_0xC; /*0x7ba4d6*/
  if ( v5 && a1 && Size > 0 ) /*0x7ba4eb*/
  {
    v6 = *((_DWORD *)this + 4); /*0x7ba4ed*/
    v7 = Size; /*0x7ba4f3*/
    if ( v6 ) /*0x7ba4f5*/
    {
      v8 = v6 - *((_DWORD *)this + 6); /*0x7ba4fa*/
      v7 = Size; /*0x7ba4fc*/
      if ( Size >= v8 ) /*0x7ba500*/
        v7 = v8; /*0x7ba502*/
    }
    if ( v7 > 0 ) /*0x7ba506*/
      memcpy(a1, (const void *)(v5 + *((_DWORD *)this + 6)), v7); /*0x7ba510*/
    *((_DWORD *)this + 6) += v7; /*0x7ba51d*/
    return v7; /*0x7ba520*/
  }
  return result; /*0x7ba523*/
}
}
