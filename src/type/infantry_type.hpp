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
    SubSequenceStruct& GetSequence(Sequence sequence) { return this->Sequences[static_cast<int>(sequence)]; }
    const SubSequenceStruct& GetSequence(Sequence sequence) const { return this->Sequences[static_cast<int>(sequence)]; }

    SubSequenceStruct Sequences[42];
};

class InfantryTypeClass : public TechnoTypeClass
{
public:
    static constexpr AbstractType AbsID = AbstractType::InfantryType;

    static DynamicVectorClass<InfantryTypeClass*>* Array;
    static InfantryTypeClass* Find(const char* pID);  // 0x772fa0
    static InfantryTypeClass* FindOrAllocate(const char* pID);  // 0x772fa0
    static int FindIndex(const char* pID);  // 0x772fa0

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override { return E_NOTIMPL; }  // 0x524c70 (as GetClassIdentifier)

    virtual HRESULT __stdcall Load(IStream* pStm) override { return S_OK; }  // 0x524960 (as LoadTypeData)
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override { return S_OK; }

    virtual ~InfantryTypeClass() = default;  // 0x524d70 (as ddtor)

    virtual AbstractType __stdcall whatAmI() const override { return AbstractType::InfantryType; }  // 0x524d40 (as GetTypeIdentifier)
    virtual int objectSize() const override { return 0; }  // 0x524d50 (as GetObjectSize)

    virtual bool SpawnAtMapCoords(CellStruct* pMapCoords, HouseClass* pOwner) override { return false; }  // 0x5247a0 (as StubReturnFalse)
    virtual ObjectClass* CreateObject(HouseClass* pOwner) override { return nullptr; }  // 0x523b40 (as CreateInfantry)

    InfantryTypeClass(const char* pID) noexcept;  // 0x5236a0 (as Constructor)

protected:
    InfantryTypeClass(noinit_t) noexcept;  // 0x5236a0 (as Constructor)

public:
    int ArrayIndex;
    int PowerDrain;
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
