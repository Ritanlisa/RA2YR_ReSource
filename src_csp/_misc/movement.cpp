#include "movement.hpp"

// 0x005B2970
int * Movement::DivideAndStoreScaled(__int16 *this, int *a2, int a3)
{
    LOWORD(a3) = *this / a3;
    *a2 = a3;
    return a2;
}

