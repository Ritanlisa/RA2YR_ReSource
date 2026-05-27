#pragma once

#include <cstdint>
#include <windows.h>

#include "g_screen.hpp"
#include "..\core\enums.hpp"
#include "..\core\math.hpp"
#include "..\system\radar.hpp"

namespace gamemd
{

struct SHPStruct;
struct DSurface;

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
        : Frame(0), Count(1), Interval(1), MiniFrame(-1), MiniCount(0), HotX(0), HotY(0) {}

    MouseCursor(int32_t frame, int32_t count, int32_t interval,
                int32_t miniFrame, int32_t miniCount,
                int32_t hotX, int32_t hotY) noexcept
        : Frame(frame), Count(count), Interval(interval),
          MiniFrame(miniFrame), MiniCount(miniCount), HotX(hotX), HotY(hotY) {}
};

class WWMouseClass
{
public:
    static WWMouseClass* Instance;

    virtual ~WWMouseClass() = default;

    virtual void Draw(const CellStruct& coords, const SHPStruct* pImage, int32_t idxFrame) {}
    virtual bool IsRefCountNegative() { return false; }
    virtual void HideCursor() {}
    virtual void ShowCursor() {}
    virtual void ReleaseMouse() {}
    virtual void CaptureMouse() {}
    virtual uint8_t GetField10() { return 0; }
    virtual void InvalidateRect(const RectangleStruct& rect) {}
    virtual void CallFunc10() {}
    virtual uint32_t GetRefCount() { return 0; }
    virtual int32_t GetX() const { return 0; }
    virtual int32_t GetY() const { return 0; }
    virtual Point2D* GetCoords(Point2D* out) const { return nullptr; }
    virtual void SetCoords(const Point2D& buffer) {}
    virtual void InitSurface(DSurface* pSurface, bool unk) {}
    virtual void InitCursor(DSurface* pSurface, bool unk) {}
    virtual void GetDimensions(int32_t* outWidth, int32_t* outHeight) {}

    SHPStruct*       Image;
    int32_t          ImageFrameIndex;
    uint32_t         RefCount;
    uint8_t          field_10;
    uint8_t          field_11;
    uint8_t          field_12;
    uint8_t          field_13;
    uint32_t         field_14;
    uint32_t         field_18;
    Point2D          Position;
    DSurface*        Surface;
    HWND             hWnd;
    RectangleStruct  CursorRect;
    Point2D          HotspotOffset;
    uint32_t         field_44;
    RectangleStruct  DirtyRect;
    uint32_t         field_58;

    // TODO: complete WWMouseClass members
};

class MouseClass : public RadarClass
{
public:
    static MouseClass* Instance;

    virtual ~MouseClass() = default;

    virtual bool SetCursor(MouseCursorType cursor, bool miniMap) override { return false; }
    virtual bool UpdateCursor(MouseCursorType cursor, bool miniMap) override { return false; }
    virtual bool RestoreCursor() override { return false; }
    virtual void UpdateCursorMinimapState(bool miniMap) override {}
    virtual MouseCursorType GetLastMouseCursor() { return MouseCursorType::Default; }

    bool              MouseCursorIsMini;
    uint8_t           padding_01[3];
    MouseCursorType   MouseCursorIndex;
    MouseCursorType   MouseCursorLastIndex;
    int32_t           MouseCursorCurrentFrame;

    // TODO: complete MouseClass members, ScrollClass intermediate layer

protected:
    MouseClass() = default;
};

} // namespace gamemd
