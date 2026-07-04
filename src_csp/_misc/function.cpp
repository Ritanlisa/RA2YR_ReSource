#include "function.hpp"

void  Function::41C430(double *this)
{
    Math::Sqrt(*this * *this + *(this + 1) * *(this + 1));
}

int  Function::6342D0(uint32_t *this, int a2)
{
    return **(uint32_t **)(*(this + 1) + 4 * a2);
}

// 0x00643E80
int  Function::643E80(uint32_t *this, int a2)
{
    *(this + 1) = a2;
    return a2;
}

char * Function::645D00(char *this, int a2)
{
    return this + 4 * a2;
}

