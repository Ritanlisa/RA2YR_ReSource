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
    static TerrainTypeClass* Find(const char* pID);  // 0x71DA80
    static TerrainTypeClass* FindOrAllocate(const char* pID);  // 0x71E2A0 (as FindOrCreate)
    static int FindIndex(const char* pID); // IDA: NOT_FOUND

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override; // 0x71E260 (as GetClassIdentifier)

    virtual HRESULT __stdcall Load(IStream* pStm) override; // 0x71DEA0 (as LoadFromINI)
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override; // IDA: NOT_FOUND

    virtual ~TerrainTypeClass() = default;  // 0x71E360 (as ddtor)

    virtual AbstractType __stdcall whatAmI() const override; // 0x71E330 (as GetTypeIdentifier)
    virtual int objectSize() const override; // 0x71E340 (as GetObjectSize)

    virtual bool SpawnAtMapCoords(CellStruct* pMapCoords, HouseClass* pOwner) override; // IDA: NOT_FOUND
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
};

} // namespace gamemd
