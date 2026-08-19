#include "entity/tube.hpp"
#include "core/vector.hpp"

namespace gamemd
{

namespace {

constexpr uint32_t kTubeFlag = 0x35u;

} // anonymous namespace

TubeClass::TubeClass() noexcept
{
    TubeClass_field_AC = 0;
    TubeClass_field_B0 = 0;
    TubeClass_field_B4 = 0;
    TubeClass_field_B8 = 0;
    TubeClass_field_BC = 0;
    TubeClass_field_C0 = 0;
    TubeClass_field_C4 = 0;

    abstractFlags = kTubeFlag;
}

} // namespace gamemd

#include "entity/tube.hpp"

namespace gamemd {

// --- TubeClass ---

HRESULT __stdcall TubeClass::GetClassID(CLSID* pClassID) { return E_NOTIMPL; }
HRESULT __stdcall TubeClass::Load(IStream* pStm) { return S_OK; }
HRESULT __stdcall TubeClass::Save(IStream* pStm, BOOL fClearDirty) { return S_OK; }
AbstractType __stdcall TubeClass::whatAmI() const { return kObjectTypeId; }
int TubeClass::objectSize() const { return sizeof(TubeClass); }

} // namespace gamemd
