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
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/LightConvertClass_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/LightSourceClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"

// 0x568300
namespace gamemd {
int LayerClass::CoordinatesLegal(IUnknown * aP1)
{
  int v2; // edx
  int v3; // esi
  int v4; // eax

  v2 = (int)(*(&this->q0181));
  v3 = (int)(*aP1);
  v4 = (int)(aP1[1]);
  return v4 + v3 > v2 && v3 - v4 < v2 && v4 - v3 < v2 && v4 + v3 <= v2 + 2 * *(&this->q0182); /*0x568337*/
}
}
// 0x56DC20
namespace gamemd {
unsigned int * LayerClass::Pathfinding_Find(IUnknown * aP0, IUnknown * aP1, IUnknown * aP2, IUnknown * aP3, IUnknown * aP4, IUnknown * aP5, IUnknown * aP6, IUnknown * aP7, IUnknown * aP8, IUnknown * aP9, IUnknown * aP10, IUnknown * aP11, IUnknown * aP12, IUnknown * aP13, IUnknown * aP14, MouseClass * aP15, char a17)
{
  unsigned int *v17; // ebx
  int v18; // edx
  int v19; // eax
  unsigned int v20; // eax
  char *v21; // eax
  unsigned int v22; // eax
  unsigned int *v23; // eax
  int v24; // eax
  int v25; // ebp
  int v26; // edi
  int v27; // ecx
  unsigned int v28; // eax
  unsigned int *v29; // eax
  unsigned int *v30; // esi
  int64_t v31; // rax
  int *v32; // ecx
  IUnknown * v33;
  IUnknown * v34;
  unsigned int *v35; // eax
  int v36; // ecx
  unsigned int v37; // eax
  unsigned int *v38; // eax
  unsigned int *v39; // esi
  int64_t v40; // rax
  int *v41; // ecx
  IUnknown * v42;
  IUnknown * v43;
  unsigned int *v44; // eax
  int v45; // edi
  int *v46; // ebp
  unsigned int v47; // eax
  unsigned int *v48; // eax
  unsigned int *v49; // esi
  int64_t v50; // rax
  IUnknown * v51;
  IUnknown * v52;
  unsigned int *v53; // eax
  unsigned int v54; // eax
  unsigned int *v55; // eax
  unsigned int *v56; // esi
  int64_t v57; // rax
  IUnknown * v58;
  IUnknown * v59;
  unsigned int *v60; // eax
  unsigned int *v61; // ebx
  uint16_t *v62; // esi
  uint16_t v63; // di
  int16_t v64; // bp
  unsigned int *v65; // eax
  IUnknown * v66;
  IUnknown * v67;
  IUnknown * v69;
  int v70; // edi
  unsigned int *v71; // eax
  unsigned int *v72; // esi
  int v73; // eax
  double v74; // st7
  unsigned int v75;
  IUnknown * v76;
  IUnknown * v77;
  int v78; // [esp+24h] [ebp-1D0h]
  IUnknown * v79;
  IUnknown * v80;
  IUnknown * v81;
  unsigned int *i; // [esp+34h] [ebp-1C0h]
  int v83; // [esp+38h] [ebp-1BCh]
  int v84; // [esp+3Ch] [ebp-1B8h]
  IUnknown * v85;
  int *v86; // [esp+44h] [ebp-1B0h]
  int v87; // [esp+48h] [ebp-1ACh]
  double v88; // [esp+4Ch] [ebp-1A8h] BYREF
  int v89; // [esp+54h] [ebp-1A0h]
  int v90; // [esp+58h] [ebp-19Ch] BYREF
  int v91; // [esp+5Ch] [ebp-198h]
  int v92; // [esp+60h] [ebp-194h]
  unsigned int v93[3]; // [esp+64h] [ebp-190h] BYREF
  unsigned int v94[3]; // [esp+70h] [ebp-184h] BYREF
  unsigned int v95[3]; // [esp+7Ch] [ebp-178h] BYREF
  unsigned int v96[4]; // [esp+88h] [ebp-16Ch] BYREF
  unsigned int v97[4]; // [esp+98h] [ebp-15Ch] BYREF
  unsigned int v98[4]; // [esp+A8h] [ebp-14Ch] BYREF
  unsigned int v99[4]; // [esp+B8h] [ebp-13Ch] BYREF
  char v100[4]; // [esp+C8h] [ebp-12Ch] BYREF
  char v101[4]; // [esp+CCh] [ebp-128h] BYREF
  char v102[4]; // [esp+D0h] [ebp-124h] BYREF
  unsigned int v103[24]; // [esp+D4h] [ebp-120h] BYREF
  unsigned int v104[24]; // [esp+134h] [ebp-C0h] BYREF
  unsigned int v105[24]; // [esp+194h] [ebp-60h] BYREF

  v17 = (unsigned int *)((IUnknown *)(aP0));
  v18 = (IUnknown *)(*aP3);
  v19 = (IUnknown *)(aP3[1]);
  v80 = (IUnknown *)((int)((IUnknown *)((int)aP0)));
  v77 = (IUnknown *)((int)((IUnknown *)(0)));
  v85 = (IUnknown *)((int)((IUnknown *)(v18)));
  v81 = (IUnknown *)((unsigned int)((IUnknown *)((int)((IUnknown *)(v19)))));
  v76 = (IUnknown *)((unsigned int)((IUnknown *)(0)));
  if ( aP5 == 0xFFFF ) /*0x56dc5e*/
    aP5 = -1; /*0x56dc60*/
  v20 = v18 + (v19 << 9); /*0x56dc6e*/
  if ( v20 >= 0x40000 || (v21 = *(char **)(g_Shroud_CellArray + 4 * v20)) == 0 ) /*0x56dc84*/
  {
    g_Map_GlobalCellIndex = *(unsigned int *)aP3; /*0x56dc88*/
    v21 = (char *)&g_CellClassArray; /*0x56dc8d*/
  }
  v83 = v21[283]; /*0x56dc99*/
  if ( (unsigned char)aP7 ) /*0x56dca6*/
  {
    v22 = *aP3 + (aP3[1] << 9); /*0x56dcb2*/
    if ( v22 >= 0x40000 || (v23 = *(unsigned int **)(g_Shroud_CellArray + 4 * v22)) == 0 ) /*0x56dcc2*/
    {
      v23 = (unsigned int *)(&g_CellClassArray);
      g_Map_GlobalCellIndex = *(unsigned int *)aP3; /*0x56dccb*/
    }
    if ( (v23[80] & 0x100) != 0 ) /*0x56dcda*/
      v83 += 4; /*0x56dcdc*/
  }
  v24 = aP0[62] + aP0[61]; /*0x56dced*/
  if ( v24 > 32 ) /*0x56dcf2*/
    v24 = 32; /*0x56dcf4*/
  i = (unsigned int *)v24; /*0x56dcfb*/
  v78 = 0; /*0x56dcff*/
  if ( v24 <= 0 ) /*0x56dd03*/
    goto LABEL_123; /*0x56dd03*/
  do /*0x56e5ad*/
  {
    v25 = v78; /*0x56dd09*/
    v26 = -v78; /*0x56dd0f*/
    if ( -v78 <= v78 ) /*0x56dd13*/
    {
      v86 = (int *)(&v103[v77]);
      do /*0x56dd28*/
      {
        if ( aP15 ) /*0x56dd31*/
          goto LABEL_36; /*0x56dd31*/
        IDA_LOWORD(v87) = v85 + v26; /*0x56dd44*/
        v27 = (int16_t)(v81 - v25); /*0x56dd49*/
        IDA_HIWORD(v87) = v81 - v25; /*0x56dd4c*/
        v75 = v87; /*0x56dd5a*/
        v28 = (int16_t)(v85 + v26) + (v27 << 9); /*0x56dd61*/
        if ( v28 < 0x40000 ) /*0x56dd63*/
        {
          v29 = *(unsigned int **)(g_Shroud_CellArray + 4 * v28); /*0x56dd72*/
          if ( v29 ) /*0x56dd78*/
          {
            v25 = v78; /*0x56dd7a*/
            v30 = v29; /*0x56dd7e*/
            goto LABEL_23; /*0x56dd80*/
          }
          v25 = v78; /*0x56dd82*/
        }
        g_Map_GlobalCellIndex = (unsigned int)(v87);
        v30 = (unsigned int)(&g_CellClassArray);
  LABEL_23: v98[1] = (unsigned int)(v27);
        v98[0] = (unsigned int)((int16_t)(v85 + v26));
        v98[2] = (unsigned int)(aP8);
        v98[3] = (unsigned int)(aP9);
        if ( Type::CheckAmbiguity(v17, (int)v30, 1) ) /*0x56ddc0*/
        {
          if ( (uint8_t)MapClass::CheckCellsBuildable(&v75, aP8, aP9, aP4, aP5, aP6, -1, aP7, aP10) ) /*0x56de0e*/
          {
            if ( !aP11 /*0x56de4c*/
              || (v31 = v83 - 4 * ((v30[80] >> 8) & 1) - *((char *)v30 + 283),
                  (int)((IDA_HIDWORD(v31) ^ v31) - IDA_HIDWORD(v31)) < 2) )
            {
              if ( (!aP12 || (uint8_t)Cell::IsBuildableAdvanced(v30)) /*0x56de9d*/
                && (aP13 || (v30[80] & 0x100) == 0)
                && (!a17 || (uint8_t)MapClass::IsAreaFree(v98, -1)) )
              {
                v32 = (int *)((IUnknown *)(v86));
                v33 = (IUnknown *)((int)(v75));
                v34 = (IUnknown *)((int)(v77));
                *v86 = (int)(v75);
                v86 = v32 + 1; /*0x56debb*/
                v77 = v34 + 1; /*0x56dec9*/
                if ( (unsigned char)aP7 /*0x56df18*/
                  || (v93[0] = (v33 << 8) + 128,
                      v93[1] = (IDA_SHIWORD(v75) << 8) + 128,
                      v93[2] = 0,
                      v35 = (unsigned int *)Terrain::ClimbCheck(v100, v93),
                      v75 == *v35) )
                {
                  v76 = (IUnknown *)(1);
                }
              }
            }
          }
        }
  LABEL_36:
        if ( v77 == 24 ) /*0x56df2f*/
          goto LABEL_103; /*0x56df2f*/
        if ( aP15 && v26 <= -v25 ) /*0x56df46*/
          goto LABEL_57; /*0x56df46*/
        IDA_HIWORD(v89) = v81 + v25; /*0x56df5a*/
        IDA_LOWORD(v89) = v85 + v26; /*0x56df5f*/
        v36 = (int16_t)(v81 + v25); /*0x56df68*/
        v75 = v89; /*0x56df70*/
        v37 = (int16_t)(v85 + v26) + (v36 << 9); /*0x56df77*/
        if ( v37 < 0x40000 ) /*0x56df79*/
        {
          v38 = *(unsigned int **)(g_Shroud_CellArray + 4 * v37); /*0x56df88*/
          if ( v38 ) /*0x56df8e*/
          {
            v25 = v78; /*0x56df90*/
            v39 = v38; /*0x56df94*/
            goto LABEL_44; /*0x56df96*/
          }
          v25 = v78; /*0x56df98*/
        }
        g_Map_GlobalCellIndex = (unsigned int)(v89);
        v39 = (unsigned int)(&g_CellClassArray);
  LABEL_44: v97[1] = (unsigned int)(v36);
        v97[3] = (unsigned int)(aP9);
        v97[0] = (unsigned int)((int16_t)(v85 + v26));
        v97[2] = (unsigned int)(aP8);
        if ( Type::CheckAmbiguity(v17, (int)v39, 1) ) /*0x56dfd6*/
        {
          if ( (uint8_t)MapClass::CheckCellsBuildable(&v75, aP8, aP9, aP4, aP5, aP6, -1, aP7, aP10) ) /*0x56e024*/
          {
            if ( !aP11 /*0x56e062*/
              || (v40 = v83 - 4 * ((v39[80] >> 8) & 1) - *((char *)v39 + 283),
                  (int)((IDA_HIDWORD(v40) ^ v40) - IDA_HIDWORD(v40)) < 2) )
            {
              if ( (!aP12 || (uint8_t)Cell::IsBuildableAdvanced(v39)) /*0x56e0b3*/
                && (aP13 || (v39[80] & 0x100) == 0)
                && (!a17 || (uint8_t)MapClass::IsAreaFree(v97, -1)) )
              {
                v41 = (int *)((IUnknown *)(v86));
                v42 = (IUnknown *)((int)(v75));
                v43 = (IUnknown *)((int)(v77));
                *v86 = (int)(v75);
                v86 = v41 + 1; /*0x56e0d1*/
                v77 = v43 + 1; /*0x56e0df*/
                if ( (unsigned char)aP7 /*0x56e12f*/
                  || (v94[0] = (v42 << 8) + 128,
                      v94[1] = (IDA_SHIWORD(v75) << 8) + 128,
                      v94[2] = 0,
                      v44 = (unsigned int *)Terrain::ClimbCheck(v102, v94),
                      v75 == *v44) )
                {
                  v76 = (IUnknown *)(1);
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
      v46 = (int *)(&v103[v77]);
      do /*0x56e17d*/
      {
        if ( aP15 ) /*0x56e186*/
          goto LABEL_80; /*0x56e186*/
        IDA_LOWORD(v84) = v85 - v78; /*0x56e19c*/
        IDA_HIWORD(v84) = v45 + v81; /*0x56e1a1*/
        v75 = v84; /*0x56e1b2*/
        v47 = (int16_t)(v85 - v78) + ((int16_t)(v45 + v81) << 9); /*0x56e1b9*/
        if ( v47 < 0x40000 ) /*0x56e1bb*/
        {
          v48 = *(unsigned int **)(g_Shroud_CellArray + 4 * v47); /*0x56e1ca*/
          if ( v48 ) /*0x56e1cf*/
          {
            v17 = (unsigned int *)v80; /*0x56e1d1*/
            v49 = v48; /*0x56e1d5*/
            goto LABEL_67; /*0x56e1d7*/
          }
          v17 = (unsigned int *)v80; /*0x56e1d9*/
        }
        g_Map_GlobalCellIndex = (unsigned int)(v84);
        v49 = (unsigned int)(&g_CellClassArray);
  LABEL_67: v99[0] = (unsigned int)((int16_t)(v85 - v78));
        v99[1] = (unsigned int)((int16_t)(v45 + v81));
        v99[2] = (unsigned int)(aP8);
        v99[3] = (unsigned int)(aP9);
        if ( Type::CheckAmbiguity(v17, (int)v49, 1) ) /*0x56e217*/
        {
          if ( (uint8_t)MapClass::CheckCellsBuildable(&v75, aP8, aP9, aP4, aP5, aP6, -1, aP7, aP10) ) /*0x56e265*/
          {
            if ( !aP11 /*0x56e2a5*/
              || (v50 = v83 - 4 * ((v49[80] >> 8) & 1) - *((char *)v49 + 283),
                  (int)((IDA_HIDWORD(v50) ^ v50) - IDA_HIDWORD(v50)) < 2) )
            {
              if ( (!aP12 || (uint8_t)Cell::IsBuildableAdvanced(v49)) /*0x56e2f6*/
                && (aP13 || (v49[80] & 0x100) == 0)
                && (!a17 || (uint8_t)MapClass::IsAreaFree(v99, -1)) )
              {
                v51 = (IUnknown *)((int16_t)((IUnknown *)(v75)));
                v52 = (IUnknown *)((int)(v77));
                *v46++ = v75; /*0x56e312*/
                v77 = v52 + 1; /*0x56e31b*/
                if ( (unsigned char)aP7 /*0x56e371*/
                  || (v95[0] = (v51 << 8) + 128,
                      v95[1] = (IDA_SHIWORD(v75) << 8) + 128,
                      v95[2] = 0,
                      v53 = (unsigned int *)Terrain::ClimbCheck(v101, v95),
                      v75 == *v53) )
                {
                  v76 = (IUnknown *)(1);
                }
              }
            }
          }
        }
  LABEL_80:
        if ( v77 == 24 ) /*0x56e388*/
          goto LABEL_103; /*0x56e388*/
        IDA_HIWORD(v79) = v45 + v81; /*0x56e39c*/
        IDA_LOWORD(v79) = v78 + v85; /*0x56e3a6*/
        v75 = v79; /*0x56e3b4*/
        v54 = (int16_t)(v78 + v85) + ((int16_t)(v45 + v81) << 9); /*0x56e3bb*/
        if ( v54 < 0x40000 ) /*0x56e3bd*/
        {
          v55 = *(unsigned int **)(g_Shroud_CellArray + 4 * v54); /*0x56e3cc*/
          if ( v55 ) /*0x56e3d1*/
          {
            v17 = (unsigned int *)v80; /*0x56e3d3*/
            v56 = v55; /*0x56e3d7*/
            goto LABEL_86; /*0x56e3d9*/
          }
          v17 = (unsigned int *)v80; /*0x56e3db*/
        }
        g_Map_GlobalCellIndex = (unsigned int)(v79);
        v56 = (unsigned int)(&g_CellClassArray);
  LABEL_86: v96[0] = (unsigned int)((int16_t)(v78 + v85));
        v96[1] = (unsigned int)((int16_t)(v45 + v81));
        v96[2] = (unsigned int)(aP8);
        v96[3] = (unsigned int)(aP9);
        if ( Type::CheckAmbiguity(v17, (int)v56, 1) ) /*0x56e419*/
        {
          if ( (uint8_t)MapClass::CheckCellsBuildable(&v75, aP8, aP9, aP4, aP5, aP6, -1, aP7, aP10) ) /*0x56e467*/
          {
            if ( !aP11 /*0x56e4a7*/
              || (v57 = v83 - 4 * ((v56[80] >> 8) & 1) - *((char *)v56 + 283),
                  (int)((IDA_HIDWORD(v57) ^ v57) - IDA_HIDWORD(v57)) < 2) )
            {
              if ( (!aP12 || (uint8_t)Cell::IsBuildableAdvanced(v56)) /*0x56e4f8*/
                && (aP13 || (v56[80] & 0x100) == 0)
                && (!a17 || (uint8_t)MapClass::IsAreaFree(v96, -1)) )
              {
                v58 = (IUnknown *)((int16_t)((IUnknown *)(v75)));
                v59 = (IUnknown *)((int)(v77));
                *v46++ = v75; /*0x56e510*/
                v77 = v59 + 1; /*0x56e519*/
                if ( (unsigned char)aP7 /*0x56e566*/
                  || (v90 = (v58 << 8) + 128,
                      v91 = (IDA_SHIWORD(v75) << 8) + 128,
                      v92 = 0,
                      v60 = (unsigned int *)Terrain::ClimbCheck(&v88, &v90),
                      v75 == *v60) )
                {
                  v76 = (IUnknown *)(1);
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
    *(unsigned int *)aP2 = g_MapSeedState; /*0x56e7aa*/
    return aP2; /*0x56e79a*/
  }
  v80 = (IUnknown *)((int)(0));
  v81 = 0; /*0x56e5c9*/
  v61 = v105; /*0x56e5da*/
  v62 = (uint16_t *)v103; /*0x56e5e1*/
  i = v104; /*0x56e5e8*/
  v79 = v77; /*0x56e5ec*/
  do /*0x56e67b*/
  {
    v63 = *v62; /*0x56e5f0*/
    v64 = v62[1]; /*0x56e5f3*/
    v90 = ((int16_t)*v62 << 8) + 128; /*0x56e60a*/
    v91 = (v64 << 8) + 128; /*0x56e622*/
    v92 = 0; /*0x56e626*/
    v84 = *(unsigned int *)Terrain::ClimbCheck(&v88, &v90); /*0x56e638*/
    if ( v84 == IDA___PAIR32__(v64, v63) ) /*0x56e63c*/
    {
      v65 = (unsigned int *)((IUnknown *)(i));
      v66 = v80; /*0x56e64b*/
      *i = *(unsigned int *)v62; /*0x56e64f*/
      v80 = v66 + 1; /*0x56e655*/
      i = v65 + 1; /*0x56e659*/
    }
    else
    {
      v67 = (IUnknown *)((int)((IUnknown *)(v81 + 1)));
      *v61 = (unsigned int)((IUnknown *)(*(unsigned int *)v62));
      v81 = (IUnknown *)((unsigned int)(v67));
      ++v61; /*0x56e66c*/
    }
    v62 += 2; /*0x56e673*/
    --v79; /*0x56e677*/
  }
  while ( v79 ); /*0x56e67b*/
  if ( *(unsigned int *)aP14 == g_MapSeedState ) /*0x56e699*/
  {
    if ( v80 ) /*0x56e6b0*/
      *(unsigned int *)aP2 = v104[(int)g_CurrentFrame % v80]; /*0x56e6c6*/
    else
      *(unsigned int *)aP2 = v105[(int)g_CurrentFrame % v81]; /*0x56e6e5*/
    return aP2; /*0x56e6b4*/
  }
  else
  {
    v69 = (IUnknown *)((unsigned int)((IUnknown *)((unsigned int)((IUnknown *)((int)(v80))))));
    if ( !v80 ) /*0x56e6f4*/
      v69 = v81; /*0x56e6f6*/
    v70 = 0; /*0x56e6f8*/
    v88 = 100000.0; /*0x56e6fa*/
    for ( i = (unsigned int *)g_MapSeedState; v70 < v69; ++v70 ) /*0x56e710*/
    {
      v71 = &v104[v70]; /*0x56e718*/
      if ( !v80 ) /*0x56e71f*/
        v71 = &v105[v70]; /*0x56e721*/
      v72 = (unsigned int *)*v71; /*0x56e728*/
      v73 = (int16_t)*v71 - *aP14; /*0x56e73c*/
      v79 = v73 * v73 + (IDA_SHIWORD(v72) - aP14[1]) * (IDA_SHIWORD(v72) - aP14[1]); /*0x56e751*/
      v74 = Math::Sqrt((double)v79); /*0x56e75c*/
      if ( v74 < v88 ) /*0x56e76d*/
      {
        v88 = v74; /*0x56e76f*/
        i = v72; /*0x56e773*/
      }
    }
    *aP2 = i; /*0x56e78e*/
    return aP2; /*0x56e780*/
  }
}
}
// 0x577D90
namespace gamemd {
void * LayerClass::Reveal(int a2)
{
  unsigned int result;
  int v4; // eax
  int v5; // edx
  int v6; // ecx
  int v7; // esi
  unsigned int v8;

  result = (unsigned int)((void *)a2);
  if ( a2 ) /*0x577da2*/
    *(unsigned char *)(*(unsigned int *)&HouseClass_Array->gap0[4 * *(unsigned int *)(a2 + 48)] + 577) = 1; /*0x577db0*/
  if ( (void *)a2 == HouseClass_Player ) /*0x577dbc*/
  {
    if ( a2 ) /*0x577dca*/
      goto LABEL_8; /*0x577dca*/
  }
  else if ( a2 ) /*0x577dc0*/
  {
    return (void *)(result);
  }
  Debug::Log(); /*0x577dd1*/
  LABEL_8:
  if ( g_GameMode_Current[0] != 3 && g_GameMode_Current[0] != 4 /*0x577df4*/
    || !g_GameStateFlags
    || (v8 = 1, (*(uint8_t (__thiscall **)(int))(*(unsigned int *)g_GameStateFlags + 4))(g_GameStateFlags)) )
  {
    v8 = 0; /*0x577dff*/
  }
  result = HouseClass_Player; /*0x577e04*/
  if ( !*((unsigned char *)HouseClass_Player + 576) ) /*0x577e09*/
  {
    HouseClass::ResetObjectOrders(0, 0); /*0x577e1e*/
    *((unsigned char *)HouseClass_Player + 576) = 1; /*0x577e29*/
    g_Cell_PositionLUT = g_Cell_PositionLUT; /*0x577e3a*/
    dword_87F8F4 = 1; /*0x577e42*/
    dword_87F8FC = g_Cell_PositionLUT - 1; /*0x577e4b*/
    dword_87F900 = (g_Cell_PositionLUT << 11) + g_Shroud_CellArray + 4; /*0x577e5a*/
    v4 = LayerClass::CellIteratorNext(&MapClass_Instance); /*0x577e60*/
    if ( v4 ) /*0x577e67*/
    {
      while ( 1 ) /*0x577e6e*/
      {
        if ( !v8 ) /*0x577e74*/
          goto LABEL_23; /*0x577e74*/
        v5 = *(int16_t *)(v4 + 36); /*0x577e76*/
        v6 = *(int16_t *)(v4 + 38); /*0x577e7a*/
        if ( v5 != 7 ) /*0x577e81*/
          break; /*0x577e81*/
        if ( v6 != *(&this->q0181) + 5 ) /*0x577e8e*/
          goto LABEL_21; /*0x577e8e*/
  LABEL_24:
        v4 = LayerClass::CellIteratorNext(&MapClass_Instance); /*0x577ee9*/
        if ( !v4 ) /*0x577ef5*/
          goto LABEL_25; /*0x577ef5*/
      }
      if ( v5 == 13 && v6 == *(&this->q0181) + 11 ) /*0x577ea2*/
        goto LABEL_24; /*0x577ea2*/
  LABEL_21:
      v7 = *(&this->q0182); /*0x577ea4*/
      if ( v5 == v7 + 13 && v6 == *(&this->q0181) + v7 - 15 ) /*0x577ebd*/
        goto LABEL_24; /*0x577ebd*/
  LABEL_23:
      *(unsigned int *)(v4 + 304) = 0; /*0x577ebf*/
      *(unsigned int *)(v4 + 308) = 0; /*0x577ec5*/
      *(unsigned int *)(v4 + 300) |= 0x18u; /*0x577ed4*/
      *(unsigned int *)(v4 + 320) |= 3u; /*0x577ee3*/
      goto LABEL_24; /*0x577ee3*/
    }
  LABEL_25:
    Radar::UpdateReveal(0, 0); /*0x577efc*/
    FogOfWar::Render((int **)&MapClass_Instance); /*0x577f0d*/
    return (void *)MapClass::MarkForRedraw(&MapClass_Instance, 2); /*0x577f19*/
  }
  return (void *)(result);
}
}
// 0x578290
namespace gamemd {
int LayerClass::CellIteratorNext()
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

  v1 = *(&this->q0189); /*0x578290*/
  v2 = *(&this->q01C0); /*0x578297*/
  if ( v1 ) /*0x5782a0*/
  {
    v3 = *(&this->q0188) - 1; /*0x5782af*/
    ++*(&this->q0187); /*0x5782b1*/
    *(&this->q0189) = v1 - 1; /*0x5782b7*/
    *(&this->q0188) = v3; /*0x5782c3*/
    *(&this->q01C0) = v2 - 2044; /*0x5782c9*/
    return *(unsigned int *)v2; /*0x5782cf*/
  }
  else
  {
    v5 = *(&this->q0188); /*0x5782d5*/
    v6 = *(&this->q0187); /*0x5782db*/
    v7 = *(&this->q0181); /*0x5782e1*/
    *(&this->q0187) = v5; /*0x5782e8*/
    *(&this->q0188) = v6; /*0x5782f2*/
    if ( (((unsigned char)v5 - (unsigned char)v7 + (unsigned char)v6 - 1) & 1) != 0 ) /*0x5782ff*/
    {
      v8 = v7 - 1; /*0x578302*/
      *(&this->q0188) = v6 + 1; /*0x578303*/
    }
    else
    {
      v8 = v7 - 2; /*0x57830c*/
      *(&this->q0187) = v5 + 1; /*0x57830f*/
    }
    v9 = *(&this->q0187); /*0x57831b*/
    v10 = *(&this->q0188) << 9; /*0x578321*/
    *(&this->q0189) = v8; /*0x578324*/
    *(&this->q01C0) = *(&this->q01C9) + 4 * (v9 + v10); /*0x578337*/
    return *(unsigned int *)v2; /*0x57833d*/
  }
}
}
// 0x578350
namespace gamemd {
int LayerClass::CellIteratorReset()
{
  int v1; // eax
  int result; // eax

  v1 = *(&this->q0181); /*0x578350*/
  *(&this->q0187) = 1; /*0x578356*/
  *(&this->q0188) = v1; /*0x578360*/
  *(&this->q0189) = v1 - 1; /*0x578369*/
  result = (v1 << 11) + *(&this->q01C9) + 4; /*0x578378*/
  *(&this->q01C0) = result; /*0x57837c*/
  return result; /*0x578382*/
}
}
// 0x578460
namespace gamemd {
int LayerClass::IsWithinUsableArea(IUnknown * aP1, TechnoClass * aP2)
{
  int v3; // esi
  int v4; // edx
  int v5; // edi
  unsigned int v6; // eax
  unsigned char *v7; // eax
  int v8; // eax
  int v9; // esi
  bool result; // al

  v3 = (int)(0);
  v4 = (int)(aP1[1]);
  v5 = (int)(*aP1);
  if ( aP2 ) /*0x578477*/
  {
    v6 = v5 + (v4 << 9); /*0x57847e*/
    if ( v6 >= 0x40000 || (v7 = *(unsigned char **)(g_Shroud_CellArray + 4 * v6)) == 0 ) /*0x578494*/
    {
      g_Map_GlobalCellIndex = *(unsigned int *)aP1; /*0x578498*/
      v7 = &g_CellClassArray; /*0x57849d*/
    }
    v3 = (char)v7[283]; /*0x5784a8*/
    if ( v7[284] && v4 + v5 < v3 + *(&this->q0181) + 2 * *(&this->q0184) + 4 ) /*0x5784ca*/
      ++v3; /*0x5784cc*/
  }
  v8 = *(&this->q0181); /*0x5784d3*/
  result = 0; /*0x578531*/
  if ( v4 + v5 > v3 + v8 + 2 * *(&this->q0184) && v4 + v5 <= v3 + v8 + 2 * (*(&this->q0184) + *(&this->q0186)) + 2 ) /*0x5784fe*/
  {
    v9 = *(&this->q0183); /*0x578500*/
    if ( v5 - v4 < 2 * (v9 + *(&this->q0185)) - v8 && v4 - v5 < v8 - 2 * v9 ) /*0x578523*/
      return 1; /*0x5784e3*/
  }
  return result; /*0x578525*/
}
}
// 0x581140
namespace gamemd {
void* LayerClass::DestroyCliff(int * a1, int a2, int a3)
{
  int result; // eax
  int16_t v7; // di
  int i; // ebp
  int j; // ebp
  void **v34; // ebp
  int16_t v43; // di
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
  result = *(unsigned int *)(a3 + 56);
  if ( result == dword_ABC2C8 )
  {
    int * v4 = (int *)*((unsigned int *)g_FrameCounter + dword_ABC2C8);
    int v5 = 0;
    int v6 = *v4;
    v7 = *(unsigned short *)(a3 + 36) - *(uint8_t *)(a3 + 282) % 6;
    IDA_HIWORD(v99) = *(uint8_t *)(a3 + 282) / -6 + *(unsigned short *)(a3 + 38);
    IDA_LOWORD(v99) = v7;
    unsigned char * v8 = (unsigned char *)(*(int (__thiscall **)(int *, unsigned int))(v6 + 140))(v4, 0);
    int v89 = v7;
    v95 = (v7 << 8) + 128;
    v104 = v95;
    v93 = IDA_SHIWORD(v99);
    v106 = 0;
    v96 = (IDA_SHIWORD(v99) << 8) + 128;
    v105 = v96;
    (*(void (__thiscall **)(unsigned char *, int *))(*(unsigned int *)v8 + 436))(v8, &v104);
    int v9 = *(unsigned int *)v8;
    v8[129] = 0;
    v8[116] = 1;
    (*(void (__thiscall **)(unsigned char *, unsigned int))(v9 + 292))(v8, 0);
    if ( v8 )
      (*(void (__thiscall **)(unsigned char *, int))(*(unsigned int *)v8 + 32))(v8, 1);
  int *v10; // eax
    v10 = (int *)(*(int (__thiscall **)(unsigned int, unsigned int))(**((unsigned int **)g_FrameCounter + g_TerrainTypeTable2) + 140))(
                   *((unsigned int *)g_FrameCounter + g_TerrainTypeTable2),
                   0);
    v104 = v95;
    v105 = v96;
    int v11 = *v10;
    v106 = 0;
    (*(void (__thiscall **)(int *, int *, unsigned int))(v11 + 216))(v10, &v104, 0);
  int v12; // eax
    v12 = (*(int (__thiscall **)(unsigned int, unsigned int))(**((unsigned int **)g_FrameCounter + g_TerrainTypeTable2 + 1) + 140))(
            *((unsigned int *)g_FrameCounter + g_TerrainTypeTable2 + 1),
            0);
    v106 = 0;
    v105 = (v93 << 8) + 128;
    v104 = ((int16_t)(v99 + 3) << 8) + 128;
    (*(void (__thiscall **)(int, int *, unsigned int))(*(unsigned int *)v12 + 216))(v12, &v104, 0);
    int * v13 = v94;
    Terrain::ConnectivityGraph(v94);
    unsigned int * v14 = (unsigned int *)*((unsigned int *)g_FrameCounter + dword_ABC2C8);
    v92 = (*(int (__thiscall **)(unsigned int *))(*v14 + 156))(v14);
    if ( (int)v14[186] > 0 )
    {
      do
      {
        int v15 = v14[185];
        int v16 = 0;
        if ( v15 > 0 )
        {
          IDA_HIWORD(v94) = v5 + IDA_HIWORD(v99);
          do
          {
            IDA_LOWORD(v94) = v16 + v99;
            a3 = (int)v94;
            if ( *(unsigned int *)(v92 + 4 * (v16 + v5 * v15) + 16) && LayerClass::IsWithinUsableArea(v13, (int16_t *)&a3, 1) )
            {
              *(unsigned short *)(v13[28] + 10 * CellToTileIndexMap(v13, (int16_t *)&a3)) = 0;
              unsigned int v17 = (int16_t)a3 + (IDA_SHIWORD(a3) << 9);
  unsigned int v18;
              if ( v17 >= 0x40000 || (v18 = *(unsigned int **)(g_Shroud_CellArray + 4 * v17)) == 0 )
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
        IDA_HIWORD(v94) = i + IDA_HIWORD(v99);
        do
        {
          IDA_LOWORD(v94) = v21 + v99;
          a3 = (int)v94;
          if ( *(unsigned int *)(v92 + 4 * (v21 + i * v20) + 16)
            && LayerClass::IsWithinUsableArea(v13, (int16_t *)&a3, 1)
            && !*(unsigned short *)(v13[28] + 10 * CellToTileIndexMap(v13, (int16_t *)&a3)) )
          {
            Radar::Update(v13, (int16_t *)&a3);
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
        IDA_HIWORD(v94) = j + IDA_HIWORD(v99);
        do
        {
          IDA_LOWORD(v94) = v24 + v99;
          a3 = (int)v94;
          if ( *(unsigned int *)(v92 + 4 * (v24 + j * v23) + 16) && LayerClass::IsWithinUsableArea(v13, (int16_t *)&a3, 1) )
          {
            unsigned int v25 = (int16_t)a3 + (IDA_SHIWORD(a3) << 9);
  unsigned int *v26; // eax
            if ( v25 >= 0x40000 || (v26 = *(unsigned int **)(g_Shroud_CellArray + 4 * v25)) == 0 )
            {
              g_Map_GlobalCellIndex = a3;
              v26 = (unsigned int *)(g_CellClassArray);
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
  unsigned int *v28; // eax
    if ( v27 >= 0x40000 || (v28 = *(unsigned int **)(g_Shroud_CellArray + 4 * v27)) == 0 )
    {
      v28 = g_CellClassArray;
      g_Map_GlobalCellIndex = v99;
    }
    v106 = g_MapRenderState * *((char *)v28 + 283);
    v104 = v95;
    v105 = v96;
    Coord::To_Screen(g_TacticalClass_Instance, &v104, &v100);
    IDA_LOWORD(a3) = v99 + 5;
    IDA_HIWORD(a3) = IDA_HIWORD(v99) + 3;
    unsigned int v29 = (int16_t)(v99 + 5) + ((int16_t)(IDA_HIWORD(v99) + 3) << 9);
  unsigned int *v30; // eax
    if ( v29 >= 0x40000 || (v30 = *(unsigned int **)(g_Shroud_CellArray + 4 * v29)) == 0 )
    {
      g_Map_GlobalCellIndex = a3;
      v30 = g_CellClassArray;
    }
    v106 = g_MapRenderState * *((char *)v30 + 283);
    v104 = ((int16_t)(v99 + 5) << 8) + 128;
    v105 = ((int16_t)(IDA_HIWORD(v99) + 3) << 8) + 128;
    Coord::To_Screen(g_TacticalClass_Instance, &v104, &v102);
    Cell::CreateCrater(v100 - 120, v101 - 60, v102 - v100 + 240, v103 - v101 + 120, 0);
    v94 = (int *)*((unsigned int *)g_AnimTypeCount + AnimTypeClass::FindIndex(aXgrymed1));
    v97 = *((unsigned int *)g_AnimTypeCount + AnimTypeClass::FindIndex(aXgrymed2));
    v98 = *((unsigned int *)g_AnimTypeCount + AnimTypeClass::FindIndex(aXgrysml1));
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
          IDA_HIWORD(v96) = v92;
          do
          {
            IDA_LOWORD(v96) = v31;
            a3 = 0;
            v95 = 2;
            do
            {
              int v32 = Random::Range((unsigned int *)g_ScenarioClass_Instance + 134, 0, 2);
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
              v34 = (void *)operator new(0x1C8u);
              if ( v34 )
              {
                int v35 = Random::Range((unsigned int *)g_ScenarioClass_Instance + 134, -8, 8);
                int v36 = Random::Range((unsigned int *)g_ScenarioClass_Instance + 134, -12, 12);
                int v37 = (int16_t)v31;
                unsigned int v38 = (int16_t)v31 + ((int16_t)v92 << 9);
  unsigned int *v39; // esi
                if ( v38 >= 0x40000 || (v39 = *(unsigned int **)(g_Shroud_CellArray + 4 * v38), v31 = v93, !v39) )
                {
                  g_Map_GlobalCellIndex = v96;
                  v39 = g_CellClassArray;
                }
                int v40 = g_MapRenderState * *((char *)v39 + 283);
                v105 = v35 + ((int16_t)v92 << 8) + 128;
                v104 = (v37 << 8) + 128 + v36;
                v106 = v40;
                void * v41 = (void *)Random::Range((unsigned int *)g_ScenarioClass_Instance + 134, 0, 2);
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
    int * v42 = (int *)*((unsigned int *)g_FrameCounter + dword_ABC2C8 + 1);
    v43 = *(unsigned short *)(a3 + 38) - (*(unsigned char *)(a3 + 282) >> 2);
    int v44 = *v42;
    IDA_LOWORD(v99) = *(unsigned short *)(a3 + 36) - (*(unsigned char *)(a3 + 282) & 3);
    IDA_HIWORD(v99) = v43;
    unsigned char * v45 = (unsigned char *)(*(int (__thiscall **)(int *, unsigned int))(v44 + 140))(v42, 0);
    a3 = (int16_t)v99;
    v95 = ((int16_t)v99 << 8) + 128;
    v104 = v95;
    v98 = v43;
    v106 = 0;
    v97 = (v43 << 8) + 128;
    v105 = v97;
    (*(void (__thiscall **)(unsigned char *, int *))(*(unsigned int *)v45 + 436))(v45, &v104);
    int v46 = *(unsigned int *)v45;
    v45[129] = 0;
    v45[116] = 1;
    (*(void (__thiscall **)(unsigned char *, unsigned int))(v46 + 292))(v45, 0);
    if ( v45 )
      (*(void (__thiscall **)(unsigned char *, int))(*(unsigned int *)v45 + 32))(v45, 1);
  int *v47; // eax
    v47 = (int *)(*(int (__thiscall **)(unsigned int, unsigned int))(**((unsigned int **)g_FrameCounter + g_TerrainTypeTable2 + 3) + 140))(
                   *((unsigned int *)g_FrameCounter + g_TerrainTypeTable2 + 3),
                   0);
    v104 = v95;
    v105 = v97;
    int v48 = *v47;
    v106 = 0;
    (*(void (__thiscall **)(int *, int *, unsigned int))(v48 + 216))(v47, &v104, 0);
  int *v49; // eax
    v49 = (int *)(*(int (__thiscall **)(unsigned int, unsigned int))(**((unsigned int **)g_FrameCounter + g_TerrainTypeTable2 + 2) + 140))(
                   *((unsigned int *)g_FrameCounter + g_TerrainTypeTable2 + 2),
                   0);
    v105 = ((int16_t)(IDA_HIWORD(v99) + 3) << 8) + 128;
    v104 = (a3 << 8) + 128;
    int v50 = *v49;
    v106 = 0;
    (*(void (__thiscall **)(int *, int *, unsigned int))(v50 + 216))(v49, &v104, 0);
    int * v51 = v94;
    Terrain::ConnectivityGraph(v94);
    unsigned int * v52 = (unsigned int *)*((unsigned int *)g_FrameCounter + dword_ABC2C8 + 1);
    int v90 = (*(int (__thiscall **)(unsigned int *))(*v52 + 156))(v52);
    for ( k = 0; k < v52[186]; ++k )
    {
      int v54 = v52[185];
      int v55 = 0;
      if ( v54 > 0 )
      {
        IDA_HIWORD(v96) = k + IDA_HIWORD(v99);
        do
        {
          IDA_LOWORD(v96) = v55 + v99;
          v92 = v96;
          if ( *(unsigned int *)(v90 + 4 * (v55 + k * v54) + 16) && LayerClass::IsWithinUsableArea(v51, (int16_t *)&v92, 1) )
          {
            int v56 = Cell::CoordToIndex(v51, (int16_t *)&v92);
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
            *(unsigned short *)(v51[28] + 10 * v56) = 0;
            unsigned int v58 = (int16_t)v92 + (IDA_SHIWORD(v92) << 9);
  unsigned int *v59; // eax
            if ( v58 >= 0x40000 || (v59 = *(unsigned int **)(g_Shroud_CellArray + 4 * v58)) == 0 )
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
        IDA_HIWORD(v96) = m + IDA_HIWORD(v99);
        do
        {
          IDA_LOWORD(v96) = v62 + v99;
          v93 = v96;
          if ( *(unsigned int *)(v90 + 4 * (v62 + m * v61) + 16) && LayerClass::IsWithinUsableArea(v51, (int16_t *)&v93, 1) )
          {
            int v63 = Cell::CoordToIndex(v51, (int16_t *)&v93);
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
            if ( !*(unsigned short *)(v51[28] + 10 * v63) )
              Radar::Update(v51, (int16_t *)&v93);
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
        IDA_HIWORD(v96) = n + IDA_HIWORD(v99);
        do
        {
          IDA_LOWORD(v96) = v67 + v99;
          v92 = v96;
          if ( *(unsigned int *)(v90 + 4 * (v67 + n * v66) + 16) && LayerClass::IsWithinUsableArea(v51, (int16_t *)&v92, 1) )
          {
            unsigned int v68 = (int16_t)v92 + (IDA_SHIWORD(v92) << 9);
  unsigned int *v69; // eax
            if ( v68 >= 0x40000 || (v69 = *(unsigned int **)(g_Shroud_CellArray + 4 * v68)) == 0 )
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
  unsigned int *v71; // eax
    if ( v70 >= 0x40000 || (v71 = *(unsigned int **)(g_Shroud_CellArray + 4 * v70)) == 0 )
    {
      v71 = g_CellClassArray;
      g_Map_GlobalCellIndex = v99;
    }
    v106 = g_MapRenderState * *((char *)v71 + 283);
    v104 = v95;
    v105 = v97;
    Coord::To_Screen(g_TacticalClass_Instance, &v104, &v102);
    int v72 = (int16_t)(v99 + 3);
    int v73 = (int16_t)(IDA_HIWORD(v99) + 5) << 9;
    bool v74 = v72 + v73 < 0;
    int v75 = v72 + v73;
    IDA_LOWORD(v97) = v99 + 3;
    IDA_HIWORD(v97) = IDA_HIWORD(v99) + 5;
  unsigned int *v76; // eax
    if ( v74 || v75 >= 0x40000 || (v76 = *(unsigned int **)(g_Shroud_CellArray + 4 * v75)) == 0 )
    {
      g_Map_GlobalCellIndex = v97;
      v76 = g_CellClassArray;
    }
    v106 = g_MapRenderState * *((char *)v76 + 283);
    v104 = ((int16_t)(v99 + 3) << 8) + 128;
    v105 = ((int16_t)(IDA_HIWORD(v99) + 5) << 8) + 128;
    Coord::To_Screen(g_TacticalClass_Instance, &v104, &v100);
    Cell::CreateCrater(v100 - 120, v103 - 60, v102 - v100 + 240, v101 - v103 + 120, 0);
    v95 = *((unsigned int *)g_AnimTypeCount + AnimTypeClass::FindIndex(aXgrymed1));
    v96 = *((unsigned int *)g_AnimTypeCount + AnimTypeClass::FindIndex(aXgrymed2));
    int v77 = *((unsigned int *)g_AnimTypeCount + AnimTypeClass::FindIndex(aXgrysml1));
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
          IDA_HIWORD(v98) = v91;
          do
          {
            IDA_LOWORD(v98) = v78;
            v92 = 0;
            v97 = 2;
            do
            {
              int v79 = Random::Range((unsigned int *)g_ScenarioClass_Instance + 134, 0, 2);
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
              v81 = (void *)operator new(0x1C8u);
              if ( v81 )
              {
                int v82 = Random::Range((unsigned int *)g_ScenarioClass_Instance + 134, -8, 8);
                int v83 = Random::Range((unsigned int *)g_ScenarioClass_Instance + 134, -12, 12);
                int v84 = (int16_t)v78;
                unsigned int v85 = (int16_t)v78 + ((int16_t)v91 << 9);
  unsigned int *v86; // esi
                if ( v85 >= 0x40000 || (v86 = *(unsigned int **)(g_Shroud_CellArray + 4 * v85), v78 = v93, !v86) )
                {
                  g_Map_GlobalCellIndex = v98;
                  v86 = g_CellClassArray;
                }
                int v87 = g_MapRenderState * *((char *)v86 + 283);
                v105 = v82 + ((int16_t)v91 << 8) + 128;
                v104 = (v84 << 8) + 128 + v83;
                v106 = v87;
                void * v88 = (void *)Random::Range((unsigned int *)g_ScenarioClass_Instance + 134, 0, 2);
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
} // namespace gamemd
