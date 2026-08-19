#include "type/infantry_type.hpp"

namespace gamemd {

// --- SequenceStruct ---

SubSequenceStruct& SequenceStruct::GetSequence(Sequence sequence) { return this->Sequences[(int)(sequence)]; }
const SubSequenceStruct& SequenceStruct::GetSequence(Sequence sequence) const { return this->Sequences[(int)(sequence)]; }

// --- InfantryTypeClass ---

HRESULT __stdcall InfantryTypeClass::GetClassID(CLSID* pClassID) { return E_NOTIMPL; }
HRESULT __stdcall InfantryTypeClass::Load(IStream* pStm) { return S_OK; }
HRESULT __stdcall InfantryTypeClass::Save(IStream* pStm, BOOL fClearDirty) { return S_OK; }
AbstractType __stdcall InfantryTypeClass::whatAmI() const { return AbstractType::InfantryType; }
int InfantryTypeClass::objectSize() const { return 0; }
bool InfantryTypeClass::SpawnAtMapCoords(CellStruct* pMapCoords, HouseClass* pOwner) { return false; }
ObjectClass* InfantryTypeClass::CreateObject(HouseClass* pOwner) { return nullptr; }

} // namespace gamemd
