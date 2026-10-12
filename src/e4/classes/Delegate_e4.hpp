// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct GenericNode;  // fix_fwd_type_supply

struct Delegate {
// --- flat members (BEGIN) ---
    void* m_items;  // 0x0
    char m_count[4];  // 0x4
    char Delegate_field_08[4];  // 0x8
    bool m_allocated;  // 0xC
    char Delegate_field_10[4];  // 0x10
    char Delegate_field_14[4];  // 0x14
    void* m_straw;  // 0x18
    void* m_pipe;  // 0x1C
    char Delegate_field_20[4];  // 0x20
    char Delegate_field_24[4];  // 0x24
// --- flat members (END) ---
    GenericNode * Constructor_GenericNode(char a2);
    int * ClearVectorAndStraw(char a2);
    int * DestroyPipe(char a2);
    int * DestroyStraw(char a2);
    int Invoke(int a2, int aP2, void *a1 = 0);
    int ProcessBitmapAndDispatch();
    int ProcessBitmapStream(char * Src, int a3);
    int StreamToBuffer(char * a1, int a3);
    unsigned int * GetField(void *a1 = 0, void *a2 = 0);
    int Dispatch(int aP1, int aP2, void *a1 = 0, void *a2 = 0);
    int Set(int a2, void *a1 = 0, void *a3 = 0);
    unsigned int *q000;  // 0x0 (offset-truth)
    unsigned int q004;  // 0x4 (offset-truth)
    unsigned int q00C;  // 0xC (offset-truth)
    unsigned int q010;  // 0x10 (offset-truth)
    unsigned int q014;  // 0x14 (offset-truth)
    unsigned int q018;  // 0x18 (offset-truth)
};

} // namespace gamemd
