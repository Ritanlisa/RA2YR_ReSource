// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once
#include "app/cmdline.hpp"



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct SessionClass;  // fix_fwd_type_supply
struct Object {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    void* q004;  // 0x4
    void* q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned int u32_10;  // 0x10
    unsigned int u32_14;  // 0x14
    unsigned char q018;  // 0x18
    unsigned int q020;  // 0x20
    unsigned char q024;  // 0x24
    void * ptr_28;  // 0x28
    void* q030;  // 0x30
    void* q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned int u32_3C;  // 0x3C
    unsigned int q03D;  // 0x3D
    unsigned char q03E;  // 0x3E
    unsigned int u32_40;  // 0x40
    unsigned char q042;  // 0x42
    void* q048;  // 0x48
    unsigned int q050;  // 0x50
    unsigned char q054;  // 0x54
    unsigned int q060;  // 0x60
    unsigned int q064;  // 0x64
    unsigned int q068;  // 0x68
    unsigned int u32_6C;  // 0x6C
    unsigned int q080;  // 0x80
    unsigned int u32_81;  // 0x81
    unsigned char q084;  // 0x84
    void* q088;  // 0x88
    void* q08C;  // 0x8C
    unsigned char q090;  // 0x90
    unsigned char q098;  // 0x98
    unsigned int u32_A0;  // 0xA0
    unsigned int u32_A4;  // 0xA4
    void* q0AC;  // 0xAC
    unsigned char q0B0;  // 0xB0
    unsigned int u32_B4;  // 0xB4
    void* q0E4;  // 0xE4
    void* q0E8;  // 0xE8
    unsigned char q0EC;  // 0xEC
    unsigned int u32_F4;  // 0xF4
    unsigned int u32_F8;  // 0xF8
    unsigned int q100;  // 0x100
    unsigned int q104;  // 0x104
    void* q114;  // 0x114
    unsigned int q128;  // 0x128
    void* q130;  // 0x130
    unsigned char q134;  // 0x134
    void* q13C;  // 0x13C
    unsigned char q140;  // 0x140
    unsigned char q144;  // 0x144
    unsigned char q148;  // 0x148
    unsigned char q14C;  // 0x14C
    unsigned int q150;  // 0x150
    unsigned char q154;  // 0x154
    unsigned char q158;  // 0x158
    unsigned int q160;  // 0x160
    unsigned int q164;  // 0x164
    unsigned char q168;  // 0x168
    unsigned char q16C;  // 0x16C
    unsigned char q170;  // 0x170
    unsigned char q174;  // 0x174
    unsigned char q178;  // 0x178
    void* q228;  // 0x228
    unsigned char q22C;  // 0x22C
    unsigned char q230;  // 0x230
    unsigned char q234;  // 0x234
    unsigned char q238;  // 0x238
    unsigned int q244;  // 0x244
    unsigned int q248;  // 0x248
    unsigned char q24C;  // 0x24C
    unsigned char q250;  // 0x250
    unsigned char q258;  // 0x258
    unsigned char q25C;  // 0x25C
    unsigned int q260;  // 0x260
    unsigned char q264;  // 0x264
    unsigned char q268;  // 0x268
    void* q29C;  // 0x29C
// --- flat members (END) ---
    char* attachedTag;  // g57w8: +N 指针算术载体  // 0x0 (no offset truth)
    char* nextObject;  // g57w8: 同上  // 0x0 (no offset truth)
    void* parachute;  // 0x0 (no offset truth)
    int FindClosestObjectCell(unsigned int *aP1, char aP2, int aP3);
    int FindObjectCell(TechnoClass * aP1, char aP2);  // 0x47C5A0
    int IsAlliedWithObjectHouse(int aP1);
    int IsAlliedWithObjectSimpleHouse(unsigned char * a2);  // 0x4F9AF0
    unsigned int * FindNearestObjectAtCell(unsigned int * a2);  // 0x56C210
    int SpawnAtCell(int aP1, int16_t *aP2, int aP3);  // 0x5FC380
    void* HandleAction(int * a2, int * a3);  // 0x5FD970
    int ProcessEvent();  // 0x5FDDE0
    void * DrawObject(void ** Block, char a2);  // 0x5FDF70
    void* * CalculateObjectPlacementPosition(int *a2);  // 0x62AC30
    int LoadObject(ObjectClass * aP1, int aP1a);  // 0x5FD8F0
    SessionClass * DtorWithDelete(void ** Block, char a2);  // 0x7AD330
    int ComputeAllocationSize();  // 0x42B1F0
    void ** RemoveObjectArray();  // 0x53E420
    int Unlink();  // 0x5F5230
    char CheckState(IUnknown * aP1, int a3);  // 0x5FD270
    int SaveObject(TechnoTypeClass * aP0, int * a1, int aP2);  // 0x5FD950
    int ddtor(int a1, unsigned int * a2);  // 0x5FDF10
    int StubReturn176();  // 0x5FDF00
    int StubReturn20();  // 0x5FDF50
    char[4] Object_field_0x2;  // 0x2 (ml)
    char[80] __pad_EC;  // 0x236 (ml)
    unsigned int u32_5788;  // 0x5788 (offset-truth supply)
};
} // namespace gamemd
