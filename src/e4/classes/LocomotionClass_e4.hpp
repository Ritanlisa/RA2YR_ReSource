// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct FootClass;  // fix_fwd_type_supply

struct LocomotionClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    unsigned int u32_8;  // 0x8
    FootClass* LinkedTo;  // 0xC
    unsigned int u32_10;  // 0x10
    bool Dirty;  // 0x11
    unsigned char u8_14;  // 0x14
    unsigned int CurrentHeight;
    unsigned int DestinationCoords;
    unsigned int DestinationReached;
    unsigned int ILocomotion;
    unsigned int IsMoving;
    unsigned int Owner;
    unsigned int Piggybackee;
    unsigned int TurnRate;
    unsigned int __pad_015;
    unsigned int *__pad_50;
    unsigned int *__pad_74;
    unsigned int *__pad_89;
    unsigned int q020;
    unsigned int q5D4;
    unsigned int u32_18;
    unsigned int u32_1C;
    unsigned int u32_2108;
    unsigned int u32_24;
    unsigned int u32_28;
    unsigned int u32_2C;
    unsigned int u32_34;
    unsigned int u32_38;
    unsigned int u32_48;
    unsigned int u32_4C;
    unsigned int u32_51;
    unsigned int u32_52;
    unsigned int u32_58;
    unsigned int u32_5C;
    unsigned int u32_60;
    unsigned int u32_61;
    unsigned int u32_62;
    unsigned int u32_63;
    unsigned int u32_64;
    unsigned int u32_65;
    unsigned int u32_68;
    unsigned int u32_6C;
    unsigned int u32_70;
    unsigned int unknown_91;
    unsigned int Powered;
    unsigned int RefCount;
    unsigned int *__pad_0;
    void* Init;  // 0x0 (no offset truth)
// --- flat members (END) ---
    LocomotionClass * ProcessMove(char a2);
    int CheckBridgeBlock();
    int GetSpeedMultiplier();
    int Initialize();
    int ProcessData();
    int Update(void *a1, void *a2, void *a3, void *a4);
    int Init();
    void * UpdateAll();
    _DWORD * Construct(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6);
};

} // namespace gamemd
