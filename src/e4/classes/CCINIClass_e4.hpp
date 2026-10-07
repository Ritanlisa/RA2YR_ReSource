// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once
#ifndef GAMEMD_E4_FLAT_CCINIClass
#define GAMEMD_E4_FLAT_CCINIClass 1  // G57c2: suppress minimal_carriers.hpp twin
#endif


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct AITriggerTypeClass;  // fix_fwd_type_supply
struct MultiplayerGameMode;  // fix_fwd_type_supply

#ifndef GAMEMD_E4_CCINIClass  // G42.57w14 twin-guard (decoupled from INIClass macro; first-include wins)
#define GAMEMD_E4_CCINIClass 1
struct CCINIClass {
    static int LoadAndVerifyDigest(void *aP1, int a2, char a3, char a4);  // 0x474320 raw: int LoadAndVerifyDigest(int*, int, char, char)

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
    unsigned char q048;  // 0x48
    char unknown50[4];  // 0x50
    char unknown54[4];  // 0x54
    unsigned int INIClass;
    unsigned int __pad_41;
    unsigned int v3;
    unsigned int v4;
    unsigned int *__pad_0;
    unsigned int headNode;
    unsigned int sectionHead;
// --- flat members (END) ---
    AITriggerTypeClass * ReadInfantryTypeList(char * a1, int a2);
    IUnknown * WriteHouses();
    // dup-decl removed: // dup-decl removed: // dup-decl removed: MultiplayerGameMode * * Load(int a2, char a3, char a4);
    int GetDB();
    int InitFromINIEVA();
    int ReadTypeList(char * a1, CCINIClass * a2);
CCINIClass();
     MultiplayerGameMode * * Load(int a2, char a3, char a4);  // load INI from file
    int IterateNodes(int a2);  // 0x710550
    void Constructor();
    int BuildChecksum(char * Buffer);
};
#endif  // GAMEMD_E4_CCINIClass

} // namespace gamemd
