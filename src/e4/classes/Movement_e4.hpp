// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Movement {
// --- flat members (BEGIN) ---
    char Movement_field_00[4];  // 0x0
    void* q004;  // 0x4
    void* q008;  // 0x8
    void* q00C;  // 0xC
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    void* q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    void* q024;  // 0x24
    unsigned int UpdateLocomotion;
// --- flat members (END) ---
    int * DivideAndStoreScaled(int * a2, int a3);
    long long CalcVelocity(void* aP0, unsigned int * a1, double a3, void* aP3, void* aP4, void* aP5, char a7, char a8, char a9);
    unsigned int * Check(unsigned int * a2, unsigned short * a3);
    static double CompareAbsCoords(...);  // C2597 interim stub
};

} // namespace gamemd
