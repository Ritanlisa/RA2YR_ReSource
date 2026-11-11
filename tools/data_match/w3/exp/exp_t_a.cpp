#include "exp_cls.h"
A g_a1;
A g_a2;
A::A() : a_i(0x11111111), a_j(0x22222222) {}
A::~A() {}
int A::fa() { return a_i; }
