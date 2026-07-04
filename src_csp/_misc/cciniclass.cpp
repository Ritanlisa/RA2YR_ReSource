#include "cciniclass.hpp"

uint32_t * CCINIClass::Constructor(uint32_t *this)
{
    uint32_t *result; // eax
    uint32_t *v2; // esi
    uint32_t *v3; // ecx
    int v4; // ebx
    int v5; // edi
    int v6; // edi
    int v7; // edi
    result = this;
    v2 = this + 4;
    v3 = this + 7;
    result[1] = 0;
    result[2] = 0;
    v2[1] = 0;
    v2[2] = 0;
    *v2 = &GenericNode::`vftable';
    v3[1] = 0;
    v3[2] = 0;
    *v3 = &GenericNode::`vftable';
    result[3] = &GenericList::`vftable';
    if ( v3 )
    v4 = v3[1];
    if ( v4 )
    v5 = v3[2];
    if ( v5 )
    *(uint32_t *)(v5 + 4) = v4;
    *(uint32_t *)(v3[1] + 8) = v3[2];
    v3[2] = 0;
    v3[1] = 0;
    v6 = v2[1];
    v3[2] = v2;
    v3[1] = v6;
    v7 = v2[1];
    if ( v7 )
    *(uint32_t *)(v7 + 8) = v3;
    v2[1] = v3;
    result[3] = &List<INIClass::INISection *>::`vftable';
    result[10] = 0;
    result[11] = 0;
    result[12] = 0;
    *((uint8_t *)result + 52) = 0;
    result[14] = 0;
    result[15] = 0;
    *((uint8_t *)result + 64) = 0;
    *result = &CCINIClass_Vtable;
    return result;
}

