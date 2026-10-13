// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct TriggerTypeClass;  // fix_fwd_type_supply

struct TextRenderer {
// --- flat members (BEGIN) ---

// --- flat members (END) ---
    TriggerTypeClass * Destructor(char a2);
    int MeasureBuilding(int a2, int aP2, int aP3, char aP4, char a6, void *a1 = 0);
    static unsigned int * Printf(ConvertClass * aP0, size_t BufferCount, ObjectClass * aP2, ConvertClass * aP3, int a2, int a6, int a7, int a8, CampaignScore * aP8);
    static void * GetInstance();
    void * MeasureBuilding2(unsigned int *a1, int *a2, int a3, char a4, int aP0, int aP2, int aP3, int a6, int a7, int a8, int aP8);
    int * RenderCentered(int a1, int a2, ObjectClass * aP2, int * a3, wchar_t * Format, char a6, int a7, int _6C, int * a8);
    int * RenderCentered(int a1, int a2, ObjectClass * aP2, int * a3, wchar_t * Format, char a6, int a7, int _6C, int * a8, void * aSD, void * aYellow);
    unsigned char u32_61;  // 0x61 (offset-truth)
    unsigned int u32_70;  // 0x70 (offset-truth)
    unsigned char u32_71;  // 0x71 (offset-truth)
    unsigned int u32_80;  // 0x80 (offset-truth)
    unsigned char u32_86;  // 0x86 (offset-truth)
    unsigned char u32_87;  // 0x87 (offset-truth)

    unsigned int u32_14;  // X10 supply (member_lookup)
    unsigned int u32_1A;  // X10 supply (member_lookup)
    unsigned int u32_1B;  // X10 supply (member_lookup)
};

} // namespace gamemd
