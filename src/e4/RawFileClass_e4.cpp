// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x65CA00
void RawFileClass::Dtor()
{
{
    int v2;
    DWORD LastError;
    int v4;
    *(void**)this = (int)&vt_RawFileClass;
    if ( (unsigned char)RawFileClass::Write() )
  {
    if ( !CloseHandle((HANDLE)this->FileTimeDateLo) )
    {
    v2 = *(void**)this;
    v4 = this->FileNameAllocated;
    LastError = GetLastError();
    (*(void (__thiscall **)(int *, DWORD, int, int))(v2 + 64))(this, LastError, 0, v4);
    }
    this->FileTimeDateLo = -1;
  }
    if ( this->CacheReadAhead && this->FileNameAllocated )
  {
    free((void *)this->FileNameAllocated);
    this->FileNameAllocated = 0;
    this->CacheReadAhead = 0;
  }
    *(void**)this = (int)&vt_FileClass;
}
}

// 0x65CB30
int RawFileClass::Close(int a2, int a3)
{
{
    this->SetName(a2);
    return this->Open2(a3);
}
}
