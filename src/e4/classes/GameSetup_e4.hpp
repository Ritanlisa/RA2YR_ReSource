// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct GameSetup {
// --- flat members (BEGIN) ---
    AbstractClass* q000;  // 0x0
    unsigned char q004;  // 0x4
    AbstractClass * ptr_8;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char u8_15;  // 0x15
    unsigned char u8_16;  // 0x16
    unsigned char u8_17;  // 0x17
    unsigned char q018;  // 0x18
    unsigned int FormatToString;
    unsigned int q0104;
// --- flat members (END) ---
struct AbstractClass;  // fix_fwd_type_supply
    AbstractClass * * WriteINI(CCINIClass * aP1, unsigned char * Block);
    int LookupDialogHash();
    static double FormatToString(...);  // C2597 interim stub
};

} // namespace gamemd
