// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct LocomotionClass {
    void* ptr_0;  // 0x0
    void * ptr_4;  // 0x4
    int Owner;  // 0x8
    FootClass * LinkedTo;  // 0xC
    unsigned char Powered;  // 0x10
    bool Dirty;  // 0x11
    unsigned char __pad_012;  // 0x12
    char __pad_13[1];  // 0x13
    unsigned int RefCount;  // 0x14
    unsigned int u32_18;  // 0x18
    unsigned int u32_1C;  // 0x1C
    unsigned int q020;  // 0x20
    unsigned int u32_24;  // 0x24
    unsigned int u32_28;  // 0x28
    unsigned int u32_2C;  // 0x2C
    void * ptr_30;  // 0x30
    unsigned int u32_34;  // 0x34
    unsigned int u32_38;  // 0x38
    char __pad_3C[4];  // 0x3C
    unsigned int q040;  // 0x40
    unsigned int q044;  // 0x44
    unsigned int u32_48;  // 0x48
    unsigned int u32_4C;  // 0x4C
    char __pad_50[1];  // 0x50
    unsigned char u32_51;  // 0x51
    unsigned char u32_52;  // 0x52
    char __pad_53[1];  // 0x53
    unsigned char u32_54;  // 0x54
    char __pad_55[3];  // 0x55
    unsigned int u32_58;  // 0x58
    unsigned int u32_5C;  // 0x5C
    unsigned char u32_60;  // 0x60
    unsigned char u32_61;  // 0x61
    unsigned char u32_62;  // 0x62
    unsigned char u32_63;  // 0x63
    unsigned char u32_64;  // 0x64
    unsigned char u32_65;  // 0x65
    char __pad_66[2];  // 0x66
    unsigned int u32_68;  // 0x68
    unsigned int u32_6C;  // 0x6C
    unsigned char u32_70;  // 0x70
    char __pad_71[3];  // 0x71
    unsigned int q074;  // 0x74
    unsigned char q078;  // 0x78
    char __pad_79[3];  // 0x79
    unsigned char q07C;  // 0x7C
    char __pad_7D[3];  // 0x7D
    unsigned char q080;  // 0x80
    char __pad_81[8];  // 0x81
    unsigned char q089;  // 0x89
    char __pad_8A[2];  // 0x8A
    unsigned char q08C;  // 0x8C
    char __pad_8D[3];  // 0x8D
    unsigned char q090;  // 0x90
    char __pad_91[1347];  // 0x91
    unsigned int u32_5D4;  // 0x5D4
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    LocomotionClass * ProcessMove(char a2);
    int CheckBridgeBlock();
    int GetSpeedMultiplier();
    int Initialize();
    int ProcessData();
    int Update(void *a1, void *a2, void *a3, void *a4);
    int Init(void *a1 = 0, void *a2 = 0);
    void * UpdateAll();
    int Construct(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0, void *a8 = 0, void *a9 = 0);
};

} // namespace gamemd
