// 自动生成 by tools/move_hpp_bodies.py — 函数体自 src/ui/mouse.hpp 迁出
// hpp-impl 门控: 头文件只允许声明（= default 析构亦移出）
#include "mouse.hpp"

namespace gamemd {
MouseCursor::MouseCursor() noexcept : Frame(0), Count(1), Interval(1), MiniFrame(-1), MiniCount(0), HotX(0), HotY(0) {}

MouseCursor::MouseCursor(int32_t frame, int32_t count, int32_t interval,
                int32_t miniFrame, int32_t miniCount,
                int32_t hotX, int32_t hotY) noexcept : Frame(frame), Count(count), Interval(interval),
                                                                         
          MiniFrame(miniFrame), MiniCount(miniCount), HotX(hotX), HotY(hotY) {}

void WWMouseClass::Draw(const CellStruct& coords, const SHPStruct* pImage, int32_t idxFrame) {}

bool WWMouseClass::IsRefCountNegative() { return false; }

void WWMouseClass::HideCursor() {}

void WWMouseClass::ShowCursor() {}

void WWMouseClass::ReleaseMouse() {}

void WWMouseClass::CaptureMouse() {}

uint8_t WWMouseClass::GetField10() { return 0; }

void WWMouseClass::InvalidateRect(const RectangleStruct& rect) {}

void WWMouseClass::CallFunc10() {}

uint32_t WWMouseClass::GetRefCount() { return 0; }

int32_t WWMouseClass::GetX() const { return 0; }

int32_t WWMouseClass::GetY() const { return 0; }

Point2D* WWMouseClass::fetchCoordinatesHere(Point2D* out) const { return nullptr; }

void WWMouseClass::SetCoords(const Point2D& buffer) {}

void WWMouseClass::InitSurface(DSurface* pSurface, bool unk) {}

void WWMouseClass::InitCursor(DSurface* pSurface, bool unk) {}

void WWMouseClass::GetDimensions(int32_t* outWidth, int32_t* outHeight) {}

bool MouseClass::SetCursor(MouseCursorType cursor, bool miniMap) { return false; }

bool MouseClass::UpdateCursor(MouseCursorType cursor, bool miniMap) { return false; }

bool MouseClass::RestoreCursor() { return false; }

void MouseClass::UpdateCursorMinimapState(bool miniMap) {}

MouseCursorType MouseClass::GetLastMouseCursor() { return MouseCursorType::Default; }
}

