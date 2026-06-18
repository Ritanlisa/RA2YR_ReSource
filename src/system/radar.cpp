#include "system/radar.hpp"
#include <cstring>

namespace gamemd {

uint16_t BlendMinimapPixel(uint16_t a1, uint16_t a2, int opacity_level)
{
    static constexpr uint16_t kGrayMask = 0x7BEF;
    switch (opacity_level)
    {
        case 0:  return a2;
        case 25: return static_cast<uint16_t>(((a2 & kGrayMask) * 3 + (a1 & kGrayMask)) / 4);
        case 50: return static_cast<uint16_t>(((a2 & kGrayMask) + (a1 & kGrayMask)) / 2);
        case 75: return static_cast<uint16_t>(((a2 & kGrayMask) + (a1 & kGrayMask) * 3) / 4);
        default: return a1;
    }
}

Point2D* ToCoordPixel(Point2D* out, const CoordStruct* coord)
{
    if (out && coord) { out->X = static_cast<int>(coord->X); out->Y = static_cast<int>(coord->Y); }
    return out;
}

int Radar_PixelIndex(int cell_x, int cell_y, int radar_width)
{
    return cell_y * radar_width + cell_x;
}

void RenderScoreboardSidebar(void*, int, int, int, int) {}
void RenderRadarToSurface(void*, const uint8_t*, int, int, int, int) {}
void LoadToSurfaceSHP(void*, const void*, int, int, int) {}

} // namespace gamemd
