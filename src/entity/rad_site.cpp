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
}
