// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Pathfinding {
    int __pad_000;  // 0x0
    int q004;  // 0x4
    int q008;  // 0x8
    int q00C;  // 0xC
    int q010;  // 0x10
    int q014;  // 0x14
    int q018;  // 0x18
    char __pad_1C[12];  // 0x1C
    unsigned int u32_28;  // 0x28
    char __pad_2C[12];  // 0x2C
    unsigned char u8_38;  // 0x38
    char __pad_39[43];  // 0x39
    unsigned int u32_64;  // 0x64
    unsigned int u32_68;  // 0x68
    char __pad_6C[80];  // 0x6C
    unsigned short u16_BC;  // 0xBC
    unsigned short u16_BE;  // 0xBE
    char __pad_C0[2996];  // 0xC0
    unsigned int u32_C74;  // 0xC74
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    unsigned int * ExpandNode(CellStruct * a1, int a2);
    static int CalcDistance(Pathfinding * aP1, int16_t *a2, int16_t *a3, int a4, int a5, int a6, signed int a7);
};

} // namespace gamemd
