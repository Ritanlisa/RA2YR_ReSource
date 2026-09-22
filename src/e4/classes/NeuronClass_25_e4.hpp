// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct NeuronClass_25 {
    void* vfptr;  // minimal E2 declaration
    int Update(int a2);  // 0x43AB20
    char AddRef(int a2);  // 0x43AB30
    char Release(int a2, unsigned int * a3);  // 0x43AB70
    void ddtor();  // 0x43AC20
    int Activate(unsigned int * a2);  // 0x43AC50
    VectorClass * QueryInterface(char a2);  // 0x43ACB0
    unsigned int Fire(int a2);  // 0x43AC90
};
} // namespace gamemd
