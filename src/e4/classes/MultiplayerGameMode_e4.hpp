// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct MultiplayerGameMode {
    void * GetFirst_ph;  // 0x0
    unsigned int MultiplayerGameMode_field_0x04;  // 0x4
    int u32_8;  // 0x8
    unsigned char u32_C;  // 0xC
    unsigned char u32_D;  // 0xD
    char __pad_E[2];  // 0xE
    int q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char u32_15;  // 0x15
    char __pad_16[2];  // 0x16
    int q018;  // 0x18
    unsigned int u32_1C;  // 0x1C
    char __pad_20[8];  // 0x20
    unsigned int u32_28;  // 0x28
    char __pad_2C[8];  // 0x2C
    unsigned char u8_34;  // 0x34
    char __pad_35[3];  // 0x35
    unsigned int u32_38;  // 0x38
    unsigned char u8_3C;  // 0x3C
    unsigned char u8_3D;  // 0x3D
    unsigned char u8_3E;  // 0x3E
    unsigned char u8_3F;  // 0x3F
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
