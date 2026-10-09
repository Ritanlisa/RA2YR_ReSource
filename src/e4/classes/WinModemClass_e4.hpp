// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct WinModemClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned int u32_10;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q015;  // 0x15
    unsigned int u32_17;  // 0x17
    unsigned int u32_18;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned int u32_20;  // 0x20
    unsigned char q024;  // 0x24
    unsigned int u32_28;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned char q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned int u32_39;  // 0x39
// --- flat members (END) ---
    AbstractClass * * Dial(const char * a2, unsigned char a3, char * Destination, signed int Count, int a6, int a7, int a8);
    WinModemClass * * LoadTypeData(int a2, char * Str, int a4, WinModemClass * aP4);
    WinModemClass * QueryInterface(char a2);
    int HangUp(int a2);
    int LogCommErrors(int aP1, char a3, int a4, int a5);
    int ReadBytes(unsigned char *a2, int a3);
    int ReadSerial();
    int SaveToINI(const char * NumberOfBytesWritten);
    int WriteSerial(LPCVOID lpBuffer, DWORD aP2);
    int ddtor(int a2);
    int SaveToINI(const char * NumberOfBytesWritten, void * aP);
    unsigned int q000;  // 0x0 (offset-truth supply)
    unsigned char q0083;  // 0x83 (offset-truth supply)
    unsigned char q0146;  // 0x146 (offset-truth supply)
    unsigned char q0242;  // 0x242 (offset-truth supply)
    unsigned int u32_100;  // 0x100 (offset-truth supply)
    unsigned int u32_288;  // 0x288 (offset-truth supply)
    unsigned char u32_51;  // 0x51 (offset-truth supply)
    unsigned int u32_58;  // 0x58 (offset-truth supply)
    unsigned int u32_64;  // 0x64 (offset-truth supply)
    unsigned int u32_68;  // 0x68 (offset-truth supply)
};

} // namespace gamemd
