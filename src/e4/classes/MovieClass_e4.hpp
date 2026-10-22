// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct MovieClass {
    unsigned char __pad_000;  // 0x0
    char __pad_1[3];  // 0x1
    int q004;  // 0x4
    int q008;  // 0x8
    int q00C;  // 0xC
    int q010;  // 0x10
    int q014;  // 0x14
    char __pad_18[40];  // 0x18
    unsigned int u32_40;  // 0x40
    char __pad_44[12];  // 0x44
    unsigned int u32_50;  // 0x50
    char __pad_54[36];  // 0x54
    unsigned int u32_78;  // 0x78
    char __pad_7C[204];  // 0x7C
    unsigned int u32_148;  // 0x148
    char __pad_14C[180];  // 0x14C
    unsigned int u32_200;  // 0x200
    char __pad_204[312];  // 0x204
    unsigned int u32_33C;  // 0x33C
    char __pad_340[452];  // 0x340
    unsigned int u32_504;  // 0x504
    unsigned int u32_508;  // 0x508
    char __pad_50C[4];  // 0x50C
    unsigned int u32_510;  // 0x510
    unsigned char u8_514;  // 0x514
    char __pad_515[3];  // 0x515
    unsigned int u32_518;  // 0x518
    unsigned int u32_51C;  // 0x51C
    char __pad_520[8];  // 0x520
    unsigned char u8_528;  // 0x528
    char __pad_529[31];  // 0x529
    unsigned int u32_548;  // 0x548
    char __pad_54C[4];  // 0x54C
    unsigned char u8_550;  // 0x550
    char __pad_551[3];  // 0x551
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    unsigned int ComputeTime();
    static int GetHeight(MovieClass * aP1);
    static int GetWidth(MovieClass * aP1);
    int ReadConfig(HWND aP1, int nIDDlgItem);
    static int RenderLoop(char *p_this, int a2, char a3);  // x4:ida@0x759940
};

} // namespace gamemd
