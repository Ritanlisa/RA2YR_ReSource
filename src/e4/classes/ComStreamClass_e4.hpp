// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ComStreamClass {
    unsigned int __pad_0;  // 0x0
    int q004;  // 0x4
    int q008;  // 0x8
    unsigned int q00C;  // 0xC
    int q010;  // 0x10
    int q014;  // 0x14
    unsigned int q018;  // 0x18
    int q01C;  // 0x1C
    int q020;  // 0x20
    int q024;  // 0x24
    int q028;  // 0x28
    int q02C;  // 0x2C
    int q030;  // 0x30
    int q034;  // 0x34
    int q038;  // 0x38
    int q03C;  // 0x3C
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    AbstractClass * * readData();
    LONG AddRef(void *a1);
    int QueryInterface(unsigned int *a2, char **a3, int a4, int a1, int a5);
    int Release(void *a1);
    int Seek(int a2, int a3, int a4, int a1, int a5);
    int Write(int a2, uint8_t *a3, const char *lParam, const char *lParama, int a1, int a4, int a5);
    int ddtor(int a2, int a3, unsigned int a1, int a4, int a5);
    unsigned int * getStreamSize();
    unsigned int * seekToPosition();
    void ** writeData(char a2);
    void flushStream();
};

} // namespace gamemd
