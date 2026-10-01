// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_470C30_e4.hpp"
#include "e4/classes/E4Recv_473750_e4.hpp"
#include "e4/classes/E4Recv_474540_e4.hpp"
#include "e4/classes/E4Recv_474660_e4.hpp"
#include "e4/classes/E4Recv_476E20_e4.hpp"
#include "e4/classes/E4Recv_476EA0_e4.hpp"
#include "e4/classes/E4Recv_479740_e4.hpp"
#include "e4/classes/E4Recv_47AA00_e4.hpp"
#include "e4/classes/Building_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/DynamicVectorClass_flat_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/E4Recv_4880F0_e4.hpp"
#include "e4/classes/Control_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/XSurface_e4.hpp"
#include "app/cmdline.hpp"
#include "e4/classes/Techno_e4.hpp"
#include "e4/classes/StreamClass_e4.hpp"

// 0x472A80
namespace gamemd {
void _DynamicVectorClass_PAUControlNode::CaptureManagerClass__vt_03_()
{

  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x472a86*/
  this->m_10 = 0; /*0x472a89*/
  if ( v2 && BYTE1(this->m_C) ) /*0x472a90*/
  {
    __3_YAXPAX_Z(v2); /*0x472a96*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x472a9e*/
  }
  BYTE1(this->m_C) = 0; /*0x472aa1*/
  this->m_8 = 0; /*0x472aa4*/

}
}
// 0x472AD0
namespace gamemd {
void _VectorClass_PAUControlNode::CaptureManagerClass__vt_06_(int a2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x472ada*/

}
}
// 0x4770E0
namespace gamemd {
VectorClass_flat * * LoadBuildingTypeClassPrerequisites(unsigned int * a1, unsigned char *** edx0, INIClass * a3, unsigned char * a2, VectorClass a5, int a6, int a7, int a8, void * a4)
{
  char *i; // esi
  char v13; // bl
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  DynamicVector v21; // [esp+2Ch] [ebp-A0h] BYREF

  if ( INIClass::GetString((INIClass *)a2, a3, a4, &g_INI_DefaultBuffer, v21.__pad_20, 128) ) /*0x47710a*/
  {
    DynamicVectorClass::Construct((DynamicVectorClass *)&v21, 0, 0); /*0x477121*/
    *(unsigned int *)v21.__pad_0 = (unsigned int)((void*)&TypeList_int_vftable); /*0x47712a*/
    for ( i = strtok(v21.__pad_20, Str); i; i = strtok(0, Str) ) /*0x477144*/
    {
      if ( !*i ) /*0x47714a*/
        break; /*0x47714d*/
      v13 = 0; /*0x477159*/
      if ( !_strcmpi(i,(const char *)(aPower)) ) /*0x47715b*/
      {
        if ( v21.DynamicVector_field_0x10 < v21.DynamicVector_field_0x8 /*0x477194*/
          || (((unsigned int *)(v21.__pad_C))[1] || !v21.DynamicVector_field_0x8)
          && *(int *)v21.__pad_14 > 0
          && (*(uint8_t (**)(DynamicVector *, int, unsigned int))(*(unsigned int *)v21.__pad_0 + 8))(
               &v21,
               v21.DynamicVector_field_0x8 + *(unsigned int *)v21.__pad_14,
               0) )
        {
          v14 = v21.DynamicVector_field_0x10++; /*0x47719f*/
          *(unsigned int *)(*(unsigned int *)&((unsigned int *)(v21.DynamicVector_field_0x1))[3] + 4 * v14) = -1; /*0x4771aa*/
        }
        v13 = 1; /*0x4771b1*/
      }
      if ( !_strcmpi(i,(const char *)(aFactory)) ) /*0x4771b9*/
      {
        if ( v21.DynamicVector_field_0x10 < v21.DynamicVector_field_0x8 /*0x4771f2*/
          || (((unsigned int *)(v21.__pad_C))[1] || !v21.DynamicVector_field_0x8)
          && *(int *)v21.__pad_14 > 0
          && (*(uint8_t (**)(DynamicVector *, int, unsigned int))(*(unsigned int *)v21.__pad_0 + 8))(
               &v21,
               v21.DynamicVector_field_0x8 + *(unsigned int *)v21.__pad_14,
               0) )
        {
          v15 = v21.DynamicVector_field_0x10++; /*0x4771fd*/
          *(unsigned int *)(*(unsigned int *)&((unsigned int *)(v21.DynamicVector_field_0x1))[3] + 4 * v15) = -2; /*0x477208*/
        }
        v13 = 1; /*0x47720f*/
      }
      if ( !_strcmpi(i, aBarracks) ) /*0x477217*/
      {
        if ( v21.DynamicVector_field_0x10 < v21.DynamicVector_field_0x8 /*0x477250*/
          || (((unsigned int *)(v21.__pad_C))[1] || !v21.DynamicVector_field_0x8)
          && *(int *)v21.__pad_14 > 0
          && (*(uint8_t (**)(DynamicVector *, int, unsigned int))(*(unsigned int *)v21.__pad_0 + 8))(
               &v21,
               v21.DynamicVector_field_0x8 + *(unsigned int *)v21.__pad_14,
               0) )
        {
          v16 = v21.DynamicVector_field_0x10++; /*0x47725b*/
          *(unsigned int *)(*(unsigned int *)&((unsigned int *)(v21.DynamicVector_field_0x1))[3] + 4 * v16) = -3; /*0x477266*/
        }
        v13 = 1; /*0x47726d*/
      }
      if ( !_strcmpi(i, aRadar) ) /*0x477275*/
      {
        if ( v21.DynamicVector_field_0x10 < v21.DynamicVector_field_0x8 /*0x4772ae*/
          || (((unsigned int *)(v21.__pad_C))[1] || !v21.DynamicVector_field_0x8)
          && *(int *)v21.__pad_14 > 0
          && (*(uint8_t (**)(DynamicVector *, int, unsigned int))(*(unsigned int *)v21.__pad_0 + 8))(
               &v21,
               v21.DynamicVector_field_0x8 + *(unsigned int *)v21.__pad_14,
               0) )
        {
          v17 = v21.DynamicVector_field_0x10++; /*0x4772b9*/
          *(unsigned int *)(*(unsigned int *)&((unsigned int *)(v21.DynamicVector_field_0x1))[3] + 4 * v17) = -4; /*0x4772c4*/
        }
        v13 = 1; /*0x4772cb*/
      }
      if ( !_strcmpi(i,(const char *)(aTech)) ) /*0x4772d3*/
      {
        if ( v21.DynamicVector_field_0x10 < v21.DynamicVector_field_0x8 /*0x47730c*/
          || (((unsigned int *)(v21.__pad_C))[1] || !v21.DynamicVector_field_0x8)
          && *(int *)v21.__pad_14 > 0
          && (*(uint8_t (**)(DynamicVector *, int, unsigned int))(*(unsigned int *)v21.__pad_0 + 8))(
               &v21,
               v21.DynamicVector_field_0x8 + *(unsigned int *)v21.__pad_14,
               0) )
        {
          v18 = v21.DynamicVector_field_0x10++; /*0x477317*/
          *(unsigned int *)(*(unsigned int *)&((unsigned int *)(v21.DynamicVector_field_0x1))[3] + 4 * v18) = -5; /*0x477322*/
        }
        v13 = 1; /*0x477329*/
      }
      if ( _strcmpi(i,(const char *)(aProc)) ) /*0x477331*/
      {
        if ( !v13 ) /*0x47738b*/
        {
          v21.DynamicVector_field_0x1C = ((BuildingTypeClass *)((BuildingTypeClass *)i))->FindIndexByName(); /*0x477397*/
          if ( v21.DynamicVector_field_0x1C != -1 ) /*0x47739b*/
            ((DynamicVector *)(&v21))->Add_Alt(&v21.DynamicVector_field_0x1C); /*0x4773a6*/
        }
      }
      else if ( v21.DynamicVector_field_0x10 < v21.DynamicVector_field_0x8 /*0x47736a*/
             || (((unsigned int *)(v21.__pad_C))[1] || !v21.DynamicVector_field_0x8)
             && *(int *)v21.__pad_14 > 0
             && (*(uint8_t (**)(DynamicVector *, int, unsigned int))(*(unsigned int *)v21.__pad_0 + 8))(
                  &v21,
                  v21.DynamicVector_field_0x8 + *(unsigned int *)v21.__pad_14,
                  0) )
      {
        v19 = v21.DynamicVector_field_0x10++; /*0x477375*/
        *(unsigned int *, unsigned int a5)(*(unsigned int *)&v21.DynamicVector_field_0x1[3] + 4 * v19) = -6; /*0x477380*/
      }
    }
    DynamicVectorClass::Copy(a1, &v21); /*0x4773cb*/
    a1->vtable0 = (int)&TypeList_int_vftable; /*0x4773d9*/
    *(unsigned int *)v21.__pad_0 = (unsigned int)((void*)&VectorClass_int_vftable); /*0x4773df*/
    VectorClass::Destroy((int)&v21); /*0x4773e3*/
    a5 = (void*)&VectorClass_int_vftable; /*0x4773ef*/
    VectorClass::Destroy((int, unsigned int a5)&a5); /*0x4773f6*/
    return a1; /*0x4773fb*/
  }
  else
  {
    VectorClass::Copy(a1, &a5); /*0x477413*/
    a5 = (void*)&VectorClass_int_vftable; /*0x47741f*/
    VectorClass::Destroy((int)&a5); /*0x47742a*/
    return a1; /*0x47742f*/
  }
}
}
// 0x4790B0
namespace gamemd {
void SoundWarning_Set(int a1)
{
  int result; // eax

  if ( byte_89E3A0 == 1 ) /*0x4790b7*/
  {
    dword_81C1D0 = -2; /*0x4790b9*/
  }
  else
  {
    if ( a1 >= 0 ) /*0x4790c6*/
      a1 = 2; /*0x4790c8*/
    dword_81C1D0 = a1; /*0x4790cd*/
  }
  return result; /*0x4790c3*/
}
}
// 0x479740
namespace gamemd {
AbstractClass * * E4Recv_479740::sub_479740(DWORD BytesReturned)
{

  int v2; // esi
  UINT v3; // eax
  DWORD v4; // edi
  HANDLE FileA; // edi
  int v6; // esi
  DWORD Buffer[2]; // [esp+8h] [ebp-10h] BYREF
  CHAR FileName[8]; // [esp+10h] [ebp-8h] BYREF

  if ( stru_887598.onBridge ) /*0x47974c*/
  {
    sub_47A080(this, BytesReturned); /*0x479753*/
    return; /*0x47975d*/
  }
  v2 = (char)BytesReturned + 65; /*0x479769*/
  sprintf((char *const)Buffer, "%c:\\", v2); /*0x479773*/
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
  sprintf(FileName, "\\\\.\\%c:", v2); /*0x4797bc*/
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
// 0x479BA0
namespace gamemd {
AbstractClass * * sub_479BA0(DWORD BytesReturned)
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
  sprintf((char *const)Buffer, "%c:\\", v1); /*0x479bbd*/
  v2 = GetDriveTypeA((LPCSTR)Buffer) - 2; /*0x479bd0*/
  if ( v2 ) /*0x479bd3*/
  {
    if ( v2 != 3 ) /*0x479bd8*/
    {
  LABEL_3:
            Debug::Log();
      return 0; /*0x479bee*/
    }
    v4 = 0x80000000; /*0x479bf1*/
  }
  else
  {
    v4 = -1073741824; /*0x479bf8*/
  }
  sprintf(FileName, "\\\\.\\%c:", v1); /*0x479c08*/
  FileA = CreateFileA(FileName, v4, 3u, 0, 3u, 0, 0); /*0x479c26*/
  if ( FileA == (HANDLE)-1 ) /*0x479c2b*/
    goto LABEL_3; /*0x479c2b*/
  v6 = 0; /*0x479c53*/
  while ( !DeviceIoControl(FileA, 0x90018u, 0, 0, 0, 0, &BytesReturned, 0) ) /*0x479c70*/
  {
    GetLastError(); /*0x479c72*/
        Debug::Log();
    Sleep(0x1F4u); /*0x479c8b*/
    if ( ++v6 >= 20 ) /*0x479c91*/
      goto LABEL_17; /*0x479c91*/
  }
  if ( DeviceIoControl(FileA, 0x90020u, 0, 0, 0, 0, &BytesReturned, 0) /*0x479d21*/
    && (IDA_LOBYTE(BytesReturned) = 0, DeviceIoControl(FileA, 0x2D4804u, &BytesReturned, 1u, 0, 0, Buffer, 0))
    && DeviceIoControl(FileA, 0x2D4808u, 0, 0, 0, 0, &BytesReturned, 0) )
  {
    v7 = 1; /*0x479d44*/
  }
  else
  {
    GetLastError(); /*0x479d2e*/
        Debug::Log();
  }
  LABEL_17:
  CloseHandle(FileA); /*0x479d49*/
  return v7; /*0x479be9*/
}
}
// 0x479D60
namespace gamemd {
AbstractClass * * sub_479D60(DWORD BytesReturned)
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
  sprintf((char *const)Buffer, "%c:\\", v1); /*0x479d79*/
  v2 = GetDriveTypeA((LPCSTR)Buffer) - 2; /*0x479d8c*/
  if ( v2 ) /*0x479d8f*/
  {
    if ( v2 != 3 ) /*0x479d94*/
    {
  LABEL_3:
            Debug::Log();
      return 0; /*0x479dab*/
    }
    v4 = 0x80000000; /*0x479dae*/
  }
  else
  {
    v4 = -1073741824; /*0x479db5*/
  }
  sprintf(FileName, "\\\\.\\%c:", v1); /*0x479dc5*/
  FileA = CreateFileA(FileName, v4, 3u, 0, 3u, 0, 0); /*0x479de3*/
  if ( FileA == (HANDLE)-1 ) /*0x479de8*/
    goto LABEL_3; /*0x479de8*/
  v6 = 0; /*0x479e10*/
  while ( !DeviceIoControl(FileA, 0x90018u, 0, 0, 0, 0, &BytesReturned, 0) ) /*0x479e2f*/
  {
    GetLastError(); /*0x479e32*/
        Debug::Log();
    Sleep(0x1F4u); /*0x479e47*/
    if ( ++v6 >= 20 ) /*0x479e4d*/
      goto LABEL_13; /*0x479e4d*/
  }
  IDA_LOBYTE(BytesReturned) = 1; /*0x479e69*/
  if ( !DeviceIoControl(FileA, 0x2D4804u, &BytesReturned, 1u, 0, 0, Buffer, 0) ) /*0x479e6e*/
  {
    GetLastError(); /*0x479e7f*/
        Debug::Log();
  }
  LABEL_13:
  for ( i = 0; i < 20; ++i ) /*0x479e8f*/
  {
    if ( DeviceIoControl(FileA, 0x9001Cu, 0, 0, 0, 0, &BytesReturned, 0) ) /*0x479ea6*/
      break; /*0x479eae*/
    GetLastError(); /*0x479eb1*/
        Debug::Log();
    Sleep(0x1F4u); /*0x479ec6*/
  }
  CloseHandle(FileA); /*0x479ecf*/
  return 1; /*0x479da5*/
}
}
// 0x479EF0
namespace gamemd {
AbstractClass * * sub_479EF0(DWORD BytesReturned)
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
  sprintf((char *const)Buffer, "%c:\\", v1); /*0x479f09*/
  v2 = GetDriveTypeA((LPCSTR)Buffer) - 2; /*0x479f1c*/
  if ( v2 ) /*0x479f1f*/
  {
    if ( v2 != 3 ) /*0x479f24*/
    {
  LABEL_3:
            Debug::Log();
      return 0; /*0x479f3b*/
    }
    v4 = 0x80000000; /*0x479f3e*/
  }
  else
  {
    v4 = -1073741824; /*0x479f45*/
  }
  sprintf(FileName, "\\\\.\\%c:", v1); /*0x479f55*/
  FileA = CreateFileA(FileName, v4, 3u, 0, 3u, 0, 0); /*0x479f73*/
  if ( FileA == (HANDLE)-1 ) /*0x479f78*/
    goto LABEL_3; /*0x479f78*/
  v6 = 0; /*0x479fa0*/
  while ( !DeviceIoControl(FileA, 0x90018u, 0, 0, 0, 0, &BytesReturned, 0) ) /*0x479fbf*/
  {
    GetLastError(); /*0x479fc2*/
        Debug::Log();
    Sleep(0x1F4u); /*0x479fd7*/
    if ( ++v6 >= 20 ) /*0x479fdd*/
      goto LABEL_13; /*0x479fdd*/
  }
  IDA_LOBYTE(BytesReturned) = 0; /*0x479ff9*/
  if ( !DeviceIoControl(FileA, 0x2D4804u, &BytesReturned, 1u, 0, 0, Buffer, 0) ) /*0x479ffe*/
  {
    GetLastError(); /*0x47a00f*/
        Debug::Log();
  }
  LABEL_13:
  for ( i = 0; i < 20; ++i ) /*0x47a01f*/
  {
    if ( DeviceIoControl(FileA, 0x9001Cu, 0, 0, 0, 0, &BytesReturned, 0) ) /*0x47a036*/
      break; /*0x47a03e*/
    GetLastError(); /*0x47a041*/
        Debug::Log();
    Sleep(0x1F4u); /*0x47a056*/
  }
  CloseHandle(FileA); /*0x47a05f*/
  return 1; /*0x479f35*/
}
}
// 0x47A080
namespace gamemd {
AbstractClass * * ObjectClass::sub_47A080(DWORD a2)
{

  char v2; // bl
  HANDLE FileA; // esi
  DWORD BytesReturned; // [esp+10h] [ebp-20h] BYREF
  unsigned int InBuffer[7]; // [esp+14h] [ebp-1Ch] BYREF

  v2 = a2 + 1; /*0x47a098*/
  LOBYTE(a2) = a2 + 1; /*0x47a0a3*/
  FileA = CreateFileA(g_Str_____vwin32, 0, 0, 0, 0, 0x4000000u, 0); /*0x47a0b3*/
  if ( !(uint8_t)CDROM::LockVolume((int)this, FileA, a2, 0, 0) ) /*0x47a0ba*/
  {
    Debug::Log(); /*0x47a0cf*/
    return; /*0x47a0de*/
  }
  if ( !CDROM::DeviceIoControl(FileA, a2) ) /*0x47a0e5*/
  {
    Debug::Log(); /*0x47a0fa*/
    DriveControlCD((int)this, FileA, a2); /*0x47a105*/
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
  DriveControlCD((int)this, FileA, a2); /*0x47a18e*/
  CloseHandle(FileA); /*0x47a19b*/

}
} // namespace ra2

// 0x47A920
namespace gamemd {
int DriveControlCD(ObjectClass * aP0, HANDLE hDevice, DWORD BytesReturned)
{
  int v3; // ebp
  char v4; // bl
  int v5; // eax
  int result; // eax
  unsigned int InBuffer[7]; // [esp+10h] [ebp-1Ch] BYREF

  v3 = (char)BytesReturned; /*0x47a92c*/
  memset(&InBuffer[1], 0, 0x18u); /*0x47a93b*/
  v4 = 0; /*0x47a943*/
  while ( 1 )
  {
    IDA_LOBYTE(v5) = 0; /*0x47a949*/
    v4 = v4 != 0 ? 8 : 72;
    IDA_BYTE1(v5) = v4; /*0x47a957*/
    v5 = (uint16_t)v5; /*0x47a95a*/
    IDA_LOBYTE(v5) = v5 | 0x6A; /*0x47a963*/
    InBuffer[2] = v5; /*0x47a967*/
    InBuffer[3] = 17421; /*0x47a976*/
    InBuffer[0] = v3; /*0x47a97e*/
    result = DeviceIoControl(hDevice, 1u, InBuffer, 0x1Cu, InBuffer, 0x1Cu, &BytesReturned, 0); /*0x47a982*/
    if ( result ) /*0x47a98b*/
      break; /*0x47a98b*/
    GetLastError(); /*0x47a98f*/
        Debug::Log();
  LABEL_5:
    IDA_LOBYTE(result) = 0; /*0x47a9ac*/
    if ( v4 == 8 ) /*0x47a9b1*/
      return result; /*0x47a9b1*/
  }
  if ( (InBuffer[6] & 1) != 0 ) /*0x47a9aa*/
    goto LABEL_5; /*0x47a9aa*/
  IDA_LOBYTE(result) = 1; /*0x47a9b5*/
  return result; /*0x47a9b7*/
}
}
// 0x47AA50
namespace gamemd {
int sub_47AA50(char a1)
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
// 0x47E040
namespace gamemd {
void CellClass_UpdateNeighborTerrain(int a1, int a2, unsigned int a3, int a4)
{
  CellClass *v4; // esi
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
  int16_t v19; // dx
  int v20; // edx
  int v21; // edx
  unsigned int v22; // edx
  int v23; // edx
  unsigned int v24; // ecx
  unsigned int *mapCoords; // eax
  int v26; // edx
  unsigned int v27; // eax
  int v28; // esi
  int16_t v29; // dx
  void *v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  unsigned int v34; // eax
  int *v35; // esi
  int result; // eax
  int v37; // edx
  int v38; // [esp+10h] [ebp-28h]
  int v39; // [esp+14h] [ebp-24h]
  int v40; // [esp+18h] [ebp-20h]
  int v41; // [esp+1Ch] [ebp-1Ch]
  int v42; // [esp+1Ch] [ebp-1Ch]
  int v43; // [esp+1Ch] [ebp-1Ch]
  int *p_smudgeTypeIndex; // [esp+24h] [ebp-14h]
  int v46; // [esp+24h] [ebp-14h]
  int v47; // [esp+28h] [ebp-10h]
  int16_t v48[2]; // [esp+2Ch] [ebp-Ch] BYREF
  int16_t v49[2]; // [esp+30h] [ebp-8h] BYREF
  int16_t v50[2]; // [esp+34h] [ebp-4h] BYREF

  v4 = (CellClass *)a1; /*0x47e04a*/
  if ( a3 ) /*0x47e053*/
    *(unsigned char *)(a1 + 286) = 9; /*0x47e05e*/
  else
    *(unsigned char *)(a1 + 286) = 0; /*0x47e055*/
  v5 = a4; /*0x47e065*/
  v6 = a4 & 1; /*0x47e06b*/
  v40 = v6 << 9; /*0x47e079*/
  v7 = v6 << 12; /*0x47e082*/
  v8 = v6 << 16; /*0x47e085*/
  v39 = v6 << 8; /*0x47e090*/
  a4 = ((unsigned char)a4 == 0) << 10; /*0x47e097*/
  v38 = (a3 == 0) << 11; /*0x47e0af*/
  v9 = (v6 << 8) | *(unsigned int *)(a1 + 320) & 0xFFFFFE7F; /*0x47e0bf*/
  IDA_BYTE1(v9) &= ~2u; /*0x47e0c5*/
  v10 = (v6 << 9) | v9; /*0x47e0c8*/
  IDA_BYTE1(v10) &= ~0x10u; /*0x47e0ce*/
  v11 = (v6 << 16) | ((v6 << 12) | v10) & 0xFFFEFFFF; /*0x47e0d9*/
  IDA_BYTE1(v11) &= ~4u; /*0x47e0db*/
  v12 = a4 | v11; /*0x47e0de*/
  IDA_BYTE1(v12) &= ~8u; /*0x47e0e4*/
  *(unsigned int *)(a1 + 320) = v38 | ((v6 & 0xFFFFFDC1) << 7) | v12; /*0x47e0f0*/
  if ( v5 )
  {
    *(unsigned char *)(a1 + 286) = a3 != 0 ? 9 : 0;
  }
  else
  {
    *(unsigned char *)(a1 + 286) = 0; /*0x47e10d*/
    CellClass::UpdateAnimations((CellClass *)a1); /*0x47e114*/
  }
  p_smudgeTypeIndex = &v4->smudgeTypeIndex; /*0x47e122*/
  BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&v4->smudgeTypeIndex); /*0x47e126*/
  if ( a3 < 8 ) /*0x47e132*/
  {
    IDA_LOWORD(v41) = *p_smudgeTypeIndex + IDA_LOWORD(g_DDrawSurfaceManager.scenario[(a3 & 7) + 82]); /*0x47e157*/
    IDA_HIWORD(v41) = IDA_HIWORD(*p_smudgeTypeIndex) + IDA_HIWORD(g_DDrawSurfaceManager.scenario[(a3 & 7) + 82]); /*0x47e166*/
    *(unsigned int *)v48 = v41; /*0x47e16f*/
    v4 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v48); /*0x47e17d*/
  }
  v13 = v4->flags[0]; /*0x47e18f*/
  IDA_BYTE1(v13) &= ~1u; /*0x47e195*/
  v47 = v5 != 0 ? a1 : 0;
  v14 = v39 | v13; /*0x47e19c*/
  IDA_BYTE1(v14) &= ~2u; /*0x47e1a2*/
  *(unsigned int *)&v4->__pad_28[4] = v47; /*0x47e1a5*/
  v15 = v40 | v14; /*0x47e1a8*/
  IDA_BYTE1(v15) &= ~0x10u; /*0x47e1ae*/
  v16 = v8 | (v7 | v15) & 0xFFFEFFFF; /*0x47e1b9*/
  IDA_BYTE1(v16) &= ~4u; /*0x47e1bb*/
  v17 = a4 | v16; /*0x47e1be*/
  IDA_BYTE1(v17) &= ~8u; /*0x47e1c4*/
  v4->flags[0] = v38 | v17; /*0x47e1cb*/
  if ( v5 )
  {
    v4->powerup = a3 != 0 ? 9 : 0;
  }
  else
  {
    v4->powerup = 0; /*0x47e1e8*/
    CellClass::UpdateAnimations(v4); /*0x47e1ef*/
  }
  BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&v4->smudgeTypeIndex); /*0x47e201*/
  v18 = a3; /*0x47e206*/
  if ( a3 < 8 ) /*0x47e20d*/
  {
    v19 = g_DDrawSurfaceManager.scenario[(a3 & 7) + 82]; /*0x47e218*/
    *(unsigned int *)v49 = v4->smudgeTypeIndex; /*0x47e227*/
    IDA_LOWORD(v42) = v49[0] + v19; /*0x47e232*/
    IDA_HIWORD(v42) = v49[1] + IDA_HIWORD(g_DDrawSurfaceManager.scenario[(a3 & 7) + 82]); /*0x47e241*/
    *(unsigned int *)v49 = v42; /*0x47e24a*/
    v4 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v49); /*0x47e258*/
    v18 = a3; /*0x47e25a*/
  }
  v20 = v4->flags[0]; /*0x47e262*/
  *(unsigned int *)&v4->__pad_28[4] = v47; /*0x47e268*/
  IDA_BYTE1(v20) &= ~1u; /*0x47e26f*/
  v21 = v39 | v20; /*0x47e272*/
  IDA_BYTE1(v21) &= 0xEDu; /*0x47e278*/
  v22 = v8 | (v7 | v21) & 0xFFFEFFFF; /*0x47e283*/
  IDA_BYTE1(v22) &= ~4u; /*0x47e285*/
  v23 = a4 | v22; /*0x47e288*/
  IDA_BYTE1(v23) &= ~8u; /*0x47e28e*/
  v4->flags[0] = v38 | v23; /*0x47e295*/
  if ( v5 )
  {
    v4->powerup = v18 != 0 ? 9 : 0;
  }
  else
  {
    v4->powerup = 0; /*0x47e2ae*/
    CellClass::UpdateAnimations(v4); /*0x47e2b5*/
  }
  BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&v4->smudgeTypeIndex); /*0x47e2c7*/
  v24 = a3; /*0x47e2cc*/
  if ( a3 < 8 ) /*0x47e2d3*/
  {
    *(unsigned int *)v50 = v4->smudgeTypeIndex; /*0x47e2e9*/
    IDA_LOWORD(v43) = v50[0] + IDA_LOWORD(g_DDrawSurfaceManager.scenario[(a3 & 7) + 82]); /*0x47e2fc*/
    IDA_HIWORD(v43) = v50[1] + IDA_HIWORD(g_DDrawSurfaceManager.scenario[(a3 & 7) + 82]); /*0x47e305*/
    *(unsigned int *)v50 = v43; /*0x47e314*/
    mapCoords = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v50); /*0x47e318*/
    v24 = a3; /*0x47e31d*/
  }
  else
  {
    mapCoords = v4->mapCoords; /*0x47e2d5*/
  }
  v26 = mapCoords[80]; /*0x47e321*/
  IDA_BYTE1(v26) &= ~0x10u; /*0x47e327*/
  mapCoords[80] = v7 | v26; /*0x47e32c*/
  v27 = ((unsigned char)v24 - 4) & 7; /*0x47e335*/
  if ( v27 < 8 ) /*0x47e33b*/
  {
    v29 = g_DDrawSurfaceManager.scenario[v27 + 82]; /*0x47e34c*/
    *(unsigned int *)v50 = *p_smudgeTypeIndex; /*0x47e35b*/
    IDA_LOWORD(v46) = v50[0] + v29; /*0x47e366*/
    IDA_HIWORD(v46) = v50[1] + IDA_HIWORD(g_DDrawSurfaceManager.scenario[v27 + 82]); /*0x47e375*/
    *(unsigned int *)v50 = v46; /*0x47e37e*/
    v30 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v50); /*0x47e387*/
    v24 = a3; /*0x47e38c*/
    v28 = (int)v30; /*0x47e390*/
  }
  else
  {
    v28 = a1; /*0x47e33d*/
  }
  v31 = *(unsigned int *)(v28 + 320); /*0x47e392*/
  IDA_BYTE1(v31) &= ~1u; /*0x47e39c*/
  v32 = v39 | v31; /*0x47e3a3*/
  IDA_BYTE1(v32) &= ~2u; /*0x47e3a9*/
  *(unsigned int *)(v28 + 44) = v47; /*0x47e3ac*/
  v33 = v40 | v32; /*0x47e3af*/
  IDA_BYTE1(v33) &= ~4u; /*0x47e3b5*/
  v34 = v8 | (a4 | v33) & 0xFFFEEFFF; /*0x47e3c3*/
  IDA_BYTE1(v34) &= ~8u; /*0x47e3c5*/
  *(unsigned int *)(v28 + 320) = v38 | v34; /*0x47e3cc*/
  if ( v5 )
  {
    *(unsigned char *)(v28 + 286) = v24 != 0 ? 9 : 0;
  }
  else
  {
    *(unsigned char *)(v28 + 286) = 0; /*0x47e3e5*/
    CellClass::UpdateAnimations((CellClass *)v28); /*0x47e3ec*/
  }
  v35 = (int *)(v28 + 36); /*0x47e3f1*/
  result = BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)v35); /*0x47e3fa*/
  if ( a3 == 6 ) /*0x47e404*/
  {
    a4 = *v35; /*0x47e40e*/
    IDA_LOWORD(a3) = IDA_LOWORD(g_DDrawSurfaceManager.scenario[84]) + a4; /*0x47e424*/
    IDA_HIWORD(a3) = IDA_HIWORD(g_DDrawSurfaceManager.scenario[84]) + IDA_HIWORD(a4); /*0x47e429*/
    result = (int)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&a3); /*0x47e43c*/
    v37 = *(unsigned int *)(result + 320); /*0x47e441*/
    *(unsigned int *)(result + 44) = v47; /*0x47e447*/
    *(unsigned int *)(result + 320) = v8 | v37 & 0xFFFEFFFF; /*0x47e452*/
  }
  return result; /*0x47e458*/
}
}
// 0x47E470
namespace gamemd {
void CellClass_SetOccupancyFlags(int a1, int a2, unsigned int a3, int a4)
{
  CellClass *v4; // esi
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
  int16_t v19; // dx
  int v20; // edx
  int v21; // edx
  unsigned int v22; // edx
  int v23; // edx
  unsigned int v24; // ecx
  unsigned int *mapCoords; // eax
  int v26; // edx
  unsigned int v27; // eax
  int v28; // esi
  int16_t v29; // dx
  void *v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  unsigned int v34; // eax
  int *v35; // esi
  int result; // eax
  int v37; // edx
  int v38; // [esp+10h] [ebp-28h]
  int v39; // [esp+14h] [ebp-24h]
  int v40; // [esp+18h] [ebp-20h]
  int v41; // [esp+1Ch] [ebp-1Ch]
  int v42; // [esp+1Ch] [ebp-1Ch]
  int v43; // [esp+1Ch] [ebp-1Ch]
  int *p_smudgeTypeIndex; // [esp+24h] [ebp-14h]
  int v46; // [esp+24h] [ebp-14h]
  int v47; // [esp+28h] [ebp-10h]
  int16_t v48[2]; // [esp+2Ch] [ebp-Ch] BYREF
  int16_t v49[2]; // [esp+30h] [ebp-8h] BYREF
  int16_t v50[2]; // [esp+34h] [ebp-4h] BYREF

  v4 = (CellClass *)a1; /*0x47e47a*/
  if ( a3 ) /*0x47e483*/
    *(unsigned char *)(a1 + 286) = 9; /*0x47e48e*/
  else
    *(unsigned char *)(a1 + 286) = 0; /*0x47e485*/
  v5 = a4; /*0x47e495*/
  v6 = a4 & 1; /*0x47e49b*/
  v40 = v6 << 9; /*0x47e4a9*/
  v7 = v6 << 12; /*0x47e4b2*/
  v8 = v6 << 16; /*0x47e4b5*/
  v39 = v6 << 8; /*0x47e4c0*/
  a4 = ((unsigned char)a4 == 0) << 10; /*0x47e4c7*/
  v38 = (a3 == 0) << 11; /*0x47e4df*/
  v9 = (v6 << 8) | *(unsigned int *)(a1 + 320) & 0xFFFFFE7F; /*0x47e4ef*/
  IDA_BYTE1(v9) &= ~2u; /*0x47e4f5*/
  v10 = (v6 << 9) | v9; /*0x47e4f8*/
  IDA_BYTE1(v10) &= ~0x10u; /*0x47e4fe*/
  v11 = (v6 << 16) | ((v6 << 12) | v10) & 0xFFFEFFFF; /*0x47e509*/
  IDA_BYTE1(v11) &= ~4u; /*0x47e50b*/
  v12 = a4 | v11; /*0x47e50e*/
  IDA_BYTE1(v12) &= ~8u; /*0x47e514*/
  *(unsigned int *)(a1 + 320) = v38 | ((v6 & 0xFFFFFDC1) << 7) | v12; /*0x47e520*/
  if ( v5 )
  {
    *(unsigned char *)(a1 + 286) = a3 != 0 ? 9 : 0;
  }
  else
  {
    *(unsigned char *)(a1 + 286) = 0; /*0x47e53d*/
    CellClass::UpdateAnimations((CellClass *)a1); /*0x47e544*/
  }
  p_smudgeTypeIndex = &v4->smudgeTypeIndex; /*0x47e552*/
  BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&v4->smudgeTypeIndex); /*0x47e556*/
  if ( a3 < 8 ) /*0x47e562*/
  {
    IDA_LOWORD(v41) = *p_smudgeTypeIndex + IDA_LOWORD(g_DDrawSurfaceManager.scenario[(a3 & 7) + 82]); /*0x47e587*/
    IDA_HIWORD(v41) = IDA_HIWORD(*p_smudgeTypeIndex) + IDA_HIWORD(g_DDrawSurfaceManager.scenario[(a3 & 7) + 82]); /*0x47e596*/
    *(unsigned int *)v48 = v41; /*0x47e59f*/
    v4 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v48); /*0x47e5ad*/
  }
  v13 = v4->flags[0]; /*0x47e5bf*/
  IDA_BYTE1(v13) &= ~1u; /*0x47e5c5*/
  v47 = v5 != 0 ? a1 : 0;
  v14 = v39 | v13; /*0x47e5cc*/
  IDA_BYTE1(v14) &= ~2u; /*0x47e5d2*/
  *(unsigned int *)&v4->__pad_28[4] = v47; /*0x47e5d5*/
  v15 = v40 | v14; /*0x47e5d8*/
  IDA_BYTE1(v15) &= ~0x10u; /*0x47e5de*/
  v16 = v8 | (v7 | v15) & 0xFFFEFFFF; /*0x47e5e9*/
  IDA_BYTE1(v16) &= ~4u; /*0x47e5eb*/
  v17 = a4 | v16; /*0x47e5ee*/
  IDA_BYTE1(v17) &= ~8u; /*0x47e5f4*/
  v4->flags[0] = v38 | v17; /*0x47e5fb*/
  if ( v5 )
  {
    v4->powerup = a3 != 0 ? 9 : 0;
  }
  else
  {
    v4->powerup = 0; /*0x47e618*/
    CellClass::UpdateAnimations(v4); /*0x47e61f*/
  }
  BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&v4->smudgeTypeIndex); /*0x47e631*/
  v18 = a3; /*0x47e636*/
  if ( a3 < 8 ) /*0x47e63d*/
  {
    v19 = g_DDrawSurfaceManager.scenario[(a3 & 7) + 82]; /*0x47e648*/
    *(unsigned int *)v49 = v4->smudgeTypeIndex; /*0x47e657*/
    IDA_LOWORD(v42) = v49[0] + v19; /*0x47e662*/
    IDA_HIWORD(v42) = v49[1] + IDA_HIWORD(g_DDrawSurfaceManager.scenario[(a3 & 7) + 82]); /*0x47e671*/
    *(unsigned int *)v49 = v42; /*0x47e67a*/
    v4 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v49); /*0x47e688*/
    v18 = a3; /*0x47e68a*/
  }
  v20 = v4->flags[0]; /*0x47e692*/
  *(unsigned int *)&v4->__pad_28[4] = v47; /*0x47e698*/
  IDA_BYTE1(v20) &= ~1u; /*0x47e69f*/
  v21 = v39 | v20; /*0x47e6a2*/
  IDA_BYTE1(v21) &= 0xEDu; /*0x47e6a8*/
  v22 = v8 | (v7 | v21) & 0xFFFEFFFF; /*0x47e6b3*/
  IDA_BYTE1(v22) &= ~4u; /*0x47e6b5*/
  v23 = a4 | v22; /*0x47e6b8*/
  IDA_BYTE1(v23) &= ~8u; /*0x47e6be*/
  v4->flags[0] = v38 | v23; /*0x47e6c5*/
  if ( v5 )
  {
    v4->powerup = v18 != 0 ? 9 : 0;
  }
  else
  {
    v4->powerup = 0; /*0x47e6de*/
    CellClass::UpdateAnimations(v4); /*0x47e6e5*/
  }
  BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&v4->smudgeTypeIndex); /*0x47e6f7*/
  v24 = a3; /*0x47e6fc*/
  if ( a3 < 8 ) /*0x47e703*/
  {
    *(unsigned int *)v50 = v4->smudgeTypeIndex; /*0x47e719*/
    IDA_LOWORD(v43) = v50[0] + IDA_LOWORD(g_DDrawSurfaceManager.scenario[(a3 & 7) + 82]); /*0x47e72c*/
    IDA_HIWORD(v43) = v50[1] + IDA_HIWORD(g_DDrawSurfaceManager.scenario[(a3 & 7) + 82]); /*0x47e735*/
    *(unsigned int *)v50 = v43; /*0x47e744*/
    mapCoords = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v50); /*0x47e748*/
    v24 = a3; /*0x47e74d*/
  }
  else
  {
    mapCoords = v4->mapCoords; /*0x47e705*/
  }
  v26 = mapCoords[80]; /*0x47e751*/
  IDA_BYTE1(v26) &= ~0x10u; /*0x47e757*/
  mapCoords[80] = v7 | v26; /*0x47e75c*/
  v27 = ((unsigned char)v24 - 4) & 7; /*0x47e765*/
  if ( v27 < 8 ) /*0x47e76b*/
  {
    v29 = g_DDrawSurfaceManager.scenario[v27 + 82]; /*0x47e77c*/
    *(unsigned int *)v50 = *p_smudgeTypeIndex; /*0x47e78b*/
    IDA_LOWORD(v46) = v50[0] + v29; /*0x47e796*/
    IDA_HIWORD(v46) = v50[1] + IDA_HIWORD(g_DDrawSurfaceManager.scenario[v27 + 82]); /*0x47e7a5*/
    *(unsigned int *)v50 = v46; /*0x47e7ae*/
    v30 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v50); /*0x47e7b7*/
    v24 = a3; /*0x47e7bc*/
    v28 = (int)v30; /*0x47e7c0*/
  }
  else
  {
    v28 = a1; /*0x47e76d*/
  }
  v31 = *(unsigned int *)(v28 + 320); /*0x47e7c2*/
  IDA_BYTE1(v31) &= ~1u; /*0x47e7cc*/
  v32 = v39 | v31; /*0x47e7d3*/
  IDA_BYTE1(v32) &= ~2u; /*0x47e7d9*/
  *(unsigned int *)(v28 + 44) = v47; /*0x47e7dc*/
  v33 = v40 | v32; /*0x47e7df*/
  IDA_BYTE1(v33) &= ~4u; /*0x47e7e5*/
  v34 = v8 | (a4 | v33) & 0xFFFEEFFF; /*0x47e7f3*/
  IDA_BYTE1(v34) &= ~8u; /*0x47e7f5*/
  *(unsigned int *)(v28 + 320) = v38 | v34; /*0x47e7fc*/
  if ( v5 )
  {
    *(unsigned char *)(v28 + 286) = v24 != 0 ? 9 : 0;
  }
  else
  {
    *(unsigned char *)(v28 + 286) = 0; /*0x47e815*/
    CellClass::UpdateAnimations((CellClass *)v28); /*0x47e81c*/
  }
  v35 = (int *)(v28 + 36); /*0x47e821*/
  result = BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)v35); /*0x47e82a*/
  if ( a3 == 6 ) /*0x47e834*/
  {
    a4 = *v35; /*0x47e83e*/
    IDA_LOWORD(a3) = IDA_LOWORD(g_DDrawSurfaceManager.scenario[84]) + a4; /*0x47e854*/
    IDA_HIWORD(a3) = IDA_HIWORD(g_DDrawSurfaceManager.scenario[84]) + IDA_HIWORD(a4); /*0x47e859*/
    result = (int)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&a3); /*0x47e86c*/
    v37 = *(unsigned int *)(result + 320); /*0x47e871*/
    *(unsigned int *)(result + 44) = v47; /*0x47e877*/
    *(unsigned int *)(result + 320) = v8 | v37 & 0xFFFEFFFF; /*0x47e882*/
  }
  return result; /*0x47e888*/
}
}
// 0x47EFE0
namespace gamemd {
void int sub_47EFE0(unsigned int * a1, int * a2, unsigned int a3)
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
  unsigned int *v15; // esi
  int v16; // edi
  uint8_t v17; // dl
  uint8_t *v19; // esi
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
  uint8_t *v41; // [esp+44h] [ebp+10h]

  if ( !byte_89E7C5 ) /*0x47efed*/
  {
    byte_89E7C5 = 1; /*0x47eff6*/
    dword_89E794 = SearchMIXFile(aShroudShp, 0); /*0x47f009*/
    dword_89E790 = SearchMIXFile(aFogShp, 0); /*0x47f013*/
  }
  if ( (*(unsigned int *)dword_A8B230 & 0x1000) != 0 ) /*0x47f022*/
    v33 = (char **)dword_89E790; /*0x47f02a*/
  else
    v33 = (char **)dword_89E794; /*0x47f035*/
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
          v30 = v9 + *((unsigned int *)dword_87E8A4 + 10) - v11; /*0x47f12e*/
          SubFile = MixFileClass::GetSubFile(v33, a3); /*0x47f142*/
          result = ((StreamClass *)((int)dword_87E8A4))->ReadAndSeek(v9, v35 - dword_886FA4); /*0x47f14c*/
          v13 = v32 - v35; /*0x47f15b*/
          v14 = (v32 - v35) * *((unsigned int *)dword_87E8A4 + 10); /*0x47f16d*/
          v41 = (uint8_t *)(v12 + v28 * v10 + SubFile); /*0x47f172*/
          v33 = (char **)result; /*0x47f178*/
          v15 = dword_87E8A4; /*0x47f18a*/
          if ( result + 2 * (v14 + v39 + 0x7FFFFFFF * v9) + 4 < *((unsigned int *)dword_87E8A4 + 7) ) /*0x47f193*/
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
                  *(unsigned short *)v20 = result; /*0x47f233*/
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
                    *(unsigned short *)result = v17; /*0x47f1c4*/
                    v15 = dword_87E8A4; /*0x47f1c7*/
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
// 0x47F250
namespace gamemd {
unsigned short * RenderFogOfWarOverlay(int a1, int * a2, unsigned int a3)
{
  int *FoundationSizeBuilding; // eax
  int v5; // ebp
  int v6; // esi
  int v7; // edx
  unsigned short *result; // eax
  int v9; // ecx
  int v10; // ebx
  int v11; // edi
  int v12; // ebx
  int v13; // esi
  int v14; // ebp
  int v15; // edi
  unsigned int *v16; // edx
  uint8_t *v17; // edi
  int v18; // esi
  uint8_t v19; // bl
  int16_t v20; // cx
  int v21; // ecx
  uint8_t *v22; // esi
  int v23; // edi
  uint8_t v24; // dl
  int v25; // ecx
  bool v26; // zf
  int v27; // [esp+4h] [ebp-28h]
  int v28; // [esp+4h] [ebp-28h]
  unsigned short *v29; // [esp+8h] [ebp-24h]
  int v30; // [esp+8h] [ebp-24h]
  int v31; // [esp+Ch] [ebp-20h]
  int v32; // [esp+14h] [ebp-18h]
  int v33[4]; // [esp+1Ch] [ebp-10h] BYREF
  int v34; // [esp+30h] [ebp+4h]
  unsigned short *v35; // [esp+30h] [ebp+4h]
  int v36; // [esp+30h] [ebp+4h]
  int v37; // [esp+30h] [ebp+4h]
  unsigned short *v38; // [esp+34h] [ebp+8h]
  int v39; // [esp+34h] [ebp+8h]
  int SubFileMixFileClass; // [esp+38h] [ebp+Ch]
  uint8_t *v41; // [esp+38h] [ebp+Ch]

  if ( !byte_89E7C6 ) /*0x47f25a*/
  {
    byte_89E7C6 = 1; /*0x47f263*/
    dword_89E760 = SearchMIXFile(aFogShp, 0); /*0x47f26f*/
  }
  FoundationSizeBuilding = Building::GetFoundationSize(v33, a3); /*0x47f288*/
  v31 = *FoundationSizeBuilding; /*0x47f293*/
  v5 = FoundationSizeBuilding[1]; /*0x47f297*/
  v6 = a2[1]; /*0x47f29a*/
  v32 = FoundationSizeBuilding[2]; /*0x47f2a3*/
  v7 = *(unsigned int *)(a1 + 4); /*0x47f2ae*/
  result = (unsigned short *)(v5 + v7 + FoundationSizeBuilding[3]); /*0x47f2b3*/
  v29 = result; /*0x47f2b7*/
  if ( (int)result >= v6 + 1 )
  {
    v38 = (unsigned short *)(v6 + a2[3]); /*0x47f2c8*/
    result = v38; /*0x47f2c4*/
    if ( v7 < (int)v38 )
    {
      result = *(unsigned short **)a1; /*0x47f2d2*/
      v9 = v31 + *(unsigned int *)a1 + v32; /*0x47f2de*/
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
          v15 = v14 - (unsigned int)result - v31; /*0x47f33c*/
          if ( v27 < v9 ) /*0x47f344*/
            v9 = v27; /*0x47f346*/
          v39 = v9; /*0x47f350*/
          v28 = v32 + v14 - v9; /*0x47f362*/
          v30 = v14 + *((unsigned int *)dword_87E8A4 + 10) - v9; /*0x47f373*/
          SubFileMixFileClass = MixFileClass::GetSubFile((char **)dword_89E760, a3); /*0x47f38d*/
          result = (unsigned short *)((StreamClass *)((int)dword_87E8A4))->ReadAndSeek(v14, v12 - dword_886FA4); /*0x47f397*/
          v16 = dword_87E8A4; /*0x47f3a5*/
          v41 = (uint8_t *)(v15 + v32 * v13 + SubFileMixFileClass); /*0x47f3b4*/
          if ( (unsigned int)&result[((unsigned int)v35 - v12) * *((unsigned int *)dword_87E8A4 + 10) + 2 + v39 + 0x7FFFFFFF * v14] < *((unsigned int *)dword_87E8A4 + 7) )
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
                        v25 = (uint16_t)*result + v24 - 127; /*0x47f4d0*/
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
                      v21 = (uint16_t)*result + v19 - 127; /*0x47f42f*/
                      v20 = v21 <= 0 ? 0 : v21;
                    }
                    *result = v20; /*0x47f43d*/
                    v16 = dword_87E8A4; /*0x47f440*/
                  }
                  if ( (unsigned int)++result >= v16[7] ) /*0x47f44e*/
                    result = (unsigned short *)((char *)result - v16[8]); /*0x47f450*/
                  --v18; /*0x47f453*/
                }
                while ( v18 );
              }
              v17 += v28; /*0x47f45a*/
              result += v30; /*0x47f45c*/
              if ( (unsigned int)result >= v16[7] ) /*0x47f464*/
                result = (unsigned short *)((char *)result - v16[8]); /*0x47f466*/
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
// 0x470C30
namespace gamemd {
void E4Recv_470C30::sub_470C30()
{

  this->m_0 = (int)&vt_CampaignEndScoreClass; /*0x470c30*/

}
} // namespace gamemd

// 0x470C40
namespace gamemd {
LRESULT sub_470C40(CampaignScore * aP0, int nIDDlgItem, wchar_t * Format)
{
  HWND DlgItem; // eax
  wchar_t Buffer[32]; // [esp+8h] [ebp-40h] BYREF

  swprintf(Buffer, (const size_t)g_Str_Fmt_PctD, Format); /*0x470c58*/
  DlgItem = GetDlgItem(aP0, nIDDlgItem); /*0x470c62*/
  return SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)Buffer); /*0x470c7b*/
}
} // namespace gamemd

// 0x471540
namespace gamemd {
void sub_471540()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x47154c*/
  dbl_89E120 = Math::Sqrt(v0 + v0); /*0x47155e*/
}
} // namespace gamemd

// 0x471570
namespace gamemd {
void sub_471570()
{
  dbl_89E170 = dbl_89E120 / 60.0; /*0x47157c*/
}
} // namespace gamemd

// 0x471590
namespace gamemd {
void sub_471590()
{
  dbl_89E158 = 1.0 / dbl_89E170; /*0x47159c*/
}
} // namespace gamemd

// 0x4715B0
namespace gamemd {
void sub_4715B0()
{
  dbl_89E150 = 0.0174532925199433 * 45.0; /*0x4715bc*/
}
} // namespace gamemd

// 0x4715D0
namespace gamemd {
void sub_4715D0()
{
  dbl_89E128 = 0.0174532925199433 * 60.0; /*0x4715dc*/
}
} // namespace gamemd

// 0x4715F0
namespace gamemd {
void sub_4715F0()
{
  dbl_89E0E8 = 0.0174532925199433 * 90.0; /*0x4715fc*/
}
} // namespace gamemd

// 0x471610
namespace gamemd {
long long sub_471610()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_89E0E8 - dbl_89E128); /*0x471622*/
  result = Math::RoundToInt(v0 * dbl_89E120 * 0.5); /*0x471636*/
  dword_89E178 = result; /*0x47163b*/
  return result; /*0x471640*/
}
} // namespace gamemd

// 0x471650
namespace gamemd {
void sub_471650()
{
  dbl_89E130 = Math::ArcTan((double)dword_89E178 * 0.00390625); /*0x471667*/
}
} // namespace gamemd

// 0x471680
namespace gamemd {
void sub_471680()
{
  dbl_89E148 = Math::ArcTan((double)(2 * dword_89E178) / dbl_89E120); /*0x4716a2*/
}
} // namespace gamemd

// 0x4716B0
namespace gamemd {
long long sub_4716B0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_89E178) + 0.5); /*0x4716cb*/
  dword_89E16C = result; /*0x4716d0*/
  return result; /*0x4716d6*/
}
} // namespace gamemd

// 0x4716E0
namespace gamemd {
int sub_4716E0()
{
  word_89E118 = 0; /*0x4716e2*/
  word_89E11A = 0; /*0x4716e8*/
  return 0; /*0x4716ee*/
}
} // namespace gamemd

// 0x4716F0
namespace gamemd {
int sub_4716F0()
{
  dword_89E138 = 0; /*0x4716f2*/
  dword_89E13C = 0; /*0x4716f7*/
  dword_89E140 = 0; /*0x4716fc*/
  return 0; /*0x471701*/
}
} // namespace gamemd

// 0x471710
namespace gamemd {
int sub_471710()
{
  dword_89E168 = 0; /*0x471715*/
  dword_89E160 = 128; /*0x47171f*/
  dword_89E164 = 128; /*0x471724*/
  return 128; /*0x471729*/
}
} // namespace gamemd

// 0x471730
namespace gamemd {
int sub_471730()
{
  dword_89E108 = 0; /*0x471732*/
  dword_89E10C = 0; /*0x471737*/
  dword_89E110 = 0; /*0x47173c*/
  dword_89E114 = 0; /*0x471741*/
  return 0; /*0x471746*/
}
} // namespace gamemd

// 0x471750
namespace gamemd {
int sub_471750()
{
  dword_89E0F4 = 0; /*0x471757*/
  dword_89E0F8 = 0; /*0x47175c*/
  byte_89E0FC = 1; /*0x471761*/
  byte_89E0FD = 0; /*0x471768*/
  dword_89E0F0 = (int)&DynamicVectorClass_CaptureManagerClass___vftable; /*0x47176d*/
  dword_89E104 = 10; /*0x471777*/
  dword_89E100 = 0; /*0x471781*/
  return atexit(sub_471790); /*0x47178c*/
}
} // namespace gamemd

// 0x471790
namespace gamemd {
void sub_471790()
{
  dword_89E0F0 = (int)&VectorClass_CaptureManagerClass___vftable; /*0x471798*/
  if ( dword_89E0F4 && byte_89E0FD ) /*0x4717ac*/
  {
    RA2_OPDEL(dword_89E0F4); /*0x4717af*/
    dword_89E0F4 = 0; /*0x4717b7*/
  }
  byte_89E0FD = 0; /*0x4717bd*/
  dword_89E0F8 = 0; /*0x4717c3*/
}
} // namespace gamemd

// 0x473190
namespace gamemd {
void sub_473190()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x47319c*/
  dbl_89E1A0 = Math::Sqrt(v0 + v0); /*0x4731ae*/
}
} // namespace gamemd

// 0x4731C0
namespace gamemd {
void sub_4731C0()
{
  dbl_89E1F0 = dbl_89E1A0 / 60.0; /*0x4731cc*/
}
} // namespace gamemd

// 0x4731E0
namespace gamemd {
void sub_4731E0()
{
  dbl_89E1D8 = 1.0 / dbl_89E1F0; /*0x4731ec*/
}
} // namespace gamemd

// 0x473200
namespace gamemd {
void sub_473200()
{
  dbl_89E1D0 = 0.0174532925199433 * 45.0; /*0x47320c*/
}
} // namespace gamemd

// 0x473220
namespace gamemd {
void sub_473220()
{
  dbl_89E1A8 = 0.0174532925199433 * 60.0; /*0x47322c*/
}
} // namespace gamemd

// 0x473240
namespace gamemd {
void sub_473240()
{
  dbl_89E180 = 0.0174532925199433 * 90.0; /*0x47324c*/
}
} // namespace gamemd

// 0x473260
namespace gamemd {
long long sub_473260()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_89E180 - dbl_89E1A8); /*0x473272*/
  result = Math::RoundToInt(v0 * dbl_89E1A0 * 0.5); /*0x473286*/
  dword_89E1F8 = result; /*0x47328b*/
  return result; /*0x473290*/
}
} // namespace gamemd

// 0x4732A0
namespace gamemd {
void sub_4732A0()
{
  dbl_89E1B0 = Math::ArcTan((double)dword_89E1F8 * 0.00390625); /*0x4732b7*/
}
} // namespace gamemd

// 0x4732D0
namespace gamemd {
void sub_4732D0()
{
  dbl_89E1C8 = Math::ArcTan((double)(2 * dword_89E1F8) / dbl_89E1A0); /*0x4732f2*/
}
} // namespace gamemd

// 0x473300
namespace gamemd {
long long sub_473300()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_89E1F8) + 0.5); /*0x47331b*/
  dword_89E1EC = result; /*0x473320*/
  return result; /*0x473326*/
}
} // namespace gamemd

// 0x473330
namespace gamemd {
int sub_473330()
{
  word_89E198 = 0; /*0x473332*/
  word_89E19A = 0; /*0x473338*/
  return 0; /*0x47333e*/
}
} // namespace gamemd

// 0x473340
namespace gamemd {
int sub_473340()
{
  dword_89E1B8 = 0; /*0x473342*/
  dword_89E1BC = 0; /*0x473347*/
  dword_89E1C0 = 0; /*0x47334c*/
  return 0; /*0x473351*/
}
} // namespace gamemd

// 0x473360
namespace gamemd {
int sub_473360()
{
  dword_89E1E8 = 0; /*0x473365*/
  dword_89E1E0 = 128; /*0x47336f*/
  dword_89E1E4 = 128; /*0x473374*/
  return 128; /*0x473379*/
}
} // namespace gamemd

// 0x473380
namespace gamemd {
int sub_473380()
{
  dword_89E188 = 0; /*0x473382*/
  dword_89E18C = 0; /*0x473387*/
  dword_89E190 = 0; /*0x47338c*/
  dword_89E194 = 0; /*0x473391*/
  return 0; /*0x473396*/
}
} // namespace gamemd

// 0x473540
namespace gamemd {
void sub_473540()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x47354c*/
  dbl_89E220 = Math::Sqrt(v0 + v0); /*0x47355e*/
}
} // namespace gamemd

// 0x473570
namespace gamemd {
void sub_473570()
{
  dbl_89E270 = dbl_89E220 / 60.0; /*0x47357c*/
}
} // namespace gamemd

// 0x473590
namespace gamemd {
void sub_473590()
{
  dbl_89E258 = 1.0 / dbl_89E270; /*0x47359c*/
}
} // namespace gamemd

// 0x4735B0
namespace gamemd {
void sub_4735B0()
{
  dbl_89E250 = 0.0174532925199433 * 45.0; /*0x4735bc*/
}
} // namespace gamemd

// 0x4735D0
namespace gamemd {
void sub_4735D0()
{
  dbl_89E228 = 0.0174532925199433 * 60.0; /*0x4735dc*/
}
} // namespace gamemd

// 0x4735F0
namespace gamemd {
void sub_4735F0()
{
  dbl_89E200 = 0.0174532925199433 * 90.0; /*0x4735fc*/
}
} // namespace gamemd

// 0x473610
namespace gamemd {
long long sub_473610()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_89E200 - dbl_89E228); /*0x473622*/
  result = Math::RoundToInt(v0 * dbl_89E220 * 0.5); /*0x473636*/
  dword_89E278 = result; /*0x47363b*/
  return result; /*0x473640*/
}
} // namespace gamemd

// 0x473680
namespace gamemd {
void sub_473680()
{
  dbl_89E248 = Math::ArcTan((double)(2 * dword_89E278) / dbl_89E220); /*0x4736a2*/
}
} // namespace gamemd

// 0x4736B0
namespace gamemd {
long long sub_4736B0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_89E278) + 0.5); /*0x4736cb*/
  dword_89E26C = result; /*0x4736d0*/
  return result; /*0x4736d6*/
}
} // namespace gamemd

// 0x4736E0
namespace gamemd {
int sub_4736E0()
{
  word_89E218 = 0; /*0x4736e2*/
  word_89E21A = 0; /*0x4736e8*/
  return 0; /*0x4736ee*/
}
} // namespace gamemd

// 0x4736F0
namespace gamemd {
int sub_4736F0()
{
  dword_89E238 = 0; /*0x4736f2*/
  dword_89E23C = 0; /*0x4736f7*/
  dword_89E240 = 0; /*0x4736fc*/
  return 0; /*0x473701*/
}
} // namespace gamemd

// 0x473710
namespace gamemd {
int sub_473710()
{
  dword_89E268 = 0; /*0x473715*/
  dword_89E260 = 128; /*0x47371f*/
  dword_89E264 = 128; /*0x473724*/
  return 128; /*0x473729*/
}
} // namespace gamemd

// 0x473730
namespace gamemd {
int sub_473730()
{
  dword_89E208 = 0; /*0x473732*/
  dword_89E20C = 0; /*0x473737*/
  dword_89E210 = 0; /*0x47373c*/
  dword_89E214 = 0; /*0x473741*/
  return 0; /*0x473746*/
}
} // namespace gamemd

// 0x473750
namespace gamemd {
unsigned int * E4Recv_473750::sub_473750(unsigned int * a2)
{

  CarryoverClass *v3; // edi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax

  v3 = (CarryoverClass *)a2; /*0x473754*/
  *((unsigned int *)this + 1) = 0; /*0x47375a*/
  *((unsigned int *)this + 2) = 0; /*0x47375d*/
  *((unsigned int *)this + 3) = 0; /*0x473760*/
  *((unsigned short *)this + 10) = 0; /*0x473763*/
  *((unsigned short *)this + 11) = 0; /*0x473767*/
  *((unsigned int *)this + 6) = 0; /*0x47376d*/
  *((unsigned int *)this + 7) = -1; /*0x473770*/
  *this = (CarryoverClass)&vt_CarryoverClass; /*0x473777*/
  if ( v3 ) /*0x47377d*/
  {
    v4 = (*(int (**)(CarryoverClass *))(*(unsigned int *)v3 + 44))(v3); /*0x473783*/
    *((unsigned int *)this + 3) = v4; /*0x473786*/
    v5 = v4 - 1; /*0x473789*/
    if ( !v5 || (v6 = v5 - 5) == 0 || v6 == 9 ) /*0x473794*/
    {
      v7 = (*(int (**)(CarryoverClass *))(*(unsigned int *)v3 + 132))(v3); /*0x4737a6*/
      *((unsigned int *)this + 4) = (*(int (**)(int))(*(unsigned int *)v7 + 64))(v7); /*0x4737b3*/
    }
    *((unsigned int *)this + 7) = *(CarryoverClass *)(*(unsigned int *)(*(unsigned int *)&v3[135] + 52) + 184); /*0x4737c7*/
    *((unsigned int *)this + 6) = v3[27]; /*0x4737cd*/
    *((unsigned int *)this + 5) = *(CarryoverClass *)(*(int (**)(CarryoverClass *, unsigned int **))(*(unsigned int *)v3 + 440))(v3, &a2); /*0x4737df*/
  }
  return this; /*0x4737e4*/

}
} // namespace gamemd

// 0x473960
namespace gamemd {
char * sub_473960(unsigned int a1)
{
  if ( a1 >= 0xB ) /*0x473963*/
    return g_Str__none_; /*0x47396d*/
  else
    return off_81B7CC[2 * a1]; /*0x473965*/
}
} // namespace gamemd

// 0x4739D0
namespace gamemd {
int sub_4739D0()
{
  dword_89E280 = 0; /*0x4739d2*/
  dword_89E284 = 0; /*0x4739d7*/
  dword_89E288 = 0; /*0x4739dc*/
  dword_89E28C = 0; /*0x4739e1*/
  return 0; /*0x4739e6*/
}
} // namespace gamemd

// 0x473FE0
namespace gamemd {
void sub_473FE0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x473fec*/
  dbl_89E2B0 = Math::Sqrt(v0 + v0); /*0x473ffe*/
}
} // namespace gamemd

// 0x474010
namespace gamemd {
void sub_474010()
{
  dbl_89E300 = dbl_89E2B0 / 60.0; /*0x47401c*/
}
} // namespace gamemd

// 0x474030
namespace gamemd {
void sub_474030()
{
  dbl_89E2E8 = 1.0 / dbl_89E300; /*0x47403c*/
}
} // namespace gamemd

// 0x474050
namespace gamemd {
void sub_474050()
{
  dbl_89E2E0 = 0.0174532925199433 * 45.0; /*0x47405c*/
}
} // namespace gamemd

// 0x474070
namespace gamemd {
void sub_474070()
{
  dbl_89E2B8 = 0.0174532925199433 * 60.0; /*0x47407c*/
}
} // namespace gamemd

// 0x474090
namespace gamemd {
void sub_474090()
{
  dbl_89E290 = 0.0174532925199433 * 90.0; /*0x47409c*/
}
} // namespace gamemd

// 0x4740B0
namespace gamemd {
long long sub_4740B0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_89E290 - dbl_89E2B8); /*0x4740c2*/
  result = Math::RoundToInt(v0 * dbl_89E2B0 * 0.5); /*0x4740d6*/
  dword_89E308 = result; /*0x4740db*/
  return result; /*0x4740e0*/
}
} // namespace gamemd

// 0x4740F0
namespace gamemd {
void sub_4740F0()
{
  dbl_89E2C0 = Math::ArcTan((double)dword_89E308 * 0.00390625); /*0x474107*/
}
} // namespace gamemd

// 0x474120
namespace gamemd {
void sub_474120()
{
  dbl_89E2D8 = Math::ArcTan((double)(2 * dword_89E308) / dbl_89E2B0); /*0x474142*/
}
} // namespace gamemd

// 0x474150
namespace gamemd {
long long sub_474150()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_89E308) + 0.5); /*0x47416b*/
  dword_89E2FC = result; /*0x474170*/
  return result; /*0x474176*/
}
} // namespace gamemd

// 0x474180
namespace gamemd {
int sub_474180()
{
  word_89E2A8 = 0; /*0x474182*/
  word_89E2AA = 0; /*0x474188*/
  return 0; /*0x47418e*/
}
} // namespace gamemd

// 0x474190
namespace gamemd {
int sub_474190()
{
  dword_89E2C8 = 0; /*0x474192*/
  dword_89E2CC = 0; /*0x474197*/
  dword_89E2D0 = 0; /*0x47419c*/
  return 0; /*0x4741a1*/
}
} // namespace gamemd

// 0x4741B0
namespace gamemd {
int sub_4741B0()
{
  dword_89E2F8 = 0; /*0x4741b5*/
  dword_89E2F0 = 128; /*0x4741bf*/
  dword_89E2F4 = 128; /*0x4741c4*/
  return 128; /*0x4741c9*/
}
} // namespace gamemd

// 0x4741D0
namespace gamemd {
int sub_4741D0()
{
  dword_89E298 = 0; /*0x4741d2*/
  dword_89E29C = 0; /*0x4741d7*/
  dword_89E2A0 = 0; /*0x4741dc*/
  dword_89E2A4 = 0; /*0x4741e1*/
  return 0; /*0x4741e6*/
}
} // namespace gamemd

// 0x474540
namespace gamemd {
CCINIClass * E4Recv_474540::sub_474540(CCINIClass * aP1, char a3)
{

  int v5; // edi
  SHA1 v6; // [esp+8h] [ebp-80h] BYREF
  int v7; // [esp+2Ch] [ebp-5Ch]
  int v8; // [esp+30h] [ebp-58h]
  int v9; // [esp+34h] [ebp-54h]
  int v10; // [esp+38h] [ebp-50h]
  int v11; // [esp+3Ch] [ebp-4Ch]
  int v12; // [esp+40h] [ebp-48h]
  int v13; // [esp+44h] [ebp-44h]

  if ( !a3 ) /*0x474552*/
    return INIClass::WriteToString((INIClass *)this, aP1); /*0x47455c*/
  INIClass::ClearSection((int *)this, (int)g_INI_Key_Digest, 0); /*0x474575*/
  memset(&v6.SHA1_field_0x04, 0, 9); /*0x47457e*/
  v12 = 0; /*0x47458d*/
  v13 = 0; /*0x474591*/
  v7 = 1732584193; /*0x474595*/
  v8 = -271733879; /*0x47459d*/
  v9 = -1732584194; /*0x4745a5*/
  v10 = 271733878; /*0x4745ad*/
  v11 = -1009589776; /*0x4745b5*/
  *(unsigned int *)v6.__pad_0 = &vt_SHAPipe; /*0x4745bd*/
  INIClass::WriteToString((INIClass *)this, (int)&v6); /*0x4745c5*/
  ((SHA1 *)(&v6))->ComputeThunk((char *)&this->ambientSoundController[1] + 1); /*0x4745d2*/
  LOBYTE(this->ambientSoundController[1]) = 1; /*0x4745db*/
  Pipe::Dtor((Pipe *)&v6); /*0x4745df*/
  INIClass::ReadBase64Data( /*0x4745ee*/
    (char *)this,
    (uint8_t *)g_INI_Key_Digest,
    (int)&this->ambientSoundController[1] + 1,
    20);
  v5 = INIClass::WriteToString((INIClass *)this, aP1); /*0x47460a*/
  INIClass::ClearSection((int *)this, (int)g_INI_Key_Digest, 0); /*0x47460c*/
  return v5; /*0x474561*/

}
} // namespace gamemd

// 0x474660
namespace gamemd {
char E4Recv_474660::sub_474660(unsigned char * Block, char * a3, int a4)
{

  return INIClass::SetDouble((char *)this, Block, a3, (double)a4 * 0.00390625); /*0x47467f*/

}
} // namespace gamemd

// 0x476E20
namespace gamemd {
int E4Recv_476E20::sub_476E20()
{

  SHA1 v3; // [esp+4h] [ebp-80h] BYREF
  int v4; // [esp+28h] [ebp-5Ch]
  int v5; // [esp+2Ch] [ebp-58h]
  int v6; // [esp+30h] [ebp-54h]
  int v7; // [esp+34h] [ebp-50h]
  int v8; // [esp+38h] [ebp-4Ch]
  int v9; // [esp+3Ch] [ebp-48h]
  int v10; // [esp+40h] [ebp-44h]

  memset(&v3.SHA1_field_0x04, 0, 9); /*0x476e29*/
  v9 = 0; /*0x476e35*/
  v10 = 0; /*0x476e39*/
  v4 = 1732584193; /*0x476e44*/
  v5 = -271733879; /*0x476e4c*/
  v6 = -1732584194; /*0x476e54*/
  v7 = 271733878; /*0x476e5c*/
  v8 = -1009589776; /*0x476e64*/
  *(unsigned int *)v3.__pad_0 = &vt_SHAPipe; /*0x476e6c*/
  INIClass::WriteToString((INIClass *)this, (int)&v3); /*0x476e74*/
  ((SHA1 *)(&v3))->ComputeThunk((char *)&this->ambientSoundController[1] + 1); /*0x476e81*/
  LOBYTE(this->ambientSoundController[1]) = 1; /*0x476e8a*/
  return Pipe::Dtor((Pipe *)&v3); /*0x476e93*/

}
} // namespace gamemd

// 0x476EA0
namespace gamemd {
void E4Recv_476EA0::sub_476EA0()
{

  LOBYTE(this->ambientSoundController[1]) = 0; /*0x476ea0*/

}
} // namespace gamemd

// 0x478990
namespace gamemd {
int sub_478990()
{
  dword_89E318 = 0; /*0x478992*/
  dword_89E31C = 0; /*0x478997*/
  dword_89E320 = 0; /*0x47899c*/
  dword_89E324 = 0; /*0x4789a1*/
  return 0; /*0x4789a6*/
}
} // namespace gamemd

// 0x4789B0
namespace gamemd {
void sub_4789B0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4789bc*/
  dbl_89E330 = Math::Sqrt(v0 + v0); /*0x4789ce*/
}
} // namespace gamemd

// 0x4789E0
namespace gamemd {
void sub_4789E0()
{
  dbl_89E380 = dbl_89E330 / 60.0; /*0x4789ec*/
}
} // namespace gamemd

// 0x478A00
namespace gamemd {
void sub_478A00()
{
  dbl_89E368 = 1.0 / dbl_89E380; /*0x478a0c*/
}
} // namespace gamemd

// 0x478A20
namespace gamemd {
void sub_478A20()
{
  dbl_89E360 = 0.0174532925199433 * 45.0; /*0x478a2c*/
}
} // namespace gamemd

// 0x478A40
namespace gamemd {
void sub_478A40()
{
  dbl_89E338 = 0.0174532925199433 * 60.0; /*0x478a4c*/
}
} // namespace gamemd

// 0x478A60
namespace gamemd {
void sub_478A60()
{
  dbl_89E310 = 0.0174532925199433 * 90.0; /*0x478a6c*/
}
} // namespace gamemd

// 0x478A80
namespace gamemd {
long long sub_478A80()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_89E310 - dbl_89E338); /*0x478a92*/
  result = Math::RoundToInt(v0 * dbl_89E330 * 0.5); /*0x478aa6*/
  dword_89E388 = result; /*0x478aab*/
  return result; /*0x478ab0*/
}
} // namespace gamemd

// 0x478AC0
namespace gamemd {
void sub_478AC0()
{
  dbl_89E340 = Math::ArcTan((double)dword_89E388 * 0.00390625); /*0x478ad7*/
}
} // namespace gamemd

// 0x478AF0
namespace gamemd {
void sub_478AF0()
{
  dbl_89E358 = Math::ArcTan((double)(2 * dword_89E388) / dbl_89E330); /*0x478b12*/
}
} // namespace gamemd

// 0x478B20
namespace gamemd {
long long sub_478B20()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_89E388) + 0.5); /*0x478b3b*/
  dword_89E37C = result; /*0x478b40*/
  return result; /*0x478b46*/
}
} // namespace gamemd

// 0x478B50
namespace gamemd {
int sub_478B50()
{
  word_89E328 = 0; /*0x478b52*/
  word_89E32A = 0; /*0x478b58*/
  return 0; /*0x478b5e*/
}
} // namespace gamemd

// 0x478B60
namespace gamemd {
int sub_478B60()
{
  dword_89E348 = 0; /*0x478b62*/
  dword_89E34C = 0; /*0x478b67*/
  dword_89E350 = 0; /*0x478b6c*/
  return 0; /*0x478b71*/
}
} // namespace gamemd

// 0x478B80
namespace gamemd {
int sub_478B80()
{
  dword_89E378 = 0; /*0x478b85*/
  dword_89E370 = 128; /*0x478b8f*/
  dword_89E374 = 128; /*0x478b94*/
  return 128; /*0x478b99*/
}
} // namespace gamemd

// 0x479080
namespace gamemd {
int sub_479080()
{
  dword_89E390 = 0; /*0x479082*/
  dword_89E394 = 0; /*0x479087*/
  dword_89E398 = 0; /*0x47908c*/
  dword_89E39C = 0; /*0x479091*/
  return 0; /*0x479096*/
}
} // namespace gamemd

// 0x4796E0
namespace gamemd {
int sub_4796E0()
{
  memset(&unk_89E3A8, 0, 0x68u); /*0x4796ed*/
  return atexit(nullsub_109); /*0x4796fc*/
}
} // namespace gamemd

// 0x479700
namespace gamemd {
void nullsub_109()
{
  ; /*0x479700*/
}
} // namespace gamemd

// 0x479730
namespace gamemd {
void nullsub_110()
{
  ; /*0x479730*/
}
} // namespace gamemd

// 0x479900
namespace gamemd {
int sub_479900(char a1)
{
  UINT v1; // eax
  DWORD v3; // edi
  HANDLE FileA; // edi
  char Buffer[8]; // [esp+8h] [ebp-10h] BYREF
  CHAR FileName[8]; // [esp+10h] [ebp-8h] BYREF

  sprintf(Buffer, "%c:\\", a1 + 65); /*0x479918*/
  v1 = GetDriveTypeA(Buffer) - 2; /*0x47992b*/
  if ( v1 ) /*0x47992e*/
  {
    if ( v1 != 3 ) /*0x479933*/
    {
      Debug::Log(); /*0x47993a*/
      return -1; /*0x47994a*/
    }
    v3 = 0x80000000; /*0x47994d*/
  }
  else
  {
    v3 = -1073741824; /*0x479954*/
  }
  sprintf(FileName, "\\\\.\\%c:", a1 + 65); /*0x479964*/
  FileA = CreateFileA(FileName, v3, 3u, 0, 3u, 0, 0); /*0x479982*/
  if ( FileA == (HANDLE)-1 ) /*0x479987*/
    Debug::Log(); /*0x47998f*/
  return (int)FileA; /*0x479945*/
}
} // namespace gamemd

// 0x4799D0
namespace gamemd {
char sub_4799D0(HANDLE hDevice)
{
  HANDLE v1; // ebp
  int v2; // esi

  v1 = hDevice; /*0x4799d8*/
  v2 = 0; /*0x4799e4*/
  while ( !DeviceIoControl(v1, 0x90018u, 0, 0, 0, 0, (LPDWORD)&hDevice, 0) ) /*0x479a03*/
  {
    GetLastError(); /*0x479a06*/
    Debug::Log(); /*0x479a0e*/
    Sleep(0x1F4u); /*0x479a1b*/
    if ( ++v2 >= 20 ) /*0x479a21*/
      return 0; /*0x479a29*/
  }
  return 1; /*0x479a23*/
}
} // namespace gamemd

// 0x479A40
namespace gamemd {
char sub_479A40(HANDLE hDevice)
{
  HANDLE v1; // ebp
  int v2; // esi

  v1 = hDevice; /*0x479a48*/
  v2 = 0; /*0x479a54*/
  while ( !DeviceIoControl(v1, 0x9001Cu, 0, 0, 0, 0, (LPDWORD)&hDevice, 0) ) /*0x479a73*/
  {
    GetLastError(); /*0x479a76*/
    Debug::Log(); /*0x479a7e*/
    Sleep(0x1F4u); /*0x479a8b*/
    if ( ++v2 >= 20 ) /*0x479a91*/
      return 0; /*0x479a99*/
  }
  return 1; /*0x479a93*/
}
} // namespace gamemd

// 0x47A1B0
namespace gamemd {
char ObjectClass::sub_47A1B0(DWORD BytesReturned)
{

  HANDLE FileA; // esi
  char v5; // bl

  Debug::Log(); /*0x47a1bc*/
  Debug::Log(); /*0x47a1d6*/
  LOBYTE(BytesReturned) = BytesReturned + 1; /*0x47a1e0*/
  FileA = CreateFileA(g_Str_____vwin32, 0, 0, 0, 0, 0x4000000u, 0); /*0x47a203*/
  Debug::Log(); /*0x47a205*/
  if ( (uint8_t)CDROM::LockVolume((int)this, FileA, BytesReturned, 0, 0) ) /*0x47a218*/
  {
    Debug::Log(); /*0x47a244*/
    Debug::Log(); /*0x47a24e*/
    if ( sub_47A560(FileA, BytesReturned) ) /*0x47a25a*/
    {
      Debug::Log(); /*0x47a280*/
      v5 = 1; /*0x47a285*/
    }
    else
    {
      Debug::Log(); /*0x47a26f*/
      v5 = 0; /*0x47a277*/
    }
    DriveControlCD((int)this, FileA, BytesReturned); /*0x47a28f*/
    CloseHandle(FileA); /*0x47a295*/
    Debug::Log(); /*0x47a2af*/
    return v5; /*0x47a2b7*/
  }
  else
  {
    Debug::Log(); /*0x47a22d*/
    return 0; /*0x47a235*/
  }

}
} // namespace gamemd

// 0x47A2D0
namespace gamemd {
char ObjectClass::sub_47A2D0(DWORD BytesReturned)
{

  HANDLE FileA; // esi
  char v5; // bl

  Debug::Log(); /*0x47a2dc*/
  Debug::Log(); /*0x47a2f6*/
  LOBYTE(BytesReturned) = BytesReturned + 1; /*0x47a300*/
  FileA = CreateFileA(g_Str_____vwin32, 0, 0, 0, 0, 0x4000000u, 0); /*0x47a323*/
  Debug::Log(); /*0x47a325*/
  if ( (uint8_t)CDROM::LockVolume((int)this, FileA, BytesReturned, 0, 0) ) /*0x47a338*/
  {
    Debug::Log(); /*0x47a364*/
    Debug::Log(); /*0x47a36e*/
    if ( CDROM::DeviceIoControl(FileA, BytesReturned) ) /*0x47a37a*/
    {
      Debug::Log(); /*0x47a3a0*/
      v5 = 1; /*0x47a3a5*/
    }
    else
    {
      Debug::Log(); /*0x47a38f*/
      v5 = 0; /*0x47a397*/
    }
    DriveControlCD((int)this, FileA, BytesReturned); /*0x47a3af*/
    CloseHandle(FileA); /*0x47a3b5*/
    Debug::Log(); /*0x47a3cf*/
    return v5; /*0x47a3d7*/
  }
  else
  {
    Debug::Log(); /*0x47a34d*/
    return 0; /*0x47a355*/
  }

}
} // namespace gamemd

// 0x47A560
namespace gamemd {
bool sub_47A560(HANDLE hDevice, DWORD BytesReturned)
{
  char v2; // bl
  unsigned char v4[2]; // [esp+Eh] [ebp-1Eh] BYREF
  unsigned int InBuffer[7]; // [esp+10h] [ebp-1Ch] BYREF

  v2 = BytesReturned; /*0x47a564*/
  memset(&InBuffer[1], 0, 0x18u); /*0x47a583*/
  v4[1] = 0; /*0x47a58d*/
  CDROM::DeviceIoControl(hDevice, BytesReturned); /*0x47a591*/
  InBuffer[0] = v2; /*0x47a59d*/
  InBuffer[1] = v4; /*0x47a5ac*/
  v4[0] = 0; /*0x47a5bd*/
  InBuffer[3] = 17421; /*0x47a5c2*/
  InBuffer[2] = 2120; /*0x47a5ca*/
  if ( !DeviceIoControl(hDevice, 1u, InBuffer, 0x1Cu, InBuffer, 0x1Cu, &BytesReturned, 0) ) /*0x47a5d2*/
  {
    GetLastError(); /*0x47a5e6*/
    Debug::Log(); /*0x47a5f2*/
    return 0; /*0x47a5ff*/
  }
  return (InBuffer[6] & 1) == 0; /*0x47a607*/
}
} // namespace gamemd

// 0x47A620
namespace gamemd {
bool sub_47A620(HANDLE hDevice, DWORD BytesReturned)
{
  unsigned int InBuffer[7]; // [esp+4h] [ebp-1Ch] BYREF

  memset(&InBuffer[1], 0, 0x18u); /*0x47a62f*/
  InBuffer[0] = (char)BytesReturned; /*0x47a645*/
  InBuffer[3] = 17421; /*0x47a656*/
  InBuffer[2] = 2121; /*0x47a65e*/
  if ( !DeviceIoControl(hDevice, 1u, InBuffer, 0x1Cu, InBuffer, 0x1Cu, &BytesReturned, 0) ) /*0x47a666*/
  {
    GetLastError(); /*0x47a678*/
    Debug::Log(); /*0x47a684*/
    return 0; /*0x47a691*/
  }
  return (InBuffer[6] & 1) == 0; /*0x47a699*/
}
} // namespace gamemd

// 0x47AA00
namespace gamemd {
CDFileClass * E4Recv_47AA00::sub_47AA00(char ** a2)
{

  char *v3; // eax

  BufferIOFileClass::Constructor((BufferIOFileClass *)this); /*0x47aa03*/
  *((unsigned char *)this + 84) = 0; /*0x47aa0c*/
  *(unsigned int *)this->BufferIOFileClass = &off_7E1668; /*0x47aa10*/
  v3 = String::GetOrEmpty_Alt((String *)a2); /*0x47aa16*/
  FileClass::OpenWithCDSearch(this, v3); /*0x47aa1e*/
  return this->BufferIOFileClass; /*0x47aa25*/

}
} // namespace gamemd

// 0x47AAC0
namespace gamemd {
bool sub_47AAC0()
{
  void **v0; // esi
  void **v1; // edi

  v0 = (void **)CmdLine_NoCD; /*0x47aac1*/
  if ( CmdLine_NoCD ) /*0x47aac9*/
  {
    do /*0x47aaeb*/
    {
      v1 = (void **)*v0; /*0x47aacf*/
      if ( v0[1] ) /*0x47aacc*/
        free(v0[1]); /*0x47aad6*/
      RA2_OPDEL(v0); /*0x47aadf*/
      v0 = v1; /*0x47aae7*/
    }
    while ( v1 ); /*0x47aaeb*/
  }
  CmdLine_NoCD = 0; /*0x47aaee*/
// 0x47ab10
  return Game::FindGameDirectoryCD(byte_89E41C); /*0x47aafd*/
}
} // namespace gamemd

// 0x47ADC0
namespace gamemd {
void sub_47ADC0()
{
  void **v0; // esi
  void **v1; // edi

  v0 = (void **)CmdLine_NoCD; /*0x47adc1*/
  if ( CmdLine_NoCD ) /*0x47adc9*/
  {
    do /*0x47adeb*/
    {
      v1 = (void **)*v0; /*0x47adcf*/
      if ( v0[1] ) /*0x47adcc*/
        free(v0[1]); /*0x47add6*/
      RA2_OPDEL(v0); /*0x47addf*/
      v0 = v1; /*0x47ade7*/
    }
    while ( v1 ); /*0x47adeb*/
    CmdLine_NoCD = 0; /*0x47aded*/
  }
  else
  {
    CmdLine_NoCD = 0; /*0x47adf6*/
  }
}
} // namespace gamemd

// 0x47B150
namespace gamemd {
void sub_47B150()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x47b15c*/
  dbl_89E750 = Math::Sqrt(v0 + v0); /*0x47b16e*/
}
} // namespace gamemd

// 0x47B180
namespace gamemd {
void sub_47B180()
{
  dbl_89E7B8 = dbl_89E750 / 60.0; /*0x47b18c*/
}
} // namespace gamemd

// 0x47B1A0
namespace gamemd {
void sub_47B1A0()
{
  dbl_89E7A0 = 1.0 / dbl_89E7B8; /*0x47b1ac*/
}
} // namespace gamemd

// 0x47B1C0
namespace gamemd {
void sub_47B1C0()
{
  dbl_89E798 = 0.0174532925199433 * 45.0; /*0x47b1cc*/
}
} // namespace gamemd

// 0x47B1E0
namespace gamemd {
void sub_47B1E0()
{
  dbl_89E758 = 0.0174532925199433 * 60.0; /*0x47b1ec*/
}
} // namespace gamemd

// 0x47B200
namespace gamemd {
void sub_47B200()
{
  dbl_89E728 = 0.0174532925199433 * 90.0; /*0x47b20c*/
}
} // namespace gamemd

// 0x47B220
namespace gamemd {
long long sub_47B220()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_89E728 - dbl_89E758); /*0x47b232*/
  result = Math::RoundToInt(v0 * dbl_89E750 * 0.5); /*0x47b246*/
  dword_89E7C0 = result; /*0x47b24b*/
  return result; /*0x47b250*/
}
} // namespace gamemd

// 0x47B260
namespace gamemd {
void sub_47B260()
{
  dbl_89E768 = Math::ArcTan((double)dword_89E7C0 * 0.00390625); /*0x47b277*/
}
} // namespace gamemd

// 0x47B290
namespace gamemd {
void sub_47B290()
{
  dbl_89E788 = Math::ArcTan((double)(2 * dword_89E7C0) / dbl_89E750); /*0x47b2b2*/
}
} // namespace gamemd

// 0x47B2C0
namespace gamemd {
long long sub_47B2C0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_89E7C0) + 0.5); /*0x47b2db*/
  dword_89E7B4 = result; /*0x47b2e0*/
  return result; /*0x47b2e6*/
}
} // namespace gamemd

// 0x47B2F0
namespace gamemd {
int sub_47B2F0()
{
  dword_89E748 = 0; /*0x47b2f2*/
  return 0; /*0x47b2fe*/
}
} // namespace gamemd

// 0x47B300
namespace gamemd {
int sub_47B300()
{
  dword_89E778 = 0; /*0x47b302*/
  dword_89E77C = 0; /*0x47b307*/
  dword_89E780 = 0; /*0x47b30c*/
  return 0; /*0x47b311*/
}
} // namespace gamemd

// 0x47B320
namespace gamemd {
int sub_47B320()
{
  dword_89E7B0 = 0; /*0x47b325*/
  dword_89E7A8 = 128; /*0x47b32f*/
  dword_89E7AC = 128; /*0x47b334*/
  return 128; /*0x47b339*/
}
} // namespace gamemd

// 0x47B340
namespace gamemd {
int sub_47B340()
{
  dword_89E730 = 0; /*0x47b342*/
  dword_89E734 = 0; /*0x47b347*/
  dword_89E738 = 0; /*0x47b34c*/
  dword_89E73C = 0; /*0x47b351*/
  return 0; /*0x47b356*/
}
} // namespace gamemd
