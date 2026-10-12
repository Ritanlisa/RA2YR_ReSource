// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

#ifndef GAMEMD_G2_AudioMixer_DEF  // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_AudioMixer_DEF 1
struct AudioMixer {
// --- flat members (BEGIN) ---
    unsigned int AudioMixer_field_00;  // 0x0
    unsigned int AudioMixer_field_04;  // 0x4
    AudioMixer * ptr_8;  // 0x8
    unsigned int AudioMixer_field_0C;  // 0xC
    unsigned int AudioMixer_field_10;  // 0x10
    unsigned int AudioMixer_field_14;  // 0x14
// --- flat members (END) ---
    unsigned int ProcessAudioFrame_ph;  // w18j3: filler renamed (no offset truth; canon AudioMixer::ProcessAudioFrame is a method)
    static unsigned int ProcessAudioFrame(ObjectClass *p_this);  // x4:ida@0x4041d0
    int Init(void *a1 = 0, void *a2 = 0);
    static int PlayBuffer(unsigned int * a1, unsigned int a2);
    int PlaySample(void *a1 = 0);
    int Pump();
    static int RequestOrEndBuffer(int a1, unsigned int a2);
    int SetVolume(void *a1 = 0);
    int Shutdown(void *a1 = 0);
    unsigned int u32_18;  // 0x18 (offset-truth)
    unsigned int u32_1C;  // 0x1C (offset-truth)
    unsigned int u32_4C;  // 0x4C (offset-truth)
};
#endif  // GAMEMD_G2_AudioMixer_DEF

} // namespace gamemd
