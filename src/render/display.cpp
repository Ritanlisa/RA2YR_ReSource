#include "gamemd/render/display.hpp"
#include "gamemd/render/surface.hpp"
#include "gamemd/core/ddraw_init.hpp"
#include <windows.h>
#include <cstring>

namespace gamemd
{

extern HWND  g_hWnd;                  // main window handle
extern int   g_ScrollOffsetX;         // dword_87F7EC -- horizontal scroll
extern int   g_ScrollOffsetY;         // dword_87F7F0 -- vertical scroll
extern int (__stdcall *g_DDraw_ErrorCallback)(UINT); // IDA 0x8A00B0 — DDraw error callback

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

// IDA: 0x4F4780 -- Frame::Present (~3000B)
// Main frame presentation: composites rendered surfaces onto primary DDraw surface,
// handles scroll offsets, sidebar, mouse cursor, and page flip.
bool FramePresent(Surface* composite_surface, int flags, int arg3, int arg4)
{
    if (!composite_surface || !g_hWnd)
        return false;

    DDrawContext* ctx = DDrawGetContext();
    if (!ctx)
        return false;

    // Get surface dimensions
    RectangleStruct surf_rect;
    composite_surface->GetRect(&surf_rect);

    // Get window client area
    RECT wnd_rect;
    if (!GetClientRect(g_hWnd, &wnd_rect))
        return false;

    POINT pt = { wnd_rect.left, wnd_rect.top };
    if (!ClientToScreen(g_hWnd, &pt))
        return false;

    int win_w = wnd_rect.right - wnd_rect.left;
    int win_h = wnd_rect.bottom - wnd_rect.top;

    // Apply scroll offsets
    int src_x = 0, dst_x = 0;
    int src_y = 0, dst_y = 0;
    int src_w = surf_rect.Width;
    int src_h = surf_rect.Height;

    if (g_ScrollOffsetX < 0)
    {
        src_x = -g_ScrollOffsetX;
        src_w += g_ScrollOffsetX;
    }
    else if (g_ScrollOffsetX > 0)
    {
        dst_x = g_ScrollOffsetX;
    }

    if (g_ScrollOffsetY < 0)
    {
        src_y = -g_ScrollOffsetY;
        src_h += g_ScrollOffsetY;
    }
    else if (g_ScrollOffsetY > 0)
    {
        dst_y = g_ScrollOffsetY;
    }

    // Clamp to window size
    if (dst_x + src_w > win_w) src_w = win_w - dst_x;
    if (dst_y + src_h > win_h) src_h = win_h - dst_y;
    if (src_w <= 0 || src_h <= 0) return true;

    // Lock the composite surface to read pixels
    void* src_buf = composite_surface->Lock(src_x, src_y);
    if (!src_buf)
        return false;

    int bpp = composite_surface->GetBytesPerPixel();
    int pitch = composite_surface->GetPitch();

    // Lock primary surface for writing
    DDSURFACEDESC2 desc = {};
    desc.dwSize = sizeof(desc);
    if (FAILED(ctx->primary->Lock(nullptr, &desc, DDLOCK_WAIT, nullptr)))
    {
        composite_surface->Unlock();
        return false;
    }

    uint8_t* dst_row = static_cast<uint8_t*>(desc.lpSurface);
    int dst_pitch = desc.lPitch;

    // Copy scanlines from composite to primary
    uint8_t* src_row = static_cast<uint8_t*>(src_buf);
    int row_bytes = src_w * bpp;

    for (int y = 0; y < src_h; ++y)
    {
        uint8_t* d = dst_row + (dst_y + y) * dst_pitch + dst_x * bpp;
        uint8_t* s = src_row + y * pitch;
        memcpy(d, s, row_bytes);
    }

    ctx->primary->Unlock(nullptr);
    composite_surface->Unlock();

    // Flip to screen
    DDrawFlip();
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

// IDA: 0x4BF650 — BlendMinimapPixel (119B)
// fastcall: ECX=src_pixel, EDX=dst_pixel, [ESP+4]=blend_pct
// Blends two 16-bit minimap pixels using g_DDraw_Gray127 as blend mask.
// blend_pct: 0=full replacement, 25/50/75=blend, default=keep src
uint16_t BlendMinimapPixel(uint16_t src, uint16_t dst, int blend_pct)
{
    uint16_t result = src;

    switch (blend_pct)
    {
    case 0:
        // Full replacement with destination pixel
        result = dst;
        break;
    case 25:
        // 25% blend: (gray_mask_hi & (src >> 2)) * 4
        result = static_cast<uint16_t>(
            4 * (HIWORD(g_DDraw_Gray127) & (src >> 2)));
        break;
    case 50:
        // 50% blend: (gray & (dst >> 1)) + (gray & (src >> 1))
        result = static_cast<uint16_t>(
            (g_DDraw_Gray127 & (dst >> 1)) + (g_DDraw_Gray127 & (src >> 1)));
        break;
    case 75:
        // 75% blend: same formula as 25% (IDA confirms identical)
        result = static_cast<uint16_t>(
            4 * (HIWORD(g_DDraw_Gray127) & (src >> 2)));
        break;
    default:
        // 100% — keep source pixel
        break;
    }

    return result;
}

// IDA: 0x4A3DD0 — DDrawLogError (100B)
// fastcall: ECX=error_code, EDX=show_info_flag
// DirectDraw error handler: either calls registered callback or shows MessageBox.
int DDrawLogError(UINT error_code, bool show_info)
{
    if (error_code)
    {
        if (g_DDraw_ErrorCallback)
        {
            return g_DDraw_ErrorCallback(error_code);
        }
        else
        {
            char text[80];
            sprintf(text, "DDRAW.DLL Error code = %08X", error_code);
            return MessageBoxA(g_hWnd, text, "Direct X", MB_ICONEXCLAMATION | MB_OK);
        }
    }
    else if (show_info)
    {
        return MessageBoxA(g_hWnd,
            "Direct Draw operation processed without error",
            "Note", MB_OK);
    }
    return 0;
}

} // namespace gamemd
