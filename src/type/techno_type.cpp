#include "type/techno_type.hpp"

namespace gamemd {

// --- WeaponStruct ---

bool WeaponStruct::operator==(const WeaponStruct& rhs) const { return false; }
bool WeaponStruct::operator!=(const WeaponStruct& rhs) const { return !(*this == rhs); }

// --- TechnoTypeClass ---

HRESULT __stdcall TechnoTypeClass::Load(IStream* pStm) { return S_OK; }
HRESULT __stdcall TechnoTypeClass::Save(IStream* pStm, BOOL fClearDirty) { return S_OK; }
HRESULT __stdcall TechnoTypeClass::GetSizeMax(ULARGE_INTEGER* pcbSize) { return E_NOTIMPL; }
bool TechnoTypeClass::onTypeLoaded() { return false; }
bool TechnoTypeClass::CanAttackMove() const { return false; }
bool TechnoTypeClass::CanCreateHere(const CellStruct& mapCoords, HouseClass* pOwner) const { return false; }
int TechnoTypeClass::GetCost() const { return 0; }
int TechnoTypeClass::GetRepairStepCost() const { return 0; }
int TechnoTypeClass::GetRepairStep() const { return 0; }
int TechnoTypeClass::getRefund(HouseClass* pHouse, bool bUnk) const { return 0; }
int TechnoTypeClass::GetFlightLevel() const { return 0; }
bool TechnoTypeClass::HasMultipleTurrets() const { return this->TurretCount > 0; }
CoordStruct TechnoTypeClass::GetParticleSysOffset() const { CoordStruct buffer; GetParticleSysOffset(&buffer); return buffer; }
WeaponStruct& TechnoTypeClass::GetWeapon(size_t index, bool elite) { return elite ? this->EliteWeapon[index] : this->Weapon[index]; }
const WeaponStruct& TechnoTypeClass::GetWeapon(size_t index, bool elite) const { return elite ? this->EliteWeapon[index] : this->Weapon[index]; }

} // namespace gamemd
