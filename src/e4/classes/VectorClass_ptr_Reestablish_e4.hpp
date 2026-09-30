// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_ptr_Reestablish {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
// --- flat members (END) ---
    void Destroy(void *a1 = 0);  // 0x45A0D0
    unsigned int  GetItemIndex(int a2);  // 0x45A100
    int  Clear(int a2);  // 0x45A120
    char  AddRef(int a2);  // 0x45A760
    char  Remove(int a2, unsigned int * a3);  // 0x45A7A0
    void ddtor(void *a1 = 0);  // 0x45A850
    int  GetSize(unsigned int * a2);  // 0x45A880
    unsigned int  Get(int a2);  // 0x45A8C0
    char  SetCapacity(int a2, unsigned int * a3);  // 0x45A8E0
    int  FindItemIndex(unsigned int * a2);  // 0x45A990
    DynamicVector *  Constructor(unsigned int * Block, char a2);  // 0x45AA10
    VectorClass_flat *  Add(unsigned int * Block, char a2);  // 0x45ACE0
    DynamicVector *  Constructor_VectorClass_Reestablish___(unsigned int * Block, char a2);  // 0x45AD30
};
} // namespace gamemd
