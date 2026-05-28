#pragma once

#include "..\object\abstract.hpp"

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

class SideClass : public AbstractClass
{
public:
    static constexpr AbstractType kAbsDeriveID = AbstractType::Side;

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override { return 0; }
    virtual HRESULT __stdcall Load(IStream* stream) override { return 0; }
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override { return 0; }

    virtual ~SideClass() = default;

    virtual AbstractType __stdcall WhatAmI() const override { return AbstractType::Side; }
    virtual int Size() const override { return 0; }

    char                    m_id[24];
    uint8_t                 m_zero_3C;
    char                    m_ui_name_label[32];
    const wchar_t*          m_ui_name;
    char                    m_name[49];

    int32_t*                m_house_types;
    int32_t                 m_house_types_count;

protected:
    SideClass() noexcept;
};

} // namespace gamemd

