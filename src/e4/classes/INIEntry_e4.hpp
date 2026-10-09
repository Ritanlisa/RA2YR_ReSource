// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

// G57c3 de-leak: this header used to include system/ini_class.hpp ("G42.55
// tree truth"), dragging the gap2 file-family chain (cc_file/cd_file/
// buffer_io_file/file_class) into every e4 TU and colliding with the e4
// flat carriers / minimal twins (C2011 INIClass/CCINIClass/RawFileClass/
// CCFileClass/FileClass/BufferIOFileClass + C2027 cascades). The INIEntry
// definition below is a verbatim copy of ini_class.hpp's (single source of
// truth for the layout; re-sync if ini_class.hpp changes). INISection/
// INILinkNode/INIData have no type-uses in src/e4 (vtable globals only).
struct INIData;  // ini_class.hpp companion fwd (kept for decl compat)

struct INIEntry {
// --- flat members (BEGIN) ---
    unsigned int Key;  // 0x0
    unsigned int Value;  // 0x4
    INIEntry* Next;  // 0x8
// --- flat members (END) ---
    int Write3Bytes(void* a1, void* a2, void* a3);  // 0x474C20
    int ReadColor(int a1, void* a2, void* a3, void* a4);  // 0x474C70
    int ReadAbilities(int a1, void* a2, void* a3, int a4);  // 0x477640
    int Write2Integers(void* a1, void* a2, void* a3);  // 0x5297E0
    bool Exists();  // 0x679F40
    int LookupByName();  // 0x74FEF0
    int GetTechnoType(unsigned __int8 *a2, unsigned __int8 *a3);  // 0x476eb0 -- INIEntry::GetTechnoType
};

} // namespace gamemd
