// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_flat;  // fix_fwd_type_supply

struct SmudgeTypeVector {
    unsigned char __pad_000;  // 0x0
    char __pad_1[3];  // 0x1
    int SmudgeTypeVector_field_0x04;  // 0x4
    int SmudgeTypeVector_field_0x08;  // 0x8
    int SmudgeTypeVector_field_0x0C;  // 0xC
    int SmudgeTypeVector_field_0x10;  // 0x10
    int SmudgeTypeVector_field_0x14;  // 0x14
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    VectorClass_flat * QueryInterface(unsigned int * Block, char a2);
};

} // namespace gamemd
