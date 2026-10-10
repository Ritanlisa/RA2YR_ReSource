// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Coord3D {
// --- flat members (BEGIN) ---

// --- flat members (END) ---
unsigned int * Set(int aP1, int aP2, int a4);
    unsigned char __pad_0[4];  // 0x0 (W13A til Coord3D size 12)
    int Coord3D_field_0x04;  // 0x4 (W13A til Coord3D)
    static double Coord3D_field_0x08(...);  // plateau: C2039/C3861 stub
};

} // namespace gamemd
