// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x56DC20
namespace gamemd {
unsigned int * LayerClass::Pathfinding_Find(IUnknown * aP0, IUnknown * aP1, IUnknown * aP2, IUnknown * aP3, IUnknown * aP4, IUnknown * aP5, IUnknown * aP6, IUnknown * aP7, IUnknown * aP8, IUnknown * aP9, IUnknown * aP10, IUnknown * aP11, IUnknown * aP12, IUnknown * aP13, IUnknown * aP14, MouseClass * aP15, char a17)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__fastcall LayerClass::Pathfinding_Find(
        IUnknown *aP0,
        IUnknown *aP1,
        IUnknown *aP2,
        IUnknown *aP3,
        IUnknown *aP4,
        IUnknown *aP5,
        IUnknown *aP6,
        IUnknown *aP7,
        IUnknown *aP8,
        IUnknown *aP9,
        IUnknown *aP10,
        IUnknown *aP11,
        IUnknown *aP12,
        IUnknown *aP13,
        IUnknown *aP14,
        MouseClass *aP15,
        char a17)
{
  IUnknown *v17; // ebx
  Tactical *v18; // edx
  IUnknown *v19; // eax
  unsigned int v20; // eax
  _DWORD *v21; // eax
  unsigned int v22; // eax
  _DWORD *v23; // eax
  int v24; // eax
  int v25; // ebp
  int v26; // edi
  int v27; // ecx
  unsigned int v28; // eax
  ObjectClass *v29; // eax
  ObjectClass *v30; // esi
  __int64 v31; // rax
  char *v32; // ecx
  __int16 v33; // ax
  int v34; // esi
  TagClass **v35; // eax
  TagClass *v36; // ecx
  unsigned int v37; // eax
  ObjectClass *v38; // eax
  ObjectClass *v39; // esi
  __int64 v40; // rax
  char *v41; // ecx
  __int16 v42; // ax
  int v43; // esi
  TagClass **v44; // eax
  int v45; // edi
  char *v46; // ebp
  unsigned int v47; // eax
  ObjectClass *v48; // eax
  ObjectClass *v49; // esi
  __int64 v50; // rax
  __int16 v51; // ax
  int v52; // esi
  TagClass **v53; // eax
  unsigned int v54; // eax
  ObjectClass *v55; // eax
  ObjectClass *v56; // esi
  __int64 v57; // rax
  __int16 v58; // ax
  int v59; // esi
  TagClass **v60; // eax
  _DWORD *v61; // ebx
  char *v62; // esi
  unsigned __int16 v63; // di
  unsigned __int16 v64; // bp
  TagClass *v65; // eax
  IUnknown *v66; // edx
  IUnknown *v67; // ecx
  IUnknown *v69; // ebx
  int v70; // edi
  TagClass **v71; // eax
  TagClass *v72; // esi
  BuildingTypeClass *v73; // eax
  double v74; // st7
  TagClass *v75; // [esp+18h] [ebp-1DCh] BYREF
  char v76; // [esp+1Fh] [ebp-1D5h]
  int v77; // [esp+20h] [ebp-1D4h]
  int v78; // [esp+24h] [ebp-1D0h]
  TagClass *v79; // [esp+28h] [ebp-1CCh]
  IUnknown *v80; // [esp+2Ch] [ebp-1C8h]
  IUnknown *v81; // [esp+30h] [ebp-1C4h]
  Tactical *i; // [esp+34h] [ebp-1C0h]
  int v83; // [esp+38h] [ebp-1BCh]
  TagClass *v84; // [esp+3Ch] [ebp-1B8h]
  Tactical *v85; // [esp+40h] [ebp-1B4h]
  char *v86; // [esp+44h] [ebp-1B0h]
  TagClass *v87; // [esp+48h] [ebp-1ACh]
  AbstractClass aP1a; // [esp+4Ch] [ebp-1A8h] BYREF
  AbstractClass v89; // [esp+70h] [ebp-184h] BYREF
  IUnknown *v90; // [esp+94h] [ebp-160h]
  int v91[4]; // [esp+98h] [ebp-15Ch] BYREF
  int v92[4]; // [esp+A8h] [ebp-14Ch] BYREF
  int v93[4]; // [esp+B8h] [ebp-13Ch] BYREF
  AbstractClass aP0a; // [esp+C8h] [ebp-12Ch] BYREF
  _DWORD v95[24]; // [esp+134h] [ebp-C0h] BYREF
  _DWORD v96[24]; // [esp+194h] [ebp-60h] BYREF

  v17 = aP0; /*0x56dc27*/
  v18 = (Tactical *)SLOWORD(aP3->field_0); /*0x56dc33*/
  v19 = (IUnknown *)SHIWORD(aP3->field_0); /*0x56dc36*/
  v80 = aP0; /*0x56dc49*/
  v77 = 0; /*0x56dc4d*/
  v85 = v18; /*0x56dc51*/
  v81 = v19; /*0x56dc55*/
  v76 = 0; /*0x56dc59*/
  if ( aP5 == (IUnknown *)0xFFFF ) /*0x56dc5e*/
    aP5 = (IUnknown *)-1; /*0x56dc60*/
  v20 = (unsigned int)v18 + 512 * (_DWORD)v19; /*0x56dc6e*/
  if ( v20 >= 0x40000 || (v21 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v20)) == 0 ) /*0x56dc84*/
  {
    g_Map_GlobalCellIndex = (IUnknown *)aP3->field_0; /*0x56dc88*/
    v21 = g_CellClassArray; /*0x56dc8d*/
  }
  v83 = *((char *)v21 + 283); /*0x56dc99*/
  if ( (_BYTE)aP7 ) /*0x56dca6*/
  {
    v22 = SLOWORD(aP3->field_0) + (SHIWORD(aP3->field_0) << 9); /*0x56dcb2*/
    if ( v22 >= 0x40000 || (v23 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v22)) == 0 ) /*0x56dcc2*/
    {
      v23 = g_CellClassArray; /*0x56dcc6*/
      g_Map_GlobalCellIndex = (IUnknown *)aP3->field_0; /*0x56dccb*/
    }
    if ( (v23[80] & 0x100) != 0 ) /*0x56dcda*/
      v83 += 4; /*0x56dcdc*/
  }
  v24 = aP0->field_F8 + *(_DWORD *)&aP0->__pad_EC[8]; /*0x56dced*/
  if ( v24 > 32 ) /*0x56dcf2*/
    v24 = 32; /*0x56dcf4*/
  i = (Tactical *)v24; /*0x56dcfb*/
  v78 = 0; /*0x56dcff*/
  if ( v24 <= 0 ) /*0x56dd03*/
    goto LABEL_123; /*0x56dd03*/
  do /*0x56e5ad*/
  {
    v25 = v78; /*0x56dd09*/
    v26 = -v78; /*0x56dd0f*/
    if ( -v78 <= v78 ) /*0x56dd13*/
    {
      v86 = &aP0a.__pad_0[4 * v77 + 12]; /*0x56dd24*/
      do /*0x56dd28*/
      {
        if ( (_BYTE)aP15 ) /*0x56dd31*/
          goto LABEL_36; /*0x56dd31*/
        LOWORD(v87) = (_WORD)v85 + v26; /*0x56dd44*/
        v27 = (__int16)((_WORD)v81 - v25); /*0x56dd49*/
        HIWORD(v87) = (_WORD)v81 - v25; /*0x56dd4c*/
        v75 = v87; /*0x56dd5a*/
        v28 = (__int16)((_WORD)v85 + v26) + (v27 << 9); /*0x56dd61*/
        if ( v28 < 0x40000 ) /*0x56dd63*/
        {
          v29 = *(ObjectClass **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v28); /*0x56dd72*/
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
        v92[1] = v27; /*0x56dd91*/
        v92[0] = (__int16)((_WORD)v85 + v26); /*0x56dd9f*/
        v92[2] = (int)aP8; /*0x56ddad*/
        v92[3] = (int)aP9; /*0x56ddb9*/
        if ( Type::CheckAmbiguity(v17, (int)v30, 1) ) /*0x56ddc0*/
        {
          if ( MapClass::CheckCellsBuildable((IUnknown *)&v75, aP8, aP9, aP4, aP5, aP6, -1, aP7, aP10) ) /*0x56de0e*/
          {
            if ( !(_BYTE)aP11 /*0x56de4c*/
              || (v31 = v83 - 4 * (((unsigned int)v30[1].lastLayer >> 8) & 1) - SHIBYTE(v30[1].health),
                  (int)((HIDWORD(v31) ^ v31) - HIDWORD(v31)) < 2) )
            {
              if ( (!(_BYTE)aP12 || Cell::IsBuildableAdvanced((int)v30)) /*0x56de9d*/
                && ((_BYTE)aP13 || (v30[1].lastLayer & 0x100) == 0)
                && (!a17 || MapClass::IsAreaFree(v17, v92, -1)) )
              {
                v32 = v86; /*0x56deaa*/
                v33 = (__int16)v75; /*0x56deae*/
                v34 = v77; /*0x56deb2*/
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
        *(_WORD *)&aP1a.__pad_0[10] = (_WORD)v81 + v25; /*0x56df5a*/
        *(_WORD *)&aP1a.__pad_0[8] = (_WORD)v85 + v26; /*0x56df5f*/
        v36 = (TagClass *)(__int16)((_WORD)v81 + v25); /*0x56df68*/
        v75 = *(TagClass **)&aP1a.__pad_0[8]; /*0x56df70*/
        v37 = (__int16)((_WORD)v85 + v26) + ((_DWORD)v36 << 9); /*0x56df77*/
        if ( v37 < 0x40000 ) /*0x56df79*/
        {
          v38 = *(ObjectClass **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v37); /*0x56df88*/
          if ( v38 ) /*0x56df8e*/
          {
            v25 = v78; /*0x56df90*/
            v39 = v38; /*0x56df94*/
            goto LABEL_44; /*0x56df96*/
          }
          v25 = v78; /*0x56df98*/
        }
        g_Map_GlobalCellIndex = *(IUnknown **)&aP1a.__pad_0[8]; /*0x56df9c*/
        v39 = (ObjectClass *)g_CellClassArray; /*0x56dfa2*/
LABEL_44:
        v91[1] = (int)v36; /*0x56dfa7*/
        v91[3] = (int)aP9; /*0x56dfbe*/
        v91[0] = (__int16)((_WORD)v85 + v26); /*0x56dfc8*/
        v91[2] = (int)aP8; /*0x56dfcf*/
        if ( Type::CheckAmbiguity(v17, (int)v39, 1) ) /*0x56dfd6*/
        {
          if ( MapClass::CheckCellsBuildable((IUnknown *)&v75, aP8, aP9, aP4, aP5, aP6, -1, aP7, aP10) ) /*0x56e024*/
          {
            if ( !(_BYTE)aP11 /*0x56e062*/
              || (v40 = v83 - 4 * (((unsigned int)v39[1].lastLayer >> 8) & 1) - SHIBYTE(v39[1].health),
                  (int)((HIDWORD(v40) ^ v40) - HIDWORD(v40)) < 2) )
            {
              if ( (!(_BYTE)aP12 || Cell::IsBuildableAdvanced((int)v39)) /*0x56e0b3*/
                && ((_BYTE)aP13 || (v39[1].lastLayer & 0x100) == 0)
                && (!a17 || MapClass::IsAreaFree(v17, v91, -1)) )
              {
                v41 = v86; /*0x56e0c0*/
                v42 = (__int16)v75; /*0x56e0c4*/
                v43 = v77; /*0x56e0c8*/
                *(_DWORD *)v86 = v75; /*0x56e0cc*/
                v86 = v41 + 4; /*0x56e0d1*/
                v77 = v43 + 1; /*0x56e0df*/
                if ( (_BYTE)aP7 /*0x56e12f*/
                  || (*(_DWORD *)v89.__pad_0 = (v42 << 8) + 128,
                      *(_DWORD *)&v89.__pad_0[4] = (SHIWORD(v75) << 8) + 128,
                      *(_DWORD *)&v89.__pad_0[8] = 0,
                      v44 = (TagClass **)Terrain::ClimbCheck((AbstractClass *)&aP0a.__pad_0[8], &v89),
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
    v45 = 1 - v25; /*0x56e160*/
    if ( 1 - v25 <= v25 - 1 ) /*0x56e16c*/
    {
      v46 = &aP0a.__pad_0[4 * v77 + 12]; /*0x56e176*/
      do /*0x56e17d*/
      {
        if ( (_BYTE)aP15 ) /*0x56e186*/
          goto LABEL_80; /*0x56e186*/
        LOWORD(v84) = (_WORD)v85 - v78; /*0x56e19c*/
        HIWORD(v84) = v45 + (_WORD)v81; /*0x56e1a1*/
        v75 = v84; /*0x56e1b2*/
        v47 = (__int16)((_WORD)v85 - v78) + ((__int16)(v45 + (_WORD)v81) << 9); /*0x56e1b9*/
        if ( v47 < 0x40000 ) /*0x56e1bb*/
        {
          v48 = *(ObjectClass **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v47); /*0x56e1ca*/
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
        v93[0] = (__int16)((_WORD)v85 - v78); /*0x56e1e8*/
        v93[1] = (__int16)(v45 + (_WORD)v81); /*0x56e1fd*/
        v93[2] = (int)aP8; /*0x56e209*/
        v93[3] = (int)aP9; /*0x56e210*/
        if ( Type::CheckAmbiguity(v17, (int)v49, 1) ) /*0x56e217*/
        {
          if ( MapClass::CheckCellsBuildable((IUnknown *)&v75, aP8, aP9, aP4, aP5, aP6, -1, aP7, aP10) ) /*0x56e265*/
          {
            if ( !(_BYTE)aP11 /*0x56e2a5*/
              || (v50 = v83 - 4 * (((unsigned int)v49[1].lastLayer >> 8) & 1) - SHIBYTE(v49[1].health),
                  (int)((HIDWORD(v50) ^ v50) - HIDWORD(v50)) < 2) )
            {
              if ( (!(_BYTE)aP12 || Cell::IsBuildableAdvanced((int)v49)) /*0x56e2f6*/
                && ((_BYTE)aP13 || (v49[1].lastLayer & 0x100) == 0)
                && (!a17 || MapClass::IsAreaFree(v17, v93, -1)) )
              {
                v51 = (__int16)v75; /*0x56e303*/
                v52 = v77; /*0x56e307*/
                *(_DWORD *)v46 = v75; /*0x56e312*/
                v46 += 4; /*0x56e316*/
                v77 = v52 + 1; /*0x56e31b*/
                if ( (_BYTE)aP7 /*0x56e371*/
                  || (*(_DWORD *)&v89.__pad_0[12] = (v51 << 8) + 128,
                      v89.uniqueId = (SHIWORD(v75) << 8) + 128,
                      v89.abstractFlags = 0,
                      v53 = (TagClass **)Terrain::ClimbCheck(
                                           (AbstractClass *)&aP0a.__pad_0[4],
                                           (AbstractClass *)&v89.__pad_0[12]),
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
        v54 = (__int16)(v78 + (_WORD)v85) + ((__int16)(v45 + (_WORD)v81) << 9); /*0x56e3bb*/
        if ( v54 < 0x40000 ) /*0x56e3bd*/
        {
          v55 = *(ObjectClass **)(*(_DWORD *)&stru_87C374.__pad_14B0[8448] + 4 * v54); /*0x56e3cc*/
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
              || (v57 = v83 - 4 * (((unsigned int)v56[1].lastLayer >> 8) & 1) - SHIBYTE(v56[1].health),
                  (int)((HIDWORD(v57) ^ v57) - HIDWORD(v57)) < 2) )
            {
              if ( (!(_BYTE)aP12 || Cell::IsBuildableAdvanced((int)v56)) /*0x56e4f8*/
                && ((_BYTE)aP13 || (v56[1].lastLayer & 0x100) == 0)
                && (!a17 || MapClass::IsAreaFree(v17, &v89.nextArrayIndex, -1)) )
              {
                v58 = (__int16)v75; /*0x56e501*/
                v59 = v77; /*0x56e505*/
                *(_DWORD *)v46 = v75; /*0x56e510*/
                v46 += 4; /*0x56e514*/
                v77 = v59 + 1; /*0x56e519*/
                if ( (_BYTE)aP7 /*0x56e566*/
                  || (*(_DWORD *)&aP1a.__pad_0[12] = (v58 << 8) + 128,
                      aP1a.uniqueId = (SHIWORD(v75) << 8) + 128,
                      aP1a.abstractFlags = 0,
                      v60 = (TagClass **)Terrain::ClimbCheck(&aP1a, (AbstractClass *)&aP1a.__pad_0[12]),
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
  v61 = v96; /*0x56e5da*/
  v62 = &aP0a.__pad_0[12]; /*0x56e5e1*/
  i = (Tactical *)v95; /*0x56e5e8*/
  v79 = (TagClass *)v77; /*0x56e5ec*/
  do /*0x56e67b*/
  {
    v63 = *(_WORD *)v62; /*0x56e5f0*/
    v64 = *((_WORD *)v62 + 1); /*0x56e5f3*/
    *(_DWORD *)&aP1a.__pad_0[12] = (*(__int16 *)v62 << 8) + 128; /*0x56e60a*/
    aP1a.uniqueId = ((__int16)v64 << 8) + 128; /*0x56e622*/
    aP1a.abstractFlags = 0; /*0x56e626*/
    v84 = (TagClass *)*Terrain::ClimbCheck(&aP1a, (AbstractClass *)&aP1a.__pad_0[12]); /*0x56e638*/
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
      aP2->field_0 = v95[*(_DWORD *)&HouseClass_Player.__pad_5568[23248] % (int)v80]; /*0x56e6c6*/
    else
      aP2->field_0 = v96[*(_DWORD *)&HouseClass_Player.__pad_5568[23248] % (int)v81]; /*0x56e6e5*/
    return &aP2->field_0; /*0x56e6b4*/
  }
  else
  {
    v69 = v80; /*0x56e6f2*/
    if ( !v80 ) /*0x56e6f4*/
      v69 = v81; /*0x56e6f6*/
    v70 = 0; /*0x56e6f8*/
    *(_DWORD *)aP1a.__pad_0 = 0; /*0x56e6fa*/
    *(_DWORD *)&aP1a.__pad_0[4] = 1090021888; /*0x56e704*/
    for ( i = (Tactical *)g_MapSeedState; v70 < (int)v69; ++v70 ) /*0x56e710*/
    {
      v71 = (TagClass **)&v95[v70]; /*0x56e718*/
      if ( !v80 ) /*0x56e71f*/
        v71 = (TagClass **)&v96[v70]; /*0x56e721*/
      v72 = *v71; /*0x56e728*/
      v73 = (BuildingTypeClass *)((__int16)*v71 - SLOWORD(aP14->field_0)); /*0x56e73c*/
      v79 = (TagClass *)((_DWORD)v73 * (_DWORD)v73 /*0x56e751*/
                       + (SHIWORD(v72) - SHIWORD(aP14->field_0)) * (SHIWORD(v72) - SHIWORD(aP14->field_0)));
      v74 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64((double)(int)v79)); /*0x56e75c*/
      if ( v74 < *(double *)aP1a.__pad_0 ) /*0x56e76d*/
      {
        *(double *)aP1a.__pad_0 = v74; /*0x56e76f*/
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
#375 *__thiscall LayerClass::Reveal(_DWORD *this, int a2)
{
  #375 *result; // eax
  int v4; // eax
  int v5; // edx
  int v6; // ecx
  int v7; // esi
  char v8; // [esp+10h] [ebp+4h]

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
  if ( MEMORY[0xA8B238][0] != 3 && MEMORY[0xA8B238][0] != 4 /*0x577df4*/
    || !MEMORY[0xA8B23C]
    || (v8 = 1, (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)MEMORY[0xA8B23C] + 4))(MEMORY[0xA8B23C])) )
  {
    v8 = 0; /*0x577dff*/
  }
  result = HouseClass_Player; /*0x577e04*/
  if ( !*((_BYTE *)HouseClass_Player + 576) ) /*0x577e09*/
  {
    HouseClass::ResetObjectOrders(0, 0); /*0x577e1e*/
    *((_BYTE *)HouseClass_Player + 576) = 1; /*0x577e29*/
    MEMORY[0x87F8F8] = MEMORY[0x87F8DC]; /*0x577e3a*/
    MEMORY[0x87F8F4] = 1; /*0x577e42*/
    MEMORY[0x87F8FC] = MEMORY[0x87F8DC] - 1; /*0x577e4b*/
    MEMORY[0x87F900] = (MEMORY[0x87F8DC] << 11) + MEMORY[0x87F924] + 4; /*0x577e5a*/
    v4 = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x577e60*/
    if ( v4 ) /*0x577e67*/
    {
      while ( 1 ) /*0x577e6e*/
      {
        if ( !v8 ) /*0x577e74*/
          goto LABEL_23; /*0x577e74*/
        v5 = *(__int16 *)(v4 + 36); /*0x577e76*/
        v6 = *(__int16 *)(v4 + 38); /*0x577e7a*/
        if ( v5 != 7 ) /*0x577e81*/
          break; /*0x577e81*/
        if ( v6 != *(this + 61) + 5 ) /*0x577e8e*/
          goto LABEL_21; /*0x577e8e*/
LABEL_24:
        v4 = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x577ee9*/
        if ( !v4 ) /*0x577ef5*/
          goto LABEL_25; /*0x577ef5*/
      }
      if ( v5 == 13 && v6 == *(this + 61) + 11 ) /*0x577ea2*/
        goto LABEL_24; /*0x577ea2*/
LABEL_21:
      v7 = *(this + 62); /*0x577ea4*/
      if ( v5 == v7 + 13 && v6 == *(this + 61) + v7 - 15 ) /*0x577ebd*/
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
    FogOfWar::Render((int **)&MEMORY[0x87F7E8]); /*0x577f0d*/
    return (#375 *)MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 2); /*0x577f19*/
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
int __thiscall LCW_ReadBit(_DWORD *this)
{
  int v1; // eax
  int v2; // ebp
  int v3; // edx
  int v5; // edx
  int v6; // eax
  int v7; // esi
  int v8; // esi
  int v9; // edx
  int v10; // eax

  v1 = *(this + 69); /*0x578290*/
  v2 = *(this + 70); /*0x578297*/
  if ( v1 ) /*0x5782a0*/
  {
    v3 = *(this + 68) - 1; /*0x5782af*/
    ++*(this + 67); /*0x5782b1*/
    *(this + 69) = v1 - 1; /*0x5782b7*/
    *(this + 68) = v3; /*0x5782c3*/
    *(this + 70) = v2 - 2044; /*0x5782c9*/
    return *(_DWORD *)v2; /*0x5782cf*/
  }
  else
  {
    v5 = *(this + 68); /*0x5782d5*/
    v6 = *(this + 67); /*0x5782db*/
    v7 = *(this + 61); /*0x5782e1*/
    *(this + 67) = v5; /*0x5782e8*/
    *(this + 68) = v6; /*0x5782f2*/
    if ( (((_BYTE)v5 - (_BYTE)v7 + (_BYTE)v6 - 1) & 1) != 0 ) /*0x5782ff*/
    {
      v8 = v7 - 1; /*0x578302*/
      *(this + 68) = v6 + 1; /*0x578303*/
    }
    else
    {
      v8 = v7 - 2; /*0x57830c*/
      *(this + 67) = v5 + 1; /*0x57830f*/
    }
    v9 = *(this + 67); /*0x57831b*/
    v10 = *(this + 68) << 9; /*0x578321*/
    *(this + 69) = v8; /*0x578324*/
    *(this + 70) = *(this + 79) + 4 * (v9 + v10); /*0x578337*/
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
int __thiscall LCW_InitBitReader(_DWORD *this)
{
  int v1; // eax
  int result; // eax

  v1 = *(this + 61); /*0x578350*/
  *(this + 67) = 1; /*0x578356*/
  *(this + 68) = v1; /*0x578360*/
  *(this + 69) = v1 - 1; /*0x578369*/
  result = (v1 << 11) + *(this + 79) + 4; /*0x578378*/
  *(this + 70) = result; /*0x57837c*/
  return result; /*0x578382*/
}
}
} // namespace gamemd

// 0x581140
namespace gamemd {
int LayerClass::DestroyCliff(int * a1, int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (v3 export truncated pseudocode — commented out; live version via get_context)
// int __fastcall MapClass_DestroyTerrain(int *a1, int a2, int a3)
// {
//   int result; // eax
//   int *v4; // ecx
//   int v5; // ebp
//   int v6; // edx
//   __int16 v7; // di
//   _BYTE *v8; // esi
//   int v9; // edx
//   int *v10; // eax
//   int v11; // edx
//   int v12; // eax
//   int *v13; // edi
//   _DWORD *v14; // ebx
//   int v15; // eax
//   int v16; // esi
//   unsigned int v17; // eax
//   _DWORD *v18; // eax
//   int i; // ebp
//   int v20; // eax
//   int v21; // esi
//   int j; // ebp
//   int v23; // eax
//   int v24; // esi
//   unsigned int v25; // eax
//   _DWORD *v26; // eax
//   unsigned int v27; // eax
//   _DWORD *v28; // eax
//   unsigned int v29; // eax
//   _DWORD *v30; // eax
//   int v31; // ebx
//   int v32; // eax
//   int v33; // eax
//   void **v34; // ebp
//   int v35; // edi
//   int v36; // eax
//   int v37; // edx
//   unsigned int v38; // esi
//   _DWORD *v39; // esi
//   int v40; // esi
//   void *v41; // eax
//   int *v42; // ecx
//   __int16 v43; // di
//   int v44; // edx
//   _BYTE *v45; // esi
//   int v46; // edx
//   int *v47; // eax
//   int v48; // edx
//   int *v49; // eax
//   i... [21895 chars total]
// end truncated pseudocode
}
} // namespace gamemd
