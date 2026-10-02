// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>

#include "e4/e4_globals.hpp"
#include "e4/classes/ProgressTimer_e4.hpp"
#include "e4/classes/Value_e4.hpp"
#include "e4/classes/Voxel_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/VoxelRenderer_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/VoxelPaletteClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/VoxelAnim_e4.hpp"
#include "e4/classes/TerrainTypeClass_e4.hpp"
#include "e4/classes/Team_e4.hpp"
#include "e4/classes/Matrix3x4_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/ThemeClass_e4.hpp"
#include "e4/classes/TriggerClass_e4.hpp"
#include "e4/classes/AudioConfig_e4.hpp"
#include "e4/classes/FacingClass_e4.hpp"
#include "e4/classes/Matrix2D_e4.hpp"
#include "e4/classes/Matrix3x3_e4.hpp"
#include "e4/classes/Transform_e4.hpp"

// 0x73C5F0
namespace gamemd {
void* VoxelClass_RenderObject(void * a1, void * a2, void * a3, void * a4, void * a5, void * a6, void * a7, void * a8, void * a9)
{
  void * v13;
  void * v14;
  void * v15;
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
  unsigned int *v26; // eax
  int v27; // edx
  int v28; // eax
  const void *v29; // eax
  int v30; // eax
  int v31; // eax
  int16_t v32; // dx
  float * v34;
  float *inited; // eax
  float *v36; // eax
  unsigned int *Value; // eax
  float * v38;
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
  void * v61;
  unsigned int v62[2]; // [esp+FCh] [ebp-E8h] BYREF
  void * v63;
  void * v64;
  unsigned int v65[4]; // [esp+10Ch] [ebp-D8h] BYREF
  int v66; // [esp+11Ch] [ebp-C8h] BYREF
  float v67[3]; // [esp+120h] [ebp-C4h] BYREF
  float v68; // [esp+12Ch] [ebp-B8h] BYREF
  unsigned int v69[3]; // [esp+130h] [ebp-B4h] BYREF
  float v70[12]; // [esp+13Ch] [ebp-A8h] BYREF
  float v71[12]; // [esp+16Ch] [ebp-78h] BYREF
  unsigned short v72[12]; // [esp+19Ch] [ebp-48h] BYREF
  unsigned char v73[48]; // [esp+1B4h] [ebp-30h] BYREF

  v13 = (void *)((int)((void *)((*(int ((unsigned char *)(**))(unsigned char *))(*(unsigned int *)a1 + 108))(a1))));
  v14 = (void *)((int)((void *)(*((unsigned int *)a1 + 433))));
  v15 = (void *)((unsigned int)(v13));
  v61 = v13; /*0x73c60a*/
  v52 = 1; /*0x73c60e*/
  if ( *(unsigned int *)((unsigned int)(v14)+ 3644) != 8 || (*(uint8_t ((unsigned char *)(**))(unsigned char *))(*(unsigned int *)a1 + 196))(a1) ) /*0x73c621*/
    v16 = 0; /*0x73c649*/
  else
    v16 = ((uint8_t)((unsigned int)((*(unsigned int *)(ProgressTimer)::GetValue((unsigned (unsigned int)(short)*)a1 + 452, &v60) >> 12) + 1) >> 1) + 1) /*0x73c644*/
        & 7;
  v17 = *((unsigned int *)a1 + 432); /*0x73c64b*/
  if ( v17 >= 0 ) /*0x73c653*/
  {
    v18 = *((unsigned int *)a1 + 433); /*0x73c655*/
    v16 = v17 / 2 + *(unsigned int *)(v18 + 3632) + v16 * *(char *)(v18 + 3677); /*0x73c672*/
    goto LABEL_21; /*0x73c674*/
  }
  if ( !*((unsigned int *)a1 + 413) ) /*0x73c679*/
    WinAPI::Wrapper(-2147467261); /*0x73c688*/
  if ( (*(uint8_t (**)(unsigned int))(**((unsigned int **)a1 + 413) + 16))(*((unsigned int *)a1 + 413)) /*0x73c6a3*/
    || (v18 = *((unsigned int *, void * a1)a1 + 433), *(unsigned int *)(v18 + 664)) )
  {
    v18 = *((unsigned int *)a1 + 433); /*0x73c702*/
    v22 = v16 * *(char *)(v18 + 3676) + *((unsigned int *)a1 + 334) % *(char *)(v18 + 3676); /*0x73c71b*/
  LABEL_20:
    v16 = *(unsigned int *)(v18 + 3628) + v22; /*0x73c71d*/
    goto LABEL_21; /*0x73c723*/
  }
  v19 = *((unsigned int *)a1 + 438); /*0x73c6ad*/
  if ( v19 < 0 ) /*0x73c6b5*/
  {
    if ( !a1[1718] ) /*0x73c6dd*/
      goto LABEL_21; /*0x73c6dd*/
    v21 = *(unsigned int *)(v18 + 3612); /*0x73c6df*/
    if ( v21 ) /*0x73c6e7*/
    {
      v16 = *(unsigned int *)(v18 + 3624) + v16 * v21; /*0x73c6fe*/
      goto LABEL_21; /*0x73c700*/
    }
    v22 = v16 * *(char *)(v18 + 3676); /*0x73c6f0*/
    goto LABEL_20; /*0x73c6f3*/
  }
  v20 = v19 / *(unsigned int *)(v18 + 3620); /*0x73c6b8*/
  if ( v20 >= *(unsigned int *)(v18 + 3616) - 1 ) /*0x73c6cd*/
    v20 = *(unsigned int *)(v18 + 3616) - 1; /*0x73c6cf*/
  v16 = v20 + *(unsigned int *)(v18 + 3636); /*0x73c6d1*/
  LABEL_21:
  if ( *(unsigned char *)(v18 + 3233) ) /*0x73c725*/
  {
    v23 = (int)(a1[1060]);
    v63 = (void *)((unsigned int)((void *)((unsigned int)(a2))));
    v64 = (void *)(a3);
    if ( v23 ) /*0x73c751*/
      v64 = (void *)((unsigned int)(a3)- 14); /*0x73c756*/
    v24 = v15->nextArrayIndex; /*0x73c762*/
    v25 = (*(int ((unsigned char *)(**))(unsigned char *, unsigned int))(*(unsigned int *)a1 + 748))(a1, 0); /*0x73c772*/
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
    v61 = (void *)((unsigned int)((void *)((int)((void *)(g_DSurface_Hidden_2)))));
    g_DSurface_Hidden_2 = (int)((void *)(dword_B1D13C));
    v63 = (void *)(128);
    v62[1] = 128; /*0x73c7cd*/
    v26 = (unsigned int *)(*(int (**)(int, unsigned int *))(*(unsigned int *)dword_B1D13C + 120))(dword_B1D13C, v69); /*0x73c7d8*/
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
    if ( *(unsigned int *)(*((unsigned int *)a1 + 433) + 192) && *(unsigned int *)(*((unsigned int *)a1 + 433) + 196) ) /*0x73c83d*/
    {
      v28 = *((unsigned int *)a1 + 413); /*0x73c848*/
      v66 = -1; /*0x73c84e*/
      if ( !v28 ) /*0x73c858*/
        WinAPI::Wrapper(-2147467261); /*0x73c85f*/
      v29 = (const void *)(*(int (**)(unsigned int, unsigned char *, int *))(**((unsigned int **)a1 + 413) + 36))( /*0x73c87a*/
                            *((unsigned int *)a1 + 413),
                            v73,
                            &v66);
      Transform::Copy(v70,(void *)(v29)); /*0x73c885*/
      v46 = (float)(*(unsigned int *)(*((unsigned int *)a1 + 433) + 1824) / 8); /*0x73c8af*/
      ((Matrix3x4 *)(v70))->Translate(v46); /*0x73c8b2*/
      v54 = (double)(int)((((unsigned int)((*(unsigned int *)(ProgressTimer)::GetValue((unsigned (unsigned int)(short)*)a1 + 464, &v56) >> 10) + 1) >> 1) & 0x1F) /*0x73c8ee*/
                        - 8)
          * -0.1963495408493621;
      v47 = v54 /*0x73c91f*/
          - (double, void * a1)(int)((((unsigned int)((*((ProgressTimer *)((unsigned short *)a1 + 452))->GetValue(&v57) >> 10) + 1) >> 1) & 0x1F)
                        - 8)
          * -0.1963495408493621;
      ((Matrix2D *)(v70))->Rotate(v47); /*0x73c922*/
      v68 = v70[3]; /*0x73c967*/
      qmemcpy(v71, v70, sizeof(v71)); /*0x73c96d*/
      *(float *)&v69[1] = v70[11]; /*0x73c973*/
      *(float *)&v58 = -v70[3]; /*0x73c977*/
      *(float *)v69 = v70[7]; /*0x73c97f*/
      *((float *)&v58 + 1) = -v70[7]; /*0x73c989*/
      v54 = v58; /*0x73c995*/
      v59 = -v70[11]; /*0x73c99b*/
      v55 = v59; /*0x73c9b3*/
      ((Matrix3x3 *)(v71))->Multiply((float *)&v54); /*0x73c9b7*/
      if ( *((unsigned int *)a1 + 252) ) /*0x73c9bc*/
      {
        v48 = -*((float *)a1 + 251); /*0x73c9d6*/
        Matrix3x4::Translate(v70, v48, unsigned int a1); /*0x73c9d9*/
      }
      v53 = (float)(*(unsigned int *)((*(int ((unsigned char *)(**))(unsigned char *, unsigned int))(*(unsigned int *)a1 + 1016))(a1, 0) + 12) / -8); /*0x73ca08*/
      v56 = *(unsigned int *)((*(int ((unsigned char *)(**))(unsigned char *, unsigned int))(*(unsigned int *)a1 + 1016))(a1, 0) + 4) / -8; /*0x73ca30*/
      v67[2] = v53; /*0x73ca3c*/
      v67[1] = 0.0; /*0x73ca40*/
      IDA_HIDWORD(v58) = 0; /*0x73ca44*/
      *(float *)&v54 = (float)v56; /*0x73ca50*/
      *(float *)&v58 = -*(float *)&v54; /*0x73ca62*/
      v67[0] = *(float *)&v54; /*0x73ca6c*/
      v59 = -v53; /*0x73ca74*/
      v54 = (unsigned long long)(IDA_LODWORD(v58)); /*0x73ca7c*/
      v55 = v59; /*0x73ca84*/
      ((Matrix3x3 *)(v71))->Multiply((float *)&v54); /*0x73ca90*/
      v30 = *(unsigned int *)a1; /*0x73ca95*/
      qmemcpy(v72, (unsigned int)(a1)+ 880, sizeof(v72)); /*0x73caaa*/
      if ( *(unsigned char *)(*(unsigned int *)(*(unsigned int *)(*(int ((unsigned char *)(**))(unsigned char *, unsigned int))(v30 + 1016))(a1, 0) + 160) + 670) ) /*0x73cabe*/
      {
        v31 = (unsigned int *)((uint8_t)((unsigned int)((*(unsigned int *)(ProgressTimer)::GetValue(v72, &v57) >> 7) + 1) >> 1)); /*0x73cae1*/
        if ( v31 <= 64 || v31 > 128 ) /*0x73caf0*/
          v31 = (64 - v31) / 3 + 64; /*0x73cb1a*/
        else
          IDA_LOBYTE(v31) = (char)(v31 - 64) / 3 + 64; /*0x73cb01*/
        IDA_LOBYTE(v32) = 0; /*0x73cb1e*/
        IDA_HIBYTE(v32) = v31; /*0x73cb27*/
        IDA_LOWORD(v56) = v32; /*0x73cb2e*/
        FacingClass::Set_SyncLog(&v56, unsigned int a1); /*0x73cb33*/
      }
      if ( *((unsigned int *)a1 + 260) ) /*0x73cb38*/
      {
        v49 = -*((float *)a1 + 259); /*0x73cb52*/
        Matrix3x4::Translate(v71, v49, unsigned int a1); /*0x73cb55*/
      }
      v56 = (unsigned int *)((((unsigned int)((*(unsigned int *)(ProgressTimer)::GetValue(v72, &v57) >> 10) + 1) >> 1) & 0x1F) - 8); /*0x73cb81*/
      v50 = -((double)v56 * -0.1963495408493621); /*0x73cb91*/
      Matrix3D::RotateZ(v71, v50); /*0x73cb94*/
      ((Matrix3x3 *)(v71))->Multiply(v67); /*0x73cba5*/
      ((Matrix3x3 *)(v71))->Multiply(&v68); /*0x73cbb6*/
      if ( (((unsigned int)((*(unsigned int *)(ProgressTimer)::GetValue((unsigned (unsigned int)(short)*)a1 + 464, &v57) >> 13) + 1) >> 1) & 3) == 0 /*0x73cbf8*/
        || (v52 = 1, (((unsigned int, void * a1)((*((ProgressTimer *)((unsigned short *)a1 + 464))->GetValue(&v56) >> 13) + 1) >> 1) & 3) == 3) )
      {
        v52 = 0; /*0x73cbfa*/
      }
      v15 = (void *)((unsigned int)((void *)((int)(v61))));
    }
    a8 = a8; /*0x73cc03*/
    (*(void (**)(unsigned char *, int, int, unsigned int *, unsigned int *, unsigned int, int, unsigned int, unsigned int, unsigned int, int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, int))(*(unsigned int *)a1 + 1292))( /*0x73cc36*/
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
    if ( *(unsigned int *)(*((unsigned int *)a1 + 433) + 192) && *(unsigned int *)(*((unsigned int *)a1 + 433) + 196) && !v52 ) /*0x73cc59*/
    {
      v34 = (float *)((int)((float *)(*(unsigned int *)a1)));
      inited = (float *)((AudioConfig *)(v73))->InitDefault(); /*0x73cc75*/
      v36 = MultiplyMatrix3x4(v70, inited, v71); /*0x73cc83*/
      (*(void (**)(unsigned char *, int, unsigned int, int, unsigned int, unsigned int *, unsigned int *, float *, int, int, unsigned int))(v34 + 1296))( /*0x73cca8*/
        a1,
        *((unsigned int *, unsigned int a1, unsigned int a8)a1 + 433) + 192,
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
    Value = (unsigned int *)(((ProgressTimer *)((unsigned short *)a1 + 464))->GetValue((unsigned int *)(&v57)));
    (*(void (**)(unsigned char *, int, unsigned int, unsigned int *, unsigned int *, unsigned int, int, unsigned int, unsigned int, unsigned int, int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, int))(*(unsigned int *)a1 + 1292))( /*0x73cd08*/
      a1,
      v15,
      (((((unsigned int)((*Value >> 10) + 1) >> 1) & 0x1F) + 4) & 0x1F) + 8 * *(char *)(*((unsigned int *)a1 + 433) + 3676),
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
    if ( *(unsigned int *)(*((unsigned int *)a1 + 433) + 192) && *(unsigned int *)(*((unsigned int *)a1 + 433) + 196) ) /*0x73cd1e*/
    {
      if ( v52 ) /*0x73cd2b*/
      {
        v38 = (float *)((int)((float *)(*(unsigned int *)a1)));
        v39 = (float *)((AudioConfig *)(v73))->InitDefault(); /*0x73cd47*/
        v40 = MultiplyMatrix3x4(v70, v39, v71); /*0x73cd55*/
        (*(void (**)(unsigned char *, int, unsigned int, int, unsigned int, unsigned int *, unsigned int *, float *, int, int, unsigned int))(v38 + 1296))( /*0x73cd7a*/
          a1,
          *((unsigned int *)a1 + 433) + 192,
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
    v41 = (*(int ((unsigned char *)(**))(unsigned char *, int))(*(unsigned int *)a1 + 1124))(a1, a8); /*0x73cd86*/
    v60 = v60; /*0x73cd93*/
    (*(void (**)(unsigned char *, int, int, int, int, int, int, int, int, int))(*(unsigned int *)a1 + 1372))( /*0x73cddb*/
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
    result = (*(int (**)(int, int *, unsigned int))(g_DSurface_Hidden_2->abstractFlags)( /*0x73cdf0*/
               g_DSurface_Hidden_2,
               &dword_B1CFA8,
               0);
    g_DSurface_Hidden_2 = v60; /*0x73cdf3*/
    a1[1747] = 0; /*0x73cdf9*/
  }
  else if ( *(unsigned char *)(v18 + 3606) && ((TechnoClass *)(a1))->CheckTargetCell() && !((TechnoClass *)(a1))->ScanNeighborCells() ) /*0x73ce24*/
  {
    return (*(int (**)(unsigned char *, int, int, int *, int *, unsigned int, int, int, unsigned int, unsigned int, int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int))(*(unsigned int *)a1 + 1292))( /*0x73ce5e*/
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
    v44 = *(unsigned int *)a1; /*0x73ce75*/
    v45 = (*(int (**)(unsigned char *, unsigned int, int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int))(*(unsigned int *)a1 + 752))( /*0x73ce89*/
            a1,
            0,
            a8,
            0,
            0,
            0,
            0,
            0,
            0);
    return (*(int (**)(unsigned char *, int, int, char *, char *, unsigned int, int, unsigned int, int))(v44 + 1292))( /*0x73cead*/
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