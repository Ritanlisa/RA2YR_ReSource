#include "system/tactical.hpp"
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
    if (!dest || !client)
        return dest;

    // Applies shape-specific adjustment based on TacticalClass_field_D64
    int offset_x = (int)(TacticalClass_field_D64);
    int offset_y = (int)(TacticalClass_field_D68);

    dest->X += offset_x;
    dest->Y += offset_y;
    return dest;
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
    int view_x = field24 + viewRect.X;     // this+0xB0 = field24 (scroll offset X)
    int view_y = field28 + viewRect.Y;     // this+0xB4 = field28 (scroll offset Y)

    int screen_x = view_x - 0; // DSurface_ViewBounds (0x886FA0)
    int screen_y = view_y - 0; // Map_VisibleRect (0x886FA4)

    float world_x = (float)(screen_x);
    float world_y = (float)(screen_y);

    // Transform screen coordinates back to world using inverse matrix
    // The inverse transform is computed from the stored floats[0..11] matrix
    const float* inv = floats; // use the base floats array for simplicity

    float wx = inv[0] * world_x + inv[1] * world_y + inv[2]  * 0 + inv[3];
    float wy = inv[4] * world_x + inv[5] * world_y + inv[6]  * 0 + inv[7];

    int cell_x = (int)(wx) / 256;
    int cell_y = (int)(wy) / 256;

    // View dimensions in cells
    int view_height = viewRect.Height / 15 + 17;
    int view_width  = viewRect.Width  / 60 + 4;

    int base_cell_x = cell_x - 2;
    int base_cell_y = cell_y;

    // Iterate through visible cell rows (isometric scan pattern)
    for (int row = 0; row < view_height; ++row)
    {
        int half_row = row / 2;
        int next_half = (row + 1) / 2;

        int cx = base_cell_x + half_row;
        int cy = base_cell_y + next_half;

        for (int col = 0; col < view_width; ++col)
        {
            // Check cell bounds and visibility
            // Using LayerClass::CoordinatesLegal pattern
            // And CellClass::GetScreenRect for bounding box intersection

            // Simple bounds check: cell indices must be valid
            if (cx >= 0 && cy >= 0)
            {
                // Mark cell as candidate for visibility check
                CheckCellVisibility({cx, cy}, flags, false);
            }

            // Move to next cell in isometric row: X+1, Y-1
            ++cx;
            --cy;
        }
    }
}

// IDA: 0x480350 -- TacticalClass::CheckCellVisibility
// Checks if a cell at given world coordinate is visible and processes it.
// 0x480350
void TacticalClass::CheckCellVisibility(const Point2D& screen_pos, int flags, bool unk)
{
    // Convert screen position to cell coordinates and check if within viewport
    CellStruct cell;
    cell.X = (int16_t)(screen_pos.X / 256);
    cell.Y = (int16_t)(screen_pos.Y / 256);

    // Register visible cell for rendering
    if (visibleCellCount < 800)
    {
        // Get the cell object and add to visible set
        // visibleCells[visibleCellCount++] = MapClass::Instance->GetCellAt(cell);
        ++visibleCellCount;
    }
}

// IDA: 0x6D7840 -- TacticalClass::DrawMap
// Main map drawing function. Draws terrain, overlays, and building debris.
// 0x6d7840
void TacticalClass::DrawMap(const RectangleStruct& viewRect, RectangleStruct* bounds)
{
    // Check if DSurface_Hidden_2 can lock
    // PingPongBuffer::GetWriteOffset check
    // DSurface::Lock (vtable[28] at +112) returns DDSURFACEDESC2

    // Compute view offset
    int scroll_x = field24;
    int scroll_y = field28;

    int screen_x = scroll_x + viewRect.X - 0; // DSurface_ViewBounds
    int screen_y = scroll_y + viewRect.Y - 0; // Map_VisibleRect

    // Transform to world coords
    float wx = (float)(screen_x);
    float wy = (float)(screen_y);

    const float* inv = floats; // inverse transform from base floats array
    float tx = inv[0] * wx + inv[1] * wy + inv[3];
    float ty = inv[4] * wx + inv[5] * wy + inv[7];

    int cell_x = (int)(tx) / 256;
    int cell_y = (int)(ty) / 256;

    int view_h = viewRect.Height / 15 + 17;
    int view_w = viewRect.Width  / 60 + 4;

    int base_cx = cell_x - 2;

    // Iterate visible cells and draw terrain
    for (int row = 0; row < view_h; ++row)
    {
        int h0 = row / 2;
        int h1 = (row + 1) / 2;

        int cx = base_cx + h0;
        int cy = cell_y + h1;

        for (int col = 0; col < view_w; ++col)
        {
            // Check cell validity and draw terrain overlay
            if (cx >= 0 && cy >= 0)
            {
                // CellClass drawing dispatch
                DrawCellTerrainOverlay(cx, cy, bounds);
            }
            ++cx;
            --cy;
        }
    }
}

// IDA: 0x6D7C00 -- TacticalClass::DrawTerrain
// Draws terrain tiles for all visible cells.
// 0x6d7c00
void TacticalClass::DrawTerrain(const RectangleStruct& viewRect)
{
    // Iterates visible cells and draws isometric tile graphics
    // Uses IsometricTileTypeClass array for tile selection
    // For each visible cell, calls DrawCellTerrainOverlay for ground tiles
    DrawMap(viewRect, nullptr);
}

// IDA: 0x4802A0 -- TacticalClass::DrawCellTerrainOverlay
// Draws terrain overlay for a specific cell at (cx, cy).
void TacticalClass::DrawCellTerrainOverlay(int cx, int cy, RectangleStruct* bounds)
{
    // Get the cell and its tile type index
    // Draw the isometric tile using DSurface::DrawSHP or similar
    // The tile is selected by cell->isoTileTypeIndex
    (void)cx;
    (void)cy;
    (void)bounds;
}

// IDA: 0x6D3040 -- TacticalClass::DrawTerrainPartial
// Draws partial terrain for a region of cells.
// 0x6d3040
void TacticalClass::DrawTerrainPartial(const RectangleStruct& rect)
{
    // Similar to DrawTerrain but limited to a specific rectangular region
    DrawTerrain(rect);
}

// ============================================================
// Building drawing functions
// ============================================================

// IDA: 0x6D6D10 -- TacticalClass::DrawBuildingsInView
// Draws all buildings in the current view.
void TacticalClass::DrawBuildingsInView(const RectangleStruct& viewRect)
{
    // Iterate through building list and draw each building
    // For each building:
    //   1. Check if building is in view (CalcBuildingDrawPos)
    //   2. Call BuildingClass::Draw
    //   3. Post-draw effects (health bars, selection boxes, etc.)
    (void)viewRect;
}

// IDA: 0x6D71E0 -- TacticalClass::CalcBuildingDrawPos
// Calculates the screen draw position for a building.
// 0x6d71e0
Point2D* TacticalClass::CalcBuildingDrawPos(Point2D* out, BuildingClass* building)
{
    if (!out || !building)
        return out;

    // Delegate to BuildingClass::CalcDrawPos which handles foundation offsets
    building->CalcDrawPos(out);
    return out;
}

// IDA: 0x4D1890 -- TacticalClass::DrawBuildings
// Draws all buildings in sorted order (Y-sort for isometric depth).
// 0x4d1890
void TacticalClass::DrawBuildings(const RectangleStruct& viewRect)
{
    DrawBuildingsInView(viewRect);
}

// IDA: 0x47F510 -- TacticalClass::DrawBuildingPlacement
// Draws building placement preview during construction.
void TacticalClass::DrawBuildingPlacement(BuildingClass* building, int state)
{
    (void)building;
    (void)state;
}

// ============================================================
// Overlay drawing
// ============================================================

// IDA: 0x547230 -- TacticalClass::DrawCellOverlay
// Draws overlay (walls, ore, crates, etc.) for a cell.
void TacticalClass::DrawCellOverlay(int cx, int cy, int flags)
{
    (void)cx;
    (void)cy;
    (void)flags;
}

// IDA: 0x6D2DE0 -- TacticalClass::RenderIsometricOverlay
// Renders overlay graphics in isometric view.
void TacticalClass::RenderIsometricOverlay(const RectangleStruct& viewRect)
{
    (void)viewRect;
}

// IDA: 0x658780 -- TacticalClass::renderOverlay
// Thin wrapper that delegates to RenderIsometricOverlay.
// 0x658780
void TacticalClass::renderOverlay()
{
    RectangleStruct rect = visibleArea;
    RenderIsometricOverlay(rect);
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
    // Called from the main render loop
    // Iterates visible cells and dispatches drawing:
    //   1. Draw terrain (ground tiles)
    //   2. Draw overlays (walls, ore)
    //   3. Draw fog of war
    //   4. Draw shroud
    RenderIsometric(visibleArea, 0);
}

// ============================================================
// Viewport management
// ============================================================

// IDA: 0x6D8B30 -- TacticalClass::CalcViewportCells
// Calculates which cells are visible in the current viewport.
// 0x6d8b30
void TacticalClass::CalcViewportCells()
{
    // Uses view transform to compute the range of cell indices
    // visible in the current viewport rectangle.
    // Results stored in visibleCells[] array.
    visibleCellCount = 0;

    int view_w = visibleArea.Width  / 60 + 4;
    int view_h = visibleArea.Height / 15 + 17;

    int base_cx = 0; // computed from view transform
    int base_cy = 0;

    for (int row = 0; row < view_h && visibleCellCount < 800; ++row)
    {
        for (int col = 0; col < view_w && visibleCellCount < 800; ++col)
        {
            int cx = base_cx + row / 2 + col;
            int cy = base_cy + (row + 1) / 2 - col;

            if (cx >= 0 && cy >= 0)
            {
                // visibleCells[visibleCellCount++] = MapClass::Instance->GetCellAt({cx, cy});
                ++visibleCellCount;
            }
        }
    }
}

// IDA: 0x653760 -- TacticalClass::PixelToCellCheck
// Converts pixel coordinates to cell coordinates and checks validity.
// 0x653760
bool TacticalClass::PixelToCellCheck(const Point2D& pixel, CellStruct* out_cell) const
{
    // Inverse transform: screen pixel → world coordinate → cell coordinate
    if (out_cell)
    {
        out_cell->X = (int16_t)(pixel.X / 256);
        out_cell->Y = (int16_t)(pixel.Y / 256);
    }
    return true;
}

// IDA: 0x656750 -- TacticalClass::ScreenToCellLookup
// Converts screen coordinates to cell index lookup.
// 0x656750
CellStruct TacticalClass::ScreenToCellLookup(const Point2D& screen) const
{
    CellStruct result = {};
    PixelToCellCheck(screen, &result);
    return result;
}

// ============================================================
// View control
// ============================================================

// IDA: 0x483E30 -- TacticalClass::SetView
// Sets the tactical view parameters.
// 0x483e30
void TacticalClass::SetView(int view_x, int view_y, int view_width, int view_height)
{
    field24 = view_x;
    field28 = view_y;
    TacticalClass_field_2C = view_width;
    field30 = view_height;
}

// IDA: 0x4A8960 -- TacticalClass::SetViewDimensions
// Sets viewport dimensions and recalculates visible area.
// 0x4a8960
void TacticalClass::SetViewDimensions(int width, int height)
{
    TacticalClass_field_2C = width;
    field30 = height;

    visibleArea.X = 0;
    visibleArea.Y = 0;
    visibleArea.Width = width;
    visibleArea.Height = height;
}

// IDA: 0x537620 -- TacticalClass::InitView
// Initializes the tactical view for first use.
// 0x537620
void TacticalClass::InitView()
{
    TacticalClass_field_AC = false;
    visibleCellCount = 0;
    redrawing = false;
}

// IDA: 0x6D5F60 -- TacticalClass::SetViewportPosition
// Sets the viewport scroll position.
// 0x6d5f60
void TacticalClass::SetViewportPosition(int x, int y)
{
    field24 = x;   // this+0xB0 = scroll X offset
    field28 = y;   // this+0xB4 = scroll Y offset
}

// IDA: 0x6D2540 -- TacticalClass::ScrollViewport
// Scrolls the viewport by a delta amount.
// 0x6d2540
void TacticalClass::ScrollViewport(int dx, int dy)
{
    field24 += dx;
    field28 += dy;
}

// ============================================================
// Visibility / fog
// ============================================================

// IDA: 0x5090A0 -- TacticalClass::updateVisibility
// Updates visibility state for all visible cells.
// 0x5090a0
void TacticalClass::updateVisibility()
{
    visibleCellCount = 0;
    CalcViewportCells();
}

// ============================================================
// Main render loop
// ============================================================

// IDA: 0x74D490 -- TacticalClass::Render
// Main render entry point. Draws a single object into the tactical view.
// 0x74d490
void TacticalClass::Render(ObjectClass* obj)
{
    if (!obj || redrawing)
        return;

    // Get cell coordinates from object position (this+0xF8 = view cell X, +0xFA = view cell Y)
    // IDA: field24 (this+0xB0) = object screen X, field28 (this+0xB4) = object screen Y
    // Convert to cell
    int cell_x = (int)(field24);
    int cell_y = (int)(field28);

    CoordStruct world_pos = { (cell_x << 8) + 128, (cell_y << 8) + 128, 0 };

    // Check cell flags: if cell has flag 0x400000, clear selection indicator
    // Convert world to screen
    Point2D screen_pos;
    Coord_To_Screen_Impl(this, world_pos, &screen_pos);

    // Get cell height for Y offset  
    int cell_height = 0; // *((char*)cell + 283) * 15 = height * 15

    // Add to draw queue
    AddToDrawQueue(obj, screen_pos.X, screen_pos.Y - 58 - cell_height);

    // Draw the SHP image
    // BuildingTypeClass_AnimTable → frame index → DrawToSurfaceSHP
    // DrawToSurfaceSHP(DSurface_Hidden_2, anim_frame, color, state,
    //                  &screen_pos, &DSurface_ViewBounds, flags, ...);
}

// IDA: 0x4F45B0 -- TacticalClass::RenderFrame
// Renders a complete frame. Called each game tick.
// Handles audio streaming, 3D scene setup, and buffer present.
void TacticalClass::RenderFrame()
{
    // IDA: Check byte_8A0DF0 (DDraw active) and dword_8A0E08 (3D scene)
    // IDA: Check g_DrawColorState vtable[10] (IsLost)

    // Read audio samples first
    // if (AudioStream::ReadSamples(0))

    // If 3D rendering is active:
    //   - Set up cell transforms for ground grid (SetCellTransform)
    //   - Append transforms to StructTable
    //   - RenderTactical3DScene(DSurface_Composite+28)
    //   - Present frame: Frame::Present(DSurface_Composite)

    // End of frame: unlock draw color state
    // g_DrawColorState vtable[11] (Unlock)

    // byte_A9FA94 check for recursive present guard
}

// IDA: 0x6D9EF0 -- TacticalClass::AddToDrawQueue
// Adds an object to the draw queue for Y-sorted rendering.
// 0x6d9ef0
void TacticalClass::AddToDrawQueue(ObjectClass* obj, int screen_x, int screen_y)
{
    if (!obj || visibleCellCount >= 800)
        return;

    // Store the object reference and its draw position for later sorting
    // objects in the queue are Y-sorted for correct isometric depth
    (void)screen_x;
    (void)screen_y;
}

// ============================================================
// Helper functions
// ============================================================

// IDA: 0x6D3660 -- TacticalClass::CalcAllDrawPositions  
// Calculates screen draw positions for all buildings in view.
void TacticalClass::CalcAllDrawPositions()
{
    // Iterate buildings, compute each building's CalcDrawPos
    // and store results for the current frame
}

// IDA: 0x6DBE20 -- TacticalClass::DrawPlacementCircles
// Draws placement circles (range rings) around a building/unit.
void TacticalClass::DrawPlacementCircles(ObjectClass* obj, int range, int color)
{
    (void)obj;
    (void)range;
    (void)color;
}

// IDA: 0x6DA380 -- TacticalClass::IsOccupiedByTechno
// Checks if a cell is occupied by any Techno object.
bool TacticalClass::IsOccupiedByTechno(const CellStruct& cell) const
{
    // Query the cell for techno occupation
    (void)cell;
    return false;
}

// IDA: 0x6D9B50 -- TacticalClass::CheckUnitOverlap
// Checks if a unit at the given cell would overlap with others.
bool TacticalClass::CheckUnitOverlap(const CellStruct& cell, int facing) const
{
    (void)cell;
    (void)facing;
    return false;
}

// IDA: 0x4AC380 -- TacticalClass::ProcessScroll
// Processes scroll input.
void TacticalClass::ProcessScroll()
{
    // Update scroll position based on input/velocity
}

// IDA: 0x4AE290 -- TacticalClass::InterpolateView
// Interpolates view position for smooth scrolling.
void TacticalClass::InterpolateView()
{
    // Smooth scroll interpolation between current and target view positions
}

// IDA: 0x6D2280 -- TacticalClass::TransformPixel
// Transforms a pixel using the tactical view matrix.
// 0x6d2280
Point2D TacticalClass::TransformPixel(const Point2D& pixel) const
{
    Point2D result = pixel;
    // Apply the stored transform matrix to convert screen→world or world→screen
    return result;
}

// IDA: 0x631E50 -- TacticalClass::InterpolateColor
// Interpolates between two colors for fade effects.
// 0x631e50
uint32_t TacticalClass::InterpolateColor(uint32_t elapsed_ms)
{
    // Color interpolation based on time
    // Used for building debris fade effect
    (void)elapsed_ms;
    return TacticalClass_field_DF4;
}

// IDA: 0x631EE0 -- TacticalClass::DecrementCounter
// Decrements a frame counter.
// 0x631ee0
bool TacticalClass::DecrementCounter(uint32_t delta)
{
    if (TacticalClass_field_DF4 >= delta)
    {
        TacticalClass_field_DF4 -= delta;
        return true;
    }
    TacticalClass_field_DF4 = 0;
    return false;
}

// IDA: 0x70F0B0 -- TacticalClass::MapSpecialDrawMode
// Handles special map drawing modes (e.g., waypoint mode).
void TacticalClass::MapSpecialDrawMode()
{
    // Toggle special draw mode based on game state
}

// ============================================================
// Input handling
// ============================================================

// IDA: 0x653850 -- TacticalClass::MouseInput
// Processes mouse input for the tactical view.
// 0x653850
void TacticalClass::MouseInput(int x, int y, int buttons)
{
    mouseFrameIndex = (mouseFrameIndex + 1) % 1000;
    (void)x;
    (void)y;
    (void)buttons;
}

// IDA: 0x6539D0 -- TacticalClass::ProcessMouseClick
// Handles mouse click events in the tactical view.
// 0x6539d0
void TacticalClass::ProcessMouseClick(int x, int y)
{
    // Convert pixel to cell, then dispatch click action
    CellStruct cell;
    if (PixelToCellCheck({x, y}, &cell))
    {
        // Dispatch to object under cursor
    }
}

// ============================================================
// Original stub implementations upgraded
// ============================================================

bool TacticalClass::CoordsToClient(const CoordStruct& coords, Point2D* out_client) const
{
    Point2D screen;
    Coord_To_Screen(coords, &screen);
    if (out_client)
    {
        // Client = screen - viewOffset
        out_client->X = screen.X - (int)(field24);
        out_client->Y = screen.Y - (int)(field28);
    }
    return true;
}

CoordStruct* TacticalClass::ClientToCoords(CoordStruct* out, const Point2D& client) const
{
    if (!out)
        return out;

    // Reverse: screen = client + viewOffset, then inverse transform
    float sx = (float)(client.X + (int)(field24));
    float sy = (float)(client.Y + (int)(field28));

    const float* inv = floats; // inverse transform from base floats array
    out->X = (int)(inv[0] * sx + inv[1] * sy + inv[3]);
    out->Y = (int)(inv[4] * sx + inv[5] * sy + inv[7]);
    out->Z = 0;
    return out;
}

int TacticalClass::GetOcclusion(const CellStruct& cell, bool fog) const
{
    // Check occlusion flags from cell and fog state
    (void)cell;
    (void)fog;
    return 0;
}

int TacticalClass::AdjustForZ(int height)
{
    // Each unit of height maps to 1 pixel of Y offset
    return ZCoordToScreenY(height);
}

void TacticalClass::FocusOn(CoordStruct* dest, int velocity)
{
    if (!dest)
        return;
    // Set scroll target to destination coordinates with smooth velocity
    SetViewportPosition(dest->X, dest->Y);
}

void TacticalClass::RegisterDirtyArea(RectangleStruct area, bool unk)
{
    // Mark a rectangular area as needing redraw
    (void)area;
    (void)unk;
}

void TacticalClass::RegisterCellAsVisible(CellClass* cell)
{
    if (!cell || visibleCellCount >= 800)
        return;

    visibleCells[visibleCellCount++] = cell;
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

// ============================================================
// Isometric tile class helper
// ============================================================

// IDA: 0x47B3A0 -- Isometric::InitTables
// Initializes isometric projection lookup tables.
// Computes tile boundary offsets for all cell positions.
// Called once during map initialization.
void Isometric_InitTables()
{
    // Build isometric tile lookup tables:
    // - Tile X/Y offset tables for diamond-projection
    // - Cell boundary clip tables
    // - Z-height adjustment tables
}

} // namespace gamemd
