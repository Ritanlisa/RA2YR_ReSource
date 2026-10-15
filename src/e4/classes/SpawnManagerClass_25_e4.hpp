// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply
struct SpawnManagerClass_25 {
// --- flat members (BEGIN) ---
    bool IsAllocated;  // 0xD
    bool IsInitialized;  // 0x12
// --- flat members (END) ---
    wchar_t * ddtor(void *a1_1, void *a2_1);  // 0x6B8160
    int  SaveState(int a2);  // 0x6B81B0
    char  AddRef(int a2);  // 0x6B8220
    char  Release(int a2, unsigned int * a3);  // 0x6B8400
    int  Spawn(unsigned int * a2);  // 0x6B84B0
    DynamicVector *  QueryInterface(char a2);  // 0x6B8790
    unsigned int  LoadState(int a2);  // 0x6B8190

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    int q004;  // X10 supply (member_lookup)
    int q00C;  // X10 supply (member_lookup)
    int q010;  // X10 supply (member_lookup)
    unsigned int u32_8;  // X10 supply (member_lookup)
    unsigned char __pad_011;  // 0x11 [X30:canon]
    unsigned int Capacity;  // [X30:default]
    unsigned int ClearAndFree2_ph;  // [X30:default]
    unsigned int Items;  // [X30:default]
};
} // namespace gamemd
