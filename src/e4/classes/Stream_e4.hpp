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
    unsigned int u32_1450;  // 0x1450 (offset-truth)
    unsigned int u32_14A0;  // 0x14A0 (offset-truth)
    unsigned int u32_14B0;  // 0x14B0 (offset-truth)
    unsigned int u32_1540;  // 0x1540 (offset-truth)
    unsigned int u32_1544;  // 0x1544 (offset-truth)
    unsigned int u32_178;  // 0x178 (offset-truth)
    unsigned int u32_17C;  // 0x17C (offset-truth)
    unsigned int u32_180;  // 0x180 (offset-truth)
    unsigned int u32_184;  // 0x184 (offset-truth)
    unsigned int u32_188;  // 0x188 (offset-truth)
    unsigned int u32_190;  // 0x190 (offset-truth)
    unsigned int u32_194;  // 0x194 (offset-truth)
    unsigned int u32_198;  // 0x198 (offset-truth)
    unsigned int u32_19C;  // 0x19C (offset-truth)
    unsigned int u32_1A0;  // 0x1A0 (offset-truth)
    unsigned int u32_1A4;  // 0x1A4 (offset-truth)
    unsigned int u32_1A8;  // 0x1A8 (offset-truth)
    unsigned int u32_1AC;  // 0x1AC (offset-truth)
    unsigned int u32_1B0;  // 0x1B0 (offset-truth)
    unsigned int u32_1B8;  // 0x1B8 (offset-truth)
    unsigned int u32_1BC;  // 0x1BC (offset-truth)
    unsigned int u32_1C0;  // 0x1C0 (offset-truth)
    unsigned int u32_1C4;  // 0x1C4 (offset-truth)
    unsigned int u32_1D4;  // 0x1D4 (offset-truth)
    unsigned int u32_1E4;  // 0x1E4 (offset-truth)
    unsigned int u32_1FC;  // 0x1FC (offset-truth)
    unsigned int u32_504;  // 0x504 (offset-truth)
    unsigned int u32_508;  // 0x508 (offset-truth)
    unsigned int u32_510;  // 0x510 (offset-truth)
    unsigned int u32_518;  // 0x518 (offset-truth)
    unsigned int u32_51C;  // 0x51C (offset-truth)
    unsigned int u32_520;  // 0x520 (offset-truth)
    unsigned int u32_524;  // 0x524 (offset-truth)
    unsigned int u32_52C;  // 0x52C (offset-truth)
    unsigned int u32_540;  // 0x540 (offset-truth)
    unsigned int u32_544;  // 0x544 (offset-truth)
    unsigned int u32_548;  // 0x548 (offset-truth)
    unsigned int u32_54C;  // 0x54C (offset-truth)
};

} // namespace gamemd
