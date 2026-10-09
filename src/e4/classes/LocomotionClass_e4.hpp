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
};

} // namespace gamemd
