// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ScrollClass {
    void * ptr_0;  // 0x0
    int m_ScrollY;  // 0x4
    int m_MaxX;  // 0x8
    char m_MaxY[4];  // 0xC
    char __pad_10[21768];  // 0x10
    unsigned int u32_5518;  // 0x5518
    char __pad_551C[44];  // 0x551C
    unsigned int u32_5548;  // 0x5548
    unsigned char u8_554C;  // 0x554C
    char __pad_554D[3];  // 0x554D
    unsigned int u32_5550;  // 0x5550
    unsigned int u32_5554;  // 0x5554
    unsigned char u8_5558;  // 0x5558
    unsigned char u8_5559;  // 0x5559
    unsigned char u8_555A;  // 0x555A
    char __pad_555B[1];  // 0x555B
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    char * Read(char * Block, char a2, void *a3 = 0);
    int Scroll(int * a1, MouseClass * aP2);
};

} // namespace gamemd
