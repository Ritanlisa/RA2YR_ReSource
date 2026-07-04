#include "networkbuffer.hpp"

// 0x0074FD50
int  NetworkBuffer::GetField(uint32_t *this)
{
    *(this + 15) = 0x20000;
    *(this + 16) = 0x20000;
    return 0x20000;
}

// 0x0074FD60
int  NetworkBuffer::UpdateWindow(unsigned int *this, unsigned int a2, unsigned int a3)
{
    unsigned int v3; // edi
    unsigned int v5; // eax
    v3 = *(this + 16);
    if ( a2 > v3 )
    return -1;
    v5 = *(this + 15);
    if ( a3 < v5 )
    return 0;
    if ( a2 > v5 )
    *(this + 15) = a2;
    if ( a3 < v3 )
    *(this + 16) = a3;
    return *(this + 16);
}

// 0x0074FDA0
int NetworkBuffer::GetField2()
{
    return 0x20000;
}

// 0x0074FDB0
int NetworkBuffer::GetField3()
{
    return 0x20000;
}

