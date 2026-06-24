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

    // design: virtual function, no binary implementation matched in IDA
    virtual HRESULT __stdcall GetClassID(CLSID*) override;
    // unmatched: no callgraph reference and no git history record
    virtual HRESULT __stdcall Save(IStream*, int) override;

    virtual ~BuildingLightClass() override = default;  // 0x4370C0

    // unmatched: no callgraph reference and no git history record
    virtual AbstractType __stdcall whatAmI() const override;
    // wrapper: delegates to BuildingLightClass::SDDTOR at 0x4370C0
    virtual int objectSize() const override;

    // 0x436BE0 FindTarget / SetBehaviour
    // wrapper: delegates to BuildingLightClass::FindTarget at 0x436BE0
    void SetBehaviour(int mode);

    // IDA ctor 0x435820: +0xB0..+0xE4
    double            Speed;              // +0xB0  (this+44)
    CoordStruct       BuildingLightClass_field_B8;           // +0xB8  (this+46-48)
    CoordStruct       BuildingLightClass_field_C4;           // +0xC4  (this+49-51)
    uint32_t          BuildingLightClass_field_D0;         // +0xD0  (this+52)
    bool              BuildingLightClass_field_D8;         // +0xD8  (byte+216)
    int32_t           BehaviourMode;      // +0xDC  (this+55)
    uint32_t          BuildingLightClass_field_E0;         // +0xE0  (this+56)
    ObjectClass*      FollowingObject;    // +0xE4  (this+57, ctor arg a2)

protected:
    BuildingLightClass() noexcept = default;
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    void* CTOR(int a1);  // 0x435820
    int Draw_Start(int a1, int a2);  // 0x435BE0
    int SD_vt23();  // 0x4361D0
    int SD_vt05(void* a1, int a2);  // 0x436950
    int SD_vt10(int a1, int a2);  // 0x436A00
    int CalculateDistanceIntensity();  // 0x436E80
    int SD_vt13(void* a1);  // 0x436F40
    int SD_vt53();  // 0x437030
    int SD_vt54(int a1, int a2);  // 0x437050
    int FindAllTargets(int a1, int a2, int a3, int a4);  // 0x6E2970
    // --- gap2 auto-generated stub declarations (END) ---
};

} // namespace gamemd
