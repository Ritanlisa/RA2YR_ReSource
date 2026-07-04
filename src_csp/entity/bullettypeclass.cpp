#include "bullettypeclass.hpp"

uint32_t *__stdcall BulletTypeClass::_vt27(uint32_t *a1, int *a2)
{
    int GroundHeight; // eax
    int v3; // ecx
    int v5; // [esp+0h] [ebp-Ch] BYREF
    int v6; // [esp+4h] [ebp-8h]
    int v7; // [esp+8h] [ebp-4h]
    v5 = *a2;
    v6 = a2[1];
    v7 = a2[2];
    GroundHeight = Cell::GetGroundHeight(&v5);
    v3 = v7;
    if ( v7 <= GroundHeight )
    v3 = Cell::GetGroundHeight(&v5) + 1;
    *a1 = v5;
    a1[1] = v6;
    a1[2] = v3;
    return a1;
}

// 0x0046C560
int  BulletTypeClass::ProcessPower(int this, int *a2)
{
    int v3; // eax
    int v4; // ecx
    int v5; // edx
    int v6; // eax
    int v7; // ecx
    int v8; // edx
    int v9; // eax
    int v10; // ecx
    int v11; // edx
    int v12; // eax
    int v13; // ecx
    int v14; // edx
    int v15; // eax
    int v16; // ecx
    int v17; // edx
    int v18; // edx
    v3 = AbstractTypeClass::ProcessPower((char *)this, a2);
    LOBYTE(v3) = *(uint8_t *)(this + 660);
    Power::FlagProcess(a2, v3);
    LOBYTE(v4) = *(uint8_t *)(this + 666);
    Power::FlagProcess(a2, v4);
    LOBYTE(v5) = *(uint8_t *)(this + 667);
    v6 = Power::FlagProcess(a2, v5);
    LOBYTE(v6) = *(uint8_t *)(this + 668);
    Power::FlagProcess(a2, v6);
    LOBYTE(v7) = *(uint8_t *)(this + 669);
    Power::FlagProcess(a2, v7);
    LOBYTE(v8) = *(uint8_t *)(this + 670);
    v9 = Power::FlagProcess(a2, v8);
    LOBYTE(v9) = *(uint8_t *)(this + 671);
    Power::FlagProcess(a2, v9);
    LOBYTE(v10) = *(uint8_t *)(this + 672);
    Power::FlagProcess(a2, v10);
    LOBYTE(v11) = *(uint8_t *)(this + 673);
    v12 = Power::FlagProcess(a2, v11);
    LOBYTE(v12) = *(uint8_t *)(this + 674);
    Power::FlagProcess(a2, v12);
    LOBYTE(v13) = *(uint8_t *)(this + 675);
    Power::FlagProcess(a2, v13);
    LOBYTE(v14) = *(uint8_t *)(this + 676);
    v15 = Power::FlagProcess(a2, v14);
    LOBYTE(v15) = *(uint8_t *)(this + 677);
    Power::FlagProcess(a2, v15);
    LOBYTE(v16) = *(uint8_t *)(this + 678);
    Power::FlagProcess(a2, v16);
    LOBYTE(v17) = *(uint8_t *)(this + 679);
    Power::FlagProcess(a2, v17);
    Checksummer::Add_double(*(uint32_t *)(this + 712), *(uint32_t *)(this + 716));
    Power::TimerProcess(*(uint32_t *)(this + 720));
    Power::TimerProcess(*(uint32_t *)(this + 732));
    Power::TimerProcess(*(uint32_t *)(this + 752));
    LOBYTE(v18) = *(uint8_t *)(this + 759);
    return Power::FlagProcess(a2, v18);
}

// 0x0046C6A0
int __stdcall BulletTypeClass::SaveLoad_Prefix(uint32_t *a1, int a2)
{
    int result; // eax
    result = ObjectTypeClass::LoadCleanup((int)a1, a2);
    if ( result >= 0 )
    if ( a1 )
    ObjectTypeClass::Construct(a1, (int)&a2);
    *a1 = &BulletTypeClass::`vftable';
    a1[1] = &BulletTypeClass::`vftable';
    a1[2] = &BulletTypeClass::`vftable';
    a1[3] = &BulletTypeClass::`vftable';
    VoxelAnimType::LoadAnim((char *)a1);
    ObjectTypeClass::Load2DArt((char *)a1);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 182);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 172);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 173);
    return 0;
    return result;
}

// 0x0046C730
int __stdcall BulletTypeClass::SaveLoad_Prefix_0(int a1, int a2, int a3)
{
    int result; // eax
    result = AbstractClass::SaveLoad_PrefixWrapper(a1, a2, a3);
    if ( result >= 0 )
    return 0;
    return result;
}

int __stdcall BulletTypeClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = 1525862007;
    a2[1] = 298976820;
    a2[2] = 1610654892;
    a2[3] = -1252326136;
    return 0;
}

int  BulletTypeClass::_vt10(uint32_t *this, int a2, int a3)
{
    int result; // eax
    result = a2;
    if ( a2 == *(this + 182) )
    *(this + 182) = 0;
    return result;
}

// 0x0046C840
int  BulletTypeClass::SetScaledSpawnDelay(uint32_t *this, int a2)
{
    *(this + 186) = a2;
    return a2;
}

int BulletTypeClass::_vt11()
{
    return 9;
}

int BulletTypeClass::_vt12()
{
    return 760;
}

char __stdcall BulletTypeClass::_vt32(int a1, int a2)
{
    return 0;
}

int __stdcall BulletTypeClass::_vt35(int a1)
{
    return 0;
}

void ** BulletTypeClass::_vt08(void **Block, char a2)
{
    int v3; // eax
    int v4; // eax
    void **v6; // [esp+4h] [ebp-4h] BYREF
    *Block = &BulletTypeClass::`vftable';
    *(Block + 1) = &BulletTypeClass::`vftable';
    *(Block + 2) = &BulletTypeClass::`vftable';
    *(Block + 3) = &BulletTypeClass::`vftable';
    AbstractClass::AnnounceExpiredPointer(Block, 1);
    v6 = Block;
    v3 = (*(int (__thiscall **)(int *, void ***))(g_AnimPoolManager + 16))(&g_AnimPoolManager, &v6);
    if ( v3 != -1 && v3 < g_AnimManager && v3 < --g_AnimManager )
    do
    ++v3;
    *((uint32_t *)g_AnimPoolCount + v3 - 1) = *((uint32_t *)g_AnimPoolCount + v3);
    while ( v3 < g_AnimManager );
    v6 = Block;
    v4 = (*(int (__thiscall **)(int *, void ***))(BulletTypeClass_Array + 16))(&BulletTypeClass_Array, &v6);
    if ( v4 != -1 && v4 < g_BulletTypeInitState && v4 < --g_BulletTypeInitState )
    do
    ++v4;
    *((uint32_t *)dword_A83C84 + v4 - 1) = *((uint32_t *)dword_A83C84 + v4);
    while ( v4 < g_BulletTypeInitState );
    ObjectTypeClass::Destruct((int)Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

