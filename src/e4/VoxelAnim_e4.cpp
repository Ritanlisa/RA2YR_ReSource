// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Team_e4.hpp"
#include "e4/classes/Voxel_e4.hpp"

// 0x7586F0
int VoxelAnim::ComputeTransform(float * a1, float * a2, float a3, int a4)
{
{
  float v8; // edx
  int v9; // ebx
  int v10; // edi
  float v16; // [esp+18h] [ebp-24h]
  float v17; // [esp+1Ch] [ebp-20h]
  float v18; // [esp+20h] [ebp-1Ch]
  float v19; // [esp+24h] [ebp-18h]
  float v20; // [esp+28h] [ebp-14h]
  float v21; // [esp+2Ch] [ebp-10h]
  ObjectClass *v5 = dword_8469E0[a4]; /*0x758702*/
  v16 = *a1 + *a2; /*0x75870c*/
  v17 = a2[1] + a1[1]; /*0x758716*/
  double v6 = a2[2] + a1[2]; /*0x75871d*/
  v18 = v6; /*0x758720*/
  double v7 = Math::Sqrt(v6 * v18 + v16 * v16 + v17 * v17); /*0x75873f*/
  if ( v7 == 0.0 ) /*0x758752*/
  {
    v8 = v18; /*0x75878e*/
    v19 = v16; /*0x758792*/
    v20 = v17; /*0x758798*/
  }
  else
  {
    float v22 = v16 / v7; /*0x75875a*/
    v19 = v22; /*0x758768*/
    float v23 = v17 / v7; /*0x75876c*/
    v20 = v23; /*0x758778*/
    float v24 = v18 / v7; /*0x75877c*/
    v8 = v24; /*0x758780*/
  }
  v9 = dword_8469F4[a4]; /*0x75879c*/
  v10 = 0; /*0x7587a3*/
  v21 = v8; /*0x7587a7*/
  if ( v9 > 0 ) /*0x7587ab*/
  {
    float * v11 = (float *)(v5 + 4); /*0x7587b1*/
    do /*0x758856*/
    {
      double v12 = v11[1] * a1[2] + *v11 * a1[1] + *(v11 - 1) * *a1; /*0x7587c7*/
      double v13 = v19 * *(v11 - 1) + v20 * *v11 + v21 * v11[1]; /*0x7587df*/
      float v25 = v13 / (a3 - v13 * a3 + v13); /*0x7587ef*/
      if ( v25 < 0.0 ) /*0x758804*/
        v25 = 0.0; /*0x758806*/
      if ( v12 < 0.0 ) /*0x758819*/
        v12 = 0.0; /*0x75881d*/
      double v14 = v12 + v25; /*0x758823*/
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

// 0x75AEC0
int VoxelAnim::Draw(unsigned int * a2)
{
{
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  _DWORD *v34; // eax
  int GroundHeight; // esi
  BuildingClass *v58; // ecx
  int *v59; // eax
  _DWORD *v60; // ecx
  int v61; // edi
  int v62; // esi
  _DWORD *v63; // eax
  int v64; // ecx
  int v65; // esi
  void *v66; // eax
  int v67; // esi
  BuildingClass *v77; // edx
  wchar_t *v89; // edi
  wchar_t *v91; // eax
  wchar_t **v92; // edx
  __int16 v104; // ax
  BuildingClass *v105; // ecx
  BuildingClass *v121; // ecx
  __int16 v127; // ax
  BuildingClass *v128; // ecx
  __int16 v129; // si
  _DWORD **v130; // eax
  int v144; // [esp+18h] [ebp-58h]
  int v145; // [esp+1Ch] [ebp-54h]
  int v148; // [esp+20h] [ebp-50h]
  int v151; // [esp+24h] [ebp-4Ch]
  _DWORD *v152; // [esp+38h] [ebp-38h] BYREF
  double v153; // [esp+3Ch] [ebp-34h] BYREF
  double v154; // [esp+44h] [ebp-2Ch] BYREF
  double v155; // [esp+4Ch] [ebp-24h] BYREF
  int v157; // [esp+58h] [ebp-18h] BYREF
  int v158; // [esp+5Ch] [ebp-14h]
  int v159; // [esp+60h] [ebp-10h]
  int v160; // [esp+64h] [ebp-Ch] BYREF
  int v161; // [esp+68h] [ebp-8h]
  int v162; // [esp+6Ch] [ebp-4h]
  _DWORD * v3 = (_DWORD *)(this + 40);
  if ( this->q0A0 != g_AsyncMovieState
    || *(_DWORD *)(this + 44) != g_MovieFrameState1
    || this->q00C != g_MovieFrameState2 )
  {
    int v107 = this->q00C;
    _DWORD * v108 = (_DWORD *)*v3;
    int v109 = *(_DWORD *)(this + 44);
    *(_BYTE *)(this + 54) = 1;
    int * v110 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v107 + 72))(v107, &v160);
    int v111 = *v110;
    HIDWORD(v155) = v110[1] - v109;
    LODWORD(v155) = v111 - (_DWORD)v108;
  double v112; // st7
    v112 = Math::Sqrt((double)(v111 - (int)v108) * (double)(v111 - (int)v108) + (double)SHIDWORD(v155)
                                                                              * (double)SHIDWORD(v155));
    int v113 = Math::RoundToInt(v112);
    int v114 = this->q00C;
    if ( v113 < 17 )
    {
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v114 + 292))(v114, 0);
      int v115 = this->q00C;
      if ( *(_DWORD *)(v115 + 1504) == -1 )
        *(_DWORD *)(v115 + 1508) = -1;
      qmemcpy((void *)(this->q00C + 1504), (const void *)(this->q00C + 1508), 0x5Cu);
      *(_DWORD *)(this->q00C + 1596) = -1;
      (*(void (__thiscall **)(_DWORD, int))(*this->q00C + 436))(this->q00C, this + 40);
      LOWORD(a2) = *v3 / 256;
      HIWORD(a2) = *(_DWORD *)(this + 44) / 256;
      *(_DWORD *)(this->q00C + 1368) = a2;
      (*(void (__thiscall **)(_DWORD, _DWORD))(*this->q00C + 460))(this->q00C, 0);
      *(_BYTE *)(this->q00C + 1719) = 0;
      Voxel::DrawHelper(&g_AsyncMovieState);
      _DWORD * v116 = this->q00C;
      if ( v116[376] == -1 )
        (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*v116 + 1348))(v116, 0, 0);
      (*(void (__thiscall **)(_DWORD, int))(*this->q00C + 396))(this->q00C, 2);
      _BYTE * v117 = this->q00C;
      LOBYTE(v9) = v117[144];
      if ( (_BYTE)v9 )
      {
        LOBYTE(v9) = v117[129];
        if ( !(_BYTE)v9 )
        {
          LOBYTE(v9) = v117[141];
          if ( !(_BYTE)v9 )
          {
            if ( *(_DWORD *)(this + 28) == g_AsyncMovieState
              && this->matrices == g_MovieFrameState1
              && this->q090 == g_MovieFrameState2
  int v118; // esi
              || (v118 = *(_DWORD *)(this + 28) / 256,
  int v119; // edi
                  v119 = this->matrices / 256,
                  a2 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, int *, _DWORD))(*(_DWORD *)v117 + 76))(v117, &v160, 0),
                  (unsigned __int16)(*a2 / 256) == (_WORD)v118)
              && (unsigned __int16)(a2[1] / 256) == (_WORD)v119
  __int64 v120; // rax
              && (v120 = *(_DWORD *)((*(int (__thiscall **)(_DWORD, int *, _DWORD))(*this->q00C + 76))(
                                       this->q00C,
                                       &v160,
                                       0)
                                   + 8)
                       - this->q090,
                  (int)((HIDWORD(v120) ^ v120) - HIDWORD(v120)) < 2 * DataGlobal_B45C28) )
            {
              (*(void (__thiscall **)(_DWORD, _DWORD, int))(*this->q00C + 1152))(
                this->q00C,
                0,
                1);
              (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(*this->q00C + 1348))(
                this->q00C,
                0,
                0);
              *v3 = g_AsyncMovieState;
              *(_DWORD *)(this + 44) = g_MovieFrameState1;
              v121 = this->num_sections;
              this->q00C = g_MovieFrameState2;
              v121->GetExitCoords(this + 4);
              *(_BYTE *)(this + 54) = 0;
            }
            (*(void (__thiscall **)(_DWORD, int))(*this->q00C + 292))(this->q00C, 1);
            v9 = this->q00C;
            *(_BYTE *)(v9 + 1674) = 0;
          }
        }
      }
      return v9;
    }
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v114 + 892))(v114) )
    {
      v9 = this->q00C;
      *(_BYTE *)(this + 54) = 0;
      *(_BYTE *)(v9 + 1674) = 0;
      return v9;
    }
    (*(void (__thiscall **)(_DWORD, _DWORD, int))(*this->q00C + 1348))(
      this->q00C,
      0,
      1072693248);
    int v122 = (*(int (__thiscall **)(_DWORD))(*this->q00C + 1336))(this->q00C);
    int v123 = this->q00C;
    LODWORD(v153) = v122;
    *(_BYTE *)(v123 + 1719) = 0;
    int * v124 = (int *)(*(int (__thiscall **)(_DWORD, int *))(*this->q00C + 72))(this->q00C, &v160);
    int v125 = *v124;
    LODWORD(v155) = *v3;
    LODWORD(v154) = v125;
    double v126 = Math::CalcAngle((double)v124[1] - (double)*(int *)(this + 44), (double)SLODWORD(v155) - (double)v125);
    v127 = Math::RoundToInt((v126 - 1.570796326794897) * -10430.06004058427);
    v128 = this->num_sections;
    v129 = v127;
    LOWORD(v155) = v127;
    v128->TogglePrimaryFactory(this + 4, LODWORD(v155));
    v130 = (_DWORD **)(*(int (__thiscall **)(_DWORD, double *))(*this->q00C + 440))(
                        this->q00C,
                        &v155);
    int * v131 = (int *)(this->q00C + 156);
    a2 = *v130;
    v160 = *v131;
    v161 = v131[1];
    int v132 = v131[2];
    LODWORD(v155) = v129 - 0x3FFF;
    v155 = (double)SLODWORD(v155) * -0.00009587672516830327;
    unsigned int v133 = HIDWORD(v155);
    v154 = (double)SLODWORD(v153);
    v153 = (double)v161;
    double v134 = Math::SinCos(v155);
    int v135 = Math::RoundToInt(v153 - v134 * v154);
    double v136 = Math::ArcTan2(COERCE_DOUBLE(__PAIR64__(v133, LODWORD(v155))));
    v157 = Math::RoundToInt(v136 * v154 + (double)v160);
    v158 = v135;
    v159 = v132;
    LOWORD(v154) = v157 / 256;
    WORD1(v154) = v135 / 256;
    v152 = (_DWORD *)LODWORD(v154);
    if ( a2 == (_DWORD *)LODWORD(v154) )
    {
      int v141 = this->q00C;
      char v142 = *(_BYTE *)(v141 + 116);
      *(_BYTE *)(v141 + 116) = 0;
      (*(void (__thiscall **)(_DWORD, int *))(*this->q00C + 436))(this->q00C, &v157);
      (*(void (__thiscall **)(_DWORD, _DWORD))(*this->q00C + 460))(this->q00C, 0);
      *(_BYTE *)(this->q00C + 116) = v142;
      v9 = this->q00C;
      *(_BYTE *)(v9 + 1674) = 0;
      return v9;
    }
    (*(void (__thiscall **)(_DWORD, _DWORD))(*this->q00C + 292))(this->q00C, 0);
    (*(void (__thiscall **)(_DWORD, int *))(*this->q00C + 436))(this->q00C, &v157);
    _DWORD * v137 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&a2);
    _DWORD * v138 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v152);
    if ( *((char *)v138 + 283) == *((char *)v137 + 283) - 4 )
    {
      if ( (v138[80] & 0x100) == 0 )
        goto LABEL_120;
      *(_BYTE *)(this->q00C + 140) = 1;
    }
    if ( (v138[80] & 0x100) != 0 )
    {
LABEL_122:
      (*(void (__thiscall **)(_DWORD, _DWORD))(*this->q00C + 460))(this->q00C, 0);
      (*(void (__thiscall **)(_DWORD, int))(*this->q00C + 292))(this->q00C, 1);
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
      *(_BYTE *)(this->q00C + 140) = 0;
    goto LABEL_122;
  }
  _DWORD * v4 = (_DWORD *)(this + 28);
  if ( *(_DWORD *)(this + 28) == g_AsyncMovieState
    && this->matrices == g_MovieFrameState1
    && this->q090 == g_MovieFrameState2 )
  {
    double * v106 = this->q00C;
    if ( v106[175] > 0.0 )
    {
      (*(void (__thiscall **)(double *, _DWORD, _DWORD))(*(_DWORD *)v106 + 1348))(v106, 0, 0);
      v9 = this->q00C;
      *(_BYTE *)(v9 + 1674) = 0;
      return v9;
    }
LABEL_123:
    v9 = this->q00C;
    *(_BYTE *)(v9 + 1674) = 0;
    return v9;
  }
  _DWORD * v5 = this->q00C;
  v152 = v5;
  if ( v5[376] != -1 )
    goto LABEL_32;
  int v6 = v5[400];
  int v7 = v5[402];
  _DWORD * v8 = v5 + 400;
  if ( v6 == -1 )
    goto LABEL_11;
  if ( (int)g_CurrentFrame - v6 < v7 )
  {
    v7 -= (int)g_CurrentFrame - v6;
    v5 = v152;
LABEL_11:
    if ( v7 )
    {
      LOBYTE(v9) = (*(int (__thiscall **)(_DWORD *))(*v5 + 1352))(v5);
      return v9;
    }
  }
  v10 = Math::RoundToInt(*((double *)g_RulesClass_Instance + 748) * 900.0);
  v11 = v161;
  *v8 = g_CurrentFrame;
  v8[1] = v11;
  v8[2] = v10;
  LOWORD(v152) = *v4 / 256;
  HIWORD(v152) = this->matrices / 256;
  if ( !(unsigned __int8)FootClass::MovementStep(v152, 0, 0) )
  {
    int v12 = this->q00C;
    *(_BYTE *)(this + 54) = 0;
    if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v12 + 716))(v12, this + 28) )
    {
      (*(void (__thiscall **)(_DWORD))(*this->q00C + 1268))(this->q00C);
  _DWORD *v13; // eax
      v13 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int *))(*this->q00C + 72))(
                        this->q00C,
                        &v160);
      int * v14 = Coord::Subtract(&v155, *v13 - *v4, v13[1] - this->matrices, v13[2] - this->q090);
      v157 = *v14;
      v158 = v14[1];
      v159 = v14[2];
      if ( (int)Coord::Length(&v157) >= *((_DWORD *)g_RulesClass_Instance + 1478)
  _BYTE *v15; // ecx
        || (v15 = this->q00C, v15[1048]) )
      {
        int v16 = this->q00C;
        int v17 = *(_DWORD *)(v16 + 1612);
        if ( v17 )
        {
          *(_DWORD *)(v16 + 1612) = v17 - 1;
        }
        else
        {
          if ( *(_BYTE *)(v16 + 1674) )
            PlayVocClass(1.0, 0);
          *(_BYTE *)(this->q00C + 1674) = 0;
          LOWORD(a2) = *v4 / 256;
          HIWORD(a2) = this->matrices / 256;
          LODWORD(v153) = a2;
          _BYTE * v18 = this->q00C;
          if ( v18[981] )
          {
            _DWORD * v19 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, int *, _DWORD))(*(_DWORD *)v18 + 76))(v18, &v160, 0);
            LOWORD(a2) = *v19 / 256;
            _DWORD * v20 = this->q00C;
            HIWORD(a2) = v19[1] / 256;
            _DWORD * v21 = v20;
            LODWORD(v154) = a2;
            v152 = v20;
            char v149 = (*(int (__thiscall **)(_DWORD *))(*v20 + 800))(v20);
            int v22 = *((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v153) + 80) >> 8;
            LOBYTE(v22) = v22 & 1;
            int v146 = v22;
            int v23 = (*(int (__thiscall **)(_DWORD *))(*v21 + 188))(v21);
            int v24 = (*(int (__thiscall **)(_DWORD *, int))(*v21 + 132))(v21, v23);
            if ( !(unsigned __int8)MapSeed::CheckTileMatch(&v154, &v153, *(_DWORD *)(v24 + 1460), 0, v146, v149) )
              (*(void (__thiscall **)(_DWORD, _DWORD, int))(*this->q00C + 1152))(
                this->q00C,
                0,
                1);
          }
          int v25 = *(_DWORD *)(this->q00C + 692);
          if ( v25 )
          {
  _DWORD *v26; // eax
            v26 = (_DWORD *)(*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v25 + 76))(
                              v25,
                              &v160,
                              this->q00C);
            LOWORD(a2) = *v26 / 256;
            HIWORD(a2) = v26[1] / 256;
            LODWORD(v154) = a2;
            int v27 = this->q00C;
            if ( *(_BYTE *)(v27 + 981) )
            {
              if ( *(_DWORD *)(v27 + 692) )
              {
  _DWORD *v28; // eax
                v28 = (_DWORD *)(*(int (__stdcall **)(int *, _DWORD))(*(_DWORD *)v27 + 76))(
                                  &v160,
                                  this->q00C);
                LOWORD(a2) = *v28 / 256;
                _DWORD * v29 = this->q00C;
                HIWORD(a2) = v28[1] / 256;
                _DWORD * v30 = v29;
                LODWORD(v155) = a2;
                v152 = v29;
                char v150 = (*(int (__thiscall **)(_DWORD *))(*v29 + 800))(v29);
                int v31 = *((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v154) + 80) >> 8;
                LOBYTE(v31) = v31 & 1;
                int v147 = v31;
                int v32 = (*(int (__thiscall **)(_DWORD *))(*v30 + 188))(v30);
                int v33 = (*(int (__thiscall **)(_DWORD *, int))(*v30 + 132))(v30, v32);
                if ( !(unsigned __int8)MapSeed::CheckTileMatch(&v155, &v154, *(_DWORD *)(v33 + 1460), v30, v147, v150) )
                  (*(void (__thiscall **)(_DWORD, _DWORD))(*this->q00C + 968))(this->q00C, 0);
              }
            }
          }
        }
      }
      else
      {
        (*(void (__thiscall **)(_BYTE *, _DWORD, int))(*(_DWORD *)v15 + 1152))(v15, 0, 1);
      }
      (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(*this->q00C + 1348))(this->q00C, 0, 0);
      LOBYTE(v9) = this->num_sections->vt_slot_72();
      return v9;
    }
LABEL_37:
    LOBYTE(v9) = (*(int (__thiscall **)(_DWORD, _DWORD, int))(*this->q00C + 1152))(
                   this->q00C,
                   0,
                   1);
    return v9;
  }
  *(_DWORD *)(this->q00C + 1612) = 10;
  LOBYTE(v9) = (*(int (__thiscall **)(_DWORD))(*this->q00C + 1272))(this->q00C);
  if ( (_BYTE)v9 )
    return v9;
LABEL_32:
  v34 = this->q00C;
  LODWORD(v153) = v34[376];
  if ( LODWORD(v153) == 8 )
  {
    int * v35 = v34 + 39;
    v157 = *v35;
    v158 = v35[1];
    v159 = v35[2];
    int v36 = *((__int16 *)Coord::To_Cell(&DataGlobal_87F7E8, &v157) + 139);
    a2 = (_DWORD *)v36;
    if ( v36 >= 0 && v36 < g_Tubes_Count )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*this->q00C + 292))(this->q00C, 0);
      int v37 = this->q00C;
      v155 = *(double *)(v37 + 156);
      int v156 = *(_DWORD *)(v37 + 164);
      (*(void (__thiscall **)(int, double *))(*(_DWORD *)v37 + 244))(v37, &v155);
      _DWORD * v38 = (_DWORD *)*((_DWORD *)g_PathClass_State + (_DWORD)a2);
      LODWORD(v154) = v38;
      LODWORD(v155) = v38[10];
      int v39 = SWORD1(v155) << 8;
      *v3 = (SLOWORD(v155) << 8) + 128;
      int v40 = this->q00C;
      *(_DWORD *)(this + 44) = v39 + 128;
      this->q00C = 0;
      qmemcpy((void *)(v40 + 1504), (const void *)(v40 + 1508), 0x5Cu);
      *(_DWORD *)(this->q00C + 1596) = -1;
      *(_BYTE *)(this->q00C + 1668) = (_BYTE)a2;
      *(_BYTE *)(this->q00C + 1669) = 0;
      _DWORD * v41 = (_DWORD *)v38[9];
      int v42 = v38[12];
      a2 = v41;
      int v43 = v42 & 7;
      LODWORD(v155) = v41;
      LOWORD(a2) = LOWORD(Direction_X_Offsets[v43]) + (_WORD)v41;
      HIWORD(a2) = HIWORD(v41) + HIWORD(Direction_X_Offsets[v43]);
      int v44 = ((__int16)v41 << 8) + 128;
      int v45 = (SHIWORD(v41) << 8) + 128;
      CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&a2);
      _DWORD * v46 = (_DWORD *)CellClass::GetCoords(&v160);
      int v47 = *v46 - v44;
      _DWORD * v48 = this->q00C;
      int v49 = v46[1] - v45;
      int v50 = v46[2];
      _DWORD * v51 = v48 + 39;
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
      int v57 = *(_DWORD *)(LODWORD(v154) + 448);
      a2 = *(_DWORD **)(LODWORD(v154) + 40);
      v157 = ((__int16)a2 << 8) + 128;
      v158 = (SHIWORD(a2) << 8) + 128;
      v9 = GroundHeight + (Cell::GetGroundHeight(&v157) - GroundHeight) / v57;
      *(_DWORD *)(this->q00C + 1392) = v9;
      return v9;
    }
    *(_DWORD *)(this->q00C + 1504) = -1;
    *v3 = g_AsyncMovieState;
    *(_DWORD *)(this + 44) = g_MovieFrameState1;
    v58 = this->num_sections;
    this->q00C = g_MovieFrameState2;
    v58->GetExitCoords(this + 4);
    goto LABEL_37;
  }
  v59 = Coord::Subtract(
          &v157,
          DataGlobal_89F6D8[2 * (LOBYTE(v153) & 7)] + v34[39],
          v34[40] + DataGlobal_89F6DC[2 * (LOBYTE(v153) & 7)],
          v34[41]);
  v160 = *v59;
  v161 = v59[1];
  v162 = v59[2];
  LOWORD(v154) = v160 / 256;
  v60 = (_DWORD *)(this->q00C + 156);
  WORD1(v154) = v161 / 256;
  v152 = (_DWORD *)LODWORD(v154);
  v61 = v60[2];
  v62 = v60[1] + DataGlobal_89F6DC[2 * (LOBYTE(v153) & 7)];
  v157 = *v60 + DataGlobal_89F6D8[2 * (LOBYTE(v153) & 7)];
  v158 = v62;
  v159 = v61;
  v63 = Coord::To_Cell(&DataGlobal_87F7E8, &v157);
  v64 = this->q00C;
  if ( *(_BYTE *)(v64 + 140) != ((v63[80] >> 8) & 1) )
    *(_BYTE *)(v64 + 1675) = 1;
  v65 = *this->q00C;
  v145 = ObjectClass::GetLandHeight(0, 1);
  v144 = LODWORD(v153);
  v66 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v152);
  v67 = (*(int (__thiscall **)(_DWORD, void *, int, int, int, int))(v65 + 428))(
          this->q00C,
          v66,
          v144,
          v145,
          v148,
          v151);
  if ( v67 )
  {
    int v68 = this->q00C;
    *(_BYTE *)(this + 54) = 0;
    (*(void (__thiscall **)(int))(*(_DWORD *)v68 + 1352))(v68);
    if ( v67 == 6 )
    {
      _DWORD * v69 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v152);
      if ( (_BYTE)a2 )
      {
        *(_DWORD *)(this->q00C + 1504) = -1;
        *v3 = g_AsyncMovieState;
        *(_DWORD *)(this + 44) = g_MovieFrameState1;
        this->q00C = g_MovieFrameState2;
        _DWORD * v70 = (_DWORD *)(this->q00C + 1600);
        *v70 = g_CurrentFrame;
        v70[1] = v161;
        v70[2] = 0;
        LOBYTE(v9) = VoxelAnim::Draw(0);
      }
      else
      {
  _DWORD *v71; // eax
        v71 = (_DWORD *)(*(int (__thiscall **)(_DWORD, double *))(*this->q00C + 72))(
                          this->q00C,
                          &v155);
        int v72 = *v71 - *(_DWORD *)(this + 28);
        int v73 = v71[1] - this->matrices;
        int v74 = v71[2] - this->q090;
        v157 = v72;
        v158 = v73;
        v159 = v74;
        if ( (int)Coord::Length(&v157) >= *((_DWORD *)g_RulesClass_Instance + 1478)
          || (unsigned __int8)Team::AllMembersValid(this->q00C)
  int *v75; // ecx
          || (v75 = (int *)(this->q00C + 156),
              v157 = *v75,
              v158 = v75[1],
  __int64 v76; // rax
              v76 = this->q090 - v75[2],
              (int)((HIDWORD(v76) ^ v76) - HIDWORD(v76)) >= 2 * DataGlobal_B45C28)
          || (v157 = *v75, v158 = v75[1],
                           v159 = v75[2],
                           *((_DWORD *)Coord::To_Cell(&DataGlobal_87F7E8, &v157) + 59) == 10) )
        {
          if ( (v69[80] & 0x100) == 0
  int *v78; // ecx
            || (v78 = this->q00C,
                LOBYTE(a2) = 1,
                v78 += 39,
                v157 = *v78,
                v158 = v78[1],
  __int64 v79; // rax
                v79 = v78[2] / DataGlobal_B45C28 - *((char *)v69 + 283),
                (int)((HIDWORD(v79) ^ v79) - HIDWORD(v79)) <= 2) )
          {
            LOBYTE(a2) = 0;
          }
          LOBYTE(v9) = Cell::ApplyDamage(&g_AsyncMovieState, 1, 1, (char)a2);
        }
        else
        {
          *v3 = g_AsyncMovieState;
          v77 = this->num_sections;
          *(_DWORD *)(this + 44) = g_MovieFrameState1;
          this->q00C = g_MovieFrameState2;
          v77->GetExitCoords(this + 4);
          (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(*this->q00C + 1348))(
            this->q00C,
            0,
            0);
          (*(void (__thiscall **)(_DWORD, _DWORD, int))(*this->q00C + 1152))(this->q00C, 0, 1);
          v9 = this->q00C;
          *(_DWORD *)(v9 + 1504) = -1;
        }
      }
      return v9;
    }
    if ( v67 == 2 )
    {
  char v87; // bl
      int v80 = this->q00C;
      if ( !*(_BYTE *)(v80 + 1719) )
      {
        *(_BYTE *)(v80 + 1719) = 1;
        _DWORD * v81 = (_DWORD *)(this->q00C + 1640);
        int v82 = *((_DWORD *)g_RulesClass_Instance + 1498);
        *v81 = g_CurrentFrame;
        v81[1] = v161;
        v81[2] = v82;
      }
      int v83 = this->q00C;
      int v84 = *(_DWORD *)(v83 + 1600);
      v9 = *(_DWORD *)(v83 + 1608);
      if ( v84 != -1 )
      {
        if ( (int)g_CurrentFrame - v84 >= v9 )
          goto LABEL_60;
        v9 -= (int)g_CurrentFrame - v84;
      }
      if ( v9 )
        return v9;
LABEL_60:
      if ( *(_BYTE *)(v83 + 1719) )
      {
        int v85 = *(_DWORD *)(v83 + 1640);
        int v86 = *(_DWORD *)(v83 + 1648);
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
      LOWORD(a2) = *(_DWORD *)(this + 28) / 256;
      HIWORD(a2) = this->matrices / 256;
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
        LOBYTE(v9) = (*(int (__thiscall **)(int))(*(_DWORD *)v93 + 1272))(v93);
      }
      else if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v93 + 716))(v93, this + 28) )
      {
        LOBYTE(v9) = (*(int (__thiscall **)(_DWORD))(*this->q00C + 1268))(this->q00C);
      }
      else
      {
        LOBYTE(v9) = (*(int (__thiscall **)(_DWORD, _DWORD, int))(*this->q00C + 1152))(
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
      *(_DWORD *)(v9 + 1612) = 10;
    }
    else
    {
      if ( v67 == 5 || v67 == 4 )
      {
        v155 = 0.0;
        CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v152);
        int v94 = Object::FindObjectCell(&v155, 0);
        if ( (_BYTE)a2 )
        {
          *(_DWORD *)(this->q00C + 1504) = -1;
          *v3 = g_AsyncMovieState;
          *(_DWORD *)(this + 44) = g_MovieFrameState1;
          _DWORD * v95 = this->q00C;
          this->q00C = g_MovieFrameState2;
          v95 += 400;
          *v95 = g_CurrentFrame;
          v95[1] = v161;
          v95[2] = 0;
          LOBYTE(v9) = VoxelAnim::Draw(0);
          return v9;
        }
        if ( v94 )
        {
          if ( !(unsigned __int8)Object::IsAlliedWithObjectHouse(v94) )
            (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(*this->q00C + 500))(
              this->q00C,
              1,
              v94,
              0);
        }
        else if ( *((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v152) + 17) != -1
               && *(_BYTE *)(*((_DWORD *)g_BuildingTypeClass_Array
                             + *((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v152) + 17))
                           + 680) )
        {
          int v96 = *this->q00C;
          void * v97 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v152);
          (*(void (__thiscall **)(_DWORD, int, void *, _DWORD))(v96 + 500))(this->q00C, 1, v97, 0);
        }
      }
      if ( v67 == 1 )
      {
        void * v98 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v152);
        CellClass::DamageAllObjects(v98);
      }
      else if ( v67 != 7 )
      {
        *(_DWORD *)(this->q00C + 1504) = -1;
        (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(*this->q00C + 1348))(this->q00C, 0, 0);
        this->num_sections->vt_slot_72();
        *(_BYTE *)(this->q00C + 1674) = 0;
        v9 = this->q00C;
        *(_BYTE *)(v9 + 1674) = 0;
        return v9;
      }
      LOBYTE(v9) = (_BYTE)a2;
      if ( (_BYTE)a2 )
      {
        *(_DWORD *)(this->q00C + 1504) = -1;
        *v3 = g_AsyncMovieState;
        _DWORD * v99 = this->q00C;
        *(_DWORD *)(this + 44) = g_MovieFrameState1;
        v99 += 400;
        this->q00C = g_MovieFrameState2;
        *v99 = g_CurrentFrame;
        v99[1] = v161;
        v99[2] = 0;
        LOBYTE(v9) = VoxelAnim::Draw(0);
      }
    }
  }
  else if ( (unsigned __int8)Voxel::DrawHelper(&v160) )
  {
    _BYTE * v100 = this->q00C;
    *(_BYTE *)(this + 54) = 1;
    LOBYTE(v9) = v100[144];
    if ( (_BYTE)v9 )
    {
      int * v101 = (int *)(*(int (__thiscall **)(_BYTE *, int *))(*(_DWORD *)v100 + 72))(v100, &v157);
      int v102 = *v101;
      a2 = (_DWORD *)*v3;
      LODWORD(v155) = v102;
      double v103 = Math::CalcAngle((double)v101[1] - (double)*(int *)(this + 44), (double)(int)a2 - (double)v102);
      v104 = Math::RoundToInt((v103 - 1.570796326794897) * -10430.06004058427);
      v105 = this->num_sections;
      LOWORD(a2) = v104;
      v105->TogglePrimaryFactory(this + 4, a2);
      (*(void (__thiscall **)(_DWORD, _DWORD, int))(*this->q00C + 1348))(
        this->q00C,
        0,
        1072693248);
      v9 = this->q00C;
      *(_BYTE *)(v9 + 1674) = 0;
    }
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(*this->q00C + 1348))(this->q00C, 0, 0);
    v9 = this->q00C;
    *(_BYTE *)(v9 + 1674) = 0;
  }
  return v9;
}
