// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_ptr_WaypointPathClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
// --- flat members (END) ---
    DynamicVector * Constructor_VectorClass_WaypointPathClass___(char a2);  // 0x764710
    void Destroy();  // 0x763F90
    unsigned int GetItemIndex(int a2);  // 0x763FC0
    int Get(int a2);  // 0x763FE0
    char Add(int a2);  // 0x764460
    char Release(int a2,  unsigned int * a3);    // 0x7644A0
    void Remove();  // 0x764550
    int GetSize(unsigned int * a2);  // 0x764580
    unsigned int GetCapacity(int a2);  // 0x7645C0
    char SetCapacity(int a2,  unsigned int * a3);    // 0x7645E0
    int FindItemIndex(unsigned int * a2);  // 0x764690
    VectorClass_flat * QueryInterface(unsigned int * Block,  char a2);    // 0x7646C0
};
} // namespace gamemd
