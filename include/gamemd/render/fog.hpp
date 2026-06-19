#pragma once

#include <cstdint>

#include "core/math.hpp"
#include "core/enums.hpp"
#include "fundamentals.hpp"
#include "object/object.hpp"

namespace gamemd
{

#ifndef GAMEMD_USING_AbstractClass
#define GAMEMD_USING_AbstractClass
using ra2::game::AbstractClass;
#endif
#ifndef GAMEMD_USING_HouseClass
#define GAMEMD_USING_HouseClass
using ra2::game::HouseClass;
#endif

class FoggedObjectClass : public AbstractClass
{
public:
    static constexpr AbstractType kObjectTypeId = AbstractType::FoggedObject;

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override;  // 0x4D27D0

    virtual HRESULT __stdcall Load(IStream* stream) override;  // 0x4D2510
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;  // 0x4D24A0

    virtual ~FoggedObjectClass() override = default;  // 0x4D2910

    virtual AbstractType __stdcall whatAmI() const override; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual int objectSize() const override;  // 0x4D27C0

    int32_t      LastSight;
    HouseClass*  House;
    CellStruct   Cell;

protected:
    FoggedObjectClass() noexcept;
    explicit FoggedObjectClass(noinit_t) noexcept; // IDA: NOT_FOUND
};

} // namespace gamemd
