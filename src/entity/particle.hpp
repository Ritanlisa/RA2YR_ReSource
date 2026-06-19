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

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override;  // 0x62D930
    virtual HRESULT __stdcall Load(IStream* pStm) override;  // 0x62D7A0
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override; // IDA: UNMATCHED — no_callgraph_match, no_git_history

    virtual ~ParticleClass() override = default; // IDA: NOT_FOUND

    virtual AbstractType __stdcall whatAmI() const override; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual int objectSize() const override;  // 0x62D970

    virtual int onParticleExpired(); // IDA: NOT_FOUND

    void DrawParticle(void* surface, int draw_x, int draw_y);  // 0x62CEC0
    bool CheckDrawFlags(int flags) const;  // 0x62D710

    ParticleTypeClass*    Type;
    uint8_t               ParticleClass_field_B0;
    uint8_t               ParticleClass_field_B1;
    uint8_t               ParticleClass_field_B2;
    uint32_t              ParticleClass_field_B4;
    uint32_t              ParticleClass_field_B8;
    uint32_t              ParticleClass_field_BC;
    uint32_t              ParticleClass_field_C0;
    uint32_t              ParticleClass_field_C4;
    uint32_t              ParticleClass_field_C8;
    uint32_t              ParticleClass_field_CC;
    double                ParticleClass_field_double_D0;
    uint32_t              ParticleClass_field_D8;
    uint32_t              ParticleClass_field_DC;
    uint32_t              ParticleClass_field_E0;
    float                 Velocity;
    CoordStruct           ParticleClass_field_coords_E8;
    CoordStruct           ParticleClass_field_coords_F4;
    CoordStruct           ParticleClass_field_coords_100;
    Vector3D<float>       ParticleClass_field_vector3d_10C;
    Vector3D<float>       ParticleClass_field_vector3d_118;
    ParticleSystemClass*  ParticleSystem;
    uint16_t              RemainingEC;
    uint16_t              RemainingDC;
    uint8_t               StateAIAdvance;
    uint8_t               ParticleClass_field_12D;
    uint8_t               StartStateAI;
    uint8_t               Translucency;
    uint8_t               ParticleClass_field_130;
    uint8_t               ParticleClass_field_131;
    uint32_t              unused_134;

public:
    ParticleClass(ParticleTypeClass* pType, const CoordStruct& coords,
                  float velocity, ParticleSystemClass* pSystem) noexcept;

protected:
    ParticleClass() = default;
};

} // namespace gamemd
