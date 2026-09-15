// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x41BE00
namespace ra2 {
namespace game {
int ObjectClass::GetCoordsThunk2()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ObjectClass::GetCoordsThunk2(#374 *this)
{
  _DWORD *v1; // ecx
  _BYTE v3[12]; // [esp+4h] [ebp-Ch] BYREF
  _DWORD *v4; // [esp+14h] [ebp+4h]

  v1 = (_DWORD *)(*(int (__thiscall **)(#374 *, _BYTE *))(*(_DWORD *)this + 72))(this, v3); /*0x41be0e*/
  *v4 = *v1; /*0x41be18*/
  v4[1] = v1[1]; /*0x41be1d*/
  v4[2] = v1[2]; /*0x41be24*/
  return (int)v4; /*0x41be20*/
}
}
} // namespace game
} // namespace ra2

// 0x483610
namespace ra2 {
namespace game {
int ObjectClass::processPointerInvalid()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_483610(_DWORD *this)
{
  return (*(this + 80) >> 8) & 1; /*0x48361c*/
}
}
} // namespace game
} // namespace ra2

// 0x4D7D50
namespace ra2 {
namespace game {
char ObjectClass::SpawnInfantry(FootClass * aP1, FootClass * aP2, FootClass * aP3, FootClass * aP4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall ObjectClass::SpawnInfantry(_BYTE *this, FootClass *aP1, FootClass *aP2, FootClass *aP3, FootClass *aP4)
{
  char result; // al
  RadarClass *v7; // edi
  int v8; // ebp
  FootClass **PlacementCell; // eax
  int v10; // edi
  void *v11; // eax
  int v12; // ebp
  void *v13; // eax
  int v14; // ebp
  void *v15; // eax
  int v16; // edx
  int v17; // ebp
  void **v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // edi
  void *v22; // eax
  int v23; // eax
  int v24; // ebp
  void *v25; // eax
  int v26; // ebp
  void *v27; // eax
  int v28; // ebp
  void *v29; // eax
  int v30; // ebp
  void *v31; // eax
  __int16 *v32; // eax
  int Type; // edi
  __int16 *v34; // eax
  char v35; // dl
  int v36; // edx
  __int16 v37; // cx
  IUnknown *v38; // [esp+0h] [ebp-28h]
  int v39; // [esp+4h] [ebp-24h]
  int _8; // [esp+8h] [ebp-20h]
  char v41; // [esp+Ch] [ebp-1Ch]
  FootClass *v42; // [esp+10h] [ebp-18h] BYREF
  RadarClass *v40; // [esp+14h] [ebp-14h] BYREF
  int v44; // [esp+18h] [ebp-10h] BYREF
  CoordStruct v45; // [esp+1Ch] [ebp-Ch] BYREF

  if ( *(this + 664) ) /*0x4d7d58*/
    return 0; /*0x4d7d64*/
  if ( *((_DWORD *)this + 170) && !*(_BYTE *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 132))(this) + 1682) ) /*0x4d7d81*/
    return 0; /*0x4d7d8d*/
  v7 = (RadarClass *)aP2; /*0x4d7d9a*/
  v8 = (*(int (__thiscall **)(_BYTE *, FootClass *, _DWORD, FootClass *))(*(_DWORD *)this + 112))(this, aP2, 0, aP4); /*0x4d7db1*/
  if ( !LayerClass::IsWithinUsableArea(&stru_87C374.__pad_14B0[8132], (IUnknown *)v7, (TechnoClass *)1) && v8 != 2 ) /*0x4d7dbf*/
    return 0; /*0x4d7dc1*/
  switch ( v8 ) /*0x4d7de0*/
  {
    case 1: /*0x4d7de0*/
    case 62: /*0x4d7de0*/
      if ( g_MoveFeedback ) /*0x4d7ebc*/
      {
        v16 = SHIWORD(v7->field_0) << 8; /*0x4d7ed6*/
        v45.X = (SLOWORD(v7->field_0) << 8) + 128; /*0x4d7ed9*/
        v45.Y = v16 + 128; /*0x4d7ee9*/
        v45.Z = 0; /*0x4d7eed*/
        v45.Z = Cell::GetGroundHeight((IUnknown *)&v45); /*0x4d7efe*/
        if ( (*((_DWORD *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)&v45) + 80) & 0x100) != 0 ) /*0x4d7f16*/
          v45.Z += *(_DWORD *)&stru_89E138.__pad_579C[66848]; /*0x4d7f24*/
        v17 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 532); /*0x4d7f35*/
        if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] && *(_DWORD *)&HouseClass_Player.__pad_5568[8068] != 5 ) /*0x4d7f40*/
        {
          *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 532) = -3; /*0x4d7f42*/
          *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 2996) + 832) = -5000; /*0x4d7f57*/
        }
        v18 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x4d7f66*/
        if ( v18 ) /*0x4d7f70*/
          aP4 = (FootClass *)AnimClass::ctor( /*0x4d7f98*/
                               v18,
                               *(CoordStruct **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 2996),
                               &v45,
                               0,
                               (CoordStruct *)1,
                               (void *)0x600,
                               0,
                               0);
        else
          aP4 = 0; /*0x4d7f9e*/
        if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] && *(_DWORD *)&HouseClass_Player.__pad_5568[8068] != 5 ) /*0x4d7fb6*/
        {
          *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 532) = v17; /*0x4d7fcb*/
          v19 = (*(int (__thiscall **)(char *, FootClass **))(*(_DWORD *)&HouseClass_Player.__pad_5568[22260] + 16))( /*0x4d7fd7*/
                  &HouseClass_Player.__pad_5568[22260],
                  &aP4);
          if ( v19 != -1 && v19 < *(int *)&HouseClass_Player.__pad_5568[22276] ) /*0x4d7fe7*/
          {
            --*(_DWORD *)&HouseClass_Player.__pad_5568[22276]; /*0x4d7fec*/
            for ( ; /*0x4d7ff2*/
                  v19 < *(int *)&HouseClass_Player.__pad_5568[22276];
                  *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22264] + 4 * v19 - 4) = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22264] + 4 * v19) )
            {
              ++v19; /*0x4d7ffa*/
            }
          }
          if ( *(int *)&HouseClass_Player.__pad_74[80] < *(int *)&HouseClass_Player.__pad_74[72] /*0x4d8042*/
            || (HouseClass_Player.__pad_74[77] || !*(_DWORD *)&HouseClass_Player.__pad_74[72])
            && *(int *)&HouseClass_Player.__pad_74[84] > 0
            && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&HouseClass_Player.__pad_74[64] + 8))(
                 &HouseClass_Player.__pad_74[64],
                 *(_DWORD *)&HouseClass_Player.__pad_74[84] + *(_DWORD *)&HouseClass_Player.__pad_74[72],
                 0) )
          {
            v20 = (*(_DWORD *)&HouseClass_Player.__pad_74[80])++; /*0x4d8055*/
            *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_74[68] + 4 * v20) = aP4; /*0x4d8062*/
          }
        }
      }
      goto LABEL_38; /*0x4d8062*/
    case 2: /*0x4d7de0*/
LABEL_38:
      aP4 = (FootClass *)ObjectClass::FindPlacementCell((FootClass *)&v44, (int)v7, 0, v39, _8, v41)->field_0; /*0x4d8065*/
      if ( aP4 == *(FootClass **)&stru_89E138.__pad_579C[66740] ) /*0x4d8081*/
        return 0; /*0x4d8081*/
      v21 = *(_DWORD *)this; /*0x4d8099*/
      v38 = (IUnknown *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)aP3->__pad_0); /*0x4d80a6*/
      v22 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&aP4); /*0x4d80ac*/
LABEL_51:
      (*(void (__thiscall **)(_BYTE *, int, _DWORD, void *, IUnknown *))(v21 + 888))(this, 2, 0, v22, v38); /*0x4d822a*/
LABEL_52:
      result = 1; /*0x4d8237*/
      break; /*0x4d8239*/
    case 3: /*0x4d7de0*/
      if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)this + 160))(this) ) /*0x4d8155*/
        return 0; /*0x4d8155*/
      v28 = *(_DWORD *)this; /*0x4d815b*/
      v29 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)v7); /*0x4d8165*/
      (*(void (__thiscall **)(_BYTE *, int, _DWORD, void *, _DWORD))(v28 + 888))(this, 7, 0, v29, 0); /*0x4d8171*/
      return 1; /*0x4d817f*/
    case 5: /*0x4d7de0*/
    case 63: /*0x4d7de0*/
      v23 = ObjectClass::processDeath(v7); /*0x4d80b3*/
      if ( !v23 || *(_BYTE *)(v23 + 256) || *(int *)(v23 + 108) <= 0 ) /*0x4d80cb*/
      {
        v24 = *(_DWORD *)this; /*0x4d80e9*/
        v25 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)v7); /*0x4d80f5*/
        (*(void (__thiscall **)(_BYTE *, int, void *, _DWORD, _DWORD))(v24 + 888))(this, 1, v25, 0, 0); /*0x4d80ff*/
        return 1; /*0x4d8107*/
      }
      else
      {
        (*(void (__thiscall **)(_BYTE *, int, int, _DWORD, _DWORD))(*(_DWORD *)this + 888))(this, 1, v23, 0, 0); /*0x4d80d8*/
        return 1; /*0x4d80e0*/
      }
    case 6: /*0x4d7de0*/
      v14 = *(_DWORD *)this; /*0x4d7e8e*/
      v15 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)v7); /*0x4d7e98*/
      (*(void (__thiscall **)(_BYTE *, int, _DWORD, void *, _DWORD))(v14 + 888))(this, 10, 0, v15, 0); /*0x4d7ea4*/
      return 1; /*0x4d7eb2*/
    case 9: /*0x4d7de0*/
      if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)this + 160))(this) ) /*0x4d811c*/
        return 0; /*0x4d811c*/
      v26 = *(_DWORD *)this; /*0x4d8122*/
      v27 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)v7); /*0x4d812c*/
      (*(void (__thiscall **)(_BYTE *, int, _DWORD, void *, _DWORD))(v26 + 888))(this, 8, 0, v27, 0); /*0x4d8138*/
      return 1; /*0x4d8146*/
    case 16: /*0x4d7de0*/
      v30 = *(_DWORD *)this; /*0x4d8182*/
      v31 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)v7); /*0x4d818c*/
      (*(void (__thiscall **)(_BYTE *, int, _DWORD, void *, _DWORD))(v30 + 888))(this, 17, 0, v31, 0); /*0x4d8198*/
      return 1; /*0x4d81a6*/
    case 26: /*0x4d7de0*/
      if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)this + 156))(this) /*0x4d7e59*/
        && !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)this + 816))(this)
        || !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)this + 160))(this) )
      {
        return 0; /*0x4d7e61*/
      }
      v12 = *(_DWORD *)this; /*0x4d7e67*/
      v13 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)v7); /*0x4d7e73*/
      (*(void (__thiscall **)(_BYTE *, int, void *, _DWORD, _DWORD))(v12 + 888))(this, 11, v13, 0, 0); /*0x4d7e7d*/
      return 1; /*0x4d7e8b*/
    case 35: /*0x4d7de0*/
      v32 = (__int16 *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)v7); /*0x4d81af*/
      Type = InfantryClass::GetType(v32); /*0x4d81bb*/
      aP2 = *(FootClass **)(Type + 40); /*0x4d81ca*/
      v34 = (__int16 *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&aP2); /*0x4d81ce*/
      v35 = *(_DWORD *)(InfantryClass::GetType(v34) + 44) - 4; /*0x4d81e0*/
      aP3 = *(FootClass **)(Type + 40); /*0x4d81e3*/
      v36 = v35 & 7; /*0x4d81e7*/
      v38 = 0; /*0x4d81ea*/
      v37 = (_WORD)aP3 + *(_WORD *)&stru_89E138.__pad_14B0[4 * v36 + 160]; /*0x4d81fb*/
      v21 = *(_DWORD *)this; /*0x4d81fe*/
      LOWORD(v36) = *(_WORD *)&stru_89E138.__pad_14B0[4 * v36 + 162]; /*0x4d8200*/
      LOWORD(aP4) = v37; /*0x4d8204*/
      HIWORD(aP4) = HIWORD(aP3) + v36; /*0x4d8213*/
      v42 = aP4; /*0x4d821c*/
      v22 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v42); /*0x4d8225*/
      goto LABEL_51; /*0x4d8225*/
    case 51: /*0x4d7de0*/
      if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)this + 160))(this) ) /*0x4d7df3*/
        return 0; /*0x4d7df3*/
      PlacementCell = (FootClass **)ObjectClass::FindPlacementCell((FootClass *)&v40, (int)v7, 0, v39, _8, v41); /*0x4d7dff*/
      v10 = *(_DWORD *)this; /*0x4d7e06*/
      aP4 = *PlacementCell; /*0x4d7e0c*/
      v11 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&aP4); /*0x4d7e18*/
      (*(void (__thiscall **)(_BYTE *, int, _DWORD, void *, _DWORD))(v10 + 888))(this, 25, 0, v11, 0); /*0x4d7e24*/
      return 1; /*0x4d7e32*/
    default:
      goto LABEL_52;
  }
  return result; /*0x4d7d62*/
}
}
} // namespace game
} // namespace ra2

// 0x4D9C60
namespace ra2 {
namespace game {
int ObjectClass::CheckCellFlags(int a1, int a2, int * a3, unsigned char * a4, unsigned int * a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall FootClass_CheckCellFlags(int a1, int a2, int *a3, _BYTE *a4, _DWORD *a5)
{
  _DWORD *v5; // esi
  int v6; // eax
  __int16 v7; // dx
  int v10; // ebx
  int v11; // ecx
  int v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // eax
  int v15; // eax
  int v16; // edi
  int v17; // edi
  int v18; // [esp+1Ch] [ebp+Ch]

  v5 = a5; /*0x4d9c67*/
  if ( !a5 ) /*0x4d9c72*/
  {
    v6 = ((_BYTE)a2 - 4) & 7; /*0x4d9c77*/
    v7 = *(_WORD *)(a1 + 38) + HIWORD(MEMORY[0x89F688][v6]); /*0x4d9c8e*/
    LOWORD(a5) = *(_WORD *)(a1 + 36) + LOWORD(MEMORY[0x89F688][v6]); /*0x4d9c99*/
    HIWORD(a5) = v7; /*0x4d9ca2*/
    v5 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a5); /*0x4d9cba*/
  }
  if ( a2 == -1 ) /*0x4d9cbf*/
  {
    if ( *a3 == -1 && (*(_DWORD *)(a1 + 320) & 0x100) != 0 ) /*0x4d9e50*/
      *a3 = *(char *)(a1 + 283) + 4; /*0x4d9e5c*/
    return 0; /*0x4d9e5c*/
  }
  if ( !v5 || !a1 ) /*0x4d9ccf*/
    return 0; /*0x4d9ccf*/
  if ( *a3 == -1 && (v5[80] & 0x100) != 0 ) /*0x4d9ce8*/
  {
    *a3 = *((char *)v5 + 283) + 4; /*0x4d9cf4*/
    if ( (*(_DWORD *)(a1 + 320) & 0x200) == 0 ) /*0x4d9d00*/
      return 7; /*0x4d9d0b*/
  }
  v10 = *(char *)(a1 + 283); /*0x4d9d14*/
  v18 = v5[80] & 0x100; /*0x4d9d20*/
  if ( v18 ) /*0x4d9d24*/
    v11 = *((char *)v5 + 283); /*0x4d9d26*/
  else
    v11 = *a3; /*0x4d9d2f*/
  v12 = v11 - v10; /*0x4d9d32*/
  v13 = abs32(v12); /*0x4d9d39*/
  if ( !v13 ) /*0x4d9d3e*/
  {
    v17 = *(_DWORD *)(a1 + 320); /*0x4d9e08*/
    if ( ((v17 & 0x100) == 0 || (v17 & 0x200) == 0 || !v18) && *a3 != -1 && *a3 != v10 ) /*0x4d9e30*/
      return 7; /*0x4d9e3b*/
    return 0; /*0x4d9e30*/
  }
  v14 = v13 - 1; /*0x4d9d44*/
  if ( !v14 ) /*0x4d9d45*/
  {
    if ( v12 <= 0 ) /*0x4d9dda*/
    {
      if ( !*((_BYTE *)v5 + 284) ) /*0x4d9df2*/
        return 7; /*0x4d9e05*/
    }
    else if ( !*(_BYTE *)(a1 + 284) ) /*0x4d9ddc*/
    {
      return 7; /*0x4d9def*/
    }
    return 0; /*0x4d9de4*/
  }
  if ( v14 != 3 ) /*0x4d9d4e*/
    return 7; /*0x4d9d59*/
  v15 = *((char *)v5 + 283); /*0x4d9d5c*/
  if ( v15 == v10 - 4 ) /*0x4d9d68*/
  {
    if ( *a3 != v10 ) /*0x4d9d6d*/
      return 7; /*0x4d9d78*/
    if ( !v18 ) /*0x4d9d81*/
      return 7; /*0x4d9d8c*/
  }
  if ( v10 != v15 - 4 ) /*0x4d9d94*/
    return 0; /*0x4d9e61*/
  v16 = *(_DWORD *)(a1 + 320); /*0x4d9d9a*/
  if ( (v16 & 0x100) == 0 ) /*0x4d9da6*/
    return 7; /*0x4d9dab*/
  if ( (v16 & 0x200) == 0 ) /*0x4d9dba*/
    return 7; /*0x4d9dbf*/
  *a4 = 1; /*0x4d9dcf*/
  return 0; /*0x4d9d02*/
}
}
} // namespace game
} // namespace ra2

// 0x4DB3C0
namespace ra2 {
namespace game {
int ObjectClass::LoadFromStream_Common(FootClass * aP0, LPSTREAM pStm)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall ObjectClass::LoadFromStream_Common(FootClass *aP0, LPSTREAM pStm)
{
  int v3; // eax
  IStream *v4; // ebp
  int result; // eax
  VectorClass *v6; // edi
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // edx
  VectorClass *v12; // edi
  int v13; // ecx
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // edx
  int i; // edi
  int j; // edi
  int v20; // [esp+54h] [ebp-4h] BYREF
  FootClass *aP0a; // [esp+5Ch] [ebp+4h]
  FootClass *aP0b; // [esp+5Ch] [ebp+4h]

  v3 = aP0->locomotor[0]; /*0x4db3cb*/
  if ( v3 ) /*0x4db3d3*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v3 + 8))(aP0->locomotor[0]); /*0x4db3d8*/
  v4 = pStm; /*0x4db3db*/
  aP0->locomotor[0] = 0; /*0x4db3df*/
  result = BuildingClass::AllocAndCtor((BuildingClass *)aP0, (int)v4); /*0x4db3e7*/
  if ( result >= 0 ) /*0x4db3ee*/
  {
    result = (*(int (__stdcall **)(IStream *, LPSTREAM *, int, _DWORD))(*(_DWORD *)v4->__pad_0 + 12))(v4, &pStm, 4, 0); /*0x4db400*/
    if ( result >= 0 ) /*0x4db405*/
    {
      v6 = (VectorClass *)aP0->unknownAbstractArray588; /*0x4db40b*/
      if ( aP0 != (FootClass *)-1416 ) /*0x4db413*/
      {
        AbstractClassVector::Construct(aP0->unknownAbstractArray588, 0, 0); /*0x4db419*/
        *(_DWORD *)v6->vtable0 = &vt_DynamicVectorClass_AbstractClass; /*0x4db41e*/
        *(_DWORD *)&aP0->__pad_58C[16] = 10; /*0x4db424*/
        *(_DWORD *)&aP0->__pad_58C[12] = 0; /*0x4db42b*/
      }
      aP0a = 0; /*0x4db432*/
      if ( (int)pStm <= 0 ) /*0x4db438*/
      {
LABEL_16:
        result = (*(int (__stdcall **)(IStream *, LPSTREAM *, int, _DWORD))(*(_DWORD *)v4->__pad_0 + 12))( /*0x4db4a2*/
                   v4,
                   &pStm,
                   4,
                   0);
        if ( result >= 0 ) /*0x4db4b3*/
        {
          v12 = (VectorClass *)aP0->FootClass_field_abstract_array_5AC; /*0x4db4b9*/
          if ( aP0 != (FootClass *)-1452 ) /*0x4db4c1*/
          {
            AbstractClassVector::Construct(aP0->FootClass_field_abstract_array_5AC, 0, 0); /*0x4db4c7*/
            *(_DWORD *)v12->vtable0 = &vt_DynamicVectorClass_AbstractClass; /*0x4db4cc*/
            *(_DWORD *)&aP0->__pad_5B0[16] = 10; /*0x4db4d2*/
            *(_DWORD *)&aP0->__pad_5B0[12] = 0; /*0x4db4d9*/
          }
          aP0b = 0; /*0x4db4e0*/
          if ( (int)pStm <= 0 ) /*0x4db4e6*/
          {
LABEL_28:
            aP0->locomotor[0] = 0; /*0x4db550*/
            ObjectClass::updateStateFlags(aP0->locomotor); /*0x4db55a*/
            aP0->locomotor[0] = 0; /*0x4db566*/
            OleLoadFromStream(v4, &IID_ILocomotion, (LPVOID *)aP0->locomotor); /*0x4db568*/
            aP0->FootClass_field_5A0 = 0; /*0x4db574*/
            ObjectPtr::RegisterForTracking( /*0x4db580*/
              (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
              (MouseClass *)&aP0->team);
            ObjectPtr::RegisterForTracking( /*0x4db591*/
              (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
              (MouseClass *)&aP0->nextTeamMember);
            ObjectPtr::RegisterForTracking( /*0x4db5a2*/
              (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
              (MouseClass *)&aP0->movementDestination);
            ObjectPtr::RegisterForTracking( /*0x4db5b3*/
              (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
              (MouseClass *)&aP0->lastDestination);
            ObjectPtr::RegisterForTracking( /*0x4db5c4*/
              (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
              (MouseClass *)&aP0->FootClass_field_5C8);
            ObjectPtr::RegisterForTracking( /*0x4db5d5*/
              (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
              (MouseClass *)&aP0->FootClass_field_5CC);
            ObjectPtr::RegisterForTracking( /*0x4db5e6*/
              (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
              (MouseClass *)&aP0->FootClass_field_5DC);
            ObjectPtr::RegisterForTracking( /*0x4db5f7*/
              (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
              (MouseClass *)&aP0->parasiteEatingMe);
            ObjectPtr::RegisterForTracking( /*0x4db608*/
              (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
              (MouseClass *)&aP0->parasiteImUsing);
            AudioController::Init(aP0->audioController7); /*0x4db613*/
            aP0->FootClass_field_bool_53C = 0; /*0x4db618*/
            aP0->unknown540 = 0; /*0x4db61e*/
            for ( i = 0; i < *(_DWORD *)&aP0->__pad_5B0[12]; ++i ) /*0x4db62e*/
              ObjectPtr::RegisterForTracking( /*0x4db63f*/
                (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
                (MouseClass *)(*(_DWORD *)aP0->__pad_5B0 + 4 * i));
            for ( j = 0; j < *(_DWORD *)&aP0->__pad_58C[12]; ++j ) /*0x4db659*/
              ObjectPtr::RegisterForTracking( /*0x4db66a*/
                (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
                (MouseClass *)(*(_DWORD *)aP0->__pad_58C + 4 * j));
            return 0; /*0x4db67a*/
          }
          else
          {
            while ( 1 ) /*0x4db4e8*/
            {
              v13 = *(_DWORD *)v4->__pad_0; /*0x4db4e8*/
              v20 = 0; /*0x4db4f4*/
              result = (*(int (__stdcall **)(IStream *, int *, int, _DWORD))(v13 + 12))(v4, &v20, 4, 0); /*0x4db4f8*/
              if ( result < 0 ) /*0x4db4fd*/
                break; /*0x4db4fd*/
              v14 = *(_DWORD *)&aP0->__pad_5B0[4]; /*0x4db503*/
              if ( *(_DWORD *)&aP0->__pad_5B0[12] < v14 /*0x4db525*/
                || (aP0->__pad_5B0[9] || !v14)
                && (v15 = *(_DWORD *)&aP0->__pad_5B0[16], v15 > 0)
                && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*(_DWORD *)v12->vtable0 + 8))(
                     aP0->FootClass_field_abstract_array_5AC,
                     v14 + v15,
                     0) )
              {
                v16 = *(_DWORD *)&aP0->__pad_5B0[12]; /*0x4db52c*/
                v17 = *(_DWORD *)aP0->__pad_5B0; /*0x4db52f*/
                *(_DWORD *)&aP0->__pad_5B0[12] = v16 + 1; /*0x4db535*/
                *(_DWORD *)(v17 + 4 * v16) = v20; /*0x4db53c*/
              }
              aP0b = (FootClass *)((char *)aP0b + 1); /*0x4db54a*/
              if ( (int)aP0b >= (int)pStm ) /*0x4db54e*/
                goto LABEL_28; /*0x4db54e*/
            }
          }
        }
      }
      else
      {
        while ( 1 ) /*0x4db43a*/
        {
          v7 = *(_DWORD *)v4->__pad_0; /*0x4db43a*/
          v20 = 0; /*0x4db446*/
          result = (*(int (__stdcall **)(IStream *, int *, int, _DWORD))(v7 + 12))(v4, &v20, 4, 0); /*0x4db44a*/
          if ( result < 0 ) /*0x4db44f*/
            break; /*0x4db44f*/
          v8 = *(_DWORD *)&aP0->__pad_58C[4]; /*0x4db455*/
          if ( *(_DWORD *)&aP0->__pad_58C[12] < v8 /*0x4db477*/
            || (aP0->__pad_58C[9] || !v8)
            && (v9 = *(_DWORD *)&aP0->__pad_58C[16], v9 > 0)
            && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*(_DWORD *)v6->vtable0 + 8))(
                 aP0->unknownAbstractArray588,
                 v8 + v9,
                 0) )
          {
            v10 = *(_DWORD *)&aP0->__pad_58C[12]; /*0x4db47e*/
            v11 = *(_DWORD *)aP0->__pad_58C; /*0x4db481*/
            *(_DWORD *)&aP0->__pad_58C[12] = v10 + 1; /*0x4db487*/
            *(_DWORD *)(v11 + 4 * v10) = v20; /*0x4db48e*/
          }
          aP0a = (FootClass *)((char *)aP0a + 1); /*0x4db49c*/
          if ( (int)aP0a >= (int)pStm ) /*0x4db4a0*/
            goto LABEL_16; /*0x4db4a0*/
        }
      }
    }
  }
  return result; /*0x4db67c*/
}
}
} // namespace game
} // namespace ra2

// 0x4DB690
namespace ra2 {
namespace game {
HRESULT ObjectClass::SaveToStream_Common(IPersistStream * a0, FootClass * aP1, struct IPersistStreamVtbl * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HRESULT __stdcall ObjectClass::SaveToStream_Common(IPersistStream *a0, FootClass *aP1, struct IPersistStreamVtbl *a2)
{
  IStream *v3; // esi
  IPersistStream *v4; // edi
  HRESULT SizeMax; // ebx
  int v6; // edx
  HRESULT result; // eax
  int v8; // ebx
  int v9; // edx
  int v10; // ebx
  int (__stdcall ***v11)(_DWORD, void *, IPersistStream **); // edi
  int v12; // edi
  IPersistStream *v13; // ebx

  v3 = (IStream *)aP1; /*0x4db696*/
  v4 = a0; /*0x4db69b*/
  SizeMax = IPersistStream::GetSizeMax((int)a0, (RadioClass *)aP1, (int)a2); /*0x4db6a7*/
  if ( SizeMax < 0 ) /*0x4db6ab*/
    return SizeMax; /*0x4db6ab*/
  v6 = *(_DWORD *)v3->__pad_0; /*0x4db6b7*/
  a2 = (struct IPersistStreamVtbl *)v4[358]; /*0x4db6c3*/
  result = (*(int (__stdcall **)(IStream *, struct IPersistStreamVtbl **, int, _DWORD))(v6 + 16))(v3, &a2, 4, 0); /*0x4db6c7*/
  if ( result < 0 ) /*0x4db6cc*/
    return result; /*0x4db6cc*/
  v8 = 0; /*0x4db6d6*/
  if ( (int)a2 <= 0 ) /*0x4db6da*/
  {
LABEL_6:
    v9 = *(_DWORD *)v3->__pad_0; /*0x4db701*/
    a2 = (struct IPersistStreamVtbl *)v4[367]; /*0x4db713*/
    result = (*(int (__stdcall **)(IStream *, struct IPersistStreamVtbl **, int, _DWORD))(v9 + 16))(v3, &a2, 4, 0); /*0x4db717*/
    if ( result < 0 ) /*0x4db71c*/
      return result; /*0x4db71c*/
    v10 = 0; /*0x4db726*/
    if ( (int)a2 > 0 ) /*0x4db72a*/
    {
      do /*0x4db73d*/
      {
        result = (*(int (__stdcall **)(IStream *, int, int, _DWORD))(*(_DWORD *)v3->__pad_0 + 16))( /*0x4db73d*/
                   v3,
                   *(_DWORD *)&v4[364] + 4 * v10,
                   4,
                   0);
        if ( result < 0 ) /*0x4db742*/
          return result; /*0x4db742*/
      }
      while ( ++v10 < (int)a2 ); /*0x4db73d*/
    }
    v11 = (int (__stdcall ***)(_DWORD, void *, IPersistStream **))v4[413]; /*0x4db751*/
    aP1 = 0; /*0x4db757*/
    if ( v11 ) /*0x4db761*/
    {
      v12 = (**v11)(v11, &unk_820270, &a0); /*0x4db772*/
      if ( v12 >= 0 ) /*0x4db776*/
      {
        v13 = a0; /*0x4db794*/
        if ( aP1 ) /*0x4db79a*/
          (*(void (__stdcall **)(FootClass *))(*(_DWORD *)aP1->__pad_0 + 8))(aP1); /*0x4db79f*/
        aP1 = (FootClass *)v13; /*0x4db7a2*/
      }
      else
      {
        if ( aP1 ) /*0x4db77e*/
          (*(void (__stdcall **)(FootClass *))(*(_DWORD *)aP1->__pad_0 + 8))(aP1); /*0x4db783*/
        aP1 = 0; /*0x4db786*/
      }
      if ( v12 < 0 && v12 != -2147467262 ) /*0x4db7b0*/
        WinAPI::Wrapper(v12); /*0x4db7b3*/
    }
    OleSaveToStream((LPPERSISTSTREAM)aP1, v3); /*0x4db7be*/
    SizeMax = 0; /*0x4db7c4*/
    if ( aP1 ) /*0x4db7cc*/
      (*(void (__stdcall **)(FootClass *))(*(_DWORD *)aP1->__pad_0 + 8))(aP1); /*0x4db7d1*/
    return SizeMax; /*0x4db7d4*/
  }
  while ( 1 ) /*0x4db6ed*/
  {
    result = (*(int (__stdcall **)(IStream *, int, int, _DWORD))(*(_DWORD *)v3->__pad_0 + 16))( /*0x4db6ed*/
               v3,
               *(_DWORD *)&v4[355] + 4 * v8,
               4,
               0);
    if ( result < 0 ) /*0x4db6f2*/
      return result; /*0x4db7d6*/
    if ( ++v8 >= (int)a2 ) /*0x4db6ff*/
      goto LABEL_6; /*0x4db6ff*/
  }
}
}
} // namespace game
} // namespace ra2

// 0x4DE1D0
namespace ra2 {
namespace game {
RadarClass * ObjectClass::FindPlacementCell(FootClass * aP0, int aP1, IUnknown ** a2, int a4, int a5, char a6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
RadarClass *ObjectClass::FindPlacementCell(FootClass *aP0, int aP1, IUnknown **a2, int a4, int a5, char a6)
{
  FootClass *v6; // ecx
  FootClass *esi1; // esi
  RadarClass *v7; // edi
  bool IsWithinUsableArea; // al
  int v10; // edx
  int v11; // eax
  int v12; // edx
  IUnknown *v13; // eax
  void *v14; // eax
  int v15; // edx
  int v16; // ebp
  int v17; // eax
  char v18; // al
  int v19; // ecx
  int v20; // eax
  bool IsPassable; // al
  int v22; // eax
  IUnknown *v23; // eax
  IUnknown *v24; // edx
  IUnknown **v25; // eax
  IUnknown *eax30; // eax
  MouseClass *v26; // eax
  int v28; // eax
  IUnknown *v29; // eax
  IUnknown *v31; // [esp-2Ch] [ebp-78h]
  IUnknown *TileIndex; // [esp-28h] [ebp-74h]
  IUnknown *v32; // [esp-20h] [ebp-6Ch]
  IUnknown *v33; // [esp-20h] [ebp-6Ch]
  IUnknown *_FFFFFFF4; // [esp-Ch] [ebp-58h]
  IUnknown *v35; // [esp+18h] [ebp-34h] BYREF
  MouseClass *v37; // [esp+1Ch] [ebp-30h]
  MouseClass *aP3; // [esp+20h] [ebp-2Ch]
  int v39; // [esp+24h] [ebp-28h] BYREF
  _DWORD v40[2]; // [esp+28h] [ebp-24h] BYREF
  int GroundHeight; // [esp+30h] [ebp-1Ch]
  _DWORD v42[2]; // [esp+34h] [ebp-18h] BYREF
  int v43; // [esp+3Ch] [ebp-10h]
  _WORD v44[6]; // [esp+40h] [ebp-Ch] BYREF

  esi1 = v6; /*0x4de1d5*/
  v7 = (RadarClass *)aP1; /*0x4de1de*/
  v37 = (MouseClass *)(*(int (__thiscall **)(FootClass *, int, IUnknown **, _DWORD))(*(_DWORD *)v6->__pad_0 + 112))( /*0x4de1f4*/
                        v6,
                        aP1,
                        a2,
                        0);
  IsWithinUsableArea = LayerClass::IsWithinUsableArea(&stru_87C374.__pad_14B0[8132], (IUnknown *)v7, (TechnoClass *)1); /*0x4de1f8*/
  v10 = SLOWORD(v7->field_0); /*0x4de1fd*/
  LOBYTE(aP1) = IsWithinUsableArea; /*0x4de200*/
  v11 = (SHIWORD(v7->field_0) << 8) + 128; /*0x4de218*/
  v40[0] = (v10 << 8) + 128; /*0x4de223*/
  v40[1] = v11; /*0x4de227*/
  GroundHeight = 0; /*0x4de22b*/
  GroundHeight = Cell::GetGroundHeight((IUnknown *)v40); /*0x4de23e*/
  if ( (*((_DWORD *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)v40) + 80) & 0x100) != 0 ) /*0x4de250*/
    GroundHeight += *(_DWORD *)&stru_89E138.__pad_579C[66848]; /*0x4de25d*/
  if ( !*(_BYTE *)((*(int (__thiscall **)(FootClass *))(*(_DWORD *)esi1->__pad_0 + 132))(esi1) + 3213) /*0x4de27d*/
    && Cell::IsPassable((IUnknown *)v40) )
  {
    goto LABEL_36; /*0x4de284*/
  }
  v12 = *(_DWORD *)esi1->__pad_0; /*0x4de28c*/
  v35 = (IUnknown *)v7->field_0; /*0x4de293*/
  v13 = (IUnknown *)(*(int (__thiscall **)(FootClass *, _WORD *, _DWORD))(v12 + 76))(esi1, v44, 0); /*0x4de29b*/
  v14 = Coord::To_Cell(&stru_87C374.__pad_14B0[8132], v13); /*0x4de2a4*/
  v15 = *(_DWORD *)esi1->__pad_0; /*0x4de2a9*/
  v40[0] = v14; /*0x4de2ad*/
  v16 = *(_DWORD *)((*(int (__thiscall **)(FootClass *))(v15 + 132))(esi1) + 1460); /*0x4de2b7*/
  if ( v16 == 6 ) /*0x4de2c0*/
  {
    v16 = 0; /*0x4de2c2*/
  }
  else if ( v16 == 9 && HouseClass::IonSensitivesShouldBeOffline() ) /*0x4de2d1*/
  {
    v16 = 7; /*0x4de2da*/
  }
  if ( (*(unsigned __int8 (__thiscall **)(FootClass *))(*(_DWORD *)esi1->__pad_0 + 84))(esi1) /*0x4de333*/
    || *(_BYTE *)((*(int (__thiscall **)(FootClass *))(*(_DWORD *)esi1->__pad_0 + 132))(esi1) + 3372)
    || (*(int (__thiscall **)(FootClass *))(*(_DWORD *)esi1->__pad_0 + 44))(esi1) == 15
    && *(_BYTE *)(*(_DWORD *)esi1[1].__pad_0 + 3476)
    && !HouseClass::IonSensitivesShouldBeOffline()
    || (v17 = (*(int (__thiscall **)(FootClass *))(*(_DWORD *)esi1->__pad_0 + 44))(esi1), LOBYTE(a4) = 0, v17 == 2) )
  {
    LOBYTE(a4) = 1; /*0x4de335*/
  }
  v18 = (*(int (__thiscall **)(FootClass *, _DWORD))(*(_DWORD *)esi1->__pad_0 + 188))(esi1, 0); /*0x4de33f*/
  v19 = SHIWORD(v7->field_0); /*0x4de345*/
  LOBYTE(aP3) = v18; /*0x4de349*/
  v20 = SLOWORD(v7->field_0); /*0x4de34f*/
  v43 = 0; /*0x4de35b*/
  v42[1] = (v19 << 8) + 128; /*0x4de35f*/
  v42[0] = (v20 << 8) + 128; /*0x4de375*/
  v43 = Cell::GetGroundHeight((IUnknown *)v42); /*0x4de388*/
  if ( (*((_DWORD *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)v42) + 80) & 0x100) != 0 ) /*0x4de39a*/
    v43 += *(_DWORD *)&stru_89E138.__pad_579C[66848]; /*0x4de3a7*/
  IsPassable = Cell::IsPassable((IUnknown *)v42); /*0x4de3b5*/
  if ( (_BYTE)a2 && v37 == (MouseClass *)2 ) /*0x4de3cb*/
  {
    if ( !*(_BYTE *)((*(int (__thiscall **)(FootClass *))(*(_DWORD *)esi1->__pad_0 + 132))(esi1) + 3372) /*0x4de3f7*/
      || (v22 = (*(int (__thiscall **)(FootClass *))(*(_DWORD *)esi1->__pad_0 + 456))(esi1), aP1 = 1, v22 >= 0) )
    {
      aP1 = 0; /*0x4de3f9*/
    }
    _FFFFFFF4 = (IUnknown *)aP1; /*0x4de40e*/
    a2 = 0; /*0x4de41b*/
    v23 = (IUnknown *)(*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)v7) + 80) >> 8); /*0x4de432*/
    LOBYTE(v23) = (unsigned __int8)v23 & 1; /*0x4de435*/
    v32 = v23; /*0x4de439*/
    v31 = *(IUnknown **)((*(int (__thiscall **)(FootClass *))(*(_DWORD *)esi1->__pad_0 + 132))(esi1) + 1660); /*0x4de44d*/
    v25 = (IUnknown **)LayerClass::Pathfinding_Find( /*0x4de450*/
                         (IUnknown *)&stru_87C374.__pad_14B0[8132],
                         v24,
                         (IUnknown *)&v39,
                         (IUnknown *)v7,
                         v31,
                         (IUnknown *)0xFFFFFFFF,
                         (IUnknown *)v16,
                         v32,
                         (IUnknown *)1,
                         (IUnknown *)1,
                         0,
                         (IUnknown *)1,
                         _FFFFFFF4,
                         (IUnknown *)1,
                         (IUnknown *)&a2,
                         0,
                         0);
    goto LABEL_32; /*0x4de450*/
  }
  if ( !(_BYTE)aP1 /*0x4de4b4*/
    || IsPassable
    || !(_BYTE)a2
    && (!*(_BYTE *)((*(int (__thiscall **)(FootClass *))(*(_DWORD *)esi1->__pad_0 + 132))(esi1) + 3284)
     || v37 == (MouseClass *)2)
    && (eax30 = (IUnknown *)(*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)v7) + 80) >> 8),
        LOBYTE(eax30) = (unsigned __int8)eax30 & 1,
        !MapSeed::CheckTileMatch(
           &stru_87C374.__pad_14B0[8132],
           (IUnknown *)(v39 + 36),
           (IUnknown *)&v35,
           (IUnknown *)v16,
           (IUnknown *)aP3,
           eax30,
           0)) )
  {
    a2 = 0; /*0x4de4d7*/
    v26 = (MouseClass *)(*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)v7) + 80) >> 8); /*0x4de4f4*/
    LOBYTE(v26) = (unsigned __int8)v26 & 1; /*0x4de4f7*/
    v33 = (IUnknown *)v26; /*0x4de4fc*/
    TileIndex = (IUnknown *)MapClass::GetTileIndex( /*0x4de50b*/
                              &stru_87C374.__pad_14B0[8132],
                              (IUnknown *)(v39 + 36),
                              (IUnknown *)v16,
                              (IUnknown *)aP3);
    v28 = (*(int (__thiscall **)(FootClass *))(*(_DWORD *)esi1->__pad_0 + 132))(esi1); /*0x4de510*/
    v25 = (IUnknown **)LayerClass::Pathfinding_Find( /*0x4de528*/
                         (IUnknown *)&stru_87C374.__pad_14B0[8132],
                         (IUnknown *)&aP1,
                         (IUnknown *)&aP1,
                         (IUnknown *)v7,
                         *(IUnknown **)(v28 + 1660),
                         TileIndex,
                         (IUnknown *)v16,
                         v33,
                         (IUnknown *)1,
                         (IUnknown *)1,
                         0,
                         (IUnknown *)1,
                         0,
                         (IUnknown *)1,
                         (IUnknown *)&a2,
                         0,
                         0);
LABEL_32:
    v29 = *v25; /*0x4de52d*/
    v35 = v29; /*0x4de52f*/
    goto LABEL_34; /*0x4de533*/
  }
  v29 = v35; /*0x4de535*/
LABEL_34:
  if ( __PAIR32__(HIWORD(v35), (unsigned __int16)v29) != *(_DWORD *)&stru_89E138.__pad_579C[66740] ) /*0x4de541*/
  {
    *(_DWORD *)aP0->__pad_0 = v29; /*0x4de558*/
    return (RadarClass *)aP0; /*0x4de55f*/
  }
LABEL_36:
  *(_DWORD *)aP0->__pad_0 = *(_DWORD *)&stru_89E138.__pad_579C[66740]; /*0x4de562*/
  return (RadarClass *)aP0; /*0x4de555*/
}
}
} // namespace game
} // namespace ra2

// 0x4DE620
namespace gamemd {
int ObjectClass_IsHeightAboveThreshold_0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
int __thiscall ObjectClass::IsHeightAboveThreshold_0(#374 *this)
{
  return ObjectClass::IsHeightAboveThreshold(this);
}
}
} // namespace gamemd

// 0x513F40
namespace ra2 {
namespace game {
float * ObjectClass::BuildTransform(unsigned int * a1, float * a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
float *__stdcall ObjectClass::BuildTransform(_DWORD *a1, float *a2, _DWORD *a3)
{
  int v3; // ecx
  _DWORD *v4; // ecx
  int v5; // ebp
  float *v7; // eax
  double v8; // st7
  int v9; // edx
  double v10; // st7
  int v11; // eax
  double v12; // st7
  int v13; // ecx
  double v14; // st7
  int v15; // esi
  int v16; // eax
  int v17; // ecx
  float *Transform; // eax
  float *v19; // eax
  float *v20; // esi
  float v21; // [esp+4h] [ebp-154h]
  float v22; // [esp+8h] [ebp-150h]
  float v23; // [esp+8h] [ebp-150h]
  float v24; // [esp+8h] [ebp-150h]
  float v25; // [esp+18h] [ebp-140h]
  int v26; // [esp+18h] [ebp-140h]
  float v27; // [esp+1Ch] [ebp-13Ch]
  int v28; // [esp+1Ch] [ebp-13Ch]
  float v29; // [esp+20h] [ebp-138h] BYREF
  int v30; // [esp+24h] [ebp-134h]
  float v31; // [esp+28h] [ebp-130h]
  _DWORD v32[3]; // [esp+2Ch] [ebp-12Ch] BYREF
  float v33[12]; // [esp+38h] [ebp-120h] BYREF
  float v34[12]; // [esp+68h] [ebp-F0h] BYREF
  float v35[12]; // [esp+98h] [ebp-C0h] BYREF
  float v36[12]; // [esp+C8h] [ebp-90h] BYREF
  float v37[12]; // [esp+F8h] [ebp-60h] BYREF
  float v38[12]; // [esp+128h] [ebp-30h] BYREF

  v3 = a1[2]; /*0x513f50*/
  if ( fabs(*(float *)(v3 + 808)) >= 0.005 || fabs(*(float *)(v3 + 812)) >= 0.005 ) /*0x513f7f*/
  {
    if ( a3 ) /*0x5140a0*/
      *a3 = -1; /*0x5140a2*/
    Matrix3x4::Identity(v35); /*0x5140af*/
    Matrix3x4::Identity(v33); /*0x5140b8*/
    v25 = *(double *)((*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[2] + 132))(a1[2]) + 864); /*0x5140d3*/
    v27 = *(double *)((*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[2] + 132))(a1[2]) + 872); /*0x5140e9*/
    v8 = Math::ArcTan2(*(float *)(a1[2] + 812)); /*0x5140f6*/
    v9 = a1[2]; /*0x5140fb*/
    v31 = v8; /*0x5140fe*/
    v10 = Math::SinCos(*(float *)(v9 + 812)); /*0x51410b*/
    v11 = a1[2]; /*0x514110*/
    *(float *)&v30 = v10; /*0x514113*/
    v12 = Math::ArcTan2(*(float *)(v11 + 808)); /*0x514120*/
    v13 = a1[2]; /*0x514125*/
    v29 = v12; /*0x514128*/
    v14 = Math::SinCos(*(float *)(v13 + 808)); /*0x514135*/
    v30 = Math::RoundToInt(fabs(v14) * v25 + fabs(*(float *)&v30) * v27); /*0x51415c*/
    LODWORD(v31) = Math::RoundToInt(v31 * v27); /*0x514165*/
    v15 = Math::RoundToInt(v27 - (double)SLODWORD(v31)); /*0x51417e*/
    v28 = v15; /*0x514180*/
    LODWORD(v29) = Math::RoundToInt(v29 * v25); /*0x514189*/
    v16 = Math::RoundToInt(v25 - (double)SLODWORD(v29)); /*0x514195*/
    v17 = a1[2]; /*0x51419a*/
    v26 = v16; /*0x51419f*/
    if ( *(float *)(v17 + 812) < 0.0 ) /*0x5141b4*/
      v28 = -v15; /*0x5141b8*/
    if ( *(float *)(v17 + 808) > 0.0 ) /*0x5141cd*/
      v26 = -v16; /*0x5141d1*/
    v22 = (float)v30; /*0x5141e1*/
    Matrix3x3::ApplyCol1(v35, v22); /*0x5141e4*/
    v23 = (float)v28; /*0x5141f2*/
    Matrix3x4::Translate(v33, v23); /*0x5141f5*/
    v24 = (float)v26; /*0x514203*/
    Matrix3x3::ApplyCol0(v33, v24); /*0x514206*/
    Matrix3x3::RotateX(v33, *(float *)(a1[2] + 808)); /*0x514219*/
    Matrix3D::RotateZ(v33, *(float *)(a1[2] + 812)); /*0x51422c*/
    Transform = Turret::GetTransform((signed int)a1, v36, a3); /*0x51423b*/
    Transform::Copy(v34, Transform); /*0x514245*/
    v19 = MultiplyMatrix3x4(v37, v35, v34); /*0x514262*/
    v7 = MultiplyMatrix3x4(v38, v19, v33); /*0x514270*/
    goto LABEL_16; /*0x514270*/
  }
  if ( (*(unsigned __int8 (__stdcall **)(_DWORD *))(*a1 + 96))(a1) ) /*0x513f88*/
  {
    v7 = Turret::GetTransform((signed int)a1, v34, a3); /*0x51408d*/
LABEL_16:
    v20 = v7; /*0x514275*/
    qmemcpy(a2, v20, 0x30u); /*0x514285*/
    return a2; /*0x514277*/
  }
  v4 = (_DWORD *)(a1[2] + 156); /*0x513f97*/
  v32[0] = *v4; /*0x513f9f*/
  v32[1] = v4[1]; /*0x513fab*/
  v32[2] = v4[2]; /*0x513fb2*/
  v5 = *((unsigned __int8 *)Coord::To_Cell(&MEMORY[0x87F7E8], v32) + 284); /*0x513fc8*/
  qmemcpy(v33, CopyAudioData((char *)v34, v5), sizeof(v33)); /*0x513fe4*/
  v21 = (double)(int)((((unsigned int)((*ProgressTimer::GetValue((_WORD *)(a1[2] + 904), &v29) >> 10) + 1) >> 1) & 0x1F) /*0x514016*/
                    - 8)
      * -0.1963495408493621;
  Matrix2D::Rotate(v33, v21); /*0x514019*/
  if ( a3 ) /*0x514027*/
  {
    if ( *a3 != -1 ) /*0x51402e*/
    {
      *a3 = 32 * (v5 + (*a3 << 6)); /*0x51403c*/
      *a3 |= ((unsigned int)((*ProgressTimer::GetValue((_WORD *)(a1[2] + 904), &v29) >> 10) + 1) >> 1) & 0x1F; /*0x51405c*/
    }
  }
  qmemcpy(a2, v33, 0x30u); /*0x514070*/
  return a2; /*0x514073*/
}
}
} // namespace game
} // namespace ra2

// 0x5228B0
namespace gamemd {
int ObjectClass_GetTypeVt40_0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
int __thiscall ObjectClass::GetTypeVt40_0(#377 *this)
{
  return TechnoClass::GetTypeVt40(this);
}
}
} // namespace gamemd

// 0x5228C0
namespace gamemd {
int ObjectClass_GetTypeVt41_0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
int __thiscall ObjectClass::GetTypeVt41_0(#377 *this)
{
  return ObjectClass::GetTypeVt41(this);
}
}
} // namespace gamemd

// 0x556A20
namespace ra2 {
namespace game {
char * ObjectClass::checkLimbo()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall sub_556A20(char *this)
{
  char *v2; // eax
  int v3; // ecx
  char *v4; // edi
  int v5; // eax

  *this = 0x80; /*0x556a29*/
  *(this + 1) = 0x80; /*0x556a2b*/
  *(this + 2) = 0x80; /*0x556a2e*/
  this->vtable1 = 0; /*0x556a31*/
  this->vtable2 = 16; /*0x556a34*/
  this->vtable3 = 0; /*0x556a3b*/
  v2 = this + 28; /*0x556a3e*/
  v3 = 32; /*0x556a41*/
  do /*0x556a6a*/
  {
    v4 = v2 - 12; /*0x556a4c*/
    v2 += 16; /*0x556a4f*/
    --v3; /*0x556a52*/
    *(_DWORD *)v4 = dword_ABCB50; /*0x556a53*/
    *((_DWORD *)v4 + 1) = dword_ABCB54; /*0x556a5b*/
    *((_DWORD *)v4 + 2) = dword_ABCB58; /*0x556a64*/
    *((_DWORD *)v2 - 4) = 0; /*0x556a67*/
  }
  while ( v3 ); /*0x556a6a*/
  if ( dword_ABCB88 < dword_ABCB80 /*0x556a9f*/
    || (byte_ABCB85 || !dword_ABCB80)
    && dword_ABCB8C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_ABCB78 + 8))(
         &dword_ABCB78,
         dword_ABCB8C + dword_ABCB80,
         0) )
  {
    v5 = dword_ABCB88++; /*0x556aac*/
    *((_DWORD *)dword_ABCB7C + v5) = this; /*0x556abb*/
  }
  return this; /*0x556ac0*/
}
}
} // namespace game
} // namespace ra2

// 0x5F3B80
namespace ra2 {
namespace game {
void ObjectClass::Dtor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall ObjectClass::Dtor(_DWORD *this)
{
  BombClass *v2; // ecx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  _DWORD *v8; // ecx
  _DWORD *v9; // [esp+10h] [ebp-4h] BYREF

  v2 = (BombClass *)*(this + 14); /*0x5f3b84*/
  *this = &ObjectClass::`vftable'; /*0x5f3b87*/
  *(this + 1) = &ObjectClass::`vftable'; /*0x5f3b8f*/
  *(this + 2) = &ObjectClass::`vftable'; /*0x5f3b96*/
  *(this + 3) = &vt_ObjectClass; /*0x5f3b9d*/
  if ( v2 ) /*0x5f3ba4*/
    ObjectClass::CleanupAudioAndRefs((int)v2); /*0x5f3ba6*/
  v9 = this; /*0x5f3bbb*/
  v3 = (*(int (__thiscall **)(char *, _DWORD **))(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9988] + 16))( /*0x5f3bbf*/
         &MEMORY[0xB077F8].__pad_579C[9988],
         &v9);
  if ( v3 != -1 && v3 < *(int *)&MEMORY[0xB077F8].__pad_579C[10004] ) /*0x5f3bcf*/
  {
    --*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[10004]; /*0x5f3bd4*/
    for ( ; /*0x5f3bda*/
          v3 < *(int *)&MEMORY[0xB077F8].__pad_579C[10004];
          *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9992] + 4 * v3 - 4) = *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9992]
                                                                                              + 4 * v3) )
    {
      ++v3; /*0x5f3be2*/
    }
  }
  v9 = this; /*0x5f3c04*/
  v4 = (*(int (__thiscall **)(char *, _DWORD **))(*(_DWORD *)&MEMORY[0xA8D63C].__pad_BC0[356] + 16))( /*0x5f3c08*/
         &MEMORY[0xA8D63C].__pad_BC0[356],
         &v9);
  if ( v4 != -1 && v4 < *(int *)&MEMORY[0xA8D63C].__pad_BC0[372] ) /*0x5f3c18*/
  {
    --*(_DWORD *)&MEMORY[0xA8D63C].__pad_BC0[372]; /*0x5f3c1d*/
    for ( ; /*0x5f3c23*/
          v4 < *(int *)&MEMORY[0xA8D63C].__pad_BC0[372];
          *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_BC0[360] + 4 * v4 - 4) = *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_BC0[360]
                                                                                            + 4 * v4) )
    {
      ++v4; /*0x5f3c2b*/
    }
  }
  v9 = this; /*0x5f3c4d*/
  v5 = (*(int (__thiscall **)(char *, _DWORD **))(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[10124] + 16))( /*0x5f3c51*/
         &MEMORY[0xB077F8].__pad_579C[10124],
         &v9);
  if ( v5 != -1 && v5 < *(int *)&MEMORY[0xB077F8].__pad_579C[10140] ) /*0x5f3c61*/
  {
    --*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[10140]; /*0x5f3c66*/
    for ( ; /*0x5f3c6c*/
          v5 < *(int *)&MEMORY[0xB077F8].__pad_579C[10140];
          *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[10128] + 4 * v5 - 4) = *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[10128]
                                                                                               + 4 * v5) )
    {
      ++v5; /*0x5f3c74*/
    }
  }
  v9 = this; /*0x5f3c96*/
  v6 = (*(int (__thiscall **)(char *, _DWORD **))(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9948] + 16))( /*0x5f3c9a*/
         &MEMORY[0xB077F8].__pad_579C[9948],
         &v9);
  if ( v6 != -1 && v6 < *(int *)&MEMORY[0xB077F8].__pad_579C[9964] ) /*0x5f3caa*/
  {
    --*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9964]; /*0x5f3caf*/
    for ( ; /*0x5f3cb5*/
          v6 < *(int *)&MEMORY[0xB077F8].__pad_579C[9964];
          *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9952] + 4 * v6 - 4) = *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9952]
                                                                                              + 4 * v6) )
    {
      ++v6; /*0x5f3cbd*/
    }
  }
  v9 = this; /*0x5f3cdf*/
  v7 = (*(int (__thiscall **)(char *, _DWORD **))(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9860] + 16))( /*0x5f3ce3*/
         &MEMORY[0xB077F8].__pad_579C[9860],
         &v9);
  if ( v7 != -1 && v7 < *(int *)&MEMORY[0xB077F8].__pad_579C[9876] ) /*0x5f3cf3*/
  {
    --*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9876]; /*0x5f3cf8*/
    for ( ; /*0x5f3cfe*/
          v7 < *(int *)&MEMORY[0xB077F8].__pad_579C[9876];
          *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9864] + 4 * v7 - 4) = *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9864]
                                                                                              + 4 * v7) )
    {
      ++v7; /*0x5f3d06*/
    }
  }
  *(this + 12) = 0; /*0x5f3d1d*/
  this->isAliveFlag = 0; /*0x5f3d26*/
  AudioController::Stop(this + 15); /*0x5f3d2d*/
  AudioController::Stop(this + 20); /*0x5f3d37*/
  AudioFileClass::Release(this + 15); /*0x5f3d3e*/
  AudioFileClass::Release(this + 20); /*0x5f3d45*/
  v8 = (_DWORD *)*(this + 42); /*0x5f3d4a*/
  if ( v8 ) /*0x5f3d54*/
  {
    TacticalClass::GetField(v8); /*0x5f3d56*/
    *(this + 42) = 0; /*0x5f3d5b*/
  }
  if ( this->isInLogic ) /*0x5f3d65*/
    VectorClass::RemoveItem((int *)&MEMORY[0x87F778], (ObjectClass *)this); /*0x5f3d75*/
  AbstractClass::DTOR(this); /*0x5f3d7c*/
}
}
} // namespace game
} // namespace ra2

// 0x5F4160
namespace ra2 {
namespace game {
int ObjectClass::DropAsBomb_Track()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ObjectClass::DropAsBomb_Track(#374 *this)
{
  int v2; // eax
  int result; // eax
  int v4; // eax
  _DWORD v5[3]; // [esp+Ch] [ebp-Ch] BYREF

  v2 = *(_DWORD *)this; /*0x5f4168*/
  this->isFallingDown = 1; /*0x5f416a*/
  this->isBomb = 1; /*0x5f4171*/
  (*(void (__stdcall **)(_DWORD))(v2 + 292))(0); /*0x5f4178*/
  RemoveTarget((IUnknown *)this); /*0x5f4184*/
  this->onBridge = 0; /*0x5f418f*/
  Targeting::Readd((IUnknown *)this); /*0x5f4196*/
  result = (*(int (__thiscall **)(#374 *, int))(*(_DWORD *)this + 292))(this, 1); /*0x5f41a1*/
  if ( this ) /*0x5f41a9*/
  {
    LOBYTE(result) = ((unsigned char)this->abstractFlags & 4) != 0; /*0x5f41b5*/
    if ( ((unsigned char)this->abstractFlags & 4) != 0 ) /*0x5f41bb*/
    {
      if ( !*((_DWORD *)this + 413) ) /*0x5f41bd*/
        WinAPI::Wrapper(-2147467261); /*0x5f41cc*/
      if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(**((_DWORD **)this + 413) + 16))(*((_DWORD *)this + 413)) ) /*0x5f41da*/
      {
        if ( !*((_DWORD *)this + 413) ) /*0x5f4213*/
          WinAPI::Wrapper(-2147467261); /*0x5f4222*/
        return (*(int (__stdcall **)(_DWORD, _DWORD))(**((_DWORD **)this + 413) + 156))(*((_DWORD *)this + 413), 0); /*0x5f4232*/
      }
      else
      {
        v5[0] = this->location; /*0x5f41ed*/
        v4 = *(_DWORD *)this; /*0x5f41f1*/
        v5[1] = *((_DWORD *)this + 40); /*0x5f41f6*/
        v5[2] = *((_DWORD *)this + 41); /*0x5f4204*/
        return (*(int (__thiscall **)(#374 *, _DWORD *))(v4 + 244))(this, v5); /*0x5f4208*/
      }
    }
  }
  return result; /*0x5f420e*/
}
}
} // namespace game
} // namespace ra2

// 0x5F4870
namespace ra2 {
namespace game {
int ObjectClass::GetBoundsRect()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ObjectClass::GetBoundsRect(#374 *this)
{
  _DWORD *v2; // eax
  int v3; // eax
  __int16 *v4; // esi
  unsigned int v6; // ebp
  int *FoundationSize; // eax
  int v8; // edi
  int v9; // ebx
  int v10; // edx
  int v11; // eax
  int *v12; // eax
  int v13; // ecx
  int v14; // ebp
  int v15; // esi
  int v16; // edx
  int v17; // ebp
  int v18; // eax
  int v19; // esi
  int v20; // edi
  int *v21; // eax
  int v22; // ecx
  int v23; // edx
  int v24; // edi
  int v25; // eax
  int v26; // ecx
  int v27; // edi
  int v29; // [esp+Ch] [ebp-40h]
  int v30; // [esp+10h] [ebp-3Ch]
  int v31[2]; // [esp+14h] [ebp-38h] BYREF
  int v32; // [esp+1Ch] [ebp-30h] BYREF
  int v33; // [esp+20h] [ebp-2Ch]
  int v34; // [esp+24h] [ebp-28h]
  int v35; // [esp+28h] [ebp-24h]
  int v36; // [esp+30h] [ebp-1Ch]
  int v37; // [esp+38h] [ebp-14h]
  _DWORD v38[4]; // [esp+3Ch] [ebp-10h] BYREF
  _DWORD *v39; // [esp+50h] [ebp+4h]

  v2 = (_DWORD *)(*(int (__stdcall **)(int *))(*(_DWORD *)this + 172))(&v32); /*0x5f4887*/
  Coord::To_Screen(MEMORY[0x887324], v2, v31); /*0x5f4894*/
  v3 = (*(int (__thiscall **)(#374 *))(*(_DWORD *)this + 136))(this); /*0x5f489d*/
  v4 = (__int16 *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 156))(v3); /*0x5f48ad*/
  if ( !v4 ) /*0x5f48b1*/
  {
    *v39 = MEMORY[0xAC1350]; /*0x5f48c1*/
    v39[1] = MEMORY[0xAC1354]; /*0x5f48c9*/
    v39[2] = MEMORY[0xAC1358]; /*0x5f48d2*/
    v39[3] = MEMORY[0xAC135C]; /*0x5f48db*/
    return (int)v39; /*0x5f48e1*/
  }
  v6 = 0; /*0x5f48ea*/
  if ( (*(int (__thiscall **)(#374 *))(*(_DWORD *)this + 44))(this) == 6 && *(_BYTE *)(*((_DWORD *)this + 328) + 5824) ) /*0x5f48fa*/
    v6 = 15; /*0x5f4904*/
  FoundationSize = Building::GetFoundationSize(&v32, v6); /*0x5f4911*/
  v8 = *FoundationSize; /*0x5f4916*/
  v36 = FoundationSize[1]; /*0x5f491b*/
  v9 = FoundationSize[2]; /*0x5f4921*/
  v10 = FoundationSize[3]; /*0x5f4924*/
  v11 = v4[3]; /*0x5f4927*/
  v37 = v10; /*0x5f492b*/
  v12 = Building::GetFoundationSize(v38, v6 + v11 / 2); /*0x5f493c*/
  v13 = *v12; /*0x5f4945*/
  v33 = v12[1]; /*0x5f494a*/
  v34 = v12[2]; /*0x5f4951*/
  v14 = v4[1]; /*0x5f4955*/
  v15 = v4[2]; /*0x5f4959*/
  v16 = v12[3]; /*0x5f495d*/
  v29 = v14; /*0x5f4960*/
  v35 = v16; /*0x5f4964*/
  v30 = v15; /*0x5f4968*/
  if ( v9 <= 0 || (v17 = v37, v37 <= 0) ) /*0x5f4974*/
  {
    v20 = v12[1]; /*0x5f49e4*/
    v19 = *v12; /*0x5f49e7*/
    v9 = v12[2]; /*0x5f49e9*/
    v17 = v12[3]; /*0x5f49ec*/
    v36 = v20; /*0x5f49ef*/
  }
  else if ( v34 <= 0 || v16 <= 0 ) /*0x5f4980*/
  {
    v19 = v8; /*0x5f49d8*/
    v20 = v36; /*0x5f49da*/
  }
  else
  {
    v18 = v36; /*0x5f4982*/
    if ( v8 > v13 ) /*0x5f4988*/
    {
      v9 += v8 - v13; /*0x5f498e*/
      v8 = v13; /*0x5f4990*/
    }
    if ( v36 > v33 ) /*0x5f4998*/
    {
      v17 = v36 - v33 + v37; /*0x5f499c*/
      v18 = v33; /*0x5f499e*/
    }
    if ( v9 + v8 < v13 + v34 ) /*0x5f49a7*/
      v9 = v34 - v8 + v13 + 1; /*0x5f49af*/
    if ( v18 + v17 < v33 + v35 ) /*0x5f49c2*/
      v17 = v33 - v18 + v35 + 1; /*0x5f49ca*/
    v19 = v8; /*0x5f49ce*/
    v20 = v18; /*0x5f49d0*/
    v36 = v18; /*0x5f49d2*/
  }
  v34 = v9; /*0x5f49f7*/
  v35 = v17; /*0x5f49fb*/
  if ( (*(int (__thiscall **)(#374 *))(*(_DWORD *)this + 44))(this) != 6 || !*(_DWORD *)(*((_DWORD *)this + 328) + 5400) ) /*0x5f4a17*/
  {
    v9 = v34; /*0x5f4ac5*/
    v26 = v35; /*0x5f4ac9*/
    goto LABEL_39; /*0x5f4ac9*/
  }
  v21 = Building::GetFoundationSize(v38, 0); /*0x5f4a2c*/
  v22 = *v21; /*0x5f4a35*/
  v33 = v21[1]; /*0x5f4a3a*/
  v23 = v21[2]; /*0x5f4a3e*/
  v34 = v23; /*0x5f4a41*/
  v24 = v21[3]; /*0x5f4a45*/
  v35 = v24; /*0x5f4a48*/
  if ( v9 <= 0 || v17 <= 0 ) /*0x5f4a50*/
  {
    v19 = *v21; /*0x5f4ab6*/
    v20 = v21[1]; /*0x5f4ab8*/
    v9 = v21[2]; /*0x5f4abb*/
    v25 = v21[3]; /*0x5f4abe*/
    goto LABEL_37; /*0x5f4abe*/
  }
  if ( v23 <= 0 || v24 <= 0 ) /*0x5f4a58*/
  {
    v20 = v36; /*0x5f4aac*/
    v26 = v17; /*0x5f4ab2*/
    goto LABEL_39; /*0x5f4ab4*/
  }
  v20 = v36; /*0x5f4a5a*/
  v25 = v17; /*0x5f4a60*/
  if ( v19 > v22 ) /*0x5f4a62*/
  {
    v9 += v19 - v22; /*0x5f4a68*/
    v19 = v22; /*0x5f4a6a*/
  }
  if ( v36 > v33 ) /*0x5f4a72*/
  {
    v25 = v36 - v33 + v17; /*0x5f4a76*/
    v20 = v33; /*0x5f4a78*/
  }
  if ( v9 + v19 < v22 + v23 ) /*0x5f4a81*/
    v9 = v34 - v19 + v22 + 1; /*0x5f4a89*/
  if ( v25 + v20 >= v33 + v35 ) /*0x5f4a9c*/
  {
LABEL_37:
    v26 = v25; /*0x5f4ac1*/
    goto LABEL_39; /*0x5f4ac3*/
  }
  v26 = v33 - v20 + v35 + 1; /*0x5f4aa8*/
LABEL_39:
  v27 = v31[1] + v20 - v30 / 2; /*0x5f4acd*/
  *v39 = v31[0] + v19 - v29 / 2; /*0x5f4af6*/
  v39[1] = v27; /*0x5f4af8*/
  v39[2] = v9; /*0x5f4afb*/
  v39[3] = v26; /*0x5f4b01*/
  return (int)v39; /*0x5f48bf*/
}
}
} // namespace game
} // namespace ra2

// 0x5F4D30
namespace ra2 {
namespace game {
int ObjectClass::Undeploy()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ObjectClass::Undeploy(#374 *this)
{
  _DWORD *v2; // eax
  int v3; // ecx
  int v4; // edi
  int result; // eax
  int v6; // [esp+10h] [ebp-20h] BYREF
  int v7; // [esp+14h] [ebp-1Ch]
  _DWORD a1[3]; // [esp+18h] [ebp-18h] BYREF
  _BYTE v9[12]; // [esp+24h] [ebp-Ch] BYREF

  if ( !HouseClass_Player.__pad_5568[22252] || this->inLimbo ) /*0x5f4d45*/
  {
    LOBYTE(result) = 0; /*0x5f4eb7*/
  }
  else
  {
    (*(void (__thiscall **)(#374 *))(*(_DWORD *)this + 336))(this); /*0x5f4d55*/
    (*(void (__thiscall **)(#374 *, int))(*(_DWORD *)this + 220))(this, 1); /*0x5f4d61*/
    (*(void (__thiscall **)(#374 *, _DWORD))(*(_DWORD *)this + 292))(this, 0); /*0x5f4d6d*/
    RemoveTarget((IUnknown *)this); /*0x5f4d79*/
    AudioController::Stop((_DWORD *)this + 15); /*0x5f4d81*/
    AudioFile::Stop((_DWORD *)this + 20); /*0x5f4d89*/
    if ( (*(int (__thiscall **)(#374 *))(*(_DWORD *)this + 136))(this) /*0x5f4dcb*/
      && *(_BYTE *)((*(int (__thiscall **)(#374 *))(*(_DWORD *)this + 136))(this) + 564)
      && (!*(_DWORD *)&HouseClass_Player.__pad_5568[8068]
       || *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 5
       || (*(int (__stdcall **)(char *))(this->vtable1 + 16))((char *)this + 4) != -2) )
    {
      VectorClass::RemoveItem((int *)&stru_87C374.__pad_14B0[8020], (ObjectClass *)this); /*0x5f4dd3*/
    }
    if ( (*(int (__thiscall **)(#374 *))(*(_DWORD *)this + 136))(this) ) /*0x5f4ddc*/
    {
      if ( *(_DWORD *)((*(int (__thiscall **)(#374 *))(*(_DWORD *)this + 136))(this) + 172) ) /*0x5f4df4*/
      {
        v2 = (_DWORD *)(*(int (__thiscall **)(#374 *, _BYTE *))(*(_DWORD *)this + 72))(this, v9); /*0x5f4e0b*/
        a1[0] = *v2; /*0x5f4e10*/
        a1[1] = v2[1]; /*0x5f4e22*/
        a1[2] = v2[2]; /*0x5f4e2e*/
        Coord::To_Screen(*(_DWORD **)&stru_87C374.__pad_579C[22548], a1, (IUnknown *)&v6); /*0x5f4e32*/
        v3 = *(_DWORD *)((*(int (__thiscall **)(#374 *))(*(_DWORD *)this + 136))(this) + 172); /*0x5f4e41*/
        v4 = v7 - *(__int16 *)(v3 + 4) / 2; /*0x5f4e6c*/
        v6 -= *(__int16 *)(v3 + 2) / 2; /*0x5f4e70*/
        v7 = v4; /*0x5f4e74*/
        Cell::CreateCrater(v6, v4, *(__int16 *)(v3 + 2), *(__int16 *)(v3 + 4), 1); /*0x5f4e8f*/
      }
    }
    result = (*(int (__thiscall **)(#374 *))(*(_DWORD *)this + 284))(this); /*0x5f4e98*/
    this->inLimbo = 1; /*0x5f4e9e*/
    this->needsRedraw = 0; /*0x5f4ea5*/
    LOBYTE(result) = 1; /*0x5f4eac*/
  }
  return result; /*0x5f4eae*/
}
}
} // namespace game
} // namespace ra2

// 0x5F4EC0
namespace ra2 {
namespace game {
int ObjectClass::Deploy()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ObjectClass::Deploy(#374 *this)
{
  int result; // eax
  ObjectClass *v3; // ebx
  void *v4; // eax
  ObjectClass *v5; // eax
  ObjectClass *v6; // ebx
  int *v7; // eax
  _DWORD *v8; // eax
  AbstractClass *v9; // edx
  ObjectClass *v10; // eax
  int v11; // edi
  AbstractClass *v12; // ebp
  int v13; // eax
  char *v14; // eax
  int v15; // eax
  int v16; // edx
  char v17; // cl
  char v18; // cl
  int v19; // eax
  int v20; // [esp+2Ch] [ebp-2Ch] BYREF
  AbstractClass *aP3; // [esp+30h] [ebp-28h]
  int v22; // [esp+34h] [ebp-24h] BYREF
  int v23; // [esp+38h] [ebp-20h]
  int v24; // [esp+3Ch] [ebp-1Ch]
  _DWORD a1[3]; // [esp+40h] [ebp-18h] BYREF
  char v26[12]; // [esp+4Ch] [ebp-Ch] BYREF
  IUnknown *aP1; // [esp+5Ch] [ebp+4h]
  __int16 aP1a; // [esp+5Ch] [ebp+4h]

  result = aP1->field_0; /*0x5f4ed3*/
  if ( (CoordStruct *)aP1->field_0 == *(&g_MatrixTransformState + 2396) ) /*0x5f4ed7*/
  {
    result = (int)*(&g_MatrixTransformState + 2397); /*0x5f4edc*/
    if ( (CoordStruct *)aP1->field_4 == *(&g_MatrixTransformState + 2397) ) /*0x5f4ee3*/
    {
      result = (int)*(&g_MatrixTransformState + 2398); /*0x5f4ee8*/
      if ( (CoordStruct *)aP1->field_8 == *(&g_MatrixTransformState + 2398) ) /*0x5f4eef*/
        goto LABEL_41; /*0x5f4eef*/
    }
  }
  if ( !HouseClass_Player.__pad_5568[22252] ) /*0x5f4efc*/
    goto LABEL_41; /*0x5f4efc*/
  if ( !this->inLimbo ) /*0x5f4f02*/
    goto LABEL_41; /*0x5f4f02*/
  if ( this->isOnMap ) /*0x5f4f10*/
    goto LABEL_41; /*0x5f4f10*/
  if ( !*(_DWORD *)&HouseClass_Player.__pad_5568[21752] ) /*0x5f4f22*/
  {
    v3 = *(ObjectClass **)this; /*0x5f4f24*/
    v4 = Coord::To_Cell(&stru_87C374.__pad_14B0[8132], aP1); /*0x5f4f34*/
    result = ((int (__thiscall *)(#374 *, void *, int, int, _DWORD, _DWORD))v3[2].customSound_controller[1])( /*0x5f4f3c*/
               this,
               v4,
               -1,
               -1,
               0,
               0);
    if ( result ) /*0x5f4f44*/
      goto LABEL_41; /*0x5f4f44*/
  }
  v5 = *(ObjectClass **)this; /*0x5f4f4a*/
  this->inLimbo = 0; /*0x5f4f4e*/
  this->needsRedraw = 0; /*0x5f4f55*/
  v6 = (ObjectClass *)((int (__thiscall *)(#374 *))v5->parachute)(this); /*0x5f4f64*/
  v22 = aP1->field_0; /*0x5f4f6a*/
  v23 = aP1->field_4; /*0x5f4f71*/
  v24 = aP1->field_8; /*0x5f4f78*/
  if ( v6 ) /*0x5f4f7c*/
  {
    v7 = (int *)(*(int (__thiscall **)(ObjectClass *, _DWORD *, IUnknown *))(*(_DWORD *)v6->__pad_0 + 108))(v6, a1, aP1); /*0x5f4f88*/
    v22 = *v7; /*0x5f4f8d*/
    v23 = v7[1]; /*0x5f4f94*/
    v24 = v7[2]; /*0x5f4f9b*/
  }
  (*(void (__thiscall **)(#374 *, int *))(*(_DWORD *)this + 436))(this, &v22); /*0x5f4fa8*/
  result = (*(int (__thiscall **)(#374 *, int))(*(_DWORD *)this + 292))(this, 1); /*0x5f4fb4*/
  if ( !(_BYTE)result ) /*0x5f4fbc*/
  {
    this->inLimbo = 1; /*0x5f521c*/
LABEL_41:
    LOBYTE(result) = 0; /*0x5f5223*/
    return result; /*0x5f5226*/
  }
  if ( this->isAliveFlag )
  {
    if ( (*(int (__thiscall **)(#374 *))(*(_DWORD *)this + 120))(this) != -1 ) /*0x5f4fda*/
      Targeting::Readd((IUnknown *)this); /*0x5f4fe2*/
    if ( v6 ) /*0x5f4fe9*/
    {
      if ( LOBYTE(v6[3].nextObject) /*0x5f5036*/
        && ((*(int (__thiscall **)(#374 *))(*(_DWORD *)this + 44))(this) != 36
         || (*(int (__thiscall **)(#374 *))(*(_DWORD *)this + 44))(this) == 36 && v6[4].__pad_0[1])
        && (!*(_DWORD *)&HouseClass_Player.__pad_5568[8068]
         || *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 5
         || (*(int (__stdcall **)(char *))(this->vtable1 + 16))((char *)this + 4) != -2) )
      {
        ObjectClass::SetDeployState((ObjectClass *)this, 0); /*0x5f5040*/
      }
      if ( *(_DWORD *)v6[1].__pad_0 ) /*0x5f5045*/
      {
        v8 = (_DWORD *)(*(int (__thiscall **)(#374 *, char *))(*(_DWORD *)this + 72))(this, v26); /*0x5f505c*/
        a1[0] = *v8; /*0x5f5061*/
        a1[1] = v8[1]; /*0x5f5073*/
        a1[2] = v8[2]; /*0x5f507f*/
        Coord::To_Screen(*(_DWORD **)&stru_87C374.__pad_579C[22548], a1, (IUnknown *)&v20); /*0x5f5083*/
        v9 = (AbstractClass *)((char *)aP3 + *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22548] + 180)); /*0x5f50a1*/
        v10 = *(ObjectClass **)this; /*0x5f50a3*/
        v20 += *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22548] + 176); /*0x5f50a9*/
        aP3 = v9; /*0x5f50ad*/
        v11 = *(_DWORD *)(((int (__thiscall *)(#374 *))v10->parachute)(this) + 172); /*0x5f50b7*/
        v12 = (AbstractClass *)((char *)aP3 - *(__int16 *)(v11 + 4) / 2); /*0x5f50dd*/
        v20 -= *(__int16 *)(v11 + 2) / 2; /*0x5f50df*/
        aP3 = v12; /*0x5f50e3*/
        v13 = __2_YAPAXI_Z(0x40u); /*0x5f50e7*/
        if ( v13 ) /*0x5f50f1*/
          AlphaShapeClass::CTOR(v13, (ObjectClass *)this, v20, aP3); /*0x5f5100*/
        if ( !*(_DWORD *)&HouseClass_Player.__pad_5568[21752] ) /*0x5f510c*/
          Cell::CreateCrater( /*0x5f5146*/
            v20 - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22548] + 176),
            (int)&aP3->__pad_0[-*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22548] + 180)],
            *(__int16 *)(v11 + 2),
            *(__int16 *)(v11 + 4),
            1);
      }
    }
    result = (*(int (__thiscall **)(#374 *))(*(_DWORD *)this + 136))(this); /*0x5f514f*/
    if ( *(_BYTE *)(result + 570) )
    {
      v14 = (char *)__2_YAPAXI_Z(0x210u); /*0x5f5168*/
      result = v14 ? (int)ObjectClass::checkLimbo(v14) : 0;
      this->lineTrailer = result; /*0x5f5181*/
      if ( result ) /*0x5f5187*/
      {
        aP1a = *(_WORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6243); /*0x5f519e*/
        if ( (_BYTE)aP1a /*0x5f51b4*/
          || __PAIR16__(HIBYTE(aP1a), 0) != *(unsigned __int8 *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6245) )
        {
          v18 = *(_BYTE *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6245); /*0x5f51e2*/
          *(_WORD *)result = *(_WORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6243); /*0x5f51e5*/
          *(_BYTE *)(result + 2) = v18; /*0x5f51e8*/
        }
        else
        {
          v15 = (*(int (__thiscall **)(#374 *))(*(_DWORD *)this + 136))(this); /*0x5f51be*/
          v16 = this->lineTrailer; /*0x5f51c4*/
          v17 = *(_BYTE *)(v15 + 573); /*0x5f51d4*/
          *(_WORD *)v16 = *(_WORD *)(v15 + 571); /*0x5f51d7*/
          *(_BYTE *)(v16 + 2) = v17; /*0x5f51da*/
        }
        v19 = (*(int (__thiscall **)(#374 *))(*(_DWORD *)this + 136))(this); /*0x5f51ef*/
        result = ObjectClass::updateMissionState(*((_DWORD **)this + 42), *(_DWORD *)(v19 + 576)); /*0x5f5202*/
        *(_DWORD *)(this->lineTrailer + 4) = this; /*0x5f520d*/
      }
    }
  }
  LOBYTE(result) = 1; /*0x5f5210*/
  return result; /*0x5f5212*/
}
}
} // namespace game
} // namespace ra2

// 0x5F5280
namespace ra2 {
namespace game {
int ObjectClass::Destroy2()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ObjectClass::Destroy2(#374 *this)
{
  _DWORD *v2; // ecx
  ObjectClass *v3; // edi
  bool v4; // bl
  AbstractClass *v5; // edx
  int result; // eax
  char aP1; // [esp+Ch] [ebp+4h]

  v2 = (_DWORD *)this->lineTrailer; /*0x5f5284*/
  if ( v2 ) /*0x5f528c*/
  {
    TacticalClass::GetField(v2); /*0x5f528e*/
    this->lineTrailer = 0; /*0x5f5293*/
  }
  v3 = (ObjectClass *)(*(int (__thiscall **)(#374 *))(*(_DWORD *)this + 60))(this); /*0x5f52a6*/
  v4 = 0; /*0x5f52ac*/
  if ( aP1 ) /*0x5f52b0*/
    goto LABEL_10; /*0x5f52b0*/
  if ( this && ((unsigned char)this->abstractFlags & 1) != 0 ) /*0x5f52c0*/
    v4 = (*(unsigned __int8 (__thiscall **)(#374 *))(*(_DWORD *)this + 808))(this) != 0; /*0x5f52d0*/
  if ( !v3 || !(unsigned __int8)House::IsHumanPlayer((#375 *)v3) && !v4 ) /*0x5f52e3*/
LABEL_10:
    (*(void (__thiscall **)(#374 *))(*(_DWORD *)this + 336))(this); /*0x5f52e9*/
  if ( (#374 *)MapClass::GetScrollMode((int)&stru_87C374.__pad_14B0[8132]) == this ) /*0x5f52fd*/
    MapClass::SetScrollMode((int)&stru_87C374.__pad_14B0[8132], 0); /*0x5f5306*/
  LOBYTE(v5) = aP1; /*0x5f530b*/
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)this, v5); /*0x5f5311*/
  return result; /*0x5f5316*/
}
}
} // namespace game
} // namespace ra2

// 0x5F5850
namespace ra2 {
namespace game {
int ObjectClass::UpdateProductionDisplay()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ObjectClass::UpdateProductionDisplay(#374 *this)
{
  int result; // eax
  int v3; // ebx
  int v4; // edi
  int v5; // edx
  int v6; // [esp+Ch] [ebp+4h] BYREF

  if ( !this->inLimbo ) /*0x5f5854*/
  {
    v3 = v6; /*0x5f5862*/
    if ( v6 == 2 ) /*0x5f5869*/
    {
      if ( !this->needsRedraw && this->isOnMap ) /*0x5f5879*/
      {
        result = (*(int (__thiscall **)(#374 *))(*(_DWORD *)this + 308))(this); /*0x5f5886*/
        LOBYTE(result) = 1; /*0x5f588d*/
        return result; /*0x5f5890*/
      }
    }
    else
    {
      if ( (*(int (__thiscall **)(#374 *))(*(_DWORD *)this + 44))(this) != 6 /*0x5f58b2*/
        || (result = *((_DWORD *)this + 328), !*(_DWORD *)(result + 3672))
        || v3 )
      {
        result = (int)AbstractClass::IsTechnoType(this); /*0x5f58b6*/
        v4 = result; /*0x5f58bb*/
        if ( result ) /*0x5f58bf*/
        {
          (*(void (__thiscall **)(int))(*(_DWORD *)result + 704))(result); /*0x5f58c5*/
          (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 56))(v4); /*0x5f58cf*/
          result = (*(int (__thiscall **)(#374 *, int *))(*(_DWORD *)this + 440))(this, &v6); /*0x5f58db*/
        }
      }
      if ( (v3 == 1 || v3 == 3) && !this->isOnMap ) /*0x5f58ec*/
      {
        v5 = *(_DWORD *)this; /*0x5f58f3*/
        this->isOnMap = 1; /*0x5f58f7*/
        result = (*(int (__thiscall **)(#374 *))(v5 + 308))(this); /*0x5f58fb*/
        LOBYTE(result) = 1; /*0x5f5902*/
        return result; /*0x5f5905*/
      }
      if ( !v3 && this->isOnMap ) /*0x5f590c*/
      {
        this->isOnMap = 0; /*0x5f5913*/
        LOBYTE(result) = 1; /*0x5f5917*/
        return result; /*0x5f591a*/
      }
    }
  }
  LOBYTE(result) = 0; /*0x5f591e*/
  return result; /*0x5f588c*/
}
}
} // namespace game
} // namespace ra2

// 0x5F6A10
namespace ra2 {
namespace game {
int ObjectClass::GetCell()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ObjectClass::GetCell(#374 *this)
{
  _DWORD *v1; // eax
  int v3; // [esp+8h] [ebp-14h]
  int v4; // [esp+Ch] [ebp-10h] BYREF
  _BYTE v5[12]; // [esp+10h] [ebp-Ch] BYREF

  v1 = (_DWORD *)(*(int (__thiscall **)(#374 *, _BYTE *, _DWORD))(*(_DWORD *)this + 76))(this, v5, 0); /*0x5f6a1c*/
  LOWORD(v3) = *v1 / 256; /*0x5f6a2f*/
  HIWORD(v3) = v1[1] / 256; /*0x5f6a48*/
  v4 = v3; /*0x5f6a56*/
  return (int)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v4); /*0x5f6a5f*/
}
}
} // namespace game
} // namespace ra2

// 0x5F6BD0
namespace ra2 {
namespace game {
int ObjectClass::GetBoundingSize()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ObjectClass::GetBoundingSize(#374 *this)
{
  int v2; // edi
  _BYTE v4[12]; // [esp+8h] [ebp-18h] BYREF
  _BYTE v5[12]; // [esp+14h] [ebp-Ch] BYREF

  v2 = (*(int (__thiscall **)(#374 *, _BYTE *))(*(_DWORD *)this + 172))(this, v4); /*0x5f6be8*/
  return *(_DWORD *)(*(int (__thiscall **)(#374 *, _BYTE *))(*(_DWORD *)this + 172))(this, v5) + *(_DWORD *)(v2 + 4); /*0x5f6bfe*/
}
}
} // namespace game
} // namespace ra2

// 0x652E50
namespace ra2 {
namespace game {
int ObjectClass::resetObjectState(SidebarClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ObjectClass::resetObjectState(int *this, SidebarClass *aP1)
{
  int v3; // eax

  v3 = *this; /*0x652e5e*/
  if ( (_BYTE)aP1 ) /*0x652e60*/
  {
    (*(void (__stdcall **)(_DWORD *))(v3 + 48))(MEMORY[0xB04978]); /*0x652e62*/
    return (*(int (__thiscall **)(int *, _DWORD *))(*this + 48))(this, MEMORY[0xB04910]); /*0x652e6e*/
  }
  else
  {
    (*(void (__stdcall **)(_DWORD *))(v3 + 52))(MEMORY[0xB04978]); /*0x652e75*/
    return (*(int (__thiscall **)(int *, _DWORD *))(*this + 52))(this, MEMORY[0xB04910]); /*0x652e81*/
  }
}
}
} // namespace game
} // namespace ra2

// 0x6A5BF0
namespace ra2 {
namespace game {
void ObjectClass::CleanupSidebarResources()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void CleanupSidebarResources()
{
  int *v0; // esi

  PowerClass::checkLowPower(); /*0x6a5bf2*/
  if ( MEMORY[0xB0B488] ) /*0x6a5c00*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B468]); /*0x6a5c08*/
    MEMORY[0xB0B488] = 0; /*0x6a5c10*/
  }
  if ( MEMORY[0xB0B489] ) /*0x6a5c1c*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B46C]); /*0x6a5c25*/
    MEMORY[0xB0B489] = 0; /*0x6a5c2d*/
  }
  if ( MEMORY[0xB0B48A] ) /*0x6a5c39*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B470]); /*0x6a5c42*/
    MEMORY[0xB0B48A] = 0; /*0x6a5c4a*/
  }
  if ( MEMORY[0xB0B48B] ) /*0x6a5c56*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B474]); /*0x6a5c5e*/
    MEMORY[0xB0B48B] = 0; /*0x6a5c66*/
  }
  if ( MEMORY[0xB0B48C] ) /*0x6a5c72*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B478]); /*0x6a5c7b*/
    MEMORY[0xB0B48C] = 0; /*0x6a5c83*/
  }
  if ( MEMORY[0xB0B48D] ) /*0x6a5c8f*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B47C]); /*0x6a5c98*/
    MEMORY[0xB0B48D] = 0; /*0x6a5ca0*/
  }
  if ( MEMORY[0xB0B48E] ) /*0x6a5cac*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B480]); /*0x6a5cb4*/
    MEMORY[0xB0B48E] = 0; /*0x6a5cbc*/
  }
  if ( MEMORY[0xB0B48F] ) /*0x6a5cc8*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B484]); /*0x6a5cd1*/
    MEMORY[0xB0B48F] = 0; /*0x6a5cd9*/
  }
  if ( MEMORY[0xB0B4CC] ) /*0x6a5ce5*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B490]); /*0x6a5cee*/
    MEMORY[0xB0B4CC] = 0; /*0x6a5cf6*/
  }
  if ( MEMORY[0xB0B4CD] ) /*0x6a5d02*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B494]); /*0x6a5d0a*/
    MEMORY[0xB0B4CD] = 0; /*0x6a5d12*/
  }
  if ( MEMORY[0xB0B4CE] ) /*0x6a5d1e*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B498]); /*0x6a5d27*/
    MEMORY[0xB0B4CE] = 0; /*0x6a5d2f*/
  }
  if ( MEMORY[0xB0B4CF] ) /*0x6a5d3b*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B49C]); /*0x6a5d44*/
    MEMORY[0xB0B4CF] = 0; /*0x6a5d4c*/
  }
  if ( MEMORY[0xB0B4D1] ) /*0x6a5d58*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B4A4]); /*0x6a5d60*/
    MEMORY[0xB0B4D1] = 0; /*0x6a5d68*/
  }
  if ( MEMORY[0xB0B4D2] ) /*0x6a5d74*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B4A8]); /*0x6a5d7d*/
    MEMORY[0xB0B4D2] = 0; /*0x6a5d85*/
  }
  if ( MEMORY[0xB0B4D3] ) /*0x6a5d91*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B4AC]); /*0x6a5d9a*/
    MEMORY[0xB0B4D3] = 0; /*0x6a5da2*/
  }
  if ( MEMORY[0xB0B4D4] ) /*0x6a5dae*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B4B0]); /*0x6a5db6*/
    MEMORY[0xB0B4D4] = 0; /*0x6a5dbe*/
  }
  if ( MEMORY[0xB0B4D5] ) /*0x6a5dca*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B4B4]); /*0x6a5dd3*/
    MEMORY[0xB0B4D5] = 0; /*0x6a5ddb*/
  }
  if ( MEMORY[0xB0B4D6] ) /*0x6a5de7*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B4B8]); /*0x6a5df0*/
    MEMORY[0xB0B4D6] = 0; /*0x6a5df8*/
  }
  if ( MEMORY[0xB0B4D7] ) /*0x6a5e04*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B4BC]); /*0x6a5e0c*/
    MEMORY[0xB0B4D7] = 0; /*0x6a5e14*/
  }
  if ( MEMORY[0xB0B4D8] ) /*0x6a5e20*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B4C0]); /*0x6a5e29*/
    MEMORY[0xB0B4D8] = 0; /*0x6a5e31*/
  }
  if ( MEMORY[0xB0B4D9] ) /*0x6a5e3d*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B4C4]); /*0x6a5e46*/
    MEMORY[0xB0B4D9] = 0; /*0x6a5e4e*/
  }
  if ( MEMORY[0xB0B4D0] ) /*0x6a5e5a*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B4A0]); /*0x6a5e62*/
    MEMORY[0xB0B4D0] = 0; /*0x6a5e6a*/
  }
  if ( MEMORY[0xB0B4DA] ) /*0x6a5e76*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B4C8]); /*0x6a5e7f*/
    MEMORY[0xB0B4DA] = 0; /*0x6a5e87*/
  }
  ScenarioClass::FreeConfig((int)MEMORY[0xB07DF8]); /*0x6a5e92*/
  ScenarioClass::FreeConfig((int)MEMORY[0xB0B3A0]); /*0x6a5e9c*/
  v0 = (int *)&MEMORY[0xB07C48]; /*0x6a5ea1*/
  do /*0x6a5eb6*/
  {
    ScenarioClass::FreeConfig((int)v0); /*0x6a5ea8*/
    v0 += 24; /*0x6a5ead*/
  }
  while ( (int)v0 < (int)&MEMORY[0xB07DC8] ); /*0x6a5eb6*/
  ScenarioClass::FreeConfig((int)MEMORY[0xB0B328]); /*0x6a5ebd*/
  ScenarioClass::FreeConfig((int)MEMORY[0xB0B408]); /*0x6a5ec7*/
}
}
} // namespace game
} // namespace ra2

// 0x6A7D70
namespace ra2 {
namespace game {
unsigned char ObjectClass::ToggleSidebarDisplay(unsigned int * a0, TabClass * aP1, int a3, int _20, SidebarClass * a4, char a6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned __int8 ObjectClass::ToggleSidebarDisplay(
        _DWORD *a0,
        TabClass *aP1,
        int a3,
        int _20,
        SidebarClass *a4,
        char a6)
{
  SidebarClass *v6; // ecx
  SidebarClass *v7; // esi
  unsigned __int8 result; // al
  SidebarClass *v9; // ecx
  unsigned __int8 bl7; // bl
  LinkClass *v10; // edi
  GadgetClass *v11; // edi
  int *v13; // ebx
  char *v14; // ebp
  int v15; // eax
  int v16; // edi
  int v17; // ebx
  char *v18; // edi
  int v19; // edi
  char *v20; // ebp

  v7 = v6; /*0x6a7d71*/
  result = v6->__pad_34BC[7913]; /*0x6a7d79*/
  if ( (HouseClass_Player.__pad_5568[17220] & 2) != 0 /*0x6a7d91*/
    && *(_DWORD *)&HouseClass_Player.__pad_5568[8068]
    && *(_DWORD *)&HouseClass_Player.__pad_5568[8068] != 5 )
  {
    return result; /*0x6a7d91*/
  }
  v9 = (SidebarClass *)a0; /*0x6a7d97*/
  if ( a0 == (_DWORD *)-1 ) /*0x6a7d9e*/
    v7->__pad_34BC[7913] = result == 0; /*0x6a7db3*/
  else
    v7->__pad_34BC[7913] = a0 == (_DWORD *)1; /*0x6a7da6*/
  LOBYTE(v9) = v7->__pad_34BC[7913]; /*0x6a7db9*/
  bl7 = (_BYTE)v9 != result; /*0x6a7dc2*/
  if ( (_BYTE)v9 == result ) /*0x6a7dcb*/
    return bl7; /*0x6a8078*/
  ObjectClass::resetObjectState(&v7->field_0, v9); /*0x6a7dd6*/
  if ( !v7->__pad_34BC[7913] ) /*0x6a7de3*/
  {
    AsyncIO::Shutdown(); /*0x6a7fc3*/
    (*(void (__thiscall **)(SidebarClass *, char *))(v7->field_0 + 52))(v7, &stru_B05488.__pad_14B0[5312]); /*0x6a7fd1*/
    (*(void (__thiscall **)(SidebarClass *, char *))(v7->field_0 + 52))(v7, &stru_B05488.__pad_579C[1916]); /*0x6a7fdd*/
    (*(void (__thiscall **)(SidebarClass *, char *))(v7->field_0 + 52))(v7, &stru_B05488.__pad_14B0[5408]); /*0x6a7fe9*/
    v18 = &stru_B05488.__pad_14B0[4880]; /*0x6a7fec*/
    do /*0x6a8002*/
    {
      (*(void (__thiscall **)(SidebarClass *, char *))(v7->field_0 + 52))(v7, v18); /*0x6a7ff6*/
      v18 += 96; /*0x6a7ff9*/
    }
    while ( (int)v18 < (int)&stru_B05488.__pad_14B0[5264] ); /*0x6a8002*/
    (*(void (__thiscall **)(SidebarClass *, char *))(v7->field_0 + 52))(v7, &stru_B05488.__pad_579C[1796]); /*0x6a800d*/
    (*(void (__thiscall **)(SidebarClass *, char *))(v7->field_0 + 52))(v7, &stru_B05488.__pad_579C[2020]); /*0x6a8019*/
    v19 = 0; /*0x6a8029*/
    v20 = &v7->__pad_CD2[3988 * *(_DWORD *)&v7->__pad_34BC[7904] + 2162]; /*0x6a8031*/
    do /*0x6a805f*/
    {
      Tactical::SelectObject(&stru_87C374.__pad_14B0[8132], 56 * (v19 + 60 * *((_DWORD *)v20 + 14)) + 11566720); /*0x6a8056*/
      ++v19; /*0x6a805b*/
    }
    while ( v19 < 60 ); /*0x6a805f*/
    (*(void (__thiscall **)(SidebarClass *, char *))(v7->field_0 + 52))(v7, &stru_B048F8.__pad_6[274]); /*0x6a806a*/
    (*(void (__thiscall **)(SidebarClass *, int))(v7->field_0 + 56))(v7, 2); /*0x6a8073*/
    return bl7; /*0x6a8073*/
  }
  (*(void (__thiscall **)(SidebarClass *))(v7->field_0 + 136))(v7); /*0x6a7ded*/
  v7->__pad_34BC[7914] = 1; /*0x6a7df8*/
  Hash::Reset(&stru_B05488.__pad_14B0[5312]); /*0x6a7dff*/
  (*(void (__thiscall **)(SidebarClass *, char *))(v7->field_0 + 48))(v7, &stru_B05488.__pad_14B0[5312]); /*0x6a7e0d*/
  Hash::Reset(&stru_B05488.__pad_579C[1916]); /*0x6a7e15*/
  (*(void (__thiscall **)(SidebarClass *, char *))(v7->field_0 + 48))(v7, &stru_B05488.__pad_579C[1916]); /*0x6a7e23*/
  v10 = (LinkClass *)&stru_B05488.__pad_14B0[4880]; /*0x6a7e26*/
  do /*0x6a7e47*/
  {
    Hash::Reset(v10); /*0x6a7e2d*/
    LOBYTE(v10[2].LinkClass_field_0C) = 0; /*0x6a7e32*/
    (*(void (__thiscall **)(SidebarClass *, LinkClass *))(v7->field_0 + 48))(v7, v10); /*0x6a7e3b*/
    v10 += 6; /*0x6a7e3e*/
  }
  while ( (int)v10 < (int)&stru_B05488.__pad_14B0[5264] ); /*0x6a7e47*/
  Hash::Reset(&stru_B05488.__pad_579C[1796]); /*0x6a7e4e*/
  Hash::InsertOrdered(&stru_87C374.__pad_14B0[8132], (int)&stru_B05488.__pad_579C[1796]); /*0x6a7e5d*/
  Hash::Reset(&stru_B05488.__pad_579C[2020]); /*0x6a7e67*/
  Hash::InsertOrdered(&stru_87C374.__pad_14B0[8132], (int)&stru_B05488.__pad_579C[2020]); /*0x6a7e76*/
  Hash::Reset(&stru_B05488.__pad_14B0[5408]); /*0x6a7e80*/
  (*(void (__thiscall **)(SidebarClass *, char *))(v7->field_0 + 48))(v7, &stru_B05488.__pad_14B0[5408]); /*0x6a7e8e*/
  Hash::Reset(&stru_B048F8.__pad_6[274]); /*0x6a7e96*/
  (*(void (__thiscall **)(SidebarClass *, char *))(v7->field_0 + 48))(v7, &stru_B048F8.__pad_6[274]); /*0x6a7ea4*/
  v11 = (GadgetClass *)&stru_B05488.__pad_14B0[4880]; /*0x6a7ea7*/
  v13 = (int *)&v7->__pad_1548[80]; /*0x6a7eac*/
  do /*0x6a7ed5*/
  {
    *(v13 - 4) = 0; /*0x6a7eb2*/
    if ( *v13 > 0 ) /*0x6a7ebd*/
      DialogControl::Hide(v11); /*0x6a7ec1*/
    v11 = (GadgetClass *)((char *)v11 + 96); /*0x6a7ec6*/
    v13 += 997; /*0x6a7ec9*/
  }
  while ( (int)v11 < (int)&stru_B05488.__pad_14B0[5264] ); /*0x6a7ed5*/
  GadgetClass::Show(&stru_B05488.__pad_14B0[96 * *(_DWORD *)&v7->__pad_34BC[7904] + 4880]); /*0x6a7ee9*/
  v14 = &v7->__pad_CD2[3988 * *(_DWORD *)&v7->__pad_34BC[7904] + 2162]; /*0x6a7f01*/
  v7->__pad_1548[3988 * *(_DWORD *)&v7->__pad_34BC[7904] + 24] = 1; /*0x6a7f08*/
  v15 = 26; /*0x6a7f1a*/
  if ( *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13496) ) /*0x6a7f12*/
    v15 = 18; /*0x6a7f21*/
  v16 = 0; /*0x6a7f34*/
  v17 = 2 /*0x6a7f54*/
      * ((*(_DWORD *)&stru_87C374.__pad_579C[21644]
        - *(_DWORD *)&stru_B05488.__pad_579C[2260]
        - v15
        + *(_DWORD *)&stru_87C374.__pad_579C[21636]
        - 7)
       / 50);
  if ( v17 > 0 ) /*0x6a7f58*/
  {
    do /*0x6a7f9d*/
    {
      Hash::Reset((_DWORD *)(56 * (v16 + 60 * *((_DWORD *)v14 + 14)) + 11566720)); /*0x6a7f72*/
      Hash::InsertOrdered(&stru_87C374.__pad_14B0[8132], 56 * (v16 + 60 * *((_DWORD *)v14 + 14)) + 11566720); /*0x6a7f95*/
      ++v16; /*0x6a7f9a*/
    }
    while ( v16 < v17 ); /*0x6a7f9d*/
  }
  stru_87C374.__pad_579C[12415] = 1; /*0x6a7fa1*/
  Tactical::UpdateUIVisibility(v7); /*0x6a7fa8*/
  (*(void (__thiscall **)(SidebarClass *, int))(v7->field_0 + 56))(v7, 2); /*0x6a7fb7*/
  return (unsigned __int8)aP1; /*0x6a7fbf*/
}
}
} // namespace game
} // namespace ra2

// 0x718260
namespace ra2 {
namespace game {
char ObjectClass::FindPlacementPosition(int a2, int a3, int a4, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall ObjectClass_FindPlacementPosition(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int *v6; // esi
  int v7; // ebx
  _DWORD *v8; // eax
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // edx
  _DWORD *v13; // eax
  int v14; // esi
  int v15; // eax
  int TileIndex; // eax
  int v17; // edx
  void *v18; // eax
  _DWORD *v19; // eax
  int v20; // esi
  int v21; // edi
  int v22; // ebx
  void *v23; // eax
  _DWORD *v24; // eax
  int v25; // esi
  _DWORD *v26; // edx
  int v27; // ecx
  int v28; // eax
  _DWORD *v30; // esi
  _DWORD *v31; // ecx
  _DWORD *v32; // eax
  int v33; // eax
  int *v34; // eax
  int *v35; // ebp
  int v36; // edx
  int v37; // [esp-28h] [ebp-60h]
  int v38; // [esp+14h] [ebp-24h] BYREF
  int v39; // [esp+18h] [ebp-20h] BYREF
  int v40; // [esp+1Ch] [ebp-1Ch] BYREF
  __int16 *v41; // [esp+20h] [ebp-18h]
  int v42; // [esp+24h] [ebp-14h] BYREF
  int v43; // [esp+28h] [ebp-10h] BYREF
  int v44; // [esp+2Ch] [ebp-Ch] BYREF
  int v45; // [esp+30h] [ebp-8h]
  int v46; // [esp+34h] [ebp-4h]

  if ( (_BYTE)a5 ) /*0x71826f*/
  {
    v30 = this + 10; /*0x718664*/
    if ( *(this + 10) == MEMORY[0xB0EBF8] && *(this + 11) == MEMORY[0xB0EBFC] && *(this + 12) == MEMORY[0xB0EC00] ) /*0x718681*/
    {
      v31 = (_DWORD *)*(this + 3); /*0x71868b*/
      v44 = v31[39]; /*0x71869a*/
      v45 = v31[40]; /*0x7186a1*/
      v46 = v31[41]; /*0x7186a8*/
      (*(void (__stdcall **)(int *))(*v31 + 244))(&v44); /*0x7186b3*/
    }
    else
    {
      (*(void (__stdcall **)(_DWORD *))(*(_DWORD *)*(this + 3) + 244))(this + 10); /*0x718689*/
    }
    v32 = (_DWORD *)(*(this + 3) + 648); /*0x7186be*/
    *v30 = *v32; /*0x7186c6*/
    *(this + 11) = v32[1]; /*0x7186cb*/
    *(this + 12) = v32[2]; /*0x7186d1*/
    *(this + 12) = Cell::GetGroundHeight(this + 10); /*0x7186e4*/
    if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], this + 10) + 80) & 0x100) == 0 /*0x7186fa*/
      || (v33 = *(this + 3), *(_BYTE *)(v33 + 140)) )
    {
      *(_BYTE *)(*(this + 3) + 140) = 0; /*0x718719*/
    }
    else
    {
      *(_BYTE *)(v33 + 140) = 1; /*0x718704*/
      *(this + 12) += MEMORY[0xB0EC2C]; /*0x718711*/
    }
    (*(void (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)*(this + 3) + 240))(*(this + 3), this + 10); /*0x718726*/
  }
  else
  {
    if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &a2) + 80) & 0x100) != 0 ) /*0x71828d*/
      v6 = (int *)*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &a2) + 58); /*0x71829e*/
    else
      v6 = (int *)*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &a2) + 57); /*0x7182b5*/
    v7 = *((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &a2) + 17); /*0x7182ca*/
    for ( LOBYTE(a5) = 0; v6; v6 = (int *)v6[12] ) /*0x7182d6*/
    {
      if ( !(*(unsigned __int8 (__thiscall **)(int *))(*v6 + 352))(v6) /*0x718305*/
        && (*(int (__thiscall **)(int *))(*v6 + 44))(v6) == 15
        && (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 3) + 44))(*(this + 3)) == 15 )
      {
        v8 = (_DWORD *)(*(int (__thiscall **)(int *, int *))(*v6 + 72))(v6, &v44); /*0x718310*/
        if ( a2 == *v8 && a3 == v8[1] && a4 == v8[2] ) /*0x718339*/
        {
          v9 = (*(int (__thiscall **)(int *))(*v6 + 132))(v6); /*0x718343*/
          v10 = *v6; /*0x718354*/
          v38 = *(_DWORD *)(v9 + 160); /*0x718357*/
          (*(void (__thiscall **)(int *, int *, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))(v10 + 364))( /*0x71836e*/
            v6,
            &v38,
            0,
            *((_DWORD *)MEMORY[0x8871E0] + 1002),
            0,
            1,
            0,
            0);
        }
      }
      else if ( (*(unsigned __int8 (__thiscall **)(int *))(*v6 + 352))(v6) || (v6[5] & 4) == 0 ) /*0x718397*/
      {
        if ( (*(unsigned __int8 (__thiscall **)(int *))(*v6 + 352))(v6) ) /*0x7183d4*/
        {
          v40 = *(_DWORD *)((*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 3) + 132))(*(this + 3)) + 160); /*0x7183f5*/
          (*(void (__thiscall **)(_DWORD, int *, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)*(this + 3) /*0x71840f*/
                                                                                             + 364))(
            *(this + 3),
            &v40,
            0,
            *((_DWORD *)MEMORY[0x8871E0] + 1002),
            0,
            1,
            0,
            0);
        }
        else if ( (v6[5] & 4) == 0 ) /*0x718428*/
        {
          LOBYTE(a5) = 1; /*0x71842a*/
        }
      }
      else
      {
        v11 = (*(int (__thiscall **)(int *))(*v6 + 132))(v6); /*0x71839d*/
        v12 = *v6; /*0x7183a9*/
        v39 = *(_DWORD *)(v11 + 160); /*0x7183ab*/
        (*(void (__thiscall **)(int *, int *, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))(v12 + 364))( /*0x7183c8*/
          v6,
          &v39,
          0,
          *((_DWORD *)MEMORY[0x8871E0] + 1002),
          0,
          1,
          0,
          0);
      }
    }
    if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &a2) + 80) & 0x100) != 0 /*0x71846c*/
      && (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &a2) + 80) & 0x200) == 0 )
    {
      LOBYTE(a5) = 1; /*0x71846e*/
    }
    v13 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int *))(*(_DWORD *)*(this + 3) + 72))(*(this + 3), &v44); /*0x71847d*/
    LOWORD(v38) = *v13 / 256; /*0x718490*/
    HIWORD(v38) = v13[1] / 256; /*0x7184a8*/
    v40 = v38; /*0x7184b1*/
    v41 = (__int16 *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v40); /*0x7184c0*/
    LOBYTE(v39) = ObjectClass::processPointerInvalid != 0; /*0x7184d1*/
    if ( v7 != -1 && !*(_BYTE *)(*((_DWORD *)MEMORY[0xA83D84] + v7) + 681) && !ObjectClass::processPointerInvalid /*0x7184f4*/
      || (_BYTE)a5 )
    {
      v14 = *(_DWORD *)((*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 3) + 132))(*(this + 3)) + 1460); /*0x718505*/
      switch ( v14 ) /*0x71850e*/
      {
        case 9: /*0x71850e*/
          v14 = 0; /*0x718510*/
          break;
        case 2: /*0x71850e*/
          v14 = 0; /*0x718519*/
          break;
        case 3: /*0x71850e*/
          v14 = 5; /*0x718522*/
          break;
      }
      v38 = 0; /*0x71852b*/
      LOWORD(a5) = a2 / 256; /*0x71855c*/
      HIWORD(a5) = a3 / 256; /*0x718561*/
      v40 = a5; /*0x71857b*/
      v15 = *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v40) + 80) >> 8; /*0x7185ad*/
      LOBYTE(v15) = v15 & 1; /*0x7185b0*/
      v37 = v15; /*0x7185b5*/
      TileIndex = MapClass::GetTileIndex(&MEMORY[0x87F7E8], v41 + 18, v14, v39); /*0x7185bf*/
      v42 = *LayerClass::Pathfinding_Find( /*0x7185e6*/
               &MEMORY[0x87F7E8],
               v17,
               &v43,
               (__int16 *)&a5,
               1,
               TileIndex,
               v14,
               v37,
               1,
               1,
               0,
               0,
               0,
               1,
               (__int16 *)&v38,
               0,
               0);
      v18 = Coord::To_Cell(&MEMORY[0x87F7E8], &a2); /*0x7185ea*/
      v19 = (_DWORD *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)v18 + 72))(v18, &v44); /*0x7185f8*/
      v20 = a2 - *v19; /*0x71860b*/
      v21 = a3 - v19[1]; /*0x718611*/
      v22 = a4 - v19[2]; /*0x718617*/
      v23 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v42); /*0x71861f*/
      v24 = (_DWORD *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)v23 + 72))(v23, &v44); /*0x71862d*/
      v25 = *v24 + v20; /*0x718635*/
      v26 = (_DWORD *)(*(this + 3) + 648); /*0x71863d*/
      v27 = v21 + v24[1]; /*0x718643*/
      v28 = v22 + v24[2]; /*0x718645*/
      *v26 = v25; /*0x718647*/
      v26[1] = v27; /*0x71864c*/
      v26[2] = v28; /*0x718650*/
      return 0; /*0x718658*/
    }
  }
  v34 = this + 10; /*0x718735*/
  if ( *(this + 10) == MEMORY[0xB0EBF8] && *(this + 11) == MEMORY[0xB0EBFC] && *(this + 12) == MEMORY[0xB0EC00] ) /*0x718754*/
  {
    v35 = (int *)*(this + 3); /*0x71875e*/
    v44 = v35[39]; /*0x71876d*/
    v45 = v35[40]; /*0x718774*/
    v46 = v35[41]; /*0x71877b*/
    v36 = *v35; /*0x71877f*/
    v34 = &v44; /*0x718782*/
  }
  else
  {
    v35 = (int *)*(this + 3); /*0x718756*/
    v36 = *v35; /*0x718759*/
  }
  (*(void (__thiscall **)(int *, int *))(v36 + 240))(v35, v34); /*0x718789*/
  return 1; /*0x718649*/
}
}
} // namespace game
} // namespace ra2

// 0x746CB0
namespace gamemd {
int ObjectClass_GetTypeVt40_2()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
int __thiscall ObjectClass::GetTypeVt40_2(#377 *this)
{
  return TechnoClass::GetTypeVt40(this);
}
}
} // namespace gamemd

// 0x746CC0
namespace gamemd {
int ObjectClass_GetTypeVt41_2()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
int __thiscall ObjectClass::GetTypeVt41_2(#377 *this)
{
  return ObjectClass::GetTypeVt41(this);
}
}
} // namespace gamemd

// 0x74CD60
namespace ra2 {
namespace game {
int ObjectClass::processDeath()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_74CD60(_WORD *this)
{
  int v1; // edx
  char *i; // esi

  v1 = MEMORY[0xB1D2A0] - 1; /*0x74cd68*/
  if ( MEMORY[0xB1D2A0] - 1 < 0 ) /*0x74cd6d*/
    return 0; /*0x74cda2*/
  for ( i = (char *)MEMORY[0xB1D294] + 4 * v1; /*0x74cd78*/
        *(_WORD *)(*(_DWORD *)i + 248) != *this || *(_WORD *)(*(_DWORD *)i + 250) != *(this + 1);
        i -= 4 )
  {
    if ( --v1 < 0 ) /*0x74cd97*/
      return 0; /*0x74cd97*/
  }
  return *((_DWORD *)MEMORY[0xB1D294] + v1); /*0x74cd9e*/
}
}
} // namespace game
} // namespace ra2

// 0x401940
namespace ra2 {
namespace game {
int ObjectClass::GetMember06()
{
{
    return this->nextArrayIndex;
}
}
} // namespace game
} // namespace ra2

// 0x4135A0
namespace ra2 {
namespace game {
bool ObjectClass::HasLinkedObject(VectorClass * aP0)
{
{
    VectorClass *v1;
    v1 = *(VectorClass **)((*(int (__thiscall **)(VectorClass *))(*(int *)aP0->vtable0 + 444))(aP0) + 224);
    return v1 && v1 != aP0;
}
}
} // namespace game
} // namespace ra2

// 0x4264D0
namespace ra2 {
namespace game {
int ObjectClass::COMStub_108()
{
return 0;
}
} // namespace game
} // namespace ra2

// 0x4886A0
namespace ra2 {
namespace game {
char ObjectClass::GetStateFlag()
{
{
    return this->referenceCount;
}
}
} // namespace game
} // namespace ra2

// 0x4CA120
namespace ra2 {
namespace game {
int ObjectClass::GetMember09()
{
{
    return this->objectTypeFlags;
}
}
} // namespace game
} // namespace ra2

// 0x4E02C0
namespace ra2 {
namespace game {
int ObjectClass::updateStateFlags()
{
{
    int result;
    result = *(void**)this;
    if ( *(void**)this )
    return (*(int (__stdcall **)(int))(*(int *)(result) + 8))(result);
    return result;
}
}
} // namespace game
} // namespace ra2

// 0x4E14A0
namespace gamemd {
int ObjectClass::InputThunkA()
{
// 0x4e14a0
    int __thiscall ObjectClass::InputThunkA(int *(void**)this)
{
    return ObjectClass::GetWidth(this);
}
}
} // namespace gamemd

// 0x4E14B0
namespace gamemd {
int ObjectClass::InputThunkB()
{
// 0x4e14b0
    int __thiscall ObjectClass::InputThunkB(int *(void**)this)
{
    return ObjectClass::GetHeight(this);
}
}
} // namespace gamemd

// 0x556620
namespace ra2 {
namespace game {
int ObjectClass::GetWidth()
{
{
    return this->vtable1;
}
}
} // namespace game
} // namespace ra2

// 0x556B50
namespace ra2 {
namespace game {
int ObjectClass::updateMissionState(int a2)
{
{
    int result;
    result = a2;
    if ( !g_lParam )
    result = 2 * a2;
    this->vtable2 = result;
    return result;
}
}
} // namespace game
} // namespace ra2

// 0x55A8C0
namespace ra2 {
namespace game {
unsigned int * ObjectClass::ComputeScreenYOffset(BuildingTypeClass * aP0, unsigned int * a1)
{
{
    IUnknown *v2;
    BuildingTypeClass *v3;
    v2 = (IUnknown *)(*(int (__thiscall **)(int))(**(int **)&aP0->vtable0[8] + 456))(*(int *)&aP0->vtable0[8]);
    v3 = (BuildingTypeClass *)ZCoordToScreenY(v2);
    *a1 = 0;
    *((int*)(a1) + 1) = v3;
    return a1;
}
}
} // namespace game
} // namespace ra2

// 0x55BAA0
namespace ra2 {
namespace game {
char ObjectClass::SetDeployState(ObjectClass * aP0, char a2)
{
{
    int v2;
    if ( aP0->isInLogic )
    return 1;
    if ( !DisplayClass::RenderStatusText(v2, (IUnknown *)aP0, a2) )
    return 0;
    aP0->isInLogic = 1;
    return 1;
}
}
} // namespace game
} // namespace ra2

// 0x5F5F40
namespace ra2 {
namespace game {
int ObjectClass::GetZAboveGround()
{
{
    int v2;
    int v4[3];
    v4[0] = this->location;
    v4[1] = this->WaveClass_field_14C;
    v4[2] = this->WaveClass_field_150;
    v2 = this->WaveClass_field_150 - Cell::GetGroundHeight(v4);
    if ( this->onBridge )
    v2 -= DataGlobal_AC13BC;
    return v2;
}
}
} // namespace game
} // namespace ra2

// 0x5F6C10
namespace ra2 {
namespace game {
int ObjectClass::IsAboveScreenMargin()
{
{
    int result;
    result = this->DropAsBomb();
    LOBYTE(result) = result > -20;
    return result;
}
}
} // namespace game
} // namespace ra2

// 0x5F6DC0
namespace ra2 {
namespace game {
int ObjectClass::CreateInstance()
{
{
    char v3;
    ObjectClass::Dtor(this);
    if ( (v3 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (int)this;
}
}
} // namespace game
} // namespace ra2

// 0x6241C0
namespace ra2 {
namespace game {
char ObjectClass::Release()
{
{
    return (unsigned char)this->vtable2;
}
}
} // namespace game
} // namespace ra2

// 0x6241D0
namespace ra2 {
namespace game {
int ObjectClass::GetMember01()
{
{
    return this->vtable1;
}
}
} // namespace game
} // namespace ra2

// 0x6A5000
namespace ra2 {
namespace game {
int ObjectClass::processDamage()
{
{
    int v1;
    int result;
    PowerClass::Stub(this);
    v1 = 4;
    do
  {
    result = SearchMIXFile(DataGlobal_83F92C, 0);
    --v1;
    DataGlobal_B07BC0 = result;
  }
    while ( v1 );
    return result;
}
}
} // namespace game
} // namespace ra2

// 0x6ABA40
namespace ra2 {
namespace game {
int ObjectClass::checkHealth()
{
{
    Mouse::SetCursor((int)&DataGlobal_87F7E8, 0, 0);
    return 1;
}
}
} // namespace game
} // namespace ra2

// 0x6AC7A0
namespace ra2 {
namespace game {
unsigned int * ObjectClass::updateAnimation(char a2)
{
{
    GadgetClass::Dtor(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return &this->vfptr;
}
}
} // namespace game
} // namespace ra2

// 0x6E45E0
namespace ra2 {
namespace game {
int ObjectClass::FindOwner(unsigned int * a0, AnimClass * aP1)
{
{
    if ( !a0 )
    return 0;
    if ( aP1 == (AnimClass *)8997 )
    return Property::GetField11(a0);
    if ( aP1 == (AnimClass *)-1 )
    return 0;
    if ( BuildingType::IsSpecialType(aP1) )
    return BuildingType::FindOwnerHouse(aP1);
    return HouseClass::FindOwner(aP1);
}
}
} // namespace game
} // namespace ra2

// 0x72A660
namespace ra2 {
namespace game {
int ObjectClass::setTarget(int a2)
{
{
    *(int *)&this->__pad_2C[4] = a2;
    return a2;
}
}
} // namespace game
} // namespace ra2

// 0x72A670
namespace ra2 {
namespace game {
unsigned int * ObjectClass::clearTarget(char a2)
{
{
    GadgetClass::Dtor(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this->__pad_0;
}
}
} // namespace game
} // namespace ra2

// 0x77D200
namespace gamemd {
int ObjectClass::j_Game_ProcessIdle()
{
// 0x77d200
    char __thiscall ObjectClass::j_Game_ProcessIdle(SimpleWonlineDialogControl *(void**)this)
{
    return Game::ProcessIdle((CreateGameDialogControl *)this);
}
}
} // namespace gamemd

// 0x7A2E70
namespace ra2 {
namespace game {
unsigned int * ObjectClass::loc_7A2E70(char a2)
{
{
    this->vfptr = &vt_SimpleWonlineDialogControl;
    OwnerDrawControl::InitVtable((DialogControl_OwnerDraw *)this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return &this->vfptr;
}
}
} // namespace game
} // namespace ra2
