#include "type/building_type.hpp"

namespace gamemd {

// --- BuildingTypeClass ---

HRESULT __stdcall BuildingTypeClass::GetClassID(CLSID* pClassID) { return E_NOTIMPL; }
AbstractType __stdcall BuildingTypeClass::whatAmI() const { return AbstractType::BuildingType; }
int BuildingTypeClass::objectSize() const { return 0; }
bool BuildingTypeClass::SpawnAtMapCoords(CellStruct* pMapCoords, HouseClass* pOwner) { return false; }
ObjectClass* BuildingTypeClass::CreateObject(HouseClass* pOwner) { return nullptr; }
SHPStruct* BuildingTypeClass::LoadBuildup() { return nullptr; }
bool BuildingTypeClass::HasSuperWeapon(int index) const { return (this->SuperWeapon == index || this->SuperWeapon2 == index); }
bool BuildingTypeClass::HasSuperWeapon() const { return (this->SuperWeapon != -1 || this->SuperWeapon2 != -1); }
bool BuildingTypeClass::CanTogglePower() const { return this->TogglePower && (this->PowerDrain > 0 || this->Powered); }
BuildingAnimStruct& BuildingTypeClass::GetBuildingAnim(BuildingAnimSlot slot) { return this->BuildingAnim[(int)(slot)]; }
const BuildingAnimStruct& BuildingTypeClass::GetBuildingAnim(BuildingAnimSlot slot) const { return this->BuildingAnim[(int)(slot)]; }

} // namespace gamemd
