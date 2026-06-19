#pragma once

#include <cstdint>

#include "core/math.hpp"
#include "core/enums.hpp"
#include "fundamentals.hpp"
#include "object/object.hpp"
#include "render/palette.hpp"

namespace gamemd
{

#ifndef GAMEMD_USING_AbstractClass
#define GAMEMD_USING_AbstractClass
using ra2::game::AbstractClass;
#endif

struct PendingCellClass
{
    CellStruct  Cell;
    int32_t     Intensity;
    TintStruct  TintMovement;
};

class LightSourceClass : public AbstractClass
{
public:
    static constexpr AbstractType kObjectTypeId = AbstractType::LightSource;

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override;

    virtual HRESULT __stdcall Load(IStream* stream) override;
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;

    virtual ~LightSourceClass() override = default;

    virtual AbstractType __stdcall whatAmI() const override;
    virtual int objectSize() const override;

    void Activate(uint32_t zero = 0);
    void Deactivate(uint32_t zero = 0);
    void ChangeLevels(int intensity, const TintStruct& tint, int8_t mode);

    int32_t        LightIntensity;
    TintStruct     LightTint;
    int32_t        DetailLevel;
    CoordStruct    Location;
    int32_t        LightVisibility;
    bool           Activated;

protected:
    LightSourceClass() = default;
    LightSourceClass(const CoordStruct& location, int intensity, int visibility,
                     const TintStruct& tint, int detail_level) noexcept;
    explicit LightSourceClass(noinit_t) noexcept;
};

} // namespace gamemd
