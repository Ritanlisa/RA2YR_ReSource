// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct File {
// --- flat members (BEGIN) ---
    AbstractClass * ptr_8;  // 0x8
    AbstractClass * ptr_10;  // 0x10
    AbstractClass * ptr_18;  // 0x18
    AbstractClass * ptr_24;  // 0x24
    AbstractClass * ptr_28;  // 0x28
    unsigned char tail_2D;  // 0x2D
// --- flat members (END) ---
    char IsReady(int a2, void *a2_1 = 0);  // 0x431F10
    AbstractClass * LoadFont(char *Source);  // 0x433990
    char Dispatch(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0);  // 0x4CB920
    unsigned int * LoadFileHVA(int a2, void *a2_1 = 0);  // 0x5BD570
    AbstractClass * * ParseFileHVA(int a2);
    File * * LoadPaletteData(unsigned short *aP1);  // 0x625AF0
    int FindByPrefix(char *Str1, unsigned char *a3);  // 0x625DB0
    AbstractClass * *  ParseCSFString(char * Source);  // 0x734990
    unsigned int * LoadFileVXL(int a2, int a3, void *a3_1 = 0);  // 0x755CD0
    AbstractClass * * LoadWDT(ObjectClass * aP1);  // 0x76AC90
    AbstractClass * * LoadWDTDecompress(int aP1, int a3);  // 0x76B0A0
    int ParseAudioFileRIFF();  // 0x7C12B0
    AbstractClass * * ParseFileHVA(int a2, int aP1, int a3);
    char __pad_6[35];  // 0x6 (ml)
unsigned int q004;  // 0x4 [X35-L7 kind=unsigned int]
    AbstractClass* u32_30;  // 0x30 (offset-truth) [X30:type_map]
    unsigned int u32_34;  // 0x34 (offset-truth)
    unsigned char u32_42;  // 0x42 (offset-truth)
    unsigned int u32_E0;  // 0xE0 (offset-truth)

    unsigned char File_field_0x2[4];  /* char[4] */  // X10 supply (member_lookup)
    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    unsigned char __pad_00C;  // X10 supply (csp_canon_members)
    unsigned char __pad_014;  // X10 supply (csp_canon_members)
    unsigned char __pad_01C;  // X10 supply (csp_canon_members)
    unsigned char __pad_02C;  // X10 supply (csp_canon_members)
    unsigned char __pad_6B0;  // X10 supply (member_lookup)
    unsigned int q020;  // X10 supply (member_lookup)
    AbstractClass * q040;  // X10 supply (member_lookup)
    unsigned char q048;  // X10 supply (member_lookup)
    unsigned int q050;  // X10 supply (member_lookup)
    unsigned int u32_3C;  // X10 supply (member_types)
    unsigned int u32_44;  // X10 supply (member_lookup)
    unsigned int u32_71C;  // X10 supply (member_lookup)
    unsigned int u32_720;  // X10 supply (member_lookup)
    unsigned int u32_724;  // X10 supply (member_lookup)
    unsigned int u32_730;  // X10 supply (member_lookup)
    unsigned int u32_734;  // X10 supply (member_lookup)
    unsigned int u32_738;  // X10 supply (member_lookup)
    unsigned int u32_88;  // X10 supply (member_lookup)
    unsigned int u32_E4;  // X10 supply (member_types)
    unsigned int BufferSize;  // [X30:default]
    int __pad_0;  // 0x0 [X30:type_map]
    unsigned int ptr_80;  // 0x80 [X30:default]


    unsigned int u32_98;  // 0x98 [X55 W3 supply (render vocab)]
    unsigned char u8_38;  // 0x38 [X55 W3 supply (render vocab)]
    unsigned char u8_39;  // 0x39 [X55 W3 supply (render vocab)]
};
} // namespace gamemd
