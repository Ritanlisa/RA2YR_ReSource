// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct File {
    char __pad_0[2];  // 0x0
    char File_field_0x2[4];  // 0x2
    unsigned short u32_6;  // 0x6
    void * ptr_8;  // 0x8
    char __pad_C[4];  // 0xC
    void * ptr_10;  // 0x10
    char __pad_14[4];  // 0x14
    void * ptr_18;  // 0x18
    char __pad_1C[4];  // 0x1C
    unsigned int q020;  // 0x20
    void * ptr_24;  // 0x24
    void * ptr_28;  // 0x28
    unsigned int q02C;  // 0x2C
    unsigned int u32_30;  // 0x30
    unsigned int u32_34;  // 0x34
    unsigned char u8_38;  // 0x38
    unsigned char u8_39;  // 0x39
    char __pad_3A[2];  // 0x3A
    unsigned int u32_3C;  // 0x3C
    unsigned int q040;  // 0x40
    unsigned int u32_44;  // 0x44
    unsigned char q048;  // 0x48
    char __pad_49[63];  // 0x49
    unsigned int u32_88;  // 0x88
    char __pad_8C[52];  // 0x8C
    unsigned char q0C0;  // 0xC0
    char __pad_C1[191];  // 0xC1
    unsigned char q180;  // 0x180
    char __pad_181[191];  // 0x181
    unsigned char q240;  // 0x240
    char __pad_241[383];  // 0x241
    unsigned char q3C0;  // 0x3C0
    char __pad_3C1[383];  // 0x3C1
    unsigned int q540;  // 0x540
    char __pad_544[464];  // 0x544
    unsigned short u16_714;  // 0x714
    char __pad_716[6];  // 0x716
    unsigned int u32_71C;  // 0x71C
    unsigned int u32_720;  // 0x720
    unsigned int u32_724;  // 0x724
    char __pad_728[8];  // 0x728
    unsigned int u32_730;  // 0x730
    unsigned int u32_734;  // 0x734
    unsigned int u32_738;  // 0x738
// --- flat members (BEGIN) ---
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
};
} // namespace gamemd
