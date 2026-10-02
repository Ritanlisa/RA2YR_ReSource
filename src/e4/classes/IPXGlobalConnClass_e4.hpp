// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct HashTable_flat;  // fix_fwd_type_supply

struct IPXGlobalConnClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char q010;  // 0x10
    unsigned int q011;  // 0x11
    unsigned int u32_14;  // 0x14
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned int padding;  // 0x2A
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned char q034;  // 0x34
    unsigned int IPXGlobalConnClass_field_0x04;
    unsigned int u32_CC;
    unsigned int u32_D0;
    unsigned int u32_D4;
    unsigned int Debug;
    unsigned int Timer;
    unsigned int *__pad_0;
    unsigned char IPXGlobalConnClass_field_0x20;  // 0x20
// --- flat members (END) ---
    HashTable_flat * * SetAddress(int a2, int arg4, int * a3, IPXGlobalConnClass * aP4, int a6, int aP3);
    IPXGlobalConnClass * QueryInterface(char a2);
    int CheckStatus();
    int Connect(void * a2, signed int * a3);
    int Release(const void * a1, AnimClass * aP2, int aP3, char aP4);
    int Send();
    int SendPacket(int a2, short a3);
    int ddtor(int a2, int a3);
    void ReceivePacket(int a2);
};

} // namespace gamemd
