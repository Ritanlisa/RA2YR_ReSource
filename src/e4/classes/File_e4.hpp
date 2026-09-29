// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct File {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned int u32_4;  // 0x4
    unsigned int u16_6;  // 0x6
    unsigned int q8;  // 0x8
    unsigned int u32_C;  // 0xC
    AbstractClass * ptr_10;  // 0x10
    unsigned int u32_14;  // 0x14
    AbstractClass * ptr_18;  // 0x18
    unsigned int u32_1C;  // 0x1C
    unsigned int q020;  // 0x20
    AbstractClass * ptr_24;  // 0x24
    AbstractClass * ptr_28;  // 0x28
    unsigned int u32_2C;  // 0x2C
    unsigned char tail_2D;  // 0x2D
    unsigned int BufferSize;
    unsigned int File_field_0x2;
    unsigned int __pad_0;
    unsigned int __pad_6;
    unsigned int u32_42;
    void* ptr_8;
// --- flat members (END) ---
    char IsReady(int a2);  // 0x431F10
    unsigned int * LoadFont();  // 0x433990
    short Dispatch();  // 0x4CB920
    unsigned int * LoadFileHVA(ObjectClass * aP1);  // 0x5BD570
    AbstractClass * * ParseFileHVA(int a2);  // 0x5BD5C0
    u_short * LoadPaletteData(ObjectClass * aP1);  // 0x625AF0
    bool FindByPrefix(char * Str1,  unsigned char * a3);    // 0x625DB0
    int ParseCSFString();  // 0x734990
    unsigned int * LoadFileVXL(ObjectClass * aP1,  void* aP2);    // 0x755CD0
    WDTState * LoadWDT(ObjectClass * aP1);  // 0x76AC90
    char LoadWDTDecompress(CCINIClass * aP1,  int a3);    // 0x76B0A0
    int ParseAudioFileRIFF();  // 0x7C12B0
};
} // namespace gamemd
