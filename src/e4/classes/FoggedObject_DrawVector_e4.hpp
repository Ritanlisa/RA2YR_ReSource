// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
class Block;  // G42.36 fwd supply
struct VectorClass_flat;  // fix_fwd_type_supply

struct FoggedObject_DrawVector {
// --- flat members (BEGIN) ---
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    bool IsAllocated;  // 0xD
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
// --- flat members (END) ---
    VectorClass_flat * QueryInterface(char a2);
    unsigned char m_8[64];  // pad compile-supply (G41.47)
    unsigned char m_1[64];  // pad compile-supply (G41.47)
    VectorClass_flat * QueryInterface(unsigned int * Block, char a2);
};

} // namespace gamemd
