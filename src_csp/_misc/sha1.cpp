#include "sha1.hpp"

// 0x0069D8C0
int * SHA1::ProcessBlock(uint32_t *this, const void **a2, int *a3)
{
    int *result; // eax
    int v5; // ecx
    int v6; // edx
    unsigned int v7; // eax
    int v8; // eax
    result = a3;
    v5 = *a3;
    if ( *a3 )
    if ( *a2 )
    v6 = *(this + 12);
    if ( v6 || v5 < 64 )
    v7 = 64 - v6;
    if ( v5 < 64 - v6 )
    v7 = *a3;
    qmemcpy((char *)this + v6 + 52, *a2, v7);
    *a2 = (char *)*a2 + v7;
    *(this + 12) += v7;
    *a3 -= v7;
    result = (int *)*(this + 12);
    if ( result == (int *)64 )
    SHA1::Transform(this + 13, this + 6);
    v8 = *(this + 11);
    *(this + 12) = 0;
    result = (int *)(v8 + 64);
    *(this + 11) = result;
    return result;
}

