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

// CSP: CampaignClass matched via T3
class CampaignClass : public AbstractClass
{
public:
    static constexpr AbstractType kObjectDeriveId = AbstractType::Campaign;

    // design: virtual function, no binary implementation matched in IDA
    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override;
    // design: virtual function, no binary implementation matched in IDA
    virtual HRESULT __stdcall Load(IStream* stream) override;
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;  // 0x49C5A0

    virtual ~CampaignClass();  // 0x46D090

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
    char GetMapData(uint8_t ***a2);
    int Stat(int *a2);
    int LoadFromINI();  // 0x49DB00
    int FindMission(void* a1, void* a2);  // 0x49E400
    int GetValue(unsigned int *a2);
    void* Constructor(int a1, int a2);  // 0x49ECD0
    unsigned int * Constructor_0(int a1, int a2);  // 0x49F090
    int LoadMovieDisplay(int a1);  // 0x5AE220
    int ReleaseSubobjectsAndDestruct();  // 0x5AE460
    int DeleteAndZero(const char **a2);
    int Check(int a1);  // 0x5CF810
    void* Constructor_1(int a1);  // 0x5D2E00
    // --- gap2 auto-generated stub declarations (END) ---
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int LoadFromINIList();  // 0x46ce10 -- CampaignClass::LoadFromINIList
    // === SYMBOL-ANCHOR (END) ===
    unsigned int q00D; // 0xD  gB member supply
    unsigned int q05C; // 0x5C  gB member supply
    unsigned int q060; // 0x60  gB member supply
    void* vtable2;  // 0x4 (ml truth)  gB vtable supply
    unsigned int q01A; // 0x1A (ml truth: q01A@0x1A)  gB member supply
    void* vtable3;  // 0x8 (ml truth)  gB vtable supply
    void* vtable4;  // 0xC (ml truth)  gB vtable supply

    unsigned int abstractFlags;  // X10 supply (csp_canon_members)
    unsigned int nextArrayIndex;  // X10 supply (csp_canon_members)
    unsigned int q00E;  // X10 supply (member_lookup)
    unsigned char q1428[4];  /* SessionClass */  // X10 supply (member_lookup)
    void* q6028;  // X10 supply (member_lookup)  // X27: template-carrier
    unsigned char u32_1F2C[4];  /* wchar_t */  // X10 supply (member_lookup)
    unsigned int u32_6828;  // X10 supply (member_lookup)
    char u8_3A28;  // X10 supply (member_lookup)
    void* uniqueId;  // X10 supply (csp_canon_members)
    void* vtable1;  // X10 supply (csp_canon_members)
};

} // namespace gamemd

