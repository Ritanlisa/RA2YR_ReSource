// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Count {
// --- flat members (BEGIN) ---
    char m_RefCount[4];  // 0x0
    unsigned int __pad_0;
    unsigned int u32_1C;
    unsigned int u32_38;
    unsigned int u32_4;
    unsigned int u32_8;
// --- flat members (END) ---
    AbstractClass * * DecrementRefCountsAudio();
    unsigned int* ddtor(void *a1 = 0);
    int Get(void *a1 = 0, void *a2 = 0);
    int GetCountQueue(void *a1 = 0);
    int SetupAllCountriesLobby();
    unsigned int * Release(void *a1 = 0);
};

} // namespace gamemd
