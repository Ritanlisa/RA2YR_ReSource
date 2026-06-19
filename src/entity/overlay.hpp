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

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override;
    virtual HRESULT __stdcall Load(IStream* pStm) override;
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override;

    virtual ~OverlayClass() override = default;

    virtual AbstractType __stdcall whatAmI() const override;
    virtual int objectSize() const override;

    OverlayTypeClass* Type;

protected:
    OverlayClass() = default;
public:
    OverlayClass(OverlayTypeClass* pType, const CellStruct& cell, HouseClass* owner) noexcept;
};

} // namespace gamemd
