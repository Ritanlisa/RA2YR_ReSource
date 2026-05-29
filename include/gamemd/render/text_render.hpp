#pragma once
#include <windows.h>
#include <string>
#include "gamemd/core/math.hpp"
#include "gamemd/render/surface.hpp"

namespace gamemd {

class TextRenderer {
public:
    TextRenderer();
    ~TextRenderer();

    bool Init(int max_width, int max_height);
    void Shutdown();

    void DrawText(DSurface* target, int x, int y, const wchar_t* text,
                  uint8_t r, uint8_t g, uint8_t b);

    void DrawText(DSurface* target, int x, int y, const char* text,
                  uint8_t r, uint8_t g, uint8_t b);

    int GetTextWidth(const wchar_t* text);
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
