#include "exp_cls.h"

A g_a1;
A g_a2;

A::A() : a_i(0x11111111), a_j(0x22222222) {}
A::~A() {}
int A::fa() { return a_i; }

B g_b;

B::B() : b_i(0x33333333), b_d(1.5) {}
B::~B() {}
int B::fb() { return b_i; }

C g_c;

C::C() : c_i(0x44444444) { c_s[0] = 'C'; c_s[1] = 0; }
C::~C() {}
int C::fc() { return c_i; }
