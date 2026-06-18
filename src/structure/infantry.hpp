#pragma once

#include <cstdint>
#include <unknwn.h>

#include "core/enums.hpp"
#include "object/foot.hpp"

namespace gamemd {

using ra2::game::AbstractClass;
using ra2::game::AbstractType;
using ra2::game::TimerStruct;




class InfantryTypeClass;

class InfantryClass : public ra2::game::FootClass
{
public:
    static constexpr AbstractType kObjectTypeId = AbstractType::Infantry;

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override { return E_NOTIMPL; }

    virtual ~InfantryClass() override = default;

    virtual AbstractType __stdcall whatAmI() const override { return kObjectTypeId; }
    virtual int objectSize() const override { return sizeof(InfantryClass); }

    virtual int IsDeployed() const { return 0; }
    virtual bool PlayAnim(Sequence index, bool force = false, bool randomStartFrame = false) { return false; }

    int Mission_Enter() override;
    int Mission_ParaDropApproach() override;
    int Mission_ParaDropOverfly() override;

    void Draw(Point2D* screen_pos, RectangleStruct* bounds) const;
    void DrawShadow(Point2D* screen_pos, RectangleStruct* bounds) const;

    InfantryTypeClass* Type;
    Sequence           SequenceAnim;
    TimerStruct        InfantryClass_field_timer_6C8;
    uint32_t           PanicDurationLeft;
    bool               PermanentBerzerk;
    bool               Technician;
    bool               InfantryClass_field_bool_6DA;
    bool               Crawling;
    bool               InfantryClass_field_bool_6DC;
    bool               InfantryClass_field_bool_6DD;
    uint32_t           InfantryClass_field_6E0;
    bool               ShouldDeploy;
    int32_t            InfantryClass_field_int_6E8;
    uint32_t           unused_6EC;

protected:
    InfantryClass() noexcept;
};

} // namespace gamemd

