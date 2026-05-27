#pragma once

#include "techno_type.hpp"
#include "..\core\enums.hpp"

namespace gamemd
{

class AnimTypeClass;

struct SubSequenceStruct
{
    int StartFrame;
    int CountFrames;
    int FacingMultiplier;
    SequenceFacing Facing;
    int SoundCount;
    int Sound1StartFrame;
    int Sound1Index;
    int Sound2StartFrame;
    int Sound2Index;
};

struct SequenceStruct
{
    SubSequenceStruct& GetSequence(Sequence sequence) { return this->Sequences[static_cast<int>(sequence)]; }
    const SubSequenceStruct& GetSequence(Sequence sequence) const { return this->Sequences[static_cast<int>(sequence)]; }

    SubSequenceStruct Sequences[42];
};

class InfantryTypeClass : public TechnoTypeClass
{
public:
    static constexpr AbstractType AbsID = AbstractType::InfantryType;

    static DynamicVectorClass<InfantryTypeClass*>* Array;
    static InfantryTypeClass* Find(const char* pID);
    static InfantryTypeClass* FindOrAllocate(const char* pID);
    static int FindIndex(const char* pID);

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override { return E_NOTIMPL; }

    virtual HRESULT __stdcall Load(IStream* pStm) override { return S_OK; }
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override { return S_OK; }

    virtual ~InfantryTypeClass() = default;

    virtual AbstractType __stdcall WhatAmI() const override { return AbstractType::InfantryType; }
    virtual int Size() const override { return 0; }

    virtual bool SpawnAtMapCoords(CellStruct* pMapCoords, HouseClass* pOwner) override { return false; }
    virtual ObjectClass* CreateObject(HouseClass* pOwner) override { return nullptr; }

    InfantryTypeClass(const char* pID) noexcept;

protected:
    InfantryTypeClass(noinit_t) noexcept;

public:
    int ArrayIndex;
    PipIndex Pip;
    PipIndex OccupyPip;
    WeaponStruct OccupyWeapon;
    WeaponStruct EliteOccupyWeapon;
    SequenceStruct* Sequence;
    int FireUp;
    int FireProne;
    int SecondaryFire;
    int SecondaryProne;
    DynamicVectorClass<AnimTypeClass*>* DeadBodies;
    DynamicVectorClass<AnimTypeClass*>* DeathAnims;
    DynamicVectorClass<int>* VoiceComment;
    int EnterWaterSound;
    int LeaveWaterSound;
    bool Cyborg;
    bool NotHuman;
    bool Ivan;
    int DirectionDistance;
    bool Occupier;
    bool Assaulter;
    int HarvestRate;
    bool Fearless;
    bool Crawls;
    bool Infiltrate;
    bool Fraidycat;
    bool TiberiumProof;
    bool Civilian;
    bool C4;
    bool Engineer;
    bool Agent;
    bool Thief;
    bool VehicleThief;
    bool Doggie;
    bool Deployer;
    bool DeployedCrushable;
    bool UseOwnName;
    bool JumpJetTurn;
    DWORD align_ECC;
};

} // namespace gamemd
