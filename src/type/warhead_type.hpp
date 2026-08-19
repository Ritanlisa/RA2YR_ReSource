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
        // unmatched: no callgraph reference and no git history record
        : ForceFire(FF), Retaliate(Retal), PassiveAcquire(Acquire) {}
};

class WarheadTypeClass : public AbstractTypeClass
{
public:
    static constexpr AbstractType AbsID = AbstractType::WarheadType;

    static DynamicVectorClass<WarheadTypeClass*>* Array;
    // design: static function, no direct binary match in IDA
    static WarheadTypeClass* Find(const char* pID);
    static WarheadTypeClass* FindOrCreate(const char* pID);  // 0x75E3B0 (as FindOrCreate)
    // wrapper: delegates to WarheadTypeClass::FindOrCreate at 0x75E3B0
    static int FindIndex(const char* pID);

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override { return E_NOTIMPL; }  // 0x524ED0 (as GetClassIdentifier)

    virtual HRESULT __stdcall Load(IStream* pStm) override { return S_OK; }  // 0x524F00 (as LoadTypeData)
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override { return S_OK; }  // 0x524FB0 (as SaveToINI)

    virtual ~WarheadTypeClass() = default;  // 0x75E510 (as Destructor)

    virtual AbstractType __stdcall whatAmI() const override { return AbstractType::WarheadType; }  // 0x75E500 (as GetTypeIdentifier)
    virtual int objectSize() const override { return 0; }  // 0x75E4F0 (as GetObjectSize)

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
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int loadWarheadINI(int a1, int a2, int a3);  // 0x474810 -- WarheadTypeClass::loadWarheadINI
    void* QueryInterface(int a1);  // 0x524fc0 -- WarheadTypeClass::QueryInterface
    int AddRef(int a1);  // 0x5250d0 -- WarheadTypeClass::AddRef
    int Release(int a1, int a2);  // 0x525300 -- WarheadTypeClass::Release
    void* parseVerses();  // 0x52ab80 -- WarheadTypeClass::parseVerses
    void* parseModifiers(int a1);  // 0x52ad50 -- WarheadTypeClass::parseModifiers
    void* parseAnimations(int a1);  // 0x52ae00 -- WarheadTypeClass::parseAnimations
    void* ReadParticleSystems(int a1);  // 0x52afc0 -- WarheadTypeClass::ReadParticleSystems
    int applyDamage();  // 0x644630 -- WarheadTypeClass::applyDamage
    int LoadType();  // 0x672990 -- WarheadTypeClass::LoadType
    int ProcessPower(int a1);  // 0x75dec0 -- WarheadTypeClass::ProcessPower
    int GetDamage(int a1, int a2);  // 0x75e440 -- WarheadTypeClass::GetDamage
    void* checkImmunity(int a1);  // 0x75e690 -- WarheadTypeClass::checkImmunity
    void* calculateDamage(int a1);  // 0x75e6a0 -- WarheadTypeClass::calculateDamage
    // === SYMBOL-ANCHOR (END) ===
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    int SaveLoad_Prefix(int a1, int a2);  // 0x75e0c0
    int SaveLoad_Prefix_0(int a1, int a2, int a3, int a4, int a5);  // 0x75e2c0
    int ReadINI(int a1, int a2, int a3);  // 0x772080
    // === FUNCS-MOVE (END) ===
};

} // namespace gamemd
