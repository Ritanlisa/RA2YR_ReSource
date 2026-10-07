// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct COMObject {
    static int Release(void *aP1);  // 0x437FC0 raw: int Release(COMObject*)

// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned char q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q03C;  // 0x3C
    unsigned char q040;  // 0x40
    unsigned char q044;  // 0x44
    unsigned char q048;  // 0x48
    unsigned char q04C;  // 0x4C
    unsigned char q050;  // 0x50
    unsigned int Hovered;
    unsigned int Image;
    unsigned int *__pad_0;
    unsigned int vfptr;
// --- flat members (END) ---
    bool IsSameType(GScreenClass * aP0);
    int FindNextActive(unsigned char * a1);
    int GetSizeMaxWrapper(AbstractClass * aP0, AbstractClass * aP1);
    int GetSpecialValue(int a1);
    int GetStringValue(int a1, unsigned int * a2);
    int QueryInterface(int a1, const void * a2, unsigned int * a3);
    int QueryInterface2(const void *a2, unsigned int *a3);
    int Thunk_COMObject_sub_4E30C0();
    unsigned int * GetCoord3D(int a1, unsigned int * a2);
    unsigned int * ReturnZeroPos(int a1, unsigned int * a2);
    bool IsPrimaryInstance(void);
    int ActivateGlobal(void);
    int ActivateThunk(int a1, int a2, int a3);
    int Check(int, void *a2 = 0, void *a1 = 0);
    int DeactivateGlobal(void);
    int FindInList(int);
    int SetField(int);
    int TrackCurrent(int);
    void * ScalarDtor(int);
    int * SwapReference(int a2);  // 0x5233a0
};

} // namespace gamemd
