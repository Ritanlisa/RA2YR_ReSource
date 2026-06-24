#pragma once

#include "object_type.hpp"
#include "core/enums.hpp"

namespace gamemd
{

class AnimTypeClass;
class BulletClass;
class ColorScheme;
class CellClass;
class TechnoClass;
class WeaponTypeClass;
class WarheadTypeClass;

class BulletTypeClass : public ObjectTypeClass
{
public:
    static constexpr AbstractType AbsID = AbstractType::BulletType;

    static DynamicVectorClass<BulletTypeClass*>* Array;
    // design: static function, no direct binary match in IDA
    static BulletTypeClass* Find(const char* pID);
    // unmatched: no callgraph reference and no git history record
    static BulletTypeClass* FindOrCreate(const char* pID);
    // design: static function, no direct binary match in IDA
    static int FindIndex(const char* pID);

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override; // 0x46C750 (as GetClassIdentifier)

    virtual ~BulletTypeClass() = default;  // 0x46C890 (as ddtor)

    virtual AbstractType __stdcall whatAmI() const override; // 0x46C850 (as GetTypeIdentifier)
    virtual int objectSize() const override; // 0x46C860 (as GetObjectSize)

    virtual bool SpawnAtMapCoords(CellStruct* pMapCoords, HouseClass* pOwner) override; // 0x46C880 (as StubReturnFalse)
    virtual ObjectClass* CreateObject(HouseClass* pOwner) override;  // 0x4737F0

    // unmatched: no callgraph reference and no git history record
    bool Rotates() const;
    void SetScaledSpawnDelay(int delay); // 0x46C840

    // unmatched: no callgraph reference and no git history record
    BulletClass* CreateBullet(AbstractClass* pTarget, TechnoClass* pOwner, int nDamage,
        WarheadTypeClass* pWH, int nSpeed, bool bBright);

    BulletTypeClass(const char* pID) noexcept;  // 0x46BBC0 (as Construct)

protected:
    BulletTypeClass(noinit_t) noexcept;

public:
    bool Airburst;
    bool Floater;
    bool SubjectToCliffs;
    bool SubjectToElevation;
    bool SubjectToWalls;
    bool VeryHigh;
    bool Shadow;
    bool Arcing;
    bool Dropping;
    bool Level;
    bool Inviso;
    bool Proximity;
    bool Ranged;
    bool NoRotate;
    bool Inaccurate;
    bool FlakScatter;
    bool AA;
    bool AG;
    bool Degenerates;
    bool Bouncy;
    bool AnimPalette;
    bool FirersPalette;
    int Cluster;
    WeaponTypeClass* AirburstWeapon;
    WeaponTypeClass* ShrapnelWeapon;
    int ShrapnelCount;
    int DetonationAltitude;
    bool Vertical;
    double Elasticity;
    int Acceleration;
    ColorScheme* Color;
    AnimTypeClass* Trailer;
    int ROT;
    int CourseLockDuration;
    int SpawnDelay;
    int ScaledSpawnDelay;
    bool Scalable;
    int Arm;
    uint8_t AnimLow;
    uint8_t AnimHigh;
    uint8_t AnimRate;
    bool Flat;
};

} // namespace gamemd
