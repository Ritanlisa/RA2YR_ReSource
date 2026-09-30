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

void * TextRenderer::Shutdown(void *a1 = 0)
{
    if (m_old_bmp) { SelectObject(m_hdc, m_old_bmp); m_old_bmp = nullptr; }
    if (m_bmp)     { DeleteObject(m_bmp); m_bmp = nullptr; }
    if (m_font)    { DeleteObject(m_font); m_font = nullptr; }
    if (m_hdc)     { DeleteDC(m_hdc); m_hdc = nullptr; }
    m_bits = nullptr;
}

// 0x4a61c0
void TextRenderer::DrawText(DSurface* target, int x, int y,
{
  int v8; // eax
  int *v9; // eax
  int v10; // eax
  va_list v12; // [esp+0h] [ebp-410h]
  int v13[2]; // [esp+4h] [ebp-40Ch] BYREF
  unsigned char v14[4]; // [esp+Ch] [ebp-404h] BYREF
  wchar_t Buffer[512]; // [esp+10h] [ebp-400h] BYREF
  va_list Format; // [esp+434h] [ebp+24h] BYREF

  va_start(Format, a8);
  if ( BufferCount ) /*0x4a61cd*/
  {
    vswprintf(Buffer, BufferCount, (const wchar_t *const)Format, v12); /*0x4a61e1*/
    v8 = Color::ConvertToRGB(v14); /*0x4a6202*/
    IDA_LOWORD(v13[0]) = *(unsigned short *)v8; /*0x4a6210*/
    IDA_BYTE2(v13[0]) = *(unsigned char *)(v8 + 2); /*0x4a621b*/
    v9 = RenderTextLabel( /*0x4a6293*/
           v13,
           (int)Buffer,
           a3,
           a4,
           a5,
           (IDA_BYTE1(v13[0]) >> g_BitMask_Blue << g_BitMask_Green)
         | (IDA_BYTE2(v13[0]) >> g_BitMask_Red << g_BitShift_Blue)
         | (IDA_LOBYTE(v13[0]) >> g_BitShift_Green_0 << g_BitShift_Red),
           a7,
           a8,
           1);
  }
  else
  {
    v10 = Color::ConvertToRGB(v14); /*0x4a62b1*/
    IDA_LOWORD(v13[0]) = *(unsigned short *)v10; /*0x4a62bf*/
    IDA_BYTE2(v13[0]) = *(unsigned char *)(v10 + 2); /*0x4a62ca*/
    v9 = RenderTextLabel( /*0x4a6340*/
           v13,
           0,
           a3,
           a4,
           a5,
           (IDA_BYTE1(v13[0]) >> g_BitMask_Blue << g_BitMask_Green)
         | (IDA_BYTE2(v13[0]) >> g_BitMask_Red << g_BitShift_Blue)
         | (IDA_LOBYTE(v13[0]) >> g_BitShift_Green_0 << g_BitShift_Red),
           a7,
           a8,
           1);
  }
  *a1 = (int *)(*v9);
  a1[1] = v9[1]; /*0x4a6356*/
  return a1; /*0x4a634e*/
}
// 0x4a61c0
void TextRenderer::DrawText(DSurface* target, int x, int y,
{
  int v8; // eax
  int *v9; // eax
  int v10; // eax
  va_list v12; // [esp+0h] [ebp-410h]
  int v13[2]; // [esp+4h] [ebp-40Ch] BYREF
  unsigned char v14[4]; // [esp+Ch] [ebp-404h] BYREF
  wchar_t Buffer[512]; // [esp+10h] [ebp-400h] BYREF
  va_list Format; // [esp+434h] [ebp+24h] BYREF

  va_start(Format, a8);
  if ( BufferCount ) /*0x4a61cd*/
  {
    vswprintf(Buffer, BufferCount, (const wchar_t *const)Format, v12); /*0x4a61e1*/
    v8 = Color::ConvertToRGB(v14); /*0x4a6202*/
    IDA_LOWORD(v13[0]) = *(unsigned short *)v8; /*0x4a6210*/
    IDA_BYTE2(v13[0]) = *(unsigned char *)(v8 + 2); /*0x4a621b*/
    v9 = RenderTextLabel( /*0x4a6293*/
           v13,
           (int)Buffer,
           a3,
           a4,
           a5,
           (IDA_BYTE1(v13[0]) >> g_BitMask_Blue << g_BitMask_Green)
         | (IDA_BYTE2(v13[0]) >> g_BitMask_Red << g_BitShift_Blue)
         | (IDA_LOBYTE(v13[0]) >> g_BitShift_Green_0 << g_BitShift_Red),
           a7,
           a8,
           1);
  }
  else
  {
    v10 = Color::ConvertToRGB(v14); /*0x4a62b1*/
    IDA_LOWORD(v13[0]) = *(unsigned short *)v10; /*0x4a62bf*/
    IDA_BYTE2(v13[0]) = *(unsigned char *)(v10 + 2); /*0x4a62ca*/
    v9 = RenderTextLabel( /*0x4a6340*/
           v13,
           0,
           a3,
           a4,
           a5,
           (IDA_BYTE1(v13[0]) >> g_BitMask_Blue << g_BitMask_Green)
         | (IDA_BYTE2(v13[0]) >> g_BitMask_Red << g_BitShift_Blue)
         | (IDA_LOBYTE(v13[0]) >> g_BitShift_Green_0 << g_BitShift_Red),
           a7,
           a8,
           1);
  }
  *a1 = *v9; /*0x4a6351*/
  a1[1] = v9[1]; /*0x4a6356*/
  return a1; /*0x4a634e*/
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
