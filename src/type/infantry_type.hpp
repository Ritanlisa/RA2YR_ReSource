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
    // unmatched: no callgraph reference and no git history record
    SubSequenceStruct& GetSequence(Sequence sequence);
    // unmatched: no callgraph reference and no git history record
    const SubSequenceStruct& GetSequence(Sequence sequence) const;

    SubSequenceStruct Sequences[42];
};

class InfantryTypeClass : public TechnoTypeClass
{
public:
    static constexpr AbstractType AbsID = AbstractType::InfantryType;

    static DynamicVectorClass<InfantryTypeClass*>* Array;
    static InfantryTypeClass* Find(const char* pID);  // 0x772FA0
    // unmatched: no callgraph reference and no git history record
    static InfantryTypeClass* FindOrCreate(const char* pID);
    // wrapper: delegates to InfantryTypeClass::Find at 0x772FA0
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
    // --- G22 dtor-write-map members (binary offsets 3644-3733; layout debt
    //     accepted per 09-07 ruling -- verify offsets come from member_lookup) ---
    void* RecordTable;              // 0xE3C: new(0x5E8) 42x36B records (ctor 0x5236a0)
    void* DeadBodies_Items;         // TypeList<AnimTypeClass const*> embed @3664
    int DeadBodies_Capacity;        // @3672
    unsigned char DeadBodies_FlagByte;   // @3677 (+13 IsAllocated)
    void* DeathAnims_Items;         // embed @3692
    int DeathAnims_Capacity;        // @3700
    unsigned char DeathAnims_FlagByte;   // @3705
    void* VoiceComment_Items;       // TypeList<int> embed @3720
    int VoiceComment_Capacity;      // @3728
    unsigned char VoiceComment_FlagByte; // @3733
    DWORD align_ECC;
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    void* Constructor_523980(int a1);  // 0x523980 -- InfantryTypeClass::Constructor_523980
    int ConstructInfantry(int a1);  // 0x523b10 -- InfantryTypeClass::ConstructInfantry
    int PowerDrainUpdate(int a1);  // 0x524840 -- InfantryTypeClass::PowerDrainUpdate
    int GetAuxField();  // 0x524d60 -- InfantryTypeClass::GetAuxField
    void* CopyDataArray(int a1);  // 0x524f20 -- InfantryTypeClass::CopyDataArray
    // === SYMBOL-ANCHOR (END) ===
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    void* GetDimensions(int a1);  // 0x523c20
    int LoadFromINI(int a1, int a2, int a3);  // 0x5240a0
    void* GetDefaultDimensions(int a1);  // 0x524760
    int GetGameplayValue();  // 0x524790
    void* ClampToGroundHeight(int a1, int a2);  // 0x5247d0
    // === FUNCS-MOVE (END) ===
// --- e4 declarations (BEGIN) ---
    int Constructor(ObjectClass * aP1);  // 0x5236A0
    char CreateInfantry(short * a2, AbstractClass * ppv);  // 0x523B40
    int StubReturnFalse();  // 0x5247A0
    int GetClassIdentifier(int a1, unsigned int * a2);  // 0x524C70
    int GetTypeIdentifier();  // 0x524D40
    int GetObjectSize();  // 0x524D50
    InfantryTypeClass * ddtor(int Block, char a2);  // 0x524D70
    int DTOR();  // 0x5239D0（删除式析构：4 重 vfptr 安装 + 全局类型数组自摘 + 三向量清理 + 尾调 TechnoTypeClass::DTOR）
// --- e4 declarations (END) ---
};

// G22 E1: InfantryTypes registry (0xA8E348; ctor register / dtor compaction).
// Shim struct: binary embed layout (vfptr/Items/Cap/Flags/Count/CapInc); the
// registry's dynamic type is fixed, so the direct FindItemIndex call targets
// the same slot-16 implementation the virtual dispatch would reach.
struct InfantryTypesVector_Shim
{
    void* VfptrUnused;
    InfantryTypeClass** Items;
    int Capacity;
    unsigned char FlagsByte[4];
    int Count;
    int CapacityIncrement;
    int FindItemIndex(InfantryTypeClass** item);  // slot16 target (per-T instantiation)
};

extern InfantryTypesVector_Shim g_InfantryTypes;  // data: 0xA8E348

} // namespace gamemd
