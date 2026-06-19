#include "entity/overlay.hpp"
#include "type/overlay_type.hpp"
#include "core/vector.hpp"

namespace gamemd
{

namespace {

constexpr uint32_t kOverlayFlag = 0x14u;

} // anonymous namespace

OverlayClass::OverlayClass(OverlayTypeClass* pType, const CellStruct& cell,
                           HouseClass* owner) noexcept
{
    Type = pType;

    abstractFlags = kOverlayFlag;
}

} // namespace gamemd

#include "entity/overlay.hpp"

namespace gamemd {

// --- OverlayClass ---

HRESULT __stdcall OverlayClass::GetClassID(CLSID* pClassID) { return E_NOTIMPL; }
HRESULT __stdcall OverlayClass::Load(IStream* pStm) { return S_OK; }
HRESULT __stdcall OverlayClass::Save(IStream* pStm, BOOL fClearDirty) { return S_OK; }
AbstractType __stdcall OverlayClass::whatAmI() const { return kObjectTypeId; }
int OverlayClass::objectSize() const { return sizeof(OverlayClass); }

} // namespace gamemd
