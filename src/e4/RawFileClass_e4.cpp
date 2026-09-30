// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/RawFileClass_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x65CA00
namespace gamemd {
int RawFileClass::Dtor()
{
    unsigned int v3 = 0;  /* G37 hoist */
  int result; // eax
  FileClass v3; // edi
  DWORD LastError; // eax
  int v5; // [esp-8h] [ebp-Ch]

  this->FileClass = (FileClass)(void*)&RawFileClass_vftable; /*0x65ca03*/
  result = RawFileClass::Write(this); /*0x65ca09*/
  if ( (unsigned char)result ) /*0x65ca11*/
  {
        if ( !CloseHandle((HANDLE)*((unsigned int *)this + 20)) )
    if ( !result ) /*0x65ca1f*/
    {
      v3 = this->FileClass; /*0x65ca25*/
            v4 = *((unsigned int *)this + 24);
      LastError = GetLastError(); /*0x65ca29*/
      result = (*(int (**)(BufferIOFileClass *, DWORD, unsigned int, int))(*(unsigned int *)&v3 + 64))( /*0x65ca32*/
                 this,
                 LastError,
                 0,
                 v5);
    }
        *((unsigned int *)this + 20) = -1;
  }
  IDA_LOBYTE(result) = this-((unsigned int *)(>CacheReadAhead))[0]; /*0x65ca3d*/
  if ( (unsigned char)result ) /*0x65ca42*/
  {
      if ( *((unsigned char *)this + 32) && *((unsigned int *)this + 24) )
    if ( result ) /*0x65ca49*/
    {
      result = (int)(free(*(void **)this->FileNameAllocated));
          *((unsigned int *)this + 24) = 0;
      this-((unsigned int *)(>CacheReadAhead))[0] = 0; /*0x65ca5b*/
    }
  }
  this->FileClass = (FileClass)(void*)&FileClass_vftable; /*0x65ca5f*/
  return result; /*0x65ca65*/
}
} // namespace gamemd
// 0x65CB30
namespace gamemd {
int RawFileClass::Close(int a2, int a3)
{
    (*(void (**)(void *, int))(*(unsigned int *)this + 8))(this, a2);
    return (*(int (**)(void *, int))(*(unsigned int *)this + 28))(this, a3);
}
} // namespace gamemd