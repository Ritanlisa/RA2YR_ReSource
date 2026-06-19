#pragma once

#include "object/abstract.hpp"

#include <cstdint>

namespace gamemd {

#ifndef GAMEMD_USING_AbstractClass
#define GAMEMD_USING_AbstractClass
using ra2::game::AbstractClass;
#endif
#ifndef GAMEMD_USING_AbstractType
#define GAMEMD_USING_AbstractType
using ra2::game::AbstractType;
#endif





class HouseTypeClass;
class CCINIClass;

class SideClass : public AbstractClass
{
public:
    static constexpr AbstractType kObjectDeriveId = AbstractType::Side;

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override;
    virtual HRESULT __stdcall Load(IStream* stream) override;
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;

    virtual ~SideClass() = default;  // 0x6A4740

    virtual AbstractType __stdcall whatAmI() const override; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual int objectSize() const override;

    char                    id[24];
    uint8_t                 m_zero_3C;
    char                    uiNameLabel[32];
    const wchar_t*          uiName;
    char                    name[49];

    int32_t*                houseTypes;
    int32_t                 houseTypesCount;

protected:
    SideClass() noexcept;
};

} // namespace gamemd

