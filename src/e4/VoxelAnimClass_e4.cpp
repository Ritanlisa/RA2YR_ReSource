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

// 0x4CAF20
namespace gamemd {
unsigned int VoxelAnimClass::ProcessFrame()
{
  int v1; // esi
  unsigned int *v2; // edx
  int v3; // edi
  double v4; // st7
  double v5; // st7
  unsigned int v6; // ecx
  int v7; // eax
  double v8; // st7
  double v9; // st7
  unsigned int v10; // ecx
  int v11; // eax
  unsigned int result; // eax
  float v13; // [esp+8h] [ebp-4h]
  float v14; // [esp+8h] [ebp-4h]
  float v15; // [esp+8h] [ebp-4h]
  float v16; // [esp+8h] [ebp-4h]

  v1 = (unsigned int *)(0);
  v2 = &unk_86D0BC; /*0x4caf25*/
  v3 = 0x2000; /*0x4caf2a*/
  do /*0x4cb050*/
  {
    v4 = COERCE_FLOAT((v1 | 0xFE000) << 10); /*0x4caf3d*/
    if ( v4 == 0.0 ) /*0x4caf4c*/
    {
      v5 = 0.0; /*0x4caf50*/
    }
    else
    {
      if ( v4 <= 0.0 ) /*0x4caf63*/
        v4 = v4 * -1.0; /*0x4caf65*/
      v13 = v4; /*0x4caf6b*/
      v6 = (unsigned int)&unk_7FFFFF & IDA_LODWORD(v13); /*0x4caf75*/
      v7 = (IDA_LODWORD(v13) >> 23) - 127; /*0x4caf7e*/
      if ( (v7 & 1) != 0 ) /*0x4caf83*/
        v6 |= (unsigned int)&ToggleClass::`RTTI Class Hierarchy Descriptor'; /*0x4caf85*/
      v5 = COERCE_FLOAT(((((int16_t)v7 >> 1) + 127) << 23) + dword_8650BC[v6 >> 10]); /*0x4cafa7*/
    }
    v14 = v5; /*0x4cafab*/
    *(v2 - 0x2000) = (unsigned int)&unk_7FFFFF & IDA_LODWORD(v14); /*0x4cafc7*/
    v8 = COERCE_FLOAT((v1 | 0x100000) << 10); /*0x4cafcd*/
    if ( v8 == 0.0 ) /*0x4cafdc*/
    {
      v9 = 0.0; /*0x4cafe0*/
    }
    else
    {
      if ( v8 <= 0.0 ) /*0x4caff3*/
        v8 = v8 * -1.0; /*0x4caff5*/
      v15 = v8; /*0x4caffb*/
      v10 = (unsigned int)&unk_7FFFFF & IDA_LODWORD(v15); /*0x4cb005*/
      v11 = (IDA_LODWORD(v15) >> 23) - 127; /*0x4cb00e*/
      if ( (v11 & 1) != 0 ) /*0x4cb013*/
        v10 |= (unsigned int)&ToggleClass::`RTTI Class Hierarchy Descriptor'; /*0x4cb015*/
      v9 = COERCE_FLOAT(((((int16_t)v11 >> 1) + 127) << 23) + dword_8650BC[v10 >> 10]); /*0x4cb037*/
    }
    v16 = v9; /*0x4cb03b*/
    ++v2; /*0x4cb043*/
    result = (unsigned int)&unk_7FFFFF & IDA_LODWORD(v16); /*0x4cb046*/
    ++v1; /*0x4cb04b*/
    *(v2 - 1) = (unsigned int)&unk_7FFFFF & IDA_LODWORD(v16); /*0x4cb04c*/
    --v3; /*0x4cb04f*/
  }
  while ( v3 ); /*0x4cb050*/
  return result; /*0x4cb056*/
}
}
// 0x7499F0
namespace gamemd {
int VoxelAnimClass::CleanupMembers()
{
  int v2; // eax
  int VoxelAnimClass_field_0x108; // ecx
  int v4; // eax
  VoxelAnimClass *v6; // [esp+4h] [ebp-4h] BYREF

  this->VoxelAnimClass_field_0x0 = (unsigned int)((void*)&VoxelAnimClass_vftable);
  this->VoxelAnimClass_field_0x4[0] = (int)&VoxelAnimClass_vftable; /*0x7499fc*/
  this->VoxelAnimClass_field_0x8 = (void*)&VoxelAnimClass_vftable; /*0x749a03*/
  *(unsigned int *)this->__pad_C = (void*)&VoxelAnimClass_vftable; /*0x749a0a*/
  AbstractClass::AnnounceExpiredPointer(1); /*0x749a11*/
  v6 = this; /*0x749a26*/
  v2 = (*(int (__thiscall **)(char *, VoxelAnimClass **))(*(unsigned int *)&stru_88732C.__pad_1C[64] + 16))( /*0x749a2a*/
         &stru_88732C.__pad_1C[64],
         &v6);
  if ( v2 != -1 && v2 < *(int *)&stru_88732C.__pad_1C[80] ) /*0x749a3a*/
  {
    --*(unsigned int *)&stru_88732C.__pad_1C[80]; /*0x749a3f*/
    for ( ; /*0x749a45*/
          v2 < *(int *)&stru_88732C.__pad_1C[80];
          *(unsigned int *)(*(unsigned int *)&stru_88732C.__pad_1C[68] + 4 * v2 - 4) = *(unsigned int *)(*(unsigned int *)&stru_88732C.__pad_1C[68]
                                                                                     + 4 * v2) )
    {
      ++v2; /*0x749a4d*/
    }
  }
  VoxelAnimClass_field_0x108 = this->VoxelAnimClass_field_0x108; /*0x749a5f*/
  if ( VoxelAnimClass_field_0x108 ) /*0x749a67*/
  {
    (*(void (__thiscall **)(int))(*(unsigned int *)VoxelAnimClass_field_0x108 + 248))(VoxelAnimClass_field_0x108); /*0x749a6b*/
    this->VoxelAnimClass_field_0x108 = 0; /*0x749a71*/
  }
  if ( byte_A8E9A0 ) /*0x749a82*/
    ObjectClass::Undeploy(); /*0x749a86*/
  Mixer::ReleaseChannel((Mixer *)&this->VoxelAnimClass_field_0x114); /*0x749a95*/
  Mixer::ReleaseChannel((Mixer *)&this->VoxelAnimClass_field_0x128); /*0x749aa2*/
  AudioFileClass::Release((AudioFileClass *)&this->VoxelAnimClass_field_0x114); /*0x749aa9*/
  AudioFileClass::Release((AudioFileClass *)&this->VoxelAnimClass_field_0x128); /*0x749ab0*/
  v6 = this; /*0x749ac5*/
  v4 = (*(int (__thiscall **)(int *, VoxelAnimClass **))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x749ac9*/
         &g_BuildingLoadQueue_Array.LightVisibility,
         &v6);
  if ( v4 != -1 && v4 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x749adb*/
  {
    --g_BuildingLoadQueue_Array.LightBlueTint; /*0x749ae0*/
    for ( ; /*0x749ae6*/
          v4 < g_BuildingLoadQueue_Array.LightBlueTint;
          *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v4 - 4) = *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                         + 4 * v4) )
    {
      ++v4; /*0x749aee*/
    }
  }
  this->VoxelAnimClass_field_0x104 = 0; /*0x749b02*/
  return ObjectClass::Dtor(); /*0x749b11*/
}
}
// 0x749B70
namespace gamemd {
Coord * * VoxelAnimClass::ProcessAnim(int * a2, unsigned int * a3)
{
  Viewport *v3; // edi
  unsigned int *VoxelAnimClass_field_0x104; // eax
  int v6; // edx
  unsigned int *v7; // ebp
  int *v8; // eax
  float *v9; // eax
  int v10; // edi
  int v11; // ecx
  int v12; // eax
  CellClass *v13; // eax
  AbstractClass *VoxelAnimClass_field_0x10C; // ecx
  int v15; // eax
  BuildingClass *v16; // esi
  int (__thiscall **VoxelAnimClass_field_0x0)(VoxelAnimClass *); // eax
  int v18; // eax
  int *v19; // eax
  int *SHPFrame; // [esp-1Ch] [ebp-CCh]
  int *v22; // [esp-1Ch] [ebp-CCh]
  int v23; // [esp-18h] [ebp-C8h]
  int v24; // [esp-18h] [ebp-C8h]
  int v25; // [esp-10h] [ebp-C0h]
  Viewport *v26; // [esp-4h] [ebp-B4h]
  int v27; // [esp+Ch] [ebp-A4h] BYREF
  int v28; // [esp+10h] [ebp-A0h]
  int v29; // [esp+14h] [ebp-9Ch]
  int v30; // [esp+18h] [ebp-98h] BYREF
  int v31; // [esp+1Ch] [ebp-94h] BYREF
  int v32; // [esp+20h] [ebp-90h] BYREF
  int v33; // [esp+24h] [ebp-8Ch]
  int GroundHeight; // [esp+28h] [ebp-88h]
  int v35; // [esp+2Ch] [ebp-84h]
  int v36; // [esp+30h] [ebp-80h]
  int v37; // [esp+34h] [ebp-7Ch]
  int v38[2]; // [esp+38h] [ebp-78h] BYREF
  int v39[4]; // [esp+40h] [ebp-70h] BYREF
  float v40[12]; // [esp+50h] [ebp-60h] BYREF
  float v41[12]; // [esp+80h] [ebp-30h] BYREF

  if ( ((int)dword_A8B230->vtable0 & 0x1000) == 0 /*0x749bb6*/
    || (v27 = *(unsigned int *)&this->__pad_98[4],
        v28 = *(unsigned int *)&this->__pad_98[8],
        v29 = *(unsigned int *)&this->__pad_98[12],
        IDA_LOBYTE(VoxelAnimClass_field_0x104) = Game::Stub3((int)&v27),
        !(unsigned char)VoxelAnimClass_field_0x104) )
  {
    v6 = a2[1]; /*0x749bcb*/
    v36 = *a2; /*0x749bd0*/
    v37 = v6; /*0x749bd4*/
    v32 = *(unsigned int *)&this->__pad_98[4]; /*0x749bda*/
    v33 = *(unsigned int *)&this->__pad_98[8]; /*0x749beb*/
    GroundHeight = *(unsigned int *)&this->__pad_98[12]; /*0x749bf2*/
    GroundHeight = Cell::GetGroundHeight(&v32); /*0x749c05*/
    if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v32)->flags[0] & 0x100) == 0 ) /*0x749c1b*/
      goto LABEL_6; /*0x749c1b*/
    v27 = *(unsigned int *)&this->__pad_98[4]; /*0x749c1f*/
    v28 = *(unsigned int *)&this->__pad_98[8]; /*0x749c26*/
    if ( *(unsigned int *)&this->__pad_98[12] >= dword_B1D1BC + GroundHeight ) /*0x749c38*/
    {
      v35 = dword_B1D1BC + GroundHeight; /*0x749c3e*/
      v29 = dword_B1D1BC + GroundHeight + 1; /*0x749c4a*/
      v27 = v32; /*0x749c4e*/
      v28 = v33; /*0x749c5b*/
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v27, v38); /*0x749c60*/
    }
    else
    {
  LABEL_6:
      v35 = GroundHeight; /*0x749c62*/
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v32, v38); /*0x749c76*/
    }
    IDA_LOBYTE(VoxelAnimClass_field_0x104) = this->__pad_12C[16]; /*0x749c7b*/
    if ( !(unsigned char)VoxelAnimClass_field_0x104 ) /*0x749c83*/
    {
      VoxelAnimClass_field_0x104 = (unsigned int *)(this->VoxelAnimClass_field_0x104);
      v7 = (unsigned int *)VoxelAnimClass_field_0x104[44]; /*0x749c8f*/
      if ( v7 ) /*0x749c97*/
      {
        qmemcpy(v40, VoxelAnimClass::QuaternionToMatrix((float *)&this->__pad_98[24], v41), sizeof(v40)); /*0x749cbc*/
        Viewport::Clear(v3); /*0x749cbe*/
        globalHelper_053F90( /*0x749ce8*/
          v7,
          *((unsigned int *)this->VoxelAnimClass_field_0x104 + 166),
          0,
          (float *)stru_887430.m_Data,
          v40,
          (float *)&dword_887420,
          0,
          0,
          0);
        InitializeAudioOcclusion(v39, &v31, &v30); /*0x749cfa*/
        v27 = v38[0] + v31; /*0x749d15*/
        v28 = v30 + v38[1]; /*0x749d26*/
        v23 = -4 - ZCoordToScreenY(v35); /*0x749d36*/
        SHPFrame = (int *)BuildingClass::GetSHPFrame(*(BuildingClass **)&stru_87F5F0.__pad_58[108], 8193); /*0x749d4e*/
        v8 = Miles::DriverGet(); /*0x749d5c*/
        BlitterDrawSHP( /*0x749d6e*/
          (int *)g_DSurface_Hidden_2->__pad_0,
          *(int *)&stru_87F5F0.__pad_58[108],
          v8,
          v39,
          &v27,
          a3,
          0,
          SHPFrame,
          v23,
          0,
          1000,
          0,
          0);
        qmemcpy(v40, VoxelAnimClass::QuaternionToMatrix((float *)&this->__pad_98[24], v41), sizeof(v40)); /*0x749d95*/
        globalHelper_053C80(v7, 0, 0, v40, (float *)&stru_887460.Buffer_field_10); /*0x749da3*/
        Viewport::Clear(v26); /*0x749da8*/
        v9 = MultiplyMatrix3x4(v41, (float *)stru_887430.m_Data, v40); /*0x749dbe*/
        TransformVoxelVertex(v7, *((unsigned int *)this->VoxelAnimClass_field_0x104 + 166), 0, v9); /*0x749dd4*/
        InitializeAudioOcclusion(v39, &v31, &v30); /*0x749de6*/
        v10 = 10240; /*0x749df1*/
        if ( *((unsigned char *)this->VoxelAnimClass_field_0x104 + 661) ) /*0x749df6*/
          v10 = 10244; /*0x749e00*/
        v11 = *(unsigned int *)&this->__pad_98[12]; /*0x749e0b*/
        v12 = *(unsigned int *)&this->__pad_98[8]; /*0x749e11*/
        v27 = *(unsigned int *)&this->__pad_98[4]; /*0x749e17*/
        v29 = v11; /*0x749e1f*/
        v28 = v12; /*0x749e29*/
        v13 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v27); /*0x749e2d*/
        VoxelAnimClass_field_0x10C = this->VoxelAnimClass_field_0x10C; /*0x749e32*/
        v15 = *(int16_t *)v13->CellClass_field_10A; /*0x749e38*/
        if ( VoxelAnimClass_field_0x10C ) /*0x749e41*/
        {
          v16 = *(BuildingClass **)(*(unsigned int *)(*(unsigned int *)&stru_B054D0.m_1[3] /*0x749e52*/
                                              + 4 * VoxelAnimClass_field_0x10C[2505].uniqueId)
                                  + 780);
        }
        else if ( *((unsigned char *)this->VoxelAnimClass_field_0x104 + 768) ) /*0x749e60*/
        {
          v16 = *(BuildingClass **)&stru_87F5F0.__pad_58[116]; /*0x749e6a*/
        }
        else
        {
          v16 = *(BuildingClass **)&stru_87F5F0.__pad_58[108]; /*0x749e72*/
          v15 = 1000; /*0x749e78*/
        }
        v27 = v31 + v36; /*0x749e8b*/
        v25 = v15; /*0x749e97*/
        VoxelAnimClass_field_0x0 = (int (__thiscall **)(VoxelAnimClass *))this->VoxelAnimClass_field_0x0; /*0x749e98*/
        v28 = v30 + v37; /*0x749ea0*/
        v18 = VoxelAnimClass_field_0x0[116](this); /*0x749ea4*/
        v24 = -2 - ZCoordToScreenY(v18); /*0x749eb8*/
        v22 = (int *)BuildingClass::GetSHPFrame(v16, v10); /*0x749ec8*/
        v19 = Miles::DriverGet(); /*0x749ed6*/
        IDA_LOBYTE(VoxelAnimClass_field_0x104) = BlitterDrawSHP( /*0x749ee4*/
                                               (int *)g_DSurface_Hidden_2->__pad_0,
                                               (int)v16,
                                               v19,
                                               v39,
                                               &v27,
                                               a3,
                                               0,
                                               v22,
                                               v24,
                                               0,
                                               v25,
                                               0,
                                               0);
      }
    }
  }
  return (char)VoxelAnimClass_field_0x104; /*0x749eea*/
}
}
// 0x749F30
namespace gamemd {
void VoxelAnimClass_Update()
{
  VoxelAnimClass *v1; // ebx
  unsigned int *VoxelAnimClass_field_0x104; // eax
  unsigned int *v3; // eax
  int VoxelAnimClass_field_0x140; // eax
  int v6; // ebp
  int *v7; // esi
  bool v8; // zf
  int v9; // edi
  bool v10; // al
  AnimClass *v11; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // esi
  AnimClass *v15; // eax
  AnimClass *v16; // eax
  int v17; // edx
  int v18; // ecx
  int v19; // esi
  AnimClass *v20; // esi
  int v21; // eax
  double v22; // st7
  int v23; // eax
  double v24; // st7
  int v25; // eax
  void **v26; // edx
  unsigned int *v27; // eax
  int v28; // edi
  unsigned int *Coords; // eax
  unsigned int *v30; // eax
  int v31; // edi
  int *v32; // eax
  unsigned char *v33; // eax
  int *v34; // eax
  unsigned int *v35; // eax
  int v36; // eax
  int v37; // esi
  int v38; // eax
  int v39; // esi
  void *v40; // eax
  int v41; // edi
  int v42; // edx
  uint8_t *v43; // esi
  CellClass *v44; // edi
  int v45; // eax
  int v46; // eax
  int *StartCoords; // esi
  int v48; // eax
  signed int v49; // ecx
  int v50; // edx
  int v51; // esi
  int v52; // edx
  int v53; // edi
  unsigned int *v54; // eax
  CellClass *v55; // esi
  CellClass *v56; // edi
  void *v57; // ebp
  int v58; // eax
  void *v59; // ebp
  int v60; // eax
  AnimClass *v61; // esi
  int v62; // eax
  double v63; // st7
  int v64; // eax
  double v65; // st7
  int v66; // eax
  int v67; // eax
  int v68; // eax
  AnimClass *v69; // eax
  int v70; // edx
  int v71; // ecx
  unsigned int *v72; // eax
  ObjectClass *i; // edi
  int v74; // ebp
  unsigned int *v75; // eax
  int v76; // ecx
  unsigned int *v77; // eax
  void *vtable0; // esi
  int v79; // eax
  int (__thiscall **VoxelAnimClass_field_0x0)(VoxelAnimClass *, int); // esi
  int v81; // eax
  int v82; // [esp-14h] [ebp-90h]
  unsigned int *v83; // [esp-10h] [ebp-8Ch]
  int v84; // [esp-Ch] [ebp-88h]
  char v85; // [esp-8h] [ebp-84h]
  unsigned int *v86; // [esp+0h] [ebp-7Ch]
  bool v87; // [esp+12h] [ebp-6Ah]
  bool v88; // [esp+13h] [ebp-69h]
  int v89; // [esp+14h] [ebp-68h]
  int v90; // [esp+18h] [ebp-64h]
  int v91; // [esp+18h] [ebp-64h]
  int16_t v92[2]; // [esp+1Ch] [ebp-60h] BYREF
  int v93; // [esp+20h] [ebp-5Ch] BYREF
  int v94; // [esp+24h] [ebp-58h]
  int v95; // [esp+28h] [ebp-54h] BYREF
  VoxelAnimClass *smudgeTypeIndex; // [esp+2Ch] [ebp-50h] BYREF
  int v97; // [esp+30h] [ebp-4Ch] BYREF
  int v98; // [esp+34h] [ebp-48h]
  int v99; // [esp+38h] [ebp-44h]
  int v100[4]; // [esp+3Ch] [ebp-40h] BYREF
  int v101; // [esp+4Ch] [ebp-30h] BYREF
  int v102; // [esp+50h] [ebp-2Ch]
  int v103; // [esp+54h] [ebp-28h]
  int v104; // [esp+58h] [ebp-24h]
  int v105; // [esp+5Ch] [ebp-20h] BYREF
  int v106; // [esp+64h] [ebp-18h]
  int v107; // [esp+68h] [ebp-14h]
  int v108; // [esp+6Ch] [ebp-10h] BYREF
  int v109; // [esp+70h] [ebp-Ch]
  int v110; // [esp+78h] [ebp-4h]

  v1 = this; /*0x749f34*/
  VoxelAnimClass_field_0x104 = this->VoxelAnimClass_field_0x104; /*0x749f38*/
  smudgeTypeIndex = this; /*0x749f3f*/
  if ( VoxelAnimClass_field_0x104[183] != -1 ) /*0x749f4a*/
  {
    v3 = (unsigned int *)(*((int (__thiscall **)(VoxelAnimClass *, int *))this->VoxelAnimClass_field_0x0 + 18))(this, &v101); /*0x749f5b*/
    StartAudioController(v3, (int **)&v1->VoxelAnimClass_field_0x114); /*0x749f62*/
  }
  if ( v1->__pad_110[0] ) /*0x749f67*/
    return (*((int (__thiscall **)(VoxelAnimClass *))v1->VoxelAnimClass_field_0x0 + 62))(v1); /*0x749f82*/
  VoxelAnimClass_field_0x140 = v1->VoxelAnimClass_field_0x140; /*0x749f83*/
  v6 = 0; /*0x749f89*/
  if ( VoxelAnimClass_field_0x140 ) /*0x749f8d*/
    v1->VoxelAnimClass_field_0x140 = VoxelAnimClass_field_0x140 - 1; /*0x749f90*/
  if ( v1->VoxelAnimClass_field_0x140 <= 0 ) /*0x749f9c*/
  {
    v7 = (int *)&v1->__pad_98[4]; /*0x749fa2*/
    v97 = *(unsigned int *)&v1->__pad_98[4]; /*0x749fac*/
    v98 = *(unsigned int *)&v1->__pad_98[8]; /*0x749fbd*/
    v99 = *(unsigned int *)&v1->__pad_98[12]; /*0x749fc4*/
    v8 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v97)->landType == 2; /*0x749fd5*/
    v101 = *(unsigned int *)&v1->__pad_98[4]; /*0x749fda*/
    v102 = *(unsigned int *)&v1->__pad_98[8]; /*0x749fe1*/
    v9 = *(unsigned int *)&v1->__pad_98[12]; /*0x749fe5*/
    v97 = *(unsigned int *)&v1->__pad_98[4]; /*0x749fea*/
    v98 = *(unsigned int *)&v1->__pad_98[8]; /*0x749ff6*/
    v88 = v8; /*0x74a002*/
    v99 = *(unsigned int *)&v1->__pad_98[12]; /*0x74a007*/
    v10 = v9 >= (int)(dword_B1D1BC + Cell::GetGroundHeight(&v97)); /*0x74a01e*/
    v87 = v10; /*0x74a023*/
    if ( !v88 || v10 ) /*0x74a02f*/
    {
      if ( *((unsigned int *)v1->VoxelAnimClass_field_0x104 + 186) ) /*0x74a144*/
      {
        v20 = (AnimClass *)RA2_OPNEW(0x1C8u); /*0x74a15a*/
        if ( v20 ) /*0x74a161*/
        {
          IDA_LOWORD(v21) = Math::RoundToInt(*(float *)&v1->__pad_98[48]); /*0x74a169*/
          v22 = *(float *)&v1->__pad_98[52]; /*0x74a16e*/
          v97 = v21; /*0x74a174*/
          IDA_LOWORD(v23) = Math::RoundToInt(v22); /*0x74a178*/
          v24 = *(float *)&v1->__pad_98[56]; /*0x74a17d*/
          v98 = v23; /*0x74a183*/
          IDA_LOWORD(v25) = Math::RoundToInt(v24); /*0x74a187*/
          v26 = (void **)v1->VoxelAnimClass_field_0x104; /*0x74a18c*/
          v99 = v25; /*0x74a19a*/
          AnimClass::ctor(v20, v26[186], &v97, 0, 1, (void *)0x2600, (void *)0xFFFFFFE2, 0); /*0x74a1af*/
        }
        v27 = v1->VoxelAnimClass_field_0x104; /*0x74a1b4*/
        v28 = v27[188]; /*0x74a1c9*/
        v84 = v27[190]; /*0x74a1cf*/
        Coords = (unsigned int *)Coord::GetCoords(&v101, 0); /*0x74a1d8*/
        PlaySoundEffectAt(Coords, v28, v83, v84, 1, 0); /*0x74a1e1*/
        v30 = v1->VoxelAnimClass_field_0x104; /*0x74a1e6*/
        v90 = v30[190]; /*0x74a1f6*/
        v31 = v30[188]; /*0x74a1fa*/
        v32 = (int *)Coord::GetCoords(&v101, 0); /*0x74a205*/
        CreateSmokeEffectAt(v31, v90, *v32, v32[1], v32[2], v85, 0); /*0x74a225*/
      }
    }
    else if ( *((unsigned char *)v1->VoxelAnimClass_field_0x104 + 720) ) /*0x74a040*/
    {
      v11 = (AnimClass *)RA2_OPNEW(0x1C8u); /*0x74a04a*/
      if ( v11 ) /*0x74a054*/
      {
        v12 = *v7; /*0x74a05a*/
        v13 = *(unsigned int *)&v1->__pad_98[8]; /*0x74a05c*/
        v14 = *(unsigned int *)&v1->__pad_98[12]; /*0x74a05f*/
        v97 = v12; /*0x74a064*/
        v98 = v13; /*0x74a068*/
        v99 = v14 + 5; /*0x74a081*/
        AnimClass::ctor( /*0x74a099*/
          v11,
          *(void **)(*(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 3012)
                   + 4 * *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 3024)
                   - 4),
          &v97,
          0,
          1,
          (void *)0x600,
          0,
          0);
      }
    }
    else
    {
      v15 = (AnimClass *)RA2_OPNEW(0x1C8u); /*0x74a0a3*/
      if ( v15 ) /*0x74a0ad*/
      {
        v97 = *v7; /*0x74a0bc*/
        v98 = *(unsigned int *)&v1->__pad_98[8]; /*0x74a0c4*/
        v99 = *(unsigned int *)&v1->__pad_98[12]; /*0x74a0d0*/
        AnimClass::ctor( /*0x74a0e3*/
          v15,
          *(void **)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 148),
          &v97,
          0,
          1,
          (void *)0x600,
          0,
          0);
      }
      v16 = (AnimClass *)RA2_OPNEW(0x1C8u); /*0x74a0ed*/
      if ( v16 ) /*0x74a0f7*/
      {
        v17 = *v7; /*0x74a0fd*/
        v18 = *(unsigned int *)&v1->__pad_98[8]; /*0x74a0ff*/
        v19 = *(unsigned int *)&v1->__pad_98[12]; /*0x74a102*/
        v97 = v17; /*0x74a107*/
        v98 = v18; /*0x74a111*/
        v99 = v19 + 10; /*0x74a124*/
        AnimClass::ctor( /*0x74a134*/
          v16,
          **(void ***)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 3012),
          &v97,
          0,
          1,
          (void *)0x600,
          0,
          0);
      }
    }
    if ( !v88 || v87 ) /*0x74a238*/
    {
      v33 = v1->VoxelAnimClass_field_0x104; /*0x74a23e*/
      v108 = 0; /*0x74a244*/
      v109 = 0; /*0x74a248*/
      v110 = 0; /*0x74a24c*/
      if ( v33[720] ) /*0x74a250*/
      {
        v34 = (int *)Coord::GetCoords(&v101, v86); /*0x74a269*/
        v97 = *v34; /*0x74a270*/
        v98 = v34[1]; /*0x74a277*/
        v99 = v34[2]; /*0x74a27e*/
        v35 = v1->VoxelAnimClass_field_0x104; /*0x74a282*/
        if ( v35[181] ) /*0x74a288*/
        {
          v36 = v35[182]; /*0x74a290*/
          if ( v36 > 0 ) /*0x74a298*/
          {
            v37 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v36); /*0x74a2b3*/
            v38 = v37 /*0x74a2cd*/
                + Random::Range(
                    (Random *)&dword_A8B230[14].NeedsSaveOrLink,
                    0,
                    *((unsigned int *)v1->VoxelAnimClass_field_0x104 + 182));
            if ( v38 > 0 ) /*0x74a2d1*/
            {
              v39 = v38; /*0x74a2d3*/
              do /*0x74a301*/
              {
                v40 = (void *)RA2_OPNEW(0x148u); /*0x74a2da*/
                if ( v40 ) /*0x74a2e4*/
                  DamageAnimClass::Constructor(v40, *((unsigned int *)v1->VoxelAnimClass_field_0x104 + 181), &v97, 0); /*0x74a2fb*/
                --v39; /*0x74a300*/
              }
              while ( v39 ); /*0x74a301*/
            }
          }
        }
        if ( *((unsigned char *)v1->VoxelAnimClass_field_0x104 + 768) && !v87 ) /*0x74a31d*/
        {
          v41 = 0; /*0x74a323*/
          v91 = 0; /*0x74a325*/
          do /*0x74a572*/
          {
            v42 = v41 & 7; /*0x74a347*/
            IDA_LOWORD(v89) = v97 / 256 + IDA_LOWORD(g_DDrawSurfaceManager.scenario[v42 + 82]); /*0x74a363*/
            IDA_HIWORD(v89) = v98 / 256 + IDA_HIWORD(g_DDrawSurfaceManager.scenario[v42 + 82]); /*0x74a372*/
            *(unsigned int *)v92 = v89; /*0x74a381*/
            v43 = (uint8_t *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v92); /*0x74a38a*/
            if ( (uint8_t)IsCoordValidMap((int)v43, 0) ) /*0x74a390*/
            {
              v44 = *(CellClass **)(g_BuildingLoadQueue_Array.?[2] + 4 * FindBuildingByTiberiumType(127)); /*0x74a3b2*/
              if ( v43[284] ) /*0x74a3b8*/
              {
                v94 = RA2_OPNEW(0xB0u); /*0x74a3ca*/
                if ( v94 ) /*0x74a3d0*/
                {
                  v93 = *((unsigned int *)v43 + 9); /*0x74a3e8*/
                  v45 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 1); /*0x74a3ec*/
                  Object::SpawnAtCell( /*0x74a427*/
                    (void *)v94,
                    *(unsigned int *)(*(unsigned int *)stru_A83D50.__pad_34
                              + 4 * ((int)v44->altObject + (unsigned int)v44->jumpjet->? + 2 * v43[284] + v45)
                              - 8),
                    (int16_t *)&v93,
                    -1);
                }
              }
              else
              {
                v94 = RA2_OPNEW(0xB0u); /*0x74a431*/
                if ( v94 ) /*0x74a437*/
                {
                  v95 = *((unsigned int *)v43 + 9); /*0x74a44b*/
                  v46 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 11); /*0x74a44f*/
                  Object::SpawnAtCell( /*0x74a477*/
                    (void *)v94,
                    *(unsigned int *)(*(unsigned int *)stru_A83D50.__pad_34 + 4 * ((int)v44->jumpjet->? + v46)),
                    (int16_t *)&v95,
                    -1);
                }
              }
              v94 = (int)(v43 + 36); /*0x74a482*/
              CellClass::RegisterForRedraw(v44, (int16_t *)v43 + 18); /*0x74a486*/
              v43[286] = 0; /*0x74a48f*/
              StartCoords = House::GetStartCoords((House *)v43, v100); /*0x74a49e*/
              v48 = *StartCoords; /*0x74a4a6*/
              v49 = StartCoords[1] - (unsigned int)DSurface_ViewBounds.field_4; /*0x74a4ab*/
              v50 = StartCoords[2]; /*0x74a4ad*/
              v51 = StartCoords[3]; /*0x74a4b2*/
              v106 = v50; /*0x74a4b5*/
              v107 = v51; /*0x74a4b9*/
              if ( v6 > 0 && v110 > 0 ) /*0x74a4c9*/
              {
                if ( v50 <= 0 || v51 <= 0 ) /*0x74a4d1*/
                {
                  v48 = v108; /*0x74a53d*/
                  v49 = v109; /*0x74a541*/
                  v50 = v6; /*0x74a545*/
                  v51 = v110; /*0x74a547*/
                }
                else
                {
                  v52 = v108; /*0x74a4d3*/
                  v53 = v109; /*0x74a4db*/
                  v104 = v110; /*0x74a4e1*/
                  if ( v108 > v48 ) /*0x74a4e5*/
                  {
                    v6 = v108 + v6 - v48; /*0x74a4e9*/
                    v52 = v48; /*0x74a4eb*/
                  }
                  if ( v109 > v49 ) /*0x74a4ef*/
                  {
                    v53 = v49; /*0x74a4f9*/
                    v104 += v109 - v49; /*0x74a4fb*/
                  }
                  if ( v52 + v6 < v48 + v106 ) /*0x74a50a*/
                    v6 = v48 + v106 - v52 + 1; /*0x74a512*/
                  v51 = v104; /*0x74a516*/
                  if ( v104 + v53 < v49 + v107 ) /*0x74a525*/
                    v51 = v107 - v53 + v49 + 1; /*0x74a52d*/
                  v1 = smudgeTypeIndex; /*0x74a531*/
                  v48 = v52; /*0x74a535*/
                  v49 = v53; /*0x74a537*/
                  v50 = v6; /*0x74a539*/
                }
              }
              v109 = v49; /*0x74a549*/
              v108 = v48; /*0x74a557*/
              v6 = v50; /*0x74a55b*/
              v110 = v51; /*0x74a55d*/
              BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], v94); /*0x74a561*/
              v41 = v91; /*0x74a566*/
            }
            v91 = ++v41; /*0x74a56e*/
          }
          while ( v41 < 8 ); /*0x74a572*/
          Cell::CreateCrater(v108, v109, v6, v110, 0); /*0x74a59f*/
          return (*((int (__thiscall **)(VoxelAnimClass *))v1->VoxelAnimClass_field_0x0 + 62))(v1); /*0x74a5b5*/
        }
      }
      else if ( v33[768] ) /*0x74a5b6*/
      {
        if ( !v87 ) /*0x74a5ca*/
        {
          v54 = (unsigned int *)Coord::GetCoords(&v101, v86); /*0x74a5db*/
          v55 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v54); /*0x74a5eb*/
          if ( (uint8_t)IsCoordValidMap((int)v55, 0) ) /*0x74a5f0*/
          {
            v56 = *(CellClass **)(g_BuildingLoadQueue_Array.?[2] + 4 * FindBuildingByTiberiumType(127)); /*0x74a612*/
            if ( v55->slopeIndex ) /*0x74a618*/
            {
              v57 = (void *)RA2_OPNEW(0xB0u); /*0x74a627*/
              if ( v57 ) /*0x74a62e*/
              {
                smudgeTypeIndex = (VoxelAnimClass *)v55->smudgeTypeIndex; /*0x74a647*/
                v58 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 1); /*0x74a64b*/
                Object::SpawnAtCell( /*0x74a682*/
                  v57,
                  *(unsigned int *)(*(unsigned int *)stru_A83D50.__pad_34
                            + 4
                            * ((int)v56->altObject
                             + (unsigned int)v56->jumpjet->?
                             + 2 * (uint8_t)v55->slopeIndex
                             + v58)
                            - 8),
                  (int16_t *)&smudgeTypeIndex,
                  -1);
              }
            }
            else
            {
              v59 = (void *)RA2_OPNEW(0xB0u); /*0x74a689*/
              if ( v59 ) /*0x74a690*/
              {
                smudgeTypeIndex = (VoxelAnimClass *)v55->smudgeTypeIndex; /*0x74a6a4*/
                v60 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 11); /*0x74a6a8*/
                Object::SpawnAtCell( /*0x74a6ce*/
                  v59,
                  *(unsigned int *)(*(unsigned int *)stru_A83D50.__pad_34 + 4 * ((int)v56->jumpjet->? + v60)),
                  (int16_t *)&smudgeTypeIndex,
                  -1);
              }
            }
            CellClass::RegisterForRedraw(v56, (int16_t *)&v55->smudgeTypeIndex); /*0x74a6d9*/
            v55->powerup = 0; /*0x74a6e2*/
            House::GetStartCoords((House *)v55, &v108); /*0x74a6ec*/
            BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&v55->smudgeTypeIndex); /*0x74a6f7*/
          }
        }
      }
    }
    return (*((int (__thiscall **)(VoxelAnimClass *))v1->VoxelAnimClass_field_0x0 + 62))(v1); /*0x74a70d*/
  }
  if ( *((unsigned int *)v1->VoxelAnimClass_field_0x104 + 187) ) /*0x74a714*/
  {
    if ( !(*(unsigned int *)&stru_A8EB00.?[416] % 2) ) /*0x74a732*/
    {
      v61 = (AnimClass *)RA2_OPNEW(0x1C8u); /*0x74a73f*/
      if ( v61 ) /*0x74a746*/
      {
        IDA_LOWORD(v62) = Math::RoundToInt(*(float *)&v1->__pad_98[48]); /*0x74a74e*/
        v63 = *(float *)&v1->__pad_98[52]; /*0x74a753*/
        v97 = v62; /*0x74a759*/
        IDA_LOWORD(v64) = Math::RoundToInt(v63); /*0x74a75d*/
        v65 = *(float *)&v1->__pad_98[56] * dbl_B1D170; /*0x74a768*/
        v98 = v64; /*0x74a76e*/
        IDA_LOWORD(v66) = Math::RoundToInt(v65 * 0.01924500897298839 + 0.5); /*0x74a77e*/
        v99 = v66; /*0x74a783*/
        AnimClass::ctor(v61, *((void **)v1->VoxelAnimClass_field_0x104 + 187), &v97, (void *)1, 1, (void *)0x600, 0, 0); /*0x74a7a6*/
      }
    }
  }
  v67 = JumpjetLocomotionClass::Update2((double *)&v1->__pad_98[24], (float *)&v1->__pad_98[24]); /*0x74a7b3*/
  if ( *((unsigned char *)v1->VoxelAnimClass_field_0x104 + 720) ) /*0x74a7be*/
    *(float *)&v1->__pad_98[68] = *(float *)&v1->__pad_98[68] + *(double *)&v1->__pad_98[32]; /*0x74a7d4*/
  v68 = v67 - 1; /*0x74a7da*/
  if ( v68 ) /*0x74a7db*/
  {
    if ( v68 == 1 ) /*0x74a7de*/
      v1->VoxelAnimClass_field_0x140 = 0; /*0x74a7e4*/
  }
  else
  {
    v97 = *(unsigned int *)&v1->__pad_98[4]; /*0x74a7f9*/
    v98 = *(unsigned int *)&v1->__pad_98[8]; /*0x74a80a*/
    v99 = *(unsigned int *)&v1->__pad_98[12]; /*0x74a811*/
    if ( Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v97)->landType == 2 ) /*0x74a821*/
    {
      v1->VoxelAnimClass_field_0x140 = 0; /*0x74a823*/
    }
    else
    {
      if ( *((unsigned int *)v1->VoxelAnimClass_field_0x104 + 185) ) /*0x74a834*/
      {
        v69 = (AnimClass *)RA2_OPNEW(0x1C8u); /*0x74a841*/
        if ( v69 ) /*0x74a84b*/
        {
          v70 = *(unsigned int *)&v1->__pad_98[8]; /*0x74a84f*/
          v100[0] = *(unsigned int *)&v1->__pad_98[4]; /*0x74a852*/
          v71 = *(unsigned int *)&v1->__pad_98[12]; /*0x74a856*/
          v100[1] = v70; /*0x74a85b*/
          v100[2] = v71; /*0x74a85f*/
          AnimClass::ctor(v69, *((void **)v1->VoxelAnimClass_field_0x104 + 185), v100, 0, 1, (void *)0x600, 0, 0); /*0x74a87f*/
        }
      }
      v72 = (unsigned int *)Coord::GetCoords(&v105, v86); /*0x74a88b*/
      for ( i = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v72)->firstObject; i; i = i->nextObject ) /*0x74a8a3*/
      {
        v74 = i->location[0]; /*0x74a8af*/
        v102 = i->location[1]; /*0x74a8b8*/
        v103 = i->location[2]; /*0x74a8ca*/
        v75 = (unsigned int *)Coord::GetCoords(&v108, v86); /*0x74a8ce*/
        v76 = abs32(*v75 - v74) + abs32(v75[1] - v102); /*0x74a8ee*/
        v77 = v1->VoxelAnimClass_field_0x104; /*0x74a8f0*/
        if ( v76 <= v77[189] ) /*0x74a8fc*/
        {
          vtable0 = i->AbstractClass; /*0x74a904*/
          v82 = v77[190]; /*0x74a90e*/
          v79 = ZCoordToScreenY(v76); /*0x74a90f*/
          (*((void (__thiscall **)(ObjectClass *, int, int, int, unsigned int, unsigned int, unsigned int, unsigned int))vtable0 + 91))( /*0x74a923*/
            i,
            (int)v1->VoxelAnimClass_field_0x104 + 752,
            v79,
            v82,
            0,
            0,
            0,
            0);
        }
      }
    }
  }
  VoxelAnimClass_field_0x0 = (int (__thiscall **)(VoxelAnimClass *, int))v1->VoxelAnimClass_field_0x0; /*0x74a934*/
  v81 = Coord::GetCoords(&v108, v86); /*0x74a941*/
  return VoxelAnimClass_field_0x0[109](v1, v81); /*0x749f7b*/
}
}
// 0x74A970
namespace gamemd {
int VoxelAnimClass::SaveLoad_Prefix(ObjectClass * aP1, int aP1a)
{
  int Register; // edi

  Register = BuildingClass::SaveLoad_Register((ObjectClass *)this); /*0x74a981*/
  if ( Register >= 0 ) /*0x74a985*/
  {
    if ( aP1 ) /*0x74a989*/
    {
      ObjectClass::Init((ObjectClass *)aP1, (int)&aP1a); /*0x74a992*/
      *aP1 = (int)&VoxelAnimClass_vftable; /*0x74a997*/
      aP1[1] = (int)&VoxelAnimClass_vftable; /*0x74a99d*/
      aP1[2] = (int)&VoxelAnimClass_vftable; /*0x74a9a4*/
      aP1[3] = (int)&VoxelAnimClass_vftable; /*0x74a9ab*/
    }
    AudioController::Init((AudioController *)(aP1 + 69)); /*0x74a9b8*/
    AudioController::Init((AudioController *)(aP1 + 74)); /*0x74a9c3*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP1 + 65); /*0x74a9d4*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP1 + 66); /*0x74a9e5*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP1 + 67); /*0x74a9f6*/
  }
  return Register; /*0x74a9fd*/
}
}
// 0x74AA30
namespace gamemd {
AbstractClass * * VoxelAnimClass::GetFrameCount(int * a2)
{
  int v3; // eax
  int VoxelAnimClass_field_0x108; // eax
  int v5; // eax
  int v6; // eax
  int v7; // edx
  int v8; // eax

  HouseClass::ProcessPower(); /*0x74aa39*/
  Power::TimerProcess(this->VoxelAnimClass_field_0x100); /*0x74aa47*/
  v3 = (*(int (__stdcall **)(char *))(*((unsigned int *)this->VoxelAnimClass_field_0x104 + 1) + 16))((char *)this->VoxelAnimClass_field_0x104 + 4); /*0x74aa58*/
  Power::TimerProcess(v3); /*0x74aa5e*/
  VoxelAnimClass_field_0x108 = this->VoxelAnimClass_field_0x108; /*0x74aa63*/
  if ( VoxelAnimClass_field_0x108 ) /*0x74aa6b*/
  {
    v5 = (*(int (__stdcall **)(int))(*(unsigned int *)(VoxelAnimClass_field_0x108 + 4) + 16))(VoxelAnimClass_field_0x108 + 4); /*0x74aa74*/
    Power::TimerProcess(v5); /*0x74aa7a*/
  }
  v6 = (*((int (__stdcall **)(void **))this->VoxelAnimClass_field_0x10C->vtable1 + 4))(&this->VoxelAnimClass_field_0x10C->vtable1); /*0x74aa8b*/
  Power::TimerProcess(v6); /*0x74aa91*/
  IDA_LOBYTE(v7) = this->__pad_110[0]; /*0x74aa96*/
  v8 = Power::FlagProcess((Power *)a2, v7); /*0x74aa9f*/
  IDA_LOBYTE(v8) = this->__pad_12C[16]; /*0x74aaa4*/
  Power::FlagProcess((Power *)a2, v8); /*0x74aaad*/
  return Power::TimerProcess(this->VoxelAnimClass_field_0x140); /*0x74aac0*/
}
}
// 0x74AB30
namespace gamemd {
int VoxelAnimClass::LoadFrame()
{
  return (int)this->VoxelAnimClass_field_0x104; /*0x74ab36*/
}
}
// 0x75AA90
namespace gamemd {
int VoxelAnimClass::Reset()
{
  LocomotionClass::Init(); /*0x75aa93*/
  this->VoxelAnimClass_field_0x1C[0] = g_AsyncMovieState; /*0x75aaa1*/
  *(unsigned int *)this->__pad_20 = g_MovieFrameState1; /*0x75aaaa*/
  *(unsigned int *)&this->__pad_20[4] = g_MovieFrameState2; /*0x75aab6*/
  *(unsigned int *)&this->__pad_20[8] = g_AsyncMovieState; /*0x75aabe*/
  *(unsigned int *)&this->__pad_20[12] = g_MovieFrameState1; /*0x75aac6*/
  *(unsigned int *)&this->__pad_20[16] = g_MovieFrameState2; /*0x75aace*/
  this->__pad_20[20] = 0; /*0x75aad3*/
  this->__pad_20[21] = 0; /*0x75aad6*/
  this->__pad_20[22] = 0; /*0x75aad9*/
  *(unsigned int *)&this->__pad_20[24] = 0; /*0x75aadc*/
  this->VoxelAnimClass_field_0x0 = (void*)&WalkLocomotionClass_vftable; /*0x75aadf*/
  this->VoxelAnimClass_field_0x4[0] = (int)&WalkLocomotionClass_vftable; /*0x75aae5*/
  *(unsigned int *)&this->__pad_C[12] = (void*)&WalkLocomotionClass_vftable; /*0x75aaec*/
  return (int)this; /*0x75aaf5*/
}
}
// 0x75EBE0
namespace gamemd {
int VoxelAnimClass::Constructor()
{
  int v2; // eax
  Voxel *v4; // [esp+0h] [ebp-8h]

  ObjectClass::ctor(); /*0x75ebe4*/
  this->__pad_12C[0] = 1; /*0x75ebeb*/
  *(unsigned int *)&this->__pad_12C[12] = 0; /*0x75ebf2*/
  this->VoxelAnimClass_field_0x140 = 0; /*0x75ebf8*/
  *(unsigned int *)&this->__pad_98[20] = 0; /*0x75ebfe*/
  this->__pad_12C[1] = 0; /*0x75ec04*/
  *(unsigned int *)&this->__pad_12C[4] = 100; /*0x75ec0a*/
  *(unsigned int *)&this->__pad_12C[16] = 0; /*0x75ec14*/
  *(unsigned int *)this->__pad_144 = 0; /*0x75ec1a*/
  *(unsigned int *)&this->__pad_144[4] = 0; /*0x75ec20*/
  *(unsigned int *)&this->__pad_144[8] = 0; /*0x75ec26*/
  *(unsigned int *)&this->__pad_144[92] = 0; /*0x75ec2c*/
  *(unsigned int *)&this->__pad_144[96] = 0; /*0x75ec32*/
  *(unsigned int *)&this->__pad_144[100] = 0; /*0x75ec38*/
  *(unsigned int *)&this->__pad_144[140] = 0; /*0x75ec44*/
  *(unsigned int *)&this->__pad_144[144] = 0; /*0x75ec4a*/
  FrameSnapshot::Init((FrameSnapshot *)&this->__pad_144[148]); /*0x75ec50*/
  *(unsigned int *)&this->__pad_144[176] = 0; /*0x75ec57*/
  *(unsigned int *)&this->__pad_144[180] = 5; /*0x75ec5d*/
  this->__pad_144[184] = 1; /*0x75ec67*/
  this->__pad_144[185] = 0; /*0x75ec6e*/
  *(unsigned int *)&this->__pad_144[172] = (void*)&VectorClass_CellClass___vftable; /*0x75ec74*/
  *(unsigned int *)&this->__pad_144[176] = RA2_OPNEW(0x14u); /*0x75ec83*/
  this->__pad_144[185] = 1; /*0x75ec89*/
  *(unsigned int *)&this->__pad_144[172] = (void*)&DynamicVectorClass_CellClass___vftable; /*0x75ec90*/
  *(unsigned int *)&this->__pad_144[192] = 10; /*0x75ec9a*/
  *(unsigned int *)&this->__pad_144[188] = 0; /*0x75eca4*/
  this->VoxelAnimClass_field_0x0 = (void*)&WaveClass_vftable; /*0x75ecaa*/
  this->VoxelAnimClass_field_0x4[0] = (int)&WaveClass_vftable; /*0x75ecb0*/
  this->VoxelAnimClass_field_0x8 = (void*)&WaveClass_vftable; /*0x75ecb7*/
  *(unsigned int *)this->__pad_C = &off_7F6BC8; /*0x75ecbe*/
  if ( *(int *)&stru_A8EB00.?[100] < *(int *)&stru_A8EB00.?[92] /*0x75ecfb*/
    || (stru_A8EB00.?[97] || !*(unsigned int *)&stru_A8EB00.?[92])
    && *(int *)&stru_A8EB00.?[104] > 0
    && (*(uint8_t (__thiscall **)(unsigned char *, int, unsigned int))(*(unsigned int *)&stru_A8EB00.?[84] + 8))(
         &stru_A8EB00.?[84],
         *(unsigned int *)&stru_A8EB00.?[92] + *(unsigned int *)&stru_A8EB00.?[104],
         0) )
  {
    v2 = (*(unsigned int *)&stru_A8EB00.?[100])++; /*0x75ed08*/
    *(unsigned int *)(*(unsigned int *)&stru_A8EB00.?[88] + 4 * v2) = this; /*0x75ed17*/
  }
  if ( !byte_B725CC ) /*0x75ed20*/
    Voxel::InitDistanceTable(v4); /*0x75ed22*/
  return (int)this; /*0x75ed29*/
}
}
// 0x4399E0
namespace gamemd {
float * VoxelAnimClass::QuaternionToMatrix(float * a2)
{
  float *v2; // esi
  float v4[12]; // [esp+8h] [ebp-30h] BYREF

  v2 = ToQuaternionMatrix(v4, &this->vtable22); /*0x4399f1*/
  qmemcpy(a2, v2, 0x30u); /*0x4399fe*/
  return a2; /*0x439a00*/
}
} // namespace gamemd

// 0x4D02B0
namespace gamemd {
char VoxelAnimClass::UpdateMatrix()
{
  int v3; // eax
  int (__stdcall ***v4)(unsigned int, void *, int *); // eax
  int v5; // esi
  int v6; // eax
  int v7; // edi
  int v8; // [esp+10h] [ebp-8h] BYREF
  int v9; // [esp+14h] [ebp-4h] BYREF

  if ( *(unsigned int *)&this->__pad_20[4] > Cell::GetGroundHeight(this->VoxelAnimClass_field_0x1C) + 120 ) /*0x4d02cc*/
    return 1; /*0x4d02d4*/
  v3 = *(unsigned int *)this->__pad_C; /*0x4d02d5*/
  if ( *(unsigned int *)(v3 + 692) && *(unsigned int *)(v3 + 764) ) /*0x4d02e2*/
    return 1; /*0x4d02f2*/
  v4 = *(int (__stdcall ****)(unsigned int, void *, int *))this->__pad_C; /*0x4d02f3*/
  v8 = 0; /*0x4d02f6*/
  if ( !v4 ) /*0x4d0300*/
    return 0; /*0x4d0300*/
  v5 = (**v4)(v4, &unk_822410, &v9); /*0x4d0311*/
  if ( v5 >= 0 ) /*0x4d0315*/
  {
    v7 = v9; /*0x4d0329*/
    Release3COM((ObjectClass *)&v8); /*0x4d0331*/
    v6 = v7; /*0x4d0336*/
    v8 = v7; /*0x4d0339*/
  }
  else
  {
    Release3COM((ObjectClass *)&v8); /*0x4d031b*/
    v6 = 0; /*0x4d0320*/
    v8 = 0; /*0x4d0322*/
  }
  if ( v5 < 0 && v5 != -2147467262 ) /*0x4d0347*/
    WinAPI::Wrapper(v5); /*0x4d034a*/
  if ( !v6 ) /*0x4d0355*/
    return 0; /*0x4d0355*/
  if ( !(*(int (__stdcall **)(int))(*(unsigned int *)v6 + 32))(v6) ) /*0x4d0363*/
  {
    if ( v8 ) /*0x4d0378*/
      (*(void (__stdcall **)(int))(*(unsigned int *)v8 + 8))(v8); /*0x4d037d*/
    return 0; /*0x4d0380*/
  }
  if ( v8 ) /*0x4d0367*/
    (*(void (__stdcall **)(int))(*(unsigned int *)v8 + 8))(v8); /*0x4d036c*/
  return 1; /*0x4d02d0*/
}
} // namespace gamemd

// 0x749B20
namespace gamemd {
int VoxelAnimClass::DrawVoxelFrame(int a2, int a3, int a4)
{
  unsigned int *v5; // eax
  unsigned char v7[12]; // [esp+4h] [ebp-Ch] BYREF

  v5 = (unsigned int *)(*((int (__thiscall **)(VoxelAnimClass *, unsigned char *))this->VoxelAnimClass_field_0x0 + 18))(this, v7); /*0x749b2f*/
  if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v5)->copyFlags & 0x10) != 0 ) /*0x749b44*/
    this->__pad_20[96] = 1; /*0x749b46*/
  return ObjectClass::CalcDrawRect(); /*0x749b60*/
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
  return AbstractClass::SaveLoad_Prefix((int *)aP0, a1, aP2); /*0x74aa24*/
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
  a2[3] = unk_7E965C; /*0x74ab00*/
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
VoxelAnimClass * VoxelAnimClass::DrawVoxel(char a2)
{
  VoxelAnimClass::CleanupMembers(); /*0x74ab53*/
  if ( (a2 & 1) != 0 ) /*0x74ab5d*/
    RA2_OPDEL(); /*0x74ab60*/
  return this; /*0x74ab6a*/
}
} // namespace gamemd
