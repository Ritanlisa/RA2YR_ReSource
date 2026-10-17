// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Map {
    unsigned char __pad_000;  // 0x0
    char __pad_1[3];  // 0x1
    int Width;  // 0x4
    int Height;  // 0x8
    char* Name;  // 0xC
    char* Description;  // 0x10
    unsigned int* CellData;  // 0x14
    int MaxPlayers;  // 0x18
    bool AllowNaval;  // 0x1C
    char __pad_01D[3];  // 0x1D
    int refcount;  // 0x20
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static int CanScroll(void *a1);  // [w14e3] raw 0x4F28B0 BOOL __thiscall Map::CanScroll
    unsigned int IsCellFlag(int a1);
};

} // namespace gamemd
