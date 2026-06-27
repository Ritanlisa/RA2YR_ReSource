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
bool CCFileClass::Open(const char* pFileName)
{
// [IDA decompile]
char __thiscall sub_473C50(_DWORD *this, int a2)
{
  if ( *(this + 26) == 1 )
    return 1;
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 24))(this) )
  {
    *(this + 26) = 1;
    return 1;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *))(*this + 4))(this);
    if ( (unsigned __int8)LookupFileInfoCache(0, 0, 0) )
    {
      *(this + 26) = 1;
      return 1;
    }
    else if ( (unsigned __int8)File::IsReady(0) )
    {
      *(this + 26) = 1;
      return 1;
    }
    else
    {
      *(this + 26) = 2;
      return 0;
    }
  }
}

/* ASM:
push    ebx
push    esi
mov     esi, ecx
mov     ebx, 1
cmp     [esi+68h], ebx
jnz     short loc_473C65
mov     al, bl
pop     esi
pop     ebx
retn    4
; ---------------------------------------------------------------------------

loc_473C65:                             ; CODE XREF: CCFileClass__Open+C↑j
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+18h]
test    al, al
jz      short loc_473C7A
mov     [esi+68h], ebx
mov     al, bl
pop     esi
pop     ebx
retn    4
; ---------------------------------------------------------------------------

loc_473C7A:                             ; CODE XREF: CCFileClass__Open+1E↑j
mov     edx, [esi]
push    0
push    0
push    0
mov     ecx, esi
call    dword ptr [edx+4]
mov     ecx, eax
xor     edx, edx
call    LookupFileInfoCache
test    al, al
jz      short loc_473C9E
mov     [esi+68h], ebx
mov     al, bl
pop     esi
pop     ebx
retn    4
; ---------------------------------------------------------------------------

loc_473C9E:                             ; CODE XREF: CCFileClass__Open+42↑j
push    0
mov     ecx, esi
call    File__IsReady
test    al, al
jz      short loc_473CB5
mov     [esi+68h], ebx
mov     al, bl
pop     esi
pop     ebx
retn    4
; ---------------------------------------------------------------------------

loc_473CB5:                             ; CODE XREF: CCFileClass__Open+59↑j
mov     dword ptr [esi+68h], 2
pop     esi
xor     al, al
pop     ebx
retn    4
*/
}

REVERSE(0x4a3890, "CCFileClass::ReadEntireFile: IDA verified", "None")
// IDA 0x4A3890 -- CCFileClass::ReadEntireFile
// 0x4a3890
void* CCFileClass::ReadEntireFile()
{
    if (Buffer.Buffer && Buffer.Size > 0)
        return Buffer.Buffer;

    // If not loaded, try to open the stored filename
    // (filename is stored in the base class's FileName field)
    return FileSystem::LoadFile(FileName, false);
}

REVERSE(0x473ce0, "CCFileClass::Reset: IDA verified", "None")
// IDA 0x473CE0 -- CCFileClass::Reset
// 0x473ce0
void CCFileClass::Reset()
{
// [IDA decompile]
int __thiscall CCFileClass_Reset(_DWORD *this)
{
  _DWORD *v2; // ecx

  v2 = this + 22;
  if ( v2 )
    Buffer::Init(v2, 0, 0);
  *(this + 25) = 0;
  return CCFileClass::Close(this);
}

/* ASM:
push    esi
mov     esi, ecx
lea     ecx, [esi+58h]
test    ecx, ecx
jz      short loc_473CF3
push    0               ; Size
push    0               ; int
call    Buffer__Init

loc_473CF3:                             ; CODE XREF: CCFileClass__Reset+8↑j
mov     ecx, esi
mov     dword ptr [esi+64h], 0
call    CCFileClass__Close
pop     esi
retn
*/
}

} // namespace gamemd
