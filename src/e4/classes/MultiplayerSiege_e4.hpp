// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct AbstractClass;  // fix_fwd_type_supply

struct MultiplayerSiege {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    char MultiplayerSiege_field_04[4];  // 0x4
    char MultiplayerSiege_field_08[4];  // 0x8
    char MultiplayerSiege_field_0C[4];  // 0xC
    char MultiplayerSiege_field_10[4];  // 0x10
    unsigned int MultiplayerSiege_field_00;
    unsigned int Debug;
    unsigned int PlayerClass;
// --- flat members (END) ---
    AbstractClass * * ProcessTurn(char a2);
    MultiplayerSiege * QueryInterface(char a2);
    char CheckStatus(int a1);
    char GetResult(unsigned int * ppv, int a2);
    char StubReturnFalse();
    short Read(void *a1, void *a2);
    int Write(void ** a1);
};

} // namespace gamemd
