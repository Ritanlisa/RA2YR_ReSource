// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/Voxel_e4.hpp"
#include "e4/classes/VoxelAnimClass_e4.hpp"
#include "e4/classes/Mixer_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/VoxelAnimTypeClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/File_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/VoxelAnimType_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Init_e4.hpp"

// 0x4CAF20
namespace gamemd {
unsigned int VoxelAnimClass::ProcessFrame()
{

  unsigned int * v0;
  unsigned int *v1; // edx
  int v2; // edi
  double v3; // st7
  double v4; // st7
  unsigned int v5; // ecx
  int v6; // eax
  double v7; // st7
  double v8; // st7
  unsigned int v9; // ecx
  int v10; // eax
  unsigned int result; // eax
  float v12; // [esp+8h] [ebp-4h]
  float v13; // [esp+8h] [ebp-4h]
  float v14; // [esp+8h] [ebp-4h]
  float v15; // [esp+8h] [ebp-4h]

  v0 = (int)((unsigned int *)(0));
  v1 = (unsigned int *)(&unk_86D0BC);
  v2 = 0x2000; /*0x4caf2a*/
  do /*0x4cb050*/
  {
    v3 = COERCE_FLOAT(((unsigned int)(v0)| 0xFE000) << 10); /*0x4caf3d*/
    if ( v3 == 0.0 ) /*0x4caf4c*/
    {
      v4 = 0.0; /*0x4caf50*/
    }
    else
    {
      if ( v3 <= 0.0 ) /*0x4caf63*/
        v3 = v3 * -1.0; /*0x4caf65*/
      v12 = v3; /*0x4caf6b*/
      v5 = (unsigned int)&unk_7FFFFF & IDA_LODWORD(v12); /*0x4caf75*/
      v6 = (IDA_LODWORD(v12) >> 23) - 127; /*0x4caf7e*/
      if ( (v6 & 1) != 0 ) /*0x4caf83*/
        v5 |= (unsigned int)&unk_800000; /*0x4caf85*/
      v4 = COERCE_FLOAT(((((int16_t)v6 >> 1) + 127) << 23) + dword_8650BC[v5 >> 10]); /*0x4cafa7*/
    }
    v13 = v4; /*0x4cafab*/
    *(v1 - 0x2000) = (unsigned int)&unk_7FFFFF & IDA_LODWORD(v13); /*0x4cafc7*/
    v7 = COERCE_FLOAT(((unsigned int)(v0)| 0x100000) << 10); /*0x4cafcd*/
    if ( v7 == 0.0 ) /*0x4cafdc*/
    {
      v8 = 0.0; /*0x4cafe0*/
    }
    else
    {
      if ( v7 <= 0.0 ) /*0x4caff3*/
        v7 = v7 * -1.0; /*0x4caff5*/
      v14 = v7; /*0x4caffb*/
      v9 = (unsigned int)&unk_7FFFFF & IDA_LODWORD(v14); /*0x4cb005*/
      v10 = (IDA_LODWORD(v14) >> 23) - 127; /*0x4cb00e*/
      if ( (v10 & 1) != 0 ) /*0x4cb013*/
        v9 |= (unsigned int)&unk_800000; /*0x4cb015*/
      v8 = COERCE_FLOAT(((((int16_t)v10 >> 1) + 127) << 23) + dword_8650BC[v9 >> 10]); /*0x4cb037*/
    }
    v15 = v8; /*0x4cb03b*/
    ++v1; /*0x4cb043*/
    result = (unsigned int)&unk_7FFFFF & IDA_LODWORD(v15); /*0x4cb046*/
    ++v0; /*0x4cb04b*/
    *(v1 - 1) = (unsigned int)&unk_7FFFFF & IDA_LODWORD(v15); /*0x4cb04c*/
    --v2; /*0x4cb04f*/
  }
  while ( v2 ); /*0x4cb050*/
  return result; /*0x4cb056*/

}
}
// 0x7499F0
namespace gamemd {
int VoxelAnimClass::CleanupMembers()
{

  int v2; // eax
  int v3; // ecx
  int v4; // eax
  VoxelAnimClass *v6; // [esp+4h] [ebp-4h] BYREF

  *(unsigned int *)this = &vt_VoxelAnimClass; /*0x7499f6*/
  *((unsigned int *)this + 1) = &vt_VoxelAnimClass; /*0x7499fc*/
  *((unsigned int *)this + 2) = &vt_VoxelAnimClass; /*0x749a03*/
  *((unsigned int *)this + 3) = &vt_VoxelAnimClass; /*0x749a0a*/
  AbstractClass::AnnounceExpiredPointer((void **)this, 1); /*0x749a11*/
  v6 = (VoxelAnimClass *)this; /*0x749a26*/
  v2 = (*(int (**)(int *, VoxelAnimClass **))(g_abs_887388 + 16))(&g_abs_887388, &v6); /*0x749a2a*/
  if ( v2 != -1 && v2 < (int)((int))((int))(g_abs_887398) && v2 < --g_abs_887398 ) /*0x749a45*/
  {
    do /*0x749a5d*/
    {
      ++v2; /*0x749a4d*/
      *((unsigned int *)g_abs_88738C + v2 - 1) = *((unsigned int *)g_abs_88738C + v2); /*0x749a51*/
    }
    while ( v2 < (int)((int))((int))(g_abs_887398) ); /*0x749a5d*/
  }
  v3 = *((unsigned int *)this + 66); /*0x749a5f*/
  if ( v3 ) /*0x749a67*/
  {
    (*(void (**)(int))(*(unsigned int *)v3 + 248))(v3); /*0x749a6b*/
    *((unsigned int *)this + 66) = 0; /*0x749a71*/
  }
  if ( g_abs_A8E9A0 ) /*0x749a82*/
    ObjectClass::Undeploy(this); /*0x749a86*/
  ((Mixer *)((int **)this + 69))->ReleaseChannel(); /*0x749a95*/
  ((Mixer *)((int **)this + 74))->ReleaseChannel(); /*0x749aa2*/
  AudioFileClass::Release((unsigned int *)this + 69); /*0x749aa9*/
  AudioFileClass::Release((unsigned int *)this + 74); /*0x749ab0*/
  v6 = (VoxelAnimClass *)this; /*0x749ac5*/
  v4 = (*(int (**)(int *, VoxelAnimClass **))(g_abs_B0F670 + 16))(&g_abs_B0F670, &v6); /*0x749ac9*/
  if ( v4 != -1 && v4 < (int)((int))((int))(g_abs_B0F680) && v4 < --g_abs_B0F680 ) /*0x749ae6*/
  {
    do /*0x749afe*/
    {
      ++v4; /*0x749aee*/
      *((unsigned int *)g_abs_B0F674 + v4 - 1) = *((unsigned int *)g_abs_B0F674 + v4); /*0x749af2*/
    }
    while ( v4 < (int)((int))((int))(g_abs_B0F680) ); /*0x749afe*/
  }
  *((unsigned int *)this + 65) = 0; /*0x749b02*/
  return ObjectClass::Dtor(this); /*0x749b11*/

}
}
// 0x749B70
namespace gamemd {
Coord * * VoxelAnimClass::ProcessAnim(int * a2, unsigned int * a3)
{

  int v4; // eax
  int v5; // edx
  unsigned int *v6; // ebp
  int *v7; // eax
  float *v8; // eax
  int v9; // edi
  int v10; // ecx
  int v11; // eax
  int16_t *v12; // eax
  int v13; // ecx
  int v14; // eax
  unsigned int *v15; // esi
  int v16; // eax
  int v17; // eax
  int *v18; // eax
  int *SHPFrame; // [esp-1Ch] [ebp-CCh]
  int *v21; // [esp-1Ch] [ebp-CCh]
  int v22; // [esp-18h] [ebp-C8h]
  int v23; // [esp-18h] [ebp-C8h]
  int v24; // [esp-10h] [ebp-C0h]
  int v25; // [esp+Ch] [ebp-A4h] BYREF
  unsigned int v26;
  unsigned char * v27;
  int v28; // [esp+18h] [ebp-98h] BYREF
  int v29; // [esp+1Ch] [ebp-94h] BYREF
  int v30; // [esp+20h] [ebp-90h] BYREF
  int v31; // [esp+24h] [ebp-8Ch]
  int GroundHeight; // [esp+28h] [ebp-88h]
  unsigned char * v33;
  int v34; // [esp+30h] [ebp-80h]
  int v35; // [esp+34h] [ebp-7Ch]
  int v36[2]; // [esp+38h] [ebp-78h] BYREF
  int v37[4]; // [esp+40h] [ebp-70h] BYREF
  float v38[12]; // [esp+50h] [ebp-60h] BYREF
  float v39[12]; // [esp+80h] [ebp-30h] BYREF

  if ( (*(unsigned int *)g_abs_A8B230 & 0x1000) == 0 /*0x749bb6*/
    || (v25 = *((char *)this + 39), v26 = *((char *)this + 40), v27 = *((char *)this + 41), IDA_LOBYTE(v4) = Game::Stub3((int)&v25), !(unsigned char)v4) )
  {
    v5 = a2[1]; /*0x749bcb*/
    v34 = *a2; /*0x749bd0*/
    v35 = v5; /*0x749bd4*/
    v30 = *((char *)this + 39); /*0x749bda*/
    v31 = *((char *)this + 40); /*0x749beb*/
    GroundHeight = *((char *)this + 41); /*0x749bf2*/
    GroundHeight = Cell::GetGroundHeight(&v30); /*0x749c05*/
    if ( (*((unsigned int *)Coord::To_Cell(&g_abs_87F7E8, &v30) + 80) & 0x100) == 0 ) /*0x749c1b*/
      goto LABEL_6; /*0x749c1b*/
    v25 = *((char *)this + 39); /*0x749c1f*/
    v26 = *((char *)this + 40); /*0x749c26*/
    if ( *((char *)this + 41) >= (int)((int))((int))(g_abs_B1D1BC) + GroundHeight ) /*0x749c38*/
    {
      v33 = (unsigned char *)((int)(g_abs_B1D1BC + GroundHeight));
      v27 = (unsigned char *)((int)(g_abs_B1D1BC + GroundHeight + 1));
      v25 = v30; /*0x749c4e*/
      v26 = v31; /*0x749c5b*/
      Coord::To_Screen(g_abs_887324, &v25, v36); /*0x749c60*/
    }
    else
    {
LABEL_6: v33 = (unsigned char *)(GroundHeight);
      Coord::To_Screen(g_abs_887324, &v30, v36); /*0x749c76*/
    }
    IDA_LOBYTE(v4) = *((unsigned char *)this + 316); /*0x749c7b*/
    if ( !(unsigned char)v4 ) /*0x749c83*/
    {
      v4 = *((char *)this + 65); /*0x749c89*/
      v6 = *(unsigned int **)(v4 + 176); /*0x749c8f*/
      if ( v6 ) /*0x749c97*/
      {
        qmemcpy(v38, VoxelAnimClass::QuaternionToMatrix((float *)this + 44, v39), sizeof(v38)); /*0x749cbc*/
        Viewport::Clear(); /*0x749cbe*/
        globalHelper_053F90( /*0x749ce8*/
          v6,
          *(unsigned int *)(*((char *)this + 65) + 664),
          0,
          g_abs_887430,
          v38,
          (float *)&g_abs_887420,
          0,
          0,
          0);
        InitializeAudioOcclusion(v37, &v29, &v28); /*0x749cfa*/
        v25 = v36[0] + v29; /*0x749d15*/
        v26 = v28 + v36[1]; /*0x749d26*/
        v22 = -4 - ZCoordToScreenY(v33); /*0x749d36*/
        SHPFrame = (int *)BuildingClass::GetSHPFrame((unsigned int *)g_abs_87F6B4, 8193); /*0x749d4e*/
        v7 = Miles::DriverGet(); /*0x749d5c*/
        BlitterDrawSHP((int *)g_abs_887314, g_abs_87F6B4, v7, v37, &v25, a3, 0, SHPFrame, v22, 0, 1000, 0, 0); /*0x749d6e*/
        qmemcpy(v38, VoxelAnimClass::QuaternionToMatrix((float *)this + 44, v39), sizeof(v38)); /*0x749d95*/
        globalHelper_053C80(v6, 0, 0, v38, (float *)&g_abs_887470); /*0x749da3*/
        Viewport::Clear(); /*0x749da8*/
        v8 = MultiplyMatrix3x4(v39, g_abs_887430, v38); /*0x749dbe*/
        TransformVoxelVertex(v6, *(unsigned int *)(*((char *)this + 65) + 664), 0, v8); /*0x749dd4*/
        InitializeAudioOcclusion(v37, &v29, &v28); /*0x749de6*/
        v9 = 10240; /*0x749df1*/
        if ( *(unsigned char *)(*((char *)this + 65) + 661) ) /*0x749df6*/
          v9 = 10244; /*0x749e00*/
        v10 = *((char *)this + 41); /*0x749e0b*/
        v11 = *((char *)this + 40); /*0x749e11*/
        v25 = *((char *)this + 39); /*0x749e17*/
        v27 = v10; /*0x749e1f*/
        v26 = v11; /*0x749e29*/
        v12 = (int16_t *)Coord::To_Cell(&g_abs_87F7E8, &v25); /*0x749e2d*/
        v13 = *((char *)this + 67); /*0x749e32*/
        v14 = v12[133]; /*0x749e38*/
        if ( v13 ) /*0x749e41*/
        {
          v15 = *(unsigned int **)(*((unsigned int *)g_abs_B054D4 + *(unsigned int *)(v13 + 90196)) + 780); /*0x749e52*/
        }
        else if ( *(unsigned char *)(*((char *)this + 65) + 768) ) /*0x749e60*/
        {
          v15 = (unsigned int *)g_abs_87F6BC; /*0x749e6a*/
        }
        else
        {
          v15 = (unsigned int *)g_abs_87F6B4; /*0x749e72*/
          v14 = 1000; /*0x749e78*/
        }
        v25 = (int)(v29 + v34);
        v24 = (int)(v14);
        v16 = (int)(*this);
        v26 = v28 + v35; /*0x749ea0*/
        v17 = (*(int (**)(int *))(v16 + 464))(this); /*0x749ea4*/
        v23 = -2 - ZCoordToScreenY(v17); /*0x749eb8*/
        v21 = (int *)BuildingClass::GetSHPFrame(v15, v9); /*0x749ec8*/
        v18 = Miles::DriverGet(); /*0x749ed6*/
        IDA_LOBYTE(v4) = BlitterDrawSHP((int *)g_abs_887314, (int)v15, v18, v37, &v25, a3, 0, v21, v23, 0, v24, 0, 0); /*0x749ee4*/
      }
    }
  }
  return (gamemd::Coord **)(v4);

}
}
// 0x749F30
namespace gamemd {
void VoxelAnimClass::VoxelAnimClass_Update()
{

  return 3; /*0x74a965*/

}
}
// 0x74A970
namespace gamemd {
int VoxelAnimClass::SaveLoad_Prefix(ObjectClass * aP1, int aP1a)
{

  ObjectClass *Register; // edi

  Register = (ObjectClass *)BuildingClass::SaveLoad_Register((void *)this); /*0x74a981*/
  if ( (int)Register >= 0 ) /*0x74a985*/
  {
    if ( aP1 ) /*0x74a989*/
    {
      ObjectClass::Init(aP1, (AbstractClass *)&aP1a); /*0x74a992*/
      *(unsigned int *)aP1->__pad_0 = &vt_VoxelAnimClass; /*0x74a997*/
      *(unsigned int *)&aP1->__pad_0[4] = &vt_VoxelAnimClass; /*0x74a99d*/
      *(unsigned int *)&aP1->__pad_0[8] = &vt_VoxelAnimClass; /*0x74a9a4*/
      *(unsigned int *)&aP1->__pad_0[12] = &vt_VoxelAnimClass; /*0x74a9ab*/
    }
    AudioController::Init(&aP1[1].bombVisible); /*0x74a9b8*/
    AudioController::Init(&aP1[1].visibilityFlags); /*0x74a9c3*/
    ObjectPtr::RegisterForTracking( /*0x74a9d4*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP1[1].customSound_controller[2]);
    ObjectPtr::RegisterForTracking( /*0x74a9e5*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP1[1].customSound_controller[3]);
    ObjectPtr::RegisterForTracking( /*0x74a9f6*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP1[1].customSound_controller[4]);
  }
  return (int)Register->__pad_0; /*0x74a9fd*/

}
}
// 0x74AA30
namespace gamemd {
AbstractClass * * VoxelAnimClass::GetFrameCount(int * a2)
{

  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // edx
  int v8; // eax

  HouseClass::ProcessPower((void *)this); /*0x74aa39*/
  Power::TimerProcess(*((unsigned int *)this + 64)); /*0x74aa47*/
  v3 = (*(int (**)(int))(*(unsigned int *)(*((unsigned int *)this + 65) + 4) + 16))(*((unsigned int *)this + 65) + 4); /*0x74aa58*/
  Power::TimerProcess(v3); /*0x74aa5e*/
  v4 = *((unsigned int *)this + 66); /*0x74aa63*/
  if ( v4 ) /*0x74aa6b*/
  {
    v5 = (*(int (**)(int))(*(unsigned int *)(v4 + 4) + 16))(v4 + 4); /*0x74aa74*/
    Power::TimerProcess(v5); /*0x74aa7a*/
  }
  v6 = (*(int (**)(int))(*(unsigned int *)(*((unsigned int *)this + 67) + 4) + 16))(*((unsigned int *)this + 67) + 4); /*0x74aa8b*/
  Power::TimerProcess(v6); /*0x74aa91*/
  IDA_LOBYTE(v7) = *((unsigned char *)this + 272); /*0x74aa96*/
  v8 = Power::FlagProcess(a2, v7); /*0x74aa9f*/
  IDA_LOBYTE(v8) = *((unsigned char *)this + 316); /*0x74aaa4*/
  Power::FlagProcess(a2, v8); /*0x74aaad*/
  return Power::TimerProcess(*((unsigned int *)this + 80)); /*0x74aac0*/

}
}
// 0x74AB30
namespace gamemd {
int VoxelAnimClass::LoadFrame()
{

  return *((unsigned int *)this + 65); /*0x74ab36*/

}
}
// 0x75AA90
namespace gamemd {
int VoxelAnimClass::Reset()
{

  LocomotionClass::Init((unsigned int *)this); /*0x75aa93*/
  *((unsigned int *)this + 7) = g_AsyncMovieState; /*0x75aaa1*/
  *((unsigned int *)this + 8) = g_abs_B45BEC; /*0x75aaaa*/
  *((unsigned int *)this + 9) = g_abs_B45BF0; /*0x75aab6*/
  *((unsigned int *)this + 10) = g_AsyncMovieState; /*0x75aabe*/
  *((unsigned int *)this + 11) = g_abs_B45BEC; /*0x75aac6*/
  *((unsigned int *)this + 12) = g_abs_B45BF0; /*0x75aace*/
  *((unsigned char *)this + 52) = 0; /*0x75aad3*/
  *((unsigned char *)this + 53) = 0; /*0x75aad6*/
  *((unsigned char *)this + 54) = 0; /*0x75aad9*/
  *((unsigned int *)this + 14) = 0; /*0x75aadc*/
  *(unsigned int *)this = &vt_WalkLocomotionClass; /*0x75aadf*/
  *((unsigned int *)this + 1) = &vt_WalkLocomotionClass; /*0x75aae5*/
  *((unsigned int *)this + 6) = &vt_WalkLocomotionClass; /*0x75aaec*/
  return this; /*0x75aaf5*/

}
}
// 0x75EBE0
namespace gamemd {
int VoxelAnimClass::Constructor()
{

  int v2; // eax

  ObjectClass::ctor((unsigned int *)this); /*0x75ebe4*/
  *((unsigned char *)this + 300) = 1; /*0x75ebeb*/
  *((unsigned int *)this + 78) = 0; /*0x75ebf2*/
  *((unsigned int *)this + 80) = 0; /*0x75ebf8*/
  *((unsigned int *)this + 43) = 0; /*0x75ebfe*/
  *((unsigned char *)this + 301) = 0; /*0x75ec04*/
  *((unsigned int *)this + 76) = 100; /*0x75ec0a*/
  *((unsigned int *)this + 79) = 0; /*0x75ec14*/
  *((unsigned int *)this + 81) = 0; /*0x75ec1a*/
  *((unsigned int *)this + 82) = 0; /*0x75ec20*/
  *((unsigned int *)this + 83) = 0; /*0x75ec26*/
  *((unsigned int *)this + 104) = 0; /*0x75ec2c*/
  *((unsigned int *)this + 105) = 0; /*0x75ec32*/
  *((unsigned int *)this + 106) = 0; /*0x75ec38*/
  *((unsigned int *)this + 116) = 0; /*0x75ec44*/
  *((unsigned int *)this + 117) = 0; /*0x75ec4a*/
  FrameSnapshot::Init((unsigned short *)((char *)this + 472)); /*0x75ec50*/
  *((unsigned int *)this + 125) = 0; /*0x75ec57*/
  *((unsigned int *)this + 126) = 5; /*0x75ec5d*/
  *((unsigned char *)this + 508) = 1; /*0x75ec67*/
  *((unsigned char *)this + 509) = 0; /*0x75ec6e*/
  *((unsigned int *)this + 124) = &vt_VectorClass_CellClass; /*0x75ec74*/
  *((unsigned int *)this + 125) = RA2_OPNEW(0x14u); /*0x75ec83*/
  *((unsigned char *)this + 509) = 1; /*0x75ec89*/
  *((unsigned int *)this + 124) = &vt_DynamicVectorClass_CellClass; /*0x75ec90*/
  *((unsigned int *)this + 129) = 10; /*0x75ec9a*/
  *((unsigned int *)this + 128) = 0; /*0x75eca4*/
  *(unsigned int *)this = &vt_WaveClass; /*0x75ecaa*/
  *((unsigned int *)this + 1) = &vt_WaveClass; /*0x75ecb0*/
  *((unsigned int *)this + 2) = &vt_WaveClass; /*0x75ecb7*/
  *((unsigned int *)this + 3) = &off_7F6BC8; /*0x75ecbe*/
  if ( g_abs_A8EC48 < g_abs_A8EC40 /*0x75ecfb*/
    || (g_abs_A8EC45 || !g_abs_A8EC40)
    && g_abs_A8EC4C > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(g_abs_A8EC38 + 8))(
         &g_abs_A8EC38,
         g_abs_A8EC40 + g_abs_A8EC4C,
         0) )
  {
    v2 = g_abs_A8EC48++; /*0x75ed08*/
    *((unsigned int *)g_abs_A8EC3C + v2) = this; /*0x75ed17*/
  }
  if ( !byte_B725CC ) /*0x75ed20*/
    Voxel::InitDistanceTable(); /*0x75ed22*/
  return this; /*0x75ed29*/

}
}
// 0x4399E0
namespace gamemd {
float * VoxelAnimClass::QuaternionToMatrix(float * a2)
{

  float *v2; // esi
  float v4[12]; // [esp+8h] [ebp-30h] BYREF

  v2 = ToQuaternionMatrix(v4, (unsigned int *)this + 12); /*0x4399f1*/
  qmemcpy(a2, v2, 0x30u); /*0x4399fe*/
  return a2; /*0x439a00*/

}
} // namespace gamemd

// 0x4D02B0
namespace gamemd {
char VoxelAnimClass::UpdateMatrix()
{

  int v3; // eax
  int (***v4)(unsigned int, void *, int *); // eax
  int v5; // esi
  int v6; // eax
  int v7; // edi
  int v8; // [esp+10h] [ebp-8h] BYREF
  int v9; // [esp+14h] [ebp-4h] BYREF

  if ( *((unsigned int *)this + 9) > Cell::GetGroundHeight((unsigned int *)this + 7) + 120 ) /*0x4d02cc*/
    return 1; /*0x4d02d4*/
  v3 = *((unsigned int *)this + 3); /*0x4d02d5*/
  if ( *(unsigned int *)(v3 + 692) && *(unsigned int *)(v3 + 764) ) /*0x4d02e2*/
    return 1; /*0x4d02f2*/
  v4 = (int (***)(unsigned int, void *, int *))*((unsigned int *)this + 3); /*0x4d02f3*/
  v8 = 0; /*0x4d02f6*/
  if ( !v4 ) /*0x4d0300*/
    return 0; /*0x4d0300*/
  v5 = (**v4)(v4, &unk_822410, &v9); /*0x4d0311*/
  if ( v5 >= 0 ) /*0x4d0315*/
  {
    v7 = v9; /*0x4d0329*/
    Release3COM(&v8); /*0x4d0331*/
    v6 = v7; /*0x4d0336*/
    v8 = v7; /*0x4d0339*/
  }
  else
  {
    Release3COM(&v8); /*0x4d031b*/
    v6 = 0; /*0x4d0320*/
    v8 = 0; /*0x4d0322*/
  }
  if ( v5 < 0 && v5 != -2147467262 ) /*0x4d0347*/
    WinAPI::Wrapper(v5); /*0x4d034a*/
  if ( !v6 ) /*0x4d0355*/
    return 0; /*0x4d0355*/
  if ( !(*(int (**)(int))(*(unsigned int *)v6 + 32))(v6) ) /*0x4d0363*/
  {
    if ( v8 ) /*0x4d0378*/
      (*(void (**)(int))(*(unsigned int *)v8 + 8))(v8); /*0x4d037d*/
    return 0; /*0x4d0380*/
  }
  if ( v8 ) /*0x4d0367*/
    (*(void (**)(int))(*(unsigned int *)v8 + 8))(v8); /*0x4d036c*/
  return 1; /*0x4d02d0*/

}
} // namespace gamemd

// 0x749B20
namespace gamemd {
int VoxelAnimClass::DrawVoxelFrame(int a2, int a3, int a4)
{

  unsigned int *v5; // eax
  unsigned char v7[12]; // [esp+4h] [ebp-Ch] BYREF

  int VoxelAnimClass::DrawVoxelFrame(VoxelAnimClass *this, int a2, int a3, int a4)
  if ( (*((unsigned char *)Coord::To_Cell(&g_abs_87F7E8, v5) + 300) & 0x10) != 0 ) /*0x749b44*/
    *((unsigned char *)this + 128) = 1; /*0x749b46*/
  return ObjectClass::CalcDrawRect(this); /*0x749b60*/

}
} // namespace gamemd

// 0x74A960
namespace gamemd {
int VoxelAnimClass::StubReturn3()
{

  return 3; /*0x74a965*/

}
} // namespace gamemd

// 0x74AA10
namespace gamemd {
int VoxelAnimClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2)
{

  return AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x74aa24*/

}
} // namespace gamemd

// 0x74AAD0
namespace gamemd {
int VoxelAnimClass::ddtor(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x74aad6*/
    return -2147467261; /*0x74aad8*/
  *a2 = 237448641; /*0x74aae6*/
  a2[1] = 298949647; /*0x74aaee*/
  a2[2] = -1610610249; /*0x74aaf7*/
  a2[3] = -777003740; /*0x74ab00*/
  return 0; /*0x74aadd*/

}
} // namespace gamemd

// 0x74AB10
namespace gamemd {
int VoxelAnimClass::StubReturn328()
{

  return 328; /*0x74ab15*/

}
} // namespace gamemd

// 0x74AB20
namespace gamemd {
int VoxelAnimClass::StubReturn41()
{

  return 41; /*0x74ab25*/

}
} // namespace gamemd

// 0x74AB40
namespace gamemd {
int VoxelAnimClass::StubReturnFalse(int a1)
{

  return 0; /*0x74ab42*/

}
} // namespace gamemd

// 0x74AB50
namespace gamemd {
VoxelAnimClass * VoxelAnimClass::DrawVoxel(void * Block, char a2)
{

  VoxelAnimClass::CleanupMembers(Block); /*0x74ab53*/
  if ( (Block & 1) != 0 ) /*0x74ab5d*/
    RA2_OPDEL(Block); /*0x74ab60*/
  return (VoxelAnimClass *)Block; /*0x74ab6a*/

}
} // namespace gamemd
