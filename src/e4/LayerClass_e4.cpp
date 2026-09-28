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
#include "e4/classes/MapClass_e4.hpp"

// 0x568300
namespace gamemd {
int LayerClass::CoordinatesLegal(IUnknown * aP1)
{
  int v2; // edx
  int v3; // esi
  int result; // eax
  int v5; // edi

  v2 = (int)(this->u32_F4);
  v3 = (int)(*aP1);
  result = (int)(aP1[1]);
  v5 = result + v3; /*0x568313*/
  IDA_LOBYTE(result) = result + v3 > v2 /*0x56833f*/
                && v3 - result < v2
                && (result -= v3, result < v2)
                && (result = this->u32_F8, v5 <= v2 + 2 * result);
  return result; /*0x568337*/
}
}
// 0x56DC20
namespace gamemd {
unsigned int * LayerClass::Pathfinding_Find(IUnknown * aP0, IUnknown * aP1, IUnknown * aP2, IUnknown * aP3, IUnknown * aP4, IUnknown * aP5, IUnknown * aP6, IUnknown * aP7, IUnknown * aP8, IUnknown * aP9, IUnknown * aP10, IUnknown * aP11, IUnknown * aP12, IUnknown * aP13, IUnknown * aP14, MouseClass * aP15, char a17)
{
  MapClass *v17; // ebx
  int v18; // edx
  Type *v19; // eax
  unsigned int v20; // eax
  int *v21; // eax
  unsigned int v22; // eax
  int *v23; // eax
  int v24; // eax
  int v25; // ebp
  int v26; // edi
  int v27; // ecx
  unsigned int v28; // eax
  Cell *v29; // eax
  Cell *v30; // esi
  int64_t v31; // rax
  int *v32; // ecx
  int16_t v33; // ax
  int v34; // esi
  unsigned int *v35; // eax
  int v36; // ecx
  unsigned int v37; // eax
  Cell *v38; // eax
  Cell *v39; // esi
  int64_t v40; // rax
  int *v41; // ecx
  int16_t v42; // ax
  int v43; // esi
  unsigned int *v44; // eax
  int v45; // edi
  int *v46; // ebp
  unsigned int v47; // eax
  Cell *v48; // eax
  Cell *v49; // esi
  int64_t v50; // rax
  int16_t v51; // ax
  int v52; // esi
  unsigned int *v53; // eax
  unsigned int v54; // eax
  Cell *v55; // eax
  Cell *v56; // esi
  int64_t v57; // rax
  int16_t v58; // ax
  int v59; // esi
  unsigned int *v60; // eax
  unsigned int *v61; // ebx
  uint16_t *v62; // esi
  uint16_t v63; // di
  int16_t v64; // bp
  unsigned int *v65; // eax
  Type *v66; // edx
  Type *v67; // ecx
  Type *v69; // ebx
  int v70; // edi
  unsigned int *v71; // eax
  unsigned int *v72; // esi
  int v73; // eax
  double v75; // [esp+0h] [ebp-1F4h]
  int v76; // [esp+18h] [ebp-1DCh] BYREF
  char v77; // [esp+1Fh] [ebp-1D5h]
  int v78; // [esp+20h] [ebp-1D4h]
  int v79; // [esp+24h] [ebp-1D0h]
  int v80; // [esp+28h] [ebp-1CCh]
  Type *v81; // [esp+2Ch] [ebp-1C8h]
  Type *v82; // [esp+30h] [ebp-1C4h]
  unsigned int *i; // [esp+34h] [ebp-1C0h]
  int v84; // [esp+38h] [ebp-1BCh]
  int v85; // [esp+3Ch] [ebp-1B8h]
  int v86; // [esp+40h] [ebp-1B4h]
  int *v87; // [esp+44h] [ebp-1B0h]
  int v88; // [esp+48h] [ebp-1ACh]
  double v89; // [esp+4Ch] [ebp-1A8h] BYREF
  int v90; // [esp+54h] [ebp-1A0h]
  int v91; // [esp+58h] [ebp-19Ch] BYREF
  int v92; // [esp+5Ch] [ebp-198h]
  int v93; // [esp+60h] [ebp-194h]
  unsigned int v94[3]; // [esp+64h] [ebp-190h] BYREF
  unsigned int v95[3]; // [esp+70h] [ebp-184h] BYREF
  unsigned int v96[3]; // [esp+7Ch] [ebp-178h] BYREF
  int v97[4]; // [esp+88h] [ebp-16Ch] BYREF
  int v98[4]; // [esp+98h] [ebp-15Ch] BYREF
  int v99[4]; // [esp+A8h] [ebp-14Ch] BYREF
  int v100[4]; // [esp+B8h] [ebp-13Ch] BYREF
  char v101[4]; // [esp+C8h] [ebp-12Ch] BYREF
  char v102[4]; // [esp+CCh] [ebp-128h] BYREF
  char v103[4]; // [esp+D0h] [ebp-124h] BYREF
  unsigned int v104[24]; // [esp+D4h] [ebp-120h] BYREF
  unsigned int v105[24]; // [esp+134h] [ebp-C0h] BYREF
  unsigned int v106[24]; // [esp+194h] [ebp-60h] BYREF

  v17 = (gamemd::MapClass *)((IUnknown *)((MapClass *)aP0));
  v18 = (IUnknown *)(*aP3);
  v19 = (IUnknown *)((Type *)aP3[1]);
  v81 = aP0; /*0x56dc49*/
  v78 = 0; /*0x56dc4d*/
  v86 = v18; /*0x56dc51*/
  v82 = v19; /*0x56dc55*/
  v77 = 0; /*0x56dc59*/
  if ( aP5 == 0xFFFF ) /*0x56dc5e*/
    aP5 = -1; /*0x56dc60*/
  v20 = v18 + ((unsigned int)v19 << 9); /*0x56dc6e*/
  if ( v20 >= 0x40000 || (v21 = *(int **)(*(unsigned int *)&stru_87F5F0.__pad_58[732] + 4 * v20)) == 0 ) /*0x56dc84*/
  {
    g_MissionQueueFrame.briefing[139] = *(unsigned int *)aP3; /*0x56dc88*/
    v21 = &g_MissionQueueFrame.briefing[130]; /*0x56dc8d*/
  }
  v84 = *((char *)v21 + 283); /*0x56dc99*/
  if ( aP7 ) /*0x56dca6*/
  {
    v22 = *aP3 + (aP3[1] << 9); /*0x56dcb2*/
    if ( v22 >= 0x40000 || (v23 = *(int **)(*(unsigned int *)&stru_87F5F0.__pad_58[732] + 4 * v22)) == 0 ) /*0x56dcc2*/
    {
      v23 = &g_MissionQueueFrame.briefing[130]; /*0x56dcc6*/
      g_MissionQueueFrame.briefing[139] = *(unsigned int *)aP3; /*0x56dccb*/
    }
    if ( (v23[80] & 0x100) != 0 ) /*0x56dcda*/
      v84 += 4; /*0x56dcdc*/
  }
  v24 = aP0[62].Type_field_00 + aP0[61].Type_field_00; /*0x56dced*/
  if ( v24 > 32 ) /*0x56dcf2*/
    v24 = 32; /*0x56dcf4*/
  i = (unsigned int *)v24; /*0x56dcfb*/
  v79 = 0; /*0x56dcff*/
  if ( v24 <= 0 ) /*0x56dd03*/
    goto LABEL_125; /*0x56dd03*/
  do /*0x56e5ad*/
  {
    v25 = v79; /*0x56dd09*/
    v26 = -v79; /*0x56dd0f*/
    if ( -v79 <= v79 ) /*0x56dd13*/
    {
      v87 = (int *)(&v104[v78]);
      do /*0x56dd28*/
      {
        if ( aP15 ) /*0x56dd31*/
          goto LABEL_36; /*0x56dd31*/
        IDA_LOWORD(v88) = v86 + v26; /*0x56dd44*/
        v27 = (int16_t)((unsigned short)v82 - v25); /*0x56dd49*/
        IDA_HIWORD(v88) = (unsigned short)v82 - v25; /*0x56dd4c*/
        v76 = v88; /*0x56dd5a*/
        v28 = (int16_t)(v86 + v26) + (v27 << 9); /*0x56dd61*/
        if ( v28 < 0x40000 ) /*0x56dd63*/
        {
          v29 = *(Cell **)(*(unsigned int *)&stru_87F5F0.__pad_58[732] + 4 * v28); /*0x56dd72*/
          if ( v29 ) /*0x56dd78*/
          {
            v25 = v79; /*0x56dd7a*/
            v30 = v29; /*0x56dd7e*/
            goto LABEL_23; /*0x56dd80*/
          }
          v25 = v79; /*0x56dd82*/
        }
        g_MissionQueueFrame.briefing[139] = (int)(v88);
        v30 = (int)((Cell *)&g_MissionQueueFrame.briefing[130]);
  LABEL_23: v99[1] = (int)(v27);
        v99[0] = (int16_t)(v86 + v26); /*0x56dd9f*/
        v99[2] = aP8; /*0x56ddad*/
        v99[3] = aP9; /*0x56ddb9*/
        if ( (uint8_t)Type::CheckAmbiguity((Type *)v17, (int)v30, 1) ) /*0x56ddc0*/
        {
          if ( MapClass::CheckCellsBuildable(&v76, aP8, aP9, aP4, aP5, aP6, -1, aP7, aP10) ) /*0x56de0e*/
          {
            if ( !aP11 /*0x56de4c*/
              || (v31 = v84 - 4 * (((unsigned int)v30->Cell_field_0x140 >> 8) & 1) - v30->Cell_field_0x11B[0],
                  (int)((IDA_HIDWORD(v31) ^ v31) - IDA_HIDWORD(v31)) < 2) )
            {
              if ( (!aP12 || (uint8_t)Cell::IsBuildableAdvanced(v30)) /*0x56de9d*/
                && (aP13 || ((int)v30->Cell_field_0x140 & 0x100) == 0)
                && (!a17 || (uint8_t)MapClass::IsAreaFree(v17, v99, -1)) )
              {
                v32 = v87; /*0x56deaa*/
                v33 = v76; /*0x56deae*/
                v34 = v78; /*0x56deb2*/
                *v87 = v76; /*0x56deb6*/
                v87 = v32 + 1; /*0x56debb*/
                v78 = v34 + 1; /*0x56dec9*/
                if ( aP7 /*0x56df18*/
                  || (v94[0] = (v33 << 8) + 128,
                      v94[1] = (IDA_SHIWORD(v76) << 8) + 128,
                      v94[2] = 0,
                      v35 = Terrain::ClimbCheck(v101, v94),
                      v76 == *v35) )
                {
                  v77 = 1; /*0x56df25*/
                }
              }
            }
          }
        }
  LABEL_36:
        if ( v78 == 24 ) /*0x56df2f*/
          goto LABEL_103; /*0x56df2f*/
        if ( aP15 && v26 <= -v25 ) /*0x56df46*/
          goto LABEL_57; /*0x56df46*/
        IDA_HIWORD(v90) = (unsigned short)v82 + v25; /*0x56df5a*/
        IDA_LOWORD(v90) = v86 + v26; /*0x56df5f*/
        v36 = (int16_t)((unsigned short)v82 + v25); /*0x56df68*/
        v76 = v90; /*0x56df70*/
        v37 = (int16_t)(v86 + v26) + (v36 << 9); /*0x56df77*/
        if ( v37 < 0x40000 ) /*0x56df79*/
        {
          v38 = *(Cell **)(*(unsigned int *)&stru_87F5F0.__pad_58[732] + 4 * v37); /*0x56df88*/
          if ( v38 ) /*0x56df8e*/
          {
            v25 = v79; /*0x56df90*/
            v39 = v38; /*0x56df94*/
            goto LABEL_44; /*0x56df96*/
          }
          v25 = v79; /*0x56df98*/
        }
        g_MissionQueueFrame.briefing[139] = (int)(v90);
        v39 = (int)((Cell *)&g_MissionQueueFrame.briefing[130]);
  LABEL_44: v98[1] = (int)(v36);
        v98[3] = aP9; /*0x56dfbe*/
        v98[0] = (int16_t)(v86 + v26); /*0x56dfc8*/
        v98[2] = aP8; /*0x56dfcf*/
        if ( (uint8_t)Type::CheckAmbiguity((Type *)v17, (int)v39, 1) ) /*0x56dfd6*/
        {
          if ( MapClass::CheckCellsBuildable(&v76, aP8, aP9, aP4, aP5, aP6, -1, aP7, aP10) ) /*0x56e024*/
          {
            if ( !aP11 /*0x56e062*/
              || (v40 = v84 - 4 * (((unsigned int)v39->Cell_field_0x140 >> 8) & 1) - v39->Cell_field_0x11B[0],
                  (int)((IDA_HIDWORD(v40) ^ v40) - IDA_HIDWORD(v40)) < 2) )
            {
              if ( (!aP12 || (uint8_t)Cell::IsBuildableAdvanced(v39)) /*0x56e0b3*/
                && (aP13 || ((int)v39->Cell_field_0x140 & 0x100) == 0)
                && (!a17 || (uint8_t)MapClass::IsAreaFree(v17, v98, -1)) )
              {
                v41 = v87; /*0x56e0c0*/
                v42 = v76; /*0x56e0c4*/
                v43 = v78; /*0x56e0c8*/
                *v87 = v76; /*0x56e0cc*/
                v87 = v41 + 1; /*0x56e0d1*/
                v78 = v43 + 1; /*0x56e0df*/
                if ( aP7 /*0x56e12f*/
                  || (v95[0] = (v42 << 8) + 128,
                      v95[1] = (IDA_SHIWORD(v76) << 8) + 128,
                      v95[2] = 0,
                      v44 = Terrain::ClimbCheck(v103, v95),
                      v76 == *v44) )
                {
                  v77 = 1; /*0x56e13c*/
                }
              }
            }
          }
        }
  LABEL_57:
        if ( v78 == 24 ) /*0x56e146*/
          goto LABEL_103; /*0x56e146*/
        ++v26; /*0x56e14c*/
      }
      while ( v26 <= v25 ); /*0x56dd28*/
    }
    v45 = 1 - v25; /*0x56e160*/
    if ( 1 - v25 <= v25 - 1 ) /*0x56e16c*/
    {
      v46 = (int *)(&v104[v78]);
      do /*0x56e17d*/
      {
        if ( aP15 ) /*0x56e186*/
          goto LABEL_80; /*0x56e186*/
        IDA_LOWORD(v85) = v86 - v79; /*0x56e19c*/
        IDA_HIWORD(v85) = v45 + (unsigned short)v82; /*0x56e1a1*/
        v76 = v85; /*0x56e1b2*/
        v47 = (int16_t)(v86 - v79) + ((int16_t)(v45 + (unsigned short)v82) << 9); /*0x56e1b9*/
        if ( v47 < 0x40000 ) /*0x56e1bb*/
        {
          v48 = *(Cell **)(*(unsigned int *)&stru_87F5F0.__pad_58[732] + 4 * v47); /*0x56e1ca*/
          if ( v48 ) /*0x56e1cf*/
          {
            v17 = (MapClass *)v81; /*0x56e1d1*/
            v49 = v48; /*0x56e1d5*/
            goto LABEL_67; /*0x56e1d7*/
          }
          v17 = (MapClass *)v81; /*0x56e1d9*/
        }
        g_MissionQueueFrame.briefing[139] = (int)(v85);
        v49 = (int)((Cell *)&g_MissionQueueFrame.briefing[130]);
  LABEL_67:
        v100[0] = (int16_t)(v86 - v79); /*0x56e1e8*/
        v100[1] = (int16_t)(v45 + (unsigned short)v82); /*0x56e1fd*/
        v100[2] = aP8; /*0x56e209*/
        v100[3] = aP9; /*0x56e210*/
        if ( (uint8_t)Type::CheckAmbiguity((Type *)v17, (int)v49, 1) ) /*0x56e217*/
        {
          if ( MapClass::CheckCellsBuildable(&v76, aP8, aP9, aP4, aP5, aP6, -1, aP7, aP10) ) /*0x56e265*/
          {
            if ( !aP11 /*0x56e2a5*/
              || (v50 = v84 - 4 * (((unsigned int)v49->Cell_field_0x140 >> 8) & 1) - v49->Cell_field_0x11B[0],
                  (int)((IDA_HIDWORD(v50) ^ v50) - IDA_HIDWORD(v50)) < 2) )
            {
              if ( (!aP12 || (uint8_t)Cell::IsBuildableAdvanced(v49)) /*0x56e2f6*/
                && (aP13 || ((int)v49->Cell_field_0x140 & 0x100) == 0)
                && (!a17 || (uint8_t)MapClass::IsAreaFree(v17, v100, -1)) )
              {
                v51 = v76; /*0x56e303*/
                v52 = v78; /*0x56e307*/
                *v46++ = v76; /*0x56e312*/
                v78 = v52 + 1; /*0x56e31b*/
                if ( aP7 /*0x56e371*/
                  || (v96[0] = (v51 << 8) + 128,
                      v96[1] = (IDA_SHIWORD(v76) << 8) + 128,
                      v96[2] = 0,
                      v53 = Terrain::ClimbCheck(v102, v96),
                      v76 == *v53) )
                {
                  v77 = 1; /*0x56e37e*/
                }
              }
            }
          }
        }
  LABEL_80:
        if ( v78 == 24 ) /*0x56e388*/
          goto LABEL_103; /*0x56e388*/
        IDA_HIWORD(v80) = v45 + (unsigned short)v82; /*0x56e39c*/
        IDA_LOWORD(v80) = v79 + v86; /*0x56e3a6*/
        v76 = v80; /*0x56e3b4*/
        v54 = (int16_t)(v79 + v86) + ((int16_t)(v45 + (unsigned short)v82) << 9); /*0x56e3bb*/
        if ( v54 < 0x40000 ) /*0x56e3bd*/
        {
          v55 = *(Cell **)(*(unsigned int *)&stru_87F5F0.__pad_58[732] + 4 * v54); /*0x56e3cc*/
          if ( v55 ) /*0x56e3d1*/
          {
            v17 = (MapClass *)v81; /*0x56e3d3*/
            v56 = v55; /*0x56e3d7*/
            goto LABEL_86; /*0x56e3d9*/
          }
          v17 = (MapClass *)v81; /*0x56e3db*/
        }
        g_MissionQueueFrame.briefing[139] = (int)(v80);
        v56 = (int)((Cell *)&g_MissionQueueFrame.briefing[130]);
  LABEL_86:
        v97[0] = (int16_t)(v79 + v86); /*0x56e3ea*/
        v97[1] = (int16_t)(v45 + (unsigned short)v82); /*0x56e3ff*/
        v97[2] = aP8; /*0x56e40b*/
        v97[3] = aP9; /*0x56e412*/
        if ( (uint8_t)Type::CheckAmbiguity((Type *)v17, (int)v56, 1) ) /*0x56e419*/
        {
          if ( MapClass::CheckCellsBuildable(&v76, aP8, aP9, aP4, aP5, aP6, -1, aP7, aP10) ) /*0x56e467*/
          {
            if ( !aP11 /*0x56e4a7*/
              || (v57 = v84 - 4 * (((unsigned int)v56->Cell_field_0x140 >> 8) & 1) - v56->Cell_field_0x11B[0],
                  (int)((IDA_HIDWORD(v57) ^ v57) - IDA_HIDWORD(v57)) < 2) )
            {
              if ( (!aP12 || (uint8_t)Cell::IsBuildableAdvanced(v56)) /*0x56e4f8*/
                && (aP13 || ((int)v56->Cell_field_0x140 & 0x100) == 0)
                && (!a17 || (uint8_t)MapClass::IsAreaFree(v17, v97, -1)) )
              {
                v58 = v76; /*0x56e501*/
                v59 = v78; /*0x56e505*/
                *v46++ = v76; /*0x56e510*/
                v78 = v59 + 1; /*0x56e519*/
                if ( aP7 /*0x56e566*/
                  || (v91 = (v58 << 8) + 128,
                      v92 = (IDA_SHIWORD(v76) << 8) + 128,
                      v93 = 0,
                      v60 = Terrain::ClimbCheck(&v89, &v91),
                      v76 == *v60) )
                {
                  v77 = 1; /*0x56e573*/
                }
              }
            }
          }
        }
        if ( v78 == 24 ) /*0x56e57d*/
          goto LABEL_103; /*0x56e57d*/
        ++v45; /*0x56e583*/
      }
      while ( v45 <= v79 - 1 ); /*0x56e17d*/
    }
    if ( v77 ) /*0x56e59c*/
      break; /*0x56e59c*/
    ++v79; /*0x56e5a9*/
  }
  while ( v79 < (int)i ); /*0x56e5ad*/
  LABEL_103:
  if ( v78 <= 0 ) /*0x56e5b9*/
  {
  LABEL_125:
    *aP2 = *(unsigned int *)&g_MissionQueueFrame.waypoints[2134]; /*0x56e7aa*/
    return aP2; /*0x56e79a*/
  }
  v81 = 0; /*0x56e5c5*/
  v82 = 0; /*0x56e5c9*/
  v61 = v106; /*0x56e5da*/
  v62 = (uint16_t *)v104; /*0x56e5e1*/
  i = v105; /*0x56e5e8*/
  v80 = v78; /*0x56e5ec*/
  do /*0x56e67b*/
  {
    v63 = *v62; /*0x56e5f0*/
    v64 = v62[1]; /*0x56e5f3*/
    v91 = ((int16_t)*v62 << 8) + 128; /*0x56e60a*/
    v92 = (v64 << 8) + 128; /*0x56e622*/
    v93 = 0; /*0x56e626*/
    v85 = *Terrain::ClimbCheck(&v89, &v91); /*0x56e638*/
    if ( v85 == IDA___PAIR32__(v64, v63) ) /*0x56e63c*/
    {
      v65 = i; /*0x56e645*/
      v66 = v81; /*0x56e64b*/
      *i = *(unsigned int *)v62; /*0x56e64f*/
      v81 = (Type *)((char *)&v66->Type_field_00 + 1); /*0x56e655*/
      i = v65 + 1; /*0x56e659*/
    }
    else
    {
      v67 = (Type *)((char *)&v82->Type_field_00 + 1); /*0x56e665*/
      *v61 = *(unsigned int *)v62; /*0x56e666*/
      v82 = v67; /*0x56e668*/
      ++v61; /*0x56e66c*/
    }
    v62 += 2; /*0x56e673*/
    --v80; /*0x56e677*/
  }
  while ( v80 ); /*0x56e67b*/
  if ( *aP14 == *(unsigned short *)&g_MissionQueueFrame.waypoints[2134] /*0x56e6a6*/
    && aP14[1] == *(unsigned short *)&g_MissionQueueFrame.waypoints[2136] )
  {
    if ( v81 ) /*0x56e6b0*/
      *aP2 = v105[*(unsigned int *)&stru_A8EB00.gapE4[416] % (int)v81]; /*0x56e6c6*/
    else
      *aP2 = v106[*(unsigned int *)&stru_A8EB00.gapE4[416] % (int)v82]; /*0x56e6e5*/
    return aP2; /*0x56e6b4*/
  }
  else
  {
    v69 = v81; /*0x56e6f2*/
    if ( !v81 ) /*0x56e6f4*/
      v69 = v82; /*0x56e6f6*/
    v70 = 0; /*0x56e6f8*/
    v89 = 100000.0; /*0x56e6fa*/
    for ( i = *(unsigned int **)&g_MissionQueueFrame.waypoints[2134]; v70 < (int)v69; ++v70 ) /*0x56e710*/
    {
      v71 = &v105[v70]; /*0x56e718*/
      if ( !v81 ) /*0x56e71f*/
        v71 = &v106[v70]; /*0x56e721*/
      v72 = (unsigned int *)*v71; /*0x56e728*/
      v73 = (int16_t)*v71 - *aP14; /*0x56e73c*/
      v80 = v73 * v73 + (IDA_SHIWORD(v72) - aP14[1]) * (IDA_SHIWORD(v72) - aP14[1]); /*0x56e751*/
      __asm /*0x56e755*/
      {
        fild [esp+1F4h+var_1CC]
        fstp [esp+1F4h+var_1F4]; double
      }
      Math::Sqrt(v75); /*0x56e75c*/
      __asm { fcom [esp+1F4h+var_1A8] } /*0x56e761*/
      __asm { fnstsw ax }
      if ( (_AX & 0x100) != 0 ) /*0x56e76d*/
      {
        __asm { fstp [esp+1ECh+var_1A8] } /*0x56e76f*/
        i = v72; /*0x56e773*/
      }
      else
      {
        __asm { fstp st } /*0x56e779*/
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
  void *result; // eax
  int v4; // eax
  int v5; // edx
  int v6; // ecx
  int v7; // esi
  char v8; // [esp+10h] [ebp+4h]

  result = (void *)a2; /*0x577d90*/
  if ( a2 ) /*0x577da2*/
    *(unsigned char *)(*(&dword_A8022C->vtable0 + *(unsigned int *)(a2 + 48)) + 577) = 1; /*0x577db0*/
  if ( (Object *)a2 == dword_A83D4C ) /*0x577dbc*/
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
  if ( *(unsigned int *)&dword_A8B238 != 3 && *(unsigned int *)&dword_A8B238 != 4 /*0x577df4*/
    || !dword_A8B23C
    || (v8 = 1, (*(uint8_t (__thiscall **)(ObjectClass *))(dword_A8B23C->vtable0 + 4))(dword_A8B23C)) )
  {
    v8 = 0; /*0x577dff*/
  }
  result = dword_A83D4C; /*0x577e04*/
  if ( !dword_A83D4C->__pad_140[256] ) /*0x577e09*/
  {
    HouseClass::ResetObjectOrders(0, 0); /*0x577e1e*/
    dword_A83D4C->__pad_140[256] = 1; /*0x577e29*/
    dword_87F8DC = dword_87F8DC; /*0x577e3a*/
    dword_87F8F4 = 1; /*0x577e42*/
    dword_87F8FC = dword_87F8DC - 1; /*0x577e4b*/
    dword_87F900 = (dword_87F8DC << 11) + dword_87F924 + 4; /*0x577e5a*/
    v4 = LayerClass::CellIteratorNext((LayerClass *)&dword_87F7E8); /*0x577e60*/
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
        if ( v6 != this->u32_F4 + 5 ) /*0x577e8e*/
          goto LABEL_21; /*0x577e8e*/
  LABEL_24:
        v4 = LayerClass::CellIteratorNext((LayerClass *)&dword_87F7E8); /*0x577ee9*/
        if ( !v4 ) /*0x577ef5*/
          goto LABEL_25; /*0x577ef5*/
      }
      if ( v5 == 13 && v6 == this->u32_F4 + 11 ) /*0x577ea2*/
        goto LABEL_24; /*0x577ea2*/
  LABEL_21:
      v7 = this->u32_F8; /*0x577ea4*/
      if ( v5 == v7 + 13 && v6 == this->u32_F4 + v7 - 15 ) /*0x577ebd*/
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
    FogOfWar::Render((FogOfWar *)&dword_87F7E8); /*0x577f0d*/
    return (void *)MapClass::MarkForRedraw((GScreenClass *)&dword_87F7E8, 2); /*0x577f19*/
  }
  return result; /*0x577f1e*/
}
}
// 0x578290
namespace gamemd {
int LayerClass::CellIteratorNext()
{
  int v1; // eax
  int *v2; // ebp
  int v3; // edx
  int v5; // edx
  int v6; // eax
  int v7; // esi
  int v8; // esi
  int v9; // edx
  int v10; // eax

  v1 = this->u32_114; /*0x578290*/
  v2 = (int *)this->u32_118; /*0x578297*/
  if ( v1 ) /*0x5782a0*/
  {
    v3 = this->u32_110 - 1; /*0x5782af*/
    ++this->u32_10C; /*0x5782b1*/
    this->u32_114 = v1 - 1; /*0x5782b7*/
    this->u32_110 = v3; /*0x5782c3*/
    this->u32_118 = v2 - 511; /*0x5782c9*/
    return *v2; /*0x5782cf*/
  }
  else
  {
    v5 = this->u32_110; /*0x5782d5*/
    v6 = this->u32_10C; /*0x5782db*/
    v7 = this->u32_F4; /*0x5782e1*/
    this->u32_10C = v5; /*0x5782e8*/
    this->u32_110 = v6; /*0x5782f2*/
    if ( (((unsigned char)v5 - (unsigned char)v7 + (unsigned char)v6 - 1) & 1) != 0 ) /*0x5782ff*/
    {
      v8 = v7 - 1; /*0x578302*/
      this->u32_110 = v6 + 1; /*0x578303*/
    }
    else
    {
      v8 = v7 - 2; /*0x57830c*/
      this->u32_10C = v5 + 1; /*0x57830f*/
    }
    v9 = this->u32_10C; /*0x57831b*/
    v10 = this->u32_110 << 9; /*0x578321*/
    this->u32_114 = v8; /*0x578324*/
    this->u32_118 = this->u32_13C + 4 * (v9 + v10); /*0x578337*/
    return *v2; /*0x57833d*/
  }
}
}
// 0x578350
namespace gamemd {
int LayerClass::CellIteratorReset()
{
  int v1; // eax
  int result; // eax

  v1 = this->u32_F4; /*0x578350*/
  this->u32_10C = 1; /*0x578356*/
  this->u32_110 = v1; /*0x578360*/
  this->u32_114 = v1 - 1; /*0x578369*/
  result = (v1 << 11) + this->u32_13C + 4; /*0x578378*/
  this->u32_118 = result; /*0x57837c*/
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
  int *v7; // eax
  int result; // eax
  int v9; // esi

  v3 = 0; /*0x57846b*/
  v4 = aP1[1]; /*0x57846d*/
  v5 = *aP1; /*0x578472*/
  if ( aP2 ) /*0x578477*/
  {
    v6 = v5 + (v4 << 9); /*0x57847e*/
    if ( v6 >= 0x40000 || (v7 = *(int **)(*(unsigned int *)&stru_87F5F0.__pad_58[732] + 4 * v6)) == 0 ) /*0x578494*/
    {
      g_MissionQueueFrame.briefing[139] = *(unsigned int *)aP1; /*0x578498*/
      v7 = &g_MissionQueueFrame.briefing[130]; /*0x57849d*/
    }
    v3 = *((char *)v7 + 283); /*0x5784a8*/
    if ( *((unsigned char *)v7 + 284) && v4 + v5 < v3 + this->u32_F4 + 2 * this->u32_100 + 4 ) /*0x5784ca*/
      ++v3; /*0x5784cc*/
  }
  result = this->u32_F4; /*0x5784d3*/
  IDA_LOBYTE(result) = v4 + v5 > v3 + result + 2 * this->u32_100 /*0x578531*/
                && v4 + v5 <= v3 + result + 2 * (this->u32_100 + this->u32_108) + 2
                && (v9 = this->u32_FC, v5 - v4 < 2 * (v9 + this->u32_104) - result)
                && (result -= 2 * v9, v4 - v5 < result);
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
