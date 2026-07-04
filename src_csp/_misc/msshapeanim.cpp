#include "msshapeanim.hpp"

void * MSShapeAnim::Constructor(void *this, char **a2, int a3, int a4, int a5, int a6, char a7, int a8)
{
    int FileClassToBuffer; // eax
    *((uint32_t *)this + 2) = a4;
    *((uint32_t *)this + 1) = a3;
    *((uint8_t *)this + 12) = 1;
    *((uint32_t *)this + 4) = Timer::GetTicks();
    *((uint32_t *)this + 6) = 0;
    *((uint32_t *)this + 8) = a5;
    *((uint8_t *)this + 52) = a7;
    *((uint32_t *)this + 14) = a8;
    *((uint32_t *)this + 9) = a6;
    *((uint32_t *)this + 10) = 0;
    *(uint32_t *)this = &MSShapeAnim::`vftable';
    *((uint8_t *)this + 60) = 0;
    FileClassToBuffer = LoadFileClassToBuffer(a2, (bool *)this + 60);
    *((uint32_t *)this + 7) = FileClassToBuffer;
    *((uint32_t *)this + 11) = 0;
    *((uint32_t *)this + 12) = *(__int16 *)(FileClassToBuffer + 6) - 1;
    return this;
}

