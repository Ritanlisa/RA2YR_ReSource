// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

#ifndef GAMEMD_G2_NetworkGameSetup_DEF  // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_NetworkGameSetup_DEF 1
struct NetworkGameSetup {
    HWND __pad_0;  // 0x0
    int NetworkGameSetup_field_0x04;  // 0x4
    int q008;  // 0x8
    int NetworkGameSetup_field_0x0C;  // 0xC
    int NetworkGameSetup_field_0x10;  // 0x10
    int NetworkGameSetup_field_0x14;  // 0x14
    int NetworkGameSetup_field_0x18;  // 0x18
    int NetworkGameSetup_field_0x1C;  // 0x1C
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int ReadRulesUnknown();
    unsigned int * DeleteComPtr(unsigned int * Block, char a2);
    void SendGameSetupPacket(wchar_t * Source);
};
#endif  // GAMEMD_G2_NetworkGameSetup_DEF

} // namespace gamemd
