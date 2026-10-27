// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

#ifndef GAMEMD_TREE_UNIVERSE
struct AudioController {
    unsigned int AudioController_field_00;  // 0x0
    void * AudioController_field_04;  // 0x4
    void * AudioController_field_08;  // 0x8
    void * AudioController_field_0C;  // 0xC
    int __pad_010;  // 0x10
    char __pad_14[144];  // 0x14
    unsigned int u32_A4;  // 0xA4
    unsigned int u32_A8;  // 0xA8
    char __pad_AC[4];  // 0xAC
    unsigned int u32_B0;  // 0xB0
    unsigned int u32_B4;  // 0xB4
    unsigned int u32_B8;  // 0xB8
    char __pad_BC[24];  // 0xBC
    unsigned int u32_D4;  // 0xD4
    char __pad_D8[144];  // 0xD8
    unsigned int u32_168;  // 0x168
    unsigned int u32_16C;  // 0x16C
    unsigned int u32_170;  // 0x170
    unsigned int u32_174;  // 0x174
    unsigned int u32_178;  // 0x178
    char __pad_17C[84];  // 0x17C
    unsigned int u32_1D0;  // 0x1D0
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int LoadThemeBank(int a1, char * a2, signed int * a3, char * a4, signed int * a5);
    void GetVolume();
     int Init();
    int CleanupStream();  // 0x4023f0
    int UpdatePlayback();  // 0x402330
    int AdvanceQueue();  // 0x4022c0
    _DWORD * Stop();  // 0x405d40
    int * Constructor(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0);  // 0x402040
    static void Init(void * aP0);
};
#endif // GAMEMD_TREE_UNIVERSE

} // namespace gamemd
