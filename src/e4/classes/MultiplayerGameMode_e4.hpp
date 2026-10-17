// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct MultiplayerGameMode {
    void* GetFirst_ph;  // 0x0
    unsigned int __pad_004;  // 0x4
    int MultiplayerGameMode_field_0x08;  // 0x8
    int MultiplayerGameMode_field_0x0C;  // 0xC
    int MultiplayerGameMode_field_0x10;  // 0x10
    int MultiplayerGameMode_field_0x14;  // 0x14
    int MultiplayerGameMode_field_0x18;  // 0x18
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static unsigned int GetFirst();  // x4:empty@0x5d5e10
    MultiplayerGameMode * QueryInterface(char * Block, char a2);
    static unsigned int * ConstructMultiplayerGameModeVectorClass(int a2, int a3, void *a3_2);
     void * Construct(const wchar_t **a2, const wchar_t **a3, const char **a4, const char **a5, char a6, int a7, void *a1 = 0, void *a8 = 0, void *a9 = 0);
     int Find(void *a1 = 0, void *a2 = 0);
     void Dtor(void *a1 = 0);
};

} // namespace gamemd
