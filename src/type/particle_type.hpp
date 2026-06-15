#pragma once

#include "object_type.hpp"
#include "core/enums.hpp"
#include "core/vector.hpp"

namespace gamemd {

#ifndef GAMEMD_USING_AbstractType
#define GAMEMD_USING_AbstractType
using ra2::game::AbstractType;
#endif




class ParticleSystemClass;

class ParticleTypeClass : public ObjectTypeClass
{
public:
    static constexpr AbstractType AbsID = AbstractType::ParticleType;
    static DynamicVectorClass<ParticleTypeClass*>* Array;
    static ParticleTypeClass* Find(const char* pID);
    static ParticleTypeClass* FindOrAllocate(const char* pID);

    virtual ~ParticleTypeClass() = default;

    virtual AbstractType __stdcall whatAmI() const override { return AbstractType::ParticleType; }
    virtual int objectSize() const override { return 0; }

    virtual bool SpawnAtMapCoords(CellStruct* pMapCoords, HouseClass* pOwner) override { return false; }
    virtual ObjectClass* CreateObject(HouseClass* pOwner) override { return nullptr; }

    ParticleTypeClass(const char* pID) noexcept;

protected:
    struct noinit_t {};
    ParticleTypeClass(noinit_t) noexcept : ObjectTypeClass(ObjectTypeClass::noinit_t{}) {}

public:
    int ArrayIndex;
    int unknown_28C;
    BehavesLike BehavesLike;
    int unknown_294;
    int ImpactParticle;
    int Damage;
    int StartScale;
    int unknown_2A4;
    int StartStateAI;
    int EndStateAI;
    int StateAIAdvance;
    int unknown_2B4;
    int Translucency;
    int unknown_2BC;
    int Velocity;
    int unknown_2C4;
    int DeleteOnStateLimit;
    int unknown_2CC;
    int WindEffect;
    int Elasticity;
    int MaxDC;
    int MaxEC;
    int unknown_2E0;
    int unknown_2E4;
    uint32_t VelocityRandom;
    uint32_t Regenerate;
    uint32_t SpiralDeltaPerStep;
    bool Flamer;
    bool SpawnsFromOwnerCoords;
    bool OneFrame;
    bool unknown_bool_2F4;
    bool Gas;
    bool Spark;
    bool Railgun;
    bool Fire;
    bool Smoke;
    bool SpawnFrames;
    bool UpdateUI;
    bool unknown_bool_300;
    bool unknown_bool_301;
    bool Translucent;
    bool ShowShadow;
    bool AltPal;
    bool StateAIAdvanceFudgeCalc;
    uint8_t padding_306[2];
};

} // namespace gamemd

