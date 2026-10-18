// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
struct VectorClass_UDirtyAreaStruct {
    unsigned int ptr_0;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    char IsInitialized[1];  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char __pad_00E;  // 0xE
    char __pad_F[1];  // 0xF
    void* Count;  // 0x10
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    AbstractClass * * SetCapacity(CCINIClass * aP1, char * a2);  // 0x6DC850
    DynamicVector *  Constructor_VectorClass_ShadowControlClass___(char a2);  // 0x6DCD20
    int Destroy(void *a1_1);  // 0x6DC4E0
    unsigned int  GetItemIndex(int a2);  // 0x6DC510
    int  Clear(int a2, int a3);  // 0x6DC540
    void Destroy_0();  // 0x6DC580
    unsigned int  GetItemIndex_0(int a2);  // 0x6DC5B0
    char  GetSize(int a2);  // 0x6DC5E0
    unsigned int  FindItemIndex(int a2);  // 0x6DC820
    unsigned int * loc_6DCC80(unsigned int * Block, char a2);  // 0x6DCB50
};
} // namespace gamemd
