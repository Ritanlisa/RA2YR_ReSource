// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ControlClass;  // fix_fwd_type_supply
struct String {
// --- flat members (BEGIN) ---
    unsigned int m_3;  // 0x3
    ObjectClass * ptr_4;  // 0x4
    unsigned int tail_7;  // 0x7
    ObjectClass * ptr_8;  // 0x8
// --- flat members (END) ---
    int  AssignWideToChar(char * a2, char * a3);  // 0x49B760
    char * AllocAndCopy(RandomStruct * aP1, IUnknown * aP2);
    int Release(void *a1 = 0);  // 0x5BD5A0
    ObjectClass * *  SplitComma(void * a2);  // 0x5D0380
    int NormalizeNewlines();  // 0x5F3350
    ControlClass * * To_Waypoint();  // 0x763690
    int TrimLeft(const char **a2, const char **aP1, int a1, int a3, int aP2, int aP3, int a4, int a5);
    unsigned int Length(void *a1 = 0);  // 0x7B54B0
    AbstractClass * *  Replace(char * SubStr, void * a3);  // 0x7B57A0
    static AbstractClass * * Replace(void *aP0, const char *a1, const char *a2);  // G42.33 b7 static-form sync
    unsigned char __tail_7[8];  // G42.33 b7 alias (flat-carrier vocab)
    AbstractClass * *  Tokenize(int a2, char * Str, void ** a4);  // 0x7B5F10
    AbstractClass * *  Tokenize2(int a2, void * Str, void ** a4);  // 0x7B7A60
    ObjectClass *  FormatDword(char * Buffer);  // 0x777B30
    ObjectClass *  CopyConstant(char * Destination);  // 0x777B60
    char *  CopyUpper(char * String, void * a2);  // 0x4F4C30
    char * Copy(const char *a2_2, void *a1 = 0);  // 0x4F4C70
    char * CopyChecked(const char *a2, void *a1 = 0);
    bool Equals(ObjectClass * aP1, void *a2_1);  // 0x4F4CE0
    unsigned int ComputeHash(void *a1_1);  // 0x5E2620
    char * Trim(void *a1 = 0);  // 0x727CF0
    char ** Assign(const char *a2);  // 0x7B4630
    char **  AssignFromPtr(void * a2, void *a1 = 0);  // 0x7B4690
    bool Equals_Alt(const char *a2);  // 0x7B4710
    bool Compare(const char **a2, void *a1 = 0);  // 0x7B4780
    void ** Assign_Alt(const char *aP1, void *a1 = 0);  // 0x7B48D0
    char ** Reassign(const char **aP1, void *a1 = 0);  // 0x7B4940
    const char **  Append(void * a2, void *a1 = 0);  // 0x7B4C20
    const char **  Append2(char ** a2, void *a1 = 0);  // 0x7B4CD0
    char ** Concat2(char **a2, const char *a3);  // 0x7B4DA0
    char **  Concat(char ** a2, char ** a3, void *a1 = 0);  // 0x7B4ED0
    char  Erase(int a2, int a3);  // 0x7B5020
    void  TrimRight(void * a2);  // 0x7B5230
    char * GetOrEmpty();  // 0x7B5400
    char * GetOrEmpty_Alt(void *a1 = 0);  // 0x7B5440
    char  Assign_Bool(void * a2, void *a1 = 0);  // 0x7B5A40
    int ToLower();  // 0x7B5B30
    char **  ToLowerCopy(char ** a2, void *a1 = 0);  // 0x7B5B80
    char  CopyTruncated(int Count);  // 0x7B5D70
    char TruncateTo(size_t Count);  // 0x7B78D0
    int  Wrapper5to4(int a1, int a2, int a3, int a4);  // 0x7CCA19
    bool Equals(ObjectClass * aP1, void *a2_1);  // def-aligned
    // dup-decl: bool Equals(void * aP1);  // def-aligned
    // dup-decl: bool Equals(void * aP1);  // def-aligned
    bool Equals(ObjectClass * aP1, void *a2_1);  // def-aligned
    unsigned char m_3;  // 0x3 (canon-mt)
    void * ptr_88;  // 0x88 (offset-truth)
    unsigned int *q000;  // 0x0 (canon-mt)
};
} // namespace gamemd
