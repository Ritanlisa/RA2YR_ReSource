// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct LocomotionClass {
    void* ptr_0;  // 0x0
    void* ptr_4;  // 0x4
    unsigned int Owner;  // 0x8
    FootClass* LinkedTo;  // 0xC
    char Powered[1];  // 0x10
    bool Dirty;  // 0x11
    unsigned char __pad_012;  // 0x12
    char __pad_13[1];  // 0x13
    int RefCount;  // 0x14
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
