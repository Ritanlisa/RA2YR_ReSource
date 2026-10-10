// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct XSurface {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* Width;  // 0x4
    void* Height;  // 0x8
    int LockCount;  // 0xC
// --- flat members (END) ---
    XSurface * * Blit(int a2, void **a3, int arg8, int a5, unsigned int *a6, void **a4, int a8);
    XSurface * BlitPart(void **a2, void **a3, void **arg8, void **a4, int a6);
    XSurface * * FillRectEx(unsigned int *a2, int *a3, int a4);
    XSurface * ScalarDtor(char a2);
    char DrawRectEx(int a2, unsigned int * a3, int a4);
    char StubReturnFalse();
    char Unlock();
    char entry_1C_(int a1, int a2, int a3);
    char entry_34_(int a1, int a2, int a3, int a4, int a5, int a6, int a7);
    char entry_38_(int a1, int a2, int a3, int a4, int a5, int a6, int a7);
    char entry_40_(int a1, int a2, int a3, int a4, int a5, int a6, int a7);
    char entry_50_(int a1, int a2, int a3, int a4);
    char entry_68_(int a1, int a2);
    int DrawDashedLine(int * a2, int * a3, int16_t a4, int a5, int a6);
    int DrawEllipseOutline(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10);
    int Lock(int a2, int a3);
    int entry_4C_(int a1, int a2, int a3, int a4, int a5, int a6);
    int vt_entry_40(int a1);
    int vt_entry_68();
    void* WalkLine();
    static int Fill(XSurface * aP1, int a2);
    static int GetPixel(XSurface * aP1, unsigned int *a2);
    static int SetPixel(XSurface * aP1, unsigned int *a2, int16_t a3);
    void* WalkLine();
    static int BlitWhole(...);
    unsigned int *q000;  // 0x0 (offset-truth)
    static double Surface(...);  // plateau: C2039/C3861 stub
};

} // namespace gamemd
