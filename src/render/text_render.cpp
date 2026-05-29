#include "gamemd/render/text_render.hpp"

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
                              reinterpret_cast<void**>(&m_bits), nullptr, 0);
    if (!m_bmp) {
        DeleteDC(m_hdc);
        ReleaseDC(nullptr, hdc);
        m_hdc = nullptr;
        return false;
    }

    m_old_bmp = static_cast<HBITMAP>(SelectObject(m_hdc, m_bmp));

    m_font = CreateFontA(16, 0, 0, 0, FW_NORMAL, FALSE, FALSE, FALSE,
                          DEFAULT_CHARSET, OUT_DEFAULT_PRECIS,
                          CLIP_DEFAULT_PRECIS, DEFAULT_QUALITY,
                          FIXED_PITCH | FF_MODERN, "Consolas");
    if (m_font) SelectObject(m_hdc, m_font);

    SetBkMode(m_hdc, TRANSPARENT);
    SetTextColor(m_hdc, RGB(255, 255, 255));

    RECT rc = { 0, 0, max_width, max_height };
    FillRect(m_hdc, &rc, static_cast<HBRUSH>(GetStockObject(BLACK_BRUSH)));

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

void TextRenderer::DrawText(DSurface* target, int x, int y,
                             const wchar_t* text, uint8_t r, uint8_t g, uint8_t b)
{
    if (!m_hdc || !m_bits || !target) return;

    RECT rc = { 0, 0, m_width, m_height };
    SetTextColor(m_hdc, RGB(r, g, b));
    DrawTextW(m_hdc, text, -1, &rc, DT_LEFT | DT_TOP | DT_NOCLIP);

    DDSURFACEDESC2 desc = {};
    desc.dwSize = sizeof(desc);
    if (FAILED(target->Surface->Lock(nullptr, &desc, DDLOCK_WAIT, nullptr))) return;

    uint16_t* dst = static_cast<uint16_t*>(desc.lpSurface);
    int pitch = desc.lPitch / 2;

    for (int row = 0; row < m_height && (y + row) < target->Height; ++row) {
        for (int col = 0; col < m_width && (x + col) < target->Width; ++col) {
            uint8_t* src_px = &m_bits[(row * m_width + col) * 4];
            if (src_px[3] > 0) {
                uint16_t r5 = static_cast<uint16_t>(src_px[2] >> 3);
                uint16_t g6 = static_cast<uint16_t>(src_px[1] >> 2);
                uint16_t b5 = static_cast<uint16_t>(src_px[0] >> 3);
                dst[(y + row) * pitch + (x + col)] =
                    static_cast<uint16_t>((r5 << 11) | (g6 << 5) | b5);
            }
        }
    }

    target->Surface->Unlock(nullptr);
}

void TextRenderer::DrawText(DSurface* target, int x, int y,
                             const char* text, uint8_t r, uint8_t g, uint8_t b)
{
    if (!text) return;
    int len = MultiByteToWideChar(CP_ACP, 0, text, -1, nullptr, 0);
    std::wstring wstr(len, L'\0');
    MultiByteToWideChar(CP_ACP, 0, text, -1, &wstr[0], len);
    DrawText(target, x, y, wstr.c_str(), r, g, b);
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
