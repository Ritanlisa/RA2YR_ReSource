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
    unsigned int q018;  // 0x18
    void* q01C;  // 0x1C
    unsigned int q020;  // 0x20
    void* q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned int q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q040;  // 0x40
    unsigned char q044;  // 0x44
    unsigned char q048;  // 0x48
    unsigned int u32_4C;  // 0x4C
    unsigned char q050;  // 0x50
    void* q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q05C;  // 0x5C
    unsigned char q064;  // 0x64
    unsigned char q068;  // 0x68
    unsigned char q06C;  // 0x6C
    unsigned char q080;  // 0x80
    void* q084;  // 0x84
    unsigned char q088;  // 0x88
    unsigned char q08C;  // 0x8C
    unsigned char q100;  // 0x100
    unsigned char q104;  // 0x104
    unsigned int q118;  // 0x118
    unsigned char q11C;  // 0x11C
    unsigned char q120;  // 0x120
    unsigned char q124;  // 0x124
    unsigned char q128;  // 0x128
    unsigned char q12C;  // 0x12C
    unsigned char q1D8;  // 0x1D8
    unsigned char q1DC;  // 0x1DC
    unsigned char q1E0;  // 0x1E0
    unsigned int q280;  // 0x280
    unsigned char q284;  // 0x284
    unsigned char q288;  // 0x288
    unsigned char q290;  // 0x290
    unsigned char q294;  // 0x294
    unsigned char q2BC;  // 0x2BC
    unsigned char q2C0;  // 0x2C0
    unsigned char q334;  // 0x334
    unsigned char q338;  // 0x338
    unsigned char q34C;  // 0x34C
    unsigned char q350;  // 0x350
    unsigned char q358;  // 0x358
    unsigned char q35C;  // 0x35C
    unsigned int q640;  // 0x640
    unsigned int ProcessAudioFrame;
    unsigned int customSound_controller;
    unsigned int owningHouseIndex;
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
