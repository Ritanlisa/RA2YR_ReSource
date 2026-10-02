// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ConvertClass;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_ptr_ConvertClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
    unsigned int CapacityIncrement;  // 0x14
    unsigned char q018;  // 0x18
    void* q01C;  // 0x1C
// --- flat members (END) ---
    void * Constructor_ConvertClass(void ** Block, char a2);  // 0x491210
    void MarkDirty();  // 0x4E1960
    int Destroy(void *a1_1);  // 0x491390
    unsigned int GetItemIndex(int a2);  // 0x4913C0
    int Get(int a2, void *a2_2);  // 0x4913E0
    char Add(int a2, void *a2_2, void *a3_1);  // 0x49AE80
    char Release(int a2, unsigned int * a3);  // 0x49AEC0
    void Remove(void *a1_1);  // 0x49AF70
    int GetSize(unsigned int * a2);  // 0x49AFA0
    unsigned int GetCapacity(int a2);  // 0x49AFE0
    char SetCapacity(int a2, unsigned int * a3);  // 0x49B000
    int FindItemIndex(unsigned int * a2);  // 0x49B0B0
    VectorClass_flat * QueryInterface(unsigned int * Block, char a2);  // 0x49B0E0
    DynamicVector * Constructor_VectorClass_ConvertClass___(unsigned int * Block, char a2);  // 0x49B130
};
} // namespace gamemd
