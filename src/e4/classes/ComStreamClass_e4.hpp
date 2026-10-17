// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ComStreamClass {
    unsigned int __pad_0;  // 0x0
    int q004;  // 0x4
    int ComStreamClass_field_0x08;  // 0x8
    unsigned int ComStreamClass_field_0x0C;  // 0xC
    int ComStreamClass_field_0x10;  // 0x10
    int ComStreamClass_field_0x14;  // 0x14
    unsigned int ComStreamClass_field_0x18;  // 0x18
    int ComStreamClass_field_0x1C;  // 0x1C
    int ComStreamClass_field_0x20;  // 0x20
    int ComStreamClass_field_0x24;  // 0x24
    int ComStreamClass_field_0x28;  // 0x28
    int ComStreamClass_field_0x2C;  // 0x2C
    int ComStreamClass_field_0x30;  // 0x30
    int ComStreamClass_field_0x34;  // 0x34
    int ComStreamClass_field_0x38;  // 0x38
    int ComStreamClass_field_0x3C;  // 0x3C
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
