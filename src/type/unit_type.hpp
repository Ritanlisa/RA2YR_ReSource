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
    static UnitTypeClass* Find(const char* pID);  // 0x7470d0
    static UnitTypeClass* FindOrAllocate(const char* pID);  // 0x74b960 (as FindOrCreate)
    static int FindIndex(const char* pID);

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override { return E_NOTIMPL; }  // 0x747f30 (as GetClassIdentifier)

    virtual HRESULT __stdcall Load(IStream* pStm) override { return S_OK; }  // 0x747620 (as LoadFromINI)
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override { return S_OK; }  // 0x7480b0 (as SaveToINI)

    virtual ~UnitTypeClass() = default;  // 0x748190 (as ddtor)

    virtual AbstractType __stdcall whatAmI() const override { return AbstractType::UnitType; }  // 0x748170 (as GetTypeIdentifier)
    virtual int objectSize() const override { return 0; }  // 0x748160 (as GetObjectSize)

    virtual bool SpawnAtMapCoords(CellStruct* pMapCoords, HouseClass* pOwner) override { return false; }
    virtual ObjectClass* CreateObject(HouseClass* pOwner) override { return nullptr; }  // 0x7474b0 (as CreateUnit)

    UnitTypeClass(const char* pID) noexcept;  // 0x7470d0

protected:
    UnitTypeClass(noinit_t) noexcept;  // 0x7470d0

public:
    int ArrayIndex;
    LandType MovementRestrictedTo;
    CoordStruct HalfDamageSmokeLocation;
    bool Passive;
    bool CrateGoodie;
    bool Harvester;
    bool Weeder;
    bool unknown_E10;
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
