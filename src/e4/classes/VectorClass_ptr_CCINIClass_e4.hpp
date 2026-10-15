// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply
struct VectorClass_ptr_CCINIClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
// --- flat members (END) ---
    int  Clear(int a2);  // 0x538510
    char  AddRef(int a2);  // 0x538520
    char  Remove(int a2, unsigned int * a3);  // 0x538560
    wchar_t * ddtor(void *a1_1);  // 0x538610
    int  GetSize(unsigned int * a2);  // 0x538640
    unsigned int  Get(int a2, void *a1 = 0);  // 0x538680
    VectorClass_flat *  Add(char a2, void *a1 = 0, void *a3 = 0);  // 0x538A90
    unsigned char __pad_00E;  // 0xE [X30:canon]
};
} // namespace gamemd
