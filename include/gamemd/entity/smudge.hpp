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

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override;
    virtual HRESULT __stdcall Load(IStream* pStm) override;
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override; // IDA: UNMATCHED — no_callgraph_match, no_git_history

    virtual ~SmudgeClass() override = default;

    virtual AbstractType __stdcall whatAmI() const override; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual int objectSize() const override;

    SmudgeTypeClass* Type;

protected:
    SmudgeClass() = default; // IDA: UNMATCHED — defaulted_special_member, default_ctor, no_callgraph_match
public:
    SmudgeClass(SmudgeTypeClass* pType, const CellStruct& cell, HouseClass* owner) noexcept; // IDA: UNMATCHED — no_callgraph_match, no_git_history
};

} // namespace gamemd
