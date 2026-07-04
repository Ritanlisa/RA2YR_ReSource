#include "vector2.hpp"

void  Vector2::NormalizeNonZero(double *this)
{
    if ( *this == 0.0 && *(this + 1) == 0.0 )
    *(uint32_t *)this = 0;
    *((uint32_t *)this + 1) = 1079574528;
}

