// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

namespace gamemd {

struct ToolTipClass {
    int initString();
    unsigned int m_C;  // G42.33 b3 flat-carrier vocab
    void ddtor();  // 0x724C30 G42.33 b3 supplied-body sync
    char addRef(int a2);  // 0x724C90 G42.33 b3 supplied-body sync
    void * Destructor(char a2);  // G42.33 b3 supplied-body sync
    unsigned int write(int a2);  // G42.33 b3 supplied-body sync
    int seek(int a2);  // G42.33 b3 supplied-body sync (G42.35: def truth int 返回)
    void updateString();
    static void updateString(void *aP0);  // 0x7240B0 G42.35 static-form sync (ui/supplied site 0x724C13)
    unsigned int m_8;  // G42.33 b3 标量形 (体表 m_8 = 0 用法)
    unsigned char m_1[64];  // pad compile-supply (G41.47)
    unsigned int m_10;  // 0x10
    unsigned int *__pad_0;  // G42.35: supplied-bodies vfptr view











    // --- g57w9: ToolTipManager-receiver offsets (raw 0x724xxx this=ToolTipManager, disasm-verified) ---
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
    unsigned int u32_23C;  // 0x23C
    unsigned int u32_241;  // 0x241
    unsigned int __pad_244;  // 0x244 (vector loop bound; G42 stale name q091)
    unsigned int u32_24C;  // 0x24C
    unsigned int u32_250;  // 0x250
    unsigned int u32_254;  // 0x254
    unsigned int u32_258;  // 0x258
    unsigned int u32_25C;  // 0x25C
};

} // namespace gamemd
