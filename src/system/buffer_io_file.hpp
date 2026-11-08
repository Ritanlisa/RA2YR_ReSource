#pragma once

#include "file_class.hpp"

namespace gamemd
{

#ifndef GAMEMD_G2_BufferIOFileClass_DEF  // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_BufferIOFileClass_DEF 1
class BufferIOFileClass : public RawFileClass
{
public:
    virtual ~BufferIOFileClass();  // 0x535A60

    BufferIOFileClass() = default;

protected:
    explicit BufferIOFileClass(const noinit_t&) noexcept;

public:
    bool BufferAvailable = false;
    bool BufferDirty = false;
    bool BufferReadPending = false;
    bool BufferWritePending = false;
    bool FlushOnClose = false;
    bool CacheReadAhead = false;
    uint32_t BufferOffset = 0;
    uint32_t BufferSize = 0;
    uint32_t BufferPosition = 0;
    uint32_t FileBaseOffset = 0;
    uint32_t BufferReadSize = 0;
    uint32_t StreamSize = 0;
    int BufferMaxSize = 0;
    int BufferCursor = 0;
    uint32_t TotalBytesRead = 0;
    uint32_t TotalBytesWritten = 0;
    uint32_t FileID;  // 0x0 (no offset truth; g57w20l3 raw SeekInternal arithmetic form)
    uint32_t MixFileIndex;  // 0x0 (no offset truth; g57w20l3 raw SeekInternal arithmetic form)
    uint32_t FileClass;  // 0x0 (no offset truth)  G42.34 T11: QueryInterface body 0x432610 installs vftable via this->FileClass and returns &this->FileClass (IDA til member view; name shadows type FileClass -- member wins in member-access contexts)
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    void* Constructor();  // 0x431B20
    int Dtor();  // 0x431B80 thiscall (x181c: static-form overload removed; real member)
    bool Read();  // 0x431F30
    static char Close(void *a1 = 0, void *a2 = 0);  // 0x4325C0 (L4 正名: was CCFileClass::Close; slot 13, BufferIO 层定义 CD 继承)
    static int SetName(void *aP0, char *a1);  // 0x431E80 (L4 正名: was CCFileClass::SetName; slot 2 唯一覆盖者)
    int SetName(char *Source);  // 0x431E80 member form
    BOOL Write(int a2, const CHAR *a3);
    int Open(const CHAR *a2);
    int SeekInternal(LONG lDistanceToMove, DWORD dwMoveMethod);  // 0x4324B0
    int SetSize();  // 0x4325A0
    unsigned int * QueryInterface(char a1);  // 0x432610
    void *** Constructor_BitFont(char a1);  // 0x434A40
    unsigned int * Constructor_BitText(char a1);  // 0x435560
    int Seek();  // 0x473BA0
    // --- gap2 auto-generated stub declarations (END) ---

    void * FileName;  // X10 supply (csp_canon_members)
    char FileNameAllocated;  // X10 supply (csp_canon_members)
    int FilePointer;  // X10 supply (csp_canon_members)
    int FileSize;  // X10 supply (csp_canon_members)
    unsigned int FileTimeDateHi;  // X10 supply (csp_canon_members)
    void* FileTimeDateLo;  // X10 supply (csp_canon_members)
    void * Handle;  // X10 supply (csp_canon_members)
    void* q064;  // X10 supply (member_lookup)
    unsigned int tail_19;  // X10 supply (csp_canon_members)
    unsigned int u32_25;  // X10 supply (member_lookup)
    unsigned int u32_29;  // X10 supply (member_lookup)
    unsigned int u32_5C;  // X10 supply (member_types)
    void* ptr_0;  // X10 supply (csp_canon_members)
};
#endif  // GAMEMD_G2_BufferIOFileClass_DEF

} // namespace gamemd
