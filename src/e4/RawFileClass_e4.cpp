// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/RawFileClass_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/e4_protos.h"

// 0x65CA00
namespace gamemd {
void RawFileClass::Dtor()
{
  int v2; // edi
  DWORD LastError; // eax
  int v4; // [esp-8h] [ebp-Ch]

  *this = (int)&(void*)(void*)&RawFileClass_vftable; /*0x65ca03*/
  if ( (unsigned __int8)RawFileClass::Write() ) /*0x65ca09*/
  {
    if ( !CloseHandle((HANDLE)this->FileTimeDateLo) ) /*0x65ca17*/
    {
      v2 = *this; /*0x65ca25*/
      v4 = this->FileNameAllocated; /*0x65ca27*/
      LastError = GetLastError(); /*0x65ca29*/
      this->StubReturnFalse(LastError, 0, v4); /*0x65ca32*/
    }
    this->FileTimeDateLo = -1; /*0x65ca36*/
  }
  if ( this->q020 && this->FileNameAllocated ) /*0x65ca44*/
  {
    free((void *)this->FileNameAllocated); /*0x65ca4c*/
    this->FileNameAllocated = 0; /*0x65ca54*/
    this->q020 = 0; /*0x65ca5b*/
  }
  *this = (int)&(void*)(void*)&FileClass_vftable; /*0x65ca5f*/
}
} // namespace gamemd
// 0x65CB30
namespace gamemd {
int RawFileClass::Close(int a2, int a3)
{
  (*(void (__thiscall **)(void *, int))(this->FileSize)(this, a2); /*0x65cb3c*/
  return (a3); /*0x65cb4b*/
}
} // namespace gamemd