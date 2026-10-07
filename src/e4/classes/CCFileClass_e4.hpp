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
    char FileNameAllocated;  // 0x18
    char CacheReadAhead;  // 0x20
    int BufferOffset;  // 0x24
    int BufferSize;  // 0x28
    unsigned int MixFileIndex;  // 0x50
    unsigned int CDFileClass;
    unsigned int FileClass;
    unsigned int u32_68;
// --- flat members (END) ---
    char Close();
    int Destruct();
    int GetFileSize(void *a1, void *a2);
    void ProcessStream(unsigned int a1);
    static int Construct3(CCFileClass * aP1);  // G57w10-S raw 0x00473A80 (was C2597 interim stub)
    bool Open(int a2);
     int Read(void *lpBuffer, signed int Size);  // G57w10-S raw 0x00473B10 (was C2597 interim stub)
    void * ReadEntireFile();  // was C2597 interim stub, := truth 0x0x4a3890
    static int Reset(CCFileClass * aP1);  // G57w10-S raw 0x00473CE0 (was C2597 interim stub)
static int GetSize(CCFileClass * aP1);  // G57w10-S raw 0x00473C00 (was C2597 interim stub)
    void *Construct2(char **a2);  // G57w16 G1: raw _DWORD*  // init file object with name
     _DWORD * Construct(char *Source);
    LONG Load();  // 0x595bc0
    int Reopen(char *Source, CHAR *a3);  // 0x47af10
    AudioController * * Close(void * a1);
    // --- W16G3 supply (BEGIN) ---
    static int Cleanup(void *aP1);  // W16G3 static-form (BinkMovie 0x7xxx)
    // --- W16G3 supply (END) ---

};
#endif  // GAMEMD_G2_CCFileClass_DEF

} // namespace gamemd
