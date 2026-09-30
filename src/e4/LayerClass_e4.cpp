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

// 0x568300
namespace gamemd {
int LayerClass::CoordinatesLegal( IUnknown * aP1)
{

  int v2; // edx
  int v3; // esi
  int v4; // eax

  v2 = *(this + 61); /*0x568304*/
  v3 = SLOWORD(aP1->field_0); /*0x56830c*/
  v4 = SHIWORD(aP1->field_0); /*0x56830f*/
  return v4 + v3 > v2 && v3 - v4 < v2 && v4 - v3 < v2 && v4 + v3 <= v2 + 2 * *(this + 62); /*0x568337*/

}
}
// 0x56DC20
namespace gamemd {
int LayerClass::Pathfinding_Find(IUnknown * aP0, IUnknown * aP1, IUnknown * aP2, IUnknown * aP3, IUnknown * aP4, IUnknown * aP5, IUnknown * aP6, IUnknown * aP7, IUnknown * aP8, IUnknown * aP9, IUnknown * aP10, IUnknown * aP11, IUnknown * aP12, IUnknown * aP13, IUnknown * aP14, MouseClass * aP15, char a17)
{

  IUnknown *v17; // ebx
  Tactical *v18; // edx
  IUnknown *v19; // eax
  unsigned int v20; // eax
  unsigned int v21;
  unsigned int v22; // eax
  unsigned int *v23; // eax
  int v24; // eax
  int v25; // ebp
  int v26; // edi
  int v27; // ecx
  unsigned int v28; // eax
  ObjectClass *v29; // eax
  ObjectClass *v30; // esi
  int64_t v31; // rax
  char *v32; // ecx
  int16_t v33; // ax
  int v34; // esi
  TagClass **v35; // eax
  TagClass *v36; // ecx
  unsigned int v37; // eax
  ObjectClass *v38; // eax
  ObjectClass *v39; // esi
  int64_t v40; // rax
  char *v41; // ecx
  int16_t v42; // ax
  int v43; // esi
  TagClass **v44; // eax
  int v45; // edi
  char *v46; // ebp
  unsigned int v47; // eax
  ObjectClass *v48; // eax
  ObjectClass *v49; // esi
  int64_t v50; // rax
  int16_t v51; // ax
  int v52; // esi
  TagClass **v53; // eax
  unsigned int v54; // eax
  ObjectClass *v55; // eax
  ObjectClass *v56; // esi
  int64_t v57; // rax
  int16_t v58; // ax
  int v59; // esi
  TagClass **v60; // eax
  unsigned int *v61; // ebx
  char *v62; // esi
  uint16_t v63; // di
  uint16_t v64; // bp
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
  unsigned int v95[24]; // [esp+134h] [ebp-C0h] BYREF
  unsigned int v96[24]; // [esp+194h] [ebp-60h] BYREF

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
  v20 = (unsigned int)v18 + 512 * (unsigned int)v19; /*0x56dc6e*/
  if ( v20 >= 0x40000 || (v21 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v20)) == 0 ) /*0x56dc84*/
  {
    g_Map_GlobalCellIndex = (unsigned int *)((IUnknown *)aP3->field_0);
    v21 = g_CellClassArray; /*0x56dc8d*/
  }
  v83 = *((char *)v21 + 283); /*0x56dc99*/
  if ( (unsigned char)aP7 ) /*0x56dca6*/
  {
    v22 = SLOWORD(aP3->field_0) + (SHIWORD(aP3->field_0) << 9); /*0x56dcb2*/
    if ( v22 >= 0x40000 || (v23 = *(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v22)) == 0 ) /*0x56dcc2*/
    {
      v23 = (unsigned int *)(g_CellClassArray);
      g_Map_GlobalCellIndex = (IUnknown *)aP3->field_0; /*0x56dccb*/
    }
    if ( (v23[80] & 0x100) != 0 ) /*0x56dcda*/
      v83 += 4; /*0x56dcdc*/
  }
  v24 = aP0->field_F8 + *(unsigned int *)&aP0->__pad_EC[8]; /*0x56dced*/
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
        if ( (unsigned char)aP15 ) /*0x56dd31*/
          goto LABEL_36; /*0x56dd31*/
        IDA_LOWORD(v87) = (unsigned short)v85 + v26; /*0x56dd44*/
        v27 = (int16_t)((unsigned short)v81 - v25); /*0x56dd49*/
        IDA_HIWORD(v87) = (unsigned short)v81 - v25; /*0x56dd4c*/
        v75 = v87; /*0x56dd5a*/
        v28 = (int16_t)((unsigned short)v85 + v26) + (v27 << 9); /*0x56dd61*/
        if ( v28 < 0x40000 ) /*0x56dd63*/
        {
          v29 = *(ObjectClass **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v28); /*0x56dd72*/
          if ( v29 ) /*0x56dd78*/
          {
            v25 = v78; /*0x56dd7a*/
            v30 = v29; /*0x56dd7e*/
            goto LABEL_23; /*0x56dd80*/
          }
          v25 = v78; /*0x56dd82*/
        }
        g_Map_GlobalCellIndex = (int)((IUnknown *)v87);
        v30 = (ObjectClass *)g_CellClassArray; /*0x56dd8c*/
LABEL_23:
        v92[1] = v27; /*0x56dd91*/
        v92[0] = (int16_t)((unsigned short)v85 + v26); /*0x56dd9f*/
        v92[2] = (int)aP8; /*0x56ddad*/
        v92[3] = (int)aP9; /*0x56ddb9*/
        if ( Type::CheckAmbiguity(v17, (int)v30, 1) ) /*0x56ddc0*/
        {
          if ( ((MapClass *)((IUnknown *)&v75))->CheckCellsBuildable(aP8, aP9, aP4, aP5, aP6, -1, aP7, aP10) ) /*0x56de0e*/
          {
            if ( !(unsigned char)aP11 /*0x56de4c*/
              || (v31 = v83 - 4 * (((unsigned int)v30[1].lastLayer >> 8) & 1) - SHIBYTE(v30[1].health),
                  (int)((IDA_HIDWORD(v31) ^ v31) - IDA_HIDWORD(v31)) < 2) )
            {
              if ( (!(unsigned char)aP12 || Cell::IsBuildableAdvanced((int)v30)) /*0x56de9d*/
                && ((unsigned char)aP13 || (v30[1].lastLayer & 0x100) == 0)
                && (!a17 || MapClass::IsAreaFree(v17, v92, -1)) )
              {
                v32 = (char *)((unsigned int)(v86));
                v33 = (unsigned int)((int16_t)v75);
                v34 = (unsigned int)(v77);
                *(unsigned int *)v86 = v75; /*0x56deb6*/
                v86 = v32 + 4; /*0x56debb*/
                v77 = v34 + 1; /*0x56dec9*/
                if ( (unsigned char)aP7 /*0x56df18*/
                  || (aP1a.nextArrayIndex = (v33 << 8) + 128,
                      aP1a.referenceCount = (SHIWORD(v75) << 8) + 128,
                      aP1a.NeedsSaveOrLink = 0,
                      v35 = (TagClass **)((Terrain *)(&aP0a))->ClimbCheck((AbstractClass *)&aP1a.nextArrayIndex),
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
        if ( (unsigned char)aP15 && v26 <= -v25 ) /*0x56df46*/
          goto LABEL_57; /*0x56df46*/
        *(unsigned short *)&((unsigned int *)(aP1a.__pad_0))[10] = (unsigned short)v81 + v25; /*0x56df5a*/
        *(unsigned short *)&((unsigned int *)(aP1a.__pad_0))[8] = (unsigned short)v85 + v26; /*0x56df5f*/
        v36 = (TagClass *)(int16_t)((unsigned short)v81 + v25); /*0x56df68*/
        v75 = *(TagClass **)&((unsigned int *)(aP1a.__pad_0))[8]; /*0x56df70*/
        v37 = (int16_t)((unsigned short)v85 + v26) + ((unsigned int)v36 << 9); /*0x56df77*/
        if ( v37 < 0x40000 ) /*0x56df79*/
        {
          v38 = *(ObjectClass **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v37); /*0x56df88*/
          if ( v38 ) /*0x56df8e*/
          {
            v25 = v78; /*0x56df90*/
            v39 = v38; /*0x56df94*/
            goto LABEL_44; /*0x56df96*/
          }
          v25 = v78; /*0x56df98*/
        }
        g_Map_GlobalCellIndex = (int)(*(IUnknown **)&((unsigned int *)(aP1a.__pad_0))[8]);
        v39 = (ObjectClass *)g_CellClassArray; /*0x56dfa2*/
LABEL_44:
        v91[1] = (int)v36; /*0x56dfa7*/
        v91[3] = (int)aP9; /*0x56dfbe*/
        v91[0] = (int16_t)((unsigned short)v85 + v26); /*0x56dfc8*/
        v91[2] = (int)aP8; /*0x56dfcf*/
        if ( Type::CheckAmbiguity(v17, (int)v39, 1) ) /*0x56dfd6*/
        {
          if ( ((MapClass *)((IUnknown *)&v75))->CheckCellsBuildable(aP8, aP9, aP4, aP5, aP6, -1, aP7, aP10) ) /*0x56e024*/
          {
            if ( !(unsigned char)aP11 /*0x56e062*/
              || (v40 = v83 - 4 * (((unsigned int)v39[1].lastLayer >> 8) & 1) - SHIBYTE(v39[1].health),
                  (int)((IDA_HIDWORD(v40) ^ v40) - IDA_HIDWORD(v40)) < 2) )
            {
              if ( (!(unsigned char)aP12 || Cell::IsBuildableAdvanced((int)v39)) /*0x56e0b3*/
                && ((unsigned char)aP13 || (v39[1].lastLayer & 0x100) == 0)
                && (!a17 || MapClass::IsAreaFree(v17, v91, -1)) )
              {
                v41 = (char *)((unsigned int)(v86));
                v42 = (unsigned int)((int16_t)v75);
                v43 = (unsigned int)(v77);
                *(unsigned int *)v86 = v75; /*0x56e0cc*/
                v86 = v41 + 4; /*0x56e0d1*/
                v77 = v43 + 1; /*0x56e0df*/
                if ( (unsigned char)aP7 /*0x56e12f*/
                  || (*(unsigned int *)v89.__pad_0 = (v42 << 8) + 128,
                      *(unsigned int *)&((unsigned int *)(v89.__pad_0))[4] = (SHIWORD(v75) << 8) + 128,
                      *(unsigned int *)&((unsigned int *)(v89.__pad_0))[8] = 0,
                      v44 = (TagClass **)((Terrain *)((AbstractClass *)&((unsigned int *)(aP0a.__pad_0))[8]))->ClimbCheck(&v89),
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
        if ( (unsigned char)aP15 ) /*0x56e186*/
          goto LABEL_80; /*0x56e186*/
        IDA_LOWORD(v84) = (unsigned short)v85 - v78; /*0x56e19c*/
        IDA_HIWORD(v84) = v45 + (unsigned short)v81; /*0x56e1a1*/
        v75 = v84; /*0x56e1b2*/
        v47 = (int16_t)((unsigned short)v85 - v78) + ((int16_t)(v45 + (unsigned short)v81) << 9); /*0x56e1b9*/
        if ( v47 < 0x40000 ) /*0x56e1bb*/
        {
          v48 = *(ObjectClass **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v47); /*0x56e1ca*/
          if ( v48 ) /*0x56e1cf*/
          {
            v17 = v80; /*0x56e1d1*/
            v49 = v48; /*0x56e1d5*/
            goto LABEL_67; /*0x56e1d7*/
          }
          v17 = v80; /*0x56e1d9*/
        }
        g_Map_GlobalCellIndex = (int)((IUnknown *)v84);
        v49 = (ObjectClass *)g_CellClassArray; /*0x56e1e3*/
LABEL_67:
        v93[0] = (int16_t)((unsigned short)v85 - v78); /*0x56e1e8*/
        v93[1] = (int16_t)(v45 + (unsigned short)v81); /*0x56e1fd*/
        v93[2] = (int)aP8; /*0x56e209*/
        v93[3] = (int)aP9; /*0x56e210*/
        if ( Type::CheckAmbiguity(v17, (int)v49, 1) ) /*0x56e217*/
        {
          if ( ((MapClass *)((IUnknown *)&v75))->CheckCellsBuildable(aP8, aP9, aP4, aP5, aP6, -1, aP7, aP10) ) /*0x56e265*/
          {
            if ( !(unsigned char)aP11 /*0x56e2a5*/
              || (v50 = v83 - 4 * (((unsigned int)v49[1].lastLayer >> 8) & 1) - SHIBYTE(v49[1].health),
                  (int)((IDA_HIDWORD(v50) ^ v50) - IDA_HIDWORD(v50)) < 2) )
            {
              if ( (!(unsigned char)aP12 || Cell::IsBuildableAdvanced((int)v49)) /*0x56e2f6*/
                && ((unsigned char)aP13 || (v49[1].lastLayer & 0x100) == 0)
                && (!a17 || MapClass::IsAreaFree(v17, v93, -1)) )
              {
                v51 = (unsigned int)((int16_t)v75);
                v52 = (unsigned int)(v77);
                *(unsigned int *)v46 = v75; /*0x56e312*/
                v46 += 4; /*0x56e316*/
                v77 = v52 + 1; /*0x56e31b*/
                if ( (unsigned char)aP7 /*0x56e371*/
                  || (*(unsigned int *)&((unsigned int *)(v89.__pad_0))[12] = (v51 << 8) + 128,
                      v89.uniqueId = (SHIWORD(v75) << 8) + 128,
                      v89.abstractFlags = 0,
                      v53 = (TagClass **)Terrain::ClimbCheck(
                                           (AbstractClass *)&((unsigned int *)(aP0a.__pad_0))[4],
                                           (AbstractClass *)&((unsigned int *)(v89.__pad_0))[12]),
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
        IDA_HIWORD(v79) = v45 + (unsigned short)v81; /*0x56e39c*/
        IDA_LOWORD(v79) = v78 + (unsigned short)v85; /*0x56e3a6*/
        v75 = v79; /*0x56e3b4*/
        v54 = (int16_t)(v78 + (unsigned short)v85) + ((int16_t)(v45 + (unsigned short)v81) << 9); /*0x56e3bb*/
        if ( v54 < 0x40000 ) /*0x56e3bd*/
        {
          v55 = *(ObjectClass **)(*(unsigned int *)&stru_87C374.__pad_14B0[8448] + 4 * v54); /*0x56e3cc*/
          if ( v55 ) /*0x56e3d1*/
          {
            v17 = v80; /*0x56e3d3*/
            v56 = v55; /*0x56e3d7*/
            goto LABEL_86; /*0x56e3d9*/
          }
          v17 = v80; /*0x56e3db*/
        }
        g_Map_GlobalCellIndex = (int)((IUnknown *)v79);
        v56 = (gamemd::ObjectClass *)((unsigned int)((ObjectClass *)g_CellClassArray));
LABEL_86: v89.nextArrayIndex = (unsigned int)((int16_t)(v78 + (unsigned short)v85));
        v89.referenceCount = (unsigned int)((int16_t)(v45 + (unsigned short)v81));
        v89.NeedsSaveOrLink = (unsigned int)(aP8);
        v90 = aP9; /*0x56e412*/
        if ( Type::CheckAmbiguity(v17, (int)v56, 1) ) /*0x56e419*/
        {
          if ( ((MapClass *)((IUnknown *)&v75))->CheckCellsBuildable(aP8, aP9, aP4, aP5, aP6, -1, aP7, aP10) ) /*0x56e467*/
          {
            if ( !(unsigned char)aP11 /*0x56e4a7*/
              || (v57 = v83 - 4 * (((unsigned int)v56[1].lastLayer >> 8) & 1) - SHIBYTE(v56[1].health),
                  (int)((IDA_HIDWORD(v57) ^ v57) - IDA_HIDWORD(v57)) < 2) )
            {
              if ( (!(unsigned char)aP12 || Cell::IsBuildableAdvanced((int)v56)) /*0x56e4f8*/
                && ((unsigned char)aP13 || (v56[1].lastLayer & 0x100) == 0)
                && (!a17 || MapClass::IsAreaFree(v17, &v89.nextArrayIndex, -1)) )
              {
                v58 = (unsigned int)((int16_t)v75);
                v59 = (unsigned int)(v77);
                *(unsigned int *)v46 = v75; /*0x56e510*/
                v46 += 4; /*0x56e514*/
                v77 = v59 + 1; /*0x56e519*/
                if ( (unsigned char)aP7 /*0x56e566*/
                  || (*(unsigned int *)&((unsigned int *)(aP1a.__pad_0))[12] = (v58 << 8) + 128,
                      aP1a.uniqueId = (SHIWORD(v75) << 8) + 128,
                      aP1a.abstractFlags = 0,
                      v60 = (TagClass **)((Terrain *)(&aP1a))->ClimbCheck((AbstractClass *)&((unsigned int *)(aP1a.__pad_0))[12]),
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
  v80 = (IUnknown *)((char *)(0));
  v81 = (IUnknown *)((char *)(0));
  v61 = (unsigned int *)((char *)(v96));
  v62 = (char *)(&((unsigned int *)(aP0a.__pad_0))[12]);
  i = (Tactical *)v95; /*0x56e5e8*/
  v79 = (TagClass *)v77; /*0x56e5ec*/
  do /*0x56e67b*/
  {
    v63 = *(unsigned short *)v62; /*0x56e5f0*/
    v64 = *((unsigned short *)v62 + 1); /*0x56e5f3*/
    *(unsigned int *)&((unsigned int *)(aP1a.__pad_0))[12] = (*(int16_t *)v62 << 8) + 128; /*0x56e60a*/
    aP1a.uniqueId = ((int16_t)v64 << 8) + 128; /*0x56e622*/
    aP1a.abstractFlags = 0; /*0x56e626*/
    v84 = (TagClass *)*((Terrain *)(&aP1a))->ClimbCheck((AbstractClass *)&((unsigned int *)(aP1a.__pad_0))[12]); /*0x56e638*/
    if ( v84 == (TagClass *)__PAIR32__(v64, v63) ) /*0x56e63c*/
    {
      v65 = (TagClass *)i; /*0x56e645*/
      v66 = v80; /*0x56e64b*/
      *(unsigned int *)i->__pad_0 = *(unsigned int *)v62; /*0x56e64f*/
      v80 = (IUnknown *)((char *)&v66->field_0 + 1); /*0x56e655*/
      i = (Tactical *)&v65->__pad_0[4]; /*0x56e659*/
    }
    else
    {
      v67 = (IUnknown *)((char *)&v81->field_0 + 1); /*0x56e665*/
      *v61 = *(unsigned int *)v62; /*0x56e666*/
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
      aP2->field_0 = v95[*(unsigned int *)&HouseClass_Player.__pad_5568[23248] % (int)v80]; /*0x56e6c6*/
    else
      aP2->field_0 = v96[*(unsigned int *)&HouseClass_Player.__pad_5568[23248] % (int)v81]; /*0x56e6e5*/
    return &aP2->field_0; /*0x56e6b4*/
  }
  else
  {
    v69 = v80; /*0x56e6f2*/
    if ( !v80 ) /*0x56e6f4*/
      v69 = v81; /*0x56e6f6*/
    v70 = 0; /*0x56e6f8*/
    *(unsigned int *)aP1a.__pad_0 = 0; /*0x56e6fa*/
    *(unsigned int *)&((unsigned int *)(aP1a.__pad_0))[4] = 1090021888; /*0x56e704*/
    for ( i = (Tactical *)g_MapSeedState; v70 < (int)v69; ++v70 ) /*0x56e710*/
    {
      v71 = (TagClass **)&v95[v70]; /*0x56e718*/
      if ( !v80 ) /*0x56e71f*/
        v71 = (TagClass **)&v96[v70]; /*0x56e721*/
      v72 = *v71; /*0x56e728*/
      v73 = (BuildingTypeClass *)((int16_t)*v71 - SLOWORD(aP14->field_0)); /*0x56e73c*/
      v79 = (TagClass *)((unsigned int)v73 * (unsigned int)v73 /*0x56e751*/
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
    *(unsigned char *)(*(unsigned int *)&HouseClass_Array->__pad_0[4 * *(unsigned int *)(a2 + 48)] + 577) = 1; /*0x577db0*/
  if ( (void *)a2 == (void *)(void *))(HouseClass_Player) ) /*0x577dbc*/
  {
    if ( a2 ) /*0x577dca*/
      goto LABEL_8; /*0x577dca*/
  }
  else if ( a2 ) /*0x577dc0*/
  {
    return result; /*0x577dc0*/
  }
  this->this->this->Debug::Log(); /*0x577dd1*/
LABEL_8:
  if ( g_abs_A8B238[0] != 3 && g_abs_A8B238[0] != 4 /*0x577df4*/
    || !g_abs_A8B23C
    || (v8 = 1, (*(uint8_t (**)(int))(*(unsigned int *)g_abs_A8B23C + 4))(g_abs_A8B23C)) )
  {
    v8 = 0; /*0x577dff*/
  }
  result = (void *)(HouseClass_Player);
  if ( !*((unsigned char *)HouseClass_Player + 576) ) /*0x577e09*/
  {
    HouseClass::ResetObjectOrders(0, 0); /*0x577e1e*/
    *((unsigned char *)HouseClass_Player + 576) = 1; /*0x577e29*/
    g_abs_87F8F8 = g_abs_87F8DC; /*0x577e3a*/
    g_abs_87F8F4 = 1; /*0x577e42*/
    g_abs_87F8FC = g_abs_87F8DC - 1; /*0x577e4b*/
    g_abs_87F900 = (g_abs_87F8DC << 11) + g_abs_87F924 + 4; /*0x577e5a*/
    v4 = LayerClass::CellIteratorNext(&g_abs_87F7E8); /*0x577e60*/
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
        v4 = LayerClass::CellIteratorNext(&g_abs_87F7E8); /*0x577ee9*/
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
    Radar::UpdateReveal(0, 0); /*0x577efc*/
    FogOfWar::Render((int **)&g_abs_87F7E8); /*0x577f0d*/
    return (void *)MapClass::MarkForRedraw(&g_abs_87F7E8, 2); /*0x577f19*/
  }
  return result; /*0x577f1e*/

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

  v1 = *((unsigned int *)this + 69); /*0x578290*/
  v2 = *((unsigned int *)this + 70); /*0x578297*/
  if ( v1 ) /*0x5782a0*/
  {
    v3 = *((unsigned int *)this + 68) - 1; /*0x5782af*/
    ++*((unsigned int *)this + 67); /*0x5782b1*/
    *((unsigned int *)this + 69) = v1 - 1; /*0x5782b7*/
    *((unsigned int *)this + 68) = v3; /*0x5782c3*/
    *((unsigned int *)this + 70) = v2 - 2044; /*0x5782c9*/
    return *(unsigned int *)v2; /*0x5782cf*/
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
int LayerClass::IsWithinUsableArea(IUnknown * aP1, TechnoClass * aP2)
{

  int v3; // esi
  int v4; // edx
  int v5; // edi
  unsigned int v6; // eax
  unsigned int *v7; // eax
  int v8; // eax
  int v9; // esi
  bool result; // al

  v3 = 0; /*0x57846b*/
  v4 = SHIWORD(aP1->field_0); /*0x57846d*/
  v5 = SLOWORD(aP1->field_0); /*0x578472*/
  if ( (unsigned char)aP2 ) /*0x578477*/
  {
    v6 = v5 + (v4 << 9); /*0x57847e*/
    if ( v6 >= 0x40000 || (v7 = *(unsigned int **)(*(unsigned int *)&g_abs_87F8E4 + 4 * v6)) == 0 ) /*0x578494*/
    {
      g_Map_GlobalCellIndex = (IUnknown *)aP1->field_0; /*0x578498*/
      v7 = g_CellClassArray; /*0x57849d*/
    }
    v3 = *((char *)v7 + 283); /*0x5784a8*/
    if ( *((unsigned char *)v7 + 284) && v4 + v5 < v3 + *((unsigned int *)this + 61) + 2 * *((unsigned int *)this + 64) + 4 ) /*0x5784ca*/
      ++v3; /*0x5784cc*/
  }
  v8 = *((unsigned int *)this + 61); /*0x5784d3*/
  result = 0; /*0x578531*/
  if ( v4 + v5 > v3 + v8 + 2 * *((unsigned int *)this + 64) && v4 + v5 <= v3 + v8 + 2 * (*((unsigned int *)this + 64) + *((unsigned int *)this + 66)) + 2 ) /*0x5784fe*/
  {
    v9 = *((unsigned int *)this + 63); /*0x578500*/
    if ( v5 - v4 < 2 * (v9 + *((unsigned int *)this + 65)) - v8 && v4 - v5 < v8 - 2 * v9 ) /*0x578523*/
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
  int v50; // edx
  int *v51; // ebx
  unsigned int *v52; // ebp
  int k; // edi
  int v54; // eax
  int v55; // esi
  int v56; // eax
  int v57; // ecx
  unsigned int v58; // eax
  unsigned int *v59; // eax
  int m; // edi
  int v61; // eax
  int v62; // esi
  int v63; // eax
  int v64; // ecx
  int n; // edi
  int v66; // eax
  int v67; // esi
  unsigned int v68; // eax
  unsigned int *v69; // eax
  unsigned int v70; // eax
  unsigned int *v71; // eax
  int v72; // esi
  int v73; // eax
  bool v74; // sf
  int v75; // eax
  unsigned int *v76; // eax
  int v77; // edx
  int v78; // ebx
  int v79; // eax
  int v80; // eax
  void **v81; // ebp
  int v82; // edi
  int v83; // eax
  int v84; // edx
  unsigned int v85; // esi
  unsigned int *v86; // esi
  int v87; // esi
  void *v88; // eax
  int v89; // [esp+28h] [ebp-44h]
  int v90; // [esp+28h] [ebp-44h]
  int v91; // [esp+28h] [ebp-44h]
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
    v4 = (int *)*((unsigned int *)g_abs_A8ED2C + dword_ABC2C8);
    v5 = 0;
    v6 = *v4;
    v7 = *(unsigned short *)(a3 + 36) - *(uint8_t *)(a3 + 282) % 6;
    IDA_HIWORD(v99) = *(uint8_t *)(a3 + 282) / -6 + *(unsigned short *)(a3 + 38);
    IDA_LOWORD(v99) = v7;
    v8 = (unsigned char *)(*(int (**)(int *, unsigned int))(v6 + 140))(v4, 0);
    v89 = v7;
    v95 = (v7 << 8) + 128;
    v104 = v95;
    v93 = SHIWORD(v99);
    v106 = 0;
    v96 = (SHIWORD(v99) << 8) + 128;
    v105 = v96;
    (*(void (**)(unsigned char *, int *))(*(unsigned int *)v8 + 436))(v8, &v104);
    v9 = *(unsigned int *)v8;
    v8[129] = 0;
    v8[116] = 1;
    (*(void (**)(unsigned char *, unsigned int))(v9 + 292))(v8, 0);
    if ( v8 )
      (*(void (**)(unsigned char *, int))(*(unsigned int *)v8 + 32))(v8, 1);
    v10 = (int *)(*(int (**)(unsigned int, unsigned int))(**((unsigned int **)g_abs_A8ED2C + g_TerrainTypeTable2) + 140))(
                   *((unsigned int *)g_abs_A8ED2C + g_TerrainTypeTable2),
                   0);
    v104 = v95;
    v105 = v96;
    v11 = *v10;
    v106 = 0;
    (*(void (**)(int *, int *, unsigned int))(v11 + 216))(v10, &v104, 0);
    v12 = (*(int (**)(unsigned int, unsigned int))(**((unsigned int **)g_abs_A8ED2C + g_TerrainTypeTable2 + 1) + 140))(
            *((unsigned int *)g_abs_A8ED2C + g_TerrainTypeTable2 + 1),
            0);
    v106 = 0;
    v105 = (v93 << 8) + 128;
    v104 = ((int16_t)(v99 + 3) << 8) + 128;
    (*(void (**)(int, int *, unsigned int))(*(unsigned int *)v12 + 216))(v12, &v104, 0);
    v13 = v94;
    Terrain::ConnectivityGraph(v94);
    v14 = (unsigned int *)*((unsigned int *)g_abs_A8ED2C + dword_ABC2C8);
    v92 = (*(int (**)(unsigned int *))(*v14 + 156))(v14);
    if ( (int)v14[186] > 0 )
    {
      do
      {
        v15 = v14[185];
        v16 = 0;
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
              v17 = (int16_t)a3 + (SHIWORD(a3) << 9);
              if ( v17 >= 0x40000 || (v18 = *(unsigned int **)(g_abs_87F924 + 4 * v17)) == 0 )
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
      v20 = v14[185];
      v21 = 0;
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
      v23 = v14[185];
      v24 = 0;
      if ( v23 > 0 )
      {
        IDA_HIWORD(v94) = j + IDA_HIWORD(v99);
        do
        {
          IDA_LOWORD(v94) = v24 + v99;
          a3 = (int)v94;
          if ( *(unsigned int *)(v92 + 4 * (v24 + j * v23) + 16) && LayerClass::IsWithinUsableArea(v13, (int16_t *)&a3, 1) )
          {
            v25 = (int16_t)a3 + (SHIWORD(a3) << 9);
            if ( v25 >= 0x40000 || (v26 = *(unsigned int **)(g_abs_87F924 + 4 * v25)) == 0 )
            {
              g_Map_GlobalCellIndex = a3;
              v26 = g_CellClassArray;
            }
            AbstractClass::ClearTargetToMeClearManagerTarget(v26);
            BuildingClass::AddUpgrade((int)&g_abs_87F7E8, (int)&a3);
          }
          v23 = v14[185];
          ++v24;
        }
        while ( v24 < v23 );
      }
    }
    v27 = (v93 << 9) + v89;
    a3 = v27;
    if ( v27 >= 0x40000 || (v28 = *(unsigned int **)(g_abs_87F924 + 4 * v27)) == 0 )
    {
      v28 = g_CellClassArray;
      g_Map_GlobalCellIndex = v99;
    }
    v106 = g_MapRenderState * *((char *)v28 + 283);
    v104 = v95;
    v105 = v96;
    Coord::To_Screen(g_abs_887324, &v104, &v100);
    IDA_LOWORD(a3) = v99 + 5;
    IDA_HIWORD(a3) = IDA_HIWORD(v99) + 3;
    v29 = (int16_t)(v99 + 5) + ((int16_t)(IDA_HIWORD(v99) + 3) << 9);
    if ( v29 >= 0x40000 || (v30 = *(unsigned int **)(g_abs_87F924 + 4 * v29)) == 0 )
    {
      g_Map_GlobalCellIndex = a3;
      v30 = g_CellClassArray;
    }
    v106 = g_MapRenderState * *((char *)v30 + 283);
    v104 = ((int16_t)(v99 + 5) << 8) + 128;
    v105 = ((int16_t)(IDA_HIWORD(v99) + 3) << 8) + 128;
    Coord::To_Screen(g_abs_887324, &v104, &v102);
    Cell::CreateCrater(v100 - 120, v101 - 60, v102 - v100 + 240, v103 - v101 + 120, 0);
    v94 = (int *)*((unsigned int *)g_abs_8B4154 + AnimTypeClass::FindIndex(aXgrymed1));
    v97 = *((unsigned int *)g_abs_8B4154 + AnimTypeClass::FindIndex(aXgrymed2));
    v98 = *((unsigned int *)g_abs_8B4154 + AnimTypeClass::FindIndex(aXgrysml1));
    result = v93 + 3;
    v92 = v93;
    v99 = v93 + 3;
    if ( !__OFSUB__(v93, v93 + 3) )
    {
      result = v89 + 5;
      do
      {
        v31 = v89;
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
              v32 = Random::Range((unsigned int *)g_abs_A8B230 + 134, 0, 2);
              if ( v32 )
              {
                v33 = v32 - 1;
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
              v34 = (void **)RA2_OPNEW(0x1C8u);
              if ( v34 )
              {
                v35 = Random::Range((unsigned int *)g_abs_A8B230 + 134, -8, 8);
                v36 = Random::Range((unsigned int *)g_abs_A8B230 + 134, -12, 12);
                v37 = (int16_t)v31;
                v38 = (int16_t)v31 + ((int16_t)v92 << 9);
                if ( v38 >= 0x40000 || (v39 = *(unsigned int **)(g_abs_87F924 + 4 * v38), v31 = v93, !v39) )
                {
                  g_Map_GlobalCellIndex = v96;
                  v39 = g_CellClassArray;
                }
                v40 = g_MapRenderState * *((char *)v39 + 283);
                v105 = v35 + ((int16_t)v92 << 8) + 128;
                v104 = (v37 << 8) + 128 + v36;
                v106 = v40;
                v41 = (void *)Random::Range((unsigned int *)g_abs_A8B230 + 134, 0, 2);
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
    v42 = (int *)*((unsigned int *)g_abs_A8ED2C + dword_ABC2C8 + 1);
    v43 = *(unsigned short *)(a3 + 38) - (*(unsigned char *)(a3 + 282) >> 2);
    v44 = *v42;
    IDA_LOWORD(v99) = *(unsigned short *)(a3 + 36) - (*(unsigned char *)(a3 + 282) & 3);
    IDA_HIWORD(v99) = v43;
    v45 = (unsigned char *)(*(int (**)(int *, unsigned int))(v44 + 140))(v42, 0);
    a3 = (int16_t)v99;
    v95 = ((int16_t)v99 << 8) + 128;
    v104 = v95;
    v98 = v43;
    v106 = 0;
    v97 = (v43 << 8) + 128;
    v105 = v97;
    (*(void (**)(unsigned char *, int *))(*(unsigned int *)v45 + 436))(v45, &v104);
    v46 = *(unsigned int *)v45;
    v45[129] = 0;
    v45[116] = 1;
    (*(void (**)(unsigned char *, unsigned int))(v46 + 292))(v45, 0);
    if ( v45 )
      (*(void (**)(unsigned char *, int))(*(unsigned int *)v45 + 32))(v45, 1);
    v47 = (int *)(*(int (**)(unsigned int, unsigned int))(**((unsigned int **)g_abs_A8ED2C + g_TerrainTypeTable2 + 3) + 140))(
                   *((unsigned int *)g_abs_A8ED2C + g_TerrainTypeTable2 + 3),
                   0);
    v104 = v95;
    v105 = v97;
    v48 = *v47;
    v106 = 0;
    (*(void (**)(int *, int *, unsigned int))(v48 + 216))(v47, &v104, 0);
    v49 = (int *)(*(int (**)(unsigned int, unsigned int))(**((unsigned int **)g_abs_A8ED2C + g_TerrainTypeTable2 + 2) + 140))(
                   *((unsigned int *)g_abs_A8ED2C + g_TerrainTypeTable2 + 2),
                   0);
    v105 = ((int16_t)(IDA_HIWORD(v99) + 3) << 8) + 128;
    v104 = (a3 << 8) + 128;
    v50 = *v49;
    v106 = 0;
    (*(void (**)(int *, int *, unsigned int))(v50 + 216))(v49, &v104, 0);
    v51 = v94;
    Terrain::ConnectivityGraph(v94);
    v52 = (unsigned int *)*((unsigned int *)g_abs_A8ED2C + dword_ABC2C8 + 1);
    v90 = (*(int (**)(unsigned int *))(*v52 + 156))(v52);
    for ( k = 0; k < v52[186]; ++k )
    {
      v54 = v52[185];
      v55 = 0;
      if ( v54 > 0 )
      {
        IDA_HIWORD(v96) = k + IDA_HIWORD(v99);
        do
        {
          IDA_LOWORD(v96) = v55 + v99;
          v92 = v96;
          if ( *(unsigned int *)(v90 + 4 * (v55 + k * v54) + 16) && LayerClass::IsWithinUsableArea(v51, (int16_t *)&v92, 1) )
          {
            v56 = Cell::CoordToIndex(v51, (int16_t *)&v92);
            if ( v56 >= 0 )
            {
              v57 = v51[27];
              if ( v56 >= v57 )
                v56 = v57 - 1;
            }
            else
            {
              v56 = 0;
            }
            *(unsigned short *)(v51[28] + 10 * v56) = 0;
            v58 = (int16_t)v92 + (SHIWORD(v92) << 9);
            if ( v58 >= 0x40000 || (v59 = *(unsigned int **)(g_abs_87F924 + 4 * v58)) == 0 )
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
      v61 = v52[185];
      v62 = 0;
      if ( v61 > 0 )
      {
        IDA_HIWORD(v96) = m + IDA_HIWORD(v99);
        do
        {
          IDA_LOWORD(v96) = v62 + v99;
          v93 = v96;
          if ( *(unsigned int *)(v90 + 4 * (v62 + m * v61) + 16) && LayerClass::IsWithinUsableArea(v51, (int16_t *)&v93, 1) )
          {
            v63 = Cell::CoordToIndex(v51, (int16_t *)&v93);
            if ( v63 >= 0 )
            {
              v64 = v51[27];
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
      v66 = v52[185];
      v67 = 0;
      if ( v66 > 0 )
      {
        IDA_HIWORD(v96) = n + IDA_HIWORD(v99);
        do
        {
          IDA_LOWORD(v96) = v67 + v99;
          v92 = v96;
          if ( *(unsigned int *)(v90 + 4 * (v67 + n * v66) + 16) && LayerClass::IsWithinUsableArea(v51, (int16_t *)&v92, 1) )
          {
            v68 = (int16_t)v92 + (SHIWORD(v92) << 9);
            if ( v68 >= 0x40000 || (v69 = *(unsigned int **)(g_abs_87F924 + 4 * v68)) == 0 )
            {
              g_Map_GlobalCellIndex = v92;
              v69 = g_CellClassArray;
            }
            AbstractClass::ClearTargetToMeClearManagerTarget(v69);
            BuildingClass::AddUpgrade((int)&g_abs_87F7E8, (int)&v92);
          }
          v66 = v52[185];
          ++v67;
        }
        while ( v67 < v66 );
      }
    }
    v70 = a3 + (v98 << 9);
    if ( v70 >= 0x40000 || (v71 = *(unsigned int **)(g_abs_87F924 + 4 * v70)) == 0 )
    {
      v71 = g_CellClassArray;
      g_Map_GlobalCellIndex = v99;
    }
    v106 = g_MapRenderState * *((char *)v71 + 283);
    v104 = v95;
    v105 = v97;
    Coord::To_Screen(g_abs_887324, &v104, &v102);
    v72 = (int16_t)(v99 + 3);
    v73 = (int16_t)(IDA_HIWORD(v99) + 5) << 9;
    v74 = v72 + v73 < 0;
    v75 = v72 + v73;
    IDA_LOWORD(v97) = v99 + 3;
    IDA_HIWORD(v97) = IDA_HIWORD(v99) + 5;
    if ( v74 || v75 >= 0x40000 || (v76 = *(unsigned int **)(g_abs_87F924 + 4 * v75)) == 0 )
    {
      g_Map_GlobalCellIndex = v97;
      v76 = g_CellClassArray;
    }
    v106 = g_MapRenderState * *((char *)v76 + 283);
    v104 = ((int16_t)(v99 + 3) << 8) + 128;
    v105 = ((int16_t)(IDA_HIWORD(v99) + 5) << 8) + 128;
    Coord::To_Screen(g_abs_887324, &v104, &v100);
    Cell::CreateCrater(v100 - 120, v103 - 60, v102 - v100 + 240, v101 - v103 + 120, 0);
    v95 = *((unsigned int *)g_abs_8B4154 + AnimTypeClass::FindIndex(aXgrymed1));
    v96 = *((unsigned int *)g_abs_8B4154 + AnimTypeClass::FindIndex(aXgrymed2));
    v77 = *((unsigned int *)g_abs_8B4154 + AnimTypeClass::FindIndex(aXgrysml1));
    result = v98;
    v99 = v77;
    v91 = v98;
    v94 = (int *)(v98 + 5);
    if ( !__OFSUB__(v98, v98 + 5) )
    {
      result = a3 + 3;
      do
      {
        v78 = a3;
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
              v79 = Random::Range((unsigned int *)g_abs_A8B230 + 134, 0, 2);
              if ( v79 )
              {
                v80 = v79 - 1;
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
              v81 = (void **)RA2_OPNEW(0x1C8u);
              if ( v81 )
              {
                v82 = Random::Range((unsigned int *)g_abs_A8B230 + 134, -8, 8);
                v83 = Random::Range((unsigned int *)g_abs_A8B230 + 134, -12, 12);
                v84 = (int16_t)v78;
                v85 = (int16_t)v78 + ((int16_t)v91 << 9);
                if ( v85 >= 0x40000 || (v86 = *(unsigned int **)(g_abs_87F924 + 4 * v85), v78 = v93, !v86) )
                {
                  g_Map_GlobalCellIndex = v98;
                  v86 = g_CellClassArray;
                }
                v87 = g_MapRenderState * *((char *)v86 + 283);
                v105 = v82 + ((int16_t)v91 << 8) + 128;
                v104 = (v84 << 8) + 128 + v83;
                v106 = v87;
                v88 = (void *)Random::Range((unsigned int *)g_abs_A8B230 + 134, 0, 2);
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
