// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Map {
// --- flat members (BEGIN) ---
    int Width;  // 0x4
    int Height;  // 0x8
    char* Name;  // 0xC
    char* Description;  // 0x10
    unsigned int* CellData;  // 0x14
    int MaxPlayers;  // 0x18
    bool AllowNaval;  // 0x1C
    int refcount;  // 0x20
// --- flat members (END) ---
    static int CanScroll(void *a1);  // [w14e3] raw 0x4F28B0 BOOL __thiscall Map::CanScroll
    unsigned int IsCellFlag(int a1);
    unsigned char m_1[64];  // pad compile-supply (G41.47)
    unsigned char __pad_000;  // 0x0 [X30:canon]
    unsigned char __pad_01D;  // 0x1D [X30:canon]
};

} // namespace gamemd
