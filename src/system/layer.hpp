#pragma once

#include <cstdint>

#include "object/abstract.hpp"

namespace gamemd {

#ifndef GAMEMD_USING_ObjectClass
#define GAMEMD_USING_ObjectClass
using ra2::game::ObjectClass;
#endif

// IDA: inline struct in map.hpp
// Dynamically-resized array of ObjectClass* pointers
struct LayerClass
{
    ObjectClass**  items;    // +0x00
    int32_t        count;    // +0x04
    int32_t        capacity; // +0x08
};

} // namespace gamemd
