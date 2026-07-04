#include "ipersiststream.hpp"

// 0x005B36E0
char __fastcall IPersistStream::SetField(int a1)
{
    if ( a1 == -1 )
    return 1;
    else
    return byte_A8E3AE[32 * a1];
}

int __stdcall IPersistStream::_vt64(int a1, int a2)
{
    return 0;
}

