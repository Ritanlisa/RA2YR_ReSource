#pragma once

#include "cd_file.hpp"

#include <utility>

namespace gamemd
{

class MemoryBuffer
{
public:
    constexpr MemoryBuffer() noexcept = default;

    explicit MemoryBuffer(int size) noexcept
        : MemoryBuffer(nullptr, size)
    {}

    MemoryBuffer(void* pBuffer, int size) noexcept
        : Buffer(pBuffer)
        , Size(size)
    {
        if (!Buffer && Size > 0)
        {
            Buffer = operator new(static_cast<std::size_t>(Size));
            Allocated = true;
        }
    }

    ~MemoryBuffer() noexcept
    {
        if (Allocated)
        {
            operator delete(Buffer);
        }
    }

    MemoryBuffer(const MemoryBuffer& other) noexcept
        : Buffer(other.Buffer)
        , Size(other.Size)
    {}

    MemoryBuffer(MemoryBuffer&& other) noexcept
        : Buffer(other.Buffer)
        , Size(other.Size)
        , Allocated(other.Allocated)
    {
        other.Allocated = false;
    }

    MemoryBuffer& operator=(const MemoryBuffer& other) noexcept
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

    MemoryBuffer& operator=(MemoryBuffer&& other) noexcept
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
    virtual ~CCFileClass() override = default;

    explicit CCFileClass(const char* pFileName) noexcept;

    bool  Open(const char* pFileName);
    void* ReadEntireFile();
    void  Reset();

protected:
    explicit CCFileClass(const noinit_t&) noexcept : CDFileClass(noinit_t()) {}

public:
    MemoryBuffer Buffer;
    uint32_t FileID = 0;
    uint32_t MixFileIndex = 0;
};

} // namespace gamemd
