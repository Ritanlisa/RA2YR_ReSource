#pragma once

#include "file_class.hpp"

namespace gamemd
{

class BufferIOFileClass : public RawFileClass
{
public:
    virtual ~BufferIOFileClass() override;  // 0x535A60

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
    void* FileID;  // 0x0 (no offset truth)
    void* MixFileIndex;  // 0x0 (no offset truth)
    uint32_t FileClass;  // 0x0 (no offset truth)  G42.34 T11: QueryInterface body 0x432610 installs vftable via this->FileClass and returns &this->FileClass (IDA til member view; name shadows type FileClass -- member wins in member-access contexts)
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    void* Constructor();  // 0x431B20
    int Dtor();  // 0x431B80
    static int Dtor(void *aP0);  // 0x431B80 G42.35 static-form sync (ui/supplied sites 0x5D3062/0x5D30A9)
    bool Read();  // 0x431F30
    BOOL Write(int a2, const CHAR *a3);
    int Open(const CHAR *a2);
    int SeekInternal();  // 0x4324B0
    int SetSize();  // 0x4325A0
    unsigned int * QueryInterface(char a1);  // 0x432610
    void *** Constructor_BitFont(char a1);  // 0x434A40
    unsigned int * Constructor_BitText(char a1);  // 0x435560
    int Seek();  // 0x473BA0
    // --- gap2 auto-generated stub declarations (END) ---
};

} // namespace gamemd
