// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

#ifndef GAMEMD_G2_NetworkGameSetup_DEF  // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_NetworkGameSetup_DEF 1
struct NetworkGameSetup {
// --- flat members (BEGIN) ---

// --- flat members (END) ---
    int ReadRulesUnknown();
    unsigned int * DeleteComPtr(unsigned int * Block, char a2);
    void SendGameSetupPacket(wchar_t * Source);

    int q008;  // X10 supply (member_lookup)

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
};
#endif  // GAMEMD_G2_NetworkGameSetup_DEF

} // namespace gamemd
