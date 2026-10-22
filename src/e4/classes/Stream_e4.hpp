// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct StreamClass;  // fix_fwd_type_supply

struct Stream {
#pragma pack(push, 1)  // X60: binary-packed layout
    StreamClass * m_Stream;  // 0x0
    unsigned char Stream_field_04;  // 0x4
    char __pad_5[3];  // 0x5
    int Stream_field_08;  // 0x8
    int Stream_field_0C;  // 0xC
    int Stream_field_10;  // 0x10
    unsigned int u32_14;  // 0x14
    char __pad_18[24];  // 0x18
    unsigned int u32_30;  // 0x30
    char __pad_34[4];  // 0x34
    unsigned int u32_38;  // 0x38
    unsigned int u32_3C;  // 0x3C
    char __pad_40[16];  // 0x40
    unsigned int q050;  // 0x50
    char __pad_54[4];  // 0x54
    unsigned int u32_58;  // 0x58
    char __pad_5C[16];  // 0x5C
    unsigned int u32_6C;  // 0x6C
    unsigned char u32_70;  // 0x70
    unsigned int u8_71;  // 0x71
    char __pad_75[43];  // 0x75
    unsigned int q0A0;  // 0xA0
    char __pad_A4[116];  // 0xA4
    unsigned int q118;  // 0x118
    char __pad_11C[16];  // 0x11C
    unsigned int q12C;  // 0x12C
    char __pad_130[72];  // 0x130
    unsigned int u32_178;  // 0x178
    unsigned int u32_17C;  // 0x17C
    unsigned int u32_180;  // 0x180
    unsigned int u32_184;  // 0x184
    unsigned int u32_188;  // 0x188
    char __pad_18C[4];  // 0x18C
    unsigned int u32_190;  // 0x190
    unsigned int u32_194;  // 0x194
    unsigned int u32_198;  // 0x198
    unsigned int u32_19C;  // 0x19C
    unsigned int u32_1A0;  // 0x1A0
    unsigned int u32_1A4;  // 0x1A4
    unsigned int u32_1A8;  // 0x1A8
    unsigned int u32_1AC;  // 0x1AC
    unsigned int u32_1B0;  // 0x1B0
    char __pad_1B4[4];  // 0x1B4
    unsigned int u32_1B8;  // 0x1B8
    unsigned int u32_1BC;  // 0x1BC
    unsigned int u32_1C0;  // 0x1C0
    unsigned int u32_1C4;  // 0x1C4
    char __pad_1C8[12];  // 0x1C8
    unsigned int u32_1D4;  // 0x1D4
    char __pad_1D8[12];  // 0x1D8
    unsigned int u32_1E4;  // 0x1E4
    char __pad_1E8[20];  // 0x1E8
    unsigned int u32_1FC;  // 0x1FC
    char __pad_200[8];  // 0x200
    unsigned int q208;  // 0x208
    char __pad_20C[596];  // 0x20C
    unsigned char q460;  // 0x460
    char __pad_461[79];  // 0x461
    unsigned int q4B0;  // 0x4B0
    char __pad_4B4[80];  // 0x4B4
    unsigned int u32_504;  // 0x504
    unsigned int u32_508;  // 0x508
    char __pad_50C[4];  // 0x50C
    unsigned int u32_510;  // 0x510
    unsigned char u32_514;  // 0x514
    char __pad_515[3];  // 0x515
    unsigned int u32_518;  // 0x518
    unsigned int u32_51C;  // 0x51C
    unsigned int u32_520;  // 0x520
    unsigned int u32_524;  // 0x524
    unsigned char u32_528;  // 0x528
    char __pad_529[3];  // 0x529
    unsigned char u32_52C;  // 0x52C
    char __pad_52D[3];  // 0x52D
    char __pad_530[16];  // 0x530
    unsigned int u32_540;  // 0x540
    unsigned int u32_544;  // 0x544
    unsigned int u32_548;  // 0x548
    unsigned int u32_54C;  // 0x54C
    unsigned char u32_550;  // 0x550
    unsigned char u32_551;  // 0x551
    char __pad_552[2];  // 0x552
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int FlushAndReset();
    int GetChecked();
    int ReadIntArray(int a2);
    int WriteIntArray(TechnoTypeClass * aP1);
    char * InitializeBinkAudio(const char *a2, int a3, int a4, int a5, int a6, int a7, int a8);  // G57w10-S raw 0x00759260 IUnknown 占位清除
    static void CopyFromTemplate(Stream * aP1);
    int  WriteBlock(int a2, int a3, int a4, void *a1 = 0);  // 0x5f1bf0
    int ReadPacket(void *a1 = 0);
#pragma pack(pop)
};

} // namespace gamemd
