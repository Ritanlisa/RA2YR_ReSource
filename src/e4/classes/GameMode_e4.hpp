// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct GameMode_e4 {
// --- flat members (BEGIN) ---
    unsigned int u32_18;  // 0x18
    unsigned int q024;  // 0x24
    unsigned int q054;  // 0x54
    unsigned int u32_FC;  // 0xFC
// --- flat members (END) ---
    int  IsValid(unsigned int a2);  // 0x5D5DE0
    unsigned int  ReadFlagsFromINI(unsigned int * a2);  // 0x6B8CA0
    unsigned int ReadFlagsFromINI(CCINIClass * aP1, void * aDestroyablebri, void * aFixedalliance, void * aHarvesterimmun, void * aInert, void * aInitialveteran, void * aIonstorms, void * aMcvdeploy, void * aMeteorites, void * aTiberiumspread, void * aVisceroids);

    unsigned int u32_3F;  // X10 supply (member_lookup)
};
} // namespace gamemd
