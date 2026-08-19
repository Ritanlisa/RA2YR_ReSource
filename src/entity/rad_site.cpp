#include "entity/rad_site.hpp"

namespace gamemd {

// --- RadSiteClass ---

HRESULT __stdcall RadSiteClass::GetClassID(CLSID* class_id) { return E_NOTIMPL; }
HRESULT __stdcall RadSiteClass::Load(IStream* stream) { return S_OK; }
HRESULT __stdcall RadSiteClass::Save(IStream* stream, int clear_dirty) { return S_OK; }
AbstractType __stdcall RadSiteClass::whatAmI() const { return kObjectTypeId; }
int RadSiteClass::objectSize() const { return sizeof(RadSiteClass); }
void RadSiteClass::SetBaseCell(CellStruct* cell) {}
int RadSiteClass::GetSpread() const { return 0; }
void RadSiteClass::SetSpread(int cells) {}
void RadSiteClass::SetRadLevel(int level) {}
int RadSiteClass::GetRadLevel() const { return 0; }
void RadSiteClass::Add(int radLevel) {}
void RadSiteClass::Activate() {}
int RadSiteClass::GetRadLevelAt(CellStruct* cell) { return 0; }
void RadSiteClass::Radiate() {}
void RadSiteClass::Deactivate() {}
void RadSiteClass::DecreaseRadiation() {}
void RadSiteClass::DecreaseLight() {}

} // namespace gamemd
