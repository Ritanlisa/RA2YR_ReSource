#include "fileclass.hpp"

int FileClass::_vt14()
{
    return 0;
}

char __stdcall FileClass::_vt15(int a1)
{
    return 0;
}

// 0x0076F020
int  FileClass::GetState(uint32_t *this)
{
    return *(this + 1);
}

// 0x0076F070
int  FileClass::SetState(uint32_t *this)
{
    return *(this + 1);
}

