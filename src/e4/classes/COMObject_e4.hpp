// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct COMObject {
    unsigned char __pad_000;  // 0x0
    char __pad_1[3];  // 0x1
    int q004;  // 0x4
    int q008;  // 0x8
    int q00C;  // 0xC
    int q010;  // 0x10
    int q014;  // 0x14
    int q018;  // 0x18
    int u32_1C;  // 0x1C
    int q020;  // 0x20
    int q024;  // 0x24
    int q028;  // 0x28
    int q02C;  // 0x2C
    int q030;  // 0x30
    int q034;  // 0x34
    int q038;  // 0x38
    int q03C;  // 0x3C
    int q040;  // 0x40
    int q044;  // 0x44
    int q048;  // 0x48
    int q04C;  // 0x4C
    int q050;  // 0x50
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
