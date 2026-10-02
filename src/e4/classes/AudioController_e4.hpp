// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

#ifndef GAMEMD_TREE_UNIVERSE
struct AudioController {
// --- flat members (BEGIN) ---
    unsigned int AudioController_field_00;  // 0x0
    unsigned char u8_2;  // 0x2
    void* AudioController_field_04;  // 0x4
    void* AudioController_field_08;  // 0x8
    void* AudioController_field_0C;  // 0xC
    unsigned char q010;  // 0x10
    unsigned int *__pad_10;
    unsigned int __pad_94;
// --- flat members (END) ---
    int LoadThemeBank(int a1, char * a2, signed int * a3, char * a4, signed int * a5);
    void GetVolume();
     double Init(...);  // C2597 interim stub
    int CleanupStream();  // 0x4023f0
    int UpdatePlayback();  // 0x402330
    int AdvanceQueue();  // 0x4022c0
    unsigned int * Stop();  // 0x405d40
    int * Constructor();  // 0x402040
};
#endif // GAMEMD_TREE_UNIVERSE

} // namespace gamemd
