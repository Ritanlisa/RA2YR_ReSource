// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x73C5F0
namespace gamemd {
void* VoxelClass_RenderObject()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  int v15; // edx
  __int16 v25; // dx
  float *inited; // eax
  _DWORD *Value; // eax
  AbstractClass *v42; // esi
  int result; // eax
  float aP1a; // [esp+B8h] [ebp-12Ch]
  ParticleSystemClass *aP1b; // [esp+B8h] [ebp-12Ch]
  ParticleSystemClass *aP1c; // [esp+B8h] [ebp-12Ch]
  float aP1d; // [esp+B8h] [ebp-12Ch]
  ConvertClass *v44; // [esp+BCh] [ebp-128h]
  char v45; // [esp+CFh] [ebp-115h]
  DirStruct desiredFacing; // [esp+E0h] [ebp-104h] BYREF
  ObjectClass *v53; // [esp+F4h] [ebp-F0h] BYREF
  int v54; // [esp+F8h] [ebp-ECh]
  int v6 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 108))(a1); /*0x73c5ff*/
  int v7 = *((_DWORD *)a1 + 433); /*0x73c602*/
  int v8 = v6; /*0x73c608*/
  v54 = v6; /*0x73c60a*/
  v45 = 1; /*0x73c60e*/
  if ( *(_DWORD *)(v7 + 3644) != 8 || (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 196))(a1) ) /*0x73c621*/
    int v9 = 0; /*0x73c649*/
  else
    v9 = ((unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((_WORD *)a1 + 452, (IUnknown *)&v53) >> 12) + 1) >> 1) /*0x73c644*/
        + 1)
       & 7;
  int v10 = *((_DWORD *)a1 + 432); /*0x73c64b*/
  if ( v10 >= 0 ) /*0x73c653*/
  {
    v11 = *((_DWORD *)a1 + 433); /*0x73c655*/
    v9 = v10 / 2 + *(_DWORD *)(v11 + 3632) + v9 * *(char *)(v11 + 3677); /*0x73c672*/
    goto LABEL_21; /*0x73c674*/
  }
  if ( !*((_DWORD *)a1 + 413) ) /*0x73c679*/
    WinAPI::Wrapper(-2147467261); /*0x73c688*/
  if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(**((_DWORD **)a1 + 413) + 16))(*((_DWORD *)a1 + 413)) /*0x73c6a3*/
    || (v11 = *((_DWORD *)a1 + 433), *(_DWORD *)(v11 + 664)) )
  {
    v11 = *((_DWORD *)a1 + 433); /*0x73c702*/
    v15 = v9 * *(char *)(v11 + 3676) + *((_DWORD *)a1 + 334) % *(char *)(v11 + 3676); /*0x73c71b*/
LABEL_20:
    v9 = *(_DWORD *)(v11 + 3628) + v15; /*0x73c71d*/
    goto LABEL_21; /*0x73c723*/
  }
  v12 = *((_DWORD *)a1 + 438); /*0x73c6ad*/
  if ( v12 < 0 ) /*0x73c6b5*/
  {
    if ( !a1[1718] ) /*0x73c6dd*/
      goto LABEL_21; /*0x73c6dd*/
    int v14 = *(_DWORD *)(v11 + 3612); /*0x73c6df*/
    if ( v14 ) /*0x73c6e7*/
    {
      v9 = *(_DWORD *)(v11 + 3624) + v9 * v14; /*0x73c6fe*/
      goto LABEL_21; /*0x73c700*/
    }
    v15 = v9 * *(char *)(v11 + 3676); /*0x73c6f0*/
    goto LABEL_20; /*0x73c6f3*/
  }
  v13 = v12 / *(_DWORD *)(v11 + 3620); /*0x73c6b8*/
  if ( v13 >= *(_DWORD *)(v11 + 3616) - 1 ) /*0x73c6cd*/
    v13 = *(_DWORD *)(v11 + 3616) - 1; /*0x73c6cf*/
  v9 = v13 + *(_DWORD *)(v11 + 3636); /*0x73c6d1*/
LABEL_21:
  if ( *(_BYTE *)(v11 + 3233) ) /*0x73c725*/
  {
  _BYTE v63[168]; // [esp+13Ch] [ebp-A8h] BYREF
  int v50; // [esp+E4h] [ebp-100h] BYREF
    char v16 = a1[1060]; /*0x73c73a*/
    int v56 = a2; /*0x73c740*/
    int v57 = a3; /*0x73c74d*/
    if ( v16 ) /*0x73c751*/
      v57 = a3 - 14; /*0x73c756*/
    int v17 = *(__int16 *)(v8 + 6); /*0x73c762*/
    int v18 = (*(int (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)a1 + 748))(a1, 0); /*0x73c772*/
    DrawToSurfaceSHP( /*0x73c7a7*/
      *(int *)&stru_87C374[44960],
      *(int *)&stru_87C374[13136],
      (ConvertClass *)v8,
      v9 + v17 / 2,
      (ConvertClass *)&v57,
      &aP5,
      (ConvertClass *)0x2E01,
      0,
      v18 - 2,
      (ConvertClass *)0x3E8,
      0,
      0,
      0,
      0,
      0,
      v44);
    v54 = *(_DWORD *)&stru_87C374[44960]; /*0x73c7bd*/
    *(_DWORD *)&stru_87C374[44960] = dword_B1D13C; /*0x73c7c3*/
    v56 = 128; /*0x73c7c9*/
  _DWORD v55[2]; // [esp+FCh] [ebp-E8h] BYREF
    v55[1] = 128; /*0x73c7cd*/
  _DWORD v62[3]; // [esp+130h] [ebp-B4h] BYREF
    _DWORD * v19 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD *))(*dword_B1D13C + 120))(dword_B1D13C, v62); /*0x73c7d8*/
  _DWORD v58[4]; // [esp+10Ch] [ebp-D8h] BYREF
    v58[0] = *v19; /*0x73c7dd*/
    v58[1] = v19[1]; /*0x73c7e4*/
    v58[2] = v19[2]; /*0x73c7eb*/
    int v20 = v19[3]; /*0x73c7ef*/
    a1[1747] = 1; /*0x73c7f2*/
    v58[3] = v20; /*0x73c804*/
    aP6 = (XSurface)xmmword_B1CFA8; /*0x73c80e*/
    if ( *(_DWORD *)(*((_DWORD *)a1 + 433) + 192) && *(_DWORD *)(*((_DWORD *)a1 + 433) + 196) ) /*0x73c83d*/
    {
      IUnknown *v21 = *((_DWORD *)a1 + 413); /*0x73c848*/
      int v59 = -1; /*0x73c84e*/
      if ( !v21 ) /*0x73c858*/
        WinAPI::Wrapper(-2147467261); /*0x73c85f*/
  const void *v22; // eax
      v22 = (const void *)(*(int (__stdcall **)(_DWORD, _BYTE *, int *))(**((_DWORD **)a1 + 413) + 36))( /*0x73c87a*/
                            *((_DWORD *)a1 + 413),
                            &v63[120],
                            &v59);
      Transform::Copy(v63, v22); /*0x73c885*/
      float aP1 = (float)(*(_DWORD *)(*((_DWORD *)a1 + 433) + 1824) / 8); /*0x73c8af*/
      Matrix3x4::Translate((float *)v63, (ParticleSystemClass *)LODWORD(aP1)); /*0x73c8b2*/
  double v47; // [esp+D4h] [ebp-110h] BYREF
      v47 = (double)(int)((((unsigned int)((*ProgressTimer::GetValue((_WORD *)a1 + 464, (IUnknown *)&desiredFacing) >> 10) /*0x73c8ee*/
                                         + 1) >> 1)
                         & 0x1F)
                        - 8)
          * -0.1963495408493621;
      aP1a = v47 /*0x73c91f*/
           - (double)(int)((((unsigned int)((*ProgressTimer::GetValue((_WORD *)a1 + 452, (IUnknown *)&v50) >> 10) + 1) >> 1)
                          & 0x1F)
                         - 8)
           * -0.1963495408493621;
      Matrix2D::Rotate((float *)v63, (AbstractClass *)LODWORD(aP1a)); /*0x73c922*/
      int v61 = *(_DWORD *)&v63[12]; /*0x73c967*/
      qmemcpy(&v63[48], v63, 0x30u); /*0x73c96d*/
      v62[1] = *(_DWORD *)&v63[44]; /*0x73c973*/
  double v51; // [esp+E8h] [ebp-FCh]
      *(float *)&v51 = -*(float *)&v63[12]; /*0x73c977*/
      v62[0] = *(_DWORD *)&v63[28]; /*0x73c97f*/
      *((float *)&v51 + 1) = -*(float *)&v63[28]; /*0x73c989*/
      v47 = v51; /*0x73c995*/
      float v52 = -*(float *)&v63[44]; /*0x73c99b*/
      float v48 = v52; /*0x73c9b3*/
      Matrix3x3::Multiply((float *)&v63[48], (float *)&v47); /*0x73c9b7*/
      if ( *((_DWORD *)a1 + 252) ) /*0x73c9bc*/
      {
        *(float *)&aP1b = -*((float *)a1 + 251); /*0x73c9d6*/
        Matrix3x4::Translate((float *)v63, aP1b); /*0x73c9d9*/
      }
      float v46 = (float)(*(_DWORD *)((*(int (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)a1 + 1016))(a1, 0) + 12) / -8); /*0x73ca08*/
      desiredFacing = (DirStruct)(*(_DWORD *)((*(int (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)a1 + 1016))(a1, 0) + 4) /*0x73ca30*/
                                / -8);
  float v60[3]; // [esp+120h] [ebp-C4h] BYREF
      v60[2] = v46; /*0x73ca3c*/
      v60[1] = 0.0; /*0x73ca40*/
      HIDWORD(v51) = 0; /*0x73ca44*/
      *(float *)&v47 = (float)(int)desiredFacing; /*0x73ca50*/
      *(float *)&v51 = -*(float *)&v47; /*0x73ca62*/
      v60[0] = *(float *)&v47; /*0x73ca6c*/
      v52 = -v46; /*0x73ca74*/
      *(_QWORD *)&v47 = LODWORD(v51); /*0x73ca7c*/
      v48 = v52; /*0x73ca84*/
      Matrix3x3::Multiply((float *)&v63[48], (float *)&v47); /*0x73ca90*/
      int v23 = *(_DWORD *)a1; /*0x73ca95*/
      qmemcpy(&v63[96], a1 + 880, 0x18u); /*0x73caaa*/
      if ( *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(_BYTE *, _DWORD))(v23 + 1016))(a1, 0) + 160) + 670) ) /*0x73cabe*/
      {
        int v24 = (unsigned __int8)((unsigned int)((*ProgressTimer::GetValue(&v63[96], (IUnknown *)&v50) >> 7) + 1) >> 1); /*0x73cae1*/
        if ( v24 <= 64 || v24 > 128 ) /*0x73caf0*/
          v24 = (64 - v24) / 3 + 64; /*0x73cb1a*/
        else
          LOBYTE(v24) = (char)(v24 - 64) / 3 + 64; /*0x73cb01*/
        LOBYTE(v25) = 0; /*0x73cb1e*/
        HIBYTE(v25) = v24; /*0x73cb27*/
        desiredFacing.Value = v25; /*0x73cb2e*/
        FacingClass::Set_SyncLog((FacingClass *)&v63[96], &desiredFacing); /*0x73cb33*/
      }
      if ( *((_DWORD *)a1 + 260) ) /*0x73cb38*/
      {
        *(float *)&aP1c = -*((float *)a1 + 259); /*0x73cb52*/
        Matrix3x4::Translate((float *)&v63[48], aP1c); /*0x73cb55*/
      }
      desiredFacing = (DirStruct)((((unsigned int)((*ProgressTimer::GetValue(&v63[96], (IUnknown *)&v50) >> 10) + 1) >> 1) /*0x73cb81*/
                                 & 0x1F)
                                - 8);
      aP1d = -((double)*(int *)&desiredFacing * -0.1963495408493621); /*0x73cb91*/
      Matrix3D::RotateZ((float *)&v63[48], (AbstractClass *)LODWORD(aP1d)); /*0x73cb94*/
      Matrix3x3::Multiply((float *)&v63[48], v60); /*0x73cba5*/
      Matrix3x3::Multiply((float *)&v63[48], (float *)&v61); /*0x73cbb6*/
      if ( (((unsigned int)((*ProgressTimer::GetValue((_WORD *)a1 + 464, (IUnknown *)&v50) >> 13) + 1) >> 1) & 3) == 0 /*0x73cbf8*/
        || (v45 = 1,
            (((unsigned int)((*ProgressTimer::GetValue((_WORD *)a1 + 464, (IUnknown *)&desiredFacing) >> 13) + 1) >> 1)
           & 3) == 3) )
      {
        v45 = 0; /*0x73cbfa*/
      }
      v8 = v54; /*0x73cbff*/
    }
    ConvertClass *v26 = *(_DWORD *)&aP5[12]; /*0x73cc03*/
    (*(void (__thiscall **)(_BYTE *, int, int, _DWORD *, _DWORD *, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)a1 + 1292))( /*0x73cc36*/
      a1,
      v8,
      v9,
      v55,
      v58,
      0,
      256,
      0,
      0,
      0,
      *(_DWORD *)&aP5[12],
      0,
      0,
      0,
      0,
      0,
      10240);
    if ( *(_DWORD *)(*((_DWORD *)a1 + 433) + 192) && *(_DWORD *)(*((_DWORD *)a1 + 433) + 196) && !v45 ) /*0x73cc59*/
    {
      int v27 = *(_DWORD *)a1; /*0x73cc5b*/
      inited = (float *)AudioConfig::InitDefault(&v63[120]); /*0x73cc75*/
      float * v29 = MultiplyMatrix3x4((ObjectClass *)v63, inited, (float *)&v63[48]); /*0x73cc83*/
      (*(void (__thiscall **)(_BYTE *, int, _DWORD, int, _DWORD, _DWORD *, _DWORD *, float *, int, int, _DWORD))(v27 + 1296))( /*0x73cca8*/
        a1,
        *((_DWORD *)a1 + 433) + 192,
        0,
        -1,
        0,
        v58,
        v55,
        v29,
        v26,
        10240,
        0);
    }
    Value = ProgressTimer::GetValue((_WORD *)a1 + 464, (IUnknown *)&v50); /*0x73ccb9*/
    (*(void (__thiscall **)(_BYTE *, int, unsigned int, _DWORD *, _DWORD *, _DWORD, int, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)a1 + 1292))( /*0x73cd08*/
      a1,
      v8,
      (((((unsigned int)((*Value >> 10) + 1) >> 1) & 0x1F) + 4) & 0x1F) + 8 * *(char *)(*((_DWORD *)a1 + 433) + 3676),
      v55,
      v58,
      0,
      256,
      0,
      0,
      0,
      v26,
      0,
      0,
      0,
      0,
      0,
      10272);
    if ( *(_DWORD *)(*((_DWORD *)a1 + 433) + 192) && *(_DWORD *)(*((_DWORD *)a1 + 433) + 196) ) /*0x73cd1e*/
    {
      if ( v45 ) /*0x73cd2b*/
      {
        int v31 = *(_DWORD *)a1; /*0x73cd2d*/
        float * v32 = (float *)AudioConfig::InitDefault(&v63[120]); /*0x73cd47*/
        float * v33 = MultiplyMatrix3x4((ObjectClass *)v63, v32, (float *)&v63[48]); /*0x73cd55*/
        (*(void (__thiscall **)(_BYTE *, int, _DWORD, int, _DWORD, _DWORD *, _DWORD *, float *, int, int, _DWORD))(v31 + 1296))( /*0x73cd7a*/
          a1,
          *((_DWORD *)a1 + 433) + 192,
          0,
          -1,
          0,
          v58,
          v55,
          v33,
          v26,
          10272,
          0);
      }
    }
    int v34 = (*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)a1 + 1124))(a1, v26); /*0x73cd86*/
    v42 = v53; /*0x73cd93*/
    (*(void (__thiscall **)(_BYTE *, ObjectClass *, int, int, int, _DWORD, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)a1 + 1372))( /*0x73cddb*/
      a1,
      v53,
      a2,
      a3,
      a4,
      *(_DWORD *)aP5[0],
      *(_DWORD *)&aP5.field_2[2],
      *(_DWORD *)&aP5[8],
      v34,
      *(_DWORD *)&aP5[16]);
    result = (*(int (__thiscall **)(_DWORD, XSurface *, _DWORD))(**(_DWORD **)&stru_87C374[44960] + 20))( /*0x73cdf0*/
               *(_DWORD *)&stru_87C374[44960],
               &aP6,
               0);
    *(_DWORD *)&stru_87C374[44960] = v42; /*0x73cdf3*/
    a1[1747] = 0; /*0x73cdf9*/
  }
  else if ( *(_BYTE *)(v11 + 3606) && TechnoClass::CheckTargetCell(a1) && !TechnoClass::ScanNeighborCells(a1) ) /*0x73ce24*/
  {
    return (*(int (__thiscall **)(_BYTE *, int, int, int *, int *, _DWORD, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a1 + 1292))( /*0x73ce5e*/
             a1,
             v8,
             v9,
             &a2,
             &a4,
             0,
             256,
             -16,
             0,
             0,
             *(_DWORD *)&aP5[12],
             0,
             0,
             0,
             0,
             0,
             0);
  }
  else
  {
    int v37 = *(_DWORD *)a1; /*0x73ce75*/
  int v38; // eax
    v38 = (*(int (__thiscall **)(_BYTE *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a1 + 752))( /*0x73ce89*/
            a1,
            0,
            *(_DWORD *)&aP5[12],
            0,
            0,
            0,
            0,
            0,
            0);
    return (*(int (__thiscall **)(_BYTE *, int, int, char *, char *, _DWORD, int, _DWORD, int))(v37 + 1292))( /*0x73cead*/
             a1,
             v8,
             v9,
             &aP5[20],
             &aP5[28],
             0,
             256,
             0,
             v38);
  }
  return result; /*0x73ce00*/
}
}
} // namespace gamemd
