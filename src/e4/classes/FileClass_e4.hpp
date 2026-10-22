// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

#ifndef GAMEMD_G2_FileClass_DEF  // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_FileClass_DEF 1
struct FileClass {
    void * __tail_0;  // 0x0
    unsigned int u32_4;  // 0x4
    char __pad_8[4];  // 0x8
    unsigned int u32_C;  // 0xC
    unsigned int u32_10;  // 0x10
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static int BufferedWriter(FileClass *pThis, char *lpBuffer, DWORD nNumberOfBytesToWrite);
    char Stub(int a1);
    int Close(void *a1 = 0, void *a2 = 0);
    int GetState(void *a1 = 0);
    int Open(int a2, void *a2_1 = 0, void *a3 = 0);
    int Read(char *aP1, signed int aP2, void *a3 = 0);
    int Seek(LONG lDistanceToMove, DWORD dwMoveMethod);
    const char* SetFileName(char *aP1, void *a2 = 0);
    int SetState(void *a1, void *a2 = 0);
    int StubReturnFalse();
    int Write(CCFileClass * aP1, DWORD nNumberOfBytesToWrite);
    unsigned int * loc_401950();
     int Load(FileClass * aP1, const char * a2, void *a1 = 0, void *a3 = 0);
    int  Write2(int lpBuffer, DWORD nNumberOfBytesToWrite, void *a1 = 0);  // 0x65cdd0
    int  Open2(void * a2, void *a1 = 0);  // 0x65cb50
    static const char * SetName(void * aP0, char * aP1);
    static int Delete(void *a1 = 0);  // 0x65d190
    int CloseHandle(void *a1 = 0);  // 0x65cca0
    int OpenWithCDSearch(char *Source);
};
#endif  // GAMEMD_G2_FileClass_DEF

} // namespace gamemd
