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
}  // G42.18 ns repair
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
  unsigned int *v5... [35635 chars total]
}
} // namespace gamemd
