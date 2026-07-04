#include "std.hpp"

bool  HouseClass_FindType24(std::codecvt_base **this)
{
    std::codecvt_base *v1; // ecx
    bool result; // al
    v1 = *(this + 43);
    result = 0;
    if ( !v1 )
    JUMPOUT(0x726FD0);
    while ( *((uint32_t *)v1 + 11) != 24 )
    v1 = (std::codecvt_base *)*((uint32_t *)v1 + 10);
    if ( !v1 )
    return result;
    return _do_always_noconv_codecvt_base_std__MBE_NXZ_20(v1);
}

bool __fastcall sub_7532A0(std::codecvt_base *a1)
{
    if ( (int)a1 < 0 || (int)a1 >= g_InfantrySelectState )
    return _do_always_noconv_codecvt_base_std__MBE_NXZ_21(a1);
    else
    return *(uint32_t *)(*((uint32_t *)g_InfantryRenderPool + (uint32_t)a1) + 80) == 2;
}

