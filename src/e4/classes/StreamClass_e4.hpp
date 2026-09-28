// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct StreamClass {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    void* m_Data;  // 0x4
    unsigned int u32_8;  // 0x8
    char m_Size[4];  // 0xC
    char StreamClass_field_0C[4];  // 0x10
    unsigned int q014;  // 0x14
    char q018[4];  // 0x18
    unsigned int u32_1C;  // 0x1C
    unsigned char q020;  // 0x20
    char q024[4];  // 0x24
    unsigned int q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    char q034[4];  // 0x34
    unsigned char q038;  // 0x38
    unsigned int q040;  // 0x40
    unsigned char q044;  // 0x44
    unsigned char q048;  // 0x48
    unsigned char q04C;  // 0x4C
    unsigned char q050;  // 0x50
    char q054[4];  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q05C;  // 0x5C
    unsigned int q064;  // 0x64
    unsigned char q068;  // 0x68
    unsigned char q06C;  // 0x6C
    unsigned char q074;  // 0x74
    unsigned char q078;  // 0x78
    unsigned char q080;  // 0x80
    unsigned char q084;  // 0x84
    unsigned char q088;  // 0x88
    unsigned char q08C;  // 0x8C
    unsigned char q094;  // 0x94
    unsigned char q098;  // 0x98
    unsigned int q100;  // 0x100
    unsigned int u32_80;
// --- flat members (END) ---
    BOOL IsInactive(IUnknown * aP0);
    char GetDirty(int a1);
    int ClearDirty(unsigned char * a1);
    int ResetPosition(LocomotionClass * aP0, int a2);
    int Set(IUnknown * aP1);
    int Set2(unsigned int * a2);
    int SetDirty(unsigned char * a1);
    int Vt32Thunk(int a1);
    int WriteBytes(unsigned short a2, char a3, int a4, int a5, int a6);
    unsigned int ReadAndSeek(MouseClass * aP1, MouseClass * aP2);
};

} // namespace gamemd
