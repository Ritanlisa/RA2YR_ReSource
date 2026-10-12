// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct WinModemClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
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
    unsigned int *q000;  // 0x0 (offset-truth)
    unsigned char q0083;  // 0x83 (offset-truth)
    unsigned char q0146;  // 0x146 (offset-truth)
    unsigned char q0242;  // 0x242 (offset-truth)
    unsigned int u32_100;  // 0x100 (offset-truth)
    unsigned int u32_288;  // 0x288 (offset-truth)
    unsigned char u32_51;  // 0x51 (offset-truth)
    unsigned int u32_58;  // 0x58 (offset-truth)
    unsigned int u32_64;  // 0x64 (offset-truth)
    unsigned int u32_68;  // 0x68 (offset-truth)
};

} // namespace gamemd
