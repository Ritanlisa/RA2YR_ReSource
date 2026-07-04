#include "pageusercommandclass.hpp"

char *PageUserCommandClass::_vt01()
{
    return aPageuser;
}

char __stdcall PageUserCommandClass::_vt08(int a1)
{
    char result; // al
    if ( GameMode_Current[0] == 4 )
    return sub_6470F0();
    return result;
}

