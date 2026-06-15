#pragma once

#include <cstdint>
#include <unknwn.h>

#include "..\core\enums.hpp"
#include "..\core\math.hpp"
#include "..\object\object.hpp"
#include "..\object\techno.hpp"

namespace gamemd {

#ifndef GAMEMD_USING_ObjectClass
#define GAMEMD_USING_ObjectClass
using ra2::game::ObjectClass;
#endif

class TerrainTypeClass;

class TerrainClass : public ObjectClass
{
public:
    static constexpr AbstractType kAbsID = AbstractType::Terrain;

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override { return E_NOTIMPL; }
    virtual HRESULT __stdcall Load(IStream* pStm) override { return S_OK; }
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override { return S_OK; }

    virtual ~TerrainClass() override = default;

    virtual AbstractType __stdcall WhatAmI() const override { return kAbsID; }
    virtual int Size() const override { return sizeof(TerrainClass); }

    ProgressTimer    Animation;
    TerrainTypeClass* Type;
    bool             IsBurning;
    bool             TimeToDie;
    int              m_height;
    RectangleStruct  terrainOccupancyRect;

protected:
    TerrainClass() = default;
public:
    TerrainClass(TerrainTypeClass* pType, const CellStruct& cell, int height) noexcept;
};

} // namespace gamemd
