// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct MapClass;  // fix_fwd_type_supply
struct AbstractClass;  // fix_fwd_type_supply

struct FogOfWar {
// --- flat members (BEGIN) ---
    unsigned int u32_1CC;  // 0x1CC
    unsigned int u32_1D0;  // 0x1D0
    unsigned int q460;  // 0x460
    unsigned int q464;  // 0x464
    unsigned int q487;  // 0x487
    char q488[4];  // 0x488
    unsigned int u32_738;  // 0x738
    unsigned int u32_73C;  // 0x73C
    unsigned int u32_740;  // 0x740
    unsigned int u32_754;  // 0x754
    unsigned int u32_758;  // 0x758
    unsigned int u32_75C;  // 0x75C
    unsigned int u32_760;  // 0x760
    unsigned int u32_834;  // 0x834
    unsigned int u32_838;  // 0x838
    unsigned int u32_83C;  // 0x83C
    unsigned int u32_840;  // 0x840
    unsigned int u32_854;  // 0x854
    unsigned int q1120;  // 0x1120
    unsigned int q1124;  // 0x1124
    char q1160[4];  // 0x1160
    unsigned int u32_121C;  // 0x121C
    unsigned int q1220;  // 0x1220
    MapClass * ptr_1258;  // 0x1258
    unsigned int u32_125C;  // 0x125C
    unsigned int u32_1260;  // 0x1260
    unsigned int u32_1264;  // 0x1264
    unsigned char u8_1269;  // 0x1269
    unsigned int u32_126C;  // 0x126C
    unsigned int u32_1270;  // 0x1270
    char u32_1274;  // 0x1274
    float u32_1488;  // 0x1488
    int u32_1490;  // 0x1490
    unsigned int u32_149C;  // 0x149C
    unsigned int u32_14A0;  // 0x14A0
    unsigned char u8_14D9;  // 0x14D9
    unsigned int q1848;  // 0x1848
    unsigned int q1880;  // 0x1880
    unsigned int q4384;  // 0x4384
    unsigned int q4388;  // 0x4388
    char q4448[4];  // 0x4448
    unsigned int q4640;  // 0x4640
    unsigned int q4700;  // 0x4700
    unsigned int q4704;  // 0x4704
    unsigned int q4708;  // 0x4708
    unsigned int q4720;  // 0x4720
    char q4724;  // 0x4724
    unsigned int u32_4830;  // 0x4830
    unsigned int u32_4970;  // 0x4970
    int q5264;  // 0x5264
    unsigned int q5280;  // 0x5280
    unsigned int u32_7380;
    unsigned int u32_73C6;
    unsigned int u32_7400;
    unsigned int u32_7546;
    unsigned int u32_7604;
    void* ptr_1220;
// --- flat members (END) ---
    AbstractClass * RevealCell(IUnknown * aP1);
    MapClass * * RevealArea(int *a2, int aP1, int a1);
    int RenderCell();
    int Render();  // 0x657ce0
};

} // namespace gamemd
