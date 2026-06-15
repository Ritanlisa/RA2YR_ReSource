#pragma once

#include <cstdint>
#include <unknwn.h>

#include "..\core\enums.hpp"
#include "..\core\math.hpp"
#include "..\object\object.hpp"

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
    static constexpr AbstractType kAbsID = AbstractType::Particle;

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override { return E_NOTIMPL; }
    virtual HRESULT __stdcall Load(IStream* pStm) override { return S_OK; }
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override { return S_OK; }

    virtual ~ParticleClass() override = default;

    virtual AbstractType __stdcall WhatAmI() const override { return kAbsID; }
    virtual int Size() const override { return sizeof(ParticleClass); }

    virtual int vt_entry_1E8() { return 0; }

    ParticleTypeClass*    Type;
    uint8_t               particleField_B0;
    uint8_t               particleField_B1;
    uint8_t               particleField_B2;
    uint32_t              particleField_B4;
    uint32_t              particleField_B8;
    uint32_t              particleField_BC;
    uint32_t              particleField_C0;
    uint32_t              particleField_C4;
    uint32_t              particleField_C8;
    uint32_t              particleField_CC;
    double                particleField_double_D0;
    uint32_t              particleField_D8;
    uint32_t              particleField_DC;
    uint32_t              particleField_E0;
    float                 Velocity;
    CoordStruct           particleField_coords_E8;
    CoordStruct           particleField_coords_F4;
    CoordStruct           particleField_coords_100;
    Vector3D<float>       particleField_vector3d_10C;
    Vector3D<float>       particleField_vector3d_118;
    ParticleSystemClass*  ParticleSystem;
    uint16_t              RemainingEC;
    uint16_t              RemainingDC;
    uint8_t               StateAIAdvance;
    uint8_t               particleField_12D;
    uint8_t               StartStateAI;
    uint8_t               Translucency;
    uint8_t               particleField_130;
    uint8_t               particleField_131;
    uint32_t              unused_134;

public:
    ParticleClass(ParticleTypeClass* pType, const CoordStruct& coords,
                  float velocity, ParticleSystemClass* pSystem) noexcept;

protected:
    ParticleClass() = default;
};

} // namespace gamemd
