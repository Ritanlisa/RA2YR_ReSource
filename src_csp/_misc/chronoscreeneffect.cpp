#include "chronoscreeneffect.hpp"

// 0x00753580
int ChronoScreenEffect::DecrementCounter()
{
    int result; // eax
    result = dword_B1D3D8;
    if ( dword_B1D3D8 )
    result = --dword_B1D3D8;
    if ( dword_B1D3D8 < 0 )
    dword_B1D3D8 = 0;
    return result;
}

