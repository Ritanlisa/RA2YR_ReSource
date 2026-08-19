#include "math.hpp"

namespace gamemd
{

// ── ColorStruct ────────────────────────────────────────────────────────────

bool ColorStruct::operator==(const ColorStruct& rhs) const
{
    return R == rhs.R && G == rhs.G && B == rhs.B;
}

bool ColorStruct::operator!=(const ColorStruct& rhs) const
{
    return !(*this == rhs);
}

// ── TimerStruct ────────────────────────────────────────────────────────────

bool TimerStruct::IsActive() const { return TimeLeft > 0; }

void TimerStruct::Update() { if (TimeLeft > 0) --TimeLeft; }

// ── ostream operators ──────────────────────────────────────────────────────

// design: likely inlined by compiler (no standalone symbol), no callgraph/git history reference
std::ostream& operator<<(std::ostream& os, const RectangleStruct& r)
{
    return os << "<RectangleStruct,X=" << std::dec << r.X << ",Y=" << r.Y
              << ",W=" << r.Width << ",H=" << r.Height << ">";
}

} // namespace gamemd

namespace gamemd::math
{

double Deg2Rad(double deg)
{
    return deg * Pi / 180.0;
}

double Rad2Deg(double rad)
{
    return rad * 180.0 / Pi;
}

} // namespace gamemd::math
