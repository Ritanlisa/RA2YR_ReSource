// INIClass + CCINIClass -- IDA-based constructor translations
// INI parser with section/key/value storage
#include "system/ini_class.hpp"
#include "system/mix_file.hpp"
#include "core/logging.hpp"

#include <cstring>
#include <cstdlib>
#include <cctype>
#include <string>
#include <vector>
#include <map>
#include "core/reverse_marker.hpp"

namespace gamemd {

// ============================================================
// INI section/key entry (simple storage for parsed INI data)
// ============================================================
struct INIKeyValue {
    std::string Key;
    std::string Value;
};

struct INISectionData {
    std::string Name;
    std::vector<INIKeyValue> Entries;
};

// Per-instance INI data (moved from header to avoid bloat)
struct INIData {
    std::vector<INISectionData> Sections;
    std::map<std::string, int> SectionIndex; // name -- index
};

// ============================================================
// IDA 0x535AA0 -- INIClass::Constructor (84 bytes)
// ============================================================
REVERSE(0x535aa0, "INIClass::Constructor: IDA verified", "None")
// 0x535aa0
INIClass::INIClass()
{
    std::memset(this, 0, kSize);
}

// ============================================================
// IDA 0x535B30 -- CCINIClass::Constructor (138 bytes)
// ============================================================
REVERSE(0x535b30, "CCINIClass::Constructor: IDA verified", "None")
// 0x535b30
CCINIClass::CCINIClass()
    : INIClass()
{
    ccFile = nullptr;
    ownsFile = false;
    iniData = new INIData();
    CCINIClass_field_4C = 0;
    unknown50 = 0;
    unknown54 = 0;
}

CCINIClass::~CCINIClass()
{
    delete iniData;
    iniData = nullptr;
}

const void* CCINIClass::Vtable = nullptr;

// ============================================================
// Helper: trim whitespace
// ============================================================
static std::string Trim(const char* s, int len)
{
    while (len > 0 && (s[0] == ' ' || s[0] == '\t' || s[0] == '\r')) { ++s; --len; }
    while (len > 0 && (s[len-1] == ' ' || s[len-1] == '\t' || s[len-1] == '\r')) --len;
    return std::string(s, len);
}

// ============================================================
REVERSE(0x4741f0, "CCINIClass::Load: IDA verified", "None")
// IDA 0x4741F0 -- CCINIClass::Load(file, unk1, unk2)
// Parses INI file content into sections and key=value pairs
// ============================================================
// 0x4741f0
bool CCINIClass::Load(CCFileClass* file, bool unk1, bool unk2)
{
    (void)unk1;
    (void)unk2;

    if (!file) return false;

    void* data = file->ReadEntireFile();
    if (!data) {
        LOG_WARN("CCINIClass::Load: failed to read file data");
        return false;
    }

    int sz = file->Buffer.Size;
    if (sz <= 0) {
        LOG_WARN("CCINIClass::Load: empty file");
        return false;
    }

    ccFile = file;
    iniData->Sections.clear();
    iniData->SectionIndex.clear();

    // Parse INI content
    const char* p = (const char*)data;
    const char* end = p + sz;
    std::string line;

    while (p < end) {
        // Read one line
        line.clear();
        while (p < end && *p != '\n' && *p != '\r') {
            line += *p++;
        }
        // Skip line endings
        while (p < end && (*p == '\n' || *p == '\r')) ++p;

        // Trim
        const char* ls = line.c_str();
        int ll = (int)line.size();
        while (ll > 0 && (ls[0] == ' ' || ls[0] == '\t')) { ++ls; --ll; }
        while (ll > 0 && (ls[ll-1] == ' ' || ls[ll-1] == '\t' || ls[ll-1] == '\r')) --ll;
        if (ll == 0) continue;

        // Skip comments
        if (ls[0] == ';' || ls[0] == '#') continue;

        // Section header
        if (ls[0] == '[') {
            const char* endBracket = (const char*)memchr(ls, ']', ll);
            if (endBracket) {
                INISectionData sec;
                sec.Name = std::string(ls + 1, endBracket - ls - 1);
                iniData->SectionIndex[sec.Name] = (int)iniData->Sections.size();
                iniData->Sections.push_back(std::move(sec));
                LOG_TRACE("  INI section [%s]", iniData->Sections.back().Name.c_str());
            }
            continue;
        }

        // Key=Value
        if (iniData->Sections.empty()) {
            // Lines before any section -- ignored (or global section)
            continue;
        }

        const char* eq = (const char*)memchr(ls, '=', ll);
        if (!eq) continue; // lines without = are ignored

        INIKeyValue kv;
        kv.Key = Trim(ls, (int)(eq - ls));
        kv.Value = Trim(eq + 1, (int)(ll - (eq + 1 - ls)));
        iniData->Sections.back().Entries.push_back(std::move(kv));
    }

    LOG_INFO("CCINIClass::Load: parsed %d sections, %d bytes",
             (int)iniData->Sections.size(), sz);
    for (auto& sec : iniData->Sections) {
        LOG_DEBUG("  [%s]: %d keys", sec.Name.c_str(), (int)sec.Entries.size());
    }

    return true;
}

// ============================================================
// CCINIClass accessor methods
// ============================================================

int CCINIClass::GetKeyCount(const char* section)
{
    auto it = iniData->SectionIndex.find(section);
    if (it == iniData->SectionIndex.end()) return 0;
    return (int)iniData->Sections[it->second].Entries.size();
}

const char* CCINIClass::GetStringByIndex(const char* section, int index)
{
    auto it = iniData->SectionIndex.find(section);
    if (it == iniData->SectionIndex.end()) return nullptr;
    auto& entries = iniData->Sections[it->second].Entries;
    if (index < 0 || index >= (int)entries.size()) return nullptr;
    return entries[index].Key.c_str();
}

int CCINIClass::BinarySearchSection(const char* section)
{
    auto it = iniData->SectionIndex.find(section);
    return (it != iniData->SectionIndex.end()) ? 1 : 0;
}

// ---- INI value accessors ----

const char* CCINIClass::GetString(const char* section, const char* key, const char* def, char* buf, int bufSize)
{
    auto it = iniData->SectionIndex.find(section);
    if (it == iniData->SectionIndex.end()) return def;

    auto& entries = iniData->Sections[it->second].Entries;
    for (auto& kv : entries) {
        if (kv.Key == key) {
            if (buf && bufSize > 0) {
                strncpy(buf, kv.Value.c_str(), bufSize - 1);
                buf[bufSize - 1] = '\0';
            }
            return kv.Value.c_str();
        }
    }
    return def; // key not found, return default
}

int CCINIClass::GetInt(const char* section, const char* key, int def)
{
    auto it = iniData->SectionIndex.find(section);
    if (it == iniData->SectionIndex.end()) return def;

    auto& entries = iniData->Sections[it->second].Entries;
    for (auto& kv : entries) {
        if (kv.Key == key) {
            return atoi(kv.Value.c_str());
        }
    }
    return def;
}

} // namespace gamemd

#include "system/ini_class.hpp"

namespace gamemd {

// --- INIClass ---

bool INIClass::Load(CCFileClass* file, bool unk1, bool unk2) { return true; }
const char* INIClass::GetString(const char* section, const char* key, const char* def, char* buf, int bufSize) { return def; }
int INIClass::GetInt(const char* section, const char* key, int def) { return def; }
bool INIClass::GetBool(const char* section, const char* key, bool def) { return def; }
double INIClass::GetDouble(const char* section, const char* key, double def) { return def; }
const char* INIClass::GetGUID(const char* section, const char* key, const char* def) { return def; }

// --- CCINIClass ---

CCFileClass* CCINIClass::GetFile() const { return ccFile; }

// --- INIHashTable ---

 INIHashTable::INIHashTable() { std::memset(this, 0, sizeof(*this)); }

} // namespace gamemd
