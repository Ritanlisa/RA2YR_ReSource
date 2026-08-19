#include "entity/smudge.hpp"
#include "type/smudge_type.hpp"
#include "core/vector.hpp"

namespace gamemd
{

namespace {

constexpr uint32_t kSmudgeFlag = 0x1Du;

} // anonymous namespace

SmudgeClass::SmudgeClass(SmudgeTypeClass* pType, const CellStruct& cell,
                         HouseClass* owner) noexcept
{
    Type = pType;

    abstractFlags = kSmudgeFlag;
}

} // namespace gamemd

#include "entity/smudge.hpp"

namespace gamemd {

// --- SmudgeClass ---

HRESULT __stdcall SmudgeClass::GetClassID(CLSID* pClassID) { return E_NOTIMPL; }
HRESULT __stdcall SmudgeClass::Load(IStream* pStm) { return S_OK; }
HRESULT __stdcall SmudgeClass::Save(IStream* pStm, BOOL fClearDirty) { return S_OK; }
AbstractType __stdcall SmudgeClass::whatAmI() const { return kObjectTypeId; }
int SmudgeClass::objectSize() const { return sizeof(SmudgeClass); }

} // namespace gamemd
