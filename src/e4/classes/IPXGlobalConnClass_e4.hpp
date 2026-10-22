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
    int q008;  // 0x8
    int q00C;  // 0xC
    int q010;  // 0x10
    int u32_14;  // 0x14
    int q018;  // 0x18
    int q01C;  // 0x1C
    void * q020;  // 0x20
    int q024;  // 0x24
    int q028;  // 0x28
    int q02C;  // 0x2C
    int q030;  // 0x30
    int q034;  // 0x34
    char __pad_38[128];  // 0x38
    unsigned short u16_B8;  // 0xB8
    char __pad_BA[10];  // 0xBA
    unsigned int u32_C4;  // 0xC4
    unsigned char u8_C8;  // 0xC8
    char __pad_C9[3];  // 0xC9
    unsigned int u32_CC;  // 0xCC
    unsigned int u32_D0;  // 0xD0
    unsigned int u32_D4;  // 0xD4
    unsigned int u32_D8;  // 0xD8
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
