#pragma once

#include "cd_file.hpp"

#include <utility>

namespace gamemd
{

class MemoryBuffer
{
public:
    constexpr MemoryBuffer() noexcept = default; // IDA: UNMATCHED — defaulted_special_member, default_ctor, no_callgraph_match

    explicit MemoryBuffer(int size) noexcept
        : MemoryBuffer(nullptr, size) // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {}

    MemoryBuffer(void* pBuffer, int size) noexcept
        : Buffer(pBuffer)
        , Size(size) // 0x454190
    {
        if (!Buffer && Size > 0)
        {
            Buffer = operator new(static_cast<std::size_t>(Size));
            Allocated = true;
        }
    }

    ~MemoryBuffer() noexcept // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        if (Allocated)
        {
            operator delete(Buffer);
        }
    }

    MemoryBuffer(const MemoryBuffer& other) noexcept
        : Buffer(other.Buffer)
        , Size(other.Size) // 0x454190
    {}

    MemoryBuffer(MemoryBuffer&& other) noexcept
        : Buffer(other.Buffer)
        , Size(other.Size)
        , Allocated(other.Allocated) // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        other.Allocated = false;
    }

    MemoryBuffer& operator=(const MemoryBuffer& other) noexcept // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        if (this != &other)
        {
            MemoryBuffer tmp(std::move(*this));
            Buffer = other.Buffer;
            Size = other.Size;
            Allocated = false;
        }
        return *this;
    }

    MemoryBuffer& operator=(MemoryBuffer&& other) noexcept // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        MemoryBuffer tmp(std::move(*this));
        Buffer = other.Buffer;
        Size = other.Size;
        Allocated = other.Allocated;
        other.Allocated = false;
        return *this;
    }

    void Clear() noexcept
    {
        MemoryBuffer tmp(std::move(*this));
        Buffer = nullptr;
        Size = 0;
        Allocated = false;
    }

    void* Buffer = nullptr;
    int Size = 0;
    bool Allocated = false;
};

class CCFileClass : public CDFileClass
{
public:
    virtual ~CCFileClass() override = default;  // 0x535A70

    explicit CCFileClass(const char* pFileName) noexcept; // IDA: NOT_FOUND

    bool  Open(const char* pFileName);  // 0x473C50
    void* ReadEntireFile();  // 0x4A3890
    void  Reset();  // 0x473CE0

protected:
    explicit CCFileClass(const noinit_t&) noexcept : CDFileClass(noinit_t()) {}

public:
    MemoryBuffer Buffer;
    uint32_t FileID = 0;
    uint32_t MixFileIndex = 0;
};

} // namespace gamemd
