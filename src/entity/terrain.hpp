#pragma once

#include <cstdint>
#include <unknwn.h>

#include "core/enums.hpp"
#include "core/math.hpp"
#include "object/object.hpp"
#include "object/techno.hpp"

namespace gamemd {

#ifndef GAMEMD_USING_ObjectClass
#define GAMEMD_USING_ObjectClass
using ra2::game::ObjectClass;
#endif

class TerrainTypeClass;

class TerrainClass : public ObjectClass
{
public:
    static constexpr AbstractType kObjectTypeId = AbstractType::Terrain;

    // design: virtual function, no binary implementation matched in IDA
    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override;
    virtual HRESULT __stdcall Load(IStream* pStm) override;  // 0x71CDA0
    // unmatched: no callgraph reference and no git history record
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override;

    // wrapper: delegates to TerrainClass::LoadFromStream at 0x71CDA0
    virtual ~TerrainClass() override = default;

    // unmatched: no callgraph reference and no git history record
    virtual AbstractType __stdcall whatAmI() const override;
    // design: virtual function, no binary implementation matched in IDA
    virtual int objectSize() const override;

    ProgressTimer    Animation;
    TerrainTypeClass* Type;
    bool             IsBurning;
    bool             TimeToDie;
    int              height;
    RectangleStruct  TerrainClass_field_rect_D0;

protected:
    TerrainClass() = default;
public:
    TerrainClass(TerrainTypeClass* pType, const CellStruct& cell, int height) noexcept;
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    void ClearAnimationLinkFlags();  // 0x422B80
    int SetFieldF8(int a1);  // 0x487C70
    void GenerateTexture(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17);  // 0x547CF0
    int InitTheatre();  // 0x549E90
    void ProcessSlope(void* a1);  // 0x574000
    int CleanupMembers();  // 0x71B7B0
    int UpdateAnims(int a1, int a2, int a3, int a4, int a5, int a6, void* a7);  // 0x71B920
    void* Construct(void* a1, void* a2);  // 0x71BB90
    int CheckNearbyObjects(int a1);  // 0x71BFB0
    void* ClearCellFlags(void* a1);  // 0x71C070
    void* SetOccupyBit_PassableTerrain(void* a1);  // 0x71C110
    void Draw(void* a1, void* a2);  // 0x71C1B0
    void ProcessDestructionAnim(void* a1, void* a2);  // 0x71C360
    int IsPlacementValid(int a1, int a2, int a3, int a4, int a5);  // 0x71C4D0
    int PlayAmbientAnimation();  // 0x71C5B0
    int ProcessTick();  // 0x71C6B0
    int Update();  // 0x71C730
    int ApplyCellModifications();  // 0x71C930
    int CheckSpawnConditions(void* a1, int a2, int a3);  // 0x71CC50
    int PowerDrainUpdate(void* a1);  // 0x71CF50
    int ProcessFrameStep(int a1, int a2);  // 0x71CFD0
    void* Export(void* a1);  // 0x71D160
    void* MissionStubReturnZero4(int a1);  // 0x71D350
    // --- gap2 auto-generated stub declarations (END) ---
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int ProcessSpawnAnim(int a1, int a2);  // 0x71d000 -- TerrainClass::ProcessSpawnAnim
    int GetTileIndex(int a1);  // 0x48b720 -- Terrain::GetTileIndex
    int GetTileType(int a1);  // 0x48b9e0 -- Terrain::GetTileType
    void PlaceCliffs(int a1, int a2, int a3);  // 0x568e40 -- Terrain::PlaceCliffs
    int ConnectivityGraph();  // 0x56c510 -- Terrain::ConnectivityGraph
    int FloodFillConnectivity(int a1, int a2, int a3);  // 0x56cb90 -- Terrain::FloodFillConnectivity
    void ProcessCellModification(int a1);  // 0x570050 -- Terrain::ProcessCellModification
    void RecursiveModify(int a1);  // 0x573540 -- Terrain::RecursiveModify
    int CreateCrater(int a1);  // 0x576770 -- Terrain::CreateCrater
    int LookupByName();  // 0x71dd80 -- Terrain::LookupByName
    // === SYMBOL-ANCHOR (END) ===
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    int ProcessUpdate(int a1, int a2, int a3, int a4, int a5, int a6);  // 0x6dd8b0
    int CheckFrameUpdate(int a1, int a2, int a3);  // 0x71cf30
    int MissionStubReturnZero3(int a1, int a2);  // 0x71d310
    // === FUNCS-MOVE (END) ===
};

} // namespace gamemd
