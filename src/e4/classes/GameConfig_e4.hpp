// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Coord;  // fix_fwd_type_supply
struct CCINIClass;  // fix_fwd_type_supply

struct GameConfig {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    Coord * ptr_4;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    CCINIClass * q038;  // 0x38
    unsigned char q03C;  // 0x3C
    void * ptr_41;  // 0x41
    unsigned char q060;  // 0x60
    bool no_cd;  // 0xCD
    bool spawn_mode;  // 0xCE
    bool windowed;  // 0xCF
    bool enable_log;  // 0xD0
// --- flat members (END) ---
     char * Constructor();  // G57w10-S raw 0x5D67B0 char *__thiscall
    int  BuildChecksum(char * Buffer);  // 0x77E7A0
    static char * ComputeCRC();
    int ComputeHash();
};

} // namespace gamemd
