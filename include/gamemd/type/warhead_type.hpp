#pragma once

#include "abstract_type.hpp"
#include "..\core\enums.hpp"

namespace gamemd
{

class AnimTypeClass;
class ParticleTypeClass;
class VoxelAnimTypeClass;

template <typename T>
class DynamicVectorClass;

struct WarheadFlags
{
    bool ForceFire;
    bool Retaliate;
    bool PassiveAcquire;

    WarheadFlags(bool FF = true, bool Retal = true, bool Acquire = true)
        : ForceFire(FF), Retaliate(Retal), PassiveAcquire(Acquire) {}
};

class WarheadTypeClass : public AbstractTypeClass
{
public:
    static constexpr AbstractType AbsID = AbstractType::WarheadType;

    static DynamicVectorClass<WarheadTypeClass*>* Array;
    static WarheadTypeClass* Find(const char* pID);
    static WarheadTypeClass* FindOrAllocate(const char* pID);
    static int FindIndex(const char* pID);

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override { return E_NOTIMPL; }

    virtual HRESULT __stdcall Load(IStream* pStm) override { return S_OK; }
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override { return S_OK; }

    virtual ~WarheadTypeClass() = default;

    virtual AbstractType __stdcall WhatAmI() const override { return AbstractType::WarheadType; }
    virtual int Size() const override { return 0; }

    WarheadTypeClass(const char* pID) noexcept;

protected:
    WarheadTypeClass(noinit_t) noexcept;

public:
    double Deform;
    double Verses[0xB];
    double ProneDamage;
    int DeformTreshold;
    DynamicVectorClass<AnimTypeClass*>* AnimList;
    InfDeath InfDeath;
    float CellSpread;
    float CellInset;
    float PercentAtMax;
    bool CausesDelayKill;
    int DelayKillFrames;
    float DelayKillAtMax;
    float CombatLightSize;
    ParticleTypeClass* Particle;
    bool Wall;
    bool WallAbsoluteDestroyer;
    bool PenetratesBunker;
    bool Wood;
    bool Tiberium;
    bool unknown_bool_149;
    bool Sparky;
    bool Sonic;
    bool Fire;
    bool Conventional;
    bool Rocker;
    bool DirectRocker;
    bool Bright;
    bool CLDisableRed;
    bool CLDisableGreen;
    bool CLDisableBlue;
    bool EMEffect;
    bool MindControl;
    bool Poison;
    bool IvanBomb;
    bool ElectricAssault;
    bool Parasite;
    bool Temporal;
    bool IsLocomotor;
    _GUID Locomotor;
    bool Airstrike;
    bool Psychedelic;
    bool BombDisarm;
    int Paralyzes;
    bool Culling;
    bool MakesDisguise;
    bool NukeMaker;
    bool Radiation;
    bool PsychicDamage;
    bool AffectsAllies;
    bool Bullets;
    bool Veinhole;
    int ShakeXlo;
    int ShakeXhi;
    int ShakeYlo;
    int ShakeYhi;
    DynamicVectorClass<VoxelAnimTypeClass*>* DebrisTypes;
    DynamicVectorClass<int>* DebrisMaximums;
    int MaxDebris;
    int MinDebris;
    DWORD unused_1CC;
};

} // namespace gamemd
