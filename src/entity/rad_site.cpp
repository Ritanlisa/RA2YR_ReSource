#include "entity/rad_site.hpp"

namespace gamemd {

// --- RadSiteClass ---

HRESULT __stdcall RadSiteClass::GetClassID(CLSID* class_id) { return E_NOTIMPL; }
HRESULT __stdcall RadSiteClass::Load(IStream* stream) { return S_OK; }
HRESULT __stdcall RadSiteClass::Save(IStream* stream, int clear_dirty) { return S_OK; }
AbstractType __stdcall RadSiteClass::whatAmI() const { return kObjectTypeId; }
int RadSiteClass::objectSize() const { return sizeof(RadSiteClass); }
// 0x65b4c0
void RadSiteClass::SetBaseCell(CellStruct* cell) {}
// 0x65b4b0
int RadSiteClass::GetSpread() const { return 0; }
// 0x65b4d0
void RadSiteClass::SetSpread(int cells) {}
// 0x65b4f0
void RadSiteClass::SetRadLevel(int level) {}
int RadSiteClass::GetRadLevel() const { return 0; }
// 0x65b530
void RadSiteClass::Add(int radLevel) {}
void RadSiteClass::Activate() {}
// 0x65b8f0
int RadSiteClass::GetRadLevelAt(CellStruct* cell) { return 0; }
// 0x65b9c0
void RadSiteClass::Radiate() {}
// 0x65bb50
void RadSiteClass::Deactivate() {}
// 0x65bd00
void RadSiteClass::DecreaseRadiation() {}
// 0x65be90
void RadSiteClass::DecreaseLight() {}

} // namespace gamemd
