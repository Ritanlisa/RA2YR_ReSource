#pragma once

#include "object/abstract.hpp"

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
    static constexpr AbstractType kObjectDeriveId = AbstractType::TacticalMap;

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override { return 0; }
    virtual HRESULT __stdcall Load(IStream* stream) override { return 0; }
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override { return 0; }

    virtual ~TacticalClass() = default;

    virtual AbstractType __stdcall whatAmI() const override { return AbstractType::TacticalMap; }
    virtual int objectSize() const override { return 0; }

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

    uint32_t        field24;
    uint32_t        field28;
    uint32_t        field_2C;
    uint32_t        field30;
    uint32_t        field34;
    uint32_t        field38;
    uint32_t        field_3C;
    uint32_t        field40;
    uint32_t        field44;
    uint32_t        field48;
    uint32_t        field_4C;
    uint32_t        field50;
    uint32_t        field54;
    uint32_t        field58;
    uint32_t        field_5C;
    uint32_t        field60;
    uint32_t        field64;
    uint32_t        field68;
    uint32_t        field_6C;
    uint32_t        field70;
    uint32_t        field74;
    uint32_t        field78;
    uint32_t        field_7C;
    uint32_t        field80;
    uint32_t        field84;
    uint32_t        field88;
    uint32_t        field_8C;
    uint32_t        field90;
    uint32_t        field94;
    uint32_t        field98;
    uint32_t        field_9C;
    uint32_t        field_A0;
    uint32_t        field_A4;
    uint32_t        field_A8;
    bool            field_AC;
    bool            field_AD;
    RectangleStruct visibleArea;
    double          zoomInFactor;
    uint32_t        field_C8;
    uint32_t        field_CC;
    uint32_t        field_D0;
    uint32_t        field_D4;
    uint32_t        field_D8;
    uint32_t        field_DC;
    uint32_t        visibleCellCount;
    CellClass*      visibleCells[800];
    uint32_t        field_D64;
    uint32_t        field_D68;
    uint32_t        field_D6C;
    uint32_t        field_D70;
    uint32_t        field_D74;
    uint32_t        field_D78;
    bool            field_D7C;
    bool            redrawing;
    uint32_t        field_D80;
    uint32_t        field_D84;
    uint32_t        field_D88;
    uint32_t        field_D8C;
    uint32_t        field_D90;
    uint32_t        field_D94;
    uint32_t        field_D98;
    uint32_t        field_D9C;
    uint32_t        mouseFrameIndex;
    uint32_t        startTime;
    uint32_t        field_DA8;
    uint32_t        field_DAC;
    float           floats[12];
    RectangleStruct field_DE4;
    uint32_t        field_DF4;
    double          field_DF8;
    uint32_t        field_E00;
    uint32_t        field_E04;
    double          field_E08;
    uint32_t        field_E10;
    uint32_t        field_E14;

protected:
    TacticalClass() noexcept;
};

} // namespace gamemd

