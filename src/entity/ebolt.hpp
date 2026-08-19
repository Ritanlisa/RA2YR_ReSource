#pragma once

#include <cstdint>

#include "core/enums.hpp"
#include "object/abstract.hpp"

namespace gamemd {

#ifndef GAMEMD_USING_CoordStruct
#define GAMEMD_USING_CoordStruct
using ra2::game::CoordStruct;
#endif

class UnitClass : public FootClass {
public:
    // ClearOwner();
    // Fire();
    // GetSourceCoords();
    // SetOwner();
};

} // namespace gamemd

