// CCFileClass -- IDA-based class for file access (MIX pool search + disk fallback)
#include "system/cc_file.hpp"
#include "e4/classes/Buffer_e4.hpp"
#include "system/mix_file.hpp"
#include "system/file_system.hpp"
#include "core/logging.hpp"

#include <cstring>
#include "core/reverse_marker.hpp"
#include "e4/classes/File_e4.hpp"
// [w14e3] fn vocab supply (g57b5-W5 variadic convention); evidence: raw_decomp entries
namespace gamemd {
    int LookupFileInfoCache(const char* p0, int* p1, int* p2, int* p3, int* p4);  // x4:signals@0x5b4430
} // namespace gamemd

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

  if ( this->u32_68 == 1 ) /*0x473c5c*/
  {
    (*((unsigned char *)&(result))) = 1; /*0x473c5e*/
  }
  else
  {
    result = this->Destru_vt06(); /*0x473c69*/
    if ( (unsigned char)result ) /*0x473c6e*/
    {
      this->u32_68 = 1; /*0x473c70*/
      (*((unsigned char *)&(result))) = 1; /*0x473c73*/
    }
    else
    {
      v4 = (const char *)this->GetMember06(); /*0x473c84*/
      if ( LookupFileInfoCache(v4, 0, 0, 0, 0) ) /*0x473c8b*/
      {
        this->u32_68 = 1; /*0x473c94*/
        (*((unsigned char *)&(result))) = 1; /*0x473c97*/
      }
      else
      {
        result = File::IsReady((BufferIOFileClass *)this, 0); /*0x473ca2*/
        if ( (unsigned char)result ) /*0x473ca9*/
        {
          this->u32_68 = 1; /*0x473cab*/
          (*((unsigned char *)&(result))) = 1; /*0x473cae*/
        }
        else
        {
          this->u32_68 = 2; /*0x473cb5*/
          (*((unsigned char *)&(result))) = 0; /*0x473cbd*/
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
  if ( this->Open(0) ) /*0x4a389a*/
  {
    v3 = this->GetSize(); /*0x4a38a8*/
    v2 = (void *)operator new(v3); /*0x4a38b0*/
    if ( v2 ) /*0x4a38b7*/
      this->Read(v2, v3); /*0x4a38bf*/
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

  v2 = (unsigned char)((Buffer *)((char *)&this->CacheReadAhead8));
  if ( v2 ) /*0x473ce8*/
    Buffer::Init(v2, 0, 0); /*0x473cee*/
  this->tail_19 = 0; /*0x473cf5*/
  (*((unsigned char *)&(result))) = CCFileClass::Close(this); /*0x473cfc*/
  return result; /*0x473d01*/
}