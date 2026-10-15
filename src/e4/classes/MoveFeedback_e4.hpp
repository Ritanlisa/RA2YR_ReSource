// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply

struct MoveFeedback {
// --- flat members (BEGIN) ---
    bool IsAllocated;  // 0xD
    bool IsInitialized;  // 0x12
    int Count;  // 0x16
// --- flat members (END) ---
    unsigned int  PointerToIndex(int a2);  // 0x40B670
    int  Show(int a2);  // 0x40B6F0
    int  FindItem(unsigned int * a2);  // 0x40B930
    unsigned int * Constructor(unsigned int * Block, char a2, void *a3, void *a4, void *a5);
    DynamicVector * QueryInterface(char a2, int a1, int a3, int a4, int a5);
    char AddRef(int a2);
    char SetCapacity(int a2, unsigned int * a3);
    int Draw(unsigned int * a2, void *a2_1 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0, void *a8 = 0);
    int FindMoveItem(unsigned int * a2);
    int ProcessCommand();
    unsigned int GetIndex2(int a2);
    void Destroy(void *a1 = 0);
    unsigned char *m_1;  // 0x1 (offset-truth)
    unsigned int m_10;  // 0x10 (offset-truth)
    unsigned int m_8;  // 0x8 (offset-truth)
    unsigned int m_C;  // 0xC (offset-truth)
    unsigned char __pad_000;  // 0x0 [X30:canon]
    unsigned char __pad_011;  // 0x11 [X30:canon]
    unsigned char __pad_01A;  // 0x1A [X30:canon]
    unsigned int m_Capacity;  // [X30:default]
    unsigned int m_Items;  // [X30:default]
};

} // namespace gamemd
