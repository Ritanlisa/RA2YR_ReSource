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
    unsigned int __pad_0;  // 0x0
    int headNode[3];  // 0x4
    int sectionHead[3];  // 0x10
    int sectionCount;  // 0x1C
    char __pad_20[12];  // 0x20
    int SuperClass_field_0x2C;  // 0x2C
    int unknown30;  // 0x30
    char needsSave_flag[1];  // 0x34
    char __pad_35[3];  // 0x35
    unsigned int unknown38;  // 0x38
    int INIClass_field_3C;  // 0x3C
    bool ownsFile;  // 0x40
    unsigned char __pad_41[4];  // 0x41
    char padding45[3];  // 0x45
    unsigned int __pad_048;  // 0x48
    char CCINIClass_field_4C[4];  // 0x4C
    int unknown50;  // 0x50
    int unknown54;  // 0x54
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static int LoadAndVerifyDigest(void *aP1, int a2, char a3, char a4);
    AITriggerTypeClass * ReadInfantryTypeList(char * a1, int a2);
    IUnknown * WriteHouses();
    // dup-decl removed: // dup-decl removed: // dup-decl removed: MultiplayerGameMode * * Load(int a2, char a3, char a4);
    int GetDB();
    int InitFromINIEVA();
    int ReadTypeList(char * a1, CCINIClass * a2);
CCINIClass();
     MultiplayerGameMode * * Load(int a2, char a3, char a4, void *a4_1 = 0);  // load INI from file
    int  IterateNodes(int a2);  // 0x710550
    void* Constructor(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0);
    int BuildChecksum(char * Buffer);
};
#endif  // GAMEMD_E4_CCINIClass

} // namespace gamemd
