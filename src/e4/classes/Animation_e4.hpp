// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct BuildingClass;  // fix_fwd_type_supply

struct Animation {
// --- flat members (BEGIN) ---
    void* q008;  // 0x8
    bool q00E;  // 0xE
    bool q00F;  // 0xF
    void* q010;  // 0x10
    void* q014;  // 0x14
    void* q018;  // 0x18
    unsigned int q019;  // 0x19
    void* q020;  // 0x20
    void* q024;  // 0x24
    unsigned int u32_30;  // 0x30
    void* q034;  // 0x34
    unsigned int u32_3C;  // 0x3C
    unsigned int u32_44;  // 0x44
    unsigned int q048;  // 0x48
    void* q050;  // 0x50
    void* q054;  // 0x54
    unsigned int u32_60;  // 0x60
    unsigned int u32_80;  // 0x80
    unsigned char q087;  // 0x87
    unsigned int q09B;  // 0x9B
    unsigned int q0AB;  // 0xAB
    unsigned int q0AF;  // 0xAF
    unsigned int u32_D8;  // 0xD8
    unsigned int u32_F4;  // 0xF4
    unsigned int u32_F8;  // 0xF8
    unsigned int u32_110;  // 0x110
    unsigned int q114;  // 0x114
    unsigned int u32_118;  // 0x118
    unsigned char q148;  // 0x148
    unsigned int u32_150;  // 0x150
    unsigned int u32_1A0;  // 0x1A0
    unsigned int u32_200;  // 0x200
    unsigned int u32_20C;  // 0x20C
    unsigned int u32_21C;  // 0x21C
    unsigned int q244;  // 0x244
    unsigned int q248;  // 0x248
    unsigned int u32_268;  // 0x268
    unsigned int u32_269;  // 0x269
    unsigned int u32_26C;  // 0x26C
    unsigned int u32_28C;  // 0x28C
    unsigned int u32_290;  // 0x290
    unsigned int u32_2AC;  // 0x2AC
    unsigned int u32_2BC;  // 0x2BC
    unsigned int u32_2C4;  // 0x2C4
    unsigned char q328;  // 0x328
    unsigned int u32_350;  // 0x350
    unsigned int u32_37C;  // 0x37C
    unsigned int u32_380;  // 0x380
    unsigned int u32_384;  // 0x384
    unsigned char u8_389;  // 0x389
    unsigned int u32_38C;  // 0x38C
    unsigned int u32_390;  // 0x390
    unsigned int u32_394;  // 0x394
    unsigned int u32_398;  // 0x398
    unsigned int u32_39C;  // 0x39C
    unsigned char u8_3A1;  // 0x3A1
    unsigned int u32_3A4;  // 0x3A4
    unsigned int u32_3A8;  // 0x3A8
    unsigned int u32_414;  // 0x414
    unsigned int u32_418;  // 0x418
    unsigned int u32_520;  // 0x520
    unsigned int q524;  // 0x524
    unsigned int q534;  // 0x534
    unsigned int q540;  // 0x540
    unsigned int q580;  // 0x580
    unsigned int q584;  // 0x584
    unsigned int q620;  // 0x620
    unsigned int u32_662;  // 0x662
    unsigned int u32_669;  // 0x669
    unsigned int q684;  // 0x684
    char u32_6EB;  // 0x6EB
    unsigned int u32_6EC;  // 0x6EC
    unsigned int q700;  // 0x700
    unsigned int q708;  // 0x708
    unsigned char q808;  // 0x808
    unsigned int q848;  // 0x848
    unsigned int u32_9A0;  // 0x9A0
    unsigned int u32_9A4;  // 0x9A4
    unsigned int q1344;  // 0x1344
    unsigned int q1408;  // 0x1408
    unsigned char q1558;  // 0x1558
    unsigned int q1568;  // 0x1568
    void* q1574;  // 0x1574
    unsigned int q1618;  // 0x1618
    unsigned int q1668;  // 0x1668
    unsigned int q1800;  // 0x1800
    unsigned int u32_1988;  // 0x1988
    unsigned int u32_19A4;  // 0x19A4
    char u32_1BAC;  // 0x1BAC
    unsigned int u32_1BB0;  // 0x1BB0
    unsigned int q2120;  // 0x2120
    unsigned char q5464;  // 0x5464
    unsigned int q5480;  // 0x5480
    unsigned int q6034;  // 0x6034
    unsigned int q6144;  // 0x6144
    char q7084;  // 0x7084
// --- flat members (END) ---
    BuildingClass * * UpdateBuildingAnimations(void *a1 = 0);
    ObjectClass * * LoadSidebarAnimations(unsigned int * a1, ObjectClass * aP2);
    int GetProgress();
    long long UpdateBobOffset();
    unsigned int q0084;  // 0x84 (offset-truth)
    unsigned int u32_1508;  // 0x1508 (offset-truth)
    unsigned char u32_1642;  // 0x1642 (offset-truth)
    unsigned char u32_16C6;  // 0x16C6 (offset-truth)
    unsigned int u32_1A04;  // 0x1A04 (offset-truth)
    unsigned int u32_1A08;  // 0x1A08 (offset-truth)
    static double q1046(...);  // plateau: C2039/C3861 stub
};

} // namespace gamemd
