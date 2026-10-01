// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_ptr_BuildChoiceClass_int_ouseClass {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
    unsigned int CapacityIncrement;  // 0x14
    unsigned char q018;  // 0x18
    unsigned char u8_19;  // 0x19
    unsigned int q01C;  // 0x1C
    unsigned int q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned int q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned int q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q03C;  // 0x3C
    unsigned int q040;  // 0x40
    unsigned char q044;  // 0x44
    unsigned int q050;  // 0x50
    unsigned char q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned int q064;  // 0x64
    unsigned char q068;  // 0x68
    void* q06C;  // 0x6C
    unsigned char q070;  // 0x70
    unsigned int q080;  // 0x80
    unsigned char q084;  // 0x84
    unsigned char q088;  // 0x88
    unsigned char q0A8;  // 0xA8
    unsigned char q0AC;  // 0xAC
    unsigned char q0D8;  // 0xD8
    unsigned char q0DC;  // 0xDC
    unsigned char q0E0;  // 0xE0
    unsigned char q0E4;  // 0xE4
    unsigned char q0E8;  // 0xE8
    unsigned char q0EC;  // 0xEC
    unsigned char q0F0;  // 0xF0
    unsigned char q0F4;  // 0xF4
    unsigned char q0F8;  // 0xF8
    unsigned char q0FC;  // 0xFC
    unsigned int q100;  // 0x100
    unsigned char q104;  // 0x104
    void* q108;  // 0x108
    unsigned char q10C;  // 0x10C
    unsigned char q110;  // 0x110
    unsigned char q114;  // 0x114
    unsigned int q128;  // 0x128
    unsigned char q12C;  // 0x12C
    unsigned int q130;  // 0x130
    unsigned char q134;  // 0x134
    unsigned char q138;  // 0x138
    unsigned char q168;  // 0x168
    unsigned char q16C;  // 0x16C
    void* q1C8;  // 0x1C8
    unsigned char q1CC;  // 0x1CC
    unsigned char q220;  // 0x220
    unsigned char q224;  // 0x224
    unsigned char q228;  // 0x228
    unsigned char q229;  // 0x229
    unsigned char q240;  // 0x240
    unsigned char q244;  // 0x244
    unsigned char q248;  // 0x248
    unsigned char q260;  // 0x260
    void* q264;  // 0x264
    unsigned char q268;  // 0x268
    unsigned char q274;  // 0x274
    unsigned int q304;  // 0x304
    unsigned char q308;  // 0x308
    unsigned char q360;  // 0x360
    unsigned char q460;  // 0x460
    unsigned char q534;  // 0x534
    unsigned char q544;  // 0x544
    unsigned char q548;  // 0x548
    unsigned char q580;  // 0x580
    unsigned int q598;  // 0x598
    unsigned char q608;  // 0x608
    unsigned char q628;  // 0x628
    unsigned char q774;  // 0x774
    unsigned char q864;  // 0x864
    void* q1110;  // 0x1110
    unsigned char q1120;  // 0x1120
    unsigned char q1348;  // 0x1348
    unsigned char q1378;  // 0x1378
    unsigned char q1398;  // 0x1398
    unsigned char q1544;  // 0x1544
    void* q1554;  // 0x1554
    unsigned char q1558;  // 0x1558
    unsigned char q1574;  // 0x1574
    unsigned int q1634;  // 0x1634
    unsigned char q1908;  // 0x1908
    unsigned char q1910;  // 0x1910
    unsigned char q2148;  // 0x2148
    void* q4368;  // 0x4368
    unsigned char q4384;  // 0x4384
    unsigned char q4914;  // 0x4914
    unsigned char q4984;  // 0x4984
    unsigned char q4994;  // 0x4994
    void* q5460;  // 0x5460
    unsigned char q5464;  // 0x5464
    unsigned char q5494;  // 0x5494
    unsigned int q5684;  // 0x5684
    unsigned char q6408;  // 0x6408
    unsigned int __tail_18;
    unsigned int *__pad_0;
// --- flat members (END) ---
    unsigned int *  Constructor(void * aP1, void *a1 = 0, void *a2 = 0);  // 0x4A0C20
    int  SetCapacity(int a1, int a2);  // 0x4F6A20
    int  SetCapacity_0(int a1, int a2);  // 0x4F6A80
    int  SetCapacity_1(int a1, int a2);  // 0x4F6AE0
    int  SetCapacity_2(int a1, int a2);  // 0x4F6B50
    unsigned int *  SetCapacity_3(int a1, unsigned int * a2);  // 0x4F6BC0
    unsigned int *  SetCapacity_4(int a1, unsigned int * a2);  // 0x4F6D10
    int  SetCapacity_5(int a1);  // 0x501400
    char  Release(int a2, unsigned int * a3);  // 0x50F520
    char  SetCapacity_6(int a2, unsigned int * a3);  // 0x50F660
    int  StubReturnNullPointer_0(int a1, void * a2, unsigned int * a3);  // 0x502550
    void *  GetItemIndex_0(int a2);  // 0x4F6930
    bool  GetItemIndex(int a1);  // 0x4F6910
    BSTR  FindItemIndex(int a1);  // 0x4F6950
    long long  FindItemIndex_0(int a1);  // 0x4F6990
    int  Destroy(int a1);  // 0x4F69D0
    int  GetItem(int a1);  // 0x4F6A00
    int  GetItem_0(int a1);  // 0x4F6A10
    int  GetItem_1(int a1);  // 0x4F6E60
    int  ScalarDeletingDestructor(unsigned int * a1);  // 0x5013A0
    int  StubReturnNullPointer(int a1, unsigned int * a2);  // 0x5024F0
    void Destroy_0();  // 0x50E640
    unsigned int  GetItemIndex_1(int a2);  // 0x50E670
    int  Get(int a2, void *a1 = 0);  // 0x50E690
    char  Add(int a2, void *a1 = 0, void *a3 = 0);  // 0x50F4E0
    void Remove(void *a1 = 0);  // 0x50F5D0
    int  GetSize(unsigned int * a2);  // 0x50F600
    unsigned int  GetCapacity(int a2);  // 0x50F640
    int  FindItemIndex_1(unsigned int * a2);  // 0x50F710
    VectorClass_flat *  QueryInterface(unsigned int * Block, char a2);  // 0x510270
    unsigned int *  loc_5102C0(unsigned int * Block, char a2);  // 0x5102C0
    int  GetItem_2(int a1, void * a2, unsigned int * a3);  // 0x510A50
    int  GetItem_3(int a1);  // 0x510A60
    int  GetItem_4(int a1);  // 0x510A70
    int  GetItem_5(int a1, void * a2, unsigned int * a3);  // 0x510A80
    int  GetItem_6(int a1);  // 0x510A90
    int  GetItem_7(int a1);  // 0x510AA0
    int  GetItem_8(int a1);  // 0x510AB0
    BSTR  GetItem_9(int a1);  // 0x510AC0
    int  GetItem_10(int a1, void * a2, unsigned int * a3);  // 0x510AD0
    int  GetItem_11(int a1);  // 0x510AE0
    int  GetItem_12(int a1);  // 0x510AF0
};
} // namespace gamemd
