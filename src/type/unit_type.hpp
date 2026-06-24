#pragma once

#include "techno_type.hpp"
#include "core/enums.hpp"

namespace gamemd
{

class TechnoClass;

class UnitTypeClass : public TechnoTypeClass
{
public:
    static constexpr AbstractType AbsID = AbstractType::UnitType;

    static DynamicVectorClass<UnitTypeClass*>* Array;
    static UnitTypeClass* Find(const char* pID);
    static UnitTypeClass* FindOrCreate(const char* pID);  // 0x74B960 (as FindOrCreate)
    // wrapper: delegates to UnitTypeClass::FindOrCreate at 0x74B960
    static int FindIndex(const char* pID);

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override; // 0x747F30 (as GetClassIdentifier)

    virtual HRESULT __stdcall Load(IStream* pStm) override; // 0x747620 (as LoadFromINI)
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override; // 0x7480B0 (as SaveToINI)

    virtual ~UnitTypeClass() = default;  // 0x748190 (as ddtor)

    virtual AbstractType __stdcall whatAmI() const override; // 0x748170 (as GetTypeIdentifier)
    virtual int objectSize() const override; // 0x748160 (as GetObjectSize)

    // wrapper: delegates to UnitTypeClass::GetObjectSize at 0x748160
    virtual bool SpawnAtMapCoords(CellStruct* pMapCoords, HouseClass* pOwner) override;
    virtual ObjectClass* CreateObject(HouseClass* pOwner) override; // 0x7474B0 (as CreateUnit)

    UnitTypeClass(const char* pID) noexcept;

protected:
    UnitTypeClass(noinit_t) noexcept;

public:
    int ArrayIndex;
    LandType MovementRestrictedTo;
    CoordStruct HalfDamageSmokeLocation;
    bool Passive;
    bool CrateGoodie;
    bool Harvester;
    bool Weeder;
    bool UnitTypeClass_field_E10;
    bool HasTurret;
    bool DeployToFire;
    bool IsSimpleDeployer;
    bool IsTilter;
    bool UseTurretShadow;
    bool TooBigToFitUnderBridge;
    bool CanBeach;
    bool SmallVisceroid;
    bool LargeVisceroid;
    bool CarriesCrate;
    bool NonVehicle;
    int StandingFrames;
    int DeathFrames;
    int DeathFrameRate;
    int StartStandFrame;
    int StartWalkFrame;
    int StartFiringFrame;
    int StartDeathFrame;
    int MaxDeathCounter;
    int Facings;
    int FiringSyncFrame0;
    int FiringSyncFrame1;
    int BurstDelay0;
    int BurstDelay1;
    int BurstDelay2;
    int BurstDelay3;
    SHPStruct* AltImage;
    char WalkFrames;
    char FiringFrames;
    char AltImageFile[0x19];
};

} // namespace gamemd
