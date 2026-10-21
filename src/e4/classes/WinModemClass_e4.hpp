// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct WinModemClass {
    void* ptr_0;  // 0x0
    unsigned int __pad_004;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned int u32_C;  // 0xC
    int u32_10;  // 0x10
    int q014;  // 0x14
    int u32_18;  // 0x18
    unsigned int u32_1C;  // 0x1C
    unsigned int u32_20;  // 0x20
    unsigned int WinModemClass_field_0x24;  // 0x24
    int WinModemClass_field_0x28;  // 0x28
    int WinModemClass_field_0x2C;  // 0x2C
    int WinModemClass_field_0x30;  // 0x30
    int WinModemClass_field_0x34;  // 0x34
    int WinModemClass_field_0x38;  // 0x38
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int Dial(const char * a2, unsigned char a3, char * Destination, signed int Count, int a6, int a7, int a8);
    int LoadTypeData(int a2, char * Str, int a4, WinModemClass * aP4);
    WinModemClass * QueryInterface(char a2);
    int HangUp(int a2);
    int LogCommErrors(int aP1, char a3, int a4, int a5);
    int ReadBytes(unsigned char *a2, int a3);
    int ReadSerial();
    int SaveToINI(const char * NumberOfBytesWritten);
    int WriteSerial(LPCVOID lpBuffer, DWORD aP2);
    int ddtor(int a2);
    int SaveToINI(const char * NumberOfBytesWritten, void * aP);
};

} // namespace gamemd
