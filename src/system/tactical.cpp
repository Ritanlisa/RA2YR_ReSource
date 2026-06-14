#include "gamemd/system/tactical.hpp"

#include <cstring>

namespace gamemd
{

TacticalClass::TacticalClass() noexcept
    : m_field_24(0)
    , m_field_28(0)
    , m_field_2C(0)
    , m_field_30(0)
    , m_field_34(0)
    , m_field_38(0)
    , m_field_3C(0)
    , m_field_40(0)
    , m_field_44(0)
    , m_field_48(0)
    , m_field_4C(0)
    , m_field_50(0)
    , m_field_54(0)
    , m_field_58(0)
    , m_field_5C(0)
    , m_field_60(0)
    , m_field_64(0)
    , m_field_68(0)
    , m_field_6C(0)
    , m_field_70(0)
    , m_field_74(0)
    , m_field_78(0)
    , m_field_7C(0)
    , m_field_80(0)
    , m_field_84(0)
    , m_field_88(0)
    , m_field_8C(0)
    , m_field_90(0)
    , m_field_94(0)
    , m_field_98(0)
    , m_field_9C(0)
    , m_field_A0(0)
    , m_field_A4(0)
    , m_field_A8(0)
    , m_field_AC(false)
    , m_field_AD(false)
    , m_zoom_in_factor(1.0)
    , m_field_C8(0)
    , m_field_CC(0)
    , m_field_D0(0)
    , m_field_D4(0)
    , m_field_D8(0)
    , m_field_DC(0)
    , m_visible_cell_count(0)
    , m_field_D64(0)
    , m_field_D68(0)
    , m_field_D6C(0)
    , m_field_D70(0)
    , m_field_D74(0)
    , m_field_D78(0)
    , m_field_D7C(false)
    , m_redrawing(false)
    , m_field_D80(0)
    , m_field_D84(0)
    , m_field_D88(0)
    , m_field_D8C(0)
    , m_field_D90(0)
    , m_field_D94(0)
    , m_field_D98(0)
    , m_field_D9C(0)
    , m_mouse_frame_index(0)
    , m_start_time(0)
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
    std::memset(&m_visible_area, 0, sizeof(m_visible_area));
    std::memset(m_visible_cells, 0, sizeof(m_visible_cells));
    std::memset(m_floats, 0, sizeof(m_floats));
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

// IDA: 0x6D9EF0 — TacticalClass::AddToDrawQueue (139B)
// Inserts object+screen coords into a 500-element draw queue.
extern int g_Map_VisibleRectOffset;   // IDA 0x886FA8
extern int g_DSurface_WindowOffset;   // IDA 0x886FAC
extern void* dword_B0CEC8[1500];      // IDA 0xB0CEC8 — draw queue (3 ints × 500)

bool TacticalClass::AddToDrawQueue(void* object, int x, int y)
{
    auto* fields = reinterpret_cast<int*>(this);
    int& count = fields[876];  // m_draw_queue_count

    if (count == 500
        || x < -32 || x > g_Map_VisibleRectOffset + 32
        || y < -32 || y > g_DSurface_WindowOffset + 32)
        return false;

    int idx = 3 * count;
    dword_B0CEC8[idx]     = object;           // object pointer
    dword_B0CEC8[idx + 1] = fields[44] + x;   // screen X offset
    dword_B0CEC8[idx + 2] = fields[45] + y;   // screen Y offset
    ++count;
    return true;
}

// IDA: 0x4AC310 — TacticalClass::InitViewBounds (97B)
// Initializes view bounds (this+4560..4576) from input rect if all guard flags clear.
bool TacticalClass::InitViewBounds(const int rect[2])
{
    auto* fields = reinterpret_cast<uint8_t*>(this);

    if (fields[4528] || fields[4530] || fields[4529])
        return false;

    if (*reinterpret_cast<int*>(fields + 4536) != -1)
        return false;

    if (*reinterpret_cast<int*>(fields + 4520))
        return false;

    // All guards passed — set view bounds
    fields[4560] = 1;
    *reinterpret_cast<int*>(fields + 4564) = rect[0];
    *reinterpret_cast<int*>(fields + 4568) = rect[1];
    *reinterpret_cast<int*>(fields + 4572) = rect[0];
    *reinterpret_cast<int*>(fields + 4576) = rect[1];

    return true;
}

} // namespace gamemd
