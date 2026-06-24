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

    bool Init(int max_width, int max_height); // IDA: NOT_FOUND
    void Shutdown(); // IDA: NOT_FOUND

    void DrawText(DSurface* target, int x, int y, const wchar_t* text, // 0x4a61c0
                  uint8_t r, uint8_t g, uint8_t b);

    void DrawText(DSurface* target, int x, int y, const char* text, // 0x4a61c0
                  uint8_t r, uint8_t g, uint8_t b);

    int GetTextWidth(const wchar_t* text); // IDA: NOT_FOUND
    int GetTextHeight(); // IDA: NOT_FOUND

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
