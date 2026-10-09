// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply
struct BlowPipe_31 {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    void* q004;  // 0x4
    int q008;  // 0x8
    bool q00C;  // 0xC
    bool IsAllocated;  // 0xD
    int q010;  // 0x10
    bool IsInitialized;  // 0x12
// --- flat members (END) ---
    void ddtor();  // 0x63DC20
    int Seek(int a2, void *a2_2, void *a3_1);  // 0x63DC70
    char AddRef(int a2);  // 0x63E310
    char Release(int a2, unsigned int * a3);  // 0x63E490
    int Read(unsigned int * a2, void *a2_2);  // 0x63E620
    DynamicVector * QueryInterface(unsigned int * Block, char a2);  // 0x63EDE0
    unsigned int Write(int a2);  // 0x63DC50
};
} // namespace gamemd
