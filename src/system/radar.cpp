#include "system/radar.hpp"
#include <cstring>

namespace gamemd {

uint16_t BlendMinimapPixel(uint16_t a1, uint16_t a2, int opacity_level)
{
    static constexpr uint16_t kGrayMask = 0x7BEF;
    switch (opacity_level)
    {
        case 0:  return a2;
        case 25: return (uint16_t)(((a2 & kGrayMask) * 3 + (a1 & kGrayMask)) / 4);
        case 50: return (uint16_t)(((a2 & kGrayMask) + (a1 & kGrayMask)) / 2);
        case 75: return (uint16_t)(((a2 & kGrayMask) + (a1 & kGrayMask) * 3) / 4);
        default: return a1;
    }
}

Point2D* ToCoordPixel(Point2D* out, const CoordStruct* coord)
{
    if (out && coord) { out->X = (int)(coord->X); out->Y = (int)(coord->Y); }
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

#include "system/radar.hpp"

namespace gamemd {

// --- RadarClass ---

void RadarClass::CreateEmptyMap(const RectangleStruct& map_rect, bool reuse, int8_t n_level, bool unk) {}
void RadarClass::SetVisibleRect(const RectangleStruct& map_rect) {}
void RadarClass::DisposeOfArt() {}
void* RadarClass::worldToScreenCoords(void* out, Point2D* point) { return nullptr; }
void RadarClass::onRadarClick(uint32_t unk) {}
void RadarClass::InitForHouse() {}

} // namespace gamemd
