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
    virtual SHPStruct* GetCameo() const;  // 0x5471B0
    // unmatched: no callgraph reference and no git history record
    virtual SHPStruct* GetImage() const;

    // unmatched: no callgraph reference and no git history record
    static bool IsBuildCat5(AbstractType abstractID, int idx);
    static TechnoTypeClass* GetTechnoType(AbstractType abstractID, int idx);  // 0x476EB0

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
};

} // namespace gamemd
