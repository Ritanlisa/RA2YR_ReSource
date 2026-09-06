// 自动生成 by tools/move_hpp_bodies.py — 函数体自 src/render/font_render.hpp 迁出
// hpp-impl 门控: 头文件只允许声明（= default 析构亦移出）
#include "font_render.hpp"

namespace gamemd {
void FontDrawText(uint16_t* buf, int pitch, int x, int y, int w, int h,
                          const char* text, uint16_t color) {
    if (!text || !buf) return;
    int cx = x;
    for (const char* p = text; *p && cx < w; p++) {
        unsigned char ch = (unsigned char)*p;
        if (ch < 32 || ch > 126) { cx += 8; continue; }
        int idx = ch - 32;
        if (idx < 0 || idx >= (int)(sizeof(kFontData)/sizeof(kFontData[0]))) { cx += 8; continue; }
        const uint8_t* glyph = kFontData[idx];
        for (int row = 0; row < 16; row++) {
            int sy = y + row;
            if (sy < 0 || sy >= h) continue;
            uint8_t bits = glyph[row];
            for (int col = 0; col < 8; col++) {
                int sx = cx + col;
                if (sx < 0 || sx >= w) continue;
                if (bits & (0x80 >> col))
                    buf[sy * pitch + sx] = color;
            }
        }
        cx += 8;
    }
}
}

