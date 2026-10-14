// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply
struct LogicClass;  // fix_fwd_type_supply
struct VectorClass_flat;  // fix_fwd_type_supply
struct VectorClass_ptr_IsometricTileClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    void* Count;  // 0x10
// --- flat members (END) ---
    DynamicVector *  Constructor_VectorClass_IsometricTileClass___(char a2);  // 0x40CB30
    LogicClass *  Constructor_VectorClass_ObjectClass___(char a2);  // 0x40CC20
    int Destroy(void *a1_1);  // 0x40C820
    unsigned int  GetItemIndex(int a2);  // 0x40C850
    int  Get(int a2, void *a1 = 0);  // 0x40C870
    char  Add(int a2, void *a1 = 0, void *a3 = 0);  // 0x40C880
    char  Release(int a2, unsigned int * a3);  // 0x40C8C0
    void Remove(void *a1_1, void *a1 = 0);  // 0x40C970
    int  GetSize(unsigned int * a2);  // 0x40C9A0
    unsigned int  GetCapacity(int a2);  // 0x40C9E0
    char  SetCapacity(int a2, unsigned int * a3);  // 0x40CA00
    int  FindItemIndex(unsigned int * a2);  // 0x40CAB0
    VectorClass_flat *  QueryInterface(char a2);  // 0x40CAE0
    int GetItem();  // 0x40CC00
    void TryFreeAndClear();  // 0x40CC70
    unsigned int  GetPtrOffset(int a2);  // 0x40CCA0
    int FindValue(unsigned int * a2, void *a2_1 = 0);  // 0x40CF00
    char m_1[8];  // 0x1.. vocab alias (raw usage &x.m_1[3] = Items@0x4)
    unsigned int m_8;  // 0x8 vocab alias (Capacity)
    unsigned int m_C;  // 0xC..0xD vocab alias (IsInitialized/IsAllocated via LOBYTE/BYTE1)
    unsigned int m_10;  // 0x10 vocab alias (Count)
    char __pad_0[4];  // 0x0 vocab alias (vfptr carrier)
};
} // namespace gamemd
