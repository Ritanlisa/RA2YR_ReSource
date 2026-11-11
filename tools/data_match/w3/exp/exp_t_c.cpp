#include "exp_cls.h"
C g_c;
C::C() : c_i(0x44444444) { c_s[0] = 'C'; c_s[1] = 0; }
C::~C() {}
int C::fc() { return c_i; }
