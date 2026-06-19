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
HRESULT GScreenClass::Load(IStream* stream) { return S_OK; }
HRESULT GScreenClass::Save(IStream* stream) { return S_OK; }
void GScreenClass::LoadFromINI(CCINIClass* ini) {}
const wchar_t* GScreenClass::GetToolTip(unsigned int dialog_id) { return nullptr; }
void GScreenClass::CloseWindow() {}
void GScreenClass::vt_entry_8C() {}
bool GScreenClass::vt_entry_90(const CellStruct& cell, HouseClass* house) { return false; }
bool GScreenClass::vt_entry_94(const CellStruct& cell, HouseClass* house, bool unk) { return false; }
bool GScreenClass::vt_entry_98(const CellStruct& cell, HouseClass* house) { return false; }
bool GScreenClass::vt_entry_9C(const CellStruct& cell, HouseClass* house) { return false; }

} // namespace gamemd
