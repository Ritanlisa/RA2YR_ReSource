// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_470C30_e4.hpp"
#include "e4/classes/E4Recv_473750_e4.hpp"
#include "e4/classes/E4Recv_474540_e4.hpp"
#include "e4/classes/E4Recv_474660_e4.hpp"
#include "e4/classes/E4Recv_476E20_e4.hpp"
#include "e4/classes/E4Recv_476EA0_e4.hpp"
#include "e4/classes/E4Recv_479740_e4.hpp"
#include "e4/classes/E4Recv_47AA00_e4.hpp"

// 0x470C30
namespace gamemd {
void E4Recv_470C30::sub_470C30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_470C30(CampaignEndScoreClass *this)
{
  this->vfptr = &vt_CampaignEndScoreClass; /*0x470c30*/
}
}
} // namespace gamemd

// 0x4716F0
namespace gamemd {
int sub_4716F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_4716F0()
{
  stru_89E138 = 0; /*0x4716f2*/
  MEMORY[0x89E13C] = 0; /*0x4716f7*/
  MEMORY[0x89E140] = 0; /*0x4716fc*/
  return 0; /*0x471701*/
}
}
} // namespace gamemd

// 0x471750
namespace gamemd {
int sub_471750()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_471750()
{
  unk_89E0F4 = 0; /*0x471757*/
  dword_89E0F8 = 0; /*0x47175c*/
  unk_89E0FC = 1; /*0x471761*/
  unk_89E0FD = 0; /*0x471768*/
  dword_89E0F0 = (int)&vt_DynamicVectorClass_CaptureManagerClass; /*0x47176d*/
  dword_89E104 = 10; /*0x471777*/
  dword_89E100 = 0; /*0x471781*/
  return atexit(sub_471790); /*0x47178c*/
}
}
} // namespace gamemd

// 0x471790
namespace gamemd {
void sub_471790()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_471790()
{
  dword_89E0F0 = (int)&vt_VectorClass_CaptureManagerClass; /*0x471798*/
  if ( unk_89E0F4 && unk_89E0FD ) /*0x4717ac*/
  {
    __3_YAXPAX_Z(unk_89E0F4); /*0x4717af*/
    unk_89E0F4 = 0; /*0x4717b7*/
  }
  unk_89E0FD = 0; /*0x4717bd*/
  dword_89E0F8 = 0; /*0x4717c3*/
}
}
} // namespace gamemd

// 0x472A80
namespace gamemd {
void CaptureManagerClass__vt_03_()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall CaptureManagerClass::vt_03_(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x472a86*/
  this->uniqueId = 0; /*0x472a89*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x472a90*/
  {
    __3_YAXPAX_Z(v2); /*0x472a96*/
    this->vtable1 = 0; /*0x472a9e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x472aa1*/
  this->vtable2 = 0; /*0x472aa4*/
}
}
} // namespace gamemd

// 0x472AD0
namespace gamemd {
int CaptureManagerClass__vt_06_(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall CaptureManagerClass::vt_06_(_DWORD *this, int a2)
{
  return *(_DWORD *)(*(this + 1) + 4 * a2); /*0x472ada*/
}
}
} // namespace gamemd

// 0x473750
namespace gamemd {
unsigned int * E4Recv_473750::sub_473750(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_473750(_DWORD *this, _DWORD *a2)
{
  _DWORD *v3; // edi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax

  v3 = a2; /*0x473754*/
  *(this + 1) = 0; /*0x47375a*/
  *(this + 2) = 0; /*0x47375d*/
  *(this + 3) = 0; /*0x473760*/
  *((_WORD *)this + 10) = 0; /*0x473763*/
  *((_WORD *)this + 11) = 0; /*0x473767*/
  *(this + 6) = 0; /*0x47376d*/
  *(this + 7) = -1; /*0x473770*/
  *this = &vt_CarryoverClass; /*0x473777*/
  if ( v3 ) /*0x47377d*/
  {
    v4 = (*(int (__thiscall **)(_DWORD *))(*v3 + 44))(v3); /*0x473783*/
    *(this + 3) = v4; /*0x473786*/
    v5 = v4 - 1; /*0x473789*/
    if ( !v5 || (v6 = v5 - 5) == 0 || v6 == 9 ) /*0x473794*/
    {
      v7 = (*(int (__thiscall **)(_DWORD *))(*v3 + 132))(v3); /*0x4737a6*/
      *(this + 4) = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 64))(v7); /*0x4737b3*/
    }
    *(this + 7) = *(_DWORD *)(*(_DWORD *)(v3[135] + 52) + 184); /*0x4737c7*/
    *(this + 6) = v3[27]; /*0x4737cd*/
    *(this + 5) = *(_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD **))(*v3 + 440))(v3, &a2); /*0x4737df*/
  }
  return this; /*0x4737e4*/
}
}
} // namespace gamemd

// 0x474540
namespace gamemd {
CCINIClass * E4Recv_474540::sub_474540(CCINIClass * aP1, char a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
CCINIClass *__thiscall sub_474540(int this, CCINIClass *aP1, char a3)
{
  CCINIClass *v5; // edi
  CCINIClass v6; // [esp+8h] [ebp-80h] BYREF

  if ( !a3 ) /*0x474552*/
    return (CCINIClass *)INIClass::WriteToString((_DWORD *)this, aP1); /*0x47455c*/
  INIClass::ClearSection(this, &g_INI_Key_Digest, 0); /*0x474575*/
  memset(v6.headNode, 0, 9); /*0x47457e*/
  v6.unknown38 = 0; /*0x47458d*/
  v6.INIClass_field_3C = 0; /*0x474591*/
  *(_DWORD *)&v6.__pad_20[4] = 1732584193; /*0x474595*/
  *(_DWORD *)&v6.__pad_20[8] = -271733879; /*0x47459d*/
  v6.INIClass_field_2C = -1732584194; /*0x4745a5*/
  v6.unknown30 = 271733878; /*0x4745ad*/
  *(_DWORD *)&v6.needsSave_flag = -1009589776; /*0x4745b5*/
  *(_DWORD *)v6.__pad_0 = &vt_SHAPipe; /*0x4745bd*/
  INIClass::WriteToString((_DWORD *)this, &v6); /*0x4745c5*/
  SHA1::ComputeThunk(&v6, (ObjectClass *)(this + 65)); /*0x4745d2*/
  *(_BYTE *)(this + 64) = 1; /*0x4745db*/
  Pipe::Dtor((int *)v6.__pad_0); /*0x4745df*/
  INIClass::ReadBase64Data( /*0x4745ee*/
    (char *)this,
    (unsigned __int8 *)&g_INI_Key_Digest,
    (ObjectClass *)(this + 65),
    (ObjectClass *)0x14);
  v5 = (CCINIClass *)INIClass::WriteToString((_DWORD *)this, aP1); /*0x47460a*/
  INIClass::ClearSection(this, &g_INI_Key_Digest, 0); /*0x47460c*/
  return v5; /*0x474561*/
}
}
} // namespace gamemd

// 0x476E20
namespace gamemd {
int E4Recv_476E20::sub_476E20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_476E20(int this)
{
  int v3[3]; // [esp+4h] [ebp-80h] BYREF
  char v4; // [esp+10h] [ebp-74h]
  int v5; // [esp+28h] [ebp-5Ch]
  int v6; // [esp+2Ch] [ebp-58h]
  int v7; // [esp+30h] [ebp-54h]
  int v8; // [esp+34h] [ebp-50h]
  int v9; // [esp+38h] [ebp-4Ch]
  int v10; // [esp+3Ch] [ebp-48h]
  int v11; // [esp+40h] [ebp-44h]

  v3[1] = 0; /*0x476e29*/
  v3[2] = 0; /*0x476e2d*/
  v4 = 0; /*0x476e31*/
  v10 = 0; /*0x476e35*/
  v11 = 0; /*0x476e39*/
  v5 = 1732584193; /*0x476e44*/
  v6 = -271733879; /*0x476e4c*/
  v7 = -1732584194; /*0x476e54*/
  v8 = 271733878; /*0x476e5c*/
  v9 = -1009589776; /*0x476e64*/
  v3[0] = (int)&vt_SHAPipe; /*0x476e6c*/
  INIClass::WriteToString((_DWORD *)this, (int)v3); /*0x476e74*/
  SHA1::ComputeThunk(v3, (char *)(this + 65)); /*0x476e81*/
  *(_BYTE *)(this + 64) = 1; /*0x476e8a*/
  return Pipe::Dtor(v3); /*0x476e93*/
}
}
} // namespace gamemd

// 0x4770E0
namespace gamemd {
VectorClass * LoadBuildingTypeClassPrerequisites(unsigned int * a1, unsigned char *** edx0, INIClass * a3, unsigned char * a2, VectorClass a5, int a6, int a7, int a8)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
VectorClass *__fastcall LoadBuildingTypeClassPrerequisites(
        _DWORD *a1,
        unsigned __int8 ***edx0,
        INIClass *a3,
        unsigned __int8 *a2,
        VectorClass a5,
        int a6,
        int a7,
        int a8)
{
  CCINIClass *i; // esi
  char v10; // bl
  void *v11; // eax
  void *v12; // eax
  void *v13; // eax
  void *v14; // eax
  void *v15; // eax
  void *v16; // eax
  DynamicVector aP1; // [esp+2Ch] [ebp-A0h] BYREF

  if ( INIClass::GetString(edx0, a3, a2, (INIClass *)&stru_87C374.__pad_579C[33876], (INIClass *)aP1.__pad_20, 128) ) /*0x47710a*/
  {
    DynamicVectorClass::Construct(&aP1, 0, 0); /*0x477121*/
    *(_DWORD *)aP1.__pad_0 = &vt_TypeList_int; /*0x47712a*/
    for ( i = (CCINIClass *)strtok(aP1.__pad_20, (ObjectClass *)&stru_817F40.nextObject); /*0x477144*/
          i;
          i = (CCINIClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
    {
      if ( !i->__pad_0[0] ) /*0x47714a*/
        break; /*0x47714d*/
      v10 = 0; /*0x477159*/
      if ( !_strcmpi(i->__pad_0, aPower) ) /*0x47715b*/
      {
        if ( (int)aP1.field_10 < aP1.field_8 /*0x477194*/
          || (aP1.__pad_C[1] || !aP1.field_8)
          && *(int *)aP1.__pad_14 > 0
          && (*(unsigned __int8 (__thiscall **)(DynamicVector *, int, _DWORD))(*(_DWORD *)aP1.__pad_0 + 8))(
               &aP1,
               aP1.field_8 + *(_DWORD *)aP1.__pad_14,
               0) )
        {
          v11 = aP1.field_10++; /*0x47719f*/
          *(_DWORD *)(*(_DWORD *)&aP1.field_1[3] + 4 * (_DWORD)v11) = -1; /*0x4771aa*/
        }
        v10 = 1; /*0x4771b1*/
      }
      if ( !_strcmpi(i->__pad_0, aFactory) ) /*0x4771b9*/
      {
        if ( (int)aP1.field_10 < aP1.field_8 /*0x4771f2*/
          || (aP1.__pad_C[1] || !aP1.field_8)
          && *(int *)aP1.__pad_14 > 0
          && (*(unsigned __int8 (__thiscall **)(DynamicVector *, int, _DWORD))(*(_DWORD *)aP1.__pad_0 + 8))(
               &aP1,
               aP1.field_8 + *(_DWORD *)aP1.__pad_14,
               0) )
        {
          v12 = aP1.field_10++; /*0x4771fd*/
          *(_DWORD *)(*(_DWORD *)&aP1.field_1[3] + 4 * (_DWORD)v12) = -2; /*0x477208*/
        }
        v10 = 1; /*0x47720f*/
      }
      if ( !_strcmpi(i->__pad_0, (char *)&g_INI_Key_Digest.INIClass_field_3C) ) /*0x477217*/
      {
        if ( (int)aP1.field_10 < aP1.field_8 /*0x477250*/
          || (aP1.__pad_C[1] || !aP1.field_8)
          && *(int *)aP1.__pad_14 > 0
          && (*(unsigned __int8 (__thiscall **)(DynamicVector *, int, _DWORD))(*(_DWORD *)aP1.__pad_0 + 8))(
               &aP1,
               aP1.field_8 + *(_DWORD *)aP1.__pad_14,
               0) )
        {
          v13 = aP1.field_10++; /*0x47725b*/
          *(_DWORD *)(*(_DWORD *)&aP1.field_1[3] + 4 * (_DWORD)v13) = -3; /*0x477266*/
        }
        v10 = 1; /*0x47726d*/
      }
      if ( !_strcmpi(i->__pad_0, &g_INI_Key_Digest.needsSave_flag) ) /*0x477275*/
      {
        if ( (int)aP1.field_10 < aP1.field_8 /*0x4772ae*/
          || (aP1.__pad_C[1] || !aP1.field_8)
          && *(int *)aP1.__pad_14 > 0
          && (*(unsigned __int8 (__thiscall **)(DynamicVector *, int, _DWORD))(*(_DWORD *)aP1.__pad_0 + 8))(
               &aP1,
               aP1.field_8 + *(_DWORD *)aP1.__pad_14,
               0) )
        {
          v14 = aP1.field_10++; /*0x4772b9*/
          *(_DWORD *)(*(_DWORD *)&aP1.field_1[3] + 4 * (_DWORD)v14) = -4; /*0x4772c4*/
        }
        v10 = 1; /*0x4772cb*/
      }
      if ( !_strcmpi(i->__pad_0, aTech) ) /*0x4772d3*/
      {
        if ( (int)aP1.field_10 < aP1.field_8 /*0x47730c*/
          || (aP1.__pad_C[1] || !aP1.field_8)
          && *(int *)aP1.__pad_14 > 0
          && (*(unsigned __int8 (__thiscall **)(DynamicVector *, int, _DWORD))(*(_DWORD *)aP1.__pad_0 + 8))(
               &aP1,
               aP1.field_8 + *(_DWORD *)aP1.__pad_14,
               0) )
        {
          v15 = aP1.field_10++; /*0x477317*/
          *(_DWORD *)(*(_DWORD *)&aP1.field_1[3] + 4 * (_DWORD)v15) = -5; /*0x477322*/
        }
        v10 = 1; /*0x477329*/
      }
      if ( _strcmpi(i->__pad_0, aProc) ) /*0x477331*/
      {
        if ( !v10 ) /*0x47738b*/
        {
          aP1.field_1C = BuildingTypeClass::FindIndexByName(i); /*0x477397*/
          if ( aP1.field_1C != -1 ) /*0x47739b*/
            DynamicVector::Add_Alt(&aP1, (VectorClass *)&aP1.field_1C); /*0x4773a6*/
        }
      }
      else if ( (int)aP1.field_10 < aP1.field_8 /*0x47736a*/
             || (aP1.__pad_C[1] || !aP1.field_8)
             && *(int *)aP1.__pad_14 > 0
             && (*(unsigned __int8 (__thiscall **)(DynamicVector *, int, _DWORD))(*(_DWORD *)aP1.__pad_0 + 8))(
                  &aP1,
                  aP1.field_8 + *(_DWORD *)aP1.__pad_14,
                  0) )
      {
        v16 = aP1.field_10++; /*0x477375*/
        *(_DWORD *)(*(_DWORD *)&aP1.field_1[3] + 4 * (_DWORD)v16) = -6; /*0x477380*/
      }
    }
    DynamicVectorClass::Copy(a1, &aP1); /*0x4773cb*/
    *a1 = &vt_TypeList_int; /*0x4773d9*/
    *(_DWORD *)aP1.__pad_0 = &vt_VectorClass_int; /*0x4773df*/
    VectorClass::Destroy((int)&aP1); /*0x4773e3*/
    a5.vtable0 = &vt_VectorClass_int; /*0x4773ef*/
    VectorClass::Destroy((int)&a5); /*0x4773f6*/
    return (VectorClass *)a1; /*0x4773fb*/
  }
  else
  {
    VectorClass::Copy(a1, &a5); /*0x477413*/
    a5.vtable0 = &vt_VectorClass_int; /*0x47741f*/
    VectorClass::Destroy((int)&a5); /*0x47742a*/
    return (VectorClass *)a1; /*0x47742f*/
  }
}
}
} // namespace gamemd

// 0x4790B0
namespace gamemd {
void SoundWarning_Set(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __fastcall SoundWarning_Set(int a1)
{
  if ( MEMORY[0x89E3A0] == 1 ) /*0x4790b7*/
  {
    dword_81C1D0 = -2; /*0x4790b9*/
  }
  else
  {
    if ( a1 >= 0 ) /*0x4790c6*/
      a1 = 2; /*0x4790c8*/
    dword_81C1D0 = a1; /*0x4790cd*/
  }
}
}
} // namespace gamemd

// 0x479740
namespace gamemd {
void E4Recv_479740::sub_479740(DWORD BytesReturned)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_479740(void *this, DWORD BytesReturned)
{
  int v2; // esi
  UINT v3; // eax
  DWORD v4; // edi
  HANDLE FileA; // edi
  int v6; // esi
  DWORD Buffer[2]; // [esp+8h] [ebp-10h] BYREF
  CHAR FileName[8]; // [esp+10h] [ebp-8h] BYREF

  if ( MEMORY[0x887624] ) /*0x47974c*/
  {
    sub_47A080(this, BytesReturned); /*0x479753*/
    return; /*0x47975d*/
  }
  v2 = (char)BytesReturned + 65; /*0x479769*/
  sprintf((char *const)Buffer, MEMORY[0x81C4B4], v2); /*0x479773*/
  v3 = GetDriveTypeA((LPCSTR)Buffer) - 2; /*0x479786*/
  if ( v3 ) /*0x479789*/
  {
    if ( v3 != 3 ) /*0x47978e*/
    {
LABEL_5:
      Debug::Log(); /*0x479790*/
      return; /*0x4797a2*/
    }
    v4 = 0x80000000; /*0x4797a5*/
  }
  else
  {
    v4 = -1073741824; /*0x4797ac*/
  }
  sprintf(FileName, g_Str_Trace______c_, v2); /*0x4797bc*/
  FileA = CreateFileA(FileName, v4, 3u, 0, 3u, 0, 0); /*0x4797da*/
  if ( FileA == (HANDLE)-1 ) /*0x4797df*/
    goto LABEL_5; /*0x4797df*/
  v6 = 0; /*0x479805*/
  while ( !DeviceIoControl(FileA, 0x90018u, 0, 0, 0, 0, &BytesReturned, 0) ) /*0x479822*/
  {
    GetLastError(); /*0x479824*/
    Debug::Log(); /*0x47982c*/
    Sleep(0x1F4u); /*0x479839*/
    if ( ++v6 >= 20 ) /*0x479843*/
      goto LABEL_18; /*0x479843*/
  }
  if ( !DeviceIoControl(FileA, 0x90020u, 0, 0, 0, 0, &BytesReturned, 0) /*0x4798c7*/
    || (LOBYTE(BytesReturned) = 0, !DeviceIoControl(FileA, 0x2D4804u, &BytesReturned, 1u, 0, 0, Buffer, 0))
    || !DeviceIoControl(FileA, 0x2D4808u, 0, 0, 0, 0, &BytesReturned, 0) )
  {
    GetLastError(); /*0x4798d4*/
    Debug::Log(); /*0x4798dc*/
  }
LABEL_18:
  CloseHandle(FileA); /*0x4798e4*/
}
}
} // namespace gamemd

// 0x479BA0
namespace gamemd {
char sub_479BA0(DWORD BytesReturned)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall sub_479BA0(DWORD BytesReturned)
{
  int v1; // esi
  UINT v2; // eax
  DWORD v4; // edi
  HANDLE FileA; // edi
  int v6; // esi
  char v7; // [esp+Bh] [ebp-11h]
  DWORD Buffer[2]; // [esp+Ch] [ebp-10h] BYREF
  CHAR FileName[8]; // [esp+14h] [ebp-8h] BYREF

  v1 = (char)BytesReturned + 65; /*0x479baa*/
  v7 = 0; /*0x479bb8*/
  sprintf((char *const)Buffer, MEMORY[0x81C4B4], v1); /*0x479bbd*/
  v2 = GetDriveTypeA((LPCSTR)Buffer) - 2; /*0x479bd0*/
  if ( v2 ) /*0x479bd3*/
  {
    if ( v2 != 3 ) /*0x479bd8*/
    {
LABEL_3:
      Debug::Log(); /*0x479bda*/
      return 0; /*0x479bee*/
    }
    v4 = 0x80000000; /*0x479bf1*/
  }
  else
  {
    v4 = -1073741824; /*0x479bf8*/
  }
  sprintf(FileName, g_Str_Trace______c_, v1); /*0x479c08*/
  FileA = CreateFileA(FileName, v4, 3u, 0, 3u, 0, 0); /*0x479c26*/
  if ( FileA == (HANDLE)-1 ) /*0x479c2b*/
    goto LABEL_3; /*0x479c2b*/
  v6 = 0; /*0x479c53*/
  while ( !DeviceIoControl(FileA, 0x90018u, 0, 0, 0, 0, &BytesReturned, 0) ) /*0x479c70*/
  {
    GetLastError(); /*0x479c72*/
    Debug::Log(); /*0x479c7e*/
    Sleep(0x1F4u); /*0x479c8b*/
    if ( ++v6 >= 20 ) /*0x479c91*/
      goto LABEL_17; /*0x479c91*/
  }
  if ( DeviceIoControl(FileA, 0x90020u, 0, 0, 0, 0, &BytesReturned, 0) /*0x479d21*/
    && (LOBYTE(BytesReturned) = 0, DeviceIoControl(FileA, 0x2D4804u, &BytesReturned, 1u, 0, 0, Buffer, 0))
    && DeviceIoControl(FileA, 0x2D4808u, 0, 0, 0, 0, &BytesReturned, 0) )
  {
    v7 = 1; /*0x479d44*/
  }
  else
  {
    GetLastError(); /*0x479d2e*/
    Debug::Log(); /*0x479d3a*/
  }
LABEL_17:
  CloseHandle(FileA); /*0x479d49*/
  return v7; /*0x479be9*/
}
}
} // namespace gamemd

// 0x479D60
namespace gamemd {
char sub_479D60(DWORD BytesReturned)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall sub_479D60(DWORD BytesReturned)
{
  int v1; // esi
  UINT v2; // eax
  DWORD v4; // edi
  HANDLE FileA; // ebp
  int v6; // esi
  int i; // esi
  DWORD Buffer[2]; // [esp+Ch] [ebp-10h] BYREF
  CHAR FileName[8]; // [esp+14h] [ebp-8h] BYREF

  v1 = (char)BytesReturned + 65; /*0x479d6a*/
  sprintf((char *const)Buffer, MEMORY[0x81C4B4], v1); /*0x479d79*/
  v2 = GetDriveTypeA((LPCSTR)Buffer) - 2; /*0x479d8c*/
  if ( v2 ) /*0x479d8f*/
  {
    if ( v2 != 3 ) /*0x479d94*/
    {
LABEL_3:
      Debug::Log(); /*0x479d96*/
      return 0; /*0x479dab*/
    }
    v4 = 0x80000000; /*0x479dae*/
  }
  else
  {
    v4 = -1073741824; /*0x479db5*/
  }
  sprintf(FileName, g_Str_Trace______c_, v1); /*0x479dc5*/
  FileA = CreateFileA(FileName, v4, 3u, 0, 3u, 0, 0); /*0x479de3*/
  if ( FileA == (HANDLE)-1 ) /*0x479de8*/
    goto LABEL_3; /*0x479de8*/
  v6 = 0; /*0x479e10*/
  while ( !DeviceIoControl(FileA, 0x90018u, 0, 0, 0, 0, &BytesReturned, 0) ) /*0x479e2f*/
  {
    GetLastError(); /*0x479e32*/
    Debug::Log(); /*0x479e3a*/
    Sleep(0x1F4u); /*0x479e47*/
    if ( ++v6 >= 20 ) /*0x479e4d*/
      goto LABEL_13; /*0x479e4d*/
  }
  LOBYTE(BytesReturned) = 1; /*0x479e69*/
  if ( !DeviceIoControl(FileA, 0x2D4804u, &BytesReturned, 1u, 0, 0, Buffer, 0) ) /*0x479e6e*/
  {
    GetLastError(); /*0x479e7f*/
    Debug::Log(); /*0x479e87*/
  }
LABEL_13:
  for ( i = 0; i < 20; ++i ) /*0x479e8f*/
  {
    if ( DeviceIoControl(FileA, 0x9001Cu, 0, 0, 0, 0, &BytesReturned, 0) ) /*0x479ea6*/
      break; /*0x479eae*/
    GetLastError(); /*0x479eb1*/
    Debug::Log(); /*0x479eb9*/
    Sleep(0x1F4u); /*0x479ec6*/
  }
  CloseHandle(FileA); /*0x479ecf*/
  return 1; /*0x479da5*/
}
}
} // namespace gamemd

// 0x479EF0
namespace gamemd {
char sub_479EF0(DWORD BytesReturned)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall sub_479EF0(DWORD BytesReturned)
{
  int v1; // esi
  UINT v2; // eax
  DWORD v4; // edi
  HANDLE FileA; // ebp
  int v6; // esi
  int i; // esi
  DWORD Buffer[2]; // [esp+Ch] [ebp-10h] BYREF
  CHAR FileName[8]; // [esp+14h] [ebp-8h] BYREF

  v1 = (char)BytesReturned + 65; /*0x479efa*/
  sprintf((char *const)Buffer, MEMORY[0x81C4B4], v1); /*0x479f09*/
  v2 = GetDriveTypeA((LPCSTR)Buffer) - 2; /*0x479f1c*/
  if ( v2 ) /*0x479f1f*/
  {
    if ( v2 != 3 ) /*0x479f24*/
    {
LABEL_3:
      Debug::Log(); /*0x479f26*/
      return 0; /*0x479f3b*/
    }
    v4 = 0x80000000; /*0x479f3e*/
  }
  else
  {
    v4 = -1073741824; /*0x479f45*/
  }
  sprintf(FileName, g_Str_Trace______c_, v1); /*0x479f55*/
  FileA = CreateFileA(FileName, v4, 3u, 0, 3u, 0, 0); /*0x479f73*/
  if ( FileA == (HANDLE)-1 ) /*0x479f78*/
    goto LABEL_3; /*0x479f78*/
  v6 = 0; /*0x479fa0*/
  while ( !DeviceIoControl(FileA, 0x90018u, 0, 0, 0, 0, &BytesReturned, 0) ) /*0x479fbf*/
  {
    GetLastError(); /*0x479fc2*/
    Debug::Log(); /*0x479fca*/
    Sleep(0x1F4u); /*0x479fd7*/
    if ( ++v6 >= 20 ) /*0x479fdd*/
      goto LABEL_13; /*0x479fdd*/
  }
  LOBYTE(BytesReturned) = 0; /*0x479ff9*/
  if ( !DeviceIoControl(FileA, 0x2D4804u, &BytesReturned, 1u, 0, 0, Buffer, 0) ) /*0x479ffe*/
  {
    GetLastError(); /*0x47a00f*/
    Debug::Log(); /*0x47a017*/
  }
LABEL_13:
  for ( i = 0; i < 20; ++i ) /*0x47a01f*/
  {
    if ( DeviceIoControl(FileA, 0x9001Cu, 0, 0, 0, 0, &BytesReturned, 0) ) /*0x47a036*/
      break; /*0x47a03e*/
    GetLastError(); /*0x47a041*/
    Debug::Log(); /*0x47a049*/
    Sleep(0x1F4u); /*0x47a056*/
  }
  CloseHandle(FileA); /*0x47a05f*/
  return 1; /*0x479f35*/
}
}
} // namespace gamemd

// 0x47A080
namespace ra2 {
namespace game {
void ObjectClass::sub_47A080(DWORD a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_47A080(ObjectClass *this, DWORD a2)
{
  char v2; // bl
  AnimClass *FileA; // esi
  DWORD BytesReturned; // [esp+10h] [ebp-20h] BYREF
  _DWORD InBuffer[7]; // [esp+14h] [ebp-1Ch] BYREF

  v2 = a2 + 1; /*0x47a098*/
  LOBYTE(a2) = a2 + 1; /*0x47a0a3*/
  FileA = (AnimClass *)CreateFileA(g_Str_____vwin32, 0, 0, 0, 0, 0x4000000u, 0); /*0x47a0b3*/
  if ( !CDROM::LockVolume(this, FileA, a2, 0, 0) ) /*0x47a0ba*/
  {
    Debug::Log(); /*0x47a0cf*/
    return; /*0x47a0de*/
  }
  if ( !CDROM::DeviceIoControl(FileA, a2) ) /*0x47a0e5*/
  {
    Debug::Log(); /*0x47a0fa*/
    DriveControlCD(this, FileA, a2); /*0x47a105*/
    return; /*0x47a111*/
  }
  memset(&InBuffer[1], 0, 0x18u); /*0x47a123*/
  InBuffer[3] = 17421; /*0x47a13b*/
  InBuffer[0] = v2; /*0x47a143*/
  InBuffer[2] = 2121; /*0x47a147*/
  if ( !DeviceIoControl(FileA, 1u, InBuffer, 0x1Cu, InBuffer, 0x1Cu, &BytesReturned, 0) ) /*0x47a14f*/
  {
    GetLastError(); /*0x47a160*/
    Debug::Log(); /*0x47a16c*/
LABEL_8:
    Debug::Log(); /*0x47a17d*/
    goto LABEL_9; /*0x47a186*/
  }
  if ( (InBuffer[6] & 1) != 0 ) /*0x47a17b*/
    goto LABEL_8; /*0x47a17b*/
LABEL_9:
  DriveControlCD(this, FileA, a2); /*0x47a18e*/
  CloseHandle(FileA); /*0x47a19b*/
}
}
} // namespace game
} // namespace ra2

// 0x47A920
namespace gamemd {
char DriveControlCD(ObjectClass * aP0, HANDLE hDevice, DWORD BytesReturned)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall DriveControlCD(ObjectClass *aP0, HANDLE hDevice, DWORD BytesReturned)
{
  int v3; // ebp
  char v4; // bl
  int v5; // eax
  char result; // al
  _DWORD InBuffer[7]; // [esp+10h] [ebp-1Ch] BYREF

  v3 = (char)BytesReturned; /*0x47a92c*/
  memset(&InBuffer[1], 0, 0x18u); /*0x47a93b*/
  v4 = 0; /*0x47a943*/
  while ( 1 )
  {
    LOBYTE(v5) = 0; /*0x47a949*/
    v4 = v4 != 0 ? 8 : 72;
    BYTE1(v5) = v4; /*0x47a957*/
    v5 = (unsigned __int16)v5; /*0x47a95a*/
    LOBYTE(v5) = v5 | 0x6A; /*0x47a963*/
    InBuffer[2] = v5; /*0x47a967*/
    InBuffer[3] = 17421; /*0x47a976*/
    InBuffer[0] = v3; /*0x47a97e*/
    if ( DeviceIoControl(hDevice, 1u, InBuffer, 0x1Cu, InBuffer, 0x1Cu, &BytesReturned, 0) ) /*0x47a982*/
      break; /*0x47a982*/
    GetLastError(); /*0x47a98f*/
    Debug::Log(); /*0x47a99b*/
LABEL_5:
    result = 0; /*0x47a9ac*/
    if ( v4 == 8 ) /*0x47a9b1*/
      return result; /*0x47a9b1*/
  }
  if ( (InBuffer[6] & 1) != 0 ) /*0x47a9aa*/
    goto LABEL_5; /*0x47a9aa*/
  return 1; /*0x47a9b7*/
}
}
} // namespace gamemd

// 0x47AA00
namespace gamemd {
CDFileClass * E4Recv_47AA00::sub_47AA00(char ** a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
CDFileClass *__thiscall sub_47AA00(_BYTE *this, char **a2)
{
  char *v3; // eax

  BufferIOFileClass::Constructor(this); /*0x47aa03*/
  *(this + 84) = 0; /*0x47aa0c*/
  *(_DWORD *)this = &off_7E1668; /*0x47aa10*/
  v3 = String::GetOrEmpty_Alt(a2); /*0x47aa16*/
  FileClass::OpenWithCDSearch(this, (IUnknown *)v3); /*0x47aa1e*/
  return (CDFileClass *)this; /*0x47aa25*/
}
}
} // namespace gamemd

// 0x47AA50
namespace gamemd {
int sub_47AA50(char a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_47AA50(char a1)
{
  HANDLE FirstFileA; // eax
  CHAR FileName[8]; // [esp+0h] [ebp-148h] BYREF
  struct _WIN32_FIND_DATAA FindFileData; // [esp+8h] [ebp-140h] BYREF

  strcpy(FileName, "?:\\*.*"); /*0x47aa65*/
  FileName[0] = a1 + 65; /*0x47aa6e*/
  FirstFileA = FindFirstFileA(FileName, &FindFileData); /*0x47aa85*/
  if ( FirstFileA == (HANDLE)-1 ) /*0x47aa8e*/
    return 0; /*0x47aa90*/
  FindClose(FirstFileA); /*0x47aa9a*/
  return 1; /*0x47aa92*/
}
}
} // namespace gamemd

// 0x47E040
namespace gamemd {
char CellClass_UpdateNeighborTerrain(int a1, int a2, unsigned int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall CellClass_UpdateNeighborTerrain(int a1, int a2, unsigned int a3, int a4)
{
  _DWORD *v4; // esi
  char v5; // bl
  int v6; // eax
  int v7; // ebp
  int v8; // edi
  unsigned int v9; // edx
  int v10; // edx
  unsigned int v11; // edx
  int v12; // edx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  unsigned int v16; // ecx
  int v17; // ecx
  unsigned int v18; // eax
  __int16 v19; // dx
  int v20; // edx
  int v21; // edx
  unsigned int v22; // edx
  int v23; // edx
  unsigned int v24; // ecx
  _DWORD *v25; // eax
  int v26; // edx
  unsigned int v27; // eax
  int v28; // esi
  __int16 v29; // dx
  void *v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  unsigned int v34; // eax
  int *v35; // esi
  _DWORD *v36; // eax
  int v37; // edx
  int v39; // [esp+10h] [ebp-28h]
  int v40; // [esp+14h] [ebp-24h]
  int v41; // [esp+18h] [ebp-20h]
  int v42; // [esp+1Ch] [ebp-1Ch]
  int v43; // [esp+1Ch] [ebp-1Ch]
  int v44; // [esp+1Ch] [ebp-1Ch]
  int *v46; // [esp+24h] [ebp-14h]
  int v47; // [esp+24h] [ebp-14h]
  int v48; // [esp+28h] [ebp-10h]
  int v49; // [esp+2Ch] [ebp-Ch] BYREF
  int v50; // [esp+30h] [ebp-8h] BYREF
  int v51; // [esp+34h] [ebp-4h] BYREF

  v4 = (_DWORD *)a1; /*0x47e04a*/
  if ( a3 ) /*0x47e053*/
    *(_BYTE *)(a1 + 286) = 9; /*0x47e05e*/
  else
    *(_BYTE *)(a1 + 286) = 0; /*0x47e055*/
  v5 = a4; /*0x47e065*/
  v6 = a4 & 1; /*0x47e06b*/
  v41 = v6 << 9; /*0x47e079*/
  v7 = v6 << 12; /*0x47e082*/
  v8 = v6 << 16; /*0x47e085*/
  v40 = v6 << 8; /*0x47e090*/
  a4 = ((_BYTE)a4 == 0) << 10; /*0x47e097*/
  v39 = (a3 == 0) << 11; /*0x47e0af*/
  v9 = (v6 << 8) | *(_DWORD *)(a1 + 320) & 0xFFFFFE7F; /*0x47e0bf*/
  BYTE1(v9) &= ~2u; /*0x47e0c5*/
  v10 = (v6 << 9) | v9; /*0x47e0c8*/
  BYTE1(v10) &= ~0x10u; /*0x47e0ce*/
  v11 = (v6 << 16) | ((v6 << 12) | v10) & 0xFFFEFFFF; /*0x47e0d9*/
  BYTE1(v11) &= ~4u; /*0x47e0db*/
  v12 = a4 | v11; /*0x47e0de*/
  BYTE1(v12) &= ~8u; /*0x47e0e4*/
  *(_DWORD *)(a1 + 320) = v39 | ((v6 & 0xFFFFFDC1) << 7) | v12; /*0x47e0f0*/
  if ( v5 )
  {
    *(_BYTE *)(a1 + 286) = a3 != 0 ? 9 : 0;
  }
  else
  {
    *(_BYTE *)(a1 + 286) = 0; /*0x47e10d*/
    CellClass::UpdateAnimations(a1); /*0x47e114*/
  }
  v46 = v4 + 9; /*0x47e122*/
  BuildingClass::AddUpgrade((int)&MEMORY[0x87F7E8], (int)(v4 + 9)); /*0x47e126*/
  if ( a3 < 8 ) /*0x47e132*/
  {
    LOWORD(v42) = *v46 + LOWORD(MEMORY[0x89F688][a3 & 7]); /*0x47e157*/
    HIWORD(v42) = HIWORD(*v46) + HIWORD(MEMORY[0x89F688][a3 & 7]); /*0x47e166*/
    v49 = v42; /*0x47e16f*/
    v4 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v49); /*0x47e17d*/
  }
  v13 = v4[80]; /*0x47e18f*/
  BYTE1(v13) &= ~1u; /*0x47e195*/
  v48 = v5 != 0 ? a1 : 0;
  v14 = v40 | v13; /*0x47e19c*/
  BYTE1(v14) &= ~2u; /*0x47e1a2*/
  v4[11] = v48; /*0x47e1a5*/
  v15 = v41 | v14; /*0x47e1a8*/
  BYTE1(v15) &= ~0x10u; /*0x47e1ae*/
  v16 = v8 | (v7 | v15) & 0xFFFEFFFF; /*0x47e1b9*/
  BYTE1(v16) &= ~4u; /*0x47e1bb*/
  v17 = a4 | v16; /*0x47e1be*/
  BYTE1(v17) &= ~8u; /*0x47e1c4*/
  v4[80] = v39 | v17; /*0x47e1cb*/
  if ( v5 )
  {
    *((_BYTE *)v4 + 286) = a3 != 0 ? 9 : 0;
  }
  else
  {
    *((_BYTE *)v4 + 286) = 0; /*0x47e1e8*/
    CellClass::UpdateAnimations((int)v4); /*0x47e1ef*/
  }
  BuildingClass::AddUpgrade((int)&MEMORY[0x87F7E8], (int)(v4 + 9)); /*0x47e201*/
  v18 = a3; /*0x47e206*/
  if ( a3 < 8 ) /*0x47e20d*/
  {
    v19 = MEMORY[0x89F688][a3 & 7]; /*0x47e218*/
    v50 = v4[9]; /*0x47e227*/
    LOWORD(v43) = v50 + v19; /*0x47e232*/
    HIWORD(v43) = HIWORD(v50) + HIWORD(MEMORY[0x89F688][a3 & 7]); /*0x47e241*/
    v50 = v43; /*0x47e24a*/
    v4 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v50); /*0x47e258*/
    v18 = a3; /*0x47e25a*/
  }
  v20 = v4[80]; /*0x47e262*/
  v4[11] = v48; /*0x47e268*/
  BYTE1(v20) &= ~1u; /*0x47e26f*/
  v21 = v40 | v20; /*0x47e272*/
  BYTE1(v21) &= 0xEDu; /*0x47e278*/
  v22 = v8 | (v7 | v21) & 0xFFFEFFFF; /*0x47e283*/
  BYTE1(v22) &= ~4u; /*0x47e285*/
  v23 = a4 | v22; /*0x47e288*/
  BYTE1(v23) &= ~8u; /*0x47e28e*/
  v4[80] = v39 | v23; /*0x47e295*/
  if ( v5 )
  {
    *((_BYTE *)v4 + 286) = v18 != 0 ? 9 : 0;
  }
  else
  {
    *((_BYTE *)v4 + 286) = 0; /*0x47e2ae*/
    CellClass::UpdateAnimations((int)v4); /*0x47e2b5*/
  }
  BuildingClass::AddUpgrade((int)&MEMORY[0x87F7E8], (int)(v4 + 9)); /*0x47e2c7*/
  v24 = a3; /*0x47e2cc*/
  if ( a3 < 8 ) /*0x47e2d3*/
  {
    v51 = v4[9]; /*0x47e2e9*/
    LOWORD(v44) = v51 + LOWORD(MEMORY[0x89F688][a3 & 7]); /*0x47e2fc*/
    HIWORD(v44) = HIWORD(v51) + HIWORD(MEMORY[0x89F688][a3 & 7]); /*0x47e305*/
    v51 = v44; /*0x47e314*/
    v25 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v51); /*0x47e318*/
    v24 = a3; /*0x47e31d*/
  }
  else
  {
    v25 = v4; /*0x47e2d5*/
  }
  v26 = v25[80]; /*0x47e321*/
  BYTE1(v26) &= ~0x10u; /*0x47e327*/
  v25[80] = v7 | v26; /*0x47e32c*/
  v27 = ((_BYTE)v24 - 4) & 7; /*0x47e335*/
  if ( v27 < 8 ) /*0x47e33b*/
  {
    v29 = MEMORY[0x89F688][v27]; /*0x47e34c*/
    v51 = *v46; /*0x47e35b*/
    LOWORD(v47) = v51 + v29; /*0x47e366*/
    HIWORD(v47) = HIWORD(v51) + HIWORD(MEMORY[0x89F688][v27]); /*0x47e375*/
    v51 = v47; /*0x47e37e*/
    v30 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v51); /*0x47e387*/
    v24 = a3; /*0x47e38c*/
    v28 = (int)v30; /*0x47e390*/
  }
  else
  {
    v28 = a1; /*0x47e33d*/
  }
  v31 = *(_DWORD *)(v28 + 320); /*0x47e392*/
  BYTE1(v31) &= ~1u; /*0x47e39c*/
  v32 = v40 | v31; /*0x47e3a3*/
  BYTE1(v32) &= ~2u; /*0x47e3a9*/
  *(_DWORD *)(v28 + 44) = v48; /*0x47e3ac*/
  v33 = v41 | v32; /*0x47e3af*/
  BYTE1(v33) &= ~4u; /*0x47e3b5*/
  v34 = v8 | (a4 | v33) & 0xFFFEEFFF; /*0x47e3c3*/
  BYTE1(v34) &= ~8u; /*0x47e3c5*/
  *(_DWORD *)(v28 + 320) = v39 | v34; /*0x47e3cc*/
  if ( v5 )
  {
    *(_BYTE *)(v28 + 286) = v24 != 0 ? 9 : 0;
  }
  else
  {
    *(_BYTE *)(v28 + 286) = 0; /*0x47e3e5*/
    CellClass::UpdateAnimations(v28); /*0x47e3ec*/
  }
  v35 = (int *)(v28 + 36); /*0x47e3f1*/
  LOBYTE(v36) = BuildingClass::AddUpgrade((int)&MEMORY[0x87F7E8], (int)v35); /*0x47e3fa*/
  if ( a3 == 6 ) /*0x47e404*/
  {
    a4 = *v35; /*0x47e40e*/
    LOWORD(a3) = MEMORY[0x89F690] + a4; /*0x47e424*/
    HIWORD(a3) = HIWORD(MEMORY[0x89F690]) + HIWORD(a4); /*0x47e429*/
    v36 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a3); /*0x47e43c*/
    v37 = v36[80]; /*0x47e441*/
    v36[11] = v48; /*0x47e447*/
    v36[80] = v8 | v37 & 0xFFFEFFFF; /*0x47e452*/
  }
  return (char)v36; /*0x47e458*/
}
}
} // namespace gamemd

// 0x47E470
namespace gamemd {
char CellClass_SetOccupancyFlags(int a1, int a2, unsigned int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall CellClass_SetOccupancyFlags(int a1, int a2, unsigned int a3, int a4)
{
  _DWORD *v4; // esi
  char v5; // bl
  int v6; // eax
  int v7; // ebp
  int v8; // edi
  unsigned int v9; // edx
  int v10; // edx
  unsigned int v11; // edx
  int v12; // edx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  unsigned int v16; // ecx
  int v17; // ecx
  unsigned int v18; // eax
  __int16 v19; // dx
  int v20; // edx
  int v21; // edx
  unsigned int v22; // edx
  int v23; // edx
  unsigned int v24; // ecx
  _DWORD *v25; // eax
  int v26; // edx
  unsigned int v27; // eax
  int v28; // esi
  __int16 v29; // dx
  void *v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  unsigned int v34; // eax
  int *v35; // esi
  _DWORD *v36; // eax
  int v37; // edx
  int v39; // [esp+10h] [ebp-28h]
  int v40; // [esp+14h] [ebp-24h]
  int v41; // [esp+18h] [ebp-20h]
  int v42; // [esp+1Ch] [ebp-1Ch]
  int v43; // [esp+1Ch] [ebp-1Ch]
  int v44; // [esp+1Ch] [ebp-1Ch]
  int *v46; // [esp+24h] [ebp-14h]
  int v47; // [esp+24h] [ebp-14h]
  int v48; // [esp+28h] [ebp-10h]
  int v49; // [esp+2Ch] [ebp-Ch] BYREF
  int v50; // [esp+30h] [ebp-8h] BYREF
  int v51; // [esp+34h] [ebp-4h] BYREF

  v4 = (_DWORD *)a1; /*0x47e47a*/
  if ( a3 ) /*0x47e483*/
    *(_BYTE *)(a1 + 286) = 9; /*0x47e48e*/
  else
    *(_BYTE *)(a1 + 286) = 0; /*0x47e485*/
  v5 = a4; /*0x47e495*/
  v6 = a4 & 1; /*0x47e49b*/
  v41 = v6 << 9; /*0x47e4a9*/
  v7 = v6 << 12; /*0x47e4b2*/
  v8 = v6 << 16; /*0x47e4b5*/
  v40 = v6 << 8; /*0x47e4c0*/
  a4 = ((_BYTE)a4 == 0) << 10; /*0x47e4c7*/
  v39 = (a3 == 0) << 11; /*0x47e4df*/
  v9 = (v6 << 8) | *(_DWORD *)(a1 + 320) & 0xFFFFFE7F; /*0x47e4ef*/
  BYTE1(v9) &= ~2u; /*0x47e4f5*/
  v10 = (v6 << 9) | v9; /*0x47e4f8*/
  BYTE1(v10) &= ~0x10u; /*0x47e4fe*/
  v11 = (v6 << 16) | ((v6 << 12) | v10) & 0xFFFEFFFF; /*0x47e509*/
  BYTE1(v11) &= ~4u; /*0x47e50b*/
  v12 = a4 | v11; /*0x47e50e*/
  BYTE1(v12) &= ~8u; /*0x47e514*/
  *(_DWORD *)(a1 + 320) = v39 | ((v6 & 0xFFFFFDC1) << 7) | v12; /*0x47e520*/
  if ( v5 )
  {
    *(_BYTE *)(a1 + 286) = a3 != 0 ? 9 : 0;
  }
  else
  {
    *(_BYTE *)(a1 + 286) = 0; /*0x47e53d*/
    CellClass::UpdateAnimations(a1); /*0x47e544*/
  }
  v46 = v4 + 9; /*0x47e552*/
  BuildingClass::AddUpgrade((int)&MEMORY[0x87F7E8], (int)(v4 + 9)); /*0x47e556*/
  if ( a3 < 8 ) /*0x47e562*/
  {
    LOWORD(v42) = *v46 + LOWORD(MEMORY[0x89F688][a3 & 7]); /*0x47e587*/
    HIWORD(v42) = HIWORD(*v46) + HIWORD(MEMORY[0x89F688][a3 & 7]); /*0x47e596*/
    v49 = v42; /*0x47e59f*/
    v4 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v49); /*0x47e5ad*/
  }
  v13 = v4[80]; /*0x47e5bf*/
  BYTE1(v13) &= ~1u; /*0x47e5c5*/
  v48 = v5 != 0 ? a1 : 0;
  v14 = v40 | v13; /*0x47e5cc*/
  BYTE1(v14) &= ~2u; /*0x47e5d2*/
  v4[11] = v48; /*0x47e5d5*/
  v15 = v41 | v14; /*0x47e5d8*/
  BYTE1(v15) &= ~0x10u; /*0x47e5de*/
  v16 = v8 | (v7 | v15) & 0xFFFEFFFF; /*0x47e5e9*/
  BYTE1(v16) &= ~4u; /*0x47e5eb*/
  v17 = a4 | v16; /*0x47e5ee*/
  BYTE1(v17) &= ~8u; /*0x47e5f4*/
  v4[80] = v39 | v17; /*0x47e5fb*/
  if ( v5 )
  {
    *((_BYTE *)v4 + 286) = a3 != 0 ? 9 : 0;
  }
  else
  {
    *((_BYTE *)v4 + 286) = 0; /*0x47e618*/
    CellClass::UpdateAnimations((int)v4); /*0x47e61f*/
  }
  BuildingClass::AddUpgrade((int)&MEMORY[0x87F7E8], (int)(v4 + 9)); /*0x47e631*/
  v18 = a3; /*0x47e636*/
  if ( a3 < 8 ) /*0x47e63d*/
  {
    v19 = MEMORY[0x89F688][a3 & 7]; /*0x47e648*/
    v50 = v4[9]; /*0x47e657*/
    LOWORD(v43) = v50 + v19; /*0x47e662*/
    HIWORD(v43) = HIWORD(v50) + HIWORD(MEMORY[0x89F688][a3 & 7]); /*0x47e671*/
    v50 = v43; /*0x47e67a*/
    v4 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v50); /*0x47e688*/
    v18 = a3; /*0x47e68a*/
  }
  v20 = v4[80]; /*0x47e692*/
  v4[11] = v48; /*0x47e698*/
  BYTE1(v20) &= ~1u; /*0x47e69f*/
  v21 = v40 | v20; /*0x47e6a2*/
  BYTE1(v21) &= 0xEDu; /*0x47e6a8*/
  v22 = v8 | (v7 | v21) & 0xFFFEFFFF; /*0x47e6b3*/
  BYTE1(v22) &= ~4u; /*0x47e6b5*/
  v23 = a4 | v22; /*0x47e6b8*/
  BYTE1(v23) &= ~8u; /*0x47e6be*/
  v4[80] = v39 | v23; /*0x47e6c5*/
  if ( v5 )
  {
    *((_BYTE *)v4 + 286) = v18 != 0 ? 9 : 0;
  }
  else
  {
    *((_BYTE *)v4 + 286) = 0; /*0x47e6de*/
    CellClass::UpdateAnimations((int)v4); /*0x47e6e5*/
  }
  BuildingClass::AddUpgrade((int)&MEMORY[0x87F7E8], (int)(v4 + 9)); /*0x47e6f7*/
  v24 = a3; /*0x47e6fc*/
  if ( a3 < 8 ) /*0x47e703*/
  {
    v51 = v4[9]; /*0x47e719*/
    LOWORD(v44) = v51 + LOWORD(MEMORY[0x89F688][a3 & 7]); /*0x47e72c*/
    HIWORD(v44) = HIWORD(v51) + HIWORD(MEMORY[0x89F688][a3 & 7]); /*0x47e735*/
    v51 = v44; /*0x47e744*/
    v25 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v51); /*0x47e748*/
    v24 = a3; /*0x47e74d*/
  }
  else
  {
    v25 = v4; /*0x47e705*/
  }
  v26 = v25[80]; /*0x47e751*/
  BYTE1(v26) &= ~0x10u; /*0x47e757*/
  v25[80] = v7 | v26; /*0x47e75c*/
  v27 = ((_BYTE)v24 - 4) & 7; /*0x47e765*/
  if ( v27 < 8 ) /*0x47e76b*/
  {
    v29 = MEMORY[0x89F688][v27]; /*0x47e77c*/
    v51 = *v46; /*0x47e78b*/
    LOWORD(v47) = v51 + v29; /*0x47e796*/
    HIWORD(v47) = HIWORD(v51) + HIWORD(MEMORY[0x89F688][v27]); /*0x47e7a5*/
    v51 = v47; /*0x47e7ae*/
    v30 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v51); /*0x47e7b7*/
    v24 = a3; /*0x47e7bc*/
    v28 = (int)v30; /*0x47e7c0*/
  }
  else
  {
    v28 = a1; /*0x47e76d*/
  }
  v31 = *(_DWORD *)(v28 + 320); /*0x47e7c2*/
  BYTE1(v31) &= ~1u; /*0x47e7cc*/
  v32 = v40 | v31; /*0x47e7d3*/
  BYTE1(v32) &= ~2u; /*0x47e7d9*/
  *(_DWORD *)(v28 + 44) = v48; /*0x47e7dc*/
  v33 = v41 | v32; /*0x47e7df*/
  BYTE1(v33) &= ~4u; /*0x47e7e5*/
  v34 = v8 | (a4 | v33) & 0xFFFEEFFF; /*0x47e7f3*/
  BYTE1(v34) &= ~8u; /*0x47e7f5*/
  *(_DWORD *)(v28 + 320) = v39 | v34; /*0x47e7fc*/
  if ( v5 )
  {
    *(_BYTE *)(v28 + 286) = v24 != 0 ? 9 : 0;
  }
  else
  {
    *(_BYTE *)(v28 + 286) = 0; /*0x47e815*/
    CellClass::UpdateAnimations(v28); /*0x47e81c*/
  }
  v35 = (int *)(v28 + 36); /*0x47e821*/
  LOBYTE(v36) = BuildingClass::AddUpgrade((int)&MEMORY[0x87F7E8], (int)v35); /*0x47e82a*/
  if ( a3 == 6 ) /*0x47e834*/
  {
    a4 = *v35; /*0x47e83e*/
    LOWORD(a3) = MEMORY[0x89F690] + a4; /*0x47e854*/
    HIWORD(a3) = HIWORD(MEMORY[0x89F690]) + HIWORD(a4); /*0x47e859*/
    v36 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a3); /*0x47e86c*/
    v37 = v36[80]; /*0x47e871*/
    v36[11] = v48; /*0x47e877*/
    v36[80] = v8 | v37 & 0xFFFEFFFF; /*0x47e882*/
  }
  return (char)v36; /*0x47e888*/
}
}
} // namespace gamemd

// 0x47EFE0
namespace gamemd {
unsigned int sub_47EFE0(unsigned int * a1, int * a2, unsigned int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __stdcall sub_47EFE0(unsigned int *a1, int *a2, unsigned int a3)
{
  int *FoundationSize; // eax
  int v5; // esi
  signed int v6; // ecx
  unsigned int result; // eax
  int v8; // edx
  int v9; // ebx
  int v10; // esi
  signed int v11; // ecx
  int v12; // edi
  int v13; // ecx
  int v14; // edx
  _DWORD *v15; // esi
  int v16; // edi
  unsigned __int8 v17; // dl
  unsigned __int8 *v19; // esi
  char **v20; // edi
  int v21; // edx
  int v22; // ebx
  int v23; // ecx
  bool v24; // cc
  int v25[4]; // [esp+0h] [ebp-34h] BYREF
  int v26; // [esp+10h] [ebp-24h]
  int v27; // [esp+14h] [ebp-20h]
  int v28; // [esp+18h] [ebp-1Ch]
  signed int v29; // [esp+20h] [ebp-14h]
  signed int v30; // [esp+24h] [ebp-10h]
  signed int v31; // [esp+28h] [ebp-Ch]
  signed int v32; // [esp+2Ch] [ebp-8h]
  char **v33; // [esp+30h] [ebp-4h]
  int v34; // [esp+3Ch] [ebp+8h]
  int v35; // [esp+3Ch] [ebp+8h]
  int v36; // [esp+3Ch] [ebp+8h]
  int v37; // [esp+3Ch] [ebp+8h]
  signed int v38; // [esp+40h] [ebp+Ch]
  int v39; // [esp+40h] [ebp+Ch]
  int SubFile; // [esp+44h] [ebp+10h]
  unsigned __int8 *v41; // [esp+44h] [ebp+10h]

  if ( !MEMORY[0x89E7C5] ) /*0x47efed*/
  {
    MEMORY[0x89E7C5] = 1; /*0x47eff6*/
    MEMORY[0x89E794] = SearchMIXFile(aShroudShp, 0); /*0x47f009*/
    MEMORY[0x89E790] = SearchMIXFile(aFogShp, 0); /*0x47f013*/
  }
  if ( (*(_DWORD *)MEMORY[0xA8B230] & 0x1000) != 0 ) /*0x47f022*/
    v33 = (char **)MEMORY[0x89E790]; /*0x47f02a*/
  else
    v33 = (char **)MEMORY[0x89E794]; /*0x47f035*/
  FoundationSize = Building::GetFoundationSize(v25, a3); /*0x47f046*/
  v26 = *FoundationSize; /*0x47f053*/
  v5 = a2[1]; /*0x47f059*/
  v27 = FoundationSize[1]; /*0x47f05c*/
  v28 = FoundationSize[2]; /*0x47f062*/
  v6 = a1[1]; /*0x47f065*/
  result = v27 + v6 + FoundationSize[3]; /*0x47f06d*/
  v30 = result; /*0x47f074*/
  if ( (int)result >= v5 + 1 ) /*0x47f077*/
  {
    v38 = v5 + a2[3]; /*0x47f084*/
    result = v38; /*0x47f080*/
    if ( v6 < v38 ) /*0x47f087*/
    {
      result = *a1; /*0x47f08d*/
      v8 = v26 + *a1 + v28; /*0x47f097*/
      v34 = *a2; /*0x47f09b*/
      v29 = v8; /*0x47f0a1*/
      if ( v8 >= v34 + 1 ) /*0x47f0a4*/
      {
        v9 = v34; /*0x47f0ad*/
        v31 = v34 + a2[2]; /*0x47f0b4*/
        if ( (int)result < v31 ) /*0x47f0b7*/
        {
          v35 = v5; /*0x47f0c0*/
          if ( v5 <= v6 + v27 ) /*0x47f0c8*/
            v35 = v6 + v27; /*0x47f0ca*/
          v10 = v35 - v6 - v27; /*0x47f0d5*/
          v32 = v38; /*0x47f0dc*/
          if ( v38 >= v30 ) /*0x47f0df*/
            v32 = v30; /*0x47f0e1*/
          if ( v9 <= (int)(result + v26) ) /*0x47f0ec*/
            v9 = result + v26; /*0x47f0ee*/
          v11 = v31; /*0x47f0f0*/
          v12 = v9 - result - v26; /*0x47f0f7*/
          if ( v31 >= v29 ) /*0x47f0fe*/
          {
            v39 = v29; /*0x47f105*/
            v11 = v29; /*0x47f108*/
          }
          else
          {
            v39 = v31; /*0x47f100*/
          }
          v31 = v28 + v9 - v11; /*0x47f118*/
          v30 = v9 + *((_DWORD *)MEMORY[0x87E8A4] + 10) - v11; /*0x47f12e*/
          SubFile = MixFileClass::GetSubFile(v33, a3); /*0x47f142*/
          result = StreamClass::ReadAndSeek((int)MEMORY[0x87E8A4], v9, v35 - MEMORY[0x886FA4]); /*0x47f14c*/
          v13 = v32 - v35; /*0x47f15b*/
          v14 = (v32 - v35) * *((_DWORD *)MEMORY[0x87E8A4] + 10); /*0x47f16d*/
          v41 = (unsigned __int8 *)(v12 + v28 * v10 + SubFile); /*0x47f172*/
          v33 = (char **)result; /*0x47f178*/
          v15 = MEMORY[0x87E8A4]; /*0x47f18a*/
          if ( result + 2 * (v14 + v39 + 0x7FFFFFFF * v9) + 4 < *((_DWORD *)MEMORY[0x87E8A4] + 7) ) /*0x47f193*/
          {
            v29 = v32 - v35; /*0x47f20d*/
            v37 = v39 - v9; /*0x47f212*/
            v19 = v41; /*0x47f215*/
            v20 = v33; /*0x47f218*/
            v21 = v13; /*0x47f21b*/
            v22 = 2 * v30; /*0x47f221*/
            do /*0x47f242*/
            {
              v23 = v37; /*0x47f223*/
              do /*0x47f23a*/
              {
                result = *v19++; /*0x47f228*/
                if ( result != 254 ) /*0x47f231*/
                  *(_WORD *)v20 = result; /*0x47f233*/
                v20 = (char **)((char *)v20 + 2); /*0x47f236*/
                v24 = v23-- <= 1; /*0x47f239*/
              }
              while ( !v24 ); /*0x47f23a*/
              v19 += v31; /*0x47f23c*/
              v20 = (char **)((char *)v20 + v22); /*0x47f23f*/
              v24 = v21-- <= 1; /*0x47f241*/
            }
            while ( !v24 ); /*0x47f242*/
          }
          else if ( v35 < v32 ) /*0x47f19d*/
          {
            v36 = v32 - v35; /*0x47f1a3*/
            do /*0x47f1ff*/
            {
              if ( v9 < v39 ) /*0x47f1ab*/
              {
                v16 = v39 - v9; /*0x47f1af*/
                do /*0x47f1db*/
                {
                  v17 = *v41; /*0x47f1b4*/
                  if ( *v41++ != 0xFE ) /*0x47f1b7*/
                  {
                    *(_WORD *)result = v17; /*0x47f1c4*/
                    v15 = MEMORY[0x87E8A4]; /*0x47f1c7*/
                  }
                  result += 2; /*0x47f1d0*/
                  if ( result >= v15[7] ) /*0x47f1d5*/
                    result -= v15[8]; /*0x47f1d7*/
                  --v16; /*0x47f1da*/
                }
                while ( v16 ); /*0x47f1db*/
              }
              result += 2 * v30; /*0x47f1e6*/
              v41 += v31; /*0x47f1f0*/
              if ( result >= v15[7] ) /*0x47f1f3*/
                result -= v15[8]; /*0x47f1f5*/
              --v36; /*0x47f1fc*/
            }
            while ( v36 ); /*0x47f1ff*/
          }
        }
      }
    }
  }
  return result; /*0x47f204*/
}
}
} // namespace gamemd

// 0x47F250
namespace gamemd {
unsigned short * RenderFogOfWarOverlay(int a1, int * a2, unsigned int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_WORD *__stdcall RenderFogOfWarOverlay(int a1, int *a2, unsigned int a3)
{
  int *FoundationSizeBuilding; // eax
  int v5; // ebp
  int v6; // esi
  int v7; // edx
  _WORD *result; // eax
  int v9; // ecx
  int v10; // ebx
  int v11; // edi
  int v12; // ebx
  int v13; // esi
  int v14; // ebp
  int v15; // edi
  _DWORD *v16; // edx
  unsigned __int8 *v17; // edi
  int v18; // esi
  unsigned __int8 v19; // bl
  __int16 v20; // cx
  int v21; // ecx
  unsigned __int8 *v22; // esi
  int v23; // edi
  unsigned __int8 v24; // dl
  int v25; // ecx
  bool v26; // zf
  int v27; // [esp+4h] [ebp-28h]
  int v28; // [esp+4h] [ebp-28h]
  _WORD *v29; // [esp+8h] [ebp-24h]
  int v30; // [esp+8h] [ebp-24h]
  int v31; // [esp+Ch] [ebp-20h]
  int v32; // [esp+14h] [ebp-18h]
  int v33[4]; // [esp+1Ch] [ebp-10h] BYREF
  int v34; // [esp+30h] [ebp+4h]
  _WORD *v35; // [esp+30h] [ebp+4h]
  int v36; // [esp+30h] [ebp+4h]
  int v37; // [esp+30h] [ebp+4h]
  _WORD *v38; // [esp+34h] [ebp+8h]
  int v39; // [esp+34h] [ebp+8h]
  int SubFileMixFileClass; // [esp+38h] [ebp+Ch]
  unsigned __int8 *v41; // [esp+38h] [ebp+Ch]

  if ( !MEMORY[0x89E7C6] ) /*0x47f25a*/
  {
    MEMORY[0x89E7C6] = 1; /*0x47f263*/
    MEMORY[0x89E760] = SearchMIXFile(aFogShp, 0); /*0x47f26f*/
  }
  FoundationSizeBuilding = Building::GetFoundationSize(v33, a3); /*0x47f288*/
  v31 = *FoundationSizeBuilding; /*0x47f293*/
  v5 = FoundationSizeBuilding[1]; /*0x47f297*/
  v6 = a2[1]; /*0x47f29a*/
  v32 = FoundationSizeBuilding[2]; /*0x47f2a3*/
  v7 = *(_DWORD *)(a1 + 4); /*0x47f2ae*/
  result = (_WORD *)(v5 + v7 + FoundationSizeBuilding[3]); /*0x47f2b3*/
  v29 = result; /*0x47f2b7*/
  if ( (int)result >= v6 + 1 )
  {
    v38 = (_WORD *)(v6 + a2[3]); /*0x47f2c8*/
    result = v38; /*0x47f2c4*/
    if ( v7 < (int)v38 )
    {
      result = *(_WORD **)a1; /*0x47f2d2*/
      v9 = v31 + *(_DWORD *)a1 + v32; /*0x47f2de*/
      v34 = *a2; /*0x47f2e2*/
      if ( v9 >= *a2 + 1 )
      {
        v10 = a2[2]; /*0x47f2ef*/
        v11 = *a2; /*0x47f2f2*/
        v27 = v34 + v10; /*0x47f2fa*/
        if ( (int)result < v34 + v10 )
        {
          v12 = v7 + v5; /*0x47f304*/
          if ( v6 > v7 + v5 ) /*0x47f309*/
            v12 = v6; /*0x47f30b*/
          v13 = v12 - v7 - v5; /*0x47f315*/
          v35 = v38; /*0x47f31d*/
          if ( (int)v38 >= (int)v29 ) /*0x47f321*/
            v35 = v29; /*0x47f323*/
          v14 = (int)result + v31; /*0x47f32b*/
          if ( v11 > (int)result + v31 ) /*0x47f330*/
            v14 = v11; /*0x47f332*/
          v15 = v14 - (_DWORD)result - v31; /*0x47f33c*/
          if ( v27 < v9 ) /*0x47f344*/
            v9 = v27; /*0x47f346*/
          v39 = v9; /*0x47f350*/
          v28 = v32 + v14 - v9; /*0x47f362*/
          v30 = v14 + *((_DWORD *)MEMORY[0x87E8A4] + 10) - v9; /*0x47f373*/
          SubFileMixFileClass = MixFileClass::GetSubFile((char **)MEMORY[0x89E760], a3); /*0x47f38d*/
          result = (_WORD *)StreamClass::ReadAndSeek((int)MEMORY[0x87E8A4], v14, v12 - MEMORY[0x886FA4]); /*0x47f397*/
          v16 = MEMORY[0x87E8A4]; /*0x47f3a5*/
          v41 = (unsigned __int8 *)(v15 + v32 * v13 + SubFileMixFileClass); /*0x47f3b4*/
          if ( (unsigned int)&result[((_DWORD)v35 - v12) * *((_DWORD *)MEMORY[0x87E8A4] + 10)
                                   + 2
                                   + v39
                                   + 0x7FFFFFFF * v14] < *((_DWORD *)MEMORY[0x87E8A4] + 7) )
          {
            if ( v12 < (int)v35 )
            {
              v22 = v41; /*0x47f48c*/
              v37 = (int)v35 - v12; /*0x47f490*/
              do
              {
                if ( v14 < v39 )
                {
                  v23 = v39 - v14; /*0x47f4a0*/
                  do
                  {
                    v24 = *v22++; /*0x47f4a2*/
                    if ( v24 <= 0x7Fu )
                    {
                      if ( *result == 127 )
                      {
                        *result = v24; /*0x47f4bb*/
                      }
                      else
                      {
                        v25 = (unsigned __int16)*result + v24 - 127; /*0x47f4d0*/
                        *result = v25 <= 0 ? 0 : v25;
                      }
                    }
                    ++result; /*0x47f4e1*/
                    --v23; /*0x47f4e4*/
                  }
                  while ( v23 );
                }
                v22 += v28; /*0x47f4eb*/
                v26 = v37 == 1; /*0x47f4ed*/
                result += v30; /*0x47f4ee*/
                --v37; /*0x47f4f1*/
              }
              while ( !v26 );
            }
          }
          else if ( v12 < (int)v35 )
          {
            v17 = v41; /*0x47f3ed*/
            v36 = (int)v35 - v12; /*0x47f3f1*/
            do
            {
              if ( v14 < v39 )
              {
                v18 = v39 - v14; /*0x47f401*/
                do
                {
                  v19 = *v17++; /*0x47f403*/
                  if ( v19 <= 0x7Fu )
                  {
                    if ( *result == 127 )
                    {
                      v20 = v19; /*0x47f41b*/
                    }
                    else
                    {
                      v21 = (unsigned __int16)*result + v19 - 127; /*0x47f42f*/
                      v20 = v21 <= 0 ? 0 : v21;
                    }
                    *result = v20; /*0x47f43d*/
                    v16 = MEMORY[0x87E8A4]; /*0x47f440*/
                  }
                  if ( (unsigned int)++result >= v16[7] ) /*0x47f44e*/
                    result = (_WORD *)((char *)result - v16[8]); /*0x47f450*/
                  --v18; /*0x47f453*/
                }
                while ( v18 );
              }
              v17 += v28; /*0x47f45a*/
              result += v30; /*0x47f45c*/
              if ( (unsigned int)result >= v16[7] ) /*0x47f464*/
                result = (_WORD *)((char *)result - v16[8]); /*0x47f466*/
              --v36; /*0x47f46e*/
            }
            while ( v36 );
          }
        }
      }
    }
  }
  return result; /*0x47f478*/
}
}
} // namespace gamemd

// 0x470C40
namespace gamemd {
LRESULT sub_470C40(CampaignScore * aP0, int nIDDlgItem, wchar_t * Format)
{
{
    HWND DlgItem;
    CampaignScore *v7;
    wchar_t Buffer[32];
    swprintf(Buffer, (const size_t)&g_Str_Fmt_PctD, Format, v7);
    DlgItem = GetDlgItem((HWND)aP0, nIDDlgItem);
    return SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)Buffer);
}
}
} // namespace gamemd

// 0x471540
namespace gamemd {
void sub_471540()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_89E120 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x471570
namespace gamemd {
void sub_471570()
{
{
    DataGlobal_89E170 = DataGlobal_89E120 / 60.0;
}
}
} // namespace gamemd

// 0x471590
namespace gamemd {
void sub_471590()
{
{
    DataGlobal_89E158 = 1.0 / DataGlobal_89E170;
}
}
} // namespace gamemd

// 0x4715B0
namespace gamemd {
void sub_4715B0()
{
{
    DataGlobal_89E150 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x4715D0
namespace gamemd {
void sub_4715D0()
{
{
    DataGlobal_89E128 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x4715F0
namespace gamemd {
void sub_4715F0()
{
{
    DataGlobal_89E0E8 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x471610
namespace gamemd {
long long sub_471610()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_89E0E8 - DataGlobal_89E128);
    result = Math::RoundToInt(v0 * DataGlobal_89E120 * 0.5);
    DataGlobal_89E178 = result;
    return result;
}
}
} // namespace gamemd

// 0x471650
namespace gamemd {
void sub_471650()
{
{
    DataGlobal_89E130 = Math::ArcTan((double)DataGlobal_89E178 * 0.00390625);
}
}
} // namespace gamemd

// 0x471680
namespace gamemd {
void sub_471680()
{
{
    DataGlobal_89E148 = Math::ArcTan((double)(2 * DataGlobal_89E178) / DataGlobal_89E120);
}
}
} // namespace gamemd

// 0x4716B0
namespace gamemd {
long long sub_4716B0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_89E178) + 0.5);
    DataGlobal_89E16C = result;
    return result;
}
}
} // namespace gamemd

// 0x4716E0
namespace gamemd {
int sub_4716E0()
{
{
    DataGlobal_89E118 = 0;
    DataGlobal_89E11A = 0;
    return 0;
}
}
} // namespace gamemd

// 0x471710
namespace gamemd {
int sub_471710()
{
{
    DataGlobal_89E168 = 0;
    DataGlobal_89E160 = 128;
    DataGlobal_89E164 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x471730
namespace gamemd {
int sub_471730()
{
{
    DataGlobal_89E108 = 0;
    DataGlobal_89E10C = 0;
    DataGlobal_89E110 = 0;
    DataGlobal_89E114 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x473190
namespace gamemd {
void sub_473190()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_89E1A0 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x4731C0
namespace gamemd {
void sub_4731C0()
{
{
    DataGlobal_89E1F0 = DataGlobal_89E1A0 / 60.0;
}
}
} // namespace gamemd

// 0x4731E0
namespace gamemd {
void sub_4731E0()
{
{
    DataGlobal_89E1D8 = 1.0 / DataGlobal_89E1F0;
}
}
} // namespace gamemd

// 0x473200
namespace gamemd {
void sub_473200()
{
{
    DataGlobal_89E1D0 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x473220
namespace gamemd {
void sub_473220()
{
{
    DataGlobal_89E1A8 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x473240
namespace gamemd {
void sub_473240()
{
{
    DataGlobal_89E180 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x473260
namespace gamemd {
long long sub_473260()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_89E180 - DataGlobal_89E1A8);
    result = Math::RoundToInt(v0 * DataGlobal_89E1A0 * 0.5);
    DataGlobal_89E1F8 = result;
    return result;
}
}
} // namespace gamemd

// 0x4732A0
namespace gamemd {
void sub_4732A0()
{
{
    DataGlobal_89E1B0 = Math::ArcTan((double)DataGlobal_89E1F8 * 0.00390625);
}
}
} // namespace gamemd

// 0x4732D0
namespace gamemd {
void sub_4732D0()
{
{
    DataGlobal_89E1C8 = Math::ArcTan((double)(2 * DataGlobal_89E1F8) / DataGlobal_89E1A0);
}
}
} // namespace gamemd

// 0x473300
namespace gamemd {
long long sub_473300()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_89E1F8) + 0.5);
    DataGlobal_89E1EC = result;
    return result;
}
}
} // namespace gamemd

// 0x473330
namespace gamemd {
int sub_473330()
{
{
    DataGlobal_89E198 = 0;
    DataGlobal_89E19A = 0;
    return 0;
}
}
} // namespace gamemd

// 0x473340
namespace gamemd {
int sub_473340()
{
{
    DataGlobal_89E1B8 = 0;
    DataGlobal_89E1BC = 0;
    DataGlobal_89E1C0 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x473360
namespace gamemd {
int sub_473360()
{
{
    DataGlobal_89E1E8 = 0;
    DataGlobal_89E1E0 = 128;
    DataGlobal_89E1E4 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x473380
namespace gamemd {
int sub_473380()
{
{
    DataGlobal_89E188 = 0;
    DataGlobal_89E18C = 0;
    DataGlobal_89E190 = 0;
    DataGlobal_89E194 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x473540
namespace gamemd {
void sub_473540()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_89E220 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x473570
namespace gamemd {
void sub_473570()
{
{
    DataGlobal_89E270 = DataGlobal_89E220 / 60.0;
}
}
} // namespace gamemd

// 0x473590
namespace gamemd {
void sub_473590()
{
{
    DataGlobal_89E258 = 1.0 / DataGlobal_89E270;
}
}
} // namespace gamemd

// 0x4735B0
namespace gamemd {
void sub_4735B0()
{
{
    DataGlobal_89E250 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x4735D0
namespace gamemd {
void sub_4735D0()
{
{
    DataGlobal_89E228 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x4735F0
namespace gamemd {
void sub_4735F0()
{
{
    DataGlobal_89E200 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x473610
namespace gamemd {
long long sub_473610()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_89E200 - DataGlobal_89E228);
    result = Math::RoundToInt(v0 * DataGlobal_89E220 * 0.5);
    DataGlobal_89E278 = result;
    return result;
}
}
} // namespace gamemd

// 0x473680
namespace gamemd {
void sub_473680()
{
{
    DataGlobal_89E248 = Math::ArcTan((double)(2 * DataGlobal_89E278) / DataGlobal_89E220);
}
}
} // namespace gamemd

// 0x4736B0
namespace gamemd {
long long sub_4736B0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_89E278) + 0.5);
    DataGlobal_89E26C = result;
    return result;
}
}
} // namespace gamemd

// 0x4736E0
namespace gamemd {
int sub_4736E0()
{
{
    DataGlobal_89E218 = 0;
    DataGlobal_89E21A = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4736F0
namespace gamemd {
int sub_4736F0()
{
{
    DataGlobal_89E238 = 0;
    DataGlobal_89E23C = 0;
    DataGlobal_89E240 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x473710
namespace gamemd {
int sub_473710()
{
{
    DataGlobal_89E268 = 0;
    DataGlobal_89E260 = 128;
    DataGlobal_89E264 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x473730
namespace gamemd {
int sub_473730()
{
{
    DataGlobal_89E208 = 0;
    DataGlobal_89E20C = 0;
    DataGlobal_89E210 = 0;
    DataGlobal_89E214 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x473960
namespace gamemd {
char * sub_473960(unsigned int a1)
{
{
    if ( a1 >= 0xB )
    return g_Str__none_;
    else
    return DataGlobal_81B7CC[2 * a1];
}
}
} // namespace gamemd

// 0x4739D0
namespace gamemd {
int sub_4739D0()
{
{
    DataGlobal_89E280 = 0;
    DataGlobal_89E284 = 0;
    DataGlobal_89E288 = 0;
    DataGlobal_89E28C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x473FE0
namespace gamemd {
void sub_473FE0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_89E2B0 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x474010
namespace gamemd {
void sub_474010()
{
{
    DataGlobal_89E300 = DataGlobal_89E2B0 / 60.0;
}
}
} // namespace gamemd

// 0x474030
namespace gamemd {
void sub_474030()
{
{
    DataGlobal_89E2E8 = 1.0 / DataGlobal_89E300;
}
}
} // namespace gamemd

// 0x474050
namespace gamemd {
void sub_474050()
{
{
    DataGlobal_89E2E0 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x474070
namespace gamemd {
void sub_474070()
{
{
    DataGlobal_89E2B8 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x474090
namespace gamemd {
void sub_474090()
{
{
    DataGlobal_89E290 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x4740B0
namespace gamemd {
long long sub_4740B0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_89E290 - DataGlobal_89E2B8);
    result = Math::RoundToInt(v0 * DataGlobal_89E2B0 * 0.5);
    DataGlobal_89E308 = result;
    return result;
}
}
} // namespace gamemd

// 0x4740F0
namespace gamemd {
void sub_4740F0()
{
{
    DataGlobal_89E2C0 = Math::ArcTan((double)DataGlobal_89E308 * 0.00390625);
}
}
} // namespace gamemd

// 0x474120
namespace gamemd {
void sub_474120()
{
{
    DataGlobal_89E2D8 = Math::ArcTan((double)(2 * DataGlobal_89E308) / DataGlobal_89E2B0);
}
}
} // namespace gamemd

// 0x474150
namespace gamemd {
long long sub_474150()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_89E308) + 0.5);
    DataGlobal_89E2FC = result;
    return result;
}
}
} // namespace gamemd

// 0x474180
namespace gamemd {
int sub_474180()
{
{
    DataGlobal_89E2A8 = 0;
    DataGlobal_89E2AA = 0;
    return 0;
}
}
} // namespace gamemd

// 0x474190
namespace gamemd {
int sub_474190()
{
{
    DataGlobal_89E2C8 = 0;
    DataGlobal_89E2CC = 0;
    DataGlobal_89E2D0 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4741B0
namespace gamemd {
int sub_4741B0()
{
{
    DataGlobal_89E2F8 = 0;
    DataGlobal_89E2F0 = 128;
    DataGlobal_89E2F4 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x4741D0
namespace gamemd {
int sub_4741D0()
{
{
    DataGlobal_89E298 = 0;
    DataGlobal_89E29C = 0;
    DataGlobal_89E2A0 = 0;
    DataGlobal_89E2A4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x474660
namespace gamemd {
char E4Recv_474660::sub_474660(unsigned char * Block, char * a3, int a4)
{
{
    return INIClass::SetDouble(this, Block, a3, (double)a4 * 0.00390625);
}
}
} // namespace gamemd

// 0x476EA0
namespace gamemd {
void E4Recv_476EA0::sub_476EA0()
{
{
    this->M64 = 0;
}
}
} // namespace gamemd

// 0x478990
namespace gamemd {
int sub_478990()
{
{
    DataGlobal_89E318 = 0;
    DataGlobal_89E31C = 0;
    DataGlobal_89E320 = 0;
    DataGlobal_89E324 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4789B0
namespace gamemd {
void sub_4789B0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_89E330 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x4789E0
namespace gamemd {
void sub_4789E0()
{
{
    DataGlobal_89E380 = DataGlobal_89E330 / 60.0;
}
}
} // namespace gamemd

// 0x478A00
namespace gamemd {
void sub_478A00()
{
{
    DataGlobal_89E368 = 1.0 / DataGlobal_89E380;
}
}
} // namespace gamemd

// 0x478A20
namespace gamemd {
void sub_478A20()
{
{
    DataGlobal_89E360 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x478A40
namespace gamemd {
void sub_478A40()
{
{
    DataGlobal_89E338 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x478A60
namespace gamemd {
void sub_478A60()
{
{
    DataGlobal_89E310 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x478A80
namespace gamemd {
long long sub_478A80()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_89E310 - DataGlobal_89E338);
    result = Math::RoundToInt(v0 * DataGlobal_89E330 * 0.5);
    DataGlobal_89E388 = result;
    return result;
}
}
} // namespace gamemd

// 0x478AC0
namespace gamemd {
void sub_478AC0()
{
{
    DataGlobal_89E340 = Math::ArcTan((double)DataGlobal_89E388 * 0.00390625);
}
}
} // namespace gamemd

// 0x478AF0
namespace gamemd {
void sub_478AF0()
{
{
    DataGlobal_89E358 = Math::ArcTan((double)(2 * DataGlobal_89E388) / DataGlobal_89E330);
}
}
} // namespace gamemd

// 0x478B20
namespace gamemd {
long long sub_478B20()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_89E388) + 0.5);
    DataGlobal_89E37C = result;
    return result;
}
}
} // namespace gamemd

// 0x478B50
namespace gamemd {
int sub_478B50()
{
{
    DataGlobal_89E328 = 0;
    DataGlobal_89E32A = 0;
    return 0;
}
}
} // namespace gamemd

// 0x478B60
namespace gamemd {
int sub_478B60()
{
{
    DataGlobal_89E348 = 0;
    DataGlobal_89E34C = 0;
    DataGlobal_89E350 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x478B80
namespace gamemd {
int sub_478B80()
{
{
    DataGlobal_89E378 = 0;
    DataGlobal_89E370 = 128;
    DataGlobal_89E374 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x479080
namespace gamemd {
int sub_479080()
{
{
    DataGlobal_89E390 = 0;
    DataGlobal_89E394 = 0;
    DataGlobal_89E398 = 0;
    DataGlobal_89E39C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4796E0
namespace gamemd {
int sub_4796E0()
{
{
    memset(&DataGlobal_89E3A8, 0, 0x68u);
    return atexit(nullsub_109);
}
}
} // namespace gamemd

// 0x479700
namespace gamemd {
void nullsub_109()
{
  ;
}
} // namespace gamemd

// 0x479730
namespace gamemd {
void nullsub_110()
{
  ;
}
} // namespace gamemd

// 0x479900
namespace gamemd {
int sub_479900(char a1)
{
{
    UINT v1;
    DWORD v3;
    HANDLE FileA;
    char Buffer[8];
    CHAR FileName[8];
    sprintf(Buffer, g_Str_Trace__c__, a1 + 65);
    v1 = GetDriveTypeA(Buffer) - 2;
    if ( v1 )
  {
    if ( v1 != 3 )
    {
    Debug::Log();
    return -1;
    }
    v3 = 0x80000000;
  }
    else
  {
    v3 = -1073741824;
  }
    sprintf(FileName, g_Str_Trace______c_, a1 + 65);
    FileA = CreateFileA(FileName, v3, 3u, 0, 3u, 0, 0);
    if ( FileA == (HANDLE)-1 )
    Debug::Log();
    return (int)FileA;
}
}
} // namespace gamemd

// 0x4799D0
namespace gamemd {
char sub_4799D0(HANDLE hDevice)
{
{
    HANDLE v1;
    int v2;
    v1 = hDevice;
    v2 = 0;
    while ( !DeviceIoControl(v1, 0x90018u, 0, 0, 0, 0, (LPDWORD)&hDevice, 0) )
  {
    GetLastError();
    Debug::Log();
    Sleep(0x1F4u);
    if ( ++v2 >= 20 )
    return 0;
  }
    return 1;
}
}
} // namespace gamemd

// 0x479A40
namespace gamemd {
char sub_479A40(HANDLE hDevice)
{
{
    HANDLE v1;
    int v2;
    v1 = hDevice;
    v2 = 0;
    while ( !DeviceIoControl(v1, 0x9001Cu, 0, 0, 0, 0, (LPDWORD)&hDevice, 0) )
  {
    GetLastError();
    Debug::Log();
    Sleep(0x1F4u);
    if ( ++v2 >= 20 )
    return 0;
  }
    return 1;
}
}
} // namespace gamemd

// 0x47A1B0
namespace ra2 {
namespace game {
char ObjectClass::sub_47A1B0(DWORD BytesReturned)
{
{
    AnimClass *FileA;
    char v5;
    Debug::Log();
    Debug::Log();
    LOBYTE(BytesReturned) = BytesReturned + 1;
    FileA = (AnimClass *)CreateFileA(g_Str_____vwin32, 0, 0, 0, 0, 0x4000000u, 0);
    Debug::Log();
    if ( CDROM::LockVolume(this, FileA, BytesReturned, 0, 0) )
  {
    Debug::Log();
    Debug::Log();
    if ( sub_47A560(FileA, BytesReturned) )
    {
    Debug::Log();
    v5 = 1;
    }
    else
    {
    Debug::Log();
    v5 = 0;
    }
    DriveControlCD(this, FileA, BytesReturned);
    CloseHandle(FileA);
    Debug::Log();
    return v5;
  }
    else
  {
    Debug::Log();
    return 0;
  }
}
}
} // namespace game
} // namespace ra2

// 0x47A2D0
namespace ra2 {
namespace game {
char ObjectClass::sub_47A2D0(DWORD BytesReturned)
{
{
    AnimClass *FileA;
    char v5;
    Debug::Log();
    Debug::Log();
    LOBYTE(BytesReturned) = BytesReturned + 1;
    FileA = (AnimClass *)CreateFileA(g_Str_____vwin32, 0, 0, 0, 0, 0x4000000u, 0);
    Debug::Log();
    if ( CDROM::LockVolume(this, FileA, BytesReturned, 0, 0) )
  {
    Debug::Log();
    Debug::Log();
    if ( CDROM::DeviceIoControl(FileA, BytesReturned) )
    {
    Debug::Log();
    v5 = 1;
    }
    else
    {
    Debug::Log();
    v5 = 0;
    }
    DriveControlCD(this, FileA, BytesReturned);
    CloseHandle(FileA);
    Debug::Log();
    return v5;
  }
    else
  {
    Debug::Log();
    return 0;
  }
}
}
} // namespace game
} // namespace ra2

// 0x47A560
namespace gamemd {
bool sub_47A560(HANDLE hDevice, DWORD BytesReturned)
{
{
    char v2;
    char v4[2];
    int InBuffer[7];
    v2 = BytesReturned;
    memset(&InBuffer[1], 0, 0x18u);
    v4[1] = 0;
    CDROM::DeviceIoControl(hDevice, BytesReturned);
    InBuffer[0] = v2;
    InBuffer[1] = v4;
    v4[0] = 0;
    InBuffer[3] = 17421;
    InBuffer[2] = 2120;
    if ( !DeviceIoControl(hDevice, 1u, InBuffer, 0x1Cu, InBuffer, 0x1Cu, &BytesReturned, 0) )
  {
    GetLastError();
    Debug::Log();
    return 0;
  }
    return (InBuffer[6] & 1) == 0;
}
}
} // namespace gamemd

// 0x47A620
namespace gamemd {
bool sub_47A620(HANDLE hDevice, DWORD BytesReturned)
{
{
    int InBuffer[7];
    memset(&InBuffer[1], 0, 0x18u);
    InBuffer[0] = (char)BytesReturned;
    InBuffer[3] = 17421;
    InBuffer[2] = 2121;
    if ( !DeviceIoControl(hDevice, 1u, InBuffer, 0x1Cu, InBuffer, 0x1Cu, &BytesReturned, 0) )
  {
    GetLastError();
    Debug::Log();
    return 0;
  }
    return (InBuffer[6] & 1) == 0;
}
}
} // namespace gamemd

// 0x47AAC0
namespace gamemd {
BOOL sub_47AAC0()
{
{
    void **v0;
    void **v1;
    v0 = (void **)CmdLine_NoCD;
    if ( CmdLine_NoCD )
  {
    do
    {
    v1 = (void **)*v0;
    if ( v0[1] )
    free(v0[1]);
    __3_YAXPAX_Z(v0);
    v0 = v1;
    }
    while ( v1 );
  }
    CmdLine_NoCD = 0;
    return Game::FindGameDirectoryCD(DataGlobal_89E41C);
}
}
} // namespace gamemd

// 0x47ADC0
namespace gamemd {
void sub_47ADC0()
{
{
    void **v0;
    void **v1;
    v0 = (void **)CmdLine_NoCD;
    if ( CmdLine_NoCD )
  {
    do
    {
    v1 = (void **)*v0;
    if ( v0[1] )
    free(v0[1]);
    __3_YAXPAX_Z(v0);
    v0 = v1;
    }
    while ( v1 );
    CmdLine_NoCD = 0;
  }
    else
  {
    CmdLine_NoCD = 0;
  }
}
}
} // namespace gamemd

// 0x47B150
namespace gamemd {
void sub_47B150()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_89E750 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x47B180
namespace gamemd {
void sub_47B180()
{
{
    DataGlobal_89E7B8 = DataGlobal_89E750 / 60.0;
}
}
} // namespace gamemd

// 0x47B1A0
namespace gamemd {
void sub_47B1A0()
{
{
    DataGlobal_89E7A0 = 1.0 / DataGlobal_89E7B8;
}
}
} // namespace gamemd

// 0x47B1C0
namespace gamemd {
void sub_47B1C0()
{
{
    DataGlobal_89E798 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x47B1E0
namespace gamemd {
void sub_47B1E0()
{
{
    DataGlobal_89E758 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x47B200
namespace gamemd {
void sub_47B200()
{
{
    DataGlobal_89E728 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x47B220
namespace gamemd {
long long sub_47B220()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_89E728 - DataGlobal_89E758);
    result = Math::RoundToInt(v0 * DataGlobal_89E750 * 0.5);
    DataGlobal_89E7C0 = result;
    return result;
}
}
} // namespace gamemd

// 0x47B260
namespace gamemd {
void sub_47B260()
{
{
    DataGlobal_89E768 = Math::ArcTan((double)DataGlobal_89E7C0 * 0.00390625);
}
}
} // namespace gamemd

// 0x47B290
namespace gamemd {
void sub_47B290()
{
{
    DataGlobal_89E788 = Math::ArcTan((double)(2 * DataGlobal_89E7C0) / DataGlobal_89E750);
}
}
} // namespace gamemd

// 0x47B2C0
namespace gamemd {
long long sub_47B2C0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_89E7C0) + 0.5);
    DataGlobal_89E7B4 = result;
    return result;
}
}
} // namespace gamemd

// 0x47B2F0
namespace gamemd {
int sub_47B2F0()
{
{
    DataGlobal_89E748 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x47B300
namespace gamemd {
int sub_47B300()
{
{
    DataGlobal_89E778 = 0;
    DataGlobal_89E77C = 0;
    DataGlobal_89E780 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x47B320
namespace gamemd {
int sub_47B320()
{
{
    DataGlobal_89E7B0 = 0;
    DataGlobal_89E7A8 = 128;
    DataGlobal_89E7AC = 128;
    return 128;
}
}
} // namespace gamemd

// 0x47B340
namespace gamemd {
int sub_47B340()
{
{
    DataGlobal_89E730 = 0;
    DataGlobal_89E734 = 0;
    DataGlobal_89E738 = 0;
    DataGlobal_89E73C = 0;
    return 0;
}
}
} // namespace gamemd
