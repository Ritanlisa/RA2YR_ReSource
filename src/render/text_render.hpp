#pragma once
#include <windows.h>
#include <string>
#include "core/math.hpp"
#include "render/surface.hpp"

namespace gamemd {

class TextRenderer {
public:
    TextRenderer();
    ~TextRenderer();

    // design: no binary equivalent found in IDA
    bool Init(int max_width, int max_height);
    // design: no binary equivalent found in IDA
    void Shutdown();

    void DrawText(DSurface* target, int x, int y, const wchar_t* text, // 0x4a61c0
                  uint8_t r, uint8_t g, uint8_t b);

    void DrawText(DSurface* target, int x, int y, const char* text, // 0x4a61c0
                  uint8_t r, uint8_t g, uint8_t b);

    // wrapper: delegates to TextRenderer::DrawText at 0x4A61C0
    int GetTextWidth(const wchar_t* text);
    // wrapper: delegates to TextRenderer::DrawText at 0x4A61C0
    int GetTextHeight();

private:
    HDC          m_hdc;
    HBITMAP      m_bmp;
    HBITMAP      m_old_bmp;
    uint8_t*     m_bits;
    int          m_width;
    int          m_height;
    HFONT        m_font;
};

} // namespace gamemd
