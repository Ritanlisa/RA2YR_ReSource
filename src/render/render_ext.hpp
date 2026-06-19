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
    void ComputeScreenTint();  // 0x484680
    // IDA 0x48B2A0 area
    void Redraw();  // 0x4F4480
    // IDA 0x48B2A0 area
    void MultiplyByScalar(float scalar);  // 0x5AEA10
    // IDA 0x48B2A0 area
    void RenderTiles();
    // IDA 0x48B2A0 area
    void RenderOverlay();  // 0x658780
    // IDA 0x48B2A0 area
    void RenderFog();
    // IDA 0x48B2A0 area
    void RenderShroud();
    // IDA 0x48B2A0 area
    void SetViewport(const RectangleStruct& rect);
    // IDA 0x48B2A0 area
    void UpdateVisibility();
    // IDA 0x48B2A0 area
    void ProcessCellVisibility();  // 0x654490

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
    static void ReleaseSurfaces();  // 0x4A3370
    // IDA 0x48B2A0 area
    static bool Init(HWND hWnd);  // 0x4A3640
    // IDA 0x48B2A0 area
    static void LogError(HRESULT hr);  // 0x4A3DD0
    // IDA 0x48B2A0 area
    static void CreatePrimarySurface();
    // IDA 0x48B2A0 area
    static void CreateBackBuffer();  // 0x4BAC60
    // IDA 0x48B2A0 area
    static void RestoreSurfaces();
    // IDA 0x48B2A0 area
    static void SetCooperativeLevel(HWND hWnd);
    // IDA 0x48B2A0 area
    static void SetDisplayMode(int32_t w, int32_t h, int32_t bpp);  // 0x4AC700
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
    Palette() = default; // IDA: UNMATCHED — defaulted_special_member, default_ctor, no_callgraph_match

    // IDA 0x4355B0
    static uint16_t SixBitTo16Bit(int32_t r, int32_t g, int32_t b);
    // IDA 0x4355B0 area
    static int32_t FindClosestColor(uint8_t r, uint8_t g, uint8_t b);  // 0x626200
    // IDA 0x4355B0 area
    void ConvertIndices(uint8_t* dst, const uint8_t* src, int32_t count);  // 0x632BE0
    // IDA 0x4355B0 area
    void SetPalette(const PALETTEENTRY* entries);  // 0x5CEA40
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
    static uint32_t ConvertToRGB(uint8_t r, uint8_t g, uint8_t b);  // 0x517440
    // IDA 0x48B2A0 area
    static uint32_t Lerp2(uint32_t a, uint32_t b, float t);  // 0x661020
    // IDA 0x48B2A0 area
    static uint32_t ScaleRGB(uint32_t color, float scale);  // 0x661190
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
    static void Capture(DSurface* surface);  // 0x52FEC0
    // IDA 0x48B2A0 area
    static void TransitionRender();  // 0x68F060
    // IDA 0x48B2A0 area
    static void TransitionLoop();  // 0x690160
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
    void UpdateTilt();  // 0x58B600
    // IDA 0x48B2A0 area
    bool StubReturnFalse();  // 0x58B7B0
    // IDA 0x48B2A0 area
    void StubReturnVoid();  // 0x58B7C0
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
    static void DrawLine(DSurface* surface, int32_t x1, int32_t y1, int32_t x2, int32_t y2, uint32_t color);  // 0x705270
    // IDA 0x48B2A0 area
    static void DrawTileBitmap(DSurface* surface, int32_t x, int32_t y, const void* bitmap);  // 0x7C7371

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
    static void RevealArea(const CellStruct& cell, int32_t radius, HouseClass* house);  // 0x655C50
    // IDA 0x48B2A0 area
    static void RenderCell(const CellStruct& cell);  // 0x656150
    // IDA 0x48B2A0 area
    static void RevealCell(const CellStruct& cell, HouseClass* house);  // 0x6562D0
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
    static void Present();  // 0x4F4780
    // IDA 0x48B2A0 area
    static void Init();  // 0x724C00

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
    static void Ellipse(DSurface* surface, const RectangleStruct& rect, uint32_t color);  // 0x7BB920

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
    void Scroll(int32_t dx, int32_t dy);  // 0x6922E0
    // IDA 0x48B2A0 area
    void Read(int32_t* x, int32_t* y);  // 0x6938F0

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
    static RectangleStruct Subtract(const RectangleStruct& a, const RectangleStruct& b);  // 0x487EE0

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
    static void Copy(float dst[16], const float src[16]);  // 0x5AE610

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
    static void LoadFromFile(const char* path);  // 0x753B70
    // IDA 0x753B70 area
    static void ConvertFromFile(const char* path);  // 0x758A30

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
    static void UpdateBuildingAnimations();  // 0x4549B0
    // IDA 0x48B2A0 area
    static float GetProgress(int32_t startFrame, int32_t duration);  // 0x4A52F0
    // IDA 0x48B2A0 area
    static int32_t UpdateBobOffset(int32_t frame, int32_t period, int32_t amplitude);  // 0x661D80
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
    static int32_t GetType();  // 0x4E12D0

    int32_t     BuildingAnim_field_00;       // 0x00
};


// === Batch-generated MISSING class stubs ===

// 5 methods in IDA
class BlitPlainXlatAlpha_ushort
{
public:
    virtual ~BlitPlainXlatAlpha_ushort() = default;  // 0x493D60

    virtual void AddRef(); // 0x493CC0
    virtual void ddtor();  // IDA: 0x493D60
    virtual void Release(); // 0x493D90
    virtual void Blit(); // 0x493DC0
    virtual void QueryInterface(); // 0x49A200

    uint8_t BlitPlainXlatAlpha_ushort_field_0x04[4];
    uint8_t BlitPlainXlatAlpha_ushort_field_0x08[4];
    uint8_t BlitPlainXlatAlpha_ushort_field_0x0C[4];
    uint8_t BlitPlainXlatAlpha_ushort_field_0x10[4];
};
// 5 methods in IDA
class BlitTransLucent25AlphaZReadWarp_ushort
{
public:
    virtual ~BlitTransLucent25AlphaZReadWarp_ushort() = default;  // 0x495840

    virtual void AddRef(); // 0x495730
    virtual void ddtor();  // IDA: 0x495840
    virtual void BlitRect(); // 0x495870
    virtual void GetSize(); // 0x4958A0
    virtual void Blit(); // 0x49A5E0

    uint8_t BlitTransLucent25AlphaZReadWarp_ushort_field_0x04[4];
    uint8_t BlitTransLucent25AlphaZReadWarp_ushort_field_0x08[4];
    uint8_t BlitTransLucent25AlphaZReadWarp_ushort_field_0x0C[4];
    uint8_t BlitTransLucent25AlphaZReadWarp_ushort_field_0x10[4];
};
// 14 methods in IDA
class BlitTransLucent25AlphaZReadWrite_ushort
{
public:
    virtual ~BlitTransLucent25AlphaZReadWrite_ushort() = default;  // 0x496010

    virtual void AddRef(); // 0x495F00
    virtual void ddtor();  // IDA: 0x496010
    virtual void BlitRect(); // 0x496040
    virtual void GetSize(); // 0x496070
    virtual void Blit_RLE_Xlat(); // 0x4960A0
    // +9 more virtual methods

    uint8_t BlitTransLucent25AlphaZReadWrite_ushort_field_0x04[4];
    uint8_t BlitTransLucent25AlphaZReadWrite_ushort_field_0x08[4];
    uint8_t BlitTransLucent25AlphaZReadWrite_ushort_field_0x0C[4];
    uint8_t BlitTransLucent25AlphaZReadWrite_ushort_field_0x10[4];
    uint8_t BlitTransLucent25AlphaZReadWrite_ushort_field_0x14[4];
    uint8_t BlitTransLucent25AlphaZReadWrite_ushort_field_0x18[4];
    uint8_t BlitTransLucent25AlphaZReadWrite_ushort_field_0x1C[4];
    uint8_t BlitTransLucent25AlphaZReadWrite_ushort_field_0x20[4];
    uint8_t BlitTransLucent25AlphaZReadWrite_ushort_field_0x24[4];
    uint8_t BlitTransLucent25AlphaZReadWrite_ushort_field_0x28[4];
    uint8_t BlitTransLucent25AlphaZReadWrite_ushort_field_0x2C[4];
    uint8_t BlitTransLucent25AlphaZReadWrite_ushort_field_0x30[4];
    uint8_t BlitTransLucent25AlphaZReadWrite_ushort_field_0x34[4];
};
// 5 methods in IDA
class BlitTransLucent25AlphaZRead_ushort
{
public:
    virtual ~BlitTransLucent25AlphaZRead_ushort() = default;  // 0x495360

    virtual void AddRef(); // 0x495250
    virtual void ddtor();  // IDA: 0x495360
    virtual void BlitRect(); // 0x495390
    virtual void GetSize(); // 0x4953C0
    virtual void Blit(); // 0x49A520

    uint8_t BlitTransLucent25AlphaZRead_ushort_field_0x04[4];
    uint8_t BlitTransLucent25AlphaZRead_ushort_field_0x08[4];
    uint8_t BlitTransLucent25AlphaZRead_ushort_field_0x0C[4];
    uint8_t BlitTransLucent25AlphaZRead_ushort_field_0x10[4];
};
// 10 methods in IDA
class BlitTransLucent25Alpha_ushort
{
public:
    virtual ~BlitTransLucent25Alpha_ushort() = default;  // 0x494400

    virtual void AddRef(); // 0x494330
    virtual void ddtor();  // IDA: 0x494400
    virtual void BlitRect(); // 0x494430
    virtual void GetSize(); // 0x494460
    virtual void Blit_ZRead_AlphaBlend(); // 0x494490
    // +5 more virtual methods

    uint8_t BlitTransLucent25Alpha_ushort_field_0x04[4];
    uint8_t BlitTransLucent25Alpha_ushort_field_0x08[4];
    uint8_t BlitTransLucent25Alpha_ushort_field_0x0C[4];
    uint8_t BlitTransLucent25Alpha_ushort_field_0x10[4];
    uint8_t BlitTransLucent25Alpha_ushort_field_0x14[4];
    uint8_t BlitTransLucent25Alpha_ushort_field_0x18[4];
    uint8_t BlitTransLucent25Alpha_ushort_field_0x1C[4];
    uint8_t BlitTransLucent25Alpha_ushort_field_0x20[4];
    uint8_t BlitTransLucent25Alpha_ushort_field_0x24[4];
};
// 5 methods in IDA
class BlitTransLucent50AlphaZReadWarp_ushort
{
public:
    virtual ~BlitTransLucent50AlphaZReadWarp_ushort() = default;  // 0x4956A0

    virtual void AddRef(); // 0x495590
    virtual void ddtor();  // IDA: 0x4956A0
    virtual void BlitRect(); // 0x4956D0
    virtual void GetSize(); // 0x495700
    virtual void Blit(); // 0x49A5A0

    uint8_t BlitTransLucent50AlphaZReadWarp_ushort_field_0x04[4];
    uint8_t BlitTransLucent50AlphaZReadWarp_ushort_field_0x08[4];
    uint8_t BlitTransLucent50AlphaZReadWarp_ushort_field_0x0C[4];
    uint8_t BlitTransLucent50AlphaZReadWarp_ushort_field_0x10[4];
};
// 5 methods in IDA
class BlitTransLucent50AlphaZReadWrite_ushort
{
public:
    virtual ~BlitTransLucent50AlphaZReadWrite_ushort() = default;  // 0x495E70

    virtual void AddRef(); // 0x495D60
    virtual void ddtor();  // IDA: 0x495E70
    virtual void BlitRect(); // 0x495EA0
    virtual void GetSize(); // 0x495ED0
    virtual void Blit(); // 0x49A6E0

    uint8_t BlitTransLucent50AlphaZReadWrite_ushort_field_0x04[4];
    uint8_t BlitTransLucent50AlphaZReadWrite_ushort_field_0x08[4];
    uint8_t BlitTransLucent50AlphaZReadWrite_ushort_field_0x0C[4];
    uint8_t BlitTransLucent50AlphaZReadWrite_ushort_field_0x10[4];
};
// 5 methods in IDA
class BlitTransLucent50AlphaZRead_ushort
{
public:
    virtual ~BlitTransLucent50AlphaZRead_ushort() = default;  // 0x4951C0

    virtual void AddRef(); // 0x4950C0
    virtual void ddtor();  // IDA: 0x4951C0
    virtual void BlitRect(); // 0x4951F0
    virtual void GetSize(); // 0x495220
    virtual void Blit(); // 0x49A4E0

    uint8_t BlitTransLucent50AlphaZRead_ushort_field_0x04[4];
    uint8_t BlitTransLucent50AlphaZRead_ushort_field_0x08[4];
    uint8_t BlitTransLucent50AlphaZRead_ushort_field_0x0C[4];
    uint8_t BlitTransLucent50AlphaZRead_ushort_field_0x10[4];
};
// 5 methods in IDA
class BlitTransLucent50Alpha_ushort
{
public:
    virtual ~BlitTransLucent50Alpha_ushort() = default;  // 0x4942A0

    virtual void AddRef(); // 0x4941E0
    virtual void ddtor();  // IDA: 0x4942A0
    virtual void BlitRect(); // 0x4942D0
    virtual void GetSize(); // 0x494300
    virtual void Blit(); // 0x49A300

    uint8_t BlitTransLucent50Alpha_ushort_field_0x04[4];
    uint8_t BlitTransLucent50Alpha_ushort_field_0x08[4];
    uint8_t BlitTransLucent50Alpha_ushort_field_0x0C[4];
    uint8_t BlitTransLucent50Alpha_ushort_field_0x10[4];
};
// 5 methods in IDA
class BlitTransLucent75AlphaZReadWarp_ushort
{
public:
    virtual ~BlitTransLucent75AlphaZReadWarp_ushort() = default;  // 0x495500

    virtual void AddRef(); // 0x4953F0
    virtual void ddtor();  // IDA: 0x495500
    virtual void BlitRect(); // 0x495530
    virtual void GetSize(); // 0x495560
    virtual void Blit(); // 0x49A560

    uint8_t BlitTransLucent75AlphaZReadWarp_ushort_field_0x04[4];
    uint8_t BlitTransLucent75AlphaZReadWarp_ushort_field_0x08[4];
    uint8_t BlitTransLucent75AlphaZReadWarp_ushort_field_0x0C[4];
    uint8_t BlitTransLucent75AlphaZReadWarp_ushort_field_0x10[4];
};
// 5 methods in IDA
class BlitTransLucent75AlphaZReadWrite_ushort
{
public:
    virtual ~BlitTransLucent75AlphaZReadWrite_ushort() = default;  // 0x495CD0

    virtual void AddRef(); // 0x495BC0
    virtual void ddtor();  // IDA: 0x495CD0
    virtual void BlitRect(); // 0x495D00
    virtual void GetSize(); // 0x495D30
    virtual void Blit(); // 0x49A6A0

    uint8_t BlitTransLucent75AlphaZReadWrite_ushort_field_0x04[4];
    uint8_t BlitTransLucent75AlphaZReadWrite_ushort_field_0x08[4];
    uint8_t BlitTransLucent75AlphaZReadWrite_ushort_field_0x0C[4];
    uint8_t BlitTransLucent75AlphaZReadWrite_ushort_field_0x10[4];
};
// 5 methods in IDA
class BlitTransLucent75AlphaZRead_ushort
{
public:
    virtual ~BlitTransLucent75AlphaZRead_ushort() = default;  // 0x495030

    virtual void AddRef(); // 0x494F20
    virtual void ddtor();  // IDA: 0x495030
    virtual void BlitRect(); // 0x495060
    virtual void GetSize(); // 0x495090
    virtual void Blit(); // 0x49A4A0

    uint8_t BlitTransLucent75AlphaZRead_ushort_field_0x04[4];
    uint8_t BlitTransLucent75AlphaZRead_ushort_field_0x08[4];
    uint8_t BlitTransLucent75AlphaZRead_ushort_field_0x0C[4];
    uint8_t BlitTransLucent75AlphaZRead_ushort_field_0x10[4];
};
// 5 methods in IDA
class BlitTransLucent75Alpha_ushort
{
public:
    virtual ~BlitTransLucent75Alpha_ushort() = default;  // 0x494150

    virtual void AddRef(); // 0x494080
    virtual void ddtor();  // IDA: 0x494150
    virtual void BlitRect(); // 0x494180
    virtual void GetSize(); // 0x4941B0
    virtual void Blit(); // 0x49A2C0

    uint8_t BlitTransLucent75Alpha_ushort_field_0x04[4];
    uint8_t BlitTransLucent75Alpha_ushort_field_0x08[4];
    uint8_t BlitTransLucent75Alpha_ushort_field_0x0C[4];
    uint8_t BlitTransLucent75Alpha_ushort_field_0x10[4];
};
// 5 methods in IDA
class BlitTransXlatAlphaZReadWrite_ushort
{
public:
    virtual ~BlitTransXlatAlphaZReadWrite_ushort() = default;  // 0x4959C0

    virtual void AddRef(); // 0x4958D0
    virtual void ddtor();  // IDA: 0x4959C0
    virtual void BlitRect(); // 0x4959F0
    virtual void GetSize(); // 0x495A20
    virtual void Blit(); // 0x49A620

    uint8_t BlitTransXlatAlphaZReadWrite_ushort_field_0x04[4];
    uint8_t BlitTransXlatAlphaZReadWrite_ushort_field_0x08[4];
    uint8_t BlitTransXlatAlphaZReadWrite_ushort_field_0x0C[4];
    uint8_t BlitTransXlatAlphaZReadWrite_ushort_field_0x10[4];
};
// 25 methods in IDA
class BlitTransXlatAlphaZRead_ushort
{
public:
    virtual ~BlitTransXlatAlphaZRead_ushort() = default;  // 0x494D20

    virtual void Blit_ZRead_AlphaBlend(); // 0x494590
    virtual void CallBlit0(); // 0x494600
    virtual void CallBlit0_0(); // 0x494630
    virtual void CallBlit0_1(); // 0x494660
    virtual void BlitAlpha(); // 0x494690
    // +20 more virtual methods

    uint8_t BlitTransXlatAlphaZRead_ushort_field_0x04[4];
    uint8_t BlitTransXlatAlphaZRead_ushort_field_0x08[4];
    uint8_t BlitTransXlatAlphaZRead_ushort_field_0x0C[4];
    uint8_t BlitTransXlatAlphaZRead_ushort_field_0x10[4];
    uint8_t BlitTransXlatAlphaZRead_ushort_field_0x14[4];
    uint8_t BlitTransXlatAlphaZRead_ushort_field_0x18[4];
    uint8_t BlitTransXlatAlphaZRead_ushort_field_0x1C[4];
    uint8_t BlitTransXlatAlphaZRead_ushort_field_0x20[4];
    uint8_t BlitTransXlatAlphaZRead_ushort_field_0x24[4];
    uint8_t BlitTransXlatAlphaZRead_ushort_field_0x28[4];
    uint8_t BlitTransXlatAlphaZRead_ushort_field_0x2C[4];
    uint8_t BlitTransXlatAlphaZRead_ushort_field_0x30[4];
    uint8_t BlitTransXlatAlphaZRead_ushort_field_0x34[4];
    uint8_t BlitTransXlatAlphaZRead_ushort_field_0x38[4];
    uint8_t BlitTransXlatAlphaZRead_ushort_field_0x3C[4];
    uint8_t BlitTransXlatAlphaZRead_ushort_field_0x40[4];
    uint8_t BlitTransXlatAlphaZRead_ushort_field_0x44[4];
    uint8_t BlitTransXlatAlphaZRead_ushort_field_0x48[4];
    uint8_t BlitTransXlatAlphaZRead_ushort_field_0x4C[4];
    uint8_t BlitTransXlatAlphaZRead_ushort_field_0x50[4];
};
// 5 methods in IDA
class BlitTransZRemapXlatAlphaZReadWrite_ushort
{
public:
    virtual ~BlitTransZRemapXlatAlphaZReadWrite_ushort() = default;  // 0x495B30

    virtual void AddRef(); // 0x495A50
    virtual void ddtor();  // IDA: 0x495B30
    virtual void BlitRect(); // 0x495B60
    virtual void GetSize(); // 0x495B90
    virtual void Blit(); // 0x49A660

    uint8_t BlitTransZRemapXlatAlphaZReadWrite_ushort_field_0x04[4];
    uint8_t BlitTransZRemapXlatAlphaZReadWrite_ushort_field_0x08[4];
    uint8_t BlitTransZRemapXlatAlphaZReadWrite_ushort_field_0x0C[4];
    uint8_t BlitTransZRemapXlatAlphaZReadWrite_ushort_field_0x10[4];
};
// 5 methods in IDA
class BlitTransZRemapXlatAlphaZRead_ushort
{
public:
    virtual ~BlitTransZRemapXlatAlphaZRead_ushort() = default;  // 0x494E90

    virtual void AddRef(); // 0x494D90
    virtual void ddtor();  // IDA: 0x494E90
    virtual void BlitRect(); // 0x494EC0
    virtual void GetSize(); // 0x494EF0
    virtual void Blit(); // 0x49A460

    uint8_t BlitTransZRemapXlatAlphaZRead_ushort_field_0x04[4];
    uint8_t BlitTransZRemapXlatAlphaZRead_ushort_field_0x08[4];
    uint8_t BlitTransZRemapXlatAlphaZRead_ushort_field_0x0C[4];
    uint8_t BlitTransZRemapXlatAlphaZRead_ushort_field_0x10[4];
};
// 5 methods in IDA
class BlitTransZRemapXlatAlpha_ushort
{
public:
    virtual ~BlitTransZRemapXlatAlpha_ushort() = default;  // 0x493FF0

    virtual void AddRef(); // 0x493F30
    virtual void ddtor();  // IDA: 0x493FF0
    virtual void BlitRect(); // 0x494020
    virtual void GetSize(); // 0x494050
    virtual void Blit(); // 0x49A280

    uint8_t BlitTransZRemapXlatAlpha_ushort_field_0x04[4];
    uint8_t BlitTransZRemapXlatAlpha_ushort_field_0x08[4];
    uint8_t BlitTransZRemapXlatAlpha_ushort_field_0x0C[4];
    uint8_t BlitTransZRemapXlatAlpha_ushort_field_0x10[4];
};
// 1 methods in IDA
class BlitterList
{
public:
    virtual ~BlitterList() = default;

    virtual void CopyEntry(); // 0x4B5630

};
// 1 methods in IDA
class BuildingDebris
{
public:
    virtual ~BuildingDebris() = default;

    virtual void Init(); // 0x631D40

};
// 1 methods in IDA
class BuildingLightQueue
{
public:
    virtual ~BuildingLightQueue() = default;

    virtual void RemoveEntry(); // 0x5FF2D0

};
// 4 methods in IDA
class BuildingLoadQueue
{
public:
    virtual ~BuildingLoadQueue() = default;

    virtual void GetNext(); // 0x6E6E20
    virtual void Find(); // 0x6E6F20
    virtual void FindObject(); // 0x6E6FF0
    virtual void FindBuilding(); // 0x6E7A80

    uint8_t BuildingLoadQueue_field_0x04[4];
    uint8_t BuildingLoadQueue_field_0x08[4];
    uint8_t BuildingLoadQueue_field_0x0C[4];
};
// 9 methods in IDA
class BuildingPlacement
{
public:
    virtual ~BuildingPlacement() = default;

    virtual void RenderBuildingPlacementShadow(); // 0x430650
    virtual void RenderBuildingPlacementPreview(); // 0x47EC90
    virtual void ValidateType(); // 0x480510
    virtual void sub_481130(); // 0x481130
    virtual void HandleClick(); // 0x4E2690
    // +4 more virtual methods

    uint8_t BuildingPlacement_field_0x04[4];
    uint8_t BuildingPlacement_field_0x08[4];
    uint8_t BuildingPlacement_field_0x0C[4];
    uint8_t BuildingPlacement_field_0x10[4];
    uint8_t BuildingPlacement_field_0x14[4];
    uint8_t BuildingPlacement_field_0x18[4];
    uint8_t BuildingPlacement_field_0x1C[4];
    uint8_t BuildingPlacement_field_0x20[4];
};
// 1 methods in IDA
class BuildingPlacementClass
{
public:
    virtual ~BuildingPlacementClass() = default;

    virtual void Draw(); // 0x4E2B50

};
// 1 methods in IDA
class BuildingPrerequisiteClass
{
public:
    virtual ~BuildingPrerequisiteClass() = default;

    virtual void ReadNodeGraph(); // 0x42EBE0

};
// 3 methods in IDA
class BuildingQueue
{
public:
    virtual ~BuildingQueue() = default;

    virtual void IsCellSuitable(); // 0x42E780
    virtual void AllocSlot(); // 0x42EB20
    virtual void FindFreeSlot(); // 0x42EB50

    uint8_t BuildingQueue_field_0x04[4];
    uint8_t BuildingQueue_field_0x08[4];
};
// 10 methods in IDA
class ColorListClass
{
public:
    virtual ~ColorListClass() = default;

    virtual void GetIndex(); // 0x488850
    virtual void AddColor(); // 0x4888B0
    virtual void GetCount(); // 0x488910
    virtual void SetIndex(); // 0x488960
    virtual void DrawColorRect(); // 0x488980
    // +5 more virtual methods

    uint8_t ColorListClass_field_0x04[4];
    uint8_t ColorListClass_field_0x08[4];
    uint8_t ColorListClass_field_0x0C[4];
    uint8_t ColorListClass_field_0x10[4];
    uint8_t ColorListClass_field_0x14[4];
    uint8_t ColorListClass_field_0x18[4];
    uint8_t ColorListClass_field_0x1C[4];
    uint8_t ColorListClass_field_0x20[4];
    uint8_t ColorListClass_field_0x24[4];
};
// 1 methods in IDA
class ColorSchemeClass
{
public:
    virtual ~ColorSchemeClass() = default;

    virtual void LoadAllSchemes(); // 0x627B20

};
// 6 methods in IDA
class FoggedObject_DrawVector
{
public:
    virtual ~FoggedObject_DrawVector() = default;  // 0x4D2B20

    virtual void Seek(); // 0x4D2980
    virtual void Release(); // 0x4D2A10
    virtual void ddtor();  // IDA: 0x4D2B20
    virtual void Read(); // 0x4D2B50
    virtual void Write(); // 0x4D2BA0
    // +1 more virtual methods

    uint8_t FoggedObject_DrawVector_field_0x04[4];
    uint8_t FoggedObject_DrawVector_field_0x08[4];
    uint8_t FoggedObject_DrawVector_field_0x0C[4];
    uint8_t FoggedObject_DrawVector_field_0x10[4];
    uint8_t FoggedObject_DrawVector_field_0x14[4];
};
// 2 methods in IDA
class FrameSnapshot
{
public:
    virtual ~FrameSnapshot() = default;

    virtual void Init(); // 0x4C91C0
    virtual void InitMax(); // 0x4C91E0

    uint8_t FrameSnapshot_field_0x04[4];
};
// 2 methods in IDA
class FrameTimer
{
public:
    virtual ~FrameTimer() = default;

    virtual void HasRemaining(); // 0x41BF40
    virtual void Init25(); // 0x70D150

    uint8_t FrameTimer_field_0x04[4];
};
// 1 methods in IDA
class PaletteClass
{
public:
    virtual ~PaletteClass() = default;

    virtual void Load(); // 0x5CB590

};
// 1 methods in IDA
class PaletteManager
{
public:
    virtual ~PaletteManager() = default;

    virtual void Load(); // 0x72B530

};
// 3 methods in IDA
class RLEBlitTransLucent25AlphaZReadWarp_ushort
{
public:
    virtual ~RLEBlitTransLucent25AlphaZReadWarp_ushort() = default; // IDA: UNMATCHED — defaulted_special_member, default_dtor, no_callgraph_match

    virtual void AddRef(); // 0x498ED0
    virtual void Release(); // 0x4990A0
    virtual void QueryInterface(); // 0x49AD00

    uint8_t RLEBlitTransLucent25AlphaZReadWarp_ushort_field_0x04[4];
    uint8_t RLEBlitTransLucent25AlphaZReadWarp_ushort_field_0x08[4];
};
// 3 methods in IDA
class RLEBlitTransLucent25AlphaZReadWrite_ushort
{
public:
    virtual ~RLEBlitTransLucent25AlphaZReadWrite_ushort() = default; // IDA: UNMATCHED — defaulted_special_member, default_dtor, no_callgraph_match

    virtual void AddRef(); // 0x499A90
    virtual void Release(); // 0x499C60
    virtual void QueryInterface(); // 0x49AE40

    uint8_t RLEBlitTransLucent25AlphaZReadWrite_ushort_field_0x04[4];
    uint8_t RLEBlitTransLucent25AlphaZReadWrite_ushort_field_0x08[4];
};
// 3 methods in IDA
class RLEBlitTransLucent25AlphaZRead_ushort
{
public:
    virtual ~RLEBlitTransLucent25AlphaZRead_ushort() = default; // IDA: UNMATCHED — defaulted_special_member, default_dtor, no_callgraph_match

    virtual void AddRef(); // 0x4988C0
    virtual void Release(); // 0x498A80
    virtual void QueryInterface(); // 0x49AC40

    uint8_t RLEBlitTransLucent25AlphaZRead_ushort_field_0x04[4];
    uint8_t RLEBlitTransLucent25AlphaZRead_ushort_field_0x08[4];
};
// 3 methods in IDA
class RLEBlitTransLucent25Alpha_ushort
{
public:
    virtual ~RLEBlitTransLucent25Alpha_ushort() = default; // IDA: UNMATCHED — defaulted_special_member, default_dtor, no_callgraph_match

    virtual void AddRef(); // 0x497E60
    virtual void Release(); // 0x497F90
    virtual void QueryInterface(); // 0x49AB00

    uint8_t RLEBlitTransLucent25Alpha_ushort_field_0x04[4];
    uint8_t RLEBlitTransLucent25Alpha_ushort_field_0x08[4];
};
// 3 methods in IDA
class RLEBlitTransLucent50AlphaZReadWarp_ushort
{
public:
    virtual ~RLEBlitTransLucent50AlphaZReadWarp_ushort() = default; // IDA: UNMATCHED — defaulted_special_member, default_dtor, no_callgraph_match

    virtual void AddRef(); // 0x498CD0
    virtual void Release(); // 0x498E90
    virtual void QueryInterface(); // 0x49ACC0

    uint8_t RLEBlitTransLucent50AlphaZReadWarp_ushort_field_0x04[4];
    uint8_t RLEBlitTransLucent50AlphaZReadWarp_ushort_field_0x08[4];
};
// 3 methods in IDA
class RLEBlitTransLucent50AlphaZReadWrite_ushort
{
public:
    virtual ~RLEBlitTransLucent50AlphaZReadWrite_ushort() = default; // IDA: UNMATCHED — defaulted_special_member, default_dtor, no_callgraph_match

    virtual void AddRef(); // 0x499860
    virtual void Release(); // 0x499A50
    virtual void QueryInterface(); // 0x49AE00

    uint8_t RLEBlitTransLucent50AlphaZReadWrite_ushort_field_0x04[4];
    uint8_t RLEBlitTransLucent50AlphaZReadWrite_ushort_field_0x08[4];
};
// 3 methods in IDA
class RLEBlitTransLucent50AlphaZRead_ushort
{
public:
    virtual ~RLEBlitTransLucent50AlphaZRead_ushort() = default; // IDA: UNMATCHED — defaulted_special_member, default_dtor, no_callgraph_match

    virtual void AddRef(); // 0x4986D0
    virtual void Release(); // 0x498880
    virtual void QueryInterface(); // 0x49AC00

    uint8_t RLEBlitTransLucent50AlphaZRead_ushort_field_0x04[4];
    uint8_t RLEBlitTransLucent50AlphaZRead_ushort_field_0x08[4];
};
// 3 methods in IDA
class RLEBlitTransLucent50Alpha_ushort
{
public:
    virtual ~RLEBlitTransLucent50Alpha_ushort() = default; // IDA: UNMATCHED — defaulted_special_member, default_dtor, no_callgraph_match

    virtual void AddRef(); // 0x497CF0
    virtual void Release(); // 0x497E20
    virtual void QueryInterface(); // 0x49AAC0

    uint8_t RLEBlitTransLucent50Alpha_ushort_field_0x04[4];
    uint8_t RLEBlitTransLucent50Alpha_ushort_field_0x08[4];
};
// 3 methods in IDA
class RLEBlitTransLucent75AlphaZReadWarp_ushort
{
public:
    virtual ~RLEBlitTransLucent75AlphaZReadWarp_ushort() = default; // IDA: UNMATCHED — defaulted_special_member, default_dtor, no_callgraph_match

    virtual void AddRef(); // 0x498AC0
    virtual void Release(); // 0x498C90
    virtual void QueryInterface(); // 0x49AC80

    uint8_t RLEBlitTransLucent75AlphaZReadWarp_ushort_field_0x04[4];
    uint8_t RLEBlitTransLucent75AlphaZReadWarp_ushort_field_0x08[4];
};
// 3 methods in IDA
class RLEBlitTransLucent75AlphaZReadWrite_ushort
{
public:
    virtual ~RLEBlitTransLucent75AlphaZReadWrite_ushort() = default; // IDA: UNMATCHED — defaulted_special_member, default_dtor, no_callgraph_match

    virtual void AddRef(); // 0x499650
    virtual void Release(); // 0x499820
    virtual void QueryInterface(); // 0x49ADC0

    uint8_t RLEBlitTransLucent75AlphaZReadWrite_ushort_field_0x04[4];
    uint8_t RLEBlitTransLucent75AlphaZReadWrite_ushort_field_0x08[4];
};
// 3 methods in IDA
class RLEBlitTransLucent75AlphaZRead_ushort
{
public:
    virtual ~RLEBlitTransLucent75AlphaZRead_ushort() = default; // IDA: UNMATCHED — defaulted_special_member, default_dtor, no_callgraph_match

    virtual void AddRef(); // 0x4984D0
    virtual void Release(); // 0x498690
    virtual void QueryInterface(); // 0x49ABC0

    uint8_t RLEBlitTransLucent75AlphaZRead_ushort_field_0x04[4];
    uint8_t RLEBlitTransLucent75AlphaZRead_ushort_field_0x08[4];
};
// 3 methods in IDA
class RLEBlitTransLucent75Alpha_ushort
{
public:
    virtual ~RLEBlitTransLucent75Alpha_ushort() = default; // IDA: UNMATCHED — defaulted_special_member, default_dtor, no_callgraph_match

    virtual void AddRef(); // 0x497B80
    virtual void Release(); // 0x497CB0
    virtual void QueryInterface(); // 0x49AA80

    uint8_t RLEBlitTransLucent75Alpha_ushort_field_0x04[4];
    uint8_t RLEBlitTransLucent75Alpha_ushort_field_0x08[4];
};
// 3 methods in IDA
class RLEBlitTransXlatAlphaZReadWrite_ushort
{
public:
    virtual ~RLEBlitTransXlatAlphaZReadWrite_ushort() = default; // IDA: UNMATCHED — defaulted_special_member, default_dtor, no_callgraph_match

    virtual void AddRef(); // 0x4990E0
    virtual void Release(); // 0x499280
    virtual void QueryInterface(); // 0x49AD40

    uint8_t RLEBlitTransXlatAlphaZReadWrite_ushort_field_0x04[4];
    uint8_t RLEBlitTransXlatAlphaZReadWrite_ushort_field_0x08[4];
};
// 3 methods in IDA
class RLEBlitTransXlatAlphaZRead_ushort
{
public:
    virtual ~RLEBlitTransXlatAlphaZRead_ushort() = default; // IDA: UNMATCHED — defaulted_special_member, default_dtor, no_callgraph_match

    virtual void AddRef(); // 0x497FD0
    virtual void Release(); // 0x498150
    virtual void QueryInterface(); // 0x49AB40

    uint8_t RLEBlitTransXlatAlphaZRead_ushort_field_0x04[4];
    uint8_t RLEBlitTransXlatAlphaZRead_ushort_field_0x08[4];
};
// 3 methods in IDA
class RLEBlitTransXlatAlpha_ushort
{
public:
    virtual ~RLEBlitTransXlatAlpha_ushort() = default; // IDA: UNMATCHED — defaulted_special_member, default_dtor, no_callgraph_match

    virtual void AddRef(); // 0x4978C0
    virtual void Release(); // 0x4979D0
    virtual void QueryInterface(); // 0x49AA00

    uint8_t RLEBlitTransXlatAlpha_ushort_field_0x04[4];
    uint8_t RLEBlitTransXlatAlpha_ushort_field_0x08[4];
};
// 3 methods in IDA
class RLEBlitTransZRemapXlatAlphaZReadWrite_ushort
{
public:
    virtual ~RLEBlitTransZRemapXlatAlphaZReadWrite_ushort() = default; // IDA: UNMATCHED — defaulted_special_member, default_dtor, no_callgraph_match

    virtual void AddRef(); // 0x499430
    virtual void Release(); // 0x499610
    virtual void QueryInterface(); // 0x49AD80

    uint8_t RLEBlitTransZRemapXlatAlphaZReadWrite_ushort_field_0x04[4];
    uint8_t RLEBlitTransZRemapXlatAlphaZReadWrite_ushort_field_0x08[4];
};
// 3 methods in IDA
class RLEBlitTransZRemapXlatAlphaZRead_ushort
{
public:
    virtual ~RLEBlitTransZRemapXlatAlphaZRead_ushort() = default; // IDA: UNMATCHED — defaulted_special_member, default_dtor, no_callgraph_match

    virtual void AddRef(); // 0x4982E0
    virtual void Release(); // 0x498490
    virtual void QueryInterface(); // 0x49AB80

    uint8_t RLEBlitTransZRemapXlatAlphaZRead_ushort_field_0x04[4];
    uint8_t RLEBlitTransZRemapXlatAlphaZRead_ushort_field_0x08[4];
};
// 12 methods in IDA
class RLEBlitTransZRemapXlatAlpha_ushort
{
public:
    virtual ~RLEBlitTransZRemapXlatAlpha_ushort() = default;

    virtual void Blit_Alpha_ZReadWrite_Lucent25(); // 0x4974B0
    virtual void CallBlit0(); // 0x4975D0
    virtual void Blit_Alpha_ZReadWrite_Lucent50(); // 0x497610
    virtual void CallBlit0_0(); // 0x497720
    virtual void Blit_Alpha_ZReadWrite(); // 0x497760
    // +7 more virtual methods

    uint8_t RLEBlitTransZRemapXlatAlpha_ushort_field_0x04[4];
    uint8_t RLEBlitTransZRemapXlatAlpha_ushort_field_0x08[4];
    uint8_t RLEBlitTransZRemapXlatAlpha_ushort_field_0x0C[4];
    uint8_t RLEBlitTransZRemapXlatAlpha_ushort_field_0x10[4];
    uint8_t RLEBlitTransZRemapXlatAlpha_ushort_field_0x14[4];
    uint8_t RLEBlitTransZRemapXlatAlpha_ushort_field_0x18[4];
    uint8_t RLEBlitTransZRemapXlatAlpha_ushort_field_0x1C[4];
    uint8_t RLEBlitTransZRemapXlatAlpha_ushort_field_0x20[4];
    uint8_t RLEBlitTransZRemapXlatAlpha_ushort_field_0x24[4];
    uint8_t RLEBlitTransZRemapXlatAlpha_ushort_field_0x28[4];
    uint8_t RLEBlitTransZRemapXlatAlpha_ushort_field_0x2C[4];
};
// 13 methods in IDA
class ScreenEffect
{
public:
    virtual ~ScreenEffect() = default;

    virtual void StubReturnFalse(); // 0x6528C0
    virtual void StubReturnVoid(); // 0x652910
    virtual void StubReturn(); // 0x65FA60
    virtual void Stub(); // 0x6D1B00
    virtual void Stub1(); // 0x753AD0
    // +8 more virtual methods

    uint8_t ScreenEffect_field_0x04[4];
    uint8_t ScreenEffect_field_0x08[4];
    uint8_t ScreenEffect_field_0x0C[4];
    uint8_t ScreenEffect_field_0x10[4];
    uint8_t ScreenEffect_field_0x14[4];
    uint8_t ScreenEffect_field_0x18[4];
    uint8_t ScreenEffect_field_0x1C[4];
    uint8_t ScreenEffect_field_0x20[4];
    uint8_t ScreenEffect_field_0x24[4];
    uint8_t ScreenEffect_field_0x28[4];
    uint8_t ScreenEffect_field_0x2C[4];
    uint8_t ScreenEffect_field_0x30[4];
};
// 1 methods in IDA
class Scrollbar
{
public:
    virtual ~Scrollbar() = default;

    virtual void DlgProc(); // 0x61C690

};
// 1 methods in IDA
class ScrollingText
{
public:
    virtual ~ScrollingText() = default;

    virtual void AddLine(); // 0x5D3FC0

};
// 2 methods in IDA
class TacticalMapClass
{
public:
    virtual ~TacticalMapClass() = default;

    virtual void SetCameraPosition(); // 0x6D6000
    virtual void ProcessCell(); // 0x6D7F20

    uint8_t TacticalMapClass_field_0x04[4];
};
// 5 methods in IDA
class VoxClass_Vector
{
public:
    virtual ~VoxClass_Vector() = default;

    virtual void getItem(); // 0x753650
    virtual void getItemAt(); // 0x753680
    virtual void removeItem(); // 0x753830
    virtual void getItemWithIndex(); // 0x7538E0
    virtual void findItem(); // 0x753960

    uint8_t VoxClass_Vector_field_0x04[4];
    uint8_t VoxClass_Vector_field_0x08[4];
    uint8_t VoxClass_Vector_field_0x0C[4];
    uint8_t VoxClass_Vector_field_0x10[4];
};
// 1 methods in IDA
class VoxelAnimTypeVector
{
public:
    virtual ~VoxelAnimTypeVector() = default;

    virtual void Constructor(); // 0x67C310

};
// 3 methods in IDA
class VoxelModel
{
public:
    virtual ~VoxelModel() = default; // IDA: UNMATCHED — defaulted_special_member, default_dtor, no_callgraph_match

    virtual void BuildDrawList(); // 0x755B30
    virtual void LoadVXLHeader(); // 0x756DD0
    virtual void ParseSectionData(); // 0x756F80

    uint8_t VoxelModel_field_0x04[4];
    uint8_t VoxelModel_field_0x08[4];
};
// 2 methods in IDA
class VoxelPalette
{
public:
    virtual ~VoxelPalette() = default;

    virtual void Init(); // 0x758950
    virtual void Reset(); // 0x7589C0

    uint8_t VoxelPalette_field_0x04[4];
};
// 7 methods in IDA
class VoxelRenderer
{
public:
    virtual ~VoxelRenderer() = default;

    virtual void DrawSection(); // 0x7575A0
    virtual void DrawSectionLines(); // 0x757790
    virtual void ProcessVoxelData(); // 0x757E70
    virtual void RenderFrame(); // 0x758030
    virtual void ClearDepth(); // 0x758880
    // +2 more virtual methods

    uint8_t VoxelRenderer_field_0x04[4];
    uint8_t VoxelRenderer_field_0x08[4];
    uint8_t VoxelRenderer_field_0x0C[4];
    uint8_t VoxelRenderer_field_0x10[4];
    uint8_t VoxelRenderer_field_0x14[4];
    uint8_t VoxelRenderer_field_0x18[4];
};
// 1 methods in IDA
class VoxelSection
{
public:
    virtual ~VoxelSection() = default;

    virtual void GetInfo(); // 0x7564B0

};
// 1 methods in IDA
class VoxelTypeClass
{
public:
    virtual ~VoxelTypeClass() = default;

    virtual void ReadINI(); // 0x73E5E0

};
// 2 methods in IDA
class Voxel_Section
{
public:
    virtual ~Voxel_Section() = default;

    virtual void Draw(); // 0x75D3A0
    virtual void Constructor(); // 0x75E6B0

    uint8_t Voxel_Section_field_0x04[4];
};

} // namespace gamemd
