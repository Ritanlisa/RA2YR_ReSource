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
    uint8_t               unknown_B0;
    uint8_t               unknown_B1;
    uint8_t               unknown_B2;
    uint32_t              unknown_B4;
    uint32_t              unknown_B8;
    uint32_t              unknown_BC;
    uint32_t              unknown_C0;
    uint32_t              unknown_C4;
    uint32_t              unknown_C8;
    uint32_t              unknown_CC;
    double                unknown_double_D0;
    uint32_t              unknown_D8;
    uint32_t              unknown_DC;
    uint32_t              unknown_E0;
    float                 Velocity;
    CoordStruct           unknown_coords_E8;
    CoordStruct           unknown_coords_F4;
    CoordStruct           unknown_coords_100;
    Vector3D<float>       unknown_vector3d_10C;
    Vector3D<float>       unknown_vector3d_118;
    ParticleSystemClass*  ParticleSystem;
    uint16_t              RemainingEC;
    uint16_t              RemainingDC;
    uint8_t               StateAIAdvance;
    uint8_t               unknown_12D;
    uint8_t               StartStateAI;
    uint8_t               Translucency;
    uint8_t               unknown_130;
    uint8_t               unknown_131;
    uint32_t              unused_134;

public:
    ParticleClass(ParticleTypeClass* pType, const CoordStruct& coords,
                  float velocity, ParticleSystemClass* pSystem) noexcept;

protected:
    ParticleClass() = default;
};

} // namespace gamemd
