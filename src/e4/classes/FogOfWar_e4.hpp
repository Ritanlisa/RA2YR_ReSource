// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct MapClass;  // fix_fwd_type_supply

struct FogOfWar {
#pragma pack(push, 1)  // X60: binary-packed layout
    char __pad_0[1181];  // 0x0
    unsigned char q49D;  // 0x49D
    char __pad_49E[3438];  // 0x49E
    unsigned int u32_120C;  // 0x120C
    char __pad_1210[12];  // 0x1210
    unsigned int u32_121C;  // 0x121C
    MapClass * ptr_1220;  // 0x1220
    char __pad_1224[52];  // 0x1224
    MapClass * ptr_1258;  // 0x1258
    unsigned int u32_125C;  // 0x125C
    unsigned int u32_1260;  // 0x1260
    unsigned int u32_1264;  // 0x1264
    char __pad_1268[1];  // 0x1268
    char u32_1269[3];  // 0x1269
    unsigned int u32_126C;  // 0x126C
    unsigned int u32_1270;  // 0x1270
    unsigned int u32_1274;  // 0x1274
    char __pad_1278[528];  // 0x1278
    unsigned int u32_1488;  // 0x1488
    char __pad_148C[4];  // 0x148C
    unsigned int u32_1490;  // 0x1490
    char __pad_1494[8];  // 0x1494
    unsigned int u32_149C;  // 0x149C
    unsigned int u32_14A0;  // 0x14A0
    char __pad_14A4[53];  // 0x14A4
    unsigned int u32_14D9;  // 0x14D9
    char __pad_14DD[2028];  // 0x14DD
    unsigned char u32_1CC9;  // 0x1CC9
    char __pad_1CCA[54];  // 0x1CCA
    unsigned int u32_1D00;  // 0x1D00
    char __pad_1D04[64];  // 0x1D04
    unsigned int u32_1D44;  // 0x1D44
    char __pad_1D48[10984];  // 0x1D48
    int u32_4830;  // 0x4830
    char __pad_4834[11084];  // 0x4834
    unsigned int u32_7380;  // 0x7380
    char __pad_7384[66];  // 0x7384
    unsigned char u32_73C6;  // 0x73C6
    char __pad_73C7[57];  // 0x73C7
    unsigned int u32_7400;  // 0x7400
    char __pad_7404[322];  // 0x7404
    unsigned char u32_7546;  // 0x7546
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    void RevealCell(unsigned int *aP1);  // G57w10-S raw 0x006562D0 IUnknown 占位清除
    int RevealArea(int *a2, int *aP1 = 0, int a1 = 0);
    int RenderCell();
    int Render(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0);  // 0x657ce0
#pragma pack(pop)
};

} // namespace gamemd
