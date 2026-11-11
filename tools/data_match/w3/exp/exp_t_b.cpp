#include "exp_cls.h"
B g_b;
B::B() : b_i(0x33333333), b_d(1.5) {}
B::~B() {}
int B::fb() { return b_i; }
