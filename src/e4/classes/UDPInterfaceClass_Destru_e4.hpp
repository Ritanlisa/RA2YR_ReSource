// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once
#ifndef GAMEMD_E4_FLAT_UDPInterfaceClass_Destru
#define GAMEMD_E4_FLAT_UDPInterfaceClass_Destru 1  // G57c2: suppress minimal_carriers.hpp twin
#endif


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct UDPInterfaceClass_Destru {
// --- flat members (BEGIN) ---

// --- flat members (END) ---
    void* Socket;  // 0x0 (vtable slot)
    AbstractClass * * Bind(int a2);
    int COMStub();
    int COMStub_Ret2();
    int CheckStatus();
    int GetStatistics(int a2);
    int Receive();
    short ddtor(WinsockInterfaceClass * aP1, unsigned int arg4, unsigned char * a3, unsigned int a5, WinsockInterfaceClass * aP5, char a7, short a8);
    int Reset(unsigned int * a2, short a3);

    unsigned char __pad_3F580;  // X10 supply (member_lookup)
    unsigned int u32_1F980;  // X10 supply (member_lookup)
    unsigned int u32_1FAA8;  // X10 supply (member_lookup)
    unsigned int u32_3F068;  // X10 supply (member_lookup)
    unsigned int u32_3F070;  // X10 supply (member_lookup)
    unsigned int u32_3F550;  // X10 supply (member_lookup)
    unsigned int u32_3F554;  // X10 supply (member_lookup)
    unsigned char u32_3F5543[4];  /* void */  // X10 supply (member_lookup)
    unsigned int u32_3F558;  // X10 supply (member_lookup)
    unsigned int u32_3F55D;  // X10 supply (member_lookup)
    unsigned int u32_3F560;  // X10 supply (member_lookup)
    unsigned int u32_3F564;  // X10 supply (member_lookup)
    unsigned int u32_3F568;  // X10 supply (member_types)

    unsigned int u32_3F06C;  // X10 supply (member_lookup)
    unsigned int u32_3F330;  // X10 supply (member_lookup)
    unsigned char __pad_000;  // 0x0 [X30:canon]
    unsigned int hostent;  // [X30:default]
};

} // namespace gamemd
