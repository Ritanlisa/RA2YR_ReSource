#pragma once

#include <cstdint>
#include <unknwn.h>

#include "..\core\enums.hpp"
#include "..\object\foot.hpp"

namespace gamemd {

#ifndef GAMEMD_USING_AbstractClass
#define GAMEMD_USING_AbstractClass
using ra2::game::AbstractClass;
#endif
#ifndef GAMEMD_USING_AbstractType
#define GAMEMD_USING_AbstractType
using ra2::game::AbstractType;
#endif
#ifndef GAMEMD_USING_Point2D
#define GAMEMD_USING_Point2D
using ra2::game::Point2D;
#endif
#ifndef GAMEMD_USING_RectangleStruct
#define GAMEMD_USING_RectangleStruct
using ra2::game::RectangleStruct;
#endif







class EBolt;
class UnitTypeClass;

class UnitClass : public ra2::game::FootClass
{
public:
    static constexpr AbstractType kAbsID = AbstractType::Unit;

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override { return E_NOTIMPL; }
    virtual HRESULT __stdcall Load(IStream* pStm) override { return S_OK; }
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override { return S_OK; }

    virtual ~UnitClass() override = default;

    virtual AbstractType __stdcall WhatAmI() const override { return kAbsID; }
    virtual int Size() const override { return sizeof(UnitClass); }

    virtual void DrawAsVXL(Point2D* coords, RectangleStruct* bounding_rect, uint32_t dwUnk7, uint32_t dwUnk8) {}
    virtual void DrawAsSHP(Point2D* coords, RectangleStruct* bounding_rect, uint32_t dwUnk7, uint32_t dwUnk8) {}

    int32_t            unknown_int_6C0;
    UnitTypeClass*     Type;
    UnitClass*         FollowerCar;
    int32_t            FlagHouseIndex;
    bool               HasFollowerCar;
    bool               Unloading;
    bool               unknown_bool_6D2;
    bool               TerrainPalette;
    int32_t            unknown_int_6D4;
    int32_t            DeathFrameCounter;
    EBolt*             ElectricBolt;
    bool               Deployed;
    bool               Deploying;
    bool               Undeploying;
    int32_t            NonPassengerCount;
    wchar_t            ToolTipText[0x100];

protected:
    UnitClass() noexcept;
};

} // namespace gamemd

