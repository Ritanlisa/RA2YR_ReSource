#pragma once

#include "file_class.hpp"

namespace gamemd
{

class BufferIOFileClass : public RawFileClass
{
public:
    virtual ~BufferIOFileClass() override = default;

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
};

} // namespace gamemd
