// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ScoreScreen {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    bool q00B;  // 0xB
    unsigned char q00C;  // 0xC
    unsigned int q00D;  // 0xD
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned int ScoreScreen_field_0x04;
    unsigned int ScoreScreen_field_0x08;
    unsigned int ScoreScreen_field_0x0C;
    unsigned int ScoreScreen_field_0x10;
    unsigned int ScoreScreen_field_0x14;
    unsigned int ScoreScreen_field_0x18;
    unsigned int *__pad_0;
    unsigned int Audio;
    unsigned int Debug;
    unsigned int Timer;
// --- flat members (END) ---
    unsigned int * Constructor(int aP1, int a3, int a4);
    unsigned int * LoadCountryFlags(int a2);
    unsigned int * LoadScoreFont(int aP1);
    int RemoveItem(int a2, int a3, char aP3, char a5, int a6);
    static double DrawSHPBackground(...);  // C2597 interim stub
    static double LoadAudio(...);  // C2597 interim stub
};

} // namespace gamemd
