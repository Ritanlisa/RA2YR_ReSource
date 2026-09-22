// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_Wstring {
    void* vfptr;  // minimal E2 declaration
    char ** Clear(char ** a2, int a3);  // 0x69C580
    char AddRef(int a2);  // 0x69C970
    char Release(int a2, unsigned int * a3);  // 0x69C9C0
    void ddtor();  // 0x69CB00
    int GetSize(const char ** a2);  // 0x69CB50
    unsigned int GetCapacity(int a2);  // 0x69CBA0
    VectorClass * QueryInterface(unsigned int * Block, char a2);  // 0x69D4B0
    bool SetCapacity(const char ** a2);  // 0x7B4860
};
} // namespace gamemd
