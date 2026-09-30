// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct NetworkGameSetup {
// --- flat members (BEGIN) ---
    ObjectClass* q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned int u32_9;  // 0x9
    unsigned char q00C;  // 0xC
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned int NetworkGameSetup_field_0x08;
    unsigned int __pad_0;
// --- flat members (END) ---
    int ReadRulesUnknown();
    unsigned int * DeleteComPtr(unsigned int * Block, char a2);
    void SendGameSetupPacket(wchar_t * Source);
};

} // namespace gamemd
