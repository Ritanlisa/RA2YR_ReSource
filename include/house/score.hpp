#pragma once

#include <cstdint>

namespace gamemd {

// IDA: inline struct in house.hpp — killed/built unit type counts
struct ScoreStruct
{
    int32_t counts[512];   // +0x000
    int32_t numCounts;     // +0x800
    int32_t byteOrder;     // +0x804
};

} // namespace gamemd
