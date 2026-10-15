// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct HashTable_flat;  // fix_fwd_type_supply

#ifndef GAMEMD_G2_IPXGlobalConnClass_DEF  // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_IPXGlobalConnClass_DEF 1
struct IPXGlobalConnClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    unsigned int padding;  // 0x2A
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
    unsigned int *q000;  // 0x0 (offset-truth)
    unsigned char u32_141;  // 0x141 (offset-truth)
    unsigned int u32_CC;  // 0xCC (offset-truth)
    unsigned int u32_D4;  // 0xD4 (offset-truth)

    unsigned int u32_D0;  // X10 supply (member_lookup)
    void* __pad_004;  // 0x4 [X30:type_map]
    unsigned char __pad_02E;  // 0x2E [X30:canon]
    void* IPXGlobalConnClass_field_0x20;  // 0x20 [X30:type_map]
    unsigned int PlayerIndex;  // [X30:default]
    int __pad_0;  // 0x0 [X30:type_map]
};
#endif  // GAMEMD_G2_IPXGlobalConnClass_DEF

} // namespace gamemd
