// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply

struct MoveFeedback {
    unsigned char __pad_000;  // 0x0
    char __pad_1[3];  // 0x1
    int MoveFeedback_field_0x04;  // 0x4
    unsigned int m_8;  // 0x8
    unsigned int m_C;  // 0xC
    unsigned int m_10;  // 0x10
    int MoveFeedback_field_0x14;  // 0x14
    int MoveFeedback_field_0x18;  // 0x18
    int MoveFeedback_field_0x1C;  // 0x1C
    int MoveFeedback_field_0x20;  // 0x20
    int MoveFeedback_field_0x24;  // 0x24
    int MoveFeedback_field_0x28;  // 0x28
    int MoveFeedback_field_0x2C;  // 0x2C
    int MoveFeedback_field_0x30;  // 0x30
    int MoveFeedback_field_0x34;  // 0x34
// --- flat members (BEGIN) ---
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
};

} // namespace gamemd
