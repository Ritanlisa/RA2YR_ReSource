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
};

} // namespace gamemd
