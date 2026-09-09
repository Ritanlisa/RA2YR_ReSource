// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct Movie {
    void* vfptr;  // minimal E2 declaration
    char GetSectionID(unsigned int * a2);  // 0x49BC80
    char GetState(CCINIClass * aP1);  // 0x49BCC0
    char SetupScreen(CCINIClass * aP1);  // 0x49CAF0
    char GetSection(CCINIClass * aP1, CCINIClass * aP2);  // 0x49E3B0
    void Play(CCINIClass * aP0, int a2, CCINIClass * aP2, IUnknown * aP3, char a5, char a6, char a7);  // 0x5BED40
    char Update();  // 0x7209D0
    unsigned int SelectNextBuildableType(AnimClass * aP1);  // 0x720A80
};
} // namespace gamemd
