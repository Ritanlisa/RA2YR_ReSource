// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct SpawnManagerClass_25 {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    void* q004;  // 0x4
    int q008;  // 0x8
    bool q00C;  // 0xC
    bool IsAllocated;  // 0xD
    int q010;  // 0x10
    bool IsInitialized;  // 0x12
    unsigned int Capacity;
// --- flat members (END) ---
    void ddtor(int a1, unsigned int * a2);  // 0x6B8160
    int  SaveState(int a2);  // 0x6B81B0
    char  AddRef(int a2);  // 0x6B8220
    char  Release(int a2, unsigned int * a3);  // 0x6B8400
    int  Spawn(unsigned int * a2);  // 0x6B84B0
    DynamicVector *  QueryInterface(unsigned int * Block, char a2);  // 0x6B8790
    unsigned int  LoadState(int a2);  // 0x6B8190
};
} // namespace gamemd
