#include "ui/gadget.hpp"
#include "render/text_render.hpp"
#include "render/shp_render.hpp"
#include "core/logging.hpp"
#include <cstring>
#include <algorithm>

namespace gamemd {

// --- ShpButtonClass ---

ShpButtonClass::ShpButtonClass(uint32_t id, int x, int y, ShpImage* img,
                               const uint8_t palette[256][4])
    : Image(img), Palette(palette)
{
    ID = id;
    X = x;
    Y = y;
    if (img) {
        Width  = img->GetWidth();
        Height = img->GetHeight();
    }
}

void ShpButtonClass::Draw(DSurface* surface, TextRenderer* text)
{
    (void)text;
    if (!Visible || !surface || !Image) return;

    int frame = 0;
    if (Pressed) frame = 2;
    else if (Hovered) frame = 1;

    if (frame >= Image->GetFrameCount()) frame = 0;
    Image->RenderToSurface(surface, frame, X, Y, Palette);
}

bool ShpButtonClass::OnClick(int x, int y)
{
    (void)x; (void)y;
    Pressed = true;
    if (Callback) { Callback(); return true; }
    return false;
}

void ShpButtonClass::OnMouseEnter() { Hovered = true; }
void ShpButtonClass::OnMouseLeave() { Hovered = false; Pressed = false; }

TextButtonClass::TextButtonClass(uint32_t id, const char* text,
                                   int x, int y, int w, int h)
    : Text(text ? text : ""), R(255), G(255), B(255)
{
    ID     = id;
    X      = x;
    Y      = y;
    Width  = w;
    Height = h;
}

void TextButtonClass::Draw(DSurface* surface, TextRenderer* text)
{
    if (!Visible || !surface) return;

    uint16_t bg_color, border_color;
    if (Hovered) {
        bg_color    = 0x7BEF;
        border_color = 0xFFFF;
    } else {
        bg_color    = 0x2104;
        border_color = 0x632C;
    }

    RectangleStruct bg = { X, Y, Width, Height };
    bool fillOk = surface->FillRect(bg, bg_color);
    if (!fillOk) LOG_DEBUG("[GADGET] TextButton FillRect failed at (%d,%d %dx%d)", X, Y, Width, Height);

    RectangleStruct top = { X, Y, Width, 1 };
    RectangleStruct bot = { X, Y + Height - 1, Width, 1 };
    RectangleStruct left= { X, Y, 1, Height };
    RectangleStruct right={ X + Width - 1, Y, 1, Height };
    surface->FillRect(top, border_color);
    surface->FillRect(bot, border_color);
    surface->FillRect(left, border_color);
    surface->FillRect(right, border_color);

    if (text && !Text.empty()) {
        int tx = X + (Width - text->GetTextWidth(
            std::wstring(Text.begin(), Text.end()).c_str())) / 2;
        int ty = Y + (Height - text->GetTextHeight()) / 2;
        text->DrawText(surface, tx, ty, Text.c_str(), R, G, B);
    }
}

bool TextButtonClass::OnClick(int x, int y)
{
    (void)x;
    (void)y;
    if (Callback) { Callback(); return true; }
    return false;
}

void TextButtonClass::OnMouseEnter()
{
    Hovered = true;
}

void TextButtonClass::OnMouseLeave()
{
    Hovered = false;
}

LabelClass::LabelClass(uint32_t id, const char* text, int x, int y,
                         uint8_t r, uint8_t g, uint8_t b)
    : Text(text ? text : ""), R(r), G(g), B(b)
{
    ID  = id;
    X   = x;
    Y   = y;
    Width = 0;
    Height= 0;
}

void LabelClass::Draw(DSurface* surface, TextRenderer* text)
{
    if (!Visible || !surface || !text) return;
    text->DrawText(surface, X, Y, Text.c_str(), R, G, B);
}

DialogClass::DialogClass(int x, int y, int w, int h)
    : x(x), y(y), w(w), h(h)
{
}

void DialogClass::OnRender(DSurface* surface, TextRenderer* text)
{
    if (!visible || !surface) return;

    if (drawBackground)
        DrawBackground(surface);

    for (auto* g : gadgets) {
        if (g && g->Visible) {
            g->Draw(surface, text);
        }
    }
}

void DialogClass::OnupdateLogic()
{
}

bool DialogClass::OnMouseClick(int mouse_x, int mouse_y)
{
    if (!visible) return false;

    for (auto* g : gadgets) {
        if (!g || !g->Visible || !g->Enabled) continue;
        if (mouse_x >= g->X && mouse_x < g->X + g->Width &&
            mouse_y >= g->Y && mouse_y < g->Y + g->Height) {
            return g->OnClick(mouse_x, mouse_y);
        }
    }
    return false;
}

void DialogClass::OnMouseMove(int mouse_x, int mouse_y)
{
    if (!visible) return;

    for (auto* g : gadgets) {
        if (!g || !g->Visible || !g->Enabled) continue;
        bool inside = (mouse_x >= g->X && mouse_x < g->X + g->Width &&
                       mouse_y >= g->Y && mouse_y < g->Y + g->Height);
        if (inside) g->OnMouseEnter();
        else        g->OnMouseLeave();
    }
}

bool DialogClass::OnKeyDown(int key)
{
    (void)key;
    return false;
}

void DialogClass::AddGadget(GadgetClass* gadget)
{
    gadgets.push_back(gadget);
}

void DialogClass::ClearGadgets()
{
    for (auto* g : gadgets) delete g;
    gadgets.clear();
}

void DialogClass::SetVisible(bool visible)
{
    visible = visible;
}

void DialogClass::DrawBackground(DSurface* surface)
{
    RectangleStruct bg = { x, y, w, h };
    surface->FillRect(bg, 0x1082);

    RectangleStruct top = { x, y, w, 2 };
    RectangleStruct bot = { x, y + h - 2, w, 2 };
    RectangleStruct left= { x, y, 2, h };
    RectangleStruct right={ x + w - 2, y, 2, h };
    surface->FillRect(top,  0x39C7);
    surface->FillRect(bot,  0x39C7);
    surface->FillRect(left, 0x39C7);
    surface->FillRect(right,0x39C7);
}

// ============================================================================
// GadgetClass binary-compatible methods (original gamemd.exe)
// These operate on raw gadget data matching the original binary layout.
// IDA offsets: +0x0C=X, +0x10=Y, +0x14=Width, +0x18=Height,
//   +0x1C=NeedsRedraw, +0x1D=IsSticky, +0x1E=Disabled, +0x20=Flags
// ============================================================================

// IDA 0x4E12F0: GadgetClass::Construct — initialize gadget fields
// params: this, x, y, w, h, flags, isSticky
static void GadgetClass_Construct(void* self, int x, int y, int w, int h, unsigned flags, bool isSticky)
{
    uint8_t* p = static_cast<uint8_t*>(self);
    // Set vtable (IDA: *this = &GadgetClass::vftable) — skip for modern C++
    *reinterpret_cast<int*>(p + 0x0C) = x;
    *reinterpret_cast<int*>(p + 0x10) = y;
    *reinterpret_cast<int*>(p + 0x14) = w;
    *reinterpret_cast<int*>(p + 0x18) = h;
    *reinterpret_cast<int*>(p + 0x00) = 0; // LinkClass::Next
    *reinterpret_cast<int*>(p + 0x04) = 0; // LinkClass::Prev
    p[0x1C] = 0; // NeedsRedraw = false
    p[0x1E] = 0; // Disabled = false
    p[0x1D] = isSticky ? 1 : 0;
    *reinterpret_cast<unsigned*>(p + 0x20) = flags;
    if (isSticky)
        *reinterpret_cast<unsigned*>(p + 0x20) = flags | 5;
}

// IDA 0x4E1390: GadgetClass::Dtor — destructor, clears global gadget pointers
static int GadgetClass_Dtor(void* self)
{
    // IDA: *this = &GadgetClass::vftable (restore vtable)
    // Clears dword_8B3E90, dword_8B3E88, dword_8B3E8C if they point to this
    // Returns LinkClass::Destruct()

    // Global gadget state pointers (IDA .data)
    static void* g_focusedGadget = nullptr;   // dword_8B3E90
    static void* g_prevGadget = nullptr;      // dword_8B3E88
    static void* g_otherGadget = nullptr;     // dword_8B3E8C

    if (self == g_focusedGadget) {
        uint8_t* p = static_cast<uint8_t*>(self);
        unsigned flags = *reinterpret_cast<unsigned*>(p + 0x20);
        flags &= ~1u;
        *reinterpret_cast<unsigned*>(p + 0x20) = flags;
        g_focusedGadget = nullptr;
    }
    if (self == g_prevGadget)
        g_prevGadget = nullptr;
    if (self == g_otherGadget)
        g_otherGadget = nullptr;
    if (self == g_focusedGadget)
        g_focusedGadget = nullptr;
    return 0; // LinkClass::Destruct equivalent
}

// IDA 0x4E1550: GadgetClass::ClearState — clear sticky/selected state
static bool GadgetClass_ClearState(void* self, bool force)
{
    uint8_t* p = static_cast<uint8_t*>(self);
    if (!force && !p[0x1C]) // if not force and not NeedsRedraw
        return false;
    p[0x1C] = 0; // clear NeedsRedraw
    return true;
}

// IDA 0x723EA0: GadgetClass::Show — make gadget visible
static void GadgetClass_Show(void* self)
{
    uint8_t* p = static_cast<uint8_t*>(self);
    // IDA: vtable call to vfunc at +72 (update/redraw), set byte at +45 (=0x2D) to 1
    p[0x2D] = 1; // Visible flag at offset 0x2D
    // vtable[72/4=18]() — redraw callback, skipped for modern C++
}

// IDA 0x723EB0: GadgetClass::Hide — hide gadget
static void GadgetClass_Hide(void* self)
{
    uint8_t* p = static_cast<uint8_t*>(self);
    p[0x2D] = 0; // Visible flag = 0
    // vtable[72/4=18]() — redraw callback, skipped
}

// IDA 0x623560: GadgetClass::SetTooltip — set tooltip string (wchar_t*)
static void GadgetClass_SetTooltip(void* self, const wchar_t* tooltip)
{
    uint8_t* p = static_cast<uint8_t*>(self);
    wchar_t** tooltipPtr = reinterpret_cast<wchar_t**>(p + 0x28); // offset +10 dwords = 0x28

    // Free existing tooltip
    if (*tooltipPtr) {
        delete[] *tooltipPtr;
        *tooltipPtr = nullptr;
    }

    // Copy new tooltip
    if (tooltip && *tooltip) {
        size_t len = wcslen(tooltip);
        *tooltipPtr = new wchar_t[len + 1];
        wcscpy(*tooltipPtr, tooltip);
    }
}

// IDA 0x77A700: GadgetClass::TrackState — track gadget state changes
// params: self, newState, eventType
// +0x10=current state (dword at offset 16), +0x14=event count (dword at offset 20),
// +0x08=needs redraw byte
static char GadgetClass_TrackState(void* self, int newState, int eventType)
{
    uint8_t* p = static_cast<uint8_t*>(self);
    int curState = *reinterpret_cast<int*>(p + 0x10);

    if (newState == curState) {
        if (eventType == 2) {
            if (!p[0x14]) { // byte at +0x14 (event count lo-byte check)
                p[0x14] = 1;
                p[0x08] = 1; // NeedsRedraw-like byte at +0x08
            }
        }
    } else if ((!curState || eventType >= *reinterpret_cast<int*>(p + 0x18)) && newState) {
        if (eventType == 3)
            p[0x14] = 0;
        *reinterpret_cast<int*>(p + 0x10) = newState;
        *reinterpret_cast<int*>(p + 0x18) = eventType;
        p[0x08] = 1;
    }
    return static_cast<char>(curState);
}

// ============================================================================
// Gadget::InitProperties (0x600630)
// Initializes a gadget property block (used by list box item setup)
// ============================================================================

// IDA 0x600630: Gadget::InitProperties
void Gadget_InitProperties(void* self)
{
    uint8_t* p = static_cast<uint8_t*>(self);
    // IDA: unknown_libname_74(this+1) — sub-object init
    //       unknown_libname_74(this+2) — sub-object init
    *reinterpret_cast<int*>(p + 0x00) = 0;  // clear
    *reinterpret_cast<int*>(p + 0x0C) = -1; // index = -1
    *reinterpret_cast<int*>(p + 0x14) = -1; // end index = -1
    *reinterpret_cast<int*>(p + 0x10) = 0;  // start index = 0
}

// ============================================================================
// SimpleDialogControl (0x624110)
// Lightweight dialog control for WOL online screens
// ============================================================================

// IDA 0x624110: SimpleDialogControl::Constructor
// Initializes a 9-byte control: {vtable, dword0, byte8}
static void SimpleDialogControl_Construct(void* self)
{
    uint8_t* p = static_cast<uint8_t*>(self);
    *reinterpret_cast<int*>(p + 0x00) = 0; // +0: vtable placeholder
    p[0x08] = 0; // +8: flag byte = 0
}

// ============================================================================
// DialogControl (0x623340, 0x4E1450, 0x4E1460, 0x4E1470)
// Size 0x200 (512 bytes), used for menu screen control tracking
// ============================================================================

// IDA 0x623340: DialogControl::Constructor — zero-init 0x200 bytes, set defaults
static void DialogControl_Construct(void* self)
{
    uint8_t* p = static_cast<uint8_t*>(self);
    memset(p, 0, 0x200);

    *reinterpret_cast<int*>(p + 0x68) = 11;     // +26 dwords = 0x68: default value 11
    *reinterpret_cast<int*>(p + 0x64) = 1;      // +25 dwords: g_FogOfWarState-like

    // Allocate internal sub-struct
    void* sub = operator new(4);
    if (sub) {
        memset(sub, 0, 4);
        *reinterpret_cast<int*>(p + 0x3C) = reinterpret_cast<int>(sub); // +15 dwords
    } else {
        *reinterpret_cast<int*>(p + 0x3C) = 0;
    }

    *reinterpret_cast<int*>(p + 0x40) = 0;      // +16 dwords = 0
    *reinterpret_cast<int*>(p + 0x5C) = 0;      // +23 dwords = 0
    *reinterpret_cast<int*>(p + 0x90) = -1;     // +36 dwords = -1
}

// IDA 0x4E1450: DialogControl::Hide
static void DialogControl_Hide(void* self)
{
    uint8_t* p = static_cast<uint8_t*>(self);
    p[0x1E] = 0; // byte at +30 = 0 (visible flag off)
    p[0x1C] = 1; // byte at +28 = 1 (needs redraw)
}

// IDA 0x4E1460: DialogControl::Show
static void DialogControl_Show(void* self)
{
    uint8_t* p = static_cast<uint8_t*>(self);
    p[0x1E] = 1; // byte at +30 = 1 (visible flag on)
    p[0x1C] = 1; // byte at +28 = 1 (needs redraw)
}

// IDA 0x4E1470: DialogControl::IsHidden
static bool DialogControl_IsHidden(void* self)
{
    uint8_t* p = static_cast<uint8_t*>(self);
    return p[0x1E] == 0; // byte at +30 == 0
}

// ============================================================================
// GadgetGrid (0x4134A0, 0x4135D0)
// Grid-based gadget container for list/dropdown items
// ============================================================================

// IDA 0x4134A0: GadgetGrid::InsertItem
static void GadgetGrid_InsertItem(void* self, int index, void* item)
{
    // IDA: array insert at position index
    uint8_t* p = static_cast<uint8_t*>(self);
    int count = *reinterpret_cast<int*>(p + 0x04); // item count at +4
    void** items = reinterpret_cast<void**>(*reinterpret_cast<int*>(p + 0x08)); // array ptr at +8

    // Shift items down
    if (index < count) {
        memmove(&items[index + 1], &items[index], (count - index) * sizeof(void*));
    }
    items[index] = item;
    *reinterpret_cast<int*>(p + 0x04) = count + 1;
}

// IDA 0x4135D0: GadgetGrid::RemoveItem
static void GadgetGrid_RemoveItem(void* self, int index)
{
    uint8_t* p = static_cast<uint8_t*>(self);
    int count = *reinterpret_cast<int*>(p + 0x04);
    if (index < 0 || index >= count) return;

    void** items = reinterpret_cast<void**>(*reinterpret_cast<int*>(p + 0x08));
    delete items[index]; // free the item

    // Shift items up
    int tail = count - index - 1;
    if (tail > 0)
        memmove(&items[index], &items[index + 1], tail * sizeof(void*));
    items[count - 1] = nullptr;
    *reinterpret_cast<int*>(p + 0x04) = count - 1;
}

// ============================================================================
// DialogQueue (0x5D4E70, 0x5D4ED0)
// Queue of dialog events used to postpone dialog operations
// ============================================================================

// IDA 0x5D4E70: DialogQueue::PushEntry — add entry to end of queue
static void DialogQueue_PushEntry(void* self, int entryType, int param)
{
    uint8_t* p = static_cast<uint8_t*>(self);
    int count = *reinterpret_cast<int*>(p + 0x00);
    if (count >= 16) return; // max 16 entries

    *reinterpret_cast<int*>(p + 0x04 + count * 8) = entryType;
    *reinterpret_cast<int*>(p + 0x08 + count * 8) = param;
    *reinterpret_cast<int*>(p + 0x00) = count + 1;
}

// IDA 0x5D4ED0: DialogQueue::RemoveEntry — remove entry from front of queue
// Returns: 0 = queue empty, 1 = removed entry
static int DialogQueue_RemoveEntry(void* self)
{
    uint8_t* p = static_cast<uint8_t*>(self);
    int count = *reinterpret_cast<int*>(p + 0x00);
    if (count <= 0) return 0;

    // Shift entries left
    int tail = count - 1;
    if (tail > 0)
        memmove(p + 0x04, p + 0x0C, tail * 8);
    *reinterpret_cast<int*>(p + 0x00) = tail;
    return 1;
}

// ============================================================================
// DialogClass methods (original binary)
// ============================================================================

// IDA 0x5D6350: DialogClass::GetFlag — returns *(this + 52) as bool
bool DialogClass_GetFlag(void* self)
{
    uint8_t* p = static_cast<uint8_t*>(self);
    return p[52] != 0;
}

// IDA 0x623610: DialogClass::CopyTemplateStruct — copy DLGTEMPLATE into internal buffer
// Copies dialog template data to a local buffer at this+72
void DialogClass_CopyTemplateStruct(void* self, const void* template_data, int template_size)
{
    uint8_t* p = static_cast<uint8_t*>(self);
    // IDA: allocates buffer, copies template data to *(this+72)
    // PENDING: full decompile
    (void)template_data;
    (void)template_size;
}

// IDA 0x60D450: DialogClass::RegisterWinClasses — register window classes for dialog
void DialogClass_RegisterWinClasses()
{
    // IDA: RegisterClassA for custom dialog control classes
    // PENDING: full decompile
}

// IDA 0x775BC0: DialogClass::Reposition — reposition dialog or child window
// Called by EnumChildWindows and as standalone function
bool DialogClass_Reposition(HWND hWnd, LPARAM lParam)
{
    // IDA: gets window rect, adjusts position based on parent
    RECT rect;
    if (GetWindowRect(hWnd, &rect)) {
        HWND parent = GetParent(hWnd);
        if (parent) {
            POINT pt = { rect.left, rect.top };
            ScreenToClient(parent, &pt);
            SetWindowPos(hWnd, nullptr, pt.x, pt.y, 0, 0, SWP_NOSIZE | SWP_NOZORDER);
        }
    }
    return TRUE;
}

// IDA 0x60AAB0: GadgetClass::FindByWindow — find gadget by window handle
// 1156 bytes — iterates gadget linked list, matches HWND
static void* GadgetClass_FindByWindow(HWND hWnd)
{
    // IDA: iterates global gadget linked list (g_GadgetList)
    // Compares each gadget's stored HWND against search HWND
    // Returns gadget pointer if found, nullptr otherwise

    // Global gadget list head (dword_8B3E90 area)
    // Simplified: return nullptr (no global list in simplified model)
    (void)hWnd;
    return nullptr;
}

// ============================================================================
// RenderTextLabel (0x4A5EB0)
// IDA: fastcall, renders single-line text with alignment/flags
// Used by: TextRenderer::Printf, TextRenderer::DrawText, TechnoClass::DrawPowerIndicator
// ============================================================================
struct TextLabelResult {
    int endX;
    int endY;
};

// Forward declarations for render pipeline stubs
static void TextTextLayout(int, int*, int**, int);
static void TextDrawBorder(int, int*, int*, int, int);
static void TextDrawShadow(int, int*, int);
static void CharSwap(int);
static void TextGroupSetRect(int*);
static void PropertySet(int16_t);
static void FontRendererDrawText(int, int, int, int, int, int, int);

// IDA 0x4A5EB0: RenderTextLabel
static TextLabelResult RenderTextLabel(TextLabelResult* out, int surfaceObj,
    int strObj, int* textBounds, int totalWidth, int16_t flags,
    int xPos, int yPos)
{
    int* bounds = textBounds;
    int xLeft = bounds[0] + xPos;
    int yTop  = bounds[1] + yPos;

    // Text::Layout — compute text layout
    TextTextLayout(surfaceObj, &totalWidth, &bounds, bounds[2]);

    // Apply alignment flags
    if (flags & 0x100) { // center horizontally
        xLeft += totalWidth / -2;
    } else if (flags & 0x200) { // right-align
        xLeft -= totalWidth;
    }

    // Draw shadow/outline based on flags
    bool shadow = (flags & 0x80) != 0;
    if (!shadow) {
        int borderX = xLeft - 1;
        int borderY = yTop - 1;
        // Draw dark border rectangle
        TextDrawBorder(surfaceObj, &borderX, &borderY, flags & 0x7F, 60);
    } else {
        int shadowX = xLeft - 1;
        int shadowY = yTop - 1;
        // Draw shadow
        TextDrawShadow(surfaceObj, &shadowX, 0);
    }

    // Final text output
    CharSwap(1);
    TextGroupSetRect(bounds);
    PropertySet(flags & 0xFFFF);
    FontRendererDrawText(/*fog*/ 0, surfaceObj, strObj, xLeft, yTop, 0, 0);

    if (out) {
        out->endX = xLeft;
        out->endY = yTop;
    }
    return { xLeft, yTop };
}

// Stubs for rendering pipeline (PENDING: full render subsystem)
static void TextTextLayout(int, int*, int**, int) {}
static void TextDrawBorder(int, int*, int*, int, int) {}
static void TextDrawShadow(int, int*, int) {}
static void CharSwap(int) {}
static void TextGroupSetRect(int*) {}
static void PropertySet(int16_t) {}
static void FontRendererDrawText(int, int, int, int, int, int, int) {}

// IDA 0x4A6360: RenderTextLabelWordWrap
// Wraps text to fit within maxWidth, calling RenderTextLabel per line
static void RenderTextLabelWordWrap(int surfaceObj, int strObj,
    int* textBounds, int maxWidth, int16_t flags, int xPos, int yPos)
{
    if (!strObj) return;

    int totalWidth = textBounds[2]; // text width
    int offset = 0;
    int* bounds = textBounds;

    while (offset < totalWidth) {
        TextTextLayout(surfaceObj, &totalWidth, &bounds, bounds[2]);

        if (xPos + bounds[0] + totalWidth > maxWidth) {
            // Would overflow — break here (word wrap)
            break;
        }

        TextLabelResult result;
        RenderTextLabel(&result, surfaceObj, strObj, bounds, totalWidth, flags, xPos, yPos);
        yPos += bounds[3]; // move to next line
        offset += bounds[2];
    }
}

// IDA 0x61E700: GroupLabel::WndProc
// Window procedure for group label controls (static text in dialogs)
// Simplified: returns default processing
static LRESULT CALLBACK GroupLabel_WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    (void)hWnd; (void)msg; (void)wParam; (void)lParam;
    return DefWindowProcA(hWnd, msg, wParam, lParam);
}

// IDA 0x5EB060: Lobby::UpdatePlayerLabels
// Updates the player name labels in multi-player lobby dialogs
void Lobby_UpdatePlayerLabels(void* dialog)
{
    // Original: iterates player slots, updates name/status labels
    // For each slot in dialog, reads player info and sets label text
    (void)dialog;
    // PENDING: full implementation requires LobbyClass + player slot iteration
}

// IDA 0x46FA20: Lobby::UpdateReadyIcons
// Updates ready-state icons for multiplayer lobby players
void Lobby_UpdateReadyIcons(void* dialog)
{
    // Original: iterates player slots, shows/hides ready checkmark icons
    (void)dialog;
    // PENDING: full implementation requires LobbyClass + icon rendering
}

// IDA 0x5EE6A0: NetworkLobby::UpdateLabels
// Updates network lobby label text (connection status, player count)
void NetworkLobby_UpdateLabels(void* dialog)
{
    // Original: updates WiFi/network status labels in lobby dialog
    (void)dialog;
    // PENDING: full implementation requires NetworkLobbyClass
}

} // namespace gamemd

#include "ui/gadget.hpp"

namespace gamemd {

// --- GadgetClass ---

bool GadgetClass::OnClick(int x, int y) { return false; }

// --- LabelClass ---

void LabelClass::OnMouseEnter() {}
void LabelClass::OnMouseLeave() {}

// --- DialogClass ---

bool DialogClass::IsVisible() const { return visible; }
bool DialogClass::IsFinished() const { return finished; }
void DialogClass::Finish(int result) { finished = true; this->result = result; }
int DialogClass::GetResult() const { return result; }
std::vector<GadgetClass*>& DialogClass::Gadgets() { return gadgets; }

} // namespace gamemd
