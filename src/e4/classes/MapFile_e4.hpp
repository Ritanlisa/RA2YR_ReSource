// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply

struct MapFile {
    unsigned int __pad_0;  // 0x0
    int q004;  // 0x4
    int q008;  // 0x8
    int q00C;  // 0xC
    int q010;  // 0x10
    int q014;  // 0x14
    int q018;  // 0x18
    char __pad_1C[319];  // 0x1C
    unsigned char u8_15B;  // 0x15B
    char __pad_15C[31];  // 0x15C
    unsigned char u8_17B;  // 0x17B
    unsigned char u8_17C;  // 0x17C
    char __pad_17D[3];  // 0x17D
    unsigned int u32_180;  // 0x180
    unsigned int u32_184;  // 0x184
    char __pad_188[36];  // 0x188
    unsigned int u32_1AC;  // 0x1AC
    char __pad_1B0[4];  // 0x1B0
    unsigned int u32_1B4;  // 0x1B4
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static wchar_t * LoadDescription(void *aP1, void *a2, void *a3);
    DynamicVector * QueryInterface(unsigned int * Block, char a2);
    unsigned int * Constructor(int a2, int a3, void *a3_1 = 0, void *a4 = 0);
};

} // namespace gamemd
