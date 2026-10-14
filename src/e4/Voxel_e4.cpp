// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Matrix2D_e4.hpp"
#include "e4/classes/Voxel_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/WDTState_4_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/VoxelAnim_e4.hpp"
#include "e4/classes/WaypointClass_e4.hpp"
#include "e4/classes/E4Recv_756860_e4.hpp"
#include "e4/classes/Matrix3x4_e4.hpp"
#include "e4/classes/Float4_e4.hpp"
#include "e4/classes/Int4_e4.hpp"
#include "e4/classes/DynamicVectorClass_flat_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/VoxelPalette_e4.hpp"  // w16g4 C3861 VoxelPalette:: supply
#include "e4/classes/ObjectPlacement_e4.hpp"  // w16g4 C3861 ObjectPlacement:: supply
#include "e4/classes/BuildingClass_e4.hpp"  // w18j2 C3861 BuildingClass:: supply
// [w18j2] C2065 global supply (data addr evidence)
extern float flt_B43B43198;  // w18j2 data: 0xB43B43198
extern float flt_B43B431A8;  // w18j2 data: 0xB43B431A8
extern float flt_B43B431B8;  // w18j2 data: 0xB43B431B8
extern float flt_B43B431C8;  // w18j2 data: 0xB43B431C8
extern float flt_B43B431D8;  // w18j2 data: 0xB43B431D8
extern float flt_B43B431E8;  // w18j2 data: 0xB43B431E8
extern float flt_B43B431F8;  // w18j2 data: 0xB43B431F8
extern float flt_B43B43208;  // w18j2 data: 0xB43B43208
extern float flt_B43B43218;  // w18j2 data: 0xB43B43218
extern float flt_B43B43228;  // w18j2 data: 0xB43B43228
extern float flt_B43B43238;  // w18j2 data: 0xB43B43238
extern float flt_B43B43248;  // w18j2 data: 0xB43B43248
extern float flt_B43B43258;  // w18j2 data: 0xB43B43258
extern float flt_B43B43268;  // w18j2 data: 0xB43B43268
extern float flt_B43B43278;  // w18j2 data: 0xB43B43278
extern float flt_B43B43288;  // w18j2 data: 0xB43B43288
// [w18j2] C3861 supply (raw-evidenced)
namespace gamemd { int CheckBridge(int p0, void* p1); }  // x4:signals@0x6b0880
// [w14e3] fn vocab supply (g57b5-W5 variadic convention); evidence: raw_decomp entries
namespace gamemd {
    int GenerateLightRemapTable(float* p0, int p1);  // x4:signals@0x758b70
    int InitializeTileAudioOcclusion(int p0, float* p1);  // x4:signals@0x756860
} // namespace gamemd
// [w14e3] Matrix3D supply: verbatim struct from src/core/math.hpp (gamemd), cpp-local carrier
namespace gamemd {
struct Matrix3D
{
    float Data[12] = {};  // data: 0x840b4c
    unsigned char q000;  // 0x0
    unsigned int q080;  // 0x80
    unsigned int u32_0;   // 0x0 (g57w10 r4: raw RotateZ 0x5af0aa fld [esi] float element vocab)
    unsigned int u32_8;   // 0x8 (raw fld [esi+8])
    unsigned int u32_10;  // 0x10
    unsigned int u32_18;  // 0x18
    unsigned int u32_28;  // 0x28
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    static void* Constructor(Matrix3D* aP1, float a1, float a2);  // 0x5AE6F0 G57w15f3: static receiver-first per raw thiscall (Matrix3D *this, float a2, float a3); 32 static-form call sites this TU
    void RotateZ(float a1);  // 0x5AF080
    // --- gap2 auto-generated stub declarations (END) ---
};
} // namespace gamemd


// 0x748220
namespace gamemd {  // G42.18 ns repair
int Voxel::BuildIndexTable()
{

  int v1; // ebx
  int result; // eax
  int v4; // edx
  int v5; // edi
  __int16 v6; // bx
  int v7; // esi
  int v8; // edx
  int v9; // ecx
  int v10; // ebx
  char v11; // [esp+8h] [ebp-18h]
  char v12; // [esp+Ch] [ebp-14h]
  char v13; // [esp+10h] [ebp-10h]
  int v14; // [esp+14h] [ebp-Ch]
  int i; // [esp+18h] [ebp-8h]
  __int16 j; // [esp+1Ch] [ebp-4h]

  v1 = 0; /*0x748229*/
  if ( dword_B1D14C ) /*0x748230*/
  {
    __3_YAXPAX_Z(dword_B1D14C); /*0x748233*/
    dword_B1D14C = 0; /*0x74823b*/
  }
  result = (int)(__2_YAPAXI_Z(0x1FFFCu)); /*0x748246*/
  dword_B1D14C = (unsigned int)((void *)result); /*0x748250*/
  if ( result ) /*0x748255*/
  {
    switch ( (unsigned int)this ) /*0x748264*/
    {
      case 0u: /*0x748264*/
        v11 = 10; /*0x74826b*/
        v12 = 5; /*0x748273*/
        v13 = 0; /*0x74827b*/
        break; /*0x74827f*/
      case 1u: /*0x748264*/
        v11 = 11; /*0x7482ad*/
        v12 = 6; /*0x7482b5*/
        v13 = 1; /*0x7482bd*/
        break; /*0x7482bd*/
      case 2u: /*0x748264*/
        v11 = 11; /*0x748297*/
        v12 = 6; /*0x74829f*/
        v13 = 0; /*0x7482a7*/
        break; /*0x7482ab*/
      case 3u: /*0x748264*/
        v11 = 11; /*0x748281*/
        v12 = 5; /*0x748289*/
        v13 = 0; /*0x748291*/
        break; /*0x748295*/
      default:
        goto LABEL_17;
    }
    for ( i = 0; i < 32; ++i ) /*0x7482c7*/
    {
      v4 = 0; /*0x7482d1*/
      v5 = v1 << v11; /*0x7482d3*/
      v6 = 32 * v1; /*0x7482d5*/
      v14 = 0; /*0x7482d8*/
      for ( j = v6; ; v6 = j ) /*0x7482dc*/
      {
        result = 0; /*0x7482ee*/
        v7 = v4 << v12; /*0x7482f3*/
        v8 = (unsigned __int16)(32 * (v6 | v4)); /*0x7482f5*/
        do /*0x748320*/
        {
          v9 = v8 | (unsigned __int16)result; /*0x748311*/
          v10 = v7 | v5 | (result++ << v13); /*0x748315*/
          *((unsigned short *)dword_B1D14C + v9) = v10; /*0x74831b*/
        }
        while ( result < 32 ); /*0x748320*/
        v4 = ++v14; /*0x748326*/
        if ( v14 >= 32 ) /*0x74832e*/
          break; /*0x74832e*/
      }
      v1 = i + 1; /*0x748334*/
    }
    LOBYTE(result) = 1; /*0x748341*/
  }
  else
  {
LABEL_17:
    LOBYTE(result) = 0; /*0x748348*/
  }
  return result; /*0x748340*/

}
}  // G42.18 ns repair
// 0x754510
namespace gamemd {
AbstractClass * Voxel::RenderFrame()
{
  int v1; // edi
  char *v2; // esi
  int v3; // ebx
  unsigned int *v4; // ecx
  char *v5; // eax
  int v6; // edx
  int v7; // eax
  int v8; // ebp
  char *v9; // edi
  char *v10; // ecx
  int v11; // ebx
  int v12; // edx
  unsigned int ***v13; // esi
  int v14; // edi
  int v15; // esi
  unsigned int ***v16; // edi
  float v17; // esi
  int v18; // eax
  int v19; // ebx
  float v20; // edi
  int v21; // eax
  float v24; // [esp+14h] [ebp-30h]
  float v25[7]; // [esp+1Ch] [ebp-28h] BYREF
  int v26; // [esp+38h] [ebp-Ch]

  v1 = 0; /*0x75452e*/
  v25[0] = (*(float *)&dword_B2D5E0 + *(float *)&dword_B2D948) * 0.5; /*0x754536*/
  v25[1] = (*(float *)&dword_B2D5E4 + *(float *)&dword_B2D94C) * 0.5; /*0x75454c*/
  v25[2] = (*(float *)&dword_B2D5E8 + *(float *)&dword_B2D950) * 0.5; /*0x754562*/
  if ( dword_B2FB70 > 0 ) /*0x754566*/
  {
    v2 = (char *)&unk_B3FF78; /*0x754568*/
    do /*0x754585*/
    {
      InitializeTileAudioOcclusion(v2, v25); /*0x754575*/
      ++v1; /*0x75457f*/
      v2 += 72; /*0x754580*/
    }
    while ( v1 < dword_B2FB70 ); /*0x754585*/
  }
  v3 = dword_B2D820; /*0x754587*/
  if ( dword_B2D820 > 0 ) /*0x75458f*/
  {
    v4 = (unsigned int *)(&unk_B2D824); /*0x754591*/
    v5 = (char *)&unk_B2D958; /*0x754596*/
    v6 = dword_B2D820; /*0x75459b*/
    do /*0x7545a8*/
    {
      *v4 = (unsigned int)(v5); /*0x75459d*/
      v5 += 136; /*0x75459f*/
      ++v4; /*0x7545a4*/
      --v6; /*0x7545a7*/
    }
    while ( v6 ); /*0x7545a8*/
  }
  v7 = v3 - 1; /*0x7545aa*/
  if ( v3 - 1 > 0 ) /*0x7545af*/
  {
    v8 = 1; /*0x7545b1*/
    v9 = (char *)&unk_B2D824; /*0x7545b6*/
    do /*0x7545f1*/
    {
      if ( v8 < v3 ) /*0x7545bd*/
      {
        v10 = v9 + 4; /*0x7545bf*/
        v11 = v3 - v8; /*0x7545c2*/
        do /*0x7545dd*/
        {
          v12 = *(unsigned int *)v9; /*0x7545c4*/
          if ( *(float *)(*(unsigned int *)v9 + 36) > (double)*(float *)(*(unsigned int *)v10 + 36) ) /*0x7545d3*/
          {
            *(unsigned int *)v9 = *(unsigned int *)v10; /*0x7545d5*/
            *(unsigned int *)v10 = v12; /*0x7545d7*/
          }
          v10 += 4; /*0x7545d9*/
          --v11; /*0x7545dc*/
        }
        while ( v11 ); /*0x7545dd*/
        v3 = dword_B2D820; /*0x7545df*/
      }
      ++v8; /*0x7545e5*/
      v7 = v3 - 1; /*0x7545e6*/
      v9 += 4; /*0x7545e9*/
    }
    while ( v8 - 1 < v3 - 1 ); /*0x7545f1*/
  }
  if ( dword_B43180 ) /*0x7545fb*/
  {
    if ( v7 >= 0 ) /*0x7545ff*/
    {
      v13 = (unsigned int ***)(4 * v7 + 11720740); /*0x754601*/
      v14 = v7 + 1; /*0x754608*/
      do /*0x75461e*/
      {
        Voxel::ProcessColor(**v13, *v13, v25); /*0x754615*/
        --v13; /*0x75461a*/
        --v14; /*0x75461d*/
      }
      while ( v14 ); /*0x75461e*/
    }
  }
  else
  {
    v15 = 0; /*0x754622*/
    if ( v3 > 0 ) /*0x754626*/
    {
      v16 = (unsigned int ***)&unk_B2D824; /*0x754628*/
      do /*0x754647*/
      {
        Voxel::ProcessColor(**v16, *v16, v25); /*0x754637*/
        ++v15; /*0x754641*/
        ++v16; /*0x754642*/
      }
      while ( v15 < dword_B2D820 ); /*0x754647*/
    }
  }
  (*((unsigned int *)&(v17))) = Math::RoundToInt(*(float *)&dword_B2D948 - *(float *)&dword_B2D5E0); /*0x754666*/
  v18 = Math::RoundToInt(*(float *)&dword_B2D94C - *(float *)&dword_B2D5E4); /*0x754668*/
  v19 = 128 - (*((signed int *)&(v17))) / 2; /*0x75467f*/
  (*((unsigned int *)&(v17))) += 8; /*0x754686*/
  (*((unsigned int *)&(v20))) = v18 + 8; /*0x754694*/
  v19 -= 4; /*0x75469a*/
  v26 = 128 - v18 / 2 - 4; /*0x75469d*/
  dword_B2FB64 = v26; /*0x7546a1*/
  dword_B2FB60 = v19; /*0x7546a8*/
  dword_B2FB68 = (*((unsigned int *)&(v17))); /*0x7546b1*/
  dword_B2FB6C = v18 + 8; /*0x7546b9*/
  (*((unsigned int *)&(v24))) = Math::RoundToInt(v25[0]) - (*((signed int *)&(v17))) / 2; /*0x7546c8*/
  v21 = Math::RoundToInt(v25[1]); /*0x7546d9*/
  v25[0] = v24; /*0x7546e8*/
  (*((unsigned int *)&(v25[1]))) = v21 - (*((signed int *)&(v20))) / 2; /*0x7546ec*/
  v25[4] = v17; /*0x7546f4*/
  v25[5] = v20; /*0x7546f8*/
  (*((unsigned int *)&(v25[2]))) = v19; /*0x754707*/
  (*((unsigned int *)&(v25[3]))) = v26; /*0x75470b*/
  memcpy(v25, 0x18u); /*0x75470f*/
  return this; /*0x754711*/
}
}
// 0x754CB0
namespace gamemd {
int Voxel::Projection_Setup()
{
  float *v1; // eax
  float *v2; // eax
  float *v3; // eax
  float *v4; // eax
  float *v5; // eax
  float *v6; // eax
  float v7; // edx
  float *v8; // eax
  float *v9; // eax
  float v10; // edx
  float v11; // ebx
  float *v12; // eax
  float *v13; // eax
  float *v14; // eax
  float *v15; // eax
  float v16; // ebp
  float *v17; // eax
  float *v18; // eax
  float *v19; // eax
  float *v20; // eax
  float *v21; // eax
  float *v22; // eax
  float *v23; // eax
  float *v24; // eax
  float *v25; // eax
  float *v26; // eax
  float *v27; // eax
  float *v28; // eax
  int v29; // edi
  float *v30; // esi
  float *v31; // eax
  int v32; // ecx
  float *v33; // ecx
  double v34; // st7
  float *v35; // eax
  float *v36; // eax
  float *v37; // eax
  float *v38; // eax
  float *v39; // eax
  float *v40; // eax
  float *v41; // eax
  float *v42; // eax
  float *v43; // eax
  float *v44; // eax
  float *v45; // eax
  float *v46; // eax
  float *v47; // eax
  float *v48; // eax
  float *v49; // eax
  float *v50; // eax
  float *v51; // eax
  Matrix3x4 *v52; // esi
  int result; // eax
  float v54; // [esp+0h] [ebp-114h]
  float v55; // [esp+0h] [ebp-114h]
  float v56; // [esp+0h] [ebp-114h]
  float v57[4]; // [esp+14h] [ebp-100h] BYREF
  float v58[4]; // [esp+24h] [ebp-F0h] BYREF
  int v59; // [esp+34h] [ebp-E0h] BYREF
  float v60; // [esp+38h] [ebp-DCh]
  int v61; // [esp+3Ch] [ebp-D8h]
  int v62; // [esp+40h] [ebp-D4h] BYREF
  int v63; // [esp+44h] [ebp-D0h]
  int v64; // [esp+48h] [ebp-CCh]
  float v65; // [esp+4Ch] [ebp-C8h]
  Matrix3D v66; // [esp+50h] [ebp-C4h] BYREF
  float v67[3]; // [esp+80h] [ebp-94h] BYREF
  float v68[3]; // [esp+8Ch] [ebp-88h] BYREF
  float v69[3]; // [esp+98h] [ebp-7Ch] BYREF
  float v70[3]; // [esp+A4h] [ebp-70h] BYREF
  float v71[3]; // [esp+B0h] [ebp-64h] BYREF
  float v72[3]; // [esp+BCh] [ebp-58h] BYREF
  float v73[3]; // [esp+C8h] [ebp-4Ch] BYREF
  float v74[3]; // [esp+D4h] [ebp-40h] BYREF
  float v75; // [esp+E0h] [ebp-34h]
  Matrix3x4 v76; // [esp+E4h] [ebp-30h] BYREF

  v75 = dbl_B43F08; /*0x754cbe*/
  v65 = dbl_B44310; /*0x754cd0*/
  *(float *)&v59 = 1.0; /*0x754ce4*/
  v60 = 0.0; /*0x754cec*/
  v61 = 0; /*0x754cf4*/
  v62 = 0; /*0x754cfc*/
  v63 = 0; /*0x754d04*/
  v64 = 1065353216; /*0x754d0c*/
  v1 = Math::BuildRotationMatrix((float *)v66.__pad_0, (float *)&v62, 0.785375); /*0x754d14*/
  v2 = TransformMatrix3x4Point(v57, v1, (float *)&v59); /*0x754d1f*/
  v70[0] = *v2; /*0x754d26*/
  v70[1] = v2[1]; /*0x754d30*/
  v70[2] = v2[2]; /*0x754d4d*/
  v62 = 1065353216; /*0x754d54*/
  v63 = 0; /*0x754d5c*/
  v64 = 0; /*0x754d64*/
  *(float *)&v59 = 0.0; /*0x754d6c*/
  v60 = 0.0; /*0x754d74*/
  v61 = 1065353216; /*0x754d7c*/
  v3 = Math::BuildRotationMatrix((float *)v66.__pad_0, (float *)&v59, 2.3561251); /*0x754d84*/
  v4 = TransformMatrix3x4Point(v57, v3, (float *)&v62); /*0x754d8f*/
  v67[0] = *v4; /*0x754d96*/
  v67[1] = v4[1]; /*0x754d9d*/
  v67[2] = v4[2]; /*0x754dba*/
  v62 = 1065353216; /*0x754dc1*/
  v63 = 0; /*0x754dc9*/
  v64 = 0; /*0x754dd1*/
  *(float *)&v59 = 0.0; /*0x754dd9*/
  v60 = 0.0; /*0x754de1*/
  v61 = 1065353216; /*0x754de9*/
  v5 = Math::BuildRotationMatrix((float *)v66.__pad_0, (float *)&v59, 3.9268751); /*0x754df1*/
  v6 = TransformMatrix3x4Point(v57, v5, (float *)&v62); /*0x754dfc*/
  v73[0] = *v6; /*0x754e03*/
  v73[1] = v6[1]; /*0x754e0d*/
  v7 = v6[2]; /*0x754e14*/
  v62 = 1065353216; /*0x754e17*/
  v73[2] = v7; /*0x754e1f*/
  v63 = 0; /*0x754e26*/
  v64 = 0; /*0x754e2e*/
  *(float *)&v59 = 0.0; /*0x754e36*/
  v60 = 0.0; /*0x754e3e*/
  v61 = 1065353216; /*0x754e46*/
  v8 = Math::BuildRotationMatrix((float *)v66.__pad_0, (float *)&v59, 5.4976249); /*0x754e61*/
  v9 = TransformMatrix3x4Point(v57, v8, (float *)&v62); /*0x754e6c*/
  v71[0] = *v9; /*0x754e73*/
  v71[1] = v9[1]; /*0x754e7d*/
  v10 = v9[2]; /*0x754e89*/
  v74[0] = 1.0; /*0x754e8c*/
  v71[2] = v10; /*0x754e97*/
  v74[1] = 0.0; /*0x754e9e*/
  v74[2] = 0.0; /*0x754ea9*/
  v72[0] = 0.0; /*0x754eb4*/
  v72[1] = 1.0; /*0x754ebf*/
  v72[2] = 0.0; /*0x754eca*/
  v68[0] = -1.0; /*0x754ed5*/
  v68[1] = 0.0; /*0x754ee0*/
  v68[2] = 0.0; /*0x754eeb*/
  v69[0] = 0.0; /*0x754ef6*/
  v69[1] = -1.0; /*0x754f01*/
  v69[2] = 0.0; /*0x754f0c*/
  Matrix3x4::Identity(&stru_B43F10); /*0x754f17*/
  v11 = v65; /*0x754f1c*/
  memcpy(&unk_B43F40, Matrix3D::Constructor(&v66, 3.9268751, v65), 0x30u); /*0x754f3c*/
  memcpy(&unk_B43F70, Matrix3D::Constructor(&v66, 2.3561251, v11), 0x30u); /*0x754f59*/
  memcpy(&unk_B43FA0, Matrix3D::Constructor(&v66, 0.785375, v11), 0x30u); /*0x754f76*/
  memcpy(&unk_B43FD0, Matrix3D::Constructor(&v66, 5.4976249, v11), 0x30u); /*0x754f93*/
  v12 = FromQuaternionAxisAngle(v58, v73, v11); /*0x754fa0*/
  Float4::Copy(flt_B44358, v57, v12); /*0x754fb0*/
  v13 = FromQuaternionAxisAngle(v58, v67, v11); /*0x754fbe*/
  Float4::Copy(flt_B44368, v57, v13); /*0x754fce*/
  v14 = FromQuaternionAxisAngle(v58, v70, v11); /*0x754fdf*/
  Float4::Copy(flt_B44378, v57, v14); /*0x754fef*/
  v15 = FromQuaternionAxisAngle(v58, v71, v11); /*0x755000*/
  Float4::Copy(flt_B44388, v57, v15); /*0x755010*/
  v16 = v75; /*0x755019*/
  memcpy(&unk_B44000, Matrix3D::Constructor(&v66, 3.1415, v75), 0x30u); /*0x755038*/
  memcpy(&unk_B44030, Matrix3D::Constructor(&v66, 1.57075, v16), 0x30u); /*0x755055*/
  memcpy(&unk_B44060, Matrix3D::Constructor(&v66, 0.0, v16), 0x30u); /*0x75506f*/
  memcpy(&unk_B44090, Matrix3D::Constructor(&v66, 4.7122502, v16), 0x30u); /*0x75508c*/
  v17 = FromQuaternionAxisAngle(v58, v68, v16); /*0x755099*/
  Float4::Copy(flt_B44398, v57, v17); /*0x7550a9*/
  v18 = FromQuaternionAxisAngle(v58, v72, v16); /*0x7550ba*/
  Float4::Copy(flt_B443A8, v57, v18); /*0x7550ca*/
  v19 = FromQuaternionAxisAngle(v58, v74, v16); /*0x7550db*/
  Float4::Copy(flt_B443B8, v57, v19); /*0x7550eb*/
  v20 = FromQuaternionAxisAngle(v58, v69, v16); /*0x7550fc*/
  Float4::Copy(flt_B443C8, v57, v20); /*0x75510c*/
  memcpy(&unk_B440C0, Matrix3D::Constructor(&v66, 3.1415, v16), 0x30u); /*0x75512d*/
  memcpy(&unk_B440F0, Matrix3D::Constructor(&v66, 1.57075, v16), 0x30u); /*0x75514a*/
  memcpy(&unk_B44120, Matrix3D::Constructor(&v66, 0.0, v16), 0x30u); /*0x755164*/
  memcpy(&unk_B44150, Matrix3D::Constructor(&v66, 4.7122502, v16), 0x30u); /*0x755181*/
  v21 = FromQuaternionAxisAngle(v58, v68, v16); /*0x75518e*/
  Float4::Copy(flt_B443D8, v57, v21); /*0x75519e*/
  v22 = FromQuaternionAxisAngle(v58, v72, v16); /*0x7551af*/
  Float4::Copy(flt_B443E8, v57, v22); /*0x7551bf*/
  v23 = FromQuaternionAxisAngle(v58, v74, v16); /*0x7551d0*/
  Float4::Copy(flt_B443F8, v57, v23); /*0x7551e0*/
  v24 = FromQuaternionAxisAngle(v58, v69, v16); /*0x7551f1*/
  Float4::Copy(flt_B44408, v57, v24); /*0x755201*/
  memcpy(&unk_B44180, Matrix3D::Constructor(&v66, 3.1415, v11), 0x30u); /*0x755221*/
  memcpy(&unk_B441B0, Matrix3D::Constructor(&v66, 1.57075, v11), 0x30u); /*0x75523f*/
  memcpy(&unk_B441E0, Matrix3D::Constructor(&v66, 0.0, v11), 0x30u); /*0x755259*/
  memcpy(&unk_B44210, Matrix3D::Constructor(&v66, 4.7122502, v11), 0x30u); /*0x755276*/
  v25 = FromQuaternionAxisAngle(v58, v68, v11); /*0x755283*/
  Float4::Copy(flt_B44418, v57, v25); /*0x755293*/
  v26 = FromQuaternionAxisAngle(v58, v72, v11); /*0x7552a4*/
  Float4::Copy(flt_B44428, v57, v26); /*0x7552b4*/
  v27 = FromQuaternionAxisAngle(v58, v74, v11); /*0x7552c5*/
  Float4::Copy(flt_B44438, v57, v27); /*0x7552d5*/
  v28 = FromQuaternionAxisAngle(v58, v69, v11); /*0x7552e6*/
  Float4::Copy(flt_B44448, v57, v28); /*0x7552f6*/
  Matrix3x4::Identity(&stru_B44240); /*0x755300*/
  Matrix3x4::Identity(&stru_B44270); /*0x75530a*/
  Matrix3x4::Identity(&stru_B442A0); /*0x755314*/
  Matrix3x4::Identity(&stru_B442D0); /*0x75531e*/
  v29 = 0; /*0x755323*/
  Int4::Set2(&stru_B44458, 0, 0, 0, 1065353216); /*0x755332*/
  Int4::Set2(&stru_B44468, 0, 0, 0, 1065353216); /*0x755344*/
  Int4::Set2(&stru_B44478, 0, 0, 0, 1065353216); /*0x755356*/
  Int4::Set2(&stru_B44488, 0, 0, 0, 1065353216); /*0x755368*/
  v65 = 0.0; /*0x75536d*/
  do /*0x755459*/
  {
    Matrix3x4::Identity(&v76); /*0x755378*/
    v54 = (double)(*((signed int *)&(v65))) * 0.024542969; /*0x75538f*/
    Matrix2D::Rotate(v76.m_Data, v54); /*0x755392*/
    v62 = 1065353216; /*0x7553a7*/
    v63 = 0; /*0x7553af*/
    v64 = 0; /*0x7553b7*/
    v30 = &((unsigned int *)(flt_B432D8))[v29]; /*0x7553bf*/
    v31 = TransformMatrix3x4Point(v57, (float *)v76.m_Data, (float *)&v62); /*0x7553c5*/
    *v30 = *v31; /*0x7553d4*/
    v32 = *((unsigned int *)v31 + 1); /*0x7553d6*/
    v61 = 0; /*0x7553d9*/
    v30->vtable2 = v32; /*0x7553e1*/
    v30[2] = v31[2]; /*0x7553e7*/
    v33 = &((unsigned int *)(flt_B444A0))[v29]; /*0x7553f8*/
    *(float *)&v59 = *(float *)(v29 * 4 + 11809500) - 0.0; /*0x7553fa*/
    v34 = 0.0 - ((unsigned int *)(flt_B432D8))[v29]; /*0x755402*/
    *v33 = *(float *)&v59; /*0x755404*/
    v60 = v34; /*0x755406*/
    v33[1] = v60; /*0x75540e*/
    *((unsigned int *)v33 + 2) = v61; /*0x755415*/
    Math::BuildRotationMatrix((float *)v66.__pad_0, &flt_B444A0[v29], *(float *)&stru_887460.Buffer_field_0C); /*0x755424*/
    v35 = TransformMatrix3x4Point(v58, (float *)v66.__pad_0, &flt_B432D8[v29]); /*0x755432*/
    v29 += 3; /*0x755439*/
    *v30 = *v35; /*0x75543c*/
    v30[1] = v35[1]; /*0x755441*/
    v30[2] = v35[2]; /*0x755447*/
    ++(*((unsigned int *)&(v65))); /*0x755455*/
  }
  while ( v29 < 768 ); /*0x755459*/
  Matrix3x4::Identity(&stru_B45188); /*0x755464*/
  memcpy(&unk_B451B8, Matrix3D::Constructor(&v66, 4.7122502, v11), 0x30u); /*0x755485*/
  memcpy(&unk_B451E8, Matrix3D::Constructor(&v66, 3.1415, v11), 0x30u); /*0x7554a2*/
  memcpy(&unk_B45218, Matrix3D::Constructor(&v66, 1.57075, v11), 0x30u); /*0x7554bf*/
  memcpy(&unk_B45248, Matrix3D::Constructor(&v66, 0.0, v11), 0x30u); /*0x7554d9*/
  memcpy(&unk_B45278, Matrix3D::Constructor(&v66, 3.9268751, v16), 0x30u); /*0x7554f6*/
  memcpy(&unk_B452A8, Matrix3D::Constructor(&v66, 2.3561251, v16), 0x30u); /*0x755513*/
  memcpy(&unk_B452D8, Matrix3D::Constructor(&v66, 0.785375, v16), 0x30u); /*0x755530*/
  memcpy(&unk_B45308, Matrix3D::Constructor(&v66, 5.4976249, v16), 0x30u); /*0x75554d*/
  memcpy(&unk_B45338, Matrix3D::Constructor(&v66, 3.9268751, v16), 0x30u); /*0x75556a*/
  memcpy(&unk_B45368, Matrix3D::Constructor(&v66, 2.3561251, v16), 0x30u); /*0x755586*/
  memcpy(&unk_B45398, Matrix3D::Constructor(&v66, 0.785375, v16), 0x30u); /*0x7555a4*/
  memcpy(&unk_B453C8, Matrix3D::Constructor(&v66, 5.4976249, v16), 0x30u); /*0x7555c1*/
  memcpy(&unk_B453F8, Matrix3D::Constructor(&v66, 3.9268751, v11), 0x30u); /*0x7555de*/
  memcpy(&unk_B45428, Matrix3D::Constructor(&v66, 2.3561251, v11), 0x30u); /*0x7555fb*/
  memcpy(&unk_B45458, Matrix3D::Constructor(&v66, 0.785375, v11), 0x30u); /*0x755618*/
  memcpy(&unk_B45488, Matrix3D::Constructor(&v66, 5.4976249, v11), 0x30u); /*0x755639*/
  Int4::Set2(&stru_B43188, 0, 0, 0, 1065353216); /*0x755646*/
  v36 = FromQuaternionAxisAngle(v58, v69, v11); /*0x755657*/
  Float4::Copy(flt_B43198, v57, v36); /*0x755667*/
  v37 = FromQuaternionAxisAngle(v58, v68, v11); /*0x755678*/
  Float4::Copy(flt_B431A8, v57, v37); /*0x755688*/
  v38 = FromQuaternionAxisAngle(v58, v72, v11); /*0x755699*/
  Float4::Copy(flt_B431B8, v57, v38); /*0x7556a9*/
  v39 = FromQuaternionAxisAngle(v58, v74, v11); /*0x7556ba*/
  Float4::Copy(flt_B431C8, v57, v39); /*0x7556ca*/
  v40 = FromQuaternionAxisAngle(v58, v73, v16); /*0x7556db*/
  Float4::Copy(flt_B431D8, v57, v40); /*0x7556eb*/
  v41 = FromQuaternionAxisAngle(v58, v67, v16); /*0x7556f9*/
  Float4::Copy(flt_B431E8, v57, v41); /*0x755709*/
  v42 = FromQuaternionAxisAngle(v58, v70, v16); /*0x75571a*/
  Float4::Copy(flt_B431F8, v57, v42); /*0x75572a*/
  v43 = FromQuaternionAxisAngle(v58, v71, v16); /*0x75573b*/
  Float4::Copy(flt_B43208, v57, v43); /*0x75574b*/
  v44 = FromQuaternionAxisAngle(v58, v73, v16); /*0x75575c*/
  Float4::Copy(flt_B43218, v57, v44); /*0x75576c*/
  v45 = FromQuaternionAxisAngle(v58, v67, v16); /*0x75577a*/
  Float4::Copy(flt_B43228, v57, v45); /*0x75578a*/
  v46 = FromQuaternionAxisAngle(v58, v70, v16); /*0x75579b*/
  Float4::Copy(flt_B43238, v57, v46); /*0x7557ab*/
  v47 = FromQuaternionAxisAngle(v58, v71, v16); /*0x7557bc*/
  Float4::Copy(flt_B43248, v57, v47); /*0x7557cc*/
  v48 = FromQuaternionAxisAngle(v58, v73, v11); /*0x7557dd*/
  Float4::Copy(flt_B43258, v57, v48); /*0x7557ed*/
  v49 = FromQuaternionAxisAngle(v58, v67, v11); /*0x7557fb*/
  Float4::Copy(flt_B43268, v57, v49); /*0x75580b*/
  v50 = FromQuaternionAxisAngle(v58, v70, v11); /*0x75581c*/
  Float4::Copy(flt_B43278, v57, v50); /*0x75582c*/
  v51 = FromQuaternionAxisAngle(v58, v71, v11); /*0x75583d*/
  Float4::Copy(flt_B43288, v57, v51); /*0x75584d*/
  Matrix3x4::Identity(&stru_B454B8); /*0x755857*/
  Matrix3x4::Identity(&stru_B454E8); /*0x755861*/
  Matrix3x4::Identity(&stru_B45518); /*0x75586b*/
  Matrix3x4::Identity(&stru_B45548); /*0x755875*/
  Int4::Set2(&stru_B43298, 0, 0, 0, 1065353216); /*0x75588a*/
  Int4::Set2(&stru_B432A8, 0, 0, 0, 1065353216); /*0x75589f*/
  Int4::Set2(&stru_B432B8, 0, 0, 0, 1065353216); /*0x7558b4*/
  Int4::Set2(&stru_B432C8, 0, 0, 0, 1065353216); /*0x7558c9*/
  Matrix3x4::Identity(&stru_B44318); /*0x7558d3*/
  v55 = -dbl_B43F00; /*0x7558e6*/
  Matrix3x3::RotateX(stru_B44318.m_Data, v55); /*0x7558e9*/
  v56 = -dbl_B44498; /*0x7558f7*/
  Matrix2D::Rotate(stru_B44318.m_Data, v56); /*0x7558ff*/
  v52 = (gamemd::Matrix3x4 *)(&stru_B450B8); /*0x755904*/
  do /*0x755919*/
    result = Matrix3x4::Identity(v52++); /*0x75590b*/
  while ( (int)v52 < (int)&dword_B45178 ); /*0x755919*/
  stru_B450B8.m_Data[5] = -1082130432; /*0x75591e*/
  dword_B450E8 = 0; /*0x755928*/
  dword_B450EC = 1065353216; /*0x755932*/
  dword_B450F8 = 1065353216; /*0x75593c*/
  dword_B450FC = 0; /*0x755946*/
  dword_B45118 = -1082130432; /*0x755950*/
  dword_B45148 = 0; /*0x75595a*/
  dword_B4514C = -1082130432; /*0x755964*/
  dword_B45158 = -1082130432; /*0x75596e*/
  dword_B4515C = 0; /*0x755978*/
  return result; /*0x75591d*/
}
}
// 0x755DB0
namespace gamemd {
AbstractClass * * Voxel::SortDepth(ObjectClass * aP1, int a3, void *a3_2)
{
  unsigned int v4; // edi
  void *v5; // eax
  void *v6; // eax
  int v7; // esi
  void *v11; // eax
  int v12; // ebp
  float v13; // eax
  int v14; // ecx
  int v15; // ebp
  int v16; // edi
  void *v17; // eax
  void *v18; // ecx
  void *v19; // eax
  void *v20; // eax
  void *v21; // eax
  char *v23; // ebp
  int v24; // ebp
  void *v25; // eax
  void *v26; // eax
  void *v27; // eax
  int v28; // eax
  int v29; // ebp
  int v33; // eax
  int v34; // ecx
  float v36; // edx
  int v37; // eax
  int v38; // ecx
  int v41; // eax
  int v42; // ecx
  int v45; // eax
  int v46; // ecx
  double v48; // st5
  double v50; // st5
  double v51; // st5
  int v52; // ecx
  float v53; // eax
  float v54; // edx
  double v55; // st5
  int v56; // eax
  int v57; // ecx
  float v59; // edx
  double v60; // st6
  int v61; // ecx
  float v63; // edx
  double v64; // st7
  double v65; // st7
  int v66; // ecx
  float v67; // edx
  unsigned int v69; // ecx
  void *v70; // eax
  void *v71; // eax
  float v72; // [esp+2Ch] [ebp-13Ch] BYREF
  float v76; // [esp+3Ch] [ebp-12Ch]
  float v80; // [esp+4Ch] [ebp-11Ch]
  float v82; // [esp+54h] [ebp-114h]
  float v83; // [esp+58h] [ebp-110h]
  float v86; // [esp+64h] [ebp-104h]
  float v87; // [esp+68h] [ebp-100h]
  float v88; // [esp+6Ch] [ebp-FCh]
  float v91; // [esp+78h] [ebp-F0h]
  float v92; // [esp+7Ch] [ebp-ECh]
  float v93; // [esp+80h] [ebp-E8h]
  char v94[4]; // [esp+84h] [ebp-E4h] BYREF
  float v98; // [esp+94h] [ebp-D4h]
  float v99; // [esp+98h] [ebp-D0h]
  float v100; // [esp+9Ch] [ebp-CCh]
  unsigned int v101[4]; // [esp+A0h] [ebp-C8h] BYREF
  char v102[48]; // [esp+B0h] [ebp-B8h] BYREF
  float v103; // [esp+E0h] [ebp-88h]
  float v104; // [esp+E4h] [ebp-84h]
  float v105; // [esp+E8h] [ebp-80h]
  float v106; // [esp+ECh] [ebp-7Ch]
  float v107; // [esp+F0h] [ebp-78h]
  float v108; // [esp+F4h] [ebp-74h]
  char v109; // [esp+F8h] [ebp-70h]
  char v110; // [esp+F9h] [ebp-6Fh]
  char v111; // [esp+FAh] [ebp-6Eh]
  char v112; // [esp+FBh] [ebp-6Dh]
  char v113[16]; // [esp+FCh] [ebp-6Ch] BYREF
  unsigned int v114; // [esp+10Ch] [ebp-5Ch]
  int v115; // [esp+110h] [ebp-58h]
  int v116; // [esp+114h] [ebp-54h]
  int v117; // [esp+118h] [ebp-50h]
  unsigned int v118[12]; // [esp+11Ch] [ebp-4Ch] BYREF
  char v119[16]; // [esp+14Ch] [ebp-1Ch] BYREF
  int v120; // [esp+15Ch] [ebp-Ch]
  int v121; // [esp+160h] [ebp-8h]
  int v122; // [esp+164h] [ebp-4h]

  v4 = 0; /*0x755dbc*/
  if ( aP1->ptr_10 ) /*0x755dbe*/
    operator delete((void *)(aP1->ptr_10)); /*0x755dc6*/
  v5 = aP1->__pad_014; /*0x755dce*/
  aP1->ptr_10 = 0; /*0x755dd1*/
  if ( v5 ) /*0x755dd6*/
    operator delete((void *)(v5)); /*0x755dd9*/
  v6 = aP1->ptr_18; /*0x755de1*/
  aP1->__pad_014 = 0; /*0x755de4*/
  if ( v6 ) /*0x755de9*/
    operator delete((void *)(v6)); /*0x755dec*/
  v7 = (int)(a3_2); /*0x755df4*/
  aP1->ptr_18 = 0; /*0x755dfb*/
  if ( !(*(int (**)(int, int))(a3_2->__pad_01C)(a3_2, 1) ) /*0x755e09*/
    return 0; /*0x755e09*/
  (*(void (**)(int, char *, int))(a3_2->ptr_24)(a3_2, v113, 32); /*0x755e1d*/
  v115 = v115; /*0x755e20*/
  v116 = v116; /*0x755e27*/
  v117 = v117; /*0x755e2e*/
  aP1->ptr_10 = v115; /*0x755e35*/
  aP1->ptr_8 = v116; /*0x755e3b*/
  aP1->__pad_00C = v117; /*0x755e42*/
  v11 = operator new(12 * v115); /*0x755e45*/
  v12 = aP1->ptr_8; /*0x755e4a*/
  aP1->ptr_10 = v11; /*0x755e4d*/
  v13 = COERCE_FLOAT(operator new(164 * v12)); /*0x755e5c*/
  v72 = v13; /*0x755e66*/
  if ( v13 == 0.0 ) /*0x755e6a*/
  {
    v13 = 0.0; /*0x755e99*/
  }
  else
  {
    v14 = v12 - 1; /*0x755e6c*/
    if ( v12 - 1 >= 0 ) /*0x755e71*/
    {
      v15 = (*((unsigned int *)&(v13))) + 64; /*0x755e73*/
      v16 = v14 + 1; /*0x755e76*/
      do /*0x755e8f*/
      {
        Array::ForEach(v15, 12, 8, __0Iostream_init_QAE_XZ_8); /*0x755e83*/
        v15 += 164; /*0x755e88*/
        --v16; /*0x755e8e*/
      }
      while ( v16 ); /*0x755e8f*/
      v13 = v72; /*0x755e91*/
      v4 = 0; /*0x755e95*/
    }
  }
  aP1->__pad_014 = v13; /*0x755e9b*/
  v17 = operator new(aP1->__pad_00C); /*0x755ea2*/
  v18 = aP1->ptr_10; /*0x755ea7*/
  aP1->ptr_18 = v17; /*0x755eaf*/
  if ( !v18 ) /*0x755eb2*/
  {
  LABEL_67:
    v71 = aP1->__pad_014; /*0x756453*/
    aP1->ptr_10 = 0; /*0x756456*/
    if ( v71 ) /*0x75645b*/
      operator delete((void *)(v71)); /*0x75645e*/
    v70 = aP1->ptr_18; /*0x756466*/
    aP1->__pad_014 = 0; /*0x756469*/
    if ( !v70 ) /*0x75646e*/
      goto LABEL_71; /*0x75646e*/
    goto LABEL_70; /*0x75646e*/
  }
  if ( !aP1->__pad_014 || !v17 ) /*0x755ec3*/
  {
    operator delete((void *)(v18)); /*0x75644b*/
    goto LABEL_67; /*0x75644b*/
  }
  if ( a3_2 ) /*0x755ed0*/
  {
    VoxelPalette::Init(&unk_B2FB78, &g_VoxelColorPalette); /*0x755ee7*/
    if ( (*(int (**)(int, float *, int))(a3_2->ptr_24)(a3_2, &v72, 1) != 1 ) /*0x755efd*/
    {
      (*(void (**)(int))(*&a3_2->u32_D0))(a3_2); /*0x755f03*/
      if ( aP1->ptr_10 ) /*0x755f06*/
        operator delete((void *)(aP1->ptr_10)); /*0x755f0e*/
      v19 = aP1->__pad_014; /*0x755f16*/
      aP1->ptr_10 = 0; /*0x755f19*/
      if ( v19 ) /*0x755f1e*/
        operator delete((void *)(v19)); /*0x755f21*/
      v20 = aP1->ptr_18; /*0x755f29*/
      aP1->__pad_014 = 0; /*0x755f2c*/
      if ( !v20 ) /*0x755f31*/
        goto LABEL_32; /*0x755f31*/
      goto LABEL_31; /*0x755f31*/
    }
    if ( (*(int (**)(int, char *, int))(a3_2->ptr_24)(a3_2, v94, 1) != 1 ) /*0x755f46*/
    {
      (*(void (**)(int))(*&a3_2->u32_D0))(a3_2); /*0x755f4c*/
      if ( aP1->ptr_10 ) /*0x755f4f*/
        operator delete((void *)(aP1->ptr_10)); /*0x755f57*/
      v21 = aP1->__pad_014; /*0x755f5f*/
      aP1->ptr_10 = 0; /*0x755f62*/
      if ( v21 ) /*0x755f67*/
        operator delete((void *)(v21)); /*0x755f6a*/
      v20 = aP1->ptr_18; /*0x755f72*/
      aP1->__pad_014 = 0; /*0x755f75*/
      if ( !v20 ) /*0x755f7a*/
        goto LABEL_32; /*0x755f7a*/
  LABEL_31:
      operator delete((void *)(v20)); /*0x755f7c*/
  LABEL_32:
      aP1->ptr_18 = 0; /*0x755f85*/
      VoxelPalette::Reset(v118); /*0x755f8f*/
      return 0; /*0x755fa0*/
    }
    v118[0] = (*((unsigned char *)&(v72))); /*0x755fb6*/
    v118[1] = (uint8_t)v94[0]; /*0x755fbd*/
    v23 = (char *)&unk_B2FB79; /*0x755fc4*/
    do /*0x755ff6*/
    {
      (*(void (**)(int, char *, int))(a3_2->ptr_24)(a3_2, v23 - 1, 1); /*0x755fd3*/
      (*(void (**)(int, char *, int))(a3_2->ptr_24)(a3_2, v23, 1); /*0x755fdd*/
      (*(void (**)(int, char *, int))(a3_2->ptr_24)(a3_2, v23 + 1, 1); /*0x755fea*/
      v23 += 3; /*0x755fed*/
    }
    while ( v23 < byte_B2FE79 ); /*0x755ff6*/
    if ( v114 > 1 ) /*0x756002*/
      (*(void (**)(int, unsigned int, int))(a3_2->ptr_28)(a3_2, 768 * v114 - 768, 1); /*0x756016*/
    GenerateLightRemapTable(0, 0); /*0x756022*/
    VoxelPalette::Reset(v118); /*0x75602e*/
  }
  else
  {
    (*(void (**)(int, unsigned int, int))(a3_2->ptr_28)(a3_2, 770 * v114, 1); /*0x75604d*/
  }
  if ( !aP1->ptr_10 ) /*0x756055*/
  {
  LABEL_43:
    if ( (*(int (**)(int, unsigned int, unsigned int))(a3_2->ptr_24)( /*0x7560b5*/
           a3_2,
           aP1->ptr_18,
           aP1->__pad_00C) == aP1->__pad_00C )
    {
      v28 = aP1->ptr_8; /*0x75612d*/
      v72 = 0.0; /*0x756134*/
      if ( !v28 ) /*0x756138*/
      {
  LABEL_59:
        (*(void (**)(int))(*&v7->u32_D0))(v7); /*0x7563fe*/
        return 1; /*0x756414*/
      }
      v29 = 0; /*0x75613e*/
      while ( (*(int (**)(int, unsigned int *, int))(v7->ptr_24)(v7, v101, 92) == 92 ) /*0x756158*/
      {
        *(unsigned char *)(aP1->__pad_014 + v29 + 160) = v109; /*0x756168*/
        *(unsigned char *)(aP1->__pad_014 + v29 + 161) = v110; /*0x756179*/
        *(unsigned char *)(aP1->__pad_014 + v29 + 162) = v111; /*0x75618a*/
        *(unsigned char *)(aP1->__pad_014 + v29 + 163) = v112; /*0x75619b*/
        *(float *)(aP1->__pad_014 + v29 + 12) = *(float *)&v101[3]; /*0x7561b3*/
        memcpy((void *)(aP1->__pad_014 + v29 + 16), (const void *)Matrix::Copy12Float(v102), 0x30u); /*0x7561d2*/
        v103 = v103; /*0x7561d4*/
        v104 = v104; /*0x7561db*/
        v105 = v105; /*0x7561e2*/
        v106 = v106; /*0x7561fe*/
        v106 = v106; /*0x756210*/
        v33 = aP1->__pad_014; /*0x756214*/
        v107 = v107; /*0x756217*/
        v107 = v107; /*0x75621b*/
        v105 = v105; /*0x756226*/
        v108 = v108; /*0x75622e*/
        v34 = v33 + v29 + 64; /*0x756236*/
        v107 = v107; /*0x75623a*/
        v106 = v106; /*0x75623e*/
        *(float *)v34 = v106; /*0x756242*/
        v36 = v105; /*0x756244*/
        *(float *)(v34 + 4) = v107; /*0x75624a*/
        v86 = v104; /*0x75624d*/
        *(float *)(v34 + 8) = v36; /*0x756251*/
        v37 = aP1->__pad_014; /*0x756254*/
        v87 = v105; /*0x75625d*/
        v38 = v37 + v29 + 76; /*0x756261*/
        v86 = v86; /*0x756265*/
        *(float *)v38 = v106; /*0x75626b*/
        v87 = v87; /*0x75626d*/
        v98 = v103; /*0x756271*/
        *(float *)(v38 + 4) = v86; /*0x756275*/
        *(float *)(v38 + 8) = v87; /*0x75627a*/
        v41 = aP1->__pad_014; /*0x75627d*/
        v99 = v104; /*0x756284*/
        v42 = v41 + v29 + 88; /*0x756288*/
        v99 = v99; /*0x75628c*/
        v100 = v105; /*0x756292*/
        *(float *)v42 = v98; /*0x756299*/
        v100 = v100; /*0x75629d*/
        *(float *)(v42 + 4) = v99; /*0x7562a4*/
        v91 = v103; /*0x7562a7*/
        v92 = v107; /*0x7562af*/
        *(float *)(v42 + 8) = v100; /*0x7562b3*/
        v45 = aP1->__pad_014; /*0x7562b6*/
        v93 = v105; /*0x7562bd*/
        v46 = v45 + v29 + 100; /*0x7562c5*/
        v92 = v92; /*0x7562c9*/
        v76 = v106; /*0x7562cd*/
        v48 = v107; /*0x7562d1*/
        *(float *)v46 = v91; /*0x7562d5*/
        v93 = v93; /*0x7562d7*/
        v48 = v48; /*0x7562db*/
        v50 = v108; /*0x7562df*/
        *(float *)(v46 + 4) = v92; /*0x7562e3*/
        v50 = v50; /*0x7562e6*/
        v51 = v106; /*0x7562ea*/
        *(float *)(v46 + 8) = v93; /*0x7562ee*/
        v52 = aP1->__pad_014 + v29 + 112; /*0x7562f8*/
        v53 = v48; /*0x7562fc*/
        v51 = v51; /*0x756300*/
        *(float *)v52 = v76; /*0x756304*/
        v54 = v50; /*0x756306*/
        *(float *)(v52 + 4) = v53; /*0x75630c*/
        v80 = v104; /*0x75630f*/
        v55 = v108; /*0x756313*/
        *(float *)(v52 + 8) = v54; /*0x756317*/
        v56 = aP1->__pad_014; /*0x75631a*/
        v55 = v55; /*0x756321*/
        v57 = v56 + v29 + 124; /*0x756325*/
        v80 = v80; /*0x756329*/
        *(float *)v57 = v51; /*0x75632f*/
        v59 = v55; /*0x756331*/
        v82 = v103; /*0x756335*/
        *(float *)(v57 + 4) = v80; /*0x756339*/
        v83 = v104; /*0x75633c*/
        v60 = v108; /*0x756340*/
        *(float *)(v57 + 8) = v59; /*0x756344*/
        v61 = aP1->__pad_014 + v29 + 136; /*0x75634e*/
        v83 = v83; /*0x756355*/
        v60 = v60; /*0x756359*/
        *(float *)v61 = v82; /*0x75635d*/
        v63 = v60; /*0x75635f*/
        v88 = v103; /*0x756363*/
        v64 = v107; /*0x756367*/
        *(float *)(v61 + 4) = v83; /*0x75636b*/
        v64 = v64; /*0x75636e*/
        v65 = v108; /*0x756372*/
        *(float *)(v61 + 8) = v63; /*0x756376*/
        v66 = aP1->__pad_014 + v29 + 148; /*0x756380*/
        v65 = v65; /*0x756387*/
        *(float *)v66 = v88; /*0x75638b*/
        v67 = v65; /*0x756391*/
        *(float *)(v66 + 4) = v64; /*0x756395*/
        v7 = a3_2; /*0x756398*/
        v29 += 164; /*0x75639f*/
        *(float *)(v66 + 8) = v67; /*0x7563a5*/
        *(unsigned int *)(aP1->__pad_014 + v29 - 164) = aP1->ptr_18 + v101[0]; /*0x7563b7*/
        *(unsigned int *)(aP1->__pad_014 + v29 - 160) = aP1->ptr_18 + v101[1]; /*0x7563cd*/
        v72 = v72; /*0x7563e1*/
        *(unsigned int *)(aP1->__pad_014 + v29 - 156) = aP1->ptr_18 + v101[2]; /*0x7563e7*/
        v69 = aP1->ptr_8; /*0x7563ee*/
        (*((unsigned int *)&(v72))) = (*((unsigned int *)&(v72))) + 1; /*0x7563f4*/
        if ( (*((unsigned int *)&(v72))) + 1 >= v69 ) /*0x7563f8*/
          goto LABEL_59; /*0x7563f8*/
      }
      if ( aP1->ptr_10 ) /*0x756417*/
        operator delete((void *)(aP1->ptr_10)); /*0x75641f*/
      v25 = aP1->__pad_014; /*0x756427*/
      aP1->ptr_10 = 0; /*0x75642a*/
      if ( v25 ) /*0x75642f*/
        goto LABEL_63; /*0x75642f*/
    }
    else
    {
      if ( aP1->ptr_10 ) /*0x7560b7*/
        operator delete((void *)(aP1->ptr_10)); /*0x7560c1*/
      v25 = aP1->__pad_014; /*0x7560c9*/
      aP1->ptr_10 = 0; /*0x7560cc*/
      if ( v25 ) /*0x7560d1*/
  LABEL_63:
        operator delete((void *)(v25)); /*0x756431*/
    }
    v70 = aP1->ptr_18; /*0x75643a*/
    aP1->__pad_014 = 0; /*0x75643d*/
    if ( !v70 ) /*0x756442*/
    {
  LABEL_71:
      aP1->ptr_18 = 0; /*0x756479*/
      (*(void (**)(int))(*&v7->u32_D0))(v7); /*0x756480*/
      return 0; /*0x756486*/
    }
  LABEL_70:
    operator delete((void *)(v70)); /*0x756470*/
    goto LABEL_71; /*0x756471*/
  }
  v24 = 0; /*0x756057*/
  while ( (*(int (**)(int, char *, int))(a3_2->ptr_24)(a3_2, v119, 28) == 28 ) /*0x75606d*/
  {
    ++v4; /*0x756079*/
    *(unsigned int *)(aP1->ptr_10 + v24) = v120; /*0x75607a*/
    *(unsigned int *)(aP1->ptr_10 + v24 + 4) = v121; /*0x756087*/
    *(unsigned char *)(aP1->ptr_10 + v24 + 8) = v122; /*0x756095*/
    v24 += 12; /*0x75609c*/
    if ( v4 >= aP1->ptr_10 ) /*0x7560a1*/
      goto LABEL_43; /*0x7560a1*/
  }
  if ( aP1->ptr_10 ) /*0x7560dc*/
    operator delete((void *)(aP1->ptr_10)); /*0x7560e6*/
  v26 = aP1->__pad_014; /*0x7560ee*/
  aP1->ptr_10 = 0; /*0x7560f1*/
  if ( v26 ) /*0x7560f6*/
    operator delete((void *)(v26)); /*0x7560f9*/
  v27 = aP1->ptr_18; /*0x756101*/
  aP1->__pad_014 = 0; /*0x756104*/
  if ( v27 ) /*0x756109*/
    operator delete((void *)(v27)); /*0x75610c*/
  aP1->ptr_18 = 0; /*0x756114*/
  (*(void (**)(int))(*&a3_2->u32_D0))(a3_2); /*0x75611b*/
  return 0; /*0x755f94*/
}
}
// 0x756590
namespace gamemd {
int Voxel::ProcessColor(unsigned int *a2, float *a3)
{

  int v4; // ebx
  int v5; // esi
  unsigned __int8 v6; // dl
  int v7; // ecx
  float *v8; // edi
  float *v9; // edx
  int v10; // ecx
  int v11; // edx
  double v12; // st7
  int v13; // esi
  int result; // eax
  float *v15; // [esp+10h] [ebp-44h]
  unsigned __int8 v16; // [esp+14h] [ebp-40h]
  float v17; // [esp+14h] [ebp-40h]
  unsigned __int8 v18; // [esp+1Ch] [ebp-38h]
  unsigned int v19[6]; // [esp+20h] [ebp-34h] BYREF
  __int16 v20; // [esp+38h] [ebp-1Ch]
  __int16 v21; // [esp+3Ah] [ebp-1Ah]
  __int16 v22; // [esp+3Ch] [ebp-18h]
  __int16 v23; // [esp+3Eh] [ebp-16h]
  __int16 v24; // [esp+40h] [ebp-14h]
  __int16 v25; // [esp+42h] [ebp-12h]
  __int16 v26; // [esp+44h] [ebp-10h]
  __int16 v27; // [esp+46h] [ebp-Eh]
  __int16 v28; // [esp+48h] [ebp-Ch]
  __int16 v29; // [esp+4Ah] [ebp-Ah]
  __int16 v30; // [esp+4Ch] [ebp-8h]
  __int16 v31; // [esp+4Eh] [ebp-6h]
  unsigned __int8 v32; // [esp+50h] [ebp-4h]
  unsigned __int8 v33; // [esp+51h] [ebp-3h]
  unsigned __int8 v34; // [esp+52h] [ebp-2h]
  float *v35; // [esp+58h] [ebp+4h]
  float v36; // [esp+5Ch] [ebp+8h]

  v4 = this->u32_14 + 164 * (a2[2] + *(unsigned int *)(this->u32_10 + 12 * a2[1])); /*0x7565b8*/
  v5 = 9 * a2[3]; /*0x7565be*/
  v16 = *(unsigned char *)(v4 + 161); /*0x7565cd*/
  v6 = *(unsigned char *)(v4 + 162); /*0x7565d1*/
  v32 = *(unsigned char *)(v4 + 160); /*0x7565db*/
  v18 = v6; /*0x7565e3*/
  v33 = v16; /*0x7565e7*/
  v34 = v6; /*0x7565eb*/
  v19[0] = *(unsigned int *)v4; /*0x7565f1*/
  v19[1] = *(unsigned int *)(v4 + 4); /*0x7565f8*/
  v7 = 3 * dword_8468C4[v5]; /*0x756605*/
  v19[2] = *(unsigned int *)(v4 + 8); /*0x756608*/
  v8 = (float *)&a2[v7 + 10]; /*0x75660c*/
  v35 = (float *)&a2[3 * dword_8468CC[v5] + 10]; /*0x756630*/
  v9 = (float *)&a2[3 * dword_8468D0[v5] + 10]; /*0x756637*/
  v10 = dword_8468E0[v5]; /*0x756641*/
  v19[4] = dword_8468DC[v5]; /*0x756647*/
  v15 = v9; /*0x75664f*/
  v11 = dword_8468D8[v5]; /*0x756658*/
  v19[5] = v32 * v10; /*0x756661*/
  v19[3] = (v32 - 1) * dword_8468D4[v5] + v32 * (v16 - 1) * v11; /*0x75668a*/
  v20 = Math::RoundToInt((*v8 + 128.0 - *a3) * 256.0); /*0x7566a7*/
  v21 = Math::RoundToInt((v8[1] + 128.0 - a3[1]) * 256.0); /*0x7566cb*/
  v12 = (double)v32; /*0x7566e7*/
  v22 = Math::RoundToInt((v8[2] + 128.0 - a3[2]) * 256.0); /*0x7566eb*/
  v23 = Math::RoundToInt(v12); /*0x75670a*/
  v26 = Math::RoundToInt(v12); /*0x756726*/
  v29 = Math::RoundToInt(v12); /*0x756757*/
  v24 = Math::RoundToInt(v12); /*0x756773*/
  v27 = Math::RoundToInt(v12); /*0x75678d*/
  v30 = Math::RoundToInt(v12); /*0x7567ab*/
  if ( dword_B43180 ) /*0x7567b7*/
  {
    v25 = Math::RoundToInt(v12); /*0x7567d0*/
    v36 = (float)v16; /*0x75670f*/
    v28 = Math::RoundToInt((v35[2] - v8[2]) / v36 * 256.0); /*0x7567f0*/
    v17 = (float)v18; /*0x756740*/
    v31 = Math::RoundToInt((v15[2] - v8[2]) / v17 * 256.0); /*0x75680a*/
  }
  v13 = dword_8468C0[v5]; /*0x756818*/
  if ( dword_B43180 ) /*0x756820*/
    v13 |= 2u; /*0x756822*/
  if ( dword_B43184 ) /*0x75682c*/
    v13 |= 4u; /*0x75682e*/
  if ( !*(unsigned char *)(v4 + 163) ) /*0x756831*/
    v13 |= 8u; /*0x75683b*/
  LOBYTE(result) = ((char (__usercall *)@<al>(int@<ebx>, int@<edi>, int))funcs_756843[v13])(v4, (int)v8, (int)v19); /*0x756843*/
  return result; /*0x75684d*/

}
}
// 0x75C240
namespace gamemd {
void* Voxel::DrawHelper(IUnknown * aP1)
{

  int *Voxel_field_0x28; // ebx
  int *Voxel_field_0xC; // ecx
  int v6; // ecx
  int v7; // eax
  int v8; // ebx
  int v9; // ebp
  unsigned short *v10; // eax
  int v11; // ecx
  int v12; // ebp
  int v13; // ebx
  unsigned short *v14; // eax
  int v15; // eax
  unsigned int *v16; // ebx
  CellClass *v17; // eax
  int v18; // eax
  unsigned int *v19; // ebp
  CellClass *v20; // eax
  int v21; // ebx
  CellClass *v22; // eax
  int *v23; // eax
  signed int v24; // edi
  CellClass *v25; // eax
  int *v26; // eax
  CellClass *v27; // eax
  int v28; // eax
  int *v30; // ecx
  int v31; // [esp-4h] [ebp-2Ch]
  char v32[4]; // [esp+Ch] [ebp-1Ch]
  char v33; // [esp+Ch] [ebp-1Ch]
  __int16 v34; // [esp+Eh] [ebp-1Ah]
  int v35; // [esp+10h] [ebp-18h] BYREF
  int v36; // [esp+14h] [ebp-14h]
  int v37; // [esp+18h] [ebp-10h]
  unsigned int v38[3]; // [esp+1Ch] [ebp-Ch] BYREF
  char v39; // [esp+2Ch] [ebp+4h]

  Voxel_field_0x28 = this->u32_28; /*0x75c251*/
  if ( this->u32_28 == g_AsyncMovieState /*0x75c26e*/
    && this->u32_2C == g_MovieFrameState1
    && *(unsigned int *)this->u32_30 == g_MovieFrameState2 )
  {
    Voxel_field_0xC = (int *)this->u32_C; /*0x75c278*/
    v35 = Voxel_field_0xC[39]; /*0x75c287*/
    v36 = Voxel_field_0xC[40]; /*0x75c28e*/
    v37 = Voxel_field_0xC[41]; /*0x75c295*/
    (*(void (**)(int *))(*Voxel_field_0xC + 244))(&v35); /*0x75c2a0*/
  }
  else
  {
    (*(void (**)(int *))(*(unsigned int *)this->u32_C + 244))(this->u32_28); /*0x75c276*/
  }
  v39 = 0; /*0x75c2aa*/
  v38[0] = *aP1; /*0x75c2b3*/
  v6 = *aP1; /*0x75c2b7*/
  v38[1] = aP1[1]; /*0x75c2bc*/
  v38[2] = aP1[2]; /*0x75c2c3*/
  if ( v6 == g_AsyncMovieState && aP1[1] == g_MovieFrameState1 && aP1[2] == g_MovieFrameState2 )
  {
    *Voxel_field_0x28 = *aP1; /*0x75c5b7*/
    this->u32_2C = aP1[1]; /*0x75c5bc*/
    *(unsigned int *)this->u32_30 = aP1[2]; /*0x75c5c2*/
  }
  else
  {
    if ( (*(int (**)(int))(*(unsigned int *)this->u32_C + 388))(this->u32_C) == 8 /*0x75c33c*/
      || (*(int (**)(int))(*(unsigned int *)this->u32_C + 388))(this->u32_C) == 9
      || (*(int (**)(int))(*(unsigned int *)this->u32_C + 388))(this->u32_C) == 7
      || (*(int (**)(int))(*(unsigned int *)this->u32_C + 388))(this->u32_C) == 11
      || (*(int (**)(int))(*(unsigned int *)this->u32_C + 388))(this->u32_C) == 25 )
    {
      v7 = this->u32_C; /*0x75c342*/
      v8 = v7->u32_5A4; /*0x75c345*/
      if ( v8 ) /*0x75c34d*/
      {
        if ( (*(int (**)(unsigned int))(*(unsigned int *)v8 + 44))(v7->u32_5A4) == 1 ) /*0x75c359*/
        {
          v34 = aP1[1] / 256; /*0x75c37e*/
          v9 = *aP1 / 256; /*0x75c385*/
          v10 = (unsigned short *)(*(int (**)(int, int *))(*(unsigned int *)v8 + 440))(v8, &v35); /*0x75c388*/
          if ( *v10 == (unsigned short)v9 && v10[1] == v34 ) /*0x75c39c*/
            v39 = 1; /*0x75c39e*/
        }
      }
      v11 = *(unsigned int *)&this->u32_C->u32_5A4; /*0x75c3a6*/
      *(unsigned int *)v32 = v11; /*0x75c3ae*/
      if ( v11 ) /*0x75c3b2*/
      {
        if ( (*(int (**)(int))(*(unsigned int *)v11 + 44))(v11) == 2 ) /*0x75c3bc*/
        {
          v12 = *aP1 / 256; /*0x75c3e4*/
          v13 = aP1[1] / 256; /*0x75c3e7*/
          v14 = (unsigned short *)(*(int (**)(char *, int *))(**&v32->u32_6E0))(*(char **)v32, &v35); /*0x75c3ea*/
          if ( *v14 == (unsigned short)v12 && v14[1] == (unsigned short)v13 ) /*0x75c3f9*/
            v39 = 1; /*0x75c3fb*/
        }
      }
      v15 = this->u32_C; /*0x75c400*/
      v16 = v15->u32_5A4; /*0x75c403*/
      if ( v16 ) /*0x75c40b*/
      {
        if ( (*(int (**)(unsigned int))(*v16 + 44))(v15->u32_5A4) == 6 ) /*0x75c417*/
        {
          v17 = Coord::To_Cell((Coord *)&DataGlobal_87F7E8, aP1); /*0x75c41f*/
          if ( Cell::IsBridge((Cell *)v17) == v16 ) /*0x75c42d*/
            v39 = 1; /*0x75c42f*/
        }
      }
    }
    v18 = *(unsigned int *)&this->u32_C->u32_2DC; /*0x75c439*/
    if ( v18 )
    {
      if ( v18->u32_2D8 )
      {
        v19 = (unsigned int *)this->u32_C; /*0x75c44b*/
        v35 = 0; /*0x75c44f*/
        v36 = 0; /*0x75c453*/
        v20 = Coord::To_Cell((Coord *)&DataGlobal_87F7E8, aP1); /*0x75c463*/
        if ( Object::FindClosestObjectCell((Object *)v20, &v35, 0, 0) == v19[183] )
        {
          v21 = v19 ? ((*(int (**)(unsigned int *))(*v19 + 44))(v19) == 15 ? (unsigned int)v19 : 0) : 0;
          v22 = Coord::To_Cell((Coord *)&DataGlobal_87F7E8, aP1); /*0x75c49a*/
          if ( BuildingClass::CheckBridge(*(BuildingClass **)(*(unsigned int *)(this->u32_C + 732) + 728), v21, v22) ) /*0x75c4b0*/
            v39 = 1; /*0x75c4b9*/
        }
      }
    }
    if ( (Coord::To_Cell((Coord *)&DataGlobal_87F7E8, v38)->flags[0] & 0x100) == 0 /*0x75c513*/
      || (v23 = (int *)&this->u32_C->q09C,
          v35 = *v23,
          v36 = v23[1],
          v24 = v23[2],
          v33 = 1,
          v24 <= (int)(3 * dword_B45C28 + Cell::GetGroundHeight(v38))) )
    {
      v33 = 0; /*0x75c515*/
    }
    v25 = Coord::To_Cell((Coord *)&DataGlobal_87F7E8, v38); /*0x75c53a*/
    v26 = ObjectPlacement::CalcPosition((ObjectPlacement *)v25, &v35, v38, v39, v33, 0); /*0x75c541*/
    Voxel_field_0x28 = this->u32_28; /*0x75c548*/
    this->u32_28 = *v26; /*0x75c54d*/
    this->u32_2C = v26->vtable2; /*0x75c552*/
    v31 = this->u32_C; /*0x75c55b*/
    *(unsigned int *)this->u32_30 = v26->vtable3; /*0x75c562*/
    v27 = Coord::To_Cell((Coord *)&DataGlobal_87F7E8, this->u32_28); /*0x75c565*/
    if ( !(unsigned __int8)CrateClass::ProcessPickup((CrateClass *)v27, v31) ) /*0x75c56c*/
    {
      v28 = this->u32_C; /*0x75c575*/
      if ( !v28->u32_81 ) /*0x75c578*/
      {
        *Voxel_field_0x28 = g_AsyncMovieState; /*0x75c58a*/
        this->u32_2C = g_MovieFrameState1; /*0x75c592*/
        *(unsigned int *)this->u32_30 = g_MovieFrameState2; /*0x75c59b*/
        if ( !v28->u32_90 ) /*0x75c59e*/
          return 0; /*0x75c5b0*/
      }
    }
  }
  if ( *Voxel_field_0x28 == g_AsyncMovieState /*0x75c5e7*/
    && Voxel_field_0x28->vtable2 == g_MovieFrameState1
    && Voxel_field_0x28->vtable3 == g_MovieFrameState2 )
  {
    v30 = (int *)this->u32_C; /*0x75c602*/
    v35 = v30[39]; /*0x75c611*/
    v36 = v30[40]; /*0x75c618*/
    v37 = v30[41]; /*0x75c61f*/
    (*(void (**)(int *, int *))(*v30 + 240))(v30, &v35); /*0x75c62a*/
    return 0; /*0x75c632*/
  }
  else
  {
    (*(void (**)(int, int *))(*(unsigned int *)this->u32_C + 240))( /*0x75c5f1*/
      this->u32_C,
      Voxel_field_0x28);
    return 1; /*0x75c5f9*/
  }

}
}
// 0x75EDF0
namespace gamemd {
int Voxel::BlendShadowColor(int a2, WaveClass * aP2, int arg8, unsigned short * a4)
{

  __int64 v5; // rax
  int v6; // esi
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // esi
  int result; // eax

  v5 = word_B46254[(int)this->q130 /*0x75ee44*/
                 + (unsigned __int16)word_B4669C[300 * arg8 + abs32(a2 - (unsigned int)this->q0CC - aP2)]];
  LODWORD(v5) = (HIDWORD(v5) ^ v5) - HIDWORD(v5); /*0x75ee47*/
  v6 = dword_B46648[(unsigned int)v5]; /*0x75ee50*/
  WORD2(v5) = a4[*(unsigned int *)&this->__pad_134[4 * v5 + 212]]; /*0x75ee57*/
  v7 = ((v6 * (unsigned __int8)((unsigned __int8)(WORD2(v5) >> g_BitMask_Green) << g_BitMask_Blue)) >> 8) /*0x75eeb8*/
     + (unsigned __int8)((unsigned __int8)(WORD2(v5) >> g_BitMask_Green) << g_BitMask_Blue);
  v8 = ((v6 * (unsigned __int8)((unsigned __int8)(WORD2(v5) >> g_BitShift_Blue) << g_BitMask_Red)) >> 8) /*0x75eec6*/
     + (unsigned __int8)((unsigned __int8)(WORD2(v5) >> g_BitShift_Blue) << g_BitMask_Red);
  v9 = (unsigned __int8)((unsigned __int8)(WORD2(v5) >> g_BitShift_Red) << g_BitShift_Green_0); /*0x75eec8*/
  if ( v8 > 255 ) /*0x75eed3*/
    v8 = 255; /*0x75eed5*/
  v10 = 255; /*0x75eee0*/
  if ( v7 <= 255 ) /*0x75eee5*/
    v10 = v7; /*0x75eee7*/
  result = v8 >> g_BitMask_Red << g_BitShift_Blue; /*0x75ef07*/
  *a4 = (v9 >> g_BitShift_Green_0 << g_BitShift_Red) | result | (v10 >> g_BitMask_Blue << g_BitMask_Green); /*0x75ef19*/
  return result; /*0x75ef1c*/

}
}
// 0x75F140
namespace gamemd {
int Voxel::loadSectionData()
{

  int v2; // eax
  int v3; // edx
  int v4; // ecx
  char *v5; // eax
  int result; // eax

  v2 = (*(int (**)(AudioStream *))(*(unsigned int *)g_DSurface_Hidden_2 + 116))(g_DSurface_Hidden_2) >> 1; /*0x75f14e*/
  *&this->u32_1AC = -v2; /*0x75f159*/
  *&this->u32_1B0 = 1 - v2; /*0x75f164*/
  *&this->u32_1B8 = v2 + 1; /*0x75f16a*/
  *&this->u32_1BC = v2; /*0x75f176*/
  *&this->q1C0 = v2 - 1; /*0x75f17c*/
  v3 = *&this->u32_1CC; /*0x75f182*/
  v4 = -1 - v2; /*0x75f188*/
  *&this->q208 = 0; /*0x75f18c*/
  *&this->u32_20C = 0; /*0x75f192*/
  v5 = &this->__pad_134[4 * v3 + 120]; /*0x75f198*/
  *&this->u32_1B4 = 1; /*0x75f19f*/
  *&this->u32_1C4 = -1; /*0x75f1a9*/
  *&this->u32_1C8 = v4; /*0x75f1b3*/
  *&this->u32_210 = *(unsigned int *)v5; /*0x75f1bb*/
  *&this->u32_214 = *(unsigned int *)v5; /*0x75f1c3*/
  *&this->u32_218 = *(unsigned int *)v5; /*0x75f1cb*/
  *&this->u32_21C = *(unsigned int *)v5; /*0x75f1d3*/
  *&this->q220 = *(unsigned int *)v5; /*0x75f1db*/
  *&this->q224 = 2 * *(unsigned int *)v5; /*0x75f1e5*/
  *&this->q228 = 2 * *(unsigned int *)v5; /*0x75f1ef*/
  *&this->u32_22C = 2 * *(unsigned int *)v5; /*0x75f1f9*/
  *&this->u32_230 = 3 * *(unsigned int *)v5; /*0x75f204*/
  *&this->u32_234 = 3 * *(unsigned int *)v5; /*0x75f20f*/
  result = 3 * *(unsigned int *)v5; /*0x75f217*/
  *&this->u32_238 = result; /*0x75f21a*/
  return result; /*0x75f220*/

}
}
// 0x75F4C0
namespace gamemd {
CellStruct * * Voxel::renderSection(ObjectClass * aP1)
{
  int16_t *v3; // eax
  int v4; // edx
  char *v5; // esi
  int v6; // eax
  int v7; // ecx
  int v8; // edx

  v3 = (int16_t *)((CellCoord *)((CellCoord *)&DataGlobal_87F7E8))->To_CellObj(aP1); /*0x75f4cd*/
  v4 = *&this->u32_1F0; /*0x75f4d2*/
  v5 = &this->u32_1F0; /*0x75f4d8*/
  aP1 = v3; /*0x75f4de*/
  v6 = (*(int (**)(char *, int16_t **))(v4 + 16))(v5, &aP1); /*0x75f4e9*/
  if ( v6 == -1 ) /*0x75f4ef*/
  {
    v7 = *((unsigned int *)v5 + 2); /*0x75f4f1*/
    if ( *((unsigned int *)v5 + 4) < v7 /*0x75f51b*/
      || (((*((unsigned char *)&(v6))) = v5[13], (unsigned char)v6) || !v7)
      && (v6 = *((unsigned int *)v5 + 5), v6 > 0)
      && ((*((unsigned char *)&(v6))) = (*(int (**)(char *, int, unsigned int))(*(unsigned int *)v5 + 8))(v5, v7 + v6, 0), (unsigned char)v6) )
    {
      v6 = *((unsigned int *)v5 + 4); /*0x75f51d*/
      v8 = *((unsigned int *)v5 + 1); /*0x75f520*/
      *((unsigned int *)v5 + 4) = v6 + 1; /*0x75f526*/
      *(unsigned int *)(v8 + 4 * v6) = aP1; /*0x75f52d*/
    }
  }
  return v6; /*0x75f530*/
}
}
// 0x75FA90
namespace gamemd {
void Voxel::ShadowCalc(WaveClass * aP1, int * a2)
{
  int *v4; // edi
  int v5; // eax
  int v6; // ebp
  int v7; // ecx
  char *v8; // ebx
  int v9; // ebp
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  int v13; // eax
  unsigned short *v14; // edi
  int v15; // edx
  unsigned int *v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  uint16_t *v20; // ebx
  unsigned short *v21; // edi
  int64_t v22; // rax
  int v23; // ebp
  int v24; // eax
  int m; // ebp
  int v26; // eax
  int v27; // ebx
  int v28; // eax
  unsigned int *v29; // eax
  int v30; // ecx
  int v31; // eax
  int v32; // edi
  int v33; // ecx
  int v34; // ebx
  int v35; // eax
  int v36; // ecx
  unsigned short *v37; // edi
  int v38; // ecx
  int v39; // eax
  int v40; // ebp
  unsigned short *v41; // edi
  uint16_t *v42; // ecx
  int64_t v43; // rax
  int j; // ebx
  int v45; // ebp
  int v46; // eax
  int v47; // ecx
  int v48; // edx
  unsigned int *v49; // eax
  int v50; // ebx
  int v51; // ebp
  int i; // edi
  int k; // [esp+8h] [ebp-3Ch]
  int v54; // [esp+8h] [ebp-3Ch]
  int v55; // [esp+8h] [ebp-3Ch]
  int v56; // [esp+8h] [ebp-3Ch]
  int v57; // [esp+Ch] [ebp-38h]
  int v58; // [esp+10h] [ebp-34h]
  int v59; // [esp+10h] [ebp-34h]
  int v60; // [esp+10h] [ebp-34h]
  int v61; // [esp+14h] [ebp-30h]
  int v63; // [esp+14h] [ebp-30h]
  char *v64; // [esp+18h] [ebp-2Ch]
  unsigned short *v65; // [esp+18h] [ebp-2Ch]
  unsigned short *SamplePosition; // [esp+18h] [ebp-2Ch]
  uint16_t *v67; // [esp+18h] [ebp-2Ch]
  unsigned short *v68; // [esp+18h] [ebp-2Ch]
  int v69; // [esp+1Ch] [ebp-28h]
  StreamClass *v70; // [esp+20h] [ebp-24h]
  int v71; // [esp+20h] [ebp-24h]
  StreamClass *m_Stream; // [esp+20h] [ebp-24h]
  int v73; // [esp+20h] [ebp-24h]
  int v74; // [esp+24h] [ebp-20h]
  int v75; // [esp+24h] [ebp-20h]
  int v77; // [esp+2Ch] [ebp-18h]
  int v78; // [esp+30h] [ebp-14h]
  int v79; // [esp+34h] [ebp-10h]
  int v81; // [esp+38h] [ebp-Ch]
  int v83; // [esp+3Ch] [ebp-8h]
  int v85; // [esp+40h] [ebp-4h]
  uint16_t v86; // [esp+48h] [ebp+4h]
  uint16_t v87; // [esp+48h] [ebp+4h]
  int v88; // [esp+48h] [ebp+4h]
  unsigned int *v90; // [esp+4Ch] [ebp+8h]

  v58 = ZCoordToScreenY(this->WaveClass_field_168); /*0x75faa8*/
  v74 = (*(int (**)(AudioStream *, unsigned int, unsigned int))(*(unsigned int *)g_DSurface_Hidden_2 + 92))( /*0x75fab9*/
          g_DSurface_Hidden_2,
          0,
          0);
  if ( v74 ) /*0x75fabd*/
  {
    v4 = a2; /*0x75fac3*/
    v5 = a2[1]; /*0x75fac9*/
    v78 = v5 + a2[3] - 3; /*0x75fad9*/
    v77 = v5 + 3; /*0x75fadf*/
    v79 = *a2 + 3; /*0x75faf0*/
    v69 = *a2 + a2[2] - 3; /*0x75faf8*/
    v6 = aP1[1] - this->WaveClass_field_17C; /*0x75fb09*/
    v57 = *aP1 - this->WaveClass_field_178; /*0x75fb17*/
    v6 = v6; /*0x75fb1b*/
    ProcessVoxelVertexData(&this->u32_148, &this->u32_148); /*0x75fb1f*/
    if ( this->WaveClass_field_1A8_d ) /*0x75fb24*/
    {
      v7 = this->WaveClass_field_1A0_d; /*0x75fb48*/
      v8 = (char *)DSurface_ViewBounds.field_4 + this->WaveClass_field_1A4_d + v6; /*0x75fb4e*/
      v61 = (int)v8; /*0x75fb50*/
      v9 = (int)&v8[v7 - 1]; /*0x75fb54*/
      if ( v9 >= a2[3] + a2[1] ) /*0x75fb5a*/
      {
        v64 = (char *)(a2[3] + a2[1]); /*0x75fb62*/
        v9 = (int)v64; /*0x75fb66*/
      }
      else
      {
        v64 = &v8[v7 - 1]; /*0x75fb5c*/
      }
      Voxel::loadSectionData(); /*0x75fb6a*/
      v10 = this->WaveClass_field_1CC_d; /*0x75fb6f*/
      if ( v10 <= 1 || v10 >= 6 ) /*0x75fb81*/
      {
        SamplePosition = (unsigned short *)Audio::GetSamplePosition( /*0x75fe6e*/
                                    (int *)g_ZBufferDescriptor,
                                    0,
                                    v8 - (char *)DSurface_ViewBounds.field_4);
        v35 = (*(int (**)(AudioStream *))(*(unsigned int *)g_DSurface_Hidden_2 + 124))(g_DSurface_Hidden_2); /*0x75fe74*/
        (*(((unsigned short *)&(v36)) + 1)) = (*(((unsigned short *)&(g_ZBufferDescriptor)) + 1)); /*0x75fe77*/
        v81 = v9 - (unsigned int)v8; /*0x75fe88*/
        m_Stream = g_ZBufferDescriptor[2].m_Stream; /*0x75fe90*/
        if ( (unsigned int)&SamplePosition[v35 + (unsigned int)m_Stream * (v9 - (unsigned int)v8 + 1)] >= g_ZBufferDescriptor[1].Stream_field_08 ) /*0x75fea6*/
        {
          (*((unsigned short *)&(v36))) = (*((unsigned short *)&(g_ZBufferDescriptor[1].Stream_field_10))) - v9; /*0x76000b*/
          v46 = v9; /*0x76000e*/
          v56 = v9; /*0x760012*/
          v47 = v36 - v58 - 2; /*0x760016*/
          v88 = v47; /*0x76001b*/
          if ( v9 >= (int)v8 ) /*0x76001f*/
          {
            v73 = 8 * v81; /*0x76002c*/
            do /*0x760149*/
            {
              v48 = v4[1]; /*0x760030*/
              if ( v46 >= v48 + 2 && v46 <= v48 + v4[3] - 2 ) /*0x760047*/
              {
                v49 = (unsigned int *)(this->WaveClass_field_1A8_d + v73); /*0x760060*/
                v50 = v49[1] + v57; /*0x76006a*/
                if ( v50 >= *v4 + v4[2] - 2 ) /*0x76006e*/
                  v50 = *v4 + v4[2] - 2; /*0x760070*/
                v60 = v57 + *v49; /*0x76007f*/
                if ( v60 <= *v4 + 2 ) /*0x760083*/
                  v60 = *v4 + 2; /*0x760085*/
                v68 = (unsigned short *)(v74 /*0x7600b4*/
                              + 2
                              * (v50
                               + v56
                               * ((*(int (**)(AudioStream *))(*(unsigned int *)g_DSurface_Hidden_2 + 116))(g_DSurface_Hidden_2) >> 1)));
                v51 = v56 - (unsigned int)DSurface_ViewBounds.field_4; /*0x7600c0*/
                v50 = v50; /*0x7600c4*/
                for ( i = abs32(v56 - v6 - this->WaveClass_field_17C); v50 >= v60; --v68 ) /*0x7600d5*/
                {
                  if ( *(unsigned short *)((Audio *)((int *)g_ZBufferDescriptor))->GetSamplePosition(v50, v51) > (uint16_t)v88 ) /*0x7600f0*/
                    Voxel::BlendShadowColor(v50, v57, i, v68); /*0x760100*/
                  --v50; /*0x76010e*/
                  --v50; /*0x76010f*/
                }
                v47 = v88; /*0x760122*/
                v8 = (char *)v61; /*0x760126*/
                v4 = a2; /*0x76012a*/
                v46 = v56; /*0x76012e*/
              }
              ++v47; /*0x760136*/
              --v46; /*0x760137*/
              v88 = v47; /*0x76013d*/
              v56 = v46; /*0x760141*/
              v73 -= 8; /*0x760145*/
            }
            while ( v46 >= (int)v8 ); /*0x760149*/
          }
        }
        else
        {
          v83 = (*(int (**)(AudioStream *))(*(unsigned int *)g_DSurface_Hidden_2 + 116))(g_DSurface_Hidden_2) >> 1; /*0x75feb9*/
          v37 = (unsigned short *)(v74 + 2 * v9 * v83); /*0x75feca*/
          v90 = (unsigned int *)(this->WaveClass_field_1A8_d + 8 * v81); /*0x75fed8*/
          v87 = (*((unsigned short *)&(g_ZBufferDescriptor[1].Stream_field_10))) - v9 - v58 - 2; /*0x75fef0*/
          v38 = ((Audio *)((int *)g_ZBufferDescriptor))->GetSamplePosition(0, v9 - (unsigned int)DSurface_ViewBounds.field_4); /*0x75ff03*/
          v39 = v9; /*0x75ff05*/
          v55 = v9; /*0x75ff09*/
          if ( v9 >= (int)v8 ) /*0x75ff0d*/
          {
            while ( 1 ) /*0x75ff19*/
            {
              if ( v39 >= v77 && v39 <= v78 ) /*0x75ff27*/
              {
                v40 = v57 + v90[1]; /*0x75ff40*/
                if ( v40 >= v69 ) /*0x75ff42*/
                  v40 = v69; /*0x75ff44*/
                v59 = v57 + *v90; /*0x75ff56*/
                if ( v59 <= v79 ) /*0x75ff5a*/
                  v59 = v79; /*0x75ff5c*/
                v41 = &v37[v40]; /*0x75ff68*/
                v42 = (uint16_t *)(2 * v40 + v38); /*0x75ff6a*/
                v67 = v42; /*0x75ff76*/
                v43 = v39 - v6 - this->WaveClass_field_17C; /*0x75ff7a*/
                for ( j = ((*(((unsigned int *)&(v43)) + 1)) ^ v43) - (*(((unsigned int *)&(v43)) + 1)); v40 >= v59; v67 = v42 ) /*0x75ff87*/
                {
                  if ( *v42 > v87 ) /*0x75ff91*/
                  {
                    Voxel::BlendShadowColor(v40, v57, j, v41); /*0x75ff9d*/
                    v42 = v67; /*0x75ffa2*/
                  }
                  --v42; /*0x75ffaa*/
                  --v41; /*0x75ffad*/
                  --v40; /*0x75ffb0*/
                }
                v8 = (char *)v61; /*0x75ffb9*/
                v39 = v55; /*0x75ffbd*/
                v45 = 2 * v40; /*0x75ffc1*/
                v38 = (int)&v42[v45 / 0xFFFFFFFE]; /*0x75ffc3*/
                v37 = &v41[v45 / 0xFFFFFFFE]; /*0x75ffc5*/
              }
              --v39; /*0x75ffe6*/
              v37 -= v83; /*0x75ffe9*/
              ++v87; /*0x75ffec*/
              v90 -= 2; /*0x75fff0*/
              v55 = v39; /*0x75fff4*/
              if ( v39 < (int)v8 ) /*0x75fff8*/
                break; /*0x75fff8*/
              v38 -= 2 * (unsigned int)m_Stream; /*0x75ff15*/
            }
          }
        }
      }
      else
      {
        v86 = (*((unsigned short *)&(g_ZBufferDescriptor[1].Stream_field_10))) - v58 - (unsigned short)v8 - 2; /*0x75fba4*/
        v11 = ((Audio *)((int *)g_ZBufferDescriptor))->GetSamplePosition(0, v8 - (char *)DSurface_ViewBounds.field_4); /*0x75fbb6*/
        v12 = (*(int (**)(AudioStream *))(*(unsigned int *)g_DSurface_Hidden_2 + 124))(g_DSurface_Hidden_2); /*0x75fbba*/
        v70 = g_ZBufferDescriptor[2].m_Stream; /*0x75fbc8*/
        if ( (unsigned int)(v11 + 2 * (v12 + (unsigned int)v70 * (v9 - v61 + 1))) >= g_ZBufferDescriptor[1].Stream_field_08 ) /*0x75fbe7*/
        {
          v27 = v61; /*0x75fd07*/
          v54 = v61; /*0x75fd0d*/
          if ( v61 <= v9 ) /*0x75fd11*/
          {
            v71 = 0; /*0x75fd17*/
            do /*0x75fe44*/
            {
              v28 = v4[1]; /*0x75fd1f*/
              if ( v27 >= v28 + 2 && v27 <= v28 + v4[3] - 2 ) /*0x75fd36*/
              {
                v29 = (unsigned int *)(this->WaveClass_field_1A8_d + v71); /*0x75fd49*/
                v30 = *v4; /*0x75fd4b*/
                v63 = v57 + v29[1]; /*0x75fd64*/
                if ( v63 >= *v4 + v4[2] - 2 ) /*0x75fd68*/
                  v63 = *v4 + v4[2] - 2; /*0x75fd6a*/
                v31 = v57 + *v29; /*0x75fd74*/
                v32 = v30 + 2; /*0x75fd76*/
                if ( v31 > v30 + 2 ) /*0x75fd7b*/
                  v32 = v31; /*0x75fd7d*/
                v32 = v32; /*0x75fd95*/
                v65 = (unsigned short *)(v74 /*0x75fda3*/
                              + 2
                              * (v32
                               + v27
                               * ((*(int (**)(AudioStream *))(*(unsigned int *)g_DSurface_Hidden_2 + 116))(g_DSurface_Hidden_2) >> 1)));
                v33 = v27 - (unsigned int)DSurface_ViewBounds.field_4; /*0x75fdad*/
                v85 = v27 - (unsigned int)DSurface_ViewBounds.field_4; /*0x75fdb7*/
                v34 = abs32(v27 - v6 - this->WaveClass_field_17C); /*0x75fdc6*/
                if ( v32 <= v63 ) /*0x75fdca*/
                {
                  while ( 1 ) /*0x75fdd2*/
                  {
                    if ( *(unsigned short *)((Audio *)((int *)g_ZBufferDescriptor))->GetSamplePosition(v32, v33) > v86 ) /*0x75fdeb*/
                      Voxel::BlendShadowColor(v32, v57, v34, v65); /*0x75fdfb*/
                    ++v32; /*0x75fe09*/
                    ++v32; /*0x75fe0a*/
                    ++v65; /*0x75fe17*/
                    if ( v32 > v63 ) /*0x75fe1b*/
                      break; /*0x75fe1b*/
                    v33 = v85; /*0x75fdce*/
                  }
                }
                v27 = v54; /*0x75fe1d*/
                v4 = a2; /*0x75fe21*/
              }
              ++v27; /*0x75fe32*/
              --v86; /*0x75fe38*/
              v54 = v27; /*0x75fe3c*/
              v71 += 8; /*0x75fe40*/
            }
            while ( v27 <= v9 ); /*0x75fe44*/
          }
        }
        else
        {
          v13 = (*(int (**)(AudioStream *))(*(unsigned int *)g_DSurface_Hidden_2 + 116))(g_DSurface_Hidden_2) >> 1; /*0x75fbf8*/
          v13 = v13; /*0x75fc05*/
          v14 = (unsigned short *)(v74 + 2 * v61 * v13); /*0x75fc09*/
          v15 = v61; /*0x75fc0c*/
          v16 = *&this->u32_1A8; /*0x75fc10*/
          v16 = v16; /*0x75fc18*/
          for ( k = v61; v15 <= v9; k = v15 ) /*0x75fc20*/
          {
            if ( v15 >= v77 && v15 <= v78 ) /*0x75fc34*/
            {
              v17 = v57 + v16[1]; /*0x75fc41*/
              if ( v17 >= v69 ) /*0x75fc47*/
                v17 = v69; /*0x75fc49*/
              v17 = v17; /*0x75fc4f*/
              v18 = *v16 + v57; /*0x75fc53*/
              v19 = v79; /*0x75fc56*/
              if ( v18 > v79 ) /*0x75fc5c*/
                v19 = v18; /*0x75fc5e*/
              v20 = (uint16_t *)(2 * v19 + v11); /*0x75fc67*/
              v21 = &v14[v19]; /*0x75fc69*/
              v22 = v15 - v6 - this->WaveClass_field_17C; /*0x75fc7b*/
              v22 = v22; /*0x75fc7c*/
              v24 = v19; /*0x75fc7e*/
              v75 = v19; /*0x75fc82*/
              for ( m = ((*(((unsigned int *)&(v22)) + 1)) ^ v22) - (*(((unsigned int *)&(v22)) + 1)); v24 <= v17; v75 = v24 ) /*0x75fc8e*/
              {
                if ( *v20 > v86 ) /*0x75fc98*/
                {
                  Voxel::BlendShadowColor(v24, v57, m, v21); /*0x75fca4*/
                  v24 = v75; /*0x75fca9*/
                }
                ++v20; /*0x75fcb1*/
                ++v21; /*0x75fcb4*/
                ++v24; /*0x75fcb7*/
              }
              v9 = (int)v64; /*0x75fcc0*/
              v15 = k; /*0x75fcc4*/
              v26 = 2 * v24; /*0x75fcc8*/
              v11 = (int)&v20[v26 / 0xFFFFFFFE]; /*0x75fcca*/
              v14 = &v21[v26 / 0xFFFFFFFE]; /*0x75fccc*/
              v13 = v13; /*0x75fcce*/
            }
            v14 += v13; /*0x75fcd6*/
            v11 += 2 * (unsigned int)v70; /*0x75fcd9*/
            --v86; /*0x75fce6*/
            v16 = v16 + 2; /*0x75fcee*/
            ++v15; /*0x75fcf1*/
            v16 += 2; /*0x75fcf4*/
          }
        }
      }
    }
    (*(void (**)(AudioStream *))(*(unsigned int *)g_DSurface_Hidden_2 + 96))(g_DSurface_Hidden_2); /*0x760157*/
    if ( this->WaveClass_field_1A8_d ) /*0x76015a*/
    {
      operator delete((void *)(*&this->q0D0)); /*0x760167*/
      this->WaveClass_field_1A8_d = 0; /*0x76016f*/
    }
  }
}
}
// 0x760190
namespace gamemd {
int Voxel::BlendColor(int a2, int aP2, int arg8, unsigned short *a4)
{

  __int64 v5; // rax
  int v6; // eax
  unsigned __int16 v7; // dx
  int v8; // kr00_4
  int v9; // edi
  int v10; // eax
  int result; // eax

  v5 = word_B45E68[(int)this->q130 /*0x7601d9*/
                 + (unsigned __int16)word_B4669C[300 * arg8 + abs32(a2 - (unsigned int)this->q0CC - aP2)]];
  v6 = (HIDWORD(v5) ^ v5) - HIDWORD(v5); /*0x7601dc*/
  if ( v6 >= 9 ) /*0x7601e1*/
    v6 = 9; /*0x7601e3*/
  v7 = a4[*(unsigned int *)&this->__pad_134[4 * v6 + 212]]; /*0x7601fb*/
  v8 = dword_B46648[v6]; /*0x760256*/
  v9 = (((unsigned __int8)((unsigned __int8)(v7 >> g_BitShift_Red) << g_BitShift_Green_0) * (v8 / 2)) >> 8) /*0x76027d*/
     + (unsigned __int8)((unsigned __int8)(v7 >> g_BitShift_Red) << g_BitShift_Green_0);
  v10 = 255; /*0x760286*/
  if ( (char)((v8 * (unsigned __int8)((unsigned __int8)(v7 >> g_BitShift_Blue) << g_BitMask_Red)) >> 6) /*0x76028b*/
     + (unsigned __int8)((unsigned __int8)(v7 >> g_BitShift_Blue) << g_BitMask_Red) <= 255 )
    v10 = (char)((v8 * (unsigned __int8)((unsigned __int8)(v7 >> g_BitShift_Blue) << g_BitMask_Red)) >> 6) /*0x76028d*/
        + (unsigned __int8)((unsigned __int8)(v7 >> g_BitShift_Blue) << g_BitMask_Red);
  if ( v9 > 255 ) /*0x760295*/
    v9 = 255; /*0x760297*/
  result = v10 >> g_BitMask_Red << g_BitShift_Blue; /*0x7602ba*/
  *a4 = ((int)(unsigned __int8)((unsigned __int8)(v7 >> g_BitMask_Green) << g_BitMask_Blue) >> g_BitMask_Blue << g_BitMask_Green) /*0x7602d0*/
      | result
      | (v9 >> g_BitShift_Green_0 << g_BitShift_Red);
  return result; /*0x7602d3*/

}
}
// 0x7609E0
namespace gamemd {
AbstractClass * * Voxel::FaceDraw(unsigned int * a1, WaveClass * aP2)
{

  Voxel *v3; // ebx
  char *v4; // ebp
  int v5; // esi
  int v6; // ebp
  int SamplePosition; // edi
  int v8; // eax
  int v9; // ecx
  unsigned short *v10; // ebp
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  unsigned short *v14; // edi
  unsigned short *v15; // ebp
  int v16; // esi
  int v17; // esi
  int v18; // edx
  int v19; // ecx
  int v20; // esi
  bool v21; // zf
  int v22; // edi
  int v23; // eax
  unsigned int *v24; // eax
  int v25; // edx
  int v26; // esi
  int v27; // eax
  int v28; // eax
  int v29; // ebp
  unsigned short *v30; // edi
  int v31; // eax
  int v32; // edx
  int v33; // eax
  int i; // [esp+8h] [ebp-40h]
  int v35; // [esp+8h] [ebp-40h]
  int v36; // [esp+Ch] [ebp-3Ch]
  unsigned short *v37; // [esp+10h] [ebp-38h]
  int v38; // [esp+10h] [ebp-38h]
  int v39; // [esp+14h] [ebp-34h]
  int v40; // [esp+14h] [ebp-34h]
  int v41; // [esp+18h] [ebp-30h]
  __int16 v42; // [esp+1Ch] [ebp-2Ch]
  int v43; // [esp+1Ch] [ebp-2Ch]
  int v44; // [esp+1Ch] [ebp-2Ch]
  int v45; // [esp+1Ch] [ebp-2Ch]
  int v47; // [esp+24h] [ebp-24h]
  int v48; // [esp+28h] [ebp-20h]
  int v49; // [esp+2Ch] [ebp-1Ch]
  int v50; // [esp+30h] [ebp-18h]
  int v51; // [esp+34h] [ebp-14h]
  int pad_0; // [esp+38h] [ebp-10h]
  int v53; // [esp+38h] [ebp-10h]
  int v54; // [esp+3Ch] [ebp-Ch]
  unsigned int *v55; // [esp+4Ch] [ebp+4h]
  int *v56; // [esp+50h] [ebp+8h]

  v3 = this; /*0x7609e9*/
  if ( stru_A8EB00.ObjectTypeClass[30] == 2 ) /*0x7609f3*/
  {
    v42 = ZCoordToScreenY(*&this->u32_BC); /*0x760a0a*/
    v39 = (*(int (**)(AudioStream *, unsigned int, unsigned int))(*(unsigned int *)g_DSurface_Hidden_2 + 92))( /*0x760a1b*/
            g_DSurface_Hidden_2,
            0,
            0);
    if ( v39 ) /*0x760a1f*/
    {
      v47 = aP2[1]; /*0x760a3d*/
      v48 = aP2[3] + v47; /*0x760a45*/
      v50 = *aP2; /*0x760a4c*/
      v49 = *aP2 + aP2[2]; /*0x760a56*/
      v4 = (char *)DSurface_ViewBounds.field_4 + a1[1] - *(unsigned int *)v3->q0D0; /*0x760a69*/
      v41 = *a1 - (unsigned int)v3->q0CC; /*0x760a77*/
      ProcessVoxelVertexData(&v3->u32_148, &v3->u32_1A0); /*0x760a7b*/
      if ( *&v3->u32_1A8 ) /*0x760a80*/
      {
        v5 = (int)&v4[*&v3->u32_1A4]; /*0x760aa0*/
        v36 = *&v3->u32_1A0 + v5 - 1; /*0x760aaa*/
        if ( v36 >= aP2[3] + aP2[1] ) /*0x760aae*/
          v36 = aP2[3] + aP2[1]; /*0x760ab0*/
        LOWORD(v4) = LOWORD(g_ZBufferDescriptor[1].Stream_field_10) - v42; /*0x760aca*/
        v6 = (int)&v4[-v5 - 2]; /*0x760ad3*/
        v55 = (unsigned int *)v6; /*0x760ad6*/
        SamplePosition = Audio::GetSamplePosition( /*0x760ae5*/
                           (int *)g_ZBufferDescriptor,
                           0,
                           v5 - (unsigned int)DSurface_ViewBounds.field_4);
        v8 = (*(int (**)(AudioStream *))(*(unsigned int *)g_DSurface_Hidden_2 + 124))(g_DSurface_Hidden_2); /*0x760ae9*/
        pad_0 = (int)g_ZBufferDescriptor[2].m_Stream->__pad_0; /*0x760aff*/
        if ( (unsigned int)(SamplePosition + 2 * (v8 + pad_0 * (v36 - v5 + 1))) >= g_ZBufferDescriptor[1].Stream_field_08 ) /*0x760b13*/
        {
          v22 = v5; /*0x760d15*/
          v35 = v5; /*0x760d19*/
          if ( v5 <= v36 ) /*0x760d1d*/
          {
            v38 = 0; /*0x760d23*/
            do /*0x760f0e*/
            {
              v23 = aP2[1]; /*0x760d2f*/
              if ( v22 >= v23 + 2 && v22 <= v23 + aP2[3] - 2 ) /*0x760d46*/
              {
                v24 = (unsigned int *)(*&v3->u32_1A8 + v38); /*0x760d5a*/
                v25 = *aP2; /*0x760d5c*/
                v44 = v41 + v24[1]; /*0x760d6c*/
                if ( v44 >= aP2[2] + *aP2 - 2 ) /*0x760d70*/
                  v44 = aP2[2] + *aP2 - 2; /*0x760d72*/
                v26 = v25 + 2; /*0x760d78*/
                v27 = v41 + *v24; /*0x760d7b*/
                if ( v27 > v25 + 2 ) /*0x760d7f*/
                  v26 = v27; /*0x760d81*/
                v28 = (*(int (**)(AudioStream *))(*(unsigned int *)g_DSurface_Hidden_2 + 116))(g_DSurface_Hidden_2); /*0x760d8b*/
                v29 = v35 - (unsigned int)DSurface_ViewBounds.field_4; /*0x760da3*/
                v53 = v26; /*0x760da5*/
                v30 = (unsigned short *)(v39 + 2 * (v26 + v22 * (v28 >> 1))); /*0x760da9*/
                v54 = v35 - (unsigned int)DSurface_ViewBounds.field_4; /*0x760db2*/
                if ( v26 <= v44 ) /*0x760db6*/
                {
                  v45 = v44 - v26 + 1; /*0x760dbf*/
                  do /*0x760ee0*/
                  {
                    if ( *(unsigned short *)Audio::GetSamplePosition((int *)g_ZBufferDescriptor, v53, v29) > (unsigned __int16)v55 ) /*0x760ddc*/
                    {
                      v31 = *&v3->q1D0; /*0x760deb*/
                      v32 = (unsigned __int8)((unsigned __int8)(*v30 >> g_BitShift_Red) << g_BitShift_Green_0) /*0x760e5b*/
                          + (char)(v31 >> 2);
                      v33 = (unsigned __int8)((unsigned __int8)(*v30 >> g_BitShift_Blue) << g_BitMask_Red) /*0x760e64*/
                          + ((96 * v31) >> 8);
                      if ( v33 > 255 ) /*0x760e71*/
                        v33 = 255; /*0x760e73*/
                      if ( v32 > 255 ) /*0x760e8d*/
                        v32 = 255; /*0x760e8f*/
                      v3 = this; /*0x760e96*/
                      v29 = v54; /*0x760e9e*/
                      *v30 = (v33 >> g_BitMask_Red << g_BitShift_Blue) /*0x760ec8*/
                           | ((int)(unsigned __int8)((unsigned __int8)(*v30 >> g_BitMask_Green) << g_BitMask_Blue) >> g_BitMask_Blue << g_BitMask_Green)
                           | (v32 >> g_BitShift_Green_0 << g_BitShift_Red);
                    }
                    ++v30; /*0x760ed4*/
                    v21 = v45 == 1; /*0x760ed7*/
                    ++v53; /*0x760ed8*/
                    --v45; /*0x760edc*/
                  }
                  while ( !v21 ); /*0x760ee0*/
                }
                v6 = (int)v55; /*0x760ee6*/
                v22 = v35; /*0x760eea*/
              }
              v6 += 0xFFFF; /*0x760ef6*/
              ++v22; /*0x760efc*/
              v55 = (unsigned int *)v6; /*0x760f02*/
              v35 = v22; /*0x760f06*/
              v38 += 8; /*0x760f0a*/
            }
            while ( v22 <= v36 ); /*0x760f0e*/
          }
        }
        else
        {
          v9 = (*(int (**)(AudioStream *))(*(unsigned int *)g_DSurface_Hidden_2 + 116))(g_DSurface_Hidden_2) >> 1; /*0x760b2a*/
          v51 = v9; /*0x760b2e*/
          v10 = (unsigned short *)(v39 + 2 * v5 * v9); /*0x760b35*/
          v56 = *&v3->u32_1A8; /*0x760b42*/
          v11 = v5; /*0x760b46*/
          for ( i = v5; v11 <= v36; i = v11 ) /*0x760b4e*/
          {
            if ( v11 >= v47 && v11 <= v48 ) /*0x760b62*/
            {
              v12 = v49; /*0x760b76*/
              if ( v56[1] + v41 < v49 ) /*0x760b7c*/
                v12 = v56[1] + v41; /*0x760b7e*/
              v13 = v41 + *v56; /*0x760b86*/
              if ( v13 <= v50 ) /*0x760b8e*/
                v13 = v50; /*0x760b90*/
              v14 = (unsigned short *)(2 * v13 + SamplePosition); /*0x760b95*/
              v15 = &v10[v13]; /*0x760b97*/
              v37 = v14; /*0x760b9b*/
              v16 = v13; /*0x760b9f*/
              if ( v13 <= v12 ) /*0x760ba1*/
              {
                v40 = v12 - v13 + 1; /*0x760baa*/
                v43 = v12 + 1; /*0x760bb0*/
                do /*0x760cc2*/
                {
                  if ( *v14 > (unsigned __int16)v55 ) /*0x760bbc*/
                  {
                    v17 = *&v3->q1D0; /*0x760bcb*/
                    v18 = (unsigned __int8)((unsigned __int8)(*v15 >> g_BitShift_Red) << g_BitShift_Green_0) /*0x760c33*/
                        + (char)(v17 >> 2);
                    v19 = (unsigned __int8)((unsigned __int8)(*v15 >> g_BitShift_Blue) << g_BitMask_Red) /*0x760c48*/
                        + (char)((3 * v17) >> 3);
                    v20 = 255; /*0x760c4a*/
                    if ( v19 <= 255 ) /*0x760c55*/
                      v20 = v19; /*0x760c57*/
                    if ( v18 > 255 ) /*0x760c6c*/
                      v18 = 255; /*0x760c6e*/
                    v11 = i; /*0x760c7d*/
                    v3 = this; /*0x760c9d*/
                    v14 = v37; /*0x760ca3*/
                    *v15 = (v20 >> g_BitMask_Red << g_BitShift_Blue) /*0x760cab*/
                         | ((int)(unsigned __int8)((unsigned __int8)(*v15 >> g_BitMask_Green) << g_BitMask_Blue) >> g_BitMask_Blue << g_BitMask_Green)
                         | (v18 >> g_BitShift_Green_0 << g_BitShift_Red);
                  }
                  ++v14; /*0x760cb3*/
                  ++v15; /*0x760cb6*/
                  v21 = v40 == 1; /*0x760cb9*/
                  v37 = v14; /*0x760cba*/
                  --v40; /*0x760cbe*/
                }
                while ( !v21 ); /*0x760cc2*/
                v16 = v43; /*0x760cc8*/
              }
              SamplePosition = (int)&v14[-v16]; /*0x760ccf*/
              v10 = &v15[-v16]; /*0x760cd1*/
              v9 = v51; /*0x760cd3*/
            }
            v10 += v9; /*0x760ce5*/
            SamplePosition += 2 * pad_0; /*0x760ce9*/
            ++v11; /*0x760cf3*/
            v56 += 2; /*0x760cf4*/
            LOWORD(v55) = (unsigned short)v55 - 1; /*0x760cfe*/
          }
        }
      }
      (*(void (**)(AudioStream *))(*(unsigned int *)g_DSurface_Hidden_2 + 96))(g_DSurface_Hidden_2); /*0x760f1c*/
      if ( *&v3->u32_1A8 ) /*0x760f1f*/
      {
        __3_YAXPAX_Z(*&v3->u32_1A8); /*0x760f2c*/
        *&v3->u32_1A8 = 0; /*0x760f34*/
      }
    }
  }

}
}
// 0x7610F0
namespace gamemd {
void* Voxel::FaceBlit()
{

  Voxel *v2; // ebp
  int v3; // eax
  double v4; // st7
  double v5; // st7
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int *v9; // edx
  int v10; // ecx
  int v11; // eax
  int v12; // kr38_4
  int v13; // ebx
  void *v14; // eax
  int v15; // edx
  unsigned short *v16; // eax
  unsigned int v17; // edx
  int v18; // eax
  double v19; // st7
  int v20; // eax
  int v21; // eax
  int v22; // eax
  void *v23; // eax
  int v24; // edx
  double v25; // st7
  int v26; // eax
  int v27; // eax
  int v28; // eax
  unsigned short *v29; // eax
  int v30; // [esp-8h] [ebp-80h]
  int v31; // [esp-8h] [ebp-80h]
  int v32; // [esp-8h] [ebp-80h]
  int v33; // [esp-4h] [ebp-7Ch]
  int v34; // [esp-4h] [ebp-7Ch]
  int v35; // [esp-4h] [ebp-7Ch]
  __int16 v36[2]; // [esp+10h] [ebp-68h] BYREF
  __int16 v37[2]; // [esp+14h] [ebp-64h] BYREF
  __int16 v38[2]; // [esp+18h] [ebp-60h] BYREF
  void *v39; // [esp+1Ch] [ebp-5Ch] BYREF
  float v40; // [esp+20h] [ebp-58h] BYREF
  int v41; // [esp+24h] [ebp-54h] BYREF
  char v42; // [esp+28h] [ebp-50h] BYREF
  char v43; // [esp+2Ch] [ebp-4Ch] BYREF
  char v44; // [esp+30h] [ebp-48h] BYREF
  char v45[4]; // [esp+34h] [ebp-44h] BYREF
  char v46[4]; // [esp+38h] [ebp-40h] BYREF
  char v47[4]; // [esp+3Ch] [ebp-3Ch] BYREF
  double i; // [esp+40h] [ebp-38h]
  Coord3D v49; // [esp+48h] [ebp-30h] BYREF
  Coord3D v50; // [esp+54h] [ebp-24h] BYREF
  Coord3D v51; // [esp+60h] [ebp-18h] BYREF
  Color v52; // [esp+6Ch] [ebp-Ch] BYREF

  v2 = &this->u32_1F0; /*0x761105*/
  (*(void (**)(char *))(*&this->u32_1F0 + 12))(&this->u32_1F0); /*0x76110d*/
  if ( this->u32_12C ) /*0x761110*/
  {
    v3 = *&this->u32_B4; /*0x76111e*/
    i = 0.050000001; /*0x76112b*/
    v38[0] = v3 / 256; /*0x761146*/
    v4 = 0.050000001 * 0.5 + *&this->q138; /*0x761158*/
    v38[1] = *&this->u32_B8 / 256; /*0x761167*/
    *(unsigned int *)v36 = *(unsigned int *)v38; /*0x761172*/
    if ( v4 >= 0.050000001 ) /*0x761179*/
    {
      do /*0x76129b*/
      {
        v5 = i; /*0x76117f*/
        LOWORD(v6) = Math::RoundToInt(i); /*0x76119d*/
        v33 = v6; /*0x7611a8*/
        LOWORD(v7) = Math::RoundToInt(v5); /*0x7611b5*/
        v30 = v7; /*0x7611c0*/
        LOWORD(v8) = Math::RoundToInt(v5); /*0x7611cd*/
        v9 = Coord3D::Set(&v49, v8, v30, v33); /*0x7611e0*/
        v10 = *v9; /*0x7611e2*/
        v11 = v9->Coord3D_field_0x04; /*0x7611e4*/
        v50.q008 = v9->q008; /*0x7611ea*/
        v12 = v11; /*0x7611f7*/
        v13 = v10 / 256; /*0x76120d*/
        v39 = *(void **)CellStruct::Set((CellStruct *)&v41, v10 / 256, v11 / 256); /*0x76121e*/
        if ( *(void **)v36 != v39 ) /*0x761222*/
        {
          *(unsigned int *)v36 = *(unsigned int *)CellStruct::Set((CellStruct *)&v40, v13, v12 / 256); /*0x761247*/
          v14 = CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, v36); /*0x76124b*/
          v15 = *(unsigned int *)v2->__pad_000; /*0x761250*/
          *(unsigned int *)v38 = v14; /*0x761253*/
          if ( (*(int (**)(Voxel *, __int16 *))(v15 + 16))(v2, v38) == -1 ) /*0x761264*/
            Voxel::freeSectionMemory(v2, v38); /*0x76126d*/
        }
        i = i + 0.050000001; /*0x76127c*/
      }
      while ( 0.050000001 * 0.5 + *&this->q138 >= i ); /*0x76129b*/
    }
  }
  else
  {
    *(unsigned int *)v36 = *(unsigned int *)CellStruct::Set( /*0x7612e0*/
                                  (CellStruct *)&v41,
                                  *&this->u32_FC / 256,
                                  *&this->q100 / 256);
    *(unsigned int *)v38 = *(unsigned int *)CellStruct::Set( /*0x761312*/
                                  (CellStruct *)&v41,
                                  *&this->q108 / 256,
                                  *&this->u32_10C / 256);
    v16 = CellStruct::Set( /*0x76133c*/
            (CellStruct *)&v41,
            *&this->u32_C0 / 256,
            *&this->u32_C4 / 256);
    v17 = *&this->u32_140; /*0x761349*/
    *(unsigned int *)v37 = *(unsigned int *)v16; /*0x761355*/
    for ( i = COERCE_DOUBLE(__PAIR64__(*&this->q144, v17)); /*0x761376*/
          0.050000001 * 0.5 + *&this->q138 >= i;
          i = i + 0.050000001 )
    {
      v49.q008 = dword_B46250; /*0x761392*/
      v18 = *&this->u32_1CC; /*0x761396*/
      *(unsigned int *)v49.__pad_000 = dword_B46248; /*0x76139c*/
      v49.Coord3D_field_0x04 = dword_B4624C; /*0x7613a2*/
      if ( v18 < 4 ) /*0x7613a6*/
      {
        v19 = i; /*0x7613ac*/
        LOWORD(v20) = Math::RoundToInt(i); /*0x7613ca*/
        v34 = v20; /*0x7613d5*/
        LOWORD(v21) = Math::RoundToInt(v19); /*0x7613e2*/
        v31 = v21; /*0x7613ed*/
        LOWORD(v22) = Math::RoundToInt(v19); /*0x7613fa*/
        v49 = *(Coord3D *)Coord3D::Set(&v50, v22, v31, v34); /*0x761411*/
        v40 = *(float *)CellStruct::Set((CellStruct *)&v42, *(unsigned int *)v49.__pad_000 / 256, v49.Coord3D_field_0x04 / 256); /*0x76144f*/
        if ( *(unsigned int *)v36 != LODWORD(v40) ) /*0x761453*/
        {
          *(unsigned int *)v36 = *(unsigned int *)CellStruct::Set( /*0x761498*/
                                        (CellStruct *)&v43,
                                        *(unsigned int *)v49.__pad_000 / 256,
                                        v49.Coord3D_field_0x04 / 256);
          v23 = CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, v36); /*0x76149c*/
          v24 = *(unsigned int *)v2->__pad_000; /*0x7614a1*/
          v39 = v23; /*0x7614a4*/
          if ( (*(int (**)(Voxel *, void **))(v24 + 16))(v2, &v39) == -1 ) /*0x7614b5*/
            Voxel::freeSectionMemory(v2, &v39); /*0x7614be*/
        }
      }
      v25 = i; /*0x7614c3*/
      v40 = i; /*0x7614c7*/
      LOWORD(v26) = Math::RoundToInt(i); /*0x7614e5*/
      v35 = v26; /*0x7614f0*/
      LOWORD(v27) = Math::RoundToInt(v25); /*0x7614fd*/
      v32 = v27; /*0x761508*/
      LOWORD(v28) = Math::RoundToInt(v25); /*0x761515*/
      v49 = *(Coord3D *)Coord3D::Set(&v51, v28, v32, v35); /*0x76152c*/
      v41 = *(unsigned int *)CellStruct::Set((CellStruct *)&v44, *(unsigned int *)v49.__pad_000 / 256, v49.Coord3D_field_0x04 / 256); /*0x76156e*/
      if ( (unsigned __int8)Coord::Compare2D((Coord *)v37, &v41) ) /*0x761572*/
      {
        *(unsigned int *)v37 = *Coord::ToCell((Coord *)&v49, v45); /*0x761592*/
        Voxel::renderSection(this, v37); /*0x761596*/
      }
      if ( *&this->u32_1CC >= 4 ) /*0x7615a1*/
      {
        v49 = *(Coord3D *)Color::RGBFromFloat(&v52, (int)&this->q108, v40); /*0x7615ba*/
        v29 = Coord::ToCell((Coord *)&v49, v46); /*0x7615d5*/
        if ( (unsigned __int8)Coord::Compare2D((Coord *)v38, v29) ) /*0x7615df*/
        {
          *(unsigned int *)v38 = *Coord::ToCell((Coord *)&v49, v47); /*0x7615ff*/
          Voxel::renderSection(this, v38); /*0x761603*/
        }
      }
    }
  }

}
}
// 0x761640
namespace gamemd {
int Voxel::SectionProject(int * a2, int a3)
{

  double v3; // st7
  int v6; // eax
  float v7; // eax
  int v8; // edx
  float v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // esi
  int v13; // eax
  int v14; // ebx
  int v15; // eax
  int v16; // eax
  float v17; // ecx
  int v18; // edx
  int v19; // ecx
  int v20; // edx
  int v21; // edx
  float *v25; // eax
  float *v26; // eax
  float *v27; // eax
  float *v28; // eax
  int v29; // eax
  int v30; // esi
  float v31; // eax
  int v32; // eax
  float v33; // edx
  int v34; // eax
  int v35; // esi
  float v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // esi
  float v40; // eax
  int v41; // eax
  float v42; // edx
  int v43; // eax
  int v44; // esi
  float v45; // eax
  int v46; // eax
  float v47; // edx
  unsigned int *v48; // eax
  int v49; // eax
  int v50; // eax
  int result; // eax
  double v52; // [esp+4h] [ebp-D0h]
  double v53; // [esp+4h] [ebp-D0h]
  double v54; // [esp+4h] [ebp-D0h]
  float v55; // [esp+8h] [ebp-CCh]
  float v56; // [esp+18h] [ebp-BCh] BYREF
  float v57; // [esp+1Ch] [ebp-B8h]
  float v58; // [esp+20h] [ebp-B4h]
  double v59; // [esp+24h] [ebp-B0h]
  float v60; // [esp+30h] [ebp-A4h]
  int v61; // [esp+34h] [ebp-A0h] BYREF
  int v62; // [esp+38h] [ebp-9Ch]
  int v63; // [esp+3Ch] [ebp-98h]
  float v64; // [esp+40h] [ebp-94h] BYREF
  int v65; // [esp+44h] [ebp-90h]
  int v66; // [esp+48h] [ebp-8Ch]
  float v67; // [esp+4Ch] [ebp-88h] BYREF
  float v68; // [esp+50h] [ebp-84h]
  float v69; // [esp+54h] [ebp-80h]
  float v70; // [esp+58h] [ebp-7Ch] BYREF
  float v71; // [esp+5Ch] [ebp-78h]
  float v72; // [esp+60h] [ebp-74h]
  float v73; // [esp+64h] [ebp-70h] BYREF
  float v74; // [esp+68h] [ebp-6Ch]
  float v75; // [esp+6Ch] [ebp-68h]
  float v76; // [esp+70h] [ebp-64h] BYREF
  float v77; // [esp+74h] [ebp-60h]
  float v78; // [esp+78h] [ebp-5Ch]
  int v79; // [esp+7Ch] [ebp-58h]
  float v80; // [esp+80h] [ebp-54h]
  float v81; // [esp+84h] [ebp-50h]
  float v82; // [esp+88h] [ebp-4Ch]
  float v83; // [esp+8Ch] [ebp-48h]
  float v84; // [esp+90h] [ebp-44h]
  float v85; // [esp+94h] [ebp-40h]
  float v86; // [esp+98h] [ebp-3Ch]
  float v87; // [esp+9Ch] [ebp-38h]
  float v88; // [esp+A0h] [ebp-34h]
  Matrix3x4 v89; // [esp+A4h] [ebp-30h] BYREF

  if ( (byte_B45DA0 & 1) == 0 ) /*0x76165b*/
  {
    byte_B45DA0 |= 1u; /*0x76167d*/
    dword_B45DA8[0] = -1041235968; /*0x76168f*/
    dword_B45DAC = -1027080192; /*0x7616a0*/
    dword_B45DB0 = 0; /*0x7616b2*/
    dword_B45DB4 = -1041235968; /*0x7616c4*/
    dword_B45DB8 = 1120403456; /*0x7616d5*/
    dword_B45DBC = 0; /*0x7616e7*/
    dword_B45DC0 = 1106247680; /*0x7616f9*/
    dword_B45DC4 = -1027080192; /*0x76170a*/
    dword_B45DC8 = 0; /*0x76171c*/
    dword_B45DCC = 1106247680; /*0x76172e*/
    dword_B45DD0 = 1120403456; /*0x76173f*/
    dword_B45DD4 = 0; /*0x761751*/
    dword_B45DD8 = -1039663104; /*0x761763*/
    dword_B45DDC = -1037041664; /*0x761774*/
    dword_B45DE0 = 0; /*0x761786*/
    dword_B45DE4 = -1039663104; /*0x761798*/
    dword_B45DE8 = 1110441984; /*0x7617a9*/
    dword_B45DEC = 0; /*0x7617bb*/
    dword_B45DF0 = 1107820544; /*0x7617cd*/
    dword_B45DF4 = -1037041664; /*0x7617de*/
    dword_B45DF8 = 0; /*0x7617f0*/
    dword_B45DFC = 1107820544; /*0x761802*/
    dword_B45E00 = 1110441984; /*0x761813*/
    dword_B45E04 = 0; /*0x761825*/
    dword_B45E08 = -1042808832; /*0x761833*/
    dword_B45E0C = -1039663104; /*0x76183c*/
    dword_B45E10 = 0; /*0x761842*/
    dword_B45E14 = -1042808832; /*0x76186c*/
    dword_B45E18 = 1107820544; /*0x761871*/
    dword_B45E1C = 0; /*0x761877*/
    dword_B45E20 = 1104674816; /*0x7618a1*/
    dword_B45E24 = -1039663104; /*0x7618a6*/
    dword_B45E28 = 0; /*0x7618ac*/
    dword_B45E2C = 1104674816; /*0x7618d6*/
    dword_B45E30 = 1107820544; /*0x7618db*/
    dword_B45E34 = 0; /*0x7618e1*/
    dword_B45E38 = -1041235968; /*0x76190b*/
    dword_B45E3C = -1035468800; /*0x761910*/
    dword_B45E40 = 0; /*0x761916*/
    dword_B45E44 = -1041235968; /*0x761940*/
    dword_B45E48 = 1112014848; /*0x761945*/
    dword_B45E4C = 0; /*0x76194b*/
    dword_B45E50 = 1106247680; /*0x761975*/
    dword_B45E54 = -1035468800; /*0x76197a*/
    dword_B45E58 = 0; /*0x761980*/
    v56 = 30.0; /*0x761986*/
    v57 = 50.0; /*0x761992*/
    v58 = 0.0; /*0x76199e*/
    dword_B45E5C = 1106247680; /*0x7619af*/
    dword_B45E60 = 1112014848; /*0x7619b4*/
    dword_B45E64 = 0; /*0x7619ba*/
    atexit(nullsub_46); /*0x7619c0*/
  }
  _ESI = *&this->u32_B0; /*0x7619cb*/
  __asm { fld ds:flt_7F6BB4[esi*4] } /*0x7619d6*/
  v61 = *a2; /*0x7619dd*/
  __asm /*0x7619e3*/
  {
    fld st
    fsubr ds:dbl_7E1718
  }
  v60 = *(float *)a3; /*0x7619eb*/
  __asm { fild [esp+0C8h+var_A4] } /*0x7619f2*/
  v6 = a2->vtable3; /*0x7619f6*/
  v62 = a2[1]; /*0x7619f9*/
  v63 = v6; /*0x7619fd*/
  __asm /*0x761a01*/
  {
    fmul st, st(2)
    fild [esp+0C8h+var_A0]
    fmul st, st(2)
    faddp st(1), st
  }
  LOWORD(v7) = Math::RoundToInt(v3); /*0x761a0b*/
  v8 = *(unsigned int *)(a3 + 4); /*0x761a10*/
  v56 = v7; /*0x761a13*/
  v79 = v8; /*0x761a17*/
  __asm /*0x761a1b*/
  {
    fild [esp+0C8h+var_58]
    fmul st, st(2)
    fild [esp+0C8h+var_9C]
    fmul st, st(2)
    faddp st(1), st
  }
  LOWORD(v9) = Math::RoundToInt(v3); /*0x761a29*/
  v57 = v9; /*0x761a2e*/
  LODWORD(v59) = *(unsigned int *)(a3 + 8); /*0x761a35*/
  __asm /*0x761a39*/
  {
    fild dword ptr [esp+0C8h+var_B4+4]
    fmul st, st(2)
    fild [esp+0C8h+var_98]
    fmul st, st(2)
    faddp st(1), st
  }
  LOWORD(v10) = Math::RoundToInt(v3); /*0x761a47*/
  __asm { fstp st } /*0x761a54*/
  __asm { fstp st }
  v64 = v56; /*0x761a5a*/
  v65 = LODWORD(v57); /*0x761a5e*/
  v66 = v10; /*0x761a62*/
  if ( !_ESI ) /*0x761a66*/
    v66 = v10 + 50; /*0x761a6b*/
  if ( _ESI == 3 ) /*0x761a72*/
    v66 += 50; /*0x761a74*/
  __asm /*0x761a79*/
  {
    fld ds:flt_7F6BB4[esi*4]
    fld st
    fsubr ds:dbl_7E1718
    fild [esp+0C8h+var_A0]
    fmul st, st(2)
    fild [esp+0C8h+var_A4]
    fmul st, st(2)
    faddp st(1), st
  }
  LOWORD(v11) = Math::RoundToInt(v3); /*0x761a96*/
  __asm { fild [esp+0C8h+var_9C] } /*0x761a9b*/
  v12 = v11; /*0x761a9f*/
  __asm /*0x761aa1*/
  {
    fmul st, st(2)
    fild [esp+0C8h+var_58]
    fmul st, st(2)
    faddp st(1), st
  }
  LOWORD(v13) = Math::RoundToInt(v3); /*0x761aab*/
  __asm { fild [esp+0C8h+var_98] } /*0x761ab0*/
  v14 = v13; /*0x761ab4*/
  __asm /*0x761ab6*/
  {
    fmul st, st(2)
    fild dword ptr [esp+0C8h+var_B4+4]
    fmul st, st(2)
    faddp st(1), st
  }
  LOWORD(v15) = Math::RoundToInt(v3); /*0x761ac0*/
  v61 = v12; /*0x761ac9*/
  __asm { fstp st } /*0x761acd*/
  v63 = v15; /*0x761acf*/
  v62 = v14; /*0x761ad9*/
  __asm { fstp st } /*0x761add*/
  LODWORD(v59) = v12 - LODWORD(v64); /*0x761adf*/
  __asm { fild dword ptr [esp+0C8h+var_B4+4] } /*0x761ae5*/
  LODWORD(v59) = v14 - v65; /*0x761ae9*/
  __asm /*0x761af0*/
  {
    fild dword ptr [esp+0D0h+var_B4+4]
    fst [esp+0D0h+var_B8]
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fstp qword ptr [esp+0D0h+var_D0]; double
    fstp st
    fstp st
  }
  Math::Sqrt(v52); /*0x761b09*/
  LOWORD(v16) = Math::RoundToInt(v3); /*0x761b11*/
  LODWORD(v59) = v16; /*0x761b1a*/
  *&this->u32_B4 = v12; /*0x761b27*/
  *&this->u32_B8 = v62; /*0x761b2d*/
  *&this->u32_BC = v63; /*0x761b34*/
  (*(void (**)(Voxel *, char *))(*(unsigned int *)this->__pad_000 + 436))(this, &this->u32_B4); /*0x761b3b*/
  v17 = v64; /*0x761b41*/
  v18 = v65; /*0x761b45*/
  *&this->u32_148 = 6; /*0x761b55*/
  *&this->u32_C0 = v17; /*0x761b60*/
  v19 = v66; /*0x761b62*/
  *&this->u32_C4 = v18; /*0x761b66*/
  *&this->u32_14C = &this->q150; /*0x761b6f*/
  *&this->u32_C8 = v19; /*0x761b75*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v61, &this->q0CC); /*0x761b83*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v64, &this->u32_D4); /*0x761b9a*/
  v20 = *&this->u32_14C; /*0x761b9f*/
  __asm { fild dword ptr [esp+0C8h+var_B4+4] } /*0x761ba7*/
  *(unsigned int *)(v20 + 8) = *&this->u32_D4; /*0x761bab*/
  *(unsigned int *)(v20 + 12) = *&this->u32_D8; /*0x761bb1*/
  v21 = *&this->u32_14C; /*0x761bb4*/
  *(unsigned int *)(v21 + 32) = this->q0CC; /*0x761bbc*/
  __asm { fld st } /*0x761bc2*/
  *(unsigned int *)(v21 + 36) = *(unsigned int *)this->q0D0; /*0x761bc4*/
  __asm { fld st } /*0x761bcd*/
  _EAX = 48 * *&this->u32_B0; /*0x761bd2*/
  __asm /*0x761bd5*/
  {
    fadd dword ptr [eax+0B45DA8h]
    fstp [esp+0C8h+var_54]
    fld dword ptr [eax+0B45DACh]
  }
  __asm
  {
    fstp [esp+0C8h+var_50]
    fld dword ptr [eax+0B45DB0h]
  }
  v76 = v80; /*0x761bf7*/
  __asm { fstp [esp+0C8h+var_4C] } /*0x761bfb*/
  v77 = v81; /*0x761c03*/
  v78 = v82; /*0x761c07*/
  __asm /*0x761c0b*/
  {
    fadd dword ptr [eax+0B45DB4h]
    fstp [esp+0C8h+var_48]
    fld dword ptr [eax+0B45DB8h]
  }
  __asm
  {
    fstp [esp+0C8h+var_44]
    fld dword ptr [eax+0B45DBCh]
  }
  v67 = v83; /*0x761c39*/
  __asm { fstp [esp+0C8h+var_40] } /*0x761c3d*/
  v68 = v84; /*0x761c4b*/
  v69 = v85; /*0x761c4f*/
  __asm /*0x761c53*/
  {
    fld dword ptr [eax+0B45DC0h]
    fstp [esp+0C8h+var_3C]
    fld dword ptr [eax+0B45DC4h]
  }
  __asm
  {
    fstp [esp+0C8h+var_38]
    fld dword ptr [eax+0B45DC8h]
  }
  v70 = v86; /*0x761c81*/
  __asm { fstp [esp+0C8h+var_34] } /*0x761c85*/
  v71 = v87; /*0x761c93*/
  v72 = v88; /*0x761c97*/
  __asm /*0x761c9b*/
  {
    fld dword ptr [eax+0B45DCCh]
    fstp [esp+0C8h+var_BC]
    fld dword ptr [eax+0B45DD0h]
    fstp [esp+0C8h+var_B8]
    fld dword ptr [eax+0B45DD4h]
  }
  __asm { fstp dword ptr [esp+0C8h+var_B4] }
  v73 = v56; /*0x761cc5*/
  v74 = v57; /*0x761cc9*/
  LODWORD(v59) = v66 - v63; /*0x761cdf*/
  __asm /*0x761ce7*/
  {
    fild dword ptr [esp+0C8h+var_B4+4]
    fild [esp+0C8h+var_98]
    fld [esp+0C8h+var_54]
    fmul st, st(2)
  }
  __asm { fdiv st, st(3) }
  LODWORD(v59) = LODWORD(v64) - v61; /*0x761d03*/
  __asm /*0x761d0a*/
  {
    fadd st, st(1)
    fstp [esp+0D0h+var_5C]
    fld [esp+0D0h+var_48]
    fmul st, st(2)
    fdiv st, st(3)
    fadd st, st(1)
    fstp [esp+0D0h+var_80]
    fld [esp+0D0h+var_3C]
    fmul st, st(2)
    fdiv st, st(3)
    fadd st, st(1)
    fstp [esp+0D0h+var_74]
    fld [esp+0D0h+var_BC]
    fmul st, st(2)
    fdiv st, st(3)
    fadd st, st(1)
    fstp [esp+0D0h+var_68]
    fstp st
    fstp st
    fstp st
    fild dword ptr [esp+0D0h+var_B4+4]
    fst [esp+0D0h+var_BC]
  }
  LODWORD(v59) = v65 - v62; /*0x761d4e*/
  __asm /*0x761d52*/
  {
    fild dword ptr [esp+0D0h+var_B4+4]
    fxch st(1)
    fstp [esp+0D0h+var_B4+4]
    fld [esp+0D0h+var_BC]
    fld st(1)
    fmul st, st(2)
    fld st(1)
    fmul st, st(2)
    faddp st(1), st
    fstp qword ptr [esp+0D0h+var_D0]; double
    fstp st
    fstp st
  }
  Math::Sqrt(v53); /*0x761d71*/
  __asm /*0x761d76*/
  {
    fld [esp+0D0h+var_B4+4]
    fld st(1)
    fcomp st(1)
  }
  __asm { fnstsw ax }
  if ( (_AX & 0x100) != 0 ) /*0x761d86*/
  {
    __asm /*0x761d88*/
    {
      fstp st
      fld st
    }
  }
  __asm /*0x761d8c*/
  {
    fld st
    fchs
    fcomp st(2)
    fnstsw ax
  }
  if ( (_AX & 0x4100) == 0 ) /*0x761d97*/
  {
    __asm /*0x761d99*/
    {
      fstp st
      fld st
      fchs
    }
  }
  __asm { fdiv st, st(1) } /*0x761d9f*/
  __asm
  {
    fstp qword ptr [esp+0D0h+var_D0]; double
    fstp st
  }
  Math::ArcTan2_Table(v54); /*0x761da9*/
  __asm { fstp [esp+0D0h+var_B4+4] } /*0x761db6*/
  if ( v62 > v65 ) /*0x761dbf*/
  {
    __asm /*0x761dc1*/
    {
      fld [esp+0C8h+var_B4+4]
      fchs
      fstp [esp+0C8h+var_B4+4]
    }
  }
  Matrix3x4::Identity(&v89); /*0x761dd2*/
  __asm { fld [esp+0C8h+var_B4+4] } /*0x761dd7*/
  __asm { fstp [esp+0CCh+var_D0+4]; float }
  Matrix2D::Rotate(v89.m_Data, v55); /*0x761de6*/
  v25 = TransformMatrix3x4Point(&v56, (float *)v89.m_Data, &v76); /*0x761dfb*/
  v76 = *v25; /*0x761e02*/
  v77 = v25[1]; /*0x761e09*/
  v78 = v25[2]; /*0x761e18*/
  v26 = TransformMatrix3x4Point(&v56, (float *)v89.m_Data, &v67); /*0x761e24*/
  v67 = *v26; /*0x761e2b*/
  v68 = v26[1]; /*0x761e37*/
  v69 = v26[2]; /*0x761e49*/
  v27 = TransformMatrix3x4Point(&v56, (float *)v89.m_Data, &v70); /*0x761e4d*/
  v70 = *v27; /*0x761e54*/
  v71 = v27[1]; /*0x761e5b*/
  v72 = v27[2]; /*0x761e6a*/
  v28 = TransformMatrix3x4Point(&v56, (float *)v89.m_Data, &v73); /*0x761e76*/
  __asm { fild [esp+0C8h+var_A0] } /*0x761e7b*/
  v73 = *v28; /*0x761e81*/
  __asm /*0x761e88*/
  {
    fld st
    fadd [esp+0C8h+var_64]
  }
  v74 = v28[1]; /*0x761e8e*/
  v75 = v28[2]; /*0x761e95*/
  LOWORD(v29) = Math::RoundToInt(v3); /*0x761e99*/
  __asm { fild [esp+0C8h+var_9C] } /*0x761e9e*/
  v30 = v29; /*0x761ea2*/
  __asm /*0x761ea4*/
  {
    fst [esp+0C8h+var_A4]
    fadd [esp+0C8h+var_60]
  }
  LOWORD(v31) = Math::RoundToInt(v3); /*0x761eac*/
  __asm { fld [esp+0C8h+var_5C] } /*0x761eb1*/
  v57 = v31; /*0x761eb5*/
  LOWORD(v32) = Math::RoundToInt(v3); /*0x761eb9*/
  v33 = v57; /*0x761ebe*/
  __asm /*0x761eca*/
  {
    fld st
    fadd [esp+0C8h+var_88]
  }
  *&this->u32_FC = v30; /*0x761ed0*/
  *&this->q100 = v33; /*0x761ed2*/
  *&this->q104 = v32; /*0x761ed5*/
  LOWORD(v34) = Math::RoundToInt(v3); /*0x761ed8*/
  __asm /*0x761edd*/
  {
    fld [esp+0C8h+var_A4]
    fadd [esp+0C8h+var_84]
  }
  v35 = v34; /*0x761ee5*/
  LOWORD(v36) = Math::RoundToInt(v3); /*0x761ee7*/
  __asm { fld [esp+0C8h+var_80] } /*0x761eec*/
  v57 = v36; /*0x761ef0*/
  LOWORD(v37) = Math::RoundToInt(v3); /*0x761ef4*/
  *&this->q108 = v35; /*0x761eff*/
  __asm /*0x761f09*/
  {
    fld st
    fadd [esp+0C8h+var_7C]
  }
  *&this->u32_10C = v57; /*0x761f0f*/
  *&this->u32_110 = v37; /*0x761f12*/
  LOWORD(v38) = Math::RoundToInt(v3); /*0x761f15*/
  __asm /*0x761f1a*/
  {
    fld [esp+0C8h+var_A4]
    fadd [esp+0C8h+var_78]
  }
  v39 = v38; /*0x761f22*/
  LOWORD(v40) = Math::RoundToInt(v3); /*0x761f24*/
  __asm { fld [esp+0C8h+var_74] } /*0x761f29*/
  v57 = v40; /*0x761f2d*/
  LOWORD(v41) = Math::RoundToInt(v3); /*0x761f31*/
  v42 = v57; /*0x761f36*/
  __asm { fadd [esp+0C8h+var_70] } /*0x761f40*/
  *&this->q114 = v39; /*0x761f44*/
  *&this->q118 = v42; /*0x761f46*/
  *&this->u32_11C = v41; /*0x761f49*/
  LOWORD(v43) = Math::RoundToInt(v3); /*0x761f4c*/
  __asm /*0x761f51*/
  {
    fld [esp+0C8h+var_A4]
    fadd [esp+0C8h+var_6C]
  }
  v44 = v43; /*0x761f59*/
  LOWORD(v45) = Math::RoundToInt(v3); /*0x761f5b*/
  __asm { fld [esp+0C8h+var_68] } /*0x761f60*/
  v57 = v45; /*0x761f64*/
  LOWORD(v46) = Math::RoundToInt(v3); /*0x761f68*/
  v47 = v57; /*0x761f6d*/
  *&this->q120 = v44; /*0x761f77*/
  *&this->q124 = v47; /*0x761f85*/
  *&this->q128 = v46; /*0x761f88*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, &this->u32_FC, &this->u32_DC); /*0x761f91*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, &this->q108, &this->u32_E4); /*0x761faa*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, &this->q114, &this->u32_EC); /*0x761fc3*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, &this->q120, &this->u32_F4); /*0x761fdc*/
  v48 = *&this->u32_14C; /*0x761fe1*/
  *v48 = *&this->u32_DC; /*0x761fe9*/
  v48[1] = *&this->u32_E0; /*0x761fee*/
  v49 = *&this->u32_14C; /*0x761ff1*/
  *(unsigned int *)(v49 + 16) = *&this->u32_E4; /*0x761ff9*/
  *(unsigned int *)(v49 + 20) = *&this->u32_E8; /*0x761fff*/
  v50 = *&this->u32_14C; /*0x762002*/
  *(unsigned int *)(v50 + 24) = *&this->u32_F4; /*0x76200e*/
  *(unsigned int *)(v50 + 28) = *&this->u32_F8; /*0x762017*/
  result = *&this->u32_14C; /*0x76201a*/
  result->u8_28 = *&this->u32_EC; /*0x762026*/
  result->u32_2C = *&this->u32_F0; /*0x762034*/
  memcpy(&this->u32_1D8, (const void *)(*&this->u32_1D4 + 928), 0x18u); /*0x762049*/
  return result; /*0x76204b*/

}
}
// 0x762070
namespace gamemd {
AbstractClass * * Voxel::LightRender(AbstractClass ** a2, int a3)
{

  double v3; // st7
  int v6; // eax
  float v7; // eax
  float v8; // edx
  float v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // esi
  int v13; // eax
  int v14; // ebx
  int v15; // eax
  float v16; // eax
  float v17; // ecx
  int v18; // edx
  int v19; // ecx
  int v20; // eax
  float *v24; // eax
  float *v25; // eax
  float *v26; // eax
  float *v27; // eax
  int v28; // eax
  int v29; // esi
  float v30; // eax
  int v31; // eax
  float v32; // edx
  int v33; // eax
  int v34; // esi
  float v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // esi
  float v39; // eax
  int v40; // eax
  float v41; // edx
  int v42; // eax
  int v43; // esi
  float v44; // eax
  int v45; // eax
  float v46; // edx
  unsigned int *v47; // eax
  int v48; // eax
  int v49; // eax
  int result; // eax
  double v51; // [esp+4h] [ebp-D0h]
  double v52; // [esp+4h] [ebp-D0h]
  double v53; // [esp+4h] [ebp-D0h]
  double v54; // [esp+4h] [ebp-D0h]
  float v55; // [esp+8h] [ebp-CCh]
  float v56; // [esp+18h] [ebp-BCh] BYREF
  float v57; // [esp+1Ch] [ebp-B8h]
  float v58; // [esp+20h] [ebp-B4h]
  double v59; // [esp+24h] [ebp-B0h]
  float v60; // [esp+30h] [ebp-A4h]
  int v61; // [esp+34h] [ebp-A0h] BYREF
  int v62; // [esp+38h] [ebp-9Ch]
  int v63; // [esp+3Ch] [ebp-98h]
  float v64; // [esp+40h] [ebp-94h] BYREF
  int v65; // [esp+44h] [ebp-90h]
  int v66; // [esp+48h] [ebp-8Ch]
  float v67; // [esp+4Ch] [ebp-88h]
  float v68; // [esp+50h] [ebp-84h] BYREF
  float v69; // [esp+54h] [ebp-80h]
  float v70; // [esp+58h] [ebp-7Ch]
  float v71; // [esp+5Ch] [ebp-78h] BYREF
  float v72; // [esp+60h] [ebp-74h]
  float v73; // [esp+64h] [ebp-70h]
  float v74; // [esp+68h] [ebp-6Ch] BYREF
  float v75; // [esp+6Ch] [ebp-68h]
  float v76; // [esp+70h] [ebp-64h]
  float v77; // [esp+74h] [ebp-60h] BYREF
  float v78; // [esp+78h] [ebp-5Ch]
  float v79; // [esp+7Ch] [ebp-58h]
  float v80; // [esp+80h] [ebp-54h]
  float v81; // [esp+84h] [ebp-50h]
  float v82; // [esp+88h] [ebp-4Ch]
  float v83; // [esp+8Ch] [ebp-48h]
  float v84; // [esp+90h] [ebp-44h]
  float v85; // [esp+94h] [ebp-40h]
  float v86; // [esp+98h] [ebp-3Ch]
  float v87; // [esp+9Ch] [ebp-38h]
  float v88; // [esp+A0h] [ebp-34h]
  Matrix3x4 v89; // [esp+A4h] [ebp-30h] BYREF

  if ( (byte_B45D88 & 1) == 0 ) /*0x76208b*/
  {
    byte_B45D88 |= 1u; /*0x7620ad*/
    dword_B45CA0[0] = -1041235968; /*0x7620bf*/
    dword_B45CA4 = -1027080192; /*0x7620d0*/
    dword_B45CA8 = 0; /*0x7620e2*/
    dword_B45CAC = -1041235968; /*0x7620f4*/
    dword_B45CB0 = 1120403456; /*0x762105*/
    dword_B45CB4 = 0; /*0x762117*/
    dword_B45CB8 = 1106247680; /*0x762129*/
    dword_B45CBC = -1027080192; /*0x76213a*/
    dword_B45CC0 = 0; /*0x76214c*/
    dword_B45CC4 = 1106247680; /*0x76215e*/
    dword_B45CC8 = 1120403456; /*0x76216f*/
    dword_B45CCC = 0; /*0x762181*/
    dword_B45CD0 = -1039663104; /*0x762193*/
    dword_B45CD4 = -1037041664; /*0x7621a4*/
    dword_B45CD8 = 0; /*0x7621b6*/
    dword_B45CDC = -1039663104; /*0x7621c8*/
    dword_B45CE0 = 1110441984; /*0x7621d9*/
    dword_B45CE4 = 0; /*0x7621eb*/
    dword_B45CE8 = 1107820544; /*0x7621fd*/
    dword_B45CEC = -1037041664; /*0x76220e*/
    dword_B45CF0 = 0; /*0x762220*/
    dword_B45CF4 = 1107820544; /*0x762232*/
    dword_B45CF8 = 1110441984; /*0x762243*/
    dword_B45CFC = 0; /*0x762255*/
    dword_B45D00 = -1042808832; /*0x762263*/
    dword_B45D04 = -1039663104; /*0x76226c*/
    dword_B45D08 = 0; /*0x762272*/
    dword_B45D0C = -1042808832; /*0x76229c*/
    dword_B45D10 = 1107820544; /*0x7622a1*/
    dword_B45D14 = 0; /*0x7622a7*/
    dword_B45D18 = 1104674816; /*0x7622d1*/
    dword_B45D1C = -1039663104; /*0x7622d6*/
    dword_B45D20 = 0; /*0x7622dc*/
    dword_B45D24 = 1104674816; /*0x762306*/
    dword_B45D28 = 1107820544; /*0x76230b*/
    dword_B45D2C = 0; /*0x762311*/
    dword_B45D30 = 0; /*0x76233b*/
    dword_B45D34 = -1035468800; /*0x762340*/
    dword_B45D38 = 0; /*0x762346*/
    dword_B45D3C = 0; /*0x762370*/
    dword_B45D40 = 1112014848; /*0x762375*/
    dword_B45D44 = 0; /*0x76237b*/
    dword_B45D48 = 0; /*0x7623a5*/
    dword_B45D4C = -1035468800; /*0x7623aa*/
    dword_B45D50 = 0; /*0x7623b0*/
    v56 = 0.0; /*0x7623b6*/
    v57 = 50.0; /*0x7623c2*/
    v58 = 0.0; /*0x7623ce*/
    dword_B45D54 = 0; /*0x7623df*/
    dword_B45D58 = 1112014848; /*0x7623e4*/
    dword_B45D5C = 0; /*0x7623ea*/
    atexit(nullsub_47); /*0x7623f0*/
  }
  _ESI = *&this->u32_B0; /*0x7623fb*/
  __asm { fld ds:flt_7F6BB4[esi*4] } /*0x762406*/
  v61 = *a2; /*0x76240d*/
  __asm /*0x762413*/
  {
    fld st
    fsubr ds:dbl_7E1718
  }
  v60 = *(float *)a3; /*0x76241b*/
  __asm { fild [esp+0C8h+var_A4] } /*0x762422*/
  v6 = a2[2]; /*0x762426*/
  v62 = a2[1]; /*0x762429*/
  v63 = v6; /*0x76242d*/
  __asm /*0x762431*/
  {
    fmul st, st(2)
    fild [esp+0C8h+var_A0]
    fmul st, st(2)
    faddp st(1), st
  }
  LOWORD(v7) = Math::RoundToInt(v3); /*0x76243b*/
  v8 = *(float *)(a3 + 4); /*0x762440*/
  v56 = v7; /*0x762443*/
  v67 = v8; /*0x762447*/
  __asm /*0x76244b*/
  {
    fild [esp+0C8h+var_88]
    fmul st, st(2)
    fild [esp+0C8h+var_9C]
    fmul st, st(2)
    faddp st(1), st
  }
  LOWORD(v9) = Math::RoundToInt(v3); /*0x762459*/
  v57 = v9; /*0x76245e*/
  LODWORD(v59) = *(unsigned int *)(a3 + 8); /*0x762465*/
  __asm /*0x762469*/
  {
    fild dword ptr [esp+0C8h+var_B4+4]
    fmul st, st(2)
    fild [esp+0C8h+var_98]
    fmul st, st(2)
    faddp st(1), st
  }
  LOWORD(v10) = Math::RoundToInt(v3); /*0x762477*/
  __asm { fstp st } /*0x762484*/
  __asm { fstp st }
  v64 = v56; /*0x76248a*/
  v65 = LODWORD(v57); /*0x76248e*/
  v66 = v10; /*0x762492*/
  if ( !_ESI ) /*0x762496*/
    v66 = v10 + 50; /*0x76249b*/
  if ( _ESI == 3 ) /*0x7624a2*/
    v66 += 50; /*0x7624a4*/
  __asm /*0x7624a9*/
  {
    fld ds:flt_7F6BB4[esi*4]
    fld st
    fsubr ds:dbl_7E1718
    fild [esp+0C8h+var_A0]
    fmul st, st(2)
    fild [esp+0C8h+var_A4]
    fmul st, st(2)
    faddp st(1), st
  }
  LOWORD(v11) = Math::RoundToInt(v3); /*0x7624c6*/
  __asm { fild [esp+0C8h+var_9C] } /*0x7624cb*/
  v12 = v11; /*0x7624cf*/
  __asm /*0x7624d1*/
  {
    fmul st, st(2)
    fild [esp+0C8h+var_88]
    fmul st, st(2)
    faddp st(1), st
  }
  LOWORD(v13) = Math::RoundToInt(v3); /*0x7624db*/
  __asm { fild [esp+0C8h+var_98] } /*0x7624e0*/
  v14 = v13; /*0x7624e4*/
  __asm /*0x7624e6*/
  {
    fmul st, st(2)
    fild dword ptr [esp+0C8h+var_B4+4]
    fmul st, st(2)
    faddp st(1), st
  }
  LOWORD(v15) = Math::RoundToInt(v3); /*0x7624f0*/
  v61 = v12; /*0x7624fd*/
  __asm /*0x762503*/
  {
    fstp st
    fstp st
  }
  v62 = v14; /*0x762507*/
  LODWORD(v59) = v12 - LODWORD(v64); /*0x76250b*/
  __asm { fild dword ptr [esp+0C8h+var_B4+4] } /*0x76250f*/
  LODWORD(v59) = v14 - v65; /*0x762518*/
  v63 = v15; /*0x76251c*/
  __asm /*0x762520*/
  {
    fild dword ptr [esp+0D0h+var_B4+4]
    fst [esp+0D0h+var_B8]
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fstp qword ptr [esp+0D0h+var_D0]; double
    fstp st
    fstp st
  }
  Math::Sqrt(v51); /*0x762539*/
  LODWORD(v59) = v12 - LODWORD(v64); /*0x762556*/
  __asm /*0x76255a*/
  {
    fstp [esp+0D0h+var_88]
    fild dword ptr [esp+0D0h+var_B4+4]
  }
  LODWORD(v59) = v14 - v65; /*0x762562*/
  __asm { fild dword ptr [esp+0D0h+var_B4+4] } /*0x76256a*/
  LODWORD(v59) = v63 - v66; /*0x762570*/
  __asm /*0x762574*/
  {
    fstp [esp+0D0h+var_B8]
    fild dword ptr [esp+0D0h+var_B4+4]
    fst dword ptr [esp+0D0h+var_B4]
    fld [esp+0D0h+var_B8]
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fld st(3)
    fmul st, st(4)
    faddp st(1), st
    fstp qword ptr [esp+0D0h+var_D0]; double
    fstp st
    fstp st
    fstp st
  }
  Math::Sqrt(v52); /*0x76259d*/
  LOWORD(v16) = Math::RoundToInt(v3); /*0x7625a5*/
  v60 = v16; /*0x7625ae*/
  *&this->u32_B4 = v12; /*0x7625bb*/
  *&this->u32_B8 = v62; /*0x7625c1*/
  *&this->u32_BC = v63; /*0x7625c8*/
  (*(void (**)(Voxel *, char *))(*(unsigned int *)this->__pad_000 + 436))(this, &this->u32_B4); /*0x7625cf*/
  v17 = v64; /*0x7625d5*/
  v18 = v65; /*0x7625d9*/
  *&this->u32_148 = 4; /*0x7625e3*/
  *&this->u32_C0 = v17; /*0x7625ed*/
  v19 = v66; /*0x7625ef*/
  *&this->u32_C4 = v18; /*0x7625f3*/
  *&this->u32_14C = &this->q180; /*0x7625fc*/
  *&this->u32_C8 = v19; /*0x762602*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v61, &this->q0CC); /*0x762617*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v64, &this->u32_D4); /*0x76262e*/
  __asm { fld [esp+0C8h+var_88] } /*0x762633*/
  LOWORD(v20) = Math::RoundToInt(v3); /*0x762637*/
  LODWORD(v59) = v20; /*0x76263c*/
  __asm { fild dword ptr [esp+0C8h+var_B4+4] } /*0x762646*/
  _EAX = 48 * *&this->u32_B0; /*0x76264d*/
  __asm /*0x762650*/
  {
    fld st
    fadd dword ptr [eax+0B45CA0h]
    fstp [esp+0C8h+var_48]
    fld dword ptr [eax+0B45CA4h]
  }
  __asm
  {
    fstp [esp+0C8h+var_44]
    fld dword ptr [eax+0B45CA8h]
  }
  v74 = v83; /*0x762680*/
  __asm { fstp [esp+0C8h+var_40] } /*0x762684*/
  v75 = v84; /*0x762692*/
  v76 = v85; /*0x762696*/
  __asm /*0x76269a*/
  {
    fadd dword ptr [eax+0B45CACh]
    fstp [esp+0C8h+var_54]
    fld dword ptr [eax+0B45CB0h]
  }
  __asm
  {
    fstp [esp+0C8h+var_50]
    fld dword ptr [eax+0B45CB4h]
  }
  v68 = v80; /*0x7626bc*/
  __asm { fstp [esp+0C8h+var_4C] } /*0x7626c0*/
  v69 = v81; /*0x7626c8*/
  v70 = v82; /*0x7626cc*/
  __asm /*0x7626d0*/
  {
    fld dword ptr [eax+0B45CB8h]
    fstp [esp+0C8h+var_3C]
    fld dword ptr [eax+0B45CBCh]
  }
  __asm
  {
    fstp [esp+0C8h+var_38]
    fld dword ptr [eax+0B45CC0h]
  }
  v77 = v86; /*0x762702*/
  __asm { fstp [esp+0C8h+var_34] } /*0x762706*/
  v78 = v87; /*0x762714*/
  v79 = v88; /*0x762718*/
  __asm /*0x762720*/
  {
    fld dword ptr [eax+0B45CC4h]
    fstp [esp+0C8h+var_BC]
    fld dword ptr [eax+0B45CC8h]
  }
  __asm
  {
    fstp [esp+0C8h+var_B8]
    fld dword ptr [eax+0B45CCCh]
  }
  v71 = v56; /*0x76273e*/
  __asm { fstp dword ptr [esp+0C8h+var_B4] } /*0x76274c*/
  LODWORD(v59) = v66 - v63; /*0x762750*/
  __asm /*0x762758*/
  {
    fild dword ptr [esp+0C8h+var_B4+4]
    fild [esp+0C8h+var_A4]
    fild [esp+0C8h+var_98]
    fld [esp+0C8h+var_48]
    fmul st, st(3)
  }
  v72 = v57; /*0x762779*/
  __asm { fdiv st, st(2) } /*0x76277d*/
  LODWORD(v59) = LODWORD(v64) - v61; /*0x76278a*/
  __asm /*0x76278e*/
  {
    fadd st, st(1)
    fstp [esp+0D0h+var_64]
    fld [esp+0D0h+var_54]
    fmul st, st(3)
    fdiv st, st(2)
    fadd st, st(1)
    fstp [esp+0D0h+var_7C]
    fld [esp+0D0h+var_3C]
    fmul st, st(3)
    fdiv st, st(2)
    fadd st, st(1)
    fstp [esp+0D0h+var_58]
    fld [esp+0D0h+var_BC]
    fmul st, st(3)
    fdiv st, st(2)
    fadd st, st(1)
    fstp [esp+0D0h+var_70]
    fstp st
    fstp st
    fstp st
    fild dword ptr [esp+0D0h+var_B4+4]
    fst [esp+0D0h+var_BC]
  }
  LODWORD(v59) = v65 - v62; /*0x7627cf*/
  __asm /*0x7627d3*/
  {
    fild dword ptr [esp+0D0h+var_B4+4]
    fxch st(1)
    fstp [esp+0D0h+var_B4+4]
    fld [esp+0D0h+var_BC]
    fld st(1)
    fmul st, st(2)
    fld st(1)
    fmul st, st(2)
    faddp st(1), st
    fstp qword ptr [esp+0D0h+var_D0]; double
    fstp st
    fstp st
  }
  Math::Sqrt(v53); /*0x7627f2*/
  __asm /*0x7627f7*/
  {
    fld [esp+0D0h+var_B4+4]
    fld st(1)
    fcomp st(1)
  }
  __asm { fnstsw ax }
  if ( (_AX & 0x100) != 0 ) /*0x762807*/
  {
    __asm /*0x762809*/
    {
      fstp st
      fld st
    }
  }
  __asm /*0x76280d*/
  {
    fld st
    fchs
    fcomp st(2)
    fnstsw ax
  }
  if ( (_AX & 0x4100) == 0 ) /*0x762818*/
  {
    __asm /*0x76281a*/
    {
      fstp st
      fld st
      fchs
    }
  }
  __asm { fdiv st, st(1) } /*0x762820*/
  __asm
  {
    fstp qword ptr [esp+0D0h+var_D0]; double
    fstp st
  }
  Math::ArcTan2_Table(v54); /*0x76282a*/
  __asm { fstp [esp+0D0h+var_B4+4] } /*0x762837*/
  if ( v62 > v65 ) /*0x762840*/
  {
    __asm /*0x762842*/
    {
      fld [esp+0C8h+var_B4+4]
      fchs
      fstp [esp+0C8h+var_B4+4]
    }
  }
  Matrix3x4::Identity(&v89); /*0x762853*/
  __asm { fld [esp+0C8h+var_B4+4] } /*0x762858*/
  __asm { fstp [esp+0CCh+var_D0+4]; float }
  Matrix2D::Rotate(v89.m_Data, v55); /*0x762867*/
  v24 = TransformMatrix3x4Point(&v56, (float *)v89.m_Data, &v74); /*0x76287c*/
  v74 = *v24; /*0x762883*/
  v75 = v24[1]; /*0x76288f*/
  v76 = v24[2]; /*0x7628a1*/
  v25 = TransformMatrix3x4Point(&v56, (float *)v89.m_Data, &v68); /*0x7628a5*/
  v68 = *v25; /*0x7628ac*/
  v69 = v25[1]; /*0x7628b3*/
  v70 = v25[2]; /*0x7628c2*/
  v26 = TransformMatrix3x4Point(&v56, (float *)v89.m_Data, &v77); /*0x7628ce*/
  v77 = *v26; /*0x7628d5*/
  v78 = v26[1]; /*0x7628e1*/
  v79 = v26[2]; /*0x7628f3*/
  v27 = TransformMatrix3x4Point(&v56, (float *)v89.m_Data, &v71); /*0x7628f7*/
  __asm { fild [esp+0C8h+var_A0] } /*0x7628fc*/
  v71 = *v27; /*0x762902*/
  __asm /*0x762909*/
  {
    fld st
    fadd [esp+0C8h+var_6C]
  }
  v72 = v27[1]; /*0x76290f*/
  v73 = v27[2]; /*0x762916*/
  LOWORD(v28) = Math::RoundToInt(v3); /*0x76291a*/
  __asm { fild [esp+0C8h+var_9C] } /*0x76291f*/
  v29 = v28; /*0x762923*/
  __asm /*0x762925*/
  {
    fst [esp+0C8h+var_A4]
    fadd [esp+0C8h+var_68]
  }
  LOWORD(v30) = Math::RoundToInt(v3); /*0x76292d*/
  __asm { fld [esp+0C8h+var_64] } /*0x762932*/
  v57 = v30; /*0x762936*/
  LOWORD(v31) = Math::RoundToInt(v3); /*0x76293a*/
  v32 = v57; /*0x76293f*/
  __asm /*0x76294b*/
  {
    fld st
    fadd [esp+0C8h+var_84]
  }
  *&this->u32_FC = v29; /*0x762951*/
  *&this->q100 = v32; /*0x762953*/
  *&this->q104 = v31; /*0x762956*/
  LOWORD(v33) = Math::RoundToInt(v3); /*0x762959*/
  __asm /*0x76295e*/
  {
    fld [esp+0C8h+var_A4]
    fadd [esp+0C8h+var_80]
  }
  v34 = v33; /*0x762966*/
  LOWORD(v35) = Math::RoundToInt(v3); /*0x762968*/
  __asm { fld [esp+0C8h+var_7C] } /*0x76296d*/
  v57 = v35; /*0x762971*/
  LOWORD(v36) = Math::RoundToInt(v3); /*0x762975*/
  *&this->q108 = v34; /*0x762980*/
  __asm /*0x76298a*/
  {
    fld st
    fadd [esp+0C8h+var_60]
  }
  *&this->u32_10C = v57; /*0x762990*/
  *&this->u32_110 = v36; /*0x762993*/
  LOWORD(v37) = Math::RoundToInt(v3); /*0x762996*/
  __asm /*0x76299b*/
  {
    fld [esp+0C8h+var_A4]
    fadd [esp+0C8h+var_5C]
  }
  v38 = v37; /*0x7629a3*/
  LOWORD(v39) = Math::RoundToInt(v3); /*0x7629a5*/
  __asm { fld [esp+0C8h+var_58] } /*0x7629aa*/
  v57 = v39; /*0x7629ae*/
  LOWORD(v40) = Math::RoundToInt(v3); /*0x7629b2*/
  v41 = v57; /*0x7629b7*/
  __asm { fadd [esp+0C8h+var_78] } /*0x7629c1*/
  *&this->q114 = v38; /*0x7629c5*/
  *&this->q118 = v41; /*0x7629c7*/
  *&this->u32_11C = v40; /*0x7629ca*/
  LOWORD(v42) = Math::RoundToInt(v3); /*0x7629cd*/
  __asm /*0x7629d2*/
  {
    fld [esp+0C8h+var_A4]
    fadd [esp+0C8h+var_74]
  }
  v43 = v42; /*0x7629da*/
  LOWORD(v44) = Math::RoundToInt(v3); /*0x7629dc*/
  __asm { fld [esp+0C8h+var_70] } /*0x7629e1*/
  v57 = v44; /*0x7629e5*/
  LOWORD(v45) = Math::RoundToInt(v3); /*0x7629e9*/
  v46 = v57; /*0x7629ee*/
  *&this->q120 = v43; /*0x7629f8*/
  *&this->q124 = v46; /*0x762a06*/
  *&this->q128 = v45; /*0x762a09*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, &this->u32_FC, &this->u32_DC); /*0x762a12*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, &this->q108, &this->u32_E4); /*0x762a2b*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, &this->q114, &this->u32_EC); /*0x762a44*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, &this->q120, &this->u32_F4); /*0x762a5d*/
  v47 = *&this->u32_14C; /*0x762a62*/
  *v47 = *&this->u32_DC; /*0x762a6a*/
  v47[1] = *&this->u32_E0; /*0x762a6f*/
  v48 = *&this->u32_14C; /*0x762a72*/
  *(unsigned int *)(v48 + 8) = *&this->u32_E4; /*0x762a7a*/
  *(unsigned int *)(v48 + 12) = *&this->u32_E8; /*0x762a80*/
  v49 = *&this->u32_14C; /*0x762a83*/
  *(unsigned int *)(v49 + 16) = *&this->u32_F4; /*0x762a8f*/
  *(unsigned int *)(v49 + 20) = *&this->u32_F8; /*0x762a98*/
  result = *&this->u32_14C; /*0x762a9b*/
  result->u32_18 = *&this->u32_EC; /*0x762aa7*/
  result->u32_1C = *&this->u32_F0; /*0x762ab5*/
  memcpy(&this->u32_1D8, (const void *)(*&this->u32_1D4 + 928), 0x18u); /*0x762aca*/
  return result; /*0x762acc*/

}
}
// 0x762AF0
namespace gamemd {
DynamicVectorClass_flat * * Voxel::TransformMatrix()
{
  int v2; // eax
  int v3; // eax
  int v4; // ebx
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // edi
  int v9; // ebp
  int v10; // ebx
  unsigned int *v11; // eax
  int v12; // ebx
  int v13; // ebp
  int v14; // eax
  int v15; // ecx
  int v16; // edi
  int v17; // eax
  int *v18; // eax
  int v19; // edi
  int v20; // eax
  int *v21; // eax
  int v22; // edi
  int v23; // eax
  int *v24; // eax
  double v25; // st7
  double v26; // st7
  int v27; // eax
  int v28; // edi
  int v29; // eax
  unsigned int *v30; // ecx
  double v31; // st7
  int v32; // eax
  int v33; // edi
  int v34; // eax
  int v35; // edx
  double v36; // st7
  char v38; // c0
  int v39; // eax
  int v41; // eax
  int v42; // ecx
  double v43; // st7
  int v44; // eax
  int v46; // eax
  int v47; // edx
  double v48; // st7
  double v49; // st7
  int v50; // eax
  int v52; // eax
  unsigned int *v53; // ecx
  double v54; // st7
  int v55; // eax
  int v57; // eax
  int v58; // edx
  double v59; // st7
  int v60; // eax
  int v62; // eax
  int v63; // ecx
  double v64; // st7
  char v66; // c0
  int v67; // eax
  int v69; // eax
  int v70; // ecx
  double v71; // st7
  int v72; // eax
  int v74; // eax
  int v75; // edx
  double v76; // st7
  int v77; // eax
  int v79; // eax
  int v80; // ecx
  int v82; // [esp+24h] [ebp-18h]
  int v85[3]; // [esp+30h] [ebp-Ch] BYREF

  if ( *&this->u32_B0 - *&this->u32_B0 > 0.1 && !this->WaveClass_field_15C ) /*0x762b18*/
    this->WaveClass_field_12D_d = 1; /*0x762b22*/
  (*((unsigned short *)&(v2))) = Math::RoundToInt(1.0 / 0.050000001); /*0x762b35*/
  if ( this->Cells == v2 && this->WaveClass_field_15C == 3 ) /*0x762b49*/
  {
    v3 = this->WaveClass_field_134_d; /*0x762b4b*/
    this->Cells = 64; /*0x762b51*/
    this->WaveClass_field_134_d = v3 + 1; /*0x762b5c*/
  }
  v4 = this->WaveClass_field_158; /*0x762b62*/
  if ( !v4 ) /*0x762b6a*/
    goto LABEL_13; /*0x762b6a*/
  v5 = this->Owner_d; /*0x762b70*/
  if ( !v5 ) /*0x762b78*/
    goto LABEL_13; /*0x762b78*/
  (*((unsigned short *)&(v6))) = Math::RoundToInt(1.0 / 0.050000001); /*0x762b8a*/
  if ( this->Cells == v6 ) /*0x762b95*/
    goto LABEL_13; /*0x762b95*/
  if ( v5->target != v4 ) /*0x762ba1*/
    goto LABEL_13; /*0x762ba1*/
  if ( this->WaveClass_field_15C != 3 ) /*0x762bae*/
  {
    v7 = v5 + 156; /*0x762bc0*/
    v8 = v5->location; /*0x762bc4*/
    v9 = *(unsigned int *)(v7 + 4); /*0x762bc6*/
    v10 = *(unsigned int *)(v7 + 8); /*0x762bc9*/
    v11 = (unsigned int *)(*(int (**)(unsigned int, int *))(**&this->q058 + 88))( /*0x762bd1*/
                      this->WaveClass_field_158,
                      v85);
    v12 = v10 - v11[2]; /*0x762bdb*/
    v82 = v8 - *v11; /*0x762bdd*/
    v13 = v9 - v11[1]; /*0x762be4*/
    v12 = v12; /*0x762be6*/
    v13 = v13; /*0x762bea*/
    Math::Sqrt((double)v82 * (double)v82 + (double)v12 * (double)v12 + (double)v13 * (double)v13); /*0x762c16*/
    (*((unsigned short *)&(v14))) = Math::RoundToInt(1.0 / 0.050000001); /*0x762c1e*/
    v14 = v14; /*0x762c23*/
    if ( dbl_B45D80 * 6.0 < (double)v14 ) /*0x762c3e*/
    {
  LABEL_13:
      this->Facing = 0; /*0x762c40*/
      this->WaveClass_field_12D_d = 1; /*0x762c47*/
    }
  }
  if ( this->Facing ) /*0x762c4e*/
  {
    if ( this->WaveClass_field_15C != 3 ) /*0x762c69*/
      goto LABEL_21; /*0x762c69*/
    v15 = this->WaveClass_field_158; /*0x762c6f*/
    if ( v15 && (*(int (**)(int))(*(unsigned int *)v15 + 44))(v15) == 1 ) /*0x762c81*/
    {
      v16 = this->WaveClass_field_158; /*0x762c97*/
      v17 = (*(int (**)(unsigned int, int *, unsigned int, unsigned int, unsigned int))(**&this->u32_B0 + 176))( /*0x762ca9*/
              this->Owner_d,
              v85,
              0,
              0,
              0);
      v18 = (int *)(*(int (**)(int, int *, int))(*(unsigned int *)v16 + 88))(v16, &v14, v17); /*0x762cb9*/
      Voxel::LightRender(v18, 0); /*0x762cbf*/
      goto LABEL_22; /*0x762cc4*/
    }
    if ( this->WaveClass_field_15C == 3 ) /*0x762ccf*/
    {
      v19 = this->Owner_d; /*0x762cd7*/
      v20 = (*(int (**)(unsigned int))(**&this->q058 + 88))(this->WaveClass_field_158); /*0x762ce8*/
      v21 = (int *)(*(int (**)(int, int *, unsigned int, unsigned int, unsigned int, unsigned int, int))(v19->suspendedMission)( /*0x762d05*/
                     v19,
                     &v14,
                     0,
                     0,
                     0,
                     0,
                     v20);
      Voxel::LightRender(v21, (int)v85); /*0x762d0e*/
    }
    else
    {
  LABEL_21:
      v22 = this->Owner_d; /*0x762d1b*/
      v23 = (*(int (**)(unsigned int))(**&this->q058 + 88))(this->WaveClass_field_158); /*0x762d2c*/
      v24 = (int *)(*(int (**)(int, int *, unsigned int, unsigned int, unsigned int, unsigned int, int))(v22->suspendedMission)( /*0x762d49*/
                     v22,
                     &v14,
                     0,
                     0,
                     0,
                     0,
                     v23);
      Voxel::SectionProject(v24, (int)v85); /*0x762d52*/
    }
  }
  LABEL_22:
  if ( this->WaveClass_field_15C != 3 ) /*0x762d6c*/
  {
    if ( *&this->u32_12C < 1.0 && this->Facing ) /*0x762f69*/
    {
      v48 = *&this->q138 + 0.050000001; /*0x762f7d*/
      *&this->q138 = v48; /*0x762f83*/
      if ( v48 > 0.98 ) /*0x762f94*/
      {
        this->WaveClass_field_138_d = 0; /*0x762f96*/
        this->WaveClass_field_13C_d = 1072693248; /*0x762fa0*/
      }
      v49 = *&this->q138; /*0x762faa*/
      (*((unsigned short *)&(v50))) = Math::RoundToInt(v49); /*0x762fca*/
      v50 = v50; /*0x762fd5*/
      (*((unsigned short *)&(v52))) = Math::RoundToInt(v49); /*0x762fe3*/
      v53 = *&this->u32_14C; /*0x762fe8*/
      *v53 = v50; /*0x762ff0*/
      v53[1] = v52; /*0x762ff4*/
      v54 = *&this->q138; /*0x762ff7*/
      (*((unsigned short *)&(v55))) = Math::RoundToInt(v54); /*0x763017*/
      v55 = v55; /*0x763022*/
      (*((unsigned short *)&(v57))) = Math::RoundToInt(v54); /*0x763030*/
      v58 = this->WaveClass_field_14C_d; /*0x763035*/
      *(unsigned int *)(v58 + 8) = v55; /*0x76303d*/
      *(unsigned int *)(v58 + 12) = v57; /*0x763042*/
      v59 = *&this->q138; /*0x763045*/
      (*((unsigned short *)&(v60))) = Math::RoundToInt(v59); /*0x763065*/
      v60 = v60; /*0x763070*/
      (*((unsigned short *)&(v62))) = Math::RoundToInt(v59); /*0x76307e*/
      v63 = this->WaveClass_field_14C_d; /*0x763083*/
      *(unsigned int *)(v63 + 16) = v60; /*0x76308b*/
      *(unsigned int *)(v63 + 20) = v62; /*0x763090*/
    }
    if ( this->WaveClass_field_12D_d && 0.050000001 * 0.5 + *&this->u64_12D >= *&this->u64_12D ) /*0x7630be*/
    {
      v64 = *&this->u64_12D + 0.050000001; /*0x7630ca*/
      *&this->u64_12D = v64; /*0x7630d6*/
      if ( !v66 ) /*0x7630e1*/
        goto LABEL_31; /*0x7630e1*/
      (*((unsigned short *)&(v67))) = Math::RoundToInt(v64); /*0x763111*/
      v67 = v67; /*0x76311c*/
      (*((unsigned short *)&(v69))) = Math::RoundToInt(v64); /*0x76312a*/
      v70 = this->WaveClass_field_14C_d; /*0x76312f*/
      *(unsigned int *)(v70 + 24) = v67; /*0x763137*/
      *(unsigned int *)(v70 + 28) = v69; /*0x76313c*/
      v71 = *&this->u64_12D; /*0x76313f*/
      (*((unsigned short *)&(v72))) = Math::RoundToInt(v71); /*0x76315f*/
      v72 = v72; /*0x76316a*/
      (*((unsigned short *)&(v74))) = Math::RoundToInt(v71); /*0x763178*/
      v75 = this->WaveClass_field_14C_d; /*0x76317d*/
      *(unsigned int *)(v75 + 32) = v72; /*0x763185*/
      *(unsigned int *)(v75 + 36) = v74; /*0x76318a*/
      v76 = *&this->u64_12D; /*0x76318d*/
      (*((unsigned short *)&(v77))) = Math::RoundToInt(v76); /*0x7631ad*/
      v77 = v77; /*0x7631b8*/
      (*((unsigned short *)&(v79))) = Math::RoundToInt(v76); /*0x7631c6*/
      v80 = this->WaveClass_field_14C_d; /*0x7631cb*/
      *(unsigned int *)(v80 + 40) = v77; /*0x7631d3*/
      *(unsigned int *)(v80 + 44) = v79; /*0x7631d8*/
    }
    goto LABEL_42; /*0x7631d8*/
  }
  if ( *&this->u32_12C < 1.0 && this->Facing ) /*0x762d7b*/
  {
    v25 = *&this->q138 + 0.050000001; /*0x762d8f*/
    *&this->q138 = v25; /*0x762d95*/
    if ( v25 > 0.98 ) /*0x762da6*/
    {
      this->WaveClass_field_138_d = 0; /*0x762da8*/
      this->WaveClass_field_13C_d = 1072693248; /*0x762db2*/
    }
    v26 = *&this->q138; /*0x762dbc*/
    (*((unsigned short *)&(v27))) = Math::RoundToInt(v26); /*0x762ddc*/
    v27 = v27; /*0x762de7*/
    (*((unsigned short *)&(v29))) = Math::RoundToInt(v26); /*0x762df5*/
    v30 = *&this->u32_14C; /*0x762dfa*/
    *v30 = v27; /*0x762e02*/
    v30[1] = v29; /*0x762e06*/
    v31 = *&this->q138; /*0x762e09*/
    (*((unsigned short *)&(v32))) = Math::RoundToInt(v31); /*0x762e29*/
    v32 = v32; /*0x762e34*/
    (*((unsigned short *)&(v34))) = Math::RoundToInt(v31); /*0x762e42*/
    v35 = this->WaveClass_field_14C_d; /*0x762e47*/
    *(unsigned int *)(v35 + 8) = v32; /*0x762e4f*/
    *(unsigned int *)(v35 + 12) = v34; /*0x762e54*/
  }
  if ( !this->WaveClass_field_12D_d || 0.050000001 * 0.5 + *&this->u32_140 < *&this->u32_140 ) /*0x762e82*/
  {
  LABEL_42:
    Voxel::FaceBlit(); /*0x7631db*/
    return; /*0x7631dd*/
  }
  v36 = *&this->u32_140 + 0.050000001; /*0x762e8e*/
  *&this->u32_140 = v36; /*0x762e9a*/
  if ( !v38 ) /*0x762ea5*/
  {
  LABEL_31:
    (*(void (**)(int))(*&this->u32_140))(this); /*0x762ea7*/
    return; /*0x762eba*/
  }
  (*((unsigned short *)&(v39))) = Math::RoundToInt(v36); /*0x762ed5*/
  v39 = v39; /*0x762ee0*/
  (*((unsigned short *)&(v41))) = Math::RoundToInt(v36); /*0x762eee*/
  v42 = this->WaveClass_field_14C_d; /*0x762ef3*/
  *(unsigned int *)(v42 + 16) = v39; /*0x762efb*/
  *(unsigned int *)(v42 + 20) = v41; /*0x762f00*/
  v43 = *&this->u32_140; /*0x762f03*/
  (*((unsigned short *)&(v44))) = Math::RoundToInt(v43); /*0x762f23*/
  v44 = v44; /*0x762f2e*/
  (*((unsigned short *)&(v46))) = Math::RoundToInt(v43); /*0x762f3c*/
  v47 = this->WaveClass_field_14C_d; /*0x762f41*/
  *(unsigned int *)(v47 + 24) = v44; /*0x762f4b*/
  *(unsigned int *)(v47 + 28) = v46; /*0x762f50*/
  Voxel::FaceBlit(); /*0x762f53*/
}
}
// 0x763330
namespace gamemd {
int Voxel::freeSectionMemory(unsigned int * a2)
{

  int Voxel_field_0x8; // ecx
  int v4; // eax
  int v6; // eax
  int v7; // edx

  Voxel_field_0x8 = this->u32_8; /*0x763333*/
  if ( this->u32_10 >= Voxel_field_0x8 ) /*0x76333b*/
  {
    if ( !BYTE1(this->u32_C) && Voxel_field_0x8 ) /*0x763346*/
      return 0; /*0x763346*/
    v4 = this->u32_14; /*0x763348*/
    if ( v4 <= 0 /*0x763358*/
      || !(*(unsigned __int8 (**)(Voxel *, int, unsigned int))(*(unsigned int *)this->__pad_000 + 8))(
            this,
            Voxel_field_0x8 + v4,
            0) )
    {
      return 0; /*0x76335f*/
    }
  }
  v6 = this->u32_10; /*0x763365*/
  v7 = this->u32_4; /*0x763368*/
  this->u32_10 = v6 + 1; /*0x76336e*/
  *(unsigned int *)(v7 + 4 * v6) = *a2; /*0x763378*/
  return 1; /*0x763361*/

}
}
// 0x7DF9C0
namespace gamemd {
int Voxel::FacePixelBuffer(int * a1)
{
  int v1; // ebp
  int v2; // edx
  int v3; // ecx
  int *v4; // edi
  int v5; // eax
  int v6; // ebx
  unsigned short *v7; // edi
  int *v8; // ebp
  int v9; // ebx
  int v10; // edi
  int result; // eax
  unsigned char *v12; // edi
  int v13; // ecx
  int v14; // ebp
  unsigned int v15; // ebx
  int v16; // eax
  unsigned char *v17; // edi
  unsigned char *i; // edi
  unsigned int v19; // eax
  int v20; // edx
  int *v21; // [esp-14h] [ebp-2Ch]
  int v22; // [esp-10h] [ebp-28h]
  int v23; // [esp+Ch] [ebp-Ch]
  int savedregs; // [esp+18h] [ebp+0h] BYREF

  v1 = *((int16_t *)a1 + 21); /*0x7df9cf*/
  v2 = *((int16_t *)a1 + 22); /*0x7df9d3*/
  v3 = *((uint8_t *)a1 + 50); /*0x7df9d9*/
  v4 = g_VoxelOffsetTable; /*0x7df9dc*/
  v5 = 0; /*0x7df9e1*/
  v6 = 0; /*0x7df9e3*/
  do /*0x7df9fb*/
  {
    *(unsigned short *)v4 = v5; /*0x7df9ea*/
    v7 = (unsigned short *)v4 + 1; /*0x7df9ed*/
    v5 += v1; /*0x7df9f0*/
    *v7 = v6; /*0x7df9f2*/
    v4 = (int *)(v7 + 1); /*0x7df9f5*/
    v6 += v2; /*0x7df9f8*/
    --v3; /*0x7df9fa*/
  }
  while ( v3 ); /*0x7df9fb*/
  v8 = &savedregs; /*0x7df9fd*/
  v23 = a1[6]; /*0x7dfa06*/
  (((unsigned char *)&(v3))[1]) = *((unsigned char *)a1 + 49); /*0x7dfa09*/
  do /*0x7dfa51*/
  {
    *(v8 - 1) = a1[3]; /*0x7dfa0f*/
    *(v8 - 2) = *(v8 - 3); /*0x7dfa15*/
    (*((unsigned char *)&(v3))) = *((unsigned char *)a1 + 48); /*0x7dfa18*/
    do /*0x7dfa3b*/
    {
      a1[6] = *(v8 - 3); /*0x7dfa1e*/
      v9 = *a1; /*0x7dfa26*/
      v10 = *(unsigned int *)(*a1 + 4 * a1[3]); /*0x7dfa28*/
      if ( v10 >= 0 ) /*0x7dfa2b*/
      {
        v22 = v3; /*0x7dfa61*/
        v21 = v8; /*0x7dfa62*/
        v12 = (unsigned char *)(a1[2] + v10); /*0x7dfa65*/
        v13 = *((uint8_t *)a1 + 50); /*0x7dfa68*/
        (*((unsigned short *)&(v9))) = *((unsigned short *)a1 + 13); /*0x7dfa6b*/
        v15 = v9 << 16; /*0x7dfa6f*/
        v14 = *(int *)((char *)a1 + 42); /*0x7dfa72*/
        (*((unsigned short *)&(v15))) = *((unsigned short *)a1 + 12); /*0x7dfa75*/
        while ( 1 ) /*0x7dfa79*/
        {
          v16 = 0; /*0x7dfa79*/
          if ( !v13 ) /*0x7dfa7e*/
            break; /*0x7dfa7e*/
          (*((unsigned char *)&(v16))) = *v12; /*0x7dfa80*/
          v17 = v12 + 1; /*0x7dfa82*/
          (*((unsigned char *)&(v13))) = v13 - v16; /*0x7dfa83*/
          v15 += g_VoxelOffsetTable[v16]; /*0x7dfa85*/
          (((unsigned char *)&(v13))[1]) = *v17; /*0x7dfa8c*/
          for ( i = v17 + 1; (((unsigned char *)&(v13))[1]); g_VoxelRenderBuffer[v19] = g_VoxelColorPalette[v20] ) /*0x7dfa91*/
          {
            (*((unsigned char *)&(v13))) = v13 - 1; /*0x7dfa95*/
            v19 = (*(((unsigned short *)&(v15)) + 1)); /*0x7dfa97*/
            v20 = (uint8_t)i[1]; /*0x7dfa9c*/
            (*((unsigned char *)&(v19))) = (((unsigned char *)&(v15))[1]); /*0x7dfa9f*/
            (((unsigned char *)&(v20))[1]) = g_VoxelShadeTable[v20]; /*0x7dfaa1*/
            (*((unsigned char *)&(v20))) = *i; /*0x7dfaa7*/
            v15 += v14; /*0x7dfaa9*/
            i += 2; /*0x7dfaab*/
            --(((unsigned char *)&(v13))[1]); /*0x7dfaae*/
          }
          v12 = i + 1; /*0x7dfabe*/
        }
        v8 = v21; /*0x7dfac1*/
        v3 = v22; /*0x7dfac2*/
      }
      *(v8 - 3) += *(int *)((char *)a1 + 30); /*0x7dfa30*/
      a1[3] += a1[4]; /*0x7dfa36*/
      (*((unsigned char *)&(v3))) = v3 - 1; /*0x7dfa39*/
    }
    while ( (unsigned char)v3 ); /*0x7dfa3b*/
    *(v8 - 3) = a1[9] + *(v8 - 2); /*0x7dfa43*/
    result = a1[5] + *(v8 - 1); /*0x7dfa49*/
    a1[3] = result; /*0x7dfa4c*/
    --(((unsigned char *)&(v3))[1]); /*0x7dfa4f*/
  }
  while ( (((unsigned char *)&(v3))[1]) ); /*0x7dfa51*/
  return result; /*0x7dfa55*/
}
}
// 0x7DFAE0
namespace gamemd {
int Voxel::FacePixelBufferEx(int a1)
{
  int v1; // ebp
  int v2; // edx
  int v3; // ecx
  int *v4; // edi
  int v5; // eax
  int v6; // ebx
  unsigned short *v7; // edi
  int *v8; // ebp
  int v9; // ebx
  int v10; // edi
  int result; // eax
  uint8_t *v12; // edi
  int v13; // ecx
  int v14; // ebp
  unsigned int v15; // ebx
  uint8_t *i; // edi
  unsigned int v17; // eax
  int v18; // edx
  uint8_t *v19; // edi
  int v20; // eax
  int *v21; // [esp-14h] [ebp-2Ch]
  int v22; // [esp-10h] [ebp-28h]
  int v23; // [esp+Ch] [ebp-Ch]
  int savedregs; // [esp+18h] [ebp+0h] BYREF

  v1 = *(int16_t *)(a1 + 42); /*0x7dfaef*/
  v2 = *(int16_t *)(a1 + 44); /*0x7dfaf3*/
  v3 = *(uint8_t *)(a1 + 50); /*0x7dfaf9*/
  v4 = g_VoxelOffsetTable; /*0x7dfafc*/
  v5 = 0; /*0x7dfb01*/
  v6 = 0; /*0x7dfb03*/
  do /*0x7dfb1b*/
  {
    *(unsigned short *)v4 = v5; /*0x7dfb0a*/
    v7 = (unsigned short *)v4 + 1; /*0x7dfb0d*/
    v5 += v1; /*0x7dfb10*/
    *v7 = v6; /*0x7dfb12*/
    v4 = (int *)(v7 + 1); /*0x7dfb15*/
    v6 += v2; /*0x7dfb18*/
    --v3; /*0x7dfb1a*/
  }
  while ( v3 ); /*0x7dfb1b*/
  v8 = &savedregs; /*0x7dfb1d*/
  v23 = *(unsigned int *)(a1 + 24); /*0x7dfb26*/
  (((unsigned char *)&(v3))[1]) = *(unsigned char *)(a1 + 49); /*0x7dfb29*/
  do /*0x7dfb72*/
  {
    *(v8 - 1) = *(unsigned int *)(a1 + 12); /*0x7dfb2f*/
    *(v8 - 2) = *(v8 - 3); /*0x7dfb35*/
    (*((unsigned char *)&(v3))) = *(unsigned char *)(a1 + 48); /*0x7dfb38*/
    do /*0x7dfb5c*/
    {
      *(unsigned int *)(a1 + 24) = *(v8 - 3); /*0x7dfb3e*/
      v9 = *(unsigned int *)(a1 + 4); /*0x7dfb46*/
      v10 = *(unsigned int *)(v9 + 4 * *(unsigned int *)(a1 + 12)); /*0x7dfb49*/
      if ( v10 >= 0 ) /*0x7dfb4c*/
      {
        v22 = v3; /*0x7dfb81*/
        v21 = v8; /*0x7dfb82*/
        v12 = (uint8_t *)(*(unsigned int *)(a1 + 8) + v10); /*0x7dfb85*/
        v13 = *(uint8_t *)(a1 + 50); /*0x7dfb88*/
        (*((unsigned short *)&(v9))) = *(unsigned short *)(a1 + 26); /*0x7dfb8b*/
        v15 = v9 << 16; /*0x7dfb8f*/
        v14 = *(unsigned int *)(a1 + 42); /*0x7dfb92*/
        (*((unsigned short *)&(v15))) = *(unsigned short *)(a1 + 24); /*0x7dfb95*/
        while ( v13 ) /*0x7dfb9c*/
        {
          (((unsigned char *)&(v13))[1]) = *v12; /*0x7dfb9e*/
          for ( i = v12 - 1; (((unsigned char *)&(v13))[1]); g_VoxelRenderBuffer[v17] = g_VoxelColorPalette[v18] ) /*0x7dfba3*/
          {
            (*((unsigned char *)&(v13))) = v13 - 1; /*0x7dfba7*/
            v17 = (*(((unsigned short *)&(v15)) + 1)); /*0x7dfba9*/
            v18 = *i; /*0x7dfbae*/
            (*((unsigned char *)&(v17))) = (((unsigned char *)&(v15))[1]); /*0x7dfbb0*/
            (((unsigned char *)&(v18))[1]) = g_VoxelShadeTable[v18]; /*0x7dfbb2*/
            (*((unsigned char *)&(v18))) = *(i - 1); /*0x7dfbb8*/
            v15 += v14; /*0x7dfbbb*/
            i -= 2; /*0x7dfbbd*/
            --(((unsigned char *)&(v13))[1]); /*0x7dfbc0*/
          }
          v19 = i - 1; /*0x7dfbd0*/
          v20 = *v19; /*0x7dfbd3*/
          v12 = v19 - 1; /*0x7dfbd5*/
          (*((unsigned char *)&(v13))) = v13 - v20; /*0x7dfbd6*/
          v15 += g_VoxelOffsetTable[v20]; /*0x7dfbd8*/
        }
        v8 = v21; /*0x7dfbe1*/
        v3 = v22; /*0x7dfbe2*/
      }
      *(v8 - 3) += *(unsigned int *)(a1 + 30); /*0x7dfb51*/
      *(unsigned int *)(a1 + 12) += *(unsigned int *)(a1 + 16); /*0x7dfb57*/
      (*((unsigned char *)&(v3))) = v3 - 1; /*0x7dfb5a*/
    }
    while ( (unsigned char)v3 ); /*0x7dfb5c*/
    *(v8 - 3) = *(unsigned int *)(a1 + 36) + *(v8 - 2); /*0x7dfb64*/
    result = *(unsigned int *)(a1 + 20) + *(v8 - 1); /*0x7dfb6a*/
    *(unsigned int *)(a1 + 12) = result; /*0x7dfb6d*/
    --(((unsigned char *)&(v3))[1]); /*0x7dfb70*/
  }
  while ( (((unsigned char *)&(v3))[1]) ); /*0x7dfb72*/
  return result; /*0x7dfb76*/
}
}
// 0x7DFC00
namespace gamemd {
int Voxel::FacePixelBuffer3(int * a1)
{
  int v1; // ebp
  int v2; // edx
  int v3; // ecx
  int *v4; // edi
  int v5; // eax
  int v6; // ebx
  unsigned short *v7; // edi
  int *v8; // ebp
  int v9; // ebx
  int v10; // edi
  int result; // eax
  unsigned char *v12; // edi
  int v13; // ecx
  int v14; // ebp
  unsigned int v15; // ebx
  int v16; // eax
  unsigned char *v17; // edi
  char *i; // edi
  unsigned int v19; // eax
  char v20; // dl
  int *v21; // [esp-14h] [ebp-2Ch]
  int v22; // [esp-10h] [ebp-28h]
  int v23; // [esp+Ch] [ebp-Ch]
  int savedregs; // [esp+18h] [ebp+0h] BYREF

  v1 = *((int16_t *)a1 + 21); /*0x7dfc0f*/
  v2 = *((int16_t *)a1 + 22); /*0x7dfc13*/
  v3 = 255; /*0x7dfc17*/
  (*((unsigned char *)&(v3))) = -1 - *((unsigned char *)a1 + 50); /*0x7dfc1c*/
  v4 = g_VoxelOffsetTable; /*0x7dfc1f*/
  v5 = 0; /*0x7dfc24*/
  v6 = 0; /*0x7dfc26*/
  do /*0x7dfc3e*/
  {
    *(unsigned short *)v4 = v5; /*0x7dfc2d*/
    v7 = (unsigned short *)v4 + 1; /*0x7dfc30*/
    v5 += v1; /*0x7dfc33*/
    *v7 = v6; /*0x7dfc35*/
    v4 = (int *)(v7 + 1); /*0x7dfc38*/
    v6 += v2; /*0x7dfc3b*/
    --v3; /*0x7dfc3d*/
  }
  while ( v3 ); /*0x7dfc3e*/
  v8 = &savedregs; /*0x7dfc40*/
  v23 = a1[6]; /*0x7dfc49*/
  (((unsigned char *)&(v3))[1]) = *((unsigned char *)a1 + 49); /*0x7dfc4c*/
  do /*0x7dfc94*/
  {
    *(v8 - 1) = a1[3]; /*0x7dfc52*/
    *(v8 - 2) = *(v8 - 3); /*0x7dfc58*/
    (*((unsigned char *)&(v3))) = *((unsigned char *)a1 + 48); /*0x7dfc5b*/
    do /*0x7dfc7e*/
    {
      a1[6] = *(v8 - 3); /*0x7dfc61*/
      v9 = *a1; /*0x7dfc69*/
      v10 = *(unsigned int *)(*a1 + 4 * a1[3]); /*0x7dfc6b*/
      if ( v10 >= 0 ) /*0x7dfc6e*/
      {
        v22 = v3; /*0x7dfca1*/
        v21 = v8; /*0x7dfca2*/
        v12 = (unsigned char *)(a1[2] + v10); /*0x7dfca5*/
        v13 = *((uint8_t *)a1 + 50); /*0x7dfca8*/
        (*((unsigned short *)&(v9))) = *((unsigned short *)a1 + 13); /*0x7dfcab*/
        v15 = v9 << 16; /*0x7dfcaf*/
        v14 = *(int *)((char *)a1 + 42); /*0x7dfcb2*/
        (*((unsigned short *)&(v15))) = *((unsigned short *)a1 + 12); /*0x7dfcb5*/
        while ( 1 ) /*0x7dfcb9*/
        {
          v16 = 0; /*0x7dfcb9*/
          if ( !v13 ) /*0x7dfcbe*/
            break; /*0x7dfcbe*/
          (*((unsigned char *)&(v16))) = *v12; /*0x7dfcc0*/
          v17 = v12 + 1; /*0x7dfcc2*/
          (*((unsigned char *)&(v13))) = v13 - v16; /*0x7dfcc3*/
          v15 += g_VoxelOffsetTable[v16]; /*0x7dfcc5*/
          (((unsigned char *)&(v13))[1]) = *v17; /*0x7dfccc*/
          for ( i = v17 + 1; (((unsigned char *)&(v13))[1]); g_VoxelRenderBuffer[v19] = v20 ) /*0x7dfcd1*/
          {
            (*((unsigned char *)&(v13))) = v13 - 1; /*0x7dfcd5*/
            v19 = (*(((unsigned short *)&(v15)) + 1)); /*0x7dfcd7*/
            v20 = *i; /*0x7dfcda*/
            (*((unsigned char *)&(v19))) = (((unsigned char *)&(v15))[1]); /*0x7dfcdc*/
            ++i; /*0x7dfcde*/
            v15 += v14; /*0x7dfcdf*/
            --(((unsigned char *)&(v13))[1]); /*0x7dfce1*/
          }
          v12 = i + 1; /*0x7dfceb*/
        }
        v8 = v21; /*0x7dfcee*/
        v3 = v22; /*0x7dfcef*/
      }
      *(v8 - 3) += *(int *)((char *)a1 + 30); /*0x7dfc73*/
      a1[3] += a1[4]; /*0x7dfc79*/
      (*((unsigned char *)&(v3))) = v3 - 1; /*0x7dfc7c*/
    }
    while ( (unsigned char)v3 ); /*0x7dfc7e*/
    *(v8 - 3) = a1[9] + *(v8 - 2); /*0x7dfc86*/
    result = a1[5] + *(v8 - 1); /*0x7dfc8c*/
    a1[3] = result; /*0x7dfc8f*/
    --(((unsigned char *)&(v3))[1]); /*0x7dfc92*/
  }
  while ( (((unsigned char *)&(v3))[1]) ); /*0x7dfc94*/
  return result; /*0x7dfc98*/
}
}
// 0x754C00
namespace gamemd {
int Voxel::SetProjectionAngle(float a1)
{
  int *v1; // eax
  float v3[3]; // [esp+0h] [ebp-48h] BYREF
  float v4[3]; // [esp+Ch] [ebp-3Ch] BYREF
  float v5[12]; // [esp+18h] [ebp-30h] BYREF

  Matrix3x4::Identity(v5); /*0x754c07*/
  dword_88746C = a1; /*0x754c12*/
  Matrix3D::RotateZ(v5, a1); /*0x754c1c*/
  v3[0] = -0.70710599; /*0x754c2e*/
  v3[1] = -0.70710599; /*0x754c36*/
  v3[2] = 0.0; /*0x754c3e*/
  v1 = (int *)TransformMatrix3x4Point(v4, v5, v3); /*0x754c46*/
  dword_887470 = *v1; /*0x754c4d*/
  dword_887474 = v1[1]; /*0x754c62*/
  dword_887478 = v1[2]; /*0x754c6b*/
  dword_887424 = 0; /*0x754c88*/
  v3[0] = *(float *)&dword_887470 * -6.0; /*0x754c8e*/
  dword_887428 = 0; /*0x754c96*/
  dword_887420 = (*((unsigned int *)&(v3[0]))); /*0x754c9b*/
  return 0; /*0x754ca1*/
}
} // namespace gamemd

// 0x75F020
namespace gamemd {
int Voxel::InitDistanceTable()
{
  double v1; // st7
  int v2; // ebp
  int16_t *v3; // edi
  int i; // esi
  int16_t *v5; // esi
  int16_t *v6; // esi
  int *v7; // ecx
  int result; // eax
  double v9; // [esp+0h] [ebp-20h]
  double v10; // [esp+0h] [ebp-20h]
  double v11; // [esp+0h] [ebp-20h]
  int v12; // [esp+1Ch] [ebp-4h]
  int v13; // [esp+1Ch] [ebp-4h]
  int v14; // [esp+1Ch] [ebp-4h]

  byte_B725CC = 1; /*0x75f02d*/
  v2 = 0; /*0x75f034*/
  v3 = word_B4669C; /*0x75f036*/
  do /*0x75f07a*/
  {
    for ( i = 0; i < 300; ++i ) /*0x75f03d*/
    {
      v12 = v2 * v2 + i * i; /*0x75f04c*/
      __asm /*0x75f050*/
      {
        fild [esp+20h+var_4]
        fstp [esp+20h+var_20]; double
      }
      Math::Sqrt(v9); /*0x75f057*/
      *v3++ = Math::RoundToInt(v1); /*0x75f064*/
    }
    ++v2; /*0x75f073*/
  }
  while ( (int)v3 < (int)&dword_B725BC ); /*0x75f07a*/
  v5 = word_B46254; /*0x75f07e*/
  v13 = 0; /*0x75f083*/
  do /*0x75f0c5*/
  {
    __asm { fild [esp+18h+var_4] } /*0x75f087*/
    __asm
    {
      fmul ds:dbl_7F6DE0
      fstp [esp+20h+var_20]; double
    }
    Math::SinCos(v10); /*0x75f097*/
    __asm { fmul ds:dbl_7ED8D8 } /*0x75f09c*/
    __asm { fadd ds:dbl_7EDB10 }
    *v5++ = Math::RoundToInt(v1); /*0x75f0b4*/
    ++v13; /*0x75f0c1*/
  }
  while ( (int)v5 < (int)word_B4663C ); /*0x75f0c5*/
  v14 = 0; /*0x75f0c7*/
  v6 = word_B45E68; /*0x75f0cb*/
  do /*0x75f10e*/
  {
    __asm { fild [esp+18h+var_4] } /*0x75f0d0*/
    __asm
    {
      fmul ds:dbl_7E3860
      fstp [esp+20h+var_20]; double
    }
    Math::SinCos(v11); /*0x75f0e0*/
    __asm { fmul ds:dbl_7ED8D8 } /*0x75f0e5*/
    __asm { fadd ds:dbl_7EDB10 }
    *v6++ = Math::RoundToInt(v1); /*0x75f0fd*/
    ++v14; /*0x75f10a*/
  }
  while ( (int)v6 < (int)&dword_B46248 ); /*0x75f10e*/
  v7 = dword_B46648; /*0x75f110*/
  for ( result = 110; result < 214; result += 8 ) /*0x75f115*/
    *v7++ = result; /*0x75f11a*/
  return result; /*0x75f129*/
}
} // namespace gamemd
