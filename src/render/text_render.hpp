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

    void DrawText(DSurface* target, int x, int y, const wchar_t* text,
                  uint8_t r, uint8_t g, uint8_t b);

    void DrawText(DSurface* target, int x, int y, const char* text,
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
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    void* DrawText();  // 0x4a61c0 -- TextRenderer::DrawText
    int MeasureBuilding(int a1, int a2, int a3, int a4, int a5);  // 0x642c80 -- TextRenderer::MeasureBuilding
    // === SYMBOL-ANCHOR (END) ===
};

} // namespace gamemd
