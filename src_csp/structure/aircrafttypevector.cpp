#include "aircrafttypevector.hpp"

uint32_t * AircraftTypeVector::Constructor(uint32_t *this, int a2, int a3)
{
    *(this + 1) = 0;
    *(this + 2) = a2;
    *((uint8_t *)this + 12) = 1;
    *((uint8_t *)this + 13) = 0;
    *this = &VectorClass<AircraftTypeClass const *>::`vftable';
    if ( a2 )
    if ( a3 )
    *(this + 1) = a3;
    return this;
    *(this + 1) = __2_YAPAXI_Z(4 * a2);
    *((uint8_t *)this + 13) = 1;
    return this;
}

