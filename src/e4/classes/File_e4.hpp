// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct File {
    void* vfptr;  // minimal E2 declaration
    char IsReady(int a2);  // 0x431F10
    unsigned int * LoadFont();  // 0x433990
    short Dispatch();  // 0x4CB920
    unsigned int * LoadFileHVA(ObjectClass * aP1);  // 0x5BD570
    int ParseFileHVA(int a2);  // 0x5BD5C0
    u_short * LoadPaletteData(ObjectClass * aP1);  // 0x625AF0
    bool FindByPrefix(char * Str1, unsigned char * a3);  // 0x625DB0
    int ParseCSFString();  // 0x734990
    unsigned int * LoadFileVXL(ObjectClass * aP1, SomeVoxelCache * aP2);  // 0x755CD0
    WDTState * LoadWDT(ObjectClass * aP1);  // 0x76AC90
    char LoadWDTDecompress(CCINIClass * aP1, int a3);  // 0x76B0A0
    int ParseAudioFileRIFF();  // 0x7C12B0
};
} // namespace gamemd
