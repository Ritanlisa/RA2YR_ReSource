// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply

struct MoveFeedback {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    bool IsAllocated;  // 0xD
    unsigned char q010;  // 0x10
    bool IsInitialized;  // 0x12
    unsigned char q014;  // 0x14
    int Count;  // 0x16
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned char q034;  // 0x34
// --- flat members (END) ---
    unsigned int PointerToIndex(int a2);  // 0x40B670 G42.33 b3 supplied-body sync
    int Show(int a2);  // 0x40B6F0 G42.33 b3 supplied-body sync
    int FindItem(unsigned int * a2);  // 0x40B930 G42.33 b3 supplied-body sync
    _DWORD * Constructor(unsigned int * Block, char a2, void *a3, void *a4, void *a5);
    DynamicVector * QueryInterface(char a2, int a1, int a3, int a4, int a5);
    char AddRef(int a2);
    char SetCapacity(int a2, unsigned int * a3);
    int Draw(unsigned int * a2);
    int FindMoveItem(unsigned int * a2);
    int ProcessCommand();
    unsigned int GetIndex2(int a2);
    void Destroy();
};

} // namespace gamemd
