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
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* headNode;  // 0x4
    unsigned int needsSave_flag;  // 0x34
    unsigned int u32_C;  // 0xC
    unsigned int q00C;  // 0xC
    void* u32_8;  // 0x8
    int u32_4[3];  // 0x4  /* int[3] */
    bool ownsFile;  // 0x40
    unsigned char padding45;  // 0x45
    char CCINIClass_field_4C[4];  // 0x4C
int unknown50;  // 0x50 [X35-L7 kind=int]
int unknown54;  // 0x54 [X35-L7 kind=int]
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
    unsigned char __pad_41[4];  // 0x41 (ml)
    unsigned int *q000;  // 0x0 (offset-truth)
    int sectionCount;  // 0x1C (ml)
    int sectionHead[3];  // 0x10 (ml)
unsigned int unknown38;  // 0x38 [X35-L7 kind=unsigned int]

    unsigned char __pad_041;  // X10 supply (csp_canon_members)
    unsigned char u32_AC;  // 0xAC
    unsigned char u32_A8;  // 0xA8
    unsigned char u32_A5;  // 0xA5
    unsigned char q0A4;  // 0xA4
    int q0A0;  // 0xA0
    unsigned int u32_9C;  // 0x9C
    unsigned int u32_98;  // 0x98
    unsigned int q07C;  // 0x7C
    unsigned int q078;  // 0x78
    unsigned char q074;  // 0x74
    unsigned char q070;  // 0x70
    unsigned char u32_6C;  // 0x6C
    unsigned int u32_68;  // 0x68
    unsigned int u32_62;  // 0x62
    unsigned int q060;  // 0x60
    int __pad_008;  // 0x8 [X30:type_map]
unsigned int __pad_038;  // 0x38 [X35-L7 kind=unsigned int]
    unsigned char __pad_048;  // 0x48 [X30:canon]
    unsigned int BufferCursor;  // [X30:default]
    unsigned int BufferOffset;  // [X30:default]
    unsigned int BufferPosition;  // [X30:default]
    unsigned int BufferSize;  // [X30:default]
    unsigned int FileBaseOffset;  // [X30:default]
    unsigned int FileID;  // [X30:default]
    unsigned int FileSize;  // [X30:default]
    int INIClass_field_3C;  // 0x3C [X30:type_map]
    unsigned int MixFileIndex;  // [X30:default]
    unsigned int StreamSize;  // [X30:default]
    int SuperClass_field_0x2C;  // 0x2C [X30:type_map]
    unsigned int TotalBytesWritten;  // [X30:default]
    unsigned int houseTypes;  // [X30:default]
    unsigned int houseTypesCount;  // [X30:default]
    unsigned int u8_6D;  // 0x6D [X30:default]
    unsigned int u8_6E;  // 0x6E [X30:default]
    unsigned int u8_6F;  // 0x6F [X30:default]


    unsigned int __pad_0;  // 0x0 [X55 W3 supply (render vocab)]
    unsigned int u32_C8;  // 0xC8 [X55 W3 supply (render vocab)]
    unsigned int u32_C4;  // 0xC4 [X55 W3 supply (render vocab)]
    unsigned int u32_A0;  // 0xA0 [X55 W3 supply (render vocab)]
    unsigned int u32_C0;  // 0xC0 [X55 W3 supply (render vocab)]
    unsigned char u8_A5;  // 0xA5 [X55 W3 supply (render vocab)]
    unsigned char u8_A6;  // 0xA6 [X55 W3 supply (render vocab)]
    unsigned int q0A8;  // 0xA8 [X55 W3 supply (render vocab)]
    unsigned char u8_A9;  // 0xA9 [X55 W3 supply (render vocab)]
    unsigned char u8_AB;  // 0xAB [X55 W3 supply (render vocab)]
    unsigned int q0B0;  // 0xB0 [X55 W3 supply (render vocab)]
    unsigned char u8_B1;  // 0xB1 [X55 W3 supply (render vocab)]
    unsigned int q0AC;  // 0xAC [X55 W3 supply (render vocab)]
};
#endif  // GAMEMD_E4_CCINIClass

} // namespace gamemd
