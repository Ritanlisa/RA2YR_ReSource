// Auto-generated RE_* thin shims — call gamemd_core implementations
#include <windows.h>
#include <gamemd/core/math.hpp>
#include <gamemd/render/surface.hpp>
using namespace gamemd;

static inline int Palette6BitTo16Bit(int r,int g,int b){return ((unsigned char)b<<16)|((unsigned char)g<<8)|(unsigned char)r;}
namespace gamemd { RectangleStruct* ClipRectIntersection(RectangleStruct* result, const RectangleStruct* clip_rect, const RectangleStruct* src_rect, int* x_off, int* y_off); }
namespace gamemd { bool ClipLine(int start[2], int end[2], int clip_rect[4]); }

// Palette::6BitTo16Bit @ 0x4355b0
extern "C" DWORD RE_Palette_6BitTo16Bit(DWORD p0, DWORD p1, DWORD p2, DWORD p3) {
  return (DWORD)(Palette6BitTo16Bit((int)p1, (int)p2, (int)p3));
}

// ClipRectIntersection @ 0x421b60
extern "C" DWORD RE_ClipRectIntersection(DWORD p0, DWORD p1, DWORD p2, DWORD p3, DWORD p4) {
  return (DWORD)(ClipRectIntersection((RectangleStruct*)p0, (RectangleStruct*)p1, (RectangleStruct*)p2, (int*)p3, (int*)p4));
}

// ClipLine @ 0x7bc2b0
extern "C" DWORD RE_ClipLine(DWORD p0, DWORD p1, DWORD p2) {
  return (DWORD)(ClipLine((int*)p0, (int*)p1, (int*)p2));
}

// XSurface::SetPixel @ 0x7baeb0
extern "C" DWORD RE_XSurface_SetPixel(DWORD p0, DWORD p1, DWORD p2) {
  return (DWORD)(((XSurface*)p0)->SetPixel(*(const Point2D*)p1, (uint32_t)p2));
}

// XSurface::GetPixel @ 0x7bae60
extern "C" DWORD RE_XSurface_GetPixel(DWORD p0, DWORD p1) {
  return (DWORD)(((XSurface*)p0)->GetPixel(*(const Point2D*)p1));
}

// XSurface::PutPixel @ 0x7baf90
extern "C" DWORD RE_XSurface_PutPixel(DWORD p0, DWORD p1, DWORD p2, DWORD p3) {
  return (DWORD)(((XSurface*)p0)->PutPixel(*(const Point2D*)p1, (uint16_t)p2, *(const RectangleStruct*)p3));
}

// XSurface::GetPixelAtCoords @ 0x7baf10
extern "C" DWORD RE_XSurface_GetPixelAtCoords(DWORD p0, DWORD p1, DWORD p2) {
  return (DWORD)(((XSurface*)p0)->GetPixelAtCoords(*(const Point2D*)p1, *(const RectangleStruct*)p2));
}

// XSurface::WalkLine @ 0x7bab90
extern "C" DWORD RE_XSurface_WalkLine(DWORD p0, DWORD p1, DWORD p2, DWORD p3) {
  return (DWORD)(((XSurface*)p0)->WalkLine(*(const Point2D*)p1, *(const Point2D*)p2, ((void (*)(const Point2D&))p3)));
}

// XSurface::DrawLineEx @ 0x7ba610
extern "C" DWORD RE_XSurface_DrawLineEx(DWORD p0, DWORD p1, DWORD p2, DWORD p3, DWORD p4) {
  return (DWORD)(((XSurface*)p0)->DrawLineEx(*(const RectangleStruct*)p1, *(const Point2D*)p2, *(const Point2D*)p3, (uint32_t)p4));
}

// XSurface::DrawLine @ 0x7ba5e0
extern "C" DWORD RE_XSurface_DrawLine(DWORD p0, DWORD p1, DWORD p2, DWORD p3) {
  return (DWORD)(((XSurface*)p0)->DrawLine(*(const Point2D*)p1, *(const Point2D*)p2, (uint32_t)p3));
}

// XSurface::Fill @ 0x7bbab0
extern "C" DWORD RE_XSurface_Fill(DWORD p0, DWORD p1) {
  return (DWORD)(((XSurface*)p0)->Fill((uint32_t)p1));
}

// XSurface::DrawRectEx @ 0x7badc0
extern "C" DWORD RE_XSurface_DrawRectEx(DWORD p0, DWORD p1, DWORD p2, DWORD p3) {
  return (DWORD)(((XSurface*)p0)->DrawRectEx(*(const RectangleStruct*)p1, *(const RectangleStruct*)p2, (uint32_t)p3));
}

// XSurface::DrawRect @ 0x7bad90
extern "C" DWORD RE_XSurface_DrawRect(DWORD p0, DWORD p1, DWORD p2) {
  return (DWORD)(((XSurface*)p0)->DrawRect(*(const RectangleStruct*)p1, (uint32_t)p2));
}
