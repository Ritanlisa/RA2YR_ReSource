// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_ptr_IsometricTileClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
// --- flat members (END) ---
    DynamicVector * Constructor_VectorClass_IsometricTileClass___(char a2);  // 0x40CB30
    LogicClass * Constructor_VectorClass_ObjectClass___(char a2);  // 0x40CC20
    void Destroy();  // 0x40C820
    unsigned int GetItemIndex(int a2);  // 0x40C850
    int Get(int a2);  // 0x40C870
    char Add(int a2);  // 0x40C880
    char Release(int a2,  unsigned int * a3);    // 0x40C8C0
    void Remove();  // 0x40C970
    int GetSize(unsigned int * a2);  // 0x40C9A0
    unsigned int GetCapacity(int a2);  // 0x40C9E0
    char SetCapacity(int a2,  unsigned int * a3);    // 0x40CA00
    int FindItemIndex(unsigned int * a2);  // 0x40CAB0
    VectorClass_flat * QueryInterface(unsigned int * Block,  char a2);    // 0x40CAE0
    int GetItem();  // 0x40CC00
    void TryFreeAndClear();  // 0x40CC70
    unsigned int GetPtrOffset(int a2);  // 0x40CCA0
    int FindValue(unsigned int * a2);  // 0x40CF00
};
} // namespace gamemd
