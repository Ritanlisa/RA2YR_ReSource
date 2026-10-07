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
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned int MultiplayerGameMode_field_0x04;
    unsigned int MultiplayerGameMode_field_0x08;
    unsigned int MultiplayerGameMode_field_0x0C;
    unsigned int MultiplayerGameMode_field_0x10;
    unsigned int MultiplayerGameMode_field_0x14;
    unsigned int MultiplayerGameMode_field_0x18;
    unsigned int *__pad_0;
    unsigned int q0104;
    unsigned int u32_38;
    void* vt_InitializerBase;  // 0x0 (no offset truth)
    void* GetFirst;  // 0x0 (no offset truth)
// --- flat members (END) ---
    MultiplayerGameMode * QueryInterface(char * Block, char a2);
    unsigned int * ConstructMultiplayerGameModeVectorClass(int a2, int a3, void *a3_2);
     void * Construct(const wchar_t **a2, const wchar_t **a3, const char **a4, const char **a5, char a6, int a7);  // G57w10-S raw 0x005D5B60 (was C2597 interim stub)
     int Find();  // G57w10-S raw 0x005D5F30 (was C2597 interim stub)
    static double ListGet(...);  // C2597 interim stub
     void Dtor();  // G57w10-S raw 0x005D5D20 (was C2597 interim stub)
};

} // namespace gamemd
