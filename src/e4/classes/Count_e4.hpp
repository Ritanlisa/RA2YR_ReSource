// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Count {
// --- flat members (BEGIN) ---
    char m_RefCount[4];  // 0x0
// --- flat members (END) ---
    AbstractClass * * DecrementRefCountsAudio();
    unsigned int* ddtor();
    int Get();
    int GetCountQueue();
    int SetupAllCountriesLobby();
    unsigned int * Release();
};

} // namespace gamemd
