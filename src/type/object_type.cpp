#include "type/object_type.hpp"

namespace gamemd {

// --- ObjectTypeClass ---

HRESULT __stdcall ObjectTypeClass::Load(IStream* pStm) { return S_OK; }
HRESULT __stdcall ObjectTypeClass::Save(IStream* pStm, BOOL fClearDirty) { return S_OK; }
HRESULT __stdcall ObjectTypeClass::GetSizeMax(ULARGE_INTEGER* pcbSize) { return E_NOTIMPL; }
CoordStruct* ObjectTypeClass::onCellChanged(CoordStruct* pDest, CoordStruct* pSrc) const { return nullptr; }
DWORD ObjectTypeClass::GetOwners() const { return 0; }
int ObjectTypeClass::GetPipMax() const { return 0; }
void ObjectTypeClass::onTypeLoadComplete(DWORD dwUnk) const {}
void ObjectTypeClass::onTypeUnload(DWORD dwUnk) {}
int ObjectTypeClass::GetActualCost(HouseClass* pHouse) const { return 0; }
int ObjectTypeClass::GetBuildSpeed() const { return 0; }
CellStruct* ObjectTypeClass::GetFoundationData(bool IncludeBib) const { return nullptr; }
BuildingClass* ObjectTypeClass::FindFactory(bool allowOccupied, bool requirePower, bool requireCanBuild, HouseClass const* pHouse) const { return nullptr; }
SHPStruct* ObjectTypeClass::GetCameo() const { return nullptr; }
SHPStruct* ObjectTypeClass::GetImage() const { return nullptr; }

} // namespace gamemd
