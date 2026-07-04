#include "eventclass.hpp"

// 0x0048BAD0
int  EventClass::SetData(uint32_t *this, int a2, int a3, int a4, int a5, int a6)
{
    *(this + 17) = a2;
    *(this + 18) = a3;
    *(this + 19) = a4;
    *(this + 20) = a5;
    *(this + 21) = a6;
    return a6;
}

char * EventClass::Init(char *this, int a2, char a3, int a4, int a5, int a6, _WORD *a7)
{
    Debug::Log();
    if ( a2 < 0 )
    *(this + 2) = -1;
    *this = 0;
    *(uint32_t *)(this + 3) = CurrentFrame;
    return this;
    else
    *(this + 2) = a2;
    *(uint32_t *)(this + 11) = a5;
    *this = a3;
    *(uint32_t *)(this + 7) = a4;
    *(uint32_t *)(this + 15) = a6;
    *(_WORD *)(this + 19) = *a7;
    *(_WORD *)(this + 21) = a7[1];
    *(uint32_t *)(this + 3) = CurrentFrame;
    return this;
}

// 0x005F19C0
int  EventClass::CheckFlag(uint32_t *this)
{
    int v1; // eax
    v1 = *(this + 14);
    if ( v1 )
    EventClass::serializeEvent(*(int **)(v1 + 4));
    return 1;
}

// 0x005F3440
int __stdcall EventClass::GetState(int a1)
{
    return 0;
}

