#pragma once

#include "abstract_type.hpp"
#include "..\core\enums.hpp"

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
    static WeaponTypeClass* Find(const char* pID);
    static WeaponTypeClass* FindOrAllocate(const char* pID);
    static int FindIndex(const char* pID);

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override { return E_NOTIMPL; }

    virtual HRESULT __stdcall Load(IStream* pStm) override { return S_OK; }
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override { return S_OK; }

    virtual ~WeaponTypeClass() = default;

    virtual AbstractType __stdcall WhatAmI() const override { return AbstractType::WeaponType; }
    virtual int Size() const override { return 0; }

    void CalculateSpeed();

    WeaponTypeClass(const char* pID = nullptr) noexcept;

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
