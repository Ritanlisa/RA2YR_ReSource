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

  v5 = dword_8469E0[a4]; /*0x758702*/
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
  v9 = dword_8469F4[a4]; /*0x75879c*/
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
        g_VoxelShadeTable[v10] = Math::RoundToInt(v14 * 16.0); /*0x75884a*/
      else
        g_VoxelShadeTable[v10] = 0; /*0x758836*/
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
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  unsigned int *v34; // eax
  int GroundHeight; // esi
  BuildingClass *v58; // ecx
  int *v59; // eax
  unsigned int *v60; // ecx
  int v61; // edi
  int v62; // esi
  unsigned int *v63; // eax
  int v64; // ecx
  int v65; // esi
  void *v66; // eax
  int v67; // esi
  BuildingClass *v77; // edx
  wchar_t *v89; // edi
  wchar_t *v91; // eax
  wchar_t **v92; // edx
  int16_t v104; // ax
  BuildingClass *v105; // ecx
  BuildingClass *v121; // ecx
  int16_t v127; // ax
  BuildingClass *v128; // ecx
  int16_t v129; // si
  unsigned int **v130; // eax
  int v144; // [esp+18h] [ebp-58h]
  int v145; // [esp+1Ch] [ebp-54h]
  int v148; // [esp+20h] [ebp-50h]
  int v151; // [esp+24h] [ebp-4Ch]
  unsigned int * v152;
  double v153; // [esp+3Ch] [ebp-34h] BYREF
  double v154; // [esp+44h] [ebp-2Ch] BYREF
  double v155; // [esp+4Ch] [ebp-24h] BYREF
  int v157; // [esp+58h] [ebp-18h] BYREF
  int v158; // [esp+5Ch] [ebp-14h]
  int v159; // [esp+60h] [ebp-10h]
  int v160; // [esp+64h] [ebp-Ch] BYREF
  int v161; // [esp+68h] [ebp-8h]
  int v162; // [esp+6Ch] [ebp-4h]
  unsigned int * v3 = (unsigned int *)(&this->u32_100);
  if ( this->q0A0 != g_AsyncMovieState
    || this->u32_2C != g_MovieFrameState1
    || this->q00C != g_MovieFrameState2 )
  {
    int v107 = this->q00C;
    unsigned int * v108 = (unsigned int *)*v3;
    int v109 = this->u32_2C;
    this->u8_36 = 1;
    int * v110 = (int *)(*(int (__thiscall **)(int, int *))(*(unsigned int *)v107 + 72))(v107, &v160);
    int v111 = *v110;
    IDA_HIDWORD(v155) = v110[1] - v109;
    IDA_LODWORD(v155) = v111 - (unsigned int)v108;
  double v112; // st7
    v112 = Math::Sqrt((double)(v111 - (int)v108) * (double)(v111 - (int)v108) + (double)IDA_SHIDWORD(v155)
                                                                              * (double)IDA_SHIDWORD(v155));
    int v113 = Math::RoundToInt(v112);
    int v114 = this->q00C;
    if ( v113 < 17 )
    {
      (*(void (__thiscall **)(int, unsigned int))(*(unsigned int *)v114 + 292))(v114, 0);
      int v115 = this->q00C;
      if ( *(unsigned int *)(v115 + 1504) == -1 )
        *(unsigned int *)(v115 + 1508) = -1;
      qmemcpy((void *)(this->q00C + 1504), (const void *)(this->q00C + 1508), 0x5Cu);
      *(unsigned int *)(this->q00C + 1596) = -1;
      (*(void (__thiscall **)(unsigned int, int))(*this->q00C + 436))(this->q00C, &this->u32_100);
      IDA_LOWORD(a2) = *v3 / 256;
      IDA_HIWORD(a2) = this->u32_2C / 256;
      *(unsigned int *)(this->q00C + 1368) = a2;
      (*(void (__thiscall **)(unsigned int, unsigned int))(*this->q00C + 460))(this->q00C, 0);
      *(unsigned char *)(this->q00C + 1719) = 0;
      Voxel::DrawHelper(&g_AsyncMovieState);
      unsigned int v116 =
      if ( v116[376] == -1 )
        (*(void (__thiscall **)(unsigned int *, unsigned int, unsigned int))(*v116 + 1348))(v116, 0, 0);
      (*(void (__thiscall **)(unsigned int, int))(*this->q00C + 396))(this->q00C, 2);
      unsigned int v117 =
      IDA_LOBYTE(v9) = v117[144];
      if ( (unsigned char)v9 )
      {
        IDA_LOBYTE(v9) = v117[129];
        if ( !(unsigned char)v9 )
        {
          IDA_LOBYTE(v9) = v117[141];
          if ( !(unsigned char)v9 )
          {
            if ( this->u32_1C == g_AsyncMovieState
              && this->matrices == g_MovieFrameState1
              && this->q090 == g_MovieFrameState2
  int v118; // esi
              || (v118 = this->u32_1C / 256,
  int v119; // edi
                  v119 = this->matrices / 256,
                  a2 = (unsigned int *)(*(int (__thiscall **)(unsigned char *, int *, unsigned int))(*(unsigned int *)v117 + 76))(v117, &v160, 0),
                  (uint16_t)(*a2 / 256) == (unsigned short)v118)
              && (uint16_t)(a2[1] / 256) == (unsigned short)v119
  int64_t v120; // rax
              && (v120 = *(unsigned int *)((*(int (__thiscall **)(unsigned int, int *, unsigned int))(*this->q00C + 76))(
                                       this->q00C,
                                       &v160,
                                       0)
                                   + 8)
                       - this->q090,
                  (int)((IDA_HIDWORD(v120) ^ v120) - IDA_HIDWORD(v120)) < 2 * DataGlobal_B45C28) )
            {
              (*(void (__thiscall **)(unsigned int, unsigned int, int))(*this->q00C + 1152))(
                this->q00C,
                0,
                1);
              (*(void (__thiscall **)(unsigned int, unsigned int, unsigned int))(*this->q00C + 1348))(
                this->q00C,
                0,
                0);
              *v3 = g_AsyncMovieState;
              this->u32_2C = g_MovieFrameState1;
              v121 = (gamemd::BuildingClass *)(this->num_sections);
              this->q00C = g_MovieFrameState2;
              v121->GetExitCoords&this->u32_10;
              this->u8_36 = 0;
            }
            (*(void (__thiscall **)(unsigned int, int))(*this->q00C + 292))(this->q00C, 1);
            v9 = this->q00C;
            *(unsigned char *)(v9 + 1674) = 0;
          }
        }
      }
      return v9;
    }
    if ( (*(uint8_t (__thiscall **)(int))(*(unsigned int *)v114 + 892))(v114) )
    {
      v9 = this->q00C;
      this->u8_36 = 0;
      *(unsigned char *)(v9 + 1674) = 0;
      return v9;
    }
    (*(void (__thiscall **)(unsigned int, unsigned int, int))(*this->q00C + 1348))(
      this->q00C,
      0,
      1072693248);
    int v122 = (*(int (__thiscall **)(unsigned int))(*this->q00C + 1336))(this->q00C);
    int v123 = this->q00C;
    IDA_LODWORD(v153) = v122;
    *(unsigned char *)(v123 + 1719) = 0;
    int * v124 = (int *)(*(int (__thiscall **)(unsigned int, int *))(*this->q00C + 72))(this->q00C, &v160);
    int v125 = *v124;
    IDA_LODWORD(v155) = *v3;
    IDA_LODWORD(v154) = v125;
    double v126 = Math::CalcAngle((double)v124[1] - (double)this->u32_2C, (double)IDA_SLODWORD(v155) - (double)v125);
    v127 = Math::RoundToInt((v126 - 1.570796326794897) * -10430.06004058427);
    v128 = (gamemd::BuildingClass *)(this->num_sections);
    v129 = v127;
    IDA_LOWORD(v155) = v127;
    v128->TogglePrimaryFactory(&this->u32_10, IDA_LODWORD(v155));
    v130 = (unsigned int **)(*(int (__thiscall **)(unsigned int, double *))(*this->q00C + 440))(
                        this->q00C,
                        &v155);
    int * v131 = (int *)(this->q00C + 156);
    a2 = *v130;
    v160 = *v131;
    v161 = v131[1];
    int v132 = v131[2];
    IDA_LODWORD(v155) = v129 - 0x3FFF;
    v155 = (double)IDA_SLODWORD(v155) * -0.00009587672516830327;
    unsigned int v133 = IDA_HIDWORD(v155);
    v154 = (double)IDA_SLODWORD(v153);
    v153 = (double)v161;
    double v134 = Math::SinCos(v155);
    int v135 = Math::RoundToInt(v153 - v134 * v154);
    double v136 = Math::ArcTan2(COERCE_DOUBLE(IDA___PAIR64__(v133, IDA_LODWORD(v155))));
    v157 = Math::RoundToInt(v136 * v154 + (double)v160);
    v158 = v135;
    v159 = v132;
    IDA_LOWORD(v154) = v157 / 256;
    IDA_WORD1(v154) = v135 / 256;
    v152 = (unsigned int *)IDA_LODWORD(v154);
    if ( a2 == (unsigned int *)IDA_LODWORD(v154) )
    {
      int v141 = this->q00C;
      char v142 = *(unsigned char *)(v141 + 116);
      *(unsigned char *)(v141 + 116) = 0;
      (*(void (__thiscall **)(unsigned int, int *))(*this->q00C + 436))(this->q00C, &v157);
      (*(void (__thiscall **)(unsigned int, unsigned int))(*this->q00C + 460))(this->q00C, 0);
      *(unsigned char *)(this->q00C + 116) = v142;
      v9 = this->q00C;
      *(unsigned char *)(v9 + 1674) = 0;
      return v9;
    }
    (*(void (__thiscall **)(unsigned int, unsigned int))(*this->q00C + 292))(this->q00C, 0);
    (*(void (__thiscall **)(unsigned int, int *))(*this->q00C + 436))(this->q00C, &v157);
    unsigned int * v137 = (unsigned int *)(CellCoord::To_CellObj(&DataGlobal_87F7E8, (int16_t *)&a2));
    unsigned int * v138 = (unsigned int *)(CellCoord::To_CellObj(&DataGlobal_87F7E8, (int16_t *)&v152));
    if ( *((char *)v138 + 283) == *((char *)v137 + 283) - 4 )
    {
      if ( (v138[80] & 0x100) == 0 )
        goto LABEL_120;
      *(unsigned char *)(this->q00C + 140) = 1;
    }
    if ( (v138[80] & 0x100) != 0 )
    {
LABEL_122:
      (*(void (__thiscall **)(unsigned int, unsigned int))(*this->q00C + 460))(this->q00C, 0);
      (*(void (__thiscall **)(unsigned int, int))(*this->q00C + 292))(this->q00C, 1);
      int * v139 = (int *)(this->q00C + 156);
      v160 = *v139;
      v161 = v139[1];
      v162 = v139[2];
      void * v140 = Coord::To_Cell(&DataGlobal_87F7E8, &v160);
      BuildingClass::CreateIdleAnim(v140);
      goto LABEL_123;
    }
LABEL_120:
    if ( (v137[80] & 0x100) != 0 )
      *(unsigned char *)(this->q00C + 140) = 0;
    goto LABEL_122;
  }
  unsigned int * v4 = (unsigned int *)(&this->u32_88);
  if ( this->u32_1C == g_AsyncMovieState
    && this->matrices == g_MovieFrameState1
    && this->q090 == g_MovieFrameState2 )
  {
    unsigned int v106 =
    if ( v106[175] > 0.0 )
    {
      (*(void (__thiscall **)(double *, unsigned int, unsigned int))(*(unsigned int *)v106 + 1348))(v106, 0, 0);
      v9 = this->q00C;
      *(unsigned char *)(v9 + 1674) = 0;
      return v9;
    }
LABEL_123:
    v9 = this->q00C;
    *(unsigned char *)(v9 + 1674) = 0;
    return v9;
  }
  unsigned int * v5 = (unsigned int *)((unsigned int *)(v152 = v5));
  if ( v5[376] != -1 )
    goto LABEL_32;
  int v6 = v5[400];
  unsigned int v7 =
  unsigned int * v8 = v5 + 400;
  if ( v6 == -1 )
    goto LABEL_11;
  if ( (int)g_CurrentFrame - v6 < v7 )
  {
    v7 -= (int)g_CurrentFrame - v6;
    v5 = (unsigned int)(v152);
LABEL_11:
    if ( v7 )
    {
      IDA_LOBYTE(v9) = (*(int (__thiscall **)(unsigned int *))(*v5 + 1352))(v5);
      return v9;
    }
  }
  v10 = Math::RoundToInt(*((double *)g_RulesClass_Instance + 748) * 900.0);
  v11 = v161;
  *v8 = g_CurrentFrame;
  v8[1] = v11;
  v8[2] = v10;
  IDA_LOWORD(v152) = *v4 / 256;
  IDA_HIWORD(v152) = this->matrices / 256;
  if ( !(uint8_t)FootClass::MovementStep(v152, 0, 0) )
  {
    int v12 = this->q00C;
    this->u8_36 = 0;
    if ( (*(uint8_t (__thiscall **)(int, int))(*(unsigned int *)v12 + 716))(v12, &this->u32_88) )
    {
      (*(void (__thiscall **)(unsigned int))(*this->q00C + 1268))(this->q00C);
  unsigned int *v13; // eax
      v13 = (unsigned int *)(*(int (__thiscall **)(unsigned int, int *))(*this->q00C + 72))(
                        this->q00C,
                        &v160);
      unsigned int v14 =
      v157 = *v14;
      v158 = v14[1];
      v159 = v14[2];
      if ( (int)Coord::Length(&v157) >= *((unsigned int *)g_RulesClass_Instance + 1478)
  unsigned char *v15; // ecx
        || (v15 = this->q00C, v15[1048]) )
      {
        int v16 = this->q00C;
        int v17 = *(unsigned int *)(v16 + 1612);
        if ( v17 )
        {
          *(unsigned int *)(v16 + 1612) = v17 - 1;
        }
        else
        {
          if ( *(unsigned char *)(v16 + 1674) )
            PlayVocClass(1.0, 0);
          *(unsigned char *)(this->q00C + 1674) = 0;
          IDA_LOWORD(a2) = *v4 / 256;
          IDA_HIWORD(a2) = this->matrices / 256;
          IDA_LODWORD(v153) = a2;
          unsigned int v18 =
          if ( v18[981] )
          {
            unsigned int * v19 = (unsigned int *)(*(int (__thiscall **)(unsigned char *, int *, unsigned int))(*(unsigned int *)v18 + 76))(v18, &v160, 0);
            IDA_LOWORD(a2) = *v19 / 256;
            unsigned int v20 = (unsigned int)(IDA_HIWORD(a2) = v19[1] / 256);
            unsigned int * v21 = (unsigned int)((unsigned int)((unsigned int)((unsigned int)((unsigned int)((unsigned int)((unsigned int)((unsigned int)((unsigned int)((unsigned int)((unsigned int)((unsigned int)((unsigned int)((unsigned int)((unsigned int)((unsigned int)((unsigned int)(IDA_LODWORD(v154) = a2)))))))))))))))));
            v152 = (unsigned int *)(v20);
            char v149 = (*(int (__thiscall **)(unsigned int *))(*v20 + 800))(v20);
            int v22 = *((unsigned int *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (int16_t *)&v153) + 80) >> 8;
            IDA_LOBYTE(v22) = v22 & 1;
            int v146 = v22;
            int v23 = (*(int (__thiscall **)(unsigned int *))(*v21 + 188))(v21);
            int v24 = (*(int (__thiscall **)(unsigned int *, int))(*v21 + 132))(v21, v23);
            if ( !(uint8_t)MapSeed::CheckTileMatch(&v154, &v153, *(unsigned int *)(v24 + 1460), 0, v146, v149) )
              (*(void (__thiscall **)(unsigned int, unsigned int, int))(*this->q00C + 1152))(
                this->q00C,
                0,
                1);
          }
          int v25 = *(unsigned int *)(this->q00C + 692);
          if ( v25 )
          {
  unsigned int *v26; // eax
            v26 = (unsigned int *)(*(int (__thiscall **)(int, int *, unsigned int))(*(unsigned int *)v25 + 76))(
                              v25,
                              &v160,
                              this->q00C);
            IDA_LOWORD(a2) = *v26 / 256;
            IDA_HIWORD(a2) = v26[1] / 256;
            IDA_LODWORD(v154) = a2;
            int v27 = this->q00C;
            if ( *(unsigned char *)(v27 + 981) )
            {
              if ( *(unsigned int *)(v27 + 692) )
              {
  unsigned int *v28; // eax
                v28 = (unsigned int *)(*(int (__stdcall **)(int *, unsigned int))(*(unsigned int *)v27 + 76))(
                                  &v160,
                                  this->q00C);
                IDA_LOWORD(a2) = *v28 / 256;
                unsigned int * v29 = (unsigned int *)(this->q00C);
                IDA_HIWORD(a2) = v28[1] / 256;
                unsigned int * v30 = (unsigned int)(v29);
                IDA_LODWORD(v155) = a2;
                v152 = (unsigned int)(v29);
                char v150 = (*(int (__thiscall **)(unsigned int *))(*v29 + 800))(v29);
                int v31 = *((unsigned int *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (int16_t *)&v154) + 80) >> 8;
                IDA_LOBYTE(v31) = v31 & 1;
                int v147 = v31;
                int v32 = (*(int (__thiscall **)(unsigned int *))(*v30 + 188))(v30);
                int v33 = (*(int (__thiscall **)(unsigned int *, int))(*v30 + 132))(v30, v32);
                if ( !(uint8_t)MapSeed::CheckTileMatch(&v155, &v154, *(unsigned int *)(v33 + 1460), v30, v147, v150) )
                  (*(void (__thiscall **)(unsigned int, unsigned int))(*this->q00C + 968))(this->q00C, 0);
              }
            }
          }
        }
      }
      else
      {
        (*(void (__thiscall **)(unsigned char *, unsigned int, int))(*(unsigned int *)v15 + 1152))(v15, 0, 1);
      }
      (*(void (__thiscall **)(unsigned int, unsigned int, unsigned int))(*this->q00C + 1348))(this->q00C, 0, 0);
      IDA_LOBYTE(v9) = this->num_sections->vt_slot_72();
      return v9;
    }
LABEL_37:
    IDA_LOBYTE(v9) = (*(int (__thiscall **)(unsigned int, unsigned int, int))(*this->q00C + 1152))(
                   this->q00C,
                   0,
                   1);
    return v9;
  }
  *(unsigned int *)(this->q00C + 1612) = 10;
  IDA_LOBYTE(v9) = (*(int (__thiscall **)(unsigned int))(*this->q00C + 1272))(this->q00C);
  if ( (unsigned char)v9 )
    return v9;
LABEL_32: v34 = (unsigned int *)(this->q00C);
  IDA_LODWORD(v153) = v34[376];
  if ( IDA_LODWORD(v153) == 8 )
  {
    int * v35 = (int *)(v34 + 39);
    v157 = *v35;
    v158 = v35[1];
    v159 = v35[2];
    int v36 = *((int16_t *)Coord::To_Cell(&DataGlobal_87F7E8, &v157) + 139);
    a2 = (unsigned int *)v36;
    if ( v36 >= 0 && v36 < g_Tubes_Count )
    {
      (*(void (__thiscall **)(unsigned int, unsigned int))(*this->q00C + 292))(this->q00C, 0);
      int v37 = this->q00C;
      v155 = *(double *)(v37 + 156);
      int v156 = *(unsigned int *)(v37 + 164);
      (*(void (__thiscall **)(int, double *))(*(unsigned int *)v37 + 244))(v37, &v155);
      unsigned int * v38 = (unsigned int *)*((unsigned int *)g_PathClass_State + (unsigned int)a2);
      IDA_LODWORD(v154) = v38;
      IDA_LODWORD(v155) = v38[10];
      int v39 = IDA_SWORD1(v155) << 8;
      *v3 = (SLOWORD(v155) << 8) + 128;
      int v40 = this->q00C;
      this->u32_2C = v39 + 128;
      this->q00C = 0;
      qmemcpy((void *)(v40 + 1504), (const void *)(v40 + 1508), 0x5Cu);
      *(unsigned int *)(this->q00C + 1596) = -1;
      *(unsigned char *)(this->q00C + 1668) = (unsigned char)a2;
      *(unsigned char *)(this->q00C + 1669) = 0;
      unsigned int * v41 = (unsigned int *)v38[9];
      int v42 = v38[12];
      a2 = v41;
      int v43 = v42 & 7;
      IDA_LODWORD(v155) = v41;
      IDA_LOWORD(a2) = IDA_LOWORD(Direction_X_Offsets[v43]) + (unsigned short)v41;
      IDA_HIWORD(a2) = IDA_HIWORD(v41) + IDA_HIWORD(Direction_X_Offsets[v43]);
      int v44 = ((int16_t)v41 << 8) + 128;
      int v45 = (IDA_SHIWORD(v41) << 8) + 128;
      CellCoord::To_CellObj(&DataGlobal_87F7E8, (int16_t *)&a2);
      unsigned int * v46 = (unsigned int *)CellClass::GetCoords(&v160);
      int v47 = *v46 - v44;
      unsigned int * v48 = this->q00C;
      int v49 = v46[1] - v45;
      int v50 = v46[2];
      unsigned int * v51 = v48 + 39;
      v157 = v48[39];
      int v52 = v48[40];
      v48 += 346;
      int v53 = v52 + v49;
      v159 = v51[2];
      int v54 = v159;
      *v48 = v157 + v47;
      v48[1] = v53;
      v48[2] = v54 + v50;
      int * v55 = (int *)(this->q00C + 156);
      v157 = *v55;
      v158 = v55[1];
      v159 = v55[2];
      GroundHeight = Cell::GetGroundHeight(&v157);
      v159 = 0;
      int v57 = *(unsigned int *)(IDA_LODWORD(v154) + 448);
      a2 = *(unsigned int **)(IDA_LODWORD(v154) + 40);
      v157 = ((int16_t)a2 << 8) + 128;
      v158 = (IDA_SHIWORD(a2) << 8) + 128;
      v9 = GroundHeight + (Cell::GetGroundHeight(&v157) - GroundHeight) / v57;
      *(unsigned int *)(this->q00C + 1392) = v9;
      return v9;
    }
    *(unsigned int *)(this->q00C + 1504) = -1;
    *v3 = g_AsyncMovieState;
    this->u32_2C = g_MovieFrameState1;
    v58 = this->num_sections;
    this->q00C = g_MovieFrameState2;
    v58->GetExitCoords&this->u32_10;
    goto LABEL_37;
  }
  v59 = Coord::Subtract(
          &v157,
          DataGlobal_89F6D8[2 * (IDA_LOBYTE(v153) & 7)] + v34[39],
          v34[40] + DataGlobal_89F6DC[2 * (IDA_LOBYTE(v153) & 7)],
          v34[41]);
  v160 = *v59;
  v161 = v59[1];
  v162 = v59[2];
  IDA_LOWORD(v154) = v160 / 256;
  v60 = (unsigned int *)(this->q00C + 156);
  IDA_WORD1(v154) = v161 / 256;
  v152 = (unsigned int *)IDA_LODWORD(v154);
  v61 = v60[2];
  v62 = v60[1] + DataGlobal_89F6DC[2 * (IDA_LOBYTE(v153) & 7)];
  v157 = *v60 + DataGlobal_89F6D8[2 * (IDA_LOBYTE(v153) & 7)];
  v158 = v62;
  v159 = v61;
  v63 = Coord::To_Cell(&DataGlobal_87F7E8, &v157);
  v64 = this->q00C;
  if ( *(unsigned char *)(v64 + 140) != ((v63[80] >> 8) & 1) )
    *(unsigned char *)(v64 + 1675) = 1;
  v65 = *this->q00C;
  v145 = ObjectClass::GetLandHeight(0, 1);
  v144 = IDA_LODWORD(v153);
  v66 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (int16_t *)&v152);
  v67 = (*(int (__thiscall **)(unsigned int, void *, int, int, int, int))(v65 + 428))(
          this->q00C,
          v66,
          v144,
          v145,
          v148,
          v151);
  if ( v67 )
  {
    int v68 = this->q00C;
    this->u8_36 = 0;
    (*(void (__thiscall **)(int))(*(unsigned int *)v68 + 1352))(v68);
    if ( v67 == 6 )
    {
      unsigned int * v69 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (int16_t *)&v152);
      if ( (unsigned char)a2 )
      {
        *(unsigned int *)(this->q00C + 1504) = -1;
        *v3 = g_AsyncMovieState;
        this->u32_2C = g_MovieFrameState1;
        this->q00C = g_MovieFrameState2;
        unsigned int * v70 = (unsigned int *)(this->q00C + 1600);
        *v70 = g_CurrentFrame;
        v70[1] = v161;
        v70[2] = 0;
        IDA_LOBYTE(v9) = VoxelAnim::Draw(0);
      }
      else
      {
  unsigned int *v71; // eax
        v71 = (unsigned int *)(*(int (__thiscall **)(unsigned int, double *))(*this->q00C + 72))(
                          this->q00C,
                          &v155);
        int v72 = *v71 - this->u32_1C;
        int v73 = v71[1] - this->matrices;
        int v74 = v71[2] - this->q090;
        v157 = v72;
        v158 = v73;
        v159 = v74;
        if ( (int)Coord::Length(&v157) >= *((unsigned int *)g_RulesClass_Instance + 1478)
          || (uint8_t)Team::AllMembersValid(this->q00C)
  int *v75; // ecx
          || (v75 = (int *)(this->q00C + 156),
              v157 = *v75,
              v158 = v75[1],
  int64_t v76; // rax
              v76 = this->q090 - v75[2],
              (int)((IDA_HIDWORD(v76) ^ v76) - IDA_HIDWORD(v76)) >= 2 * DataGlobal_B45C28)
          || (v157 = *v75, v158 = v75[1],
                           v159 = v75[2],
                           *((unsigned int *)Coord::To_Cell(&DataGlobal_87F7E8, &v157) + 59) == 10) )
        {
          if ( (v69[80] & 0x100) == 0
  int *v78; // ecx
            || (v78 = this->q00C,
                IDA_LOBYTE(a2) = 1,
                v78 += 39,
                v157 = *v78,
                v158 = v78[1],
  int64_t v79; // rax
                v79 = v78[2] / DataGlobal_B45C28 - *((char *)v69 + 283),
                (int)((IDA_HIDWORD(v79) ^ v79) - IDA_HIDWORD(v79)) <= 2) )
          {
            IDA_LOBYTE(a2) = 0;
          }
          IDA_LOBYTE(v9) = Cell::ApplyDamage(&g_AsyncMovieState, 1, 1, (char)a2);
        }
        else
        {
          *v3 = g_AsyncMovieState;
          v77 = this->num_sections;
          this->u32_2C = g_MovieFrameState1;
          this->q00C = g_MovieFrameState2;
          v77->GetExitCoords&this->u32_10;
          (*(void (__thiscall **)(unsigned int, unsigned int, unsigned int))(*this->q00C + 1348))(
            this->q00C,
            0,
            0);
          (*(void (__thiscall **)(unsigned int, unsigned int, int))(*this->q00C + 1152))(this->q00C, 0, 1);
          v9 = this->q00C;
          *(unsigned int *)(v9 + 1504) = -1;
        }
      }
      return v9;
    }
    if ( v67 == 2 )
    {
  char v87; // bl
      int v80 = this->q00C;
      if ( !*(unsigned char *)(v80 + 1719) )
      {
        *(unsigned char *)(v80 + 1719) = 1;
        unsigned int * v81 = (unsigned int *)(this->q00C + 1640);
        int v82 = *((unsigned int *)g_RulesClass_Instance + 1498);
        *v81 = g_CurrentFrame;
        v81[1] = v161;
        v81[2] = v82;
      }
      int v83 = this->q00C;
      int v84 = *(unsigned int *)(v83 + 1600);
      v9 = *(unsigned int *)(v83 + 1608);
      if ( v84 != -1 )
      {
        if ( (int)g_CurrentFrame - v84 >= v9 )
          goto LABEL_60;
        v9 -= (int)g_CurrentFrame - v84;
      }
      if ( v9 )
        return v9;
LABEL_60:
      if ( *(unsigned char *)(v83 + 1719) )
      {
        int v85 = *(unsigned int *)(v83 + 1640);
        int v86 = *(unsigned int *)(v83 + 1648);
        if ( v85 != -1 )
        {
          if ( (int)g_CurrentFrame - v85 >= v86 )
          {
LABEL_65:
            v87 = 1;
            goto LABEL_67;
          }
          v86 -= (int)g_CurrentFrame - v85;
        }
        if ( !v86 )
          goto LABEL_65;
      }
      v87 = 0;
LABEL_67:
      IDA_LOWORD(a2) = this->u32_1C / 256;
      IDA_HIWORD(a2) = this->matrices / 256;
      char v88 = FootClass::MovementStep(a2, 0, (v87 != 0) + 1);
      v89 = g_CurrentFrame;
      char v90 = v88;
      v91 = (wchar_t *)Math::RoundToInt(*((double *)g_RulesClass_Instance + 748) * 900.0);
      v92 = (wchar_t **)(this->q00C + 1600);
      *v92 = v89;
      v92[1] = (wchar_t *)v161;
      v92[2] = v91;
      int v93 = this->q00C;
      if ( v90 )
      {
        IDA_LOBYTE(v9) = (*(int (__thiscall **)(int))(*(unsigned int *)v93 + 1272))(v93);
      }
      else if ( (*(uint8_t (__thiscall **)(int, int))(*(unsigned int *)v93 + 716))(v93, &this->u32_88) )
      {
        IDA_LOBYTE(v9) = (*(int (__thiscall **)(unsigned int))(*this->q00C + 1268))(this->q00C);
      }
      else
      {
        IDA_LOBYTE(v9) = (*(int (__thiscall **)(unsigned int, unsigned int, int))(*this->q00C + 1152))(
                       this->q00C,
                       0,
                       1);
      }
      return v9;
    }
    if ( v67 == 3 )
    {
      Cell::IsPassableAllied(this->q00C, &v152);
      v9 = this->q00C;
      *(unsigned int *)(v9 + 1612) = 10;
    }
    else
    {
      if ( v67 == 5 || v67 == 4 )
      {
        v155 = 0.0;
        CellCoord::To_CellObj(&DataGlobal_87F7E8, (int16_t *)&v152);
        int v94 = Object::FindObjectCell(&v155, 0);
        if ( (unsigned char)a2 )
        {
          *(unsigned int *)(this->q00C + 1504) = -1;
          *v3 = g_AsyncMovieState;
          this->u32_2C = g_MovieFrameState1;
          unsigned int * v95 = this->q00C;
          this->q00C = g_MovieFrameState2;
          v95 += 400;
          *v95 = g_CurrentFrame;
          v95[1] = v161;
          v95[2] = 0;
          IDA_LOBYTE(v9) = VoxelAnim::Draw(0);
          return v9;
        }
        if ( v94 )
        {
          if ( !(uint8_t)Object::IsAlliedWithObjectHouse(v94) )
            (*(void (__thiscall **)(unsigned int, int, int, unsigned int))(*this->q00C + 500))(
              this->q00C,
              1,
              v94,
              0);
        }
        else if ( *((unsigned int *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (int16_t *)&v152) + 17) != -1
               && *(unsigned char *)(*((unsigned int *)g_BuildingTypeClass_Array
                             + *((unsigned int *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (int16_t *)&v152) + 17))
                           + 680) )
        {
          int v96 = *this->q00C;
          void * v97 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (int16_t *)&v152);
          (*(void (__thiscall **)(unsigned int, int, void *, unsigned int))(v96 + 500))(this->q00C, 1, v97, 0);
        }
      }
      if ( v67 == 1 )
      {
        void * v98 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (int16_t *)&v152);
        CellClass::DamageAllObjects(v98);
      }
      else if ( v67 != 7 )
      {
        *(unsigned int *)(this->q00C + 1504) = -1;
        (*(void (__thiscall **)(unsigned int, unsigned int, unsigned int))(*this->q00C + 1348))(this->q00C, 0, 0);
        this->num_sections->vt_slot_72();
        *(unsigned char *)(this->q00C + 1674) = 0;
        v9 = this->q00C;
        *(unsigned char *)(v9 + 1674) = 0;
        return v9;
      }
      IDA_LOBYTE(v9) = (unsigned char)a2;
      if ( (unsigned char)a2 )
      {
        *(unsigned int *)(this->q00C + 1504) = -1;
        *v3 = g_AsyncMovieState;
        unsigned int * v99 = this->q00C;
        this->u32_2C = g_MovieFrameState1;
        v99 += 400;
        this->q00C = g_MovieFrameState2;
        *v99 = g_CurrentFrame;
        v99[1] = v161;
        v99[2] = 0;
        IDA_LOBYTE(v9) = VoxelAnim::Draw(0);
      }
    }
  }
  else if ( (uint8_t)Voxel::DrawHelper(&v160) )
  {
    unsigned char * v100 = this->q00C;
    this->u8_36 = 1;
    IDA_LOBYTE(v9) = v100[144];
    if ( (unsigned char)v9 )
    {
      int * v101 = (int *)(*(int (__thiscall **)(unsigned char *, int *))(*(unsigned int *)v100 + 72))(v100, &v157);
      int v102 = *v101;
      a2 = (unsigned int *)*v3;
      IDA_LODWORD(v155) = v102;
      double v103 = Math::CalcAngle((double)v101[1] - (double)this->u32_2C, (double)(int)a2 - (double)v102);
      v104 = Math::RoundToInt((v103 - 1.570796326794897) * -10430.06004058427);
      v105 = this->num_sections;
      IDA_LOWORD(a2) = v104;
      v105->TogglePrimaryFactory(&this->u32_10, a2);
      (*(void (__thiscall **)(unsigned int, unsigned int, int))(*this->q00C + 1348))(
        this->q00C,
        0,
        1072693248);
      v9 = this->q00C;
      *(unsigned char *)(v9 + 1674) = 0;
    }
  }
  else
  {
    (*(void (__thiscall **)(unsigned int, unsigned int, unsigned int))(*this->q00C + 1348))(this->q00C, 0, 0);
    v9 = this->q00C;
    *(unsigned char *)(v9 + 1674) = 0;
  }
  return v9;
}
} // namespace gamemd
