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
    // design: static function, no direct binary match in IDA
    static ParticleSystemTypeClass* Find(const char* pID);
    // unmatched: no callgraph reference and no git history record
    static ParticleSystemTypeClass* FindOrCreate(const char* pID);

    virtual ~ParticleSystemTypeClass() = default;  // 0x644960 (as ddtor)

    virtual AbstractType __stdcall whatAmI() const override; // 0x644930 (as GetTypeIdentifier)
    virtual int objectSize() const override; // 0x644920 (as GetObjectSize)

    virtual bool SpawnAtMapCoords(CellStruct* pMapCoords, HouseClass* pOwner) override; // 0x644950 (as StubReturnFalse)
    virtual ObjectClass* CreateObject(HouseClass* pOwner) override;  // 0x4737F0

    // unmatched: no callgraph reference and no git history record
    ParticleSystemTypeClass(const char* pID) noexcept;

protected:
    struct noinit_t {};
    // unmatched: no callgraph reference and no git history record
    ParticleSystemTypeClass(noinit_t) noexcept : ObjectTypeClass(ObjectTypeClass::noinit_t{}) {}

public:
    int ArrayIndex;
    int ParticleSystemTypeClass_field_28C;
    int HoldsWhat;
    int SpawnCount;
    int SlowdownDistance;
    int ParticleSystemTypeClass_field_29C;
    int ParticleSystemTypeClass_field_2A0;
    float Velocity;
    float ParticleSystemTypeClass_field_float_2A4;
    int ParticleSystemTypeClass_field_2AC;
    int ParticleSystemTypeClass_field_2B0;
    int DamageDelay;
    int WarheadKey;
    int Translucency;
    int ParticleSystemTypeClass_field_2C0;
    int StartScale;
    int ParticleSystemTypeClass_field_2C8;
    bool Beam;
    bool OneFrame;
    bool UseLineTrail;
    bool ParticleSystemTypeClass_field_bool_2D4;
    uint8_t padding_2D5[3];
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    void* ReadXYZFromINI(int a1, int a2, int a3, int a4);  // 0x476340 -- ParticleSystemTypeClass::ReadXYZFromINI
    int GetType(int a1);  // 0x6442d0 -- ParticleSystemTypeClass::GetType
    int PowerDrainUpdate(int a1);  // 0x644700 -- ParticleSystemTypeClass::PowerDrainUpdate
    // === SYMBOL-ANCHOR (END) ===
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    int GetClassIdentifier(int a1, int a2);  // 0x6447a0
    int SaveLoad_Prefix(int a1, int a2);  // 0x6447e0
    int SaveLoad_Prefix_0(int a1, int a2, int a3);  // 0x644830
    // === FUNCS-MOVE (END) ===
};

} // namespace gamemd

