// INIClass + CCINIClass — IDA-based constructor translations
#include "gamemd/system/ini_class.hpp"
#include "gamemd/system/mix_file.hpp"
#include "gamemd/core/logging.hpp"

#include <cstring>

namespace gamemd {

// IDA 0x7EA5F4 — INIClass vtable
// IDA 0x7E1AF4 — CCINIClass_Vtable (used by InitRules)

// ============================================================
// IDA 0x535AA0 — INIClass::Constructor (84 bytes)
// ============================================================
INIClass::INIClass()
{
    // IDA layout: this[0]=vtable, this[1-2]=head node prev/next
    // this[4-6]=second node, this[7-9]=section head, this[10]=section_count, etc.
    std::memset(this, 0, kSize);
    // vtable set by derived class (CCINIClass) or inline:
    // *this_ptr = &INIClass::`vftable';
}

// ============================================================
// IDA 0x535B30 — CCINIClass::Constructor (138 bytes)
// ============================================================
CCINIClass::CCINIClass()
    : INIClass()
{
    std::memset(&m_cc_file, 0, kSize - sizeof(INIClass));
    // IDA: *(this+64) = 0  — m_owns_file = false
    // IDA: vtable assignment handled by compiler (MSVC ctor sets vtableptr)
}

const void* CCINIClass::Vtable = nullptr; // IDA 0x7E1AF4

// ============================================================
// IDA 0x4741F0 — CCINIClass::Load(file, unk1, unk2)
// Opens a CCFileClass and parses its contents as INI
// ============================================================
bool CCINIClass::Load(CCFileClass* file, bool unk1, bool unk2)
{
    (void)unk1;
    (void)unk2;

    if (!file) return false;

    // Get file data via CCFileClass::ReadEntireFile
    void* data = file->ReadEntireFile();
    if (!data) {
        LOG_WARN("CCINIClass::Load: failed to read file data");
        return false;
    }

    int sz = 0;
    // Get file size from CCFileClass (via BufferIOFileClass::GetFileSize)
    // For now, assume data is available
    m_cc_file = file;

    // TODO: Parse INI sections/keys from file data
    // INI format: [Section]\nKey=Value\n;Comment
    // IDA's INIClass reads sections into m_head_node linked list

    LOG_INFO("CCINIClass::Load: file loaded, %p bytes pending parsing", data);
    return true;
}

// ============================================================
// CCINIClass helper methods (stubs for INI parsing)
// ============================================================

int CCINIClass::GetKeyCount(const char* section)
{
    (void)section;
    return 0; // TODO: count keys in section
}

const char* CCINIClass::GetStringByIndex(const char* section, int index)
{
    (void)section;
    (void)index;
    return nullptr; // TODO: return key at index
}

int CCINIClass::BinarySearchSection(const char* section)
{
    (void)section;
    return 0; // TODO: binary search section list
}

} // namespace gamemd
