// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct MultiplayerGameMode {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
// --- flat members (END) ---
    void* vt_InitializerBase;  // 0x0 (no offset truth)
    void* GetFirst_ph;  // 0x0 (no offset truth)  // w18j3: filler renamed (no offset truth; canon MultiplayerGameMode::GetFirst is a method)
    static unsigned int GetFirst(...);
    MultiplayerGameMode * QueryInterface(char * Block, char a2);
    unsigned int * ConstructMultiplayerGameModeVectorClass(int a2, int a3, void *a3_2);
     void * Construct(const wchar_t **a2, const wchar_t **a3, const char **a4, const char **a5, char a6, int a7, void *a1 = 0, void *a8 = 0, void *a9 = 0);
     int Find(void *a1 = 0, void *a2 = 0);
    static double ListGet(...);  // C2597 interim stub
     void Dtor(void *a1 = 0);
};

} // namespace gamemd
