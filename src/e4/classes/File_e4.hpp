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
    char IsReady(int a2, void *a1 = 0);  // 0x431F10
    AbstractClass * LoadFont(char *Source);  // 0x433990
    char Dispatch(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0);  // 0x4CB920
    unsigned int *  LoadFileHVA(int a2, void *a1 = 0);  // 0x5BD570
    AbstractClass * * ParseFileHVA(int a2);
    File * *  LoadPaletteData(void * a2);  // 0x625AF0
    int  FindByPrefix(char * Str1, unsigned char * a3);  // 0x625DB0
    AbstractClass * *  ParseCSFString(char * Source);  // 0x734990
    unsigned int *  LoadFileVXL(int a2, int a3, void *a1 = 0);  // 0x755CD0
    AbstractClass * *  LoadWDT(void * a2);  // 0x76AC90
    AbstractClass * *  LoadWDTDecompress(int a2, int a3);  // 0x76B0A0
    int ParseAudioFileRIFF();  // 0x7C12B0
    AbstractClass * * ParseFileHVA(int a2, int aP1, int a3);
    char __pad_6[35];  // 0x6 (ml)
    unsigned int q004;  // 0x4 (offset-truth)
    unsigned int u32_30;  // 0x30 (offset-truth)
    unsigned int u32_34;  // 0x34 (offset-truth)
    unsigned char u32_42;  // 0x42 (offset-truth)
    unsigned int u32_E0;  // 0xE0 (offset-truth)
    static double BufferSize(...);  // plateau: C2039/C3861 stub
    static double File_field_0x2(...);  // plateau: C2039/C3861 stub
    static double __pad_0(...);  // plateau: C2039/C3861 stub
    static double __pad_00C(...);  // plateau: C2039/C3861 stub
};
} // namespace gamemd
