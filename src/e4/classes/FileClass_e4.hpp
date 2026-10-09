// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

#ifndef GAMEMD_G2_FileClass_DEF  // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_FileClass_DEF 1
struct FileClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
// --- flat members (END) ---
    static int BufferedWriter(FileClass *pThis, char *lpBuffer, DWORD nNumberOfBytesToWrite);  // G57w19k2 raw thiscall static-form supply (member BufferedWriter -> BufferedWriter_slot)
    char Stub(int a1);
    int Close();
    int GetState();
    int Open(int a2);
    int Read(char *aP1, signed int aP2);
    int Seek(LONG lDistanceToMove, DWORD dwMoveMethod);
    const char* SetFileName(char *aP1);
    int SetState(void *a1);
    int StubReturnFalse();
    int Write(CCFileClass * aP1, DWORD nNumberOfBytesToWrite);
    unsigned int * loc_401950();
     int Load(FileClass * aP1, const char * a2);  // G57w10-S raw 0x473D10 (was C2597 interim stub)
    int Write2(LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite);  // 0x65cdd0
    int Open2(const CHAR *a2);  // 0x65cb50
    static const char * SetName(void * aP0, char * aP1);  // 0x65CAC0 thiscall static-form sync (G42.33 b3)
    int Delete();  // 0x65d190
    int CloseHandle();  // 0x65cca0
    int OpenWithCDSearch(char *Source); // N_fix R5 supply (cache truth)
};
#endif  // GAMEMD_G2_FileClass_DEF

} // namespace gamemd
