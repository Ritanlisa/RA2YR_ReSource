#pragma once

#include <cstdint>

namespace gamemd {

// IDA: inline struct in building.hpp — gate open/close timer
struct RepeatableTimerStruct
{
    uint32_t data[4];  // +0x00..+0x0F (16 bytes)
};

} // namespace gamemd
