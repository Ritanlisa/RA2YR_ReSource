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
    static TerrainTypeClass* Find(const char* pID);  // 0x71da80
    static TerrainTypeClass* FindOrAllocate(const char* pID);  // 0x71e2a0 (as FindOrCreate)
    static int FindIndex(const char* pID);

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override; // 0x71e260 (as GetClassIdentifier)

    virtual HRESULT __stdcall Load(IStream* pStm) override; // 0x71dea0 (as LoadFromINI)
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override;

    virtual ~TerrainTypeClass() = default;  // 0x71e360 (as ddtor)

    virtual AbstractType __stdcall whatAmI() const override; // 0x71e330 (as GetTypeIdentifier)
    virtual int objectSize() const override; // 0x71e340 (as GetObjectSize)

    virtual bool SpawnAtMapCoords(CellStruct* pMapCoords, HouseClass* pOwner) override;
    virtual ObjectClass* CreateObject(HouseClass* pOwner) override;

    TerrainTypeClass(const char* pID) noexcept;  // 0x5447c0 (as Construct)

protected:
    TerrainTypeClass(noinit_t) noexcept;  // 0x5447c0 (as Construct)

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
};

} // namespace gamemd
