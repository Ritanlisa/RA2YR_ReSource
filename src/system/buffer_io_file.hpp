#pragma once

#include "file_class.hpp"

namespace gamemd
{

class BufferIOFileClass : public RawFileClass
{
public:
    virtual ~BufferIOFileClass() override = default;  // 0x535A60

    BufferIOFileClass() = default;

protected:
    explicit BufferIOFileClass(const noinit_t&) noexcept : RawFileClass(noinit_t()) {}

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
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    void* Constructor();  // 0x431B20
    int Dtor();  // 0x431B80
    bool Read();  // 0x431F30
    bool Write();  // 0x431F50
    bool Open();  // 0x431F70
    int SeekInternal();  // 0x4324B0
    int SetSize();  // 0x4325A0
    void* QueryInterface(int a1);  // 0x432610
    void* Constructor_BitFont(int a1);  // 0x434A40
    void* Constructor_BitText(int a1);  // 0x435560
    int Seek();  // 0x473BA0
    // --- gap2 auto-generated stub declarations (END) ---
};

} // namespace gamemd
