#include "house.hpp"

int  House::IsAlliedWith(#375 *this, #375 *other)
{
    int result; // eax
    int v3; // ecx
    result = (int)this;
    if ( !other )
    goto LABEL_8;
    if ( other == this )
    LOBYTE(result) = 1;
    return result;
    v3 = *((uint32_t *)other + 12);
    if ( v3 == *(uint32_t *)(result + 48) )
    LOBYTE(result) = 1;
    return result;
    if ( v3 == -1 )
    LABEL_8:
    LOBYTE(result) = 0;
    else
    LOBYTE(result) = ((1 << v3) & *(uint32_t *)(result + 22408)) != 0;
    return result;
}

int  House::IsHumanPlayer(#375 *this)
{
    if ( GameMode_Current[0] )
    return this == HouseClass_Player;
    return *((uint8_t *)this + 492) || *((uint8_t *)this + 493);
}

int  House::IsCurrentPlayer(#375 *this)
{
    int result; // eax
    result = GameMode_Current[0];
    LOBYTE(result) = *((uint8_t *)this + 492);
    if ( !GameMode_Current[0] )
    LOBYTE(result) = (uint8_t)result || *((uint8_t *)this + 493);
    return result;
}

