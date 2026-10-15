#include "render/display.hpp"
#include "render/surface.hpp"
#include "core/ddraw_init.hpp"
#include <windows.h>
#include <cstring>
#include "core/game_loop.hpp"  // G42.39: g_hWnd (HWND form)
namespace gamemd { extern void * g_ScrollOffsetX; extern void * g_ScrollOffsetY; }  // G42.39 decl supply (extern form)

namespace gamemd
{


DisplayClass::DisplayClass() noexcept
    : CurrentFoundation_CenterCell{}
    , CurrentFoundation_TopLeftOffset{}
    , CurrentFoundation_Data(nullptr)
    , DisplayClass_field_1180(false)
    , DisplayClass_field_1181(false)
    , CurrentFoundationCopy_CenterCell{}
    , CurrentFoundationCopy_TopLeftOffset{}
    , CurrentFoundationCopy_Data(nullptr)
    , DisplayClass_field_1190(0)
    , DisplayClass_field_1194(0)
    , DisplayClass_field_1198(0)
    , FollowObject(false)
    , ObjectToFollow(nullptr)
    , CurrentBuilding(nullptr)
    , CurrentBuildingType(nullptr)
    , DisplayClass_field_11AC(0)
    , RepairMode(false)
    , SellMode(false)
    , PowerToggleMode(false)
    , PlanningMode(false)
    , PlaceBeaconMode(false)
    , CurrentSWTypeIndex(-1)
    , DisplayClass_field_11BC(0)
    , DisplayClass_field_11C0(0)
    , DisplayClass_field_11C4(0)
    , DisplayClass_field_11C8(0)
    , DisplayClass_field_bool_11CC(false)
    , DisplayClass_field_bool_11CD(false)
    , DisplayClass_field_bool_11CE(false)
    , DraggingRectangle(false)
    , DisplayClass_field_bool_11D0(false)
    , DisplayClass_field_bool_11D1(false)
    , DisplayClass_field_11D4(0)
    , DisplayClass_field_11D8(0)
    , DisplayClass_field_11DC(0)
    , DisplayClass_field_11E0(0)
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

    if ((int)(long)g_ScrollOffsetX < 0)
    {
        src_x = (int)(-(int)(long)g_ScrollOffsetX);
        src_w += (int)(long)g_ScrollOffsetX;
    }
    else if ((int)(long)g_ScrollOffsetX > 0)
    {
        dst_x = (int)(long)g_ScrollOffsetX);
    }

    if ((int)(long)g_ScrollOffsetY < 0)
    {
        src_y = (int)(-(int)(long)g_ScrollOffsetY);
        src_h += (int)(long)g_ScrollOffsetY;
    }
    else if ((int)(long)g_ScrollOffsetY > 0)
    {
        dst_y = (int)(long)g_ScrollOffsetY);
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

    uint8_t* dst_row = (uint8_t*)(desc.lpSurface);
    int dst_pitch = desc.lPitch;

    // Copy scanlines from composite to primary
    uint8_t* src_row = (uint8_t*)(src_buf);
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
    return (Action)(0);
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

#include "render/display.hpp"

namespace gamemd {

// --- GScreenClass ---

HRESULT GScreenClass::Load(IStream* stream) { return S_OK; }
HRESULT GScreenClass::Save(IStream* stream) { return S_OK; }
void GScreenClass::LoadFromINI(CCINIClass* ini) {}
const wchar_t* GScreenClass::GetToolTip(unsigned int dialog_id) { return nullptr; }
int GScreenClass::CloseWindow() { return 0; }
void GScreenClass::vt_entry_8C() {}
bool GScreenClass::vt_entry_90(const CellStruct& cell, HouseClass* house) { return false; }
bool GScreenClass::vt_entry_94(const CellStruct& cell, HouseClass* house, bool unk) { return false; }
bool GScreenClass::vt_entry_98(const CellStruct& cell, HouseClass* house) { return false; }
bool GScreenClass::vt_entry_9C(const CellStruct& cell, HouseClass* house) { return false; }

// --- DisplayClass ---

void DisplayClass::LoadFromINI(CCINIClass* ini) {}
const wchar_t* DisplayClass::GetToolTip(unsigned int dialog_id) { return nullptr; }
int DisplayClass::CloseWindow() { return 0; }
void DisplayClass::vt_entry_8C() {}
bool DisplayClass::vt_entry_90(const CellStruct& cell, HouseClass* house) { return false; }
// 0x4a9ca0
bool DisplayClass::vt_entry_94(const CellStruct& cell, HouseClass* house, bool unk) { return false; 
  DisplayClass *v5; // esi
  void *DisplayClass_field_0x140; // eax
  bool v7; // bl
  char AdjacentPassableMask; // al
  void *DisplayClass_field_0x12C; // eax
  char v10; // cl
  char result; // al
  char v12; // [esp+Ch] [ebp-4h]
  char v13; // [esp+14h] [ebp+4h]

  v5 = (DisplayClass *)CellCoord::To_CellObj((CellCoord *)this, cell); /*0x4a9cae*/
  DisplayClass_field_0x140 = v5->__pad_140; /*0x4a9cb0*/
  v7 = ((uint8_t)DisplayClass_field_0x140 & 2) == 0; /*0x4a9cbc*/
  if ( ((uint8_t)DisplayClass_field_0x140 & 2) == 0 || (v13 = 0, ((int)v5->q12C & 8) == 0) ) /*0x4a9cd1*/
    v13 = 1; /*0x4a9cd3*/
  (*((unsigned char *)&(DisplayClass_field_0x140))) = (uint8_t)DisplayClass_field_0x140 & 0xBD | 2; /*0x4a9cde*/
  v12 = v13; /*0x4a9ce0*/
  v5->__pad_140 = DisplayClass_field_0x140; /*0x4a9ce4*/
  if ( unk ) /*0x4a9cf2*/
    (v5)->AdvanceFrameCounter(); /*0x4a9cf4*/
  else
    (v5)->UpdateDisplayTimer(); /*0x4a9cfb*/
  AdjacentPassableMask = Cell::GetAdjacentPassableMask(cell, 0); /*0x4a9d09*/
  if ( AdjacentPassableMask != v5->ZoneIterator_Y ) /*0x4a9d14*/
  {
    v13 = 1; /*0x4a9d16*/
    v5->ZoneIterator_Y = AdjacentPassableMask; /*0x4a9d1b*/
  }
  if ( v5->ZoneIterator_Y == -1 ) /*0x4a9d28*/
  {
    DisplayClass_field_0x12C = v5->q12C; /*0x4a9d2a*/
    (*((unsigned char *)&(DisplayClass_field_0x12C))) = (uint8_t)DisplayClass_field_0x12C | 0x10; /*0x4a9d30*/
    v5->q12C = DisplayClass_field_0x12C; /*0x4a9d32*/
  }
  v10 = Cell::GetAdjacentPassableMask(cell, 1); /*0x4a9d46*/
  if ( v10 == v5->q121 ) /*0x4a9d50*/
  {
    result = v13; /*0x4a9d60*/
  }
  else
  {
    result = 1; /*0x4a9d52*/
    v5->q121 = v10; /*0x4a9d54*/
    v13 = 1; /*0x4a9d5a*/
  }
  if ( v5->q121 == -1 ) /*0x4a9d6b*/
    v5->__pad_140 = (void *)((int)v5->__pad_140 | 1); /*0x4a9d6d*/
  if ( result ) /*0x4a9d76*/
  {
    Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v5); /*0x4a9d7f*/
    CellClass::SpiralFindClosest((int)v5, house, v12); /*0x4a9d94*/
    result = v13; /*0x4a9d99*/
  }
  if ( ((int)v5->__pad_140 & 2) != 0 && v7 && ((int)dword_A8B230[0].vfptr & 0x1000) != 0 ) /*0x4a9db5*/
  {
    CellClass::UpdateZone((CellClass *)v5); /*0x4a9db9*/
    return v13; /*0x4a9dbe*/
  }
  return result; /*0x4a9dc2*/
}