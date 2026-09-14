// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x65CA00
void RawFileClass::Dtor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall RawFileClass_Dtor(int *this)
{
  int v2; // edi
  DWORD LastError; // eax
  int v4; // [esp-8h] [ebp-Ch]

  *this = (int)&vt_RawFileClass; /*0x65ca03*/
  if ( (unsigned __int8)RawFileClass::Write() ) /*0x65ca09*/
  {
    if ( !CloseHandle((HANDLE)*(this + 5)) ) /*0x65ca17*/
    {
      v2 = *this; /*0x65ca25*/
      v4 = *(this + 6); /*0x65ca27*/
      LastError = GetLastError(); /*0x65ca29*/
      (*(void (__thiscall **)(int *, DWORD, _DWORD, int))(v2 + 64))(this, LastError, 0, v4); /*0x65ca32*/
    }
    *(this + 5) = -1; /*0x65ca36*/
  }
  if ( *((_BYTE *)this + 32) && *(this + 6) ) /*0x65ca44*/
  {
    free((void *)*(this + 6)); /*0x65ca4c*/
    *(this + 6) = 0; /*0x65ca54*/
    *((_BYTE *)this + 32) = 0; /*0x65ca5b*/
  }
  *this = (int)&vt_FileClass; /*0x65ca5f*/
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
