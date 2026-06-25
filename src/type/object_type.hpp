#pragma once

#include "type/abstract_type.hpp"
#include "core/enums.hpp"
#include "core/math.hpp"

namespace gamemd
{

struct SHPStruct { int unused; };
#ifndef GAMEMD_VOXEL_STRUCT_FULL
struct VoxelStruct { int unused; };
#endif
// SomeVoxelCache — 20 bytes (0x14). IDA-validated: each element of ObjectTypeClass::VoxelCaches[4]
// is a {ptr, dword, dword, byte, dword} group. Confirmed by ObjectTypeClass::ConstructFull
// (0x5F7090) zero-init of this+580/584/588/(byte)592/596 .. this+656, and ObjectTypeClass::Destruct
// (0x5F7400) which `operator delete`s the [+0] pointer of each of the four groups. 4 * 20 = 80 bytes
// occupy [0x244,0x294), closing ObjectTypeClass at sizeof 0x294 (660) — i.e. exactly where
// VoxelAnimTypeClass's first own member (Normalized) begins (ctor 0x74AD80 writes byte 660).
struct SomeVoxelCache
{
    void*    CachedBuffer;      // +0x00 — freed via operator delete in ObjectTypeClass::Destruct
    int      field_4;           // +0x04
    int      field_8;           // +0x08
    bool     field_C;           // +0x0C — only this byte cleared by ctor/dtor (flag)
    uint8_t  pad_D[3];          // +0x0D — alignment padding to the next dword
    int      field_10;          // +0x10
};  // sizeof = 0x14 (20)
class BuildingClass;
class HouseClass;
class HouseTypeClass;
#ifndef GAMEMD_USING_ObjectClass
#define GAMEMD_USING_ObjectClass
using ra2::game::ObjectClass;
#endif
class TechnoTypeClass;

class ObjectTypeClass : public AbstractTypeClass
{
public:
    virtual HRESULT __stdcall Load(IStream* pStm) override; // 0x5F92D0 (as LoadFromINI)
    // unmatched: no callgraph reference and no git history record
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override;
    // unmatched: no callgraph reference and no git history record
    virtual HRESULT __stdcall GetSizeMax(ULARGE_INTEGER* pcbSize) override;

    virtual ~ObjectTypeClass() = default;  // 0x5F7400 (as Destruct)

    virtual CoordStruct* onCellChanged(CoordStruct* pDest, CoordStruct* pSrc) const; // 0x41CBF0 (as vt_entry_7C)
    // unmatched: no callgraph reference and no git history record
    virtual DWORD GetOwners() const;
    // wrapper: delegates to ObjectTypeClass::vt_entry_7C at 0x41CBF0
    virtual int GetPipMax() const;
    // unmatched: no callgraph reference and no git history record
    virtual void onTypeLoadComplete(DWORD dwUnk) const;
    // unmatched: no callgraph reference and no git history record
    virtual void onTypeUnload(DWORD dwUnk);
    // design: pure virtual function, no binary implementation
    virtual bool SpawnAtMapCoords(CellStruct* pMapCoords, HouseClass* pOwner) = 0;
    // unmatched: no callgraph reference and no git history record
    virtual int GetActualCost(HouseClass* pHouse) const;
    // design: virtual function, no binary implementation matched in IDA
    virtual int GetBuildSpeed() const;
    virtual ObjectClass* CreateObject(HouseClass* pOwner) = 0;  // 0x4737F0
    // unmatched: no callgraph reference and no git history record
    virtual CellStruct* GetFoundationData(bool IncludeBib) const;
    // unmatched: no callgraph reference and no git history record
    virtual BuildingClass* FindFactory(bool allowOccupied, bool requirePower, bool requireCanBuild, HouseClass const* pHouse) const;
    virtual SHPStruct* GetCameo() const;
    // unmatched: no callgraph reference and no git history record
    virtual SHPStruct* GetImage() const;

    // unmatched: no callgraph reference and no git history record
    static bool IsBuildCat5(AbstractType abstractID, int idx);
    static TechnoTypeClass* GetTechnoType(AbstractType abstractID, int idx);

    ObjectTypeClass() = default;
    ObjectTypeClass(const char* pID) noexcept;  // 0x5F7320 (as Construct)

    struct noinit_t {};

protected:
    // unmatched: no callgraph reference and no git history record
    ObjectTypeClass(noinit_t) noexcept;

public:
    ColorStruct RadialColor;
    uint8_t unused_9B;
    Armor Armor;
    int Strength;
    SHPStruct* Image;
    bool ImageAllocated;
    uint8_t align_A9[3];
    SHPStruct* AlphaImage;
    VoxelStruct MainVoxel;
    VoxelStruct TurretVoxel;
    VoxelStruct BarrelVoxel;
    VoxelStruct ChargerTurrets[0x12];
    VoxelStruct ChargerBarrels[0x12];
    bool NoSpawnAlt;
    uint8_t align_1E9[3];
    int MaxDimension;
    int CrushSound;
    int AmbientSound;
    char ImageFile[0x19];
    bool AlternateArcticArt;
    bool ArcticArtInUse;
    char AlphaImageFile[0x19];
    bool Theater;
    bool Crushable;
    bool Bombable;
    bool RadarInvisible;
    bool Selectable;
    bool LegalTarget;
    bool Insignificant;
    bool Immune;
    bool IsLogic;
    bool AllowCellContent;
    bool Voxel;
    bool NewTheater;
    bool HasRadialIndicator;
    bool IgnoresFirestorm;
    bool UseLineTrail;
    ColorStruct LineTrailColor;
    uint8_t align_23E[2];
    int LineTrailColorDecrement;
    SomeVoxelCache VoxelCaches[4];
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int FindOrCreate();  // 0x46c790 -- ObjectTypeClass::FindOrCreate
    int loadTypeMember_473980();  // 0x473980 -- ObjectTypeClass::loadTypeMember_473980
    int ReadBool(int a1, int a2, int a3);  // 0x474690 -- ObjectTypeClass::ReadBool
    int ReadPrerequisite(int a1, int a2, int a3);  // 0x4746e0 -- ObjectTypeClass::ReadPrerequisite
    void* ReadSoundList(int a1, int a2, int a3, int a4);  // 0x474740 -- ObjectTypeClass::ReadSoundList
    int ReadBool2(int a1, int a2, int a3);  // 0x4747c0 -- ObjectTypeClass::ReadBool2
    int loadTypeMember_5474940(int a1, int a2, int a3);  // 0x474940 -- ObjectTypeClass::loadTypeMember_5474940
    int loadTypeMember_54749E0(int a1, int a2, int a3);  // 0x4749e0 -- ObjectTypeClass::loadTypeMember_54749E0
    int ReadString(int a1, int a2, int a3);  // 0x474d50 -- ObjectTypeClass::ReadString
    int loadTypeMember_5474E40(int a1, int a2, int a3);  // 0x474e40 -- ObjectTypeClass::loadTypeMember_5474E40
    int ReadInt(int a1, int a2, int a3);  // 0x474f50 -- ObjectTypeClass::ReadInt
    int ReadDouble(int a1, int a2, int a3);  // 0x474fa0 -- ObjectTypeClass::ReadDouble
    int ReadDouble2(int a1, int a2, int a3);  // 0x474ff0 -- ObjectTypeClass::ReadDouble2
    int ReadBool3(int a1, int a2, int a3);  // 0x475060 -- ObjectTypeClass::ReadBool3
    int ReadTypeListINI(int a1, int a2, int a3);  // 0x476240 -- ObjectTypeClass::ReadTypeListINI
    int loadTypeMember_476FC0(int a1, int a2, int a3);  // 0x476fc0 -- ObjectTypeClass::loadTypeMember_476FC0
    int loadTypeMember_5477590(int a1, int a2, int a3);  // 0x477590 -- ObjectTypeClass::loadTypeMember_5477590
    int loadTypeMember_48DFF0();  // 0x48dff0 -- ObjectTypeClass::loadTypeMember_48DFF0
    int CreateInstance(int a1, int a2);  // 0x5f1c30 -- ObjectTypeClass::CreateInstance
    void ReleaseWaveAndString();  // 0x5f61a0 -- ObjectTypeClass::ReleaseWaveAndString
    int ConstructFull(int a1);  // 0x5f7090 -- ObjectTypeClass::ConstructFull
    void CleanupWeapons();  // 0x5f8080 -- ObjectTypeClass::CleanupWeapons
    int Load2DArt();  // 0x5f9070 -- ObjectTypeClass::Load2DArt
    int FreeLoaderBuffer();  // 0x5f9b60 -- ObjectTypeClass::FreeLoaderBuffer
    int FindByName();  // 0x6e5e70 -- ObjectTypeClass::FindByName
    int SelectArtOrAlt();  // 0x712040 -- ObjectTypeClass::SelectArtOrAlt
    int DeserializeArrays();  // 0x7170a0 -- ObjectTypeClass::DeserializeArrays
    int loadTypeMember_5717820();  // 0x717820 -- ObjectTypeClass::loadTypeMember_5717820
    int loadTypeMember_57179D0(int a1, int a2);  // 0x7179d0 -- ObjectTypeClass::loadTypeMember_57179D0
    int loadTypeMember_5717A30(int a1);  // 0x717a30 -- ObjectTypeClass::loadTypeMember_5717A30
    int loadTypeMember_5717A50(int a1);  // 0x717a50 -- ObjectTypeClass::loadTypeMember_5717A50
    int loadTypeMember_5717A80(int a1);  // 0x717a80 -- ObjectTypeClass::loadTypeMember_5717A80
    int loadTypeMember_5717AB0(int a1);  // 0x717ab0 -- ObjectTypeClass::loadTypeMember_5717AB0
    int loadTypeMember_5717AE0();  // 0x717ae0 -- ObjectTypeClass::loadTypeMember_5717AE0
    void* CheckFlag(int a1);  // 0x717bf0 -- ObjectTypeClass::CheckFlag
    void* loadTypeMember_5717C00(int a1);  // 0x717c00 -- ObjectTypeClass::loadTypeMember_5717C00
    int ReadDestroyAnim();  // 0x71cb90 -- ObjectTypeClass::ReadDestroyAnim
    // === SYMBOL-ANCHOR (END) ===
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    void* Copy(int a1, int a2);  // 0x41cf80
    void* InitTripleTen(int a1);  // 0x5f75c0
    void UnloadPipsSHP();  // 0x5f77f0
    int LoadCleanup(int a1, int a2);  // 0x5f9720
    int LoadExtras(int a1, int a2, int a3);  // 0x712170
    // === FUNCS-MOVE (END) ===
};

} // namespace gamemd
