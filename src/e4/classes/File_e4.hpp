// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct File {
    char __pad_0[2];  // 0x0
    unsigned char File_field_0x2[4];  // 0x2
    char __pad_6[35];  // 0x6
    char File_field_0x29[4];  // 0x29
    char tail_2D[3];  // 0x2D
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
