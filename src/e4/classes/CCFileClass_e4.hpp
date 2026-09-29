// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct CCFileClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* FilePointer;  // 0x4
    int FileSize;  // 0x8
    void * Handle;  // 0xC
    void * FileName;  // 0x10
    unsigned int FileTimeDateLo;  // 0x14
    unsigned int FileTimeDateHi;  // 0x16
    char FileNameAllocated;  // 0x18
    unsigned char tail_19;  // 0x19
    char BufferDirty;  // 0x1C
    char BufferReadPending;  // 0x1D
    char BufferWritePending;  // 0x1E
    char FlushOnClose;  // 0x1F
    char CacheReadAhead;  // 0x20
    int BufferOffset;  // 0x24
    unsigned int q026;  // 0x26
    unsigned int q027;  // 0x27
    int BufferSize;  // 0x28
    int BufferPosition;  // 0x2C
    int FileBaseOffset;  // 0x30
    int BufferReadSize;  // 0x34
    int StreamSize;  // 0x38
    int BufferMaxSize;  // 0x3C
    int BufferCursor;  // 0x40
    int TotalBytesRead;  // 0x44
    int TotalBytesWritten;  // 0x48
    unsigned int FileID;  // 0x4C
    unsigned int MixFileIndex;  // 0x50
    unsigned int CDFileClass;
    unsigned int CacheReadAhead8;
    unsigned int FileClass;
    unsigned int u32_68;
// --- flat members (END) ---
    AudioController * * Close();
    int Destruct();
    int GetFileSize();
    void ProcessStream(unsigned int a1);
    static double Construct3(...);  // C2597 interim stub
    bool Open(int mode);  // open file with mode
    static double Read(...);  // C2597 interim stub
    static double ReadEntireFile(...);  // C2597 interim stub
    static double Reset(...);  // C2597 interim stub
    static double GetSize(...);  // C2597 interim stub
    void Construct2(void* filename);  // init file object with name
    static void Construct(void * self, void * aP2);  // 0x478EB1 ctor (data-member artifact removed G34)
};

} // namespace gamemd
