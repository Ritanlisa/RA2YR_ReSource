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
  if ( dword_B1D14C ) /*0x748230*/
  {
    RA2_OPDEL(dword_B1D14C); /*0x748233*/
    dword_B1D14C = 0; /*0x74823b*/
  }
  dword_B1D14C = (unsigned int)(operator new(0x1FFFCu));
  if ( !dword_B1D14C ) /*0x748255*/
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
        *((unsigned short *)dword_B1D14C + v9) = v10; /*0x74831b*/
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
AbstractClass * * Voxel::RenderFrame()
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
    v4 = (unsigned int *)(&unk_B2D824);
    v5 = (char *)&unk_B2D958; /*0x754596*/
    v6 = dword_B2D820; /*0x75459b*/
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
  IDA_LODWORD(v17) = Math::RoundToInt(*(float *)&dword_B2D948 - *(float *)&dword_B2D5E0); /*0x754666*/
  v18 = Math::RoundToInt(*(float *)&dword_B2D94C - *(float *)&dword_B2D5E4); /*0x754668*/
  v19 = 128 - IDA_SLODWORD(v17) / 2; /*0x75467f*/
  IDA_LODWORD(v17) += 8; /*0x754686*/
  IDA_LODWORD(v20) = v18 + 8; /*0x754694*/
  v19 -= 4; /*0x75469a*/
  v26 = 128 - v18 / 2 - 4; /*0x75469d*/
  dword_B2FB64 = v26; /*0x7546a1*/
  dword_B2FB60 = v19; /*0x7546a8*/
  dword_B2FB68 = IDA_LODWORD(v17); /*0x7546b1*/
  dword_B2FB6C = v18 + 8; /*0x7546b9*/
  IDA_LODWORD(v24) = Math::RoundToInt(v25[0]) - IDA_SLODWORD(v17) / 2; /*0x7546c8*/
  v21 = Math::RoundToInt(v25[1]); /*0x7546d9*/
  v25[0] = v24; /*0x7546e8*/
  IDA_LODWORD(v25[1]) = v21 - IDA_SLODWORD(v20) / 2; /*0x7546ec*/
  v25[4] = v17; /*0x7546f4*/
  v25[5] = v20; /*0x7546f8*/
  IDA_LODWORD(v25[2]) = v19; /*0x754707*/
  IDA_LODWORD(v25[3]) = v26; /*0x75470b*/
  qmemcpy(v25, 0x18u); /*0x75470f*/
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

  v84 = dbl_B43F08; /*0x754cbe*/
  v59 = dbl_B44310; /*0x754cd0*/
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
  Matrix3x4::Identity(&unk_B43F10); /*0x754f17*/
  v6 = v59; /*0x754f1c*/
  qmemcpy(&unk_B43F40, (const void *)Matrix3D::Constructor(3.9268751, v59), 0x30u); /*0x754f3c*/
  qmemcpy(&unk_B43F70, (const void *)Matrix3D::Constructor(2.3561251, v6), 0x30u); /*0x754f59*/
  qmemcpy(&unk_B43FA0, (const void *)Matrix3D::Constructor(0.785375, v6), 0x30u); /*0x754f76*/
  qmemcpy(&unk_B43FD0, (const void *)Matrix3D::Constructor(5.4976249, v6), 0x30u); /*0x754f93*/
  v7 = FromQuaternionAxisAngle(v6); /*0x754fa0*/
  Float4::Copy(v52, v7); /*0x754fb0*/
  v8 = FromQuaternionAxisAngle(v6); /*0x754fbe*/
  Float4::Copy(v52, v8); /*0x754fce*/
  v9 = FromQuaternionAxisAngle(v6); /*0x754fdf*/
  Float4::Copy(v52, v9); /*0x754fef*/
  v10 = FromQuaternionAxisAngle(v6); /*0x755000*/
  Float4::Copy(v52, v10); /*0x755010*/
  v11 = v84; /*0x755019*/
  qmemcpy(&unk_B44000, (const void *)Matrix3D::Constructor(3.1415, v84), 0x30u); /*0x755038*/
  qmemcpy(&unk_B44030, (const void *)Matrix3D::Constructor(1.57075, v11), 0x30u); /*0x755055*/
  qmemcpy(&unk_B44060, (const void *)Matrix3D::Constructor(0.0, v11), 0x30u); /*0x75506f*/
  qmemcpy(&unk_B44090, (const void *)Matrix3D::Constructor(4.7122502, v11), 0x30u); /*0x75508c*/
  v12 = FromQuaternionAxisAngle(v11); /*0x755099*/
  Float4::Copy(v52, v12); /*0x7550a9*/
  v13 = FromQuaternionAxisAngle(v11); /*0x7550ba*/
  Float4::Copy(v52, v13); /*0x7550ca*/
  v14 = FromQuaternionAxisAngle(v11); /*0x7550db*/
  Float4::Copy(v52, v14); /*0x7550eb*/
  v15 = FromQuaternionAxisAngle(v11); /*0x7550fc*/
  Float4::Copy(v52, v15); /*0x75510c*/
  qmemcpy(&unk_B440C0, (const void *)Matrix3D::Constructor(3.1415, v11), 0x30u); /*0x75512d*/
  qmemcpy(&unk_B440F0, (const void *)Matrix3D::Constructor(1.57075, v11), 0x30u); /*0x75514a*/
  qmemcpy(&unk_B44120, (const void *)Matrix3D::Constructor(0.0, v11), 0x30u); /*0x755164*/
  qmemcpy(&unk_B44150, (const void *)Matrix3D::Constructor(4.7122502, v11), 0x30u); /*0x755181*/
  v16 = FromQuaternionAxisAngle(v11); /*0x75518e*/
  Float4::Copy(v52, v16); /*0x75519e*/
  v17 = FromQuaternionAxisAngle(v11); /*0x7551af*/
  Float4::Copy(v52, v17); /*0x7551bf*/
  v18 = FromQuaternionAxisAngle(v11); /*0x7551d0*/
  Float4::Copy(v52, v18); /*0x7551e0*/
  v19 = FromQuaternionAxisAngle(v11); /*0x7551f1*/
  Float4::Copy(v52, v19); /*0x755201*/
  qmemcpy(&unk_B44180, (const void *)Matrix3D::Constructor(3.1415, v6), 0x30u); /*0x755221*/
  qmemcpy(&unk_B441B0, (const void *)Matrix3D::Constructor(1.57075, v6), 0x30u); /*0x75523f*/
  qmemcpy(&unk_B441E0, (const void *)Matrix3D::Constructor(0.0, v6), 0x30u); /*0x755259*/
  qmemcpy(&unk_B44210, (const void *)Matrix3D::Constructor(4.7122502, v6), 0x30u); /*0x755276*/
  v20 = FromQuaternionAxisAngle(v6); /*0x755283*/
  Float4::Copy(v52, v20); /*0x755293*/
  v21 = FromQuaternionAxisAngle(v6); /*0x7552a4*/
  Float4::Copy(v52, v21); /*0x7552b4*/
  v22 = FromQuaternionAxisAngle(v6); /*0x7552c5*/
  Float4::Copy(v52, v22); /*0x7552d5*/
  v23 = FromQuaternionAxisAngle(v6); /*0x7552e6*/
  Float4::Copy(v52, v23); /*0x7552f6*/
  Matrix3x4::Identity(&unk_B44240); /*0x755300*/
  Matrix3x4::Identity(&unk_B44270); /*0x75530a*/
  Matrix3x4::Identity(&unk_B442A0); /*0x755314*/
  Matrix3x4::Identity(&unk_B442D0); /*0x75531e*/
  v24 = 0; /*0x755323*/
  Int4::Set2(0, 0, 0, 1065353216); /*0x755332*/
  Int4::Set2(0, 0, 0, 1065353216); /*0x755344*/
  Int4::Set2(0, 0, 0, 1065353216); /*0x755356*/
  Int4::Set2(0, 0, 0, 1065353216); /*0x755368*/
  v59 = 0.0; /*0x75536d*/
  do /*0x755459*/
  {
    Matrix3x4::Identity(v85); /*0x755378*/
    v49 = (double)IDA_SLODWORD(v59) * 0.024542969; /*0x75538f*/
    Matrix2D::Rotate(v49); /*0x755392*/
    v56 = 1065353216; /*0x7553a7*/
    v57 = 0; /*0x7553af*/
    v58 = 0; /*0x7553b7*/
    v25 = &flt_B432D8[v24]; /*0x7553bf*/
    v26 = (float *)TransformMatrix3x4Point(&v56); /*0x7553c5*/
    *v25 = *v26; /*0x7553d4*/
    v27 = *((unsigned int *)v26 + 1); /*0x7553d6*/
    v55 = 0; /*0x7553d9*/
    *((unsigned int *)v25 + 1) = v27; /*0x7553e1*/
    v25[2] = v26[2]; /*0x7553e7*/
    v28 = (float *)((char *)&flt_B444A0 + v24 * 4); /*0x7553f8*/
    *(float *)&v53 = *(float *)(v24 * 4 + 11809500) - 0.0; /*0x7553fa*/
    v29 = 0.0 - flt_B432D8[v24]; /*0x755402*/
    *v28 = *(float *)&v53; /*0x755404*/
    v54 = v29; /*0x755406*/
    v28[1] = v54; /*0x75540e*/
    *((unsigned int *)v28 + 2) = v55; /*0x755415*/
    Math::BuildRotationMatrix((int)&flt_B444A0 + v24 * 4, flt_88746C); /*0x755424*/
    v30 = (float *)TransformMatrix3x4Point(&flt_B432D8[v24]); /*0x755432*/
    v24 += 3; /*0x755439*/
    *v25 = *v30; /*0x75543c*/
    v25[1] = v30[1]; /*0x755441*/
    v25[2] = v30[2]; /*0x755447*/
    ++IDA_LODWORD(v59); /*0x755455*/
  }
  while ( v24 < 768 ); /*0x755459*/
  Matrix3x4::Identity(&unk_B45188); /*0x755464*/
  qmemcpy(&unk_B451B8, (const void *)Matrix3D::Constructor(4.7122502, v6), 0x30u); /*0x755485*/
  qmemcpy(&unk_B451E8, (const void *)Matrix3D::Constructor(3.1415, v6), 0x30u); /*0x7554a2*/
  qmemcpy(&unk_B45218, (const void *)Matrix3D::Constructor(1.57075, v6), 0x30u); /*0x7554bf*/
  qmemcpy(&unk_B45248, (const void *)Matrix3D::Constructor(0.0, v6), 0x30u); /*0x7554d9*/
  qmemcpy(&unk_B45278, (const void *)Matrix3D::Constructor(3.9268751, v11), 0x30u); /*0x7554f6*/
  qmemcpy(&unk_B452A8, (const void *)Matrix3D::Constructor(2.3561251, v11), 0x30u); /*0x755513*/
  qmemcpy(&unk_B452D8, (const void *)Matrix3D::Constructor(0.785375, v11), 0x30u); /*0x755530*/
  qmemcpy(&unk_B45308, (const void *)Matrix3D::Constructor(5.4976249, v11), 0x30u); /*0x75554d*/
  qmemcpy(&unk_B45338, (const void *)Matrix3D::Constructor(3.9268751, v11), 0x30u); /*0x75556a*/
  qmemcpy(&unk_B45368, (const void *)Matrix3D::Constructor(2.3561251, v11), 0x30u); /*0x755586*/
  qmemcpy(&unk_B45398, (const void *)Matrix3D::Constructor(0.785375, v11), 0x30u); /*0x7555a4*/
  qmemcpy(&unk_B453C8, (const void *)Matrix3D::Constructor(5.4976249, v11), 0x30u); /*0x7555c1*/
  qmemcpy(&unk_B453F8, (const void *)Matrix3D::Constructor(3.9268751, v6), 0x30u); /*0x7555de*/
  qmemcpy(&unk_B45428, (const void *)Matrix3D::Constructor(2.3561251, v6), 0x30u); /*0x7555fb*/
  qmemcpy(&unk_B45458, (const void *)Matrix3D::Constructor(0.785375, v6), 0x30u); /*0x755618*/
  qmemcpy(&unk_B45488, (const void *)Matrix3D::Constructor(5.4976249, v6), 0x30u); /*0x755639*/
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
  Matrix3x4::Identity(&unk_B454B8); /*0x755857*/
  Matrix3x4::Identity(&unk_B454E8); /*0x755861*/
  Matrix3x4::Identity(&unk_B45518); /*0x75586b*/
  Matrix3x4::Identity(&unk_B45548); /*0x755875*/
  Int4::Set2(0, 0, 0, 1065353216); /*0x75588a*/
  Int4::Set2(0, 0, 0, 1065353216); /*0x75589f*/
  Int4::Set2(0, 0, 0, 1065353216); /*0x7558b4*/
  Int4::Set2(0, 0, 0, 1065353216); /*0x7558c9*/
  Matrix3x4::Identity(&unk_B44318); /*0x7558d3*/
  v50 = -dbl_B43F00; /*0x7558e6*/
  Matrix3x3::RotateX(v50); /*0x7558e9*/
  v51 = -dbl_B44498; /*0x7558f7*/
  Matrix2D::Rotate(v51); /*0x7558ff*/
  v47 = (int *)&unk_B450B8; /*0x755904*/
  do /*0x755919*/
  {
    result = Matrix3x4::Identity(v47); /*0x75590b*/
    v47 += 12; /*0x755910*/
  }
  while ( (int)v47 < (int)&dword_B45178 ); /*0x755919*/
  dword_B450CC = -1082130432; /*0x75591e*/
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
AbstractClass * * Voxel::SortDepth(ObjectClass * aP1, int a3)
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
  if ( this->u32_10 ) /*0x755dbe*/
    RA2_OPDEL(*(void **)(&this->u32_46)); /*0x755dc6*/
  v5 = *(void **)(&this->q0080); /*0x755dce*/
  this->u32_10 = 0; /*0x755dd1*/
  if ( v5 ) /*0x755dd6*/
    RA2_OPDEL(v5); /*0x755dd9*/
  v6 = *(void **)(&this->q0084); /*0x755de1*/
  this->u32_14 = 0; /*0x755de4*/
  if ( v6 ) /*0x755de9*/
    RA2_OPDEL(v6); /*0x755dec*/
  v7 = aP1; /*0x755df4*/
  this->u32_18 = 0; /*0x755dfb*/
  if ( !(*(int (__thiscall **)(int, int))(aP1->referenceCount)(aP1, 1) ) /*0x755e09*/
    return 0; /*0x755e09*/
  (*(void (__thiscall **)(int, char *, int))(aP1->objectTypeFlags)(aP1, v113, 32); /*0x755e1d*/
  v115 = v115; /*0x755e20*/
  v116 = v116; /*0x755e27*/
  v117 = v117; /*0x755e2e*/
  this->u32_4 = v115; /*0x755e35*/
  this->q008 = v116; /*0x755e3b*/
  this->q00C = v117; /*0x755e42*/
  v11 = operator new(12 * v115); /*0x755e45*/
  v12 = this->q008; /*0x755e4a*/
  this->u32_10 = v11; /*0x755e4d*/
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
      v15 = IDA_LODWORD(v13) + 64; /*0x755e73*/
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
  this->u32_14 = v13; /*0x755e9b*/
  v17 = operator new(this->q00C); /*0x755ea2*/
  v18 = *(void **)(&this->u32_46); /*0x755ea7*/
  this->u32_18 = v17; /*0x755eaf*/
  if ( !v18 ) /*0x755eb2*/
  {
  LABEL_67:
    v71 = *(void **)(&this->q0080); /*0x756453*/
    this->u32_10 = 0; /*0x756456*/
    if ( v71 ) /*0x75645b*/
      RA2_OPDEL(v71); /*0x75645e*/
    v70 = *(void **)(&this->q0084); /*0x756466*/
    this->u32_14 = 0; /*0x756469*/
    if ( !v70 ) /*0x75646e*/
      goto LABEL_71; /*0x75646e*/
    goto LABEL_70; /*0x75646e*/
  }
  if ( !this->u32_14 || !v17 ) /*0x755ec3*/
  {
    RA2_OPDEL(v18); /*0x75644b*/
    goto LABEL_67; /*0x75644b*/
  }
  if ( a3 ) /*0x755ed0*/
  {
    VoxelPalette::Init(&unk_B2FB78, &g_VoxelColorPalette); /*0x755ee7*/
    if ( (*(int (__thiscall **)(int, float *, int))(aP1->objectTypeFlags)(aP1, &v72, 1) != 1 ) /*0x755efd*/
    {
      (*(void (__thiscall **)(int))(aP1->attachedTag)(aP1); /*0x755f03*/
      if ( this->u32_10 ) /*0x755f06*/
        RA2_OPDEL(*(void **)(&this->u32_46)); /*0x755f0e*/
      v19 = *(void **)(&this->q0080); /*0x755f16*/
      this->u32_10 = 0; /*0x755f19*/
      if ( v19 ) /*0x755f1e*/
        RA2_OPDEL(v19); /*0x755f21*/
      v20 = *(void **)(&this->q0084); /*0x755f29*/
      this->u32_14 = 0; /*0x755f2c*/
      if ( !v20 ) /*0x755f31*/
        goto LABEL_32; /*0x755f31*/
      goto LABEL_31; /*0x755f31*/
    }
    if ( (*(int (__thiscall **)(int, char *, int))(aP1->objectTypeFlags)(aP1, v94, 1) != 1 ) /*0x755f46*/
    {
      (*(void (__thiscall **)(int))(aP1->attachedTag)(aP1); /*0x755f4c*/
      if ( this->u32_10 ) /*0x755f4f*/
        RA2_OPDEL(*(void **)(&this->u32_46)); /*0x755f57*/
      v21 = *(void **)(&this->q0080); /*0x755f5f*/
      this->u32_10 = 0; /*0x755f62*/
      if ( v21 ) /*0x755f67*/
        RA2_OPDEL(v21); /*0x755f6a*/
      v20 = *(void **)(&this->q0084); /*0x755f72*/
      this->u32_14 = 0; /*0x755f75*/
      if ( !v20 ) /*0x755f7a*/
        goto LABEL_32; /*0x755f7a*/
  LABEL_31:
      RA2_OPDEL(v20); /*0x755f7c*/
  LABEL_32:
      this->u32_18 = 0; /*0x755f85*/
      VoxelPalette::Reset(v118); /*0x755f8f*/
      return 0; /*0x755fa0*/
    }
    v118[0] = IDA_LOBYTE(v72); /*0x755fb6*/
    v118[1] = (uint8_t)v94[0]; /*0x755fbd*/
    v23 = (char *)&unk_B2FB79; /*0x755fc4*/
    do /*0x755ff6*/
    {
      (*(void (__thiscall **)(int, char *, int))(aP1->objectTypeFlags)(aP1, v23 - 1, 1); /*0x755fd3*/
      (*(void (__thiscall **)(int, char *, int))(aP1->objectTypeFlags)(aP1, v23, 1); /*0x755fdd*/
      (*(void (__thiscall **)(int, char *, int))(aP1->objectTypeFlags)(aP1, v23 + 1, 1); /*0x755fea*/
      v23 += 3; /*0x755fed*/
    }
    while ( v23 < byte_B2FE79 ); /*0x755ff6*/
    if ( v114 > 1 ) /*0x756002*/
      (*(void (__thiscall **)(int, unsigned int, int))(aP1->owningHouseIndex)(aP1, 768 * v114 - 768, 1); /*0x756016*/
    GenerateLightRemapTable(0, 0); /*0x756022*/
    VoxelPalette::Reset(v118); /*0x75602e*/
  }
  else
  {
    (*(void (__thiscall **)(int, unsigned int, int))(aP1->owningHouseIndex)(aP1, 770 * v114, 1); /*0x75604d*/
  }
  if ( !this->u32_4 ) /*0x756055*/
  {
  LABEL_43:
    if ( (*(int (__thiscall **)(int, unsigned int, unsigned int))(aP1->objectTypeFlags)( /*0x7560b5*/
           aP1,
           this->u32_18,
           this->q00C) == this->q00C )
    {
      v28 = this->q008; /*0x75612d*/
      v72 = 0.0; /*0x756134*/
      if ( !v28 ) /*0x756138*/
      {
  LABEL_59:
        (*(void (__thiscall **)(int))(v7->attachedTag)(v7); /*0x7563fe*/
        return 1; /*0x756414*/
      }
      v29 = 0; /*0x75613e*/
      while ( (*(int (__thiscall **)(int, unsigned int *, int))(v7->objectTypeFlags)(v7, v101, 92) == 92 ) /*0x756158*/
      {
        *(unsigned char *)(this->u32_14 + v29 + 160) = v109; /*0x756168*/
        *(unsigned char *)(this->u32_14 + v29 + 161) = v110; /*0x756179*/
        *(unsigned char *)(this->u32_14 + v29 + 162) = v111; /*0x75618a*/
        *(unsigned char *)(this->u32_14 + v29 + 163) = v112; /*0x75619b*/
        *(float *)(this->u32_14 + v29 + 12) = *(float *)&v101[3]; /*0x7561b3*/
        qmemcpy((void *)(this->u32_14 + v29 + 16), (const void *)Matrix::Copy12Float(v102), 0x30u); /*0x7561d2*/
        v103 = v103; /*0x7561d4*/
        v104 = v104; /*0x7561db*/
        v105 = v105; /*0x7561e2*/
        v106 = v106; /*0x7561fe*/
        v106 = v106; /*0x756210*/
        v33 = this->u32_14; /*0x756214*/
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
        v37 = this->u32_14; /*0x756254*/
        v87 = v105; /*0x75625d*/
        v38 = v37 + v29 + 76; /*0x756261*/
        v86 = v86; /*0x756265*/
        *(float *)v38 = v106; /*0x75626b*/
        v87 = v87; /*0x75626d*/
        v98 = v103; /*0x756271*/
        *(float *)(v38 + 4) = v86; /*0x756275*/
        *(float *)(v38 + 8) = v87; /*0x75627a*/
        v41 = this->u32_14; /*0x75627d*/
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
        v45 = this->u32_14; /*0x7562b6*/
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
        v52 = this->u32_14 + v29 + 112; /*0x7562f8*/
        v53 = v48; /*0x7562fc*/
        v51 = v51; /*0x756300*/
        *(float *)v52 = v76; /*0x756304*/
        v54 = v50; /*0x756306*/
        *(float *)(v52 + 4) = v53; /*0x75630c*/
        v80 = v104; /*0x75630f*/
        v55 = v108; /*0x756313*/
        *(float *)(v52 + 8) = v54; /*0x756317*/
        v56 = this->u32_14; /*0x75631a*/
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
        v61 = this->u32_14 + v29 + 136; /*0x75634e*/
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
        v66 = this->u32_14 + v29 + 148; /*0x756380*/
        v65 = v65; /*0x756387*/
        *(float *)v66 = v88; /*0x75638b*/
        v67 = v65; /*0x756391*/
        *(float *)(v66 + 4) = v64; /*0x756395*/
        v7 = aP1; /*0x756398*/
        v29 += 164; /*0x75639f*/
        *(float *)(v66 + 8) = v67; /*0x7563a5*/
        *(unsigned int *)(this->u32_14 + v29 - 164) = this->u32_18 + v101[0]; /*0x7563b7*/
        *(unsigned int *)(this->u32_14 + v29 - 160) = this->u32_18 + v101[1]; /*0x7563cd*/
        v72 = v72; /*0x7563e1*/
        *(unsigned int *)(this->u32_14 + v29 - 156) = this->u32_18 + v101[2]; /*0x7563e7*/
        v69 = this->q008; /*0x7563ee*/
        IDA_LODWORD(v72) = IDA_LODWORD(v72) + 1; /*0x7563f4*/
        if ( IDA_LODWORD(v72) + 1 >= v69 ) /*0x7563f8*/
          goto LABEL_59; /*0x7563f8*/
      }
      if ( this->u32_10 ) /*0x756417*/
        RA2_OPDEL(*(void **)(&this->u32_46)); /*0x75641f*/
      v25 = *(void **)(&this->q0080); /*0x756427*/
      this->u32_10 = 0; /*0x75642a*/
      if ( v25 ) /*0x75642f*/
        goto LABEL_63; /*0x75642f*/
    }
    else
    {
      if ( this->u32_10 ) /*0x7560b7*/
        RA2_OPDEL(*(void **)(&this->u32_46)); /*0x7560c1*/
      v25 = *(void **)(&this->q0080); /*0x7560c9*/
      this->u32_10 = 0; /*0x7560cc*/
      if ( v25 ) /*0x7560d1*/
  LABEL_63:
        RA2_OPDEL(v25); /*0x756431*/
    }
    v70 = *(void **)(&this->q0084); /*0x75643a*/
    this->u32_14 = 0; /*0x75643d*/
    if ( !v70 ) /*0x756442*/
    {
  LABEL_71:
      this->u32_18 = 0; /*0x756479*/
      (*(void (__thiscall **)(int))(v7->attachedTag)(v7); /*0x756480*/
      return 0; /*0x756486*/
    }
  LABEL_70:
    RA2_OPDEL(v70); /*0x756470*/
    goto LABEL_71; /*0x756471*/
  }
  v24 = 0; /*0x756057*/
  while ( (*(int (__thiscall **)(int, char *, int))(aP1->objectTypeFlags)(aP1, v119, 28) == 28 ) /*0x75606d*/
  {
    ++v4; /*0x756079*/
    *(unsigned int *)(this->u32_10 + v24) = v120; /*0x75607a*/
    *(unsigned int *)(this->u32_10 + v24 + 4) = v121; /*0x756087*/
    *(unsigned char *)(this->u32_10 + v24 + 8) = v122; /*0x756095*/
    v24 += 12; /*0x75609c*/
    if ( v4 >= this->u32_4 ) /*0x7560a1*/
      goto LABEL_43; /*0x7560a1*/
  }
  if ( this->u32_10 ) /*0x7560dc*/
    RA2_OPDEL(*(void **)(&this->u32_46)); /*0x7560e6*/
  v26 = *(void **)(&this->q0080); /*0x7560ee*/
  this->u32_10 = 0; /*0x7560f1*/
  if ( v26 ) /*0x7560f6*/
    RA2_OPDEL(v26); /*0x7560f9*/
  v27 = *(void **)(&this->q0084); /*0x756101*/
  this->u32_14 = 0; /*0x756104*/
  if ( v27 ) /*0x756109*/
    RA2_OPDEL(v27); /*0x75610c*/
  this->u32_18 = 0; /*0x756114*/
  (*(void (__thiscall **)(int))(aP1->attachedTag)(aP1); /*0x75611b*/
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
  int v35; // [esp+58h] [ebp+4h]
  float v36; // [esp+5Ch] [ebp+8h]

  v4 = this->u32_14 + 164 * (a2[2] + *(unsigned int *)(this->u32_10 + 12 * a2[1])); /*0x7565b8*/
  v5 = 9 * a2[3]; /*0x7565be*/
  v16 = *(unsigned char *)(v4 + 161); /*0x7565cd*/
  v6 = *(unsigned char *)(v4 + 162); /*0x7565d1*/
  v32 = *(unsigned char *)(v4 + 160); /*0x7565db*/
  v6 = v6; /*0x7565e3*/
  v16 = v16; /*0x7565e7*/
  v6 = v6; /*0x7565eb*/
  v19[0] = *(unsigned int *)v4; /*0x7565f1*/
  v19[1] = *(unsigned int *)(v4 + 4); /*0x7565f8*/
  v7 = 3 * dword_8468C4[v5]; /*0x756605*/
  v19[2] = *(unsigned int *)(v4 + 8); /*0x756608*/
  v8 = (float *)&a2[v7 + 10]; /*0x75660c*/
  v35 = (int)&a2[3 * dword_8468CC[v5] + 10]; /*0x756630*/
  v9 = (int)&a2[3 * dword_8468D0[v5] + 10]; /*0x756637*/
  v10 = dword_8468E0[v5]; /*0x756641*/
  v19[4] = dword_8468DC[v5]; /*0x756647*/
  v9 = v9; /*0x75664f*/
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
    v28 = Math::RoundToInt((v35->vtable3 - v8[2]) / v36 * 256.0); /*0x7567f0*/
    v17 = (float)v6; /*0x756740*/
    v31 = Math::RoundToInt((*(float *)(v9 + 8) - v8[2]) / v17 * 256.0); /*0x75680a*/
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
  unsigned int *v3; // ebx
  unsigned int *v4; // ecx
  int v6; // ecx
  int v7; // eax
  int v8; // ebx
  int v9; // ebp
  unsigned short *v10; // eax
  int v11; // ecx
  int v12; // ebp
  int v13; // ebx
  unsigned short *v14; // eax
  unsigned int *v16; // ebx
  unsigned int *v17; // eax
  unsigned int *v19; // ebp
  unsigned int v20; // ebx
  void *v21; // eax
  int *v22; // eax
  int v23; // edi
  unsigned int *v24; // eax
  int v25; // eax
  unsigned int *v27; // ecx
  int v28; // [esp-4h] [ebp-2Ch]
  int v29; // [esp+Ch] [ebp-1Ch]
  char v30; // [esp+Ch] [ebp-1Ch]
  int16_t v31; // [esp+Eh] [ebp-1Ah]
  int v32; // [esp+10h] [ebp-18h] BYREF
  int v33; // [esp+14h] [ebp-14h]
  int v34; // [esp+18h] [ebp-10h]
  unsigned int v35[3]; // [esp+1Ch] [ebp-Ch] BYREF
  char v36; // [esp+2Ch] [ebp+4h]

  v3 = ((char *)&this->q008 + 2); /*0x75c251*/
  if ( this->u32_28 == g_AsyncMovieState && this->u32_2C == g_MovieFrameState1 && this->u32_30 == g_MovieFrameState2 ) /*0x75c26e*/
  {
    v4 = (unsigned int *)*(unsigned int *)&this->q00C; /*0x75c278*/
    v32 = v4[39]; /*0x75c287*/
    v33 = v4[40]; /*0x75c28e*/
    v34 = v4[41]; /*0x75c295*/
    (*(void (__stdcall **)(int *))(*v4 + 244))(&v32); /*0x75c2a0*/
  }
  else
  {
    (*(void (__stdcall **)(unsigned int *))(*(unsigned int *)*(unsigned int *)&this->q00C + 244))&this->u32_28; /*0x75c276*/
  }
  v36 = 0; /*0x75c2aa*/
  v35[0] = *aP1; /*0x75c2b3*/
  v6 = *aP1; /*0x75c2b7*/
  v35[1] = aP1[1]; /*0x75c2bc*/
  v35[2] = aP1[2]; /*0x75c2c3*/
  if ( v6 == g_AsyncMovieState && aP1[1] == g_MovieFrameState1 && aP1[2] == g_MovieFrameState2 )
  {
    *v3 = *aP1; /*0x75c5b7*/
    this->u32_2C = aP1[1]; /*0x75c5bc*/
    this->u32_30 = aP1[2]; /*0x75c5c2*/
  }
  else
  {
    if ( (*(int (__thiscall **)(unsigned int))(*(unsigned int *)*(unsigned int *)&this->q00C + 388))(*(unsigned int *)&this->q00C) == 8 /*0x75c33c*/
      || (*(int (__thiscall **)(unsigned int))(*(unsigned int *)*(unsigned int *)&this->q00C + 388))(*(unsigned int *)&this->q00C) == 9
      || (*(int (__thiscall **)(unsigned int))(*(unsigned int *)*(unsigned int *)&this->q00C + 388))(*(unsigned int *)&this->q00C) == 7
      || (*(int (__thiscall **)(unsigned int))(*(unsigned int *)*(unsigned int *)&this->q00C + 388))(*(unsigned int *)&this->q00C) == 11
      || (*(int (__thiscall **)(unsigned int))(*(unsigned int *)*(unsigned int *)&this->q00C + 388))(*(unsigned int *)&this->q00C) == 25 )
    {
      v7 = *(unsigned int *)&this->q00C; /*0x75c342*/
      v8 = v7->u32_5A4; /*0x75c345*/
      if ( v8 ) /*0x75c34d*/
      {
        if ( (*(int (__thiscall **)(unsigned int))(*(unsigned int *)v8 + 44))(v7->u32_5A4) == 1 ) /*0x75c359*/
        {
          v31 = aP1[1] / 256; /*0x75c37e*/
          v9 = *aP1 / 256; /*0x75c385*/
          v10 = (unsigned short *)(*(int (__thiscall **)(int, int *))(*(unsigned int *)v8 + 440))(v8, &v32); /*0x75c388*/
          if ( *v10 == (unsigned short)v9 && v10[1] == v31 ) /*0x75c39c*/
            v36 = 1; /*0x75c39e*/
        }
      }
      v11 = *(unsigned int *)(*(unsigned int *)&this->q00C + 1444); /*0x75c3a6*/
      v11 = v11; /*0x75c3ae*/
      if ( v11 ) /*0x75c3b2*/
      {
        if ( (*(int (__thiscall **)(int))(*(unsigned int *)v11 + 44))(v11) == 2 ) /*0x75c3bc*/
        {
          v12 = *aP1 / 256; /*0x75c3e4*/
          v13 = aP1[1] / 256; /*0x75c3e7*/
          v14 = (unsigned short *)(*(int (__thiscall **)(int, int *))(*(unsigned int *)v11 + 440))(v11, &v32); /*0x75c3ea*/
          if ( *v14 == (unsigned short)v12 && v14[1] == (unsigned short)v13 ) /*0x75c3f9*/
            v36 = 1; /*0x75c3fb*/
        }
      }
      v15 = *(unsigned int *)&this->q00C; /*0x75c400*/
      v16 = v15->u32_5A4; /*0x75c403*/
      if ( v16 ) /*0x75c40b*/
      {
        if ( (*(int (__thiscall **)(unsigned int))(*v16 + 44))(v15->u32_5A4) == 6 ) /*0x75c417*/
        {
          v17 = Coord::To_Cell(&MapClass_Instance, aP1); /*0x75c41f*/
          if ( Cell::IsBridge(v17) == v16 ) /*0x75c42d*/
            v36 = 1; /*0x75c42f*/
        }
      }
    }
    v18 = *(unsigned int *)(*(unsigned int *)&this->q00C + 732); /*0x75c439*/
    if ( v18 )
    {
      if ( v18->slaveManager )
      {
        v19 = (unsigned int *)*(unsigned int *)&this->q00C; /*0x75c44b*/
        v32 = 0; /*0x75c44f*/
        v33 = 0; /*0x75c453*/
        Coord::To_Cell(&MapClass_Instance, aP1); /*0x75c463*/
        if ( Object::FindClosestObjectCell(&v32, 0, 0) == v19[183] )
        {
          v20 = v19 ? ((*(int (__thiscall **)(unsigned int *))(*v19 + 44))(v19) == 15 ? (unsigned int)v19 : 0) : 0;
          v21 = Coord::To_Cell(&MapClass_Instance, aP1); /*0x75c49a*/
          if ( (uint8_t)BuildingClass::CheckBridge(v20, v21) ) /*0x75c4b0*/
            v36 = 1; /*0x75c4b9*/
        }
      }
    }
    if ( (*((unsigned int *)Coord::To_Cell(&MapClass_Instance, v35) + 80) & 0x100) == 0 /*0x75c513*/
      || (v22 = (int *)(*(unsigned int *)&this->q00C + 156),
          v32 = *v22,
          v33 = v22[1],
          v23 = v22[2],
          v30 = 1,
          v23 <= 3 * dword_B45C28 + Cell::GetGroundHeight(v35)) )
    {
      v30 = 0; /*0x75c515*/
    }
    Coord::To_Cell(&MapClass_Instance, v35); /*0x75c53a*/
    v24 = (unsigned int *)ObjectPlacement::CalcPosition(&v32, v35, v36, v30, 0); /*0x75c541*/
    v3 = ((char *)&this->q008 + 2); /*0x75c548*/
    this->u32_28 = *v24; /*0x75c54d*/
    this->u32_2C = v24[1]; /*0x75c552*/
    v28 = *(unsigned int *)&this->q00C; /*0x75c55b*/
    this->u32_30 = v24[2]; /*0x75c562*/
    Coord::To_Cell(&MapClass_Instance, ((char *)&this->q008 + 2)); /*0x75c565*/
    if ( !(uint8_t)CrateClass::ProcessPickup(v28) ) /*0x75c56c*/
    {
      v25 = *(unsigned int *)&this->q00C; /*0x75c575*/
      if ( !v25->u8_81 ) /*0x75c578*/
      {
        *v3 = g_AsyncMovieState; /*0x75c58a*/
        this->u32_2C = g_MovieFrameState1; /*0x75c592*/
        this->u32_30 = g_MovieFrameState2; /*0x75c59b*/
        if ( !v25->u8_90 ) /*0x75c59e*/
          return 0; /*0x75c5b0*/
      }
    }
  }
  if ( *v3 == g_AsyncMovieState && v3[1] == g_MovieFrameState1 && v3[2] == g_MovieFrameState2 ) /*0x75c5e7*/
  {
    v27 = (unsigned int *)*(unsigned int *)&this->q00C; /*0x75c602*/
    v32 = v27[39]; /*0x75c611*/
    v33 = v27[40]; /*0x75c618*/
    v34 = v27[41]; /*0x75c61f*/
    (*(void (__thiscall **)(unsigned int *, int *))(*v27 + 240))(v27, &v32); /*0x75c62a*/
    return 0; /*0x75c632*/
  }
  else
  {
    (*(void (__thiscall **)(unsigned int, unsigned int *))(*(unsigned int *)*(unsigned int *)&this->q00C + 240))(*(unsigned int *)&this->q00C, v3); /*0x75c5f1*/
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

  v5 = word_B46254[this->q130 + (uint16_t)word_B4669C[300 * arg8 + abs32(a2 - this->q0CC - aP2)]]; /*0x75ee44*/
  IDA_LODWORD(v5) = (IDA_HIDWORD(v5) ^ v5) - IDA_HIDWORD(v5); /*0x75ee47*/
  v6 = dword_B46648[(unsigned int)v5]; /*0x75ee50*/
  IDA_WORD2(v5) = a4[*(this + (unsigned int)v5 + 130)]; /*0x75ee57*/
  v7 = ((v6 * (uint8_t)((uint8_t)(IDA_WORD2(v5) >> g_BitMask_Green) << g_BitMask_Blue)) >> 8) /*0x75eeb8*/
     + (uint8_t)((uint8_t)(IDA_WORD2(v5) >> g_BitMask_Green) << g_BitMask_Blue);
  v8 = ((v6 * (uint8_t)((uint8_t)(IDA_WORD2(v5) >> g_BitShift_Blue) << g_BitMask_Red)) >> 8) /*0x75eec6*/
     + (uint8_t)((uint8_t)(IDA_WORD2(v5) >> g_BitShift_Blue) << g_BitMask_Red);
  v9 = (uint8_t)((uint8_t)(IDA_WORD2(v5) >> g_BitShift_Red) << g_BitShift_Green_0); /*0x75eec8*/
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
  unsigned int *v5; // eax
  int result; // eax

  v2 = (*(int (__thiscall **)(int))(*(unsigned int *)g_DSurface_Hidden_2 + 116))(g_DSurface_Hidden_2) >> 1; /*0x75f14e*/
  *(&this->WaveClass_field_D47) = -v2; /*0x75f159*/
  *(&this->WaveClass_field_D48) = 1 - v2; /*0x75f164*/
  *(&this->WaveClass_field_D80) = v2 + 1; /*0x75f16a*/
  *(&this->WaveClass_field_D81) = v2; /*0x75f176*/
  *(&this->WaveClass_field_D82) = v2 - 1; /*0x75f17c*/
  v3 = *(&this->WaveClass_field_D85); /*0x75f182*/
  v4 = -1 - v2; /*0x75f188*/
  *(&this->WaveClass_field_E00) = 0; /*0x75f18c*/
  *(&this->WaveClass_field_E01) = 0; /*0x75f192*/
  v5 = this + v3 + 107; /*0x75f198*/
  *(&this->WaveClass_field_D49) = 1; /*0x75f19f*/
  *(&this->WaveClass_field_D83) = -1; /*0x75f1a9*/
  *(&this->WaveClass_field_D84) = v4; /*0x75f1b3*/
  *(&this->WaveClass_field_E02) = *v5; /*0x75f1bb*/
  *(&this->WaveClass_field_E03) = *v5; /*0x75f1c3*/
  *(&this->WaveClass_field_E04) = *v5; /*0x75f1cb*/
  *(&this->WaveClass_field_E05) = *v5; /*0x75f1d3*/
  *(&this->WaveClass_field_E06) = *v5; /*0x75f1db*/
  *(&this->WaveClass_field_E07) = 2 * *v5; /*0x75f1e5*/
  *(&this->WaveClass_field_E08) = 2 * *v5; /*0x75f1ef*/
  *(&this->WaveClass_field_E09) = 2 * *v5; /*0x75f1f9*/
  *(&this->WaveClass_field_E40) = 3 * *v5; /*0x75f204*/
  *(&this->WaveClass_field_E41) = 3 * *v5; /*0x75f20f*/
  result = 3 * *v5; /*0x75f217*/
  this->u32_238 = result; /*0x75f21a*/
  return result; /*0x75f220*/
}
}
// 0x75F4C0
namespace gamemd {
CellStruct * * Voxel::renderSection(ObjectClass * v3)
{
  int16_t *v3; // eax
  int v4; // edx
  unsigned int *v5; // esi
  int v6; // eax
  int v7; // ecx
  int v8; // edx

  v3 = (int16_t *)CellCoord::To_CellObj(&MapClass_Instance, v3); /*0x75f4cd*/
  v4 = *(&this->WaveClass_field_DC4); /*0x75f4d2*/
  v5 = &this->q1F0; /*0x75f4d8*/
  v3 = v3; /*0x75f4de*/
  v6 = (*(int (__thiscall **)(unsigned int *, int16_t **))(v4 + 16))(v5, &v3); /*0x75f4e9*/
  if ( v6 == -1 ) /*0x75f4ef*/
  {
    v7 = v5[2]; /*0x75f4f1*/
    if ( v5[4] < v7 /*0x75f51b*/
      || ((IDA_LOBYTE(v6) = *((unsigned char *)v5 + 13), (unsigned char)v6) || !v7)
      && (v6 = v5[5], v6 > 0)
      && (IDA_LOBYTE(v6) = (*(int (__thiscall **)(unsigned int *, int, unsigned int))(this->WaveIntensity)(v5, v7 + v6, 0), (unsigned char)v6) )
    {
      v6 = v5[4]; /*0x75f51d*/
      v8 = v5[1]; /*0x75f520*/
      v5[4] = v6 + 1; /*0x75f526*/
      *(unsigned int *)(v8 + 4 * v6) = v3; /*0x75f52d*/
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
  uint16_t *v11; // ebx
  int v12; // eax
  int v13; // eax
  int v14; // edi
  int v15; // edx
  unsigned int *v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  uint16_t *v20; // ebx
  int v21; // edi
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
  unsigned int v34; // ebx
  int v35; // eax
  int v36; // ecx
  int v37; // edi
  uint16_t *v38; // ecx
  int v39; // eax
  int v40; // ebp
  int v41; // edi
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
  unsigned int i; // edi
  int k; // [esp+8h] [ebp-3Ch]
  int v54; // [esp+8h] [ebp-3Ch]
  int v55; // [esp+8h] [ebp-3Ch]
  int v56; // [esp+8h] [ebp-3Ch]
  int v57; // [esp+Ch] [ebp-38h]
  int v58; // [esp+10h] [ebp-34h]
  int v59; // [esp+10h] [ebp-34h]
  int v60; // [esp+10h] [ebp-34h]
  int v63; // [esp+14h] [ebp-30h]
  int v64; // [esp+18h] [ebp-2Ch]
  int v65; // [esp+18h] [ebp-2Ch]
  int v66; // [esp+18h] [ebp-2Ch]
  uint16_t *v67; // [esp+18h] [ebp-2Ch]
  int v68; // [esp+18h] [ebp-2Ch]
  int v69; // [esp+1Ch] [ebp-28h]
  int v70; // [esp+20h] [ebp-24h]
  int v71; // [esp+20h] [ebp-24h]
  int v72; // [esp+20h] [ebp-24h]
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
  v74 = (*(int (__thiscall **)(int, unsigned int, unsigned int))(*(unsigned int *)g_DSurface_Hidden_2 + 92))(g_DSurface_Hidden_2, 0, 0); /*0x75fab9*/
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
    ProcessVoxelVertexData(&this->q520, &this->WaveClass_field_1506); /*0x75fb1f*/
    if ( this->q1A8 ) /*0x75fb24*/
    {
      v7 = this->q1A0; /*0x75fb48*/
      v8 = v6 + g_Map_VisibleRect + this->q1A4; /*0x75fb4e*/
      v8 = v8; /*0x75fb50*/
      v9 = v7 + v8 - 1; /*0x75fb54*/
      if ( v9 >= a2[3] + a2[1] ) /*0x75fb5a*/
      {
        v64 = a2[3] + a2[1]; /*0x75fb62*/
        v9 = v64; /*0x75fb66*/
      }
      else
      {
        v64 = v7 + v8 - 1; /*0x75fb5c*/
      }
      Voxel::loadSectionData(); /*0x75fb6a*/
      v10 = this->q1CC; /*0x75fb6f*/
      if ( v10 <= 1 || v10 >= 6 ) /*0x75fb81*/
      {
        v66 = Audio::GetSamplePosition(0, v8 - g_Map_VisibleRect); /*0x75fe6e*/
        v35 = (*(int (__thiscall **)(int))(*(unsigned int *)g_DSurface_Hidden_2 + 124))(g_DSurface_Hidden_2); /*0x75fe74*/
        IDA_HIWORD(v36) = IDA_HIWORD(g_ZBufferDescriptor); /*0x75fe77*/
        v81 = v9 - v8; /*0x75fe88*/
        v72 = *((unsigned int *)g_ZBufferDescriptor + 10); /*0x75fe90*/
        if ( (unsigned int)(v66 + 2 * (v35 + v72 * (v9 - v8 + 1))) >= *((unsigned int *)g_ZBufferDescriptor + 7) ) /*0x75fea6*/
        {
          IDA_LOWORD(v36) = *((unsigned short *)g_ZBufferDescriptor + 18) - v9; /*0x76000b*/
          v46 = v9; /*0x76000e*/
          v56 = v9; /*0x760012*/
          v47 = v36 - v58 - 2; /*0x760016*/
          v88 = v47; /*0x76001b*/
          if ( v9 >= v8 ) /*0x76001f*/
          {
            v73 = 8 * v81; /*0x76002c*/
            do /*0x760149*/
            {
              v48 = v4[1]; /*0x760030*/
              if ( v46 >= v48 + 2 && v46 <= v48 + v4[3] - 2 ) /*0x760047*/
              {
                v49 = (unsigned int *)(this->q1A8 + v73); /*0x760060*/
                v50 = v49[1] + v57; /*0x76006a*/
                if ( v50 >= *v4 + v4[2] - 2 ) /*0x76006e*/
                  v50 = *v4 + v4[2] - 2; /*0x760070*/
                v60 = v57 + *v49; /*0x76007f*/
                if ( v60 <= *v4 + 2 ) /*0x760083*/
                  v60 = *v4 + 2; /*0x760085*/
                v68 = v74 /*0x7600b4*/
                    + 2
                    * (v50
                     + v56
                     * ((*(int (__thiscall **)(int))(*(unsigned int *)g_DSurface_Hidden_2 + 116))(g_DSurface_Hidden_2) >> 1));
                v51 = v56 - g_Map_VisibleRect; /*0x7600c0*/
                v50 = v50; /*0x7600c4*/
                for ( i = abs32(v56 - v6 - this->WaveClass_field_17C); v50 >= v60; v68 -= 2 ) /*0x7600d5*/
                {
                  if ( *(unsigned short *)Audio::GetSamplePosition(v50, v51) > (uint16_t)v88 ) /*0x7600f0*/
                    Voxel::BlendShadowColor(v50, v57, i, v68); /*0x760100*/
                  --v50; /*0x76010e*/
                  --v50; /*0x76010f*/
                }
                v47 = v88; /*0x760122*/
                v8 = v8; /*0x760126*/
                v4 = a2; /*0x76012a*/
                v46 = v56; /*0x76012e*/
              }
              ++v47; /*0x760136*/
              --v46; /*0x760137*/
              v88 = v47; /*0x76013d*/
              v56 = v46; /*0x760141*/
              v73 -= 8; /*0x760145*/
            }
            while ( v46 >= v8 ); /*0x760149*/
          }
        }
        else
        {
          v83 = (*(int (__thiscall **)(int))(*(unsigned int *)g_DSurface_Hidden_2 + 116))(g_DSurface_Hidden_2) >> 1; /*0x75feb9*/
          v37 = v74 + 2 * v9 * v83; /*0x75feca*/
          v90 = (unsigned int *)(this->q1A8 + 8 * v81); /*0x75fed8*/
          v87 = *((unsigned short *)g_ZBufferDescriptor + 18) - v9 - v58 - 2; /*0x75fef0*/
          v38 = (uint16_t *)Audio::GetSamplePosition(0, v9 - g_Map_VisibleRect); /*0x75ff03*/
          v39 = v9; /*0x75ff05*/
          v55 = v9; /*0x75ff09*/
          if ( v9 >= v8 ) /*0x75ff0d*/
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
                v41 = 2 * v40 + v37; /*0x75ff68*/
                v42 = &v38[v40]; /*0x75ff6a*/
                v67 = v42; /*0x75ff76*/
                v43 = v39 - v6 - this->WaveClass_field_17C; /*0x75ff7a*/
                for ( j = (IDA_HIDWORD(v43) ^ v43) - IDA_HIDWORD(v43); v40 >= v59; v67 = v42 ) /*0x75ff87*/
                {
                  if ( *v42 > v87 ) /*0x75ff91*/
                  {
                    Voxel::BlendShadowColor(v40, v57, j, v41); /*0x75ff9d*/
                    v42 = v67; /*0x75ffa2*/
                  }
                  --v42; /*0x75ffaa*/
                  v41 -= 2; /*0x75ffad*/
                  --v40; /*0x75ffb0*/
                }
                v8 = v8; /*0x75ffb9*/
                v39 = v55; /*0x75ffbd*/
                v45 = 2 * v40; /*0x75ffc1*/
                v38 = &v42[v45 / 0xFFFFFFFE]; /*0x75ffc3*/
                v37 = v41 - v45; /*0x75ffc5*/
              }
              --v39; /*0x75ffe6*/
              v37 -= 2 * v83; /*0x75ffe9*/
              ++v87; /*0x75ffec*/
              v90 -= 2; /*0x75fff0*/
              v55 = v39; /*0x75fff4*/
              if ( v39 < v8 ) /*0x75fff8*/
                break; /*0x75fff8*/
              v38 -= v72; /*0x75ff15*/
            }
          }
        }
      }
      else
      {
        v86 = *((unsigned short *)g_ZBufferDescriptor + 18) - v58 - v8 - 2; /*0x75fba4*/
        v11 = (uint16_t *)Audio::GetSamplePosition(0, v8 - g_Map_VisibleRect); /*0x75fbb6*/
        v12 = (*(int (__thiscall **)(int))(*(unsigned int *)g_DSurface_Hidden_2 + 124))(g_DSurface_Hidden_2); /*0x75fbba*/
        v70 = *((unsigned int *)g_ZBufferDescriptor + 10); /*0x75fbc8*/
        if ( (unsigned int)&v11[v12 + v70 * (v9 - v8 + 1)] >= *((unsigned int *)g_ZBufferDescriptor + 7) ) /*0x75fbe7*/
        {
          v27 = v8; /*0x75fd07*/
          v54 = v8; /*0x75fd0d*/
          if ( v8 <= v9 ) /*0x75fd11*/
          {
            v71 = 0; /*0x75fd17*/
            do /*0x75fe44*/
            {
              v28 = v4[1]; /*0x75fd1f*/
              if ( v27 >= v28 + 2 && v27 <= v28 + v4[3] - 2 ) /*0x75fd36*/
              {
                v29 = (unsigned int *)(this->q1A8 + v71); /*0x75fd49*/
                v30 = *v4; /*0x75fd4b*/
                v63 = v57 + v29[1]; /*0x75fd64*/
                if ( v63 >= *v4 + v4[2] - 2 ) /*0x75fd68*/
                  v63 = *v4 + v4[2] - 2; /*0x75fd6a*/
                v31 = v57 + *v29; /*0x75fd74*/
                v32 = v30 + 2; /*0x75fd76*/
                if ( v31 > v30 + 2 ) /*0x75fd7b*/
                  v32 = v31; /*0x75fd7d*/
                v32 = v32; /*0x75fd95*/
                v65 = v74 /*0x75fda3*/
                    + 2
                    * (v32
                     + v27
                     * ((*(int (__thiscall **)(int))(*(unsigned int *)g_DSurface_Hidden_2 + 116))(g_DSurface_Hidden_2) >> 1));
                v33 = v27 - g_Map_VisibleRect; /*0x75fdad*/
                v85 = v27 - g_Map_VisibleRect; /*0x75fdb7*/
                v34 = abs32(v27 - v6 - this->WaveClass_field_17C); /*0x75fdc6*/
                if ( v32 <= v63 ) /*0x75fdca*/
                {
                  while ( 1 ) /*0x75fdd2*/
                  {
                    if ( *(unsigned short *)Audio::GetSamplePosition(v32, v33) > v86 ) /*0x75fdeb*/
                      Voxel::BlendShadowColor(v32, v57, v34, v65); /*0x75fdfb*/
                    ++v32; /*0x75fe09*/
                    ++v32; /*0x75fe0a*/
                    v65 += 2; /*0x75fe17*/
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
          v13 = (*(int (__thiscall **)(int))(*(unsigned int *)g_DSurface_Hidden_2 + 116))(g_DSurface_Hidden_2) >> 1; /*0x75fbf8*/
          v13 = v13; /*0x75fc05*/
          v14 = v74 + 2 * v8 * v13; /*0x75fc09*/
          v15 = v8; /*0x75fc0c*/
          v16 = *(unsigned int **)(&this->WaveClass_field_1544); /*0x75fc10*/
          v16 = v16; /*0x75fc18*/
          for ( k = v8; v15 <= v9; k = v15 ) /*0x75fc20*/
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
              v20 = &v11[v19]; /*0x75fc67*/
              v21 = 2 * v19 + v14; /*0x75fc69*/
              v22 = v15 - v6 - this->WaveClass_field_17C; /*0x75fc7b*/
              v22 = v22; /*0x75fc7c*/
              v24 = v19; /*0x75fc7e*/
              v75 = v19; /*0x75fc82*/
              for ( m = (IDA_HIDWORD(v22) ^ v22) - IDA_HIDWORD(v22); v24 <= v17; v75 = v24 ) /*0x75fc8e*/
              {
                if ( *v20 > v86 ) /*0x75fc98*/
                {
                  Voxel::BlendShadowColor(v24, v57, m, v21); /*0x75fca4*/
                  v24 = v75; /*0x75fca9*/
                }
                ++v20; /*0x75fcb1*/
                v21 += 2; /*0x75fcb4*/
                ++v24; /*0x75fcb7*/
              }
              v9 = v64; /*0x75fcc0*/
              v15 = k; /*0x75fcc4*/
              v26 = 2 * v24; /*0x75fcc8*/
              v11 = &v20[v26 / 0xFFFFFFFE]; /*0x75fcca*/
              v14 = v21 - v26; /*0x75fccc*/
              v13 = v13; /*0x75fcce*/
            }
            v14 += 2 * v13; /*0x75fcd6*/
            v11 += v70; /*0x75fcd9*/
            --v86; /*0x75fce6*/
            v16 = v16 + 2; /*0x75fcee*/
            ++v15; /*0x75fcf1*/
            v16 += 2; /*0x75fcf4*/
          }
        }
      }
    }
    (*(void (__thiscall **)(int))(*(unsigned int *)g_DSurface_Hidden_2 + 96))(g_DSurface_Hidden_2); /*0x760157*/
    if ( this->q1A8 ) /*0x76015a*/
    {
      RA2_OPDEL(*(void **)(&this->WaveClass_field_1544)); /*0x760167*/
      this->q1A8 = 0; /*0x76016f*/
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

  v5 = word_B45E68[*(&this->WaveClass_field_C86) + (uint16_t)word_B4669C[300 * arg8 + abs32(a2 - *(&this->WaveClass_field_C01) - aP2)]]; /*0x7601d9*/
  v6 = (IDA_HIDWORD(v5) ^ v5) - IDA_HIDWORD(v5); /*0x7601dc*/
  if ( v6 >= 9 ) /*0x7601e1*/
    v6 = 9; /*0x7601e3*/
  v7 = a4[*(this + v6 + 130)]; /*0x7601fb*/
  v8 = dword_B46648[v6]; /*0x760256*/
  v9 = (((uint8_t)((uint8_t)(v7 >> g_BitShift_Red) << g_BitShift_Green_0) * (v8 / 2)) >> 8) /*0x76027d*/
     + (uint8_t)((uint8_t)(v7 >> g_BitShift_Red) << g_BitShift_Green_0);
  v10 = 255; /*0x760286*/
  if ( (char)((v8 * (uint8_t)((uint8_t)(v7 >> g_BitShift_Blue) << g_BitMask_Red)) >> 6) /*0x76028b*/
     + (uint8_t)((uint8_t)(v7 >> g_BitShift_Blue) << g_BitMask_Red) <= 255 )
    v10 = (char)((v8 * (uint8_t)((uint8_t)(v7 >> g_BitShift_Blue) << g_BitMask_Red)) >> 6) /*0x76028d*/
        + (uint8_t)((uint8_t)(v7 >> g_BitShift_Blue) << g_BitMask_Red);
  if ( v9 > 255 ) /*0x760295*/
    v9 = 255; /*0x760297*/
  result = v10 >> g_BitMask_Red << g_BitShift_Blue; /*0x7602ba*/
  *a4 = ((int)(uint8_t)((uint8_t)(v7 >> g_BitMask_Green) << g_BitMask_Blue) >> g_BitMask_Blue << g_BitMask_Green) /*0x7602d0*/
      | result
      | (v9 >> g_BitShift_Green_0 << g_BitShift_Red);
  return result; /*0x7602d3*/
}
}
// 0x7609E0
namespace gamemd {
AbstractClass * * Voxel::FaceDraw(unsigned int * a1, WaveClass * aP2)
{
  unsigned int *v3; // ebx
  int v4; // ebp
  int v5; // esi
  int v6; // ebp
  unsigned short *v7; // edi
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
  int16_t v42; // [esp+1Ch] [ebp-2Ch]
  int v43; // [esp+1Ch] [ebp-2Ch]
  int v44; // [esp+1Ch] [ebp-2Ch]
  int v45; // [esp+1Ch] [ebp-2Ch]
  int v47; // [esp+24h] [ebp-24h]
  int v48; // [esp+28h] [ebp-20h]
  int v49; // [esp+2Ch] [ebp-1Ch]
  int v50; // [esp+30h] [ebp-18h]
  int v52; // [esp+38h] [ebp-10h]
  int v54; // [esp+3Ch] [ebp-Ch]
  int v55; // [esp+4Ch] [ebp+4h]
  unsigned int *v56; // [esp+50h] [ebp+8h]

  if ( g_lParam == 2 ) /*0x7609f3*/
  {
    v42 = ZCoordToScreenY(*(&this->WaveClass_field_BC7)); /*0x760a0a*/
    v39 = (*(int (__thiscall **)(int, unsigned int, unsigned int))(*(unsigned int *)g_DSurface_Hidden_2 + 92))(g_DSurface_Hidden_2, 0, 0); /*0x760a1b*/
    if ( v39 ) /*0x760a1f*/
    {
      v47 = aP2[1]; /*0x760a3d*/
      v48 = aP2[3] + v47; /*0x760a45*/
      v50 = *aP2; /*0x760a4c*/
      v49 = *aP2 + aP2[2]; /*0x760a56*/
      v4 = g_Map_VisibleRect + a1[1] - this->WaveClass_field_17C; /*0x760a69*/
      v41 = *a1 - this->WaveClass_field_178; /*0x760a77*/
      ProcessVoxelVertexData(&this->q148, &this->WaveClass_field_D44); /*0x760a7b*/
      if ( this->q1A8 ) /*0x760a80*/
      {
        v5 = v4 + this->q1A4; /*0x760aa0*/
        v36 = this->q1A0 + v5 - 1; /*0x760aaa*/
        if ( v36 >= aP2[3] + aP2[1] ) /*0x760aae*/
          v36 = aP2[3] + aP2[1]; /*0x760ab0*/
        IDA_LOWORD(v4) = *((unsigned short *)g_ZBufferDescriptor + 18) - v42; /*0x760aca*/
        v6 = v4 - v5 - 2; /*0x760ad3*/
        v55 = v6; /*0x760ad6*/
        v7 = (unsigned short *)Audio::GetSamplePosition(0, v5 - g_Map_VisibleRect); /*0x760ae5*/
        v8 = (*(int (__thiscall **)(int))(*(unsigned int *)g_DSurface_Hidden_2 + 124))(g_DSurface_Hidden_2); /*0x760ae9*/
        v52 = *((unsigned int *)g_ZBufferDescriptor + 10); /*0x760aff*/
        if ( (unsigned int)&v7[v8 + v52 * (v36 - v5 + 1)] >= *((unsigned int *)g_ZBufferDescriptor + 7) ) /*0x760b13*/
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
                v24 = (unsigned int *)(this->q1A8 + v38); /*0x760d5a*/
                v25 = *aP2; /*0x760d5c*/
                v44 = v41 + v24[1]; /*0x760d6c*/
                if ( v44 >= aP2[2] + *aP2 - 2 ) /*0x760d70*/
                  v44 = aP2[2] + *aP2 - 2; /*0x760d72*/
                v26 = v25 + 2; /*0x760d78*/
                v27 = v41 + *v24; /*0x760d7b*/
                if ( v27 > v25 + 2 ) /*0x760d7f*/
                  v26 = v27; /*0x760d81*/
                v28 = (*(int (__thiscall **)(int))(*(unsigned int *)g_DSurface_Hidden_2 + 116))(g_DSurface_Hidden_2); /*0x760d8b*/
                v29 = v35 - g_Map_VisibleRect; /*0x760da3*/
                v26 = v26; /*0x760da5*/
                v30 = (unsigned short *)(v39 + 2 * (v26 + v22 * (v28 >> 1))); /*0x760da9*/
                v54 = v35 - g_Map_VisibleRect; /*0x760db2*/
                if ( v26 <= v44 ) /*0x760db6*/
                {
                  v45 = v44 - v26 + 1; /*0x760dbf*/
                  do /*0x760ee0*/
                  {
                    if ( *(unsigned short *)Audio::GetSamplePosition(v26, v29) > (uint16_t)v55 ) /*0x760ddc*/
                    {
                      v31 = this->q1D0; /*0x760deb*/
                      v32 = (uint8_t)((uint8_t)(*v30 >> g_BitShift_Red) << g_BitShift_Green_0) /*0x760e5b*/
                          + (char)(v31 >> 2);
                      v33 = (uint8_t)((uint8_t)(*v30 >> g_BitShift_Blue) << g_BitMask_Red) /*0x760e64*/
                          + ((96 * v31) >> 8);
                      if ( v33 > 255 ) /*0x760e71*/
                        v33 = 255; /*0x760e73*/
                      if ( v32 > 255 ) /*0x760e8d*/
                        v32 = 255; /*0x760e8f*/
                      v29 = v54; /*0x760e9e*/
                      *v30 = (v33 >> g_BitMask_Red << g_BitShift_Blue) /*0x760ec8*/
                           | ((int)(uint8_t)((uint8_t)(*v30 >> g_BitMask_Green) << g_BitMask_Blue) >> g_BitMask_Blue << g_BitMask_Green)
                           | (v32 >> g_BitShift_Green_0 << g_BitShift_Red);
                    }
                    ++v30; /*0x760ed4*/
                    v21 = v45 == 1; /*0x760ed7*/
                    ++v26; /*0x760ed8*/
                    --v45; /*0x760edc*/
                  }
                  while ( !v21 ); /*0x760ee0*/
                }
                v6 = v55; /*0x760ee6*/
                v22 = v35; /*0x760eea*/
              }
              v6 += 0xFFFF; /*0x760ef6*/
              ++v22; /*0x760efc*/
              v55 = v6; /*0x760f02*/
              v35 = v22; /*0x760f06*/
              v38 += 8; /*0x760f0a*/
            }
            while ( v22 <= v36 ); /*0x760f0e*/
          }
        }
        else
        {
          v9 = (*(int (__thiscall **)(int))(*(unsigned int *)g_DSurface_Hidden_2 + 116))(g_DSurface_Hidden_2) >> 1; /*0x760b2a*/
          v9 = v9; /*0x760b2e*/
          v10 = (unsigned short *)(v39 + 2 * v5 * v9); /*0x760b35*/
          v56 = (unsigned int *)this->q1A8; /*0x760b42*/
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
              v14 = &v7[v13]; /*0x760b95*/
              v15 = &v10[v13]; /*0x760b97*/
              v37 = v14; /*0x760b9b*/
              v16 = v13; /*0x760b9f*/
              if ( v13 <= v12 ) /*0x760ba1*/
              {
                v40 = v12 - v13 + 1; /*0x760baa*/
                v43 = v12 + 1; /*0x760bb0*/
                do /*0x760cc2*/
                {
                  if ( *v14 > (uint16_t)v55 ) /*0x760bbc*/
                  {
                    v17 = this->q1D0; /*0x760bcb*/
                    v18 = (uint8_t)((uint8_t)(*v15 >> g_BitShift_Red) << g_BitShift_Green_0) /*0x760c33*/
                        + (char)(v17 >> 2);
                    v19 = (uint8_t)((uint8_t)(*v15 >> g_BitShift_Blue) << g_BitMask_Red) /*0x760c48*/
                        + (char)((3 * v17) >> 3);
                    v20 = 255; /*0x760c4a*/
                    if ( v19 <= 255 ) /*0x760c55*/
                      v20 = v19; /*0x760c57*/
                    if ( v18 > 255 ) /*0x760c6c*/
                      v18 = 255; /*0x760c6e*/
                    v11 = i; /*0x760c7d*/
                    v14 = v37; /*0x760ca3*/
                    *v15 = (v20 >> g_BitMask_Red << g_BitShift_Blue) /*0x760cab*/
                         | ((int)(uint8_t)((uint8_t)(*v15 >> g_BitMask_Green) << g_BitMask_Blue) >> g_BitMask_Blue << g_BitMask_Green)
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
              v7 = &v14[-v16]; /*0x760ccf*/
              v10 = &v15[-v16]; /*0x760cd1*/
              v9 = v9; /*0x760cd3*/
            }
            v10 += v9; /*0x760ce5*/
            v7 += v52; /*0x760ce9*/
            ++v11; /*0x760cf3*/
            v56 += 2; /*0x760cf4*/
            IDA_LOWORD(v55) = v55 - 1; /*0x760cfe*/
          }
        }
      }
      (*(void (__thiscall **)(int))(*(unsigned int *)g_DSurface_Hidden_2 + 96))(g_DSurface_Hidden_2); /*0x760f1c*/
      if ( this->q1A8 ) /*0x760f1f*/
      {
        RA2_OPDEL((void *)this->q1A8); /*0x760f2c*/
        this->q1A8 = 0; /*0x760f34*/
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
  double v4; // st7
  double v5; // st7
  int v6; // eax
  int *v7; // edx
  int v8; // ecx
  int v9; // eax
  int v10; // kr38_4
  int v11; // ebx
  void *v12; // eax
  int v13; // edx
  int *v14; // eax
  unsigned int v15; // edx
  int v16; // eax
  double v17; // st7
  int v18; // eax
  int *v19; // eax
  void *v20; // eax
  int v21; // edx
  double v22; // st7
  int v23; // eax
  int *v24; // eax
  int *v25; // eax
  int v26; // eax
  int v27; // [esp-8h] [ebp-80h]
  int v28; // [esp-8h] [ebp-80h]
  int v29; // [esp-8h] [ebp-80h]
  int v30; // [esp-4h] [ebp-7Ch]
  int v31; // [esp-4h] [ebp-7Ch]
  int v32; // [esp-4h] [ebp-7Ch]
  void *v33; // [esp+10h] [ebp-68h] BYREF
  int v34; // [esp+14h] [ebp-64h] BYREF
  void *v35; // [esp+18h] [ebp-60h] BYREF
  void *v36; // [esp+1Ch] [ebp-5Ch] BYREF
  float v37; // [esp+20h] [ebp-58h]
  int v38; // [esp+24h] [ebp-54h] BYREF
  char v39[4]; // [esp+34h] [ebp-44h] BYREF
  char v40[4]; // [esp+38h] [ebp-40h] BYREF
  char v41[4]; // [esp+3Ch] [ebp-3Ch] BYREF
  double i; // [esp+40h] [ebp-38h]
  int v43; // [esp+48h] [ebp-30h]
  int v44; // [esp+4Ch] [ebp-2Ch]
  int v45; // [esp+50h] [ebp-28h]
  int v46; // [esp+5Ch] [ebp-1Ch]

  v2 = (int *)(&this->q0C46); /*0x761105*/
  (*(void (__thiscall **)(int))(this->q7C0 + 12))(&this->q0C46); /*0x76110d*/
  if ( this->q12C ) /*0x761110*/
  {
    v3 = this->q0B4; /*0x76111e*/
    i = 0.050000001; /*0x76112b*/
    IDA_LOWORD(v35) = v3 / 256; /*0x761146*/
    v4 = 0.050000001 * 0.5 + *(double *)(&this->visibilityFlags2); /*0x761158*/
    IDA_HIWORD(v35) = this->q0B8 / 256; /*0x761167*/
    v33 = v35; /*0x761172*/
    if ( v4 >= 0.050000001 ) /*0x761179*/
    {
      do /*0x76129b*/
      {
        i = i; /*0x76117f*/
        v30 = Math::RoundToInt(i); /*0x7611a8*/
        v27 = Math::RoundToInt(i); /*0x7611c0*/
        v6 = Math::RoundToInt(i); /*0x7611cd*/
        v7 = (int *)Coord3D::Set(v6, v27, v30); /*0x7611e0*/
        v8 = *v7; /*0x7611e2*/
        v9 = v7[1]; /*0x7611e4*/
        v46 = v7[2]; /*0x7611ea*/
        v9 = v9; /*0x7611f7*/
        v11 = v8 / 256; /*0x76120d*/
        v36 = *(void **)CellStruct::Set(v8 / 256, v9 / 256); /*0x76121e*/
        if ( v33 != v36 ) /*0x761222*/
        {
          v33 = *(void **)CellStruct::Set(v11, v9 / 256); /*0x761247*/
          v12 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v33); /*0x76124b*/
          v13 = *v2; /*0x761250*/
          v35 = v12; /*0x761253*/
          if ( (*(int (__thiscall **)(int *, void **))(v13 + 16))(v2, &v35) == -1 ) /*0x761264*/
            Voxel::freeSectionMemory(&v35); /*0x76126d*/
        }
        i = i + 0.050000001; /*0x76127c*/
      }
      while ( 0.050000001 * 0.5 + *(double *)(&this->visibilityFlags2) >= i ); /*0x76129b*/
    }
  }
  else
  {
    v33 = *(void **)CellStruct::Set(this->q0FC / 256, this->q100 / 256); /*0x7612e0*/
    v35 = *(void **)CellStruct::Set(this->q108 / 256, this->q10C / 256); /*0x761312*/
    v14 = (int *)CellStruct::Set(this->q0C0 / 256, this->q0C4 / 256); /*0x76133c*/
    v15 = this->q140; /*0x761349*/
    v34 = *v14; /*0x761355*/
    for ( i = COERCE_DOUBLE(IDA___PAIR64__(this->q144, v15)); /*0x761376*/
          0.050000001 * 0.5 + *(double *)(&this->visibilityFlags2) >= i;
          i = i + 0.050000001 )
    {
      v45 = dword_B46250; /*0x761392*/
      v16 = this->u32_1CC; /*0x761396*/
      v43 = dword_B46248; /*0x76139c*/
      v44 = dword_B4624C; /*0x7613a2*/
      if ( v16 < 4 ) /*0x7613a6*/
      {
        i = i; /*0x7613ac*/
        v31 = Math::RoundToInt(i); /*0x7613d5*/
        v28 = Math::RoundToInt(i); /*0x7613ed*/
        v18 = Math::RoundToInt(i); /*0x7613fa*/
        v19 = (int *)Coord3D::Set(v18, v28, v31); /*0x761408*/
        v43 = *v19; /*0x761411*/
        v44 = v19[1]; /*0x761418*/
        v45 = v19[2]; /*0x76141f*/
        v37 = *(float *)CellStruct::Set(v43 / 256, v44 / 256); /*0x76144f*/
        if ( v33 != (void *)IDA_LODWORD(v37) ) /*0x761453*/
        {
          v33 = *(void **)CellStruct::Set(v43 / 256, v44 / 256); /*0x761498*/
          v20 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v33); /*0x76149c*/
          v21 = *v2; /*0x7614a1*/
          v36 = v20; /*0x7614a4*/
          if ( (*(int (__thiscall **)(int *, void **))(v21 + 16))(v2, &v36) == -1 ) /*0x7614b5*/
            Voxel::freeSectionMemory(&v36); /*0x7614be*/
        }
      }
      i = i; /*0x7614c3*/
      v37 = i; /*0x7614c7*/
      v32 = Math::RoundToInt(i); /*0x7614f0*/
      v29 = Math::RoundToInt(i); /*0x761508*/
      v23 = Math::RoundToInt(i); /*0x761515*/
      v24 = (int *)Coord3D::Set(v23, v29, v32); /*0x761523*/
      v43 = *v24; /*0x76152c*/
      v44 = v24[1]; /*0x761533*/
      v45 = v24[2]; /*0x76153a*/
      v38 = *(unsigned int *)CellStruct::Set(v43 / 256, v44 / 256); /*0x76156e*/
      if ( (uint8_t)Coord::Compare2D(&v38) ) /*0x761572*/
      {
        v34 = *(unsigned int *)Coord::ToCell(v39); /*0x761592*/
        Voxel::renderSection(&v34); /*0x761596*/
      }
      if ( this->u32_1CC >= 4 ) /*0x7615a1*/
      {
        v25 = (int *)Color::RGBFromFloat(&this->q420, v37); /*0x7615b3*/
        v43 = *v25; /*0x7615ba*/
        v44 = v25[1]; /*0x7615c6*/
        v45 = v25[2]; /*0x7615d1*/
        v26 = Coord::ToCell(v40); /*0x7615d5*/
        if ( (uint8_t)Coord::Compare2D(v26) ) /*0x7615df*/
        {
          v35 = *(void **)Coord::ToCell(v41); /*0x7615ff*/
          Voxel::renderSection(&v35); /*0x761603*/
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
  int v6; // eax
  int v7; // eax
  double v8; // st7
  int v9; // esi
  double v11; // st7
  int v12; // ecx
  int v13; // edx
  int v14; // ecx
  int v15; // edx
  double v16; // st7
  int v18; // eax
  double v19; // st5
  double v20; // st6
  double v21; // st6
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
  double v56; // [esp+24h] [ebp-B0h]
  float v57; // [esp+30h] [ebp-A4h]
  int v58; // [esp+34h] [ebp-A0h] BYREF
  int v59; // [esp+38h] [ebp-9Ch]
  int v60; // [esp+3Ch] [ebp-98h]
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
  float v80; // [esp+8Ch] [ebp-48h]
  float v81; // [esp+90h] [ebp-44h]
  float v83; // [esp+98h] [ebp-3Ch]
  float v84; // [esp+9Ch] [ebp-38h]
  char v86[48]; // [esp+A4h] [ebp-30h] BYREF

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
    dword_B45E5C = 1106247680; /*0x7619af*/
    dword_B45E60 = 1112014848; /*0x7619b4*/
    dword_B45E64 = 0; /*0x7619ba*/
    atexit(nullsub_46); /*0x7619c0*/
  }
  v4 = *(&this->uniqueId4); /*0x7619cb*/
  v5 = flt_7F6BB4[v4]; /*0x7619d6*/
  v58 = *a2; /*0x7619dd*/
  v6 = a2[2]; /*0x7619f6*/
  v59 = a2[1]; /*0x7619f9*/
  v60 = v6; /*0x7619fd*/
  v46 = Math::RoundToInt(v5); /*0x761a13*/
  v76 = *(unsigned int *)(a3 + 4); /*0x761a17*/
  v48 = Math::RoundToInt(v5); /*0x761a2e*/
  v7 = Math::RoundToInt(v5); /*0x761a47*/
  v46 = v46; /*0x761a5a*/
  v48 = v48; /*0x761a5e*/
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
  v11 = Math::Sqrt((double)(v10 - v48) * (double)(v10 - v48) + (double)(v9 - v46) * (double)(v9 - v46)); /*0x761b09*/
  v54 = Math::RoundToInt(v11); /*0x761b1a*/
  *(&this->uniqueId5) = v9; /*0x761b27*/
  *(&this->uniqueId6) = v59; /*0x761b2d*/
  *(&this->uniqueId7) = v60; /*0x761b34*/
  this->SetPosition(&this->uniqueId5); /*0x761b3b*/
  v12 = v46; /*0x761b41*/
  v13 = v48; /*0x761b45*/
  *(&this->NeedsSaveOrLink2) = 6; /*0x761b55*/
  *(&this->uniqueId8) = v12; /*0x761b60*/
  v63 = v63; /*0x761b62*/
  *(&this->uniqueId9) = v13; /*0x761b66*/
  *(&this->NeedsSaveOrLink3) = &this->q150; /*0x761b6f*/
  *(&this->abstractFlags0) = v63; /*0x761b75*/
  Coord::To_Screen(&v58, &this->abstractFlags1); /*0x761b83*/
  Coord::To_Screen(&v46, &this->abstractFlags3); /*0x761b9a*/
  v15 = *(&this->NeedsSaveOrLink3); /*0x761b9f*/
  v16 = (double)v54; /*0x761ba7*/
  *(unsigned int *)(v15 + 8) = *(&this->abstractFlags3); /*0x761bab*/
  *(unsigned int *)(v15 + 12) = *(&this->abstractFlags4); /*0x761bb1*/
  v17 = *(&this->NeedsSaveOrLink3); /*0x761bb4*/
  *(unsigned int *)(v17 + 32) = *(&this->abstractFlags1); /*0x761bbc*/
  *(unsigned int *)(v17 + 36) = *(&this->abstractFlags2); /*0x761bc4*/
  v18 = 48 * *(&this->uniqueId4); /*0x761bd2*/
  v77 = v16 + *(float *)&dword_B45DA8[v18 / 4u]; /*0x761bdb*/
  v78 = *(float *)(v18 + 11820460); /*0x761be9*/
  v19 = *(float *)(v18 + 11820464); /*0x761bed*/
  v73 = v77; /*0x761bf7*/
  v19 = v19; /*0x761bfb*/
  v74 = v78; /*0x761c03*/
  v75 = v19; /*0x761c07*/
  v80 = v16 + *(float *)(v18 + 11820468); /*0x761c11*/
  v81 = *(float *)(v18 + 11820472); /*0x761c25*/
  v20 = *(float *)(v18 + 11820476); /*0x761c2c*/
  v64 = v80; /*0x761c39*/
  v20 = v20; /*0x761c3d*/
  v65 = v81; /*0x761c4b*/
  v66 = v20; /*0x761c4f*/
  v83 = *(float *)(v18 + 11820480); /*0x761c59*/
  v84 = *(float *)(v18 + 11820484); /*0x761c6d*/
  v21 = *(float *)(v18 + 11820488); /*0x761c74*/
  v67 = v83; /*0x761c81*/
  v21 = v21; /*0x761c85*/
  v68 = v84; /*0x761c93*/
  v69 = v21; /*0x761c97*/
  v49 = *(float *)(v18 + 11820496); /*0x761cab*/
  v70 = *(float *)(v18 + 11820492); /*0x761cc5*/
  v71 = v49; /*0x761cc9*/
  v22 = (double)(v63 - v60); /*0x761ce7*/
  v23 = (double)v60; /*0x761ceb*/
  v75 = v77 * v22 / v16 + v23; /*0x761d0c*/
  v66 = v80 * v22 / v16 + v23; /*0x761d1d*/
  v69 = v83 * v22 / v16 + v23; /*0x761d2e*/
  v72 = v70 * v22 / v16 + v23; /*0x761d3c*/
  v24 = (double)(v46 - v58); /*0x761d46*/
  v24 = v24; /*0x761d4a*/
  v24 = v24; /*0x761d58*/
  v25 = Math::Sqrt((double)(v48 - v59) * (double)(v48 - v59) + v24 * v24); /*0x761d71*/
  v26 = v24; /*0x761d76*/
  if ( v25 < v24 ) /*0x761d86*/
    v26 = v25; /*0x761d8a*/
  if ( -v26 > v25 ) /*0x761d97*/
    v26 = -v25; /*0x761d9d*/
  Math::ArcTan2_Table(v26 / v25); /*0x761da9*/
  v56 = v25; /*0x761db6*/
  if ( v59 > v48 ) /*0x761dbf*/
    v56 = -v25; /*0x761dc7*/
  Matrix3x4::Identity(v86); /*0x761dd2*/
  v56 = v56; /*0x761de3*/
  Matrix2D::Rotate(v56); /*0x761de6*/
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
  *(&this->nextArrayIndex3) = v32; /*0x761ed0*/
  *(&this->nextArrayIndex4) = v50; /*0x761ed2*/
  *(&this->nextArrayIndex5) = v33; /*0x761ed5*/
  v34 = Math::RoundToInt(v31); /*0x761ee5*/
  v51 = Math::RoundToInt(v31); /*0x761ef0*/
  v35 = Math::RoundToInt(v31); /*0x761ef4*/
  *(&this->nextArrayIndex6) = v34; /*0x761eff*/
  *(&this->nextArrayIndex7) = v51; /*0x761f0f*/
  *(&this->nextArrayIndex8) = v35; /*0x761f12*/
  v36 = Math::RoundToInt(v31); /*0x761f22*/
  v52 = Math::RoundToInt(v31); /*0x761f2d*/
  v37 = Math::RoundToInt(v31); /*0x761f31*/
  v38 = v31 + v70; /*0x761f40*/
  *(&this->nextArrayIndex9) = v36; /*0x761f44*/
  *(&this->referenceCount0) = v52; /*0x761f46*/
  *(&this->referenceCount1) = v37; /*0x761f49*/
  v39 = Math::RoundToInt(v38); /*0x761f59*/
  v53 = Math::RoundToInt(v57 + v71); /*0x761f64*/
  v40 = Math::RoundToInt(v72); /*0x761f68*/
  *(&this->referenceCount2) = v39; /*0x761f77*/
  *(&this->referenceCount3) = v53; /*0x761f85*/
  *(&this->referenceCount4) = v40; /*0x761f88*/
  Coord::To_Screen(&this->q0FC, &this->abstractFlags5); /*0x761f91*/
  Coord::To_Screen(&this->q108, &this->abstractFlags7); /*0x761faa*/
  Coord::To_Screen(&this->q114, &this->abstractFlags9); /*0x761fc3*/
  Coord::To_Screen(&this->q120, &this->nextArrayIndex1); /*0x761fdc*/
  v41 = (unsigned int *)*(&this->NeedsSaveOrLink3); /*0x761fe1*/
  *v41 = *(&this->abstractFlags5); /*0x761fe9*/
  v41[1] = *(&this->abstractFlags6); /*0x761fee*/
  v42 = *(&this->NeedsSaveOrLink3); /*0x761ff1*/
  *(unsigned int *)(v42 + 16) = *(&this->abstractFlags7); /*0x761ff9*/
  *(unsigned int *)(v42 + 20) = *(&this->abstractFlags8); /*0x761fff*/
  v43 = *(&this->NeedsSaveOrLink3); /*0x762002*/
  *(unsigned int *)(v43 + 24) = *(&this->nextArrayIndex1); /*0x76200e*/
  *(unsigned int *)(v43 + 28) = *(&this->nextArrayIndex2); /*0x762017*/
  result = *(&this->NeedsSaveOrLink3); /*0x76201a*/
  *(unsigned int *)(result + 40) = *(&this->abstractFlags9); /*0x762026*/
  *(unsigned int *)(result + 44) = *(&this->nextArrayIndex0); /*0x762034*/
  qmemcpy(&this->q1D8, (const void *)(*(&this->fallRate7) + 928), 0x18u); /*0x762049*/
  return result; /*0x76204b*/
}
}
// 0x762070
namespace gamemd {
AbstractClass * * Voxel::LightRender(AbstractClass ** a2, int a3)
{
  int v4; // esi
  double v5; // st7
  int v6; // eax
  int v7; // eax
  double v8; // st7
  double v9; // st7
  int v10; // ecx
  int v11; // edx
  int v12; // ecx
  double v13; // st7
  double v15; // st6
  double v16; // st7
  double v17; // st7
  double v18; // st7
  double v19; // st6
  double v20; // st5
  double v21; // st7
  double v22; // st7
  double v23; // st6
  float *v24; // eax
  float *v25; // eax
  float *v26; // eax
  float *v27; // eax
  double v28; // st7
  int v29; // esi
  int v30; // eax
  int v31; // esi
  int v32; // eax
  int v33; // esi
  int v34; // eax
  double v35; // st7
  int v36; // esi
  int v37; // eax
  unsigned int *v38; // eax
  int v39; // eax
  int v40; // eax
  int result; // eax
  float v42; // [esp+8h] [ebp-CCh]
  int v43; // [esp+18h] [ebp-BCh]
  float v44; // [esp+18h] [ebp-BCh]
  float v46; // [esp+1Ch] [ebp-B8h]
  int v48; // [esp+1Ch] [ebp-B8h]
  int v49; // [esp+1Ch] [ebp-B8h]
  int v50; // [esp+1Ch] [ebp-B8h]
  int v51; // [esp+1Ch] [ebp-B8h]
  double v52; // [esp+24h] [ebp-B0h]
  double v53; // [esp+24h] [ebp-B0h]
  int v54; // [esp+30h] [ebp-A4h]
  float v55; // [esp+30h] [ebp-A4h]
  int v56; // [esp+34h] [ebp-A0h] BYREF
  int v57; // [esp+38h] [ebp-9Ch]
  int v58; // [esp+3Ch] [ebp-98h]
  int v59; // [esp+40h] [ebp-94h] BYREF
  int v60; // [esp+44h] [ebp-90h]
  int v61; // [esp+48h] [ebp-8Ch]
  float v62; // [esp+4Ch] [ebp-88h]
  float v63; // [esp+50h] [ebp-84h] BYREF
  float v64; // [esp+54h] [ebp-80h]
  float v65; // [esp+58h] [ebp-7Ch]
  float v66; // [esp+5Ch] [ebp-78h] BYREF
  float v67; // [esp+60h] [ebp-74h]
  float v68; // [esp+64h] [ebp-70h]
  float v69; // [esp+68h] [ebp-6Ch] BYREF
  float v70; // [esp+6Ch] [ebp-68h]
  float v71; // [esp+70h] [ebp-64h]
  float v72; // [esp+74h] [ebp-60h] BYREF
  float v73; // [esp+78h] [ebp-5Ch]
  float v74; // [esp+7Ch] [ebp-58h]
  float v75; // [esp+80h] [ebp-54h]
  float v76; // [esp+84h] [ebp-50h]
  float v78; // [esp+8Ch] [ebp-48h]
  float v79; // [esp+90h] [ebp-44h]
  float v81; // [esp+98h] [ebp-3Ch]
  float v82; // [esp+9Ch] [ebp-38h]
  char v84[48]; // [esp+A4h] [ebp-30h] BYREF

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
    dword_B45D54 = 0; /*0x7623df*/
    dword_B45D58 = 1112014848; /*0x7623e4*/
    dword_B45D5C = 0; /*0x7623ea*/
    atexit(nullsub_47); /*0x7623f0*/
  }
  v4 = *(&this->uniqueId4); /*0x7623fb*/
  v5 = flt_7F6BB4[v4]; /*0x762406*/
  v56 = *a2; /*0x76240d*/
  v6 = a2[2]; /*0x762426*/
  v57 = a2[1]; /*0x762429*/
  v58 = v6; /*0x76242d*/
  v43 = Math::RoundToInt(v5); /*0x762443*/
  v62 = *(float *)(a3 + 4); /*0x762447*/
  v45 = Math::RoundToInt(v5); /*0x76245e*/
  v7 = Math::RoundToInt(v5); /*0x762477*/
  v43 = v43; /*0x76248a*/
  v45 = v45; /*0x76248e*/
  v61 = v7; /*0x762492*/
  if ( !v4 ) /*0x762496*/
    v61 = v7 + 50; /*0x76249b*/
  if ( v4 == 3 ) /*0x7624a2*/
    v61 += 50; /*0x7624a4*/
  v8 = flt_7F6BB4[v4]; /*0x7624a9*/
  v56 = Math::RoundToInt(v8); /*0x7624fd*/
  v57 = Math::RoundToInt(v8); /*0x762507*/
  v58 = Math::RoundToInt(v8); /*0x76251c*/
  v62 = Math::Sqrt((double)(v57 - v45) * (double)(v57 - v45) + (double)(v56 - v43) * (double)(v56 - v43)); /*0x76255a*/
  v46 = (float)(v57 - v45); /*0x762574*/
  v9 = Math::Sqrt(v46 * v46 + (double)(v58 - v61) * (double)(v58 - v61) + (double)(v56 - v43) * (double)(v56 - v43)); /*0x76259d*/
  v54 = Math::RoundToInt(v9); /*0x7625ae*/
  *(&this->uniqueId5) = v56; /*0x7625bb*/
  *(&this->uniqueId6) = v57; /*0x7625c1*/
  *(&this->uniqueId7) = v58; /*0x7625c8*/
  this->SetPosition(&this->uniqueId5); /*0x7625cf*/
  v10 = v43; /*0x7625d5*/
  v11 = v45; /*0x7625d9*/
  *(&this->NeedsSaveOrLink2) = 4; /*0x7625e3*/
  *(&this->uniqueId8) = v10; /*0x7625ed*/
  v61 = v61; /*0x7625ef*/
  *(&this->uniqueId9) = v11; /*0x7625f3*/
  *(&this->NeedsSaveOrLink3) = &this->q180; /*0x7625fc*/
  *(&this->abstractFlags0) = v61; /*0x762602*/
  Coord::To_Screen(&v56, &this->abstractFlags1); /*0x762617*/
  Coord::To_Screen(&v43, &this->abstractFlags3); /*0x76262e*/
  v13 = (double)(int)Math::RoundToInt(v62); /*0x762646*/
  v14 = 48 * *(&this->uniqueId4); /*0x76264d*/
  v78 = v13 + *(float *)&dword_B45CA0[v14 / 4u]; /*0x762658*/
  v79 = *(float *)(v14 + 11820196); /*0x76266c*/
  v15 = *(float *)(v14 + 11820200); /*0x762673*/
  v69 = v78; /*0x762680*/
  v15 = v15; /*0x762684*/
  v70 = v79; /*0x762692*/
  v71 = v15; /*0x762696*/
  v75 = v13 + *(float *)(v14 + 11820204); /*0x7626a0*/
  v76 = *(float *)(v14 + 11820208); /*0x7626ae*/
  v16 = *(float *)(v14 + 11820212); /*0x7626b2*/
  v63 = v75; /*0x7626bc*/
  v16 = v16; /*0x7626c0*/
  v64 = v76; /*0x7626c8*/
  v65 = v16; /*0x7626cc*/
  v81 = *(float *)(v14 + 11820216); /*0x7626d6*/
  v82 = *(float *)(v14 + 11820220); /*0x7626ee*/
  v17 = *(float *)(v14 + 11820224); /*0x7626f5*/
  v72 = v81; /*0x762702*/
  v17 = v17; /*0x762706*/
  v73 = v82; /*0x762714*/
  v74 = v17; /*0x762718*/
  v47 = *(float *)(v14 + 11820232); /*0x762734*/
  v66 = *(float *)(v14 + 11820228); /*0x76273e*/
  v18 = (double)(v61 - v58); /*0x762758*/
  v19 = (double)v54; /*0x76275c*/
  v20 = (double)v58; /*0x762760*/
  v67 = v47; /*0x762779*/
  v71 = v78 * v18 / v19 + v20; /*0x762790*/
  v65 = v75 * v18 / v19 + v20; /*0x76279e*/
  v74 = v81 * v18 / v19 + v20; /*0x7627af*/
  v68 = v66 * v18 / v19 + v20; /*0x7627bd*/
  v21 = (double)(v43 - v56); /*0x7627c7*/
  v21 = v21; /*0x7627cb*/
  v21 = v21; /*0x7627d9*/
  v22 = Math::Sqrt((double)(v45 - v57) * (double)(v45 - v57) + v21 * v21); /*0x7627f2*/
  v23 = v21; /*0x7627f7*/
  if ( v22 < v21 ) /*0x762807*/
    v23 = v22; /*0x76280b*/
  if ( -v23 > v22 ) /*0x762818*/
    v23 = -v22; /*0x76281e*/
  Math::ArcTan2_Table(v23 / v22); /*0x76282a*/
  v53 = v22; /*0x762837*/
  if ( v57 > v45 ) /*0x762840*/
    v53 = -v22; /*0x762848*/
  Matrix3x4::Identity(v84); /*0x762853*/
  v53 = v53; /*0x762864*/
  Matrix2D::Rotate(v53); /*0x762867*/
  v24 = (float *)TransformMatrix3x4Point(&v69); /*0x76287c*/
  v69 = *v24; /*0x762883*/
  v70 = v24[1]; /*0x76288f*/
  v71 = v24[2]; /*0x7628a1*/
  v25 = (float *)TransformMatrix3x4Point(&v63); /*0x7628a5*/
  v63 = *v25; /*0x7628ac*/
  v64 = v25[1]; /*0x7628b3*/
  v65 = v25[2]; /*0x7628c2*/
  v26 = (float *)TransformMatrix3x4Point(&v72); /*0x7628ce*/
  v72 = *v26; /*0x7628d5*/
  v73 = v26[1]; /*0x7628e1*/
  v74 = v26[2]; /*0x7628f3*/
  v27 = (float *)TransformMatrix3x4Point(&v66); /*0x7628f7*/
  v28 = (double)v56; /*0x7628fc*/
  v66 = *v27; /*0x762902*/
  v67 = v27[1]; /*0x76290f*/
  v68 = v27[2]; /*0x762916*/
  v29 = Math::RoundToInt(v28); /*0x762923*/
  v55 = (float)v57; /*0x762925*/
  v48 = Math::RoundToInt(v28); /*0x762936*/
  v30 = Math::RoundToInt(v28); /*0x76293a*/
  *(&this->nextArrayIndex3) = v29; /*0x762951*/
  *(&this->nextArrayIndex4) = v48; /*0x762953*/
  *(&this->nextArrayIndex5) = v30; /*0x762956*/
  v31 = Math::RoundToInt(v28); /*0x762966*/
  v49 = Math::RoundToInt(v28); /*0x762971*/
  v32 = Math::RoundToInt(v28); /*0x762975*/
  *(&this->nextArrayIndex6) = v31; /*0x762980*/
  *(&this->nextArrayIndex7) = v49; /*0x762990*/
  *(&this->nextArrayIndex8) = v32; /*0x762993*/
  v33 = Math::RoundToInt(v28); /*0x7629a3*/
  v50 = Math::RoundToInt(v28); /*0x7629ae*/
  v34 = Math::RoundToInt(v28); /*0x7629b2*/
  v35 = v28 + v66; /*0x7629c1*/
  *(&this->nextArrayIndex9) = v33; /*0x7629c5*/
  *(&this->referenceCount0) = v50; /*0x7629c7*/
  *(&this->referenceCount1) = v34; /*0x7629ca*/
  v36 = Math::RoundToInt(v35); /*0x7629da*/
  v51 = Math::RoundToInt(v55 + v67); /*0x7629e5*/
  v37 = Math::RoundToInt(v68); /*0x7629e9*/
  *(&this->referenceCount2) = v36; /*0x7629f8*/
  *(&this->referenceCount3) = v51; /*0x762a06*/
  *(&this->referenceCount4) = v37; /*0x762a09*/
  Coord::To_Screen(&this->q0FC, &this->abstractFlags5); /*0x762a12*/
  Coord::To_Screen(&this->q108, &this->abstractFlags7); /*0x762a2b*/
  Coord::To_Screen(&this->q114, &this->abstractFlags9); /*0x762a44*/
  Coord::To_Screen(&this->q120, &this->nextArrayIndex1); /*0x762a5d*/
  v38 = (unsigned int *)*(&this->NeedsSaveOrLink3); /*0x762a62*/
  *v38 = *(&this->abstractFlags5); /*0x762a6a*/
  v38[1] = *(&this->abstractFlags6); /*0x762a6f*/
  v39 = *(&this->NeedsSaveOrLink3); /*0x762a72*/
  *(unsigned int *)(v39 + 8) = *(&this->abstractFlags7); /*0x762a7a*/
  *(unsigned int *)(v39 + 12) = *(&this->abstractFlags8); /*0x762a80*/
  v40 = *(&this->NeedsSaveOrLink3); /*0x762a83*/
  *(unsigned int *)(v40 + 16) = *(&this->nextArrayIndex1); /*0x762a8f*/
  *(unsigned int *)(v40 + 20) = *(&this->nextArrayIndex2); /*0x762a98*/
  result = *(&this->NeedsSaveOrLink3); /*0x762a9b*/
  *(unsigned int *)(result + 24) = *(&this->abstractFlags9); /*0x762aa7*/
  *(unsigned int *)(result + 28) = *(&this->nextArrayIndex0); /*0x762ab5*/
  qmemcpy(&this->q1D8, (const void *)(*(&this->fallRate7) + 928), 0x18u); /*0x762aca*/
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
  int v43; // edx
  double v45; // st7
  int v46; // edi
  int v47; // eax
  unsigned int *v48; // ecx
  double v49; // st7
  int v50; // edi
  int v51; // eax
  double v53; // st7
  int v54; // edi
  int v55; // eax
  int v56; // ecx
  double v57; // st7
  int v45; // edi
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
  unsigned char v75[12]; // [esp+30h] [ebp-Ch] BYREF

  if ( *(double *)(&this->visibilityFlags2) - *(double *)(&this->needsRedraw0) > 0.1 && !this->q0B0 ) /*0x762b18*/
    this->q12D = 1; /*0x762b22*/
  if ( this->q130 == (unsigned int)Math::RoundToInt(1.0 / 0.050000001) && this->q0B0 == 3 ) /*0x762b49*/
  {
    v2 = this->q134; /*0x762b4b*/
    this->q130 = 64; /*0x762b51*/
    this->q134 = v2 + 1; /*0x762b5c*/
  }
  v3 = this->q0AC; /*0x762b62*/
  if ( !v3 ) /*0x762b6a*/
    goto LABEL_13; /*0x762b6a*/
  v4 = this->q1D4; /*0x762b70*/
  if ( !v4 ) /*0x762b78*/
    goto LABEL_13; /*0x762b78*/
  if ( this->q130 == (unsigned int)Math::RoundToInt(1.0 / 0.050000001) ) /*0x762b95*/
    goto LABEL_13; /*0x762b95*/
  if ( v4->target != v3 ) /*0x762ba1*/
    goto LABEL_13; /*0x762ba1*/
  if ( this->q0B0 != 3 ) /*0x762bae*/
  {
    v5 = v4 + 156; /*0x762bc0*/
    v6 = v4->location; /*0x762bc4*/
    v7 = *(unsigned int *)(v5 + 4); /*0x762bc6*/
    v8 = *(unsigned int *)(v5 + 8); /*0x762bc9*/
    v9 = (unsigned int *)(*(int (__thiscall **)(unsigned int, unsigned char *))(**(unsigned int **)(&this->q0442) + 88))( /*0x762bd1*/
                     this->q0AC,
                     v75);
    v10 = v8 - v9[2]; /*0x762bdb*/
    v72 = v6 - *v9; /*0x762bdd*/
    v11 = v7 - v9[1]; /*0x762be4*/
    v10 = v10; /*0x762be6*/
    v11 = v11; /*0x762bea*/
    v12 = Math::Sqrt((double)v72 * (double)v72 + (double)v10 * (double)v10 + (double)v11 * (double)v11); /*0x762c16*/
    v71 = Math::RoundToInt(v12); /*0x762c23*/
    if ( dbl_B45D80 * 6.0 < (double)v71 ) /*0x762c3e*/
    {
  LABEL_13:
      this->q12C = 0; /*0x762c40*/
      this->q12D = 1; /*0x762c47*/
    }
  }
  if ( this->q12C ) /*0x762c4e*/
  {
    if ( this->q0B0 != 3 ) /*0x762c69*/
      goto LABEL_21; /*0x762c69*/
    v13 = this->q0AC; /*0x762c6f*/
    if ( v13 && (*(int (__thiscall **)(int))(*(unsigned int *)v13 + 44))(v13) == 1 ) /*0x762c81*/
    {
      v14 = this->q0AC; /*0x762c97*/
      v15 = (*(int (__thiscall **)(unsigned int, unsigned char *, unsigned int, unsigned int, unsigned int))(**(unsigned int **)(&this->q0B88) + 176))( /*0x762ca9*/
              this->q1D4,
              v75,
              0,
              0,
              0);
      v16 = (int *)(*(int (__thiscall **)(int, int *, int))(*(unsigned int *)v14 + 88))(v14, &v71, v15); /*0x762cb9*/
      Voxel::LightRender(v16, 0); /*0x762cbf*/
      goto LABEL_22; /*0x762cc4*/
    }
    if ( this->q0B0 == 3 ) /*0x762ccf*/
    {
      v17 = this->q1D4; /*0x762cd7*/
      v18 = (*(int (__thiscall **)(unsigned int))(**(unsigned int **)(&this->q0442) + 88))(this->q0AC); /*0x762ce8*/
      v19 = (int *)(*(int (__thiscall **)(int, int *, unsigned int, unsigned int, unsigned int, unsigned int, int))(v17->suspendedMission)( /*0x762d05*/
                     v17,
                     &v71,
                     0,
                     0,
                     0,
                     0,
                     v18);
      Voxel::LightRender(v19, (int)v75); /*0x762d0e*/
    }
    else
    {
  LABEL_21:
      v20 = this->q1D4; /*0x762d1b*/
      v21 = (*(int (__thiscall **)(unsigned int))(**(unsigned int **)(&this->q0442) + 88))(this->q0AC); /*0x762d2c*/
      v22 = (int *)(*(int (__thiscall **)(int, int *, unsigned int, unsigned int, unsigned int, unsigned int, int))(v20->suspendedMission)( /*0x762d49*/
                     v20,
                     &v71,
                     0,
                     0,
                     0,
                     0,
                     v21);
      Voxel::SectionProject(v22, (int)v75); /*0x762d52*/
    }
  }
  LABEL_22:
  v23 = *(double *)(&this->visibilityFlags2); /*0x762d57*/
  if ( this->q0B0 != 3 ) /*0x762d6c*/
  {
    if ( v23 < 1.0 && this->q12C ) /*0x762f69*/
    {
      v44 = *(double *)(&this->visibilityFlags2) + 0.050000001; /*0x762f7d*/
      *(double *)(&this->visibilityFlags2) = v44; /*0x762f83*/
      if ( v44 > 0.98 ) /*0x762f94*/
      {
        this->q138 = 0; /*0x762f96*/
        this->q13C = 1072693248; /*0x762fa0*/
      }
      v45 = *(double *)(&this->visibilityFlags2); /*0x762faa*/
      v46 = Math::RoundToInt(v45); /*0x762fd5*/
      v47 = Math::RoundToInt(v45); /*0x762fe3*/
      v48 = *(unsigned int **)(&this->hasParachute2); /*0x762fe8*/
      *v48 = v46; /*0x762ff0*/
      v48[1] = v47; /*0x762ff4*/
      v49 = *(double *)(&this->visibilityFlags2); /*0x762ff7*/
      v50 = Math::RoundToInt(v49); /*0x763022*/
      v51 = Math::RoundToInt(v49); /*0x763030*/
      v52 = this->q14C; /*0x763035*/
      *(unsigned int *)(v52 + 8) = v50; /*0x76303d*/
      *(unsigned int *)(v52 + 12) = v51; /*0x763042*/
      v53 = *(double *)(&this->visibilityFlags2); /*0x763045*/
      v54 = Math::RoundToInt(v53); /*0x763070*/
      v55 = Math::RoundToInt(v53); /*0x76307e*/
      v56 = this->q14C; /*0x763083*/
      *(unsigned int *)(v56 + 16) = v54; /*0x76308b*/
      *(unsigned int *)(v56 + 20) = v55; /*0x763090*/
    }
    if ( this->q12D && 0.050000001 * 0.5 + *(double *)(&this->visibilityFlags2) >= *(double *)(&this->needsRedraw0) ) /*0x7630be*/
    {
      v57 = *(double *)(&this->needsRedraw0) + 0.050000001; /*0x7630ca*/
      *(double *)(&this->needsRedraw0) = v57; /*0x7630d6*/
      if ( !v59 ) /*0x7630e1*/
        return 0; /*0x7630e1*/
      v60 = Math::RoundToInt(v57); /*0x76311c*/
      v61 = Math::RoundToInt(v57); /*0x76312a*/
      v62 = this->q14C; /*0x76312f*/
      *(unsigned int *)(v62 + 24) = v60; /*0x763137*/
      *(unsigned int *)(v62 + 28) = v61; /*0x76313c*/
      v63 = *(double *)(&this->needsRedraw0); /*0x76313f*/
      v64 = Math::RoundToInt(v63); /*0x76316a*/
      v65 = Math::RoundToInt(v63); /*0x763178*/
      v66 = this->q14C; /*0x76317d*/
      *(unsigned int *)(v66 + 32) = v64; /*0x763185*/
      *(unsigned int *)(v66 + 36) = v65; /*0x76318a*/
      v67 = *(double *)(&this->needsRedraw0); /*0x76318d*/
      v68 = Math::RoundToInt(v67); /*0x7631b8*/
      v69 = Math::RoundToInt(v67); /*0x7631c6*/
      v70 = this->q14C; /*0x7631cb*/
      *(unsigned int *)(v70 + 40) = v68; /*0x7631d3*/
      *(unsigned int *)(v70 + 44) = v69; /*0x7631d8*/
    }
    return Voxel::FaceBlit(); /*0x7631d8*/
  }
  if ( v23 < 1.0 && this->q12C ) /*0x762d7b*/
  {
    v24 = *(double *)(&this->visibilityFlags2) + 0.050000001; /*0x762d8f*/
    *(double *)(&this->visibilityFlags2) = v24; /*0x762d95*/
    if ( v24 > 0.98 ) /*0x762da6*/
    {
      this->q138 = 0; /*0x762da8*/
      this->q13C = 1072693248; /*0x762db2*/
    }
    v25 = *(double *)(&this->visibilityFlags2); /*0x762dbc*/
    v26 = Math::RoundToInt(v25); /*0x762de7*/
    v27 = Math::RoundToInt(v25); /*0x762df5*/
    v28 = *(unsigned int **)(&this->hasParachute2); /*0x762dfa*/
    *v28 = v26; /*0x762e02*/
    v28[1] = v27; /*0x762e06*/
    v29 = *(double *)(&this->visibilityFlags2); /*0x762e09*/
    v30 = Math::RoundToInt(v29); /*0x762e34*/
    v31 = Math::RoundToInt(v29); /*0x762e42*/
    v32 = this->q14C; /*0x762e47*/
    *(unsigned int *)(v32 + 8) = v30; /*0x762e4f*/
    *(unsigned int *)(v32 + 12) = v31; /*0x762e54*/
  }
  if ( !this->q12D || 0.050000001 * 0.5 + *(double *)(&this->visibilityFlags2) < *(double *)(&this->needsRedraw0) ) /*0x762e82*/
    return Voxel::FaceBlit(); /*0x7631dd*/
  v33 = *(double *)(&this->needsRedraw0) + 0.050000001; /*0x762e8e*/
  *(double *)(&this->needsRedraw0) = v33; /*0x762e9a*/
  if ( !v35 ) /*0x762ea5*/
    return 0; /*0x762eba*/
  v37 = Math::RoundToInt(v33); /*0x762ee0*/
  v38 = Math::RoundToInt(v33); /*0x762eee*/
  v39 = this->q14C; /*0x762ef3*/
  *(unsigned int *)(v39 + 16) = v37; /*0x762efb*/
  *(unsigned int *)(v39 + 20) = v38; /*0x762f00*/
  v40 = *(double *)(&this->needsRedraw0); /*0x762f03*/
  v41 = Math::RoundToInt(v40); /*0x762f2e*/
  v42 = Math::RoundToInt(v40); /*0x762f3c*/
  v43 = this->q14C; /*0x762f41*/
  *(unsigned int *)(v43 + 24) = v41; /*0x762f4b*/
  *(unsigned int *)(v43 + 28) = v42; /*0x762f50*/
  return Voxel::FaceBlit(); /*0x762eb3*/
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

  v3 = this->vtable3; /*0x763333*/
  if ( this->uniqueId >= v3 ) /*0x76333b*/
  {
    if ( !this->attachedTag && v3 ) /*0x763346*/
      return 0; /*0x763346*/
    v4 = this->abstractFlags; /*0x763348*/
    if ( v4 <= 0 || !this->COMStub_Release(v3 + v4, 0) ) /*0x763358*/
      return 0; /*0x76335f*/
  }
  v6 = this->uniqueId; /*0x763365*/
  v7 = this->vtable2; /*0x763368*/
  this->uniqueId = v6 + 1; /*0x76336e*/
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
          for ( i = v17 + 1; IDA_BYTE1(v13); g_VoxelRenderBuffer[v19] = g_VoxelColorPalette[v20] ) /*0x7dfa91*/
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
          for ( i = v12 - 1; IDA_BYTE1(v13); g_VoxelRenderBuffer[v17] = g_VoxelColorPalette[v18] ) /*0x7dfba3*/
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
          for ( i = v17 + 1; IDA_BYTE1(v13); g_VoxelRenderBuffer[v19] = v20 ) /*0x7dfcd1*/
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
  flt_88746C = a1; /*0x754c12*/
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
  dword_887420 = IDA_LODWORD(v3[0]); /*0x754c9b*/
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
  v1 = word_B4669C; /*0x75f036*/
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
  v4 = word_B46254; /*0x75f07e*/
  v10 = 0; /*0x75f083*/
  do /*0x75f0c5*/
  {
    v5 = Math::SinCos((double)v10 * 0.125); /*0x75f097*/
    *v4++ = Math::RoundToInt(v5 * 12.0 + 0.49); /*0x75f0b4*/
    ++v10; /*0x75f0c1*/
  }
  while ( (int)v4 < (int)word_B4663C ); /*0x75f0c5*/
  v11 = 0; /*0x75f0c7*/
  v6 = word_B45E68; /*0x75f0cb*/
  do /*0x75f10e*/
  {
    v7 = Math::SinCos((double)v11 * 0.1); /*0x75f0e0*/
    *v6++ = Math::RoundToInt(v7 * 12.0 + 0.49); /*0x75f0fd*/
    ++v11; /*0x75f10a*/
  }
  while ( (int)v6 < (int)&dword_B46248 ); /*0x75f10e*/
  v8 = dword_B46648; /*0x75f110*/
  for ( result = 110; result < 214; result += 8 ) /*0x75f115*/
    *v8++ = result; /*0x75f11a*/
  return result; /*0x75f129*/
}
} // namespace gamemd
