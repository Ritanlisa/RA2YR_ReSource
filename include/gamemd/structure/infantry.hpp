#pragma once

#include <cstdint>
#include <unknwn.h>

#include "..\core\enums.hpp"
#include "..\object\foot.hpp"

namespace gamemd {

using ra2::game::AbstractClass;
using ra2::game::AbstractType;
using ra2::game::TimerStruct;




class InfantryTypeClass;

class InfantryClass : public ra2::game::FootClass
{
public:
    static constexpr AbstractType kAbsID = AbstractType::Infantry;

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override { return E_NOTIMPL; }

    virtual ~InfantryClass() override = default;

    virtual AbstractType __stdcall WhatAmI() const override { return kAbsID; }
    virtual int Size() const override { return sizeof(InfantryClass); }

    virtual bool IsDeployed() const { return false; }
    virtual bool PlayAnim(Sequence index, bool force = false, bool randomStartFrame = false) { return false; }

    int Mission_Enter() override;
    int Mission_ParaDropApproach() override;
    int Mission_ParaDropOverfly() override;

    InfantryTypeClass* Type;
    Sequence           SequenceAnim;
    TimerStruct        infantryField_Timer_6C8;
    uint32_t           PanicDurationLeft;
    bool               PermanentBerzerk;
    bool               Technician;
    bool               infantryFlag_6DA;
    bool               Crawling;
    bool               infantryFlag_6DC;
    bool               infantryFlag_6DD;
    uint32_t           infantryField_6E0;
    bool               ShouldDeploy;
    int32_t            infantryField_int_6E8;
    uint32_t           unused_6EC;

protected:
    InfantryClass() noexcept;
};

} // namespace gamemd

