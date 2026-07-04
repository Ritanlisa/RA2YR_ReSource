#include "bombclass.hpp"

int  BombClass::AbstractClass(int this)
{
    int v2; // eax
    AbstractClass::Constructor((AbstractClass *)this);
    *(uint32_t *)(this + 84) = 0;
    *(uint32_t *)this = &BombClass::`vftable';
    *(uint32_t *)(this + 4) = &BombClass::`vftable';
    *(uint32_t *)(this + 8) = &BombClass::`vftable';
    *(uint32_t *)(this + 12) = &BombClass::`vftable';
    *(uint32_t *)(this + 40) = 0;
    *(uint32_t *)(this + 44) = 0;
    *(uint8_t *)(this + 88) = 0;
    AudioController::Init((uint32_t *)(this + 60));
    *(uint32_t *)(this + 80) = RulesClass_Instance->BunkerWallsDownSound;
    if ( dword_89C678 < dword_89C670
    || (byte_89C675 || !dword_89C670)
    && dword_89C67C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(dword_89C668 + 8))(
    &dword_89C668,
    dword_89C670 + dword_89C67C,
    0) )
    v2 = dword_89C678++;
    *((uint32_t *)dword_89C66C + v2) = this;
    return this;
}

// 0x004389F0
int  BombClass::IsDeathBomb(uint32_t *this)
{
    return *(this + 12);
}

// 0x00438A70
bool  BombClass::TimeToExplode(int this)
{
    return !*(uint32_t *)(this + 48) && (int)CurrentFrame > *(uint32_t *)(this + 56) && !*(uint8_t *)(this + 88);
}

int  BombClass::_vt13(int this, int *a2)
{
    int v3; // edx
    int v4; // eax
    int v5; // eax
    int v6; // eax
    int v7; // eax
    int v8; // eax
    int v9; // eax
    AbstractClass::ProcessPower((void*378 *)this);
    v4 = *(uint32_t *)(this + 40);
    if ( v4 )
    v5 = (*(int (__stdcall **)(int))(*(uint32_t *)(v4 + 4) + 16))(v4 + 4);
    Power::TimerProcess(v5);
    v6 = *(uint32_t *)(this + 36);
    if ( v6 )
    v7 = (*(int (__stdcall **)(int))(*(uint32_t *)(v6 + 4) + 16))(v6 + 4);
    Power::TimerProcess(v7);
    v8 = *(uint32_t *)(this + 44);
    if ( v8 )
    v9 = (*(int (__stdcall **)(int))(*(uint32_t *)(v8 + 4) + 16))(v8 + 4);
    Power::TimerProcess(v9);
    LOBYTE(v3) = *(uint8_t *)(this + 88);
    return Power::FlagProcess(a2, v3);
}

int __stdcall BombClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = 108652931;
    a2[1] = 299085213;
    a2[2] = 268441278;
    a2[3] = 1822515787;
    return 0;
}

int __stdcall BombClass::_vt05(int *a1, int a2)
{
    int Prefix_0; // edi
    Prefix_0 = AbstractClass::SaveLoad_Prefix_0(a1, a2);
    if ( Prefix_0 >= 0 )
    if ( a1 )
    AbstractClass::InitVtables(a1, (int)&a2);
    *a1 = (int)&BombClass::`vftable';
    a1[1] = (int)&BombClass::`vftable';
    a1[2] = (int)&BombClass::`vftable';
    a1[3] = (int)&BombClass::`vftable';
    AudioController::Init(a1 + 15);
    a1[21] = 0;
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 10);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 9);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 11);
    return Prefix_0;
}

int __stdcall BombClass::_vt06(int *a1, int *a2, int a3)
{
    return AbstractClass::SaveLoad_Prefix(a1, a2, a3);
}

int BombClass::_vt12()
{
    return 92;
}

int BombClass::_vt11()
{
    return 68;
}

uint32_t * BombClass::_vt08(uint32_t *Block, char a2)
{
    int v3; // eax
    uint32_t *v5; // [esp+4h] [ebp-4h] BYREF
    *Block = &BombClass::`vftable';
    *(Block + 1) = &BombClass::`vftable';
    *(Block + 2) = &BombClass::`vftable';
    *(Block + 3) = &BombClass::`vftable';
    AudioFileClass::Release(Block + 15);
    v5 = Block;
    v3 = (*(int (__thiscall **)(int *, uint32_t **))(dword_89C668 + 16))(&dword_89C668, &v5);
    if ( v3 != -1 && v3 < dword_89C678 && v3 < --dword_89C678 )
    do
    ++v3;
    *((uint32_t *)dword_89C66C + v3 - 1) = *((uint32_t *)dword_89C66C + v3);
    while ( v3 < dword_89C678 );
    AbstractClass::DTOR(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

