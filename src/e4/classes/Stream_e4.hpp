// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct StreamClass;  // fix_fwd_type_supply

struct Stream {
// --- flat members (BEGIN) ---
    StreamClass* m_Stream;  // 0x0
    char Stream_field_04[4];  // 0x4
    unsigned int Stream_field_08;  // 0x8 (G42.42q: truth dword compare @0x491cae; was char[4] mis-type)
    unsigned int Stream_field_0C;  // 0xC
    unsigned int u32_10;  // 0x10
    unsigned int Stream_field_10;
    unsigned int u32_19C;
    unsigned int u32_1A4;
    unsigned int u32_1A8;
    unsigned int u32_1D4;

    void* a2;  // 0x0 (no offset truth)
// --- flat members (END) ---
    int FlushAndReset();
    int GetChecked();
    int ReadIntArray(int a2);
    int WriteIntArray(TechnoTypeClass * aP1);
    void * InitializeBinkAudio(const char * a1, IUnknown * aP2, int a4, int a5, IUnknown * aP5, int a7, int a8);
    static double CopyFromTemplate(...);  // C2597 interim stub
    int WriteBlock(int a1, int a2, int a3);  // 0x5f1bf0
    int ReadPacket(); // N_fix R5 supply (cache truth)
    BlowStraw * u32_58;  // 0x58
    unsigned char u32_54;  // 0x54
    void * u32_3C;  // 0x3C
    unsigned int u32_38;  // 0x38
};

} // namespace gamemd
