// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct TriggerTypeClass;  // fix_fwd_type_supply

struct TextRenderer {
    unsigned char __pad_000;  // 0x0
    char __pad_1[3];  // 0x1
    int TextRenderer_field_0x4;  // 0x4
    int TextRenderer_field_0x8;  // 0x8
    int TextRenderer_field_0xC;  // 0xC
    char __pad_10[4];  // 0x10
    unsigned int u32_14;  // 0x14
    char __pad_18[2];  // 0x18
    unsigned char u32_1A;  // 0x1A
    unsigned char u32_1B;  // 0x1B
    char __pad_1C[52];  // 0x1C
    unsigned int u32_50;  // 0x50
    int TextRenderer_field_0x54;  // 0x54
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    TriggerTypeClass * Destructor(char a2);
    int MeasureBuilding(int a2, int aP2, int aP3, char aP4, char a6, void *a6_1 = 0);
    static unsigned int * Printf(ConvertClass * aP0, size_t BufferCount, ObjectClass * aP2, ConvertClass * aP3, int a2, int a6, int a7, int a8, CampaignScore * aP8);
    static void * GetInstance();
    void * MeasureBuilding2(unsigned int *a1, int *a2, int a3, char a4, int aP0, int aP2, int aP3, int a6, int a7, int a8, int aP8);
    int * RenderCentered(int a1, int a2, ObjectClass * aP2, int * a3, wchar_t * Format, char a6, int a7, int _6C, int * a8);
    int * RenderCentered(int a1, int a2, ObjectClass * aP2, int * a3, wchar_t * Format, char a6, int a7, int _6C, int * a8, void * aSD, void * aYellow);
};

} // namespace gamemd
