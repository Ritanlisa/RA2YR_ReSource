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
    unsigned int q0080;
    unsigned int q0146;
    unsigned int q0242;
    unsigned int q060;
    unsigned int q068;
    unsigned int u32_100;
    unsigned int u32_180;
    unsigned int u32_288;
    unsigned int u32_58;
    unsigned char u8_51;
    unsigned int WinModemClass_field_0x04;
    unsigned int WinModemClass_field_0x08;
    unsigned int WinModemClass_field_0x0C;
    unsigned int WinModemClass_field_0x10;
    unsigned int WinModemClass_field_0x14;
    unsigned int WinModemClass_field_0x18;
    unsigned int q0085;
    unsigned int q0086;
    unsigned int q05C;
    unsigned int AsyncIO;
    unsigned int Debug;
    unsigned int Timer;
    unsigned int WinModemClass_field_0x2C;
// --- flat members (END) ---
    AbstractClass * * Dial(const char * a2, unsigned char a3, char * Destination, signed int Count, int a6, int a7, int a8);
    WinModemClass * * LoadTypeData(int a2, char * Str, int a4, void * aP4);
    WinModemClass * QueryInterface(char a2);
    int HangUp(int a2);
    int LogCommErrors(void * aP1, char a3, int a4, int a5);
    int ReadBytes(void (**thisthisArg)(), void * aP1, void * aP2);
    int ReadSerial();
    int SaveToINI(const char * NumberOfBytesWritten);
    int WriteSerial(LPCVOID lpBuffer, void * aP2);
    int ddtor(int a2);
};

} // namespace gamemd
