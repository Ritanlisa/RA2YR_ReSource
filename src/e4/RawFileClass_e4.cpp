// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/RawFileClass_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x65CA00
namespace gamemd {  // G42.18 ns repair
int RawFileClass::Dtor()
{

  int result; // eax
  FileClass v3; // edi
  DWORD LastError; // eax
  int v5; // [esp-8h] [ebp-Ch]

  this->FileClass = (FileClass)&RawFileClass::`vftable'; /*0x65ca03*/
  result = RawFileClass::Write(this); /*0x65ca09*/
  if ( (unsigned char)result ) /*0x65ca11*/
  {
    result = CloseHandle(*(HANDLE *)this->FileTimeDateLo); /*0x65ca17*/
    if ( !result ) /*0x65ca1f*/
    {
      v3 = this->FileClass; /*0x65ca25*/
      v5 = *(unsigned int *)this->FileNameAllocated; /*0x65ca27*/
      LastError = GetLastError(); /*0x65ca29*/
      result = (*(int (**)(BufferIOFileClass *, DWORD, unsigned int, int))(*(unsigned int *)&v3 + 64))( /*0x65ca32*/
                 this,
                 LastError,
                 0,
                 v5);
    }
    *(unsigned int *)this->FileTimeDateLo = -1; /*0x65ca36*/
  }
  LOBYTE(result) = this->CacheReadAhead[0]; /*0x65ca3d*/
  if ( (unsigned char)result ) /*0x65ca42*/
  {
    result = *(unsigned int *)this->FileNameAllocated; /*0x65ca44*/
    if ( result ) /*0x65ca49*/
    {
      result = free(*(void **)this->FileNameAllocated); /*0x65ca4c*/
      *(unsigned int *)this->FileNameAllocated = 0; /*0x65ca54*/
      this->CacheReadAhead[0] = 0; /*0x65ca5b*/
    }
  }
  this->FileClass = (FileClass)&FileClass::`vftable'; /*0x65ca5f*/
  return result; /*0x65ca65*/

}
} // namespace gamemd
// 0x65CB30
namespace gamemd {
int RawFileClass::Close(int a2, int a3)
{
  (*(void (**)(RawFileClass *, int))(*(unsigned int *)this->__tail_0 + 8))(this, a2); /*0x65cb3c*/
  return (*(int (**)(RawFileClass *, int))(*(unsigned int *)this->__tail_0 + 28))(this, a3); /*0x65cb4b*/
}
} // namespace gamemd