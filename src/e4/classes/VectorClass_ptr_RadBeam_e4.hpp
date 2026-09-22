// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_ptr_RadBeam {
    void* vfptr;  // minimal E2 declaration
    void Destroy();  // 0x65A1E0
    unsigned int GetItemIndex(int a2);  // 0x65A210
    int Get(int a2);  // 0x65A230
    char Add(int a2);  // 0x65A240
    char Release(int a2, unsigned int * a3);  // 0x65A280
    void Remove();  // 0x65A330
    int GetSize(unsigned int * a2);  // 0x65A360
    unsigned int GetCapacity(int a2);  // 0x65A3A0
    char SetCapacity(int a2, unsigned int * a3);  // 0x65A3C0
    int FindItemIndex(unsigned int * a2);  // 0x65A470
    VectorClass * QueryInterface(unsigned int * Block, char a2);  // 0x65A4A0
    DynamicVector * Constructor_VectorClass_RadBeam___(unsigned int * Block, char a2);  // 0x65A4F0
};
} // namespace gamemd
