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
  void* Constructor(float a1, float a2);  // 0x5AE6F0
  void RotateZ(float a1);  // 0x5AF080
  // --- gap2 auto-generated stub declarations (END) ---
};
} // namespace gamemd


// 0x73C5F0
namespace gamemd {  // G42.18 ns repair
void* VoxelClass_RenderObject(void * a1, void * a2, void * a3, void * a4, void * a5, void * a6, void * a7, void * a8, void * a9, int a10, int a11, char a12)
{

  AudioStream *v13; // eax
  unsigned int *v14; // ecx
  __int16 *v15; // edi
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
  __int16 v32; // dx
  int v33; // esi
  int v34; // ebx
  float *inited; // eax
  float *v36; // eax
  unsigned int *Value; // eax
  int v38; // edi
  float *v39; // eax
  float *v40; // eax
  int v41; // eax
  AudioStream *v42; // esi
  int result; // eax
  int v44; // esi
  int v45; // eax
  float v46; // [esp+B8h] [ebp-12Ch]
  float v47; // [esp+B8h] [ebp-12Ch]
  float v48; // [esp+B8h] [ebp-12Ch]
  float v49; // [esp+B8h] [ebp-12Ch]
  float v50; // [esp+B8h] [ebp-12Ch]
  int v51; // [esp+BCh] [ebp-128h]
  float *v52; // [esp+BCh] [ebp-128h]
  float *v53; // [esp+BCh] [ebp-128h]
  float *v54; // [esp+BCh] [ebp-128h]
  char v55; // [esp+CFh] [ebp-115h]
  float v56; // [esp+D0h] [ebp-114h]
  double v57; // [esp+D4h] [ebp-110h] BYREF
  float v58; // [esp+DCh] [ebp-108h]
  int v59; // [esp+E0h] [ebp-104h] BYREF
  int v60; // [esp+E4h] [ebp-100h] BYREF
  double v61; // [esp+E8h] [ebp-FCh]
  float v62; // [esp+F0h] [ebp-F4h]
  AudioStream *v63; // [esp+F4h] [ebp-F0h] BYREF
  AudioStream *v64; // [esp+F8h] [ebp-ECh]
  unsigned int v65[2]; // [esp+FCh] [ebp-E8h] BYREF
  int v66; // [esp+104h] [ebp-E0h]
  int v67; // [esp+108h] [ebp-DCh] BYREF
  unsigned int v68[4]; // [esp+10Ch] [ebp-D8h] BYREF
  int v69; // [esp+11Ch] [ebp-C8h] BYREF
  int v70[3]; // [esp+120h] [ebp-C4h] BYREF
  int Transform_field_00; // [esp+12Ch] [ebp-B8h] BYREF
  float v72[3]; // [esp+130h] [ebp-B4h] BYREF
  Transform v73[12]; // [esp+13Ch] [ebp-A8h] BYREF
  int v74[12]; // [esp+16Ch] [ebp-78h] BYREF
  ProgressTimer v75; // [esp+19Ch] [ebp-48h] BYREF
  AudioConfig v76; // [esp+1B4h] [ebp-30h] BYREF

  v13 = (AudioStream *)(*(int (**)(Class_7F5C70 *))(*(unsigned int *)this + 108))(this); /*0x73c5ff*/
  v14 = (unsigned int *)*((unsigned int *)this + 433); /*0x73c602*/
  v15 = (__int16 *)v13; /*0x73c608*/
  v64 = v13; /*0x73c60a*/
  v55 = 1; /*0x73c60e*/
  if ( v14[911] != 8 || (*(unsigned __int8 (**)(Class_7F5C70 *))(*(unsigned int *)this + 196))(this) ) /*0x73c621*/
    v16 = 0; /*0x73c649*/
  else
    v16 = ((unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)(this + 904), &v63) >> 12) + 1) >> 1) /*0x73c644*/
         + 1)
        & 7;
  v17 = *((unsigned int *)this + 432); /*0x73c64b*/
  if ( v17 >= 0 ) /*0x73c653*/
  {
    v18 = *((unsigned int *)this + 433); /*0x73c655*/
    v16 = v17 / 2 + *(unsigned int *)(v18 + 3632) + v16 * *(char *)(v18 + 3677); /*0x73c672*/
    goto LABEL_21; /*0x73c674*/
  }
  if ( !*((unsigned int *)this + 413) ) /*0x73c679*/
    sub_7DC720(-2147467261); /*0x73c688*/
  if ( (*(unsigned __int8 (**)(unsigned int))(**((unsigned int **)this + 413) + 16))(*((unsigned int *)this + 413)) /*0x73c6a3*/
    || (v18 = *((unsigned int *)this + 433), *(unsigned int *)(v18 + 664)) )
  {
    v18 = *((unsigned int *)this + 433); /*0x73c702*/
    v22 = v16 * *(char *)(v18 + 3676) + *((unsigned int *)this + 334) % *(char *)(v18 + 3676); /*0x73c71b*/
LABEL_20:
    v16 = *(unsigned int *)(v18 + 3628) + v22; /*0x73c71d*/
    goto LABEL_21; /*0x73c723*/
  }
  v19 = *((unsigned int *)this + 438); /*0x73c6ad*/
  if ( v19 < 0 ) /*0x73c6b5*/
  {
    if ( !*((unsigned char *)this + 1718) ) /*0x73c6dd*/
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
    v23 = *((unsigned char *)this + 1060); /*0x73c73a*/
    v66 = a2; /*0x73c740*/
    v67 = a3; /*0x73c74d*/
    if ( v23 ) /*0x73c751*/
      v67 = a3 - 14; /*0x73c756*/
    v24 = v15[3]; /*0x73c762*/
    v25 = (*(int (**)(Class_7F5C70 *, unsigned int))(*(unsigned int *)this + 748))(this, 0); /*0x73c772*/
    DrawToSurfaceSHP( /*0x73c7a7*/
      (int)g_DSurface_Hidden_2,
      (int)dword_87F6C4,
      (int)v15,
      v16 + v24 / 2,
      &v67,
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
    v64 = g_DSurface_Hidden_2; /*0x73c7bd*/
    g_DSurface_Hidden_2 = (AudioStream *)dword_B1D13C; /*0x73c7c3*/
    v66 = 128; /*0x73c7c9*/
    v65[1] = 128; /*0x73c7cd*/
    v26 = (unsigned int *)(*(int (**)(int))(*(unsigned int *)dword_B1D13C + 120))(dword_B1D13C); /*0x73c7d8*/
    v68[0] = *v26; /*0x73c7dd*/
    v68[1] = v26[1]; /*0x73c7e4*/
    v68[2] = v26[2]; /*0x73c7eb*/
    v27 = v26[3]; /*0x73c7ef*/
    *((unsigned char *)this + 1747) = 1; /*0x73c7f2*/
    v68[3] = v27; /*0x73c804*/
    dword_B1CFC0 = dword_B1CFA8; /*0x73c80e*/
    dword_B1CFC4 = dword_B1CFAC; /*0x73c818*/
    dword_B1CFC8 = dword_B1CFB0; /*0x73c81e*/
    dword_B1CFCC = dword_B1CFB4; /*0x73c824*/
    if ( *(unsigned int *)(*((unsigned int *)this + 433) + 192) && *(unsigned int *)(*((unsigned int *)this + 433) + 196) ) /*0x73c83d*/
    {
      v28 = *((unsigned int *)this + 413); /*0x73c848*/
      v69 = -1; /*0x73c84e*/
      if ( !v28 ) /*0x73c858*/
        sub_7DC720(-2147467261); /*0x73c85f*/
      v29 = (const void *)(*(int (**)(unsigned int, AudioConfig *, int *))(**((unsigned int **)this + 413) + 36))( /*0x73c87a*/
                            *((unsigned int *)this + 413),
                            &v76,
                            &v69);
      Transform::Copy(v73, v29); /*0x73c885*/
      v46 = (float)(*(unsigned int *)(*((unsigned int *)this + 433) + 1824) / 8); /*0x73c8af*/
      Matrix3x4::Translate(&v73[0].Transform_field_00, v46); /*0x73c8b2*/
      v57 = (double)(int)((((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)(this + 928), &v59) >> 10) + 1) >> 1) /*0x73c8ee*/
                         & 0x1F)
                        - 8)
          * -0.1963495408493621;
      v47 = v57 /*0x73c91f*/
          - (double)(int)((((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)(this + 904), &v60) >> 10) + 1) >> 1)
                         & 0x1F)
                        - 8)
          * -0.1963495408493621;
      Matrix2D::Rotate(&v73[0].Transform_field_00, v47); /*0x73c922*/
      Transform_field_00 = v73[3].Transform_field_00; /*0x73c967*/
      memcpy(v74, v73, sizeof(v74)); /*0x73c96d*/
      v72[1] = *(float *)&v73[11].Transform_field_00; /*0x73c973*/
      *(float *)&v61 = -*(float *)&v73[3].Transform_field_00; /*0x73c977*/
      v72[0] = *(float *)&v73[7].Transform_field_00; /*0x73c97f*/
      *((float *)&v61 + 1) = -*(float *)&v73[7].Transform_field_00; /*0x73c989*/
      v57 = v61; /*0x73c995*/
      v62 = -*(float *)&v73[11].Transform_field_00; /*0x73c99b*/
      v58 = v62; /*0x73c9b3*/
      Matrix3x3::Multiply((int *)&v57, v72); /*0x73c9b7*/
      if ( *((unsigned int *)this + 252) ) /*0x73c9bc*/
      {
        v48 = -*((float *)this + 251); /*0x73c9d6*/
        Matrix3x4::Translate(&v73[0].Transform_field_00, v48); /*0x73c9d9*/
      }
      v56 = (float)(*(unsigned int *)((*(int (**)(Class_7F5C70 *, unsigned int))(*(unsigned int *)this + 1016))(this, 0) + 12) /*0x73ca08*/
                  / -8);
      v59 = *(unsigned int *)((*(int (**)(Class_7F5C70 *, unsigned int))(*(unsigned int *)this + 1016))(this, 0) + 4) / -8; /*0x73ca30*/
      *(float *)&v70[2] = v56; /*0x73ca3c*/
      v70[1] = 0; /*0x73ca40*/
      HIDWORD(v61) = 0; /*0x73ca44*/
      *(float *)&v57 = (float)v59; /*0x73ca50*/
      *(float *)&v61 = -*(float *)&v57; /*0x73ca62*/
      v70[0] = LODWORD(v57); /*0x73ca6c*/
      v62 = -v56; /*0x73ca74*/
      *(unsigned long long *)&v57 = LODWORD(v61); /*0x73ca7c*/
      v58 = v62; /*0x73ca84*/
      Matrix3x3::Multiply((int *)&v57, v52); /*0x73ca90*/
      v30 = *(unsigned int *)this; /*0x73ca95*/
      memcpy(&v75, this + 880, sizeof(v75)); /*0x73caaa*/
      if ( *(unsigned char *)(*(unsigned int *)(*(unsigned int *)(*(int (**)(Class_7F5C70 *, unsigned int))(v30 + 1016))(this, 0) + 160) /*0x73cabe*/
                    + 670) )
      {
        v31 = (unsigned __int8)((unsigned int)((*ProgressTimer::GetValue(&v75, &v60) >> 7) + 1) >> 1); /*0x73cae1*/
        if ( v31 <= 64 || v31 > 128 ) /*0x73caf0*/
          v31 = (64 - v31) / 3 + 64; /*0x73cb1a*/
        else
          (v31) = ((v31) & ~0xFF) | (((char)(v31 - 64) / 3 + 64) & 0xFF); /*0x73cb01*/
        (v32) = ((v32) & ~0xFF) | ((0) & 0xFF); /*0x73cb1e*/
        (v32) = ((v32) & ~(0xFF << 8)) | (((v31) & 0xFF) << 8); /*0x73cb27*/
        (v59) = ((v59) & ~0xFFFF) | ((v32) & 0xFFFF); /*0x73cb2e*/
        FacingClass::Set_SyncLog(v75.__pad_0, &v59); /*0x73cb33*/
      }
      if ( *((unsigned int *)this + 260) ) /*0x73cb38*/
      {
        v49 = -*((float *)this + 259); /*0x73cb52*/
        Matrix3x4::Translate(v74, v49); /*0x73cb55*/
      }
      v59 = (((unsigned int)((*ProgressTimer::GetValue(&v75, &v60) >> 10) + 1) >> 1) & 0x1F) - 8; /*0x73cb81*/
      v50 = -((double)v59 * -0.1963495408493621); /*0x73cb91*/
      Matrix3D::RotateZ(v74, v50); /*0x73cb94*/
      Matrix3x3::Multiply(v70, v53); /*0x73cba5*/
      Matrix3x3::Multiply(&Transform_field_00, v54); /*0x73cbb6*/
      if ( (((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)(this + 928), &v60) >> 13) + 1) >> 1) & 3) == 0 /*0x73cbf8*/
        || (v55 = 1,
            (((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)(this + 928), &v59) >> 13) + 1) >> 1) & 3) == 3) )
      {
        v55 = 0; /*0x73cbfa*/
      }
      v15 = (__int16 *)v64; /*0x73cbff*/
    }
    v33 = a8; /*0x73cc03*/
    (*(void (**)(Class_7F5C70 *, __int16 *, int, unsigned int *, unsigned int *, unsigned int, int, unsigned int, unsigned int, unsigned int, int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, int))(*(unsigned int *)this + 1292))( /*0x73cc36*/
      this,
      v15,
      v16,
      v65,
      v68,
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
    if ( *(unsigned int *)(*((unsigned int *)this + 433) + 192) && *(unsigned int *)(*((unsigned int *)this + 433) + 196) && !v55 ) /*0x73cc59*/
    {
      v34 = *(unsigned int *)this; /*0x73cc5b*/
      inited = (float *)AudioConfig::InitDefault(&v76); /*0x73cc75*/
      v36 = MultiplyMatrix3x4((float *)&v73[0].Transform_field_00, inited, (float *)v74); /*0x73cc83*/
      (*(void (**)(Class_7F5C70 *, int, unsigned int, int, unsigned int, unsigned int *, unsigned int *, float *, int, int, unsigned int))(v34 + 1296))( /*0x73cca8*/
        this,
        *((unsigned int *)this + 433) + 192,
        0,
        -1,
        0,
        v68,
        v65,
        v36,
        v33,
        10240,
        0);
    }
    Value = ProgressTimer::GetValue((ProgressTimer *)(this + 928), &v60); /*0x73ccb9*/
    (*(void (**)(Class_7F5C70 *, __int16 *, unsigned int, unsigned int *, unsigned int *, unsigned int, int, unsigned int, unsigned int, unsigned int, int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, int))(*(unsigned int *)this + 1292))( /*0x73cd08*/
      this,
      v15,
      (((((unsigned int)((*Value >> 10) + 1) >> 1) & 0x1F) + 4) & 0x1F) + 8 * *(char *)(*((unsigned int *)this + 433) + 3676),
      v65,
      v68,
      0,
      256,
      0,
      0,
      0,
      v33,
      0,
      0,
      0,
      0,
      0,
      10272);
    if ( *(unsigned int *)(*((unsigned int *)this + 433) + 192) && *(unsigned int *)(*((unsigned int *)this + 433) + 196) ) /*0x73cd1e*/
    {
      if ( v55 ) /*0x73cd2b*/
      {
        v38 = *(unsigned int *)this; /*0x73cd2d*/
        v39 = (float *)AudioConfig::InitDefault(&v76); /*0x73cd47*/
        v40 = MultiplyMatrix3x4((float *)&v73[0].Transform_field_00, v39, (float *)v74); /*0x73cd55*/
        (*(void (**)(Class_7F5C70 *, int, unsigned int, int, unsigned int, unsigned int *, unsigned int *, float *, int, int, unsigned int))(v38 + 1296))( /*0x73cd7a*/
          this,
          *((unsigned int *)this + 433) + 192,
          0,
          -1,
          0,
          v68,
          v65,
          v40,
          v33,
          10272,
          0);
      }
    }
    v41 = (*(int (**)(Class_7F5C70 *, int))(*(unsigned int *)this + 1124))(this, v33); /*0x73cd86*/
    v42 = v63; /*0x73cd93*/
    (*(void (**)(Class_7F5C70 *, AudioStream *, int, int, int, int, int, int, int, int))(*(unsigned int *)this /*0x73cddb*/
                                                                                                  + 1372))(
      this,
      v63,
      a2,
      a3,
      a4,
      a5,
      a6,
      a7,
      v41,
      a9);
    result = (*(int (**)(AudioStream *, int *, unsigned int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x73cdf0*/
               g_DSurface_Hidden_2,
               &dword_B1CFC0,
               0);
    g_DSurface_Hidden_2 = v42; /*0x73cdf3*/
    *((unsigned char *)this + 1747) = 0; /*0x73cdf9*/
  }
  else if ( *(unsigned char *)(v18 + 3606) /*0x73ce24*/
         && TechnoClass::CheckTargetCell((TechnoClass *)this)
         && !TechnoClass::ScanNeighborCells((TechnoClass *)this) )
  {
    return (*(int (**)(Class_7F5C70 *, __int16 *, int, int *, int *, unsigned int, int, int, unsigned int, unsigned int, int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int))(*(unsigned int *)this + 1292))( /*0x73ce5e*/
             this,
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
    v44 = *(unsigned int *)this; /*0x73ce75*/
    v45 = (*(int (**)(Class_7F5C70 *, unsigned int, int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int))(*(unsigned int *)this + 752))( /*0x73ce89*/
            this,
            0,
            a8,
            0,
            0,
            0,
            0,
            0,
            0);
    return (*(int (**)(Class_7F5C70 *, __int16 *, int, int *, char *, unsigned int, int, unsigned int, int))(v44 + 1292))( /*0x73cead*/
             this,
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
}  // G42.18 ns repair