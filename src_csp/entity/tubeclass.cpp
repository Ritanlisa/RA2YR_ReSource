#include "tubeclass.hpp"

int __stdcall TubeClass::_vt05(AbstractClass *a1, int a2)
{
    int result; // eax
    result = AbstractClass::SaveLoad_Prefix_0(a1, a2);
    if ( result >= 0 )
    if ( a1 )
    AbstractClass::Constructor(a1);
    a1->parent_gap[0] = (int)&TubeClass::`vftable';
    a1->parent_gap[1] = (int)&TubeClass::`vftable';
    a1->parent_gap[2] = (int)&TubeClass::`vftable';
    a1->parent_gap[3] = (int)&TubeClass::`vftable';
    return 0;
    return result;
}

int __stdcall TubeClass::_vt06(int *a1, int *a2, int a3)
{
    int result; // eax
    result = AbstractClass::SaveLoad_Prefix(a1, a2, a3);
    if ( result >= 0 )
    return 0;
    return result;
}

int  TubeClass::_vt13(int this, unsigned int *a2)
{
    int *v3; // ebx
    int v4; // ebp
    AbstractClass::ProcessPower((void*378 *)this);
    Checksummer::Add_WORD(a2, *(_WORD *)(this + 36));
    Checksummer::Add_WORD(a2, *(_WORD *)(this + 38));
    Checksummer::Add_WORD(a2, *(_WORD *)(this + 40));
    Checksummer::Add_WORD(a2, *(_WORD *)(this + 42));
    Power::TimerProcess(*(uint32_t *)(this + 44));
    v3 = (int *)(this + 48);
    v4 = 100;
    do
    Power::TimerProcess(*v3++);
    --v4;
    while ( v4 );
    return Power::TimerProcess(*(uint32_t *)(this + 448));
}

int TubeClass::_vt12()
{
    return 452;
}

int TubeClass::_vt11()
{
    return 53;
}

int __stdcall TubeClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = 189572124;
    a2[1] = 298955687;
    a2[2] = 1610635188;
    a2[3] = 2041169559;
    return 0;
}

uint32_t * TubeClass::_vt08(uint32_t *Block, char a2)
{
    __int16 *v3; // eax
    int v4; // ecx
    void **v5; // edx
    int v6; // eax
    uint32_t *v8; // [esp+4h] [ebp-4h] BYREF
    *Block = &TubeClass::`vftable';
    *(Block + 1) = &TubeClass::`vftable';
    *(Block + 2) = &TubeClass::`vftable';
    *(Block + 3) = &TubeClass::`vftable';
    AbstractClass::AnnounceExpiredPointer((void **)Block, 1);
    v3 = (__int16 *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)Block + 18);
    if ( v3 )
    v4 = 0;
    if ( g_UnitTypeCount <= 0 )
    LABEL_6:
    v4 = -1;
    else
    v5 = (void **)g_PathClass_State;
    while ( *v5 != Block )
    ++v4;
    ++v5;
    if ( v4 >= g_UnitTypeCount )
    goto LABEL_6;
    if ( v3[139] == v4 )
    v3[139] = -1;
    v8 = Block;
    v6 = (*(int (__thiscall **)(int *, uint32_t **))(dword_8B4138 + 16))(&dword_8B4138, &v8);
    if ( v6 != -1 && v6 < g_UnitTypeCount && v6 < --g_UnitTypeCount )
    do
    ++v6;
    *((uint32_t *)g_PathClass_State + v6 - 1) = *((uint32_t *)g_PathClass_State + v6);
    while ( v6 < g_UnitTypeCount );
    AbstractClass::DTOR(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

