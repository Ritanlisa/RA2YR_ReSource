// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ConvertClass;  // fix_fwd_type_supply
struct MapClass;  // fix_fwd_type_supply

struct LightConvertClass {
    char ptr_0[1];  // 0x0
    char field_1[4];  // 0x1
    char __pad_5[387];  // 0x5
    int field_188;  // 0x188
    int field_18C;  // 0x18C
    char __pad_190[8];  // 0x190
    int field_198;  // 0x198
    int field_19C;  // 0x19C
    char __pad_1A0[4];  // 0x1A0
    int field_1A4;  // 0x1A4
    int field_1A8;  // 0x1A8
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int SelectRLEBlitter(int aP1);  // G57w10-S raw 0x00490E50 IUnknown 占位清除
     int Constructor(int a2, int a3, int a4, int a5, int a6, int a7, char a8, int a9, int a10);
    LightConvertClass * sub_556520(unsigned int * Block, char a2);
};

} // namespace gamemd
