// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct MultiplayerSiege {
    int32_t MultiplayerSiege_field_00;  // 0x0
    int MultiplayerSiege_field_04;  // 0x4
    int MultiplayerSiege_field_08;  // 0x8
    char MultiplayerSiege_field_0C[4];  // 0xC
    int MultiplayerSiege_field_10;  // 0x10
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    AbstractClass * * ProcessTurn(char a2);
    MultiplayerSiege * QueryInterface(char a2);
    char CheckStatus(int a1);
    char GetResult(unsigned int * ppv, int a2);
    char StubReturnFalse();
    short Read(void *a1, void *a2, void *a3 = 0);
    int Write(void ** a1);
};

} // namespace gamemd
