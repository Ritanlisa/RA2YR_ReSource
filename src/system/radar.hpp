#pragma once

#include "object/abstract.hpp"
#include "render/display.hpp"

#include <cstdint>

namespace gamemd {

#ifndef GAMEMD_USING_CellStruct
#define GAMEMD_USING_CellStruct
using ra2::game::CellStruct;
#endif







class DisplayClass;
class GScreenClass;

class RadarClass : public DisplayClass
{
public:
    virtual ~RadarClass() = default;

    virtual void CreateEmptyMap(const RectangleStruct& map_rect, bool reuse, int8_t n_level, bool unk) {}
    virtual void SetVisibleRect(const RectangleStruct& map_rect) {}
    virtual void DisposeOfArt() {}
    virtual void* worldToScreenCoords(void* out, Point2D* point) { return nullptr; }
    virtual void onRadarClick(uint32_t unk) {}
    virtual void InitForHouse() {}

    uint32_t                    m_unknown_11E8;
    uint32_t                    m_unknown_11EC;
    uint32_t                    m_unknown_11F0;
    uint32_t                    m_unknown_11F4;
    uint32_t                    m_unknown_11F8;
    uint32_t                    m_unknown_11FC;
    uint32_t                    unknown1200;
    uint32_t                    unknown1204;
    uint32_t                    unknown1208;
    RectangleStruct             m_unknown_rect_120C;
    uint32_t                    m_unknown_121C;
    uint32_t                    unknown1220;
    CellStruct*                 unknownCells1124;
    int32_t                     unknownCellsCount;
    int32_t                     unknownCellsCapacity;
    uint32_t                    m_unknown_123C;
    uint32_t                    unknown1240;
    uint32_t                    unknown1244;
    uint32_t                    unknown1248;
    uint32_t                    m_unknown_124C;
    uint32_t                    unknown1250;
    uint32_t                    unknown1254;
    uint32_t                    unknown1258;
    Point2D*                    m_unknown_points_125C;
    int32_t                     unknownPointsCount;
    int32_t                     unknownPointsCapacity;
    uint32_t                    unknown1274;
    Point2D*                    foundationTypePixels[22];
    int32_t                     foundationTypePixelCounts[22];
    int32_t                     foundationTypePixelCapacities[22];
    float                       radarSizeFactor;
    int32_t                     m_unknown_int_148C;
    uint32_t                    unknown1490;
    uint32_t                    unknown1494;
    uint32_t                    unknown1498;
    RectangleStruct             m_unknown_rect_149C;
    uint32_t                    m_unknown_14AC;
    uint32_t                    m_unknown_14B0;
    uint32_t                    m_unknown_14B4;
    uint32_t                    m_unknown_14B8;
    bool                        m_unknown_bool_14BC;
    bool                        m_unknown_bool_14BD;
    uint32_t                    m_unknown_14C0;
    uint32_t                    m_unknown_14C4;
    uint32_t                    m_unknown_14C8;
    uint32_t                    m_unknown_14CC;
    uint32_t                    m_unknown_14D0;
    int32_t                     m_unknown_int_14D4;
    bool                        isAvailableNow;
    bool                        m_unknown_bool_14D9;
    bool                        m_unknown_bool_14DA;
    RectangleStruct             m_unknown_rect_14DC;
    uint32_t                    m_unknown_14EC;
    uint32_t                    m_unknown_14F0;
    uint32_t                    m_unknown_14F4;
    uint32_t                    m_unknown_14F8;
    uint32_t                    m_unknown_14FC;
    TimerStruct                 unknownTimer1500;

protected:
    RadarClass() = default;
};

} // namespace gamemd

