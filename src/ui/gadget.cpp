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

} // namespace gamemd
