#include "type/weapon_type.hpp"

namespace gamemd {

// --- WeaponTypeClass ---

HRESULT __stdcall WeaponTypeClass::GetClassID(CLSID* pClassID) { return E_NOTIMPL; }
HRESULT __stdcall WeaponTypeClass::Load(IStream* pStm) { return S_OK; }
HRESULT __stdcall WeaponTypeClass::Save(IStream* pStm, BOOL fClearDirty) { return S_OK; }
AbstractType __stdcall WeaponTypeClass::whatAmI() const { return AbstractType::WeaponType; }
int WeaponTypeClass::objectSize() const { return 0; }

} // namespace gamemd
