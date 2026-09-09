// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct WideString {
    void* vfptr;  // minimal E2 declaration
    int WordWrap(wchar_t * a0, CampaignScore * aP1, int a3, CampaignScore * aP3, int a5);  // 0x5D4B20
    int Hash(wchar_t * Source);  // 0x5DAC00
    wchar_t * Trim(wchar_t * Source);  // 0x727D60
    wchar_t ** Assign(CampaignScore * aP1);  // 0x7B66D0
    wchar_t ** AssignFromPtr(const wchar_t ** a2);  // 0x7B6720
    void ** Assign_Alt(wchar_t * String);  // 0x7B6880
    void ** Reassign_Alt(const wchar_t ** a2);  // 0x7B68E0
    wchar_t ** Append2(CampaignScore * aP1);  // 0x7B6AE0
    wchar_t ** Append(CampaignScore * aP1);  // 0x7B6B60
    wchar_t ** AssignConcat(wchar_t ** a2, wchar_t * String);  // 0x7B6BE0
    wchar_t ** ConcatAlloc(wchar_t ** a1, ObjectClass * aP2);  // 0x7B6CB0
    short Erase(int a2, int a3);  // 0x7B6D90
    char RemoveChar(wchar_t a2);  // 0x7B6E20
    CampaignScore * GetOrEmpty();  // 0x7B7100
    CampaignScore * GetOrEmpty_Alt();  // 0x7B7140
    wchar_t GetChar(ObjectClass * aP1);  // 0x7B7180
    const wchar_t * Length();  // 0x7B71B0
    char Replace(CampaignScore * aP1, wchar_t * String);  // 0x7B73F0
    short Reassign(wchar_t * String);  // 0x7B7600
    char IsASCII();  // 0x7B7D90
};
} // namespace gamemd
