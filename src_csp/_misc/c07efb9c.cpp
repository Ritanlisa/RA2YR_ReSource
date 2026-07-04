#include "c07efb9c.hpp"

int  C07EFB9C::_vt05(#374 *this, int a2, int *a3)
{
    int *v3; // ebp
    int v4; // edi
    int result; // eax
    int v6; // ecx
    int v8; // edx
    int v9; // ecx
    int v10; // eax
    int v11; // eax
    int v12; // edx
    int i; // esi
    uint8_t v15[4]; // [esp+20h] [ebp-4h] BYREF
    v3 = a3;
    v4 = a2;
    result = BuildingClass::SaveLoad_Register(this);
    if ( result >= 0 )
    if ( v4 )
    ObjectClass::Init((uint32_t *)v4, (int)&a3);
    ParticleSystemClass::resetSystemState((uint32_t *)(v4 + 188), 0, 0);
    *(uint32_t *)(v4 + 188) = &DynamicVectorClass<ParticleClass *>::`vftable';
    *(uint32_t *)(v4 + 208) = 10;
    *(uint32_t *)(v4 + 204) = 0;
    *(uint32_t *)v4 = &ParticleSystemClass::`vftable';
    *(uint32_t *)(v4 + 4) = &ParticleSystemClass::`vftable';
    *(uint32_t *)(v4 + 8) = &ParticleSystemClass::`vftable';
    *(uint32_t *)(v4 + 12) = &off_7EFB70;
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v4 + 172));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v4 + 228));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v4 + 224));
    v6 = *v3;
    a2 = 0;
    result = (*(int (__stdcall **)(int *, int *, int, uint32_t))(v6 + 12))(v3, &a2, 4, 0);
    if ( result >= 0 )
    if ( a2-- == 0 )
    LABEL_14:
    for ( i = 0; i < *(uint32_t *)(v4 + 204); ++i )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(uint32_t *)(v4 + 192) + 4 * i));
    return 0;
    else
    while ( 1 )
    v8 = *v3;
    a3 = 0;
    result = (*(int (__stdcall **)(int *, int **, int, uint8_t *))(v8 + 12))(v3, &a3, 4, v15);
    if ( result < 0 )
    break;
    v9 = *(uint32_t *)(v4 + 196);
    if ( *(uint32_t *)(v4 + 204) < v9
    || (*(uint8_t *)(v4 + 201) || !v9)
    && (v10 = *(uint32_t *)(v4 + 208), v10 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, uint32_t))(*(uint32_t *)(v4 + 188) + 8))(v4 + 188, v9 + v10, 0) )
    v11 = *(uint32_t *)(v4 + 204);
    v12 = *(uint32_t *)(v4 + 192);
    *(uint32_t *)(v4 + 204) = v11 + 1;
    *(uint32_t *)(v12 + 4 * v11) = a3;
    if ( !a2-- )
    goto LABEL_14;
    return result;
}

int __stdcall C07EFB9C::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = 237448648;
    a2[1] = 298949647;
    a2[2] = -1610610249;
    a2[3] = -777003740;
    return 0;
}

