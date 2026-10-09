// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct LocomotionClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    unsigned int u32_8;  // 0x8
    FootClass* LinkedTo;  // 0xC
    unsigned int u32_10;  // 0x10
    bool Dirty;  // 0x11
    unsigned char u8_14;  // 0x14
// --- flat members (END) ---
    LocomotionClass * ProcessMove(char a2);
    int CheckBridgeBlock();
    int GetSpeedMultiplier();
    int Initialize();
    int ProcessData();
    int Update(void *a1, void *a2, void *a3, void *a4);
    int Init();
    void * UpdateAll();
    void Construct();
    int Owner;  // 0x8 (ml)
    char[1] Powered;  // 0x16 (ml)
    int RefCount;  // 0x20 (ml)
    unsigned char __pad_50;  // 0x50 (offset-truth supply)
    unsigned char __pad_89;  // 0x89 (offset-truth supply)
    unsigned char q015;  // 0x15 (offset-truth supply)
    bool q074;  // 0x116 (ml)
    unsigned int u32_18;  // 0x18 (offset-truth supply)
    unsigned int u32_1C;  // 0x1C (offset-truth supply)
    unsigned int u32_24;  // 0x24 (offset-truth supply)
    unsigned int u32_28;  // 0x28 (offset-truth supply)
    unsigned int u32_2C;  // 0x2C (offset-truth supply)
    unsigned int u32_34;  // 0x34 (offset-truth supply)
    unsigned int u32_38;  // 0x38 (offset-truth supply)
    unsigned int u32_48;  // 0x48 (offset-truth supply)
    unsigned int u32_4C;  // 0x4C (offset-truth supply)
    unsigned char u32_51;  // 0x51 (offset-truth supply)
    unsigned char u32_52;  // 0x52 (offset-truth supply)
    unsigned int u32_58;  // 0x58 (offset-truth supply)
    unsigned int u32_5C;  // 0x5C (offset-truth supply)
    unsigned int u32_5D4;  // 0x5D4 (offset-truth supply)
    unsigned int u32_60;  // 0x60 (offset-truth supply)
    unsigned char u32_61;  // 0x61 (offset-truth supply)
    unsigned char u32_62;  // 0x62 (offset-truth supply)
    unsigned char u32_63;  // 0x63 (offset-truth supply)
    unsigned int u32_64;  // 0x64 (offset-truth supply)
    unsigned char u32_65;  // 0x65 (offset-truth supply)
    unsigned int u32_68;  // 0x68 (offset-truth supply)
    unsigned int u32_6C;  // 0x6C (offset-truth supply)
    unsigned int u32_70;  // 0x70 (offset-truth supply)
};

} // namespace gamemd
