#include "empulseclass.hpp"

int  EMPulseClass::IterateCellsInRadius(int this)
{
    int result; // eax
    int v3; // ebx
    int i; // ebp
    int v5; // edi
    unsigned __int16 v6; // cx
    int v7; // eax
    int v8; // edx
    uint32_t *v9; // eax
    int v10; // [esp+Ch] [ebp-8h] BYREF
    int v11; // [esp+10h] [ebp-4h]
    result = *(uint32_t *)(this + 40);
    v3 = -result;
    for ( i = result * result; v3 <= result; ++v3 )
    v5 = -result;
    if ( -result <= result )
    do
    v6 = v3 + *(_WORD *)(this + 38);
    LOWORD(v11) = v5 + *(_WORD *)(this + 36);
    HIWORD(v11) = v6;
    v10 = v11;
    if ( (unsigned __int16)v11 < 0x200u && v6 < 0x200u && Cell::Exists(&MapClass_Instance, (__int16 *)&v10) )
    v7 = (__int16)v10 - *(__int16 *)(this + 36);
    v8 = SHIWORD(v10) - *(__int16 *)(this + 38);
    if ( v7 * v7 + v8 * v8 <= i )
    v9 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v10);
    v9[80] &= ~0x80000u;
    ++v5;
    while ( v5 <= *(uint32_t *)(this + 40) );
    result = *(uint32_t *)(this + 40);
    return result;
}

int  EMPulseClass::_vt13(int this, unsigned int *a2)
{
    AbstractClass::ProcessPower((void*378 *)this);
    Checksummer::Add_WORD(a2, *(_WORD *)(this + 36));
    Checksummer::Add_WORD(a2, *(_WORD *)(this + 38));
    Power::TimerProcess(*(uint32_t *)(this + 40));
    Power::TimerProcess(*(uint32_t *)(this + 44));
    return Power::TimerProcess(*(uint32_t *)(this + 48));
}

int __stdcall EMPulseClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = -1205482718;
    a2[1] = 298983438;
    a2[2] = 1610656159;
    a2[3] = 1490328072;
    return 0;
}

int __stdcall EMPulseClass::_vt05(uint32_t *a1, int a2)
{
    int result; // eax
    result = AbstractClass::SaveLoad_Prefix_0(a1, a2);
    if ( result >= 0 )
    if ( a1 )
    AbstractClass::InitVtables(a1, (int)&a2);
    *a1 = &EMPulseClass::`vftable';
    a1[1] = &EMPulseClass::`vftable';
    a1[2] = &EMPulseClass::`vftable';
    a1[3] = &EMPulseClass::`vftable';
    return 0;
    return result;
}

int __stdcall EMPulseClass::_vt06(int *a1, int *a2, int a3)
{
    int result; // eax
    result = AbstractClass::SaveLoad_Prefix(a1, a2, a3);
    if ( result >= 0 )
    return 0;
    return result;
}

int EMPulseClass::_vt12()
{
    return 52;
}

int EMPulseClass::_vt11()
{
    return 55;
}

void ** EMPulseClass::_vt08(void **this, char a2)
{
    int v3; // eax
    void **v5; // [esp+4h] [ebp-4h] BYREF
    *this = &EMPulseClass::`vftable';
    *(this + 1) = &EMPulseClass::`vftable';
    *(this + 2) = &EMPulseClass::`vftable';
    *(this + 3) = &EMPulseClass::`vftable';
    if ( WTFMode )
    EMPulseClass::IterateCellsInRadius((int)this);
    AbstractClass::AnnounceExpiredPointer(this, 1);
    v5 = this;
    v3 = (*(int (__thiscall **)(int *, void ***))(dword_8A3870 + 16))(&dword_8A3870, &v5);
    if ( v3 != -1 && v3 < dword_8A3880 && v3 < --dword_8A3880 )
    do
    ++v3;
    *((uint32_t *)dword_8A3874 + v3 - 1) = *((uint32_t *)dword_8A3874 + v3);
    while ( v3 < dword_8A3880 );
    AbstractClass::DTOR(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}

