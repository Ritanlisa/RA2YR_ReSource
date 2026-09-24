// CCFileClass -- IDA-based class for file access (MIX pool search + disk fallback)
#include "system/cc_file.hpp"
#include "system/mix_file.hpp"
#include "system/file_system.hpp"
#include "core/logging.hpp"

#include <cstring>
#include "core/reverse_marker.hpp"

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
int CCFileClass::Open(const char* pFileName)
{
  if ( *(this + 26) == 1 ) /*0x473c5c*/
    return 1; /*0x473c5e*/
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 24))(this) ) /*0x473c69*/
  {
    *(this + 26) = 1; /*0x473c70*/
    return 1; /*0x473c73*/
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *))(*this + 4))(this); /*0x473c84*/
    if ( (unsigned __int8)LookupFileInfoCache(0, 0, 0) ) /*0x473c8b*/
    {
      *(this + 26) = 1; /*0x473c94*/
      return 1; /*0x473c97*/
    }
    else if ( (unsigned __int8)File::IsReady(0) ) /*0x473ca2*/
    {
      *(this + 26) = 1; /*0x473cab*/
      return 1; /*0x473cae*/
    }
    else
    {
      *(this + 26) = 2; /*0x473cb5*/
      return 0; /*0x473cbd*/
    }
  }
}
// 0x4a3890
void* CCFileClass::ReadEntireFile()
{
  void *v2; // edi
  size_t v3; // ebx

  v2 = 0; /*0x4a3895*/
  if ( (*(unsigned __int8 (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 20))(this, 0) ) /*0x4a389a*/
  {
    v3 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 44))(this); /*0x4a38a8*/
    v2 = __2_YAPAXI_Z(v3); /*0x4a38b0*/
    if ( v2 ) /*0x4a38b7*/
      (*(void (__thiscall **)(void *, void *, size_t))(*(_DWORD *)this + 36))(this, v2, v3); /*0x4a38bf*/
  }
  return v2; /*0x4a38c4*/
}
REVERSE(0x473ce0, "CCFileClass::Reset: IDA verified", "None")
// IDA 0x473CE0 -- CCFileClass::Reset
// 0x473ce0
int CCFileClass::Reset()
{
  _DWORD *v2; // ecx

  v2 = this + 22; /*0x473ce3*/
  if ( v2 ) /*0x473ce8*/
    Buffer::Init(v2, 0, 0); /*0x473cee*/
  *(this + 25) = 0; /*0x473cf5*/
  return CCFileClass::Close(this); /*0x473d01*/
}