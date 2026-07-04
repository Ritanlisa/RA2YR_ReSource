#include "scriptclass.hpp"

int  ScriptClass::_vt13(int this, int a2)
{
    AbstractClass::ProcessPower((void*378 *)this);
    return Power::TimerProcess(*(uint32_t *)(this + 44));
}

// 0x00691540
uint32_t * ScriptClass::GetNextAction(uint32_t *this, uint32_t *a2)
{
    int v2; // edx
    int v3; // ecx
    uint32_t *result; // eax
    v2 = *(this + 9);
    v3 = *(this + 11);
    result = a2;
    if ( v3 + 1 < *(uint32_t *)(v2 + 160) )
    *a2 = *(uint32_t *)(v2 + 8 * v3 + 172);
    a2[1] = *(uint32_t *)(v2 + 8 * v3 + 176);
    else
    *a2 = -1;
    a2[1] = 0;
    return result;
}

int __stdcall ScriptClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = 1123264070;
    a2[1] = 298977161;
    a2[2] = 1610655148;
    a2[3] = -1252326136;
    return 0;
}

int __stdcall ScriptClass::_vt05(uint32_t *a1, int a2)
{
    int result; // eax
    result = AbstractClass::SaveLoad_Prefix_0(a1, a2);
    if ( result >= 0 )
    if ( a1 )
    AbstractClass::InitVtables(a1, (int)&a2);
    *a1 = &ScriptClass::`vftable';
    a1[1] = &ScriptClass::`vftable';
    a1[2] = &ScriptClass::`vftable';
    a1[3] = &ScriptClass::`vftable';
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 9);
    return 0;
    return result;
}

int __stdcall ScriptClass::_vt06(int *a1, int *a2, int a3)
{
    int result; // eax
    result = AbstractClass::SaveLoad_Prefix(a1, a2, a3);
    if ( result >= 0 )
    return 0;
    return result;
}

int ScriptClass::_vt11()
{
    return 26;
}

int ScriptClass::_vt12()
{
    return 48;
}

void ** ScriptClass::_vt08(void **Block, char a2)
{
    int v3; // eax
    void **v5; // [esp+4h] [ebp-4h] BYREF
    *Block = &ScriptClass::`vftable';
    *(Block + 1) = &ScriptClass::`vftable';
    *(Block + 2) = &ScriptClass::`vftable';
    *(Block + 3) = &ScriptClass::`vftable';
    AbstractClass::AnnounceExpiredPointer(Block, 1);
    v5 = Block;
    v3 = (*(int (__thiscall **)(int *, void ***))(dword_8872B0 + 16))(&dword_8872B0, &v5);
    if ( v3 != -1 && v3 < dword_8872C0 && v3 < --dword_8872C0 )
    do
    ++v3;
    *((uint32_t *)dword_8872B4 + v3 - 1) = *((uint32_t *)dword_8872B4 + v3);
    while ( v3 < dword_8872C0 );
    AbstractClass::DTOR(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

