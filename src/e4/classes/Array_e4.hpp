// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ObjectClass;  // fix_fwd_type_supply (G42.33b2: ForEachReverse param)
struct Array {
// --- flat members (BEGIN) ---

// --- flat members (END) ---
    int GetClamped(int aP1);  // 0x634290
    int FindValue(int aP1, void *a2 = 0);
    int RemoveAt(int a2, void *a2_2);  // 0x63E590
    int Get(int a2, void *a2_1 = 0);  // 0x65AD40
    int ContainsValue(int aP1, void *a2 = 0);  // 0x65ADF0
    int Zero(void *a1_1);
    void ByteSwap(void *a1 = 0);  // 0x749150 G42.33 b7 static-form sync
    int GetElement(int aP1);  // 0x763980
    int CleanupArrayWOL(void *a1 = 0);  // 0x7ACD30
    AbstractClass * * InsertElement(const void *a1, int aP2, void *a3 = 0);  // 0x7AD790
    int ForEach(Array *a1, int a2, int a3, int (* a4)(int));  // G57w11: +static raw 0x004068F0 __stdcall receiver-first (align ForEachReverse)
    static int ForEachReverse(ObjectClass * aP0, int a2, int a3, int (* a4)(int));
    int Cleanup(void *a1 = 0, void *a2 = 0);  // 0x49B720
    char  GetElementAt(unsigned int * a2, int a3);  // 0x49D070
    void RemoveItemByValue(AbstractClass * aP0, int a2);  // 0x55B880
    int  Contains(int a2, void *a1 = 0);  // 0x65ad50
    unsigned int q0044;  // 0x44 (offset-truth)
    unsigned char q0045;  // 0x45 (offset-truth)
    unsigned char q0046;  // 0x46 (offset-truth)

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    int q004;  // X10 supply (member_lookup)
    unsigned char q008[8];  /* char[8] */  // X10 supply (member_lookup)
    int q02C;  // X10 supply (member_lookup)
    int q0E4;  // X10 supply (member_lookup)
    int q0E8;  // X10 supply (member_lookup)
    int q800;  // X10 supply (member_lookup)
    unsigned int u32_10;  // X10 supply (member_lookup)
    unsigned int u32_38;  // X10 supply (member_lookup)
    unsigned int u32_3C;  // X10 supply (member_lookup)
    unsigned int u32_40;  // X10 supply (member_lookup)
    unsigned int u32_6C;  // X10 supply (member_lookup)
    unsigned int u32_804;  // X10 supply (member_lookup)
};
} // namespace gamemd
