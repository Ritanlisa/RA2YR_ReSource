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
    int Close(void *a1 = 0);
    int GetState(void *a1 = 0);
    int Open(int a2, void *a3 = 0, void *a1 = 0);
    int Read(BufferIOFileClass * aP1, AbstractClass * aP2);
    int Seek(LONG lDistanceToMove, DWORD dwMoveMethod);
    int SetFileName(void* aP1);
    int SetState();
    int StubReturnFalse();
    int Write(CCFileClass * aP1, DWORD nNumberOfBytesToWrite);
    unsigned int * loc_401950(char a2);
     double Load(...);  // C2597 interim stub
};

} // namespace gamemd
