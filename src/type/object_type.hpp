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
struct SomeVoxelCache { int unused; };
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
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual HRESULT __stdcall GetSizeMax(ULARGE_INTEGER* pcbSize) override; // IDA: UNMATCHED — no_callgraph_match, no_git_history

    virtual ~ObjectTypeClass() = default;  // 0x5F7400 (as Destruct)

    virtual CoordStruct* onCellChanged(CoordStruct* pDest, CoordStruct* pSrc) const; // 0x41CBF0 (as vt_entry_7C)
    virtual DWORD GetOwners() const; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual int GetPipMax() const;
    virtual void onTypeLoadComplete(DWORD dwUnk) const; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual void onTypeUnload(DWORD dwUnk); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual bool SpawnAtMapCoords(CellStruct* pMapCoords, HouseClass* pOwner) = 0;
    virtual int GetActualCost(HouseClass* pHouse) const; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual int GetBuildSpeed() const;
    virtual ObjectClass* CreateObject(HouseClass* pOwner) = 0;  // 0x4737F0
    virtual CellStruct* GetFoundationData(bool IncludeBib) const; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual BuildingClass* FindFactory(bool allowOccupied, bool requirePower, bool requireCanBuild, HouseClass const* pHouse) const; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual SHPStruct* GetCameo() const;  // 0x5471B0
    virtual SHPStruct* GetImage() const; // IDA: UNMATCHED — no_callgraph_match, no_git_history

    static bool IsBuildCat5(AbstractType abstractID, int idx); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    static TechnoTypeClass* GetTechnoType(AbstractType abstractID, int idx);  // 0x476EB0

    ObjectTypeClass() = default;
    ObjectTypeClass(const char* pID) noexcept;  // 0x5F7320 (as Construct)

    struct noinit_t {};

protected:
    ObjectTypeClass(noinit_t) noexcept; // IDA: UNMATCHED — no_callgraph_match, no_git_history

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
};

} // namespace gamemd
