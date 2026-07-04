#include "msanim.hpp"

unsigned int  MSAnim::GetField(uint32_t *this, unsigned int a2)
{
    int v2; // eax
    unsigned int result; // eax
    v2 = *(this + 7);
    *(this + 11) = a2;
    result = *(__int16 *)(v2 + 6);
    if ( a2 >= result )
    *(this + 11) = --result;
    return result;
}

unsigned int  MSAnim::SetField(uint32_t *this, unsigned int a2)
{
    int v2; // eax
    unsigned int result; // eax
    v2 = *(this + 7);
    *(this + 12) = a2;
    result = *(__int16 *)(v2 + 6);
    if ( a2 >= result )
    *(this + 12) = --result;
    return result;
}

// 0x005CC6A0
int  MSAnim::Reset(uint32_t *this, int a2)
{
    *(this + 16) = 0;
    *(this + 10) = a2;
    return a2;
}

