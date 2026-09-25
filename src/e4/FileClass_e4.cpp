// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/FileClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/FilePipe_30_e4.hpp"
#include "e4/classes/File_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x473AE0
namespace gamemd {
int FileClass::Write(CCFileClass * aP1, DWORD nNumberOfBytesToWrite)
{
  int v4; // edi
  int v5; // eax

  if ( *(&this->q0082) ) /*0x473ae3*/
  {
    v4 = *this; /*0x473aeb*/
    v5 = this->vt_slot_4(); /*0x473aed*/
    this->vt_slot_64(13, 0, v5); /*0x473af7*/
  }
  return FileClass::BufferedWriter(aP1, nNumberOfBytesToWrite); /*0x473b0c*/
}
} // namespace gamemd
// 0x473FC0
namespace gamemd {
int FileClass::SetFileName(IUnknown * aP1)
{
  *(&this->q0086) = 0; /*0x473fc4*/
  return FileClass::OpenWithCDSearch(aP1); /*0x473fd1*/
}
} // namespace gamemd
// 0x65CBF0
namespace gamemd {
int FileClass::Open(int a2)
{
  int v4; // edi
  HANDLE FileA; // eax
  DWORD LastError; // eax
  int v7; // [esp-4h] [ebp-Ch]

  if ( !this->q018 ) /*0x65cbf4*/
    return 0; /*0x65cbff*/
  if ( this->vt_slot_24() ) /*0x65cc06*/
    return 1; /*0x65cc0b*/
  if ( !a2 ) /*0x65cc17*/
  {
    FileA = CreateFileA((LPCSTR)this->q018, 0x80000000, 1u, 0, 3u, 0x80u, 0); /*0x65cc59*/
    this->q014 = (int)FileA; /*0x65cc62*/
    if ( FileA == (HANDLE)-1 ) /*0x65cc65*/
      return 0; /*0x65cc6b*/
    if ( CloseHandle(FileA) ) /*0x65cc6f*/
      goto LABEL_13; /*0x65cc77*/
    v4 = *this; /*0x65cc7c*/
    v7 = this->q018; /*0x65cc7e*/
    goto LABEL_12; /*0x65cc7e*/
  }
  FileClass::Open2(1); /*0x65cc1d*/
  if ( this->vt_slot_24() ) /*0x65cc26*/
  {
    if ( CloseHandle((HANDLE)this->q014) ) /*0x65cc31*/
    {
  LABEL_13:
      this->q014 = -1; /*0x65cc8d*/
      return 1; /*0x65cc8d*/
    }
    v4 = *this; /*0x65cc3e*/
    v7 = this->q018; /*0x65cc40*/
  LABEL_12:
    LastError = GetLastError(); /*0x65cc7f*/
    this->vt_slot_64(LastError, 0, v7); /*0x65cc8a*/
    goto LABEL_13; /*0x65cc8a*/
  }
  return 1; /*0x65cbfb*/
}
} // namespace gamemd
// 0x65CCE0
namespace gamemd {
int FileClass::Read(BufferIOFileClass * aP1, AbstractClass * aP2)
{
  DWORD v4; // ebx
  DWORD result; // eax
  int v6; // eax
  AbstractClass * v7;
  int v9; // ebx
  DWORD LastError; // eax
  void *v11; // [esp-1Ch] [ebp-2Ch]
  int v12; // [esp-Ch] [ebp-1Ch]
  DWORD NumberOfBytesRead; // [esp+8h] [ebp-8h] BYREF
  int v14; // [esp+Ch] [ebp-4h]

  v4 = 0; /*0x65cce7*/
  NumberOfBytesRead = 0; /*0x65cce9*/
  v14 = 0; /*0x65cced*/
  if ( !this->vt_slot_24() ) /*0x65ccf3*/
  {
    result = this->vt_slot_28(1); /*0x65cd00*/
    if ( !result ) /*0x65cd05*/
      return result; /*0x65cd05*/
    v14 = 1; /*0x65cd0f*/
  }
  if ( this->q010 == -1 ) /*0x65cd1e*/
  {
    v7 = aP2; /*0x65cd3b*/
  }
  else
  {
    v6 = this->vt_slot_40(0, 1); /*0x65cd27*/
    v7 = aP2; /*0x65cd2d*/
    if ( aP2 >= this->q010 - v6 ) /*0x65cd35*/
      v7 = this->q010 - v6; /*0x65cd37*/
  }
  while ( v7 > 0 ) /*0x65cd41*/
  {
    v11 = (void *)this->q014; /*0x65cd54*/
    NumberOfBytesRead = 0; /*0x65cd55*/
    if ( ReadFile(v11, aP1, v7, &NumberOfBytesRead, 0) ) /*0x65cd5d*/
    {
      aP1 += NumberOfBytesRead; /*0x65cd98*/
      v7 -= NumberOfBytesRead; /*0x65cd9a*/
      v4 += NumberOfBytesRead; /*0x65cd9c*/
      if ( !NumberOfBytesRead ) /*0x65cda0*/
        break; /*0x65cda0*/
    }
    else
    {
      aP1 += NumberOfBytesRead; /*0x65cd6b*/
      v7 -= NumberOfBytesRead; /*0x65cd6d*/
      v4 += NumberOfBytesRead; /*0x65cd6f*/
      v4 = v4; /*0x65cd78*/
      if ( byte_B04BEC ) /*0x65cd7c*/
        break; /*0x65cd7c*/
      v9 = *this; /*0x65cd81*/
      v12 = this->q018; /*0x65cd83*/
      LastError = GetLastError(); /*0x65cd86*/
      this->vt_slot_64(LastError, 1, v12); /*0x65cd8f*/
      v4 = v4; /*0x65cd92*/
    }
  }
  NumberOfBytesRead = v4; /*0x65cda7*/
  byte_B04BEC = 0; /*0x65cdb1*/
  if ( v14 ) /*0x65cdb9*/
    this->vt_slot_52(); /*0x65cdbf*/
  return NumberOfBytesRead; /*0x65cd07*/
}
} // namespace gamemd
// 0x65CF00
namespace gamemd {
int FileClass::Seek(LONG lDistanceToMove, DWORD dwMoveMethod)
{
  LONG v4; // ecx
  DWORD v5; // edi
  LONG v6; // ebx
  LONG v7; // ebx
  DWORD v8; // eax
  int v9; // edi
  DWORD v10; // eax
  LONG v11; // edi
  int result; // eax
  DWORD v13; // eax
  int v14; // edi
  DWORD v15; // eax
  int v16; // ecx
  LONG v17; // edi
  DWORD v18; // eax
  int v19; // edi
  DWORD LastError; // eax
  DWORD v21; // edi
  int v22; // edi
  DWORD v23; // eax
  int v24; // [esp-Ch] [ebp-14h]
  int v25; // [esp-Ch] [ebp-14h]
  int v26; // [esp-Ch] [ebp-14h]
  int v27; // [esp-4h] [ebp-Ch]

  v4 = this->FileName; /*0x65cf04*/
  if ( v4 != -1 ) /*0x65cf0a*/
  {
    v5 = dwMoveMethod; /*0x65cf10*/
    if ( dwMoveMethod ) /*0x65cf1b*/
    {
      if ( dwMoveMethod == 2 ) /*0x65cf20*/
      {
        v5 = 0; /*0x65cf2b*/
        v6 = v4 + this->Handle + lDistanceToMove; /*0x65cf2d*/
      }
      else
      {
        v6 = lDistanceToMove; /*0x65cf40*/
      }
    }
    else
    {
      v7 = lDistanceToMove; /*0x65cf31*/
      if ( lDistanceToMove > v4 ) /*0x65cf37*/
        v7 = v4; /*0x65cf39*/
      v6 = this->Handle + v7; /*0x65cf3b*/
    }
    if ( this->Write() ) /*0x65cf48*/
    {
      if ( v5 ) /*0x65cf6b*/
      {
        if ( v5 == 1 ) /*0x65cf6e*/
        {
          v5 = 1; /*0x65cf7a*/
        }
        else if ( v5 == 2 ) /*0x65cf71*/
        {
          v5 = 2; /*0x65cf73*/
        }
      }
      else
      {
        v5 = 0; /*0x65cf81*/
      }
      v8 = SetFilePointer((HANDLE)this->FileTimeDateLo, v6, 0, v5); /*0x65cf8b*/
      if ( v8 != -1 ) /*0x65cf90*/
      {
  LABEL_20:
        v11 = this->Handle; /*0x65cfa8*/
        result = v8 - v11; /*0x65cfab*/
        if ( result >= 0 ) /*0x65cfad*/
          goto LABEL_27; /*0x65cfad*/
        if ( this->Write() ) /*0x65cfb3*/
        {
          v13 = SetFilePointer((HANDLE)this->FileTimeDateLo, v11, 0, 0); /*0x65cfd4*/
          if ( v13 != -1 ) /*0x65cfd9*/
          {
  LABEL_26:
            v11 = this->Handle; /*0x65cff1*/
            result = v13 - v11; /*0x65cff4*/
  LABEL_27:
            v16 = this->FileName; /*0x65cff6*/
            if ( result > v16 ) /*0x65cffb*/
            {
              v17 = v16 + v11; /*0x65cfff*/
              if ( this->Write() ) /*0x65d003*/
              {
                v18 = SetFilePointer((HANDLE)this->FileTimeDateLo, v17, 0, 0); /*0x65d030*/
                if ( v18 == -1 ) /*0x65d035*/
                {
                  v19 = *this; /*0x65d03a*/
                  v26 = this->FileNameAllocated; /*0x65d03c*/
                  LastError = GetLastError(); /*0x65d03f*/
                  this->StubReturnFalse(LastError, 0, v26); /*0x65d048*/
                  v18 = 0; /*0x65d04b*/
                }
                return v18 - this->Handle; /*0x65d04d*/
              }
              else
              {
                this->StubReturnFalse(9, 0, this->FileNameAllocated); /*0x65d016*/
                return -this->Handle; /*0x65d021*/
              }
            }
            return result; /*0x65d024*/
          }
          v14 = *this; /*0x65cfde*/
          v25 = this->FileNameAllocated; /*0x65cfe0*/
          v15 = GetLastError(); /*0x65cfe3*/
          this->StubReturnFalse(v15, 0, v25); /*0x65cfec*/
        }
        else
        {
          this->StubReturnFalse(9, 0, this->FileNameAllocated); /*0x65cfc6*/
        }
        v13 = 0; /*0x65cfef*/
        goto LABEL_26; /*0x65cfef*/
      }
      v9 = *this; /*0x65cf95*/
      v24 = this->FileNameAllocated; /*0x65cf97*/
      v10 = GetLastError(); /*0x65cf9a*/
      this->StubReturnFalse(v10, 0, v24); /*0x65cfa3*/
    }
    else
    {
      this->StubReturnFalse(9, 0, this->FileNameAllocated); /*0x65cf61*/
    }
    v8 = 0; /*0x65cfa6*/
    goto LABEL_20; /*0x65cfa6*/
  }
  v21 = dwMoveMethod; /*0x65d059*/
  if ( this->Write() ) /*0x65d05f*/
  {
    if ( dwMoveMethod ) /*0x65d081*/
    {
      if ( dwMoveMethod == 1 ) /*0x65d084*/
      {
        v21 = 1; /*0x65d090*/
      }
      else if ( dwMoveMethod == 2 ) /*0x65d087*/
      {
        v21 = 2; /*0x65d089*/
      }
    }
    else
    {
      v21 = 0; /*0x65d097*/
    }
    result = SetFilePointer((HANDLE)this->FileTimeDateLo, lDistanceToMove, 0, v21); /*0x65d0a5*/
    if ( result == -1 ) /*0x65d0ae*/
    {
      v22 = *this; /*0x65d0b3*/
      v27 = this->FileNameAllocated; /*0x65d0b5*/
      v23 = GetLastError(); /*0x65d0b8*/
      this->StubReturnFalse(v23, 0, v27); /*0x65d0c1*/
      return 0; /*0x65d0c4*/
    }
  }
  else
  {
    this->StubReturnFalse(9, 0, this->FileNameAllocated); /*0x65d072*/
    return 0; /*0x65d076*/
  }
  return result; /*0x65d020*/
}
} // namespace gamemd
// 0x65D150
namespace gamemd {
int FileClass::Close()
{
  this->CloseHandle(); /*0x65d155*/
  if ( !this->Open2(2) ) /*0x65d15e*/
    return 0; /*0x65d184*/
  if ( this->FileName != -1 ) /*0x65d169*/
    this->Seek_1(0, 0); /*0x65d173*/
  this->CloseHandle(); /*0x65d17a*/
  return 1; /*0x65d182*/
}
} // namespace gamemd
// 0x401950
namespace gamemd {
unsigned int * FileClass::loc_401950(char a2)
{
    *(void**)this = &DataGlobal_7E1668;
    BufferIOFileClass::Dtor();
    if ( (a2 & 1) != 0 )
    RA2_OPDEL();
    return this;
}
} // namespace gamemd

// 0x65C5F0
namespace gamemd {
int FileClass::StubReturnFalse()
{
  return 0; /*0x65c5f2*/
}
} // namespace gamemd
// 0x65C600
namespace gamemd {
char FileClass::Stub(int a1)
{
  return 0; /*0x65c602*/
}
} // namespace gamemd
// 0x76F020
namespace gamemd {
int FileClass::GetState()
{
  return *(this + 1); /*0x76f023*/
}
} // namespace gamemd
// 0x76F070
namespace gamemd {
int FileClass::SetState()
{
  return *(this + 1); /*0x76f073*/
}
} // namespace gamemd