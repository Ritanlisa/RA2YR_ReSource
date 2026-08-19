#include "type/aircraft_type.hpp"

namespace gamemd {

// --- AircraftTypeClass ---

HRESULT __stdcall AircraftTypeClass::GetClassID(CLSID* pClassID) { return E_NOTIMPL; }
AbstractType __stdcall AircraftTypeClass::whatAmI() const { return AbstractType::AircraftType; }
int AircraftTypeClass::objectSize() const { return 0; }
bool AircraftTypeClass::SpawnAtMapCoords(CellStruct* pMapCoords, HouseClass* pOwner) { return false; }
ObjectClass* AircraftTypeClass::CreateObject(HouseClass* pOwner) { return nullptr; }

} // namespace gamemd
