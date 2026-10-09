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
    char Stream_field_0C[4];  // 0xC
    unsigned int u32_10;  // 0x10
// --- flat members (END) ---
    unsigned int Stream_field_08;  // 0x8 (G42.42q: truth dword compare @0x491cae; was char[4] mis-type)
    void* a2;  // 0x0 (no offset truth)
    int FlushAndReset();
    int GetChecked();
    int ReadIntArray(int a2);
    int WriteIntArray(TechnoTypeClass * aP1);
    char * InitializeBinkAudio(const char *a2, int a3, int a4, int a5, int a6, int a7, int a8);  // G57w10-S raw 0x00759260 IUnknown 占位清除
    static void CopyFromTemplate(Stream * aP1);  // G57w10-S raw 0x007BE640 (was C2597 interim stub)
    int WriteBlock(int a1, int a2, int a3);  // 0x5f1bf0
    int ReadPacket(); // N_fix R5 supply (cache truth)
};

} // namespace gamemd
