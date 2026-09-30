// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Team_e4.hpp"
#include "e4/classes/Voxel_e4.hpp"
#include "e4/classes/VoxelAnim_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/VoxelAnimType_e4.hpp"
#include "e4/classes/WaveClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/File_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/ProgressTimer_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/VoxelRenderer_e4.hpp"
#include "e4/classes/VoxelAnimTypeClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/ScriptAction_e4.hpp"

// 0x7586F0
namespace gamemd {
int VoxelAnim::ComputeTransform(float * a1, float * a2, float a3, int a4)
{

  int v5; // esi
  double v6; // st7
  double v7; // st7
  float v8; // edx
  int v9; // ebx
  int v10; // edi
  float *v11; // esi
  double v12; // st7
  double v13; // st6
  double v14; // st7
  float v16; // [esp+18h] [ebp-24h]
  float v17; // [esp+1Ch] [ebp-20h]
  float v18; // [esp+20h] [ebp-1Ch]
  float v19; // [esp+24h] [ebp-18h]
  float v20; // [esp+28h] [ebp-14h]
  float v21; // [esp+2Ch] [ebp-10h]
  float v22; // [esp+30h] [ebp-Ch]
  float v23; // [esp+34h] [ebp-8h]
  float v24; // [esp+38h] [ebp-4h]
  float v25; // [esp+44h] [ebp+8h]

  v5 = ((unsigned int *)(dword_8469E0))[a4]; /*0x758702*/
  v16 = *a1 + *a2; /*0x75870c*/
  v17 = a2[1] + a1[1]; /*0x758716*/
  v6 = a2[2] + a1[2]; /*0x75871d*/
  v18 = v6; /*0x758720*/
  v7 = Math::Sqrt(v6 * v18 + v16 * v16 + v17 * v17); /*0x75873f*/
  if ( v7 == 0.0 ) /*0x758752*/
  {
    v8 = v18; /*0x75878e*/
    v19 = v16; /*0x758792*/
    v20 = v17; /*0x758798*/
  }
  else
  {
    v22 = v16 / v7; /*0x75875a*/
    v19 = v22; /*0x758768*/
    v23 = v17 / v7; /*0x75876c*/
    v20 = v23; /*0x758778*/
    v24 = v18 / v7; /*0x75877c*/
    v8 = v24; /*0x758780*/
  }
  v9 = ((unsigned int *)(dword_8469F4))[a4]; /*0x75879c*/
  v10 = 0; /*0x7587a3*/
  v21 = v8; /*0x7587a7*/
  if ( v9 > 0 ) /*0x7587ab*/
  {
    v11 = (float *)(v5 + 4); /*0x7587b1*/
    do /*0x758856*/
    {
      v12 = v11[1] * a1[2] + *v11 * a1[1] + *(v11 - 1) * *a1; /*0x7587c7*/
      v13 = v19 * *(v11 - 1) + v20 * *v11 + v21 * v11[1]; /*0x7587df*/
      v25 = v13 / (a3 - v13 * a3 + v13); /*0x7587ef*/
      if ( v25 < 0.0 ) /*0x758804*/
        v25 = 0.0; /*0x758806*/
      if ( v12 < 0.0 ) /*0x758819*/
        v12 = 0.0; /*0x75881d*/
      v14 = v12 + v25; /*0x758823*/
      if ( v14 >= 0.0 ) /*0x758832*/
        ((unsigned int *)(g_VoxelShadeTable))[v10] = Math::RoundToInt(v14 * 16.0); /*0x75884a*/
      else
        ((unsigned int *)(g_VoxelShadeTable))[v10] = 0; /*0x758836*/
      ++v10; /*0x758850*/
      v11 += 3; /*0x758851*/
    }
    while ( v10 < v9 ); /*0x758856*/
  }
  byte_B45A8F = 16; /*0x758861*/
  byte_B45A8E = 16; /*0x758866*/
  byte_B45A8D = 16; /*0x75886b*/
  return 16; /*0x75885c*/

}
} // namespace gamemd
// 0x75AEC0
namespace gamemd {
int VoxelAnim::Draw(unsigned int * a2)
{

  unsigned int *v3; // ebx
  unsigned int *v4; // esi
  unsigned int *v5; // ecx
  int v6; // edx
  int v7; // eax
  unsigned int *v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // ecx
  unsigned int *v13; // eax
  int *v14; // eax
  unsigned char *v15; // ecx
  int v16; // eax
  int v17; // ecx
  unsigned char *v18; // ecx
  unsigned int *v19; // eax
  unsigned int *v20; // edx
  unsigned int *v21; // esi
  int v22; // edx
  int v23; // eax
  int v24; // eax
  int v25; // ecx
  unsigned int *v26; // eax
  int v27; // ecx
  unsigned int *v28; // eax
  unsigned int *v29; // edx
  unsigned int *v30; // esi
  int v31; // edx
  int v32; // eax
  int v33; // eax
  unsigned int *v34; // eax
  int *v35; // eax
  int v36; // eax
  int v37; // ecx
  unsigned int *v38; // edx
  int v39; // ecx
  int v40; // eax
  unsigned int *v41; // eax
  int v42; // edx
  int v43; // edx
  int v44; // esi
  int v45; // edi
  unsigned int *v46; // eax
  int v47; // ecx
  unsigned int *v48; // esi
  int v49; // edx
  int v50; // eax
  unsigned int *v51; // ebx
  int v52; // edi
  int v53; // edx
  int v54; // edi
  int *v55; // ecx
  int GroundHeight; // esi
  int v57; // edi
  int v58; // ecx
  int *v59; // eax
  unsigned int *v60; // ecx
  int v61; // edi
  int v62; // esi
  unsigned int *v63; // eax
  int v64; // ecx
  int v65; // esi
  void *v66; // eax
  int v67; // esi
  int v68; // ecx
  unsigned int *v69; // esi
  unsigned int *v70; // edx
  unsigned int *v71; // eax
  int v72; // ecx
  int v73; // edx
  int v74; // eax
  int *v75; // ecx
  int64_t v76; // rax
  int v77; // edx
  int *v78; // ecx
  int64_t v79; // rax
  int v80; // eax
  unsigned int *v81; // edx
  int v82; // ecx
  int v83; // ecx
  int v84; // esi
  int v85; // edx
  int v86; // eax
  char v87; // bl
  char v88; // al
  wchar_t *v89; // edi
  char v90; // bl
  wchar_t *v91; // eax
  wchar_t **v92; // edx
  int v93; // ecx
  int v94; // edi
  unsigned int *v95; // edx
  int v96; // edi
  void *v97; // eax
  void *v98; // eax
  unsigned int *v99; // edx
  unsigned char *v100; // ecx
  int *v101; // eax
  int v102; // ecx
  double v103; // st7
  int16_t v104; // ax
  int v105; // ecx
  double *v106; // ecx
  int v107; // ecx
  unsigned int *v108; // esi
  int v109; // edi
  int *v110; // eax
  int v111; // ecx
  double v112; // st7
  int v113; // eax
  int v114; // ecx
  int v115; // eax
  unsigned int *v116; // ecx
  unsigned char *v117; // ecx
  int v118; // esi
  int v119; // edi
  int64_t v120; // rax
  int v121; // ecx
  int v122; // eax
  int v123; // ecx
  int *v124; // eax
  int v125; // ecx
  double v126; // st7
  int16_t v127; // ax
  int v128; // ecx
  int16_t v129; // si
  unsigned int **v130; // eax
  int *v131; // ecx
  int v132; // edi
  unsigned int v133; // ebx
  double v134; // st7
  int v135; // esi
  double v136; // st7
  unsigned int *v137; // esi
  unsigned int *v138; // eax
  int *v139; // ecx
  void *v140; // eax
  int v141; // eax
  char v142; // bl
  int v144; // [esp+18h] [ebp-58h]
  int v145; // [esp+1Ch] [ebp-54h]
  int v146; // [esp+20h] [ebp-50h]
  int v147; // [esp+20h] [ebp-50h]
  int v148; // [esp+20h] [ebp-50h]
  char v149; // [esp+24h] [ebp-4Ch]
  char v150; // [esp+24h] [ebp-4Ch]
  int v151; // [esp+24h] [ebp-4Ch]
  unsigned int *v152; // [esp+38h] [ebp-38h] BYREF
  double v153; // [esp+3Ch] [ebp-34h] BYREF
  double v154; // [esp+44h] [ebp-2Ch] BYREF
  double v155; // [esp+4Ch] [ebp-24h] BYREF
  int v156; // [esp+54h] [ebp-1Ch]
  int v157; // [esp+58h] [ebp-18h] BYREF
  int v158; // [esp+5Ch] [ebp-14h]
  int v159; // [esp+60h] [ebp-10h]
  int v160; // [esp+64h] [ebp-Ch] BYREF
  int v161; // [esp+68h] [ebp-8h]
  int v162; // [esp+6Ch] [ebp-4h]

  v3 = (unsigned int *)((char *)this + 40);
  if ( *((unsigned int *)this + 10) != g_AsyncMovieState
    || *((unsigned int *)this + 11) != (unsigned int)((unsigned int))((unsigned int))(g_abs_B45BEC)
    || *((unsigned int *)this + 12) != (unsigned int)((unsigned int))((unsigned int))(g_abs_B45BF0) )
  {
    v107 = *((unsigned int *)this + 3);
    v108 = (unsigned int *)*v3;
    v109 = *((unsigned int *)this + 11);
    *((unsigned char *)this + 54) = 1;
    v110 = (int *)(*(int (**)(int, int *))(*(unsigned int *)v107 + 72))(v107, &v160);
    v111 = *v110;
    IDA_HIDWORD(v155) = v110[1] - v109;
    IDA_LODWORD(v155) = v111 - (unsigned int)v108;
    v112 = Math::Sqrt((double)(v111 - (int)v108) * (double)(v111 - (int)v108) + (double)IDA_SHIDWORD(v155)
                                                                              * (double)IDA_SHIDWORD(v155));
    v113 = Math::RoundToInt(v112);
    v114 = *((unsigned int *)this + 3);
    if ( v113 < 17 )
    {
      (*(void (**)(int, unsigned int))(*(unsigned int *)v114 + 292))(v114, 0);
      v115 = *((unsigned int *)this + 3);
      if ( *(unsigned int *)(v115 + 1504) == -1 )
        *(unsigned int *)(v115 + 1508) = -1;
      qmemcpy((void *)(*((unsigned int *)this + 3) + 1504), (const void *)(*((unsigned int *)this + 3) + 1508), 0x5Cu);
      *(unsigned int *)(*((unsigned int *)this + 3) + 1596) = -1;
      (*(void (**)(unsigned int, int))(**(unsigned int **)((char *)this + 12) + 436))(*((unsigned int *)this + 3), (char *)this + 40);
      IDA_LOWORD(a2) = *v3 / 256;
      IDA_HIWORD(a2) = *((unsigned int *)this + 11) / 256;
      *(unsigned int *)(*((unsigned int *)this + 3) + 1368) = a2;
      (*(void (**)(unsigned int, unsigned int))(**(unsigned int **)((char *)this + 12) + 460))(*((unsigned int *)this + 3), 0);
      *(unsigned char *)(*((unsigned int *)this + 3) + 1719) = 0;
      ((Voxel *)(&g_AsyncMovieState))->DrawHelper();
      v116 = *(unsigned int **)((char *)this + 12);
      if ( v116[376] == -1 )
        (*(void (**)(unsigned int *, unsigned int, unsigned int))(*v116 + 1348))(v116, 0, 0);
      (*(void (**)(unsigned int, int))(**(unsigned int **)((char *)this + 12) + 396))(*((unsigned int *)this + 3), 2);
      v117 = *(unsigned char **)((char *)this + 12);
      IDA_LOBYTE(v9) = v117[144];
      if ( (unsigned char)v9 )
      {
        IDA_LOBYTE(v9) = v117[129];
        if ( !(unsigned char)v9 )
        {
          IDA_LOBYTE(v9) = v117[141];
          if ( !(unsigned char)v9 )
          {
            if ( *((unsigned int *)this + 7) == g_AsyncMovieState
              && *((unsigned int *)this + 8) == (unsigned int)((unsigned int))((unsigned int))(g_abs_B45BEC)
              && *((unsigned int *)this + 9) == (unsigned int)((unsigned int))((unsigned int))(g_abs_B45BF0)
              || (v118 = *((unsigned int *)this + 7) / 256,
                  v119 = *((unsigned int *)this + 8) / 256,
                  a2 = (unsigned int *)(*(int (**)(unsigned char *, int *, unsigned int))(*(unsigned int *)v117 + 76))(v117, &v160, 0),
                  (uint16_t)(*a2 / 256) == (unsigned short)v118)
              && (uint16_t)(a2[1] / 256) == (unsigned short)v119
              && (v120 = *(unsigned int *)((*(int (**)(unsigned int, int *, unsigned int))(**(unsigned int **)((char *)this + 12) + 76))(
                                       *((unsigned int *)this + 3),
                                       &v160,
                                       0)
                                   + 8)
                       - *((unsigned int *)this + 9),
                  (int)((IDA_HIDWORD(v120) ^ v120) - IDA_HIDWORD(v120)) < 2 * g_abs_B45C28) )
            {
              (*(void (**)(unsigned int, unsigned int, int))(**(unsigned int **)((char *)this + 12) + 1152))(
                *((unsigned int *)this + 3),
                0,
                1);
              (*(void (**)(unsigned int, unsigned int, unsigned int))(**(unsigned int **)((char *)this + 12) + 1348))(
                *((unsigned int *)this + 3),
                0,
                0);
              *v3 = g_AsyncMovieState;
              *((unsigned int *)this + 11) = g_abs_B45BEC;
              v121 = *((unsigned int *)this + 1);
              *((unsigned int *)this + 12) = g_abs_B45BF0;
              (*(void (**)(int))(v121 + 72))((char *)this + 4);
              *((unsigned char *)this + 54) = 0;
            }
            (*(void (**)(unsigned int, int))(**(unsigned int **)((char *)this + 12) + 292))(*((unsigned int *)this + 3), 1);
            v9 = *((unsigned int *)this + 3);
            *(unsigned char *)(v9 + 1674) = 0;
          }
        }
      }
      return v9;
    }
    if ( (*(uint8_t (**)(int))(*(unsigned int *)v114 + 892))(v114) )
    {
      v9 = *((unsigned int *)this + 3);
      *((unsigned char *)this + 54) = 0;
      *(unsigned char *)(v9 + 1674) = 0;
      return v9;
    }
    (*(void (**)(unsigned int, unsigned int, int))(**(unsigned int **)((char *)this + 12) + 1348))(
      *((unsigned int *)this + 3),
      0,
      1072693248);
    v122 = (*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 1336))(*((unsigned int *)this + 3));
    v123 = *((unsigned int *)this + 3);
    IDA_LODWORD(v153) = v122;
    *(unsigned char *)(v123 + 1719) = 0;
    v124 = (int *)(*(int (**)(unsigned int, int *))(**(unsigned int **)((char *)this + 12) + 72))(*((unsigned int *)this + 3), &v160);
    v125 = *v124;
    IDA_LODWORD(v155) = *v3;
    IDA_LODWORD(v154) = v125;
    v126 = Math::CalcAngle((double)v124[1] - (double)*((int *)this + 11), (double)IDA_SLODWORD(v155) - (double)v125);
    v127 = Math::RoundToInt((v126 - 1.570796326794897) * -10430.06004058427);
    v128 = *((unsigned int *)this + 1);
    v129 = v127;
    IDA_LOWORD(v155) = v127;
    (*(void (**)(int, unsigned int))(v128 + 76))((char *)this + 4, IDA_LODWORD(v155));
    v130 = (unsigned int **)(*(int (**)(unsigned int, double *))(**(unsigned int **)((char *)this + 12) + 440))(
                        *((unsigned int *)this + 3),
                        &v155);
    v131 = (int *)(*((unsigned int *)this + 3) + 156);
    a2 = *v130;
    v160 = *v131;
    v161 = v131[1];
    v132 = v131[2];
    IDA_LODWORD(v155) = v129 - 0x3FFF;
    v155 = (double)IDA_SLODWORD(v155) * -0.00009587672516830327;
    v133 = IDA_HIDWORD(v155);
    v154 = (double)IDA_SLODWORD(v153);
    v153 = (double)v161;
    v134 = Math::SinCos(v155);
    v135 = Math::RoundToInt(v153 - v134 * v154);
    v136 = Math::ArcTan2(COERCE_DOUBLE(__PAIR64__(v133, IDA_LODWORD(v155))));
    v157 = Math::RoundToInt(v136 * v154 + (double)v160);
    v158 = v135;
    v159 = v132;
    IDA_LOWORD(v154) = v157 / 256;
    IDA_WORD1(v154) = v135 / 256;
    v152 = (unsigned int *)IDA_LODWORD(v154);
    if ( a2 == (unsigned int *)IDA_LODWORD(v154) )
    {
      v141 = *((unsigned int *)this + 3);
      v142 = *(unsigned char *)(v141 + 116);
      *(unsigned char *)(v141 + 116) = 0;
      (*(void (**)(unsigned int, int *))(**(unsigned int **)((char *)this + 12) + 436))(*((unsigned int *)this + 3), &v157);
      (*(void (**)(unsigned int, unsigned int))(**(unsigned int **)((char *)this + 12) + 460))(*((unsigned int *)this + 3), 0);
      *(unsigned char *)(*((unsigned int *)this + 3) + 116) = v142;
      v9 = *((unsigned int *)this + 3);
      *(unsigned char *)(v9 + 1674) = 0;
      return v9;
    }
    (*(void (**)(unsigned int, unsigned int))(**(unsigned int **)((char *)this + 12) + 292))(*((unsigned int *)this + 3), 0);
    (*(void (**)(unsigned int, int *))(**(unsigned int **)((char *)this + 12) + 436))(*((unsigned int *)this + 3), &v157);
    v137 = (unsigned int *)(CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&a2));
    v138 = (unsigned int *)(CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v152));
    if ( *((char *)v138 + 283) == *((char *)v137 + 283) - 4 )
    {
      if ( (v138[80] & 0x100) == 0 )
        goto LABEL_120;
      *(unsigned char *)(*((unsigned int *)this + 3) + 140) = 1;
    }
    if ( (v138[80] & 0x100) != 0 )
    {
LABEL_122:
      (*(void (**)(unsigned int, unsigned int))(**(unsigned int **)((char *)this + 12) + 460))(*((unsigned int *)this + 3), 0);
      (*(void (**)(unsigned int, int))(**(unsigned int **)((char *)this + 12) + 292))(*((unsigned int *)this + 3), 1);
      v139 = (int *)(*((unsigned int *)this + 3) + 156);
      v160 = *v139;
      v161 = v139[1];
      v162 = v139[2];
      v140 = Coord::To_Cell(&g_abs_87F7E8, &v160);
      BuildingClass::CreateIdleAnim(v140);
      goto LABEL_123;
    }
LABEL_120:
    if ( (v137[80] & 0x100) != 0 )
      *(unsigned char *)(*((unsigned int *)this + 3) + 140) = 0;
    goto LABEL_122;
  }
  v4 = (unsigned int *)((char *)this + 28);
  if ( *((unsigned int *)this + 7) == g_AsyncMovieState
    && *((unsigned int *)this + 8) == (unsigned int)((unsigned int))((unsigned int))(g_abs_B45BEC)
    && *((unsigned int *)this + 9) == (unsigned int)((unsigned int))((unsigned int))(g_abs_B45BF0) )
  {
    v106 = *(double **)((char *)this + 12);
    if ( v106[175] > 0.0 )
    {
      (*(void (**)(double *, unsigned int, unsigned int))(*(unsigned int *)v106 + 1348))(v106, 0, 0);
      v9 = *((unsigned int *)this + 3);
      *(unsigned char *)(v9 + 1674) = 0;
      return v9;
    }
LABEL_123:
    v9 = *((unsigned int *)this + 3);
    *(unsigned char *)(v9 + 1674) = 0;
    return v9;
  }
  v5 = *(unsigned int **)((char *)this + 12);
  v152 = v5;
  if ( v5[376] != -1 )
    goto LABEL_32;
  v6 = v5[400];
  v7 = v5[402];
  v8 = v5 + 400;
  if ( v6 == -1 )
    goto LABEL_11;
  if ( (int)g_abs_A8ED84 - v6 < v7 )
  {
    v7 -= (int)g_abs_A8ED84 - v6;
    v5 = v152;
LABEL_11:
    if ( v7 )
    {
      IDA_LOBYTE(v9) = (*(int (**)(unsigned int *))(*v5 + 1352))(v5);
      return v9;
    }
  }
  v10 = Math::RoundToInt(*((double *)g_abs_8871E0 + 748) * 900.0);
  v11 = v161;
  *v8 = (unsigned int)(g_abs_A8ED84);
  v8[1] = v11;
  v8[2] = v10;
  IDA_LOWORD(v152) = *v4 / 256;
  IDA_HIWORD(v152) = *((unsigned int *)this + 8) / 256;
  if ( !(uint8_t)FootClass::MovementStep(v152, 0, 0) )
  {
    v12 = *((unsigned int *)this + 3);
    *((unsigned char *)this + 54) = 0;
    if ( (*(uint8_t (**)(int, int))(*(unsigned int *)v12 + 716))(v12, (char *)this + 28) )
    {
      (*(void (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 1268))(*((unsigned int *)this + 3));
      v13 = (unsigned int *)(*(int (**)(unsigned int, int *))(**(unsigned int **)((char *)this + 12) + 72))(
                        *((unsigned int *)this + 3),
                        &v160);
      v14 = (int *)(Coord::Subtract(&v155, *v13 - *v4, v13[1] - *((unsigned int *)this + 8), v13[2] - *((unsigned int *)this + 9)));
      v157 = *v14;
      v158 = v14[1];
      v159 = v14[2];
      if ( (int)Coord::Length(&v157) >= *((unsigned int *)g_abs_8871E0 + 1478)
        || (v15 = *(unsigned char **)((char *)this + 12), v15[1048]) )
      {
        v16 = *((unsigned int *)this + 3);
        v17 = *(unsigned int *)(v16 + 1612);
        if ( v17 )
        {
          *(unsigned int *)(v16 + 1612) = v17 - 1;
        }
        else
        {
          if ( *(unsigned char *)(v16 + 1674) )
            PlayVocClass(1.0, 0);
          *(unsigned char *)(*((unsigned int *)this + 3) + 1674) = 0;
          IDA_LOWORD(a2) = *v4 / 256;
          IDA_HIWORD(a2) = *((unsigned int *)this + 8) / 256;
          IDA_LODWORD(v153) = a2;
          v18 = *(unsigned char **)((char *)this + 12);
          if ( v18[981] )
          {
            v19 = (unsigned int *)(*(int (**)(unsigned char *, int *, unsigned int))(*(unsigned int *)v18 + 76))(v18, &v160, 0);
            IDA_LOWORD(a2) = *v19 / 256;
            v20 = *(unsigned int **)((char *)this + 12);
            IDA_HIWORD(a2) = v19[1] / 256;
            v21 = v20;
            IDA_LODWORD(v154) = a2;
            v152 = v20;
            v149 = (*(int (**)(unsigned int *))(*v20 + 800))(v20);
            v22 = *((unsigned int *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v153) + 80) >> 8;
            IDA_LOBYTE(v22) = v22 & 1;
            v146 = v22;
            v23 = (*(int (**)(unsigned int *))(*v21 + 188))(v21);
            v24 = (*(int (**)(unsigned int *, int))(*v21 + 132))(v21, v23);
            if ( !(uint8_t)MapSeed::CheckTileMatch(&v154, &v153, *(unsigned int *)(v24 + 1460), 0, v146, v149) )
              (*(void (**)(unsigned int, unsigned int, int))(**(unsigned int **)((char *)this + 12) + 1152))(
                *((unsigned int *)this + 3),
                0,
                1);
          }
          v25 = *(unsigned int *)(*((unsigned int *)this + 3) + 692);
          if ( v25 )
          {
            v26 = (unsigned int *)(*(int (**)(int, int *, unsigned int))(*(unsigned int *)v25 + 76))(
                              v25,
                              &v160,
                              *((unsigned int *)this + 3));
            IDA_LOWORD(a2) = *v26 / 256;
            IDA_HIWORD(a2) = v26[1] / 256;
            IDA_LODWORD(v154) = a2;
            v27 = *((unsigned int *)this + 3);
            if ( *(unsigned char *)(v27 + 981) )
            {
              if ( *(unsigned int *)(v27 + 692) )
              {
                v28 = (unsigned int *)(*(int (**)(int *, unsigned int))(*(unsigned int *)v27 + 76))(
                                  &v160,
                                  *((unsigned int *)this + 3));
                IDA_LOWORD(a2) = *v28 / 256;
                v29 = *(unsigned int **)((char *)this + 12);
                IDA_HIWORD(a2) = v28[1] / 256;
                v30 = v29;
                IDA_LODWORD(v155) = a2;
                v152 = v29;
                v150 = (*(int (**)(unsigned int *))(*v29 + 800))(v29);
                v31 = *((unsigned int *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v154) + 80) >> 8;
                IDA_LOBYTE(v31) = v31 & 1;
                v147 = v31;
                v32 = (*(int (**)(unsigned int *))(*v30 + 188))(v30);
                v33 = (*(int (**)(unsigned int *, int))(*v30 + 132))(v30, v32);
                if ( !(uint8_t)MapSeed::CheckTileMatch(&v155, &v154, *(unsigned int *)(v33 + 1460), v30, v147, v150) )
                  (*(void (**)(unsigned int, unsigned int))(**(unsigned int **)((char *)this + 12) + 968))(*((unsigned int *)this + 3), 0);
              }
            }
          }
        }
      }
      else
      {
        (*(void (**)(unsigned char *, unsigned int, int))(*(unsigned int *)v15 + 1152))(v15, 0, 1);
      }
      (*(void (**)(unsigned int, unsigned int, unsigned int))(**(unsigned int **)((char *)this + 12) + 1348))(*((unsigned int *)this + 3), 0, 0);
      IDA_LOBYTE(v9) = (*(int (**)(int))(*((unsigned int *)this + 1) + 72))((char *)this + 4);
      return v9;
    }
LABEL_37:
    IDA_LOBYTE(v9) = (*(int (**)(unsigned int, unsigned int, int))(**(unsigned int **)((char *)this + 12) + 1152))(
                   *((unsigned int *)this + 3),
                   0,
                   1);
    return v9;
  }
  *(unsigned int *)(*((unsigned int *)this + 3) + 1612) = 10;
  IDA_LOBYTE(v9) = (*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 1272))(*((unsigned int *)this + 3));
  if ( (unsigned char)v9 )
    return v9;
LABEL_32:
  v34 = *(unsigned int **)((char *)this + 12);
  IDA_LODWORD(v153) = v34[376];
  if ( IDA_LODWORD(v153) == 8 )
  {
    v35 = (int *)(v34 + 39);
    v157 = *v35;
    v158 = v35[1];
    v159 = v35[2];
    v36 = *((int16_t *)Coord::To_Cell(&g_abs_87F7E8, &v157) + 139);
    a2 = (unsigned int *)v36;
    if ( v36 >= 0 && v36 < (int)((int))((int))(g_abs_8B4148) )
    {
      (*(void (**)(unsigned int, unsigned int))(**(unsigned int **)((char *)this + 12) + 292))(*((unsigned int *)this + 3), 0);
      v37 = *((unsigned int *)this + 3);
      v155 = *(double *)(v37 + 156);
      v156 = *(unsigned int *)(v37 + 164);
      (*(void (**)(int, double *))(*(unsigned int *)v37 + 244))(v37, &v155);
      v38 = (unsigned int *)*((unsigned int *)g_abs_8B413C + (unsigned int)a2);
      IDA_LODWORD(v154) = v38;
      IDA_LODWORD(v155) = v38[10];
      v39 = SWORD1(v155) << 8;
      *v3 = (IDA_SLOWORD(v155) << 8) + 128;
      v40 = *((unsigned int *)this + 3);
      *((unsigned int *)this + 11) = v39 + 128;
      *((unsigned int *)this + 12) = 0;
      qmemcpy((void *)(v40 + 1504), (const void *)(v40 + 1508), 0x5Cu);
      *(unsigned int *)(*((unsigned int *)this + 3) + 1596) = -1;
      *(unsigned char *)(*((unsigned int *)this + 3) + 1668) = (unsigned char)a2;
      *(unsigned char *)(*((unsigned int *)this + 3) + 1669) = 0;
      v41 = (unsigned int *)v38[9];
      v42 = v38[12];
      a2 = v41;
      v43 = v42 & 7;
      IDA_LODWORD(v155) = v41;
      IDA_LOWORD(a2) = IDA_LOWORD(g_abs_89F688[v43]) + (unsigned short)v41;
      IDA_HIWORD(a2) = IDA_HIWORD(v41) + IDA_HIWORD(g_abs_89F688[v43]);
      v44 = ((int16_t)v41 << 8) + 128;
      v45 = (IDA_SHIWORD(v41) << 8) + 128;
      CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&a2);
      v46 = (unsigned int *)CellClass::GetCoords(&v160);
      v47 = *v46 - v44;
      v48 = *(unsigned int **)((char *)this + 12);
      v49 = v46[1] - v45;
      v50 = v46[2];
      v51 = v48 + 39;
      v157 = v48[39];
      v52 = v48[40];
      v48 += 346;
      v53 = v52 + v49;
      v159 = v51[2];
      v54 = v159;
      *v48 = v157 + v47;
      v48[1] = v53;
      v48[2] = v54 + v50;
      v55 = (int *)(*((unsigned int *)this + 3) + 156);
      v157 = *v55;
      v158 = v55[1];
      v159 = v55[2];
      GroundHeight = Cell::GetGroundHeight(&v157);
      v159 = 0;
      v57 = *(unsigned int *)(IDA_LODWORD(v154) + 448);
      a2 = *(unsigned int **)(IDA_LODWORD(v154) + 40);
      v157 = ((int16_t)a2 << 8) + 128;
      v158 = (IDA_SHIWORD(a2) << 8) + 128;
      v9 = GroundHeight + (Cell::GetGroundHeight(&v157) - GroundHeight) / v57;
      *(unsigned int *)(*((unsigned int *)this + 3) + 1392) = v9;
      return v9;
    }
    *(unsigned int *)(*((unsigned int *)this + 3) + 1504) = -1;
    *v3 = g_AsyncMovieState;
    *((unsigned int *)this + 11) = g_abs_B45BEC;
    v58 = *((unsigned int *)this + 1);
    *((unsigned int *)this + 12) = g_abs_B45BF0;
    (*(void (**)(int))(v58 + 72))((char *)this + 4);
    goto LABEL_37;
  }
  v59 = (int *)(Coord::Subtract( &v157, g_abs_89F6D8[2 * (IDA_LOBYTE(v153) & 7)] + v34[39], v34[40] + g_abs_89F6DC[2 * (IDA_LOBYTE(v153) & 7)], v34[41]));
  v160 = *v59;
  v161 = v59[1];
  v162 = v59[2];
  IDA_LOWORD(v154) = v160 / 256;
  v60 = (unsigned int *)(*((unsigned int *)this + 3) + 156);
  IDA_WORD1(v154) = v161 / 256;
  v152 = (unsigned int *)IDA_LODWORD(v154);
  v61 = v60[2];
  v62 = v60[1] + g_abs_89F6DC[2 * (IDA_LOBYTE(v153) & 7)];
  v157 = *v60 + g_abs_89F6D8[2 * (IDA_LOBYTE(v153) & 7)];
  v158 = v62;
  v159 = v61;
  v63 = (unsigned int *)(Coord::To_Cell(&g_abs_87F7E8, &v157));
  v64 = *((unsigned int *)this + 3);
  if ( *(unsigned char *)(v64 + 140) != ((v63[80] >> 8) & 1) )
    *(unsigned char *)(v64 + 1675) = 1;
  v65 = **(unsigned int **)((char *)this + 12);
  v145 = ObjectClass::GetLandHeight(0, 1);
  v144 = IDA_LODWORD(v153);
  v66 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v152);
  v67 = (*(int (**)(unsigned int, void *, int, int, int, int))(v65 + 428))(
          *((unsigned int *)this + 3),
          v66,
          v144,
          v145,
          v148,
          v151);
  if ( v67 )
  {
    v68 = *((unsigned int *)this + 3);
    *((unsigned char *)this + 54) = 0;
    (*(void (**)(int))(*(unsigned int *)v68 + 1352))(v68);
    if ( v67 == 6 )
    {
      v69 = (unsigned int *)(CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v152));
      if ( (unsigned char)a2 )
      {
        *(unsigned int *)(*((unsigned int *)this + 3) + 1504) = -1;
        *v3 = g_AsyncMovieState;
        *((unsigned int *)this + 11) = g_abs_B45BEC;
        *((unsigned int *)this + 12) = g_abs_B45BF0;
        v70 = (unsigned int *)(*((unsigned int *)this + 3) + 1600);
        *v70 = (unsigned int)(g_abs_A8ED84);
        v70[1] = v161;
        v70[2] = 0;
        IDA_LOBYTE(v9) = VoxelAnim::Draw(0);
      }
      else
      {
        v71 = (unsigned int *)(*(int (**)(unsigned int, double *))(**(unsigned int **)((char *)this + 12) + 72))(
                          *((unsigned int *)this + 3),
                          &v155);
        v72 = *v71 - *((unsigned int *)this + 7);
        v73 = v71[1] - *((unsigned int *)this + 8);
        v74 = v71[2] - *((unsigned int *)this + 9);
        v157 = v72;
        v158 = v73;
        v159 = v74;
        if ( (int)Coord::Length(&v157) >= *((unsigned int *)g_abs_8871E0 + 1478)
          || (uint8_t)Team::AllMembersValid(*((unsigned int *)this + 3))
          || (v75 = (int *)(*((unsigned int *)this + 3) + 156),
              v157 = *v75,
              v158 = v75[1],
              v76 = *((unsigned int *)this + 9) - v75[2],
              (int)((IDA_HIDWORD(v76) ^ v76) - IDA_HIDWORD(v76)) >= 2 * g_abs_B45C28)
          || (v157 = *v75, v158 = v75[1],
                           v159 = v75[2],
                           *((unsigned int *)Coord::To_Cell(&g_abs_87F7E8, &v157) + 59) == 10) )
        {
          if ( (v69[80] & 0x100) == 0
            || (v78 = *(int **)((char *)this + 12),
                IDA_LOBYTE(a2) = 1,
                v78 += 39,
                v157 = *v78,
                v158 = v78[1],
                v79 = v78[2] / g_abs_B45C28 - *((char *)v69 + 283),
                (int)((IDA_HIDWORD(v79) ^ v79) - IDA_HIDWORD(v79)) <= 2) )
          {
            IDA_LOBYTE(a2) = 0;
          }
          IDA_LOBYTE(v9) = Cell::ApplyDamage(&g_AsyncMovieState, 1, 1, (char)a2);
        }
        else
        {
          *v3 = g_AsyncMovieState;
          v77 = *((unsigned int *)this + 1);
          *((unsigned int *)this + 11) = g_abs_B45BEC;
          *((unsigned int *)this + 12) = g_abs_B45BF0;
          (*(void (**)(int))(v77 + 72))((char *)this + 4);
          (*(void (**)(unsigned int, unsigned int, unsigned int))(**(unsigned int **)((char *)this + 12) + 1348))(
            *((unsigned int *)this + 3),
            0,
            0);
          (*(void (**)(unsigned int, unsigned int, int))(**(unsigned int **)((char *)this + 12) + 1152))(*((unsigned int *)this + 3), 0, 1);
          v9 = *((unsigned int *)this + 3);
          *(unsigned int *)(v9 + 1504) = -1;
        }
      }
      return v9;
    }
    if ( v67 == 2 )
    {
      v80 = *((unsigned int *)this + 3);
      if ( !*(unsigned char *)(v80 + 1719) )
      {
        *(unsigned char *)(v80 + 1719) = 1;
        v81 = (unsigned int *)(*((unsigned int *)this + 3) + 1640);
        v82 = *((unsigned int *)g_abs_8871E0 + 1498);
        *v81 = (unsigned int)(g_abs_A8ED84);
        v81[1] = v161;
        v81[2] = v82;
      }
      v83 = *((unsigned int *)this + 3);
      v84 = *(unsigned int *)(v83 + 1600);
      v9 = *(unsigned int *)(v83 + 1608);
      if ( v84 != -1 )
      {
        if ( (int)g_abs_A8ED84 - v84 >= v9 )
          goto LABEL_60;
        v9 -= (int)g_abs_A8ED84 - v84;
      }
      if ( v9 )
        return v9;
LABEL_60:
      if ( *(unsigned char *)(v83 + 1719) )
      {
        v85 = *(unsigned int *)(v83 + 1640);
        v86 = *(unsigned int *)(v83 + 1648);
        if ( v85 != -1 )
        {
          if ( (int)g_abs_A8ED84 - v85 >= v86 )
          {
LABEL_65:
            v87 = 1;
            goto LABEL_67;
          }
          v86 -= (int)g_abs_A8ED84 - v85;
        }
        if ( !v86 )
          goto LABEL_65;
      }
      v87 = 0;
LABEL_67:
      IDA_LOWORD(a2) = *((unsigned int *)this + 7) / 256;
      IDA_HIWORD(a2) = *((unsigned int *)this + 8) / 256;
      v88 = FootClass::MovementStep(a2, 0, (v87 != 0) + 1);
      v89 = (wchar_t *)(g_abs_A8ED84);
      v90 = v88;
      v91 = (wchar_t *)Math::RoundToInt(*((double *)g_abs_8871E0 + 748) * 900.0);
      v92 = (wchar_t **)(*((unsigned int *)this + 3) + 1600);
      *v92 = v89;
      v92[1] = (wchar_t *)v161;
      v92[2] = v91;
      v93 = *((unsigned int *)this + 3);
      if ( v90 )
      {
        IDA_LOBYTE(v9) = (*(int (**)(int))(*(unsigned int *)v93 + 1272))(v93);
      }
      else if ( (*(uint8_t (**)(int, int))(*(unsigned int *)v93 + 716))(v93, (char *)this + 28) )
      {
        IDA_LOBYTE(v9) = (*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 1268))(*((unsigned int *)this + 3));
      }
      else
      {
        IDA_LOBYTE(v9) = (*(int (**)(unsigned int, unsigned int, int))(**(unsigned int **)((char *)this + 12) + 1152))(
                       *((unsigned int *)this + 3),
                       0,
                       1);
      }
      return v9;
    }
    if ( v67 == 3 )
    {
      Cell::IsPassableAllied(*((unsigned int *)this + 3), &v152);
      v9 = *((unsigned int *)this + 3);
      *(unsigned int *)(v9 + 1612) = 10;
    }
    else
    {
      if ( v67 == 5 || v67 == 4 )
      {
        v155 = 0.0;
        CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v152);
        v94 = ((Object *)(&v155))->FindObjectCell(0);
        if ( (unsigned char)a2 )
        {
          *(unsigned int *)(*((unsigned int *)this + 3) + 1504) = -1;
          *v3 = g_AsyncMovieState;
          *((unsigned int *)this + 11) = g_abs_B45BEC;
          v95 = *(unsigned int **)((char *)this + 12);
          *((unsigned int *)this + 12) = g_abs_B45BF0;
          v95 += 400;
          *v95 = (unsigned int)(g_abs_A8ED84);
          v95[1] = v161;
          v95[2] = 0;
          IDA_LOBYTE(v9) = VoxelAnim::Draw(0);
          return v9;
        }
        if ( v94 )
        {
          if ( !(uint8_t)Object::IsAlliedWithObjectHouse(v94) )
            (*(void (**)(unsigned int, int, int, unsigned int))(**(unsigned int **)((char *)this + 12) + 500))(
              *((unsigned int *)this + 3),
              1,
              v94,
              0);
        }
        else if ( *((unsigned int *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v152) + 17) != -1
               && *(unsigned char *)(*((unsigned int *)g_abs_A83D84
                             + *((unsigned int *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v152) + 17))
                           + 680) )
        {
          v96 = **(unsigned int **)((char *)this + 12);
          v97 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v152);
          (*(void (**)(unsigned int, int, void *, unsigned int))(v96 + 500))(*((unsigned int *)this + 3), 1, v97, 0);
        }
      }
      if ( v67 == 1 )
      {
        v98 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v152);
        CellClass::DamageAllObjects(v98);
      }
      else if ( v67 != 7 )
      {
        *(unsigned int *)(*((unsigned int *)this + 3) + 1504) = -1;
        (*(void (**)(unsigned int, unsigned int, unsigned int))(**(unsigned int **)((char *)this + 12) + 1348))(*((unsigned int *)this + 3), 0, 0);
        (*(void (**)(int))(*((unsigned int *)this + 1) + 72))((char *)this + 4);
        *(unsigned char *)(*((unsigned int *)this + 3) + 1674) = 0;
        v9 = *((unsigned int *)this + 3);
        *(unsigned char *)(v9 + 1674) = 0;
        return v9;
      }
      IDA_LOBYTE(v9) = (unsigned char)a2;
      if ( (unsigned char)a2 )
      {
        *(unsigned int *)(*((unsigned int *)this + 3) + 1504) = -1;
        *v3 = g_AsyncMovieState;
        v99 = *(unsigned int **)((char *)this + 12);
        *((unsigned int *)this + 11) = g_abs_B45BEC;
        v99 += 400;
        *((unsigned int *)this + 12) = g_abs_B45BF0;
        *v99 = (unsigned int)(g_abs_A8ED84);
        v99[1] = v161;
        v99[2] = 0;
        IDA_LOBYTE(v9) = VoxelAnim::Draw(0);
      }
    }
  }
  else if ( (uint8_t)((Voxel *)(&v160))->DrawHelper() )
  {
    v100 = *(unsigned char **)((char *)this + 12);
    *((unsigned char *)this + 54) = 1;
    IDA_LOBYTE(v9) = v100[144];
    if ( (unsigned char)v9 )
    {
      v101 = (int *)(*(int (**)(unsigned char *, int *))(*(unsigned int *)v100 + 72))(v100, &v157);
      v102 = *v101;
      a2 = (unsigned int *)*v3;
      IDA_LODWORD(v155) = v102;
      v103 = Math::CalcAngle((double)v101[1] - (double)*((int *)this + 11), (double)(int)a2 - (double)v102);
      v104 = Math::RoundToInt((v103 - 1.570796326794897) * -10430.06004058427);
      v105 = *((unsigned int *)this + 1);
      IDA_LOWORD(a2) = v104;
      (*(void (**)(int, unsigned int *))(v105 + 76))((char *)this + 4, a2);
      (*(void (**)(unsigned int, unsigned int, int))(**(unsigned int **)((char *)this + 12) + 1348))(
        *((unsigned int *)this + 3),
        0,
        1072693248);
      v9 = *((unsigned int *)this + 3);
      *(unsigned char *)(v9 + 1674) = 0;
    }
  }
  else
  {
    (*(void (**)(unsigned int, unsigned int, unsigned int))(**(unsigned int **)((char *)this + 12) + 1348))(*((unsigned int *)this + 3), 0, 0);
    v9 = *((unsigned int *)this + 3);
    *(unsigned char *)(v9 + 1674) = 0;
  }
  return v9;

}
} // namespace gamemd
