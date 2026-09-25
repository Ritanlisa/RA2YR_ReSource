// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct FoggedObjectClass_42 {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    void* Items;  // 0x4
    int Capacity;  // 0x8
    bool IsInitialized;  // 0xC
    bool IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    int Count;  // 0x10
    unsigned char q014;  // 0x14
    bool q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    bool q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    int q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q03C;  // 0x3C
    unsigned char q044;  // 0x44
    unsigned char q048;  // 0x48
    unsigned char q050;  // 0x50
    bool q054;  // 0x54
// --- flat members (END) ---
    int FindItem(unsigned int * a2);  // 0x4E07B0
    unsigned int * loc_4E0D30(char a2);  // 0x4E0D30
    void ClearBuffer();  // 0x4E01F0
    int Seek(int a2);  // 0x4E0240
    char AddRef(int a2);  // 0x4E0580
    char Release(int a2,  unsigned int * a3);    // 0x4E05C0
    void ddtor();  // 0x4E0670
    int Read(unsigned int * a2);  // 0x4E06A0
    char SetCapacity(int a2,  unsigned int * a3);    // 0x4E0700
    VectorClass_flat * QueryInterface(char a2);  // 0x4E0CE0
    unsigned int PointerToIndex(int a2);  // 0x4E0220
    unsigned int Write(int a2);  // 0x4E06E0
};
} // namespace gamemd
