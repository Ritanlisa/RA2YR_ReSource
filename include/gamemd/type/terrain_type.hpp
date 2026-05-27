#pragma once

#include "object_type.hpp"
#include "..\core\enums.hpp"

namespace gamemd
{

class TerrainTypeClass : public ObjectTypeClass
{
public:
    static constexpr AbstractType AbsID = AbstractType::TerrainType;

    static DynamicVectorClass<TerrainTypeClass*>* Array;
    static TerrainTypeClass* Find(const char* pID);
    static TerrainTypeClass* FindOrAllocate(const char* pID);
    static int FindIndex(const char* pID);

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override { return E_NOTIMPL; }

    virtual HRESULT __stdcall Load(IStream* pStm) override { return S_OK; }
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override { return S_OK; }

    virtual ~TerrainTypeClass() = default;

    virtual AbstractType __stdcall WhatAmI() const override { return AbstractType::TerrainType; }
    virtual int Size() const override { return 0; }

    virtual bool SpawnAtMapCoords(CellStruct* pMapCoords, HouseClass* pOwner) override { return false; }
    virtual ObjectClass* CreateObject(HouseClass* pOwner) override { return nullptr; }

    TerrainTypeClass(const char* pID) noexcept;

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
