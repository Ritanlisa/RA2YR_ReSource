// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct String {
    void* vfptr;  // minimal E2 declaration
    void AssignWideToChar(CampaignScore * aP1, CampaignScore * aP2);  // 0x49B760
    char * AllocAndCopy(RandomStruct * aP1, IUnknown * aP2);  // 0x4CB5E0
    void Release();  // 0x5BD5A0
    int SplitComma(ObjectClass * aP1);  // 0x5D0380
    int NormalizeNewlines();  // 0x5F3350
    int To_Waypoint();  // 0x763690
    ObjectClass * FormatDword();  // 0x777B30
    ObjectClass * CopyConstant();  // 0x777B60
    void TrimLeft(ObjectClass * aP1);  // 0x7B51D0
    char Replace(char * SubStr, const char * a3);  // 0x7B57A0
    int Tokenize(int a2, ObjectClass * aP2, ObjectClass * aP3);  // 0x7B5F10
    int Tokenize2(int a2, wchar_t * Str, void ** a4);  // 0x7B7A60
    char * CopyUpper(ObjectClass * aP1);  // 0x4F4C30
    char * Copy(const char * a2);  // 0x4F4C70
    char * CopyChecked(const char * a2);  // 0x4F4CB0
    bool Equals(ObjectClass * aP1);  // 0x4F4CE0
    unsigned int ComputeHash();  // 0x5E2620
    char * Trim();  // 0x727CF0
    char ** Assign(const char * a2);  // 0x7B4630
    char ** AssignFromPtr(const char ** a2);  // 0x7B4690
    bool Equals_Alt(const char * a2);  // 0x7B4710
    bool Compare(const char ** a2);  // 0x7B4780
    bool NotEquals(const char * a2);  // 0x7B47F0
    void ** Assign_Alt(CCINIClass * aP1);  // 0x7B48D0
    char ** Reassign(AbstractClass * aP1);  // 0x7B4940
    const char ** Append(CCINIClass * aP1);  // 0x7B4C20
    const char ** Append2(IUnknown * aP1);  // 0x7B4CD0
    char ** Concat2(char ** a2, const char * a3);  // 0x7B4DA0
    char ** Concat(char ** a1, IUnknown * aP2);  // 0x7B4ED0
    char Erase(MPCooperative * aP1, int a3);  // 0x7B5020
    void TrimRight(ObjectClass * aP1);  // 0x7B5230
    char * GetOrEmpty();  // 0x7B5400
    char * GetOrEmpty_Alt();  // 0x7B5440
    unsigned int Length();  // 0x7B54B0
    char Assign_Bool(const char * a2);  // 0x7B5A40
    void ToLower();  // 0x7B5B30
    char ** ToLowerCopy(ObjectClass * aP1);  // 0x7B5B80
    char CopyTruncated(size_t Count);  // 0x7B5D70
    char TruncateTo(size_t Count);  // 0x7B78D0
    int Wrapper5to4(CampaignScore * aP0, int a2, int a3, int a4);  // 0x7CCA19
};
} // namespace gamemd
