// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/Voxel_e4.hpp"

// 0x4CAF20
namespace gamemd {
unsigned int VoxelAnimClass::ProcessFrame()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  unsigned int result; // eax

  int v0 = 0; /*0x4caf23*/
  _DWORD * v1 = &unk_86D0BC; /*0x4caf25*/
  int v2 = 0x2000; /*0x4caf2a*/
  do /*0x4cb050*/
  {
  double v8; // st7
  double v4; // st7
    double v3 = COERCE_FLOAT((v0 | 0xFE000) << 10); /*0x4caf3d*/
    if ( v3 == 0.0 ) /*0x4caf4c*/
    {
      v4 = 0.0; /*0x4caf50*/
    }
    else
    {
      if ( v3 <= 0.0 ) /*0x4caf63*/
        v3 = v3 * -1.0; /*0x4caf65*/
      float v12 = v3; /*0x4caf6b*/
      unsigned int v5 = (unsigned int)&unk_7FFFFF & LODWORD(v12); /*0x4caf75*/
      int v6 = (LODWORD(v12) >> 23) - 127; /*0x4caf7e*/
      if ( (v6 & 1) != 0 ) /*0x4caf83*/
        v5 |= (unsigned int)&unk_800000; /*0x4caf85*/
      v4 = COERCE_FLOAT(((((__int16)v6 >> 1) + 127) << 23) + dword_8650BC[v5 >> 10]); /*0x4cafa7*/
    }
    float v13 = v4; /*0x4cafab*/
    *(v1 - 0x2000) = (unsigned int)&unk_7FFFFF & LODWORD(v13); /*0x4cafc7*/
    double v7 = COERCE_FLOAT((v0 | 0x100000) << 10); /*0x4cafcd*/
    if ( v7 == 0.0 ) /*0x4cafdc*/
    {
      v8 = 0.0; /*0x4cafe0*/
    }
    else
    {
      if ( v7 <= 0.0 ) /*0x4caff3*/
        v7 = v7 * -1.0; /*0x4caff5*/
      float v14 = v7; /*0x4caffb*/
      unsigned int v9 = (unsigned int)&unk_7FFFFF & LODWORD(v14); /*0x4cb005*/
      int v10 = (LODWORD(v14) >> 23) - 127; /*0x4cb00e*/
      if ( (v10 & 1) != 0 ) /*0x4cb013*/
        v9 |= (unsigned int)&unk_800000; /*0x4cb015*/
      v8 = COERCE_FLOAT(((((__int16)v10 >> 1) + 127) << 23) + dword_8650BC[v9 >> 10]); /*0x4cb037*/
    }
    float v15 = v8; /*0x4cb03b*/
    ++v1; /*0x4cb043*/
    result = (unsigned int)&unk_7FFFFF & LODWORD(v15); /*0x4cb046*/
    ++v0; /*0x4cb04b*/
    *(v1 - 1) = (unsigned int)&unk_7FFFFF & LODWORD(v15); /*0x4cb04c*/
    --v2; /*0x4cb04f*/
  }
  while ( v2 ); /*0x4cb050*/
  return result; /*0x4cb056*/
}
}
} // namespace gamemd

// 0x7499F0
namespace gamemd {
int VoxelAnimClass::CleanupMembers()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  VoxelAnimClass *v6; // [esp+4h] [ebp-4h] BYREF
  *(_DWORD *)this = &VoxelAnimClass::`vftable'; /*0x7499f6*/
  this->VoxelAnimClass_field_0x4 = &VoxelAnimClass::`vftable'; /*0x7499fc*/
  this->VoxelAnimClass_field_0x8 = &VoxelAnimClass::`vftable'; /*0x749a03*/
  this->vtable4 = &vt_VoxelAnimClass; /*0x749a0a*/
  AbstractClass::AnnounceExpiredPointer((void **)this, 1); /*0x749a11*/
  v6 = (VoxelAnimClass *)this; /*0x749a26*/
  int v2 = (*(int (__thiscall **)(int *, VoxelAnimClass **))(VoxelAnimClass_Array + 16))(&VoxelAnimClass_Array, &v6); /*0x749a2a*/
  if ( v2 != -1 && v2 < DataGlobal_887398 && v2 < --DataGlobal_887398 ) /*0x749a45*/
  {
    do /*0x749a5d*/
    {
      ++v2; /*0x749a4d*/
      *((_DWORD *)DataGlobal_88738C + v2 - 1) = *((_DWORD *)DataGlobal_88738C + v2); /*0x749a51*/
    }
    while ( v2 < DataGlobal_887398 ); /*0x749a5d*/
  }
  int v3 = this->VoxelAnimClass_field_0x108; /*0x749a5f*/
  if ( v3 ) /*0x749a67*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 248))(v3); /*0x749a6b*/
    this->VoxelAnimClass_field_0x108 = 0; /*0x749a71*/
  }
  if ( g_WTFMode ) /*0x749a82*/
    ObjectClass::Undeploy(this); /*0x749a86*/
  Mixer::ReleaseChannel((int **)this + 69); /*0x749a95*/
  Mixer::ReleaseChannel((int **)this + 74); /*0x749aa2*/
  AudioFileClass::Release((_DWORD *)this + 69); /*0x749aa9*/
  AudioFileClass::Release((_DWORD *)this + 74); /*0x749ab0*/
  v6 = (VoxelAnimClass *)this; /*0x749ac5*/
  int v4 = (*(int (__thiscall **)(int *, VoxelAnimClass **))(g_AnimPoolManager + 16))(&g_AnimPoolManager, &v6); /*0x749ac9*/
  if ( v4 != -1 && v4 < g_AnimManager && v4 < --g_AnimManager ) /*0x749ae6*/
  {
    do /*0x749afe*/
    {
      ++v4; /*0x749aee*/
      *((_DWORD *)g_AnimPoolCount + v4 - 1) = *((_DWORD *)g_AnimPoolCount + v4); /*0x749af2*/
    }
    while ( v4 < g_AnimManager ); /*0x749afe*/
  }
  this->VoxelAnimClass_field_0x104 = 0; /*0x749b02*/
  return ObjectClass::Dtor(this); /*0x749b11*/
}
}
} // namespace gamemd

// 0x749B70
namespace gamemd {
Coord * VoxelAnimClass::ProcessAnim(int * a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  __int16 *v12; // eax
  int *SHPFrame; // [esp-1Ch] [ebp-CCh]
  int GroundHeight; // [esp+28h] [ebp-88h]

  if ( (*(_DWORD *)g_ScenarioClass_Instance & 0x1000) == 0 /*0x749bb6*/
  int v27; // [esp+14h] [ebp-9Ch]
  int v4; // eax
  int v25; // [esp+Ch] [ebp-A4h] BYREF
  int v26; // [esp+10h] [ebp-A0h]
    || (v25 = this->q027, v26 = this->q028, v27 = this->q029, LOBYTE(v4) = Game::Stub3((int)&v25), !(_BYTE)v4) )
  {
  int v36[2]; // [esp+38h] [ebp-78h] BYREF
  int v33; // [esp+2Ch] [ebp-84h]
    int v5 = a2[1]; /*0x749bcb*/
    int v34 = *a2; /*0x749bd0*/
    int v35 = v5; /*0x749bd4*/
    int v30 = this->q027; /*0x749bda*/
    int v31 = this->q028; /*0x749beb*/
    GroundHeight = this->q029; /*0x749bf2*/
    GroundHeight = Cell::GetGroundHeight(&v30); /*0x749c05*/
    if ( (*((_DWORD *)Coord::To_Cell(&DataGlobal_87F7E8, &v30) + 80) & 0x100) == 0 ) /*0x749c1b*/
      goto LABEL_6; /*0x749c1b*/
    v25 = this->q027; /*0x749c1f*/
    v26 = this->q028; /*0x749c26*/
    if ( this->q029 >= DataGlobal_B1D1BC + GroundHeight ) /*0x749c38*/
    {
      v33 = DataGlobal_B1D1BC + GroundHeight; /*0x749c3e*/
      v27 = DataGlobal_B1D1BC + GroundHeight + 1; /*0x749c4a*/
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
    LOBYTE(v4) = this->q13C; /*0x749c7b*/
    if ( !(_BYTE)v4 ) /*0x749c83*/
    {
      v4 = this->q104; /*0x749c89*/
      _DWORD * v6 = *(_DWORD **)(v4 + 176); /*0x749c8f*/
      if ( v6 ) /*0x749c97*/
      {
  _DWORD *v15; // esi
  float v38[12]; // [esp+50h] [ebp-60h] BYREF
  float v39[12]; // [esp+80h] [ebp-30h] BYREF
        qmemcpy(v38, VoxelAnimClass::QuaternionToMatrix((float *)this + 44, v39), sizeof(v38)); /*0x749cbc*/
        Viewport::Clear(); /*0x749cbe*/
        globalHelper_053F90( /*0x749ce8*/
          v6,
          *(_DWORD *)(this->q104 + 664),
          0,
          DataGlobal_887430,
          v38,
          (float *)&DataGlobal_887420,
          0,
          0,
          0);
  int v28; // [esp+18h] [ebp-98h] BYREF
  int v29; // [esp+1Ch] [ebp-94h] BYREF
  int v37[4]; // [esp+40h] [ebp-70h] BYREF
        InitializeAudioOcclusion(v37, &v29, &v28); /*0x749cfa*/
        v25 = v36[0] + v29; /*0x749d15*/
        v26 = v28 + v36[1]; /*0x749d26*/
        int v22 = -4 - ZCoordToScreenY(v33); /*0x749d36*/
        SHPFrame = (int *)BuildingClass::GetSHPFrame((_DWORD *)DataGlobal_87F6B4, 8193); /*0x749d4e*/
        int * v7 = Miles::DriverGet(); /*0x749d5c*/
        BlitterDrawSHP((int *)g_DSurface_Hidden_2, DataGlobal_87F6B4, v7, v37, &v25, a3, 0, SHPFrame, v22, 0, 1000, 0, 0); /*0x749d6e*/
        qmemcpy(v38, VoxelAnimClass::QuaternionToMatrix((float *)this + 44, v39), sizeof(v38)); /*0x749d95*/
        globalHelper_053C80(v6, 0, 0, v38, (float *)&DataGlobal_887470); /*0x749da3*/
        Viewport::Clear(); /*0x749da8*/
        float * v8 = MultiplyMatrix3x4(v39, DataGlobal_887430, v38); /*0x749dbe*/
        TransformVoxelVertex(v6, *(_DWORD *)(this->q104 + 664), 0, v8); /*0x749dd4*/
        InitializeAudioOcclusion(v37, &v29, &v28); /*0x749de6*/
        int v9 = 10240; /*0x749df1*/
        if ( *(_BYTE *)(this->q104 + 661) ) /*0x749df6*/
          v9 = 10244; /*0x749e00*/
        int v10 = this->q029; /*0x749e0b*/
        int v11 = this->q028; /*0x749e11*/
        v25 = this->q027; /*0x749e17*/
        v27 = v10; /*0x749e1f*/
        v26 = v11; /*0x749e29*/
        v12 = (__int16 *)Coord::To_Cell(&DataGlobal_87F7E8, &v25); /*0x749e2d*/
        bool v13 = this->q043; /*0x749e32*/
        int v14 = v12[133]; /*0x749e38*/
        if ( v13 ) /*0x749e41*/
        {
          v15 = *(_DWORD **)(*((_DWORD *)BuildingTypeClass_AnimTable + *(_DWORD *)(v13 + 90196)) + 780); /*0x749e52*/
        }
        else if ( *(_BYTE *)(this->q104 + 768) ) /*0x749e60*/
        {
          v15 = (_DWORD *)FileSystem_GRFTXT_TIBERIUM_PAL; /*0x749e6a*/
        }
        else
        {
          v15 = (_DWORD *)DataGlobal_87F6B4; /*0x749e72*/
          v14 = 1000; /*0x749e78*/
        }
        v25 = v29 + v34; /*0x749e8b*/
        int v24 = v14; /*0x749e97*/
        int v16 = *this; /*0x749e98*/
        v26 = v28 + v35; /*0x749ea0*/
        int v17 = this->GetMember41(); /*0x749ea4*/
        int v23 = -2 - ZCoordToScreenY(v17); /*0x749eb8*/
        int * v21 = (int *)BuildingClass::GetSHPFrame(v15, v9); /*0x749ec8*/
        int * v18 = Miles::DriverGet(); /*0x749ed6*/
        LOBYTE(v4) = BlitterDrawSHP((int *)g_DSurface_Hidden_2, (int)v15, v18, v37, &v25, a3, 0, v21, v23, 0, v24, 0, 0); /*0x749ee4*/
      }
    }
  }
  return v4; /*0x749eea*/
}
}
} // namespace gamemd

// 0x749F30
namespace gamemd {
void VoxelAnimClass_Update()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (no pseudocode — ASM-only function)
}
} // namespace gamemd

// 0x74A970
namespace gamemd {
int VoxelAnimClass::SaveLoad_Prefix(ObjectClass * aP1, int aP1a)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  ObjectClass *Register; // edi

  Register = (ObjectClass *)BuildingClass::SaveLoad_Register((#374 *)this); /*0x74a981*/
  if ( (int)Register >= 0 ) /*0x74a985*/
  {
    if ( aP1 ) /*0x74a989*/
    {
      ObjectClass::Init(aP1, (AbstractClass *)&aP1a); /*0x74a992*/
      *(_DWORD *)aP1->__pad_0 = &VoxelAnimClass::`vftable'; /*0x74a997*/
      *(_DWORD *)&aP1->__pad_0[4] = &VoxelAnimClass::`vftable'; /*0x74a99d*/
      *(_DWORD *)&aP1->__pad_0[8] = &VoxelAnimClass::`vftable'; /*0x74a9a4*/
      *(_DWORD *)&aP1->__pad_0[12] = &vt_VoxelAnimClass; /*0x74a9ab*/
    }
    AudioController::Init(&aP1[1].bombVisible); /*0x74a9b8*/
    AudioController::Init(&aP1[1].visibilityFlags); /*0x74a9c3*/
    ObjectPtr::RegisterForTracking( /*0x74a9d4*/
      (SwizzleManagerClass *)&stru_B05488[27784],
      (MouseClass *)&aP1[1].customSound_controller[2]);
    ObjectPtr::RegisterForTracking( /*0x74a9e5*/
      (SwizzleManagerClass *)&stru_B05488[27784],
      (MouseClass *)&aP1[1].customSound_controller[3]);
    ObjectPtr::RegisterForTracking( /*0x74a9f6*/
      (SwizzleManagerClass *)&stru_B05488[27784],
      (MouseClass *)&aP1[1].customSound_controller[4]);
  }
  return (int)Register->__pad_0; /*0x74a9fd*/
}
}
} // namespace gamemd

// 0x74AA30
namespace gamemd {
AbstractClass * VoxelAnimClass::GetFrameCount(int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  HouseClass::ProcessPower((#374 *)this); /*0x74aa39*/
  Power::TimerProcess(this->VoxelAnimClass_field_0x100); /*0x74aa47*/
  int v3 = (*(int (__stdcall **)(int))(*(_DWORD *)(this->VoxelAnimClass_field_0x104 + 4) + 16))(this->VoxelAnimClass_field_0x104 + 4); /*0x74aa58*/
  Power::TimerProcess(v3); /*0x74aa5e*/
  int v4 = this->VoxelAnimClass_field_0x108; /*0x74aa63*/
  if ( v4 ) /*0x74aa6b*/
  {
    int v5 = (*(int (__stdcall **)(int))(*(_DWORD *)(v4 + 4) + 16))(v4 + 4); /*0x74aa74*/
    Power::TimerProcess(v5); /*0x74aa7a*/
  }
  int v6 = (*(int (__stdcall **)(int))(*(_DWORD *)(this->VoxelAnimClass_field_0x10C + 4) + 16))(this->VoxelAnimClass_field_0x10C + 4); /*0x74aa8b*/
  Power::TimerProcess(v6); /*0x74aa91*/
  int v7; // edx
  LOBYTE(v7) = this->q110; /*0x74aa96*/
  int v8 = Power::FlagProcess(a2, v7); /*0x74aa9f*/
  LOBYTE(v8) = this->q13C; /*0x74aaa4*/
  Power::FlagProcess(a2, v8); /*0x74aaad*/
  return Power::TimerProcess(this->VoxelAnimClass_field_0x140); /*0x74aac0*/
}
}
} // namespace gamemd

// 0x74AB30
namespace gamemd {
int VoxelAnimClass::LoadFrame()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  return this->q104; /*0x74ab36*/
}
}
} // namespace gamemd

// 0x75AA90
namespace gamemd {
int VoxelAnimClass::Reset()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  LocomotionClass::Init((_DWORD *)this); /*0x75aa93*/
  this->VoxelAnimClass_field_0x1C = g_AsyncMovieState; /*0x75aaa1*/
  this->needsSave = g_MovieFrameState1; /*0x75aaaa*/
  this->q024 = g_MovieFrameState2; /*0x75aab6*/
  this->q028 = g_AsyncMovieState; /*0x75aabe*/
  this->q02C = g_MovieFrameState1; /*0x75aac6*/
  this->nextObject = g_MovieFrameState2; /*0x75aace*/
  this->attachedTag = 0; /*0x75aad3*/
  this->q0D4 = 0; /*0x75aad6*/
  this->q0D8 = 0; /*0x75aad9*/
  this->q038 = 0; /*0x75aadc*/
  *(_DWORD *)this = &WalkLocomotionClass::`vftable'; /*0x75aadf*/
  this->VoxelAnimClass_field_0x4 = &WalkLocomotionClass::`vftable'; /*0x75aae5*/
  this->nextArrayIndex = &vt_WalkLocomotionClass; /*0x75aaec*/
  return this; /*0x75aaf5*/
}
}
} // namespace gamemd

// 0x75EBE0
namespace gamemd {
int VoxelAnimClass::Constructor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  ObjectClass::ctor((_DWORD *)this); /*0x75ebe4*/
  this->q12C = 1; /*0x75ebeb*/
  this->q138 = 0; /*0x75ebf2*/
  this->VoxelAnimClass_field_0x140 = 0; /*0x75ebf8*/
  this->q0AC = 0; /*0x75ebfe*/
  this->q12D = 0; /*0x75ec04*/
  this->q130 = 100; /*0x75ec0a*/
  this->q13C = 0; /*0x75ec14*/
  this->q144 = 0; /*0x75ec1a*/
  this->q148 = 0; /*0x75ec20*/
  this->q053 = 0; /*0x75ec26*/
  this->bombVisible = 0; /*0x75ec2c*/
  this->alignmentPadding69 = 0; /*0x75ec32*/
  this->q06A = 0; /*0x75ec38*/
  this->isOnMap = 0; /*0x75ec44*/
  this->Audio4 = 0; /*0x75ec4a*/
  FrameSnapshot::Init((_WORD *)(this + 472)); /*0x75ec50*/
  *(_DWORD *)(this + 500) = 0; /*0x75ec57*/
  *(_DWORD *)(this + 504) = 5; /*0x75ec5d*/
  *(_BYTE *)(this + 508) = 1; /*0x75ec67*/
  *(_BYTE *)(this + 509) = 0; /*0x75ec6e*/
  this->q7C0 = &vt_VectorClass_CellClass; /*0x75ec74*/
  *(_DWORD *)(this + 500) = __2_YAPAXI_Z(0x14u); /*0x75ec83*/
  *(_BYTE *)(this + 509) = 1; /*0x75ec89*/
  this->q7C0 = &vt_DynamicVectorClass_CellClass; /*0x75ec90*/
  this->q081 = 10; /*0x75ec9a*/
  this->q200 = 0; /*0x75eca4*/
  *(_DWORD *)this = &WaveClass::`vftable'; /*0x75ecaa*/
  this->VoxelAnimClass_field_0x4 = &WaveClass::`vftable'; /*0x75ecb0*/
  this->VoxelAnimClass_field_0x8 = &vt_WaveClass; /*0x75ecb7*/
  this->vtable4 = &off_7F6BC8; /*0x75ecbe*/
  if ( DataGlobal_A8EC48 < DataGlobal_A8EC40 /*0x75ecfb*/
    || (DataGlobal_A8EC45 || !DataGlobal_A8EC40)
    && DataGlobal_A8EC4C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(DataGlobal_A8EC38 + 8))(
         &DataGlobal_A8EC38,
         DataGlobal_A8EC40 + DataGlobal_A8EC4C,
         0) )
  {
    int v2 = DataGlobal_A8EC48++; /*0x75ed08*/
    *((_DWORD *)DataGlobal_A8EC3C + v2) = this; /*0x75ed17*/
  }
  if ( !byte_B725CC ) /*0x75ed20*/
    Voxel::InitDistanceTable(); /*0x75ed22*/
  return this; /*0x75ed29*/
}
}
} // namespace gamemd

// 0x4399E0
namespace gamemd {
float * VoxelAnimClass::QuaternionToMatrix(float * a2)
{
{
    float *v2;
    float v4[12];
    v2 = ToQuaternionMatrix(v4, this + 12);
    qmemcpy(a2, v2, 0x30u);
    return a2;
}
}
} // namespace gamemd

// 0x4D02B0
namespace gamemd {
char VoxelAnimClass::UpdateMatrix()
{
{
    int v3;
    int (__stdcall ***v4)(int, void *, int *);
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    if ( this->objectTypeFlags > Cell::GetGroundHeight(this + 7) + 120 )
    return 1;
    v3 = this->vtable3;
    if ( *(int *)(v3 + 692) && *(int *)(v3 + 764) )
    return 1;
    v4 = (int (__stdcall ***)(int, void *, int *))this->vtable3;
    v8 = 0;
    if ( !v4 )
    return 0;
    v5 = (**v4)(v4, &DataGlobal_822410, &v9);
    if ( v5 >= 0 )
  {
    v7 = v9;
    Release3COM(&v8);
    v6 = v7;
    v8 = v7;
  }
    else
  {
    Release3COM(&v8);
    v6 = 0;
    v8 = 0;
  }
    if ( v5 < 0 && v5 != -2147467262 )
    WinAPI::Wrapper(v5);
    if ( !v6 )
    return 0;
    if ( !(*(int (__stdcall **)(int))(*(int *)(v6) + 32))(v6) )
  {
    if ( v8 )
    (*(void (__stdcall **)(int))(*(int *)(v8) + 8))(v8);
    return 0;
  }
    if ( v8 )
    (*(void (__stdcall **)(int))(*(int *)(v8) + 8))(v8);
    return 1;
}
}
} // namespace gamemd

// 0x749B20
namespace gamemd {
int VoxelAnimClass::DrawVoxelFrame(int a2, int a3, int a4)
{
{
    int *v5;
    char v7[12];
    v5 = (int *)this->GetCoords(v7);
    if ( (*((char *)Coord::To_Cell(&DataGlobal_87F7E8, v5) + 300) & 0x10) != 0 )
    this->needsRedraw = 1;
    return ObjectClass::CalcDrawRect(this);
}
}
} // namespace gamemd

// 0x74A960
namespace gamemd {
int VoxelAnimClass::StubReturn3()
{
return 3;
}
} // namespace gamemd

// 0x74AA10
namespace gamemd {
int VoxelAnimClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    return AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
}
}
} // namespace gamemd

// 0x74AAD0
namespace gamemd {
int VoxelAnimClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 237448641;
  a2[1] = 298949647;
  a2[2] = -1610610249;
  a2[3] = -777003740;
  return 0;
}
} // namespace gamemd

// 0x74AB10
namespace gamemd {
int VoxelAnimClass::StubReturn328()
{
return 328;
}
} // namespace gamemd

// 0x74AB20
namespace gamemd {
int VoxelAnimClass::StubReturn41()
{
return 41;
}
} // namespace gamemd

// 0x74AB40
namespace gamemd {
int VoxelAnimClass::StubReturnFalse(int a1)
{
return 0;
}
} // namespace gamemd

// 0x74AB50
namespace gamemd {
VoxelAnimClass * VoxelAnimClass::DrawVoxel(char a2)
{
{
    VoxelAnimClass::CleanupMembers(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (VoxelAnimClass *)this;
}
}
} // namespace gamemd
