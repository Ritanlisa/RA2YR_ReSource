// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply

struct FoggedObject_DrawVector {
// --- flat members (BEGIN) ---
    bool IsAllocated;  // 0xD
// --- flat members (END) ---
    VectorClass_flat * QueryInterface(char a2);
    unsigned char m_8[64];  // pad compile-supply (G41.47)
    unsigned char m_1[64];  // pad compile-supply (G41.47)
    VectorClass_flat * QueryInterface(unsigned int * Block, char a2);
    char __pad_0[4];  // 0x0 (G57W14E1 til supply)
};

} // namespace gamemd
