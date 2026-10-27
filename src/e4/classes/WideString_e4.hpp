// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct CampaignScore;  // fix_fwd_type_supply
struct WideString {
    unsigned char __pad_000;  // 0x0
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    wchar_t * Trim();
    int Hash();
    int WordWrap(wchar_t * a0, CampaignScore * aP1, int a3, CampaignScore * aP3, int a5);  // 0x5D4B20
    AbstractClass * * Replace(CampaignScore * aP1, wchar_t * String);  // 0x7B73F0
    static int Trim(wchar_t * Source);  // 0x727D60
    int Assign(wchar_t *aP1);  // 0x7B66D0
    int AssignFromPtr(const wchar_t **a2, void *a2_1 = 0);  // 0x7B6720
    void ** Assign_Alt(wchar_t *String, void *a2 = 0);  // 0x7B6880
    int Reassign_Alt(const wchar_t **a2, void *a2_1 = 0);  // 0x7B68E0
    wchar_t ** Append2(wchar_t *aP1, void *a2 = 0);  // 0x7B6AE0
    wchar_t ** Append(CampaignScore * aP1, void *a2_1);  // 0x7B6B60
    wchar_t ** AssignConcat(wchar_t ** a2, wchar_t * String);  // 0x7B6BE0
    wchar_t ** ConcatAlloc(wchar_t ** a1, ObjectClass * aP2);  // 0x7B6CB0
    short Erase(int a2, int a3_2);  // 0x7B6D90
    char RemoveChar(wchar_t a2);  // 0x7B6E20
    int GetOrEmpty();  // 0x7B7100
    wchar_t * GetOrEmpty_Alt();  // 0x7B7140
         int GetChar(size_t aP1);  // 0x7B7180
    int Length(void *a1 = 0);  // 0x7B71B0
    short Reassign(wchar_t * String, void *a2_1);  // 0x7B7600
    char IsASCII(void *a1 = 0);  // 0x7B7D90
    static int Hash(wchar_t * Source);  // def-aligned
};
} // namespace gamemd
