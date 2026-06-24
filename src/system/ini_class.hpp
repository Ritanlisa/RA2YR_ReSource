// INIClass + CCINIClass -- IDA-confirmed class definitions
// INIClass @ 0x535AA0: base INI parser (~0x40 bytes + vtable)
// CCINIClass @ 0x535B30: INIClass + CCFileClass integration (~0x58 bytes)
#pragma once

#include <cstdint>
#include <cstring>
#include "system/cc_file.hpp"

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
struct GenericList {
    void* vtable;
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    void* Constructor();  // 0x52ACE0
    // --- gap2 auto-generated stub declarations (END) ---
};

// IDA: INIClass @ 0x535AA0 -- size ~0x40 (64 bytes)
// vtable at 0x7EA5F4
class INIClass {
public:
    static constexpr size_t kSize = 0x40;

    INIClass();
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~INIClass() = default;

    // INI reading interface
    virtual bool Load(CCFileClass* file, bool unk1, bool unk2);  // 0x4741F0
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
    INILinkNode headNode;            // +0x04: head node (embedded linked list)
    // +0x10: GenericList vtable
    INILinkNode sectionHead;         // +0x1C: section list head
    int32_t    sectionCount;         // +0x28
    int32_t    INIClass_field_2C;            // +0x2C
    int32_t    unknown30;            // +0x30
    bool       needsSave_flag;            // +0x34 (byte 52)
    uint32_t   unknown38;            // +0x38
    uint32_t   INIClass_field_3C;            // +0x3C
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
    void* parseSection(void* a1);  // 0x477F40
    void* parseKeyValue(void* a1);  // 0x478220
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
    int ReadInt_Overwrite(void* a1, void* a2, int a3);  // 0x5276D0
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
    int GetStringEx();  // 0x529160
    int GetCSFString();  // 0x529350
    int SetBool(void* a1, void* a2, int a3);  // 0x529560
    int ReadBool3(void* a1, void* a2, int a3);  // 0x5295A0
    int ReadBool_Overwrite(void* a1, void* a2, int a3);  // 0x5295F0
    void* ReadPoint2D_Overwrite(void* a1, void* a2, int a3, void* a4);  // 0x529880
    void* GetCoordPair(void* a1, void* a2, void* a3, void* a4);  // 0x529A30
    int ReadCoord3(void* a1, void* a2, void* a3);  // 0x529BF0
    int ReadCoord2(void* a1, void* a2, void* a3);  // 0x529C40
    void* ReadPoint3D_Overwrite(void* a1, void* a2, int a3, void* a4);  // 0x529CA0
    int ReadBool2(void* a1, void* a2, void* a3);  // 0x52A040
    int ReadBool(void* a1, void* a2, void* a3);  // 0x52A0A0
    int ReadTimeString(void* a1, void* a2, int a3);  // 0x52A760
    int SaveTimeField(void* a1, void* a2, int a3);  // 0x52A940
    void* findSection(int a1, int a2, int a3, int a4, int a5, int a6, int a7);  // 0x52AF00
    void* sectionExists();  // 0x52AF50
    void* getValue();  // 0x52B080
    int setValue(void* a1, void* a2);  // 0x52B0A0
    int deleteSection(void* a1);  // 0x52B2B0
    bool deleteKey(void* a1);  // 0x52B4D0
    int mergeSection(int a1);  // 0x52B570
    int ReadDifficultyModifiers();  // 0x66D270
    void ReadTokenizedPair(void* a1, void* a2, void* a3, int a4, void* a5);  // 0x7710B0
    // --- gap2 auto-generated stub declarations (END) ---
};

// IDA: CCINIClass @ 0x535B30 -- size ~0x58 (88 bytes)
// vtable at 0x7E1AF4 (CCINIClass_Vtable)
// Extends INIClass with CCFileClass integration
class CCINIClass : public INIClass {
public:
    static constexpr size_t kSize = 0x58;
    static const void* Vtable;

    CCINIClass(); // 0x535B30
    virtual ~CCINIClass(); // 0x501160

    bool Load(CCFileClass* file, bool unk1, bool unk2) override;  // 0x4741F0

    // wrapper: delegates to CCINIClass::Load at 0x4741F0
    CCFileClass* GetFile() const;

    int GetKeyCount(const char* section);
    const char* GetStringByIndex(const char* section, int index);
    int BinarySearchSection(const char* section);

    const char* GetString(const char* section, const char* key, const char* def, char* buf, int bufSize) override;  // 0x528A10
    int GetInt(const char* section, const char* key, int def) override;  // 0x529820

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
};

// Hash table for INI section lookup (used by INIClass::BinarySearchSection)
class INIHashTable {
public:
    INIHashTable();
    // TODO: hash table implementation
    uint32_t table[256];
};

} // namespace gamemd
