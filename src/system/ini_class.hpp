// INIClass + CCINIClass -- IDA-confirmed class definitions
// INIClass @ 0x535AA0: base INI parser (~0x40 bytes + vtable)
// CCINIClass @ 0x535B30: INIClass + CCFileClass integration (~0x58 bytes)
#pragma once

#include <cstdint>
#include <cstring>
#include "system/cc_file.hpp"
#include "system/ini_class.hpp"  // G42.55 closure (INIEntry)

namespace gamemd {

// Forward declarations
struct INIData;

// INI entry (key=value pair)
struct INIEntry {
    const char* Key;
    const char* Value;
    INIEntry* Next;
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int Write3Bytes(void* a1, void* a2, void* a3);  // 0x474C20
    int ReadColor(int a1, void* a2, void* a3, void* a4);  // 0x474C70
    int ReadAbilities(int a1, void* a2, void* a3, int a4);  // 0x477640
    int Write2Integers(void* a1, void* a2, void* a3);  // 0x5297E0
    bool Exists();  // 0x679F40
    int LookupByName();  // 0x74FEF0
    // --- gap2 auto-generated stub declarations (END) ---
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int GetTechnoType(uint8_t *a2, uint8_t *a3);  // 0x476eb0 -- INIEntry::GetTechnoType
    // === SYMBOL-ANCHOR (END) ===
};

// INI section
struct INISection {
    const char* Name;
    INIEntry* FirstEntry;
    INISection* Next;
};

// Linked list node for INIClass internals
struct INILinkNode {
    void* vtable;
    INILinkNode* Prev;
    INILinkNode* Next;
};

// Generic list base
// CSP: GenericList matched via T1
#ifndef GAMEMD_G2_GenericList_DEF  // G42.57w14 twin-guard (shared w/ e4 GenericList carrier; first-include wins)
#define GAMEMD_G2_GenericList_DEF 1
struct GenericList {
    void* vtable;
    unsigned int u32_4;   // g57w10 C2039 supply (ml offset 4)
    unsigned int u32_8;   // ml offset 8
    unsigned int u32_C;   // ml offset 12
    unsigned int u32_10;  // g57w10 C2039 supply (ml offset 16)
    unsigned int u32_14;  // ml offset 20
    unsigned int u32_18;  // ml offset 24
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    unsigned int * Constructor();  // 0x52ACE0  G42.34: ret sync to cache truth (unsigned int* __thiscall)
    // --- gap2 auto-generated stub declarations (END) ---
};
#endif  // GAMEMD_G2_GenericList_DEF

// IDA: INIClass @ 0x535AA0 -- size ~0x40 (64 bytes)
// vtable at 0x7EA5F4
// CSP: INIClass matched via T1
#ifndef GAMEMD_E4_INIClass  // G57w8: e4 flat carrier wins in opt-in TUs (C2011 vs INIClass_e4.hpp; CCINIClass 依赖基类一并让位)
class INIClass {
public:
    static constexpr size_t kSize = 0x40;

    INIClass();
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~INIClass() = default;

    // INI reading interface
    virtual bool Load(CCFileClass* file, bool unk1, bool unk2);
    virtual const char* GetString(const char* section, const char* key, const char* def, char* buf, int bufSize);  // 0x528A10
    virtual int GetInt(const char* section, const char* key, int def);  // 0x529820
    virtual bool GetBool(const char* section, const char* key, bool def);  // 0x4757D0
    // unmatched: no callgraph reference and no git history record
    virtual double GetDouble(const char* section, const char* key, double def);
    // unmatched: no callgraph reference and no git history record
    virtual const char* GetGUID(const char* section, const char* key, const char* def);

protected:
    // IDA layout offsets (0x00-0x3F):
    uint32_t vtableDummy;           // +0x00: vtable ptr (set by constructor)
    unsigned int headNode[3];       // +0x04: embedded list head -- INILinkNode(vtable/Prev/Next) raw-int view (G42.34: bodies index raw; no .Prev/.Next users)
    // +0x10: GenericList vtable
    // G42.34 T11: IDA til renders sectionHead as raw int view (bodies index sectionHead[0..2];
    // int* locals read it). Embedded INILinkNode form broke C2676 here + addr64_e4/addr5E_e4.
    int        sectionHead[3];       // +0x10: section list head raw-int view (was INILinkNode embed, same 12B)
    int32_t    sectionCount;         // +0x1C
    int32_t    INIClass_field_2C;            // +0x20
    int32_t    unknown30;            // +0x24
    bool       needsSave_flag;            // +0x28 (byte 52)
    uint32_t   unknown38;            // +0x2C
    uint32_t   INIClass_field_3C;            // +0x30
    int *      __pad_20;             // G42.34 T11: IDA til ptr member -- findSection truth 0x52AF00 writes *(uint*)__pad_20 = a8 and *(uint*)&__pad_20[4] = a6
    unsigned int * __pad_0;          // G42.34 T11: IDA til ptr member -- ctor bodies write *(uint*)__pad_0 = vftable and return this->__pad_0 as unsigned int* (0x478220/0x477F40/0x52AF50 truth)
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    void* loadFile(int a1);  // 0x43ADC0
    int WriteDigest(int a1, int a2);  // 0x474430
    int GetPipIdx(void* a1, void* a2, int a3);  // 0x4748A0
    int GetCoord(int a1, void* a2, void* a3, void* a4);  // 0x474B50
    int LookupEnum(void* a1, void* a2, int a3);  // 0x474DA0
    int ParseFlagList(void* a1, void* a2, int a3);  // 0x4750D0
    int SetHouseName(void* a1, void* a2, void* a3);  // 0x475610
    int SetStringByIndex(void* a1, void* a2, int a3);  // 0x475820
    int ReadStringValue(void* a1, void* a2, int a3);  // 0x4759F0
    int ReadIntList(int a1, void* a2, void* a3, void* a4, void* a5, int a6, int a7, int a8, int a9, int a10);  // 0x475D70
    int ReadExitCellList(int a1, void* a2, void* a3, void* a4, void* a5, int a6, int a7, int a8, int a9, int a10);  // 0x476020
    void* GetCoord2(void* a1, void* a2, void* a3, void* a4);  // 0x476420
    int ReadTechnoTypeList(int a1, void* a2, void* a3, void* a4, void* a5, int a6, int a7, int a8, int a9, int a10);  // 0x4764F0
    void* ReadSuperWeaponTypeList(void* a1, void* a2, void* a3, void* a4, void* a5, int a6, int a7, int a8, int a9, int a10);  // 0x4767C0
    int WriteSuperWeaponList(void* a1, void* a2, int a3, void* a4, int a5, int a6, int a7, int a8, int a9);  // 0x476A20
    int ReadRGBColorList(int a1, void* a2, void* a3, void* a4, void* a5, int a6, int a7, int a8, int a9, int a10);  // 0x476B20
    unsigned int * parseSection(unsigned int * a1);  // 0x477F40
    unsigned int * parseKeyValue(unsigned int * a1);  // 0x478220
    void* writeSection(void* a1);  // 0x4787E0
    int readSection();  // 0x48DE70
    void* ClearContents();  // 0x49E510
    int ClearSection(int a1, void* a2);  // 0x5257C0
    int LoadFile(int a1, int a2);  // 0x525A60
    int SaveToPipe(int a1);  // 0x526420
    int WriteToString(int a1);  // 0x526470
    int FindKey(void* a1);  // 0x526A30
    int ResetSection();  // 0x526B00
    void* GetStringByIndexEx(void* a1, void* a2, int a3);  // 0x526D90
    int ReadBase64Data(void* a1, int a2, int a3);  // 0x526E80
    int GetBase64Data();  // 0x526FB0
    int ReadIntList2(void* a1, void* a2);  // 0x5271C0
    int SetInt(void* a1, void* a2, int a3, int a4);  // 0x5275C0
    int SetIntFormat(void* a1, void* a2, int a3, int a4);  // 0x527640
    static int ReadInt_Overwrite(void* aP1, void* a2, void* a3, int a4);  // 0x5276D0 G57w15f3: static receiver-first per raw __thiscall (INIClass* this, u8* section, u8* key, int def)
    int ReadGUID_Overwrite(int a1, void* a2, void* a3, int a4, int a5, int a6, int a7);  // 0x527920
    int ReadDouble(void* a1, void* a2, void* a3);  // 0x527B90
    int SetRect(void* a1, void* a2, void* a3);  // 0x527C10
    int ReadFloat(void* a1, void* a2, void* a3);  // 0x527C60
    void* ParseValue(void* a1, void* a2, void* a3, void* a4);  // 0x527CC0
    void* GetRect(void* a1, void* a2, void* a3, void* a4);  // 0x527F20
    int ReadDouble3(void* a1, void* a2, int a3);  // 0x528170
    int ReadDouble2(void* a1, void* a2, int a3);  // 0x5281C0
    double ReadDouble_Overwrite(void* a1, void* a2, double a3);  // 0x5283D0
    int SetDouble(void* a1, void* a2, double a3);  // 0x5285B0
    int GetString2(void* a1, void* a2, double a3);  // 0x528600
    int SetString(void* a1, void* a2, void* a3);  // 0x528660
    int SetStringOrEmpty(void* a1, void* a2, void* a3);  // 0x5289E0
    int ReadString(void* a1, void* a2, void* a3, int a4);  // 0x528C00
    int SetWideAsHex(void* a1, void* a2, void* a3);  // 0x528E00
    int ParseValue_Wide();  // 0x528F00
    // G42.33: binary truth 0x529160 -- __thiscall GetStringEx(this, u8* section,
    // u8* key, wchar_t* out, size_t count) (CSF 查找)
    int GetStringEx(void* a1, void* a2, void* a3, unsigned int a4);  // 0x529160
    int GetCSFString();  // 0x529350
    int SetBool(void* a1, void* a2, int a3);  // 0x529560
    int ReadBool3(void* a1, void* a2, int a3);  // 0x5295A0
    static int ReadBool_Overwrite(void* aP1, void* a2, void* a3, int a4);  // 0x5295F0 G57w15f3: static receiver-first per raw __thiscall (INIClass* this, u8* section, u8* key, def)
    void* ReadPoint2D_Overwrite(void* a1, void* a2, int a3, void* a4);  // 0x529880
    void* GetCoordPair(void* a1, void* a2, void* a3, void* a4);  // 0x529A30
    int ReadCoord3(void* a1, void* a2, void* a3);  // 0x529BF0
    int ReadCoord2(void* a1, void* a2, void* a3);  // 0x529C40
    void* ReadPoint3D_Overwrite(void* a1, void* a2, int a3, void* a4);  // 0x529CA0
    int ReadBool2(void* a1, void* a2, void* a3);  // 0x52A040
    int ReadBool(void* a1, void* a2, void* a3);  // 0x52A0A0
    int ReadTimeString(void* a1, void* a2, int a3);  // 0x52A760
    int SaveTimeField(void* a1, void* a2, int a3);  // 0x52A940
    unsigned int * findSection(int a1, int a2, int a3, int a4, int a5, int a6, int a7);  // 0x52AF00  G42.34: ret sync to cache truth
    unsigned int * sectionExists();  // 0x52AF50
    void* getValue();  // 0x52B080
    int setValue(void* a1, void* a2);  // 0x52B0A0
    int deleteSection(void* a1);  // 0x52B2B0
    bool deleteKey(void* a1);  // 0x52B4D0
    int mergeSection(int a1);  // 0x52B570
    int ReadDifficultyModifiers();  // 0x66D270
    void ReadTokenizedPair(void* a1, void* a2, void* a3, int a4, void* a5);  // 0x7710B0
    // --- gap2 auto-generated stub declarations (END) ---
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    static int BinarySearchSection(void* aP1, void* a2);  // 0x526810 G57w15f3: static receiver-first per raw __thiscall (INIClass* this, uint8_t *a2)
    int GetKeyCount(int a1);  // 0x526960 -- INIClass::GetKeyCount
    int GetStringByIndex(int a1, int a2);  // 0x526cc0 -- INIClass::GetStringByIndex
    // === SYMBOL-ANCHOR (END) ===
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    int ReadCoord(int a1, int a2, int a3, int a4);  // 0x474620
    int ReadInt(int a1, int a2, int a3);  // 0x5278f0
    // === FUNCS-MOVE (END) ===

    unsigned char __pad_020;  // X10 supply (csp_canon_members)
    unsigned int q008;  // X10 supply (member_lookup)
    unsigned int q00C;  // X10 supply (member_lookup)
    unsigned int u32_14;  // X10 supply (member_lookup)
    unsigned int u32_44;  // X10 supply (member_types)
    unsigned int u32_4C;  // X10 supply (member_types)
    unsigned int u32_58;  // X10 supply (member_lookup)
    unsigned int u32_5C;  // X10 supply (member_lookup)
    unsigned int u32_60;  // X10 supply (member_lookup)
    unsigned int u32_A;  // X10 supply (member_lookup)
    unsigned char u8_1D;  // X10 supply (member_lookup)
    void* ptr_0;  // X10 supply (csp_canon_members)
};
#endif  // G57w8 INIClass


// IDA: CCINIClass @ 0x535B30 -- size ~0x58 (88 bytes)
// vtable at 0x7E1AF4 (CCINIClass_Vtable)
// Extends INIClass with CCFileClass integration
#if !defined(GAMEMD_E4_INIClass) && !defined(GAMEMD_E4_CCINIClass)  // G42.57w14: decoupled CCINIClass guard
class CCINIClass : public INIClass {
public:
    static constexpr size_t kSize = 0x58;
    static const void* Vtable;

    CCINIClass(); // 0x535B30
    virtual ~CCINIClass();

    bool Load(CCFileClass* file, bool unk1, bool unk2) override;  // 0x4741F0

    // wrapper: delegates to CCINIClass::Load at 0x4741F0
    CCFileClass* GetFile() const;

    int GetKeyCount(const char* section);
    const char* GetStringByIndex(const char* section, int index);
    int BinarySearchSection(const char* section);

    const char* GetString(const char* section, const char* key, const char* def, char* buf, int bufSize) override;  // 0x528A10
    int GetInt(const char* section, const char* key, int def) override;  // 0x529820

    // Writes the [Houses] section roster + per-house data into this INI.
    // Called by SaveScenarioToINI. NOT a constructor/destructor (verified via IDA decompile).
    void WriteHouses();  // 0x501160

protected:
    CCFileClass* ccFile;
    bool         ownsFile;
    uint8_t      padding45[3];
    union {
        INIData* iniData;
        int32_t  unknown48;
    };
    int32_t      CCINIClass_field_4C;
    int32_t      unknown50;
    int32_t      unknown54;
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int LoadAndVerifyDigest(int a1, int a2, int a3);  // 0x474320
    int LoadBuildingTypes();  // 0x672360
    int LoadTypeList();  // 0x6726D0
    int LoadUnitTypes();  // 0x672920
    int ReadBuildingSettings();  // 0x672A70
    int ProcessSection();  // 0x6E5ED0
    int IterateNodes(int a1);  // 0x710550
    int LoadTypeFromINI();  // 0x71CA70
    // --- gap2 auto-generated stub declarations (END) ---
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    int ReadTypeList(int a1, int a2);  // 0x41f2e0
    int ReadInfantryTypeList(int a1, int a2);  // 0x41f490
    // === FUNCS-MOVE (END) ===

    unsigned char __pad_041;  // X10 supply (csp_canon_members)
    void* ptr_0;  // X10 supply (csp_canon_members)


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
#endif  // G57w8 CCINIClass


// Hash table for INI section lookup (used by INIClass::BinarySearchSection)
class INIHashTable {
public:
    INIHashTable();
    // TODO: hash table implementation
    uint32_t table[256];
};

} // namespace gamemd
