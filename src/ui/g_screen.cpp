#include "ui/g_screen.hpp"

#include <cstring>

namespace gamemd
{

GScreenClass* GScreenClass::Instance = nullptr;

} // namespace gamemd

#include "ui/g_screen.hpp"

namespace gamemd {

// --- GScreenClass ---

void GScreenClass::OneTime() {}
void GScreenClass::InitClear() {}
void GScreenClass::GetInputAndUpdate(uint32_t* outKeyCode, int* outMouseX, int* outMouseY) {}
void GScreenClass::Update(const int& keyCode, const Point2D& mouseCoords) {}
bool GScreenClass::OnMessage(uint32_t msg) { return false; }
void GScreenClass::MarkNeedsRedraw(int flags) {}
void GScreenClass::DrawOnTop() {}
void GScreenClass::Draw(uint32_t flags) {}
void GScreenClass::Render() {}
bool GScreenClass::SetCursor(MouseCursorType cursor, bool miniMap) { return false; }
bool GScreenClass::UpdateCursor(MouseCursorType cursor, bool miniMap) { return false; }
bool GScreenClass::RestoreCursor() { return false; }
void GScreenClass::UpdateCursorMinimapState(bool miniMap) {}

// GScreenClass Load/Save/vt_entry stubs are in src/render/display.cpp

} // namespace gamemd
