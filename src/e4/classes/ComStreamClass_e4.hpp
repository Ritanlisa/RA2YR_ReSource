// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ComStreamClass {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned char q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q03C;  // 0x3C
// --- flat members (END) ---
    AbstractClass * * readData();
    LONG AddRef(void *a1);
    int QueryInterface(unsigned int *a2, char **a3, int a4, int a1, int a5);
    int Release(void *a1);
    int Seek(int a2, int a3, int a4, int a1, int a5);
    int Write(int a2, unsigned __int8 *a3, const char *lParam, const char *lParama, int a1, int a4, int a5);
    int ddtor(int a2, int a3, unsigned int a1, int a4, int a5);
    unsigned int * getStreamSize();
    unsigned int * seekToPosition();
    void ** writeData(char a2);
    void flushStream();
};

} // namespace gamemd
