#pragma once

#include "techno_type.hpp"
#include "core/enums.hpp"

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
    SubSequenceStruct& GetSequence(Sequence sequence); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    const SubSequenceStruct& GetSequence(Sequence sequence) const; // IDA: UNMATCHED — no_callgraph_match, no_git_history

    SubSequenceStruct Sequences[42];
};

class InfantryTypeClass : public TechnoTypeClass
{
public:
    static constexpr AbstractType AbsID = AbstractType::InfantryType;

    static DynamicVectorClass<InfantryTypeClass*>* Array;
    static InfantryTypeClass* Find(const char* pID);  // 0x772FA0
    static InfantryTypeClass* FindOrAllocate(const char* pID); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    static int FindIndex(const char* pID);

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override; // 0x524C70 (as GetClassIdentifier)

    virtual HRESULT __stdcall Load(IStream* pStm) override; // 0x524960 (as LoadTypeData)
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override;  // 0x524B60

    virtual ~InfantryTypeClass() = default;  // 0x524D70 (as ddtor)

    virtual AbstractType __stdcall whatAmI() const override; // 0x524D40 (as GetTypeIdentifier)
    virtual int objectSize() const override; // 0x524D50 (as GetObjectSize)

    virtual bool SpawnAtMapCoords(CellStruct* pMapCoords, HouseClass* pOwner) override; // 0x5247A0 (as StubReturnFalse)
    virtual ObjectClass* CreateObject(HouseClass* pOwner) override; // 0x523B40 (as CreateInfantry)

    InfantryTypeClass(const char* pID) noexcept;  // 0x5236A0 (as Constructor)

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
