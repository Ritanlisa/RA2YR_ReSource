#include "gamemd/ui/gadget.hpp"
#include "gamemd/render/text_render.hpp"
#include <cstring>
#include <algorithm>

namespace gamemd {

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
    surface->FillRect(bg, bg_color);

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
    : m_x(x), m_y(y), m_w(w), m_h(h)
{
}

void DialogClass::OnRender(DSurface* surface, TextRenderer* text)
{
    if (!m_visible || !surface) return;

    DrawBackground(surface);

    for (auto* g : m_gadgets) {
        if (g && g->Visible) {
            g->Draw(surface, text);
        }
    }
}

void DialogClass::OnUpdate()
{
}

bool DialogClass::OnMouseClick(int mouse_x, int mouse_y)
{
    if (!m_visible) return false;

    for (auto* g : m_gadgets) {
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
    if (!m_visible) return;

    for (auto* g : m_gadgets) {
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
    m_gadgets.push_back(gadget);
}

void DialogClass::SetVisible(bool visible)
{
    m_visible = visible;
}

void DialogClass::DrawBackground(DSurface* surface)
{
    RectangleStruct bg = { m_x, m_y, m_w, m_h };
    surface->FillRect(bg, 0x1082);

    RectangleStruct top = { m_x, m_y, m_w, 2 };
    RectangleStruct bot = { m_x, m_y + m_h - 2, m_w, 2 };
    RectangleStruct left= { m_x, m_y, 2, m_h };
    RectangleStruct right={ m_x + m_w - 2, m_y, 2, m_h };
    surface->FillRect(top,  0x39C7);
    surface->FillRect(bot,  0x39C7);
    surface->FillRect(left, 0x39C7);
    surface->FillRect(right,0x39C7);
}

} // namespace gamemd
