#include "type/smudge_type.hpp"

namespace gamemd {

// --- SmudgeTypeClass ---

HRESULT __stdcall SmudgeTypeClass::GetClassID(CLSID* pClassID) { return E_NOTIMPL; }
HRESULT __stdcall SmudgeTypeClass::Load(IStream* pStm) { return S_OK; }
HRESULT __stdcall SmudgeTypeClass::Save(IStream* pStm, BOOL fClearDirty) { return S_OK; }
AbstractType __stdcall SmudgeTypeClass::whatAmI() const { return AbstractType::SmudgeType; }
int SmudgeTypeClass::objectSize() const { return 0; }
bool SmudgeTypeClass::SpawnAtMapCoords(CellStruct* pMapCoords, HouseClass* pOwner) { return false; }
ObjectClass* SmudgeTypeClass::CreateObject(HouseClass* pOwner) { return nullptr; }
void SmudgeTypeClass::onTypeLoaded(DWORD dwUnk, DWORD dwUnk2, DWORD dwUnk3, DWORD dwUnk4, DWORD dwUnk5) {}

} // namespace gamemd
