#pragma once

#include "techno_type.hpp"
#include "..\core\enums.hpp"

namespace gamemd
{

class TechnoClass;

class UnitTypeClass : public TechnoTypeClass
{
public:
    static constexpr AbstractType AbsID = AbstractType::UnitType;

    static DynamicVectorClass<UnitTypeClass*>* Array;
    static UnitTypeClass* Find(const char* pID);
    static UnitTypeClass* FindOrAllocate(const char* pID);
    static int FindIndex(const char* pID);

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override { return E_NOTIMPL; }

    virtual HRESULT __stdcall Load(IStream* pStm) override { return S_OK; }
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override { return S_OK; }

    virtual ~UnitTypeClass() = default;

    virtual AbstractType __stdcall WhatAmI() const override { return AbstractType::UnitType; }
    virtual int Size() const override { return 0; }

    virtual bool SpawnAtMapCoords(CellStruct* pMapCoords, HouseClass* pOwner) override { return false; }
    virtual ObjectClass* CreateObject(HouseClass* pOwner) override { return nullptr; }

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
    bool canCrushInfantry;
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
