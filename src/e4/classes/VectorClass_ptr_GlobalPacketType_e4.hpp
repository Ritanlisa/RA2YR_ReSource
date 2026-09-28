// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_ptr_GlobalPacketType {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
// --- flat members (END) ---
    DynamicVector * Constructor_VectorClass_MultiMission___(char a2);  // 0x69D5E0
    DynamicVector * Constructor_VectorClass_GlobalPacketType___(char a2);  // 0x69D680
    void Destroy();  // 0x69C5A0
    unsigned int GetItemIndex(int a2);  // 0x69C5D0
    void Destroy_0();  // 0x69C600
    unsigned int GetItemIndex_0(int a2);  // 0x69C630
    int Get(int a2);  // 0x69C650
    void Destroy_1();  // 0x69C660
    unsigned int GetItemIndex_1(int a2);  // 0x69C690
    char SetCapacity(int a2,  unsigned int * a3);    // 0x69CEC0
    int FindItemIndex(unsigned int * a2);  // 0x69CF70
    char Add(int a2);  // 0x69CFA0
    char Release(int a2,  unsigned int * a3);    // 0x69CFE0
    void Remove();  // 0x69D090
    int GetSize(unsigned int * a2);  // 0x69D0C0
    unsigned int GetCapacity(int a2);  // 0x69D100
    char SetCapacity_0(int a2,  unsigned int * a3);    // 0x69D120
    int FindItemIndex_0(unsigned int * a2);  // 0x69D1D0
    char SetCapacity_1(int a2,  unsigned int * a3);    // 0x69D380
    int FindItemIndex_1(unsigned int * a2);  // 0x69D430
    VectorClass_flat * QueryInterface(unsigned int * Block,  char a2);    // 0x69D630
    unsigned int * loc_69D720(unsigned int * Block,  char a2);    // 0x69D720
};
} // namespace gamemd
