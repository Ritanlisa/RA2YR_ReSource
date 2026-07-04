#include "concurrency.hpp"

void  sub_74F620(Concurrency::details::_NonReentrantLock *this)
{
    int i; // eax
    for ( i = 0; i <= *(uint32_t *)this; *(uint32_t *)(*((uint32_t *)this + 2) + 4 * i - 4) = 0 )
    ++i;
    __Release__NonReentrantLock_details_Concurrency__QAEXXZ_0(this);
}

