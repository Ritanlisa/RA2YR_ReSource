// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

#ifndef GAMEMD_G2_CCFileClass_DEF  // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_CCFileClass_DEF 1
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
    unsigned int tail_19;  // 0x19
    char BufferDirty;  // 0x1C
    char BufferReadPending;  // 0x1D
    char BufferWritePending;  // 0x1E
    char FlushOnClose;  // 0x1F
    char CacheReadAhead;  // 0x20
    int BufferOffset;  // 0x24
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
// --- flat members (END) ---
    char Close(void *a1 = 0, void *a2 = 0);
    int Destruct(void *a1 = 0);
    int GetFileSize(void *a1, void *a2);
    void ProcessStream(unsigned int a1);
    static int Construct3(CCFileClass * aP1);
    bool Open(int a2, void *a1 = 0, void *a3 = 0);
     int Read(void *lpBuffer, signed int Size, void *a1 = 0);
    void * ReadEntireFile(void *a1 = 0);  // was C2597 interim stub, := truth 0x0x4a3890
    static int Reset(CCFileClass * aP1);
static int GetSize(CCFileClass * aP1);
    void *Construct2(char **a2, void *a1 = 0);  // G57w16 G1: raw unsigned int*  // init file object with name
     unsigned int * Construct(char *Source, void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0, void *a8 = 0);
    LONG Load(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0);  // 0x595bc0
    int  Reopen(char * Source, void * a3);  // 0x47af10
    AudioController * * Close(void * a1);
    static int Cleanup(void *aP1);
    char __tail_0[4];  // 0x0 (ml)
};
#endif  // GAMEMD_G2_CCFileClass_DEF

} // namespace gamemd
