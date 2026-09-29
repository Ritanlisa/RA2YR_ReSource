// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct CCINIClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* q004;  // 0x4
    void* q008;  // 0x8
    unsigned int q00C;  // 0xC
    unsigned int q00D;  // 0xD
    unsigned int u32_10;  // 0x10
    unsigned int q014;  // 0x14
    unsigned int u32_18;  // 0x18
    unsigned int u32_1C;  // 0x1C
    unsigned int q020;  // 0x20
    unsigned int q024;  // 0x24
    unsigned int q028;  // 0x28
    unsigned int q02C;  // 0x2C
    unsigned int q030;  // 0x30
    unsigned int q034;  // 0x34
    unsigned int q038;  // 0x38
    unsigned int q03C;  // 0x3C
    bool ownsFile;  // 0x40
    unsigned int q044;  // 0x44
    unsigned char padding45;  // 0x45
    unsigned char q048;  // 0x48
    char CCINIClass_field_4C[4];  // 0x4C
    char unknown50[4];  // 0x50
    char unknown54[4];  // 0x54
    unsigned int INIClass;
    unsigned int __pad_41;
    unsigned int v3;
    unsigned int v4;
// --- flat members (END) ---
    AITriggerTypeClass * ReadInfantryTypeList(char * a1, int a2);
    void* WriteHouses();
    MultiplayerGameMode * * Load(MultiplayerGameMode * aP1, char a3, char aP2);
    int GetDB();
    int InitFromINIEVA();
    int ReadTypeList(char * a1, CCINIClass * a2);
    CCINIClass();
    static int Load(CCINIClass* self, void* file, int a3, int a4);  // load INI from file
};

} // namespace gamemd
