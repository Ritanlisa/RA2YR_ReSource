// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct TypeList_VoxelAnim {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
// --- flat members (END) ---
    void ddtor(void *a1 = 0);  // 0x67A410
    unsigned int  GetIndex(int a2);  // 0x67A440
    int  Clear(int a2);  // 0x67A460
    void TypeList_vt03();  // 0x67A680
    unsigned int  TypeList_vt05(int a2);  // 0x67A6B0
    TypeList_flat *  Add(unsigned int * Block, char a2, void *a1 = 0);  // 0x67A990
    TypeList_flat *  TypeList_vt00(unsigned int * Block, char a2);  // 0x67A9E0
    char  AddRef(int a2);  // 0x67AAF0
    char  SetCapacity(int a2, unsigned int * a3);  // 0x67AB30
    int  IndexOf(unsigned int * a2);  // 0x67AC10
    unsigned int  PointerToIndex(int a2);  // 0x67AC50
    char  Remove(int a2, unsigned int * a3);  // 0x67ACD0
    int  GetSize(unsigned int * a2);  // 0x67ADD0
    int  TypeList_vt04(unsigned int * a2);  // 0x67B150
    VectorClass_flat *  Constructor(unsigned int * Block, char a2, void *a1 = 0);  // 0x67C010
    DynamicVector *  Constructor_0(unsigned int * Block, char a2, void *a1 = 0);  // 0x67C100
    DynamicVector *  Constructor_1(unsigned int * Block, char a2);  // 0x67C1A0
};
} // namespace gamemd
