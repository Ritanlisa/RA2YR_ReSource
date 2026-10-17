// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Coord;  // fix_fwd_type_supply
struct CCINIClass;  // fix_fwd_type_supply

struct GameConfig {
#pragma pack(push, 1)  // X60: binary-packed layout
    unsigned char __pad_000;  // 0x0
    char __pad_1[3];  // 0x1
    Coord * ptr_4;  // 0x4
    int __pad_008;  // 0x8
    char __pad_C[32];  // 0xC
    ObjectClass* ObjectClass_2C;  // 0x2C
    char __pad_30[8];  // 0x30
    CCINIClass * q038;  // 0x38
    char __pad_3C[5];  // 0x3C
    unsigned char ptr_41;  // 0x41
    char __pad_42[3];  // 0x42
    unsigned char __pad_045;  // 0x45
    char __pad_46[135];  // 0x46
    bool no_cd;  // 0xCD
    bool spawn_mode;  // 0xCE
    bool windowed;  // 0xCF
    bool enable_log;  // 0xD0
// --- flat members (BEGIN) ---
// --- flat members (END) ---
     char * Constructor(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0);
    int  BuildChecksum(char * Buffer);  // 0x77E7A0
    static char * ComputeCRC();
    int ComputeHash();
#pragma pack(pop)
};

} // namespace gamemd
