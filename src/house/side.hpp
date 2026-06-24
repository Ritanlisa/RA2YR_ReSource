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

    // design: virtual function, no binary implementation matched in IDA
    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override;
    // design: virtual function, no binary implementation matched in IDA
    virtual HRESULT __stdcall Load(IStream* stream) override;
    // design: virtual function, no binary implementation matched in IDA
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;

    virtual ~SideClass() = default;  // 0x6A4740

    // unmatched: no callgraph reference and no git history record
    virtual AbstractType __stdcall whatAmI() const override;
    // wrapper: delegates to SideClass::ddtor at 0x6A4740
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
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int FindByName();  // 0x49d9f0 -- SideClass::FindByName
    void* GetName();  // 0x4e38a0 -- SideClass::GetName
    int GetCountry(int a1);  // 0x6a4710 -- SideClass::GetCountry
    // === SYMBOL-ANCHOR (END) ===
};

} // namespace gamemd

