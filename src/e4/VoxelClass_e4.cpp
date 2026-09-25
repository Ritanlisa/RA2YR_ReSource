// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/ProgressTimer_e4.hpp"
#include "e4/classes/Value_e4.hpp"
#include "e4/classes/Voxel_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/VoxelRenderer_e4.hpp"

// 0x73C5F0
namespace gamemd {
void* VoxelClass_RenderObject()
{
  int v13; // eax
  int v14; // ecx
  int v15; // edi
  int v16; // ebx
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // edx
  char v23; // cl
  int v24; // esi
  int v25; // eax
  _DWORD *v26; // eax
  int v27; // edx
  int v28; // eax
  const void *v29; // eax
  int v30; // eax
  int v31; // eax
  __int16 v32; // dx
  int v34; // ebx
  float *inited; // eax
  float *v36; // eax
  _DWORD *Value; // eax
  int v38; // edi
  float *v39; // eax
  float *v40; // eax
  int v41; // eax
  int result; // eax
  int v44; // esi
  int v45; // eax
  float v46; // [esp+B8h] [ebp-12Ch]
  float v47; // [esp+B8h] [ebp-12Ch]
  float v48; // [esp+B8h] [ebp-12Ch]
  float v49; // [esp+B8h] [ebp-12Ch]
  float v50; // [esp+B8h] [ebp-12Ch]
  int v51; // [esp+BCh] [ebp-128h]
  char v52; // [esp+CFh] [ebp-115h]
  float v53; // [esp+D0h] [ebp-114h]
  double v54; // [esp+D4h] [ebp-110h] BYREF
  float v55; // [esp+DCh] [ebp-108h]
  int v56; // [esp+E0h] [ebp-104h] BYREF
  int v57; // [esp+E4h] [ebp-100h] BYREF
  double v58; // [esp+E8h] [ebp-FCh]
  float v59; // [esp+F0h] [ebp-F4h]
  int v60; // [esp+F4h] [ebp-F0h] BYREF
  int v61; // [esp+F8h] [ebp-ECh]
  _DWORD v62[2]; // [esp+FCh] [ebp-E8h] BYREF
  int v63; // [esp+104h] [ebp-E0h]
  int v64; // [esp+108h] [ebp-DCh] BYREF
  _DWORD v65[4]; // [esp+10Ch] [ebp-D8h] BYREF
  int v66; // [esp+11Ch] [ebp-C8h] BYREF
  float v67[3]; // [esp+120h] [ebp-C4h] BYREF
  float v68; // [esp+12Ch] [ebp-B8h] BYREF
  _DWORD v69[3]; // [esp+130h] [ebp-B4h] BYREF
  float v70[12]; // [esp+13Ch] [ebp-A8h] BYREF
  float v71[12]; // [esp+16Ch] [ebp-78h] BYREF
  _WORD v72[12]; // [esp+19Ch] [ebp-48h] BYREF
  _BYTE v73[48]; // [esp+1B4h] [ebp-30h] BYREF

  v13 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 108))(a1); /*0x73c5ff*/
  v14 = *((_DWORD *)a1 + 433); /*0x73c602*/
  v15 = v13; /*0x73c608*/
  v61 = v13; /*0x73c60a*/
  v52 = 1; /*0x73c60e*/
  if ( *(_DWORD *)(v14 + 3644) != 8 || (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 196))(a1) ) /*0x73c621*/
    v16 = 0; /*0x73c649*/
  else
    v16 = ((unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((_WORD *)a1 + 452, &v60) >> 12) + 1) >> 1) + 1) /*0x73c644*/
        & 7;
  v17 = *((_DWORD *)a1 + 432); /*0x73c64b*/
  if ( v17 >= 0 ) /*0x73c653*/
  {
    v18 = *((_DWORD *)a1 + 433); /*0x73c655*/
    v16 = v17 / 2 + *(_DWORD *, unsigned int a1)(v18 + 3632) + v16 * *(char *)(v18 + 3677); /*0x73c672*/
    goto LABEL_21; /*0x73c674*/
  }
  if ( !*((_DWORD *)a1 + 413) ) /*0x73c679*/
    WinAPI::Wrapper(-2147467261); /*0x73c688*/
  if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(**((_DWORD **)a1 + 413) + 16))(*((_DWORD *)a1 + 413)) /*0x73c6a3*/
    || (v18 = *((_DWORD *)a1 + 433), *(_DWORD *)(v18 + 664)) )
  {
    v18 = *((_DWORD *)a1 + 433); /*0x73c702*/
    v22 = v16 * *(char *)(v18 + 3676) + *((_DWORD *)a1 + 334) % *(char *)(v18 + 3676); /*0x73c71b*/
  LABEL_20:
    v16 = *(_DWORD *, unsigned int a1)(v18 + 3628) + v22; /*0x73c71d*/
    goto LABEL_21; /*0x73c723*/
  }
  v19 = *((_DWORD *)a1 + 438); /*0x73c6ad*/
  if ( v19 < 0 ) /*0x73c6b5*/
  {
    if ( !a1[1718] ) /*0x73c6dd*/
      goto LABEL_21; /*0x73c6dd*/
    v21 = *(_DWORD *)(v18 + 3612); /*0x73c6df*/
    if ( v21 ) /*0x73c6e7*/
    {
      v16 = *(_DWORD *)(v18 + 3624) + v16 * v21; /*0x73c6fe*/
      goto LABEL_21; /*0x73c700*/
    }
    v22 = v16 * *(char *, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a5)(v18 + 3676); /*0x73c6f0*/
    goto LABEL_20; /*0x73c6f3*/
  }
  v20 = v19 / *(_DWORD *)(v18 + 3620); /*0x73c6b8*/
  if ( v20 >= *(_DWORD *)(v18 + 3616) - 1 ) /*0x73c6cd*/
    v20 = *(_DWORD *)(v18 + 3616) - 1; /*0x73c6cf*/
  v16 = v20 + *(_DWORD *)(v18 + 3636); /*0x73c6d1*/
  LABEL_21:
  if ( *(_BYTE *)(v18 + 3233) ) /*0x73c725*/
  {
    v23 = a1[1060]; /*0x73c73a*/
    v63 = a2; /*0x73c740*/
    v64 = a3; /*0x73c74d*/
    if ( v23 ) /*0x73c751*/
      v64 = a3 - 14; /*0x73c756*/
    v24 = v15->nextArrayIndex; /*0x73c762*/
    v25 = (*(int (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)a1 + 748))(a1, 0); /*0x73c772*/
    DrawToSurfaceSHP( /*0x73c7a7*/
      g_DSurface_Hidden_2,
      g_FileSystem_THEATER_PAL,
      v15,
      v16 + v24 / 2,
      &v64,
      &a5,
      11777,
      0,
      v25 - 2,
      1000,
      0,
      0,
      0,
      0,
      0,
      v51);
    v61 = g_DSurface_Hidden_2; /*0x73c7bd*/
    g_DSurface_Hidden_2 = dword_B1D13C; /*0x73c7c3*/
    v63 = 128; /*0x73c7c9*/
    v62[1] = 128; /*0x73c7cd*/
    v26 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_B1D13C + 120))(dword_B1D13C, v69); /*0x73c7d8*/
    v65[0] = *v26; /*0x73c7dd*/
    v65[1] = v26[1]; /*0x73c7e4*/
    v65[2] = v26[2]; /*0x73c7eb*/
    v27 = v26[3]; /*0x73c7ef*/
    a1[1747] = 1; /*0x73c7f2*/
    v65[3] = v27; /*0x73c804*/
    dword_B1CFA8 = dword_B1CFA8; /*0x73c80e*/
    dword_B1CFAC = dword_B1CFAC; /*0x73c818*/
    dword_B1CFB0 = dword_B1CFB0; /*0x73c81e*/
    dword_B1CFB4 = dword_B1CFB4; /*0x73c824*/
    if ( *(_DWORD *)(*((_DWORD *)a1 + 433) + 192) && *(_DWORD *)(*((_DWORD *)a1 + 433) + 196) ) /*0x73c83d*/
    {
      v28 = *((_DWORD *)a1 + 413); /*0x73c848*/
      v66 = -1; /*0x73c84e*/
      if ( !v28 ) /*0x73c858*/
        WinAPI::Wrapper(-2147467261); /*0x73c85f*/
      v29 = (const void *)(*(int (__stdcall **)(_DWORD, _BYTE *, int *))(**((_DWORD **)a1 + 413) + 36))( /*0x73c87a*/
                            *((_DWORD *)a1 + 413),
                            v73,
                            &v66);
      Transform::Copy(v70, v29); /*0x73c885*/
      v46 = (float)(*(_DWORD *)(*((_DWORD *)a1 + 433) + 1824) / 8); /*0x73c8af*/
      Matrix3x4::Translate(v70, v46); /*0x73c8b2*/
      v54 = (double)(int)((((unsigned int)((*ProgressTimer::GetValue((_WORD *)a1 + 464, &v56) >> 10) + 1) >> 1) & 0x1F) /*0x73c8ee*/
                        - 8)
          * -0.1963495408493621;
      v47 = v54 /*0x73c91f*/
          - (double)(int)((((unsigned int)((*ProgressTimer::GetValue((_WORD *)a1 + 452, &v57) >> 10) + 1) >> 1) & 0x1F)
                        - 8)
          * -0.1963495408493621;
      Matrix2D::Rotate(v70, v47); /*0x73c922*/
      v68 = v70[3]; /*0x73c967*/
      qmemcpy(v71, v70, sizeof(v71)); /*0x73c96d*/
      *(float *)&v69[1] = v70[11]; /*0x73c973*/
      *(float *)&v58 = -v70[3]; /*0x73c977*/
      *(float *)v69 = v70[7]; /*0x73c97f*/
      *((float *)&v58 + 1) = -v70[7]; /*0x73c989*/
      v54 = v58; /*0x73c995*/
      v59 = -v70[11]; /*0x73c99b*/
      v55 = v59; /*0x73c9b3*/
      Matrix3x3::Multiply(v71, (float *)&v54); /*0x73c9b7*/
      if ( *((_DWORD *)a1 + 252) ) /*0x73c9bc*/
      {
        v48 = -*((float *)a1 + 251); /*0x73c9d6*/
        Matrix3x4::Translate(v70, v48, unsigned int a1); /*0x73c9d9*/
      }
      v53 = (float)(*(_DWORD *)((*(int (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)a1 + 1016))(a1, 0) + 12) / -8); /*0x73ca08*/
      v56 = *(_DWORD *)((*(int (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)a1 + 1016))(a1, 0) + 4) / -8; /*0x73ca30*/
      v67[2] = v53; /*0x73ca3c*/
      v67[1] = 0.0; /*0x73ca40*/
      IDA_HIDWORD(v58) = 0; /*0x73ca44*/
      *(float *)&v54 = (float)v56; /*0x73ca50*/
      *(float *)&v58 = -*(float *)&v54; /*0x73ca62*/
      v67[0] = *(float *)&v54; /*0x73ca6c*/
      v59 = -v53; /*0x73ca74*/
      *(_QWORD *)&v54 = IDA_LODWORD(v58); /*0x73ca7c*/
      v55 = v59; /*0x73ca84*/
      Matrix3x3::Multiply(v71, (float *)&v54); /*0x73ca90*/
      v30 = *(_DWORD *)a1; /*0x73ca95*/
      qmemcpy(v72, a1 + 880, sizeof(v72)); /*0x73caaa*/
      if ( *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(_BYTE *, _DWORD))(v30 + 1016))(a1, 0) + 160) + 670) ) /*0x73cabe*/
      {
        v31 = (unsigned __int8)((unsigned int)((*ProgressTimer::GetValue(v72, &v57) >> 7) + 1) >> 1); /*0x73cae1*/
        if ( v31 <= 64 || v31 > 128 ) /*0x73caf0*/
          v31 = (64 - v31) / 3 + 64; /*0x73cb1a*/
        else
          IDA_LOBYTE(v31) = (char)(v31 - 64) / 3 + 64; /*0x73cb01*/
        IDA_LOBYTE(v32) = 0; /*0x73cb1e*/
        IDA_HIBYTE(v32) = v31; /*0x73cb27*/
        IDA_LOWORD(v56) = v32; /*0x73cb2e*/
        FacingClass::Set_SyncLog(&v56, unsigned int a1); /*0x73cb33*/
      }
      if ( *((_DWORD *)a1 + 260) ) /*0x73cb38*/
      {
        v49 = -*((float *)a1 + 259); /*0x73cb52*/
        Matrix3x4::Translate(v71, v49, unsigned int a1); /*0x73cb55*/
      }
      v56 = (((unsigned int)((*ProgressTimer::GetValue(v72, &v57) >> 10) + 1) >> 1) & 0x1F) - 8; /*0x73cb81*/
      v50 = -((double)v56 * -0.1963495408493621); /*0x73cb91*/
      Matrix3D::RotateZ(v71, v50); /*0x73cb94*/
      Matrix3x3::Multiply(v71, v67); /*0x73cba5*/
      Matrix3x3::Multiply(v71, &v68); /*0x73cbb6*/
      if ( (((unsigned int)((*ProgressTimer::GetValue((_WORD *)a1 + 464, &v57) >> 13) + 1) >> 1) & 3) == 0 /*0x73cbf8*/
        || (v52 = 1, (((unsigned int)((*ProgressTimer::GetValue((_WORD *)a1 + 464, &v56) >> 13) + 1) >> 1) & 3) == 3) )
      {
        v52 = 0; /*0x73cbfa*/
      }
      v15 = v61; /*0x73cbff*/
    }
    a8 = a8; /*0x73cc03*/
    (*(void (__thiscall **)(_BYTE *, int, int, _DWORD *, _DWORD *, _DWORD, int, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)a1 + 1292))( /*0x73cc36*/
      a1,
      v15,
      v16,
      v62,
      v65,
      0,
      256,
      0,
      0,
      0,
      a8,
      0,
      0,
      0,
      0,
      0,
      10240);
    if ( *(_DWORD *)(*((_DWORD *)a1 + 433) + 192) && *(_DWORD *)(*((_DWORD *)a1 + 433) + 196) && !v52 ) /*0x73cc59*/
    {
      v34 = *(_DWORD *)a1; /*0x73cc5b*/
      inited = (float *)AudioConfig::InitDefault(v73); /*0x73cc75*/
      v36 = MultiplyMatrix3x4(v70, inited, v71); /*0x73cc83*/
      (*(void (__thiscall **)(_BYTE *, int, _DWORD, int, _DWORD, _DWORD *, _DWORD *, float *, int, int, _DWORD))(v34 + 1296))( /*0x73cca8*/
        a1,
        *((_DWORD *, unsigned int a1, unsigned int a8)a1 + 433) + 192,
        0,
        -1,
        0,
        v65,
        v62,
        v36,
        a8,
        10240,
        0);
    }
    Value = ProgressTimer::GetValue((_WORD *)a1 + 464, &v57); /*0x73ccb9*/
    (*(void (__thiscall **)(_BYTE *, int, unsigned int, _DWORD *, _DWORD *, _DWORD, int, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)a1 + 1292))( /*0x73cd08*/
      a1,
      v15,
      (((((unsigned int)((*Value >> 10) + 1) >> 1) & 0x1F) + 4) & 0x1F) + 8 * *(char *)(*((_DWORD *)a1 + 433) + 3676),
      v62,
      v65,
      0,
      256,
      0,
      0,
      0,
      a8,
      0,
      0,
      0,
      0,
      0,
      10272);
    if ( *(_DWORD *)(*((_DWORD *)a1 + 433) + 192) && *(_DWORD *)(*((_DWORD *)a1 + 433) + 196) ) /*0x73cd1e*/
    {
      if ( v52 ) /*0x73cd2b*/
      {
        v38 = *(_DWORD *)a1; /*0x73cd2d*/
        v39 = (float *)AudioConfig::InitDefault(v73); /*0x73cd47*/
        v40 = MultiplyMatrix3x4(v70, v39, v71); /*0x73cd55*/
        (*(void (__thiscall **)(_BYTE *, int, _DWORD, int, _DWORD, _DWORD *, _DWORD *, float *, int, int, _DWORD))(v38 + 1296))( /*0x73cd7a*/
          a1,
          *((_DWORD *)a1 + 433) + 192,
          0,
          -1,
          0,
          v65,
          v62,
          v40,
          a8,
          10272,
          0);
      }
    }
    v41 = (*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)a1 + 1124))(a1, a8); /*0x73cd86*/
    v60 = v60; /*0x73cd93*/
    (*(void (__thiscall **)(_BYTE *, int, int, int, int, int, int, int, int, int))(*(_DWORD *)a1 + 1372))( /*0x73cddb*/
      a1,
      v60,
      a2,
      a3,
      a4,
      a5,
      a6,
      a7,
      v41,
      a9);
    result = (*(int (__thiscall **)(int, int *, _DWORD))(g_DSurface_Hidden_2->abstractFlags)( /*0x73cdf0*/
               g_DSurface_Hidden_2,
               &dword_B1CFA8,
               0);
    g_DSurface_Hidden_2 = v60; /*0x73cdf3*/
    a1[1747] = 0; /*0x73cdf9*/
  }
  else if ( *(_BYTE *)(v18 + 3606) && TechnoClass::CheckTargetCell(a1) && !TechnoClass::ScanNeighborCells(a1) ) /*0x73ce24*/
  {
    return (*(int (__thiscall **)(_BYTE *, int, int, int *, int *, _DWORD, int, int, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a1 + 1292))( /*0x73ce5e*/
             a1,
             v15,
             v16,
             &a2,
             &a4,
             0,
             256,
             -16,
             0,
             0,
             a8,
             0,
             0,
             0,
             0,
             0,
             0);
  }
  else
  {
    v44 = *(_DWORD *)a1; /*0x73ce75*/
    v45 = (*(int (__thiscall **)(_BYTE *, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a1 + 752))( /*0x73ce89*/
            a1,
            0,
            a8,
            0,
            0,
            0,
            0,
            0,
            0);
    return (*(int (__thiscall **)(_BYTE *, int, int, char *, char *, _DWORD, int, _DWORD, int))(v44 + 1292))( /*0x73cead*/
             a1,
             v15,
             v16,
             &a10,
             &a12,
             0,
             256,
             0,
             v45);
  }
  return result; /*0x73ce00*/
}
}