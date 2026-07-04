#include "audiomixer.hpp"

int __fastcall AudioMixer::PlayBuffer(uint32_t *a1, unsigned int a2)
{
    int v2; // eax
    uint32_t *v4; // esi
    v2 = a2;
    if ( a1[7] == 3 )
    if ( a2 > 0x4000 )
    v2 = 0x4000;
    return RequestBufferMixer(a1 + 46, (unsigned int)(v2 * HIWORD(*(uint32_t *)(a1[9] + 28))) >> 14);
    else
    if ( a2 > 0x4000 )
    v2 = 0x4000;
    v4 = a1 + 46;
    EndBufferMixer(a1 + 46, (unsigned int)(v2 * HIWORD(*(uint32_t *)(a1[9] + 28))) >> 14);
    return AudioMixer::PlaySample(v4);
}

int __fastcall AudioMixer::RequestOrEndBuffer(int a1, unsigned int a2)
{
    if ( *(uint32_t *)(a1 + 28) == 3 )
    if ( a2 > 0x4000 )
    a2 = 0x4000;
    return RequestBufferMixer((unsigned int *)(a1 + 264), a2);
    else
    if ( a2 > 0x4000 )
    a2 = 0x4000;
    return EndBufferMixer((int *)(a1 + 264), a2);
}

int  AudioMixer::SetVolume(int this)
{
    int result; // eax
    result = 1;
    if ( (*(uint8_t *)(this + 16) & 1) == 0 || *(uint32_t *)(this + 76) )
    return 0;
    return result;
}

