#include "exp_cls.h"

A g_a1;
A g_a2;
A g_a3;
A g_a4;
A g_a5;
A g_a6;

A::A() : a_i(0x11111111), a_j(0x22222222) {}
A::~A() {}
int A::fa() { return a_i; }
