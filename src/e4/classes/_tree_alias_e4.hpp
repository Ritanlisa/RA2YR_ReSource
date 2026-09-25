// GENERATED supplement for tree ALIAS types (fixed semantics, hand-maintained).
// math.hpp defines these as template aliases (`using CellStruct =
// Vector2D<short>`); e4 TUs never see math.hpp, so the e4 universe carries
// equivalent plain structs. Member layout matches the alias semantics.
// Hooked via explicit includes in e4 cpps (see gen_tree_full_e4.py).
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct CellStruct {
    short x;
    short y;
};

struct CoordStruct {
    int x;
    int y;
    int z;
};

struct Point2D {
    int x;
    int y;
};

// CellCoord: tree class (misc_ext.hpp) with a virtual To_CellObj; e4 bodies
// call it static-style with (MapClass_Instance*, coord*) — interim stub.
struct CellCoord {
    void* vfptr;
    static void* To_CellObj(void* a1, void* a2);
};

} // namespace gamemd
