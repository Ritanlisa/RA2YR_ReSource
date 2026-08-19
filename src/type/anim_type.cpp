#include "type/anim_type.hpp"

namespace gamemd {

// --- AnimTypeClass ---

HRESULT __stdcall AnimTypeClass::GetClassID(CLSID* pClassID) { return E_NOTIMPL; }
AbstractType __stdcall AnimTypeClass::whatAmI() const { return AbstractType::AnimType; }
int AnimTypeClass::objectSize() const { return 0; }
bool AnimTypeClass::SpawnAtMapCoords(CellStruct* pMapCoords, HouseClass* pOwner) { return false; }
ObjectClass* AnimTypeClass::CreateObject(HouseClass* pOwner) { return nullptr; }
SHPStruct* AnimTypeClass::LoadImage() { return nullptr; }
void AnimTypeClass::Load2DArt() {}

} // namespace gamemd
