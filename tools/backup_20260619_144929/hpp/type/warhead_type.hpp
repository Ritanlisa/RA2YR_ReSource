#pragma once

#include "type/abstract_type.hpp"
#include "core/enums.hpp"

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
    static WarheadTypeClass* FindOrAllocate(const char* pID);  // 0x75E3B0 (as FindOrCreate)
    static int FindIndex(const char* pID);

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override { return E_NOTIMPL; }  // IDA: 0x524ED0 (as GetClassIdentifier)

    virtual HRESULT __stdcall Load(IStream* pStm) override { return S_OK; }  // IDA: 0x524F00 (as LoadTypeData)
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override { return S_OK; }  // IDA: 0x524FB0 (as SaveToINI)

    virtual ~WarheadTypeClass() = default;  // 0x75E510 (as Destructor)

    virtual AbstractType __stdcall whatAmI() const override { return AbstractType::WarheadType; }  // IDA: 0x75E500 (as GetTypeIdentifier)
    virtual int objectSize() const override { return 0; }  // IDA: 0x75E4F0 (as GetObjectSize)

    WarheadTypeClass(const char* pID) noexcept;  // 0x75CEC0 (as Construct)

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
    bool WarheadTypeClass_field_bool_149;
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
