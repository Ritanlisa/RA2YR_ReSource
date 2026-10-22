// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct PlayerClass {
    unsigned char __pad_000;  // 0x0
    char __pad_1[3];  // 0x1
    int q004;  // 0x4
    unsigned int u32_8;  // 0x8
    int q00C;  // 0xC
    int q010;  // 0x10
    int q014;  // 0x14
    int q018;  // 0x18
    int q01C;  // 0x1C
    int q020;  // 0x20
    int q024;  // 0x24
    int q028;  // 0x28
    int q02C;  // 0x2C
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    bool IsValidIndex(int a1);
    char AssignPlayerIndex();
    int SetHouse(int a2);
    int HasPlayers(void *a1 = 0);  // 0x6abac0
};

} // namespace gamemd
