// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct LoadOptions {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    unsigned int q00C;  // 0xC
    void* IsAllocated;  // 0xD
    unsigned int max_entries;  // 0x10
    bool IsInitialized;  // 0x12
    unsigned int q014;  // 0x14
    FileEntryClass** entries;  // 0x18
    unsigned int count;  // 0x1C
    unsigned char is_active;  // 0x20
    unsigned char owns_memory;  // 0x21
    unsigned int q024;  // 0x24
    int q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char pad_2E;  // 0x2E
    unsigned int capacity;  // 0x30
    unsigned int grow_step;  // 0x34
    unsigned char q038;  // 0x38
    int q040;  // 0x40
    unsigned char q044;  // 0x44
    int q048;  // 0x48
    char q050;  // 0x50
    unsigned int q054;  // 0x54
    int q064;  // 0x64
    unsigned char q068;  // 0x68
    unsigned int q070;  // 0x70
    char q080;  // 0x80
    unsigned int q084;  // 0x84
    unsigned int u32_B4;  // 0xB4
    void* q0F7;  // 0xF7
    unsigned int q0F9;  // 0xF9
    unsigned char q0FB;  // 0xFB
    unsigned char q0FF;  // 0xFF
    int q100;  // 0x100
    unsigned char q104;  // 0x104
    int q114;  // 0x114
    char q128;  // 0x128
    int q130;  // 0x130
    unsigned char q134;  // 0x134
    unsigned int q180;  // 0x180
    void* q188;  // 0x188
    void* q18C;  // 0x18C
    unsigned char q190;  // 0x190
    unsigned char q260;  // 0x260
    unsigned int q274;  // 0x274
    int q304;  // 0x304
    unsigned int q384;  // 0x384
    unsigned char q3D7;  // 0x3D7
    unsigned char q3DB;  // 0x3DB
    void* q3F0;  // 0x3F0
    unsigned char q3F4;  // 0x3F4
    unsigned char q3F8;  // 0x3F8
    unsigned char q3FC;  // 0x3FC
    unsigned char q400;  // 0x400
    unsigned char q404;  // 0x404
    unsigned int u32_420;  // 0x420
    unsigned char q424;  // 0x424
    unsigned char q428;  // 0x428
    unsigned int q900;  // 0x900
    unsigned char q904;  // 0x904
    unsigned char q908;  // 0x908
    unsigned char q90C;  // 0x90C
    void* q914;  // 0x914
    void* q918;  // 0x918
    unsigned char q91C;  // 0x91C
    unsigned char q920;  // 0x920
    unsigned char q924;  // 0x924
    unsigned char q99C;  // 0x99C
    unsigned char q9A0;  // 0x9A0
    unsigned char q9A4;  // 0x9A4
    unsigned char q9A8;  // 0x9A8
    void* q1008;  // 0x1008
    unsigned char q100C;  // 0x100C
    unsigned char q1010;  // 0x1010
    unsigned char q1014;  // 0x1014
    unsigned char q1020;  // 0x1020
    unsigned char q1024;  // 0x1024
    unsigned char q1028;  // 0x1028
    unsigned char q1060;  // 0x1060
    unsigned char q1064;  // 0x1064
    unsigned int q2304;  // 0x2304
    unsigned char q2308;  // 0x2308
    unsigned char q230C;  // 0x230C
    unsigned char q2318;  // 0x2318
    unsigned char q231C;  // 0x231C
    void* q2324;  // 0x2324
    void* q2328;  // 0x2328
    unsigned char q232C;  // 0x232C
    unsigned char q2330;  // 0x2330
    unsigned char q2460;  // 0x2460
    unsigned char q2464;  // 0x2464
    unsigned char q2468;  // 0x2468
    unsigned char q2ACC;  // 0x2ACC
    unsigned char q2AD0;  // 0x2AD0
    unsigned char q2AD4;  // 0x2AD4
    void* q4104;  // 0x4104
    unsigned char q4108;  // 0x4108
    unsigned char q410C;  // 0x410C
    unsigned char q4114;  // 0x4114
    unsigned char q4118;  // 0x4118
    unsigned char q411C;  // 0x411C
    unsigned char q4140;  // 0x4140
    unsigned char q4144;  // 0x4144
    unsigned char q4158;  // 0x4158
    unsigned char q415C;  // 0x415C
    unsigned char q4DC4;  // 0x4DC4
    unsigned char q4DC8;  // 0x4DC8
    unsigned char q4DCC;  // 0x4DCC
    unsigned char q7314;  // 0x7314
    unsigned char q7318;  // 0x7318
    unsigned int GetFlag252;
    unsigned int GetFlag98;
    unsigned int GetFlag99;
    unsigned int Items2;
    unsigned int max_entries5;
    unsigned int q00C2;
    unsigned int q0248;
    unsigned int q0249;
    unsigned int q0642;
// --- flat members (END) ---
    DynamicVector * vt00(char a2);
    LoadOptions * QueryInterface(char a2);
    VectorClass_flat * Constructor_VectorClass_FileEntryClass___(char a2);
    bool ddtor(LPCSTR lpFileName);
    char * GetData();
    char AddRef(LPCCH lpMultiByteStr);
    char Read(wchar_t * Destination, int a2);
    char Release(LPCCH lpMultiByteStr, wchar_t * Source);
    char vt01(int a2);
    char vt02(int a2, unsigned int * a3);
    int vt04(unsigned int * a2);
    int vt06(int a2);
    unsigned int vt05(int a2);
    wchar_t * Close();
    wchar_t * Open();
    wchar_t * Seek();
    wchar_t * Write();
    char * GetDataPtr(void);
    gamemd::FileEntryClass ** GetEntries(void);
    void SetExtension(const char *);
    void SetMode(uint32_t);
    static double Cleanup(...);  // C2597 interim stub
    static double Run(...);  // C2597 interim stub
};

} // namespace gamemd
