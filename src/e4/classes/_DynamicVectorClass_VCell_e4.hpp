// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct _DynamicVectorClass_VCell {
    char __pad_0[1];  // 0x0
    char m_1[4];  // 0x1
    char __pad_5[3];  // 0x5
    int m_8;  // 0x8
    int m_C;  // 0xC
    int m_10;  // 0x10
    DynamicVector * QueryInterface(unsigned int * Block, char a2);
    int Read(unsigned short * a2, void *a2_2);
    unsigned int Write(int a2);
    wchar_t * ddtor();
};

} // namespace gamemd
