#pragma once

#include "object_type.hpp"
#include "core/enums.hpp"

namespace gamemd
{

class TerrainTypeClass : public ObjectTypeClass
{
public:
    static constexpr AbstractType AbsID = AbstractType::TerrainType;

    static DynamicVectorClass<TerrainTypeClass*>* Array;
    static TerrainTypeClass* Find(const char* pID);
    static TerrainTypeClass* FindOrCreate(const char* pID);  // 0x71E2A0 (as FindOrCreate)
    // wrapper: delegates to TerrainTypeClass::FindOrCreate at 0x71E2A0
    static int FindIndex(const char* pID);

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override; // 0x71E260 (as GetClassIdentifier)

    virtual HRESULT __stdcall Load(IStream* pStm) override; // 0x71DEA0 (as LoadFromINI)
    // wrapper: delegates to TerrainTypeClass::LoadFromINI at 0x71DEA0
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override;

    virtual ~TerrainTypeClass() = default;  // 0x71E360 (as ddtor)

    virtual AbstractType __stdcall whatAmI() const override; // 0x71E330 (as GetTypeIdentifier)
    virtual int objectSize() const override; // 0x71E340 (as GetObjectSize)

    // wrapper: delegates to TerrainTypeClass::GetObjectSize at 0x71E340
    virtual bool SpawnAtMapCoords(CellStruct* pMapCoords, HouseClass* pOwner) override;
    virtual ObjectClass* CreateObject(HouseClass* pOwner) override;  // 0x4737F0

    TerrainTypeClass(const char* pID) noexcept;  // 0x5447C0 (as Construct)

protected:
    TerrainTypeClass(noinit_t) noexcept;

public:
    int ArrayIndex;
    int Foundation;
    ColorStruct RadarColor;
    int AnimationRate;
    float AnimationProbability;
    int TemperateOccupationBits;
    int SnowOccupationBits;
    bool WaterBound;
    bool SpawnsTiberium;
    bool IsFlammable;
    bool IsAnimated;
    bool IsVeinhole;
    CellStruct* FoundationData;
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int GetTileData(int a1, int a2, int a3, int a4, int a5, int a6);  // 0x53ffa0 -- TerrainTypeClass::GetTileData
    bool GetHeight(int a1, int a2);  // 0x71ddd0 -- TerrainTypeClass::GetHeight
    void* GetTileIndex(int a1);  // 0x71de10 -- TerrainTypeClass::GetTileIndex
    int PowerDrainUpdate(int a1);  // 0x71e140 -- TerrainTypeClass::PowerDrainUpdate
    int GetAuxField();  // 0x71e350 -- TerrainTypeClass::GetAuxField
    // === SYMBOL-ANCHOR (END) ===
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    void* GetWidth(int a1, int a2);  // 0x71e0d0
    int SaveLoad_Prefix(int a1, int a2);  // 0x71e1d0
    int SaveLoad_Prefix_0(int a1, int a2, int a3);  // 0x71e240
    // === FUNCS-MOVE (END) ===
};

} // namespace gamemd
