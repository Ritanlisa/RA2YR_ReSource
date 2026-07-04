#include "fileextension.hpp"

char  FileExtension::CheckExtensionMatch(uint32_t *this, int a2)
{
    int v3; // ecx
    int v4; // eax
    int v6; // eax
    int v7; // ecx
    int v8; // edx
    int v9; // eax
    int v10; // esi
    v3 = *(this + 2);
    if ( *(this + 4) >= v3 )
    if ( !*((uint8_t *)this + 13) && v3 )
    return 0;
    v4 = *(this + 5);
    if ( v4 <= 0 || !(*(unsigned __int8 (__thiscall **)(uint32_t *, int, uint32_t))(*this + 8))(this, v3 + v4, 0) )
    return 0;
    v6 = *(this + 4);
    v7 = v6 + 1;
    v8 = 65 * v6;
    v9 = *(this + 1);
    *(this + 4) = v7;
    v10 = v9 + 4 * v8;
    String::CopyChecked((char *)v10, (const char *)a2);
    *(uint32_t *)(v10 + 256) = *(uint32_t *)(a2 + 256);
    return 1;
}

