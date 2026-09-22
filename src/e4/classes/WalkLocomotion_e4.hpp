// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct WalkLocomotion {
    void* vfptr;  // minimal E2 declaration
    char MoveTo(IUnknown * aP1, int aP3);  // 0x6A01A0
    char ProcessCollision(char a2);  // 0x6A05F0
    char Update(unsigned char * a2, int a3, int a4);  // 0x6A1C80
    unsigned int * TransformCoords(ObjectClass * aP1, IUnknown * aP2, ObjectClass * aP3);  // 0x6A3DB0
};
} // namespace gamemd
