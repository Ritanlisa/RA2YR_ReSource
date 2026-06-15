#pragma once

#include <cstdint>
#include <cstddef>

namespace gamemd
{

using int8   = std::int8_t;
using int16  = std::int16_t;
using int32  = std::int32_t;
using int64  = std::int64_t;
using uint8  = std::uint8_t;
using uint16 = std::uint16_t;
using uint32 = std::uint32_t;
using uint64 = std::uint64_t;

using byte  = uint8;
using word  = uint16;
using dword = uint32;

struct noinit_t
{
    constexpr noinit_t() = default;
};

struct ProgressTimer
{
    int32 Value;
    int32 Timer;
};

extern int& CurrentFrame;

} // namespace gamemd
