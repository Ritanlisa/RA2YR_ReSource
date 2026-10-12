// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct CampaignScore;  // fix_fwd_type_supply
struct WideString {
// --- flat members (BEGIN) ---

// --- flat members (END) ---
    wchar_t * Trim();
    int Hash();
    int  WordWrap(void * a1, void * String, int a3, int a4, int a5);  // 0x5D4B20
    AbstractClass * *  Replace(void * SubStr, void * String);  // 0x7B73F0
    static int Trim(wchar_t * Source);  // 0x727D60
    int Assign(wchar_t *aP1);  // 0x7B66D0
    int  AssignFromPtr(void * a2, void *a1 = 0);  // 0x7B6720
    void **  Assign_Alt(void * String, void *a1 = 0);  // 0x7B6880
    int  Reassign_Alt(void * a2, void *a1 = 0);  // 0x7B68E0
    wchar_t **  Append2(void * String, void *a1 = 0);  // 0x7B6AE0
    wchar_t **  Append(void * a2, void *a1 = 0);  // 0x7B6B60
    wchar_t **  AssignConcat(void * a2, void * String);  // 0x7B6BE0
    wchar_t **  ConcatAlloc(void * a2, void * a3);  // 0x7B6CB0
    short Erase(int a2, int a3_2);  // 0x7B6D90
    char  RemoveChar(int a2);  // 0x7B6E20
    int GetOrEmpty();  // 0x7B7100
    int GetOrEmpty_Alt(void *a1 = 0);  // 0x7B7140
         int GetChar(size_t aP1);  // 0x7B7180
    int Length(void *a1 = 0);  // 0x7B71B0
    short  Reassign(void * String, void *a1 = 0);  // 0x7B7600
    char IsASCII(void *a1 = 0);  // 0x7B7D90
    static int Hash(wchar_t * Source);  // def-aligned
    static int Hash(void *aP0);
};
} // namespace gamemd
