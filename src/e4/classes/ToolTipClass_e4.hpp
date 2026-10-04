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
    unsigned int ToolTipClass_field_0x04[12];  // G42.35: supplied-bodies vocab (0x7240CA 判定/0x724AE2 [5] 下标两用)
    unsigned int ToolTipClass_field_0x08;  // 0x7240BA
    unsigned int ToolTipClass_field_0x18;  // 0x7240DB
    unsigned int ToolTipClass_field_0x10;  // G42.35: 0x724xxx vocab
    unsigned int ToolTipClass_field_0x14;
    unsigned int ToolTipClass_field_0x1C;
    unsigned int ToolTipClass_field_0x20;
    unsigned int ToolTipClass_field_0x24;
    unsigned int ToolTipClass_field_0x28;
    unsigned int *__pad_0;  // G42.35: supplied-bodies vfptr view

    unsigned int u32_24C;  // G42.39 data supply

    unsigned int u32_250;  // G42.39 data supply

    unsigned int u32_254;  // G42.39 data supply

    unsigned int u32_258;  // G42.39 data supply

    unsigned int u32_25C;  // G42.39 data supply

    unsigned int q091;  // G42.39 retype (loop bound)  // G42.39 data supply

    unsigned int * q08E;  // G42.39 retype (array base)  // G42.39 data supply

    unsigned int * q08D;  // G42.39 retype (vtbl)  // G42.39 data supply

    unsigned int u32_241;  // G42.39 data supply

    unsigned int u32_23C;  // G42.39 data supply

};

} // namespace gamemd
