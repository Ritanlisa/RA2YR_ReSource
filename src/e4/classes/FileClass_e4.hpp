// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct FileClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    unsigned int BufferedWriter;
    unsigned int FileName;
    unsigned int FileNameAllocated;
    unsigned int FilePointer;
    unsigned int FileTimeDateLo;
    unsigned int Handle;
    unsigned int Open2;
    unsigned int u32_58;
    unsigned int OpenWithCDSearch;
// --- flat members (END) ---
    char Stub(int a1);
    int Close();
    int GetState();
    int Open(int a2);
    int Read(void * aP1, void * aP2);
    int Seek(int lDistanceToMove, int dwMoveMethod);
    int SetFileName(void * aP1);
    int SetState();
    int StubReturnFalse();
    int Write(void * aP1, int nNumberOfBytesToWrite);
    unsigned int * loc_401950();
     double Load(...);  // C2597 interim stub
};

} // namespace gamemd
