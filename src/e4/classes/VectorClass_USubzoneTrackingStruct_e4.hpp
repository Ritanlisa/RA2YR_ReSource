// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_USubzoneTrackingStruct {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned int q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    unsigned int q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned char q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q03C;  // 0x3C
    unsigned char q044;  // 0x44
    unsigned char q048;  // 0x48
    unsigned char q050;  // 0x50
// --- flat members (END) ---
    int Clear(int a2, int a3);  // 0x588E10
    char AddRef(int a2);  // 0x5896F0
    char Release(int a2, int * a3);  // 0x589740
    void ddtor();  // 0x589960
    int GetSize(int a2);  // 0x5899E0
    unsigned int GetCapacity(int a2);  // 0x589A30
    VectorClass_flat * QueryInterface(unsigned int * Block, char a2);  // 0x58A470
    unsigned int * SetCapacity(unsigned int * a2);  // 0x58AD10
};
} // namespace gamemd
