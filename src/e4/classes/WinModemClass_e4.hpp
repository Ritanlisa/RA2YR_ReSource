// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct WinModemClass {
    void * ptr_0;  // 0x0
    int WinModemClass_field_0x04;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned int u32_C;  // 0xC
    int u32_10;  // 0x10
    int q014;  // 0x14
    int u32_18;  // 0x18
    unsigned int u32_1C;  // 0x1C
    unsigned int u32_20;  // 0x20
    unsigned int u32_24;  // 0x24
    int u32_28;  // 0x28
    int q02C;  // 0x2C
    int q030;  // 0x30
    int q034;  // 0x34
    int q038;  // 0x38
    unsigned int q03C;  // 0x3C
    unsigned int q040;  // 0x40
    unsigned int q044;  // 0x44
    unsigned int q048;  // 0x48
    unsigned int u32_4C;  // 0x4C
    unsigned char u32_50;  // 0x50
    unsigned char u32_51;  // 0x51
    char __pad_52[2];  // 0x52
    unsigned int u32_54;  // 0x54
    unsigned int u32_58;  // 0x58
    unsigned int u32_5C;  // 0x5C
    unsigned int u32_60;  // 0x60
    unsigned int u32_64;  // 0x64
    unsigned int u32_68;  // 0x68
    unsigned char q06C;  // 0x6C
    char __pad_6D[1571];  // 0x6D
    unsigned int q690;  // 0x690
    char __pad_694[236];  // 0x694
    unsigned int q780;  // 0x780
    char __pad_784[236];  // 0x784
    unsigned char q870;  // 0x870
    char __pad_871[239];  // 0x871
    unsigned int q960;  // 0x960
    char __pad_964[956];  // 0x964
    unsigned int qD20;  // 0xD20
    char __pad_D24[1436];  // 0xD24
    unsigned char q12C0;  // 0x12C0
    char __pad_12C1[479];  // 0x12C1
    unsigned char q14A0;  // 0x14A0
    char __pad_14A1[239];  // 0x14A1
    unsigned int q1590;  // 0x1590
    char __pad_1594[956];  // 0x1594
    unsigned char q1950;  // 0x1950
    char __pad_1951[1819];  // 0x1951
    unsigned int u8_206C;  // 0x206C
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
