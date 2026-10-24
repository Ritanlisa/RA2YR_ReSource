// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply

struct MoveFeedback {
    unsigned char __pad_000;  // 0x0
    char __pad_1[3];  // 0x1
    int q004;  // 0x4
    unsigned int q008;  // 0x8
    unsigned char q00C;  // 0xC
    char IsAllocated[3];  // 0xD
    unsigned int q010;  // 0x10
    int q014;  // 0x14
    int q018;  // 0x18
    int q01C;  // 0x1C
    int q020;  // 0x20
    int q024;  // 0x24
    int q028;  // 0x28
    int q02C;  // 0x2C
    int q030;  // 0x30
    int q034;  // 0x34
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
