#include "audio.hpp"

int  Audio::ReleaseChannelRefs(uint32_t *this)
{
    int v2; // ebx
    int result; // eax
    uint32_t **v4; // esi
    v2 = 0;
    result = *(this + 42);
    if ( result <= 0 )
    *(this + 42) = 0;
    else
    v4 = (uint32_t **)(this + 10);
    do
    RefCount::Decrement(*v4);
    *v4 = 0;
    result = *(this + 42);
    ++v2;
    ++v4;
    while ( v2 < result );
    *(this + 42) = 0;
    return result;
}

// 0x00407070
int  Audio::GetFlag(unsigned int *this)
{
    return RequestBufferMixer(this, 0);
}

int  Audio::WaitForCallback(int this)
{
    int v2; // ebx
    unsigned __int64 v3; // rax
    unsigned __int64 v4; // kr00_8
    v2 = Audio::Callback();
    LODWORD(v3) = *(uint32_t *)(this + 4);
    v4 = *(_QWORD *)(this + 16) + __PAIR64__(HIDWORD(v3), v2);
    if ( (uint32_t)v3 != *(uint32_t *)(this + 8) )
    do
    LODWORD(v3) = Audio::Callback();
    if ( v3 >= v4 )
    break;
    Event::Dispatch();
    LODWORD(v3) = *(uint32_t *)(this + 8);
    while ( *(uint32_t *)(this + 4) != (uint32_t)v3 );
    return v3;
}

