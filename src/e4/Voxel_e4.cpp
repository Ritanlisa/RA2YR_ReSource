// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
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

// 0x748220
namespace gamemd {
int Voxel::BuildIndexTable()
{

  int v1; // ebx
  int v3; // edx
  int v4; // edi
  int16_t v5; // bx
  int v6; // eax
  int v7; // esi
  int v8; // edx
  int v9; // ecx
  int v10; // ebx
  char v12; // [esp+8h] [ebp-18h]
  char v13; // [esp+Ch] [ebp-14h]
  char v14; // [esp+10h] [ebp-10h]
  int v15; // [esp+14h] [ebp-Ch]
  int i; // [esp+18h] [ebp-8h]
  int16_t j; // [esp+1Ch] [ebp-4h]

  v1 = 0; /*0x748229*/
  if ( unk_B1D14C ) /*0x748230*/
  {
    __3_YAXPAX_Z(unk_B1D14C); /*0x748233*/
    unk_B1D14C = 0; /*0x74823b*/
  }
  unk_B1D14C = __2_YAPAXI_Z(0x1FFFCu); /*0x748250*/
  if ( !unk_B1D14C ) /*0x748255*/
    return 0; /*0x748348*/
  switch ( (unsigned int)this ) /*0x748264*/
  {
    case 0u: /*0x748264*/
      v12 = 10; /*0x74826b*/
      v13 = 5; /*0x748273*/
      v14 = 0; /*0x74827b*/
      break; /*0x74827f*/
    case 1u: /*0x748264*/
      v12 = 11; /*0x7482ad*/
      v13 = 6; /*0x7482b5*/
      v14 = 1; /*0x7482bd*/
      break; /*0x7482bd*/
    case 2u: /*0x748264*/
      v12 = 11; /*0x748297*/
      v13 = 6; /*0x74829f*/
      v14 = 0; /*0x7482a7*/
      break; /*0x7482ab*/
    case 3u: /*0x748264*/
      v12 = 11; /*0x748281*/
      v13 = 5; /*0x748289*/
      v14 = 0; /*0x748291*/
      break; /*0x748295*/
    default:
      return 0;
  }
  for ( i = 0; i < 32; ++i ) /*0x7482c7*/
  {
    v3 = 0; /*0x7482d1*/
    v4 = v1 << v12; /*0x7482d3*/
    v5 = 32 * v1; /*0x7482d5*/
    v15 = 0; /*0x7482d8*/
    for ( j = v5; ; v5 = j ) /*0x7482dc*/
    {
      v6 = 0; /*0x7482ee*/
      v7 = v3 << v13; /*0x7482f3*/
      v8 = (uint16_t)(32 * (v5 | v3)); /*0x7482f5*/
      do /*0x748320*/
      {
        v9 = v8 | (uint16_t)v6; /*0x748311*/
        v10 = v7 | v4 | (v6++ << v14); /*0x748315*/
        *((unsigned short *)unk_B1D14C + v9) = v10; /*0x74831b*/
      }
      while ( v6 < 32 ); /*0x748320*/
      v3 = ++v15; /*0x748326*/
      if ( v15 >= 32 ) /*0x74832e*/
        break; /*0x74832e*/
    }
    v1 = i + 1; /*0x748334*/
  }
  return 1; /*0x748340*/

}
}
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
  v25[0] = (*(float *)&MEMORY[0xB2D5E0] + *(float *)&MEMORY[0xB2D948]) * 0.5; /*0x754536*/
  v25[1] = (*(float *)&MEMORY[0xB2D5E4] + *(float *)&MEMORY[0xB2D94C]) * 0.5; /*0x75454c*/
  v25[2] = (*(float *)&MEMORY[0xB2D5E8] + *(float *)&MEMORY[0xB2D950]) * 0.5; /*0x754562*/
  if ( MEMORY[0xB2FB70] > 0 ) /*0x754566*/
  {
    v2 = (char *)&unk_B3FF78; /*0x754568*/
    do /*0x754585*/
    {
      InitializeTileAudioOcclusion(v2, v25); /*0x754575*/
      ++v1; /*0x75457f*/
      v2 += 72; /*0x754580*/
    }
    while ( v1 < MEMORY[0xB2FB70] ); /*0x754585*/
  }
  v3 = MEMORY[0xB2D820]; /*0x754587*/
  if ( MEMORY[0xB2D820] > 0 ) /*0x75458f*/
  {
    v4 = &MEMORY[0xB2D824]; /*0x754591*/
    v5 = (char *)&MEMORY[0xB2D958]; /*0x754596*/
    v6 = MEMORY[0xB2D820]; /*0x75459b*/
    do /*0x7545a8*/
    {
      *v4 = (unsigned int)(v5);
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
    v9 = (char *)&MEMORY[0xB2D824]; /*0x7545b6*/
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
        v3 = MEMORY[0xB2D820]; /*0x7545df*/
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
      v16 = (unsigned int ***)&MEMORY[0xB2D824]; /*0x754628*/
      do /*0x754647*/
      {
        Voxel::ProcessColor(**v16, *v16, v25); /*0x754637*/
        ++v15; /*0x754641*/
        ++v16; /*0x754642*/
      }
      while ( v15 < MEMORY[0xB2D820] ); /*0x754647*/
    }
  }
  LODWORD(v17) = Math::RoundToInt(*(float *)&MEMORY[0xB2D948] - *(float *)&MEMORY[0xB2D5E0]); /*0x754666*/
  v18 = Math::RoundToInt(*(float *)&MEMORY[0xB2D94C] - *(float *)&MEMORY[0xB2D5E4]); /*0x754668*/
  v19 = 128 - SLODWORD(v17) / 2; /*0x75467f*/
  LODWORD(v17) += 8; /*0x754686*/
  LODWORD(v20) = v18 + 8; /*0x754694*/
  v19 -= 4; /*0x75469a*/
  v26 = 128 - v18 / 2 - 4; /*0x75469d*/
  MEMORY[0xB2FB64] = v26; /*0x7546a1*/
  MEMORY[0xB2FB60] = v19; /*0x7546a8*/
  MEMORY[0xB2FB68] = LODWORD(v17); /*0x7546b1*/
  MEMORY[0xB2FB6C] = v18 + 8; /*0x7546b9*/
  LODWORD(v24) = Math::RoundToInt(v25[0]) - SLODWORD(v17) / 2; /*0x7546c8*/
  v21 = Math::RoundToInt(v25[1]); /*0x7546d9*/
  v25[0] = v24; /*0x7546e8*/
  LODWORD(v25[1]) = v21 - SLODWORD(v20) / 2; /*0x7546ec*/
  v25[4] = v17; /*0x7546f4*/
  v25[5] = v20; /*0x7546f8*/
  LODWORD(v25[2]) = v19; /*0x754707*/
  LODWORD(v25[3]) = v26; /*0x75470b*/
  qmemcpy(this, v25, 0x18u); /*0x75470f*/
  return this; /*0x754711*/

}
}
// 0x754CB0
namespace gamemd {
int Voxel::Projection_Setup()
{

  int *v0; // eax
  int *v1; // eax
  int *v2; // eax
  int v3; // edx
  int *v4; // eax
  int v5; // edx
  float v6; // ebx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  float v11; // ebp
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // edi
  float *v25; // esi
  float *v26; // eax
  int v27; // ecx
  float *v28; // ecx
  double v29; // st7
  float *v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int *v47; // esi
  int result; // eax
  float v49; // [esp+0h] [ebp-114h]
  float v50; // [esp+0h] [ebp-114h]
  float v51; // [esp+0h] [ebp-114h]
  unsigned char v52[16]; // [esp+14h] [ebp-100h] BYREF
  int v53; // [esp+34h] [ebp-E0h] BYREF
  float v54; // [esp+38h] [ebp-DCh]
  int v55; // [esp+3Ch] [ebp-D8h]
  int v56; // [esp+40h] [ebp-D4h] BYREF
  int v57; // [esp+44h] [ebp-D0h]
  int v58; // [esp+48h] [ebp-CCh]
  float v59; // [esp+4Ch] [ebp-C8h]
  int v60; // [esp+80h] [ebp-94h]
  int v61; // [esp+84h] [ebp-90h]
  int v62; // [esp+88h] [ebp-8Ch]
  int v63; // [esp+8Ch] [ebp-88h]
  int v64; // [esp+90h] [ebp-84h]
  int v65; // [esp+94h] [ebp-80h]
  int v66; // [esp+98h] [ebp-7Ch]
  int v67; // [esp+9Ch] [ebp-78h]
  int v68; // [esp+A0h] [ebp-74h]
  int v69; // [esp+A4h] [ebp-70h]
  int v70; // [esp+A8h] [ebp-6Ch]
  int v71; // [esp+ACh] [ebp-68h]
  int v72; // [esp+B0h] [ebp-64h]
  int v73; // [esp+B4h] [ebp-60h]
  int v74; // [esp+B8h] [ebp-5Ch]
  int v75; // [esp+BCh] [ebp-58h]
  int v76; // [esp+C0h] [ebp-54h]
  int v77; // [esp+C4h] [ebp-50h]
  int v78; // [esp+C8h] [ebp-4Ch]
  int v79; // [esp+CCh] [ebp-48h]
  int v80; // [esp+D0h] [ebp-44h]
  int v81; // [esp+D4h] [ebp-40h]
  int v82; // [esp+D8h] [ebp-3Ch]
  int v83; // [esp+DCh] [ebp-38h]
  float v84; // [esp+E0h] [ebp-34h]
  char v85[48]; // [esp+E4h] [ebp-30h] BYREF

  v84 = MEMORY[0xB43F08]; /*0x754cbe*/
  v59 = MEMORY[0xB44310]; /*0x754cd0*/
  *(float *)&v53 = 1.0; /*0x754ce4*/
  v54 = 0.0; /*0x754cec*/
  v55 = 0; /*0x754cf4*/
  v56 = 0; /*0x754cfc*/
  v57 = 0; /*0x754d04*/
  v58 = 1065353216; /*0x754d0c*/
  Math::BuildRotationMatrix((int)&v56, 0.785375); /*0x754d14*/
  v0 = (int *)TransformMatrix3x4Point(&v53); /*0x754d1f*/
  v69 = *v0; /*0x754d26*/
  v70 = v0[1]; /*0x754d30*/
  v71 = v0[2]; /*0x754d4d*/
  v56 = 1065353216; /*0x754d54*/
  v57 = 0; /*0x754d5c*/
  v58 = 0; /*0x754d64*/
  *(float *)&v53 = 0.0; /*0x754d6c*/
  v54 = 0.0; /*0x754d74*/
  v55 = 1065353216; /*0x754d7c*/
  Math::BuildRotationMatrix((int)&v53, 2.3561251); /*0x754d84*/
  v1 = (int *)TransformMatrix3x4Point(&v56); /*0x754d8f*/
  v60 = *v1; /*0x754d96*/
  v61 = v1[1]; /*0x754d9d*/
  v62 = v1[2]; /*0x754dba*/
  v56 = 1065353216; /*0x754dc1*/
  v57 = 0; /*0x754dc9*/
  v58 = 0; /*0x754dd1*/
  *(float *)&v53 = 0.0; /*0x754dd9*/
  v54 = 0.0; /*0x754de1*/
  v55 = 1065353216; /*0x754de9*/
  Math::BuildRotationMatrix((int)&v53, 3.9268751); /*0x754df1*/
  v2 = (int *)TransformMatrix3x4Point(&v56); /*0x754dfc*/
  v78 = *v2; /*0x754e03*/
  v79 = v2[1]; /*0x754e0d*/
  v3 = v2[2]; /*0x754e14*/
  v56 = 1065353216; /*0x754e17*/
  v80 = v3; /*0x754e1f*/
  v57 = 0; /*0x754e26*/
  v58 = 0; /*0x754e2e*/
  *(float *)&v53 = 0.0; /*0x754e36*/
  v54 = 0.0; /*0x754e3e*/
  v55 = 1065353216; /*0x754e46*/
  Math::BuildRotationMatrix((int)&v53, 5.4976249); /*0x754e61*/
  v4 = (int *)TransformMatrix3x4Point(&v56); /*0x754e6c*/
  v72 = *v4; /*0x754e73*/
  v73 = v4[1]; /*0x754e7d*/
  v5 = v4[2]; /*0x754e89*/
  v81 = 1065353216; /*0x754e8c*/
  v74 = v5; /*0x754e97*/
  v82 = 0; /*0x754e9e*/
  v83 = 0; /*0x754ea9*/
  v75 = 0; /*0x754eb4*/
  v76 = 1065353216; /*0x754ebf*/
  v77 = 0; /*0x754eca*/
  v63 = -1082130432; /*0x754ed5*/
  v64 = 0; /*0x754ee0*/
  v65 = 0; /*0x754eeb*/
  v66 = 0; /*0x754ef6*/
  v67 = -1082130432; /*0x754f01*/
  v68 = 0; /*0x754f0c*/
  Matrix3x4::Identity(&MEMORY[0xB43F10]); /*0x754f17*/
  v6 = v59; /*0x754f1c*/
  qmemcpy(&MEMORY[0xB43F40], (const void *)Matrix3D::Constructor(3.9268751, v59), 0x30u); /*0x754f3c*/
  qmemcpy(&MEMORY[0xB43F70], (const void *)Matrix3D::Constructor(2.3561251, v6), 0x30u); /*0x754f59*/
  qmemcpy(&MEMORY[0xB43FA0], (const void *)Matrix3D::Constructor(0.785375, v6), 0x30u); /*0x754f76*/
  qmemcpy(&MEMORY[0xB43FD0], (const void *)Matrix3D::Constructor(5.4976249, v6), 0x30u); /*0x754f93*/
  v7 = FromQuaternionAxisAngle(v6); /*0x754fa0*/
  Float4::Copy(v52, v7); /*0x754fb0*/
  v8 = FromQuaternionAxisAngle(v6); /*0x754fbe*/
  Float4::Copy(v52, v8); /*0x754fce*/
  v9 = FromQuaternionAxisAngle(v6); /*0x754fdf*/
  Float4::Copy(v52, v9); /*0x754fef*/
  v10 = FromQuaternionAxisAngle(v6); /*0x755000*/
  Float4::Copy(v52, v10); /*0x755010*/
  v11 = v84; /*0x755019*/
  qmemcpy(&MEMORY[0xB44000], (const void *)Matrix3D::Constructor(3.1415, v84), 0x30u); /*0x755038*/
  qmemcpy(&MEMORY[0xB44030], (const void *)Matrix3D::Constructor(1.57075, v11), 0x30u); /*0x755055*/
  qmemcpy(&MEMORY[0xB44060], (const void *)Matrix3D::Constructor(0.0, v11), 0x30u); /*0x75506f*/
  qmemcpy(&MEMORY[0xB44090], (const void *)Matrix3D::Constructor(4.7122502, v11), 0x30u); /*0x75508c*/
  v12 = FromQuaternionAxisAngle(v11); /*0x755099*/
  Float4::Copy(v52, v12); /*0x7550a9*/
  v13 = FromQuaternionAxisAngle(v11); /*0x7550ba*/
  Float4::Copy(v52, v13); /*0x7550ca*/
  v14 = FromQuaternionAxisAngle(v11); /*0x7550db*/
  Float4::Copy(v52, v14); /*0x7550eb*/
  v15 = FromQuaternionAxisAngle(v11); /*0x7550fc*/
  Float4::Copy(v52, v15); /*0x75510c*/
  qmemcpy(&MEMORY[0xB440C0], (const void *)Matrix3D::Constructor(3.1415, v11), 0x30u); /*0x75512d*/
  qmemcpy(&MEMORY[0xB440F0], (const void *)Matrix3D::Constructor(1.57075, v11), 0x30u); /*0x75514a*/
  qmemcpy(&MEMORY[0xB44120], (const void *)Matrix3D::Constructor(0.0, v11), 0x30u); /*0x755164*/
  qmemcpy(&MEMORY[0xB44150], (const void *)Matrix3D::Constructor(4.7122502, v11), 0x30u); /*0x755181*/
  v16 = FromQuaternionAxisAngle(v11); /*0x75518e*/
  Float4::Copy(v52, v16); /*0x75519e*/
  v17 = FromQuaternionAxisAngle(v11); /*0x7551af*/
  Float4::Copy(v52, v17); /*0x7551bf*/
  v18 = FromQuaternionAxisAngle(v11); /*0x7551d0*/
  Float4::Copy(v52, v18); /*0x7551e0*/
  v19 = FromQuaternionAxisAngle(v11); /*0x7551f1*/
  Float4::Copy(v52, v19); /*0x755201*/
  qmemcpy(&MEMORY[0xB44180], (const void *)Matrix3D::Constructor(3.1415, v6), 0x30u); /*0x755221*/
  qmemcpy(&MEMORY[0xB441B0], (const void *)Matrix3D::Constructor(1.57075, v6), 0x30u); /*0x75523f*/
  qmemcpy(&MEMORY[0xB441E0], (const void *)Matrix3D::Constructor(0.0, v6), 0x30u); /*0x755259*/
  qmemcpy(&MEMORY[0xB44210], (const void *)Matrix3D::Constructor(4.7122502, v6), 0x30u); /*0x755276*/
  v20 = FromQuaternionAxisAngle(v6); /*0x755283*/
  Float4::Copy(v52, v20); /*0x755293*/
  v21 = FromQuaternionAxisAngle(v6); /*0x7552a4*/
  Float4::Copy(v52, v21); /*0x7552b4*/
  v22 = FromQuaternionAxisAngle(v6); /*0x7552c5*/
  Float4::Copy(v52, v22); /*0x7552d5*/
  v23 = FromQuaternionAxisAngle(v6); /*0x7552e6*/
  Float4::Copy(v52, v23); /*0x7552f6*/
  Matrix3x4::Identity(&MEMORY[0xB44240]); /*0x755300*/
  Matrix3x4::Identity(&MEMORY[0xB44270]); /*0x75530a*/
  Matrix3x4::Identity(&MEMORY[0xB442A0]); /*0x755314*/
  Matrix3x4::Identity(&MEMORY[0xB442D0]); /*0x75531e*/
  v24 = 0; /*0x755323*/
  Int4::Set2(0, 0, 0, 1065353216); /*0x755332*/
  Int4::Set2(0, 0, 0, 1065353216); /*0x755344*/
  Int4::Set2(0, 0, 0, 1065353216); /*0x755356*/
  Int4::Set2(0, 0, 0, 1065353216); /*0x755368*/
  v59 = 0.0; /*0x75536d*/
  do /*0x755459*/
  {
    Matrix3x4::Identity(v85); /*0x755378*/
    v49 = (double)SLODWORD(v59) * 0.024542969; /*0x75538f*/
    Matrix2D::Rotate(v49); /*0x755392*/
    v56 = 1065353216; /*0x7553a7*/
    v57 = 0; /*0x7553af*/
    v58 = 0; /*0x7553b7*/
    v25 = &MEMORY[0xB432D8][v24]; /*0x7553bf*/
    v26 = (float *)TransformMatrix3x4Point(&v56); /*0x7553c5*/
    *v25 = *v26; /*0x7553d4*/
    v27 = *((unsigned int *)v26 + 1); /*0x7553d6*/
    v55 = 0; /*0x7553d9*/
    *((unsigned int *)v25 + 1) = v27; /*0x7553e1*/
    v25[2] = v26[2]; /*0x7553e7*/
    v28 = (float *)((char *)&MEMORY[0xB444A0] + v24 * 4); /*0x7553f8*/
    *(float *)&v53 = *(float *)(v24 * 4 + 11809500) - 0.0; /*0x7553fa*/
    v29 = 0.0 - MEMORY[0xB432D8][v24]; /*0x755402*/
    *v28 = *(float *)&v53; /*0x755404*/
    v54 = v29; /*0x755406*/
    v28[1] = v54; /*0x75540e*/
    *((unsigned int *)v28 + 2) = v55; /*0x755415*/
    Math::BuildRotationMatrix((int)&MEMORY[0xB444A0] + v24 * 4, MEMORY[0x88746C]); /*0x755424*/
    v30 = (float *)TransformMatrix3x4Point(&MEMORY[0xB432D8][v24]); /*0x755432*/
    v24 += 3; /*0x755439*/
    *v25 = *v30; /*0x75543c*/
    v25[1] = v30[1]; /*0x755441*/
    v25[2] = v30[2]; /*0x755447*/
    ++LODWORD(v59); /*0x755455*/
  }
  while ( v24 < 768 ); /*0x755459*/
  Matrix3x4::Identity(&MEMORY[0xB45188]); /*0x755464*/
  qmemcpy(&MEMORY[0xB451B8], (const void *)Matrix3D::Constructor(4.7122502, v6), 0x30u); /*0x755485*/
  qmemcpy(&MEMORY[0xB451E8], (const void *)Matrix3D::Constructor(3.1415, v6), 0x30u); /*0x7554a2*/
  qmemcpy(&MEMORY[0xB45218], (const void *)Matrix3D::Constructor(1.57075, v6), 0x30u); /*0x7554bf*/
  qmemcpy(&MEMORY[0xB45248], (const void *)Matrix3D::Constructor(0.0, v6), 0x30u); /*0x7554d9*/
  qmemcpy(&MEMORY[0xB45278], (const void *)Matrix3D::Constructor(3.9268751, v11), 0x30u); /*0x7554f6*/
  qmemcpy(&MEMORY[0xB452A8], (const void *)Matrix3D::Constructor(2.3561251, v11), 0x30u); /*0x755513*/
  qmemcpy(&MEMORY[0xB452D8], (const void *)Matrix3D::Constructor(0.785375, v11), 0x30u); /*0x755530*/
  qmemcpy(&MEMORY[0xB45308], (const void *)Matrix3D::Constructor(5.4976249, v11), 0x30u); /*0x75554d*/
  qmemcpy(&MEMORY[0xB45338], (const void *)Matrix3D::Constructor(3.9268751, v11), 0x30u); /*0x75556a*/
  qmemcpy(&MEMORY[0xB45368], (const void *)Matrix3D::Constructor(2.3561251, v11), 0x30u); /*0x755586*/
  qmemcpy(&MEMORY[0xB45398], (const void *)Matrix3D::Constructor(0.785375, v11), 0x30u); /*0x7555a4*/
  qmemcpy(&MEMORY[0xB453C8], (const void *)Matrix3D::Constructor(5.4976249, v11), 0x30u); /*0x7555c1*/
  qmemcpy(&MEMORY[0xB453F8], (const void *)Matrix3D::Constructor(3.9268751, v6), 0x30u); /*0x7555de*/
  qmemcpy(&MEMORY[0xB45428], (const void *)Matrix3D::Constructor(2.3561251, v6), 0x30u); /*0x7555fb*/
  qmemcpy(&MEMORY[0xB45458], (const void *)Matrix3D::Constructor(0.785375, v6), 0x30u); /*0x755618*/
  qmemcpy(&MEMORY[0xB45488], (const void *)Matrix3D::Constructor(5.4976249, v6), 0x30u); /*0x755639*/
  Int4::Set2(0, 0, 0, 1065353216); /*0x755646*/
  v31 = FromQuaternionAxisAngle(v6); /*0x755657*/
  Float4::Copy(v52, v31); /*0x755667*/
  v32 = FromQuaternionAxisAngle(v6); /*0x755678*/
  Float4::Copy(v52, v32); /*0x755688*/
  v33 = FromQuaternionAxisAngle(v6); /*0x755699*/
  Float4::Copy(v52, v33); /*0x7556a9*/
  v34 = FromQuaternionAxisAngle(v6); /*0x7556ba*/
  Float4::Copy(v52, v34); /*0x7556ca*/
  v35 = FromQuaternionAxisAngle(v11); /*0x7556db*/
  Float4::Copy(v52, v35); /*0x7556eb*/
  v36 = FromQuaternionAxisAngle(v11); /*0x7556f9*/
  Float4::Copy(v52, v36); /*0x755709*/
  v37 = FromQuaternionAxisAngle(v11); /*0x75571a*/
  Float4::Copy(v52, v37); /*0x75572a*/
  v38 = FromQuaternionAxisAngle(v11); /*0x75573b*/
  Float4::Copy(v52, v38); /*0x75574b*/
  v39 = FromQuaternionAxisAngle(v11); /*0x75575c*/
  Float4::Copy(v52, v39); /*0x75576c*/
  v40 = FromQuaternionAxisAngle(v11); /*0x75577a*/
  Float4::Copy(v52, v40); /*0x75578a*/
  v41 = FromQuaternionAxisAngle(v11); /*0x75579b*/
  Float4::Copy(v52, v41); /*0x7557ab*/
  v42 = FromQuaternionAxisAngle(v11); /*0x7557bc*/
  Float4::Copy(v52, v42); /*0x7557cc*/
  v43 = FromQuaternionAxisAngle(v6); /*0x7557dd*/
  Float4::Copy(v52, v43); /*0x7557ed*/
  v44 = FromQuaternionAxisAngle(v6); /*0x7557fb*/
  Float4::Copy(v52, v44); /*0x75580b*/
  v45 = FromQuaternionAxisAngle(v6); /*0x75581c*/
  Float4::Copy(v52, v45); /*0x75582c*/
  v46 = FromQuaternionAxisAngle(v6); /*0x75583d*/
  Float4::Copy(v52, v46); /*0x75584d*/
  Matrix3x4::Identity(&MEMORY[0xB454B8]); /*0x755857*/
  Matrix3x4::Identity(&MEMORY[0xB454E8]); /*0x755861*/
  Matrix3x4::Identity(&MEMORY[0xB45518]); /*0x75586b*/
  Matrix3x4::Identity(&MEMORY[0xB45548]); /*0x755875*/
  Int4::Set2(0, 0, 0, 1065353216); /*0x75588a*/
  Int4::Set2(0, 0, 0, 1065353216); /*0x75589f*/
  Int4::Set2(0, 0, 0, 1065353216); /*0x7558b4*/
  Int4::Set2(0, 0, 0, 1065353216); /*0x7558c9*/
  Matrix3x4::Identity(&MEMORY[0xB44318]); /*0x7558d3*/
  v50 = -MEMORY[0xB43F00]; /*0x7558e6*/
  Matrix3x3::RotateX(v50); /*0x7558e9*/
  v51 = -MEMORY[0xB44498]; /*0x7558f7*/
  Matrix2D::Rotate(v51); /*0x7558ff*/
  v47 = (int *)&MEMORY[0xB450B8]; /*0x755904*/
  do /*0x755919*/
  {
    result = Matrix3x4::Identity(v47); /*0x75590b*/
    v47 += 12; /*0x755910*/
  }
  while ( (int)v47 < (int)&MEMORY[0xB45178] ); /*0x755919*/
  MEMORY[0xB450CC] = -1082130432; /*0x75591e*/
  MEMORY[0xB450E8] = 0; /*0x755928*/
  MEMORY[0xB450EC] = 1065353216; /*0x755932*/
  MEMORY[0xB450F8] = 1065353216; /*0x75593c*/
  MEMORY[0xB450FC] = 0; /*0x755946*/
  MEMORY[0xB45118] = -1082130432; /*0x755950*/
  MEMORY[0xB45148] = 0; /*0x75595a*/
  MEMORY[0xB4514C] = -1082130432; /*0x755964*/
  MEMORY[0xB45158] = -1082130432; /*0x75596e*/
  MEMORY[0xB4515C] = 0; /*0x755978*/
  return result; /*0x75591d*/

}
}
// 0x755DB0
namespace gamemd {
AbstractClass * * Voxel::SortDepth(ObjectClass * aP1, int a3)
{

  unsigned int v4; // edi
  CCINIClass *v5; // eax
  CCINIClass *v6; // eax
  ObjectClass *v7; // esi
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // ebp
  int v13; // eax
  int v14; // ecx
  int v15; // ebp
  int v16; // edi
  int v17; // eax
  void *uniqueId; // ecx
  CCINIClass *v19; // eax
  void *v20; // eax
  CCINIClass *v21; // eax
  char *v23; // ebp
  int v24; // ebp
  CCINIClass *v25; // eax
  CCINIClass *v26; // eax
  CCINIClass *v27; // eax
  int v28; // eax
  unsigned int v29; // ebp
  double v30; // st7
  double v31; // st6
  double v32; // st5
  CCINIClass *v33; // eax
  char *v34; // ecx
  float v35; // eax
  float v36; // edx
  CCINIClass *v37; // eax
  char *v38; // ecx
  float v39; // eax
  float v40; // edx
  CCINIClass *v41; // eax
  float *v42; // ecx
  float v43; // eax
  float v44; // edx
  CCINIClass *v45; // eax
  int *v46; // ecx
  float v47; // eax
  double v48; // st5
  float v49; // edx
  double v50; // st5
  double v51; // st5
  int v52; // ecx
  float v53; // eax
  float v54; // edx
  double v55; // st5
  CCINIClass *v56; // eax
  float *v57; // ecx
  float v58; // eax
  float v59; // edx
  double v60; // st6
  int v61; // ecx
  float v62; // eax
  float v63; // edx
  double v64; // st7
  double v65; // st7
  int v66; // ecx
  float v67; // edx
  float v68; // eax
  unsigned int v69; // ecx
  void *nextArrayIndex; // eax
  CCINIClass *v71; // eax
  float v72; // [esp+2Ch] [ebp-13Ch] BYREF
  float v73; // [esp+30h] [ebp-138h]
  float v74; // [esp+34h] [ebp-134h]
  float v75; // [esp+38h] [ebp-130h]
  float v76; // [esp+3Ch] [ebp-12Ch]
  float v77; // [esp+40h] [ebp-128h]
  float v78; // [esp+44h] [ebp-124h]
  float v79; // [esp+48h] [ebp-120h]
  float v80; // [esp+4Ch] [ebp-11Ch]
  float v81; // [esp+50h] [ebp-118h]
  float v82; // [esp+54h] [ebp-114h]
  float v83; // [esp+58h] [ebp-110h]
  float v84; // [esp+5Ch] [ebp-10Ch]
  float v85; // [esp+60h] [ebp-108h]
  float v86; // [esp+64h] [ebp-104h]
  float v87; // [esp+68h] [ebp-100h]
  float v88; // [esp+6Ch] [ebp-FCh]
  float v89; // [esp+70h] [ebp-F8h]
  float v90; // [esp+74h] [ebp-F4h]
  float v91; // [esp+78h] [ebp-F0h]
  float v92; // [esp+7Ch] [ebp-ECh]
  float v93; // [esp+80h] [ebp-E8h]
  char v94[4]; // [esp+84h] [ebp-E4h] BYREF
  float v95; // [esp+88h] [ebp-E0h]
  float v96; // [esp+8Ch] [ebp-DCh]
  float v97; // [esp+90h] [ebp-D8h]
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
  int v118[12]; // [esp+11Ch] [ebp-4Ch] BYREF
  char v119[16]; // [esp+14Ch] [ebp-1Ch] BYREF
  int v120; // [esp+15Ch] [ebp-Ch]
  int v121; // [esp+160h] [ebp-8h]
  int v122; // [esp+164h] [ebp-4h]

  v4 = 0; /*0x755dbc*/
  if ( this->uniqueId ) /*0x755dbe*/
    RA2_OPDEL((void *)this->uniqueId); /*0x755dc6*/
  v5 = (CCINIClass *)this->abstractFlags; /*0x755dce*/
  this->uniqueId = 0; /*0x755dd1*/
  if ( v5 ) /*0x755dd6*/
    RA2_OPDEL(v5); /*0x755dd9*/
  v6 = (CCINIClass *)this->nextArrayIndex; /*0x755de1*/
  this->abstractFlags = 0; /*0x755de4*/
  if ( v6 ) /*0x755de9*/
    RA2_OPDEL(v6); /*0x755dec*/
  v7 = aP1; /*0x755df4*/
  this->nextArrayIndex = 0; /*0x755dfb*/
  if ( !(*(int (**)(ObjectClass *, int))(*(unsigned int *)aP1->__pad_0 + 28))(aP1, 1) ) /*0x755e09*/
    return 0; /*0x755e09*/
  (*(void (**)(ObjectClass *, char *, int))(*(unsigned int *)aP1->__pad_0 + 36))(aP1, v113, 32); /*0x755e1d*/
  v8 = v115; /*0x755e20*/
  v9 = v116; /*0x755e27*/
  v10 = v117; /*0x755e2e*/
  *(unsigned int *)&this->__pad_0[4] = v115; /*0x755e35*/
  *(unsigned int *)&this->__pad_0[8] = v9; /*0x755e3b*/
  *(unsigned int *)&this->__pad_0[12] = v10; /*0x755e42*/
  v11 = RA2_OPNEW(12 * v8); /*0x755e45*/
  v12 = *(unsigned int *)&this->__pad_0[8]; /*0x755e4a*/
  this->uniqueId = v11; /*0x755e4d*/
  v13 = RA2_OPNEW(164 * v12); /*0x755e5c*/
  v72 = *(float *)&v13; /*0x755e66*/
  if ( v13 ) /*0x755e6a*/
  {
    v14 = v12 - 1; /*0x755e6c*/
    if ( v12 - 1 >= 0 ) /*0x755e71*/
    {
      v15 = v13 + 64; /*0x755e73*/
      v16 = v14 + 1; /*0x755e76*/
      do /*0x755e8f*/
      {
        Array::ForEach(v15, 12, 8, (int (*)(int))__0Iostream_init_QAE_XZ_8); /*0x755e83*/
        v15 += 164; /*0x755e88*/
        --v16; /*0x755e8e*/
      }
      while ( v16 ); /*0x755e8f*/
      v13 = IDA_LODWORD(v72); /*0x755e91*/
      v4 = 0; /*0x755e95*/
    }
  }
  else
  {
    v13 = 0; /*0x755e99*/
  }
  this->abstractFlags = v13; /*0x755e9b*/
  v17 = RA2_OPNEW(*(unsigned int *)&this->__pad_0[12]); /*0x755ea2*/
  uniqueId = (void *)this->uniqueId; /*0x755ea7*/
  this->nextArrayIndex = v17; /*0x755eaf*/
  if ( !uniqueId ) /*0x755eb2*/
  {
LABEL_67:
    v71 = (CCINIClass *)this->abstractFlags; /*0x756453*/
    this->uniqueId = 0; /*0x756456*/
    if ( v71 ) /*0x75645b*/
      RA2_OPDEL(v71); /*0x75645e*/
    nextArrayIndex = (void *)this->nextArrayIndex; /*0x756466*/
    this->abstractFlags = 0; /*0x756469*/
    if ( !nextArrayIndex ) /*0x75646e*/
      goto LABEL_71; /*0x75646e*/
    goto LABEL_70; /*0x75646e*/
  }
  if ( !this->abstractFlags || !v17 ) /*0x755ec3*/
  {
    RA2_OPDEL(uniqueId); /*0x75644b*/
    goto LABEL_67; /*0x75644b*/
  }
  if ( a3 ) /*0x755ed0*/
  {
    VoxelPalette::Init(v118, (int)&g_abs_B2FB78, (int)g_VoxelColorPalette); /*0x755ee7*/
    if ( (*(int (**)(ObjectClass *, float *, int))(*(unsigned int *)aP1->__pad_0 + 36))(aP1, &v72, 1) != 1 ) /*0x755efd*/
    {
      (*(void (**)(ObjectClass *))(*(unsigned int *)aP1->__pad_0 + 52))(aP1); /*0x755f03*/
      if ( this->uniqueId ) /*0x755f06*/
        RA2_OPDEL((void *)this->uniqueId); /*0x755f0e*/
      v19 = (CCINIClass *)this->abstractFlags; /*0x755f16*/
      this->uniqueId = 0; /*0x755f19*/
      if ( v19 ) /*0x755f1e*/
        RA2_OPDEL(v19); /*0x755f21*/
      v20 = (void *)this->nextArrayIndex; /*0x755f29*/
      this->abstractFlags = 0; /*0x755f2c*/
      if ( !v20 ) /*0x755f31*/
        goto LABEL_32; /*0x755f31*/
      goto LABEL_31; /*0x755f31*/
    }
    if ( (*(int (**)(ObjectClass *, char *, int))(*(unsigned int *)aP1->__pad_0 + 36))(aP1, v94, 1) != 1 ) /*0x755f46*/
    {
      (*(void (**)(ObjectClass *))(*(unsigned int *)aP1->__pad_0 + 52))(aP1); /*0x755f4c*/
      if ( this->uniqueId ) /*0x755f4f*/
        RA2_OPDEL((void *)this->uniqueId); /*0x755f57*/
      v21 = (CCINIClass *)this->abstractFlags; /*0x755f5f*/
      this->uniqueId = 0; /*0x755f62*/
      if ( v21 ) /*0x755f67*/
        RA2_OPDEL(v21); /*0x755f6a*/
      v20 = (void *)this->nextArrayIndex; /*0x755f72*/
      this->abstractFlags = 0; /*0x755f75*/
      if ( !v20 ) /*0x755f7a*/
        goto LABEL_32; /*0x755f7a*/
LABEL_31:
      RA2_OPDEL(v20); /*0x755f7c*/
LABEL_32:
      this->nextArrayIndex = 0; /*0x755f85*/
      VoxelPalette::Reset((int)v118); /*0x755f8f*/
      return 0; /*0x755fa0*/
    }
    v118[0] = IDA_LOBYTE(v72); /*0x755fb6*/
    v118[1] = (uint8_t)v94[0]; /*0x755fbd*/
    v23 = (char *)&g_abs_B2FB79; /*0x755fc4*/
    do /*0x755ff6*/
    {
      (*(void (**)(ObjectClass *, char *, int))(*(unsigned int *)aP1->__pad_0 + 36))(aP1, v23 - 1, 1); /*0x755fd3*/
      (*(void (**)(ObjectClass *, char *, int))(*(unsigned int *)aP1->__pad_0 + 36))(aP1, v23, 1); /*0x755fdd*/
      (*(void (**)(ObjectClass *, char *, int))(*(unsigned int *)aP1->__pad_0 + 36))(aP1, v23 + 1, 1); /*0x755fea*/
      v23 += 3; /*0x755fed*/
    }
    while ( v23 < g_abs_B2FE79 ); /*0x755ff6*/
    if ( v114 > 1 ) /*0x756002*/
      (*(void (**)(ObjectClass *, unsigned int, int))(*(unsigned int *)aP1->__pad_0 + 40))( /*0x756016*/
        aP1,
        768 * v114 - 768,
        1);
    GenerateLightRemapTable(v118, 0, 0); /*0x756022*/
    VoxelPalette::Reset((int)v118); /*0x75602e*/
  }
  else
  {
    (*(void (**)(ObjectClass *, unsigned int, int))(*(unsigned int *)aP1->__pad_0 + 40))(aP1, 770 * v114, 1); /*0x75604d*/
  }
  if ( !*(unsigned int *)&this->__pad_0[4] ) /*0x756055*/
  {
LABEL_43:
    if ( (*(int (**)(ObjectClass *, int, unsigned int))(*(unsigned int *)aP1->__pad_0 + 36))( /*0x7560b5*/
           aP1,
           this->nextArrayIndex,
           *(unsigned int *)&this->__pad_0[12]) == *(unsigned int *)&this->__pad_0[12] )
    {
      v28 = *(unsigned int *)&this->__pad_0[8]; /*0x75612d*/
      v72 = 0.0; /*0x756134*/
      if ( !v28 ) /*0x756138*/
      {
LABEL_59:
        (*(void (**)(ObjectClass *))(*(unsigned int *)v7->__pad_0 + 52))(v7); /*0x7563fe*/
        return 1; /*0x756414*/
      }
      v29 = 0; /*0x75613e*/
      while ( (*(int (**)(ObjectClass *, unsigned int *, int))(*(unsigned int *)v7->__pad_0 + 36))(v7, v101, 92) == 92 ) /*0x756158*/
      {
        *(unsigned char *)(this->abstractFlags + v29 + 160) = v109; /*0x756168*/
        *(unsigned char *)(this->abstractFlags + v29 + 161) = v110; /*0x756179*/
        *(unsigned char *)(this->abstractFlags + v29 + 162) = v111; /*0x75618a*/
        *(unsigned char *)(this->abstractFlags + v29 + 163) = v112; /*0x75619b*/
        *(float *)(this->abstractFlags + v29 + 12) = *(float *)&v101[3]; /*0x7561b3*/
        qmemcpy((void *)(this->abstractFlags + v29 + 16), Matrix::Copy12Float(v118, (int)v102), 0x30u); /*0x7561d2*/
        v30 = v103; /*0x7561d4*/
        v31 = v104; /*0x7561db*/
        v32 = v105; /*0x7561e2*/
        v95 = v106; /*0x7561fe*/
        v73 = v106; /*0x756210*/
        v33 = (CCINIClass *)this->abstractFlags; /*0x756214*/
        v74 = v107; /*0x756217*/
        v96 = v107; /*0x75621b*/
        v97 = v105; /*0x756226*/
        v75 = v108; /*0x75622e*/
        v34 = &v33->ownsFile + v29; /*0x756236*/
        v35 = v107; /*0x75623a*/
        v85 = v106; /*0x75623e*/
        *(float *)v34 = v106; /*0x756242*/
        v36 = v97; /*0x756244*/
        *((float *)v34 + 1) = v35; /*0x75624a*/
        v86 = v31; /*0x75624d*/
        *((float *)v34 + 2) = v36; /*0x756251*/
        v37 = (CCINIClass *)this->abstractFlags; /*0x756254*/
        v87 = v32; /*0x75625d*/
        v38 = &v37->__pad_48[v29 + 4]; /*0x756261*/
        v39 = v86; /*0x756265*/
        *(float *)v38 = v85; /*0x75626b*/
        v40 = v87; /*0x75626d*/
        v98 = v30; /*0x756271*/
        *((float *)v38 + 1) = v39; /*0x756275*/
        *((float *)v38 + 2) = v40; /*0x75627a*/
        v41 = (CCINIClass *)this->abstractFlags; /*0x75627d*/
        v99 = v31; /*0x756284*/
        v42 = (float *)&v41[1].__pad_0[v29]; /*0x756288*/
        v43 = v99; /*0x75628c*/
        v100 = v32; /*0x756292*/
        *v42 = v98; /*0x756299*/
        v44 = v100; /*0x75629d*/
        v42[1] = v43; /*0x7562a4*/
        v91 = v30; /*0x7562a7*/
        v92 = v74; /*0x7562af*/
        v42[2] = v44; /*0x7562b3*/
        v45 = (CCINIClass *)this->abstractFlags; /*0x7562b6*/
        v93 = v32; /*0x7562bd*/
        v46 = &v45[1].headNode[v29 / 4 + 2]; /*0x7562c5*/
        v47 = v92; /*0x7562c9*/
        v76 = v73; /*0x7562cd*/
        v48 = v74; /*0x7562d1*/
        *(float *)v46 = v91; /*0x7562d5*/
        v49 = v93; /*0x7562d7*/
        v77 = v48; /*0x7562db*/
        v50 = v75; /*0x7562df*/
        *((float *)v46 + 1) = v47; /*0x7562e3*/
        v78 = v50; /*0x7562e6*/
        v51 = v73; /*0x7562ea*/
        *((float *)v46 + 2) = v49; /*0x7562ee*/
        v52 = this->abstractFlags + v29 + 112; /*0x7562f8*/
        v53 = v77; /*0x7562fc*/
        v79 = v51; /*0x756300*/
        *(float *)v52 = v76; /*0x756304*/
        v54 = v78; /*0x756306*/
        *(float *)(v52 + 4) = v53; /*0x75630c*/
        v80 = v31; /*0x75630f*/
        v55 = v75; /*0x756313*/
        *(float *)(v52 + 8) = v54; /*0x756317*/
        v56 = (CCINIClass *)this->abstractFlags; /*0x75631a*/
        v81 = v55; /*0x756321*/
        v57 = (float *)&v56[1].__pad_20[v29 + 4]; /*0x756325*/
        v58 = v80; /*0x756329*/
        *v57 = v79; /*0x75632f*/
        v59 = v81; /*0x756331*/
        v82 = v30; /*0x756335*/
        v57[1] = v58; /*0x756339*/
        v83 = v31; /*0x75633c*/
        v60 = v75; /*0x756340*/
        v57[2] = v59; /*0x756344*/
        v61 = this->abstractFlags + v29 + 136; /*0x75634e*/
        v62 = v83; /*0x756355*/
        v84 = v60; /*0x756359*/
        *(float *)v61 = v82; /*0x75635d*/
        v63 = v84; /*0x75635f*/
        v88 = v30; /*0x756363*/
        v64 = v74; /*0x756367*/
        *(float *)(v61 + 4) = v62; /*0x75636b*/
        v89 = v64; /*0x75636e*/
        v65 = v75; /*0x756372*/
        *(float *)(v61 + 8) = v63; /*0x756376*/
        v66 = this->abstractFlags + v29 + 148; /*0x756380*/
        v90 = v65; /*0x756387*/
        *(float *)v66 = v88; /*0x75638b*/
        v67 = v90; /*0x756391*/
        *(float *)(v66 + 4) = v89; /*0x756395*/
        v7 = aP1; /*0x756398*/
        v29 += 164; /*0x75639f*/
        *(float *)(v66 + 8) = v67; /*0x7563a5*/
        *(unsigned int *)(this->abstractFlags + v29 - 164) = this->nextArrayIndex + v101[0]; /*0x7563b7*/
        *(unsigned int *)(this->abstractFlags + v29 - 160) = this->nextArrayIndex + v101[1]; /*0x7563cd*/
        v68 = v72; /*0x7563e1*/
        *(unsigned int *)(this->abstractFlags + v29 - 156) = this->nextArrayIndex + v101[2]; /*0x7563e7*/
        v69 = *(unsigned int *)&this->__pad_0[8]; /*0x7563ee*/
        IDA_LODWORD(v72) = IDA_LODWORD(v68) + 1; /*0x7563f4*/
        if ( IDA_LODWORD(v68) + 1 >= v69 ) /*0x7563f8*/
          goto LABEL_59; /*0x7563f8*/
      }
      if ( this->uniqueId ) /*0x756417*/
        RA2_OPDEL((void *)this->uniqueId); /*0x75641f*/
      v25 = (CCINIClass *)this->abstractFlags; /*0x756427*/
      this->uniqueId = 0; /*0x75642a*/
      if ( v25 ) /*0x75642f*/
        goto LABEL_63; /*0x75642f*/
    }
    else
    {
      if ( this->uniqueId ) /*0x7560b7*/
        RA2_OPDEL((void *)this->uniqueId); /*0x7560c1*/
      v25 = (CCINIClass *)this->abstractFlags; /*0x7560c9*/
      this->uniqueId = 0; /*0x7560cc*/
      if ( v25 ) /*0x7560d1*/
LABEL_63:
        RA2_OPDEL(v25); /*0x756431*/
    }
    nextArrayIndex = (void *)this->nextArrayIndex; /*0x75643a*/
    this->abstractFlags = 0; /*0x75643d*/
    if ( !nextArrayIndex ) /*0x756442*/
    {
LABEL_71:
      this->nextArrayIndex = 0; /*0x756479*/
      (*(void (**)(ObjectClass *))(*(unsigned int *)v7->__pad_0 + 52))(v7); /*0x756480*/
      return 0; /*0x756486*/
    }
LABEL_70:
    RA2_OPDEL(nextArrayIndex); /*0x756470*/
    goto LABEL_71; /*0x756471*/
  }
  v24 = 0; /*0x756057*/
  while ( (*(int (**)(ObjectClass *, char *, int))(*(unsigned int *)aP1->__pad_0 + 36))(aP1, v119, 28) == 28 ) /*0x75606d*/
  {
    ++v4; /*0x756079*/
    *(unsigned int *)(this->uniqueId + v24) = v120; /*0x75607a*/
    *(unsigned int *)(this->uniqueId + v24 + 4) = v121; /*0x756087*/
    *(unsigned char *)(this->uniqueId + v24 + 8) = v122; /*0x756095*/
    v24 += 12; /*0x75609c*/
    if ( v4 >= *(unsigned int *)&this->__pad_0[4] ) /*0x7560a1*/
      goto LABEL_43; /*0x7560a1*/
  }
  if ( this->uniqueId ) /*0x7560dc*/
    RA2_OPDEL((void *)this->uniqueId); /*0x7560e6*/
  v26 = (CCINIClass *)this->abstractFlags; /*0x7560ee*/
  this->uniqueId = 0; /*0x7560f1*/
  if ( v26 ) /*0x7560f6*/
    RA2_OPDEL(v26); /*0x7560f9*/
  v27 = (CCINIClass *)this->nextArrayIndex; /*0x756101*/
  this->abstractFlags = 0; /*0x756104*/
  if ( v27 ) /*0x756109*/
    RA2_OPDEL(v27); /*0x75610c*/
  this->nextArrayIndex = 0; /*0x756114*/
  (*(void (**)(ObjectClass *))(*(unsigned int *)aP1->__pad_0 + 52))(aP1); /*0x75611b*/
  return 0; /*0x755f94*/

}
}
// 0x756590
namespace gamemd {
int Voxel::ProcessColor(unsigned int * a2, float * a3)
{

  int v4; // ebx
  int v5; // esi
  uint8_t v6; // dl
  int v7; // ecx
  float *v8; // edi
  int v9; // edx
  int v10; // ecx
  int v11; // edx
  double v12; // st7
  int v13; // esi
  int v15; // [esp+10h] [ebp-44h]
  uint8_t v16; // [esp+14h] [ebp-40h]
  float v17; // [esp+14h] [ebp-40h]
  uint8_t v18; // [esp+1Ch] [ebp-38h]
  unsigned int v19[6]; // [esp+20h] [ebp-34h] BYREF
  int16_t v20; // [esp+38h] [ebp-1Ch]
  int16_t v21; // [esp+3Ah] [ebp-1Ah]
  int16_t v22; // [esp+3Ch] [ebp-18h]
  int16_t v23; // [esp+3Eh] [ebp-16h]
  int16_t v24; // [esp+40h] [ebp-14h]
  int16_t v25; // [esp+42h] [ebp-12h]
  int16_t v26; // [esp+44h] [ebp-10h]
  int16_t v27; // [esp+46h] [ebp-Eh]
  int16_t v28; // [esp+48h] [ebp-Ch]
  int16_t v29; // [esp+4Ah] [ebp-Ah]
  int16_t v30; // [esp+4Ch] [ebp-8h]
  int16_t v31; // [esp+4Eh] [ebp-6h]
  uint8_t v32; // [esp+50h] [ebp-4h]
  uint8_t v33; // [esp+51h] [ebp-3h]
  uint8_t v34; // [esp+52h] [ebp-2h]
  int v35; // [esp+58h] [ebp+4h]
  float v36; // [esp+5Ch] [ebp+8h]

  v4 = *((unsigned int *)this + 5) + 164 * (a2[2] + *(unsigned int *)(*((unsigned int *)this + 4) + 12 * a2[1])); /*0x7565b8*/
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
  v35 = (int)&a2[3 * dword_8468CC[v5] + 10]; /*0x756630*/
  v9 = (int)&a2[3 * dword_8468D0[v5] + 10]; /*0x756637*/
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
    v28 = Math::RoundToInt((*(float *)(v35 + 8) - v8[2]) / v36 * 256.0); /*0x7567f0*/
    v17 = (float)v18; /*0x756740*/
    v31 = Math::RoundToInt((*(float *)(v15 + 8) - v8[2]) / v17 * 256.0); /*0x75680a*/
  }
  v13 = dword_8468C0[v5]; /*0x756818*/
  if ( dword_B43180 ) /*0x756820*/
    v13 |= 2u; /*0x756822*/
  if ( dword_B43184 ) /*0x75682c*/
    v13 |= 4u; /*0x75682e*/
  if ( !*(unsigned char *)(v4 + 163) ) /*0x756831*/
    v13 |= 8u; /*0x75683b*/
  return funcs_756843[v13]((int)v19); /*0x75684d*/

}
}
// 0x75C240
namespace gamemd {
void* Voxel::DrawHelper(IUnknown * aP1)
{

  IUnknown *v3; // ebx
  BuildingTypeClass *v4; // ecx
  int v6; // ecx
  BuildingTypeClass *v7; // eax
  int v8; // ebx
  int v9; // ebp
  unsigned short *v10; // eax
  int v11; // ecx
  int v12; // ebp
  int v13; // ebx
  unsigned short *v14; // eax
  BuildingTypeClass *v15; // eax
  unsigned int *v16; // ebx
  unsigned int *v17; // eax
  IUnknown *v18; // eax
  unsigned int *v19; // ebp
  unsigned int *v20; // eax
  ObjectClass *v21; // ebx
  IUnknown *v22; // eax
  int *v23; // eax
  int v24; // edi
  unsigned int *eax39; // eax
  int *v26; // eax
  unsigned int *eax39b; // eax
  BuildingTypeClass *v25; // eax
  BuildingTypeClass *v27; // ecx
  AbstractClass *v31; // [esp-4h] [ebp-2Ch]
  char v32[4]; // [esp+Ch] [ebp-1Ch]
  char v33; // [esp+Ch] [ebp-1Ch]
  int16_t var1C_2; // [esp+Eh] [ebp-1Ah]
  int a1; // [esp+10h] [ebp-18h] BYREF
  int Strength; // [esp+14h] [ebp-14h]
  IUnknown *v34; // [esp+18h] [ebp-10h]
  unsigned int v38[3]; // [esp+1Ch] [ebp-Ch] BYREF
  char aP1a; // [esp+2Ch] [ebp+4h]

  v3 = (IUnknown *)CONTAINING_RECORD(this, IUnknown, field_0)->__pad_28; /*0x75c251*/
  if ( *((unsigned int *)this + 10) == g_AsyncMovieState.field_0 /*0x75c26e*/
    && *((unsigned int *)this + 11) == g_AsyncMovieState.field_4
    && *((unsigned int *)this + 12) == g_AsyncMovieState.field_8 )
  {
    v4 = (BuildingTypeClass *)*((unsigned int *)this + 3); /*0x75c278*/
    a1 = v4->Armor[0]; /*0x75c287*/
    Strength = v4->Strength; /*0x75c28e*/
    v34 = (IUnknown *)v4->Image; /*0x75c295*/
    (*(void (**)(int *))(*(unsigned int *)v4->vtable0 + 244))(&a1); /*0x75c2a0*/
  }
  else
  {
    (*(void (**)(unsigned int *))(*(unsigned int *)*((unsigned int *)this + 3) + 244))((unsigned int *)this + 10); /*0x75c276*/
  }
  aP1a = 0; /*0x75c2aa*/
  v38[0] = aP1->field_0; /*0x75c2b3*/
  v6 = aP1->field_0; /*0x75c2b7*/
  v38[1] = aP1->field_4; /*0x75c2bc*/
  v38[2] = aP1->field_8; /*0x75c2c3*/
  if ( v6 == g_AsyncMovieState.field_0
    && aP1->field_4 == g_AsyncMovieState.field_4
    && aP1->field_8 == g_AsyncMovieState.field_8 )
  {
    v3->field_0 = aP1->field_0; /*0x75c5b7*/
    *((unsigned int *)this + 11) = aP1->field_4; /*0x75c5bc*/
    *((unsigned int *)this + 12) = aP1->field_8; /*0x75c5c2*/
  }
  else
  {
    if ( (*(int (**)(unsigned int))(*(unsigned int *)*((unsigned int *)this + 3) + 388))(*((unsigned int *)this + 3)) == 8 /*0x75c33c*/
      || (*(int (**)(unsigned int))(*(unsigned int *)*((unsigned int *)this + 3) + 388))(*((unsigned int *)this + 3)) == 9
      || (*(int (**)(unsigned int))(*(unsigned int *)*((unsigned int *)this + 3) + 388))(*((unsigned int *)this + 3)) == 7
      || (*(int (**)(unsigned int))(*(unsigned int *)*((unsigned int *)this + 3) + 388))(*((unsigned int *)this + 3)) == 11
      || (*(int (**)(unsigned int))(*(unsigned int *)*((unsigned int *)this + 3) + 388))(*((unsigned int *)this + 3)) == 25 )
    {
      v7 = (BuildingTypeClass *)*((unsigned int *)this + 3); /*0x75c342*/
      v8 = *(unsigned int *)&v7->DebrisTypes[656]; /*0x75c345*/
      if ( v8 ) /*0x75c34d*/
      {
        if ( (*(int (**)(unsigned int))(*(unsigned int *)v8 + 44))(*(unsigned int *)&v7->DebrisTypes[656]) == 1 ) /*0x75c359*/
        {
          var1C_2 = aP1->field_4 / 256; /*0x75c37e*/
          v9 = aP1->field_0 / 256; /*0x75c385*/
          v10 = (unsigned short *)(*(int (**)(int, int *))(*(unsigned int *)v8 + 440))(v8, &a1); /*0x75c388*/
          if ( *v10 == (unsigned short)v9 && v10[1] == var1C_2 ) /*0x75c39c*/
            aP1a = 1; /*0x75c39e*/
        }
      }
      v11 = *(unsigned int *)(*((unsigned int *)this + 3) + 1444); /*0x75c3a6*/
      *(unsigned int *)v32 = v11; /*0x75c3ae*/
      if ( v11 ) /*0x75c3b2*/
      {
        if ( (*(int (**)(int))(*(unsigned int *)v11 + 44))(v11) == 2 ) /*0x75c3bc*/
        {
          v12 = aP1->field_0 / 256; /*0x75c3e4*/
          v13 = aP1->field_4 / 256; /*0x75c3e7*/
          v14 = (unsigned short *)(*(int (**)(char *, int *))(**(unsigned int **)v32 + 440))(*(char **)v32, &a1); /*0x75c3ea*/
          if ( *v14 == (unsigned short)v12 && v14[1] == (unsigned short)v13 ) /*0x75c3f9*/
            aP1a = 1; /*0x75c3fb*/
        }
      }
      v15 = (BuildingTypeClass *)*((unsigned int *)this + 3); /*0x75c400*/
      v16 = *(unsigned int **)&v15->DebrisTypes[656]; /*0x75c403*/
      if ( v16 ) /*0x75c40b*/
      {
        if ( (*(int (**)(unsigned int))(*v16 + 44))(*(unsigned int *)&v15->DebrisTypes[656]) == 6 ) /*0x75c417*/
        {
          v17 = Coord::To_Cell(&g_abs_87F7E8, aP1); /*0x75c41f*/
          if ( Cell::IsBridge(v17) == v16 ) /*0x75c42d*/
            aP1a = 1; /*0x75c42f*/
        }
      }
    }
    v18 = *(IUnknown **)(*((unsigned int *)this + 3) + 732); /*0x75c439*/
    if ( v18 )
    {
      if ( *(unsigned int *)&v18->__pad_2B8[32] )
      {
        v19 = (unsigned int *)*((unsigned int *)this + 3); /*0x75c44b*/
        a1 = 0; /*0x75c44f*/
        Strength = 0; /*0x75c453*/
        v20 = Coord::To_Cell(&g_abs_87F7E8, aP1); /*0x75c463*/
        if ( Object::FindClosestObjectCell(v20, (IUnknown *)&a1, 0, 0) == v19[183] )
        {
          v21 = v19 ? ((*(int (**)(unsigned int *))(*v19 + 44))(v19) == 15 ? (ObjectClass *)v19 : 0) : 0;
          v22 = (IUnknown *)Coord::To_Cell(&g_abs_87F7E8, aP1); /*0x75c49a*/
          if ( BuildingClass::CheckBridge(*(unsigned int **)(*(unsigned int *)(*((unsigned int *)this + 3) + 732) + 728), v21, v22) ) /*0x75c4b0*/
            aP1a = 1; /*0x75c4b9*/
        }
      }
    }
    if ( (*((unsigned int *)Coord::To_Cell(&g_abs_87F7E8, (IUnknown *)v38) + 80) & 0x100) == 0 /*0x75c513*/
      || (v23 = (int *)(*((unsigned int *)this + 3) + 156),
          a1 = *v23,
          Strength = v23[1],
          v24 = v23[2],
          v33 = 1,
          v24 <= 3 * g_AsyncMovieState.field_40 + Cell::GetGroundHeight(v38)) )
    {
      v33 = 0; /*0x75c515*/
    }
    eax39 = Coord::To_Cell(&g_abs_87F7E8, (IUnknown *)v38); /*0x75c53a*/
    v26 = ObjectPlacement::CalcPosition(eax39, &a1, (IUnknown *)v38, aP1a, v33, 0); /*0x75c541*/
    v3 = (IUnknown *)((unsigned int *)this + 10); /*0x75c548*/
    *((unsigned int *)this + 10) = *v26; /*0x75c54d*/
    *((unsigned int *)this + 11) = v26[1]; /*0x75c552*/
    v31 = (AbstractClass *)*((unsigned int *)this + 3); /*0x75c55b*/
    *((unsigned int *)this + 12) = v26[2]; /*0x75c562*/
    eax39b = Coord::To_Cell(&g_abs_87F7E8, (IUnknown *)((unsigned int *)this + 10)); /*0x75c565*/
    if ( !CrateClass::ProcessPickup(eax39b, v31) ) /*0x75c56c*/
    {
      v25 = (BuildingTypeClass *)*((unsigned int *)this + 3); /*0x75c575*/
      if ( !v25->Name[29] ) /*0x75c578*/
      {
        v3->field_0 = g_AsyncMovieState.field_0; /*0x75c58a*/
        *((unsigned int *)this + 11) = g_AsyncMovieState.field_4; /*0x75c592*/
        *((unsigned int *)this + 12) = g_AsyncMovieState.field_8; /*0x75c59b*/
        if ( !v25->Name[44] ) /*0x75c59e*/
          return 0; /*0x75c5b0*/
      }
    }
  }
  if ( v3->field_0 == g_AsyncMovieState.field_0 /*0x75c5e7*/
    && v3->field_4 == g_AsyncMovieState.field_4
    && v3->field_8 == g_AsyncMovieState.field_8 )
  {
    v27 = (BuildingTypeClass *)*((unsigned int *)this + 3); /*0x75c602*/
    a1 = v27->Armor[0]; /*0x75c611*/
    Strength = v27->Strength; /*0x75c618*/
    v34 = (IUnknown *)v27->Image; /*0x75c61f*/
    (*(void (**)(BuildingTypeClass *, int *))(*(unsigned int *)v27->vtable0 + 240))(v27, &a1); /*0x75c62a*/
    return 0; /*0x75c632*/
  }
  else
  {
    (*(void (**)(unsigned int, IUnknown *))(*(unsigned int *)*((unsigned int *)this + 3) + 240))(*((unsigned int *)this + 3), v3); /*0x75c5f1*/
    return 1; /*0x75c5f9*/
  }

}
}
// 0x75EDF0
namespace gamemd {
int Voxel::BlendShadowColor(int a2, WaveClass * aP2, int arg8, unsigned short * a4)
{

  int64_t v5; // rax
  int v6; // esi
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // esi
  int result; // eax

  v5 = *(int16_t *)&g_AsyncMovieState.__pad_524[2 * *((unsigned int *)this + 76) /*0x75ee44*/
                                              + 328
                                              + 2
                                              * *(uint16_t *)&g_AsyncMovieState.__pad_71C[600 * arg8
                                                                                                + 920
                                                                                                + 2
                                                                                                * abs32(a2 - *((unsigned int *)this + 51) - (unsigned int)aP2)]];
  IDA_LODWORD(v5) = (IDA_HIDWORD(v5) ^ v5) - IDA_HIDWORD(v5); /*0x75ee47*/
  v6 = *(unsigned int *)&g_AsyncMovieState.__pad_71C[4 * v5 + 836]; /*0x75ee50*/
  IDA_WORD2(v5) = a4[*(this + (unsigned int)v5 + 130)]; /*0x75ee57*/
  v7 = ((v6 /*0x75eeb8*/
       * (uint8_t)((uint8_t)(IDA_WORD2(v5) >> g_abs_89F690) << g_abs_89F690)) >> 8)
     + (uint8_t)((uint8_t)(IDA_WORD2(v5) >> g_abs_89F690) << g_abs_89F690);
  v8 = ((v6 /*0x75eec6*/
       * (uint8_t)((uint8_t)(IDA_WORD2(v5) >> g_abs_89F690) << g_abs_89F690)) >> 8)
     + (uint8_t)((uint8_t)(IDA_WORD2(v5) >> g_abs_89F690) << g_abs_89F690);
  v9 = (uint8_t)((uint8_t)(IDA_WORD2(v5) >> g_abs_89F690) << g_abs_89F690); /*0x75eec8*/
  if ( v8 > 255 ) /*0x75eed3*/
    v8 = 255; /*0x75eed5*/
  v10 = 255; /*0x75eee0*/
  if ( v7 <= 255 ) /*0x75eee5*/
    v10 = v7; /*0x75eee7*/
  result = v8 >> g_abs_89F690 << g_abs_89F690; /*0x75ef07*/
  *a4 = (v9 >> g_abs_89F690 << g_abs_89F690) /*0x75ef19*/
      | result
      | (v10 >> g_abs_89F690 << g_abs_89F690);
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
  unsigned int *v5; // eax
  int result; // eax

  v2 = (*(int (**)(int))(*(unsigned int *)g_abs_887314 + 116))(g_abs_887314) >> 1; /*0x75f14e*/
  *((unsigned int *)this + 107) = -v2; /*0x75f159*/
  *((unsigned int *)this + 108) = 1 - v2; /*0x75f164*/
  *((unsigned int *)this + 110) = v2 + 1; /*0x75f16a*/
  *((unsigned int *)this + 111) = v2; /*0x75f176*/
  *((unsigned int *)this + 112) = v2 - 1; /*0x75f17c*/
  v3 = *((unsigned int *)this + 115); /*0x75f182*/
  v4 = -1 - v2; /*0x75f188*/
  *((unsigned int *)this + 130) = 0; /*0x75f18c*/
  *((unsigned int *)this + 131) = 0; /*0x75f192*/
  v5 = this + v3 + 107; /*0x75f198*/
  *((unsigned int *)this + 109) = 1; /*0x75f19f*/
  *((unsigned int *)this + 113) = -1; /*0x75f1a9*/
  *((unsigned int *)this + 114) = v4; /*0x75f1b3*/
  *((unsigned int *)this + 132) = *v5; /*0x75f1bb*/
  *((unsigned int *)this + 133) = *v5; /*0x75f1c3*/
  *((unsigned int *)this + 134) = *v5; /*0x75f1cb*/
  *((unsigned int *)this + 135) = *v5; /*0x75f1d3*/
  *((unsigned int *)this + 136) = *v5; /*0x75f1db*/
  *((unsigned int *)this + 137) = 2 * *v5; /*0x75f1e5*/
  *((unsigned int *)this + 138) = 2 * *v5; /*0x75f1ef*/
  *((unsigned int *)this + 139) = 2 * *v5; /*0x75f1f9*/
  *((unsigned int *)this + 140) = 3 * *v5; /*0x75f204*/
  *((unsigned int *)this + 141) = 3 * *v5; /*0x75f20f*/
  result = 3 * *v5; /*0x75f217*/
  *((unsigned int *)this + 142) = result; /*0x75f21a*/
  return result; /*0x75f220*/

}
}
// 0x75F4C0
namespace gamemd {
CellStruct * * Voxel::renderSection(ObjectClass * aP1)
{

  ObjectClass *aP1; // eax
  int v4; // edx
  unsigned int *v5; // esi
  int v6; // eax
  int v7; // ecx
  ObjectClass *v8; // edx

  aP1 = (ObjectClass *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)aP1->__pad_0); /*0x75f4cd*/
  v4 = *((unsigned int *)this + 124); /*0x75f4d2*/
  v5 = (unsigned int *)this + 124; /*0x75f4d8*/
  aP1 = aP1; /*0x75f4de*/
  v6 = (*(int (**)(unsigned int *, ObjectClass **))(v4 + 16))(v5, &aP1); /*0x75f4e9*/
  if ( v6 == -1 ) /*0x75f4ef*/
  {
    v7 = v5[2]; /*0x75f4f1*/
    if ( v5[4] < v7 /*0x75f51b*/
      || ((IDA_LOBYTE(v6) = *((unsigned char *)v5 + 13), (unsigned char)v6) || !v7)
      && (v6 = v5[5], v6 > 0)
      && (IDA_LOBYTE(v6) = (*(int (**)(unsigned int *, int, unsigned int))(*v5 + 8))(v5, v7 + v6, 0), (unsigned char)v6) )
    {
      v6 = v5[4]; /*0x75f51d*/
      v8 = (ObjectClass *)v5[1]; /*0x75f520*/
      v5[4] = v6 + 1; /*0x75f526*/
      *(unsigned int *)&v8->__pad_0[4 * v6] = aP1; /*0x75f52d*/
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
  int v8; // ebx
  int v9; // ebp
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // eax
  unsigned short *v14; // edi
  int v15; // edx
  CCINIClass *v16; // ecx
  char *v17; // eax
  char *v18; // eax
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
  char *v31; // eax
  int v32; // edi
  MouseClass *v33; // ecx
  int v34; // ebx
  int v35; // eax
  TacticalMap *v36; // ecx
  unsigned short *v37; // edi
  unsigned int SamplePosition; // ecx
  int v39; // eax
  int v40; // ebp
  unsigned short *v41; // edi
  uint16_t *v42; // ecx
  int64_t v43; // rax
  int j; // ebx
  int v45; // ebp
  int v46; // eax
  WaveClass *v47; // ecx
  int v48; // edx
  unsigned int *v49; // eax
  int v50; // ebx
  MouseClass *v51; // ebp
  int i; // edi
  int k; // [esp+8h] [ebp-3Ch]
  int v54; // [esp+8h] [ebp-3Ch]
  int v55; // [esp+8h] [ebp-3Ch]
  int v56; // [esp+8h] [ebp-3Ch]
  WaveClass *aP2; // [esp+Ch] [ebp-38h]
  int v58; // [esp+10h] [ebp-34h]
  char *v59; // [esp+10h] [ebp-34h]
  int v60; // [esp+10h] [ebp-34h]
  int v61; // [esp+14h] [ebp-30h]
  int v62; // [esp+14h] [ebp-30h]
  int v63; // [esp+14h] [ebp-30h]
  unsigned short *a4; // [esp+18h] [ebp-2Ch]
  unsigned short *a4a; // [esp+18h] [ebp-2Ch]
  unsigned short *a4d; // [esp+18h] [ebp-2Ch]
  uint16_t *a4b; // [esp+18h] [ebp-2Ch]
  unsigned short *a4c; // [esp+18h] [ebp-2Ch]
  int v69; // [esp+1Ch] [ebp-28h]
  int v70; // [esp+20h] [ebp-24h]
  int v71; // [esp+20h] [ebp-24h]
  int v72; // [esp+20h] [ebp-24h]
  int v73; // [esp+20h] [ebp-24h]
  int v74; // [esp+24h] [ebp-20h]
  int v75; // [esp+24h] [ebp-20h]
  int v76; // [esp+28h] [ebp-1Ch]
  int v77; // [esp+2Ch] [ebp-18h]
  int v78; // [esp+30h] [ebp-14h]
  int v79; // [esp+34h] [ebp-10h]
  int v80; // [esp+38h] [ebp-Ch]
  int v81; // [esp+38h] [ebp-Ch]
  MouseClass *v82; // [esp+3Ch] [ebp-8h]
  int v83; // [esp+3Ch] [ebp-8h]
  MouseClass *v84; // [esp+3Ch] [ebp-8h]
  MouseClass *v85; // [esp+40h] [ebp-4h]
  uint16_t aP1a; // [esp+48h] [ebp+4h]
  uint16_t aP1b; // [esp+48h] [ebp+4h]
  WaveClass *aP1c; // [esp+48h] [ebp+4h]
  int *a2a; // [esp+4Ch] [ebp+8h]
  int *a2b; // [esp+4Ch] [ebp+8h]

  v58 = ZCoordToScreenY(*((unsigned int *)this + 47)); /*0x75faa8*/
  v74 = (*(int (**)(unsigned int, unsigned int, unsigned int))(**(unsigned int **)&g_abs_87F8E4 + 92))( /*0x75fab9*/
          *(unsigned int *)&g_abs_87F8E4,
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
    v6 = *(unsigned int *)&aP1->__pad_0[4] - *((unsigned int *)this + 52); /*0x75fb09*/
    aP2 = (WaveClass *)(*(unsigned int *)aP1->__pad_0 - *((unsigned int *)this + 51)); /*0x75fb17*/
    v76 = v6; /*0x75fb1b*/
    ProcessVoxelVertexData((unsigned int *)((char *)this + 328), (int *)((char *)this + 416)); /*0x75fb1f*/
    if ( *((unsigned int *)this + 106) ) /*0x75fb24*/
    {
      v7 = *((unsigned int *)this + 104); /*0x75fb48*/
      v8 = v6 + *(unsigned int *)&g_abs_87F8E4 + *((unsigned int *)this + 105); /*0x75fb4e*/
      v61 = v8; /*0x75fb50*/
      v9 = v7 + v8 - 1; /*0x75fb54*/
      if ( v9 >= a2[3] + a2[1] ) /*0x75fb5a*/
      {
        a4 = (unsigned short *)(a2[3] + a2[1]); /*0x75fb62*/
        v9 = (int)a4; /*0x75fb66*/
      }
      else
      {
        a4 = (unsigned short *)(v7 + v8 - 1); /*0x75fb5c*/
      }
      Voxel::loadSectionData((unsigned int *)this); /*0x75fb6a*/
      v10 = *((unsigned int *)this + 115); /*0x75fb6f*/
      if ( v10 <= 1 || v10 >= 6 ) /*0x75fb81*/
      {
        a4d = (unsigned short *)Audio::GetSamplePosition( /*0x75fe6e*/
                         *(int *)&g_abs_87F8E4,
                         0,
                         (MouseClass *)(v8 - *(unsigned int *)&g_abs_87F8E4));
        v35 = (*(int (**)(unsigned int))(**(unsigned int **)&g_abs_87F8E4 + 124))(*(unsigned int *)&g_abs_87F8E4); /*0x75fe74*/
        IDA_HIWORD(v36) = *(unsigned short *)&g_abs_87F8E4; /*0x75fe77*/
        v81 = v9 - v8; /*0x75fe88*/
        v72 = *(unsigned int *)(*(unsigned int *)&g_abs_87F8E4 + 40); /*0x75fe90*/
        if ( (unsigned int)&a4d[v35 + v72 * (v9 - v8 + 1)] >= *(unsigned int *)(*(unsigned int *)&g_abs_87F8E4 /*0x75fea6*/
                                                                        + 28) )
        {
          IDA_LOWORD(v36) = *(unsigned short *)(*(unsigned int *)&g_abs_87F8E4 + 36) - v9; /*0x76000b*/
          v46 = v9; /*0x76000e*/
          v56 = v9; /*0x760012*/
          v47 = (WaveClass *)((char *)v36 - v58 - 2); /*0x760016*/
          aP1c = v47; /*0x76001b*/
          if ( v9 >= v8 ) /*0x76001f*/
          {
            v73 = 8 * v81; /*0x76002c*/
            do /*0x760149*/
            {
              v48 = v4[1]; /*0x760030*/
              if ( v46 >= v48 + 2 && v46 <= v48 + v4[3] - 2 ) /*0x760047*/
              {
                v49 = (unsigned int *)(*((unsigned int *)this + 106) + v73); /*0x760060*/
                v50 = (int)&aP2->__pad_0[v49[1]]; /*0x76006a*/
                if ( v50 >= *v4 + v4[2] - 2 ) /*0x76006e*/
                  v50 = *v4 + v4[2] - 2; /*0x760070*/
                v60 = (int)&aP2->__pad_0[*v49]; /*0x76007f*/
                if ( v60 <= *v4 + 2 ) /*0x760083*/
                  v60 = *v4 + 2; /*0x760085*/
                a4c = (unsigned short *)(v74 /*0x7600b4*/
                              + 2
                              * (v50
                               + v56
                               * ((*(int (**)(unsigned int))(**(unsigned int **)&g_abs_87F8E4 + 116))(*(unsigned int *)&g_abs_87F8E4) >> 1)));
                v51 = (MouseClass *)(v56 - *(unsigned int *)&g_abs_87F8E4); /*0x7600c0*/
                v84 = (MouseClass *)v50; /*0x7600c4*/
                for ( i = abs32(v56 - v76 - *((unsigned int *)this + 52)); v50 >= v60; --a4c ) /*0x7600d5*/
                {
                  if ( *(unsigned short *)Audio::GetSamplePosition(*(int *)&g_abs_87F8E4, v84, v51) > (uint16_t)aP1c ) /*0x7600f0*/
                    Voxel::BlendShadowColor((unsigned int *)this, v50, aP2, i, a4c); /*0x760100*/
                  --v50; /*0x76010e*/
                  v84 = (MouseClass *)((char *)v84 - 1); /*0x76010f*/
                }
                v47 = aP1c; /*0x760122*/
                v8 = v61; /*0x760126*/
                v4 = a2; /*0x76012a*/
                v46 = v56; /*0x76012e*/
              }
              v47 = (WaveClass *)((char *)v47 + 1); /*0x760136*/
              --v46; /*0x760137*/
              aP1c = v47; /*0x76013d*/
              v56 = v46; /*0x760141*/
              v73 -= 8; /*0x760145*/
            }
            while ( v46 >= v8 ); /*0x760149*/
          }
        }
        else
        {
          v83 = (*(int (**)(unsigned int))(**(unsigned int **)&g_abs_87F8E4 + 116))(*(unsigned int *)&g_abs_87F8E4) >> 1; /*0x75feb9*/
          v37 = (unsigned short *)(v74 + 2 * v9 * v83); /*0x75feca*/
          a2b = (int *)(*((unsigned int *)this + 106) + 8 * v81); /*0x75fed8*/
          aP1b = *(unsigned short *)(*(unsigned int *)&g_abs_87F8E4 + 36) - v9 - v58 - 2; /*0x75fef0*/
          SamplePosition = Audio::GetSamplePosition( /*0x75ff03*/
                             *(int *)&g_abs_87F8E4,
                             0,
                             (MouseClass *)(v9 - *(unsigned int *)&g_abs_87F8E4));
          v39 = v9; /*0x75ff05*/
          v55 = v9; /*0x75ff09*/
          if ( v9 >= v8 ) /*0x75ff0d*/
          {
            while ( 1 ) /*0x75ff19*/
            {
              if ( v39 >= v77 && v39 <= v78 ) /*0x75ff27*/
              {
                v40 = (int)&aP2->__pad_0[a2b[1]]; /*0x75ff40*/
                if ( v40 >= v69 ) /*0x75ff42*/
                  v40 = v69; /*0x75ff44*/
                v59 = &aP2->__pad_0[*a2b]; /*0x75ff56*/
                if ( (int)v59 <= v79 ) /*0x75ff5a*/
                  v59 = (char *)v79; /*0x75ff5c*/
                v41 = &v37[v40]; /*0x75ff68*/
                v42 = (uint16_t *)(2 * v40 + SamplePosition); /*0x75ff6a*/
                a4b = v42; /*0x75ff76*/
                v43 = v39 - v76 - *((unsigned int *)this + 52); /*0x75ff7a*/
                for ( j = (IDA_HIDWORD(v43) ^ v43) - IDA_HIDWORD(v43); v40 >= (int)v59; a4b = v42 ) /*0x75ff87*/
                {
                  if ( *v42 > aP1b ) /*0x75ff91*/
                  {
                    Voxel::BlendShadowColor((unsigned int *)this, v40, aP2, j, v41); /*0x75ff9d*/
                    v42 = a4b; /*0x75ffa2*/
                  }
                  --v42; /*0x75ffaa*/
                  --v41; /*0x75ffad*/
                  --v40; /*0x75ffb0*/
                }
                v8 = v61; /*0x75ffb9*/
                v39 = v55; /*0x75ffbd*/
                v45 = 2 * v40; /*0x75ffc1*/
                SamplePosition = (unsigned int)&v42[v45 / 0xFFFFFFFE]; /*0x75ffc3*/
                v37 = &v41[v45 / 0xFFFFFFFE]; /*0x75ffc5*/
              }
              --v39; /*0x75ffe6*/
              v37 -= v83; /*0x75ffe9*/
              ++aP1b; /*0x75ffec*/
              a2b -= 2; /*0x75fff0*/
              v55 = v39; /*0x75fff4*/
              if ( v39 < v8 ) /*0x75fff8*/
                break; /*0x75fff8*/
              SamplePosition -= 2 * v72; /*0x75ff15*/
            }
          }
        }
      }
      else
      {
        aP1a = *(unsigned short *)(*(unsigned int *)&g_abs_87F8E4 + 36) - v58 - v8 - 2; /*0x75fba4*/
        v11 = Audio::GetSamplePosition( /*0x75fbb6*/
                *(int *)&g_abs_87F8E4,
                0,
                (MouseClass *)(v8 - *(unsigned int *)&g_abs_87F8E4));
        v12 = (*(int (**)(unsigned int))(**(unsigned int **)&g_abs_87F8E4 + 124))(*(unsigned int *)&g_abs_87F8E4); /*0x75fbba*/
        v70 = *(unsigned int *)(*(unsigned int *)&g_abs_87F8E4 + 40); /*0x75fbc8*/
        if ( v11 + 2 * (v12 + v70 * (v9 - v61 + 1)) >= *(unsigned int *)(*(unsigned int *)&g_abs_87F8E4 + 28) ) /*0x75fbe7*/
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
                v29 = (unsigned int *)(*((unsigned int *)this + 106) + v71); /*0x75fd49*/
                v30 = *v4; /*0x75fd4b*/
                v63 = (int)&aP2->__pad_0[v29[1]]; /*0x75fd64*/
                if ( v63 >= *v4 + v4[2] - 2 ) /*0x75fd68*/
                  v63 = *v4 + v4[2] - 2; /*0x75fd6a*/
                v31 = &aP2->__pad_0[*v29]; /*0x75fd74*/
                v32 = v30 + 2; /*0x75fd76*/
                if ( (int)v31 > v30 + 2 ) /*0x75fd7b*/
                  v32 = (int)v31; /*0x75fd7d*/
                v82 = (MouseClass *)v32; /*0x75fd95*/
                a4a = (unsigned short *)(v74 /*0x75fda3*/
                              + 2
                              * (v32
                               + v27
                               * ((*(int (**)(unsigned int))(**(unsigned int **)&g_abs_87F8E4 + 116))(*(unsigned int *)&g_abs_87F8E4) >> 1)));
                v33 = (MouseClass *)(v27 - *(unsigned int *)&g_abs_87F8E4); /*0x75fdad*/
                v85 = (MouseClass *)(v27 - *(unsigned int *)&g_abs_87F8E4); /*0x75fdb7*/
                v34 = abs32(v27 - v76 - *((unsigned int *)this + 52)); /*0x75fdc6*/
                if ( v32 <= v63 ) /*0x75fdca*/
                {
                  while ( 1 ) /*0x75fdd2*/
                  {
                    if ( *(unsigned short *)Audio::GetSamplePosition(*(int *)&g_abs_87F8E4, v82, v33) > aP1a ) /*0x75fdeb*/
                      Voxel::BlendShadowColor((unsigned int *)this, v32, aP2, v34, a4a); /*0x75fdfb*/
                    ++v32; /*0x75fe09*/
                    v82 = (MouseClass *)((char *)v82 + 1); /*0x75fe0a*/
                    ++a4a; /*0x75fe17*/
                    if ( v32 > v63 ) /*0x75fe1b*/
                      break; /*0x75fe1b*/
                    v33 = v85; /*0x75fdce*/
                  }
                }
                v27 = v54; /*0x75fe1d*/
                v4 = a2; /*0x75fe21*/
              }
              ++v27; /*0x75fe32*/
              --aP1a; /*0x75fe38*/
              v54 = v27; /*0x75fe3c*/
              v71 += 8; /*0x75fe40*/
            }
            while ( v27 <= v9 ); /*0x75fe44*/
          }
        }
        else
        {
          v13 = (*(int (**)(unsigned int))(**(unsigned int **)&g_abs_87F8E4 + 116))(*(unsigned int *)&g_abs_87F8E4) >> 1; /*0x75fbf8*/
          v80 = v13; /*0x75fc05*/
          v14 = (unsigned short *)(v74 + 2 * v61 * v13); /*0x75fc09*/
          v15 = v61; /*0x75fc0c*/
          v16 = *(CCINIClass **)((char *)this + 424); /*0x75fc10*/
          a2a = (int *)v16; /*0x75fc18*/
          for ( k = v61; v15 <= v9; k = v15 ) /*0x75fc20*/
          {
            if ( v15 >= v77 && v15 <= v78 ) /*0x75fc34*/
            {
              v17 = &aP2->__pad_0[v16->headNode[0]]; /*0x75fc41*/
              if ( (int)v17 >= v69 ) /*0x75fc47*/
                v17 = (char *)v69; /*0x75fc49*/
              v62 = (int)v17; /*0x75fc4f*/
              v18 = &aP2->__pad_0[*(unsigned int *)v16->__pad_0]; /*0x75fc53*/
              v19 = v79; /*0x75fc56*/
              if ( (int)v18 > v79 ) /*0x75fc5c*/
                v19 = (int)v18; /*0x75fc5e*/
              v20 = (uint16_t *)(2 * v19 + v11); /*0x75fc67*/
              v21 = &v14[v19]; /*0x75fc69*/
              v22 = v15 - v76 - *((unsigned int *)this + 52); /*0x75fc7b*/
              v23 = v22; /*0x75fc7c*/
              v24 = v19; /*0x75fc7e*/
              v75 = v19; /*0x75fc82*/
              for ( m = (IDA_HIDWORD(v22) ^ v23) - IDA_HIDWORD(v22); v24 <= v62; v75 = v24 ) /*0x75fc8e*/
              {
                if ( *v20 > aP1a ) /*0x75fc98*/
                {
                  Voxel::BlendShadowColor((unsigned int *)this, v24, aP2, m, v21); /*0x75fca4*/
                  v24 = v75; /*0x75fca9*/
                }
                ++v20; /*0x75fcb1*/
                ++v21; /*0x75fcb4*/
                ++v24; /*0x75fcb7*/
              }
              v9 = (int)a4; /*0x75fcc0*/
              v15 = k; /*0x75fcc4*/
              v26 = 2 * v24; /*0x75fcc8*/
              v11 = (unsigned int)&v20[v26 / 0xFFFFFFFE]; /*0x75fcca*/
              v14 = &v21[v26 / 0xFFFFFFFE]; /*0x75fccc*/
              v13 = v80; /*0x75fcce*/
            }
            v14 += v13; /*0x75fcd6*/
            v11 += 2 * v70; /*0x75fcd9*/
            --aP1a; /*0x75fce6*/
            v16 = (CCINIClass *)(a2a + 2); /*0x75fcee*/
            ++v15; /*0x75fcf1*/
            a2a += 2; /*0x75fcf4*/
          }
        }
      }
    }
    (*(void (**)(unsigned int))(**(unsigned int **)&g_abs_87F8E4 + 96))(*(unsigned int *)&g_abs_87F8E4); /*0x760157*/
    if ( *((unsigned int *)this + 106) ) /*0x76015a*/
    {
      RA2_OPDEL(*(void **)((char *)this + 424)); /*0x760167*/
      *((unsigned int *)this + 106) = 0; /*0x76016f*/
    }
  }

}
}
// 0x760190
namespace gamemd {
int Voxel::BlendColor(int a2, WaveClass * aP2, int arg8, unsigned short * a4)
{

  int64_t v5; // rax
  int v6; // eax
  uint16_t v7; // dx
  int v8; // kr00_4
  int v9; // edi
  int v10; // eax
  int result; // eax

  v5 = *(int16_t *)&g_AsyncMovieState.__pad_220[2 * *((unsigned int *)this + 76) /*0x7601d9*/
                                              + 96
                                              + 2
                                              * *(uint16_t *)&g_AsyncMovieState.__pad_71C[600 * arg8
                                                                                                + 920
                                                                                                + 2
                                                                                                * abs32(a2 - *((unsigned int *)this + 51) - (unsigned int)aP2)]];
  v6 = (IDA_HIDWORD(v5) ^ v5) - IDA_HIDWORD(v5); /*0x7601dc*/
  if ( v6 >= 9 ) /*0x7601e1*/
    v6 = 9; /*0x7601e3*/
  v7 = a4[*(this + v6 + 130)]; /*0x7601fb*/
  v8 = *(unsigned int *)&g_AsyncMovieState.__pad_71C[4 * v6 + 836]; /*0x760256*/
  v9 = (((uint8_t)((uint8_t)(v7 >> g_abs_89F690) << g_abs_89F690) /*0x76027d*/
       * (v8
        / 2)) >> 8)
     + (uint8_t)((uint8_t)(v7 >> g_abs_89F690) << g_abs_89F690);
  v10 = 255; /*0x760286*/
  if ( (char)((v8 /*0x76028b*/
             * (uint8_t)((uint8_t)(v7 >> g_abs_89F690) << g_abs_89F690)) >> 6)
     + (uint8_t)((uint8_t)(v7 >> g_abs_89F690) << g_abs_89F690) <= 255 )
    v10 = (char)((v8 /*0x76028d*/
                * (uint8_t)((uint8_t)(v7 >> g_abs_89F690) << g_abs_89F690)) >> 6)
        + (uint8_t)((uint8_t)(v7 >> g_abs_89F690) << g_abs_89F690);
  if ( v9 > 255 ) /*0x760295*/
    v9 = 255; /*0x760297*/
  result = v10 >> g_abs_89F690 << g_abs_89F690; /*0x7602ba*/
  *a4 = ((int)(uint8_t)((uint8_t)(v7 >> g_abs_89F690) << g_abs_89F690) >> g_abs_89F690 << g_abs_89F690) /*0x7602d0*/
      | result
      | (v9 >> g_abs_89F690 << g_abs_89F690);
  return result; /*0x7602d3*/

}
}
// 0x7609E0
namespace gamemd {
AbstractClass * * Voxel::FaceDraw(unsigned int * a1, WaveClass * aP2)
{

  WaveClass *v3; // ebx
  int v4; // ebp
  int v5; // esi
  int v6; // ebp
  unsigned int SamplePosition; // edi
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
  MouseClass *v26; // esi
  int v27; // eax
  int v28; // eax
  MouseClass *v29; // ebp
  unsigned short *v30; // edi
  int LaserIntensity; // eax
  int v32; // edx
  int v33; // eax
  int i; // [esp+8h] [ebp-40h]
  int v35; // [esp+8h] [ebp-40h]
  WaveClass *v36; // [esp+Ch] [ebp-3Ch]
  unsigned short *v37; // [esp+10h] [ebp-38h]
  int v38; // [esp+10h] [ebp-38h]
  int v39; // [esp+14h] [ebp-34h]
  int v40; // [esp+14h] [ebp-34h]
  int v41; // [esp+18h] [ebp-30h]
  int16_t v42; // [esp+1Ch] [ebp-2Ch]
  int v43; // [esp+1Ch] [ebp-2Ch]
  int v44; // [esp+1Ch] [ebp-2Ch]
  int v45; // [esp+1Ch] [ebp-2Ch]
  int v47; // [esp+24h] [ebp-24h]
  int v48; // [esp+28h] [ebp-20h]
  int v49; // [esp+2Ch] [ebp-1Ch]
  int v50; // [esp+30h] [ebp-18h]
  int v51; // [esp+34h] [ebp-14h]
  MouseClass *aP1; // [esp+38h] [ebp-10h]
  MouseClass *aP1a; // [esp+38h] [ebp-10h]
  MouseClass *v54; // [esp+3Ch] [ebp-Ch]
  unsigned int *a1a; // [esp+4Ch] [ebp+4h]
  WaveClass *aP2a; // [esp+50h] [ebp+8h]

  v3 = (WaveClass *)this; /*0x7609e9*/
  if ( *(unsigned int *)&g_abs_A8D63C == 2 ) /*0x7609f3*/
  {
    v42 = ZCoordToScreenY(*((unsigned int *)this + 47)); /*0x760a0a*/
    v39 = (*(int (**)(unsigned int, unsigned int, unsigned int))(**(unsigned int **)&g_abs_87F8E4 + 92))( /*0x760a1b*/
            *(unsigned int *)&g_abs_87F8E4,
            0,
            0);
    if ( v39 ) /*0x760a1f*/
    {
      v47 = *(unsigned int *)&aP2->__pad_0[4]; /*0x760a3d*/
      v48 = *(unsigned int *)&aP2->__pad_0[12] + v47; /*0x760a45*/
      v50 = *(unsigned int *)aP2->__pad_0; /*0x760a4c*/
      v49 = *(unsigned int *)aP2->__pad_0 + *(unsigned int *)&aP2->__pad_0[8]; /*0x760a56*/
      v4 = *(unsigned int *)&g_abs_87F8E4 + a1[1] - v3->WaveClass_field_D0; /*0x760a69*/
      v41 = *a1 - v3->WaveClass_field_CC; /*0x760a77*/
      ProcessVoxelVertexData(&v3->WaveClass_field_148, &v3->WaveClass_field_1A0); /*0x760a7b*/
      if ( v3->WaveClass_field_1A8 ) /*0x760a80*/
      {
        v5 = v4 + v3->WaveClass_field_1A4; /*0x760aa0*/
        v36 = (WaveClass *)(v3->WaveClass_field_1A0 + v5 - 1); /*0x760aaa*/
        if ( (int)v36 >= *(unsigned int *)&aP2->__pad_0[12] + *(unsigned int *)&aP2->__pad_0[4] ) /*0x760aae*/
          v36 = (WaveClass *)(*(unsigned int *)&aP2->__pad_0[12] + *(unsigned int *)&aP2->__pad_0[4]); /*0x760ab0*/
        IDA_LOWORD(v4) = *(unsigned short *)(*(unsigned int *)&g_abs_87F8E4 + 36) - v42; /*0x760aca*/
        v6 = v4 - v5 - 2; /*0x760ad3*/
        a1a = (unsigned int *)v6; /*0x760ad6*/
        SamplePosition = Audio::GetSamplePosition( /*0x760ae5*/
                           *(int *)&g_abs_87F8E4,
                           0,
                           (MouseClass *)(v5 - *(unsigned int *)&g_abs_87F8E4));
        v8 = (*(int (**)(unsigned int))(**(unsigned int **)&g_abs_87F8E4 + 124))(*(unsigned int *)&g_abs_87F8E4); /*0x760ae9*/
        aP1 = *(MouseClass **)(*(unsigned int *)&g_abs_87F8E4 + 40); /*0x760aff*/
        if ( SamplePosition + 2 * (v8 + (unsigned int)aP1 * (unsigned int)&v36->__pad_0[-v5 + 1]) >= *(unsigned int *)(*(unsigned int *)&g_abs_87F8E4 + 28) ) /*0x760b13*/
        {
          v22 = v5; /*0x760d15*/
          v35 = v5; /*0x760d19*/
          if ( v5 <= (int)v36 ) /*0x760d1d*/
          {
            v38 = 0; /*0x760d23*/
            do /*0x760f0e*/
            {
              v23 = *(unsigned int *)&aP2->__pad_0[4]; /*0x760d2f*/
              if ( v22 >= v23 + 2 && v22 <= v23 + *(unsigned int *)&aP2->__pad_0[12] - 2 ) /*0x760d46*/
              {
                v24 = (unsigned int *)(v3->WaveClass_field_1A8 + v38); /*0x760d5a*/
                v25 = *(unsigned int *)aP2->__pad_0; /*0x760d5c*/
                v44 = v41 + v24[1]; /*0x760d6c*/
                if ( v44 >= *(unsigned int *)&aP2->__pad_0[8] + *(unsigned int *)aP2->__pad_0 - 2 ) /*0x760d70*/
                  v44 = *(unsigned int *)&aP2->__pad_0[8] + *(unsigned int *)aP2->__pad_0 - 2; /*0x760d72*/
                v26 = (MouseClass *)(v25 + 2); /*0x760d78*/
                v27 = v41 + *v24; /*0x760d7b*/
                if ( v27 > v25 + 2 ) /*0x760d7f*/
                  v26 = (MouseClass *)v27; /*0x760d81*/
                v28 = (*(int (**)(unsigned int))(**(unsigned int **)&g_abs_87F8E4 + 116))(*(unsigned int *)&g_abs_87F8E4); /*0x760d8b*/
                v29 = (MouseClass *)(v35 - *(unsigned int *)&g_abs_87F8E4); /*0x760da3*/
                aP1a = v26; /*0x760da5*/
                v30 = (unsigned short *)(v39 + 2 * ((unsigned int)v26 + v22 * (v28 >> 1))); /*0x760da9*/
                v54 = (MouseClass *)(v35 - *(unsigned int *)&g_abs_87F8E4); /*0x760db2*/
                if ( (int)v26 <= v44 ) /*0x760db6*/
                {
                  v45 = v44 - (unsigned int)v26 + 1; /*0x760dbf*/
                  do /*0x760ee0*/
                  {
                    if ( *(unsigned short *)Audio::GetSamplePosition(*(int *)&g_abs_87F8E4, aP1a, v29) > (uint16_t)a1a ) /*0x760ddc*/
                    {
                      LaserIntensity = v3->LaserIntensity; /*0x760deb*/
                      v32 = (uint8_t)((uint8_t)(*v30 >> g_abs_89F690) << g_abs_89F690) /*0x760e5b*/
                          + (char)(LaserIntensity >> 2);
                      v33 = (uint8_t)((uint8_t)(*v30 >> g_abs_89F690) << g_abs_89F690) /*0x760e64*/
                          + ((96 * LaserIntensity) >> 8);
                      if ( v33 > 255 ) /*0x760e71*/
                        v33 = 255; /*0x760e73*/
                      if ( v32 > 255 ) /*0x760e8d*/
                        v32 = 255; /*0x760e8f*/
                      v3 = (WaveClass *)this; /*0x760e96*/
                      v29 = v54; /*0x760e9e*/
                      *v30 = (v33 >> g_abs_89F690 << g_abs_89F690) /*0x760ec8*/
                           | ((int)(uint8_t)((uint8_t)(*v30 >> g_abs_89F690) << g_abs_89F690) >> g_abs_89F690 << g_abs_89F690)
                           | (v32 >> g_abs_89F690 << g_abs_89F690);
                    }
                    ++v30; /*0x760ed4*/
                    v21 = v45 == 1; /*0x760ed7*/
                    aP1a = (MouseClass *)((char *)aP1a + 1); /*0x760ed8*/
                    --v45; /*0x760edc*/
                  }
                  while ( !v21 ); /*0x760ee0*/
                }
                v6 = (int)a1a; /*0x760ee6*/
                v22 = v35; /*0x760eea*/
              }
              v6 += 0xFFFF; /*0x760ef6*/
              ++v22; /*0x760efc*/
              a1a = (unsigned int *)v6; /*0x760f02*/
              v35 = v22; /*0x760f06*/
              v38 += 8; /*0x760f0a*/
            }
            while ( v22 <= (int)v36 ); /*0x760f0e*/
          }
        }
        else
        {
          v9 = (*(int (**)(unsigned int))(**(unsigned int **)&g_abs_87F8E4 + 116))(*(unsigned int *)&g_abs_87F8E4) >> 1; /*0x760b2a*/
          v51 = v9; /*0x760b2e*/
          v10 = (unsigned short *)(v39 + 2 * v5 * v9); /*0x760b35*/
          aP2a = (WaveClass *)v3->WaveClass_field_1A8; /*0x760b42*/
          v11 = v5; /*0x760b46*/
          for ( i = v5; v11 <= (int)v36; i = v11 ) /*0x760b4e*/
          {
            if ( v11 >= v47 && v11 <= v48 ) /*0x760b62*/
            {
              v12 = v49; /*0x760b76*/
              if ( *(unsigned int *)&aP2a->__pad_0[4] + v41 < v49 ) /*0x760b7c*/
                v12 = *(unsigned int *)&aP2a->__pad_0[4] + v41; /*0x760b7e*/
              v13 = v41 + *(unsigned int *)aP2a->__pad_0; /*0x760b86*/
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
                  if ( *v14 > (uint16_t)a1a ) /*0x760bbc*/
                  {
                    v17 = v3->LaserIntensity; /*0x760bcb*/
                    v18 = (uint8_t)((uint8_t)(*v15 >> g_abs_89F690) << g_abs_89F690) /*0x760c33*/
                        + (char)(v17 >> 2);
                    v19 = (uint8_t)((uint8_t)(*v15 >> g_abs_89F690) << g_abs_89F690) /*0x760c48*/
                        + (char)((3 * v17) >> 3);
                    v20 = 255; /*0x760c4a*/
                    if ( v19 <= 255 ) /*0x760c55*/
                      v20 = v19; /*0x760c57*/
                    if ( v18 > 255 ) /*0x760c6c*/
                      v18 = 255; /*0x760c6e*/
                    v11 = i; /*0x760c7d*/
                    v3 = (WaveClass *)this; /*0x760c9d*/
                    v14 = v37; /*0x760ca3*/
                    *v15 = (v20 >> g_abs_89F690 << g_abs_89F690) /*0x760cab*/
                         | ((int)(uint8_t)((uint8_t)(*v15 >> g_abs_89F690) << g_abs_89F690) >> g_abs_89F690 << g_abs_89F690)
                         | (v18 >> g_abs_89F690 << g_abs_89F690);
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
              SamplePosition = (unsigned int)&v14[-v16]; /*0x760ccf*/
              v10 = &v15[-v16]; /*0x760cd1*/
              v9 = v51; /*0x760cd3*/
            }
            v10 += v9; /*0x760ce5*/
            SamplePosition += 2 * (unsigned int)aP1; /*0x760ce9*/
            ++v11; /*0x760cf3*/
            aP2a = (WaveClass *)((char *)aP2a + 8); /*0x760cf4*/
            IDA_LOWORD(a1a) = (unsigned short)a1a - 1; /*0x760cfe*/
          }
        }
      }
      (*(void (**)(unsigned int))(**(unsigned int **)&g_abs_87F8E4 + 96))(*(unsigned int *)&g_abs_87F8E4); /*0x760f1c*/
      if ( v3->WaveClass_field_1A8 ) /*0x760f1f*/
      {
        RA2_OPDEL((void *)v3->WaveClass_field_1A8); /*0x760f2c*/
        v3->WaveClass_field_1A8 = 0; /*0x760f34*/
      }
    }
  }

}
}
// 0x7610F0
namespace gamemd {
void* Voxel::FaceBlit()
{

  int *v2; // ebp
  int v3; // eax
  double v4; // st7
  double v5; // st7
  IUnknown *v6; // eax
  MouseClass *v7; // edx
  int v8; // ecx
  int v9; // eax
  int v10; // kr38_4
  int v11; // ebx
  MouseClass *v12; // eax
  int v13; // edx
  unsigned short *v14; // eax
  unsigned int v15; // edx
  MouseClass *v16; // eax
  double v17; // st7
  IUnknown *v18; // eax
  int *v19; // eax
  MouseClass *v20; // eax
  int v21; // edx
  double v22; // st7
  IUnknown *v23; // eax
  int *v24; // eax
  int *v25; // eax
  unsigned short *v26; // eax
  MouseClass *v27; // [esp-8h] [ebp-80h]
  MouseClass *v28; // [esp-8h] [ebp-80h]
  MouseClass *v29; // [esp-8h] [ebp-80h]
  int v30; // [esp-4h] [ebp-7Ch]
  int v31; // [esp-4h] [ebp-7Ch]
  int v32; // [esp-4h] [ebp-7Ch]
  MouseClass *v33; // [esp+10h] [ebp-68h] BYREF
  int v34; // [esp+14h] [ebp-64h] BYREF
  MouseClass *v35; // [esp+18h] [ebp-60h] BYREF
  MouseClass *v36; // [esp+1Ch] [ebp-5Ch] BYREF
  rc_ptr_base v37; // [esp+20h] [ebp-58h] BYREF
  rc_ptr_base v38; // [esp+24h] [ebp-54h] BYREF
  rc_ptr_base v39; // [esp+28h] [ebp-50h] BYREF
  rc_ptr_base v40; // [esp+2Ch] [ebp-4Ch] BYREF
  rc_ptr_base v41; // [esp+30h] [ebp-48h] BYREF
  char v42[4]; // [esp+34h] [ebp-44h] BYREF
  char v43[4]; // [esp+38h] [ebp-40h] BYREF
  char v44[4]; // [esp+3Ch] [ebp-3Ch] BYREF
  double i; // [esp+40h] [ebp-38h]
  int v46; // [esp+48h] [ebp-30h] BYREF
  int v47; // [esp+4Ch] [ebp-2Ch]
  int v48; // [esp+50h] [ebp-28h]
  unsigned int v49[3]; // [esp+54h] [ebp-24h] BYREF
  unsigned int v50[3]; // [esp+60h] [ebp-18h] BYREF
  unsigned int v51[3]; // [esp+6Ch] [ebp-Ch] BYREF

  v2 = (int *)((char *)this + 496); /*0x761105*/
  (*(void (**)(int))(*((unsigned int *)this + 124) + 12))((char *)this + 496); /*0x76110d*/
  if ( *((unsigned char *)this + 300) ) /*0x761110*/
  {
    v3 = *((unsigned int *)this + 45); /*0x76111e*/
    i = 0.050000001; /*0x76112b*/
    IDA_LOWORD(v35) = v3 / 256; /*0x761146*/
    v4 = 0.050000001 * 0.5 + *(double *)((char *)this + 312); /*0x761158*/
    IDA_HIWORD(v35) = *((unsigned int *)this + 46) / 256; /*0x761167*/
    v33 = v35; /*0x761172*/
    if ( v4 >= 0.050000001 ) /*0x761179*/
    {
      do /*0x76129b*/
      {
        v5 = i; /*0x76117f*/
        v30 = Math::RoundToInt(i); /*0x7611a8*/
        v27 = (MouseClass *)Math::RoundToInt(v5); /*0x7611c0*/
        v6 = (IUnknown *)Math::RoundToInt(v5); /*0x7611cd*/
        v7 = (MouseClass *)Coord3D::Set(&v46, v6, v27, v30); /*0x7611e0*/
        v8 = v7->field_0; /*0x7611e2*/
        v9 = (int)v7->field_4; /*0x7611e4*/
        v49[2] = v7->field_8; /*0x7611ea*/
        v10 = v9; /*0x7611f7*/
        v11 = v8 / 256; /*0x76120d*/
        v36 = *(MouseClass **)CellStruct::Set(&v38, v8 / 256, v9 / 256); /*0x76121e*/
        if ( v33 != v36 ) /*0x761222*/
        {
          v33 = *(MouseClass **)CellStruct::Set(&v37, v11, v10 / 256); /*0x761247*/
          v12 = (MouseClass *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v33); /*0x76124b*/
          v13 = *v2; /*0x761250*/
          v35 = v12; /*0x761253*/
          if ( (*(int (**)(int *, MouseClass **))(v13 + 16))(v2, &v35) == -1 ) /*0x761264*/
            Voxel::freeSectionMemory(v2, &v35); /*0x76126d*/
        }
        i = i + 0.050000001; /*0x76127c*/
      }
      while ( 0.050000001 * 0.5 + *(double *)((char *)this + 312) >= i ); /*0x76129b*/
    }
  }
  else
  {
    v33 = *(MouseClass **)CellStruct::Set(&v38, *((unsigned int *)this + 63) / 256, *((unsigned int *)this + 64) / 256); /*0x7612e0*/
    v35 = *(MouseClass **)CellStruct::Set(&v38, *((unsigned int *)this + 66) / 256, *((unsigned int *)this + 67) / 256); /*0x761312*/
    v14 = CellStruct::Set(&v38, *((unsigned int *)this + 48) / 256, *((unsigned int *)this + 49) / 256); /*0x76133c*/
    v15 = *((unsigned int *)this + 80); /*0x761349*/
    v34 = *(unsigned int *)v14; /*0x761355*/
    for ( i = COERCE_DOUBLE(__PAIR64__(*((unsigned int *)this + 81), v15)); /*0x761376*/
          0.050000001 * 0.5 + *(double *)((char *)this + 312) >= i;
          i = i + 0.050000001 )
    {
      v48 = *(unsigned int *)&g_AsyncMovieState.__pad_524[324]; /*0x761392*/
      v16 = *(MouseClass **)((char *)this + 460); /*0x761396*/
      v46 = *(unsigned int *)&g_AsyncMovieState.__pad_524[316]; /*0x76139c*/
      v47 = *(unsigned int *)&g_AsyncMovieState.__pad_524[320]; /*0x7613a2*/
      if ( (int)v16 < 4 ) /*0x7613a6*/
      {
        v17 = i; /*0x7613ac*/
        v31 = Math::RoundToInt(i); /*0x7613d5*/
        v28 = (MouseClass *)Math::RoundToInt(v17); /*0x7613ed*/
        v18 = (IUnknown *)Math::RoundToInt(v17); /*0x7613fa*/
        v19 = Coord3D::Set(v49, v18, v28, v31); /*0x761408*/
        v46 = *v19; /*0x761411*/
        v47 = v19[1]; /*0x761418*/
        v48 = v19[2]; /*0x76141f*/
        v37.vfptr = *(void **)CellStruct::Set(&v39, v46 / 256, v47 / 256); /*0x76144f*/
        if ( v33 != v37.vfptr ) /*0x761453*/
        {
          v33 = *(MouseClass **)CellStruct::Set(&v40, v46 / 256, v47 / 256); /*0x761498*/
          v20 = (MouseClass *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v33); /*0x76149c*/
          v21 = *v2; /*0x7614a1*/
          v36 = v20; /*0x7614a4*/
          if ( (*(int (**)(int *, MouseClass **))(v21 + 16))(v2, &v36) == -1 ) /*0x7614b5*/
            Voxel::freeSectionMemory(v2, &v36); /*0x7614be*/
        }
      }
      v22 = i; /*0x7614c3*/
      *(float *)&v37.vfptr = i; /*0x7614c7*/
      v32 = Math::RoundToInt(i); /*0x7614f0*/
      v29 = (MouseClass *)Math::RoundToInt(v22); /*0x761508*/
      v23 = (IUnknown *)Math::RoundToInt(v22); /*0x761515*/
      v24 = Coord3D::Set(v50, v23, v29, v32); /*0x761523*/
      v46 = *v24; /*0x76152c*/
      v47 = v24[1]; /*0x761533*/
      v48 = v24[2]; /*0x76153a*/
      v38.vfptr = *(void **)CellStruct::Set(&v41, v46 / 256, v47 / 256); /*0x76156e*/
      if ( Coord::Compare2D(&v34, &v38) ) /*0x761572*/
      {
        v34 = *Coord::ToCell(&v46, (IUnknown *)v42); /*0x761592*/
        Voxel::renderSection((unsigned int *)this, (ObjectClass *)&v34); /*0x761596*/
      }
      if ( *((int *)this + 115) >= 4 ) /*0x7615a1*/
      {
        v25 = Color::RGBFromFloat(v51, (IUnknown *)((char *)this + 264), *(float *)&v37.vfptr); /*0x7615b3*/
        v46 = *v25; /*0x7615ba*/
        v47 = v25[1]; /*0x7615c6*/
        v48 = v25[2]; /*0x7615d1*/
        v26 = Coord::ToCell(&v46, (IUnknown *)v43); /*0x7615d5*/
        if ( Coord::Compare2D(&v35, v26) ) /*0x7615df*/
        {
          v35 = (MouseClass *)*Coord::ToCell(&v46, (IUnknown *)v44); /*0x7615ff*/
          Voxel::renderSection((unsigned int *)this, (ObjectClass *)&v35); /*0x761603*/
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

  int v4; // esi
  double v5; // st7
  int v6; // eax
  int v7; // eax
  double v8; // st7
  int v9; // esi
  int v10; // ebx
  double v11; // st7
  int v12; // ecx
  int v13; // edx
  int v14; // ecx
  int v15; // edx
  double v16; // st7
  int v17; // edx
  int v18; // eax
  double v19; // st5
  double v20; // st6
  double v21; // st6
  double v22; // st6
  double v23; // st5
  double v24; // st7
  double v25; // st7
  double v26; // st6
  float *v27; // eax
  float *v28; // eax
  float *v29; // eax
  float *v30; // eax
  double v31; // st7
  int v32; // esi
  int v33; // eax
  int v34; // esi
  int v35; // eax
  int v36; // esi
  int v37; // eax
  double v38; // st7
  int v39; // esi
  int v40; // eax
  unsigned int *v41; // eax
  int v42; // eax
  int v43; // eax
  int result; // eax
  float v45; // [esp+8h] [ebp-CCh]
  int v46; // [esp+18h] [ebp-BCh]
  float v47; // [esp+18h] [ebp-BCh]
  int v48; // [esp+1Ch] [ebp-B8h]
  float v49; // [esp+1Ch] [ebp-B8h]
  int v50; // [esp+1Ch] [ebp-B8h]
  int v51; // [esp+1Ch] [ebp-B8h]
  int v52; // [esp+1Ch] [ebp-B8h]
  int v53; // [esp+1Ch] [ebp-B8h]
  int v54; // [esp+24h] [ebp-B0h]
  double v55; // [esp+24h] [ebp-B0h]
  double v56; // [esp+24h] [ebp-B0h]
  float v57; // [esp+30h] [ebp-A4h]
  int v58; // [esp+34h] [ebp-A0h] BYREF
  int v59; // [esp+38h] [ebp-9Ch]
  int v60; // [esp+3Ch] [ebp-98h]
  int v61; // [esp+40h] [ebp-94h] BYREF
  int v62; // [esp+44h] [ebp-90h]
  int v63; // [esp+48h] [ebp-8Ch]
  float v64; // [esp+4Ch] [ebp-88h] BYREF
  float v65; // [esp+50h] [ebp-84h]
  float v66; // [esp+54h] [ebp-80h]
  float v67; // [esp+58h] [ebp-7Ch] BYREF
  float v68; // [esp+5Ch] [ebp-78h]
  float v69; // [esp+60h] [ebp-74h]
  float v70; // [esp+64h] [ebp-70h] BYREF
  float v71; // [esp+68h] [ebp-6Ch]
  float v72; // [esp+6Ch] [ebp-68h]
  float v73; // [esp+70h] [ebp-64h] BYREF
  float v74; // [esp+74h] [ebp-60h]
  float v75; // [esp+78h] [ebp-5Ch]
  int v76; // [esp+7Ch] [ebp-58h]
  float v77; // [esp+80h] [ebp-54h]
  float v78; // [esp+84h] [ebp-50h]
  float v79; // [esp+88h] [ebp-4Ch]
  float v80; // [esp+8Ch] [ebp-48h]
  float v81; // [esp+90h] [ebp-44h]
  float v82; // [esp+94h] [ebp-40h]
  float v83; // [esp+98h] [ebp-3Ch]
  float v84; // [esp+9Ch] [ebp-38h]
  float v85; // [esp+A0h] [ebp-34h]
  char v86[48]; // [esp+A4h] [ebp-30h] BYREF

  if ( (MEMORY[0xB45DA0] & 1) == 0 ) /*0x76165b*/
  {
    MEMORY[0xB45DA0] |= 1u; /*0x76167d*/
    MEMORY[0xB45DA8][0] = -1041235968; /*0x76168f*/
    MEMORY[0xB45DAC] = -1027080192; /*0x7616a0*/
    MEMORY[0xB45DB0] = 0; /*0x7616b2*/
    MEMORY[0xB45DB4] = -1041235968; /*0x7616c4*/
    MEMORY[0xB45DB8] = 1120403456; /*0x7616d5*/
    MEMORY[0xB45DBC] = 0; /*0x7616e7*/
    MEMORY[0xB45DC0] = 1106247680; /*0x7616f9*/
    MEMORY[0xB45DC4] = -1027080192; /*0x76170a*/
    MEMORY[0xB45DC8] = 0; /*0x76171c*/
    MEMORY[0xB45DCC] = 1106247680; /*0x76172e*/
    MEMORY[0xB45DD0] = 1120403456; /*0x76173f*/
    MEMORY[0xB45DD4] = 0; /*0x761751*/
    MEMORY[0xB45DD8] = -1039663104; /*0x761763*/
    MEMORY[0xB45DDC] = -1037041664; /*0x761774*/
    MEMORY[0xB45DE0] = 0; /*0x761786*/
    MEMORY[0xB45DE4] = -1039663104; /*0x761798*/
    MEMORY[0xB45DE8] = 1110441984; /*0x7617a9*/
    MEMORY[0xB45DEC] = 0; /*0x7617bb*/
    MEMORY[0xB45DF0] = 1107820544; /*0x7617cd*/
    MEMORY[0xB45DF4] = -1037041664; /*0x7617de*/
    MEMORY[0xB45DF8] = 0; /*0x7617f0*/
    MEMORY[0xB45DFC] = 1107820544; /*0x761802*/
    MEMORY[0xB45E00] = 1110441984; /*0x761813*/
    MEMORY[0xB45E04] = 0; /*0x761825*/
    MEMORY[0xB45E08] = -1042808832; /*0x761833*/
    MEMORY[0xB45E0C] = -1039663104; /*0x76183c*/
    MEMORY[0xB45E10] = 0; /*0x761842*/
    MEMORY[0xB45E14] = -1042808832; /*0x76186c*/
    MEMORY[0xB45E18] = 1107820544; /*0x761871*/
    MEMORY[0xB45E1C] = 0; /*0x761877*/
    MEMORY[0xB45E20] = 1104674816; /*0x7618a1*/
    MEMORY[0xB45E24] = -1039663104; /*0x7618a6*/
    MEMORY[0xB45E28] = 0; /*0x7618ac*/
    MEMORY[0xB45E2C] = 1104674816; /*0x7618d6*/
    MEMORY[0xB45E30] = 1107820544; /*0x7618db*/
    MEMORY[0xB45E34] = 0; /*0x7618e1*/
    MEMORY[0xB45E38] = -1041235968; /*0x76190b*/
    MEMORY[0xB45E3C] = -1035468800; /*0x761910*/
    MEMORY[0xB45E40] = 0; /*0x761916*/
    MEMORY[0xB45E44] = -1041235968; /*0x761940*/
    MEMORY[0xB45E48] = 1112014848; /*0x761945*/
    MEMORY[0xB45E4C] = 0; /*0x76194b*/
    MEMORY[0xB45E50] = 1106247680; /*0x761975*/
    MEMORY[0xB45E54] = -1035468800; /*0x76197a*/
    MEMORY[0xB45E58] = 0; /*0x761980*/
    MEMORY[0xB45E5C] = 1106247680; /*0x7619af*/
    MEMORY[0xB45E60] = 1112014848; /*0x7619b4*/
    MEMORY[0xB45E64] = 0; /*0x7619ba*/
    atexit(nullsub_46); /*0x7619c0*/
  }
  v4 = *((unsigned int *)this + 44); /*0x7619cb*/
  v5 = flt_7F6BB4[v4]; /*0x7619d6*/
  v58 = *a2; /*0x7619dd*/
  v6 = a2[2]; /*0x7619f6*/
  v59 = a2[1]; /*0x7619f9*/
  v60 = v6; /*0x7619fd*/
  v46 = Math::RoundToInt(v5); /*0x761a13*/
  v76 = *(unsigned int *)(a3 + 4); /*0x761a17*/
  v48 = Math::RoundToInt(v5); /*0x761a2e*/
  v7 = Math::RoundToInt(v5); /*0x761a47*/
  v61 = v46; /*0x761a5a*/
  v62 = v48; /*0x761a5e*/
  v63 = v7; /*0x761a62*/
  if ( !v4 ) /*0x761a66*/
    v63 = v7 + 50; /*0x761a6b*/
  if ( v4 == 3 ) /*0x761a72*/
    v63 += 50; /*0x761a74*/
  v8 = flt_7F6BB4[v4]; /*0x761a79*/
  v9 = Math::RoundToInt(v8); /*0x761a9f*/
  v10 = Math::RoundToInt(v8); /*0x761ab4*/
  v58 = v9; /*0x761ac9*/
  v60 = Math::RoundToInt(v8); /*0x761acf*/
  v59 = v10; /*0x761ad9*/
  v11 = Math::Sqrt((double)(v10 - v62) * (double)(v10 - v62) + (double)(v9 - v61) * (double)(v9 - v61)); /*0x761b09*/
  v54 = Math::RoundToInt(v11); /*0x761b1a*/
  *((unsigned int *)this + 45) = v9; /*0x761b27*/
  *((unsigned int *)this + 46) = v59; /*0x761b2d*/
  *((unsigned int *)this + 47) = v60; /*0x761b34*/
  (*(void (**)(unsigned int *, unsigned int *))(*(unsigned int *)this + 1744))(this, (unsigned int *)this + 45); /*0x761b3b*/
  v12 = v61; /*0x761b41*/
  v13 = v62; /*0x761b45*/
  *((unsigned int *)this + 82) = 6; /*0x761b55*/
  *((unsigned int *)this + 48) = v12; /*0x761b60*/
  v14 = v63; /*0x761b62*/
  *((unsigned int *)this + 49) = v13; /*0x761b66*/
  *((unsigned int *)this + 83) = (unsigned int *)this + 84; /*0x761b6f*/
  *((unsigned int *)this + 50) = v14; /*0x761b75*/
  Coord::To_Screen(&v58, (unsigned int *)this + 51); /*0x761b83*/
  Coord::To_Screen(&v61, (unsigned int *)this + 53); /*0x761b9a*/
  v15 = *((unsigned int *)this + 83); /*0x761b9f*/
  v16 = (double)v54; /*0x761ba7*/
  *(unsigned int *)(v15 + 8) = *((unsigned int *)this + 53); /*0x761bab*/
  *(unsigned int *)(v15 + 12) = *((unsigned int *)this + 54); /*0x761bb1*/
  v17 = *((unsigned int *)this + 83); /*0x761bb4*/
  *(unsigned int *)(v17 + 32) = *((unsigned int *)this + 51); /*0x761bbc*/
  *(unsigned int *)(v17 + 36) = *((unsigned int *)this + 52); /*0x761bc4*/
  v18 = 48 * *((unsigned int *)this + 44); /*0x761bd2*/
  v77 = v16 + *(float *)&MEMORY[0xB45DA8][v18 / 4u]; /*0x761bdb*/
  v78 = *(float *)(v18 + 11820460); /*0x761be9*/
  v19 = *(float *)(v18 + 11820464); /*0x761bed*/
  v73 = v77; /*0x761bf7*/
  v79 = v19; /*0x761bfb*/
  v74 = v78; /*0x761c03*/
  v75 = v79; /*0x761c07*/
  v80 = v16 + *(float *)(v18 + 11820468); /*0x761c11*/
  v81 = *(float *)(v18 + 11820472); /*0x761c25*/
  v20 = *(float *)(v18 + 11820476); /*0x761c2c*/
  v64 = v80; /*0x761c39*/
  v82 = v20; /*0x761c3d*/
  v65 = v81; /*0x761c4b*/
  v66 = v82; /*0x761c4f*/
  v83 = *(float *)(v18 + 11820480); /*0x761c59*/
  v84 = *(float *)(v18 + 11820484); /*0x761c6d*/
  v21 = *(float *)(v18 + 11820488); /*0x761c74*/
  v67 = v83; /*0x761c81*/
  v85 = v21; /*0x761c85*/
  v68 = v84; /*0x761c93*/
  v69 = v85; /*0x761c97*/
  v49 = *(float *)(v18 + 11820496); /*0x761cab*/
  v70 = *(float *)(v18 + 11820492); /*0x761cc5*/
  v71 = v49; /*0x761cc9*/
  v22 = (double)(v63 - v60); /*0x761ce7*/
  v23 = (double)v60; /*0x761ceb*/
  v75 = v77 * v22 / v16 + v23; /*0x761d0c*/
  v66 = v80 * v22 / v16 + v23; /*0x761d1d*/
  v69 = v83 * v22 / v16 + v23; /*0x761d2e*/
  v72 = v70 * v22 / v16 + v23; /*0x761d3c*/
  v24 = (double)(v61 - v58); /*0x761d46*/
  v47 = v24; /*0x761d4a*/
  v55 = v24; /*0x761d58*/
  v25 = Math::Sqrt((double)(v62 - v59) * (double)(v62 - v59) + v47 * v47); /*0x761d71*/
  v26 = v55; /*0x761d76*/
  if ( v25 < v55 ) /*0x761d86*/
    v26 = v25; /*0x761d8a*/
  if ( -v26 > v25 ) /*0x761d97*/
    v26 = -v25; /*0x761d9d*/
  Math::ArcTan2_Table(v26 / v25); /*0x761da9*/
  v56 = v25; /*0x761db6*/
  if ( v59 > v62 ) /*0x761dbf*/
    v56 = -v25; /*0x761dc7*/
  Matrix3x4::Identity(v86); /*0x761dd2*/
  v45 = v56; /*0x761de3*/
  Matrix2D::Rotate(v45); /*0x761de6*/
  v27 = (float *)TransformMatrix3x4Point(&v73); /*0x761dfb*/
  v73 = *v27; /*0x761e02*/
  v74 = v27[1]; /*0x761e09*/
  v75 = v27[2]; /*0x761e18*/
  v28 = (float *)TransformMatrix3x4Point(&v64); /*0x761e24*/
  v64 = *v28; /*0x761e2b*/
  v65 = v28[1]; /*0x761e37*/
  v66 = v28[2]; /*0x761e49*/
  v29 = (float *)TransformMatrix3x4Point(&v67); /*0x761e4d*/
  v67 = *v29; /*0x761e54*/
  v68 = v29[1]; /*0x761e5b*/
  v69 = v29[2]; /*0x761e6a*/
  v30 = (float *)TransformMatrix3x4Point(&v70); /*0x761e76*/
  v31 = (double)v58; /*0x761e7b*/
  v70 = *v30; /*0x761e81*/
  v71 = v30[1]; /*0x761e8e*/
  v72 = v30[2]; /*0x761e95*/
  v32 = Math::RoundToInt(v31); /*0x761ea2*/
  v57 = (float)v59; /*0x761ea4*/
  v50 = Math::RoundToInt(v31); /*0x761eb5*/
  v33 = Math::RoundToInt(v31); /*0x761eb9*/
  *((unsigned int *)this + 63) = v32; /*0x761ed0*/
  *((unsigned int *)this + 64) = v50; /*0x761ed2*/
  *((unsigned int *)this + 65) = v33; /*0x761ed5*/
  v34 = Math::RoundToInt(v31); /*0x761ee5*/
  v51 = Math::RoundToInt(v31); /*0x761ef0*/
  v35 = Math::RoundToInt(v31); /*0x761ef4*/
  *((unsigned int *)this + 66) = v34; /*0x761eff*/
  *((unsigned int *)this + 67) = v51; /*0x761f0f*/
  *((unsigned int *)this + 68) = v35; /*0x761f12*/
  v36 = Math::RoundToInt(v31); /*0x761f22*/
  v52 = Math::RoundToInt(v31); /*0x761f2d*/
  v37 = Math::RoundToInt(v31); /*0x761f31*/
  v38 = v31 + v70; /*0x761f40*/
  *((unsigned int *)this + 69) = v36; /*0x761f44*/
  *((unsigned int *)this + 70) = v52; /*0x761f46*/
  *((unsigned int *)this + 71) = v37; /*0x761f49*/
  v39 = Math::RoundToInt(v38); /*0x761f59*/
  v53 = Math::RoundToInt(v57 + v71); /*0x761f64*/
  v40 = Math::RoundToInt(v72); /*0x761f68*/
  *((unsigned int *)this + 72) = v39; /*0x761f77*/
  *((unsigned int *)this + 73) = v53; /*0x761f85*/
  *((unsigned int *)this + 74) = v40; /*0x761f88*/
  Coord::To_Screen((unsigned int *)this + 63, (unsigned int *)this + 55); /*0x761f91*/
  Coord::To_Screen((unsigned int *)this + 66, (unsigned int *)this + 57); /*0x761faa*/
  Coord::To_Screen((unsigned int *)this + 69, (unsigned int *)this + 59); /*0x761fc3*/
  Coord::To_Screen((unsigned int *)this + 72, (unsigned int *)this + 61); /*0x761fdc*/
  v41 = (unsigned int *)*((unsigned int *)this + 83); /*0x761fe1*/
  *v41 = *((unsigned int *)this + 55); /*0x761fe9*/
  v41[1] = *((unsigned int *)this + 56); /*0x761fee*/
  v42 = *((unsigned int *)this + 83); /*0x761ff1*/
  *(unsigned int *)(v42 + 16) = *((unsigned int *)this + 57); /*0x761ff9*/
  *(unsigned int *)(v42 + 20) = *((unsigned int *)this + 58); /*0x761fff*/
  v43 = *((unsigned int *)this + 83); /*0x762002*/
  *(unsigned int *)(v43 + 24) = *((unsigned int *)this + 61); /*0x76200e*/
  *(unsigned int *)(v43 + 28) = *((unsigned int *)this + 62); /*0x762017*/
  result = *((unsigned int *)this + 83); /*0x76201a*/
  *(unsigned int *)(result + 40) = *((unsigned int *)this + 59); /*0x762026*/
  *(unsigned int *)(result + 44) = *((unsigned int *)this + 60); /*0x762034*/
  qmemcpy((unsigned int *)this + 118, (const void *)(*((unsigned int *)this + 117) + 928), 0x18u); /*0x762049*/
  return result; /*0x76204b*/

}
}
// 0x762070
namespace gamemd {
AbstractClass * * Voxel::LightRender(AbstractClass ** a2, int a3)
{

  int v4; // esi
  double v5; // st7
  AbstractClass *v6; // eax
  float v7; // eax
  AbstractClass *v8; // edx
  int v9; // eax
  double st7_7a; // st7
  double st6_7a; // st6
  double v12; // st7
  AbstractClass *v10; // ecx
  AbstractClass *v11; // edx
  AbstractClass *v15; // ecx
  double v16; // st7
  int v17; // eax
  double v18; // st6
  double v19; // st7
  double v20; // st7
  double v21; // st7
  double v22; // st7
  double v23; // st6
  double v24; // st5
  double v25; // st7
  double v26; // st7
  double v27; // st6
  float *v28; // eax
  AbstractClass **eax13b; // eax
  float *v30; // eax
  AbstractClass **eax13d; // eax
  double v32; // st7
  AbstractClass *v29; // esi
  int v34; // eax
  float v35; // edx
  AbstractClass *v31; // esi
  int v37; // eax
  AbstractClass *v33; // esi
  int v39; // eax
  float v40; // edx
  double v41; // st7
  AbstractClass *v36; // esi
  int v43; // eax
  float v44; // edx
  unsigned int *v45; // eax
  int v46; // eax
  int v47; // eax
  int result; // eax
  float v49; // [esp+8h] [ebp-CCh]
  float v50; // [esp+18h] [ebp-BCh] BYREF
  float v51; // [esp+1Ch] [ebp-B8h]
  float v52; // [esp+20h] [ebp-B4h]
  double v53; // [esp+24h] [ebp-B0h]
  AbstractClass *v55; // [esp+30h] [ebp-A4h]
  AbstractClass *a1; // [esp+34h] [ebp-A0h] BYREF
  AbstractClass *v57; // [esp+38h] [ebp-9Ch]
  AbstractClass *v58; // [esp+3Ch] [ebp-98h]
  AbstractClass *var94; // [esp+40h] [ebp-94h] BYREF
  AbstractClass *v59; // [esp+44h] [ebp-90h]
  AbstractClass *v61; // [esp+48h] [ebp-8Ch]
  AbstractClass *v62; // [esp+4Ch] [ebp-88h]
  AbstractClass *v63; // [esp+50h] [ebp-84h] BYREF
  AbstractClass *v64; // [esp+54h] [ebp-80h]
  AbstractClass *v65; // [esp+58h] [ebp-7Ch]
  AbstractClass *v66; // [esp+5Ch] [ebp-78h] BYREF
  AbstractClass *v67; // [esp+60h] [ebp-74h]
  AbstractClass *v68; // [esp+64h] [ebp-70h]
  float var6C; // [esp+68h] [ebp-6Ch] BYREF
  AbstractClass *v70; // [esp+6Ch] [ebp-68h]
  AbstractClass *v71; // [esp+70h] [ebp-64h]
  float var60; // [esp+74h] [ebp-60h] BYREF
  AbstractClass *v73; // [esp+78h] [ebp-5Ch]
  float var58; // [esp+7Ch] [ebp-58h]
  float v74; // [esp+80h] [ebp-54h]
  AbstractClass *v75; // [esp+84h] [ebp-50h]
  float v76; // [esp+88h] [ebp-4Ch]
  float v77; // [esp+8Ch] [ebp-48h]
  AbstractClass *v78; // [esp+90h] [ebp-44h]
  float v79; // [esp+94h] [ebp-40h]
  float v80; // [esp+98h] [ebp-3Ch]
  AbstractClass *v82; // [esp+9Ch] [ebp-38h]
  float var34; // [esp+A0h] [ebp-34h]
  char v83[48]; // [esp+A4h] [ebp-30h] BYREF

  if ( (g_AsyncMovieState.__pad_188[24] & 1) == 0 ) /*0x76208b*/
  {
    g_AsyncMovieState.__pad_188[24] |= 1u; /*0x7620ad*/
    *(unsigned int *)&g_AsyncMovieState.__pad_A8[16] = -1041235968; /*0x7620bf*/
    *(unsigned int *)&g_AsyncMovieState.__pad_A8[20] = -1027080192; /*0x7620d0*/
    *(unsigned int *)&g_AsyncMovieState.__pad_A8[24] = 0; /*0x7620e2*/
    *(unsigned int *)&g_AsyncMovieState.__pad_A8[28] = -1041235968; /*0x7620f4*/
    *(unsigned int *)&g_AsyncMovieState.__pad_A8[32] = 1120403456; /*0x762105*/
    *(unsigned int *)&g_AsyncMovieState.__pad_A8[36] = 0; /*0x762117*/
    *(unsigned int *)&g_AsyncMovieState.__pad_A8[40] = 1106247680; /*0x762129*/
    g_AsyncMovieState.field_D4 = -1027080192; /*0x76213a*/
    *(unsigned int *)g_AsyncMovieState.__pad_D8 = 0; /*0x76214c*/
    *(unsigned int *)&g_AsyncMovieState.__pad_D8[4] = 1106247680; /*0x76215e*/
    *(unsigned int *)&g_AsyncMovieState.__pad_D8[8] = 1120403456; /*0x76216f*/
    g_AsyncMovieState.field_E4 = 0; /*0x762181*/
    g_AsyncMovieState.field_E8 = -1039663104; /*0x762193*/
    *(unsigned int *)g_AsyncMovieState.__pad_EC = -1037041664; /*0x7621a4*/
    *(unsigned int *)&g_AsyncMovieState.__pad_EC[4] = 0; /*0x7621b6*/
    *(unsigned int *)&g_AsyncMovieState.__pad_EC[8] = -1039663104; /*0x7621c8*/
    g_AsyncMovieState.field_F8 = 1110441984; /*0x7621d9*/
    *(unsigned int *)g_AsyncMovieState.__pad_FC = 0; /*0x7621eb*/
    *(unsigned int *)&g_AsyncMovieState.__pad_FC[4] = 1107820544; /*0x7621fd*/
    *(unsigned int *)&g_AsyncMovieState.__pad_FC[8] = -1037041664; /*0x76220e*/
    *(unsigned int *)&g_AsyncMovieState.__pad_FC[12] = 0; /*0x762220*/
    *(unsigned int *)&g_AsyncMovieState.__pad_FC[16] = 1107820544; /*0x762232*/
    *(unsigned int *)&g_AsyncMovieState.__pad_FC[20] = 1110441984; /*0x762243*/
    *(unsigned int *)&g_AsyncMovieState.__pad_FC[24] = 0; /*0x762255*/
    g_AsyncMovieState.field_118 = -1042808832; /*0x762263*/
    *(unsigned int *)g_AsyncMovieState.__pad_11C = -1039663104; /*0x76226c*/
    *(unsigned int *)&g_AsyncMovieState.__pad_11C[4] = 0; /*0x762272*/
    *(unsigned int *)&g_AsyncMovieState.__pad_11C[8] = -1042808832; /*0x76229c*/
    *(unsigned int *)&g_AsyncMovieState.__pad_11C[12] = 1107820544; /*0x7622a1*/
    *(unsigned int *)&g_AsyncMovieState.__pad_11C[16] = 0; /*0x7622a7*/
    g_AsyncMovieState.field_130 = 1104674816; /*0x7622d1*/
    *(unsigned int *)g_AsyncMovieState.__pad_134 = -1039663104; /*0x7622d6*/
    *(unsigned int *)&g_AsyncMovieState.__pad_134[4] = 0; /*0x7622dc*/
    *(unsigned int *)&g_AsyncMovieState.__pad_134[8] = 1104674816; /*0x762306*/
    g_AsyncMovieState.field_140 = 1107820544; /*0x76230b*/
    *(unsigned int *)g_AsyncMovieState.__pad_144 = 0; /*0x762311*/
    *(unsigned int *)&g_AsyncMovieState.__pad_144[4] = 0; /*0x76233b*/
    *(unsigned int *)&g_AsyncMovieState.__pad_144[8] = -1035468800; /*0x762340*/
    g_AsyncMovieState.field_150 = 0; /*0x762346*/
    *(unsigned int *)g_AsyncMovieState.__pad_154 = 0; /*0x762370*/
    g_AsyncMovieState.field_158 = 1112014848; /*0x762375*/
    g_AsyncMovieState.field_15C = 0; /*0x76237b*/
    g_AsyncMovieState.field_160 = 0; /*0x7623a5*/
    *(unsigned int *)g_AsyncMovieState.__pad_164 = -1035468800; /*0x7623aa*/
    *(unsigned int *)&g_AsyncMovieState.__pad_164[4] = 0; /*0x7623b0*/
    v50 = 0.0; /*0x7623b6*/
    v51 = 50.0; /*0x7623c2*/
    v52 = 0.0; /*0x7623ce*/
    *(unsigned int *)&g_AsyncMovieState.__pad_164[8] = 0; /*0x7623df*/
    *(unsigned int *)&g_AsyncMovieState.__pad_164[12] = 1112014848; /*0x7623e4*/
    *(unsigned int *)&g_AsyncMovieState.__pad_164[16] = 0; /*0x7623ea*/
    atexit(nullsub_47); /*0x7623f0*/
  }
  v4 = *((unsigned int *)this + 44); /*0x7623fb*/
  v5 = flt_7F6BB4[v4]; /*0x762406*/
  a1 = *a2; /*0x76240d*/
  v55 = *(AbstractClass **)a3; /*0x76241b*/
  v6 = a2[2]; /*0x762426*/
  v57 = a2[1]; /*0x762429*/
  v58 = v6; /*0x76242d*/
  LODWORD(v7) = Math::RoundToInt(v5); /*0x76243b*/
  v8 = *(AbstractClass **)(a3 + 4); /*0x762440*/
  v50 = v7; /*0x762443*/
  v62 = v8; /*0x762447*/
  LODWORD(v51) = Math::RoundToInt(v5); /*0x76245e*/
  LODWORD(v53) = *(unsigned int *)(a3 + 8); /*0x762465*/
  v9 = Math::RoundToInt(v5); /*0x762477*/
  var94 = (AbstractClass *)LODWORD(v50); /*0x76248a*/
  v59 = (AbstractClass *)LODWORD(v51); /*0x76248e*/
  v61 = (AbstractClass *)v9; /*0x762492*/
  if ( !v4 ) /*0x762496*/
    v61 = (AbstractClass *)(v9 + 50); /*0x76249b*/
  if ( v4 == 3 ) /*0x7624a2*/
    v61 = (AbstractClass *)((char *)v61 + 50); /*0x7624a4*/
  st7_7a = flt_7F6BB4[v4]; /*0x7624a9*/
  a1 = (AbstractClass *)Math::RoundToInt(st7_7a); /*0x7624fd*/
  v57 = (AbstractClass *)Math::RoundToInt(st7_7a); /*0x762507*/
  v58 = (AbstractClass *)Math::RoundToInt(st7_7a); /*0x76251c*/
  *(float *)&v62 = Math::Sqrt( /*0x76255a*/
                     (double)((char *)v57 - (char *)v59) * (double)((char *)v57 - (char *)v59)
                   + (double)((char *)a1 - (char *)var94) * (double)((char *)a1 - (char *)var94));
  LODWORD(v53) = (char *)v58 - (char *)v61; /*0x762570*/
  v51 = (float)((char *)v57 - (char *)v59); /*0x762574*/
  st6_7a = (double)((char *)v58 - (char *)v61); /*0x762578*/
  v52 = st6_7a; /*0x76257c*/
  v12 = Math::Sqrt(v51 * v51 + st6_7a * st6_7a + (double)((char *)a1 - (char *)var94) /*0x76259d*/
                                               * (double)((char *)a1 - (char *)var94));
  v55 = (AbstractClass *)Math::RoundToInt(v12); /*0x7625ae*/
  *((unsigned int *)this + 45) = a1; /*0x7625bb*/
  *((unsigned int *)this + 46) = v57; /*0x7625c1*/
  *((unsigned int *)this + 47) = v58; /*0x7625c8*/
  (*(void (**)(unsigned int *, unsigned int *))(*(unsigned int *)this + 1744))(this, (unsigned int *)this + 45); /*0x7625cf*/
  v10 = var94; /*0x7625d5*/
  v11 = v59; /*0x7625d9*/
  *((unsigned int *)this + 82) = 4; /*0x7625e3*/
  *((unsigned int *)this + 48) = v10; /*0x7625ed*/
  v15 = v61; /*0x7625ef*/
  *((unsigned int *)this + 49) = v11; /*0x7625f3*/
  *((unsigned int *)this + 83) = (unsigned int *)this + 96; /*0x7625fc*/
  *((unsigned int *)this + 50) = v15; /*0x762602*/
  Coord::To_Screen(*(unsigned int **)&MEMORY[0x87F8E4].__pad_5568[9432], &a1, (IUnknown *)((unsigned int *)this + 51)); /*0x762617*/
  Coord::To_Screen(*(unsigned int **)&MEMORY[0x87F8E4].__pad_5568[9432], &var94, (IUnknown *)((unsigned int *)this + 53)); /*0x76262e*/
  LODWORD(v53) = Math::RoundToInt(*(float *)&v62); /*0x76263c*/
  v16 = (double)SLODWORD(v53); /*0x762646*/
  v17 = 48 * *((unsigned int *)this + 44); /*0x76264d*/
  v77 = v16 + *(float *)&g_AsyncMovieState.__pad_A8[v17 + 16]; /*0x762658*/
  v78 = *(AbstractClass **)(v17 + 11820196); /*0x76266c*/
  v18 = *(float *)(v17 + 11820200); /*0x762673*/
  var6C = v77; /*0x762680*/
  v79 = v18; /*0x762684*/
  v70 = v78; /*0x762692*/
  v71 = (AbstractClass *)LODWORD(v79); /*0x762696*/
  v74 = v16 + *(float *)(v17 + 11820204); /*0x7626a0*/
  v75 = *(AbstractClass **)(v17 + 11820208); /*0x7626ae*/
  v19 = *(float *)(v17 + 11820212); /*0x7626b2*/
  v63 = (AbstractClass *)LODWORD(v74); /*0x7626bc*/
  v76 = v19; /*0x7626c0*/
  v64 = v75; /*0x7626c8*/
  v65 = (AbstractClass *)LODWORD(v76); /*0x7626cc*/
  v80 = *(float *)(v17 + 11820216); /*0x7626d6*/
  v82 = *(AbstractClass **)(v17 + 11820220); /*0x7626ee*/
  v20 = *(float *)(v17 + 11820224); /*0x7626f5*/
  var60 = v80; /*0x762702*/
  var34 = v20; /*0x762706*/
  v73 = v82; /*0x762714*/
  var58 = var34; /*0x762718*/
  v50 = *(float *)(v17 + 11820228); /*0x762726*/
  v51 = *(float *)(v17 + 11820232); /*0x762734*/
  v21 = *(float *)(v17 + 11820236); /*0x762738*/
  v66 = (AbstractClass *)LODWORD(v50); /*0x76273e*/
  v52 = v21; /*0x76274c*/
  v22 = (double)((char *)v61 - (char *)v58); /*0x762758*/
  v23 = (double)(int)v55; /*0x76275c*/
  v24 = (double)(int)v58; /*0x762760*/
  v67 = (AbstractClass *)LODWORD(v51); /*0x762779*/
  *(float *)&v71 = v77 * v22 / v23 + v24; /*0x762790*/
  *(float *)&v65 = v74 * v22 / v23 + v24; /*0x76279e*/
  var58 = v80 * v22 / v23 + v24; /*0x7627af*/
  *(float *)&v68 = v50 * v22 / v23 + v24; /*0x7627bd*/
  v25 = (double)((char *)var94 - (char *)a1); /*0x7627c7*/
  v50 = v25; /*0x7627cb*/
  v53 = v25; /*0x7627d9*/
  v26 = Math::Sqrt((double)((char *)v59 - (char *)v57) * (double)((char *)v59 - (char *)v57) + v50 * v50); /*0x7627f2*/
  v27 = v53; /*0x7627f7*/
  if ( v26 < v53 ) /*0x762807*/
    v27 = v26; /*0x76280b*/
  if ( -v27 > v26 ) /*0x762818*/
    v27 = -v26; /*0x76281e*/
  v53 = Math::ArcTan2_Table(v27 / v26); /*0x762837*/
  if ( (int)v57 > (int)v59 ) /*0x762840*/
    v53 = -v53; /*0x762848*/
  Matrix3x4::Identity(v83); /*0x762853*/
  v49 = v53; /*0x762864*/
  Matrix2D::Rotate((float *)v83, v49); /*0x762867*/
  v28 = TransformMatrix3x4Point(&v50, (float *)v83, &var6C); /*0x76287c*/
  var6C = *v28; /*0x762883*/
  v70 = (AbstractClass *)*((unsigned int *)v28 + 1); /*0x76288f*/
  v71 = (AbstractClass *)*((unsigned int *)v28 + 2); /*0x7628a1*/
  eax13b = (AbstractClass **)TransformMatrix3x4Point(&v50, (float *)v83, (float *)&v63); /*0x7628a5*/
  v63 = *eax13b; /*0x7628ac*/
  v64 = eax13b[1]; /*0x7628b3*/
  v65 = eax13b[2]; /*0x7628c2*/
  v30 = TransformMatrix3x4Point(&v50, (float *)v83, &var60); /*0x7628ce*/
  var60 = *v30; /*0x7628d5*/
  v73 = (AbstractClass *)*((unsigned int *)v30 + 1); /*0x7628e1*/
  var58 = v30[2]; /*0x7628f3*/
  eax13d = (AbstractClass **)TransformMatrix3x4Point(&v50, (float *)v83, (float *)&v66); /*0x7628f7*/
  v32 = (double)(int)a1; /*0x7628fc*/
  v66 = *eax13d; /*0x762902*/
  v67 = eax13d[1]; /*0x76290f*/
  v68 = eax13d[2]; /*0x762916*/
  v29 = (AbstractClass *)Math::RoundToInt(v32); /*0x762923*/
  *(float *)&v55 = (float)(int)v57; /*0x762925*/
  LODWORD(v51) = Math::RoundToInt(v32); /*0x762936*/
  v34 = Math::RoundToInt(v32); /*0x76293a*/
  v35 = v51; /*0x76293f*/
  *((unsigned int *)this + 63) = v29; /*0x762951*/
  *((float *)this + 64) = v35; /*0x762953*/
  *((unsigned int *)this + 65) = v34; /*0x762956*/
  v31 = (AbstractClass *)Math::RoundToInt(v32); /*0x762966*/
  LODWORD(v51) = Math::RoundToInt(v32); /*0x762971*/
  v37 = Math::RoundToInt(v32); /*0x762975*/
  *((unsigned int *)this + 66) = v31; /*0x762980*/
  *((float *)this + 67) = v51; /*0x762990*/
  *((unsigned int *)this + 68) = v37; /*0x762993*/
  v33 = (AbstractClass *)Math::RoundToInt(v32); /*0x7629a3*/
  LODWORD(v51) = Math::RoundToInt(v32); /*0x7629ae*/
  v39 = Math::RoundToInt(v32); /*0x7629b2*/
  v40 = v51; /*0x7629b7*/
  v41 = v32 + *(float *)&v66; /*0x7629c1*/
  *((unsigned int *)this + 69) = v33; /*0x7629c5*/
  *((float *)this + 70) = v40; /*0x7629c7*/
  *((unsigned int *)this + 71) = v39; /*0x7629ca*/
  v36 = (AbstractClass *)Math::RoundToInt(v41); /*0x7629da*/
  LODWORD(v51) = Math::RoundToInt(*(float *)&v55 + *(float *)&v67); /*0x7629e5*/
  v43 = Math::RoundToInt(*(float *)&v68); /*0x7629e9*/
  v44 = v51; /*0x7629ee*/
  *((unsigned int *)this + 72) = v36; /*0x7629f8*/
  *((float *)this + 73) = v44; /*0x762a06*/
  *((unsigned int *)this + 74) = v43; /*0x762a09*/
  Coord::To_Screen(*(unsigned int **)&MEMORY[0x87F8E4].__pad_5568[9432], (unsigned int *)this + 63, (IUnknown *)((unsigned int *)this + 55)); /*0x762a12*/
  Coord::To_Screen(*(unsigned int **)&MEMORY[0x87F8E4].__pad_5568[9432], (unsigned int *)this + 66, (IUnknown *)((unsigned int *)this + 57)); /*0x762a2b*/
  Coord::To_Screen(*(unsigned int **)&MEMORY[0x87F8E4].__pad_5568[9432], (unsigned int *)this + 69, (IUnknown *)((unsigned int *)this + 59)); /*0x762a44*/
  Coord::To_Screen(*(unsigned int **)&MEMORY[0x87F8E4].__pad_5568[9432], (unsigned int *)this + 72, (IUnknown *)((unsigned int *)this + 61)); /*0x762a5d*/
  v45 = (unsigned int *)*((unsigned int *)this + 83); /*0x762a62*/
  *v45 = *((unsigned int *)this + 55); /*0x762a6a*/
  v45[1] = *((unsigned int *)this + 56); /*0x762a6f*/
  v46 = *((unsigned int *)this + 83); /*0x762a72*/
  *(unsigned int *)(v46 + 8) = *((unsigned int *)this + 57); /*0x762a7a*/
  *(unsigned int *)(v46 + 12) = *((unsigned int *)this + 58); /*0x762a80*/
  v47 = *((unsigned int *)this + 83); /*0x762a83*/
  *(unsigned int *)(v47 + 16) = *((unsigned int *)this + 61); /*0x762a8f*/
  *(unsigned int *)(v47 + 20) = *((unsigned int *)this + 62); /*0x762a98*/
  result = *((unsigned int *)this + 83); /*0x762a9b*/
  *(unsigned int *)(result + 24) = *((unsigned int *)this + 59); /*0x762aa7*/
  *(unsigned int *)(result + 28) = *((unsigned int *)this + 60); /*0x762ab5*/
  qmemcpy((unsigned int *)this + 118, (const void *)(*((unsigned int *)this + 117) + 928), 0x18u); /*0x762aca*/
  return result; /*0x762acc*/

}
}
// 0x762AF0
namespace gamemd {
DynamicVectorClass_flat * * Voxel::TransformMatrix()
{

  int v2; // eax
  int v3; // ebx
  int v4; // edi
  int v5; // eax
  int v6; // edi
  int v7; // ebp
  int v8; // ebx
  unsigned int *v9; // eax
  int v10; // ebx
  int v11; // ebp
  double v12; // st7
  int v13; // ecx
  int v14; // edi
  int v15; // eax
  int *v16; // eax
  int v17; // edi
  int v18; // eax
  int *v19; // eax
  int v20; // edi
  int v21; // eax
  int *v22; // eax
  double v23; // st7
  double v24; // st7
  double v25; // st7
  int v26; // edi
  int v27; // eax
  unsigned int *v28; // ecx
  double v29; // st7
  int v30; // edi
  int v31; // eax
  int v32; // edx
  double v33; // st7
  char v35; // c0
  int v37; // edi
  int v38; // eax
  int v39; // ecx
  double v40; // st7
  int v41; // edi
  int v42; // eax
  int v43; // edx
  double v44; // st7
  double v45; // st7
  int v46; // edi
  int v47; // eax
  unsigned int *v48; // ecx
  double v49; // st7
  int v50; // edi
  int v51; // eax
  int v52; // edx
  double v53; // st7
  int v54; // edi
  int v55; // eax
  int v56; // ecx
  double v57; // st7
  char v59; // c0
  int v60; // edi
  int v61; // eax
  int v62; // ecx
  double v63; // st7
  int v64; // edi
  int v65; // eax
  int v66; // edx
  double v67; // st7
  int v68; // edi
  int v69; // eax
  int v70; // ecx
  int v71; // [esp+20h] [ebp-1Ch] BYREF
  int v72; // [esp+24h] [ebp-18h]
  int v73; // [esp+28h] [ebp-14h]
  int v74; // [esp+2Ch] [ebp-10h]
  unsigned char v75[12]; // [esp+30h] [ebp-Ch] BYREF

  if ( *(double *)((char *)this + 312) - *(double *)((char *)this + 320) > 0.1 && !*((unsigned int *)this + 44) ) /*0x762b18*/
    *((unsigned char *)this + 301) = 1; /*0x762b22*/
  if ( *((unsigned int *)this + 76) == (unsigned int)Math::RoundToInt(1.0 / 0.050000001) && *((unsigned int *)this + 44) == 3 ) /*0x762b49*/
  {
    v2 = *((unsigned int *)this + 77); /*0x762b4b*/
    *((unsigned int *)this + 76) = 64; /*0x762b51*/
    *((unsigned int *)this + 77) = v2 + 1; /*0x762b5c*/
  }
  v3 = *((unsigned int *)this + 43); /*0x762b62*/
  if ( !v3 ) /*0x762b6a*/
    goto LABEL_13; /*0x762b6a*/
  v4 = *((unsigned int *)this + 117); /*0x762b70*/
  if ( !v4 ) /*0x762b78*/
    goto LABEL_13; /*0x762b78*/
  if ( *((unsigned int *)this + 76) == (unsigned int)Math::RoundToInt(1.0 / 0.050000001) ) /*0x762b95*/
    goto LABEL_13; /*0x762b95*/
  if ( *(unsigned int *)(v4 + 692) != v3 ) /*0x762ba1*/
    goto LABEL_13; /*0x762ba1*/
  if ( *((unsigned int *)this + 44) != 3 ) /*0x762bae*/
  {
    v5 = v4 + 156; /*0x762bc0*/
    v6 = *(unsigned int *)(v4 + 156); /*0x762bc4*/
    v7 = *(unsigned int *)(v5 + 4); /*0x762bc6*/
    v8 = *(unsigned int *)(v5 + 8); /*0x762bc9*/
    v9 = (unsigned int *)(*(int (**)(unsigned int, unsigned char *))(**(unsigned int **)((char *)this + 172) + 88))( /*0x762bd1*/
                     *((unsigned int *)this + 43),
                     v75);
    v10 = v8 - v9[2]; /*0x762bdb*/
    v72 = v6 - *v9; /*0x762bdd*/
    v11 = v7 - v9[1]; /*0x762be4*/
    v74 = v10; /*0x762be6*/
    v73 = v11; /*0x762bea*/
    v12 = Math::Sqrt((double)v72 * (double)v72 + (double)v10 * (double)v10 + (double)v11 * (double)v11); /*0x762c16*/
    v71 = Math::RoundToInt(v12); /*0x762c23*/
    if ( MEMORY[0xB45D80] * 6.0 < (double)v71 ) /*0x762c3e*/
    {
LABEL_13:
      *((unsigned char *)this + 300) = 0; /*0x762c40*/
      *((unsigned char *)this + 301) = 1; /*0x762c47*/
    }
  }
  if ( *((unsigned char *)this + 300) ) /*0x762c4e*/
  {
    if ( *((unsigned int *)this + 44) != 3 ) /*0x762c69*/
      goto LABEL_21; /*0x762c69*/
    v13 = *((unsigned int *)this + 43); /*0x762c6f*/
    if ( v13 && (*(int (**)(int))(*(unsigned int *)v13 + 44))(v13) == 1 ) /*0x762c81*/
    {
      v14 = *((unsigned int *)this + 43); /*0x762c97*/
      v15 = (*(int (**)(unsigned int, unsigned char *, unsigned int, unsigned int, unsigned int))(**(unsigned int **)((char *)this + 468) + 176))( /*0x762ca9*/
              *((unsigned int *)this + 117),
              v75,
              0,
              0,
              0);
      v16 = (int *)(*(int (**)(int, int *, int))(*(unsigned int *)v14 + 88))(v14, &v71, v15); /*0x762cb9*/
      Voxel::LightRender((unsigned int *)this, v16, 0); /*0x762cbf*/
      goto LABEL_22; /*0x762cc4*/
    }
    if ( *((unsigned int *)this + 44) == 3 ) /*0x762ccf*/
    {
      v17 = *((unsigned int *)this + 117); /*0x762cd7*/
      v18 = (*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 172) + 88))(*((unsigned int *)this + 43)); /*0x762ce8*/
      v19 = (int *)(*(int (**)(int, int *, unsigned int, unsigned int, unsigned int, unsigned int, int))(*(unsigned int *)v17 + 176))( /*0x762d05*/
                     v17,
                     &v71,
                     0,
                     0,
                     0,
                     0,
                     v18);
      Voxel::LightRender((unsigned int *)this, v19, (int)v75); /*0x762d0e*/
    }
    else
    {
LABEL_21:
      v20 = *((unsigned int *)this + 117); /*0x762d1b*/
      v21 = (*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 172) + 88))(*((unsigned int *)this + 43)); /*0x762d2c*/
      v22 = (int *)(*(int (**)(int, int *, unsigned int, unsigned int, unsigned int, unsigned int, int))(*(unsigned int *)v20 + 176))( /*0x762d49*/
                     v20,
                     &v71,
                     0,
                     0,
                     0,
                     0,
                     v21);
      Voxel::SectionProject((unsigned int *)this, v22, (int)v75); /*0x762d52*/
    }
  }
LABEL_22:
  v23 = *(double *)((char *)this + 312); /*0x762d57*/
  if ( *((unsigned int *)this + 44) != 3 ) /*0x762d6c*/
  {
    if ( v23 < 1.0 && *((unsigned char *)this + 300) ) /*0x762f69*/
    {
      v44 = *(double *)((char *)this + 312) + 0.050000001; /*0x762f7d*/
      *(double *)((char *)this + 312) = v44; /*0x762f83*/
      if ( v44 > 0.98 ) /*0x762f94*/
      {
        *((unsigned int *)this + 78) = 0; /*0x762f96*/
        *((unsigned int *)this + 79) = 1072693248; /*0x762fa0*/
      }
      v45 = *(double *)((char *)this + 312); /*0x762faa*/
      v46 = Math::RoundToInt(v45); /*0x762fd5*/
      v47 = Math::RoundToInt(v45); /*0x762fe3*/
      v48 = *(unsigned int **)((char *)this + 332); /*0x762fe8*/
      *v48 = v46; /*0x762ff0*/
      v48[1] = v47; /*0x762ff4*/
      v49 = *(double *)((char *)this + 312); /*0x762ff7*/
      v50 = Math::RoundToInt(v49); /*0x763022*/
      v51 = Math::RoundToInt(v49); /*0x763030*/
      v52 = *((unsigned int *)this + 83); /*0x763035*/
      *(unsigned int *)(v52 + 8) = v50; /*0x76303d*/
      *(unsigned int *)(v52 + 12) = v51; /*0x763042*/
      v53 = *(double *)((char *)this + 312); /*0x763045*/
      v54 = Math::RoundToInt(v53); /*0x763070*/
      v55 = Math::RoundToInt(v53); /*0x76307e*/
      v56 = *((unsigned int *)this + 83); /*0x763083*/
      *(unsigned int *)(v56 + 16) = v54; /*0x76308b*/
      *(unsigned int *)(v56 + 20) = v55; /*0x763090*/
    }
    if ( *((unsigned char *)this + 301) && 0.050000001 * 0.5 + *(double *)((char *)this + 312) >= *(double *)((char *)this + 320) ) /*0x7630be*/
    {
      v57 = *(double *)((char *)this + 320) + 0.050000001; /*0x7630ca*/
      *(double *)((char *)this + 320) = v57; /*0x7630d6*/
      if ( !v59 ) /*0x7630e1*/
        return (*(int (**)(int))(*(unsigned int *)this + 248))(this); /*0x7630e1*/
      v60 = Math::RoundToInt(v57); /*0x76311c*/
      v61 = Math::RoundToInt(v57); /*0x76312a*/
      v62 = *((unsigned int *)this + 83); /*0x76312f*/
      *(unsigned int *)(v62 + 24) = v60; /*0x763137*/
      *(unsigned int *)(v62 + 28) = v61; /*0x76313c*/
      v63 = *(double *)((char *)this + 320); /*0x76313f*/
      v64 = Math::RoundToInt(v63); /*0x76316a*/
      v65 = Math::RoundToInt(v63); /*0x763178*/
      v66 = *((unsigned int *)this + 83); /*0x76317d*/
      *(unsigned int *)(v66 + 32) = v64; /*0x763185*/
      *(unsigned int *)(v66 + 36) = v65; /*0x76318a*/
      v67 = *(double *)((char *)this + 320); /*0x76318d*/
      v68 = Math::RoundToInt(v67); /*0x7631b8*/
      v69 = Math::RoundToInt(v67); /*0x7631c6*/
      v70 = *((unsigned int *)this + 83); /*0x7631cb*/
      *(unsigned int *)(v70 + 40) = v68; /*0x7631d3*/
      *(unsigned int *)(v70 + 44) = v69; /*0x7631d8*/
    }
    return Voxel::FaceBlit(this); /*0x7631d8*/
  }
  if ( v23 < 1.0 && *((unsigned char *)this + 300) ) /*0x762d7b*/
  {
    v24 = *(double *)((char *)this + 312) + 0.050000001; /*0x762d8f*/
    *(double *)((char *)this + 312) = v24; /*0x762d95*/
    if ( v24 > 0.98 ) /*0x762da6*/
    {
      *((unsigned int *)this + 78) = 0; /*0x762da8*/
      *((unsigned int *)this + 79) = 1072693248; /*0x762db2*/
    }
    v25 = *(double *)((char *)this + 312); /*0x762dbc*/
    v26 = Math::RoundToInt(v25); /*0x762de7*/
    v27 = Math::RoundToInt(v25); /*0x762df5*/
    v28 = *(unsigned int **)((char *)this + 332); /*0x762dfa*/
    *v28 = v26; /*0x762e02*/
    v28[1] = v27; /*0x762e06*/
    v29 = *(double *)((char *)this + 312); /*0x762e09*/
    v30 = Math::RoundToInt(v29); /*0x762e34*/
    v31 = Math::RoundToInt(v29); /*0x762e42*/
    v32 = *((unsigned int *)this + 83); /*0x762e47*/
    *(unsigned int *)(v32 + 8) = v30; /*0x762e4f*/
    *(unsigned int *)(v32 + 12) = v31; /*0x762e54*/
  }
  if ( !*((unsigned char *)this + 301) || 0.050000001 * 0.5 + *(double *)((char *)this + 312) < *(double *)((char *)this + 320) ) /*0x762e82*/
    return Voxel::FaceBlit(this); /*0x7631dd*/
  v33 = *(double *)((char *)this + 320) + 0.050000001; /*0x762e8e*/
  *(double *)((char *)this + 320) = v33; /*0x762e9a*/
  if ( !v35 ) /*0x762ea5*/
    return (*(int (**)(int))(*(unsigned int *)this + 248))(this); /*0x762eba*/
  v37 = Math::RoundToInt(v33); /*0x762ee0*/
  v38 = Math::RoundToInt(v33); /*0x762eee*/
  v39 = *((unsigned int *)this + 83); /*0x762ef3*/
  *(unsigned int *)(v39 + 16) = v37; /*0x762efb*/
  *(unsigned int *)(v39 + 20) = v38; /*0x762f00*/
  v40 = *(double *)((char *)this + 320); /*0x762f03*/
  v41 = Math::RoundToInt(v40); /*0x762f2e*/
  v42 = Math::RoundToInt(v40); /*0x762f3c*/
  v43 = *((unsigned int *)this + 83); /*0x762f41*/
  *(unsigned int *)(v43 + 24) = v41; /*0x762f4b*/
  *(unsigned int *)(v43 + 28) = v42; /*0x762f50*/
  return Voxel::FaceBlit(this); /*0x762eb3*/

}
}
// 0x763330
namespace gamemd {
int Voxel::freeSectionMemory(unsigned int * a2)
{

  int v3; // ecx
  int v4; // eax
  int v6; // eax
  int v7; // edx

  v3 = *((unsigned int *)this + 2); /*0x763333*/
  if ( *((unsigned int *)this + 4) >= v3 ) /*0x76333b*/
  {
    if ( !*((unsigned char *)this + 13) && v3 ) /*0x763346*/
      return 0; /*0x763346*/
    v4 = *((unsigned int *)this + 5); /*0x763348*/
    if ( v4 <= 0 || !(*(uint8_t (**)(unsigned int *, int, unsigned int))(*(unsigned int *)this + 32))(this, v3 + v4, 0) ) /*0x763358*/
      return 0; /*0x76335f*/
  }
  v6 = *((unsigned int *)this + 4); /*0x763365*/
  v7 = *((unsigned int *)this + 1); /*0x763368*/
  *((unsigned int *)this + 4) = v6 + 1; /*0x76336e*/
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
  IDA_BYTE1(v3) = *((unsigned char *)a1 + 49); /*0x7dfa09*/
  do /*0x7dfa51*/
  {
    *(v8 - 1) = a1[3]; /*0x7dfa0f*/
    *(v8 - 2) = *(v8 - 3); /*0x7dfa15*/
    IDA_LOBYTE(v3) = *((unsigned char *)a1 + 48); /*0x7dfa18*/
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
        IDA_LOWORD(v9) = *((unsigned short *)a1 + 13); /*0x7dfa6b*/
        v15 = v9 << 16; /*0x7dfa6f*/
        v14 = *(int *)((char *)a1 + 42); /*0x7dfa72*/
        IDA_LOWORD(v15) = *((unsigned short *)a1 + 12); /*0x7dfa75*/
        while ( 1 ) /*0x7dfa79*/
        {
          v16 = 0; /*0x7dfa79*/
          if ( !v13 ) /*0x7dfa7e*/
            break; /*0x7dfa7e*/
          IDA_LOBYTE(v16) = *v12; /*0x7dfa80*/
          v17 = v12 + 1; /*0x7dfa82*/
          IDA_LOBYTE(v13) = v13 - v16; /*0x7dfa83*/
          v15 += g_VoxelOffsetTable[v16]; /*0x7dfa85*/
          IDA_BYTE1(v13) = *v17; /*0x7dfa8c*/
          for ( i = v17 + 1; IDA_BYTE1(v13); g_abs_B2FF78[v19] = g_VoxelColorPalette[v20] ) /*0x7dfa91*/
          {
            IDA_LOBYTE(v13) = v13 - 1; /*0x7dfa95*/
            v19 = IDA_HIWORD(v15); /*0x7dfa97*/
            v20 = (uint8_t)i[1]; /*0x7dfa9c*/
            IDA_LOBYTE(v19) = IDA_BYTE1(v15); /*0x7dfa9f*/
            IDA_BYTE1(v20) = g_VoxelShadeTable[v20]; /*0x7dfaa1*/
            IDA_LOBYTE(v20) = *i; /*0x7dfaa7*/
            v15 += v14; /*0x7dfaa9*/
            i += 2; /*0x7dfaab*/
            --IDA_BYTE1(v13); /*0x7dfaae*/
          }
          v12 = i + 1; /*0x7dfabe*/
        }
        v8 = v21; /*0x7dfac1*/
        v3 = v22; /*0x7dfac2*/
      }
      *(v8 - 3) += *(int *)((char *)a1 + 30); /*0x7dfa30*/
      a1[3] += a1[4]; /*0x7dfa36*/
      IDA_LOBYTE(v3) = v3 - 1; /*0x7dfa39*/
    }
    while ( (unsigned char)v3 ); /*0x7dfa3b*/
    *(v8 - 3) = a1[9] + *(v8 - 2); /*0x7dfa43*/
    result = a1[5] + *(v8 - 1); /*0x7dfa49*/
    a1[3] = result; /*0x7dfa4c*/
    --IDA_BYTE1(v3); /*0x7dfa4f*/
  }
  while ( IDA_BYTE1(v3) ); /*0x7dfa51*/
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
  IDA_BYTE1(v3) = *(unsigned char *)(a1 + 49); /*0x7dfb29*/
  do /*0x7dfb72*/
  {
    *(v8 - 1) = *(unsigned int *)(a1 + 12); /*0x7dfb2f*/
    *(v8 - 2) = *(v8 - 3); /*0x7dfb35*/
    IDA_LOBYTE(v3) = *(unsigned char *)(a1 + 48); /*0x7dfb38*/
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
        IDA_LOWORD(v9) = *(unsigned short *)(a1 + 26); /*0x7dfb8b*/
        v15 = v9 << 16; /*0x7dfb8f*/
        v14 = *(unsigned int *)(a1 + 42); /*0x7dfb92*/
        IDA_LOWORD(v15) = *(unsigned short *)(a1 + 24); /*0x7dfb95*/
        while ( v13 ) /*0x7dfb9c*/
        {
          IDA_BYTE1(v13) = *v12; /*0x7dfb9e*/
          for ( i = v12 - 1; IDA_BYTE1(v13); g_abs_B2FF78[v17] = g_VoxelColorPalette[v18] ) /*0x7dfba3*/
          {
            IDA_LOBYTE(v13) = v13 - 1; /*0x7dfba7*/
            v17 = IDA_HIWORD(v15); /*0x7dfba9*/
            v18 = *i; /*0x7dfbae*/
            IDA_LOBYTE(v17) = IDA_BYTE1(v15); /*0x7dfbb0*/
            IDA_BYTE1(v18) = g_VoxelShadeTable[v18]; /*0x7dfbb2*/
            IDA_LOBYTE(v18) = *(i - 1); /*0x7dfbb8*/
            v15 += v14; /*0x7dfbbb*/
            i -= 2; /*0x7dfbbd*/
            --IDA_BYTE1(v13); /*0x7dfbc0*/
          }
          v19 = i - 1; /*0x7dfbd0*/
          v20 = *v19; /*0x7dfbd3*/
          v12 = v19 - 1; /*0x7dfbd5*/
          IDA_LOBYTE(v13) = v13 - v20; /*0x7dfbd6*/
          v15 += g_VoxelOffsetTable[v20]; /*0x7dfbd8*/
        }
        v8 = v21; /*0x7dfbe1*/
        v3 = v22; /*0x7dfbe2*/
      }
      *(v8 - 3) += *(unsigned int *)(a1 + 30); /*0x7dfb51*/
      *(unsigned int *)(a1 + 12) += *(unsigned int *)(a1 + 16); /*0x7dfb57*/
      IDA_LOBYTE(v3) = v3 - 1; /*0x7dfb5a*/
    }
    while ( (unsigned char)v3 ); /*0x7dfb5c*/
    *(v8 - 3) = *(unsigned int *)(a1 + 36) + *(v8 - 2); /*0x7dfb64*/
    result = *(unsigned int *)(a1 + 20) + *(v8 - 1); /*0x7dfb6a*/
    *(unsigned int *)(a1 + 12) = result; /*0x7dfb6d*/
    --IDA_BYTE1(v3); /*0x7dfb70*/
  }
  while ( IDA_BYTE1(v3) ); /*0x7dfb72*/
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
  IDA_LOBYTE(v3) = -1 - *((unsigned char *)a1 + 50); /*0x7dfc1c*/
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
  IDA_BYTE1(v3) = *((unsigned char *)a1 + 49); /*0x7dfc4c*/
  do /*0x7dfc94*/
  {
    *(v8 - 1) = a1[3]; /*0x7dfc52*/
    *(v8 - 2) = *(v8 - 3); /*0x7dfc58*/
    IDA_LOBYTE(v3) = *((unsigned char *)a1 + 48); /*0x7dfc5b*/
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
        IDA_LOWORD(v9) = *((unsigned short *)a1 + 13); /*0x7dfcab*/
        v15 = v9 << 16; /*0x7dfcaf*/
        v14 = *(int *)((char *)a1 + 42); /*0x7dfcb2*/
        IDA_LOWORD(v15) = *((unsigned short *)a1 + 12); /*0x7dfcb5*/
        while ( 1 ) /*0x7dfcb9*/
        {
          v16 = 0; /*0x7dfcb9*/
          if ( !v13 ) /*0x7dfcbe*/
            break; /*0x7dfcbe*/
          IDA_LOBYTE(v16) = *v12; /*0x7dfcc0*/
          v17 = v12 + 1; /*0x7dfcc2*/
          IDA_LOBYTE(v13) = v13 - v16; /*0x7dfcc3*/
          v15 += g_VoxelOffsetTable[v16]; /*0x7dfcc5*/
          IDA_BYTE1(v13) = *v17; /*0x7dfccc*/
          for ( i = v17 + 1; IDA_BYTE1(v13); g_abs_B2FF78[v19] = v20 ) /*0x7dfcd1*/
          {
            IDA_LOBYTE(v13) = v13 - 1; /*0x7dfcd5*/
            v19 = IDA_HIWORD(v15); /*0x7dfcd7*/
            v20 = *i; /*0x7dfcda*/
            IDA_LOBYTE(v19) = IDA_BYTE1(v15); /*0x7dfcdc*/
            ++i; /*0x7dfcde*/
            v15 += v14; /*0x7dfcdf*/
            --IDA_BYTE1(v13); /*0x7dfce1*/
          }
          v12 = i + 1; /*0x7dfceb*/
        }
        v8 = v21; /*0x7dfcee*/
        v3 = v22; /*0x7dfcef*/
      }
      *(v8 - 3) += *(int *)((char *)a1 + 30); /*0x7dfc73*/
      a1[3] += a1[4]; /*0x7dfc79*/
      IDA_LOBYTE(v3) = v3 - 1; /*0x7dfc7c*/
    }
    while ( (unsigned char)v3 ); /*0x7dfc7e*/
    *(v8 - 3) = a1[9] + *(v8 - 2); /*0x7dfc86*/
    result = a1[5] + *(v8 - 1); /*0x7dfc8c*/
    a1[3] = result; /*0x7dfc8f*/
    --IDA_BYTE1(v3); /*0x7dfc92*/
  }
  while ( IDA_BYTE1(v3) ); /*0x7dfc94*/
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
  g_abs_88746C = a1; /*0x754c12*/
  Matrix3D::RotateZ(v5, a1); /*0x754c1c*/
  v3[0] = -0.70710599; /*0x754c2e*/
  v3[1] = -0.70710599; /*0x754c36*/
  v3[2] = 0.0; /*0x754c3e*/
  v1 = (int *)TransformMatrix3x4Point(v4, v5, v3); /*0x754c46*/
  g_abs_887470 = *v1; /*0x754c4d*/
  g_abs_887474 = v1[1]; /*0x754c62*/
  g_abs_887478 = v1[2]; /*0x754c6b*/
  g_abs_887424 = 0; /*0x754c88*/
  v3[0] = *(float *)&g_abs_887470 * -6.0; /*0x754c8e*/
  g_abs_887428 = 0; /*0x754c96*/
  g_abs_887420 = IDA_LODWORD(v3[0]); /*0x754c9b*/
  return 0; /*0x754ca1*/

}
} // namespace gamemd

// 0x75F020
namespace gamemd {
int Voxel::InitDistanceTable()
{

  int v0; // ebp
  int16_t *v1; // edi
  int i; // esi
  double v3; // st7
  int16_t *v4; // esi
  double v5; // st7
  int16_t *v6; // esi
  double v7; // st7
  int *v8; // ecx
  int result; // eax
  int v10; // [esp+1Ch] [ebp-4h]
  int v11; // [esp+1Ch] [ebp-4h]

  byte_B725CC = 1; /*0x75f02d*/
  v0 = 0; /*0x75f034*/
  v1 = g_abs_B4669C; /*0x75f036*/
  do /*0x75f07a*/
  {
    for ( i = 0; i < 300; ++i ) /*0x75f03d*/
    {
      v3 = Math::Sqrt((double)(v0 * v0 + i * i)); /*0x75f057*/
      *v1++ = Math::RoundToInt(v3); /*0x75f064*/
    }
    ++v0; /*0x75f073*/
  }
  while ( (int)v1 < (int)&dword_B725BC ); /*0x75f07a*/
  v4 = g_abs_B46254; /*0x75f07e*/
  v10 = 0; /*0x75f083*/
  do /*0x75f0c5*/
  {
    v5 = Math::SinCos((double)v10 * 0.125); /*0x75f097*/
    *v4++ = Math::RoundToInt(v5 * 12.0 + 0.49); /*0x75f0b4*/
    ++v10; /*0x75f0c1*/
  }
  while ( (int)v4 < (int)g_abs_B4663C ); /*0x75f0c5*/
  v11 = 0; /*0x75f0c7*/
  v6 = g_abs_B45E68; /*0x75f0cb*/
  do /*0x75f10e*/
  {
    v7 = Math::SinCos((double)v11 * 0.1); /*0x75f0e0*/
    *v6++ = Math::RoundToInt(v7 * 12.0 + 0.49); /*0x75f0fd*/
    ++v11; /*0x75f10a*/
  }
  while ( (int)v6 < (int)&g_abs_B46248 ); /*0x75f10e*/
  v8 = g_abs_B46648; /*0x75f110*/
  for ( result = 110; result < 214; result += 8 ) /*0x75f115*/
    *v8++ = result; /*0x75f11a*/
  return result; /*0x75f129*/

}
} // namespace gamemd
