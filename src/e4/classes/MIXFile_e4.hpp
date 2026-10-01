// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct MixFile {
    unsigned int Debug;
    void* vfptr;  // minimal E2 declaration
    MixFileClass * * LoadAll();  // 0x530460
    AbstractClass * * LoadSide();  // 0x534FA0
    unsigned int *  Load(void * aP1, void *a1 = 0, void *a2 = 0, void *a3 = 0);  // 0x627590
};
} // namespace gamemd
