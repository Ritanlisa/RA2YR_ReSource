#include "structure/building_light.hpp"

namespace gamemd {

// --- BuildingLightClass ---

HRESULT __stdcall BuildingLightClass::GetClassID(CLSID*) { return E_NOTIMPL; }
HRESULT __stdcall BuildingLightClass::Save(IStream*, int) { return S_OK; }
AbstractType __stdcall BuildingLightClass::whatAmI() const { return kObjectTypeId; }
int BuildingLightClass::objectSize() const { return sizeof(BuildingLightClass); }
void BuildingLightClass::SetBehaviour(int mode) {}

} // namespace gamemd
