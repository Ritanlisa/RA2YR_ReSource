// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct VectorClass_USubzoneTrackingStruct {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
// --- flat members (END) ---
    int Clear(int a2, int a3);  // 0x588E10
    char AddRef(int a2);  // 0x5896F0
    char Release(int a2, int * a3);  // 0x589740
    wchar_t * ddtor(void *a1_1);  // 0x589960
    int GetSize(int a2);  // 0x5899E0
    unsigned int GetCapacity(int a2);  // 0x589A30
    VectorClass_flat * QueryInterface(unsigned int * Block, char a2);  // 0x58A470
    unsigned int * SetCapacity(unsigned int * a2);  // 0x58AD10
};
} // namespace gamemd
