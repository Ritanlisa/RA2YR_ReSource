#pragma once

#include "abstract_type.hpp"
#include "..\core\enums.hpp"
#include "..\core\math.hpp"

namespace gamemd
{

struct SHPStruct { int unused; };
struct VoxelStruct { int unused; };
struct SomeVoxelCache { int unused; };
class BuildingClass;
class HouseClass;
class HouseTypeClass;
class ObjectClass;
class TechnoTypeClass;

class ObjectTypeClass : public AbstractTypeClass
{
public:
    virtual HRESULT __stdcall Load(IStream* pStm) override { return S_OK; }
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override { return S_OK; }
    virtual HRESULT __stdcall GetSizeMax(ULARGE_INTEGER* pcbSize) override { return E_NOTIMPL; }

    virtual ~ObjectTypeClass() = default;

    virtual CoordStruct* vt_entry_6C(CoordStruct* pDest, CoordStruct* pSrc) const { return nullptr; }
    virtual DWORD GetOwners() const { return 0; }
    virtual int GetPipMax() const { return 0; }
    virtual void vt_entry_78(DWORD dwUnk) const {}
    virtual void vt_entry_7C(DWORD dwUnk) {}
    virtual bool SpawnAtMapCoords(CellStruct* pMapCoords, HouseClass* pOwner) = 0;
    virtual int GetActualCost(HouseClass* pHouse) const { return 0; }
    virtual int GetBuildSpeed() const { return 0; }
    virtual ObjectClass* CreateObject(HouseClass* pOwner) = 0;
    virtual CellStruct* GetFoundationData(bool IncludeBib) const { return nullptr; }
    virtual BuildingClass* FindFactory(bool allowOccupied, bool requirePower, bool requireCanBuild, HouseClass const* pHouse) const { return nullptr; }
    virtual SHPStruct* GetCameo() const { return nullptr; }
    virtual SHPStruct* GetImage() const { return nullptr; }

    static bool IsBuildCat5(AbstractType abstractID, int idx);
    static TechnoTypeClass* GetTechnoType(AbstractType abstractID, int idx);

    ObjectTypeClass(const char* pID) noexcept;

    struct noinit_t {};

protected:
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
