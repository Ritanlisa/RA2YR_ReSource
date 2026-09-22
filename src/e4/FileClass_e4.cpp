// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x473AE0
int FileClass::Write(CCFileClass * aP1, DWORD nNumberOfBytesToWrite)
{
{

  if ( this->q058 ) /*0x473ae3*/
  {
    int v4 = *this; /*0x473aeb*/
    int v5 = this->vt_slot_4(); /*0x473aed*/
    this->vt_slot_64(13, 0, v5); /*0x473af7*/
  }
  return FileClass::BufferedWriter(this, aP1, nNumberOfBytesToWrite); /*0x473b0c*/
}
}

// 0x473FC0
int FileClass::SetFileName(IUnknown * aP1)
{
{
  this->q068 = 0; /*0x473fc4*/
  return FileClass::OpenWithCDSearch(this, aP1); /*0x473fd1*/
}
}

// 0x65CBF0
int FileClass::Open(int a2)
{
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
}

// 0x65CCE0
int FileClass::Read(BufferIOFileClass * aP1, AbstractClass * aP2)
{
{
  DWORD v4; // ebx
  DWORD result; // eax
  AbstractClass *v7; // edi
  DWORD LastError; // eax
  DWORD NumberOfBytesRead; // [esp+8h] [ebp-8h] BYREF
  DWORD nNumberOfBytesToRead; // [esp+18h] [ebp+8h]

  v4 = 0; /*0x65cce7*/
  NumberOfBytesRead = 0; /*0x65cce9*/
  int v14 = 0; /*0x65cced*/
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
    int v6 = this->vt_slot_40(0, 1); /*0x65cd27*/
    v7 = aP2; /*0x65cd2d*/
    if ( (int)aP2 >= this->q010 - v6 ) /*0x65cd35*/
      v7 = (AbstractClass *)(this->q010 - v6); /*0x65cd37*/
  }
  while ( (int)v7 > 0 ) /*0x65cd41*/
  {
    void * v11 = (void *)this->q014; /*0x65cd54*/
    NumberOfBytesRead = 0; /*0x65cd55*/
    if ( ReadFile(v11, aP1, (DWORD)v7, &NumberOfBytesRead, 0) ) /*0x65cd5d*/
    {
      aP1 = (BufferIOFileClass *)((char *)aP1 + NumberOfBytesRead); /*0x65cd98*/
      v7 = (AbstractClass *)((char *)v7 - NumberOfBytesRead); /*0x65cd9a*/
      v4 += NumberOfBytesRead; /*0x65cd9c*/
      if ( !NumberOfBytesRead ) /*0x65cda0*/
        break; /*0x65cda0*/
    }
    else
    {
      aP1 = (BufferIOFileClass *)((char *)aP1 + NumberOfBytesRead); /*0x65cd6b*/
      v7 = (AbstractClass *)((char *)v7 - NumberOfBytesRead); /*0x65cd6d*/
      v4 += NumberOfBytesRead; /*0x65cd6f*/
      nNumberOfBytesToRead = v4; /*0x65cd78*/
      if ( byte_B04BEC ) /*0x65cd7c*/
        break; /*0x65cd7c*/
      int v9 = *this; /*0x65cd81*/
      int v12 = this->q018; /*0x65cd83*/
      LastError = GetLastError(); /*0x65cd86*/
      this->vt_slot_64(LastError, 1, v12); /*0x65cd8f*/
      v4 = nNumberOfBytesToRead; /*0x65cd92*/
    }
  }
  NumberOfBytesRead = v4; /*0x65cda7*/
  byte_B04BEC = 0; /*0x65cdb1*/
  if ( v14 ) /*0x65cdb9*/
    this->vt_slot_52(); /*0x65cdbf*/
  return NumberOfBytesRead; /*0x65cd07*/
}
}

// 0x65CF00
int FileClass::Seek(LONG lDistanceToMove, DWORD dwMoveMethod)
{
{
  LONG v4; // ecx
  DWORD v5; // edi
  LONG v6; // ebx
  LONG v7; // ebx
  DWORD v8; // eax
  DWORD v10; // eax
  LONG v11; // edi
  int result; // eax
  DWORD v13; // eax
  DWORD v15; // eax
  LONG v17; // edi
  DWORD v18; // eax
  DWORD LastError; // eax
  DWORD v21; // edi
  DWORD v23; // eax
  v4 = this->q004; /*0x65cf04*/
  if ( v4 != -1 ) /*0x65cf0a*/
  {
    v5 = dwMoveMethod; /*0x65cf10*/
    if ( dwMoveMethod ) /*0x65cf1b*/
    {
      if ( dwMoveMethod == 2 ) /*0x65cf20*/
      {
        v5 = 0; /*0x65cf2b*/
        v6 = v4 + this->q00C + lDistanceToMove; /*0x65cf2d*/
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
      v6 = this->q00C + v7; /*0x65cf3b*/
    }
    if ( this->vt_slot_24() ) /*0x65cf48*/
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
      v8 = SetFilePointer((HANDLE)this->q014, v6, 0, v5); /*0x65cf8b*/
      if ( v8 != -1 ) /*0x65cf90*/
      {
LABEL_20:
        v11 = this->q00C; /*0x65cfa8*/
        result = v8 - v11; /*0x65cfab*/
        if ( result >= 0 ) /*0x65cfad*/
          goto LABEL_27; /*0x65cfad*/
        if ( this->vt_slot_24() ) /*0x65cfb3*/
        {
          v13 = SetFilePointer((HANDLE)this->q014, v11, 0, 0); /*0x65cfd4*/
          if ( v13 != -1 ) /*0x65cfd9*/
          {
LABEL_26:
            v11 = this->q00C; /*0x65cff1*/
            result = v13 - v11; /*0x65cff4*/
LABEL_27:
            int v16 = this->q004; /*0x65cff6*/
            if ( result > v16 ) /*0x65cffb*/
            {
              v17 = v16 + v11; /*0x65cfff*/
              if ( this->vt_slot_24() ) /*0x65d003*/
              {
                v18 = SetFilePointer((HANDLE)this->q014, v17, 0, 0); /*0x65d030*/
                if ( v18 == -1 ) /*0x65d035*/
                {
                  int v19 = *this; /*0x65d03a*/
                  int v26 = this->q018; /*0x65d03c*/
                  LastError = GetLastError(); /*0x65d03f*/
                  this->vt_slot_64(LastError, 0, v26); /*0x65d048*/
                  v18 = 0; /*0x65d04b*/
                }
                return v18 - this->q00C; /*0x65d04d*/
              }
              else
              {
                this->vt_slot_64(9, 0, this->q018); /*0x65d016*/
                return -this->q00C; /*0x65d021*/
              }
            }
            return result; /*0x65d024*/
          }
          int v14 = *this; /*0x65cfde*/
          int v25 = this->q018; /*0x65cfe0*/
          v15 = GetLastError(); /*0x65cfe3*/
          this->vt_slot_64(v15, 0, v25); /*0x65cfec*/
        }
        else
        {
          this->vt_slot_64(9, 0, this->q018); /*0x65cfc6*/
        }
        v13 = 0; /*0x65cfef*/
        goto LABEL_26; /*0x65cfef*/
      }
      int v9 = *this; /*0x65cf95*/
      int v24 = this->q018; /*0x65cf97*/
      v10 = GetLastError(); /*0x65cf9a*/
      this->vt_slot_64(v10, 0, v24); /*0x65cfa3*/
    }
    else
    {
      this->vt_slot_64(9, 0, this->q018); /*0x65cf61*/
    }
    v8 = 0; /*0x65cfa6*/
    goto LABEL_20; /*0x65cfa6*/
  }
  v21 = dwMoveMethod; /*0x65d059*/
  if ( this->vt_slot_24() ) /*0x65d05f*/
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
    result = SetFilePointer((HANDLE)this->q014, lDistanceToMove, 0, v21); /*0x65d0a5*/
    if ( result == -1 ) /*0x65d0ae*/
    {
      int v22 = *this; /*0x65d0b3*/
      int v27 = this->q018; /*0x65d0b5*/
      v23 = GetLastError(); /*0x65d0b8*/
      this->vt_slot_64(v23, 0, v27); /*0x65d0c1*/
      return 0; /*0x65d0c4*/
    }
  }
  else
  {
    this->vt_slot_64(9, 0, this->q018); /*0x65d072*/
    return 0; /*0x65d076*/
  }
  return result; /*0x65d020*/
}
}

// 0x65D150
int FileClass::Close()
{
{
  this->vt_slot_52(); /*0x65d155*/
  if ( !this->vt_slot_28(2) ) /*0x65d15e*/
    return 0; /*0x65d184*/
  if ( this->q010 != -1 ) /*0x65d169*/
    this->vt_slot_40(0, 0); /*0x65d173*/
  this->vt_slot_52(); /*0x65d17a*/
  return 1; /*0x65d182*/
}
}

// 0x401950
unsigned int * FileClass::loc_401950(char a2)
{
{
    *(void**)this = &DataGlobal_7E1668;
    BufferIOFileClass::Dtor(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// 0x65C5F0
int FileClass::StubReturnFalse()
{
return 0;
}

// 0x65C600
char FileClass::Stub(int a1)
{
return 0;
}

// 0x76F020
int FileClass::GetState()
{
{
    return this->FilePointer;
}
}

// 0x76F070
int FileClass::SetState()
{
{
    return this->FilePointer;
}
}
