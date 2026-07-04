#include "checksummer.hpp"

int  Checksummer::Add_WORD(unsigned int *this, __int16 a2)
{
    return Checksummer::Add_Buffer(this, (unsigned __int8 *)&a2, 2);
}

int  Checksummer::Add_float(unsigned int *this, int a2)
{
    return Checksummer::Add_Buffer(this, (unsigned __int8 *)&a2, 4);
}

int  Checksummer::Add_double(unsigned int *this, int a2, int a3)
{
    return Checksummer::Add_Buffer(this, (unsigned __int8 *)&a2, 8);
}

int  Checksummer::HashString(char *Source)
{
    int v1; // ebp
    unsigned int v3; // kr04_4
    int v4; // ebx
    int v5; // esi
    int v6; // esi
    int v7; // ecx
    int i; // edx
    int v9; // ecx
    int j; // esi
    int k; // edi
    char v12; // si
    char v13; // dl
    char v14; // cl
    char v15; // cl
    char v16; // si
    char v17; // al
    int v18; // [esp+4h] [ebp-9Ch]
    char v19; // [esp+8h] [ebp-98h]
    unsigned int v20; // [esp+Ch] [ebp-94h] BYREF
    int v21; // [esp+10h] [ebp-90h]
    int v22; // [esp+14h] [ebp-8Ch]
    int v23; // [esp+18h] [ebp-88h]
    int v24; // [esp+1Ch] [ebp-84h]
    char Destination[128]; // [esp+20h] [ebp-80h] BYREF
    HIWORD(v1) = 0;
    if ( !Source )
    return 0;
    memset(Destination, 0xA5u, sizeof(Destination));
    strncpy(Destination, Source, 0x80u);
    Destination[127] = 0;
    v3 = strlen(Destination) + 1;
    v4 = v3 - 1;
    v23 = v3 - 1;
    _strupr(Destination);
    v5 = 0;
    if ( (int)(v3 - 1) > 0 )
    do
    if ( !isgraph(Destination[v5]) )
    Destination[v5] = v5 % 26 + 65;
    ++v5;
    while ( v5 < v4 );
    if ( v4 < 16 || (v4 & 3) != 0 )
    v6 = 16;
    if ( (((uint8_t)v4 + 3) & 0xFCu) > 0x10 )
    v6 = ((uint8_t)v4 + 3) & 0xFC;
    v7 = v3 - 1;
    if ( v4 < v6 )
    do
    Destination[v7] = (v7 + (Destination[v7 - v4] ^ 0x3F)) % 26 + 65;
    ++v7;
    while ( v7 < v6 );
    v4 = v7;
    Destination[v7] = 0;
    v23 = v7;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    Checksummer::Add_Buffer(&v20, (unsigned __int8 *)Destination, v4);
    _strrev(Destination);
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v18 = Checksummer::Add_Buffer(&v20, (unsigned __int8 *)Destination, v4);
    _strrev(Destination);
    for ( i = 0; i < v4; v18 = (v9 >> 8) | ((unsigned __int8)v9 << 24) )
    v9 = (unsigned __int8)Destination[i] ^ v18;
    Destination[i++] = v18;
    for ( j = 0; j < v4; ++j )
    Destination[j] = ~byte_832C0C[j & 7] & (Destination[j] | byte_832C14[j & 7]);
    for ( k = 0; k < v4; Destination[k - 1] = (v17 + v16) ^ v15 )
    v12 = Destination[k];
    LOWORD(v1) = Destination[k + 2];
    v13 = v12 * v12;
    v14 = Destination[k + 3];
    v19 = 2 * Destination[k + 1];
    v24 = 2 * v1;
    v15 = v14 * v14;
    v16 = v12 * ((v12 * v12) ^ (2 * v1));
    k += 4;
    v17 = v1 * (v16 + (v19 ^ v15));
    Destination[k - 4] = v17 ^ v13;
    Destination[k - 3] = v17 ^ v24;
    v4 = v23;
    Destination[k - 2] = (v17 + v16) ^ v19;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    return Checksummer::Add_Buffer(&v20, (unsigned __int8 *)Destination, v4);
}

