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





class CCINIClass;

class CampaignClass : public AbstractClass
{
public:
    static constexpr AbstractType kAbsDeriveID = AbstractType::Campaign;

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override { return 0; }
    virtual HRESULT __stdcall Load(IStream* stream) override { return 0; }
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override { return 0; }

    virtual ~CampaignClass() = default;

    virtual AbstractType __stdcall WhatAmI() const override { return AbstractType::Campaign; }
    virtual int Size() const override { return 0; }

    // IDA: 0x46ccd0 — load campaign data from INI section
    bool LoadFromINIList(CCINIClass* ini);
    // IDA: 0x49e400 — search missions by scenario name
    int FindMission(const char* name);
    // IDA: 0x46cfc0 — power/checksum stats
    int Stat(void* checksum_ctx);
    // IDA: 0x46d050 — IPersistStream::Seek
    int Seek(IStream* stream, int offset);
    // IDA: 0x46d000 — IPersistStream::Write (Save/Load dispatch)
    int Write(IStream* stream);
    
    static void CreateFromINIList(CCINIClass* ini);
    static int FindIndex(const char* name);

    int32_t     m_idx_cd;
    char        m_scenario[512];
    int32_t     m_final_movie;
    wchar_t     m_description[128];

protected:
    CampaignClass() noexcept;
};

} // namespace gamemd

