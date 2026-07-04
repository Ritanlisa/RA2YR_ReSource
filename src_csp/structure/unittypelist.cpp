#include "unittypelist.hpp"

uint32_t * UnitTypeList::Constructor(uint32_t *this)
{
    *(this + 1) = 0;
    *(this + 2) = 0;
    *((uint8_t *)this + 12) = 1;
    *((uint8_t *)this + 13) = 0;
    *(this + 5) = 10;
    *(this + 4) = 0;
    *this = &TypeList<UnitTypeClass const *>::`vftable';
    return this;
}

