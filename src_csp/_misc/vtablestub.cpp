#include "vtablestub.hpp"

// 0x00477740
int  VtableStub::477740(void *this)
{
    return (*(int (__thiscall **)(void *))(*(uint32_t *)this + 4))(this);
}

// 0x0055CBF0
char VtableStub::55CBF0()
{
    return byte_ABCD58;
}

// 0x005CB6C0
void  VtableStub::5CB6C0(uint32_t *this)
{
    *this = &MSAnim::`vftable';
}

// 0x00643E70
void  VtableStub::643E70(uint32_t *this)
{
    *(this + 25) = 0;
}

// 0x0065D690
char __stdcall VtableStub::RetZero_eax_35(int a1)
{
    return 0;
}

// 0x0072F510
int VtableStub::72F510()
{
    return dword_B0FBF8;
}

