// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct MSShapeAnim;  // fix_fwd_type_supply

struct MSOverlayAnim {
    void * Init_ph;  // 0x0
    void* __pad_004;  // 0x4
    int q008;  // 0x8
    int q00C;  // 0xC
    int q010;  // 0x10
    int q014;  // 0x14
    int q018;  // 0x18
    unsigned int u32_1C;  // 0x1C
    unsigned int u32_20;  // 0x20
    unsigned int u32_24;  // 0x24
    unsigned int u32_28;  // 0x28
    unsigned int u32_2C;  // 0x2C
    unsigned int u32_30;  // 0x30
    unsigned char u8_34;  // 0x34
    char __pad_35[3];  // 0x35
    unsigned int u32_38;  // 0x38
    unsigned char u8_3C;  // 0x3C
    char __pad_3D[3];  // 0x3D
    unsigned int u32_40;  // 0x40
    unsigned int u32_44;  // 0x44
    unsigned char u8_48;  // 0x48
    char __pad_49[3];  // 0x49
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static unsigned int Init(char** p0, int p1, int p2, int p3, int p4, int p5, char p6, int p7, char p8);  // x4:signals@0x5cc250
    MSShapeAnim * QueryInterface(unsigned int * Block, char a2);
    void StubReturnFalse(int a1);
};

} // namespace gamemd
