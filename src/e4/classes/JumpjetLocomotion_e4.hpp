// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct JumpjetLocomotion {
    void* vfptr;  // minimal E2 declaration
    char MoveTo(IUnknown * aP1, int aP3);  // 0x4B0AD0
    char ProcessCollision(char a2);  // 0x4B0F20
    char Update(unsigned char * a2, int a3, int a4);  // 0x4B2630
    unsigned int * TransformCoords(IUnknown * aP1, IUnknown * aP2, ObjectClass * aP3);  // 0x4B4780
    char Land();  // 0x54CA90
    int UpdateFacing();  // 0x54D0F0
};
} // namespace gamemd
