#pragma once

#include <cstdint>
#include <unknwn.h>

#include "core/enums.hpp"
#include "core/math.hpp"
#include "core/vector.hpp"
#include "object/object.hpp"

namespace gamemd {

#ifndef GAMEMD_USING_ObjectClass
#define GAMEMD_USING_ObjectClass
using ra2::game::ObjectClass;
#endif
#ifndef GAMEMD_USING_TechnoClass
#define GAMEMD_USING_TechnoClass
using ra2::game::TechnoClass;
#endif
#ifndef GAMEMD_USING_FacingStruct
#define GAMEMD_USING_FacingStruct
using ra2::game::FacingStruct;
#endif


class CellClass;

class WaveClass : public ra2::game::ObjectClass
{
public:
    static constexpr AbstractType kObjectTypeId = AbstractType::Wave;

    WaveClass(ra2::game::TechnoClass* pTarget, WaveType waveType,
              const Point2D& coords, uint32_t intensity) noexcept;

    virtual HRESULT __stdcall Load(IStream* pStm) override { return S_OK; }
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override { return S_OK; }
    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override { return E_NOTIMPL; }

    virtual ~WaveClass() override = default;

    virtual AbstractType __stdcall whatAmI() const override { return kObjectTypeId; }
    virtual int objectSize() const override { return sizeof(WaveClass); }

    ra2::game::TechnoClass*          Target;
    WaveType                         Type;
    Point2D                          someCoords;
    uint32_t                         field_BC;
    uint32_t                         field_C0;
    uint32_t                         field_C4;
    uint32_t                         field_C8;
    uint32_t                         field_CC;
    uint32_t                         field_D0;
    uint32_t                         field_D4;
    uint32_t                         field_D8;
    uint32_t                         field_DC;
    uint32_t                         field_E0;
    uint32_t                         field_E4;
    uint32_t                         field_E8;
    uint32_t                         field_EC;
    uint32_t                         field_F0;
    uint32_t                         field_F4;
    uint32_t                         field_F8;
    uint32_t                         field_FC;
    uint32_t                         field_100;
    uint32_t                         field_104;
    uint32_t                         field_108;
    uint32_t                         field_10C;
    uint32_t                         field_110;
    uint32_t                         field_114;
    uint32_t                         field_118;
    uint32_t                         field_11C;
    uint32_t                         field_120;
    uint32_t                         field_124;
    uint32_t                         field_128;
    uint8_t                          field_12C;
    uint8_t                          field_12D;
    uint8_t                          field_12E;
    uint8_t                          field_12F;
    uint32_t                         WaveIntensity;
    uint32_t                         field_134;
    uint32_t                         field_138;
    uint32_t                         field_13C;
    uint32_t                         field_140;
    uint32_t                         field_144;
    uint32_t                         field_148;
    uint32_t                         field_14C;
    uint32_t                         field_150;
    uint32_t                         field_154;
    uint32_t                         field_158;
    uint32_t                         field_15C;
    uint32_t                         field_160;
    uint32_t                         field_164;
    uint32_t                         field_168;
    uint32_t                         field_16C;
    uint32_t                         field_170;
    uint32_t                         field_174;
    uint32_t                         field_178;
    uint32_t                         field_17C;
    uint32_t                         field_180;
    uint32_t                         field_184;
    uint32_t                         field_188;
    uint32_t                         field_18C;
    uint32_t                         field_190;
    uint32_t                         field_194;
    uint32_t                         field_198;
    uint32_t                         field_19C;
    uint32_t                         field_1A0;
    uint32_t                         field_1A4;
    uint32_t                         field_1A8;
    uint32_t                         field_1AC;
    uint32_t                         field_1B0;
    uint32_t                         field_1B4;
    uint32_t                         field_1B8;
    uint32_t                         field_1BC;
    uint32_t                         field_1C0;
    uint32_t                         field_1C4;
    uint32_t                         field_1C8;
    uint32_t                         field_1CC;
    uint32_t                         LaserIntensity;
    ra2::game::TechnoClass*          Owner;
    ra2::game::FacingStruct          Facing;
    DynamicVectorClass<CellClass*>   Cells;
    uint8_t                          field_208[14 * 4];

protected:
    WaveClass() = default;
};

} // namespace gamemd
