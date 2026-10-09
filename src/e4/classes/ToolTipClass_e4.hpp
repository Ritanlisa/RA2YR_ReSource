// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ToolTipClass {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    bool IsAllocated;  // 0xD
    unsigned char q010;  // 0x10
    bool IsInitialized;  // 0x12
    unsigned char q014;  // 0x14
    int Count;  // 0x16
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned char q034;  // 0x34
// --- flat members (END) ---
    int initString();
    void ddtor();  // 0x724C30 G42.33 b3 supplied-body sync
    char addRef(int a2);  // 0x724C90 G42.33 b3 supplied-body sync
    void * Destructor(char a2);  // G42.33 b3 supplied-body sync
    unsigned int write(int a2);  // G42.33 b3 supplied-body sync
    int seek(int a2);  // G42.33 b3 supplied-body sync (G42.35: def truth int 返回)
    void updateString();
    static void updateString(void *aP0);  // 0x7240B0 G42.35 static-form sync (ui/supplied site 0x724C13)
    unsigned int m_8;  // G42.33 b3 标量形 (体表 m_8 = 0 用法)
    unsigned char m_1[64];  // pad compile-supply (G41.47)
    unsigned char Position[8];  // 0x4 (receiver is ToolTipManager per raw 0x7240B0; value@0x4 holds ptr)
    int Duration;  // 0x10 (ToolTipManager)
    char DisplayTimer[12];  // 0x14 (ToolTipManager)
    void* q018;  // 0x18 (ToolTipManager)
    void* q01C;  // 0x1C (ToolTipManager)
    char TextBuffer[512];  // 0x20 (ToolTipManager)
    void* q024;  // 0x24 (ToolTipManager)
    unsigned int q028;  // 0x28 (ToolTipManager)
    unsigned int __pad_234;  // 0x234 (ToolTipManager embedded VectorClass<ToolTip*> vfptr; G42 stale name q08D)
    unsigned int __pad_238;  // 0x238 (embedded vector Items; G42 stale name q08E)
    unsigned int __pad_244;  // 0x244 (vector loop bound; G42 stale name q091)
};

} // namespace gamemd
