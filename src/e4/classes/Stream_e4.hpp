// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct StreamClass;  // fix_fwd_type_supply

struct Stream {
// --- flat members (BEGIN) ---
    StreamClass* m_Stream;  // 0x0
    char Stream_field_04[4];  // 0x4
    char Stream_field_08[4];  // 0x8
    bool q00A;  // 0xA
    unsigned int Stream_field_0C;  // 0xC
    unsigned int u32_10;  // 0x10
    unsigned int Stream_178;
    unsigned int Stream_field_10;
    unsigned int q070;
    unsigned int q1365;
    unsigned int q1B8;
    unsigned int q508;
    unsigned int q518;
    unsigned int q52C;
    unsigned int u32_178;
    unsigned int u32_17C;
    unsigned int u32_184;
    unsigned int u32_188;
    unsigned int u32_190;
    unsigned int u32_194;
    unsigned int u32_198;
    unsigned int u32_19C;
    unsigned int u32_1A4;
    unsigned int u32_1A8;
    unsigned int u32_1AC;
    unsigned int u32_1BC;
    unsigned int u32_1C4;
    unsigned int u32_1D4;
    unsigned int u32_1E4;
    unsigned int u32_1FC;
    unsigned int u32_504;
    unsigned int u32_510;
    unsigned int u32_51C;
    unsigned int u32_520;
    unsigned int u32_524;
    unsigned int u32_540;
    unsigned int u32_544;
    unsigned int u32_548;
    unsigned int u32_54C;
    unsigned int CopyFromTemplate;
// --- flat members (END) ---
    int FlushAndReset();
    int GetChecked();
    int ReadIntArray(int a2);
    int WriteIntArray(TechnoTypeClass * aP1);
    void * InitializeBinkAudio(const char * a1, IUnknown * aP2, int a4, int a5, IUnknown * aP5, int a7, int a8);
    static double CopyFromTemplate(...);  // C2597 interim stub
    int WriteBlock(int a2, int a3, int a4);  // 0x5f1bf0
};

} // namespace gamemd
