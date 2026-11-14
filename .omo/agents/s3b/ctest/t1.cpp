#include "era_types.h"
int f(unsigned int v) {
    unsigned int x = 0;
    __asm {
        fld dword ptr [eax+8]
        fcomp ds:flt_7E1748
        fnstsw ax
    }
    if ( (_AX & 0x4100) != 0 )
    {
        x = 1;
    }
    return (int)x;
}
