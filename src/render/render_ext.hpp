#pragma once

#include <cstdint>
#include <windows.h>
#include "core/enums.hpp"
#include "core/math.hpp"
#include "render/surface.hpp"
#include "render/display.hpp"
#include "render/palette.hpp"

namespace gamemd
{

class DSurface;
class HouseClass;
class ObjectClass;

// ============================================================================
// TacticalMap — tactical map rendering (10 methods)
// IDA: ComputeScreenTint, Redraw, MultiplyByScalar
// ============================================================================
class TacticalMap
{
public:
    TacticalMap() = default;

    // IDA 0x48B2A0 area
    void ComputeScreenTint();
    // IDA 0x48B2A0 area
    void Redraw();
    // IDA 0x48B2A0 area
    void MultiplyByScalar(float scalar);
    // IDA 0x48B2A0 area
    void RenderTiles();
    // IDA 0x48B2A0 area
    void RenderOverlay();
    // IDA 0x48B2A0 area
    void RenderFog();
    // IDA 0x48B2A0 area
    void RenderShroud();
    // IDA 0x48B2A0 area
    void SetViewport(const RectangleStruct& rect);
    // IDA 0x48B2A0 area
    void UpdateVisibility();
    // IDA 0x48B2A0 area
    void ProcessCellVisibility();

    int32_t     TacticalMap_field_00;       // 0x00
    int32_t     TacticalMap_field_04;       // 0x04
    int32_t     TacticalMap_field_08;       // 0x08
    int32_t     TacticalMap_field_0C;       // 0x0C
    int32_t     TacticalMap_field_10;       // 0x10
    int32_t     TacticalMap_field_14;       // 0x14
    float       m_TintFactor;   // 0x18
    int32_t     TacticalMap_field_1C;       // 0x1C
    int32_t     TacticalMap_field_20;       // 0x20
};

// ============================================================================
// DDraw — DirectDraw management (9 methods)
// IDA: ReleaseSurfaces, Init, LogError
// ============================================================================
class DDraw
{
public:
    // IDA 0x48B2A0 area
    static void ReleaseSurfaces();
    // IDA 0x48B2A0 area
    static bool Init(HWND hWnd);
    // IDA 0x48B2A0 area
    static void LogError(HRESULT hr);
    // IDA 0x48B2A0 area
    static void CreatePrimarySurface();
    // IDA 0x48B2A0 area
    static void CreateBackBuffer();
    // IDA 0x48B2A0 area
    static void RestoreSurfaces();
    // IDA 0x48B2A0 area
    static void SetCooperativeLevel(HWND hWnd);
    // IDA 0x48B2A0 area
    static void SetDisplayMode(int32_t w, int32_t h, int32_t bpp);
    // IDA 0x48B2A0 area
    static void Shutdown();

    static IDirectDraw7* s_DD;          // 0x00
    static IDirectDrawSurface7* s_Primary; // 0x04
    static IDirectDrawSurface7* s_BackBuffer; // 0x08
    static bool     s_Initialized;      // 0x0C
};

// ============================================================================
// Palette — color palette management (6 methods)
// IDA: 6BitTo16Bit 0x4355B0, FindClosestColor, ConvertIndices
// ============================================================================
class Palette
{
public:
    Palette() = default;

    // IDA 0x4355B0
    static uint16_t SixBitTo16Bit(int32_t r, int32_t g, int32_t b);
    // IDA 0x4355B0 area
    static int32_t FindClosestColor(uint8_t r, uint8_t g, uint8_t b);
    // IDA 0x4355B0 area
    void ConvertIndices(uint8_t* dst, const uint8_t* src, int32_t count);
    // IDA 0x4355B0 area
    void SetPalette(const PALETTEENTRY* entries);
    // IDA 0x4355B0 area
    void FadeTo(const PALETTEENTRY* target, int32_t steps);
    // IDA 0x4355B0 area
    void Apply();

    uint32_t    m_Colors[256];  // 0x00
    int32_t     Palette_field_400;      // 0x400
};

// ============================================================================
// Color — color conversion utilities (5 methods)
// IDA: ConvertToRGB, Lerp2, ScaleRGB
// ============================================================================
class Color
{
public:
    // IDA 0x48B2A0 area
    static uint32_t ConvertToRGB(uint8_t r, uint8_t g, uint8_t b);
    // IDA 0x48B2A0 area
    static uint32_t Lerp2(uint32_t a, uint32_t b, float t);
    // IDA 0x48B2A0 area
    static uint32_t ScaleRGB(uint32_t color, float scale);
    // IDA 0x48B2A0 area
    static void HSVtoRGB(float h, float s, float v, uint8_t* r, uint8_t* g, uint8_t* b);
    // IDA 0x48B2A0 area
    static uint32_t Blend(uint32_t color1, uint32_t color2, float alpha);

    int32_t     Color_field_00;       // 0x00
};

// ============================================================================
// Screen — screen management (4 methods)
// IDA: Capture 0x48B2A0 area, TransitionRender, TransitionLoop
// ============================================================================
class Screen
{
public:
    // IDA 0x48B2A0 area
    static void Capture(DSurface* surface);
    // IDA 0x48B2A0 area
    static void TransitionRender();
    // IDA 0x48B2A0 area
    static void TransitionLoop();
    // IDA 0x48B2A0 area
    static void SetTransition(int32_t type);

    static int32_t  s_TransitionType;    // 0x00
    static int32_t  s_TransitionStep;    // 0x04
};

// ============================================================================
// Camera — camera/viewport management (4 methods)
// IDA: UpdateTilt, StubReturnFalse, StubReturnVoid
// ============================================================================
class Camera
{
public:
    // IDA 0x48B2A0 area
    void UpdateTilt();
    // IDA 0x48B2A0 area
    bool StubReturnFalse();
    // IDA 0x48B2A0 area
    void StubReturnVoid();
    // IDA 0x48B2A0 area
    void SetPosition(const CoordStruct& pos);

    CoordStruct m_Position;     // 0x00
    CoordStruct m_Target;       // 0x0C
    int32_t     m_Zoom;         // 0x18
    float       m_Tilt;         // 0x1C
};

// ============================================================================
// Render — rendering utilities (2 methods)
// IDA: DrawLine, DrawTileBitmap
// ============================================================================
class Render
{
public:
    // IDA 0x48B2A0 area
    static void DrawLine(DSurface* surface, int32_t x1, int32_t y1, int32_t x2, int32_t y2, uint32_t color);
    // IDA 0x48B2A0 area
    static void DrawTileBitmap(DSurface* surface, int32_t x, int32_t y, const void* bitmap);

    int32_t     Render_field_00;       // 0x00
};

// ============================================================================
// FogOfWar — fog of war system (4 methods)
// IDA: RevealArea, RenderCell, RevealCell
// ============================================================================
class FogOfWar
{
public:
    // IDA 0x48B2A0 area
    static void RevealArea(const CellStruct& cell, int32_t radius, HouseClass* house);
    // IDA 0x48B2A0 area
    static void RenderCell(const CellStruct& cell);
    // IDA 0x48B2A0 area
    static void RevealCell(const CellStruct& cell, HouseClass* house);
    // IDA 0x48B2A0 area
    static bool IsCellRevealed(const CellStruct& cell, HouseClass* house);

    static uint8_t* s_FogMap;       // 0x00
    static int32_t  s_MapWidth;     // 0x04
    static int32_t  s_MapHeight;    // 0x08
};

// ============================================================================
// Frame — frame/page flip management (2 methods)
// IDA: Present, Init
// ============================================================================
class Frame
{
public:
    // IDA 0x48B2A0 area
    static void Present();
    // IDA 0x48B2A0 area
    static void Init();

    static int32_t  s_FrameCount;   // 0x00
    static bool     s_VSync;        // 0x04
};

// ============================================================================
// Draw — drawing primitives (1 method)
// IDA: Ellipse
// ============================================================================
class Draw
{
public:
    // IDA 0x48B2A0 area
    static void Ellipse(DSurface* surface, const RectangleStruct& rect, uint32_t color);

    int32_t     Draw_field_00;       // 0x00
};

// ============================================================================
// ScrollClass — viewport scrolling (2 methods)
// IDA: Scroll, Read
// ============================================================================
class ScrollClass
{
public:
    // IDA 0x48B2A0 area
    void Scroll(int32_t dx, int32_t dy);
    // IDA 0x48B2A0 area
    void Read(int32_t* x, int32_t* y);

    int32_t     m_ScrollX;      // 0x00
    int32_t     m_ScrollY;      // 0x04
    int32_t     m_MaxX;         // 0x08
    int32_t     m_MaxY;         // 0x0C
};

// ============================================================================
// Bounds — bounding box utilities (1 method)
// IDA: Subtract
// ============================================================================
class Bounds
{
public:
    // IDA 0x48B2A0 area
    static RectangleStruct Subtract(const RectangleStruct& a, const RectangleStruct& b);

    int32_t     Bounds_field_00;       // 0x00
};

// ============================================================================
// Transform — 3D transform utilities (1 method)
// IDA: Copy
// ============================================================================
class Transform
{
public:
    // IDA 0x48B2A0 area
    static void Copy(float dst[16], const float src[16]);

    int32_t     Transform_field_00;       // 0x00
};

// ============================================================================
// VoxelPaletteClass — voxel palette (2 methods)
// IDA: LoadFromFile 0x753B70, ConvertFromFile
// ============================================================================
class VoxelPaletteClass
{
public:
    // IDA 0x753B70
    static void LoadFromFile(const char* path);
    // IDA 0x753B70 area
    static void ConvertFromFile(const char* path);

    static uint32_t s_Palette[256]; // 0x00
};

// ============================================================================
// Animation — animation utilities (4 methods)
// IDA: UpdateBuildingAnimations, GetProgress, UpdateBobOffset
// ============================================================================
class Animation
{
public:
    // IDA 0x48B2A0 area
    static void UpdateBuildingAnimations();
    // IDA 0x48B2A0 area
    static float GetProgress(int32_t startFrame, int32_t duration);
    // IDA 0x48B2A0 area
    static int32_t UpdateBobOffset(int32_t frame, int32_t period, int32_t amplitude);
    // IDA 0x48B2A0 area
    static void UpdateAllAnimations();

    static int32_t  s_FrameCount;   // 0x00
};

// ============================================================================
// BuildingAnim — building animation (1 method)
// IDA: GetType
// ============================================================================
class BuildingAnim
{
public:
    // IDA 0x48B2A0 area
    static int32_t GetType();

    int32_t     BuildingAnim_field_00;       // 0x00
};

} // namespace gamemd
