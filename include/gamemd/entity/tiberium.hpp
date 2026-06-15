#pragma once

#include <cstdint>
#include <unknwn.h>

#include "..\core\enums.hpp"
#include "..\object\object.hpp"

namespace gamemd {

#ifndef GAMEMD_USING_ObjectClass
#define GAMEMD_USING_ObjectClass
using ra2::game::ObjectClass;
#endif
#ifndef GAMEMD_USING_AbstractClass
#define GAMEMD_USING_AbstractClass
using ra2::game::AbstractClass;
#endif
#ifndef GAMEMD_USING_AbstractType
#define GAMEMD_USING_AbstractType
using ra2::game::AbstractType;
#endif
#ifndef GAMEMD_USING_CellStruct
#define GAMEMD_USING_CellStruct
using ra2::game::CellStruct;
#endif
#ifndef GAMEMD_USING_TimerStruct
#define GAMEMD_USING_TimerStruct
using ra2::game::TimerStruct;
#endif








class AnimTypeClass;
class OverlayTypeClass;

template <typename T>
struct TypeList
{
    T*      Items;
    int32_t Count;
};

class TiberiumClass : public ObjectClass
{
public:
    static constexpr AbstractType kAbsID = AbstractType::Tiberium;

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override { return E_NOTIMPL; }
    virtual HRESULT __stdcall Load(IStream* pStm) override { return S_OK; }
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override { return S_OK; }
    virtual HRESULT __stdcall GetSizeMax(ULARGE_INTEGER* pcbSize) override { return E_NOTIMPL; }

    virtual ~TiberiumClass() override = default;

    virtual AbstractType __stdcall WhatAmI() const override { return kAbsID; }
    virtual int Size() const override { return sizeof(TiberiumClass); }
    int32_t GetPowerValue() const { return Power; }  // vtable[16], init to -1 then g_CrateProcessState

    int32_t                  ArrayIndex;
    int32_t                  Spread;
    double                   SpreadPercentage;
    int32_t                  Growth;
    double                   GrowthPercentage;
    int32_t                  Value;
    int32_t                  Power;
    int32_t                  Color;
    TypeList<AnimTypeClass*> Debris;
    OverlayTypeClass*        Image;
    int32_t                  NumFrames;
    int32_t                  NumImages;
    int32_t                  tiberiumField_EC;
    int32_t                  tiberiumField_F0;
    int32_t                  tiberiumField_F4;
    int32_t                  tiberiumField_F8;
    int32_t                  tiberiumField_FC;
    TimerStruct              SpreadTimer;
    int32_t                  tiberiumField_10C;
    int32_t                  tiberiumField_110;
    int32_t                  tiberiumField_114;
    int32_t                  tiberiumField_118;
    TimerStruct              GrowthTimer;

public:
    TiberiumClass(const CellStruct& cell, int spread, int growth,
                  int value, int power) noexcept;

protected:
    TiberiumClass() = default;
};

} // namespace gamemd

