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
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/FactoryClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Flag_e4.hpp"
#include "e4/classes/RawFileClass_e4.hpp"

// 0x473AE0
namespace gamemd {  // G42.18 ns repair
int FileClass::Write(CCFileClass * aP1, DWORD nNumberOfBytesToWrite)
{

  if ( this->u32_58 ) /*0x473ae3*/
  {
    int v4; // edi
    v4 = *(unsigned int *)this->vtable1; /*0x473aeb*/
    int v5; // eax
    v5 = (*(int (**)(CCFileClass *))(*(unsigned int *)this->vtable1 + 4))(this); /*0x473aed*/
    (*(void (**)(CCFileClass *, int, unsigned int, int))(v4 + 64))(this, 13, 0, v5); /*0x473af7*/
  }
  return FileClass::BufferedWriter((char *)aP1, nNumberOfBytesToWrite); /*0x473b0c*/
}  // G42.18 ns repair
} // namespace gamemd
// 0x473FC0
namespace gamemd {
const char* FileClass::SetFileName(char *aP1, void *a2)
{
  this->u32_68 = 0; /*0x473fc4*/
  return (const char *)(FileClass::OpenWithCDSearch(aP1)); /*0x473fd1*/
}
} // namespace gamemd
// 0x65CBF0
namespace gamemd {
int FileClass::Open(int a2, void *a2_1, void *a3)
{

  int result; // eax
  int v4; // edi
  DWORD LastError; // eax
  int v6; // [esp-4h] [ebp-Ch]

  result = *&this->u32_18; /*0x65cbf4*/
  if ( !result ) /*0x65cbf9*/
  {
    (result) = ((result) & ~0xFF) | ((0) & 0xFF); /*0x65cbfc*/
    return result; /*0x65cbff*/
  }
  result = (*(int (**)(RawFileClass *))(*(unsigned int *)this->FileClass + 24))(this); /*0x65cc06*/
  if ( (unsigned char)result ) /*0x65cc0b*/
    goto LABEL_14; /*0x65cc0b*/
  if ( !a2 ) /*0x65cc17*/
  {
    result = (int)CreateFileA(*&this->u32_18, 0x80000000, 1u, 0, 3u, 0x80u, 0); /*0x65cc59*/
    *(unsigned int *)this->FileTimeDateLo = result; /*0x65cc62*/
    if ( result == -1 ) /*0x65cc65*/
    {
      (result) = ((result) & ~0xFF) | ((0) & 0xFF); /*0x65cc68*/
      return result; /*0x65cc6b*/
    }
    result = CloseHandle((HANDLE)result); /*0x65cc6f*/
    if ( result ) /*0x65cc77*/
      goto LABEL_13; /*0x65cc77*/
    v4 = *(unsigned int *)this->FileClass; /*0x65cc7c*/
    v6 = *&this->u32_18; /*0x65cc7e*/
    goto LABEL_12; /*0x65cc7e*/
  }
  FileClass::Open2(this, (const CHAR *)1); /*0x65cc1d*/
  result = (*(int (**)(RawFileClass *))(*(unsigned int *)this->FileClass + 24))(this); /*0x65cc26*/
  if ( (unsigned char)result ) /*0x65cc2b*/
  {
    result = CloseHandle(*(HANDLE *)this->FileTimeDateLo); /*0x65cc31*/
    if ( result ) /*0x65cc39*/
    {
      LABEL_13:
      *(unsigned int *)this->FileTimeDateLo = -1; /*0x65cc8d*/
      goto LABEL_14; /*0x65cc8d*/
    }
    v4 = *(unsigned int *)this->FileClass; /*0x65cc3e*/
    v6 = *&this->u32_18; /*0x65cc40*/
    LABEL_12:
    LastError = GetLastError(); /*0x65cc7f*/
    result = (*(int (**)(RawFileClass *, DWORD, unsigned int, int))(v4 + 64))(this, LastError, 0, v6); /*0x65cc8a*/
    goto LABEL_13; /*0x65cc8a*/
  }
  LABEL_14:
  (result) = ((result) & ~0xFF) | ((1) & 0xFF); /*0x65cc94*/
  return result; /*0x65cbfb*/

}
} // namespace gamemd
// 0x65CCE0
namespace gamemd {
int FileClass::Read(char *aP1, signed int aP2, void *a3)
{

  char *v7; // edi

  DWORD v4 = 0; // ebx /*0x65cce7*/
  DWORD NumberOfBytesRead; // [esp+8h] [ebp-8h] BYREF
  NumberOfBytesRead = 0; /*0x65cce9*/
  int v14; // [esp+Ch] [ebp-4h]
  v14 = 0; /*0x65cced*/
  if ( !(*(unsigned __int8 (**)(RawFileClass *))(*(unsigned int *)this->FileClass + 24))(this) ) /*0x65ccf3*/
  {
    int result; // eax
    result = (*(int (**)(RawFileClass *, int))(*(unsigned int *)this->FileClass + 28))(this, 1); /*0x65cd00*/
    if ( !result ) /*0x65cd05*/
      return result; /*0x65cd05*/
    v14 = 1; /*0x65cd0f*/
  }
  if ( this->FileName == (void *)-1 ) /*0x65cd1e*/
  {
    v7 = (char *)aP2; /*0x65cd3b*/
  }
  else
  {
    int v6; // eax
    v6 = (*(int (**)(RawFileClass *, unsigned int, int))(*(unsigned int *)this->FileClass + 40))(this, 0, 1); /*0x65cd27*/
    v7 = (char *)aP2; /*0x65cd2d*/
    if ( aP2 >= (int)this->FileName - v6 ) /*0x65cd35*/
      v7 = (char *)this->FileName - v6; /*0x65cd37*/
  }
  while ( (int)v7 > 0 ) /*0x65cd41*/
  {
    void *v11; // [esp-1Ch] [ebp-2Ch]
    v11 = *(void **)this->FileTimeDateLo; /*0x65cd54*/
    NumberOfBytesRead = 0; /*0x65cd55*/
    if ( ReadFile(v11, aP1, (DWORD)v7, &NumberOfBytesRead, 0) ) /*0x65cd5d*/
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
      DWORD nNumberOfBytesToReada; // [esp+18h] [ebp+8h]
      nNumberOfBytesToReada = v4; /*0x65cd78*/
      if ( byte_B04BEC ) /*0x65cd7c*/
        break; /*0x65cd7c*/
      int v9; // ebx
      v9 = *(unsigned int *)this->FileClass; /*0x65cd81*/
      int v12; // [esp-Ch] [ebp-1Ch]
      v12 = *&this->u32_14; /*0x65cd83*/
      DWORD LastError; // eax
      LastError = GetLastError(); /*0x65cd86*/
      (*(void (**)(RawFileClass *, DWORD, int, int))(v9 + 64))(this, LastError, 1, v12); /*0x65cd8f*/
      v4 = nNumberOfBytesToReada; /*0x65cd92*/
    }
  }
  NumberOfBytesRead = v4; /*0x65cda7*/
  byte_B04BEC = 0; /*0x65cdb1*/
  if ( v14 ) /*0x65cdb9*/
    (*(void (**)(RawFileClass *))(*(unsigned int *)this->FileClass + 52))(this); /*0x65cdbf*/
  return NumberOfBytesRead; /*0x65cd07*/

}
} // namespace gamemd
// 0x65CF00
namespace gamemd {
int FileClass::Seek(LONG lDistanceToMove, DWORD dwMoveMethod)
{

  char *FileName; // ecx
  DWORD v5; // edi
  char *v6; // ebx
  LONG v7; // ebx
  DWORD v8; // eax
  int v9; // edi
  DWORD v10; // eax
  void *Handle; // edi
  int result; // eax
  DWORD v13; // eax
  int v14; // edi
  DWORD v15; // eax
  void *v16; // ecx
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

  FileName = (char *)this->FileName; /*0x65cf04*/
  if ( FileName != (char *)-1 ) /*0x65cf0a*/
  {
    v5 = dwMoveMethod; /*0x65cf10*/
    if ( dwMoveMethod ) /*0x65cf1b*/
    {
      if ( dwMoveMethod == 2 ) /*0x65cf20*/
      {
        v5 = 0; /*0x65cf2b*/
        v6 = &FileName[(unsigned int)this->Handle + lDistanceToMove]; /*0x65cf2d*/
      }
      else
      {
        v6 = (char *)lDistanceToMove; /*0x65cf40*/
      }
    }
    else
    {
      v7 = lDistanceToMove; /*0x65cf31*/
      if ( lDistanceToMove > (int)FileName ) /*0x65cf37*/
        v7 = (LONG)FileName; /*0x65cf39*/
      v6 = (char *)this->Handle + v7; /*0x65cf3b*/
    }
    if ( (*(unsigned __int8 (**)(RawFileClass *))(*(unsigned int *)this->FileClass + 24))(this) ) /*0x65cf48*/
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
      v8 = SetFilePointer(*(HANDLE *)this->FileTimeDateLo, (LONG)v6, 0, v5); /*0x65cf8b*/
      if ( v8 != -1 ) /*0x65cf90*/
      {
        LABEL_20:
        Handle = this->Handle; /*0x65cfa8*/
        result = v8 - (unsigned int)Handle; /*0x65cfab*/
        if ( result >= 0 ) /*0x65cfad*/
          goto LABEL_27; /*0x65cfad*/
        if ( (*(unsigned __int8 (**)(RawFileClass *))(*(unsigned int *)this->FileClass + 24))(this) ) /*0x65cfb3*/
        {
          v13 = SetFilePointer(*(HANDLE *)this->FileTimeDateLo, (LONG)Handle, 0, 0); /*0x65cfd4*/
          if ( v13 != -1 ) /*0x65cfd9*/
          {
            LABEL_26:
            Handle = this->Handle; /*0x65cff1*/
            result = v13 - (unsigned int)Handle; /*0x65cff4*/
            LABEL_27:
            v16 = this->FileName; /*0x65cff6*/
            if ( result > (int)v16 ) /*0x65cffb*/
            {
              v17 = (LONG)Handle + (unsigned int)v16; /*0x65cfff*/
              if ( (*(unsigned __int8 (**)(RawFileClass *))(*(unsigned int *)this->FileClass + 24))(this) ) /*0x65d003*/
              {
                v18 = SetFilePointer(*(HANDLE *)this->FileTimeDateLo, v17, 0, 0); /*0x65d030*/
                if ( v18 == -1 ) /*0x65d035*/
                {
                  v19 = *(unsigned int *)this->FileClass; /*0x65d03a*/
                  v26 = *&this->u32_14; /*0x65d03c*/
                  LastError = GetLastError(); /*0x65d03f*/
                  (*(void (**)(RawFileClass *, DWORD, unsigned int, int))(v19 + 64))(this, LastError, 0, v26); /*0x65d048*/
                  v18 = 0; /*0x65d04b*/
                }
                return v18 - (unsigned int)this->Handle; /*0x65d04d*/
              }
              else
              {
                (*(void (**)(RawFileClass *, int, unsigned int, unsigned int))(*(unsigned int *)this->FileClass + 64))( /*0x65d016*/
                  this,
                  9,
                  0,
                  *(unsigned int *)&this->FileNameAllocated);
                return -(int)this->Handle; /*0x65d021*/
              }
            }
            return result; /*0x65d024*/
          }
          v14 = *(unsigned int *)this->FileClass; /*0x65cfde*/
          v25 = *&this->u32_14; /*0x65cfe0*/
          v15 = GetLastError(); /*0x65cfe3*/
          (*(void (**)(RawFileClass *, DWORD, unsigned int, int))(v14 + 64))(this, v15, 0, v25); /*0x65cfec*/
        }
        else
        {
          (*(void (**)(RawFileClass *, int, unsigned int, unsigned int))(*(unsigned int *)this->FileClass + 64))( /*0x65cfc6*/
            this,
            9,
            0,
            *(unsigned int *)&this->FileNameAllocated);
        }
        v13 = 0; /*0x65cfef*/
        goto LABEL_26; /*0x65cfef*/
      }
      v9 = *(unsigned int *)this->FileClass; /*0x65cf95*/
      v24 = *&this->u32_14; /*0x65cf97*/
      v10 = GetLastError(); /*0x65cf9a*/
      (*(void (**)(RawFileClass *, DWORD, unsigned int, int))(v9 + 64))(this, v10, 0, v24); /*0x65cfa3*/
    }
    else
    {
      (*(void (**)(RawFileClass *, int, unsigned int, unsigned int))(*(unsigned int *)this->FileClass + 64))( /*0x65cf61*/
        this,
        9,
        0,
        *(unsigned int *)&this->FileNameAllocated);
    }
    v8 = 0; /*0x65cfa6*/
    goto LABEL_20; /*0x65cfa6*/
  }
  v21 = dwMoveMethod; /*0x65d059*/
  if ( (*(unsigned __int8 (**)(RawFileClass *))(*(unsigned int *)this->FileClass + 24))(this) ) /*0x65d05f*/
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
    result = SetFilePointer(*(HANDLE *)this->FileTimeDateLo, lDistanceToMove, 0, v21); /*0x65d0a5*/
    if ( result == -1 ) /*0x65d0ae*/
    {
      v22 = *(unsigned int *)this->FileClass; /*0x65d0b3*/
      v27 = *&this->u32_14; /*0x65d0b5*/
      v23 = GetLastError(); /*0x65d0b8*/
      (*(void (**)(RawFileClass *, DWORD, unsigned int, int))(v22 + 64))(this, v23, 0, v27); /*0x65d0c1*/
      return 0; /*0x65d0c4*/
    }
  }
  else
  {
    (*(void (**)(RawFileClass *, int, unsigned int, unsigned int))(*(unsigned int *)this->FileClass + 64))( /*0x65d072*/
      this,
      9,
      0,
      *(unsigned int *)&this->FileNameAllocated);
    return 0; /*0x65d076*/
  }
  return result; /*0x65d020*/

}
} // namespace gamemd
// 0x65D150
namespace gamemd {
int FileClass::Close(void *a1, void *a2)
{

  (*(void (**)(RawFileClass *))(*(unsigned int *)this->FileClass + 52))(this); /*0x65d155*/
  if ( !(*(int (**)(RawFileClass *, int))(*(unsigned int *)this->FileClass + 28))(this, 2) ) /*0x65d15e*/
    return 0; /*0x65d184*/
  if ( this->FileName != (void *)-1 ) /*0x65d169*/
    (*(void (**)(RawFileClass *, unsigned int, unsigned int))(*(unsigned int *)this->FileClass + 40))(this, 0, 0); /*0x65d173*/
  (*(void (**)(RawFileClass *))(*(unsigned int *)this->FileClass + 52))(this); /*0x65d17a*/
  return 1; /*0x65d182*/

}
} // namespace gamemd
// 0x401950
namespace gamemd {
unsigned int * FileClass::loc_401950()
{

  return (unsigned int *)(*&this->u32_18); /*0x401943*/

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
int FileClass::GetState(void *a1)
{

  return this->FilePointer; /*0x76f023*/

}
} // namespace gamemd
// 0x76F070
namespace gamemd {
int FileClass::SetState(void *a1, void *a2)
{
  return a1->FilePointer; /*0x76f073*/
}
} // namespace gamemd