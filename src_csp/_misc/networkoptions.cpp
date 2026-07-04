#include "networkoptions.hpp"

int  NetworkOptions::ApplySettings(int this, int a2, char *a3, signed int a4)
{
    int v5; // eax
    int v6; // ebx
    uint8_t v7[6]; // [esp+8h] [ebp-110h] BYREF
    unsigned __int8 v8; // [esp+Eh] [ebp-10Ah]
    unsigned __int8 v9; // [esp+Fh] [ebp-109h]
    unsigned __int8 v10; // [esp+10h] [ebp-108h]
    unsigned __int8 v11; // [esp+11h] [ebp-107h]
    unsigned __int8 v12; // [esp+12h] [ebp-106h]
    int v13; // [esp+13h] [ebp-105h]
    char Buffer[256]; // [esp+18h] [ebp-100h] BYREF
    if ( !*(uint8_t *)(this + 258152) )
    return 0;
    v5 = IPXInterfaceClass::initSocket((uint32_t *)this, a2, (int)v7);
    v6 = v5;
    if ( v5 )
    if ( v5 == 2 )
    sprintf(Buffer, "?? ?? ?? ?? : %02x %02x %02x %02x %02x %02x", v8, v9, v10, v11, v12, (unsigned __int8)v13);
    else
    sprintf(
    Buffer,
    "%02x %02x %02x %02x : %02x %02x %02x %02x %02x %02x",
    v7[2],
    v7[3],
    v7[4],
    v7[5],
    v8,
    v9,
    v10,
    v11,
    v12,
    (unsigned __int8)v13);
    if ( (int)strlen(Buffer) >= a4 )
    return 0;
    strcpy(a3, Buffer);
    return v6;
}

