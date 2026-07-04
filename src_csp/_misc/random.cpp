#include "random.hpp"

int  Random::AdvanceRandomBytes(char *this, char a2)
{
    char *v3; // eax
    int v4; // eax
    unsigned int v5; // esi
    char *v6; // ebp
    size_t v7; // eax
    bool v8; // zf
    int result; // eax
    int v10; // [esp+10h] [ebp-8Ch]
    char Src[20]; // [esp+14h] [ebp-88h] BYREF
    uint32_t v12[29]; // [esp+28h] [ebp-74h] BYREF
    v10 = 8;
    do
    if ( (a2 & 1) != 0 )
    v3 = this + (unsigned __int8)(*((uint32_t *)this + 3) / 8) + 20;
    *v3 ^= 1 << (*((uint32_t *)this + 3) & 7);
    v4 = *((uint32_t *)this + 3) + 1;
    *((uint32_t *)this + 3) = v4;
    if ( v4 == 2048 )
    v5 = 0;
    LOBYTE(v12[0]) = 0;
    v12[11] = 0;
    v12[12] = 0;
    v12[6] = 1732584193;
    v12[7] = -271733879;
    v12[8] = -1732584194;
    v12[9] = 271733878;
    v12[10] = -1009589776;
    v6 = this + 20;
    do
    SHA1::Process(v12, (int)(this + 20), 256);
    SHA1::Compute(v12, Src);
    v7 = 256 - v5;
    if ( 256 - v5 > 0x14 )
    v7 = 20;
    memcpy(v6, Src, v7);
    ++v5;
    ++v6;
    while ( v5 < 0x100 );
    result = v10 - 1;
    v8 = v10 == 1;
    a2 >>= 1;
    --v10;
    while ( !v8 );
    return result;
}

