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

class SmudgeTypeClass;

class SmudgeClass : public ObjectClass
{
public:
    static constexpr AbstractType kObjectTypeId = AbstractType::Smudge;

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override { return E_NOTIMPL; }
    virtual HRESULT __stdcall Load(IStream* pStm) override { return S_OK; }
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override { return S_OK; }

    virtual ~SmudgeClass() override = default;

    virtual AbstractType __stdcall whatAmI() const override { return kObjectTypeId; }
    virtual int objectSize() const override { return sizeof(SmudgeClass); }

    SmudgeTypeClass* Type;

protected:
    SmudgeClass() = default;
public:
    SmudgeClass(SmudgeTypeClass* pType, const CellStruct& cell, HouseClass* owner) noexcept;
};

} // namespace gamemd
