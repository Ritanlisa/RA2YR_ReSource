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
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/LightningStorm_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Type_e4.hpp"
#include "e4/classes/LCWStraw_e4.hpp"

// 0x568300
namespace gamemd {
int LayerClass::CoordinatesLegal(int16_t *aP1)
{

  int v2; // edx
  int v3; // esi
  int result; // eax
  int v5; // edi

  v2 = (int)(*((unsigned int *)this + 61));
  v3 = (int)(*aP1);
  result = (int)(aP1[1]);
  v5 = result + v3; /*0x568313*/
  LOBYTE(result) = result + v3 > v2 /*0x56833f*/
                && v3 - result < v2
                && (result -= v3, result < v2)
                && (result = *((unsigned int *)this + 62), v5 <= v2 + 2 * result);
  return result; /*0x568337*/

}
}
// 0x56DC20
namespace gamemd {
int LayerClass::Pathfinding_Find(IUnknown * aP0, IUnknown * aP1, IUnknown * aP2, IUnknown * aP3, IUnknown * aP4, IUnknown * aP5, IUnknown * aP6, IUnknown * aP7, IUnknown * aP8, IUnknown * aP9, IUnknown * aP10, IUnknown * aP11, IUnknown * aP12, IUnknown * aP13, IUnknown * aP14, MouseClass * aP15, char a17)
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
  v19 = (gamemd::Type *)((IUnknown *)((Type *)aP3[1]));
  v81 = (gamemd::Type *)((IUnknown *)(aP0));
  v78 = (int)((IUnknown *)(0));
  v86 = v18; /*0x56dc51*/
  v82 = v19; /*0x56dc55*/
  v77 = 0; /*0x56dc59*/
  if ( aP5 == (IUnknown *)(0xFFFF) ) /*0x56dc5e*/
    aP5 = (IUnknown *)(-1); /*0x56dc60*/
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
        LOWORD(v88) = v86 + v26; /*0x56dd44*/
        v27 = (int16_t)((unsigned short)v82 - v25); /*0x56dd49*/
        HIWORD(v88) = (unsigned short)v82 - v25; /*0x56dd4c*/
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
        v99[2] = (int)(aP8); /*0x56ddad*/
        v99[3] = (int)(aP9); /*0x56ddb9*/
        if ( (uint8_t)((Type *)((Type *)v17))->CheckAmbiguity((int)v30, 1) ) /*0x56ddc0*/
        {
          if ( ((MapClass *)(&v76))->CheckCellsBuildable(aP8, aP9, aP4, aP5, aP6, -1, aP7, aP10) ) /*0x56de0e*/
          {
            if ( !aP11 /*0x56de4c*/
              || (v31 = v84 - 4 * (((unsigned int)v30->Cell_field_0x140 >> 8) & 1) - v30->Cell_field_0x11B[0],
                  (int)((HIDWORD(v31) ^ v31) - HIDWORD(v31)) < 2) )
            {
              if ( (!aP12 || (uint8_t)Cell::IsBuildableAdvanced(v30)) /*0x56de9d*/
                && (aP13 || ((int)v30->Cell_field_0x140 & 0x100) == 0)
                && (!a17 || (uint8_t)((MapClass *)(v17))->IsAreaFree(v99, -1)) )
              {
                v32 = v87; /*0x56deaa*/
                v33 = v76; /*0x56deae*/
                v34 = v78; /*0x56deb2*/
                *v87 = v76; /*0x56deb6*/
                v87 = v32 + 1; /*0x56debb*/
                v78 = v34 + 1; /*0x56dec9*/
                if ( aP7 /*0x56df18*/
                  || (v94[0] = (v33 << 8) + 128,
                      v94[1] = (SHIWORD(v76) << 8) + 128,
                      v94[2] = 0,
                      v35 = ((Terrain *)(v101))->ClimbCheck(v94),
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
        HIWORD(v90) = (unsigned short)v82 + v25; /*0x56df5a*/
        LOWORD(v90) = v86 + v26; /*0x56df5f*/
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
        v98[3] = (int)(aP9);
        v98[0] = (int16_t)(v86 + v26); /*0x56dfc8*/
        v98[2] = (int)(aP8); /*0x56dfcf*/
        if ( (uint8_t)((Type *)((Type *)v17))->CheckAmbiguity((int)v39, 1) ) /*0x56dfd6*/
        {
          if ( ((MapClass *)(&v76))->CheckCellsBuildable(aP8, aP9, aP4, aP5, aP6, -1, aP7, aP10) ) /*0x56e024*/
          {
            if ( !aP11 /*0x56e062*/
              || (v40 = v84 - 4 * (((unsigned int)v39->Cell_field_0x140 >> 8) & 1) - v39->Cell_field_0x11B[0],
                  (int)((HIDWORD(v40) ^ v40) - HIDWORD(v40)) < 2) )
            {
              if ( (!aP12 || (uint8_t)Cell::IsBuildableAdvanced(v39)) /*0x56e0b3*/
                && (aP13 || ((int)v39->Cell_field_0x140 & 0x100) == 0)
                && (!a17 || (uint8_t)((MapClass *)(v17))->IsAreaFree(v98, -1)) )
              {
                v41 = v87; /*0x56e0c0*/
                v42 = v76; /*0x56e0c4*/
                v43 = v78; /*0x56e0c8*/
                *v87 = v76; /*0x56e0cc*/
                v87 = v41 + 1; /*0x56e0d1*/
                v78 = v43 + 1; /*0x56e0df*/
                if ( aP7 /*0x56e12f*/
                  || (v95[0] = (v42 << 8) + 128,
                      v95[1] = (SHIWORD(v76) << 8) + 128,
                      v95[2] = 0,
                      v44 = ((Terrain *)(v103))->ClimbCheck(v95),
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
        LOWORD(v85) = v86 - v79; /*0x56e19c*/
        HIWORD(v85) = v45 + (unsigned short)v82; /*0x56e1a1*/
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
        v100[2] = (int)(aP8); /*0x56e209*/
        v100[3] = (int)(aP9); /*0x56e210*/
        if ( (uint8_t)((Type *)((Type *)v17))->CheckAmbiguity((int)v49, 1) ) /*0x56e217*/
        {
          if ( ((MapClass *)(&v76))->CheckCellsBuildable(aP8, aP9, aP4, aP5, aP6, -1, aP7, aP10) ) /*0x56e265*/
          {
            if ( !aP11 /*0x56e2a5*/
              || (v50 = v84 - 4 * (((unsigned int)v49->Cell_field_0x140 >> 8) & 1) - v49->Cell_field_0x11B[0],
                  (int)((HIDWORD(v50) ^ v50) - HIDWORD(v50)) < 2) )
            {
              if ( (!aP12 || (uint8_t)Cell::IsBuildableAdvanced(v49)) /*0x56e2f6*/
                && (aP13 || ((int)v49->Cell_field_0x140 & 0x100) == 0)
                && (!a17 || (uint8_t)((MapClass *)(v17))->IsAreaFree(v100, -1)) )
              {
                v51 = v76; /*0x56e303*/
                v52 = v78; /*0x56e307*/
                *v46++ = v76; /*0x56e312*/
                v78 = v52 + 1; /*0x56e31b*/
                if ( aP7 /*0x56e371*/
                  || (v96[0] = (v51 << 8) + 128,
                      v96[1] = (SHIWORD(v76) << 8) + 128,
                      v96[2] = 0,
                      v53 = ((Terrain *)(v102))->ClimbCheck(v96),
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
        HIWORD(v80) = v45 + (unsigned short)v82; /*0x56e39c*/
        LOWORD(v80) = v79 + v86; /*0x56e3a6*/
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
        v97[2] = (int)(aP8); /*0x56e40b*/
        v97[3] = (int)(aP9); /*0x56e412*/
        if ( (uint8_t)((Type *)((Type *)v17))->CheckAmbiguity((int)v56, 1) ) /*0x56e419*/
        {
          if ( ((MapClass *)(&v76))->CheckCellsBuildable(aP8, aP9, aP4, aP5, aP6, -1, aP7, aP10) ) /*0x56e467*/
          {
            if ( !aP11 /*0x56e4a7*/
              || (v57 = v84 - 4 * (((unsigned int)v56->Cell_field_0x140 >> 8) & 1) - v56->Cell_field_0x11B[0],
                  (int)((HIDWORD(v57) ^ v57) - HIDWORD(v57)) < 2) )
            {
              if ( (!aP12 || (uint8_t)Cell::IsBuildableAdvanced(v56)) /*0x56e4f8*/
                && (aP13 || ((int)v56->Cell_field_0x140 & 0x100) == 0)
                && (!a17 || (uint8_t)((MapClass *)(v17))->IsAreaFree(v97, -1)) )
              {
                v58 = v76; /*0x56e501*/
                v59 = v78; /*0x56e505*/
                *v46++ = v76; /*0x56e510*/
                v78 = v59 + 1; /*0x56e519*/
                if ( aP7 /*0x56e566*/
                  || (v91 = (v58 << 8) + 128,
                      v92 = (SHIWORD(v76) << 8) + 128,
                      v93 = 0,
                      v60 = ((Terrain *)(&v89))->ClimbCheck(&v91),
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
    v85 = *((Terrain *)(&v89))->ClimbCheck(&v91); /*0x56e638*/
    if ( v85 == __PAIR32__(v64, v63) ) /*0x56e63c*/
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
      *(unsigned int *)aP2 = v105[*(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 416) % (int)v81]; /*0x56e6c6*/
    else
      *(unsigned int *)aP2 = v106[*(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 416) % (int)v82]; /*0x56e6e5*/
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
      v80 = v73 * v73 + (SHIWORD(v72) - aP14[1]) * (SHIWORD(v72) - aP14[1]); /*0x56e751*/
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
    *(unsigned char *)(*(&dword_A8022C->vtable1 + *(unsigned int *)(a2 + 48)) + 577) = 1; /*0x577db0*/
  if ( (Object *)a2 == (gamemd::Object *)(dword_A83D4C) ) /*0x577dbc*/
  {
    if ( a2 ) /*0x577dca*/
      goto LABEL_8; /*0x577dca*/
  }
  else if ( a2 ) /*0x577dc0*/
  {
    return result; /*0x577dc0*/
  }
  ((Debug *)this)->Log(); /*0x577dd1*/
LABEL_8:
  if ( *(unsigned int *)&dword_A8B238 != 3 && *(unsigned int *)&dword_A8B238 != 4 /*0x577df4*/
    || !dword_A8B23C
    || (v8 = 1, (*(uint8_t (**)(ObjectClass *))(dword_A8B23C->vtable1 + 4))(dword_A8B23C)) )
  {
    v8 = 0; /*0x577dff*/
  }
  result = (void *)(dword_A83D4C);
  if ( !dword_A83D4C->__pad_140[256] ) /*0x577e09*/
  {
    HouseClass::ResetObjectOrders(0, 0); /*0x577e1e*/
    dword_A83D4C->__pad_140[256] = 1; /*0x577e29*/
    dword_87F8F8 = dword_87F8DC; /*0x577e3a*/
    dword_87F8F4 = 1; /*0x577e42*/
    dword_87F8FC = dword_87F8DC - 1; /*0x577e4b*/
    dword_87F900 = (dword_87F8DC << 11) + dword_87F924 + 4; /*0x577e5a*/
    v4 = ((LayerClass *)((LayerClass *)&dword_87F7E8))->CellIteratorNext(); /*0x577e60*/
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
        if ( v6 != *((unsigned int *)this + 61) + 5 ) /*0x577e8e*/
          goto LABEL_21; /*0x577e8e*/
LABEL_24:
        v4 = ((LayerClass *)((LayerClass *)&dword_87F7E8))->CellIteratorNext(); /*0x577ee9*/
        if ( !v4 ) /*0x577ef5*/
          goto LABEL_25; /*0x577ef5*/
      }
      if ( v5 == 13 && v6 == *((unsigned int *)this + 61) + 11 ) /*0x577ea2*/
        goto LABEL_24; /*0x577ea2*/
LABEL_21:
      v7 = *((unsigned int *)this + 62); /*0x577ea4*/
      if ( v5 == v7 + 13 && v6 == *((unsigned int *)this + 61) + v7 - 15 ) /*0x577ebd*/
        goto LABEL_24; /*0x577ebd*/
LABEL_23:
      *(unsigned int *)(v4 + 304) = 0; /*0x577ebf*/
      *(unsigned int *)(v4 + 308) = 0; /*0x577ec5*/
      *(unsigned int *)(v4 + 300) |= 0x18u; /*0x577ed4*/
      *(unsigned int *)(v4 + 320) |= 3u; /*0x577ee3*/
      goto LABEL_24; /*0x577ee3*/
    }
LABEL_25:
    ((Radar *)(0))->UpdateReveal(0); /*0x577efc*/
    ((FogOfWar *)((FogOfWar *)&dword_87F7E8))->Render(); /*0x577f0d*/
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

  v1 = *((unsigned int *)this + 69); /*0x578290*/
  v2 = (int *)*((unsigned int *)this + 70); /*0x578297*/
  if ( v1 ) /*0x5782a0*/
  {
    v3 = *((unsigned int *)this + 68) - 1; /*0x5782af*/
    ++*((unsigned int *)this + 67); /*0x5782b1*/
    *((unsigned int *)this + 69) = v1 - 1; /*0x5782b7*/
    *((unsigned int *)this + 68) = v3; /*0x5782c3*/
    *((unsigned int *)this + 70) = v2 - 511; /*0x5782c9*/
    return *v2; /*0x5782cf*/
  }
  else
  {
    v5 = *((unsigned int *)this + 68); /*0x5782d5*/
    v6 = *((unsigned int *)this + 67); /*0x5782db*/
    v7 = *((unsigned int *)this + 61); /*0x5782e1*/
    *((unsigned int *)this + 67) = v5; /*0x5782e8*/
    *((unsigned int *)this + 68) = v6; /*0x5782f2*/
    if ( (((unsigned char)v5 - (unsigned char)v7 + (unsigned char)v6 - 1) & 1) != 0 ) /*0x5782ff*/
    {
      v8 = v7 - 1; /*0x578302*/
      *((unsigned int *)this + 68) = v6 + 1; /*0x578303*/
    }
    else
    {
      v8 = v7 - 2; /*0x57830c*/
      *((unsigned int *)this + 67) = v5 + 1; /*0x57830f*/
    }
    v9 = *((unsigned int *)this + 67); /*0x57831b*/
    v10 = *((unsigned int *)this + 68) << 9; /*0x578321*/
    *((unsigned int *)this + 69) = v8; /*0x578324*/
    *((unsigned int *)this + 70) = *((unsigned int *)this + 79) + 4 * (v9 + v10); /*0x578337*/
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

  v1 = *((unsigned int *)this + 61); /*0x578350*/
  *((unsigned int *)this + 67) = 1; /*0x578356*/
  *((unsigned int *)this + 68) = v1; /*0x578360*/
  *((unsigned int *)this + 69) = v1 - 1; /*0x578369*/
  result = (v1 << 11) + *((unsigned int *)this + 79) + 4; /*0x578378*/
  *((unsigned int *)this + 70) = result; /*0x57837c*/
  return result; /*0x578382*/

}
}
// 0x578460
namespace gamemd {
int LayerClass::IsWithinUsableArea(int16_t *aP1, char aP2)
{

  int v3; // esi
  int v4; // edx
  int v5; // edi
  unsigned int v6; // eax
  int *v7; // eax
  int result; // eax
  int v9; // esi

  v3 = 0; /*0x57846b*/
  v4 = (int)(aP1[1]); /*0x57846d*/
  v5 = (int)(*aP1); /*0x578472*/
  if ( aP2 ) /*0x578477*/
  {
    v6 = v5 + (v4 << 9); /*0x57847e*/
    if ( v6 >= 0x40000 || (v7 = *(int **)(*(unsigned int *)&stru_87F5F0.__pad_58[732] + 4 * v6)) == 0 ) /*0x578494*/
    {
      g_MissionQueueFrame.briefing[139] = *(unsigned int *)aP1; /*0x578498*/
      v7 = &g_MissionQueueFrame.briefing[130]; /*0x57849d*/
    }
    v3 = *((char *)v7 + 283); /*0x5784a8*/
    if ( *((unsigned char *)v7 + 284) && v4 + v5 < v3 + *((unsigned int *)this + 61) + 2 * *((unsigned int *)this + 64) + 4 ) /*0x5784ca*/
      ++v3; /*0x5784cc*/
  }
  result = *((unsigned int *)this + 61); /*0x5784d3*/
  LOBYTE(result) = v4 + v5 > v3 + result + 2 * *((unsigned int *)this + 64) /*0x578531*/
                && v4 + v5 <= v3 + result + 2 * (*((unsigned int *)this + 64) + *((unsigned int *)this + 66)) + 2
                && (v9 = *((unsigned int *)this + 63), v5 - v4 < 2 * (v9 + *((unsigned int *)this + 65)) - result)
                && (result -= 2 * v9, v4 - v5 < result);
  return result; /*0x578525*/

}
}
// 0x581140
namespace gamemd {
void* LayerClass::DestroyCliff(int * a1, int a2, int a3)
{

  int result; // eax
  int *v4; // ecx
  int v5; // ebp
  int v6; // edx
  int16_t v7; // di
  unsigned char *v8; // esi
  int v9; // edx
  int *v10; // eax
  int v11; // edx
  int v12; // eax
  int *v13; // edi
  unsigned int *v14; // ebx
  int v15; // eax
  int v16; // esi
  unsigned int v17; // eax
  unsigned int *v18; // eax
  int i; // ebp
  int v20; // eax
  int v21; // esi
  int j; // ebp
  int v23; // eax
  int v24; // esi
  unsigned int v25; // eax
  unsigned int *v26; // eax
  unsigned int v27; // eax
  unsigned int *v28; // eax
  unsigned int v29; // eax
  unsigned int *v30; // eax
  int v31; // ebx
  int v32; // eax
  int v33; // eax
  void **v34; // ebp
  int v35; // edi
  int v36; // eax
  int v37; // edx
  unsigned int v38; // esi
  unsigned int *v39; // esi
  int v40; // esi
  void *v41; // eax
  int *v42; // ecx
  int16_t v43; // di
  int v44; // edx
  unsigned char *v45; // esi
  int v46; // edx
  int *v47; // eax
  int v48; // edx
  int *v49; // eax
  i... [21605 chars total]
}
} // namespace gamemd
