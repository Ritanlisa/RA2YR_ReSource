// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once
#ifndef GAMEMD_E4_FLAT_UDPInterfaceClass_Destru
#define GAMEMD_E4_FLAT_UDPInterfaceClass_Destru 1  // G57c2: suppress minimal_carriers.hpp twin
#endif


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct UDPInterfaceClass_Destru {
    unsigned char __pad_000;  // 0x0
    char __pad_1[3];  // 0x1
    int UDPInterfaceClass_Destru_field_0x04;  // 0x4
    int UDPInterfaceClass_Destru_field_0x08;  // 0x8
    int UDPInterfaceClass_Destru_field_0x0C;  // 0xC
    int UDPInterfaceClass_Destru_field_0x10;  // 0x10
    int UDPInterfaceClass_Destru_field_0x14;  // 0x14
    int UDPInterfaceClass_Destru_field_0x18;  // 0x18
    int UDPInterfaceClass_Destru_field_0x1C;  // 0x1C
    int UDPInterfaceClass_Destru_field_0x20;  // 0x20
    int UDPInterfaceClass_Destru_field_0x24;  // 0x24
    int UDPInterfaceClass_Destru_field_0x28;  // 0x28
    int UDPInterfaceClass_Destru_field_0x2C;  // 0x2C
    int UDPInterfaceClass_Destru_field_0x30;  // 0x30
    int UDPInterfaceClass_Destru_field_0x34;  // 0x34
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
