#pragma once

#include "object_type.hpp"
#include "core/enums.hpp"
#include "core/vector.hpp"

namespace gamemd {

#ifndef GAMEMD_USING_AbstractType
#define GAMEMD_USING_AbstractType
using ra2::game::AbstractType;
#endif




class ParticleTypeClass;

class ParticleSystemTypeClass : public ObjectTypeClass
{
public:
    static constexpr AbstractType AbsID = AbstractType::ParticleSystemType;
    static DynamicVectorClass<ParticleSystemTypeClass*>* Array;
    static ParticleSystemTypeClass* Find(const char* pID);
    static ParticleSystemTypeClass* FindOrAllocate(const char* pID);

    virtual ~ParticleSystemTypeClass() = default;

    virtual AbstractType __stdcall whatAmI() const override { return AbstractType::ParticleSystemType; }
    virtual int objectSize() const override { return 0; }

    virtual bool SpawnAtMapCoords(CellStruct* pMapCoords, HouseClass* pOwner) override { return false; }
    virtual ObjectClass* CreateObject(HouseClass* pOwner) override { return nullptr; }

    ParticleSystemTypeClass(const char* pID) noexcept;

protected:
    struct noinit_t {};
    ParticleSystemTypeClass(noinit_t) noexcept : ObjectTypeClass(ObjectTypeClass::noinit_t{}) {}

public:
    int ArrayIndex;
    int unknown_28C;
    int HoldsWhat;
    int SpawnCount;
    int SlowdownDistance;
    int unknown_29C;
    int unknown_2A0;
    float Velocity;
    float unknown_float;
    int unknown_2AC;
    int unknown_2B0;
    int DamageDelay;
    int WarheadKey;
    int Translucency;
    int unknown_2C0;
    int StartScale;
    int unknown_2C8;
    bool Beam;
    bool OneFrame;
    bool UseLineTrail;
    bool unknown_bool_2D4;
    uint8_t padding_2D5[3];
};

} // namespace gamemd

