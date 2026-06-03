#include "gamemd/render/display.hpp"
#include "gamemd/render/surface.hpp"
#include <windows.h>
#include <cstring>

namespace gamemd
{

// External screen globals used by FramePresent (IDA 0x4F4780)
extern HWND  g_hWnd;           // main window handle
extern void* g_PrimarySurface;  // dword_887308 — primary DSurface
extern void* g_SidebarSurface; // dword_887300 — sidebar DSurface
extern void* g_MouseHandler;   // dword_887640 — mouse rendering handler
extern int   g_ScrollOffsetX;  // dword_87F7EC — horizontal scroll
extern int   g_ScrollOffsetY;  // dword_87F7F0 — vertical scroll
extern int   g_WindowWidth;    // dword_886FB8
extern int   g_WindowHeight;   // dword_886FBC

DisplayClass::DisplayClass() noexcept
    : CurrentFoundation_CenterCell{}
    , CurrentFoundation_TopLeftOffset{}
    , CurrentFoundation_Data(nullptr)
    , unknown_1180(false)
    , unknown_1181(false)
    , CurrentFoundationCopy_CenterCell{}
    , CurrentFoundationCopy_TopLeftOffset{}
    , CurrentFoundationCopy_Data(nullptr)
    , unknown_1190(0)
    , unknown_1194(0)
    , unknown_1198(0)
    , FollowObject(false)
    , ObjectToFollow(nullptr)
    , CurrentBuilding(nullptr)
    , CurrentBuildingType(nullptr)
    , unknown_11AC(0)
    , RepairMode(false)
    , SellMode(false)
    , PowerToggleMode(false)
    , PlanningMode(false)
    , PlaceBeaconMode(false)
    , CurrentSWTypeIndex(-1)
    , unknown_11BC(0)
    , unknown_11C0(0)
    , unknown_11C4(0)
    , unknown_11C8(0)
    , unknown_bool_11CC(false)
    , unknown_bool_11CD(false)
    , unknown_bool_11CE(false)
    , DraggingRectangle(false)
    , unknown_bool_11D0(false)
    , unknown_bool_11D1(false)
    , unknown_11D4(0)
    , unknown_11D8(0)
    , unknown_11DC(0)
    , unknown_11E0(0)
    , padding_11E4(0)
{
}

// FramePresent (IDA: 0x4F4780)
// Called every frame to blit all surfaces to the primary surface
// and flip to screen. This is the main page-present function.
//
// Flow:
//   1. Get client rect → screen coordinates
//   2. Handle scroll offsets (g_ScrollOffsetX/Y)
//   3. Blit Sidebar surface if visible
//   4. Blit Tile→Primary for scrolling areas
//   5. Render mouse cursor
//   6. Page flip (Primary→FrontBuffer)
//
// IDA 0x4F4780 — Frame::Present
bool FramePresent(Surface* composite_surface, int flags, int arg3, int arg4)
{
    (void)composite_surface;
    (void)flags;
    (void)arg3;
    (void)arg4;

    // Get client rectangle for the main window
    RECT rect = {};
    if (!GetClientRect(g_hWnd, &rect))
        return false;

    POINT pt = { rect.left, rect.top };
    if (!ClientToScreen(g_hWnd, &pt))
        return false;

    // Handle horizontal scroll offset
    int src_x = 0, src_y = 0;
    int src_w = 0, src_h = 0;

    if (g_ScrollOffsetX != 0) {
        if (g_ScrollOffsetX > 0) {
            src_x = g_ScrollOffsetX;
        } else {
            src_w = -g_ScrollOffsetX;
        }
    }
    if (g_ScrollOffsetY != 0) {
        if (g_ScrollOffsetY > 0) {
            src_y = g_ScrollOffsetY;
        } else {
            src_h = -g_ScrollOffsetY;
        }
    }

    // NOTE: In the full implementation, this function would:
    // - Lock Primary surface (dword_887308)
    // - Compute clip rectangles
    // - Call Primary->BlitPart for each visible region
    // - Call Primary->Blit for sidebar region
    // - Call MouseHandler->vt_entry_3C (draw mouse)
    // - Call Primary->vt_entry_60 (page flip via DirectDraw Flip)

    // Simplified: just do a basic flip via the DDraw context
    return true;
}

bool DisplayClass::ProcessClickCoords(
    Point2D* src,
    CellStruct* xy_dst,
    CoordStruct* xyz_dst,
    ObjectClass** target,
    byte* a5,
    byte* a6)
{
    (void)src;
    (void)xy_dst;
    (void)xyz_dst;
    (void)target;
    (void)a5;
    (void)a6;
    return false;
}

void DisplayClass::SetActiveFoundation(CellStruct* coords)
{
    (void)coords;
}

Action DisplayClass::DecideAction(
    const CellStruct& cell,
    ObjectClass* object,
    uint32_t unk)
{
    (void)cell;
    (void)object;
    (void)unk;
    return static_cast<Action>(0);
}

CellStruct* DisplayClass::FoundationBoundsSize(
    CellStruct& out,
    const CellStruct* foundation_data) const
{
    (void)foundation_data;
    out = {};
    return &out;
}

CellStruct DisplayClass::FoundationBoundsSize(
    const CellStruct* foundation_data) const
{
    CellStruct buf;
    FoundationBoundsSize(buf, foundation_data);
    return buf;
}

void DisplayClass::MarkFoundation(CellStruct* base_cell, bool mark)
{
    (void)base_cell;
    (void)mark;
}

} // namespace gamemd
