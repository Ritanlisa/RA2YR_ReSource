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

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override;
    virtual HRESULT __stdcall Load(IStream* stream) override;
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;  // 0x49C5A0

    virtual ~CampaignClass() = default;  // 0x46D090

    virtual AbstractType __stdcall whatAmI() const override;
    virtual int objectSize() const override;

    static void CreateFromINIList(CCINIClass* ini);
    static int FindIndex(const char* name);

    int32_t     idxCd;
    char        scenario[512];
    int32_t     finalMovie;
    wchar_t     description[128];

protected:
    CampaignClass() noexcept;
};

} // namespace gamemd

