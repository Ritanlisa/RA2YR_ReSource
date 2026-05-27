#pragma once

#include <cstdint>
#include <unknwn.h>

#include "..\core\enums.hpp"
#include "..\object\foot.hpp"

namespace gamemd {

#ifndef GAMEMD_USING_AbstractClass
#define GAMEMD_USING_AbstractClass
using ra2::game::AbstractClass;
#endif
#ifndef GAMEMD_USING_AbstractType
#define GAMEMD_USING_AbstractType
using ra2::game::AbstractType;
#endif
#ifndef GAMEMD_USING_TimerStruct
#define GAMEMD_USING_TimerStruct
using ra2::game::TimerStruct;
#endif






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

    InfantryTypeClass* Type;
    Sequence           SequenceAnim;
    TimerStruct        unknown_Timer_6C8;
    uint32_t           PanicDurationLeft;
    bool               PermanentBerzerk;
    bool               Technician;
    bool               unknown_bool_6DA;
    bool               Crawling;
    bool               unknown_bool_6DC;
    bool               unknown_bool_6DD;
    uint32_t           unknown_6E0;
    bool               ShouldDeploy;
    int32_t            unknown_int_6E8;
    uint32_t           unused_6EC;

protected:
    InfantryClass() noexcept;
};

} // namespace gamemd

