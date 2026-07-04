#include "layerclass.hpp"

// 0x00551B20
int  LayerClass::Save(uint32_t *this, uint32_t *a2)
{
    uint32_t *v2; // esi
    int result; // eax
    uint32_t *v5; // eax
    int v6; // ecx
    int v7; // edi
    uint32_t *v8; // [esp+0h] [ebp-1Ch]
    v2 = a2;
    if ( !a2 )
    return -2147467261;
    v5 = (uint32_t *)*(this + 4);
    v6 = *a2;
    v8 = a2;
    a2 = v5;
    result = (*(int (__stdcall **)(uint32_t *, uint32_t **, int, uint32_t))(v6 + 16))(v8, &a2, 4, 0);
    if ( result >= 0 )
    v7 = 0;
    if ( (int)a2 <= 0 )
    return 0;
    else
    while ( 1 )
    result = (*(int (__stdcall **)(uint32_t *, int, int, uint32_t))(*v2 + 16))(v2, *(this + 1) + 4 * v7, 4, 0);
    if ( result < 0 )
    break;
    if ( ++v7 >= (int)a2 )
    return 0;
    return result;
}

// 0x00551B90
int  LayerClass::Load(uint32_t *this, uint32_t *a2)
{
    uint32_t *v2; // edi
    int result; // eax
    int v5; // eax
    int v6; // eax
    int v7; // ebx
    int v8; // ecx
    int v9; // eax
    int v10; // eax
    int v11; // edx
    int v12; // edi
    int v13; // [esp+28h] [ebp-4h] BYREF
    v2 = a2;
    if ( !a2 )
    return -2147467261;
    v5 = *a2;
    a2 = 0;
    result = (*(int (__stdcall **)(uint32_t *, uint32_t **, int, uint32_t))(v5 + 12))(v2, &a2, 4, 0);
    if ( result >= 0 )
    v6 = (int)a2;
    v7 = 0;
    if ( (int)a2 <= 0 )
    LABEL_13:
    v12 = 0;
    if ( v6 > 0 )
    do
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(this + 1) + 4 * v12++));
    while ( v12 < (int)a2 );
    return 0;
    else
    while ( 1 )
    result = (*(int (__stdcall **)(uint32_t *, int *, int, uint32_t))(*v2 + 12))(v2, &v13, 4, 0);
    if ( result < 0 )
    break;
    v8 = *(this + 2);
    if ( *(this + 4) < v8
    || (*((uint8_t *)this + 13) || !v8)
    && (v9 = *(this + 5), v9 > 0)
    && (*(unsigned __int8 (__thiscall **)(uint32_t *, int, uint32_t))(*this + 8))(this, v8 + v9, 0) )
    v10 = *(this + 4);
    v11 = *(this + 1);
    *(this + 4) = v10 + 1;
    *(uint32_t *)(v11 + 4 * v10) = v13;
    v6 = (int)a2;
    if ( ++v7 >= (int)a2 )
    goto LABEL_13;
    return result;
}

