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
    int  Write3Bytes(uint8_t * Block, char * a3, uint8_t * a4);  // 0x474C20
    int  ReadColor(int a2, uint8_t * a3, uint8_t * a4, uint8_t * a5);  // 0x474C70
    int  ReadAbilities(int a2, uint8_t * a3, uint8_t * a4, int a5);  // 0x477640
    int  Write2Integers(uint8_t * Block, char * a3, unsigned int * a4);  // 0x5297E0
    bool  Exists(uint8_t * a2, uint8_t * a3);  // 0x679F40
    int LookupByName(void *a1 = 0);  // 0x74FEF0
    int GetTechnoType(uint8_t *aP1, uint8_t *a2);  // 0x476eb0
};

} // namespace gamemd
