// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct BufferIOFileClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    int FilePointer;  // 0x4
    int FileSize;  // 0x8
    void * Handle;  // 0xC
    void * FileName;  // 0x10
    void* FileTimeDateLo;  // 0x14
    unsigned int FileTimeDateHi;  // 0x16
    char FileNameAllocated;  // 0x18
    unsigned char tail_19;  // 0x19
    bool BufferDirty;  // 0x1C
    bool BufferReadPending;  // 0x1D
    bool BufferWritePending;  // 0x1E
    bool FlushOnClose;  // 0x1F
    bool CacheReadAhead;  // 0x20
    unsigned char q021;  // 0x21
    unsigned int BufferOffset;  // 0x24
    unsigned int u32_25;  // 0x25
    unsigned int q026;  // 0x26
    unsigned int q027;  // 0x27
    unsigned int BufferSize;  // 0x28
    unsigned int u32_29;  // 0x29
    unsigned int BufferPosition;  // 0x2C
    unsigned int FileBaseOffset;  // 0x30
    unsigned int BufferReadSize;  // 0x34
    unsigned int StreamSize;  // 0x38
    int BufferMaxSize;  // 0x3C
    int BufferCursor;  // 0x40
    unsigned int TotalBytesRead;  // 0x44
    unsigned int TotalBytesWritten;  // 0x48
    unsigned int RawFileClass;
// --- flat members (END) ---
    void Destruct();
    void StubReturnFalse(int a1, int a2, int a3);
     double Constructor(...);  // C2597 interim stub
     void Dtor(void * self);
};

} // namespace gamemd
