#include "math.hpp"

namespace gamemd
{

// ============================================================================
// ColorStruct — non-template out-of-line definitions
// ============================================================================

ColorStruct::ColorStruct(std::uint8_t r, std::uint8_t g, std::uint8_t b) noexcept
    : R(r), G(g), B(b) {}

bool ColorStruct::operator==(const ColorStruct& rhs) const
{
    return R == rhs.R && G == rhs.G && B == rhs.B;
}

bool ColorStruct::operator!=(const ColorStruct& rhs) const
{
    return !(*this == rhs);
}

// ============================================================================
// TimerStruct — non-template out-of-line definitions
// ============================================================================

TimerStruct::TimerStruct(int duration) noexcept
    : StartTime(-1), __padding(0), TimeLeft(duration) {}

bool TimerStruct::IsActive() const
{
    return TimeLeft > 0;
}

void TimerStruct::Update()
{
    if (TimeLeft > 0)
        --TimeLeft;
}

// ============================================================================
// ostream operators (non-template)
// ============================================================================

std::ostream& operator<<(std::ostream& os, const RectangleStruct& r)
{
    return os << "<RectangleStruct,X=" << std::dec << r.X << ",Y=" << r.Y
              << ",W=" << r.Width << ",H=" << r.Height << ">";
}

} // namespace gamemd

namespace gamemd::math
{

// ============================================================================
// math constants and functions
// ============================================================================

double Deg2Rad(double deg) noexcept
{
    return deg * Pi / 180.0;
}

double Rad2Deg(double rad) noexcept
{
    return rad * 180.0 / Pi;
}

} // namespace gamemd::math
