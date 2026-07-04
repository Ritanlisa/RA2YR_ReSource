#include "buildlocation.hpp"

// 0x0050E450
uint32_t * BuildLocation::InitCandidate(uint32_t *this, int a2, uint32_t *a3)
{
    *this = a2;
    *(this + 1) = *a3;
    *((uint8_t *)this + 8) = 0;
    *(this + 3) = 0;
    return this;
}

