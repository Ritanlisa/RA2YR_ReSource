// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Object_e4.hpp"

// 0x655C50
MapClass * * FogOfWar::RevealArea(RadarClass * aP1)
{
  int result; // eax
  int v5; // ecx
  int v6; // ecx
  int v7; // edx
  double v8; // st7
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  _DWORD *v12; // ebx
  int v13; // ebp
  int v14; // eax
  unsigned __int16 v15; // ax
  int v16; // ebx
  int v17; // ebx
  int v18; // edx
  int v19; // eax
  int v20; // ebx
  int v21; // eax
  int v22; // edx
  int v23; // ebx
  int *v24; // esi
  int v25; // eax
  int v26; // ecx
  int v27; // edx
  bool v28; // cc
  int v29; // edi
  int v30; // ebx
  int v31; // ebp
  int v32; // ebx
  int v33; // ecx
  char v34; // [esp+13h] [ebp-2Dh]
  int v35; // [esp+14h] [ebp-2Ch]
  int v36; // [esp+18h] [ebp-28h]
  _DWORD v37[2]; // [esp+20h] [ebp-20h] BYREF
  int GroundHeight; // [esp+28h] [ebp-18h]
  int v39; // [esp+2Ch] [ebp-14h]
  char v40[16]; // [esp+30h] [ebp-10h] BYREF
  int v41; // [esp+44h] [ebp+4h]
  char v42; // [esp+44h] [ebp+4h]
  int v43; // [esp+44h] [ebp+4h]

  result = (int)HouseClass_Player; /*0x655c50*/
  if ( !HouseClass_Player ) /*0x655c62*/
    return result; /*0x655c62*/
  result = (*(int (__thiscall **)(_DWORD, char *))(**(_DWORD **)(this + 4636) + 120))(*(_DWORD *)(this + 4636), v40); /*0x655c75*/
  v5 = *aP1; /*0x655c7e*/
  v41 = *aP1; /*0x655c82*/
  if ( v41 < *(_DWORD *)result ) /*0x655c86*/
    return result; /*0x655c86*/
  if ( v5 >= *(_DWORD *)result + *(_DWORD *)(result + 8) ) /*0x655c93*/
    return result; /*0x655c93*/
  v6 = aP1[1]; /*0x655c99*/
  v7 = *(_DWORD *)(result + 4); /*0x655c9c*/
  if ( v6 < v7 ) /*0x655ca5*/
    return result; /*0x655ca5*/
  result = v7 + *(_DWORD *)(result + 12); /*0x655cae*/
  if ( v6 >= result ) /*0x655cb2*/
    return result; /*0x655cb2*/
  v8 = (double)v41 / *(float *)(this + 5256) - (double)*(int *)(this + 5264); /*0x655cc2*/
  v37[0] = ((__int16)Math::RoundToInt(v8) << 8) + 128; /*0x655d1b*/
  v37[1] = ((__int16)Math::RoundToInt(v8) << 8) + 128; /*0x655d2b*/
  GroundHeight = 0; /*0x655d2f*/
  GroundHeight = Cell::GetGroundHeight(v37); /*0x655d38*/
  if ( !g_hWnd || (v42 = 1, !Cell::IsPassable(v37)) ) /*0x655d4f*/
    v42 = 0; /*0x655d5d*/
  if ( !g_hWnd || (v34 = 1, !(unsigned __int8)FogOfWar_Get(v37)) ) /*0x655d74*/
    v34 = 0; /*0x655d82*/
  v35 = 0; /*0x655d8a*/
  v9 = **(_DWORD **)(this + 4696) + 24 * (unsigned __int8)(*aP1 - 5 * aP1[1]); /*0x655da7*/
  v10 = *(_DWORD *)(v9 + 16); /*0x655daa*/
  v11 = *(_DWORD *)(v9 + 4); /*0x655dae*/
  v36 = v10; /*0x655db3*/
  if ( v10 <= 0 ) /*0x655db7*/
    goto LABEL_26; /*0x655db7*/
  v12 = (_DWORD *)(v11 + 4); /*0x655dbd*/
  while ( 1 ) /*0x655dc4*/
  {
    v13 = *(v12 - 1); /*0x655dc4*/
    if ( *v12 != *aP1 || v12[1] != aP1[1] ) /*0x655dd7*/
      goto LABEL_25; /*0x655dd7*/
    if ( (!v42 || (unsigned __int8)House::IsHumanPlayer(*(#375 **)(v13 + 540))) /*0x655e10*/
      && (!*(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v13 + 132))(v13) + 559)
       || Object::IsAlliedWithObjectHouse(HouseClass_Player, v13)) )
    {
      if ( !*(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v13 + 132))(v13) + 562) ) /*0x655e24*/
        break; /*0x655e24*/
      if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v13 + 132))(v13) + 3227) ) /*0x655e3d*/
        break; /*0x655e3d*/
      v14 = *(_DWORD *)(v13 + 540); /*0x655e4b*/
      if ( v14 ) /*0x655e53*/
      {
        if ( !*(_BYTE *)(*(_DWORD *)(v14 + 52) + 422) ) /*0x655e58*/
          break; /*0x655e58*/
      }
    }
    v10 = v36; /*0x655e66*/
  LABEL_25:
    v12 += 4; /*0x655e6a*/
    if ( ++v35 >= v10 ) /*0x655e78*/
      goto LABEL_26; /*0x655e78*/
  }
  if ( !v13 ) /*0x655f4a*/
  {
  LABEL_26:
    if ( v34 ) /*0x655e84*/
    {
      v15 = (*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 4640) + 40))(*(_DWORD *)(this + 4640), aP1); /*0x655e93*/
      (*(void (__thiscall **)(_DWORD, int *, unsigned int))(**(_DWORD **)(this + 4636) + 36))( /*0x655f40*/
        *(_DWORD *)(this + 4636),
        aP1,
        ((unsigned int)((unsigned __int8)((unsigned __int8)(v15 >> g_BitShift_Red) << g_BitShift_Green_0) >> 1) >> g_BitShift_Green_0 << g_BitShift_Red)
      | ((unsigned int)((unsigned __int8)((unsigned __int8)(v15 >> g_BitMask_Green) << g_BitMask_Blue) >> 1) >> g_BitMask_Blue << g_BitMask_Green)
      | ((unsigned int)((unsigned __int8)((unsigned __int8)(v15 >> g_BitShift_Blue) << g_BitMask_Red) >> 1) >> g_BitMask_Red << g_BitShift_Blue));
    }
    else if ( v42 ) /*0x65605e*/
    {
      (*(void (__stdcall **)(int *, _DWORD))(**(_DWORD **)(this + 4636) + 36))(aP1, 0); /*0x65608c*/
    }
    else
    {
      v20 = **(_DWORD **)(this + 4636); /*0x65606f*/
      v21 = (*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 4640) + 40))(*(_DWORD *)(this + 4640), aP1); /*0x656071*/
      (*(void (__thiscall **)(_DWORD, int *, int))(v20 + 36))(*(_DWORD *)(this + 4636), aP1, v21); /*0x65607c*/
    }
    goto LABEL_45; /*0x655f43*/
  }
  v16 = *(_DWORD *)(v13 + 540); /*0x655f50*/
  v43 = v16; /*0x655f5b*/
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v13 + 196))(v13) ) /*0x655f5f*/
  {
    v43 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v13 + 208))(v13, 0); /*0x655f76*/
    v16 = v43; /*0x655f7a*/
  }
  if ( v16 ) /*0x655f7e*/
    v17 = (*(unsigned __int8 *)(v43 + 22265) >> g_BitShift_Green_0 << g_BitShift_Red) /*0x655fd2*/
        | (*(unsigned __int8 *)(v43 + 22266) >> g_BitMask_Blue << g_BitMask_Green)
        | (*(unsigned __int8 *)(v16 + 22267) >> g_BitMask_Red << g_BitShift_Blue);
  else
    v17 = *(_DWORD *)(FindBuildingAnimByName(g_INI_Key_LightGrey, 1) + 816); /*0x655fe5*/
  v18 = *(_DWORD *)(v13 + 372); /*0x655feb*/
  v19 = *(_DWORD *)(v13 + 380); /*0x655ff1*/
  if ( v18 == -1 ) /*0x655ffa*/
  {
  LABEL_37:
    if ( v19 <= 0 /*0x65603a*/
      || (v19 - 1) / *((_DWORD *)g_RulesClass_Instance + 34) % 2 != 1
      || *(#375 **)(v13 + 540) != HouseClass_Player )
    {
      goto LABEL_41; /*0x65603a*/
    }
    (*(void (__thiscall **)(_DWORD, int *, int))(**(_DWORD **)(this + 4636) + 36))(*(_DWORD *)(this + 4636), aP1, ~v17); /*0x656048*/
  }
  else
  {
    if ( (int)g_CurrentFrame - v18 < v19 ) /*0x656006*/
    {
      v19 -= (int)g_CurrentFrame - v18; /*0x656008*/
      goto LABEL_37; /*0x656008*/
    }
  LABEL_41:
    (*(void (__stdcall **)(int *, int))(**(_DWORD **)(this + 4636) + 36))(aP1, v17); /*0x65604d*/
  }
  LABEL_45:
  v22 = *(_DWORD *)(this + 5276); /*0x65608f*/
  v23 = *(_DWORD *)(this + 5280); /*0x656095*/
  v24 = (int *)(this + 4620); /*0x6560a0*/
  v25 = v22 + *aP1; /*0x6560a6*/
  v26 = aP1[1] + v23; /*0x6560a8*/
  if ( v24[2] <= 0 || v24[3] <= 0 ) /*0x6560be*/
  {
    v27 = v22 + *aP1; /*0x656125*/
    v29 = aP1[1] + v23; /*0x656127*/
    result = 1; /*0x656129*/
    v33 = 1; /*0x65612b*/
  }
  else
  {
    v27 = *v24; /*0x6560c2*/
    v28 = *v24 <= v25; /*0x6560c5*/
    v29 = v24[1]; /*0x6560c7*/
    v30 = v24[2]; /*0x6560ca*/
    GroundHeight = v30; /*0x6560cd*/
    v39 = v24[3]; /*0x6560d4*/
    if ( !v28 ) /*0x6560d8*/
    {
      v30 += v27 - v25; /*0x6560dc*/
      v27 = v25; /*0x6560de*/
      GroundHeight = v30; /*0x6560e0*/
    }
    if ( v29 > v26 ) /*0x6560e6*/
    {
      v31 = v29 - v26 + v39; /*0x6560ee*/
      v29 = v26; /*0x6560f0*/
      v39 = v31; /*0x6560f2*/
    }
    if ( v27 + v30 < v25 + 1 ) /*0x6560fd*/
      GroundHeight = v25 - v27 + 2; /*0x656104*/
    v32 = v39; /*0x656108*/
    if ( v39 + v29 < v26 + 1 ) /*0x656114*/
      v32 = v26 - v29 + 2; /*0x65611b*/
    result = GroundHeight; /*0x65611d*/
    v33 = v32; /*0x656121*/
  }
  *v24 = v27; /*0x65612d*/
  v24[1] = v29; /*0x65612f*/
  v24[2] = result; /*0x656132*/
  v24[3] = v33; /*0x656135*/
  return result; /*0x656138*/
}
// 0x656150
int FogOfWar::RenderCell()
{
  int v2; // esi
  int v3; // edi
  __int64 v4; // rax
  char *v5; // edi
  char *v6; // edi
  unsigned int v7; // ecx
  int v8; // edx
  int v9; // eax
  int v10; // ecx
  int result; // eax
  _DWORD *v12; // edi
  _DWORD *v13; // esi
  int v14; // edx
  int v15; // eax
  _BYTE *v16; // edx
  int BuildingAnimByName; // ebx
  int v18; // ecx
  int v19; // ebx
  int v20; // edx
  int v21; // eax
  int v22; // [esp+10h] [ebp-8h]
  int v23; // [esp+14h] [ebp-4h]

  v2 = *(_DWORD *)(this + 4636); /*0x65615f*/
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 128))(v2); /*0x65616f*/
  v4 = v3 * (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 124))(v2); /*0x65617b*/
  v5 = *(char **)(this + 4724); /*0x65617f*/
  HIDWORD(v4) = (((BYTE4(v4) & 7) + (int)v4) >> 3) + 1; /*0x65618f*/
  memset(v5, 0, 4 * (HIDWORD(v4) >> 2)); /*0x656194*/
  v6 = &v5[4 * (HIDWORD(v4) >> 2)]; /*0x656194*/
  v7 = BYTE4(v4) & 3; /*0x656198*/
  v8 = 0; /*0x65619b*/
  memset(v6, 0, v7); /*0x65619d*/
  v23 = 0; /*0x65619f*/
  do /*0x6562b5*/
  {
    v9 = v8 + **(_DWORD **)(this + 4696); /*0x6561ab*/
    v10 = *(_DWORD *)(v9 + 16); /*0x6561ad*/
    result = *(_DWORD *)(v9 + 4); /*0x6561b0*/
    if ( v10 > 0 ) /*0x6561b5*/
    {
      v12 = (_DWORD *)(result + 4); /*0x6561bb*/
      v22 = v10; /*0x6561be*/
      do /*0x65629e*/
      {
        v13 = (_DWORD *)*(v12 - 1); /*0x6561c8*/
        v14 = *v12 /*0x6561d8*/
            + v12[1] * (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4636) + 124))(*(_DWORD *)(this + 4636));
        v15 = 1 << (v14 & 7); /*0x6561e2*/
        v16 = (_BYTE *)(*(_DWORD *)(this + 4724) + (v14 >> 3)); /*0x6561ed*/
        if ( (*v16 & (unsigned __int8)v15) == 0 ) /*0x6561f3*/
        {
          *v16 |= v15; /*0x6561fb*/
          BuildingAnimByName = *((_DWORD *)BuildingTypeClass_AnimTable + *(_DWORD *)(v13[135] + 90196)); /*0x656211*/
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v13 + 196))(v13) ) /*0x656216*/
          {
            if ( (*(int (__thiscall **)(_DWORD *, _DWORD))(*v13 + 208))(v13, 0) ) /*0x656226*/
              BuildingAnimByName = *((_DWORD *)BuildingTypeClass_AnimTable /*0x656248*/
                                   + *(_DWORD *)((*(int (__thiscall **)(_DWORD *, _DWORD))(*v13 + 208))(v13, 0) + 90196));
            else
              BuildingAnimByName = FindBuildingAnimByName(g_INI_Key_LightGrey, 1); /*0x65625c*/
          }
          v18 = *(_DWORD *)(BuildingAnimByName + 816); /*0x65625e*/
          v19 = *(_DWORD *)(BuildingAnimByName + 780); /*0x656264*/
          v20 = *(_DWORD *)(v19 + 372); /*0x65626d*/
          if ( *(_DWORD *)(v19 + 4) == 1 ) /*0x656276*/
            v21 = *(unsigned __int8 *)(v20 + v18); /*0x65627a*/
          else
            v21 = *(unsigned __int16 *)(v20 + 2 * v18); /*0x656281*/
          (*(void (__thiscall **)(_DWORD, _DWORD *, int))(**(_DWORD **)(this + 4636) + 36))( /*0x65628f*/
            *(_DWORD *)(this + 4636),
            v12,
            v21);
        }
        v12 += 4; /*0x656296*/
        result = --v22; /*0x656299*/
      }
      while ( v22 ); /*0x65629e*/
      v8 = v23; /*0x6562a4*/
    }
    v8 += 24; /*0x6562a8*/
    v23 = v8; /*0x6562b1*/
  }
  while ( v8 < 6144 ); /*0x6562b5*/
  return result; /*0x6562bb*/
}
// 0x6562D0
AbstractClass * * FogOfWar::RevealCell(IUnknown * aP1)
{
  int v3; // edx
  int v4; // eax
  _BYTE *v5; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // edx

  if ( (int)*aP1 >= 0 /*0x656310*/
    && *aP1 < (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4636) + 124))(*(_DWORD *)(this + 4636))
    && (int)aP1[1] >= 0
    && aP1[1] < (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4636) + 128))(*(_DWORD *)(this + 4636)) )
  {
    v3 = *aP1 + aP1[1] * (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4636) + 124))(*(_DWORD *)(this + 4636)); /*0x656329*/
    v4 = 1 << (v3 & 7); /*0x656333*/
    v5 = (_BYTE *)(*(_DWORD *)(this + 4724) + (v3 >> 3)); /*0x65633e*/
    if ( (*v5 & (unsigned __int8)v4) == 0 ) /*0x656344*/
    {
      *v5 |= v4; /*0x65634f*/
      v6 = *(_DWORD *)(this + 4708); /*0x656351*/
      if ( *(_DWORD *)(this + 4716) < v6 /*0x656376*/
        || (*(_BYTE *)(this + 4713) || !v6)
        && (v7 = *(_DWORD *)(this + 4720), v7 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 4700) + 8))(this + 4700, v6 + v7, 0) )
      {
        v8 = *(_DWORD *)(this + 4716); /*0x65637d*/
        v9 = *(_DWORD *)(this + 4704); /*0x656380*/
        *(_DWORD *)(this + 4716) = v8 + 1; /*0x656386*/
        *(_DWORD *)(v9 + 8 * v8) = *aP1; /*0x65638b*/
        *(_DWORD *)(v9 + 8 * v8 + 4) = aP1[1]; /*0x656391*/
      }
      *(_BYTE *)(this + 5337) = 1; /*0x656395*/
    }
  }
}
// 0x657CE0
int FogOfWar::Render()
{
  int *v2; // esi
  int v3; // ebx
  int v4; // eax
  int v5; // eax
  int result; // eax
  int v7; // ebp
  int v8; // ebx
  int v9; // esi
  int i; // [esp+10h] [ebp-24h]
  _DWORD v11[6]; // [esp+14h] [ebp-20h] BYREF
  _BYTE v12[8]; // [esp+2Ch] [ebp-8h] BYREF

  if ( g_hWnd ) /*0x657cf0*/
  {
    v7 = (*(int (__thiscall **)(_DWORD))(**(this + 1159) + 124))(*(this + 1159)); /*0x657d4e*/
    result = (*(int (__thiscall **)(_DWORD))(**(this + 1159) + 128))(*(this + 1159)); /*0x657d52*/
    v8 = 0; /*0x657d58*/
    for ( i = result; v8 < result; ++v8 ) /*0x657d60*/
    {
      v9 = 0; /*0x657d62*/
      if ( v7 > 0 ) /*0x657d66*/
      {
        do /*0x657d7f*/
        {
          v11[0] = v9; /*0x657d6c*/
          v11[1] = v8; /*0x657d73*/
          FogOfWar::RevealArea(v11); /*0x657d77*/
          ++v9; /*0x657d7c*/
        }
        while ( v9 < v7 ); /*0x657d7f*/
        result = i; /*0x657d81*/
      }
    }
  }
  else
  {
    v2 = *(this + 1159); /*0x657cf2*/
    v3 = *v2; /*0x657d06*/
    v4 = (*(int (__thiscall **)(_DWORD, _DWORD *, _DWORD, int))(**(this + 1160) + 120))(*(this + 1160), v11, 0, 1); /*0x657d0d*/
    v5 = (*(int (__thiscall **)(int *, _BYTE *, _DWORD, int))(*v2 + 120))(v2, v12, *(this + 1160), v4); /*0x657d21*/
    (*(void (__thiscall **)(_DWORD, int))(v3 + 8))(*(this + 1159), v5); /*0x657d2b*/
    return FogOfWar::RenderCell(this); /*0x657d30*/
  }
  return result; /*0x657d35*/
}
// 0x5864A0
namespace gamemd {
bool FogOfWar_Get(IUnknown * aP0)
{
  int v1; // eax
  int v2; // ecx
  unsigned int v3; // eax
  _DWORD *v4; // eax
  _DWORD *NeighbourContent; // eax
  unsigned int v6; // eax
  __int16 v8; // [esp+4h] [ebp-8h]
  __int16 v9; // [esp+4h] [ebp-8h]
  __int16 v10; // [esp+6h] [ebp-6h]
  int v11; // [esp+10h] [ebp+4h]
  int v12; // [esp+10h] [ebp+4h]

  v1 = aP0[2] / g_MapRenderState; /*0x5864ac*/
  if ( (v1 & 1) != 0 ) /*0x5864b5*/
  {
    v8 = *aP0 / 256; /*0x5864cd*/
    v10 = aP0[1] / 256; /*0x5864e3*/
    v2 = v1 / 2 + 1; /*0x5864f0*/
    v3 = (__int16)(v8 - v2) + ((__int16)(v10 - v2) << 9); /*0x586508*/
    if ( v3 >= 0x40000 || (v4 = *(_DWORD **)(g_Shroud_CellArray + 4 * v3)) == 0 ) /*0x58651e*/
    {
      LOWORD(v11) = v8 - v2; /*0x5864fa*/
      HIWORD(v11) = v10 - v2; /*0x5864f5*/
      g_Map_GlobalCellIndex = v11; /*0x586524*/
      v4 = g_CellClassArray; /*0x586529*/
    }
    if ( (int)v4[79] <= 0 ) /*0x586536*/
      return 0; /*0x586536*/
    NeighbourContent = Cell::GetNeighbourContent(v4, 3u); /*0x586540*/
  }
  else
  {
    v9 = *aP0 / 256; /*0x586559*/
    HIWORD(v12) = aP0[1] / 256 - v1 / 2; /*0x586580*/
    LOWORD(v12) = v9 - v1 / 2; /*0x586585*/
    v6 = (__int16)v12 + (SHIWORD(v12) << 9); /*0x586593*/
    if ( v6 >= 0x40000 || (NeighbourContent = *(_DWORD **)(g_Shroud_CellArray + 4 * v6)) == 0 ) /*0x5865a9*/
    {
      g_Map_GlobalCellIndex = v12; /*0x5865af*/
      NeighbourContent = g_CellClassArray; /*0x5865b4*/
    }
  }
  return (int)NeighbourContent[79] > 0; /*0x5865c5*/
}
} // namespace gamemd
