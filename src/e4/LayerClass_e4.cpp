// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Radar_e4.hpp"
#include "e4/classes/Terrain_e4.hpp"

// 0x568300
namespace gamemd {
int LayerClass::CoordinatesLegal(IUnknown * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v2 = this->q0F4; /*0x568304*/
  int v3 = SLOWORD(aP1->field_0); /*0x56830c*/
  int v4 = SHIWORD(aP1->field_0); /*0x56830f*/
  return v4 + v3 > v2 && v3 - v4 < v2 && v4 - v3 < v2 && v4 + v3 <= v2 + 2 * this->q0F8; /*0x568337*/
}
}
} // namespace gamemd

// 0x56DC20
namespace gamemd {
unsigned int * LayerClass::Pathfinding_Find(IUnknown * aP0, IUnknown * aP1, IUnknown * aP2, IUnknown * aP3, IUnknown * aP4, IUnknown * aP5, IUnknown * aP6, IUnknown * aP7, IUnknown * aP8, IUnknown * aP9, IUnknown * aP10, IUnknown * aP11, IUnknown * aP12, IUnknown * aP13, IUnknown * aP14, MouseClass * aP15, char a17)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  IUnknown *v17; // ebx
  Tactical *v18; // edx
  IUnknown *v19; // eax
  ObjectClass *v29; // eax
  ObjectClass *v30; // esi
  __int16 v33; // ax
  TagClass **v35; // eax
  TagClass *v36; // ecx
  ObjectClass *v38; // eax
  ObjectClass *v39; // esi
  __int16 v42; // ax
  TagClass **v44; // eax
  ObjectClass *v48; // eax
  ObjectClass *v49; // esi
  __int16 v51; // ax
  TagClass **v53; // eax
  ObjectClass *v55; // eax
  ObjectClass *v56; // esi
  __int16 v58; // ax
  TagClass **v60; // eax
  unsigned __int16 v63; // di
  unsigned __int16 v64; // bp
  TagClass *v65; // eax
  IUnknown *v66; // edx
  IUnknown *v67; // ecx
  IUnknown *v69; // ebx
  TagClass **v71; // eax
  TagClass *v72; // esi
  BuildingTypeClass *v73; // eax
  TagClass *v75; // [esp+18h] [ebp-1DCh] BYREF
  TagClass *v79; // [esp+28h] [ebp-1CCh]
  IUnknown *v80; // [esp+2Ch] [ebp-1C8h]
  IUnknown *v81; // [esp+30h] [ebp-1C4h]
  Tactical *i; // [esp+34h] [ebp-1C0h]
  TagClass *v84; // [esp+3Ch] [ebp-1B8h]
  Tactical *v85; // [esp+40h] [ebp-1B4h]
  TagClass *v87; // [esp+48h] [ebp-1ACh]
  AbstractClass aP1a; // [esp+4Ch] [ebp-1A8h] BYREF
  AbstractClass v89; // [esp+70h] [ebp-184h] BYREF
  IUnknown *v90; // [esp+94h] [ebp-160h]
  AbstractClass aP0a; // [esp+C8h] [ebp-12Ch] BYREF

  v17 = aP0; /*0x56dc27*/
  v18 = (Tactical *)SLOWORD(aP3->field_0); /*0x56dc33*/
  v19 = (IUnknown *)SHIWORD(aP3->field_0); /*0x56dc36*/
  v80 = aP0; /*0x56dc49*/
  int v77 = 0; /*0x56dc4d*/
  v85 = v18; /*0x56dc51*/
  v81 = v19; /*0x56dc55*/
  char v76 = 0; /*0x56dc59*/
  if ( aP5 == (IUnknown *)0xFFFF ) /*0x56dc5e*/
    aP5 = (IUnknown *)-1; /*0x56dc60*/
  unsigned int v20 = (unsigned int)v18 + 512 * (_DWORD)v19; /*0x56dc6e*/
  _DWORD *v21; // eax
  if ( v20 >= 0x40000 || (v21 = *(_DWORD **)(*(_DWORD *)&stru_87C374[13744] + 4 * v20)) == 0 ) /*0x56dc84*/
  {
    g_Map_GlobalCellIndex = (IUnknown *)aP3->field_0; /*0x56dc88*/
    v21 = g_CellClassArray; /*0x56dc8d*/
  }
  int v83 = *((char *)v21 + 283); /*0x56dc99*/
  if ( (_BYTE)aP7 ) /*0x56dca6*/
  {
    unsigned int v22 = SLOWORD(aP3->field_0) + (SHIWORD(aP3->field_0) << 9); /*0x56dcb2*/
  _DWORD *v23; // eax
    if ( v22 >= 0x40000 || (v23 = *(_DWORD **)(*(_DWORD *)&stru_87C374[13744] + 4 * v22)) == 0 ) /*0x56dcc2*/
    {
      v23 = g_CellClassArray; /*0x56dcc6*/
      g_Map_GlobalCellIndex = (IUnknown *)aP3->field_0; /*0x56dccb*/
    }
    if ( (v23[80] & 0x100) != 0 ) /*0x56dcda*/
      v83 += 4; /*0x56dcdc*/
  }
  int v24 = aP0->field_F8 + *(_DWORD *)&aP0->__pad_EC[8]; /*0x56dced*/
  if ( v24 > 32 ) /*0x56dcf2*/
    v24 = 32; /*0x56dcf4*/
  i = (Tactical *)v24; /*0x56dcfb*/
  int v78 = 0; /*0x56dcff*/
  if ( v24 <= 0 ) /*0x56dd03*/
    goto LABEL_123; /*0x56dd03*/
  do /*0x56e5ad*/
  {
    int v25 = v78; /*0x56dd09*/
    int v26 = -v78; /*0x56dd0f*/
    if ( -v78 <= v78 ) /*0x56dd13*/
    {
      TagClass *v86 = &aP0a[0][4 * v77 + 12]; /*0x56dd24*/
      do /*0x56dd28*/
      {
        if ( (_BYTE)aP15 ) /*0x56dd31*/
          goto LABEL_36; /*0x56dd31*/
        LOWORD(v87) = (_WORD)v85 + v26; /*0x56dd44*/
        int v27 = (__int16)((_WORD)v81 - v25); /*0x56dd49*/
        HIWORD(v87) = (_WORD)v81 - v25; /*0x56dd4c*/
        v75 = v87; /*0x56dd5a*/
        unsigned int v28 = (__int16)((_WORD)v85 + v26) + (v27 << 9); /*0x56dd61*/
        if ( v28 < 0x40000 ) /*0x56dd63*/
        {
          v29 = *(ObjectClass **)(*(_DWORD *)&stru_87C374[13744] + 4 * v28); /*0x56dd72*/
          if ( v29 ) /*0x56dd78*/
          {
            v25 = v78; /*0x56dd7a*/
            v30 = v29; /*0x56dd7e*/
            goto LABEL_23; /*0x56dd80*/
          }
          v25 = v78; /*0x56dd82*/
        }
        g_Map_GlobalCellIndex = (IUnknown *)v87; /*0x56dd86*/
        v30 = (ObjectClass *)g_CellClassArray; /*0x56dd8c*/
LABEL_23:
  int v92[4]; // [esp+A8h] [ebp-14Ch] BYREF
        v92[1] = v27; /*0x56dd91*/
        v92[0] = (__int16)((_WORD)v85 + v26); /*0x56dd9f*/
        v92[2] = (int)aP8; /*0x56ddad*/
        v92[3] = (int)aP9; /*0x56ddb9*/
        if ( Type::CheckAmbiguity(v17, (int)v30, 1) ) /*0x56ddc0*/
        {
          if ( MapClass::CheckCellsBuildable((IUnknown *)&v75, aP8, aP9, aP4, aP5, aP6, -1, aP7, aP10) ) /*0x56de0e*/
          {
            if ( !(_BYTE)aP11 /*0x56de4c*/
  __int64 v31; // rax
              || (v31 = v83 - 4 * (((unsigned int)v30[1].lastLayer >> 8) & 1) - SHIBYTE(v30[1].health),
                  (int)((HIDWORD(v31) ^ v31) - HIDWORD(v31)) < 2) )
            {
              if ( (!(_BYTE)aP12 || Cell::IsBuildableAdvanced((int)v30)) /*0x56de9d*/
                && ((_BYTE)aP13 || (v30[1].lastLayer & 0x100) == 0)
                && (!a17 || MapClass::IsAreaFree(v17, v92, -1)) )
              {
                char * v32 = v86; /*0x56deaa*/
                v33 = (__int16)v75; /*0x56deae*/
                int v34 = v77; /*0x56deb2*/
                *(_DWORD *)v86 = v75; /*0x56deb6*/
                v86 = v32 + 4; /*0x56debb*/
                v77 = v34 + 1; /*0x56dec9*/
                if ( (_BYTE)aP7 /*0x56df18*/
                  || (aP1a.nextArrayIndex = (v33 << 8) + 128,
                      aP1a.referenceCount = (SHIWORD(v75) << 8) + 128,
                      aP1a.NeedsSaveOrLink = 0,
                      v35 = (TagClass **)Terrain::ClimbCheck(&aP0a, (AbstractClass *)&aP1a.nextArrayIndex),
                      v75 == *v35) )
                {
                  v76 = 1; /*0x56df25*/
                }
              }
            }
          }
        }
LABEL_36:
        if ( v77 == 24 ) /*0x56df2f*/
          goto LABEL_103; /*0x56df2f*/
        if ( (_BYTE)aP15 && v26 <= -v25 ) /*0x56df46*/
          goto LABEL_57; /*0x56df46*/
        *(_WORD *)&aP1a[10] = (_WORD)v81 + v25; /*0x56df5a*/
        *(_WORD *)&aP1a[8] = (_WORD)v85 + v26; /*0x56df5f*/
        v36 = (TagClass *)(__int16)((_WORD)v81 + v25); /*0x56df68*/
        v75 = *(TagClass **)&aP1a[8]; /*0x56df70*/
        unsigned int v37 = (__int16)((_WORD)v85 + v26) + ((_DWORD)v36 << 9); /*0x56df77*/
        if ( v37 < 0x40000 ) /*0x56df79*/
        {
          v38 = *(ObjectClass **)(*(_DWORD *)&stru_87C374[13744] + 4 * v37); /*0x56df88*/
          if ( v38 ) /*0x56df8e*/
          {
            v25 = v78; /*0x56df90*/
            v39 = v38; /*0x56df94*/
            goto LABEL_44; /*0x56df96*/
          }
          v25 = v78; /*0x56df98*/
        }
        g_Map_GlobalCellIndex = *(IUnknown **)&aP1a[8]; /*0x56df9c*/
        v39 = (ObjectClass *)g_CellClassArray; /*0x56dfa2*/
LABEL_44:
  int v91[4]; // [esp+98h] [ebp-15Ch] BYREF
        v91[1] = (int)v36; /*0x56dfa7*/
        v91[3] = (int)aP9; /*0x56dfbe*/
        v91[0] = (__int16)((_WORD)v85 + v26); /*0x56dfc8*/
        v91[2] = (int)aP8; /*0x56dfcf*/
        if ( Type::CheckAmbiguity(v17, (int)v39, 1) ) /*0x56dfd6*/
        {
          if ( MapClass::CheckCellsBuildable((IUnknown *)&v75, aP8, aP9, aP4, aP5, aP6, -1, aP7, aP10) ) /*0x56e024*/
          {
            if ( !(_BYTE)aP11 /*0x56e062*/
  __int64 v40; // rax
              || (v40 = v83 - 4 * (((unsigned int)v39[1].lastLayer >> 8) & 1) - SHIBYTE(v39[1].health),
                  (int)((HIDWORD(v40) ^ v40) - HIDWORD(v40)) < 2) )
            {
              if ( (!(_BYTE)aP12 || Cell::IsBuildableAdvanced((int)v39)) /*0x56e0b3*/
                && ((_BYTE)aP13 || (v39[1].lastLayer & 0x100) == 0)
                && (!a17 || MapClass::IsAreaFree(v17, v91, -1)) )
              {
                TagClass *v41 = v86; /*0x56e0c0*/
                v42 = (__int16)v75; /*0x56e0c4*/
                int v43 = v77; /*0x56e0c8*/
                *(_DWORD *)v86 = v75; /*0x56e0cc*/
                v86 = v41 + 4; /*0x56e0d1*/
                v77 = v43 + 1; /*0x56e0df*/
                if ( (_BYTE)aP7 /*0x56e12f*/
                  || (*(_DWORD *)v89[0] = (v42 << 8) + 128,
                      *(_DWORD *)&v89[4] = (SHIWORD(v75) << 8) + 128,
                      *(_DWORD *)&v89[8] = 0,
                      v44 = (TagClass **)Terrain::ClimbCheck((AbstractClass *)&aP0a[8], &v89),
                      v75 == *v44) )
                {
                  v76 = 1; /*0x56e13c*/
                }
              }
            }
          }
        }
LABEL_57:
        if ( v77 == 24 ) /*0x56e146*/
          goto LABEL_103; /*0x56e146*/
        ++v26; /*0x56e14c*/
      }
      while ( v26 <= v25 ); /*0x56dd28*/
    }
    int v45 = 1 - v25; /*0x56e160*/
    if ( 1 - v25 <= v25 - 1 ) /*0x56e16c*/
    {
      TagClass *v46 = &aP0a[0][4 * v77 + 12]; /*0x56e176*/
      do /*0x56e17d*/
      {
        if ( (_BYTE)aP15 ) /*0x56e186*/
          goto LABEL_80; /*0x56e186*/
        LOWORD(v84) = (_WORD)v85 - v78; /*0x56e19c*/
        HIWORD(v84) = v45 + (_WORD)v81; /*0x56e1a1*/
        v75 = v84; /*0x56e1b2*/
        unsigned int v47 = (__int16)((_WORD)v85 - v78) + ((__int16)(v45 + (_WORD)v81) << 9); /*0x56e1b9*/
        if ( v47 < 0x40000 ) /*0x56e1bb*/
        {
          v48 = *(ObjectClass **)(*(_DWORD *)&stru_87C374[13744] + 4 * v47); /*0x56e1ca*/
          if ( v48 ) /*0x56e1cf*/
          {
            v17 = v80; /*0x56e1d1*/
            v49 = v48; /*0x56e1d5*/
            goto LABEL_67; /*0x56e1d7*/
          }
          v17 = v80; /*0x56e1d9*/
        }
        g_Map_GlobalCellIndex = (IUnknown *)v84; /*0x56e1dd*/
        v49 = (ObjectClass *)g_CellClassArray; /*0x56e1e3*/
LABEL_67:
  int v93[4]; // [esp+B8h] [ebp-13Ch] BYREF
        v93[0] = (__int16)((_WORD)v85 - v78); /*0x56e1e8*/
        v93[1] = (__int16)(v45 + (_WORD)v81); /*0x56e1fd*/
        v93[2] = (int)aP8; /*0x56e209*/
        v93[3] = (int)aP9; /*0x56e210*/
        if ( Type::CheckAmbiguity(v17, (int)v49, 1) ) /*0x56e217*/
        {
          if ( MapClass::CheckCellsBuildable((IUnknown *)&v75, aP8, aP9, aP4, aP5, aP6, -1, aP7, aP10) ) /*0x56e265*/
          {
            if ( !(_BYTE)aP11 /*0x56e2a5*/
  __int64 v50; // rax
              || (v50 = v83 - 4 * (((unsigned int)v49[1].lastLayer >> 8) & 1) - SHIBYTE(v49[1].health),
                  (int)((HIDWORD(v50) ^ v50) - HIDWORD(v50)) < 2) )
            {
              if ( (!(_BYTE)aP12 || Cell::IsBuildableAdvanced((int)v49)) /*0x56e2f6*/
                && ((_BYTE)aP13 || (v49[1].lastLayer & 0x100) == 0)
                && (!a17 || MapClass::IsAreaFree(v17, v93, -1)) )
              {
                v51 = (__int16)v75; /*0x56e303*/
                int v52 = v77; /*0x56e307*/
                *(_DWORD *)v46 = v75; /*0x56e312*/
                v46 += 4; /*0x56e316*/
                v77 = v52 + 1; /*0x56e31b*/
                if ( (_BYTE)aP7 /*0x56e371*/
                  || (*(_DWORD *)&v89[12] = (v51 << 8) + 128,
                      v89.uniqueId = (SHIWORD(v75) << 8) + 128,
                      v89.abstractFlags = 0,
                      v53 = (TagClass **)Terrain::ClimbCheck(
                                           (AbstractClass *)&aP0a[4],
                                           (AbstractClass *)&v89[12]),
                      v75 == *v53) )
                {
                  v76 = 1; /*0x56e37e*/
                }
              }
            }
          }
        }
LABEL_80:
        if ( v77 == 24 ) /*0x56e388*/
          goto LABEL_103; /*0x56e388*/
        HIWORD(v79) = v45 + (_WORD)v81; /*0x56e39c*/
        LOWORD(v79) = v78 + (_WORD)v85; /*0x56e3a6*/
        v75 = v79; /*0x56e3b4*/
        unsigned int v54 = (__int16)(v78 + (_WORD)v85) + ((__int16)(v45 + (_WORD)v81) << 9); /*0x56e3bb*/
        if ( v54 < 0x40000 ) /*0x56e3bd*/
        {
          v55 = *(ObjectClass **)(*(_DWORD *)&stru_87C374[13744] + 4 * v54); /*0x56e3cc*/
          if ( v55 ) /*0x56e3d1*/
          {
            v17 = v80; /*0x56e3d3*/
            v56 = v55; /*0x56e3d7*/
            goto LABEL_86; /*0x56e3d9*/
          }
          v17 = v80; /*0x56e3db*/
        }
        g_Map_GlobalCellIndex = (IUnknown *)v79; /*0x56e3df*/
        v56 = (ObjectClass *)g_CellClassArray; /*0x56e3e5*/
LABEL_86:
        v89.nextArrayIndex = (__int16)(v78 + (_WORD)v85); /*0x56e3ea*/
        v89.referenceCount = (__int16)(v45 + (_WORD)v81); /*0x56e3ff*/
        v89.NeedsSaveOrLink = aP8; /*0x56e40b*/
        v90 = aP9; /*0x56e412*/
        if ( Type::CheckAmbiguity(v17, (int)v56, 1) ) /*0x56e419*/
        {
          if ( MapClass::CheckCellsBuildable((IUnknown *)&v75, aP8, aP9, aP4, aP5, aP6, -1, aP7, aP10) ) /*0x56e467*/
          {
            if ( !(_BYTE)aP11 /*0x56e4a7*/
  __int64 v57; // rax
              || (v57 = v83 - 4 * (((unsigned int)v56[1].lastLayer >> 8) & 1) - SHIBYTE(v56[1].health),
                  (int)((HIDWORD(v57) ^ v57) - HIDWORD(v57)) < 2) )
            {
              if ( (!(_BYTE)aP12 || Cell::IsBuildableAdvanced((int)v56)) /*0x56e4f8*/
                && ((_BYTE)aP13 || (v56[1].lastLayer & 0x100) == 0)
                && (!a17 || MapClass::IsAreaFree(v17, &v89.nextArrayIndex, -1)) )
              {
                v58 = (__int16)v75; /*0x56e501*/
                int v59 = v77; /*0x56e505*/
                *(_DWORD *)v46 = v75; /*0x56e510*/
                v46 += 4; /*0x56e514*/
                v77 = v59 + 1; /*0x56e519*/
                if ( (_BYTE)aP7 /*0x56e566*/
                  || (*(_DWORD *)&aP1a[12] = (v58 << 8) + 128,
                      aP1a.uniqueId = (SHIWORD(v75) << 8) + 128,
                      aP1a.abstractFlags = 0,
                      v60 = (TagClass **)Terrain::ClimbCheck(&aP1a, (AbstractClass *)&aP1a[12]),
                      v75 == *v60) )
                {
                  v76 = 1; /*0x56e573*/
                }
              }
            }
          }
        }
        if ( v77 == 24 ) /*0x56e57d*/
          goto LABEL_103; /*0x56e57d*/
        ++v45; /*0x56e583*/
      }
      while ( v45 <= v78 - 1 ); /*0x56e17d*/
    }
    if ( v76 ) /*0x56e59c*/
      break; /*0x56e59c*/
    ++v78; /*0x56e5a9*/
  }
  while ( v78 < (int)i ); /*0x56e5ad*/
LABEL_103:
  if ( v77 <= 0 ) /*0x56e5b9*/
  {
LABEL_123:
    aP2->field_0 = (int)g_MapSeedState; /*0x56e7aa*/
    return &aP2->field_0; /*0x56e79a*/
  }
  v80 = 0; /*0x56e5c5*/
  v81 = 0; /*0x56e5c9*/
  _DWORD v96[24]; // [esp+194h] [ebp-60h] BYREF
  _DWORD * v61 = v96; /*0x56e5da*/
  char * v62 = &aP0a[12]; /*0x56e5e1*/
  _DWORD v95[24]; // [esp+134h] [ebp-C0h] BYREF
  i = (Tactical *)v95; /*0x56e5e8*/
  v79 = (TagClass *)v77; /*0x56e5ec*/
  do /*0x56e67b*/
  {
    v63 = *(_WORD *)v62; /*0x56e5f0*/
    v64 = *((_WORD *)v62 + 1); /*0x56e5f3*/
    *(_DWORD *)&aP1a[12] = (*(__int16 *)v62 << 8) + 128; /*0x56e60a*/
    aP1a.uniqueId = ((__int16)v64 << 8) + 128; /*0x56e622*/
    aP1a.abstractFlags = 0; /*0x56e626*/
    v84 = (TagClass *)*Terrain::ClimbCheck(&aP1a, (AbstractClass *)&aP1a[12]); /*0x56e638*/
    if ( v84 == (TagClass *)__PAIR32__(v64, v63) ) /*0x56e63c*/
    {
      v65 = (TagClass *)i; /*0x56e645*/
      v66 = v80; /*0x56e64b*/
      *(_DWORD *)i->__pad_0 = *(_DWORD *)v62; /*0x56e64f*/
      v80 = (IUnknown *)((char *)&v66->field_0 + 1); /*0x56e655*/
      i = (Tactical *)&v65->__pad_0[4]; /*0x56e659*/
    }
    else
    {
      v67 = (IUnknown *)((char *)&v81->field_0 + 1); /*0x56e665*/
      *v61 = *(_DWORD *)v62; /*0x56e666*/
      v81 = v67; /*0x56e668*/
      ++v61; /*0x56e66c*/
    }
    v62 += 4; /*0x56e673*/
    v79 = (TagClass *)((char *)v79 - 1); /*0x56e677*/
  }
  while ( v79 ); /*0x56e67b*/
  if ( (TagClass *)aP14->field_0 == g_MapSeedState ) /*0x56e699*/
  {
    if ( v80 ) /*0x56e6b0*/
      aP2->field_0 = v95[*(_DWORD *)&HouseClass_Player[45112] % (int)v80]; /*0x56e6c6*/
    else
      aP2->field_0 = v96[*(_DWORD *)&HouseClass_Player[45112] % (int)v81]; /*0x56e6e5*/
    return &aP2->field_0; /*0x56e6b4*/
  }
  else
  {
    v69 = v80; /*0x56e6f2*/
    if ( !v80 ) /*0x56e6f4*/
      v69 = v81; /*0x56e6f6*/
    int v70 = 0; /*0x56e6f8*/
    *(_DWORD *)aP1a[0] = 0; /*0x56e6fa*/
    *(_DWORD *)&aP1a[4] = 1090021888; /*0x56e704*/
    for ( i = (Tactical *)g_MapSeedState; v70 < (int)v69; ++v70 ) /*0x56e710*/
    {
      v71 = (TagClass **)&v95[v70]; /*0x56e718*/
      if ( !v80 ) /*0x56e71f*/
        v71 = (TagClass **)&v96[v70]; /*0x56e721*/
      v72 = *v71; /*0x56e728*/
      v73 = (BuildingTypeClass *)((__int16)*v71 - SLOWORD(aP14->field_0)); /*0x56e73c*/
      v79 = (TagClass *)((_DWORD)v73 * (_DWORD)v73 /*0x56e751*/
                       + (SHIWORD(v72) - SHIWORD(aP14->field_0)) * (SHIWORD(v72) - SHIWORD(aP14->field_0)));
      double v74 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64((double)(int)v79)); /*0x56e75c*/
      if ( v74 < *(double *)aP1a[0] ) /*0x56e76d*/
      {
        *(double *)aP1a[0] = v74; /*0x56e76f*/
        i = (Tactical *)v72; /*0x56e773*/
      }
    }
    aP2->field_0 = (int)i; /*0x56e78e*/
    return &aP2->field_0; /*0x56e780*/
  }
}
}
} // namespace gamemd

// 0x577D90
namespace gamemd {
void * LayerClass::Reveal(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  #375 *result; // eax

  result = (#375 *)a2; /*0x577d90*/
  if ( a2 ) /*0x577da2*/
    *(_BYTE *)(*(_DWORD *)&HouseClass_Array->__pad_0[4 * *(_DWORD *)(a2 + 48)] + 577) = 1; /*0x577db0*/
  if ( (#375 *)a2 == HouseClass_Player ) /*0x577dbc*/
  {
    if ( a2 ) /*0x577dca*/
      goto LABEL_8; /*0x577dca*/
  }
  else if ( a2 ) /*0x577dc0*/
  {
    return result; /*0x577dc0*/
  }
  Debug::Log(); /*0x577dd1*/
LABEL_8:
  if ( g_GameMode_Current[0] != 3 && g_GameMode_Current[0] != 4 /*0x577df4*/
    || !g_GameStateFlags
  char v8; // [esp+10h] [ebp+4h]
    || (v8 = 1, (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)g_GameStateFlags + 4))(g_GameStateFlags)) )
  {
    v8 = 0; /*0x577dff*/
  }
  result = HouseClass_Player; /*0x577e04*/
  if ( !*((_BYTE *)HouseClass_Player + 576) ) /*0x577e09*/
  {
    HouseClass::ResetObjectOrders(0, 0); /*0x577e1e*/
    *((_BYTE *)HouseClass_Player + 576) = 1; /*0x577e29*/
    DataGlobal_87F8F8 = g_Cell_PositionLUT; /*0x577e3a*/
    DataGlobal_87F8F4 = 1; /*0x577e42*/
    DataGlobal_87F8FC = g_Cell_PositionLUT - 1; /*0x577e4b*/
    DataGlobal_87F900 = (g_Cell_PositionLUT << 11) + g_Shroud_CellArray + 4; /*0x577e5a*/
    int v4 = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); /*0x577e60*/
    if ( v4 ) /*0x577e67*/
    {
  int v6; // ecx
  int v5; // edx
      while ( 1 ) /*0x577e6e*/
      {
        if ( !v8 ) /*0x577e74*/
          goto LABEL_23; /*0x577e74*/
        v5 = *(__int16 *)(v4 + 36); /*0x577e76*/
        v6 = *(__int16 *)(v4 + 38); /*0x577e7a*/
        if ( v5 != 7 ) /*0x577e81*/
          break; /*0x577e81*/
        if ( v6 != this->q0F4 + 5 ) /*0x577e8e*/
          goto LABEL_21; /*0x577e8e*/
LABEL_24:
        v4 = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); /*0x577ee9*/
        if ( !v4 ) /*0x577ef5*/
          goto LABEL_25; /*0x577ef5*/
      }
      if ( v5 == 13 && v6 == this->q0F4 + 11 ) /*0x577ea2*/
        goto LABEL_24; /*0x577ea2*/
LABEL_21:
      int v7 = this->q0F8; /*0x577ea4*/
      if ( v5 == v7 + 13 && v6 == this->q0F4 + v7 - 15 ) /*0x577ebd*/
        goto LABEL_24; /*0x577ebd*/
LABEL_23:
      *(_DWORD *)(v4 + 304) = 0; /*0x577ebf*/
      *(_DWORD *)(v4 + 308) = 0; /*0x577ec5*/
      *(_DWORD *)(v4 + 300) |= 0x18u; /*0x577ed4*/
      *(_DWORD *)(v4 + 320) |= 3u; /*0x577ee3*/
      goto LABEL_24; /*0x577ee3*/
    }
LABEL_25:
    Radar::UpdateReveal(0, 0); /*0x577efc*/
    FogOfWar::Render((int **)&DataGlobal_87F7E8); /*0x577f0d*/
    return (#375 *)MapClass::MarkForRedraw(&DataGlobal_87F7E8, 2); /*0x577f19*/
  }
  return result; /*0x577f1e*/
}
}
} // namespace gamemd

// 0x578290
namespace gamemd {
int LayerClass::CellIteratorNext()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v1 = this->q114; /*0x578290*/
  int v2 = this->q118; /*0x578297*/
  if ( v1 ) /*0x5782a0*/
  {
    int v3 = this->q110 - 1; /*0x5782af*/
    ++this->q10C; /*0x5782b1*/
    this->q114 = v1 - 1; /*0x5782b7*/
    this->q110 = v3; /*0x5782c3*/
    this->q118 = v2 - 2044; /*0x5782c9*/
    return *(_DWORD *)v2; /*0x5782cf*/
  }
  else
  {
  int v8; // esi
    int v5 = this->q110; /*0x5782d5*/
    int v6 = this->q10C; /*0x5782db*/
    int v7 = this->q0F4; /*0x5782e1*/
    this->q10C = v5; /*0x5782e8*/
    this->q110 = v6; /*0x5782f2*/
    if ( (((_BYTE)v5 - (_BYTE)v7 + (_BYTE)v6 - 1) & 1) != 0 ) /*0x5782ff*/
    {
      v8 = v7 - 1; /*0x578302*/
      this->q110 = v6 + 1; /*0x578303*/
    }
    else
    {
      v8 = v7 - 2; /*0x57830c*/
      this->q10C = v5 + 1; /*0x57830f*/
    }
    int v9 = this->q10C; /*0x57831b*/
    int v10 = this->q110 << 9; /*0x578321*/
    this->q114 = v8; /*0x578324*/
    this->q118 = this->q13C + 4 * (v9 + v10); /*0x578337*/
    return *(_DWORD *)v2; /*0x57833d*/
  }
}
}
} // namespace gamemd

// 0x578350
namespace gamemd {
int LayerClass::CellIteratorReset()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax

  int v1 = this->q0F4; /*0x578350*/
  this->q10C = 1; /*0x578356*/
  this->q110 = v1; /*0x578360*/
  this->q114 = v1 - 1; /*0x578369*/
  result = (v1 << 11) + this->q13C + 4; /*0x578378*/
  this->q118 = result; /*0x57837c*/
  return result; /*0x578382*/
}
}
} // namespace gamemd

// 0x578460
namespace gamemd {
int LayerClass::IsWithinUsableArea(IUnknown * aP1, TechnoClass * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  bool result; // al

  int v3 = 0; /*0x57846b*/
  int v4 = SHIWORD(aP1->field_0); /*0x57846d*/
  int v5 = SLOWORD(aP1->field_0); /*0x578472*/
  if ( (_BYTE)aP2 ) /*0x578477*/
  {
    unsigned int v6 = v5 + (v4 << 9); /*0x57847e*/
  _DWORD *v7; // eax
    if ( v6 >= 0x40000 || (v7 = *(_DWORD **)(*(_DWORD *)&DataGlobal_87F8E4[64] + 4 * v6)) == 0 ) /*0x578494*/
    {
      g_Map_GlobalCellIndex = (IUnknown *)aP1->field_0; /*0x578498*/
      v7 = g_CellClassArray; /*0x57849d*/
    }
    v3 = *((char *)v7 + 283); /*0x5784a8*/
    if ( *((_BYTE *)v7 + 284) && v4 + v5 < v3 + this->q0F4 + 2 * this->q100 + 4 ) /*0x5784ca*/
      ++v3; /*0x5784cc*/
  }
  int v8 = this->q0F4; /*0x5784d3*/
  result = 0; /*0x578531*/
  if ( v4 + v5 > v3 + v8 + 2 * this->q100 && v4 + v5 <= v3 + v8 + 2 * (this->q100 + this->q108) + 2 ) /*0x5784fe*/
  {
    int v9 = this->q0FC; /*0x578500*/
    if ( v5 - v4 < 2 * (v9 + this->q104) - v8 && v4 - v5 < v8 - 2 * v9 ) /*0x578523*/
      return 1; /*0x5784e3*/
  }
  return result; /*0x578525*/
}
}
} // namespace gamemd

// 0x581140
namespace gamemd {
int LayerClass::DestroyCliff(int * a1, int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  __int16 v7; // di
  int i; // ebp
  int j; // ebp
  void **v34; // ebp
  __int16 v43; // di
  int k; // edi
  int m; // edi
  int n; // edi
  void **v81; // ebp
  int v92; // [esp+2Ch] [ebp-40h] BYREF
  int v93; // [esp+30h] [ebp-3Ch] BYREF
  int *v94; // [esp+34h] [ebp-38h]
  int v95; // [esp+38h] [ebp-34h]
  int v96; // [esp+3Ch] [ebp-30h]
  int v97; // [esp+40h] [ebp-2Ch]
  int v98; // [esp+44h] [ebp-28h]
  int v99; // [esp+48h] [ebp-24h]
  int v100; // [esp+50h] [ebp-1Ch] BYREF
  int v101; // [esp+54h] [ebp-18h]
  int v102; // [esp+58h] [ebp-14h] BYREF
  int v103; // [esp+5Ch] [ebp-10h]
  int v104; // [esp+60h] [ebp-Ch] BYREF
  int v105; // [esp+64h] [ebp-8h]
  int v106; // [esp+68h] [ebp-4h]

  v94 = a1;
  result = *(_DWORD *)(a3 + 56);
  if ( result == dword_ABC2C8 )
  {
    int * v4 = (int *)*((_DWORD *)g_FrameCounter + dword_ABC2C8);
    int v5 = 0;
    int v6 = *v4;
    v7 = *(_WORD *)(a3 + 36) - *(unsigned __int8 *)(a3 + 282) % 6;
    HIWORD(v99) = *(unsigned __int8 *)(a3 + 282) / -6 + *(_WORD *)(a3 + 38);
    LOWORD(v99) = v7;
    _BYTE * v8 = (_BYTE *)(*(int (__thiscall **)(int *, _DWORD))(v6 + 140))(v4, 0);
    int v89 = v7;
    v95 = (v7 << 8) + 128;
    v104 = v95;
    v93 = SHIWORD(v99);
    v106 = 0;
    v96 = (SHIWORD(v99) << 8) + 128;
    v105 = v96;
    (*(void (__thiscall **)(_BYTE *, int *))(*(_DWORD *)v8 + 436))(v8, &v104);
    int v9 = *(_DWORD *)v8;
    v8[129] = 0;
    v8[116] = 1;
    (*(void (__thiscall **)(_BYTE *, _DWORD))(v9 + 292))(v8, 0);
    if ( v8 )
      (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v8 + 32))(v8, 1);
  int *v10; // eax
    v10 = (int *)(*(int (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)g_FrameCounter + g_TerrainTypeTable2) + 140))(
                   *((_DWORD *)g_FrameCounter + g_TerrainTypeTable2),
                   0);
    v104 = v95;
    v105 = v96;
    int v11 = *v10;
    v106 = 0;
    (*(void (__thiscall **)(int *, int *, _DWORD))(v11 + 216))(v10, &v104, 0);
  int v12; // eax
    v12 = (*(int (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)g_FrameCounter + g_TerrainTypeTable2 + 1) + 140))(
            *((_DWORD *)g_FrameCounter + g_TerrainTypeTable2 + 1),
            0);
    v106 = 0;
    v105 = (v93 << 8) + 128;
    v104 = ((__int16)(v99 + 3) << 8) + 128;
    (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v12 + 216))(v12, &v104, 0);
    int * v13 = v94;
    Terrain::ConnectivityGraph(v94);
    _DWORD * v14 = (_DWORD *)*((_DWORD *)g_FrameCounter + dword_ABC2C8);
    v92 = (*(int (__thiscall **)(_DWORD *))(*v14 + 156))(v14);
    if ( (int)v14[186] > 0 )
    {
      do
      {
        int v15 = v14[185];
        int v16 = 0;
        if ( v15 > 0 )
        {
          HIWORD(v94) = v5 + HIWORD(v99);
          do
          {
            LOWORD(v94) = v16 + v99;
            a3 = (int)v94;
            if ( *(_DWORD *)(v92 + 4 * (v16 + v5 * v15) + 16) && LayerClass::IsWithinUsableArea(v13, (__int16 *)&a3, 1) )
            {
              *(_WORD *)(v13[28] + 10 * CellToTileIndexMap(v13, (__int16 *)&a3)) = 0;
              unsigned int v17 = (__int16)a3 + (SHIWORD(a3) << 9);
  _DWORD *v18; // eax
              if ( v17 >= 0x40000 || (v18 = *(_DWORD **)(g_Shroud_CellArray + 4 * v17)) == 0 )
              {
                g_Map_GlobalCellIndex = a3;
                v18 = g_CellClassArray;
              }
              House::AnnounceUpgrade((int)v18, -1);
            }
            v15 = v14[185];
            ++v16;
          }
          while ( v16 < v15 );
        }
        ++v5;
      }
      while ( v5 < v14[186] );
    }
    for ( i = 0; i < v14[186]; ++i )
    {
      int v20 = v14[185];
      int v21 = 0;
      if ( v20 > 0 )
      {
        HIWORD(v94) = i + HIWORD(v99);
        do
        {
          LOWORD(v94) = v21 + v99;
          a3 = (int)v94;
          if ( *(_DWORD *)(v92 + 4 * (v21 + i * v20) + 16)
            && LayerClass::IsWithinUsableArea(v13, (__int16 *)&a3, 1)
            && !*(_WORD *)(v13[28] + 10 * CellToTileIndexMap(v13, (__int16 *)&a3)) )
          {
            Radar::Update(v13, (__int16 *)&a3);
          }
          v20 = v14[185];
          ++v21;
        }
        while ( v21 < v20 );
      }
    }
    for ( j = 0; j < v14[186]; ++j )
    {
      int v23 = v14[185];
      int v24 = 0;
      if ( v23 > 0 )
      {
        HIWORD(v94) = j + HIWORD(v99);
        do
        {
          LOWORD(v94) = v24 + v99;
          a3 = (int)v94;
          if ( *(_DWORD *)(v92 + 4 * (v24 + j * v23) + 16) && LayerClass::IsWithinUsableArea(v13, (__int16 *)&a3, 1) )
          {
            unsigned int v25 = (__int16)a3 + (SHIWORD(a3) << 9);
  _DWORD *v26; // eax
            if ( v25 >= 0x40000 || (v26 = *(_DWORD **)(g_Shroud_CellArray + 4 * v25)) == 0 )
            {
              g_Map_GlobalCellIndex = a3;
              v26 = g_CellClassArray;
            }
            AbstractClass::ClearTargetToMeClearManagerTarget(v26);
            BuildingClass::AddUpgrade((int)&DataGlobal_87F7E8, (int)&a3);
          }
          v23 = v14[185];
          ++v24;
        }
        while ( v24 < v23 );
      }
    }
    unsigned int v27 = (v93 << 9) + v89;
    a3 = v27;
  _DWORD *v28; // eax
    if ( v27 >= 0x40000 || (v28 = *(_DWORD **)(g_Shroud_CellArray + 4 * v27)) == 0 )
    {
      v28 = g_CellClassArray;
      g_Map_GlobalCellIndex = v99;
    }
    v106 = g_MapRenderState * *((char *)v28 + 283);
    v104 = v95;
    v105 = v96;
    Coord::To_Screen(g_TacticalClass_Instance, &v104, &v100);
    LOWORD(a3) = v99 + 5;
    HIWORD(a3) = HIWORD(v99) + 3;
    unsigned int v29 = (__int16)(v99 + 5) + ((__int16)(HIWORD(v99) + 3) << 9);
  _DWORD *v30; // eax
    if ( v29 >= 0x40000 || (v30 = *(_DWORD **)(g_Shroud_CellArray + 4 * v29)) == 0 )
    {
      g_Map_GlobalCellIndex = a3;
      v30 = g_CellClassArray;
    }
    v106 = g_MapRenderState * *((char *)v30 + 283);
    v104 = ((__int16)(v99 + 5) << 8) + 128;
    v105 = ((__int16)(HIWORD(v99) + 3) << 8) + 128;
    Coord::To_Screen(g_TacticalClass_Instance, &v104, &v102);
    Cell::CreateCrater(v100 - 120, v101 - 60, v102 - v100 + 240, v103 - v101 + 120, 0);
    v94 = (int *)*((_DWORD *)g_AnimTypeCount + AnimTypeClass::FindIndex(aXgrymed1));
    v97 = *((_DWORD *)g_AnimTypeCount + AnimTypeClass::FindIndex(aXgrymed2));
    v98 = *((_DWORD *)g_AnimTypeCount + AnimTypeClass::FindIndex(aXgrysml1));
    result = v93 + 3;
    v92 = v93;
    v99 = v93 + 3;
    if ( !__OFSUB__(v93, v93 + 3) )
    {
      result = v89 + 5;
      do
      {
        int v31 = v89;
        v93 = v89;
        if ( v89 < result )
        {
          HIWORD(v96) = v92;
          do
          {
            LOWORD(v96) = v31;
            a3 = 0;
            v95 = 2;
            do
            {
              int v32 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 2);
              if ( v32 )
              {
                int v33 = v32 - 1;
                if ( v33 )
                {
                  if ( v33 == 1 )
                    a3 = v98;
                }
                else
                {
                  a3 = v97;
                }
              }
              else
              {
                a3 = (int)v94;
              }
              v34 = (void **)__2_YAPAXI_Z(0x1C8u);
              if ( v34 )
              {
                int v35 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, -8, 8);
                int v36 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, -12, 12);
                int v37 = (__int16)v31;
                unsigned int v38 = (__int16)v31 + ((__int16)v92 << 9);
  _DWORD *v39; // esi
                if ( v38 >= 0x40000 || (v39 = *(_DWORD **)(g_Shroud_CellArray + 4 * v38), v31 = v93, !v39) )
                {
                  g_Map_GlobalCellIndex = v96;
                  v39 = g_CellClassArray;
                }
                int v40 = g_MapRenderState * *((char *)v39 + 283);
                v105 = v35 + ((__int16)v92 << 8) + 128;
                v104 = (v37 << 8) + 128 + v36;
                v106 = v40;
                void * v41 = (void *)Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 2);
                AnimClass::ctor(v34, (void *)a3, &v104, v41, 1, (void *)0x600, 0, 0);
              }
              --v95;
            }
            while ( v95 );
            v93 = ++v31;
            result = v89 + 5;
          }
          while ( v31 < v89 + 5 );
        }
        ++v92;
      }
      while ( v92 < v99 );
    }
  }
  else if ( result == dword_ABC2C8 + 1 )
  {
    int * v42 = (int *)*((_DWORD *)g_FrameCounter + dword_ABC2C8 + 1);
    v43 = *(_WORD *)(a3 + 38) - (*(_BYTE *)(a3 + 282) >> 2);
    int v44 = *v42;
    LOWORD(v99) = *(_WORD *)(a3 + 36) - (*(_BYTE *)(a3 + 282) & 3);
    HIWORD(v99) = v43;
    _BYTE * v45 = (_BYTE *)(*(int (__thiscall **)(int *, _DWORD))(v44 + 140))(v42, 0);
    a3 = (__int16)v99;
    v95 = ((__int16)v99 << 8) + 128;
    v104 = v95;
    v98 = v43;
    v106 = 0;
    v97 = (v43 << 8) + 128;
    v105 = v97;
    (*(void (__thiscall **)(_BYTE *, int *))(*(_DWORD *)v45 + 436))(v45, &v104);
    int v46 = *(_DWORD *)v45;
    v45[129] = 0;
    v45[116] = 1;
    (*(void (__thiscall **)(_BYTE *, _DWORD))(v46 + 292))(v45, 0);
    if ( v45 )
      (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v45 + 32))(v45, 1);
  int *v47; // eax
    v47 = (int *)(*(int (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)g_FrameCounter + g_TerrainTypeTable2 + 3) + 140))(
                   *((_DWORD *)g_FrameCounter + g_TerrainTypeTable2 + 3),
                   0);
    v104 = v95;
    v105 = v97;
    int v48 = *v47;
    v106 = 0;
    (*(void (__thiscall **)(int *, int *, _DWORD))(v48 + 216))(v47, &v104, 0);
  int *v49; // eax
    v49 = (int *)(*(int (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)g_FrameCounter + g_TerrainTypeTable2 + 2) + 140))(
                   *((_DWORD *)g_FrameCounter + g_TerrainTypeTable2 + 2),
                   0);
    v105 = ((__int16)(HIWORD(v99) + 3) << 8) + 128;
    v104 = (a3 << 8) + 128;
    int v50 = *v49;
    v106 = 0;
    (*(void (__thiscall **)(int *, int *, _DWORD))(v50 + 216))(v49, &v104, 0);
    int * v51 = v94;
    Terrain::ConnectivityGraph(v94);
    _DWORD * v52 = (_DWORD *)*((_DWORD *)g_FrameCounter + dword_ABC2C8 + 1);
    int v90 = (*(int (__thiscall **)(_DWORD *))(*v52 + 156))(v52);
    for ( k = 0; k < v52[186]; ++k )
    {
      int v54 = v52[185];
      int v55 = 0;
      if ( v54 > 0 )
      {
        HIWORD(v96) = k + HIWORD(v99);
        do
        {
          LOWORD(v96) = v55 + v99;
          v92 = v96;
          if ( *(_DWORD *)(v90 + 4 * (v55 + k * v54) + 16) && LayerClass::IsWithinUsableArea(v51, (__int16 *)&v92, 1) )
          {
            int v56 = Cell::CoordToIndex(v51, (__int16 *)&v92);
            if ( v56 >= 0 )
            {
              int v57 = v51[27];
              if ( v56 >= v57 )
                v56 = v57 - 1;
            }
            else
            {
              v56 = 0;
            }
            *(_WORD *)(v51[28] + 10 * v56) = 0;
            unsigned int v58 = (__int16)v92 + (SHIWORD(v92) << 9);
  _DWORD *v59; // eax
            if ( v58 >= 0x40000 || (v59 = *(_DWORD **)(g_Shroud_CellArray + 4 * v58)) == 0 )
            {
              g_Map_GlobalCellIndex = v92;
              v59 = g_CellClassArray;
            }
            House::AnnounceUpgrade((int)v59, -1);
          }
          v54 = v52[185];
          ++v55;
        }
        while ( v55 < v54 );
      }
    }
    for ( m = 0; m < v52[186]; ++m )
    {
      int v61 = v52[185];
      int v62 = 0;
      if ( v61 > 0 )
      {
        HIWORD(v96) = m + HIWORD(v99);
        do
        {
          LOWORD(v96) = v62 + v99;
          v93 = v96;
          if ( *(_DWORD *)(v90 + 4 * (v62 + m * v61) + 16) && LayerClass::IsWithinUsableArea(v51, (__int16 *)&v93, 1) )
          {
            int v63 = Cell::CoordToIndex(v51, (__int16 *)&v93);
            if ( v63 >= 0 )
            {
              int v64 = v51[27];
              if ( v63 >= v64 )
                v63 = v64 - 1;
            }
            else
            {
              v63 = 0;
            }
            if ( !*(_WORD *)(v51[28] + 10 * v63) )
              Radar::Update(v51, (__int16 *)&v93);
          }
          v61 = v52[185];
          ++v62;
        }
        while ( v62 < v61 );
      }
    }
    for ( n = 0; n < v52[186]; ++n )
    {
      int v66 = v52[185];
      int v67 = 0;
      if ( v66 > 0 )
      {
        HIWORD(v96) = n + HIWORD(v99);
        do
        {
          LOWORD(v96) = v67 + v99;
          v92 = v96;
          if ( *(_DWORD *)(v90 + 4 * (v67 + n * v66) + 16) && LayerClass::IsWithinUsableArea(v51, (__int16 *)&v92, 1) )
          {
            unsigned int v68 = (__int16)v92 + (SHIWORD(v92) << 9);
  _DWORD *v69; // eax
            if ( v68 >= 0x40000 || (v69 = *(_DWORD **)(g_Shroud_CellArray + 4 * v68)) == 0 )
            {
              g_Map_GlobalCellIndex = v92;
              v69 = g_CellClassArray;
            }
            AbstractClass::ClearTargetToMeClearManagerTarget(v69);
            BuildingClass::AddUpgrade((int)&DataGlobal_87F7E8, (int)&v92);
          }
          v66 = v52[185];
          ++v67;
        }
        while ( v67 < v66 );
      }
    }
    unsigned int v70 = a3 + (v98 << 9);
  _DWORD *v71; // eax
    if ( v70 >= 0x40000 || (v71 = *(_DWORD **)(g_Shroud_CellArray + 4 * v70)) == 0 )
    {
      v71 = g_CellClassArray;
      g_Map_GlobalCellIndex = v99;
    }
    v106 = g_MapRenderState * *((char *)v71 + 283);
    v104 = v95;
    v105 = v97;
    Coord::To_Screen(g_TacticalClass_Instance, &v104, &v102);
    int v72 = (__int16)(v99 + 3);
    int v73 = (__int16)(HIWORD(v99) + 5) << 9;
    bool v74 = v72 + v73 < 0;
    int v75 = v72 + v73;
    LOWORD(v97) = v99 + 3;
    HIWORD(v97) = HIWORD(v99) + 5;
  _DWORD *v76; // eax
    if ( v74 || v75 >= 0x40000 || (v76 = *(_DWORD **)(g_Shroud_CellArray + 4 * v75)) == 0 )
    {
      g_Map_GlobalCellIndex = v97;
      v76 = g_CellClassArray;
    }
    v106 = g_MapRenderState * *((char *)v76 + 283);
    v104 = ((__int16)(v99 + 3) << 8) + 128;
    v105 = ((__int16)(HIWORD(v99) + 5) << 8) + 128;
    Coord::To_Screen(g_TacticalClass_Instance, &v104, &v100);
    Cell::CreateCrater(v100 - 120, v103 - 60, v102 - v100 + 240, v101 - v103 + 120, 0);
    v95 = *((_DWORD *)g_AnimTypeCount + AnimTypeClass::FindIndex(aXgrymed1));
    v96 = *((_DWORD *)g_AnimTypeCount + AnimTypeClass::FindIndex(aXgrymed2));
    int v77 = *((_DWORD *)g_AnimTypeCount + AnimTypeClass::FindIndex(aXgrysml1));
    result = v98;
    v99 = v77;
    int v91 = v98;
    v94 = (int *)(v98 + 5);
    if ( !__OFSUB__(v98, v98 + 5) )
    {
      result = a3 + 3;
      do
      {
        int v78 = a3;
        v93 = a3;
        if ( a3 < result )
        {
          HIWORD(v98) = v91;
          do
          {
            LOWORD(v98) = v78;
            v92 = 0;
            v97 = 2;
            do
            {
              int v79 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 2);
              if ( v79 )
              {
                int v80 = v79 - 1;
                if ( v80 )
                {
                  if ( v80 == 1 )
                    v92 = v99;
                }
                else
                {
                  v92 = v96;
                }
              }
              else
              {
                v92 = v95;
              }
              v81 = (void **)__2_YAPAXI_Z(0x1C8u);
              if ( v81 )
              {
                int v82 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, -8, 8);
                int v83 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, -12, 12);
                int v84 = (__int16)v78;
                unsigned int v85 = (__int16)v78 + ((__int16)v91 << 9);
  _DWORD *v86; // esi
                if ( v85 >= 0x40000 || (v86 = *(_DWORD **)(g_Shroud_CellArray + 4 * v85), v78 = v93, !v86) )
                {
                  g_Map_GlobalCellIndex = v98;
                  v86 = g_CellClassArray;
                }
                int v87 = g_MapRenderState * *((char *)v86 + 283);
                v105 = v82 + ((__int16)v91 << 8) + 128;
                v104 = (v84 << 8) + 128 + v83;
                v106 = v87;
                void * v88 = (void *)Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 2);
                AnimClass::ctor(v81, (void *)v92, &v104, v88, 1, (void *)0x600, 0, 0);
              }
              --v97;
            }
            while ( v97 );
            v93 = ++v78;
            result = a3 + 3;
          }
          while ( v78 < a3 + 3 );
        }
        ++v91;
      }
      while ( v91 < (int)v94 );
    }
  }
  return result;
}
}
} // namespace gamemd
