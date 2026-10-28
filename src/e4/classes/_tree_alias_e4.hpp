// GENERATED supplement for tree ALIAS types.
// CellStruct/CoordStruct/Point2D are already defined in core/math.hpp as
// `using CellStruct = Vector2D<short>` etc. Include math.hpp to use them.
// This header only adds types that math.hpp does NOT define.
#pragma once
#include "e4/classes/_fwd_e4.hpp"
// CellCoord: single authority is core/cellcoord.hpp (X181A: layout + the real
// member To_CellObj; the old e4 twin struct is removed so TUs pulling both
// headers no longer clash on the class name).  Must stay OUTSIDE namespace
// gamemd -- the header opens its own.
#include "core/cellcoord.hpp"




namespace gamemd {

} // namespace gamemd
