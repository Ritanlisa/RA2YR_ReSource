// INIClass + CCINIClass — IDA-confirmed class definitions
// INIClass @ 0x535AA0: base INI parser (~0x40 bytes + vtable)
// CCINIClass @ 0x535B30: INIClass + CCFileClass integration (~0x58 bytes)
#pragma once

#include <cstdint>
#include "..\system\cc_file.hpp"

namespace gamemd {

// Forward: INI section key=value entry
struct INIEntry {
    const char* Key;
    const char* Value;
    INIEntry* Next;
};

// Forward: INI section (key-value map)
struct INISection {
    const char* Name;
    INIEntry* FirstEntry;
    INISection* Next;
};

// Generic linked list node (used by INIClass internals)
// NOTE: different from mix_file.hpp's GenericNode (Node-based linked list)
struct INILinkNode {
    void* vtable;
    INILinkNode* Prev;
    INILinkNode* Next;
};

// Generic list
struct GenericList {
    void* vtable;
};

// IDA: INIClass @ 0x535AA0 — size ~0x40 (64 bytes)
// vtable at 0x7EA5F4
class INIClass {
public:
    static constexpr size_t kSize = 0x40;

    INIClass();
    virtual ~INIClass() = default;

    // INI reading interface
    virtual bool Load(CCFileClass* file, bool unk1, bool unk2) { return true; }
    virtual const char* GetString(const char* section, const char* key, const char* def, char* buf, int bufSize) { return def; }
    virtual int GetInt(const char* section, const char* key, int def) { return def; }
    virtual bool GetBool(const char* section, const char* key, bool def) { return def; }
    virtual double GetDouble(const char* section, const char* key, double def) { return def; }
    virtual const char* GetGUID(const char* section, const char* key, const char* def) { return def; }

protected:
    // IDA layout offsets (0x00-0x3F):
    uint32_t m_vtable_dummy;           // +0x00: vtable ptr (set by constructor)
    INILinkNode m_head_node;            // +0x04: head node (embedded linked list)
    // +0x10: GenericList vtable
    INILinkNode m_section_head;         // +0x1C: section list head
    int32_t    m_section_count;         // +0x28
    int32_t    m_unknown_2C;            // +0x2C
    int32_t    m_unknown_30;            // +0x30
    bool       m_dirty_flag;            // +0x34 (byte 52)
    uint32_t   m_unknown_38;            // +0x38
    uint32_t   m_unknown_3C;            // +0x3C
};

// IDA: CCINIClass @ 0x535B30 — size ~0x58 (88 bytes)
// vtable at 0x7E1AF4 (CCINIClass_Vtable)
// Extends INIClass with CCFileClass integration
class CCINIClass : public INIClass {
public:
    static constexpr size_t kSize = 0x58;
    static const void* Vtable;       // IDA 0x7E1AF4

    CCINIClass();
    virtual ~CCINIClass() = default;

    // IDA 0x4741F0 — CCINIClass::Load(file, unk1, unk2)
    bool Load(CCFileClass* file, bool unk1, bool unk2) override;

    // Accessors for InitGame pipeline
    CCFileClass* GetFile() const { return m_cc_file; }

    // vtable-based methods (IDA-confirmed names):
    int GetKeyCount(const char* section);
    const char* GetStringByIndex(const char* section, int index);
    int BinarySearchSection(const char* section);

protected:
    CCFileClass* m_cc_file;            // +0x40
    bool         m_owns_file;           // +0x44 (byte 64 from INIClass constructor: v7[64]=0)
    uint8_t      m_padding_45[3];
    int32_t      m_unknown_48;          // +0x48
    int32_t      m_unknown_4C;          // +0x4C
    int32_t      m_unknown_50;          // +0x50
    int32_t      m_unknown_54;          // +0x54
};

// Hash table for INI section lookup (used by INIClass::BinarySearchSection)
class INIHashTable {
public:
    INIHashTable() { std::memset(this, 0, sizeof(*this)); }
    // TODO: hash table implementation
    uint32_t m_table[256];
};

} // namespace gamemd
