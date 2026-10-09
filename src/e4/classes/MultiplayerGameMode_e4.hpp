// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct MultiplayerGameMode {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    unsigned char q004;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char u8_D;  // 0xD
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
// --- flat members (END) ---
    void* vt_InitializerBase;  // 0x0 (no offset truth)
    void* GetFirst_ph;  // 0x0 (no offset truth)  // w18j3: filler renamed (no offset truth; canon MultiplayerGameMode::GetFirst is a method)
    static unsigned int GetFirst(...);  // w18j3 C2597 static-call supply (w16g4 convention)
    MultiplayerGameMode * QueryInterface(char * Block, char a2);
    unsigned int * ConstructMultiplayerGameModeVectorClass(int a2, int a3, void *a3_2);
     void * Construct(const wchar_t **a2, const wchar_t **a3, const char **a4, const char **a5, char a6, int a7);  // G57w10-S raw 0x005D5B60 (was C2597 interim stub)
     int Find();  // G57w10-S raw 0x005D5F30 (was C2597 interim stub)
    static double ListGet(...);  // C2597 interim stub
     void Dtor();  // G57w10-S raw 0x005D5D20 (was C2597 interim stub)
};

} // namespace gamemd
