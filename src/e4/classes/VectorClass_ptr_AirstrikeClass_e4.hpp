// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
struct VectorClass_ptr_AirstrikeClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    void* Count;  // 0x10
// --- flat members (END) ---
    DynamicVector *  Constructor_VectorClass_AirstrikeClass___(char a2);  // 0x41E0F0
    int Destroy(void *a1_1);  // 0x41DDE0
    unsigned int  GetItemIndex(int a2);  // 0x41DE10
    int Get(int a2, void *a2_2);  // 0x41DE30
    char  Add(int a2, void *a1 = 0, void *a3 = 0);  // 0x41DE40
    char  Release(int a2, unsigned int * a3);  // 0x41DE80
    void Remove(void *a1_1, void *a1 = 0);  // 0x41DF30
    int  GetSize(unsigned int * a2);  // 0x41DF60
    unsigned int  GetCapacity(int a2);  // 0x41DFA0
    char  SetCapacity(int a2, unsigned int * a3);  // 0x41DFC0
    int  FindItemIndex(unsigned int * a2);  // 0x41E070
    VectorClass_flat *  QueryInterface(char a2);  // 0x41E0A0
    unsigned char __pad_00E;  // 0xE [X30:canon]
};
} // namespace gamemd
