// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct COMObject {
// --- flat members (BEGIN) ---

// --- flat members (END) ---
    static int Release(void *aP1);
    bool IsSameType(GScreenClass * aP0);
    int FindNextActive(unsigned char * a1);
    static int GetSizeMaxWrapper(AbstractClass * aP0, AbstractClass * aP1);
    int GetSpecialValue(int a1);
    int GetStringValue(int a1, unsigned int * a2);
    int QueryInterface(int a1, const void * a2, unsigned int * a3);
    int QueryInterface2(const void * a2, unsigned int * a3);
    int Thunk_COMObject_sub_4E30C0();
    unsigned int * GetCoord3D(int a1, unsigned int * a2);
    unsigned int * ReturnZeroPos(int a1, unsigned int * a2);
    bool IsPrimaryInstance(void);
    int ActivateGlobal(void);
    int ActivateThunk(int a1, int a2, int a3);
    int Check(int, void *a2 = 0, void *a1 = 0);
    int DeactivateGlobal(void);
    int FindInList(int);
    int SetField(int, void *a1 = 0);
    int TrackCurrent(int);
    void * ScalarDtor(int);
    int * SwapReference(int a2);  // 0x5233a0
    unsigned char __pad_000;  // 0x0 [X30:canon]
};

} // namespace gamemd
