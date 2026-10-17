// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct GenericNode;  // fix_fwd_type_supply

struct Delegate {
    void* m_items;  // 0x0
    int m_count;  // 0x4
    int Delegate_field_08;  // 0x8
    bool m_allocated;  // 0xC
    unsigned char __pad_00D;  // 0xD
    char __pad_E[2];  // 0xE
    int Delegate_field_10;  // 0x10
    int Delegate_field_14;  // 0x14
    void* m_straw;  // 0x18
    void* m_pipe;  // 0x1C
    int Delegate_field_20;  // 0x20
    int Delegate_field_24;  // 0x24
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    GenericNode * Constructor_GenericNode(char a2);
    int * ClearVectorAndStraw(char a2);
    int * DestroyPipe(char a2);
    int * DestroyStraw(char a2);
    int Invoke(int a2, int aP2, void *a3 = 0);
    int ProcessBitmapAndDispatch();
    int ProcessBitmapStream(char * Src, int a3);
    int StreamToBuffer(char * a1, int a3);
    unsigned int * GetField(void *a1 = 0, void *a2 = 0);
    int Dispatch(int aP1, int aP2, void *a3 = 0, void *a4 = 0);
    int Set(int aP1, void *a2 = 0, void *a3 = 0);
};

} // namespace gamemd
