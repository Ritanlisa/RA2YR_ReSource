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
#ifndef GAMEMD_USING_HouseClass
#define GAMEMD_USING_HouseClass
using ra2::game::HouseClass;
#endif

class OverlayTypeClass;

class OverlayClass : public ObjectClass
{
public:
    static constexpr AbstractType kObjectTypeId = AbstractType::Overlay;

    // design: virtual function, no binary implementation matched in IDA
    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override;
    // design: virtual function, no binary implementation matched in IDA
    virtual HRESULT __stdcall Load(IStream* pStm) override;
    // unmatched: no callgraph reference and no git history record
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override;

    // design: virtual function, no binary implementation matched in IDA
    virtual ~OverlayClass() override = default;

    // unmatched: no callgraph reference and no git history record
    virtual AbstractType __stdcall whatAmI() const override;
    // design: virtual function, no binary implementation matched in IDA
    virtual int objectSize() const override;

    OverlayTypeClass* Type;

protected:
    // design: default constructor (compiler-generated), no callgraph reference
    OverlayClass() = default;
public:
    // unmatched: no callgraph reference and no git history record
    OverlayClass(OverlayTypeClass* pType, const CellStruct& cell, HouseClass* owner) noexcept;
};

} // namespace gamemd
