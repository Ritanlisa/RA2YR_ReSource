#include "type/bullet_type.hpp"

namespace gamemd {

// --- BulletTypeClass ---

HRESULT __stdcall BulletTypeClass::GetClassID(CLSID* pClassID) { return E_NOTIMPL; }
AbstractType __stdcall BulletTypeClass::whatAmI() const { return AbstractType::BulletType; }
int BulletTypeClass::objectSize() const { return 0; }
bool BulletTypeClass::SpawnAtMapCoords(CellStruct* pMapCoords, HouseClass* pOwner) { return false; }
ObjectClass* BulletTypeClass::CreateObject(HouseClass* pOwner) { return nullptr; }
bool BulletTypeClass::Rotates() const { return !this->NoRotate; }
void BulletTypeClass::SetScaledSpawnDelay(int delay) { this->ScaledSpawnDelay = delay; }

} // namespace gamemd
