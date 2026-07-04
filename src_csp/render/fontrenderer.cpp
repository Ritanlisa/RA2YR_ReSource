#include "fontrenderer.hpp"

// 0x00434B90
int __stdcall FontRenderer::DrawText(uint32_t *a1, int *a2, unsigned __int16 *a3, int xLeft, int yTop, int a6, int a7)
{
    int v7; // edi
    if ( !a1 )
    return xLeft;
    FontRenderer::InitContext(a1, a2);
    Field::Int_Set(a1, xLeft);
    v7 = FontClass::RenderText((int)a1, a3, xLeft, yTop, a6, a7);
    BufferIO::Cleanup(a1, (int)a2);
    return v7;
}

