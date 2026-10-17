// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct CampaignClass;  // fix_fwd_type_supply

struct ConvertClass {
    char __pad_0[2];  // 0x0
    unsigned char ConvertClass_field_0x2[4];  // 0x2
    char __pad_6[362];  // 0x6
    CampaignClass* ConvertClass_field_0x170;  // 0x170
    unsigned int __pad_174;  // 0x174
    CampaignClass* ConvertClass_field_0x178;  // 0x178
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int ddtor(int a2, int a3, int a4, int a5, int a6, int a7, int a8);
    unsigned int * Construct(int a2, int a3, int a4, int a5, char a6, void *a6_1 = 0, void *a7 = 0, void *a8 = 0, void *a9 = 0);
     unsigned int * InitTables(void *a1 = 0, void *a2 = 0);
    ConvertClass * * sub_4880F0(int a2);
};

} // namespace gamemd
