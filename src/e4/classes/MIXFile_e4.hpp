// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once
#ifndef GAMEMD_E4_FLAT_MIXFile
#define GAMEMD_E4_FLAT_MIXFile 1  // G57c2: suppress minimal_carriers.hpp twin
#endif

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct MixFileClass;  // fix_fwd_type_supply
struct MixFile {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
// --- flat members (END) ---
    MixFileClass * * LoadAll();  // 0x530460
    AbstractClass * * LoadSide();  // 0x534FA0
    unsigned int *  Load(void * aP1, void *a1 = 0, void *a2 = 0, void *a3 = 0);  // 0x627590
    AbstractClass * * LoadSide(void * aUimdIni);
};
} // namespace gamemd
