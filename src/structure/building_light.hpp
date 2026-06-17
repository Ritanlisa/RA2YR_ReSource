#pragma once

#include <cstdint>

#include "core/enums.hpp"
#include "object/object.hpp"

namespace gamemd {

#ifndef GAMEMD_USING_AbstractClass
#define GAMEMD_USING_AbstractClass
using ra2::game::AbstractClass;
#endif
#ifndef GAMEMD_USING_AbstractType
#define GAMEMD_USING_AbstractType
using ra2::game::AbstractType;
#endif
#ifndef GAMEMD_USING_ObjectClass
#define GAMEMD_USING_ObjectClass
using ra2::game::ObjectClass;
#endif
#ifndef GAMEMD_USING_CoordStruct
#define GAMEMD_USING_CoordStruct
using ra2::game::CoordStruct;
#endif

class BuildingClass;

// IDA: BuildingLightClass (4 vtables, ctor 0x435820)
// Inherits ObjectClass -> spotlight/illumination effect for buildings
class BuildingLightClass : public ObjectClass
{
public:
    static constexpr AbstractType kObjectTypeId = AbstractType::BuildingLight;

    virtual HRESULT __stdcall GetClassID(CLSID*) override { return E_NOTIMPL; }
    virtual HRESULT __stdcall Save(IStream*, int) override { return S_OK; }

    virtual ~BuildingLightClass() override = default;

    virtual AbstractType __stdcall whatAmI() const override { return kObjectTypeId; }
    virtual int objectSize() const override { return sizeof(BuildingLightClass); }

    // 0x436BE0 FindTarget / SetBehaviour
    void SetBehaviour(int mode) {}

    // IDA ctor 0x435820: +0xB0..+0xE4
    double            Speed;              // +0xB0  (this+44)
    CoordStruct       field_B8;           // +0xB8  (this+46-48)
    CoordStruct       field_C4;           // +0xC4  (this+49-51)
    uint32_t          field_D0;         // +0xD0  (this+52)
    bool              field_D8;         // +0xD8  (byte+216)
    int32_t           BehaviourMode;      // +0xDC  (this+55)
    uint32_t          field_E0;         // +0xE0  (this+56)
    ObjectClass*      FollowingObject;    // +0xE4  (this+57, ctor arg a2)

protected:
    BuildingLightClass() noexcept = default;
};

} // namespace gamemd
