// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_N {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
// --- flat members (END) ---
    void Destroy();  // 0x5AC5F0
    char Release(int a2,  unsigned int * a3);    // 0x5AD130
    char SetCapacity(int a2,  unsigned int * a3);    // 0x5AD290
    int FindItemIndex(double * a2);  // 0x5AD350
    VectorClass_flat * QueryInterface(unsigned int * Block,  char a2);    // 0x5AD5C0
    DynamicVector * Constructor_VectorClass_double_(unsigned int * Block,  char a2);    // 0x5AD610
    unsigned int GetItemIndex(int a2);  // 0x5AC620
    double Clear(int a2);  // 0x5AC640
    char AddRef(int a2);  // 0x5AD0F0
    void ddtor();  // 0x5AD1F0
    int GetSize(double * a2);  // 0x5AD220
    unsigned int GetCapacity(int a2);  // 0x5AD270
};
} // namespace gamemd
