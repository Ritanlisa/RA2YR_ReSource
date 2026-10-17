// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply
struct SpawnManagerClass_25 {
    unsigned char __pad_000;  // 0x0
    char __pad_1[3];  // 0x1
    int q004;  // 0x4
    unsigned int u32_8;  // 0x8
    int q00C;  // 0xC
    int q010;  // 0x10
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    wchar_t * ddtor(void *a1_1, void *a2_1);  // 0x6B8160
    int  SaveState(int a2);  // 0x6B81B0
    char  AddRef(int a2);  // 0x6B8220
    char  Release(int a2, unsigned int * a3);  // 0x6B8400
    int  Spawn(unsigned int * a2);  // 0x6B84B0
    DynamicVector *  QueryInterface(char a2);  // 0x6B8790
    unsigned int  LoadState(int a2);  // 0x6B8190
};
} // namespace gamemd
