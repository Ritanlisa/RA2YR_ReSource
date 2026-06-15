#include "system/tactical.hpp"

#include <cstring>

namespace gamemd
{

TacticalClass::TacticalClass() noexcept
    : field24(0)
    , field28(0)
    , m_field_2C(0)
    , field30(0)
    , field34(0)
    , field38(0)
    , m_field_3C(0)
    , field40(0)
    , field44(0)
    , field48(0)
    , m_field_4C(0)
    , field50(0)
    , field54(0)
    , field58(0)
    , m_field_5C(0)
    , field60(0)
    , field64(0)
    , field68(0)
    , m_field_6C(0)
    , field70(0)
    , field74(0)
    , field78(0)
    , m_field_7C(0)
    , field80(0)
    , field84(0)
    , field88(0)
    , m_field_8C(0)
    , field90(0)
    , field94(0)
    , field98(0)
    , m_field_9C(0)
    , m_field_A0(0)
    , m_field_A4(0)
    , m_field_A8(0)
    , m_field_AC(false)
    , m_field_AD(false)
    , zoomInFactor(1.0)
    , m_field_C8(0)
    , m_field_CC(0)
    , m_field_D0(0)
    , m_field_D4(0)
    , m_field_D8(0)
    , m_field_DC(0)
    , visibleCellCount(0)
    , m_field_D64(0)
    , m_field_D68(0)
    , m_field_D6C(0)
    , m_field_D70(0)
    , m_field_D74(0)
    , m_field_D78(0)
    , m_field_D7C(false)
    , redrawing(false)
    , m_field_D80(0)
    , m_field_D84(0)
    , m_field_D88(0)
    , m_field_D8C(0)
    , m_field_D90(0)
    , m_field_D94(0)
    , m_field_D98(0)
    , m_field_D9C(0)
    , mouseFrameIndex(0)
    , startTime(0)
    , m_field_DA8(0)
    , m_field_DAC(0)
    , m_field_DF4(0)
    , m_field_DF8(0.0)
    , m_field_E00(0)
    , m_field_E04(0)
    , m_field_E08(0.0)
    , m_field_E10(0)
    , m_field_E14(0)
{
    std::memset(&visibleArea, 0, sizeof(visibleArea));
    std::memset(visibleCells, 0, sizeof(visibleCells));
    std::memset(floats, 0, sizeof(floats));
    std::memset(&m_field_DE4, 0, sizeof(m_field_DE4));
}

// TODO: complete implementation

bool TacticalClass::CoordsToClient(const CoordStruct& coords, Point2D* out_client) const
{
    (void)coords;
    if (out_client)
        *out_client = {};
    return false;
}

CoordStruct* TacticalClass::ClientToCoords(CoordStruct* out, const Point2D& client) const
{
    (void)client;
    if (out)
        *out = {};
    return out;
}

int TacticalClass::GetOcclusion(const CellStruct& cell, bool fog) const
{
    (void)cell;
    (void)fog;
    return 0;
}

Point2D* TacticalClass::AdjustForZShapeMove(Point2D* dest, Point2D* client)
{
    (void)dest;
    (void)client;
    return dest;
}

int TacticalClass::AdjustForZ(int height)
{
    return height;
}

void TacticalClass::FocusOn(CoordStruct* dest, int velocity)
{
    (void)dest;
    (void)velocity;
}

void TacticalClass::RegisterDirtyArea(RectangleStruct area, bool unk)
{
    (void)area;
    (void)unk;
}

void TacticalClass::RegisterCellAsVisible(CellClass* cell)
{
    (void)cell;
}

int TacticalClass::DrawTimer(int index, ColorScheme* scheme, int time, const wchar_t* text, const Point2D* xy1, const Point2D* xy2)
{
    (void)index;
    (void)scheme;
    (void)time;
    (void)text;
    (void)xy1;
    (void)xy2;
    return 0;
}

} // namespace gamemd
