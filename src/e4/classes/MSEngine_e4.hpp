// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct MSEngine {
    void* vfptr;  // minimal E2 declaration
    char Release(int a2, char * a3);  // 0x5ACD30
    char SetCapacity(int a2, char * a3);  // 0x5ACED0
    void Destructor();  // 0x5CEE60
    unsigned int * Construct();  // 0x5D1AA0
    void Destruct();  // 0x5D1B30
    int ProcessEvents(MSVQAnim * aP1, int a3);  // 0x5D1DF0
    void ClearBuffer();  // 0x5AC520
    unsigned int * Shutdown(unsigned int * a2, int a3);  // 0x5AC570
    char AddRef(int a2);  // 0x5ACCC0
    void ddtor();  // 0x5ACE20
    int Init(unsigned int * a2);  // 0x5ACE50
    int FindItem(unsigned int * a2);  // 0x5ACFC0
    VectorClass * QueryInterface(char a2);  // 0x5AD4D0
    DynamicVector * Constructor(char a2);  // 0x5AD520
    unsigned int PointerToIndex(int a2);  // 0x5AC550
    unsigned int Run(int a2);  // 0x5ACEB0
    void DestroyData();  // 0x5D5850
};
} // namespace gamemd
