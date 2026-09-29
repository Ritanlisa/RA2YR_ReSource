// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct AudioController {
// --- flat members (BEGIN) ---
    unsigned int AudioController_field_00;  // 0x0
    unsigned char u8_2;  // 0x2
    void* AudioController_field_04;  // 0x4
    void* AudioController_field_08;  // 0x8
    void* AudioController_field_0C;  // 0xC
    unsigned char q010;  // 0x10
// --- flat members (END) ---
    int LoadThemeBank(int a1, char * a2, signed int * a3, char * a4, signed int * a5);
    void GetVolume();
     double Init(...);  // C2597 interim stub
};

} // namespace gamemd
