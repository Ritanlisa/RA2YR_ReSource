// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct VoxClass {
// --- flat members (BEGIN) ---
    char Name;  // 0x0
    float Volume;  // 0x28
    char YuriVoice;  // 0x2C
    char RussianVoice;  // 0x35
    char AlliedVoice;  // 0x3E
    float q040;  // 0x40
    char q044;  // 0x44
    unsigned char q047;  // 0x47
    char Priority[4];  // 0x48
    char Type[4];  // 0x4C
    char voiceIndex[4];  // 0x50
// --- flat members (END) ---
    void FindAndPlay(int a2, int a3);
};

} // namespace gamemd
