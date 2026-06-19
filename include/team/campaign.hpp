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

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override; // IDA: NOT_FOUND
    virtual HRESULT __stdcall Load(IStream* stream) override; // IDA: NOT_FOUND
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;  // 0x49C5A0

    virtual ~CampaignClass() = default;  // 0x46D090

    virtual AbstractType __stdcall whatAmI() const override; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual int objectSize() const override; // IDA: NOT_FOUND

    static void CreateFromINIList(CCINIClass* ini); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    static int FindIndex(const char* name); // IDA: NOT_FOUND

    int32_t     idxCd;
    char        scenario[512];
    int32_t     finalMovie;
    wchar_t     description[128];

protected:
    CampaignClass() noexcept; // 0x46CB60
};

} // namespace gamemd

