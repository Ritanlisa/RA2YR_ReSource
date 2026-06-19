#include "entity/tiberium.hpp"
#include "type/overlay_type.hpp"
#include "type/anim_type.hpp"
#include "core/vector.hpp"

#include <cstring>

namespace gamemd
{
namespace {

constexpr uint32_t kTiberiumFlag = 0x2Eu;

} // anonymous namespace

TiberiumClass::TiberiumClass(const CellStruct& cell,
                             int spread, int growth,
                             int value, int power) noexcept
{
    ArrayIndex        = 0;
    Spread            = spread;
    SpreadPercentage  = 0.0;
    Growth            = growth;
    GrowthPercentage  = 0.0;
    Value             = value;
    Power             = power;
    Color             = 0;

    std::memset(&Debris, 0, sizeof(Debris));

    Image      = nullptr;
    NumFrames  = 0;
    NumImages  = 0;
    TiberiumClass_field_EC   = 0;
    TiberiumClass_field_F0   = 0;
    TiberiumClass_field_F4   = 0;
    TiberiumClass_field_F8   = 0;
    TiberiumClass_field_FC   = 0;

    std::memset(&SpreadTimer, 0, sizeof(SpreadTimer));
    std::memset(&GrowthTimer, 0, sizeof(GrowthTimer));

    TiberiumClass_field_10C  = 0;
    TiberiumClass_field_110  = 0;
    TiberiumClass_field_114  = 0;
    TiberiumClass_field_118  = 0;

    abstractFlags = kTiberiumFlag;
}

} // namespace gamemd

#include "entity/tiberium.hpp"

namespace gamemd {

// --- TiberiumClass ---

HRESULT __stdcall TiberiumClass::GetClassID(CLSID* pClassID) { return E_NOTIMPL; }
HRESULT __stdcall TiberiumClass::Load(IStream* pStm) { return S_OK; }
HRESULT __stdcall TiberiumClass::Save(IStream* pStm, BOOL fClearDirty) { return S_OK; }
HRESULT __stdcall TiberiumClass::GetSizeMax(ULARGE_INTEGER* pcbSize) { return E_NOTIMPL; }
AbstractType __stdcall TiberiumClass::whatAmI() const { return kObjectTypeId; }
int TiberiumClass::objectSize() const { return sizeof(TiberiumClass); }

} // namespace gamemd
