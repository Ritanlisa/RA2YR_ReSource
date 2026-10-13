// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Coord;  // fix_fwd_type_supply
struct CCINIClass;  // fix_fwd_type_supply

struct GameConfig {
// --- flat members (BEGIN) ---
    Coord * ptr_4;  // 0x4
    void * ptr_41;  // 0x41
    bool no_cd;  // 0xCD
    bool spawn_mode;  // 0xCE
    bool windowed;  // 0xCF
    bool enable_log;  // 0xD0
// --- flat members (END) ---
     char * Constructor(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0);
    int  BuildChecksum(char * Buffer);  // 0x77E7A0
    static char * ComputeCRC();
    int ComputeHash();

    CCINIClass * q038;  // X10 supply (member_lookup)
};

} // namespace gamemd
