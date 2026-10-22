// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

#ifndef GAMEMD_G2_NetworkGameSetup_DEF  // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_NetworkGameSetup_DEF 1
struct NetworkGameSetup {
    HWND __pad_0;  // 0x0
    int q004;  // 0x4
    int q008;  // 0x8
    int q00C;  // 0xC
    int q010;  // 0x10
    int q014;  // 0x14
    int q018;  // 0x18
    int q01C;  // 0x1C
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int ReadRulesUnknown();
    unsigned int * DeleteComPtr(unsigned int * Block, char a2);
    void SendGameSetupPacket(wchar_t * Source);
};
#endif  // GAMEMD_G2_NetworkGameSetup_DEF

} // namespace gamemd
