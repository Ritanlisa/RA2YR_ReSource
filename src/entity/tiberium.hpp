#pragma once

#include <cstdint>
#include <unknwn.h>

#include "core/enums.hpp"
#include "object/object.hpp"

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
    static constexpr AbstractType kObjectTypeId = AbstractType::Tiberium;

    // design: virtual function, no binary implementation matched in IDA
    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override;
    // design: virtual function, no binary implementation matched in IDA
    virtual HRESULT __stdcall Load(IStream* pStm) override;
    // design: virtual function, no binary implementation matched in IDA
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override;
    // unmatched: no callgraph reference and no git history record
    virtual HRESULT __stdcall GetSizeMax(ULARGE_INTEGER* pcbSize) override;

    virtual ~TiberiumClass() override = default;  // 0x721E40

    // unmatched: no callgraph reference and no git history record
    virtual AbstractType __stdcall whatAmI() const override;
    // wrapper: delegates to TiberiumClass::ddtor at 0x721E40
    virtual int objectSize() const override;

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
    int32_t                  TiberiumClass_field_EC;
    int32_t                  TiberiumClass_field_F0;
    int32_t                  TiberiumClass_field_F4;
    int32_t                  TiberiumClass_field_F8;
    int32_t                  TiberiumClass_field_FC;
    TimerStruct              SpreadTimer;
    int32_t                  TiberiumClass_field_10C;
    int32_t                  TiberiumClass_field_110;
    int32_t                  TiberiumClass_field_114;
    int32_t                  TiberiumClass_field_118;
    TimerStruct              GrowthTimer;

public:
    TiberiumClass(const CellStruct& cell, int spread, int growth, // 0x7216C0
                  int value, int power) noexcept;

protected:
    TiberiumClass() = default; // 0x7216C0
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int Grow(void* a1);  // 0x59C920
    int CleanupMembers();  // 0x721880
    int Harvest(void* a1);  // 0x721DC0
    int SpreadGrowth(int a1, void* a2);  // 0x7220A0
    int UpdateField(int a1, int a2);  // 0x722140
    int Stub();  // 0x723700
    void* DrawOre(int a1);  // 0x723710
    // --- gap2 auto-generated stub declarations (END) ---
};

} // namespace gamemd

