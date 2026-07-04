#include "radbeam.hpp"

// 0x006593F0
uint32_t * RadBeam::InitState(uint32_t *this, int a2)
{
    *(this + 6) = 0;
    *this = 0;
    *(this + 1) = 0;
    *((uint8_t *)this + 8) = 0;
    *((uint8_t *)this + 9) = 1;
    *(this + 3) = 0;
    *(this + 4) = a2;
    *(this + 7) = 0;
    *((uint8_t *)this + 32) = 0;
    *((uint8_t *)this + 33) = 0;
    *((uint8_t *)this + 34) = 0;
    *(this + 9) = 0;
    *(this + 10) = 0;
    *(this + 11) = 0;
    *(this + 12) = 0;
    *(this + 13) = 0;
    *(this + 14) = 0;
    *(this + 16) = 0;
    *(this + 18) = 0;
    *(this + 15) = 0;
    *(this + 17) = 0;
    *(this + 19) = 0;
    *(this + 20) = 0;
    *(this + 21) = 1;
    *((uint8_t *)this + 88) = 0;
    *(this + 31) = 0;
    *((uint8_t *)this + 192) = 0;
    *((uint8_t *)this + 193) = 0;
    *((uint8_t *)this + 194) = 0;
    return this;
}

