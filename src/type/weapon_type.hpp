#pragma once

#include "type/abstract_type.hpp"
#include "core/enums.hpp"

namespace gamemd
{

class AnimTypeClass;
class BulletTypeClass;
class ParticleSystemTypeClass;
class WarheadTypeClass;

template <typename T>
class DynamicVectorClass;

class WeaponTypeClass : public AbstractTypeClass
{
public:
    static constexpr AbstractType AbsID = AbstractType::WeaponType;

    static DynamicVectorClass<WeaponTypeClass*>* Array;
    // design: static function, no direct binary match in IDA
    static WeaponTypeClass* Find(const char* pID);
    // unmatched: no callgraph reference and no git history record
    static WeaponTypeClass* FindOrCreate(const char* pID);
    // design: static function, no direct binary match in IDA
    static int FindIndex(const char* pID);

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override; // 0x772C90 (as GetClassIdentifier)

    // wrapper: delegates to WeaponTypeClass::GetClassIdentifier at 0x772C90
    virtual HRESULT __stdcall Load(IStream* pStm) override;
    // wrapper: delegates to WeaponTypeClass::GetClassIdentifier at 0x772C90
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override;

    virtual ~WeaponTypeClass() = default;  // 0x7730F0 (as ddtor)

    virtual AbstractType __stdcall whatAmI() const override; // 0x7730E0 (as GetTypeIdentifier)
    virtual int objectSize() const override; // 0x7730D0 (as GetObjectSize)

    void CalculateSpeed();  // 0x7729F0

    WeaponTypeClass(const char* pID = nullptr) noexcept;  // 0x771C70 (as Constructor)

protected:
    WeaponTypeClass(noinit_t) noexcept;

public:
    int AmbientDamage;
    int Burst;
    BulletTypeClass* Projectile;
    int Damage;
    int Speed;
    WarheadTypeClass* Warhead;
    int ROF;
    int Range;
    int MinimumRange;
    DynamicVectorClass<int>* Report;
    DynamicVectorClass<int>* DownReport;
    DynamicVectorClass<AnimTypeClass*>* Anim;
    AnimTypeClass* OccupantAnim;
    AnimTypeClass* AssaultAnim;
    AnimTypeClass* OpenToppedAnim;
    ParticleSystemTypeClass* AttachedParticleSystem;
    ColorStruct LaserInnerColor;
    ColorStruct LaserOuterColor;
    ColorStruct LaserOuterSpread;
    bool UseFireParticles;
    bool UseSparkParticles;
    bool OmniFire;
    bool DistributedWeaponFire;
    bool IsRailgun;
    bool Lobber;
    bool Bright;
    bool IsSonic;
    bool Spawner;
    bool LimboLaunch;
    bool DecloakToFire;
    bool CellRangefinding;
    bool FireOnce;
    bool NeverUse;
    bool RevealOnFire;
    bool TerrainFire;
    bool SabotageCursor;
    bool MigAttackCursor;
    bool DisguiseFireOnly;
    int DisguiseFakeBlinkTime;
    bool InfiniteMindControl;
    bool FireWhileMoving;
    bool DrainWeapon;
    bool FireInTransport;
    bool Suicide;
    bool TurboBoost;
    bool Supress;
    bool Camera;
    bool Charges;
    bool IsLaser;
    bool DiskLaser;
    bool IsLine;
    bool IsBigLaser;
    bool IsHouseColor;
    char LaserDuration;
    bool IonSensitive;
    bool AreaFire;
    bool IsElectricBolt;
    bool DrawBoltAsLaser;
    bool IsAlternateColor;
    bool IsRadBeam;
    bool IsRadEruption;
    int RadLevel;
    bool IsMagBeam;
};

} // namespace gamemd
