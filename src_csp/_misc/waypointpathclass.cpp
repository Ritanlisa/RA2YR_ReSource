#include "waypointpathclass.hpp"

int  WaypointPathClass::_vt13(int this, int a2)
{
    AbstractClass::ProcessPower((void*378 *)this);
    Power::TimerProcess(*(uint32_t *)(this + 36));
    return Power::TimerProcess(*(uint32_t *)(this + 56));
}

int __stdcall WaypointPathClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = -147774022;
    a2[1] = 298979412;
    a2[2] = 1610642049;
    a2[3] = -1252326136;
    return 0;
}

int __stdcall WaypointPathClass::_vt05(uint32_t *a1, int a2)
{
    uint32_t *v2; // esi
    int v3; // edi
    int result; // eax
    uint32_t *v5; // esi
    int v6; // ebp
    int v7; // eax
    int v8; // ecx
    int v9; // eax
    int v10; // eax
    int v11; // ecx
    int v12; // edx
    int v13; // eax
    uint32_t *v14; // ecx
    int v15; // [esp+28h] [ebp-Ch] BYREF
    int v16; // [esp+2Ch] [ebp-8h]
    int v17; // [esp+30h] [ebp-4h]
    v2 = a1;
    v3 = a2;
    result = AbstractClass::SaveLoad_Prefix_0(a1, a2);
    if ( result >= 0 )
    if ( v2 )
    AbstractClass::InitVtables(v2, (int)&a2);
    v2[10] = &DynamicVectorClass<WaypointClass>::`vftable';
    *v2 = &WaypointPathClass::`vftable';
    v2[1] = &WaypointPathClass::`vftable';
    v2[2] = &WaypointPathClass::`vftable';
    v2[3] = &WaypointPathClass::`vftable';
    result = (*(int (__stdcall **)(int, uint32_t **, int, uint32_t))(*(uint32_t *)v3 + 12))(v3, &a1, 4, 0);
    if ( result >= 0 )
    v5 = v2 + 10;
    if ( v5 )
    WaypointPathClass::computePath(v5, 0, 0);
    *v5 = &DynamicVectorClass<WaypointClass>::`vftable';
    v5[5] = 10;
    v5[4] = 0;
    v6 = 0;
    if ( (int)a1 <= 0 )
    return 0;
    else
    while ( 1 )
    v7 = *(uint32_t *)v3;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    result = (*(int (__stdcall **)(int, int *, int, uint32_t))(v7 + 12))(v3, &v15, 12, 0);
    if ( result < 0 )
    break;
    v8 = v5[2];
    if ( v5[4] < v8
    || (*((uint8_t *)v5 + 13) || !v8)
    && (v9 = v5[5], v9 > 0)
    && (*(unsigned __int8 (__thiscall **)(uint32_t *, int, uint32_t))(*v5 + 8))(v5, v8 + v9, 0) )
    v10 = v5[4];
    v11 = v10 + 1;
    v12 = 3 * v10;
    v13 = v5[1];
    v5[4] = v11;
    v14 = (uint32_t *)(v13 + 4 * v12);
    *v14 = v15;
    v14[1] = v16;
    v14[2] = v17;
    if ( ++v6 >= (int)a1 )
    return 0;
    return result;
}

int __stdcall WaypointPathClass::_vt06(int *a1, int *a2, int a3)
{
    int result; // eax
    int v4; // edx
    int v5; // ebp
    int i; // edi
    result = AbstractClass::SaveLoad_Prefix(a1, a2, a3);
    if ( result >= 0 )
    v4 = *a2;
    a3 = a1[14];
    result = (*(int (__stdcall **)(int *, int *, int, uint32_t))(v4 + 16))(a2, &a3, 4, 0);
    if ( result >= 0 )
    v5 = 0;
    if ( a3 <= 0 )
    return 0;
    else
    for ( i = 0; ; i += 12 )
    result = (*(int (__stdcall **)(int *, int, int, uint32_t))(*a2 + 16))(a2, a1[11] + i, 12, 0);
    if ( result < 0 )
    break;
    if ( ++v5 >= a3 )
    return 0;
    return result;
}

int WaypointPathClass::_vt12()
{
    return 64;
}

int WaypointPathClass::_vt11()
{
    return 51;
}

void ** WaypointPathClass::_vt08(void **Block, char a2)
{
    int v3; // eax
    int v4; // eax
    void **v6; // [esp+4h] [ebp-4h] BYREF
    *Block = &WaypointPathClass::`vftable';
    *(Block + 1) = &WaypointPathClass::`vftable';
    *(Block + 2) = &WaypointPathClass::`vftable';
    *(Block + 3) = &WaypointPathClass::`vftable';
    AbstractClass::AnnounceExpiredPointer(Block, 1);
    v6 = Block;
    v3 = (*(int (__thiscall **)(int *, void ***))(dword_B72608 + 16))(&dword_B72608, &v6);
    if ( v3 != -1 && v3 < dword_B72618 && v3 < --dword_B72618 )
    do
    ++v3;
    *((uint32_t *)dword_B7260C + v3 - 1) = *((uint32_t *)dword_B7260C + v3);
    while ( v3 < dword_B72618 );
    v4 = (int)*(Block + 11);
    *(Block + 10) = &VectorClass<WaypointClass>::`vftable';
    if ( v4 && *((uint8_t *)Block + 53) )
    __3_YAXPAX_Z((void *)(v4 - 4));
    *(Block + 11) = 0;
    *((uint8_t *)Block + 53) = 0;
    *(Block + 12) = 0;
    AbstractClass::DTOR(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

