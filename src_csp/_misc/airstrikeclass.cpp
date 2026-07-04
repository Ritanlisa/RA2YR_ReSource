#include "airstrikeclass.hpp"

int  AirstrikeClass::AirstrikeClass(int this, int a2)
{
    int v3; // eax
    int v4; // eax
    int v5; // ecx
    int v6; // eax
    int v7; // ecx
    int v8; // eax
    int v9; // ecx
    int v10; // eax
    int v11; // ecx
    int v12; // eax
    int v13; // ecx
    int v14; // eax
    AbstractClass::Constructor((AbstractClass *)this);
    *(uint32_t *)this = &AirstrikeClass::`vftable';
    *(uint32_t *)(this + 4) = &AirstrikeClass::`vftable';
    *(uint32_t *)(this + 8) = &AirstrikeClass::`vftable';
    *(uint32_t *)(this + 12) = &AirstrikeClass::`vftable';
    if ( dword_889FC8 < dword_889FC0
    || (byte_889FC5 || !dword_889FC0)
    && dword_889FCC > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(dword_889FB8 + 8))(
    &dword_889FB8,
    dword_889FC0 + dword_889FCC,
    0) )
    v3 = dword_889FC8++;
    *((uint32_t *)dword_889FBC + v3) = this;
    *(uint8_t *)(this + 60) = 0;
    *(uint32_t *)(this + 76) = a2;
    *(uint8_t *)(this + 61) = 0;
    v4 = (*(int (__thiscall **)(int))(*(uint32_t *)a2 + 132))(a2);
    v5 = *(uint32_t *)(this + 76);
    *(uint32_t *)(this + 36) = *(uint32_t *)(v4 + 1564);
    v6 = (*(int (__thiscall **)(int))(*(uint32_t *)v5 + 132))(v5);
    v7 = *(uint32_t *)(this + 76);
    *(uint32_t *)(this + 40) = *(uint32_t *)(v6 + 1568);
    v8 = (*(int (__thiscall **)(int))(*(uint32_t *)v7 + 132))(v7);
    v9 = *(uint32_t *)(this + 76);
    *(uint32_t *)(this + 68) = *(uint32_t *)(v8 + 1580);
    v10 = (*(int (__thiscall **)(int))(*(uint32_t *)v9 + 132))(v9);
    v11 = *(uint32_t *)(this + 76);
    *(uint32_t *)(this + 72) = *(uint32_t *)(v10 + 1584);
    v12 = (*(int (__thiscall **)(int))(*(uint32_t *)v11 + 132))(v11);
    v13 = *(uint32_t *)(this + 76);
    *(uint32_t *)(this + 84) = *(uint32_t *)(v12 + 1572);
    v14 = *(uint32_t *)((*(int (__thiscall **)(int))(*(uint32_t *)v13 + 132))(v13) + 1576);
    *(uint32_t *)(this + 92) = 0;
    *(uint32_t *)(this + 88) = v14;
    *(uint32_t *)(this + 80) = 0;
    return this;
}

int  AirstrikeClass::_vt13(#378 *this, int a2)
{
    return AbstractClass::ProcessPower(this);
}

int __stdcall AirstrikeClass::_vt05(int *a1, int a2)
{
    int Prefix_0; // edi
    Prefix_0 = AbstractClass::SaveLoad_Prefix_0(a1, a2);
    if ( Prefix_0 >= 0 )
    if ( a1 )
    AbstractClass::InitVtables(a1, (int)&a2);
    *a1 = (int)&AirstrikeClass::`vftable';
    a1[1] = (int)&AirstrikeClass::`vftable';
    a1[2] = (int)&AirstrikeClass::`vftable';
    a1[3] = (int)&AirstrikeClass::`vftable';
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 19);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 20);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 21);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 22);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 23);
    return Prefix_0;
}

int __stdcall AirstrikeClass::_vt06(int *a1, int *a2, int a3)
{
    return AbstractClass::SaveLoad_Prefix(a1, a2, a3);
}

int __stdcall AirstrikeClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = 1893611809;
    a2[1] = 299179558;
    a2[2] = -1610574449;
    a2[3] = -1672772828;
    return 0;
}

// 0x0041D830
char  AirstrikeClass::StartMission(int this, int *a2)
{
    char result; // al
    result = (char)a2;
    if ( !*(uint8_t *)(this + 60) )
    return AirstrikeClass::SpawnAircraft(this, a2);
    if ( a2 != *(int **)(this + 80) )
    return AirstrikeClass::ReassignTarget(this, (int)a2);
    return result;
}

// 0x0041DC80
int  AirstrikeClass::RemoveAircraft(int this, int a2)
{
    int result; // eax
    int v3; // edi
    wchar_t *v4; // edx
    result = *(uint32_t *)(this + 92);
    v3 = 0;
    if ( result == a2 )
    *(uint32_t *)(this + 92) = *(uint32_t *)(a2 + 1496);
    *(uint32_t *)(a2 + 1496) = 0;
    result = *(uint32_t *)(this + 48) - 1;
    *(uint32_t *)(this + 48) = result;
    *(uint32_t *)(a2 + 660) = 0;
    else if ( result )
    do
    if ( *(uint32_t *)(result + 1496) == a2 )
    *(uint32_t *)(result + 1496) = *(uint32_t *)(a2 + 1496);
    *(uint32_t *)(a2 + 1496) = 0;
    result = 0;
    --*(uint32_t *)(this + 48);
    *(uint32_t *)(a2 + 660) = 0;
    else
    result = *(uint32_t *)(result + 1496);
    ++v3;
    while ( v3 <= 100 && result );
    if ( *(int *)(this + 48) <= 0 )
    v4 = CurrentFrame;
    *(uint8_t *)(this + 60) = 0;
    *(uint32_t *)(this + 64) = v4;
    *(uint8_t *)(this + 61) = 0;
    return result;
}

int AirstrikeClass::_vt12()
{
    return 96;
}

int AirstrikeClass::_vt11()
{
    return 71;
}

uint32_t * AirstrikeClass::_vt08(uint32_t *Block, char a2)
{
    int v3; // eax
    uint32_t *v5; // [esp+4h] [ebp-4h] BYREF
    *Block = &AirstrikeClass::`vftable';
    *(Block + 1) = &AirstrikeClass::`vftable';
    *(Block + 2) = &AirstrikeClass::`vftable';
    *(Block + 3) = &AirstrikeClass::`vftable';
    v5 = Block;
    v3 = (*(int (__thiscall **)(int *, uint32_t **))(dword_889FB8 + 16))(&dword_889FB8, &v5);
    if ( v3 != -1 && v3 < dword_889FC8 && v3 < --dword_889FC8 )
    do
    ++v3;
    *((uint32_t *)dword_889FBC + v3 - 1) = *((uint32_t *)dword_889FBC + v3);
    while ( v3 < dword_889FC8 );
    AbstractClass::DTOR(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

