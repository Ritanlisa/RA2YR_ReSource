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

    virtual HRESULT __stdcall Load(IStream* pStm) override;
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override;
    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override;

    virtual ~WaveClass() override = default;  // 0x763200

    virtual AbstractType __stdcall whatAmI() const override;
    virtual int objectSize() const override;

    ra2::game::TechnoClass*          Target;
    WaveType                         Type;
    Point2D                          someCoords;
    uint32_t                         WaveClass_field_BC;
    uint32_t                         WaveClass_field_C0;
    uint32_t                         WaveClass_field_C4;
    uint32_t                         WaveClass_field_C8;
    uint32_t                         WaveClass_field_CC;
    uint32_t                         WaveClass_field_D0;
    uint32_t                         WaveClass_field_D4;
    uint32_t                         WaveClass_field_D8;
    uint32_t                         WaveClass_field_DC;
    uint32_t                         WaveClass_field_E0;
    uint32_t                         WaveClass_field_E4;
    uint32_t                         WaveClass_field_E8;
    uint32_t                         WaveClass_field_EC;
    uint32_t                         WaveClass_field_F0;
    uint32_t                         WaveClass_field_F4;
    uint32_t                         WaveClass_field_F8;
    uint32_t                         WaveClass_field_FC;
    uint32_t                         WaveClass_field_100;
    uint32_t                         WaveClass_field_104;
    uint32_t                         WaveClass_field_108;
    uint32_t                         WaveClass_field_10C;
    uint32_t                         WaveClass_field_110;
    uint32_t                         WaveClass_field_114;
    uint32_t                         WaveClass_field_118;
    uint32_t                         WaveClass_field_11C;
    uint32_t                         WaveClass_field_120;
    uint32_t                         WaveClass_field_124;
    uint32_t                         WaveClass_field_128;
    uint8_t                          WaveClass_field_12C;
    uint8_t                          WaveClass_field_12D;
    uint8_t                          WaveClass_field_12E;
    uint8_t                          WaveClass_field_12F;
    uint32_t                         WaveIntensity;
    uint32_t                         WaveClass_field_134;
    uint32_t                         WaveClass_field_138;
    uint32_t                         WaveClass_field_13C;
    uint32_t                         WaveClass_field_140;
    uint32_t                         WaveClass_field_144;
    uint32_t                         WaveClass_field_148;
    uint32_t                         WaveClass_field_14C;
    uint32_t                         WaveClass_field_150;
    uint32_t                         WaveClass_field_154;
    uint32_t                         WaveClass_field_158;
    uint32_t                         WaveClass_field_15C;
    uint32_t                         WaveClass_field_160;
    uint32_t                         WaveClass_field_164;
    uint32_t                         WaveClass_field_168;
    uint32_t                         WaveClass_field_16C;
    uint32_t                         WaveClass_field_170;
    uint32_t                         WaveClass_field_174;
    uint32_t                         WaveClass_field_178;
    uint32_t                         WaveClass_field_17C;
    uint32_t                         WaveClass_field_180;
    uint32_t                         WaveClass_field_184;
    uint32_t                         WaveClass_field_188;
    uint32_t                         WaveClass_field_18C;
    uint32_t                         WaveClass_field_190;
    uint32_t                         WaveClass_field_194;
    uint32_t                         WaveClass_field_198;
    uint32_t                         WaveClass_field_19C;
    uint32_t                         WaveClass_field_1A0;
    uint32_t                         WaveClass_field_1A4;
    uint32_t                         WaveClass_field_1A8;
    uint32_t                         WaveClass_field_1AC;
    uint32_t                         WaveClass_field_1B0;
    uint32_t                         WaveClass_field_1B4;
    uint32_t                         WaveClass_field_1B8;
    uint32_t                         WaveClass_field_1BC;
    uint32_t                         WaveClass_field_1C0;
    uint32_t                         WaveClass_field_1C4;
    uint32_t                         WaveClass_field_1C8;
    uint32_t                         WaveClass_field_1CC;
    uint32_t                         LaserIntensity;
    ra2::game::TechnoClass*          Owner;
    ra2::game::FacingStruct          Facing;
    DynamicVectorClass<CellClass*>   Cells;
    uint8_t                          WaveClass_field_208[14 * 4];

protected:
    WaveClass() = default;
};

} // namespace gamemd
