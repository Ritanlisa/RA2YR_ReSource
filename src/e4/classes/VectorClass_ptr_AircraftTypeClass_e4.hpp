// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
struct VectorClass_ptr_AircraftTypeClass {
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    char IsInitialized[1];  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char __pad_00E;  // 0xE
    char __pad_F[1];  // 0xF
    void* Count;  // 0x10
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    DynamicVector *  Constructor_VectorClass_AircraftTypeClass___(char a2);  // 0x4F0840
    DynamicVector *  Constructor_VectorClass_UnitTypeClass___(char a2);  // 0x4F08E0
    int Get(int a2, void *a2_2);  // 0x4E8DE0
    void Destroy_0();  // 0x4E8E40
    unsigned int  GetItemIndex_0(int a2);  // 0x4E8E70
    char  Add(int a2, void *a1 = 0, void *a3 = 0);  // 0x4EDAC0
    char  Release(int a2, unsigned int * a3);  // 0x4EDB00
    void Remove(void *a1_1, void *a1 = 0);  // 0x4EDBB0
    int  GetSize(unsigned int * a2);  // 0x4EDBE0
    unsigned int  LoadTypeData(int a2);  // 0x4EDC20
    char  SetCapacity(int a2, unsigned int * a3);  // 0x4EDC40
    int  FindItemIndex(unsigned int * a2);  // 0x4EDCF0
    char  SetCapacity_0(int a2, unsigned int * a3);  // 0x4EDEA0
    int  FindItemIndex_0(unsigned int * a2);  // 0x4EDF50
};
} // namespace gamemd
