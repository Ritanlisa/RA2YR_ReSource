// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

#ifndef GAMEMD_G2_BufferIOFileClass_DEF  // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_BufferIOFileClass_DEF 1
struct BufferIOFileClass {
    void * __tail_0;  // 0x0
    int FilePointer;  // 0x4
    int FileSize;  // 0x8
    void * Handle;  // 0xC
    void * FileName;  // 0x10
    char FileTimeDateLo[2];  // 0x14
    char FileTimeDateHi[2];  // 0x16
    char FileNameAllocated;  // 0x18
    char tail_19[3];  // 0x19
    bool BufferDirty;  // 0x1C
    bool BufferReadPending;  // 0x1D
    bool BufferWritePending;  // 0x1E
    bool FlushOnClose;  // 0x1F
    bool CacheReadAhead;  // 0x20
    unsigned char __pad_021;  // 0x21
    char __pad_22[2];  // 0x22
    unsigned int BufferOffset;  // 0x24
    unsigned int BufferSize;  // 0x28
    unsigned int BufferPosition;  // 0x2C
    unsigned int FileBaseOffset;  // 0x30
    unsigned int BufferReadSize;  // 0x34
    unsigned int StreamSize;  // 0x38
    int BufferMaxSize;  // 0x3C
    int BufferCursor;  // 0x40
    unsigned int TotalBytesRead;  // 0x44
    unsigned int TotalBytesWritten;  // 0x48
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int Destruct(void *a1 = 0);  // def-aligned
    void StubReturnFalse(int a1, int a2, int a3);
     uint8_t * Constructor(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0);
int Dtor(void *a1 = 0);
    static int Seek(CCFileClass *p_this, LONG lDistanceToMove, DWORD dwMoveMethod);  // x4:ida@0x473ba0
};
#endif  // GAMEMD_G2_BufferIOFileClass_DEF

} // namespace gamemd
