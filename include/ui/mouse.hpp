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
          MiniFrame(miniFrame), MiniCount(miniCount), HotX(hotX), HotY(hotY) {} // IDA: UNMATCHED — no_callgraph_match, no_git_history
};

class WWMouseClass
{
public:
    static WWMouseClass* Instance;

    virtual ~WWMouseClass() = default; // IDA: NOT_FOUND

    virtual void Draw(const CellStruct& coords, const SHPStruct* pImage, int32_t idxFrame) {} // IDA: NOT_FOUND
    virtual bool IsRefCountNegative() { return false; } // IDA: NOT_FOUND
    virtual void HideCursor() {}  // 0x7B9930
    virtual void ShowCursor() {}  // 0x7C868C
    virtual void ReleaseMouse() {}  // 0x7B9C30
    virtual void CaptureMouse() {}  // 0x7B9A60
    virtual uint8_t GetField10() { return 0; }  // 0x6CC2A0
    virtual void InvalidateRect(const RectangleStruct& rect) {}  // 0x7C8608
    virtual void CallFunc10() {} // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual uint32_t GetRefCount() { return 0; } // IDA: NOT_FOUND
    virtual int32_t GetX() const { return 0; } // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual int32_t GetY() const { return 0; } // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual Point2D* fetchCoordinatesHere(Point2D* out) const { return nullptr; } // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual void SetCoords(const Point2D& buffer) {} // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual void InitSurface(DSurface* pSurface, bool unk) {}  // 0x7B9040
    virtual void InitCursor(DSurface* pSurface, bool unk) {} // IDA: NOT_FOUND
    virtual void GetDimensions(int32_t* outWidth, int32_t* outHeight) {} // IDA: UNMATCHED — no_callgraph_match, no_git_history

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
};

class MouseClass : public RadarClass
{
public:
    static MouseClass* Instance;

    virtual ~MouseClass() = default; // IDA: NOT_FOUND

    virtual bool SetCursor(MouseCursorType cursor, bool miniMap) override { return false; }  // 0x7C87B8
    virtual bool UpdateCursor(MouseCursorType cursor, bool miniMap) override { return false; } // IDA: NOT_FOUND
    virtual bool RestoreCursor() override { return false; } // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual void UpdateCursorMinimapState(bool miniMap) override {} // IDA: NOT_FOUND
    virtual MouseCursorType GetLastMouseCursor() { return MouseCursorType::Default; } // IDA: NOT_FOUND

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
