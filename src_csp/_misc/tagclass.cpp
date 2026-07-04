#include "tagclass.hpp"

int  TagClass::Destructor(void **this)
{
    uint32_t *v2; // ecx
    int v3; // eax
    void ***v4; // ecx
    int v5; // ecx
    uint32_t *v6; // ecx
    int v7; // eax
    void ***v8; // ecx
    int v9; // ecx
    int v10; // eax
    int v11; // eax
    int OwnerHouseClass; // eax
    int v13; // ecx
    uint32_t *v14; // eax
    int v15; // esi
    int v16; // eax
    int v17; // eax
    int v18; // eax
    int v19; // eax
    int v20; // eax
    uint32_t v22[4]; // [esp+10h] [ebp-10h] BYREF
    *this = &TagClass::`vftable';
    *(this + 1) = &TagClass::`vftable';
    *(this + 2) = &TagClass::`vftable';
    *(this + 3) = &TagClass::`vftable';
    AbstractClass::AnnounceExpiredPointer(this);
    if ( WTFMode )
    if ( g_BounceClassInit )
    v2 = *(this + 9);
    if ( v2 )
    if ( (Debug::AccumFlags(v2) & 0x10) != 0 )
    v3 = 0;
    if ( g_ScenarioUpdateState <= 0 )
    LABEL_9:
    v3 = -1;
    else
    v4 = (void ***)dword_8B40CC;
    while ( *v4 != this )
    ++v3;
    ++v4;
    if ( v3 >= g_ScenarioUpdateState )
    goto LABEL_9;
    v5 = dword_A83CDC;
    if ( dword_A83CDC >= v3 )
    --dword_A83CDC;
    if ( v5 - 1 < 0 && !g_ScenarioUpdateState )
    dword_A83CDC = 0;
    if ( WTFMode )
    if ( g_BounceClassInit )
    v6 = *(this + 9);
    if ( v6 )
    if ( (Debug::AccumFlags(v6) & 4) != 0 )
    v7 = 0;
    if ( dword_8B41B8 <= 0 )
    LABEL_22:
    v7 = -1;
    else
    v8 = (void ***)dword_8B41AC;
    while ( *v8 != this )
    ++v7;
    ++v8;
    if ( v7 >= dword_8B41B8 )
    goto LABEL_22;
    v9 = dword_A83DBC;
    if ( dword_A83DBC >= v7 )
    --dword_A83DBC;
    if ( v9 - 1 < 0 && !dword_8B41B8 )
    dword_A83DBC = 0;
    if ( WTFMode )
    if ( g_BounceClassInit )
    v10 = (int)*(this + 10);
    if ( v10 )
    v11 = *(uint32_t *)(v10 + 36);
    if ( v11 )
    if ( *(uint32_t *)(v11 + 164) && (unsigned __int8)TagClass::HasValidHouse(*(this + 9)) )
    OwnerHouseClass = HouseClass::FindOwner(*(void **)(*(uint32_t *)(*((uint32_t *)*(this + 10) + 9) + 164) + 184));
    v13 = *(uint32_t *)(OwnerHouseClass + 636);
    if ( v13 )
    *(uint32_t *)(OwnerHouseClass + 636) = v13 - 1;
    v14 = (uint32_t *)(OwnerHouseClass + 664);
    *v14 = CurrentFrame;
    v14[1] = v22[2];
    v14[2] = 60;
    v15 = (int)*(this + 10);
    if ( v15 )
    v16 = dword_B0F6A0;
    do
    if ( g_LaserDrawConfig < v16 )
    goto LABEL_43;
    if ( !byte_B0F6A5 && v16 || dword_B0F6AC <= 0 )
    goto LABEL_45;
    if ( (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(g_DiskLaserManager + 8))(
    &g_DiskLaserManager,
    v16 + dword_B0F6AC,
    0) )
    LABEL_43:
    v17 = g_LaserDrawConfig++;
    *((uint32_t *)dword_B0F69C + v17) = v15;
    v16 = dword_B0F6A0;
    LABEL_45:
    v15 = *(uint32_t *)(v15 + 40);
    while ( v15 );
    v22[0] = this;
    v18 = (*(int (__thiscall **)(int *, uint32_t *))(g_AnimPoolManager + 16))(&g_AnimPoolManager, v22);
    if ( v18 != -1 && v18 < g_AnimManager && v18 < --g_AnimManager )
    do
    ++v18;
    *((uint32_t *)g_AnimPoolCount + v18 - 1) = *((uint32_t *)g_AnimPoolCount + v18);
    while ( v18 < g_AnimManager );
    v22[0] = this;
    v19 = (*(int (__thiscall **)(int *, uint32_t *))(dword_B0F708 + 16))(&dword_B0F708, v22);
    if ( v19 != -1 && v19 < dword_B0F718 && v19 < --dword_B0F718 )
    do
    ++v19;
    *((uint32_t *)dword_B0F70C + v19 - 1) = *((uint32_t *)dword_B0F70C + v19);
    while ( v19 < dword_B0F718 );
    v22[0] = this;
    v20 = (*(int (__thiscall **)(int *, uint32_t *))(TagClass_Array + 16))(&TagClass_Array, v22);
    if ( v20 != -1 && v20 < g_GameObjectCleanup && v20 < --g_GameObjectCleanup )
    do
    ++v20;
    *((uint32_t *)g_TagClassCount + v20 - 1) = *((uint32_t *)g_TagClassCount + v20);
    while ( v20 < g_GameObjectCleanup );
    AbstractClass::AnnounceExpiredPointer(this);
    return AbstractClass::DTOR(this);
}

// 0x006E5230
int  TagClass::Destroy(uint8_t *this)
{
    int result; // eax
    *(this + 52) = 1;
    result = dword_B0F6A0;
    if ( g_LaserDrawConfig < dword_B0F6A0
    || (byte_B0F6A5 || !dword_B0F6A0)
    && dword_B0F6AC > 0
    && (result = (*(int (__thiscall **)(int *, int, uint32_t))(g_DiskLaserManager + 8))(
    &g_DiskLaserManager,
    dword_B0F6A0 + dword_B0F6AC,
    0),
    (uint8_t)result) )
    result = g_LaserDrawConfig++;
    *((uint32_t *)dword_B0F69C + result) = this;
    return result;
}

// 0x006E55C0
int  TagClass::AddTrigger(uint32_t *this, int a2)
{
    *(uint32_t *)(a2 + 40) = *(this + 10);
    *(this + 10) = a2;
    return a2;
}

int  TagClass::_vt10(int this, int a2, int a3)
{
    int v4; // eax
    int result; // eax
    if ( *(uint32_t *)(this + 36) == a2 )
    *(uint32_t *)(this + 36) = 0;
    v4 = *(uint32_t *)(this + 40);
    if ( v4 == a2 )
    *(uint32_t *)(this + 40) = *(uint32_t *)(v4 + 40);
    result = *(uint32_t *)(this + 36);
    if ( !result )
    *(uint8_t *)(this + 52) = 1;
    result = dword_B0F6A0;
    if ( g_LaserDrawConfig < dword_B0F6A0
    || (byte_B0F6A5 || !dword_B0F6A0)
    && dword_B0F6AC > 0
    && (result = (*(int (__thiscall **)(int *, int, uint32_t))(g_DiskLaserManager + 8))(
    &g_DiskLaserManager,
    dword_B0F6A0 + dword_B0F6AC,
    0),
    (uint8_t)result) )
    result = g_LaserDrawConfig++;
    *((uint32_t *)dword_B0F69C + result) = this;
    return result;
}

int __stdcall TagClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = 1425466418;
    a2[1] = 298977773;
    a2[2] = 1610655148;
    a2[3] = -1252326136;
    return 0;
}

int  TagClass::_vt13(int this, int *a2)
{
    int v3; // eax
    int v4; // eax
    int v5; // eax
    AbstractClass::ProcessPower((void*378 *)this);
    v3 = (*(int (__stdcall **)(int))(*(uint32_t *)(*(uint32_t *)(this + 36) + 4) + 16))(*(uint32_t *)(this + 36) + 4);
    Power::TimerProcess(v3);
    v4 = *(uint32_t *)(this + 40);
    if ( v4 )
    v5 = (*(int (__stdcall **)(int))(*(uint32_t *)(v4 + 4) + 16))(v4 + 4);
    v4 = Power::TimerProcess(v5);
    LOBYTE(v4) = *(uint8_t *)(this + 52);
    return Power::FlagProcess(a2, v4);
}

int __stdcall TagClass::_vt05(uint32_t *a1, int a2)
{
    int result; // eax
    result = AbstractClass::SaveLoad_Prefix_0(a1, a2);
    if ( result >= 0 )
    if ( a1 )
    AbstractClass::InitVtables(a1, (int)&a2);
    *a1 = &TagClass::`vftable';
    a1[1] = &TagClass::`vftable';
    a1[2] = &TagClass::`vftable';
    a1[3] = &TagClass::`vftable';
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 9);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 10);
    return 0;
    return result;
}

int __stdcall TagClass::_vt06(int *a1, int *a2, int a3)
{
    int result; // eax
    result = AbstractClass::SaveLoad_Prefix(a1, a2, a3);
    if ( result >= 0 )
    return 0;
    return result;
}

// 0x006E5850
char  TagClass::IsOnlyInstanceOfType(uint32_t *this)
{
    int v1; // edx
    char *i; // esi
    v1 = 0;
    if ( g_GameObjectCleanup <= 0 )
    return 1;
    for ( i = (char *)g_TagClassCount; *(uint32_t **)i == this || *(uint32_t *)(*(uint32_t *)i + 36) != *(this + 9); i += 4 )
    if ( ++v1 >= g_GameObjectCleanup )
    return 1;
    return 0;
}

int TagClass::_vt12()
{
    return 56;
}

int TagClass::_vt11()
{
    return 44;
}

void ** TagClass::_vt08(void **Block, char a2)
{
    TagClass::Destructor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

char  TagClass::HasValidHouse(uint32_t *this)
{
    uint32_t *v1; // esi
    v1 = (uint32_t *)*(this + 40);
    if ( !v1 )
    return 0;
    while ( !HouseClass::FindType15(v1) )
    v1 = (uint32_t *)v1[42];
    if ( !v1 )
    return 0;
    return 1;
}

