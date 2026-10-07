// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DynamicVector;  // fix_fwd_type_supply

struct MapFile {
    static wchar_t * LoadDescription(void *aP1, void *a2, void *a3);  // 0x69A3B0 raw: wchar_t* LoadDescription(MapFile*, uint8_t***, char*)

// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    bool IsAllocated;  // 0xD
    unsigned char q010;  // 0x10
    bool IsInitialized;  // 0x12
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned int MapFile_field_0x04;
    unsigned int MapFile_field_0x08;
    unsigned int MapFile_field_0x0C;
    unsigned int *__pad_0;
    unsigned int *m_1;
    unsigned int m_8;
    unsigned int m_C;
// --- flat members (END) ---
    DynamicVector * QueryInterface(unsigned int * Block, char a2);
    unsigned int * Constructor(int a2, int a3);
};

} // namespace gamemd
