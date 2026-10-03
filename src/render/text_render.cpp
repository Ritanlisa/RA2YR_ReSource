#include "render/text_render.hpp"

namespace gamemd {

TextRenderer::TextRenderer()
    : m_hdc(nullptr), m_bmp(nullptr), m_old_bmp(nullptr)
    , m_bits(nullptr), m_width(0), m_height(0), m_font(nullptr)
{
}

TextRenderer::~TextRenderer()
{
    Shutdown();
}

bool TextRenderer::Init(int max_width, int max_height)
{
    m_width  = max_width;
    m_height = max_height;

    HDC hdc = GetDC(nullptr);
    if (!hdc) return false;

    m_hdc = CreateCompatibleDC(hdc);
    if (!m_hdc) { ReleaseDC(nullptr, hdc); return false; }

    BITMAPINFO bmi = {};
    bmi.bmiHeader.biSize        = sizeof(BITMAPINFOHEADER);
    bmi.bmiHeader.biWidth       = max_width;
    bmi.bmiHeader.biHeight      = -max_height;
    bmi.bmiHeader.biPlanes      = 1;
    bmi.bmiHeader.biBitCount    = 32;
    bmi.bmiHeader.biCompression = BI_RGB;

    m_bmp = CreateDIBSection(hdc, &bmi, DIB_RGB_COLORS,
                              (void**)(&m_bits), nullptr, 0);
    if (!m_bmp) {
        DeleteDC(m_hdc);
        ReleaseDC(nullptr, hdc);
        m_hdc = nullptr;
        return false;
    }

    m_old_bmp = (HBITMAP)(SelectObject(m_hdc, m_bmp));

    m_font = CreateFontA(16, 0, 0, 0, FW_NORMAL, FALSE, FALSE, FALSE,
                          DEFAULT_CHARSET, OUT_DEFAULT_PRECIS,
                          CLIP_DEFAULT_PRECIS, DEFAULT_QUALITY,
                          FIXED_PITCH | FF_MODERN, "Consolas");
    if (m_font) SelectObject(m_hdc, m_font);

    SetBkMode(m_hdc, TRANSPARENT);
    SetTextColor(m_hdc, RGB(255, 255, 255));

    RECT rc = { 0, 0, max_width, max_height };
    FillRect(m_hdc, &rc, (HBRUSH)(GetStockObject(BLACK_BRUSH)));

    ReleaseDC(nullptr, hdc);
    return true;
}

void TextRenderer::Shutdown()
{
    if (m_old_bmp) { SelectObject(m_hdc, m_old_bmp); m_old_bmp = nullptr; }
    if (m_bmp)     { DeleteObject(m_bmp); m_bmp = nullptr; }
    if (m_font)    { DeleteObject(m_font); m_font = nullptr; }
    if (m_hdc)     { DeleteDC(m_hdc); m_hdc = nullptr; }
    m_bits = nullptr;
}

// 0x4a61c0 -- G42.35d: raw formatter bodies quarantined (both def param lists
// were truncated by a historical surgery; binary truth is a swprintf-style
// formatter, see .omo/ida_cache/func_0x4A61C0.json). Hpp overloads are design API.
void TextRenderer::DrawText(DSurface* target, int x, int y, const wchar_t* text,
                            uint8_t r, uint8_t g, uint8_t b)
{
    (void)target; (void)x; (void)y; (void)text; (void)r; (void)g; (void)b;
}

void TextRenderer::DrawText(DSurface* target, int x, int y, const char* text,
                            uint8_t r, uint8_t g, uint8_t b)
{
    (void)target; (void)x; (void)y; (void)text; (void)r; (void)g; (void)b;
}

int TextRenderer::GetTextWidth(const wchar_t* text)
{
    if (!m_hdc || !text) return 0;
    SIZE sz = {};
    GetTextExtentPoint32W(m_hdc, text, (int)wcslen(text), &sz);
    return sz.cx;
}

int TextRenderer::GetTextHeight()
{
    if (!m_hdc) return 16;
    TEXTMETRICW tm = {};
    GetTextMetricsW(m_hdc, &tm);
    return tm.tmHeight;
}

} // namespace gamemd
