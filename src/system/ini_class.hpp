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
};

// Hash table for INI section lookup (used by INIClass::BinarySearchSection)
class INIHashTable {
public:
    INIHashTable();
    // TODO: hash table implementation
    uint32_t table[256];
};

} // namespace gamemd
