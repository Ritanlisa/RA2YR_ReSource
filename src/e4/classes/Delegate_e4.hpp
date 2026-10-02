// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct GenericNode;  // fix_fwd_type_supply

struct Delegate {
// --- flat members (BEGIN) ---
    void* m_items;  // 0x0
    void *q4;  // 0x4
    void* p8;  // regen name
    bool m_allocated;  // 0xC
    unsigned char q00D;  // 0xD
    char Delegate_field_10[4];  // 0x10
    char Delegate_field_14[4];  // 0x14
    void* m_straw;  // 0x18
    void* m_pipe;  // 0x1C
    char Delegate_field_20[4];  // 0x20
    char Delegate_field_24[4];  // 0x24
    unsigned int Blowfish;
    unsigned int Previous;
    unsigned int Straw_field_0x04;
    unsigned int *__pad_0;
    unsigned int *__pad_14;
    unsigned int field_10;
    unsigned int field_18;
    unsigned int field_1C;
    unsigned int field_C;
    unsigned int m_count;
    unsigned int Delegate_field_08;
    unsigned char Pipe_field_0x04;  // 0x4
// --- flat members (END) ---
    GenericNode * Constructor_GenericNode(char a2);
    int * ClearVectorAndStraw(char a2);
    int * DestroyPipe(char a2);
    int * DestroyStraw(char a2);
    int Invoke(int a2, int aP2);
    int ProcessBitmapAndDispatch();
    int ProcessBitmapStream(char * Src, int a3);
    int StreamToBuffer(char * a1, int a3);
    unsigned int * GetField();
    int Dispatch(int aP1, int aP2);
    int Set(int a2);
};

} // namespace gamemd
