// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Terrain_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"

// 0x48B720
namespace gamemd {
int Terrain::GetTileIndex(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  return (*(_DWORD *)(this->q024 + 36 * *(_DWORD *)(this->q030 + 4 * a2)) & 1) != 0
       ? this->q024 + 36 * *(_DWORD *)(this->q030 + 4 * a2)
       : 0;
}
}
} // namespace gamemd

// 0x48B9E0
namespace gamemd {
int Terrain::GetTileType(AnimClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  return (*(_DWORD *)(this->q034 + 24 * *(_DWORD *)(this->q040 + 4 * (_DWORD)aP1)) & 1) != 0
       ? this->q034 + 24 * *(_DWORD *)(this->q040 + 4 * (_DWORD)aP1)
       : 0;
}
}
} // namespace gamemd

// 0x568E40
namespace gamemd {
AbstractClass * * Terrain::PlaceCliffs(int a2, int a3, IUnknown * aP3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  ObjectClass *v6; // eax
  AbstractClass *v7; // edi
  bool v10; // sf
  ObjectClass *v12; // eax
  AbstractClass *v13; // esi
  ObjectClass *v17; // ecx
  ObjectClass *v20; // ecx
  CCINIClass *v24; // eax
  ObjectClass *v26; // eax
  ObjectClass *v30; // ecx
  ObjectClass *v33; // ecx
  CCINIClass *v37; // eax
  ObjectClass *v39; // eax
  IUnknown *v45; // ebp
  AbstractClass *v47; // edx
  IUnknown *v48; // edi
  #374 *v50; // eax
  #374 *v51; // eax
  AbstractClass *v58; // edx
  IUnknown *v60; // esi
  IUnknown *v61; // edi
  AbstractClass *v62; // esi
  char v63; // [esp+13h] [ebp-61h]
  ObjectClass *v64; // [esp+14h] [ebp-60h]
  ObjectClass *v65; // [esp+14h] [ebp-60h]
  IUnknown *i; // [esp+18h] [ebp-5Ch]
  ObjectClass *v67; // [esp+1Ch] [ebp-58h]
  IUnknown *v69; // [esp+24h] [ebp-50h]
  IUnknown *v70; // [esp+24h] [ebp-50h]
  IUnknown *v71; // [esp+30h] [ebp-44h] BYREF
  IUnknown *v72; // [esp+34h] [ebp-40h] BYREF
  IUnknown *v73; // [esp+38h] [ebp-3Ch] BYREF
  IUnknown *v75; // [esp+40h] [ebp-34h] BYREF
  IUnknown *v76; // [esp+44h] [ebp-30h]
  __int16 v77[4]; // [esp+48h] [ebp-2Ch] BYREF
  CCINIClass *v78; // [esp+50h] [ebp-24h] BYREF
  void **v81; // [esp+5Ch] [ebp-18h] BYREF
  void *Block; // [esp+60h] [ebp-14h]
  ObjectClass *v83; // [esp+64h] [ebp-10h]
  char v84; // [esp+69h] [ebp-Bh]
  ObjectClass *v85; // [esp+6Ch] [ebp-8h]
  int v86; // [esp+70h] [ebp-4h]
  IUnknown *v88; // [esp+78h] [ebp+4h]
  *(_DWORD *)v77 = g_MapSeedState; /*0x568e4b*/
  unsigned int v5 = (__int16)*(_DWORD *)(a2 + 36) + ((__int16)HIWORD(*(_DWORD *)(a2 + 36)) << 9); /*0x568e6c*/
  if ( v5 < 0x40000 && (v6 = *(ObjectClass **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v5)) != 0 ) /*0x568e82*/
  {
    v64 = v6; /*0x568e84*/
  }
  else
  {
    g_Map_GlobalCellIndex = *(IUnknown **)(a2 + 36); /*0x568e8a*/
    v64 = (ObjectClass *)g_CellClassArray; /*0x568e90*/
  }
  v63 = 0; /*0x568ea0*/
  VectorClass::CellConstructor(&v81, 0, 0); /*0x568ea5*/
  v7 = (AbstractClass *)g_TerrainSoundTable2; /*0x568eae*/
  int v8 = *(_DWORD *)&g_NetworkPlayerBuffer[80364]; /*0x568eb4*/
  v81 = &vt_DynamicVectorClass_Cell; /*0x568ebd*/
  v86 = 10; /*0x568ec5*/
  v85 = 0; /*0x568ed4*/
  for ( i = (IUnknown *)1; (int)i < 30; i = (IUnknown *)((char *)i + 1) ) /*0x568edc*/
  {
  char v40; // al
    v65 = (ObjectClass *)v64->objectTypeFlags; /*0x568ef3*/
    LOWORD(v67) = *((_WORD *)&Direction_X_Offsets.field_0 + 2 * (a3 & 7)) + (_WORD)v65; /*0x568f06*/
    HIWORD(v67) = *((_WORD *)&DataGlobal_89F68A + 2 * (a3 & 7)) + HIWORD(v65); /*0x568f0e*/
    int v9 = SHIWORD(v67) << 9; /*0x568f1a*/
    v10 = (__int16)v67 + v9 < 0; /*0x568f1d*/
    int v11 = (__int16)v67 + v9; /*0x568f1d*/
    *(_DWORD *)v77 = v67; /*0x568f1f*/
    if ( v10 || v11 >= 0x40000 || (v12 = *(ObjectClass **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v11)) == 0 ) /*0x568f37*/
    {
      g_Map_GlobalCellIndex = (IUnknown *)v67; /*0x568f3f*/
      v64 = (ObjectClass *)g_CellClassArray; /*0x568f45*/
    }
    else
    {
      v64 = v12; /*0x568f39*/
    }
    v13 = (AbstractClass *)((char *)v64->attachedBomb - *(_DWORD *)&g_NetworkPlayerBuffer[79852] + 1); /*0x568f60*/
    if ( a3 == 2 ) /*0x568f64*/
    {
      if ( v13 != (AbstractClass *)dword_ABC1E8 || BYTE2(v64[1].health) != 4 ) /*0x568f79*/
      {
        if ( v13 != *(AbstractClass **)&g_NetworkPlayerBuffer[79868] || BYTE2(v64[1].health) != 4 ) /*0x568f8e*/
        {
          if ( v13 != v7 /*0x568fbf*/
            && v13 != (AbstractClass *)&v7->__pad_0[3]
            && v13 != (AbstractClass *)&v7->__pad_0[4]
            && v13 != (AbstractClass *)&v7->__pad_0[1]
            && v13 != (AbstractClass *)&v7->__pad_0[2]
            || BYTE2(v64[1].health) != 4 )
          {
            continue; /*0x568fbf*/
          }
          Cell::SetTileType(v77, (int)&v7->__pad_0[*(_DWORD *)&g_NetworkPlayerBuffer[79852] - 1], -1, -1, 0); /*0x568fdd*/
          char v14 = InvalidateTileRegionMap(this, (IUnknown *)v77); /*0x568fe9*/
          v7 = (AbstractClass *)g_TerrainSoundTable2; /*0x568fee*/
          v63 |= v14; /*0x568ffd*/
          if ( v13 != (AbstractClass *)(g_TerrainSoundTable2 + 4) ) /*0x569003*/
            goto LABEL_44; /*0x569003*/
          unsigned int v15 = v77[0] + (v77[1] << 9); /*0x569018*/
  _DWORD *v16; // eax
          if ( v15 >= 0x40000 || (v16 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v15)) == 0 ) /*0x56902e*/
          {
            g_Map_GlobalCellIndex = *(IUnknown **)v77; /*0x569030*/
            v16 = g_CellClassArray; /*0x569036*/
          }
          *((_BYTE *)v16 + 283) += 4; /*0x569049*/
          v17 = (ObjectClass *)CellStruct::Add(v77, (IUnknown *)&v72, &Direction_X_Offsets)->field_0; /*0x56905d*/
          v71 = (IUnknown *)v17; /*0x56905f*/
          unsigned int v18 = (__int16)v17 + (SHIWORD(v17) << 9); /*0x56906e*/
  _DWORD *v19; // eax
          if ( v18 >= 0x40000 || (v19 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v18)) == 0 ) /*0x569084*/
          {
            g_Map_GlobalCellIndex = (IUnknown *)v17; /*0x569086*/
            v19 = g_CellClassArray; /*0x56908c*/
          }
          *((_BYTE *)v19 + 283) += 4; /*0x56909f*/
          v20 = (ObjectClass *)CellStruct::Add(v77, (IUnknown *)&v73, (IUnknown *)&g_CellDirectionOffsets.field_8)->field_0; /*0x5690b3*/
          v71 = (IUnknown *)v20; /*0x5690b5*/
          unsigned int v21 = (__int16)v20 + (SHIWORD(v20) << 9); /*0x5690c4*/
  _DWORD *v22; // eax
          if ( v21 >= 0x40000 || (v22 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v21)) == 0 ) /*0x5690da*/
          {
            g_Map_GlobalCellIndex = (IUnknown *)v20; /*0x5690dc*/
            v22 = g_CellClassArray; /*0x5690e2*/
          }
          int v23 = 0; /*0x5690f0*/
          *((_BYTE *)v22 + 283) += 4; /*0x5690f2*/
          v24 = (CCINIClass *)v83; /*0x5690f8*/
LABEL_33:
          int v25 = -2; /*0x5690fc*/
          while ( 1 ) /*0x56910e*/
          {
  int v68; // [esp+20h] [ebp-54h]
            LOWORD(v68) = v23 + v77[0]; /*0x56910e*/
            HIWORD(v68) = v25 + v77[1]; /*0x569113*/
            if ( (int)v85 < (int)v24 ) /*0x56911e*/
              goto LABEL_39; /*0x56911e*/
            if ( !v84 && v24 || v86 <= 0 ) /*0x569132*/
              goto LABEL_41; /*0x569132*/
            if ( ((unsigned __int8 (__thiscall *)(void ***, char *, _DWORD))v81[2])(&v81, &v24->__pad_0[v86], 0) ) /*0x569141*/
            {
LABEL_39:
              v26 = v85; /*0x569150*/
              v85 = (ObjectClass *)((char *)v85 + 1); /*0x569153*/
              *((_DWORD *)Block + (_DWORD)v26) = v68; /*0x56915b*/
            }
            v24 = (CCINIClass *)v83; /*0x56915e*/
LABEL_41:
            if ( ++v25 >= 3 ) /*0x569166*/
            {
              if ( ++v23 >= 2 ) /*0x56916c*/
                goto LABEL_43; /*0x56916c*/
              goto LABEL_33; /*0x56916c*/
            }
          }
        }
        Cell::UpdateTileType(v77, 0, 0); /*0x5693de*/
        v71 = (IUnknown *)CellStruct::Add(v77, (IUnknown *)&v75, (IUnknown *)g_CellDirectionOffsets[16])->field_0; /*0x5693fc*/
        v40 = InvalidateTileRegionMap(this, (IUnknown *)&v71); /*0x569401*/
LABEL_86:
        v63 |= v40; /*0x569468*/
        break; /*0x569468*/
      }
      Cell::UpdateTileType(v77, 0, 0); /*0x5693ac*/
      v71 = (IUnknown *)CellStruct::Add(v77, (IUnknown *)&v75, (IUnknown *)g_CellDirectionOffsets[16])->field_0; /*0x5693ca*/
LABEL_85:
      v40 = InvalidateTileRegionMap(this, (IUnknown *)&v71); /*0x569460*/
      goto LABEL_86; /*0x569463*/
    }
    if ( a3 != 4 ) /*0x569194*/
      continue; /*0x569194*/
    if ( v13 == (AbstractClass *)dword_ABC1D0 && BYTE2(v64[1].health) == 2 ) /*0x5691a5*/
    {
      Cell::UpdateTileType(v77, 0, 0); /*0x56940e*/
      v71 = (IUnknown *)CellStruct::Add(v77, (IUnknown *)&v75, &Direction_X_Offsets)->field_0; /*0x56942c*/
      v40 = InvalidateTileRegionMap(this, (IUnknown *)&v71); /*0x569431*/
      goto LABEL_86; /*0x569431*/
    }
    if ( v13 == *(AbstractClass **)&g_NetworkPlayerBuffer[81668] && BYTE2(v64[1].health) == 2 ) /*0x5691ba*/
    {
      Cell::UpdateTileType(v77, 0, 0); /*0x56943e*/
      v71 = (IUnknown *)CellStruct::Add(v77, (IUnknown *)&v75, &Direction_X_Offsets)->field_0; /*0x56945c*/
      goto LABEL_85; /*0x56945c*/
    }
    if ( v13 != (AbstractClass *)v8 /*0x5691e7*/
      && v13 != (AbstractClass *)(v8 + 3)
      && v13 != (AbstractClass *)(v8 + 4)
      && v13 != (AbstractClass *)(v8 + 2)
      && v13 != (AbstractClass *)(v8 + 1)
      || BYTE2(v64[1].health) != 2 )
    {
      continue; /*0x5691e7*/
    }
    Cell::SetTileType(v77, *(_DWORD *)&g_NetworkPlayerBuffer[79852] + v8 - 1, -1, -1, 0); /*0x569200*/
    char v27 = InvalidateTileRegionMap(this, (IUnknown *)v77); /*0x56920c*/
    v8 = *(_DWORD *)&g_NetworkPlayerBuffer[80364]; /*0x569215*/
    v63 |= v27; /*0x56921d*/
    if ( v13 != (AbstractClass *)(*(_DWORD *)&g_NetworkPlayerBuffer[80364] + 4) ) /*0x569226*/
    {
      v7 = (AbstractClass *)g_TerrainSoundTable2; /*0x569396*/
      continue; /*0x56939c*/
    }
    unsigned int v28 = v77[0] + (v77[1] << 9); /*0x56923b*/
  _DWORD *v29; // eax
    if ( v28 >= 0x40000 || (v29 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v28)) == 0 ) /*0x569251*/
    {
      g_Map_GlobalCellIndex = *(IUnknown **)v77; /*0x569253*/
      v29 = g_CellClassArray; /*0x569259*/
    }
    *((_BYTE *)v29 + 283) += 4; /*0x56926c*/
    ObjectClass *v74 = (ObjectClass *)CellStruct::Add(v77, (IUnknown *)&v74, &g_CellDirectionOffsets)->field_0; /*0x569280*/
    v71 = (IUnknown *)v30; /*0x569282*/
    unsigned int v31 = (__int16)v30 + (SHIWORD(v30) << 9); /*0x569291*/
  _DWORD *v32; // eax
    if ( v31 >= 0x40000 || (v32 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v31)) == 0 ) /*0x5692a7*/
    {
      g_Map_GlobalCellIndex = (IUnknown *)v30; /*0x5692a9*/
      v32 = g_CellClassArray; /*0x5692af*/
    }
    *((_BYTE *)v32 + 283) += 4; /*0x5692c2*/
    v33 = (ObjectClass *)CellStruct::Add(v77, (IUnknown *)&v75, (IUnknown *)g_CellDirectionOffsets[16])->field_0; /*0x5692d6*/
    v71 = (IUnknown *)v33; /*0x5692d8*/
    unsigned int v34 = (__int16)v33 + (SHIWORD(v33) << 9); /*0x5692e7*/
  _DWORD *v35; // eax
    if ( v34 >= 0x40000 || (v35 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v34)) == 0 ) /*0x5692fd*/
    {
      g_Map_GlobalCellIndex = (IUnknown *)v33; /*0x5692ff*/
      v35 = g_CellClassArray; /*0x569305*/
    }
    int v36 = 0; /*0x569313*/
    *((_BYTE *)v35 + 283) += 4; /*0x569315*/
    v37 = (CCINIClass *)v83; /*0x56931b*/
    do /*0x56938f*/
    {
      int v38 = -2; /*0x56931f*/
      do /*0x569389*/
      {
        LOWORD(v69) = v38 + v77[0]; /*0x569331*/
        HIWORD(v69) = v36 + v77[1]; /*0x569336*/
        if ( (int)v85 < (int)v37 ) /*0x569341*/
          goto LABEL_75; /*0x569341*/
        if ( (v84 || !v37) && v86 > 0 ) /*0x569355*/
        {
          if ( ((unsigned __int8 (__thiscall *)(void ***, char *, _DWORD))v81[2])(&v81, &v37->__pad_0[v86], 0) ) /*0x569364*/
          {
LABEL_75:
            v39 = v85; /*0x56936b*/
            v85 = (ObjectClass *)((char *)v85 + 1); /*0x569376*/
            *((_DWORD *)Block + (_DWORD)v39) = v69; /*0x56937e*/
          }
          v37 = (CCINIClass *)v83; /*0x569381*/
        }
        ++v38; /*0x569385*/
      }
      while ( v38 < 3 ); /*0x569389*/
      ++v36; /*0x56938b*/
    }
    while ( v36 < 2 ); /*0x56938f*/
LABEL_43:
    v7 = (AbstractClass *)g_TerrainSoundTable2; /*0x56916e*/
LABEL_44:
    v8 = *(_DWORD *)&g_NetworkPlayerBuffer[80364]; /*0x569174*/
  }
  if ( i == (IUnknown *)30 ) /*0x569473*/
  {
    v81 = &vt_VectorClass_Cell; /*0x569479*/
    Buffer::Cleanup((int)&v81); /*0x569481*/
  }
  else
  {
  int v80; // [esp+58h] [ebp-1Ch]
  int v79; // [esp+54h] [ebp-20h]
  _DWORD *v44; // esi
    unsigned int v42 = (__int16)*(_DWORD *)(a2 + 36) + ((__int16)HIWORD(*(_DWORD *)(a2 + 36)) << 9); /*0x5694a6*/
  _DWORD *v43; // eax
    if ( v42 < 0x40000 && (v43 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v42)) != 0 ) /*0x5694bc*/
    {
      v44 = v43; /*0x5694be*/
    }
    else
    {
      g_Map_GlobalCellIndex = *(IUnknown **)(a2 + 36); /*0x5694c2*/
      v44 = g_CellClassArray; /*0x5694c8*/
    }
    v45 = aP3; /*0x5694cd*/
    if ( aP3 ) /*0x5694d6*/
    {
      int v87 = *(_DWORD *)(a2 + 36); /*0x5694e7*/
      v78 = (CCINIClass *)(((__int16)*(_DWORD *)(a2 + 36) << 8) + 128); /*0x5694f0*/
      int v46 = g_MapRenderState * *(char *)(a2 + 283); /*0x5694fb*/
      v79 = (SHIWORD(v87) << 8) + 128; /*0x56950e*/
      v80 = v46; /*0x569516*/
      Coord::To_Screen(*(_DWORD **)&DataGlobal_87F8E4[31296], &v78, (IUnknown *)&v75); /*0x569522*/
      v47 = v76; /*0x56952b*/
      v45->field_0 = (int)v75; /*0x56952f*/
      v45->field_4 = (int)v47; /*0x569532*/
    }
    if ( (int)i > 0 ) /*0x569537*/
    {
      v48 = i; /*0x56953d*/
      do /*0x569633*/
      {
        int v49 = v44[14] - *(_DWORD *)&g_NetworkPlayerBuffer[79852] + 1; /*0x569554*/
        if ( (v49 != g_TerrainSoundTable2 || (*((_BYTE *)v44 + 282) & 1) != 0) /*0x569570*/
          && (v49 != *(_DWORD *)&g_NetworkPlayerBuffer[80364] || *((_BYTE *)v44 + 282) >= 5u) )
        {
          if ( a3 == 2 ) /*0x56957e*/
          {
            v50 = (#374 *)__2_YAPAXI_Z(0xB0u); /*0x569580*/
            if ( v50 ) /*0x56958a*/
            {
              aP3 = (IUnknown *)v44[9]; /*0x569596*/
              Object::SpawnAtCell(v50, g_BuildingTypeClass_Array[1].headNode[1], (__int16 *)&aP3, -1); /*0x5695a9*/
            }
          }
          else
          {
            v51 = (#374 *)__2_YAPAXI_Z(0xB0u); /*0x5695ab*/
            if ( v51 ) /*0x5695b5*/
            {
              v71 = (IUnknown *)v44[9]; /*0x5695be*/
              Object::SpawnAtCell(v51, g_BuildingTypeClass_Array[1].headNode[2], (__int16 *)&v71, -1); /*0x5695d1*/
            }
          }
        }
        v70 = (IUnknown *)v44[9]; /*0x5695dd*/
        LOWORD(v88) = *((_WORD *)&Direction_X_Offsets.field_0 + 2 * (a3 & 7)) + (_WORD)v70; /*0x5695f0*/
        HIWORD(v88) = *((_WORD *)&DataGlobal_89F68A + 2 * (a3 & 7)) + HIWORD(v70); /*0x5695f8*/
        int v52 = SHIWORD(v88) << 9; /*0x569604*/
        v10 = (__int16)v88 + v52 < 0; /*0x569607*/
        int v53 = (__int16)v88 + v52; /*0x569607*/
        *(_DWORD *)v77 = v88; /*0x569609*/
  _DWORD *v54; // eax
        if ( v10 || v53 >= 0x40000 || (v54 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v53)) == 0 ) /*0x569621*/
        {
          g_Map_GlobalCellIndex = v88; /*0x569627*/
          v44 = g_CellClassArray; /*0x56962d*/
        }
        else
        {
          v44 = v54; /*0x569623*/
        }
        v48 = (IUnknown *)((char *)v48 - 1); /*0x569632*/
      }
      while ( v48 ); /*0x569633*/
    }
    if ( v45 ) /*0x56963b*/
    {
      unsigned int v55 = v77[0] + (v77[1] << 9); /*0x569652*/
  _DWORD *v56; // edx
      if ( v55 >= 0x40000 || (v56 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v55)) == 0 ) /*0x569669*/
      {
        g_Map_GlobalCellIndex = *(IUnknown **)v77; /*0x56966b*/
        v56 = g_CellClassArray; /*0x569671*/
      }
      v80 = g_MapRenderState * *((char *)v56 + 283); /*0x56968f*/
      v79 = (v77[1] << 8) + 128; /*0x569699*/
      v78 = (CCINIClass *)((v77[0] << 8) + 128); /*0x5696a5*/
      Coord::To_Screen(*(_DWORD **)&DataGlobal_87F8E4[31296], &v78, (IUnknown *)&v75); /*0x5696b1*/
      int v57 = v45->field_0; /*0x5696b6*/
      v58 = v75; /*0x5696b9*/
      int v59 = v45->field_4; /*0x5696bd*/
      v60 = (IUnknown *)v45->field_0; /*0x5696c2*/
      if ( v45->field_0 >= (int)v75 ) /*0x5696c4*/
        v60 = v75; /*0x5696c6*/
      v61 = (IUnknown *)v45->field_4; /*0x5696cb*/
      v45->field_0 = (int)&v60[-1].__pad_579C[67668]; /*0x5696cd*/
      v62 = v76; /*0x5696d0*/
      if ( v59 >= (int)v76 ) /*0x5696d6*/
        v61 = v76; /*0x5696d8*/
      v45->field_4 = (int)&v61[-1].__pad_579C[67668]; /*0x5696e2*/
      v45->field_8 = abs32(v57 - (_DWORD)v58) + 128; /*0x5696ec*/
      v45->field_C = abs32(v59 - (_DWORD)v62) + 128; /*0x5696fd*/
    }
    if ( v63 ) /*0x569706*/
      Terrain::ConnectivityGraph(this); /*0x56970c*/
    if ( (int)v85 > 0 ) /*0x569717*/
      LayerClass::Update_Pathfinding_2(this, (IUnknown *)&v81); /*0x569722*/
    v81 = &vt_VectorClass_Cell; /*0x56972b*/
    if ( Block ) /*0x569735*/
    {
      if ( v84 ) /*0x56973d*/
        __3_YAXPAX_Z(Block); /*0x569740*/
    }
  }
}
}
} // namespace gamemd

// 0x56C510
namespace gamemd {
AbstractClass * * Terrain::ConnectivityGraph()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  _DWORD *nextArrayIndex; // ebp
  void **v7; // esi
  unsigned int i; // eax
  IUnknown *v10; // edi
  VectorClass *v12; // esi
  __int16 *v19; // esi
  bool v37; // zf
  IUnknown *v38; // eax
  AbstractClass *v39; // ecx
  IUnknown *v40; // ebx
  int v41; // eax
  IUnknown *v42; // ecx
  int j; // edi
  IUnknown *v49; // esi
  int v50; // eax
  IUnknown *v51; // ecx
  CCINIClass *v52; // edx
  AbstractClass *v59; // esi
  int v60; // ecx
  CCINIClass *v61; // edi
  AbstractClass *v62; // eax
  AbstractClass *v64; // esi
  AbstractClass *v65; // ecx
  AbstractClass *v67; // ecx
  unsigned __int16 v70; // ax
  unsigned __int16 *v71; // edi
  AbstractClass *v73; // edx
  int v74; // esi
  void **v75; // edi
  int *v77; // [esp+10h] [ebp-54h]
  __int16 v78; // [esp+14h] [ebp-50h]
  int *Block; // [esp+18h] [ebp-4Ch]
  AbstractClass *Blocka; // [esp+18h] [ebp-4Ch]
  int v81; // [esp+1Ch] [ebp-48h]
  AbstractClass *v82; // [esp+20h] [ebp-44h]
  AbstractClass **v83; // [esp+24h] [ebp-40h]
  CCINIClass *v84; // [esp+28h] [ebp-3Ch]
  CCINIClass *v85; // [esp+28h] [ebp-3Ch]
  CCINIClass *v86; // [esp+28h] [ebp-3Ch]
  unsigned __int8 *v87; // [esp+2Ch] [ebp-38h]
  char *v89; // [esp+2Ch] [ebp-38h]
  _WORD *v91; // [esp+2Ch] [ebp-38h]
  AbstractClass aP3; // [esp+30h] [ebp-34h] BYREF
  int v93; // [esp+54h] [ebp-10h]
  int v94; // [esp+58h] [ebp-Ch]
  int v95; // [esp+5Ch] [ebp-8h]
  int v96; // [esp+60h] [ebp-4h]
  nextArrayIndex = this; /*0x56c515*/
  v81 = -1; /*0x56c51a*/
  *(_DWORD *)&aP3[12] = -1; /*0x56c51e*/
  _DWORD * v2 = (_DWORD *)this->q014; /*0x56c529*/
  int v3 = 0; /*0x56c52c*/
  int v4 = this->q068 + 4 * *(this + 27); /*0x56c52e*/
  aP3.NeedsSaveOrLink = 0; /*0x56c531*/
  v93 = 0; /*0x56c535*/
  LOWORD(v94) = 1; /*0x56c539*/
  aP3.referenceCount = (int)&vt_DynamicVectorClass_enum_PassabilityType; /*0x56c542*/
  v95 = 0; /*0x56c54a*/
  v96 = 300; /*0x56c54e*/
  int v5 = v2[2]; /*0x56c556*/
  aP3.nextArrayIndex = (int)this; /*0x56c55c*/
  v87 = (unsigned __int8 *)v4; /*0x56c560*/
  if ( v5 > 0 ) /*0x56c564*/
  {
    int v6 = 0; /*0x56c566*/
    do /*0x56c57c*/
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)(*v2 + v6) + 12))(*v2 + v6); /*0x56c570*/
      ++v3; /*0x56c576*/
      v6 += 24; /*0x56c577*/
    }
    while ( v3 < v2[2] ); /*0x56c57c*/
  }
  v7 = (void **)(nextArrayIndex + 6); /*0x56c57e*/
  int v8 = 13; /*0x56c581*/
  do /*0x56c59f*/
  {
    if ( *v7 ) /*0x56c586*/
    {
      __3_YAXPAX_Z(*v7); /*0x56c58d*/
      *v7 = 0; /*0x56c595*/
    }
    ++v7; /*0x56c59b*/
    --v8; /*0x56c59e*/
  }
  while ( v8 ); /*0x56c59f*/
  for ( i = nextArrayIndex[26]; i < (unsigned int)v87; i += 4 ) /*0x56c5aa*/
    *(_WORD *)(i + 2) = 0; /*0x56c5ac*/
  v10 = (IUnknown *)1; /*0x56c5c3*/
  if ( v95 < v93 /*0x56c5eb*/
    || (BYTE1(v94) || !v93)
    && v96 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(aP3.referenceCount + 8))(
         &aP3.referenceCount,
         v96 + v93,
         0) )
  {
    int v11 = v95++; /*0x56c5f6*/
    *((_DWORD *)aP3.NeedsSaveOrLink + v11) = 7; /*0x56c601*/
  }
  v12 = (unsigned __int8 *)nextArrayIndex[26]; /*0x56c608*/
  *(_DWORD *)aP3[0] = 0; /*0x56c60b*/
  if ( v12 < v87 ) /*0x56c615*/
  {
    int v13 = *(_DWORD *)&aP3[12]; /*0x56c61b*/
    do /*0x56c6bc*/
    {
      int v14 = *v12; /*0x56c621*/
      *(_DWORD *)&aP3[12] = v14; /*0x56c626*/
      if ( v14 == 7 || v12->Items ) /*0x56c630*/
      {
        v12 += 4; /*0x56c6b5*/
      }
      else
      {
        dword_ABDE8C = 0; /*0x56c640*/
        int v15 = Terrain::FloodFillConnectivity((int)nextArrayIndex, v12, v10, &aP3); /*0x56c64a*/
        if ( v15 > v13 ) /*0x56c651*/
        {
          v13 = v15; /*0x56c655*/
          v81 = (unsigned __int16)v10; /*0x56c65d*/
        }
        if ( v95 < v93 /*0x56c68e*/
          || (BYTE1(v94) || !v93)
          && v96 > 0
          && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(aP3.referenceCount + 8))(
               &aP3.referenceCount,
               v96 + v93,
               0) )
        {
          int v16 = v95++; /*0x56c69d*/
          *((_DWORD *)aP3.NeedsSaveOrLink + v16) = *(_DWORD *)&aP3[12]; /*0x56c6a8*/
        }
        v10 = (IUnknown *)((char *)v10 + 1); /*0x56c6af*/
        v12 += 4 * *(_DWORD *)aP3[0]; /*0x56c6b0*/
      }
    }
    while ( v12 < v87 ); /*0x56c6bc*/
  }
  nextArrayIndex[19] = (unsigned __int16)v10; /*0x56c6c8*/
  int v17 = nextArrayIndex[24] - 1; /*0x56c6ce*/
  if ( v17 >= 0 ) /*0x56c6cf*/
  {
    int v18 = 16 * v17; /*0x56c6d7*/
    char * v88 = (char *)(16 * v17); /*0x56c6db*/
    v84 = (CCINIClass *)nextArrayIndex[24]; /*0x56c6df*/
    do /*0x56c7e0*/
    {
      v19 = (__int16 *)(nextArrayIndex[21] + v18); /*0x56c6ea*/
      if ( *((_BYTE *)v19 + 8) ) /*0x56c6e6*/
      {
        int v20 = nextArrayIndex[62] + nextArrayIndex[61] + 1; /*0x56c704*/
        int v21 = *v19 + v20 * v19[1]; /*0x56c70f*/
        if ( v21 >= 0 ) /*0x56c711*/
        {
          int v22 = nextArrayIndex[27]; /*0x56c717*/
          if ( v21 >= v22 ) /*0x56c71c*/
            v21 = v22 - 1; /*0x56c71e*/
        }
        else
        {
          v21 = 0; /*0x56c713*/
        }
        VectorClass *v23 = nextArrayIndex[26]; /*0x56c725*/
        int v24 = *(unsigned __int16 *)(v23 + 4 * v21 + 2); /*0x56c72d*/
        int v25 = v19[2] + v20 * v19[3]; /*0x56c736*/
        if ( v25 >= 0 ) /*0x56c738*/
        {
          int v26 = nextArrayIndex[27]; /*0x56c73e*/
          if ( v25 >= v26 ) /*0x56c743*/
            v25 = v26 - 1; /*0x56c745*/
        }
        else
        {
          v25 = 0; /*0x56c73a*/
        }
        int v27 = *(unsigned __int16 *)(v23 + 4 * v25 + 2); /*0x56c74a*/
        if ( (unsigned __int16)v27 != v24 ) /*0x56c751*/
        {
          if ( (unsigned __int16)v27 < v24 ) /*0x56c753*/
          {
            v27 = v24; /*0x56c757*/
            v24 = *(unsigned __int16 *)(v23 + 4 * v25 + 2); /*0x56c759*/
          }
          int v28 = v27 | (v24 << 16); /*0x56c763*/
          int v29 = *(_DWORD *)nextArrayIndex[5] + 24 * (v27 & 0xF | (16 * (v24 & 0xF))); /*0x56c775*/
          int v30 = *(_DWORD *)(v29 + 16); /*0x56c778*/
          _DWORD * v31 = *(_DWORD **)(v29 + 4); /*0x56c77c*/
          int v32 = v30 - 1; /*0x56c77f*/
          if ( v30 - 1 < 0 ) /*0x56c784*/
          {
LABEL_48:
            int v33 = *(_DWORD *)(v29 + 8); /*0x56c790*/
            if ( v30 < v33 /*0x56c7b2*/
              || (*(_BYTE *)(v29 + 13) || !v33)
  int v34; // eax
              && (v34 = *(_DWORD *)(v29 + 20), v34 > 0)
              && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v29 + 8))(v29, v33 + v34, 0) )
            {
              int v35 = *(_DWORD *)(v29 + 16); /*0x56c7b9*/
              int v36 = *(_DWORD *)(v29 + 4); /*0x56c7bc*/
              *(_DWORD *)(v29 + 16) = v35 + 1; /*0x56c7c2*/
              *(_DWORD *)(v36 + 8 * v35) = v28; /*0x56c7c5*/
              *(_DWORD *)(v36 + 8 * v35 + 4) = v28; /*0x56c7c8*/
            }
          }
          else
          {
            while ( v28 != *v31 ) /*0x56c788*/
            {
              v31 += 2; /*0x56c78a*/
              if ( --v32 < 0 ) /*0x56c78e*/
                goto LABEL_48; /*0x56c78e*/
            }
          }
        }
      }
      v18 = (int)(v88 - 16); /*0x56c7d4*/
      v37 = v84 == (CCINIClass *)1; /*0x56c7d7*/
      v88 -= 16; /*0x56c7d8*/
      v84 = (CCINIClass *)((char *)v84 - 1); /*0x56c7dc*/
    }
    while ( !v37 ); /*0x56c7e0*/
  }
  v38 = (IUnknown *)__2_YAPAXI_Z(2 * nextArrayIndex[19]); /*0x56c7ec*/
  v39 = (AbstractClass *)nextArrayIndex[19]; /*0x56c7f1*/
  v40 = v38; /*0x56c7f4*/
  v41 = 0; /*0x56c7f9*/
  aP3.abstractFlags = (int)v40; /*0x56c7fd*/
  if ( (int)v39 > 0 ) /*0x56c801*/
  {
    v42 = v40; /*0x56c803*/
    do /*0x56c813*/
    {
      LOWORD(v42->field_0) = 0; /*0x56c805*/
      ++v41; /*0x56c80d*/
      v42 = (IUnknown *)((char *)v42 + 2); /*0x56c80e*/
    }
    while ( v41 < nextArrayIndex[19] ); /*0x56c813*/
  }
  for ( j = 0; j < 6144; j += 24 ) /*0x56c815*/
  {
    int v44 = j + *(_DWORD *)nextArrayIndex[5]; /*0x56c81c*/
    int v45 = *(_DWORD *)(v44 + 16); /*0x56c81e*/
    if ( v45 > 0 ) /*0x56c823*/
    {
      int * v46 = (int *)(*(_DWORD *)(v44 + 4) + 4); /*0x56c828*/
      do /*0x56c84f*/
      {
        int v47 = *v46; /*0x56c82b*/
        v46 += 2; /*0x56c82d*/
        ++*((_WORD *)&v40->field_0 + (unsigned __int16)v47); /*0x56c83b*/
        ++*((_WORD *)&v40->field_0 + HIWORD(v47)); /*0x56c844*/
        --v45; /*0x56c84e*/
      }
      while ( v45 ); /*0x56c84f*/
    }
  }
  v77 = (int *)__2_YAPAXI_Z(4 * nextArrayIndex[19]); /*0x56c868*/
  v89 = 0; /*0x56c872*/
  if ( (int)nextArrayIndex[19] > 0 ) /*0x56c87c*/
  {
    int * v48 = v77; /*0x56c87e*/
    v49 = v40; /*0x56c882*/
    do /*0x56c8aa*/
    {
      *v48 = __2_YAPAXI_Z(2 * LOWORD(v49->field_0)); /*0x56c891*/
      v49 = (IUnknown *)((char *)v49 + 2); /*0x56c89e*/
      ++v48; /*0x56c8a1*/
      ++v89; /*0x56c8a6*/
    }
    while ( (int)v89 < nextArrayIndex[19] ); /*0x56c8aa*/
  }
  v50 = 0; /*0x56c8af*/
  if ( (int)nextArrayIndex[19] > 0 ) /*0x56c8b3*/
  {
    v51 = v40; /*0x56c8b5*/
    do /*0x56c8c5*/
    {
      LOWORD(v51->field_0) = 0; /*0x56c8b7*/
      ++v50; /*0x56c8bf*/
      v51 = (IUnknown *)((char *)v51 + 2); /*0x56c8c0*/
    }
    while ( v50 < nextArrayIndex[19] ); /*0x56c8c5*/
  }
  v52 = 0; /*0x56c8c7*/
  v85 = 0; /*0x56c8c9*/
  do /*0x56c953*/
  {
    int v53 = *(_DWORD *)nextArrayIndex[5]; /*0x56c8d0*/
    int v54 = *(int *)((char *)v52->sectionHead + v53); /*0x56c8d2*/
    char * v55 = &v52->__pad_0[v53]; /*0x56c8d6*/
    if ( v54 > 0 ) /*0x56c8da*/
    {
      char * v90 = (char *)v54; /*0x56c8df*/
      Block = (int *)(*((_DWORD *)v55 + 1) + 4); /*0x56c8e6*/
      do /*0x56c940*/
      {
        int v56 = *Block; /*0x56c8f4*/
        int v57 = (unsigned __int16)*Block; /*0x56c8fa*/
        unsigned int v58 = HIWORD(*Block); /*0x56c8ff*/
        *(_WORD *)(v77[v57] + 2 * *((unsigned __int16 *)&v40->field_0 + v57)) = v58; /*0x56c909*/
        *(_WORD *)(v77[(unsigned __int16)v58] + 2 * *((unsigned __int16 *)&v40->field_0 + (unsigned __int16)v58)) = v56; /*0x56c920*/
        ++*((_WORD *)&v40->field_0 + v57); /*0x56c924*/
        ++*((_WORD *)&v40->field_0 + (unsigned __int16)v58); /*0x56c928*/
        v37 = v90 == (char *)1; /*0x56c937*/
        Block += 2; /*0x56c938*/
        --v90; /*0x56c93c*/
      }
      while ( !v37 ); /*0x56c940*/
      v52 = v85; /*0x56c942*/
    }
    v52 = (CCINIClass *)((char *)v52 + 24); /*0x56c946*/
    v85 = v52; /*0x56c94f*/
  }
  while ( (int)v52 < 6144 ); /*0x56c953*/
  v59 = (AbstractClass *)__2_YAPAXI_Z(nextArrayIndex[19]); /*0x56c962*/
  v60 = 0; /*0x56c96a*/
  for ( Blocka = v59; v60 < nextArrayIndex[19]; v59->__pad_0[v60 - 1] = *((_BYTE *)aP3.NeedsSaveOrLink + 4 * v60 - 4) ) /*0x56c972*/
    ++v60; /*0x56c978*/
  v91 = (_WORD *)__2_YAPAXI_Z(2 * nextArrayIndex[19]); /*0x56c993*/
  v61 = (CCINIClass *)dword_82A594; /*0x56c997*/
  v86 = (CCINIClass *)dword_82A594; /*0x56c9a2*/
  v83 = (AbstractClass **)(nextArrayIndex + 6); /*0x56c9a6*/
  do /*0x56cb01*/
  {
    v78 = 2; /*0x56c9ad*/
    v62 = (AbstractClass *)__2_YAPAXI_Z(2 * nextArrayIndex[19]); /*0x56c9b8*/
    v82 = v62; /*0x56c9c4*/
    *v83 = v62; /*0x56c9c8*/
    int v63 = 0; /*0x56c9cd*/
    if ( (int)nextArrayIndex[19] > 0 ) /*0x56c9d1*/
    {
      v64 = v62; /*0x56c9d3*/
      do /*0x56c9f3*/
      {
        *(_WORD *)v64->__pad_0 = *(_DWORD *)&v61->__pad_0[4 * (unsigned __int8)Blocka->__pad_0[v63++]] != 1; /*0x56c9e7*/
        v64 = (AbstractClass *)((char *)v64 + 2); /*0x56c9ee*/
      }
      while ( v63 < nextArrayIndex[19] ); /*0x56c9f3*/
    }
    v65 = (AbstractClass *)nextArrayIndex[19]; /*0x56c9f5*/
    int v66 = 0; /*0x56c9f8*/
    *(_DWORD *)&aP3[8] = 0; /*0x56c9fc*/
    if ( (int)v65 > 0 ) /*0x56ca00*/
    {
      v67 = v82; /*0x56ca06*/
      *(_DWORD *)&aP3[12] = v82; /*0x56ca0a*/
      do /*0x56cada*/
      {
        if ( !*(_WORD *)v67->__pad_0 ) /*0x56ca0e*/
        {
          int v68 = 1; /*0x56ca1c*/
          *v91 = v66; /*0x56ca21*/
          *(_WORD *)v67->__pad_0 = v78; /*0x56ca29*/
          aP3.uniqueId = *(_DWORD *)&v61->__pad_0[4 * (unsigned __int8)Blocka->__pad_0[v66]]; /*0x56ca38*/
          do /*0x56cab2*/
          {
            _WORD * v69 = &v91[--v68]; /*0x56ca45*/
            v70 = *((_WORD *)&v40->field_0 + (unsigned __int16)*v69); /*0x56ca52*/
            if ( v70 - 1 >= 0 ) /*0x56ca59*/
            {
              v71 = (unsigned __int16 *)(v77[(unsigned __int16)*v69] + 2 * (v70 - 1)); /*0x56ca5f*/
              *(_DWORD *)&aP3[4] = v70; /*0x56ca63*/
              do /*0x56caa6*/
              {
                int v72 = *v71; /*0x56ca6d*/
                if ( *(_DWORD *)&v86->__pad_0[4 * (unsigned __int8)Blocka->__pad_0[v72]] == aP3.uniqueId /*0x56ca83*/
                  && !*(_WORD *)&v82->__pad_0[2 * v72] )
                {
                  *v69 = v72; /*0x56ca8f*/
                  ++v68; /*0x56ca92*/
                  ++v69; /*0x56ca93*/
                  *(_WORD *)&v82->__pad_0[2 * v72] = v78; /*0x56ca96*/
                }
                --v71; /*0x56ca9e*/
                --*(_DWORD *)&aP3[4]; /*0x56caa2*/
              }
              while ( *(_DWORD *)&aP3[4] ); /*0x56caa6*/
              v40 = (IUnknown *)aP3.abstractFlags; /*0x56caa8*/
              nextArrayIndex = (_DWORD *)aP3.nextArrayIndex; /*0x56caac*/
            }
          }
          while ( v68 ); /*0x56cab2*/
          v61 = v86; /*0x56cab8*/
          v67 = *(AbstractClass **)&aP3[12]; /*0x56cabc*/
          ++v78; /*0x56cac1*/
          v66 = *(_DWORD *)&aP3[8]; /*0x56cac5*/
        }
        v73 = (AbstractClass *)nextArrayIndex[19]; /*0x56cac9*/
        ++v66; /*0x56cacc*/
        v67 = (AbstractClass *)((char *)v67 + 2); /*0x56cacd*/
        *(_DWORD *)&aP3[8] = v66; /*0x56cad2*/
        *(_DWORD *)&aP3[12] = v67; /*0x56cad6*/
      }
      while ( v66 < (int)v73 ); /*0x56cada*/
    }
    v61 = (CCINIClass *)((char *)v61 + 32); /*0x56cae8*/
    *(_WORD *)v82->__pad_0 = -1; /*0x56caf4*/
    ++v83; /*0x56caf9*/
    v86 = v61; /*0x56cafd*/
  }
  while ( (int)v61 < (int)dword_82A734 ); /*0x56cb01*/
  v74 = 0; /*0x56cb0a*/
  if ( (int)nextArrayIndex[19] > 0 ) /*0x56cb0e*/
  {
    v75 = (void **)v77; /*0x56cb10*/
    do /*0x56cb28*/
    {
      __3_YAXPAX_Z(*v75); /*0x56cb17*/
      ++v74; /*0x56cb22*/
      ++v75; /*0x56cb23*/
    }
    while ( v74 < nextArrayIndex[19] ); /*0x56cb28*/
  }
  __3_YAXPAX_Z(Blocka); /*0x56cb2f*/
  __3_YAXPAX_Z(v77); /*0x56cb39*/
  __3_YAXPAX_Z(v40); /*0x56cb3f*/
  __3_YAXPAX_Z(v91); /*0x56cb49*/
  aP3.referenceCount = (int)&vt_VectorClass_enum_PassabilityType; /*0x56cb5a*/
  if ( aP3.NeedsSaveOrLink && BYTE1(v94) ) /*0x56cb6b*/
    __3_YAXPAX_Z(aP3.NeedsSaveOrLink); /*0x56cb6e*/
  return v81; /*0x56cb57*/
}
}
} // namespace gamemd

// 0x56CB90
namespace gamemd {
int Terrain::FloodFillConnectivity(unsigned char * a1, IUnknown * aP2, AbstractClass * aP3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  unsigned __int8 *v4; // ebx
  unsigned __int8 *v6; // ebp
  unsigned __int8 *v8; // esi
  int v10; // edx
  int v11; // edi
  int v25; // edi
  unsigned __int8 *v37; // ebp
  unsigned __int8 *v38; // esi
  int v39; // eax
  int v40; // edx
  VectorClass *v41; // edi
  IUnknown *v56; // ebp
  unsigned int v57; // esi
  unsigned __int8 *v60; // ecx
  bool v74; // [esp+1Bh] [ebp-21h]
  int v76; // [esp+20h] [ebp-1Ch]
  int v77; // [esp+20h] [ebp-1Ch]
  int v78; // [esp+24h] [ebp-18h]
  int v79; // [esp+24h] [ebp-18h]
  int v80; // [esp+24h] [ebp-18h]
  int v81; // [esp+28h] [ebp-14h]
  int v82; // [esp+2Ch] [ebp-10h] BYREF
  int v83; // [esp+30h] [ebp-Ch] BYREF
  unsigned int v84; // [esp+34h] [ebp-8h]
  IUnknown *v85; // [esp+38h] [ebp-4h]
  unsigned __int8 *a1a; // [esp+40h] [ebp+4h]
  AbstractClass *aP3a; // [esp+48h] [ebp+Ch]

  v4 = a1; /*0x56cb94*/
  int v5 = *a1; /*0x56cb9f*/
  v74 = v5 == 6; /*0x56cba8*/
  v6 = a1; /*0x56cbaf*/
  int v7 = a1[1]; /*0x56cbb1*/
  v8 = a1; /*0x56cbb4*/
  v81 = v5; /*0x56cbb6*/
  do /*0x56cbe7*/
  {
    __int64 v9 = v6[1] - v7; /*0x56cbc5*/
    if ( (int)((HIDWORD(v9) ^ v9) - HIDWORD(v9)) >= 2 ) /*0x56cbcd*/
      break; /*0x56cbcd*/
    *((_WORD *)v6 + 1) = (_WORD)aP2; /*0x56cbd6*/
    v10 = *(v6 - 4); /*0x56cbda*/
    v7 = v6[1]; /*0x56cbdf*/
    v6 -= 4; /*0x56cbe2*/
  }
  while ( v10 == v5 ); /*0x56cbe7*/
  v76 = v7; /*0x56cbeb*/
  v11 = *((unsigned __int16 *)v6 + 1); /*0x56cbef*/
  v78 = (unsigned __int16)v11; /*0x56cbf5*/
  if ( (_WORD)v11 ) /*0x56cbf9*/
  {
    __int64 v12 = v6[1] - v7; /*0x56cc06*/
    if ( ((int)((HIDWORD(v12) ^ v12) - HIDWORD(v12)) < 2 || v74) && v11 != dword_ABDE8C && v11 != (unsigned __int16)aP2 ) /*0x56cc34*/
    {
      int v13 = (unsigned __int16)aP2 | ((unsigned __int16)v11 << 16); /*0x56cc46*/
      int v14 = *this->q014; /*0x56cc5a*/
      int v15 = *(_DWORD *)(v14 + 24 * ((unsigned __int8)aP2 & 0xF | (16 * (v11 & 0xF))) + 16); /*0x56cc5c*/
      int v16 = v14 + 24 * ((unsigned __int8)aP2 & 0xF | (16 * (v11 & 0xF))); /*0x56cc60*/
      int v17 = v15 - 1; /*0x56cc63*/
      _DWORD * v18 = *(_DWORD **)(v16 + 4); /*0x56cc68*/
      if ( v15 - 1 < 0 ) /*0x56cc6b*/
      {
LABEL_12:
        int v19 = *(_DWORD *)(v16 + 8); /*0x56cc77*/
        if ( v15 < v19 /*0x56cc99*/
          || (*(_BYTE *)(v16 + 13) || !v19)
  int v20; // eax
          && (v20 = *(_DWORD *)(v16 + 20), v20 > 0)
          && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v16 + 8))(v16, v19 + v20, 0) )
        {
          int v21 = *(_DWORD *)(v16 + 16); /*0x56cca0*/
          int v22 = *(_DWORD *)(v16 + 4); /*0x56cca3*/
          *(_DWORD *)(v16 + 16) = v21 + 1; /*0x56cca9*/
          *(_DWORD *)(v22 + 8 * v21) = v13; /*0x56ccac*/
          *(_DWORD *)(v22 + 8 * v21 + 4) = v13; /*0x56ccaf*/
        }
      }
      else
      {
        while ( v13 != *v18 ) /*0x56cc6f*/
        {
          v18 += 2; /*0x56cc71*/
          if ( --v17 < 0 ) /*0x56cc75*/
            goto LABEL_12; /*0x56cc75*/
        }
      }
      v4 = a1; /*0x56ccb7*/
      dword_ABDE8C = v78; /*0x56ccbb*/
    }
  }
  if ( *v4 == v81 ) /*0x56ccca*/
  {
    int v23 = v76; /*0x56ccd0*/
    do /*0x56ccfd*/
    {
      __int64 v24 = v8[1] - v23; /*0x56ccdd*/
      if ( (int)((HIDWORD(v24) ^ v24) - HIDWORD(v24)) >= 4 ) /*0x56cce5*/
        break; /*0x56cce5*/
      *((_WORD *)v8 + 1) = (_WORD)aP2; /*0x56cce9*/
      v23 = v8[1]; /*0x56cced*/
      v8 += 4; /*0x56ccf0*/
      v76 = v23; /*0x56ccf5*/
    }
    while ( *v8 == v81 ); /*0x56ccfd*/
  }
  v25 = *((unsigned __int16 *)v8 + 1); /*0x56cd01*/
  v79 = (unsigned __int16)v25; /*0x56cd07*/
  if ( (_WORD)v25 ) /*0x56cd0b*/
  {
    __int64 v26 = v8[1] - v76; /*0x56cd1c*/
    if ( ((int)((HIDWORD(v26) ^ v26) - HIDWORD(v26)) < 2 || v74) && v25 != dword_ABDE8C && v25 != (unsigned __int16)aP2 ) /*0x56cd4a*/
    {
      int v27 = (unsigned __int16)aP2 | ((unsigned __int16)v25 << 16); /*0x56cd5c*/
      int v28 = *this->q014; /*0x56cd70*/
      int v29 = *(_DWORD *)(v28 + 24 * ((unsigned __int8)aP2 & 0xF | (16 * (v25 & 0xF))) + 16); /*0x56cd72*/
      int v30 = v28 + 24 * ((unsigned __int8)aP2 & 0xF | (16 * (v25 & 0xF))); /*0x56cd76*/
      int v31 = v29 - 1; /*0x56cd79*/
      _DWORD * v32 = *(_DWORD **)(v30 + 4); /*0x56cd7e*/
      if ( v29 - 1 < 0 ) /*0x56cd81*/
      {
LABEL_31:
        int v33 = *(_DWORD *)(v30 + 8); /*0x56cd8d*/
        if ( v29 < v33 /*0x56cdaf*/
          || (*(_BYTE *)(v30 + 13) || !v33)
  int v34; // eax
          && (v34 = *(_DWORD *)(v30 + 20), v34 > 0)
          && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v30 + 8))(v30, v33 + v34, 0) )
        {
          int v35 = *(_DWORD *)(v30 + 16); /*0x56cdb6*/
          int v36 = *(_DWORD *)(v30 + 4); /*0x56cdb9*/
          *(_DWORD *)(v30 + 16) = v35 + 1; /*0x56cdbf*/
          *(_DWORD *)(v36 + 8 * v35) = v27; /*0x56cdc2*/
          *(_DWORD *)(v36 + 8 * v35 + 4) = v27; /*0x56cdc5*/
        }
      }
      else
      {
        while ( v27 != *v32 ) /*0x56cd85*/
        {
          v32 += 2; /*0x56cd87*/
          if ( --v31 < 0 ) /*0x56cd8b*/
            goto LABEL_31; /*0x56cd8b*/
        }
      }
      dword_ABDE8C = v79; /*0x56cdcd*/
    }
  }
  v77 = ((v8 - v6) >> 2) - 1; /*0x56cde6*/
  v37 = v6 + 4; /*0x56cdec*/
  v82 = 0; /*0x56cdf2*/
  v83 = 0; /*0x56cdf6*/
  *(_DWORD *)aP3->__pad_0 = ((v8 - a1) >> 2) - 1; /*0x56cdff*/
  v38 = v8 - 4; /*0x56ce01*/
  v39 = *(_DWORD *)(this + 248) + *(_DWORD *)(this + 244) + 1; /*0x56ce12*/
  v40 = 4 * v39 + 4; /*0x56ce16*/
  v39 *= 4; /*0x56ce1d*/
  v80 = v40; /*0x56ce20*/
  v41 = &v37[-v40]; /*0x56ce24*/
  v85 = (IUnknown *)&v37[v39 - 4]; /*0x56ce2c*/
  a1a = (unsigned __int8 *)v39; /*0x56ce34*/
  v84 = (unsigned int)&v38[v40]; /*0x56ce3b*/
  aP3a = (AbstractClass *)&v38[-v39 + 4]; /*0x56ce41*/
  if ( &v37[-v40] <= (unsigned __int8 *)aP3a )
  {
  int v43; // esi
  int v42; // ebx
    while ( 1 )
    {
      v42 = v41->Items; /*0x56ce51*/
      if ( v41 >= (unsigned __int8 *)&aP3a[-1].NeedsSaveOrLink )
        v43 = (int)(v41 == (unsigned __int8 *)&aP3a[-1].NeedsSaveOrLink ? &v41[(_DWORD)a1a] : &v41[(_DWORD)a1a - 4]);
      else
        v43 = (int)&v41[v80]; /*0x56ce60*/
      if ( v41->Items ) /*0x56ce4f*/
        break; /*0x56ce4f*/
      if ( *v41 != v81 ) /*0x56ce86*/
        goto LABEL_62; /*0x56ce86*/
      __int64 v44 = v41[1] - *(unsigned __int8 *)(v43 + 1); /*0x56ce98*/
      if ( (int)((HIDWORD(v44) ^ v44) - HIDWORD(v44)) >= 2 ) /*0x56cea0*/
        goto LABEL_62; /*0x56cea0*/
      v77 += Terrain::FloodFillConnectivity(this, v41, aP2, (AbstractClass *)&v82); /*0x56cec0*/
      v41 += 4 * v82; /*0x56cec8*/
LABEL_63:
      if ( v41 > (unsigned __int8 *)aP3a ) /*0x56cf90*/
        goto LABEL_64; /*0x56cf90*/
    }
    if ( v42 != (unsigned __int16)aP2 && v42 != dword_ABDE8C ) /*0x56cee8*/
    {
      __int64 v45 = v41[1] - *(unsigned __int8 *)(v43 + 1); /*0x56cefa*/
      if ( (int)((HIDWORD(v45) ^ v45) - HIDWORD(v45)) < 2 || v74 ) /*0x56cf0a*/
      {
        int v46 = (unsigned __int16)aP2 | (v42 << 16); /*0x56cf16*/
        int v47 = *this->q014; /*0x56cf2a*/
        int v48 = *(_DWORD *)(v47 + 24 * ((unsigned __int8)aP2 & 0xF | (16 * (v42 & 0xF))) + 16); /*0x56cf2c*/
        int v49 = v47 + 24 * ((unsigned __int8)aP2 & 0xF | (16 * (v42 & 0xF))); /*0x56cf30*/
        int v50 = v48 - 1; /*0x56cf33*/
        _DWORD * v51 = *(_DWORD **)(v49 + 4); /*0x56cf38*/
        if ( v48 - 1 < 0 ) /*0x56cf3b*/
        {
LABEL_55:
          int v52 = *(_DWORD *)(v49 + 8); /*0x56cf47*/
          if ( v48 < v52 /*0x56cf69*/
            || (*(_BYTE *)(v49 + 13) || !v52)
  int v53; // eax
            && (v53 = *(_DWORD *)(v49 + 20), v53 > 0)
            && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v49 + 8))(v49, v52 + v53, 0) )
          {
            int v54 = *(_DWORD *)(v49 + 16); /*0x56cf70*/
            int v55 = *(_DWORD *)(v49 + 4); /*0x56cf73*/
            *(_DWORD *)(v49 + 16) = v54 + 1; /*0x56cf79*/
            *(_DWORD *)(v55 + 8 * v54) = v46; /*0x56cf7c*/
            *(_DWORD *)(v55 + 8 * v54 + 4) = v46; /*0x56cf7f*/
          }
        }
        else
        {
          while ( v46 != *v51 ) /*0x56cf3f*/
          {
            v51 += 2; /*0x56cf41*/
            if ( --v50 < 0 ) /*0x56cf45*/
              goto LABEL_55; /*0x56cf45*/
          }
        }
        dword_ABDE8C = v42; /*0x56cf83*/
      }
    }
LABEL_62:
    v41 += 4; /*0x56cf89*/
    goto LABEL_63; /*0x56cf89*/
  }
LABEL_64:
  v56 = v85; /*0x56cf96*/
  v57 = v84; /*0x56cf9a*/
  while ( (unsigned int)v56 <= v57 ) /*0x56cfa0*/
  {
  int v59; // eax
    int v58 = HIWORD(v56->field_0); /*0x56cfab*/
    if ( (unsigned int)v56 >= v57 - 4 ) /*0x56cfb3*/
    {
      v60 = a1a; /*0x56cfbe*/
      if ( v56 != (IUnknown *)(v57 - 4) ) /*0x56cfc2*/
        v60 = (unsigned __int8 *)v80; /*0x56cfc4*/
      v59 = (char *)v56 - (char *)v60; /*0x56cfc8*/
    }
    else
    {
      v59 = (char *)v56 - (char *)a1a + 4; /*0x56cfb9*/
    }
    if ( HIWORD(v56->field_0) ) /*0x56cfa9*/
    {
      if ( v58 != (unsigned __int16)aP2 && v58 != dword_ABDE8C ) /*0x56d03c*/
      {
        __int64 v62 = BYTE1(v56->field_0) - *(unsigned __int8 *)(v59 + 1); /*0x56d04e*/
        if ( (int)((HIDWORD(v62) ^ v62) - HIDWORD(v62)) < 2 || v74 ) /*0x56d05e*/
        {
          int v63 = (unsigned __int16)aP2 | (v58 << 16); /*0x56d06a*/
          int v64 = *this->q014; /*0x56d07e*/
          int v65 = *(_DWORD *)(v64 + 24 * ((unsigned __int8)aP2 & 0xF | (16 * (v58 & 0xF))) + 16); /*0x56d080*/
          int v66 = v64 + 24 * ((unsigned __int8)aP2 & 0xF | (16 * (v58 & 0xF))); /*0x56d084*/
          int v67 = v65 - 1; /*0x56d087*/
          _DWORD * v68 = *(_DWORD **)(v66 + 4); /*0x56d08c*/
          if ( v65 - 1 < 0 ) /*0x56d08f*/
          {
LABEL_82:
            int v69 = *(_DWORD *)(v66 + 8); /*0x56d09b*/
            if ( v65 < v69 /*0x56d0bd*/
              || (*(_BYTE *)(v66 + 13) || !v69)
  int v70; // eax
              && (v70 = *(_DWORD *)(v66 + 20), v70 > 0)
              && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v66 + 8))(v66, v69 + v70, 0) )
            {
              int v71 = *(_DWORD *)(v66 + 16); /*0x56d0c4*/
              int v72 = *(_DWORD *)(v66 + 4); /*0x56d0c7*/
              *(_DWORD *)(v66 + 16) = v71 + 1; /*0x56d0cd*/
              *(_DWORD *)(v72 + 8 * v71) = v63; /*0x56d0d0*/
              *(_DWORD *)(v72 + 8 * v71 + 4) = v63; /*0x56d0d3*/
            }
          }
          else
          {
            while ( v63 != *v68 ) /*0x56d093*/
            {
              v68 += 2; /*0x56d095*/
              if ( --v67 < 0 ) /*0x56d099*/
                goto LABEL_82; /*0x56d099*/
            }
          }
          dword_ABDE8C = v58; /*0x56d0d7*/
        }
      }
      v57 = v84; /*0x56d0dd*/
      v56 = (IUnknown *)((char *)v56 + 4); /*0x56d0e1*/
    }
    else if ( LOBYTE(v56->field_0) == v81 /*0x56cfef*/
  __int64 v61; // rax
           && (v61 = BYTE1(v56->field_0) - *(unsigned __int8 *)(v59 + 1), (int)((HIDWORD(v61) ^ v61) - HIDWORD(v61)) < 2) )
    {
      v77 += Terrain::FloodFillConnectivity(this, (unsigned __int8 *)v56, aP2, (AbstractClass *)&v83); /*0x56d00f*/
      v56 = (IUnknown *)((char *)v56 + 4 * v83); /*0x56d013*/
    }
    else
    {
      v56 = (IUnknown *)((char *)v56 + 4); /*0x56d01c*/
    }
  }
  return v77; /*0x56d0f0*/
}
}
} // namespace gamemd

// 0x570050
namespace gamemd {
AbstractClass * * Terrain::ProcessCellModification(IUnknown * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  IUnknown *v2; // ebp
  IUnknown *v3; // edi
  IUnknown *v4; // esi
  __int16 v6; // cx
  __int16 v8; // si
  _DWORD *v11; // esi
  char bl13; // bl
  ObjectClass *v12; // ecx
  _DWORD *eax16; // eax
  ObjectClass *v15; // ecx
  _DWORD *eax21; // eax
  ObjectClass *v18; // ecx
  int v22; // eax
  int eax35; // eax
  MouseClass *v23; // edi
  ObjectClass *v24; // ecx
  IUnknown *v32; // ebp
  _DWORD *eax76; // eax
  ObjectClass *v39; // ecx
  _DWORD *eax81; // eax
  ObjectClass *v42; // ecx
  _DWORD *eax84; // eax
  ObjectClass *v45; // ecx
  _DWORD *eax87; // eax
  CCINIClass *v48; // eax
  int esi90; // esi
  IUnknown *v51; // eax
  IUnknown *v52; // esi
  _DWORD *eax106; // eax
  IUnknown *v57; // ebx
  ObjectClass *v58; // ecx
  _DWORD *eax112; // eax
  ObjectClass *v61; // ecx
  _DWORD *eax115; // eax
  ObjectClass *v64; // ecx
  _DWORD *eax118; // eax
  CCINIClass *v67; // eax
  int esi121; // esi
  IUnknown *v70; // eax
  ObjectClass *v75; // [esp+14h] [ebp-4Ch] BYREF
  IUnknown *i; // [esp+18h] [ebp-48h] BYREF
  IUnknown *v76; // [esp+1Ch] [ebp-44h] BYREF
  IUnknown *v77; // [esp+20h] [ebp-40h] BYREF
  __int16 v79[4]; // [esp+24h] [ebp-3Ch] BYREF
  int v80; // [esp+2Ch] [ebp-34h] BYREF
  __int16 v81[4]; // [esp+30h] [ebp-30h] BYREF
  int var28; // [esp+38h] [ebp-28h] BYREF
  CCINIClass *v82; // [esp+3Ch] [ebp-24h]
  int var20; // [esp+40h] [ebp-20h]
  IUnknown *v84; // [esp+44h] [ebp-1Ch]
  void **v86; // [esp+48h] [ebp-18h] BYREF
  void *Block; // [esp+4Ch] [ebp-14h]
  ObjectClass *v88; // [esp+50h] [ebp-10h]
  IUnknown *v90; // [esp+58h] [ebp-8h]
  v2 = aP1; /*0x570055*/
  v3 = (IUnknown *)-2; /*0x570061*/
  do /*0x5700b1*/
  {
    v4 = (IUnknown *)-2; /*0x570066*/
    do /*0x5700ab*/
    {
      v6 = HIWORD(v2->field_0) + (_WORD)v4; /*0x570075*/
      LOWORD(aP1) = LOWORD(v2->field_0) + (_WORD)v3; /*0x570079*/
      HIWORD(aP1) = v6; /*0x57007e*/
      i = aP1; /*0x570091*/
      int v7 = *((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&i) + 17); /*0x57009a*/
      if ( v7 >= 74 && v7 <= 101 ) /*0x5700a5*/
      {
        v8 = HIWORD(v2->field_0) + (_WORD)v4; /*0x5700b9*/
        LOWORD(aP1) = LOWORD(v2->field_0) + (_WORD)v3; /*0x5700c1*/
        HIWORD(aP1) = v8; /*0x5700c6*/
        CellClass::ApplyCliffTileModifications(this, (IUnknown *)&aP1); /*0x5700d6*/
        return; /*0x5700e2*/
      }
      v4 = (IUnknown *)((char *)v4 + 1); /*0x5700a7*/
    }
    while ( (int)v4 < 3 ); /*0x5700ab*/
    v3 = (IUnknown *)((char *)v3 + 1); /*0x5700ad*/
  }
  while ( (int)v3 < 3 ); /*0x5700b1*/
  unsigned int v9 = SLOWORD(v2->field_0) + (SHIWORD(v2->field_0) << 9); /*0x5700f0*/
  _DWORD *v10; // eax
  if ( v9 < 0x40000 && (v10 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v9)) != 0 ) /*0x570106*/
  {
    v11 = v10; /*0x570108*/
  }
  else
  {
    v11 = g_CellClassArray; /*0x57010f*/
    g_Map_GlobalCellIndex = (IUnknown *)v2->field_0; /*0x570114*/
  }
  bl13 = 0; /*0x57011f*/
  if ( (v11[80] & 0x500) == 0 ) /*0x570124*/
  {
    for ( i = 0; (int)i < 8; i = (IUnknown *)((char *)i + 1) ) /*0x57012a*/
    {
      v12 = (ObjectClass *)CellStruct::Add(v2, (IUnknown *)&v77, (IUnknown *)(4 * (bl13 & 7) + 9041544))->field_0; /*0x570147*/
      v76 = (IUnknown *)v12; /*0x570149*/
      aP1 = (IUnknown *)v12; /*0x57014d*/
      unsigned int v14 = (__int16)v12 + (SHIWORD(v12) << 9); /*0x57015c*/
      if ( v14 < 0x40000 && (eax16 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v14)) != 0 ) /*0x570172*/
      {
        v11 = eax16; /*0x570174*/
      }
      else
      {
        g_Map_GlobalCellIndex = (IUnknown *)v12; /*0x570178*/
        v11 = g_CellClassArray; /*0x57017e*/
      }
      if ( (v11[80] & 0x500) != 0 ) /*0x57018c*/
        break; /*0x57018c*/
      v15 = (ObjectClass *)CellStruct::Add(&aP1, (IUnknown *)v79, (IUnknown *)(4 * (bl13 & 7) + 9041544))->field_0; /*0x5701a1*/
      v76 = (IUnknown *)v15; /*0x5701a3*/
      aP1 = (IUnknown *)v15; /*0x5701a7*/
      unsigned int v17 = (__int16)v15 + (SHIWORD(v15) << 9); /*0x5701b6*/
      if ( v17 < 0x40000 && (eax21 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v17)) != 0 ) /*0x5701cc*/
      {
        v11 = eax21; /*0x5701ce*/
      }
      else
      {
        g_Map_GlobalCellIndex = (IUnknown *)v15; /*0x5701d2*/
        v11 = g_CellClassArray; /*0x5701d8*/
      }
      if ( (v11[80] & 0x500) != 0 ) /*0x5701e6*/
        break; /*0x5701e6*/
      v18 = (ObjectClass *)CellStruct::Add(&aP1, (IUnknown *)&v80, (IUnknown *)(4 * (bl13 & 7) + 9041544))->field_0; /*0x5701f7*/
      v76 = (IUnknown *)v18; /*0x5701f9*/
      aP1 = (IUnknown *)v18; /*0x5701fd*/
      unsigned int v20 = (__int16)v18 + (SHIWORD(v18) << 9); /*0x57020c*/
  _DWORD *v21; // eax
      if ( v20 < 0x40000 && (v21 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v20)) != 0 ) /*0x570222*/
      {
        v11 = v21; /*0x570224*/
      }
      else
      {
        g_Map_GlobalCellIndex = (IUnknown *)v18; /*0x570228*/
        v11 = g_CellClassArray; /*0x57022e*/
      }
      if ( (v11[80] & 0x500) != 0 ) /*0x57023c*/
        break; /*0x57023c*/
      bl13 = (bl13 + 1) & 7; /*0x570243*/
    }
  }
  v22 = v11[80]; /*0x570254*/
  if ( (v22 & 0x100) != 0 || (v22 & 0x400) != 0 )
  {
  char v89; // [esp+55h] [ebp-Bh]
  int v37; // eax
    if ( (v11[80] & 0x100) != 0 )
    {
      if ( (v22 & 0x80u) == 0 ) /*0x570273*/
        eax35 = *(_DWORD *)(v11[11] + 36); /*0x570280*/
      else
        eax35 = v11[9]; /*0x570275*/
    }
    else
    {
      i = 0; /*0x57028d*/
      v23 = (MouseClass *)((v22 & 0x800) != 0 ? 4 : 2);
      v75 = (ObjectClass *)v11[9]; /*0x5702a6*/
      while ( 1 ) /*0x5702c3*/
      {
        v24 = (ObjectClass *)CellStruct::Add( /*0x5702c3*/
                               &v75,
                               (IUnknown *)&v80,
                               (IUnknown *)(4 * ((unsigned __int8)v23 & 7) + 9041544))->field_0;
        v76 = (IUnknown *)v24; /*0x5702c5*/
        int v26 = SHIWORD(v24) << 9; /*0x5702d4*/
        bool v27 = (__int16)v24 + v26 < 0; /*0x5702d7*/
        int v28 = (__int16)v24 + v26; /*0x5702d7*/
        v75 = v24; /*0x5702d9*/
  _DWORD *v29; // eax
        if ( v27 || v28 >= 0x40000 || (v29 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v28)) == 0 ) /*0x5702f1*/
        {
          g_Map_GlobalCellIndex = (IUnknown *)v24; /*0x5702f3*/
          v29 = g_CellClassArray; /*0x5702f9*/
        }
        if ( (v29[80] & 0x400) == 0 ) /*0x570307*/
          break; /*0x570307*/
        i = (IUnknown *)((char *)i + 1); /*0x570311*/
        if ( (int)i >= 4 ) /*0x570315*/
          return; /*0x570315*/
      }
      int v30 = ((_BYTE)v23 - 4) & 7; /*0x570327*/
      LOWORD(i) = *((_WORD *)&Direction_X_Offsets.field_0 + 2 * v30) + (_WORD)v24; /*0x57033a*/
      HIWORD(i) = HIWORD(v24) + *((_WORD *)&DataGlobal_89F68A + 2 * v30); /*0x57034a*/
      v76 = i; /*0x570358*/
      eax35 = CellStruct::Add(&v76, (IUnknown *)&v80, (IUnknown *)(4 * v30 + 9041544))->field_0; /*0x570361*/
    }
    v75 = (ObjectClass *)eax35; /*0x570363*/
    int v31 = (v11[80] & 0x800) != 0 ? 6 : 0;
    *(_DWORD *)v81 = eax35; /*0x570382*/
    LOBYTE(aP1) = 0; /*0x570386*/
    VectorClass::CellConstructor(&v86, 0, 0); /*0x57038b*/
    v32 = *(IUnknown **)v81; /*0x570390*/
    v86 = &vt_DynamicVectorClass_Cell; /*0x570394*/
    int v91 = 10; /*0x57039c*/
    v90 = 0; /*0x5703a4*/
    while ( 1 ) /*0x5703ba*/
    {
  _DWORD *v36; // edx
      int v33 = v81[1] + (__int16)v32; /*0x5703ba*/
      if ( v33 <= g_Cell_PositionLUT /*0x5703e8*/
        || (__int16)v32 - v81[1] >= g_Cell_PositionLUT
        || v81[1] - (__int16)v32 >= g_Cell_PositionLUT
        || v33 > g_Cell_PositionLUT + 2 * g_CellPositionOffset )
      {
        goto LABEL_139; /*0x5703e8*/
      }
      unsigned int v34 = (__int16)v32 + (v81[1] << 9); /*0x5703f1*/
      if ( !*(_DWORD *)(this->q13C + 4 * v34) ) /*0x570401*/
        goto LABEL_74; /*0x570401*/
  _DWORD *v35; // eax
      if ( v34 < 0x40000 && (v35 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v34)) != 0 ) /*0x57041d*/
      {
        v36 = v35; /*0x57041f*/
      }
      else
      {
        g_Map_GlobalCellIndex = v32; /*0x570423*/
        v36 = g_CellClassArray; /*0x570429*/
      }
      v37 = v36[14] - g_TerrainBridgeIndex + 1; /*0x57043f*/
      if ( (v37 == dword_ABC2B4 || v37 == *(_DWORD *)&g_NetworkPlayerBuffer[80628]) && *((_BYTE *)v36 + 282) == 8 ) /*0x570453*/
      {
        Cell::UpdateTileType(v81, 0, 0); /*0x570511*/
        unsigned int v38 = v81[0] + (v81[1] << 9); /*0x570525*/
        if ( v38 >= 0x40000 || (eax76 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v38)) == 0 ) /*0x57053b*/
        {
          g_Map_GlobalCellIndex = *(IUnknown **)v81; /*0x57053d*/
          eax76 = g_CellClassArray; /*0x570543*/
        }
        DestroyCliffMap(this, (int)eax76, 2, (IUnknown *)&var28); /*0x57054f*/
        goto LABEL_109; /*0x57054f*/
      }
      if ( (v37 == g_TerrainSoundTable2 /*0x570486*/
         || v37 == g_TerrainSoundTable2 + 3
         || v37 == g_TerrainSoundTable2 + 4
         || v37 == g_TerrainSoundTable2 + 1
         || v37 == g_TerrainSoundTable2 + 2)
        && *((_BYTE *)v36 + 282) == 5 )
      {
        break; /*0x570486*/
      }
      if ( (v37 == *(_DWORD *)&g_NetworkPlayerBuffer[81676] /*0x5704a3*/
         || v37 == *(_DWORD *)&g_NetworkPlayerBuffer[78084])
        && *((_BYTE *)v36 + 282) == 12 )
      {
        Cell::UpdateTileType(v81, 0, 0); /*0x5707b7*/
        unsigned int v56 = v81[0] + (v81[1] << 9); /*0x5707cb*/
        if ( v56 >= 0x40000 || (eax106 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v56)) == 0 ) /*0x5707e1*/
        {
          g_Map_GlobalCellIndex = *(IUnknown **)v81; /*0x5707e3*/
          eax106 = g_CellClassArray; /*0x5707e9*/
        }
        DestroyCliffMap(this, (int)eax106, 4, (IUnknown *)&var28); /*0x5707f8*/
LABEL_109:
        Cell::CreateCrater(var28, (int)v82, var20, (int)v84, 0); /*0x5707fd*/
        goto LABEL_139; /*0x57082a*/
      }
      if ( (v37 == *(_DWORD *)&g_NetworkPlayerBuffer[80364] /*0x5704d6*/
         || v37 == *(_DWORD *)&g_NetworkPlayerBuffer[80364] + 3
         || v37 == *(_DWORD *)&g_NetworkPlayerBuffer[80364] + 4
         || v37 == *(_DWORD *)&g_NetworkPlayerBuffer[80364] + 1
         || v37 == *(_DWORD *)&g_NetworkPlayerBuffer[80364] + 2)
        && *((_BYTE *)v36 + 282) == 7 )
      {
        if ( v37 != *(_DWORD *)&g_NetworkPlayerBuffer[80364] + 4 ) /*0x570834*/
        {
          v57 = (IUnknown *)this; /*0x5709e9*/
          goto LABEL_133; /*0x5709e9*/
        }
        v57 = (IUnknown *)this; /*0x57083a*/
        Cell::SetTileType(v81, *(_DWORD *)&g_NetworkPlayerBuffer[80364] + g_TerrainBridgeIndex - 1, -1, -1, 0); /*0x570850*/
        v58 = (ObjectClass *)CellStruct::Add(v81, (IUnknown *)&aP1, &Direction_X_Offsets)->field_0; /*0x570868*/
        aP1 = (IUnknown *)v58; /*0x57086a*/
        *(_DWORD *)v79 = v58; /*0x57086e*/
        unsigned int v60 = (__int16)v58 + (SHIWORD(v58) << 9); /*0x57087d*/
        if ( v60 >= 0x40000 || (eax112 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v60)) == 0 ) /*0x570893*/
        {
          g_Map_GlobalCellIndex = (IUnknown *)v58; /*0x570895*/
          eax112 = g_CellClassArray; /*0x57089b*/
        }
        *((_BYTE *)eax112 + 283) += 4; /*0x5708ae*/
        v61 = (ObjectClass *)CellStruct::Add(v79, (IUnknown *)&v80, &g_CellDirectionOffsets)->field_0; /*0x5708c2*/
        aP1 = (IUnknown *)v61; /*0x5708c4*/
        unsigned int v63 = (__int16)v61 + (SHIWORD(v61) << 9); /*0x5708d3*/
        if ( v63 >= 0x40000 || (eax115 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v63)) == 0 ) /*0x5708e9*/
        {
          g_Map_GlobalCellIndex = (IUnknown *)v61; /*0x5708eb*/
          eax115 = g_CellClassArray; /*0x5708f1*/
        }
        *((_BYTE *)eax115 + 283) += 4; /*0x570904*/
        v64 = (ObjectClass *)CellStruct::Add(v79, (IUnknown *)&v80, (IUnknown *)g_CellDirectionOffsets[16])->field_0; /*0x570918*/
        aP1 = (IUnknown *)v64; /*0x57091a*/
        unsigned int v66 = (__int16)v64 + (SHIWORD(v64) << 9); /*0x570929*/
        if ( v66 >= 0x40000 || (eax118 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v66)) == 0 ) /*0x57093f*/
        {
          g_Map_GlobalCellIndex = (IUnknown *)v64; /*0x570941*/
          eax118 = g_CellClassArray; /*0x570947*/
        }
        *((_BYTE *)eax118 + 283) += 4; /*0x570957*/
        LOBYTE(aP1) = InvalidateTileRegionMap(this, (IUnknown *)v79); /*0x570967*/
        v67 = (CCINIClass *)v88; /*0x57096b*/
        int v69 = 0; /*0x57096f*/
        while ( 1 ) /*0x570971*/
        {
          esi121 = -2; /*0x570971*/
          do /*0x5709db*/
          {
            LOWORD(i) = esi121 + v79[0]; /*0x570983*/
            HIWORD(i) = v69 + v79[1]; /*0x570988*/
            if ( (int)v90 < (int)v67 ) /*0x570993*/
              goto LABEL_127; /*0x570993*/
            if ( (v89 || !v67) && v91 > 0 ) /*0x5709a7*/
            {
              if ( ((unsigned __int8 (__thiscall *)(void ***, char *, _DWORD))v86[2])(&v86, &v67->__pad_0[v91], 0) ) /*0x5709b6*/
              {
LABEL_127:
                v70 = v90; /*0x5709bd*/
                v90 = (IUnknown *)((char *)v90 + 1); /*0x5709c8*/
                *((_DWORD *)Block + (_DWORD)v70) = i; /*0x5709d0*/
              }
              v67 = (CCINIClass *)v88; /*0x5709d3*/
            }
            ++esi121; /*0x5709d7*/
          }
          while ( esi121 < 3 ); /*0x5709db*/
          if ( ++v69 >= 2 ) /*0x5709e1*/
          {
            LOWORD(v32) = v81[0]; /*0x5709e3*/
LABEL_133:
            LOWORD(i) = (_WORD)v32; /*0x5709ed*/
            HIWORD(i) = v81[1] - 2; /*0x5709fd*/
            v76 = i; /*0x570a06*/
            Terrain::ProcessCellModification(&v57->field_0, (IUnknown *)&v76); /*0x570a0d*/
            unsigned int v72 = v81[0] + (v81[1] << 9); /*0x570a21*/
  _DWORD *v73; // eax
            if ( v72 >= 0x40000 || (v73 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v72)) == 0 ) /*0x570a37*/
            {
              g_Map_GlobalCellIndex = *(IUnknown **)v81; /*0x570a39*/
              v73 = g_CellClassArray; /*0x570a3f*/
            }
            DestroyCliffMap(&v57->field_0, (int)v73, 4, (IUnknown *)&var28); /*0x570a4e*/
            Cell::CreateCrater(var28, (int)v82, var20, (int)v84, 0); /*0x570a7b*/
            v52 = (IUnknown *)this; /*0x570a80*/
LABEL_137:
            if ( (_BYTE)aP1 ) /*0x570a8a*/
              Terrain::ConnectivityGraph(v52); /*0x570a8e*/
LABEL_139:
            if ( (int)v90 > 0 ) /*0x570a99*/
              LayerClass::Update_Pathfinding_2(this, (IUnknown *)&v86); /*0x570aa4*/
            v86 = &vt_VectorClass_Cell; /*0x570aad*/
            if ( Block ) /*0x570ab7*/
            {
              if ( v89 ) /*0x570abf*/
                __3_YAXPAX_Z(Block); /*0x570ac2*/
            }
            return; /*0x570ac2*/
          }
        }
      }
LABEL_74:
      v32 = (IUnknown *)CellStruct::Add(v81, (IUnknown *)&v80, (IUnknown *)(4 * (v31 & 7) + 9041544))->field_0; /*0x5704dc*/
      *(_DWORD *)v81 = v32; /*0x5704f9*/
    }
    if ( v37 != g_TerrainSoundTable2 + 4 ) /*0x570559*/
      goto LABEL_101; /*0x570559*/
    Cell::SetTileType(v81, g_TerrainSoundTable2 + g_TerrainBridgeIndex - 1, -1, -1, 0); /*0x570573*/
    v39 = (ObjectClass *)CellStruct::Add(v81, (IUnknown *)&aP1, (IUnknown *)g_CellDirectionOffsets[16])->field_0; /*0x57058b*/
    aP1 = (IUnknown *)v39; /*0x57058d*/
    *(_DWORD *)v79 = v39; /*0x570591*/
    unsigned int v41 = (__int16)v39 + (SHIWORD(v39) << 9); /*0x5705a0*/
    if ( v41 >= 0x40000 || (eax81 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v41)) == 0 ) /*0x5705b6*/
    {
      g_Map_GlobalCellIndex = (IUnknown *)v39; /*0x5705b8*/
      eax81 = g_CellClassArray; /*0x5705be*/
    }
    *((_BYTE *)eax81 + 283) += 4; /*0x5705d2*/
    v42 = (ObjectClass *)CellStruct::Add(v79, (IUnknown *)&v80, &Direction_X_Offsets)->field_0; /*0x5705e6*/
    aP1 = (IUnknown *)v42; /*0x5705e8*/
    unsigned int v44 = (__int16)v42 + (SHIWORD(v42) << 9); /*0x5705f7*/
    if ( v44 >= 0x40000 || (eax84 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v44)) == 0 ) /*0x57060d*/
    {
      g_Map_GlobalCellIndex = (IUnknown *)v42; /*0x57060f*/
      eax84 = g_CellClassArray; /*0x570615*/
    }
    *((_BYTE *)eax84 + 283) += 4; /*0x570627*/
    v45 = (ObjectClass *)CellStruct::Add(v79, (IUnknown *)&v80, (IUnknown *)&g_CellDirectionOffsets.field_8)->field_0; /*0x57063b*/
    aP1 = (IUnknown *)v45; /*0x57063d*/
    unsigned int v47 = (__int16)v45 + (SHIWORD(v45) << 9); /*0x57064c*/
    if ( v47 >= 0x40000 || (eax87 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v47)) == 0 ) /*0x570662*/
    {
      g_Map_GlobalCellIndex = (IUnknown *)v45; /*0x570664*/
      eax87 = g_CellClassArray; /*0x57066a*/
    }
    *((_BYTE *)eax87 + 283) += 4; /*0x57067b*/
    LOBYTE(aP1) = InvalidateTileRegionMap(this, (IUnknown *)v79); /*0x57068b*/
    v48 = (CCINIClass *)v88; /*0x57068f*/
    int v50 = 0; /*0x570693*/
LABEL_90:
    esi90 = -2; /*0x570695*/
    while ( 1 ) /*0x5706a7*/
    {
      LOWORD(i) = v50 + v79[0]; /*0x5706a7*/
      HIWORD(i) = esi90 + v79[1]; /*0x5706ac*/
      if ( (int)v90 < (int)v48 ) /*0x5706b7*/
        goto LABEL_96; /*0x5706b7*/
      if ( !v89 && v48 || v91 <= 0 ) /*0x5706cb*/
        goto LABEL_98; /*0x5706cb*/
      if ( ((unsigned __int8 (__thiscall *)(void ***, char *, _DWORD))v86[2])(&v86, &v48->__pad_0[v91], 0) ) /*0x5706da*/
      {
LABEL_96:
        v51 = v90; /*0x5706e9*/
        v90 = (IUnknown *)((char *)v90 + 1); /*0x5706ec*/
        *((_DWORD *)Block + (_DWORD)v51) = i; /*0x5706f4*/
      }
      v48 = (CCINIClass *)v88; /*0x5706f7*/
LABEL_98:
      if ( ++esi90 >= 3 ) /*0x5706ff*/
      {
        if ( ++v50 >= 2 ) /*0x570705*/
        {
          LOWORD(v32) = v81[0]; /*0x570707*/
LABEL_101:
          v52 = (IUnknown *)this; /*0x57070b*/
          HIWORD(i) = v81[1]; /*0x570717*/
          LOWORD(i) = (_WORD)v32 - 2; /*0x57071c*/
          v76 = i; /*0x570729*/
          Terrain::ProcessCellModification(this, (IUnknown *)&v76); /*0x570730*/
          unsigned int v54 = v81[0] + (v81[1] << 9); /*0x570744*/
  _DWORD *v55; // eax
          if ( v54 >= 0x40000 || (v55 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v54)) == 0 ) /*0x57075a*/
          {
            g_Map_GlobalCellIndex = *(IUnknown **)v81; /*0x57075c*/
            v55 = g_CellClassArray; /*0x570762*/
          }
          DestroyCliffMap(this, (int)v55, 2, (IUnknown *)&var28); /*0x570771*/
          Cell::CreateCrater(var28, (int)v82, var20, (int)v84, 0); /*0x57079e*/
          goto LABEL_137; /*0x5707a3*/
        }
        goto LABEL_90; /*0x570705*/
      }
    }
  }
}
}
} // namespace gamemd

// 0x573540
namespace gamemd {
AbstractClass * * Terrain::RecursiveModify(IUnknown * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  IUnknown *v2; // ebx
  IUnknown *v3; // edi
  IUnknown *v4; // esi
  __int16 v6; // cx
  __int16 v8; // si
  _DWORD *v11; // edx
  char v12; // di
  int i; // ebp
  ObjectClass *v13; // ecx
  _DWORD *eax16; // eax
  ObjectClass *v16; // ecx
  _DWORD *eax21; // eax
  ObjectClass *v19; // ecx
  int v23; // eax
  __int16 v26; // di
  __int16 v32; // cx
  __int16 v34; // si
  __int16 v35; // di
  __int16 v36; // cx
  int esi46; // esi
  ObjectClass *v37; // ebx
  Terrain *v47; // ebp
  _DWORD *eax82; // eax
  ObjectClass *v51; // ecx
  _DWORD *eax85; // eax
  ObjectClass *v54; // ecx
  _DWORD *eax88; // eax
  CCINIClass *v57; // eax
  _DWORD *ebp113; // ebp
  ObjectClass *v66; // ecx
  _DWORD *eax114; // eax
  ObjectClass *v69; // ecx
  _DWORD *eax117; // eax
  ObjectClass *v72; // ecx
  _DWORD *eax120; // eax
  CCINIClass *v75; // eax
  IUnknown *v83; // [esp+14h] [ebp-44h] BYREF
  __int16 v84[4]; // [esp+18h] [ebp-40h] BYREF
  int v85; // [esp+20h] [ebp-38h] BYREF
  int v86; // [esp+24h] [ebp-34h] BYREF
  __int16 v87[4]; // [esp+28h] [ebp-30h] BYREF
  int var28; // [esp+30h] [ebp-28h] BYREF
  CCINIClass *v88; // [esp+34h] [ebp-24h]
  void **v92; // [esp+40h] [ebp-18h] BYREF
  void *Block; // [esp+44h] [ebp-14h]
  ObjectClass *v94; // [esp+48h] [ebp-10h]
  v2 = aP1; /*0x573544*/
  v3 = (IUnknown *)-2; /*0x573551*/
  do /*0x5735a4*/
  {
    v4 = (IUnknown *)-2; /*0x573556*/
    do /*0x57359e*/
    {
      v6 = HIWORD(v2->field_0) + (_WORD)v4; /*0x573564*/
      LOWORD(aP1) = LOWORD(v2->field_0) + (_WORD)v3; /*0x573568*/
      HIWORD(aP1) = v6; /*0x57356d*/
      v85 = (int)aP1; /*0x573580*/
      int v7 = *((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v85) + 17); /*0x573589*/
      if ( v7 >= 205 && v7 <= 232 ) /*0x573598*/
      {
        v8 = HIWORD(v2->field_0) + (_WORD)v4; /*0x5735ab*/
        LOWORD(aP1) = LOWORD(v2->field_0) + (_WORD)v3; /*0x5735b3*/
        HIWORD(aP1) = v8; /*0x5735b8*/
        CellClass::ApplyTileMod58(this, (IUnknown *)&aP1); /*0x5735c8*/
        return; /*0x5735d4*/
      }
      v4 = (IUnknown *)((char *)v4 + 1); /*0x57359a*/
    }
    while ( (int)v4 < 3 ); /*0x57359e*/
    v3 = (IUnknown *)((char *)v3 + 1); /*0x5735a0*/
  }
  while ( (int)v3 < 3 ); /*0x5735a4*/
  unsigned int v9 = SLOWORD(v2->field_0) + (SHIWORD(v2->field_0) << 9); /*0x5735e1*/
  _DWORD *v10; // eax
  if ( v9 < 0x40000 && (v10 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v9)) != 0 ) /*0x5735f7*/
  {
    v11 = v10; /*0x5735f9*/
  }
  else
  {
    v11 = g_CellClassArray; /*0x5735ff*/
    g_Map_GlobalCellIndex = (IUnknown *)v2->field_0; /*0x573604*/
  }
  v12 = 0; /*0x57360f*/
  if ( (v11[80] & 0x500) == 0 ) /*0x573614*/
  {
    for ( i = 0; i < 8; ++i ) /*0x57361a*/
    {
      v13 = (ObjectClass *)CellStruct::Add(v2, (IUnknown *)&v86, (IUnknown *)(4 * (v12 & 7) + 9041544))->field_0; /*0x573635*/
      v85 = (int)v13; /*0x573637*/
      aP1 = (IUnknown *)v13; /*0x57363b*/
      unsigned int v15 = (__int16)v13 + (SHIWORD(v13) << 9); /*0x57364a*/
      if ( v15 < 0x40000 && (eax16 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v15)) != 0 ) /*0x573660*/
      {
        v11 = eax16; /*0x573662*/
      }
      else
      {
        g_Map_GlobalCellIndex = (IUnknown *)v13; /*0x573666*/
        v11 = g_CellClassArray; /*0x57366c*/
      }
      if ( (v11[80] & 0x500) != 0 ) /*0x57367a*/
        break; /*0x57367a*/
      v16 = (ObjectClass *)CellStruct::Add(&aP1, (IUnknown *)v84, (IUnknown *)(4 * (v12 & 7) + 9041544))->field_0; /*0x57368f*/
      v85 = (int)v16; /*0x573691*/
      aP1 = (IUnknown *)v16; /*0x573695*/
      unsigned int v18 = (__int16)v16 + (SHIWORD(v16) << 9); /*0x5736a4*/
      if ( v18 < 0x40000 && (eax21 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v18)) != 0 ) /*0x5736ba*/
      {
        v11 = eax21; /*0x5736bc*/
      }
      else
      {
        g_Map_GlobalCellIndex = (IUnknown *)v16; /*0x5736c0*/
        v11 = g_CellClassArray; /*0x5736c6*/
      }
      if ( (v11[80] & 0x500) != 0 ) /*0x5736d4*/
        break; /*0x5736d4*/
      v19 = (ObjectClass *)CellStruct::Add(&aP1, (IUnknown *)&v83, (IUnknown *)(4 * (v12 & 7) + 9041544))->field_0; /*0x5736e5*/
      v85 = (int)v19; /*0x5736e7*/
      aP1 = (IUnknown *)v19; /*0x5736eb*/
      unsigned int v21 = (__int16)v19 + (SHIWORD(v19) << 9); /*0x5736fa*/
  _DWORD *v22; // eax
      if ( v21 < 0x40000 && (v22 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v21)) != 0 ) /*0x573710*/
      {
        v11 = v22; /*0x573712*/
      }
      else
      {
        g_Map_GlobalCellIndex = (IUnknown *)v19; /*0x573716*/
        v11 = g_CellClassArray; /*0x57371c*/
      }
      if ( (v11[80] & 0x500) != 0 ) /*0x57372a*/
        break; /*0x57372a*/
      v12 = (v12 + 1) & 7; /*0x57372d*/
    }
  }
  v23 = v11[80]; /*0x57373a*/
  if ( (v23 & 0x100) != 0 || (v23 & 0x400) != 0 )
  {
  char v95; // [esp+4Dh] [ebp-Bh]
  int v91; // [esp+3Ch] [ebp-1Ch]
  int v90; // [esp+38h] [ebp-20h]
  int v44; // eax
  bool v28; // sf
  int v24; // eax
    if ( (v11[80] & 0x100) != 0 )
    {
      if ( (v23 & 0x80u) == 0 ) /*0x573759*/
        v24 = *(_DWORD *)(v11[11] + 36); /*0x573766*/
      else
        v24 = v11[9]; /*0x57375b*/
    }
    else
    {
      int v25 = v11[9]; /*0x573773*/
      *(_DWORD *)v84 = v25; /*0x57377a*/
      v85 = 0; /*0x573781*/
      v86 = (v23 & 0x800) != 0 ? 4 : 2;
      while ( 1 ) /*0x5737a2*/
      {
        v26 = *((_WORD *)&DataGlobal_89F68A + 2 * (v86 & 7)) + v84[1]; /*0x5737a2*/
        LOWORD(v83) = *((_WORD *)&Direction_X_Offsets.field_0 + 2 * (v86 & 7)) + v25; /*0x5737af*/
        HIWORD(v83) = v26; /*0x5737b4*/
        LOWORD(v25) = (_WORD)v83; /*0x5737b9*/
        int v27 = v26 << 9; /*0x5737bd*/
        v28 = (__int16)v83 + v27 < 0; /*0x5737c0*/
        int v29 = (__int16)v83 + v27; /*0x5737c0*/
        *(_DWORD *)v84 = v83; /*0x5737c2*/
  _DWORD *v30; // ecx
        if ( v28 || v29 >= 0x40000 || (v30 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v29)) == 0 ) /*0x5737db*/
        {
          g_Map_GlobalCellIndex = v83; /*0x5737e1*/
          v30 = g_CellClassArray; /*0x5737e7*/
        }
        if ( (v30[80] & 0x400) == 0 ) /*0x5737f5*/
          break; /*0x5737f5*/
        if ( ++v85 >= 4 ) /*0x573803*/
          return; /*0x573803*/
      }
      int v31 = ((_BYTE)v86 - 4) & 7; /*0x573819*/
      v32 = *((_WORD *)&Direction_X_Offsets.field_0 + 2 * v31); /*0x57381c*/
      _WORD * v33 = (_WORD *)(4 * v31 + 9041544); /*0x573824*/
      v34 = v26 + v33[1]; /*0x573832*/
      v35 = (_WORD)v83 + v32 + *v33; /*0x573838*/
      v36 = v33[1]; /*0x57383b*/
      LOWORD(v85) = v35; /*0x573842*/
      HIWORD(v85) = v34 + v36; /*0x573847*/
      v24 = v85; /*0x57384c*/
    }
    esi46 = (v11[80] & 0x800) != 0 ? 6 : 0;
    *(_DWORD *)v87 = v24; /*0x57386b*/
    VectorClass::CellConstructor(&v92, 0, 0); /*0x57386f*/
    v37 = *(ObjectClass **)v87; /*0x573874*/
    int v39 = *(this + 73); /*0x57387f*/
    v92 = &vt_DynamicVectorClass_Cell; /*0x573885*/
    int v97 = 10; /*0x57388f*/
    int v96 = 0; /*0x573897*/
    LOBYTE(aP1) = 0; /*0x57389f*/
    if ( v87[0] < v39 ) /*0x5738a4*/
      goto LABEL_141; /*0x5738a4*/
    while ( 1 ) /*0x5738aa*/
    {
      if ( (__int16)v37 > v39 + this->q12C ) /*0x5738bb*/
        goto LABEL_141; /*0x5738bb*/
      int v40 = this->q128; /*0x5738ca*/
      if ( v87[1] < v40 || v87[1] > v40 + this->q130 ) /*0x5738e6*/
        goto LABEL_141; /*0x5738e6*/
      unsigned int v41 = (__int16)v37 + (v87[1] << 9); /*0x5738ef*/
      if ( *(_DWORD *)(this->q13C + 4 * v41) ) /*0x5738fb*/
      {
  _DWORD *v43; // edx
  _DWORD *v42; // eax
        if ( v41 < 0x40000 && (v42 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v41)) != 0 ) /*0x57391b*/
        {
          v43 = v42; /*0x57391d*/
        }
        else
        {
          g_Map_GlobalCellIndex = (IUnknown *)v37; /*0x573921*/
          v43 = g_CellClassArray; /*0x573927*/
        }
        v44 = v43[14] - *(_DWORD *)&g_NetworkPlayerBuffer[79852] + 1; /*0x57393d*/
        if ( (v44 == dword_ABC2B4 || v44 == *(_DWORD *)&g_NetworkPlayerBuffer[80628]) /*0x573951*/
          && *((_BYTE *)v43 + 282) == 8 )
        {
          Cell::UpdateTileType(v87, 0, 0); /*0x573a26*/
          unsigned int v45 = v87[0] + (v87[1] << 9); /*0x573a3a*/
  _DWORD *v46; // eax
          if ( v45 >= 0x40000 || (v46 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v45)) == 0 ) /*0x573a50*/
          {
            g_Map_GlobalCellIndex = *(IUnknown **)v87; /*0x573a52*/
            v46 = g_CellClassArray; /*0x573a58*/
          }
          Terrain::PlaceCliffs(this, (int)v46, 2, (IUnknown *)&var28); /*0x573a64*/
          goto LABEL_111; /*0x573a64*/
        }
        if ( (v44 == g_TerrainSoundTable2 /*0x573984*/
           || v44 == g_TerrainSoundTable2 + 3
           || v44 == g_TerrainSoundTable2 + 4
           || v44 == g_TerrainSoundTable2 + 1
           || v44 == g_TerrainSoundTable2 + 2)
          && *((_BYTE *)v43 + 282) == 5 )
        {
          if ( v44 != g_TerrainSoundTable2 + 4 ) /*0x573a6e*/
          {
            v47 = this; /*0x573c2e*/
LABEL_103:
            LOWORD(v85) = (_WORD)v37 - 2; /*0x573c32*/
            HIWORD(v85) = v87[1]; /*0x573c3f*/
            v86 = v85; /*0x573c4c*/
            Terrain::RecursiveModify(v47, (IUnknown *)&v86); /*0x573c53*/
            unsigned int v62 = v87[0] + (v87[1] << 9); /*0x573c67*/
  _DWORD *v63; // eax
            if ( v62 >= 0x40000 || (v63 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v62)) == 0 ) /*0x573c7d*/
            {
              g_Map_GlobalCellIndex = *(IUnknown **)v87; /*0x573c7f*/
              v63 = g_CellClassArray; /*0x573c85*/
            }
            Terrain::PlaceCliffs(v47, (int)v63, 2, (IUnknown *)&var28); /*0x573c94*/
            Cell::CreateCrater(var28, (int)v88, v90, v91, 0); /*0x573cc1*/
            goto LABEL_139; /*0x573cc6*/
          }
          v47 = this; /*0x573a74*/
          Cell::SetTileType(v87, g_TerrainSoundTable2 + *(_DWORD *)&g_NetworkPlayerBuffer[79852] - 1, -1, -1, 0); /*0x573a8a*/
          LOWORD(aP1) = v87[0] + *(_WORD *)g_CellDirectionOffsets[16]; /*0x573aa7*/
          int v48 = (__int16)(v87[0] + *(_WORD *)g_CellDirectionOffsets[16]); /*0x573aac*/
          HIWORD(aP1) = *(_WORD *)&g_CellDirectionOffsets[18] + v87[1]; /*0x573aaf*/
          int v49 = (__int16)(*(_WORD *)&g_CellDirectionOffsets[18] + v87[1]) << 9; /*0x573abb*/
          v28 = v48 + v49 < 0; /*0x573abe*/
          int v50 = v48 + v49; /*0x573abe*/
          *(_DWORD *)v84 = aP1; /*0x573ac0*/
          if ( v28 || v50 >= 0x40000 || (eax82 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v50)) == 0 ) /*0x573ad8*/
          {
            g_Map_GlobalCellIndex = aP1; /*0x573ada*/
            eax82 = g_CellClassArray; /*0x573ae0*/
          }
          *((_BYTE *)eax82 + 283) += 4; /*0x573af7*/
          v51 = (ObjectClass *)CellStruct::Add(v84, (IUnknown *)&v86, &Direction_X_Offsets)->field_0; /*0x573b07*/
          aP1 = (IUnknown *)v51; /*0x573b09*/
          unsigned int v53 = (__int16)v51 + (SHIWORD(v51) << 9); /*0x573b18*/
          if ( v53 >= 0x40000 || (eax85 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v53)) == 0 ) /*0x573b2e*/
          {
            g_Map_GlobalCellIndex = (IUnknown *)v51; /*0x573b30*/
            eax85 = g_CellClassArray; /*0x573b36*/
          }
          *((_BYTE *)eax85 + 283) += 4; /*0x573b49*/
          v54 = (ObjectClass *)CellStruct::Add(v84, (IUnknown *)&v86, (IUnknown *)&g_CellDirectionOffsets.field_8)->field_0; /*0x573b5d*/
          aP1 = (IUnknown *)v54; /*0x573b5f*/
          unsigned int v56 = (__int16)v54 + (SHIWORD(v54) << 9); /*0x573b6e*/
          if ( v56 >= 0x40000 || (eax88 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v56)) == 0 ) /*0x573b84*/
          {
            g_Map_GlobalCellIndex = (IUnknown *)v54; /*0x573b86*/
            eax88 = g_CellClassArray; /*0x573b8c*/
          }
          *((_BYTE *)eax88 + 283) += 4; /*0x573b9c*/
          LOBYTE(aP1) = InvalidateTileRegionMap(this, (IUnknown *)v84); /*0x573bac*/
          v57 = (CCINIClass *)v94; /*0x573bb0*/
          int v59 = 0; /*0x573bb4*/
          while ( 2 ) /*0x573bb6*/
          {
            int v60 = -2; /*0x573bb6*/
LABEL_92:
            LOWORD(v85) = v59 + v84[0]; /*0x573bbb*/
            HIWORD(v85) = v60 + v84[1]; /*0x573bcd*/
            if ( v96 >= (int)v57 ) /*0x573bd8*/
            {
              if ( (v95 || !v57) && v97 > 0 ) /*0x573bec*/
              {
                if ( ((unsigned __int8 (__thiscall *)(void ***, char *, _DWORD))v92[2])(&v92, &v57->__pad_0[v97], 0) ) /*0x573bfb*/
                  break; /*0x573c00*/
LABEL_98:
                v57 = (CCINIClass *)v94; /*0x573c18*/
              }
              if ( ++v60 >= 3 ) /*0x573c20*/
              {
                if ( ++v59 >= 2 ) /*0x573c26*/
                {
                  LOWORD(v37) = v87[0]; /*0x573c28*/
                  goto LABEL_103; /*0x573c2c*/
                }
                continue; /*0x573c26*/
              }
              goto LABEL_92; /*0x573c20*/
            }
            break;
          }
          int v61 = v96++; /*0x573c02*/
          *((_DWORD *)Block + v61) = v85; /*0x573c15*/
          goto LABEL_98; /*0x573c15*/
        }
        if ( (v44 == *(_DWORD *)&g_NetworkPlayerBuffer[81676] /*0x5739a1*/
           || v44 == *(_DWORD *)&g_NetworkPlayerBuffer[78084])
          && *((_BYTE *)v43 + 282) == 12 )
        {
          Cell::UpdateTileType(v87, 0, 0); /*0x573cda*/
          unsigned int v64 = v87[0] + (v87[1] << 9); /*0x573cee*/
  _DWORD *v65; // eax
          if ( v64 >= 0x40000 || (v65 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v64)) == 0 ) /*0x573d04*/
          {
            g_Map_GlobalCellIndex = *(IUnknown **)v87; /*0x573d06*/
            v65 = g_CellClassArray; /*0x573d0c*/
          }
          Terrain::PlaceCliffs(this, (int)v65, 4, (IUnknown *)&var28); /*0x573d1b*/
LABEL_111:
          Cell::CreateCrater(var28, (int)v88, v90, v91, 0); /*0x573d20*/
          goto LABEL_141; /*0x573d4d*/
        }
        if ( (v44 == *(_DWORD *)&g_NetworkPlayerBuffer[80364] /*0x5739d4*/
           || v44 == *(_DWORD *)&g_NetworkPlayerBuffer[80364] + 3
           || v44 == *(_DWORD *)&g_NetworkPlayerBuffer[80364] + 4
           || v44 == *(_DWORD *)&g_NetworkPlayerBuffer[80364] + 1
           || v44 == *(_DWORD *)&g_NetworkPlayerBuffer[80364] + 2)
          && *((_BYTE *)v43 + 282) == 7 )
        {
          break; /*0x5739d4*/
        }
      }
      v37 = (ObjectClass *)CellStruct::Add(v87, (IUnknown *)&v86, (IUnknown *)(4 * (esi46 & 7) + 9041544))->field_0; /*0x5739fb*/
      v39 = *(this + 73); /*0x5739fd*/
      *(_DWORD *)v87 = v37; /*0x573a03*/
      if ( (__int16)v37 < v39 ) /*0x573a0c*/
        goto LABEL_141; /*0x573a0c*/
    }
    if ( v44 != *(_DWORD *)&g_NetworkPlayerBuffer[80364] + 4 ) /*0x573d57*/
    {
      ebp113 = this; /*0x573f0c*/
      goto LABEL_135; /*0x573f0c*/
    }
    ebp113 = this; /*0x573d5d*/
    Cell::SetTileType( /*0x573d73*/
      v87,
      *(_DWORD *)&g_NetworkPlayerBuffer[80364] + *(_DWORD *)&g_NetworkPlayerBuffer[79852] - 1,
      -1,
      -1,
      0);
    v66 = (ObjectClass *)CellStruct::Add(v87, (IUnknown *)&aP1, &Direction_X_Offsets)->field_0; /*0x573d8b*/
    aP1 = (IUnknown *)v66; /*0x573d8d*/
    *(_DWORD *)v84 = v66; /*0x573d91*/
    unsigned int v68 = (__int16)v66 + (SHIWORD(v66) << 9); /*0x573da0*/
    if ( v68 >= 0x40000 || (eax114 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v68)) == 0 ) /*0x573db6*/
    {
      g_Map_GlobalCellIndex = (IUnknown *)v66; /*0x573db8*/
      eax114 = g_CellClassArray; /*0x573dbe*/
    }
    *((_BYTE *)eax114 + 283) += 4; /*0x573dd1*/
    v69 = (ObjectClass *)CellStruct::Add(v84, (IUnknown *)&v86, &g_CellDirectionOffsets)->field_0; /*0x573de5*/
    aP1 = (IUnknown *)v69; /*0x573de7*/
    unsigned int v71 = (__int16)v69 + (SHIWORD(v69) << 9); /*0x573df6*/
    if ( v71 >= 0x40000 || (eax117 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v71)) == 0 ) /*0x573e0c*/
    {
      g_Map_GlobalCellIndex = (IUnknown *)v69; /*0x573e0e*/
      eax117 = g_CellClassArray; /*0x573e14*/
    }
    *((_BYTE *)eax117 + 283) += 4; /*0x573e27*/
    v72 = (ObjectClass *)CellStruct::Add(v84, (IUnknown *)&v86, (IUnknown *)g_CellDirectionOffsets[16])->field_0; /*0x573e3b*/
    aP1 = (IUnknown *)v72; /*0x573e3d*/
    unsigned int v74 = (__int16)v72 + (SHIWORD(v72) << 9); /*0x573e4c*/
    if ( v74 >= 0x40000 || (eax120 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v74)) == 0 ) /*0x573e62*/
    {
      g_Map_GlobalCellIndex = (IUnknown *)v72; /*0x573e64*/
      eax120 = g_CellClassArray; /*0x573e6a*/
    }
    *((_BYTE *)eax120 + 283) += 4; /*0x573e7a*/
    LOBYTE(aP1) = InvalidateTileRegionMap(this, (IUnknown *)v84); /*0x573e8a*/
    v75 = (CCINIClass *)v94; /*0x573e8e*/
    int v77 = 0; /*0x573e92*/
LABEL_123:
    int v78 = -2; /*0x573e94*/
    while ( 1 ) /*0x573ea6*/
    {
      LOWORD(v85) = v78 + v84[0]; /*0x573ea6*/
      HIWORD(v85) = v77 + v84[1]; /*0x573eab*/
      if ( v96 < (int)v75 ) /*0x573eb6*/
        goto LABEL_129; /*0x573eb6*/
      if ( !v95 && v75 || v97 <= 0 ) /*0x573eca*/
        goto LABEL_131; /*0x573eca*/
      if ( ((unsigned __int8 (__thiscall *)(void ***, char *, _DWORD))v92[2])(&v92, &v75->__pad_0[v97], 0) ) /*0x573ed9*/
      {
LABEL_129:
        int v79 = v96++; /*0x573ee8*/
        *((_DWORD *)Block + v79) = v85; /*0x573ef3*/
      }
      v75 = (CCINIClass *)v94; /*0x573ef6*/
LABEL_131:
      if ( ++v78 >= 3 ) /*0x573efe*/
      {
        if ( ++v77 >= 2 ) /*0x573f04*/
        {
          LOWORD(v37) = v87[0]; /*0x573f06*/
LABEL_135:
          LOWORD(v85) = (_WORD)v37; /*0x573f10*/
          HIWORD(v85) = v87[1] - 2; /*0x573f20*/
          v86 = v85; /*0x573f29*/
          Terrain::RecursiveModify(ebp113, (IUnknown *)&v86); /*0x573f30*/
          unsigned int v80 = v87[0] + (v87[1] << 9); /*0x573f44*/
  _DWORD *v81; // eax
          if ( v80 >= 0x40000 || (v81 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v80)) == 0 ) /*0x573f5a*/
          {
            g_Map_GlobalCellIndex = *(IUnknown **)v87; /*0x573f5c*/
            v81 = g_CellClassArray; /*0x573f62*/
          }
          Terrain::PlaceCliffs(ebp113, (int)v81, 4, (IUnknown *)&var28); /*0x573f71*/
          Cell::CreateCrater(var28, (int)v88, v90, v91, 0); /*0x573f9e*/
          v47 = this; /*0x573fa3*/
LABEL_139:
          if ( (_BYTE)aP1 ) /*0x573fad*/
            Terrain::ConnectivityGraph(v47); /*0x573fb1*/
LABEL_141:
          if ( v96 > 0 ) /*0x573fbc*/
            LayerClass::Update_Pathfinding_2(this, (IUnknown *)&v92); /*0x573fc7*/
          v92 = &vt_VectorClass_Cell; /*0x573fd0*/
          if ( Block ) /*0x573fda*/
          {
            if ( v95 ) /*0x573fe2*/
              __3_YAXPAX_Z(Block); /*0x573fe5*/
          }
          return; /*0x573fe5*/
        }
        goto LABEL_123; /*0x573f04*/
      }
    }
  }
}
}
} // namespace gamemd

// 0x576770
namespace gamemd {
int Terrain::CreateCrater(IUnknown * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  IUnknown *v2; // edi
  int i; // ebx
  __int16 v6; // dx
  _DWORD *v9; // edx
  int v10; // eax
  IUnknown *v11; // eax
  __int16 v13; // dx
  __int16 v19; // si
  int v20; // ebp
  ObjectClass *v21; // edi
  int v22; // ebp
  int v29; // edx
  int v30; // esi
  int v31; // ecx
  __int16 v33; // [esp+16h] [ebp-1Eh]
  _DWORD *v35; // [esp+1Ch] [ebp-18h]
  ObjectClass *v36; // [esp+1Ch] [ebp-18h]
  ObjectClass *a3; // [esp+24h] [ebp-10h] BYREF
  int v39; // [esp+28h] [ebp-Ch]
  int v40; // [esp+2Ch] [ebp-8h]
  int v41; // [esp+30h] [ebp-4h]
  v2 = aP1; /*0x576781*/
  char v3 = 0; /*0x576785*/
  for ( i = 0; i < 8; ++i ) /*0x576787*/
  {
    int v5 = v3 & 7; /*0x57678b*/
    v6 = *((_WORD *)&Direction_X_Offsets.field_0 + 2 * v5); /*0x57678e*/
    LOWORD(v5) = HIWORD(v2->field_0) + *((_WORD *)&DataGlobal_89F68A + 2 * v5); /*0x5767a4*/
    LOWORD(aP1) = LOWORD(v2->field_0) + v6; /*0x5767a8*/
    HIWORD(aP1) = v5; /*0x5767b0*/
    unsigned int v7 = (__int16)aP1 + ((__int16)v5 << 9); /*0x5767bb*/
  _DWORD *v8; // eax
    if ( v7 < 0x40000 && (v8 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v7)) != 0 ) /*0x5767cb*/
    {
      v9 = v8; /*0x5767cd*/
    }
    else
    {
      v9 = g_CellClassArray; /*0x5767d5*/
      g_Map_GlobalCellIndex = aP1; /*0x5767da*/
    }
    v35 = v9; /*0x5767e5*/
    if ( (v9[80] & 0x500) != 0 ) /*0x5767ec*/
      break; /*0x5767ec*/
    v3 = (v3 + 1) & 7; /*0x5767ef*/
  }
  v10 = v9[80]; /*0x5767f8*/
  if ( (v10 & 0x100) == 0 && (v10 & 0x400) == 0 ) /*0x57680b*/
    return v10; /*0x57680b*/
  if ( (v9[80] & 0x100) != 0 )
  {
    if ( (v10 & 0x80u) == 0 ) /*0x576817*/
      v11 = *(IUnknown **)(v9[11] + 36); /*0x576824*/
    IUnknown *v11 = (IUnknown *)v9[9]; /*0x576819*/
  }
  else
  {
    int v12 = v9[9]; /*0x576831*/
    v33 = HIWORD(v12); /*0x576838*/
    int v34 = 0; /*0x57683f*/
    int v37 = (v10 & 0x800) != 0 ? 4 : 2;
    while ( 1 ) /*0x57685c*/
    {
      v13 = v12 + *((_WORD *)&Direction_X_Offsets.field_0 + 2 * (v37 & 7)); /*0x57685c*/
      LOWORD(aP1) = v13; /*0x57685f*/
      HIWORD(aP1) = v33 + *((_WORD *)&DataGlobal_89F68A + 2 * (v37 & 7)); /*0x576873*/
      LOWORD(v12) = v13; /*0x576878*/
      int v14 = SHIWORD(aP1) << 9; /*0x57687c*/
      bool v15 = v13 + v14 < 0; /*0x57687f*/
      int v16 = v13 + v14; /*0x57687f*/
      v33 = HIWORD(aP1); /*0x576881*/
  _DWORD *v17; // esi
      if ( v15 || v16 >= 0x40000 || (v17 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v16)) == 0 ) /*0x57689a*/
      {
        g_Map_GlobalCellIndex = aP1; /*0x57689c*/
        v17 = g_CellClassArray; /*0x5768a2*/
      }
      if ( (v17[80] & 0x400) == 0 ) /*0x5768b0*/
        break; /*0x5768b0*/
      LOBYTE(v10) = ++v34; /*0x5768b6*/
      if ( v34 >= 4 ) /*0x5768be*/
        return v10; /*0x5768be*/
    }
    int v18 = ((_BYTE)v37 - 4) & 7; /*0x5768d4*/
    v19 = HIWORD(aP1) + *((_WORD *)&DataGlobal_89F68A + 2 * v18); /*0x5768f9*/
    LOWORD(aP1) = *((_WORD *)&Direction_X_Offsets.field_0 + 2 * v18) /*0x5768fc*/
                + v13
                + *((_WORD *)&Direction_X_Offsets.field_0 + 2 * v18);
    HIWORD(aP1) = v19 + *((_WORD *)&DataGlobal_89F68A + 2 * v18); /*0x576908*/
    v11 = aP1; /*0x57690d*/
    v9 = v35; /*0x576911*/
  }
  v20 = v9[80]; /*0x576915*/
  v21 = (ObjectClass *)v11; /*0x576933*/
  aP1 = v11; /*0x57693a*/
  a3 = (ObjectClass *)dword_ABD470; /*0x576940*/
  v39 = dword_ABD474; /*0x57694b*/
  v22 = (v20 & 0x800) != 0 ? 6 : 0;
  v40 = dword_ABD478; /*0x576952*/
  v41 = dword_ABD47C; /*0x576956*/
  while ( 1 ) /*0x57695a*/
  {
  _DWORD *v26; // edx
    LOBYTE(v10) = BYTE2(aP1); /*0x57695a*/
    int v23 = SHIWORD(aP1) + (__int16)v21; /*0x576962*/
    if ( v23 <= g_Cell_PositionLUT /*0x576990*/
      || (__int16)v21 - SHIWORD(aP1) >= g_Cell_PositionLUT
      || SHIWORD(aP1) - (__int16)v21 >= g_Cell_PositionLUT
      || v23 > g_Cell_PositionLUT + 2 * g_CellPositionOffset )
    {
      return v10; /*0x576990*/
    }
    unsigned int v24 = (__int16)v21 + (SHIWORD(aP1) << 9); /*0x57699d*/
    if ( !*(_DWORD *)(this->q13C + 4 * v24) ) /*0x5769a9*/
      goto LABEL_49; /*0x5769a9*/
  _DWORD *v25; // eax
    if ( v24 < 0x40000 && (v25 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v24)) != 0 ) /*0x5769c5*/
    {
      v26 = v25; /*0x5769c7*/
    }
    else
    {
      g_Map_GlobalCellIndex = (IUnknown *)v21; /*0x5769cb*/
      v26 = g_CellClassArray; /*0x5769d1*/
    }
    int v27 = v26[14] - *(_DWORD *)&g_NetworkPlayerBuffer[79852] + 1; /*0x5769e7*/
    if ( (v27 == dword_ABC2B4 || v27 == *(_DWORD *)&g_NetworkPlayerBuffer[80628]) && *((_BYTE *)v26 + 282) == 8 ) /*0x5769fb*/
      break; /*0x5769fb*/
    if ( (v27 == g_TerrainSoundTable2 /*0x576a27*/
       || v27 == g_TerrainSoundTable2 + 3
       || v27 == g_TerrainSoundTable2 + 1
       || v27 == g_TerrainSoundTable2 + 2)
      && *((_BYTE *)v26 + 282) == 5 )
    {
      break; /*0x576a27*/
    }
    if ( (v27 == *(_DWORD *)&g_NetworkPlayerBuffer[81676] || v27 == *(_DWORD *)&g_NetworkPlayerBuffer[78084]) /*0x576a44*/
      && *((_BYTE *)v26 + 282) == 12 )
    {
      LOBYTE(v10) = CellClass::RecursiveCraterUpdate(this, (IUnknown *)&aP1, 4, (int *)&a3); /*0x576b26*/
      goto LABEL_51; /*0x576b26*/
    }
    if ( (v27 == *(_DWORD *)&g_NetworkPlayerBuffer[80364] /*0x576a6e*/
       || v27 == *(_DWORD *)&g_NetworkPlayerBuffer[80364] + 3
       || v27 == *(_DWORD *)&g_NetworkPlayerBuffer[80364] + 2
       || v27 == *(_DWORD *)&g_NetworkPlayerBuffer[80364] + 1)
      && *((_BYTE *)v26 + 282) == 7 )
    {
      LOBYTE(v10) = CellClass::RecursiveCraterUpdate(this, (IUnknown *)&aP1, 4, (int *)&a3); /*0x576b38*/
      if ( (_BYTE)v10 ) /*0x576b3f*/
      {
        v10 = (int)a3; /*0x576b41*/
        v29 = v39; /*0x576b4b*/
        v30 = v41; /*0x576b4f*/
        v31 = v40; /*0x576b55*/
        if ( a3 != (ObjectClass *)dword_ABD470 || v39 != dword_ABD474 || v40 != dword_ABD478 || v41 != dword_ABD47C ) /*0x576b71*/
          goto LABEL_64; /*0x576b71*/
      }
      return v10; /*0x576b71*/
    }
LABEL_49:
    int v28 = v22 & 7; /*0x576a74*/
    LOWORD(v36) = (_WORD)v21 + *((_WORD *)&Direction_X_Offsets.field_0 + 2 * v28); /*0x576a8f*/
    HIWORD(v36) = HIWORD(aP1) + *((_WORD *)&DataGlobal_89F68A + 2 * v28); /*0x576a99*/
    v21 = v36; /*0x576a9e*/
    aP1 = (IUnknown *)v36; /*0x576aa2*/
  }
  LOBYTE(v10) = CellClass::RecursiveCraterUpdate(this, (IUnknown *)&aP1, 2, (int *)&a3); /*0x576ab7*/
LABEL_51:
  if ( (_BYTE)v10 ) /*0x576abe*/
  {
    v10 = (int)a3; /*0x576ac4*/
    v29 = v39; /*0x576ace*/
    v30 = v41; /*0x576ad2*/
    v31 = v40; /*0x576ad8*/
    if ( a3 != (ObjectClass *)dword_ABD470 || v39 != dword_ABD474 || v40 != dword_ABD478 || v41 != dword_ABD47C ) /*0x576afc*/
LABEL_64:
      LOBYTE(v10) = Cell::CreateCrater(v10, v29, v31, v30, 0); /*0x576b73*/
  }
  return v10; /*0x5768c0*/
}
}
} // namespace gamemd

// 0x579620
namespace gamemd {
VectorClass * * Terrain::SelectTileType(Random * aP0, IUnknown * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  ObjectClass *v2; // eax
  Random *v3; // ebp
  int AdjacencyFlags; // ebx
  MouseClass *v6; // eax
  MouseClass *v9; // eax
  int v11; // edx
  unsigned int v12; // eax
  MouseClass *v13; // eax
  VectorClass *v14; // si
  unsigned int v15; // eax
  MouseClass *v16; // eax
  char v17; // al
  ObjectClass *v18; // ecx
  MouseClass *v20; // eax
  MouseClass *v23; // eax
  MouseClass *v26; // eax
  MouseClass *v29; // eax
  int v31; // eax
  __int16 v32; // cx
  __int16 v33; // dx
  MouseClass *Random_field_0x08_high; // [esp-10h] [ebp-34h]
  ObjectClass *v36; // [esp+10h] [ebp-14h]
  Random *Random_field_0x04; // [esp+14h] [ebp-10h] BYREF
  Random *v38; // [esp+1Ch] [ebp-8h] BYREF
  v2 = (ObjectClass *)Range_RandomInt(0, (MapClass *)5); /*0x579630*/
  v3 = aP0; /*0x579635*/
  v36 = v2; /*0x57963c*/
  AdjacencyFlags = Cell::GetAdjacencyFlags((MouseClass *)aP0); /*0x579645*/
  v38 = (Random *)AdjacencyFlags; /*0x57964e*/
  if ( (AdjacencyFlags & 0xA0) == 0xA0 ) /*0x579652*/
  {
    Random_field_0x04 = (Random *)v3[2].Random_field_0x04; /*0x57965b*/
    aP0 = Random_field_0x04 + 4096; /*0x57966b*/
    unsigned int v5 = (__int16)Random_field_0x04 + ((__int16)(HIWORD(Random_field_0x04) + 1) << 9); /*0x579679*/
    if ( v5 >= 0x40000 || (v6 = *(MouseClass **)(*(_DWORD *)&stru_87C374[13744] + 4 * v5)) == 0 ) /*0x57968f*/
    {
      g_Map_GlobalCellIndex = (IUnknown *)aP0; /*0x579695*/
      v6 = (MouseClass *)g_CellClassArray; /*0x57969a*/
    }
    VectorClass *v7 = Cell::GetAdjacencyFlags(v6); /*0x5796a7*/
    Random_field_0x04 = (Random *)v3[2].Random_field_0x04; /*0x5796ac*/
    HIWORD(aP0) = HIWORD(Random_field_0x04); /*0x5796b8*/
    LOWORD(aP0) = (_WORD)Random_field_0x04 + 1; /*0x5796bd*/
    unsigned int v8 = (__int16)((_WORD)Random_field_0x04 + 1) + (SHIWORD(Random_field_0x04) << 9); /*0x5796cb*/
    if ( v8 >= 0x40000 || (v9 = *(MouseClass **)(*(_DWORD *)&stru_87C374[13744] + 4 * v8)) == 0 ) /*0x5796e1*/
    {
      g_Map_GlobalCellIndex = (IUnknown *)aP0; /*0x5796e7*/
      v9 = (MouseClass *)g_CellClassArray; /*0x5796ec*/
    }
    char v10 = Cell::GetAdjacencyFlags(v9); /*0x5796f4*/
    if ( (v7 & 0x20) != 0 || v10 < 0 ) /*0x579704*/
    {
      v11 = 34; /*0x5797fc*/
      goto LABEL_82; /*0x579801*/
    }
    v11 = (int)v36 % 3 + 9; /*0x579716*/
    if ( (int)v36 % 3 != -10 ) /*0x57971c*/
      goto LABEL_81; /*0x57971c*/
    LOBYTE(AdjacencyFlags) = (_BYTE)v38; /*0x579722*/
  }
  else
  {
    if ( (AdjacencyFlags & 0x82) == 0x82 ) /*0x579811*/
    {
      v11 = 39; /*0x579813*/
      goto LABEL_82; /*0x579818*/
    }
    if ( (AdjacencyFlags & 0xA) == 0xA ) /*0x579824*/
    {
      v11 = 33; /*0x579826*/
      goto LABEL_82; /*0x57982b*/
    }
    if ( (AdjacencyFlags & 0x28) == 0x28 ) /*0x579838*/
    {
      v11 = 40; /*0x57983e*/
      goto LABEL_82; /*0x579843*/
    }
  }
  if ( (AdjacencyFlags & 2) == 0 ) /*0x579729*/
  {
    if ( (AdjacencyFlags & 0x20) != 0 ) /*0x57986f*/
    {
      v38 = (Random *)v3[2].Random_field_0x04; /*0x579878*/
      aP0 = v38 + 4096; /*0x579888*/
      unsigned int v19 = (__int16)v38 + ((__int16)(HIWORD(v38) + 1) << 9); /*0x579896*/
      if ( v19 >= 0x40000 || (v20 = *(MouseClass **)(*(_DWORD *)&stru_87C374[13744] + 4 * v19)) == 0 ) /*0x5798ac*/
      {
        g_Map_GlobalCellIndex = (IUnknown *)aP0; /*0x5798b2*/
        v20 = (MouseClass *)g_CellClassArray; /*0x5798b7*/
      }
      char v21 = Cell::GetAdjacencyFlags(v20); /*0x5798bf*/
      if ( (AdjacencyFlags & 0x10) == 0 || (AdjacencyFlags & 0xC) != 0 || (v21 & 0x28) == 0x28 ) /*0x5798d3*/
      {
        v11 = 18; /*0x5798f6*/
        goto LABEL_82; /*0x5798fb*/
      }
      v11 = (int)v36 % 3 + 15; /*0x5798e1*/
    }
    else if ( (AdjacencyFlags & 8) != 0 ) /*0x579903*/
    {
      v38 = (Random *)v3[2].Random_field_0x04; /*0x57990c*/
      HIWORD(aP0) = HIWORD(v38); /*0x579918*/
      LOWORD(aP0) = (_WORD)v38 + 1; /*0x57991d*/
      unsigned int v22 = (__int16)((_WORD)v38 + 1) + (SHIWORD(v38) << 9); /*0x57992b*/
      if ( v22 >= 0x40000 || (v23 = *(MouseClass **)(*(_DWORD *)&stru_87C374[13744] + 4 * v22)) == 0 ) /*0x579941*/
      {
        v23 = (MouseClass *)g_CellClassArray; /*0x579947*/
        g_Map_GlobalCellIndex = (IUnknown *)aP0; /*0x57994c*/
      }
      VectorClass *v24 = Cell::GetAdjacencyFlags(v23); /*0x57995a*/
      v38 = (Random *)v3[2].Random_field_0x04; /*0x57995f*/
      LOWORD(aP0) = (_WORD)v38 + 1; /*0x57996b*/
      HIWORD(aP0) = HIWORD(v38) + 1; /*0x579970*/
      unsigned int v25 = (__int16)((_WORD)v38 + 1) + ((__int16)(HIWORD(v38) + 1) << 9); /*0x57997e*/
      if ( v25 >= 0x40000 || (v26 = *(MouseClass **)(*(_DWORD *)&stru_87C374[13744] + 4 * v25)) == 0 ) /*0x579994*/
      {
        g_Map_GlobalCellIndex = (IUnknown *)aP0; /*0x57999a*/
        v26 = (MouseClass *)g_CellClassArray; /*0x57999f*/
      }
      char v27 = Cell::GetAdjacencyFlags(v26); /*0x5799a7*/
      if ( (AdjacencyFlags & 4) == 0 || (AdjacencyFlags & 3) != 0 || (v24 & 0xA) == 0xA ) /*0x5799be*/
      {
        if ( (AdjacencyFlags & 6) != 0 || (v27 & 8) != 0 || ((unsigned __int8)v36 & 1) == 0 ) /*0x5799e2*/
          v11 = 26; /*0x5799ee*/
        else
          v11 = 21; /*0x5799e4*/
        goto LABEL_82; /*0x5799e9*/
      }
      v11 = (int)v36 % 3 + 23; /*0x5799cc*/
    }
    else
    {
      if ( (AdjacencyFlags & 0x80u) == 0 ) /*0x5799fb*/
      {
        v18 = v36; /*0x579a7c*/
LABEL_73:
        if ( (AdjacencyFlags & 1) != 0 ) /*0x579a83*/
        {
          v11 = 2; /*0x579a85*/
          goto LABEL_82; /*0x579a8a*/
        }
        if ( (AdjacencyFlags & 4) != 0 ) /*0x579a8f*/
        {
          v11 = ((unsigned __int8)v18 & 1) + 29; /*0x579a97*/
        }
        else
        {
          if ( (AdjacencyFlags & 0x10) != 0 ) /*0x579a9e*/
          {
            v11 = 22; /*0x579aa0*/
            goto LABEL_82; /*0x579aa5*/
          }
          if ( (AdjacencyFlags & 0x40) == 0 ) /*0x579aaa*/
            return 1; /*0x579aaa*/
          v11 = (int)v18 % 3 + 12; /*0x579aba*/
        }
LABEL_81:
        if ( v11 <= 0 ) /*0x579abf*/
          return 1; /*0x579abf*/
        goto LABEL_82; /*0x579abf*/
      }
      v38 = (Random *)v3[2].Random_field_0x04; /*0x579a00*/
      HIWORD(aP0) = HIWORD(v38); /*0x579a0c*/
      LOWORD(aP0) = (_WORD)v38 + 1; /*0x579a11*/
      unsigned int v28 = (__int16)((_WORD)v38 + 1) + (SHIWORD(v38) << 9); /*0x579a1f*/
      if ( v28 >= 0x40000 || (v29 = *(MouseClass **)(*(_DWORD *)&stru_87C374[13744] + 4 * v28)) == 0 ) /*0x579a35*/
      {
        v29 = (MouseClass *)g_CellClassArray; /*0x579a3b*/
        g_Map_GlobalCellIndex = (IUnknown *)aP0; /*0x579a40*/
      }
      char v30 = Cell::GetAdjacencyFlags(v29); /*0x579a49*/
      if ( (AdjacencyFlags & 1) == 0 || (AdjacencyFlags & 6) != 0 || (v30 & 0x82) == 0x82 ) /*0x579a5f*/
      {
        v11 = 8; /*0x579a75*/
        goto LABEL_82; /*0x579a7a*/
      }
      v11 = (int)v36 % 3 + 5; /*0x579a6d*/
    }
    v18 = v36; /*0x5798e4*/
LABEL_44:
    if ( v11 != -1 ) /*0x5798eb*/
      goto LABEL_81; /*0x5798eb*/
    goto LABEL_73; /*0x5798eb*/
  }
  v38 = (Random *)v3[2].Random_field_0x04; /*0x579732*/
  aP0 = v38 + 4096; /*0x579742*/
  v12 = (__int16)v38 + ((__int16)(HIWORD(v38) + 1) << 9); /*0x579750*/
  if ( v12 >= 0x40000 || (v13 = *(MouseClass **)(*(_DWORD *)&stru_87C374[13744] + 4 * v12)) == 0 ) /*0x579766*/
  {
    g_Map_GlobalCellIndex = (IUnknown *)aP0; /*0x57976c*/
    v13 = (MouseClass *)g_CellClassArray; /*0x579771*/
  }
  v14 = Cell::GetAdjacencyFlags(v13); /*0x57977e*/
  v38 = (Random *)v3[2].Random_field_0x04; /*0x579783*/
  LOWORD(aP0) = (_WORD)v38 + 1; /*0x579791*/
  HIWORD(aP0) = HIWORD(v38) + 1; /*0x579796*/
  v15 = (__int16)((_WORD)v38 + 1) + ((__int16)(HIWORD(v38) + 1) << 9); /*0x5797a4*/
  if ( v15 >= 0x40000 || (v16 = *(MouseClass **)(*(_DWORD *)&stru_87C374[13744] + 4 * v15)) == 0 ) /*0x5797ba*/
  {
    g_Map_GlobalCellIndex = (IUnknown *)aP0; /*0x5797c0*/
    v16 = (MouseClass *)g_CellClassArray; /*0x5797c5*/
  }
  v17 = Cell::GetAdjacencyFlags(v16); /*0x5797cd*/
  if ( (AdjacencyFlags & 4) != 0 && (AdjacencyFlags & 0x18) == 0 && (v14 & 0xA) != 0xA ) /*0x5797e4*/
  {
    v18 = v36; /*0x5797e6*/
    v11 = (int)v36 % 3 + 35; /*0x5797f4*/
    goto LABEL_44; /*0x5797f7*/
  }
  if ( (AdjacencyFlags & 0xC) != 0 || (v17 & 2) != 0 || ((unsigned __int8)v36 & 1) == 0 ) /*0x579856*/
    v11 = 38; /*0x579862*/
  else
    v11 = 1; /*0x579858*/
LABEL_82:
  *(_DWORD *)&stru_87C374[17948] = *(_DWORD *)(*(_DWORD *)&HouseClass_Player[45024] /*0x579ac5*/
                                                        + 4 * (v11 + unk_AA1020)
                                                        - 4);
  v31 = v3[2].Random_field_0x04; /*0x579adb*/
  v32 = HIWORD(stru_ABDD6A.audioController[v11 + 2]); /*0x579ade*/
  v33 = stru_ABDD6A.audioController[v11 + 3]; /*0x579ae6*/
  LOWORD(aP0) = v31 + v32; /*0x579afa*/
  HIWORD(aP0) = HIWORD(v31) + v33; /*0x579aff*/
  v38 = aP0; /*0x579b17*/
  Tactical::MouseMove((int)&stru_87C374[13428], (MouseClass *)&Random_field_0x04, (MouseClass *)&v38); /*0x579b1b*/
  Random_field_0x08_high = (MouseClass *)SHIBYTE(v3[17].Random_field_0x08); /*0x579b33*/
  LOBYTE(aP0) = 1; /*0x579b3a*/
  return GenerateTerrainMap(0, 0, Random_field_0x08_high, (MouseClass *)aP1, (MouseClass *)&aP0, 0) || (_BYTE)aP0; /*0x579b4e*/
}
}
} // namespace gamemd

// 0x5A28C0
namespace gamemd {
void Terrain::PlaceTiberiumTrees(ScenarioClass * aP0, int a2, int a3, char a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  __int16 *v4; // ebx
  AbstractClass *v8; // esi
  int i; // eax
  int j; // eax
  Random *v16; // edi
  TerrainClass *v23; // ebx
  int k; // eax
  TerrainClass *v29; // edi
  unsigned __int8 v32; // al
  __int16 v35; // ax
  Random *v36; // ebx
  TerrainClass *v47; // edi
  TerrainClass *v49; // [esp+1Ch] [ebp-6Ch]
  void *Block; // [esp+24h] [ebp-64h]
  Random *v55; // [esp+34h] [ebp-54h]
  Random *v58; // [esp+40h] [ebp-48h]
  int Random_field_0x04; // [esp+44h] [ebp-44h]
  double v62; // [esp+50h] [ebp-38h]
  char Buffer[20]; // [esp+74h] [ebp-14h] BYREF

  v4 = 0; /*0x5a28cf*/
  int v53 = 0; /*0x5a28d4*/
  int v5 = 10 * a2; /*0x5a28d8*/
  void * v6 = (void *)__2_YAPAXI_Z(80 * a2); /*0x5a28e2*/
  if ( v6 ) /*0x5a28ec*/
  {
    Block = v6; /*0x5a28f1*/
    LODWORD(v62) = v5 - 1; /*0x5a28f5*/
  }
  else
  {
    Block = 0; /*0x5a28fb*/
  }
  int v7 = __2_YAPAXI_Z(0x14u); /*0x5a2901*/
  v8 = (AbstractClass *)v7; /*0x5a2906*/
  if ( v7 ) /*0x5a290d*/
  {
    *(_DWORD *)(v7 + 12) = 0; /*0x5a2916*/
    *(_DWORD *)(v7 + 16) = -1; /*0x5a291a*/
    *(_DWORD *)v7 = 0; /*0x5a2921*/
    *(_DWORD *)(v7 + 4) = v5; /*0x5a2923*/
    int v9 = __2_YAPAXI_Z(40 * a2 + 4); /*0x5a2926*/
    int v10 = *(_DWORD *)&v8->__pad_0[4]; /*0x5a292b*/
    *(_DWORD *)&v8->__pad_0[8] = v9; /*0x5a292e*/
    int v11 = 0; /*0x5a2934*/
    if ( v10 >= 0 ) /*0x5a2938*/
    {
      do /*0x5a2947*/
      {
        ++v11; /*0x5a293d*/
        *(_DWORD *)(*(_DWORD *)&v8->__pad_0[8] + 4 * v11 - 4) = 0; /*0x5a293e*/
      }
      while ( v11 <= *(_DWORD *)&v8->__pad_0[4] ); /*0x5a2947*/
    }
  }
  else
  {
    v8 = 0; /*0x5a294b*/
  }
  char v48 = 0; /*0x5a2957*/
  int v52 = aP0->nextScenario[0]; /*0x5a295e*/
  int v12 = 0; /*0x5a2965*/
  int v54 = 0; /*0x5a296a*/
  int v60 = a4 != 0 ? 27 : 102;
  bool v13 = *(int *)v8->__pad_0 < 0; /*0x5a2974*/
  v55 = 0; /*0x5a2976*/
  if ( !v13 ) /*0x5a297a*/
  {
    do /*0x5a2988*/
    {
      ++v12; /*0x5a297f*/
      *(_DWORD *)(*(_DWORD *)&v8->__pad_0[8] + 4 * v12 - 4) = 0; /*0x5a2980*/
    }
    while ( v12 <= *(_DWORD *)v8->__pad_0 ); /*0x5a2988*/
  }
  *(_DWORD *)v8->__pad_0 = 0; /*0x5a298d*/
  v49 = 0; /*0x5a2991*/
  if ( a2 <= 0 ) /*0x5a2995*/
    goto LABEL_72; /*0x5a2995*/
  while ( (int)v55 < 10 ) /*0x5a29a6*/
  {
    if ( v4 ) /*0x5a29b0*/
    {
      v16 = (Random *)Block; /*0x5a2b08*/
    }
    else
    {
      for ( i = 0; i <= *(_DWORD *)v8->__pad_0; *(_DWORD *)(*(_DWORD *)&v8->__pad_0[8] + 4 * i - 4) = 0 ) /*0x5a29bc*/
        ++i; /*0x5a29c1*/
      *(_DWORD *)v8->__pad_0 = 0; /*0x5a29d1*/
      LayerClass::CellIteratorReset(&stru_87C374[13428]); /*0x5a29d3*/
      for ( j = LayerClass::CellIteratorNext(&stru_87C374[13428]); /*0x5a29e4*/
            j;
            j = LayerClass::CellIteratorNext(&stru_87C374[13428]) )
      {
        v58 = *(Random **)(j + 36); /*0x5a29e9*/
        *((_DWORD *)g_MapTileArray + 20 * (__int16)v58 + 20 * unk_89C2DC * SHIWORD(v58) + 15) = 0; /*0x5a2a0a*/
      }
      v16 = (Random *)Block; /*0x5a2a1f*/
      v53 = 1; /*0x5a2a25*/
      *(_DWORD *)Block = aP0->nextScenario[0]; /*0x5a2a2f*/
      v16->Random_field_0x04 = 0; /*0x5a2a31*/
      *((_DWORD *)g_MapTileArray /*0x5a2a56*/
      + 20 * SLOWORD(aP0->nextScenario[0])
      + 20 * unk_89C2DC * SHIWORD(aP0->nextScenario[0])
      + 15) = a3;
      unsigned int v17 = *(_DWORD *)v8->__pad_0 + 1; /*0x5a2a5f*/
      Random_field_0x04 = v16->Random_field_0x04; /*0x5a2a62*/
      unsigned int v18 = v17 >> 1; /*0x5a2a69*/
      if ( v17 < *(_DWORD *)&v8->__pad_0[4] ) /*0x5a2a6d*/
      {
        if ( v17 > 1 ) /*0x5a2a72*/
        {
          do /*0x5a2a92*/
          {
            int v19 = *(_DWORD *)&v8->__pad_0[8]; /*0x5a2a74*/
            int v20 = *(_DWORD *)(v19 + 4 * v18); /*0x5a2a77*/
            if ( *(float *)(v20 + 4) <= (double)*(float *)&Random_field_0x04 ) /*0x5a2a86*/
              break; /*0x5a2a86*/
            *(_DWORD *)(v19 + 4 * v17) = v20; /*0x5a2a88*/
            v17 = v18; /*0x5a2a8b*/
            v18 >>= 1; /*0x5a2a8d*/
          }
          while ( v17 > 1 ); /*0x5a2a92*/
          v16 = (Random *)Block; /*0x5a2a94*/
        }
        *(_DWORD *)(*(_DWORD *)&v8->__pad_0[8] + 4 * v17) = v16; /*0x5a2a9b*/
        unsigned int v21 = *(_DWORD *)&v8->__pad_0[12]; /*0x5a2aa0*/
        ++*(_DWORD *)v8->__pad_0; /*0x5a2aa6*/
        if ( (unsigned int)v16 > v21 ) /*0x5a2aa8*/
          *(_DWORD *)&v8->__pad_0[12] = v16; /*0x5a2aaa*/
        if ( (unsigned int)v16 < v8->uniqueId ) /*0x5a2ab0*/
          v8->uniqueId = (int)v16; /*0x5a2ab2*/
      }
      if ( *(_DWORD *)v8->__pad_0 ) /*0x5a2ab5*/
      {
        int v22 = *(_DWORD *)&v8->__pad_0[8]; /*0x5a2ac1*/
        v23 = *(TerrainClass **)(v22 + 4); /*0x5a2ac9*/
        *(_DWORD *)(v22 + 4) = *(_DWORD *)(v22 + 4 * *(_DWORD *)v8->__pad_0); /*0x5a2acc*/
        *(_DWORD *)(*(_DWORD *)&v8->__pad_0[8] + 4 * (*(_DWORD *)v8->__pad_0)--) = 0; /*0x5a2ad4*/
        Heap::SiftDown((int *)v8->__pad_0, 1); /*0x5a2ae2*/
        v49 = v23; /*0x5a2ae7*/
      }
      else
      {
        v49 = 0; /*0x5a2abb*/
      }
      v4 = (__int16 *)v49; /*0x5a2af2*/
      int v24 = aP0->nextScenario[0]; /*0x5a2af7*/
      v48 = 0; /*0x5a2af9*/
      v55 = (Random *)((char *)v55 + 1); /*0x5a2afe*/
      v52 = v24; /*0x5a2b02*/
    }
    _DWORD * v25 = CellCoord::To_CellObj(&stru_87C374[13428], v4); /*0x5a2b17*/
    int v26 = *v4 + unk_89C2DC * v4[1]; /*0x5a2b27*/
    _DWORD * v50 = v25; /*0x5a2b2f*/
    if ( *((_BYTE *)g_MapTileArray + 80 * v26 + 69) ) /*0x5a2b39*/
      goto LABEL_49; /*0x5a2b3e*/
    if ( !v48 ) /*0x5a2b4a*/
    {
      v48 = 1; /*0x5a2b52*/
      v52 = *(_DWORD *)v4; /*0x5a2b57*/
      for ( k = 0; k <= *(_DWORD *)v8->__pad_0; *(_DWORD *)(*(_DWORD *)&v8->__pad_0[8] + 4 * k - 4) = 0 ) /*0x5a2b61*/
        ++k; /*0x5a2b66*/
      *(_DWORD *)v8->__pad_0 = 0; /*0x5a2b78*/
      v53 = 0; /*0x5a2b80*/
      if ( !a4 ) /*0x5a2b88*/
      {
  unsigned int v28; // eax
        do /*0x5a2bbc*/
        {
          __int64 v63 = (unsigned int)Random::State(&g_Randomizer); /*0x5a2b98*/
          v28 = Math::RoundToInt((double)v63 * 6.984919311242392e-10 + 1.0); /*0x5a2bb4*/
        }
        while ( v28 > 3 ); /*0x5a2bbc*/
        sprintf(Buffer, &stru_82C090, (INIClass *)((int)v28 % 10)); /*0x5a2bd1*/
        v29 = (TerrainClass *)__2_YAPAXI_Z(0xE0u); /*0x5a2be0*/
        if ( v29 ) /*0x5a2be7*/
        {
          int v30 = Terrain::LookupByName(Buffer); /*0x5a2bed*/
          TerrainClass::Construct( /*0x5a2c05*/
            (void **)v29,
            *(TerrainTypeClass **)(*(_DWORD *)&HouseClass_Player[42448] + 4 * v30),
            (TerrainClass *)&v52);
        }
        v16 = (Random *)Block; /*0x5a2c0a*/
        v25 = v50; /*0x5a2c0e*/
      }
    }
    if ( v25[17] == -1 ) /*0x5a2c16*/
    {
  unsigned int v31; // eax
      do /*0x5a2c40*/
      {
        __int64 v64 = (unsigned int)Random::State(&g_Randomizer); /*0x5a2c22*/
        v31 = Math::RoundToInt((double)v64 * 0.000000002793967724496957); /*0x5a2c38*/
      }
      while ( v31 > 0xB ); /*0x5a2c40*/
      v50[17] = v60 + v31; /*0x5a2c4c*/
      goto LABEL_48; /*0x5a2c4f*/
    }
    v32 = *((_BYTE *)v25 + 286); /*0x5a2c51*/
    if ( v32 < 0xBu ) /*0x5a2c59*/
    {
      *((_BYTE *)v25 + 286) = v32 + 1; /*0x5a2c5d*/
LABEL_48:
      ++v54; /*0x5a2c63*/
    }
LABEL_49:
    int v56 = 0; /*0x5a2c67*/
    float * v33 = (float *)&v16->__pad_0[8 * v53]; /*0x5a2c73*/
    do /*0x5a2e54*/
    {
      int v34 = v56 & 7; /*0x5a2c7c*/
      v35 = v4[1] + *(_WORD *)&stru_89E138[5296][4 * v34 + 162]; /*0x5a2c95*/
  _DWORD *v57; // [esp+3Ch] [ebp-4Ch]
      LOWORD(v57) = *v4 + *(_WORD *)&stru_89E138[5296][4 * v34 + 160]; /*0x5a2c99*/
      HIWORD(v57) = v35; /*0x5a2ca2*/
      v50 = v57; /*0x5a2cab*/
      if ( !LayerClass::IsWithinUsableArea(&stru_87C374[13428], (IUnknown *)&v50, (TechnoClass *)1) ) /*0x5a2cbc*/
        goto LABEL_67; /*0x5a2cbc*/
      v36 = (Random *)CellCoord::To_CellObj(&stru_87C374[13428], (__int16 *)&v50); /*0x5a2cd1*/
      v58 = v36; /*0x5a2cd5*/
      if ( Cell::IsEmpty(v36) ) /*0x5a2cd9*/
      {
  _DWORD *v37; // ecx
        if ( v36[4].Random_field_0x04 == -1 ) /*0x5a2cea*/
        {
          v37 = v50; /*0x5a2cf8*/
          if ( *((_DWORD *)g_MapTileArray + 20 * (__int16)v50 + 20 * unk_89C2DC * SHIWORD(v50) + 15) != a3 ) /*0x5a2d14*/
            goto LABEL_58; /*0x5a2d14*/
          v36 = v58; /*0x5a2d16*/
        }
        if ( BYTE2(v36[17].Random_field_0x0C) < 0xBu && BuildingClass::FindByCellHash(v36) != -1 ) /*0x5a2d31*/
        {
          v37 = v50; /*0x5a2d37*/
LABEL_58:
          int v38 = SHIWORD(v50); /*0x5a2d3b*/
          *(_DWORD *)v33 = v37; /*0x5a2d40*/
          v58 = (Random *)(((__int16)v52 - (__int16)v37) * ((__int16)v52 - (__int16)v37) /*0x5a2d62*/
                         + (SHIWORD(v52) - v38) * (SHIWORD(v52) - v38));
          v62 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64((double)(int)v58)); /*0x5a2d72*/
          __int64 v65 = (unsigned int)Random::State(&g_Randomizer); /*0x5a2d83*/
          int v39 = SHIWORD(v50); /*0x5a2d93*/
          int v40 = (__int16)v50; /*0x5a2d9e*/
          VectorClass *v41 = (unsigned int)v33; /*0x5a2da9*/
          v33 += 2; /*0x5a2dab*/
          v58 = (Random *)v41; /*0x5a2dae*/
          *(v33 - 1) = (double)v65 * 5.0 * 2.328306437080797e-10 + v62; /*0x5a2db6*/
          *((_DWORD *)g_MapTileArray + 20 * v40 + 20 * unk_89C2DC * v39 + 15) = a3; /*0x5a2dd1*/
          float v42 = v41->Items; /*0x5a2dd9*/
          ++v53; /*0x5a2ddd*/
          unsigned int v43 = *(_DWORD *)v8->__pad_0 + 1; /*0x5a2de3*/
          float v61 = v42; /*0x5a2de4*/
          unsigned int v44 = v43 >> 1; /*0x5a2ded*/
          if ( v43 < *(_DWORD *)&v8->__pad_0[4] ) /*0x5a2df1*/
          {
            for ( ; v43 > 1; v44 >>= 1 ) /*0x5a2df6*/
            {
              LODWORD(v62) = *(_DWORD *)(*(_DWORD *)&v8->__pad_0[8] + 4 * v44); /*0x5a2dfe*/
              if ( *(float *)(LODWORD(v62) + 4) <= (double)v61 ) /*0x5a2e0e*/
                break; /*0x5a2e0e*/
              *(_DWORD *)(*(_DWORD *)&v8->__pad_0[8] + 4 * v43) = LODWORD(v62); /*0x5a2e17*/
              v41 = (unsigned int)v58; /*0x5a2e1a*/
              v43 = v44; /*0x5a2e1e*/
            }
            *(_DWORD *)(*(_DWORD *)&v8->__pad_0[8] + 4 * v43) = v41; /*0x5a2e2a*/
            unsigned int v45 = *(_DWORD *)&v8->__pad_0[12]; /*0x5a2e2f*/
            ++*(_DWORD *)v8->__pad_0; /*0x5a2e35*/
            if ( v41 > v45 ) /*0x5a2e37*/
              *(_DWORD *)&v8->__pad_0[12] = v41; /*0x5a2e39*/
            if ( v41 < v8->uniqueId ) /*0x5a2e3f*/
              v8->uniqueId = v41; /*0x5a2e41*/
          }
        }
      }
      v4 = (__int16 *)v49; /*0x5a2e44*/
LABEL_67:
      ++v56; /*0x5a2e48*/
    }
    while ( v56 < 8 ); /*0x5a2e54*/
    if ( *(_DWORD *)v8->__pad_0 ) /*0x5a2e5a*/
    {
      int v46 = *(_DWORD *)&v8->__pad_0[8]; /*0x5a2e66*/
      v47 = *(TerrainClass **)(v46 + 4); /*0x5a2e6e*/
      *(_DWORD *)(v46 + 4) = *(_DWORD *)(v46 + 4 * *(_DWORD *)v8->__pad_0); /*0x5a2e71*/
      *(_DWORD *)(*(_DWORD *)&v8->__pad_0[8] + 4 * (*(_DWORD *)v8->__pad_0)--) = 0; /*0x5a2e79*/
      Heap::SiftDown((int *)v8->__pad_0, 1); /*0x5a2e87*/
      v49 = v47; /*0x5a2e8c*/
    }
    else
    {
      v49 = 0; /*0x5a2e60*/
    }
    if ( v54 < a2 ) /*0x5a2e99*/
    {
      v4 = (__int16 *)v49; /*0x5a299d*/
      continue; /*0x5a299d*/
    }
    break;
  }
LABEL_72:
  __3_YAXPAX_Z(Block); /*0x5a2e9f*/
  if ( v8 ) /*0x5a2eae*/
  {
    __3_YAXPAX_Z(*(void **)&v8->__pad_0[8]); /*0x5a2eb4*/
    __3_YAXPAX_Z(v8); /*0x5a2eba*/
  }
}
}
} // namespace gamemd

// 0x6D6410
namespace gamemd {
unsigned int * Terrain::ClimbCheck(AbstractClass * aP0, AbstractClass * aP1)
{
{
    int v2;
    IUnknown *v3;
    IUnknown *v4;
    bool v5;
    int v6;
    int v7;
    int *v8;
    int v9;
    int v10;
    TechnoClass *v12;
    TechnoClass *v13;
    int v14;
    int v15;
    v2 = *(int *)aP1->__pad_0 / 256;
    HIWORD(aP1) = *(int *)&aP1->__pad_0[4] / 256;
    LOWORD(aP1) = v2;
    v3 = (IUnknown *)(((short)v2 << 8) + 128);
    v4 = (IUnknown *)((SHIWORD(aP1) << 8) + 128);
    v5 = (*((int *)CellCoord::To_CellObj(&DataGlobal_87C374[13428], (short *)&aP1) + 80) & 0x1000) != 0;
    v6 = (int)&v4->__pad_524[220];
    v14 = *((char *)CellCoord::To_CellObj(&DataGlobal_87C374[13428], (short *)&aP1) + 283);
    v7 = (int)&v3->__pad_524[220];
    v15 = 0;
    while ( 1 )
  {
    v7 -= 8;
    v6 -= 8;
    LOWORD(v13) = v7 / 256;
    HIWORD(v13) = v6 / 256;
    v12 = v13;
    v8 = CellCoord::To_CellObj(&DataGlobal_87C374[13428], (short *)&v12);
    v9 = *((char *)(v8) + 283) - v14;
    if ( v5 )
    v9 += 4 * ((v8[80] >> 8) & 1);
    v10 = v9 << 7;
    if ( (short)((v7 - v10) / 256) <= (short)aP1 && (short)((v6 - v10) / 256) <= SHIWORD(aP1) )
    break;
    if ( v12 == (TechnoClass *)aP1 )
    {
    *(int *)aP0->__pad_0 = aP1;
    return aP0->__pad_0;
    }
  }
    *(int *)aP0->__pad_0 = v12;
    return aP0->__pad_0;
}
}
} // namespace gamemd

// 0x71DD80
namespace gamemd {
int Terrain::LookupByName()
{
{
    int v2;
    if ( !this )
    return -1;
    v2 = 0;
    if ( *(int *)&HouseClass_Player[42460] <= 0 )
    return -1;
    while ( _strcmpi(this, (const void *)(*(int *)(*(int *)&HouseClass_Player[42448] + 4 * v2) + 36)) )
  {
    if ( ++v2 >= *(int *)&HouseClass_Player[42460] )
    return -1;
  }
    return v2;
}
}
} // namespace gamemd
