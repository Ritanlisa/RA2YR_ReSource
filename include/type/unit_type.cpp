#include "type/unit_type.hpp"

namespace gamemd {

// --- UnitTypeClass ---

HRESULT __stdcall UnitTypeClass::GetClassID(CLSID* pClassID) { return E_NOTIMPL; }
HRESULT __stdcall UnitTypeClass::Load(IStream* pStm) { return S_OK; }
HRESULT __stdcall UnitTypeClass::Save(IStream* pStm, BOOL fClearDirty) { return S_OK; }
AbstractType __stdcall UnitTypeClass::whatAmI() const { return AbstractType::UnitType; }
int UnitTypeClass::objectSize() const { return 0; }
bool UnitTypeClass::SpawnAtMapCoords(CellStruct* pMapCoords, HouseClass* pOwner) { return false; }
ObjectClass* UnitTypeClass::CreateObject(HouseClass* pOwner) { return nullptr; }

} // namespace gamemd
