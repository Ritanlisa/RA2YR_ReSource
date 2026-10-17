// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

#ifndef GAMEMD_TREE_UNIVERSE
struct AudioController {
    unsigned int AudioController_field_00;  // 0x0
    void* AudioController_field_04;  // 0x4
    void* AudioController_field_08;  // 0x8
    void* AudioController_field_0C;  // 0xC
    int __pad_010;  // 0x10
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int LoadThemeBank(int a1, char * a2, signed int * a3, char * a4, signed int * a5);
    void GetVolume();
     int Init();
    int CleanupStream();  // 0x4023f0
    int UpdatePlayback();  // 0x402330
    int AdvanceQueue();  // 0x4022c0
    unsigned int * Stop(void *a1 = 0, void *a2 = 0);  // 0x405d40
    int * Constructor(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0);  // 0x402040
    static void Init(void * aP0);
};
#endif // GAMEMD_TREE_UNIVERSE

} // namespace gamemd
