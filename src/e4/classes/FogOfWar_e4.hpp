// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct MapClass;  // fix_fwd_type_supply

struct FogOfWar {
// --- flat members (BEGIN) ---
    MapClass * ptr_1220;  // 0x1220
    MapClass * ptr_1258;  // 0x1258
// --- flat members (END) ---
    void RevealCell(unsigned int *aP1);  // G57w10-S raw 0x006562D0 IUnknown 占位清除
    int RevealArea(int *a2, int *aP1 = 0, int a1 = 0);
    int RenderCell();
    int Render(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0);  // 0x657ce0
    unsigned char q49D;  // 0x49D (offset-truth)
    unsigned char u32_1CC9;  // 0x1CC9 (offset-truth)
    unsigned int u32_1D00;  // 0x1D00 (offset-truth)
    unsigned int u32_1D44;  // 0x1D44 (offset-truth)
    unsigned int u32_7380;  // 0x7380 (offset-truth)
    unsigned char u32_73C6;  // 0x73C6 (offset-truth)
    unsigned int u32_7400;  // 0x7400 (offset-truth)
    unsigned char u32_7546;  // 0x7546 (offset-truth)

    unsigned int u32_121C;  // X10 supply (member_lookup)
    unsigned int u32_125C;  // X10 supply (member_lookup)
    unsigned int u32_1260;  // X10 supply (member_lookup)
    unsigned int u32_1264;  // X10 supply (member_lookup)
    unsigned int u32_1269;  // X10 supply (member_lookup)
    unsigned int u32_126C;  // X10 supply (member_lookup)
    unsigned int u32_1270;  // X10 supply (member_lookup)
    unsigned int u32_1274;  // X10 supply (member_lookup)
    unsigned int u32_1488;  // X10 supply (member_lookup)
    unsigned int u32_1490;  // X10 supply (member_lookup)
    unsigned int u32_149C;  // X10 supply (member_lookup)
    unsigned int u32_14A0;  // X10 supply (member_lookup)
    unsigned int u32_14D9;  // X10 supply (member_lookup)
    int u32_4830;  // X10 supply (member_lookup)


    unsigned int u32_120C;  // 0x120C [X55 W3 supply (render vocab)]
};

} // namespace gamemd
