// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once
#ifndef GAMEMD_E4_FLAT_UDPInterfaceClass_Destru
#define GAMEMD_E4_FLAT_UDPInterfaceClass_Destru 1  // G57c2: suppress minimal_carriers.hpp twin
#endif


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct UDPInterfaceClass_Destru {
    unsigned char Socket;  // 0x0
    char __pad_1[3];  // 0x1
    char Initialized;  // 0x4
    char __pad_5[3];  // 0x5
    unsigned int q008;  // 0x8
    unsigned char q00C;  // 0xC
    char __pad_D[3];  // 0xD
    unsigned int q010;  // 0x10
    int q014;  // 0x14
    unsigned int q018;  // 0x18
    int q01C;  // 0x1C
    int q020;  // 0x20
    unsigned int q024;  // 0x24
    int q028;  // 0x28
    int q02C;  // 0x2C
    unsigned int q030;  // 0x30
    int q034;  // 0x34
    char __pad_38[4];  // 0x38
    unsigned int u32_3C;  // 0x3C
    char __pad_40[8];  // 0x40
    unsigned int u32_48;  // 0x48
    char __pad_4C[258068];  // 0x4C
    unsigned int u32_3F060;  // 0x3F060
    unsigned int u32_3F064;  // 0x3F064
    unsigned char q3F068;  // 0x3F068
    char __pad_3F069[3];  // 0x3F069
    unsigned int u32_3F06C;  // 0x3F06C
    unsigned int u32_3F070;  // 0x3F070
    unsigned int q3F074;  // 0x3F074
    unsigned int q3F078;  // 0x3F078
    char __pad_3F07C[640];  // 0x3F07C
    unsigned short u32_3F2FC;  // 0x3F2FC
    char __pad_3F2FE[2];  // 0x3F2FE
    unsigned int u32_3F300;  // 0x3F300
    char __pad_3F304[28];  // 0x3F304
    unsigned int q3F320;  // 0x3F320
    char __pad_3F324[12];  // 0x3F324
    unsigned int u32_3F330;  // 0x3F330
    unsigned int u32_3F334;  // 0x3F334
    unsigned int q3F338;  // 0x3F338
    unsigned int q3F33C;  // 0x3F33C
    unsigned int q3F340;  // 0x3F340
    char __pad_3F344[1];  // 0x3F344
    unsigned char q3F345;  // 0x3F345
    char __pad_3F346[2];  // 0x3F346
    unsigned int q3F348;  // 0x3F348
    char __pad_3F34C[516];  // 0x3F34C
    unsigned int q3F550;  // 0x3F550
    unsigned int u32_3F554;  // 0x3F554
    unsigned int q3F558;  // 0x3F558
    char __pad_3F55C[1];  // 0x3F55C
    unsigned char q3F55D;  // 0x3F55D
    char __pad_3F55E[2];  // 0x3F55E
    unsigned int u32_3F560;  // 0x3F560
    unsigned int q3F564;  // 0x3F564
    unsigned int u32_3F568;  // 0x3F568
    unsigned int u32_3F56C;  // 0x3F56C
    char __pad_3F570[60];  // 0x3F570
    unsigned int u32_3F5AC;  // 0x3F5AC
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    AbstractClass * * Bind(int a2);
    int COMStub();
    int COMStub_Ret2();
    int CheckStatus();
    int GetStatistics(int a2);
    int Receive();
    short ddtor(WinsockInterfaceClass * aP1, unsigned int arg4, unsigned char * a3, unsigned int a5, WinsockInterfaceClass * aP5, char a7, short a8);
    int Reset(unsigned int * a2, short a3);
};

} // namespace gamemd
