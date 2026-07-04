#include "audiostream.hpp"

int  AudioStream::Reset(uint32_t *this)
{
    *this = 0;
    *(this + 1) = 0;
    *(this + 2) = 0;
    *(this + 3) = 0;
    *(this + 4) = 0;
    *(this + 5) = 0;
    *(this + 6) = 0;
    *(this + 7) = 0;
    *(this + 10) = 0;
    *(this + 11) = 0;
    *(this + 18) = 0;
    *(this + 20) = 0;
    *(this + 16) = 5000;
    *(this + 17) = 0;
    *(this + 12) = 0;
    *(this + 13) = 0;
    *(this + 14) = 0;
    *(this + 15) = 0;
    *(this + 21) = 0;
    *(this + 19) = 0;
    return 0;
}

int  AudioStream::ResetChannel(uint32_t *this, int a2, int a3)
{
    *(this + 2) = a2;
    *(this + 3) = a3;
    return a2;
}

int  AudioStream::ResetChannel2(uint32_t *this, int a2, int a3)
{
    *(this + 8) = a2;
    *(this + 9) = a3;
    return a2;
}

// 0x004079C0
int  AudioStream::ReadStreamAndSyncPosition(uint32_t *this)
{
    int v2; // esi
    int v3; // eax
    int v4; // ecx
    int v5; // eax
    v2 = *(this + 48);
    ReadAudioStream(*(int **)(v2 + 56), *(uint32_t *)(v2 + 144));
    AudioStream::ReadStreamAndReturn(*(int **)(v2 + 56));
    v3 = *(uint32_t *)(v2 + 160);
    v4 = *(uint32_t *)(*(uint32_t *)(v2 + 56) + 8);
    if ( v3 <= v4 )
    *(uint32_t *)(v2 + 144) = v3;
    else
    *(uint32_t *)(v2 + 144) = v4;
    v5 = *(uint32_t *)(v2 + 144);
    *(this + 93) = v5;
    *(this + 94) = v5;
    *(this + 92) = *(uint32_t *)(*(uint32_t *)(v2 + 56) + 4);
    return 0;
}

// 0x007BD270
int  AudioStream::SetFlag4C(int this)
{
    int result; // eax
    (*(void (__cdecl **)(int, int, uint32_t, uint32_t))(this + 88))(this, 4, 0, 0);
    result = *(uint32_t *)(this + 1980);
    LOBYTE(result) = result | 0x40;
    *(uint32_t *)(this + 1980) = result;
    return result;
}

