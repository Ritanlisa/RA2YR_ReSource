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


// CSP: ParticleSystemClass matched via T1
class ParticleSystemClass;
class ParticleTypeClass;

class ParticleClass : public ra2::game::ObjectClass
{
public:
    static constexpr AbstractType kObjectTypeId = AbstractType::Particle;

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override;  // 0x62D930
    virtual HRESULT __stdcall Load(IStream* pStm) override;  // 0x62D7A0
    // unmatched: no callgraph reference and no git history record
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override;

    // wrapper: delegates to ParticleClass::LoadParticleData at 0x62D7A0
    virtual ~ParticleClass() override;

    // unmatched: no callgraph reference and no git history record
    virtual AbstractType __stdcall whatAmI() const override;
    virtual int objectSize() const override;  // 0x62D970

    // wrapper: delegates to ParticleClass::GetObjectSize at 0x62D970
    virtual int onParticleExpired();

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
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int MissionDispatch();  // 0x5B35E0
    int Construct(int a1, void* a2, float a3, int a4);  // 0x62B5E0
    void UpdateParticlePhysics();  // 0x62C3A0
    void UpdateAnimationDrift();  // 0x62C540
    int Dispatch();  // 0x62CE40
    void CheckWaterImpact();  // 0x62D3F0
    // 2026-09-07 归位（原 BuildingClass::AdjustHeight 误挂）：receiver 是粒子
    // （调用方 ParticleSystemClass::UpdateAllParticles / UpdateBuilding*Particles；
    // 体读 location@+0x9C、height delta@+0xE4、type 链@+0xAC→behavior kind@+0x314）
    int AdjustHeight();  // 0x62D5E0
    bool CheckMirrorState(int a1);  // 0x62D6F0
    int sub_62D830();  // 0x62D830
    int Stub();  // 0x62D990
    void* UpdateParticle(int a1);  // 0x62D9A0
    int ProcessCreation();  // 0x62DF20
    int CreateInstance(void* a1, float a2, int a3);  // 0x62E4C0
    // --- gap2 auto-generated stub declarations (END) ---
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    int CheckCollisionFlags(int a1, int a2, int a3);  // 0x62d810
    // === FUNCS-MOVE (END) ===

    unsigned char __pad_11C;  // X10 supply (csp_canon_members)
    int q0B8;  // X10 supply (member_lookup)
    int q0C0;  // X10 supply (member_lookup)
    unsigned int q0C9;  // X10 supply (member_lookup)
    unsigned char q128[364];  /* char[364] */  // X10 supply (member_lookup)
    bool q132;  // X10 supply (member_lookup)
    unsigned int u32_131;  // X10 supply (member_lookup)
    unsigned int u32_AC;  // X10 supply (member_lookup)
    unsigned int u32_B4;  // X10 supply (member_lookup)
    unsigned int u32_BC;  // X10 supply (member_lookup)
    unsigned int u32_C4;  // X10 supply (member_lookup)
    unsigned int u32_C8;  // X10 supply (member_lookup)
    unsigned int u32_E8;  // X10 supply (member_lookup)
    unsigned int u32_EC;  // X10 supply (member_lookup)
    unsigned int u32_F0;  // X10 supply (member_lookup)
    unsigned int u32_F4;  // X10 supply (member_lookup)
    unsigned int u32_F8;  // X10 supply (member_lookup)
    void* ptr_0;  // X10 supply (csp_canon_members)
    void* ptr_4;  // X10 supply (csp_canon_members)
    void* ptr_8;  // X10 supply (csp_canon_members)
    void* ptr_C;  // X10 supply (csp_canon_members)


    int q0100;  // 0x100 [X55 W3 supply (render vocab)]
    unsigned int q0101;  // 0x101 [X55 W3 supply (render vocab)]
    unsigned int q0103;  // 0x103 [X55 W3 supply (render vocab)]
    unsigned int u32_108;  // 0x108 [X55 W3 supply (render vocab)]
    unsigned int u32_104;  // 0x104 [X55 W3 supply (render vocab)]
};

} // namespace gamemd
