// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Cell_e4.hpp"

// 0x419B00
namespace gamemd {
char Cell::IsOccupied(short * a2, char a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall Cell_IsOccupied(void **this, __int16 *a2, char a3)
{
  _DWORD *v5; // eax
  _DWORD *ClosestObject; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // edi
  void **v10; // esi
  _WORD *v11; // eax
  void *v14; // [esp+10h] [ebp-Ch]
  _DWORD v15[2]; // [esp+14h] [ebp-8h] BYREF
  char v16; // [esp+20h] [ebp+4h]

  if ( !LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], a2, 1) ) /*0x419b18*/
    return 1; /*0x419b18*/
  if ( *((_BYTE *)*(this + 433) + 3412) ) /*0x419b2b*/
  {
    v15[0] = 0; /*0x419b44*/
    v15[1] = 0; /*0x419b4c*/
    v5 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], a2); /*0x419b54*/
    ClosestObject = (_DWORD *)Object::FindClosestObjectCell(v5, v15, 0, 0); /*0x419b5b*/
    if ( ClosestObject ) /*0x419b62*/
    {
      if ( ClosestObject[180] /*0x419b7c*/
        || *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*ClosestObject + 132))(ClosestObject) + 3412) )
      {
        return 1; /*0x419b7c*/
      }
    }
  }
  v7 = (int)*(this + 433); /*0x419b8a*/
  if ( *(_BYTE *)(v7 + 3597) ) /*0x419b90*/
    return 1; /*0x419b90*/
  if ( !*(_BYTE *)(v7 + 3580) /*0x419bbf*/
    || (v8 = (int)*(this + 361)) == 0
    || (v16 = 1, (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 44))(v8) != 1) )
  {
    v16 = 0; /*0x419bc1*/
  }
  v14 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], a2); /*0x419bd1*/
  v9 = 0; /*0x419bda*/
  if ( MEMORY[0x8B3DD0] <= 0 ) /*0x419bde*/
    return 1; /*0x419c6b*/
  while ( 1 ) /*0x419bea*/
  {
    v10 = (void **)*((_DWORD *)MEMORY[0x8B3DC4] + v9); /*0x419bea*/
    if ( v10 && (!v16 || *(this + 361) != v10) && (a3 || v10 != this) && !*((_BYTE *)v10 + 129) && *((_BYTE *)v10 + 116) ) /*0x419c1d*/
    {
      v11 = (_WORD *)(*((int (__thiscall **)(void **, _DWORD *))*v10 + 110))(v10, v15); /*0x419c2d*/
      if ( *v11 == *a2 && v11[1] == a2[1] ) /*0x419c44*/
        break; /*0x419c44*/
      if ( v10[361] == v14 ) /*0x419c52*/
        break; /*0x419c52*/
    }
    if ( ++v9 >= MEMORY[0x8B3DD0] ) /*0x419c5c*/
      return 1; /*0x419c5c*/
  }
  return 0; /*0x419c60*/
}
}
} // namespace gamemd

// 0x4265B0
namespace gamemd {
unsigned short * Cell::GetHeight(BuildingTypeClass * aP1, int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_WORD *__thiscall Cell::GetHeight(_WORD *this, BuildingTypeClass *aP1, int *a2)
{
  double v4; // st7

  if ( *(_DWORD *)aP1->__pad_0 == *a2 && *(_DWORD *)&aP1->__pad_0[4] == a2[1] ) /*0x4265ca*/
    *this = 0; /*0x4265cc*/
  v4 = Math::CalcAngle((double)*(int *)&aP1->__pad_0[4] - (double)a2[1], (double)*a2 - (double)*(int *)aP1->__pad_0); /*0x4265e8*/
  LOWORD(aP1) = Math::RoundToInt((v4 - 1.570796326794897) * -10430.06004058427); /*0x426601*/
  *(_DWORD *)this = aP1; /*0x42660a*/
  return this; /*0x42660e*/
}
}
} // namespace gamemd

// 0x42B1C0
namespace gamemd {
int Cell::PosToIndex()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Cell_PosToIndex(__int16 *this)
{
  return ((*this - *(this + 1) + MEMORY[0x87F8DC] - 1) >> 1) /*0x42b1e3*/
       + MEMORY[0x87F8DC] * (*this - MEMORY[0x87F8DC] + *(this + 1) - 1);
}
}
} // namespace gamemd

// 0x43B4C0
namespace gamemd {
char Cell::CanPlaceBuilding(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall Cell::CanPlaceBuilding(IUnknown *this, _DWORD *a2)
{
  int v2; // esi
  int v3; // edi
  _DWORD *v4; // ebp
  int *v5; // eax
  int v6; // esi
  int v7; // edi
  int v8; // ebx
  ObjectClass *Coords; // eax
  double v10; // st7
  int v12; // [esp+1Ch] [ebp-30h]
  int v14; // [esp+24h] [ebp-28h]
  char v15[12]; // [esp+34h] [ebp-18h] BYREF
  char v16[12]; // [esp+40h] [ebp-Ch] BYREF

  if ( (unsigned __int8)HouseClass::IsAlliedWith(HouseClass_Player, this) ) /*0x43b4d8*/
    return 0; /*0x43b4d8*/
  v2 = 0; /*0x43b4ea*/
  v12 = 0; /*0x43b4ec*/
  v3 = *(_DWORD *)&HouseClass_Player->__pad_134[4]; /*0x43b4f0*/
  v14 = v3; /*0x43b4f8*/
  if ( v3 <= 0 ) /*0x43b4fc*/
    return 0; /*0x43b5c9*/
  while ( 1 ) /*0x43b50e*/
  {
    v4 = *(_DWORD **)(*(_DWORD *)&HouseClass_Player->__pad_11C[16] + 4 * v2); /*0x43b50e*/
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v4 + 848))(v4) ) /*0x43b516*/
      break; /*0x43b516*/
LABEL_6:
    v12 = ++v2; /*0x43b5b6*/
    if ( v2 >= v3 ) /*0x43b5ba*/
      return 0; /*0x43b5ba*/
  }
  v5 = (int *)(*(int (__thiscall **)(_DWORD *, char *))(*v4 + 72))(v4, v15); /*0x43b52e*/
  v6 = *v5; /*0x43b531*/
  v7 = v5[1]; /*0x43b53c*/
  v8 = v5[2]; /*0x43b53f*/
  Coords = (ObjectClass *)CellClass::GetCoords(a2, (int *)v16); /*0x43b542*/
  v10 = Math::Sqrt( /*0x43b58b*/
          (double)(v6 - *(_DWORD *)Coords->__pad_0) * (double)(v6 - *(_DWORD *)Coords->__pad_0)
        + (double)(v7 - *(_DWORD *)&Coords->__pad_0[4]) * (double)(v7 - *(_DWORD *)&Coords->__pad_0[4])
        + (double)(v8 - *(_DWORD *)&Coords->__pad_0[8]) * (double)(v8 - *(_DWORD *)&Coords->__pad_0[8]));
  if ( (int)Math::RoundToInt(v10) > *(_DWORD *)(v4[328] + 5900) << 8 ) /*0x43b5a9*/
  {
    v2 = v12; /*0x43b5ab*/
    v3 = v14; /*0x43b5af*/
    goto LABEL_6; /*0x43b5af*/
  }
  return 1; /*0x43b5c2*/
}
}
} // namespace gamemd

// 0x481670
namespace gamemd {
void Cell::ApplyDamage(IUnknown * aP1, int a3, int a4, IUnknown * aP4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall Cell::ApplyDamage(_DWORD *this, IUnknown *aP1, int a3, int a4, IUnknown *aP4)
{
  _DWORD *v6; // esi
  float *v7; // eax
  int v8; // esi
  int v9; // edi
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  ObjectClass *v13; // esi
  char v14; // [esp+13h] [ebp-19h]
  void **v15; // [esp+14h] [ebp-18h] BYREF
  void *Block; // [esp+18h] [ebp-14h]
  int v17; // [esp+1Ch] [ebp-10h]
  char v18; // [esp+20h] [ebp-Ch]
  char v19; // [esp+21h] [ebp-Bh]
  int v20; // [esp+24h] [ebp-8h]
  int v21; // [esp+28h] [ebp-4h]

  if ( (_BYTE)aP4 ) /*0x48167e*/
    v6 = (_DWORD *)*(this + 58); /*0x481680*/
  else
    v6 = (_DWORD *)*(this + 57); /*0x481688*/
  v14 = 0; /*0x481692*/
  if ( !(_BYTE)a4 && v6 ) /*0x48169f*/
  {
    while ( 1 ) /*0x4816a3*/
    {
      v7 = (float *)AbstractClass::IsTechnoType(v6); /*0x4816a3*/
      if ( v7 ) /*0x4816aa*/
      {
        if ( VeterancyStruct::IsElite(v7 + 84) ) /*0x4816b2*/
          break; /*0x4816b2*/
      }
      v6 = (_DWORD *)v6[12]; /*0x4816bb*/
      if ( !v6 ) /*0x4816c0*/
        goto LABEL_11; /*0x4816c0*/
    }
    v14 = 1; /*0x4816c4*/
  }
LABEL_11:
  if ( (_BYTE)aP4 ) /*0x4816ce*/
    v8 = *(this + 58); /*0x4816d0*/
  else
    v8 = *(this + 57); /*0x4816d8*/
  v9 = 0; /*0x4816de*/
  v10 = 0; /*0x4816e0*/
  v11 = 10; /*0x4816e2*/
  Block = 0; /*0x4816e9*/
  v17 = 0; /*0x4816ed*/
  v18 = 1; /*0x4816f1*/
  v19 = 0; /*0x4816f5*/
  v15 = &DynamicVectorClass<ObjectClass *>::`vftable'; /*0x4816f9*/
  v21 = 10; /*0x481701*/
  v20 = 0; /*0x481705*/
  if ( v8 ) /*0x481709*/
  {
    while ( 1 ) /*0x481711*/
    {
      if ( v20 < v10 ) /*0x481715*/
        goto LABEL_22; /*0x481715*/
      if ( (v19 || !v10) && v11 > 0 ) /*0x481725*/
        break; /*0x481725*/
LABEL_24:
      v8 = *(_DWORD *)(v8 + 48); /*0x481750*/
      if ( !v8 ) /*0x481755*/
        goto LABEL_25; /*0x481755*/
      v11 = v21; /*0x48170d*/
    }
    if ( ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v15[2])(&v15, v11 + v10, 0) ) /*0x481733*/
    {
LABEL_22:
      v12 = v20++; /*0x48173a*/
      *((_DWORD *)Block + v12) = v8; /*0x481749*/
    }
    v10 = v17; /*0x48174c*/
    goto LABEL_24; /*0x48174c*/
  }
LABEL_25:
  if ( v20 > 0 ) /*0x48175b*/
  {
    do /*0x4817e0*/
    {
      v13 = (ObjectClass *)AbstractClass::IsTechnoType(*((void **)Block + v9)); /*0x481776*/
      if ( v14 /*0x4817c1*/
        || (_BYTE)a4
        || *(_BYTE *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 6125)
        || v13
        && (TechnoClass::HasVoiceResponse((float *)v13->__pad_0, 3)
         || *(_DWORD *)(v13[3].nextArrayIndex + 588) >= *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5196)) )
      {
        (*(void (__thiscall **)(_DWORD, IUnknown *, int, int))(**((_DWORD **)Block + v9) + 372))( /*0x4817d3*/
          *((_DWORD *)Block + v9),
          aP1,
          a3,
          a4);
      }
      ++v9; /*0x4817dd*/
    }
    while ( v9 < v20 ); /*0x4817e0*/
  }
  v15 = &VectorClass<ObjectClass *>::`vftable'; /*0x4817e9*/
  if ( Block ) /*0x4817f4*/
  {
    if ( v19 ) /*0x4817fc*/
      __3_YAXPAX_Z(Block); /*0x4817ff*/
  }
}
}
} // namespace gamemd

// 0x481810
namespace gamemd {
void * Cell::GetNeighbourContent(unsigned int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void *__thiscall Cell_GetNeighbourContent(_DWORD *this, unsigned int a2)
{
  void *result; // eax
  __int16 v3; // ax
  int v4; // [esp+0h] [ebp-4h]

  result = this; /*0x481815*/
  if ( a2 < 8 ) /*0x48181a*/
  {
    v4 = *(this + 9); /*0x481822*/
    v3 = HIWORD(v4) + HIWORD(MEMORY[0x89F688][a2 & 7]); /*0x481839*/
    LOWORD(a2) = v4 + LOWORD(MEMORY[0x89F688][a2 & 7]); /*0x481841*/
    HIWORD(a2) = v3; /*0x48184a*/
    return CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a2); /*0x48185d*/
  }
  return result; /*0x481863*/
}
}
} // namespace gamemd

// 0x4834A0
namespace gamemd {
int Cell_IsBuildable()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall Cell::IsBuildable(
        int this,
        int a2,
        char a3,
        char a4,
        IUnknown *aP4,
        IUnknown *aP5,
        IUnknown *aP6,
        IUnknown *aP7)
{
  int v10; // ecx
  char v11; // cl
  int v12; // eax
  int v13; // eax
  int v14; // esi
  int v15; // esi

  if ( a2 == 4 ) /*0x4834ad*/
    return 1; /*0x4834ad*/
  if ( aP4 != (IUnknown *)-1 /*0x4834d6*/
    && aP4 != (IUnknown *)MapClass::GetTileIndex(&MEMORY[0x87F7E8], (IUnknown *)(this + 36), aP5, aP7) )
  {
    return 0; /*0x4834de*/
  }
  if ( aP6 != (IUnknown *)-1 ) /*0x4834ed*/
  {
    v10 = *(char *)(this + 283); /*0x4834ef*/
    if ( aP6 == (IUnknown *)v10 ) /*0x4834f8*/
    {
      if ( (*(_DWORD *)(this + 320) & 0x100) != 0 && !(_BYTE)aP7 ) /*0x48351c*/
        return 0; /*0x483524*/
    }
    else if ( (*(_DWORD *)(this + 320) & 0x100) == 0 || aP6 != (IUnknown *)(v10 + 4) ) /*0x483507*/
    {
      return 0; /*0x48350f*/
    }
  }
  v11 = 0; /*0x483527*/
  if ( (aP6 == (IUnknown *)-1 || aP6 == (IUnknown *)(*(char *)(this + 283) + 4)) /*0x483542*/
    && (*(_DWORD *)(this + 320) & 0x100) != 0 )
  {
    v11 = 1; /*0x483546*/
    v12 = *(unsigned __int8 *)(this + 296); /*0x483548*/
  }
  else
  {
    v12 = *(unsigned __int8 *)(this + 292); /*0x483552*/
  }
  if ( a3 ) /*0x48355e*/
    v12 &= 0xE0u; /*0x483560*/
  if ( a4 ) /*0x48356b*/
    v12 &= 0x5Fu; /*0x48356d*/
  if ( v12 ) /*0x483572*/
    return 0; /*0x48357a*/
  v13 = *(_DWORD *)(this + 236); /*0x48357d*/
  v14 = *(_DWORD *)(this + 68); /*0x483583*/
  if ( v14 != -1 ) /*0x483589*/
  {
    v15 = *(_DWORD *)&MEMORY[0xA83D84]->__pad_0[4 * v14]; /*0x483591*/
    if ( v15 ) /*0x483596*/
    {
      if ( *(_BYTE *)(v15 + 680) ) /*0x483598*/
      {
        if ( aP5 != (IUnknown *)2 /*0x4835c8*/
          && aP5 != (IUnknown *)3
          && aP5 != (IUnknown *)8
          && (aP5 != (IUnknown *)1 && aP5 != (IUnknown *)4 || !*(_BYTE *)(v15 + 557))
          && aP5 != (IUnknown *)12 )
        {
          return 0; /*0x4835d0*/
        }
        v13 = 0; /*0x4835d3*/
      }
    }
  }
  return MEMORY[0x89EA40][8 * v13 + a2 + v13] != 0.0 || v11; /*0x483602*/
}
}
} // namespace gamemd

// 0x485060
namespace gamemd {
BOOL Cell::IsValidHeight()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __thiscall Cell_IsValidHeight(int *this)
{
  int v1; // eax

  v1 = *(this + 14); /*0x485060*/
  return v1 >= unk_AA0738 && v1 < unk_AA0738 + 14; /*0x485079*/
}
}
} // namespace gamemd

// 0x486380
namespace gamemd {
bool Cell::IsEmpty()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall Cell_IsEmpty(_DWORD *this)
{
  int v1; // eax

  v1 = *(this + 14); /*0x486380*/
  return v1 == 0xFFFF || !v1; /*0x486390*/
}
}
} // namespace gamemd

// 0x4865D0
namespace gamemd {
bool Cell::IsGroundTypeRange()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall sub_4865D0(int *this)
{
  int v1; // eax

  v1 = *(this + 14); /*0x4865d0*/
  if ( v1 >= dword_ABAD28 && v1 < dword_ABAD28 + 42 ) /*0x4865e2*/
    return 1; /*0x4865e4*/
  return v1 >= unk_AA0738 && v1 < unk_AA0738 + 14 /*0x48663a*/
      || v1 >= unk_AA073C && v1 < unk_AA073C + 4
      || v1 >= dword_ABB110 && v1 < dword_ABB110 + 4
      || v1 >= unk_AA1050 && v1 < unk_AA1050 + 4
      || v1 >= unk_AA10A0 && v1 < unk_AA10A0 + 4;
}
}
} // namespace gamemd

// 0x486750
namespace gamemd {
bool Cell::IsInRange()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall Cell_IsInRange(int *this)
{
  int v1; // eax
  bool result; // al

  result = 0; /*0x48676c*/
  if ( unk_AA0E28 != -1 ) /*0x486759*/
  {
    v1 = *(this + 14); /*0x48675b*/
    if ( v1 >= unk_AA0E28 && v1 < unk_AA0E28 + 16 ) /*0x486767*/
      return 1; /*0x486759*/
  }
  return result; /*0x48676b*/
}
}
} // namespace gamemd

// 0x486770
namespace gamemd {
bool Cell::IsInRange2()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall Cell_IsInRange2(int *this)
{
  int v1; // eax
  bool result; // al

  result = 0; /*0x48678c*/
  if ( g_TerrainBridgeIndex != -1 ) /*0x486779*/
  {
    v1 = *(this + 14); /*0x48677b*/
    if ( v1 >= g_TerrainBridgeIndex && v1 < g_TerrainBridgeIndex + 16 ) /*0x486787*/
      return 1; /*0x486779*/
  }
  return result; /*0x48678b*/
}
}
} // namespace gamemd

// 0x4867B0
namespace gamemd {
bool Cell::IsShore()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall Cell_IsShore(int *this)
{
  int v1; // eax

  v1 = *(this + 14); /*0x4867b0*/
  return v1 == unk_AA0E18 || v1 >= unk_AA0748 && v1 < unk_AA0748 + 16; /*0x4867d0*/
}
}
} // namespace gamemd

// 0x486FF0
namespace gamemd {
char Cell::IsBuildableAdvanced()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall Cell_IsBuildableAdvanced(int this)
{
  int v3; // eax
  _DWORD *v4; // esi
  _DWORD *v5; // esi

  if ( !Type::CheckAmbiguity(&MEMORY[0x87F7E8], this, 1) ) /*0x486ffc*/
    return 1; /*0x487009*/
  v3 = *(_DWORD *)(this + 56); /*0x48700a*/
  if ( v3 >= 0 && v3 < MEMORY[0xA8ED38] && !*(_BYTE *)(*((_DWORD *)MEMORY[0xA8ED2C] + v3) + 773) /*0x48703f*/
    || *(_BYTE *)(this + 284)
    || (*(_DWORD *)(this + 320) & 0x500) != 0 )
  {
    return 0; /*0x48703f*/
  }
  if ( !MEMORY[0xA8E9A0] ) /*0x487048*/
    return 1; /*0x487048*/
  v4 = *(_DWORD **)(this + 228); /*0x48704a*/
  if ( v4 ) /*0x487052*/
  {
    while ( (*(int (__thiscall **)(_DWORD *))(*v4 + 44))(v4) != 6 ) /*0x48705e*/
    {
      v4 = (_DWORD *)v4[12]; /*0x487060*/
      if ( !v4 ) /*0x487065*/
        goto LABEL_14; /*0x487065*/
    }
    return 0; /*0x48705e*/
  }
LABEL_14:
  if ( !MEMORY[0xA8E9A0] ) /*0x487074*/
    return 1; /*0x487074*/
  v5 = *(_DWORD **)(this + 228); /*0x487076*/
  if ( !v5 ) /*0x48707e*/
    return 1; /*0x4870a0*/
  while ( (*(int (__thiscall **)(_DWORD *))(*v5 + 44))(v5) != 36 ) /*0x48708a*/
  {
    v5 = (_DWORD *)v5[12]; /*0x48708c*/
    if ( !v5 ) /*0x487091*/
      return 1; /*0x487097*/
  }
  return 0; /*0x487005*/
}
}
} // namespace gamemd

// 0x4870B0
namespace gamemd {
BOOL Cell::HasOccupierBit(IUnknown * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __thiscall Cell::HasOccupierBit(_DWORD *this, IUnknown *aP1)
{
  return ((1 << (char)aP1) & *(this + 30)) != 0; /*0x4870c8*/
}
}
} // namespace gamemd

// 0x4870D0
namespace gamemd {
BOOL Cell::IsPassableOffset(IUnknown * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __thiscall Cell::IsPassableOffset(_WORD *this, IUnknown *aP1)
{
  return *(this + (_DWORD)aP1 + 62) > 0; /*0x4870de*/
}
}
} // namespace gamemd

// 0x487A10
namespace gamemd {
int Cell::SearchEnemies(IUnknown * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Cell::SearchEnemies(int this, IUnknown *aP1)
{
  _DWORD *v3; // esi
  char v4; // bl
  _DWORD *v5; // ebp
  int v6; // edx
  AbstractClass *v7; // ebx
  int v8; // ebp
  _DWORD *v9; // eax
  int *v10; // esi
  bool v11; // zf
  int v12; // edx
  int result; // eax
  int v14; // [esp+70h] [ebp-1Ch]
  IUnknown *v15; // [esp+74h] [ebp-18h]
  _DWORD v16[2]; // [esp+78h] [ebp-14h] BYREF
  _DWORD v17[3]; // [esp+80h] [ebp-Ch] BYREF

  v3 = *(_DWORD **)(this + 228); /*0x487a19*/
  if ( v3 ) /*0x487a21*/
  {
    v4 = (char)aP1; /*0x487a27*/
    while ( 1 ) /*0x487a2d*/
    {
      v5 = (_DWORD *)v3[12]; /*0x487a2d*/
      if ( (*(int (__thiscall **)(_DWORD *, int, int, int, _DWORD, int))(*v3 + 428))(v3, this, -1, -1, 0, 1) == 7 ) /*0x487a44*/
        goto LABEL_10; /*0x487a44*/
      if ( !v4 ) /*0x487a48*/
        goto LABEL_8; /*0x487a48*/
      if ( v3 ) /*0x487a4c*/
        break; /*0x487a4c*/
LABEL_11:
      v3 = v5; /*0x487aa4*/
      if ( !v5 ) /*0x487aa8*/
        goto LABEL_12; /*0x487aa8*/
    }
    if ( (v3[5] & 1) == 0 || !*(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*v3 + 132))(v3) + 3476) ) /*0x487a5e*/
    {
LABEL_8:
      if ( !v3 || (*(int (__thiscall **)(_DWORD *))(*v3 + 44))(v3) != 2 ) /*0x487a76*/
        goto LABEL_11; /*0x487a76*/
    }
LABEL_10:
    v6 = *v3; /*0x487a78*/
    aP1 = (IUnknown *)v3[27]; /*0x487a84*/
    (*(void (__thiscall **)(_DWORD *, IUnknown **, _DWORD, _DWORD, _DWORD, int, int, _DWORD))(v6 + 364))( /*0x487a9e*/
      v3,
      &aP1,
      0,
      *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 4008),
      0,
      1,
      1,
      0);
    goto LABEL_11; /*0x487a9e*/
  }
LABEL_12:
  aP1 = *(IUnknown **)(this + 36); /*0x487aaa*/
  Coord::Subtract(v17, (IUnknown *)(((__int16)aP1 << 8) + 128), (IUnknown *)((SHIWORD(aP1) << 8) + 128), 0); /*0x487ad0*/
  v16[0] = 128; /*0x487adc*/
  v16[1] = 128; /*0x487ae0*/
  v7 = (AbstractClass *)Isometric::InitTables(this, (IUnknown *)v16); /*0x487ae9*/
  v14 = -2; /*0x487aeb*/
  do /*0x487bff*/
  {
    v8 = -2; /*0x487af3*/
    v16[0] = -2; /*0x487af8*/
    do /*0x487bed*/
    {
      HIWORD(v15) = v8 + *(_WORD *)(this + 38); /*0x487b0c*/
      LOWORD(v15) = v14 + *(_WORD *)(this + 36); /*0x487b11*/
      aP1 = v15; /*0x487b1e*/
      v9 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP1); /*0x487b28*/
      if ( v9 != (_DWORD *)this ) /*0x487b2f*/
      {
        v10 = (int *)v9[57]; /*0x487b35*/
        if ( v10 ) /*0x487b3d*/
        {
          do /*0x487bdb*/
          {
            v11 = (v10[5] & 4) == 0; /*0x487b49*/
            LOBYTE(aP1) = (v10[5] & 4) != 0; /*0x487b4c*/
            if ( !v11 ) /*0x487b50*/
            {
              if ( !v10[413] ) /*0x487b56*/
                WinAPI::Wrapper(-2147467261); /*0x487b65*/
              if ( (*(unsigned __int8 (__stdcall **)(int, _DWORD, _DWORD, AbstractClass *))(*(_DWORD *)v10[413] + 160))( /*0x487b88*/
                     v10[413],
                     v17[0],
                     v17[1],
                     v7) )
              {
                if ( (*(int (__thiscall **)(int *, int, int, int, _DWORD, int))(*v10 + 428))(v10, this, -1, -1, 0, 1) == 7 ) /*0x487ba8*/
                {
                  v12 = *v10; /*0x487bb2*/
                  aP1 = (IUnknown *)v10[27]; /*0x487bb6*/
                  (*(void (__thiscall **)(int *, IUnknown **, _DWORD, _DWORD, _DWORD, int, int, _DWORD))(v12 + 364))( /*0x487bd0*/
                    v10,
                    &aP1,
                    0,
                    *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 4008),
                    0,
                    1,
                    1,
                    0);
                }
              }
            }
            v10 = (int *)v10[12]; /*0x487bd6*/
          }
          while ( v10 ); /*0x487bdb*/
          v8 = v16[0]; /*0x487be1*/
        }
      }
      v16[0] = ++v8; /*0x487be9*/
    }
    while ( v8 < 3 ); /*0x487bed*/
    result = ++v14; /*0x487bf7*/
  }
  while ( v14 < 3 ); /*0x487bff*/
  return result; /*0x487c05*/
}
}
} // namespace gamemd

// 0x487CB0
namespace gamemd {
long long Cell::GetTraversability()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 __thiscall Cell_GetTraversability(double *this)
{
  double v1; // st7

  v1 = (double)*((int *)MEMORY[0x8871E0] + 1539); /*0x487cb5*/
  if ( *(this + 30) < v1 ) /*0x487cc8*/
    v1 = *(this + 30); /*0x487ccc*/
  return Math::RoundToInt(v1);
}
}
} // namespace gamemd

// 0x487D50
namespace gamemd {
int Cell::GetSlopeIndex()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Cell_GetSlopeIndex(int this)
{
  return *(char *)(this + 283) + 4 * ((*(_DWORD *)(this + 320) >> 7) & 1); /*0x487d66*/
}
}
} // namespace gamemd

// 0x487DF0
namespace gamemd {
bool Cell::IsBridge2()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall Cell_IsBridge2(_DWORD *this)
{
  return *(this + 59) == 5; /*0x487dfa*/
}
}
} // namespace gamemd

// 0x4DCE80
namespace gamemd {
bool Cell::IsValidDestination(short * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall Cell_IsValidDestination(_BYTE *this, __int16 *a2)
{
  int v4; // eax
  int GroundHeight; // eax
  int v6; // edx
  int v7; // ecx
  _DWORD *v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // eax
  _DWORD *v12; // eax
  int v14; // [esp+Ch] [ebp-1Ch] BYREF
  _DWORD v15[3]; // [esp+10h] [ebp-18h] BYREF
  _DWORD v16[3]; // [esp+1Ch] [ebp-Ch] BYREF
  int v17; // [esp+2Ch] [ebp+4h]

  if ( !LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], a2, 1) ) /*0x4dce93*/
    return 0; /*0x4dce93*/
  if ( !MEMORY[0xA8B238] ) /*0x4dcea7*/
  {
    if ( *(this + 1050) ) /*0x4dcea9*/
    {
      v4 = (*a2 << 8) + 128; /*0x4dceca*/
      v15[1] = (a2[1] << 8) + 128; /*0x4dcecf*/
      v15[0] = v4; /*0x4dced9*/
      v15[2] = 0; /*0x4dcedd*/
      GroundHeight = Cell::GetGroundHeight(v15); /*0x4dcee5*/
      v6 = a2[1]; /*0x4dceed*/
      v7 = (*a2 << 8) + 128; /*0x4dcef4*/
      v16[2] = GroundHeight; /*0x4dcefa*/
      v16[0] = v7; /*0x4dcf0b*/
      v16[1] = (v6 << 8) + 128; /*0x4dcf15*/
      if ( Cell::IsPassable(v16) ) /*0x4dcf19*/
        return 0; /*0x4dcf19*/
    }
  }
  v8 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _DWORD *, _DWORD))(*(_DWORD *)this + 76))(this, v16, 0); /*0x4dcf31*/
  LOWORD(v17) = *v8 / 256; /*0x4dcf4a*/
  v9 = *(_DWORD *)this; /*0x4dcf5b*/
  HIWORD(v17) = v8[1] / 256; /*0x4dcf60*/
  v14 = v17; /*0x4dcf69*/
  v10 = (*(int (__thiscall **)(_BYTE *))(v9 + 188))(this); /*0x4dcf6f*/
  v11 = (*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 132))(this, v10); /*0x4dcf7a*/
  if ( !MapSeed::CheckTileMatch(&MEMORY[0x87F7E8], (__int16 *)&v14, a2, *(_DWORD *)(v11 + 1460), 0, 0, 0) ) /*0x4dcf92*/
    return 0; /*0x4dcf92*/
  v12 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], a2); /*0x4dcfa1*/
  return v12[59] == 5 /*0x4dcfc7*/
      && !(*(int (__thiscall **)(_BYTE *, _DWORD *, int, int, _DWORD, int))(*(_DWORD *)this + 428))(
            this,
            v12,
            -1,
            -1,
            0,
            1);
}
}
} // namespace gamemd

// 0x56BC50
namespace gamemd {
int Cell::PosToLinearIndex(IUnknown * aP0)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall Cell::PosToLinearIndex(IUnknown *aP0)
{
  return SLOWORD(aP0->field_0) / 4 + 130 * (SHIWORD(aP0->field_0) / 4) + 131; /*0x56bc7c*/
}
}
} // namespace gamemd

// 0x56CB80
namespace gamemd {
int Cell::DecodeFlags()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Cell_DecodeFlags(_DWORD *this)
{
  return *this & 0xF | ((unsigned __int16)*this >> 12); /*0x56cb8f*/
}
}
} // namespace gamemd

// 0x56D430
namespace gamemd {
int Cell::CoordToIndex(IUnknown * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Cell::CoordToIndex(_DWORD *this, IUnknown *aP1)
{
  return SLOWORD(aP1->field_0) + SHIWORD(aP1->field_0) * (*(this + 62) + *(this + 61) + 1); /*0x56d450*/
}
}
} // namespace gamemd

// 0x56D460
namespace gamemd {
char Cell::SetRadar(IUnknown * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall Cell::SetRadar(int *this, IUnknown *aP1)
{
  int v2; // eax
  int v3; // edx
  int v4; // edx
  int v5; // ebp
  int v6; // eax
  int v7; // edx
  char result; // al
  bool v9; // zf
  int v10; // esi
  _DWORD *i; // eax
  int v12; // edx
  int v13; // edi
  _DWORD *v14; // esi
  int v15; // ecx
  int v16; // [esp+Ch] [ebp-28h]
  int v17; // [esp+10h] [ebp-24h]
  _DWORD v18[8]; // [esp+14h] [ebp-20h] BYREF
  IUnknown *aP1a; // [esp+38h] [ebp+4h]

  v2 = SLOWORD(aP1->field_0) + SHIWORD(aP1->field_0) * (*(this + 62) + *(this + 61) + 1); /*0x56d484*/
  if ( v2 >= 0 ) /*0x56d486*/
  {
    v3 = *(this + 27); /*0x56d48c*/
    if ( v2 >= v3 ) /*0x56d491*/
      v2 = v3 - 1; /*0x56d493*/
  }
  else
  {
    v2 = 0; /*0x56d488*/
  }
  v4 = *(this + 26); /*0x56d496*/
  v18[2] = 1; /*0x56d499*/
  v18[6] = -1; /*0x56d4a1*/
  v5 = v4 + 4 * v2; /*0x56d4a9*/
  v6 = MEMORY[0x87F8E0] + MEMORY[0x87F8DC] + 1; /*0x56d4b7*/
  v18[4] = v6; /*0x56d4bd*/
  v18[0] = -v6; /*0x56d4c3*/
  v18[1] = -(MEMORY[0x87F8E0] + MEMORY[0x87F8DC]); /*0x56d4ce*/
  v18[3] = MEMORY[0x87F8E0] + MEMORY[0x87F8DC] + 2; /*0x56d4d5*/
  v18[5] = MEMORY[0x87F8E0] + MEMORY[0x87F8DC]; /*0x56d4dc*/
  v7 = -1 - v6; /*0x56d4e3*/
  result = *(_BYTE *)v5; /*0x56d4e5*/
  v9 = *(_BYTE *)v5 == 7; /*0x56d4e8*/
  v18[7] = v7; /*0x56d4ea*/
  if ( !v9 ) /*0x56d4ee*/
  {
    v10 = 0; /*0x56d4f0*/
    for ( i = v18; ; ++i ) /*0x56d4f2*/
    {
      v17 = v5 + 4 * *i; /*0x56d502*/
      if ( !*(_BYTE *)v17 ) /*0x56d4f8*/
        break; /*0x56d4f8*/
      if ( ++v10 >= 8 ) /*0x56d50f*/
        return Terrain::ConnectivityGraph(&MEMORY[0x87F7E8]); /*0x56d50f*/
    }
    if ( !(v5 + 4 * *i) ) /*0x56d4fc*/
      return Terrain::ConnectivityGraph(&MEMORY[0x87F7E8]); /*0x56d4fc*/
    v12 = *(this + 6); /*0x56d528*/
    aP1a = 0; /*0x56d52c*/
    v13 = 0; /*0x56d534*/
    v14 = v18; /*0x56d536*/
    v16 = 8; /*0x56d53a*/
    do /*0x56d574*/
    {
      v15 = v5 + 4 * *v14; /*0x56d544*/
      if ( *(_WORD *)(v12 + 2 * *(unsigned __int16 *)(v15 + 2)) != *(_WORD *)(v12 + 2 * v13) && *(_BYTE *)v15 != 7 ) /*0x56d55b*/
      {
        v13 = *(unsigned __int16 *)(v15 + 2); /*0x56d55d*/
        aP1a = (IUnknown *)((char *)aP1a + 1); /*0x56d564*/
      }
      ++v14; /*0x56d56c*/
      --v16; /*0x56d570*/
    }
    while ( v16 ); /*0x56d574*/
    result = (char)aP1a; /*0x56d576*/
    if ( (int)aP1a > 3 || *(_BYTE *)v5 ) /*0x56d580*/
      return Terrain::ConnectivityGraph(&MEMORY[0x87F7E8]); /*0x56d516*/
    *(_WORD *)(v5 + 2) = *(_WORD *)(v17 + 2); /*0x56d58f*/
  }
  return result; /*0x56d51b*/
}
}
} // namespace gamemd

// 0x56E990
namespace gamemd {
char Cell::UpdateTileType(IUnknown * aP0, IUnknown * aP1, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall Cell::UpdateTileType(IUnknown *aP0, IUnknown *aP1, int a3)
{
  unsigned int v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  _DWORD *v7; // eax
  int v8; // ecx
  ObjectClass *v9; // ebx
  int v10; // edx
  IUnknown *v11; // eax
  char v12; // si
  int v13; // ebp
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  bool v17; // sf
  int v18; // eax
  int v20; // [esp+14h] [ebp-14h] BYREF
  int v21; // [esp+18h] [ebp-10h]
  _DWORD a1[3]; // [esp+1Ch] [ebp-Ch] BYREF
  IUnknown *aP0a; // [esp+2Ch] [ebp+4h]

  v4 = SLOWORD(aP0->field_0) + (SHIWORD(aP0->field_0) << 9); /*0x56e9a9*/
  if ( v4 < 0x40000 && (v5 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v4)) != 0 ) /*0x56e9bf*/
  {
    v6 = v5; /*0x56e9c1*/
  }
  else
  {
    v6 = g_CellClassArray; /*0x56e9c7*/
    g_Map_GlobalCellIndex = (IUnknown *)aP0->field_0; /*0x56e9cc*/
  }
  if ( !(_BYTE)a3 ) /*0x56e9d7*/
  {
    v7 = (_DWORD *)v6[14]; /*0x56e9dd*/
    if ( v7 == (_DWORD *)0xFFFF ) /*0x56e9e5*/
      return (char)v7; /*0x56e9e5*/
    if ( v7 == (_DWORD *)255 ) /*0x56e9f0*/
      return (char)v7; /*0x56e9f0*/
    LOBYTE(v7) = CellClass::GetTerrainFlag( /*0x56ea0a*/
                   *(void **)(*(_DWORD *)&HouseClass_Player.__pad_5568[23160] + 4 * (_DWORD)v7),
                   *((unsigned __int8 *)v6 + 282));
    if ( !(_BYTE)v7 ) /*0x56ea11*/
      return (char)v7; /*0x56ea11*/
    v8 = SHIWORD(aP0->field_0) << 8; /*0x56ea2a*/
    a1[0] = (SLOWORD(aP0->field_0) << 8) + 128; /*0x56ea2d*/
    a1[1] = v8 + 128; /*0x56ea3b*/
    a1[2] = 0; /*0x56ea47*/
    Coord::To_Screen(*(_DWORD **)&stru_87C374.__pad_579C[22548], a1, (IUnknown *)&v20); /*0x56ea4f*/
    v21 -= 15 * *((char *)v6 + 283); /*0x56ea78*/
    Cell::CreateCrater(v20 - 128, v21 - 128, 256, 256, 0); /*0x56ea98*/
  }
  v9 = (ObjectClass *)aP1; /*0x56eaa3*/
  LOBYTE(v7) = (v6[80] & 0x2000) != 0; /*0x56eaaa*/
  if ( (_BYTE)aP1 != (_BYTE)v7 ) /*0x56eaae*/
  {
    v10 = v6[80]; /*0x56eab4*/
    v11 = (IUnknown *)v6[14]; /*0x56eabc*/
    BYTE1(v10) &= ~0x20u; /*0x56eac5*/
    v6[80] = v10 | (((unsigned __int8)aP1 & 1) << 13); /*0x56eace*/
    aP0a = v11; /*0x56ead9*/
    BuildingClass::AddUpgrade((int)&stru_87C374.__pad_14B0[8132], (IUnknown *)(v6 + 9)); /*0x56eadd*/
    v12 = 0; /*0x56eae2*/
    v13 = 8; /*0x56eae4*/
    do /*0x56eb67*/
    {
      v14 = v12 & 7; /*0x56eaeb*/
      v15 = 4 * v14 + 9041544; /*0x56eaee*/
      LOWORD(v14) = LOWORD(aP0->field_0) + *(_WORD *)&stru_89E138.__pad_14B0[4 * v14 + 160]; /*0x56eb05*/
      HIWORD(a3) = HIWORD(aP0->field_0) + *(_WORD *)(v15 + 2); /*0x56eb08*/
      LOWORD(a3) = v14; /*0x56eb0d*/
      v16 = SHIWORD(a3) << 9; /*0x56eb1c*/
      v17 = (__int16)v14 + v16 < 0; /*0x56eb1f*/
      v18 = (__int16)v14 + v16; /*0x56eb1f*/
      aP1 = (IUnknown *)a3; /*0x56eb21*/
      if ( v17 || v18 >= 0x40000 || (v7 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v18)) == 0 ) /*0x56eb39*/
      {
        g_Map_GlobalCellIndex = (IUnknown *)a3; /*0x56eb3b*/
        v7 = g_CellClassArray; /*0x56eb41*/
      }
      if ( (IUnknown *)v7[14] == aP0a ) /*0x56eb4f*/
        LOBYTE(v7) = Cell::UpdateTileType((IUnknown *)&aP1, (IUnknown *)v9, 1); /*0x56eb5d*/
      v12 = (v12 + 1) & 7; /*0x56eb63*/
      --v13; /*0x56eb66*/
    }
    while ( v13 ); /*0x56eb67*/
  }
  return (char)v7; /*0x56eb69*/
}
}
} // namespace gamemd

// 0x56EB80
namespace gamemd {
char Cell::SetTileType(IUnknown * aP0, IUnknown * aP1, IUnknown * aP2, IUnknown * aP3, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall Cell::SetTileType(IUnknown *aP0, IUnknown *aP1, IUnknown *aP2, IUnknown *aP3, int a5)
{
  IUnknown *v5; // edi
  unsigned int v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // esi
  char result; // al
  IUnknown *v10; // ebp
  int v11; // edx
  IUnknown *v12; // ebx
  char v13; // si
  int v14; // eax
  __int16 v15; // cx
  int v16; // eax
  bool v17; // sf
  int v18; // eax
  _DWORD *v19; // eax
  IUnknown *v20; // [esp-4h] [ebp-2Ch]
  int v21; // [esp+14h] [ebp-14h] BYREF
  ObjectClass *v22; // [esp+18h] [ebp-10h]
  _DWORD a1[3]; // [esp+1Ch] [ebp-Ch] BYREF

  v5 = aP0; /*0x56eb87*/
  v6 = SLOWORD(aP0->field_0) + (SHIWORD(aP0->field_0) << 9); /*0x56eb99*/
  if ( v6 < 0x40000 && (v7 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v6)) != 0 ) /*0x56ebaf*/
  {
    v8 = v7; /*0x56ebb1*/
  }
  else
  {
    v8 = g_CellClassArray; /*0x56ebb7*/
    g_Map_GlobalCellIndex = (IUnknown *)aP0->field_0; /*0x56ebbc*/
  }
  result = a5; /*0x56ebc1*/
  v10 = aP1; /*0x56ebc5*/
  if ( (_BYTE)a5 ) /*0x56ebcb*/
  {
    v12 = aP2; /*0x56ec69*/
  }
  else
  {
    v11 = SHIWORD(aP0->field_0); /*0x56ebd4*/
    a1[0] = (SLOWORD(aP0->field_0) << 8) + 128; /*0x56ebe5*/
    a1[1] = (v11 << 8) + 128; /*0x56ebfe*/
    a1[2] = 0; /*0x56ec02*/
    Coord::To_Screen(*(_DWORD **)&stru_87C374.__pad_579C[22548], a1, (IUnknown *)&v21); /*0x56ec0a*/
    v22 = (ObjectClass *)((char *)v22 - 15 * *((char *)v8 + 283)); /*0x56ec33*/
    result = Cell::CreateCrater(v21 - 128, (int)&v22[-1].fallRate, 256, 256, 0); /*0x56ec53*/
    v12 = (IUnknown *)v8[14]; /*0x56ec58*/
    v10 = aP1; /*0x56ec5b*/
    if ( aP1 == v12 ) /*0x56ec61*/
      return result; /*0x56ec61*/
  }
  if ( (IUnknown *)v8[14] != v10 ) /*0x56ec70*/
  {
    v20 = aP3; /*0x56ec7c*/
    v8[14] = v10; /*0x56ec7d*/
    House::AnnounceUpgrade((int)v8, v20); /*0x56ec80*/
    BuildingClass::AddUpgrade((int)&stru_87C374.__pad_14B0[8132], (IUnknown *)(v8 + 9)); /*0x56ec8e*/
    v13 = 0; /*0x56ec93*/
    aP1 = (IUnknown *)8; /*0x56ec95*/
    do /*0x56ed23*/
    {
      v14 = v13 & 7; /*0x56ec9f*/
      v15 = *(_WORD *)&stru_89E138.__pad_14B0[4 * v14 + 160]; /*0x56eca2*/
      LOWORD(v14) = HIWORD(v5->field_0) + *(_WORD *)&stru_89E138.__pad_14B0[4 * v14 + 162]; /*0x56ecb8*/
      LOWORD(a5) = LOWORD(v5->field_0) + v15; /*0x56ecbc*/
      HIWORD(a5) = v14; /*0x56ecc4*/
      v16 = (__int16)v14 << 9; /*0x56ecd0*/
      v17 = (__int16)a5 + v16 < 0; /*0x56ecd3*/
      v18 = (__int16)a5 + v16; /*0x56ecd3*/
      aP0 = (IUnknown *)a5; /*0x56ecd5*/
      if ( v17 || v18 >= 0x40000 || (v19 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v18)) == 0 ) /*0x56eced*/
      {
        g_Map_GlobalCellIndex = (IUnknown *)a5; /*0x56ecef*/
        v19 = g_CellClassArray; /*0x56ecf5*/
      }
      if ( (IUnknown *)v19[14] == v12 ) /*0x56ecfd*/
        Cell::SetTileType((IUnknown *)&aP0, v10, v12, aP3, 1); /*0x56ed11*/
      v13 = (v13 + 1) & 7; /*0x56ed1b*/
      result = (_BYTE)aP1 - 1; /*0x56ed1e*/
      aP1 = (IUnknown *)((char *)aP1 - 1); /*0x56ed1f*/
    }
    while ( aP1 ); /*0x56ed23*/
  }
  return result; /*0x56ed29*/
}
}
} // namespace gamemd

// 0x578080
namespace gamemd {
int Cell::GetGroundHeight(IUnknown * aP0)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall Cell::GetGroundHeight(IUnknown *aP0)
{
  int v1; // edx
  int v2; // eax
  int v3; // ecx
  _DWORD *v4; // ecx
  _DWORD v6[2]; // [esp+4h] [ebp-8h] BYREF
  IUnknown *aP0a; // [esp+10h] [ebp+4h]

  v1 = aP0->field_4; /*0x57808a*/
  v6[0] = aP0->field_0; /*0x57808d*/
  v6[1] = v1; /*0x578091*/
  v2 = aP0->field_4 / 256; /*0x5780ac*/
  v3 = v6[0] / 256 + (v2 << 9); /*0x5780b7*/
  if ( v3 < 0 /*0x5780ce*/
    || v3 >= *(int *)&stru_87C374.__pad_14B0[8452]
    || (v4 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v3)) == 0 )
  {
    LOWORD(aP0a) = v6[0] / 256; /*0x5780d0*/
    HIWORD(aP0a) = v2; /*0x5780d5*/
    v4 = g_CellClassArray; /*0x5780de*/
    g_Map_GlobalCellIndex = aP0a; /*0x5780e3*/
  }
  return Isometric::InitTables((int)v4, (IUnknown *)v6); /*0x5780f2*/
}
}
} // namespace gamemd

// 0x578AD0
namespace gamemd {
char Cell::IsPassableAllied(IUnknown * aP0, IUnknown * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall Cell::IsPassableAllied(IUnknown *aP0, IUnknown *aP1)
{
  unsigned int v2; // eax
  _DWORD *v3; // eax
  int v4; // esi

  v2 = SLOWORD(aP1->field_0) + (SHIWORD(aP1->field_0) << 9); /*0x578ade*/
  if ( v2 >= 0x40000 || (v3 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v2)) == 0 ) /*0x578af4*/
  {
    g_Map_GlobalCellIndex = (IUnknown *)aP1->field_0; /*0x578af8*/
    v3 = g_CellClassArray; /*0x578afd*/
  }
  v4 = v3[57]; /*0x578b03*/
  if ( !v4 ) /*0x578b0c*/
    return 1; /*0x578b58*/
  while ( aP0 == (IUnknown *)v4 /*0x578b30*/
       || (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) != 6
       || !*(_BYTE *)(*(_DWORD *)(v4 + 1312) + 5815) )
  {
LABEL_10:
    v4 = *(_DWORD *)(v4 + 48); /*0x578b4d*/
    if ( !v4 ) /*0x578b52*/
      return 1; /*0x578b52*/
  }
  if ( !Object::IsAlliedWithObjectHouse(*(_DWORD **)(v4 + 540), aP0) ) /*0x578b39*/
  {
    if ( BuildingClass::IsPoweredOn((_DWORD *)v4) ) /*0x578b44*/
      return 1; /*0x578b4b*/
    goto LABEL_10; /*0x578b4b*/
  }
  return BuildingClass::MakeTraversable((_DWORD *)v4); /*0x578b58*/
}
}
} // namespace gamemd

// 0x579B70
namespace gamemd {
int Cell::GetAdjacencyFlags(MouseClass * aP0)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall Cell::GetAdjacencyFlags(MouseClass *aP0)
{
  __int16 v1; // cx
  unsigned int v2; // eax
  _DWORD *v3; // eax
  int v4; // eax
  bool v5; // sf
  int v6; // eax
  _DWORD *v7; // eax
  __int16 v8; // dx
  unsigned int v9; // eax
  IUnknown *v10; // eax
  int v11; // eax
  int v12; // eax
  IUnknown *v13; // eax
  __int16 v14; // cx
  int v15; // eax
  int v16; // edx
  int v17; // eax
  _DWORD *v18; // eax
  int v19; // esi
  int v20; // esi
  unsigned int v21; // eax
  _DWORD *v22; // eax
  _DWORD *v23; // ebp
  unsigned int v24; // eax
  _DWORD *v25; // eax
  _DWORD *v26; // ebx
  int v27; // edi
  int v28; // edi
  int v29; // ebp
  IUnknown *v30; // eax
  IUnknown *v31; // eax
  IUnknown *v32; // eax
  IUnknown *v33; // eax
  int v35; // [esp+Ch] [ebp-2Ch]
  _DWORD *v36; // [esp+10h] [ebp-28h]
  _DWORD *v37; // [esp+14h] [ebp-24h]
  _DWORD *v38; // [esp+18h] [ebp-20h]
  _DWORD *v39; // [esp+1Ch] [ebp-1Ch]
  IUnknown *v40; // [esp+20h] [ebp-18h]
  IUnknown *v41; // [esp+24h] [ebp-14h]
  int v42; // [esp+28h] [ebp-10h] BYREF
  IUnknown *v43; // [esp+2Ch] [ebp-Ch] BYREF
  __int16 v44[4]; // [esp+30h] [ebp-8h] BYREF

  v35 = aP0->field_11B[0]; /*0x579b89*/
  aP0 = *(MouseClass **)&aP0->__pad_18[12]; /*0x579b8d*/
  *(_DWORD *)v44 = aP0; /*0x579b91*/
  if ( SHIWORD(aP0) + (__int16)aP0 <= *(int *)&stru_87C374.__pad_14B0[8376] /*0x579bdf*/
    || (__int16)aP0 - SHIWORD(aP0) >= *(int *)&stru_87C374.__pad_14B0[8376]
    || SHIWORD(aP0) - (__int16)aP0 >= *(int *)&stru_87C374.__pad_14B0[8376]
    || SHIWORD(aP0) + (__int16)aP0 > *(_DWORD *)&stru_87C374.__pad_14B0[8376]
                                   + 2 * *(_DWORD *)&stru_87C374.__pad_14B0[8380]
    || !Tactical::GetCellData(v44)[74] )
  {
    return 0; /*0x57a0b0*/
  }
  v1 = v44[0] + 1; /*0x579bfa*/
  LOWORD(aP0) = v44[0] + 1; /*0x579c00*/
  v42 = *(_DWORD *)&v44[1] - 1; /*0x579c05*/
  HIWORD(aP0) = v44[1] - 1; /*0x579c09*/
  v2 = (__int16)(v44[0] + 1) + ((__int16)(v44[1] - 1) << 9); /*0x579c17*/
  if ( v2 < 0x40000 && (v3 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v2)) != 0 ) /*0x579c27*/
  {
    v36 = v3; /*0x579c29*/
  }
  else
  {
    v36 = g_CellClassArray; /*0x579c33*/
    g_Map_GlobalCellIndex = (IUnknown *)aP0; /*0x579c3b*/
  }
  LOWORD(aP0) = v44[0] + 1; /*0x579c45*/
  v4 = v44[1] << 9; /*0x579c4d*/
  v5 = v1 + v4 < 0; /*0x579c50*/
  v6 = v1 + v4; /*0x579c50*/
  HIWORD(aP0) = v44[1]; /*0x579c52*/
  if ( v5 || v6 >= 0x40000 || (v7 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v6)) == 0 ) /*0x579c65*/
  {
    v38 = g_CellClassArray; /*0x579c71*/
    g_Map_GlobalCellIndex = (IUnknown *)aP0; /*0x579c79*/
  }
  else
  {
    v38 = v7; /*0x579c67*/
  }
  v8 = v44[1] + 1; /*0x579c7e*/
  LOWORD(aP0) = v44[0] + 1; /*0x579c81*/
  HIWORD(aP0) = v44[1] + 1; /*0x579c89*/
  v9 = v1 + ((__int16)(v44[1] + 1) << 9); /*0x579c97*/
  if ( v9 < 0x40000 && (v10 = *(IUnknown **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v9)) != 0 ) /*0x579ca7*/
  {
    v41 = v10; /*0x579ca9*/
  }
  else
  {
    v41 = (IUnknown *)g_CellClassArray; /*0x579cb3*/
    g_Map_GlobalCellIndex = (IUnknown *)aP0; /*0x579cbb*/
  }
  aP0 = (MouseClass *)(*(_DWORD *)v44 + 0x10000); /*0x579cc8*/
  v11 = v8 << 9; /*0x579cd3*/
  v5 = v44[0] + v11 < 0; /*0x579cd6*/
  v12 = v44[0] + v11; /*0x579cd6*/
  v43 = (IUnknown *)v44[0]; /*0x579cd8*/
  if ( v5 || v12 >= 0x40000 || (v13 = *(IUnknown **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v12)) == 0 ) /*0x579cea*/
  {
    v40 = (IUnknown *)g_CellClassArray; /*0x579cf6*/
    g_Map_GlobalCellIndex = (IUnknown *)aP0; /*0x579cfe*/
  }
  else
  {
    v40 = v13; /*0x579cec*/
  }
  v14 = v44[0] - 1; /*0x579d04*/
  HIWORD(aP0) = v44[1] + 1; /*0x579d07*/
  v15 = v8; /*0x579d0c*/
  v16 = (__int16)(v44[0] - 1); /*0x579d0f*/
  v15 <<= 9; /*0x579d12*/
  v5 = v16 + v15 < 0; /*0x579d15*/
  v17 = v16 + v15; /*0x579d15*/
  LOWORD(aP0) = v44[0] - 1; /*0x579d17*/
  if ( v5 || v17 >= 0x40000 || (v18 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v17)) == 0 ) /*0x579d2a*/
  {
    v39 = g_CellClassArray; /*0x579d36*/
    g_Map_GlobalCellIndex = (IUnknown *)aP0; /*0x579d3e*/
  }
  else
  {
    v39 = v18; /*0x579d2c*/
  }
  HIWORD(aP0) = v44[1]; /*0x579d46*/
  v19 = v44[1] << 9; /*0x579d4e*/
  v5 = v14 + v19 < 0; /*0x579d51*/
  v20 = v14 + v19; /*0x579d51*/
  LOWORD(aP0) = v44[0] - 1; /*0x579d53*/
  if ( v5 || v20 >= 0x40000 || !*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v20) ) /*0x579d63*/
  {
    v37 = g_CellClassArray; /*0x579d74*/
    g_Map_GlobalCellIndex = (IUnknown *)aP0; /*0x579d7c*/
  }
  else
  {
    v37 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v20); /*0x579d6a*/
  }
  LOWORD(aP0) = v44[0] - 1; /*0x579d85*/
  HIWORD(aP0) = v42; /*0x579d8d*/
  v21 = v14 + ((__int16)v42 << 9); /*0x579d9b*/
  if ( v21 < 0x40000 && (v22 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v21)) != 0 ) /*0x579dab*/
  {
    v23 = v22; /*0x579dad*/
  }
  else
  {
    v23 = g_CellClassArray; /*0x579db5*/
    g_Map_GlobalCellIndex = (IUnknown *)aP0; /*0x579dba*/
  }
  HIWORD(aP0) = v42; /*0x579dc6*/
  LOWORD(aP0) = v44[0]; /*0x579dcb*/
  v24 = (unsigned int)v43 + 512 * (__int16)v42; /*0x579dd6*/
  if ( v24 < 0x40000 && (v25 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v24)) != 0 ) /*0x579de6*/
  {
    v26 = v25; /*0x579de8*/
  }
  else
  {
    v26 = g_CellClassArray; /*0x579df0*/
    g_Map_GlobalCellIndex = (IUnknown *)aP0; /*0x579df5*/
  }
  v27 = v14 + (__int16)v42; /*0x579e07*/
  if ( v27 <= *(int *)&stru_87C374.__pad_14B0[8376] /*0x579e27*/
    || v14 - (__int16)v42 >= *(int *)&stru_87C374.__pad_14B0[8376]
    || (__int16)v42 - v14 >= *(int *)&stru_87C374.__pad_14B0[8376]
    || v27 > *(_DWORD *)&stru_87C374.__pad_14B0[8376] + 2 * *(_DWORD *)&stru_87C374.__pad_14B0[8380] )
  {
    v29 = 0; /*0x579e53*/
    v28 = v35; /*0x579e57*/
  }
  else
  {
    v28 = v35; /*0x579e29*/
    if ( *((char *)v23 + 283) != v35 + 4 || CellLand::IsBuildable((int)v23) ) /*0x579e3d*/
      v29 = 0; /*0x579e4d*/
    else
      v29 = 64; /*0x579e46*/
  }
  aP0 = (MouseClass *)(*(_DWORD *)v44 - 0x10000); /*0x579e6a*/
  if ( LayerClass::CoordinatesLegal(&stru_87C374.__pad_14B0[8132], (IUnknown *)&aP0) /*0x579e9a*/
    && *((char *)v26 + 283) == v28 + 4
    && !CellLand::IsBuildable((int)v26) )
  {
    v29 |= 0x80u; /*0x579ea3*/
  }
  aP0 = (MouseClass *)-65535; /*0x579eba*/
  v43 = (IUnknown *)CellStruct::Add(v44, (IUnknown *)&v42, (IUnknown *)&aP0)->field_0; /*0x579ed7*/
  if ( LayerClass::CoordinatesLegal(&stru_87C374.__pad_14B0[8132], (IUnknown *)&v43) /*0x579ef6*/
    && *((char *)v36 + 283) == v28 + 4
    && !CellLand::IsBuildable((int)v36) )
  {
    v29 |= 1u; /*0x579eff*/
  }
  aP0 = (MouseClass *)0xFFFF; /*0x579f10*/
  v43 = (IUnknown *)CellStruct::Add(v44, (IUnknown *)&v42, (IUnknown *)&aP0)->field_0; /*0x579f2d*/
  if ( LayerClass::CoordinatesLegal(&stru_87C374.__pad_14B0[8132], (IUnknown *)&v43) /*0x579f4c*/
    && *((char *)v37 + 283) == v28 + 4
    && !CellLand::IsBuildable((int)v37) )
  {
    v29 |= 0x20u; /*0x579f55*/
  }
  v30 = (IUnknown *)CellStruct::Set((rc_ptr_base *)&v43, 1, 0); /*0x579f60*/
  aP0 = (MouseClass *)CellStruct::Add(v44, (IUnknown *)&v42, v30)->field_0; /*0x579f80*/
  if ( LayerClass::CoordinatesLegal(&stru_87C374.__pad_14B0[8132], (IUnknown *)&aP0) /*0x579f9f*/
    && *((char *)v38 + 283) == v28 + 4
    && !CellLand::IsBuildable((int)v38) )
  {
    v29 |= 2u; /*0x579fa8*/
  }
  v31 = (IUnknown *)CellStruct::Set((rc_ptr_base *)&v43, -1, 1); /*0x579fb2*/
  aP0 = (MouseClass *)CellStruct::Add(v44, (IUnknown *)&v42, v31)->field_0; /*0x579fd2*/
  if ( LayerClass::CoordinatesLegal(&stru_87C374.__pad_14B0[8132], (IUnknown *)&aP0) /*0x579ff1*/
    && *((char *)v39 + 283) == v28 + 4
    && !CellLand::IsBuildable((int)v39) )
  {
    v29 |= 0x10u; /*0x579ffa*/
  }
  v32 = (IUnknown *)CellStruct::Set((rc_ptr_base *)&v43, 0, 1); /*0x57a005*/
  aP0 = (MouseClass *)CellStruct::Add(v44, (IUnknown *)&v42, v32)->field_0; /*0x57a025*/
  if ( LayerClass::CoordinatesLegal(&stru_87C374.__pad_14B0[8132], (IUnknown *)&aP0) /*0x57a044*/
    && SHIBYTE(v40->field_118) == v28 + 4
    && !CellLand::IsBuildable((int)v40) )
  {
    v29 |= 8u; /*0x57a04d*/
  }
  v33 = (IUnknown *)CellStruct::Set((rc_ptr_base *)&v43, 1, 1); /*0x57a058*/
  aP0 = (MouseClass *)CellStruct::Add(v44, (IUnknown *)&v42, v33)->field_0; /*0x57a078*/
  if ( LayerClass::CoordinatesLegal(&stru_87C374.__pad_14B0[8132], (IUnknown *)&aP0) /*0x57a097*/
    && SHIBYTE(v41->field_118) == v28 + 4
    && !CellLand::IsBuildable((int)v41) )
  {
    return v29 | 4; /*0x57a0a0*/
  }
  return v29; /*0x57a0a7*/
}
}
} // namespace gamemd

// 0x57B210
namespace gamemd {
int Cell::GetTerrainMask(IUnknown * aP1, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Cell::GetTerrainMask(_DWORD *this, IUnknown *aP1, int a3)
{
  Random *v3; // ebx
  int v5; // esi
  int v6; // eax
  int result; // eax
  int v8; // eax
  char *CellData; // eax
  int v10; // edx
  int v11; // esi
  int *v12; // ecx
  _DWORD *v13; // esi
  bool v14; // bl
  int v15; // edi
  int *v16; // ecx
  _DWORD *v17; // esi
  int *v18; // ecx
  _DWORD *v19; // esi
  int *v20; // ecx
  _DWORD *v21; // esi
  int *v22; // ecx
  _DWORD *v23; // esi
  int *v24; // ecx
  _DWORD *v25; // esi
  int *v26; // ecx
  _DWORD *v27; // esi
  int *v28; // ecx
  _DWORD *v29; // esi
  int v30; // [esp+18h] [ebp-8h]
  bool aP1a; // [esp+24h] [ebp+4h]

  v3 = (Random *)dword_AA0738; /*0x57b214*/
  v5 = aP1->field_24; /*0x57b224*/
  v30 = dword_AA0738 + 14; /*0x57b239*/
  aP1a = Cell::IsValidHeight(&aP1->field_0); /*0x57b248*/
  v6 = SHIWORD(v5) + (__int16)v5; /*0x57b254*/
  if ( v6 <= g_MapCellHeight_Value /*0x57b271*/
    || (__int16)v5 - SHIWORD(v5) >= g_MapCellHeight_Value
    || SHIWORD(v5) - (__int16)v5 >= g_MapCellHeight_Value
    || v6 > g_MapCellCount )
  {
    return 0; /*0x57b27c*/
  }
  if ( a3 ) /*0x57b285*/
  {
    if ( a3 == 1 ) /*0x57b2a1*/
    {
      v8 = aP1->field_38; /*0x57b2a3*/
      if ( v8 >= (int)v3 && v8 < v30 ) /*0x57b2ae*/
        return 0; /*0x57b2b9*/
    }
  }
  else if ( !Cell::IsEmpty(aP1) ) /*0x57b289*/
  {
    return 0; /*0x57b29b*/
  }
  a3 = aP1->field_24; /*0x57b2c3*/
  CellData = Tactical::GetCellData((__int16 *)&a3); /*0x57b2c7*/
  if ( !CellData[74] ) /*0x57b2cc*/
    return 0; /*0x57b2d6*/
  result = *((_DWORD *)CellData + 16); /*0x57b2df*/
  if ( result < 0 ) /*0x57b2e4*/
  {
    v10 = *(this + 79); /*0x57b2f1*/
    v11 = (__int16)v5 + (SHIWORD(v5) << 9); /*0x57b2f7*/
    v12 = *(int **)(v10 + 4 * v11 - 2052); /*0x57b2f9*/
    v13 = (_DWORD *)(v10 + 4 * v11 - 2052); /*0x57b300*/
    if ( v12 && Cell::IsValidHeight(v12) ) /*0x57b30b*/
    {
      v14 = aP1a; /*0x57b328*/
      v15 = 64; /*0x57b32c*/
    }
    else if ( *v13 ) /*0x57b314*/
    {
      v15 = 0; /*0x57b333*/
      v14 = aP1a; /*0x57b337*/
    }
    else
    {
      v14 = aP1a; /*0x57b319*/
      if ( aP1a ) /*0x57b31f*/
        v15 = 64; /*0x57b321*/
      else
        v15 = 0; /*0x57b33d*/
    }
    v16 = (int *)v13[1]; /*0x57b341*/
    v17 = v13 + 1; /*0x57b344*/
    if ( v16 && Cell::IsValidHeight(v16) || !*v17 && v14 ) /*0x57b35b*/
      v15 |= 0x80u; /*0x57b35d*/
    v18 = (int *)v17[1]; /*0x57b363*/
    v19 = v17 + 1; /*0x57b366*/
    if ( v18 && Cell::IsValidHeight(v18) || !*v19 && v14 ) /*0x57b37d*/
      v15 |= 1u; /*0x57b37f*/
    v20 = (int *)v19[510]; /*0x57b382*/
    v21 = v19 + 510; /*0x57b388*/
    if ( v20 && Cell::IsValidHeight(v20) || !*v21 && v14 ) /*0x57b3a2*/
      v15 |= 0x20u; /*0x57b3a4*/
    v22 = (int *)v21[2]; /*0x57b3a7*/
    v23 = v21 + 2; /*0x57b3aa*/
    if ( v22 && Cell::IsValidHeight(v22) || !*v23 && v14 ) /*0x57b3c1*/
      v15 |= 2u; /*0x57b3c3*/
    v24 = (int *)v23[510]; /*0x57b3c6*/
    v25 = v23 + 510; /*0x57b3cc*/
    if ( v24 && Cell::IsValidHeight(v24) || !*v25 && v14 ) /*0x57b3e6*/
      v15 |= 0x10u; /*0x57b3e8*/
    v26 = (int *)v25[1]; /*0x57b3eb*/
    v27 = v25 + 1; /*0x57b3ee*/
    if ( v26 && Cell::IsValidHeight(v26) || !*v27 && v14 ) /*0x57b405*/
      v15 |= 8u; /*0x57b407*/
    v28 = (int *)v27[1]; /*0x57b40a*/
    v29 = v27 + 1; /*0x57b40d*/
    if ( v28 && Cell::IsValidHeight(v28) || !*v29 && v14 ) /*0x57b424*/
      return v15 | 4; /*0x57b426*/
    return v15; /*0x57b429*/
  }
  return result; /*0x57b273*/
}
}
} // namespace gamemd

// 0x586360
namespace gamemd {
bool Cell::IsPassable(IUnknown * aP0)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __stdcall Cell::IsPassable(IUnknown *aP0)
{
  int v1; // eax
  int v2; // ecx
  unsigned int v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // ecx
  _DWORD *NeighbourContent; // eax
  unsigned int v7; // eax
  __int16 v9; // [esp+4h] [ebp-8h]
  __int16 v10; // [esp+4h] [ebp-8h]
  IUnknown *aP0a; // [esp+10h] [ebp+4h]
  IUnknown *aP0b; // [esp+10h] [ebp+4h]

  v1 = aP0->field_8 / g_MapRenderState; /*0x58636c*/
  if ( (v1 & 1) != 0 ) /*0x586375*/
  {
    v9 = aP0->field_0 / 256; /*0x58638d*/
    v2 = v1 / 2 + 1; /*0x5863b0*/
    HIWORD(aP0a) = aP0->field_4 / 256 - v2; /*0x5863b5*/
    LOWORD(aP0a) = v9 - v2; /*0x5863ba*/
    v3 = (__int16)(v9 - v2) + (SHIWORD(aP0a) << 9); /*0x5863c8*/
    if ( v3 < 0x40000 && (v4 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v3)) != 0 ) /*0x5863de*/
    {
      v5 = v4; /*0x5863e0*/
    }
    else
    {
      v5 = g_CellClassArray; /*0x5863e8*/
      g_Map_GlobalCellIndex = aP0a; /*0x5863ed*/
    }
    if ( (v5[75] & 8) != 0 ) /*0x5863f9*/
      return 0; /*0x5863f9*/
    NeighbourContent = Cell::GetNeighbourContent(v5, 3u); /*0x586401*/
  }
  else
  {
    v10 = aP0->field_0 / 256; /*0x58641a*/
    HIWORD(aP0b) = aP0->field_4 / 256 - v1 / 2; /*0x586441*/
    LOWORD(aP0b) = v10 - v1 / 2; /*0x586446*/
    v7 = (__int16)aP0b + (SHIWORD(aP0b) << 9); /*0x586454*/
    if ( v7 >= 0x40000 || (NeighbourContent = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v7)) == 0 ) /*0x58646a*/
    {
      g_Map_GlobalCellIndex = aP0b; /*0x586470*/
      NeighbourContent = g_CellClassArray; /*0x586475*/
    }
  }
  return (NeighbourContent[75] & 8) == 0; /*0x586485*/
}
}
} // namespace gamemd

// 0x5A9940
namespace gamemd {
Cell * Cell::Clear()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
Cell *__thiscall Cell::Clear(_WORD *this)
{
  *this = 0; /*0x5a9942*/
  *(this + 1) = 0; /*0x5a9947*/
  *((_DWORD *)this + 1) = -1; /*0x5a994d*/
  return (Cell *)this; /*0x5a9954*/
}
}
} // namespace gamemd

// 0x68BD00
namespace gamemd {
unsigned int * Cell::GetWorldCoords(unsigned int * a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall Cell_GetWorldCoords(__int16 *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // esi
  int *v4; // eax
  int v5; // edx
  int v6; // edi
  int v7; // ecx
  _BYTE v9[12]; // [esp+8h] [ebp-Ch] BYREF

  v3 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], this + 2 * a3 + 793); /*0x68bd1b*/
  v4 = (int *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*v3 + 72))(v3, v9); /*0x68bd26*/
  v5 = *v4; /*0x68bd29*/
  v6 = v4[1]; /*0x68bd2b*/
  v7 = v4[2]; /*0x68bd2e*/
  if ( (v3[80] & 0x500) != 0 ) /*0x68bd3a*/
    v7 += MEMORY[0xB054BC]; /*0x68bd3c*/
  *a2 = v5; /*0x68bd48*/
  a2[1] = v6; /*0x68bd4a*/
  a2[2] = v7; /*0x68bd4e*/
  return a2; /*0x68bd4d*/
}
}
} // namespace gamemd

// 0x6B5F80
namespace gamemd {
char Cell::IsWalkable(unsigned short * a2, char a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall Cell_IsWalkable(int *this, _WORD *a2, char a3)
{
  int v3; // ebx
  int v5; // ebp
  _DWORD *v6; // esi
  int v7; // esi
  int *v9; // [esp+10h] [ebp-8h]
  int v10; // [esp+14h] [ebp-4h] BYREF
  int v11; // [esp+1Ch] [ebp+4h]

  v3 = 0; /*0x6b5f8b*/
  v9 = this; /*0x6b5f91*/
  if ( *(this + 167) <= 0 ) /*0x6b5f95*/
    return 1; /*0x6b6060*/
  while ( 1 ) /*0x6b5fa5*/
  {
    v5 = 0; /*0x6b5fa5*/
    if ( *(this + 166) > 0 ) /*0x6b5fa9*/
      break; /*0x6b5fa9*/
LABEL_15:
    if ( ++v3 >= *(this + 167) ) /*0x6b605a*/
      return 1; /*0x6b605a*/
  }
  while ( 1 ) /*0x6b5fbc*/
  {
    LOWORD(v11) = v5 + *a2; /*0x6b5fbc*/
    HIWORD(v11) = v3 + a2[1]; /*0x6b5fc1*/
    v10 = v11; /*0x6b5fd4*/
    v6 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v10); /*0x6b5fe3*/
    if ( !(unsigned __int8)LayerClass::CoordinatesLegal(a2) /*0x6b6011*/
      || *((_BYTE *)v6 + 284)
      || v6[18] != -1
      || v6[17] != -1
      || !a3 && Cell::IsBridge(v6) )
    {
      return 0; /*0x6b6060*/
    }
    v7 = v6[14]; /*0x6b601a*/
    if ( v7 < 0 || v7 >= MEMORY[0xA8ED38] ) /*0x6b6027*/
      v7 = 0; /*0x6b6029*/
    if ( !*(_BYTE *)(*((_DWORD *)MEMORY[0xA8ED2C] + v7) + 736) ) /*0x6b6034*/
      return 0; /*0x6b6060*/
    if ( ++v5 >= v9[166] ) /*0x6b6049*/
    {
      this = v9; /*0x6b604f*/
      goto LABEL_15; /*0x6b604f*/
    }
  }
}
}
} // namespace gamemd

// 0x6D2790
namespace gamemd {
char Cell::CreateCrater(IUnknown aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall Cell::CreateCrater(IUnknown aP2)
{
  int v1; // ecx
  int *v2; // eax
  int v3; // ebp
  int v4; // ecx
  int v5; // edx
  int v6; // esi
  int v7; // eax
  int v8; // eax
  int v9; // edx
  IUnknown *v14; // eax
  char *v11; // esi
  char *v12; // edi
  int v13; // eax
  bool cc41; // cc
  int v15; // eax
  bool v16; // bl
  int v17; // edx
  int v18; // ecx
  int v19; // edx
  const RECT *v21; // [esp+0h] [ebp-68h]
  IUnknown *v26; // [esp+4h] [ebp-64h]
  IUnknown *v23; // [esp+10h] [ebp-58h]
  int v24; // [esp+14h] [ebp-54h]
  int v25; // [esp+18h] [ebp-50h]
  int var4C; // [esp+1Ch] [ebp-4Ch]
  int v27; // [esp+20h] [ebp-48h]
  int v28; // [esp+24h] [ebp-44h]
  int v29; // [esp+28h] [ebp-40h]
  int v30; // [esp+2Ch] [ebp-3Ch]
  int v31; // [esp+30h] [ebp-38h] BYREF
  int v32; // [esp+34h] [ebp-34h]
  int v33; // [esp+38h] [ebp-30h]
  int v34; // [esp+3Ch] [ebp-2Ch]
  _DWORD v35[5]; // [esp+40h] [ebp-28h] BYREF
  _DWORD v36[5]; // [esp+54h] [ebp-14h] BYREF

  v1 = *(_DWORD *)&stru_B05488.__pad_579C[8804]; /*0x6d2793*/
  v25 = -1; /*0x6d27a1*/
  var4C = 0x7FFFFFFF; /*0x6d27a9*/
  v24 = 0; /*0x6d27b1*/
  if ( *(int *)&stru_B05488.__pad_579C[8804] <= 0 ) /*0x6d27b5*/
    goto LABEL_43; /*0x6d27b5*/
  v23 = 0; /*0x6d27bb*/
  do /*0x6d2a15*/
  {
    v31 = *(int *)((char *)&v23->field_0 + *(_DWORD *)&stru_B05488.__pad_579C[8792]); /*0x6d27d0*/
    v32 = *(int *)((char *)&v23->field_4 + *(_DWORD *)&stru_B05488.__pad_579C[8792]); /*0x6d27d7*/
    v33 = *(int *)((char *)&v23->field_8 + *(_DWORD *)&stru_B05488.__pad_579C[8792]); /*0x6d27de*/
    v34 = *(int *)((char *)&v23->field_C + *(_DWORD *)&stru_B05488.__pad_579C[8792]); /*0x6d27f2*/
    v2 = ClipRectIntersection((IUnknown *)v36, (IUnknown *)&v31, &aP2, 0, 0); /*0x6d27f6*/
    v3 = v34; /*0x6d2801*/
    v27 = *v2; /*0x6d2805*/
    v28 = v2[1]; /*0x6d280c*/
    v4 = v32; /*0x6d2810*/
    v29 = v2[2]; /*0x6d2817*/
    v5 = v31; /*0x6d281b*/
    v30 = v2[3]; /*0x6d2824*/
    if ( v33 <= 0 || v34 <= 0 ) /*0x6d2830*/
    {
      v6 = aP2.field_C; /*0x6d28c8*/
      v35[1] = aP2.field_4; /*0x6d28cc*/
      v7 = aP2.field_8; /*0x6d28d0*/
      v35[0] = aP2.field_0; /*0x6d28d4*/
    }
    else if ( aP2.field_8 <= 0 || aP2.field_C <= 0 ) /*0x6d2844*/
    {
      v35[0] = v31; /*0x6d28b2*/
      v35[1] = v32; /*0x6d28b6*/
      v7 = v33; /*0x6d28ba*/
      v6 = v34; /*0x6d28bc*/
    }
    else
    {
      v6 = v34; /*0x6d2846*/
      v7 = v33; /*0x6d284e*/
      if ( v31 > aP2.field_0 ) /*0x6d2850*/
      {
        v7 = v31 + v33 - aP2.field_0; /*0x6d2854*/
        v5 = aP2.field_0; /*0x6d2856*/
      }
      if ( v32 > aP2.field_4 ) /*0x6d285e*/
      {
        v6 = v32 - aP2.field_4 + v34; /*0x6d2862*/
        v4 = aP2.field_4; /*0x6d2864*/
      }
      if ( v7 + v5 < aP2.field_0 + aP2.field_8 ) /*0x6d2871*/
        v7 = aP2.field_8 - v5 + aP2.field_0 + 1; /*0x6d287d*/
      if ( v6 + v4 < aP2.field_C + aP2.field_4 ) /*0x6d2890*/
        v6 = aP2.field_4 - v4 + aP2.field_C + 1; /*0x6d289c*/
      v3 = v34; /*0x6d28a0*/
      v35[0] = v5; /*0x6d28a4*/
      v5 = v31; /*0x6d28a8*/
      v35[1] = v4; /*0x6d28ac*/
    }
    if ( v29 > 0 && v30 > 0 ) /*0x6d28ea*/
    {
      if ( v27 == aP2.field_0 && v28 == aP2.field_4 && v29 == aP2.field_8 && v30 == aP2.field_C ) /*0x6d291e*/
      {
        LOBYTE(v8) = aP2.__pad_10[0]; /*0x6d2920*/
        if ( !aP2.__pad_10[0] ) /*0x6d2926*/
          return v8; /*0x6d2926*/
        LOBYTE(v8) = (_BYTE)v23; /*0x6d2932*/
        if ( v23->__pad_10[*(_DWORD *)&stru_B05488.__pad_579C[8792]] ) /*0x6d2936*/
          return v8; /*0x6d293c*/
      }
      else if ( v27 == v5 && v28 == v32 && v29 == v33 && v30 == v3 ) /*0x6d2967*/
      {
        if ( aP2.__pad_10[0] || !v23->__pad_10[*(_DWORD *)&stru_B05488.__pad_579C[8792]] ) /*0x6d297b*/
        {
          if ( v24 < *(int *)&stru_B05488.__pad_579C[8804] ) /*0x6d298e*/
          {
            v9 = v24; /*0x6d2991*/
            --*(_DWORD *)&stru_B05488.__pad_579C[8804]; /*0x6d2995*/
            if ( v24 < *(int *)&stru_B05488.__pad_579C[8804] ) /*0x6d299a*/
            {
              v14 = v23; /*0x6d299c*/
              do /*0x6d29be*/
              {
                ++v9; /*0x6d29a6*/
                v11 = &v14->__pad_10[*(_DWORD *)&stru_B05488.__pad_579C[8792] + 4]; /*0x6d29a7*/
                v12 = (char *)v14 + *(_DWORD *)&stru_B05488.__pad_579C[8792]; /*0x6d29ab*/
                v14 = (IUnknown *)((char *)v14 + 20); /*0x6d29b3*/
                qmemcpy(v12, v11, 0x14u); /*0x6d29b6*/
              }
              while ( v9 < *(int *)&stru_B05488.__pad_579C[8804] ); /*0x6d29be*/
            }
          }
          --v24; /*0x6d29c8*/
          v23 = (IUnknown *)((char *)v23 - 20); /*0x6d29cc*/
        }
      }
      else
      {
        v13 = v6 * v7; /*0x6d29de*/
        if ( v13 < v33 * v3 + aP2.field_8 * aP2.field_C && v13 < var4C ) /*0x6d29eb*/
        {
          var4C = v13; /*0x6d29f1*/
          v25 = v24; /*0x6d29f5*/
        }
      }
    }
    v1 = *(_DWORD *)&stru_B05488.__pad_579C[8804]; /*0x6d2a01*/
    cc41 = ++v24 < *(_DWORD *)&stru_B05488.__pad_579C[8804]; /*0x6d2a0b*/
    v23 = (IUnknown *)((char *)v23 + 20); /*0x6d2a11*/
  }
  while ( cc41 ); /*0x6d2a15*/
  if ( v25 == -1 ) /*0x6d2a22*/
  {
LABEL_43:
    v36[0] = aP2.field_0; /*0x6d2a30*/
    v36[2] = aP2.field_8; /*0x6d2a38*/
    LOBYTE(v36[4]) = aP2.__pad_10[0]; /*0x6d2a40*/
    LOBYTE(v8) = stru_B05488.__pad_579C[8796]; /*0x6d2a44*/
    v36[1] = aP2.field_4; /*0x6d2a49*/
    v36[3] = aP2.field_C; /*0x6d2a53*/
    if ( v1 < *(int *)&stru_B05488.__pad_579C[8796] /*0x6d2a8e*/
      || (stru_B05488.__pad_579C[8801] || !*(_DWORD *)&stru_B05488.__pad_579C[8796])
      && *(int *)&stru_B05488.__pad_579C[8808] > 0
      && (LOBYTE(v8) = (*(int (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_B05488.__pad_579C[8788] + 8))(
                         &stru_B05488.__pad_579C[8788],
                         *(_DWORD *)&stru_B05488.__pad_579C[8808] + *(_DWORD *)&stru_B05488.__pad_579C[8796],
                         0),
          (_BYTE)v8) )
    {
      v15 = (*(_DWORD *)&stru_B05488.__pad_579C[8804])++; /*0x6d2a9e*/
      v8 = 5 * v15; /*0x6d2aad*/
      qmemcpy((void *)(*(_DWORD *)&stru_B05488.__pad_579C[8792] + 4 * v8), v36, 0x14u); /*0x6d2ab8*/
    }
  }
  else
  {
    v16 = aP2.__pad_10[0] || *(_BYTE *)(*(_DWORD *)&stru_B05488.__pad_579C[8792] + 20 * v25 + 16); /*0x6d2ae0*/
    v8 = Rect::Union((IUnknown *)(20 * v25 + *(_DWORD *)&stru_B05488.__pad_579C[8792]), v21, (const RECT *)v26); /*0x6d2b01*/
    v17 = *(_DWORD *)(v8 + 4); /*0x6d2b08*/
    v35[0] = *(_DWORD *)v8; /*0x6d2b0b*/
    v18 = *(_DWORD *)(v8 + 8); /*0x6d2b0f*/
    v35[1] = v17; /*0x6d2b12*/
    v19 = *(_DWORD *)(v8 + 12); /*0x6d2b16*/
    LOBYTE(v8) = stru_B05488.__pad_579C[8792]; /*0x6d2b19*/
    v35[2] = v18; /*0x6d2b1e*/
    v35[3] = v19; /*0x6d2b27*/
    LOBYTE(v35[4]) = v16; /*0x6d2b32*/
    qmemcpy((void *)(20 * v25 + *(_DWORD *)&stru_B05488.__pad_579C[8792]), v35, 0x14u); /*0x6d2b36*/
  }
  return v8; /*0x6d2aba*/
}
}
} // namespace gamemd

// 0x6D8700
namespace gamemd {
int Cell::GetAdjacentPassableMask(IUnknown * aP0, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall Cell::GetAdjacentPassableMask(IUnknown *aP0, int a2)
{
  int v2; // ebp
  IUnknown *v3; // edi
  _DWORD *v4; // eax
  int v5; // eax
  char v6; // bl
  __int16 v7; // cx
  __int16 v8; // dx
  __int16 v9; // ax
  __int16 v10; // ax
  __int16 v11; // cx
  __int16 v12; // ax
  __int16 v13; // cx
  __int16 v14; // dx
  unsigned __int8 v15; // cl
  int v16; // eax
  __int16 v17; // ax
  __int16 v18; // cx
  __int16 v19; // dx
  __int16 v20; // dx
  __int16 v21; // ax
  __int16 v22; // dx
  __int16 v23; // ax
  __int16 v24; // cx

  v2 = 0; /*0x6d870e*/
  v3 = (IUnknown *)-1; /*0x6d8710*/
  v4 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)aP0); /*0x6d8713*/
  if ( !(_BYTE)a2 ) /*0x6d871e*/
  {
    v16 = v4[75]; /*0x6d88f4*/
    if ( (v16 & 0x18) == 0 ) /*0x6d88fc*/
      v3 = (IUnknown *)-2; /*0x6d88fe*/
    v6 = 8; /*0x6d8903*/
    if ( (v16 & 8) != 0 ) /*0x6d890a*/
    {
      v17 = HIWORD(aP0->field_0) - 1; /*0x6d8919*/
      LOWORD(a2) = LOWORD(aP0->field_0) - 1; /*0x6d891b*/
      HIWORD(a2) = v17; /*0x6d8920*/
      if ( (*((_BYTE *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&a2) + 300) & 8) == 0 ) /*0x6d8942*/
        v2 = 64; /*0x6d8944*/
      v18 = HIWORD(aP0->field_0) - 1; /*0x6d8950*/
      LOWORD(a2) = aP0->field_0; /*0x6d8952*/
      HIWORD(a2) = v18; /*0x6d8957*/
      if ( (*((_BYTE *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&a2) + 300) & 8) == 0 ) /*0x6d8979*/
        v2 |= 0x80u; /*0x6d897b*/
      v19 = HIWORD(aP0->field_0) - 1; /*0x6d898a*/
      LOWORD(a2) = LOWORD(aP0->field_0) + 1; /*0x6d898c*/
      HIWORD(a2) = v19; /*0x6d8995*/
      if ( (*((_BYTE *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&a2) + 300) & 8) == 0 ) /*0x6d89b3*/
        v2 |= 1u; /*0x6d89b5*/
      v20 = LOWORD(aP0->field_0) - 1; /*0x6d89bf*/
      HIWORD(a2) = HIWORD(aP0->field_0); /*0x6d89c1*/
      LOWORD(a2) = v20; /*0x6d89c6*/
      if ( (*((_BYTE *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&a2) + 300) & 8) == 0 ) /*0x6d89e8*/
        v2 |= 0x20u; /*0x6d89ea*/
      v21 = LOWORD(aP0->field_0) + 1; /*0x6d89f4*/
      HIWORD(a2) = HIWORD(aP0->field_0); /*0x6d89f6*/
      LOWORD(a2) = v21; /*0x6d89fb*/
      if ( (*((_BYTE *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&a2) + 300) & 8) == 0 ) /*0x6d8a1d*/
        v2 |= 2u; /*0x6d8a1f*/
      v22 = HIWORD(aP0->field_0) + 1; /*0x6d8a2b*/
      LOWORD(a2) = LOWORD(aP0->field_0) - 1; /*0x6d8a2d*/
      HIWORD(a2) = v22; /*0x6d8a36*/
      if ( (*((_BYTE *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&a2) + 300) & 8) == 0 ) /*0x6d8a54*/
        v2 |= 0x10u; /*0x6d8a56*/
      v23 = HIWORD(aP0->field_0) + 1; /*0x6d8a60*/
      LOWORD(a2) = aP0->field_0; /*0x6d8a62*/
      HIWORD(a2) = v23; /*0x6d8a67*/
      if ( (*((_BYTE *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&a2) + 300) & 8) == 0 ) /*0x6d8a89*/
        v2 |= 8u; /*0x6d8a8b*/
      v24 = HIWORD(aP0->field_0) + 1; /*0x6d8a96*/
      LOWORD(a2) = LOWORD(aP0->field_0) + 1; /*0x6d8a98*/
      HIWORD(a2) = v24; /*0x6d8a9d*/
      v15 = *((_BYTE *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&a2) + 300); /*0x6d8ab9*/
      goto LABEL_38; /*0x6d8ab9*/
    }
    return (int)v3; /*0x6d8ad4*/
  }
  v5 = v4[80]; /*0x6d8724*/
  if ( (v5 & 3) == 0 ) /*0x6d872c*/
    v3 = (IUnknown *)-2; /*0x6d872e*/
  v6 = 2; /*0x6d8733*/
  if ( (v5 & 2) == 0 ) /*0x6d873a*/
    return (int)v3; /*0x6d873a*/
  v7 = HIWORD(aP0->field_0) - 1; /*0x6d8749*/
  LOWORD(a2) = LOWORD(aP0->field_0) - 1; /*0x6d874b*/
  HIWORD(a2) = v7; /*0x6d8750*/
  if ( (*((_BYTE *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&a2) + 320) & 2) == 0 ) /*0x6d8772*/
    v2 = 64; /*0x6d8774*/
  v8 = HIWORD(aP0->field_0); /*0x6d877c*/
  LOWORD(a2) = aP0->field_0; /*0x6d8780*/
  HIWORD(a2) = v8 - 1; /*0x6d878b*/
  if ( (*((_BYTE *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&a2) + 320) & 2) == 0 ) /*0x6d87a9*/
    v2 |= 0x80u; /*0x6d87ab*/
  v9 = HIWORD(aP0->field_0) - 1; /*0x6d87ba*/
  LOWORD(a2) = LOWORD(aP0->field_0) + 1; /*0x6d87bc*/
  HIWORD(a2) = v9; /*0x6d87c1*/
  if ( (*((_BYTE *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&a2) + 320) & 2) == 0 ) /*0x6d87e3*/
    v2 |= 1u; /*0x6d87e5*/
  v10 = LOWORD(aP0->field_0) - 1; /*0x6d87ef*/
  HIWORD(a2) = HIWORD(aP0->field_0); /*0x6d87f1*/
  LOWORD(a2) = v10; /*0x6d87f6*/
  if ( (*((_BYTE *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&a2) + 320) & 2) == 0 ) /*0x6d8818*/
    v2 |= 0x20u; /*0x6d881a*/
  v11 = LOWORD(aP0->field_0) + 1; /*0x6d8824*/
  HIWORD(a2) = HIWORD(aP0->field_0); /*0x6d8826*/
  LOWORD(a2) = v11; /*0x6d882b*/
  if ( (*((_BYTE *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&a2) + 320) & 2) == 0 ) /*0x6d884d*/
    v2 |= 2u; /*0x6d884f*/
  v12 = HIWORD(aP0->field_0) + 1; /*0x6d885a*/
  LOWORD(a2) = LOWORD(aP0->field_0) - 1; /*0x6d885c*/
  HIWORD(a2) = v12; /*0x6d8861*/
  if ( (*((_BYTE *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&a2) + 320) & 2) == 0 ) /*0x6d8883*/
    v2 |= 0x10u; /*0x6d8885*/
  v13 = HIWORD(aP0->field_0) + 1; /*0x6d888f*/
  LOWORD(a2) = aP0->field_0; /*0x6d8891*/
  HIWORD(a2) = v13; /*0x6d8896*/
  if ( (*((_BYTE *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&a2) + 320) & 2) == 0 ) /*0x6d88b8*/
    v2 |= 8u; /*0x6d88ba*/
  v14 = HIWORD(aP0->field_0) + 1; /*0x6d88c6*/
  LOWORD(a2) = LOWORD(aP0->field_0) + 1; /*0x6d88c8*/
  HIWORD(a2) = v14; /*0x6d88d1*/
  v15 = *((_BYTE *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&a2) + 320); /*0x6d88e9*/
LABEL_38:
  if ( (v15 & (unsigned __int8)v6) == 0 ) /*0x6d8ac1*/
    v2 |= 4u; /*0x6d8ac3*/
  return byte_7F4194[v2]; /*0x6d8acd*/
}
}
} // namespace gamemd
