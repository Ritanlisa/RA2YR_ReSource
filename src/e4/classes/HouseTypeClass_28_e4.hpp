// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct HouseTypeClass_28 {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    void* q004;  // 0x4
    int q008;  // 0x8
    bool q00C;  // 0xC
    bool IsAllocated;  // 0xD
    int q010;  // 0x10
    bool IsInitialized;  // 0x12
    int Count;  // 0x16
    bool q018;  // 0x18
    unsigned char q01C;  // 0x1C
    bool q024;  // 0x24
    unsigned char q028;  // 0x28
    int q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q04C;  // 0x4C
    unsigned char q050;  // 0x50
    bool q054;  // 0x54
// --- flat members (END) ---
    void ddtor();  // 0x512990
    int Seek(int a2);  // 0x5129E0
    TypeList_flat * QueryInterface(char a2);  // 0x512A90
    char AddRef(int a2);  // 0x5133E0
    char Release(int a2, unsigned int * a3);  // 0x513610
    int Read(unsigned int * a2);  // 0x513710
    unsigned int Write(int a2);  // 0x5129C0
};
} // namespace gamemd
