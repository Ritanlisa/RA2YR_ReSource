#pragma once

#include "..\object\abstract.hpp"

#include <cstdint>

namespace gamemd {

#ifndef GAMEMD_USING_AbstractClass
#define GAMEMD_USING_AbstractClass
using ra2::game::AbstractClass;
#endif
#ifndef GAMEMD_USING_AbstractType
#define GAMEMD_USING_AbstractType
using ra2::game::AbstractType;
#endif
#ifndef GAMEMD_USING_CoordStruct
#define GAMEMD_USING_CoordStruct
using ra2::game::CoordStruct;
#endif
#ifndef GAMEMD_USING_Point2D
#define GAMEMD_USING_Point2D
using ra2::game::Point2D;
#endif
#ifndef GAMEMD_USING_CellStruct
#define GAMEMD_USING_CellStruct
using ra2::game::CellStruct;
#endif
#ifndef GAMEMD_USING_RectangleStruct
#define GAMEMD_USING_RectangleStruct
using ra2::game::RectangleStruct;
#endif









class CellClass;
struct ColorScheme;

class TacticalClass : public AbstractClass
{
public:
    static constexpr AbstractType kAbsDeriveID = AbstractType::TacticalMap;

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override { return 0; }
    virtual HRESULT __stdcall Load(IStream* stream) override { return 0; }
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override { return 0; }

    virtual ~TacticalClass() = default;

    virtual AbstractType __stdcall WhatAmI() const override { return AbstractType::TacticalMap; }
    virtual int Size() const override { return 0; }

    bool CoordsToClient(const CoordStruct& coords, Point2D* out_client) const;
    CoordStruct* ClientToCoords(CoordStruct* out, const Point2D& client) const;
    CoordStruct ClientToCoords(const Point2D& client) const
    {
        CoordStruct buf;
        ClientToCoords(&buf, client);
        return buf;
    }

    int GetOcclusion(const CellStruct& cell, bool fog) const;
    Point2D* AdjustForZShapeMove(Point2D* dest, Point2D* client);
    static int AdjustForZ(int height);

    void FocusOn(CoordStruct* dest, int velocity);
    void RegisterDirtyArea(RectangleStruct area, bool unk);
    void RegisterCellAsVisible(CellClass* cell);
    static int DrawTimer(int index, ColorScheme* scheme, int time, const wchar_t* text, const Point2D* xy1, const Point2D* xy2);
    bool AddToDrawQueue(void* object, int x, int y);    // IDA: 0x6D9EF0
    bool InitViewBounds(const int rect[2]);              // IDA: 0x4AC310

    // Scroll state — two 16-bit values packed in uint32_t at +0x24 (IDA: this+36/38)
    uint32_t        scrollVelocityPacked; // LO: velocityX, HI: velocityY
    uint32_t        scrollAccumPacked;    // +0x28
    uint32_t        scrollDeltaX;         // +0x2C
    uint32_t        scrollDeltaY;         // +0x30
    void*           lightingSurface;      // +0x34 (IDA: this+52), CreateSurfaceClassPrimary
    uint32_t        lightSurfaceField1;   // +0x38
    uint32_t        lightSurfaceField2;   // +0x3C
    uint32_t        lightSurfaceField3;   // +0x40
    uint32_t        lightSurfaceField4;   // +0x44
    uint32_t        viewportWidth;        // +0x48
    uint32_t        viewportHeight;       // +0x4C
    uint32_t        viewportX;            // +0x50
    uint32_t        viewportY;            // +0x54
    uint32_t        viewportCellCountX;   // +0x58
    uint32_t        viewportCellCountY;   // +0x5C
    uint32_t        viewportCellOriginX;  // +0x60
    uint32_t        viewportCellOriginY;  // +0x64
    uint32_t        scrollBorderField1;   // +0x68
    uint32_t        scrollBorderField2;   // +0x6C
    uint32_t        scrollBorderField3;   // +0x70
    uint32_t        scrollBorderField4;   // +0x74
    uint32_t        scrollBorderField5;   // +0x78
    uint32_t        scrollBorderField6;   // +0x7C
    uint32_t        scrollBorderField7;   // +0x80
    uint32_t        scrollBorderField8;   // +0x84
    uint32_t        scrollBorderField9;   // +0x88
    uint32_t        scrollBorderField10;  // +0x8C
    uint32_t        scrollBorderField11;  // +0x90
    uint32_t        scrollBorderField12;  // +0x94
    uint32_t        scrollBorderField13;  // +0x98
    uint32_t        scrollBorderField14;  // +0x9C
    uint32_t        scrollBorderField15;  // +0xA0
    uint32_t        scrollBorderField16;  // +0xA4
    uint32_t        scrollBorderField17;  // +0xA8
    bool            scrollAutoEnabled;    // +0xAC
    bool            scrollAutoAccum;      // +0xAD
    RectangleStruct m_visible_area;
    double          m_zoom_in_factor;
    uint32_t        followTargetOffsetX;  // +0xC8
    uint32_t        followTargetOffsetY;  // +0xCC
    uint32_t        followTargetField1;   // +0xD0
    uint32_t        followTargetField2;   // +0xD4
    uint32_t        followTargetField3;   // +0xD8
    uint32_t        followTargetField4;   // +0xDC
    uint32_t        m_visible_cell_count;
    CellClass*      m_visible_cells[800];
    // Draw queue state
    uint32_t        drawQueueCount;       // +0xD64
    uint32_t        drawQueueField1;      // +0xD68
    uint32_t        drawQueueField2;      // +0xD6C
    uint32_t        drawQueueField3;      // +0xD70
    uint32_t        drawQueueField4;      // +0xD74
    uint32_t        drawQueueField5;      // +0xD78
    bool            drawQueueField6;      // +0xD7C
    bool            m_redrawing;
    uint32_t        screenOffsetX;        // +0xD80
    uint32_t        screenOffsetY;        // +0xD84
    uint32_t        screenOffsetField1;   // +0xD88
    uint32_t        screenOffsetField2;   // +0xD8C
    uint32_t        screenOffsetField3;   // +0xD90
    uint32_t        screenOffsetField4;   // +0xD94
    uint32_t        screenOffsetField5;   // +0xD98
    uint32_t        screenOffsetField6;   // +0xD9C
    uint32_t        m_mouse_frame_index;
    uint32_t        m_start_time;
    uint32_t        viewGuardCount;       // +0xDA8
    uint32_t        viewSentinelCount;    // +0xDAC
    float           m_floats[12];
    RectangleStruct clipRectangle;        // +0xDE4
    uint32_t        zoomResponseField0;   // +0xDF4
    double          zoomResponseFactor;   // +0xDF8 (init 0.0)
    uint32_t        zoomResponseField2;   // +0xE00
    uint32_t        zoomResponseField3;   // +0xE04
    double          zoomResponseField4;   // +0xE08 (init 0.0)
    uint32_t        zoomResponseField5;   // +0xE10
    uint32_t        zoomResponseField6;   // +0xE14

protected:
    TacticalClass() noexcept;
};

} // namespace gamemd

