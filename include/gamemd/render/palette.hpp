#pragma once

#include <cstdint>

#include "core/math.hpp"
#include "fundamentals.hpp"

namespace gamemd
{

struct RGBColor
{
    uint8_t R;
    uint8_t G;
    uint8_t B;
};

struct TintStruct
{
    int32_t Red;
    int32_t Green;
    int32_t Blue;

    constexpr TintStruct() noexcept
        : Red(0), Green(0), Blue(0) // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
    }

    constexpr TintStruct(int32_t r, int32_t g, int32_t b) noexcept
        : Red(r), Green(g), Blue(b) // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
    }
};

struct HSVClass
{
    int32_t Hue;
    int32_t Saturation;
    int32_t Value;
};

} // namespace gamemd
