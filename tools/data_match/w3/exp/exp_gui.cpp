#include "exp_cls.h"
#include <windows.h>
A g_a1;
A g_a2;
A::A() : a_i(0x11111111), a_j(0x22222222) {}
A::~A() {}
int A::fa() { return a_i; }
int PASCAL WinMain(HINSTANCE h, HINSTANCE p, LPSTR cmd, int show)
{
    (void)h;(void)p;(void)cmd;(void)show;
    return g_a1.a_i;
}
