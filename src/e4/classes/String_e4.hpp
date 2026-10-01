// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct String {
// --- flat members (BEGIN) ---
    unsigned int q4;  // 0x4
    unsigned int u16_6;  // 0x6
    unsigned int q8;  // 0x8
    unsigned int u32_C;  // 0xC
    unsigned int u32_14;  // 0x14
    unsigned int q018;  // 0x18
    unsigned int q024;  // 0x24
    unsigned int u32_28;  // 0x28
    unsigned int u32_2C;  // 0x2C
    unsigned int u32_2D;  // 0x2D
    unsigned int u32_34;  // 0x34
    unsigned int u32_38;  // 0x38
    unsigned int q054;  // 0x54
    unsigned int u32_70;  // 0x70
    unsigned int q084;  // 0x84
    unsigned int q274;  // 0x274
    unsigned int u32_45C;  // 0x45C
    unsigned int u32_470;  // 0x470
    unsigned int u32_474;  // 0x474
    unsigned int u32_478;  // 0x478
    unsigned int q628;  // 0x628
    unsigned int q774;  // 0x774
    unsigned int q1908;  // 0x1908
    unsigned int q5494;  // 0x5494
    unsigned int q6408;  // 0x6408
    unsigned int *__pad_0;
    unsigned int *m_3;
    void* ptr_88;
    void* ptr_4;
    void* ptr_8;
// --- flat members (END) ---
    void AssignWideToChar(CampaignScore * aP1, CampaignScore * aP2);  // 0x49B760
    char *  AllocAndCopy(char * Destination, void * aP1, void * aP2);  // 0x4CB5E0
    int Release(void *a1 = 0);  // 0x5BD5A0
    ObjectClass * * SplitComma(ObjectClass * aP1);  // 0x5D0380
    int NormalizeNewlines();  // 0x5F3350
    int To_Waypoint();  // 0x763690
    void TrimLeft(ObjectClass * aP1);  // 0x7B51D0
    unsigned int Length(void *a1 = 0);  // 0x7B54B0
    AbstractClass * * Replace(char * SubStr, const char * a3);  // 0x7B57A0
    AbstractClass * * Tokenize(int a2, ObjectClass * aP2, ObjectClass * aP3);  // 0x7B5F10
    int  Tokenize2(int a2, void * Str, void ** a4);  // 0x7B7A60
    ObjectClass *  FormatDword(char * Buffer);  // 0x777B30
    ObjectClass *  CopyConstant(char * Destination);  // 0x777B60
    char *  CopyUpper(char * String, void * aP1);  // 0x4F4C30
    char *  Copy(void * a2, void *a1 = 0);  // 0x4F4C70
    char *  CopyChecked(void * a2, void *a1 = 0);  // 0x4F4CB0
    bool  Equals(void * aP1, void *a1 = 0);  // 0x4F4CE0
    unsigned int ComputeHash(int a2);  // 0x5E2620
    char * Trim(void *a1 = 0);  // 0x727CF0
    char **  Assign(void * a2, void *a1 = 0);  // 0x7B4630
    char **  AssignFromPtr(void * a2, void *a1 = 0);  // 0x7B4690
    bool  Equals_Alt(void * a2);  // 0x7B4710
    bool  Compare(void * a2, void *a1 = 0);  // 0x7B4780
    void **  Assign_Alt(void * aP1, void *a1 = 0);  // 0x7B48D0
    char **  Reassign(void * aP1, void *a1 = 0);  // 0x7B4940
    const char **  Append(void * aP1, void *a1 = 0);  // 0x7B4C20
    const char **  Append2(void * aP1, void *a1 = 0);  // 0x7B4CD0
    char **  Concat2(char ** a2, void * a3, void *a1 = 0);  // 0x7B4DA0
    char **  Concat(char ** a1, void * aP2, void *a2 = 0);  // 0x7B4ED0
    char  Erase(void * aP1, int a3, void *a1 = 0);  // 0x7B5020
    void  TrimRight(void * aP1);  // 0x7B5230
    char * GetOrEmpty(void *a1 = 0);  // 0x7B5400
    char * GetOrEmpty_Alt(void *a1 = 0);  // 0x7B5440
    char  Assign_Bool(void * a2, void *a1 = 0);  // 0x7B5A40
    void ToLower(void *a1 = 0);  // 0x7B5B30
    char **  ToLowerCopy(void * aP1, void *a1 = 0);  // 0x7B5B80
    char  CopyTruncated(int Count);  // 0x7B5D70
    char  TruncateTo(int Count);  // 0x7B78D0
    int  Wrapper5to4(void * aP0, int a2, int a3, int a4);  // 0x7CCA19
    bool Equals(void * aP1);  // def-aligned
    // dup-decl: bool Equals(void * aP1);  // def-aligned
    // dup-decl: bool Equals(void * aP1);  // def-aligned
    bool NotEquals(const char * a2, void *a1 = 0);  // def-aligned
};
} // namespace gamemd
