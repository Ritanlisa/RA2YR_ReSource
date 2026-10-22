// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct ObjectClass;  // fix_fwd_type_supply (G42.33b2: ForEachReverse param)
struct Array {
    unsigned int __pad_0;  // 0x0
    int q004;  // 0x4
    unsigned char q008[8];  // 0x8
    unsigned int u32_10;  // 0x10
    char __pad_14[24];  // 0x14
    int q02C;  // 0x2C
    char __pad_30[8];  // 0x30
    unsigned int u32_38;  // 0x38
    unsigned int u32_3C;  // 0x3C
    unsigned int u32_40;  // 0x40
    unsigned int u32_44;  // 0x44
    char __pad_48[36];  // 0x48
    unsigned int u32_6C;  // 0x6C
    char __pad_70[116];  // 0x70
    int q0E4;  // 0xE4
    int q0E8;  // 0xE8
    char __pad_EC[1812];  // 0xEC
    int q800;  // 0x800
    unsigned int u32_804;  // 0x804
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int GetClamped(int aP1);  // 0x634290
    int FindValue(int aP1, void *a2 = 0);
    int RemoveAt(int a2, void *a2_2);  // 0x63E590
    int Get(int a2, void *a2_1 = 0);  // 0x65AD40
    int ContainsValue(int aP1, void *a2 = 0);  // 0x65ADF0
    static int Zero(void *a1_1);
    void ByteSwap(void *a1 = 0);  // 0x749150 G42.33 b7 static-form sync
    int GetElement(int aP1);  // 0x763980
    int CleanupArrayWOL(void *a1 = 0);  // 0x7ACD30
    AbstractClass * * InsertElement(const void *a1, int aP2, void *a3 = 0);  // 0x7AD790
    static int ForEach(Array *a1, int a2, int a3, int (* a4)(int));  // G57w11: +static raw 0x004068F0 __stdcall receiver-first (align ForEachReverse)
    static int ForEachReverse(ObjectClass * aP0, int a2, int a3, int (* a4)(int));
    int Cleanup(void *a1 = 0, void *a2 = 0);  // 0x49B720
    char  GetElementAt(unsigned int * a2, int a3);  // 0x49D070
    void RemoveItemByValue(AbstractClass * aP0, int a2);  // 0x55B880
    int  Contains(int a2, void *a1 = 0);  // 0x65ad50
};
} // namespace gamemd
