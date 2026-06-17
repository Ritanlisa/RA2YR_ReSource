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






class TubeClass : public ObjectClass
{
public:
    static constexpr AbstractType kObjectTypeId = AbstractType::Tube;

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override { return E_NOTIMPL; }
    virtual HRESULT __stdcall Load(IStream* pStm) override { return S_OK; }
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override { return S_OK; }

    virtual ~TubeClass() override = default;

    virtual AbstractType __stdcall whatAmI() const override { return kObjectTypeId; }
    virtual int objectSize() const override { return sizeof(TubeClass); }

    int32_t TubeClass_field_AC;
    int32_t TubeClass_field_B0;
    int32_t TubeClass_field_B4;
    int32_t TubeClass_field_B8;
    int32_t TubeClass_field_BC;
    int32_t TubeClass_field_C0;
    int32_t TubeClass_field_C4;

protected:
    TubeClass() noexcept;
};

} // namespace gamemd

