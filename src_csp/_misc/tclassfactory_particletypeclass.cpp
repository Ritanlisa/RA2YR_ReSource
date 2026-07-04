#include "tclassfactory_particletypeclass.hpp"

int __stdcall TClassFactory_ParticleTypeClass::Create(int a1, const void *a2, uint32_t *a3)
{
    if ( !a3 )
    return -2147467261;
    *a3 = 0;
    if ( !memcmp(a2, &IID_IUnknown, 0x10u) || !memcmp(a2, &unk_7F7CA0, 0x10u) )
    *a3 = a1;
    if ( !*a3 )
    return -2147467262;
    (*(void (__stdcall **)(int))(*(uint32_t *)a1 + 4))(a1);
    return 0;
}

int __stdcall TClassFactory_ParticleTypeClass::_vt03(int a1, int a2, int a3, uint32_t *a4)
{
    uint32_t *v5; // eax
    uint32_t *v6; // eax
    uint32_t *v7; // esi
    int v8; // edi
    if ( !a4 )
    return -2147024809;
    *a4 = 0;
    if ( a2 )
    return -2147221232;
    v5 = __2_YAPAXI_Z(0x318u);
    if ( !v5 )
    return -2147024882;
    v6 = BuildingTypeClass::Construct(v5, 0);
    v7 = v6;
    if ( !v6 )
    return -2147024882;
    v8 = (*(int (__stdcall **)(uint32_t *, int, uint32_t *))*v6)(v6, a3, a4);
    if ( v8 < 0 )
    (*(void (__thiscall **)(uint32_t *, int))(*v7 + 32))(v7, 1);
    return v8;
}

int __stdcall TClassFactory_ParticleTypeClass::_vt04(int a1, int a2)
{
    int v2; // ecx
    int v3; // ecx
    v2 = *(uint32_t *)(a1 + 4);
    if ( a2 )
    v3 = v2 + 1;
    else
    v3 = v2 - 1;
    *(uint32_t *)(a1 + 4) = v3;
    return 0;
}

