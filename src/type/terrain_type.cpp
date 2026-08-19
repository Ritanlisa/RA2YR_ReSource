#include "type/terrain_type.hpp"

namespace gamemd {

// --- TerrainTypeClass ---

HRESULT __stdcall TerrainTypeClass::GetClassID(CLSID* pClassID) { return E_NOTIMPL; }
HRESULT __stdcall TerrainTypeClass::Load(IStream* pStm) { return S_OK; }
HRESULT __stdcall TerrainTypeClass::Save(IStream* pStm, BOOL fClearDirty) { return S_OK; }
AbstractType __stdcall TerrainTypeClass::whatAmI() const { return AbstractType::TerrainType; }
int TerrainTypeClass::objectSize() const { return 0; }
bool TerrainTypeClass::SpawnAtMapCoords(CellStruct* pMapCoords, HouseClass* pOwner) { return false; }
ObjectClass* TerrainTypeClass::CreateObject(HouseClass* pOwner) { return nullptr; }

} // namespace gamemd
