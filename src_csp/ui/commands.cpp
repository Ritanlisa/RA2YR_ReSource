#include "commands.hpp"

char *Commands::_vt01()
{
    return aMultiplayerdeb;
}

char **Commands::_vt02()
{
    return &off_8278C0;
}

char __stdcall Commands::_vt08(int a1)
{
    char result; // al
    result = byte_A8B8B4;
    if ( byte_A8B8B4 )
    result = byte_A8B8B5 == 0;
    byte_A8B8B5 = byte_A8B8B5 == 0;
    return result;
}

