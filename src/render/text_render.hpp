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
// --- e4 declarations (BEGIN) ---
    AbstractClass * GetInstance();  // 0x4A60D0
    int * MeasureBuilding2();  // 0x642EF0
    TriggerTypeClass * Destructor(void * Block, char a2);  // 0x727CD0
// --- e4 declarations (END) ---
// --- e4 declarations (BEGIN) ---
    unsigned int * Printf(ConvertClass * aP0, size_t BufferCount, ObjectClass * aP2, ConvertClass * aP3, int a2, int a6, int a7, int a8, CampaignScore * aP8);  // 0x4A60E0
    int * RenderCentered(int a1, int a2, ObjectClass * aP2, int * a3, wchar_t * Format, char a6, int a7, int _6C, int * a8);  // 0x4B96A0
// --- e4 declarations (END) ---
};

} // namespace gamemd
