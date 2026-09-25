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
#include "e4/e4_protos.h"

// 0x4CAF20
namespace gamemd {
unsigned int VoxelAnimClass::ProcessFrame()
{
  int v0; // esi
  _DWORD *v1; // edx
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

  v0 = 0; /*0x4caf23*/
  v1 = &unk_86D0BC; /*0x4caf25*/
  v2 = 0x2000; /*0x4caf2a*/
  do /*0x4cb050*/
  {
    v3 = COERCE_FLOAT((v0 | 0xFE000) << 10); /*0x4caf3d*/
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
        v5 |= (unsigned int)&ToggleClass::`RTTI Class Hierarchy Descriptor'; /*0x4caf85*/
      v4 = COERCE_FLOAT(((((__int16)v6 >> 1) + 127) << 23) + dword_8650BC[v5 >> 10]); /*0x4cafa7*/
    }
    v13 = v4; /*0x4cafab*/
    *(v1 - 0x2000) = (unsigned int)&unk_7FFFFF & IDA_LODWORD(v13); /*0x4cafc7*/
    v7 = COERCE_FLOAT((v0 | 0x100000) << 10); /*0x4cafcd*/
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
        v9 |= (unsigned int)&ToggleClass::`RTTI Class Hierarchy Descriptor'; /*0x4cb015*/
      v8 = COERCE_FLOAT(((((__int16)v10 >> 1) + 127) << 23) + dword_8650BC[v9 >> 10]); /*0x4cb037*/
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
  void *this; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)this = &(void*)(void*)&VoxelAnimClass_vftable; /*0x7499f6*/
  this->vtable2 = &(void*)(void*)&VoxelAnimClass_vftable; /*0x7499fc*/
  this->vtable3 = &(void*)(void*)&VoxelAnimClass_vftable; /*0x749a03*/
  this->vtable4 = &(void*)(void*)&VoxelAnimClass_vftable; /*0x749a0a*/
  AbstractClass::AnnounceExpiredPointer(1); /*0x749a11*/
  v2 = (*(int (__thiscall **)(int *, void **))(VoxelAnimClass_Array + 16))(&VoxelAnimClass_Array, &this); /*0x749a2a*/
  if ( v2 != -1 && v2 < dword_887398 && v2 < --dword_887398 ) /*0x749a45*/
  {
    do /*0x749a5d*/
    {
      ++v2; /*0x749a4d*/
      *((_DWORD *)dword_88738C + v2 - 1) = *((_DWORD *)dword_88738C + v2); /*0x749a51*/
    }
    while ( v2 < dword_887398 ); /*0x749a5d*/
  }
  v3 = this->q108; /*0x749a5f*/
  if ( v3 ) /*0x749a67*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 248))(v3); /*0x749a6b*/
    this->q108 = 0; /*0x749a71*/
  }
  if ( g_WTFMode ) /*0x749a82*/
    ObjectClass::Undeploy(); /*0x749a86*/
  Mixer::ReleaseChannel((int **)&this->u32_189); /*0x749a95*/
  Mixer::ReleaseChannel((int **)&this->u32_1C4); /*0x749aa2*/
  AudioFileClass::Release((_DWORD *)&this->u32_189); /*0x749aa9*/
  AudioFileClass::Release((_DWORD *)&this->u32_1C4); /*0x749ab0*/
  v4 = (*(int (__thiscall **)(int *, void **))(g_AnimPoolManager + 16))(&g_AnimPoolManager, &this); /*0x749ac9*/
  if ( v4 != -1 && v4 < g_AnimManager && v4 < --g_AnimManager ) /*0x749ae6*/
  {
    do /*0x749afe*/
    {
      ++v4; /*0x749aee*/
      *((_DWORD *)g_AnimPoolCount + v4 - 1) = *((_DWORD *)g_AnimPoolCount + v4); /*0x749af2*/
    }
    while ( v4 < g_AnimManager ); /*0x749afe*/
  }
  this->q104 = 0; /*0x749b02*/
  return ObjectClass::Dtor(); /*0x749b11*/
}
}
// 0x749B70
namespace gamemd {
Coord * * VoxelAnimClass::ProcessAnim(int * a2, unsigned int * a3)
{
  int v4; // eax
  int v5; // edx
  _DWORD *v6; // ebp
  int *v7; // eax
  float *v8; // eax
  int v9; // edi
  int v10; // ecx
  int v11; // eax
  __int16 *v12; // eax
  int v13; // ecx
  int v14; // eax
  _DWORD *v15; // esi
  int v16; // eax
  int v17; // eax
  int *v18; // eax
  int *SHPFrame; // [esp-1Ch] [ebp-CCh]
  int *v21; // [esp-1Ch] [ebp-CCh]
  int v22; // [esp-18h] [ebp-C8h]
  int v23; // [esp-18h] [ebp-C8h]
  int v25; // [esp+Ch] [ebp-A4h] BYREF
  int v26; // [esp+10h] [ebp-A0h]
  int v27; // [esp+14h] [ebp-9Ch]
  int v28; // [esp+18h] [ebp-98h] BYREF
  int v29; // [esp+1Ch] [ebp-94h] BYREF
  int v30; // [esp+20h] [ebp-90h] BYREF
  int v31; // [esp+24h] [ebp-8Ch]
  int GroundHeight; // [esp+28h] [ebp-88h]
  int v33; // [esp+2Ch] [ebp-84h]
  int v34; // [esp+30h] [ebp-80h]
  int v36[2]; // [esp+38h] [ebp-78h] BYREF
  int v37[4]; // [esp+40h] [ebp-70h] BYREF
  float v38[12]; // [esp+50h] [ebp-60h] BYREF
  float v39[12]; // [esp+80h] [ebp-30h] BYREF

  if ( (*(_DWORD *)g_ScenarioClass_Instance & 0x1000) == 0 /*0x749bb6*/
    || (v25 = *(&this->vtable49), v26 = *(&this->uniqueId0), v27 = *(&this->uniqueId1), IDA_LOBYTE(v4) = Game::Stub3((int)&v25), !(_BYTE)v4) )
  {
    v5 = a2[1]; /*0x749bcb*/
    v34 = *a2; /*0x749bd0*/
    v5 = v5; /*0x749bd4*/
    v30 = *(&this->vtable49); /*0x749bda*/
    v31 = *(&this->uniqueId0); /*0x749beb*/
    GroundHeight = *(&this->uniqueId1); /*0x749bf2*/
    GroundHeight = Cell::GetGroundHeight(&v30); /*0x749c05*/
    if ( (*((_DWORD *)Coord::To_Cell(&MapClass_Instance, &v30) + 80) & 0x100) == 0 ) /*0x749c1b*/
      goto LABEL_6; /*0x749c1b*/
    v25 = *(&this->vtable49); /*0x749c1f*/
    v26 = *(&this->uniqueId0); /*0x749c26*/
    if ( *(&this->uniqueId1) >= dword_B1D1BC + GroundHeight ) /*0x749c38*/
    {
      v33 = dword_B1D1BC + GroundHeight; /*0x749c3e*/
      v27 = dword_B1D1BC + GroundHeight + 1; /*0x749c4a*/
      v25 = v30; /*0x749c4e*/
      v26 = v31; /*0x749c5b*/
      Coord::To_Screen(g_TacticalClass_Instance, &v25, v36); /*0x749c60*/
    }
    else
    {
  LABEL_6:
      v33 = GroundHeight; /*0x749c62*/
      Coord::To_Screen(g_TacticalClass_Instance, &v30, v36); /*0x749c76*/
    }
    IDA_LOBYTE(v4) = this->q13C; /*0x749c7b*/
    if ( !(_BYTE)v4 ) /*0x749c83*/
    {
      v4 = *(&this->u32_185); /*0x749c89*/
      v6 = *(_DWORD **)(v4 + 176); /*0x749c8f*/
      if ( v6 ) /*0x749c97*/
      {
        qmemcpy(v38, VoxelAnimClass::QuaternionToMatrix((float *)&this->u32_B0, v39), sizeof(v38)); /*0x749cbc*/
        Viewport::Clear(); /*0x749cbe*/
        globalHelper_053F90(v6, *(_DWORD *)(*(&this->u32_185) + 664), 0, flt_887430, v38, (float *)&dword_887420, 0, 0, 0); /*0x749ce8*/
        InitializeAudioOcclusion(v37, &v29, &v28); /*0x749cfa*/
        v25 = v36[0] + v29; /*0x749d15*/
        v26 = v28 + v36[1]; /*0x749d26*/
        v22 = -4 - ZCoordToScreenY(v33); /*0x749d36*/
        SHPFrame = (int *)BuildingClass::GetSHPFrame((_DWORD *)FileSystem_UNITx_PAL, 8193); /*0x749d4e*/
        v7 = Miles::DriverGet(); /*0x749d5c*/
        BlitterDrawSHP( /*0x749d6e*/
          (int *)g_DSurface_Hidden_2,
          FileSystem_UNITx_PAL,
          v7,
          v37,
          &v25,
          a3,
          0,
          SHPFrame,
          v22,
          0,
          1000,
          0,
          0);
        qmemcpy(v38, VoxelAnimClass::QuaternionToMatrix((float *)&this->u32_B0, v39), sizeof(v38)); /*0x749d95*/
        globalHelper_053C80(v6, 0, 0, v38, (float *)&dword_887470); /*0x749da3*/
        Viewport::Clear(); /*0x749da8*/
        v8 = MultiplyMatrix3x4(v39, flt_887430, v38); /*0x749dbe*/
        TransformVoxelVertex(v6, *(_DWORD *)(*(&this->u32_185) + 664), 0, v8); /*0x749dd4*/
        InitializeAudioOcclusion(v37, &v29, &v28); /*0x749de6*/
        v9 = 10240; /*0x749df1*/
        if ( *(_BYTE *)(*(&this->u32_185) + 661) ) /*0x749df6*/
          v9 = 10244; /*0x749e00*/
        v10 = *(&this->uniqueId1); /*0x749e0b*/
        v11 = *(&this->uniqueId0); /*0x749e11*/
        v25 = *(&this->vtable49); /*0x749e17*/
        v27 = v10; /*0x749e1f*/
        v26 = v11; /*0x749e29*/
        v12 = (__int16 *)Coord::To_Cell(&MapClass_Instance, &v25); /*0x749e2d*/
        v13 = *(&this->u32_187); /*0x749e32*/
        v14 = v12[133]; /*0x749e38*/
        if ( v13 ) /*0x749e41*/
        {
          v15 = *(_DWORD **)(*((_DWORD *)BuildingTypeClass_AnimTable + v13->u32_16054) + 780); /*0x749e52*/
        }
        else if ( *(_BYTE *)(*(&this->u32_185) + 768) ) /*0x749e60*/
        {
          v15 = (_DWORD *)FileSystem_GRFTXT_TIBERIUM_PAL; /*0x749e6a*/
        }
        else
        {
          v15 = (_DWORD *)FileSystem_UNITx_PAL; /*0x749e72*/
          v14 = 1000; /*0x749e78*/
        }
        v25 = v29 + v34; /*0x749e8b*/
        v14 = v14; /*0x749e97*/
        v16 = *this; /*0x749e98*/
        v26 = v28 + v5; /*0x749ea0*/
        v17 = this->GetMember41(); /*0x749ea4*/
        v23 = -2 - ZCoordToScreenY(v17); /*0x749eb8*/
        v21 = (int *)BuildingClass::GetSHPFrame(v15, v9); /*0x749ec8*/
        v18 = Miles::DriverGet(); /*0x749ed6*/
        IDA_LOBYTE(v4) = BlitterDrawSHP((int *)g_DSurface_Hidden_2, (int)v15, v18, v37, &v25, a3, 0, v21, v23, 0, v14, 0, 0); /*0x749ee4*/
      }
    }
  }
  return v4; /*0x749eea*/
}
}
// 0x749F30
namespace gamemd {
void VoxelAnimClass_Update()
{
  _DWORD *v1; // ebx
  int v2; // eax
  int v3; // eax
  int v5; // eax
  int v6; // ebp
  int *v7; // esi
  bool v8; // zf
  int v9; // edi
  bool v10; // al
  void **v11; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // esi
  void **v15; // eax
  void **v16; // eax
  int v17; // edx
  int v18; // ecx
  int v19; // esi
  void **v20; // esi
  int v21; // eax
  double v22; // st7
  int v23; // eax
  double v24; // st7
  int v25; // eax
  int v26; // edx
  int v27; // eax
  int v28; // edi
  _DWORD *Coords; // eax
  int v30; // eax
  int v31; // edi
  int *v32; // eax
  int v33; // eax
  int *v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // esi
  int v38; // eax
  void *v40; // eax
  int v41; // edi
  int v42; // edx
  _DWORD *v43; // esi
  int v44; // edi
  int v45; // eax
  int v46; // eax
  int *StartCoords; // esi
  int v48; // eax
  int v49; // ecx
  int v50; // edx
  int v51; // esi
  int v52; // edx
  int v53; // edi
  _DWORD *v54; // eax
  unsigned __int8 *v55; // esi
  int v56; // edi
  _DWORD *v57; // ebp
  int v58; // eax
  _DWORD *v59; // ebp
  int v60; // eax
  void **v61; // esi
  int v62; // eax
  double v63; // st7
  int v64; // eax
  double v65; // st7
  int v66; // eax
  int v67; // eax
  void **v68; // eax
  int v69; // edx
  int v70; // ecx
  _DWORD *v71; // eax
  int *i; // edi
  int v73; // ebp
  _DWORD *v74; // eax
  int v75; // ecx
  int v76; // eax
  int v77; // esi
  __int64 v78; // rax
  int v79; // esi
  _DWORD *v80; // eax
  int v81; // [esp-14h] [ebp-90h]
  int v82; // [esp-Ch] [ebp-88h]
  int v85; // [esp+14h] [ebp-68h]
  int v86; // [esp+18h] [ebp-64h]
  int v87; // [esp+18h] [ebp-64h]
  int v89; // [esp+20h] [ebp-5Ch] BYREF
  _DWORD *v90; // [esp+24h] [ebp-58h]
  int v91; // [esp+28h] [ebp-54h] BYREF
  _DWORD *v92; // [esp+2Ch] [ebp-50h] BYREF
  int v93; // [esp+30h] [ebp-4Ch] BYREF
  int v94; // [esp+34h] [ebp-48h]
  int v95; // [esp+38h] [ebp-44h]
  int v96[4]; // [esp+3Ch] [ebp-40h] BYREF
  int v97; // [esp+4Ch] [ebp-30h] BYREF
  int v98; // [esp+50h] [ebp-2Ch]
  int v99; // [esp+54h] [ebp-28h]
  int v101; // [esp+5Ch] [ebp-20h] BYREF
  int v104; // [esp+6Ch] [ebp-10h] BYREF
  int v105; // [esp+70h] [ebp-Ch]
  int v106; // [esp+78h] [ebp-4h]

  v1 = this; /*0x749f34*/
  v2 = *(&this->u32_185); /*0x749f38*/
  v92 = this; /*0x749f3f*/
  if ( v2->q2DC != -1 ) /*0x749f4a*/
  {
    v3 = this->GetCoords_0(&v97); /*0x749f5b*/
    StartAudioController(v3, (int)(v1 + 69)); /*0x749f62*/
  }
  if ( *((_BYTE *)v1 + 272) ) /*0x749f67*/
    return (*(int (__thiscall **)(_DWORD *))(*v1 + 248))(v1); /*0x749f82*/
  v5 = v1[80]; /*0x749f83*/
  v6 = 0; /*0x749f89*/
  if ( v5 ) /*0x749f8d*/
    v1[80] = v5 - 1; /*0x749f90*/
  if ( (int)v1[80] <= 0 ) /*0x749f9c*/
  {
    v7 = v1 + 39; /*0x749fa2*/
    v93 = v1[39]; /*0x749fac*/
    v94 = v1[40]; /*0x749fbd*/
    v95 = v1[41]; /*0x749fc4*/
    v8 = *((_DWORD *)Coord::To_Cell(&MapClass_Instance, &v93) + 59) == 2; /*0x749fd5*/
    v97 = v1[39]; /*0x749fda*/
    v98 = v1[40]; /*0x749fe1*/
    v9 = v1[41]; /*0x749fe5*/
    v93 = v1[39]; /*0x749fea*/
    v94 = v1[40]; /*0x749ff6*/
    v8 = v8; /*0x74a002*/
    v95 = v1[41]; /*0x74a007*/
    v10 = v9 >= dword_B1D1BC + Cell::GetGroundHeight(&v93); /*0x74a01e*/
    v10 = v10; /*0x74a023*/
    if ( !v8 || v10 ) /*0x74a02f*/
    {
      if ( *(_DWORD *)(v1[65] + 744) ) /*0x74a144*/
      {
        v20 = (void **)RA2_OPNEW(0x1C8u); /*0x74a15a*/
        if ( v20 ) /*0x74a161*/
        {
          v21 = Math::RoundToInt(*((float *)v1 + 50)); /*0x74a169*/
          v22 = *((float *)v1 + 51); /*0x74a16e*/
          v93 = v21; /*0x74a174*/
          v23 = Math::RoundToInt(v22); /*0x74a178*/
          v24 = *((float *)v1 + 52); /*0x74a17d*/
          v94 = v23; /*0x74a183*/
          v25 = Math::RoundToInt(v24); /*0x74a187*/
          v26 = v1[65]; /*0x74a18c*/
          v95 = v25; /*0x74a19a*/
          AnimClass::ctor(v20, v26->q2E8, &v93, 0, 1, (void *)0x2600, (void *)0xFFFFFFE2, 0); /*0x74a1af*/
        }
        v27 = v1[65]; /*0x74a1b4*/
        v28 = v27->u32_2F0; /*0x74a1c9*/
        v82 = v27->q2F8; /*0x74a1cf*/
        Coords = Coord::GetCoords((float *)v1 + 44, &v97); /*0x74a1d8*/
        PlaySoundEffectAt(Coords, v28, 0, v82, 1, 0); /*0x74a1e1*/
        v30 = v1[65]; /*0x74a1e6*/
        v86 = v30->q2F8; /*0x74a1f6*/
        v31 = v30->u32_2F0; /*0x74a1fa*/
        v32 = Coord::GetCoords((float *)v1 + 44, &v97); /*0x74a205*/
        CreateSmokeEffectAt(v31, v86, *v32, v32[1], v32[2], 0, 0); /*0x74a225*/
      }
    }
    else if ( *(_BYTE *)(v1[65] + 720) ) /*0x74a040*/
    {
      v11 = (void **)RA2_OPNEW(0x1C8u); /*0x74a04a*/
      if ( v11 ) /*0x74a054*/
      {
        v12 = *v7; /*0x74a05a*/
        v13 = v1[40]; /*0x74a05c*/
        v14 = v1[41]; /*0x74a05f*/
        v93 = v12; /*0x74a064*/
        v94 = v13; /*0x74a068*/
        v95 = v14 + 5; /*0x74a081*/
        AnimClass::ctor( /*0x74a099*/
          v11,
          *(void **)(*((_DWORD *)g_RulesClass_Instance + 753) + 4 * *((_DWORD *)g_RulesClass_Instance + 756) - 4),
          &v93,
          0,
          1,
          (void *)0x600,
          0,
          0);
      }
    }
    else
    {
      v15 = (void **)RA2_OPNEW(0x1C8u); /*0x74a0a3*/
      if ( v15 ) /*0x74a0ad*/
      {
        v93 = *v7; /*0x74a0bc*/
        v94 = v1[40]; /*0x74a0c4*/
        v95 = v1[41]; /*0x74a0d0*/
        AnimClass::ctor(v15, *((void **)g_RulesClass_Instance + 37), &v93, 0, 1, (void *)0x600, 0, 0); /*0x74a0e3*/
      }
      v16 = (void **)RA2_OPNEW(0x1C8u); /*0x74a0ed*/
      if ( v16 ) /*0x74a0f7*/
      {
        v17 = *v7; /*0x74a0fd*/
        v18 = v1[40]; /*0x74a0ff*/
        v19 = v1[41]; /*0x74a102*/
        v93 = v17; /*0x74a107*/
        v94 = v18; /*0x74a111*/
        v95 = v19 + 10; /*0x74a124*/
        AnimClass::ctor(v16, **((void ***)g_RulesClass_Instance + 753), &v93, 0, 1, (void *)0x600, 0, 0); /*0x74a134*/
      }
    }
    if ( !v8 || v10 ) /*0x74a238*/
    {
      v33 = v1[65]; /*0x74a23e*/
      v104 = 0; /*0x74a244*/
      v105 = 0; /*0x74a248*/
      v106 = 0; /*0x74a24c*/
      if ( v33->q2D0 ) /*0x74a250*/
      {
        v34 = Coord::GetCoords((float *)v1 + 44, &v97); /*0x74a269*/
        v93 = *v34; /*0x74a270*/
        v94 = v34[1]; /*0x74a277*/
        v95 = v34[2]; /*0x74a27e*/
        v35 = v1[65]; /*0x74a282*/
        if ( v35->q2D4 ) /*0x74a288*/
        {
          v36 = v35->q2D8; /*0x74a290*/
          if ( v36 > 0 ) /*0x74a298*/
          {
            v37 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, v36); /*0x74a2b3*/
            v38 = v37 + Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, *(_DWORD *)(v1[65] + 728)); /*0x74a2cd*/
            if ( v38 > 0 ) /*0x74a2d1*/
            {
              v38 = v38; /*0x74a2d3*/
              do /*0x74a301*/
              {
                v40 = (void *)RA2_OPNEW(0x148u); /*0x74a2da*/
                if ( v40 ) /*0x74a2e4*/
                  DamageAnimClass::Constructor(v40, *(_DWORD *)(v1[65] + 724), &v93, 0); /*0x74a2fb*/
                --v38; /*0x74a300*/
              }
              while ( v38 ); /*0x74a301*/
            }
          }
        }
        if ( *(_BYTE *)(v1[65] + 768) && !v10 ) /*0x74a31d*/
        {
          v41 = 0; /*0x74a323*/
          v87 = 0; /*0x74a325*/
          do /*0x74a572*/
          {
            v42 = v41 & 7; /*0x74a347*/
            IDA_LOWORD(v85) = v93 / 256 + IDA_LOWORD(Direction_X_Offsets[v42]); /*0x74a363*/
            IDA_HIWORD(v85) = v94 / 256 + IDA_HIWORD(Direction_X_Offsets[v42]); /*0x74a372*/
            v85 = v85; /*0x74a381*/
            v43 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v85); /*0x74a38a*/
            if ( IsCoordValidMap((int)v43, 0) ) /*0x74a390*/
            {
              v44 = *((_DWORD *)BuildingClass_InstanceArray + FindBuildingByTiberiumType(127)); /*0x74a3b2*/
              if ( *((_BYTE *)v43 + 284) ) /*0x74a3b8*/
              {
                v90 = RA2_OPNEW(0xB0u); /*0x74a3ca*/
                if ( v90 ) /*0x74a3d0*/
                {
                  v89 = v43[9]; /*0x74a3e8*/
                  v45 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 1); /*0x74a3ec*/
                  Object::SpawnAtCell( /*0x74a427*/
                    v90,
                    *((_DWORD *)g_BuildingTypeClass_Array
                    + 2 * *((unsigned __int8 *)v43 + 284)
                    + v45
                    + v44->q0E8
                    + *(_DWORD *)(v44->q0E0 + 660)
                    - 2),
                    (__int16 *)&v89,
                    -1);
                }
              }
              else
              {
                v90 = RA2_OPNEW(0xB0u); /*0x74a431*/
                if ( v90 ) /*0x74a437*/
                {
                  v91 = v43[9]; /*0x74a44b*/
                  v46 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 11); /*0x74a44f*/
                  Object::SpawnAtCell( /*0x74a477*/
                    v90,
                    *((_DWORD *)g_BuildingTypeClass_Array + v46 + *(_DWORD *)(v44->q0E0 + 660)),
                    (__int16 *)&v91,
                    -1);
                }
              }
              v90 = v43 + 9; /*0x74a482*/
              CellClass::RegisterForRedraw(v44, (__int16 *)v43 + 18); /*0x74a486*/
              *((_BYTE *)v43 + 286) = 0; /*0x74a48f*/
              StartCoords = House::GetStartCoords((int)v43, v96); /*0x74a49e*/
              v48 = *StartCoords; /*0x74a4a6*/
              v49 = StartCoords[1] - g_Map_VisibleRect; /*0x74a4ab*/
              v50 = StartCoords[2]; /*0x74a4ad*/
              v51 = StartCoords[3]; /*0x74a4b2*/
              v50 = v50; /*0x74a4b5*/
              v51 = v51; /*0x74a4b9*/
              if ( v6 > 0 && v106 > 0 ) /*0x74a4c9*/
              {
                if ( v50 <= 0 || v51 <= 0 ) /*0x74a4d1*/
                {
                  v48 = v104; /*0x74a53d*/
                  v49 = v105; /*0x74a541*/
                  v50 = v6; /*0x74a545*/
                  v51 = v106; /*0x74a547*/
                }
                else
                {
                  v52 = v104; /*0x74a4d3*/
                  v53 = v105; /*0x74a4db*/
                  v106 = v106; /*0x74a4e1*/
                  if ( v104 > v48 ) /*0x74a4e5*/
                  {
                    v6 = v104 + v6 - v48; /*0x74a4e9*/
                    v52 = v48; /*0x74a4eb*/
                  }
                  if ( v105 > v49 ) /*0x74a4ef*/
                  {
                    v53 = v49; /*0x74a4f9*/
                    v106 += v105 - v49; /*0x74a4fb*/
                  }
                  if ( v52 + v6 < v48 + v50 ) /*0x74a50a*/
                    v6 = v48 + v50 - v52 + 1; /*0x74a512*/
                  v51 = v106; /*0x74a516*/
                  if ( v106 + v53 < v49 + v51 ) /*0x74a525*/
                    v51 = v51 - v53 + v49 + 1; /*0x74a52d*/
                  v1 = v92; /*0x74a531*/
                  v48 = v52; /*0x74a535*/
                  v49 = v53; /*0x74a537*/
                  v50 = v6; /*0x74a539*/
                }
              }
              v105 = v49; /*0x74a549*/
              v104 = v48; /*0x74a557*/
              v6 = v50; /*0x74a55b*/
              v106 = v51; /*0x74a55d*/
              BuildingClass::AddUpgrade((int)&MapClass_Instance, (int)v90); /*0x74a561*/
              v41 = v87; /*0x74a566*/
            }
            v87 = ++v41; /*0x74a56e*/
          }
          while ( v41 < 8 ); /*0x74a572*/
          Cell::CreateCrater(v104, v105, v6, v106, 0); /*0x74a59f*/
          return (*(int (__thiscall **)(_DWORD *))(*v1 + 248))(v1); /*0x74a5b5*/
        }
      }
      else if ( v33->q300 ) /*0x74a5b6*/
      {
        if ( !v10 ) /*0x74a5ca*/
        {
          v54 = Coord::GetCoords((float *)v1 + 44, &v97); /*0x74a5db*/
          v55 = (unsigned __int8 *)Coord::To_Cell(&MapClass_Instance, v54); /*0x74a5eb*/
          if ( IsCoordValidMap((int)v55, 0) ) /*0x74a5f0*/
          {
            v56 = *((_DWORD *)BuildingClass_InstanceArray + FindBuildingByTiberiumType(127)); /*0x74a612*/
            if ( v55[284] ) /*0x74a618*/
            {
              v57 = RA2_OPNEW(0xB0u); /*0x74a627*/
              if ( v57 ) /*0x74a62e*/
              {
                v92 = (_DWORD *)*((_DWORD *)v55 + 9); /*0x74a647*/
                v58 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 1); /*0x74a64b*/
                Object::SpawnAtCell( /*0x74a682*/
                  v57,
                  *((_DWORD *)g_BuildingTypeClass_Array
                  + 2 * v55[284]
                  + v58
                  + v56->q0E8
                  + *(_DWORD *)(v56->q0E0 + 660)
                  - 2),
                  (__int16 *)&v92,
                  -1);
              }
            }
            else
            {
              v59 = RA2_OPNEW(0xB0u); /*0x74a689*/
              if ( v59 ) /*0x74a690*/
              {
                v92 = (_DWORD *)*((_DWORD *)v55 + 9); /*0x74a6a4*/
                v60 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 11); /*0x74a6a8*/
                Object::SpawnAtCell( /*0x74a6ce*/
                  v59,
                  *((_DWORD *)g_BuildingTypeClass_Array + v60 + *(_DWORD *)(v56->q0E0 + 660)),
                  (__int16 *)&v92,
                  -1);
              }
            }
            CellClass::RegisterForRedraw(v56, (__int16 *)v55 + 18); /*0x74a6d9*/
            v55[286] = 0; /*0x74a6e2*/
            House::GetStartCoords((int)v55, &v104); /*0x74a6ec*/
            BuildingClass::AddUpgrade((int)&MapClass_Instance, (int)(v55 + 36)); /*0x74a6f7*/
          }
        }
      }
    }
    return (*(int (__thiscall **)(_DWORD *))(*v1 + 248))(v1); /*0x74a70d*/
  }
  if ( *(_DWORD *)(v1[65] + 748) ) /*0x74a714*/
  {
    if ( !((int)g_CurrentFrame % 2) ) /*0x74a732*/
    {
      v61 = (void **)RA2_OPNEW(0x1C8u); /*0x74a73f*/
      if ( v61 ) /*0x74a746*/
      {
        v62 = Math::RoundToInt(*((float *)v1 + 50)); /*0x74a74e*/
        v63 = *((float *)v1 + 51); /*0x74a753*/
        v93 = v62; /*0x74a759*/
        v64 = Math::RoundToInt(v63); /*0x74a75d*/
        v65 = *((float *)v1 + 52) * dbl_B1D170; /*0x74a768*/
        v94 = v64; /*0x74a76e*/
        v95 = Math::RoundToInt(v65 * 0.01924500897298839 + 0.5); /*0x74a783*/
        AnimClass::ctor(v61, *(void **)(v1[65] + 748), &v93, (void *)1, 1, (void *)0x600, 0, 0); /*0x74a7a6*/
      }
    }
  }
  v66 = JumpjetLocomotionClass::Update2(v1 + 44); /*0x74a7b3*/
  if ( *(_BYTE *)(v1[65] + 720) ) /*0x74a7be*/
    *((float *)v1 + 55) = *((float *)v1 + 55) + *((double *)v1 + 23); /*0x74a7d4*/
  v67 = v66 - 1; /*0x74a7da*/
  if ( v67 ) /*0x74a7db*/
  {
    if ( v67 == 1 ) /*0x74a7de*/
      v1[80] = 0; /*0x74a7e4*/
  }
  else
  {
    v93 = v1[39]; /*0x74a7f9*/
    v94 = v1[40]; /*0x74a80a*/
    v95 = v1[41]; /*0x74a811*/
    if ( *((_DWORD *)Coord::To_Cell(&MapClass_Instance, &v93) + 59) == 2 ) /*0x74a821*/
    {
      v1[80] = 0; /*0x74a823*/
    }
    else
    {
      if ( *(_DWORD *)(v1[65] + 740) ) /*0x74a834*/
      {
        v68 = (void **)RA2_OPNEW(0x1C8u); /*0x74a841*/
        if ( v68 ) /*0x74a84b*/
        {
          v69 = v1[40]; /*0x74a84f*/
          v96[0] = v1[39]; /*0x74a852*/
          v70 = v1[41]; /*0x74a856*/
          v96[1] = v69; /*0x74a85b*/
          v96[2] = v70; /*0x74a85f*/
          AnimClass::ctor(v68, *(void **)(v1[65] + 740), v96, 0, 1, (void *)0x600, 0, 0); /*0x74a87f*/
        }
      }
      v71 = Coord::GetCoords((float *)v1 + 44, &v101); /*0x74a88b*/
      for ( i = (int *)*((_DWORD *)Coord::To_Cell(&MapClass_Instance, v71) + 57); i; i = (int *)i[12] ) /*0x74a8a3*/
      {
        v73 = i[39]; /*0x74a8af*/
        v98 = i[40]; /*0x74a8b8*/
        v99 = i[41]; /*0x74a8ca*/
        v74 = Coord::GetCoords((float *)v1 + 44, &v104); /*0x74a8ce*/
        v75 = abs32(*v74 - v73) + abs32(v74[1] - v98); /*0x74a8ee*/
        v76 = v1[65]; /*0x74a8f0*/
        if ( v75 <= v76->q2F4 ) /*0x74a8fc*/
        {
          v77 = *i; /*0x74a904*/
          v81 = v76->q2F8; /*0x74a90e*/
          v78 = ZCoordToScreenY(v75); /*0x74a90f*/
          (*(void (__fastcall **)(int *, _DWORD, int, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD))(v77 + 364))( /*0x74a923*/
            i,
            IDA_HIDWORD(v78),
            v1[65] + 752,
            v78,
            v81,
            0,
            0,
            0,
            0);
        }
      }
    }
  }
  v79 = *v1; /*0x74a934*/
  v80 = Coord::GetCoords((float *)v1 + 44, &v104); /*0x74a941*/
  return v1->SetPosition(v80); /*0x749f7b*/
}
}
// 0x74A970
namespace gamemd {
int VoxelAnimClass::SaveLoad_Prefix(ObjectClass * aP1, int aP1a)
{
  int Register; // edi

  Register = BuildingClass::SaveLoad_Register(this); /*0x74a981*/
  if ( Register >= 0 ) /*0x74a985*/
  {
    if ( aP1 ) /*0x74a989*/
    {
      ObjectClass::Init(aP1, (int)&aP1a); /*0x74a992*/
      *aP1 = (int)&(void*)(void*)&VoxelAnimClass_vftable; /*0x74a997*/
      aP1[1] = (int)&(void*)(void*)&VoxelAnimClass_vftable; /*0x74a99d*/
      aP1[2] = (int)&(void*)(void*)&VoxelAnimClass_vftable; /*0x74a9a4*/
      aP1[3] = (int)&(void*)(void*)&VoxelAnimClass_vftable; /*0x74a9ab*/
    }
    AudioController::Init(aP1 + 69); /*0x74a9b8*/
    AudioController::Init(aP1 + 74); /*0x74a9c3*/
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
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // edx
  int v8; // eax

  HouseClass::ProcessPower(); /*0x74aa39*/
  Power::TimerProcess(*(_DWORD *)(this + 256)); /*0x74aa47*/
  v3 = (*(int (__stdcall **)(int))(*(_DWORD *)(this->q104 + 4) + 16))(this->q104 + 4); /*0x74aa58*/
  Power::TimerProcess(v3); /*0x74aa5e*/
  v4 = this->q108; /*0x74aa63*/
  if ( v4 ) /*0x74aa6b*/
  {
    v5 = (*(int (__stdcall **)(int))(*(_DWORD *)(v4 + 4) + 16))(v4 + 4); /*0x74aa74*/
    Power::TimerProcess(v5); /*0x74aa7a*/
  }
  v6 = (*(int (__stdcall **)(int))(this->q10C->vtable2 + 16))(this->q10C + 4); /*0x74aa8b*/
  Power::TimerProcess(v6); /*0x74aa91*/
  IDA_LOBYTE(v7) = this->q110; /*0x74aa96*/
  v8 = Power::FlagProcess(a2, v7); /*0x74aa9f*/
  IDA_LOBYTE(v8) = this->q13C; /*0x74aaa4*/
  Power::FlagProcess(a2, v8); /*0x74aaad*/
  return Power::TimerProcess(this->q140); /*0x74aac0*/
}
}
// 0x74AB30
namespace gamemd {
int VoxelAnimClass::LoadFrame()
{
  return *(&this->u32_185); /*0x74ab36*/
}
}
// 0x75AA90
namespace gamemd {
int VoxelAnimClass::Reset()
{
  LocomotionClass::Init(); /*0x75aa93*/
  *(_DWORD *)(this + 28) = g_AsyncMovieState; /*0x75aaa1*/
  this->needsSave = g_MovieFrameState1; /*0x75aaaa*/
  this->q024 = g_MovieFrameState2; /*0x75aab6*/
  this->q028 = g_AsyncMovieState; /*0x75aabe*/
  this->q02C = g_MovieFrameState1; /*0x75aac6*/
  this->nextObject = g_MovieFrameState2; /*0x75aace*/
  *(_BYTE *)(this + 52) = 0; /*0x75aad3*/
  *(_BYTE *)(this + 53) = 0; /*0x75aad6*/
  this->IsReallyMoving = 0; /*0x75aad9*/
  this->ptr_38 = 0; /*0x75aadc*/
  *(_DWORD *)this = &(void*)(void*)&WalkLocomotionClass_vftable; /*0x75aadf*/
  this->vtable2 = &(void*)(void*)&WalkLocomotionClass_vftable; /*0x75aae5*/
  this->vtable3 = &(void*)(void*)&WalkLocomotionClass_vftable; /*0x75aaec*/
  return this; /*0x75aaf5*/
}
}
// 0x75EBE0
namespace gamemd {
int VoxelAnimClass::Constructor()
{
  int v2; // eax

  ObjectClass::ctor(); /*0x75ebe4*/
  this->u32_12C = 1; /*0x75ebeb*/
  this->q138 = 0; /*0x75ebf2*/
  this->q140 = 0; /*0x75ebf8*/
  this->q02B = 0; /*0x75ebfe*/
  *(_BYTE *)(this + 301) = 0; /*0x75ec04*/
  *(_DWORD *)(this + 304) = 100; /*0x75ec0a*/
  this->q13C = 0; /*0x75ec14*/
  this->q144 = 0; /*0x75ec1a*/
  this->q148 = 0; /*0x75ec20*/
  this->q14C = 0; /*0x75ec26*/
  this->q1A0 = 0; /*0x75ec2c*/
  this->q1A4 = 0; /*0x75ec32*/
  this->q1A8 = 0; /*0x75ec38*/
  this->q1D0 = 0; /*0x75ec44*/
  this->q1D4 = 0; /*0x75ec4a*/
  FrameSnapshot::Init((_WORD *)(&this->WaveClass_field_1682)); /*0x75ec50*/
  this->q1F4 = 0; /*0x75ec57*/
  this->q1F8 = 5; /*0x75ec5d*/
  this->q1FC = 1; /*0x75ec67*/
  this->q1FD = 0; /*0x75ec6e*/
  this->q1F0 = &(void*)(void*)&VectorClass_CellClass___vftable; /*0x75ec74*/
  this->q1F4 = RA2_OPNEW(0x14u); /*0x75ec83*/
  this->q1FD = 1; /*0x75ec89*/
  this->q1F0 = &(void*)(void*)&DynamicVectorClass_CellClass___vftable; /*0x75ec90*/
  this->q204 = 10; /*0x75ec9a*/
  this->q200 = 0; /*0x75eca4*/
  *(_DWORD *)this = &(void*)(void*)&WaveClass_vftable; /*0x75ecaa*/
  this->vtable2 = &(void*)(void*)&WaveClass_vftable; /*0x75ecb0*/
  this->vtable3 = &(void*)(void*)&WaveClass_vftable; /*0x75ecb7*/
  this->vtable4 = &off_7F6BC8; /*0x75ecbe*/
  if ( dword_A8EC48 < dword_A8EC40 /*0x75ecfb*/
    || (byte_A8EC45 || !dword_A8EC40)
    && dword_A8EC4C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A8EC38 + 8))(
         &dword_A8EC38,
         dword_A8EC40 + dword_A8EC4C,
         0) )
  {
    v2 = dword_A8EC48++; /*0x75ed08*/
    *((_DWORD *)dword_A8EC3C + v2) = this; /*0x75ed17*/
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
  int (__stdcall ***v4)(_DWORD, void *, int *); // eax
  int v5; // esi
  int v6; // eax
  int v7; // edi
  int v8; // [esp+10h] [ebp-8h] BYREF
  int v9; // [esp+14h] [ebp-4h] BYREF

  if ( *(this + 9) > Cell::GetGroundHeight(this + 7) + 120 ) /*0x4d02cc*/
    return 1; /*0x4d02d4*/
  v3 = this->vtable4; /*0x4d02d5*/
  if ( *(_DWORD *)(v3 + 692) && *(_DWORD *)(v3 + 764) ) /*0x4d02e2*/
    return 1; /*0x4d02f2*/
  v4 = (int (__stdcall ***)(_DWORD, void *, int *))this->vtable4; /*0x4d02f3*/
  v8 = 0; /*0x4d02f6*/
  if ( !v4 ) /*0x4d0300*/
    return 0; /*0x4d0300*/
  v5 = (**v4)(v4, &unk_822410, &v9); /*0x4d0311*/
  if ( v5 >= 0 ) /*0x4d0315*/
  {
    v9 = v9; /*0x4d0329*/
    Release3COM(&v8); /*0x4d0331*/
    v6 = v9; /*0x4d0336*/
    v8 = v9; /*0x4d0339*/
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
  if ( !(*(int (__stdcall **)(int))(*(_DWORD *)v6 + 32))(v6) ) /*0x4d0363*/
  {
    if ( v8 ) /*0x4d0378*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v8 + 8))(v8); /*0x4d037d*/
    return 0; /*0x4d0380*/
  }
  if ( v8 ) /*0x4d0367*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v8 + 8))(v8); /*0x4d036c*/
  return 1; /*0x4d02d0*/
}
} // namespace gamemd

// 0x749B20
namespace gamemd {
int VoxelAnimClass::DrawVoxelFrame(int a2, int a3, int a4)
{
  _DWORD *v5; // eax
  _BYTE v9[12]; // [esp+4h] [ebp-Ch] BYREF

  v5 = (_DWORD *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)&this->u32_1C2))(this, v9); /*0x749b2f*/
  if ( (*((_BYTE *)Coord::To_Cell(&MapClass_Instance, v5) + 300) & 0x10) != 0 ) /*0x749b44*/
    this->q080 = 1; /*0x749b46*/
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
  return AbstractClass::SaveLoad_Prefix(aP0, a1, aP2); /*0x74aa24*/
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
VoxelAnimClass * VoxelAnimClass::DrawVoxel(char a2)
{
  VoxelAnimClass::CleanupMembers(); /*0x74ab53*/
  if ( (a2 & 1) != 0 ) /*0x74ab5d*/
    RA2_OPDEL(); /*0x74ab60*/
  return this; /*0x74ab6a*/
}
} // namespace gamemd
