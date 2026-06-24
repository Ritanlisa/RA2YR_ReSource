#pragma once

#include "cd_file.hpp"

#include <utility>

namespace gamemd
{

class MemoryBuffer
{
public:
    // design: default constructor (compiler-generated), no callgraph reference
    constexpr MemoryBuffer() noexcept = default;

    explicit MemoryBuffer(int size) noexcept
        // unmatched: no callgraph reference and no git history record
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

    // unmatched: no callgraph reference and no git history record
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
        // unmatched: no callgraph reference and no git history record
        , Allocated(other.Allocated)
    {
        other.Allocated = false;
    }

    // unmatched: no callgraph reference and no git history record
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

    // unmatched: no callgraph reference and no git history record
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
    virtual ~CCFileClass() override = default;  // 0x535A70

    // wrapper: delegates to CCFileClass::Destruct at 0x535A70
    explicit CCFileClass(const char* pFileName) noexcept;

    bool  Open(const char* pFileName);  // 0x473C50
    void* ReadEntireFile();  // 0x4A3890
    void  Reset();  // 0x473CE0

protected:
    explicit CCFileClass(const noinit_t&) noexcept : CDFileClass(noinit_t()) {}

public:
    MemoryBuffer Buffer;
    uint32_t FileID = 0;
    uint32_t MixFileIndex = 0;
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int Destru_vt08(int a1, int a2);  // 0x401980
    void* Destru_vt00(int a1);  // 0x4019A0
    void Create();  // 0x4309D0
    int SetName(void* a1);  // 0x431E80
    void* Construct(void* a1);  // 0x4739F0
    void* Construct2(void* a1);  // 0x473A30
    int Construct3();  // 0x473A80
    int Destru_vt16(int a1, int a2, int a3);  // 0x473AB0
    int Read();  // 0x473B10
    int GetSize();  // 0x473C00
    bool Destru_vt06();  // 0x473CD0
    int Destru_vt14();  // 0x473E50
    int Destru_vt15(int a1);  // 0x473F00
    int Reopen(void* a1, int a2);  // 0x47AF10
    int Load();  // 0x595BC0
    void WriteINIString();  // 0x5D8FD0
    int Cleanup();  // 0x759510
    // --- gap2 auto-generated stub declarations (END) ---
};

} // namespace gamemd
