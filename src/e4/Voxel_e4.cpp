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

// 0x748220
namespace gamemd {
char Voxel::BuildIndexTable()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void Voxel_BuildIndexTable(void *this)
{
  __int16 v5; // bx
  char v12; // [esp+8h] [ebp-18h]
  char v13; // [esp+Ch] [ebp-14h]
  char v14; // [esp+10h] [ebp-10h]
  int v15; // [esp+14h] [ebp-Ch]
  int i; // [esp+18h] [ebp-8h]
  __int16 j; // [esp+1Ch] [ebp-4h]

  int v1 = 0; /*0x748229*/
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
    int v3 = 0; /*0x7482d1*/
    int v4 = v1 << v12; /*0x7482d3*/
    v5 = 32 * v1; /*0x7482d5*/
    v15 = 0; /*0x7482d8*/
    for ( j = v5; ; v5 = j ) /*0x7482dc*/
    {
      int v6 = 0; /*0x7482ee*/
      int v7 = v3 << v13; /*0x7482f3*/
      int v8 = (unsigned __int16)(32 * (v5 | v3)); /*0x7482f5*/
      do /*0x748320*/
      {
        int v9 = v8 | (unsigned __int16)v6; /*0x748311*/
        int v10 = v7 | v4 | (v6++ << v14); /*0x748315*/
        *((_WORD *)unk_B1D14C + v9) = v10; /*0x74831b*/
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
} // namespace gamemd

// 0x754510
namespace gamemd {
float * Voxel::RenderFrame()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
float *__thiscall Voxel_RenderFrame(float *this)
{
  _DWORD ***v13; // esi
  _DWORD ***v16; // edi

  int v1 = 0; /*0x75452e*/
  float v25[7]; // [esp+1Ch] [ebp-28h] BYREF
  v25[0] = (*(float *)&DataGlobal_B2D5E0 + *(float *)&DataGlobal_B2D948) * 0.5; /*0x754536*/
  v25[1] = (*(float *)&DataGlobal_B2D5E4 + *(float *)&DataGlobal_B2D94C) * 0.5; /*0x75454c*/
  v25[2] = (*(float *)&DataGlobal_B2D5E8 + *(float *)&DataGlobal_B2D950) * 0.5; /*0x754562*/
  if ( DataGlobal_B2FB70 > 0 ) /*0x754566*/
  {
    char * v2 = (char *)&unk_B3FF78; /*0x754568*/
    do /*0x754585*/
    {
      InitializeTileAudioOcclusion(v2, v25); /*0x754575*/
      ++v1; /*0x75457f*/
      v2 += 72; /*0x754580*/
    }
    while ( v1 < DataGlobal_B2FB70 ); /*0x754585*/
  }
  int v3 = DataGlobal_B2D820; /*0x754587*/
  if ( DataGlobal_B2D820 > 0 ) /*0x75458f*/
  {
    _DWORD * v4 = &DataGlobal_B2D824; /*0x754591*/
    char * v5 = (char *)&DataGlobal_B2D958; /*0x754596*/
    int v6 = DataGlobal_B2D820; /*0x75459b*/
    do /*0x7545a8*/
    {
      *v4 = v5; /*0x75459d*/
      v5 += 136; /*0x75459f*/
      ++v4; /*0x7545a4*/
      --v6; /*0x7545a7*/
    }
    while ( v6 ); /*0x7545a8*/
  }
  int v7 = v3 - 1; /*0x7545aa*/
  if ( v3 - 1 > 0 ) /*0x7545af*/
  {
    int v8 = 1; /*0x7545b1*/
    char * v9 = (char *)&DataGlobal_B2D824; /*0x7545b6*/
    do /*0x7545f1*/
    {
      if ( v8 < v3 ) /*0x7545bd*/
      {
        char * v10 = v9 + 4; /*0x7545bf*/
        int v11 = v3 - v8; /*0x7545c2*/
        do /*0x7545dd*/
        {
          int v12 = *(_DWORD *)v9; /*0x7545c4*/
          if ( *(float *)(*(_DWORD *)v9 + 36) > (double)*(float *)(*(_DWORD *)v10 + 36) ) /*0x7545d3*/
          {
            *(_DWORD *)v9 = *(_DWORD *)v10; /*0x7545d5*/
            *(_DWORD *)v10 = v12; /*0x7545d7*/
          }
          v10 += 4; /*0x7545d9*/
          --v11; /*0x7545dc*/
        }
        while ( v11 ); /*0x7545dd*/
        v3 = DataGlobal_B2D820; /*0x7545df*/
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
      v13 = (_DWORD ***)(4 * v7 + 11720740); /*0x754601*/
      int v14 = v7 + 1; /*0x754608*/
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
    int v15 = 0; /*0x754622*/
    if ( v3 > 0 ) /*0x754626*/
    {
      v16 = (_DWORD ***)&DataGlobal_B2D824; /*0x754628*/
      do /*0x754647*/
      {
        Voxel::ProcessColor(**v16, *v16, v25); /*0x754637*/
        ++v15; /*0x754641*/
        ++v16; /*0x754642*/
      }
      while ( v15 < DataGlobal_B2D820 ); /*0x754647*/
    }
  }
  float v17; // esi
  LODWORD(v17) = Math::RoundToInt(*(float *)&DataGlobal_B2D948 - *(float *)&DataGlobal_B2D5E0); /*0x754666*/
  int v18 = Math::RoundToInt(*(float *)&DataGlobal_B2D94C - *(float *)&DataGlobal_B2D5E4); /*0x754668*/
  int v19 = 128 - SLODWORD(v17) / 2; /*0x75467f*/
  LODWORD(v17) += 8; /*0x754686*/
  float v20; // edi
  LODWORD(v20) = v18 + 8; /*0x754694*/
  v19 -= 4; /*0x75469a*/
  int v26 = 128 - v18 / 2 - 4; /*0x75469d*/
  DataGlobal_B2FB64 = v26; /*0x7546a1*/
  DataGlobal_B2FB60 = v19; /*0x7546a8*/
  DataGlobal_B2FB68 = LODWORD(v17); /*0x7546b1*/
  DataGlobal_B2FB6C = v18 + 8; /*0x7546b9*/
  float v24; // [esp+14h] [ebp-30h]
  LODWORD(v24) = Math::RoundToInt(v25[0]) - SLODWORD(v17) / 2; /*0x7546c8*/
  int v21 = Math::RoundToInt(v25[1]); /*0x7546d9*/
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
} // namespace gamemd

// 0x754CB0
namespace gamemd {
int Voxel::Projection_Setup()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void Voxel_Projection_Setup()
{
  int result; // eax

  float v84 = dbl_B43F08; /*0x754cbe*/
  float v59 = dbl_B44310; /*0x754cd0*/
  int v53; // [esp+34h] [ebp-E0h] BYREF
  *(float *)&v53 = 1.0; /*0x754ce4*/
  float v54 = 0.0; /*0x754cec*/
  int v55 = 0; /*0x754cf4*/
  int v56 = 0; /*0x754cfc*/
  int v57 = 0; /*0x754d04*/
  int v58 = 1065353216; /*0x754d0c*/
  Math::BuildRotationMatrix((int)&v56, 0.785375); /*0x754d14*/
  int * v0 = (int *)TransformMatrix3x4Point(&v53); /*0x754d1f*/
  int v69 = *v0; /*0x754d26*/
  int v70 = v0[1]; /*0x754d30*/
  int v71 = v0[2]; /*0x754d4d*/
  v56 = 1065353216; /*0x754d54*/
  v57 = 0; /*0x754d5c*/
  v58 = 0; /*0x754d64*/
  *(float *)&v53 = 0.0; /*0x754d6c*/
  v54 = 0.0; /*0x754d74*/
  v55 = 1065353216; /*0x754d7c*/
  Math::BuildRotationMatrix((int)&v53, 2.3561251); /*0x754d84*/
  int * v1 = (int *)TransformMatrix3x4Point(&v56); /*0x754d8f*/
  int v60 = *v1; /*0x754d96*/
  int v61 = v1[1]; /*0x754d9d*/
  int v62 = v1[2]; /*0x754dba*/
  v56 = 1065353216; /*0x754dc1*/
  v57 = 0; /*0x754dc9*/
  v58 = 0; /*0x754dd1*/
  *(float *)&v53 = 0.0; /*0x754dd9*/
  v54 = 0.0; /*0x754de1*/
  v55 = 1065353216; /*0x754de9*/
  Math::BuildRotationMatrix((int)&v53, 3.9268751); /*0x754df1*/
  int * v2 = (int *)TransformMatrix3x4Point(&v56); /*0x754dfc*/
  int v78 = *v2; /*0x754e03*/
  int v79 = v2[1]; /*0x754e0d*/
  int v3 = v2[2]; /*0x754e14*/
  v56 = 1065353216; /*0x754e17*/
  int v80 = v3; /*0x754e1f*/
  v57 = 0; /*0x754e26*/
  v58 = 0; /*0x754e2e*/
  *(float *)&v53 = 0.0; /*0x754e36*/
  v54 = 0.0; /*0x754e3e*/
  v55 = 1065353216; /*0x754e46*/
  Math::BuildRotationMatrix((int)&v53, 5.4976249); /*0x754e61*/
  int * v4 = (int *)TransformMatrix3x4Point(&v56); /*0x754e6c*/
  int v72 = *v4; /*0x754e73*/
  int v73 = v4[1]; /*0x754e7d*/
  int v5 = v4[2]; /*0x754e89*/
  int v81 = 1065353216; /*0x754e8c*/
  int v74 = v5; /*0x754e97*/
  int v82 = 0; /*0x754e9e*/
  int v83 = 0; /*0x754ea9*/
  int v75 = 0; /*0x754eb4*/
  int v76 = 1065353216; /*0x754ebf*/
  int v77 = 0; /*0x754eca*/
  int v63 = -1082130432; /*0x754ed5*/
  int v64 = 0; /*0x754ee0*/
  int v65 = 0; /*0x754eeb*/
  int v66 = 0; /*0x754ef6*/
  int v67 = -1082130432; /*0x754f01*/
  int v68 = 0; /*0x754f0c*/
  Matrix3x4::Identity(&unk_B43F10); /*0x754f17*/
  float v6 = v59; /*0x754f1c*/
  qmemcpy(&unk_B43F40, (const void *)Matrix3D::Constructor(3.9268751, v59), 0x30u); /*0x754f3c*/
  qmemcpy(&unk_B43F70, (const void *)Matrix3D::Constructor(2.3561251, v6), 0x30u); /*0x754f59*/
  qmemcpy(&unk_B43FA0, (const void *)Matrix3D::Constructor(0.785375, v6), 0x30u); /*0x754f76*/
  qmemcpy(&unk_B43FD0, (const void *)Matrix3D::Constructor(5.4976249, v6), 0x30u); /*0x754f93*/
  int v7 = FromQuaternionAxisAngle(v6); /*0x754fa0*/
  _BYTE v52[16]; // [esp+14h] [ebp-100h] BYREF
  Float4::Copy(v52, v7); /*0x754fb0*/
  int v8 = FromQuaternionAxisAngle(v6); /*0x754fbe*/
  Float4::Copy(v52, v8); /*0x754fce*/
  int v9 = FromQuaternionAxisAngle(v6); /*0x754fdf*/
  Float4::Copy(v52, v9); /*0x754fef*/
  int v10 = FromQuaternionAxisAngle(v6); /*0x755000*/
  Float4::Copy(v52, v10); /*0x755010*/
  float v11 = v84; /*0x755019*/
  qmemcpy(&unk_B44000, (const void *)Matrix3D::Constructor(3.1415, v84), 0x30u); /*0x755038*/
  qmemcpy(&unk_B44030, (const void *)Matrix3D::Constructor(1.57075, v11), 0x30u); /*0x755055*/
  qmemcpy(&unk_B44060, (const void *)Matrix3D::Constructor(0.0, v11), 0x30u); /*0x75506f*/
  qmemcpy(&unk_B44090, (const void *)Matrix3D::Constructor(4.7122502, v11), 0x30u); /*0x75508c*/
  int v12 = FromQuaternionAxisAngle(v11); /*0x755099*/
  Float4::Copy(v52, v12); /*0x7550a9*/
  int v13 = FromQuaternionAxisAngle(v11); /*0x7550ba*/
  Float4::Copy(v52, v13); /*0x7550ca*/
  int v14 = FromQuaternionAxisAngle(v11); /*0x7550db*/
  Float4::Copy(v52, v14); /*0x7550eb*/
  int v15 = FromQuaternionAxisAngle(v11); /*0x7550fc*/
  Float4::Copy(v52, v15); /*0x75510c*/
  qmemcpy(&unk_B440C0, (const void *)Matrix3D::Constructor(3.1415, v11), 0x30u); /*0x75512d*/
  qmemcpy(&unk_B440F0, (const void *)Matrix3D::Constructor(1.57075, v11), 0x30u); /*0x75514a*/
  qmemcpy(&unk_B44120, (const void *)Matrix3D::Constructor(0.0, v11), 0x30u); /*0x755164*/
  qmemcpy(&unk_B44150, (const void *)Matrix3D::Constructor(4.7122502, v11), 0x30u); /*0x755181*/
  int v16 = FromQuaternionAxisAngle(v11); /*0x75518e*/
  Float4::Copy(v52, v16); /*0x75519e*/
  int v17 = FromQuaternionAxisAngle(v11); /*0x7551af*/
  Float4::Copy(v52, v17); /*0x7551bf*/
  int v18 = FromQuaternionAxisAngle(v11); /*0x7551d0*/
  Float4::Copy(v52, v18); /*0x7551e0*/
  int v19 = FromQuaternionAxisAngle(v11); /*0x7551f1*/
  Float4::Copy(v52, v19); /*0x755201*/
  qmemcpy(&unk_B44180, (const void *)Matrix3D::Constructor(3.1415, v6), 0x30u); /*0x755221*/
  qmemcpy(&unk_B441B0, (const void *)Matrix3D::Constructor(1.57075, v6), 0x30u); /*0x75523f*/
  qmemcpy(&unk_B441E0, (const void *)Matrix3D::Constructor(0.0, v6), 0x30u); /*0x755259*/
  qmemcpy(&unk_B44210, (const void *)Matrix3D::Constructor(4.7122502, v6), 0x30u); /*0x755276*/
  int v20 = FromQuaternionAxisAngle(v6); /*0x755283*/
  Float4::Copy(v52, v20); /*0x755293*/
  int v21 = FromQuaternionAxisAngle(v6); /*0x7552a4*/
  Float4::Copy(v52, v21); /*0x7552b4*/
  int v22 = FromQuaternionAxisAngle(v6); /*0x7552c5*/
  Float4::Copy(v52, v22); /*0x7552d5*/
  int v23 = FromQuaternionAxisAngle(v6); /*0x7552e6*/
  Float4::Copy(v52, v23); /*0x7552f6*/
  Matrix3x4::Identity(&unk_B44240); /*0x755300*/
  Matrix3x4::Identity(&unk_B44270); /*0x75530a*/
  Matrix3x4::Identity(&unk_B442A0); /*0x755314*/
  Matrix3x4::Identity(&unk_B442D0); /*0x75531e*/
  int v24 = 0; /*0x755323*/
  Int4::Set2(0, 0, 0, 1065353216); /*0x755332*/
  Int4::Set2(0, 0, 0, 1065353216); /*0x755344*/
  Int4::Set2(0, 0, 0, 1065353216); /*0x755356*/
  Int4::Set2(0, 0, 0, 1065353216); /*0x755368*/
  v59 = 0.0; /*0x75536d*/
  do /*0x755459*/
  {
  char v85[48]; // [esp+E4h] [ebp-30h] BYREF
    Matrix3x4::Identity(v85); /*0x755378*/
    float v49 = (double)SLODWORD(v59) * 0.024542969; /*0x75538f*/
    Matrix2D::Rotate(v49); /*0x755392*/
    v56 = 1065353216; /*0x7553a7*/
    v57 = 0; /*0x7553af*/
    v58 = 0; /*0x7553b7*/
    float * v25 = &flt_B432D8[v24]; /*0x7553bf*/
    float * v26 = (float *)TransformMatrix3x4Point(&v56); /*0x7553c5*/
    *v25 = *v26; /*0x7553d4*/
    int v27 = *((_DWORD *)v26 + 1); /*0x7553d6*/
    v55 = 0; /*0x7553d9*/
    *((_DWORD *)v25 + 1) = v27; /*0x7553e1*/
    v25[2] = v26[2]; /*0x7553e7*/
    float * v28 = (float *)((char *)&flt_B444A0 + v24 * 4); /*0x7553f8*/
    *(float *)&v53 = *(float *)(v24 * 4 + 11809500) - 0.0; /*0x7553fa*/
    double v29 = 0.0 - flt_B432D8[v24]; /*0x755402*/
    *v28 = *(float *)&v53; /*0x755404*/
    v54 = v29; /*0x755406*/
    v28[1] = v54; /*0x75540e*/
    *((_DWORD *)v28 + 2) = v55; /*0x755415*/
    Math::BuildRotationMatrix((int)&flt_B444A0 + v24 * 4, DataGlobal_88746C); /*0x755424*/
    float * v30 = (float *)TransformMatrix3x4Point(&flt_B432D8[v24]); /*0x755432*/
    v24 += 3; /*0x755439*/
    *v25 = *v30; /*0x75543c*/
    v25[1] = v30[1]; /*0x755441*/
    v25[2] = v30[2]; /*0x755447*/
    ++LODWORD(v59); /*0x755455*/
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
  int v31 = FromQuaternionAxisAngle(v6); /*0x755657*/
  Float4::Copy(v52, v31); /*0x755667*/
  int v32 = FromQuaternionAxisAngle(v6); /*0x755678*/
  Float4::Copy(v52, v32); /*0x755688*/
  int v33 = FromQuaternionAxisAngle(v6); /*0x755699*/
  Float4::Copy(v52, v33); /*0x7556a9*/
  int v34 = FromQuaternionAxisAngle(v6); /*0x7556ba*/
  Float4::Copy(v52, v34); /*0x7556ca*/
  int v35 = FromQuaternionAxisAngle(v11); /*0x7556db*/
  Float4::Copy(v52, v35); /*0x7556eb*/
  int v36 = FromQuaternionAxisAngle(v11); /*0x7556f9*/
  Float4::Copy(v52, v36); /*0x755709*/
  int v37 = FromQuaternionAxisAngle(v11); /*0x75571a*/
  Float4::Copy(v52, v37); /*0x75572a*/
  int v38 = FromQuaternionAxisAngle(v11); /*0x75573b*/
  Float4::Copy(v52, v38); /*0x75574b*/
  int v39 = FromQuaternionAxisAngle(v11); /*0x75575c*/
  Float4::Copy(v52, v39); /*0x75576c*/
  int v40 = FromQuaternionAxisAngle(v11); /*0x75577a*/
  Float4::Copy(v52, v40); /*0x75578a*/
  int v41 = FromQuaternionAxisAngle(v11); /*0x75579b*/
  Float4::Copy(v52, v41); /*0x7557ab*/
  int v42 = FromQuaternionAxisAngle(v11); /*0x7557bc*/
  Float4::Copy(v52, v42); /*0x7557cc*/
  int v43 = FromQuaternionAxisAngle(v6); /*0x7557dd*/
  Float4::Copy(v52, v43); /*0x7557ed*/
  int v44 = FromQuaternionAxisAngle(v6); /*0x7557fb*/
  Float4::Copy(v52, v44); /*0x75580b*/
  int v45 = FromQuaternionAxisAngle(v6); /*0x75581c*/
  Float4::Copy(v52, v45); /*0x75582c*/
  int v46 = FromQuaternionAxisAngle(v6); /*0x75583d*/
  Float4::Copy(v52, v46); /*0x75584d*/
  Matrix3x4::Identity(&unk_B454B8); /*0x755857*/
  Matrix3x4::Identity(&unk_B454E8); /*0x755861*/
  Matrix3x4::Identity(&unk_B45518); /*0x75586b*/
  Matrix3x4::Identity(&unk_B45548); /*0x755875*/
  Int4::Set2(0, 0, 0, 1065353216); /*0x75588a*/
  Int4::Set2(0, 0, 0, 1065353216); /*0x75589f*/
  Int4::Set2(0, 0, 0, 1065353216); /*0x7558b4*/
  Int4::Set2(0, 0, 0, 1065353216); /*0x7558c9*/
  Matrix3x4::Identity(&flt_B44318); /*0x7558d3*/
  float v50 = -dbl_B43F00; /*0x7558e6*/
  Matrix3x3::RotateX(v50); /*0x7558e9*/
  float v51 = -dbl_B44498; /*0x7558f7*/
  Matrix2D::Rotate(v51); /*0x7558ff*/
  int * v47 = (int *)&unk_B450B8; /*0x755904*/
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
} // namespace gamemd

// 0x755DB0
namespace gamemd {
int Voxel::SortDepth(ObjectClass * aP1, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void Voxel::SortDepth(ObjectClass *aP1, int a3)
{
  CCINIClass *v5; // eax
  CCINIClass *v6; // eax
  ObjectClass *v7; // esi
  void *uniqueId; // ecx
  CCINIClass *v19; // eax
  CCINIClass *v21; // eax
  CCINIClass *v25; // eax
  CCINIClass *v26; // eax
  CCINIClass *v27; // eax
  CCINIClass *v33; // eax
  CCINIClass *v37; // eax
  CCINIClass *v41; // eax
  CCINIClass *v45; // eax
  CCINIClass *v56; // eax
  void *nextArrayIndex; // eax
  CCINIClass *v71; // eax
  unsigned int v114; // [esp+10Ch] [ebp-5Ch]
  int v115; // [esp+110h] [ebp-58h]
  int v116; // [esp+114h] [ebp-54h]
  int v117; // [esp+118h] [ebp-50h]
  int v118[12]; // [esp+11Ch] [ebp-4Ch] BYREF
  char v119[16]; // [esp+14Ch] [ebp-1Ch] BYREF
  int v120; // [esp+15Ch] [ebp-Ch]
  int v121; // [esp+160h] [ebp-8h]
  int v122; // [esp+164h] [ebp-4h]
  unsigned int v4 = 0; /*0x755dbc*/
  if ( this->uniqueId ) /*0x755dbe*/
    __3_YAXPAX_Z((void *)this->uniqueId); /*0x755dc6*/
  v5 = (CCINIClass *)this->abstractFlags; /*0x755dce*/
  this->uniqueId = 0; /*0x755dd1*/
  if ( v5 ) /*0x755dd6*/
    __3_YAXPAX_Z(v5); /*0x755dd9*/
  v6 = (CCINIClass *)this->nextArrayIndex; /*0x755de1*/
  this->abstractFlags = 0; /*0x755de4*/
  if ( v6 ) /*0x755de9*/
    __3_YAXPAX_Z(v6); /*0x755dec*/
  v7 = aP1; /*0x755df4*/
  this->nextArrayIndex = 0; /*0x755dfb*/
  if ( !(*(int (__thiscall **)(ObjectClass *, int))(*(_DWORD *)aP1->__pad_0 + 28))(aP1, 1) ) /*0x755e09*/
    return 0; /*0x755e09*/
  char v113[16]; // [esp+FCh] [ebp-6Ch] BYREF
  (*(void (__thiscall **)(ObjectClass *, char *, int))(*(_DWORD *)aP1->__pad_0 + 36))(aP1, v113, 32); /*0x755e1d*/
  int v8 = v115; /*0x755e20*/
  int v9 = v116; /*0x755e27*/
  int v10 = v117; /*0x755e2e*/
  *(_DWORD *)&this->__pad_0[4] = v115; /*0x755e35*/
  *(_DWORD *)&this->__pad_0[8] = v9; /*0x755e3b*/
  *(_DWORD *)&this->__pad_0[12] = v10; /*0x755e42*/
  int v11 = __2_YAPAXI_Z(12 * v8); /*0x755e45*/
  int v12 = *(_DWORD *)&this->__pad_0[8]; /*0x755e4a*/
  this->uniqueId = v11; /*0x755e4d*/
  int v13 = __2_YAPAXI_Z(164 * v12); /*0x755e5c*/
  float v72 = *(float *)&v13; /*0x755e66*/
  if ( v13 ) /*0x755e6a*/
  {
    int v14 = v12 - 1; /*0x755e6c*/
    if ( v12 - 1 >= 0 ) /*0x755e71*/
    {
      int v15 = v13 + 64; /*0x755e73*/
      int v16 = v14 + 1; /*0x755e76*/
      do /*0x755e8f*/
      {
        Array::ForEach(v15, 12, 8, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_8); /*0x755e83*/
        v15 += 164; /*0x755e88*/
        --v16; /*0x755e8e*/
      }
      while ( v16 ); /*0x755e8f*/
      v13 = LODWORD(v72); /*0x755e91*/
      v4 = 0; /*0x755e95*/
    }
  }
  else
  {
    v13 = 0; /*0x755e99*/
  }
  this->abstractFlags = v13; /*0x755e9b*/
  int v17 = __2_YAPAXI_Z(*(_DWORD *)&this->__pad_0[12]); /*0x755ea2*/
  uniqueId = (void *)this->uniqueId; /*0x755ea7*/
  this->nextArrayIndex = v17; /*0x755eaf*/
  if ( !uniqueId ) /*0x755eb2*/
  {
LABEL_67:
    v71 = (CCINIClass *)this->abstractFlags; /*0x756453*/
    this->uniqueId = 0; /*0x756456*/
    if ( v71 ) /*0x75645b*/
      __3_YAXPAX_Z(v71); /*0x75645e*/
    nextArrayIndex = (void *)this->nextArrayIndex; /*0x756466*/
    this->abstractFlags = 0; /*0x756469*/
    if ( !nextArrayIndex ) /*0x75646e*/
      goto LABEL_71; /*0x75646e*/
    goto LABEL_70; /*0x75646e*/
  }
  if ( !this->abstractFlags || !v17 ) /*0x755ec3*/
  {
    __3_YAXPAX_Z(uniqueId); /*0x75644b*/
    goto LABEL_67; /*0x75644b*/
  }
  if ( a3 ) /*0x755ed0*/
  {
  void *v20; // eax
    VoxelPalette::Init(v118, (int)&DataGlobal_B2FB78, (int)g_VoxelColorPalette); /*0x755ee7*/
    if ( (*(int (__thiscall **)(ObjectClass *, float *, int))(*(_DWORD *)aP1->__pad_0 + 36))(aP1, &v72, 1) != 1 ) /*0x755efd*/
    {
      (*(void (__thiscall **)(ObjectClass *))(*(_DWORD *)aP1->__pad_0 + 52))(aP1); /*0x755f03*/
      if ( this->uniqueId ) /*0x755f06*/
        __3_YAXPAX_Z((void *)this->uniqueId); /*0x755f0e*/
      v19 = (CCINIClass *)this->abstractFlags; /*0x755f16*/
      this->uniqueId = 0; /*0x755f19*/
      if ( v19 ) /*0x755f1e*/
        __3_YAXPAX_Z(v19); /*0x755f21*/
      v20 = (void *)this->nextArrayIndex; /*0x755f29*/
      this->abstractFlags = 0; /*0x755f2c*/
      if ( !v20 ) /*0x755f31*/
        goto LABEL_32; /*0x755f31*/
      goto LABEL_31; /*0x755f31*/
    }
  char v94[4]; // [esp+84h] [ebp-E4h] BYREF
    if ( (*(int (__thiscall **)(ObjectClass *, char *, int))(*(_DWORD *)aP1->__pad_0 + 36))(aP1, v94, 1) != 1 ) /*0x755f46*/
    {
      (*(void (__thiscall **)(ObjectClass *))(*(_DWORD *)aP1->__pad_0 + 52))(aP1); /*0x755f4c*/
      if ( this->uniqueId ) /*0x755f4f*/
        __3_YAXPAX_Z((void *)this->uniqueId); /*0x755f57*/
      v21 = (CCINIClass *)this->abstractFlags; /*0x755f5f*/
      this->uniqueId = 0; /*0x755f62*/
      if ( v21 ) /*0x755f67*/
        __3_YAXPAX_Z(v21); /*0x755f6a*/
      v20 = (void *)this->nextArrayIndex; /*0x755f72*/
      this->abstractFlags = 0; /*0x755f75*/
      if ( !v20 ) /*0x755f7a*/
        goto LABEL_32; /*0x755f7a*/
LABEL_31:
      __3_YAXPAX_Z(v20); /*0x755f7c*/
LABEL_32:
      this->nextArrayIndex = 0; /*0x755f85*/
      VoxelPalette::Reset((int)v118); /*0x755f8f*/
      return 0; /*0x755fa0*/
    }
    v118[0] = LOBYTE(v72); /*0x755fb6*/
    v118[1] = (unsigned __int8)v94[0]; /*0x755fbd*/
    char * v23 = (char *)&DataGlobal_B2FB79; /*0x755fc4*/
    do /*0x755ff6*/
    {
      (*(void (__thiscall **)(ObjectClass *, char *, int))(*(_DWORD *)aP1->__pad_0 + 36))(aP1, v23 - 1, 1); /*0x755fd3*/
      (*(void (__thiscall **)(ObjectClass *, char *, int))(*(_DWORD *)aP1->__pad_0 + 36))(aP1, v23, 1); /*0x755fdd*/
      (*(void (__thiscall **)(ObjectClass *, char *, int))(*(_DWORD *)aP1->__pad_0 + 36))(aP1, v23 + 1, 1); /*0x755fea*/
      v23 += 3; /*0x755fed*/
    }
    while ( v23 < DataGlobal_B2FE79 ); /*0x755ff6*/
    if ( v114 > 1 ) /*0x756002*/
      (*(void (__thiscall **)(ObjectClass *, unsigned int, int))(*(_DWORD *)aP1->__pad_0 + 40))( /*0x756016*/
        aP1,
        768 * v114 - 768,
        1);
    GenerateLightRemapTable(v118, 0, 0); /*0x756022*/
    VoxelPalette::Reset((int)v118); /*0x75602e*/
  }
  else
  {
    (*(void (__thiscall **)(ObjectClass *, unsigned int, int))(*(_DWORD *)aP1->__pad_0 + 40))(aP1, 770 * v114, 1); /*0x75604d*/
  }
  if ( !*(_DWORD *)&this->__pad_0[4] ) /*0x756055*/
  {
LABEL_43:
    if ( (*(int (__thiscall **)(ObjectClass *, int, _DWORD))(*(_DWORD *)aP1->__pad_0 + 36))( /*0x7560b5*/
           aP1,
           this->nextArrayIndex,
           *(_DWORD *)&this->__pad_0[12]) == *(_DWORD *)&this->__pad_0[12] )
    {
      int v28 = *(_DWORD *)&this->__pad_0[8]; /*0x75612d*/
      v72 = 0.0; /*0x756134*/
      if ( !v28 ) /*0x756138*/
      {
LABEL_59:
        (*(void (__thiscall **)(ObjectClass *))(*(_DWORD *)v7->__pad_0 + 52))(v7); /*0x7563fe*/
        return 1; /*0x756414*/
      }
      unsigned int v29 = 0; /*0x75613e*/
  _DWORD v101[4]; // [esp+A0h] [ebp-C8h] BYREF
      while ( (*(int (__thiscall **)(ObjectClass *, _DWORD *, int))(*(_DWORD *)v7->__pad_0 + 36))(v7, v101, 92) == 92 ) /*0x756158*/
      {
  char v109; // [esp+F8h] [ebp-70h]
        *(_BYTE *)(this->abstractFlags + v29 + 160) = v109; /*0x756168*/
  char v110; // [esp+F9h] [ebp-6Fh]
        *(_BYTE *)(this->abstractFlags + v29 + 161) = v110; /*0x756179*/
  char v111; // [esp+FAh] [ebp-6Eh]
        *(_BYTE *)(this->abstractFlags + v29 + 162) = v111; /*0x75618a*/
  char v112; // [esp+FBh] [ebp-6Dh]
        *(_BYTE *)(this->abstractFlags + v29 + 163) = v112; /*0x75619b*/
        *(float *)(this->abstractFlags + v29 + 12) = *(float *)&v101[3]; /*0x7561b3*/
  char v102[48]; // [esp+B0h] [ebp-B8h] BYREF
        qmemcpy((void *)(this->abstractFlags + v29 + 16), Matrix::Copy12Float(v118, (int)v102), 0x30u); /*0x7561d2*/
  float v103; // [esp+E0h] [ebp-88h]
        double v30 = v103; /*0x7561d4*/
  float v104; // [esp+E4h] [ebp-84h]
        double v31 = v104; /*0x7561db*/
  float v105; // [esp+E8h] [ebp-80h]
        double v32 = v105; /*0x7561e2*/
  float v106; // [esp+ECh] [ebp-7Ch]
        float v95 = v106; /*0x7561fe*/
        float v73 = v106; /*0x756210*/
        v33 = (CCINIClass *)this->abstractFlags; /*0x756214*/
  float v107; // [esp+F0h] [ebp-78h]
        float v74 = v107; /*0x756217*/
        float v96 = v107; /*0x75621b*/
        float v97 = v105; /*0x756226*/
  float v108; // [esp+F4h] [ebp-74h]
        float v75 = v108; /*0x75622e*/
        char * v34 = &v33->ownsFile + v29; /*0x756236*/
        float v35 = v107; /*0x75623a*/
        float v85 = v106; /*0x75623e*/
        *(float *)v34 = v106; /*0x756242*/
        float v36 = v97; /*0x756244*/
        *((float *)v34 + 1) = v35; /*0x75624a*/
        float v86 = v31; /*0x75624d*/
        *((float *)v34 + 2) = v36; /*0x756251*/
        v37 = (CCINIClass *)this->abstractFlags; /*0x756254*/
        float v87 = v32; /*0x75625d*/
        char * v38 = &v37->__pad_48[v29 + 4]; /*0x756261*/
        float v39 = v86; /*0x756265*/
        *(float *)v38 = v85; /*0x75626b*/
        float v40 = v87; /*0x75626d*/
        float v98 = v30; /*0x756271*/
        *((float *)v38 + 1) = v39; /*0x756275*/
        *((float *)v38 + 2) = v40; /*0x75627a*/
        v41 = (CCINIClass *)this->abstractFlags; /*0x75627d*/
        float v99 = v31; /*0x756284*/
        float * v42 = (float *)&v41[1].__pad_0[v29]; /*0x756288*/
        float v43 = v99; /*0x75628c*/
        float v100 = v32; /*0x756292*/
        *v42 = v98; /*0x756299*/
        float v44 = v100; /*0x75629d*/
        v42[1] = v43; /*0x7562a4*/
        float v91 = v30; /*0x7562a7*/
        float v92 = v74; /*0x7562af*/
        v42[2] = v44; /*0x7562b3*/
        v45 = (CCINIClass *)this->abstractFlags; /*0x7562b6*/
        float v93 = v32; /*0x7562bd*/
        int * v46 = &v45[1].headNode[v29 / 4 + 2]; /*0x7562c5*/
        float v47 = v92; /*0x7562c9*/
        float v76 = v73; /*0x7562cd*/
        double v48 = v74; /*0x7562d1*/
        *(float *)v46 = v91; /*0x7562d5*/
        float v49 = v93; /*0x7562d7*/
        float v77 = v48; /*0x7562db*/
        double v50 = v75; /*0x7562df*/
        *((float *)v46 + 1) = v47; /*0x7562e3*/
        float v78 = v50; /*0x7562e6*/
        double v51 = v73; /*0x7562ea*/
        *((float *)v46 + 2) = v49; /*0x7562ee*/
        int v52 = this->abstractFlags + v29 + 112; /*0x7562f8*/
        float v53 = v77; /*0x7562fc*/
        float v79 = v51; /*0x756300*/
        *(float *)v52 = v76; /*0x756304*/
        float v54 = v78; /*0x756306*/
        *(float *)(v52 + 4) = v53; /*0x75630c*/
        float v80 = v31; /*0x75630f*/
        double v55 = v75; /*0x756313*/
        *(float *)(v52 + 8) = v54; /*0x756317*/
        v56 = (CCINIClass *)this->abstractFlags; /*0x75631a*/
        float v81 = v55; /*0x756321*/
        float * v57 = (float *)&v56[1].__pad_20[v29 + 4]; /*0x756325*/
        float v58 = v80; /*0x756329*/
        *v57 = v79; /*0x75632f*/
        float v59 = v81; /*0x756331*/
        float v82 = v30; /*0x756335*/
        v57[1] = v58; /*0x756339*/
        float v83 = v31; /*0x75633c*/
        double v60 = v75; /*0x756340*/
        v57[2] = v59; /*0x756344*/
        int v61 = this->abstractFlags + v29 + 136; /*0x75634e*/
        float v62 = v83; /*0x756355*/
        float v84 = v60; /*0x756359*/
        *(float *)v61 = v82; /*0x75635d*/
        float v63 = v84; /*0x75635f*/
        float v88 = v30; /*0x756363*/
        double v64 = v74; /*0x756367*/
        *(float *)(v61 + 4) = v62; /*0x75636b*/
        float v89 = v64; /*0x75636e*/
        double v65 = v75; /*0x756372*/
        *(float *)(v61 + 8) = v63; /*0x756376*/
        int v66 = this->abstractFlags + v29 + 148; /*0x756380*/
        float v90 = v65; /*0x756387*/
        *(float *)v66 = v88; /*0x75638b*/
        float v67 = v90; /*0x756391*/
        *(float *)(v66 + 4) = v89; /*0x756395*/
        v7 = aP1; /*0x756398*/
        v29 += 164; /*0x75639f*/
        *(float *)(v66 + 8) = v67; /*0x7563a5*/
        *(_DWORD *)(this->abstractFlags + v29 - 164) = this->nextArrayIndex + v101[0]; /*0x7563b7*/
        *(_DWORD *)(this->abstractFlags + v29 - 160) = this->nextArrayIndex + v101[1]; /*0x7563cd*/
        float v68 = v72; /*0x7563e1*/
        *(_DWORD *)(this->abstractFlags + v29 - 156) = this->nextArrayIndex + v101[2]; /*0x7563e7*/
        unsigned int v69 = *(_DWORD *)&this->__pad_0[8]; /*0x7563ee*/
        LODWORD(v72) = LODWORD(v68) + 1; /*0x7563f4*/
        if ( LODWORD(v68) + 1 >= v69 ) /*0x7563f8*/
          goto LABEL_59; /*0x7563f8*/
      }
      if ( this->uniqueId ) /*0x756417*/
        __3_YAXPAX_Z((void *)this->uniqueId); /*0x75641f*/
      v25 = (CCINIClass *)this->abstractFlags; /*0x756427*/
      this->uniqueId = 0; /*0x75642a*/
      if ( v25 ) /*0x75642f*/
        goto LABEL_63; /*0x75642f*/
    }
    else
    {
      if ( this->uniqueId ) /*0x7560b7*/
        __3_YAXPAX_Z((void *)this->uniqueId); /*0x7560c1*/
      v25 = (CCINIClass *)this->abstractFlags; /*0x7560c9*/
      this->uniqueId = 0; /*0x7560cc*/
      if ( v25 ) /*0x7560d1*/
LABEL_63:
        __3_YAXPAX_Z(v25); /*0x756431*/
    }
    nextArrayIndex = (void *)this->nextArrayIndex; /*0x75643a*/
    this->abstractFlags = 0; /*0x75643d*/
    if ( !nextArrayIndex ) /*0x756442*/
    {
LABEL_71:
      this->nextArrayIndex = 0; /*0x756479*/
      (*(void (__thiscall **)(ObjectClass *))(*(_DWORD *)v7->__pad_0 + 52))(v7); /*0x756480*/
      return 0; /*0x756486*/
    }
LABEL_70:
    __3_YAXPAX_Z(nextArrayIndex); /*0x756470*/
    goto LABEL_71; /*0x756471*/
  }
  int v24 = 0; /*0x756057*/
  while ( (*(int (__thiscall **)(ObjectClass *, char *, int))(*(_DWORD *)aP1->__pad_0 + 36))(aP1, v119, 28) == 28 ) /*0x75606d*/
  {
    ++v4; /*0x756079*/
    *(_DWORD *)(this->uniqueId + v24) = v120; /*0x75607a*/
    *(_DWORD *)(this->uniqueId + v24 + 4) = v121; /*0x756087*/
    *(_BYTE *)(this->uniqueId + v24 + 8) = v122; /*0x756095*/
    v24 += 12; /*0x75609c*/
    if ( v4 >= *(_DWORD *)&this->__pad_0[4] ) /*0x7560a1*/
      goto LABEL_43; /*0x7560a1*/
  }
  if ( this->uniqueId ) /*0x7560dc*/
    __3_YAXPAX_Z((void *)this->uniqueId); /*0x7560e6*/
  v26 = (CCINIClass *)this->abstractFlags; /*0x7560ee*/
  this->uniqueId = 0; /*0x7560f1*/
  if ( v26 ) /*0x7560f6*/
    __3_YAXPAX_Z(v26); /*0x7560f9*/
  v27 = (CCINIClass *)this->nextArrayIndex; /*0x756101*/
  this->abstractFlags = 0; /*0x756104*/
  if ( v27 ) /*0x756109*/
    __3_YAXPAX_Z(v27); /*0x75610c*/
  this->nextArrayIndex = 0; /*0x756114*/
  (*(void (__thiscall **)(ObjectClass *))(*(_DWORD *)aP1->__pad_0 + 52))(aP1); /*0x75611b*/
  return 0; /*0x755f94*/
}
}
} // namespace gamemd

// 0x756590
namespace gamemd {
int Voxel::ProcessColor(unsigned int * a2, float * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void Voxel_ProcessColor(_DWORD *this, _DWORD *a2, float *a3)
{
  unsigned __int8 v6; // dl
  unsigned __int8 v16; // [esp+14h] [ebp-40h]
  unsigned __int8 v18; // [esp+1Ch] [ebp-38h]
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
  int v4 = this->q014 + 164 * (a2[2] + *(_DWORD *)(this->q010 + 12 * a2[1])); /*0x7565b8*/
  int v5 = 9 * a2[3]; /*0x7565be*/
  v16 = *(_BYTE *)(v4 + 161); /*0x7565cd*/
  v6 = *(_BYTE *)(v4 + 162); /*0x7565d1*/
  v32 = *(_BYTE *)(v4 + 160); /*0x7565db*/
  v18 = v6; /*0x7565e3*/
  v33 = v16; /*0x7565e7*/
  v34 = v6; /*0x7565eb*/
  _DWORD v19[6]; // [esp+20h] [ebp-34h] BYREF
  v19[0] = *(_DWORD *)v4; /*0x7565f1*/
  v19[1] = *(_DWORD *)(v4 + 4); /*0x7565f8*/
  int v7 = 3 * dword_8468C4[v5]; /*0x756605*/
  v19[2] = *(_DWORD *)(v4 + 8); /*0x756608*/
  float * v8 = (float *)&a2[v7 + 10]; /*0x75660c*/
  int v35 = (int)&a2[3 * dword_8468CC[v5] + 10]; /*0x756630*/
  int v9 = (int)&a2[3 * dword_8468D0[v5] + 10]; /*0x756637*/
  int v10 = dword_8468E0[v5]; /*0x756641*/
  v19[4] = dword_8468DC[v5]; /*0x756647*/
  int v15 = v9; /*0x75664f*/
  int v11 = dword_8468D8[v5]; /*0x756658*/
  v19[5] = v32 * v10; /*0x756661*/
  v19[3] = (v32 - 1) * dword_8468D4[v5] + v32 * (v16 - 1) * v11; /*0x75668a*/
  v20 = Math::RoundToInt((*v8 + 128.0 - *a3) * 256.0); /*0x7566a7*/
  v21 = Math::RoundToInt((v8[1] + 128.0 - a3[1]) * 256.0); /*0x7566cb*/
  double v12 = (double)v32; /*0x7566e7*/
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
    float v36 = (float)v16; /*0x75670f*/
    v28 = Math::RoundToInt((*(float *)(v35 + 8) - v8[2]) / v36 * 256.0); /*0x7567f0*/
    float v17 = (float)v18; /*0x756740*/
    v31 = Math::RoundToInt((*(float *)(v15 + 8) - v8[2]) / v17 * 256.0); /*0x75680a*/
  }
  int v13 = dword_8468C0[v5]; /*0x756818*/
  if ( dword_B43180 ) /*0x756820*/
    v13 |= 2u; /*0x756822*/
  if ( dword_B43184 ) /*0x75682c*/
    v13 |= 4u; /*0x75682e*/
  if ( !*(_BYTE *)(v4 + 163) ) /*0x756831*/
    v13 |= 8u; /*0x75683b*/
  return funcs_756843[v13]((int)v19); /*0x75684d*/
}
}
} // namespace gamemd

// 0x75C240
namespace gamemd {
char Voxel::DrawHelper(IUnknown * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void Voxel::DrawHelper(IUnknown *aP1)
{
  IUnknown *v3; // ebx
  BuildingTypeClass *v4; // ecx
  BuildingTypeClass *v7; // eax
  BuildingTypeClass *v15; // eax
  IUnknown *v18; // eax
  ObjectClass *v21; // ebx
  IUnknown *v22; // eax
  _DWORD *eax39; // eax
  _DWORD *eax39b; // eax
  BuildingTypeClass *v25; // eax
  BuildingTypeClass *v27; // ecx
  AbstractClass *v31; // [esp-4h] [ebp-2Ch]
  __int16 var1C_2; // [esp+Eh] [ebp-1Ah]
  int a1; // [esp+10h] [ebp-18h] BYREF
  int Strength; // [esp+14h] [ebp-14h]
  IUnknown *v34; // [esp+18h] [ebp-10h]
  _DWORD v38[3]; // [esp+1Ch] [ebp-Ch] BYREF
  char aP1a; // [esp+2Ch] [ebp+4h]

  v3 = (IUnknown *)CONTAINING_RECORD(this, IUnknown, field_0)->__pad_28; /*0x75c251*/
  if ( this->q028 == g_AsyncMovieState.field_0 /*0x75c26e*/
    && this->q02C == g_AsyncMovieState.field_4
    && this->q030 == g_AsyncMovieState.field_8 )
  {
    v4 = (BuildingTypeClass *)this->q00C; /*0x75c278*/
    a1 = v4->Armor[0]; /*0x75c287*/
    Strength = v4->Strength; /*0x75c28e*/
    v34 = (IUnknown *)v4->Image; /*0x75c295*/
    (*(void (__stdcall **)(int *))(*(_DWORD *)v4->vtable0 + 244))(&a1); /*0x75c2a0*/
  }
  else
  {
    (*(void (__stdcall **)(_DWORD *))(*(_DWORD *)this->q00C + 244))(this + 10); /*0x75c276*/
  }
  aP1a = 0; /*0x75c2aa*/
  v38[0] = aP1->field_0; /*0x75c2b3*/
  int v6 = aP1->field_0; /*0x75c2b7*/
  v38[1] = aP1->field_4; /*0x75c2bc*/
  v38[2] = aP1->field_8; /*0x75c2c3*/
  if ( v6 == g_AsyncMovieState.field_0
    && aP1->field_4 == g_AsyncMovieState.field_4
    && aP1->field_8 == g_AsyncMovieState.field_8 )
  {
    v3->field_0 = aP1->field_0; /*0x75c5b7*/
    this->q02C = aP1->field_4; /*0x75c5bc*/
    this->q030 = aP1->field_8; /*0x75c5c2*/
  }
  else
  {
    if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this->q00C + 388))(this->q00C) == 8 /*0x75c33c*/
      || (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this->q00C + 388))(this->q00C) == 9
      || (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this->q00C + 388))(this->q00C) == 7
      || (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this->q00C + 388))(this->q00C) == 11
      || (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this->q00C + 388))(this->q00C) == 25 )
    {
      v7 = (BuildingTypeClass *)this->q00C; /*0x75c342*/
      int v8 = *(_DWORD *)&v7->DebrisTypes[656]; /*0x75c345*/
      if ( v8 ) /*0x75c34d*/
      {
        if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v8 + 44))(*(_DWORD *)&v7->DebrisTypes[656]) == 1 ) /*0x75c359*/
        {
          var1C_2 = aP1->field_4 / 256; /*0x75c37e*/
          int v9 = aP1->field_0 / 256; /*0x75c385*/
          _WORD * v10 = (_WORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v8 + 440))(v8, &a1); /*0x75c388*/
          if ( *v10 == (_WORD)v9 && v10[1] == var1C_2 ) /*0x75c39c*/
            aP1a = 1; /*0x75c39e*/
        }
      }
      int v11 = *(_DWORD *)(this->q00C + 1444); /*0x75c3a6*/
  char v32[4]; // [esp+Ch] [ebp-1Ch]
      *(_DWORD *)v32 = v11; /*0x75c3ae*/
      if ( v11 ) /*0x75c3b2*/
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 44))(v11) == 2 ) /*0x75c3bc*/
        {
          int v12 = aP1->field_0 / 256; /*0x75c3e4*/
          int v13 = aP1->field_4 / 256; /*0x75c3e7*/
          _WORD * v14 = (_WORD *)(*(int (__thiscall **)(char *, int *))(**(_DWORD **)v32 + 440))(*(char **)v32, &a1); /*0x75c3ea*/
          if ( *v14 == (_WORD)v12 && v14[1] == (_WORD)v13 ) /*0x75c3f9*/
            aP1a = 1; /*0x75c3fb*/
        }
      }
      v15 = (BuildingTypeClass *)this->q00C; /*0x75c400*/
      _DWORD * v16 = *(_DWORD **)&v15->DebrisTypes[656]; /*0x75c403*/
      if ( v16 ) /*0x75c40b*/
      {
        if ( (*(int (__thiscall **)(_DWORD))(*v16 + 44))(*(_DWORD *)&v15->DebrisTypes[656]) == 6 ) /*0x75c417*/
        {
          _DWORD * v17 = Coord::To_Cell(&DataGlobal_87F7E8, aP1); /*0x75c41f*/
          if ( Cell::IsBridge(v17) == v16 ) /*0x75c42d*/
            aP1a = 1; /*0x75c42f*/
        }
      }
    }
    v18 = *(IUnknown **)(this->q00C + 732); /*0x75c439*/
    if ( v18 )
    {
      if ( *(_DWORD *)&v18->__pad_2B8[32] )
      {
        _DWORD * v19 = (_DWORD *)this->q00C; /*0x75c44b*/
        a1 = 0; /*0x75c44f*/
        Strength = 0; /*0x75c453*/
        _DWORD * v20 = Coord::To_Cell(&DataGlobal_87F7E8, aP1); /*0x75c463*/
        if ( Object::FindClosestObjectCell(v20, (IUnknown *)&a1, 0, 0) == v19[183] )
        {
          v21 = v19 ? ((*(int (__thiscall **)(_DWORD *))(*v19 + 44))(v19) == 15 ? (ObjectClass *)v19 : 0) : 0;
          v22 = (IUnknown *)Coord::To_Cell(&DataGlobal_87F7E8, aP1); /*0x75c49a*/
          if ( BuildingClass::CheckBridge(*(_DWORD **)(*(_DWORD *)(this->q00C + 732) + 728), v21, v22) ) /*0x75c4b0*/
            aP1a = 1; /*0x75c4b9*/
        }
      }
    }
    if ( (*((_DWORD *)Coord::To_Cell(&DataGlobal_87F7E8, (IUnknown *)v38) + 80) & 0x100) == 0 /*0x75c513*/
  int *v23; // eax
      || (v23 = (int *)(this->q00C + 156),
          a1 = *v23,
          Strength = v23[1],
  int v24; // edi
          v24 = v23[2],
  char v33; // [esp+Ch] [ebp-1Ch]
          v33 = 1,
          v24 <= 3 * g_AsyncMovieState.field_40 + Cell::GetGroundHeight(v38)) )
    {
      v33 = 0; /*0x75c515*/
    }
    eax39 = Coord::To_Cell(&DataGlobal_87F7E8, (IUnknown *)v38); /*0x75c53a*/
    int * v26 = ObjectPlacement::CalcPosition(eax39, &a1, (IUnknown *)v38, aP1a, v33, 0); /*0x75c541*/
    v3 = (IUnknown *)(this + 10); /*0x75c548*/
    this->q028 = *v26; /*0x75c54d*/
    this->q02C = v26[1]; /*0x75c552*/
    v31 = (AbstractClass *)this->q00C; /*0x75c55b*/
    this->q030 = v26[2]; /*0x75c562*/
    eax39b = Coord::To_Cell(&DataGlobal_87F7E8, (IUnknown *)(this + 10)); /*0x75c565*/
    if ( !CrateClass::ProcessPickup(eax39b, v31) ) /*0x75c56c*/
    {
      v25 = (BuildingTypeClass *)this->q00C; /*0x75c575*/
      if ( !v25->Name[29] ) /*0x75c578*/
      {
        v3->field_0 = g_AsyncMovieState.field_0; /*0x75c58a*/
        this->q02C = g_AsyncMovieState.field_4; /*0x75c592*/
        this->q030 = g_AsyncMovieState.field_8; /*0x75c59b*/
        if ( !v25->Name[44] ) /*0x75c59e*/
          return 0; /*0x75c5b0*/
      }
    }
  }
  if ( v3->field_0 == g_AsyncMovieState.field_0 /*0x75c5e7*/
    && v3->field_4 == g_AsyncMovieState.field_4
    && v3->field_8 == g_AsyncMovieState.field_8 )
  {
    v27 = (BuildingTypeClass *)this->q00C; /*0x75c602*/
    a1 = v27->Armor[0]; /*0x75c611*/
    Strength = v27->Strength; /*0x75c618*/
    v34 = (IUnknown *)v27->Image; /*0x75c61f*/
    (*(void (__thiscall **)(BuildingTypeClass *, int *))(*(_DWORD *)v27->vtable0 + 240))(v27, &a1); /*0x75c62a*/
    return 0; /*0x75c632*/
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, IUnknown *))(*(_DWORD *)this->q00C + 240))(this->q00C, v3); /*0x75c5f1*/
    return 1; /*0x75c5f9*/
  }
}
}
} // namespace gamemd

// 0x75EDF0
namespace gamemd {
int Voxel::BlendShadowColor(int a2, WaveClass * aP2, int arg8, unsigned short * a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void Voxel::BlendShadowColor(int a2, WaveClass *aP2, int arg8, _WORD *a4)
{
  int result; // eax

  __int64 v5; // rax
  v5 = *(__int16 *)&g_AsyncMovieState[1316][2 * this->q130 /*0x75ee44*/
                                              + 328
                                              + 2
                                              * *(unsigned __int16 *)&g_AsyncMovieState[1820][600 * arg8
                                                                                                + 920
                                                                                                + 2
                                                                                                * abs32(a2 - this->q0CC - (_DWORD)aP2)]];
  LODWORD(v5) = (HIDWORD(v5) ^ v5) - HIDWORD(v5); /*0x75ee47*/
  int v6 = *(_DWORD *)&g_AsyncMovieState[1820][4 * v5 + 836]; /*0x75ee50*/
  WORD2(v5) = a4[*(this + (_DWORD)v5 + 130)]; /*0x75ee57*/
  int v7; // ecx
  v7 = ((v6 /*0x75eeb8*/
       * (unsigned __int8)((unsigned __int8)(WORD2(v5) >> g_CellDirectionOffsets[5968]) << g_CellDirectionOffsets[5972])) >> 8)
     + (unsigned __int8)((unsigned __int8)(WORD2(v5) >> g_CellDirectionOffsets[5968]) << g_CellDirectionOffsets[5972]);
  int v8; // eax
  v8 = ((v6 /*0x75eec6*/
       * (unsigned __int8)((unsigned __int8)(WORD2(v5) >> g_CellDirectionOffsets[5960]) << g_CellDirectionOffsets[5964])) >> 8)
     + (unsigned __int8)((unsigned __int8)(WORD2(v5) >> g_CellDirectionOffsets[5960]) << g_CellDirectionOffsets[5964]);
  int v9 = (unsigned __int8)((unsigned __int8)(WORD2(v5) >> g_CellDirectionOffsets[5952]) << g_CellDirectionOffsets[5956]); /*0x75eec8*/
  if ( v8 > 255 ) /*0x75eed3*/
    v8 = 255; /*0x75eed5*/
  int v10 = 255; /*0x75eee0*/
  if ( v7 <= 255 ) /*0x75eee5*/
    v10 = v7; /*0x75eee7*/
  result = v8 >> g_CellDirectionOffsets[5964] << g_CellDirectionOffsets[5960]; /*0x75ef07*/
  *a4 = (v9 >> g_CellDirectionOffsets[5956] << g_CellDirectionOffsets[5952]) /*0x75ef19*/
      | result
      | (v10 >> g_CellDirectionOffsets[5972] << g_CellDirectionOffsets[5968]);
  return result; /*0x75ef1c*/
}
}
} // namespace gamemd

// 0x75F140
namespace gamemd {
int Voxel::loadSectionData()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_75F140(_DWORD *this)
{
  int result; // eax

  int v2 = (*(int (__thiscall **)(int))(*(_DWORD *)g_DSurface_Hidden_2 + 116))(g_DSurface_Hidden_2) >> 1; /*0x75f14e*/
  *(this + 107) = -v2; /*0x75f159*/
  *(this + 108) = 1 - v2; /*0x75f164*/
  *(this + 110) = v2 + 1; /*0x75f16a*/
  *(this + 111) = v2; /*0x75f176*/
  this->q01C = v2 - 1; /*0x75f17c*/
  int v3 = *(this + 115); /*0x75f182*/
  int v4 = -1 - v2; /*0x75f188*/
  *(this + 130) = 0; /*0x75f18c*/
  *(this + 131) = 0; /*0x75f192*/
  _DWORD * v5 = this + v3 + 107; /*0x75f198*/
  *(this + 109) = 1; /*0x75f19f*/
  *(this + 113) = -1; /*0x75f1a9*/
  *(this + 114) = v4; /*0x75f1b3*/
  *(this + 132) = *v5; /*0x75f1bb*/
  *(this + 133) = *v5; /*0x75f1c3*/
  *(this + 134) = *v5; /*0x75f1cb*/
  *(this + 135) = *v5; /*0x75f1d3*/
  *(this + 136) = *v5; /*0x75f1db*/
  this->q089 = 2 * *v5; /*0x75f1e5*/
  this->q08A = 2 * *v5; /*0x75f1ef*/
  this->q08B = 2 * *v5; /*0x75f1f9*/
  *(this + 140) = 3 * *v5; /*0x75f204*/
  *(this + 141) = 3 * *v5; /*0x75f20f*/
  result = 3 * *v5; /*0x75f217*/
  *(this + 142) = result; /*0x75f21a*/
  return result; /*0x75f220*/
}
}
} // namespace gamemd

// 0x75F4C0
namespace gamemd {
char Voxel::renderSection(ObjectClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void Voxel::renderSection(ObjectClass *aP1)
{
  ObjectClass *v3; // eax
  ObjectClass *v8; // edx
  v3 = (ObjectClass *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)aP1->__pad_0); /*0x75f4cd*/
  int v4 = *(this + 124); /*0x75f4d2*/
  _DWORD * v5 = this + 124; /*0x75f4d8*/
  aP1 = v3; /*0x75f4de*/
  int v6 = (*(int (__thiscall **)(_DWORD *, ObjectClass **))(v4 + 16))(v5, &aP1); /*0x75f4e9*/
  if ( v6 == -1 ) /*0x75f4ef*/
  {
    int v7 = v5[2]; /*0x75f4f1*/
    if ( v5[4] < v7 /*0x75f51b*/
      || ((LOBYTE(v6) = *((_BYTE *)v5 + 13), (_BYTE)v6) || !v7)
      && (v6 = v5[5], v6 > 0)
      && (LOBYTE(v6) = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*v5 + 8))(v5, v7 + v6, 0), (_BYTE)v6) )
    {
      v6 = v5[4]; /*0x75f51d*/
      v8 = (ObjectClass *)v5[1]; /*0x75f520*/
      v5[4] = v6 + 1; /*0x75f526*/
      *(_DWORD *)&v8->__pad_0[4 * v6] = aP1; /*0x75f52d*/
    }
  }
  return v6; /*0x75f530*/
}
}
} // namespace gamemd

// 0x75FA90
namespace gamemd {
void Voxel::ShadowCalc(WaveClass * aP1, int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void Voxel::ShadowCalc(int this, WaveClass *aP1, int *a2)
{
  CCINIClass *v16; // ecx
  unsigned __int16 *v20; // ebx
  int m; // ebp
  MouseClass *v33; // ecx
  TacticalMap *v36; // ecx
  unsigned int SamplePosition; // ecx
  unsigned __int16 *v42; // ecx
  int j; // ebx
  WaveClass *v47; // ecx
  MouseClass *v51; // ebp
  int i; // edi
  int k; // [esp+8h] [ebp-3Ch]
  WaveClass *aP2; // [esp+Ch] [ebp-38h]
  _WORD *a4a; // [esp+18h] [ebp-2Ch]
  _WORD *a4d; // [esp+18h] [ebp-2Ch]
  unsigned __int16 *a4b; // [esp+18h] [ebp-2Ch]
  _WORD *a4c; // [esp+18h] [ebp-2Ch]
  MouseClass *v82; // [esp+3Ch] [ebp-8h]
  MouseClass *v84; // [esp+3Ch] [ebp-8h]
  MouseClass *v85; // [esp+40h] [ebp-4h]
  unsigned __int16 aP1a; // [esp+48h] [ebp+4h]
  unsigned __int16 aP1b; // [esp+48h] [ebp+4h]
  WaveClass *aP1c; // [esp+48h] [ebp+4h]
  int *a2a; // [esp+4Ch] [ebp+8h]
  int *a2b; // [esp+4Ch] [ebp+8h]

  int v58 = ZCoordToScreenY(*(_DWORD *)(this + 188)); /*0x75faa8*/
  int v74; // [esp+24h] [ebp-20h]
  v74 = (*(int (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)&DataGlobal_87F8E4[31280] + 92))( /*0x75fab9*/
          *(_DWORD *)&DataGlobal_87F8E4[31280],
          0,
          0);
  if ( v74 ) /*0x75fabd*/
  {
    int * v4 = a2; /*0x75fac3*/
    int v5 = a2[1]; /*0x75fac9*/
    int v78 = v5 + a2[3] - 3; /*0x75fad9*/
    int v77 = v5 + 3; /*0x75fadf*/
    int v79 = *a2 + 3; /*0x75faf0*/
    int v69 = *a2 + a2[2] - 3; /*0x75faf8*/
    int v6 = *(_DWORD *)&aP1->__pad_0[4] - this->q0D0; /*0x75fb09*/
    aP2 = (WaveClass *)(*(_DWORD *)aP1->__pad_0 - this->Voxel_field_0xCC); /*0x75fb17*/
    int v76 = v6; /*0x75fb1b*/
    ProcessVoxelVertexData((_DWORD *)(this + 328), (int *)(this + 416)); /*0x75fb1f*/
    if ( *(_DWORD *)(this + 424) ) /*0x75fb24*/
    {
  _WORD *a4; // [esp+18h] [ebp-2Ch]
      int v7 = *(_DWORD *)(this + 416); /*0x75fb48*/
      int v8 = v6 + *(_DWORD *)&DataGlobal_87F8E4[30400] + *(_DWORD *)(this + 420); /*0x75fb4e*/
      int v61 = v8; /*0x75fb50*/
      int v9 = v7 + v8 - 1; /*0x75fb54*/
      if ( v9 >= a2[3] + a2[1] ) /*0x75fb5a*/
      {
        a4 = (_WORD *)(a2[3] + a2[1]); /*0x75fb62*/
        v9 = (int)a4; /*0x75fb66*/
      }
      else
      {
        a4 = (_WORD *)(v7 + v8 - 1); /*0x75fb5c*/
      }
      Voxel::loadSectionData((_DWORD *)this); /*0x75fb6a*/
      int v10 = *(_DWORD *)(this + 460); /*0x75fb6f*/
      if ( v10 <= 1 || v10 >= 6 ) /*0x75fb81*/
      {
        a4d = (_WORD *)Audio::GetSamplePosition( /*0x75fe6e*/
                         *(int *)&DataGlobal_87F8E4[32096],
                         0,
                         (MouseClass *)(v8 - *(_DWORD *)&DataGlobal_87F8E4[30400]));
        int v35 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&DataGlobal_87F8E4[31280] + 124))(*(_DWORD *)&DataGlobal_87F8E4[31280]); /*0x75fe74*/
        HIWORD(v36) = *(_WORD *)&DataGlobal_87F8E4[32098]; /*0x75fe77*/
        int v81 = v9 - v8; /*0x75fe88*/
        int v72 = *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] + 40); /*0x75fe90*/
        if ( (unsigned int)&a4d[v35 + v72 * (v9 - v8 + 1)] >= *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] /*0x75fea6*/
                                                                        + 28) )
        {
          LOWORD(v36) = *(_WORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] + 36) - v9; /*0x76000b*/
          int v46 = v9; /*0x76000e*/
          int v56 = v9; /*0x760012*/
          v47 = (WaveClass *)((char *)v36 - v58 - 2); /*0x760016*/
          aP1c = v47; /*0x76001b*/
          if ( v9 >= v8 ) /*0x76001f*/
          {
            int v73 = 8 * v81; /*0x76002c*/
            do /*0x760149*/
            {
              int v48 = v4[1]; /*0x760030*/
              if ( v46 >= v48 + 2 && v46 <= v48 + v4[3] - 2 ) /*0x760047*/
              {
                _DWORD * v49 = (_DWORD *)(*(_DWORD *)(this + 424) + v73); /*0x760060*/
                int v50 = (int)&aP2->__pad_0[v49[1]]; /*0x76006a*/
                if ( v50 >= *v4 + v4[2] - 2 ) /*0x76006e*/
                  v50 = *v4 + v4[2] - 2; /*0x760070*/
                int v60 = (int)&aP2->__pad_0[*v49]; /*0x76007f*/
                if ( v60 <= *v4 + 2 ) /*0x760083*/
                  v60 = *v4 + 2; /*0x760085*/
                a4c = (_WORD *)(v74 /*0x7600b4*/
                              + 2
                              * (v50
                               + v56
                               * ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)&DataGlobal_87F8E4[31280] + 116))(*(_DWORD *)&DataGlobal_87F8E4[31280]) >> 1)));
                v51 = (MouseClass *)(v56 - *(_DWORD *)&DataGlobal_87F8E4[30400]); /*0x7600c0*/
                v84 = (MouseClass *)v50; /*0x7600c4*/
                for ( i = abs32(v56 - v76 - this->q0D0); v50 >= v60; --a4c ) /*0x7600d5*/
                {
                  if ( *(_WORD *)Audio::GetSamplePosition(*(int *)&DataGlobal_87F8E4[32096], v84, v51) > (unsigned __int16)aP1c ) /*0x7600f0*/
                    Voxel::BlendShadowColor((_DWORD *)this, v50, aP2, i, a4c); /*0x760100*/
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
          int v83 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&DataGlobal_87F8E4[31280] + 116))(*(_DWORD *)&DataGlobal_87F8E4[31280]) >> 1; /*0x75feb9*/
          _WORD * v37 = (_WORD *)(v74 + 2 * v9 * v83); /*0x75feca*/
          a2b = (int *)(*(_DWORD *)(this + 424) + 8 * v81); /*0x75fed8*/
          aP1b = *(_WORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] + 36) - v9 - v58 - 2; /*0x75fef0*/
          SamplePosition = Audio::GetSamplePosition( /*0x75ff03*/
                             *(int *)&DataGlobal_87F8E4[32096],
                             0,
                             (MouseClass *)(v9 - *(_DWORD *)&DataGlobal_87F8E4[30400]));
          int v39 = v9; /*0x75ff05*/
          int v55 = v9; /*0x75ff09*/
          if ( v9 >= v8 ) /*0x75ff0d*/
          {
            while ( 1 ) /*0x75ff19*/
            {
              if ( v39 >= v77 && v39 <= v78 ) /*0x75ff27*/
              {
                int v40 = (int)&aP2->__pad_0[a2b[1]]; /*0x75ff40*/
                if ( v40 >= v69 ) /*0x75ff42*/
                  v40 = v69; /*0x75ff44*/
                char * v59 = &aP2->__pad_0[*a2b]; /*0x75ff56*/
                if ( (int)v59 <= v79 ) /*0x75ff5a*/
                  v59 = (char *)v79; /*0x75ff5c*/
                _WORD * v41 = &v37[v40]; /*0x75ff68*/
                v42 = (unsigned __int16 *)(2 * v40 + SamplePosition); /*0x75ff6a*/
                a4b = v42; /*0x75ff76*/
                __int64 v43 = v39 - v76 - this->q0D0; /*0x75ff7a*/
                for ( j = (HIDWORD(v43) ^ v43) - HIDWORD(v43); v40 >= (int)v59; a4b = v42 ) /*0x75ff87*/
                {
                  if ( *v42 > aP1b ) /*0x75ff91*/
                  {
                    Voxel::BlendShadowColor((_DWORD *)this, v40, aP2, j, v41); /*0x75ff9d*/
                    v42 = a4b; /*0x75ffa2*/
                  }
                  --v42; /*0x75ffaa*/
                  --v41; /*0x75ffad*/
                  --v40; /*0x75ffb0*/
                }
                v8 = v61; /*0x75ffb9*/
                v39 = v55; /*0x75ffbd*/
                int v45 = 2 * v40; /*0x75ffc1*/
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
        aP1a = *(_WORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] + 36) - v58 - v8 - 2; /*0x75fba4*/
  unsigned int v11; // ebx
        v11 = Audio::GetSamplePosition( /*0x75fbb6*/
                *(int *)&DataGlobal_87F8E4[32096],
                0,
                (MouseClass *)(v8 - *(_DWORD *)&DataGlobal_87F8E4[30400]));
        int v12 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&DataGlobal_87F8E4[31280] + 124))(*(_DWORD *)&DataGlobal_87F8E4[31280]); /*0x75fbba*/
        int v70 = *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] + 40); /*0x75fbc8*/
        if ( v11 + 2 * (v12 + v70 * (v9 - v61 + 1)) >= *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] + 28) ) /*0x75fbe7*/
        {
          int v27 = v61; /*0x75fd07*/
          int v54 = v61; /*0x75fd0d*/
          if ( v61 <= v9 ) /*0x75fd11*/
          {
            int v71 = 0; /*0x75fd17*/
            do /*0x75fe44*/
            {
              int v28 = v4[1]; /*0x75fd1f*/
              if ( v27 >= v28 + 2 && v27 <= v28 + v4[3] - 2 ) /*0x75fd36*/
              {
                _DWORD * v29 = (_DWORD *)(*(_DWORD *)(this + 424) + v71); /*0x75fd49*/
                int v30 = *v4; /*0x75fd4b*/
                int v63 = (int)&aP2->__pad_0[v29[1]]; /*0x75fd64*/
                if ( v63 >= *v4 + v4[2] - 2 ) /*0x75fd68*/
                  v63 = *v4 + v4[2] - 2; /*0x75fd6a*/
                char * v31 = &aP2->__pad_0[*v29]; /*0x75fd74*/
                int v32 = v30 + 2; /*0x75fd76*/
                if ( (int)v31 > v30 + 2 ) /*0x75fd7b*/
                  v32 = (int)v31; /*0x75fd7d*/
                v82 = (MouseClass *)v32; /*0x75fd95*/
                a4a = (_WORD *)(v74 /*0x75fda3*/
                              + 2
                              * (v32
                               + v27
                               * ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)&DataGlobal_87F8E4[31280] + 116))(*(_DWORD *)&DataGlobal_87F8E4[31280]) >> 1)));
                v33 = (MouseClass *)(v27 - *(_DWORD *)&DataGlobal_87F8E4[30400]); /*0x75fdad*/
                v85 = (MouseClass *)(v27 - *(_DWORD *)&DataGlobal_87F8E4[30400]); /*0x75fdb7*/
                int v34 = abs32(v27 - v76 - this->q0D0); /*0x75fdc6*/
                if ( v32 <= v63 ) /*0x75fdca*/
                {
                  while ( 1 ) /*0x75fdd2*/
                  {
                    if ( *(_WORD *)Audio::GetSamplePosition(*(int *)&DataGlobal_87F8E4[32096], v82, v33) > aP1a ) /*0x75fdeb*/
                      Voxel::BlendShadowColor((_DWORD *)this, v32, aP2, v34, a4a); /*0x75fdfb*/
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
          int v13 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&DataGlobal_87F8E4[31280] + 116))(*(_DWORD *)&DataGlobal_87F8E4[31280]) >> 1; /*0x75fbf8*/
          int v80 = v13; /*0x75fc05*/
          _WORD * v14 = (_WORD *)(v74 + 2 * v61 * v13); /*0x75fc09*/
          int v15 = v61; /*0x75fc0c*/
          v16 = *(CCINIClass **)(this + 424); /*0x75fc10*/
          a2a = (int *)v16; /*0x75fc18*/
          for ( k = v61; v15 <= v9; k = v15 ) /*0x75fc20*/
          {
            if ( v15 >= v77 && v15 <= v78 ) /*0x75fc34*/
            {
              char * v17 = &aP2->__pad_0[v16->headNode[0]]; /*0x75fc41*/
              if ( (int)v17 >= v69 ) /*0x75fc47*/
                v17 = (char *)v69; /*0x75fc49*/
              int v62 = (int)v17; /*0x75fc4f*/
              char * v18 = &aP2->__pad_0[*(_DWORD *)v16->__pad_0]; /*0x75fc53*/
              int v19 = v79; /*0x75fc56*/
              if ( (int)v18 > v79 ) /*0x75fc5c*/
                v19 = (int)v18; /*0x75fc5e*/
              v20 = (unsigned __int16 *)(2 * v19 + v11); /*0x75fc67*/
              _WORD * v21 = &v14[v19]; /*0x75fc69*/
              __int64 v22 = v15 - v76 - this->q0D0; /*0x75fc7b*/
              int v23 = v22; /*0x75fc7c*/
              int v24 = v19; /*0x75fc7e*/
              int v75 = v19; /*0x75fc82*/
              for ( m = (HIDWORD(v22) ^ v23) - HIDWORD(v22); v24 <= v62; v75 = v24 ) /*0x75fc8e*/
              {
                if ( *v20 > aP1a ) /*0x75fc98*/
                {
                  Voxel::BlendShadowColor((_DWORD *)this, v24, aP2, m, v21); /*0x75fca4*/
                  v24 = v75; /*0x75fca9*/
                }
                ++v20; /*0x75fcb1*/
                ++v21; /*0x75fcb4*/
                ++v24; /*0x75fcb7*/
              }
              v9 = (int)a4; /*0x75fcc0*/
              v15 = k; /*0x75fcc4*/
              int v26 = 2 * v24; /*0x75fcc8*/
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
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&DataGlobal_87F8E4[31280] + 96))(*(_DWORD *)&DataGlobal_87F8E4[31280]); /*0x760157*/
    if ( *(_DWORD *)(this + 424) ) /*0x76015a*/
    {
      __3_YAXPAX_Z(*(void **)(this + 424)); /*0x760167*/
      *(_DWORD *)(this + 424) = 0; /*0x76016f*/
    }
  }
}
}
} // namespace gamemd

// 0x760190
namespace gamemd {
int Voxel::BlendColor(int a2, WaveClass * aP2, int arg8, unsigned short * a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void Voxel::BlendColor(int a2, WaveClass *aP2, int arg8, _WORD *a4)
{
  unsigned __int16 v7; // dx
  int result; // eax

  __int64 v5; // rax
  v5 = *(__int16 *)&g_AsyncMovieState[544][2 * this->q130 /*0x7601d9*/
                                              + 96
                                              + 2
                                              * *(unsigned __int16 *)&g_AsyncMovieState[1820][600 * arg8
                                                                                                + 920
                                                                                                + 2
                                                                                                * abs32(a2 - this->q0CC - (_DWORD)aP2)]];
  int v6 = (HIDWORD(v5) ^ v5) - HIDWORD(v5); /*0x7601dc*/
  if ( v6 >= 9 ) /*0x7601e1*/
    v6 = 9; /*0x7601e3*/
  v7 = a4[*(this + v6 + 130)]; /*0x7601fb*/
  int v8 = *(_DWORD *)&g_AsyncMovieState[1820][4 * v6 + 836]; /*0x760256*/
  int v9; // edi
  v9 = (((unsigned __int8)((unsigned __int8)(v7 >> g_CellDirectionOffsets[5952]) << g_CellDirectionOffsets[5956]) /*0x76027d*/
       * (v8
        / 2)) >> 8)
     + (unsigned __int8)((unsigned __int8)(v7 >> g_CellDirectionOffsets[5952]) << g_CellDirectionOffsets[5956]);
  int v10 = 255; /*0x760286*/
  if ( (char)((v8 /*0x76028b*/
             * (unsigned __int8)((unsigned __int8)(v7 >> g_CellDirectionOffsets[5960]) << g_CellDirectionOffsets[5964])) >> 6)
     + (unsigned __int8)((unsigned __int8)(v7 >> g_CellDirectionOffsets[5960]) << g_CellDirectionOffsets[5964]) <= 255 )
    v10 = (char)((v8 /*0x76028d*/
                * (unsigned __int8)((unsigned __int8)(v7 >> g_CellDirectionOffsets[5960]) << g_CellDirectionOffsets[5964])) >> 6)
        + (unsigned __int8)((unsigned __int8)(v7 >> g_CellDirectionOffsets[5960]) << g_CellDirectionOffsets[5964]);
  if ( v9 > 255 ) /*0x760295*/
    v9 = 255; /*0x760297*/
  result = v10 >> g_CellDirectionOffsets[5964] << g_CellDirectionOffsets[5960]; /*0x7602ba*/
  *a4 = ((int)(unsigned __int8)((unsigned __int8)(v7 >> g_CellDirectionOffsets[5968]) << g_CellDirectionOffsets[5972]) >> g_CellDirectionOffsets[5972] << g_CellDirectionOffsets[5968]) /*0x7602d0*/
      | result
      | (v9 >> g_CellDirectionOffsets[5956] << g_CellDirectionOffsets[5952]);
  return result; /*0x7602d3*/
}
}
} // namespace gamemd

// 0x7609E0
namespace gamemd {
void Voxel::FaceDraw(unsigned int * a1, WaveClass * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void Voxel::FaceDraw(_DWORD *a1, WaveClass *aP2)
{
  WaveClass *v3; // ebx
  unsigned int SamplePosition; // edi
  MouseClass *v26; // esi
  MouseClass *v29; // ebp
  int LaserIntensity; // eax
  int i; // [esp+8h] [ebp-40h]
  WaveClass *v36; // [esp+Ch] [ebp-3Ch]
  __int16 v42; // [esp+1Ch] [ebp-2Ch]
  MouseClass *aP1; // [esp+38h] [ebp-10h]
  MouseClass *aP1a; // [esp+38h] [ebp-10h]
  MouseClass *v54; // [esp+3Ch] [ebp-Ch]
  _DWORD *a1a; // [esp+4Ch] [ebp+4h]
  WaveClass *aP2a; // [esp+50h] [ebp+8h]

  v3 = (WaveClass *)this; /*0x7609e9*/
  if ( *(_DWORD *)&g_NetworkPlayerBuffer[5436] == 2 ) /*0x7609f3*/
  {
    v42 = ZCoordToScreenY(*(this + 47)); /*0x760a0a*/
  int v39; // [esp+14h] [ebp-34h]
    v39 = (*(int (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)&DataGlobal_87F8E4[31280] + 92))( /*0x760a1b*/
            *(_DWORD *)&DataGlobal_87F8E4[31280],
            0,
            0);
    if ( v39 ) /*0x760a1f*/
    {
      int v47 = *(_DWORD *)&aP2->__pad_0[4]; /*0x760a3d*/
      int v48 = *(_DWORD *)&aP2->__pad_0[12] + v47; /*0x760a45*/
      int v50 = *(_DWORD *)aP2->__pad_0; /*0x760a4c*/
      int v49 = *(_DWORD *)aP2->__pad_0 + *(_DWORD *)&aP2->__pad_0[8]; /*0x760a56*/
      int v4 = *(_DWORD *)&DataGlobal_87F8E4[30400] + a1[1] - v3->WaveClass_field_D0; /*0x760a69*/
      int v41 = *a1 - v3->WaveClass_field_CC; /*0x760a77*/
      ProcessVoxelVertexData(&v3->WaveClass_field_148, &v3->WaveClass_field_1A0); /*0x760a7b*/
      if ( v3->WaveClass_field_1A8 ) /*0x760a80*/
      {
  bool v21; // zf
        int v5 = v4 + v3->WaveClass_field_1A4; /*0x760aa0*/
        v36 = (WaveClass *)(v3->WaveClass_field_1A0 + v5 - 1); /*0x760aaa*/
        if ( (int)v36 >= *(_DWORD *)&aP2->__pad_0[12] + *(_DWORD *)&aP2->__pad_0[4] ) /*0x760aae*/
          v36 = (WaveClass *)(*(_DWORD *)&aP2->__pad_0[12] + *(_DWORD *)&aP2->__pad_0[4]); /*0x760ab0*/
        LOWORD(v4) = *(_WORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] + 36) - v42; /*0x760aca*/
        int v6 = v4 - v5 - 2; /*0x760ad3*/
        a1a = (_DWORD *)v6; /*0x760ad6*/
        SamplePosition = Audio::GetSamplePosition( /*0x760ae5*/
                           *(int *)&DataGlobal_87F8E4[32096],
                           0,
                           (MouseClass *)(v5 - *(_DWORD *)&DataGlobal_87F8E4[30400]));
        int v8 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&DataGlobal_87F8E4[31280] + 124))(*(_DWORD *)&DataGlobal_87F8E4[31280]); /*0x760ae9*/
        aP1 = *(MouseClass **)(*(_DWORD *)&DataGlobal_87F8E4[32096] + 40); /*0x760aff*/
        if ( SamplePosition + 2 * (v8 + (_DWORD)aP1 * (_DWORD)&v36->__pad_0[-v5 + 1]) >= *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] + 28) ) /*0x760b13*/
        {
          int v22 = v5; /*0x760d15*/
          int v35 = v5; /*0x760d19*/
          if ( v5 <= (int)v36 ) /*0x760d1d*/
          {
            int v38 = 0; /*0x760d23*/
            do /*0x760f0e*/
            {
              int v23 = *(_DWORD *)&aP2->__pad_0[4]; /*0x760d2f*/
              if ( v22 >= v23 + 2 && v22 <= v23 + *(_DWORD *)&aP2->__pad_0[12] - 2 ) /*0x760d46*/
              {
                _DWORD * v24 = (_DWORD *)(v3->WaveClass_field_1A8 + v38); /*0x760d5a*/
                int v25 = *(_DWORD *)aP2->__pad_0; /*0x760d5c*/
                int v44 = v41 + v24[1]; /*0x760d6c*/
                if ( v44 >= *(_DWORD *)&aP2->__pad_0[8] + *(_DWORD *)aP2->__pad_0 - 2 ) /*0x760d70*/
                  v44 = *(_DWORD *)&aP2->__pad_0[8] + *(_DWORD *)aP2->__pad_0 - 2; /*0x760d72*/
                v26 = (MouseClass *)(v25 + 2); /*0x760d78*/
                int v27 = v41 + *v24; /*0x760d7b*/
                if ( v27 > v25 + 2 ) /*0x760d7f*/
                  v26 = (MouseClass *)v27; /*0x760d81*/
                int v28 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&DataGlobal_87F8E4[31280] + 116))(*(_DWORD *)&DataGlobal_87F8E4[31280]); /*0x760d8b*/
                v29 = (MouseClass *)(v35 - *(_DWORD *)&DataGlobal_87F8E4[30400]); /*0x760da3*/
                aP1a = v26; /*0x760da5*/
                _WORD * v30 = (_WORD *)(v39 + 2 * ((_DWORD)v26 + v22 * (v28 >> 1))); /*0x760da9*/
                v54 = (MouseClass *)(v35 - *(_DWORD *)&DataGlobal_87F8E4[30400]); /*0x760db2*/
                if ( (int)v26 <= v44 ) /*0x760db6*/
                {
                  int v45 = v44 - (_DWORD)v26 + 1; /*0x760dbf*/
                  do /*0x760ee0*/
                  {
                    if ( *(_WORD *)Audio::GetSamplePosition(*(int *)&DataGlobal_87F8E4[32096], aP1a, v29) > (unsigned __int16)a1a ) /*0x760ddc*/
                    {
                      LaserIntensity = v3->LaserIntensity; /*0x760deb*/
  int v32; // edx
                      v32 = (unsigned __int8)((unsigned __int8)(*v30 >> g_CellDirectionOffsets[5952]) << g_CellDirectionOffsets[5956]) /*0x760e5b*/
                          + (char)(LaserIntensity >> 2);
  int v33; // eax
                      v33 = (unsigned __int8)((unsigned __int8)(*v30 >> g_CellDirectionOffsets[5960]) << g_CellDirectionOffsets[5964]) /*0x760e64*/
                          + ((96 * LaserIntensity) >> 8);
                      if ( v33 > 255 ) /*0x760e71*/
                        v33 = 255; /*0x760e73*/
                      if ( v32 > 255 ) /*0x760e8d*/
                        v32 = 255; /*0x760e8f*/
                      v3 = (WaveClass *)this; /*0x760e96*/
                      v29 = v54; /*0x760e9e*/
                      *v30 = (v33 >> g_CellDirectionOffsets[5964] << g_CellDirectionOffsets[5960]) /*0x760ec8*/
                           | ((int)(unsigned __int8)((unsigned __int8)(*v30 >> g_CellDirectionOffsets[5968]) << g_CellDirectionOffsets[5972]) >> g_CellDirectionOffsets[5972] << g_CellDirectionOffsets[5968])
                           | (v32 >> g_CellDirectionOffsets[5956] << g_CellDirectionOffsets[5952]);
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
              a1a = (_DWORD *)v6; /*0x760f02*/
              v35 = v22; /*0x760f06*/
              v38 += 8; /*0x760f0a*/
            }
            while ( v22 <= (int)v36 ); /*0x760f0e*/
          }
        }
        else
        {
          int v9 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&DataGlobal_87F8E4[31280] + 116))(*(_DWORD *)&DataGlobal_87F8E4[31280]) >> 1; /*0x760b2a*/
          int v51 = v9; /*0x760b2e*/
          _WORD * v10 = (_WORD *)(v39 + 2 * v5 * v9); /*0x760b35*/
          aP2a = (WaveClass *)v3->WaveClass_field_1A8; /*0x760b42*/
          int v11 = v5; /*0x760b46*/
          for ( i = v5; v11 <= (int)v36; i = v11 ) /*0x760b4e*/
          {
            if ( v11 >= v47 && v11 <= v48 ) /*0x760b62*/
            {
              int v12 = v49; /*0x760b76*/
              if ( *(_DWORD *)&aP2a->__pad_0[4] + v41 < v49 ) /*0x760b7c*/
                v12 = *(_DWORD *)&aP2a->__pad_0[4] + v41; /*0x760b7e*/
              int v13 = v41 + *(_DWORD *)aP2a->__pad_0; /*0x760b86*/
              if ( v13 <= v50 ) /*0x760b8e*/
                v13 = v50; /*0x760b90*/
              _WORD * v14 = (_WORD *)(2 * v13 + SamplePosition); /*0x760b95*/
              _WORD * v15 = &v10[v13]; /*0x760b97*/
              _WORD * v37 = v14; /*0x760b9b*/
              int v16 = v13; /*0x760b9f*/
              if ( v13 <= v12 ) /*0x760ba1*/
              {
                int v40 = v12 - v13 + 1; /*0x760baa*/
                int v43 = v12 + 1; /*0x760bb0*/
                do /*0x760cc2*/
                {
                  if ( *v14 > (unsigned __int16)a1a ) /*0x760bbc*/
                  {
                    int v17 = v3->LaserIntensity; /*0x760bcb*/
  int v18; // edx
                    v18 = (unsigned __int8)((unsigned __int8)(*v15 >> g_CellDirectionOffsets[5952]) << g_CellDirectionOffsets[5956]) /*0x760c33*/
                        + (char)(v17 >> 2);
  int v19; // ecx
                    v19 = (unsigned __int8)((unsigned __int8)(*v15 >> g_CellDirectionOffsets[5960]) << g_CellDirectionOffsets[5964]) /*0x760c48*/
                        + (char)((3 * v17) >> 3);
                    int v20 = 255; /*0x760c4a*/
                    if ( v19 <= 255 ) /*0x760c55*/
                      v20 = v19; /*0x760c57*/
                    if ( v18 > 255 ) /*0x760c6c*/
                      v18 = 255; /*0x760c6e*/
                    v11 = i; /*0x760c7d*/
                    v3 = (WaveClass *)this; /*0x760c9d*/
                    v14 = v37; /*0x760ca3*/
                    *v15 = (v20 >> g_CellDirectionOffsets[5964] << g_CellDirectionOffsets[5960]) /*0x760cab*/
                         | ((int)(unsigned __int8)((unsigned __int8)(*v15 >> g_CellDirectionOffsets[5968]) << g_CellDirectionOffsets[5972]) >> g_CellDirectionOffsets[5972] << g_CellDirectionOffsets[5968])
                         | (v18 >> g_CellDirectionOffsets[5956] << g_CellDirectionOffsets[5952]);
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
            SamplePosition += 2 * (_DWORD)aP1; /*0x760ce9*/
            ++v11; /*0x760cf3*/
            aP2a = (WaveClass *)((char *)aP2a + 8); /*0x760cf4*/
            LOWORD(a1a) = (_WORD)a1a - 1; /*0x760cfe*/
          }
        }
      }
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&DataGlobal_87F8E4[31280] + 96))(*(_DWORD *)&DataGlobal_87F8E4[31280]); /*0x760f1c*/
      if ( v3->WaveClass_field_1A8 ) /*0x760f1f*/
      {
        __3_YAXPAX_Z((void *)v3->WaveClass_field_1A8); /*0x760f2c*/
        v3->WaveClass_field_1A8 = 0; /*0x760f34*/
      }
    }
  }
}
}
} // namespace gamemd

// 0x7610F0
namespace gamemd {
void Voxel::FaceBlit()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void Voxel::FaceBlit(int this)
{
  IUnknown *v6; // eax
  MouseClass *v7; // edx
  MouseClass *v12; // eax
  MouseClass *v16; // eax
  IUnknown *v18; // eax
  MouseClass *v20; // eax
  IUnknown *v23; // eax
  MouseClass *v27; // [esp-8h] [ebp-80h]
  MouseClass *v28; // [esp-8h] [ebp-80h]
  MouseClass *v29; // [esp-8h] [ebp-80h]
  MouseClass *v33; // [esp+10h] [ebp-68h] BYREF
  MouseClass *v35; // [esp+18h] [ebp-60h] BYREF
  MouseClass *v36; // [esp+1Ch] [ebp-5Ch] BYREF
  rc_ptr_base v37; // [esp+20h] [ebp-58h] BYREF
  rc_ptr_base v38; // [esp+24h] [ebp-54h] BYREF
  rc_ptr_base v39; // [esp+28h] [ebp-50h] BYREF
  rc_ptr_base v40; // [esp+2Ch] [ebp-4Ch] BYREF
  rc_ptr_base v41; // [esp+30h] [ebp-48h] BYREF
  double i; // [esp+40h] [ebp-38h]
  int v46; // [esp+48h] [ebp-30h] BYREF
  int v47; // [esp+4Ch] [ebp-2Ch]
  int v48; // [esp+50h] [ebp-28h]
  _DWORD v49[3]; // [esp+54h] [ebp-24h] BYREF
  _DWORD v50[3]; // [esp+60h] [ebp-18h] BYREF
  _DWORD v51[3]; // [esp+6Ch] [ebp-Ch] BYREF

  int * v2 = (int *)(this + 496); /*0x761105*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(this + 496) + 12))(this + 496); /*0x76110d*/
  if ( *(_BYTE *)(this + 300) ) /*0x761110*/
  {
    int v3 = *(_DWORD *)(this + 180); /*0x76111e*/
    i = 0.050000001; /*0x76112b*/
    LOWORD(v35) = v3 / 256; /*0x761146*/
    double v4 = 0.050000001 * 0.5 + *(double *)(this + 312); /*0x761158*/
    HIWORD(v35) = *(_DWORD *)(this + 184) / 256; /*0x761167*/
    v33 = v35; /*0x761172*/
    if ( v4 >= 0.050000001 ) /*0x761179*/
    {
      do /*0x76129b*/
      {
        double v5 = i; /*0x76117f*/
        int v30 = Math::RoundToInt(i); /*0x7611a8*/
        v27 = (MouseClass *)Math::RoundToInt(v5); /*0x7611c0*/
        v6 = (IUnknown *)Math::RoundToInt(v5); /*0x7611cd*/
        v7 = (MouseClass *)Coord3D::Set(&v46, v6, v27, v30); /*0x7611e0*/
        int v8 = v7->field_0; /*0x7611e2*/
        int v9 = (int)v7->field_4; /*0x7611e4*/
        v49[2] = v7->field_8; /*0x7611ea*/
        int v10 = v9; /*0x7611f7*/
        int v11 = v8 / 256; /*0x76120d*/
        v36 = *(MouseClass **)CellStruct::Set(&v38, v8 / 256, v9 / 256); /*0x76121e*/
        if ( v33 != v36 ) /*0x761222*/
        {
          v33 = *(MouseClass **)CellStruct::Set(&v37, v11, v10 / 256); /*0x761247*/
          v12 = (MouseClass *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v33); /*0x76124b*/
          int v13 = *v2; /*0x761250*/
          v35 = v12; /*0x761253*/
          if ( (*(int (__thiscall **)(int *, MouseClass **))(v13 + 16))(v2, &v35) == -1 ) /*0x761264*/
            Voxel::freeSectionMemory(v2, &v35); /*0x76126d*/
        }
        i = i + 0.050000001; /*0x76127c*/
      }
      while ( 0.050000001 * 0.5 + *(double *)(this + 312) >= i ); /*0x76129b*/
    }
  }
  else
  {
    v33 = *(MouseClass **)CellStruct::Set(&v38, *(_DWORD *)(this + 252) / 256, *(_DWORD *)(this + 256) / 256); /*0x7612e0*/
    v35 = *(MouseClass **)CellStruct::Set(&v38, *(_DWORD *)(this + 264) / 256, *(_DWORD *)(this + 268) / 256); /*0x761312*/
    _WORD * v14 = CellStruct::Set(&v38, this->q030 / 256, *(_DWORD *)(this + 196) / 256); /*0x76133c*/
    unsigned int v15 = *(_DWORD *)(this + 320); /*0x761349*/
    int v34 = *(_DWORD *)v14; /*0x761355*/
    for ( i = COERCE_DOUBLE(__PAIR64__(*(_DWORD *)(this + 324), v15)); /*0x761376*/
          0.050000001 * 0.5 + *(double *)(this + 312) >= i;
          i = i + 0.050000001 )
    {
      v48 = *(_DWORD *)&g_AsyncMovieState[1640]; /*0x761392*/
      v16 = *(MouseClass **)(this + 460); /*0x761396*/
      v46 = *(_DWORD *)&g_AsyncMovieState[1632]; /*0x76139c*/
      v47 = *(_DWORD *)&g_AsyncMovieState[1636]; /*0x7613a2*/
      if ( (int)v16 < 4 ) /*0x7613a6*/
      {
        double v17 = i; /*0x7613ac*/
        int v31 = Math::RoundToInt(i); /*0x7613d5*/
        v28 = (MouseClass *)Math::RoundToInt(v17); /*0x7613ed*/
        v18 = (IUnknown *)Math::RoundToInt(v17); /*0x7613fa*/
        int * v19 = Coord3D::Set(v49, v18, v28, v31); /*0x761408*/
        v46 = *v19; /*0x761411*/
        v47 = v19[1]; /*0x761418*/
        v48 = v19[2]; /*0x76141f*/
        v37.vfptr = *(void **)CellStruct::Set(&v39, v46 / 256, v47 / 256); /*0x76144f*/
        if ( v33 != v37.vfptr ) /*0x761453*/
        {
          v33 = *(MouseClass **)CellStruct::Set(&v40, v46 / 256, v47 / 256); /*0x761498*/
          v20 = (MouseClass *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v33); /*0x76149c*/
          int v21 = *v2; /*0x7614a1*/
          v36 = v20; /*0x7614a4*/
          if ( (*(int (__thiscall **)(int *, MouseClass **))(v21 + 16))(v2, &v36) == -1 ) /*0x7614b5*/
            Voxel::freeSectionMemory(v2, &v36); /*0x7614be*/
        }
      }
      double v22 = i; /*0x7614c3*/
      *(float *)&v37.vfptr = i; /*0x7614c7*/
      int v32 = Math::RoundToInt(i); /*0x7614f0*/
      v29 = (MouseClass *)Math::RoundToInt(v22); /*0x761508*/
      v23 = (IUnknown *)Math::RoundToInt(v22); /*0x761515*/
      int * v24 = Coord3D::Set(v50, v23, v29, v32); /*0x761523*/
      v46 = *v24; /*0x76152c*/
      v47 = v24[1]; /*0x761533*/
      v48 = v24[2]; /*0x76153a*/
      v38.vfptr = *(void **)CellStruct::Set(&v41, v46 / 256, v47 / 256); /*0x76156e*/
      if ( Coord::Compare2D(&v34, &v38) ) /*0x761572*/
      {
  char v42[4]; // [esp+34h] [ebp-44h] BYREF
        v34 = *Coord::ToCell(&v46, (IUnknown *)v42); /*0x761592*/
        Voxel::renderSection((_DWORD *)this, (ObjectClass *)&v34); /*0x761596*/
      }
      if ( *(int *)(this + 460) >= 4 ) /*0x7615a1*/
      {
        int * v25 = Color::RGBFromFloat(v51, (IUnknown *)(this + 264), *(float *)&v37.vfptr); /*0x7615b3*/
        v46 = *v25; /*0x7615ba*/
        v47 = v25[1]; /*0x7615c6*/
        v48 = v25[2]; /*0x7615d1*/
  char v43[4]; // [esp+38h] [ebp-40h] BYREF
        _WORD * v26 = Coord::ToCell(&v46, (IUnknown *)v43); /*0x7615d5*/
        if ( Coord::Compare2D(&v35, v26) ) /*0x7615df*/
        {
  char v44[4]; // [esp+3Ch] [ebp-3Ch] BYREF
          v35 = (MouseClass *)*Coord::ToCell(&v46, (IUnknown *)v44); /*0x7615ff*/
          Voxel::renderSection((_DWORD *)this, (ObjectClass *)&v35); /*0x761603*/
        }
      }
    }
  }
}
}
} // namespace gamemd

// 0x761640
namespace gamemd {
int Voxel::SectionProject(int * a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void Voxel_Section_Project(_DWORD *this, int *a2, int a3)
{
  int result; // eax

  if ( (DataGlobal_B45DA0 & 1) == 0 ) /*0x76165b*/
  {
    DataGlobal_B45DA0 |= 1u; /*0x76167d*/
    DataGlobal_B45DA8[0] = -1041235968; /*0x76168f*/
    DataGlobal_B45DAC = -1027080192; /*0x7616a0*/
    DataGlobal_B45DB0 = 0; /*0x7616b2*/
    DataGlobal_B45DB4 = -1041235968; /*0x7616c4*/
    DataGlobal_B45DB8 = 1120403456; /*0x7616d5*/
    DataGlobal_B45DBC = 0; /*0x7616e7*/
    DataGlobal_B45DC0 = 1106247680; /*0x7616f9*/
    DataGlobal_B45DC4 = -1027080192; /*0x76170a*/
    DataGlobal_B45DC8 = 0; /*0x76171c*/
    DataGlobal_B45DCC = 1106247680; /*0x76172e*/
    DataGlobal_B45DD0 = 1120403456; /*0x76173f*/
    DataGlobal_B45DD4 = 0; /*0x761751*/
    DataGlobal_B45DD8 = -1039663104; /*0x761763*/
    DataGlobal_B45DDC = -1037041664; /*0x761774*/
    DataGlobal_B45DE0 = 0; /*0x761786*/
    DataGlobal_B45DE4 = -1039663104; /*0x761798*/
    DataGlobal_B45DE8 = 1110441984; /*0x7617a9*/
    DataGlobal_B45DEC = 0; /*0x7617bb*/
    DataGlobal_B45DF0 = 1107820544; /*0x7617cd*/
    DataGlobal_B45DF4 = -1037041664; /*0x7617de*/
    DataGlobal_B45DF8 = 0; /*0x7617f0*/
    DataGlobal_B45DFC = 1107820544; /*0x761802*/
    DataGlobal_B45E00 = 1110441984; /*0x761813*/
    DataGlobal_B45E04 = 0; /*0x761825*/
    DataGlobal_B45E08 = -1042808832; /*0x761833*/
    DataGlobal_B45E0C = -1039663104; /*0x76183c*/
    DataGlobal_B45E10 = 0; /*0x761842*/
    DataGlobal_B45E14 = -1042808832; /*0x76186c*/
    DataGlobal_B45E18 = 1107820544; /*0x761871*/
    DataGlobal_B45E1C = 0; /*0x761877*/
    DataGlobal_B45E20 = 1104674816; /*0x7618a1*/
    DataGlobal_B45E24 = -1039663104; /*0x7618a6*/
    DataGlobal_B45E28 = 0; /*0x7618ac*/
    DataGlobal_B45E2C = 1104674816; /*0x7618d6*/
    DataGlobal_B45E30 = 1107820544; /*0x7618db*/
    DataGlobal_B45E34 = 0; /*0x7618e1*/
    DataGlobal_B45E38 = -1041235968; /*0x76190b*/
    DataGlobal_B45E3C = -1035468800; /*0x761910*/
    DataGlobal_B45E40 = 0; /*0x761916*/
    DataGlobal_B45E44 = -1041235968; /*0x761940*/
    DataGlobal_B45E48 = 1112014848; /*0x761945*/
    DataGlobal_B45E4C = 0; /*0x76194b*/
    DataGlobal_B45E50 = 1106247680; /*0x761975*/
    DataGlobal_B45E54 = -1035468800; /*0x76197a*/
    DataGlobal_B45E58 = 0; /*0x761980*/
    DataGlobal_B45E5C = 1106247680; /*0x7619af*/
    DataGlobal_B45E60 = 1112014848; /*0x7619b4*/
    DataGlobal_B45E64 = 0; /*0x7619ba*/
    atexit(nullsub_46); /*0x7619c0*/
  }
  int v4 = this->q02C; /*0x7619cb*/
  double v5 = flt_7F6BB4[v4]; /*0x7619d6*/
  int v58 = *a2; /*0x7619dd*/
  int v6 = a2[2]; /*0x7619f6*/
  int v59 = a2[1]; /*0x7619f9*/
  int v60 = v6; /*0x7619fd*/
  int v46 = Math::RoundToInt(v5); /*0x761a13*/
  int v76 = *(_DWORD *)(a3 + 4); /*0x761a17*/
  int v48 = Math::RoundToInt(v5); /*0x761a2e*/
  int v7 = Math::RoundToInt(v5); /*0x761a47*/
  int v61 = v46; /*0x761a5a*/
  int v62 = v48; /*0x761a5e*/
  int v63 = v7; /*0x761a62*/
  if ( !v4 ) /*0x761a66*/
    v63 = v7 + 50; /*0x761a6b*/
  if ( v4 == 3 ) /*0x761a72*/
    v63 += 50; /*0x761a74*/
  double v8 = flt_7F6BB4[v4]; /*0x761a79*/
  int v9 = Math::RoundToInt(v8); /*0x761a9f*/
  int v10 = Math::RoundToInt(v8); /*0x761ab4*/
  v58 = v9; /*0x761ac9*/
  v60 = Math::RoundToInt(v8); /*0x761acf*/
  v59 = v10; /*0x761ad9*/
  double v11 = Math::Sqrt((double)(v10 - v62) * (double)(v10 - v62) + (double)(v9 - v61) * (double)(v9 - v61)); /*0x761b09*/
  int v54 = Math::RoundToInt(v11); /*0x761b1a*/
  *(this + 45) = v9; /*0x761b27*/
  *(this + 46) = v59; /*0x761b2d*/
  *(this + 47) = v60; /*0x761b34*/
  (*(void (__thiscall **)(_DWORD *, _DWORD *))(*this + 436))(this, this + 45); /*0x761b3b*/
  int v12 = v61; /*0x761b41*/
  int v13 = v62; /*0x761b45*/
  *(this + 82) = 6; /*0x761b55*/
  this->q030 = v12; /*0x761b60*/
  int v14 = v63; /*0x761b62*/
  *(this + 49) = v13; /*0x761b66*/
  *(this + 83) = this + 84; /*0x761b6f*/
  *(this + 50) = v14; /*0x761b75*/
  Coord::To_Screen(&v58, this + 51); /*0x761b83*/
  Coord::To_Screen(&v61, this + 53); /*0x761b9a*/
  int v15 = *(this + 83); /*0x761b9f*/
  double v16 = (double)v54; /*0x761ba7*/
  *(_DWORD *)(v15 + 8) = *(this + 53); /*0x761bab*/
  *(_DWORD *)(v15 + 12) = *(this + 54); /*0x761bb1*/
  int v17 = *(this + 83); /*0x761bb4*/
  *(_DWORD *)(v17 + 32) = this->q0CC; /*0x761bbc*/
  *(_DWORD *)(v17 + 36) = this->q0D0; /*0x761bc4*/
  int v18 = 48 * this->q02C; /*0x761bd2*/
  float v77 = v16 + *(float *)&DataGlobal_B45DA8[v18 / 4u]; /*0x761bdb*/
  float v78 = *(float *)(v18 + 11820460); /*0x761be9*/
  double v19 = *(float *)(v18 + 11820464); /*0x761bed*/
  float v73 = v77; /*0x761bf7*/
  float v79 = v19; /*0x761bfb*/
  float v74 = v78; /*0x761c03*/
  float v75 = v79; /*0x761c07*/
  float v80 = v16 + *(float *)(v18 + 11820468); /*0x761c11*/
  float v81 = *(float *)(v18 + 11820472); /*0x761c25*/
  double v20 = *(float *)(v18 + 11820476); /*0x761c2c*/
  float v64 = v80; /*0x761c39*/
  float v82 = v20; /*0x761c3d*/
  float v65 = v81; /*0x761c4b*/
  float v66 = v82; /*0x761c4f*/
  float v83 = *(float *)(v18 + 11820480); /*0x761c59*/
  float v84 = *(float *)(v18 + 11820484); /*0x761c6d*/
  double v21 = *(float *)(v18 + 11820488); /*0x761c74*/
  float v67 = v83; /*0x761c81*/
  float v85 = v21; /*0x761c85*/
  float v68 = v84; /*0x761c93*/
  float v69 = v85; /*0x761c97*/
  float v49 = *(float *)(v18 + 11820496); /*0x761cab*/
  float v70 = *(float *)(v18 + 11820492); /*0x761cc5*/
  float v71 = v49; /*0x761cc9*/
  double v22 = (double)(v63 - v60); /*0x761ce7*/
  double v23 = (double)v60; /*0x761ceb*/
  v75 = v77 * v22 / v16 + v23; /*0x761d0c*/
  v66 = v80 * v22 / v16 + v23; /*0x761d1d*/
  v69 = v83 * v22 / v16 + v23; /*0x761d2e*/
  float v72 = v70 * v22 / v16 + v23; /*0x761d3c*/
  double v24 = (double)(v61 - v58); /*0x761d46*/
  float v47 = v24; /*0x761d4a*/
  double v55 = v24; /*0x761d58*/
  double v25 = Math::Sqrt((double)(v62 - v59) * (double)(v62 - v59) + v47 * v47); /*0x761d71*/
  double v26 = v55; /*0x761d76*/
  if ( v25 < v55 ) /*0x761d86*/
    v26 = v25; /*0x761d8a*/
  if ( -v26 > v25 ) /*0x761d97*/
    v26 = -v25; /*0x761d9d*/
  Math::ArcTan2_Table(v26 / v25); /*0x761da9*/
  double v56 = v25; /*0x761db6*/
  if ( v59 > v62 ) /*0x761dbf*/
    v56 = -v25; /*0x761dc7*/
  char v86[48]; // [esp+A4h] [ebp-30h] BYREF
  Matrix3x4::Identity(v86); /*0x761dd2*/
  float v45 = v56; /*0x761de3*/
  Matrix2D::Rotate(v45); /*0x761de6*/
  float * v27 = (float *)TransformMatrix3x4Point(&v73); /*0x761dfb*/
  v73 = *v27; /*0x761e02*/
  v74 = v27[1]; /*0x761e09*/
  v75 = v27[2]; /*0x761e18*/
  float * v28 = (float *)TransformMatrix3x4Point(&v64); /*0x761e24*/
  v64 = *v28; /*0x761e2b*/
  v65 = v28[1]; /*0x761e37*/
  v66 = v28[2]; /*0x761e49*/
  float * v29 = (float *)TransformMatrix3x4Point(&v67); /*0x761e4d*/
  v67 = *v29; /*0x761e54*/
  v68 = v29[1]; /*0x761e5b*/
  v69 = v29[2]; /*0x761e6a*/
  float * v30 = (float *)TransformMatrix3x4Point(&v70); /*0x761e76*/
  double v31 = (double)v58; /*0x761e7b*/
  v70 = *v30; /*0x761e81*/
  v71 = v30[1]; /*0x761e8e*/
  v72 = v30[2]; /*0x761e95*/
  int v32 = Math::RoundToInt(v31); /*0x761ea2*/
  float v57 = (float)v59; /*0x761ea4*/
  int v50 = Math::RoundToInt(v31); /*0x761eb5*/
  int v33 = Math::RoundToInt(v31); /*0x761eb9*/
  *(this + 63) = v32; /*0x761ed0*/
  this->q010 = v50; /*0x761ed2*/
  *(this + 65) = v33; /*0x761ed5*/
  int v34 = Math::RoundToInt(v31); /*0x761ee5*/
  int v51 = Math::RoundToInt(v31); /*0x761ef0*/
  int v35 = Math::RoundToInt(v31); /*0x761ef4*/
  *(this + 66) = v34; /*0x761eff*/
  *(this + 67) = v51; /*0x761f0f*/
  *(this + 68) = v35; /*0x761f12*/
  int v36 = Math::RoundToInt(v31); /*0x761f22*/
  int v52 = Math::RoundToInt(v31); /*0x761f2d*/
  int v37 = Math::RoundToInt(v31); /*0x761f31*/
  double v38 = v31 + v70; /*0x761f40*/
  *(this + 69) = v36; /*0x761f44*/
  *(this + 70) = v52; /*0x761f46*/
  *(this + 71) = v37; /*0x761f49*/
  int v39 = Math::RoundToInt(v38); /*0x761f59*/
  int v53 = Math::RoundToInt(v57 + v71); /*0x761f64*/
  int v40 = Math::RoundToInt(v72); /*0x761f68*/
  *(this + 72) = v39; /*0x761f77*/
  *(this + 73) = v53; /*0x761f85*/
  *(this + 74) = v40; /*0x761f88*/
  Coord::To_Screen(this + 63, this + 55); /*0x761f91*/
  Coord::To_Screen(this + 66, this + 57); /*0x761faa*/
  Coord::To_Screen(this + 69, this + 59); /*0x761fc3*/
  Coord::To_Screen(this + 72, this + 61); /*0x761fdc*/
  _DWORD * v41 = (_DWORD *)*(this + 83); /*0x761fe1*/
  *v41 = *(this + 55); /*0x761fe9*/
  v41[1] = *(this + 56); /*0x761fee*/
  int v42 = *(this + 83); /*0x761ff1*/
  *(_DWORD *)(v42 + 16) = *(this + 57); /*0x761ff9*/
  *(_DWORD *)(v42 + 20) = *(this + 58); /*0x761fff*/
  int v43 = *(this + 83); /*0x762002*/
  *(_DWORD *)(v43 + 24) = *(this + 61); /*0x76200e*/
  *(_DWORD *)(v43 + 28) = *(this + 62); /*0x762017*/
  result = *(this + 83); /*0x76201a*/
  *(_DWORD *)(result + 40) = *(this + 59); /*0x762026*/
  *(_DWORD *)(result + 44) = *(this + 60); /*0x762034*/
  qmemcpy(this + 118, (const void *)(*(this + 117) + 928), 0x18u); /*0x762049*/
  return result; /*0x76204b*/
}
}
} // namespace gamemd

// 0x762070
namespace gamemd {
int Voxel::LightRender(AbstractClass ** a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void Voxel::LightRender(AbstractClass **a2, int a3)
{
  AbstractClass *v6; // eax
  AbstractClass *v8; // edx
  double st7_7a; // st7
  double st6_7a; // st6
  AbstractClass *v10; // ecx
  AbstractClass *v11; // edx
  AbstractClass *v15; // ecx
  AbstractClass **eax13b; // eax
  AbstractClass **eax13d; // eax
  AbstractClass *v29; // esi
  AbstractClass *v31; // esi
  AbstractClass *v33; // esi
  AbstractClass *v36; // esi
  int result; // eax
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

  if ( (g_AsyncMovieState[416] & 1) == 0 ) /*0x76208b*/
  {
    g_AsyncMovieState[416] |= 1u; /*0x7620ad*/
    *(_DWORD *)&g_AsyncMovieState[184] = -1041235968; /*0x7620bf*/
    *(_DWORD *)&g_AsyncMovieState[188] = -1027080192; /*0x7620d0*/
    *(_DWORD *)&g_AsyncMovieState[192] = 0; /*0x7620e2*/
    *(_DWORD *)&g_AsyncMovieState[196] = -1041235968; /*0x7620f4*/
    *(_DWORD *)&g_AsyncMovieState[200] = 1120403456; /*0x762105*/
    *(_DWORD *)&g_AsyncMovieState[204] = 0; /*0x762117*/
    *(_DWORD *)&g_AsyncMovieState[208] = 1106247680; /*0x762129*/
    g_AsyncMovieState.field_D4 = -1027080192; /*0x76213a*/
    *(_DWORD *)g_AsyncMovieState[216] = 0; /*0x76214c*/
    *(_DWORD *)&g_AsyncMovieState[220] = 1106247680; /*0x76215e*/
    *(_DWORD *)&g_AsyncMovieState[224] = 1120403456; /*0x76216f*/
    g_AsyncMovieState.field_E4 = 0; /*0x762181*/
    g_AsyncMovieState.field_E8 = -1039663104; /*0x762193*/
    *(_DWORD *)g_AsyncMovieState[236] = -1037041664; /*0x7621a4*/
    *(_DWORD *)&g_AsyncMovieState[240] = 0; /*0x7621b6*/
    *(_DWORD *)&g_AsyncMovieState[244] = -1039663104; /*0x7621c8*/
    g_AsyncMovieState.field_F8 = 1110441984; /*0x7621d9*/
    *(_DWORD *)g_AsyncMovieState[252] = 0; /*0x7621eb*/
    *(_DWORD *)&g_AsyncMovieState[256] = 1107820544; /*0x7621fd*/
    *(_DWORD *)&g_AsyncMovieState[260] = -1037041664; /*0x76220e*/
    *(_DWORD *)&g_AsyncMovieState[264] = 0; /*0x762220*/
    *(_DWORD *)&g_AsyncMovieState[268] = 1107820544; /*0x762232*/
    *(_DWORD *)&g_AsyncMovieState[272] = 1110441984; /*0x762243*/
    *(_DWORD *)&g_AsyncMovieState[276] = 0; /*0x762255*/
    g_AsyncMovieState.field_118 = -1042808832; /*0x762263*/
    *(_DWORD *)g_AsyncMovieState[284] = -1039663104; /*0x76226c*/
    *(_DWORD *)&g_AsyncMovieState[288] = 0; /*0x762272*/
    *(_DWORD *)&g_AsyncMovieState[292] = -1042808832; /*0x76229c*/
    *(_DWORD *)&g_AsyncMovieState[296] = 1107820544; /*0x7622a1*/
    *(_DWORD *)&g_AsyncMovieState[300] = 0; /*0x7622a7*/
    g_AsyncMovieState.field_130 = 1104674816; /*0x7622d1*/
    *(_DWORD *)g_AsyncMovieState[308] = -1039663104; /*0x7622d6*/
    *(_DWORD *)&g_AsyncMovieState[312] = 0; /*0x7622dc*/
    *(_DWORD *)&g_AsyncMovieState[316] = 1104674816; /*0x762306*/
    g_AsyncMovieState.field_140 = 1107820544; /*0x76230b*/
    *(_DWORD *)g_AsyncMovieState[324] = 0; /*0x762311*/
    *(_DWORD *)&g_AsyncMovieState[328] = 0; /*0x76233b*/
    *(_DWORD *)&g_AsyncMovieState[332] = -1035468800; /*0x762340*/
    g_AsyncMovieState.field_150 = 0; /*0x762346*/
    *(_DWORD *)g_AsyncMovieState[340] = 0; /*0x762370*/
    g_AsyncMovieState.field_158 = 1112014848; /*0x762375*/
    g_AsyncMovieState.field_15C = 0; /*0x76237b*/
    g_AsyncMovieState.field_160 = 0; /*0x7623a5*/
    *(_DWORD *)g_AsyncMovieState[356] = -1035468800; /*0x7623aa*/
    *(_DWORD *)&g_AsyncMovieState[360] = 0; /*0x7623b0*/
    v50 = 0.0; /*0x7623b6*/
    v51 = 50.0; /*0x7623c2*/
    v52 = 0.0; /*0x7623ce*/
    *(_DWORD *)&g_AsyncMovieState[364] = 0; /*0x7623df*/
    *(_DWORD *)&g_AsyncMovieState[368] = 1112014848; /*0x7623e4*/
    *(_DWORD *)&g_AsyncMovieState[372] = 0; /*0x7623ea*/
    atexit(nullsub_47); /*0x7623f0*/
  }
  int v4 = this->q02C; /*0x7623fb*/
  double v5 = flt_7F6BB4[v4]; /*0x762406*/
  a1 = *a2; /*0x76240d*/
  v55 = *(AbstractClass **)a3; /*0x76241b*/
  v6 = a2[2]; /*0x762426*/
  v57 = a2[1]; /*0x762429*/
  v58 = v6; /*0x76242d*/
  float v7; // eax
  LODWORD(v7) = Math::RoundToInt(v5); /*0x76243b*/
  v8 = *(AbstractClass **)(a3 + 4); /*0x762440*/
  v50 = v7; /*0x762443*/
  v62 = v8; /*0x762447*/
  LODWORD(v51) = Math::RoundToInt(v5); /*0x76245e*/
  LODWORD(v53) = *(_DWORD *)(a3 + 8); /*0x762465*/
  int v9 = Math::RoundToInt(v5); /*0x762477*/
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
  double v12; // st7
  v12 = Math::Sqrt(v51 * v51 + st6_7a * st6_7a + (double)((char *)a1 - (char *)var94) /*0x76259d*/
                                               * (double)((char *)a1 - (char *)var94));
  v55 = (AbstractClass *)Math::RoundToInt(v12); /*0x7625ae*/
  *(this + 45) = a1; /*0x7625bb*/
  *(this + 46) = v57; /*0x7625c1*/
  *(this + 47) = v58; /*0x7625c8*/
  (*(void (__thiscall **)(_DWORD *, _DWORD *))(*this + 436))(this, this + 45); /*0x7625cf*/
  v10 = var94; /*0x7625d5*/
  v11 = v59; /*0x7625d9*/
  *(this + 82) = 4; /*0x7625e3*/
  this->q030 = v10; /*0x7625ed*/
  v15 = v61; /*0x7625ef*/
  *(this + 49) = v11; /*0x7625f3*/
  *(this + 83) = this + 96; /*0x7625fc*/
  *(this + 50) = v15; /*0x762602*/
  Coord::To_Screen(*(_DWORD **)&DataGlobal_87F8E4[31296], &a1, (IUnknown *)(this + 51)); /*0x762617*/
  Coord::To_Screen(*(_DWORD **)&DataGlobal_87F8E4[31296], &var94, (IUnknown *)(this + 53)); /*0x76262e*/
  LODWORD(v53) = Math::RoundToInt(*(float *)&v62); /*0x76263c*/
  double v16 = (double)SLODWORD(v53); /*0x762646*/
  int v17 = 48 * this->q02C; /*0x76264d*/
  v77 = v16 + *(float *)&g_AsyncMovieState[168][v17 + 16]; /*0x762658*/
  v78 = *(AbstractClass **)(v17 + 11820196); /*0x76266c*/
  double v18 = *(float *)(v17 + 11820200); /*0x762673*/
  var6C = v77; /*0x762680*/
  v79 = v18; /*0x762684*/
  v70 = v78; /*0x762692*/
  v71 = (AbstractClass *)LODWORD(v79); /*0x762696*/
  v74 = v16 + *(float *)(v17 + 11820204); /*0x7626a0*/
  v75 = *(AbstractClass **)(v17 + 11820208); /*0x7626ae*/
  double v19 = *(float *)(v17 + 11820212); /*0x7626b2*/
  v63 = (AbstractClass *)LODWORD(v74); /*0x7626bc*/
  v76 = v19; /*0x7626c0*/
  v64 = v75; /*0x7626c8*/
  v65 = (AbstractClass *)LODWORD(v76); /*0x7626cc*/
  v80 = *(float *)(v17 + 11820216); /*0x7626d6*/
  v82 = *(AbstractClass **)(v17 + 11820220); /*0x7626ee*/
  double v20 = *(float *)(v17 + 11820224); /*0x7626f5*/
  var60 = v80; /*0x762702*/
  var34 = v20; /*0x762706*/
  v73 = v82; /*0x762714*/
  var58 = var34; /*0x762718*/
  v50 = *(float *)(v17 + 11820228); /*0x762726*/
  v51 = *(float *)(v17 + 11820232); /*0x762734*/
  double v21 = *(float *)(v17 + 11820236); /*0x762738*/
  v66 = (AbstractClass *)LODWORD(v50); /*0x76273e*/
  v52 = v21; /*0x76274c*/
  double v22 = (double)((char *)v61 - (char *)v58); /*0x762758*/
  double v23 = (double)(int)v55; /*0x76275c*/
  double v24 = (double)(int)v58; /*0x762760*/
  v67 = (AbstractClass *)LODWORD(v51); /*0x762779*/
  *(float *)&v71 = v77 * v22 / v23 + v24; /*0x762790*/
  *(float *)&v65 = v74 * v22 / v23 + v24; /*0x76279e*/
  var58 = v80 * v22 / v23 + v24; /*0x7627af*/
  *(float *)&v68 = v50 * v22 / v23 + v24; /*0x7627bd*/
  double v25 = (double)((char *)var94 - (char *)a1); /*0x7627c7*/
  v50 = v25; /*0x7627cb*/
  v53 = v25; /*0x7627d9*/
  double v26 = Math::Sqrt((double)((char *)v59 - (char *)v57) * (double)((char *)v59 - (char *)v57) + v50 * v50); /*0x7627f2*/
  double v27 = v53; /*0x7627f7*/
  if ( v26 < v53 ) /*0x762807*/
    v27 = v26; /*0x76280b*/
  if ( -v27 > v26 ) /*0x762818*/
    v27 = -v26; /*0x76281e*/
  v53 = Math::ArcTan2_Table(v27 / v26); /*0x762837*/
  if ( (int)v57 > (int)v59 ) /*0x762840*/
    v53 = -v53; /*0x762848*/
  Matrix3x4::Identity(v83); /*0x762853*/
  float v49 = v53; /*0x762864*/
  Matrix2D::Rotate((float *)v83, v49); /*0x762867*/
  float * v28 = TransformMatrix3x4Point(&v50, (float *)v83, &var6C); /*0x76287c*/
  var6C = *v28; /*0x762883*/
  v70 = (AbstractClass *)*((_DWORD *)v28 + 1); /*0x76288f*/
  v71 = (AbstractClass *)*((_DWORD *)v28 + 2); /*0x7628a1*/
  eax13b = (AbstractClass **)TransformMatrix3x4Point(&v50, (float *)v83, (float *)&v63); /*0x7628a5*/
  v63 = *eax13b; /*0x7628ac*/
  v64 = eax13b[1]; /*0x7628b3*/
  v65 = eax13b[2]; /*0x7628c2*/
  float * v30 = TransformMatrix3x4Point(&v50, (float *)v83, &var60); /*0x7628ce*/
  var60 = *v30; /*0x7628d5*/
  v73 = (AbstractClass *)*((_DWORD *)v30 + 1); /*0x7628e1*/
  var58 = v30[2]; /*0x7628f3*/
  eax13d = (AbstractClass **)TransformMatrix3x4Point(&v50, (float *)v83, (float *)&v66); /*0x7628f7*/
  double v32 = (double)(int)a1; /*0x7628fc*/
  v66 = *eax13d; /*0x762902*/
  v67 = eax13d[1]; /*0x76290f*/
  v68 = eax13d[2]; /*0x762916*/
  v29 = (AbstractClass *)Math::RoundToInt(v32); /*0x762923*/
  *(float *)&v55 = (float)(int)v57; /*0x762925*/
  LODWORD(v51) = Math::RoundToInt(v32); /*0x762936*/
  int v34 = Math::RoundToInt(v32); /*0x76293a*/
  float v35 = v51; /*0x76293f*/
  *(this + 63) = v29; /*0x762951*/
  this->q010 = v35; /*0x762953*/
  *(this + 65) = v34; /*0x762956*/
  v31 = (AbstractClass *)Math::RoundToInt(v32); /*0x762966*/
  LODWORD(v51) = Math::RoundToInt(v32); /*0x762971*/
  int v37 = Math::RoundToInt(v32); /*0x762975*/
  *(this + 66) = v31; /*0x762980*/
  *((float *)this + 67) = v51; /*0x762990*/
  *(this + 68) = v37; /*0x762993*/
  v33 = (AbstractClass *)Math::RoundToInt(v32); /*0x7629a3*/
  LODWORD(v51) = Math::RoundToInt(v32); /*0x7629ae*/
  int v39 = Math::RoundToInt(v32); /*0x7629b2*/
  float v40 = v51; /*0x7629b7*/
  double v41 = v32 + *(float *)&v66; /*0x7629c1*/
  *(this + 69) = v33; /*0x7629c5*/
  *((float *)this + 70) = v40; /*0x7629c7*/
  *(this + 71) = v39; /*0x7629ca*/
  v36 = (AbstractClass *)Math::RoundToInt(v41); /*0x7629da*/
  LODWORD(v51) = Math::RoundToInt(*(float *)&v55 + *(float *)&v67); /*0x7629e5*/
  int v43 = Math::RoundToInt(*(float *)&v68); /*0x7629e9*/
  float v44 = v51; /*0x7629ee*/
  *(this + 72) = v36; /*0x7629f8*/
  *((float *)this + 73) = v44; /*0x762a06*/
  *(this + 74) = v43; /*0x762a09*/
  Coord::To_Screen(*(_DWORD **)&DataGlobal_87F8E4[31296], this + 63, (IUnknown *)(this + 55)); /*0x762a12*/
  Coord::To_Screen(*(_DWORD **)&DataGlobal_87F8E4[31296], this + 66, (IUnknown *)(this + 57)); /*0x762a2b*/
  Coord::To_Screen(*(_DWORD **)&DataGlobal_87F8E4[31296], this + 69, (IUnknown *)(this + 59)); /*0x762a44*/
  Coord::To_Screen(*(_DWORD **)&DataGlobal_87F8E4[31296], this + 72, (IUnknown *)(this + 61)); /*0x762a5d*/
  _DWORD * v45 = (_DWORD *)*(this + 83); /*0x762a62*/
  *v45 = *(this + 55); /*0x762a6a*/
  v45[1] = *(this + 56); /*0x762a6f*/
  int v46 = *(this + 83); /*0x762a72*/
  *(_DWORD *)(v46 + 8) = *(this + 57); /*0x762a7a*/
  *(_DWORD *)(v46 + 12) = *(this + 58); /*0x762a80*/
  int v47 = *(this + 83); /*0x762a83*/
  *(_DWORD *)(v47 + 16) = *(this + 61); /*0x762a8f*/
  *(_DWORD *)(v47 + 20) = *(this + 62); /*0x762a98*/
  result = *(this + 83); /*0x762a9b*/
  *(_DWORD *)(result + 24) = *(this + 59); /*0x762aa7*/
  *(_DWORD *)(result + 28) = *(this + 60); /*0x762ab5*/
  qmemcpy(this + 118, (const void *)(*(this + 117) + 928), 0x18u); /*0x762aca*/
  return result; /*0x762acc*/
}
}
} // namespace gamemd

// 0x762AF0
namespace gamemd {
int Voxel::TransformMatrix()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void Voxel_Transform_Matrix(int this)
{
  int v71; // [esp+20h] [ebp-1Ch] BYREF
  int v72; // [esp+24h] [ebp-18h]
  int v73; // [esp+28h] [ebp-14h]
  int v74; // [esp+2Ch] [ebp-10h]
  _BYTE v75[12]; // [esp+30h] [ebp-Ch] BYREF

  if ( *(double *)(this + 312) - *(double *)(this + 320) > 0.1 && !this->q02C ) /*0x762b18*/
    *(_BYTE *)(this + 301) = 1; /*0x762b22*/
  if ( this->Voxel_field_0x130 == (unsigned int)Math::RoundToInt(1.0 / 0.050000001) && this->q02C == 3 ) /*0x762b49*/
  {
    DynamicVectorClass *v2 = this->q134; /*0x762b4b*/
    this->Voxel_field_0x130 = 64; /*0x762b51*/
    this->q134 = v2 + 1; /*0x762b5c*/
  }
  int v3 = *(_DWORD *)(this + 172); /*0x762b62*/
  if ( !v3 ) /*0x762b6a*/
    goto LABEL_13; /*0x762b6a*/
  int v4 = *(_DWORD *)(this + 468); /*0x762b70*/
  if ( !v4 ) /*0x762b78*/
    goto LABEL_13; /*0x762b78*/
  if ( this->Voxel_field_0x130 == (unsigned int)Math::RoundToInt(1.0 / 0.050000001) ) /*0x762b95*/
    goto LABEL_13; /*0x762b95*/
  if ( *(_DWORD *)(v4 + 692) != v3 ) /*0x762ba1*/
    goto LABEL_13; /*0x762ba1*/
  if ( this->q02C != 3 ) /*0x762bae*/
  {
    int v5 = v4 + 156; /*0x762bc0*/
    int v6 = *(_DWORD *)(v4 + 156); /*0x762bc4*/
    int v7 = *(_DWORD *)(v5 + 4); /*0x762bc6*/
    int v8 = *(_DWORD *)(v5 + 8); /*0x762bc9*/
  _DWORD *v9; // eax
    v9 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(this + 172) + 88))( /*0x762bd1*/
                     *(_DWORD *)(this + 172),
                     v75);
    int v10 = v8 - v9[2]; /*0x762bdb*/
    v72 = v6 - *v9; /*0x762bdd*/
    int v11 = v7 - v9[1]; /*0x762be4*/
    v74 = v10; /*0x762be6*/
    v73 = v11; /*0x762bea*/
    double v12 = Math::Sqrt((double)v72 * (double)v72 + (double)v10 * (double)v10 + (double)v11 * (double)v11); /*0x762c16*/
    v71 = Math::RoundToInt(v12); /*0x762c23*/
    if ( DataGlobal_B45D80 * 6.0 < (double)v71 ) /*0x762c3e*/
    {
LABEL_13:
      *(_BYTE *)(this + 300) = 0; /*0x762c40*/
      *(_BYTE *)(this + 301) = 1; /*0x762c47*/
    }
  }
  if ( *(_BYTE *)(this + 300) ) /*0x762c4e*/
  {
    if ( this->q02C != 3 ) /*0x762c69*/
      goto LABEL_21; /*0x762c69*/
    int v13 = *(_DWORD *)(this + 172); /*0x762c6f*/
    if ( v13 && (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 44))(v13) == 1 ) /*0x762c81*/
    {
      int v14 = *(_DWORD *)(this + 172); /*0x762c97*/
  int v15; // eax
      v15 = (*(int (__thiscall **)(_DWORD, _BYTE *, _DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 468) + 176))( /*0x762ca9*/
              *(_DWORD *)(this + 468),
              v75,
              0,
              0,
              0);
      int * v16 = (int *)(*(int (__thiscall **)(int, int *, int))(*(_DWORD *)v14 + 88))(v14, &v71, v15); /*0x762cb9*/
      Voxel::LightRender((_DWORD *)this, v16, 0); /*0x762cbf*/
      goto LABEL_22; /*0x762cc4*/
    }
    if ( this->q02C == 3 ) /*0x762ccf*/
    {
      int v17 = *(_DWORD *)(this + 468); /*0x762cd7*/
      int v18 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 172) + 88))(*(_DWORD *)(this + 172)); /*0x762ce8*/
  int *v19; // eax
      v19 = (int *)(*(int (__thiscall **)(int, int *, _DWORD, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)v17 + 176))( /*0x762d05*/
                     v17,
                     &v71,
                     0,
                     0,
                     0,
                     0,
                     v18);
      Voxel::LightRender((_DWORD *)this, v19, (int)v75); /*0x762d0e*/
    }
    else
    {
LABEL_21:
      int v20 = *(_DWORD *)(this + 468); /*0x762d1b*/
      int v21 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 172) + 88))(*(_DWORD *)(this + 172)); /*0x762d2c*/
  int *v22; // eax
      v22 = (int *)(*(int (__thiscall **)(int, int *, _DWORD, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)v20 + 176))( /*0x762d49*/
                     v20,
                     &v71,
                     0,
                     0,
                     0,
                     0,
                     v21);
      Voxel::SectionProject((_DWORD *)this, v22, (int)v75); /*0x762d52*/
    }
  }
LABEL_22:
  double v23 = *(double *)(this + 312); /*0x762d57*/
  if ( this->q02C != 3 ) /*0x762d6c*/
  {
    if ( v23 < 1.0 && *(_BYTE *)(this + 300) ) /*0x762f69*/
    {
      double v44 = *(double *)(this + 312) + 0.050000001; /*0x762f7d*/
      *(double *)(this + 312) = v44; /*0x762f83*/
      if ( v44 > 0.98 ) /*0x762f94*/
      {
        *(_DWORD *)(this + 312) = 0; /*0x762f96*/
        *(_DWORD *)(this + 316) = 1072693248; /*0x762fa0*/
      }
      double v45 = *(double *)(this + 312); /*0x762faa*/
      int v46 = Math::RoundToInt(v45); /*0x762fd5*/
      int v47 = Math::RoundToInt(v45); /*0x762fe3*/
      _DWORD * v48 = *(_DWORD **)(this + 332); /*0x762fe8*/
      *v48 = v46; /*0x762ff0*/
      v48[1] = v47; /*0x762ff4*/
      double v49 = *(double *)(this + 312); /*0x762ff7*/
      int v50 = Math::RoundToInt(v49); /*0x763022*/
      int v51 = Math::RoundToInt(v49); /*0x763030*/
      int v52 = *(_DWORD *)(this + 332); /*0x763035*/
      *(_DWORD *)(v52 + 8) = v50; /*0x76303d*/
      *(_DWORD *)(v52 + 12) = v51; /*0x763042*/
      double v53 = *(double *)(this + 312); /*0x763045*/
      int v54 = Math::RoundToInt(v53); /*0x763070*/
      int v55 = Math::RoundToInt(v53); /*0x76307e*/
      int v56 = *(_DWORD *)(this + 332); /*0x763083*/
      *(_DWORD *)(v56 + 16) = v54; /*0x76308b*/
      *(_DWORD *)(v56 + 20) = v55; /*0x763090*/
    }
    if ( *(_BYTE *)(this + 301) && 0.050000001 * 0.5 + *(double *)(this + 312) >= *(double *)(this + 320) ) /*0x7630be*/
    {
      double v57 = *(double *)(this + 320) + 0.050000001; /*0x7630ca*/
      *(double *)(this + 320) = v57; /*0x7630d6*/
  char v59; // c0
      if ( !v59 ) /*0x7630e1*/
        return (*(int (__thiscall **)(int))(*(_DWORD *)this + 248))(this); /*0x7630e1*/
      int v60 = Math::RoundToInt(v57); /*0x76311c*/
      int v61 = Math::RoundToInt(v57); /*0x76312a*/
      int v62 = *(_DWORD *)(this + 332); /*0x76312f*/
      *(_DWORD *)(v62 + 24) = v60; /*0x763137*/
      *(_DWORD *)(v62 + 28) = v61; /*0x76313c*/
      double v63 = *(double *)(this + 320); /*0x76313f*/
      int v64 = Math::RoundToInt(v63); /*0x76316a*/
      int v65 = Math::RoundToInt(v63); /*0x763178*/
      int v66 = *(_DWORD *)(this + 332); /*0x76317d*/
      *(_DWORD *)(v66 + 32) = v64; /*0x763185*/
      *(_DWORD *)(v66 + 36) = v65; /*0x76318a*/
      double v67 = *(double *)(this + 320); /*0x76318d*/
      int v68 = Math::RoundToInt(v67); /*0x7631b8*/
      int v69 = Math::RoundToInt(v67); /*0x7631c6*/
      int v70 = *(_DWORD *)(this + 332); /*0x7631cb*/
      *(_DWORD *)(v70 + 40) = v68; /*0x7631d3*/
      *(_DWORD *)(v70 + 44) = v69; /*0x7631d8*/
    }
    return Voxel::FaceBlit(this); /*0x7631d8*/
  }
  if ( v23 < 1.0 && *(_BYTE *)(this + 300) ) /*0x762d7b*/
  {
    double v24 = *(double *)(this + 312) + 0.050000001; /*0x762d8f*/
    *(double *)(this + 312) = v24; /*0x762d95*/
    if ( v24 > 0.98 ) /*0x762da6*/
    {
      *(_DWORD *)(this + 312) = 0; /*0x762da8*/
      *(_DWORD *)(this + 316) = 1072693248; /*0x762db2*/
    }
    double v25 = *(double *)(this + 312); /*0x762dbc*/
    int v26 = Math::RoundToInt(v25); /*0x762de7*/
    int v27 = Math::RoundToInt(v25); /*0x762df5*/
    _DWORD * v28 = *(_DWORD **)(this + 332); /*0x762dfa*/
    *v28 = v26; /*0x762e02*/
    v28[1] = v27; /*0x762e06*/
    double v29 = *(double *)(this + 312); /*0x762e09*/
    int v30 = Math::RoundToInt(v29); /*0x762e34*/
    int v31 = Math::RoundToInt(v29); /*0x762e42*/
    int v32 = *(_DWORD *)(this + 332); /*0x762e47*/
    *(_DWORD *)(v32 + 8) = v30; /*0x762e4f*/
    *(_DWORD *)(v32 + 12) = v31; /*0x762e54*/
  }
  if ( !*(_BYTE *)(this + 301) || 0.050000001 * 0.5 + *(double *)(this + 312) < *(double *)(this + 320) ) /*0x762e82*/
    return Voxel::FaceBlit(this); /*0x7631dd*/
  double v33 = *(double *)(this + 320) + 0.050000001; /*0x762e8e*/
  *(double *)(this + 320) = v33; /*0x762e9a*/
  char v35; // c0
  if ( !v35 ) /*0x762ea5*/
    return (*(int (__thiscall **)(int))(*(_DWORD *)this + 248))(this); /*0x762eba*/
  int v37 = Math::RoundToInt(v33); /*0x762ee0*/
  int v38 = Math::RoundToInt(v33); /*0x762eee*/
  int v39 = *(_DWORD *)(this + 332); /*0x762ef3*/
  *(_DWORD *)(v39 + 16) = v37; /*0x762efb*/
  *(_DWORD *)(v39 + 20) = v38; /*0x762f00*/
  double v40 = *(double *)(this + 320); /*0x762f03*/
  int v41 = Math::RoundToInt(v40); /*0x762f2e*/
  int v42 = Math::RoundToInt(v40); /*0x762f3c*/
  int v43 = *(_DWORD *)(this + 332); /*0x762f41*/
  *(_DWORD *)(v43 + 24) = v41; /*0x762f4b*/
  *(_DWORD *)(v43 + 28) = v42; /*0x762f50*/
  return Voxel::FaceBlit(this); /*0x762eb3*/
}
}
} // namespace gamemd

// 0x763330
namespace gamemd {
char Voxel::freeSectionMemory(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_763330(_DWORD *this, _DWORD *a2)
{

  int v3 = this->q008; /*0x763333*/
  if ( this->q010 >= v3 ) /*0x76333b*/
  {
    if ( !this->q0D0 && v3 ) /*0x763346*/
      return 0; /*0x763346*/
    int v4 = this->q014; /*0x763348*/
    if ( v4 <= 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, v3 + v4, 0) ) /*0x763358*/
      return 0; /*0x76335f*/
  }
  int v6 = this->q010; /*0x763365*/
  int v7 = this->q004; /*0x763368*/
  this->q010 = v6 + 1; /*0x76336e*/
  *(_DWORD *)(v7 + 4 * v6) = *a2; /*0x763378*/
  return 1; /*0x763361*/
}
}
} // namespace gamemd

// 0x7DF9C0
namespace gamemd {
int Voxel::FacePixelBuffer(int * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int Voxel_FacePixelBuffer(int *a1)
{
  int result; // eax
  _BYTE *i; // edi
  int savedregs; // [esp+18h] [ebp+0h] BYREF

  int v1 = *((__int16 *)a1 + 21); /*0x7df9cf*/
  int v2 = *((__int16 *)a1 + 22); /*0x7df9d3*/
  int v3 = *((unsigned __int8 *)a1 + 50); /*0x7df9d9*/
  int * v4 = g_VoxelOffsetTable; /*0x7df9dc*/
  int v5 = 0; /*0x7df9e1*/
  int v6 = 0; /*0x7df9e3*/
  do /*0x7df9fb*/
  {
    *(_WORD *)v4 = v5; /*0x7df9ea*/
    _WORD * v7 = (_WORD *)v4 + 1; /*0x7df9ed*/
    v5 += v1; /*0x7df9f0*/
    *v7 = v6; /*0x7df9f2*/
    v4 = (int *)(v7 + 1); /*0x7df9f5*/
    v6 += v2; /*0x7df9f8*/
    --v3; /*0x7df9fa*/
  }
  while ( v3 ); /*0x7df9fb*/
  int * v8 = &savedregs; /*0x7df9fd*/
  int v23 = a1[6]; /*0x7dfa06*/
  BYTE1(v3) = *((_BYTE *)a1 + 49); /*0x7dfa09*/
  do /*0x7dfa51*/
  {
    *(v8 - 1) = a1[3]; /*0x7dfa0f*/
    *(v8 - 2) = *(v8 - 3); /*0x7dfa15*/
    LOBYTE(v3) = *((_BYTE *)a1 + 48); /*0x7dfa18*/
    do /*0x7dfa3b*/
    {
      a1[6] = *(v8 - 3); /*0x7dfa1e*/
      int v9 = *a1; /*0x7dfa26*/
      int v10 = *(_DWORD *)(*a1 + 4 * a1[3]); /*0x7dfa28*/
      if ( v10 >= 0 ) /*0x7dfa2b*/
      {
        int v22 = v3; /*0x7dfa61*/
        int * v21 = v8; /*0x7dfa62*/
        _BYTE * v12 = (_BYTE *)(a1[2] + v10); /*0x7dfa65*/
        int v13 = *((unsigned __int8 *)a1 + 50); /*0x7dfa68*/
        LOWORD(v9) = *((_WORD *)a1 + 13); /*0x7dfa6b*/
        unsigned int v15 = v9 << 16; /*0x7dfa6f*/
        int v14 = *(int *)((char *)a1 + 42); /*0x7dfa72*/
        LOWORD(v15) = *((_WORD *)a1 + 12); /*0x7dfa75*/
        while ( 1 ) /*0x7dfa79*/
        {
          int v16 = 0; /*0x7dfa79*/
          if ( !v13 ) /*0x7dfa7e*/
            break; /*0x7dfa7e*/
          LOBYTE(v16) = *v12; /*0x7dfa80*/
          _BYTE * v17 = v12 + 1; /*0x7dfa82*/
          LOBYTE(v13) = v13 - v16; /*0x7dfa83*/
          v15 += g_VoxelOffsetTable[v16]; /*0x7dfa85*/
          BYTE1(v13) = *v17; /*0x7dfa8c*/
  int v20; // edx
  unsigned int v19; // eax
          for ( i = v17 + 1; BYTE1(v13); g_VoxelRenderBuffer[v19] = g_VoxelColorPalette[v20] ) /*0x7dfa91*/
          {
            LOBYTE(v13) = v13 - 1; /*0x7dfa95*/
            v19 = HIWORD(v15); /*0x7dfa97*/
            v20 = (unsigned __int8)i[1]; /*0x7dfa9c*/
            LOBYTE(v19) = BYTE1(v15); /*0x7dfa9f*/
            BYTE1(v20) = g_VoxelShadeTable[v20]; /*0x7dfaa1*/
            LOBYTE(v20) = *i; /*0x7dfaa7*/
            v15 += v14; /*0x7dfaa9*/
            i += 2; /*0x7dfaab*/
            --BYTE1(v13); /*0x7dfaae*/
          }
          v12 = i + 1; /*0x7dfabe*/
        }
        v8 = v21; /*0x7dfac1*/
        v3 = v22; /*0x7dfac2*/
      }
      *(v8 - 3) += *(int *)((char *)a1 + 30); /*0x7dfa30*/
      a1[3] += a1[4]; /*0x7dfa36*/
      LOBYTE(v3) = v3 - 1; /*0x7dfa39*/
    }
    while ( (_BYTE)v3 ); /*0x7dfa3b*/
    *(v8 - 3) = a1[9] + *(v8 - 2); /*0x7dfa43*/
    result = a1[5] + *(v8 - 1); /*0x7dfa49*/
    a1[3] = result; /*0x7dfa4c*/
    --BYTE1(v3); /*0x7dfa4f*/
  }
  while ( BYTE1(v3) ); /*0x7dfa51*/
  return result; /*0x7dfa55*/
}
}
} // namespace gamemd

// 0x7DFAE0
namespace gamemd {
int Voxel::FacePixelBufferEx(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int Voxel_FacePixelBufferEx(int a1)
{
  int result; // eax
  unsigned __int8 *v12; // edi
  unsigned __int8 *i; // edi
  unsigned __int8 *v19; // edi
  int savedregs; // [esp+18h] [ebp+0h] BYREF

  int v1 = *(__int16 *)(a1 + 42); /*0x7dfaef*/
  int v2 = *(__int16 *)(a1 + 44); /*0x7dfaf3*/
  int v3 = *(unsigned __int8 *)(a1 + 50); /*0x7dfaf9*/
  int * v4 = g_VoxelOffsetTable; /*0x7dfafc*/
  int v5 = 0; /*0x7dfb01*/
  int v6 = 0; /*0x7dfb03*/
  do /*0x7dfb1b*/
  {
    *(_WORD *)v4 = v5; /*0x7dfb0a*/
    _WORD * v7 = (_WORD *)v4 + 1; /*0x7dfb0d*/
    v5 += v1; /*0x7dfb10*/
    *v7 = v6; /*0x7dfb12*/
    v4 = (int *)(v7 + 1); /*0x7dfb15*/
    v6 += v2; /*0x7dfb18*/
    --v3; /*0x7dfb1a*/
  }
  while ( v3 ); /*0x7dfb1b*/
  int * v8 = &savedregs; /*0x7dfb1d*/
  int v23 = *(_DWORD *)(a1 + 24); /*0x7dfb26*/
  BYTE1(v3) = *(_BYTE *)(a1 + 49); /*0x7dfb29*/
  do /*0x7dfb72*/
  {
    *(v8 - 1) = *(_DWORD *)(a1 + 12); /*0x7dfb2f*/
    *(v8 - 2) = *(v8 - 3); /*0x7dfb35*/
    LOBYTE(v3) = *(_BYTE *)(a1 + 48); /*0x7dfb38*/
    do /*0x7dfb5c*/
    {
      *(_DWORD *)(a1 + 24) = *(v8 - 3); /*0x7dfb3e*/
      int v9 = *(_DWORD *)(a1 + 4); /*0x7dfb46*/
      int v10 = *(_DWORD *)(v9 + 4 * *(_DWORD *)(a1 + 12)); /*0x7dfb49*/
      if ( v10 >= 0 ) /*0x7dfb4c*/
      {
        int v22 = v3; /*0x7dfb81*/
        int * v21 = v8; /*0x7dfb82*/
        v12 = (unsigned __int8 *)(*(_DWORD *)(a1 + 8) + v10); /*0x7dfb85*/
        int v13 = *(unsigned __int8 *)(a1 + 50); /*0x7dfb88*/
        LOWORD(v9) = *(_WORD *)(a1 + 26); /*0x7dfb8b*/
        unsigned int v15 = v9 << 16; /*0x7dfb8f*/
        int v14 = *(_DWORD *)(a1 + 42); /*0x7dfb92*/
        LOWORD(v15) = *(_WORD *)(a1 + 24); /*0x7dfb95*/
        while ( v13 ) /*0x7dfb9c*/
        {
          BYTE1(v13) = *v12; /*0x7dfb9e*/
  int v18; // edx
  unsigned int v17; // eax
          for ( i = v12 - 1; BYTE1(v13); g_VoxelRenderBuffer[v17] = g_VoxelColorPalette[v18] ) /*0x7dfba3*/
          {
            LOBYTE(v13) = v13 - 1; /*0x7dfba7*/
            v17 = HIWORD(v15); /*0x7dfba9*/
            v18 = *i; /*0x7dfbae*/
            LOBYTE(v17) = BYTE1(v15); /*0x7dfbb0*/
            BYTE1(v18) = g_VoxelShadeTable[v18]; /*0x7dfbb2*/
            LOBYTE(v18) = *(i - 1); /*0x7dfbb8*/
            v15 += v14; /*0x7dfbbb*/
            i -= 2; /*0x7dfbbd*/
            --BYTE1(v13); /*0x7dfbc0*/
          }
          v19 = i - 1; /*0x7dfbd0*/
          int v20 = *v19; /*0x7dfbd3*/
          v12 = v19 - 1; /*0x7dfbd5*/
          LOBYTE(v13) = v13 - v20; /*0x7dfbd6*/
          v15 += g_VoxelOffsetTable[v20]; /*0x7dfbd8*/
        }
        v8 = v21; /*0x7dfbe1*/
        v3 = v22; /*0x7dfbe2*/
      }
      *(v8 - 3) += *(_DWORD *)(a1 + 30); /*0x7dfb51*/
      *(_DWORD *)(a1 + 12) += *(_DWORD *)(a1 + 16); /*0x7dfb57*/
      LOBYTE(v3) = v3 - 1; /*0x7dfb5a*/
    }
    while ( (_BYTE)v3 ); /*0x7dfb5c*/
    *(v8 - 3) = *(_DWORD *)(a1 + 36) + *(v8 - 2); /*0x7dfb64*/
    result = *(_DWORD *)(a1 + 20) + *(v8 - 1); /*0x7dfb6a*/
    *(_DWORD *)(a1 + 12) = result; /*0x7dfb6d*/
    --BYTE1(v3); /*0x7dfb70*/
  }
  while ( BYTE1(v3) ); /*0x7dfb72*/
  return result; /*0x7dfb76*/
}
}
} // namespace gamemd

// 0x7DFC00
namespace gamemd {
int Voxel::FacePixelBuffer3(int * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int Voxel_FacePixelBuffer3(int *a1)
{
  int result; // eax
  char *i; // edi
  int savedregs; // [esp+18h] [ebp+0h] BYREF

  int v1 = *((__int16 *)a1 + 21); /*0x7dfc0f*/
  int v2 = *((__int16 *)a1 + 22); /*0x7dfc13*/
  int v3 = 255; /*0x7dfc17*/
  LOBYTE(v3) = -1 - *((_BYTE *)a1 + 50); /*0x7dfc1c*/
  int * v4 = g_VoxelOffsetTable; /*0x7dfc1f*/
  int v5 = 0; /*0x7dfc24*/
  int v6 = 0; /*0x7dfc26*/
  do /*0x7dfc3e*/
  {
    *(_WORD *)v4 = v5; /*0x7dfc2d*/
    _WORD * v7 = (_WORD *)v4 + 1; /*0x7dfc30*/
    v5 += v1; /*0x7dfc33*/
    *v7 = v6; /*0x7dfc35*/
    v4 = (int *)(v7 + 1); /*0x7dfc38*/
    v6 += v2; /*0x7dfc3b*/
    --v3; /*0x7dfc3d*/
  }
  while ( v3 ); /*0x7dfc3e*/
  int * v8 = &savedregs; /*0x7dfc40*/
  int v23 = a1[6]; /*0x7dfc49*/
  BYTE1(v3) = *((_BYTE *)a1 + 49); /*0x7dfc4c*/
  do /*0x7dfc94*/
  {
    *(v8 - 1) = a1[3]; /*0x7dfc52*/
    *(v8 - 2) = *(v8 - 3); /*0x7dfc58*/
    LOBYTE(v3) = *((_BYTE *)a1 + 48); /*0x7dfc5b*/
    do /*0x7dfc7e*/
    {
      a1[6] = *(v8 - 3); /*0x7dfc61*/
      int v9 = *a1; /*0x7dfc69*/
      int v10 = *(_DWORD *)(*a1 + 4 * a1[3]); /*0x7dfc6b*/
      if ( v10 >= 0 ) /*0x7dfc6e*/
      {
        int v22 = v3; /*0x7dfca1*/
        int * v21 = v8; /*0x7dfca2*/
        _BYTE * v12 = (_BYTE *)(a1[2] + v10); /*0x7dfca5*/
        int v13 = *((unsigned __int8 *)a1 + 50); /*0x7dfca8*/
        LOWORD(v9) = *((_WORD *)a1 + 13); /*0x7dfcab*/
        unsigned int v15 = v9 << 16; /*0x7dfcaf*/
        int v14 = *(int *)((char *)a1 + 42); /*0x7dfcb2*/
        LOWORD(v15) = *((_WORD *)a1 + 12); /*0x7dfcb5*/
        while ( 1 ) /*0x7dfcb9*/
        {
          int v16 = 0; /*0x7dfcb9*/
          if ( !v13 ) /*0x7dfcbe*/
            break; /*0x7dfcbe*/
          LOBYTE(v16) = *v12; /*0x7dfcc0*/
          _BYTE * v17 = v12 + 1; /*0x7dfcc2*/
          LOBYTE(v13) = v13 - v16; /*0x7dfcc3*/
          v15 += g_VoxelOffsetTable[v16]; /*0x7dfcc5*/
          BYTE1(v13) = *v17; /*0x7dfccc*/
  char v20; // dl
  unsigned int v19; // eax
          for ( i = v17 + 1; BYTE1(v13); g_VoxelRenderBuffer[v19] = v20 ) /*0x7dfcd1*/
          {
            LOBYTE(v13) = v13 - 1; /*0x7dfcd5*/
            v19 = HIWORD(v15); /*0x7dfcd7*/
            v20 = *i; /*0x7dfcda*/
            LOBYTE(v19) = BYTE1(v15); /*0x7dfcdc*/
            ++i; /*0x7dfcde*/
            v15 += v14; /*0x7dfcdf*/
            --BYTE1(v13); /*0x7dfce1*/
          }
          v12 = i + 1; /*0x7dfceb*/
        }
        v8 = v21; /*0x7dfcee*/
        v3 = v22; /*0x7dfcef*/
      }
      *(v8 - 3) += *(int *)((char *)a1 + 30); /*0x7dfc73*/
      a1[3] += a1[4]; /*0x7dfc79*/
      LOBYTE(v3) = v3 - 1; /*0x7dfc7c*/
    }
    while ( (_BYTE)v3 ); /*0x7dfc7e*/
    *(v8 - 3) = a1[9] + *(v8 - 2); /*0x7dfc86*/
    result = a1[5] + *(v8 - 1); /*0x7dfc8c*/
    a1[3] = result; /*0x7dfc8f*/
    --BYTE1(v3); /*0x7dfc92*/
  }
  while ( BYTE1(v3) ); /*0x7dfc94*/
  return result; /*0x7dfc98*/
}
}
} // namespace gamemd

// 0x754C00
namespace gamemd {
int Voxel::SetProjectionAngle(float a1)
{
{
    int *v1;
    float v3[3];
    float v4[3];
    float v5[12];
    Matrix3x4::Identity(v5);
    DataGlobal_88746C = a1;
    Matrix3D::RotateZ(v5, a1);
    v3[0] = -0.70710599;
    v3[1] = -0.70710599;
    v3[2] = 0.0;
    v1 = (int *)TransformMatrix3x4Point(v4, v5, v3);
    DataGlobal_887470 = *v1;
    DataGlobal_887474 = v1[1];
    DataGlobal_887478 = v1[2];
    DataGlobal_887424 = 0;
    v3[0] = *(float *)&DataGlobal_887470 * -6.0;
    DataGlobal_887428 = 0;
    DataGlobal_887420 = LODWORD(v3[0]);
    return 0;
}
}
} // namespace gamemd

// 0x75F020
namespace gamemd {
int Voxel::InitDistanceTable()
{
{
    int v0;
    short *v1;
    int i;
    double v3;
    short *v4;
    double v5;
    short *v6;
    double v7;
    int *v8;
    int result;
    int v10;
    int v11;
    DataGlobal_B725CC = 1;
    v0 = 0;
    v1 = DataGlobal_B4669C;
    do
  {
    for ( i = 0; i < 300; ++i )
    {
    v3 = Math::Sqrt((double)(v0 * v0 + i * i));
    *v1++ = Math::RoundToInt(v3);
    }
    ++v0;
  }
    while ( (int)v1 < (int)&DataGlobal_B725BC );
    v4 = DataGlobal_B46254;
    v10 = 0;
    do
  {
    v5 = Math::SinCos((double)v10 * 0.125);
    *v4++ = Math::RoundToInt(v5 * 12.0 + 0.49);
    ++v10;
  }
    while ( (int)v4 < (int)DataGlobal_B4663C );
    v11 = 0;
    v6 = DataGlobal_B45E68;
    do
  {
    v7 = Math::SinCos((double)v11 * 0.1);
    *v6++ = Math::RoundToInt(v7 * 12.0 + 0.49);
    ++v11;
  }
    while ( (int)v6 < (int)&DataGlobal_B46248 );
    v8 = DataGlobal_B46648;
    for ( result = 110; result < 214; result += 8 )
    *v8++ = result;
    return result;
}
}
} // namespace gamemd
