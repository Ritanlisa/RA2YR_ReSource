// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct MSEngine {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* q004;  // 0x4
    void* ;  // 0x8
    bool q00A;  // 0xA
    bool q00B;  // 0xB
    unsigned int u32_C;  // 0xC
    void* IsAllocated;  // 0xD
    bool q00E;  // 0xE
    unsigned int q010;  // 0x10
    unsigned int u32_14;  // 0x14
    int Count;  // 0x16
    void* q018;  // 0x18
    unsigned int u32_1C;  // 0x1C
    unsigned int u32_20;  // 0x20
    unsigned int q024;  // 0x24
    unsigned int q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned int u32_30;  // 0x30
    unsigned char q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char u8_39;  // 0x39
    unsigned char u8_3C;  // 0x3C
    unsigned char u8_3D;  // 0x3D
    unsigned int q040;  // 0x40
    unsigned char q044;  // 0x44
    CampaignClass * ptr_48;  // 0x48
    unsigned int u32_4C;  // 0x4C
    unsigned char q050;  // 0x50
    unsigned char u8_51;  // 0x51
    unsigned int q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q05C;  // 0x5C
    unsigned char q060;  // 0x60
    unsigned int q064;  // 0x64
    unsigned char q068;  // 0x68
    unsigned char q06C;  // 0x6C
    unsigned char q070;  // 0x70
    unsigned char q074;  // 0x74
    unsigned char q080;  // 0x80
    unsigned int q084;  // 0x84
    unsigned char q088;  // 0x88
    unsigned char q08C;  // 0x8C
    unsigned char q090;  // 0x90
    unsigned char q094;  // 0x94
    unsigned char q098;  // 0x98
    unsigned char q09C;  // 0x9C
    unsigned char q0AC;  // 0xAC
    unsigned char q0B0;  // 0xB0
    unsigned char q0B4;  // 0xB4
    unsigned char q0B8;  // 0xB8
    unsigned int q100;  // 0x100
    unsigned char q104;  // 0x104
    unsigned char q108;  // 0x108
    unsigned char q10C;  // 0x10C
    CampaignClass * q114;  // 0x114
    unsigned int q118;  // 0x118
    unsigned char q11C;  // 0x11C
    unsigned char q120;  // 0x120
    unsigned char q124;  // 0x124
    unsigned char q128;  // 0x128
    unsigned char q12C;  // 0x12C
    unsigned char q130;  // 0x130
    unsigned char q134;  // 0x134
    unsigned char q138;  // 0x138
    unsigned char q144;  // 0x144
    unsigned char q148;  // 0x148
    unsigned char q150;  // 0x150
    unsigned char q154;  // 0x154
    unsigned char q264;  // 0x264
    unsigned char q268;  // 0x268
    unsigned char q270;  // 0x270
    unsigned char q274;  // 0x274
    unsigned int q280;  // 0x280
    unsigned char q284;  // 0x284
    unsigned char q288;  // 0x288
    unsigned char q28C;  // 0x28C
    unsigned char q290;  // 0x290
    unsigned char q294;  // 0x294
    unsigned char q298;  // 0x298
    unsigned char q29C;  // 0x29C
    unsigned char q304;  // 0x304
    unsigned char q308;  // 0x308
    unsigned char q310;  // 0x310
    unsigned char q314;  // 0x314
    unsigned char q318;  // 0x318
    unsigned char q31C;  // 0x31C
    unsigned char q324;  // 0x324
    unsigned char q328;  // 0x328
    unsigned char q330;  // 0x330
    unsigned char q334;  // 0x334
    unsigned char q338;  // 0x338
    unsigned char q33C;  // 0x33C
    unsigned char q34C;  // 0x34C
    unsigned char q350;  // 0x350
    unsigned char q358;  // 0x358
    unsigned char q35C;  // 0x35C
    unsigned char q364;  // 0x364
    unsigned char q368;  // 0x368
    unsigned char q370;  // 0x370
    unsigned char q374;  // 0x374
    unsigned char q3DC;  // 0x3DC
    unsigned char q3E0;  // 0x3E0
    unsigned char q478;  // 0x478
    unsigned char q47C;  // 0x47C
    unsigned int q640;  // 0x640
    unsigned char q644;  // 0x644
    unsigned char q648;  // 0x648
    unsigned char q650;  // 0x650
    unsigned int Capacity;
    unsigned int IsInitialized;
    unsigned int Items;
    unsigned int q0040;
    unsigned int q0041;
    unsigned int q0042;
    unsigned int q0043;
    unsigned int q0044;
    unsigned int q0046;
    unsigned int q0047;
    unsigned int q0100;
    unsigned int q0108;
    unsigned int u32_18;
    unsigned int u32_1C2;
    unsigned int q008;
// --- flat members (END) ---
    char Release(int a2,  char * a3);    // 0x5ACD30
    char SetCapacity(int a2,  char * a3);    // 0x5ACED0
    void Destructor();  // 0x5CEE60
    unsigned int * Construct();  // 0x5D1AA0
    void Destruct();  // 0x5D1B30
    int ProcessEvents(MSVQAnim * aP1,  int a3);    // 0x5D1DF0
    void ClearBuffer();  // 0x5AC520
    unsigned int * Shutdown(unsigned int * a2,  int a3);    // 0x5AC570
    char AddRef(int a2);  // 0x5ACCC0
    void ddtor();  // 0x5ACE20
    int Init(unsigned int * a2);  // 0x5ACE50
    int FindItem(unsigned int * a2);  // 0x5ACFC0
    VectorClass_flat * QueryInterface(char a2);  // 0x5AD4D0
    DynamicVector * Constructor(char a2);  // 0x5AD520
    unsigned int PointerToIndex(int a2);  // 0x5AC550
    unsigned int Run(int a2);  // 0x5ACEB0
    void DestroyData();  // 0x5D5850
};
} // namespace gamemd
