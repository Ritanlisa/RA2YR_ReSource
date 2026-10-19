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
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/TeamClass_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/TerrainTypeClass_e4.hpp"
#include "e4/classes/Territory_WorldDominationTour_8_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/E4Recv_7714B0_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/TemporalClass_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/CampaignClass_e4.hpp"
// [w14e3] fn vocab supply (g57b5-W5 variadic convention); evidence: raw_decomp entries
namespace gamemd {
int InvalidateTileRegionMap(int16_t* p0);  // x4:signals@0x56db70
} // namespace gamemd
// [w14e3] _VectorClass_VCell supply: flat carrier (raw decl "_VectorClass_VCell vNN;" e.g. Terrain::PlaceCliffs 0x568E40;
// usage: *(unsigned int*)v.q000 = ptr_0 -> 4-byte pad carrier, e4 minimal flat pattern (223 precedents)
namespace gamemd {
struct _VectorClass_VCell {
  char q000[1];        // 0x0 (ptr_0 carrier, dword-wide via cast; W16G3 raw vocab)
  char m_1[7];            // 0x1..0x7 (raw usage &x.m_1[3] = Items @0x4)
  int m_8;                // 0x8 Capacity
  char m_C[2];            // 0xC..0xD IsInitialized/IsAllocated
  char __pad_E[2];        // 0xE..0xF
  char __tail_10[4];      // 0x10 Count
};
} // namespace gamemd


// 0x48B720
namespace gamemd {  // G42.18 ns repair
int Terrain::GetTileIndex(int a2)
{
  return (*((unsigned int *)this->q024 + 9 * *((unsigned int *)this->q030 + a2)) & 1) != 0
  ? (int)this->q024 + 36 * *((unsigned int *)this->q030 + a2)
  : 0;
}
}  // G42.18 ns repair
// 0x48B9E0
namespace gamemd {
int Terrain::GetTileType(int aP1)
{
  return (*((unsigned int *)this->q034 + 6 * *((unsigned int *)this->q040 + aP1)) & 1) != 0
  ? (int)this->q034 + 24 * *((unsigned int *)this->q040 + aP1)
  : 0;
}
}
// 0x568E40
namespace gamemd {
void Terrain::PlaceCliffs(int a2, int a3, int *aP3)
{

  unsigned int v5; // eax
  CellClass *v6; // eax
  int v7; // edi
  int v8; // ebp
  int v9; // eax
  bool v10; // sf
  int v11; // eax
  CellClass *v12; // eax
  int v13; // esi
  char v14; // al
  unsigned int v15; // eax
  CellClass *v16; // eax
  int v17; // ecx
  unsigned int v18; // eax
  CellClass *v19; // eax
  int v20; // ecx
  unsigned int v21; // eax
  CellClass *v22; // eax
  int v23; // edi
  int m_8; // eax
  int v25; // esi
  int v26; // eax
  char v27; // al
  unsigned int v28; // eax
  CellClass *v29; // eax
  int v30; // ecx
  unsigned int v31; // eax
  CellClass *v32; // eax
  int v33; // ecx
  unsigned int v34; // eax
  CellClass *v35; // eax
  int v36; // edi
  int v37; // eax
  int v38; // esi
  int v39; // eax
  char v40; // al
  unsigned int v42; // eax
  CellClass *v43; // eax
  CellClass *v44; // esi
  int *v45; // ebp
  int v46; // ecx
  int v47; // edx
  int v48; // edi
  int v49; // eax
  Object *v50; // eax
  Object *v51; // eax
  int v52; // eax
  int v53; // eax
  CellClass *v54; // eax
  unsigned int v55; // edx
  CellClass *v56; // edx
  int v57; // eax
  int v58; // edx
  int v59; // ecx
  int v60; // esi
  int v61; // edi
  int v62; // esi
  char v63; // [esp+13h] [ebp-61h]
  CellClass *v64; // [esp+14h] [ebp-60h]
  int smudgeTypeIndex; // [esp+14h] [ebp-60h]
  int i; // [esp+18h] [ebp-5Ch]
  unsigned __int16 *v67; // [esp+1Ch] [ebp-58h]
  unsigned __int16 *v68; // [esp+20h] [ebp-54h]
  unsigned __int16 *v69; // [esp+24h] [ebp-50h]
  int v70; // [esp+24h] [ebp-50h]
  __int16 v71[2]; // [esp+30h] [ebp-44h] BYREF
  int v72; // [esp+34h] [ebp-40h] BYREF
  int v73; // [esp+38h] [ebp-3Ch] BYREF
  int v74; // [esp+3Ch] [ebp-38h] BYREF
  int v75; // [esp+40h] [ebp-34h] BYREF
  int v76; // [esp+44h] [ebp-30h]
  __int16 v77[4]; // [esp+48h] [ebp-2Ch] BYREF
  int v78; // [esp+50h] [ebp-24h] BYREF
  int v79; // [esp+54h] [ebp-20h]
  int v80; // [esp+58h] [ebp-1Ch]
  _VectorClass_VCell v81; // [esp+5Ch] [ebp-18h] BYREF
  int v82; // [esp+70h] [ebp-4h]
  int v83; // [esp+78h] [ebp+4h]
  unsigned __int16 *v84; // [esp+78h] [ebp+4h]

  *(unsigned int *)v77 = dword_ABD480; /*0x568e4b*/
  v5 = (__int16)a2->q024 + ((__int16)HIWORD(a2->q024) << 9); /*0x568e6c*/
  if ( v5 < 0x40000 && (v6 = *(CellClass **)(dword_87F924 + 4 * v5)) != 0 ) /*0x568e82*/
  {
    v64 = v6; /*0x568e84*/
  }
  else
  {
    dword_ABDC74 = a2->q024; /*0x568e8a*/
    v64 = &unk_ABDC50; /*0x568e90*/
  }
  v63 = 0; /*0x568ea0*/
  VectorClass::CellConstructor((VectorClass *)&v81, 0, 0); /*0x568ea5*/
  v7 = g_TerrainSoundTable2; /*0x568eae*/
  v8 = g_TerrainSoundConfig; /*0x568eb4*/
  /* X11: vtable install elided (X67 star-deref, RHS vt_DynamicVectorClass_Cell) */  /*0x568ebd*/
  v82 = 10; /*0x568ec5*/
  *(unsigned int *)v81.__tail_10 = 0; /*0x568ed4*/
  for ( i = 1; i < 30; ++i ) /*0x568edc*/
  {
    smudgeTypeIndex = v64->smudgeTypeIndex; /*0x568ef3*/
    LOWORD(v67) = LOWORD(dword_89F688[a3 & 7]) + smudgeTypeIndex; /*0x568f06*/
    HIWORD(v67) = HIWORD(dword_89F688[a3 & 7]) + (((smudgeTypeIndex) >> 16) & 0xFFFF); /*0x568f0e*/
    v9 = SHIWORD(v67) << 9; /*0x568f1a*/
    v10 = (__int16)v67 + v9 < 0; /*0x568f1d*/
    v11 = (__int16)v67 + v9; /*0x568f1d*/
    *(unsigned int *)v77 = v67; /*0x568f1f*/
    if ( v10 || v11 >= 0x40000 || (v12 = *(CellClass **)(dword_87F924 + 4 * v11)) == 0 ) /*0x568f37*/
    {
      dword_ABDC74 = (int)v67; /*0x568f3f*/
      v64 = &unk_ABDC50; /*0x568f45*/
    }
    else
    {
      v64 = v12; /*0x568f39*/
    }
    v13 = *(unsigned int *)&v64->__pad_28[16] - g_Cell_BuildabilityLUT + 1; /*0x568f60*/
    if ( a3 == 2 ) /*0x568f64*/
    {
      if ( v13 != dword_ABC1E8 || v64->height[0] != 4 ) /*0x568f79*/
      {
        if ( v13 != dword_AA0E38 || v64->height[0] != 4 ) /*0x568f8e*/
        {
          if ( v13 != v7 && v13 != v7 + 3 && v13 != v7 + 4 && v13 != v7 + 1 && v13 != v7 + 2 || v64->height[0] != 4 ) /*0x568fbf*/
            continue; /*0x568fbf*/
          Cell::SetTileType(v77, v7 + g_Cell_BuildabilityLUT - 1, -1, -1, 0); /*0x568fdd*/
          v14 = InvalidateTileRegionMap((ObjectClass *)this, v77); /*0x568fe9*/
          v7 = g_TerrainSoundTable2; /*0x568fee*/
          v63 |= v14; /*0x568ffd*/
          if ( v13 != g_TerrainSoundTable2 + 4 ) /*0x569003*/
            goto LABEL_44; /*0x569003*/
          v15 = v77[0] + (v77[1] << 9); /*0x569018*/
          if ( v15 >= 0x40000 || (v16 = *(CellClass **)(dword_87F924 + 4 * v15)) == 0 ) /*0x56902e*/
          {
            dword_ABDC74 = *(unsigned int *)v77; /*0x569030*/
            v16 = &unk_ABDC50; /*0x569036*/
          }
          v16->level[0] += 4; /*0x569049*/
          v17 = *CellStruct::Add((CellStruct *)v77, &v72, dword_89F688); /*0x56905d*/
          *(unsigned int *)v71 = v17; /*0x56905f*/
          v18 = (__int16)v17 + ((short)(((v17) >> 16) & 0xFFFF) << 9); /*0x56906e*/
          if ( v18 >= 0x40000 || (v19 = *(CellClass **)(dword_87F924 + 4 * v18)) == 0 ) /*0x569084*/
          {
            dword_ABDC74 = v17; /*0x569086*/
            v19 = &unk_ABDC50; /*0x56908c*/
          }
          v19->level[0] += 4; /*0x56909f*/
          v20 = *CellStruct::Add((CellStruct *)v77, &v73, &dword_89F698); /*0x5690b3*/
          *(unsigned int *)v71 = v20; /*0x5690b5*/
          v21 = (__int16)v20 + ((short)(((v20) >> 16) & 0xFFFF) << 9); /*0x5690c4*/
          if ( v21 >= 0x40000 || (v22 = *(CellClass **)(dword_87F924 + 4 * v21)) == 0 ) /*0x5690da*/
          {
            dword_ABDC74 = v20; /*0x5690dc*/
            v22 = &unk_ABDC50; /*0x5690e2*/
          }
          v23 = 0; /*0x5690f0*/
          v22->level[0] += 4; /*0x5690f2*/
          m_8 = v81.m_8; /*0x5690f8*/
LABEL_33:
          v25 = -2; /*0x5690fc*/
          while ( 1 ) /*0x56910e*/
          {
            LOWORD(v68) = v23 + v77[0]; /*0x56910e*/
            HIWORD(v68) = v25 + v77[1]; /*0x569113*/
            if ( *(int *)v81.__tail_10 < m_8 ) /*0x56911e*/
              goto LABEL_39; /*0x56911e*/
            if ( !BYTE1(v81.m_C) && m_8 || v82 <= 0 ) /*0x569132*/
              goto LABEL_41; /*0x569132*/
            if ( (*(unsigned __int8 (**)(_VectorClass_VCell *, int, unsigned int))(*(unsigned int *)v81.__pad_0 + 8))( /*0x569141*/
                   &v81,
                   v82 + m_8,
                   0) )
            {
LABEL_39:
              v26 = (*(unsigned int *)v81.__tail_10)++; /*0x569150*/
              *(unsigned int *)(*(unsigned int *)&v81.u16_4 + 4 * v26) = v68; /*0x56915b*/
            }
            m_8 = v81.m_8; /*0x56915e*/
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
        *(unsigned int *)v71 = *CellStruct::Add((CellStruct *)v77, &v75, &dword_89F6A0); /*0x5693fc*/
        v40 = InvalidateTileRegionMap((ObjectClass *)this, v71); /*0x569401*/
LABEL_86:
        v63 |= v40; /*0x569468*/
        break; /*0x569468*/
      }
      Cell::UpdateTileType(v77, 0, 0); /*0x5693ac*/
      *(unsigned int *)v71 = *CellStruct::Add((CellStruct *)v77, &v75, &dword_89F6A0); /*0x5693ca*/
LABEL_85:
      v40 = InvalidateTileRegionMap((ObjectClass *)this, v71); /*0x569460*/
      goto LABEL_86; /*0x569463*/
    }
    if ( a3 != 4 ) /*0x569194*/
      continue; /*0x569194*/
    if ( v13 == dword_ABC1D0 && v64->height[0] == 2 ) /*0x5691a5*/
    {
      Cell::UpdateTileType(v77, 0, 0); /*0x56940e*/
      *(unsigned int *)v71 = *CellStruct::Add((CellStruct *)v77, &v75, dword_89F688); /*0x56942c*/
      v40 = InvalidateTileRegionMap((ObjectClass *)this, v71); /*0x569431*/
      goto LABEL_86; /*0x569431*/
    }
    if ( v13 == dword_AA1540 && v64->height[0] == 2 ) /*0x5691ba*/
    {
      Cell::UpdateTileType(v77, 0, 0); /*0x56943e*/
      *(unsigned int *)v71 = *CellStruct::Add((CellStruct *)v77, &v75, dword_89F688); /*0x56945c*/
      goto LABEL_85; /*0x56945c*/
    }
    if ( v13 != v8 && v13 != v8 + 3 && v13 != v8 + 4 && v13 != v8 + 2 && v13 != v8 + 1 || v64->height[0] != 2 ) /*0x5691e7*/
      continue; /*0x5691e7*/
    Cell::SetTileType(v77, g_Cell_BuildabilityLUT + v8 - 1, -1, -1, 0); /*0x569200*/
    v27 = InvalidateTileRegionMap((ObjectClass *)this, v77); /*0x56920c*/
    v8 = g_TerrainSoundConfig; /*0x569215*/
    v63 |= v27; /*0x56921d*/
    if ( v13 != g_TerrainSoundConfig + 4 ) /*0x569226*/
    {
      v7 = g_TerrainSoundTable2; /*0x569396*/
      continue; /*0x56939c*/
    }
    v28 = v77[0] + (v77[1] << 9); /*0x56923b*/
    if ( v28 >= 0x40000 || (v29 = *(CellClass **)(dword_87F924 + 4 * v28)) == 0 ) /*0x569251*/
    {
      dword_ABDC74 = *(unsigned int *)v77; /*0x569253*/
      v29 = &unk_ABDC50; /*0x569259*/
    }
    v29->level[0] += 4; /*0x56926c*/
    v30 = *CellStruct::Add((CellStruct *)v77, &v74, &dword_89F690); /*0x569280*/
    *(unsigned int *)v71 = v30; /*0x569282*/
    v31 = (__int16)v30 + ((short)(((v30) >> 16) & 0xFFFF) << 9); /*0x569291*/
    if ( v31 >= 0x40000 || (v32 = *(CellClass **)(dword_87F924 + 4 * v31)) == 0 ) /*0x5692a7*/
    {
      dword_ABDC74 = v30; /*0x5692a9*/
      v32 = &unk_ABDC50; /*0x5692af*/
    }
    v32->level[0] += 4; /*0x5692c2*/
    v33 = *CellStruct::Add((CellStruct *)v77, &v75, &dword_89F6A0); /*0x5692d6*/
    *(unsigned int *)v71 = v33; /*0x5692d8*/
    v34 = (__int16)v33 + ((short)(((v33) >> 16) & 0xFFFF) << 9); /*0x5692e7*/
    if ( v34 >= 0x40000 || (v35 = *(CellClass **)(dword_87F924 + 4 * v34)) == 0 ) /*0x5692fd*/
    {
      dword_ABDC74 = v33; /*0x5692ff*/
      v35 = &unk_ABDC50; /*0x569305*/
    }
    v36 = 0; /*0x569313*/
    v35->level[0] += 4; /*0x569315*/
    v37 = v81.m_8; /*0x56931b*/
    do /*0x56938f*/
    {
      v38 = -2; /*0x56931f*/
      do /*0x569389*/
      {
        LOWORD(v69) = v38 + v77[0]; /*0x569331*/
        HIWORD(v69) = v36 + v77[1]; /*0x569336*/
        if ( *(int *)v81.__tail_10 < v37 ) /*0x569341*/
          goto LABEL_75; /*0x569341*/
        if ( (BYTE1(v81.m_C) || !v37) && v82 > 0 ) /*0x569355*/
        {
          if ( (*(unsigned __int8 (**)(_VectorClass_VCell *, int, unsigned int))(*(unsigned int *)v81.__pad_0 + 8))( /*0x569364*/
                 &v81,
                 v82 + v37,
                 0) )
          {
LABEL_75:
            v39 = (*(unsigned int *)v81.__tail_10)++; /*0x56936b*/
            *(unsigned int *)(*(unsigned int *)&v81.u16_4 + 4 * v39) = v69; /*0x56937e*/
          }
          v37 = v81.m_8; /*0x569381*/
        }
        ++v38; /*0x569385*/
      }
      while ( v38 < 3 ); /*0x569389*/
      ++v36; /*0x56938b*/
    }
    while ( v36 < 2 ); /*0x56938f*/
LABEL_43:
    v7 = g_TerrainSoundTable2; /*0x56916e*/
LABEL_44:
    v8 = g_TerrainSoundConfig; /*0x569174*/
  }
  if ( i == 30 ) /*0x569473*/
  {
    /* X11: vtable install elided (X67 star-deref, RHS vt_VectorClass_Cell) */  /*0x569479*/
    Buffer::Cleanup(&v81); /*0x569481*/
  }
  else
  {
    v42 = (__int16)a2->q024 + ((__int16)HIWORD(a2->q024) << 9); /*0x5694a6*/
    if ( v42 < 0x40000 && (v43 = *(CellClass **)(dword_87F924 + 4 * v42)) != 0 ) /*0x5694bc*/
    {
      v44 = v43; /*0x5694be*/
    }
    else
    {
      dword_ABDC74 = a2->q024; /*0x5694c2*/
      v44 = &unk_ABDC50; /*0x5694c8*/
    }
    v45 = aP3; /*0x5694cd*/
    if ( aP3 ) /*0x5694d6*/
    {
      v83 = a2->q024; /*0x5694e7*/
      v78 = ((__int16)a2->q024 << 8) + 128; /*0x5694f0*/
      v46 = dword_ABDE88 * a2->u8_11B; /*0x5694fb*/
      v79 = ((short)(((v83) >> 16) & 0xFFFF) << 8) + 128; /*0x56950e*/
      v80 = v46; /*0x569516*/
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v78, &v75); /*0x569522*/
      v47 = v76; /*0x56952b*/
      *v45 = v75; /*0x56952f*/
      v45->ptr_2 = v47; /*0x569532*/
    }
    if ( i > 0 ) /*0x569537*/
    {
      v48 = i; /*0x56953d*/
      do /*0x569633*/
      {
        v49 = *(unsigned int *)&v44->__pad_28[16] - g_Cell_BuildabilityLUT + 1; /*0x569554*/
        if ( (v49 != g_TerrainSoundTable2 || (v44->height[0] & 1) != 0) /*0x569570*/
          && (v49 != g_TerrainSoundConfig || v44->height[0] >= 5u) )
        {
          if ( a3 == 2 ) /*0x56957e*/
          {
            v50 = (Object *)__2_YAPAXI_Z(0xB0u); /*0x569580*/
            if ( v50 ) /*0x56958a*/
            {
              aP3 = (int *)v44->smudgeTypeIndex; /*0x569596*/
              Object::SpawnAtCell( /*0x5695a9*/
                v50,
                *(unsigned int *)(*(int *)((char *)&stru_A83CD9.lineTrailer + 3) + 96),
                (__int16 *)&aP3,
                -1);
            }
          }
          else
          {
            v51 = (Object *)__2_YAPAXI_Z(0xB0u); /*0x5695ab*/
            if ( v51 ) /*0x5695b5*/
            {
              *(unsigned int *)v71 = v44->smudgeTypeIndex; /*0x5695be*/
              Object::SpawnAtCell(v51, *(unsigned int *)(*(int *)((char *)&stru_A83CD9.lineTrailer + 3) + 100), v71, -1); /*0x5695d1*/
            }
          }
        }
        v70 = v44->smudgeTypeIndex; /*0x5695dd*/
        LOWORD(v84) = LOWORD(dword_89F688[a3 & 7]) + v70; /*0x5695f0*/
        HIWORD(v84) = HIWORD(dword_89F688[a3 & 7]) + (((v70) >> 16) & 0xFFFF); /*0x5695f8*/
        v52 = SHIWORD(v84) << 9; /*0x569604*/
        v10 = (__int16)v84 + v52 < 0; /*0x569607*/
        v53 = (__int16)v84 + v52; /*0x569607*/
        *(unsigned int *)v77 = v84; /*0x569609*/
        if ( v10 || v53 >= 0x40000 || (v54 = *(CellClass **)(dword_87F924 + 4 * v53)) == 0 ) /*0x569621*/
        {
          dword_ABDC74 = (int)v84; /*0x569627*/
          v44 = &unk_ABDC50; /*0x56962d*/
        }
        else
        {
          v44 = v54; /*0x569623*/
        }
        --v48; /*0x569632*/
      }
      while ( v48 ); /*0x569633*/
    }
    if ( v45 ) /*0x56963b*/
    {
      v55 = v77[0] + (v77[1] << 9); /*0x569652*/
      if ( v55 >= 0x40000 || (v56 = *(CellClass **)(dword_87F924 + 4 * v55)) == 0 ) /*0x569669*/
      {
        dword_ABDC74 = *(unsigned int *)v77; /*0x56966b*/
        v56 = &unk_ABDC50; /*0x569671*/
      }
      v80 = dword_ABDE88 * v56->level[0]; /*0x56968f*/
      v79 = (v77[1] << 8) + 128; /*0x569699*/
      v78 = (v77[0] << 8) + 128; /*0x5696a5*/
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v78, &v75); /*0x5696b1*/
      v57 = *v45; /*0x5696b6*/
      v58 = v75; /*0x5696b9*/
      v59 = v45->vtable2; /*0x5696bd*/
      v60 = *v45; /*0x5696c2*/
      if ( *v45 >= v75 ) /*0x5696c4*/
        v60 = v75; /*0x5696c6*/
      v61 = v45->vtable2; /*0x5696cb*/
      *v45 = v60 - 64; /*0x5696cd*/
      v62 = v76; /*0x5696d0*/
      if ( v59 >= v76 ) /*0x5696d6*/
        v61 = v76; /*0x5696d8*/
      v45->ptr_2 = v61 - 64; /*0x5696e2*/
      v45->ptr_3 = abs32(v57 - v58) + 128; /*0x5696ec*/
      v45->ptr_4 = abs32(v59 - v62) + 128; /*0x5696fd*/
    }
    if ( v63 ) /*0x569706*/
      Terrain::ConnectivityGraph(this); /*0x56970c*/
    if ( *(int *)v81.__tail_10 > 0 ) /*0x569717*/
      LayerClass::Update_Pathfinding_2((LayerClass *)this, (int)&v81); /*0x569722*/
    /* X11: vtable install elided (X67 star-deref, RHS vt_VectorClass_Cell) */  /*0x56972b*/
    if ( *(unsigned int *)&v81.u16_4 ) /*0x569735*/
    {
      if ( BYTE1(v81.m_C) ) /*0x56973d*/
        __3_YAXPAX_Z(*(void **)&v81.u16_4); /*0x569740*/
    }
  }

}
}
// 0x56C510
namespace gamemd {
AbstractClass * * Terrain::ConnectivityGraph(void *a1_1)
{

  Terrain *v1; // ebp
  unsigned int *Terrain_field_0x14; // esi
  int v3; // ebx
  unsigned __int8 *v4; // edx
  int v5; // eax
  int v6; // edi
  void **pad_18; // esi
  int v8; // edi
  unsigned int i; // eax
  int v10; // edi
  int v11; // eax
  unsigned __int8 *v12; // esi
  int v13; // ebx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // ecx
  __int16 *v19; // esi
  int v20; // edi
  int v21; // ecx
  int v22; // eax
  unsigned __int16 *v23; // ebx
  int v24; // eax
  int v25; // edx
  int v26; // ecx
  int v27; // ecx
  int v28; // ebx
  int v29; // esi
  int v30; // edx
  unsigned int *v31; // ecx
  int v32; // eax
  int v33; // ecx
  int v34; // eax
  int v35; // eax
  unsigned int *v36; // edx
  bool v37; // zf
  unsigned __int16 *v38; // eax
  int v39; // ecx
  unsigned __int16 *v40; // ebx
  int v41; // eax
  unsigned __int16 *v42; // ecx
  int j; // edi
  int v44; // eax
  int v45; // esi
  int *v46; // edx
  int v47; // ecx
  int *v48; // edi
  unsigned __int16 *v49; // esi
  int v50; // eax
  unsigned __int16 *v51; // ecx
  int v52; // edx
  int v53; // eax
  char *v54; // ecx
  int v55; // eax
  int v56; // edx
  int v57; // eax
  unsigned int v58; // ecx
  unsigned __int8 *v59; // esi
  int v60; // ecx
  int *v61; // edi
  int v62; // eax
  int v63; // ecx
  unsigned short *v64; // esi
  int v65; // ecx
  int v66; // eax
  __int16 *v67; // ecx
  int v68; // esi
  unsigned short *v69; // edx
  unsigned __int16 v70; // ax
  unsigned __int16 *v71; // edi
  int v72; // ecx
  int v73; // edx
  int v74; // esi
  void **v75; // edi
  int *v77; // [esp+10h] [ebp-54h]
  __int16 v78; // [esp+14h] [ebp-50h]
  int *Block; // [esp+18h] [ebp-4Ch]
  unsigned __int8 *Blocka; // [esp+18h] [ebp-4Ch]
  int v81; // [esp+1Ch] [ebp-48h]
  __int16 *v82; // [esp+20h] [ebp-44h]
  unsigned int *v83; // [esp+24h] [ebp-40h]
  int Terrain_field_0x60; // [esp+28h] [ebp-3Ch]
  int v85; // [esp+28h] [ebp-3Ch]
  int *v86; // [esp+28h] [ebp-3Ch]
  unsigned __int8 *v87; // [esp+2Ch] [ebp-38h]
  char *v88; // [esp+2Ch] [ebp-38h]
  char *v89; // [esp+2Ch] [ebp-38h]
  char *v90; // [esp+2Ch] [ebp-38h]
  unsigned short *v91; // [esp+2Ch] [ebp-38h]
  int v92; // [esp+30h] [ebp-34h] BYREF
  int v93; // [esp+34h] [ebp-30h]
  int v94; // [esp+38h] [ebp-2Ch]
  int v95; // [esp+3Ch] [ebp-28h]
  int v96; // [esp+40h] [ebp-24h]
  unsigned __int16 *v97; // [esp+44h] [ebp-20h]
  Terrain *v98; // [esp+48h] [ebp-1Ch]
  void **v99; // [esp+4Ch] [ebp-18h] BYREF
  void *v100; // [esp+50h] [ebp-14h]
  int v101; // [esp+54h] [ebp-10h]
  int v102; // [esp+58h] [ebp-Ch]
  int v103; // [esp+5Ch] [ebp-8h]
  int v104; // [esp+60h] [ebp-4h]

  v1 = this; /*0x56c515*/
  v81 = -1; /*0x56c51a*/
  v95 = -1; /*0x56c51e*/
  Terrain_field_0x14 = (unsigned int *)this->Terrain_field_0x14; /*0x56c529*/
  v3 = 0; /*0x56c52c*/
  v4 = (unsigned __int8 *)(*(unsigned int *)this->__pad_68 + 4 * *&this->u32_6C); /*0x56c52e*/
  v100 = 0; /*0x56c531*/
  v101 = 0; /*0x56c535*/
  (v102) = ((v102) & ~0xFFFF) | ((1) & 0xFFFF); /*0x56c539*/
  v99 = &vt_DynamicVectorClass_enum_PassabilityType; /*0x56c542*/
  v103 = 0; /*0x56c54a*/
  v104 = 300; /*0x56c54e*/
  v5 = Terrain_field_0x14[2]; /*0x56c556*/
  v98 = this; /*0x56c55c*/
  v87 = v4; /*0x56c560*/
  if ( v5 > 0 ) /*0x56c564*/
  {
    v6 = 0; /*0x56c566*/
    do /*0x56c57c*/
    {
      (*(void (**)(int))(*(unsigned int *)(*Terrain_field_0x14 + v6) + 12))(*Terrain_field_0x14 + v6); /*0x56c570*/
      ++v3; /*0x56c576*/
      v6 += 24; /*0x56c577*/
    }
    while ( v3 < Terrain_field_0x14[2] ); /*0x56c57c*/
  }
  pad_18 = (void **)v1->__pad_18; /*0x56c57e*/
  v8 = 13; /*0x56c581*/
  do /*0x56c59f*/
  {
    if ( *pad_18 ) /*0x56c586*/
    {
      __3_YAXPAX_Z(*pad_18); /*0x56c58d*/
      *pad_18 = 0; /*0x56c595*/
    }
    ++pad_18; /*0x56c59b*/
    --v8; /*0x56c59e*/
  }
  while ( v8 ); /*0x56c59f*/
  for ( i = *(unsigned int *)v1->__pad_68; i < (unsigned int)v87; i += 4 ) /*0x56c5aa*/
    *(unsigned short *)(i + 2) = 0; /*0x56c5ac*/
  v10 = 1; /*0x56c5c3*/
  if ( v103 < v101 /*0x56c5eb*/
    || ((((v102) >> 8) & 0xFF) || !v101)
    && v104 > 0
    && ((unsigned __int8 (*)(void ***, int, unsigned int))v99[2])(&v99, v104 + v101, 0) )
  {
    v11 = v103++; /*0x56c5f6*/
    *((unsigned int *)v100 + v11) = 7; /*0x56c601*/
  }
  v12 = *(unsigned __int8 **)v1->__pad_68; /*0x56c608*/
  v92 = 0; /*0x56c60b*/
  if ( v12 < v87 ) /*0x56c615*/
  {
    v13 = v95; /*0x56c61b*/
    do /*0x56c6bc*/
    {
      v14 = *v12; /*0x56c621*/
      v95 = v14; /*0x56c626*/
      if ( v14 == 7 || *((unsigned short *)v12 + 1) ) /*0x56c630*/
      {
        v12 += 4; /*0x56c6b5*/
      }
      else
      {
        dword_ABDE8C = 0; /*0x56c640*/
        v15 = Terrain::FloodFillConnectivity((int)v1, v12, v10, &v92); /*0x56c64a*/
        if ( v15 > v13 ) /*0x56c651*/
        {
          v13 = v15; /*0x56c655*/
          v81 = (unsigned __int16)v10; /*0x56c65d*/
        }
        if ( v103 < v101 /*0x56c68e*/
          || ((((v102) >> 8) & 0xFF) || !v101)
          && v104 > 0
          && ((unsigned __int8 (*)(void ***, int, unsigned int))v99[2])(&v99, v104 + v101, 0) )
        {
          v16 = v103++; /*0x56c69d*/
          *((unsigned int *)v100 + v16) = v95; /*0x56c6a8*/
        }
        ++v10; /*0x56c6af*/
        v12 += 4 * v92; /*0x56c6b0*/
      }
    }
    while ( v12 < v87 ); /*0x56c6bc*/
  }
  *&v1->q04C = (unsigned __int16)v10; /*0x56c6c8*/
  v17 = v1->Terrain_field_0x60 - 1; /*0x56c6ce*/
  if ( v17 >= 0 ) /*0x56c6cf*/
  {
    v18 = 16 * v17; /*0x56c6d7*/
    v88 = (char *)(16 * v17); /*0x56c6db*/
    Terrain_field_0x60 = v1->Terrain_field_0x60; /*0x56c6df*/
    do /*0x56c7e0*/
    {
      v19 = (__int16 *)(*&v1->q054 + v18); /*0x56c6ea*/
      if ( v19->ptr_8 ) /*0x56c6e6*/
      {
        v20 = *&v1->u32_F8 + *&v1->u32_F4 + 1; /*0x56c704*/
        v21 = *v19 + v20 * v19[1]; /*0x56c70f*/
        if ( v21 >= 0 ) /*0x56c711*/
        {
          v22 = *&v1->u32_6C; /*0x56c717*/
          if ( v21 >= v22 ) /*0x56c71c*/
            v21 = v22 - 1; /*0x56c71e*/
        }
        else
        {
          v21 = 0; /*0x56c713*/
        }
        v23 = *(unsigned __int16 **)v1->__pad_68; /*0x56c725*/
        v24 = v23[2 * v21 + 1]; /*0x56c72d*/
        v25 = v19[2] + v20 * v19[3]; /*0x56c736*/
        if ( v25 >= 0 ) /*0x56c738*/
        {
          v26 = *&v1->u32_6C; /*0x56c73e*/
          if ( v25 >= v26 ) /*0x56c743*/
            v25 = v26 - 1; /*0x56c745*/
        }
        else
        {
          v25 = 0; /*0x56c73a*/
        }
        v27 = v23[2 * v25 + 1]; /*0x56c74a*/
        if ( (unsigned __int16)v27 != v24 ) /*0x56c751*/
        {
          if ( (unsigned __int16)v27 < v24 ) /*0x56c753*/
          {
            v27 = v24; /*0x56c757*/
            v24 = v23[2 * v25 + 1]; /*0x56c759*/
          }
          v28 = v27 | (v24 << 16); /*0x56c763*/
          v29 = *(unsigned int *)v1->Terrain_field_0x14 + 24 * (v27 & 0xF | (16 * (v24 & 0xF))); /*0x56c775*/
          v30 = *(unsigned int *)(v29 + 16); /*0x56c778*/
          v31 = *(unsigned int **)(v29 + 4); /*0x56c77c*/
          v32 = v30 - 1; /*0x56c77f*/
          if ( v30 - 1 < 0 ) /*0x56c784*/
          {
LABEL_48:
            v33 = *(unsigned int *)(v29 + 8); /*0x56c790*/
            if ( v30 < v33 /*0x56c7b2*/
              || (*(unsigned char *)(v29 + 13) || !v33)
              && (v34 = *(unsigned int *)(v29 + 20), v34 > 0)
              && (*(unsigned __int8 (**)(int, int, unsigned int))(*(unsigned int *)v29 + 8))(v29, v33 + v34, 0) )
            {
              v35 = *(unsigned int *)(v29 + 16); /*0x56c7b9*/
              v36 = *(unsigned int **)(v29 + 4); /*0x56c7bc*/
              *(unsigned int *)(v29 + 16) = v35 + 1; /*0x56c7c2*/
              v36[2 * v35] = v28; /*0x56c7c5*/
              v36[2 * v35 + 1] = v28; /*0x56c7c8*/
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
      v37 = Terrain_field_0x60 == 1; /*0x56c7d7*/
      v88 -= 16; /*0x56c7d8*/
      --Terrain_field_0x60; /*0x56c7dc*/
    }
    while ( !v37 ); /*0x56c7e0*/
  }
  v38 = (unsigned __int16 *)__2_YAPAXI_Z(2 * *&v1->q04C); /*0x56c7ec*/
  v39 = *&v1->q04C; /*0x56c7f1*/
  v40 = v38; /*0x56c7f4*/
  v41 = 0; /*0x56c7f9*/
  v97 = v40; /*0x56c7fd*/
  if ( v39 > 0 ) /*0x56c801*/
  {
    v42 = v40; /*0x56c803*/
    do /*0x56c813*/
    {
      *v42 = 0; /*0x56c805*/
      ++v41; /*0x56c80d*/
      ++v42; /*0x56c80e*/
    }
    while ( v41 < *&v1->q04C ); /*0x56c813*/
  }
  for ( j = 0; j < 6144; j += 24 ) /*0x56c815*/
  {
    v44 = j + *(unsigned int *)v1->Terrain_field_0x14; /*0x56c81c*/
    v45 = *(unsigned int *)(v44 + 16); /*0x56c81e*/
    if ( v45 > 0 ) /*0x56c823*/
    {
      v46 = (int *)(*(unsigned int *)(v44 + 4) + 4); /*0x56c828*/
      do /*0x56c84f*/
      {
        v47 = *v46; /*0x56c82b*/
        v46 += 2; /*0x56c82d*/
        ++v40[(unsigned __int16)v47]; /*0x56c83b*/
        ++v40[(((v47) >> 16) & 0xFFFF)]; /*0x56c844*/
        --v45; /*0x56c84e*/
      }
      while ( v45 ); /*0x56c84f*/
    }
  }
  v77 = (int *)__2_YAPAXI_Z(4 * *&v1->q04C); /*0x56c868*/
  v89 = 0; /*0x56c872*/
  if ( *&v1->q04C > 0 ) /*0x56c87c*/
  {
    v48 = v77; /*0x56c87e*/
    v49 = v40; /*0x56c882*/
    do /*0x56c8aa*/
    {
      *v48++ = __2_YAPAXI_Z(2 * *v49++); /*0x56c891*/
      ++v89; /*0x56c8a6*/
    }
    while ( (int)v89 < *&v1->q04C ); /*0x56c8aa*/
  }
  v50 = 0; /*0x56c8af*/
  if ( *&v1->q04C > 0 ) /*0x56c8b3*/
  {
    v51 = v40; /*0x56c8b5*/
    do /*0x56c8c5*/
    {
      *v51 = 0; /*0x56c8b7*/
      ++v50; /*0x56c8bf*/
      ++v51; /*0x56c8c0*/
    }
    while ( v50 < *&v1->q04C ); /*0x56c8c5*/
  }
  v52 = 0; /*0x56c8c7*/
  v85 = 0; /*0x56c8c9*/
  do /*0x56c953*/
  {
    v53 = *(unsigned int *)v1->Terrain_field_0x14; /*0x56c8d0*/
    v54 = *(char **)(v53 + v52 + 16); /*0x56c8d2*/
    v55 = v52 + v53; /*0x56c8d6*/
    if ( (int)v54 > 0 ) /*0x56c8da*/
    {
      v90 = v54; /*0x56c8df*/
      Block = (int *)(*(unsigned int *)(v55 + 4) + 4); /*0x56c8e6*/
      do /*0x56c940*/
      {
        v56 = *Block; /*0x56c8f4*/
        v57 = (unsigned __int16)*Block; /*0x56c8fa*/
        v58 = (((*Block) >> 16) & 0xFFFF); /*0x56c8ff*/
        *(unsigned short *)(v77[v57] + 2 * v40[v57]) = v58; /*0x56c909*/
        *(unsigned short *)(v77[(unsigned __int16)v58] + 2 * v40[(unsigned __int16)v58]) = v56; /*0x56c920*/
        ++v40[v57]; /*0x56c924*/
        ++v40[(unsigned __int16)v58]; /*0x56c928*/
        v37 = v90 == 1; /*0x56c937*/
        Block += 2; /*0x56c938*/
        --v90; /*0x56c93c*/
      }
      while ( !v37 ); /*0x56c940*/
      v52 = v85; /*0x56c942*/
    }
    v52 += 24; /*0x56c946*/
    v85 = v52; /*0x56c94f*/
  }
  while ( v52 < 6144 ); /*0x56c953*/
  v59 = (unsigned __int8 *)__2_YAPAXI_Z(*&v1->q04C); /*0x56c962*/
  v60 = 0; /*0x56c96a*/
  for ( Blocka = v59; v60 < *&v1->q04C; v59[v60 - 1] = *((char *)v100 + 4 * v60 - 4) ) /*0x56c972*/
    ++v60; /*0x56c978*/
  v91 = (unsigned short *)__2_YAPAXI_Z(2 * *&v1->q04C); /*0x56c993*/
  v61 = dword_82A594; /*0x56c997*/
  v86 = dword_82A594; /*0x56c9a2*/
  v83 = v1->__pad_18; /*0x56c9a6*/
  do /*0x56cb01*/
  {
    v78 = 2; /*0x56c9ad*/
    v62 = __2_YAPAXI_Z(2 * *&v1->q04C); /*0x56c9b8*/
    v82 = (__int16 *)v62; /*0x56c9c4*/
    *v83 = v62; /*0x56c9c8*/
    v63 = 0; /*0x56c9cd*/
    if ( *&v1->q04C > 0 ) /*0x56c9d1*/
    {
      v64 = (unsigned short *)v62; /*0x56c9d3*/
      do /*0x56c9f3*/
        *v64++ = v61[Blocka[v63++]] != 1; /*0x56c9e7*/
      while ( v63 < *&v1->q04C ); /*0x56c9f3*/
    }
    v65 = *&v1->q04C; /*0x56c9f5*/
    v66 = 0; /*0x56c9f8*/
    v94 = 0; /*0x56c9fc*/
    if ( v65 > 0 ) /*0x56ca00*/
    {
      v67 = v82; /*0x56ca06*/
      v95 = (int)v82; /*0x56ca0a*/
      do /*0x56cada*/
      {
        if ( !*v67 ) /*0x56ca0e*/
        {
          v68 = 1; /*0x56ca1c*/
          *v91 = v66; /*0x56ca21*/
          *v67 = v78; /*0x56ca29*/
          v96 = v61[Blocka[v66]]; /*0x56ca38*/
          do /*0x56cab2*/
          {
            v69 = &v91[--v68]; /*0x56ca45*/
            v70 = v40[(unsigned __int16)*v69]; /*0x56ca52*/
            if ( v70 - 1 >= 0 ) /*0x56ca59*/
            {
              v71 = (unsigned __int16 *)(v77[(unsigned __int16)*v69] + 2 * (v70 - 1)); /*0x56ca5f*/
              v93 = v70; /*0x56ca63*/
              do /*0x56caa6*/
              {
                v72 = *v71; /*0x56ca6d*/
                if ( v86[Blocka[v72]] == v96 && !v82[v72] ) /*0x56ca83*/
                {
                  *v69 = v72; /*0x56ca8f*/
                  ++v68; /*0x56ca92*/
                  ++v69; /*0x56ca93*/
                  v82[v72] = v78; /*0x56ca96*/
                }
                --v71; /*0x56ca9e*/
                --v93; /*0x56caa2*/
              }
              while ( v93 ); /*0x56caa6*/
              v40 = v97; /*0x56caa8*/
              v1 = v98; /*0x56caac*/
            }
          }
          while ( v68 ); /*0x56cab2*/
          v61 = v86; /*0x56cab8*/
          v67 = (__int16 *)v95; /*0x56cabc*/
          ++v78; /*0x56cac1*/
          v66 = v94; /*0x56cac5*/
        }
        v73 = *&v1->q04C; /*0x56cac9*/
        ++v66; /*0x56cacc*/
        ++v67; /*0x56cacd*/
        v94 = v66; /*0x56cad2*/
        v95 = (int)v67; /*0x56cad6*/
      }
      while ( v66 < v73 ); /*0x56cada*/
    }
    v61 += 8; /*0x56cae8*/
    *v82 = -1; /*0x56caf4*/
    ++v83; /*0x56caf9*/
    v86 = v61; /*0x56cafd*/
  }
  while ( (int)v61 < (int)dword_82A734 ); /*0x56cb01*/
  v74 = 0; /*0x56cb0a*/
  if ( *&v1->q04C > 0 ) /*0x56cb0e*/
  {
    v75 = (void **)v77; /*0x56cb10*/
    do /*0x56cb28*/
    {
      __3_YAXPAX_Z(*v75); /*0x56cb17*/
      ++v74; /*0x56cb22*/
      ++v75; /*0x56cb23*/
    }
    while ( v74 < *&v1->q04C ); /*0x56cb28*/
  }
  __3_YAXPAX_Z(Blocka); /*0x56cb2f*/
  __3_YAXPAX_Z(v77); /*0x56cb39*/
  __3_YAXPAX_Z(v40); /*0x56cb3f*/
  __3_YAXPAX_Z(v91); /*0x56cb49*/
  v99 = &vt_VectorClass_enum_PassabilityType; /*0x56cb5a*/
  if ( v100 && (((v102) >> 8) & 0xFF) ) /*0x56cb6b*/
    __3_YAXPAX_Z(v100); /*0x56cb6e*/
  return v81; /*0x56cb57*/

}
}
// 0x56CB90
namespace gamemd {
int Terrain::FloodFillConnectivity(uint8_t *a1, int aP2, unsigned int *aP3, void *a4)
{

  unsigned __int8 *v4; // ebx
  int v5; // edi
  unsigned __int8 *v6; // ebp
  int v7; // ecx
  unsigned __int8 *v8; // esi
  __int64 v9; // rax
  int v10; // edx
  int v11; // edi
  __int64 v12; // rax
  int v13; // ebx
  int v14; // ecx
  int v15; // edx
  int v16; // edi
  int v17; // eax
  unsigned int *v18; // ecx
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  unsigned int *v22; // edx
  int v23; // ecx
  __int64 v24; // rax
  int v25; // edi
  __int64 v26; // rax
  int v27; // ebx
  int v28; // ecx
  int v29; // edx
  int v30; // edi
  int v31; // eax
  unsigned int *v32; // ecx
  int v33; // ecx
  int v34; // eax
  int v35; // eax
  unsigned int *v36; // edx
  unsigned __int8 *v37; // ebp
  unsigned __int8 *v38; // esi
  int v39; // eax
  int v40; // edx
  unsigned __int8 *v41; // edi
  int v42; // ebx
  unsigned __int8 *v43; // esi
  __int64 v44; // rax
  __int64 v45; // rax
  int v46; // ebp
  int v47; // ecx
  int v48; // edx
  int v49; // esi
  int v50; // eax
  unsigned int *v51; // ecx
  int v52; // ecx
  int v53; // eax
  int v54; // eax
  unsigned int *v55; // edx
  unsigned __int8 *v56; // ebp
  unsigned int v57; // esi
  int v58; // ebx
  unsigned __int8 *v59; // eax
  int v60; // ecx
  __int64 v61; // rax
  __int64 v62; // rax
  int v63; // edi
  int v64; // ecx
  int v65; // edx
  int v66; // esi
  int v67; // eax
  unsigned int *v68; // ecx
  int v69; // ecx
  int v70; // eax
  int v71; // eax
  unsigned int *v72; // edx
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
  unsigned __int8 *v85; // [esp+38h] [ebp-4h]
  int v86; // [esp+40h] [ebp+4h]
  unsigned int v87; // [esp+48h] [ebp+Ch]

  v4 = aP2; /*0x56cb94*/
  v5 = *aP2; /*0x56cb9f*/
  v74 = v5 == 6; /*0x56cba8*/
  v6 = aP2; /*0x56cbaf*/
  v7 = aP2[1]; /*0x56cbb1*/
  v8 = aP2; /*0x56cbb4*/
  v81 = v5; /*0x56cbb6*/
  do /*0x56cbe7*/
  {
    v9 = v6[1] - v7; /*0x56cbc5*/
    if ( (int)(((((v9) >> 32) & 0xFFFFFFFFu) ^ v9) - (((v9) >> 32) & 0xFFFFFFFFu)) >= 2 ) /*0x56cbcd*/
      break; /*0x56cbcd*/
    *((unsigned short *)v6 + 1) = a3; /*0x56cbd6*/
    v10 = *(v6 - 4); /*0x56cbda*/
    v7 = v6[1]; /*0x56cbdf*/
    v6 -= 4; /*0x56cbe2*/
  }
  while ( v10 == v5 ); /*0x56cbe7*/
  v76 = v7; /*0x56cbeb*/
  v11 = *((unsigned __int16 *)v6 + 1); /*0x56cbef*/
  v78 = (unsigned __int16)v11; /*0x56cbf5*/
  if ( (unsigned short)v11 ) /*0x56cbf9*/
  {
    v12 = v6[1] - v7; /*0x56cc06*/
    if ( ((int)(((((v12) >> 32) & 0xFFFFFFFFu) ^ v12) - (((v12) >> 32) & 0xFFFFFFFFu)) < 2 || v74) && v11 != dword_ABDE8C && v11 != (unsigned __int16)a3 ) /*0x56cc34*/
    {
      v13 = (unsigned __int16)a3 | ((unsigned __int16)v11 << 16); /*0x56cc46*/
      v14 = *this->Terrain_field_0x14; /*0x56cc5a*/
      v15 = *(unsigned int *)(v14 + 24 * (a3 & 0xF | (16 * (v11 & 0xF))) + 16); /*0x56cc5c*/
      v16 = v14 + 24 * (a3 & 0xF | (16 * (v11 & 0xF))); /*0x56cc60*/
      v17 = v15 - 1; /*0x56cc63*/
      v18 = *(unsigned int **)(v16 + 4); /*0x56cc68*/
      if ( v15 - 1 < 0 ) /*0x56cc6b*/
      {
LABEL_12:
        v19 = *(unsigned int *)(v16 + 8); /*0x56cc77*/
        if ( v15 < v19 /*0x56cc99*/
          || (*(unsigned char *)(v16 + 13) || !v19)
          && (v20 = *(unsigned int *)(v16 + 20), v20 > 0)
          && (*(unsigned __int8 (**)(int, int, unsigned int))(*(unsigned int *)v16 + 8))(v16, v19 + v20, 0) )
        {
          v21 = *(unsigned int *)(v16 + 16); /*0x56cca0*/
          v22 = *(unsigned int **)(v16 + 4); /*0x56cca3*/
          *(unsigned int *)(v16 + 16) = v21 + 1; /*0x56cca9*/
          v22[2 * v21] = v13; /*0x56ccac*/
          v22[2 * v21 + 1] = v13; /*0x56ccaf*/
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
      v4 = aP2; /*0x56ccb7*/
      dword_ABDE8C = v78; /*0x56ccbb*/
    }
  }
  if ( *v4 == v81 ) /*0x56ccca*/
  {
    v23 = v76; /*0x56ccd0*/
    do /*0x56ccfd*/
    {
      v24 = v8[1] - v23; /*0x56ccdd*/
      if ( (int)(((((v24) >> 32) & 0xFFFFFFFFu) ^ v24) - (((v24) >> 32) & 0xFFFFFFFFu)) >= 4 ) /*0x56cce5*/
        break; /*0x56cce5*/
      *((unsigned short *)v8 + 1) = a3; /*0x56cce9*/
      v23 = v8[1]; /*0x56cced*/
      v8 += 4; /*0x56ccf0*/
      v76 = v23; /*0x56ccf5*/
    }
    while ( *v8 == v81 ); /*0x56ccfd*/
  }
  v25 = *((unsigned __int16 *)v8 + 1); /*0x56cd01*/
  v79 = (unsigned __int16)v25; /*0x56cd07*/
  if ( (unsigned short)v25 ) /*0x56cd0b*/
  {
    v26 = v8[1] - v76; /*0x56cd1c*/
    if ( ((int)(((((v26) >> 32) & 0xFFFFFFFFu) ^ v26) - (((v26) >> 32) & 0xFFFFFFFFu)) < 2 || v74) && v25 != dword_ABDE8C && v25 != (unsigned __int16)a3 ) /*0x56cd4a*/
    {
      v27 = (unsigned __int16)a3 | ((unsigned __int16)v25 << 16); /*0x56cd5c*/
      v28 = *this->Terrain_field_0x14; /*0x56cd70*/
      v29 = *(unsigned int *)(v28 + 24 * (a3 & 0xF | (16 * (v25 & 0xF))) + 16); /*0x56cd72*/
      v30 = v28 + 24 * (a3 & 0xF | (16 * (v25 & 0xF))); /*0x56cd76*/
      v31 = v29 - 1; /*0x56cd79*/
      v32 = *(unsigned int **)(v30 + 4); /*0x56cd7e*/
      if ( v29 - 1 < 0 ) /*0x56cd81*/
      {
LABEL_31:
        v33 = *(unsigned int *)(v30 + 8); /*0x56cd8d*/
        if ( v29 < v33 /*0x56cdaf*/
          || (*(unsigned char *)(v30 + 13) || !v33)
          && (v34 = *(unsigned int *)(v30 + 20), v34 > 0)
          && (*(unsigned __int8 (**)(int, int, unsigned int))(*(unsigned int *)v30 + 8))(v30, v33 + v34, 0) )
        {
          v35 = *(unsigned int *)(v30 + 16); /*0x56cdb6*/
          v36 = *(unsigned int **)(v30 + 4); /*0x56cdb9*/
          *(unsigned int *)(v30 + 16) = v35 + 1; /*0x56cdbf*/
          v36[2 * v35] = v27; /*0x56cdc2*/
          v36[2 * v35 + 1] = v27; /*0x56cdc5*/
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
  *a4 = ((v8 - aP2) >> 2) - 1; /*0x56cdff*/
  v38 = v8 - 4; /*0x56ce01*/
  v39 = this->u32_F8 + this->u32_F4 + 1; /*0x56ce12*/
  v40 = 4 * v39 + 4; /*0x56ce16*/
  v39 *= 4; /*0x56ce1d*/
  v80 = v40; /*0x56ce20*/
  v41 = &v37[-v40]; /*0x56ce24*/
  v85 = &v37[v39 - 4]; /*0x56ce2c*/
  v86 = v39; /*0x56ce34*/
  v84 = (unsigned int)&v38[v40]; /*0x56ce3b*/
  v87 = (unsigned int)&v38[-v39 + 4]; /*0x56ce41*/
  if ( (unsigned int)&v37[-v40] <= v87 )
  {
    while ( 1 )
    {
      v42 = *((unsigned __int16 *)v41 + 1); /*0x56ce51*/
      if ( (unsigned int)v41 >= v87 - 4 )
        v43 = v41 == (unsigned __int8 *)(v87 - 4) ? &v41[v86] : &v41[v86 - 4];
      else
        v43 = &v41[v80]; /*0x56ce60*/
      if ( *((unsigned short *)v41 + 1) ) /*0x56ce4f*/
        break; /*0x56ce4f*/
      if ( *v41 != v81 ) /*0x56ce86*/
        goto LABEL_62; /*0x56ce86*/
      v44 = v41[1] - v43[1]; /*0x56ce98*/
      if ( (int)(((((v44) >> 32) & 0xFFFFFFFFu) ^ v44) - (((v44) >> 32) & 0xFFFFFFFFu)) >= 2 ) /*0x56cea0*/
        goto LABEL_62; /*0x56cea0*/
      v77 += Terrain::FloodFillConnectivity(this, v41, a3, &v82); /*0x56cec0*/
      v41 += 4 * v82; /*0x56cec8*/
LABEL_63:
      if ( (unsigned int)v41 > v87 ) /*0x56cf90*/
        goto LABEL_64; /*0x56cf90*/
    }
    if ( v42 != (unsigned __int16)a3 && v42 != dword_ABDE8C ) /*0x56cee8*/
    {
      v45 = v41[1] - v43[1]; /*0x56cefa*/
      if ( (int)(((((v45) >> 32) & 0xFFFFFFFFu) ^ v45) - (((v45) >> 32) & 0xFFFFFFFFu)) < 2 || v74 ) /*0x56cf0a*/
      {
        v46 = (unsigned __int16)a3 | (v42 << 16); /*0x56cf16*/
        v47 = *this->Terrain_field_0x14; /*0x56cf2a*/
        v48 = *(unsigned int *)(v47 + 24 * (a3 & 0xF | (16 * (v42 & 0xF))) + 16); /*0x56cf2c*/
        v49 = v47 + 24 * (a3 & 0xF | (16 * (v42 & 0xF))); /*0x56cf30*/
        v50 = v48 - 1; /*0x56cf33*/
        v51 = *(unsigned int **)(v49 + 4); /*0x56cf38*/
        if ( v48 - 1 < 0 ) /*0x56cf3b*/
        {
LABEL_55:
          v52 = *(unsigned int *)(v49 + 8); /*0x56cf47*/
          if ( v48 < v52 /*0x56cf69*/
            || (*(unsigned char *)(v49 + 13) || !v52)
            && (v53 = *(unsigned int *)(v49 + 20), v53 > 0)
            && (*(unsigned __int8 (**)(int, int, unsigned int))(*(unsigned int *)v49 + 8))(v49, v52 + v53, 0) )
          {
            v54 = *(unsigned int *)(v49 + 16); /*0x56cf70*/
            v55 = *(unsigned int **)(v49 + 4); /*0x56cf73*/
            *(unsigned int *)(v49 + 16) = v54 + 1; /*0x56cf79*/
            v55[2 * v54] = v46; /*0x56cf7c*/
            v55[2 * v54 + 1] = v46; /*0x56cf7f*/
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
    v58 = *((unsigned __int16 *)v56 + 1); /*0x56cfab*/
    if ( (unsigned int)v56 >= v57 - 4 ) /*0x56cfb3*/
    {
      v60 = v86; /*0x56cfbe*/
      if ( v56 != (unsigned __int8 *)(v57 - 4) ) /*0x56cfc2*/
        v60 = v80; /*0x56cfc4*/
      v59 = &v56[-v60]; /*0x56cfc8*/
    }
    else
    {
      v59 = &v56[-v86 + 4]; /*0x56cfb9*/
    }
    if ( *((unsigned short *)v56 + 1) ) /*0x56cfa9*/
    {
      if ( v58 != (unsigned __int16)a3 && v58 != dword_ABDE8C ) /*0x56d03c*/
      {
        v62 = v56[1] - v59[1]; /*0x56d04e*/
        if ( (int)(((((v62) >> 32) & 0xFFFFFFFFu) ^ v62) - (((v62) >> 32) & 0xFFFFFFFFu)) < 2 || v74 ) /*0x56d05e*/
        {
          v63 = (unsigned __int16)a3 | (v58 << 16); /*0x56d06a*/
          v64 = *this->Terrain_field_0x14; /*0x56d07e*/
          v65 = *(unsigned int *)(v64 + 24 * (a3 & 0xF | (16 * (v58 & 0xF))) + 16); /*0x56d080*/
          v66 = v64 + 24 * (a3 & 0xF | (16 * (v58 & 0xF))); /*0x56d084*/
          v67 = v65 - 1; /*0x56d087*/
          v68 = *(unsigned int **)(v66 + 4); /*0x56d08c*/
          if ( v65 - 1 < 0 ) /*0x56d08f*/
          {
LABEL_82:
            v69 = *(unsigned int *)(v66 + 8); /*0x56d09b*/
            if ( v65 < v69 /*0x56d0bd*/
              || (*(unsigned char *)(v66 + 13) || !v69)
              && (v70 = *(unsigned int *)(v66 + 20), v70 > 0)
              && (*(unsigned __int8 (**)(int, int, unsigned int))(*(unsigned int *)v66 + 8))(v66, v69 + v70, 0) )
            {
              v71 = *(unsigned int *)(v66 + 16); /*0x56d0c4*/
              v72 = *(unsigned int **)(v66 + 4); /*0x56d0c7*/
              *(unsigned int *)(v66 + 16) = v71 + 1; /*0x56d0cd*/
              v72[2 * v71] = v63; /*0x56d0d0*/
              v72[2 * v71 + 1] = v63; /*0x56d0d3*/
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
      v56 += 4; /*0x56d0e1*/
    }
    else if ( *v56 == v81 && (v61 = v56[1] - v59[1], (int)(((((v61) >> 32) & 0xFFFFFFFFu) ^ v61) - (((v61) >> 32) & 0xFFFFFFFFu)) < 2) ) /*0x56cfef*/
    {
      v77 += Terrain::FloodFillConnectivity(this, v56, a3, &v83); /*0x56d00f*/
      v56 += 4 * v83; /*0x56d013*/
    }
    else
    {
      v56 += 4; /*0x56d01c*/
    }
  }
  return v77; /*0x56d0f0*/

}
}
// 0x570050
namespace gamemd {
void Terrain::ProcessCellModification(int16_t *aP1)
{

  __int16 *v2; // ebp
  int v4; // edi
  int v5; // esi
  __int16 v6; // cx
  int v7; // eax
  __int16 v8; // si
  unsigned int v9; // eax
  int *v10; // eax
  int *v11; // esi
  char v12; // bl
  __int16 *v13; // ecx
  unsigned int v14; // eax
  int *v15; // eax
  __int16 *v16; // ecx
  unsigned int v17; // eax
  int *v18; // eax
  __int16 *v19; // ecx
  unsigned int v20; // eax
  int *v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // edi
  int v25; // ecx
  int v26; // eax
  bool v27; // sf
  int v28; // eax
  int *v29; // eax
  int v30; // eax
  int v31; // esi
  int v32; // ebp
  int v33; // edi
  unsigned int v34; // eax
  int *v35; // eax
  int *v36; // edx
  int v37; // eax
  unsigned int v38; // eax
  int *v39; // eax
  __int16 *v40; // ecx
  unsigned int v41; // eax
  int *v42; // eax
  __int16 *v43; // ecx
  unsigned int v44; // eax
  int *v45; // eax
  __int16 *v46; // ecx
  unsigned int v47; // eax
  int *v48; // eax
  int v49; // eax
  int v50; // edi
  int v51; // esi
  int v52; // eax
  Terrain *v53; // esi
  unsigned int v54; // eax
  int *v55; // eax
  unsigned int v56; // eax
  int *v57; // eax
  Terrain *v58; // ebx
  __int16 *v59; // ecx
  unsigned int v60; // eax
  int *v61; // eax
  __int16 *v62; // ecx
  unsigned int v63; // eax
  int *v64; // eax
  __int16 *v65; // ecx
  unsigned int v66; // eax
  int *v67; // eax
  int Capacity; // eax
  int v69; // edi
  int v70; // esi
  int v71; // eax
  unsigned int v72; // eax
  int *v73; // eax
  int v75; // [esp+14h] [ebp-4Ch] BYREF
  __int16 v76[2]; // [esp+18h] [ebp-48h] BYREF
  __int16 v77[2]; // [esp+1Ch] [ebp-44h] BYREF
  int v78; // [esp+20h] [ebp-40h] BYREF
  __int16 v79[4]; // [esp+24h] [ebp-3Ch] BYREF
  int v80; // [esp+2Ch] [ebp-34h] BYREF
  __int16 v81[4]; // [esp+30h] [ebp-30h] BYREF
  int v82; // [esp+38h] [ebp-28h] BYREF
  int v83; // [esp+3Ch] [ebp-24h]
  int v84; // [esp+40h] [ebp-20h]
  int v85; // [esp+44h] [ebp-1Ch]
  VectorClass v86; // [esp+48h] [ebp-18h] BYREF
  int v87; // [esp+58h] [ebp-8h]
  int v88; // [esp+5Ch] [ebp-4h]

  v2 = aP1; /*0x570055*/
  v4 = -2; /*0x570061*/
  do /*0x5700b1*/
  {
    v5 = -2; /*0x570066*/
    do /*0x5700ab*/
    {
      v6 = v2[1] + v5; /*0x570075*/
      LOWORD(aP1) = *v2 + v4; /*0x570079*/
      HIWORD(aP1) = v6; /*0x57007e*/
      *(unsigned int *)v76 = aP1; /*0x570091*/
      v7 = *((unsigned int *)CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, v76) + 17); /*0x57009a*/
      if ( v7 >= 74 && v7 <= 101 ) /*0x5700a5*/
      {
        v8 = v2[1] + v5; /*0x5700b9*/
        LOWORD(aP1) = *v2 + v4; /*0x5700c1*/
        HIWORD(aP1) = v8; /*0x5700c6*/
        CellClass::ApplyCliffTileModifications((CellClass *)this, (int)&aP1); /*0x5700d6*/
        return; /*0x5700e2*/
      }
      ++v5; /*0x5700a7*/
    }
    while ( v5 < 3 ); /*0x5700ab*/
    ++v4; /*0x5700ad*/
  }
  while ( v4 < 3 ); /*0x5700b1*/
  v9 = *v2 + (v2[1] << 9); /*0x5700f0*/
  if ( v9 < 0x40000 && (v10 = *(int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v9)) != 0 ) /*0x570106*/
  {
    v11 = v10; /*0x570108*/
  }
  else
  {
    v11 = &g_MissionQueueFrame.briefing[130]; /*0x57010f*/
    g_MissionQueueFrame.briefing[139] = *(unsigned int *)v2; /*0x570114*/
  }
  v12 = 0; /*0x57011f*/
  if ( (v11[80] & 0x500) == 0 ) /*0x570124*/
  {
    *(unsigned int *)v76 = 0; /*0x57012a*/
    do /*0x57024e*/
    {
      v13 = (__int16 *)*CellStruct::Add((CellStruct *)v2, &v78, (unsigned short *)(4 * (v12 & 7) + 9041544)); /*0x570147*/
      *(unsigned int *)v77 = v13; /*0x570149*/
      aP1 = v13; /*0x57014d*/
      v14 = (__int16)v13 + (SHIWORD(v13) << 9); /*0x57015c*/
      if ( v14 < 0x40000 && (v15 = *(int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v14)) != 0 ) /*0x570172*/
      {
        v11 = v15; /*0x570174*/
      }
      else
      {
        g_MissionQueueFrame.briefing[139] = (int)v13; /*0x570178*/
        v11 = &g_MissionQueueFrame.briefing[130]; /*0x57017e*/
      }
      if ( (v11[80] & 0x500) != 0 ) /*0x57018c*/
        break; /*0x57018c*/
      v16 = (__int16 *)*CellStruct::Add((CellStruct *)&aP1, v79, (unsigned short *)(4 * (v12 & 7) + 9041544)); /*0x5701a1*/
      *(unsigned int *)v77 = v16; /*0x5701a3*/
      aP1 = v16; /*0x5701a7*/
      v17 = (__int16)v16 + (SHIWORD(v16) << 9); /*0x5701b6*/
      if ( v17 < 0x40000 && (v18 = *(int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v17)) != 0 ) /*0x5701cc*/
      {
        v11 = v18; /*0x5701ce*/
      }
      else
      {
        g_MissionQueueFrame.briefing[139] = (int)v16; /*0x5701d2*/
        v11 = &g_MissionQueueFrame.briefing[130]; /*0x5701d8*/
      }
      if ( (v11[80] & 0x500) != 0 ) /*0x5701e6*/
        break; /*0x5701e6*/
      v19 = (__int16 *)*CellStruct::Add((CellStruct *)&aP1, &v80, (unsigned short *)(4 * (v12 & 7) + 9041544)); /*0x5701f7*/
      *(unsigned int *)v77 = v19; /*0x5701f9*/
      aP1 = v19; /*0x5701fd*/
      v20 = (__int16)v19 + (SHIWORD(v19) << 9); /*0x57020c*/
      if ( v20 < 0x40000 && (v21 = *(int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v20)) != 0 ) /*0x570222*/
      {
        v11 = v21; /*0x570224*/
      }
      else
      {
        g_MissionQueueFrame.briefing[139] = (int)v19; /*0x570228*/
        v11 = &g_MissionQueueFrame.briefing[130]; /*0x57022e*/
      }
      if ( (v11[80] & 0x500) != 0 ) /*0x57023c*/
        break; /*0x57023c*/
      v12 = (v12 + 1) & 7; /*0x570243*/
      ++*(unsigned int *)v76; /*0x57024a*/
    }
    while ( *(int *)v76 < 8 ); /*0x57024e*/
  }
  v22 = v11[80]; /*0x570254*/
  if ( (v22 & 0x100) != 0 || (v22 & 0x400) != 0 )
  {
    if ( (v11[80] & 0x100) != 0 )
    {
      if ( (v22 & 0x80u) == 0 ) /*0x570273*/
        v23 = *(unsigned int *)(v11[11] + 36); /*0x570280*/
      else
        v23 = v11[9]; /*0x570275*/
    }
    else
    {
      *(unsigned int *)v76 = 0; /*0x57028d*/
      v24 = (v22 & 0x800) != 0 ? 4 : 2;
      v75 = v11[9]; /*0x5702a6*/
      while ( 1 ) /*0x5702c3*/
      {
        v25 = *CellStruct::Add((CellStruct *)&v75, &v80, (unsigned short *)(4 * (v24 & 7) + 9041544)); /*0x5702c3*/
        *(unsigned int *)v77 = v25; /*0x5702c5*/
        v26 = (short)(((v25) >> 16) & 0xFFFF) << 9; /*0x5702d4*/
        v27 = (__int16)v25 + v26 < 0; /*0x5702d7*/
        v28 = (__int16)v25 + v26; /*0x5702d7*/
        v75 = v25; /*0x5702d9*/
        if ( v27 || v28 >= 0x40000 || (v29 = *(int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v28)) == 0 ) /*0x5702f1*/
        {
          g_MissionQueueFrame.briefing[139] = v25; /*0x5702f3*/
          v29 = &g_MissionQueueFrame.briefing[130]; /*0x5702f9*/
        }
        if ( (v29[80] & 0x400) == 0 ) /*0x570307*/
          break; /*0x570307*/
        ++*(unsigned int *)v76; /*0x570311*/
        if ( *(int *)v76 >= 4 ) /*0x570315*/
          return; /*0x570315*/
      }
      v30 = ((unsigned char)v24 - 4) & 7; /*0x570327*/
      v76[0] = LOWORD(g_DDrawSurfaceManager.scenario[v30 + 82]) + v25; /*0x57033a*/
      v76[1] = (((v25) >> 16) & 0xFFFF) + HIWORD(g_DDrawSurfaceManager.scenario[v30 + 82]); /*0x57034a*/
      *(unsigned int *)v77 = *(unsigned int *)v76; /*0x570358*/
      v23 = *CellStruct::Add((CellStruct *)v77, &v80, (unsigned short *)(4 * v30 + 9041544)); /*0x570361*/
    }
    v75 = v23; /*0x570363*/
    v31 = (v11[80] & 0x800) != 0 ? 6 : 0;
    *(unsigned int *)v81 = v23; /*0x570382*/
    LOBYTE(aP1) = 0; /*0x570386*/
    VectorClass::CellConstructor(&v86, 0, 0); /*0x57038b*/
    v32 = *(unsigned int *)v81; /*0x570390*/
    /* X11: vtable install elided (legacy slot spelling slot, RHS vt_DynamicVectorClass_Cell) */  /*0x570394*/
    v88 = 10; /*0x57039c*/
    v87 = 0; /*0x5703a4*/
    while ( 1 ) /*0x5703ba*/
    {
      v33 = v81[1] + (__int16)v32; /*0x5703ba*/
      if ( v33 <= *(int *)&g_Cell_PositionLUT /*0x5703e8*/
        || (__int16)v32 - v81[1] >= *(int *)&g_Cell_PositionLUT
        || v81[1] - (__int16)v32 >= *(int *)&g_Cell_PositionLUT
        || v33 > *(unsigned int *)&g_Cell_PositionLUT + 2 * *(unsigned int *)&g_CellPositionOffset )
      {
        goto LABEL_139; /*0x5703e8*/
      }
      v34 = (__int16)v32 + (v81[1] << 9); /*0x5703f1*/
      if ( !*((unsigned int *)this->Terrain_field_0x13C + v34) ) /*0x570401*/
        goto LABEL_74; /*0x570401*/
      if ( v34 < 0x40000 && (v35 = *(int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v34)) != 0 ) /*0x57041d*/
      {
        v36 = v35; /*0x57041f*/
      }
      else
      {
        g_MissionQueueFrame.briefing[139] = v32; /*0x570423*/
        v36 = &g_MissionQueueFrame.briefing[130]; /*0x570429*/
      }
      v37 = v36[14] - g_TerrainBridgeIndex + 1; /*0x57043f*/
      if ( (v37 == dword_ABC2B4 || v37 == dword_AA1130) && *((unsigned char *)v36 + 282) == 8 ) /*0x570453*/
      {
        Cell::UpdateTileType(v81, 0, 0); /*0x570511*/
        v38 = v81[0] + (v81[1] << 9); /*0x570525*/
        if ( v38 >= 0x40000 || (v39 = *(int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v38)) == 0 ) /*0x57053b*/
        {
          g_MissionQueueFrame.briefing[139] = *(unsigned int *)v81; /*0x57053d*/
          v39 = &g_MissionQueueFrame.briefing[130]; /*0x570543*/
        }
        DestroyCliffMap((ObjectClass *)this, (int)v39, 2, &v82); /*0x57054f*/
        goto LABEL_109; /*0x57054f*/
      }
      if ( (v37 == g_TerrainSoundTable2 /*0x570486*/
         || v37 == g_TerrainSoundTable2 + 3
         || v37 == g_TerrainSoundTable2 + 4
         || v37 == g_TerrainSoundTable2 + 1
         || v37 == g_TerrainSoundTable2 + 2)
        && *((unsigned char *)v36 + 282) == 5 )
      {
        break; /*0x570486*/
      }
      if ( (v37 == dword_AA1548 || v37 == dword_AA0740) && *((unsigned char *)v36 + 282) == 12 ) /*0x5704a3*/
      {
        Cell::UpdateTileType(v81, 0, 0); /*0x5707b7*/
        v56 = v81[0] + (v81[1] << 9); /*0x5707cb*/
        if ( v56 >= 0x40000 || (v57 = *(int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v56)) == 0 ) /*0x5707e1*/
        {
          g_MissionQueueFrame.briefing[139] = *(unsigned int *)v81; /*0x5707e3*/
          v57 = &g_MissionQueueFrame.briefing[130]; /*0x5707e9*/
        }
        DestroyCliffMap((ObjectClass *)this, (int)v57, 4, &v82); /*0x5707f8*/
LABEL_109:
        Cell::CreateCrater(v82, v83, v84, v85, 0); /*0x5707fd*/
        goto LABEL_139; /*0x57082a*/
      }
      if ( (v37 == g_TerrainSoundConfig /*0x5704d6*/
         || v37 == g_TerrainSoundConfig + 3
         || v37 == g_TerrainSoundConfig + 4
         || v37 == g_TerrainSoundConfig + 1
         || v37 == g_TerrainSoundConfig + 2)
        && *((unsigned char *)v36 + 282) == 7 )
      {
        if ( v37 != g_TerrainSoundConfig + 4 ) /*0x570834*/
        {
          v58 = this; /*0x5709e9*/
          goto LABEL_133; /*0x5709e9*/
        }
        v58 = this; /*0x57083a*/
        Cell::SetTileType(v81, g_TerrainSoundConfig + g_TerrainBridgeIndex - 1, -1, -1, 0); /*0x570850*/
        v59 = (__int16 *)*CellStruct::Add((CellStruct *)v81, &aP1, &g_DDrawSurfaceManager.scenario[82]); /*0x570868*/
        aP1 = v59; /*0x57086a*/
        *(unsigned int *)v79 = v59; /*0x57086e*/
        v60 = (__int16)v59 + (SHIWORD(v59) << 9); /*0x57087d*/
        if ( v60 >= 0x40000 || (v61 = *(int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v60)) == 0 ) /*0x570893*/
        {
          g_MissionQueueFrame.briefing[139] = (int)v59; /*0x570895*/
          v61 = &g_MissionQueueFrame.briefing[130]; /*0x57089b*/
        }
        *((unsigned char *)v61 + 283) += 4; /*0x5708ae*/
        v62 = (__int16 *)*CellStruct::Add((CellStruct *)v79, &v80, &g_DDrawSurfaceManager.scenario[84]); /*0x5708c2*/
        aP1 = v62; /*0x5708c4*/
        v63 = (__int16)v62 + (SHIWORD(v62) << 9); /*0x5708d3*/
        if ( v63 >= 0x40000 || (v64 = *(int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v63)) == 0 ) /*0x5708e9*/
        {
          g_MissionQueueFrame.briefing[139] = (int)v62; /*0x5708eb*/
          v64 = &g_MissionQueueFrame.briefing[130]; /*0x5708f1*/
        }
        *((unsigned char *)v64 + 283) += 4; /*0x570904*/
        v65 = (__int16 *)*CellStruct::Add((CellStruct *)v79, &v80, &g_DDrawSurfaceManager.scenario[88]); /*0x570918*/
        aP1 = v65; /*0x57091a*/
        v66 = (__int16)v65 + (SHIWORD(v65) << 9); /*0x570929*/
        if ( v66 >= 0x40000 || (v67 = *(int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v66)) == 0 ) /*0x57093f*/
        {
          g_MissionQueueFrame.briefing[139] = (int)v65; /*0x570941*/
          v67 = &g_MissionQueueFrame.briefing[130]; /*0x570947*/
        }
        *((unsigned char *)v67 + 283) += 4; /*0x570957*/
        LOBYTE(aP1) = InvalidateTileRegionMap((ObjectClass *)this, v79); /*0x570967*/
        Capacity = v86.Capacity; /*0x57096b*/
        v69 = 0; /*0x57096f*/
        while ( 1 ) /*0x570971*/
        {
          v70 = -2; /*0x570971*/
          do /*0x5709db*/
          {
            v76[0] = v70 + v79[0]; /*0x570983*/
            v76[1] = v69 + v79[1]; /*0x570988*/
            if ( v87 < Capacity ) /*0x570993*/
              goto LABEL_127; /*0x570993*/
            if ( (v86.IsAllocated || !Capacity) && v88 > 0 ) /*0x5709a7*/
            {
              if ( (*((unsigned __int8 (**)(VectorClass *, int, unsigned int))v86.ptr_0 + 2))( /*0x5709b6*/
                     &v86,
                     v88 + Capacity,
                     0) )
              {
LABEL_127:
                v71 = v87++; /*0x5709bd*/
                *((unsigned int *)v86.Items + v71) = *(unsigned int *)v76; /*0x5709d0*/
              }
              Capacity = v86.Capacity; /*0x5709d3*/
            }
            ++v70; /*0x5709d7*/
          }
          while ( v70 < 3 ); /*0x5709db*/
          if ( ++v69 >= 2 ) /*0x5709e1*/
          {
            LOWORD(v32) = v81[0]; /*0x5709e3*/
LABEL_133:
            v76[0] = v32; /*0x5709ed*/
            v76[1] = v81[1] - 2; /*0x5709fd*/
            *(unsigned int *)v77 = *(unsigned int *)v76; /*0x570a06*/
            Terrain::ProcessCellModification(v58, v77); /*0x570a0d*/
            v72 = v81[0] + (v81[1] << 9); /*0x570a21*/
            if ( v72 >= 0x40000 || (v73 = *(int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v72)) == 0 ) /*0x570a37*/
            {
              g_MissionQueueFrame.briefing[139] = *(unsigned int *)v81; /*0x570a39*/
              v73 = &g_MissionQueueFrame.briefing[130]; /*0x570a3f*/
            }
            DestroyCliffMap((ObjectClass *)v58, (int)v73, 4, &v82); /*0x570a4e*/
            Cell::CreateCrater(v82, v83, v84, v85, 0); /*0x570a7b*/
            v53 = this; /*0x570a80*/
LABEL_137:
            if ( (unsigned char)aP1 ) /*0x570a8a*/
              Terrain::ConnectivityGraph(v53); /*0x570a8e*/
LABEL_139:
            if ( v87 > 0 ) /*0x570a99*/
              LayerClass::Update_Pathfinding_2((LayerClass *)this, (int)&v86); /*0x570aa4*/
            /* X11: vtable install elided (legacy slot spelling slot, RHS vt_VectorClass_Cell) */  /*0x570aad*/
            if ( v86.Items ) /*0x570ab7*/
            {
              if ( v86.IsAllocated ) /*0x570abf*/
                __3_YAXPAX_Z(v86.Items); /*0x570ac2*/
            }
            return; /*0x570ac2*/
          }
        }
      }
LABEL_74:
      v32 = *CellStruct::Add((CellStruct *)v81, &v80, (unsigned short *)(4 * (v31 & 7) + 9041544)); /*0x5704dc*/
      *(unsigned int *)v81 = v32; /*0x5704f9*/
    }
    if ( v37 != g_TerrainSoundTable2 + 4 ) /*0x570559*/
      goto LABEL_101; /*0x570559*/
    Cell::SetTileType(v81, g_TerrainSoundTable2 + g_TerrainBridgeIndex - 1, -1, -1, 0); /*0x570573*/
    v40 = (__int16 *)*CellStruct::Add((CellStruct *)v81, &aP1, &g_DDrawSurfaceManager.scenario[88]); /*0x57058b*/
    aP1 = v40; /*0x57058d*/
    *(unsigned int *)v79 = v40; /*0x570591*/
    v41 = (__int16)v40 + (SHIWORD(v40) << 9); /*0x5705a0*/
    if ( v41 >= 0x40000 || (v42 = *(int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v41)) == 0 ) /*0x5705b6*/
    {
      g_MissionQueueFrame.briefing[139] = (int)v40; /*0x5705b8*/
      v42 = &g_MissionQueueFrame.briefing[130]; /*0x5705be*/
    }
    *((unsigned char *)v42 + 283) += 4; /*0x5705d2*/
    v43 = (__int16 *)*CellStruct::Add((CellStruct *)v79, &v80, &g_DDrawSurfaceManager.scenario[82]); /*0x5705e6*/
    aP1 = v43; /*0x5705e8*/
    v44 = (__int16)v43 + (SHIWORD(v43) << 9); /*0x5705f7*/
    if ( v44 >= 0x40000 || (v45 = *(int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v44)) == 0 ) /*0x57060d*/
    {
      g_MissionQueueFrame.briefing[139] = (int)v43; /*0x57060f*/
      v45 = &g_MissionQueueFrame.briefing[130]; /*0x570615*/
    }
    *((unsigned char *)v45 + 283) += 4; /*0x570627*/
    v46 = (__int16 *)*CellStruct::Add((CellStruct *)v79, &v80, &g_DDrawSurfaceManager.scenario[86]); /*0x57063b*/
    aP1 = v46; /*0x57063d*/
    v47 = (__int16)v46 + (SHIWORD(v46) << 9); /*0x57064c*/
    if ( v47 >= 0x40000 || (v48 = *(int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v47)) == 0 ) /*0x570662*/
    {
      g_MissionQueueFrame.briefing[139] = (int)v46; /*0x570664*/
      v48 = &g_MissionQueueFrame.briefing[130]; /*0x57066a*/
    }
    *((unsigned char *)v48 + 283) += 4; /*0x57067b*/
    LOBYTE(aP1) = InvalidateTileRegionMap((ObjectClass *)this, v79); /*0x57068b*/
    v49 = v86.Capacity; /*0x57068f*/
    v50 = 0; /*0x570693*/
LABEL_90:
    v51 = -2; /*0x570695*/
    while ( 1 ) /*0x5706a7*/
    {
      v76[0] = v50 + v79[0]; /*0x5706a7*/
      v76[1] = v51 + v79[1]; /*0x5706ac*/
      if ( v87 < v49 ) /*0x5706b7*/
        goto LABEL_96; /*0x5706b7*/
      if ( !v86.IsAllocated && v49 || v88 <= 0 ) /*0x5706cb*/
        goto LABEL_98; /*0x5706cb*/
      if ( (*((unsigned __int8 (**)(VectorClass *, int, unsigned int))v86.ptr_0 + 2))(&v86, v88 + v49, 0) ) /*0x5706da*/
      {
LABEL_96:
        v52 = v87++; /*0x5706e9*/
        *((unsigned int *)v86.Items + v52) = *(unsigned int *)v76; /*0x5706f4*/
      }
      v49 = v86.Capacity; /*0x5706f7*/
LABEL_98:
      if ( ++v51 >= 3 ) /*0x5706ff*/
      {
        if ( ++v50 >= 2 ) /*0x570705*/
        {
          (v32) = ((v32) & ~0xFFFF) | ((v81[0]) & 0xFFFF); /*0x570707*/
LABEL_101:
          v53 = this; /*0x57070b*/
          v76[1] = v81[1]; /*0x570717*/
          v76[0] = v32 - 2; /*0x57071c*/
          *(unsigned int *)v77 = *(unsigned int *)v76; /*0x570729*/
          Terrain::ProcessCellModification(this, v77); /*0x570730*/
          v54 = v81[0] + (v81[1] << 9); /*0x570744*/
          if ( v54 >= 0x40000 || (v55 = *(int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v54)) == 0 ) /*0x57075a*/
          {
            g_MissionQueueFrame.briefing[139] = *(unsigned int *)v81; /*0x57075c*/
            v55 = &g_MissionQueueFrame.briefing[130]; /*0x570762*/
          }
          DestroyCliffMap((ObjectClass *)this, (int)v55, 2, &v82); /*0x570771*/
          Cell::CreateCrater(v82, v83, v84, v85, 0); /*0x57079e*/
          goto LABEL_137; /*0x5707a3*/
        }
        goto LABEL_90; /*0x570705*/
      }
    }
  }

}
}
// 0x573540
namespace gamemd {
AbstractClass * * Terrain::RecursiveModify(IUnknown * aP1)
{

  CellStruct *v2; // ebx
  int v4; // edi
  int v5; // esi
  __int16 v6; // cx
  int v7; // eax
  __int16 v8; // si
  unsigned int v9; // eax
  int *v10; // eax
  int *v11; // edx
  char v12; // di
  int i; // ebp
  int v14; // ecx
  unsigned int v15; // eax
  int *v16; // eax
  int v17; // ecx
  unsigned int v18; // eax
  int *v19; // eax
  int v20; // ecx
  unsigned int v21; // eax
  int *v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // ebp
  __int16 v26; // di
  int v27; // ecx
  bool v28; // sf
  int v29; // ecx
  int *v30; // ecx
  int v31; // eax
  __int16 v32; // cx
  unsigned short *v33; // eax
  __int16 v34; // si
  __int16 v35; // di
  __int16 v36; // cx
  int v37; // esi
  int v38; // ebx
  int v39; // eax
  void *Terrain_field_0x128; // ecx
  unsigned int v41; // eax
  int *v42; // eax
  int *v43; // edx
  int v44; // eax
  unsigned int v45; // eax
  int *v46; // eax
  Terrain *v47; // ebp
  int v48; // ecx
  int v49; // eax
  int v50; // eax
  int *v51; // eax
  int v52; // ecx
  unsigned int v53; // eax
  int *v54; // eax
  int v55; // ecx
  unsigned int v56; // eax
  int *v57; // eax
  int Capacity; // eax
  int v59; // edi
  int v60; // esi
  int v61; // eax
  unsigned int v62; // eax
  int *v63; // eax
  unsigned int v64; // eax
  int *v65; // eax
  Terrain *v66; // ebp
  int v67; // ecx
  unsigned int v68; // eax
  int *v69; // eax
  int v70; // ecx
  unsigned int v71; // eax
  int *v72; // eax
  int v73; // ecx
  unsigned int v74; // eax
  int *v75; // eax
  int v76; // eax
  int v77; // edi
  int v78; // esi
  int v79; // eax
  unsigned int v80; // eax
  int *v81; // eax
  int v83; // [esp+14h] [ebp-44h] BYREF
  __int16 v84[4]; // [esp+18h] [ebp-40h] BYREF
  __int16 v85[2]; // [esp+20h] [ebp-38h] BYREF
  int v86; // [esp+24h] [ebp-34h] BYREF
  __int16 v87[4]; // [esp+28h] [ebp-30h] BYREF
  int v88; // [esp+30h] [ebp-28h] BYREF
  int v89; // [esp+34h] [ebp-24h]
  int v90; // [esp+38h] [ebp-20h]
  int v91; // [esp+3Ch] [ebp-1Ch]
  VectorClass v92; // [esp+40h] [ebp-18h] BYREF
  int v93; // [esp+50h] [ebp-8h]
  int v94; // [esp+54h] [ebp-4h]

  v2 = (CellStruct *)aP1; /*0x573544*/
  v4 = -2; /*0x573551*/
  do /*0x5735a4*/
  {
    v5 = -2; /*0x573556*/
    do /*0x57359e*/
    {
      v6 = (((v2->field_0) >> 16) & 0xFFFF) + v5; /*0x573564*/
      LOWORD(aP1) = ((v2->field_0) & 0xFFFF) + v4; /*0x573568*/
      HIWORD(aP1) = v6; /*0x57356d*/
      *(unsigned int *)v85 = aP1; /*0x573580*/
      v7 = *((unsigned int *)CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, v85) + 17); /*0x573589*/
      if ( v7 >= 205 && v7 <= 232 ) /*0x573598*/
      {
        v8 = (((v2->field_0) >> 16) & 0xFFFF) + v5; /*0x5735ab*/
        LOWORD(aP1) = ((v2->field_0) & 0xFFFF) + v4; /*0x5735b3*/
        HIWORD(aP1) = v8; /*0x5735b8*/
        CellClass::ApplyTileMod58((CellClass *)this, (int)&aP1); /*0x5735c8*/
        return; /*0x5735d4*/
      }
      ++v5; /*0x57359a*/
    }
    while ( v5 < 3 ); /*0x57359e*/
    ++v4; /*0x5735a0*/
  }
  while ( v4 < 3 ); /*0x5735a4*/
  v9 = (short)((v2->field_0) & 0xFFFF) + ((short)(((v2->field_0) >> 16) & 0xFFFF) << 9); /*0x5735e1*/
  if ( v9 < 0x40000 && (v10 = *(int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v9)) != 0 ) /*0x5735f7*/
  {
    v11 = v10; /*0x5735f9*/
  }
  else
  {
    v11 = &g_MissionQueueFrame.briefing[130]; /*0x5735ff*/
    g_MissionQueueFrame.briefing[139] = v2->field_0; /*0x573604*/
  }
  v12 = 0; /*0x57360f*/
  if ( (v11[80] & 0x500) == 0 ) /*0x573614*/
  {
    for ( i = 0; i < 8; ++i ) /*0x57361a*/
    {
      v14 = *CellStruct::Add(v2, &v86, (unsigned short *)(4 * (v12 & 7) + 9041544)); /*0x573635*/
      *(unsigned int *)v85 = v14; /*0x573637*/
      aP1 = v14; /*0x57363b*/
      v15 = (__int16)v14 + ((short)(((v14) >> 16) & 0xFFFF) << 9); /*0x57364a*/
      if ( v15 < 0x40000 && (v16 = *(int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v15)) != 0 ) /*0x573660*/
      {
        v11 = v16; /*0x573662*/
      }
      else
      {
        g_MissionQueueFrame.briefing[139] = v14; /*0x573666*/
        v11 = &g_MissionQueueFrame.briefing[130]; /*0x57366c*/
      }
      if ( (v11[80] & 0x500) != 0 ) /*0x57367a*/
        break; /*0x57367a*/
      v17 = *CellStruct::Add((CellStruct *)&aP1, v84, (unsigned short *)(4 * (v12 & 7) + 9041544)); /*0x57368f*/
      *(unsigned int *)v85 = v17; /*0x573691*/
      aP1 = v17; /*0x573695*/
      v18 = (__int16)v17 + ((short)(((v17) >> 16) & 0xFFFF) << 9); /*0x5736a4*/
      if ( v18 < 0x40000 && (v19 = *(int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v18)) != 0 ) /*0x5736ba*/
      {
        v11 = v19; /*0x5736bc*/
      }
      else
      {
        g_MissionQueueFrame.briefing[139] = v17; /*0x5736c0*/
        v11 = &g_MissionQueueFrame.briefing[130]; /*0x5736c6*/
      }
      if ( (v11[80] & 0x500) != 0 ) /*0x5736d4*/
        break; /*0x5736d4*/
      v20 = *CellStruct::Add((CellStruct *)&aP1, &v83, (unsigned short *)(4 * (v12 & 7) + 9041544)); /*0x5736e5*/
      *(unsigned int *)v85 = v20; /*0x5736e7*/
      aP1 = v20; /*0x5736eb*/
      v21 = (__int16)v20 + ((short)(((v20) >> 16) & 0xFFFF) << 9); /*0x5736fa*/
      if ( v21 < 0x40000 && (v22 = *(int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v21)) != 0 ) /*0x573710*/
      {
        v11 = v22; /*0x573712*/
      }
      else
      {
        g_MissionQueueFrame.briefing[139] = v20; /*0x573716*/
        v11 = &g_MissionQueueFrame.briefing[130]; /*0x57371c*/
      }
      if ( (v11[80] & 0x500) != 0 ) /*0x57372a*/
        break; /*0x57372a*/
      v12 = (v12 + 1) & 7; /*0x57372d*/
    }
  }
  v23 = v11[80]; /*0x57373a*/
  if ( (v23 & 0x100) != 0 || (v23 & 0x400) != 0 )
  {
    if ( (v11[80] & 0x100) != 0 )
    {
      if ( (v23 & 0x80u) == 0 ) /*0x573759*/
        v24 = *(unsigned int *)(v11[11] + 36); /*0x573766*/
      else
        v24 = v11[9]; /*0x57375b*/
    }
    else
    {
      v25 = v11[9]; /*0x573773*/
      *(unsigned int *)v84 = v25; /*0x57377a*/
      *(unsigned int *)v85 = 0; /*0x573781*/
      v86 = (v23 & 0x800) != 0 ? 4 : 2;
      while ( 1 ) /*0x5737a2*/
      {
        v26 = HIWORD(g_DDrawSurfaceManager.scenario[(v86 & 7) + 82]) + v84[1]; /*0x5737a2*/
        LOWORD(v83) = LOWORD(g_DDrawSurfaceManager.scenario[(v86 & 7) + 82]) + v25; /*0x5737af*/
        (v83) = ((v83) & ~(0xFFFF << 16)) | (((v26) & 0xFFFF) << 16); /*0x5737b4*/
        (v25) = ((v25) & ~0xFFFF) | ((v83) & 0xFFFF); /*0x5737b9*/
        v27 = v26 << 9; /*0x5737bd*/
        v28 = (__int16)v83 + v27 < 0; /*0x5737c0*/
        v29 = (__int16)v83 + v27; /*0x5737c0*/
        *(unsigned int *)v84 = v83; /*0x5737c2*/
        if ( v28 || v29 >= 0x40000 || (v30 = *(int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v29)) == 0 ) /*0x5737db*/
        {
          g_MissionQueueFrame.briefing[139] = v83; /*0x5737e1*/
          v30 = &g_MissionQueueFrame.briefing[130]; /*0x5737e7*/
        }
        if ( (v30[80] & 0x400) == 0 ) /*0x5737f5*/
          break; /*0x5737f5*/
        ++*(unsigned int *)v85; /*0x5737ff*/
        if ( *(int *)v85 >= 4 ) /*0x573803*/
          return; /*0x573803*/
      }
      v31 = ((unsigned char)v86 - 4) & 7; /*0x573819*/
      v32 = g_DDrawSurfaceManager.scenario[v31 + 82]; /*0x57381c*/
      v33 = (unsigned short *)(4 * v31 + 9041544); /*0x573824*/
      v34 = v26 + v33[1]; /*0x573832*/
      v35 = v83 + v32 + *v33; /*0x573838*/
      v36 = v33[1]; /*0x57383b*/
      v85[0] = v35; /*0x573842*/
      v85[1] = v34 + v36; /*0x573847*/
      v24 = *(unsigned int *)v85; /*0x57384c*/
    }
    v37 = (v11[80] & 0x800) != 0 ? 6 : 0;
    *(unsigned int *)v87 = v24; /*0x57386b*/
    VectorClass::CellConstructor(&v92, 0, 0); /*0x57386f*/
    v38 = *(unsigned int *)v87; /*0x573874*/
    v39 = *&this->u32_124; /*0x57387f*/
    /* X11: vtable install elided (legacy slot spelling slot, RHS vt_DynamicVectorClass_Cell) */  /*0x573885*/
    v94 = 10; /*0x57388f*/
    v93 = 0; /*0x573897*/
    LOBYTE(aP1) = 0; /*0x57389f*/
    if ( v87[0] < v39 ) /*0x5738a4*/
      goto LABEL_141; /*0x5738a4*/
    while ( 1 ) /*0x5738aa*/
    {
      if ( (__int16)v38 > (int)this->Terrain_field_0x12C + v39 ) /*0x5738bb*/
        goto LABEL_141; /*0x5738bb*/
      Terrain_field_0x128 = this->Terrain_field_0x128; /*0x5738ca*/
      if ( v87[1] < (int)Terrain_field_0x128 || v87[1] > (int)Terrain_field_0x128 + *(unsigned int *)this->__pad_130 ) /*0x5738e6*/
        goto LABEL_141; /*0x5738e6*/
      v41 = (__int16)v38 + (v87[1] << 9); /*0x5738ef*/
      if ( *((unsigned int *)this->Terrain_field_0x13C + v41) ) /*0x5738fb*/
      {
        if ( v41 < 0x40000 && (v42 = *(int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v41)) != 0 ) /*0x57391b*/
        {
          v43 = v42; /*0x57391d*/
        }
        else
        {
          g_MissionQueueFrame.briefing[139] = v38; /*0x573921*/
          v43 = &g_MissionQueueFrame.briefing[130]; /*0x573927*/
        }
        v44 = v43[14] - g_Cell_BuildabilityLUT + 1; /*0x57393d*/
        if ( (v44 == dword_ABC2B4 || v44 == dword_AA1130) && *((unsigned char *)v43 + 282) == 8 ) /*0x573951*/
        {
          Cell::UpdateTileType(v87, 0, 0); /*0x573a26*/
          v45 = v87[0] + (v87[1] << 9); /*0x573a3a*/
          if ( v45 >= 0x40000 || (v46 = *(int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v45)) == 0 ) /*0x573a50*/
          {
            g_MissionQueueFrame.briefing[139] = *(unsigned int *)v87; /*0x573a52*/
            v46 = &g_MissionQueueFrame.briefing[130]; /*0x573a58*/
          }
          Terrain::PlaceCliffs(this, (int)v46, 2, &v88); /*0x573a64*/
          goto LABEL_111; /*0x573a64*/
        }
        if ( (v44 == g_TerrainSoundTable2 /*0x573984*/
           || v44 == g_TerrainSoundTable2 + 3
           || v44 == g_TerrainSoundTable2 + 4
           || v44 == g_TerrainSoundTable2 + 1
           || v44 == g_TerrainSoundTable2 + 2)
          && *((unsigned char *)v43 + 282) == 5 )
        {
          if ( v44 != g_TerrainSoundTable2 + 4 ) /*0x573a6e*/
          {
            v47 = this; /*0x573c2e*/
LABEL_103:
            v85[0] = v38 - 2; /*0x573c32*/
            v85[1] = v87[1]; /*0x573c3f*/
            v86 = *(unsigned int *)v85; /*0x573c4c*/
            Terrain::RecursiveModify(v47, (int)&v86); /*0x573c53*/
            v62 = v87[0] + (v87[1] << 9); /*0x573c67*/
            if ( v62 >= 0x40000 || (v63 = *(int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v62)) == 0 ) /*0x573c7d*/
            {
              g_MissionQueueFrame.briefing[139] = *(unsigned int *)v87; /*0x573c7f*/
              v63 = &g_MissionQueueFrame.briefing[130]; /*0x573c85*/
            }
            Terrain::PlaceCliffs(v47, (int)v63, 2, &v88); /*0x573c94*/
            Cell::CreateCrater(v88, v89, v90, v91, 0); /*0x573cc1*/
            goto LABEL_139; /*0x573cc6*/
          }
          v47 = this; /*0x573a74*/
          Cell::SetTileType(v87, g_TerrainSoundTable2 + g_Cell_BuildabilityLUT - 1, -1, -1, 0); /*0x573a8a*/
          LOWORD(aP1) = v87[0] + LOWORD(g_DDrawSurfaceManager.scenario[88]); /*0x573aa7*/
          v48 = (__int16)(v87[0] + LOWORD(g_DDrawSurfaceManager.scenario[88])); /*0x573aac*/
          HIWORD(aP1) = HIWORD(g_DDrawSurfaceManager.scenario[88]) + v87[1]; /*0x573aaf*/
          v49 = (__int16)(HIWORD(g_DDrawSurfaceManager.scenario[88]) + v87[1]) << 9; /*0x573abb*/
          v28 = v48 + v49 < 0; /*0x573abe*/
          v50 = v48 + v49; /*0x573abe*/
          *(unsigned int *)v84 = aP1; /*0x573ac0*/
          if ( v28 || v50 >= 0x40000 || (v51 = *(int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v50)) == 0 ) /*0x573ad8*/
          {
            g_MissionQueueFrame.briefing[139] = aP1; /*0x573ada*/
            v51 = &g_MissionQueueFrame.briefing[130]; /*0x573ae0*/
          }
          *((unsigned char *)v51 + 283) += 4; /*0x573af7*/
          v52 = *CellStruct::Add((CellStruct *)v84, &v86, &g_DDrawSurfaceManager.scenario[82]); /*0x573b07*/
          aP1 = v52; /*0x573b09*/
          v53 = (__int16)v52 + ((short)(((v52) >> 16) & 0xFFFF) << 9); /*0x573b18*/
          if ( v53 >= 0x40000 || (v54 = *(int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v53)) == 0 ) /*0x573b2e*/
          {
            g_MissionQueueFrame.briefing[139] = v52; /*0x573b30*/
            v54 = &g_MissionQueueFrame.briefing[130]; /*0x573b36*/
          }
          *((unsigned char *)v54 + 283) += 4; /*0x573b49*/
          v55 = *CellStruct::Add((CellStruct *)v84, &v86, &g_DDrawSurfaceManager.scenario[86]); /*0x573b5d*/
          aP1 = v55; /*0x573b5f*/
          v56 = (__int16)v55 + ((short)(((v55) >> 16) & 0xFFFF) << 9); /*0x573b6e*/
          if ( v56 >= 0x40000 || (v57 = *(int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v56)) == 0 ) /*0x573b84*/
          {
            g_MissionQueueFrame.briefing[139] = v55; /*0x573b86*/
            v57 = &g_MissionQueueFrame.briefing[130]; /*0x573b8c*/
          }
          *((unsigned char *)v57 + 283) += 4; /*0x573b9c*/
          LOBYTE(aP1) = InvalidateTileRegionMap((ObjectClass *)this, v84); /*0x573bac*/
          Capacity = v92.Capacity; /*0x573bb0*/
          v59 = 0; /*0x573bb4*/
          while ( 2 ) /*0x573bb6*/
          {
            v60 = -2; /*0x573bb6*/
LABEL_92:
            v85[0] = v59 + v84[0]; /*0x573bbb*/
            v85[1] = v60 + v84[1]; /*0x573bcd*/
            if ( v93 >= Capacity ) /*0x573bd8*/
            {
              if ( (v92.IsAllocated || !Capacity) && v94 > 0 ) /*0x573bec*/
              {
                if ( (*((unsigned __int8 (**)(VectorClass *, int, unsigned int))v92.ptr_0 + 2))( /*0x573bfb*/
                       &v92,
                       v94 + Capacity,
                       0) )
                {
                  break; /*0x573c00*/
                }
LABEL_98:
                Capacity = v92.Capacity; /*0x573c18*/
              }
              if ( ++v60 >= 3 ) /*0x573c20*/
              {
                if ( ++v59 >= 2 ) /*0x573c26*/
                {
                  LOWORD(v38) = v87[0]; /*0x573c28*/
                  goto LABEL_103; /*0x573c2c*/
                }
                continue; /*0x573c26*/
              }
              goto LABEL_92; /*0x573c20*/
            }
            break;
          }
          v61 = v93++; /*0x573c02*/
          *((unsigned int *)v92.Items + v61) = *(unsigned int *)v85; /*0x573c15*/
          goto LABEL_98; /*0x573c15*/
        }
        if ( (v44 == dword_AA1548 || v44 == dword_AA0740) && *((unsigned char *)v43 + 282) == 12 ) /*0x5739a1*/
        {
          Cell::UpdateTileType(v87, 0, 0); /*0x573cda*/
          v64 = v87[0] + (v87[1] << 9); /*0x573cee*/
          if ( v64 >= 0x40000 || (v65 = *(int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v64)) == 0 ) /*0x573d04*/
          {
            g_MissionQueueFrame.briefing[139] = *(unsigned int *)v87; /*0x573d06*/
            v65 = &g_MissionQueueFrame.briefing[130]; /*0x573d0c*/
          }
          Terrain::PlaceCliffs(this, (int)v65, 4, &v88); /*0x573d1b*/
LABEL_111:
          Cell::CreateCrater(v88, v89, v90, v91, 0); /*0x573d20*/
          goto LABEL_141; /*0x573d4d*/
        }
        if ( (v44 == g_TerrainSoundConfig /*0x5739d4*/
           || v44 == g_TerrainSoundConfig + 3
           || v44 == g_TerrainSoundConfig + 4
           || v44 == g_TerrainSoundConfig + 1
           || v44 == g_TerrainSoundConfig + 2)
          && *((unsigned char *)v43 + 282) == 7 )
        {
          break; /*0x5739d4*/
        }
      }
      v38 = *CellStruct::Add((CellStruct *)v87, &v86, (unsigned short *)(4 * (v37 & 7) + 9041544)); /*0x5739fb*/
      v39 = *&this->u32_124; /*0x5739fd*/
      *(unsigned int *)v87 = v38; /*0x573a03*/
      if ( (__int16)v38 < v39 ) /*0x573a0c*/
        goto LABEL_141; /*0x573a0c*/
    }
    if ( v44 != g_TerrainSoundConfig + 4 ) /*0x573d57*/
    {
      v66 = this; /*0x573f0c*/
      goto LABEL_135; /*0x573f0c*/
    }
    v66 = this; /*0x573d5d*/
    Cell::SetTileType(v87, g_TerrainSoundConfig + g_Cell_BuildabilityLUT - 1, -1, -1, 0); /*0x573d73*/
    v67 = *CellStruct::Add((CellStruct *)v87, &aP1, &g_DDrawSurfaceManager.scenario[82]); /*0x573d8b*/
    aP1 = v67; /*0x573d8d*/
    *(unsigned int *)v84 = v67; /*0x573d91*/
    v68 = (__int16)v67 + ((short)(((v67) >> 16) & 0xFFFF) << 9); /*0x573da0*/
    if ( v68 >= 0x40000 || (v69 = *(int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v68)) == 0 ) /*0x573db6*/
    {
      g_MissionQueueFrame.briefing[139] = v67; /*0x573db8*/
      v69 = &g_MissionQueueFrame.briefing[130]; /*0x573dbe*/
    }
    *((unsigned char *)v69 + 283) += 4; /*0x573dd1*/
    v70 = *CellStruct::Add((CellStruct *)v84, &v86, &g_DDrawSurfaceManager.scenario[84]); /*0x573de5*/
    aP1 = v70; /*0x573de7*/
    v71 = (__int16)v70 + ((short)(((v70) >> 16) & 0xFFFF) << 9); /*0x573df6*/
    if ( v71 >= 0x40000 || (v72 = *(int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v71)) == 0 ) /*0x573e0c*/
    {
      g_MissionQueueFrame.briefing[139] = v70; /*0x573e0e*/
      v72 = &g_MissionQueueFrame.briefing[130]; /*0x573e14*/
    }
    *((unsigned char *)v72 + 283) += 4; /*0x573e27*/
    v73 = *CellStruct::Add((CellStruct *)v84, &v86, &g_DDrawSurfaceManager.scenario[88]); /*0x573e3b*/
    aP1 = v73; /*0x573e3d*/
    v74 = (__int16)v73 + ((short)(((v73) >> 16) & 0xFFFF) << 9); /*0x573e4c*/
    if ( v74 >= 0x40000 || (v75 = *(int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v74)) == 0 ) /*0x573e62*/
    {
      g_MissionQueueFrame.briefing[139] = v73; /*0x573e64*/
      v75 = &g_MissionQueueFrame.briefing[130]; /*0x573e6a*/
    }
    *((unsigned char *)v75 + 283) += 4; /*0x573e7a*/
    LOBYTE(aP1) = InvalidateTileRegionMap((ObjectClass *)this, v84); /*0x573e8a*/
    v76 = v92.Capacity; /*0x573e8e*/
    v77 = 0; /*0x573e92*/
LABEL_123:
    v78 = -2; /*0x573e94*/
    while ( 1 ) /*0x573ea6*/
    {
      v85[0] = v78 + v84[0]; /*0x573ea6*/
      v85[1] = v77 + v84[1]; /*0x573eab*/
      if ( v93 < v76 ) /*0x573eb6*/
        goto LABEL_129; /*0x573eb6*/
      if ( !v92.IsAllocated && v76 || v94 <= 0 ) /*0x573eca*/
        goto LABEL_131; /*0x573eca*/
      if ( (*((unsigned __int8 (**)(VectorClass *, int, unsigned int))v92.ptr_0 + 2))(&v92, v94 + v76, 0) ) /*0x573ed9*/
      {
LABEL_129:
        v79 = v93++; /*0x573ee8*/
        *((unsigned int *)v92.Items + v79) = *(unsigned int *)v85; /*0x573ef3*/
      }
      v76 = v92.Capacity; /*0x573ef6*/
LABEL_131:
      if ( ++v78 >= 3 ) /*0x573efe*/
      {
        if ( ++v77 >= 2 ) /*0x573f04*/
        {
          (v38) = ((v38) & ~0xFFFF) | ((v87[0]) & 0xFFFF); /*0x573f06*/
LABEL_135:
          v85[0] = v38; /*0x573f10*/
          v85[1] = v87[1] - 2; /*0x573f20*/
          v86 = *(unsigned int *)v85; /*0x573f29*/
          Terrain::RecursiveModify(v66, (int)&v86); /*0x573f30*/
          v80 = v87[0] + (v87[1] << 9); /*0x573f44*/
          if ( v80 >= 0x40000 || (v81 = *(int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v80)) == 0 ) /*0x573f5a*/
          {
            g_MissionQueueFrame.briefing[139] = *(unsigned int *)v87; /*0x573f5c*/
            v81 = &g_MissionQueueFrame.briefing[130]; /*0x573f62*/
          }
          Terrain::PlaceCliffs(v66, (int)v81, 4, &v88); /*0x573f71*/
          Cell::CreateCrater(v88, v89, v90, v91, 0); /*0x573f9e*/
          v47 = this; /*0x573fa3*/
LABEL_139:
          if ( (unsigned char)aP1 ) /*0x573fad*/
            Terrain::ConnectivityGraph(v47); /*0x573fb1*/
LABEL_141:
          if ( v93 > 0 ) /*0x573fbc*/
            LayerClass::Update_Pathfinding_2((LayerClass *)this, (int)&v92); /*0x573fc7*/
          /* X11: vtable install elided (legacy slot spelling slot, RHS vt_VectorClass_Cell) */  /*0x573fd0*/
          if ( v92.Items ) /*0x573fda*/
          {
            if ( v92.IsAllocated ) /*0x573fe2*/
              __3_YAXPAX_Z(v92.Items); /*0x573fe5*/
          }
          return; /*0x573fe5*/
        }
        goto LABEL_123; /*0x573f04*/
      }
    }
  }

}
}
// 0x576770
namespace gamemd {
int Terrain::CreateCrater(IUnknown * aP1, void *a2_1, void *a3_1, void *a4_1, void *a5_1)
{

  unsigned short *v2; // edi
  char v3; // si
  int i; // ebx
  int v5; // eax
  __int16 v6; // dx
  unsigned int v7; // eax
  int *v8; // eax
  int *v9; // edx
  int v10; // eax
  int v11; // eax
  int v12; // ebx
  __int16 v13; // dx
  int v14; // esi
  bool v15; // sf
  int v16; // esi
  int *v17; // esi
  int v18; // eax
  __int16 v19; // si
  int v20; // ebp
  int v21; // edi
  int v22; // ebp
  int v23; // esi
  unsigned int v24; // eax
  int *v25; // eax
  int *v26; // edx
  int v27; // eax
  int v28; // edx
  int v29; // edx
  int v30; // esi
  int v31; // ecx
  __int16 v33; // [esp+16h] [ebp-1Eh]
  int v34; // [esp+18h] [ebp-1Ch]
  int *v35; // [esp+1Ch] [ebp-18h]
  int v36; // [esp+1Ch] [ebp-18h]
  int v37; // [esp+20h] [ebp-14h]
  int v38; // [esp+24h] [ebp-10h] BYREF
  int v39; // [esp+28h] [ebp-Ch]
  int v40; // [esp+2Ch] [ebp-8h]
  int v41; // [esp+30h] [ebp-4h]

  v2 = (unsigned short *)a2; /*0x576781*/
  v3 = 0; /*0x576785*/
  for ( i = 0; i < 8; ++i ) /*0x576787*/
  {
    v5 = v3 & 7; /*0x57678b*/
    v6 = g_DDrawSurfaceManager.scenario[v5 + 82]; /*0x57678e*/
    LOWORD(v5) = v2[1] + HIWORD(g_DDrawSurfaceManager.scenario[v5 + 82]); /*0x5767a4*/
    LOWORD(a2) = *v2 + v6; /*0x5767a8*/
    HIWORD(a2) = v5; /*0x5767b0*/
    v7 = (__int16)a2 + ((__int16)v5 << 9); /*0x5767bb*/
    if ( v7 < 0x40000 && (v8 = *(int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v7)) != 0 ) /*0x5767cb*/
    {
      v9 = v8; /*0x5767cd*/
    }
    else
    {
      v9 = &g_MissionQueueFrame.briefing[130]; /*0x5767d5*/
      g_MissionQueueFrame.briefing[139] = a2; /*0x5767da*/
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
      v11 = *(unsigned int *)(v9[11] + 36); /*0x576824*/
    else
      v11 = v9[9]; /*0x576819*/
  }
  else
  {
    v12 = v9[9]; /*0x576831*/
    v33 = (((v12) >> 16) & 0xFFFF); /*0x576838*/
    v34 = 0; /*0x57683f*/
    v37 = (v10 & 0x800) != 0 ? 4 : 2;
    while ( 1 ) /*0x57685c*/
    {
      v13 = v12 + LOWORD(g_DDrawSurfaceManager.scenario[(v37 & 7) + 82]); /*0x57685c*/
      LOWORD(a2) = v13; /*0x57685f*/
      HIWORD(a2) = v33 + HIWORD(g_DDrawSurfaceManager.scenario[(v37 & 7) + 82]); /*0x576873*/
      (v12) = ((v12) & ~0xFFFF) | ((v13) & 0xFFFF); /*0x576878*/
      v14 = SHIWORD(a2) << 9; /*0x57687c*/
      v15 = v13 + v14 < 0; /*0x57687f*/
      v16 = v13 + v14; /*0x57687f*/
      v33 = HIWORD(a2); /*0x576881*/
      if ( v15 || v16 >= 0x40000 || (v17 = *(int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v16)) == 0 ) /*0x57689a*/
      {
        g_MissionQueueFrame.briefing[139] = a2; /*0x57689c*/
        v17 = &g_MissionQueueFrame.briefing[130]; /*0x5768a2*/
      }
      if ( (v17[80] & 0x400) == 0 ) /*0x5768b0*/
        break; /*0x5768b0*/
      (v10) = ((v10) & ~0xFF) | ((++v34) & 0xFF); /*0x5768b6*/
      if ( v34 >= 4 ) /*0x5768be*/
        return v10; /*0x5768be*/
    }
    v18 = ((unsigned char)v37 - 4) & 7; /*0x5768d4*/
    v19 = HIWORD(a2) + HIWORD(g_DDrawSurfaceManager.scenario[v18 + 82]); /*0x5768f9*/
    LOWORD(a2) = LOWORD(g_DDrawSurfaceManager.scenario[v18 + 82]) /*0x5768fc*/
               + v13
               + LOWORD(g_DDrawSurfaceManager.scenario[v18 + 82]);
    HIWORD(a2) = v19 + HIWORD(g_DDrawSurfaceManager.scenario[v18 + 82]); /*0x576908*/
    v11 = a2; /*0x57690d*/
    v9 = v35; /*0x576911*/
  }
  v20 = v9[80]; /*0x576915*/
  v21 = v11; /*0x576933*/
  a2 = v11; /*0x57693a*/
  v38 = *(unsigned int *)&g_MissionQueueFrame.waypoints[2118]; /*0x576940*/
  v39 = *(unsigned int *)&g_MissionQueueFrame.waypoints[2122]; /*0x57694b*/
  v22 = (v20 & 0x800) != 0 ? 6 : 0;
  v40 = *(unsigned int *)&g_MissionQueueFrame.waypoints[2126]; /*0x576952*/
  v41 = *(unsigned int *)&g_MissionQueueFrame.waypoints[2130]; /*0x576956*/
  while ( 1 ) /*0x57695a*/
  {
    LOBYTE(v10) = BYTE2(a2); /*0x57695a*/
    v23 = SHIWORD(a2) + (__int16)v21; /*0x576962*/
    if ( v23 <= *(int *)&g_Cell_PositionLUT /*0x576990*/
      || (__int16)v21 - SHIWORD(a2) >= *(int *)&g_Cell_PositionLUT
      || SHIWORD(a2) - (__int16)v21 >= *(int *)&g_Cell_PositionLUT
      || v23 > *(unsigned int *)&g_Cell_PositionLUT + 2 * *(unsigned int *)&g_CellPositionOffset )
    {
      return v10; /*0x576990*/
    }
    v24 = (__int16)v21 + (SHIWORD(a2) << 9); /*0x57699d*/
    if ( !*((unsigned int *)this->Terrain_field_0x13C + v24) ) /*0x5769a9*/
      goto LABEL_49; /*0x5769a9*/
    if ( v24 < 0x40000 && (v25 = *(int **)(*(unsigned int *)&g_Shroud_CellArray + 4 * v24)) != 0 ) /*0x5769c5*/
    {
      v26 = v25; /*0x5769c7*/
    }
    else
    {
      g_MissionQueueFrame.briefing[139] = v21; /*0x5769cb*/
      v26 = &g_MissionQueueFrame.briefing[130]; /*0x5769d1*/
    }
    v27 = v26[14] - g_Cell_BuildabilityLUT + 1; /*0x5769e7*/
    if ( (v27 == dword_ABC2B4 || v27 == dword_AA1130) && *((unsigned char *)v26 + 282) == 8 ) /*0x5769fb*/
      break; /*0x5769fb*/
    if ( (v27 == g_TerrainSoundTable2 /*0x576a27*/
       || v27 == g_TerrainSoundTable2 + 3
       || v27 == g_TerrainSoundTable2 + 1
       || v27 == g_TerrainSoundTable2 + 2)
      && *((unsigned char *)v26 + 282) == 5 )
    {
      break; /*0x576a27*/
    }
    if ( (v27 == dword_AA1548 || v27 == dword_AA0740) && *((unsigned char *)v26 + 282) == 12 ) /*0x576a44*/
    {
      (v10) = ((v10) & ~0xFF) | ((CellClass::RecursiveCraterUpdate((CellClass *)this, (__int16 *)&a2, 4, &v38)) & 0xFF); /*0x576b26*/
      goto LABEL_51; /*0x576b26*/
    }
    if ( (v27 == g_TerrainSoundConfig /*0x576a6e*/
       || v27 == g_TerrainSoundConfig + 3
       || v27 == g_TerrainSoundConfig + 2
       || v27 == g_TerrainSoundConfig + 1)
      && *((unsigned char *)v26 + 282) == 7 )
    {
      LOBYTE(v10) = CellClass::RecursiveCraterUpdate((CellClass *)this, (__int16 *)&a2, 4, &v38); /*0x576b38*/
      if ( (unsigned char)v10 ) /*0x576b3f*/
      {
        v10 = v38; /*0x576b41*/
        v29 = v39; /*0x576b4b*/
        v30 = v41; /*0x576b4f*/
        v31 = v40; /*0x576b55*/
        if ( v38 != *(unsigned int *)&g_MissionQueueFrame.waypoints[2118] /*0x576b71*/
          || v39 != *(unsigned int *)&g_MissionQueueFrame.waypoints[2122]
          || v40 != *(unsigned int *)&g_MissionQueueFrame.waypoints[2126]
          || v41 != *(unsigned int *)&g_MissionQueueFrame.waypoints[2130] )
        {
          goto LABEL_64; /*0x576b71*/
        }
      }
      return v10; /*0x576b71*/
    }
LABEL_49:
    v28 = v22 & 7; /*0x576a74*/
    LOWORD(v36) = v21 + LOWORD(g_DDrawSurfaceManager.scenario[v28 + 82]); /*0x576a8f*/
    HIWORD(v36) = HIWORD(a2) + HIWORD(g_DDrawSurfaceManager.scenario[v28 + 82]); /*0x576a99*/
    v21 = v36; /*0x576a9e*/
    a2 = v36; /*0x576aa2*/
  }
  (v10) = ((v10) & ~0xFF) | ((CellClass::RecursiveCraterUpdate((CellClass *)this, (__int16 *)&a2, 2, &v38)) & 0xFF); /*0x576ab7*/
LABEL_51:
  if ( (unsigned char)v10 ) /*0x576abe*/
  {
    v10 = v38; /*0x576ac4*/
    v29 = v39; /*0x576ace*/
    v30 = v41; /*0x576ad2*/
    v31 = v40; /*0x576ad8*/
    if ( v38 != *(unsigned int *)&g_MissionQueueFrame.waypoints[2118] /*0x576afc*/
      || v39 != *(unsigned int *)&g_MissionQueueFrame.waypoints[2122]
      || v40 != *(unsigned int *)&g_MissionQueueFrame.waypoints[2126]
      || v41 != *(unsigned int *)&g_MissionQueueFrame.waypoints[2130] )
    {
LABEL_64:
      LOBYTE(v10) = Cell::CreateCrater(v10, v29, v31, v30, 0); /*0x576b73*/
    }
  }
  return v10; /*0x5768c0*/

}
}
// 0x579620
namespace gamemd {
VectorClass_flat * * Terrain::SelectTileType(Random * aP0, IUnknown * aP1)
{
  int v2; // eax
  int AdjacencyFlags; // ebx
  unsigned int v5; // eax
  unsigned int *v6; // eax
  char v7; // bl
  unsigned int v8; // eax
  unsigned int *v9; // eax
  char v10; // al
  int v11; // edx
  unsigned int v12; // eax
  unsigned int *v13; // eax
  char v14; // si
  unsigned int v15; // eax
  unsigned int *v16; // eax
  char v17; // al
  int v18; // ecx
  unsigned int v19; // eax
  unsigned int *v20; // eax
  char v21; // al
  unsigned int v22; // eax
  unsigned int *v23; // eax
  char v24; // si
  unsigned int v25; // eax
  unsigned int *v26; // eax
  char v27; // al
  unsigned int v28; // eax
  unsigned int *v29; // eax
  char v30; // al
  int v31; // eax
  int16_t v32; // cx
  int16_t v33; // dx
  char v35; // [esp-10h] [ebp-34h]
  int v37; // [esp+14h] [ebp-10h] BYREF
  int v38; // [esp+1Ch] [ebp-8h] BYREF

  v2 = Range_RandomInt(0, 5u); /*0x579630*/
  aP0 = aP0; /*0x579635*/
  v2 = v2; /*0x57963c*/
  AdjacencyFlags = Cell::GetAdjacencyFlags(aP0); /*0x579645*/
  v38 = AdjacencyFlags; /*0x57964e*/
  if ( (AdjacencyFlags & 0xA0) == 0xA0 ) /*0x579652*/
  {
    v37 = *&aP0->u32_24; /*0x57965b*/
    aP0 = v37 + 0x10000; /*0x57966b*/
    v5 = (int16_t)v37 + ((int16_t)((((unsigned int)(v37) >> 16) & 0xFFFF) + 1) << 9); /*0x579679*/
    if ( v5 >= 0x40000 || (v6 = *(unsigned int **)(dword_87F924 + 4 * v5)) == 0 ) /*0x57968f*/
    {
      dword_ABDC74 = aP0; /*0x579695*/
      v6 = unk_ABDC50; /*0x57969a*/
    }
    v7 = Cell::GetAdjacencyFlags((int)v6); /*0x5796a7*/
    v37 = *&aP0->u32_24; /*0x5796ac*/
    (*(((unsigned short *)&(aP0)) + 1)) = (((unsigned int)(v37) >> 16) & 0xFFFF); /*0x5796b8*/
    (*((unsigned short *)&(aP0))) = v37 + 1; /*0x5796bd*/
    v8 = (int16_t)(v37 + 1) + ((*((signed short *)(((unsigned char *)&(v37)) + 2))) << 9); /*0x5796cb*/
    if ( v8 >= 0x40000 || (v9 = *(unsigned int **)(dword_87F924 + 4 * v8)) == 0 ) /*0x5796e1*/
    {
      dword_ABDC74 = aP0; /*0x5796e7*/
      v9 = unk_ABDC50; /*0x5796ec*/
    }
    v10 = Cell::GetAdjacencyFlags((int)v9); /*0x5796f4*/
    if ( (v7 & 0x20) != 0 || v10 < 0 ) /*0x579704*/
    {
      v11 = 34; /*0x5797fc*/
      goto LABEL_82; /*0x579801*/
    }
    v11 = v2 % 3 + 9; /*0x579716*/
    if ( v2 % 3 != -10 ) /*0x57971c*/
      goto LABEL_81; /*0x57971c*/
    (AdjacencyFlags) = ((AdjacencyFlags) & ~0xFF) | ((unsigned int)(v38) & 0xFF); /*0x579722*/
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
      v38 = *&aP0->u32_24; /*0x579878*/
      aP0 = v38 + 0x10000; /*0x579888*/
      v19 = (int16_t)v38 + ((int16_t)((((unsigned int)(v38) >> 16) & 0xFFFF) + 1) << 9); /*0x579896*/
      if ( v19 >= 0x40000 || (v20 = *(unsigned int **)(dword_87F924 + 4 * v19)) == 0 ) /*0x5798ac*/
      {
        dword_ABDC74 = aP0; /*0x5798b2*/
        v20 = unk_ABDC50; /*0x5798b7*/
      }
      v21 = Cell::GetAdjacencyFlags((int)v20); /*0x5798bf*/
      if ( (AdjacencyFlags & 0x10) == 0 || (AdjacencyFlags & 0xC) != 0 || (v21 & 0x28) == 0x28 ) /*0x5798d3*/
      {
        v11 = 18; /*0x5798f6*/
        goto LABEL_82; /*0x5798fb*/
      }
      v11 = v2 % 3 + 15; /*0x5798e1*/
    }
    else if ( (AdjacencyFlags & 8) != 0 ) /*0x579903*/
    {
      v38 = *&aP0->u32_24; /*0x57990c*/
      (*(((unsigned short *)&(aP0)) + 1)) = (((unsigned int)(v38) >> 16) & 0xFFFF); /*0x579918*/
      (*((unsigned short *)&(aP0))) = v38 + 1; /*0x57991d*/
      v22 = (int16_t)(v38 + 1) + ((*((signed short *)(((unsigned char *)&(v38)) + 2))) << 9); /*0x57992b*/
      if ( v22 >= 0x40000 || (v23 = *(unsigned int **)(dword_87F924 + 4 * v22)) == 0 ) /*0x579941*/
      {
        v23 = unk_ABDC50; /*0x579947*/
        dword_ABDC74 = aP0; /*0x57994c*/
      }
      v24 = Cell::GetAdjacencyFlags((int)v23); /*0x57995a*/
      v38 = *&aP0->u32_24; /*0x57995f*/
      (*((unsigned short *)&(aP0))) = v38 + 1; /*0x57996b*/
      (*(((unsigned short *)&(aP0)) + 1)) = (((unsigned int)(v38) >> 16) & 0xFFFF) + 1; /*0x579970*/
      v25 = (int16_t)(v38 + 1) + ((int16_t)((((unsigned int)(v38) >> 16) & 0xFFFF) + 1) << 9); /*0x57997e*/
      if ( v25 >= 0x40000 || (v26 = *(unsigned int **)(dword_87F924 + 4 * v25)) == 0 ) /*0x579994*/
      {
        dword_ABDC74 = aP0; /*0x57999a*/
        v26 = unk_ABDC50; /*0x57999f*/
      }
      v27 = Cell::GetAdjacencyFlags((int)v26); /*0x5799a7*/
      if ( (AdjacencyFlags & 4) == 0 || (AdjacencyFlags & 3) != 0 || (v24 & 0xA) == 0xA ) /*0x5799be*/
      {
        if ( (AdjacencyFlags & 6) != 0 || (v27 & 8) != 0 || (v2 & 1) == 0 ) /*0x5799e2*/
          v11 = 26; /*0x5799ee*/
        else
          v11 = 21; /*0x5799e4*/
        goto LABEL_82; /*0x5799e9*/
      }
      v11 = v2 % 3 + 23; /*0x5799cc*/
    }
    else
    {
      if ( (AdjacencyFlags & 0x80u) == 0 ) /*0x5799fb*/
      {
        v18 = v2; /*0x579a7c*/
        LABEL_73:
        if ( (AdjacencyFlags & 1) != 0 ) /*0x579a83*/
        {
          v11 = 2; /*0x579a85*/
          goto LABEL_82; /*0x579a8a*/
        }
        if ( (AdjacencyFlags & 4) != 0 ) /*0x579a8f*/
        {
          v11 = (v18 & 1) + 29; /*0x579a97*/
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
          v11 = v18 % 3 + 12; /*0x579aba*/
        }
        LABEL_81:
        if ( v11 <= 0 ) /*0x579abf*/
          return 1; /*0x579abf*/
        goto LABEL_82; /*0x579abf*/
      }
      v38 = *&aP0->u32_24; /*0x579a00*/
      (*(((unsigned short *)&(aP0)) + 1)) = (((unsigned int)(v38) >> 16) & 0xFFFF); /*0x579a0c*/
      (*((unsigned short *)&(aP0))) = v38 + 1; /*0x579a11*/
      v28 = (int16_t)(v38 + 1) + ((*((signed short *)(((unsigned char *)&(v38)) + 2))) << 9); /*0x579a1f*/
      if ( v28 >= 0x40000 || (v29 = *(unsigned int **)(dword_87F924 + 4 * v28)) == 0 ) /*0x579a35*/
      {
        v29 = unk_ABDC50; /*0x579a3b*/
        dword_ABDC74 = aP0; /*0x579a40*/
      }
      v30 = Cell::GetAdjacencyFlags((int)v29); /*0x579a49*/
      if ( (AdjacencyFlags & 1) == 0 || (AdjacencyFlags & 6) != 0 || (v30 & 0x82) == 0x82 ) /*0x579a5f*/
      {
        v11 = 8; /*0x579a75*/
        goto LABEL_82; /*0x579a7a*/
      }
      v11 = v2 % 3 + 5; /*0x579a6d*/
    }
    v18 = v2; /*0x5798e4*/
    LABEL_44:
    if ( v11 != -1 ) /*0x5798eb*/
      goto LABEL_81; /*0x5798eb*/
    goto LABEL_73; /*0x5798eb*/
  }
  v38 = *&aP0->u32_24; /*0x579732*/
  aP0 = v38 + 0x10000; /*0x579742*/
  v12 = (int16_t)v38 + ((int16_t)((((unsigned int)(v38) >> 16) & 0xFFFF) + 1) << 9); /*0x579750*/
  if ( v12 >= 0x40000 || (v13 = *(unsigned int **)(dword_87F924 + 4 * v12)) == 0 ) /*0x579766*/
  {
    dword_ABDC74 = aP0; /*0x57976c*/
    v13 = unk_ABDC50; /*0x579771*/
  }
  v14 = Cell::GetAdjacencyFlags((int)v13); /*0x57977e*/
  v38 = *&aP0->u32_24; /*0x579783*/
  (*((unsigned short *)&(aP0))) = v38 + 1; /*0x579791*/
  (*(((unsigned short *)&(aP0)) + 1)) = (*(((unsigned short *)&(v38)) + 1)) + 1; /*0x579796*/
  v15 = (int16_t)(v38 + 1) + ((int16_t)((*(((unsigned short *)&(v38)) + 1)) + 1) << 9); /*0x5797a4*/
  if ( v15 >= 0x40000 || (v16 = *(unsigned int **)(dword_87F924 + 4 * v15)) == 0 ) /*0x5797ba*/
  {
    dword_ABDC74 = aP0; /*0x5797c0*/
    v16 = unk_ABDC50; /*0x5797c5*/
  }
  v17 = Cell::GetAdjacencyFlags((int)v16); /*0x5797cd*/
  if ( (AdjacencyFlags & 4) != 0 && (AdjacencyFlags & 0x18) == 0 && (v14 & 0xA) != 0xA ) /*0x5797e4*/
  {
    v18 = v2; /*0x5797e6*/
    v11 = v2 % 3 + 35; /*0x5797f4*/
    goto LABEL_44; /*0x5797f7*/
  }
  if ( (AdjacencyFlags & 0xC) != 0 || (v17 & 2) != 0 || (v2 & 1) == 0 ) /*0x579856*/
    v11 = 38; /*0x579862*/
  else
    v11 = 1; /*0x579858*/
  LABEL_82:
  dword_880990 = *((unsigned int *)dword_A8ED2C + v11 + g_TerrainBuildConfig - 1); /*0x579ac5*/
  v31 = *&aP0->u32_24; /*0x579adb*/
  v32 = g_abs_ABDDA4[2 * v11]; /*0x579ade*/
  v33 = g_abs_ABDDA6[2 * v11]; /*0x579ae6*/
  (*((unsigned short *)&(aP0))) = v31 + v32; /*0x579afa*/
  (*(((unsigned short *)&(aP0)) + 1)) = (*(((unsigned short *)&(v31)) + 1)) + v33; /*0x579aff*/
  v38 = aP0; /*0x579b17*/
  Tactical::MouseMove((int)&dword_87F7E8, &v37, &v38); /*0x579b1b*/
  v35 = aP0->u32_11B; /*0x579b33*/
  (*((unsigned char *)&(aP0))) = 1; /*0x579b3a*/
  return GenerateTerrainMap(0, 0, v35, aP1, &aP0, 0) || (unsigned char)aP0; /*0x579b4e*/
}
}
// 0x5A28C0
namespace gamemd {
void Terrain::PlaceTiberiumTrees(ScenarioClass * aP0, int a2, int a3, char a4)
{

  __int16 *v5; // ebx
  int v6; // edi
  void *v7; // eax
  Heap *v8; // eax
  Heap *v9; // esi
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  bool v14; // sf
  int i; // eax
  int j; // eax
  unsigned int *v17; // edi
  unsigned int v18; // ecx
  unsigned int v19; // edx
  Heap edi22; // edi
  float *v20; // ebx
  unsigned int v23; // eax
  Heap v24; // eax
  __int16 *v25; // ebx
  int v26; // edx
  unsigned int *v27; // ecx
  int v28; // eax
  int k; // eax
  unsigned int v30; // eax
  TerrainClass *v31; // edi
  int v32; // eax
  unsigned int v33; // eax
  unsigned __int8 v34; // al
  float *v35; // edi
  int v36; // ecx
  __int16 v37; // ax
  BuildingClass *v38; // ebx
  int v39; // ecx
  int v40; // edx
  int v41; // eax
  int v42; // edx
  float *v43; // ebx
  int v45; // eax
  unsigned int v46; // ecx
  unsigned int v47; // edx
  Heap v49; // eax
  Heap v50; // eax
  __int16 *v51; // edi
  double v52; // [esp+0h] [ebp-88h]
  char v53; // [esp+1Bh] [ebp-6Dh]
  __int16 *v54; // [esp+1Ch] [ebp-6Ch]
  __int16 v55[2]; // [esp+20h] [ebp-68h] BYREF
  void *Block; // [esp+24h] [ebp-64h]
  __int16 v57[2]; // [esp+28h] [ebp-60h] BYREF
  int v58; // [esp+2Ch] [ebp-5Ch]
  int v59; // [esp+30h] [ebp-58h]
  int v60; // [esp+34h] [ebp-54h]
  int v61; // [esp+38h] [ebp-50h]
  int v62; // [esp+3Ch] [ebp-4Ch]
  int v63; // [esp+40h] [ebp-48h]
  int v64; // [esp+44h] [ebp-44h]
  int v65; // [esp+48h] [ebp-40h]
  int v66; // [esp+4Ch] [ebp-3Ch]
  double v67; // [esp+50h] [ebp-38h]
  __int64 v68; // [esp+5Ch] [ebp-2Ch]
  __int64 v69; // [esp+64h] [ebp-24h]
  __int64 v70; // [esp+6Ch] [ebp-1Ch]
  char Buffer[20]; // [esp+74h] [ebp-14h] BYREF

  v5 = 0; /*0x5a28cf*/
  v58 = 0; /*0x5a28d4*/
  v6 = 10 * a3; /*0x5a28d8*/
  v7 = (void *)__2_YAPAXI_Z(80 * a3); /*0x5a28e2*/
  if ( v7 ) /*0x5a28ec*/
  {
    Block = v7; /*0x5a28f1*/
    LODWORD(v67) = v6 - 1; /*0x5a28f5*/
  }
  else
  {
    Block = 0; /*0x5a28fb*/
  }
  v8 = (Heap *)__2_YAPAXI_Z(0x14u); /*0x5a2901*/
  v9 = v8; /*0x5a2906*/
  if ( v8 ) /*0x5a290d*/
  {
    v8[3] = 0; /*0x5a2916*/
    v8[4] = (Heap)-1; /*0x5a291a*/
    *v8 = 0; /*0x5a2921*/
    v8[1] = (Heap)v6; /*0x5a2923*/
    v10 = __2_YAPAXI_Z(40 * a3 + 4); /*0x5a2926*/
    v11 = (int)v9[1]; /*0x5a292b*/
    v9[2] = (Heap)v10; /*0x5a292e*/
    v12 = 0; /*0x5a2934*/
    if ( v11 >= 0 ) /*0x5a2938*/
    {
      do /*0x5a2947*/
      {
        ++v12; /*0x5a293d*/
        *(unsigned int *)(*(unsigned int *)&v9[2] + 4 * v12 - 4) = 0; /*0x5a293e*/
      }
      while ( v12 <= *(unsigned int *)&v9[1] ); /*0x5a2947*/
    }
  }
  else
  {
    v9 = 0; /*0x5a294b*/
  }
  v53 = 0; /*0x5a2957*/
  *(unsigned int *)v57 = *(unsigned int *)a2; /*0x5a295e*/
  v13 = 0; /*0x5a2965*/
  v59 = 0; /*0x5a296a*/
  v65 = a5 != 0 ? 27 : 102;
  v14 = *(unsigned int *)v9 < 0; /*0x5a2974*/
  v60 = 0; /*0x5a2976*/
  if ( !v14 ) /*0x5a297a*/
  {
    do /*0x5a2988*/
    {
      ++v13; /*0x5a297f*/
      *(unsigned int *)(*(unsigned int *)&v9[2] + 4 * v13 - 4) = 0; /*0x5a2980*/
    }
    while ( v13 <= *(unsigned int *)v9 ); /*0x5a2988*/
  }
  *v9 = 0; /*0x5a298d*/
  v54 = 0; /*0x5a2991*/
  if ( a3 <= 0 ) /*0x5a2995*/
    goto LABEL_72; /*0x5a2995*/
  while ( v60 < 10 ) /*0x5a29a6*/
  {
    if ( v5 ) /*0x5a29b0*/
    {
      v17 = Block; /*0x5a2b08*/
    }
    else
    {
      for ( i = 0; i <= *(unsigned int *)v9; *(unsigned int *)(*(unsigned int *)&v9[2] + 4 * i - 4) = 0 ) /*0x5a29bc*/
        ++i; /*0x5a29c1*/
      *v9 = 0; /*0x5a29d1*/
      LayerClass::CellIteratorReset((LayerClass *)&dword_87F7E8); /*0x5a29d3*/
      for ( j = LayerClass::CellIteratorNext((LayerClass *)&dword_87F7E8); /*0x5a29e4*/
            j;
            j = LayerClass::CellIteratorNext((LayerClass *)&dword_87F7E8) )
      {
        v63 = *(unsigned int *)(j + 36); /*0x5a29e9*/
        *(unsigned int *)&dword_ABED10[40 * (__int16)v63 + 30 + 40 * g_MapCellWidth * (short)(((v63) >> 16) & 0xFFFF)] = 0; /*0x5a2a0a*/
      }
      v17 = Block; /*0x5a2a1f*/
      v58 = 1; /*0x5a2a25*/
      *(unsigned int *)Block = *(unsigned int *)a2; /*0x5a2a2f*/
      v17->ptr_2 = 0; /*0x5a2a31*/
      *(unsigned int *)&dword_ABED10[40 * *a2 + 30 + 40 * g_MapCellWidth * a2[1]] = a4; /*0x5a2a56*/
      v18 = *(unsigned int *)v9 + 1; /*0x5a2a5f*/
      v64 = v17->vtable2; /*0x5a2a62*/
      v19 = v18 >> 1; /*0x5a2a69*/
      if ( v18 < *(unsigned int *)&v9[1] ) /*0x5a2a6d*/
      {
        if ( v18 > 1 ) /*0x5a2a72*/
        {
          do /*0x5a2a92*/
          {
            edi22 = v9[2]; /*0x5a2a74*/
            v20 = *(float **)(*(unsigned int *)&edi22 + 4 * v19); /*0x5a2a77*/
            __asm /*0x5a2a7a*/
            {
              fld dword ptr [ebx+4]
              fcomp [esp+80h+var_44]
              fnstsw ax
            }
            if ( (_AX & 0x4100) != 0 ) /*0x5a2a86*/
              break; /*0x5a2a86*/
            *(unsigned int *)(*(unsigned int *)&edi22 + 4 * v18) = v20; /*0x5a2a88*/
            v18 = v19; /*0x5a2a8b*/
            v19 >>= 1; /*0x5a2a8d*/
          }
          while ( v18 > 1 ); /*0x5a2a92*/
          v17 = Block; /*0x5a2a94*/
        }
        *(unsigned int *)(*(unsigned int *)&v9[2] + 4 * v18) = v17; /*0x5a2a9b*/
        v23 = (unsigned int)v9[3]; /*0x5a2aa0*/
        ++*(unsigned int *)v9; /*0x5a2aa6*/
        if ( (unsigned int)v17 > v23 ) /*0x5a2aa8*/
          v9[3] = (Heap)v17; /*0x5a2aaa*/
        if ( (unsigned int)v17 < *(unsigned int *)&v9[4] ) /*0x5a2ab0*/
          v9[4] = (Heap)v17; /*0x5a2ab2*/
      }
      if ( *v9 ) /*0x5a2ab5*/
      {
        v24 = v9[2]; /*0x5a2ac1*/
        v25 = *(__int16 **)(*(unsigned int *)&v24 + 4); /*0x5a2ac9*/
        *(unsigned int *)(*(unsigned int *)&v24 + 4) = *(unsigned int *)(*(unsigned int *)&v24 + 4 * *(unsigned int *)v9); /*0x5a2acc*/
        *(unsigned int *)(*(unsigned int *)&v9[2] + 4 * (*(unsigned int *)v9)--) = 0; /*0x5a2ad4*/
        Heap::SiftDown(v9, 1); /*0x5a2ae2*/
        v54 = v25; /*0x5a2ae7*/
      }
      else
      {
        v54 = 0; /*0x5a2abb*/
      }
      v5 = v54; /*0x5a2af2*/
      v26 = *(unsigned int *)a2; /*0x5a2af7*/
      v53 = 0; /*0x5a2af9*/
      ++v60; /*0x5a2afe*/
      *(unsigned int *)v57 = v26; /*0x5a2b02*/
    }
    v27 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v5); /*0x5a2b17*/
    v28 = *v5 + g_MapCellWidth * v5[1]; /*0x5a2b27*/
    *(unsigned int *)v55 = v27; /*0x5a2b2f*/
    if ( HIBYTE(dword_ABED10[40 * v28 + 34]) ) /*0x5a2b39*/
      goto LABEL_49; /*0x5a2b3e*/
    if ( !v53 ) /*0x5a2b4a*/
    {
      v53 = 1; /*0x5a2b52*/
      *(unsigned int *)v57 = *(unsigned int *)v5; /*0x5a2b57*/
      for ( k = 0; k <= *(unsigned int *)v9; *(unsigned int *)(*(unsigned int *)&v9[2] + 4 * k - 4) = 0 ) /*0x5a2b61*/
        ++k; /*0x5a2b66*/
      *v9 = 0; /*0x5a2b78*/
      v58 = 0; /*0x5a2b80*/
      if ( !a5 ) /*0x5a2b88*/
      {
        do /*0x5a2bbc*/
        {
          v68 = (unsigned int)Random::State((Random *)&stru_ABE890); /*0x5a2b98*/
          __asm /*0x5a2ba4*/
          {
            fild [esp+80h+var_2C]
            fmul ds:dbl_7ED8C0
            fadd ds:dbl_7E1718
          }
          (v30) = ((v30) & ~0xFFFF) | ((Math::RoundToInt(a1)) & 0xFFFF); /*0x5a2bb4*/
        }
        while ( v30 > 3 ); /*0x5a2bbc*/
        sprintf(Buffer, "TIBTRE0%d", (int)v30 % 10); /*0x5a2bd1*/
        v31 = (TerrainClass *)__2_YAPAXI_Z(0xE0u); /*0x5a2be0*/
        if ( v31 ) /*0x5a2be7*/
        {
          v32 = Terrain::LookupByName((Terrain *)Buffer); /*0x5a2bed*/
          TerrainClass::Construct(v31, *((void **)dword_A8E31C + v32), v57); /*0x5a2c05*/
        }
        v17 = Block; /*0x5a2c0a*/
        v27 = *(unsigned int **)v55; /*0x5a2c0e*/
      }
    }
    if ( v27->u32_44 == -1 ) /*0x5a2c16*/
    {
      do /*0x5a2c40*/
      {
        v69 = (unsigned int)Random::State((Random *)&stru_ABE890); /*0x5a2c22*/
        __asm /*0x5a2c2e*/
        {
          fild [esp+80h+var_24]
          fmul ds:dbl_7EDA90
        }
        (v33) = ((v33) & ~0xFFFF) | ((Math::RoundToInt(a1)) & 0xFFFF); /*0x5a2c38*/
      }
      while ( v33 > 0xB ); /*0x5a2c40*/
      *(unsigned int *)(*(unsigned int *)v55 + 68) = v65 + v33; /*0x5a2c4c*/
      goto LABEL_48; /*0x5a2c4f*/
    }
    v34 = v27->u32_11E; /*0x5a2c51*/
    if ( v34 < 0xBu ) /*0x5a2c59*/
    {
      v27->u32_11E = v34 + 1; /*0x5a2c5d*/
LABEL_48:
      ++v59; /*0x5a2c63*/
    }
LABEL_49:
    v61 = 0; /*0x5a2c67*/
    v35 = (float *)&v17[2 * v58]; /*0x5a2c73*/
    do /*0x5a2e54*/
    {
      v36 = v61 & 7; /*0x5a2c7c*/
      v37 = v5[1] + HIWORD(dword_89F688[v36]); /*0x5a2c95*/
      LOWORD(v62) = *v5 + LOWORD(dword_89F688[v36]); /*0x5a2c99*/
      (v62) = ((v62) & ~(0xFFFF << 16)) | (((v37) & 0xFFFF) << 16); /*0x5a2ca2*/
      *(unsigned int *)v55 = v62; /*0x5a2cab*/
      if ( !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&dword_87F7E8, v55, 1) ) /*0x5a2cbc*/
        goto LABEL_67; /*0x5a2cbc*/
      v38 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v55); /*0x5a2cd1*/
      v63 = (int)v38; /*0x5a2cd5*/
      if ( (unsigned __int8)Cell::IsEmpty((Cell *)v38) ) /*0x5a2cd9*/
      {
        if ( v38->ambientSoundController[2] == -1 ) /*0x5a2cea*/
        {
          v39 = *(unsigned int *)v55; /*0x5a2cf8*/
          if ( *(unsigned int *)&dword_ABED10[40 * v55[0] + 30 + 40 * g_MapCellWidth * v55[1]] != a4 ) /*0x5a2d14*/
            goto LABEL_58; /*0x5a2d14*/
          v38 = (BuildingClass *)v63; /*0x5a2d16*/
        }
        if ( BYTE2(v38->transporter) < 0xBu && BuildingClass::FindByCellHash(v38) != -1 ) /*0x5a2d31*/
        {
          v39 = *(unsigned int *)v55; /*0x5a2d37*/
LABEL_58:
          v40 = v55[1]; /*0x5a2d3b*/
          *(unsigned int *)v35 = v39; /*0x5a2d40*/
          v63 = (v57[0] - (__int16)v39) * (v57[0] - (__int16)v39) + (v57[1] - v40) * (v57[1] - v40); /*0x5a2d62*/
          __asm /*0x5a2d66*/
          {
            fild [esp+88h+var_48]
            fstp [esp+88h+var_88]; double
          }
          Math::Sqrt(v52); /*0x5a2d6d*/
          __asm { fstp [esp+88h+var_38] } /*0x5a2d72*/
          v70 = (unsigned int)Random::State((Random *)&stru_ABE890); /*0x5a2d83*/
          __asm { fild [esp+80h+var_1C] } /*0x5a2d8f*/
          v41 = v55[1]; /*0x5a2d93*/
          __asm { fmul ds:dbl_7ED7C0 } /*0x5a2d98*/
          v42 = v55[0]; /*0x5a2d9e*/
          __asm { fmul ds:dbl_7ED898 } /*0x5a2da3*/
          v43 = v35; /*0x5a2da9*/
          v35 += 2; /*0x5a2dab*/
          v63 = (int)v43; /*0x5a2dae*/
          __asm /*0x5a2db2*/
          {
            fadd [esp+80h+var_38]
            fstp dword ptr [edi-4]
          }
          *(v35 - 1) = _ET1; /*0x5a2db6*/
          *(unsigned int *)&dword_ABED10[40 * v42 + 30 + 40 * g_MapCellWidth * v41] = a4; /*0x5a2dd1*/
          v45 = v43->u32_4; /*0x5a2dd9*/
          ++v58; /*0x5a2ddd*/
          v46 = *(unsigned int *)v9 + 1; /*0x5a2de3*/
          v66 = v45; /*0x5a2de4*/
          v47 = v46 >> 1; /*0x5a2ded*/
          if ( v46 < *(unsigned int *)&v9[1] ) /*0x5a2df1*/
          {
            for ( ; v46 > 1; v47 >>= 1 ) /*0x5a2df6*/
            {
              LODWORD(v67) = *(unsigned int *)(*(unsigned int *)&v9[2] + 4 * v47); /*0x5a2dfe*/
              __asm /*0x5a2e02*/
              {
                fld dword ptr [eax+4]
                fcomp [esp+80h+var_3C]
                fnstsw ax
              }
              if ( (_AX & 0x4100) != 0 ) /*0x5a2e0e*/
                break; /*0x5a2e0e*/
              *(unsigned int *)(*(unsigned int *)&v9[2] + 4 * v46) = LODWORD(v67); /*0x5a2e17*/
              v43 = (float *)v63; /*0x5a2e1a*/
              v46 = v47; /*0x5a2e1e*/
            }
            *(unsigned int *)(*(unsigned int *)&v9[2] + 4 * v46) = v43; /*0x5a2e2a*/
            v49 = v9[3]; /*0x5a2e2f*/
            ++*(unsigned int *)v9; /*0x5a2e35*/
            if ( (unsigned int)v43 > *(unsigned int *)&v49 ) /*0x5a2e37*/
              v9[3] = (Heap)v43; /*0x5a2e39*/
            if ( (unsigned int)v43 < *(unsigned int *)&v9[4] ) /*0x5a2e3f*/
              v9[4] = (Heap)v43; /*0x5a2e41*/
          }
        }
      }
      v5 = v54; /*0x5a2e44*/
LABEL_67:
      ++v61; /*0x5a2e48*/
    }
    while ( v61 < 8 ); /*0x5a2e54*/
    if ( *v9 ) /*0x5a2e5a*/
    {
      v50 = v9[2]; /*0x5a2e66*/
      v51 = *(__int16 **)(*(unsigned int *)&v50 + 4); /*0x5a2e6e*/
      *(unsigned int *)(*(unsigned int *)&v50 + 4) = *(unsigned int *)(*(unsigned int *)&v50 + 4 * *(unsigned int *)v9); /*0x5a2e71*/
      *(unsigned int *)(*(unsigned int *)&v9[2] + 4 * (*(unsigned int *)v9)--) = 0; /*0x5a2e79*/
      Heap::SiftDown(v9, 1); /*0x5a2e87*/
      v54 = v51; /*0x5a2e8c*/
    }
    else
    {
      v54 = 0; /*0x5a2e60*/
    }
    if ( v59 < a3 ) /*0x5a2e99*/
    {
      v5 = v54; /*0x5a299d*/
      continue; /*0x5a299d*/
    }
    break;
  }
LABEL_72:
  __3_YAXPAX_Z(Block); /*0x5a2e9f*/
  if ( v9 ) /*0x5a2eae*/
  {
    __3_YAXPAX_Z(*(void **)&v9[2]); /*0x5a2eb4*/
    __3_YAXPAX_Z(v9); /*0x5a2eba*/
  }

}
}
// 0x6D6410
namespace gamemd {
unsigned int * Terrain::ClimbCheck(AbstractClass * aP0, AbstractClass * aP1)
{

  int v2; // ecx
  int v3; // esi
  int v4; // edi
  bool v5; // bl
  int v6; // ebp
  int v7; // edi
  unsigned int *v8; // eax
  int v9; // ecx
  int v10; // ecx
  unsigned int *v12; // [esp+10h] [ebp-18h] BYREF
  unsigned int *v13; // [esp+14h] [ebp-14h]
  int v14; // [esp+18h] [ebp-10h]
  int v15; // [esp+24h] [ebp-4h]

  v2 = *aP1 / 256; /*0x6d6434*/
  HIWORD(aP1) = aP1[1] / 256; /*0x6d6440*/
  LOWORD(aP1) = v2; /*0x6d6445*/
  v3 = ((__int16)v2 << 8) + 128; /*0x6d6462*/
  v4 = (SHIWORD(aP1) << 8) + 128; /*0x6d6468*/
  v5 = (*((unsigned int *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&aP1) + 80) & 0x1000) != 0; /*0x6d6486*/
  v6 = v4 + 1536; /*0x6d649d*/
  v14 = *((char *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&aP1) + 283); /*0x6d64a3*/
  v7 = v3 + 1536; /*0x6d64a7*/
  v15 = 0; /*0x6d64a9*/
  while ( 1 ) /*0x6d64b1*/
  {
    v7 -= 8; /*0x6d64b1*/
    v6 -= 8; /*0x6d64c1*/
    LOWORD(v13) = v7 / 256; /*0x6d64c9*/
    HIWORD(v13) = v6 / 256; /*0x6d64e0*/
    v12 = v13; /*0x6d64e9*/
    v8 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v12); /*0x6d64f3*/
    v9 = *(&v8->u32_11B) - v14; /*0x6d64ff*/
    if ( v5 ) /*0x6d6505*/
      v9 += 4 * ((v8->u32_140 >> 8) & 1); /*0x6d6513*/
    v10 = v9 << 7; /*0x6d6516*/
    if ( (__int16)((v7 - v10) / 256) <= (__int16)aP1 && (__int16)((v6 - v10) / 256) <= SHIWORD(aP1) ) /*0x6d654e*/
      break; /*0x6d654e*/
    if ( v12 == aP1 ) /*0x6d6555*/
    {
      *aP0 = aP1; /*0x6d6582*/
      return aP0; /*0x6d655b*/
    }
  }
  *aP0 = v12; /*0x6d6572*/
  return aP0; /*0x6d656f*/

}
} // namespace gamemd

// 0x71DD80
namespace gamemd {
int Terrain::LookupByName(void *a1)
{


  if ( !this ) /*0x71dd86*/
    return -1; /*0x71dd86*/
  int v2 = 0; // esi /*0x71dd8d*/
  if ( dword_A8E328 <= 0 ) /*0x71dd91*/
    return -1; /*0x71ddb6*/
  while ( _strcmpi(this->__pad_000, (char *)(*((unsigned int *)dword_A8E31C + v2) + 36)) ) /*0x71ddaa*/
  {
    if ( ++v2 >= dword_A8E328 ) /*0x71ddb4*/
      return -1; /*0x71ddb4*/
  }
  return v2; /*0x71ddb6*/

}
} // namespace gamemd
