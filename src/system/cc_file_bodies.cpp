// 自动生成 by tools/move_hpp_bodies.py — 函数体自 src/system/cc_file.hpp 迁出
// hpp-impl 门控: 头文件只允许声明（= default 析构亦移出）
#include "cc_file.hpp"

namespace gamemd {
MemoryBuffer::MemoryBuffer(int size) noexcept : MemoryBuffer(nullptr, size) {}

MemoryBuffer::MemoryBuffer(void* pBuffer, int size) noexcept : Buffer(pBuffer)
        , Size(size) {
        if (!Buffer && Size > 0)
        {
            Buffer = operator new(static_cast<std::size_t>(Size));
            Allocated = true;
        }
    }

MemoryBuffer::~MemoryBuffer() noexcept {
        if (Allocated)
        {
            operator delete(Buffer);
        }
    }

MemoryBuffer::MemoryBuffer(const MemoryBuffer& other) noexcept : Buffer(other.Buffer)
        , Size(other.Size) {}

MemoryBuffer::MemoryBuffer(MemoryBuffer&& other) noexcept : Buffer(other.Buffer)
        , Size(other.Size)
                                                                       
        , Allocated(other.Allocated) {
        other.Allocated = false;
    }

MemoryBuffer& MemoryBuffer::operator=(const MemoryBuffer& other) noexcept {
        if (this != &other)
        {
            MemoryBuffer tmp(std::move(*this));
            Buffer = other.Buffer;
            Size = other.Size;
            Allocated = false;
        }
        return *this;
    }

MemoryBuffer& MemoryBuffer::operator=(MemoryBuffer&& other) noexcept {
        MemoryBuffer tmp(std::move(*this));
        Buffer = other.Buffer;
        Size = other.Size;
        Allocated = other.Allocated;
        other.Allocated = false;
        return *this;
    }

void MemoryBuffer::Clear() noexcept {
        MemoryBuffer tmp(std::move(*this));
        Buffer = nullptr;
        Size = 0;
        Allocated = false;
    }

CCFileClass::CCFileClass(const noinit_t&) noexcept : CDFileClass(noinit_t()) {}
}

