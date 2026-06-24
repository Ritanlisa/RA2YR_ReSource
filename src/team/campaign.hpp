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





class CCINIClass;

class CampaignClass : public AbstractClass
{
public:
    static constexpr AbstractType kObjectDeriveId = AbstractType::Campaign;

    // design: virtual function, no binary implementation matched in IDA
    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override;
    // design: virtual function, no binary implementation matched in IDA
    virtual HRESULT __stdcall Load(IStream* stream) override;
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;  // 0x49C5A0

    virtual ~CampaignClass() = default;  // 0x46D090

    // unmatched: no callgraph reference and no git history record
    virtual AbstractType __stdcall whatAmI() const override;
    // wrapper: delegates to CampaignClass::DTOR at 0x46D090
    virtual int objectSize() const override;

    // unmatched: no callgraph reference and no git history record
    static void CreateFromINIList(CCINIClass* ini);
    // design: static function, no direct binary match in IDA
    static int FindIndex(const char* name);

    int32_t     idxCd;
    char        scenario[512];
    int32_t     finalMovie;
    wchar_t     description[128];

protected:
    CampaignClass() noexcept; // 0x46CB60
};

} // namespace gamemd

