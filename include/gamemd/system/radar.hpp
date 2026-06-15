#pragma once

#include "..\object\abstract.hpp"
#include "..\render\display.hpp"

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
    virtual void* vt_entry_CC(void* out, Point2D* point) { return nullptr; }
    virtual void vt_entry_D0(uint32_t unk) {}
    virtual void InitForHouse() {}

    uint32_t                    radarDisplayParams[9];     // +0x11E8 to +0x1208
    RectangleStruct             radarClipRect;             // +0x120C
    uint32_t                    radarZoomFactorX;          // +0x121C
    uint32_t                    radarZoomFactorY;          // +0x1220
    CellStruct*                 radarTrackedCells;         // +0x1224
    int32_t                     radarTrackedCellCount;
    int32_t                     radarTrackedCellCapacity;
    uint32_t                    radarRenderState[8];       // +0x123C to +0x1258
    Point2D*                    radarDrawPoints;           // +0x125C
    int32_t                     radarDrawPointCount;
    int32_t                     radarDrawPointCapacity;
    uint32_t                    radarRedrawFlag;           // +0x1274
    Point2D*                    m_foundation_type_pixels[22];
    int32_t                     m_foundation_type_pixel_counts[22];
    int32_t                     m_foundation_type_pixel_capacities[22];
    float                       m_radar_size_factor;
    int32_t                     radarEventCounter;         // +0x148C
    uint32_t                    radarEventParam0;          // +0x1490
    uint32_t                    radarEventParam1;          // +0x1494
    uint32_t                    radarEventParam2;          // +0x1498
    RectangleStruct             radarEventRect;            // +0x149C
    uint32_t                    radarTimerState0;          // +0x14AC
    uint32_t                    radarTimerState1;          // +0x14B0
    uint32_t                    radarTimerState2;          // +0x14B4
    uint32_t                    radarTimerState3;          // +0x14B8
    bool                        radarEventFlag0;           // +0x14BC
    bool                        radarEventFlag1;           // +0x14BD
    uint32_t                    radarColorValue1;          // +0x14C0
    uint32_t                    radarColorValue2;          // +0x14C4
    uint32_t                    radarColorValue3;          // +0x14C8
    uint32_t                    radarColorValue4;          // +0x14CC
    uint32_t                    radarColorValue5;          // +0x14D0
    int32_t                     radarRefreshCounter;       // +0x14D4
    bool                        radarVisibleFlag;          // +0x14D9
    bool                        radarInitializedFlag;      // +0x14DA
    RectangleStruct             radarInvalidRect;          // +0x14DC
    uint32_t                    radarPixelBuffer1;         // +0x14EC
    uint32_t                    radarPixelBuffer2;         // +0x14F0
    uint32_t                    radarPixelBuffer3;         // +0x14F4
    uint32_t                    radarPixelBuffer4;         // +0x14F8
    uint32_t                    radarPixelBuffer5;         // +0x14FC
    TimerStruct                 radarRefreshTimer;         // +0x1500

protected:
    RadarClass() = default;
};

} // namespace gamemd

