// GENERATED supplement for tree ALIAS types.
// CellStruct/CoordStruct/Point2D are already defined in core/math.hpp as
// `using CellStruct = Vector2D<short>` etc. Include math.hpp to use them.
// This header only adds types that math.hpp does NOT define.
#pragma once
#include "e4/classes/_fwd_e4.hpp"




namespace gamemd {

// CellCoord: tree class (misc_ext.hpp) with a virtual To_CellObj; e4 bodies
// call it static-style with (MapClass_Instance*, coord*) — interim stub.
struct CellCoord {
    void* vfptr;
    void* To_CellObj(int16_t *a2);
};

} // namespace gamemd
