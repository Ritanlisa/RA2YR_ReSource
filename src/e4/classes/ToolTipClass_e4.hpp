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
    unsigned int seek(int a2);  // G42.33 b3 supplied-body sync
    void updateString();
    unsigned int m_8;  // G42.33 b3 标量形 (体表 m_8 = 0 用法)
    unsigned char m_1[64];  // pad compile-supply (G41.47)
    unsigned int m_10;  // 0x10
};

} // namespace gamemd
