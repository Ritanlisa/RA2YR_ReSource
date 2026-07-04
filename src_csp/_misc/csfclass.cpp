#include "csfclass.hpp"

int  CSFClass::LoadMissingStrings(char *this)
{
    char *v1; // esi
    wchar_t **v2; // edi
    wchar_t *StringCSF; // eax
    wchar_t *v4; // ebx
    int result; // eax
    int v6; // ecx
    int v7; // edx
    v1 = this + 10540;
    v2 = (wchar_t **)off_83ED04;
    do
    StringCSF = GetStringCSF(*v2, 0, g_Str_File_Session_CPP, 593);
    v4 = _wcsdup(StringCSF);
    result = *((uint32_t *)v1 + 2);
    if ( *((uint32_t *)v1 + 4) < result
    || (v1[13] || !result)
    && (v6 = *((uint32_t *)v1 + 5), v6 > 0)
    && (result = (*(int (__thiscall **)(char *, int, uint32_t))(*(uint32_t *)v1 + 8))(v1, result + v6, 0), (uint8_t)result) )
    result = *((uint32_t *)v1 + 4);
    v7 = *((uint32_t *)v1 + 1);
    *((uint32_t *)v1 + 4) = result + 1;
    *(uint32_t *)(v7 + 4 * result) = v4;
    ++v2;
    while ( (int)v2 < (int)byte_83ED14 );
    return result;
}

