// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct AudioMixer {
// --- flat members (BEGIN) ---
    unsigned int AudioMixer_field_00;  // 0x0
    unsigned int AudioMixer_field_04;  // 0x4
    AudioMixer * ptr_8;  // 0x8
    unsigned int AudioMixer_field_0C;  // 0xC
    unsigned int AudioMixer_field_10;  // 0x10
    unsigned int AudioMixer_field_14;  // 0x14
    unsigned int AudioMixer_field_08;
    unsigned int ProcessAudioFrame;
    unsigned int u32_18;
    unsigned int u32_1C;
    unsigned int u32_4C;
// --- flat members (END) ---
    int Init();
    int PlayBuffer(unsigned int * a1, unsigned int a2);
    int PlaySample();
    int Pump();
    int RequestOrEndBuffer(int a1, unsigned int a2);
    int SetVolume();
    int Shutdown();
};

} // namespace gamemd
