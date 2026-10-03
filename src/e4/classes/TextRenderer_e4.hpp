// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct TriggerTypeClass;  // fix_fwd_type_supply

struct TextRenderer {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    void* q004;  // 0x4
    unsigned int u32_8;  // 0x8
    void* q00C;  // 0xC
    unsigned char q010;  // 0x10
    void* q018;  // 0x18
    unsigned int u32_24;  // 0x24
    unsigned int u32_2C;  // 0x2C
    unsigned char q034;  // 0x34
    unsigned int q040;  // 0x40
    unsigned int q044;  // 0x44
    unsigned int u32_50;  // 0x50
    void* q054;  // 0x54
    unsigned int u32_61;
    unsigned int u32_70;
    unsigned int u32_71;
    unsigned int u32_80;
    unsigned int u32_86;
    unsigned int u32_87;
    unsigned int *__pad_4C;
// --- flat members (END) ---
    TriggerTypeClass * Destructor(char a2);
    int MeasureBuilding(int a2, int aP2, int aP3, char aP4, char a6);
    static unsigned int * Printf(ConvertClass * aP0, size_t BufferCount, ObjectClass * aP2, ConvertClass * aP3, int a2, int a6, int a7, int a8, CampaignScore * aP8);
    static void * GetInstance();
    void * MeasureBuilding2(unsigned int *a1, int *a2, int a3, char a4, int aP0, int aP2, int aP3, int a6, int a7, int a8, int aP8);
    int * RenderCentered(int a1, int a2, ObjectClass * aP2, int * a3, wchar_t * Format, char a6, int a7, int _6C, int * a8);
    static double DrawTextA(...);  // C2597 interim stub
    static double m_bits(...);  // C2597 interim stub
    static double m_bmp(...);  // C2597 interim stub
    static double m_font(...);  // C2597 interim stub
    static double m_hdc(...);  // C2597 interim stub
    static double m_old_bmp(...);  // C2597 interim stub
    int * RenderCentered(int a1, int a2, ObjectClass * aP2, int * a3, wchar_t * Format, char a6, int a7, int _6C, int * a8, void * aSD, void * aYellow);
};

} // namespace gamemd
