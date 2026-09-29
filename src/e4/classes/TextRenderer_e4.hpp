// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

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
// --- flat members (END) ---
    TriggerTypeClass * Destructor(char a2);
    int MeasureBuilding(int a2, ProgressScreenClass * aP2, ProgressScreenClass * aP3, ProgressScreenClass * aP4, char a6);
    unsigned int * Printf(ConvertClass * aP0, size_t BufferCount, ObjectClass * aP2, ConvertClass * aP3, int a2, int a6, int a7, int a8, CampaignScore * aP8);
    void * GetInstance();
    void * MeasureBuilding2();
    void * RenderCentered(int a1, int a2, ObjectClass * aP2, int * a3, wchar_t * Format, char a6, int a7, int _6C, int * a8);
    static double DrawTextA(...);  // C2597 interim stub
    static double m_bits(...);  // C2597 interim stub
    static double m_bmp(...);  // C2597 interim stub
    static double m_font(...);  // C2597 interim stub
    static double m_hdc(...);  // C2597 interim stub
    static double m_old_bmp(...);  // C2597 interim stub
};

} // namespace gamemd
