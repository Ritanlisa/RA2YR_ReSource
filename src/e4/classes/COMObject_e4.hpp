// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct COMObject {
    unsigned char __pad_000;  // 0x0
    char __pad_1[3];  // 0x1
    int COMObject_field_0x04;  // 0x4
    int COMObject_field_0x08;  // 0x8
    int COMObject_field_0x0C;  // 0xC
    int COMObject_field_0x10;  // 0x10
    int COMObject_field_0x14;  // 0x14
    int COMObject_field_0x18;  // 0x18
    int COMObject_field_0x1C;  // 0x1C
    int COMObject_field_0x20;  // 0x20
    int COMObject_field_0x24;  // 0x24
    int COMObject_field_0x28;  // 0x28
    int COMObject_field_0x2C;  // 0x2C
    int COMObject_field_0x30;  // 0x30
    int COMObject_field_0x34;  // 0x34
    int COMObject_field_0x38;  // 0x38
    int COMObject_field_0x3C;  // 0x3C
    int COMObject_field_0x40;  // 0x40
    int COMObject_field_0x44;  // 0x44
    int COMObject_field_0x48;  // 0x48
    int COMObject_field_0x4C;  // 0x4C
    int COMObject_field_0x50;  // 0x50
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
};

} // namespace gamemd
