#pragma once

#include <cstdint>
#include <unknwn.h>

#include "core/enums.hpp"
#include "core/math.hpp"
#include "object/object.hpp"

namespace gamemd {

#ifndef GAMEMD_USING_ObjectClass
#define GAMEMD_USING_ObjectClass
using ra2::game::ObjectClass;
#endif


class ParticleSystemClass;
class ParticleTypeClass;

class ParticleClass : public ra2::game::ObjectClass
{
public:
    static constexpr AbstractType kObjectTypeId = AbstractType::Particle;

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override { return E_NOTIMPL; }
    virtual HRESULT __stdcall Load(IStream* pStm) override { return S_OK; }
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override { return S_OK; }

    virtual ~ParticleClass() override = default;

    virtual AbstractType __stdcall whatAmI() const override { return kObjectTypeId; }
    virtual int objectSize() const override { return sizeof(ParticleClass); }

    virtual int onParticleExpired() { return 0; }

    ParticleTypeClass*    Type;
    uint8_t               field_B0;
    uint8_t               field_B1;
    uint8_t               field_B2;
    uint32_t              field_B4;
    uint32_t              field_B8;
    uint32_t              field_BC;
    uint32_t              field_C0;
    uint32_t              field_C4;
    uint32_t              field_C8;
    uint32_t              field_CC;
    double                field_double_D0;
    uint32_t              field_D8;
    uint32_t              field_DC;
    uint32_t              field_E0;
    float                 Velocity;
    CoordStruct           field_coords_E8;
    CoordStruct           field_coords_F4;
    CoordStruct           field_coords_100;
    Vector3D<float>       field_vector3d_10C;
    Vector3D<float>       field_vector3d_118;
    ParticleSystemClass*  ParticleSystem;
    uint16_t              RemainingEC;
    uint16_t              RemainingDC;
    uint8_t               StateAIAdvance;
    uint8_t               field_12D;
    uint8_t               StartStateAI;
    uint8_t               Translucency;
    uint8_t               field_130;
    uint8_t               field_131;
    uint32_t              unused_134;

public:
    ParticleClass(ParticleTypeClass* pType, const CoordStruct& coords,
                  float velocity, ParticleSystemClass* pSystem) noexcept;

protected:
    ParticleClass() = default;
};

} // namespace gamemd
