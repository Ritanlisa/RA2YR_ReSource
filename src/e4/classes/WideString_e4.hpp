// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct WideString {
// --- flat members (BEGIN) ---
    unsigned int u32_8;  // 0x8
    unsigned int u32_C;  // 0xC
    unsigned int u32_10;  // 0x10
    unsigned int u32_14;  // 0x14
    unsigned int u32_4C;  // 0x4C
    unsigned int u32_434;  // 0x434
    unsigned int u32_438;  // 0x438
    unsigned int u32_43C;  // 0x43C
    unsigned int u32_440;  // 0x440
    unsigned int u32_444;  // 0x444
    unsigned int u32_45C;  // 0x45C
    unsigned int u32_468;  // 0x468
    unsigned int u32_478;  // 0x478
// --- flat members (END) ---
    int WordWrap(wchar_t * a0,  CampaignScore * aP1,  int a3,  CampaignScore * aP3,  int a5);    // 0x5D4B20
    char Replace(CampaignScore * aP1,  wchar_t * String);    // 0x7B73F0
    wchar_t * Trim(void *a1 = 0);  // 0x727D60
    wchar_t ** Assign(CampaignScore * aP1, void *a1 = 0);  // 0x7B66D0
    wchar_t ** AssignFromPtr(const wchar_t ** a2, void *a1 = 0);  // 0x7B6720
    void ** Assign_Alt(wchar_t * String);  // 0x7B6880
    void ** Reassign_Alt(const wchar_t ** a2, void *a1 = 0);  // 0x7B68E0
    wchar_t ** Append2(CampaignScore * aP1);  // 0x7B6AE0
    wchar_t ** Append(CampaignScore * aP1);  // 0x7B6B60
    wchar_t ** AssignConcat(wchar_t ** a2,  wchar_t * String);    // 0x7B6BE0
    wchar_t ** ConcatAlloc(wchar_t ** a1,  ObjectClass * aP2);    // 0x7B6CB0
    short Erase(int a2,  int a3);    // 0x7B6D90
    char RemoveChar(wchar_t a2);  // 0x7B6E20
    CampaignScore * GetOrEmpty(void *a1 = 0);  // 0x7B7100
    CampaignScore * GetOrEmpty_Alt(void *a1 = 0);  // 0x7B7140
    wchar_t GetChar(ObjectClass * aP1);  // 0x7B7180
    const wchar_t * Length(void *a1 = 0);  // 0x7B71B0
    short Reassign(wchar_t * String);  // 0x7B7600
    char IsASCII();  // 0x7B7D90
    int Hash(void *a1 = 0);  // def-aligned
};
} // namespace gamemd
