// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct CampaignClass;  // fix_fwd_type_supply
struct CommBufferClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    AbstractClass * ptr_30;  // 0x30
// --- flat members (END) ---
    AbstractClass * * sub_48B0E0(int a2, int a3, size_t Size, int a5);  // 0x48B0E0
    void sub_48B1F0();  // 0x48B1F0

    AbstractClass* CommBufferClass_field_0x10;  // X10 supply (member_types)
    unsigned char __pad_004;  // X10 supply (csp_canon_members)
    unsigned int u32_40;  // 0x40
};
} // namespace gamemd
