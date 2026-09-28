// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Array {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    void* q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    void* q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned int u32_18;  // 0x18
    unsigned char q020;  // 0x20
    unsigned int q024;  // 0x24
    void* q02C;  // 0x2C
    unsigned char q030;  // 0x30
    void* q034;  // 0x34
    void* q038;  // 0x38
    unsigned int u32_3C;  // 0x3C
    void* q040;  // 0x40
    void* q044;  // 0x44
    unsigned char q048;  // 0x48
    unsigned char q04C;  // 0x4C
    unsigned char q050;  // 0x50
    unsigned int q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned int q060;  // 0x60
    void* q064;  // 0x64
    void* q068;  // 0x68
    void* q06C;  // 0x6C
    unsigned char q070;  // 0x70
    unsigned char q080;  // 0x80
    unsigned int q084;  // 0x84
    unsigned char q090;  // 0x90
    unsigned int u32_CC;  // 0xCC
    void* q0E4;  // 0xE4
    void* q0E8;  // 0xE8
    unsigned char q0EC;  // 0xEC
    void* q100;  // 0x100
    void* q104;  // 0x104
    void* q108;  // 0x108
    unsigned char q114;  // 0x114
    unsigned char q128;  // 0x128
    void* q130;  // 0x130
    void* q134;  // 0x134
    unsigned char q144;  // 0x144
    unsigned int q150;  // 0x150
    int q201;  // 0x201
    unsigned int q204;  // 0x204
    unsigned char q205;  // 0x205
    void* q228;  // 0x228
    void* q260;  // 0x260
    void* q264;  // 0x264
    unsigned char q274;  // 0x274
    void* q304;  // 0x304
    void* q308;  // 0x308
    unsigned char q324;  // 0x324
    void* q598;  // 0x598
    void* q608;  // 0x608
    unsigned char q628;  // 0x628
    unsigned char q630;  // 0x630
    unsigned int q774;  // 0x774
    void* q800;  // 0x800
// --- flat members (END) ---
    int GetClamped(CheckListClass * aP1);  // 0x557AC0
    int FindValue(IUnknown * aP1);  // 0x634290
    char RemoveAt(int a2);  // 0x63E590
    int Get(int a2);  // 0x65AD40
    char ContainsValue(void* aP1);  // 0x65ADF0
    int Zero();  // 0x7490D0
    void ByteSwap();  // 0x749150
    int GetElement(void* aP1);  // 0x763980
    int CleanupArrayWOL();  // 0x7ACD30
    char InsertElement(const void * a1,  ObjectClass * aP2);    // 0x7AD790
    int ForEach(AbstractClass * aP0,  int a2,  void* aP2,  int (__thiscall *a4)(int));    // 0x4068F0
    int ForEachReverse(ObjectClass * aP0,  int a2,  int a3,  int (__thiscall *a4)(int));    // 0x40AFD0
    void Cleanup();  // 0x49B720
    char GetElementAt(unsigned int * a2,  int a3);    // 0x49D070
    void RemoveItemByValue(AbstractClass * aP0,  int a2);    // 0x55B880
    static double Contains(...);  // C2597 interim stub
};
} // namespace gamemd
