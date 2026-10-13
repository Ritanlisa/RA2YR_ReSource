// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ToolTipClass {
// --- flat members (BEGIN) ---
    bool IsAllocated;  // 0xD
    bool IsInitialized;  // 0x12
    int Count;  // 0x16
// --- flat members (END) ---
    int initString();
    void ddtor(void *a1 = 0);  // 0x724C30 G42.33 b3 supplied-body sync
    char  addRef(int a2);  // 0x724C90
    void * Destructor(char a2);  // G42.33 b3 supplied-body sync
    unsigned int write(int a2);  // G42.33 b3 supplied-body sync
    int seek(int a2);
    void updateString();
    static void updateString(void *aP0);
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

    unsigned int u32_23C;  // X10 supply (member_lookup)
    unsigned int u32_241;  // X10 supply (member_lookup)
    unsigned int u32_24C;  // X10 supply (member_lookup)
    unsigned char u32_24C7[4];  /* void */  // X10 supply (member_lookup)
    unsigned int u32_250;  // X10 supply (member_lookup)
    unsigned int u32_254;  // X10 supply (member_lookup)
    unsigned int u32_258;  // X10 supply (member_lookup)
    unsigned int u32_25C;  // X10 supply (member_lookup)
};

} // namespace gamemd
