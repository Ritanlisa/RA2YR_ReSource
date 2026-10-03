// G42.32 P: tree-universe marker -- e4 tree-owned decls suppressed
#define GAMEMD_TREE_UNIVERSE 1
#include "system/tactical.hpp"
#include "e4/classes/Building_e4.hpp"
#include "system/cell.hpp"
#include "system/map.hpp"
#include "object/object.hpp"
#include "object/techno.hpp"
#include "structure/building.hpp"
#include "type/building_type.hpp"
#include "render/surface.hpp"
#include "core/math.hpp"
#include "core/coordinate.hpp"
#include "core/reverse_marker.hpp"

#include <cstring>
#include <cmath>
#include "e4/e4_globals_decls.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/TerrainClass_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "misc/misc_ext.hpp"
#include "render/render_ext.hpp"

namespace gamemd
{

TacticalClass::TacticalClass() noexcept
    : field24(0)
    , field28(0)
    , TacticalClass_field_2C(0)
    , field30(0)
    , field34(0)
    , field38(0)
    , TacticalClass_field_3C(0)
    , field40(0)
    , field44(0)
    , field48(0)
    , TacticalClass_field_4C(0)
    , field50(0)
    , field54(0)
    , field58(0)
    , TacticalClass_field_5C(0)
    , field60(0)
    , field64(0)
    , field68(0)
    , TacticalClass_field_6C(0)
    , field70(0)
    , field74(0)
    , field78(0)
    , TacticalClass_field_7C(0)
    , field80(0)
    , field84(0)
    , field88(0)
    , TacticalClass_field_8C(0)
    , field90(0)
    , field94(0)
    , field98(0)
    , TacticalClass_field_9C(0)
    , TacticalClass_field_A0(0)
    , TacticalClass_field_A4(0)
    , TacticalClass_field_A8(0)
    , TacticalClass_field_AC(false)
    , TacticalClass_field_AD(false)
    , zoomInFactor(1.0)
    , TacticalClass_field_C8(0)
    , TacticalClass_field_CC(0)
    , TacticalClass_field_D0(0)
    , TacticalClass_field_D4(0)
    , TacticalClass_field_D8(0)
    , TacticalClass_field_DC(0)
    , visibleCellCount(0)
    , TacticalClass_field_D64(0)
    , TacticalClass_field_D68(0)
    , TacticalClass_field_D6C(0)
    , TacticalClass_field_D70(0)
    , TacticalClass_field_D74(0)
    , TacticalClass_field_D78(0)
    , TacticalClass_field_D7C(false)
    , redrawing(false)
    , TacticalClass_field_D80(0)
    , TacticalClass_field_D84(0)
    , TacticalClass_field_D88(0)
    , TacticalClass_field_D8C(0)
    , TacticalClass_field_D90(0)
    , TacticalClass_field_D94(0)
    , TacticalClass_field_D98(0)
    , TacticalClass_field_D9C(0)
    , mouseFrameIndex(0)
    , startTime(0)
    , TacticalClass_field_DA8(0)
    , TacticalClass_field_DAC(0)
    , TacticalClass_field_DF4(0)
    , TacticalClass_field_DF8(0.0)
    , TacticalClass_field_E00(0)
    , TacticalClass_field_E04(0)
    , TacticalClass_field_E08(0.0)
    , TacticalClass_field_E10(0)
    , TacticalClass_field_E14(0)
{
    std::memset(&visibleArea, 0, sizeof(visibleArea));
    std::memset(visibleCells, 0, sizeof(visibleCells));
    std::memset(floats, 0, sizeof(floats));
    std::memset(&TacticalClass_field_DE4, 0, sizeof(TacticalClass_field_DE4));
}

// ============================================================
// Coordinate conversion functions
// ============================================================

// IDA: 0x6D2140 -- Coord::To_Screen
// Converts world coordinates to screen pixel coordinates using tactical view matrix.
// Uses the transform matrix at this+3556 (field D94 region) to apply inverse view transform.
// Output: screen X, Y in Point2D
static CoordStruct* Coord_To_Screen_Impl(const TacticalClass* tac, const CoordStruct& world, Point2D* out)
{
    // The transform matrix at TacticalClass+0xD94 (floats[0..11]) is a 3x4 matrix
    // that transforms world-space coords to screen-space coords.
    // Standard isometric projection:
    // screen_x = (world.X - world.Y) * cos(angle) + tac->viewOffsetX
    // screen_y = (world.X + world.Y) * sin(angle) - world.Z + tac->viewOffsetY

    // Use the stored transform matrix for accurate projection
    const float* m = tac->floats; // 12 floats = 3x4 matrix

    float wx = (float)(world.X);
    float wy = (float)(world.Y);
    float wz = (float)(world.Z);

    float sx = m[0] * wx + m[1] * wy + m[2]  * wz + m[3];
    float sy = m[4] * wx + m[5] * wy + m[6]  * wz + m[7];
    // m[8]*wx + m[9]*wy + m[10]*wz + m[11] = transformed Z (depth)

    out->X = (int)(sx);
    out->Y = (int)(sy);
    return (CoordStruct*)(out); // Point2D and CoordStruct are binary-compatible at offset 0,4
}

// IDA: 0x6D2140 wrapper
CoordStruct* TacticalClass::Coord_To_Screen(const CoordStruct& world, Point2D* out) const
{
    Coord_To_Screen_Impl(this, world, out);
    return (CoordStruct*)(out);
}

// IDA: 0x6D1FE0 -- AdjustForZShapeMove
// Adjusts draw rectangle for z-shaped building movement (foundation offset)
// 0x6d1fe0
Point2D* TacticalClass::AdjustForZShapeMove(Point2D* dest, Point2D* client)
{
    (void)dest; (void)client; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006D1FE0.json)
}
// IDA: 0x6D20E0 -- ZCoordToScreenY
// Converts world Z coordinate to screen Y offset
int ZCoordToScreenY(int z_world)
{
    // Standard isometric: each unit of Z maps to -1 pixel on screen Y
    return -z_world;
}

// ============================================================
// Isometric rendering -- core pipeline
// ============================================================

// IDA: 0x6D7560 -- TacticalClass::RenderIsometric
// Iterates over visible cell rows and checks visibility per cell.
// Uses the isometric row/column scan pattern:
//   For each row (0 to viewHeight in cells):
//     start_cell = viewOrigin + (row/2, row/2)
//     For each column (0 to viewWidth):
//       cell = (start_col, start_row) where col in [0, viewWidth]
// Each cell is checked for screen bounds intersection.
// 0x6d7560
void TacticalClass::RenderIsometric(const RectangleStruct& viewRect, int flags)
{
    (void)viewRect; (void)flags;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006D7560.json)
}
// 0x480350
void TacticalClass::CheckCellVisibility(const Point2D& screen_pos, int flags, bool unk)
{
    (void)screen_pos; (void)flags; (void)unk;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00480350.json)
}
// 0x6d7840
void TacticalClass::DrawMap(const RectangleStruct& viewRect, RectangleStruct* bounds)
{
    (void)viewRect; (void)bounds;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006D7840.json)
}
// 0x6d7c00
void TacticalClass::DrawTerrain(const RectangleStruct& viewRect)
{
    (void)viewRect;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006D7C00.json)
}
// 0x6d3040
void TacticalClass::DrawTerrainPartial(const RectangleStruct& rect)
{
    (void)rect;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006D3040.json)
}
// 0x6d71e0
Point2D* TacticalClass::CalcBuildingDrawPos(Point2D* out, BuildingClass* building)
{
    (void)out; (void)building; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006D71E0.json)
}
// IDA: 0x4D1890 -- TacticalClass::DrawBuildings
// Draws all buildings in sorted order (Y-sort for isometric depth).
// 0x4d1890
void TacticalClass::DrawBuildings(const RectangleStruct& viewRect)
{
    (void)viewRect;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004D1890.json)
}
// 0x658780
void TacticalClass::renderOverlay()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00658780.json)
}
// ============================================================
// Cell rendering
// ============================================================

// IDA: 0x4801F0 -- TacticalClass::RenderCellFogOfWar
// Draws fog of war shading over a cell.
void TacticalClass::RenderCellFogOfWar(int cx, int cy)
{
    (void)cx;
    (void)cy;
}

// IDA: 0x550260 -- TacticalClass::RenderCells
// Renders all cells in the current viewport.
// 0x550260
void TacticalClass::RenderCells()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00550260.json)
}
// 0x6d8b30
void TacticalClass::CalcViewportCells()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006D8B30.json)
}
// 0x483e30
void TacticalClass::SetView(int view_x, int view_y, int view_width, int view_height)
{
    (void)view_x; (void)view_y; (void)view_width; (void)view_height;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00483E30.json)
}
// 0x4a8960
void TacticalClass::SetViewDimensions(int width, int height)
{
    (void)width; (void)height;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004A8960.json)
}
// 0x537620
void TacticalClass::InitView()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00537620.json)
}
// 0x6d5f60
void TacticalClass::SetViewportPosition(int x, int y)
{
    (void)x; (void)y;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006D5F60.json)
}
// 0x6d2540
void TacticalClass::ScrollViewport(int dx, int dy)
{
    (void)dx; (void)dy;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006D2540.json)
}
// 0x5090a0
void TacticalClass::updateVisibility()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005090A0.json)
}
// 0x5090a0
void TacticalClass::updateVisibility()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005090A0.json)
}
// 0x6d9ef0
void TacticalClass::AddToDrawQueue(ObjectClass* obj, int screen_x, int screen_y)
{
    (void)obj; (void)screen_x; (void)screen_y;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006D9EF0.json)
}
// 0x631e50
uint32_t TacticalClass::InterpolateColor(uint32_t elapsed_ms)
{
    (void)elapsed_ms; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00631E50.json)
}
// 0x631ee0
bool TacticalClass::DecrementCounter(uint32_t delta)
{
    (void)delta; return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00631EE0.json)
}
// 0x653850
void TacticalClass::MouseInput(int x, int y, int buttons)
{
    (void)x; (void)y; (void)buttons;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00653850.json)
}
// 0x6539d0
void TacticalClass::ProcessMouseClick(int x, int y)
{
    (void)x; (void)y;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006539D0.json)
}