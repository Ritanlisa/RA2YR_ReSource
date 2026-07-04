#include "vectorclass_ptr_buildchoiceclass_int_ouseclass.hpp"

bool __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_4F6910(int a1)
{
    return *(uint32_t *)(a1 + 21372) >= *(uint32_t *)(a1 + 21376);
}

void * VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_4F6930(void *this, int a2)
{
    void *v3; // [esp+0h] [ebp-4h] BYREF
    v3 = this;
    sub_429360((int)&punk, &unk_7E36C0, &v3);
    return v3;
}

int __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_4F69D0(int a1)
{
    double v1; // st7
    v1 = Float4::Sum((float *)(a1 + 728));
    return *(uint32_t *)(a1 + 748) - Math::RoundToInt(v1);
}

int __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_4F6A00(int a1)
{
    return *(uint32_t *)(a1 + 21376);
}

int __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_4F6A10(int a1)
{
    return *(uint32_t *)(a1 + 21380);
}

int __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_4F6A20(int a1, int a2)
{
    int v2; // edi
    int v3; // esi
    uint32_t *v4; // ecx
    v2 = 0;
    v3 = 0;
    if ( g_SidebarState <= 0 )
    return 0;
    do
    v4 = (uint32_t *)*((uint32_t *)g_TechnoClass_Count + v3);
    if ( v4[135] == a1 - 36 && *(uint32_t *)((*(int (__thiscall **)(uint32_t *))(*v4 + 132))(v4) + 956) == a2 )
    ++v2;
    ++v3;
    while ( v3 < g_SidebarState );
    return v2;
}

int __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_4F6A80(int a1, int a2)
{
    int v2; // edi
    int v3; // esi
    uint32_t *v4; // ecx
    v2 = 0;
    v3 = 0;
    if ( g_SidebarState <= 0 )
    return 0;
    do
    v4 = (uint32_t *)*((uint32_t *)g_TechnoClass_Count + v3);
    if ( v4[135] == a1 - 40 && *(uint32_t *)((*(int (__thiscall **)(uint32_t *))(*v4 + 132))(v4) + 956) == a2 )
    ++v2;
    ++v3;
    while ( v3 < g_SidebarState );
    return v2;
}

int __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_4F6AE0(int a1, int a2)
{
    int v2; // ebp
    int v3; // edi
    uint32_t *v4; // esi
    uint32_t *v5; // eax
    v2 = 0;
    v3 = 0;
    if ( g_SidebarState <= 0 )
    return 0;
    do
    v4 = (uint32_t *)*((uint32_t *)g_TechnoClass_Count + v3);
    v5 = (uint32_t *)(*(int (__thiscall **)(uint32_t *))(*v4 + 132))(v4);
    if ( v4[135] == a1 - 36 && v5[239] == a2 )
    v2 += v5[412] + v5[413];
    ++v3;
    while ( v3 < g_SidebarState );
    return v2;
}

int __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_4F6B50(int a1, int a2)
{
    int v2; // ebp
    int v3; // edi
    uint32_t *v4; // esi
    uint32_t *v5; // eax
    v2 = 0;
    v3 = 0;
    if ( g_SidebarState <= 0 )
    return 0;
    do
    v4 = (uint32_t *)*((uint32_t *)g_TechnoClass_Count + v3);
    v5 = (uint32_t *)(*(int (__thiscall **)(uint32_t *))(*v4 + 132))(v4);
    if ( v4[135] == a1 - 40 && v5[239] == a2 )
    v2 += v5[412] + v5[413];
    ++v3;
    while ( v3 < g_SidebarState );
    return v2;
}

uint32_t *__stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_4F6BC0(int a1, uint32_t *a2)
{
    int v2; // kr08_4
    int v3; // eax
    int v4; // eax
    void *v5; // eax
    int *v6; // edx
    bool v7; // zf
    int v8; // esi
    int v9; // eax
    void *v10; // eax
    int *v11; // edx
    int v13; // [esp+8h] [ebp-20h] BYREF
    int v14; // [esp+Ch] [ebp-1Ch] BYREF
    int v15; // [esp+10h] [ebp-18h]
    int v16; // [esp+14h] [ebp-14h]
    int v17; // [esp+18h] [ebp-10h]
    uint8_t v18[12]; // [esp+1Ch] [ebp-Ch] BYREF
    v2 = g_ControlGroupState;
    if ( *(uint32_t *)(a1 + 21616) == g_ControlGroupState )
    v3 = *(uint32_t *)(a1 + 21612);
    else
    v3 = *(uint32_t *)(a1 + 21616);
    v13 = v3;
    if ( v3 == g_ControlGroupState )
    v4 = g_ControlGroupPool;
    v16 = g_ControlGroupConfig;
    v17 = g_ControlGroupLimit;
    else
    v5 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v13);
    v6 = (int *)(*(int (__thiscall **)(void *, uint8_t *))(*(uint32_t *)v5 + 72))(v5, v18);
    v4 = *v6;
    v16 = v6[1];
    v17 = v6[2];
    v2 = g_ControlGroupState;
    v7 = *(_WORD *)(a1 + 21616) == (unsigned __int16)v2;
    LOWORD(v13) = v4 / 256;
    if ( v7 && *(_WORD *)(a1 + 21618) == HIWORD(v2) )
    v8 = *(uint32_t *)(a1 + 21612);
    else
    v8 = *(uint32_t *)(a1 + 21616);
    v14 = v8;
    if ( v8 == v2 )
    v15 = g_ControlGroupPool;
    v9 = g_ControlGroupConfig;
    else
    v10 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v14);
    v11 = (int *)(*(int (__thiscall **)(void *, uint8_t *))(*(uint32_t *)v10 + 72))(v10, v18);
    v15 = *v11;
    v9 = v11[1];
    HIWORD(v13) = v9 / 256;
    *a2 = v13;
    return a2;
}

uint32_t *__stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_4F6D10(int a1, uint32_t *a2)
{
    int v2; // kr08_4
    int v3; // eax
    int v4; // eax
    void *v5; // eax
    int *v6; // edx
    bool v7; // zf
    int v8; // esi
    int v9; // eax
    void *v10; // eax
    int *v11; // edx
    int v13; // [esp+8h] [ebp-20h] BYREF
    int v14; // [esp+Ch] [ebp-1Ch] BYREF
    int v15; // [esp+10h] [ebp-18h]
    int v16; // [esp+14h] [ebp-14h]
    int v17; // [esp+18h] [ebp-10h]
    uint8_t v18[12]; // [esp+1Ch] [ebp-Ch] BYREF
    v2 = g_ControlGroupState;
    if ( *(uint32_t *)(a1 + 21612) == g_ControlGroupState )
    v3 = *(uint32_t *)(a1 + 21608);
    else
    v3 = *(uint32_t *)(a1 + 21612);
    v13 = v3;
    if ( v3 == g_ControlGroupState )
    v4 = g_ControlGroupPool;
    v16 = g_ControlGroupConfig;
    v17 = g_ControlGroupLimit;
    else
    v5 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v13);
    v6 = (int *)(*(int (__thiscall **)(void *, uint8_t *))(*(uint32_t *)v5 + 72))(v5, v18);
    v4 = *v6;
    v16 = v6[1];
    v17 = v6[2];
    v2 = g_ControlGroupState;
    v7 = *(_WORD *)(a1 + 21612) == (unsigned __int16)v2;
    LOWORD(v13) = v4 / 256;
    if ( v7 && *(_WORD *)(a1 + 21614) == HIWORD(v2) )
    v8 = *(uint32_t *)(a1 + 21608);
    else
    v8 = *(uint32_t *)(a1 + 21612);
    v14 = v8;
    if ( v8 == v2 )
    v15 = g_ControlGroupPool;
    v9 = g_ControlGroupConfig;
    else
    v10 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v14);
    v11 = (int *)(*(int (__thiscall **)(void *, uint8_t *))(*(uint32_t *)v10 + 72))(v10, v18);
    v15 = *v11;
    v9 = v11[1];
    HIWORD(v13) = v9 / 256;
    *a2 = v13;
    return a2;
}

int __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_4F6E60(int a1)
{
    return *(uint32_t *)(a1 + 12);
}

int __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_5013A0(uint32_t *a1)
{
    int v1; // ebx
    int i; // esi
    int v3; // ecx
    if ( (int)a1[179] <= 0 )
    return 1;
    v1 = a1[21];
    for ( i = 0; i < v1; ++i )
    v3 = *(uint32_t *)(a1[18] + 4 * i);
    if ( v3 && !*(uint8_t *)(v3 + 129) && *(int *)(v3 + 108) > 0 )
    (*(void (__thiscall **)(int, int))(*(uint32_t *)v3 + 416))(v3, 1);
    return 0;
}

int __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_501400(int a1)
{
    int v1; // edi
    int *v2; // esi
    int v3; // eax
    int v4; // edx
    int v5; // ecx
    int v7; // [esp+8h] [ebp-4h] BYREF
    v1 = g_SidebarState - 1;
    if ( g_SidebarState - 1 < 0 )
    *(uint8_t *)(a1 + 549) = 1;
    return 0;
    else
    do
    v2 = (int *)*((uint32_t *)g_TechnoClass_Count + v1);
    if ( a1 - 36 == v2[135] && *((uint8_t *)v2 + 116) && !*((uint8_t *)v2 + 129) )
    if ( *((uint8_t *)v2 + 708)
    && *(uint8_t *)((*(int (__thiscall **)(uint32_t))(*v2 + 132))(*((uint32_t *)g_TechnoClass_Count + v1)) + 562)
    && !*(uint8_t *)(a1 + 456) )
    v3 = (*(int (__thiscall **)(int *))(*v2 + 132))(v2);
    v4 = *v2;
    v7 = *(uint32_t *)(v3 + 160);
    (*(void (__thiscall **)(int *, int *, uint32_t, int, uint32_t, int, int, uint32_t))(v4 + 364))(
    v2,
    &v7,
    0,
    RulesClass_Instance->SilverCrate[5],
    0,
    1,
    1,
    0);
    else if ( v2 )
    if ( (v2[5] & 4) != 0 )
    v5 = v2[373];
    if ( v5 )
    TeamClass::LiberateMember_Start(v5, (int)v2, 0xFFFFFFFF, 0);
    (*(void (__thiscall **)(int *, int, uint32_t))(*v2 + 488))(v2, 15, 0);
    else if ( (*(int (__thiscall **)(int *))(*v2 + 44))(v2) == 6
    && (*(int (__thiscall **)(int *))(*v2 + 1032))(v2) > 0 )
    BuildingClass::UnloadUnits(v2, 1, 0);
    --v1;
    while ( v1 >= 0 );
    *(uint8_t *)(a1 + 549) = 1;
    return 0;
}

int __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_5024F0(int a1, uint32_t *a2)
{
    uint32_t *v3; // eax
    uint32_t *v4; // eax
    uint32_t *v5; // esi
    if ( !a2 )
    return -2147467261;
    v3 = __2_YAPAXI_Z(0x24u);
    if ( !v3 )
    return -2147024882;
    v4 = VectorClass_ptr_BuildChoiceClass_int_ouseClass::Constructor(v3, (uint32_t *)(a1 + 90168));
    v5 = v4;
    if ( !v4 )
    return -2147024882;
    (*(void (__stdcall **)(uint32_t *))(*v4 + 4))(v4);
    *a2 = v5;
    return 0;
}

int __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_502550(int a1, const void *a2, uint32_t *a3)
{
    int v4; // ebp
    int v5; // ebx
    uint8_t v6[16]; // [esp+10h] [ebp-10h] BYREF
    if ( !a3 )
    return -2147467261;
    *a3 = 0;
    v4 = 0;
    if ( *(int *)(a1 + 90184) <= 0 )
    return -2147220990;
    while ( 1 )
    v5 = *(uint32_t *)(*(uint32_t *)(a1 + 90172) + 4 * v4);
    (*(void (__stdcall **)(int, uint8_t *))(*(uint32_t *)v5 + 12))(v5, v6);
    if ( !memcmp(v6, a2, 0x10u) )
    break;
    if ( ++v4 >= *(uint32_t *)(a1 + 90184) )
    return -2147220990;
    *a3 = v5;
    (*(void (__stdcall **)(int))(*(uint32_t *)v5 + 4))(v5);
    return 0;
}

void  VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_50E640(int this)
{
    void *v2; // eax
    v2 = *(void **)(this + 4);
    *(uint32_t *)(this + 16) = 0;
    if ( v2 && *(uint8_t *)(this + 13) )
    __3_YAXPAX_Z(v2);
    *(uint32_t *)(this + 4) = 0;
    *(uint8_t *)(this + 13) = 0;
    *(uint32_t *)(this + 8) = 0;
}

unsigned int  VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_50E670(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 2;
    else
    return 0;
}

// 0x0050E690
int  VectorClass_ptr_BuildChoiceClass_int_ouseClass::Get(uint32_t *this, int a2)
{
    return *(uint32_t *)(*(this + 1) + 4 * a2);
}

// 0x0050F4E0
char  VectorClass_ptr_BuildChoiceClass_int_ouseClass::Add(int *this, int a2)
{
    int v2; // esi
    int v3; // edx
    uint32_t *v4; // eax
    int v5; // ecx
    v2 = *(this + 2);
    if ( v2 == *(uint32_t *)(a2 + 8) )
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (uint32_t *)*(this + 1);
    v5 = *(uint32_t *)(a2 + 4) - (uint32_t)v4;
    while ( *v4 == *(uint32_t *)((char *)v4 + v5) )
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    return 0;
}

char  VectorClass_ptr_BuildChoiceClass_int_ouseClass::_vt02(void *this, int a2, uint32_t *a3)
{
    uint32_t *v4; // edi
    int v6; // ecx
    int i; // eax
    if ( a2 )
    *((uint8_t *)this + 12) = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    *((uint8_t *)this + 12) = 1;
    if ( v4 )
    if ( *((uint32_t *)this + 1) )
    v6 = *((uint32_t *)this + 2);
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(uint32_t *)(*((uint32_t *)this + 1) + 4 * i - 4) )
    ++i;
    if ( *((uint8_t *)this + 13) )
    __3_YAXPAX_Z(*((void **)this + 1));
    *((uint32_t *)this + 1) = 0;
    *((uint32_t *)this + 1) = v4;
    *((uint32_t *)this + 2) = a2;
    *((uint8_t *)this + 13) = a3 == 0;
    return 1;
    else
    return 0;
    else
    (*(void (__thiscall **)(void *))(*(uint32_t *)this + 12))(this);
    return 1;
}

// 0x0050F5D0
void  VectorClass_ptr_BuildChoiceClass_int_ouseClass::Remove(int this)
{
    if ( *(uint32_t *)(this + 4) && *(uint8_t *)(this + 13) )
    __3_YAXPAX_Z(*(void **)(this + 4));
    *(uint32_t *)(this + 4) = 0;
    *(uint8_t *)(this + 13) = 0;
    *(uint32_t *)(this + 8) = 0;
}

int  VectorClass_ptr_BuildChoiceClass_int_ouseClass::_vt04(int this, uint32_t *a2)
{
    int result; // eax
    int v3; // edx
    uint32_t *i; // ecx
    if ( !*(uint8_t *)(this + 12) )
    return 0;
    v3 = *(uint32_t *)(this + 8);
    result = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = *(uint32_t **)(this + 4); *i != *a2; ++i )
    if ( ++result >= v3 )
    return -1;
    return result;
}

unsigned int  VectorClass_ptr_BuildChoiceClass_int_ouseClass::_vt05(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 2;
    else
    return 0;
}

char  VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_50F660(void *this, int a2, uint32_t *a3)
{
    uint32_t *v4; // edi
    int v5; // ecx
    int i; // eax
    int v7; // eax
    if ( a2 )
    *((uint8_t *)this + 12) = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    *((uint8_t *)this + 12) = 1;
    if ( !v4 )
    return 0;
    if ( *((uint32_t *)this + 1) )
    v5 = *((uint32_t *)this + 2);
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(uint32_t *)(*((uint32_t *)this + 1) + 4 * i - 4) )
    ++i;
    if ( *((uint8_t *)this + 13) )
    __3_YAXPAX_Z(*((void **)this + 1));
    *((uint32_t *)this + 1) = 0;
    *((uint32_t *)this + 1) = v4;
    *((uint32_t *)this + 2) = a2;
    *((uint8_t *)this + 13) = a3 == 0;
    else
    (*(void (__thiscall **)(void *))(*(uint32_t *)this + 12))(this);
    v7 = *((uint32_t *)this + 2);
    if ( v7 < *((uint32_t *)this + 4) )
    *((uint32_t *)this + 4) = v7;
    return 1;
}

int  VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_50F710(int *this, uint32_t *a2)
{
    int v2; // edx
    int result; // eax
    uint32_t *i; // ecx
    v2 = *(this + 4);
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (uint32_t *)*(this + 1); *i != *a2; ++i )
    if ( ++result >= v2 )
    return -1;
    return result;
}

uint32_t * VectorClass_ptr_BuildChoiceClass_int_ouseClass::_vt00(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<HouseClass::BuildChoiceClass *>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

int __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_510A50(int a1, const void *a2, uint32_t *a3)
{
    return HouseClass::QueryInterface(a1 - 36, a2, a3);
}

int __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_510A60(int a1)
{
    return HouseClass::COMStub_Ret1_1(a1 - 36);
}

int __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_510A70(int a1)
{
    return HouseClass::COMStub_Ret1_2(a1 - 36);
}

int __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_510A80(int a1, const void *a2, uint32_t *a3)
{
    return HouseClass::QueryInterface(a1 - 40, a2, a3);
}

int __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_510A90(int a1)
{
    return HouseClass::COMStub_Ret1_1(a1 - 40);
}

int __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_510AA0(int a1)
{
    return HouseClass::COMStub_Ret1_2(a1 - 40);
}

int __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_510AB0(int a1)
{
    return VectorClass_ptr_BuildChoiceClass_int_ouseClass::GetItem_1(a1 - 4);
}

int __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_510AD0(int a1, const void *a2, uint32_t *a3)
{
    return HouseClass::QueryInterface(a1 - 44, a2, a3);
}

int __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_510AE0(int a1)
{
    return HouseClass::COMStub_Ret1_1(a1 - 44);
}

int __stdcall VectorClass_ptr_BuildChoiceClass_int_ouseClass::sub_510AF0(int a1)
{
    return HouseClass::COMStub_Ret1_2(a1 - 44);
}

