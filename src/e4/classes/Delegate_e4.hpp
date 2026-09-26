// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Delegate {
// --- flat members (BEGIN) ---
    void* m_items;  // 0x0
    unsigned int m_count;  // 0x4
    char Delegate_field_08[4];  // 0x8
    bool m_allocated;  // 0xC
    unsigned char q00D;  // 0xD
    unsigned int Delegate_field_10;  // 0x10
    char Delegate_field_14[4];  // 0x14
    void* m_straw;  // 0x18
    unsigned int q01C;  // 0x1C
    char Delegate_field_20[4];  // 0x20
    char Delegate_field_24[4];  // 0x24
    void* q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    char q034[4];  // 0x34
    unsigned char q038;  // 0x38
    void* q040;  // 0x40
    unsigned char q044;  // 0x44
    unsigned char q048;  // 0x48
    unsigned char q04C;  // 0x4C
    unsigned int q050;  // 0x50
    char q054[4];  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q05C;  // 0x5C
    void* q064;  // 0x64
    unsigned char q068;  // 0x68
    unsigned char q06C;  // 0x6C
    unsigned char q074;  // 0x74
    unsigned char q078;  // 0x78
    char q080[4];  // 0x80
    char q084[4];  // 0x84
    unsigned char q088;  // 0x88
    unsigned char q08C;  // 0x8C
    unsigned char q094;  // 0x94
    unsigned char q098;  // 0x98
    void* q100;  // 0x100
    unsigned char q104;  // 0x104
    unsigned char q108;  // 0x108
    unsigned char q110;  // 0x110
    unsigned char q114;  // 0x114
    unsigned char q11C;  // 0x11C
    unsigned char q120;  // 0x120
    char q128[4];  // 0x128
    unsigned char q12C;  // 0x12C
    char q130[4];  // 0x130
    unsigned int Delegate_field_080;
    unsigned int Delegate_field_084;
    unsigned int Previous;
    unsigned int __pad_060;
    unsigned int m_pipe;
    unsigned int q008;
// --- flat members (END) ---
    GenericNode * Constructor_GenericNode(char a2);
    int * ClearVectorAndStraw(char a2);
    int * DestroyPipe(char a2);
    int * DestroyStraw(char a2);
    int Invoke(int a2, void* aP2);
    int ProcessBitmapAndDispatch();
    int ProcessBitmapStream(char * Src, int a3);
    int StreamToBuffer(char * a1, int a3);
    unsigned int * GetField();
    void * Dispatch(void* aP1, void* aP2);
    void Set(AbstractTypeClass * aP1);
};

} // namespace gamemd
