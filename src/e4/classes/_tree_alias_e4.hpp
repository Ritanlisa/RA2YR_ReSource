// GENERATED supplement for tree ALIAS types.
// CellStruct/CoordStruct/Point2D are already defined in core/math.hpp as
// `using CellStruct = Vector2D<short>` etc. Include math.hpp to use them.
// This header only adds types that math.hpp does NOT define.
#pragma once

#include "core/math.hpp"

namespace gamemd {

// CellCoord: tree class (misc_ext.hpp) with a virtual To_CellObj; e4 bodies
// call it static-style with (MapClass_Instance*, coord*) — interim stub.
struct CellCoord {
    void* vfptr;
    static void* To_CellObj(void* a1, void* a2);
};

} // namespace gamemd
