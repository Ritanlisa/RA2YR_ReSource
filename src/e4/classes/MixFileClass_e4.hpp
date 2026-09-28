// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct MixFileClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* Previous;  // 0x4
    bool Blowfish;  // 0x8
    bool Encryption;  // 0x9
    unsigned char q00A;  // 0xA
    int CountFiles;  // 0xC
    unsigned int u32_D;  // 0xD
    int FileSize;  // 0x10
    unsigned char u8_11;  // 0x11
    unsigned char u8_12;  // 0x12
    int FileStartOffset;  // 0x14
    MixHeaderData* Headers;  // 0x18
    unsigned int q01C;  // 0x1C
    int q020;  // 0x20
    int MixFileClass_field_24;  // 0x24
    unsigned char* MemoryData;  // 0x28
    int MemoryDataSize;  // 0x2C
// --- flat members (END) ---
    void CleanupCache();
    void DestroyCache();
    static double CacheNode_Dtor(...);  // C2597 interim stub
    static double FromFile(...);  // C2597 interim stub
    static double GetSubFile(...);  // C2597 interim stub
    static double LoadSubFile(...);  // C2597 interim stub
};

} // namespace gamemd
