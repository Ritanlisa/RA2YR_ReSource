// GENERATED flat e4 class (G42.34 supply -- canon layout, size unknown)
// Source: src/csp_canon/classes.hpp Base64Straw (CSP export)
#pragma once

namespace gamemd {

struct Base64Straw {
// --- flat members (canon layout, BEGIN) ---
    void* vtable1;  // 0x0
    char q004[4];  /* unsigned char */  // 0x4
    char q008[4];  /* unsigned char */  // 0x8
    void* q00C;  // 0xC
    char q010[4];  /* unsigned char */  // 0x10
    void* q014;  // 0x14 (BlowStraw*)
    void* q018;  // 0x18
    char q01C[4];  /* unsigned char */  // 0x1C
    void* q020;  // 0x20 (BlowStraw*)
    void* q024;  // 0x24
// --- flat members (END) ---
    // supplied-bodies bodies index a raw buffer through this view; e4 flat
    // convention (Count_e4.hpp): unsigned int *__pad_0
    unsigned int *__pad_0;
};

} // namespace gamemd
