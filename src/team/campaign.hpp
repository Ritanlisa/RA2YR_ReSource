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
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int GetMapData(void* a1);  // 0x46CCD0
    int Stat(void* a1);  // 0x46CFC0
    int LoadFromINI();  // 0x49DB00
    int FindMission(void* a1, void* a2);  // 0x49E400
    int GetValue(void* a1);  // 0x49E4F0
    void* Constructor(int a1, int a2);  // 0x49ECD0
    void* Constructor_0(int a1, int a2);  // 0x49F090
    int LoadMovieDisplay(int a1);  // 0x5AE220
    int ReleaseSubobjectsAndDestruct();  // 0x5AE460
    int DeleteAndZero(void* a1);  // 0x5CF760
    int Check(int a1);  // 0x5CF810
    void* Constructor_1(int a1);  // 0x5D2E00
    // --- gap2 auto-generated stub declarations (END) ---
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int LoadFromINIList();  // 0x46ce10 -- CampaignClass::LoadFromINIList
    // === SYMBOL-ANCHOR (END) ===
};

} // namespace gamemd

