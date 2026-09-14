// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct BSurface {
    void* vfptr;  // minimal E2 declaration
    unsigned int * Construct(int a2, int a3, int a4, int a5);  // 0x410CE0
    bool CreateTripleBuffer();  // 0x7B8C60
    unsigned int * ConstructEx(int a2, int a3, int a4, int a5);  // 0x7BC970
    int GetBytesPerPixel();  // 0x411630
    int GetPitch();  // 0x411640
    BSurface * ScalarDtor(char a2);  // 0x411650
};
} // namespace gamemd
