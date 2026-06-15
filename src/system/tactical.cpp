#include "gamemd/system/tactical.hpp"

#include <cstring>

namespace gamemd
{

TacticalClass::TacticalClass() noexcept
    : scrollVelocityPacked(0)
    , scrollAccumPacked(0)
    , scrollDeltaX(0)
    , scrollDeltaY(0)
    , lightingSurface(0)
    , lightSurfaceField1(0)
    , lightSurfaceField2(0)
    , lightSurfaceField3(0)
    , lightSurfaceField4(0)
    , viewportWidth(0)
    , viewportHeight(0)
    , viewportX(0)
    , viewportY(0)
    , viewportCellCountX(0)
    , viewportCellCountY(0)
    , viewportCellOriginX(0)
    , viewportCellOriginY(0)
    , scrollBorderField1(0)
    , scrollBorderField2(0)
    , scrollBorderField3(0)
    , scrollBorderField4(0)
    , scrollBorderField5(0)
    , scrollBorderField6(0)
    , scrollBorderField7(0)
    , scrollBorderField8(0)
    , scrollBorderField9(0)
    , scrollBorderField10(0)
    , scrollBorderField11(0)
    , scrollBorderField12(0)
    , scrollBorderField13(0)
    , scrollBorderField14(0)
    , scrollBorderField15(0)
    , scrollBorderField16(0)
    , scrollBorderField17(0)
    , scrollAutoEnabled(false)
    , scrollAutoAccum(false)
    , m_zoom_in_factor(1.0)
    , followTargetOffsetX(0)
    , followTargetOffsetY(0)
    , followTargetField1(0)
    , followTargetField2(0)
    , followTargetField3(0)
    , followTargetField4(0)
    , m_visible_cell_count(0)
    , drawQueueCount(0)
    , drawQueueField1(0)
    , drawQueueField2(0)
    , drawQueueField3(0)
    , drawQueueField4(0)
    , drawQueueField5(0)
    , drawQueueField6(false)
    , m_redrawing(false)
    , screenOffsetX(0)
    , screenOffsetY(0)
    , screenOffsetField1(0)
    , screenOffsetField2(0)
    , screenOffsetField3(0)
    , screenOffsetField4(0)
    , screenOffsetField5(0)
    , screenOffsetField6(0)
    , m_mouse_frame_index(0)
    , m_start_time(0)
    , viewGuardCount(0)
    , viewSentinelCount(0)
    , zoomResponseField0(0)
    , zoomResponseFactor(0.0)
    , zoomResponseField2(0)
    , zoomResponseField3(0)
    , zoomResponseField4(0.0)
    , zoomResponseField5(0)
    , zoomResponseField6(0)
{
    std::memset(&m_visible_area, 0, sizeof(m_visible_area));
    std::memset(m_visible_cells, 0, sizeof(m_visible_cells));
    std::memset(m_floats, 0, sizeof(m_floats));
    std::memset(&clipRectangle, 0, sizeof(clipRectangle));
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
