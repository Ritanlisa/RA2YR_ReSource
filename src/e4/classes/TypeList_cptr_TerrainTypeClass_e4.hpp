// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct TypeList_cptr_TerrainTypeClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
// --- flat members (END) ---
    void GetClassIdentifier();  // 0x67A930
    unsigned int GetIndex(int a2);  // 0x67A960
    int SaveToINI(int a2);  // 0x67A980
    TypeList_flat * Add(char a2);  // 0x67AA30
    char AddRef(int a2);  // 0x67B1F0
    char SetCapacity(int a2,  unsigned int * a3);    // 0x67B230
    void TryFreeAndClear();  // 0x67B2E0
    int IndexOf(unsigned int * a2);  // 0x67B310
    unsigned int PointerToIndex(int a2);  // 0x67B350
    char Remove(int a2,  unsigned int * a3);    // 0x67B3D0
    int GetSize(unsigned int * a2);  // 0x67B4D0
    VectorClass_flat * Constructor(char a2, void *a1 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0);  // 0x67C150
};
} // namespace gamemd
