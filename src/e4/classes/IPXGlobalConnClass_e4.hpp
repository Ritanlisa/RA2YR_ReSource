// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct HashTable_flat;  // fix_fwd_type_supply

#ifndef GAMEMD_G2_IPXGlobalConnClass_DEF  // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_IPXGlobalConnClass_DEF 1
struct IPXGlobalConnClass {
    int __pad_0;  // 0x0
    void* __pad_004;  // 0x4
    int IPXGlobalConnClass_field_0x08;  // 0x8
    int IPXGlobalConnClass_field_0x0C;  // 0xC
    int IPXGlobalConnClass_field_0x10;  // 0x10
    int IPXGlobalConnClass_field_0x14;  // 0x14
    int IPXGlobalConnClass_field_0x18;  // 0x18
    int IPXGlobalConnClass_field_0x1C;  // 0x1C
    void* IPXGlobalConnClass_field_0x20;  // 0x20
    int IPXGlobalConnClass_field_0x24;  // 0x24
    int IPXGlobalConnClass_field_0x28;  // 0x28
    int IPXGlobalConnClass_field_0x2C;  // 0x2C
    int IPXGlobalConnClass_field_0x30;  // 0x30
    int IPXGlobalConnClass_field_0x34;  // 0x34
// --- flat members (BEGIN) ---
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
#endif  // GAMEMD_G2_IPXGlobalConnClass_DEF

} // namespace gamemd
