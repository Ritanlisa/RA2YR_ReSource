// CCFileClass -- IDA-based class for file access (MIX pool search + disk fallback)
#include "system/cc_file.hpp"
#include "e4/classes/Buffer_e4.hpp"
#include "system/mix_file.hpp"
#include "system/file_system.hpp"
#include "core/logging.hpp"

#include <cstring>
#include "core/reverse_marker.hpp"
#include "e4/classes/File_e4.hpp"

namespace gamemd
{

CCFileClass::CCFileClass(const char* pFileName) noexcept
    : CDFileClass(noinit_t())
{
    std::memset(&Buffer, 0, sizeof(Buffer));
    FileID       = 0;
    MixFileIndex = 0;

    // Store filename for later Open
    (void)pFileName; // filename stored by SetFileName or opened explicitly
}

// IDA 0x473C50 -- CCFileClass::Open
// Searches MIX pool first, then falls back to disk
REVERSE(0x473c50, "CCFileClass::Open: IDA verified", "None")
// 0x473c50
int CCFileClass::Open(int a2)
{
    int result; // eax
    const char *v4; // eax

    if ( *((unsigned int *)this + 26) == 1 ) /*0x473c5c*/
    {
      IDA_LOBYTE(result) = 1; /*0x473c5e*/
    }
    else
    {
      result = (*(int (__thiscall **)(CCFileClass *))(*(unsigned int *)this->CDFileClass + 24))(this); /*0x473c69*/
      if ( (unsigned char)result ) /*0x473c6e*/
      {
        *((unsigned int *)this + 26) = 1; /*0x473c70*/
        IDA_LOBYTE(result) = 1; /*0x473c73*/
      }
      else
      {
        v4 = (const char *)(*(int (__thiscall **)(CCFileClass *))(*(unsigned int *)this->CDFileClass + 4))(this); /*0x473c84*/
        if ( LookupFileInfoCache(v4, 0, 0, 0, 0) ) /*0x473c8b*/
        {
          *((unsigned int *)this + 26) = 1; /*0x473c94*/
          IDA_LOBYTE(result) = 1; /*0x473c97*/
        }
        else
        {
          result = File::IsReady((BufferIOFileClass *)this, 0); /*0x473ca2*/
          if ( (unsigned char)result ) /*0x473ca9*/
          {
            *((unsigned int *)this + 26) = 1; /*0x473cab*/
            IDA_LOBYTE(result) = 1; /*0x473cae*/
          }
          else
          {
            *((unsigned int *)this + 26) = 2; /*0x473cb5*/
            IDA_LOBYTE(result) = 0; /*0x473cbd*/
          }
        }
      }
    }
    return result; /*0x473c60*/
}
// 0x4a3890
void* CCFileClass::ReadEntireFile()
{
    void *v2; // edi
    size_t v3; // ebx

    v2 = 0; /*0x4a3895*/
    if ( (*(unsigned __int8 (__thiscall **)(CCFileClass *, unsigned int))(*(unsigned int *)this->CDFileClass + 20))(this, 0) ) /*0x4a389a*/
    {
      v3 = (*(int (__thiscall **)(CCFileClass *))(*(unsigned int *)this->CDFileClass + 44))(this); /*0x4a38a8*/
      v2 = (void *)RA2_OPNEW(v3); /*0x4a38b0*/
      if ( v2 ) /*0x4a38b7*/
        (*(void (__thiscall **)(CCFileClass *, void *, size_t))(*(unsigned int *)this->CDFileClass + 36))(this, v2, v3); /*0x4a38bf*/
    }
    return v2; /*0x4a38c4*/
}
REVERSE(0x473ce0, "CCFileClass::Reset: IDA verified", "None")
// IDA 0x473CE0 -- CCFileClass::Reset
// 0x473ce0
int CCFileClass::Reset()
{
    Buffer *v2; // ecx
    int result; // eax

    v2 = (Buffer *)((char *)this + 88); /*0x473ce3*/
    if ( v2 ) /*0x473ce8*/
      Buffer::Init(v2, 0, 0); /*0x473cee*/
    *((unsigned int *)this + 25) = 0; /*0x473cf5*/
    IDA_LOBYTE(result) = CCFileClass::Close(this); /*0x473cfc*/
    return result; /*0x473d01*/
}  // L-fix: close namespace tail 1