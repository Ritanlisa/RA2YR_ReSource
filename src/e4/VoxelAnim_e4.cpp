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
namespace gamemd {  // G42.18 ns repair
int VoxelAnim::ComputeTransform(float * a1, float * a2, float a3, int a4)
{
  float v8; // edx
  float v19; // [esp+24h] [ebp-18h]
  float v20; // [esp+28h] [ebp-14h]

  int v5; // esi
  v5 = ((unsigned int *)(dword_8469E0))[a4]; /*0x758702*/
  float v16; // [esp+18h] [ebp-24h]
  v16 = *a1 + *a2; /*0x75870c*/
  float v17; // [esp+1Ch] [ebp-20h]
  v17 = a2[1] + a1[1]; /*0x758716*/
  double v6; // st7
  v6 = a2[2] + a1[2]; /*0x75871d*/
  float v18; // [esp+20h] [ebp-1Ch]
  v18 = v6; /*0x758720*/
  double v7; // st7
  v7 = Math::Sqrt(v6 * v18 + v16 * v16 + v17 * v17); /*0x75873f*/
  if ( v7 == 0.0 ) /*0x758752*/
  {
    v8 = v18; /*0x75878e*/
    v19 = v16; /*0x758792*/
    v20 = v17; /*0x758798*/
  }
  else
  {
  float v22; // [esp+30h] [ebp-Ch]
    v22 = v16 / v7; /*0x75875a*/
    v19 = v22; /*0x758768*/
  float v23; // [esp+34h] [ebp-8h]
    v23 = v17 / v7; /*0x75876c*/
    v20 = v23; /*0x758778*/
  float v24; // [esp+38h] [ebp-4h]
    v24 = v18 / v7; /*0x75877c*/
    v8 = v24; /*0x758780*/
  }
  int v9; // ebx
  v9 = ((unsigned int *)(dword_8469F4))[a4]; /*0x75879c*/
  int v10; // edi
  v10 = 0; /*0x7587a3*/
  float v21; // [esp+2Ch] [ebp-10h]
  v21 = v8; /*0x7587a7*/
  if ( v9 > 0 ) /*0x7587ab*/
  {
  float *v11; // esi
    v11 = &v5->vtable2; /*0x7587b1*/
    do /*0x758856*/
    {
  double v12; // st7
      v12 = v11[1] * a1[2] + *v11 * a1[1] + *(v11 - 1) * *a1; /*0x7587c7*/
  double v13; // st6
      v13 = v19 * *(v11 - 1) + v20 * *v11 + v21 * v11[1]; /*0x7587df*/
  float v25; // [esp+44h] [ebp+8h]
      v25 = v13 / (a3 - v13 * a3 + v13); /*0x7587ef*/
      if ( v25 < 0.0 ) /*0x758804*/
        v25 = 0.0; /*0x758806*/
      if ( v12 < 0.0 ) /*0x758819*/
        v12 = 0.0; /*0x75881d*/
  double v14; // st7
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
}  // G42.18 ns repair
} // namespace gamemd
// 0x75AEC0
namespace gamemd {
int VoxelAnim::Draw(unsigned int * a2, void *a2_1, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
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
  // w15f4: v3-export truncated tail (RHS lost): unsigned int *v5... ...
  // live body via get_context/0x75AEC0 — w15f4 regrafted decls only
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
}
} // namespace gamemd
