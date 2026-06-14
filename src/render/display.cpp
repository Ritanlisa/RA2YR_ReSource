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

// IDA: 0x487690 — DisplayClass::AdvanceFrameCounter (83B)
// Increments frame counter (this+76), clamps to max (this+77),
// sets flag bit 0x20 in (this+80) when counter transitions from <=0 to >0.
int DisplayClass::AdvanceFrameCounter()
{
    auto* fields = reinterpret_cast<int*>(this);

    int prev = fields[76];  // m_frame_counter
    if (prev == -1)
        fields[76] = 0;

    int next = fields[76] + 1;
    fields[76] = next;

    int max_frames = fields[77];  // m_max_frames
    if (next > max_frames)
        fields[76] = max_frames;

    // When counter transitions from stopped to running, set flag
    if (prev <= 0)
    {
        if (fields[76] > 0)
        {
            fields[80] |= 0x20;  // m_display_flags
        }
    }

    return fields[80];
}

// IDA: 0x487630 — DisplayClass::UpdateDisplayTimer (90B)
// Decrements display timer (this+76), manages flag bits at this+75 and this+80.
int DisplayClass::UpdateDisplayTimer()
{
    auto* fields = reinterpret_cast<int*>(this);

    if (fields[76] == 1)
        fields[76] = 0;

    int timer = fields[76] - 1;
    fields[76] = timer;

    int flags75 = fields[75];  // m_timer_flags
    if ((flags75 & 8) && (flags75 & 0x10))
    {
        if (timer <= 0)
        {
            if (fields[80] & 0x20)
                fields[80] &= ~0x20;
        }
    }
    else if (timer <= 0)
    {
        fields[75] = flags75 | 0x18;
    }

    return fields[75];
}

// IDA: 0x7BA4D0 — DisplayClass::ReadFromBuffer (88B)
// Buffered read from internal data buffer (this+3=ptr, this+4=size, this+6=pos).
// Returns number of bytes actually read; advances read position.
int DisplayClass::ReadFromBuffer(void* dest, int size)
{
    auto* fields = reinterpret_cast<int*>(this);
    uint8_t* buffer = reinterpret_cast<uint8_t*>(fields[3]);  // buffer pointer
    int total_size   = fields[4];   // total buffer size (0 = unbounded)
    int& read_pos    = fields[6];   // current read position

    if (!buffer || !dest || size <= 0)
        return 0;

    int remaining = size;
    if (total_size)
    {
        int available = total_size - read_pos;
        if (size >= available)
            remaining = available;
    }

    if (remaining > 0)
        memcpy(dest, buffer + read_pos, remaining);

    read_pos += remaining;
    return remaining;
}

// IDA: 0x72AD20 — Display::GetViewport (98B)
// Returns viewport rectangle {X, Y, Width, Height} accounting for sidebar and credits screen.
extern uint8_t byte_A8EB7C;           // IDA 0xA8EB7C — sidebar visibility flag
extern uint8_t ArmageddonMode;        // IDA 0xA8ED6B — armageddon mode flag
extern int32_t g_CreditsScreenBounds; // IDA 0x886FB8 — screen width constant
extern int32_t g_CreditsScreenConfig; // IDA 0x886FBC — screen height constant

int* Display_GetViewport(int out[4])
{
    int x = 0;
    if (!byte_A8EB7C && !ArmageddonMode)
        x = 168;  // sidebar width

    out[0] = x;
    out[1] = 0;
    out[2] = g_CreditsScreenBounds - 168;
    out[3] = g_CreditsScreenConfig - 32;
    return out;
}

// IDA: 0x4A88C0 — DisplayClass::SetSize (98B)
// Parent setup + zeroes high-offset fields + iterates global array calling vtable[3].
extern void MapClass_Destru_vt07(void*);  // IDA 0x5659F0
extern void* dword_8A0360;               // IDA 0x8A0360 — start of 6-DWORD entry array
extern void* dbl_8A03D8;                 // IDA 0x8A03D8 — end of array

void DisplayClass::SetSize()
{
    auto* fields = reinterpret_cast<uint8_t*>(this);

    MapClass_Destru_vt07(this);

    *reinterpret_cast<int*>(fields + 4516) = 0;
    *reinterpret_cast<int*>(fields + 4520) = 0;
    *reinterpret_cast<int*>(fields + 4524) = -1;
    *reinterpret_cast<int*>(fields + 4476) = 0;
    *reinterpret_cast<int*>(fields + 4536) = -1;
    fields[4528] = 0;
    fields[4559] = 0;
    fields[4560] = 0;
    fields[4529] = 0;
    fields[4530] = 0;

    // Iterate array of 6-DWORD structures, calling vtable[3] on each
    for (auto* entry = reinterpret_cast<int*>(&dword_8A0360);
         reinterpret_cast<uintptr_t>(entry) < reinterpret_cast<uintptr_t>(&dbl_8A03D8);
         entry += 6)
    {
        using VtMethod = int(__thiscall*)(int*);
        auto fn = (*reinterpret_cast<VtMethod**>(entry))[3];
        fn(entry);
    }
}

// IDA: 0x4A8850 — DisplayClass::LoadTypeData (101B)
// Loads PLACE.SHP and SHADOW.SHP via SearchMIXFile, gets viewport, delegates to vtable[42].
extern void  MapClass_Destru_vt05(void*);   // IDA 0x565800
extern void* SearchMIXFile(const char*, int); // IDA 0x5B40B0
extern void* dword_8A03FC;                  // IDA 0x8A03FC
extern void* dword_8A072C;                  // IDA 0x8A072C

void DisplayClass::LoadTypeData()
{
    MapClass_Destru_vt05(this);

    dword_8A03FC = SearchMIXFile("PLACE.SHP", 0);
    dword_8A072C = SearchMIXFile("SHADOW.SHP", 0);

    int viewport[4];
    Display_GetViewport(viewport);

    // vtable[42] = offset 168 → method(this, viewport)
    using VtMethod = int(__thiscall*)(void*, int*);
    auto fn = (*reinterpret_cast<VtMethod**>(this))[42];
    fn(this, viewport);
}

// IDA: 0x5519B0 — DisplayClass::RenderStatusText (124B)
bool DisplayClass::RenderStatusText(int text_id, bool priority)
{
    auto* fields = reinterpret_cast<int*>(this);

    if (priority)
        return InsertPriorityText(text_id) != 0;

    int capacity = fields[2];
    int count    = fields[4];
    if (count >= capacity)
    {
        if (!reinterpret_cast<uint8_t*>(this)[13] && capacity)
            return false;

        int grow_by = fields[5];
        if (grow_by <= 0)
            return false;

        using VtGrow = bool(__thiscall*)(void*, int, int);
        auto grow_fn = (*reinterpret_cast<VtGrow**>(this))[2];
        if (!grow_fn(this, capacity + grow_by, 0))
            return false;
    }

    int idx = fields[4];
    int* data = reinterpret_cast<int*>(fields[1]);
    fields[4] = idx + 1;
    data[idx] = text_id;
    return true;
}

// IDA: 0x551A90 — DisplayClass::InsertPriorityText (140B)
extern bool DisplayClass_sub_55F6220(void*, int);  // IDA 0x5F6220

int DisplayClass::InsertPriorityText(int a2)
{
    auto* fields = reinterpret_cast<int*>(this);
    auto* byte_fields = reinterpret_cast<uint8_t*>(this);

    int capacity = fields[2];
    int count    = fields[4];
    if (count >= capacity)
    {
        if (!byte_fields[13] && capacity)
            return 0;

        int grow_by = fields[5];
        if (grow_by <= 0)
            return 0;

        using VtGrow = bool(__thiscall*)(void*, int, int);
        auto grow_fn = (*reinterpret_cast<VtGrow**>(this))[2];
        if (!grow_fn(this, capacity + grow_by, 0))
            return 0;
    }

    int i;
    void** data = reinterpret_cast<void**>(fields[1]);
    for (i = 0; i < count; ++i)
    {
        if (DisplayClass_sub_55F6220(data[i], a2))
            break;
    }

    // Shift elements right from insertion point
    for (int j = count - 1; j >= i; --j)
    {
        int* entry = reinterpret_cast<int*>(data);
        entry[j + 1] = entry[j];
    }

    data[i] = reinterpret_cast<void*>(static_cast<intptr_t>(a2));
    fields[4] = count + 1;
    return 1;
}

} // namespace gamemd
