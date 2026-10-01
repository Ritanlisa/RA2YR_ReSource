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
    int Close(void *a1, void *a2);
    int GetState(void *a1);
    int Open(RawFileClass *a1, int a2, void *a3);
    int Read(BufferIOFileClass * aP1, AbstractClass * aP2);
    int Seek(LONG lDistanceToMove, DWORD dwMoveMethod);
    const char* SetFileName(char *aP1);
    int SetState(void *a1);
    int StubReturnFalse();
    int Write(CCFileClass * aP1, DWORD nNumberOfBytesToWrite);
    unsigned int * loc_401950();
     double Load(...);  // C2597 interim stub
    int Write2(LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite);  // 0x65cdd0
    int Open2(const CHAR *a2);  // 0x65cb50
    int Delete();  // 0x65d190
    int CloseHandle();  // 0x65cca0
};

} // namespace gamemd
