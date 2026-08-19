#pragma once

#include <cstdint>
#include <windows.h>

#include "ui/g_screen.hpp"
#include "core/enums.hpp"
#include "core/math.hpp"
#include "system/radar.hpp"

namespace gamemd
{

struct SHPStruct;
class DSurface;

struct MouseHotSpotX {};
struct MouseHotSpotY {};

struct MouseCursor
{
    int32_t  Frame;
    int32_t  Count;
    int32_t  Interval;
    int32_t  MiniFrame;
    int32_t  MiniCount;
    int32_t  HotX;
    int32_t  HotY;

    MouseCursor() noexcept
        : Frame(0), Count(1), Interval(1), MiniFrame(-1), MiniCount(0), HotX(0), HotY(0) {}  // 0x55CC20

    MouseCursor(int32_t frame, int32_t count, int32_t interval,
                int32_t miniFrame, int32_t miniCount,
                int32_t hotX, int32_t hotY) noexcept
        : Frame(frame), Count(count), Interval(interval),
          // unmatched: no callgraph reference and no git history record
          MiniFrame(miniFrame), MiniCount(miniCount), HotX(hotX), HotY(hotY) {}
};

class WWMouseClass
{
public:
    static WWMouseClass* Instance;

    // design: defaulted virtual destructor, no binary equivalent
    virtual ~WWMouseClass() = default;

    // design: inline accessor, inlined at all call sites
    virtual void Draw(const CellStruct& coords, const SHPStruct* pImage, int32_t idxFrame) {}
    // design: inline accessor, inlined at all call sites
    virtual bool IsRefCountNegative() { return false; }
    virtual void HideCursor() {}  // 0x7B9930
    virtual void ShowCursor() {}  // 0x7C868C
    virtual void ReleaseMouse() {}  // 0x7B9C30
    virtual void CaptureMouse() {}  // 0x7B9A60
    virtual uint8_t GetField10() { return 0; }  // 0x6CC2A0
    virtual void InvalidateRect(const RectangleStruct& rect) {}  // 0x7C8608
    // unmatched: no callgraph reference and no git history record
    virtual void CallFunc10() {}
    // design: inline accessor, inlined at all call sites
    virtual uint32_t GetRefCount() { return 0; }
    // unmatched: no callgraph reference and no git history record
    virtual int32_t GetX() const { return 0; }
    // unmatched: no callgraph reference and no git history record
    virtual int32_t GetY() const { return 0; }
    // unmatched: no callgraph reference and no git history record
    virtual Point2D* fetchCoordinatesHere(Point2D* out) const { return nullptr; }
    // unmatched: no callgraph reference and no git history record
    virtual void SetCoords(const Point2D& buffer) {}
    virtual void InitSurface(DSurface* pSurface, bool unk) {}  // 0x7B9040
    // design: inline accessor, inlined at all call sites
    virtual void InitCursor(DSurface* pSurface, bool unk) {}
    // unmatched: no callgraph reference and no git history record
    virtual void GetDimensions(int32_t* outWidth, int32_t* outHeight) {}

    SHPStruct*       Image;
    int32_t          ImageFrameIndex;
    uint32_t         RefCount;
    uint8_t          WWfield_10;
    uint8_t          WWfield_11;
    uint8_t          WWfield_12;
    uint8_t          WWfield_13;
    uint32_t         WWfield_14;
    uint32_t         WWfield_18;
    Point2D          Position;
    DSurface*        Surface;
    HWND             hWnd;
    RectangleStruct  CursorRect;
    Point2D          HotspotOffset;
    uint32_t         WWfield_44;
    RectangleStruct  DirtyRect;
    uint32_t         WWfield_58;

    // TODO: complete WWMouseClass members
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int loadCursorImages();  // 0x7B88D0
    void AddRef(void* a1, int a2, int a3);  // 0x7B8A00
    void* initCursorState(void* a1);  // 0x7B8E80
    int updateCursorRect();  // 0x7B8F30
    int DrawCursorBuffered(void* a1, int a2);  // 0x7B90C0
    void updateCursor();  // 0x7B92D0
    bool renderDragSelectionRect();  // 0x7B9690
    int showCursor();  // 0x7B9750
    int checkStatus(int a1, int a2, int a3, int a4);  // 0x7B9D70
    void processFrame();  // 0x7B9D90
    bool FlipCursorBuffer();  // 0x7B9E30
    int UpdateCursorMovement();  // 0x7BA090
    void drawCursor();  // 0x7BA320
    int checkHotspot(int a1, int a2);  // 0x7BA380
    void* QueryInterface(int a1);  // 0x7BA3A0
    // --- gap2 auto-generated stub declarations (END) ---
};

class MouseClass : public RadarClass
{
public:
    static MouseClass* Instance;

    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MouseClass() = default;

    virtual bool SetCursor(MouseCursorType cursor, bool miniMap) override { return false; }
    // design: inline accessor, inlined at all call sites
    virtual bool UpdateCursor(MouseCursorType cursor, bool miniMap) override { return false; }
    // unmatched: no callgraph reference and no git history record
    virtual bool RestoreCursor() override { return false; }
    // design: inline accessor, inlined at all call sites
    virtual void UpdateCursorMinimapState(bool miniMap) override {}
    // design: inline accessor, inlined at all call sites
    virtual MouseCursorType GetLastMouseCursor() { return MouseCursorType::Default; }

    bool              MouseCursorIsMini;
    uint8_t           padding_01[3];
    MouseCursorType   MouseCursorIndex;
    MouseCursorType   MouseCursorLastIndex;
    int32_t           MouseCursorCurrentFrame;

    // TODO: complete MouseClass members, ScrollClass intermediate layer

protected:
    MouseClass() = default;
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int ProcessInput();  // 0x40D280
    void* InitMouse(int a1);  // 0x40D290
    void initCursor();  // 0x40D540
    int updateCursorState(int a1);  // 0x40D570
    int selectCursor(int a1, void* a2);  // 0x40D720
    int getCursorFrame(void* a1);  // 0x40D7D0
    void* applyCursorSettings(int a1);  // 0x40D850
    int GetPosition();  // 0x5BDAA0
    int SetPosition(int a1);  // 0x5BDAB0
    void* LoadTypeData();  // 0x5BDF30
    int HandleClick();  // 0x5BDF50
    int LoadGameAssets();  // 0x5BDF70
    int DrawCursor();  // 0x5BE6D0
    void* drawCursor(int a1);  // 0x5BE9B0
    void* loadCursor(int a1, int a2);  // 0x5BEA30
    bool GetHotspot();  // 0x693060
    int GetButtonState(int a1);  // 0x693840
    int CheckCapture(void* a1);  // 0x693880
    void* Construct(int a1, int a2);  // 0x7B8730
    void CalcConfiningRect();  // 0x7B8960
    // --- gap2 auto-generated stub declarations (END) ---
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int SetBounds(int a1);  // 0x4a8bf0 -- Mouse::SetBounds
    int GetKeyState();  // 0x53ec90 -- Mouse::GetKeyState
    int SetCursor(int a1, int a2);  // 0x5bdc80 -- Mouse::SetCursor
    int ReleaseCapture();  // 0x6938c0 -- Mouse::ReleaseCapture
    // === SYMBOL-ANCHOR (END) ===
};

} // namespace gamemd
