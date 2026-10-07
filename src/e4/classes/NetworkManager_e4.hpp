// G57w10 r5 D-classbody supply: NetworkManager (raw 0x6646C0; cast-of-qualified-name site form)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct NetworkManager {
    unsigned char q000[8];  // 0x0 (carrier filler)
    static char RemovePlayer(int aP1, int a2);  // 0x6646C0 raw: char __thiscall NetworkManager::RemovePlayer(int this, int a2) -- site fn-ptr cast (void(*)(int))
};
} // namespace gamemd
