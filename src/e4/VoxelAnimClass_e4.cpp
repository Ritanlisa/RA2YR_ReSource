// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x4399E0
namespace gamemd {
float * VoxelAnimClass::QuaternionToMatrix(float * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
float *__thiscall sub_4399E0(float *this, float *a2)
{
  float *v2; // esi
  float v4[12]; // [esp+8h] [ebp-30h] BYREF

  v2 = ToQuaternionMatrix(v4, this + 12); /*0x4399f1*/
  qmemcpy(a2, v2, 0x30u); /*0x4399fe*/
  return a2; /*0x439a00*/
}
}
} // namespace gamemd

// 0x4CAF20
namespace gamemd {
unsigned int VoxelAnimClass::ProcessFrame()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int sub_4CAF20()
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
      v5 = (unsigned int)&unk_7FFFFF & LODWORD(v12); /*0x4caf75*/
      v6 = (LODWORD(v12) >> 23) - 127; /*0x4caf7e*/
      if ( (v6 & 1) != 0 ) /*0x4caf83*/
        v5 |= (unsigned int)&unk_800000; /*0x4caf85*/
      v4 = COERCE_FLOAT(((((__int16)v6 >> 1) + 127) << 23) + dword_8650BC[v5 >> 10]); /*0x4cafa7*/
    }
    v13 = v4; /*0x4cafab*/
    *(v1 - 0x2000) = (unsigned int)&unk_7FFFFF & LODWORD(v13); /*0x4cafc7*/
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
      v9 = (unsigned int)&unk_7FFFFF & LODWORD(v14); /*0x4cb005*/
      v10 = (LODWORD(v14) >> 23) - 127; /*0x4cb00e*/
      if ( (v10 & 1) != 0 ) /*0x4cb013*/
        v9 |= (unsigned int)&unk_800000; /*0x4cb015*/
      v8 = COERCE_FLOAT(((((__int16)v10 >> 1) + 127) << 23) + dword_8650BC[v9 >> 10]); /*0x4cb037*/
    }
    v15 = v8; /*0x4cb03b*/
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

// 0x4D02B0
namespace gamemd {
char VoxelAnimClass::UpdateMatrix()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_4D02B0(_DWORD *this)
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
  v3 = *(this + 3); /*0x4d02d5*/
  if ( *(_DWORD *)(v3 + 692) && *(_DWORD *)(v3 + 764) ) /*0x4d02e2*/
    return 1; /*0x4d02f2*/
  v4 = (int (__stdcall ***)(_DWORD, void *, int *))*(this + 3); /*0x4d02f3*/
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
}
} // namespace gamemd

// 0x7499F0
namespace gamemd {
int VoxelAnimClass::CleanupMembers()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall VoxelAnimClass::CleanupMembers(#374 *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  VoxelAnimClass *v6; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)this = &VoxelAnimClass::`vftable'; /*0x7499f6*/
  this->VoxelAnimClass_field_0x4 = &VoxelAnimClass::`vftable'; /*0x7499fc*/
  this->VoxelAnimClass_field_0x8 = &VoxelAnimClass::`vftable'; /*0x749a03*/
  *((_DWORD *)this + 3) = &vt_VoxelAnimClass; /*0x749a0a*/
  AbstractClass::AnnounceExpiredPointer((void **)this, 1); /*0x749a11*/
  v6 = (VoxelAnimClass *)this; /*0x749a26*/
  v2 = (*(int (__thiscall **)(int *, VoxelAnimClass **))(MEMORY[0x887388] + 16))(&MEMORY[0x887388], &v6); /*0x749a2a*/
  if ( v2 != -1 && v2 < MEMORY[0x887398] && v2 < --MEMORY[0x887398] ) /*0x749a45*/
  {
    do /*0x749a5d*/
    {
      ++v2; /*0x749a4d*/
      *((_DWORD *)MEMORY[0x88738C] + v2 - 1) = *((_DWORD *)MEMORY[0x88738C] + v2); /*0x749a51*/
    }
    while ( v2 < MEMORY[0x887398] ); /*0x749a5d*/
  }
  v3 = this->VoxelAnimClass_field_0x108; /*0x749a5f*/
  if ( v3 ) /*0x749a67*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 248))(v3); /*0x749a6b*/
    this->VoxelAnimClass_field_0x108 = 0; /*0x749a71*/
  }
  if ( MEMORY[0xA8E9A0] ) /*0x749a82*/
    ObjectClass::Undeploy(this); /*0x749a86*/
  Mixer::ReleaseChannel((int **)this + 69); /*0x749a95*/
  Mixer::ReleaseChannel((int **)this + 74); /*0x749aa2*/
  AudioFileClass::Release((_DWORD *)this + 69); /*0x749aa9*/
  AudioFileClass::Release((_DWORD *)this + 74); /*0x749ab0*/
  v6 = (VoxelAnimClass *)this; /*0x749ac5*/
  v4 = (*(int (__thiscall **)(int *, VoxelAnimClass **))(MEMORY[0xB0F670] + 16))(&MEMORY[0xB0F670], &v6); /*0x749ac9*/
  if ( v4 != -1 && v4 < MEMORY[0xB0F680] && v4 < --MEMORY[0xB0F680] ) /*0x749ae6*/
  {
    do /*0x749afe*/
    {
      ++v4; /*0x749aee*/
      *((_DWORD *)MEMORY[0xB0F674] + v4 - 1) = *((_DWORD *)MEMORY[0xB0F674] + v4); /*0x749af2*/
    }
    while ( v4 < MEMORY[0xB0F680] ); /*0x749afe*/
  }
  this->VoxelAnimClass_field_0x104 = 0; /*0x749b02*/
  return ObjectClass::Dtor(this); /*0x749b11*/
}
}
} // namespace gamemd

// 0x749B20
namespace gamemd {
int VoxelAnimClass::DrawVoxelFrame(int a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall VoxelAnimClass::DrawVoxelFrame(#374 *this, int a2, int a3, int a4)
{
  _DWORD *v5; // eax
  _BYTE v7[12]; // [esp+4h] [ebp-Ch] BYREF

  v5 = (_DWORD *)(*(int (__thiscall **)(#374 *, _BYTE *))(*(_DWORD *)this + 72))(this, v7); /*0x749b2f*/
  if ( (*((_BYTE *)Coord::To_Cell(&MEMORY[0x87F7E8], v5) + 300) & 0x10) != 0 ) /*0x749b44*/
    *((_BYTE *)this + 128) = 1; /*0x749b46*/
  return ObjectClass::CalcDrawRect(this); /*0x749b60*/
}
}
} // namespace gamemd

// 0x749B70
namespace gamemd {
char VoxelAnimClass::ProcessAnim(int * a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall VoxelAnimClass::_vt69(int *this, int *a2, _DWORD *a3)
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
  int v24; // [esp-10h] [ebp-C0h]
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
  int v35; // [esp+34h] [ebp-7Ch]
  int v36[2]; // [esp+38h] [ebp-78h] BYREF
  int v37[4]; // [esp+40h] [ebp-70h] BYREF
  float v38[12]; // [esp+50h] [ebp-60h] BYREF
  float v39[12]; // [esp+80h] [ebp-30h] BYREF

  if ( (*(_DWORD *)MEMORY[0xA8B230] & 0x1000) == 0 /*0x749bb6*/
    || (v25 = *(this + 39), v26 = *(this + 40), v27 = *(this + 41), LOBYTE(v4) = Game::Stub3((int)&v25), !(_BYTE)v4) )
  {
    v5 = a2[1]; /*0x749bcb*/
    v34 = *a2; /*0x749bd0*/
    v35 = v5; /*0x749bd4*/
    v30 = *(this + 39); /*0x749bda*/
    v31 = *(this + 40); /*0x749beb*/
    GroundHeight = *(this + 41); /*0x749bf2*/
    GroundHeight = Cell::GetGroundHeight(&v30); /*0x749c05*/
    if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &v30) + 80) & 0x100) == 0 ) /*0x749c1b*/
      goto LABEL_6; /*0x749c1b*/
    v25 = *(this + 39); /*0x749c1f*/
    v26 = *(this + 40); /*0x749c26*/
    if ( *(this + 41) >= MEMORY[0xB1D1BC] + GroundHeight ) /*0x749c38*/
    {
      v33 = MEMORY[0xB1D1BC] + GroundHeight; /*0x749c3e*/
      v27 = MEMORY[0xB1D1BC] + GroundHeight + 1; /*0x749c4a*/
      v25 = v30; /*0x749c4e*/
      v26 = v31; /*0x749c5b*/
      Coord::To_Screen(MEMORY[0x887324], &v25, v36); /*0x749c60*/
    }
    else
    {
LABEL_6:
      v33 = GroundHeight; /*0x749c62*/
      Coord::To_Screen(MEMORY[0x887324], &v30, v36); /*0x749c76*/
    }
    LOBYTE(v4) = *((_BYTE *)this + 316); /*0x749c7b*/
    if ( !(_BYTE)v4 ) /*0x749c83*/
    {
      v4 = *(this + 65); /*0x749c89*/
      v6 = *(_DWORD **)(v4 + 176); /*0x749c8f*/
      if ( v6 ) /*0x749c97*/
      {
        qmemcpy(v38, VoxelAnimClass::QuaternionToMatrix((float *)this + 44, v39), sizeof(v38)); /*0x749cbc*/
        Viewport::Clear(); /*0x749cbe*/
        globalHelper_053F90( /*0x749ce8*/
          v6,
          *(_DWORD *)(*(this + 65) + 664),
          0,
          MEMORY[0x887430],
          v38,
          (float *)&MEMORY[0x887420],
          0,
          0,
          0);
        InitializeAudioOcclusion(v37, &v29, &v28); /*0x749cfa*/
        v25 = v36[0] + v29; /*0x749d15*/
        v26 = v28 + v36[1]; /*0x749d26*/
        v22 = -4 - ZCoordToScreenY(v33); /*0x749d36*/
        SHPFrame = (int *)BuildingClass::GetSHPFrame((_DWORD *)MEMORY[0x87F6B4], 8193); /*0x749d4e*/
        v7 = Miles::DriverGet(); /*0x749d5c*/
        BlitterDrawSHP((int *)MEMORY[0x887314], MEMORY[0x87F6B4], v7, v37, &v25, a3, 0, SHPFrame, v22, 0, 1000, 0, 0); /*0x749d6e*/
        qmemcpy(v38, VoxelAnimClass::QuaternionToMatrix((float *)this + 44, v39), sizeof(v38)); /*0x749d95*/
        globalHelper_053C80(v6, 0, 0, v38, (float *)&MEMORY[0x887470]); /*0x749da3*/
        Viewport::Clear(); /*0x749da8*/
        v8 = MultiplyMatrix3x4(v39, MEMORY[0x887430], v38); /*0x749dbe*/
        TransformVoxelVertex(v6, *(_DWORD *)(*(this + 65) + 664), 0, v8); /*0x749dd4*/
        InitializeAudioOcclusion(v37, &v29, &v28); /*0x749de6*/
        v9 = 10240; /*0x749df1*/
        if ( *(_BYTE *)(*(this + 65) + 661) ) /*0x749df6*/
          v9 = 10244; /*0x749e00*/
        v10 = *(this + 41); /*0x749e0b*/
        v11 = *(this + 40); /*0x749e11*/
        v25 = *(this + 39); /*0x749e17*/
        v27 = v10; /*0x749e1f*/
        v26 = v11; /*0x749e29*/
        v12 = (__int16 *)Coord::To_Cell(&MEMORY[0x87F7E8], &v25); /*0x749e2d*/
        v13 = *(this + 67); /*0x749e32*/
        v14 = v12[133]; /*0x749e38*/
        if ( v13 ) /*0x749e41*/
        {
          v15 = *(_DWORD **)(*((_DWORD *)MEMORY[0xB054D4] + *(_DWORD *)(v13 + 90196)) + 780); /*0x749e52*/
        }
        else if ( *(_BYTE *)(*(this + 65) + 768) ) /*0x749e60*/
        {
          v15 = (_DWORD *)MEMORY[0x87F6BC]; /*0x749e6a*/
        }
        else
        {
          v15 = (_DWORD *)MEMORY[0x87F6B4]; /*0x749e72*/
          v14 = 1000; /*0x749e78*/
        }
        v25 = v29 + v34; /*0x749e8b*/
        v24 = v14; /*0x749e97*/
        v16 = *this; /*0x749e98*/
        v26 = v28 + v35; /*0x749ea0*/
        v17 = (*(int (__thiscall **)(int *))(v16 + 464))(this); /*0x749ea4*/
        v23 = -2 - ZCoordToScreenY(v17); /*0x749eb8*/
        v21 = (int *)BuildingClass::GetSHPFrame(v15, v9); /*0x749ec8*/
        v18 = Miles::DriverGet(); /*0x749ed6*/
        LOBYTE(v4) = BlitterDrawSHP((int *)MEMORY[0x887314], (int)v15, v18, v37, &v25, a3, 0, v21, v23, 0, v24, 0, 0); /*0x749ee4*/
      }
    }
  }
  return v4; /*0x749eea*/
}
}
} // namespace gamemd

// 0x749F30
namespace gamemd {
int VoxelAnimClass_Update()
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
int __thiscall VoxelAnimClass::SaveLoad_Prefix(void *this, ObjectClass *aP1, int aP1a)
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
} // namespace gamemd

// 0x74AA30
namespace gamemd {
int VoxelAnimClass::GetFrameCount(int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall VoxelAnimClass::_vt13(int this, int *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // edx
  int v8; // eax

  HouseClass::ProcessPower((#374 *)this); /*0x74aa39*/
  Power::TimerProcess(this->VoxelAnimClass_field_0x100); /*0x74aa47*/
  v3 = (*(int (__stdcall **)(int))(*(_DWORD *)(this->VoxelAnimClass_field_0x104 + 4) + 16))(this->VoxelAnimClass_field_0x104 + 4); /*0x74aa58*/
  Power::TimerProcess(v3); /*0x74aa5e*/
  v4 = this->VoxelAnimClass_field_0x108; /*0x74aa63*/
  if ( v4 ) /*0x74aa6b*/
  {
    v5 = (*(int (__stdcall **)(int))(*(_DWORD *)(v4 + 4) + 16))(v4 + 4); /*0x74aa74*/
    Power::TimerProcess(v5); /*0x74aa7a*/
  }
  v6 = (*(int (__stdcall **)(int))(*(_DWORD *)(this->VoxelAnimClass_field_0x10C + 4) + 16))(this->VoxelAnimClass_field_0x10C + 4); /*0x74aa8b*/
  Power::TimerProcess(v6); /*0x74aa91*/
  LOBYTE(v7) = *(_BYTE *)(this + 272); /*0x74aa96*/
  v8 = Power::FlagProcess(a2, v7); /*0x74aa9f*/
  LOBYTE(v8) = *(_BYTE *)(this + 316); /*0x74aaa4*/
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
int __thiscall VoxelAnimClass::_vt34(_DWORD *this)
{
  return *(this + 65); /*0x74ab36*/
}
}
} // namespace gamemd

// 0x74AB50
namespace gamemd {
VoxelAnimClass * VoxelAnimClass::DrawVoxel(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
VoxelAnimClass *__thiscall VoxelAnimClass::DrawVoxel(#374 *this, char a2)
{
  VoxelAnimClass::CleanupMembers(this); /*0x74ab53*/
  if ( (a2 & 1) != 0 ) /*0x74ab5d*/
    __3_YAXPAX_Z(this); /*0x74ab60*/
  return (VoxelAnimClass *)this; /*0x74ab6a*/
}
}
} // namespace gamemd

// 0x75AA90
namespace gamemd {
int VoxelAnimClass::Reset()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_75AA90(int this)
{
  LocomotionClass::Init((_DWORD *)this); /*0x75aa93*/
  this->VoxelAnimClass_field_0x1C = g_AsyncMovieState; /*0x75aaa1*/
  *(_DWORD *)(this + 32) = MEMORY[0xB45BEC]; /*0x75aaaa*/
  *(_DWORD *)(this + 36) = MEMORY[0xB45BF0]; /*0x75aab6*/
  *(_DWORD *)(this + 40) = g_AsyncMovieState; /*0x75aabe*/
  *(_DWORD *)(this + 44) = MEMORY[0xB45BEC]; /*0x75aac6*/
  *(_DWORD *)(this + 48) = MEMORY[0xB45BF0]; /*0x75aace*/
  *(_BYTE *)(this + 52) = 0; /*0x75aad3*/
  *(_BYTE *)(this + 53) = 0; /*0x75aad6*/
  *(_BYTE *)(this + 54) = 0; /*0x75aad9*/
  *(_DWORD *)(this + 56) = 0; /*0x75aadc*/
  *(_DWORD *)this = &WalkLocomotionClass::`vftable'; /*0x75aadf*/
  this->VoxelAnimClass_field_0x4 = &WalkLocomotionClass::`vftable'; /*0x75aae5*/
  *(_DWORD *)(this + 24) = &vt_WalkLocomotionClass; /*0x75aaec*/
  return this; /*0x75aaf5*/
}
}
} // namespace gamemd

// 0x75EBE0
namespace gamemd {
int VoxelAnimClass::Constructor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_75EBE0(int this)
{
  int v2; // eax

  ObjectClass::ctor((_DWORD *)this); /*0x75ebe4*/
  *(_BYTE *)(this + 300) = 1; /*0x75ebeb*/
  *(_DWORD *)(this + 312) = 0; /*0x75ebf2*/
  this->VoxelAnimClass_field_0x140 = 0; /*0x75ebf8*/
  *(_DWORD *)(this + 172) = 0; /*0x75ebfe*/
  *(_BYTE *)(this + 301) = 0; /*0x75ec04*/
  *(_DWORD *)(this + 304) = 100; /*0x75ec0a*/
  *(_DWORD *)(this + 316) = 0; /*0x75ec14*/
  *(_DWORD *)(this + 324) = 0; /*0x75ec1a*/
  *(_DWORD *)(this + 328) = 0; /*0x75ec20*/
  *(_DWORD *)(this + 332) = 0; /*0x75ec26*/
  *(_DWORD *)(this + 416) = 0; /*0x75ec2c*/
  *(_DWORD *)(this + 420) = 0; /*0x75ec32*/
  *(_DWORD *)(this + 424) = 0; /*0x75ec38*/
  *(_DWORD *)(this + 464) = 0; /*0x75ec44*/
  *(_DWORD *)(this + 468) = 0; /*0x75ec4a*/
  FrameSnapshot::Init((_WORD *)(this + 472)); /*0x75ec50*/
  *(_DWORD *)(this + 500) = 0; /*0x75ec57*/
  *(_DWORD *)(this + 504) = 5; /*0x75ec5d*/
  *(_BYTE *)(this + 508) = 1; /*0x75ec67*/
  *(_BYTE *)(this + 509) = 0; /*0x75ec6e*/
  *(_DWORD *)(this + 496) = &vt_VectorClass_CellClass; /*0x75ec74*/
  *(_DWORD *)(this + 500) = __2_YAPAXI_Z(0x14u); /*0x75ec83*/
  *(_BYTE *)(this + 509) = 1; /*0x75ec89*/
  *(_DWORD *)(this + 496) = &vt_DynamicVectorClass_CellClass; /*0x75ec90*/
  *(_DWORD *)(this + 516) = 10; /*0x75ec9a*/
  *(_DWORD *)(this + 512) = 0; /*0x75eca4*/
  *(_DWORD *)this = &WaveClass::`vftable'; /*0x75ecaa*/
  this->VoxelAnimClass_field_0x4 = &WaveClass::`vftable'; /*0x75ecb0*/
  this->VoxelAnimClass_field_0x8 = &vt_WaveClass; /*0x75ecb7*/
  *(_DWORD *)(this + 12) = &off_7F6BC8; /*0x75ecbe*/
  if ( MEMORY[0xA8EC48] < MEMORY[0xA8EC40] /*0x75ecfb*/
    || (MEMORY[0xA8EC45] || !MEMORY[0xA8EC40])
    && MEMORY[0xA8EC4C] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xA8EC38] + 8))(
         &MEMORY[0xA8EC38],
         MEMORY[0xA8EC40] + MEMORY[0xA8EC4C],
         0) )
  {
    v2 = MEMORY[0xA8EC48]++; /*0x75ed08*/
    *((_DWORD *)MEMORY[0xA8EC3C] + v2) = this; /*0x75ed17*/
  }
  if ( !byte_B725CC ) /*0x75ed20*/
    Voxel::InitDistanceTable(); /*0x75ed22*/
  return this; /*0x75ed29*/
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
