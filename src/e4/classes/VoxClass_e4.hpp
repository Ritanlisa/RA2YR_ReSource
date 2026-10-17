// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct VoxClass {
    int Name[10];  // 0x0
    float Volume;  // 0x28
    char YuriVoice[9];  // 0x2C
    char RussianVoice[9];  // 0x35
    char AlliedVoice[9];  // 0x3E
    unsigned char __pad_047;  // 0x47
    char Priority[4];  // 0x48
    char Type[4];  // 0x4C
    int voiceIndex;  // 0x50
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int FindAndPlay(int a3);
    int SetEVAIndex();  // 0x7534e0
};

} // namespace gamemd
